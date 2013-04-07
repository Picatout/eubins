// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _44fatal(object _errcode_16115, object _msg_16116, object _routine_name_16117, object _parms_16118)
{
// skipping _8969  name type: 0
// skipping _8968  name type: 0
// skipping _8967  name type: 0
// skipping _8965  name type: 0
// skipping _8964  name type: 0
    object _8963 = NOVALUE; // 16119 8963
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
    ((intptr_t*)_2)[1] = _errcode_16115;
    RefDS(_msg_16116);
    ((intptr_t*)_2)[2] = _msg_16116;
    RefDS(_routine_name_16117);
    ((intptr_t*)_2)[3] = _routine_name_16117;
    RefDS(_parms_16118);
    ((intptr_t*)_2)[4] = _parms_16118;
    _8963 = MAKE_SEQ(_1);
    // SubProg fatal pc: 20 op: APPEND (35)
    RefDS(_8963);
    Append(&_44vLastErrors_16112, _44vLastErrors_16112, _8963);
    DeRefDS(_8963);
    _8963 = NOVALUE;
    // SubProg fatal pc: 24 op: STARTLINE (58)

    /** eds.e:232		if db_fatal_id >= 0 then*/
    // SubProg fatal pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg fatal pc: 28 op: GREATEREQ_IFW_I (120)
    // SubProg fatal pc: 54 op: STARTLINE (58)

    /** eds.e:235	end procedure*/
    // SubProg fatal pc: 56 op: RETURNP (29)

// Exiting block BLOCK: fatal

// block var errcode_16115

// block var msg_16116
    DeRefDSi(_msg_16116);

// block var routine_name_16117
    DeRefDSi(_routine_name_16117);

// block var parms_16118
    DeRefDS(_parms_16118);
    return;
    // SubProg fatal pc: 59 op: BADRETURNF (43)
    ;
}


object _44get4()
{
    object _8979 = NOVALUE; // 16144 8979
    object _8978 = NOVALUE; // 16143 8978
    object _8977 = NOVALUE; // 16142 8977
    object _8976 = NOVALUE; // 16141 8976
    object _8975 = NOVALUE; // 16140 8975
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get4 pc: 1 op: STARTLINE (58)

    /** eds.e:250		poke(mem0, getc(current_db))*/
    // SubProg get4 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 7 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8975 = getc((FILE*)xstdin);
        }
        else{
            _8975 = getc(last_r_file_ptr);
        }
    }
    else{
        _8975 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 10 op: POKE (128)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke_addr = (uint8_t *)_44mem0_16130;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke_addr = (uint8_t)_8975;
    _8975 = NOVALUE;
    // SubProg get4 pc: 13 op: STARTLINE (58)

    /** eds.e:251		poke(mem1, getc(current_db))*/
    // SubProg get4 pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 19 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8976 = getc((FILE*)xstdin);
        }
        else{
            _8976 = getc(last_r_file_ptr);
        }
    }
    else{
        _8976 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 22 op: POKE (128)
    if (IS_ATOM_INT(_44mem1_16131)){
        poke_addr = (uint8_t *)_44mem1_16131;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem1_16131)->dbl);
    }
    *poke_addr = (uint8_t)_8976;
    _8976 = NOVALUE;
    // SubProg get4 pc: 25 op: STARTLINE (58)

    /** eds.e:252		poke(mem2, getc(current_db))*/
    // SubProg get4 pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 31 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8977 = getc((FILE*)xstdin);
        }
        else{
            _8977 = getc(last_r_file_ptr);
        }
    }
    else{
        _8977 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 34 op: POKE (128)
    if (IS_ATOM_INT(_44mem2_16132)){
        poke_addr = (uint8_t *)_44mem2_16132;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem2_16132)->dbl);
    }
    *poke_addr = (uint8_t)_8977;
    _8977 = NOVALUE;
    // SubProg get4 pc: 37 op: STARTLINE (58)

    /** eds.e:253		poke(mem3, getc(current_db))*/
    // SubProg get4 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 43 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8978 = getc((FILE*)xstdin);
        }
        else{
            _8978 = getc(last_r_file_ptr);
        }
    }
    else{
        _8978 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 46 op: POKE (128)
    if (IS_ATOM_INT(_44mem3_16133)){
        poke_addr = (uint8_t *)_44mem3_16133;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem3_16133)->dbl);
    }
    *poke_addr = (uint8_t)_8978;
    _8978 = NOVALUE;
    // SubProg get4 pc: 49 op: STARTLINE (58)

    /** eds.e:254		return peek4u(mem0)*/
    // SubProg get4 pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 53 op: PEEK4U (140)
    if (IS_ATOM_INT(_44mem0_16130)) {
        _8979 = (object)*(uint32_t *)_44mem0_16130;
        if ((uintptr_t)_8979 > (uintptr_t)MAXINT){
            _8979 = NewDouble((eudouble)(uintptr_t)_8979);
        }
    }
    else {
        _8979 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        if ((uintptr_t)_8979 > (uintptr_t)MAXINT){
            _8979 = NewDouble((eudouble)(uintptr_t)_8979);
        }
    }
    // SubProg get4 pc: 56 op: RETURNF (28)

// Exiting block BLOCK: get4
    return _8979;
    // SubProg get4 pc: 60 op: BADRETURNF (43)
    ;
}


object _44get_string()
{
    object _where_inlined_where_at_31_16158 = NOVALUE;
    object _s_16147 = NOVALUE;
    object _c_16148 = NOVALUE;
    object _i_16149 = NOVALUE;
    object _8992 = NOVALUE; // 16167 8992
// skipping _8991  name type: 0
// skipping _8990  name type: 0
    object _8989 = NOVALUE; // 16164 8989
// skipping _8988  name type: 0
    object _8987 = NOVALUE; // 16162 8987
// skipping _8986  name type: 0
    object _8985 = NOVALUE; // 16159 8985
// skipping _8982  name type: 0
// skipping _8981  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** eds.e:263		s = repeat(0, 256)*/
    // SubProg get_string pc: 3 op: REPEAT (32)
    DeRefi(_s_16147);
    _s_16147 = Repeat(0, 256);
    // SubProg get_string pc: 7 op: STARTLINE (58)

    /** eds.e:264		i = 0*/
    // SubProg get_string pc: 9 op: ASSIGN_I (113)
    _i_16149 = 0;
    // SubProg get_string pc: 12 op: STARTLINE (58)

    /** eds.e:265		while c with entry do*/
    // SubProg get_string pc: 14 op: ELSE (23)
    goto L1; // [14] 89
    // SubProg get_string pc: 16 op: NOPWHILE (158)
L2: // addr: 17 pc: 16 sub: 16145 op: 158
    // SubProg get_string pc: 17 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_string pc: 19 op: WHILE (47)
    if (_c_16148 == 0)
    {
        goto L3; // [19] 101
    }
    else{
    }
    // SubProg get_string pc: 22 op: STARTLINE (58)

    /** eds.e:266			if c = -1 then*/
    // SubProg get_string pc: 24 op: EQUALS_IFW_I (121)
    if (_c_16148 != -1)
    goto L4; // [24] 54
    // SubProg get_string pc: 28 op: STARTLINE (58)

    /** eds.e:267				fatal(MISSING_END, "string is missing 0 terminator", "get_string", {io:where(current_db)})*/
    // SubProg get_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 32 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg get_string pc: 34 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_31_16158);
    _where_inlined_where_at_31_16158 = machine(20, _44current_db_16088);
    // SubProg get_string pc: 38 op: NOP1 (159)
    // SubProg get_string pc: 39 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_31_16158);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_31_16158;
    _8985 = MAKE_SEQ(_1);
    // SubProg get_string pc: 43 op: PROC (27)
    RefDS(_8983);
    RefDS(_8984);
    _44fatal(900, _8983, _8984, _8985);
    _8985 = NOVALUE;
    // SubProg get_string pc: 49 op: STARTLINE (58)

    /** eds.e:268				exit*/
    // SubProg get_string pc: 51 op: EXIT (61)
    goto L3; // [51] 101
    // SubProg get_string pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 16145 op: 159
    // SubProg get_string pc: 54 op: STARTLINE (58)

    /** eds.e:270			i += 1*/
    // SubProg get_string pc: 56 op: PLUS1_I (117)
    _i_16149 = _i_16149 + 1;
    // SubProg get_string pc: 60 op: STARTLINE (58)

    /** eds.e:271			if i > length(s) then*/
    // SubProg get_string pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_s_16147)){
            _8987 = SEQ_PTR(_s_16147)->length;
    }
    else {
        _8987 = 1;
    }
    // SubProg get_string pc: 65 op: GREATER_IFW_I (124)
    if (_i_16149 <= _8987)
    goto L5; // [65] 80
    // SubProg get_string pc: 69 op: STARTLINE (58)

    /** eds.e:272				s &= repeat(0, 256)*/
    // SubProg get_string pc: 71 op: REPEAT (32)
    _8989 = Repeat(0, 256);
    // SubProg get_string pc: 75 op: CONCAT (15)
    Concat((object_ptr)&_s_16147, _s_16147, _8989);
    DeRefDS(_8989);
    _8989 = NOVALUE;
    // SubProg get_string pc: 79 op: NOP1 (159)
L5: // addr: 80 pc: 79 sub: 16145 op: 159
    // SubProg get_string pc: 80 op: STARTLINE (58)

    /** eds.e:274			s[i] = c*/
    // SubProg get_string pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_16147);
    _2 = (object)(((s1_ptr)_2)->base + _i_16149);
    *(intptr_t *)_2 = _c_16148;
    // SubProg get_string pc: 86 op: STARTLINE (58)

    /** eds.e:275		  entry*/
    // SubProg get_string pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 16145 op: 159
    // SubProg get_string pc: 89 op: STARTLINE (58)

    /** eds.e:276			c = getc(current_db)*/
    // SubProg get_string pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 93 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16148 = getc((FILE*)xstdin);
        }
        else{
            _c_16148 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16148 = getc(last_r_file_ptr);
    }
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** eds.e:277		end while*/
    // SubProg get_string pc: 98 op: ENDWHILE (22)
    goto L2; // [98] 17
    // SubProg get_string pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 16145 op: 159
    // SubProg get_string pc: 101 op: STARTLINE (58)

    /** eds.e:278		return s[1..i]*/
    // SubProg get_string pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8992;
    RHS_Slice(_s_16147, 1, _i_16149);
    // SubProg get_string pc: 108 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var s_16147
    DeRefDSi(_s_16147);

// block var c_16148

// block var i_16149
    return _8992;
    // SubProg get_string pc: 112 op: BADRETURNF (43)
    ;
}


object _44equal_string(object _target_16170)
{
    object _c_16171 = NOVALUE;
    object _i_16172 = NOVALUE;
    object _where_inlined_where_at_27_16178 = NOVALUE;
    object _9003 = NOVALUE; // 16189 9003
    object _9002 = NOVALUE; // 16188 9002
// skipping _9001  name type: 0
// skipping _9000  name type: 0
    object _8999 = NOVALUE; // 16185 8999
// skipping _8998  name type: 0
    object _8997 = NOVALUE; // 16182 8997
// skipping _8996  name type: 0
    object _8995 = NOVALUE; // 16179 8995
// skipping _8993  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg equal_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg equal_string pc: 3 op: STARTLINE (58)

    /** eds.e:286		i = 0*/
    // SubProg equal_string pc: 5 op: ASSIGN_I (113)
    _i_16172 = 0;
    // SubProg equal_string pc: 8 op: STARTLINE (58)

    /** eds.e:287		while c with entry do*/
    // SubProg equal_string pc: 10 op: ELSE (23)
    goto L1; // [10] 94
    // SubProg equal_string pc: 12 op: NOPWHILE (158)
L2: // addr: 13 pc: 12 sub: 16168 op: 158
    // SubProg equal_string pc: 13 op: PRIVATE_INIT_CHECK (30)
    // SubProg equal_string pc: 15 op: WHILE (47)
    if (_c_16171 == 0)
    {
        goto L3; // [15] 106
    }
    else{
    }
    // SubProg equal_string pc: 18 op: STARTLINE (58)

    /** eds.e:288			if c = -1 then*/
    // SubProg equal_string pc: 20 op: EQUALS_IFW_I (121)
    if (_c_16171 != -1)
    goto L4; // [20] 52
    // SubProg equal_string pc: 24 op: STARTLINE (58)

    /** eds.e:289				fatal(MISSING_END, "string is missing 0 terminator", "equal_string", {io:where(current_db)})*/
    // SubProg equal_string pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 28 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg equal_string pc: 30 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_27_16178);
    _where_inlined_where_at_27_16178 = machine(20, _44current_db_16088);
    // SubProg equal_string pc: 34 op: NOP1 (159)
    // SubProg equal_string pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_27_16178);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_27_16178;
    _8995 = MAKE_SEQ(_1);
    // SubProg equal_string pc: 39 op: PROC (27)
    RefDS(_8983);
    RefDS(_8994);
    _44fatal(900, _8983, _8994, _8995);
    _8995 = NOVALUE;
    // SubProg equal_string pc: 45 op: STARTLINE (58)

    /** eds.e:290				return DB_FATAL_FAIL*/
    // SubProg equal_string pc: 47 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16170
    DeRefDS(_target_16170);

// block var c_16171

// block var i_16172
    return -404;
    // SubProg equal_string pc: 51 op: NOP1 (159)
L4: // addr: 52 pc: 51 sub: 16168 op: 159
    // SubProg equal_string pc: 52 op: STARTLINE (58)

    /** eds.e:292			i += 1*/
    // SubProg equal_string pc: 54 op: PLUS1_I (117)
    _i_16172 = _i_16172 + 1;
    // SubProg equal_string pc: 58 op: STARTLINE (58)

    /** eds.e:293			if i > length(target) then*/
    // SubProg equal_string pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_target_16170)){
            _8997 = SEQ_PTR(_target_16170)->length;
    }
    else {
        _8997 = 1;
    }
    // SubProg equal_string pc: 63 op: GREATER_IFW_I (124)
    if (_i_16172 <= _8997)
    goto L5; // [63] 74
    // SubProg equal_string pc: 67 op: STARTLINE (58)

    /** eds.e:294				return 0*/
    // SubProg equal_string pc: 69 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16170
    DeRefDS(_target_16170);

// block var c_16171

// block var i_16172
    return 0;
    // SubProg equal_string pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 16168 op: 159
    // SubProg equal_string pc: 74 op: STARTLINE (58)

    /** eds.e:296			if target[i] != c then*/
    // SubProg equal_string pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_target_16170);
    _8999 = (object)*(((s1_ptr)_2)->base + _i_16172);
    // SubProg equal_string pc: 80 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _8999, _c_16171)){
        _8999 = NOVALUE;
        goto L6; // [80] 91
    }
    _8999 = NOVALUE;
    // SubProg equal_string pc: 84 op: STARTLINE (58)

    /** eds.e:297				return 0*/
    // SubProg equal_string pc: 86 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16170
    DeRefDS(_target_16170);

// block var c_16171

// block var i_16172
    return 0;
    // SubProg equal_string pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 16168 op: 159
    // SubProg equal_string pc: 91 op: STARTLINE (58)

    /** eds.e:299		  entry*/
    // SubProg equal_string pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 16168 op: 159
    // SubProg equal_string pc: 94 op: STARTLINE (58)

    /** eds.e:300			c = getc(current_db)*/
    // SubProg equal_string pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 98 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16171 = getc((FILE*)xstdin);
        }
        else{
            _c_16171 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16171 = getc(last_r_file_ptr);
    }
    // SubProg equal_string pc: 101 op: STARTLINE (58)

    /** eds.e:301		end while*/
    // SubProg equal_string pc: 103 op: ENDWHILE (22)
    goto L2; // [103] 13
    // SubProg equal_string pc: 105 op: NOP1 (159)
L3: // addr: 106 pc: 105 sub: 16168 op: 159
    // SubProg equal_string pc: 106 op: STARTLINE (58)

    /** eds.e:302		return (i = length(target))*/
    // SubProg equal_string pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_target_16170)){
            _9002 = SEQ_PTR(_target_16170)->length;
    }
    else {
        _9002 = 1;
    }
    // SubProg equal_string pc: 111 op: EQUALS (3)
    _9003 = (_i_16172 == _9002);
    _9002 = NOVALUE;
    // SubProg equal_string pc: 115 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16170
    DeRefDS(_target_16170);

// block var c_16171

// block var i_16172
    return _9003;
    // SubProg equal_string pc: 119 op: BADRETURNF (43)
    ;
}


object _44decompress(object _c_16229)
{
    object _s_16230 = NOVALUE;
    object _len_16231 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_176_16267 = NOVALUE;
    object _ieee32_inlined_float32_to_atom_at_173_16266 = NOVALUE;
    object _float64_to_atom_inlined_float64_to_atom_at_251_16280 = NOVALUE;
    object _ieee64_inlined_float64_to_atom_at_248_16279 = NOVALUE;
    object _9072 = NOVALUE; // 16297 9072
    object _9071 = NOVALUE; // 16296 9071
    object _9070 = NOVALUE; // 16294 9070
// skipping _9069  name type: 0
// skipping _9068  name type: 0
    object _9067 = NOVALUE; // 16290 9067
// skipping _9066  name type: 0
// skipping _9065  name type: 0
// skipping _9064  name type: 0
// skipping _9063  name type: 0
    object _9062 = NOVALUE; // 16277 9062
    object _9061 = NOVALUE; // 16276 9061
    object _9060 = NOVALUE; // 16275 9060
    object _9059 = NOVALUE; // 16274 9059
    object _9058 = NOVALUE; // 16273 9058
    object _9057 = NOVALUE; // 16272 9057
    object _9056 = NOVALUE; // 16271 9056
    object _9055 = NOVALUE; // 16270 9055
    object _9054 = NOVALUE; // 16269 9054
    object _9053 = NOVALUE; // 16264 9053
    object _9052 = NOVALUE; // 16263 9052
    object _9051 = NOVALUE; // 16262 9051
    object _9050 = NOVALUE; // 16261 9050
    object _9049 = NOVALUE; // 16260 9049
    object _9048 = NOVALUE; // 16258 9048
    object _9047 = NOVALUE; // 16257 9047
    object _9046 = NOVALUE; // 16255 9046
    object _9045 = NOVALUE; // 16254 9045
    object _9044 = NOVALUE; // 16253 9044
    object _9043 = NOVALUE; // 16252 9043
    object _9041 = NOVALUE; // 16250 9041
    object _9040 = NOVALUE; // 16249 9040
    object _9039 = NOVALUE; // 16248 9039
    object _9038 = NOVALUE; // 16247 9038
    object _9037 = NOVALUE; // 16245 9037
    object _9036 = NOVALUE; // 16244 9036
    object _9035 = NOVALUE; // 16243 9035
    object _9034 = NOVALUE; // 16242 9034
    object _9033 = NOVALUE; // 16241 9033
    object _9030 = NOVALUE; // 16237 9030
// skipping _9029  name type: 0
// skipping _9028  name type: 0
// skipping _9027  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decompress pc: 1 op: INTEGER_CHECK (96)
    // SubProg decompress pc: 3 op: STARTLINE (58)

    /** eds.e:332		if c = 0 then*/
    // SubProg decompress pc: 5 op: EQUALS_IFW_I (121)
    if (_c_16229 != 0)
    goto L1; // [5] 34
    // SubProg decompress pc: 9 op: STARTLINE (58)

    /** eds.e:333			c = getc(current_db)*/
    // SubProg decompress pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg decompress pc: 13 op: GETC (33)
    if (_44current_db_16088 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
        last_r_file_no = _44current_db_16088;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16229 = getc((FILE*)xstdin);
        }
        else{
            _c_16229 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16229 = getc(last_r_file_ptr);
    }
    // SubProg decompress pc: 16 op: STARTLINE (58)

    /** eds.e:334			if c < I2B then*/
    // SubProg decompress pc: 18 op: LESS_IFW_I (119)
    if (_c_16229 >= 249)
    goto L2; // [18] 33
    // SubProg decompress pc: 22 op: STARTLINE (58)

    /** eds.e:335				return c + MIN1B*/
    // SubProg decompress pc: 24 op: PLUS (11)
    _9030 = _c_16229 + -9;
    // SubProg decompress pc: 28 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
    DeRef(_s_16230);

// block var len_16231
    return _9030;
    // SubProg decompress pc: 32 op: NOP1 (159)
L2: // addr: 33 pc: 32 sub: 16227 op: 159
    // SubProg decompress pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 16227 op: 159
    // SubProg decompress pc: 34 op: STARTLINE (58)

    /** eds.e:339		switch c with fallthru do*/
    // SubProg decompress pc: 36 op: SWITCH_I (193)
    _0 = _c_16229;
    switch ( _0 ){ 
        // SubProg decompress pc: 41 op: STARTLINE (58)

        /** eds.e:340			case I2B then*/
        // SubProg decompress pc: 43 op: CASE (186)
        case 249:
        // SubProg decompress pc: 45 op: STARTLINE (58)

        /** eds.e:341				return getc(current_db) +*/
        // SubProg decompress pc: 47 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 49 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9033 = getc((FILE*)xstdin);
            }
            else{
                _9033 = getc(last_r_file_ptr);
            }
        }
        else{
            _9033 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 52 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 54 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9034 = getc((FILE*)xstdin);
            }
            else{
                _9034 = getc(last_r_file_ptr);
            }
        }
        else{
            _9034 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 57 op: MULTIPLY (13)
        _9035 = 256 * _9034;
        _9034 = NOVALUE;
        // SubProg decompress pc: 61 op: PLUS (11)
        _9036 = _9033 + _9035;
        _9033 = NOVALUE;
        _9035 = NOVALUE;
        // SubProg decompress pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 67 op: PLUS (11)
        _9037 = _9036 + _44MIN2B_16209;
        if ((object)((uintptr_t)_9037 + (uintptr_t)HIGH_BITS) >= 0){
            _9037 = NewDouble((eudouble)_9037);
        }
        _9036 = NOVALUE;
        // SubProg decompress pc: 71 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
        DeRef(_s_16230);

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        return _9037;
        // SubProg decompress pc: 75 op: STARTLINE (58)

        /** eds.e:345			case I3B then*/
        // SubProg decompress pc: 77 op: CASE (186)
        case 250:
        // SubProg decompress pc: 79 op: STARTLINE (58)

        /** eds.e:346				return getc(current_db) +*/
        // SubProg decompress pc: 81 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 83 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9038 = getc((FILE*)xstdin);
            }
            else{
                _9038 = getc(last_r_file_ptr);
            }
        }
        else{
            _9038 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 88 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9039 = getc((FILE*)xstdin);
            }
            else{
                _9039 = getc(last_r_file_ptr);
            }
        }
        else{
            _9039 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 91 op: MULTIPLY (13)
        _9040 = 256 * _9039;
        _9039 = NOVALUE;
        // SubProg decompress pc: 95 op: PLUS (11)
        _9041 = _9038 + _9040;
        _9038 = NOVALUE;
        _9040 = NOVALUE;
        // SubProg decompress pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 101 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9043 = getc((FILE*)xstdin);
            }
            else{
                _9043 = getc(last_r_file_ptr);
            }
        }
        else{
            _9043 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 104 op: MULTIPLY (13)
        _9044 = 65536 * _9043;
        _9043 = NOVALUE;
        // SubProg decompress pc: 108 op: PLUS (11)
        _9045 = _9041 + _9044;
        _9041 = NOVALUE;
        _9044 = NOVALUE;
        // SubProg decompress pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 114 op: PLUS (11)
        _9046 = _9045 + _44MIN3B_16216;
        if ((object)((uintptr_t)_9046 + (uintptr_t)HIGH_BITS) >= 0){
            _9046 = NewDouble((eudouble)_9046);
        }
        _9045 = NOVALUE;
        // SubProg decompress pc: 118 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
        DeRef(_s_16230);

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        DeRef(_9037);
        _9037 = NOVALUE;
        return _9046;
        // SubProg decompress pc: 122 op: STARTLINE (58)

        /** eds.e:351			case I4B then*/
        // SubProg decompress pc: 124 op: CASE (186)
        case 251:
        // SubProg decompress pc: 126 op: STARTLINE (58)

        /** eds.e:352				return get4() + MIN4B*/
        // SubProg decompress pc: 128 op: PROC (27)
        _9047 = _44get4();
        // SubProg decompress pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 133 op: PLUS (11)
        if (IS_ATOM_INT(_9047) && IS_ATOM_INT(_44MIN4B_16223)) {
            _9048 = _9047 + _44MIN4B_16223;
            if ((object)((uintptr_t)_9048 + (uintptr_t)HIGH_BITS) >= 0){
                _9048 = NewDouble((eudouble)_9048);
            }
        }
        else {
            _9048 = binary_op(PLUS, _9047, _44MIN4B_16223);
        }
        DeRef(_9047);
        _9047 = NOVALUE;
        // SubProg decompress pc: 137 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
        DeRef(_s_16230);

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        DeRef(_9046);
        _9046 = NOVALUE;
        DeRef(_9037);
        _9037 = NOVALUE;
        return _9048;
        // SubProg decompress pc: 141 op: STARTLINE (58)

        /** eds.e:354			case F4B then*/
        // SubProg decompress pc: 143 op: CASE (186)
        case 252:
        // SubProg decompress pc: 145 op: STARTLINE (58)

        /** eds.e:355				return convert:float32_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 149 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9049 = getc((FILE*)xstdin);
            }
            else{
                _9049 = getc(last_r_file_ptr);
            }
        }
        else{
            _9049 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 154 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9050 = getc((FILE*)xstdin);
            }
            else{
                _9050 = getc(last_r_file_ptr);
            }
        }
        else{
            _9050 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 159 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9051 = getc((FILE*)xstdin);
            }
            else{
                _9051 = getc(last_r_file_ptr);
            }
        }
        else{
            _9051 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 162 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 164 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9052 = getc((FILE*)xstdin);
            }
            else{
                _9052 = getc(last_r_file_ptr);
            }
        }
        else{
            _9052 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 167 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9049;
        ((intptr_t*)_2)[2] = _9050;
        ((intptr_t*)_2)[3] = _9051;
        ((intptr_t*)_2)[4] = _9052;
        _9053 = MAKE_SEQ(_1);
        _9052 = NOVALUE;
        _9051 = NOVALUE;
        _9050 = NOVALUE;
        _9049 = NOVALUE;
        // SubProg decompress pc: 174 op: ASSIGN (18)
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_16266);
        _ieee32_inlined_float32_to_atom_at_173_16266 = _9053;
        _9053 = NOVALUE;
        // SubProg decompress pc: 177 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 179 op: STARTLINE (58)

        /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
        // SubProg decompress pc: 181 op: MACHINE_FUNC (111)
        DeRef(_float32_to_atom_inlined_float32_to_atom_at_176_16267);
        _float32_to_atom_inlined_float32_to_atom_at_176_16267 = machine(49, _ieee32_inlined_float32_to_atom_at_173_16266);
        // SubProg decompress pc: 185 op: NOP1 (159)
        // SubProg decompress pc: 186 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float32_to_atom from decompress @ 173

// block var ieee32_inlined_float32_to_atom_at_173_16266
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_16266);
        _ieee32_inlined_float32_to_atom_at_173_16266 = NOVALUE;
        // SubProg decompress pc: 188 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
        DeRef(_s_16230);

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        DeRef(_9046);
        _9046 = NOVALUE;
        DeRef(_9048);
        _9048 = NOVALUE;
        DeRef(_9037);
        _9037 = NOVALUE;
        return _float32_to_atom_inlined_float32_to_atom_at_176_16267;
        // SubProg decompress pc: 192 op: STARTLINE (58)

        /** eds.e:358			case F8B then*/
        // SubProg decompress pc: 194 op: CASE (186)
        case 253:
        // SubProg decompress pc: 196 op: STARTLINE (58)

        /** eds.e:359				return convert:float64_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 198 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 200 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9054 = getc((FILE*)xstdin);
            }
            else{
                _9054 = getc(last_r_file_ptr);
            }
        }
        else{
            _9054 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 205 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9055 = getc((FILE*)xstdin);
            }
            else{
                _9055 = getc(last_r_file_ptr);
            }
        }
        else{
            _9055 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 208 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 210 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9056 = getc((FILE*)xstdin);
            }
            else{
                _9056 = getc(last_r_file_ptr);
            }
        }
        else{
            _9056 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 215 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9057 = getc((FILE*)xstdin);
            }
            else{
                _9057 = getc(last_r_file_ptr);
            }
        }
        else{
            _9057 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 220 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9058 = getc((FILE*)xstdin);
            }
            else{
                _9058 = getc(last_r_file_ptr);
            }
        }
        else{
            _9058 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 225 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9059 = getc((FILE*)xstdin);
            }
            else{
                _9059 = getc(last_r_file_ptr);
            }
        }
        else{
            _9059 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 230 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9060 = getc((FILE*)xstdin);
            }
            else{
                _9060 = getc(last_r_file_ptr);
            }
        }
        else{
            _9060 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 235 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9061 = getc((FILE*)xstdin);
            }
            else{
                _9061 = getc(last_r_file_ptr);
            }
        }
        else{
            _9061 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(8);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9054;
        ((intptr_t*)_2)[2] = _9055;
        ((intptr_t*)_2)[3] = _9056;
        ((intptr_t*)_2)[4] = _9057;
        ((intptr_t*)_2)[5] = _9058;
        ((intptr_t*)_2)[6] = _9059;
        ((intptr_t*)_2)[7] = _9060;
        ((intptr_t*)_2)[8] = _9061;
        _9062 = MAKE_SEQ(_1);
        _9061 = NOVALUE;
        _9060 = NOVALUE;
        _9059 = NOVALUE;
        _9058 = NOVALUE;
        _9057 = NOVALUE;
        _9056 = NOVALUE;
        _9055 = NOVALUE;
        _9054 = NOVALUE;
        // SubProg decompress pc: 249 op: ASSIGN (18)
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_16279);
        _ieee64_inlined_float64_to_atom_at_248_16279 = _9062;
        _9062 = NOVALUE;
        // SubProg decompress pc: 252 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 254 op: STARTLINE (58)

        /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
        // SubProg decompress pc: 256 op: MACHINE_FUNC (111)
        DeRef(_float64_to_atom_inlined_float64_to_atom_at_251_16280);
        _float64_to_atom_inlined_float64_to_atom_at_251_16280 = machine(47, _ieee64_inlined_float64_to_atom_at_248_16279);
        // SubProg decompress pc: 260 op: NOP1 (159)
        // SubProg decompress pc: 261 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float64_to_atom from decompress @ 248

// block var ieee64_inlined_float64_to_atom_at_248_16279
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_16279);
        _ieee64_inlined_float64_to_atom_at_248_16279 = NOVALUE;
        // SubProg decompress pc: 263 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var s_16230
        DeRef(_s_16230);

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        DeRef(_9046);
        _9046 = NOVALUE;
        DeRef(_9048);
        _9048 = NOVALUE;
        DeRef(_9037);
        _9037 = NOVALUE;
        return _float64_to_atom_inlined_float64_to_atom_at_251_16280;
        // SubProg decompress pc: 267 op: STARTLINE (58)

        /** eds.e:364			case else*/
        // SubProg decompress pc: 269 op: CASE (186)
        default:
        // SubProg decompress pc: 271 op: STARTLINE (58)

        /** eds.e:366				if c = S1B then*/
        // SubProg decompress pc: 273 op: EQUALS_IFW_I (121)
        if (_c_16229 != 254)
        goto L3; // [273] 287
        // SubProg decompress pc: 277 op: STARTLINE (58)

        /** eds.e:367					len = getc(current_db)*/
        // SubProg decompress pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 281 op: GETC (33)
        if (_44current_db_16088 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
            last_r_file_no = _44current_db_16088;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _len_16231 = getc((FILE*)xstdin);
            }
            else{
                _len_16231 = getc(last_r_file_ptr);
            }
        }
        else{
            _len_16231 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 284 op: ELSE (23)
        goto L4; // [284] 295
        // SubProg decompress pc: 286 op: NOP1 (159)
L3: // addr: 287 pc: 286 sub: 16227 op: 159
        // SubProg decompress pc: 287 op: STARTLINE (58)

        /** eds.e:369					len = get4()*/
        // SubProg decompress pc: 289 op: PROC (27)
        _len_16231 = _44get4();
        // SubProg decompress pc: 292 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_len_16231)) {
            _1 = (object)(DBL_PTR(_len_16231)->dbl);
            DeRefDS(_len_16231);
            _len_16231 = _1;
        }
        // SubProg decompress pc: 294 op: NOP1 (159)
L4: // addr: 295 pc: 294 sub: 16227 op: 159
        // SubProg decompress pc: 295 op: STARTLINE (58)

        /** eds.e:371				s = repeat(0, len)*/
        // SubProg decompress pc: 297 op: PRIVATE_INIT_CHECK (30)
        // SubProg decompress pc: 299 op: REPEAT (32)
        DeRef(_s_16230);
        _s_16230 = Repeat(0, _len_16231);
        // SubProg decompress pc: 303 op: STARTLINE (58)

        /** eds.e:372				for i = 1 to len do*/
        // SubProg decompress pc: 305 op: ASSIGN (18)
        _9067 = _len_16231;
        // SubProg decompress pc: 308 op: FOR_I (125)
        {
            object _i_16289;
            _i_16289 = 1;
L5: // addr: 315 pc: 308 sub: 16227 op: 125
            if (_i_16289 > _9067){
                goto L6; // [308] 362
            }
            // SubProg decompress pc: 315 op: STARTLINE (58)

            /** eds.e:374					c = getc(current_db)*/
            // SubProg decompress pc: 317 op: GLOBAL_INIT_CHECK (109)
            // SubProg decompress pc: 319 op: GETC (33)
            if (_44current_db_16088 != last_r_file_no) {
                last_r_file_ptr = which_file(_44current_db_16088, EF_READ);
                last_r_file_no = _44current_db_16088;
            }
            if (last_r_file_ptr == xstdin) {
                if (in_from_keyb) {
                    _c_16229 = getc((FILE*)xstdin);
                }
                else{
                    _c_16229 = getc(last_r_file_ptr);
                }
            }
            else{
                _c_16229 = getc(last_r_file_ptr);
            }
            // SubProg decompress pc: 322 op: STARTLINE (58)

            /** eds.e:375					if c < I2B then*/
            // SubProg decompress pc: 324 op: LESS_IFW_I (119)
            if (_c_16229 >= 249)
            goto L7; // [324] 341
            // SubProg decompress pc: 328 op: STARTLINE (58)

            /** eds.e:376						s[i] = c + MIN1B*/
            // SubProg decompress pc: 330 op: PLUS (11)
            _9070 = _c_16229 + -9;
            // SubProg decompress pc: 334 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_16230);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_16230 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_16289);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9070;
            if( _1 != _9070 ){
                DeRef(_1);
            }
            _9070 = NOVALUE;
            // SubProg decompress pc: 338 op: ELSE (23)
            goto L8; // [338] 355
            // SubProg decompress pc: 340 op: NOP1 (159)
L7: // addr: 341 pc: 340 sub: 16227 op: 159
            // SubProg decompress pc: 341 op: STARTLINE (58)

            /** eds.e:378						s[i] = decompress(c)*/
            // SubProg decompress pc: 343 op: ASSIGN (18)
            DeRef(_9071);
            _9071 = _c_16229;
            // SubProg decompress pc: 346 op: PROC (27)
            _9072 = _44decompress(_9071);
            _9071 = NOVALUE;
            // SubProg decompress pc: 350 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_16230);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_16230 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_16289);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9072;
            if( _1 != _9072 ){
                DeRef(_1);
            }
            _9072 = NOVALUE;
            // SubProg decompress pc: 354 op: NOP1 (159)
L8: // addr: 355 pc: 354 sub: 16227 op: 159
            // SubProg decompress pc: 355 op: STARTLINE (58)

            /** eds.e:380				end for*/
            // SubProg decompress pc: 357 op: ENDFOR_INT_UP1 (54)
            _i_16289 = _i_16289 + 1;
            goto L5; // [357] 315
L6: // addr: 362 pc: 357 sub: 16227 op: 54
            ;
        }
        // SubProg decompress pc: 362 op: STARTLINE (58)

        /** eds.e:381				return s*/
        // SubProg decompress pc: 364 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16229

// block var len_16231
        DeRef(_9030);
        _9030 = NOVALUE;
        DeRef(_9046);
        _9046 = NOVALUE;
        DeRef(_9048);
        _9048 = NOVALUE;
        DeRef(_9037);
        _9037 = NOVALUE;
        return _s_16230;
        // SubProg decompress pc: 368 op: NOPSWITCH (187)
    ;}    // SubProg decompress pc: 369 op: BADRETURNF (43)
    ;
}


object _44compress(object _x_16300)
{
    object _x4_16301 = NOVALUE;
    object _s_16302 = NOVALUE;
    object _atom_to_float32_inlined_atom_to_float32_at_193_16336 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_204_16339 = NOVALUE;
    object _atom_to_float64_inlined_atom_to_float64_at_230_16344 = NOVALUE;
// skipping _9112  name type: 0
    object _9111 = NOVALUE; // 16360 9111
    object _9110 = NOVALUE; // 16359 9110
    object _9109 = NOVALUE; // 16358 9109
// skipping _9108  name type: 0
    object _9107 = NOVALUE; // 16354 9107
    object _9106 = NOVALUE; // 16353 9106
// skipping _9105  name type: 0
    object _9104 = NOVALUE; // 16350 9104
// skipping _9103  name type: 0
    object _9102 = NOVALUE; // 16348 9102
    object _9101 = NOVALUE; // 16345 9101
    object _9100 = NOVALUE; // 16341 9100
// skipping _9099  name type: 0
    object _9098 = NOVALUE; // 16334 9098
    object _9097 = NOVALUE; // 16332 9097
    object _9096 = NOVALUE; // 16331 9096
    object _9095 = NOVALUE; // 16330 9095
    object _9094 = NOVALUE; // 16328 9094
    object _9093 = NOVALUE; // 16327 9093
    object _9092 = NOVALUE; // 16326 9092
    object _9091 = NOVALUE; // 16325 9091
    object _9090 = NOVALUE; // 16324 9090
// skipping _9089  name type: 0
    object _9088 = NOVALUE; // 16322 9088
    object _9087 = NOVALUE; // 16321 9087
    object _9086 = NOVALUE; // 16320 9086
    object _9085 = NOVALUE; // 16318 9085
    object _9084 = NOVALUE; // 16317 9084
    object _9083 = NOVALUE; // 16316 9083
// skipping _9082  name type: 0
    object _9081 = NOVALUE; // 16314 9081
    object _9080 = NOVALUE; // 16313 9080
    object _9079 = NOVALUE; // 16312 9079
    object _9078 = NOVALUE; // 16310 9078
    object _9077 = NOVALUE; // 16309 9077
    object _9076 = NOVALUE; // 16308 9076
    object _9075 = NOVALUE; // 16307 9075
    object _9074 = NOVALUE; // 16306 9074
    object _9073 = NOVALUE; // 16304 9073
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg compress pc: 1 op: STARTLINE (58)

    /** eds.e:390		if integer(x) then*/
    // SubProg compress pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_x_16300))
    _9073 = 1;
    else if (IS_ATOM_DBL(_x_16300))
    _9073 = IS_ATOM_INT(DoubleToInt(_x_16300));
    else
    _9073 = 0;
    // SubProg compress pc: 6 op: IF (20)
    if (_9073 == 0)
    {
        _9073 = NOVALUE;
        goto L1; // [6] 184
    }
    else{
        _9073 = NOVALUE;
    }
    // SubProg compress pc: 9 op: STARTLINE (58)

    /** eds.e:391			if x >= MIN1B and x <= MAX1B then*/
    // SubProg compress pc: 11 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16300)) {
        _9074 = (_x_16300 >= -9);
    }
    else {
        _9074 = binary_op(GREATEREQ, _x_16300, -9);
    }
    // SubProg compress pc: 15 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9074)) {
        if (_9074 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_9074)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    // SubProg compress pc: 19 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16300)) {
        _9076 = (_x_16300 <= 239);
    }
    else {
        _9076 = binary_op(LESSEQ, _x_16300, 239);
    }
    // SubProg compress pc: 23 op: NOP1 (159)
    // SubProg compress pc: 24 op: IF (20)
    if (_9076 == 0) {
        DeRef(_9076);
        _9076 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_9076) && DBL_PTR(_9076)->dbl == 0.0){
            DeRef(_9076);
            _9076 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_9076);
        _9076 = NOVALUE;
    }
    DeRef(_9076);
    _9076 = NOVALUE;
    // SubProg compress pc: 27 op: STARTLINE (58)

    /** eds.e:392				return {x - MIN1B}*/
    // SubProg compress pc: 29 op: MINUS (10)
    if (IS_ATOM_INT(_x_16300)) {
        _9077 = _x_16300 - -9;
        if ((object)((uintptr_t)_9077 +(uintptr_t) HIGH_BITS) >= 0){
            _9077 = NewDouble((eudouble)_9077);
        }
    }
    else {
        _9077 = binary_op(MINUS, _x_16300, -9);
    }
    // SubProg compress pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _9077;
    _9078 = MAKE_SEQ(_1);
    _9077 = NOVALUE;
    // SubProg compress pc: 37 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9074);
    _9074 = NOVALUE;
    return _9078;
    // SubProg compress pc: 41 op: ELSE (23)
    goto L3; // [41] 330
    // SubProg compress pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 16298 op: 159
    // SubProg compress pc: 44 op: STARTLINE (58)

    /** eds.e:394			elsif x >= MIN2B and x <= MAX2B then*/
    // SubProg compress pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 48 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16300)) {
        _9079 = (_x_16300 >= _44MIN2B_16209);
    }
    else {
        _9079 = binary_op(GREATEREQ, _x_16300, _44MIN2B_16209);
    }
    // SubProg compress pc: 52 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9079)) {
        if (_9079 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_9079)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    // SubProg compress pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16300)) {
        _9081 = (_x_16300 <= 32767);
    }
    else {
        _9081 = binary_op(LESSEQ, _x_16300, 32767);
    }
    // SubProg compress pc: 62 op: NOP1 (159)
    // SubProg compress pc: 63 op: IF (20)
    if (_9081 == 0) {
        DeRef(_9081);
        _9081 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_9081) && DBL_PTR(_9081)->dbl == 0.0){
            DeRef(_9081);
            _9081 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_9081);
        _9081 = NOVALUE;
    }
    DeRef(_9081);
    _9081 = NOVALUE;
    // SubProg compress pc: 66 op: STARTLINE (58)

    /** eds.e:395				x -= MIN2B*/
    // SubProg compress pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 70 op: MINUS (10)
    _0 = _x_16300;
    if (IS_ATOM_INT(_x_16300)) {
        _x_16300 = _x_16300 - _44MIN2B_16209;
        if ((object)((uintptr_t)_x_16300 +(uintptr_t) HIGH_BITS) >= 0){
            _x_16300 = NewDouble((eudouble)_x_16300);
        }
    }
    else {
        _x_16300 = binary_op(MINUS, _x_16300, _44MIN2B_16209);
    }
    DeRef(_0);
    // SubProg compress pc: 74 op: STARTLINE (58)

    /** eds.e:396				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    // SubProg compress pc: 76 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_16300)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_16300 & (uintptr_t)255;
             _9083 = MAKE_UINT(tu);
        }
    }
    else {
        _9083 = binary_op(AND_BITS, _x_16300, 255);
    }
    // SubProg compress pc: 80 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16300)) {
        if (256 > 0 && _x_16300 >= 0) {
            _9084 = _x_16300 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16300 / (eudouble)256);
            if (_x_16300 != MININT)
            _9084 = (object)temp_dbl;
            else
            _9084 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16300, 256);
        _9084 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 249;
    ((intptr_t*)_2)[2] = _9083;
    ((intptr_t*)_2)[3] = _9084;
    _9085 = MAKE_SEQ(_1);
    _9084 = NOVALUE;
    _9083 = NOVALUE;
    // SubProg compress pc: 90 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    return _9085;
    // SubProg compress pc: 94 op: ELSE (23)
    goto L3; // [94] 330
    // SubProg compress pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 16298 op: 159
    // SubProg compress pc: 97 op: STARTLINE (58)

    /** eds.e:398			elsif x >= MIN3B and x <= MAX3B then*/
    // SubProg compress pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 101 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16300)) {
        _9086 = (_x_16300 >= _44MIN3B_16216);
    }
    else {
        _9086 = binary_op(GREATEREQ, _x_16300, _44MIN3B_16216);
    }
    // SubProg compress pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9086)) {
        if (_9086 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_9086)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    // SubProg compress pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 111 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16300)) {
        _9088 = (_x_16300 <= 8388607);
    }
    else {
        _9088 = binary_op(LESSEQ, _x_16300, 8388607);
    }
    // SubProg compress pc: 115 op: NOP1 (159)
    // SubProg compress pc: 116 op: IF (20)
    if (_9088 == 0) {
        DeRef(_9088);
        _9088 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_9088) && DBL_PTR(_9088)->dbl == 0.0){
            DeRef(_9088);
            _9088 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_9088);
        _9088 = NOVALUE;
    }
    DeRef(_9088);
    _9088 = NOVALUE;
    // SubProg compress pc: 119 op: STARTLINE (58)

    /** eds.e:399				x -= MIN3B*/
    // SubProg compress pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 123 op: MINUS (10)
    _0 = _x_16300;
    if (IS_ATOM_INT(_x_16300)) {
        _x_16300 = _x_16300 - _44MIN3B_16216;
        if ((object)((uintptr_t)_x_16300 +(uintptr_t) HIGH_BITS) >= 0){
            _x_16300 = NewDouble((eudouble)_x_16300);
        }
    }
    else {
        _x_16300 = binary_op(MINUS, _x_16300, _44MIN3B_16216);
    }
    DeRef(_0);
    // SubProg compress pc: 127 op: STARTLINE (58)

    /** eds.e:400				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    // SubProg compress pc: 129 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_16300)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_16300 & (uintptr_t)255;
             _9090 = MAKE_UINT(tu);
        }
    }
    else {
        _9090 = binary_op(AND_BITS, _x_16300, 255);
    }
    // SubProg compress pc: 133 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16300)) {
        if (256 > 0 && _x_16300 >= 0) {
            _9091 = _x_16300 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16300 / (eudouble)256);
            if (_x_16300 != MININT)
            _9091 = (object)temp_dbl;
            else
            _9091 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16300, 256);
        _9091 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 137 op: AND_BITS (56)
    if (IS_ATOM_INT(_9091)) {
        {uintptr_t tu;
             tu = (uintptr_t)_9091 & (uintptr_t)255;
             _9092 = MAKE_UINT(tu);
        }
    }
    else {
        _9092 = binary_op(AND_BITS, _9091, 255);
    }
    DeRef(_9091);
    _9091 = NOVALUE;
    // SubProg compress pc: 141 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16300)) {
        if (65536 > 0 && _x_16300 >= 0) {
            _9093 = _x_16300 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16300 / (eudouble)65536);
            if (_x_16300 != MININT)
            _9093 = (object)temp_dbl;
            else
            _9093 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16300, 65536);
        _9093 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 145 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 250;
    ((intptr_t*)_2)[2] = _9090;
    ((intptr_t*)_2)[3] = _9092;
    ((intptr_t*)_2)[4] = _9093;
    _9094 = MAKE_SEQ(_1);
    _9093 = NOVALUE;
    _9092 = NOVALUE;
    _9090 = NOVALUE;
    // SubProg compress pc: 152 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9085);
    _9085 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9086);
    _9086 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    return _9094;
    // SubProg compress pc: 156 op: ELSE (23)
    goto L3; // [156] 330
    // SubProg compress pc: 158 op: NOP1 (159)
L5: // addr: 159 pc: 158 sub: 16298 op: 159
    // SubProg compress pc: 159 op: STARTLINE (58)

    /** eds.e:403				return I4B & convert:int_to_bytes(x-MIN4B)*/
    // SubProg compress pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 163 op: MINUS (10)
    if (IS_ATOM_INT(_x_16300) && IS_ATOM_INT(_44MIN4B_16223)) {
        _9095 = _x_16300 - _44MIN4B_16223;
        if ((object)((uintptr_t)_9095 +(uintptr_t) HIGH_BITS) >= 0){
            _9095 = NewDouble((eudouble)_9095);
        }
    }
    else {
        _9095 = binary_op(MINUS, _x_16300, _44MIN4B_16223);
    }
    // SubProg compress pc: 167 op: PROC (27)
    _9096 = _21int_to_bytes(_9095, 4);
    _9095 = NOVALUE;
    // SubProg compress pc: 172 op: CONCAT (15)
    if (IS_SEQUENCE(251) && IS_ATOM(_9096)) {
    }
    else if (IS_ATOM(251) && IS_SEQUENCE(_9096)) {
        Prepend(&_9097, _9096, 251);
    }
    else {
        Concat((object_ptr)&_9097, 251, _9096);
    }
    DeRef(_9096);
    _9096 = NOVALUE;
    // SubProg compress pc: 176 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9085);
    _9085 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9086);
    _9086 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    DeRef(_9094);
    _9094 = NOVALUE;
    return _9097;
    // SubProg compress pc: 180 op: NOP1 (159)
    // SubProg compress pc: 181 op: ELSE (23)
    goto L3; // [181] 330
    // SubProg compress pc: 183 op: NOP1 (159)
L1: // addr: 184 pc: 183 sub: 16298 op: 159
    // SubProg compress pc: 184 op: STARTLINE (58)

    /** eds.e:407		elsif atom(x) then*/
    // SubProg compress pc: 186 op: IS_AN_ATOM (67)
    _9098 = IS_ATOM(_x_16300);
    // SubProg compress pc: 189 op: IF (20)
    if (_9098 == 0)
    {
        _9098 = NOVALUE;
        goto L6; // [189] 250
    }
    else{
        _9098 = NOVALUE;
    }
    // SubProg compress pc: 192 op: STARTLINE (58)

    /** eds.e:409			x4 = convert:atom_to_float32(x)*/
    // SubProg compress pc: 194 op: STARTLINE (58)

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    // SubProg compress pc: 196 op: MACHINE_FUNC (111)
    DeRefi(_x4_16301);
    _x4_16301 = machine(48, _x_16300);
    // SubProg compress pc: 200 op: NOP1 (159)
    // SubProg compress pc: 201 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 203 op: STARTLINE (58)

    /** eds.e:410			if x = convert:float32_to_atom(x4) then*/
    // SubProg compress pc: 205 op: STARTLINE (58)

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    // SubProg compress pc: 207 op: MACHINE_FUNC (111)
    DeRef(_float32_to_atom_inlined_float32_to_atom_at_204_16339);
    _float32_to_atom_inlined_float32_to_atom_at_204_16339 = machine(49, _x4_16301);
    // SubProg compress pc: 211 op: NOP1 (159)
    // SubProg compress pc: 212 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_16300, _float32_to_atom_inlined_float32_to_atom_at_204_16339)){
        goto L7; // [212] 229
    }
    // SubProg compress pc: 216 op: STARTLINE (58)

    /** eds.e:412				return F4B & x4*/
    // SubProg compress pc: 218 op: CONCAT (15)
    Prepend(&_9100, _x4_16301, 252);
    // SubProg compress pc: 222 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefDSi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9085);
    _9085 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9086);
    _9086 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    DeRef(_9094);
    _9094 = NOVALUE;
    return _9100;
    // SubProg compress pc: 226 op: ELSE (23)
    goto L3; // [226] 330
    // SubProg compress pc: 228 op: NOP1 (159)
L7: // addr: 229 pc: 228 sub: 16298 op: 159
    // SubProg compress pc: 229 op: STARTLINE (58)

    /** eds.e:414				return F8B & convert:atom_to_float64(x)*/
    // SubProg compress pc: 231 op: STARTLINE (58)

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    // SubProg compress pc: 233 op: MACHINE_FUNC (111)
    DeRefi(_atom_to_float64_inlined_atom_to_float64_at_230_16344);
    _atom_to_float64_inlined_atom_to_float64_at_230_16344 = machine(46, _x_16300);
    // SubProg compress pc: 237 op: NOP1 (159)
    // SubProg compress pc: 238 op: CONCAT (15)
    Prepend(&_9101, _atom_to_float64_inlined_atom_to_float64_at_230_16344, 253);
    // SubProg compress pc: 242 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);

// block var s_16302
    DeRef(_s_16302);
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9085);
    _9085 = NOVALUE;
    DeRef(_9100);
    _9100 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9086);
    _9086 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    DeRef(_9094);
    _9094 = NOVALUE;
    return _9101;
    // SubProg compress pc: 246 op: NOP1 (159)
    // SubProg compress pc: 247 op: ELSE (23)
    goto L3; // [247] 330
    // SubProg compress pc: 249 op: NOP1 (159)
L6: // addr: 250 pc: 249 sub: 16298 op: 159
    // SubProg compress pc: 250 op: STARTLINE (58)

    /** eds.e:419			if length(x) <= 255 then*/
    // SubProg compress pc: 252 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16300)){
            _9102 = SEQ_PTR(_x_16300)->length;
    }
    else {
        _9102 = 1;
    }
    // SubProg compress pc: 255 op: LESSEQ_IFW_I (123)
    if (_9102 > 255)
    goto L8; // [255] 271
    // SubProg compress pc: 259 op: STARTLINE (58)

    /** eds.e:420				s = {S1B, length(x)}*/
    // SubProg compress pc: 261 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16300)){
            _9104 = SEQ_PTR(_x_16300)->length;
    }
    else {
        _9104 = 1;
    }
    // SubProg compress pc: 264 op: RIGHT_BRACE_2 (85)
    DeRef(_s_16302);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _9104;
    _s_16302 = MAKE_SEQ(_1);
    _9104 = NOVALUE;
    // SubProg compress pc: 268 op: ELSE (23)
    goto L9; // [268] 286
    // SubProg compress pc: 270 op: NOP1 (159)
L8: // addr: 271 pc: 270 sub: 16298 op: 159
    // SubProg compress pc: 271 op: STARTLINE (58)

    /** eds.e:422				s = S4B & convert:int_to_bytes(length(x))*/
    // SubProg compress pc: 273 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16300)){
            _9106 = SEQ_PTR(_x_16300)->length;
    }
    else {
        _9106 = 1;
    }
    // SubProg compress pc: 276 op: PROC (27)
    _9107 = _21int_to_bytes(_9106, 4);
    _9106 = NOVALUE;
    // SubProg compress pc: 281 op: CONCAT (15)
    if (IS_SEQUENCE(255) && IS_ATOM(_9107)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_9107)) {
        Prepend(&_s_16302, _9107, 255);
    }
    else {
        Concat((object_ptr)&_s_16302, 255, _9107);
    }
    DeRef(_9107);
    _9107 = NOVALUE;
    // SubProg compress pc: 285 op: NOP1 (159)
L9: // addr: 286 pc: 285 sub: 16298 op: 159
    // SubProg compress pc: 286 op: STARTLINE (58)

    /** eds.e:424			for i = 1 to length(x) do*/
    // SubProg compress pc: 288 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16300)){
            _9109 = SEQ_PTR(_x_16300)->length;
    }
    else {
        _9109 = 1;
    }
    // SubProg compress pc: 291 op: FOR_I (125)
    {
        object _i_16357;
        _i_16357 = 1;
LA: // addr: 298 pc: 291 sub: 16298 op: 125
        if (_i_16357 > _9109){
            goto LB; // [291] 321
        }
        // SubProg compress pc: 298 op: STARTLINE (58)

        /** eds.e:425				s &= compress(x[i])*/
        // SubProg compress pc: 300 op: PRIVATE_INIT_CHECK (30)
        // SubProg compress pc: 302 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_16300);
        _9110 = (object)*(((s1_ptr)_2)->base + _i_16357);
        // SubProg compress pc: 306 op: PROC (27)
        Ref(_9110);
        _9111 = _44compress(_9110);
        _9110 = NOVALUE;
        // SubProg compress pc: 310 op: CONCAT (15)
        if (IS_SEQUENCE(_s_16302) && IS_ATOM(_9111)) {
            Ref(_9111);
            Append(&_s_16302, _s_16302, _9111);
        }
        else if (IS_ATOM(_s_16302) && IS_SEQUENCE(_9111)) {
        }
        else {
            Concat((object_ptr)&_s_16302, _s_16302, _9111);
        }
        DeRef(_9111);
        _9111 = NOVALUE;
        // SubProg compress pc: 314 op: STARTLINE (58)

        /** eds.e:426			end for*/
        // SubProg compress pc: 316 op: ENDFOR_INT_UP1 (54)
        _i_16357 = _i_16357 + 1;
        goto LA; // [316] 298
LB: // addr: 321 pc: 316 sub: 16298 op: 54
        ;
    }
    // SubProg compress pc: 321 op: STARTLINE (58)

    /** eds.e:427			return s*/
    // SubProg compress pc: 323 op: PRIVATE_INIT_CHECK (30)
    // SubProg compress pc: 325 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16300
    DeRef(_x_16300);

// block var x4_16301
    DeRefi(_x4_16301);
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9074);
    _9074 = NOVALUE;
    DeRef(_9085);
    _9085 = NOVALUE;
    DeRef(_9100);
    _9100 = NOVALUE;
    DeRef(_9079);
    _9079 = NOVALUE;
    DeRef(_9086);
    _9086 = NOVALUE;
    DeRef(_9101);
    _9101 = NOVALUE;
    DeRef(_9078);
    _9078 = NOVALUE;
    DeRef(_9094);
    _9094 = NOVALUE;
    return _s_16302;
    // SubProg compress pc: 329 op: NOP1 (159)
L3: // addr: 330 pc: 329 sub: 16298 op: 159
    // SubProg compress pc: 330 op: BADRETURNF (43)
    ;
}


object _44db_allocate(object _n_16741)
{
    object _free_list_16742 = NOVALUE;
    object _size_16743 = NOVALUE;
    object _size_ptr_16744 = NOVALUE;
    object _addr_16745 = NOVALUE;
    object _free_count_16746 = NOVALUE;
    object _remaining_16747 = NOVALUE;
    object _seek_1__tmp_at4_16750 = NOVALUE;
    object _seek_inlined_seek_at_4_16749 = NOVALUE;
    object _seek_1__tmp_at39_16757 = NOVALUE;
    object _seek_inlined_seek_at_39_16756 = NOVALUE;
    object _seek_1__tmp_at111_16774 = NOVALUE;
    object _seek_inlined_seek_at_111_16773 = NOVALUE;
    object _pos_inlined_seek_at_108_16772 = NOVALUE;
    object _put4_1__tmp_at137_16779 = NOVALUE;
    object _x_inlined_put4_at_134_16778 = NOVALUE;
    object _seek_1__tmp_at167_16782 = NOVALUE;
    object _seek_inlined_seek_at_167_16781 = NOVALUE;
    object _put4_1__tmp_at193_16787 = NOVALUE;
    object _x_inlined_put4_at_190_16786 = NOVALUE;
    object _seek_1__tmp_at244_16795 = NOVALUE;
    object _seek_inlined_seek_at_244_16794 = NOVALUE;
    object _pos_inlined_seek_at_241_16793 = NOVALUE;
    object _put4_1__tmp_at266_16799 = NOVALUE;
    object _x_inlined_put4_at_263_16798 = NOVALUE;
    object _seek_1__tmp_at333_16810 = NOVALUE;
    object _seek_inlined_seek_at_333_16809 = NOVALUE;
    object _pos_inlined_seek_at_330_16808 = NOVALUE;
    object _seek_1__tmp_at364_16814 = NOVALUE;
    object _seek_inlined_seek_at_364_16813 = NOVALUE;
    object _put4_1__tmp_at386_16818 = NOVALUE;
    object _x_inlined_put4_at_383_16817 = NOVALUE;
    object _seek_1__tmp_at423_16823 = NOVALUE;
    object _seek_inlined_seek_at_423_16822 = NOVALUE;
    object _pos_inlined_seek_at_420_16821 = NOVALUE;
    object _put4_1__tmp_at438_16825 = NOVALUE;
    object _seek_1__tmp_at490_16829 = NOVALUE;
    object _seek_inlined_seek_at_490_16828 = NOVALUE;
    object _put4_1__tmp_at512_16833 = NOVALUE;
    object _x_inlined_put4_at_509_16832 = NOVALUE;
    object _where_inlined_where_at_542_16835 = NOVALUE;
    object _9323 = NOVALUE; // 16830 9323
// skipping _9322  name type: 0
    object _9321 = NOVALUE; // 16819 9321
    object _9320 = NOVALUE; // 16815 9320
    object _9319 = NOVALUE; // 16806 9319
    object _9318 = NOVALUE; // 16805 9318
    object _9317 = NOVALUE; // 16804 9317
// skipping _9316  name type: 0
    object _9315 = NOVALUE; // 16802 9315
    object _9314 = NOVALUE; // 16801 9314
    object _9313 = NOVALUE; // 16796 9313
    object _9312 = NOVALUE; // 16791 9312
// skipping _9311  name type: 0
    object _9310 = NOVALUE; // 16789 9310
    object _9309 = NOVALUE; // 16788 9309
    object _9308 = NOVALUE; // 16784 9308
    object _9307 = NOVALUE; // 16783 9307
    object _9306 = NOVALUE; // 16776 9306
    object _9305 = NOVALUE; // 16775 9305
    object _9304 = NOVALUE; // 16770 9304
// skipping _9303  name type: 0
    object _9302 = NOVALUE; // 16768 9302
// skipping _9301  name type: 0
    object _9300 = NOVALUE; // 16765 9300
// skipping _9299  name type: 0
// skipping _9298  name type: 0
    object _9297 = NOVALUE; // 16761 9297
// skipping _9296  name type: 0
// skipping _9295  name type: 0
// skipping _9294  name type: 0
// skipping _9293  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_allocate pc: 1 op: STARTLINE (58)

    /** eds.e:795		io:seek(current_db, FREE_COUNT)*/
    // SubProg db_allocate pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 5 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 7 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at4_16750);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at4_16750 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 11 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_4_16749 = machine(19, _seek_1__tmp_at4_16750);
    // SubProg db_allocate pc: 15 op: NOP1 (159)
    // SubProg db_allocate pc: 16 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 4

// block var seek_1__tmp_at4_16750
    DeRefi(_seek_1__tmp_at4_16750);
    _seek_1__tmp_at4_16750 = NOVALUE;
    // SubProg db_allocate pc: 18 op: STARTLINE (58)

    /** eds.e:796		free_count = get4()*/
    // SubProg db_allocate pc: 20 op: PROC (27)
    _free_count_16746 = _44get4();
    // SubProg db_allocate pc: 23 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16746)) {
        _1 = (object)(DBL_PTR(_free_count_16746)->dbl);
        DeRefDS(_free_count_16746);
        _free_count_16746 = _1;
    }
    // SubProg db_allocate pc: 25 op: STARTLINE (58)

    /** eds.e:797		if free_count > 0 then*/
    // SubProg db_allocate pc: 27 op: GREATER_IFW_I (124)
    if (_free_count_16746 <= 0)
    goto L1; // [27] 487
    // SubProg db_allocate pc: 31 op: STARTLINE (58)

    /** eds.e:798			free_list = get4()*/
    // SubProg db_allocate pc: 33 op: PROC (27)
    _0 = _free_list_16742;
    _free_list_16742 = _44get4();
    DeRef(_0);
    // SubProg db_allocate pc: 36 op: STARTLINE (58)

    /** eds.e:799			io:seek(current_db, free_list)*/
    // SubProg db_allocate pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 40 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 42 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16742);
    DeRef(_seek_1__tmp_at39_16757);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _free_list_16742;
    _seek_1__tmp_at39_16757 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 46 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_39_16756 = machine(19, _seek_1__tmp_at39_16757);
    // SubProg db_allocate pc: 50 op: NOP1 (159)
    // SubProg db_allocate pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 39

// block var seek_1__tmp_at39_16757
    DeRef(_seek_1__tmp_at39_16757);
    _seek_1__tmp_at39_16757 = NOVALUE;
    // SubProg db_allocate pc: 53 op: STARTLINE (58)

    /** eds.e:800			size_ptr = free_list + 4*/
    // SubProg db_allocate pc: 55 op: PLUS (11)
    DeRef(_size_ptr_16744);
    if (IS_ATOM_INT(_free_list_16742)) {
        _size_ptr_16744 = _free_list_16742 + 4;
        if ((object)((uintptr_t)_size_ptr_16744 + (uintptr_t)HIGH_BITS) >= 0){
            _size_ptr_16744 = NewDouble((eudouble)_size_ptr_16744);
        }
    }
    else {
        _size_ptr_16744 = NewDouble(DBL_PTR(_free_list_16742)->dbl + (eudouble)4);
    }
    // SubProg db_allocate pc: 59 op: STARTLINE (58)

    /** eds.e:801			for i = 1 to free_count do*/
    // SubProg db_allocate pc: 61 op: ASSIGN (18)
    _9297 = _free_count_16746;
    // SubProg db_allocate pc: 64 op: FOR_I (125)
    {
        object _i_16760;
        _i_16760 = 1;
L2: // addr: 71 pc: 64 sub: 16739 op: 125
        if (_i_16760 > _9297){
            goto L3; // [64] 486
        }
        // SubProg db_allocate pc: 71 op: STARTLINE (58)

        /** eds.e:802				addr = get4()*/
        // SubProg db_allocate pc: 73 op: PROC (27)
        _0 = _addr_16745;
        _addr_16745 = _44get4();
        DeRef(_0);
        // SubProg db_allocate pc: 76 op: STARTLINE (58)

        /** eds.e:803				size = get4()*/
        // SubProg db_allocate pc: 78 op: PROC (27)
        _0 = _size_16743;
        _size_16743 = _44get4();
        DeRef(_0);
        // SubProg db_allocate pc: 81 op: STARTLINE (58)

        /** eds.e:804				if size >= n+4 then*/
        // SubProg db_allocate pc: 83 op: PLUS (11)
        if (IS_ATOM_INT(_n_16741)) {
            _9300 = _n_16741 + 4;
            if ((object)((uintptr_t)_9300 + (uintptr_t)HIGH_BITS) >= 0){
                _9300 = NewDouble((eudouble)_9300);
            }
        }
        else {
            _9300 = NewDouble(DBL_PTR(_n_16741)->dbl + (eudouble)4);
        }
        // SubProg db_allocate pc: 87 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _size_16743, _9300)){
            DeRef(_9300);
            _9300 = NOVALUE;
            goto L4; // [87] 473
        }
        DeRef(_9300);
        _9300 = NOVALUE;
        // SubProg db_allocate pc: 91 op: STARTLINE (58)

        /** eds.e:806					if size >= n+16 then*/
        // SubProg db_allocate pc: 93 op: PLUS (11)
        if (IS_ATOM_INT(_n_16741)) {
            _9302 = _n_16741 + 16;
            if ((object)((uintptr_t)_9302 + (uintptr_t)HIGH_BITS) >= 0){
                _9302 = NewDouble((eudouble)_9302);
            }
        }
        else {
            _9302 = NewDouble(DBL_PTR(_n_16741)->dbl + (eudouble)16);
        }
        // SubProg db_allocate pc: 97 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _size_16743, _9302)){
            DeRef(_9302);
            _9302 = NOVALUE;
            goto L5; // [97] 296
        }
        DeRef(_9302);
        _9302 = NOVALUE;
        // SubProg db_allocate pc: 101 op: STARTLINE (58)

        /** eds.e:808						io:seek(current_db, addr - 4)*/
        // SubProg db_allocate pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 105 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16745)) {
            _9304 = _addr_16745 - 4;
            if ((object)((uintptr_t)_9304 +(uintptr_t) HIGH_BITS) >= 0){
                _9304 = NewDouble((eudouble)_9304);
            }
        }
        else {
            _9304 = NewDouble(DBL_PTR(_addr_16745)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 109 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_108_16772);
        _pos_inlined_seek_at_108_16772 = _9304;
        _9304 = NOVALUE;
        // SubProg db_allocate pc: 112 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 114 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_108_16772);
        DeRef(_seek_1__tmp_at111_16774);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_108_16772;
        _seek_1__tmp_at111_16774 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 118 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_111_16773 = machine(19, _seek_1__tmp_at111_16774);
        // SubProg db_allocate pc: 122 op: NOP1 (159)
        // SubProg db_allocate pc: 123 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 108

// block var pos_inlined_seek_at_108_16772
        DeRef(_pos_inlined_seek_at_108_16772);
        _pos_inlined_seek_at_108_16772 = NOVALUE;

// block var seek_1__tmp_at111_16774
        DeRef(_seek_1__tmp_at111_16774);
        _seek_1__tmp_at111_16774 = NOVALUE;
        // SubProg db_allocate pc: 125 op: STARTLINE (58)

        /** eds.e:809						put4(size-n-4) -- shrink the block*/
        // SubProg db_allocate pc: 127 op: MINUS (10)
        if (IS_ATOM_INT(_size_16743) && IS_ATOM_INT(_n_16741)) {
            _9305 = _size_16743 - _n_16741;
            if ((object)((uintptr_t)_9305 +(uintptr_t) HIGH_BITS) >= 0){
                _9305 = NewDouble((eudouble)_9305);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16743)) {
                _9305 = NewDouble((eudouble)_size_16743 - DBL_PTR(_n_16741)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16741)) {
                    _9305 = NewDouble(DBL_PTR(_size_16743)->dbl - (eudouble)_n_16741);
                }
                else
                _9305 = NewDouble(DBL_PTR(_size_16743)->dbl - DBL_PTR(_n_16741)->dbl);
            }
        }
        // SubProg db_allocate pc: 131 op: MINUS (10)
        if (IS_ATOM_INT(_9305)) {
            _9306 = _9305 - 4;
            if ((object)((uintptr_t)_9306 +(uintptr_t) HIGH_BITS) >= 0){
                _9306 = NewDouble((eudouble)_9306);
            }
        }
        else {
            _9306 = NewDouble(DBL_PTR(_9305)->dbl - (eudouble)4);
        }
        DeRef(_9305);
        _9305 = NOVALUE;
        // SubProg db_allocate pc: 135 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_134_16778);
        _x_inlined_put4_at_134_16778 = _9306;
        _9306 = NOVALUE;
        // SubProg db_allocate pc: 138 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 140 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 142 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_134_16778)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_134_16778;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_134_16778)->dbl;
        }
        // SubProg db_allocate pc: 145 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 149 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 151 op: PEEK (127)
        DeRefi(_put4_1__tmp_at137_16779);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at137_16779 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 154 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at137_16779); // DJP 
        // SubProg db_allocate pc: 157 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 159 op: ELSE (23)
        goto L6; // [159] 162
        // SubProg db_allocate pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 16739 op: 159
        // SubProg db_allocate pc: 162 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 134

// block var x_inlined_put4_at_134_16778
        DeRef(_x_inlined_put4_at_134_16778);
        _x_inlined_put4_at_134_16778 = NOVALUE;

// block var put4_1__tmp_at137_16779
        DeRefi(_put4_1__tmp_at137_16779);
        _put4_1__tmp_at137_16779 = NOVALUE;
        // SubProg db_allocate pc: 164 op: STARTLINE (58)

        /** eds.e:810						io:seek(current_db, size_ptr)*/
        // SubProg db_allocate pc: 166 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 168 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 170 op: RIGHT_BRACE_2 (85)
        Ref(_size_ptr_16744);
        DeRef(_seek_1__tmp_at167_16782);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _size_ptr_16744;
        _seek_1__tmp_at167_16782 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 174 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_167_16781 = machine(19, _seek_1__tmp_at167_16782);
        // SubProg db_allocate pc: 178 op: NOP1 (159)
        // SubProg db_allocate pc: 179 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 167

// block var seek_1__tmp_at167_16782
        DeRef(_seek_1__tmp_at167_16782);
        _seek_1__tmp_at167_16782 = NOVALUE;
        // SubProg db_allocate pc: 181 op: STARTLINE (58)

        /** eds.e:811						put4(size-n-4) -- update size on free list too*/
        // SubProg db_allocate pc: 183 op: MINUS (10)
        if (IS_ATOM_INT(_size_16743) && IS_ATOM_INT(_n_16741)) {
            _9307 = _size_16743 - _n_16741;
            if ((object)((uintptr_t)_9307 +(uintptr_t) HIGH_BITS) >= 0){
                _9307 = NewDouble((eudouble)_9307);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16743)) {
                _9307 = NewDouble((eudouble)_size_16743 - DBL_PTR(_n_16741)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16741)) {
                    _9307 = NewDouble(DBL_PTR(_size_16743)->dbl - (eudouble)_n_16741);
                }
                else
                _9307 = NewDouble(DBL_PTR(_size_16743)->dbl - DBL_PTR(_n_16741)->dbl);
            }
        }
        // SubProg db_allocate pc: 187 op: MINUS (10)
        if (IS_ATOM_INT(_9307)) {
            _9308 = _9307 - 4;
            if ((object)((uintptr_t)_9308 +(uintptr_t) HIGH_BITS) >= 0){
                _9308 = NewDouble((eudouble)_9308);
            }
        }
        else {
            _9308 = NewDouble(DBL_PTR(_9307)->dbl - (eudouble)4);
        }
        DeRef(_9307);
        _9307 = NOVALUE;
        // SubProg db_allocate pc: 191 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_190_16786);
        _x_inlined_put4_at_190_16786 = _9308;
        _9308 = NOVALUE;
        // SubProg db_allocate pc: 194 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 196 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 198 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_190_16786)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_190_16786;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_190_16786)->dbl;
        }
        // SubProg db_allocate pc: 201 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 205 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 207 op: PEEK (127)
        DeRefi(_put4_1__tmp_at193_16787);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at193_16787 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 210 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at193_16787); // DJP 
        // SubProg db_allocate pc: 213 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 215 op: ELSE (23)
        goto L7; // [215] 218
        // SubProg db_allocate pc: 217 op: NOP1 (159)
L7: // addr: 218 pc: 217 sub: 16739 op: 159
        // SubProg db_allocate pc: 218 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 190

// block var x_inlined_put4_at_190_16786
        DeRef(_x_inlined_put4_at_190_16786);
        _x_inlined_put4_at_190_16786 = NOVALUE;

// block var put4_1__tmp_at193_16787
        DeRefi(_put4_1__tmp_at193_16787);
        _put4_1__tmp_at193_16787 = NOVALUE;
        // SubProg db_allocate pc: 220 op: STARTLINE (58)

        /** eds.e:812						addr += size-n-4*/
        // SubProg db_allocate pc: 222 op: MINUS (10)
        if (IS_ATOM_INT(_size_16743) && IS_ATOM_INT(_n_16741)) {
            _9309 = _size_16743 - _n_16741;
            if ((object)((uintptr_t)_9309 +(uintptr_t) HIGH_BITS) >= 0){
                _9309 = NewDouble((eudouble)_9309);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16743)) {
                _9309 = NewDouble((eudouble)_size_16743 - DBL_PTR(_n_16741)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16741)) {
                    _9309 = NewDouble(DBL_PTR(_size_16743)->dbl - (eudouble)_n_16741);
                }
                else
                _9309 = NewDouble(DBL_PTR(_size_16743)->dbl - DBL_PTR(_n_16741)->dbl);
            }
        }
        // SubProg db_allocate pc: 226 op: MINUS (10)
        if (IS_ATOM_INT(_9309)) {
            _9310 = _9309 - 4;
            if ((object)((uintptr_t)_9310 +(uintptr_t) HIGH_BITS) >= 0){
                _9310 = NewDouble((eudouble)_9310);
            }
        }
        else {
            _9310 = NewDouble(DBL_PTR(_9309)->dbl - (eudouble)4);
        }
        DeRef(_9309);
        _9309 = NOVALUE;
        // SubProg db_allocate pc: 230 op: PLUS (11)
        _0 = _addr_16745;
        if (IS_ATOM_INT(_addr_16745) && IS_ATOM_INT(_9310)) {
            _addr_16745 = _addr_16745 + _9310;
            if ((object)((uintptr_t)_addr_16745 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_16745 = NewDouble((eudouble)_addr_16745);
            }
        }
        else {
            if (IS_ATOM_INT(_addr_16745)) {
                _addr_16745 = NewDouble((eudouble)_addr_16745 + DBL_PTR(_9310)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9310)) {
                    _addr_16745 = NewDouble(DBL_PTR(_addr_16745)->dbl + (eudouble)_9310);
                }
                else
                _addr_16745 = NewDouble(DBL_PTR(_addr_16745)->dbl + DBL_PTR(_9310)->dbl);
            }
        }
        DeRef(_0);
        DeRef(_9310);
        _9310 = NOVALUE;
        // SubProg db_allocate pc: 234 op: STARTLINE (58)

        /** eds.e:813						io:seek(current_db, addr - 4) */
        // SubProg db_allocate pc: 236 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 238 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16745)) {
            _9312 = _addr_16745 - 4;
            if ((object)((uintptr_t)_9312 +(uintptr_t) HIGH_BITS) >= 0){
                _9312 = NewDouble((eudouble)_9312);
            }
        }
        else {
            _9312 = NewDouble(DBL_PTR(_addr_16745)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 242 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_241_16793);
        _pos_inlined_seek_at_241_16793 = _9312;
        _9312 = NOVALUE;
        // SubProg db_allocate pc: 245 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 247 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_241_16793);
        DeRef(_seek_1__tmp_at244_16795);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_241_16793;
        _seek_1__tmp_at244_16795 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 251 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_244_16794 = machine(19, _seek_1__tmp_at244_16795);
        // SubProg db_allocate pc: 255 op: NOP1 (159)
        // SubProg db_allocate pc: 256 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 241

// block var pos_inlined_seek_at_241_16793
        DeRef(_pos_inlined_seek_at_241_16793);
        _pos_inlined_seek_at_241_16793 = NOVALUE;

// block var seek_1__tmp_at244_16795
        DeRef(_seek_1__tmp_at244_16795);
        _seek_1__tmp_at244_16795 = NOVALUE;
        // SubProg db_allocate pc: 258 op: STARTLINE (58)

        /** eds.e:814						put4(n+4)*/
        // SubProg db_allocate pc: 260 op: PLUS (11)
        if (IS_ATOM_INT(_n_16741)) {
            _9313 = _n_16741 + 4;
            if ((object)((uintptr_t)_9313 + (uintptr_t)HIGH_BITS) >= 0){
                _9313 = NewDouble((eudouble)_9313);
            }
        }
        else {
            _9313 = NewDouble(DBL_PTR(_n_16741)->dbl + (eudouble)4);
        }
        // SubProg db_allocate pc: 264 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_263_16798);
        _x_inlined_put4_at_263_16798 = _9313;
        _9313 = NOVALUE;
        // SubProg db_allocate pc: 267 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 269 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 271 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_263_16798)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_263_16798;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_263_16798)->dbl;
        }
        // SubProg db_allocate pc: 274 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 280 op: PEEK (127)
        DeRefi(_put4_1__tmp_at266_16799);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at266_16799 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 283 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at266_16799); // DJP 
        // SubProg db_allocate pc: 286 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 288 op: ELSE (23)
        goto L8; // [288] 291
        // SubProg db_allocate pc: 290 op: NOP1 (159)
L8: // addr: 291 pc: 290 sub: 16739 op: 159
        // SubProg db_allocate pc: 291 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 263

// block var x_inlined_put4_at_263_16798
        DeRef(_x_inlined_put4_at_263_16798);
        _x_inlined_put4_at_263_16798 = NOVALUE;

// block var put4_1__tmp_at266_16799
        DeRefi(_put4_1__tmp_at266_16799);
        _put4_1__tmp_at266_16799 = NOVALUE;
        // SubProg db_allocate pc: 293 op: ELSE (23)
        goto L9; // [293] 466
        // SubProg db_allocate pc: 295 op: NOP1 (159)
L5: // addr: 296 pc: 295 sub: 16739 op: 159
        // SubProg db_allocate pc: 296 op: STARTLINE (58)

        /** eds.e:817						remaining = io:get_bytes(current_db, (free_count-i) * 8)*/
        // SubProg db_allocate pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 300 op: MINUS (10)
        _9314 = _free_count_16746 - _i_16760;
        if ((object)((uintptr_t)_9314 +(uintptr_t) HIGH_BITS) >= 0){
            _9314 = NewDouble((eudouble)_9314);
        }
        // SubProg db_allocate pc: 304 op: MULTIPLY (13)
        if (IS_ATOM_INT(_9314)) {
            if (_9314 == (short)_9314){
                _9315 = _9314 * 8;
            }
            else{
                _9315 = NewDouble(_9314 * (eudouble)8);
            }
        }
        else {
            _9315 = NewDouble(DBL_PTR(_9314)->dbl * (eudouble)8);
        }
        DeRef(_9314);
        _9314 = NOVALUE;
        // SubProg db_allocate pc: 308 op: PROC (27)
        _0 = _remaining_16747;
        _remaining_16747 = _19get_bytes(_44current_db_16088, _9315);
        DeRef(_0);
        _9315 = NOVALUE;
        // SubProg db_allocate pc: 313 op: SEQUENCE_CHECK (97)
        // SubProg db_allocate pc: 315 op: STARTLINE (58)

        /** eds.e:818						io:seek(current_db, free_list+8*(i-1))*/
        // SubProg db_allocate pc: 317 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 319 op: MINUS (10)
        _9317 = _i_16760 - 1;
        // SubProg db_allocate pc: 323 op: MULTIPLY (13)
        if (_9317 <= INT15){
            _9318 = 8 * _9317;
        }
        else{
            _9318 = NewDouble(8 * (eudouble)_9317);
        }
        _9317 = NOVALUE;
        // SubProg db_allocate pc: 327 op: PLUS (11)
        if (IS_ATOM_INT(_free_list_16742) && IS_ATOM_INT(_9318)) {
            _9319 = _free_list_16742 + _9318;
            if ((object)((uintptr_t)_9319 + (uintptr_t)HIGH_BITS) >= 0){
                _9319 = NewDouble((eudouble)_9319);
            }
        }
        else {
            if (IS_ATOM_INT(_free_list_16742)) {
                _9319 = NewDouble((eudouble)_free_list_16742 + DBL_PTR(_9318)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9318)) {
                    _9319 = NewDouble(DBL_PTR(_free_list_16742)->dbl + (eudouble)_9318);
                }
                else
                _9319 = NewDouble(DBL_PTR(_free_list_16742)->dbl + DBL_PTR(_9318)->dbl);
            }
        }
        DeRef(_9318);
        _9318 = NOVALUE;
        // SubProg db_allocate pc: 331 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_330_16808);
        _pos_inlined_seek_at_330_16808 = _9319;
        _9319 = NOVALUE;
        // SubProg db_allocate pc: 334 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 336 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_330_16808);
        DeRef(_seek_1__tmp_at333_16810);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_330_16808;
        _seek_1__tmp_at333_16810 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 340 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_333_16809 = machine(19, _seek_1__tmp_at333_16810);
        // SubProg db_allocate pc: 344 op: NOP1 (159)
        // SubProg db_allocate pc: 345 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 330

// block var pos_inlined_seek_at_330_16808
        DeRef(_pos_inlined_seek_at_330_16808);
        _pos_inlined_seek_at_330_16808 = NOVALUE;

// block var seek_1__tmp_at333_16810
        DeRef(_seek_1__tmp_at333_16810);
        _seek_1__tmp_at333_16810 = NOVALUE;
        // SubProg db_allocate pc: 347 op: STARTLINE (58)

        /** eds.e:819						putn(remaining)*/
        // SubProg db_allocate pc: 349 op: STARTLINE (58)

        /** eds.e:448		puts(current_db, s)*/
        // SubProg db_allocate pc: 351 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 353 op: PUTS (44)
        EPuts(_44current_db_16088, _remaining_16747); // DJP 
        // SubProg db_allocate pc: 356 op: STARTLINE (58)

        /** eds.e:449	end procedure*/
        // SubProg db_allocate pc: 358 op: ELSE (23)
        goto LA; // [358] 361
        // SubProg db_allocate pc: 360 op: NOP1 (159)
LA: // addr: 361 pc: 360 sub: 16739 op: 159
        // SubProg db_allocate pc: 361 op: STARTLINE (58)

        /** eds.e:820						io:seek(current_db, FREE_COUNT)*/
        // SubProg db_allocate pc: 363 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 365 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 367 op: RIGHT_BRACE_2 (85)
        DeRefi(_seek_1__tmp_at364_16814);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = 7;
        _seek_1__tmp_at364_16814 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 371 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_364_16813 = machine(19, _seek_1__tmp_at364_16814);
        // SubProg db_allocate pc: 375 op: NOP1 (159)
        // SubProg db_allocate pc: 376 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 364

// block var seek_1__tmp_at364_16814
        DeRefi(_seek_1__tmp_at364_16814);
        _seek_1__tmp_at364_16814 = NOVALUE;
        // SubProg db_allocate pc: 378 op: STARTLINE (58)

        /** eds.e:821						put4(free_count-1)*/
        // SubProg db_allocate pc: 380 op: MINUS (10)
        _9320 = _free_count_16746 - 1;
        if ((object)((uintptr_t)_9320 +(uintptr_t) HIGH_BITS) >= 0){
            _9320 = NewDouble((eudouble)_9320);
        }
        // SubProg db_allocate pc: 384 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_383_16817);
        _x_inlined_put4_at_383_16817 = _9320;
        _9320 = NOVALUE;
        // SubProg db_allocate pc: 387 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 389 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 391 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_383_16817)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_383_16817;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_383_16817)->dbl;
        }
        // SubProg db_allocate pc: 394 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 396 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 398 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 400 op: PEEK (127)
        DeRefi(_put4_1__tmp_at386_16818);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at386_16818 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 403 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at386_16818); // DJP 
        // SubProg db_allocate pc: 406 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 408 op: ELSE (23)
        goto LB; // [408] 411
        // SubProg db_allocate pc: 410 op: NOP1 (159)
LB: // addr: 411 pc: 410 sub: 16739 op: 159
        // SubProg db_allocate pc: 411 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 383

// block var x_inlined_put4_at_383_16817
        DeRef(_x_inlined_put4_at_383_16817);
        _x_inlined_put4_at_383_16817 = NOVALUE;

// block var put4_1__tmp_at386_16818
        DeRefi(_put4_1__tmp_at386_16818);
        _put4_1__tmp_at386_16818 = NOVALUE;
        // SubProg db_allocate pc: 413 op: STARTLINE (58)

        /** eds.e:822						io:seek(current_db, addr - 4)*/
        // SubProg db_allocate pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 417 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16745)) {
            _9321 = _addr_16745 - 4;
            if ((object)((uintptr_t)_9321 +(uintptr_t) HIGH_BITS) >= 0){
                _9321 = NewDouble((eudouble)_9321);
            }
        }
        else {
            _9321 = NewDouble(DBL_PTR(_addr_16745)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 421 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_420_16821);
        _pos_inlined_seek_at_420_16821 = _9321;
        _9321 = NOVALUE;
        // SubProg db_allocate pc: 424 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 426 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_420_16821);
        DeRef(_seek_1__tmp_at423_16823);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_420_16821;
        _seek_1__tmp_at423_16823 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 430 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_423_16822 = machine(19, _seek_1__tmp_at423_16823);
        // SubProg db_allocate pc: 434 op: NOP1 (159)
        // SubProg db_allocate pc: 435 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 420

// block var pos_inlined_seek_at_420_16821
        DeRef(_pos_inlined_seek_at_420_16821);
        _pos_inlined_seek_at_420_16821 = NOVALUE;

// block var seek_1__tmp_at423_16823
        DeRef(_seek_1__tmp_at423_16823);
        _seek_1__tmp_at423_16823 = NOVALUE;
        // SubProg db_allocate pc: 437 op: STARTLINE (58)

        /** eds.e:823						put4(size) -- in case size was not updated by db_free()*/
        // SubProg db_allocate pc: 439 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 441 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 443 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_size_16743)) {
            *poke4_addr = (uint32_t)_size_16743;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_size_16743)->dbl;
        }
        // SubProg db_allocate pc: 446 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 448 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 450 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 452 op: PEEK (127)
        DeRefi(_put4_1__tmp_at438_16825);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at438_16825 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 455 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at438_16825); // DJP 
        // SubProg db_allocate pc: 458 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 460 op: ELSE (23)
        goto LC; // [460] 463
        // SubProg db_allocate pc: 462 op: NOP1 (159)
LC: // addr: 463 pc: 462 sub: 16739 op: 159
        // SubProg db_allocate pc: 463 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 438

// block var put4_1__tmp_at438_16825
        DeRefi(_put4_1__tmp_at438_16825);
        _put4_1__tmp_at438_16825 = NOVALUE;
        // SubProg db_allocate pc: 465 op: NOP1 (159)
L9: // addr: 466 pc: 465 sub: 16739 op: 159
        // SubProg db_allocate pc: 466 op: STARTLINE (58)

        /** eds.e:825					return addr*/
        // SubProg db_allocate pc: 468 op: RETURNF (28)

// Exiting block BLOCK: db_allocate

// block var n_16741
        DeRef(_n_16741);

// block var free_list_16742
        DeRef(_free_list_16742);

// block var size_16743
        DeRef(_size_16743);

// block var size_ptr_16744
        DeRef(_size_ptr_16744);

// block var free_count_16746

// block var remaining_16747
        DeRef(_remaining_16747);
        return _addr_16745;
        // SubProg db_allocate pc: 472 op: NOP1 (159)
L4: // addr: 473 pc: 472 sub: 16739 op: 159
        // SubProg db_allocate pc: 473 op: STARTLINE (58)

        /** eds.e:827				size_ptr += 8*/
        // SubProg db_allocate pc: 475 op: PLUS (11)
        _0 = _size_ptr_16744;
        if (IS_ATOM_INT(_size_ptr_16744)) {
            _size_ptr_16744 = _size_ptr_16744 + 8;
            if ((object)((uintptr_t)_size_ptr_16744 + (uintptr_t)HIGH_BITS) >= 0){
                _size_ptr_16744 = NewDouble((eudouble)_size_ptr_16744);
            }
        }
        else {
            _size_ptr_16744 = NewDouble(DBL_PTR(_size_ptr_16744)->dbl + (eudouble)8);
        }
        DeRef(_0);
        // SubProg db_allocate pc: 479 op: STARTLINE (58)

        /** eds.e:828			end for*/
        // SubProg db_allocate pc: 481 op: ENDFOR_INT_UP1 (54)
        _i_16760 = _i_16760 + 1;
        goto L2; // [481] 71
L3: // addr: 486 pc: 481 sub: 16739 op: 54
        ;
    }
    // SubProg db_allocate pc: 486 op: NOP1 (159)
L1: // addr: 487 pc: 486 sub: 16739 op: 159
    // SubProg db_allocate pc: 487 op: STARTLINE (58)

    /** eds.e:831		io:seek(current_db, -1)*/
    // SubProg db_allocate pc: 489 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 491 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 493 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at490_16829);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = -1;
    _seek_1__tmp_at490_16829 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 497 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_490_16828 = machine(19, _seek_1__tmp_at490_16829);
    // SubProg db_allocate pc: 501 op: NOP1 (159)
    // SubProg db_allocate pc: 502 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 490

// block var seek_1__tmp_at490_16829
    DeRefi(_seek_1__tmp_at490_16829);
    _seek_1__tmp_at490_16829 = NOVALUE;
    // SubProg db_allocate pc: 504 op: STARTLINE (58)

    /** eds.e:832		put4(n+4)*/
    // SubProg db_allocate pc: 506 op: PLUS (11)
    if (IS_ATOM_INT(_n_16741)) {
        _9323 = _n_16741 + 4;
        if ((object)((uintptr_t)_9323 + (uintptr_t)HIGH_BITS) >= 0){
            _9323 = NewDouble((eudouble)_9323);
        }
    }
    else {
        _9323 = NewDouble(DBL_PTR(_n_16741)->dbl + (eudouble)4);
    }
    // SubProg db_allocate pc: 510 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_509_16832);
    _x_inlined_put4_at_509_16832 = _9323;
    _9323 = NOVALUE;
    // SubProg db_allocate pc: 513 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_allocate pc: 515 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 517 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_509_16832)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_509_16832;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_509_16832)->dbl;
    }
    // SubProg db_allocate pc: 520 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_allocate pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 524 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 526 op: PEEK (127)
    DeRefi(_put4_1__tmp_at512_16833);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at512_16833 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_allocate pc: 529 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at512_16833); // DJP 
    // SubProg db_allocate pc: 532 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_allocate pc: 534 op: ELSE (23)
    goto LD; // [534] 537
    // SubProg db_allocate pc: 536 op: NOP1 (159)
LD: // addr: 537 pc: 536 sub: 16739 op: 159
    // SubProg db_allocate pc: 537 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 509

// block var x_inlined_put4_at_509_16832
    DeRef(_x_inlined_put4_at_509_16832);
    _x_inlined_put4_at_509_16832 = NOVALUE;

// block var put4_1__tmp_at512_16833
    DeRefi(_put4_1__tmp_at512_16833);
    _put4_1__tmp_at512_16833 = NOVALUE;
    // SubProg db_allocate pc: 539 op: STARTLINE (58)

    /** eds.e:833		return io:where(current_db)*/
    // SubProg db_allocate pc: 541 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 543 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg db_allocate pc: 545 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_542_16835);
    _where_inlined_where_at_542_16835 = machine(20, _44current_db_16088);
    // SubProg db_allocate pc: 549 op: NOP1 (159)
    // SubProg db_allocate pc: 550 op: RETURNF (28)

// Exiting block BLOCK: db_allocate

// block var n_16741
    DeRef(_n_16741);

// block var free_list_16742
    DeRef(_free_list_16742);

// block var size_16743
    DeRef(_size_16743);

// block var size_ptr_16744
    DeRef(_size_ptr_16744);

// block var addr_16745
    DeRef(_addr_16745);

// block var free_count_16746

// block var remaining_16747
    DeRef(_remaining_16747);
    return _where_inlined_where_at_542_16835;
    // SubProg db_allocate pc: 554 op: BADRETURNF (43)
    ;
}


void _44db_free(object _p_16838)
{
    object _psize_16839 = NOVALUE;
    object _i_16840 = NOVALUE;
    object _size_16841 = NOVALUE;
    object _addr_16842 = NOVALUE;
    object _free_list_16843 = NOVALUE;
    object _free_list_space_16844 = NOVALUE;
    object _new_space_16845 = NOVALUE;
    object _to_be_freed_16846 = NOVALUE;
    object _prev_addr_16847 = NOVALUE;
    object _prev_size_16848 = NOVALUE;
    object _free_count_16849 = NOVALUE;
    object _remaining_16850 = NOVALUE;
    object _seek_1__tmp_at11_16855 = NOVALUE;
    object _seek_inlined_seek_at_11_16854 = NOVALUE;
    object _pos_inlined_seek_at_8_16853 = NOVALUE;
    object _seek_1__tmp_at33_16859 = NOVALUE;
    object _seek_inlined_seek_at_33_16858 = NOVALUE;
    object _seek_1__tmp_at69_16866 = NOVALUE;
    object _seek_inlined_seek_at_69_16865 = NOVALUE;
    object _pos_inlined_seek_at_66_16864 = NOVALUE;
    object _seek_1__tmp_at133_16879 = NOVALUE;
    object _seek_inlined_seek_at_133_16878 = NOVALUE;
    object _seek_1__tmp_at157_16883 = NOVALUE;
    object _seek_inlined_seek_at_157_16882 = NOVALUE;
    object _put4_1__tmp_at172_16885 = NOVALUE;
    object _seek_1__tmp_at202_16888 = NOVALUE;
    object _seek_inlined_seek_at_202_16887 = NOVALUE;
    object _seek_1__tmp_at234_16893 = NOVALUE;
    object _seek_inlined_seek_at_234_16892 = NOVALUE;
    object _s_inlined_putn_at_274_16899 = NOVALUE;
    object _seek_1__tmp_at297_16902 = NOVALUE;
    object _seek_inlined_seek_at_297_16901 = NOVALUE;
    object _seek_1__tmp_at430_16923 = NOVALUE;
    object _seek_inlined_seek_at_430_16922 = NOVALUE;
    object _pos_inlined_seek_at_427_16921 = NOVALUE;
    object _put4_1__tmp_at482_16933 = NOVALUE;
    object _x_inlined_put4_at_479_16932 = NOVALUE;
    object _seek_1__tmp_at523_16939 = NOVALUE;
    object _seek_inlined_seek_at_523_16938 = NOVALUE;
    object _pos_inlined_seek_at_520_16937 = NOVALUE;
    object _seek_1__tmp_at574_16949 = NOVALUE;
    object _seek_inlined_seek_at_574_16948 = NOVALUE;
    object _pos_inlined_seek_at_571_16947 = NOVALUE;
    object _seek_1__tmp_at611_16954 = NOVALUE;
    object _seek_inlined_seek_at_611_16953 = NOVALUE;
    object _put4_1__tmp_at626_16956 = NOVALUE;
    object _put4_1__tmp_at664_16961 = NOVALUE;
    object _x_inlined_put4_at_661_16960 = NOVALUE;
    object _seek_1__tmp_at737_16973 = NOVALUE;
    object _seek_inlined_seek_at_737_16972 = NOVALUE;
    object _pos_inlined_seek_at_734_16971 = NOVALUE;
    object _put4_1__tmp_at752_16975 = NOVALUE;
    object _put4_1__tmp_at789_16979 = NOVALUE;
    object _x_inlined_put4_at_786_16978 = NOVALUE;
    object _seek_1__tmp_at837_16987 = NOVALUE;
    object _seek_inlined_seek_at_837_16986 = NOVALUE;
    object _pos_inlined_seek_at_834_16985 = NOVALUE;
    object _seek_1__tmp_at883_16995 = NOVALUE;
    object _seek_inlined_seek_at_883_16994 = NOVALUE;
    object _put4_1__tmp_at898_16997 = NOVALUE;
    object _seek_1__tmp_at943_17004 = NOVALUE;
    object _seek_inlined_seek_at_943_17003 = NOVALUE;
    object _pos_inlined_seek_at_940_17002 = NOVALUE;
    object _put4_1__tmp_at958_17006 = NOVALUE;
    object _put4_1__tmp_at986_17008 = NOVALUE;
    object _9391 = NOVALUE; // 17000 9391
    object _9390 = NOVALUE; // 16999 9390
    object _9389 = NOVALUE; // 16998 9389
// skipping _9388  name type: 0
// skipping _9387  name type: 0
    object _9386 = NOVALUE; // 16990 9386
    object _9385 = NOVALUE; // 16989 9385
    object _9384 = NOVALUE; // 16988 9384
    object _9383 = NOVALUE; // 16983 9383
    object _9382 = NOVALUE; // 16982 9382
    object _9381 = NOVALUE; // 16981 9381
    object _9380 = NOVALUE; // 16976 9380
    object _9379 = NOVALUE; // 16969 9379
    object _9378 = NOVALUE; // 16968 9378
    object _9377 = NOVALUE; // 16967 9377
    object _9376 = NOVALUE; // 16966 9376
    object _9375 = NOVALUE; // 16965 9375
    object _9374 = NOVALUE; // 16964 9374
    object _9373 = NOVALUE; // 16963 9373
    object _9372 = NOVALUE; // 16958 9372
// skipping _9371  name type: 0
    object _9370 = NOVALUE; // 16945 9370
    object _9369 = NOVALUE; // 16944 9369
    object _9368 = NOVALUE; // 16943 9368
// skipping _9367  name type: 0
    object _9366 = NOVALUE; // 16941 9366
    object _9365 = NOVALUE; // 16940 9365
    object _9364 = NOVALUE; // 16935 9364
    object _9363 = NOVALUE; // 16934 9363
    object _9362 = NOVALUE; // 16930 9362
    object _9361 = NOVALUE; // 16929 9361
    object _9360 = NOVALUE; // 16928 9360
    object _9359 = NOVALUE; // 16927 9359
    object _9358 = NOVALUE; // 16926 9358
    object _9357 = NOVALUE; // 16925 9357
    object _9356 = NOVALUE; // 16919 9356
    object _9355 = NOVALUE; // 16918 9355
    object _9354 = NOVALUE; // 16917 9354
    object _9353 = NOVALUE; // 16916 9353
    object _9352 = NOVALUE; // 16915 9352
    object _9351 = NOVALUE; // 16914 9351
    object _9350 = NOVALUE; // 16913 9350
    object _9349 = NOVALUE; // 16912 9349
// skipping _9348  name type: 0
// skipping _9347  name type: 0
// skipping _9346  name type: 0
// skipping _9345  name type: 0
// skipping _9344  name type: 0
    object _9343 = NOVALUE; // 16897 9343
    object _9342 = NOVALUE; // 16896 9342
    object _9341 = NOVALUE; // 16895 9341
// skipping _9340  name type: 0
    object _9339 = NOVALUE; // 16889 9339
// skipping _9338  name type: 0
// skipping _9337  name type: 0
// skipping _9336  name type: 0
    object _9335 = NOVALUE; // 16874 9335
    object _9334 = NOVALUE; // 16873 9334
// skipping _9333  name type: 0
    object _9332 = NOVALUE; // 16871 9332
    object _9331 = NOVALUE; // 16870 9331
// skipping _9330  name type: 0
    object _9329 = NOVALUE; // 16867 9329
    object _9328 = NOVALUE; // 16862 9328
// skipping _9327  name type: 0
// skipping _9326  name type: 0
// skipping _9325  name type: 0
    object _9324 = NOVALUE; // 16851 9324
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_free pc: 1 op: STARTLINE (58)

    /** eds.e:844		io:seek(current_db, p-4)*/
    // SubProg db_free pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 5 op: MINUS (10)
    if (IS_ATOM_INT(_p_16838)) {
        _9324 = _p_16838 - 4;
        if ((object)((uintptr_t)_9324 +(uintptr_t) HIGH_BITS) >= 0){
            _9324 = NewDouble((eudouble)_9324);
        }
    }
    else {
        _9324 = NewDouble(DBL_PTR(_p_16838)->dbl - (eudouble)4);
    }
    // SubProg db_free pc: 9 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_8_16853);
    _pos_inlined_seek_at_8_16853 = _9324;
    _9324 = NOVALUE;
    // SubProg db_free pc: 12 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 14 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_8_16853);
    DeRef(_seek_1__tmp_at11_16855);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_16853;
    _seek_1__tmp_at11_16855 = MAKE_SEQ(_1);
    // SubProg db_free pc: 18 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_11_16854 = machine(19, _seek_1__tmp_at11_16855);
    // SubProg db_free pc: 22 op: NOP1 (159)
    // SubProg db_free pc: 23 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 8

// block var pos_inlined_seek_at_8_16853
    DeRef(_pos_inlined_seek_at_8_16853);
    _pos_inlined_seek_at_8_16853 = NOVALUE;

// block var seek_1__tmp_at11_16855
    DeRef(_seek_1__tmp_at11_16855);
    _seek_1__tmp_at11_16855 = NOVALUE;
    // SubProg db_free pc: 25 op: STARTLINE (58)

    /** eds.e:845		psize = get4()*/
    // SubProg db_free pc: 27 op: PROC (27)
    _0 = _psize_16839;
    _psize_16839 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 30 op: STARTLINE (58)

    /** eds.e:847		io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 34 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 36 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at33_16859);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at33_16859 = MAKE_SEQ(_1);
    // SubProg db_free pc: 40 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_33_16858 = machine(19, _seek_1__tmp_at33_16859);
    // SubProg db_free pc: 44 op: NOP1 (159)
    // SubProg db_free pc: 45 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 33

// block var seek_1__tmp_at33_16859
    DeRefi(_seek_1__tmp_at33_16859);
    _seek_1__tmp_at33_16859 = NOVALUE;
    // SubProg db_free pc: 47 op: STARTLINE (58)

    /** eds.e:848		free_count = get4()*/
    // SubProg db_free pc: 49 op: PROC (27)
    _free_count_16849 = _44get4();
    // SubProg db_free pc: 52 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16849)) {
        _1 = (object)(DBL_PTR(_free_count_16849)->dbl);
        DeRefDS(_free_count_16849);
        _free_count_16849 = _1;
    }
    // SubProg db_free pc: 54 op: STARTLINE (58)

    /** eds.e:849		free_list = get4()*/
    // SubProg db_free pc: 56 op: PROC (27)
    _0 = _free_list_16843;
    _free_list_16843 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 59 op: STARTLINE (58)

    /** eds.e:850		io:seek(current_db, free_list - 4)*/
    // SubProg db_free pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 63 op: MINUS (10)
    if (IS_ATOM_INT(_free_list_16843)) {
        _9328 = _free_list_16843 - 4;
        if ((object)((uintptr_t)_9328 +(uintptr_t) HIGH_BITS) >= 0){
            _9328 = NewDouble((eudouble)_9328);
        }
    }
    else {
        _9328 = NewDouble(DBL_PTR(_free_list_16843)->dbl - (eudouble)4);
    }
    // SubProg db_free pc: 67 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_66_16864);
    _pos_inlined_seek_at_66_16864 = _9328;
    _9328 = NOVALUE;
    // SubProg db_free pc: 70 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 72 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_66_16864);
    DeRef(_seek_1__tmp_at69_16866);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_66_16864;
    _seek_1__tmp_at69_16866 = MAKE_SEQ(_1);
    // SubProg db_free pc: 76 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_69_16865 = machine(19, _seek_1__tmp_at69_16866);
    // SubProg db_free pc: 80 op: NOP1 (159)
    // SubProg db_free pc: 81 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 66

// block var pos_inlined_seek_at_66_16864
    DeRef(_pos_inlined_seek_at_66_16864);
    _pos_inlined_seek_at_66_16864 = NOVALUE;

// block var seek_1__tmp_at69_16866
    DeRef(_seek_1__tmp_at69_16866);
    _seek_1__tmp_at69_16866 = NOVALUE;
    // SubProg db_free pc: 83 op: STARTLINE (58)

    /** eds.e:851		free_list_space = get4()-4*/
    // SubProg db_free pc: 85 op: PROC (27)
    _9329 = _44get4();
    // SubProg db_free pc: 88 op: MINUS (10)
    DeRef(_free_list_space_16844);
    if (IS_ATOM_INT(_9329)) {
        _free_list_space_16844 = _9329 - 4;
        if ((object)((uintptr_t)_free_list_space_16844 +(uintptr_t) HIGH_BITS) >= 0){
            _free_list_space_16844 = NewDouble((eudouble)_free_list_space_16844);
        }
    }
    else {
        _free_list_space_16844 = binary_op(MINUS, _9329, 4);
    }
    DeRef(_9329);
    _9329 = NOVALUE;
    // SubProg db_free pc: 92 op: STARTLINE (58)

    /** eds.e:852		if free_list_space < 8 * (free_count+1) then*/
    // SubProg db_free pc: 94 op: PLUS1 (93)
    _9331 = _free_count_16849 + 1;
    if (_9331 > MAXINT){
        _9331 = NewDouble((eudouble)_9331);
    }
    // SubProg db_free pc: 98 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9331)) {
        if (_9331 <= INT15 && _9331 >= -INT15){
            _9332 = 8 * _9331;
        }
        else{
            _9332 = NewDouble(8 * (eudouble)_9331);
        }
    }
    else {
        _9332 = NewDouble((eudouble)8 * DBL_PTR(_9331)->dbl);
    }
    DeRef(_9331);
    _9331 = NOVALUE;
    // SubProg db_free pc: 102 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _free_list_space_16844, _9332)){
        DeRef(_9332);
        _9332 = NOVALUE;
        goto L1; // [102] 314
    }
    DeRef(_9332);
    _9332 = NOVALUE;
    // SubProg db_free pc: 106 op: STARTLINE (58)

    /** eds.e:854			new_space = floor(free_list_space + free_list_space / 2)*/
    // SubProg db_free pc: 108 op: DIV2 (98)
    if (IS_ATOM_INT(_free_list_space_16844)) {
        if (_free_list_space_16844 & 1) {
            _9334 = NewDouble((_free_list_space_16844 >> 1) + 0.5);
        }
        else
        _9334 = _free_list_space_16844 >> 1;
    }
    else {
        _9334 = binary_op(DIVIDE, _free_list_space_16844, 2);
    }
    // SubProg db_free pc: 112 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_space_16844) && IS_ATOM_INT(_9334)) {
        _9335 = _free_list_space_16844 + _9334;
        if ((object)((uintptr_t)_9335 + (uintptr_t)HIGH_BITS) >= 0){
            _9335 = NewDouble((eudouble)_9335);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_space_16844)) {
            _9335 = NewDouble((eudouble)_free_list_space_16844 + DBL_PTR(_9334)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9334)) {
                _9335 = NewDouble(DBL_PTR(_free_list_space_16844)->dbl + (eudouble)_9334);
            }
            else
            _9335 = NewDouble(DBL_PTR(_free_list_space_16844)->dbl + DBL_PTR(_9334)->dbl);
        }
    }
    DeRef(_9334);
    _9334 = NOVALUE;
    // SubProg db_free pc: 116 op: FLOOR (83)
    DeRef(_new_space_16845);
    if (IS_ATOM_INT(_9335))
    _new_space_16845 = e_floor(_9335);
    else
    _new_space_16845 = unary_op(FLOOR, _9335);
    DeRef(_9335);
    _9335 = NOVALUE;
    // SubProg db_free pc: 119 op: STARTLINE (58)

    /** eds.e:855			to_be_freed = free_list*/
    // SubProg db_free pc: 121 op: ASSIGN (18)
    Ref(_free_list_16843);
    DeRef(_to_be_freed_16846);
    _to_be_freed_16846 = _free_list_16843;
    // SubProg db_free pc: 124 op: STARTLINE (58)

    /** eds.e:856			free_list = db_allocate(new_space)*/
    // SubProg db_free pc: 126 op: PROC (27)
    Ref(_new_space_16845);
    _0 = _free_list_16843;
    _free_list_16843 = _44db_allocate(_new_space_16845);
    DeRef(_0);
    // SubProg db_free pc: 130 op: STARTLINE (58)

    /** eds.e:857			io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 134 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 136 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at133_16879);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at133_16879 = MAKE_SEQ(_1);
    // SubProg db_free pc: 140 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_133_16878 = machine(19, _seek_1__tmp_at133_16879);
    // SubProg db_free pc: 144 op: NOP1 (159)
    // SubProg db_free pc: 145 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 133

// block var seek_1__tmp_at133_16879
    DeRefi(_seek_1__tmp_at133_16879);
    _seek_1__tmp_at133_16879 = NOVALUE;
    // SubProg db_free pc: 147 op: STARTLINE (58)

    /** eds.e:858			free_count = get4() -- db_allocate may have changed it*/
    // SubProg db_free pc: 149 op: PROC (27)
    _free_count_16849 = _44get4();
    // SubProg db_free pc: 152 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16849)) {
        _1 = (object)(DBL_PTR(_free_count_16849)->dbl);
        DeRefDS(_free_count_16849);
        _free_count_16849 = _1;
    }
    // SubProg db_free pc: 154 op: STARTLINE (58)

    /** eds.e:859			io:seek(current_db, FREE_LIST)*/
    // SubProg db_free pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 158 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 160 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at157_16883);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 11;
    _seek_1__tmp_at157_16883 = MAKE_SEQ(_1);
    // SubProg db_free pc: 164 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_157_16882 = machine(19, _seek_1__tmp_at157_16883);
    // SubProg db_free pc: 168 op: NOP1 (159)
    // SubProg db_free pc: 169 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 157

// block var seek_1__tmp_at157_16883
    DeRefi(_seek_1__tmp_at157_16883);
    _seek_1__tmp_at157_16883 = NOVALUE;
    // SubProg db_free pc: 171 op: STARTLINE (58)

    /** eds.e:860			put4(free_list)*/
    // SubProg db_free pc: 173 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 175 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 177 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_free_list_16843)) {
        *poke4_addr = (uint32_t)_free_list_16843;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_free_list_16843)->dbl;
    }
    // SubProg db_free pc: 180 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 186 op: PEEK (127)
    DeRefi(_put4_1__tmp_at172_16885);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at172_16885 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 189 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at172_16885); // DJP 
    // SubProg db_free pc: 192 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 194 op: ELSE (23)
    goto L2; // [194] 197
    // SubProg db_free pc: 196 op: NOP1 (159)
L2: // addr: 197 pc: 196 sub: 16836 op: 159
    // SubProg db_free pc: 197 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 172

// block var put4_1__tmp_at172_16885
    DeRefi(_put4_1__tmp_at172_16885);
    _put4_1__tmp_at172_16885 = NOVALUE;
    // SubProg db_free pc: 199 op: STARTLINE (58)

    /** eds.e:861			io:seek(current_db, to_be_freed)*/
    // SubProg db_free pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 203 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 205 op: RIGHT_BRACE_2 (85)
    Ref(_to_be_freed_16846);
    DeRef(_seek_1__tmp_at202_16888);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _to_be_freed_16846;
    _seek_1__tmp_at202_16888 = MAKE_SEQ(_1);
    // SubProg db_free pc: 209 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_202_16887 = machine(19, _seek_1__tmp_at202_16888);
    // SubProg db_free pc: 213 op: NOP1 (159)
    // SubProg db_free pc: 214 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 202

// block var seek_1__tmp_at202_16888
    DeRef(_seek_1__tmp_at202_16888);
    _seek_1__tmp_at202_16888 = NOVALUE;
    // SubProg db_free pc: 216 op: STARTLINE (58)

    /** eds.e:862			remaining = io:get_bytes(current_db, 8*free_count)*/
    // SubProg db_free pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 220 op: MULTIPLY (13)
    if (_free_count_16849 <= INT15 && _free_count_16849 >= -INT15){
        _9339 = 8 * _free_count_16849;
    }
    else{
        _9339 = NewDouble(8 * (eudouble)_free_count_16849);
    }
    // SubProg db_free pc: 224 op: PROC (27)
    _0 = _remaining_16850;
    _remaining_16850 = _19get_bytes(_44current_db_16088, _9339);
    DeRef(_0);
    _9339 = NOVALUE;
    // SubProg db_free pc: 229 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 231 op: STARTLINE (58)

    /** eds.e:863			io:seek(current_db, free_list)*/
    // SubProg db_free pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 235 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 237 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16843);
    DeRef(_seek_1__tmp_at234_16893);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _free_list_16843;
    _seek_1__tmp_at234_16893 = MAKE_SEQ(_1);
    // SubProg db_free pc: 241 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_234_16892 = machine(19, _seek_1__tmp_at234_16893);
    // SubProg db_free pc: 245 op: NOP1 (159)
    // SubProg db_free pc: 246 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 234

// block var seek_1__tmp_at234_16893
    DeRef(_seek_1__tmp_at234_16893);
    _seek_1__tmp_at234_16893 = NOVALUE;
    // SubProg db_free pc: 248 op: STARTLINE (58)

    /** eds.e:864			putn(remaining)*/
    // SubProg db_free pc: 250 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 254 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_16850); // DJP 
    // SubProg db_free pc: 257 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 259 op: ELSE (23)
    goto L3; // [259] 262
    // SubProg db_free pc: 261 op: NOP1 (159)
L3: // addr: 262 pc: 261 sub: 16836 op: 159
    // SubProg db_free pc: 262 op: STARTLINE (58)

    /** eds.e:865			putn(repeat(0, new_space-length(remaining)))*/
    // SubProg db_free pc: 264 op: LENGTH (42)
    if (IS_SEQUENCE(_remaining_16850)){
            _9341 = SEQ_PTR(_remaining_16850)->length;
    }
    else {
        _9341 = 1;
    }
    // SubProg db_free pc: 267 op: MINUS (10)
    if (IS_ATOM_INT(_new_space_16845)) {
        _9342 = _new_space_16845 - _9341;
    }
    else {
        _9342 = NewDouble(DBL_PTR(_new_space_16845)->dbl - (eudouble)_9341);
    }
    _9341 = NOVALUE;
    // SubProg db_free pc: 271 op: REPEAT (32)
    _9343 = Repeat(0, _9342);
    DeRef(_9342);
    _9342 = NOVALUE;
    // SubProg db_free pc: 275 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_274_16899);
    _s_inlined_putn_at_274_16899 = _9343;
    _9343 = NOVALUE;
    // SubProg db_free pc: 278 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 280 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 284 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_274_16899); // DJP 
    // SubProg db_free pc: 287 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 289 op: ELSE (23)
    goto L4; // [289] 292
    // SubProg db_free pc: 291 op: NOP1 (159)
L4: // addr: 292 pc: 291 sub: 16836 op: 159
    // SubProg db_free pc: 292 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_free @ 274

// block var s_inlined_putn_at_274_16899
    DeRefi(_s_inlined_putn_at_274_16899);
    _s_inlined_putn_at_274_16899 = NOVALUE;
    // SubProg db_free pc: 294 op: STARTLINE (58)

    /** eds.e:866			io:seek(current_db, free_list)*/
    // SubProg db_free pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 298 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 300 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16843);
    DeRef(_seek_1__tmp_at297_16902);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _free_list_16843;
    _seek_1__tmp_at297_16902 = MAKE_SEQ(_1);
    // SubProg db_free pc: 304 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_297_16901 = machine(19, _seek_1__tmp_at297_16902);
    // SubProg db_free pc: 308 op: NOP1 (159)
    // SubProg db_free pc: 309 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 297

// block var seek_1__tmp_at297_16902
    DeRef(_seek_1__tmp_at297_16902);
    _seek_1__tmp_at297_16902 = NOVALUE;
    // SubProg db_free pc: 311 op: ELSE (23)
    goto L5; // [311] 320
    // SubProg db_free pc: 313 op: NOP1 (159)
L1: // addr: 314 pc: 313 sub: 16836 op: 159
    // SubProg db_free pc: 314 op: STARTLINE (58)

    /** eds.e:868			new_space = 0*/
    // SubProg db_free pc: 316 op: ASSIGN (18)
    DeRef(_new_space_16845);
    _new_space_16845 = 0;
    // SubProg db_free pc: 319 op: NOP1 (159)
L5: // addr: 320 pc: 319 sub: 16836 op: 159
    // SubProg db_free pc: 320 op: STARTLINE (58)

    /** eds.e:871		i = 1*/
    // SubProg db_free pc: 322 op: ASSIGN (18)
    DeRef(_i_16840);
    _i_16840 = 1;
    // SubProg db_free pc: 325 op: STARTLINE (58)

    /** eds.e:872		prev_addr = 0*/
    // SubProg db_free pc: 327 op: ASSIGN (18)
    DeRef(_prev_addr_16847);
    _prev_addr_16847 = 0;
    // SubProg db_free pc: 330 op: STARTLINE (58)

    /** eds.e:873		prev_size = 0*/
    // SubProg db_free pc: 332 op: ASSIGN (18)
    DeRef(_prev_size_16848);
    _prev_size_16848 = 0;
    // SubProg db_free pc: 335 op: STARTLINE (58)

    /** eds.e:874		while i <= free_count do*/
    // SubProg db_free pc: 337 op: NOP2 (110)
    // SubProg db_free pc: 339 op: NOPWHILE (158)
L6: // addr: 340 pc: 339 sub: 16836 op: 158
    // SubProg db_free pc: 340 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _i_16840, _free_count_16849)){
        goto L7; // [340] 386
    }
    // SubProg db_free pc: 344 op: STARTLINE (58)

    /** eds.e:875			addr = get4()*/
    // SubProg db_free pc: 346 op: PROC (27)
    _0 = _addr_16842;
    _addr_16842 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 349 op: STARTLINE (58)

    /** eds.e:876			size = get4()*/
    // SubProg db_free pc: 351 op: PROC (27)
    _0 = _size_16841;
    _size_16841 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 354 op: STARTLINE (58)

    /** eds.e:877			if p < addr then*/
    // SubProg db_free pc: 356 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _p_16838, _addr_16842)){
        goto L8; // [356] 365
    }
    // SubProg db_free pc: 360 op: STARTLINE (58)

    /** eds.e:878				exit*/
    // SubProg db_free pc: 362 op: EXIT (61)
    goto L7; // [362] 386
    // SubProg db_free pc: 364 op: NOP1 (159)
L8: // addr: 365 pc: 364 sub: 16836 op: 159
    // SubProg db_free pc: 365 op: STARTLINE (58)

    /** eds.e:880			prev_addr = addr*/
    // SubProg db_free pc: 367 op: ASSIGN (18)
    Ref(_addr_16842);
    DeRef(_prev_addr_16847);
    _prev_addr_16847 = _addr_16842;
    // SubProg db_free pc: 370 op: STARTLINE (58)

    /** eds.e:881			prev_size = size*/
    // SubProg db_free pc: 372 op: ASSIGN (18)
    Ref(_size_16841);
    DeRef(_prev_size_16848);
    _prev_size_16848 = _size_16841;
    // SubProg db_free pc: 375 op: STARTLINE (58)

    /** eds.e:882			i += 1*/
    // SubProg db_free pc: 377 op: PLUS1 (93)
    _0 = _i_16840;
    if (IS_ATOM_INT(_i_16840)) {
        _i_16840 = _i_16840 + 1;
        if (_i_16840 > MAXINT){
            _i_16840 = NewDouble((eudouble)_i_16840);
        }
    }
    else
    _i_16840 = binary_op(PLUS, 1, _i_16840);
    DeRef(_0);
    // SubProg db_free pc: 381 op: STARTLINE (58)

    /** eds.e:883		end while*/
    // SubProg db_free pc: 383 op: ENDWHILE (22)
    goto L6; // [383] 340
    // SubProg db_free pc: 385 op: NOP1 (159)
L7: // addr: 386 pc: 385 sub: 16836 op: 159
    // SubProg db_free pc: 386 op: STARTLINE (58)

    /** eds.e:885		if i > 1 and prev_addr + prev_size = p then*/
    // SubProg db_free pc: 388 op: GREATER (6)
    if (IS_ATOM_INT(_i_16840)) {
        _9349 = (_i_16840 > 1);
    }
    else {
        _9349 = (DBL_PTR(_i_16840)->dbl > (eudouble)1);
    }
    // SubProg db_free pc: 392 op: SC1_AND_IF (146)
    if (_9349 == 0) {
        goto L9; // [392] 695
    }
    // SubProg db_free pc: 396 op: PLUS (11)
    if (IS_ATOM_INT(_prev_addr_16847) && IS_ATOM_INT(_prev_size_16848)) {
        _9351 = _prev_addr_16847 + _prev_size_16848;
        if ((object)((uintptr_t)_9351 + (uintptr_t)HIGH_BITS) >= 0){
            _9351 = NewDouble((eudouble)_9351);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_addr_16847)) {
            _9351 = NewDouble((eudouble)_prev_addr_16847 + DBL_PTR(_prev_size_16848)->dbl);
        }
        else {
            if (IS_ATOM_INT(_prev_size_16848)) {
                _9351 = NewDouble(DBL_PTR(_prev_addr_16847)->dbl + (eudouble)_prev_size_16848);
            }
            else
            _9351 = NewDouble(DBL_PTR(_prev_addr_16847)->dbl + DBL_PTR(_prev_size_16848)->dbl);
        }
    }
    // SubProg db_free pc: 400 op: EQUALS (3)
    if (IS_ATOM_INT(_9351) && IS_ATOM_INT(_p_16838)) {
        _9352 = (_9351 == _p_16838);
    }
    else {
        if (IS_ATOM_INT(_9351)) {
            _9352 = ((eudouble)_9351 == DBL_PTR(_p_16838)->dbl);
        }
        else {
            if (IS_ATOM_INT(_p_16838)) {
                _9352 = (DBL_PTR(_9351)->dbl == (eudouble)_p_16838);
            }
            else
            _9352 = (DBL_PTR(_9351)->dbl == DBL_PTR(_p_16838)->dbl);
        }
    }
    DeRef(_9351);
    _9351 = NOVALUE;
    // SubProg db_free pc: 404 op: NOP1 (159)
    // SubProg db_free pc: 405 op: IF (20)
    if (_9352 == 0)
    {
        DeRef(_9352);
        _9352 = NOVALUE;
        goto L9; // [405] 695
    }
    else{
        DeRef(_9352);
        _9352 = NOVALUE;
    }
    // SubProg db_free pc: 408 op: STARTLINE (58)

    /** eds.e:887			io:seek(current_db, free_list+(i-2)*8+4)*/
    // SubProg db_free pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 412 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9353 = _i_16840 - 2;
        if ((object)((uintptr_t)_9353 +(uintptr_t) HIGH_BITS) >= 0){
            _9353 = NewDouble((eudouble)_9353);
        }
    }
    else {
        _9353 = NewDouble(DBL_PTR(_i_16840)->dbl - (eudouble)2);
    }
    // SubProg db_free pc: 416 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9353)) {
        if (_9353 == (short)_9353){
            _9354 = _9353 * 8;
        }
        else{
            _9354 = NewDouble(_9353 * (eudouble)8);
        }
    }
    else {
        _9354 = NewDouble(DBL_PTR(_9353)->dbl * (eudouble)8);
    }
    DeRef(_9353);
    _9353 = NOVALUE;
    // SubProg db_free pc: 420 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9354)) {
        _9355 = _free_list_16843 + _9354;
        if ((object)((uintptr_t)_9355 + (uintptr_t)HIGH_BITS) >= 0){
            _9355 = NewDouble((eudouble)_9355);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9355 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9354)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9354)) {
                _9355 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9354);
            }
            else
            _9355 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9354)->dbl);
        }
    }
    DeRef(_9354);
    _9354 = NOVALUE;
    // SubProg db_free pc: 424 op: PLUS (11)
    if (IS_ATOM_INT(_9355)) {
        _9356 = _9355 + 4;
        if ((object)((uintptr_t)_9356 + (uintptr_t)HIGH_BITS) >= 0){
            _9356 = NewDouble((eudouble)_9356);
        }
    }
    else {
        _9356 = NewDouble(DBL_PTR(_9355)->dbl + (eudouble)4);
    }
    DeRef(_9355);
    _9355 = NOVALUE;
    // SubProg db_free pc: 428 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_427_16921);
    _pos_inlined_seek_at_427_16921 = _9356;
    _9356 = NOVALUE;
    // SubProg db_free pc: 431 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 433 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_427_16921);
    DeRef(_seek_1__tmp_at430_16923);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_427_16921;
    _seek_1__tmp_at430_16923 = MAKE_SEQ(_1);
    // SubProg db_free pc: 437 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_430_16922 = machine(19, _seek_1__tmp_at430_16923);
    // SubProg db_free pc: 441 op: NOP1 (159)
    // SubProg db_free pc: 442 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 427

// block var pos_inlined_seek_at_427_16921
    DeRef(_pos_inlined_seek_at_427_16921);
    _pos_inlined_seek_at_427_16921 = NOVALUE;

// block var seek_1__tmp_at430_16923
    DeRef(_seek_1__tmp_at430_16923);
    _seek_1__tmp_at430_16923 = NOVALUE;
    // SubProg db_free pc: 444 op: STARTLINE (58)

    /** eds.e:888			if i < free_count and p + psize = addr then*/
    // SubProg db_free pc: 446 op: LESS (1)
    if (IS_ATOM_INT(_i_16840)) {
        _9357 = (_i_16840 < _free_count_16849);
    }
    else {
        _9357 = (DBL_PTR(_i_16840)->dbl < (eudouble)_free_count_16849);
    }
    // SubProg db_free pc: 450 op: SC1_AND_IF (146)
    if (_9357 == 0) {
        goto LA; // [450] 656
    }
    // SubProg db_free pc: 454 op: PLUS (11)
    if (IS_ATOM_INT(_p_16838) && IS_ATOM_INT(_psize_16839)) {
        _9359 = _p_16838 + _psize_16839;
        if ((object)((uintptr_t)_9359 + (uintptr_t)HIGH_BITS) >= 0){
            _9359 = NewDouble((eudouble)_9359);
        }
    }
    else {
        if (IS_ATOM_INT(_p_16838)) {
            _9359 = NewDouble((eudouble)_p_16838 + DBL_PTR(_psize_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16839)) {
                _9359 = NewDouble(DBL_PTR(_p_16838)->dbl + (eudouble)_psize_16839);
            }
            else
            _9359 = NewDouble(DBL_PTR(_p_16838)->dbl + DBL_PTR(_psize_16839)->dbl);
        }
    }
    // SubProg db_free pc: 458 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 460 op: EQUALS (3)
    if (IS_ATOM_INT(_9359) && IS_ATOM_INT(_addr_16842)) {
        _9360 = (_9359 == _addr_16842);
    }
    else {
        if (IS_ATOM_INT(_9359)) {
            _9360 = ((eudouble)_9359 == DBL_PTR(_addr_16842)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_16842)) {
                _9360 = (DBL_PTR(_9359)->dbl == (eudouble)_addr_16842);
            }
            else
            _9360 = (DBL_PTR(_9359)->dbl == DBL_PTR(_addr_16842)->dbl);
        }
    }
    DeRef(_9359);
    _9359 = NOVALUE;
    // SubProg db_free pc: 464 op: NOP1 (159)
    // SubProg db_free pc: 465 op: IF (20)
    if (_9360 == 0)
    {
        DeRef(_9360);
        _9360 = NOVALUE;
        goto LA; // [465] 656
    }
    else{
        DeRef(_9360);
        _9360 = NOVALUE;
    }
    // SubProg db_free pc: 468 op: STARTLINE (58)

    /** eds.e:890				put4(prev_size+psize+size) -- update size on free list (only)*/
    // SubProg db_free pc: 470 op: PLUS (11)
    if (IS_ATOM_INT(_prev_size_16848) && IS_ATOM_INT(_psize_16839)) {
        _9361 = _prev_size_16848 + _psize_16839;
        if ((object)((uintptr_t)_9361 + (uintptr_t)HIGH_BITS) >= 0){
            _9361 = NewDouble((eudouble)_9361);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_16848)) {
            _9361 = NewDouble((eudouble)_prev_size_16848 + DBL_PTR(_psize_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16839)) {
                _9361 = NewDouble(DBL_PTR(_prev_size_16848)->dbl + (eudouble)_psize_16839);
            }
            else
            _9361 = NewDouble(DBL_PTR(_prev_size_16848)->dbl + DBL_PTR(_psize_16839)->dbl);
        }
    }
    // SubProg db_free pc: 474 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 476 op: PLUS (11)
    if (IS_ATOM_INT(_9361) && IS_ATOM_INT(_size_16841)) {
        _9362 = _9361 + _size_16841;
        if ((object)((uintptr_t)_9362 + (uintptr_t)HIGH_BITS) >= 0){
            _9362 = NewDouble((eudouble)_9362);
        }
    }
    else {
        if (IS_ATOM_INT(_9361)) {
            _9362 = NewDouble((eudouble)_9361 + DBL_PTR(_size_16841)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_16841)) {
                _9362 = NewDouble(DBL_PTR(_9361)->dbl + (eudouble)_size_16841);
            }
            else
            _9362 = NewDouble(DBL_PTR(_9361)->dbl + DBL_PTR(_size_16841)->dbl);
        }
    }
    DeRef(_9361);
    _9361 = NOVALUE;
    // SubProg db_free pc: 480 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_479_16932);
    _x_inlined_put4_at_479_16932 = _9362;
    _9362 = NOVALUE;
    // SubProg db_free pc: 483 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 487 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_479_16932)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_479_16932;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_479_16932)->dbl;
    }
    // SubProg db_free pc: 490 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 494 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 496 op: PEEK (127)
    DeRefi(_put4_1__tmp_at482_16933);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at482_16933 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 499 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at482_16933); // DJP 
    // SubProg db_free pc: 502 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 504 op: ELSE (23)
    goto LB; // [504] 507
    // SubProg db_free pc: 506 op: NOP1 (159)
LB: // addr: 507 pc: 506 sub: 16836 op: 159
    // SubProg db_free pc: 507 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 479

// block var x_inlined_put4_at_479_16932
    DeRef(_x_inlined_put4_at_479_16932);
    _x_inlined_put4_at_479_16932 = NOVALUE;

// block var put4_1__tmp_at482_16933
    DeRefi(_put4_1__tmp_at482_16933);
    _put4_1__tmp_at482_16933 = NOVALUE;
    // SubProg db_free pc: 509 op: STARTLINE (58)

    /** eds.e:891				io:seek(current_db, free_list+i*8)*/
    // SubProg db_free pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 513 op: MULTIPLY (13)
    if (IS_ATOM_INT(_i_16840)) {
        if (_i_16840 == (short)_i_16840){
            _9363 = _i_16840 * 8;
        }
        else{
            _9363 = NewDouble(_i_16840 * (eudouble)8);
        }
    }
    else {
        _9363 = NewDouble(DBL_PTR(_i_16840)->dbl * (eudouble)8);
    }
    // SubProg db_free pc: 517 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9363)) {
        _9364 = _free_list_16843 + _9363;
        if ((object)((uintptr_t)_9364 + (uintptr_t)HIGH_BITS) >= 0){
            _9364 = NewDouble((eudouble)_9364);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9364 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9363)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9363)) {
                _9364 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9363);
            }
            else
            _9364 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9363)->dbl);
        }
    }
    DeRef(_9363);
    _9363 = NOVALUE;
    // SubProg db_free pc: 521 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_520_16937);
    _pos_inlined_seek_at_520_16937 = _9364;
    _9364 = NOVALUE;
    // SubProg db_free pc: 524 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 526 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_520_16937);
    DeRef(_seek_1__tmp_at523_16939);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_520_16937;
    _seek_1__tmp_at523_16939 = MAKE_SEQ(_1);
    // SubProg db_free pc: 530 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_523_16938 = machine(19, _seek_1__tmp_at523_16939);
    // SubProg db_free pc: 534 op: NOP1 (159)
    // SubProg db_free pc: 535 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 520

// block var pos_inlined_seek_at_520_16937
    DeRef(_pos_inlined_seek_at_520_16937);
    _pos_inlined_seek_at_520_16937 = NOVALUE;

// block var seek_1__tmp_at523_16939
    DeRef(_seek_1__tmp_at523_16939);
    _seek_1__tmp_at523_16939 = NOVALUE;
    // SubProg db_free pc: 537 op: STARTLINE (58)

    /** eds.e:892				remaining = io:get_bytes(current_db, (free_count-i)*8)*/
    // SubProg db_free pc: 539 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 541 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9365 = _free_count_16849 - _i_16840;
        if ((object)((uintptr_t)_9365 +(uintptr_t) HIGH_BITS) >= 0){
            _9365 = NewDouble((eudouble)_9365);
        }
    }
    else {
        _9365 = NewDouble((eudouble)_free_count_16849 - DBL_PTR(_i_16840)->dbl);
    }
    // SubProg db_free pc: 545 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9365)) {
        if (_9365 == (short)_9365){
            _9366 = _9365 * 8;
        }
        else{
            _9366 = NewDouble(_9365 * (eudouble)8);
        }
    }
    else {
        _9366 = NewDouble(DBL_PTR(_9365)->dbl * (eudouble)8);
    }
    DeRef(_9365);
    _9365 = NOVALUE;
    // SubProg db_free pc: 549 op: PROC (27)
    _0 = _remaining_16850;
    _remaining_16850 = _19get_bytes(_44current_db_16088, _9366);
    DeRef(_0);
    _9366 = NOVALUE;
    // SubProg db_free pc: 554 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 556 op: STARTLINE (58)

    /** eds.e:893				io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 560 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9368 = _i_16840 - 1;
        if ((object)((uintptr_t)_9368 +(uintptr_t) HIGH_BITS) >= 0){
            _9368 = NewDouble((eudouble)_9368);
        }
    }
    else {
        _9368 = NewDouble(DBL_PTR(_i_16840)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 564 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9368)) {
        if (_9368 == (short)_9368){
            _9369 = _9368 * 8;
        }
        else{
            _9369 = NewDouble(_9368 * (eudouble)8);
        }
    }
    else {
        _9369 = NewDouble(DBL_PTR(_9368)->dbl * (eudouble)8);
    }
    DeRef(_9368);
    _9368 = NOVALUE;
    // SubProg db_free pc: 568 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9369)) {
        _9370 = _free_list_16843 + _9369;
        if ((object)((uintptr_t)_9370 + (uintptr_t)HIGH_BITS) >= 0){
            _9370 = NewDouble((eudouble)_9370);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9370 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9369)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9369)) {
                _9370 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9369);
            }
            else
            _9370 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9369)->dbl);
        }
    }
    DeRef(_9369);
    _9369 = NOVALUE;
    // SubProg db_free pc: 572 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_571_16947);
    _pos_inlined_seek_at_571_16947 = _9370;
    _9370 = NOVALUE;
    // SubProg db_free pc: 575 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 577 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_571_16947);
    DeRef(_seek_1__tmp_at574_16949);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_571_16947;
    _seek_1__tmp_at574_16949 = MAKE_SEQ(_1);
    // SubProg db_free pc: 581 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_574_16948 = machine(19, _seek_1__tmp_at574_16949);
    // SubProg db_free pc: 585 op: NOP1 (159)
    // SubProg db_free pc: 586 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 571

// block var pos_inlined_seek_at_571_16947
    DeRef(_pos_inlined_seek_at_571_16947);
    _pos_inlined_seek_at_571_16947 = NOVALUE;

// block var seek_1__tmp_at574_16949
    DeRef(_seek_1__tmp_at574_16949);
    _seek_1__tmp_at574_16949 = NOVALUE;
    // SubProg db_free pc: 588 op: STARTLINE (58)

    /** eds.e:894				putn(remaining)*/
    // SubProg db_free pc: 590 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 592 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 594 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_16850); // DJP 
    // SubProg db_free pc: 597 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 599 op: ELSE (23)
    goto LC; // [599] 602
    // SubProg db_free pc: 601 op: NOP1 (159)
LC: // addr: 602 pc: 601 sub: 16836 op: 159
    // SubProg db_free pc: 602 op: STARTLINE (58)

    /** eds.e:895				free_count -= 1*/
    // SubProg db_free pc: 604 op: MINUS_I (116)
    _free_count_16849 = _free_count_16849 - 1;
    // SubProg db_free pc: 608 op: STARTLINE (58)

    /** eds.e:896				io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 612 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 614 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at611_16954);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at611_16954 = MAKE_SEQ(_1);
    // SubProg db_free pc: 618 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_611_16953 = machine(19, _seek_1__tmp_at611_16954);
    // SubProg db_free pc: 622 op: NOP1 (159)
    // SubProg db_free pc: 623 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 611

// block var seek_1__tmp_at611_16954
    DeRefi(_seek_1__tmp_at611_16954);
    _seek_1__tmp_at611_16954 = NOVALUE;
    // SubProg db_free pc: 625 op: STARTLINE (58)

    /** eds.e:897				put4(free_count)*/
    // SubProg db_free pc: 627 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 629 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 631 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_16849;
    // SubProg db_free pc: 634 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 640 op: PEEK (127)
    DeRefi(_put4_1__tmp_at626_16956);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at626_16956 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 643 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at626_16956); // DJP 
    // SubProg db_free pc: 646 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 648 op: ELSE (23)
    goto LD; // [648] 651
    // SubProg db_free pc: 650 op: NOP1 (159)
LD: // addr: 651 pc: 650 sub: 16836 op: 159
    // SubProg db_free pc: 651 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 626

// block var put4_1__tmp_at626_16956
    DeRefi(_put4_1__tmp_at626_16956);
    _put4_1__tmp_at626_16956 = NOVALUE;
    // SubProg db_free pc: 653 op: ELSE (23)
    goto LE; // [653] 1028
    // SubProg db_free pc: 655 op: NOP1 (159)
LA: // addr: 656 pc: 655 sub: 16836 op: 159
    // SubProg db_free pc: 656 op: STARTLINE (58)

    /** eds.e:899				put4(prev_size+psize) -- increase previous size on free list (only)*/
    // SubProg db_free pc: 658 op: PLUS (11)
    if (IS_ATOM_INT(_prev_size_16848) && IS_ATOM_INT(_psize_16839)) {
        _9372 = _prev_size_16848 + _psize_16839;
        if ((object)((uintptr_t)_9372 + (uintptr_t)HIGH_BITS) >= 0){
            _9372 = NewDouble((eudouble)_9372);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_16848)) {
            _9372 = NewDouble((eudouble)_prev_size_16848 + DBL_PTR(_psize_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16839)) {
                _9372 = NewDouble(DBL_PTR(_prev_size_16848)->dbl + (eudouble)_psize_16839);
            }
            else
            _9372 = NewDouble(DBL_PTR(_prev_size_16848)->dbl + DBL_PTR(_psize_16839)->dbl);
        }
    }
    // SubProg db_free pc: 662 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_661_16960);
    _x_inlined_put4_at_661_16960 = _9372;
    _9372 = NOVALUE;
    // SubProg db_free pc: 665 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 667 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 669 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_661_16960)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_661_16960;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_661_16960)->dbl;
    }
    // SubProg db_free pc: 672 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 674 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 676 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 678 op: PEEK (127)
    DeRefi(_put4_1__tmp_at664_16961);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at664_16961 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 681 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at664_16961); // DJP 
    // SubProg db_free pc: 684 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 686 op: ELSE (23)
    goto LF; // [686] 689
    // SubProg db_free pc: 688 op: NOP1 (159)
LF: // addr: 689 pc: 688 sub: 16836 op: 159
    // SubProg db_free pc: 689 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 661

// block var x_inlined_put4_at_661_16960
    DeRef(_x_inlined_put4_at_661_16960);
    _x_inlined_put4_at_661_16960 = NOVALUE;

// block var put4_1__tmp_at664_16961
    DeRefi(_put4_1__tmp_at664_16961);
    _put4_1__tmp_at664_16961 = NOVALUE;
    // SubProg db_free pc: 691 op: NOP1 (159)
    // SubProg db_free pc: 692 op: ELSE (23)
    goto LE; // [692] 1028
    // SubProg db_free pc: 694 op: NOP1 (159)
L9: // addr: 695 pc: 694 sub: 16836 op: 159
    // SubProg db_free pc: 695 op: STARTLINE (58)

    /** eds.e:901		elsif i < free_count and p + psize = addr then*/
    // SubProg db_free pc: 697 op: LESS (1)
    if (IS_ATOM_INT(_i_16840)) {
        _9373 = (_i_16840 < _free_count_16849);
    }
    else {
        _9373 = (DBL_PTR(_i_16840)->dbl < (eudouble)_free_count_16849);
    }
    // SubProg db_free pc: 701 op: SC1_AND_IF (146)
    if (_9373 == 0) {
        goto L10; // [701] 819
    }
    // SubProg db_free pc: 705 op: PLUS (11)
    if (IS_ATOM_INT(_p_16838) && IS_ATOM_INT(_psize_16839)) {
        _9375 = _p_16838 + _psize_16839;
        if ((object)((uintptr_t)_9375 + (uintptr_t)HIGH_BITS) >= 0){
            _9375 = NewDouble((eudouble)_9375);
        }
    }
    else {
        if (IS_ATOM_INT(_p_16838)) {
            _9375 = NewDouble((eudouble)_p_16838 + DBL_PTR(_psize_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16839)) {
                _9375 = NewDouble(DBL_PTR(_p_16838)->dbl + (eudouble)_psize_16839);
            }
            else
            _9375 = NewDouble(DBL_PTR(_p_16838)->dbl + DBL_PTR(_psize_16839)->dbl);
        }
    }
    // SubProg db_free pc: 709 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 711 op: EQUALS (3)
    if (IS_ATOM_INT(_9375) && IS_ATOM_INT(_addr_16842)) {
        _9376 = (_9375 == _addr_16842);
    }
    else {
        if (IS_ATOM_INT(_9375)) {
            _9376 = ((eudouble)_9375 == DBL_PTR(_addr_16842)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_16842)) {
                _9376 = (DBL_PTR(_9375)->dbl == (eudouble)_addr_16842);
            }
            else
            _9376 = (DBL_PTR(_9375)->dbl == DBL_PTR(_addr_16842)->dbl);
        }
    }
    DeRef(_9375);
    _9375 = NOVALUE;
    // SubProg db_free pc: 715 op: NOP1 (159)
    // SubProg db_free pc: 716 op: IF (20)
    if (_9376 == 0)
    {
        DeRef(_9376);
        _9376 = NOVALUE;
        goto L10; // [716] 819
    }
    else{
        DeRef(_9376);
        _9376 = NOVALUE;
    }
    // SubProg db_free pc: 719 op: STARTLINE (58)

    /** eds.e:903			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 721 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 723 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9377 = _i_16840 - 1;
        if ((object)((uintptr_t)_9377 +(uintptr_t) HIGH_BITS) >= 0){
            _9377 = NewDouble((eudouble)_9377);
        }
    }
    else {
        _9377 = NewDouble(DBL_PTR(_i_16840)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 727 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9377)) {
        if (_9377 == (short)_9377){
            _9378 = _9377 * 8;
        }
        else{
            _9378 = NewDouble(_9377 * (eudouble)8);
        }
    }
    else {
        _9378 = NewDouble(DBL_PTR(_9377)->dbl * (eudouble)8);
    }
    DeRef(_9377);
    _9377 = NOVALUE;
    // SubProg db_free pc: 731 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9378)) {
        _9379 = _free_list_16843 + _9378;
        if ((object)((uintptr_t)_9379 + (uintptr_t)HIGH_BITS) >= 0){
            _9379 = NewDouble((eudouble)_9379);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9379 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9378)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9378)) {
                _9379 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9378);
            }
            else
            _9379 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9378)->dbl);
        }
    }
    DeRef(_9378);
    _9378 = NOVALUE;
    // SubProg db_free pc: 735 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_734_16971);
    _pos_inlined_seek_at_734_16971 = _9379;
    _9379 = NOVALUE;
    // SubProg db_free pc: 738 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 740 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_734_16971);
    DeRef(_seek_1__tmp_at737_16973);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_734_16971;
    _seek_1__tmp_at737_16973 = MAKE_SEQ(_1);
    // SubProg db_free pc: 744 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_737_16972 = machine(19, _seek_1__tmp_at737_16973);
    // SubProg db_free pc: 748 op: NOP1 (159)
    // SubProg db_free pc: 749 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 734

// block var pos_inlined_seek_at_734_16971
    DeRef(_pos_inlined_seek_at_734_16971);
    _pos_inlined_seek_at_734_16971 = NOVALUE;

// block var seek_1__tmp_at737_16973
    DeRef(_seek_1__tmp_at737_16973);
    _seek_1__tmp_at737_16973 = NOVALUE;
    // SubProg db_free pc: 751 op: STARTLINE (58)

    /** eds.e:904			put4(p)*/
    // SubProg db_free pc: 753 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 757 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_p_16838)) {
        *poke4_addr = (uint32_t)_p_16838;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_16838)->dbl;
    }
    // SubProg db_free pc: 760 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 762 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 764 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 766 op: PEEK (127)
    DeRefi(_put4_1__tmp_at752_16975);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at752_16975 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 769 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at752_16975); // DJP 
    // SubProg db_free pc: 772 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 774 op: ELSE (23)
    goto L11; // [774] 777
    // SubProg db_free pc: 776 op: NOP1 (159)
L11: // addr: 777 pc: 776 sub: 16836 op: 159
    // SubProg db_free pc: 777 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 752

// block var put4_1__tmp_at752_16975
    DeRefi(_put4_1__tmp_at752_16975);
    _put4_1__tmp_at752_16975 = NOVALUE;
    // SubProg db_free pc: 779 op: STARTLINE (58)

    /** eds.e:905			put4(psize+size)*/
    // SubProg db_free pc: 781 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 783 op: PLUS (11)
    if (IS_ATOM_INT(_psize_16839) && IS_ATOM_INT(_size_16841)) {
        _9380 = _psize_16839 + _size_16841;
        if ((object)((uintptr_t)_9380 + (uintptr_t)HIGH_BITS) >= 0){
            _9380 = NewDouble((eudouble)_9380);
        }
    }
    else {
        if (IS_ATOM_INT(_psize_16839)) {
            _9380 = NewDouble((eudouble)_psize_16839 + DBL_PTR(_size_16841)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_16841)) {
                _9380 = NewDouble(DBL_PTR(_psize_16839)->dbl + (eudouble)_size_16841);
            }
            else
            _9380 = NewDouble(DBL_PTR(_psize_16839)->dbl + DBL_PTR(_size_16841)->dbl);
        }
    }
    // SubProg db_free pc: 787 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_786_16978);
    _x_inlined_put4_at_786_16978 = _9380;
    _9380 = NOVALUE;
    // SubProg db_free pc: 790 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 792 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 794 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_786_16978)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_786_16978;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_786_16978)->dbl;
    }
    // SubProg db_free pc: 797 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 799 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 803 op: PEEK (127)
    DeRefi(_put4_1__tmp_at789_16979);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at789_16979 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 806 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at789_16979); // DJP 
    // SubProg db_free pc: 809 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 811 op: ELSE (23)
    goto L12; // [811] 814
    // SubProg db_free pc: 813 op: NOP1 (159)
L12: // addr: 814 pc: 813 sub: 16836 op: 159
    // SubProg db_free pc: 814 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 786

// block var x_inlined_put4_at_786_16978
    DeRef(_x_inlined_put4_at_786_16978);
    _x_inlined_put4_at_786_16978 = NOVALUE;

// block var put4_1__tmp_at789_16979
    DeRefi(_put4_1__tmp_at789_16979);
    _put4_1__tmp_at789_16979 = NOVALUE;
    // SubProg db_free pc: 816 op: ELSE (23)
    goto LE; // [816] 1028
    // SubProg db_free pc: 818 op: NOP1 (159)
L10: // addr: 819 pc: 818 sub: 16836 op: 159
    // SubProg db_free pc: 819 op: STARTLINE (58)

    /** eds.e:908			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 821 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 823 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9381 = _i_16840 - 1;
        if ((object)((uintptr_t)_9381 +(uintptr_t) HIGH_BITS) >= 0){
            _9381 = NewDouble((eudouble)_9381);
        }
    }
    else {
        _9381 = NewDouble(DBL_PTR(_i_16840)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 827 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9381)) {
        if (_9381 == (short)_9381){
            _9382 = _9381 * 8;
        }
        else{
            _9382 = NewDouble(_9381 * (eudouble)8);
        }
    }
    else {
        _9382 = NewDouble(DBL_PTR(_9381)->dbl * (eudouble)8);
    }
    DeRef(_9381);
    _9381 = NOVALUE;
    // SubProg db_free pc: 831 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9382)) {
        _9383 = _free_list_16843 + _9382;
        if ((object)((uintptr_t)_9383 + (uintptr_t)HIGH_BITS) >= 0){
            _9383 = NewDouble((eudouble)_9383);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9383 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9382)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9382)) {
                _9383 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9382);
            }
            else
            _9383 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9382)->dbl);
        }
    }
    DeRef(_9382);
    _9382 = NOVALUE;
    // SubProg db_free pc: 835 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_834_16985);
    _pos_inlined_seek_at_834_16985 = _9383;
    _9383 = NOVALUE;
    // SubProg db_free pc: 838 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 840 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_834_16985);
    DeRef(_seek_1__tmp_at837_16987);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_834_16985;
    _seek_1__tmp_at837_16987 = MAKE_SEQ(_1);
    // SubProg db_free pc: 844 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_837_16986 = machine(19, _seek_1__tmp_at837_16987);
    // SubProg db_free pc: 848 op: NOP1 (159)
    // SubProg db_free pc: 849 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 834

// block var pos_inlined_seek_at_834_16985
    DeRef(_pos_inlined_seek_at_834_16985);
    _pos_inlined_seek_at_834_16985 = NOVALUE;

// block var seek_1__tmp_at837_16987
    DeRef(_seek_1__tmp_at837_16987);
    _seek_1__tmp_at837_16987 = NOVALUE;
    // SubProg db_free pc: 851 op: STARTLINE (58)

    /** eds.e:909			remaining = io:get_bytes(current_db, (free_count-i+1)*8)*/
    // SubProg db_free pc: 853 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 855 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9384 = _free_count_16849 - _i_16840;
        if ((object)((uintptr_t)_9384 +(uintptr_t) HIGH_BITS) >= 0){
            _9384 = NewDouble((eudouble)_9384);
        }
    }
    else {
        _9384 = NewDouble((eudouble)_free_count_16849 - DBL_PTR(_i_16840)->dbl);
    }
    // SubProg db_free pc: 859 op: PLUS1 (93)
    if (IS_ATOM_INT(_9384)) {
        _9385 = _9384 + 1;
        if (_9385 > MAXINT){
            _9385 = NewDouble((eudouble)_9385);
        }
    }
    else
    _9385 = binary_op(PLUS, 1, _9384);
    DeRef(_9384);
    _9384 = NOVALUE;
    // SubProg db_free pc: 863 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9385)) {
        if (_9385 == (short)_9385){
            _9386 = _9385 * 8;
        }
        else{
            _9386 = NewDouble(_9385 * (eudouble)8);
        }
    }
    else {
        _9386 = NewDouble(DBL_PTR(_9385)->dbl * (eudouble)8);
    }
    DeRef(_9385);
    _9385 = NOVALUE;
    // SubProg db_free pc: 867 op: PROC (27)
    _0 = _remaining_16850;
    _remaining_16850 = _19get_bytes(_44current_db_16088, _9386);
    DeRef(_0);
    _9386 = NOVALUE;
    // SubProg db_free pc: 872 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 874 op: STARTLINE (58)

    /** eds.e:910			free_count += 1*/
    // SubProg db_free pc: 876 op: PLUS1_I (117)
    _free_count_16849 = _free_count_16849 + 1;
    // SubProg db_free pc: 880 op: STARTLINE (58)

    /** eds.e:911			io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 882 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 884 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 886 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at883_16995);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at883_16995 = MAKE_SEQ(_1);
    // SubProg db_free pc: 890 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_883_16994 = machine(19, _seek_1__tmp_at883_16995);
    // SubProg db_free pc: 894 op: NOP1 (159)
    // SubProg db_free pc: 895 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 883

// block var seek_1__tmp_at883_16995
    DeRefi(_seek_1__tmp_at883_16995);
    _seek_1__tmp_at883_16995 = NOVALUE;
    // SubProg db_free pc: 897 op: STARTLINE (58)

    /** eds.e:912			put4(free_count)*/
    // SubProg db_free pc: 899 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 901 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 903 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_16849;
    // SubProg db_free pc: 906 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 908 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 910 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 912 op: PEEK (127)
    DeRefi(_put4_1__tmp_at898_16997);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at898_16997 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 915 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at898_16997); // DJP 
    // SubProg db_free pc: 918 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 920 op: ELSE (23)
    goto L13; // [920] 923
    // SubProg db_free pc: 922 op: NOP1 (159)
L13: // addr: 923 pc: 922 sub: 16836 op: 159
    // SubProg db_free pc: 923 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 898

// block var put4_1__tmp_at898_16997
    DeRefi(_put4_1__tmp_at898_16997);
    _put4_1__tmp_at898_16997 = NOVALUE;
    // SubProg db_free pc: 925 op: STARTLINE (58)

    /** eds.e:913			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 927 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 929 op: MINUS (10)
    if (IS_ATOM_INT(_i_16840)) {
        _9389 = _i_16840 - 1;
        if ((object)((uintptr_t)_9389 +(uintptr_t) HIGH_BITS) >= 0){
            _9389 = NewDouble((eudouble)_9389);
        }
    }
    else {
        _9389 = NewDouble(DBL_PTR(_i_16840)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 933 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9389)) {
        if (_9389 == (short)_9389){
            _9390 = _9389 * 8;
        }
        else{
            _9390 = NewDouble(_9389 * (eudouble)8);
        }
    }
    else {
        _9390 = NewDouble(DBL_PTR(_9389)->dbl * (eudouble)8);
    }
    DeRef(_9389);
    _9389 = NOVALUE;
    // SubProg db_free pc: 937 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16843) && IS_ATOM_INT(_9390)) {
        _9391 = _free_list_16843 + _9390;
        if ((object)((uintptr_t)_9391 + (uintptr_t)HIGH_BITS) >= 0){
            _9391 = NewDouble((eudouble)_9391);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16843)) {
            _9391 = NewDouble((eudouble)_free_list_16843 + DBL_PTR(_9390)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9390)) {
                _9391 = NewDouble(DBL_PTR(_free_list_16843)->dbl + (eudouble)_9390);
            }
            else
            _9391 = NewDouble(DBL_PTR(_free_list_16843)->dbl + DBL_PTR(_9390)->dbl);
        }
    }
    DeRef(_9390);
    _9390 = NOVALUE;
    // SubProg db_free pc: 941 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_940_17002);
    _pos_inlined_seek_at_940_17002 = _9391;
    _9391 = NOVALUE;
    // SubProg db_free pc: 944 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 946 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_940_17002);
    DeRef(_seek_1__tmp_at943_17004);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_940_17002;
    _seek_1__tmp_at943_17004 = MAKE_SEQ(_1);
    // SubProg db_free pc: 950 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_943_17003 = machine(19, _seek_1__tmp_at943_17004);
    // SubProg db_free pc: 954 op: NOP1 (159)
    // SubProg db_free pc: 955 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 940

// block var pos_inlined_seek_at_940_17002
    DeRef(_pos_inlined_seek_at_940_17002);
    _pos_inlined_seek_at_940_17002 = NOVALUE;

// block var seek_1__tmp_at943_17004
    DeRef(_seek_1__tmp_at943_17004);
    _seek_1__tmp_at943_17004 = NOVALUE;
    // SubProg db_free pc: 957 op: STARTLINE (58)

    /** eds.e:914			put4(p)*/
    // SubProg db_free pc: 959 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 961 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 963 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_p_16838)) {
        *poke4_addr = (uint32_t)_p_16838;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_16838)->dbl;
    }
    // SubProg db_free pc: 966 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 968 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 970 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 972 op: PEEK (127)
    DeRefi(_put4_1__tmp_at958_17006);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at958_17006 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 975 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at958_17006); // DJP 
    // SubProg db_free pc: 978 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 980 op: ELSE (23)
    goto L14; // [980] 983
    // SubProg db_free pc: 982 op: NOP1 (159)
L14: // addr: 983 pc: 982 sub: 16836 op: 159
    // SubProg db_free pc: 983 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 958

// block var put4_1__tmp_at958_17006
    DeRefi(_put4_1__tmp_at958_17006);
    _put4_1__tmp_at958_17006 = NOVALUE;
    // SubProg db_free pc: 985 op: STARTLINE (58)

    /** eds.e:915			put4(psize)*/
    // SubProg db_free pc: 987 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 991 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_psize_16839)) {
        *poke4_addr = (uint32_t)_psize_16839;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_psize_16839)->dbl;
    }
    // SubProg db_free pc: 994 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 996 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 998 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 1000 op: PEEK (127)
    DeRefi(_put4_1__tmp_at986_17008);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at986_17008 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 1003 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at986_17008); // DJP 
    // SubProg db_free pc: 1006 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 1008 op: ELSE (23)
    goto L15; // [1008] 1011
    // SubProg db_free pc: 1010 op: NOP1 (159)
L15: // addr: 1011 pc: 1010 sub: 16836 op: 159
    // SubProg db_free pc: 1011 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 986

// block var put4_1__tmp_at986_17008
    DeRefi(_put4_1__tmp_at986_17008);
    _put4_1__tmp_at986_17008 = NOVALUE;
    // SubProg db_free pc: 1013 op: STARTLINE (58)

    /** eds.e:916			putn(remaining)*/
    // SubProg db_free pc: 1015 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 1017 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 1019 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_16850); // DJP 
    // SubProg db_free pc: 1022 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 1024 op: ELSE (23)
    goto L16; // [1024] 1027
    // SubProg db_free pc: 1026 op: NOP1 (159)
L16: // addr: 1027 pc: 1026 sub: 16836 op: 159
    // SubProg db_free pc: 1027 op: NOP1 (159)
LE: // addr: 1028 pc: 1027 sub: 16836 op: 159
    // SubProg db_free pc: 1028 op: STARTLINE (58)

    /** eds.e:919		if new_space then*/
    // SubProg db_free pc: 1030 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 1032 op: IF (20)
    if (_new_space_16845 == 0) {
        goto L17; // [1032] 1043
    }
    else {
        if (!IS_ATOM_INT(_new_space_16845) && DBL_PTR(_new_space_16845)->dbl == 0.0){
            goto L17; // [1032] 1043
        }
    }
    // SubProg db_free pc: 1035 op: STARTLINE (58)

    /** eds.e:920			db_free(to_be_freed) -- free the old space*/
    // SubProg db_free pc: 1037 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 1039 op: PROC (27)
    Ref(_to_be_freed_16846);
    _44db_free(_to_be_freed_16846);
    // SubProg db_free pc: 1042 op: NOP1 (159)
L17: // addr: 1043 pc: 1042 sub: 16836 op: 159
    // SubProg db_free pc: 1043 op: STARTLINE (58)

    /** eds.e:922	end procedure*/
    // SubProg db_free pc: 1045 op: RETURNP (29)

// Exiting block BLOCK: db_free

// block var p_16838
    DeRef(_p_16838);

// block var psize_16839
    DeRef(_psize_16839);

// block var i_16840
    DeRef(_i_16840);

// block var size_16841
    DeRef(_size_16841);

// block var addr_16842
    DeRef(_addr_16842);

// block var free_list_16843
    DeRef(_free_list_16843);

// block var free_list_space_16844
    DeRef(_free_list_space_16844);

// block var new_space_16845
    DeRef(_new_space_16845);

// block var to_be_freed_16846
    DeRef(_to_be_freed_16846);

// block var prev_addr_16847
    DeRef(_prev_addr_16847);

// block var prev_size_16848
    DeRef(_prev_size_16848);

// block var free_count_16849

// block var remaining_16850
    DeRef(_remaining_16850);
    DeRef(_9357);
    _9357 = NOVALUE;
    DeRef(_9349);
    _9349 = NOVALUE;
    DeRef(_9373);
    _9373 = NOVALUE;
    return;
    // SubProg db_free pc: 1048 op: BADRETURNF (43)
    ;
}


void _44save_keys()
{
    object _k_17013 = NOVALUE;
// skipping _9399  name type: 0
    object _9398 = NOVALUE; // 17024 9398
// skipping _9397  name type: 0
// skipping _9396  name type: 0
// skipping _9395  name type: 0
    object _9394 = NOVALUE; // 17018 9394
// skipping _9393  name type: 0
// skipping _9392  name type: 0
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
    if (binary_op_a(LESSEQ, _44current_table_pos_16089, 0)){
        goto L1; // [13] 81
    }
    // SubProg save_keys pc: 17 op: STARTLINE (58)

    /** eds.e:928				k = eu:find({current_db, current_table_pos}, cache_index)*/
    // SubProg save_keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 23 op: RIGHT_BRACE_2 (85)
    Ref(_44current_table_pos_16089);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _44current_table_pos_16089;
    _9394 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 29 op: FIND_FROM (176)
    _k_17013 = find_from(_9394, _44cache_index_16097, 1);
    DeRefDS(_9394);
    _9394 = NOVALUE;
    // SubProg save_keys pc: 34 op: STARTLINE (58)

    /** eds.e:929				if k != 0 then*/
    // SubProg save_keys pc: 36 op: NOTEQ_IFW_I (122)
    if (_k_17013 == 0)
    goto L2; // [36] 53
    // SubProg save_keys pc: 40 op: STARTLINE (58)

    /** eds.e:930					key_cache[k] = key_pointers*/
    // SubProg save_keys pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 46 op: ASSIGN_SUBS (16)
    RefDS(_44key_pointers_16095);
    _2 = (object)SEQ_PTR(_44key_cache_16096);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _44key_cache_16096 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _k_17013);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _44key_pointers_16095;
    DeRef(_1);
    // SubProg save_keys pc: 50 op: ELSE (23)
    goto L3; // [50] 80
    // SubProg save_keys pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 17011 op: 159
    // SubProg save_keys pc: 53 op: STARTLINE (58)

    /** eds.e:932					key_cache = append(key_cache, key_pointers)*/
    // SubProg save_keys pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 59 op: APPEND (35)
    RefDS(_44key_pointers_16095);
    Append(&_44key_cache_16096, _44key_cache_16096, _44key_pointers_16095);
    // SubProg save_keys pc: 63 op: STARTLINE (58)

    /** eds.e:933					cache_index = append(cache_index, {current_db, current_table_pos})*/
    // SubProg save_keys pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 71 op: RIGHT_BRACE_2 (85)
    Ref(_44current_table_pos_16089);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _44current_table_pos_16089;
    _9398 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 75 op: APPEND (35)
    RefDS(_9398);
    Append(&_44cache_index_16097, _44cache_index_16097, _9398);
    DeRefDS(_9398);
    _9398 = NOVALUE;
    // SubProg save_keys pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 17011 op: 159
    // SubProg save_keys pc: 80 op: NOP1 (159)
L1: // addr: 81 pc: 80 sub: 17011 op: 159
    // SubProg save_keys pc: 81 op: NOP1 (159)
    // SubProg save_keys pc: 82 op: STARTLINE (58)

    /** eds.e:937	end procedure*/
    // SubProg save_keys pc: 84 op: RETURNP (29)

// Exiting block BLOCK: save_keys

// block var k_17013
    return;
    // SubProg save_keys pc: 87 op: BADRETURNF (43)
    ;
}


object _44db_create(object _path_17110, object _lock_method_17111, object _init_tables_17112, object _init_free_17113)
{
    object _db_17114 = NOVALUE;
    object _lock_file_1__tmp_at222_17153 = NOVALUE;
    object _lock_file_inlined_lock_file_at_222_17152 = NOVALUE;
    object _put4_1__tmp_at342_17162 = NOVALUE;
    object _put4_1__tmp_at370_17164 = NOVALUE;
    object _put4_1__tmp_at413_17170 = NOVALUE;
    object _x_inlined_put4_at_410_17169 = NOVALUE;
    object _put4_1__tmp_at452_17175 = NOVALUE;
    object _x_inlined_put4_at_449_17174 = NOVALUE;
    object _put4_1__tmp_at480_17177 = NOVALUE;
    object _s_inlined_putn_at_516_17181 = NOVALUE;
    object _put4_1__tmp_at548_17186 = NOVALUE;
    object _x_inlined_put4_at_545_17185 = NOVALUE;
    object _s_inlined_putn_at_584_17190 = NOVALUE;
    object _9496 = NOVALUE; // 17188 9496
    object _9495 = NOVALUE; // 17187 9495
    object _9494 = NOVALUE; // 17183 9494
    object _9493 = NOVALUE; // 17182 9493
    object _9492 = NOVALUE; // 17179 9492
    object _9491 = NOVALUE; // 17178 9491
    object _9490 = NOVALUE; // 17172 9490
    object _9489 = NOVALUE; // 17171 9489
    object _9488 = NOVALUE; // 17167 9488
    object _9487 = NOVALUE; // 17166 9487
    object _9486 = NOVALUE; // 17165 9486
// skipping _9485  name type: 0
// skipping _9484  name type: 0
// skipping _9483  name type: 0
// skipping _9482  name type: 0
// skipping _9481  name type: 0
// skipping _9480  name type: 0
// skipping _9479  name type: 0
// skipping _9478  name type: 0
// skipping _9476  name type: 0
// skipping _9475  name type: 0
// skipping _9474  name type: 0
// skipping _9473  name type: 0
// skipping _9472  name type: 0
// skipping _9471  name type: 0
// skipping _9470  name type: 0
    object _9469 = NOVALUE; // 17130 9469
// skipping _9468  name type: 0
    object _9467 = NOVALUE; // 17126 9467
    object _9466 = NOVALUE; // 17125 9466
// skipping _9465  name type: 0
    object _9464 = NOVALUE; // 17123 9464
    object _9463 = NOVALUE; // 17122 9463
// skipping _9462  name type: 0
    object _9461 = NOVALUE; // 17120 9461
    object _9460 = NOVALUE; // 17119 9460
// skipping _9459  name type: 0
    object _9458 = NOVALUE; // 17117 9458
// skipping _9457  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_create pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_create pc: 5 op: INTEGER_CHECK (96)
    // SubProg db_create pc: 7 op: INTEGER_CHECK (96)
    // SubProg db_create pc: 9 op: STARTLINE (58)

    /** eds.e:1133		db = find(path, Known_Aliases)*/
    // SubProg db_create pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 13 op: FIND_FROM (176)
    _db_17114 = find_from(_path_17110, _44Known_Aliases_16109, 1);
    // SubProg db_create pc: 18 op: STARTLINE (58)

    /** eds.e:1134		if db then*/
    // SubProg db_create pc: 20 op: IF (20)
    if (_db_17114 == 0)
    {
        goto L1; // [20] 94
    }
    else{
    }
    // SubProg db_create pc: 23 op: STARTLINE (58)

    /** eds.e:1136			path = Alias_Details[db][1]*/
    // SubProg db_create pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9458 = (object)*(((s1_ptr)_2)->base + _db_17114);
    // SubProg db_create pc: 31 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17110);
    _2 = (object)SEQ_PTR(_9458);
    _path_17110 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17110);
    _9458 = NOVALUE;
    // SubProg db_create pc: 35 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 37 op: STARTLINE (58)

    /** eds.e:1137			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    // SubProg db_create pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9460 = (object)*(((s1_ptr)_2)->base + _db_17114);
    // SubProg db_create pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9460);
    _9461 = (object)*(((s1_ptr)_2)->base + 2);
    _9460 = NOVALUE;
    // SubProg db_create pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9461);
    _lock_method_17111 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17111)){
        _lock_method_17111 = (object)DBL_PTR(_lock_method_17111)->dbl;
    }
    _9461 = NOVALUE;
    // SubProg db_create pc: 55 op: STARTLINE (58)

    /** eds.e:1138			init_tables = Alias_Details[db][2][CONNECT_TABLES]*/
    // SubProg db_create pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9463 = (object)*(((s1_ptr)_2)->base + _db_17114);
    // SubProg db_create pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9463);
    _9464 = (object)*(((s1_ptr)_2)->base + 2);
    _9463 = NOVALUE;
    // SubProg db_create pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9464);
    _init_tables_17112 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_init_tables_17112)){
        _init_tables_17112 = (object)DBL_PTR(_init_tables_17112)->dbl;
    }
    _9464 = NOVALUE;
    // SubProg db_create pc: 73 op: STARTLINE (58)

    /** eds.e:1139			init_free = Alias_Details[db][2][CONNECT_FREE]*/
    // SubProg db_create pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 77 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9466 = (object)*(((s1_ptr)_2)->base + _db_17114);
    // SubProg db_create pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9466);
    _9467 = (object)*(((s1_ptr)_2)->base + 2);
    _9466 = NOVALUE;
    // SubProg db_create pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9467);
    _init_free_17113 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_init_free_17113)){
        _init_free_17113 = (object)DBL_PTR(_init_free_17113)->dbl;
    }
    _9467 = NOVALUE;
    // SubProg db_create pc: 91 op: ELSE (23)
    goto L2; // [91] 134
    // SubProg db_create pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 17108 op: 159
    // SubProg db_create pc: 94 op: STARTLINE (58)

    /** eds.e:1141			path = filesys:canonical_path( defaultext(path, "edb") )*/
    // SubProg db_create pc: 96 op: PROC (27)
    RefDS(_path_17110);
    RefDS(_9452);
    _9469 = _16defaultext(_path_17110, _9452);
    // SubProg db_create pc: 101 op: PROC (27)
    _0 = _path_17110;
    _path_17110 = _16canonical_path(_9469, 0, 0);
    DeRefDS(_0);
    _9469 = NOVALUE;
    // SubProg db_create pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 109 op: STARTLINE (58)

    /** eds.e:1143			if init_tables < 1 then*/
    // SubProg db_create pc: 111 op: LESS_IFW_I (119)
    if (_init_tables_17112 >= 1)
    goto L3; // [111] 121
    // SubProg db_create pc: 115 op: STARTLINE (58)

    /** eds.e:1144				init_tables = 1*/
    // SubProg db_create pc: 117 op: ASSIGN_I (113)
    _init_tables_17112 = 1;
    // SubProg db_create pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 17108 op: 159
    // SubProg db_create pc: 121 op: STARTLINE (58)

    /** eds.e:1147			if init_free < 0 then*/
    // SubProg db_create pc: 123 op: LESS_IFW_I (119)
    if (_init_free_17113 >= 0)
    goto L4; // [123] 133
    // SubProg db_create pc: 127 op: STARTLINE (58)

    /** eds.e:1148				init_free = 0*/
    // SubProg db_create pc: 129 op: ASSIGN_I (113)
    _init_free_17113 = 0;
    // SubProg db_create pc: 132 op: NOP1 (159)
L4: // addr: 133 pc: 132 sub: 17108 op: 159
    // SubProg db_create pc: 133 op: NOP1 (159)
L2: // addr: 134 pc: 133 sub: 17108 op: 159
    // SubProg db_create pc: 134 op: STARTLINE (58)

    /** eds.e:1154		db = open(path, "rb")*/
    // SubProg db_create pc: 136 op: OPEN (37)
    _db_17114 = EOpen(_path_17110, _3046, 0);
    // SubProg db_create pc: 141 op: STARTLINE (58)

    /** eds.e:1155		if db != -1 then*/
    // SubProg db_create pc: 143 op: NOTEQ_IFW_I (122)
    if (_db_17114 == -1)
    goto L5; // [143] 158
    // SubProg db_create pc: 147 op: STARTLINE (58)

    /** eds.e:1157			close(db)*/
    // SubProg db_create pc: 149 op: CLOSE (86)
    EClose(_db_17114);
    // SubProg db_create pc: 151 op: STARTLINE (58)

    /** eds.e:1158			return DB_EXISTS_ALREADY*/
    // SubProg db_create pc: 153 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17110
    DeRefDS(_path_17110);

// block var lock_method_17111

// block var init_tables_17112

// block var init_free_17113

// block var db_17114
    return -2;
    // SubProg db_create pc: 157 op: NOP1 (159)
L5: // addr: 158 pc: 157 sub: 17108 op: 159
    // SubProg db_create pc: 158 op: STARTLINE (58)

    /** eds.e:1162		db = open(path, "wb")*/
    // SubProg db_create pc: 160 op: OPEN (37)
    _db_17114 = EOpen(_path_17110, _3041, 0);
    // SubProg db_create pc: 165 op: STARTLINE (58)

    /** eds.e:1163		if db = -1 then*/
    // SubProg db_create pc: 167 op: EQUALS_IFW_I (121)
    if (_db_17114 != -1)
    goto L6; // [167] 178
    // SubProg db_create pc: 171 op: STARTLINE (58)

    /** eds.e:1164			return DB_OPEN_FAIL*/
    // SubProg db_create pc: 173 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17110
    DeRefDS(_path_17110);

// block var lock_method_17111

// block var init_tables_17112

// block var init_free_17113

// block var db_17114
    return -1;
    // SubProg db_create pc: 177 op: NOP1 (159)
L6: // addr: 178 pc: 177 sub: 17108 op: 159
    // SubProg db_create pc: 178 op: STARTLINE (58)

    /** eds.e:1166		close(db)*/
    // SubProg db_create pc: 180 op: CLOSE (86)
    EClose(_db_17114);
    // SubProg db_create pc: 182 op: STARTLINE (58)

    /** eds.e:1169		db = open(path, "ub")*/
    // SubProg db_create pc: 184 op: OPEN (37)
    _db_17114 = EOpen(_path_17110, _9477, 0);
    // SubProg db_create pc: 189 op: STARTLINE (58)

    /** eds.e:1170		if db = -1 then*/
    // SubProg db_create pc: 191 op: EQUALS_IFW_I (121)
    if (_db_17114 != -1)
    goto L7; // [191] 202
    // SubProg db_create pc: 195 op: STARTLINE (58)

    /** eds.e:1171			return DB_OPEN_FAIL*/
    // SubProg db_create pc: 197 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17110
    DeRefDS(_path_17110);

// block var lock_method_17111

// block var init_tables_17112

// block var init_free_17113

// block var db_17114
    return -1;
    // SubProg db_create pc: 201 op: NOP1 (159)
L7: // addr: 202 pc: 201 sub: 17108 op: 159
    // SubProg db_create pc: 202 op: STARTLINE (58)

    /** eds.e:1173		if lock_method = DB_LOCK_SHARED then*/
    // SubProg db_create pc: 204 op: EQUALS_IFW_I (121)
    if (_lock_method_17111 != 1)
    goto L8; // [204] 214
    // SubProg db_create pc: 208 op: STARTLINE (58)

    /** eds.e:1175			lock_method = DB_LOCK_NO*/
    // SubProg db_create pc: 210 op: ASSIGN_I (113)
    _lock_method_17111 = 0;
    // SubProg db_create pc: 213 op: NOP1 (159)
L8: // addr: 214 pc: 213 sub: 17108 op: 159
    // SubProg db_create pc: 214 op: STARTLINE (58)

    /** eds.e:1177		if lock_method = DB_LOCK_EXCLUSIVE then*/
    // SubProg db_create pc: 216 op: EQUALS_IFW_I (121)
    if (_lock_method_17111 != 2)
    goto L9; // [216] 248
    // SubProg db_create pc: 220 op: STARTLINE (58)

    /** eds.e:1178			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/
    // SubProg db_create pc: 222 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_create pc: 224 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at222_17153;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_17114;
    ((intptr_t*)_2)[2] = 2;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at222_17153 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg db_create pc: 230 op: MACHINE_FUNC (111)
    _lock_file_inlined_lock_file_at_222_17152 = machine(61, _lock_file_1__tmp_at222_17153);
    // SubProg db_create pc: 234 op: NOP1 (159)
    // SubProg db_create pc: 235 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-lock_file from db_create @ 222

// block var lock_file_1__tmp_at222_17153
    DeRef(_lock_file_1__tmp_at222_17153);
    _lock_file_1__tmp_at222_17153 = NOVALUE;
    // SubProg db_create pc: 237 op: NOT_IFW (108)
    if (_lock_file_inlined_lock_file_at_222_17152 != 0)
    goto LA; // [237] 247
    // SubProg db_create pc: 240 op: STARTLINE (58)

    /** eds.e:1179				return DB_LOCK_FAIL*/
    // SubProg db_create pc: 242 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17110
    DeRefDS(_path_17110);

// block var lock_method_17111

// block var init_tables_17112

// block var init_free_17113

// block var db_17114
    return -3;
    // SubProg db_create pc: 246 op: NOP1 (159)
LA: // addr: 247 pc: 246 sub: 17108 op: 159
    // SubProg db_create pc: 247 op: NOP1 (159)
L9: // addr: 248 pc: 247 sub: 17108 op: 159
    // SubProg db_create pc: 248 op: STARTLINE (58)

    /** eds.e:1182		save_keys()*/
    // SubProg db_create pc: 250 op: PROC (27)
    _44save_keys();
    // SubProg db_create pc: 252 op: STARTLINE (58)

    /** eds.e:1183		current_db = db*/
    // SubProg db_create pc: 254 op: ASSIGN_I (113)
    _44current_db_16088 = _db_17114;
    // SubProg db_create pc: 257 op: STARTLINE (58)

    /** eds.e:1184		current_lock = lock_method*/
    // SubProg db_create pc: 259 op: ASSIGN_I (113)
    _44current_lock_16094 = _lock_method_17111;
    // SubProg db_create pc: 262 op: STARTLINE (58)

    /** eds.e:1185		current_table_pos = -1*/
    // SubProg db_create pc: 264 op: ASSIGN (18)
    DeRef(_44current_table_pos_16089);
    _44current_table_pos_16089 = -1;
    // SubProg db_create pc: 267 op: STARTLINE (58)

    /** eds.e:1186		current_table_name = ""*/
    // SubProg db_create pc: 269 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16090);
    _44current_table_name_16090 = _5;
    // SubProg db_create pc: 272 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 274 op: STARTLINE (58)

    /** eds.e:1187		db_names = append(db_names, path)*/
    // SubProg db_create pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 278 op: APPEND (35)
    RefDS(_path_17110);
    Append(&_44db_names_16091, _44db_names_16091, _path_17110);
    // SubProg db_create pc: 282 op: STARTLINE (58)

    /** eds.e:1188		db_lock_methods = append(db_lock_methods, lock_method)*/
    // SubProg db_create pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 286 op: APPEND (35)
    Append(&_44db_lock_methods_16093, _44db_lock_methods_16093, _lock_method_17111);
    // SubProg db_create pc: 290 op: STARTLINE (58)

    /** eds.e:1189		db_file_nums = append(db_file_nums, db)*/
    // SubProg db_create pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 294 op: APPEND (35)
    Append(&_44db_file_nums_16092, _44db_file_nums_16092, _db_17114);
    // SubProg db_create pc: 298 op: STARTLINE (58)

    /** eds.e:1192		put1(DB_MAGIC) -- so we know what type of file it is*/
    // SubProg db_create pc: 300 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 304 op: PUTS (44)
    EPuts(_44current_db_16088, 77); // DJP 
    // SubProg db_create pc: 307 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 309 op: ELSE (23)
    goto LB; // [309] 312
    // SubProg db_create pc: 311 op: NOP1 (159)
LB: // addr: 312 pc: 311 sub: 17108 op: 159
    // SubProg db_create pc: 312 op: STARTLINE (58)

    /** eds.e:1193		put1(DB_MAJOR) -- major version*/
    // SubProg db_create pc: 314 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 318 op: PUTS (44)
    EPuts(_44current_db_16088, 4); // DJP 
    // SubProg db_create pc: 321 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 323 op: ELSE (23)
    goto LC; // [323] 326
    // SubProg db_create pc: 325 op: NOP1 (159)
LC: // addr: 326 pc: 325 sub: 17108 op: 159
    // SubProg db_create pc: 326 op: STARTLINE (58)

    /** eds.e:1194		put1(DB_MINOR) -- minor version*/
    // SubProg db_create pc: 328 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 332 op: PUTS (44)
    EPuts(_44current_db_16088, 0); // DJP 
    // SubProg db_create pc: 335 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 337 op: ELSE (23)
    goto LD; // [337] 340
    // SubProg db_create pc: 339 op: NOP1 (159)
LD: // addr: 340 pc: 339 sub: 17108 op: 159
    // SubProg db_create pc: 340 op: STARTLINE (58)

    /** eds.e:1196		put4(19)  -- pointer to tables*/
    // SubProg db_create pc: 342 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 346 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)19;
    // SubProg db_create pc: 349 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 355 op: PEEK (127)
    DeRefi(_put4_1__tmp_at342_17162);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at342_17162 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 358 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at342_17162); // DJP 
    // SubProg db_create pc: 361 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 363 op: ELSE (23)
    goto LE; // [363] 366
    // SubProg db_create pc: 365 op: NOP1 (159)
LE: // addr: 366 pc: 365 sub: 17108 op: 159
    // SubProg db_create pc: 366 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 342

// block var put4_1__tmp_at342_17162
    DeRefi(_put4_1__tmp_at342_17162);
    _put4_1__tmp_at342_17162 = NOVALUE;
    // SubProg db_create pc: 368 op: STARTLINE (58)

    /** eds.e:1198		put4(0)   -- number of free blocks*/
    // SubProg db_create pc: 370 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 372 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 374 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create pc: 377 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 383 op: PEEK (127)
    DeRefi(_put4_1__tmp_at370_17164);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at370_17164 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 386 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at370_17164); // DJP 
    // SubProg db_create pc: 389 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 391 op: ELSE (23)
    goto LF; // [391] 394
    // SubProg db_create pc: 393 op: NOP1 (159)
LF: // addr: 394 pc: 393 sub: 17108 op: 159
    // SubProg db_create pc: 394 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 370

// block var put4_1__tmp_at370_17164
    DeRefi(_put4_1__tmp_at370_17164);
    _put4_1__tmp_at370_17164 = NOVALUE;
    // SubProg db_create pc: 396 op: STARTLINE (58)

    /** eds.e:1200		put4(23 + init_tables * SIZEOF_TABLE_HEADER + 4)   -- pointer to free list*/
    // SubProg db_create pc: 398 op: MULTIPLY (13)
    if (_init_tables_17112 == (short)_init_tables_17112){
        _9486 = _init_tables_17112 * 16;
    }
    else{
        _9486 = NewDouble(_init_tables_17112 * (eudouble)16);
    }
    // SubProg db_create pc: 402 op: PLUS (11)
    if (IS_ATOM_INT(_9486)) {
        _9487 = 23 + _9486;
        if ((object)((uintptr_t)_9487 + (uintptr_t)HIGH_BITS) >= 0){
            _9487 = NewDouble((eudouble)_9487);
        }
    }
    else {
        _9487 = NewDouble((eudouble)23 + DBL_PTR(_9486)->dbl);
    }
    DeRef(_9486);
    _9486 = NOVALUE;
    // SubProg db_create pc: 406 op: PLUS (11)
    if (IS_ATOM_INT(_9487)) {
        _9488 = _9487 + 4;
        if ((object)((uintptr_t)_9488 + (uintptr_t)HIGH_BITS) >= 0){
            _9488 = NewDouble((eudouble)_9488);
        }
    }
    else {
        _9488 = NewDouble(DBL_PTR(_9487)->dbl + (eudouble)4);
    }
    DeRef(_9487);
    _9487 = NOVALUE;
    // SubProg db_create pc: 410 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_410_17169);
    _x_inlined_put4_at_410_17169 = _9488;
    _9488 = NOVALUE;
    // SubProg db_create pc: 413 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 417 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_410_17169)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_410_17169;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_410_17169)->dbl;
    }
    // SubProg db_create pc: 420 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 424 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 426 op: PEEK (127)
    DeRefi(_put4_1__tmp_at413_17170);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at413_17170 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 429 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at413_17170); // DJP 
    // SubProg db_create pc: 432 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 434 op: ELSE (23)
    goto L10; // [434] 437
    // SubProg db_create pc: 436 op: NOP1 (159)
L10: // addr: 437 pc: 436 sub: 17108 op: 159
    // SubProg db_create pc: 437 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 410

// block var x_inlined_put4_at_410_17169
    DeRef(_x_inlined_put4_at_410_17169);
    _x_inlined_put4_at_410_17169 = NOVALUE;

// block var put4_1__tmp_at413_17170
    DeRefi(_put4_1__tmp_at413_17170);
    _put4_1__tmp_at413_17170 = NOVALUE;
    // SubProg db_create pc: 439 op: STARTLINE (58)

    /** eds.e:1202		put4( 8 + init_tables * SIZEOF_TABLE_HEADER)  -- allocated size*/
    // SubProg db_create pc: 441 op: MULTIPLY (13)
    if (_init_tables_17112 == (short)_init_tables_17112){
        _9489 = _init_tables_17112 * 16;
    }
    else{
        _9489 = NewDouble(_init_tables_17112 * (eudouble)16);
    }
    // SubProg db_create pc: 445 op: PLUS (11)
    if (IS_ATOM_INT(_9489)) {
        _9490 = 8 + _9489;
        if ((object)((uintptr_t)_9490 + (uintptr_t)HIGH_BITS) >= 0){
            _9490 = NewDouble((eudouble)_9490);
        }
    }
    else {
        _9490 = NewDouble((eudouble)8 + DBL_PTR(_9489)->dbl);
    }
    DeRef(_9489);
    _9489 = NOVALUE;
    // SubProg db_create pc: 449 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_449_17174);
    _x_inlined_put4_at_449_17174 = _9490;
    _9490 = NOVALUE;
    // SubProg db_create pc: 452 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 456 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_449_17174)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_449_17174;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_449_17174)->dbl;
    }
    // SubProg db_create pc: 459 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 461 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 463 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 465 op: PEEK (127)
    DeRefi(_put4_1__tmp_at452_17175);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at452_17175 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 468 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at452_17175); // DJP 
    // SubProg db_create pc: 471 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 473 op: ELSE (23)
    goto L11; // [473] 476
    // SubProg db_create pc: 475 op: NOP1 (159)
L11: // addr: 476 pc: 475 sub: 17108 op: 159
    // SubProg db_create pc: 476 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 449

// block var x_inlined_put4_at_449_17174
    DeRef(_x_inlined_put4_at_449_17174);
    _x_inlined_put4_at_449_17174 = NOVALUE;

// block var put4_1__tmp_at452_17175
    DeRefi(_put4_1__tmp_at452_17175);
    _put4_1__tmp_at452_17175 = NOVALUE;
    // SubProg db_create pc: 478 op: STARTLINE (58)

    /** eds.e:1204		put4(0)   -- number of tables that currently exist*/
    // SubProg db_create pc: 480 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 482 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 484 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create pc: 487 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 489 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 493 op: PEEK (127)
    DeRefi(_put4_1__tmp_at480_17177);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at480_17177 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 496 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at480_17177); // DJP 
    // SubProg db_create pc: 499 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 501 op: ELSE (23)
    goto L12; // [501] 504
    // SubProg db_create pc: 503 op: NOP1 (159)
L12: // addr: 504 pc: 503 sub: 17108 op: 159
    // SubProg db_create pc: 504 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 480

// block var put4_1__tmp_at480_17177
    DeRefi(_put4_1__tmp_at480_17177);
    _put4_1__tmp_at480_17177 = NOVALUE;
    // SubProg db_create pc: 506 op: STARTLINE (58)

    /** eds.e:1206		putn(repeat(0, init_tables * SIZEOF_TABLE_HEADER))*/
    // SubProg db_create pc: 508 op: MULTIPLY (13)
    _9491 = _init_tables_17112 * 16;
    // SubProg db_create pc: 512 op: REPEAT (32)
    _9492 = Repeat(0, _9491);
    _9491 = NOVALUE;
    // SubProg db_create pc: 516 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_516_17181);
    _s_inlined_putn_at_516_17181 = _9492;
    _9492 = NOVALUE;
    // SubProg db_create pc: 519 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 521 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create pc: 523 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 525 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_516_17181); // DJP 
    // SubProg db_create pc: 528 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create pc: 530 op: ELSE (23)
    goto L13; // [530] 533
    // SubProg db_create pc: 532 op: NOP1 (159)
L13: // addr: 533 pc: 532 sub: 17108 op: 159
    // SubProg db_create pc: 533 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create @ 516

// block var s_inlined_putn_at_516_17181
    DeRefi(_s_inlined_putn_at_516_17181);
    _s_inlined_putn_at_516_17181 = NOVALUE;
    // SubProg db_create pc: 535 op: STARTLINE (58)

    /** eds.e:1208		put4(4+init_free*8)   -- allocated size*/
    // SubProg db_create pc: 537 op: MULTIPLY (13)
    if (_init_free_17113 == (short)_init_free_17113){
        _9493 = _init_free_17113 * 8;
    }
    else{
        _9493 = NewDouble(_init_free_17113 * (eudouble)8);
    }
    // SubProg db_create pc: 541 op: PLUS (11)
    if (IS_ATOM_INT(_9493)) {
        _9494 = 4 + _9493;
        if ((object)((uintptr_t)_9494 + (uintptr_t)HIGH_BITS) >= 0){
            _9494 = NewDouble((eudouble)_9494);
        }
    }
    else {
        _9494 = NewDouble((eudouble)4 + DBL_PTR(_9493)->dbl);
    }
    DeRef(_9493);
    _9493 = NOVALUE;
    // SubProg db_create pc: 545 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_545_17185);
    _x_inlined_put4_at_545_17185 = _9494;
    _9494 = NOVALUE;
    // SubProg db_create pc: 548 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 550 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 552 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_545_17185)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_545_17185;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_545_17185)->dbl;
    }
    // SubProg db_create pc: 555 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 557 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 559 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 561 op: PEEK (127)
    DeRefi(_put4_1__tmp_at548_17186);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at548_17186 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create pc: 564 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at548_17186); // DJP 
    // SubProg db_create pc: 567 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 569 op: ELSE (23)
    goto L14; // [569] 572
    // SubProg db_create pc: 571 op: NOP1 (159)
L14: // addr: 572 pc: 571 sub: 17108 op: 159
    // SubProg db_create pc: 572 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 545

// block var x_inlined_put4_at_545_17185
    DeRef(_x_inlined_put4_at_545_17185);
    _x_inlined_put4_at_545_17185 = NOVALUE;

// block var put4_1__tmp_at548_17186
    DeRefi(_put4_1__tmp_at548_17186);
    _put4_1__tmp_at548_17186 = NOVALUE;
    // SubProg db_create pc: 574 op: STARTLINE (58)

    /** eds.e:1209		putn(repeat(0, init_free * 8))*/
    // SubProg db_create pc: 576 op: MULTIPLY (13)
    _9495 = _init_free_17113 * 8;
    // SubProg db_create pc: 580 op: REPEAT (32)
    _9496 = Repeat(0, _9495);
    _9495 = NOVALUE;
    // SubProg db_create pc: 584 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_584_17190);
    _s_inlined_putn_at_584_17190 = _9496;
    _9496 = NOVALUE;
    // SubProg db_create pc: 587 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 589 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create pc: 591 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 593 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_584_17190); // DJP 
    // SubProg db_create pc: 596 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create pc: 598 op: ELSE (23)
    goto L15; // [598] 601
    // SubProg db_create pc: 600 op: NOP1 (159)
L15: // addr: 601 pc: 600 sub: 17108 op: 159
    // SubProg db_create pc: 601 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create @ 584

// block var s_inlined_putn_at_584_17190
    DeRefi(_s_inlined_putn_at_584_17190);
    _s_inlined_putn_at_584_17190 = NOVALUE;
    // SubProg db_create pc: 603 op: STARTLINE (58)

    /** eds.e:1210		return DB_OK*/
    // SubProg db_create pc: 605 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17110
    DeRefDS(_path_17110);

// block var lock_method_17111

// block var init_tables_17112

// block var init_free_17113

// block var db_17114
    return 0;
    // SubProg db_create pc: 609 op: BADRETURNF (43)
    ;
}


object _44db_open(object _path_17193, object _lock_method_17194)
{
    object _db_17195 = NOVALUE;
    object _magic_17196 = NOVALUE;
    object _lock_file_1__tmp_at129_17221 = NOVALUE;
    object _lock_file_inlined_lock_file_at_129_17220 = NOVALUE;
    object _lock_file_1__tmp_at169_17228 = NOVALUE;
    object _lock_file_inlined_lock_file_at_169_17227 = NOVALUE;
// skipping _9519  name type: 0
// skipping _9518  name type: 0
// skipping _9517  name type: 0
// skipping _9516  name type: 0
// skipping _9515  name type: 0
// skipping _9514  name type: 0
// skipping _9513  name type: 0
// skipping _9512  name type: 0
// skipping _9511  name type: 0
// skipping _9510  name type: 0
// skipping _9509  name type: 0
// skipping _9508  name type: 0
    object _9507 = NOVALUE; // 17210 9507
// skipping _9506  name type: 0
    object _9505 = NOVALUE; // 17208 9505
// skipping _9504  name type: 0
    object _9503 = NOVALUE; // 17205 9503
// skipping _9502  name type: 0
    object _9501 = NOVALUE; // 17202 9501
    object _9500 = NOVALUE; // 17201 9500
// skipping _9499  name type: 0
    object _9498 = NOVALUE; // 17199 9498
// skipping _9497  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_open pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_open pc: 5 op: STARTLINE (58)

    /** eds.e:1273		db = find(path, Known_Aliases)*/
    // SubProg db_open pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 9 op: FIND_FROM (176)
    _db_17195 = find_from(_path_17193, _44Known_Aliases_16109, 1);
    // SubProg db_open pc: 14 op: STARTLINE (58)

    /** eds.e:1274		if db then*/
    // SubProg db_open pc: 16 op: IF (20)
    if (_db_17195 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }
    // SubProg db_open pc: 19 op: STARTLINE (58)

    /** eds.e:1276			path = Alias_Details[db][1]*/
    // SubProg db_open pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9498 = (object)*(((s1_ptr)_2)->base + _db_17195);
    // SubProg db_open pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17193);
    _2 = (object)SEQ_PTR(_9498);
    _path_17193 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17193);
    _9498 = NOVALUE;
    // SubProg db_open pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 33 op: STARTLINE (58)

    /** eds.e:1277			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    // SubProg db_open pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9500 = (object)*(((s1_ptr)_2)->base + _db_17195);
    // SubProg db_open pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9500);
    _9501 = (object)*(((s1_ptr)_2)->base + 2);
    _9500 = NOVALUE;
    // SubProg db_open pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9501);
    _lock_method_17194 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17194)){
        _lock_method_17194 = (object)DBL_PTR(_lock_method_17194)->dbl;
    }
    _9501 = NOVALUE;
    // SubProg db_open pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_open pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 17191 op: 159
    // SubProg db_open pc: 54 op: STARTLINE (58)

    /** eds.e:1279			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_open pc: 56 op: PROC (27)
    RefDS(_path_17193);
    RefDS(_9452);
    _9503 = _16defaultext(_path_17193, _9452);
    // SubProg db_open pc: 61 op: PROC (27)
    _0 = _path_17193;
    _path_17193 = _16canonical_path(_9503, 0, 0);
    DeRefDS(_0);
    _9503 = NOVALUE;
    // SubProg db_open pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 17191 op: 159
    // SubProg db_open pc: 70 op: STARTLINE (58)

    /** eds.e:1282		if lock_method = DB_LOCK_NO or*/
    // SubProg db_open pc: 72 op: EQUALS (3)
    _9505 = (_lock_method_17194 == 0);
    // SubProg db_open pc: 76 op: SC1_OR_IF (147)
    if (_9505 != 0) {
        goto L3; // [76] 89
    }
    // SubProg db_open pc: 80 op: EQUALS (3)
    _9507 = (_lock_method_17194 == 2);
    // SubProg db_open pc: 84 op: NOP1 (159)
    // SubProg db_open pc: 85 op: IF (20)
    if (_9507 == 0)
    {
        DeRef(_9507);
        _9507 = NOVALUE;
        goto L4; // [85] 99
    }
    else{
        DeRef(_9507);
        _9507 = NOVALUE;
    }
    // SubProg db_open pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 17191 op: 159
    // SubProg db_open pc: 89 op: STARTLINE (58)

    /** eds.e:1285			db = open(path, "ub")*/
    // SubProg db_open pc: 91 op: OPEN (37)
    _db_17195 = EOpen(_path_17193, _9477, 0);
    // SubProg db_open pc: 96 op: ELSE (23)
    goto L5; // [96] 107
    // SubProg db_open pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 17191 op: 159
    // SubProg db_open pc: 99 op: STARTLINE (58)

    /** eds.e:1288			db = open(path, "rb")*/
    // SubProg db_open pc: 101 op: OPEN (37)
    _db_17195 = EOpen(_path_17193, _3046, 0);
    // SubProg db_open pc: 106 op: NOP1 (159)
L5: // addr: 107 pc: 106 sub: 17191 op: 159
    // SubProg db_open pc: 107 op: STARTLINE (58)

    /** eds.e:1291	ifdef WINDOWS then*/
    // SubProg db_open pc: 109 op: STARTLINE (58)

    /** eds.e:1298		if db = -1 then*/
    // SubProg db_open pc: 111 op: EQUALS_IFW_I (121)
    if (_db_17195 != -1)
    goto L6; // [111] 122
    // SubProg db_open pc: 115 op: STARTLINE (58)

    /** eds.e:1299			return DB_OPEN_FAIL*/
    // SubProg db_open pc: 117 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9505);
    _9505 = NOVALUE;
    return -1;
    // SubProg db_open pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 17191 op: 159
    // SubProg db_open pc: 122 op: STARTLINE (58)

    /** eds.e:1301		if lock_method = DB_LOCK_EXCLUSIVE then*/
    // SubProg db_open pc: 124 op: EQUALS_IFW_I (121)
    if (_lock_method_17194 != 2)
    goto L7; // [124] 162
    // SubProg db_open pc: 128 op: STARTLINE (58)

    /** eds.e:1302			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/
    // SubProg db_open pc: 130 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_open pc: 132 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at129_17221;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_17195;
    ((intptr_t*)_2)[2] = 2;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at129_17221 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg db_open pc: 138 op: MACHINE_FUNC (111)
    _lock_file_inlined_lock_file_at_129_17220 = machine(61, _lock_file_1__tmp_at129_17221);
    // SubProg db_open pc: 142 op: NOP1 (159)
    // SubProg db_open pc: 143 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-lock_file from db_open @ 129

// block var lock_file_1__tmp_at129_17221
    DeRef(_lock_file_1__tmp_at129_17221);
    _lock_file_1__tmp_at129_17221 = NOVALUE;
    // SubProg db_open pc: 145 op: NOT_IFW (108)
    if (_lock_file_inlined_lock_file_at_129_17220 != 0)
    goto L8; // [145] 201
    // SubProg db_open pc: 148 op: STARTLINE (58)

    /** eds.e:1303				close(db)*/
    // SubProg db_open pc: 150 op: CLOSE (86)
    EClose(_db_17195);
    // SubProg db_open pc: 152 op: STARTLINE (58)

    /** eds.e:1304				return DB_LOCK_FAIL*/
    // SubProg db_open pc: 154 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9505);
    _9505 = NOVALUE;
    return -3;
    // SubProg db_open pc: 158 op: NOP1 (159)
    // SubProg db_open pc: 159 op: ELSE (23)
    goto L8; // [159] 201
    // SubProg db_open pc: 161 op: NOP1 (159)
L7: // addr: 162 pc: 161 sub: 17191 op: 159
    // SubProg db_open pc: 162 op: STARTLINE (58)

    /** eds.e:1306		elsif lock_method = DB_LOCK_SHARED then*/
    // SubProg db_open pc: 164 op: EQUALS_IFW_I (121)
    if (_lock_method_17194 != 1)
    goto L9; // [164] 200
    // SubProg db_open pc: 168 op: STARTLINE (58)

    /** eds.e:1307			if not io:lock_file(db, io:LOCK_SHARED, {}) then*/
    // SubProg db_open pc: 170 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_open pc: 172 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at169_17228;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_17195;
    ((intptr_t*)_2)[2] = 1;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at169_17228 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg db_open pc: 178 op: MACHINE_FUNC (111)
    _lock_file_inlined_lock_file_at_169_17227 = machine(61, _lock_file_1__tmp_at169_17228);
    // SubProg db_open pc: 182 op: NOP1 (159)
    // SubProg db_open pc: 183 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-lock_file from db_open @ 169

// block var lock_file_1__tmp_at169_17228
    DeRef(_lock_file_1__tmp_at169_17228);
    _lock_file_1__tmp_at169_17228 = NOVALUE;
    // SubProg db_open pc: 185 op: NOT_IFW (108)
    if (_lock_file_inlined_lock_file_at_169_17227 != 0)
    goto LA; // [185] 199
    // SubProg db_open pc: 188 op: STARTLINE (58)

    /** eds.e:1308				close(db)*/
    // SubProg db_open pc: 190 op: CLOSE (86)
    EClose(_db_17195);
    // SubProg db_open pc: 192 op: STARTLINE (58)

    /** eds.e:1309				return DB_LOCK_FAIL*/
    // SubProg db_open pc: 194 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9505);
    _9505 = NOVALUE;
    return -3;
    // SubProg db_open pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 17191 op: 159
    // SubProg db_open pc: 199 op: NOP1 (159)
L9: // addr: 200 pc: 199 sub: 17191 op: 159
    // SubProg db_open pc: 200 op: NOP1 (159)
L8: // addr: 201 pc: 200 sub: 17191 op: 159
    // SubProg db_open pc: 201 op: STARTLINE (58)

    /** eds.e:1312		magic = getc(db)*/
    // SubProg db_open pc: 203 op: GETC (33)
    if (_db_17195 != last_r_file_no) {
        last_r_file_ptr = which_file(_db_17195, EF_READ);
        last_r_file_no = _db_17195;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _magic_17196 = getc((FILE*)xstdin);
        }
        else{
            _magic_17196 = getc(last_r_file_ptr);
        }
    }
    else{
        _magic_17196 = getc(last_r_file_ptr);
    }
    // SubProg db_open pc: 206 op: STARTLINE (58)

    /** eds.e:1313		if magic != DB_MAGIC then*/
    // SubProg db_open pc: 208 op: NOTEQ_IFW_I (122)
    if (_magic_17196 == 77)
    goto LB; // [208] 223
    // SubProg db_open pc: 212 op: STARTLINE (58)

    /** eds.e:1314			close(db)*/
    // SubProg db_open pc: 214 op: CLOSE (86)
    EClose(_db_17195);
    // SubProg db_open pc: 216 op: STARTLINE (58)

    /** eds.e:1315			return DB_OPEN_FAIL*/
    // SubProg db_open pc: 218 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9505);
    _9505 = NOVALUE;
    return -1;
    // SubProg db_open pc: 222 op: NOP1 (159)
LB: // addr: 223 pc: 222 sub: 17191 op: 159
    // SubProg db_open pc: 223 op: STARTLINE (58)

    /** eds.e:1317		save_keys()*/
    // SubProg db_open pc: 225 op: PROC (27)
    _44save_keys();
    // SubProg db_open pc: 227 op: STARTLINE (58)

    /** eds.e:1318		current_db = db */
    // SubProg db_open pc: 229 op: ASSIGN_I (113)
    _44current_db_16088 = _db_17195;
    // SubProg db_open pc: 232 op: STARTLINE (58)

    /** eds.e:1319		current_table_pos = -1*/
    // SubProg db_open pc: 234 op: ASSIGN (18)
    DeRef(_44current_table_pos_16089);
    _44current_table_pos_16089 = -1;
    // SubProg db_open pc: 237 op: STARTLINE (58)

    /** eds.e:1320		current_table_name = ""*/
    // SubProg db_open pc: 239 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16090);
    _44current_table_name_16090 = _5;
    // SubProg db_open pc: 242 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 244 op: STARTLINE (58)

    /** eds.e:1321		current_lock = lock_method*/
    // SubProg db_open pc: 246 op: ASSIGN_I (113)
    _44current_lock_16094 = _lock_method_17194;
    // SubProg db_open pc: 249 op: STARTLINE (58)

    /** eds.e:1322		db_names = append(db_names, path)*/
    // SubProg db_open pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 253 op: APPEND (35)
    RefDS(_path_17193);
    Append(&_44db_names_16091, _44db_names_16091, _path_17193);
    // SubProg db_open pc: 257 op: STARTLINE (58)

    /** eds.e:1323		db_lock_methods = append(db_lock_methods, lock_method)*/
    // SubProg db_open pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 261 op: APPEND (35)
    Append(&_44db_lock_methods_16093, _44db_lock_methods_16093, _lock_method_17194);
    // SubProg db_open pc: 265 op: STARTLINE (58)

    /** eds.e:1324		db_file_nums = append(db_file_nums, db)*/
    // SubProg db_open pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 269 op: APPEND (35)
    Append(&_44db_file_nums_16092, _44db_file_nums_16092, _db_17195);
    // SubProg db_open pc: 273 op: STARTLINE (58)

    /** eds.e:1325		return DB_OK*/
    // SubProg db_open pc: 275 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9505);
    _9505 = NOVALUE;
    return 0;
    // SubProg db_open pc: 279 op: BADRETURNF (43)
    ;
}


object _44db_select(object _path_17238, object _lock_method_17239)
{
    object _index_17240 = NOVALUE;
// skipping _9535  name type: 0
// skipping _9534  name type: 0
// skipping _9533  name type: 0
// skipping _9532  name type: 0
// skipping _9531  name type: 0
// skipping _9530  name type: 0
// skipping _9529  name type: 0
// skipping _9528  name type: 0
// skipping _9527  name type: 0
    object _9526 = NOVALUE; // 17249 9526
// skipping _9525  name type: 0
    object _9524 = NOVALUE; // 17246 9524
    object _9523 = NOVALUE; // 17245 9523
// skipping _9522  name type: 0
    object _9521 = NOVALUE; // 17243 9521
// skipping _9520  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_select pc: 5 op: STARTLINE (58)

    /** eds.e:1372		index = find(path, Known_Aliases)*/
    // SubProg db_select pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 9 op: FIND_FROM (176)
    _index_17240 = find_from(_path_17238, _44Known_Aliases_16109, 1);
    // SubProg db_select pc: 14 op: STARTLINE (58)

    /** eds.e:1373		if index then*/
    // SubProg db_select pc: 16 op: IF (20)
    if (_index_17240 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }
    // SubProg db_select pc: 19 op: STARTLINE (58)

    /** eds.e:1375			path = Alias_Details[index][1]*/
    // SubProg db_select pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9521 = (object)*(((s1_ptr)_2)->base + _index_17240);
    // SubProg db_select pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17238);
    _2 = (object)SEQ_PTR(_9521);
    _path_17238 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17238);
    _9521 = NOVALUE;
    // SubProg db_select pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 33 op: STARTLINE (58)

    /** eds.e:1376			lock_method = Alias_Details[index][2][CONNECT_LOCK]*/
    // SubProg db_select pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16110);
    _9523 = (object)*(((s1_ptr)_2)->base + _index_17240);
    // SubProg db_select pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9523);
    _9524 = (object)*(((s1_ptr)_2)->base + 2);
    _9523 = NOVALUE;
    // SubProg db_select pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9524);
    _lock_method_17239 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17239)){
        _lock_method_17239 = (object)DBL_PTR(_lock_method_17239)->dbl;
    }
    _9524 = NOVALUE;
    // SubProg db_select pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_select pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 17236 op: 159
    // SubProg db_select pc: 54 op: STARTLINE (58)

    /** eds.e:1378			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_select pc: 56 op: PROC (27)
    RefDS(_path_17238);
    RefDS(_9452);
    _9526 = _16defaultext(_path_17238, _9452);
    // SubProg db_select pc: 61 op: PROC (27)
    _0 = _path_17238;
    _path_17238 = _16canonical_path(_9526, 0, 0);
    DeRefDS(_0);
    _9526 = NOVALUE;
    // SubProg db_select pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 17236 op: 159
    // SubProg db_select pc: 70 op: STARTLINE (58)

    /** eds.e:1381		index = eu:find(path, db_names)*/
    // SubProg db_select pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 74 op: FIND_FROM (176)
    _index_17240 = find_from(_path_17238, _44db_names_16091, 1);
    // SubProg db_select pc: 79 op: STARTLINE (58)

    /** eds.e:1382		if index = 0 then*/
    // SubProg db_select pc: 81 op: EQUALS_IFW_I (121)
    if (_index_17240 != 0)
    goto L3; // [81] 130
    // SubProg db_select pc: 85 op: STARTLINE (58)

    /** eds.e:1383			if lock_method = -1 then*/
    // SubProg db_select pc: 87 op: EQUALS_IFW_I (121)
    if (_lock_method_17239 != -1)
    goto L4; // [87] 98
    // SubProg db_select pc: 91 op: STARTLINE (58)

    /** eds.e:1384				return DB_OPEN_FAIL*/
    // SubProg db_select pc: 93 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_17238
    DeRefDS(_path_17238);

// block var lock_method_17239

// block var index_17240
    return -1;
    // SubProg db_select pc: 97 op: NOP1 (159)
L4: // addr: 98 pc: 97 sub: 17236 op: 159
    // SubProg db_select pc: 98 op: STARTLINE (58)

    /** eds.e:1386			index = db_open(path, lock_method)*/
    // SubProg db_select pc: 100 op: PROC (27)
    RefDS(_path_17238);
    _index_17240 = _44db_open(_path_17238, _lock_method_17239);
    // SubProg db_select pc: 105 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_17240)) {
        _1 = (object)(DBL_PTR(_index_17240)->dbl);
        DeRefDS(_index_17240);
        _index_17240 = _1;
    }
    // SubProg db_select pc: 107 op: STARTLINE (58)

    /** eds.e:1387			if index != DB_OK then*/
    // SubProg db_select pc: 109 op: NOTEQ_IFW_I (122)
    if (_index_17240 == 0)
    goto L5; // [109] 120
    // SubProg db_select pc: 113 op: STARTLINE (58)

    /** eds.e:1388				return index*/
    // SubProg db_select pc: 115 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_17238
    DeRefDS(_path_17238);

// block var lock_method_17239
    return _index_17240;
    // SubProg db_select pc: 119 op: NOP1 (159)
L5: // addr: 120 pc: 119 sub: 17236 op: 159
    // SubProg db_select pc: 120 op: STARTLINE (58)

    /** eds.e:1390			index = eu:find(path, db_names)*/
    // SubProg db_select pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 124 op: FIND_FROM (176)
    _index_17240 = find_from(_path_17238, _44db_names_16091, 1);
    // SubProg db_select pc: 129 op: NOP1 (159)
L3: // addr: 130 pc: 129 sub: 17236 op: 159
    // SubProg db_select pc: 130 op: STARTLINE (58)

    /** eds.e:1392		save_keys()*/
    // SubProg db_select pc: 132 op: PROC (27)
    _44save_keys();
    // SubProg db_select pc: 134 op: STARTLINE (58)

    /** eds.e:1393		current_db = db_file_nums[index]*/
    // SubProg db_select pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 138 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_44db_file_nums_16092);
    _44current_db_16088 = (object)*(((s1_ptr)_2)->base + _index_17240);
    if (!IS_ATOM_INT(_44current_db_16088))
    _44current_db_16088 = (object)DBL_PTR(_44current_db_16088)->dbl;
    // SubProg db_select pc: 142 op: STARTLINE (58)

    /** eds.e:1394		current_lock = db_lock_methods[index]*/
    // SubProg db_select pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 146 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_44db_lock_methods_16093);
    _44current_lock_16094 = (object)*(((s1_ptr)_2)->base + _index_17240);
    if (!IS_ATOM_INT(_44current_lock_16094))
    _44current_lock_16094 = (object)DBL_PTR(_44current_lock_16094)->dbl;
    // SubProg db_select pc: 150 op: STARTLINE (58)

    /** eds.e:1395		current_table_pos = -1*/
    // SubProg db_select pc: 152 op: ASSIGN (18)
    DeRef(_44current_table_pos_16089);
    _44current_table_pos_16089 = -1;
    // SubProg db_select pc: 155 op: STARTLINE (58)

    /** eds.e:1396		current_table_name = ""*/
    // SubProg db_select pc: 157 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16090);
    _44current_table_name_16090 = _5;
    // SubProg db_select pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 162 op: STARTLINE (58)

    /** eds.e:1397		key_pointers = {}*/
    // SubProg db_select pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44key_pointers_16095);
    _44key_pointers_16095 = _5;
    // SubProg db_select pc: 167 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 169 op: STARTLINE (58)

    /** eds.e:1398		return DB_OK*/
    // SubProg db_select pc: 171 op: RETURNF (28)

// Exiting block BLOCK: db_select

// block var path_17238
    DeRefDS(_path_17238);

// block var lock_method_17239

// block var index_17240
    return 0;
    // SubProg db_select pc: 175 op: BADRETURNF (43)
    ;
}


void _44db_close()
{
    object _unlock_file_1__tmp_at25_17269 = NOVALUE;
    object _index_17264 = NOVALUE;
// skipping _9546  name type: 0
// skipping _9545  name type: 0
// skipping _9544  name type: 0
    object _9543 = NOVALUE; // 17279 9543
    object _9542 = NOVALUE; // 17278 9542
    object _9541 = NOVALUE; // 17276 9541
// skipping _9540  name type: 0
// skipping _9539  name type: 0
// skipping _9538  name type: 0
// skipping _9537  name type: 0
// skipping _9536  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_close pc: 1 op: STARTLINE (58)

    /** eds.e:1413		if current_db = -1 then*/
    // SubProg db_close pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 5 op: EQUALS_IFW_I (121)
    if (_44current_db_16088 != -1)
    goto L1; // [5] 15
    // SubProg db_close pc: 9 op: STARTLINE (58)

    /** eds.e:1414			return*/
    // SubProg db_close pc: 11 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_close

// block var index_17264
    return;
    // SubProg db_close pc: 14 op: NOP1 (159)
L1: // addr: 15 pc: 14 sub: 17262 op: 159
    // SubProg db_close pc: 15 op: STARTLINE (58)

    /** eds.e:1417		if current_lock then*/
    // SubProg db_close pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 19 op: IF (20)
    if (_44current_lock_16094 == 0)
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
    DeRef(_unlock_file_1__tmp_at25_17269);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _5;
    _unlock_file_1__tmp_at25_17269 = MAKE_SEQ(_1);
    // SubProg db_close pc: 32 op: MACHINE_PROC (112)
    machine(62, _unlock_file_1__tmp_at25_17269);
    // SubProg db_close pc: 35 op: STARTLINE (58)

    /** io.e:1087	end procedure*/
    // SubProg db_close pc: 37 op: ELSE (23)
    goto L3; // [37] 40
    // SubProg db_close pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 17262 op: 159
    // SubProg db_close pc: 40 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-unlock_file from db_close @ 25

// block var unlock_file_1__tmp_at25_17269
    DeRef(_unlock_file_1__tmp_at25_17269);
    _unlock_file_1__tmp_at25_17269 = NOVALUE;
    // SubProg db_close pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 17262 op: 159
    // SubProg db_close pc: 43 op: STARTLINE (58)

    /** eds.e:1420		close(current_db)*/
    // SubProg db_close pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 47 op: CLOSE (86)
    EClose(_44current_db_16088);
    // SubProg db_close pc: 49 op: STARTLINE (58)

    /** eds.e:1422		index = eu:find(current_db, db_file_nums)*/
    // SubProg db_close pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 55 op: FIND_FROM (176)
    _index_17264 = find_from(_44current_db_16088, _44db_file_nums_16092, 1);
    // SubProg db_close pc: 60 op: STARTLINE (58)

    /** eds.e:1423		db_names = remove(db_names, index)*/
    // SubProg db_close pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 64 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_names_16091);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        int stop = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_44db_names_16091), start, &_44db_names_16091 );
            }
            else Tail(SEQ_PTR(_44db_names_16091), stop+1, &_44db_names_16091);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_names_16091), start, &_44db_names_16091);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_names_16091 = Remove_elements(start, stop, (SEQ_PTR(_44db_names_16091)->ref == 1));
        }
    }
    // SubProg db_close pc: 69 op: STARTLINE (58)

    /** eds.e:1424		db_file_nums = remove(db_file_nums, index)*/
    // SubProg db_close pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 73 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_file_nums_16092);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        int stop = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_44db_file_nums_16092), start, &_44db_file_nums_16092 );
            }
            else Tail(SEQ_PTR(_44db_file_nums_16092), stop+1, &_44db_file_nums_16092);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_file_nums_16092), start, &_44db_file_nums_16092);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_file_nums_16092 = Remove_elements(start, stop, (SEQ_PTR(_44db_file_nums_16092)->ref == 1));
        }
    }
    // SubProg db_close pc: 78 op: STARTLINE (58)

    /** eds.e:1425		db_lock_methods = remove(db_lock_methods, index)*/
    // SubProg db_close pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 82 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_lock_methods_16093);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        int stop = (IS_ATOM_INT(_index_17264)) ? _index_17264 : (object)(DBL_PTR(_index_17264)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_44db_lock_methods_16093), start, &_44db_lock_methods_16093 );
            }
            else Tail(SEQ_PTR(_44db_lock_methods_16093), stop+1, &_44db_lock_methods_16093);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_lock_methods_16093), start, &_44db_lock_methods_16093);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_lock_methods_16093 = Remove_elements(start, stop, (SEQ_PTR(_44db_lock_methods_16093)->ref == 1));
        }
    }
    // SubProg db_close pc: 87 op: STARTLINE (58)

    /** eds.e:1427		for i = length(cache_index) to 1 by -1 do*/
    // SubProg db_close pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_44cache_index_16097)){
            _9541 = SEQ_PTR(_44cache_index_16097)->length;
    }
    else {
        _9541 = 1;
    }
    // SubProg db_close pc: 94 op: FOR_I (125)
    {
        object _i_17275;
        _i_17275 = _9541;
L4: // addr: 101 pc: 94 sub: 17262 op: 125
        if (_i_17275 < 1){
            goto L5; // [94] 145
        }
        // SubProg db_close pc: 101 op: STARTLINE (58)

        /** eds.e:1428			if cache_index[i][1] = current_db then*/
        // SubProg db_close pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_44cache_index_16097);
        _9542 = (object)*(((s1_ptr)_2)->base + _i_17275);
        // SubProg db_close pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_9542);
        _9543 = (object)*(((s1_ptr)_2)->base + 1);
        _9542 = NOVALUE;
        // SubProg db_close pc: 113 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 115 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _9543, _44current_db_16088)){
            _9543 = NOVALUE;
            goto L6; // [115] 138
        }
        _9543 = NOVALUE;
        // SubProg db_close pc: 119 op: STARTLINE (58)

        /** eds.e:1429				cache_index = remove(cache_index, i)*/
        // SubProg db_close pc: 121 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 123 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_44cache_index_16097);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_17275)) ? _i_17275 : (object)(DBL_PTR(_i_17275)->dbl);
            int stop = (IS_ATOM_INT(_i_17275)) ? _i_17275 : (object)(DBL_PTR(_i_17275)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_44cache_index_16097), start, &_44cache_index_16097 );
                }
                else Tail(SEQ_PTR(_44cache_index_16097), stop+1, &_44cache_index_16097);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_44cache_index_16097), start, &_44cache_index_16097);
            }
            else {
                assign_slice_seq = &assign_space;
                _44cache_index_16097 = Remove_elements(start, stop, (SEQ_PTR(_44cache_index_16097)->ref == 1));
            }
        }
        // SubProg db_close pc: 128 op: STARTLINE (58)

        /** eds.e:1430				key_cache = remove(key_cache, i)*/
        // SubProg db_close pc: 130 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 132 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_44key_cache_16096);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_17275)) ? _i_17275 : (object)(DBL_PTR(_i_17275)->dbl);
            int stop = (IS_ATOM_INT(_i_17275)) ? _i_17275 : (object)(DBL_PTR(_i_17275)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_44key_cache_16096), start, &_44key_cache_16096 );
                }
                else Tail(SEQ_PTR(_44key_cache_16096), stop+1, &_44key_cache_16096);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_44key_cache_16096), start, &_44key_cache_16096);
            }
            else {
                assign_slice_seq = &assign_space;
                _44key_cache_16096 = Remove_elements(start, stop, (SEQ_PTR(_44key_cache_16096)->ref == 1));
            }
        }
        // SubProg db_close pc: 137 op: NOP1 (159)
L6: // addr: 138 pc: 137 sub: 17262 op: 159
        // SubProg db_close pc: 138 op: STARTLINE (58)

        /** eds.e:1432		end for*/
        // SubProg db_close pc: 140 op: ENDFOR_GENERAL (39)
        _i_17275 = _i_17275 + -1;
        goto L4; // [140] 101
L5: // addr: 145 pc: 140 sub: 17262 op: 39
        ;
    }
    // SubProg db_close pc: 145 op: STARTLINE (58)

    /** eds.e:1433		current_table_pos = -1*/
    // SubProg db_close pc: 147 op: ASSIGN (18)
    DeRef(_44current_table_pos_16089);
    _44current_table_pos_16089 = -1;
    // SubProg db_close pc: 150 op: STARTLINE (58)

    /** eds.e:1434		current_table_name = ""	*/
    // SubProg db_close pc: 152 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16090);
    _44current_table_name_16090 = _5;
    // SubProg db_close pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg db_close pc: 157 op: STARTLINE (58)

    /** eds.e:1435		current_db = -1*/
    // SubProg db_close pc: 159 op: ASSIGN_I (113)
    _44current_db_16088 = -1;
    // SubProg db_close pc: 162 op: STARTLINE (58)

    /** eds.e:1436		key_pointers = {}*/
    // SubProg db_close pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44key_pointers_16095);
    _44key_pointers_16095 = _5;
    // SubProg db_close pc: 167 op: SEQUENCE_CHECK (97)
    // SubProg db_close pc: 169 op: STARTLINE (58)

    /** eds.e:1437	end procedure*/
    // SubProg db_close pc: 171 op: RETURNP (29)

// Exiting block BLOCK: db_close

// block var index_17264
    return;
    // SubProg db_close pc: 174 op: BADRETURNF (43)
    ;
}


object _44table_find(object _name_17285)
{
    object _tables_17286 = NOVALUE;
    object _nt_17287 = NOVALUE;
    object _t_header_17288 = NOVALUE;
    object _name_ptr_17289 = NOVALUE;
    object _seek_1__tmp_at6_17292 = NOVALUE;
    object _seek_inlined_seek_at_6_17291 = NOVALUE;
    object _seek_1__tmp_at44_17299 = NOVALUE;
    object _seek_inlined_seek_at_44_17298 = NOVALUE;
    object _seek_1__tmp_at84_17307 = NOVALUE;
    object _seek_inlined_seek_at_84_17306 = NOVALUE;
    object _seek_1__tmp_at106_17311 = NOVALUE;
    object _seek_inlined_seek_at_106_17310 = NOVALUE;
// skipping _9556  name type: 0
// skipping _9555  name type: 0
    object _9554 = NOVALUE; // 17313 9554
// skipping _9553  name type: 0
    object _9552 = NOVALUE; // 17304 9552
// skipping _9551  name type: 0
// skipping _9550  name type: 0
// skipping _9549  name type: 0
// skipping _9548  name type: 0
    object _9547 = NOVALUE; // 17294 9547
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg table_find pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg table_find pc: 3 op: STARTLINE (58)

    /** eds.e:1446		io:seek(current_db, TABLE_HEADERS)*/
    // SubProg table_find pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 7 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg table_find pc: 9 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at6_17292);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at6_17292 = MAKE_SEQ(_1);
    // SubProg table_find pc: 13 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_6_17291 = machine(19, _seek_1__tmp_at6_17292);
    // SubProg table_find pc: 17 op: NOP1 (159)
    // SubProg table_find pc: 18 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 6

// block var seek_1__tmp_at6_17292
    DeRefi(_seek_1__tmp_at6_17292);
    _seek_1__tmp_at6_17292 = NOVALUE;
    // SubProg table_find pc: 20 op: STARTLINE (58)

    /** eds.e:1447		if length(vLastErrors) > 0 then return -1 end if*/
    // SubProg table_find pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 24 op: LENGTH (42)
    if (IS_SEQUENCE(_44vLastErrors_16112)){
            _9547 = SEQ_PTR(_44vLastErrors_16112)->length;
    }
    else {
        _9547 = 1;
    }
    // SubProg table_find pc: 27 op: GREATER_IFW_I (124)
    if (_9547 <= 0)
    goto L1; // [27] 36
    // SubProg table_find pc: 31 op: RETURNF (28)

// Exiting block BLOCK: table_find

// block var name_17285
    DeRefDS(_name_17285);

// block var tables_17286
    DeRef(_tables_17286);

// block var nt_17287
    DeRef(_nt_17287);

// block var t_header_17288
    DeRef(_t_header_17288);

// block var name_ptr_17289
    DeRef(_name_ptr_17289);
    return -1;
    // SubProg table_find pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 17283 op: 159
    // SubProg table_find pc: 36 op: STARTLINE (58)

    /** eds.e:1448		tables = get4()*/
    // SubProg table_find pc: 38 op: PROC (27)
    _0 = _tables_17286;
    _tables_17286 = _44get4();
    DeRef(_0);
    // SubProg table_find pc: 41 op: STARTLINE (58)

    /** eds.e:1449		io:seek(current_db, tables)*/
    // SubProg table_find pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg table_find pc: 45 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg table_find pc: 47 op: RIGHT_BRACE_2 (85)
    Ref(_tables_17286);
    DeRef(_seek_1__tmp_at44_17299);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _tables_17286;
    _seek_1__tmp_at44_17299 = MAKE_SEQ(_1);
    // SubProg table_find pc: 51 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_44_17298 = machine(19, _seek_1__tmp_at44_17299);
    // SubProg table_find pc: 55 op: NOP1 (159)
    // SubProg table_find pc: 56 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 44

// block var seek_1__tmp_at44_17299
    DeRef(_seek_1__tmp_at44_17299);
    _seek_1__tmp_at44_17299 = NOVALUE;
    // SubProg table_find pc: 58 op: STARTLINE (58)

    /** eds.e:1450		nt = get4()*/
    // SubProg table_find pc: 60 op: PROC (27)
    _0 = _nt_17287;
    _nt_17287 = _44get4();
    DeRef(_0);
    // SubProg table_find pc: 63 op: STARTLINE (58)

    /** eds.e:1451		t_header = tables+4*/
    // SubProg table_find pc: 65 op: PLUS (11)
    DeRef(_t_header_17288);
    if (IS_ATOM_INT(_tables_17286)) {
        _t_header_17288 = _tables_17286 + 4;
        if ((object)((uintptr_t)_t_header_17288 + (uintptr_t)HIGH_BITS) >= 0){
            _t_header_17288 = NewDouble((eudouble)_t_header_17288);
        }
    }
    else {
        _t_header_17288 = NewDouble(DBL_PTR(_tables_17286)->dbl + (eudouble)4);
    }
    // SubProg table_find pc: 69 op: STARTLINE (58)

    /** eds.e:1452		for i = 1 to nt do*/
    // SubProg table_find pc: 71 op: ASSIGN (18)
    Ref(_nt_17287);
    DeRef(_9552);
    _9552 = _nt_17287;
    // SubProg table_find pc: 74 op: FOR (21)
    {
        object _i_17303;
        _i_17303 = 1;
L2: // addr: 81 pc: 74 sub: 17283 op: 21
        if (binary_op_a(GREATER, _i_17303, _9552)){
            goto L3; // [74] 150
        }
        // SubProg table_find pc: 81 op: STARTLINE (58)

        /** eds.e:1453			io:seek(current_db, t_header)*/
        // SubProg table_find pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg table_find pc: 85 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg table_find pc: 87 op: RIGHT_BRACE_2 (85)
        Ref(_t_header_17288);
        DeRef(_seek_1__tmp_at84_17307);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _t_header_17288;
        _seek_1__tmp_at84_17307 = MAKE_SEQ(_1);
        // SubProg table_find pc: 91 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_84_17306 = machine(19, _seek_1__tmp_at84_17307);
        // SubProg table_find pc: 95 op: NOP1 (159)
        // SubProg table_find pc: 96 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 84

// block var seek_1__tmp_at84_17307
        DeRef(_seek_1__tmp_at84_17307);
        _seek_1__tmp_at84_17307 = NOVALUE;
        // SubProg table_find pc: 98 op: STARTLINE (58)

        /** eds.e:1454			name_ptr = get4()*/
        // SubProg table_find pc: 100 op: PROC (27)
        _0 = _name_ptr_17289;
        _name_ptr_17289 = _44get4();
        DeRef(_0);
        // SubProg table_find pc: 103 op: STARTLINE (58)

        /** eds.e:1455			io:seek(current_db, name_ptr)*/
        // SubProg table_find pc: 105 op: GLOBAL_INIT_CHECK (109)
        // SubProg table_find pc: 107 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg table_find pc: 109 op: RIGHT_BRACE_2 (85)
        Ref(_name_ptr_17289);
        DeRef(_seek_1__tmp_at106_17311);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _name_ptr_17289;
        _seek_1__tmp_at106_17311 = MAKE_SEQ(_1);
        // SubProg table_find pc: 113 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_106_17310 = machine(19, _seek_1__tmp_at106_17311);
        // SubProg table_find pc: 117 op: NOP1 (159)
        // SubProg table_find pc: 118 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from table_find @ 106

// block var seek_1__tmp_at106_17311
        DeRef(_seek_1__tmp_at106_17311);
        _seek_1__tmp_at106_17311 = NOVALUE;
        // SubProg table_find pc: 120 op: STARTLINE (58)

        /** eds.e:1456			if equal_string(name) > 0 then*/
        // SubProg table_find pc: 122 op: PROC (27)
        RefDS(_name_17285);
        _9554 = _44equal_string(_name_17285);
        // SubProg table_find pc: 126 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _9554, 0)){
            DeRef(_9554);
            _9554 = NOVALUE;
            goto L4; // [126] 137
        }
        DeRef(_9554);
        _9554 = NOVALUE;
        // SubProg table_find pc: 130 op: STARTLINE (58)

        /** eds.e:1458				return t_header*/
        // SubProg table_find pc: 132 op: RETURNF (28)
        DeRef(_i_17303);

// Exiting block BLOCK: table_find

// block var name_17285
        DeRefDS(_name_17285);

// block var tables_17286
        DeRef(_tables_17286);

// block var nt_17287
        DeRef(_nt_17287);

// block var name_ptr_17289
        DeRef(_name_ptr_17289);
        return _t_header_17288;
        // SubProg table_find pc: 136 op: NOP1 (159)
L4: // addr: 137 pc: 136 sub: 17283 op: 159
        // SubProg table_find pc: 137 op: STARTLINE (58)

        /** eds.e:1460			t_header += SIZEOF_TABLE_HEADER*/
        // SubProg table_find pc: 139 op: PLUS (11)
        _0 = _t_header_17288;
        if (IS_ATOM_INT(_t_header_17288)) {
            _t_header_17288 = _t_header_17288 + 16;
            if ((object)((uintptr_t)_t_header_17288 + (uintptr_t)HIGH_BITS) >= 0){
                _t_header_17288 = NewDouble((eudouble)_t_header_17288);
            }
        }
        else {
            _t_header_17288 = NewDouble(DBL_PTR(_t_header_17288)->dbl + (eudouble)16);
        }
        DeRef(_0);
        // SubProg table_find pc: 143 op: STARTLINE (58)

        /** eds.e:1461		end for*/
        // SubProg table_find pc: 145 op: ENDFOR_INT_UP1 (54)
        _0 = _i_17303;
        if (IS_ATOM_INT(_i_17303)) {
            _i_17303 = _i_17303 + 1;
            if ((object)((uintptr_t)_i_17303 +(uintptr_t) HIGH_BITS) >= 0){
                _i_17303 = NewDouble((eudouble)_i_17303);
            }
        }
        else {
            _i_17303 = binary_op_a(PLUS, _i_17303, 1);
        }
        DeRef(_0);
        goto L2; // [145] 81
L3: // addr: 150 pc: 145 sub: 17283 op: 54
        ;
        DeRef(_i_17303);
    }
    // SubProg table_find pc: 150 op: STARTLINE (58)

    /** eds.e:1462		return -1*/
    // SubProg table_find pc: 152 op: RETURNF (28)

// Exiting block BLOCK: table_find

// block var name_17285
    DeRefDS(_name_17285);

// block var tables_17286
    DeRef(_tables_17286);

// block var nt_17287
    DeRef(_nt_17287);

// block var t_header_17288
    DeRef(_t_header_17288);

// block var name_ptr_17289
    DeRef(_name_ptr_17289);
    return -1;
    // SubProg table_find pc: 156 op: BADRETURNF (43)
    ;
}


object _44db_select_table(object _name_17318)
{
    object _table_17319 = NOVALUE;
    object _nkeys_17320 = NOVALUE;
    object _index_17321 = NOVALUE;
    object _block_ptr_17322 = NOVALUE;
    object _block_size_17323 = NOVALUE;
    object _blocks_17324 = NOVALUE;
    object _k_17325 = NOVALUE;
    object _seek_1__tmp_at120_17344 = NOVALUE;
    object _seek_inlined_seek_at_120_17343 = NOVALUE;
    object _pos_inlined_seek_at_117_17342 = NOVALUE;
    object _seek_1__tmp_at178_17354 = NOVALUE;
    object _seek_inlined_seek_at_178_17353 = NOVALUE;
    object _seek_1__tmp_at205_17359 = NOVALUE;
    object _seek_inlined_seek_at_205_17358 = NOVALUE;
// skipping _9577  name type: 0
// skipping _9576  name type: 0
    object _9575 = NOVALUE; // 17363 9575
    object _9574 = NOVALUE; // 17362 9574
// skipping _9573  name type: 0
// skipping _9572  name type: 0
    object _9571 = NOVALUE; // 17351 9571
// skipping _9570  name type: 0
// skipping _9569  name type: 0
// skipping _9568  name type: 0
// skipping _9567  name type: 0
    object _9566 = NOVALUE; // 17340 9566
// skipping _9565  name type: 0
// skipping _9564  name type: 0
// skipping _9563  name type: 0
// skipping _9562  name type: 0
    object _9561 = NOVALUE; // 17333 9561
// skipping _9560  name type: 0
// skipping _9559  name type: 0
// skipping _9558  name type: 0
    object _9557 = NOVALUE; // 17327 9557
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select_table pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 3 op: STARTLINE (58)

    /** eds.e:1501		if equal(current_table_name, name) then*/
    // SubProg db_select_table pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 7 op: EQUAL (153)
    if (_44current_table_name_16090 == _name_17318)
    _9557 = 1;
    else if (IS_ATOM_INT(_44current_table_name_16090) && IS_ATOM_INT(_name_17318))
    _9557 = 0;
    else
    _9557 = (compare(_44current_table_name_16090, _name_17318) == 0);
    // SubProg db_select_table pc: 11 op: IF (20)
    if (_9557 == 0)
    {
        _9557 = NOVALUE;
        goto L1; // [11] 21
    }
    else{
        _9557 = NOVALUE;
    }
    // SubProg db_select_table pc: 14 op: STARTLINE (58)

    /** eds.e:1502			return DB_OK*/
    // SubProg db_select_table pc: 16 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_17318
    DeRefDS(_name_17318);

// block var table_17319
    DeRef(_table_17319);

// block var nkeys_17320
    DeRef(_nkeys_17320);

// block var index_17321
    DeRef(_index_17321);

// block var block_ptr_17322
    DeRef(_block_ptr_17322);

// block var block_size_17323
    DeRef(_block_size_17323);

// block var blocks_17324

// block var k_17325
    return 0;
    // SubProg db_select_table pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 17316 op: 159
    // SubProg db_select_table pc: 21 op: STARTLINE (58)

    /** eds.e:1504		table = table_find(name)*/
    // SubProg db_select_table pc: 23 op: PROC (27)
    RefDS(_name_17318);
    _0 = _table_17319;
    _table_17319 = _44table_find(_name_17318);
    DeRef(_0);
    // SubProg db_select_table pc: 27 op: STARTLINE (58)

    /** eds.e:1505		if table = -1 then*/
    // SubProg db_select_table pc: 29 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _table_17319, -1)){
        goto L2; // [29] 40
    }
    // SubProg db_select_table pc: 33 op: STARTLINE (58)

    /** eds.e:1506			return DB_OPEN_FAIL*/
    // SubProg db_select_table pc: 35 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_17318
    DeRefDS(_name_17318);

// block var table_17319
    DeRef(_table_17319);

// block var nkeys_17320
    DeRef(_nkeys_17320);

// block var index_17321
    DeRef(_index_17321);

// block var block_ptr_17322
    DeRef(_block_ptr_17322);

// block var block_size_17323
    DeRef(_block_size_17323);

// block var blocks_17324

// block var k_17325
    return -1;
    // SubProg db_select_table pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 17316 op: 159
    // SubProg db_select_table pc: 40 op: STARTLINE (58)

    /** eds.e:1509		save_keys()*/
    // SubProg db_select_table pc: 42 op: PROC (27)
    _44save_keys();
    // SubProg db_select_table pc: 44 op: STARTLINE (58)

    /** eds.e:1511		current_table_pos = table*/
    // SubProg db_select_table pc: 46 op: ASSIGN (18)
    Ref(_table_17319);
    DeRef(_44current_table_pos_16089);
    _44current_table_pos_16089 = _table_17319;
    // SubProg db_select_table pc: 49 op: STARTLINE (58)

    /** eds.e:1512		current_table_name = name*/
    // SubProg db_select_table pc: 51 op: ASSIGN (18)
    RefDS(_name_17318);
    DeRef(_44current_table_name_16090);
    _44current_table_name_16090 = _name_17318;
    // SubProg db_select_table pc: 54 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 56 op: STARTLINE (58)

    /** eds.e:1514		k = 0*/
    // SubProg db_select_table pc: 58 op: ASSIGN_I (113)
    _k_17325 = 0;
    // SubProg db_select_table pc: 61 op: STARTLINE (58)

    /** eds.e:1515		if caching_option = 1 then*/
    // SubProg db_select_table pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 65 op: EQUALS_IFW_I (121)
    // SubProg db_select_table pc: 69 op: STARTLINE (58)

    /** eds.e:1516			k = eu:find({current_db, current_table_pos}, cache_index)*/
    // SubProg db_select_table pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 75 op: RIGHT_BRACE_2 (85)
    Ref(_44current_table_pos_16089);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _44current_table_pos_16089;
    _9561 = MAKE_SEQ(_1);
    // SubProg db_select_table pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 81 op: FIND_FROM (176)
    _k_17325 = find_from(_9561, _44cache_index_16097, 1);
    DeRefDS(_9561);
    _9561 = NOVALUE;
    // SubProg db_select_table pc: 86 op: STARTLINE (58)

    /** eds.e:1517			if k != 0 then*/
    // SubProg db_select_table pc: 88 op: NOTEQ_IFW_I (122)
    if (_k_17325 == 0)
    goto L3; // [88] 103
    // SubProg db_select_table pc: 92 op: STARTLINE (58)

    /** eds.e:1518				key_pointers = key_cache[k]*/
    // SubProg db_select_table pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 96 op: RHS_SUBS (25)
    DeRef(_44key_pointers_16095);
    _2 = (object)SEQ_PTR(_44key_cache_16096);
    _44key_pointers_16095 = (object)*(((s1_ptr)_2)->base + _k_17325);
    Ref(_44key_pointers_16095);
    // SubProg db_select_table pc: 100 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 102 op: NOP1 (159)
L3: // addr: 103 pc: 102 sub: 17316 op: 159
    // SubProg db_select_table pc: 103 op: NOP1 (159)
    // SubProg db_select_table pc: 104 op: STARTLINE (58)

    /** eds.e:1521		if k = 0 then*/
    // SubProg db_select_table pc: 106 op: EQUALS_IFW_I (121)
    if (_k_17325 != 0)
    goto L4; // [106] 269
    // SubProg db_select_table pc: 110 op: STARTLINE (58)

    /** eds.e:1523			io:seek(current_db, table+4)*/
    // SubProg db_select_table pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 114 op: PLUS (11)
    if (IS_ATOM_INT(_table_17319)) {
        _9566 = _table_17319 + 4;
        if ((object)((uintptr_t)_9566 + (uintptr_t)HIGH_BITS) >= 0){
            _9566 = NewDouble((eudouble)_9566);
        }
    }
    else {
        _9566 = NewDouble(DBL_PTR(_table_17319)->dbl + (eudouble)4);
    }
    // SubProg db_select_table pc: 118 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_117_17342);
    _pos_inlined_seek_at_117_17342 = _9566;
    _9566 = NOVALUE;
    // SubProg db_select_table pc: 121 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_select_table pc: 123 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_117_17342);
    DeRef(_seek_1__tmp_at120_17344);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_117_17342;
    _seek_1__tmp_at120_17344 = MAKE_SEQ(_1);
    // SubProg db_select_table pc: 127 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_120_17343 = machine(19, _seek_1__tmp_at120_17344);
    // SubProg db_select_table pc: 131 op: NOP1 (159)
    // SubProg db_select_table pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 117

// block var pos_inlined_seek_at_117_17342
    DeRef(_pos_inlined_seek_at_117_17342);
    _pos_inlined_seek_at_117_17342 = NOVALUE;

// block var seek_1__tmp_at120_17344
    DeRef(_seek_1__tmp_at120_17344);
    _seek_1__tmp_at120_17344 = NOVALUE;
    // SubProg db_select_table pc: 134 op: STARTLINE (58)

    /** eds.e:1524			nkeys = get4()*/
    // SubProg db_select_table pc: 136 op: PROC (27)
    _0 = _nkeys_17320;
    _nkeys_17320 = _44get4();
    DeRef(_0);
    // SubProg db_select_table pc: 139 op: STARTLINE (58)

    /** eds.e:1525			blocks = get4()*/
    // SubProg db_select_table pc: 141 op: PROC (27)
    _blocks_17324 = _44get4();
    // SubProg db_select_table pc: 144 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_17324)) {
        _1 = (object)(DBL_PTR(_blocks_17324)->dbl);
        DeRefDS(_blocks_17324);
        _blocks_17324 = _1;
    }
    // SubProg db_select_table pc: 146 op: STARTLINE (58)

    /** eds.e:1526			index = get4()*/
    // SubProg db_select_table pc: 148 op: PROC (27)
    _0 = _index_17321;
    _index_17321 = _44get4();
    DeRef(_0);
    // SubProg db_select_table pc: 151 op: STARTLINE (58)

    /** eds.e:1527			key_pointers = repeat(0, nkeys)*/
    // SubProg db_select_table pc: 153 op: REPEAT (32)
    DeRef(_44key_pointers_16095);
    _44key_pointers_16095 = Repeat(0, _nkeys_17320);
    // SubProg db_select_table pc: 157 op: STARTLINE (58)

    /** eds.e:1528			k = 1*/
    // SubProg db_select_table pc: 159 op: ASSIGN_I (113)
    _k_17325 = 1;
    // SubProg db_select_table pc: 162 op: STARTLINE (58)

    /** eds.e:1529			for b = 0 to blocks-1 do*/
    // SubProg db_select_table pc: 164 op: MINUS (10)
    _9571 = _blocks_17324 - 1;
    if ((object)((uintptr_t)_9571 +(uintptr_t) HIGH_BITS) >= 0){
        _9571 = NewDouble((eudouble)_9571);
    }
    // SubProg db_select_table pc: 168 op: FOR (21)
    {
        object _b_17350;
        _b_17350 = 0;
L5: // addr: 175 pc: 168 sub: 17316 op: 21
        if (binary_op_a(GREATER, _b_17350, _9571)){
            goto L6; // [168] 268
        }
        // SubProg db_select_table pc: 175 op: STARTLINE (58)

        /** eds.e:1530				io:seek(current_db, index)*/
        // SubProg db_select_table pc: 177 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_select_table pc: 179 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_select_table pc: 181 op: RIGHT_BRACE_2 (85)
        Ref(_index_17321);
        DeRef(_seek_1__tmp_at178_17354);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _index_17321;
        _seek_1__tmp_at178_17354 = MAKE_SEQ(_1);
        // SubProg db_select_table pc: 185 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_178_17353 = machine(19, _seek_1__tmp_at178_17354);
        // SubProg db_select_table pc: 189 op: NOP1 (159)
        // SubProg db_select_table pc: 190 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 178

// block var seek_1__tmp_at178_17354
        DeRef(_seek_1__tmp_at178_17354);
        _seek_1__tmp_at178_17354 = NOVALUE;
        // SubProg db_select_table pc: 192 op: STARTLINE (58)

        /** eds.e:1531				block_size = get4()*/
        // SubProg db_select_table pc: 194 op: PROC (27)
        _0 = _block_size_17323;
        _block_size_17323 = _44get4();
        DeRef(_0);
        // SubProg db_select_table pc: 197 op: STARTLINE (58)

        /** eds.e:1532				block_ptr = get4()*/
        // SubProg db_select_table pc: 199 op: PROC (27)
        _0 = _block_ptr_17322;
        _block_ptr_17322 = _44get4();
        DeRef(_0);
        // SubProg db_select_table pc: 202 op: STARTLINE (58)

        /** eds.e:1533				io:seek(current_db, block_ptr)*/
        // SubProg db_select_table pc: 204 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_select_table pc: 206 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_select_table pc: 208 op: RIGHT_BRACE_2 (85)
        Ref(_block_ptr_17322);
        DeRef(_seek_1__tmp_at205_17359);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _block_ptr_17322;
        _seek_1__tmp_at205_17359 = MAKE_SEQ(_1);
        // SubProg db_select_table pc: 212 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_205_17358 = machine(19, _seek_1__tmp_at205_17359);
        // SubProg db_select_table pc: 216 op: NOP1 (159)
        // SubProg db_select_table pc: 217 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_select_table @ 205

// block var seek_1__tmp_at205_17359
        DeRef(_seek_1__tmp_at205_17359);
        _seek_1__tmp_at205_17359 = NOVALUE;
        // SubProg db_select_table pc: 219 op: STARTLINE (58)

        /** eds.e:1534				for j = 1 to block_size do*/
        // SubProg db_select_table pc: 221 op: ASSIGN (18)
        Ref(_block_size_17323);
        DeRef(_9574);
        _9574 = _block_size_17323;
        // SubProg db_select_table pc: 224 op: FOR (21)
        {
            object _j_17361;
            _j_17361 = 1;
L7: // addr: 231 pc: 224 sub: 17316 op: 21
            if (binary_op_a(GREATER, _j_17361, _9574)){
                goto L8; // [224] 255
            }
            // SubProg db_select_table pc: 231 op: STARTLINE (58)

            /** eds.e:1535					key_pointers[k] = get4()*/
            // SubProg db_select_table pc: 233 op: GLOBAL_INIT_CHECK (109)
            // SubProg db_select_table pc: 235 op: PROC (27)
            _9575 = _44get4();
            // SubProg db_select_table pc: 238 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_44key_pointers_16095);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _44key_pointers_16095 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _k_17325);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9575;
            if( _1 != _9575 ){
                DeRef(_1);
            }
            _9575 = NOVALUE;
            // SubProg db_select_table pc: 242 op: STARTLINE (58)

            /** eds.e:1536					k += 1*/
            // SubProg db_select_table pc: 244 op: PLUS1_I (117)
            _k_17325 = _k_17325 + 1;
            // SubProg db_select_table pc: 248 op: STARTLINE (58)

            /** eds.e:1537				end for*/
            // SubProg db_select_table pc: 250 op: ENDFOR_INT_UP1 (54)
            _0 = _j_17361;
            if (IS_ATOM_INT(_j_17361)) {
                _j_17361 = _j_17361 + 1;
                if ((object)((uintptr_t)_j_17361 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_17361 = NewDouble((eudouble)_j_17361);
                }
            }
            else {
                _j_17361 = binary_op_a(PLUS, _j_17361, 1);
            }
            DeRef(_0);
            goto L7; // [250] 231
L8: // addr: 255 pc: 250 sub: 17316 op: 54
            ;
            DeRef(_j_17361);
        }
        // SubProg db_select_table pc: 255 op: STARTLINE (58)

        /** eds.e:1538				index += 8*/
        // SubProg db_select_table pc: 257 op: PLUS (11)
        _0 = _index_17321;
        if (IS_ATOM_INT(_index_17321)) {
            _index_17321 = _index_17321 + 8;
            if ((object)((uintptr_t)_index_17321 + (uintptr_t)HIGH_BITS) >= 0){
                _index_17321 = NewDouble((eudouble)_index_17321);
            }
        }
        else {
            _index_17321 = NewDouble(DBL_PTR(_index_17321)->dbl + (eudouble)8);
        }
        DeRef(_0);
        // SubProg db_select_table pc: 261 op: STARTLINE (58)

        /** eds.e:1539			end for*/
        // SubProg db_select_table pc: 263 op: ENDFOR_INT_UP1 (54)
        _0 = _b_17350;
        if (IS_ATOM_INT(_b_17350)) {
            _b_17350 = _b_17350 + 1;
            if ((object)((uintptr_t)_b_17350 +(uintptr_t) HIGH_BITS) >= 0){
                _b_17350 = NewDouble((eudouble)_b_17350);
            }
        }
        else {
            _b_17350 = binary_op_a(PLUS, _b_17350, 1);
        }
        DeRef(_0);
        goto L5; // [263] 175
L6: // addr: 268 pc: 263 sub: 17316 op: 54
        ;
        DeRef(_b_17350);
    }
    // SubProg db_select_table pc: 268 op: NOP1 (159)
L4: // addr: 269 pc: 268 sub: 17316 op: 159
    // SubProg db_select_table pc: 269 op: STARTLINE (58)

    /** eds.e:1541		return DB_OK*/
    // SubProg db_select_table pc: 271 op: RETURNF (28)

// Exiting block BLOCK: db_select_table

// block var name_17318
    DeRefDS(_name_17318);

// block var table_17319
    DeRef(_table_17319);

// block var nkeys_17320
    DeRef(_nkeys_17320);

// block var index_17321
    DeRef(_index_17321);

// block var block_ptr_17322
    DeRef(_block_ptr_17322);

// block var block_size_17323
    DeRef(_block_size_17323);

// block var blocks_17324

// block var k_17325
    DeRef(_9571);
    _9571 = NOVALUE;
    return 0;
    // SubProg db_select_table pc: 275 op: BADRETURNF (43)
    ;
}


object _44db_create_table(object _name_17370, object _init_records_17371)
{
    object _name_ptr_17372 = NOVALUE;
    object _nt_17373 = NOVALUE;
    object _tables_17374 = NOVALUE;
    object _newtables_17375 = NOVALUE;
    object _table_17376 = NOVALUE;
    object _records_ptr_17377 = NOVALUE;
    object _size_17378 = NOVALUE;
    object _newsize_17379 = NOVALUE;
    object _index_ptr_17380 = NOVALUE;
    object _remaining_17381 = NOVALUE;
    object _init_index_17382 = NOVALUE;
    object _seek_1__tmp_at68_17396 = NOVALUE;
    object _seek_inlined_seek_at_68_17395 = NOVALUE;
    object _seek_1__tmp_at97_17402 = NOVALUE;
    object _seek_inlined_seek_at_97_17401 = NOVALUE;
    object _pos_inlined_seek_at_94_17400 = NOVALUE;
    object _put4_1__tmp_at159_17415 = NOVALUE;
    object _seek_1__tmp_at196_17420 = NOVALUE;
    object _seek_inlined_seek_at_196_17419 = NOVALUE;
    object _pos_inlined_seek_at_193_17418 = NOVALUE;
    object _seek_1__tmp_at239_17428 = NOVALUE;
    object _seek_inlined_seek_at_239_17427 = NOVALUE;
    object _pos_inlined_seek_at_236_17426 = NOVALUE;
    object _s_inlined_putn_at_288_17436 = NOVALUE;
    object _seek_1__tmp_at316_17439 = NOVALUE;
    object _seek_inlined_seek_at_316_17438 = NOVALUE;
    object _put4_1__tmp_at331_17441 = NOVALUE;
    object _seek_1__tmp_at369_17445 = NOVALUE;
    object _seek_inlined_seek_at_369_17444 = NOVALUE;
    object _put4_1__tmp_at384_17447 = NOVALUE;
    object _s_inlined_putn_at_431_17453 = NOVALUE;
    object _put4_1__tmp_at462_17457 = NOVALUE;
    object _put4_1__tmp_at490_17459 = NOVALUE;
    object _s_inlined_putn_at_530_17464 = NOVALUE;
    object _s_inlined_putn_at_568_17470 = NOVALUE;
    object _seek_1__tmp_at610_17478 = NOVALUE;
    object _seek_inlined_seek_at_610_17477 = NOVALUE;
    object _pos_inlined_seek_at_607_17476 = NOVALUE;
    object _put4_1__tmp_at625_17480 = NOVALUE;
    object _put4_1__tmp_at653_17482 = NOVALUE;
    object _put4_1__tmp_at681_17484 = NOVALUE;
    object _put4_1__tmp_at709_17486 = NOVALUE;
    object _9624 = NOVALUE; // 17488 9624
    object _9623 = NOVALUE; // 17474 9623
    object _9622 = NOVALUE; // 17473 9622
    object _9621 = NOVALUE; // 17472 9621
    object _9620 = NOVALUE; // 17471 9620
    object _9619 = NOVALUE; // 17468 9619
// skipping _9618  name type: 0
    object _9617 = NOVALUE; // 17466 9617
    object _9616 = NOVALUE; // 17465 9616
    object _9615 = NOVALUE; // 17462 9615
    object _9614 = NOVALUE; // 17461 9614
    object _9613 = NOVALUE; // 17460 9613
// skipping _9612  name type: 0
    object _9611 = NOVALUE; // 17454 9611
    object _9610 = NOVALUE; // 17451 9610
    object _9609 = NOVALUE; // 17450 9609
// skipping _9608  name type: 0
    object _9607 = NOVALUE; // 17448 9607
    object _9606 = NOVALUE; // 17434 9606
    object _9605 = NOVALUE; // 17433 9605
    object _9604 = NOVALUE; // 17432 9604
    object _9603 = NOVALUE; // 17431 9603
    object _9602 = NOVALUE; // 17430 9602
    object _9601 = NOVALUE; // 17424 9601
// skipping _9600  name type: 0
    object _9599 = NOVALUE; // 17422 9599
    object _9598 = NOVALUE; // 17421 9598
    object _9597 = NOVALUE; // 17416 9597
// skipping _9596  name type: 0
// skipping _9595  name type: 0
    object _9594 = NOVALUE; // 17411 9594
    object _9593 = NOVALUE; // 17410 9593
// skipping _9592  name type: 0
    object _9591 = NOVALUE; // 17408 9591
    object _9590 = NOVALUE; // 17407 9590
// skipping _9589  name type: 0
    object _9588 = NOVALUE; // 17404 9588
// skipping _9587  name type: 0
    object _9586 = NOVALUE; // 17398 9586
// skipping _9585  name type: 0
// skipping _9584  name type: 0
    object _9583 = NOVALUE; // 17392 9583
// skipping _9582  name type: 0
// skipping _9581  name type: 0
// skipping _9580  name type: 0
// skipping _9579  name type: 0
    object _9578 = NOVALUE; // 17385 9578
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_create_table pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_create_table pc: 5 op: STARTLINE (58)

    /** eds.e:1603		if not cstring(name) then*/
    // SubProg db_create_table pc: 7 op: PROC (27)
    RefDS(_name_17370);
    _9578 = _6cstring(_name_17370);
    // SubProg db_create_table pc: 11 op: NOT_IFW (108)
    if (IS_ATOM_INT(_9578)) {
        if (_9578 != 0){
            DeRef(_9578);
            _9578 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    else {
        if (DBL_PTR(_9578)->dbl != 0.0){
            DeRef(_9578);
            _9578 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    DeRef(_9578);
    _9578 = NOVALUE;
    // SubProg db_create_table pc: 14 op: STARTLINE (58)

    /** eds.e:1604			return DB_BAD_NAME*/
    // SubProg db_create_table pc: 16 op: RETURNF (28)

// Exiting block BLOCK: db_create_table

// block var name_17370
    DeRefDS(_name_17370);

// block var init_records_17371

// block var name_ptr_17372
    DeRef(_name_ptr_17372);

// block var nt_17373
    DeRef(_nt_17373);

// block var tables_17374
    DeRef(_tables_17374);

// block var newtables_17375
    DeRef(_newtables_17375);

// block var table_17376
    DeRef(_table_17376);

// block var records_ptr_17377
    DeRef(_records_ptr_17377);

// block var size_17378
    DeRef(_size_17378);

// block var newsize_17379
    DeRef(_newsize_17379);

// block var index_ptr_17380
    DeRef(_index_ptr_17380);

// block var remaining_17381
    DeRef(_remaining_17381);

// block var init_index_17382
    return -4;
    // SubProg db_create_table pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 17368 op: 159
    // SubProg db_create_table pc: 21 op: STARTLINE (58)

    /** eds.e:1607		table = table_find(name)*/
    // SubProg db_create_table pc: 23 op: PROC (27)
    RefDS(_name_17370);
    _0 = _table_17376;
    _table_17376 = _44table_find(_name_17370);
    DeRef(_0);
    // SubProg db_create_table pc: 27 op: STARTLINE (58)

    /** eds.e:1608		if table != -1 then*/
    // SubProg db_create_table pc: 29 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _table_17376, -1)){
        goto L2; // [29] 40
    }
    // SubProg db_create_table pc: 33 op: STARTLINE (58)

    /** eds.e:1609			return DB_EXISTS_ALREADY*/
    // SubProg db_create_table pc: 35 op: RETURNF (28)

// Exiting block BLOCK: db_create_table

// block var name_17370
    DeRefDS(_name_17370);

// block var init_records_17371

// block var name_ptr_17372
    DeRef(_name_ptr_17372);

// block var nt_17373
    DeRef(_nt_17373);

// block var tables_17374
    DeRef(_tables_17374);

// block var newtables_17375
    DeRef(_newtables_17375);

// block var table_17376
    DeRef(_table_17376);

// block var records_ptr_17377
    DeRef(_records_ptr_17377);

// block var size_17378
    DeRef(_size_17378);

// block var newsize_17379
    DeRef(_newsize_17379);

// block var index_ptr_17380
    DeRef(_index_ptr_17380);

// block var remaining_17381
    DeRef(_remaining_17381);

// block var init_index_17382
    return -2;
    // SubProg db_create_table pc: 39 op: NOP1 (159)
L2: // addr: 40 pc: 39 sub: 17368 op: 159
    // SubProg db_create_table pc: 40 op: STARTLINE (58)

    /** eds.e:1612		if init_records < 1 then*/
    // SubProg db_create_table pc: 42 op: LESS_IFW_I (119)
    if (_init_records_17371 >= 1)
    goto L3; // [42] 52
    // SubProg db_create_table pc: 46 op: STARTLINE (58)

    /** eds.e:1613			init_records = 1*/
    // SubProg db_create_table pc: 48 op: ASSIGN_I (113)
    _init_records_17371 = 1;
    // SubProg db_create_table pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 17368 op: 159
    // SubProg db_create_table pc: 52 op: STARTLINE (58)

    /** eds.e:1615		init_index = math:min({init_records, MAX_INDEX})*/
    // SubProg db_create_table pc: 54 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _init_records_17371;
    ((intptr_t *)_2)[2] = 10;
    _9583 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 58 op: PROC (27)
    _init_index_17382 = _13min(_9583);
    _9583 = NOVALUE;
    // SubProg db_create_table pc: 62 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_init_index_17382)) {
        _1 = (object)(DBL_PTR(_init_index_17382)->dbl);
        DeRefDS(_init_index_17382);
        _init_index_17382 = _1;
    }
    // SubProg db_create_table pc: 64 op: STARTLINE (58)

    /** eds.e:1618		io:seek(current_db, TABLE_HEADERS)*/
    // SubProg db_create_table pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 68 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 70 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at68_17396);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at68_17396 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 74 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_68_17395 = machine(19, _seek_1__tmp_at68_17396);
    // SubProg db_create_table pc: 78 op: NOP1 (159)
    // SubProg db_create_table pc: 79 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 68

// block var seek_1__tmp_at68_17396
    DeRefi(_seek_1__tmp_at68_17396);
    _seek_1__tmp_at68_17396 = NOVALUE;
    // SubProg db_create_table pc: 81 op: STARTLINE (58)

    /** eds.e:1619		tables = get4()*/
    // SubProg db_create_table pc: 83 op: PROC (27)
    _0 = _tables_17374;
    _tables_17374 = _44get4();
    DeRef(_0);
    // SubProg db_create_table pc: 86 op: STARTLINE (58)

    /** eds.e:1620		io:seek(current_db, tables-4)*/
    // SubProg db_create_table pc: 88 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 90 op: MINUS (10)
    if (IS_ATOM_INT(_tables_17374)) {
        _9586 = _tables_17374 - 4;
        if ((object)((uintptr_t)_9586 +(uintptr_t) HIGH_BITS) >= 0){
            _9586 = NewDouble((eudouble)_9586);
        }
    }
    else {
        _9586 = NewDouble(DBL_PTR(_tables_17374)->dbl - (eudouble)4);
    }
    // SubProg db_create_table pc: 94 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_94_17400);
    _pos_inlined_seek_at_94_17400 = _9586;
    _9586 = NOVALUE;
    // SubProg db_create_table pc: 97 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 99 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_94_17400);
    DeRef(_seek_1__tmp_at97_17402);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_94_17400;
    _seek_1__tmp_at97_17402 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 103 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_97_17401 = machine(19, _seek_1__tmp_at97_17402);
    // SubProg db_create_table pc: 107 op: NOP1 (159)
    // SubProg db_create_table pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 94

// block var pos_inlined_seek_at_94_17400
    DeRef(_pos_inlined_seek_at_94_17400);
    _pos_inlined_seek_at_94_17400 = NOVALUE;

// block var seek_1__tmp_at97_17402
    DeRef(_seek_1__tmp_at97_17402);
    _seek_1__tmp_at97_17402 = NOVALUE;
    // SubProg db_create_table pc: 110 op: STARTLINE (58)

    /** eds.e:1621		size = get4()*/
    // SubProg db_create_table pc: 112 op: PROC (27)
    _0 = _size_17378;
    _size_17378 = _44get4();
    DeRef(_0);
    // SubProg db_create_table pc: 115 op: STARTLINE (58)

    /** eds.e:1622		nt = get4()+1*/
    // SubProg db_create_table pc: 117 op: PROC (27)
    _9588 = _44get4();
    // SubProg db_create_table pc: 120 op: PLUS1 (93)
    DeRef(_nt_17373);
    if (IS_ATOM_INT(_9588)) {
        _nt_17373 = _9588 + 1;
        if (_nt_17373 > MAXINT){
            _nt_17373 = NewDouble((eudouble)_nt_17373);
        }
    }
    else
    _nt_17373 = binary_op(PLUS, 1, _9588);
    DeRef(_9588);
    _9588 = NOVALUE;
    // SubProg db_create_table pc: 124 op: STARTLINE (58)

    /** eds.e:1623		if nt*SIZEOF_TABLE_HEADER + 8 > size then*/
    // SubProg db_create_table pc: 126 op: MULTIPLY (13)
    if (IS_ATOM_INT(_nt_17373)) {
        if (_nt_17373 == (short)_nt_17373){
            _9590 = _nt_17373 * 16;
        }
        else{
            _9590 = NewDouble(_nt_17373 * (eudouble)16);
        }
    }
    else {
        _9590 = NewDouble(DBL_PTR(_nt_17373)->dbl * (eudouble)16);
    }
    // SubProg db_create_table pc: 130 op: PLUS (11)
    if (IS_ATOM_INT(_9590)) {
        _9591 = _9590 + 8;
        if ((object)((uintptr_t)_9591 + (uintptr_t)HIGH_BITS) >= 0){
            _9591 = NewDouble((eudouble)_9591);
        }
    }
    else {
        _9591 = NewDouble(DBL_PTR(_9590)->dbl + (eudouble)8);
    }
    DeRef(_9590);
    _9590 = NOVALUE;
    // SubProg db_create_table pc: 134 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9591, _size_17378)){
        DeRef(_9591);
        _9591 = NOVALUE;
        goto L4; // [134] 365
    }
    DeRef(_9591);
    _9591 = NOVALUE;
    // SubProg db_create_table pc: 138 op: STARTLINE (58)

    /** eds.e:1625			newsize = floor(size + size / 2)*/
    // SubProg db_create_table pc: 140 op: DIV2 (98)
    if (IS_ATOM_INT(_size_17378)) {
        if (_size_17378 & 1) {
            _9593 = NewDouble((_size_17378 >> 1) + 0.5);
        }
        else
        _9593 = _size_17378 >> 1;
    }
    else {
        _9593 = binary_op(DIVIDE, _size_17378, 2);
    }
    // SubProg db_create_table pc: 144 op: PLUS (11)
    if (IS_ATOM_INT(_size_17378) && IS_ATOM_INT(_9593)) {
        _9594 = _size_17378 + _9593;
        if ((object)((uintptr_t)_9594 + (uintptr_t)HIGH_BITS) >= 0){
            _9594 = NewDouble((eudouble)_9594);
        }
    }
    else {
        if (IS_ATOM_INT(_size_17378)) {
            _9594 = NewDouble((eudouble)_size_17378 + DBL_PTR(_9593)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9593)) {
                _9594 = NewDouble(DBL_PTR(_size_17378)->dbl + (eudouble)_9593);
            }
            else
            _9594 = NewDouble(DBL_PTR(_size_17378)->dbl + DBL_PTR(_9593)->dbl);
        }
    }
    DeRef(_9593);
    _9593 = NOVALUE;
    // SubProg db_create_table pc: 148 op: FLOOR (83)
    DeRef(_newsize_17379);
    if (IS_ATOM_INT(_9594))
    _newsize_17379 = e_floor(_9594);
    else
    _newsize_17379 = unary_op(FLOOR, _9594);
    DeRef(_9594);
    _9594 = NOVALUE;
    // SubProg db_create_table pc: 151 op: STARTLINE (58)

    /** eds.e:1626			newtables = db_allocate(newsize)*/
    // SubProg db_create_table pc: 153 op: PROC (27)
    Ref(_newsize_17379);
    _0 = _newtables_17375;
    _newtables_17375 = _44db_allocate(_newsize_17379);
    DeRef(_0);
    // SubProg db_create_table pc: 157 op: STARTLINE (58)

    /** eds.e:1627			put4(nt)*/
    // SubProg db_create_table pc: 159 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 163 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_nt_17373)) {
        *poke4_addr = (uint32_t)_nt_17373;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nt_17373)->dbl;
    }
    // SubProg db_create_table pc: 166 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 170 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 172 op: PEEK (127)
    DeRefi(_put4_1__tmp_at159_17415);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at159_17415 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 175 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at159_17415); // DJP 
    // SubProg db_create_table pc: 178 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 180 op: ELSE (23)
    goto L5; // [180] 183
    // SubProg db_create_table pc: 182 op: NOP1 (159)
L5: // addr: 183 pc: 182 sub: 17368 op: 159
    // SubProg db_create_table pc: 183 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 159

// block var put4_1__tmp_at159_17415
    DeRefi(_put4_1__tmp_at159_17415);
    _put4_1__tmp_at159_17415 = NOVALUE;
    // SubProg db_create_table pc: 185 op: STARTLINE (58)

    /** eds.e:1629			io:seek(current_db, tables+4)*/
    // SubProg db_create_table pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 189 op: PLUS (11)
    if (IS_ATOM_INT(_tables_17374)) {
        _9597 = _tables_17374 + 4;
        if ((object)((uintptr_t)_9597 + (uintptr_t)HIGH_BITS) >= 0){
            _9597 = NewDouble((eudouble)_9597);
        }
    }
    else {
        _9597 = NewDouble(DBL_PTR(_tables_17374)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 193 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_193_17418);
    _pos_inlined_seek_at_193_17418 = _9597;
    _9597 = NOVALUE;
    // SubProg db_create_table pc: 196 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 198 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_193_17418);
    DeRef(_seek_1__tmp_at196_17420);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_193_17418;
    _seek_1__tmp_at196_17420 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 202 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_196_17419 = machine(19, _seek_1__tmp_at196_17420);
    // SubProg db_create_table pc: 206 op: NOP1 (159)
    // SubProg db_create_table pc: 207 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 193

// block var pos_inlined_seek_at_193_17418
    DeRef(_pos_inlined_seek_at_193_17418);
    _pos_inlined_seek_at_193_17418 = NOVALUE;

// block var seek_1__tmp_at196_17420
    DeRef(_seek_1__tmp_at196_17420);
    _seek_1__tmp_at196_17420 = NOVALUE;
    // SubProg db_create_table pc: 209 op: STARTLINE (58)

    /** eds.e:1630			remaining = io:get_bytes(current_db, (nt-1)*SIZEOF_TABLE_HEADER)*/
    // SubProg db_create_table pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 213 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17373)) {
        _9598 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9598 +(uintptr_t) HIGH_BITS) >= 0){
            _9598 = NewDouble((eudouble)_9598);
        }
    }
    else {
        _9598 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 217 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9598)) {
        if (_9598 == (short)_9598){
            _9599 = _9598 * 16;
        }
        else{
            _9599 = NewDouble(_9598 * (eudouble)16);
        }
    }
    else {
        _9599 = NewDouble(DBL_PTR(_9598)->dbl * (eudouble)16);
    }
    DeRef(_9598);
    _9598 = NOVALUE;
    // SubProg db_create_table pc: 221 op: PROC (27)
    _0 = _remaining_17381;
    _remaining_17381 = _19get_bytes(_44current_db_16088, _9599);
    DeRef(_0);
    _9599 = NOVALUE;
    // SubProg db_create_table pc: 226 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 228 op: STARTLINE (58)

    /** eds.e:1631			io:seek(current_db, newtables+4)*/
    // SubProg db_create_table pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 232 op: PLUS (11)
    if (IS_ATOM_INT(_newtables_17375)) {
        _9601 = _newtables_17375 + 4;
        if ((object)((uintptr_t)_9601 + (uintptr_t)HIGH_BITS) >= 0){
            _9601 = NewDouble((eudouble)_9601);
        }
    }
    else {
        _9601 = NewDouble(DBL_PTR(_newtables_17375)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 236 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_236_17426);
    _pos_inlined_seek_at_236_17426 = _9601;
    _9601 = NOVALUE;
    // SubProg db_create_table pc: 239 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 241 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_236_17426);
    DeRef(_seek_1__tmp_at239_17428);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_236_17426;
    _seek_1__tmp_at239_17428 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 245 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_239_17427 = machine(19, _seek_1__tmp_at239_17428);
    // SubProg db_create_table pc: 249 op: NOP1 (159)
    // SubProg db_create_table pc: 250 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 236

// block var pos_inlined_seek_at_236_17426
    DeRef(_pos_inlined_seek_at_236_17426);
    _pos_inlined_seek_at_236_17426 = NOVALUE;

// block var seek_1__tmp_at239_17428
    DeRef(_seek_1__tmp_at239_17428);
    _seek_1__tmp_at239_17428 = NOVALUE;
    // SubProg db_create_table pc: 252 op: STARTLINE (58)

    /** eds.e:1632			putn(remaining)*/
    // SubProg db_create_table pc: 254 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 258 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_17381); // DJP 
    // SubProg db_create_table pc: 261 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create_table pc: 263 op: ELSE (23)
    goto L6; // [263] 266
    // SubProg db_create_table pc: 265 op: NOP1 (159)
L6: // addr: 266 pc: 265 sub: 17368 op: 159
    // SubProg db_create_table pc: 266 op: STARTLINE (58)

    /** eds.e:1634			putn(repeat(0, newsize - 4 - (nt-1)*SIZEOF_TABLE_HEADER))*/
    // SubProg db_create_table pc: 268 op: MINUS (10)
    if (IS_ATOM_INT(_newsize_17379)) {
        _9602 = _newsize_17379 - 4;
        if ((object)((uintptr_t)_9602 +(uintptr_t) HIGH_BITS) >= 0){
            _9602 = NewDouble((eudouble)_9602);
        }
    }
    else {
        _9602 = NewDouble(DBL_PTR(_newsize_17379)->dbl - (eudouble)4);
    }
    // SubProg db_create_table pc: 272 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17373)) {
        _9603 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9603 +(uintptr_t) HIGH_BITS) >= 0){
            _9603 = NewDouble((eudouble)_9603);
        }
    }
    else {
        _9603 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 276 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9603)) {
        if (_9603 == (short)_9603){
            _9604 = _9603 * 16;
        }
        else{
            _9604 = NewDouble(_9603 * (eudouble)16);
        }
    }
    else {
        _9604 = NewDouble(DBL_PTR(_9603)->dbl * (eudouble)16);
    }
    DeRef(_9603);
    _9603 = NOVALUE;
    // SubProg db_create_table pc: 280 op: MINUS (10)
    if (IS_ATOM_INT(_9602) && IS_ATOM_INT(_9604)) {
        _9605 = _9602 - _9604;
    }
    else {
        if (IS_ATOM_INT(_9602)) {
            _9605 = NewDouble((eudouble)_9602 - DBL_PTR(_9604)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9604)) {
                _9605 = NewDouble(DBL_PTR(_9602)->dbl - (eudouble)_9604);
            }
            else
            _9605 = NewDouble(DBL_PTR(_9602)->dbl - DBL_PTR(_9604)->dbl);
        }
    }
    DeRef(_9602);
    _9602 = NOVALUE;
    DeRef(_9604);
    _9604 = NOVALUE;
    // SubProg db_create_table pc: 284 op: REPEAT (32)
    _9606 = Repeat(0, _9605);
    DeRef(_9605);
    _9605 = NOVALUE;
    // SubProg db_create_table pc: 288 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_288_17436);
    _s_inlined_putn_at_288_17436 = _9606;
    _9606 = NOVALUE;
    // SubProg db_create_table pc: 291 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 293 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 297 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_288_17436); // DJP 
    // SubProg db_create_table pc: 300 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create_table pc: 302 op: ELSE (23)
    goto L7; // [302] 305
    // SubProg db_create_table pc: 304 op: NOP1 (159)
L7: // addr: 305 pc: 304 sub: 17368 op: 159
    // SubProg db_create_table pc: 305 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create_table @ 288

// block var s_inlined_putn_at_288_17436
    DeRefi(_s_inlined_putn_at_288_17436);
    _s_inlined_putn_at_288_17436 = NOVALUE;
    // SubProg db_create_table pc: 307 op: STARTLINE (58)

    /** eds.e:1635			db_free(tables)*/
    // SubProg db_create_table pc: 309 op: PROC (27)
    Ref(_tables_17374);
    _44db_free(_tables_17374);
    // SubProg db_create_table pc: 312 op: STARTLINE (58)

    /** eds.e:1636			io:seek(current_db, TABLE_HEADERS)*/
    // SubProg db_create_table pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 316 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 318 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at316_17439);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at316_17439 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 322 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_316_17438 = machine(19, _seek_1__tmp_at316_17439);
    // SubProg db_create_table pc: 326 op: NOP1 (159)
    // SubProg db_create_table pc: 327 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 316

// block var seek_1__tmp_at316_17439
    DeRefi(_seek_1__tmp_at316_17439);
    _seek_1__tmp_at316_17439 = NOVALUE;
    // SubProg db_create_table pc: 329 op: STARTLINE (58)

    /** eds.e:1637			put4(newtables)*/
    // SubProg db_create_table pc: 331 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 335 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_newtables_17375)) {
        *poke4_addr = (uint32_t)_newtables_17375;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_newtables_17375)->dbl;
    }
    // SubProg db_create_table pc: 338 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 342 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 344 op: PEEK (127)
    DeRefi(_put4_1__tmp_at331_17441);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at331_17441 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 347 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at331_17441); // DJP 
    // SubProg db_create_table pc: 350 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 352 op: ELSE (23)
    goto L8; // [352] 355
    // SubProg db_create_table pc: 354 op: NOP1 (159)
L8: // addr: 355 pc: 354 sub: 17368 op: 159
    // SubProg db_create_table pc: 355 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 331

// block var put4_1__tmp_at331_17441
    DeRefi(_put4_1__tmp_at331_17441);
    _put4_1__tmp_at331_17441 = NOVALUE;
    // SubProg db_create_table pc: 357 op: STARTLINE (58)

    /** eds.e:1638			tables = newtables*/
    // SubProg db_create_table pc: 359 op: ASSIGN (18)
    Ref(_newtables_17375);
    DeRef(_tables_17374);
    _tables_17374 = _newtables_17375;
    // SubProg db_create_table pc: 362 op: ELSE (23)
    goto L9; // [362] 411
    // SubProg db_create_table pc: 364 op: NOP1 (159)
L4: // addr: 365 pc: 364 sub: 17368 op: 159
    // SubProg db_create_table pc: 365 op: STARTLINE (58)

    /** eds.e:1640			io:seek(current_db, tables)*/
    // SubProg db_create_table pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 369 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 371 op: RIGHT_BRACE_2 (85)
    Ref(_tables_17374);
    DeRef(_seek_1__tmp_at369_17445);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _tables_17374;
    _seek_1__tmp_at369_17445 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 375 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_369_17444 = machine(19, _seek_1__tmp_at369_17445);
    // SubProg db_create_table pc: 379 op: NOP1 (159)
    // SubProg db_create_table pc: 380 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 369

// block var seek_1__tmp_at369_17445
    DeRef(_seek_1__tmp_at369_17445);
    _seek_1__tmp_at369_17445 = NOVALUE;
    // SubProg db_create_table pc: 382 op: STARTLINE (58)

    /** eds.e:1641			put4(nt)*/
    // SubProg db_create_table pc: 384 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 386 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 388 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_nt_17373)) {
        *poke4_addr = (uint32_t)_nt_17373;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nt_17373)->dbl;
    }
    // SubProg db_create_table pc: 391 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 393 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 397 op: PEEK (127)
    DeRefi(_put4_1__tmp_at384_17447);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at384_17447 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 400 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at384_17447); // DJP 
    // SubProg db_create_table pc: 403 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 405 op: ELSE (23)
    goto LA; // [405] 408
    // SubProg db_create_table pc: 407 op: NOP1 (159)
LA: // addr: 408 pc: 407 sub: 17368 op: 159
    // SubProg db_create_table pc: 408 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 384

// block var put4_1__tmp_at384_17447
    DeRefi(_put4_1__tmp_at384_17447);
    _put4_1__tmp_at384_17447 = NOVALUE;
    // SubProg db_create_table pc: 410 op: NOP1 (159)
L9: // addr: 411 pc: 410 sub: 17368 op: 159
    // SubProg db_create_table pc: 411 op: STARTLINE (58)

    /** eds.e:1645		records_ptr = db_allocate(init_records * 4)*/
    // SubProg db_create_table pc: 413 op: MULTIPLY (13)
    if (_init_records_17371 == (short)_init_records_17371){
        _9607 = _init_records_17371 * 4;
    }
    else{
        _9607 = NewDouble(_init_records_17371 * (eudouble)4);
    }
    // SubProg db_create_table pc: 417 op: PROC (27)
    _0 = _records_ptr_17377;
    _records_ptr_17377 = _44db_allocate(_9607);
    DeRef(_0);
    _9607 = NOVALUE;
    // SubProg db_create_table pc: 421 op: STARTLINE (58)

    /** eds.e:1646		putn(repeat(0, init_records * 4))*/
    // SubProg db_create_table pc: 423 op: MULTIPLY (13)
    _9609 = _init_records_17371 * 4;
    // SubProg db_create_table pc: 427 op: REPEAT (32)
    _9610 = Repeat(0, _9609);
    _9609 = NOVALUE;
    // SubProg db_create_table pc: 431 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_431_17453);
    _s_inlined_putn_at_431_17453 = _9610;
    _9610 = NOVALUE;
    // SubProg db_create_table pc: 434 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 436 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 440 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_431_17453); // DJP 
    // SubProg db_create_table pc: 443 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create_table pc: 445 op: ELSE (23)
    goto LB; // [445] 448
    // SubProg db_create_table pc: 447 op: NOP1 (159)
LB: // addr: 448 pc: 447 sub: 17368 op: 159
    // SubProg db_create_table pc: 448 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create_table @ 431

// block var s_inlined_putn_at_431_17453
    DeRefi(_s_inlined_putn_at_431_17453);
    _s_inlined_putn_at_431_17453 = NOVALUE;
    // SubProg db_create_table pc: 450 op: STARTLINE (58)

    /** eds.e:1649		index_ptr = db_allocate(init_index * 8)*/
    // SubProg db_create_table pc: 452 op: MULTIPLY (13)
    if (_init_index_17382 == (short)_init_index_17382){
        _9611 = _init_index_17382 * 8;
    }
    else{
        _9611 = NewDouble(_init_index_17382 * (eudouble)8);
    }
    // SubProg db_create_table pc: 456 op: PROC (27)
    _0 = _index_ptr_17380;
    _index_ptr_17380 = _44db_allocate(_9611);
    DeRef(_0);
    _9611 = NOVALUE;
    // SubProg db_create_table pc: 460 op: STARTLINE (58)

    /** eds.e:1650		put4(0)  -- 0 records*/
    // SubProg db_create_table pc: 462 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 466 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create_table pc: 469 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 471 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 475 op: PEEK (127)
    DeRefi(_put4_1__tmp_at462_17457);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at462_17457 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 478 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at462_17457); // DJP 
    // SubProg db_create_table pc: 481 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 483 op: ELSE (23)
    goto LC; // [483] 486
    // SubProg db_create_table pc: 485 op: NOP1 (159)
LC: // addr: 486 pc: 485 sub: 17368 op: 159
    // SubProg db_create_table pc: 486 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 462

// block var put4_1__tmp_at462_17457
    DeRefi(_put4_1__tmp_at462_17457);
    _put4_1__tmp_at462_17457 = NOVALUE;
    // SubProg db_create_table pc: 488 op: STARTLINE (58)

    /** eds.e:1651		put4(records_ptr) -- point to 1st block*/
    // SubProg db_create_table pc: 490 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 494 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_records_ptr_17377)) {
        *poke4_addr = (uint32_t)_records_ptr_17377;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_records_ptr_17377)->dbl;
    }
    // SubProg db_create_table pc: 497 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 499 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 501 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 503 op: PEEK (127)
    DeRefi(_put4_1__tmp_at490_17459);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at490_17459 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 506 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at490_17459); // DJP 
    // SubProg db_create_table pc: 509 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 511 op: ELSE (23)
    goto LD; // [511] 514
    // SubProg db_create_table pc: 513 op: NOP1 (159)
LD: // addr: 514 pc: 513 sub: 17368 op: 159
    // SubProg db_create_table pc: 514 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 490

// block var put4_1__tmp_at490_17459
    DeRefi(_put4_1__tmp_at490_17459);
    _put4_1__tmp_at490_17459 = NOVALUE;
    // SubProg db_create_table pc: 516 op: STARTLINE (58)

    /** eds.e:1652		putn(repeat(0, (init_index-1) * 8))*/
    // SubProg db_create_table pc: 518 op: MINUS (10)
    _9613 = _init_index_17382 - 1;
    if ((object)((uintptr_t)_9613 +(uintptr_t) HIGH_BITS) >= 0){
        _9613 = NewDouble((eudouble)_9613);
    }
    // SubProg db_create_table pc: 522 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9613)) {
        _9614 = _9613 * 8;
    }
    else {
        _9614 = NewDouble(DBL_PTR(_9613)->dbl * (eudouble)8);
    }
    DeRef(_9613);
    _9613 = NOVALUE;
    // SubProg db_create_table pc: 526 op: REPEAT (32)
    _9615 = Repeat(0, _9614);
    DeRef(_9614);
    _9614 = NOVALUE;
    // SubProg db_create_table pc: 530 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_530_17464);
    _s_inlined_putn_at_530_17464 = _9615;
    _9615 = NOVALUE;
    // SubProg db_create_table pc: 533 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 535 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 537 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 539 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_530_17464); // DJP 
    // SubProg db_create_table pc: 542 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create_table pc: 544 op: ELSE (23)
    goto LE; // [544] 547
    // SubProg db_create_table pc: 546 op: NOP1 (159)
LE: // addr: 547 pc: 546 sub: 17368 op: 159
    // SubProg db_create_table pc: 547 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create_table @ 530

// block var s_inlined_putn_at_530_17464
    DeRefi(_s_inlined_putn_at_530_17464);
    _s_inlined_putn_at_530_17464 = NOVALUE;
    // SubProg db_create_table pc: 549 op: STARTLINE (58)

    /** eds.e:1655		name_ptr = db_allocate(length(name)+1)*/
    // SubProg db_create_table pc: 551 op: LENGTH (42)
    if (IS_SEQUENCE(_name_17370)){
            _9616 = SEQ_PTR(_name_17370)->length;
    }
    else {
        _9616 = 1;
    }
    // SubProg db_create_table pc: 554 op: PLUS1 (93)
    _9617 = _9616 + 1;
    _9616 = NOVALUE;
    // SubProg db_create_table pc: 558 op: PROC (27)
    _0 = _name_ptr_17372;
    _name_ptr_17372 = _44db_allocate(_9617);
    DeRef(_0);
    _9617 = NOVALUE;
    // SubProg db_create_table pc: 562 op: STARTLINE (58)

    /** eds.e:1656		putn(name & 0)*/
    // SubProg db_create_table pc: 564 op: CONCAT (15)
    Append(&_9619, _name_17370, 0);
    // SubProg db_create_table pc: 568 op: ASSIGN (18)
    DeRef(_s_inlined_putn_at_568_17470);
    _s_inlined_putn_at_568_17470 = _9619;
    _9619 = NOVALUE;
    // SubProg db_create_table pc: 571 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 573 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 577 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_568_17470); // DJP 
    // SubProg db_create_table pc: 580 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create_table pc: 582 op: ELSE (23)
    goto LF; // [582] 585
    // SubProg db_create_table pc: 584 op: NOP1 (159)
LF: // addr: 585 pc: 584 sub: 17368 op: 159
    // SubProg db_create_table pc: 585 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create_table @ 568

// block var s_inlined_putn_at_568_17470
    DeRef(_s_inlined_putn_at_568_17470);
    _s_inlined_putn_at_568_17470 = NOVALUE;
    // SubProg db_create_table pc: 587 op: STARTLINE (58)

    /** eds.e:1658		io:seek(current_db, tables+4+(nt-1)*SIZEOF_TABLE_HEADER)*/
    // SubProg db_create_table pc: 589 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 591 op: PLUS (11)
    if (IS_ATOM_INT(_tables_17374)) {
        _9620 = _tables_17374 + 4;
        if ((object)((uintptr_t)_9620 + (uintptr_t)HIGH_BITS) >= 0){
            _9620 = NewDouble((eudouble)_9620);
        }
    }
    else {
        _9620 = NewDouble(DBL_PTR(_tables_17374)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 595 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17373)) {
        _9621 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9621 +(uintptr_t) HIGH_BITS) >= 0){
            _9621 = NewDouble((eudouble)_9621);
        }
    }
    else {
        _9621 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 599 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9621)) {
        if (_9621 == (short)_9621){
            _9622 = _9621 * 16;
        }
        else{
            _9622 = NewDouble(_9621 * (eudouble)16);
        }
    }
    else {
        _9622 = NewDouble(DBL_PTR(_9621)->dbl * (eudouble)16);
    }
    DeRef(_9621);
    _9621 = NOVALUE;
    // SubProg db_create_table pc: 603 op: PLUS (11)
    if (IS_ATOM_INT(_9620) && IS_ATOM_INT(_9622)) {
        _9623 = _9620 + _9622;
        if ((object)((uintptr_t)_9623 + (uintptr_t)HIGH_BITS) >= 0){
            _9623 = NewDouble((eudouble)_9623);
        }
    }
    else {
        if (IS_ATOM_INT(_9620)) {
            _9623 = NewDouble((eudouble)_9620 + DBL_PTR(_9622)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9622)) {
                _9623 = NewDouble(DBL_PTR(_9620)->dbl + (eudouble)_9622);
            }
            else
            _9623 = NewDouble(DBL_PTR(_9620)->dbl + DBL_PTR(_9622)->dbl);
        }
    }
    DeRef(_9620);
    _9620 = NOVALUE;
    DeRef(_9622);
    _9622 = NOVALUE;
    // SubProg db_create_table pc: 607 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_607_17476);
    _pos_inlined_seek_at_607_17476 = _9623;
    _9623 = NOVALUE;
    // SubProg db_create_table pc: 610 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 612 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_607_17476);
    DeRef(_seek_1__tmp_at610_17478);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_607_17476;
    _seek_1__tmp_at610_17478 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 616 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_610_17477 = machine(19, _seek_1__tmp_at610_17478);
    // SubProg db_create_table pc: 620 op: NOP1 (159)
    // SubProg db_create_table pc: 621 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_create_table @ 607

// block var pos_inlined_seek_at_607_17476
    DeRef(_pos_inlined_seek_at_607_17476);
    _pos_inlined_seek_at_607_17476 = NOVALUE;

// block var seek_1__tmp_at610_17478
    DeRef(_seek_1__tmp_at610_17478);
    _seek_1__tmp_at610_17478 = NOVALUE;
    // SubProg db_create_table pc: 623 op: STARTLINE (58)

    /** eds.e:1659		put4(name_ptr)*/
    // SubProg db_create_table pc: 625 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 627 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 629 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_name_ptr_17372)) {
        *poke4_addr = (uint32_t)_name_ptr_17372;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_name_ptr_17372)->dbl;
    }
    // SubProg db_create_table pc: 632 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 634 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 638 op: PEEK (127)
    DeRefi(_put4_1__tmp_at625_17480);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at625_17480 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 641 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at625_17480); // DJP 
    // SubProg db_create_table pc: 644 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 646 op: ELSE (23)
    goto L10; // [646] 649
    // SubProg db_create_table pc: 648 op: NOP1 (159)
L10: // addr: 649 pc: 648 sub: 17368 op: 159
    // SubProg db_create_table pc: 649 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 625

// block var put4_1__tmp_at625_17480
    DeRefi(_put4_1__tmp_at625_17480);
    _put4_1__tmp_at625_17480 = NOVALUE;
    // SubProg db_create_table pc: 651 op: STARTLINE (58)

    /** eds.e:1660		put4(0)  -- start with 0 records total*/
    // SubProg db_create_table pc: 653 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 657 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create_table pc: 660 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 664 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 666 op: PEEK (127)
    DeRefi(_put4_1__tmp_at653_17482);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at653_17482 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 669 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at653_17482); // DJP 
    // SubProg db_create_table pc: 672 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 674 op: ELSE (23)
    goto L11; // [674] 677
    // SubProg db_create_table pc: 676 op: NOP1 (159)
L11: // addr: 677 pc: 676 sub: 17368 op: 159
    // SubProg db_create_table pc: 677 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 653

// block var put4_1__tmp_at653_17482
    DeRefi(_put4_1__tmp_at653_17482);
    _put4_1__tmp_at653_17482 = NOVALUE;
    // SubProg db_create_table pc: 679 op: STARTLINE (58)

    /** eds.e:1661		put4(1)  -- start with 1 block of records in index*/
    // SubProg db_create_table pc: 681 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 683 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 685 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)1;
    // SubProg db_create_table pc: 688 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 690 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 692 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 694 op: PEEK (127)
    DeRefi(_put4_1__tmp_at681_17484);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at681_17484 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 697 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at681_17484); // DJP 
    // SubProg db_create_table pc: 700 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 702 op: ELSE (23)
    goto L12; // [702] 705
    // SubProg db_create_table pc: 704 op: NOP1 (159)
L12: // addr: 705 pc: 704 sub: 17368 op: 159
    // SubProg db_create_table pc: 705 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 681

// block var put4_1__tmp_at681_17484
    DeRefi(_put4_1__tmp_at681_17484);
    _put4_1__tmp_at681_17484 = NOVALUE;
    // SubProg db_create_table pc: 707 op: STARTLINE (58)

    /** eds.e:1662		put4(index_ptr)*/
    // SubProg db_create_table pc: 709 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 713 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_index_ptr_17380)) {
        *poke4_addr = (uint32_t)_index_ptr_17380;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_index_ptr_17380)->dbl;
    }
    // SubProg db_create_table pc: 716 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 720 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 722 op: PEEK (127)
    DeRefi(_put4_1__tmp_at709_17486);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at709_17486 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_create_table pc: 725 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at709_17486); // DJP 
    // SubProg db_create_table pc: 728 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create_table pc: 730 op: ELSE (23)
    goto L13; // [730] 733
    // SubProg db_create_table pc: 732 op: NOP1 (159)
L13: // addr: 733 pc: 732 sub: 17368 op: 159
    // SubProg db_create_table pc: 733 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create_table @ 709

// block var put4_1__tmp_at709_17486
    DeRefi(_put4_1__tmp_at709_17486);
    _put4_1__tmp_at709_17486 = NOVALUE;
    // SubProg db_create_table pc: 735 op: STARTLINE (58)

    /** eds.e:1663		if db_select_table(name) then*/
    // SubProg db_create_table pc: 737 op: PROC (27)
    RefDS(_name_17370);
    _9624 = _44db_select_table(_name_17370);
    // SubProg db_create_table pc: 741 op: IF (20)
    if (_9624 == 0) {
        DeRef(_9624);
        _9624 = NOVALUE;
        goto L14; // [741] 745
    }
    else {
        if (!IS_ATOM_INT(_9624) && DBL_PTR(_9624)->dbl == 0.0){
            DeRef(_9624);
            _9624 = NOVALUE;
            goto L14; // [741] 745
        }
        DeRef(_9624);
        _9624 = NOVALUE;
    }
    DeRef(_9624);
    _9624 = NOVALUE;
    // SubProg db_create_table pc: 744 op: NOP1 (159)
L14: // addr: 745 pc: 744 sub: 17368 op: 159
    // SubProg db_create_table pc: 745 op: STARTLINE (58)

    /** eds.e:1665		return DB_OK*/
    // SubProg db_create_table pc: 747 op: RETURNF (28)

// Exiting block BLOCK: db_create_table

// block var name_17370
    DeRefDS(_name_17370);

// block var init_records_17371

// block var name_ptr_17372
    DeRef(_name_ptr_17372);

// block var nt_17373
    DeRef(_nt_17373);

// block var tables_17374
    DeRef(_tables_17374);

// block var newtables_17375
    DeRef(_newtables_17375);

// block var table_17376
    DeRef(_table_17376);

// block var records_ptr_17377
    DeRef(_records_ptr_17377);

// block var size_17378
    DeRef(_size_17378);

// block var newsize_17379
    DeRef(_newsize_17379);

// block var index_ptr_17380
    DeRef(_index_ptr_17380);

// block var remaining_17381
    DeRef(_remaining_17381);

// block var init_index_17382
    return 0;
    // SubProg db_create_table pc: 751 op: BADRETURNF (43)
    ;
}


object _44db_table_list()
{
    object _seek_1__tmp_at120_17745 = NOVALUE;
    object _seek_inlined_seek_at_120_17744 = NOVALUE;
    object _seek_1__tmp_at98_17741 = NOVALUE;
    object _seek_inlined_seek_at_98_17740 = NOVALUE;
    object _pos_inlined_seek_at_95_17739 = NOVALUE;
    object _seek_1__tmp_at42_17729 = NOVALUE;
    object _seek_inlined_seek_at_42_17728 = NOVALUE;
    object _seek_1__tmp_at4_17722 = NOVALUE;
    object _seek_inlined_seek_at_4_17721 = NOVALUE;
    object _table_names_17716 = NOVALUE;
    object _tables_17717 = NOVALUE;
    object _nt_17718 = NOVALUE;
    object _name_17719 = NOVALUE;
    object _9723 = NOVALUE; // 17747 9723
    object _9722 = NOVALUE; // 17746 9722
// skipping _9721  name type: 0
    object _9720 = NOVALUE; // 17737 9720
    object _9719 = NOVALUE; // 17736 9719
    object _9718 = NOVALUE; // 17735 9718
    object _9717 = NOVALUE; // 17734 9717
// skipping _9716  name type: 0
// skipping _9715  name type: 0
// skipping _9714  name type: 0
// skipping _9713  name type: 0
    object _9712 = NOVALUE; // 17724 9712
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_table_list pc: 1 op: STARTLINE (58)

    /** eds.e:1923		io:seek(current_db, TABLE_HEADERS)*/
    // SubProg db_table_list pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 5 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_table_list pc: 7 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at4_17722);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at4_17722 = MAKE_SEQ(_1);
    // SubProg db_table_list pc: 11 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_4_17721 = machine(19, _seek_1__tmp_at4_17722);
    // SubProg db_table_list pc: 15 op: NOP1 (159)
    // SubProg db_table_list pc: 16 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 4

// block var seek_1__tmp_at4_17722
    DeRefi(_seek_1__tmp_at4_17722);
    _seek_1__tmp_at4_17722 = NOVALUE;
    // SubProg db_table_list pc: 18 op: STARTLINE (58)

    /** eds.e:1924		if length(vLastErrors) > 0 then return {} end if*/
    // SubProg db_table_list pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_44vLastErrors_16112)){
            _9712 = SEQ_PTR(_44vLastErrors_16112)->length;
    }
    else {
        _9712 = 1;
    }
    // SubProg db_table_list pc: 25 op: GREATER_IFW_I (124)
    if (_9712 <= 0)
    goto L1; // [25] 34
    // SubProg db_table_list pc: 29 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: db_table_list

// block var table_names_17716
    DeRef(_table_names_17716);

// block var tables_17717
    DeRef(_tables_17717);

// block var nt_17718
    DeRef(_nt_17718);

// block var name_17719
    DeRef(_name_17719);
    return _5;
    // SubProg db_table_list pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 17714 op: 159
    // SubProg db_table_list pc: 34 op: STARTLINE (58)

    /** eds.e:1925		tables = get4()*/
    // SubProg db_table_list pc: 36 op: PROC (27)
    _0 = _tables_17717;
    _tables_17717 = _44get4();
    DeRef(_0);
    // SubProg db_table_list pc: 39 op: STARTLINE (58)

    /** eds.e:1926		io:seek(current_db, tables)*/
    // SubProg db_table_list pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_list pc: 43 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_table_list pc: 45 op: RIGHT_BRACE_2 (85)
    Ref(_tables_17717);
    DeRef(_seek_1__tmp_at42_17729);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _tables_17717;
    _seek_1__tmp_at42_17729 = MAKE_SEQ(_1);
    // SubProg db_table_list pc: 49 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_42_17728 = machine(19, _seek_1__tmp_at42_17729);
    // SubProg db_table_list pc: 53 op: NOP1 (159)
    // SubProg db_table_list pc: 54 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 42

// block var seek_1__tmp_at42_17729
    DeRef(_seek_1__tmp_at42_17729);
    _seek_1__tmp_at42_17729 = NOVALUE;
    // SubProg db_table_list pc: 56 op: STARTLINE (58)

    /** eds.e:1927		nt = get4()*/
    // SubProg db_table_list pc: 58 op: PROC (27)
    _0 = _nt_17718;
    _nt_17718 = _44get4();
    DeRef(_0);
    // SubProg db_table_list pc: 61 op: STARTLINE (58)

    /** eds.e:1928		table_names = repeat(0, nt)*/
    // SubProg db_table_list pc: 63 op: REPEAT (32)
    DeRef(_table_names_17716);
    _table_names_17716 = Repeat(0, _nt_17718);
    // SubProg db_table_list pc: 67 op: STARTLINE (58)

    /** eds.e:1929		for i = 0 to nt-1 do*/
    // SubProg db_table_list pc: 69 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17718)) {
        _9717 = _nt_17718 - 1;
        if ((object)((uintptr_t)_9717 +(uintptr_t) HIGH_BITS) >= 0){
            _9717 = NewDouble((eudouble)_9717);
        }
    }
    else {
        _9717 = NewDouble(DBL_PTR(_nt_17718)->dbl - (eudouble)1);
    }
    // SubProg db_table_list pc: 73 op: FOR (21)
    {
        object _i_17733;
        _i_17733 = 0;
L2: // addr: 80 pc: 73 sub: 17714 op: 21
        if (binary_op_a(GREATER, _i_17733, _9717)){
            goto L3; // [73] 154
        }
        // SubProg db_table_list pc: 80 op: STARTLINE (58)

        /** eds.e:1930			io:seek(current_db, tables + 4 + i*SIZEOF_TABLE_HEADER)*/
        // SubProg db_table_list pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_table_list pc: 84 op: PLUS (11)
        if (IS_ATOM_INT(_tables_17717)) {
            _9718 = _tables_17717 + 4;
            if ((object)((uintptr_t)_9718 + (uintptr_t)HIGH_BITS) >= 0){
                _9718 = NewDouble((eudouble)_9718);
            }
        }
        else {
            _9718 = NewDouble(DBL_PTR(_tables_17717)->dbl + (eudouble)4);
        }
        // SubProg db_table_list pc: 88 op: MULTIPLY (13)
        if (IS_ATOM_INT(_i_17733)) {
            if (_i_17733 == (short)_i_17733){
                _9719 = _i_17733 * 16;
            }
            else{
                _9719 = NewDouble(_i_17733 * (eudouble)16);
            }
        }
        else {
            _9719 = NewDouble(DBL_PTR(_i_17733)->dbl * (eudouble)16);
        }
        // SubProg db_table_list pc: 92 op: PLUS (11)
        if (IS_ATOM_INT(_9718) && IS_ATOM_INT(_9719)) {
            _9720 = _9718 + _9719;
            if ((object)((uintptr_t)_9720 + (uintptr_t)HIGH_BITS) >= 0){
                _9720 = NewDouble((eudouble)_9720);
            }
        }
        else {
            if (IS_ATOM_INT(_9718)) {
                _9720 = NewDouble((eudouble)_9718 + DBL_PTR(_9719)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9719)) {
                    _9720 = NewDouble(DBL_PTR(_9718)->dbl + (eudouble)_9719);
                }
                else
                _9720 = NewDouble(DBL_PTR(_9718)->dbl + DBL_PTR(_9719)->dbl);
            }
        }
        DeRef(_9718);
        _9718 = NOVALUE;
        DeRef(_9719);
        _9719 = NOVALUE;
        // SubProg db_table_list pc: 96 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_95_17739);
        _pos_inlined_seek_at_95_17739 = _9720;
        _9720 = NOVALUE;
        // SubProg db_table_list pc: 99 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_table_list pc: 101 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_95_17739);
        DeRef(_seek_1__tmp_at98_17741);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_95_17739;
        _seek_1__tmp_at98_17741 = MAKE_SEQ(_1);
        // SubProg db_table_list pc: 105 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_98_17740 = machine(19, _seek_1__tmp_at98_17741);
        // SubProg db_table_list pc: 109 op: NOP1 (159)
        // SubProg db_table_list pc: 110 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 95

// block var pos_inlined_seek_at_95_17739
        DeRef(_pos_inlined_seek_at_95_17739);
        _pos_inlined_seek_at_95_17739 = NOVALUE;

// block var seek_1__tmp_at98_17741
        DeRef(_seek_1__tmp_at98_17741);
        _seek_1__tmp_at98_17741 = NOVALUE;
        // SubProg db_table_list pc: 112 op: STARTLINE (58)

        /** eds.e:1931			name = get4()*/
        // SubProg db_table_list pc: 114 op: PROC (27)
        _0 = _name_17719;
        _name_17719 = _44get4();
        DeRef(_0);
        // SubProg db_table_list pc: 117 op: STARTLINE (58)

        /** eds.e:1932			io:seek(current_db, name)*/
        // SubProg db_table_list pc: 119 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_table_list pc: 121 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_table_list pc: 123 op: RIGHT_BRACE_2 (85)
        Ref(_name_17719);
        DeRef(_seek_1__tmp_at120_17745);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16088;
        ((intptr_t *)_2)[2] = _name_17719;
        _seek_1__tmp_at120_17745 = MAKE_SEQ(_1);
        // SubProg db_table_list pc: 127 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_120_17744 = machine(19, _seek_1__tmp_at120_17745);
        // SubProg db_table_list pc: 131 op: NOP1 (159)
        // SubProg db_table_list pc: 132 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_table_list @ 120

// block var seek_1__tmp_at120_17745
        DeRef(_seek_1__tmp_at120_17745);
        _seek_1__tmp_at120_17745 = NOVALUE;
        // SubProg db_table_list pc: 134 op: STARTLINE (58)

        /** eds.e:1933			table_names[i+1] = get_string()*/
        // SubProg db_table_list pc: 136 op: PLUS1 (93)
        if (IS_ATOM_INT(_i_17733)) {
            _9722 = _i_17733 + 1;
            if (_9722 > MAXINT){
                _9722 = NewDouble((eudouble)_9722);
            }
        }
        else
        _9722 = binary_op(PLUS, 1, _i_17733);
        // SubProg db_table_list pc: 140 op: PROC (27)
        _9723 = _44get_string();
        // SubProg db_table_list pc: 143 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_table_names_17716);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _table_names_17716 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_9722))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_9722)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _9722);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _9723;
        if( _1 != _9723 ){
            DeRef(_1);
        }
        _9723 = NOVALUE;
        // SubProg db_table_list pc: 147 op: STARTLINE (58)

        /** eds.e:1934		end for*/
        // SubProg db_table_list pc: 149 op: ENDFOR_INT_UP1 (54)
        _0 = _i_17733;
        if (IS_ATOM_INT(_i_17733)) {
            _i_17733 = _i_17733 + 1;
            if ((object)((uintptr_t)_i_17733 +(uintptr_t) HIGH_BITS) >= 0){
                _i_17733 = NewDouble((eudouble)_i_17733);
            }
        }
        else {
            _i_17733 = binary_op_a(PLUS, _i_17733, 1);
        }
        DeRef(_0);
        goto L2; // [149] 80
L3: // addr: 154 pc: 149 sub: 17714 op: 54
        ;
        DeRef(_i_17733);
    }
    // SubProg db_table_list pc: 154 op: STARTLINE (58)

    /** eds.e:1935		return table_names*/
    // SubProg db_table_list pc: 156 op: RETURNF (28)

// Exiting block BLOCK: db_table_list

// block var tables_17717
    DeRef(_tables_17717);

// block var nt_17718
    DeRef(_nt_17718);

// block var name_17719
    DeRef(_name_17719);
    DeRef(_9722);
    _9722 = NOVALUE;
    DeRef(_9717);
    _9717 = NOVALUE;
    return _table_names_17716;
    // SubProg db_table_list pc: 160 op: BADRETURNF (43)
    ;
}


object _44key_value(object _ptr_17750)
{
    object _seek_1__tmp_at11_17755 = NOVALUE;
    object _seek_inlined_seek_at_11_17754 = NOVALUE;
    object _pos_inlined_seek_at_8_17753 = NOVALUE;
    object _9725 = NOVALUE; // 17756 9725
    object _9724 = NOVALUE; // 17751 9724
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg key_value pc: 1 op: STARTLINE (58)

    /** eds.e:1941		io:seek(current_db, ptr+4) -- skip ptr to data*/
    // SubProg key_value pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg key_value pc: 5 op: PLUS (11)
    if (IS_ATOM_INT(_ptr_17750)) {
        _9724 = _ptr_17750 + 4;
        if ((object)((uintptr_t)_9724 + (uintptr_t)HIGH_BITS) >= 0){
            _9724 = NewDouble((eudouble)_9724);
        }
    }
    else {
        _9724 = NewDouble(DBL_PTR(_ptr_17750)->dbl + (eudouble)4);
    }
    // SubProg key_value pc: 9 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_8_17753);
    _pos_inlined_seek_at_8_17753 = _9724;
    _9724 = NOVALUE;
    // SubProg key_value pc: 12 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg key_value pc: 14 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_8_17753);
    DeRef(_seek_1__tmp_at11_17755);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_17753;
    _seek_1__tmp_at11_17755 = MAKE_SEQ(_1);
    // SubProg key_value pc: 18 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_11_17754 = machine(19, _seek_1__tmp_at11_17755);
    // SubProg key_value pc: 22 op: NOP1 (159)
    // SubProg key_value pc: 23 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from key_value @ 8

// block var pos_inlined_seek_at_8_17753
    DeRef(_pos_inlined_seek_at_8_17753);
    _pos_inlined_seek_at_8_17753 = NOVALUE;

// block var seek_1__tmp_at11_17755
    DeRef(_seek_1__tmp_at11_17755);
    _seek_1__tmp_at11_17755 = NOVALUE;
    // SubProg key_value pc: 25 op: STARTLINE (58)

    /** eds.e:1942		return decompress(0)*/
    // SubProg key_value pc: 27 op: PROC (27)
    _9725 = _44decompress(0);
    // SubProg key_value pc: 31 op: RETURNF (28)

// Exiting block BLOCK: key_value

// block var ptr_17750
    DeRef(_ptr_17750);
    return _9725;
    // SubProg key_value pc: 35 op: BADRETURNF (43)
    ;
}


object _44db_find_key(object _key_17759, object _table_name_17760)
{
    object _lo_17761 = NOVALUE;
    object _hi_17762 = NOVALUE;
    object _mid_17763 = NOVALUE;
    object _c_17764 = NOVALUE;
    object _9749 = NOVALUE; // 17796 9749
// skipping _9748  name type: 0
// skipping _9747  name type: 0
// skipping _9746  name type: 0
// skipping _9745  name type: 0
// skipping _9744  name type: 0
// skipping _9743  name type: 0
// skipping _9742  name type: 0
    object _9741 = NOVALUE; // 17784 9741
    object _9740 = NOVALUE; // 17783 9740
// skipping _9739  name type: 0
    object _9738 = NOVALUE; // 17781 9738
// skipping _9737  name type: 0
// skipping _9736  name type: 0
    object _9735 = NOVALUE; // 17777 9735
// skipping _9733  name type: 0
    object _9732 = NOVALUE; // 17773 9732
// skipping _9729  name type: 0
    object _9728 = NOVALUE; // 17769 9728
// skipping _9727  name type: 0
    object _9726 = NOVALUE; // 17766 9726
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_find_key pc: 1 op: STARTLINE (58)

    /** eds.e:2003		if not equal(table_name, current_table_name) then*/
    // SubProg db_find_key pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 5 op: EQUAL (153)
    if (_table_name_17760 == _44current_table_name_16090)
    _9726 = 1;
    else if (IS_ATOM_INT(_table_name_17760) && IS_ATOM_INT(_44current_table_name_16090))
    _9726 = 0;
    else
    _9726 = (compare(_table_name_17760, _44current_table_name_16090) == 0);
    // SubProg db_find_key pc: 9 op: NOT_IFW (108)
    if (_9726 != 0)
    goto L1; // [9] 42
    _9726 = NOVALUE;
    // SubProg db_find_key pc: 12 op: STARTLINE (58)

    /** eds.e:2004			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_find_key pc: 14 op: PROC (27)
    RefDS(_table_name_17760);
    _9728 = _44db_select_table(_table_name_17760);
    // SubProg db_find_key pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9728, 0)){
        DeRef(_9728);
        _9728 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_9728);
    _9728 = NOVALUE;
    // SubProg db_find_key pc: 22 op: STARTLINE (58)

    /** eds.e:2005				fatal(NO_TABLE, "invalid table name given", "db_find_key", {key, table_name})*/
    // SubProg db_find_key pc: 24 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_17760);
    Ref(_key_17759);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_17759;
    ((intptr_t *)_2)[2] = _table_name_17760;
    _9732 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 28 op: PROC (27)
    RefDS(_9730);
    RefDS(_9731);
    _44fatal(903, _9730, _9731, _9732);
    _9732 = NOVALUE;
    // SubProg db_find_key pc: 34 op: STARTLINE (58)

    /** eds.e:2006				return 0*/
    // SubProg db_find_key pc: 36 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_17759
    DeRef(_key_17759);

// block var table_name_17760
    DeRefDS(_table_name_17760);

// block var lo_17761

// block var hi_17762

// block var mid_17763

// block var c_17764
    return 0;
    // SubProg db_find_key pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 17757 op: 159
    // SubProg db_find_key pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 17757 op: 159
    // SubProg db_find_key pc: 42 op: STARTLINE (58)

    /** eds.e:2010		if current_table_pos = -1 then*/
    // SubProg db_find_key pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _44current_table_pos_16089, -1)){
        goto L3; // [46] 69
    }
    // SubProg db_find_key pc: 50 op: STARTLINE (58)

    /** eds.e:2011			fatal(NO_TABLE, "no table selected", "db_find_key", {key, table_name})*/
    // SubProg db_find_key pc: 52 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_17760);
    Ref(_key_17759);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_17759;
    ((intptr_t *)_2)[2] = _table_name_17760;
    _9735 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 56 op: PROC (27)
    RefDS(_9734);
    RefDS(_9731);
    _44fatal(903, _9734, _9731, _9735);
    _9735 = NOVALUE;
    // SubProg db_find_key pc: 62 op: STARTLINE (58)

    /** eds.e:2012			return 0*/
    // SubProg db_find_key pc: 64 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_17759
    DeRef(_key_17759);

// block var table_name_17760
    DeRef(_table_name_17760);

// block var lo_17761

// block var hi_17762

// block var mid_17763

// block var c_17764
    return 0;
    // SubProg db_find_key pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 17757 op: 159
    // SubProg db_find_key pc: 69 op: STARTLINE (58)

    /** eds.e:2015		lo = 1*/
    // SubProg db_find_key pc: 71 op: ASSIGN_I (113)
    _lo_17761 = 1;
    // SubProg db_find_key pc: 74 op: STARTLINE (58)

    /** eds.e:2016		hi = length(key_pointers)*/
    // SubProg db_find_key pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 78 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _hi_17762 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _hi_17762 = 1;
    }
    // SubProg db_find_key pc: 81 op: STARTLINE (58)

    /** eds.e:2017		mid = 1*/
    // SubProg db_find_key pc: 83 op: ASSIGN_I (113)
    _mid_17763 = 1;
    // SubProg db_find_key pc: 86 op: STARTLINE (58)

    /** eds.e:2018		c = 0*/
    // SubProg db_find_key pc: 88 op: ASSIGN_I (113)
    _c_17764 = 0;
    // SubProg db_find_key pc: 91 op: STARTLINE (58)

    /** eds.e:2019		while lo <= hi do*/
    // SubProg db_find_key pc: 93 op: NOP2 (110)
    // SubProg db_find_key pc: 95 op: NOPWHILE (158)
L4: // addr: 96 pc: 95 sub: 17757 op: 158
    // SubProg db_find_key pc: 96 op: LESSEQ_IFW_I (123)
    if (_lo_17761 > _hi_17762)
    goto L5; // [96] 170
    // SubProg db_find_key pc: 100 op: STARTLINE (58)

    /** eds.e:2020			mid = floor((lo + hi) / 2)*/
    // SubProg db_find_key pc: 102 op: PLUS (11)
    _9738 = _lo_17761 + _hi_17762;
    if ((object)((uintptr_t)_9738 + (uintptr_t)HIGH_BITS) >= 0){
        _9738 = NewDouble((eudouble)_9738);
    }
    // SubProg db_find_key pc: 106 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_9738)) {
        _mid_17763 = _9738 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _9738, 2);
        _mid_17763 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_9738);
    _9738 = NOVALUE;
    // SubProg db_find_key pc: 110 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_mid_17763)) {
        _1 = (object)(DBL_PTR(_mid_17763)->dbl);
        DeRefDS(_mid_17763);
        _mid_17763 = _1;
    }
    // SubProg db_find_key pc: 112 op: STARTLINE (58)

    /** eds.e:2021			c = eu:compare(key, key_value(key_pointers[mid]))*/
    // SubProg db_find_key pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16095);
    _9740 = (object)*(((s1_ptr)_2)->base + _mid_17763);
    // SubProg db_find_key pc: 120 op: PROC (27)
    Ref(_9740);
    _9741 = _44key_value(_9740);
    _9740 = NOVALUE;
    // SubProg db_find_key pc: 124 op: COMPARE (76)
    if (IS_ATOM_INT(_key_17759) && IS_ATOM_INT(_9741)){
        _c_17764 = (_key_17759 < _9741) ? -1 : (_key_17759 > _9741);
    }
    else{
        _c_17764 = compare(_key_17759, _9741);
    }
    DeRef(_9741);
    _9741 = NOVALUE;
    // SubProg db_find_key pc: 128 op: STARTLINE (58)

    /** eds.e:2022			if c < 0 then*/
    // SubProg db_find_key pc: 130 op: LESS_IFW_I (119)
    if (_c_17764 >= 0)
    goto L6; // [130] 143
    // SubProg db_find_key pc: 134 op: STARTLINE (58)

    /** eds.e:2023				hi = mid - 1*/
    // SubProg db_find_key pc: 136 op: MINUS_I (116)
    _hi_17762 = _mid_17763 - 1;
    // SubProg db_find_key pc: 140 op: ELSE (23)
    goto L4; // [140] 96
    // SubProg db_find_key pc: 142 op: NOP1 (159)
L6: // addr: 143 pc: 142 sub: 17757 op: 159
    // SubProg db_find_key pc: 143 op: STARTLINE (58)

    /** eds.e:2024			elsif c > 0 then*/
    // SubProg db_find_key pc: 145 op: GREATER_IFW_I (124)
    if (_c_17764 <= 0)
    goto L7; // [145] 158
    // SubProg db_find_key pc: 149 op: STARTLINE (58)

    /** eds.e:2025				lo = mid + 1*/
    // SubProg db_find_key pc: 151 op: PLUS1_I (117)
    _lo_17761 = _mid_17763 + 1;
    // SubProg db_find_key pc: 155 op: ELSE (23)
    goto L4; // [155] 96
    // SubProg db_find_key pc: 157 op: NOP1 (159)
L7: // addr: 158 pc: 157 sub: 17757 op: 159
    // SubProg db_find_key pc: 158 op: STARTLINE (58)

    /** eds.e:2027				return mid*/
    // SubProg db_find_key pc: 160 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_17759
    DeRef(_key_17759);

// block var table_name_17760
    DeRef(_table_name_17760);

// block var lo_17761

// block var hi_17762

// block var c_17764
    return _mid_17763;
    // SubProg db_find_key pc: 164 op: NOP1 (159)
    // SubProg db_find_key pc: 165 op: STARTLINE (58)

    /** eds.e:2029		end while*/
    // SubProg db_find_key pc: 167 op: ENDWHILE (22)
    goto L4; // [167] 96
    // SubProg db_find_key pc: 169 op: NOP1 (159)
L5: // addr: 170 pc: 169 sub: 17757 op: 159
    // SubProg db_find_key pc: 170 op: STARTLINE (58)

    /** eds.e:2031		if c > 0 then*/
    // SubProg db_find_key pc: 172 op: GREATER_IFW_I (124)
    if (_c_17764 <= 0)
    goto L8; // [172] 183
    // SubProg db_find_key pc: 176 op: STARTLINE (58)

    /** eds.e:2032			mid += 1*/
    // SubProg db_find_key pc: 178 op: PLUS1_I (117)
    _mid_17763 = _mid_17763 + 1;
    // SubProg db_find_key pc: 182 op: NOP1 (159)
L8: // addr: 183 pc: 182 sub: 17757 op: 159
    // SubProg db_find_key pc: 183 op: STARTLINE (58)

    /** eds.e:2034		return -mid*/
    // SubProg db_find_key pc: 185 op: UMINUS (12)
    if ((uintptr_t)_mid_17763 == (uintptr_t)HIGH_BITS){
        _9749 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _9749 = - _mid_17763;
    }
    // SubProg db_find_key pc: 188 op: RETURNF (28)

// Exiting block BLOCK: db_find_key

// block var key_17759
    DeRef(_key_17759);

// block var table_name_17760
    DeRef(_table_name_17760);

// block var lo_17761

// block var hi_17762

// block var mid_17763

// block var c_17764
    return _9749;
    // SubProg db_find_key pc: 192 op: BADRETURNF (43)
    ;
}


object _44db_insert(object _key_17799, object _data_17800, object _table_name_17801)
{
    object _key_string_17802 = NOVALUE;
    object _data_string_17803 = NOVALUE;
    object _last_part_17804 = NOVALUE;
    object _remaining_17805 = NOVALUE;
    object _key_ptr_17806 = NOVALUE;
    object _data_ptr_17807 = NOVALUE;
    object _records_ptr_17808 = NOVALUE;
    object _nrecs_17809 = NOVALUE;
    object _current_block_17810 = NOVALUE;
    object _size_17811 = NOVALUE;
    object _new_size_17812 = NOVALUE;
    object _key_location_17813 = NOVALUE;
    object _new_block_17814 = NOVALUE;
    object _index_ptr_17815 = NOVALUE;
    object _new_index_ptr_17816 = NOVALUE;
    object _total_recs_17817 = NOVALUE;
    object _r_17818 = NOVALUE;
    object _blocks_17819 = NOVALUE;
    object _new_recs_17820 = NOVALUE;
    object _n_17821 = NOVALUE;
    object _put4_1__tmp_at79_17835 = NOVALUE;
    object _seek_1__tmp_at132_17841 = NOVALUE;
    object _seek_inlined_seek_at_132_17840 = NOVALUE;
    object _pos_inlined_seek_at_129_17839 = NOVALUE;
    object _seek_1__tmp_at174_17849 = NOVALUE;
    object _seek_inlined_seek_at_174_17848 = NOVALUE;
    object _pos_inlined_seek_at_171_17847 = NOVALUE;
    object _put4_1__tmp_at189_17851 = NOVALUE;
    object _seek_1__tmp_at317_17869 = NOVALUE;
    object _seek_inlined_seek_at_317_17868 = NOVALUE;
    object _pos_inlined_seek_at_314_17867 = NOVALUE;
    object _seek_1__tmp_at339_17873 = NOVALUE;
    object _seek_inlined_seek_at_339_17872 = NOVALUE;
    object _where_inlined_where_at_404_17882 = NOVALUE;
    object _seek_1__tmp_at448_17892 = NOVALUE;
    object _seek_inlined_seek_at_448_17891 = NOVALUE;
    object _pos_inlined_seek_at_445_17890 = NOVALUE;
    object _put4_1__tmp_at493_17901 = NOVALUE;
    object _x_inlined_put4_at_490_17900 = NOVALUE;
    object _seek_1__tmp_at530_17904 = NOVALUE;
    object _seek_inlined_seek_at_530_17903 = NOVALUE;
    object _put4_1__tmp_at551_17907 = NOVALUE;
    object _seek_1__tmp_at588_17912 = NOVALUE;
    object _seek_inlined_seek_at_588_17911 = NOVALUE;
    object _pos_inlined_seek_at_585_17910 = NOVALUE;
    object _seek_1__tmp_at690_17937 = NOVALUE;
    object _seek_inlined_seek_at_690_17936 = NOVALUE;
    object _pos_inlined_seek_at_687_17935 = NOVALUE;
    object _s_inlined_putn_at_751_17946 = NOVALUE;
    object _seek_1__tmp_at774_17949 = NOVALUE;
    object _seek_inlined_seek_at_774_17948 = NOVALUE;
    object _put4_1__tmp_at796_17953 = NOVALUE;
    object _x_inlined_put4_at_793_17952 = NOVALUE;
    object _seek_1__tmp_at833_17958 = NOVALUE;
    object _seek_inlined_seek_at_833_17957 = NOVALUE;
    object _pos_inlined_seek_at_830_17956 = NOVALUE;
    object _seek_1__tmp_at884_17968 = NOVALUE;
    object _seek_inlined_seek_at_884_17967 = NOVALUE;
    object _pos_inlined_seek_at_881_17966 = NOVALUE;
    object _put4_1__tmp_at899_17970 = NOVALUE;
    object _put4_1__tmp_at927_17972 = NOVALUE;
    object _seek_1__tmp_at980_17978 = NOVALUE;
    object _seek_inlined_seek_at_980_17977 = NOVALUE;
    object _pos_inlined_seek_at_977_17976 = NOVALUE;
    object _put4_1__tmp_at1001_17981 = NOVALUE;
    object _seek_1__tmp_at1038_17986 = NOVALUE;
    object _seek_inlined_seek_at_1038_17985 = NOVALUE;
    object _pos_inlined_seek_at_1035_17984 = NOVALUE;
    object _s_inlined_putn_at_1136_18004 = NOVALUE;
    object _seek_1__tmp_at1173_18009 = NOVALUE;
    object _seek_inlined_seek_at_1173_18008 = NOVALUE;
    object _pos_inlined_seek_at_1170_18007 = NOVALUE;
    object _put4_1__tmp_at1188_18011 = NOVALUE;
    object _9845 = NOVALUE; // 18005 9845
    object _9844 = NOVALUE; // 18002 9844
    object _9843 = NOVALUE; // 18001 9843
    object _9842 = NOVALUE; // 18000 9842
// skipping _9841  name type: 0
// skipping _9840  name type: 0
    object _9839 = NOVALUE; // 17996 9839
    object _9838 = NOVALUE; // 17995 9838
// skipping _9837  name type: 0
    object _9836 = NOVALUE; // 17993 9836
// skipping _9835  name type: 0
    object _9834 = NOVALUE; // 17991 9834
    object _9833 = NOVALUE; // 17990 9833
// skipping _9832  name type: 0
    object _9831 = NOVALUE; // 17987 9831
    object _9830 = NOVALUE; // 17982 9830
// skipping _9829  name type: 0
    object _9828 = NOVALUE; // 17974 9828
    object _9827 = NOVALUE; // 17964 9827
// skipping _9826  name type: 0
    object _9825 = NOVALUE; // 17962 9825
    object _9824 = NOVALUE; // 17961 9824
    object _9823 = NOVALUE; // 17960 9823
    object _9822 = NOVALUE; // 17959 9822
    object _9821 = NOVALUE; // 17954 9821
    object _9820 = NOVALUE; // 17950 9820
    object _9819 = NOVALUE; // 17944 9819
    object _9818 = NOVALUE; // 17943 9818
    object _9817 = NOVALUE; // 17942 9817
// skipping _9816  name type: 0
// skipping _9815  name type: 0
    object _9814 = NOVALUE; // 17938 9814
    object _9813 = NOVALUE; // 17933 9813
    object _9812 = NOVALUE; // 17932 9812
    object _9811 = NOVALUE; // 17931 9811
// skipping _9810  name type: 0
// skipping _9809  name type: 0
    object _9808 = NOVALUE; // 17928 9808
// skipping _9807  name type: 0
// skipping _9806  name type: 0
    object _9805 = NOVALUE; // 17924 9805
    object _9804 = NOVALUE; // 17923 9804
    object _9803 = NOVALUE; // 17922 9803
    object _9802 = NOVALUE; // 17921 9802
// skipping _9799  name type: 0
    object _9798 = NOVALUE; // 17917 9798
    object _9797 = NOVALUE; // 17916 9797
// skipping _9796  name type: 0
    object _9795 = NOVALUE; // 17913 9795
    object _9794 = NOVALUE; // 17908 9794
// skipping _9793  name type: 0
    object _9792 = NOVALUE; // 17898 9792
    object _9791 = NOVALUE; // 17897 9791
    object _9790 = NOVALUE; // 17896 9790
    object _9789 = NOVALUE; // 17895 9789
    object _9788 = NOVALUE; // 17888 9788
    object _9787 = NOVALUE; // 17887 9787
    object _9786 = NOVALUE; // 17886 9786
// skipping _9785  name type: 0
    object _9784 = NOVALUE; // 17884 9784
// skipping _9783  name type: 0
// skipping _9782  name type: 0
    object _9781 = NOVALUE; // 17879 9781
// skipping _9780  name type: 0
// skipping _9779  name type: 0
// skipping _9778  name type: 0
// skipping _9777  name type: 0
    object _9776 = NOVALUE; // 17865 9776
    object _9774 = NOVALUE; // 17863 9774
    object _9773 = NOVALUE; // 17862 9773
// skipping _9772  name type: 0
    object _9771 = NOVALUE; // 17859 9771
    object _9770 = NOVALUE; // 17858 9770
    object _9769 = NOVALUE; // 17857 9769
// skipping _9768  name type: 0
// skipping _9767  name type: 0
    object _9766 = NOVALUE; // 17854 9766
// skipping _9765  name type: 0
    object _9764 = NOVALUE; // 17845 9764
// skipping _9763  name type: 0
// skipping _9762  name type: 0
    object _9761 = NOVALUE; // 17842 9761
    object _9760 = NOVALUE; // 17837 9760
// skipping _9759  name type: 0
    object _9758 = NOVALUE; // 17832 9758
    object _9757 = NOVALUE; // 17831 9757
// skipping _9756  name type: 0
    object _9755 = NOVALUE; // 17828 9755
// skipping _9754  name type: 0
// skipping _9753  name type: 0
// skipping _9752  name type: 0
// skipping _9751  name type: 0
// skipping _9750  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_insert pc: 1 op: STARTLINE (58)

    /** eds.e:2071		key_location = db_find_key(key, table_name) -- Let it set the current table if necessary*/
    // SubProg db_insert pc: 3 op: PROC (27)
    Ref(_key_17799);
    RefDS(_table_name_17801);
    _0 = _key_location_17813;
    _key_location_17813 = _44db_find_key(_key_17799, _table_name_17801);
    DeRef(_0);
    // SubProg db_insert pc: 8 op: STARTLINE (58)

    /** eds.e:2073		if key_location > 0 then*/
    // SubProg db_insert pc: 10 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _key_location_17813, 0)){
        goto L1; // [10] 21
    }
    // SubProg db_insert pc: 14 op: STARTLINE (58)

    /** eds.e:2075			return DB_EXISTS_ALREADY*/
    // SubProg db_insert pc: 16 op: RETURNF (28)

// Exiting block BLOCK: db_insert

// block var key_17799
    DeRef(_key_17799);

// block var data_17800

// block var table_name_17801
    DeRefDS(_table_name_17801);

// block var key_string_17802
    DeRef(_key_string_17802);

// block var data_string_17803
    DeRef(_data_string_17803);

// block var last_part_17804
    DeRef(_last_part_17804);

// block var remaining_17805
    DeRef(_remaining_17805);

// block var key_ptr_17806
    DeRef(_key_ptr_17806);

// block var data_ptr_17807
    DeRef(_data_ptr_17807);

// block var records_ptr_17808
    DeRef(_records_ptr_17808);

// block var nrecs_17809
    DeRef(_nrecs_17809);

// block var current_block_17810
    DeRef(_current_block_17810);

// block var size_17811
    DeRef(_size_17811);

// block var new_size_17812
    DeRef(_new_size_17812);

// block var key_location_17813
    DeRef(_key_location_17813);

// block var new_block_17814
    DeRef(_new_block_17814);

// block var index_ptr_17815
    DeRef(_index_ptr_17815);

// block var new_index_ptr_17816
    DeRef(_new_index_ptr_17816);

// block var total_recs_17817
    DeRef(_total_recs_17817);

// block var r_17818

// block var blocks_17819

// block var new_recs_17820

// block var n_17821
    return -2;
    // SubProg db_insert pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 17797 op: 159
    // SubProg db_insert pc: 21 op: STARTLINE (58)

    /** eds.e:2077		key_location = -key_location*/
    // SubProg db_insert pc: 23 op: UMINUS (12)
    _0 = _key_location_17813;
    if (IS_ATOM_INT(_key_location_17813)) {
        if ((uintptr_t)_key_location_17813 == (uintptr_t)HIGH_BITS){
            _key_location_17813 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _key_location_17813 = - _key_location_17813;
        }
    }
    else {
        _key_location_17813 = unary_op(UMINUS, _key_location_17813);
    }
    DeRef(_0);
    // SubProg db_insert pc: 26 op: STARTLINE (58)

    /** eds.e:2079		data_string = compress(data)*/
    // SubProg db_insert pc: 28 op: PROC (27)
    _0 = _data_string_17803;
    _data_string_17803 = _44compress(_data_17800);
    DeRef(_0);
    // SubProg db_insert pc: 32 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 34 op: STARTLINE (58)

    /** eds.e:2080		key_string  = compress(key)*/
    // SubProg db_insert pc: 36 op: PROC (27)
    Ref(_key_17799);
    _0 = _key_string_17802;
    _key_string_17802 = _44compress(_key_17799);
    DeRef(_0);
    // SubProg db_insert pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 42 op: STARTLINE (58)

    /** eds.e:2082		data_ptr = db_allocate(length(data_string))*/
    // SubProg db_insert pc: 44 op: LENGTH (42)
    if (IS_SEQUENCE(_data_string_17803)){
            _9755 = SEQ_PTR(_data_string_17803)->length;
    }
    else {
        _9755 = 1;
    }
    // SubProg db_insert pc: 47 op: PROC (27)
    _0 = _data_ptr_17807;
    _data_ptr_17807 = _44db_allocate(_9755);
    DeRef(_0);
    _9755 = NOVALUE;
    // SubProg db_insert pc: 51 op: STARTLINE (58)

    /** eds.e:2083		putn(data_string)*/
    // SubProg db_insert pc: 53 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 57 op: PUTS (44)
    EPuts(_44current_db_16088, _data_string_17803); // DJP 
    // SubProg db_insert pc: 60 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 62 op: ELSE (23)
    goto L2; // [62] 65
    // SubProg db_insert pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 17797 op: 159
    // SubProg db_insert pc: 65 op: STARTLINE (58)

    /** eds.e:2085		key_ptr = db_allocate(4+length(key_string))*/
    // SubProg db_insert pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_key_string_17802)){
            _9757 = SEQ_PTR(_key_string_17802)->length;
    }
    else {
        _9757 = 1;
    }
    // SubProg db_insert pc: 70 op: PLUS (11)
    _9758 = 4 + _9757;
    _9757 = NOVALUE;
    // SubProg db_insert pc: 74 op: PROC (27)
    _0 = _key_ptr_17806;
    _key_ptr_17806 = _44db_allocate(_9758);
    DeRef(_0);
    _9758 = NOVALUE;
    // SubProg db_insert pc: 78 op: STARTLINE (58)

    /** eds.e:2086		put4(data_ptr)*/
    // SubProg db_insert pc: 80 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 84 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_data_ptr_17807)) {
        *poke4_addr = (uint32_t)_data_ptr_17807;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_data_ptr_17807)->dbl;
    }
    // SubProg db_insert pc: 87 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 93 op: PEEK (127)
    DeRefi(_put4_1__tmp_at79_17835);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at79_17835 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 96 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at79_17835); // DJP 
    // SubProg db_insert pc: 99 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 101 op: ELSE (23)
    goto L3; // [101] 104
    // SubProg db_insert pc: 103 op: NOP1 (159)
L3: // addr: 104 pc: 103 sub: 17797 op: 159
    // SubProg db_insert pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 79

// block var put4_1__tmp_at79_17835
    DeRefi(_put4_1__tmp_at79_17835);
    _put4_1__tmp_at79_17835 = NOVALUE;
    // SubProg db_insert pc: 106 op: STARTLINE (58)

    /** eds.e:2087		putn(key_string)*/
    // SubProg db_insert pc: 108 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 112 op: PUTS (44)
    EPuts(_44current_db_16088, _key_string_17802); // DJP 
    // SubProg db_insert pc: 115 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 117 op: ELSE (23)
    goto L4; // [117] 120
    // SubProg db_insert pc: 119 op: NOP1 (159)
L4: // addr: 120 pc: 119 sub: 17797 op: 159
    // SubProg db_insert pc: 120 op: STARTLINE (58)

    /** eds.e:2091		io:seek(current_db, current_table_pos+4)*/
    // SubProg db_insert pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 126 op: PLUS (11)
    if (IS_ATOM_INT(_44current_table_pos_16089)) {
        _9760 = _44current_table_pos_16089 + 4;
        if ((object)((uintptr_t)_9760 + (uintptr_t)HIGH_BITS) >= 0){
            _9760 = NewDouble((eudouble)_9760);
        }
    }
    else {
        _9760 = NewDouble(DBL_PTR(_44current_table_pos_16089)->dbl + (eudouble)4);
    }
    // SubProg db_insert pc: 130 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_129_17839);
    _pos_inlined_seek_at_129_17839 = _9760;
    _9760 = NOVALUE;
    // SubProg db_insert pc: 133 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 135 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_129_17839);
    DeRef(_seek_1__tmp_at132_17841);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_129_17839;
    _seek_1__tmp_at132_17841 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 139 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_132_17840 = machine(19, _seek_1__tmp_at132_17841);
    // SubProg db_insert pc: 143 op: NOP1 (159)
    // SubProg db_insert pc: 144 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 129

// block var pos_inlined_seek_at_129_17839
    DeRef(_pos_inlined_seek_at_129_17839);
    _pos_inlined_seek_at_129_17839 = NOVALUE;

// block var seek_1__tmp_at132_17841
    DeRef(_seek_1__tmp_at132_17841);
    _seek_1__tmp_at132_17841 = NOVALUE;
    // SubProg db_insert pc: 146 op: STARTLINE (58)

    /** eds.e:2092		total_recs = get4()+1*/
    // SubProg db_insert pc: 148 op: PROC (27)
    _9761 = _44get4();
    // SubProg db_insert pc: 151 op: PLUS1 (93)
    DeRef(_total_recs_17817);
    if (IS_ATOM_INT(_9761)) {
        _total_recs_17817 = _9761 + 1;
        if (_total_recs_17817 > MAXINT){
            _total_recs_17817 = NewDouble((eudouble)_total_recs_17817);
        }
    }
    else
    _total_recs_17817 = binary_op(PLUS, 1, _9761);
    DeRef(_9761);
    _9761 = NOVALUE;
    // SubProg db_insert pc: 155 op: STARTLINE (58)

    /** eds.e:2093		blocks = get4()*/
    // SubProg db_insert pc: 157 op: PROC (27)
    _blocks_17819 = _44get4();
    // SubProg db_insert pc: 160 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_blocks_17819)) {
        _1 = (object)(DBL_PTR(_blocks_17819)->dbl);
        DeRefDS(_blocks_17819);
        _blocks_17819 = _1;
    }
    // SubProg db_insert pc: 162 op: STARTLINE (58)

    /** eds.e:2094		io:seek(current_db, current_table_pos+4)*/
    // SubProg db_insert pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 168 op: PLUS (11)
    if (IS_ATOM_INT(_44current_table_pos_16089)) {
        _9764 = _44current_table_pos_16089 + 4;
        if ((object)((uintptr_t)_9764 + (uintptr_t)HIGH_BITS) >= 0){
            _9764 = NewDouble((eudouble)_9764);
        }
    }
    else {
        _9764 = NewDouble(DBL_PTR(_44current_table_pos_16089)->dbl + (eudouble)4);
    }
    // SubProg db_insert pc: 172 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_171_17847);
    _pos_inlined_seek_at_171_17847 = _9764;
    _9764 = NOVALUE;
    // SubProg db_insert pc: 175 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 177 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_171_17847);
    DeRef(_seek_1__tmp_at174_17849);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_171_17847;
    _seek_1__tmp_at174_17849 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 181 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_174_17848 = machine(19, _seek_1__tmp_at174_17849);
    // SubProg db_insert pc: 185 op: NOP1 (159)
    // SubProg db_insert pc: 186 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 171

// block var pos_inlined_seek_at_171_17847
    DeRef(_pos_inlined_seek_at_171_17847);
    _pos_inlined_seek_at_171_17847 = NOVALUE;

// block var seek_1__tmp_at174_17849
    DeRef(_seek_1__tmp_at174_17849);
    _seek_1__tmp_at174_17849 = NOVALUE;
    // SubProg db_insert pc: 188 op: STARTLINE (58)

    /** eds.e:2095		put4(total_recs)*/
    // SubProg db_insert pc: 190 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 194 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_total_recs_17817)) {
        *poke4_addr = (uint32_t)_total_recs_17817;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_total_recs_17817)->dbl;
    }
    // SubProg db_insert pc: 197 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 203 op: PEEK (127)
    DeRefi(_put4_1__tmp_at189_17851);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at189_17851 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 206 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at189_17851); // DJP 
    // SubProg db_insert pc: 209 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 211 op: ELSE (23)
    goto L5; // [211] 214
    // SubProg db_insert pc: 213 op: NOP1 (159)
L5: // addr: 214 pc: 213 sub: 17797 op: 159
    // SubProg db_insert pc: 214 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 189

// block var put4_1__tmp_at189_17851
    DeRefi(_put4_1__tmp_at189_17851);
    _put4_1__tmp_at189_17851 = NOVALUE;
    // SubProg db_insert pc: 216 op: STARTLINE (58)

    /** eds.e:2097		n = length(key_pointers)*/
    // SubProg db_insert pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 220 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _n_17821 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _n_17821 = 1;
    }
    // SubProg db_insert pc: 223 op: STARTLINE (58)

    /** eds.e:2098		if key_location >= floor(n/2) then*/
    // SubProg db_insert pc: 225 op: FLOOR_DIV2 (66)
    _9766 = _n_17821 >> 1;
    // SubProg db_insert pc: 229 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _key_location_17813, _9766)){
        _9766 = NOVALUE;
        goto L6; // [229] 268
    }
    DeRef(_9766);
    _9766 = NOVALUE;
    // SubProg db_insert pc: 233 op: STARTLINE (58)

    /** eds.e:2100			key_pointers = append(key_pointers, 0)*/
    // SubProg db_insert pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 237 op: APPEND (35)
    Append(&_44key_pointers_16095, _44key_pointers_16095, 0);
    // SubProg db_insert pc: 241 op: STARTLINE (58)

    /** eds.e:2102			key_pointers[key_location+1..n+1] = key_pointers[key_location..n]*/
    // SubProg db_insert pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 245 op: PLUS1 (93)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9769 = _key_location_17813 + 1;
        if (_9769 > MAXINT){
            _9769 = NewDouble((eudouble)_9769);
        }
    }
    else
    _9769 = binary_op(PLUS, 1, _key_location_17813);
    // SubProg db_insert pc: 249 op: PLUS1 (93)
    _9770 = _n_17821 + 1;
    // SubProg db_insert pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 255 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_9771;
    RHS_Slice(_44key_pointers_16095, _key_location_17813, _n_17821);
    // SubProg db_insert pc: 260 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_44key_pointers_16095;
    AssignSlice(_9769, _9770, _9771);
    DeRef(_9769);
    _9769 = NOVALUE;
    _9770 = NOVALUE;
    DeRefDS(_9771);
    _9771 = NOVALUE;
    // SubProg db_insert pc: 265 op: ELSE (23)
    goto L7; // [265] 297
    // SubProg db_insert pc: 267 op: NOP1 (159)
L6: // addr: 268 pc: 267 sub: 17797 op: 159
    // SubProg db_insert pc: 268 op: STARTLINE (58)

    /** eds.e:2105			key_pointers = prepend(key_pointers, 0)*/
    // SubProg db_insert pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 272 op: PREPEND (57)
    Prepend(&_44key_pointers_16095, _44key_pointers_16095, 0);
    // SubProg db_insert pc: 276 op: STARTLINE (58)

    /** eds.e:2107			key_pointers[1..key_location-1] = key_pointers[2..key_location]*/
    // SubProg db_insert pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 280 op: MINUS (10)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9773 = _key_location_17813 - 1;
        if ((object)((uintptr_t)_9773 +(uintptr_t) HIGH_BITS) >= 0){
            _9773 = NewDouble((eudouble)_9773);
        }
    }
    else {
        _9773 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)1);
    }
    // SubProg db_insert pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 286 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_9774;
    RHS_Slice(_44key_pointers_16095, 2, _key_location_17813);
    // SubProg db_insert pc: 291 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_44key_pointers_16095;
    AssignSlice(1, _9773, _9774);
    DeRef(_9773);
    _9773 = NOVALUE;
    DeRefDS(_9774);
    _9774 = NOVALUE;
    // SubProg db_insert pc: 296 op: NOP1 (159)
L7: // addr: 297 pc: 296 sub: 17797 op: 159
    // SubProg db_insert pc: 297 op: STARTLINE (58)

    /** eds.e:2109		key_pointers[key_location] = key_ptr*/
    // SubProg db_insert pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 301 op: ASSIGN_SUBS (16)
    Ref(_key_ptr_17806);
    _2 = (object)SEQ_PTR(_44key_pointers_16095);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _44key_pointers_16095 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_key_location_17813))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_key_location_17813)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _key_location_17813);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _key_ptr_17806;
    DeRef(_1);
    // SubProg db_insert pc: 305 op: STARTLINE (58)

    /** eds.e:2111		io:seek(current_db, current_table_pos+12) -- get after put - seek is necessary*/
    // SubProg db_insert pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 311 op: PLUS (11)
    if (IS_ATOM_INT(_44current_table_pos_16089)) {
        _9776 = _44current_table_pos_16089 + 12;
        if ((object)((uintptr_t)_9776 + (uintptr_t)HIGH_BITS) >= 0){
            _9776 = NewDouble((eudouble)_9776);
        }
    }
    else {
        _9776 = NewDouble(DBL_PTR(_44current_table_pos_16089)->dbl + (eudouble)12);
    }
    // SubProg db_insert pc: 315 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_314_17867);
    _pos_inlined_seek_at_314_17867 = _9776;
    _9776 = NOVALUE;
    // SubProg db_insert pc: 318 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 320 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_314_17867);
    DeRef(_seek_1__tmp_at317_17869);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_314_17867;
    _seek_1__tmp_at317_17869 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 324 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_317_17868 = machine(19, _seek_1__tmp_at317_17869);
    // SubProg db_insert pc: 328 op: NOP1 (159)
    // SubProg db_insert pc: 329 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 314

// block var pos_inlined_seek_at_314_17867
    DeRef(_pos_inlined_seek_at_314_17867);
    _pos_inlined_seek_at_314_17867 = NOVALUE;

// block var seek_1__tmp_at317_17869
    DeRef(_seek_1__tmp_at317_17869);
    _seek_1__tmp_at317_17869 = NOVALUE;
    // SubProg db_insert pc: 331 op: STARTLINE (58)

    /** eds.e:2112		index_ptr = get4()*/
    // SubProg db_insert pc: 333 op: PROC (27)
    _0 = _index_ptr_17815;
    _index_ptr_17815 = _44get4();
    DeRef(_0);
    // SubProg db_insert pc: 336 op: STARTLINE (58)

    /** eds.e:2114		io:seek(current_db, index_ptr)*/
    // SubProg db_insert pc: 338 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 340 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 342 op: RIGHT_BRACE_2 (85)
    Ref(_index_ptr_17815);
    DeRef(_seek_1__tmp_at339_17873);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _index_ptr_17815;
    _seek_1__tmp_at339_17873 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 346 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_339_17872 = machine(19, _seek_1__tmp_at339_17873);
    // SubProg db_insert pc: 350 op: NOP1 (159)
    // SubProg db_insert pc: 351 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 339

// block var seek_1__tmp_at339_17873
    DeRef(_seek_1__tmp_at339_17873);
    _seek_1__tmp_at339_17873 = NOVALUE;
    // SubProg db_insert pc: 353 op: STARTLINE (58)

    /** eds.e:2115		r = 0*/
    // SubProg db_insert pc: 355 op: ASSIGN_I (113)
    _r_17818 = 0;
    // SubProg db_insert pc: 358 op: STARTLINE (58)

    /** eds.e:2116		while TRUE do*/
    // SubProg db_insert pc: 360 op: NOP2 (110)
    // SubProg db_insert pc: 362 op: NOPWHILE (158)
L8: // addr: 363 pc: 362 sub: 17797 op: 158
    // SubProg db_insert pc: 363 op: STARTLINE (58)

    /** eds.e:2117			nrecs = get4()*/
    // SubProg db_insert pc: 365 op: PROC (27)
    _0 = _nrecs_17809;
    _nrecs_17809 = _44get4();
    DeRef(_0);
    // SubProg db_insert pc: 368 op: STARTLINE (58)

    /** eds.e:2118			records_ptr = get4()*/
    // SubProg db_insert pc: 370 op: PROC (27)
    _0 = _records_ptr_17808;
    _records_ptr_17808 = _44get4();
    DeRef(_0);
    // SubProg db_insert pc: 373 op: STARTLINE (58)

    /** eds.e:2119			r += nrecs*/
    // SubProg db_insert pc: 375 op: PLUS (11)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _r_17818 = _r_17818 + _nrecs_17809;
    }
    else {
        _r_17818 = NewDouble((eudouble)_r_17818 + DBL_PTR(_nrecs_17809)->dbl);
    }
    // SubProg db_insert pc: 379 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_r_17818)) {
        _1 = (object)(DBL_PTR(_r_17818)->dbl);
        DeRefDS(_r_17818);
        _r_17818 = _1;
    }
    // SubProg db_insert pc: 381 op: STARTLINE (58)

    /** eds.e:2120			if r + 1 >= key_location then*/
    // SubProg db_insert pc: 383 op: PLUS1 (93)
    _9781 = _r_17818 + 1;
    if (_9781 > MAXINT){
        _9781 = NewDouble((eudouble)_9781);
    }
    // SubProg db_insert pc: 387 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _9781, _key_location_17813)){
        DeRef(_9781);
        _9781 = NOVALUE;
        goto L8; // [387] 363
    }
    DeRef(_9781);
    _9781 = NOVALUE;
    // SubProg db_insert pc: 391 op: STARTLINE (58)

    /** eds.e:2121				exit*/
    // SubProg db_insert pc: 393 op: EXIT (61)
    goto L9; // [393] 401
    // SubProg db_insert pc: 395 op: NOP1 (159)
    // SubProg db_insert pc: 396 op: STARTLINE (58)

    /** eds.e:2123		end while*/
    // SubProg db_insert pc: 398 op: ENDWHILE (22)
    goto L8; // [398] 363
    // SubProg db_insert pc: 400 op: NOP1 (159)
L9: // addr: 401 pc: 400 sub: 17797 op: 159
    // SubProg db_insert pc: 401 op: STARTLINE (58)

    /** eds.e:2125		current_block = io:where(current_db)-8*/
    // SubProg db_insert pc: 403 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 405 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg db_insert pc: 407 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_404_17882);
    _where_inlined_where_at_404_17882 = machine(20, _44current_db_16088);
    // SubProg db_insert pc: 411 op: NOP1 (159)
    // SubProg db_insert pc: 412 op: MINUS (10)
    DeRef(_current_block_17810);
    if (IS_ATOM_INT(_where_inlined_where_at_404_17882)) {
        _current_block_17810 = _where_inlined_where_at_404_17882 - 8;
        if ((object)((uintptr_t)_current_block_17810 +(uintptr_t) HIGH_BITS) >= 0){
            _current_block_17810 = NewDouble((eudouble)_current_block_17810);
        }
    }
    else {
        _current_block_17810 = NewDouble(DBL_PTR(_where_inlined_where_at_404_17882)->dbl - (eudouble)8);
    }
    // SubProg db_insert pc: 416 op: STARTLINE (58)

    /** eds.e:2127		key_location -= (r-nrecs)*/
    // SubProg db_insert pc: 418 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_insert pc: 420 op: MINUS (10)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _9784 = _r_17818 - _nrecs_17809;
        if ((object)((uintptr_t)_9784 +(uintptr_t) HIGH_BITS) >= 0){
            _9784 = NewDouble((eudouble)_9784);
        }
    }
    else {
        _9784 = NewDouble((eudouble)_r_17818 - DBL_PTR(_nrecs_17809)->dbl);
    }
    // SubProg db_insert pc: 424 op: MINUS (10)
    _0 = _key_location_17813;
    if (IS_ATOM_INT(_key_location_17813) && IS_ATOM_INT(_9784)) {
        _key_location_17813 = _key_location_17813 - _9784;
        if ((object)((uintptr_t)_key_location_17813 +(uintptr_t) HIGH_BITS) >= 0){
            _key_location_17813 = NewDouble((eudouble)_key_location_17813);
        }
    }
    else {
        if (IS_ATOM_INT(_key_location_17813)) {
            _key_location_17813 = NewDouble((eudouble)_key_location_17813 - DBL_PTR(_9784)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9784)) {
                _key_location_17813 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)_9784);
            }
            else
            _key_location_17813 = NewDouble(DBL_PTR(_key_location_17813)->dbl - DBL_PTR(_9784)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_9784);
    _9784 = NOVALUE;
    // SubProg db_insert pc: 428 op: STARTLINE (58)

    /** eds.e:2129		io:seek(current_db, records_ptr+4*(key_location-1))*/
    // SubProg db_insert pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 432 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_insert pc: 434 op: MINUS (10)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9786 = _key_location_17813 - 1;
        if ((object)((uintptr_t)_9786 +(uintptr_t) HIGH_BITS) >= 0){
            _9786 = NewDouble((eudouble)_9786);
        }
    }
    else {
        _9786 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)1);
    }
    // SubProg db_insert pc: 438 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9786)) {
        if (_9786 <= INT15 && _9786 >= -INT15){
            _9787 = 4 * _9786;
        }
        else{
            _9787 = NewDouble(4 * (eudouble)_9786);
        }
    }
    else {
        _9787 = NewDouble((eudouble)4 * DBL_PTR(_9786)->dbl);
    }
    DeRef(_9786);
    _9786 = NOVALUE;
    // SubProg db_insert pc: 442 op: PLUS (11)
    if (IS_ATOM_INT(_records_ptr_17808) && IS_ATOM_INT(_9787)) {
        _9788 = _records_ptr_17808 + _9787;
        if ((object)((uintptr_t)_9788 + (uintptr_t)HIGH_BITS) >= 0){
            _9788 = NewDouble((eudouble)_9788);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_17808)) {
            _9788 = NewDouble((eudouble)_records_ptr_17808 + DBL_PTR(_9787)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9787)) {
                _9788 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + (eudouble)_9787);
            }
            else
            _9788 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + DBL_PTR(_9787)->dbl);
        }
    }
    DeRef(_9787);
    _9787 = NOVALUE;
    // SubProg db_insert pc: 446 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_445_17890);
    _pos_inlined_seek_at_445_17890 = _9788;
    _9788 = NOVALUE;
    // SubProg db_insert pc: 449 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 451 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_445_17890);
    DeRef(_seek_1__tmp_at448_17892);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_445_17890;
    _seek_1__tmp_at448_17892 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 455 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_448_17891 = machine(19, _seek_1__tmp_at448_17892);
    // SubProg db_insert pc: 459 op: NOP1 (159)
    // SubProg db_insert pc: 460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 445

// block var pos_inlined_seek_at_445_17890
    DeRef(_pos_inlined_seek_at_445_17890);
    _pos_inlined_seek_at_445_17890 = NOVALUE;

// block var seek_1__tmp_at448_17892
    DeRef(_seek_1__tmp_at448_17892);
    _seek_1__tmp_at448_17892 = NOVALUE;
    // SubProg db_insert pc: 462 op: STARTLINE (58)

    /** eds.e:2130		for i = key_location to nrecs+1 do*/
    // SubProg db_insert pc: 464 op: PLUS1 (93)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _9789 = _nrecs_17809 + 1;
        if (_9789 > MAXINT){
            _9789 = NewDouble((eudouble)_9789);
        }
    }
    else
    _9789 = binary_op(PLUS, 1, _nrecs_17809);
    // SubProg db_insert pc: 468 op: FOR (21)
    {
        object _i_17894;
        Ref(_key_location_17813);
        _i_17894 = _key_location_17813;
LA: // addr: 475 pc: 468 sub: 17797 op: 21
        if (binary_op_a(GREATER, _i_17894, _9789)){
            goto LB; // [468] 527
        }
        // SubProg db_insert pc: 475 op: STARTLINE (58)

        /** eds.e:2131			put4(key_pointers[i+r-nrecs])*/
        // SubProg db_insert pc: 477 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 479 op: PLUS (11)
        if (IS_ATOM_INT(_i_17894)) {
            _9790 = _i_17894 + _r_17818;
            if ((object)((uintptr_t)_9790 + (uintptr_t)HIGH_BITS) >= 0){
                _9790 = NewDouble((eudouble)_9790);
            }
        }
        else {
            _9790 = NewDouble(DBL_PTR(_i_17894)->dbl + (eudouble)_r_17818);
        }
        // SubProg db_insert pc: 483 op: MINUS (10)
        if (IS_ATOM_INT(_9790) && IS_ATOM_INT(_nrecs_17809)) {
            _9791 = _9790 - _nrecs_17809;
        }
        else {
            if (IS_ATOM_INT(_9790)) {
                _9791 = NewDouble((eudouble)_9790 - DBL_PTR(_nrecs_17809)->dbl);
            }
            else {
                if (IS_ATOM_INT(_nrecs_17809)) {
                    _9791 = NewDouble(DBL_PTR(_9790)->dbl - (eudouble)_nrecs_17809);
                }
                else
                _9791 = NewDouble(DBL_PTR(_9790)->dbl - DBL_PTR(_nrecs_17809)->dbl);
            }
        }
        DeRef(_9790);
        _9790 = NOVALUE;
        // SubProg db_insert pc: 487 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_44key_pointers_16095);
        if (!IS_ATOM_INT(_9791)){
            _9792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_9791)->dbl));
        }
        else{
            _9792 = (object)*(((s1_ptr)_2)->base + _9791);
        }
        // SubProg db_insert pc: 491 op: ASSIGN (18)
        Ref(_9792);
        DeRef(_x_inlined_put4_at_490_17900);
        _x_inlined_put4_at_490_17900 = _9792;
        _9792 = NOVALUE;
        // SubProg db_insert pc: 494 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_insert pc: 496 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 498 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16130)){
            poke4_addr = (uint32_t *)_44mem0_16130;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_490_17900)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_490_17900;
        }
        else if (IS_ATOM(_x_inlined_put4_at_490_17900)) {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_490_17900)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_x_inlined_put4_at_490_17900);
            _1 = (object)((s1_ptr)_1)->base;
            while (1) {
                _1 += sizeof(object);
                _2 = *((object *)_1);
                if (IS_ATOM_INT(_2)) {
                    *poke4_addr++ = (uint32_t)_2;
                }
                else if (_2 == NOVALUE) {
                    break;
                }
                else {
                    *(object *)poke4_addr++ = (uint32_t)DBL_PTR(_2)->dbl;
                }
            }
        }
        // SubProg db_insert pc: 501 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_insert pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 505 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 507 op: PEEK (127)
        DeRefi(_put4_1__tmp_at493_17901);
        _1 = (object)SEQ_PTR(_44memseq_16365);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at493_17901 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_insert pc: 510 op: PUTS (44)
        EPuts(_44current_db_16088, _put4_1__tmp_at493_17901); // DJP 
        // SubProg db_insert pc: 513 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_insert pc: 515 op: ELSE (23)
        goto LC; // [515] 518
        // SubProg db_insert pc: 517 op: NOP1 (159)
LC: // addr: 518 pc: 517 sub: 17797 op: 159
        // SubProg db_insert pc: 518 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 490

// block var x_inlined_put4_at_490_17900
        DeRef(_x_inlined_put4_at_490_17900);
        _x_inlined_put4_at_490_17900 = NOVALUE;

// block var put4_1__tmp_at493_17901
        DeRefi(_put4_1__tmp_at493_17901);
        _put4_1__tmp_at493_17901 = NOVALUE;
        // SubProg db_insert pc: 520 op: STARTLINE (58)

        /** eds.e:2132		end for*/
        // SubProg db_insert pc: 522 op: ENDFOR_INT_UP1 (54)
        _0 = _i_17894;
        if (IS_ATOM_INT(_i_17894)) {
            _i_17894 = _i_17894 + 1;
            if ((object)((uintptr_t)_i_17894 +(uintptr_t) HIGH_BITS) >= 0){
                _i_17894 = NewDouble((eudouble)_i_17894);
            }
        }
        else {
            _i_17894 = binary_op_a(PLUS, _i_17894, 1);
        }
        DeRef(_0);
        goto LA; // [522] 475
LB: // addr: 527 pc: 522 sub: 17797 op: 54
        ;
        DeRef(_i_17894);
    }
    // SubProg db_insert pc: 527 op: STARTLINE (58)

    /** eds.e:2135		io:seek(current_db, current_block)*/
    // SubProg db_insert pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 531 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 533 op: RIGHT_BRACE_2 (85)
    Ref(_current_block_17810);
    DeRef(_seek_1__tmp_at530_17904);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _current_block_17810;
    _seek_1__tmp_at530_17904 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 537 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_530_17903 = machine(19, _seek_1__tmp_at530_17904);
    // SubProg db_insert pc: 541 op: NOP1 (159)
    // SubProg db_insert pc: 542 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 530

// block var seek_1__tmp_at530_17904
    DeRef(_seek_1__tmp_at530_17904);
    _seek_1__tmp_at530_17904 = NOVALUE;
    // SubProg db_insert pc: 544 op: STARTLINE (58)

    /** eds.e:2136		nrecs += 1*/
    // SubProg db_insert pc: 546 op: PLUS1 (93)
    _0 = _nrecs_17809;
    if (IS_ATOM_INT(_nrecs_17809)) {
        _nrecs_17809 = _nrecs_17809 + 1;
        if (_nrecs_17809 > MAXINT){
            _nrecs_17809 = NewDouble((eudouble)_nrecs_17809);
        }
    }
    else
    _nrecs_17809 = binary_op(PLUS, 1, _nrecs_17809);
    DeRef(_0);
    // SubProg db_insert pc: 550 op: STARTLINE (58)

    /** eds.e:2137		put4(nrecs)*/
    // SubProg db_insert pc: 552 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 556 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_nrecs_17809)) {
        *poke4_addr = (uint32_t)_nrecs_17809;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nrecs_17809)->dbl;
    }
    // SubProg db_insert pc: 559 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 561 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 563 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 565 op: PEEK (127)
    DeRefi(_put4_1__tmp_at551_17907);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at551_17907 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 568 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at551_17907); // DJP 
    // SubProg db_insert pc: 571 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 573 op: ELSE (23)
    goto LD; // [573] 576
    // SubProg db_insert pc: 575 op: NOP1 (159)
LD: // addr: 576 pc: 575 sub: 17797 op: 159
    // SubProg db_insert pc: 576 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 551

// block var put4_1__tmp_at551_17907
    DeRefi(_put4_1__tmp_at551_17907);
    _put4_1__tmp_at551_17907 = NOVALUE;
    // SubProg db_insert pc: 578 op: STARTLINE (58)

    /** eds.e:2140		io:seek(current_db, records_ptr - 4)*/
    // SubProg db_insert pc: 580 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 582 op: MINUS (10)
    if (IS_ATOM_INT(_records_ptr_17808)) {
        _9794 = _records_ptr_17808 - 4;
        if ((object)((uintptr_t)_9794 +(uintptr_t) HIGH_BITS) >= 0){
            _9794 = NewDouble((eudouble)_9794);
        }
    }
    else {
        _9794 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 586 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_585_17910);
    _pos_inlined_seek_at_585_17910 = _9794;
    _9794 = NOVALUE;
    // SubProg db_insert pc: 589 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 591 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_585_17910);
    DeRef(_seek_1__tmp_at588_17912);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_585_17910;
    _seek_1__tmp_at588_17912 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 595 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_588_17911 = machine(19, _seek_1__tmp_at588_17912);
    // SubProg db_insert pc: 599 op: NOP1 (159)
    // SubProg db_insert pc: 600 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 585

// block var pos_inlined_seek_at_585_17910
    DeRef(_pos_inlined_seek_at_585_17910);
    _pos_inlined_seek_at_585_17910 = NOVALUE;

// block var seek_1__tmp_at588_17912
    DeRef(_seek_1__tmp_at588_17912);
    _seek_1__tmp_at588_17912 = NOVALUE;
    // SubProg db_insert pc: 602 op: STARTLINE (58)

    /** eds.e:2141		size = get4() - 4*/
    // SubProg db_insert pc: 604 op: PROC (27)
    _9795 = _44get4();
    // SubProg db_insert pc: 607 op: MINUS (10)
    DeRef(_size_17811);
    if (IS_ATOM_INT(_9795)) {
        _size_17811 = _9795 - 4;
        if ((object)((uintptr_t)_size_17811 +(uintptr_t) HIGH_BITS) >= 0){
            _size_17811 = NewDouble((eudouble)_size_17811);
        }
    }
    else {
        _size_17811 = binary_op(MINUS, _9795, 4);
    }
    DeRef(_9795);
    _9795 = NOVALUE;
    // SubProg db_insert pc: 611 op: STARTLINE (58)

    /** eds.e:2142		if nrecs*4 > size-4 then*/
    // SubProg db_insert pc: 613 op: MULTIPLY (13)
    if (IS_ATOM_INT(_nrecs_17809)) {
        if (_nrecs_17809 == (short)_nrecs_17809){
            _9797 = _nrecs_17809 * 4;
        }
        else{
            _9797 = NewDouble(_nrecs_17809 * (eudouble)4);
        }
    }
    else {
        _9797 = NewDouble(DBL_PTR(_nrecs_17809)->dbl * (eudouble)4);
    }
    // SubProg db_insert pc: 617 op: MINUS (10)
    if (IS_ATOM_INT(_size_17811)) {
        _9798 = _size_17811 - 4;
        if ((object)((uintptr_t)_9798 +(uintptr_t) HIGH_BITS) >= 0){
            _9798 = NewDouble((eudouble)_9798);
        }
    }
    else {
        _9798 = NewDouble(DBL_PTR(_size_17811)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 621 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9797, _9798)){
        DeRef(_9797);
        _9797 = NOVALUE;
        DeRef(_9798);
        _9798 = NOVALUE;
        goto LE; // [621] 1217
    }
    DeRef(_9797);
    _9797 = NOVALUE;
    DeRef(_9798);
    _9798 = NOVALUE;
    // SubProg db_insert pc: 625 op: STARTLINE (58)

    /** eds.e:2150			new_size = 8 * (20 + floor(sqrt(1.5 * total_recs)))*/
    // SubProg db_insert pc: 627 op: MULTIPLY (13)
    if (IS_ATOM_INT(_total_recs_17817)) {
        _9802 = NewDouble(DBL_PTR(_9801)->dbl * (eudouble)_total_recs_17817);
    }
    else
    _9802 = NewDouble(DBL_PTR(_9801)->dbl * DBL_PTR(_total_recs_17817)->dbl);
    // SubProg db_insert pc: 631 op: SQRT (41)
    _9803 = unary_op(SQRT, _9802);
    DeRefDS(_9802);
    _9802 = NOVALUE;
    // SubProg db_insert pc: 634 op: FLOOR (83)
    _9804 = unary_op(FLOOR, _9803);
    DeRefDS(_9803);
    _9803 = NOVALUE;
    // SubProg db_insert pc: 637 op: PLUS (11)
    if (IS_ATOM_INT(_9804)) {
        _9805 = 20 + _9804;
        if ((object)((uintptr_t)_9805 + (uintptr_t)HIGH_BITS) >= 0){
            _9805 = NewDouble((eudouble)_9805);
        }
    }
    else {
        _9805 = binary_op(PLUS, 20, _9804);
    }
    DeRef(_9804);
    _9804 = NOVALUE;
    // SubProg db_insert pc: 641 op: MULTIPLY (13)
    DeRef(_new_size_17812);
    if (IS_ATOM_INT(_9805)) {
        if (_9805 <= INT15 && _9805 >= -INT15){
            _new_size_17812 = 8 * _9805;
        }
        else{
            _new_size_17812 = NewDouble(8 * (eudouble)_9805);
        }
    }
    else {
        _new_size_17812 = binary_op(MULTIPLY, 8, _9805);
    }
    DeRef(_9805);
    _9805 = NOVALUE;
    // SubProg db_insert pc: 645 op: STARTLINE (58)

    /** eds.e:2152			new_recs = floor(new_size/8)*/
    // SubProg db_insert pc: 647 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_new_size_17812)) {
        if (8 > 0 && _new_size_17812 >= 0) {
            _new_recs_17820 = _new_size_17812 / 8;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_new_size_17812 / (eudouble)8);
            _new_recs_17820 = (object)temp_dbl;
        }
    }
    else {
        _2 = binary_op(DIVIDE, _new_size_17812, 8);
        _new_recs_17820 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg db_insert pc: 651 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_recs_17820)) {
        _1 = (object)(DBL_PTR(_new_recs_17820)->dbl);
        DeRefDS(_new_recs_17820);
        _new_recs_17820 = _1;
    }
    // SubProg db_insert pc: 653 op: STARTLINE (58)

    /** eds.e:2153			if new_recs > floor(nrecs/2) then*/
    // SubProg db_insert pc: 655 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _9808 = _nrecs_17809 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _nrecs_17809, 2);
        _9808 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg db_insert pc: 659 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _new_recs_17820, _9808)){
        DeRef(_9808);
        _9808 = NOVALUE;
        goto LF; // [659] 672
    }
    DeRef(_9808);
    _9808 = NOVALUE;
    // SubProg db_insert pc: 663 op: STARTLINE (58)

    /** eds.e:2154				new_recs = floor(nrecs/2)*/
    // SubProg db_insert pc: 665 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _new_recs_17820 = _nrecs_17809 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _nrecs_17809, 2);
        _new_recs_17820 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg db_insert pc: 669 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_recs_17820)) {
        _1 = (object)(DBL_PTR(_new_recs_17820)->dbl);
        DeRefDS(_new_recs_17820);
        _new_recs_17820 = _1;
    }
    // SubProg db_insert pc: 671 op: NOP1 (159)
LF: // addr: 672 pc: 671 sub: 17797 op: 159
    // SubProg db_insert pc: 672 op: STARTLINE (58)

    /** eds.e:2158			io:seek(current_db, records_ptr + (nrecs-new_recs)*4)*/
    // SubProg db_insert pc: 674 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 676 op: MINUS (10)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _9811 = _nrecs_17809 - _new_recs_17820;
        if ((object)((uintptr_t)_9811 +(uintptr_t) HIGH_BITS) >= 0){
            _9811 = NewDouble((eudouble)_9811);
        }
    }
    else {
        _9811 = NewDouble(DBL_PTR(_nrecs_17809)->dbl - (eudouble)_new_recs_17820);
    }
    // SubProg db_insert pc: 680 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9811)) {
        if (_9811 == (short)_9811){
            _9812 = _9811 * 4;
        }
        else{
            _9812 = NewDouble(_9811 * (eudouble)4);
        }
    }
    else {
        _9812 = NewDouble(DBL_PTR(_9811)->dbl * (eudouble)4);
    }
    DeRef(_9811);
    _9811 = NOVALUE;
    // SubProg db_insert pc: 684 op: PLUS (11)
    if (IS_ATOM_INT(_records_ptr_17808) && IS_ATOM_INT(_9812)) {
        _9813 = _records_ptr_17808 + _9812;
        if ((object)((uintptr_t)_9813 + (uintptr_t)HIGH_BITS) >= 0){
            _9813 = NewDouble((eudouble)_9813);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_17808)) {
            _9813 = NewDouble((eudouble)_records_ptr_17808 + DBL_PTR(_9812)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9812)) {
                _9813 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + (eudouble)_9812);
            }
            else
            _9813 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + DBL_PTR(_9812)->dbl);
        }
    }
    DeRef(_9812);
    _9812 = NOVALUE;
    // SubProg db_insert pc: 688 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_687_17935);
    _pos_inlined_seek_at_687_17935 = _9813;
    _9813 = NOVALUE;
    // SubProg db_insert pc: 691 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 693 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_687_17935);
    DeRef(_seek_1__tmp_at690_17937);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_687_17935;
    _seek_1__tmp_at690_17937 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 697 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_690_17936 = machine(19, _seek_1__tmp_at690_17937);
    // SubProg db_insert pc: 701 op: NOP1 (159)
    // SubProg db_insert pc: 702 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 687

// block var pos_inlined_seek_at_687_17935
    DeRef(_pos_inlined_seek_at_687_17935);
    _pos_inlined_seek_at_687_17935 = NOVALUE;

// block var seek_1__tmp_at690_17937
    DeRef(_seek_1__tmp_at690_17937);
    _seek_1__tmp_at690_17937 = NOVALUE;
    // SubProg db_insert pc: 704 op: STARTLINE (58)

    /** eds.e:2159			last_part = io:get_bytes(current_db, new_recs*4)*/
    // SubProg db_insert pc: 706 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 708 op: MULTIPLY (13)
    if (_new_recs_17820 == (short)_new_recs_17820){
        _9814 = _new_recs_17820 * 4;
    }
    else{
        _9814 = NewDouble(_new_recs_17820 * (eudouble)4);
    }
    // SubProg db_insert pc: 712 op: PROC (27)
    _0 = _last_part_17804;
    _last_part_17804 = _19get_bytes(_44current_db_16088, _9814);
    DeRef(_0);
    _9814 = NOVALUE;
    // SubProg db_insert pc: 717 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 719 op: STARTLINE (58)

    /** eds.e:2160			new_block = db_allocate(new_size)*/
    // SubProg db_insert pc: 721 op: PROC (27)
    Ref(_new_size_17812);
    _0 = _new_block_17814;
    _new_block_17814 = _44db_allocate(_new_size_17812);
    DeRef(_0);
    // SubProg db_insert pc: 725 op: STARTLINE (58)

    /** eds.e:2161			putn(last_part)*/
    // SubProg db_insert pc: 727 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 729 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 731 op: PUTS (44)
    EPuts(_44current_db_16088, _last_part_17804); // DJP 
    // SubProg db_insert pc: 734 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 736 op: ELSE (23)
    goto L10; // [736] 739
    // SubProg db_insert pc: 738 op: NOP1 (159)
L10: // addr: 739 pc: 738 sub: 17797 op: 159
    // SubProg db_insert pc: 739 op: STARTLINE (58)

    /** eds.e:2163			putn(repeat(0, new_size-length(last_part)))*/
    // SubProg db_insert pc: 741 op: LENGTH (42)
    if (IS_SEQUENCE(_last_part_17804)){
            _9817 = SEQ_PTR(_last_part_17804)->length;
    }
    else {
        _9817 = 1;
    }
    // SubProg db_insert pc: 744 op: MINUS (10)
    if (IS_ATOM_INT(_new_size_17812)) {
        _9818 = _new_size_17812 - _9817;
    }
    else {
        _9818 = NewDouble(DBL_PTR(_new_size_17812)->dbl - (eudouble)_9817);
    }
    _9817 = NOVALUE;
    // SubProg db_insert pc: 748 op: REPEAT (32)
    _9819 = Repeat(0, _9818);
    DeRef(_9818);
    _9818 = NOVALUE;
    // SubProg db_insert pc: 752 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_751_17946);
    _s_inlined_putn_at_751_17946 = _9819;
    _9819 = NOVALUE;
    // SubProg db_insert pc: 755 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 757 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 759 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 761 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_751_17946); // DJP 
    // SubProg db_insert pc: 764 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 766 op: ELSE (23)
    goto L11; // [766] 769
    // SubProg db_insert pc: 768 op: NOP1 (159)
L11: // addr: 769 pc: 768 sub: 17797 op: 159
    // SubProg db_insert pc: 769 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_insert @ 751

// block var s_inlined_putn_at_751_17946
    DeRefi(_s_inlined_putn_at_751_17946);
    _s_inlined_putn_at_751_17946 = NOVALUE;
    // SubProg db_insert pc: 771 op: STARTLINE (58)

    /** eds.e:2166			io:seek(current_db, current_block)*/
    // SubProg db_insert pc: 773 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 775 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 777 op: RIGHT_BRACE_2 (85)
    Ref(_current_block_17810);
    DeRef(_seek_1__tmp_at774_17949);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _current_block_17810;
    _seek_1__tmp_at774_17949 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 781 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_774_17948 = machine(19, _seek_1__tmp_at774_17949);
    // SubProg db_insert pc: 785 op: NOP1 (159)
    // SubProg db_insert pc: 786 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 774

// block var seek_1__tmp_at774_17949
    DeRef(_seek_1__tmp_at774_17949);
    _seek_1__tmp_at774_17949 = NOVALUE;
    // SubProg db_insert pc: 788 op: STARTLINE (58)

    /** eds.e:2167			put4(nrecs-new_recs)*/
    // SubProg db_insert pc: 790 op: MINUS (10)
    if (IS_ATOM_INT(_nrecs_17809)) {
        _9820 = _nrecs_17809 - _new_recs_17820;
        if ((object)((uintptr_t)_9820 +(uintptr_t) HIGH_BITS) >= 0){
            _9820 = NewDouble((eudouble)_9820);
        }
    }
    else {
        _9820 = NewDouble(DBL_PTR(_nrecs_17809)->dbl - (eudouble)_new_recs_17820);
    }
    // SubProg db_insert pc: 794 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_793_17952);
    _x_inlined_put4_at_793_17952 = _9820;
    _9820 = NOVALUE;
    // SubProg db_insert pc: 797 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 799 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 801 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_793_17952)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_793_17952;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_793_17952)->dbl;
    }
    // SubProg db_insert pc: 804 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 806 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 808 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 810 op: PEEK (127)
    DeRefi(_put4_1__tmp_at796_17953);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at796_17953 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 813 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at796_17953); // DJP 
    // SubProg db_insert pc: 816 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 818 op: ELSE (23)
    goto L12; // [818] 821
    // SubProg db_insert pc: 820 op: NOP1 (159)
L12: // addr: 821 pc: 820 sub: 17797 op: 159
    // SubProg db_insert pc: 821 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 793

// block var x_inlined_put4_at_793_17952
    DeRef(_x_inlined_put4_at_793_17952);
    _x_inlined_put4_at_793_17952 = NOVALUE;

// block var put4_1__tmp_at796_17953
    DeRefi(_put4_1__tmp_at796_17953);
    _put4_1__tmp_at796_17953 = NOVALUE;
    // SubProg db_insert pc: 823 op: STARTLINE (58)

    /** eds.e:2170			io:seek(current_db, current_block+8)*/
    // SubProg db_insert pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 827 op: PLUS (11)
    if (IS_ATOM_INT(_current_block_17810)) {
        _9821 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9821 + (uintptr_t)HIGH_BITS) >= 0){
            _9821 = NewDouble((eudouble)_9821);
        }
    }
    else {
        _9821 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 831 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_830_17956);
    _pos_inlined_seek_at_830_17956 = _9821;
    _9821 = NOVALUE;
    // SubProg db_insert pc: 834 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 836 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_830_17956);
    DeRef(_seek_1__tmp_at833_17958);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_830_17956;
    _seek_1__tmp_at833_17958 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 840 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_833_17957 = machine(19, _seek_1__tmp_at833_17958);
    // SubProg db_insert pc: 844 op: NOP1 (159)
    // SubProg db_insert pc: 845 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 830

// block var pos_inlined_seek_at_830_17956
    DeRef(_pos_inlined_seek_at_830_17956);
    _pos_inlined_seek_at_830_17956 = NOVALUE;

// block var seek_1__tmp_at833_17958
    DeRef(_seek_1__tmp_at833_17958);
    _seek_1__tmp_at833_17958 = NOVALUE;
    // SubProg db_insert pc: 847 op: STARTLINE (58)

    /** eds.e:2171			remaining = io:get_bytes(current_db, index_ptr+blocks*8-(current_block+8))*/
    // SubProg db_insert pc: 849 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 851 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9822 = _blocks_17819 * 8;
    }
    else{
        _9822 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 855 op: PLUS (11)
    if (IS_ATOM_INT(_index_ptr_17815) && IS_ATOM_INT(_9822)) {
        _9823 = _index_ptr_17815 + _9822;
        if ((object)((uintptr_t)_9823 + (uintptr_t)HIGH_BITS) >= 0){
            _9823 = NewDouble((eudouble)_9823);
        }
    }
    else {
        if (IS_ATOM_INT(_index_ptr_17815)) {
            _9823 = NewDouble((eudouble)_index_ptr_17815 + DBL_PTR(_9822)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9822)) {
                _9823 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl + (eudouble)_9822);
            }
            else
            _9823 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl + DBL_PTR(_9822)->dbl);
        }
    }
    DeRef(_9822);
    _9822 = NOVALUE;
    // SubProg db_insert pc: 859 op: PLUS (11)
    if (IS_ATOM_INT(_current_block_17810)) {
        _9824 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9824 + (uintptr_t)HIGH_BITS) >= 0){
            _9824 = NewDouble((eudouble)_9824);
        }
    }
    else {
        _9824 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 863 op: MINUS (10)
    if (IS_ATOM_INT(_9823) && IS_ATOM_INT(_9824)) {
        _9825 = _9823 - _9824;
        if ((object)((uintptr_t)_9825 +(uintptr_t) HIGH_BITS) >= 0){
            _9825 = NewDouble((eudouble)_9825);
        }
    }
    else {
        if (IS_ATOM_INT(_9823)) {
            _9825 = NewDouble((eudouble)_9823 - DBL_PTR(_9824)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9824)) {
                _9825 = NewDouble(DBL_PTR(_9823)->dbl - (eudouble)_9824);
            }
            else
            _9825 = NewDouble(DBL_PTR(_9823)->dbl - DBL_PTR(_9824)->dbl);
        }
    }
    DeRef(_9823);
    _9823 = NOVALUE;
    DeRef(_9824);
    _9824 = NOVALUE;
    // SubProg db_insert pc: 867 op: PROC (27)
    _0 = _remaining_17805;
    _remaining_17805 = _19get_bytes(_44current_db_16088, _9825);
    DeRef(_0);
    _9825 = NOVALUE;
    // SubProg db_insert pc: 872 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 874 op: STARTLINE (58)

    /** eds.e:2172			io:seek(current_db, current_block+8)*/
    // SubProg db_insert pc: 876 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 878 op: PLUS (11)
    if (IS_ATOM_INT(_current_block_17810)) {
        _9827 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9827 + (uintptr_t)HIGH_BITS) >= 0){
            _9827 = NewDouble((eudouble)_9827);
        }
    }
    else {
        _9827 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 882 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_881_17966);
    _pos_inlined_seek_at_881_17966 = _9827;
    _9827 = NOVALUE;
    // SubProg db_insert pc: 885 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 887 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_881_17966);
    DeRef(_seek_1__tmp_at884_17968);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_881_17966;
    _seek_1__tmp_at884_17968 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 891 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_884_17967 = machine(19, _seek_1__tmp_at884_17968);
    // SubProg db_insert pc: 895 op: NOP1 (159)
    // SubProg db_insert pc: 896 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 881

// block var pos_inlined_seek_at_881_17966
    DeRef(_pos_inlined_seek_at_881_17966);
    _pos_inlined_seek_at_881_17966 = NOVALUE;

// block var seek_1__tmp_at884_17968
    DeRef(_seek_1__tmp_at884_17968);
    _seek_1__tmp_at884_17968 = NOVALUE;
    // SubProg db_insert pc: 898 op: STARTLINE (58)

    /** eds.e:2173			put4(new_recs)*/
    // SubProg db_insert pc: 900 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 902 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 904 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)_new_recs_17820;
    // SubProg db_insert pc: 907 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 909 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 911 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 913 op: PEEK (127)
    DeRefi(_put4_1__tmp_at899_17970);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at899_17970 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 916 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at899_17970); // DJP 
    // SubProg db_insert pc: 919 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 921 op: ELSE (23)
    goto L13; // [921] 924
    // SubProg db_insert pc: 923 op: NOP1 (159)
L13: // addr: 924 pc: 923 sub: 17797 op: 159
    // SubProg db_insert pc: 924 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 899

// block var put4_1__tmp_at899_17970
    DeRefi(_put4_1__tmp_at899_17970);
    _put4_1__tmp_at899_17970 = NOVALUE;
    // SubProg db_insert pc: 926 op: STARTLINE (58)

    /** eds.e:2174			put4(new_block)*/
    // SubProg db_insert pc: 928 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 930 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 932 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_new_block_17814)) {
        *poke4_addr = (uint32_t)_new_block_17814;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_new_block_17814)->dbl;
    }
    // SubProg db_insert pc: 935 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 937 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 939 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 941 op: PEEK (127)
    DeRefi(_put4_1__tmp_at927_17972);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at927_17972 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 944 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at927_17972); // DJP 
    // SubProg db_insert pc: 947 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 949 op: ELSE (23)
    goto L14; // [949] 952
    // SubProg db_insert pc: 951 op: NOP1 (159)
L14: // addr: 952 pc: 951 sub: 17797 op: 159
    // SubProg db_insert pc: 952 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 927

// block var put4_1__tmp_at927_17972
    DeRefi(_put4_1__tmp_at927_17972);
    _put4_1__tmp_at927_17972 = NOVALUE;
    // SubProg db_insert pc: 954 op: STARTLINE (58)

    /** eds.e:2175			putn(remaining)*/
    // SubProg db_insert pc: 956 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 958 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 960 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_17805); // DJP 
    // SubProg db_insert pc: 963 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 965 op: ELSE (23)
    goto L15; // [965] 968
    // SubProg db_insert pc: 967 op: NOP1 (159)
L15: // addr: 968 pc: 967 sub: 17797 op: 159
    // SubProg db_insert pc: 968 op: STARTLINE (58)

    /** eds.e:2176			io:seek(current_db, current_table_pos+8)*/
    // SubProg db_insert pc: 970 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 972 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 974 op: PLUS (11)
    if (IS_ATOM_INT(_44current_table_pos_16089)) {
        _9828 = _44current_table_pos_16089 + 8;
        if ((object)((uintptr_t)_9828 + (uintptr_t)HIGH_BITS) >= 0){
            _9828 = NewDouble((eudouble)_9828);
        }
    }
    else {
        _9828 = NewDouble(DBL_PTR(_44current_table_pos_16089)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 978 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_977_17976);
    _pos_inlined_seek_at_977_17976 = _9828;
    _9828 = NOVALUE;
    // SubProg db_insert pc: 981 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 983 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_977_17976);
    DeRef(_seek_1__tmp_at980_17978);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_977_17976;
    _seek_1__tmp_at980_17978 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 987 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_980_17977 = machine(19, _seek_1__tmp_at980_17978);
    // SubProg db_insert pc: 991 op: NOP1 (159)
    // SubProg db_insert pc: 992 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 977

// block var pos_inlined_seek_at_977_17976
    DeRef(_pos_inlined_seek_at_977_17976);
    _pos_inlined_seek_at_977_17976 = NOVALUE;

// block var seek_1__tmp_at980_17978
    DeRef(_seek_1__tmp_at980_17978);
    _seek_1__tmp_at980_17978 = NOVALUE;
    // SubProg db_insert pc: 994 op: STARTLINE (58)

    /** eds.e:2177			blocks += 1*/
    // SubProg db_insert pc: 996 op: PLUS1_I (117)
    _blocks_17819 = _blocks_17819 + 1;
    // SubProg db_insert pc: 1000 op: STARTLINE (58)

    /** eds.e:2178			put4(blocks)*/
    // SubProg db_insert pc: 1002 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 1004 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1006 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    *poke4_addr = (uint32_t)_blocks_17819;
    // SubProg db_insert pc: 1009 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 1011 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1013 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1015 op: PEEK (127)
    DeRefi(_put4_1__tmp_at1001_17981);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at1001_17981 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 1018 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at1001_17981); // DJP 
    // SubProg db_insert pc: 1021 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 1023 op: ELSE (23)
    goto L16; // [1023] 1026
    // SubProg db_insert pc: 1025 op: NOP1 (159)
L16: // addr: 1026 pc: 1025 sub: 17797 op: 159
    // SubProg db_insert pc: 1026 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 1001

// block var put4_1__tmp_at1001_17981
    DeRefi(_put4_1__tmp_at1001_17981);
    _put4_1__tmp_at1001_17981 = NOVALUE;
    // SubProg db_insert pc: 1028 op: STARTLINE (58)

    /** eds.e:2180			io:seek(current_db, index_ptr-4)*/
    // SubProg db_insert pc: 1030 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1032 op: MINUS (10)
    if (IS_ATOM_INT(_index_ptr_17815)) {
        _9830 = _index_ptr_17815 - 4;
        if ((object)((uintptr_t)_9830 +(uintptr_t) HIGH_BITS) >= 0){
            _9830 = NewDouble((eudouble)_9830);
        }
    }
    else {
        _9830 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 1036 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_1035_17984);
    _pos_inlined_seek_at_1035_17984 = _9830;
    _9830 = NOVALUE;
    // SubProg db_insert pc: 1039 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 1041 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_1035_17984);
    DeRef(_seek_1__tmp_at1038_17986);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_1035_17984;
    _seek_1__tmp_at1038_17986 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 1045 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_1038_17985 = machine(19, _seek_1__tmp_at1038_17986);
    // SubProg db_insert pc: 1049 op: NOP1 (159)
    // SubProg db_insert pc: 1050 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 1035

// block var pos_inlined_seek_at_1035_17984
    DeRef(_pos_inlined_seek_at_1035_17984);
    _pos_inlined_seek_at_1035_17984 = NOVALUE;

// block var seek_1__tmp_at1038_17986
    DeRef(_seek_1__tmp_at1038_17986);
    _seek_1__tmp_at1038_17986 = NOVALUE;
    // SubProg db_insert pc: 1052 op: STARTLINE (58)

    /** eds.e:2181			size = get4() - 4*/
    // SubProg db_insert pc: 1054 op: PROC (27)
    _9831 = _44get4();
    // SubProg db_insert pc: 1057 op: MINUS (10)
    DeRef(_size_17811);
    if (IS_ATOM_INT(_9831)) {
        _size_17811 = _9831 - 4;
        if ((object)((uintptr_t)_size_17811 +(uintptr_t) HIGH_BITS) >= 0){
            _size_17811 = NewDouble((eudouble)_size_17811);
        }
    }
    else {
        _size_17811 = binary_op(MINUS, _9831, 4);
    }
    DeRef(_9831);
    _9831 = NOVALUE;
    // SubProg db_insert pc: 1061 op: STARTLINE (58)

    /** eds.e:2182			if blocks*8 > size-8 then*/
    // SubProg db_insert pc: 1063 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9833 = _blocks_17819 * 8;
    }
    else{
        _9833 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1067 op: MINUS (10)
    if (IS_ATOM_INT(_size_17811)) {
        _9834 = _size_17811 - 8;
        if ((object)((uintptr_t)_9834 +(uintptr_t) HIGH_BITS) >= 0){
            _9834 = NewDouble((eudouble)_9834);
        }
    }
    else {
        _9834 = NewDouble(DBL_PTR(_size_17811)->dbl - (eudouble)8);
    }
    // SubProg db_insert pc: 1071 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9833, _9834)){
        DeRef(_9833);
        _9833 = NOVALUE;
        DeRef(_9834);
        _9834 = NOVALUE;
        goto L17; // [1071] 1216
    }
    DeRef(_9833);
    _9833 = NOVALUE;
    DeRef(_9834);
    _9834 = NOVALUE;
    // SubProg db_insert pc: 1075 op: STARTLINE (58)

    /** eds.e:2184				remaining = io:get_bytes(current_db, blocks*8)*/
    // SubProg db_insert pc: 1077 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1079 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9836 = _blocks_17819 * 8;
    }
    else{
        _9836 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1083 op: PROC (27)
    _0 = _remaining_17805;
    _remaining_17805 = _19get_bytes(_44current_db_16088, _9836);
    DeRef(_0);
    _9836 = NOVALUE;
    // SubProg db_insert pc: 1088 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 1090 op: STARTLINE (58)

    /** eds.e:2185				new_size = floor(size + size/2)*/
    // SubProg db_insert pc: 1092 op: DIV2 (98)
    if (IS_ATOM_INT(_size_17811)) {
        if (_size_17811 & 1) {
            _9838 = NewDouble((_size_17811 >> 1) + 0.5);
        }
        else
        _9838 = _size_17811 >> 1;
    }
    else {
        _9838 = binary_op(DIVIDE, _size_17811, 2);
    }
    // SubProg db_insert pc: 1096 op: PLUS (11)
    if (IS_ATOM_INT(_size_17811) && IS_ATOM_INT(_9838)) {
        _9839 = _size_17811 + _9838;
        if ((object)((uintptr_t)_9839 + (uintptr_t)HIGH_BITS) >= 0){
            _9839 = NewDouble((eudouble)_9839);
        }
    }
    else {
        if (IS_ATOM_INT(_size_17811)) {
            _9839 = NewDouble((eudouble)_size_17811 + DBL_PTR(_9838)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9838)) {
                _9839 = NewDouble(DBL_PTR(_size_17811)->dbl + (eudouble)_9838);
            }
            else
            _9839 = NewDouble(DBL_PTR(_size_17811)->dbl + DBL_PTR(_9838)->dbl);
        }
    }
    DeRef(_9838);
    _9838 = NOVALUE;
    // SubProg db_insert pc: 1100 op: FLOOR (83)
    DeRef(_new_size_17812);
    if (IS_ATOM_INT(_9839))
    _new_size_17812 = e_floor(_9839);
    else
    _new_size_17812 = unary_op(FLOOR, _9839);
    DeRef(_9839);
    _9839 = NOVALUE;
    // SubProg db_insert pc: 1103 op: STARTLINE (58)

    /** eds.e:2186				new_index_ptr = db_allocate(new_size)*/
    // SubProg db_insert pc: 1105 op: PROC (27)
    Ref(_new_size_17812);
    _0 = _new_index_ptr_17816;
    _new_index_ptr_17816 = _44db_allocate(_new_size_17812);
    DeRef(_0);
    // SubProg db_insert pc: 1109 op: STARTLINE (58)

    /** eds.e:2187				putn(remaining)*/
    // SubProg db_insert pc: 1111 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 1113 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1115 op: PUTS (44)
    EPuts(_44current_db_16088, _remaining_17805); // DJP 
    // SubProg db_insert pc: 1118 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 1120 op: ELSE (23)
    goto L18; // [1120] 1123
    // SubProg db_insert pc: 1122 op: NOP1 (159)
L18: // addr: 1123 pc: 1122 sub: 17797 op: 159
    // SubProg db_insert pc: 1123 op: STARTLINE (58)

    /** eds.e:2188				putn(repeat(0, new_size-blocks*8))*/
    // SubProg db_insert pc: 1125 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9842 = _blocks_17819 * 8;
    }
    else{
        _9842 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1129 op: MINUS (10)
    if (IS_ATOM_INT(_new_size_17812) && IS_ATOM_INT(_9842)) {
        _9843 = _new_size_17812 - _9842;
    }
    else {
        if (IS_ATOM_INT(_new_size_17812)) {
            _9843 = NewDouble((eudouble)_new_size_17812 - DBL_PTR(_9842)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9842)) {
                _9843 = NewDouble(DBL_PTR(_new_size_17812)->dbl - (eudouble)_9842);
            }
            else
            _9843 = NewDouble(DBL_PTR(_new_size_17812)->dbl - DBL_PTR(_9842)->dbl);
        }
    }
    DeRef(_9842);
    _9842 = NOVALUE;
    // SubProg db_insert pc: 1133 op: REPEAT (32)
    _9844 = Repeat(0, _9843);
    DeRef(_9843);
    _9843 = NOVALUE;
    // SubProg db_insert pc: 1137 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_1136_18004);
    _s_inlined_putn_at_1136_18004 = _9844;
    _9844 = NOVALUE;
    // SubProg db_insert pc: 1140 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 1142 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 1144 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1146 op: PUTS (44)
    EPuts(_44current_db_16088, _s_inlined_putn_at_1136_18004); // DJP 
    // SubProg db_insert pc: 1149 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_insert pc: 1151 op: ELSE (23)
    goto L19; // [1151] 1154
    // SubProg db_insert pc: 1153 op: NOP1 (159)
L19: // addr: 1154 pc: 1153 sub: 17797 op: 159
    // SubProg db_insert pc: 1154 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_insert @ 1136

// block var s_inlined_putn_at_1136_18004
    DeRefi(_s_inlined_putn_at_1136_18004);
    _s_inlined_putn_at_1136_18004 = NOVALUE;
    // SubProg db_insert pc: 1156 op: STARTLINE (58)

    /** eds.e:2189				db_free(index_ptr)*/
    // SubProg db_insert pc: 1158 op: PROC (27)
    Ref(_index_ptr_17815);
    _44db_free(_index_ptr_17815);
    // SubProg db_insert pc: 1161 op: STARTLINE (58)

    /** eds.e:2190				io:seek(current_db, current_table_pos+12)*/
    // SubProg db_insert pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1165 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1167 op: PLUS (11)
    if (IS_ATOM_INT(_44current_table_pos_16089)) {
        _9845 = _44current_table_pos_16089 + 12;
        if ((object)((uintptr_t)_9845 + (uintptr_t)HIGH_BITS) >= 0){
            _9845 = NewDouble((eudouble)_9845);
        }
    }
    else {
        _9845 = NewDouble(DBL_PTR(_44current_table_pos_16089)->dbl + (eudouble)12);
    }
    // SubProg db_insert pc: 1171 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_1170_18007);
    _pos_inlined_seek_at_1170_18007 = _9845;
    _9845 = NOVALUE;
    // SubProg db_insert pc: 1174 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 1176 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_1170_18007);
    DeRef(_seek_1__tmp_at1173_18009);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_1170_18007;
    _seek_1__tmp_at1173_18009 = MAKE_SEQ(_1);
    // SubProg db_insert pc: 1180 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_1173_18008 = machine(19, _seek_1__tmp_at1173_18009);
    // SubProg db_insert pc: 1184 op: NOP1 (159)
    // SubProg db_insert pc: 1185 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_insert @ 1170

// block var pos_inlined_seek_at_1170_18007
    DeRef(_pos_inlined_seek_at_1170_18007);
    _pos_inlined_seek_at_1170_18007 = NOVALUE;

// block var seek_1__tmp_at1173_18009
    DeRef(_seek_1__tmp_at1173_18009);
    _seek_1__tmp_at1173_18009 = NOVALUE;
    // SubProg db_insert pc: 1187 op: STARTLINE (58)

    /** eds.e:2191				put4(new_index_ptr)*/
    // SubProg db_insert pc: 1189 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 1191 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1193 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_new_index_ptr_17816)) {
        *poke4_addr = (uint32_t)_new_index_ptr_17816;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_new_index_ptr_17816)->dbl;
    }
    // SubProg db_insert pc: 1196 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 1198 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1200 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1202 op: PEEK (127)
    DeRefi(_put4_1__tmp_at1188_18011);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at1188_18011 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_insert pc: 1205 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at1188_18011); // DJP 
    // SubProg db_insert pc: 1208 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_insert pc: 1210 op: ELSE (23)
    goto L1A; // [1210] 1213
    // SubProg db_insert pc: 1212 op: NOP1 (159)
L1A: // addr: 1213 pc: 1212 sub: 17797 op: 159
    // SubProg db_insert pc: 1213 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_insert @ 1188

// block var put4_1__tmp_at1188_18011
    DeRefi(_put4_1__tmp_at1188_18011);
    _put4_1__tmp_at1188_18011 = NOVALUE;
    // SubProg db_insert pc: 1215 op: NOP1 (159)
L17: // addr: 1216 pc: 1215 sub: 17797 op: 159
    // SubProg db_insert pc: 1216 op: NOP1 (159)
LE: // addr: 1217 pc: 1216 sub: 17797 op: 159
    // SubProg db_insert pc: 1217 op: STARTLINE (58)

    /** eds.e:2194		return DB_OK*/
    // SubProg db_insert pc: 1219 op: RETURNF (28)

// Exiting block BLOCK: db_insert

// block var key_17799
    DeRef(_key_17799);

// block var data_17800

// block var table_name_17801
    DeRef(_table_name_17801);

// block var key_string_17802
    DeRef(_key_string_17802);

// block var data_string_17803
    DeRef(_data_string_17803);

// block var last_part_17804
    DeRef(_last_part_17804);

// block var remaining_17805
    DeRef(_remaining_17805);

// block var key_ptr_17806
    DeRef(_key_ptr_17806);

// block var data_ptr_17807
    DeRef(_data_ptr_17807);

// block var records_ptr_17808
    DeRef(_records_ptr_17808);

// block var nrecs_17809
    DeRef(_nrecs_17809);

// block var current_block_17810
    DeRef(_current_block_17810);

// block var size_17811
    DeRef(_size_17811);

// block var new_size_17812
    DeRef(_new_size_17812);

// block var key_location_17813
    DeRef(_key_location_17813);

// block var new_block_17814
    DeRef(_new_block_17814);

// block var index_ptr_17815
    DeRef(_index_ptr_17815);

// block var new_index_ptr_17816
    DeRef(_new_index_ptr_17816);

// block var total_recs_17817
    DeRef(_total_recs_17817);

// block var r_17818

// block var blocks_17819

// block var new_recs_17820

// block var n_17821
    DeRef(_9791);
    _9791 = NOVALUE;
    DeRef(_9789);
    _9789 = NOVALUE;
    return 0;
    // SubProg db_insert pc: 1223 op: BADRETURNF (43)
    ;
}


void _44db_replace_data(object _key_location_18146, object _data_18147, object _table_name_18148)
{
    object _9919 = NOVALUE; // 18167 9919
    object _9918 = NOVALUE; // 18165 9918
    object _9917 = NOVALUE; // 18164 9917
    object _9916 = NOVALUE; // 18163 9916
// skipping _9915  name type: 0
    object _9914 = NOVALUE; // 18161 9914
    object _9913 = NOVALUE; // 18159 9913
// skipping _9912  name type: 0
    object _9911 = NOVALUE; // 18156 9911
// skipping _9909  name type: 0
    object _9908 = NOVALUE; // 18153 9908
// skipping _9907  name type: 0
    object _9906 = NOVALUE; // 18150 9906
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_replace_data pc: 1 op: INTEGER_CHECK (96)
    // SubProg db_replace_data pc: 3 op: STARTLINE (58)

    /** eds.e:2323		if not equal(table_name, current_table_name) then*/
    // SubProg db_replace_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 7 op: EQUAL (153)
    if (_table_name_18148 == _44current_table_name_16090)
    _9906 = 1;
    else if (IS_ATOM_INT(_table_name_18148) && IS_ATOM_INT(_44current_table_name_16090))
    _9906 = 0;
    else
    _9906 = (compare(_table_name_18148, _44current_table_name_16090) == 0);
    // SubProg db_replace_data pc: 11 op: NOT_IFW (108)
    if (_9906 != 0)
    goto L1; // [11] 45
    _9906 = NOVALUE;
    // SubProg db_replace_data pc: 14 op: STARTLINE (58)

    /** eds.e:2324			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_replace_data pc: 16 op: PROC (27)
    RefDS(_table_name_18148);
    _9908 = _44db_select_table(_table_name_18148);
    // SubProg db_replace_data pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9908, 0)){
        DeRef(_9908);
        _9908 = NOVALUE;
        goto L2; // [20] 44
    }
    DeRef(_9908);
    _9908 = NOVALUE;
    // SubProg db_replace_data pc: 24 op: STARTLINE (58)

    /** eds.e:2325				fatal(NO_TABLE, "invalid table name given", "db_replace_data", {key_location, data, table_name})*/
    // SubProg db_replace_data pc: 26 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_18146;
    ((intptr_t*)_2)[2] = _data_18147;
    RefDS(_table_name_18148);
    ((intptr_t*)_2)[3] = _table_name_18148;
    _9911 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 32 op: PROC (27)
    RefDS(_9730);
    RefDS(_9910);
    _44fatal(903, _9730, _9910, _9911);
    _9911 = NOVALUE;
    // SubProg db_replace_data pc: 38 op: STARTLINE (58)

    /** eds.e:2326				return*/
    // SubProg db_replace_data pc: 40 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRefDS(_table_name_18148);
    return;
    // SubProg db_replace_data pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 18144 op: 159
    // SubProg db_replace_data pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 18144 op: 159
    // SubProg db_replace_data pc: 45 op: STARTLINE (58)

    /** eds.e:2330		if current_table_pos = -1 then*/
    // SubProg db_replace_data pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 49 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _44current_table_pos_16089, -1)){
        goto L3; // [49] 73
    }
    // SubProg db_replace_data pc: 53 op: STARTLINE (58)

    /** eds.e:2331			fatal(NO_TABLE, "no table selected", "db_replace_data", {key_location, data, table_name})*/
    // SubProg db_replace_data pc: 55 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_18146;
    ((intptr_t*)_2)[2] = _data_18147;
    Ref(_table_name_18148);
    ((intptr_t*)_2)[3] = _table_name_18148;
    _9913 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 61 op: PROC (27)
    RefDS(_9734);
    RefDS(_9910);
    _44fatal(903, _9734, _9910, _9913);
    _9913 = NOVALUE;
    // SubProg db_replace_data pc: 67 op: STARTLINE (58)

    /** eds.e:2332			return*/
    // SubProg db_replace_data pc: 69 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRef(_table_name_18148);
    return;
    // SubProg db_replace_data pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 18144 op: 159
    // SubProg db_replace_data pc: 73 op: STARTLINE (58)

    /** eds.e:2334		if key_location < 1 or key_location > length(key_pointers) then*/
    // SubProg db_replace_data pc: 75 op: LESS (1)
    _9914 = (_key_location_18146 < 1);
    // SubProg db_replace_data pc: 79 op: SC1_OR_IF (147)
    if (_9914 != 0) {
        goto L4; // [79] 97
    }
    // SubProg db_replace_data pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 85 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _9916 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _9916 = 1;
    }
    // SubProg db_replace_data pc: 88 op: GREATER (6)
    _9917 = (_key_location_18146 > _9916);
    _9916 = NOVALUE;
    // SubProg db_replace_data pc: 92 op: NOP1 (159)
    // SubProg db_replace_data pc: 93 op: IF (20)
    if (_9917 == 0)
    {
        DeRef(_9917);
        _9917 = NOVALUE;
        goto L5; // [93] 117
    }
    else{
        DeRef(_9917);
        _9917 = NOVALUE;
    }
    // SubProg db_replace_data pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 18144 op: 159
    // SubProg db_replace_data pc: 97 op: STARTLINE (58)

    /** eds.e:2335			fatal(BAD_RECNO, "bad record number", "db_replace_data", {key_location, data, table_name})*/
    // SubProg db_replace_data pc: 99 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_18146;
    ((intptr_t*)_2)[2] = _data_18147;
    Ref(_table_name_18148);
    ((intptr_t*)_2)[3] = _table_name_18148;
    _9918 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 105 op: PROC (27)
    RefDS(_9858);
    RefDS(_9910);
    _44fatal(905, _9858, _9910, _9918);
    _9918 = NOVALUE;
    // SubProg db_replace_data pc: 111 op: STARTLINE (58)

    /** eds.e:2336			return*/
    // SubProg db_replace_data pc: 113 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRef(_table_name_18148);
    DeRef(_9914);
    _9914 = NOVALUE;
    return;
    // SubProg db_replace_data pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 18144 op: 159
    // SubProg db_replace_data pc: 117 op: STARTLINE (58)

    /** eds.e:2338		db_replace_recid(key_pointers[key_location], data)*/
    // SubProg db_replace_data pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 121 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16095);
    _9919 = (object)*(((s1_ptr)_2)->base + _key_location_18146);
    // SubProg db_replace_data pc: 125 op: PROC (27)
    Ref(_9919);
    _44db_replace_recid(_9919, _data_18147);
    _9919 = NOVALUE;
    // SubProg db_replace_data pc: 129 op: STARTLINE (58)

    /** eds.e:2339	end procedure*/
    // SubProg db_replace_data pc: 131 op: RETURNP (29)

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRef(_table_name_18148);
    DeRef(_9914);
    _9914 = NOVALUE;
    return;
    // SubProg db_replace_data pc: 134 op: BADRETURNF (43)
    ;
}


object _44db_table_size(object _table_name_18170)
{
    object _9928 = NOVALUE; // 18182 9928
    object _9927 = NOVALUE; // 18181 9927
// skipping _9926  name type: 0
    object _9925 = NOVALUE; // 18178 9925
// skipping _9923  name type: 0
    object _9922 = NOVALUE; // 18175 9922
// skipping _9921  name type: 0
    object _9920 = NOVALUE; // 18172 9920
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_table_size pc: 1 op: STARTLINE (58)

    /** eds.e:2369		if not equal(table_name, current_table_name) then*/
    // SubProg db_table_size pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 5 op: EQUAL (153)
    if (_table_name_18170 == _44current_table_name_16090)
    _9920 = 1;
    else if (IS_ATOM_INT(_table_name_18170) && IS_ATOM_INT(_44current_table_name_16090))
    _9920 = 0;
    else
    _9920 = (compare(_table_name_18170, _44current_table_name_16090) == 0);
    // SubProg db_table_size pc: 9 op: NOT_IFW (108)
    if (_9920 != 0)
    goto L1; // [9] 42
    _9920 = NOVALUE;
    // SubProg db_table_size pc: 12 op: STARTLINE (58)

    /** eds.e:2370			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_table_size pc: 14 op: PROC (27)
    RefDS(_table_name_18170);
    _9922 = _44db_select_table(_table_name_18170);
    // SubProg db_table_size pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9922, 0)){
        DeRef(_9922);
        _9922 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_9922);
    _9922 = NOVALUE;
    // SubProg db_table_size pc: 22 op: STARTLINE (58)

    /** eds.e:2371				fatal(NO_TABLE, "invalid table name given", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_18170);
    ((intptr_t*)_2)[1] = _table_name_18170;
    _9925 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 28 op: PROC (27)
    RefDS(_9730);
    RefDS(_9924);
    _44fatal(903, _9730, _9924, _9925);
    _9925 = NOVALUE;
    // SubProg db_table_size pc: 34 op: STARTLINE (58)

    /** eds.e:2372				return -1*/
    // SubProg db_table_size pc: 36 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_18170
    DeRefDS(_table_name_18170);
    return -1;
    // SubProg db_table_size pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 18168 op: 159
    // SubProg db_table_size pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 18168 op: 159
    // SubProg db_table_size pc: 42 op: STARTLINE (58)

    /** eds.e:2376		if current_table_pos = -1 then*/
    // SubProg db_table_size pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _44current_table_pos_16089, -1)){
        goto L3; // [46] 69
    }
    // SubProg db_table_size pc: 50 op: STARTLINE (58)

    /** eds.e:2377			fatal(NO_TABLE, "no table selected", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_table_name_18170);
    ((intptr_t*)_2)[1] = _table_name_18170;
    _9927 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 56 op: PROC (27)
    RefDS(_9734);
    RefDS(_9924);
    _44fatal(903, _9734, _9924, _9927);
    _9927 = NOVALUE;
    // SubProg db_table_size pc: 62 op: STARTLINE (58)

    /** eds.e:2378			return -1*/
    // SubProg db_table_size pc: 64 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_18170
    DeRef(_table_name_18170);
    return -1;
    // SubProg db_table_size pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 18168 op: 159
    // SubProg db_table_size pc: 69 op: STARTLINE (58)

    /** eds.e:2380		return length(key_pointers)*/
    // SubProg db_table_size pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 73 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _9928 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _9928 = 1;
    }
    // SubProg db_table_size pc: 76 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_18170
    DeRef(_table_name_18170);
    return _9928;
    // SubProg db_table_size pc: 80 op: BADRETURNF (43)
    ;
}


object _44db_record_data(object _key_location_18185, object _table_name_18186)
{
    object _data_ptr_18187 = NOVALUE;
    object _data_value_18188 = NOVALUE;
    object _seek_1__tmp_at126_18210 = NOVALUE;
    object _seek_inlined_seek_at_126_18209 = NOVALUE;
    object _pos_inlined_seek_at_123_18208 = NOVALUE;
    object _seek_1__tmp_at164_18217 = NOVALUE;
    object _seek_inlined_seek_at_164_18216 = NOVALUE;
// skipping _9946  name type: 0
// skipping _9945  name type: 0
// skipping _9944  name type: 0
    object _9943 = NOVALUE; // 18212 9943
    object _9942 = NOVALUE; // 18206 9942
    object _9941 = NOVALUE; // 18205 9941
    object _9940 = NOVALUE; // 18204 9940
    object _9939 = NOVALUE; // 18203 9939
// skipping _9938  name type: 0
    object _9937 = NOVALUE; // 18201 9937
    object _9936 = NOVALUE; // 18199 9936
// skipping _9935  name type: 0
    object _9934 = NOVALUE; // 18196 9934
// skipping _9932  name type: 0
    object _9931 = NOVALUE; // 18193 9931
// skipping _9930  name type: 0
    object _9929 = NOVALUE; // 18190 9929
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_record_data pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_key_location_18185)) {
        _1 = (object)(DBL_PTR(_key_location_18185)->dbl);
        DeRefDS(_key_location_18185);
        _key_location_18185 = _1;
    }
    // SubProg db_record_data pc: 3 op: STARTLINE (58)

    /** eds.e:2417		if not equal(table_name, current_table_name) then*/
    // SubProg db_record_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 7 op: EQUAL (153)
    if (_table_name_18186 == _44current_table_name_16090)
    _9929 = 1;
    else if (IS_ATOM_INT(_table_name_18186) && IS_ATOM_INT(_44current_table_name_16090))
    _9929 = 0;
    else
    _9929 = (compare(_table_name_18186, _44current_table_name_16090) == 0);
    // SubProg db_record_data pc: 11 op: NOT_IFW (108)
    if (_9929 != 0)
    goto L1; // [11] 44
    _9929 = NOVALUE;
    // SubProg db_record_data pc: 14 op: STARTLINE (58)

    /** eds.e:2418			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_data pc: 16 op: PROC (27)
    RefDS(_table_name_18186);
    _9931 = _44db_select_table(_table_name_18186);
    // SubProg db_record_data pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9931, 0)){
        DeRef(_9931);
        _9931 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_9931);
    _9931 = NOVALUE;
    // SubProg db_record_data pc: 24 op: STARTLINE (58)

    /** eds.e:2419				fatal(NO_TABLE, "invalid table name given", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_18186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18185;
    ((intptr_t *)_2)[2] = _table_name_18186;
    _9934 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 30 op: PROC (27)
    RefDS(_9730);
    RefDS(_9933);
    _44fatal(903, _9730, _9933, _9934);
    _9934 = NOVALUE;
    // SubProg db_record_data pc: 36 op: STARTLINE (58)

    /** eds.e:2420				return -1*/
    // SubProg db_record_data pc: 38 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_18185

// block var table_name_18186
    DeRefDS(_table_name_18186);

// block var data_ptr_18187
    DeRef(_data_ptr_18187);

// block var data_value_18188
    DeRef(_data_value_18188);
    return -1;
    // SubProg db_record_data pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 18183 op: 159
    // SubProg db_record_data pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 18183 op: 159
    // SubProg db_record_data pc: 44 op: STARTLINE (58)

    /** eds.e:2424		if current_table_pos = -1 then*/
    // SubProg db_record_data pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 48 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _44current_table_pos_16089, -1)){
        goto L3; // [48] 71
    }
    // SubProg db_record_data pc: 52 op: STARTLINE (58)

    /** eds.e:2425			fatal(NO_TABLE, "no table selected", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 54 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_18186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18185;
    ((intptr_t *)_2)[2] = _table_name_18186;
    _9936 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 58 op: PROC (27)
    RefDS(_9734);
    RefDS(_9933);
    _44fatal(903, _9734, _9933, _9936);
    _9936 = NOVALUE;
    // SubProg db_record_data pc: 64 op: STARTLINE (58)

    /** eds.e:2426			return -1*/
    // SubProg db_record_data pc: 66 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_18185

// block var table_name_18186
    DeRef(_table_name_18186);

// block var data_ptr_18187
    DeRef(_data_ptr_18187);

// block var data_value_18188
    DeRef(_data_value_18188);
    return -1;
    // SubProg db_record_data pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 18183 op: 159
    // SubProg db_record_data pc: 71 op: STARTLINE (58)

    /** eds.e:2428		if key_location < 1 or key_location > length(key_pointers) then*/
    // SubProg db_record_data pc: 73 op: LESS (1)
    _9937 = (_key_location_18185 < 1);
    // SubProg db_record_data pc: 77 op: SC1_OR_IF (147)
    if (_9937 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_data pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _9939 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _9939 = 1;
    }
    // SubProg db_record_data pc: 86 op: GREATER (6)
    _9940 = (_key_location_18185 > _9939);
    _9939 = NOVALUE;
    // SubProg db_record_data pc: 90 op: NOP1 (159)
    // SubProg db_record_data pc: 91 op: IF (20)
    if (_9940 == 0)
    {
        DeRef(_9940);
        _9940 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_9940);
        _9940 = NOVALUE;
    }
    // SubProg db_record_data pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 18183 op: 159
    // SubProg db_record_data pc: 95 op: STARTLINE (58)

    /** eds.e:2429			fatal(BAD_RECNO, "bad record number", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 97 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_18186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18185;
    ((intptr_t *)_2)[2] = _table_name_18186;
    _9941 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 101 op: PROC (27)
    RefDS(_9858);
    RefDS(_9933);
    _44fatal(905, _9858, _9933, _9941);
    _9941 = NOVALUE;
    // SubProg db_record_data pc: 107 op: STARTLINE (58)

    /** eds.e:2430			return -1*/
    // SubProg db_record_data pc: 109 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_18185

// block var table_name_18186
    DeRef(_table_name_18186);

// block var data_ptr_18187
    DeRef(_data_ptr_18187);

// block var data_value_18188
    DeRef(_data_value_18188);
    DeRef(_9937);
    _9937 = NOVALUE;
    return -1;
    // SubProg db_record_data pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 18183 op: 159
    // SubProg db_record_data pc: 114 op: STARTLINE (58)

    /** eds.e:2433		io:seek(current_db, key_pointers[key_location])*/
    // SubProg db_record_data pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16095);
    _9942 = (object)*(((s1_ptr)_2)->base + _key_location_18185);
    // SubProg db_record_data pc: 124 op: ASSIGN (18)
    Ref(_9942);
    DeRef(_pos_inlined_seek_at_123_18208);
    _pos_inlined_seek_at_123_18208 = _9942;
    _9942 = NOVALUE;
    // SubProg db_record_data pc: 127 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_record_data pc: 129 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_123_18208);
    DeRef(_seek_1__tmp_at126_18210);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_123_18208;
    _seek_1__tmp_at126_18210 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 133 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_126_18209 = machine(19, _seek_1__tmp_at126_18210);
    // SubProg db_record_data pc: 137 op: NOP1 (159)
    // SubProg db_record_data pc: 138 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_record_data @ 123

// block var pos_inlined_seek_at_123_18208
    DeRef(_pos_inlined_seek_at_123_18208);
    _pos_inlined_seek_at_123_18208 = NOVALUE;

// block var seek_1__tmp_at126_18210
    DeRef(_seek_1__tmp_at126_18210);
    _seek_1__tmp_at126_18210 = NOVALUE;
    // SubProg db_record_data pc: 140 op: STARTLINE (58)

    /** eds.e:2434		if length(vLastErrors) > 0 then return -1 end if*/
    // SubProg db_record_data pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 144 op: LENGTH (42)
    if (IS_SEQUENCE(_44vLastErrors_16112)){
            _9943 = SEQ_PTR(_44vLastErrors_16112)->length;
    }
    else {
        _9943 = 1;
    }
    // SubProg db_record_data pc: 147 op: GREATER_IFW_I (124)
    if (_9943 <= 0)
    goto L6; // [147] 156
    // SubProg db_record_data pc: 151 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_18185

// block var table_name_18186
    DeRef(_table_name_18186);

// block var data_ptr_18187
    DeRef(_data_ptr_18187);

// block var data_value_18188
    DeRef(_data_value_18188);
    DeRef(_9937);
    _9937 = NOVALUE;
    return -1;
    // SubProg db_record_data pc: 155 op: NOP1 (159)
L6: // addr: 156 pc: 155 sub: 18183 op: 159
    // SubProg db_record_data pc: 156 op: STARTLINE (58)

    /** eds.e:2435		data_ptr = get4()*/
    // SubProg db_record_data pc: 158 op: PROC (27)
    _0 = _data_ptr_18187;
    _data_ptr_18187 = _44get4();
    DeRef(_0);
    // SubProg db_record_data pc: 161 op: STARTLINE (58)

    /** eds.e:2436		io:seek(current_db, data_ptr)*/
    // SubProg db_record_data pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 165 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_record_data pc: 167 op: RIGHT_BRACE_2 (85)
    Ref(_data_ptr_18187);
    DeRef(_seek_1__tmp_at164_18217);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16088;
    ((intptr_t *)_2)[2] = _data_ptr_18187;
    _seek_1__tmp_at164_18217 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 171 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_164_18216 = machine(19, _seek_1__tmp_at164_18217);
    // SubProg db_record_data pc: 175 op: NOP1 (159)
    // SubProg db_record_data pc: 176 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_record_data @ 164

// block var seek_1__tmp_at164_18217
    DeRef(_seek_1__tmp_at164_18217);
    _seek_1__tmp_at164_18217 = NOVALUE;
    // SubProg db_record_data pc: 178 op: STARTLINE (58)

    /** eds.e:2437		data_value = decompress(0)*/
    // SubProg db_record_data pc: 180 op: PROC (27)
    _0 = _data_value_18188;
    _data_value_18188 = _44decompress(0);
    DeRef(_0);
    // SubProg db_record_data pc: 184 op: STARTLINE (58)

    /** eds.e:2439		return data_value*/
    // SubProg db_record_data pc: 186 op: RETURNF (28)

// Exiting block BLOCK: db_record_data

// block var key_location_18185

// block var table_name_18186
    DeRef(_table_name_18186);

// block var data_ptr_18187
    DeRef(_data_ptr_18187);
    DeRef(_9937);
    _9937 = NOVALUE;
    return _data_value_18188;
    // SubProg db_record_data pc: 190 op: BADRETURNF (43)
    ;
}


object _44db_fetch_record(object _key_18221, object _table_name_18222)
{
    object _pos_18223 = NOVALUE;
    object _9949 = NOVALUE; // 18227 9949
// skipping _9948  name type: 0
// skipping _9947  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_fetch_record pc: 1 op: STARTLINE (58)

    /** eds.e:2481		pos = db_find_key(key, table_name)*/
    // SubProg db_fetch_record pc: 3 op: PROC (27)
    Ref(_key_18221);
    RefDS(_table_name_18222);
    _pos_18223 = _44db_find_key(_key_18221, _table_name_18222);
    // SubProg db_fetch_record pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_pos_18223)) {
        _1 = (object)(DBL_PTR(_pos_18223)->dbl);
        DeRefDS(_pos_18223);
        _pos_18223 = _1;
    }
    // SubProg db_fetch_record pc: 10 op: STARTLINE (58)

    /** eds.e:2482		if pos > 0 then*/
    // SubProg db_fetch_record pc: 12 op: GREATER_IFW_I (124)
    if (_pos_18223 <= 0)
    goto L1; // [12] 30
    // SubProg db_fetch_record pc: 16 op: STARTLINE (58)

    /** eds.e:2483			return db_record_data(pos, table_name)*/
    // SubProg db_fetch_record pc: 18 op: PROC (27)
    RefDS(_table_name_18222);
    _9949 = _44db_record_data(_pos_18223, _table_name_18222);
    // SubProg db_fetch_record pc: 23 op: RETURNF (28)

// Exiting block BLOCK: db_fetch_record

// block var key_18221
    DeRef(_key_18221);

// block var table_name_18222
    DeRefDS(_table_name_18222);

// block var pos_18223
    return _9949;
    // SubProg db_fetch_record pc: 27 op: ELSE (23)
    goto L2; // [27] 37
    // SubProg db_fetch_record pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 18219 op: 159
    // SubProg db_fetch_record pc: 30 op: STARTLINE (58)

    /** eds.e:2485			return pos*/
    // SubProg db_fetch_record pc: 32 op: RETURNF (28)

// Exiting block BLOCK: db_fetch_record

// block var key_18221
    DeRef(_key_18221);

// block var table_name_18222
    DeRef(_table_name_18222);
    DeRef(_9949);
    _9949 = NOVALUE;
    return _pos_18223;
    // SubProg db_fetch_record pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 18219 op: 159
    // SubProg db_fetch_record pc: 37 op: BADRETURNF (43)
    ;
}


object _44db_record_key(object _key_location_18231, object _table_name_18232)
{
    object _9964 = NOVALUE; // 18251 9964
    object _9963 = NOVALUE; // 18250 9963
    object _9962 = NOVALUE; // 18249 9962
    object _9961 = NOVALUE; // 18248 9961
    object _9960 = NOVALUE; // 18247 9960
// skipping _9959  name type: 0
    object _9958 = NOVALUE; // 18245 9958
    object _9957 = NOVALUE; // 18243 9957
// skipping _9956  name type: 0
    object _9955 = NOVALUE; // 18240 9955
// skipping _9953  name type: 0
    object _9952 = NOVALUE; // 18237 9952
// skipping _9951  name type: 0
    object _9950 = NOVALUE; // 18234 9950
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_record_key pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_key_location_18231)) {
        _1 = (object)(DBL_PTR(_key_location_18231)->dbl);
        DeRefDS(_key_location_18231);
        _key_location_18231 = _1;
    }
    // SubProg db_record_key pc: 3 op: STARTLINE (58)

    /** eds.e:2519		if not equal(table_name, current_table_name) then*/
    // SubProg db_record_key pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 7 op: EQUAL (153)
    if (_table_name_18232 == _44current_table_name_16090)
    _9950 = 1;
    else if (IS_ATOM_INT(_table_name_18232) && IS_ATOM_INT(_44current_table_name_16090))
    _9950 = 0;
    else
    _9950 = (compare(_table_name_18232, _44current_table_name_16090) == 0);
    // SubProg db_record_key pc: 11 op: NOT_IFW (108)
    if (_9950 != 0)
    goto L1; // [11] 44
    _9950 = NOVALUE;
    // SubProg db_record_key pc: 14 op: STARTLINE (58)

    /** eds.e:2520			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_key pc: 16 op: PROC (27)
    RefDS(_table_name_18232);
    _9952 = _44db_select_table(_table_name_18232);
    // SubProg db_record_key pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9952, 0)){
        DeRef(_9952);
        _9952 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_9952);
    _9952 = NOVALUE;
    // SubProg db_record_key pc: 24 op: STARTLINE (58)

    /** eds.e:2521				fatal(NO_TABLE, "invalid table name given", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_18232);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18231;
    ((intptr_t *)_2)[2] = _table_name_18232;
    _9955 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 30 op: PROC (27)
    RefDS(_9730);
    RefDS(_9954);
    _44fatal(903, _9730, _9954, _9955);
    _9955 = NOVALUE;
    // SubProg db_record_key pc: 36 op: STARTLINE (58)

    /** eds.e:2522				return -1*/
    // SubProg db_record_key pc: 38 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRefDS(_table_name_18232);
    return -1;
    // SubProg db_record_key pc: 42 op: NOP1 (159)
L2: // addr: 43 pc: 42 sub: 18229 op: 159
    // SubProg db_record_key pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 18229 op: 159
    // SubProg db_record_key pc: 44 op: STARTLINE (58)

    /** eds.e:2526		if current_table_pos = -1 then*/
    // SubProg db_record_key pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 48 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _44current_table_pos_16089, -1)){
        goto L3; // [48] 71
    }
    // SubProg db_record_key pc: 52 op: STARTLINE (58)

    /** eds.e:2527			fatal(NO_TABLE, "no table selected", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 54 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_18232);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18231;
    ((intptr_t *)_2)[2] = _table_name_18232;
    _9957 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 58 op: PROC (27)
    RefDS(_9734);
    RefDS(_9954);
    _44fatal(903, _9734, _9954, _9957);
    _9957 = NOVALUE;
    // SubProg db_record_key pc: 64 op: STARTLINE (58)

    /** eds.e:2528			return -1*/
    // SubProg db_record_key pc: 66 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRef(_table_name_18232);
    return -1;
    // SubProg db_record_key pc: 70 op: NOP1 (159)
L3: // addr: 71 pc: 70 sub: 18229 op: 159
    // SubProg db_record_key pc: 71 op: STARTLINE (58)

    /** eds.e:2530		if key_location < 1 or key_location > length(key_pointers) then*/
    // SubProg db_record_key pc: 73 op: LESS (1)
    _9958 = (_key_location_18231 < 1);
    // SubProg db_record_key pc: 77 op: SC1_OR_IF (147)
    if (_9958 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_key pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16095)){
            _9960 = SEQ_PTR(_44key_pointers_16095)->length;
    }
    else {
        _9960 = 1;
    }
    // SubProg db_record_key pc: 86 op: GREATER (6)
    _9961 = (_key_location_18231 > _9960);
    _9960 = NOVALUE;
    // SubProg db_record_key pc: 90 op: NOP1 (159)
    // SubProg db_record_key pc: 91 op: IF (20)
    if (_9961 == 0)
    {
        DeRef(_9961);
        _9961 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_9961);
        _9961 = NOVALUE;
    }
    // SubProg db_record_key pc: 94 op: NOP1 (159)
L4: // addr: 95 pc: 94 sub: 18229 op: 159
    // SubProg db_record_key pc: 95 op: STARTLINE (58)

    /** eds.e:2531			fatal(BAD_RECNO, "bad record number", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 97 op: RIGHT_BRACE_2 (85)
    Ref(_table_name_18232);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18231;
    ((intptr_t *)_2)[2] = _table_name_18232;
    _9962 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 101 op: PROC (27)
    RefDS(_9858);
    RefDS(_9954);
    _44fatal(905, _9858, _9954, _9962);
    _9962 = NOVALUE;
    // SubProg db_record_key pc: 107 op: STARTLINE (58)

    /** eds.e:2532			return -1*/
    // SubProg db_record_key pc: 109 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRef(_table_name_18232);
    DeRef(_9958);
    _9958 = NOVALUE;
    return -1;
    // SubProg db_record_key pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 18229 op: 159
    // SubProg db_record_key pc: 114 op: STARTLINE (58)

    /** eds.e:2534		return key_value(key_pointers[key_location])*/
    // SubProg db_record_key pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 118 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16095);
    _9963 = (object)*(((s1_ptr)_2)->base + _key_location_18231);
    // SubProg db_record_key pc: 122 op: PROC (27)
    Ref(_9963);
    _9964 = _44key_value(_9963);
    _9963 = NOVALUE;
    // SubProg db_record_key pc: 126 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRef(_table_name_18232);
    DeRef(_9958);
    _9958 = NOVALUE;
    return _9964;
    // SubProg db_record_key pc: 130 op: BADRETURNF (43)
    ;
}


void _44db_replace_recid(object _recid_18345, object _data_18346)
{
    object _old_size_18347 = NOVALUE;
    object _new_size_18348 = NOVALUE;
    object _data_ptr_18349 = NOVALUE;
    object _data_string_18350 = NOVALUE;
    object _put4_1__tmp_at111_18370 = NOVALUE;
    object _10063 = NOVALUE; // 18428 10063
    object _10062 = NOVALUE; // 18427 10062
    object _10061 = NOVALUE; // 18426 10061
    object _10060 = NOVALUE; // 18425 10060
    object _10059 = NOVALUE; // 18424 10059
// skipping _10032  name type: 0
    object _10031 = NOVALUE; // 18372 10031
// skipping _10030  name type: 0
    object _10029 = NOVALUE; // 18366 10029
    object _10028 = NOVALUE; // 18363 10028
    object _10027 = NOVALUE; // 18362 10027
    object _10026 = NOVALUE; // 18361 10026
    object _10025 = NOVALUE; // 18360 10025
// skipping _10024  name type: 0
// skipping _10023  name type: 0
// skipping _10022  name type: 0
    object _10021 = NOVALUE; // 18355 10021
    object _10020 = NOVALUE; // 18354 10020
// skipping _10019  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_replace_recid pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_recid_18345)) {
        _1 = (object)(DBL_PTR(_recid_18345)->dbl);
        DeRefDS(_recid_18345);
        _recid_18345 = _1;
    }
    // SubProg db_replace_recid pc: 3 op: STARTLINE (58)

    /** eds.e:2760		seek(current_db, recid)*/
    // SubProg db_replace_recid pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 7 op: PROC (27)
    _10063 = _19seek(_44current_db_16088, _recid_18345);
    // SubProg db_replace_recid pc: 12 op: DEREF_TEMP (208)
    DeRef(_10063);
    _10063 = NOVALUE;
    // SubProg db_replace_recid pc: 14 op: STARTLINE (58)

    /** eds.e:2761		data_ptr = get4()*/
    // SubProg db_replace_recid pc: 16 op: PROC (27)
    _0 = _data_ptr_18349;
    _data_ptr_18349 = _44get4();
    DeRef(_0);
    // SubProg db_replace_recid pc: 19 op: STARTLINE (58)

    /** eds.e:2762		seek(current_db, data_ptr-4)*/
    // SubProg db_replace_recid pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 23 op: MINUS (10)
    if (IS_ATOM_INT(_data_ptr_18349)) {
        _10020 = _data_ptr_18349 - 4;
        if ((object)((uintptr_t)_10020 +(uintptr_t) HIGH_BITS) >= 0){
            _10020 = NewDouble((eudouble)_10020);
        }
    }
    else {
        _10020 = NewDouble(DBL_PTR(_data_ptr_18349)->dbl - (eudouble)4);
    }
    // SubProg db_replace_recid pc: 27 op: PROC (27)
    _10062 = _19seek(_44current_db_16088, _10020);
    _10020 = NOVALUE;
    // SubProg db_replace_recid pc: 32 op: DEREF_TEMP (208)
    DeRef(_10062);
    _10062 = NOVALUE;
    // SubProg db_replace_recid pc: 34 op: STARTLINE (58)

    /** eds.e:2763		old_size = get4()-4*/
    // SubProg db_replace_recid pc: 36 op: PROC (27)
    _10021 = _44get4();
    // SubProg db_replace_recid pc: 39 op: MINUS (10)
    DeRef(_old_size_18347);
    if (IS_ATOM_INT(_10021)) {
        _old_size_18347 = _10021 - 4;
        if ((object)((uintptr_t)_old_size_18347 +(uintptr_t) HIGH_BITS) >= 0){
            _old_size_18347 = NewDouble((eudouble)_old_size_18347);
        }
    }
    else {
        _old_size_18347 = binary_op(MINUS, _10021, 4);
    }
    DeRef(_10021);
    _10021 = NOVALUE;
    // SubProg db_replace_recid pc: 43 op: STARTLINE (58)

    /** eds.e:2764		data_string = compress(data)*/
    // SubProg db_replace_recid pc: 45 op: PROC (27)
    _0 = _data_string_18350;
    _data_string_18350 = _44compress(_data_18346);
    DeRef(_0);
    // SubProg db_replace_recid pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg db_replace_recid pc: 51 op: STARTLINE (58)

    /** eds.e:2765		new_size = length(data_string)*/
    // SubProg db_replace_recid pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_data_string_18350)){
            _new_size_18348 = SEQ_PTR(_data_string_18350)->length;
    }
    else {
        _new_size_18348 = 1;
    }
    // SubProg db_replace_recid pc: 56 op: STARTLINE (58)

    /** eds.e:2766		if new_size <= old_size and*/
    // SubProg db_replace_recid pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_old_size_18347)) {
        _10025 = (_new_size_18348 <= _old_size_18347);
    }
    else {
        _10025 = ((eudouble)_new_size_18348 <= DBL_PTR(_old_size_18347)->dbl);
    }
    // SubProg db_replace_recid pc: 62 op: SC1_AND_IF (146)
    if (_10025 == 0) {
        goto L1; // [62] 92
    }
    // SubProg db_replace_recid pc: 66 op: MINUS (10)
    if (IS_ATOM_INT(_old_size_18347)) {
        _10027 = _old_size_18347 - 16;
        if ((object)((uintptr_t)_10027 +(uintptr_t) HIGH_BITS) >= 0){
            _10027 = NewDouble((eudouble)_10027);
        }
    }
    else {
        _10027 = NewDouble(DBL_PTR(_old_size_18347)->dbl - (eudouble)16);
    }
    // SubProg db_replace_recid pc: 70 op: GREATEREQ (2)
    if (IS_ATOM_INT(_10027)) {
        _10028 = (_new_size_18348 >= _10027);
    }
    else {
        _10028 = ((eudouble)_new_size_18348 >= DBL_PTR(_10027)->dbl);
    }
    DeRef(_10027);
    _10027 = NOVALUE;
    // SubProg db_replace_recid pc: 74 op: NOP1 (159)
    // SubProg db_replace_recid pc: 75 op: IF (20)
    if (_10028 == 0)
    {
        DeRef(_10028);
        _10028 = NOVALUE;
        goto L1; // [75] 92
    }
    else{
        DeRef(_10028);
        _10028 = NOVALUE;
    }
    // SubProg db_replace_recid pc: 78 op: STARTLINE (58)

    /** eds.e:2769			seek(current_db, data_ptr)*/
    // SubProg db_replace_recid pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 82 op: PROC (27)
    Ref(_data_ptr_18349);
    _10061 = _19seek(_44current_db_16088, _data_ptr_18349);
    // SubProg db_replace_recid pc: 87 op: DEREF_TEMP (208)
    DeRef(_10061);
    _10061 = NOVALUE;
    // SubProg db_replace_recid pc: 89 op: ELSE (23)
    goto L2; // [89] 168
    // SubProg db_replace_recid pc: 91 op: NOP1 (159)
L1: // addr: 92 pc: 91 sub: 18343 op: 159
    // SubProg db_replace_recid pc: 92 op: STARTLINE (58)

    /** eds.e:2772			db_free(data_ptr)*/
    // SubProg db_replace_recid pc: 94 op: PROC (27)
    Ref(_data_ptr_18349);
    _44db_free(_data_ptr_18349);
    // SubProg db_replace_recid pc: 97 op: STARTLINE (58)

    /** eds.e:2774			data_ptr = db_allocate(new_size + 8)*/
    // SubProg db_replace_recid pc: 99 op: PLUS (11)
    _10029 = _new_size_18348 + 8;
    if ((object)((uintptr_t)_10029 + (uintptr_t)HIGH_BITS) >= 0){
        _10029 = NewDouble((eudouble)_10029);
    }
    // SubProg db_replace_recid pc: 103 op: PROC (27)
    _0 = _data_ptr_18349;
    _data_ptr_18349 = _44db_allocate(_10029);
    DeRef(_0);
    _10029 = NOVALUE;
    // SubProg db_replace_recid pc: 107 op: STARTLINE (58)

    /** eds.e:2775			seek(current_db, recid)*/
    // SubProg db_replace_recid pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 111 op: PROC (27)
    _10060 = _19seek(_44current_db_16088, _recid_18345);
    // SubProg db_replace_recid pc: 116 op: DEREF_TEMP (208)
    DeRef(_10060);
    _10060 = NOVALUE;
    // SubProg db_replace_recid pc: 118 op: STARTLINE (58)

    /** eds.e:2776			put4(data_ptr)*/
    // SubProg db_replace_recid pc: 120 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_replace_recid pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 124 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16130)){
        poke4_addr = (uint32_t *)_44mem0_16130;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16130)->dbl);
    }
    if (IS_ATOM_INT(_data_ptr_18349)) {
        *poke4_addr = (uint32_t)_data_ptr_18349;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_data_ptr_18349)->dbl;
    }
    // SubProg db_replace_recid pc: 127 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_replace_recid pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 131 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 133 op: PEEK (127)
    DeRefi(_put4_1__tmp_at111_18370);
    _1 = (object)SEQ_PTR(_44memseq_16365);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at111_18370 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_replace_recid pc: 136 op: PUTS (44)
    EPuts(_44current_db_16088, _put4_1__tmp_at111_18370); // DJP 
    // SubProg db_replace_recid pc: 139 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_replace_recid pc: 141 op: ELSE (23)
    goto L3; // [141] 144
    // SubProg db_replace_recid pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 18343 op: 159
    // SubProg db_replace_recid pc: 144 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_replace_recid @ 111

// block var put4_1__tmp_at111_18370
    DeRefi(_put4_1__tmp_at111_18370);
    _put4_1__tmp_at111_18370 = NOVALUE;
    // SubProg db_replace_recid pc: 146 op: STARTLINE (58)

    /** eds.e:2777			seek(current_db, data_ptr)*/
    // SubProg db_replace_recid pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 150 op: PROC (27)
    Ref(_data_ptr_18349);
    _10059 = _19seek(_44current_db_16088, _data_ptr_18349);
    // SubProg db_replace_recid pc: 155 op: DEREF_TEMP (208)
    DeRef(_10059);
    _10059 = NOVALUE;
    // SubProg db_replace_recid pc: 157 op: STARTLINE (58)

    /** eds.e:2781			data_string &= repeat( 0, 8 )*/
    // SubProg db_replace_recid pc: 159 op: REPEAT (32)
    _10031 = Repeat(0, 8);
    // SubProg db_replace_recid pc: 163 op: CONCAT (15)
    Concat((object_ptr)&_data_string_18350, _data_string_18350, _10031);
    DeRefDS(_10031);
    _10031 = NOVALUE;
    // SubProg db_replace_recid pc: 167 op: NOP1 (159)
L2: // addr: 168 pc: 167 sub: 18343 op: 159
    // SubProg db_replace_recid pc: 168 op: STARTLINE (58)

    /** eds.e:2784		putn(data_string)*/
    // SubProg db_replace_recid pc: 170 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_replace_recid pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 174 op: PUTS (44)
    EPuts(_44current_db_16088, _data_string_18350); // DJP 
    // SubProg db_replace_recid pc: 177 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_replace_recid pc: 179 op: ELSE (23)
    goto L4; // [179] 182
    // SubProg db_replace_recid pc: 181 op: NOP1 (159)
L4: // addr: 182 pc: 181 sub: 18343 op: 159
    // SubProg db_replace_recid pc: 182 op: STARTLINE (58)

    /** eds.e:2785	end procedure*/
    // SubProg db_replace_recid pc: 184 op: RETURNP (29)

// Exiting block BLOCK: db_replace_recid

// block var recid_18345

// block var data_18346

// block var old_size_18347
    DeRef(_old_size_18347);

// block var new_size_18348

// block var data_ptr_18349
    DeRef(_data_ptr_18349);

// block var data_string_18350
    DeRef(_data_string_18350);
    DeRef(_10025);
    _10025 = NOVALUE;
    return;
    // SubProg db_replace_recid pc: 187 op: BADRETURNF (43)
    ;
}



// 0x5CE50C3B
