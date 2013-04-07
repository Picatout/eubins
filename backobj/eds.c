// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _44fatal(object _errcode_16112, object _msg_16113, object _routine_name_16114, object _parms_16115)
{
// skipping _8972  name type: 0
// skipping _8971  name type: 0
// skipping _8970  name type: 0
// skipping _8968  name type: 0
// skipping _8967  name type: 0
    object _8966 = NOVALUE; // 16116 8966
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
    ((intptr_t*)_2)[1] = _errcode_16112;
    RefDS(_msg_16113);
    ((intptr_t*)_2)[2] = _msg_16113;
    RefDS(_routine_name_16114);
    ((intptr_t*)_2)[3] = _routine_name_16114;
    RefDS(_parms_16115);
    ((intptr_t*)_2)[4] = _parms_16115;
    _8966 = MAKE_SEQ(_1);
    // SubProg fatal pc: 20 op: APPEND (35)
    RefDS(_8966);
    Append(&_44vLastErrors_16109, _44vLastErrors_16109, _8966);
    DeRefDS(_8966);
    _8966 = NOVALUE;
    // SubProg fatal pc: 24 op: STARTLINE (58)

    /** eds.e:232		if db_fatal_id >= 0 then*/
    // SubProg fatal pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg fatal pc: 28 op: GREATEREQ_IFW_I (120)
    // SubProg fatal pc: 54 op: STARTLINE (58)

    /** eds.e:235	end procedure*/
    // SubProg fatal pc: 56 op: RETURNP (29)

// Exiting block BLOCK: fatal

// block var errcode_16112

// block var msg_16113
    DeRefDSi(_msg_16113);

// block var routine_name_16114
    DeRefDSi(_routine_name_16114);

// block var parms_16115
    DeRefDS(_parms_16115);
    return;
    // SubProg fatal pc: 59 op: BADRETURNF (43)
    ;
}


object _44get4()
{
    object _8982 = NOVALUE; // 16141 8982
    object _8981 = NOVALUE; // 16140 8981
    object _8980 = NOVALUE; // 16139 8980
    object _8979 = NOVALUE; // 16138 8979
    object _8978 = NOVALUE; // 16137 8978
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get4 pc: 1 op: STARTLINE (58)

    /** eds.e:250		poke(mem0, getc(current_db))*/
    // SubProg get4 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 7 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
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
    // SubProg get4 pc: 10 op: POKE (128)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke_addr = (uint8_t *)_44mem0_16127;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke_addr = (uint8_t)_8978;
    _8978 = NOVALUE;
    // SubProg get4 pc: 13 op: STARTLINE (58)

    /** eds.e:251		poke(mem1, getc(current_db))*/
    // SubProg get4 pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 19 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8979 = getc((FILE*)xstdin);
        }
        else{
            _8979 = getc(last_r_file_ptr);
        }
    }
    else{
        _8979 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 22 op: POKE (128)
    if (IS_ATOM_INT(_44mem1_16128)){
        poke_addr = (uint8_t *)_44mem1_16128;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem1_16128)->dbl);
    }
    *poke_addr = (uint8_t)_8979;
    _8979 = NOVALUE;
    // SubProg get4 pc: 25 op: STARTLINE (58)

    /** eds.e:252		poke(mem2, getc(current_db))*/
    // SubProg get4 pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 31 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8980 = getc((FILE*)xstdin);
        }
        else{
            _8980 = getc(last_r_file_ptr);
        }
    }
    else{
        _8980 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 34 op: POKE (128)
    if (IS_ATOM_INT(_44mem2_16129)){
        poke_addr = (uint8_t *)_44mem2_16129;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem2_16129)->dbl);
    }
    *poke_addr = (uint8_t)_8980;
    _8980 = NOVALUE;
    // SubProg get4 pc: 37 op: STARTLINE (58)

    /** eds.e:253		poke(mem3, getc(current_db))*/
    // SubProg get4 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 43 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _8981 = getc((FILE*)xstdin);
        }
        else{
            _8981 = getc(last_r_file_ptr);
        }
    }
    else{
        _8981 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 46 op: POKE (128)
    if (IS_ATOM_INT(_44mem3_16130)){
        poke_addr = (uint8_t *)_44mem3_16130;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_44mem3_16130)->dbl);
    }
    *poke_addr = (uint8_t)_8981;
    _8981 = NOVALUE;
    // SubProg get4 pc: 49 op: STARTLINE (58)

    /** eds.e:254		return peek4u(mem0)*/
    // SubProg get4 pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 53 op: PEEK4U (140)
    if (IS_ATOM_INT(_44mem0_16127)) {
        _8982 = (object)*(uint32_t *)_44mem0_16127;
        if ((uintptr_t)_8982 > (uintptr_t)MAXINT){
            _8982 = NewDouble((eudouble)(uintptr_t)_8982);
        }
    }
    else {
        _8982 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        if ((uintptr_t)_8982 > (uintptr_t)MAXINT){
            _8982 = NewDouble((eudouble)(uintptr_t)_8982);
        }
    }
    // SubProg get4 pc: 56 op: RETURNF (28)

// Exiting block BLOCK: get4
    return _8982;
    // SubProg get4 pc: 60 op: BADRETURNF (43)
    ;
}


object _44get_string()
{
    object _where_inlined_where_at_31_16155 = NOVALUE;
    object _s_16144 = NOVALUE;
    object _c_16145 = NOVALUE;
    object _i_16146 = NOVALUE;
    object _8995 = NOVALUE; // 16164 8995
// skipping _8994  name type: 0
// skipping _8993  name type: 0
    object _8992 = NOVALUE; // 16161 8992
// skipping _8991  name type: 0
    object _8990 = NOVALUE; // 16159 8990
// skipping _8989  name type: 0
    object _8988 = NOVALUE; // 16156 8988
// skipping _8985  name type: 0
// skipping _8984  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_string pc: 1 op: STARTLINE (58)

    /** eds.e:263		s = repeat(0, 256)*/
    // SubProg get_string pc: 3 op: REPEAT (32)
    DeRefi(_s_16144);
    _s_16144 = Repeat(0, 256);
    // SubProg get_string pc: 7 op: STARTLINE (58)

    /** eds.e:264		i = 0*/
    // SubProg get_string pc: 9 op: ASSIGN_I (113)
    _i_16146 = 0;
    // SubProg get_string pc: 12 op: STARTLINE (58)

    /** eds.e:265		while c with entry do*/
    // SubProg get_string pc: 14 op: ELSE (23)
    goto L1; // [14] 89
    // SubProg get_string pc: 16 op: NOPWHILE (158)
L2: // addr: 17 pc: 16 sub: 16142 op: 158
    // SubProg get_string pc: 17 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_string pc: 19 op: WHILE (47)
    if (_c_16145 == 0)
    {
        goto L3; // [19] 101
    }
    else{
    }
    // SubProg get_string pc: 22 op: STARTLINE (58)

    /** eds.e:266			if c = -1 then*/
    // SubProg get_string pc: 24 op: EQUALS_IFW_I (121)
    if (_c_16145 != -1)
    goto L4; // [24] 54
    // SubProg get_string pc: 28 op: STARTLINE (58)

    /** eds.e:267				fatal(MISSING_END, "string is missing 0 terminator", "get_string", {io:where(current_db)})*/
    // SubProg get_string pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 32 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg get_string pc: 34 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_31_16155);
    _where_inlined_where_at_31_16155 = machine(20, _44current_db_16085);
    // SubProg get_string pc: 38 op: NOP1 (159)
    // SubProg get_string pc: 39 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_31_16155);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_31_16155;
    _8988 = MAKE_SEQ(_1);
    // SubProg get_string pc: 43 op: PROC (27)
    RefDS(_8986);
    RefDS(_8987);
    _44fatal(900, _8986, _8987, _8988);
    _8988 = NOVALUE;
    // SubProg get_string pc: 49 op: STARTLINE (58)

    /** eds.e:268				exit*/
    // SubProg get_string pc: 51 op: EXIT (61)
    goto L3; // [51] 101
    // SubProg get_string pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 16142 op: 159
    // SubProg get_string pc: 54 op: STARTLINE (58)

    /** eds.e:270			i += 1*/
    // SubProg get_string pc: 56 op: PLUS1_I (117)
    _i_16146 = _i_16146 + 1;
    // SubProg get_string pc: 60 op: STARTLINE (58)

    /** eds.e:271			if i > length(s) then*/
    // SubProg get_string pc: 62 op: LENGTH (42)
    if (IS_SEQUENCE(_s_16144)){
            _8990 = SEQ_PTR(_s_16144)->length;
    }
    else {
        _8990 = 1;
    }
    // SubProg get_string pc: 65 op: GREATER_IFW_I (124)
    if (_i_16146 <= _8990)
    goto L5; // [65] 80
    // SubProg get_string pc: 69 op: STARTLINE (58)

    /** eds.e:272				s &= repeat(0, 256)*/
    // SubProg get_string pc: 71 op: REPEAT (32)
    _8992 = Repeat(0, 256);
    // SubProg get_string pc: 75 op: CONCAT (15)
    Concat((object_ptr)&_s_16144, _s_16144, _8992);
    DeRefDS(_8992);
    _8992 = NOVALUE;
    // SubProg get_string pc: 79 op: NOP1 (159)
L5: // addr: 80 pc: 79 sub: 16142 op: 159
    // SubProg get_string pc: 80 op: STARTLINE (58)

    /** eds.e:274			s[i] = c*/
    // SubProg get_string pc: 82 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_s_16144);
    _2 = (object)(((s1_ptr)_2)->base + _i_16146);
    *(intptr_t *)_2 = _c_16145;
    // SubProg get_string pc: 86 op: STARTLINE (58)

    /** eds.e:275		  entry*/
    // SubProg get_string pc: 88 op: NOP1 (159)
L1: // addr: 89 pc: 88 sub: 16142 op: 159
    // SubProg get_string pc: 89 op: STARTLINE (58)

    /** eds.e:276			c = getc(current_db)*/
    // SubProg get_string pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_string pc: 93 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16145 = getc((FILE*)xstdin);
        }
        else{
            _c_16145 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16145 = getc(last_r_file_ptr);
    }
    // SubProg get_string pc: 96 op: STARTLINE (58)

    /** eds.e:277		end while*/
    // SubProg get_string pc: 98 op: ENDWHILE (22)
    goto L2; // [98] 17
    // SubProg get_string pc: 100 op: NOP1 (159)
L3: // addr: 101 pc: 100 sub: 16142 op: 159
    // SubProg get_string pc: 101 op: STARTLINE (58)

    /** eds.e:278		return s[1..i]*/
    // SubProg get_string pc: 103 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_8995;
    RHS_Slice(_s_16144, 1, _i_16146);
    // SubProg get_string pc: 108 op: RETURNF (28)

// Exiting block BLOCK: get_string

// block var s_16144
    DeRefDSi(_s_16144);

// block var c_16145

// block var i_16146
    return _8995;
    // SubProg get_string pc: 112 op: BADRETURNF (43)
    ;
}


object _44equal_string(object _target_16167)
{
    object _c_16168 = NOVALUE;
    object _i_16169 = NOVALUE;
    object _where_inlined_where_at_27_16175 = NOVALUE;
    object _9006 = NOVALUE; // 16186 9006
    object _9005 = NOVALUE; // 16185 9005
// skipping _9004  name type: 0
// skipping _9003  name type: 0
    object _9002 = NOVALUE; // 16182 9002
// skipping _9001  name type: 0
    object _9000 = NOVALUE; // 16179 9000
// skipping _8999  name type: 0
    object _8998 = NOVALUE; // 16176 8998
// skipping _8996  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg equal_string pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg equal_string pc: 3 op: STARTLINE (58)

    /** eds.e:286		i = 0*/
    // SubProg equal_string pc: 5 op: ASSIGN_I (113)
    _i_16169 = 0;
    // SubProg equal_string pc: 8 op: STARTLINE (58)

    /** eds.e:287		while c with entry do*/
    // SubProg equal_string pc: 10 op: ELSE (23)
    goto L1; // [10] 94
    // SubProg equal_string pc: 12 op: NOPWHILE (158)
L2: // addr: 13 pc: 12 sub: 16165 op: 158
    // SubProg equal_string pc: 13 op: PRIVATE_INIT_CHECK (30)
    // SubProg equal_string pc: 15 op: WHILE (47)
    if (_c_16168 == 0)
    {
        goto L3; // [15] 106
    }
    else{
    }
    // SubProg equal_string pc: 18 op: STARTLINE (58)

    /** eds.e:288			if c = -1 then*/
    // SubProg equal_string pc: 20 op: EQUALS_IFW_I (121)
    if (_c_16168 != -1)
    goto L4; // [20] 52
    // SubProg equal_string pc: 24 op: STARTLINE (58)

    /** eds.e:289				fatal(MISSING_END, "string is missing 0 terminator", "equal_string", {io:where(current_db)})*/
    // SubProg equal_string pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 28 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg equal_string pc: 30 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_27_16175);
    _where_inlined_where_at_27_16175 = machine(20, _44current_db_16085);
    // SubProg equal_string pc: 34 op: NOP1 (159)
    // SubProg equal_string pc: 35 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_27_16175);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_27_16175;
    _8998 = MAKE_SEQ(_1);
    // SubProg equal_string pc: 39 op: PROC (27)
    RefDS(_8986);
    RefDS(_8997);
    _44fatal(900, _8986, _8997, _8998);
    _8998 = NOVALUE;
    // SubProg equal_string pc: 45 op: STARTLINE (58)

    /** eds.e:290				return DB_FATAL_FAIL*/
    // SubProg equal_string pc: 47 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16167
    DeRefDS(_target_16167);

// block var c_16168

// block var i_16169
    return -404;
    // SubProg equal_string pc: 51 op: NOP1 (159)
L4: // addr: 52 pc: 51 sub: 16165 op: 159
    // SubProg equal_string pc: 52 op: STARTLINE (58)

    /** eds.e:292			i += 1*/
    // SubProg equal_string pc: 54 op: PLUS1_I (117)
    _i_16169 = _i_16169 + 1;
    // SubProg equal_string pc: 58 op: STARTLINE (58)

    /** eds.e:293			if i > length(target) then*/
    // SubProg equal_string pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_target_16167)){
            _9000 = SEQ_PTR(_target_16167)->length;
    }
    else {
        _9000 = 1;
    }
    // SubProg equal_string pc: 63 op: GREATER_IFW_I (124)
    if (_i_16169 <= _9000)
    goto L5; // [63] 74
    // SubProg equal_string pc: 67 op: STARTLINE (58)

    /** eds.e:294				return 0*/
    // SubProg equal_string pc: 69 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16167
    DeRefDS(_target_16167);

// block var c_16168

// block var i_16169
    return 0;
    // SubProg equal_string pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 16165 op: 159
    // SubProg equal_string pc: 74 op: STARTLINE (58)

    /** eds.e:296			if target[i] != c then*/
    // SubProg equal_string pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_target_16167);
    _9002 = (object)*(((s1_ptr)_2)->base + _i_16169);
    // SubProg equal_string pc: 80 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9002, _c_16168)){
        _9002 = NOVALUE;
        goto L6; // [80] 91
    }
    _9002 = NOVALUE;
    // SubProg equal_string pc: 84 op: STARTLINE (58)

    /** eds.e:297				return 0*/
    // SubProg equal_string pc: 86 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16167
    DeRefDS(_target_16167);

// block var c_16168

// block var i_16169
    return 0;
    // SubProg equal_string pc: 90 op: NOP1 (159)
L6: // addr: 91 pc: 90 sub: 16165 op: 159
    // SubProg equal_string pc: 91 op: STARTLINE (58)

    /** eds.e:299		  entry*/
    // SubProg equal_string pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 16165 op: 159
    // SubProg equal_string pc: 94 op: STARTLINE (58)

    /** eds.e:300			c = getc(current_db)*/
    // SubProg equal_string pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg equal_string pc: 98 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16168 = getc((FILE*)xstdin);
        }
        else{
            _c_16168 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16168 = getc(last_r_file_ptr);
    }
    // SubProg equal_string pc: 101 op: STARTLINE (58)

    /** eds.e:301		end while*/
    // SubProg equal_string pc: 103 op: ENDWHILE (22)
    goto L2; // [103] 13
    // SubProg equal_string pc: 105 op: NOP1 (159)
L3: // addr: 106 pc: 105 sub: 16165 op: 159
    // SubProg equal_string pc: 106 op: STARTLINE (58)

    /** eds.e:302		return (i = length(target))*/
    // SubProg equal_string pc: 108 op: LENGTH (42)
    if (IS_SEQUENCE(_target_16167)){
            _9005 = SEQ_PTR(_target_16167)->length;
    }
    else {
        _9005 = 1;
    }
    // SubProg equal_string pc: 111 op: EQUALS (3)
    _9006 = (_i_16169 == _9005);
    _9005 = NOVALUE;
    // SubProg equal_string pc: 115 op: RETURNF (28)

// Exiting block BLOCK: equal_string

// block var target_16167
    DeRefDS(_target_16167);

// block var c_16168

// block var i_16169
    return _9006;
    // SubProg equal_string pc: 119 op: BADRETURNF (43)
    ;
}


object _44decompress(object _c_16226)
{
    object _s_16227 = NOVALUE;
    object _len_16228 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_176_16264 = NOVALUE;
    object _ieee32_inlined_float32_to_atom_at_173_16263 = NOVALUE;
    object _float64_to_atom_inlined_float64_to_atom_at_251_16277 = NOVALUE;
    object _ieee64_inlined_float64_to_atom_at_248_16276 = NOVALUE;
    object _9075 = NOVALUE; // 16294 9075
    object _9074 = NOVALUE; // 16293 9074
    object _9073 = NOVALUE; // 16291 9073
// skipping _9072  name type: 0
// skipping _9071  name type: 0
    object _9070 = NOVALUE; // 16287 9070
// skipping _9069  name type: 0
// skipping _9068  name type: 0
// skipping _9067  name type: 0
// skipping _9066  name type: 0
    object _9065 = NOVALUE; // 16274 9065
    object _9064 = NOVALUE; // 16273 9064
    object _9063 = NOVALUE; // 16272 9063
    object _9062 = NOVALUE; // 16271 9062
    object _9061 = NOVALUE; // 16270 9061
    object _9060 = NOVALUE; // 16269 9060
    object _9059 = NOVALUE; // 16268 9059
    object _9058 = NOVALUE; // 16267 9058
    object _9057 = NOVALUE; // 16266 9057
    object _9056 = NOVALUE; // 16261 9056
    object _9055 = NOVALUE; // 16260 9055
    object _9054 = NOVALUE; // 16259 9054
    object _9053 = NOVALUE; // 16258 9053
    object _9052 = NOVALUE; // 16257 9052
    object _9051 = NOVALUE; // 16255 9051
    object _9050 = NOVALUE; // 16254 9050
    object _9049 = NOVALUE; // 16252 9049
    object _9048 = NOVALUE; // 16251 9048
    object _9047 = NOVALUE; // 16250 9047
    object _9046 = NOVALUE; // 16249 9046
    object _9044 = NOVALUE; // 16247 9044
    object _9043 = NOVALUE; // 16246 9043
    object _9042 = NOVALUE; // 16245 9042
    object _9041 = NOVALUE; // 16244 9041
    object _9040 = NOVALUE; // 16242 9040
    object _9039 = NOVALUE; // 16241 9039
    object _9038 = NOVALUE; // 16240 9038
    object _9037 = NOVALUE; // 16239 9037
    object _9036 = NOVALUE; // 16238 9036
    object _9033 = NOVALUE; // 16234 9033
// skipping _9032  name type: 0
// skipping _9031  name type: 0
// skipping _9030  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decompress pc: 1 op: INTEGER_CHECK (96)
    // SubProg decompress pc: 3 op: STARTLINE (58)

    /** eds.e:332		if c = 0 then*/
    // SubProg decompress pc: 5 op: EQUALS_IFW_I (121)
    if (_c_16226 != 0)
    goto L1; // [5] 34
    // SubProg decompress pc: 9 op: STARTLINE (58)

    /** eds.e:333			c = getc(current_db)*/
    // SubProg decompress pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg decompress pc: 13 op: GETC (33)
    if (_44current_db_16085 != last_r_file_no) {
        last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
        last_r_file_no = _44current_db_16085;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_16226 = getc((FILE*)xstdin);
        }
        else{
            _c_16226 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_16226 = getc(last_r_file_ptr);
    }
    // SubProg decompress pc: 16 op: STARTLINE (58)

    /** eds.e:334			if c < I2B then*/
    // SubProg decompress pc: 18 op: LESS_IFW_I (119)
    if (_c_16226 >= 249)
    goto L2; // [18] 33
    // SubProg decompress pc: 22 op: STARTLINE (58)

    /** eds.e:335				return c + MIN1B*/
    // SubProg decompress pc: 24 op: PLUS (11)
    _9033 = _c_16226 + -9;
    // SubProg decompress pc: 28 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
    DeRef(_s_16227);

// block var len_16228
    return _9033;
    // SubProg decompress pc: 32 op: NOP1 (159)
L2: // addr: 33 pc: 32 sub: 16224 op: 159
    // SubProg decompress pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 16224 op: 159
    // SubProg decompress pc: 34 op: STARTLINE (58)

    /** eds.e:339		switch c with fallthru do*/
    // SubProg decompress pc: 36 op: SWITCH_I (193)
    _0 = _c_16226;
    switch ( _0 ){ 
        // SubProg decompress pc: 41 op: STARTLINE (58)

        /** eds.e:340			case I2B then*/
        // SubProg decompress pc: 43 op: CASE (186)
        case 249:
        // SubProg decompress pc: 45 op: STARTLINE (58)

        /** eds.e:341				return getc(current_db) +*/
        // SubProg decompress pc: 47 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 49 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9036 = getc((FILE*)xstdin);
            }
            else{
                _9036 = getc(last_r_file_ptr);
            }
        }
        else{
            _9036 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 52 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 54 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9037 = getc((FILE*)xstdin);
            }
            else{
                _9037 = getc(last_r_file_ptr);
            }
        }
        else{
            _9037 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 57 op: MULTIPLY (13)
        _9038 = 256 * _9037;
        _9037 = NOVALUE;
        // SubProg decompress pc: 61 op: PLUS (11)
        _9039 = _9036 + _9038;
        _9036 = NOVALUE;
        _9038 = NOVALUE;
        // SubProg decompress pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 67 op: PLUS (11)
        _9040 = _9039 + _44MIN2B_16206;
        if ((object)((uintptr_t)_9040 + (uintptr_t)HIGH_BITS) >= 0){
            _9040 = NewDouble((eudouble)_9040);
        }
        _9039 = NOVALUE;
        // SubProg decompress pc: 71 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
        DeRef(_s_16227);

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        return _9040;
        // SubProg decompress pc: 75 op: STARTLINE (58)

        /** eds.e:345			case I3B then*/
        // SubProg decompress pc: 77 op: CASE (186)
        case 250:
        // SubProg decompress pc: 79 op: STARTLINE (58)

        /** eds.e:346				return getc(current_db) +*/
        // SubProg decompress pc: 81 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 83 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9041 = getc((FILE*)xstdin);
            }
            else{
                _9041 = getc(last_r_file_ptr);
            }
        }
        else{
            _9041 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 88 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9042 = getc((FILE*)xstdin);
            }
            else{
                _9042 = getc(last_r_file_ptr);
            }
        }
        else{
            _9042 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 91 op: MULTIPLY (13)
        _9043 = 256 * _9042;
        _9042 = NOVALUE;
        // SubProg decompress pc: 95 op: PLUS (11)
        _9044 = _9041 + _9043;
        _9041 = NOVALUE;
        _9043 = NOVALUE;
        // SubProg decompress pc: 99 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 101 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9046 = getc((FILE*)xstdin);
            }
            else{
                _9046 = getc(last_r_file_ptr);
            }
        }
        else{
            _9046 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 104 op: MULTIPLY (13)
        _9047 = 65536 * _9046;
        _9046 = NOVALUE;
        // SubProg decompress pc: 108 op: PLUS (11)
        _9048 = _9044 + _9047;
        _9044 = NOVALUE;
        _9047 = NOVALUE;
        // SubProg decompress pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 114 op: PLUS (11)
        _9049 = _9048 + _44MIN3B_16213;
        if ((object)((uintptr_t)_9049 + (uintptr_t)HIGH_BITS) >= 0){
            _9049 = NewDouble((eudouble)_9049);
        }
        _9048 = NOVALUE;
        // SubProg decompress pc: 118 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
        DeRef(_s_16227);

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        DeRef(_9040);
        _9040 = NOVALUE;
        return _9049;
        // SubProg decompress pc: 122 op: STARTLINE (58)

        /** eds.e:351			case I4B then*/
        // SubProg decompress pc: 124 op: CASE (186)
        case 251:
        // SubProg decompress pc: 126 op: STARTLINE (58)

        /** eds.e:352				return get4() + MIN4B*/
        // SubProg decompress pc: 128 op: PROC (27)
        _9050 = _44get4();
        // SubProg decompress pc: 131 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 133 op: PLUS (11)
        if (IS_ATOM_INT(_9050) && IS_ATOM_INT(_44MIN4B_16220)) {
            _9051 = _9050 + _44MIN4B_16220;
            if ((object)((uintptr_t)_9051 + (uintptr_t)HIGH_BITS) >= 0){
                _9051 = NewDouble((eudouble)_9051);
            }
        }
        else {
            _9051 = binary_op(PLUS, _9050, _44MIN4B_16220);
        }
        DeRef(_9050);
        _9050 = NOVALUE;
        // SubProg decompress pc: 137 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
        DeRef(_s_16227);

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        DeRef(_9040);
        _9040 = NOVALUE;
        DeRef(_9049);
        _9049 = NOVALUE;
        return _9051;
        // SubProg decompress pc: 141 op: STARTLINE (58)

        /** eds.e:354			case F4B then*/
        // SubProg decompress pc: 143 op: CASE (186)
        case 252:
        // SubProg decompress pc: 145 op: STARTLINE (58)

        /** eds.e:355				return convert:float32_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 149 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 154 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9053 = getc((FILE*)xstdin);
            }
            else{
                _9053 = getc(last_r_file_ptr);
            }
        }
        else{
            _9053 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 159 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 162 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 164 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 167 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9052;
        ((intptr_t*)_2)[2] = _9053;
        ((intptr_t*)_2)[3] = _9054;
        ((intptr_t*)_2)[4] = _9055;
        _9056 = MAKE_SEQ(_1);
        _9055 = NOVALUE;
        _9054 = NOVALUE;
        _9053 = NOVALUE;
        _9052 = NOVALUE;
        // SubProg decompress pc: 174 op: ASSIGN (18)
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_16263);
        _ieee32_inlined_float32_to_atom_at_173_16263 = _9056;
        _9056 = NOVALUE;
        // SubProg decompress pc: 177 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 179 op: STARTLINE (58)

        /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
        // SubProg decompress pc: 181 op: MACHINE_FUNC (111)
        DeRef(_float32_to_atom_inlined_float32_to_atom_at_176_16264);
        _float32_to_atom_inlined_float32_to_atom_at_176_16264 = machine(49, _ieee32_inlined_float32_to_atom_at_173_16263);
        // SubProg decompress pc: 185 op: NOP1 (159)
        // SubProg decompress pc: 186 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float32_to_atom from decompress @ 173

// block var ieee32_inlined_float32_to_atom_at_173_16263
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_16263);
        _ieee32_inlined_float32_to_atom_at_173_16263 = NOVALUE;
        // SubProg decompress pc: 188 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
        DeRef(_s_16227);

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        DeRef(_9051);
        _9051 = NOVALUE;
        DeRef(_9040);
        _9040 = NOVALUE;
        DeRef(_9049);
        _9049 = NOVALUE;
        return _float32_to_atom_inlined_float32_to_atom_at_176_16264;
        // SubProg decompress pc: 192 op: STARTLINE (58)

        /** eds.e:358			case F8B then*/
        // SubProg decompress pc: 194 op: CASE (186)
        case 253:
        // SubProg decompress pc: 196 op: STARTLINE (58)

        /** eds.e:359				return convert:float64_to_atom({getc(current_db), getc(current_db),*/
        // SubProg decompress pc: 198 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 200 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 205 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 208 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 210 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 215 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 218 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 220 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
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
        // SubProg decompress pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 225 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9062 = getc((FILE*)xstdin);
            }
            else{
                _9062 = getc(last_r_file_ptr);
            }
        }
        else{
            _9062 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 228 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 230 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9063 = getc((FILE*)xstdin);
            }
            else{
                _9063 = getc(last_r_file_ptr);
            }
        }
        else{
            _9063 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 235 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _9064 = getc((FILE*)xstdin);
            }
            else{
                _9064 = getc(last_r_file_ptr);
            }
        }
        else{
            _9064 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 238 op: RIGHT_BRACE_N (31)
        _1 = NewS1(8);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _9057;
        ((intptr_t*)_2)[2] = _9058;
        ((intptr_t*)_2)[3] = _9059;
        ((intptr_t*)_2)[4] = _9060;
        ((intptr_t*)_2)[5] = _9061;
        ((intptr_t*)_2)[6] = _9062;
        ((intptr_t*)_2)[7] = _9063;
        ((intptr_t*)_2)[8] = _9064;
        _9065 = MAKE_SEQ(_1);
        _9064 = NOVALUE;
        _9063 = NOVALUE;
        _9062 = NOVALUE;
        _9061 = NOVALUE;
        _9060 = NOVALUE;
        _9059 = NOVALUE;
        _9058 = NOVALUE;
        _9057 = NOVALUE;
        // SubProg decompress pc: 249 op: ASSIGN (18)
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_16276);
        _ieee64_inlined_float64_to_atom_at_248_16276 = _9065;
        _9065 = NOVALUE;
        // SubProg decompress pc: 252 op: SEQUENCE_CHECK (97)
        // SubProg decompress pc: 254 op: STARTLINE (58)

        /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
        // SubProg decompress pc: 256 op: MACHINE_FUNC (111)
        DeRef(_float64_to_atom_inlined_float64_to_atom_at_251_16277);
        _float64_to_atom_inlined_float64_to_atom_at_251_16277 = machine(47, _ieee64_inlined_float64_to_atom_at_248_16276);
        // SubProg decompress pc: 260 op: NOP1 (159)
        // SubProg decompress pc: 261 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-float64_to_atom from decompress @ 248

// block var ieee64_inlined_float64_to_atom_at_248_16276
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_16276);
        _ieee64_inlined_float64_to_atom_at_248_16276 = NOVALUE;
        // SubProg decompress pc: 263 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var s_16227
        DeRef(_s_16227);

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        DeRef(_9051);
        _9051 = NOVALUE;
        DeRef(_9040);
        _9040 = NOVALUE;
        DeRef(_9049);
        _9049 = NOVALUE;
        return _float64_to_atom_inlined_float64_to_atom_at_251_16277;
        // SubProg decompress pc: 267 op: STARTLINE (58)

        /** eds.e:364			case else*/
        // SubProg decompress pc: 269 op: CASE (186)
        default:
        // SubProg decompress pc: 271 op: STARTLINE (58)

        /** eds.e:366				if c = S1B then*/
        // SubProg decompress pc: 273 op: EQUALS_IFW_I (121)
        if (_c_16226 != 254)
        goto L3; // [273] 287
        // SubProg decompress pc: 277 op: STARTLINE (58)

        /** eds.e:367					len = getc(current_db)*/
        // SubProg decompress pc: 279 op: GLOBAL_INIT_CHECK (109)
        // SubProg decompress pc: 281 op: GETC (33)
        if (_44current_db_16085 != last_r_file_no) {
            last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
            last_r_file_no = _44current_db_16085;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _len_16228 = getc((FILE*)xstdin);
            }
            else{
                _len_16228 = getc(last_r_file_ptr);
            }
        }
        else{
            _len_16228 = getc(last_r_file_ptr);
        }
        // SubProg decompress pc: 284 op: ELSE (23)
        goto L4; // [284] 295
        // SubProg decompress pc: 286 op: NOP1 (159)
L3: // addr: 287 pc: 286 sub: 16224 op: 159
        // SubProg decompress pc: 287 op: STARTLINE (58)

        /** eds.e:369					len = get4()*/
        // SubProg decompress pc: 289 op: PROC (27)
        _len_16228 = _44get4();
        // SubProg decompress pc: 292 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_len_16228)) {
            _1 = (object)(DBL_PTR(_len_16228)->dbl);
            DeRefDS(_len_16228);
            _len_16228 = _1;
        }
        // SubProg decompress pc: 294 op: NOP1 (159)
L4: // addr: 295 pc: 294 sub: 16224 op: 159
        // SubProg decompress pc: 295 op: STARTLINE (58)

        /** eds.e:371				s = repeat(0, len)*/
        // SubProg decompress pc: 297 op: PRIVATE_INIT_CHECK (30)
        // SubProg decompress pc: 299 op: REPEAT (32)
        DeRef(_s_16227);
        _s_16227 = Repeat(0, _len_16228);
        // SubProg decompress pc: 303 op: STARTLINE (58)

        /** eds.e:372				for i = 1 to len do*/
        // SubProg decompress pc: 305 op: ASSIGN (18)
        _9070 = _len_16228;
        // SubProg decompress pc: 308 op: FOR_I (125)
        {
            object _i_16286;
            _i_16286 = 1;
L5: // addr: 315 pc: 308 sub: 16224 op: 125
            if (_i_16286 > _9070){
                goto L6; // [308] 362
            }
            // SubProg decompress pc: 315 op: STARTLINE (58)

            /** eds.e:374					c = getc(current_db)*/
            // SubProg decompress pc: 317 op: GLOBAL_INIT_CHECK (109)
            // SubProg decompress pc: 319 op: GETC (33)
            if (_44current_db_16085 != last_r_file_no) {
                last_r_file_ptr = which_file(_44current_db_16085, EF_READ);
                last_r_file_no = _44current_db_16085;
            }
            if (last_r_file_ptr == xstdin) {
                if (in_from_keyb) {
                    _c_16226 = getc((FILE*)xstdin);
                }
                else{
                    _c_16226 = getc(last_r_file_ptr);
                }
            }
            else{
                _c_16226 = getc(last_r_file_ptr);
            }
            // SubProg decompress pc: 322 op: STARTLINE (58)

            /** eds.e:375					if c < I2B then*/
            // SubProg decompress pc: 324 op: LESS_IFW_I (119)
            if (_c_16226 >= 249)
            goto L7; // [324] 341
            // SubProg decompress pc: 328 op: STARTLINE (58)

            /** eds.e:376						s[i] = c + MIN1B*/
            // SubProg decompress pc: 330 op: PLUS (11)
            _9073 = _c_16226 + -9;
            // SubProg decompress pc: 334 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_16227);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_16227 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_16286);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9073;
            if( _1 != _9073 ){
                DeRef(_1);
            }
            _9073 = NOVALUE;
            // SubProg decompress pc: 338 op: ELSE (23)
            goto L8; // [338] 355
            // SubProg decompress pc: 340 op: NOP1 (159)
L7: // addr: 341 pc: 340 sub: 16224 op: 159
            // SubProg decompress pc: 341 op: STARTLINE (58)

            /** eds.e:378						s[i] = decompress(c)*/
            // SubProg decompress pc: 343 op: ASSIGN (18)
            DeRef(_9074);
            _9074 = _c_16226;
            // SubProg decompress pc: 346 op: PROC (27)
            _9075 = _44decompress(_9074);
            _9074 = NOVALUE;
            // SubProg decompress pc: 350 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_s_16227);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_16227 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_16286);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9075;
            if( _1 != _9075 ){
                DeRef(_1);
            }
            _9075 = NOVALUE;
            // SubProg decompress pc: 354 op: NOP1 (159)
L8: // addr: 355 pc: 354 sub: 16224 op: 159
            // SubProg decompress pc: 355 op: STARTLINE (58)

            /** eds.e:380				end for*/
            // SubProg decompress pc: 357 op: ENDFOR_INT_UP1 (54)
            _i_16286 = _i_16286 + 1;
            goto L5; // [357] 315
L6: // addr: 362 pc: 357 sub: 16224 op: 54
            ;
        }
        // SubProg decompress pc: 362 op: STARTLINE (58)

        /** eds.e:381				return s*/
        // SubProg decompress pc: 364 op: RETURNF (28)

// Exiting block BLOCK: decompress

// block var c_16226

// block var len_16228
        DeRef(_9033);
        _9033 = NOVALUE;
        DeRef(_9051);
        _9051 = NOVALUE;
        DeRef(_9040);
        _9040 = NOVALUE;
        DeRef(_9049);
        _9049 = NOVALUE;
        return _s_16227;
        // SubProg decompress pc: 368 op: NOPSWITCH (187)
    ;}    // SubProg decompress pc: 369 op: BADRETURNF (43)
    ;
}


object _44compress(object _x_16297)
{
    object _x4_16298 = NOVALUE;
    object _s_16299 = NOVALUE;
    object _atom_to_float32_inlined_atom_to_float32_at_193_16333 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_204_16336 = NOVALUE;
    object _atom_to_float64_inlined_atom_to_float64_at_230_16341 = NOVALUE;
// skipping _9115  name type: 0
    object _9114 = NOVALUE; // 16357 9114
    object _9113 = NOVALUE; // 16356 9113
    object _9112 = NOVALUE; // 16355 9112
// skipping _9111  name type: 0
    object _9110 = NOVALUE; // 16351 9110
    object _9109 = NOVALUE; // 16350 9109
// skipping _9108  name type: 0
    object _9107 = NOVALUE; // 16347 9107
// skipping _9106  name type: 0
    object _9105 = NOVALUE; // 16345 9105
    object _9104 = NOVALUE; // 16342 9104
    object _9103 = NOVALUE; // 16338 9103
// skipping _9102  name type: 0
    object _9101 = NOVALUE; // 16331 9101
    object _9100 = NOVALUE; // 16329 9100
    object _9099 = NOVALUE; // 16328 9099
    object _9098 = NOVALUE; // 16327 9098
    object _9097 = NOVALUE; // 16325 9097
    object _9096 = NOVALUE; // 16324 9096
    object _9095 = NOVALUE; // 16323 9095
    object _9094 = NOVALUE; // 16322 9094
    object _9093 = NOVALUE; // 16321 9093
// skipping _9092  name type: 0
    object _9091 = NOVALUE; // 16319 9091
    object _9090 = NOVALUE; // 16318 9090
    object _9089 = NOVALUE; // 16317 9089
    object _9088 = NOVALUE; // 16315 9088
    object _9087 = NOVALUE; // 16314 9087
    object _9086 = NOVALUE; // 16313 9086
// skipping _9085  name type: 0
    object _9084 = NOVALUE; // 16311 9084
    object _9083 = NOVALUE; // 16310 9083
    object _9082 = NOVALUE; // 16309 9082
    object _9081 = NOVALUE; // 16307 9081
    object _9080 = NOVALUE; // 16306 9080
    object _9079 = NOVALUE; // 16305 9079
    object _9078 = NOVALUE; // 16304 9078
    object _9077 = NOVALUE; // 16303 9077
    object _9076 = NOVALUE; // 16301 9076
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg compress pc: 1 op: STARTLINE (58)

    /** eds.e:390		if integer(x) then*/
    // SubProg compress pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_x_16297))
    _9076 = 1;
    else if (IS_ATOM_DBL(_x_16297))
    _9076 = IS_ATOM_INT(DoubleToInt(_x_16297));
    else
    _9076 = 0;
    // SubProg compress pc: 6 op: IF (20)
    if (_9076 == 0)
    {
        _9076 = NOVALUE;
        goto L1; // [6] 184
    }
    else{
        _9076 = NOVALUE;
    }
    // SubProg compress pc: 9 op: STARTLINE (58)

    /** eds.e:391			if x >= MIN1B and x <= MAX1B then*/
    // SubProg compress pc: 11 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16297)) {
        _9077 = (_x_16297 >= -9);
    }
    else {
        _9077 = binary_op(GREATEREQ, _x_16297, -9);
    }
    // SubProg compress pc: 15 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9077)) {
        if (_9077 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_9077)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    // SubProg compress pc: 19 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16297)) {
        _9079 = (_x_16297 <= 239);
    }
    else {
        _9079 = binary_op(LESSEQ, _x_16297, 239);
    }
    // SubProg compress pc: 23 op: NOP1 (159)
    // SubProg compress pc: 24 op: IF (20)
    if (_9079 == 0) {
        DeRef(_9079);
        _9079 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_9079) && DBL_PTR(_9079)->dbl == 0.0){
            DeRef(_9079);
            _9079 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_9079);
        _9079 = NOVALUE;
    }
    DeRef(_9079);
    _9079 = NOVALUE;
    // SubProg compress pc: 27 op: STARTLINE (58)

    /** eds.e:392				return {x - MIN1B}*/
    // SubProg compress pc: 29 op: MINUS (10)
    if (IS_ATOM_INT(_x_16297)) {
        _9080 = _x_16297 - -9;
        if ((object)((uintptr_t)_9080 +(uintptr_t) HIGH_BITS) >= 0){
            _9080 = NewDouble((eudouble)_9080);
        }
    }
    else {
        _9080 = binary_op(MINUS, _x_16297, -9);
    }
    // SubProg compress pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _9080;
    _9081 = MAKE_SEQ(_1);
    _9080 = NOVALUE;
    // SubProg compress pc: 37 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9077);
    _9077 = NOVALUE;
    return _9081;
    // SubProg compress pc: 41 op: ELSE (23)
    goto L3; // [41] 330
    // SubProg compress pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 16295 op: 159
    // SubProg compress pc: 44 op: STARTLINE (58)

    /** eds.e:394			elsif x >= MIN2B and x <= MAX2B then*/
    // SubProg compress pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 48 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16297)) {
        _9082 = (_x_16297 >= _44MIN2B_16206);
    }
    else {
        _9082 = binary_op(GREATEREQ, _x_16297, _44MIN2B_16206);
    }
    // SubProg compress pc: 52 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9082)) {
        if (_9082 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_9082)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    // SubProg compress pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16297)) {
        _9084 = (_x_16297 <= 32767);
    }
    else {
        _9084 = binary_op(LESSEQ, _x_16297, 32767);
    }
    // SubProg compress pc: 62 op: NOP1 (159)
    // SubProg compress pc: 63 op: IF (20)
    if (_9084 == 0) {
        DeRef(_9084);
        _9084 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_9084) && DBL_PTR(_9084)->dbl == 0.0){
            DeRef(_9084);
            _9084 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_9084);
        _9084 = NOVALUE;
    }
    DeRef(_9084);
    _9084 = NOVALUE;
    // SubProg compress pc: 66 op: STARTLINE (58)

    /** eds.e:395				x -= MIN2B*/
    // SubProg compress pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 70 op: MINUS (10)
    _0 = _x_16297;
    if (IS_ATOM_INT(_x_16297)) {
        _x_16297 = _x_16297 - _44MIN2B_16206;
        if ((object)((uintptr_t)_x_16297 +(uintptr_t) HIGH_BITS) >= 0){
            _x_16297 = NewDouble((eudouble)_x_16297);
        }
    }
    else {
        _x_16297 = binary_op(MINUS, _x_16297, _44MIN2B_16206);
    }
    DeRef(_0);
    // SubProg compress pc: 74 op: STARTLINE (58)

    /** eds.e:396				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    // SubProg compress pc: 76 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_16297)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_16297 & (uintptr_t)255;
             _9086 = MAKE_UINT(tu);
        }
    }
    else {
        _9086 = binary_op(AND_BITS, _x_16297, 255);
    }
    // SubProg compress pc: 80 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16297)) {
        if (256 > 0 && _x_16297 >= 0) {
            _9087 = _x_16297 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16297 / (eudouble)256);
            if (_x_16297 != MININT)
            _9087 = (object)temp_dbl;
            else
            _9087 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16297, 256);
        _9087 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 249;
    ((intptr_t*)_2)[2] = _9086;
    ((intptr_t*)_2)[3] = _9087;
    _9088 = MAKE_SEQ(_1);
    _9087 = NOVALUE;
    _9086 = NOVALUE;
    // SubProg compress pc: 90 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    return _9088;
    // SubProg compress pc: 94 op: ELSE (23)
    goto L3; // [94] 330
    // SubProg compress pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 16295 op: 159
    // SubProg compress pc: 97 op: STARTLINE (58)

    /** eds.e:398			elsif x >= MIN3B and x <= MAX3B then*/
    // SubProg compress pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 101 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_16297)) {
        _9089 = (_x_16297 >= _44MIN3B_16213);
    }
    else {
        _9089 = binary_op(GREATEREQ, _x_16297, _44MIN3B_16213);
    }
    // SubProg compress pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_9089)) {
        if (_9089 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_9089)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    // SubProg compress pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 111 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_16297)) {
        _9091 = (_x_16297 <= 8388607);
    }
    else {
        _9091 = binary_op(LESSEQ, _x_16297, 8388607);
    }
    // SubProg compress pc: 115 op: NOP1 (159)
    // SubProg compress pc: 116 op: IF (20)
    if (_9091 == 0) {
        DeRef(_9091);
        _9091 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_9091) && DBL_PTR(_9091)->dbl == 0.0){
            DeRef(_9091);
            _9091 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_9091);
        _9091 = NOVALUE;
    }
    DeRef(_9091);
    _9091 = NOVALUE;
    // SubProg compress pc: 119 op: STARTLINE (58)

    /** eds.e:399				x -= MIN3B*/
    // SubProg compress pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 123 op: MINUS (10)
    _0 = _x_16297;
    if (IS_ATOM_INT(_x_16297)) {
        _x_16297 = _x_16297 - _44MIN3B_16213;
        if ((object)((uintptr_t)_x_16297 +(uintptr_t) HIGH_BITS) >= 0){
            _x_16297 = NewDouble((eudouble)_x_16297);
        }
    }
    else {
        _x_16297 = binary_op(MINUS, _x_16297, _44MIN3B_16213);
    }
    DeRef(_0);
    // SubProg compress pc: 127 op: STARTLINE (58)

    /** eds.e:400				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    // SubProg compress pc: 129 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_16297)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_16297 & (uintptr_t)255;
             _9093 = MAKE_UINT(tu);
        }
    }
    else {
        _9093 = binary_op(AND_BITS, _x_16297, 255);
    }
    // SubProg compress pc: 133 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16297)) {
        if (256 > 0 && _x_16297 >= 0) {
            _9094 = _x_16297 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16297 / (eudouble)256);
            if (_x_16297 != MININT)
            _9094 = (object)temp_dbl;
            else
            _9094 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16297, 256);
        _9094 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 137 op: AND_BITS (56)
    if (IS_ATOM_INT(_9094)) {
        {uintptr_t tu;
             tu = (uintptr_t)_9094 & (uintptr_t)255;
             _9095 = MAKE_UINT(tu);
        }
    }
    else {
        _9095 = binary_op(AND_BITS, _9094, 255);
    }
    DeRef(_9094);
    _9094 = NOVALUE;
    // SubProg compress pc: 141 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_16297)) {
        if (65536 > 0 && _x_16297 >= 0) {
            _9096 = _x_16297 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_16297 / (eudouble)65536);
            if (_x_16297 != MININT)
            _9096 = (object)temp_dbl;
            else
            _9096 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_16297, 65536);
        _9096 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 145 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 250;
    ((intptr_t*)_2)[2] = _9093;
    ((intptr_t*)_2)[3] = _9095;
    ((intptr_t*)_2)[4] = _9096;
    _9097 = MAKE_SEQ(_1);
    _9096 = NOVALUE;
    _9095 = NOVALUE;
    _9093 = NOVALUE;
    // SubProg compress pc: 152 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9088);
    _9088 = NOVALUE;
    DeRef(_9089);
    _9089 = NOVALUE;
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    return _9097;
    // SubProg compress pc: 156 op: ELSE (23)
    goto L3; // [156] 330
    // SubProg compress pc: 158 op: NOP1 (159)
L5: // addr: 159 pc: 158 sub: 16295 op: 159
    // SubProg compress pc: 159 op: STARTLINE (58)

    /** eds.e:403				return I4B & convert:int_to_bytes(x-MIN4B)*/
    // SubProg compress pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 163 op: MINUS (10)
    if (IS_ATOM_INT(_x_16297) && IS_ATOM_INT(_44MIN4B_16220)) {
        _9098 = _x_16297 - _44MIN4B_16220;
        if ((object)((uintptr_t)_9098 +(uintptr_t) HIGH_BITS) >= 0){
            _9098 = NewDouble((eudouble)_9098);
        }
    }
    else {
        _9098 = binary_op(MINUS, _x_16297, _44MIN4B_16220);
    }
    // SubProg compress pc: 167 op: PROC (27)
    _9099 = _16int_to_bytes(_9098, 4);
    _9098 = NOVALUE;
    // SubProg compress pc: 172 op: CONCAT (15)
    if (IS_SEQUENCE(251) && IS_ATOM(_9099)) {
    }
    else if (IS_ATOM(251) && IS_SEQUENCE(_9099)) {
        Prepend(&_9100, _9099, 251);
    }
    else {
        Concat((object_ptr)&_9100, 251, _9099);
    }
    DeRef(_9099);
    _9099 = NOVALUE;
    // SubProg compress pc: 176 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9088);
    _9088 = NOVALUE;
    DeRef(_9089);
    _9089 = NOVALUE;
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    DeRef(_9097);
    _9097 = NOVALUE;
    return _9100;
    // SubProg compress pc: 180 op: NOP1 (159)
    // SubProg compress pc: 181 op: ELSE (23)
    goto L3; // [181] 330
    // SubProg compress pc: 183 op: NOP1 (159)
L1: // addr: 184 pc: 183 sub: 16295 op: 159
    // SubProg compress pc: 184 op: STARTLINE (58)

    /** eds.e:407		elsif atom(x) then*/
    // SubProg compress pc: 186 op: IS_AN_ATOM (67)
    _9101 = IS_ATOM(_x_16297);
    // SubProg compress pc: 189 op: IF (20)
    if (_9101 == 0)
    {
        _9101 = NOVALUE;
        goto L6; // [189] 250
    }
    else{
        _9101 = NOVALUE;
    }
    // SubProg compress pc: 192 op: STARTLINE (58)

    /** eds.e:409			x4 = convert:atom_to_float32(x)*/
    // SubProg compress pc: 194 op: STARTLINE (58)

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    // SubProg compress pc: 196 op: MACHINE_FUNC (111)
    DeRefi(_x4_16298);
    _x4_16298 = machine(48, _x_16297);
    // SubProg compress pc: 200 op: NOP1 (159)
    // SubProg compress pc: 201 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 203 op: STARTLINE (58)

    /** eds.e:410			if x = convert:float32_to_atom(x4) then*/
    // SubProg compress pc: 205 op: STARTLINE (58)

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    // SubProg compress pc: 207 op: MACHINE_FUNC (111)
    DeRef(_float32_to_atom_inlined_float32_to_atom_at_204_16336);
    _float32_to_atom_inlined_float32_to_atom_at_204_16336 = machine(49, _x4_16298);
    // SubProg compress pc: 211 op: NOP1 (159)
    // SubProg compress pc: 212 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_16297, _float32_to_atom_inlined_float32_to_atom_at_204_16336)){
        goto L7; // [212] 229
    }
    // SubProg compress pc: 216 op: STARTLINE (58)

    /** eds.e:412				return F4B & x4*/
    // SubProg compress pc: 218 op: CONCAT (15)
    Prepend(&_9103, _x4_16298, 252);
    // SubProg compress pc: 222 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefDSi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9088);
    _9088 = NOVALUE;
    DeRef(_9089);
    _9089 = NOVALUE;
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9100);
    _9100 = NOVALUE;
    return _9103;
    // SubProg compress pc: 226 op: ELSE (23)
    goto L3; // [226] 330
    // SubProg compress pc: 228 op: NOP1 (159)
L7: // addr: 229 pc: 228 sub: 16295 op: 159
    // SubProg compress pc: 229 op: STARTLINE (58)

    /** eds.e:414				return F8B & convert:atom_to_float64(x)*/
    // SubProg compress pc: 231 op: STARTLINE (58)

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    // SubProg compress pc: 233 op: MACHINE_FUNC (111)
    DeRefi(_atom_to_float64_inlined_atom_to_float64_at_230_16341);
    _atom_to_float64_inlined_atom_to_float64_at_230_16341 = machine(46, _x_16297);
    // SubProg compress pc: 237 op: NOP1 (159)
    // SubProg compress pc: 238 op: CONCAT (15)
    Prepend(&_9104, _atom_to_float64_inlined_atom_to_float64_at_230_16341, 253);
    // SubProg compress pc: 242 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);

// block var s_16299
    DeRef(_s_16299);
    DeRef(_9088);
    _9088 = NOVALUE;
    DeRef(_9089);
    _9089 = NOVALUE;
    DeRef(_9103);
    _9103 = NOVALUE;
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9100);
    _9100 = NOVALUE;
    return _9104;
    // SubProg compress pc: 246 op: NOP1 (159)
    // SubProg compress pc: 247 op: ELSE (23)
    goto L3; // [247] 330
    // SubProg compress pc: 249 op: NOP1 (159)
L6: // addr: 250 pc: 249 sub: 16295 op: 159
    // SubProg compress pc: 250 op: STARTLINE (58)

    /** eds.e:419			if length(x) <= 255 then*/
    // SubProg compress pc: 252 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16297)){
            _9105 = SEQ_PTR(_x_16297)->length;
    }
    else {
        _9105 = 1;
    }
    // SubProg compress pc: 255 op: LESSEQ_IFW_I (123)
    if (_9105 > 255)
    goto L8; // [255] 271
    // SubProg compress pc: 259 op: STARTLINE (58)

    /** eds.e:420				s = {S1B, length(x)}*/
    // SubProg compress pc: 261 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16297)){
            _9107 = SEQ_PTR(_x_16297)->length;
    }
    else {
        _9107 = 1;
    }
    // SubProg compress pc: 264 op: RIGHT_BRACE_2 (85)
    DeRef(_s_16299);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _9107;
    _s_16299 = MAKE_SEQ(_1);
    _9107 = NOVALUE;
    // SubProg compress pc: 268 op: ELSE (23)
    goto L9; // [268] 286
    // SubProg compress pc: 270 op: NOP1 (159)
L8: // addr: 271 pc: 270 sub: 16295 op: 159
    // SubProg compress pc: 271 op: STARTLINE (58)

    /** eds.e:422				s = S4B & convert:int_to_bytes(length(x))*/
    // SubProg compress pc: 273 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16297)){
            _9109 = SEQ_PTR(_x_16297)->length;
    }
    else {
        _9109 = 1;
    }
    // SubProg compress pc: 276 op: PROC (27)
    _9110 = _16int_to_bytes(_9109, 4);
    _9109 = NOVALUE;
    // SubProg compress pc: 281 op: CONCAT (15)
    if (IS_SEQUENCE(255) && IS_ATOM(_9110)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_9110)) {
        Prepend(&_s_16299, _9110, 255);
    }
    else {
        Concat((object_ptr)&_s_16299, 255, _9110);
    }
    DeRef(_9110);
    _9110 = NOVALUE;
    // SubProg compress pc: 285 op: NOP1 (159)
L9: // addr: 286 pc: 285 sub: 16295 op: 159
    // SubProg compress pc: 286 op: STARTLINE (58)

    /** eds.e:424			for i = 1 to length(x) do*/
    // SubProg compress pc: 288 op: LENGTH (42)
    if (IS_SEQUENCE(_x_16297)){
            _9112 = SEQ_PTR(_x_16297)->length;
    }
    else {
        _9112 = 1;
    }
    // SubProg compress pc: 291 op: FOR_I (125)
    {
        object _i_16354;
        _i_16354 = 1;
LA: // addr: 298 pc: 291 sub: 16295 op: 125
        if (_i_16354 > _9112){
            goto LB; // [291] 321
        }
        // SubProg compress pc: 298 op: STARTLINE (58)

        /** eds.e:425				s &= compress(x[i])*/
        // SubProg compress pc: 300 op: PRIVATE_INIT_CHECK (30)
        // SubProg compress pc: 302 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_16297);
        _9113 = (object)*(((s1_ptr)_2)->base + _i_16354);
        // SubProg compress pc: 306 op: PROC (27)
        Ref(_9113);
        _9114 = _44compress(_9113);
        _9113 = NOVALUE;
        // SubProg compress pc: 310 op: CONCAT (15)
        if (IS_SEQUENCE(_s_16299) && IS_ATOM(_9114)) {
            Ref(_9114);
            Append(&_s_16299, _s_16299, _9114);
        }
        else if (IS_ATOM(_s_16299) && IS_SEQUENCE(_9114)) {
        }
        else {
            Concat((object_ptr)&_s_16299, _s_16299, _9114);
        }
        DeRef(_9114);
        _9114 = NOVALUE;
        // SubProg compress pc: 314 op: STARTLINE (58)

        /** eds.e:426			end for*/
        // SubProg compress pc: 316 op: ENDFOR_INT_UP1 (54)
        _i_16354 = _i_16354 + 1;
        goto LA; // [316] 298
LB: // addr: 321 pc: 316 sub: 16295 op: 54
        ;
    }
    // SubProg compress pc: 321 op: STARTLINE (58)

    /** eds.e:427			return s*/
    // SubProg compress pc: 323 op: PRIVATE_INIT_CHECK (30)
    // SubProg compress pc: 325 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_16297
    DeRef(_x_16297);

// block var x4_16298
    DeRefi(_x4_16298);
    DeRef(_9088);
    _9088 = NOVALUE;
    DeRef(_9089);
    _9089 = NOVALUE;
    DeRef(_9103);
    _9103 = NOVALUE;
    DeRef(_9077);
    _9077 = NOVALUE;
    DeRef(_9081);
    _9081 = NOVALUE;
    DeRef(_9082);
    _9082 = NOVALUE;
    DeRef(_9097);
    _9097 = NOVALUE;
    DeRef(_9104);
    _9104 = NOVALUE;
    DeRef(_9100);
    _9100 = NOVALUE;
    return _s_16299;
    // SubProg compress pc: 329 op: NOP1 (159)
L3: // addr: 330 pc: 329 sub: 16295 op: 159
    // SubProg compress pc: 330 op: BADRETURNF (43)
    ;
}


object _44db_allocate(object _n_16739)
{
    object _free_list_16740 = NOVALUE;
    object _size_16741 = NOVALUE;
    object _size_ptr_16742 = NOVALUE;
    object _addr_16743 = NOVALUE;
    object _free_count_16744 = NOVALUE;
    object _remaining_16745 = NOVALUE;
    object _seek_1__tmp_at4_16748 = NOVALUE;
    object _seek_inlined_seek_at_4_16747 = NOVALUE;
    object _seek_1__tmp_at39_16755 = NOVALUE;
    object _seek_inlined_seek_at_39_16754 = NOVALUE;
    object _seek_1__tmp_at111_16772 = NOVALUE;
    object _seek_inlined_seek_at_111_16771 = NOVALUE;
    object _pos_inlined_seek_at_108_16770 = NOVALUE;
    object _put4_1__tmp_at137_16777 = NOVALUE;
    object _x_inlined_put4_at_134_16776 = NOVALUE;
    object _seek_1__tmp_at167_16780 = NOVALUE;
    object _seek_inlined_seek_at_167_16779 = NOVALUE;
    object _put4_1__tmp_at193_16785 = NOVALUE;
    object _x_inlined_put4_at_190_16784 = NOVALUE;
    object _seek_1__tmp_at244_16793 = NOVALUE;
    object _seek_inlined_seek_at_244_16792 = NOVALUE;
    object _pos_inlined_seek_at_241_16791 = NOVALUE;
    object _put4_1__tmp_at266_16797 = NOVALUE;
    object _x_inlined_put4_at_263_16796 = NOVALUE;
    object _seek_1__tmp_at333_16808 = NOVALUE;
    object _seek_inlined_seek_at_333_16807 = NOVALUE;
    object _pos_inlined_seek_at_330_16806 = NOVALUE;
    object _seek_1__tmp_at364_16812 = NOVALUE;
    object _seek_inlined_seek_at_364_16811 = NOVALUE;
    object _put4_1__tmp_at386_16816 = NOVALUE;
    object _x_inlined_put4_at_383_16815 = NOVALUE;
    object _seek_1__tmp_at423_16821 = NOVALUE;
    object _seek_inlined_seek_at_423_16820 = NOVALUE;
    object _pos_inlined_seek_at_420_16819 = NOVALUE;
    object _put4_1__tmp_at438_16823 = NOVALUE;
    object _seek_1__tmp_at490_16827 = NOVALUE;
    object _seek_inlined_seek_at_490_16826 = NOVALUE;
    object _put4_1__tmp_at512_16831 = NOVALUE;
    object _x_inlined_put4_at_509_16830 = NOVALUE;
    object _where_inlined_where_at_542_16833 = NOVALUE;
    object _9327 = NOVALUE; // 16828 9327
// skipping _9326  name type: 0
    object _9325 = NOVALUE; // 16817 9325
    object _9324 = NOVALUE; // 16813 9324
    object _9323 = NOVALUE; // 16804 9323
    object _9322 = NOVALUE; // 16803 9322
    object _9321 = NOVALUE; // 16802 9321
// skipping _9320  name type: 0
    object _9319 = NOVALUE; // 16800 9319
    object _9318 = NOVALUE; // 16799 9318
    object _9317 = NOVALUE; // 16794 9317
    object _9316 = NOVALUE; // 16789 9316
// skipping _9315  name type: 0
    object _9314 = NOVALUE; // 16787 9314
    object _9313 = NOVALUE; // 16786 9313
    object _9312 = NOVALUE; // 16782 9312
    object _9311 = NOVALUE; // 16781 9311
    object _9310 = NOVALUE; // 16774 9310
    object _9309 = NOVALUE; // 16773 9309
    object _9308 = NOVALUE; // 16768 9308
// skipping _9307  name type: 0
    object _9306 = NOVALUE; // 16766 9306
// skipping _9305  name type: 0
    object _9304 = NOVALUE; // 16763 9304
// skipping _9303  name type: 0
// skipping _9302  name type: 0
    object _9301 = NOVALUE; // 16759 9301
// skipping _9300  name type: 0
// skipping _9299  name type: 0
// skipping _9298  name type: 0
// skipping _9297  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_allocate pc: 1 op: STARTLINE (58)

    /** eds.e:795		io:seek(current_db, FREE_COUNT)*/
    // SubProg db_allocate pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 5 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 7 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at4_16748);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at4_16748 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 11 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_4_16747 = machine(19, _seek_1__tmp_at4_16748);
    // SubProg db_allocate pc: 15 op: NOP1 (159)
    // SubProg db_allocate pc: 16 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 4

// block var seek_1__tmp_at4_16748
    DeRefi(_seek_1__tmp_at4_16748);
    _seek_1__tmp_at4_16748 = NOVALUE;
    // SubProg db_allocate pc: 18 op: STARTLINE (58)

    /** eds.e:796		free_count = get4()*/
    // SubProg db_allocate pc: 20 op: PROC (27)
    _free_count_16744 = _44get4();
    // SubProg db_allocate pc: 23 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16744)) {
        _1 = (object)(DBL_PTR(_free_count_16744)->dbl);
        DeRefDS(_free_count_16744);
        _free_count_16744 = _1;
    }
    // SubProg db_allocate pc: 25 op: STARTLINE (58)

    /** eds.e:797		if free_count > 0 then*/
    // SubProg db_allocate pc: 27 op: GREATER_IFW_I (124)
    if (_free_count_16744 <= 0)
    goto L1; // [27] 487
    // SubProg db_allocate pc: 31 op: STARTLINE (58)

    /** eds.e:798			free_list = get4()*/
    // SubProg db_allocate pc: 33 op: PROC (27)
    _0 = _free_list_16740;
    _free_list_16740 = _44get4();
    DeRef(_0);
    // SubProg db_allocate pc: 36 op: STARTLINE (58)

    /** eds.e:799			io:seek(current_db, free_list)*/
    // SubProg db_allocate pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 40 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 42 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16740);
    DeRef(_seek_1__tmp_at39_16755);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _free_list_16740;
    _seek_1__tmp_at39_16755 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 46 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_39_16754 = machine(19, _seek_1__tmp_at39_16755);
    // SubProg db_allocate pc: 50 op: NOP1 (159)
    // SubProg db_allocate pc: 51 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 39

// block var seek_1__tmp_at39_16755
    DeRef(_seek_1__tmp_at39_16755);
    _seek_1__tmp_at39_16755 = NOVALUE;
    // SubProg db_allocate pc: 53 op: STARTLINE (58)

    /** eds.e:800			size_ptr = free_list + 4*/
    // SubProg db_allocate pc: 55 op: PLUS (11)
    DeRef(_size_ptr_16742);
    if (IS_ATOM_INT(_free_list_16740)) {
        _size_ptr_16742 = _free_list_16740 + 4;
        if ((object)((uintptr_t)_size_ptr_16742 + (uintptr_t)HIGH_BITS) >= 0){
            _size_ptr_16742 = NewDouble((eudouble)_size_ptr_16742);
        }
    }
    else {
        _size_ptr_16742 = NewDouble(DBL_PTR(_free_list_16740)->dbl + (eudouble)4);
    }
    // SubProg db_allocate pc: 59 op: STARTLINE (58)

    /** eds.e:801			for i = 1 to free_count do*/
    // SubProg db_allocate pc: 61 op: ASSIGN (18)
    _9301 = _free_count_16744;
    // SubProg db_allocate pc: 64 op: FOR_I (125)
    {
        object _i_16758;
        _i_16758 = 1;
L2: // addr: 71 pc: 64 sub: 16737 op: 125
        if (_i_16758 > _9301){
            goto L3; // [64] 486
        }
        // SubProg db_allocate pc: 71 op: STARTLINE (58)

        /** eds.e:802				addr = get4()*/
        // SubProg db_allocate pc: 73 op: PROC (27)
        _0 = _addr_16743;
        _addr_16743 = _44get4();
        DeRef(_0);
        // SubProg db_allocate pc: 76 op: STARTLINE (58)

        /** eds.e:803				size = get4()*/
        // SubProg db_allocate pc: 78 op: PROC (27)
        _0 = _size_16741;
        _size_16741 = _44get4();
        DeRef(_0);
        // SubProg db_allocate pc: 81 op: STARTLINE (58)

        /** eds.e:804				if size >= n+4 then*/
        // SubProg db_allocate pc: 83 op: PLUS (11)
        if (IS_ATOM_INT(_n_16739)) {
            _9304 = _n_16739 + 4;
            if ((object)((uintptr_t)_9304 + (uintptr_t)HIGH_BITS) >= 0){
                _9304 = NewDouble((eudouble)_9304);
            }
        }
        else {
            _9304 = NewDouble(DBL_PTR(_n_16739)->dbl + (eudouble)4);
        }
        // SubProg db_allocate pc: 87 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _size_16741, _9304)){
            DeRef(_9304);
            _9304 = NOVALUE;
            goto L4; // [87] 473
        }
        DeRef(_9304);
        _9304 = NOVALUE;
        // SubProg db_allocate pc: 91 op: STARTLINE (58)

        /** eds.e:806					if size >= n+16 then*/
        // SubProg db_allocate pc: 93 op: PLUS (11)
        if (IS_ATOM_INT(_n_16739)) {
            _9306 = _n_16739 + 16;
            if ((object)((uintptr_t)_9306 + (uintptr_t)HIGH_BITS) >= 0){
                _9306 = NewDouble((eudouble)_9306);
            }
        }
        else {
            _9306 = NewDouble(DBL_PTR(_n_16739)->dbl + (eudouble)16);
        }
        // SubProg db_allocate pc: 97 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _size_16741, _9306)){
            DeRef(_9306);
            _9306 = NOVALUE;
            goto L5; // [97] 296
        }
        DeRef(_9306);
        _9306 = NOVALUE;
        // SubProg db_allocate pc: 101 op: STARTLINE (58)

        /** eds.e:808						io:seek(current_db, addr - 4)*/
        // SubProg db_allocate pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 105 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16743)) {
            _9308 = _addr_16743 - 4;
            if ((object)((uintptr_t)_9308 +(uintptr_t) HIGH_BITS) >= 0){
                _9308 = NewDouble((eudouble)_9308);
            }
        }
        else {
            _9308 = NewDouble(DBL_PTR(_addr_16743)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 109 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_108_16770);
        _pos_inlined_seek_at_108_16770 = _9308;
        _9308 = NOVALUE;
        // SubProg db_allocate pc: 112 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 114 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_108_16770);
        DeRef(_seek_1__tmp_at111_16772);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_108_16770;
        _seek_1__tmp_at111_16772 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 118 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_111_16771 = machine(19, _seek_1__tmp_at111_16772);
        // SubProg db_allocate pc: 122 op: NOP1 (159)
        // SubProg db_allocate pc: 123 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 108

// block var pos_inlined_seek_at_108_16770
        DeRef(_pos_inlined_seek_at_108_16770);
        _pos_inlined_seek_at_108_16770 = NOVALUE;

// block var seek_1__tmp_at111_16772
        DeRef(_seek_1__tmp_at111_16772);
        _seek_1__tmp_at111_16772 = NOVALUE;
        // SubProg db_allocate pc: 125 op: STARTLINE (58)

        /** eds.e:809						put4(size-n-4) -- shrink the block*/
        // SubProg db_allocate pc: 127 op: MINUS (10)
        if (IS_ATOM_INT(_size_16741) && IS_ATOM_INT(_n_16739)) {
            _9309 = _size_16741 - _n_16739;
            if ((object)((uintptr_t)_9309 +(uintptr_t) HIGH_BITS) >= 0){
                _9309 = NewDouble((eudouble)_9309);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16741)) {
                _9309 = NewDouble((eudouble)_size_16741 - DBL_PTR(_n_16739)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16739)) {
                    _9309 = NewDouble(DBL_PTR(_size_16741)->dbl - (eudouble)_n_16739);
                }
                else
                _9309 = NewDouble(DBL_PTR(_size_16741)->dbl - DBL_PTR(_n_16739)->dbl);
            }
        }
        // SubProg db_allocate pc: 131 op: MINUS (10)
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
        // SubProg db_allocate pc: 135 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_134_16776);
        _x_inlined_put4_at_134_16776 = _9310;
        _9310 = NOVALUE;
        // SubProg db_allocate pc: 138 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 140 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 142 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_134_16776)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_134_16776;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_134_16776)->dbl;
        }
        // SubProg db_allocate pc: 145 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 147 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 149 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 151 op: PEEK (127)
        DeRefi(_put4_1__tmp_at137_16777);
        _1 = (object)SEQ_PTR(_44memseq_16362);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at137_16777 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 154 op: PUTS (44)
        EPuts(_44current_db_16085, _put4_1__tmp_at137_16777); // DJP 
        // SubProg db_allocate pc: 157 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 159 op: ELSE (23)
        goto L6; // [159] 162
        // SubProg db_allocate pc: 161 op: NOP1 (159)
L6: // addr: 162 pc: 161 sub: 16737 op: 159
        // SubProg db_allocate pc: 162 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 134

// block var x_inlined_put4_at_134_16776
        DeRef(_x_inlined_put4_at_134_16776);
        _x_inlined_put4_at_134_16776 = NOVALUE;

// block var put4_1__tmp_at137_16777
        DeRefi(_put4_1__tmp_at137_16777);
        _put4_1__tmp_at137_16777 = NOVALUE;
        // SubProg db_allocate pc: 164 op: STARTLINE (58)

        /** eds.e:810						io:seek(current_db, size_ptr)*/
        // SubProg db_allocate pc: 166 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 168 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 170 op: RIGHT_BRACE_2 (85)
        Ref(_size_ptr_16742);
        DeRef(_seek_1__tmp_at167_16780);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = _size_ptr_16742;
        _seek_1__tmp_at167_16780 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 174 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_167_16779 = machine(19, _seek_1__tmp_at167_16780);
        // SubProg db_allocate pc: 178 op: NOP1 (159)
        // SubProg db_allocate pc: 179 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 167

// block var seek_1__tmp_at167_16780
        DeRef(_seek_1__tmp_at167_16780);
        _seek_1__tmp_at167_16780 = NOVALUE;
        // SubProg db_allocate pc: 181 op: STARTLINE (58)

        /** eds.e:811						put4(size-n-4) -- update size on free list too*/
        // SubProg db_allocate pc: 183 op: MINUS (10)
        if (IS_ATOM_INT(_size_16741) && IS_ATOM_INT(_n_16739)) {
            _9311 = _size_16741 - _n_16739;
            if ((object)((uintptr_t)_9311 +(uintptr_t) HIGH_BITS) >= 0){
                _9311 = NewDouble((eudouble)_9311);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16741)) {
                _9311 = NewDouble((eudouble)_size_16741 - DBL_PTR(_n_16739)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16739)) {
                    _9311 = NewDouble(DBL_PTR(_size_16741)->dbl - (eudouble)_n_16739);
                }
                else
                _9311 = NewDouble(DBL_PTR(_size_16741)->dbl - DBL_PTR(_n_16739)->dbl);
            }
        }
        // SubProg db_allocate pc: 187 op: MINUS (10)
        if (IS_ATOM_INT(_9311)) {
            _9312 = _9311 - 4;
            if ((object)((uintptr_t)_9312 +(uintptr_t) HIGH_BITS) >= 0){
                _9312 = NewDouble((eudouble)_9312);
            }
        }
        else {
            _9312 = NewDouble(DBL_PTR(_9311)->dbl - (eudouble)4);
        }
        DeRef(_9311);
        _9311 = NOVALUE;
        // SubProg db_allocate pc: 191 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_190_16784);
        _x_inlined_put4_at_190_16784 = _9312;
        _9312 = NOVALUE;
        // SubProg db_allocate pc: 194 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 196 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 198 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_190_16784)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_190_16784;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_190_16784)->dbl;
        }
        // SubProg db_allocate pc: 201 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 205 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 207 op: PEEK (127)
        DeRefi(_put4_1__tmp_at193_16785);
        _1 = (object)SEQ_PTR(_44memseq_16362);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at193_16785 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 210 op: PUTS (44)
        EPuts(_44current_db_16085, _put4_1__tmp_at193_16785); // DJP 
        // SubProg db_allocate pc: 213 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 215 op: ELSE (23)
        goto L7; // [215] 218
        // SubProg db_allocate pc: 217 op: NOP1 (159)
L7: // addr: 218 pc: 217 sub: 16737 op: 159
        // SubProg db_allocate pc: 218 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 190

// block var x_inlined_put4_at_190_16784
        DeRef(_x_inlined_put4_at_190_16784);
        _x_inlined_put4_at_190_16784 = NOVALUE;

// block var put4_1__tmp_at193_16785
        DeRefi(_put4_1__tmp_at193_16785);
        _put4_1__tmp_at193_16785 = NOVALUE;
        // SubProg db_allocate pc: 220 op: STARTLINE (58)

        /** eds.e:812						addr += size-n-4*/
        // SubProg db_allocate pc: 222 op: MINUS (10)
        if (IS_ATOM_INT(_size_16741) && IS_ATOM_INT(_n_16739)) {
            _9313 = _size_16741 - _n_16739;
            if ((object)((uintptr_t)_9313 +(uintptr_t) HIGH_BITS) >= 0){
                _9313 = NewDouble((eudouble)_9313);
            }
        }
        else {
            if (IS_ATOM_INT(_size_16741)) {
                _9313 = NewDouble((eudouble)_size_16741 - DBL_PTR(_n_16739)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_16739)) {
                    _9313 = NewDouble(DBL_PTR(_size_16741)->dbl - (eudouble)_n_16739);
                }
                else
                _9313 = NewDouble(DBL_PTR(_size_16741)->dbl - DBL_PTR(_n_16739)->dbl);
            }
        }
        // SubProg db_allocate pc: 226 op: MINUS (10)
        if (IS_ATOM_INT(_9313)) {
            _9314 = _9313 - 4;
            if ((object)((uintptr_t)_9314 +(uintptr_t) HIGH_BITS) >= 0){
                _9314 = NewDouble((eudouble)_9314);
            }
        }
        else {
            _9314 = NewDouble(DBL_PTR(_9313)->dbl - (eudouble)4);
        }
        DeRef(_9313);
        _9313 = NOVALUE;
        // SubProg db_allocate pc: 230 op: PLUS (11)
        _0 = _addr_16743;
        if (IS_ATOM_INT(_addr_16743) && IS_ATOM_INT(_9314)) {
            _addr_16743 = _addr_16743 + _9314;
            if ((object)((uintptr_t)_addr_16743 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_16743 = NewDouble((eudouble)_addr_16743);
            }
        }
        else {
            if (IS_ATOM_INT(_addr_16743)) {
                _addr_16743 = NewDouble((eudouble)_addr_16743 + DBL_PTR(_9314)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9314)) {
                    _addr_16743 = NewDouble(DBL_PTR(_addr_16743)->dbl + (eudouble)_9314);
                }
                else
                _addr_16743 = NewDouble(DBL_PTR(_addr_16743)->dbl + DBL_PTR(_9314)->dbl);
            }
        }
        DeRef(_0);
        DeRef(_9314);
        _9314 = NOVALUE;
        // SubProg db_allocate pc: 234 op: STARTLINE (58)

        /** eds.e:813						io:seek(current_db, addr - 4) */
        // SubProg db_allocate pc: 236 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 238 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16743)) {
            _9316 = _addr_16743 - 4;
            if ((object)((uintptr_t)_9316 +(uintptr_t) HIGH_BITS) >= 0){
                _9316 = NewDouble((eudouble)_9316);
            }
        }
        else {
            _9316 = NewDouble(DBL_PTR(_addr_16743)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 242 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_241_16791);
        _pos_inlined_seek_at_241_16791 = _9316;
        _9316 = NOVALUE;
        // SubProg db_allocate pc: 245 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 247 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_241_16791);
        DeRef(_seek_1__tmp_at244_16793);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_241_16791;
        _seek_1__tmp_at244_16793 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 251 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_244_16792 = machine(19, _seek_1__tmp_at244_16793);
        // SubProg db_allocate pc: 255 op: NOP1 (159)
        // SubProg db_allocate pc: 256 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 241

// block var pos_inlined_seek_at_241_16791
        DeRef(_pos_inlined_seek_at_241_16791);
        _pos_inlined_seek_at_241_16791 = NOVALUE;

// block var seek_1__tmp_at244_16793
        DeRef(_seek_1__tmp_at244_16793);
        _seek_1__tmp_at244_16793 = NOVALUE;
        // SubProg db_allocate pc: 258 op: STARTLINE (58)

        /** eds.e:814						put4(n+4)*/
        // SubProg db_allocate pc: 260 op: PLUS (11)
        if (IS_ATOM_INT(_n_16739)) {
            _9317 = _n_16739 + 4;
            if ((object)((uintptr_t)_9317 + (uintptr_t)HIGH_BITS) >= 0){
                _9317 = NewDouble((eudouble)_9317);
            }
        }
        else {
            _9317 = NewDouble(DBL_PTR(_n_16739)->dbl + (eudouble)4);
        }
        // SubProg db_allocate pc: 264 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_263_16796);
        _x_inlined_put4_at_263_16796 = _9317;
        _9317 = NOVALUE;
        // SubProg db_allocate pc: 267 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 269 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 271 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_263_16796)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_263_16796;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_263_16796)->dbl;
        }
        // SubProg db_allocate pc: 274 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 278 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 280 op: PEEK (127)
        DeRefi(_put4_1__tmp_at266_16797);
        _1 = (object)SEQ_PTR(_44memseq_16362);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at266_16797 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 283 op: PUTS (44)
        EPuts(_44current_db_16085, _put4_1__tmp_at266_16797); // DJP 
        // SubProg db_allocate pc: 286 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 288 op: ELSE (23)
        goto L8; // [288] 291
        // SubProg db_allocate pc: 290 op: NOP1 (159)
L8: // addr: 291 pc: 290 sub: 16737 op: 159
        // SubProg db_allocate pc: 291 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 263

// block var x_inlined_put4_at_263_16796
        DeRef(_x_inlined_put4_at_263_16796);
        _x_inlined_put4_at_263_16796 = NOVALUE;

// block var put4_1__tmp_at266_16797
        DeRefi(_put4_1__tmp_at266_16797);
        _put4_1__tmp_at266_16797 = NOVALUE;
        // SubProg db_allocate pc: 293 op: ELSE (23)
        goto L9; // [293] 466
        // SubProg db_allocate pc: 295 op: NOP1 (159)
L5: // addr: 296 pc: 295 sub: 16737 op: 159
        // SubProg db_allocate pc: 296 op: STARTLINE (58)

        /** eds.e:817						remaining = io:get_bytes(current_db, (free_count-i) * 8)*/
        // SubProg db_allocate pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 300 op: MINUS (10)
        _9318 = _free_count_16744 - _i_16758;
        if ((object)((uintptr_t)_9318 +(uintptr_t) HIGH_BITS) >= 0){
            _9318 = NewDouble((eudouble)_9318);
        }
        // SubProg db_allocate pc: 304 op: MULTIPLY (13)
        if (IS_ATOM_INT(_9318)) {
            if (_9318 == (short)_9318){
                _9319 = _9318 * 8;
            }
            else{
                _9319 = NewDouble(_9318 * (eudouble)8);
            }
        }
        else {
            _9319 = NewDouble(DBL_PTR(_9318)->dbl * (eudouble)8);
        }
        DeRef(_9318);
        _9318 = NOVALUE;
        // SubProg db_allocate pc: 308 op: PROC (27)
        _0 = _remaining_16745;
        _remaining_16745 = _14get_bytes(_44current_db_16085, _9319);
        DeRef(_0);
        _9319 = NOVALUE;
        // SubProg db_allocate pc: 313 op: SEQUENCE_CHECK (97)
        // SubProg db_allocate pc: 315 op: STARTLINE (58)

        /** eds.e:818						io:seek(current_db, free_list+8*(i-1))*/
        // SubProg db_allocate pc: 317 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 319 op: MINUS (10)
        _9321 = _i_16758 - 1;
        // SubProg db_allocate pc: 323 op: MULTIPLY (13)
        if (_9321 <= INT15){
            _9322 = 8 * _9321;
        }
        else{
            _9322 = NewDouble(8 * (eudouble)_9321);
        }
        _9321 = NOVALUE;
        // SubProg db_allocate pc: 327 op: PLUS (11)
        if (IS_ATOM_INT(_free_list_16740) && IS_ATOM_INT(_9322)) {
            _9323 = _free_list_16740 + _9322;
            if ((object)((uintptr_t)_9323 + (uintptr_t)HIGH_BITS) >= 0){
                _9323 = NewDouble((eudouble)_9323);
            }
        }
        else {
            if (IS_ATOM_INT(_free_list_16740)) {
                _9323 = NewDouble((eudouble)_free_list_16740 + DBL_PTR(_9322)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9322)) {
                    _9323 = NewDouble(DBL_PTR(_free_list_16740)->dbl + (eudouble)_9322);
                }
                else
                _9323 = NewDouble(DBL_PTR(_free_list_16740)->dbl + DBL_PTR(_9322)->dbl);
            }
        }
        DeRef(_9322);
        _9322 = NOVALUE;
        // SubProg db_allocate pc: 331 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_330_16806);
        _pos_inlined_seek_at_330_16806 = _9323;
        _9323 = NOVALUE;
        // SubProg db_allocate pc: 334 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 336 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_330_16806);
        DeRef(_seek_1__tmp_at333_16808);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_330_16806;
        _seek_1__tmp_at333_16808 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 340 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_333_16807 = machine(19, _seek_1__tmp_at333_16808);
        // SubProg db_allocate pc: 344 op: NOP1 (159)
        // SubProg db_allocate pc: 345 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 330

// block var pos_inlined_seek_at_330_16806
        DeRef(_pos_inlined_seek_at_330_16806);
        _pos_inlined_seek_at_330_16806 = NOVALUE;

// block var seek_1__tmp_at333_16808
        DeRef(_seek_1__tmp_at333_16808);
        _seek_1__tmp_at333_16808 = NOVALUE;
        // SubProg db_allocate pc: 347 op: STARTLINE (58)

        /** eds.e:819						putn(remaining)*/
        // SubProg db_allocate pc: 349 op: STARTLINE (58)

        /** eds.e:448		puts(current_db, s)*/
        // SubProg db_allocate pc: 351 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 353 op: PUTS (44)
        EPuts(_44current_db_16085, _remaining_16745); // DJP 
        // SubProg db_allocate pc: 356 op: STARTLINE (58)

        /** eds.e:449	end procedure*/
        // SubProg db_allocate pc: 358 op: ELSE (23)
        goto LA; // [358] 361
        // SubProg db_allocate pc: 360 op: NOP1 (159)
LA: // addr: 361 pc: 360 sub: 16737 op: 159
        // SubProg db_allocate pc: 361 op: STARTLINE (58)

        /** eds.e:820						io:seek(current_db, FREE_COUNT)*/
        // SubProg db_allocate pc: 363 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 365 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 367 op: RIGHT_BRACE_2 (85)
        DeRefi(_seek_1__tmp_at364_16812);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = 7;
        _seek_1__tmp_at364_16812 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 371 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_364_16811 = machine(19, _seek_1__tmp_at364_16812);
        // SubProg db_allocate pc: 375 op: NOP1 (159)
        // SubProg db_allocate pc: 376 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 364

// block var seek_1__tmp_at364_16812
        DeRefi(_seek_1__tmp_at364_16812);
        _seek_1__tmp_at364_16812 = NOVALUE;
        // SubProg db_allocate pc: 378 op: STARTLINE (58)

        /** eds.e:821						put4(free_count-1)*/
        // SubProg db_allocate pc: 380 op: MINUS (10)
        _9324 = _free_count_16744 - 1;
        if ((object)((uintptr_t)_9324 +(uintptr_t) HIGH_BITS) >= 0){
            _9324 = NewDouble((eudouble)_9324);
        }
        // SubProg db_allocate pc: 384 op: ASSIGN (18)
        DeRef(_x_inlined_put4_at_383_16815);
        _x_inlined_put4_at_383_16815 = _9324;
        _9324 = NOVALUE;
        // SubProg db_allocate pc: 387 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 389 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 391 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_383_16815)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_383_16815;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_383_16815)->dbl;
        }
        // SubProg db_allocate pc: 394 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 396 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 398 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 400 op: PEEK (127)
        DeRefi(_put4_1__tmp_at386_16816);
        _1 = (object)SEQ_PTR(_44memseq_16362);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at386_16816 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 403 op: PUTS (44)
        EPuts(_44current_db_16085, _put4_1__tmp_at386_16816); // DJP 
        // SubProg db_allocate pc: 406 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 408 op: ELSE (23)
        goto LB; // [408] 411
        // SubProg db_allocate pc: 410 op: NOP1 (159)
LB: // addr: 411 pc: 410 sub: 16737 op: 159
        // SubProg db_allocate pc: 411 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 383

// block var x_inlined_put4_at_383_16815
        DeRef(_x_inlined_put4_at_383_16815);
        _x_inlined_put4_at_383_16815 = NOVALUE;

// block var put4_1__tmp_at386_16816
        DeRefi(_put4_1__tmp_at386_16816);
        _put4_1__tmp_at386_16816 = NOVALUE;
        // SubProg db_allocate pc: 413 op: STARTLINE (58)

        /** eds.e:822						io:seek(current_db, addr - 4)*/
        // SubProg db_allocate pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 417 op: MINUS (10)
        if (IS_ATOM_INT(_addr_16743)) {
            _9325 = _addr_16743 - 4;
            if ((object)((uintptr_t)_9325 +(uintptr_t) HIGH_BITS) >= 0){
                _9325 = NewDouble((eudouble)_9325);
            }
        }
        else {
            _9325 = NewDouble(DBL_PTR(_addr_16743)->dbl - (eudouble)4);
        }
        // SubProg db_allocate pc: 421 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_420_16819);
        _pos_inlined_seek_at_420_16819 = _9325;
        _9325 = NOVALUE;
        // SubProg db_allocate pc: 424 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_allocate pc: 426 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_420_16819);
        DeRef(_seek_1__tmp_at423_16821);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_420_16819;
        _seek_1__tmp_at423_16821 = MAKE_SEQ(_1);
        // SubProg db_allocate pc: 430 op: MACHINE_FUNC (111)
        _seek_inlined_seek_at_423_16820 = machine(19, _seek_1__tmp_at423_16821);
        // SubProg db_allocate pc: 434 op: NOP1 (159)
        // SubProg db_allocate pc: 435 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 420

// block var pos_inlined_seek_at_420_16819
        DeRef(_pos_inlined_seek_at_420_16819);
        _pos_inlined_seek_at_420_16819 = NOVALUE;

// block var seek_1__tmp_at423_16821
        DeRef(_seek_1__tmp_at423_16821);
        _seek_1__tmp_at423_16821 = NOVALUE;
        // SubProg db_allocate pc: 437 op: STARTLINE (58)

        /** eds.e:823						put4(size) -- in case size was not updated by db_free()*/
        // SubProg db_allocate pc: 439 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_allocate pc: 441 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 443 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
        }
        if (IS_ATOM_INT(_size_16741)) {
            *poke4_addr = (uint32_t)_size_16741;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_size_16741)->dbl;
        }
        // SubProg db_allocate pc: 446 op: STARTLINE (58)

        /** eds.e:443		puts(current_db, peek(memseq))*/
        // SubProg db_allocate pc: 448 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 450 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_allocate pc: 452 op: PEEK (127)
        DeRefi(_put4_1__tmp_at438_16823);
        _1 = (object)SEQ_PTR(_44memseq_16362);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at438_16823 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        // SubProg db_allocate pc: 455 op: PUTS (44)
        EPuts(_44current_db_16085, _put4_1__tmp_at438_16823); // DJP 
        // SubProg db_allocate pc: 458 op: STARTLINE (58)

        /** eds.e:444	end procedure*/
        // SubProg db_allocate pc: 460 op: ELSE (23)
        goto LC; // [460] 463
        // SubProg db_allocate pc: 462 op: NOP1 (159)
LC: // addr: 463 pc: 462 sub: 16737 op: 159
        // SubProg db_allocate pc: 463 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 438

// block var put4_1__tmp_at438_16823
        DeRefi(_put4_1__tmp_at438_16823);
        _put4_1__tmp_at438_16823 = NOVALUE;
        // SubProg db_allocate pc: 465 op: NOP1 (159)
L9: // addr: 466 pc: 465 sub: 16737 op: 159
        // SubProg db_allocate pc: 466 op: STARTLINE (58)

        /** eds.e:825					return addr*/
        // SubProg db_allocate pc: 468 op: RETURNF (28)

// Exiting block BLOCK: db_allocate

// block var n_16739
        DeRef(_n_16739);

// block var free_list_16740
        DeRef(_free_list_16740);

// block var size_16741
        DeRef(_size_16741);

// block var size_ptr_16742
        DeRef(_size_ptr_16742);

// block var free_count_16744

// block var remaining_16745
        DeRef(_remaining_16745);
        return _addr_16743;
        // SubProg db_allocate pc: 472 op: NOP1 (159)
L4: // addr: 473 pc: 472 sub: 16737 op: 159
        // SubProg db_allocate pc: 473 op: STARTLINE (58)

        /** eds.e:827				size_ptr += 8*/
        // SubProg db_allocate pc: 475 op: PLUS (11)
        _0 = _size_ptr_16742;
        if (IS_ATOM_INT(_size_ptr_16742)) {
            _size_ptr_16742 = _size_ptr_16742 + 8;
            if ((object)((uintptr_t)_size_ptr_16742 + (uintptr_t)HIGH_BITS) >= 0){
                _size_ptr_16742 = NewDouble((eudouble)_size_ptr_16742);
            }
        }
        else {
            _size_ptr_16742 = NewDouble(DBL_PTR(_size_ptr_16742)->dbl + (eudouble)8);
        }
        DeRef(_0);
        // SubProg db_allocate pc: 479 op: STARTLINE (58)

        /** eds.e:828			end for*/
        // SubProg db_allocate pc: 481 op: ENDFOR_INT_UP1 (54)
        _i_16758 = _i_16758 + 1;
        goto L2; // [481] 71
L3: // addr: 486 pc: 481 sub: 16737 op: 54
        ;
    }
    // SubProg db_allocate pc: 486 op: NOP1 (159)
L1: // addr: 487 pc: 486 sub: 16737 op: 159
    // SubProg db_allocate pc: 487 op: STARTLINE (58)

    /** eds.e:831		io:seek(current_db, -1)*/
    // SubProg db_allocate pc: 489 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 491 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_allocate pc: 493 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at490_16827);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = -1;
    _seek_1__tmp_at490_16827 = MAKE_SEQ(_1);
    // SubProg db_allocate pc: 497 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_490_16826 = machine(19, _seek_1__tmp_at490_16827);
    // SubProg db_allocate pc: 501 op: NOP1 (159)
    // SubProg db_allocate pc: 502 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_allocate @ 490

// block var seek_1__tmp_at490_16827
    DeRefi(_seek_1__tmp_at490_16827);
    _seek_1__tmp_at490_16827 = NOVALUE;
    // SubProg db_allocate pc: 504 op: STARTLINE (58)

    /** eds.e:832		put4(n+4)*/
    // SubProg db_allocate pc: 506 op: PLUS (11)
    if (IS_ATOM_INT(_n_16739)) {
        _9327 = _n_16739 + 4;
        if ((object)((uintptr_t)_9327 + (uintptr_t)HIGH_BITS) >= 0){
            _9327 = NewDouble((eudouble)_9327);
        }
    }
    else {
        _9327 = NewDouble(DBL_PTR(_n_16739)->dbl + (eudouble)4);
    }
    // SubProg db_allocate pc: 510 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_509_16830);
    _x_inlined_put4_at_509_16830 = _9327;
    _9327 = NOVALUE;
    // SubProg db_allocate pc: 513 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_allocate pc: 515 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 517 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_509_16830)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_509_16830;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_509_16830)->dbl;
    }
    // SubProg db_allocate pc: 520 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_allocate pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 524 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 526 op: PEEK (127)
    DeRefi(_put4_1__tmp_at512_16831);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at512_16831 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_allocate pc: 529 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at512_16831); // DJP 
    // SubProg db_allocate pc: 532 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_allocate pc: 534 op: ELSE (23)
    goto LD; // [534] 537
    // SubProg db_allocate pc: 536 op: NOP1 (159)
LD: // addr: 537 pc: 536 sub: 16737 op: 159
    // SubProg db_allocate pc: 537 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_allocate @ 509

// block var x_inlined_put4_at_509_16830
    DeRef(_x_inlined_put4_at_509_16830);
    _x_inlined_put4_at_509_16830 = NOVALUE;

// block var put4_1__tmp_at512_16831
    DeRefi(_put4_1__tmp_at512_16831);
    _put4_1__tmp_at512_16831 = NOVALUE;
    // SubProg db_allocate pc: 539 op: STARTLINE (58)

    /** eds.e:833		return io:where(current_db)*/
    // SubProg db_allocate pc: 541 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_allocate pc: 543 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg db_allocate pc: 545 op: MACHINE_FUNC (111)
    DeRef(_where_inlined_where_at_542_16833);
    _where_inlined_where_at_542_16833 = machine(20, _44current_db_16085);
    // SubProg db_allocate pc: 549 op: NOP1 (159)
    // SubProg db_allocate pc: 550 op: RETURNF (28)

// Exiting block BLOCK: db_allocate

// block var n_16739
    DeRef(_n_16739);

// block var free_list_16740
    DeRef(_free_list_16740);

// block var size_16741
    DeRef(_size_16741);

// block var size_ptr_16742
    DeRef(_size_ptr_16742);

// block var addr_16743
    DeRef(_addr_16743);

// block var free_count_16744

// block var remaining_16745
    DeRef(_remaining_16745);
    return _where_inlined_where_at_542_16833;
    // SubProg db_allocate pc: 554 op: BADRETURNF (43)
    ;
}


void _44db_free(object _p_16836)
{
    object _psize_16837 = NOVALUE;
    object _i_16838 = NOVALUE;
    object _size_16839 = NOVALUE;
    object _addr_16840 = NOVALUE;
    object _free_list_16841 = NOVALUE;
    object _free_list_space_16842 = NOVALUE;
    object _new_space_16843 = NOVALUE;
    object _to_be_freed_16844 = NOVALUE;
    object _prev_addr_16845 = NOVALUE;
    object _prev_size_16846 = NOVALUE;
    object _free_count_16847 = NOVALUE;
    object _remaining_16848 = NOVALUE;
    object _seek_1__tmp_at11_16853 = NOVALUE;
    object _seek_inlined_seek_at_11_16852 = NOVALUE;
    object _pos_inlined_seek_at_8_16851 = NOVALUE;
    object _seek_1__tmp_at33_16857 = NOVALUE;
    object _seek_inlined_seek_at_33_16856 = NOVALUE;
    object _seek_1__tmp_at69_16864 = NOVALUE;
    object _seek_inlined_seek_at_69_16863 = NOVALUE;
    object _pos_inlined_seek_at_66_16862 = NOVALUE;
    object _seek_1__tmp_at133_16877 = NOVALUE;
    object _seek_inlined_seek_at_133_16876 = NOVALUE;
    object _seek_1__tmp_at157_16881 = NOVALUE;
    object _seek_inlined_seek_at_157_16880 = NOVALUE;
    object _put4_1__tmp_at172_16883 = NOVALUE;
    object _seek_1__tmp_at202_16886 = NOVALUE;
    object _seek_inlined_seek_at_202_16885 = NOVALUE;
    object _seek_1__tmp_at234_16891 = NOVALUE;
    object _seek_inlined_seek_at_234_16890 = NOVALUE;
    object _s_inlined_putn_at_274_16897 = NOVALUE;
    object _seek_1__tmp_at297_16900 = NOVALUE;
    object _seek_inlined_seek_at_297_16899 = NOVALUE;
    object _seek_1__tmp_at430_16921 = NOVALUE;
    object _seek_inlined_seek_at_430_16920 = NOVALUE;
    object _pos_inlined_seek_at_427_16919 = NOVALUE;
    object _put4_1__tmp_at482_16931 = NOVALUE;
    object _x_inlined_put4_at_479_16930 = NOVALUE;
    object _seek_1__tmp_at523_16937 = NOVALUE;
    object _seek_inlined_seek_at_523_16936 = NOVALUE;
    object _pos_inlined_seek_at_520_16935 = NOVALUE;
    object _seek_1__tmp_at574_16947 = NOVALUE;
    object _seek_inlined_seek_at_574_16946 = NOVALUE;
    object _pos_inlined_seek_at_571_16945 = NOVALUE;
    object _seek_1__tmp_at611_16952 = NOVALUE;
    object _seek_inlined_seek_at_611_16951 = NOVALUE;
    object _put4_1__tmp_at626_16954 = NOVALUE;
    object _put4_1__tmp_at664_16959 = NOVALUE;
    object _x_inlined_put4_at_661_16958 = NOVALUE;
    object _seek_1__tmp_at737_16971 = NOVALUE;
    object _seek_inlined_seek_at_737_16970 = NOVALUE;
    object _pos_inlined_seek_at_734_16969 = NOVALUE;
    object _put4_1__tmp_at752_16973 = NOVALUE;
    object _put4_1__tmp_at789_16977 = NOVALUE;
    object _x_inlined_put4_at_786_16976 = NOVALUE;
    object _seek_1__tmp_at837_16985 = NOVALUE;
    object _seek_inlined_seek_at_837_16984 = NOVALUE;
    object _pos_inlined_seek_at_834_16983 = NOVALUE;
    object _seek_1__tmp_at883_16993 = NOVALUE;
    object _seek_inlined_seek_at_883_16992 = NOVALUE;
    object _put4_1__tmp_at898_16995 = NOVALUE;
    object _seek_1__tmp_at943_17002 = NOVALUE;
    object _seek_inlined_seek_at_943_17001 = NOVALUE;
    object _pos_inlined_seek_at_940_17000 = NOVALUE;
    object _put4_1__tmp_at958_17004 = NOVALUE;
    object _put4_1__tmp_at986_17006 = NOVALUE;
    object _9395 = NOVALUE; // 16998 9395
    object _9394 = NOVALUE; // 16997 9394
    object _9393 = NOVALUE; // 16996 9393
// skipping _9392  name type: 0
// skipping _9391  name type: 0
    object _9390 = NOVALUE; // 16988 9390
    object _9389 = NOVALUE; // 16987 9389
    object _9388 = NOVALUE; // 16986 9388
    object _9387 = NOVALUE; // 16981 9387
    object _9386 = NOVALUE; // 16980 9386
    object _9385 = NOVALUE; // 16979 9385
    object _9384 = NOVALUE; // 16974 9384
    object _9383 = NOVALUE; // 16967 9383
    object _9382 = NOVALUE; // 16966 9382
    object _9381 = NOVALUE; // 16965 9381
    object _9380 = NOVALUE; // 16964 9380
    object _9379 = NOVALUE; // 16963 9379
    object _9378 = NOVALUE; // 16962 9378
    object _9377 = NOVALUE; // 16961 9377
    object _9376 = NOVALUE; // 16956 9376
// skipping _9375  name type: 0
    object _9374 = NOVALUE; // 16943 9374
    object _9373 = NOVALUE; // 16942 9373
    object _9372 = NOVALUE; // 16941 9372
// skipping _9371  name type: 0
    object _9370 = NOVALUE; // 16939 9370
    object _9369 = NOVALUE; // 16938 9369
    object _9368 = NOVALUE; // 16933 9368
    object _9367 = NOVALUE; // 16932 9367
    object _9366 = NOVALUE; // 16928 9366
    object _9365 = NOVALUE; // 16927 9365
    object _9364 = NOVALUE; // 16926 9364
    object _9363 = NOVALUE; // 16925 9363
    object _9362 = NOVALUE; // 16924 9362
    object _9361 = NOVALUE; // 16923 9361
    object _9360 = NOVALUE; // 16917 9360
    object _9359 = NOVALUE; // 16916 9359
    object _9358 = NOVALUE; // 16915 9358
    object _9357 = NOVALUE; // 16914 9357
    object _9356 = NOVALUE; // 16913 9356
    object _9355 = NOVALUE; // 16912 9355
    object _9354 = NOVALUE; // 16911 9354
    object _9353 = NOVALUE; // 16910 9353
// skipping _9352  name type: 0
// skipping _9351  name type: 0
// skipping _9350  name type: 0
// skipping _9349  name type: 0
// skipping _9348  name type: 0
    object _9347 = NOVALUE; // 16895 9347
    object _9346 = NOVALUE; // 16894 9346
    object _9345 = NOVALUE; // 16893 9345
// skipping _9344  name type: 0
    object _9343 = NOVALUE; // 16887 9343
// skipping _9342  name type: 0
// skipping _9341  name type: 0
// skipping _9340  name type: 0
    object _9339 = NOVALUE; // 16872 9339
    object _9338 = NOVALUE; // 16871 9338
// skipping _9337  name type: 0
    object _9336 = NOVALUE; // 16869 9336
    object _9335 = NOVALUE; // 16868 9335
// skipping _9334  name type: 0
    object _9333 = NOVALUE; // 16865 9333
    object _9332 = NOVALUE; // 16860 9332
// skipping _9331  name type: 0
// skipping _9330  name type: 0
// skipping _9329  name type: 0
    object _9328 = NOVALUE; // 16849 9328
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_free pc: 1 op: STARTLINE (58)

    /** eds.e:844		io:seek(current_db, p-4)*/
    // SubProg db_free pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 5 op: MINUS (10)
    if (IS_ATOM_INT(_p_16836)) {
        _9328 = _p_16836 - 4;
        if ((object)((uintptr_t)_9328 +(uintptr_t) HIGH_BITS) >= 0){
            _9328 = NewDouble((eudouble)_9328);
        }
    }
    else {
        _9328 = NewDouble(DBL_PTR(_p_16836)->dbl - (eudouble)4);
    }
    // SubProg db_free pc: 9 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_8_16851);
    _pos_inlined_seek_at_8_16851 = _9328;
    _9328 = NOVALUE;
    // SubProg db_free pc: 12 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 14 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_8_16851);
    DeRef(_seek_1__tmp_at11_16853);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_16851;
    _seek_1__tmp_at11_16853 = MAKE_SEQ(_1);
    // SubProg db_free pc: 18 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_11_16852 = machine(19, _seek_1__tmp_at11_16853);
    // SubProg db_free pc: 22 op: NOP1 (159)
    // SubProg db_free pc: 23 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 8

// block var pos_inlined_seek_at_8_16851
    DeRef(_pos_inlined_seek_at_8_16851);
    _pos_inlined_seek_at_8_16851 = NOVALUE;

// block var seek_1__tmp_at11_16853
    DeRef(_seek_1__tmp_at11_16853);
    _seek_1__tmp_at11_16853 = NOVALUE;
    // SubProg db_free pc: 25 op: STARTLINE (58)

    /** eds.e:845		psize = get4()*/
    // SubProg db_free pc: 27 op: PROC (27)
    _0 = _psize_16837;
    _psize_16837 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 30 op: STARTLINE (58)

    /** eds.e:847		io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 34 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 36 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at33_16857);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at33_16857 = MAKE_SEQ(_1);
    // SubProg db_free pc: 40 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_33_16856 = machine(19, _seek_1__tmp_at33_16857);
    // SubProg db_free pc: 44 op: NOP1 (159)
    // SubProg db_free pc: 45 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 33

// block var seek_1__tmp_at33_16857
    DeRefi(_seek_1__tmp_at33_16857);
    _seek_1__tmp_at33_16857 = NOVALUE;
    // SubProg db_free pc: 47 op: STARTLINE (58)

    /** eds.e:848		free_count = get4()*/
    // SubProg db_free pc: 49 op: PROC (27)
    _free_count_16847 = _44get4();
    // SubProg db_free pc: 52 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16847)) {
        _1 = (object)(DBL_PTR(_free_count_16847)->dbl);
        DeRefDS(_free_count_16847);
        _free_count_16847 = _1;
    }
    // SubProg db_free pc: 54 op: STARTLINE (58)

    /** eds.e:849		free_list = get4()*/
    // SubProg db_free pc: 56 op: PROC (27)
    _0 = _free_list_16841;
    _free_list_16841 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 59 op: STARTLINE (58)

    /** eds.e:850		io:seek(current_db, free_list - 4)*/
    // SubProg db_free pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 63 op: MINUS (10)
    if (IS_ATOM_INT(_free_list_16841)) {
        _9332 = _free_list_16841 - 4;
        if ((object)((uintptr_t)_9332 +(uintptr_t) HIGH_BITS) >= 0){
            _9332 = NewDouble((eudouble)_9332);
        }
    }
    else {
        _9332 = NewDouble(DBL_PTR(_free_list_16841)->dbl - (eudouble)4);
    }
    // SubProg db_free pc: 67 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_66_16862);
    _pos_inlined_seek_at_66_16862 = _9332;
    _9332 = NOVALUE;
    // SubProg db_free pc: 70 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 72 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_66_16862);
    DeRef(_seek_1__tmp_at69_16864);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_66_16862;
    _seek_1__tmp_at69_16864 = MAKE_SEQ(_1);
    // SubProg db_free pc: 76 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_69_16863 = machine(19, _seek_1__tmp_at69_16864);
    // SubProg db_free pc: 80 op: NOP1 (159)
    // SubProg db_free pc: 81 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 66

// block var pos_inlined_seek_at_66_16862
    DeRef(_pos_inlined_seek_at_66_16862);
    _pos_inlined_seek_at_66_16862 = NOVALUE;

// block var seek_1__tmp_at69_16864
    DeRef(_seek_1__tmp_at69_16864);
    _seek_1__tmp_at69_16864 = NOVALUE;
    // SubProg db_free pc: 83 op: STARTLINE (58)

    /** eds.e:851		free_list_space = get4()-4*/
    // SubProg db_free pc: 85 op: PROC (27)
    _9333 = _44get4();
    // SubProg db_free pc: 88 op: MINUS (10)
    DeRef(_free_list_space_16842);
    if (IS_ATOM_INT(_9333)) {
        _free_list_space_16842 = _9333 - 4;
        if ((object)((uintptr_t)_free_list_space_16842 +(uintptr_t) HIGH_BITS) >= 0){
            _free_list_space_16842 = NewDouble((eudouble)_free_list_space_16842);
        }
    }
    else {
        _free_list_space_16842 = binary_op(MINUS, _9333, 4);
    }
    DeRef(_9333);
    _9333 = NOVALUE;
    // SubProg db_free pc: 92 op: STARTLINE (58)

    /** eds.e:852		if free_list_space < 8 * (free_count+1) then*/
    // SubProg db_free pc: 94 op: PLUS1 (93)
    _9335 = _free_count_16847 + 1;
    if (_9335 > MAXINT){
        _9335 = NewDouble((eudouble)_9335);
    }
    // SubProg db_free pc: 98 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9335)) {
        if (_9335 <= INT15 && _9335 >= -INT15){
            _9336 = 8 * _9335;
        }
        else{
            _9336 = NewDouble(8 * (eudouble)_9335);
        }
    }
    else {
        _9336 = NewDouble((eudouble)8 * DBL_PTR(_9335)->dbl);
    }
    DeRef(_9335);
    _9335 = NOVALUE;
    // SubProg db_free pc: 102 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _free_list_space_16842, _9336)){
        DeRef(_9336);
        _9336 = NOVALUE;
        goto L1; // [102] 314
    }
    DeRef(_9336);
    _9336 = NOVALUE;
    // SubProg db_free pc: 106 op: STARTLINE (58)

    /** eds.e:854			new_space = floor(free_list_space + free_list_space / 2)*/
    // SubProg db_free pc: 108 op: DIV2 (98)
    if (IS_ATOM_INT(_free_list_space_16842)) {
        if (_free_list_space_16842 & 1) {
            _9338 = NewDouble((_free_list_space_16842 >> 1) + 0.5);
        }
        else
        _9338 = _free_list_space_16842 >> 1;
    }
    else {
        _9338 = binary_op(DIVIDE, _free_list_space_16842, 2);
    }
    // SubProg db_free pc: 112 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_space_16842) && IS_ATOM_INT(_9338)) {
        _9339 = _free_list_space_16842 + _9338;
        if ((object)((uintptr_t)_9339 + (uintptr_t)HIGH_BITS) >= 0){
            _9339 = NewDouble((eudouble)_9339);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_space_16842)) {
            _9339 = NewDouble((eudouble)_free_list_space_16842 + DBL_PTR(_9338)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9338)) {
                _9339 = NewDouble(DBL_PTR(_free_list_space_16842)->dbl + (eudouble)_9338);
            }
            else
            _9339 = NewDouble(DBL_PTR(_free_list_space_16842)->dbl + DBL_PTR(_9338)->dbl);
        }
    }
    DeRef(_9338);
    _9338 = NOVALUE;
    // SubProg db_free pc: 116 op: FLOOR (83)
    DeRef(_new_space_16843);
    if (IS_ATOM_INT(_9339))
    _new_space_16843 = e_floor(_9339);
    else
    _new_space_16843 = unary_op(FLOOR, _9339);
    DeRef(_9339);
    _9339 = NOVALUE;
    // SubProg db_free pc: 119 op: STARTLINE (58)

    /** eds.e:855			to_be_freed = free_list*/
    // SubProg db_free pc: 121 op: ASSIGN (18)
    Ref(_free_list_16841);
    DeRef(_to_be_freed_16844);
    _to_be_freed_16844 = _free_list_16841;
    // SubProg db_free pc: 124 op: STARTLINE (58)

    /** eds.e:856			free_list = db_allocate(new_space)*/
    // SubProg db_free pc: 126 op: PROC (27)
    Ref(_new_space_16843);
    _0 = _free_list_16841;
    _free_list_16841 = _44db_allocate(_new_space_16843);
    DeRef(_0);
    // SubProg db_free pc: 130 op: STARTLINE (58)

    /** eds.e:857			io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 134 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 136 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at133_16877);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at133_16877 = MAKE_SEQ(_1);
    // SubProg db_free pc: 140 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_133_16876 = machine(19, _seek_1__tmp_at133_16877);
    // SubProg db_free pc: 144 op: NOP1 (159)
    // SubProg db_free pc: 145 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 133

// block var seek_1__tmp_at133_16877
    DeRefi(_seek_1__tmp_at133_16877);
    _seek_1__tmp_at133_16877 = NOVALUE;
    // SubProg db_free pc: 147 op: STARTLINE (58)

    /** eds.e:858			free_count = get4() -- db_allocate may have changed it*/
    // SubProg db_free pc: 149 op: PROC (27)
    _free_count_16847 = _44get4();
    // SubProg db_free pc: 152 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_free_count_16847)) {
        _1 = (object)(DBL_PTR(_free_count_16847)->dbl);
        DeRefDS(_free_count_16847);
        _free_count_16847 = _1;
    }
    // SubProg db_free pc: 154 op: STARTLINE (58)

    /** eds.e:859			io:seek(current_db, FREE_LIST)*/
    // SubProg db_free pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 158 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 160 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at157_16881);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 11;
    _seek_1__tmp_at157_16881 = MAKE_SEQ(_1);
    // SubProg db_free pc: 164 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_157_16880 = machine(19, _seek_1__tmp_at157_16881);
    // SubProg db_free pc: 168 op: NOP1 (159)
    // SubProg db_free pc: 169 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 157

// block var seek_1__tmp_at157_16881
    DeRefi(_seek_1__tmp_at157_16881);
    _seek_1__tmp_at157_16881 = NOVALUE;
    // SubProg db_free pc: 171 op: STARTLINE (58)

    /** eds.e:860			put4(free_list)*/
    // SubProg db_free pc: 173 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 175 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 177 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_free_list_16841)) {
        *poke4_addr = (uint32_t)_free_list_16841;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_free_list_16841)->dbl;
    }
    // SubProg db_free pc: 180 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 186 op: PEEK (127)
    DeRefi(_put4_1__tmp_at172_16883);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at172_16883 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 189 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at172_16883); // DJP 
    // SubProg db_free pc: 192 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 194 op: ELSE (23)
    goto L2; // [194] 197
    // SubProg db_free pc: 196 op: NOP1 (159)
L2: // addr: 197 pc: 196 sub: 16834 op: 159
    // SubProg db_free pc: 197 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 172

// block var put4_1__tmp_at172_16883
    DeRefi(_put4_1__tmp_at172_16883);
    _put4_1__tmp_at172_16883 = NOVALUE;
    // SubProg db_free pc: 199 op: STARTLINE (58)

    /** eds.e:861			io:seek(current_db, to_be_freed)*/
    // SubProg db_free pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 203 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 205 op: RIGHT_BRACE_2 (85)
    Ref(_to_be_freed_16844);
    DeRef(_seek_1__tmp_at202_16886);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _to_be_freed_16844;
    _seek_1__tmp_at202_16886 = MAKE_SEQ(_1);
    // SubProg db_free pc: 209 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_202_16885 = machine(19, _seek_1__tmp_at202_16886);
    // SubProg db_free pc: 213 op: NOP1 (159)
    // SubProg db_free pc: 214 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 202

// block var seek_1__tmp_at202_16886
    DeRef(_seek_1__tmp_at202_16886);
    _seek_1__tmp_at202_16886 = NOVALUE;
    // SubProg db_free pc: 216 op: STARTLINE (58)

    /** eds.e:862			remaining = io:get_bytes(current_db, 8*free_count)*/
    // SubProg db_free pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 220 op: MULTIPLY (13)
    if (_free_count_16847 <= INT15 && _free_count_16847 >= -INT15){
        _9343 = 8 * _free_count_16847;
    }
    else{
        _9343 = NewDouble(8 * (eudouble)_free_count_16847);
    }
    // SubProg db_free pc: 224 op: PROC (27)
    _0 = _remaining_16848;
    _remaining_16848 = _14get_bytes(_44current_db_16085, _9343);
    DeRef(_0);
    _9343 = NOVALUE;
    // SubProg db_free pc: 229 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 231 op: STARTLINE (58)

    /** eds.e:863			io:seek(current_db, free_list)*/
    // SubProg db_free pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 235 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 237 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16841);
    DeRef(_seek_1__tmp_at234_16891);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _free_list_16841;
    _seek_1__tmp_at234_16891 = MAKE_SEQ(_1);
    // SubProg db_free pc: 241 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_234_16890 = machine(19, _seek_1__tmp_at234_16891);
    // SubProg db_free pc: 245 op: NOP1 (159)
    // SubProg db_free pc: 246 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 234

// block var seek_1__tmp_at234_16891
    DeRef(_seek_1__tmp_at234_16891);
    _seek_1__tmp_at234_16891 = NOVALUE;
    // SubProg db_free pc: 248 op: STARTLINE (58)

    /** eds.e:864			putn(remaining)*/
    // SubProg db_free pc: 250 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 254 op: PUTS (44)
    EPuts(_44current_db_16085, _remaining_16848); // DJP 
    // SubProg db_free pc: 257 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 259 op: ELSE (23)
    goto L3; // [259] 262
    // SubProg db_free pc: 261 op: NOP1 (159)
L3: // addr: 262 pc: 261 sub: 16834 op: 159
    // SubProg db_free pc: 262 op: STARTLINE (58)

    /** eds.e:865			putn(repeat(0, new_space-length(remaining)))*/
    // SubProg db_free pc: 264 op: LENGTH (42)
    if (IS_SEQUENCE(_remaining_16848)){
            _9345 = SEQ_PTR(_remaining_16848)->length;
    }
    else {
        _9345 = 1;
    }
    // SubProg db_free pc: 267 op: MINUS (10)
    if (IS_ATOM_INT(_new_space_16843)) {
        _9346 = _new_space_16843 - _9345;
    }
    else {
        _9346 = NewDouble(DBL_PTR(_new_space_16843)->dbl - (eudouble)_9345);
    }
    _9345 = NOVALUE;
    // SubProg db_free pc: 271 op: REPEAT (32)
    _9347 = Repeat(0, _9346);
    DeRef(_9346);
    _9346 = NOVALUE;
    // SubProg db_free pc: 275 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_274_16897);
    _s_inlined_putn_at_274_16897 = _9347;
    _9347 = NOVALUE;
    // SubProg db_free pc: 278 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 280 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 284 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_274_16897); // DJP 
    // SubProg db_free pc: 287 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 289 op: ELSE (23)
    goto L4; // [289] 292
    // SubProg db_free pc: 291 op: NOP1 (159)
L4: // addr: 292 pc: 291 sub: 16834 op: 159
    // SubProg db_free pc: 292 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_free @ 274

// block var s_inlined_putn_at_274_16897
    DeRefi(_s_inlined_putn_at_274_16897);
    _s_inlined_putn_at_274_16897 = NOVALUE;
    // SubProg db_free pc: 294 op: STARTLINE (58)

    /** eds.e:866			io:seek(current_db, free_list)*/
    // SubProg db_free pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 298 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 300 op: RIGHT_BRACE_2 (85)
    Ref(_free_list_16841);
    DeRef(_seek_1__tmp_at297_16900);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _free_list_16841;
    _seek_1__tmp_at297_16900 = MAKE_SEQ(_1);
    // SubProg db_free pc: 304 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_297_16899 = machine(19, _seek_1__tmp_at297_16900);
    // SubProg db_free pc: 308 op: NOP1 (159)
    // SubProg db_free pc: 309 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 297

// block var seek_1__tmp_at297_16900
    DeRef(_seek_1__tmp_at297_16900);
    _seek_1__tmp_at297_16900 = NOVALUE;
    // SubProg db_free pc: 311 op: ELSE (23)
    goto L5; // [311] 320
    // SubProg db_free pc: 313 op: NOP1 (159)
L1: // addr: 314 pc: 313 sub: 16834 op: 159
    // SubProg db_free pc: 314 op: STARTLINE (58)

    /** eds.e:868			new_space = 0*/
    // SubProg db_free pc: 316 op: ASSIGN (18)
    DeRef(_new_space_16843);
    _new_space_16843 = 0;
    // SubProg db_free pc: 319 op: NOP1 (159)
L5: // addr: 320 pc: 319 sub: 16834 op: 159
    // SubProg db_free pc: 320 op: STARTLINE (58)

    /** eds.e:871		i = 1*/
    // SubProg db_free pc: 322 op: ASSIGN (18)
    DeRef(_i_16838);
    _i_16838 = 1;
    // SubProg db_free pc: 325 op: STARTLINE (58)

    /** eds.e:872		prev_addr = 0*/
    // SubProg db_free pc: 327 op: ASSIGN (18)
    DeRef(_prev_addr_16845);
    _prev_addr_16845 = 0;
    // SubProg db_free pc: 330 op: STARTLINE (58)

    /** eds.e:873		prev_size = 0*/
    // SubProg db_free pc: 332 op: ASSIGN (18)
    DeRef(_prev_size_16846);
    _prev_size_16846 = 0;
    // SubProg db_free pc: 335 op: STARTLINE (58)

    /** eds.e:874		while i <= free_count do*/
    // SubProg db_free pc: 337 op: NOP2 (110)
    // SubProg db_free pc: 339 op: NOPWHILE (158)
L6: // addr: 340 pc: 339 sub: 16834 op: 158
    // SubProg db_free pc: 340 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _i_16838, _free_count_16847)){
        goto L7; // [340] 386
    }
    // SubProg db_free pc: 344 op: STARTLINE (58)

    /** eds.e:875			addr = get4()*/
    // SubProg db_free pc: 346 op: PROC (27)
    _0 = _addr_16840;
    _addr_16840 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 349 op: STARTLINE (58)

    /** eds.e:876			size = get4()*/
    // SubProg db_free pc: 351 op: PROC (27)
    _0 = _size_16839;
    _size_16839 = _44get4();
    DeRef(_0);
    // SubProg db_free pc: 354 op: STARTLINE (58)

    /** eds.e:877			if p < addr then*/
    // SubProg db_free pc: 356 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _p_16836, _addr_16840)){
        goto L8; // [356] 365
    }
    // SubProg db_free pc: 360 op: STARTLINE (58)

    /** eds.e:878				exit*/
    // SubProg db_free pc: 362 op: EXIT (61)
    goto L7; // [362] 386
    // SubProg db_free pc: 364 op: NOP1 (159)
L8: // addr: 365 pc: 364 sub: 16834 op: 159
    // SubProg db_free pc: 365 op: STARTLINE (58)

    /** eds.e:880			prev_addr = addr*/
    // SubProg db_free pc: 367 op: ASSIGN (18)
    Ref(_addr_16840);
    DeRef(_prev_addr_16845);
    _prev_addr_16845 = _addr_16840;
    // SubProg db_free pc: 370 op: STARTLINE (58)

    /** eds.e:881			prev_size = size*/
    // SubProg db_free pc: 372 op: ASSIGN (18)
    Ref(_size_16839);
    DeRef(_prev_size_16846);
    _prev_size_16846 = _size_16839;
    // SubProg db_free pc: 375 op: STARTLINE (58)

    /** eds.e:882			i += 1*/
    // SubProg db_free pc: 377 op: PLUS1 (93)
    _0 = _i_16838;
    if (IS_ATOM_INT(_i_16838)) {
        _i_16838 = _i_16838 + 1;
        if (_i_16838 > MAXINT){
            _i_16838 = NewDouble((eudouble)_i_16838);
        }
    }
    else
    _i_16838 = binary_op(PLUS, 1, _i_16838);
    DeRef(_0);
    // SubProg db_free pc: 381 op: STARTLINE (58)

    /** eds.e:883		end while*/
    // SubProg db_free pc: 383 op: ENDWHILE (22)
    goto L6; // [383] 340
    // SubProg db_free pc: 385 op: NOP1 (159)
L7: // addr: 386 pc: 385 sub: 16834 op: 159
    // SubProg db_free pc: 386 op: STARTLINE (58)

    /** eds.e:885		if i > 1 and prev_addr + prev_size = p then*/
    // SubProg db_free pc: 388 op: GREATER (6)
    if (IS_ATOM_INT(_i_16838)) {
        _9353 = (_i_16838 > 1);
    }
    else {
        _9353 = (DBL_PTR(_i_16838)->dbl > (eudouble)1);
    }
    // SubProg db_free pc: 392 op: SC1_AND_IF (146)
    if (_9353 == 0) {
        goto L9; // [392] 695
    }
    // SubProg db_free pc: 396 op: PLUS (11)
    if (IS_ATOM_INT(_prev_addr_16845) && IS_ATOM_INT(_prev_size_16846)) {
        _9355 = _prev_addr_16845 + _prev_size_16846;
        if ((object)((uintptr_t)_9355 + (uintptr_t)HIGH_BITS) >= 0){
            _9355 = NewDouble((eudouble)_9355);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_addr_16845)) {
            _9355 = NewDouble((eudouble)_prev_addr_16845 + DBL_PTR(_prev_size_16846)->dbl);
        }
        else {
            if (IS_ATOM_INT(_prev_size_16846)) {
                _9355 = NewDouble(DBL_PTR(_prev_addr_16845)->dbl + (eudouble)_prev_size_16846);
            }
            else
            _9355 = NewDouble(DBL_PTR(_prev_addr_16845)->dbl + DBL_PTR(_prev_size_16846)->dbl);
        }
    }
    // SubProg db_free pc: 400 op: EQUALS (3)
    if (IS_ATOM_INT(_9355) && IS_ATOM_INT(_p_16836)) {
        _9356 = (_9355 == _p_16836);
    }
    else {
        if (IS_ATOM_INT(_9355)) {
            _9356 = ((eudouble)_9355 == DBL_PTR(_p_16836)->dbl);
        }
        else {
            if (IS_ATOM_INT(_p_16836)) {
                _9356 = (DBL_PTR(_9355)->dbl == (eudouble)_p_16836);
            }
            else
            _9356 = (DBL_PTR(_9355)->dbl == DBL_PTR(_p_16836)->dbl);
        }
    }
    DeRef(_9355);
    _9355 = NOVALUE;
    // SubProg db_free pc: 404 op: NOP1 (159)
    // SubProg db_free pc: 405 op: IF (20)
    if (_9356 == 0)
    {
        DeRef(_9356);
        _9356 = NOVALUE;
        goto L9; // [405] 695
    }
    else{
        DeRef(_9356);
        _9356 = NOVALUE;
    }
    // SubProg db_free pc: 408 op: STARTLINE (58)

    /** eds.e:887			io:seek(current_db, free_list+(i-2)*8+4)*/
    // SubProg db_free pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 412 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9357 = _i_16838 - 2;
        if ((object)((uintptr_t)_9357 +(uintptr_t) HIGH_BITS) >= 0){
            _9357 = NewDouble((eudouble)_9357);
        }
    }
    else {
        _9357 = NewDouble(DBL_PTR(_i_16838)->dbl - (eudouble)2);
    }
    // SubProg db_free pc: 416 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9357)) {
        if (_9357 == (short)_9357){
            _9358 = _9357 * 8;
        }
        else{
            _9358 = NewDouble(_9357 * (eudouble)8);
        }
    }
    else {
        _9358 = NewDouble(DBL_PTR(_9357)->dbl * (eudouble)8);
    }
    DeRef(_9357);
    _9357 = NOVALUE;
    // SubProg db_free pc: 420 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9358)) {
        _9359 = _free_list_16841 + _9358;
        if ((object)((uintptr_t)_9359 + (uintptr_t)HIGH_BITS) >= 0){
            _9359 = NewDouble((eudouble)_9359);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9359 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9358)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9358)) {
                _9359 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9358);
            }
            else
            _9359 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9358)->dbl);
        }
    }
    DeRef(_9358);
    _9358 = NOVALUE;
    // SubProg db_free pc: 424 op: PLUS (11)
    if (IS_ATOM_INT(_9359)) {
        _9360 = _9359 + 4;
        if ((object)((uintptr_t)_9360 + (uintptr_t)HIGH_BITS) >= 0){
            _9360 = NewDouble((eudouble)_9360);
        }
    }
    else {
        _9360 = NewDouble(DBL_PTR(_9359)->dbl + (eudouble)4);
    }
    DeRef(_9359);
    _9359 = NOVALUE;
    // SubProg db_free pc: 428 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_427_16919);
    _pos_inlined_seek_at_427_16919 = _9360;
    _9360 = NOVALUE;
    // SubProg db_free pc: 431 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 433 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_427_16919);
    DeRef(_seek_1__tmp_at430_16921);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_427_16919;
    _seek_1__tmp_at430_16921 = MAKE_SEQ(_1);
    // SubProg db_free pc: 437 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_430_16920 = machine(19, _seek_1__tmp_at430_16921);
    // SubProg db_free pc: 441 op: NOP1 (159)
    // SubProg db_free pc: 442 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 427

// block var pos_inlined_seek_at_427_16919
    DeRef(_pos_inlined_seek_at_427_16919);
    _pos_inlined_seek_at_427_16919 = NOVALUE;

// block var seek_1__tmp_at430_16921
    DeRef(_seek_1__tmp_at430_16921);
    _seek_1__tmp_at430_16921 = NOVALUE;
    // SubProg db_free pc: 444 op: STARTLINE (58)

    /** eds.e:888			if i < free_count and p + psize = addr then*/
    // SubProg db_free pc: 446 op: LESS (1)
    if (IS_ATOM_INT(_i_16838)) {
        _9361 = (_i_16838 < _free_count_16847);
    }
    else {
        _9361 = (DBL_PTR(_i_16838)->dbl < (eudouble)_free_count_16847);
    }
    // SubProg db_free pc: 450 op: SC1_AND_IF (146)
    if (_9361 == 0) {
        goto LA; // [450] 656
    }
    // SubProg db_free pc: 454 op: PLUS (11)
    if (IS_ATOM_INT(_p_16836) && IS_ATOM_INT(_psize_16837)) {
        _9363 = _p_16836 + _psize_16837;
        if ((object)((uintptr_t)_9363 + (uintptr_t)HIGH_BITS) >= 0){
            _9363 = NewDouble((eudouble)_9363);
        }
    }
    else {
        if (IS_ATOM_INT(_p_16836)) {
            _9363 = NewDouble((eudouble)_p_16836 + DBL_PTR(_psize_16837)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16837)) {
                _9363 = NewDouble(DBL_PTR(_p_16836)->dbl + (eudouble)_psize_16837);
            }
            else
            _9363 = NewDouble(DBL_PTR(_p_16836)->dbl + DBL_PTR(_psize_16837)->dbl);
        }
    }
    // SubProg db_free pc: 458 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 460 op: EQUALS (3)
    if (IS_ATOM_INT(_9363) && IS_ATOM_INT(_addr_16840)) {
        _9364 = (_9363 == _addr_16840);
    }
    else {
        if (IS_ATOM_INT(_9363)) {
            _9364 = ((eudouble)_9363 == DBL_PTR(_addr_16840)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_16840)) {
                _9364 = (DBL_PTR(_9363)->dbl == (eudouble)_addr_16840);
            }
            else
            _9364 = (DBL_PTR(_9363)->dbl == DBL_PTR(_addr_16840)->dbl);
        }
    }
    DeRef(_9363);
    _9363 = NOVALUE;
    // SubProg db_free pc: 464 op: NOP1 (159)
    // SubProg db_free pc: 465 op: IF (20)
    if (_9364 == 0)
    {
        DeRef(_9364);
        _9364 = NOVALUE;
        goto LA; // [465] 656
    }
    else{
        DeRef(_9364);
        _9364 = NOVALUE;
    }
    // SubProg db_free pc: 468 op: STARTLINE (58)

    /** eds.e:890				put4(prev_size+psize+size) -- update size on free list (only)*/
    // SubProg db_free pc: 470 op: PLUS (11)
    if (IS_ATOM_INT(_prev_size_16846) && IS_ATOM_INT(_psize_16837)) {
        _9365 = _prev_size_16846 + _psize_16837;
        if ((object)((uintptr_t)_9365 + (uintptr_t)HIGH_BITS) >= 0){
            _9365 = NewDouble((eudouble)_9365);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_16846)) {
            _9365 = NewDouble((eudouble)_prev_size_16846 + DBL_PTR(_psize_16837)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16837)) {
                _9365 = NewDouble(DBL_PTR(_prev_size_16846)->dbl + (eudouble)_psize_16837);
            }
            else
            _9365 = NewDouble(DBL_PTR(_prev_size_16846)->dbl + DBL_PTR(_psize_16837)->dbl);
        }
    }
    // SubProg db_free pc: 474 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 476 op: PLUS (11)
    if (IS_ATOM_INT(_9365) && IS_ATOM_INT(_size_16839)) {
        _9366 = _9365 + _size_16839;
        if ((object)((uintptr_t)_9366 + (uintptr_t)HIGH_BITS) >= 0){
            _9366 = NewDouble((eudouble)_9366);
        }
    }
    else {
        if (IS_ATOM_INT(_9365)) {
            _9366 = NewDouble((eudouble)_9365 + DBL_PTR(_size_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_16839)) {
                _9366 = NewDouble(DBL_PTR(_9365)->dbl + (eudouble)_size_16839);
            }
            else
            _9366 = NewDouble(DBL_PTR(_9365)->dbl + DBL_PTR(_size_16839)->dbl);
        }
    }
    DeRef(_9365);
    _9365 = NOVALUE;
    // SubProg db_free pc: 480 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_479_16930);
    _x_inlined_put4_at_479_16930 = _9366;
    _9366 = NOVALUE;
    // SubProg db_free pc: 483 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 487 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_479_16930)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_479_16930;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_479_16930)->dbl;
    }
    // SubProg db_free pc: 490 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 494 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 496 op: PEEK (127)
    DeRefi(_put4_1__tmp_at482_16931);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at482_16931 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 499 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at482_16931); // DJP 
    // SubProg db_free pc: 502 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 504 op: ELSE (23)
    goto LB; // [504] 507
    // SubProg db_free pc: 506 op: NOP1 (159)
LB: // addr: 507 pc: 506 sub: 16834 op: 159
    // SubProg db_free pc: 507 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 479

// block var x_inlined_put4_at_479_16930
    DeRef(_x_inlined_put4_at_479_16930);
    _x_inlined_put4_at_479_16930 = NOVALUE;

// block var put4_1__tmp_at482_16931
    DeRefi(_put4_1__tmp_at482_16931);
    _put4_1__tmp_at482_16931 = NOVALUE;
    // SubProg db_free pc: 509 op: STARTLINE (58)

    /** eds.e:891				io:seek(current_db, free_list+i*8)*/
    // SubProg db_free pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 513 op: MULTIPLY (13)
    if (IS_ATOM_INT(_i_16838)) {
        if (_i_16838 == (short)_i_16838){
            _9367 = _i_16838 * 8;
        }
        else{
            _9367 = NewDouble(_i_16838 * (eudouble)8);
        }
    }
    else {
        _9367 = NewDouble(DBL_PTR(_i_16838)->dbl * (eudouble)8);
    }
    // SubProg db_free pc: 517 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9367)) {
        _9368 = _free_list_16841 + _9367;
        if ((object)((uintptr_t)_9368 + (uintptr_t)HIGH_BITS) >= 0){
            _9368 = NewDouble((eudouble)_9368);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9368 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9367)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9367)) {
                _9368 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9367);
            }
            else
            _9368 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9367)->dbl);
        }
    }
    DeRef(_9367);
    _9367 = NOVALUE;
    // SubProg db_free pc: 521 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_520_16935);
    _pos_inlined_seek_at_520_16935 = _9368;
    _9368 = NOVALUE;
    // SubProg db_free pc: 524 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 526 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_520_16935);
    DeRef(_seek_1__tmp_at523_16937);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_520_16935;
    _seek_1__tmp_at523_16937 = MAKE_SEQ(_1);
    // SubProg db_free pc: 530 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_523_16936 = machine(19, _seek_1__tmp_at523_16937);
    // SubProg db_free pc: 534 op: NOP1 (159)
    // SubProg db_free pc: 535 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 520

// block var pos_inlined_seek_at_520_16935
    DeRef(_pos_inlined_seek_at_520_16935);
    _pos_inlined_seek_at_520_16935 = NOVALUE;

// block var seek_1__tmp_at523_16937
    DeRef(_seek_1__tmp_at523_16937);
    _seek_1__tmp_at523_16937 = NOVALUE;
    // SubProg db_free pc: 537 op: STARTLINE (58)

    /** eds.e:892				remaining = io:get_bytes(current_db, (free_count-i)*8)*/
    // SubProg db_free pc: 539 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 541 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9369 = _free_count_16847 - _i_16838;
        if ((object)((uintptr_t)_9369 +(uintptr_t) HIGH_BITS) >= 0){
            _9369 = NewDouble((eudouble)_9369);
        }
    }
    else {
        _9369 = NewDouble((eudouble)_free_count_16847 - DBL_PTR(_i_16838)->dbl);
    }
    // SubProg db_free pc: 545 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9369)) {
        if (_9369 == (short)_9369){
            _9370 = _9369 * 8;
        }
        else{
            _9370 = NewDouble(_9369 * (eudouble)8);
        }
    }
    else {
        _9370 = NewDouble(DBL_PTR(_9369)->dbl * (eudouble)8);
    }
    DeRef(_9369);
    _9369 = NOVALUE;
    // SubProg db_free pc: 549 op: PROC (27)
    _0 = _remaining_16848;
    _remaining_16848 = _14get_bytes(_44current_db_16085, _9370);
    DeRef(_0);
    _9370 = NOVALUE;
    // SubProg db_free pc: 554 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 556 op: STARTLINE (58)

    /** eds.e:893				io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 560 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9372 = _i_16838 - 1;
        if ((object)((uintptr_t)_9372 +(uintptr_t) HIGH_BITS) >= 0){
            _9372 = NewDouble((eudouble)_9372);
        }
    }
    else {
        _9372 = NewDouble(DBL_PTR(_i_16838)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 564 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9372)) {
        if (_9372 == (short)_9372){
            _9373 = _9372 * 8;
        }
        else{
            _9373 = NewDouble(_9372 * (eudouble)8);
        }
    }
    else {
        _9373 = NewDouble(DBL_PTR(_9372)->dbl * (eudouble)8);
    }
    DeRef(_9372);
    _9372 = NOVALUE;
    // SubProg db_free pc: 568 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9373)) {
        _9374 = _free_list_16841 + _9373;
        if ((object)((uintptr_t)_9374 + (uintptr_t)HIGH_BITS) >= 0){
            _9374 = NewDouble((eudouble)_9374);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9374 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9373)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9373)) {
                _9374 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9373);
            }
            else
            _9374 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9373)->dbl);
        }
    }
    DeRef(_9373);
    _9373 = NOVALUE;
    // SubProg db_free pc: 572 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_571_16945);
    _pos_inlined_seek_at_571_16945 = _9374;
    _9374 = NOVALUE;
    // SubProg db_free pc: 575 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 577 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_571_16945);
    DeRef(_seek_1__tmp_at574_16947);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_571_16945;
    _seek_1__tmp_at574_16947 = MAKE_SEQ(_1);
    // SubProg db_free pc: 581 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_574_16946 = machine(19, _seek_1__tmp_at574_16947);
    // SubProg db_free pc: 585 op: NOP1 (159)
    // SubProg db_free pc: 586 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 571

// block var pos_inlined_seek_at_571_16945
    DeRef(_pos_inlined_seek_at_571_16945);
    _pos_inlined_seek_at_571_16945 = NOVALUE;

// block var seek_1__tmp_at574_16947
    DeRef(_seek_1__tmp_at574_16947);
    _seek_1__tmp_at574_16947 = NOVALUE;
    // SubProg db_free pc: 588 op: STARTLINE (58)

    /** eds.e:894				putn(remaining)*/
    // SubProg db_free pc: 590 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 592 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 594 op: PUTS (44)
    EPuts(_44current_db_16085, _remaining_16848); // DJP 
    // SubProg db_free pc: 597 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 599 op: ELSE (23)
    goto LC; // [599] 602
    // SubProg db_free pc: 601 op: NOP1 (159)
LC: // addr: 602 pc: 601 sub: 16834 op: 159
    // SubProg db_free pc: 602 op: STARTLINE (58)

    /** eds.e:895				free_count -= 1*/
    // SubProg db_free pc: 604 op: MINUS_I (116)
    _free_count_16847 = _free_count_16847 - 1;
    // SubProg db_free pc: 608 op: STARTLINE (58)

    /** eds.e:896				io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 612 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 614 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at611_16952);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at611_16952 = MAKE_SEQ(_1);
    // SubProg db_free pc: 618 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_611_16951 = machine(19, _seek_1__tmp_at611_16952);
    // SubProg db_free pc: 622 op: NOP1 (159)
    // SubProg db_free pc: 623 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 611

// block var seek_1__tmp_at611_16952
    DeRefi(_seek_1__tmp_at611_16952);
    _seek_1__tmp_at611_16952 = NOVALUE;
    // SubProg db_free pc: 625 op: STARTLINE (58)

    /** eds.e:897				put4(free_count)*/
    // SubProg db_free pc: 627 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 629 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 631 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_16847;
    // SubProg db_free pc: 634 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 640 op: PEEK (127)
    DeRefi(_put4_1__tmp_at626_16954);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at626_16954 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 643 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at626_16954); // DJP 
    // SubProg db_free pc: 646 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 648 op: ELSE (23)
    goto LD; // [648] 651
    // SubProg db_free pc: 650 op: NOP1 (159)
LD: // addr: 651 pc: 650 sub: 16834 op: 159
    // SubProg db_free pc: 651 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 626

// block var put4_1__tmp_at626_16954
    DeRefi(_put4_1__tmp_at626_16954);
    _put4_1__tmp_at626_16954 = NOVALUE;
    // SubProg db_free pc: 653 op: ELSE (23)
    goto LE; // [653] 1028
    // SubProg db_free pc: 655 op: NOP1 (159)
LA: // addr: 656 pc: 655 sub: 16834 op: 159
    // SubProg db_free pc: 656 op: STARTLINE (58)

    /** eds.e:899				put4(prev_size+psize) -- increase previous size on free list (only)*/
    // SubProg db_free pc: 658 op: PLUS (11)
    if (IS_ATOM_INT(_prev_size_16846) && IS_ATOM_INT(_psize_16837)) {
        _9376 = _prev_size_16846 + _psize_16837;
        if ((object)((uintptr_t)_9376 + (uintptr_t)HIGH_BITS) >= 0){
            _9376 = NewDouble((eudouble)_9376);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_16846)) {
            _9376 = NewDouble((eudouble)_prev_size_16846 + DBL_PTR(_psize_16837)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16837)) {
                _9376 = NewDouble(DBL_PTR(_prev_size_16846)->dbl + (eudouble)_psize_16837);
            }
            else
            _9376 = NewDouble(DBL_PTR(_prev_size_16846)->dbl + DBL_PTR(_psize_16837)->dbl);
        }
    }
    // SubProg db_free pc: 662 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_661_16958);
    _x_inlined_put4_at_661_16958 = _9376;
    _9376 = NOVALUE;
    // SubProg db_free pc: 665 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 667 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 669 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_661_16958)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_661_16958;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_661_16958)->dbl;
    }
    // SubProg db_free pc: 672 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 674 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 676 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 678 op: PEEK (127)
    DeRefi(_put4_1__tmp_at664_16959);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at664_16959 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 681 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at664_16959); // DJP 
    // SubProg db_free pc: 684 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 686 op: ELSE (23)
    goto LF; // [686] 689
    // SubProg db_free pc: 688 op: NOP1 (159)
LF: // addr: 689 pc: 688 sub: 16834 op: 159
    // SubProg db_free pc: 689 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 661

// block var x_inlined_put4_at_661_16958
    DeRef(_x_inlined_put4_at_661_16958);
    _x_inlined_put4_at_661_16958 = NOVALUE;

// block var put4_1__tmp_at664_16959
    DeRefi(_put4_1__tmp_at664_16959);
    _put4_1__tmp_at664_16959 = NOVALUE;
    // SubProg db_free pc: 691 op: NOP1 (159)
    // SubProg db_free pc: 692 op: ELSE (23)
    goto LE; // [692] 1028
    // SubProg db_free pc: 694 op: NOP1 (159)
L9: // addr: 695 pc: 694 sub: 16834 op: 159
    // SubProg db_free pc: 695 op: STARTLINE (58)

    /** eds.e:901		elsif i < free_count and p + psize = addr then*/
    // SubProg db_free pc: 697 op: LESS (1)
    if (IS_ATOM_INT(_i_16838)) {
        _9377 = (_i_16838 < _free_count_16847);
    }
    else {
        _9377 = (DBL_PTR(_i_16838)->dbl < (eudouble)_free_count_16847);
    }
    // SubProg db_free pc: 701 op: SC1_AND_IF (146)
    if (_9377 == 0) {
        goto L10; // [701] 819
    }
    // SubProg db_free pc: 705 op: PLUS (11)
    if (IS_ATOM_INT(_p_16836) && IS_ATOM_INT(_psize_16837)) {
        _9379 = _p_16836 + _psize_16837;
        if ((object)((uintptr_t)_9379 + (uintptr_t)HIGH_BITS) >= 0){
            _9379 = NewDouble((eudouble)_9379);
        }
    }
    else {
        if (IS_ATOM_INT(_p_16836)) {
            _9379 = NewDouble((eudouble)_p_16836 + DBL_PTR(_psize_16837)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_16837)) {
                _9379 = NewDouble(DBL_PTR(_p_16836)->dbl + (eudouble)_psize_16837);
            }
            else
            _9379 = NewDouble(DBL_PTR(_p_16836)->dbl + DBL_PTR(_psize_16837)->dbl);
        }
    }
    // SubProg db_free pc: 709 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 711 op: EQUALS (3)
    if (IS_ATOM_INT(_9379) && IS_ATOM_INT(_addr_16840)) {
        _9380 = (_9379 == _addr_16840);
    }
    else {
        if (IS_ATOM_INT(_9379)) {
            _9380 = ((eudouble)_9379 == DBL_PTR(_addr_16840)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_16840)) {
                _9380 = (DBL_PTR(_9379)->dbl == (eudouble)_addr_16840);
            }
            else
            _9380 = (DBL_PTR(_9379)->dbl == DBL_PTR(_addr_16840)->dbl);
        }
    }
    DeRef(_9379);
    _9379 = NOVALUE;
    // SubProg db_free pc: 715 op: NOP1 (159)
    // SubProg db_free pc: 716 op: IF (20)
    if (_9380 == 0)
    {
        DeRef(_9380);
        _9380 = NOVALUE;
        goto L10; // [716] 819
    }
    else{
        DeRef(_9380);
        _9380 = NOVALUE;
    }
    // SubProg db_free pc: 719 op: STARTLINE (58)

    /** eds.e:903			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 721 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 723 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9381 = _i_16838 - 1;
        if ((object)((uintptr_t)_9381 +(uintptr_t) HIGH_BITS) >= 0){
            _9381 = NewDouble((eudouble)_9381);
        }
    }
    else {
        _9381 = NewDouble(DBL_PTR(_i_16838)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 727 op: MULTIPLY (13)
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
    // SubProg db_free pc: 731 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9382)) {
        _9383 = _free_list_16841 + _9382;
        if ((object)((uintptr_t)_9383 + (uintptr_t)HIGH_BITS) >= 0){
            _9383 = NewDouble((eudouble)_9383);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9383 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9382)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9382)) {
                _9383 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9382);
            }
            else
            _9383 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9382)->dbl);
        }
    }
    DeRef(_9382);
    _9382 = NOVALUE;
    // SubProg db_free pc: 735 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_734_16969);
    _pos_inlined_seek_at_734_16969 = _9383;
    _9383 = NOVALUE;
    // SubProg db_free pc: 738 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 740 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_734_16969);
    DeRef(_seek_1__tmp_at737_16971);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_734_16969;
    _seek_1__tmp_at737_16971 = MAKE_SEQ(_1);
    // SubProg db_free pc: 744 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_737_16970 = machine(19, _seek_1__tmp_at737_16971);
    // SubProg db_free pc: 748 op: NOP1 (159)
    // SubProg db_free pc: 749 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 734

// block var pos_inlined_seek_at_734_16969
    DeRef(_pos_inlined_seek_at_734_16969);
    _pos_inlined_seek_at_734_16969 = NOVALUE;

// block var seek_1__tmp_at737_16971
    DeRef(_seek_1__tmp_at737_16971);
    _seek_1__tmp_at737_16971 = NOVALUE;
    // SubProg db_free pc: 751 op: STARTLINE (58)

    /** eds.e:904			put4(p)*/
    // SubProg db_free pc: 753 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 757 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_p_16836)) {
        *poke4_addr = (uint32_t)_p_16836;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_16836)->dbl;
    }
    // SubProg db_free pc: 760 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 762 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 764 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 766 op: PEEK (127)
    DeRefi(_put4_1__tmp_at752_16973);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at752_16973 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 769 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at752_16973); // DJP 
    // SubProg db_free pc: 772 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 774 op: ELSE (23)
    goto L11; // [774] 777
    // SubProg db_free pc: 776 op: NOP1 (159)
L11: // addr: 777 pc: 776 sub: 16834 op: 159
    // SubProg db_free pc: 777 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 752

// block var put4_1__tmp_at752_16973
    DeRefi(_put4_1__tmp_at752_16973);
    _put4_1__tmp_at752_16973 = NOVALUE;
    // SubProg db_free pc: 779 op: STARTLINE (58)

    /** eds.e:905			put4(psize+size)*/
    // SubProg db_free pc: 781 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 783 op: PLUS (11)
    if (IS_ATOM_INT(_psize_16837) && IS_ATOM_INT(_size_16839)) {
        _9384 = _psize_16837 + _size_16839;
        if ((object)((uintptr_t)_9384 + (uintptr_t)HIGH_BITS) >= 0){
            _9384 = NewDouble((eudouble)_9384);
        }
    }
    else {
        if (IS_ATOM_INT(_psize_16837)) {
            _9384 = NewDouble((eudouble)_psize_16837 + DBL_PTR(_size_16839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_16839)) {
                _9384 = NewDouble(DBL_PTR(_psize_16837)->dbl + (eudouble)_size_16839);
            }
            else
            _9384 = NewDouble(DBL_PTR(_psize_16837)->dbl + DBL_PTR(_size_16839)->dbl);
        }
    }
    // SubProg db_free pc: 787 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_786_16976);
    _x_inlined_put4_at_786_16976 = _9384;
    _9384 = NOVALUE;
    // SubProg db_free pc: 790 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 792 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 794 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_786_16976)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_786_16976;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_786_16976)->dbl;
    }
    // SubProg db_free pc: 797 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 799 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 803 op: PEEK (127)
    DeRefi(_put4_1__tmp_at789_16977);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at789_16977 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 806 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at789_16977); // DJP 
    // SubProg db_free pc: 809 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 811 op: ELSE (23)
    goto L12; // [811] 814
    // SubProg db_free pc: 813 op: NOP1 (159)
L12: // addr: 814 pc: 813 sub: 16834 op: 159
    // SubProg db_free pc: 814 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 786

// block var x_inlined_put4_at_786_16976
    DeRef(_x_inlined_put4_at_786_16976);
    _x_inlined_put4_at_786_16976 = NOVALUE;

// block var put4_1__tmp_at789_16977
    DeRefi(_put4_1__tmp_at789_16977);
    _put4_1__tmp_at789_16977 = NOVALUE;
    // SubProg db_free pc: 816 op: ELSE (23)
    goto LE; // [816] 1028
    // SubProg db_free pc: 818 op: NOP1 (159)
L10: // addr: 819 pc: 818 sub: 16834 op: 159
    // SubProg db_free pc: 819 op: STARTLINE (58)

    /** eds.e:908			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 821 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 823 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9385 = _i_16838 - 1;
        if ((object)((uintptr_t)_9385 +(uintptr_t) HIGH_BITS) >= 0){
            _9385 = NewDouble((eudouble)_9385);
        }
    }
    else {
        _9385 = NewDouble(DBL_PTR(_i_16838)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 827 op: MULTIPLY (13)
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
    // SubProg db_free pc: 831 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9386)) {
        _9387 = _free_list_16841 + _9386;
        if ((object)((uintptr_t)_9387 + (uintptr_t)HIGH_BITS) >= 0){
            _9387 = NewDouble((eudouble)_9387);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9387 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9386)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9386)) {
                _9387 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9386);
            }
            else
            _9387 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9386)->dbl);
        }
    }
    DeRef(_9386);
    _9386 = NOVALUE;
    // SubProg db_free pc: 835 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_834_16983);
    _pos_inlined_seek_at_834_16983 = _9387;
    _9387 = NOVALUE;
    // SubProg db_free pc: 838 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 840 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_834_16983);
    DeRef(_seek_1__tmp_at837_16985);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_834_16983;
    _seek_1__tmp_at837_16985 = MAKE_SEQ(_1);
    // SubProg db_free pc: 844 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_837_16984 = machine(19, _seek_1__tmp_at837_16985);
    // SubProg db_free pc: 848 op: NOP1 (159)
    // SubProg db_free pc: 849 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 834

// block var pos_inlined_seek_at_834_16983
    DeRef(_pos_inlined_seek_at_834_16983);
    _pos_inlined_seek_at_834_16983 = NOVALUE;

// block var seek_1__tmp_at837_16985
    DeRef(_seek_1__tmp_at837_16985);
    _seek_1__tmp_at837_16985 = NOVALUE;
    // SubProg db_free pc: 851 op: STARTLINE (58)

    /** eds.e:909			remaining = io:get_bytes(current_db, (free_count-i+1)*8)*/
    // SubProg db_free pc: 853 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 855 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9388 = _free_count_16847 - _i_16838;
        if ((object)((uintptr_t)_9388 +(uintptr_t) HIGH_BITS) >= 0){
            _9388 = NewDouble((eudouble)_9388);
        }
    }
    else {
        _9388 = NewDouble((eudouble)_free_count_16847 - DBL_PTR(_i_16838)->dbl);
    }
    // SubProg db_free pc: 859 op: PLUS1 (93)
    if (IS_ATOM_INT(_9388)) {
        _9389 = _9388 + 1;
        if (_9389 > MAXINT){
            _9389 = NewDouble((eudouble)_9389);
        }
    }
    else
    _9389 = binary_op(PLUS, 1, _9388);
    DeRef(_9388);
    _9388 = NOVALUE;
    // SubProg db_free pc: 863 op: MULTIPLY (13)
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
    // SubProg db_free pc: 867 op: PROC (27)
    _0 = _remaining_16848;
    _remaining_16848 = _14get_bytes(_44current_db_16085, _9390);
    DeRef(_0);
    _9390 = NOVALUE;
    // SubProg db_free pc: 872 op: SEQUENCE_CHECK (97)
    // SubProg db_free pc: 874 op: STARTLINE (58)

    /** eds.e:910			free_count += 1*/
    // SubProg db_free pc: 876 op: PLUS1_I (117)
    _free_count_16847 = _free_count_16847 + 1;
    // SubProg db_free pc: 880 op: STARTLINE (58)

    /** eds.e:911			io:seek(current_db, FREE_COUNT)*/
    // SubProg db_free pc: 882 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 884 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 886 op: RIGHT_BRACE_2 (85)
    DeRefi(_seek_1__tmp_at883_16993);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at883_16993 = MAKE_SEQ(_1);
    // SubProg db_free pc: 890 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_883_16992 = machine(19, _seek_1__tmp_at883_16993);
    // SubProg db_free pc: 894 op: NOP1 (159)
    // SubProg db_free pc: 895 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 883

// block var seek_1__tmp_at883_16993
    DeRefi(_seek_1__tmp_at883_16993);
    _seek_1__tmp_at883_16993 = NOVALUE;
    // SubProg db_free pc: 897 op: STARTLINE (58)

    /** eds.e:912			put4(free_count)*/
    // SubProg db_free pc: 899 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 901 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 903 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_16847;
    // SubProg db_free pc: 906 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 908 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 910 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 912 op: PEEK (127)
    DeRefi(_put4_1__tmp_at898_16995);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at898_16995 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 915 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at898_16995); // DJP 
    // SubProg db_free pc: 918 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 920 op: ELSE (23)
    goto L13; // [920] 923
    // SubProg db_free pc: 922 op: NOP1 (159)
L13: // addr: 923 pc: 922 sub: 16834 op: 159
    // SubProg db_free pc: 923 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 898

// block var put4_1__tmp_at898_16995
    DeRefi(_put4_1__tmp_at898_16995);
    _put4_1__tmp_at898_16995 = NOVALUE;
    // SubProg db_free pc: 925 op: STARTLINE (58)

    /** eds.e:913			io:seek(current_db, free_list+(i-1)*8)*/
    // SubProg db_free pc: 927 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 929 op: MINUS (10)
    if (IS_ATOM_INT(_i_16838)) {
        _9393 = _i_16838 - 1;
        if ((object)((uintptr_t)_9393 +(uintptr_t) HIGH_BITS) >= 0){
            _9393 = NewDouble((eudouble)_9393);
        }
    }
    else {
        _9393 = NewDouble(DBL_PTR(_i_16838)->dbl - (eudouble)1);
    }
    // SubProg db_free pc: 933 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9393)) {
        if (_9393 == (short)_9393){
            _9394 = _9393 * 8;
        }
        else{
            _9394 = NewDouble(_9393 * (eudouble)8);
        }
    }
    else {
        _9394 = NewDouble(DBL_PTR(_9393)->dbl * (eudouble)8);
    }
    DeRef(_9393);
    _9393 = NOVALUE;
    // SubProg db_free pc: 937 op: PLUS (11)
    if (IS_ATOM_INT(_free_list_16841) && IS_ATOM_INT(_9394)) {
        _9395 = _free_list_16841 + _9394;
        if ((object)((uintptr_t)_9395 + (uintptr_t)HIGH_BITS) >= 0){
            _9395 = NewDouble((eudouble)_9395);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_16841)) {
            _9395 = NewDouble((eudouble)_free_list_16841 + DBL_PTR(_9394)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9394)) {
                _9395 = NewDouble(DBL_PTR(_free_list_16841)->dbl + (eudouble)_9394);
            }
            else
            _9395 = NewDouble(DBL_PTR(_free_list_16841)->dbl + DBL_PTR(_9394)->dbl);
        }
    }
    DeRef(_9394);
    _9394 = NOVALUE;
    // SubProg db_free pc: 941 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_940_17000);
    _pos_inlined_seek_at_940_17000 = _9395;
    _9395 = NOVALUE;
    // SubProg db_free pc: 944 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_free pc: 946 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_940_17000);
    DeRef(_seek_1__tmp_at943_17002);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_940_17000;
    _seek_1__tmp_at943_17002 = MAKE_SEQ(_1);
    // SubProg db_free pc: 950 op: MACHINE_FUNC (111)
    _seek_inlined_seek_at_943_17001 = machine(19, _seek_1__tmp_at943_17002);
    // SubProg db_free pc: 954 op: NOP1 (159)
    // SubProg db_free pc: 955 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-seek from db_free @ 940

// block var pos_inlined_seek_at_940_17000
    DeRef(_pos_inlined_seek_at_940_17000);
    _pos_inlined_seek_at_940_17000 = NOVALUE;

// block var seek_1__tmp_at943_17002
    DeRef(_seek_1__tmp_at943_17002);
    _seek_1__tmp_at943_17002 = NOVALUE;
    // SubProg db_free pc: 957 op: STARTLINE (58)

    /** eds.e:914			put4(p)*/
    // SubProg db_free pc: 959 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 961 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 963 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_p_16836)) {
        *poke4_addr = (uint32_t)_p_16836;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_16836)->dbl;
    }
    // SubProg db_free pc: 966 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 968 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 970 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 972 op: PEEK (127)
    DeRefi(_put4_1__tmp_at958_17004);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at958_17004 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 975 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at958_17004); // DJP 
    // SubProg db_free pc: 978 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 980 op: ELSE (23)
    goto L14; // [980] 983
    // SubProg db_free pc: 982 op: NOP1 (159)
L14: // addr: 983 pc: 982 sub: 16834 op: 159
    // SubProg db_free pc: 983 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 958

// block var put4_1__tmp_at958_17004
    DeRefi(_put4_1__tmp_at958_17004);
    _put4_1__tmp_at958_17004 = NOVALUE;
    // SubProg db_free pc: 985 op: STARTLINE (58)

    /** eds.e:915			put4(psize)*/
    // SubProg db_free pc: 987 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_free pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 991 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    if (IS_ATOM_INT(_psize_16837)) {
        *poke4_addr = (uint32_t)_psize_16837;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_psize_16837)->dbl;
    }
    // SubProg db_free pc: 994 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_free pc: 996 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 998 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 1000 op: PEEK (127)
    DeRefi(_put4_1__tmp_at986_17006);
    _1 = (object)SEQ_PTR(_44memseq_16362);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at986_17006 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    // SubProg db_free pc: 1003 op: PUTS (44)
    EPuts(_44current_db_16085, _put4_1__tmp_at986_17006); // DJP 
    // SubProg db_free pc: 1006 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_free pc: 1008 op: ELSE (23)
    goto L15; // [1008] 1011
    // SubProg db_free pc: 1010 op: NOP1 (159)
L15: // addr: 1011 pc: 1010 sub: 16834 op: 159
    // SubProg db_free pc: 1011 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_free @ 986

// block var put4_1__tmp_at986_17006
    DeRefi(_put4_1__tmp_at986_17006);
    _put4_1__tmp_at986_17006 = NOVALUE;
    // SubProg db_free pc: 1013 op: STARTLINE (58)

    /** eds.e:916			putn(remaining)*/
    // SubProg db_free pc: 1015 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_free pc: 1017 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_free pc: 1019 op: PUTS (44)
    EPuts(_44current_db_16085, _remaining_16848); // DJP 
    // SubProg db_free pc: 1022 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_free pc: 1024 op: ELSE (23)
    goto L16; // [1024] 1027
    // SubProg db_free pc: 1026 op: NOP1 (159)
L16: // addr: 1027 pc: 1026 sub: 16834 op: 159
    // SubProg db_free pc: 1027 op: NOP1 (159)
LE: // addr: 1028 pc: 1027 sub: 16834 op: 159
    // SubProg db_free pc: 1028 op: STARTLINE (58)

    /** eds.e:919		if new_space then*/
    // SubProg db_free pc: 1030 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 1032 op: IF (20)
    if (_new_space_16843 == 0) {
        goto L17; // [1032] 1043
    }
    else {
        if (!IS_ATOM_INT(_new_space_16843) && DBL_PTR(_new_space_16843)->dbl == 0.0){
            goto L17; // [1032] 1043
        }
    }
    // SubProg db_free pc: 1035 op: STARTLINE (58)

    /** eds.e:920			db_free(to_be_freed) -- free the old space*/
    // SubProg db_free pc: 1037 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_free pc: 1039 op: PROC (27)
    Ref(_to_be_freed_16844);
    _44db_free(_to_be_freed_16844);
    // SubProg db_free pc: 1042 op: NOP1 (159)
L17: // addr: 1043 pc: 1042 sub: 16834 op: 159
    // SubProg db_free pc: 1043 op: STARTLINE (58)

    /** eds.e:922	end procedure*/
    // SubProg db_free pc: 1045 op: RETURNP (29)

// Exiting block BLOCK: db_free

// block var p_16836
    DeRef(_p_16836);

// block var psize_16837
    DeRef(_psize_16837);

// block var i_16838
    DeRef(_i_16838);

// block var size_16839
    DeRef(_size_16839);

// block var addr_16840
    DeRef(_addr_16840);

// block var free_list_16841
    DeRef(_free_list_16841);

// block var free_list_space_16842
    DeRef(_free_list_space_16842);

// block var new_space_16843
    DeRef(_new_space_16843);

// block var to_be_freed_16844
    DeRef(_to_be_freed_16844);

// block var prev_addr_16845
    DeRef(_prev_addr_16845);

// block var prev_size_16846
    DeRef(_prev_size_16846);

// block var free_count_16847

// block var remaining_16848
    DeRef(_remaining_16848);
    DeRef(_9361);
    _9361 = NOVALUE;
    DeRef(_9353);
    _9353 = NOVALUE;
    DeRef(_9377);
    _9377 = NOVALUE;
    return;
    // SubProg db_free pc: 1048 op: BADRETURNF (43)
    ;
}


void _44save_keys()
{
    object _k_17011 = NOVALUE;
// skipping _9403  name type: 0
    object _9402 = NOVALUE; // 17022 9402
// skipping _9401  name type: 0
// skipping _9400  name type: 0
// skipping _9399  name type: 0
    object _9398 = NOVALUE; // 17016 9398
// skipping _9397  name type: 0
// skipping _9396  name type: 0
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
    if (binary_op_a(LESSEQ, _44current_table_pos_16086, 0)){
        goto L1; // [13] 81
    }
    // SubProg save_keys pc: 17 op: STARTLINE (58)

    /** eds.e:928				k = eu:find({current_db, current_table_pos}, cache_index)*/
    // SubProg save_keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 23 op: RIGHT_BRACE_2 (85)
    Ref(_44current_table_pos_16086);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _44current_table_pos_16086;
    _9398 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 29 op: FIND_FROM (176)
    _k_17011 = find_from(_9398, _44cache_index_16094, 1);
    DeRefDS(_9398);
    _9398 = NOVALUE;
    // SubProg save_keys pc: 34 op: STARTLINE (58)

    /** eds.e:929				if k != 0 then*/
    // SubProg save_keys pc: 36 op: NOTEQ_IFW_I (122)
    if (_k_17011 == 0)
    goto L2; // [36] 53
    // SubProg save_keys pc: 40 op: STARTLINE (58)

    /** eds.e:930					key_cache[k] = key_pointers*/
    // SubProg save_keys pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 46 op: ASSIGN_SUBS (16)
    RefDS(_44key_pointers_16092);
    _2 = (object)SEQ_PTR(_44key_cache_16093);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _44key_cache_16093 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _k_17011);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _44key_pointers_16092;
    DeRef(_1);
    // SubProg save_keys pc: 50 op: ELSE (23)
    goto L3; // [50] 80
    // SubProg save_keys pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 17009 op: 159
    // SubProg save_keys pc: 53 op: STARTLINE (58)

    /** eds.e:932					key_cache = append(key_cache, key_pointers)*/
    // SubProg save_keys pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 59 op: APPEND (35)
    RefDS(_44key_pointers_16092);
    Append(&_44key_cache_16093, _44key_cache_16093, _44key_pointers_16092);
    // SubProg save_keys pc: 63 op: STARTLINE (58)

    /** eds.e:933					cache_index = append(cache_index, {current_db, current_table_pos})*/
    // SubProg save_keys pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg save_keys pc: 71 op: RIGHT_BRACE_2 (85)
    Ref(_44current_table_pos_16086);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _44current_table_pos_16086;
    _9402 = MAKE_SEQ(_1);
    // SubProg save_keys pc: 75 op: APPEND (35)
    RefDS(_9402);
    Append(&_44cache_index_16094, _44cache_index_16094, _9402);
    DeRefDS(_9402);
    _9402 = NOVALUE;
    // SubProg save_keys pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 17009 op: 159
    // SubProg save_keys pc: 80 op: NOP1 (159)
L1: // addr: 81 pc: 80 sub: 17009 op: 159
    // SubProg save_keys pc: 81 op: NOP1 (159)
    // SubProg save_keys pc: 82 op: STARTLINE (58)

    /** eds.e:937	end procedure*/
    // SubProg save_keys pc: 84 op: RETURNP (29)

// Exiting block BLOCK: save_keys

// block var k_17011
    return;
    // SubProg save_keys pc: 87 op: BADRETURNF (43)
    ;
}


object _44db_create(object _path_17108, object _lock_method_17109, object _init_tables_17110, object _init_free_17111)
{
    object _db_17112 = NOVALUE;
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
    object _9502 = NOVALUE; // 17188 9502
    object _9501 = NOVALUE; // 17187 9501
    object _9500 = NOVALUE; // 17183 9500
    object _9499 = NOVALUE; // 17182 9499
    object _9498 = NOVALUE; // 17179 9498
    object _9497 = NOVALUE; // 17178 9497
    object _9496 = NOVALUE; // 17172 9496
    object _9495 = NOVALUE; // 17171 9495
    object _9494 = NOVALUE; // 17167 9494
    object _9493 = NOVALUE; // 17166 9493
    object _9492 = NOVALUE; // 17165 9492
// skipping _9491  name type: 0
// skipping _9490  name type: 0
// skipping _9489  name type: 0
// skipping _9488  name type: 0
// skipping _9487  name type: 0
// skipping _9486  name type: 0
// skipping _9485  name type: 0
// skipping _9484  name type: 0
// skipping _9482  name type: 0
// skipping _9481  name type: 0
// skipping _9479  name type: 0
// skipping _9478  name type: 0
// skipping _9476  name type: 0
// skipping _9475  name type: 0
// skipping _9474  name type: 0
    object _9473 = NOVALUE; // 17128 9473
// skipping _9472  name type: 0
    object _9471 = NOVALUE; // 17124 9471
    object _9470 = NOVALUE; // 17123 9470
// skipping _9469  name type: 0
    object _9468 = NOVALUE; // 17121 9468
    object _9467 = NOVALUE; // 17120 9467
// skipping _9466  name type: 0
    object _9465 = NOVALUE; // 17118 9465
    object _9464 = NOVALUE; // 17117 9464
// skipping _9463  name type: 0
    object _9462 = NOVALUE; // 17115 9462
// skipping _9461  name type: 0
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
    _db_17112 = find_from(_path_17108, _44Known_Aliases_16106, 1);
    // SubProg db_create pc: 18 op: STARTLINE (58)

    /** eds.e:1134		if db then*/
    // SubProg db_create pc: 20 op: IF (20)
    if (_db_17112 == 0)
    {
        goto L1; // [20] 94
    }
    else{
    }
    // SubProg db_create pc: 23 op: STARTLINE (58)

    /** eds.e:1136			path = Alias_Details[db][1]*/
    // SubProg db_create pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 27 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9462 = (object)*(((s1_ptr)_2)->base + _db_17112);
    // SubProg db_create pc: 31 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17108);
    _2 = (object)SEQ_PTR(_9462);
    _path_17108 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17108);
    _9462 = NOVALUE;
    // SubProg db_create pc: 35 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 37 op: STARTLINE (58)

    /** eds.e:1137			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    // SubProg db_create pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 41 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9464 = (object)*(((s1_ptr)_2)->base + _db_17112);
    // SubProg db_create pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9464);
    _9465 = (object)*(((s1_ptr)_2)->base + 2);
    _9464 = NOVALUE;
    // SubProg db_create pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9465);
    _lock_method_17109 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17109)){
        _lock_method_17109 = (object)DBL_PTR(_lock_method_17109)->dbl;
    }
    _9465 = NOVALUE;
    // SubProg db_create pc: 55 op: STARTLINE (58)

    /** eds.e:1138			init_tables = Alias_Details[db][2][CONNECT_TABLES]*/
    // SubProg db_create pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9467 = (object)*(((s1_ptr)_2)->base + _db_17112);
    // SubProg db_create pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9467);
    _9468 = (object)*(((s1_ptr)_2)->base + 2);
    _9467 = NOVALUE;
    // SubProg db_create pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9468);
    _init_tables_17110 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_init_tables_17110)){
        _init_tables_17110 = (object)DBL_PTR(_init_tables_17110)->dbl;
    }
    _9468 = NOVALUE;
    // SubProg db_create pc: 73 op: STARTLINE (58)

    /** eds.e:1139			init_free = Alias_Details[db][2][CONNECT_FREE]*/
    // SubProg db_create pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 77 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9470 = (object)*(((s1_ptr)_2)->base + _db_17112);
    // SubProg db_create pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9470);
    _9471 = (object)*(((s1_ptr)_2)->base + 2);
    _9470 = NOVALUE;
    // SubProg db_create pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9471);
    _init_free_17111 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_init_free_17111)){
        _init_free_17111 = (object)DBL_PTR(_init_free_17111)->dbl;
    }
    _9471 = NOVALUE;
    // SubProg db_create pc: 91 op: ELSE (23)
    goto L2; // [91] 134
    // SubProg db_create pc: 93 op: NOP1 (159)
L1: // addr: 94 pc: 93 sub: 17106 op: 159
    // SubProg db_create pc: 94 op: STARTLINE (58)

    /** eds.e:1141			path = filesys:canonical_path( defaultext(path, "edb") )*/
    // SubProg db_create pc: 96 op: PROC (27)
    RefDS(_path_17108);
    RefDS(_9456);
    _9473 = _18defaultext(_path_17108, _9456);
    // SubProg db_create pc: 101 op: PROC (27)
    _0 = _path_17108;
    _path_17108 = _18canonical_path(_9473, 0, 0);
    DeRefDS(_0);
    _9473 = NOVALUE;
    // SubProg db_create pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 109 op: STARTLINE (58)

    /** eds.e:1143			if init_tables < 1 then*/
    // SubProg db_create pc: 111 op: LESS_IFW_I (119)
    if (_init_tables_17110 >= 1)
    goto L3; // [111] 121
    // SubProg db_create pc: 115 op: STARTLINE (58)

    /** eds.e:1144				init_tables = 1*/
    // SubProg db_create pc: 117 op: ASSIGN_I (113)
    _init_tables_17110 = 1;
    // SubProg db_create pc: 120 op: NOP1 (159)
L3: // addr: 121 pc: 120 sub: 17106 op: 159
    // SubProg db_create pc: 121 op: STARTLINE (58)

    /** eds.e:1147			if init_free < 0 then*/
    // SubProg db_create pc: 123 op: LESS_IFW_I (119)
    if (_init_free_17111 >= 0)
    goto L4; // [123] 133
    // SubProg db_create pc: 127 op: STARTLINE (58)

    /** eds.e:1148				init_free = 0*/
    // SubProg db_create pc: 129 op: ASSIGN_I (113)
    _init_free_17111 = 0;
    // SubProg db_create pc: 132 op: NOP1 (159)
L4: // addr: 133 pc: 132 sub: 17106 op: 159
    // SubProg db_create pc: 133 op: NOP1 (159)
L2: // addr: 134 pc: 133 sub: 17106 op: 159
    // SubProg db_create pc: 134 op: STARTLINE (58)

    /** eds.e:1154		db = open(path, "rb")*/
    // SubProg db_create pc: 136 op: OPEN (37)
    _db_17112 = EOpen(_path_17108, _9477, 0);
    // SubProg db_create pc: 141 op: STARTLINE (58)

    /** eds.e:1155		if db != -1 then*/
    // SubProg db_create pc: 143 op: NOTEQ_IFW_I (122)
    if (_db_17112 == -1)
    goto L5; // [143] 158
    // SubProg db_create pc: 147 op: STARTLINE (58)

    /** eds.e:1157			close(db)*/
    // SubProg db_create pc: 149 op: CLOSE (86)
    EClose(_db_17112);
    // SubProg db_create pc: 151 op: STARTLINE (58)

    /** eds.e:1158			return DB_EXISTS_ALREADY*/
    // SubProg db_create pc: 153 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17108
    DeRefDS(_path_17108);

// block var lock_method_17109

// block var init_tables_17110

// block var init_free_17111

// block var db_17112
    return -2;
    // SubProg db_create pc: 157 op: NOP1 (159)
L5: // addr: 158 pc: 157 sub: 17106 op: 159
    // SubProg db_create pc: 158 op: STARTLINE (58)

    /** eds.e:1162		db = open(path, "wb")*/
    // SubProg db_create pc: 160 op: OPEN (37)
    _db_17112 = EOpen(_path_17108, _9480, 0);
    // SubProg db_create pc: 165 op: STARTLINE (58)

    /** eds.e:1163		if db = -1 then*/
    // SubProg db_create pc: 167 op: EQUALS_IFW_I (121)
    if (_db_17112 != -1)
    goto L6; // [167] 178
    // SubProg db_create pc: 171 op: STARTLINE (58)

    /** eds.e:1164			return DB_OPEN_FAIL*/
    // SubProg db_create pc: 173 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17108
    DeRefDS(_path_17108);

// block var lock_method_17109

// block var init_tables_17110

// block var init_free_17111

// block var db_17112
    return -1;
    // SubProg db_create pc: 177 op: NOP1 (159)
L6: // addr: 178 pc: 177 sub: 17106 op: 159
    // SubProg db_create pc: 178 op: STARTLINE (58)

    /** eds.e:1166		close(db)*/
    // SubProg db_create pc: 180 op: CLOSE (86)
    EClose(_db_17112);
    // SubProg db_create pc: 182 op: STARTLINE (58)

    /** eds.e:1169		db = open(path, "ub")*/
    // SubProg db_create pc: 184 op: OPEN (37)
    _db_17112 = EOpen(_path_17108, _9483, 0);
    // SubProg db_create pc: 189 op: STARTLINE (58)

    /** eds.e:1170		if db = -1 then*/
    // SubProg db_create pc: 191 op: EQUALS_IFW_I (121)
    if (_db_17112 != -1)
    goto L7; // [191] 202
    // SubProg db_create pc: 195 op: STARTLINE (58)

    /** eds.e:1171			return DB_OPEN_FAIL*/
    // SubProg db_create pc: 197 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17108
    DeRefDS(_path_17108);

// block var lock_method_17109

// block var init_tables_17110

// block var init_free_17111

// block var db_17112
    return -1;
    // SubProg db_create pc: 201 op: NOP1 (159)
L7: // addr: 202 pc: 201 sub: 17106 op: 159
    // SubProg db_create pc: 202 op: STARTLINE (58)

    /** eds.e:1173		if lock_method = DB_LOCK_SHARED then*/
    // SubProg db_create pc: 204 op: EQUALS_IFW_I (121)
    if (_lock_method_17109 != 1)
    goto L8; // [204] 214
    // SubProg db_create pc: 208 op: STARTLINE (58)

    /** eds.e:1175			lock_method = DB_LOCK_NO*/
    // SubProg db_create pc: 210 op: ASSIGN_I (113)
    _lock_method_17109 = 0;
    // SubProg db_create pc: 213 op: NOP1 (159)
L8: // addr: 214 pc: 213 sub: 17106 op: 159
    // SubProg db_create pc: 214 op: STARTLINE (58)

    /** eds.e:1177		if lock_method = DB_LOCK_EXCLUSIVE then*/
    // SubProg db_create pc: 216 op: EQUALS_IFW_I (121)
    if (_lock_method_17109 != 2)
    goto L9; // [216] 248
    // SubProg db_create pc: 220 op: STARTLINE (58)

    /** eds.e:1178			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/
    // SubProg db_create pc: 222 op: STARTLINE (58)

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    // SubProg db_create pc: 224 op: RIGHT_BRACE_N (31)
    _0 = _lock_file_1__tmp_at222_17153;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_17112;
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

// block var path_17108
    DeRefDS(_path_17108);

// block var lock_method_17109

// block var init_tables_17110

// block var init_free_17111

// block var db_17112
    return -3;
    // SubProg db_create pc: 246 op: NOP1 (159)
LA: // addr: 247 pc: 246 sub: 17106 op: 159
    // SubProg db_create pc: 247 op: NOP1 (159)
L9: // addr: 248 pc: 247 sub: 17106 op: 159
    // SubProg db_create pc: 248 op: STARTLINE (58)

    /** eds.e:1182		save_keys()*/
    // SubProg db_create pc: 250 op: PROC (27)
    _44save_keys();
    // SubProg db_create pc: 252 op: STARTLINE (58)

    /** eds.e:1183		current_db = db*/
    // SubProg db_create pc: 254 op: ASSIGN_I (113)
    _44current_db_16085 = _db_17112;
    // SubProg db_create pc: 257 op: STARTLINE (58)

    /** eds.e:1184		current_lock = lock_method*/
    // SubProg db_create pc: 259 op: ASSIGN_I (113)
    _44current_lock_16091 = _lock_method_17109;
    // SubProg db_create pc: 262 op: STARTLINE (58)

    /** eds.e:1185		current_table_pos = -1*/
    // SubProg db_create pc: 264 op: ASSIGN (18)
    DeRef(_44current_table_pos_16086);
    _44current_table_pos_16086 = -1;
    // SubProg db_create pc: 267 op: STARTLINE (58)

    /** eds.e:1186		current_table_name = ""*/
    // SubProg db_create pc: 269 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16087);
    _44current_table_name_16087 = _5;
    // SubProg db_create pc: 272 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 274 op: STARTLINE (58)

    /** eds.e:1187		db_names = append(db_names, path)*/
    // SubProg db_create pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 278 op: APPEND (35)
    RefDS(_path_17108);
    Append(&_44db_names_16088, _44db_names_16088, _path_17108);
    // SubProg db_create pc: 282 op: STARTLINE (58)

    /** eds.e:1188		db_lock_methods = append(db_lock_methods, lock_method)*/
    // SubProg db_create pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 286 op: APPEND (35)
    Append(&_44db_lock_methods_16090, _44db_lock_methods_16090, _lock_method_17109);
    // SubProg db_create pc: 290 op: STARTLINE (58)

    /** eds.e:1189		db_file_nums = append(db_file_nums, db)*/
    // SubProg db_create pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 294 op: APPEND (35)
    Append(&_44db_file_nums_16089, _44db_file_nums_16089, _db_17112);
    // SubProg db_create pc: 298 op: STARTLINE (58)

    /** eds.e:1192		put1(DB_MAGIC) -- so we know what type of file it is*/
    // SubProg db_create pc: 300 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 304 op: PUTS (44)
    EPuts(_44current_db_16085, 77); // DJP 
    // SubProg db_create pc: 307 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 309 op: ELSE (23)
    goto LB; // [309] 312
    // SubProg db_create pc: 311 op: NOP1 (159)
LB: // addr: 312 pc: 311 sub: 17106 op: 159
    // SubProg db_create pc: 312 op: STARTLINE (58)

    /** eds.e:1193		put1(DB_MAJOR) -- major version*/
    // SubProg db_create pc: 314 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 318 op: PUTS (44)
    EPuts(_44current_db_16085, 4); // DJP 
    // SubProg db_create pc: 321 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 323 op: ELSE (23)
    goto LC; // [323] 326
    // SubProg db_create pc: 325 op: NOP1 (159)
LC: // addr: 326 pc: 325 sub: 17106 op: 159
    // SubProg db_create pc: 326 op: STARTLINE (58)

    /** eds.e:1194		put1(DB_MINOR) -- minor version*/
    // SubProg db_create pc: 328 op: STARTLINE (58)

    /** eds.e:433		puts(current_db, x)*/
    // SubProg db_create pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 332 op: PUTS (44)
    EPuts(_44current_db_16085, 0); // DJP 
    // SubProg db_create pc: 335 op: STARTLINE (58)

    /** eds.e:434	end procedure*/
    // SubProg db_create pc: 337 op: ELSE (23)
    goto LD; // [337] 340
    // SubProg db_create pc: 339 op: NOP1 (159)
LD: // addr: 340 pc: 339 sub: 17106 op: 159
    // SubProg db_create pc: 340 op: STARTLINE (58)

    /** eds.e:1196		put4(19)  -- pointer to tables*/
    // SubProg db_create pc: 342 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 346 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)19;
    // SubProg db_create pc: 349 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 355 op: PEEK (127)
    DeRefi(_put4_1__tmp_at342_17162);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at342_17162); // DJP 
    // SubProg db_create pc: 361 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 363 op: ELSE (23)
    goto LE; // [363] 366
    // SubProg db_create pc: 365 op: NOP1 (159)
LE: // addr: 366 pc: 365 sub: 17106 op: 159
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create pc: 377 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 383 op: PEEK (127)
    DeRefi(_put4_1__tmp_at370_17164);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at370_17164); // DJP 
    // SubProg db_create pc: 389 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 391 op: ELSE (23)
    goto LF; // [391] 394
    // SubProg db_create pc: 393 op: NOP1 (159)
LF: // addr: 394 pc: 393 sub: 17106 op: 159
    // SubProg db_create pc: 394 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 370

// block var put4_1__tmp_at370_17164
    DeRefi(_put4_1__tmp_at370_17164);
    _put4_1__tmp_at370_17164 = NOVALUE;
    // SubProg db_create pc: 396 op: STARTLINE (58)

    /** eds.e:1200		put4(23 + init_tables * SIZEOF_TABLE_HEADER + 4)   -- pointer to free list*/
    // SubProg db_create pc: 398 op: MULTIPLY (13)
    if (_init_tables_17110 == (short)_init_tables_17110){
        _9492 = _init_tables_17110 * 16;
    }
    else{
        _9492 = NewDouble(_init_tables_17110 * (eudouble)16);
    }
    // SubProg db_create pc: 402 op: PLUS (11)
    if (IS_ATOM_INT(_9492)) {
        _9493 = 23 + _9492;
        if ((object)((uintptr_t)_9493 + (uintptr_t)HIGH_BITS) >= 0){
            _9493 = NewDouble((eudouble)_9493);
        }
    }
    else {
        _9493 = NewDouble((eudouble)23 + DBL_PTR(_9492)->dbl);
    }
    DeRef(_9492);
    _9492 = NOVALUE;
    // SubProg db_create pc: 406 op: PLUS (11)
    if (IS_ATOM_INT(_9493)) {
        _9494 = _9493 + 4;
        if ((object)((uintptr_t)_9494 + (uintptr_t)HIGH_BITS) >= 0){
            _9494 = NewDouble((eudouble)_9494);
        }
    }
    else {
        _9494 = NewDouble(DBL_PTR(_9493)->dbl + (eudouble)4);
    }
    DeRef(_9493);
    _9493 = NOVALUE;
    // SubProg db_create pc: 410 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_410_17169);
    _x_inlined_put4_at_410_17169 = _9494;
    _9494 = NOVALUE;
    // SubProg db_create pc: 413 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 417 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at413_17170); // DJP 
    // SubProg db_create pc: 432 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 434 op: ELSE (23)
    goto L10; // [434] 437
    // SubProg db_create pc: 436 op: NOP1 (159)
L10: // addr: 437 pc: 436 sub: 17106 op: 159
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
    if (_init_tables_17110 == (short)_init_tables_17110){
        _9495 = _init_tables_17110 * 16;
    }
    else{
        _9495 = NewDouble(_init_tables_17110 * (eudouble)16);
    }
    // SubProg db_create pc: 445 op: PLUS (11)
    if (IS_ATOM_INT(_9495)) {
        _9496 = 8 + _9495;
        if ((object)((uintptr_t)_9496 + (uintptr_t)HIGH_BITS) >= 0){
            _9496 = NewDouble((eudouble)_9496);
        }
    }
    else {
        _9496 = NewDouble((eudouble)8 + DBL_PTR(_9495)->dbl);
    }
    DeRef(_9495);
    _9495 = NOVALUE;
    // SubProg db_create pc: 449 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_449_17174);
    _x_inlined_put4_at_449_17174 = _9496;
    _9496 = NOVALUE;
    // SubProg db_create pc: 452 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 456 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at452_17175); // DJP 
    // SubProg db_create pc: 471 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 473 op: ELSE (23)
    goto L11; // [473] 476
    // SubProg db_create pc: 475 op: NOP1 (159)
L11: // addr: 476 pc: 475 sub: 17106 op: 159
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create pc: 487 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create pc: 489 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 491 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 493 op: PEEK (127)
    DeRefi(_put4_1__tmp_at480_17177);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at480_17177); // DJP 
    // SubProg db_create pc: 499 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 501 op: ELSE (23)
    goto L12; // [501] 504
    // SubProg db_create pc: 503 op: NOP1 (159)
L12: // addr: 504 pc: 503 sub: 17106 op: 159
    // SubProg db_create pc: 504 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-put4 from db_create @ 480

// block var put4_1__tmp_at480_17177
    DeRefi(_put4_1__tmp_at480_17177);
    _put4_1__tmp_at480_17177 = NOVALUE;
    // SubProg db_create pc: 506 op: STARTLINE (58)

    /** eds.e:1206		putn(repeat(0, init_tables * SIZEOF_TABLE_HEADER))*/
    // SubProg db_create pc: 508 op: MULTIPLY (13)
    _9497 = _init_tables_17110 * 16;
    // SubProg db_create pc: 512 op: REPEAT (32)
    _9498 = Repeat(0, _9497);
    _9497 = NOVALUE;
    // SubProg db_create pc: 516 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_516_17181);
    _s_inlined_putn_at_516_17181 = _9498;
    _9498 = NOVALUE;
    // SubProg db_create pc: 519 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 521 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create pc: 523 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 525 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_516_17181); // DJP 
    // SubProg db_create pc: 528 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create pc: 530 op: ELSE (23)
    goto L13; // [530] 533
    // SubProg db_create pc: 532 op: NOP1 (159)
L13: // addr: 533 pc: 532 sub: 17106 op: 159
    // SubProg db_create pc: 533 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create @ 516

// block var s_inlined_putn_at_516_17181
    DeRefi(_s_inlined_putn_at_516_17181);
    _s_inlined_putn_at_516_17181 = NOVALUE;
    // SubProg db_create pc: 535 op: STARTLINE (58)

    /** eds.e:1208		put4(4+init_free*8)   -- allocated size*/
    // SubProg db_create pc: 537 op: MULTIPLY (13)
    if (_init_free_17111 == (short)_init_free_17111){
        _9499 = _init_free_17111 * 8;
    }
    else{
        _9499 = NewDouble(_init_free_17111 * (eudouble)8);
    }
    // SubProg db_create pc: 541 op: PLUS (11)
    if (IS_ATOM_INT(_9499)) {
        _9500 = 4 + _9499;
        if ((object)((uintptr_t)_9500 + (uintptr_t)HIGH_BITS) >= 0){
            _9500 = NewDouble((eudouble)_9500);
        }
    }
    else {
        _9500 = NewDouble((eudouble)4 + DBL_PTR(_9499)->dbl);
    }
    DeRef(_9499);
    _9499 = NOVALUE;
    // SubProg db_create pc: 545 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_545_17185);
    _x_inlined_put4_at_545_17185 = _9500;
    _9500 = NOVALUE;
    // SubProg db_create pc: 548 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create pc: 550 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 552 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at548_17186); // DJP 
    // SubProg db_create pc: 567 op: STARTLINE (58)

    /** eds.e:444	end procedure*/
    // SubProg db_create pc: 569 op: ELSE (23)
    goto L14; // [569] 572
    // SubProg db_create pc: 571 op: NOP1 (159)
L14: // addr: 572 pc: 571 sub: 17106 op: 159
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
    _9501 = _init_free_17111 * 8;
    // SubProg db_create pc: 580 op: REPEAT (32)
    _9502 = Repeat(0, _9501);
    _9501 = NOVALUE;
    // SubProg db_create pc: 584 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_584_17190);
    _s_inlined_putn_at_584_17190 = _9502;
    _9502 = NOVALUE;
    // SubProg db_create pc: 587 op: SEQUENCE_CHECK (97)
    // SubProg db_create pc: 589 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create pc: 591 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create pc: 593 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_584_17190); // DJP 
    // SubProg db_create pc: 596 op: STARTLINE (58)

    /** eds.e:449	end procedure*/
    // SubProg db_create pc: 598 op: ELSE (23)
    goto L15; // [598] 601
    // SubProg db_create pc: 600 op: NOP1 (159)
L15: // addr: 601 pc: 600 sub: 17106 op: 159
    // SubProg db_create pc: 601 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-putn from db_create @ 584

// block var s_inlined_putn_at_584_17190
    DeRefi(_s_inlined_putn_at_584_17190);
    _s_inlined_putn_at_584_17190 = NOVALUE;
    // SubProg db_create pc: 603 op: STARTLINE (58)

    /** eds.e:1210		return DB_OK*/
    // SubProg db_create pc: 605 op: RETURNF (28)

// Exiting block BLOCK: db_create

// block var path_17108
    DeRefDS(_path_17108);

// block var lock_method_17109

// block var init_tables_17110

// block var init_free_17111

// block var db_17112
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
// skipping _9525  name type: 0
// skipping _9524  name type: 0
// skipping _9523  name type: 0
// skipping _9522  name type: 0
// skipping _9521  name type: 0
// skipping _9520  name type: 0
// skipping _9519  name type: 0
// skipping _9518  name type: 0
// skipping _9517  name type: 0
// skipping _9516  name type: 0
// skipping _9515  name type: 0
// skipping _9514  name type: 0
    object _9513 = NOVALUE; // 17210 9513
// skipping _9512  name type: 0
    object _9511 = NOVALUE; // 17208 9511
// skipping _9510  name type: 0
    object _9509 = NOVALUE; // 17205 9509
// skipping _9508  name type: 0
    object _9507 = NOVALUE; // 17202 9507
    object _9506 = NOVALUE; // 17201 9506
// skipping _9505  name type: 0
    object _9504 = NOVALUE; // 17199 9504
// skipping _9503  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_open pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_open pc: 5 op: STARTLINE (58)

    /** eds.e:1273		db = find(path, Known_Aliases)*/
    // SubProg db_open pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 9 op: FIND_FROM (176)
    _db_17195 = find_from(_path_17193, _44Known_Aliases_16106, 1);
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
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9504 = (object)*(((s1_ptr)_2)->base + _db_17195);
    // SubProg db_open pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17193);
    _2 = (object)SEQ_PTR(_9504);
    _path_17193 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17193);
    _9504 = NOVALUE;
    // SubProg db_open pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 33 op: STARTLINE (58)

    /** eds.e:1277			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    // SubProg db_open pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9506 = (object)*(((s1_ptr)_2)->base + _db_17195);
    // SubProg db_open pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9506);
    _9507 = (object)*(((s1_ptr)_2)->base + 2);
    _9506 = NOVALUE;
    // SubProg db_open pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9507);
    _lock_method_17194 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17194)){
        _lock_method_17194 = (object)DBL_PTR(_lock_method_17194)->dbl;
    }
    _9507 = NOVALUE;
    // SubProg db_open pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_open pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 17191 op: 159
    // SubProg db_open pc: 54 op: STARTLINE (58)

    /** eds.e:1279			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_open pc: 56 op: PROC (27)
    RefDS(_path_17193);
    RefDS(_9456);
    _9509 = _18defaultext(_path_17193, _9456);
    // SubProg db_open pc: 61 op: PROC (27)
    _0 = _path_17193;
    _path_17193 = _18canonical_path(_9509, 0, 0);
    DeRefDS(_0);
    _9509 = NOVALUE;
    // SubProg db_open pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 17191 op: 159
    // SubProg db_open pc: 70 op: STARTLINE (58)

    /** eds.e:1282		if lock_method = DB_LOCK_NO or*/
    // SubProg db_open pc: 72 op: EQUALS (3)
    _9511 = (_lock_method_17194 == 0);
    // SubProg db_open pc: 76 op: SC1_OR_IF (147)
    if (_9511 != 0) {
        goto L3; // [76] 89
    }
    // SubProg db_open pc: 80 op: EQUALS (3)
    _9513 = (_lock_method_17194 == 2);
    // SubProg db_open pc: 84 op: NOP1 (159)
    // SubProg db_open pc: 85 op: IF (20)
    if (_9513 == 0)
    {
        DeRef(_9513);
        _9513 = NOVALUE;
        goto L4; // [85] 99
    }
    else{
        DeRef(_9513);
        _9513 = NOVALUE;
    }
    // SubProg db_open pc: 88 op: NOP1 (159)
L3: // addr: 89 pc: 88 sub: 17191 op: 159
    // SubProg db_open pc: 89 op: STARTLINE (58)

    /** eds.e:1285			db = open(path, "ub")*/
    // SubProg db_open pc: 91 op: OPEN (37)
    _db_17195 = EOpen(_path_17193, _9483, 0);
    // SubProg db_open pc: 96 op: ELSE (23)
    goto L5; // [96] 107
    // SubProg db_open pc: 98 op: NOP1 (159)
L4: // addr: 99 pc: 98 sub: 17191 op: 159
    // SubProg db_open pc: 99 op: STARTLINE (58)

    /** eds.e:1288			db = open(path, "rb")*/
    // SubProg db_open pc: 101 op: OPEN (37)
    _db_17195 = EOpen(_path_17193, _9477, 0);
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
    DeRef(_9511);
    _9511 = NOVALUE;
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
    DeRef(_9511);
    _9511 = NOVALUE;
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
    DeRef(_9511);
    _9511 = NOVALUE;
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
    DeRef(_9511);
    _9511 = NOVALUE;
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
    _44current_db_16085 = _db_17195;
    // SubProg db_open pc: 232 op: STARTLINE (58)

    /** eds.e:1319		current_table_pos = -1*/
    // SubProg db_open pc: 234 op: ASSIGN (18)
    DeRef(_44current_table_pos_16086);
    _44current_table_pos_16086 = -1;
    // SubProg db_open pc: 237 op: STARTLINE (58)

    /** eds.e:1320		current_table_name = ""*/
    // SubProg db_open pc: 239 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16087);
    _44current_table_name_16087 = _5;
    // SubProg db_open pc: 242 op: SEQUENCE_CHECK (97)
    // SubProg db_open pc: 244 op: STARTLINE (58)

    /** eds.e:1321		current_lock = lock_method*/
    // SubProg db_open pc: 246 op: ASSIGN_I (113)
    _44current_lock_16091 = _lock_method_17194;
    // SubProg db_open pc: 249 op: STARTLINE (58)

    /** eds.e:1322		db_names = append(db_names, path)*/
    // SubProg db_open pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 253 op: APPEND (35)
    RefDS(_path_17193);
    Append(&_44db_names_16088, _44db_names_16088, _path_17193);
    // SubProg db_open pc: 257 op: STARTLINE (58)

    /** eds.e:1323		db_lock_methods = append(db_lock_methods, lock_method)*/
    // SubProg db_open pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 261 op: APPEND (35)
    Append(&_44db_lock_methods_16090, _44db_lock_methods_16090, _lock_method_17194);
    // SubProg db_open pc: 265 op: STARTLINE (58)

    /** eds.e:1324		db_file_nums = append(db_file_nums, db)*/
    // SubProg db_open pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_open pc: 269 op: APPEND (35)
    Append(&_44db_file_nums_16089, _44db_file_nums_16089, _db_17195);
    // SubProg db_open pc: 273 op: STARTLINE (58)

    /** eds.e:1325		return DB_OK*/
    // SubProg db_open pc: 275 op: RETURNF (28)

// Exiting block BLOCK: db_open

// block var path_17193
    DeRefDS(_path_17193);

// block var lock_method_17194

// block var db_17195

// block var magic_17196
    DeRef(_9511);
    _9511 = NOVALUE;
    return 0;
    // SubProg db_open pc: 279 op: BADRETURNF (43)
    ;
}


object _44db_select(object _path_17238, object _lock_method_17239)
{
    object _index_17240 = NOVALUE;
// skipping _9541  name type: 0
// skipping _9540  name type: 0
// skipping _9539  name type: 0
// skipping _9538  name type: 0
// skipping _9537  name type: 0
// skipping _9536  name type: 0
// skipping _9535  name type: 0
// skipping _9534  name type: 0
// skipping _9533  name type: 0
    object _9532 = NOVALUE; // 17249 9532
// skipping _9531  name type: 0
    object _9530 = NOVALUE; // 17246 9530
    object _9529 = NOVALUE; // 17245 9529
// skipping _9528  name type: 0
    object _9527 = NOVALUE; // 17243 9527
// skipping _9526  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_select pc: 5 op: STARTLINE (58)

    /** eds.e:1372		index = find(path, Known_Aliases)*/
    // SubProg db_select pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 9 op: FIND_FROM (176)
    _index_17240 = find_from(_path_17238, _44Known_Aliases_16106, 1);
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
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9527 = (object)*(((s1_ptr)_2)->base + _index_17240);
    // SubProg db_select pc: 27 op: RHS_SUBS_CHECK (92)
    DeRefDS(_path_17238);
    _2 = (object)SEQ_PTR(_9527);
    _path_17238 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_17238);
    _9527 = NOVALUE;
    // SubProg db_select pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 33 op: STARTLINE (58)

    /** eds.e:1376			lock_method = Alias_Details[index][2][CONNECT_LOCK]*/
    // SubProg db_select pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 37 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44Alias_Details_16107);
    _9529 = (object)*(((s1_ptr)_2)->base + _index_17240);
    // SubProg db_select pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9529);
    _9530 = (object)*(((s1_ptr)_2)->base + 2);
    _9529 = NOVALUE;
    // SubProg db_select pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_9530);
    _lock_method_17239 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_17239)){
        _lock_method_17239 = (object)DBL_PTR(_lock_method_17239)->dbl;
    }
    _9530 = NOVALUE;
    // SubProg db_select pc: 51 op: ELSE (23)
    goto L2; // [51] 70
    // SubProg db_select pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 17236 op: 159
    // SubProg db_select pc: 54 op: STARTLINE (58)

    /** eds.e:1378			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    // SubProg db_select pc: 56 op: PROC (27)
    RefDS(_path_17238);
    RefDS(_9456);
    _9532 = _18defaultext(_path_17238, _9456);
    // SubProg db_select pc: 61 op: PROC (27)
    _0 = _path_17238;
    _path_17238 = _18canonical_path(_9532, 0, 0);
    DeRefDS(_0);
    _9532 = NOVALUE;
    // SubProg db_select pc: 67 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 69 op: NOP1 (159)
L2: // addr: 70 pc: 69 sub: 17236 op: 159
    // SubProg db_select pc: 70 op: STARTLINE (58)

    /** eds.e:1381		index = eu:find(path, db_names)*/
    // SubProg db_select pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 74 op: FIND_FROM (176)
    _index_17240 = find_from(_path_17238, _44db_names_16088, 1);
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
    _index_17240 = find_from(_path_17238, _44db_names_16088, 1);
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
    _2 = (object)SEQ_PTR(_44db_file_nums_16089);
    _44current_db_16085 = (object)*(((s1_ptr)_2)->base + _index_17240);
    if (!IS_ATOM_INT(_44current_db_16085))
    _44current_db_16085 = (object)DBL_PTR(_44current_db_16085)->dbl;
    // SubProg db_select pc: 142 op: STARTLINE (58)

    /** eds.e:1394		current_lock = db_lock_methods[index]*/
    // SubProg db_select pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select pc: 146 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_44db_lock_methods_16090);
    _44current_lock_16091 = (object)*(((s1_ptr)_2)->base + _index_17240);
    if (!IS_ATOM_INT(_44current_lock_16091))
    _44current_lock_16091 = (object)DBL_PTR(_44current_lock_16091)->dbl;
    // SubProg db_select pc: 150 op: STARTLINE (58)

    /** eds.e:1395		current_table_pos = -1*/
    // SubProg db_select pc: 152 op: ASSIGN (18)
    DeRef(_44current_table_pos_16086);
    _44current_table_pos_16086 = -1;
    // SubProg db_select pc: 155 op: STARTLINE (58)

    /** eds.e:1396		current_table_name = ""*/
    // SubProg db_select pc: 157 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16087);
    _44current_table_name_16087 = _5;
    // SubProg db_select pc: 160 op: SEQUENCE_CHECK (97)
    // SubProg db_select pc: 162 op: STARTLINE (58)

    /** eds.e:1397		key_pointers = {}*/
    // SubProg db_select pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44key_pointers_16092);
    _44key_pointers_16092 = _5;
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
// skipping _9552  name type: 0
// skipping _9551  name type: 0
// skipping _9550  name type: 0
    object _9549 = NOVALUE; // 17279 9549
    object _9548 = NOVALUE; // 17278 9548
    object _9547 = NOVALUE; // 17276 9547
// skipping _9546  name type: 0
// skipping _9545  name type: 0
// skipping _9544  name type: 0
// skipping _9543  name type: 0
// skipping _9542  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_close pc: 1 op: STARTLINE (58)

    /** eds.e:1413		if current_db = -1 then*/
    // SubProg db_close pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 5 op: EQUALS_IFW_I (121)
    if (_44current_db_16085 != -1)
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
    if (_44current_lock_16091 == 0)
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    EClose(_44current_db_16085);
    // SubProg db_close pc: 49 op: STARTLINE (58)

    /** eds.e:1422		index = eu:find(current_db, db_file_nums)*/
    // SubProg db_close pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 55 op: FIND_FROM (176)
    _index_17264 = find_from(_44current_db_16085, _44db_file_nums_16089, 1);
    // SubProg db_close pc: 60 op: STARTLINE (58)

    /** eds.e:1423		db_names = remove(db_names, index)*/
    // SubProg db_close pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 64 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_names_16088);
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
                Head( SEQ_PTR(_44db_names_16088), start, &_44db_names_16088 );
            }
            else Tail(SEQ_PTR(_44db_names_16088), stop+1, &_44db_names_16088);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_names_16088), start, &_44db_names_16088);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_names_16088 = Remove_elements(start, stop, (SEQ_PTR(_44db_names_16088)->ref == 1));
        }
    }
    // SubProg db_close pc: 69 op: STARTLINE (58)

    /** eds.e:1424		db_file_nums = remove(db_file_nums, index)*/
    // SubProg db_close pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 73 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_file_nums_16089);
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
                Head( SEQ_PTR(_44db_file_nums_16089), start, &_44db_file_nums_16089 );
            }
            else Tail(SEQ_PTR(_44db_file_nums_16089), stop+1, &_44db_file_nums_16089);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_file_nums_16089), start, &_44db_file_nums_16089);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_file_nums_16089 = Remove_elements(start, stop, (SEQ_PTR(_44db_file_nums_16089)->ref == 1));
        }
    }
    // SubProg db_close pc: 78 op: STARTLINE (58)

    /** eds.e:1425		db_lock_methods = remove(db_lock_methods, index)*/
    // SubProg db_close pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 82 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_44db_lock_methods_16090);
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
                Head( SEQ_PTR(_44db_lock_methods_16090), start, &_44db_lock_methods_16090 );
            }
            else Tail(SEQ_PTR(_44db_lock_methods_16090), stop+1, &_44db_lock_methods_16090);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_44db_lock_methods_16090), start, &_44db_lock_methods_16090);
        }
        else {
            assign_slice_seq = &assign_space;
            _44db_lock_methods_16090 = Remove_elements(start, stop, (SEQ_PTR(_44db_lock_methods_16090)->ref == 1));
        }
    }
    // SubProg db_close pc: 87 op: STARTLINE (58)

    /** eds.e:1427		for i = length(cache_index) to 1 by -1 do*/
    // SubProg db_close pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_close pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_44cache_index_16094)){
            _9547 = SEQ_PTR(_44cache_index_16094)->length;
    }
    else {
        _9547 = 1;
    }
    // SubProg db_close pc: 94 op: FOR_I (125)
    {
        object _i_17275;
        _i_17275 = _9547;
L4: // addr: 101 pc: 94 sub: 17262 op: 125
        if (_i_17275 < 1){
            goto L5; // [94] 145
        }
        // SubProg db_close pc: 101 op: STARTLINE (58)

        /** eds.e:1428			if cache_index[i][1] = current_db then*/
        // SubProg db_close pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 105 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_44cache_index_16094);
        _9548 = (object)*(((s1_ptr)_2)->base + _i_17275);
        // SubProg db_close pc: 109 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_9548);
        _9549 = (object)*(((s1_ptr)_2)->base + 1);
        _9548 = NOVALUE;
        // SubProg db_close pc: 113 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 115 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _9549, _44current_db_16085)){
            _9549 = NOVALUE;
            goto L6; // [115] 138
        }
        _9549 = NOVALUE;
        // SubProg db_close pc: 119 op: STARTLINE (58)

        /** eds.e:1429				cache_index = remove(cache_index, i)*/
        // SubProg db_close pc: 121 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 123 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_44cache_index_16094);
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
                    Head( SEQ_PTR(_44cache_index_16094), start, &_44cache_index_16094 );
                }
                else Tail(SEQ_PTR(_44cache_index_16094), stop+1, &_44cache_index_16094);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_44cache_index_16094), start, &_44cache_index_16094);
            }
            else {
                assign_slice_seq = &assign_space;
                _44cache_index_16094 = Remove_elements(start, stop, (SEQ_PTR(_44cache_index_16094)->ref == 1));
            }
        }
        // SubProg db_close pc: 128 op: STARTLINE (58)

        /** eds.e:1430				key_cache = remove(key_cache, i)*/
        // SubProg db_close pc: 130 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_close pc: 132 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_44key_cache_16093);
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
                    Head( SEQ_PTR(_44key_cache_16093), start, &_44key_cache_16093 );
                }
                else Tail(SEQ_PTR(_44key_cache_16093), stop+1, &_44key_cache_16093);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_44key_cache_16093), start, &_44key_cache_16093);
            }
            else {
                assign_slice_seq = &assign_space;
                _44key_cache_16093 = Remove_elements(start, stop, (SEQ_PTR(_44key_cache_16093)->ref == 1));
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
    DeRef(_44current_table_pos_16086);
    _44current_table_pos_16086 = -1;
    // SubProg db_close pc: 150 op: STARTLINE (58)

    /** eds.e:1434		current_table_name = ""	*/
    // SubProg db_close pc: 152 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44current_table_name_16087);
    _44current_table_name_16087 = _5;
    // SubProg db_close pc: 155 op: SEQUENCE_CHECK (97)
    // SubProg db_close pc: 157 op: STARTLINE (58)

    /** eds.e:1435		current_db = -1*/
    // SubProg db_close pc: 159 op: ASSIGN_I (113)
    _44current_db_16085 = -1;
    // SubProg db_close pc: 162 op: STARTLINE (58)

    /** eds.e:1436		key_pointers = {}*/
    // SubProg db_close pc: 164 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_44key_pointers_16092);
    _44key_pointers_16092 = _5;
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
// skipping _9562  name type: 0
// skipping _9561  name type: 0
    object _9560 = NOVALUE; // 17313 9560
// skipping _9559  name type: 0
    object _9558 = NOVALUE; // 17304 9558
// skipping _9557  name type: 0
// skipping _9556  name type: 0
// skipping _9555  name type: 0
// skipping _9554  name type: 0
    object _9553 = NOVALUE; // 17294 9553
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_SEQUENCE(_44vLastErrors_16109)){
            _9553 = SEQ_PTR(_44vLastErrors_16109)->length;
    }
    else {
        _9553 = 1;
    }
    // SubProg table_find pc: 27 op: GREATER_IFW_I (124)
    if (_9553 <= 0)
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    DeRef(_9558);
    _9558 = _nt_17287;
    // SubProg table_find pc: 74 op: FOR (21)
    {
        object _i_17303;
        _i_17303 = 1;
L2: // addr: 81 pc: 74 sub: 17283 op: 21
        if (binary_op_a(GREATER, _i_17303, _9558)){
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
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9560 = _44equal_string(_name_17285);
        // SubProg table_find pc: 126 op: GREATER_IFW (107)
        if (binary_op_a(LESSEQ, _9560, 0)){
            DeRef(_9560);
            _9560 = NOVALUE;
            goto L4; // [126] 137
        }
        DeRef(_9560);
        _9560 = NOVALUE;
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
// skipping _9583  name type: 0
// skipping _9582  name type: 0
    object _9581 = NOVALUE; // 17363 9581
    object _9580 = NOVALUE; // 17362 9580
// skipping _9579  name type: 0
// skipping _9578  name type: 0
    object _9577 = NOVALUE; // 17351 9577
// skipping _9576  name type: 0
// skipping _9575  name type: 0
// skipping _9574  name type: 0
// skipping _9573  name type: 0
    object _9572 = NOVALUE; // 17340 9572
// skipping _9571  name type: 0
// skipping _9570  name type: 0
// skipping _9569  name type: 0
// skipping _9568  name type: 0
    object _9567 = NOVALUE; // 17333 9567
// skipping _9566  name type: 0
// skipping _9565  name type: 0
// skipping _9564  name type: 0
    object _9563 = NOVALUE; // 17327 9563
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_select_table pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_select_table pc: 3 op: STARTLINE (58)

    /** eds.e:1501		if equal(current_table_name, name) then*/
    // SubProg db_select_table pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 7 op: EQUAL (153)
    if (_44current_table_name_16087 == _name_17318)
    _9563 = 1;
    else if (IS_ATOM_INT(_44current_table_name_16087) && IS_ATOM_INT(_name_17318))
    _9563 = 0;
    else
    _9563 = (compare(_44current_table_name_16087, _name_17318) == 0);
    // SubProg db_select_table pc: 11 op: IF (20)
    if (_9563 == 0)
    {
        _9563 = NOVALUE;
        goto L1; // [11] 21
    }
    else{
        _9563 = NOVALUE;
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
    DeRef(_44current_table_pos_16086);
    _44current_table_pos_16086 = _table_17319;
    // SubProg db_select_table pc: 49 op: STARTLINE (58)

    /** eds.e:1512		current_table_name = name*/
    // SubProg db_select_table pc: 51 op: ASSIGN (18)
    RefDS(_name_17318);
    DeRef(_44current_table_name_16087);
    _44current_table_name_16087 = _name_17318;
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
    Ref(_44current_table_pos_16086);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
    ((intptr_t *)_2)[2] = _44current_table_pos_16086;
    _9567 = MAKE_SEQ(_1);
    // SubProg db_select_table pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 81 op: FIND_FROM (176)
    _k_17325 = find_from(_9567, _44cache_index_16094, 1);
    DeRefDS(_9567);
    _9567 = NOVALUE;
    // SubProg db_select_table pc: 86 op: STARTLINE (58)

    /** eds.e:1517			if k != 0 then*/
    // SubProg db_select_table pc: 88 op: NOTEQ_IFW_I (122)
    if (_k_17325 == 0)
    goto L3; // [88] 103
    // SubProg db_select_table pc: 92 op: STARTLINE (58)

    /** eds.e:1518				key_pointers = key_cache[k]*/
    // SubProg db_select_table pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_select_table pc: 96 op: RHS_SUBS (25)
    DeRef(_44key_pointers_16092);
    _2 = (object)SEQ_PTR(_44key_cache_16093);
    _44key_pointers_16092 = (object)*(((s1_ptr)_2)->base + _k_17325);
    Ref(_44key_pointers_16092);
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
        _9572 = _table_17319 + 4;
        if ((object)((uintptr_t)_9572 + (uintptr_t)HIGH_BITS) >= 0){
            _9572 = NewDouble((eudouble)_9572);
        }
    }
    else {
        _9572 = NewDouble(DBL_PTR(_table_17319)->dbl + (eudouble)4);
    }
    // SubProg db_select_table pc: 118 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_117_17342);
    _pos_inlined_seek_at_117_17342 = _9572;
    _9572 = NOVALUE;
    // SubProg db_select_table pc: 121 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_select_table pc: 123 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_117_17342);
    DeRef(_seek_1__tmp_at120_17344);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    DeRef(_44key_pointers_16092);
    _44key_pointers_16092 = Repeat(0, _nkeys_17320);
    // SubProg db_select_table pc: 157 op: STARTLINE (58)

    /** eds.e:1528			k = 1*/
    // SubProg db_select_table pc: 159 op: ASSIGN_I (113)
    _k_17325 = 1;
    // SubProg db_select_table pc: 162 op: STARTLINE (58)

    /** eds.e:1529			for b = 0 to blocks-1 do*/
    // SubProg db_select_table pc: 164 op: MINUS (10)
    _9577 = _blocks_17324 - 1;
    if ((object)((uintptr_t)_9577 +(uintptr_t) HIGH_BITS) >= 0){
        _9577 = NewDouble((eudouble)_9577);
    }
    // SubProg db_select_table pc: 168 op: FOR (21)
    {
        object _b_17350;
        _b_17350 = 0;
L5: // addr: 175 pc: 168 sub: 17316 op: 21
        if (binary_op_a(GREATER, _b_17350, _9577)){
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
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
        DeRef(_9580);
        _9580 = _block_size_17323;
        // SubProg db_select_table pc: 224 op: FOR (21)
        {
            object _j_17361;
            _j_17361 = 1;
L7: // addr: 231 pc: 224 sub: 17316 op: 21
            if (binary_op_a(GREATER, _j_17361, _9580)){
                goto L8; // [224] 255
            }
            // SubProg db_select_table pc: 231 op: STARTLINE (58)

            /** eds.e:1535					key_pointers[k] = get4()*/
            // SubProg db_select_table pc: 233 op: GLOBAL_INIT_CHECK (109)
            // SubProg db_select_table pc: 235 op: PROC (27)
            _9581 = _44get4();
            // SubProg db_select_table pc: 238 op: ASSIGN_SUBS (16)
            _2 = (object)SEQ_PTR(_44key_pointers_16092);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _44key_pointers_16092 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _k_17325);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9581;
            if( _1 != _9581 ){
                DeRef(_1);
            }
            _9581 = NOVALUE;
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
    DeRef(_9577);
    _9577 = NOVALUE;
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
    object _9630 = NOVALUE; // 17488 9630
    object _9629 = NOVALUE; // 17474 9629
    object _9628 = NOVALUE; // 17473 9628
    object _9627 = NOVALUE; // 17472 9627
    object _9626 = NOVALUE; // 17471 9626
    object _9625 = NOVALUE; // 17468 9625
// skipping _9624  name type: 0
    object _9623 = NOVALUE; // 17466 9623
    object _9622 = NOVALUE; // 17465 9622
    object _9621 = NOVALUE; // 17462 9621
    object _9620 = NOVALUE; // 17461 9620
    object _9619 = NOVALUE; // 17460 9619
// skipping _9618  name type: 0
    object _9617 = NOVALUE; // 17454 9617
    object _9616 = NOVALUE; // 17451 9616
    object _9615 = NOVALUE; // 17450 9615
// skipping _9614  name type: 0
    object _9613 = NOVALUE; // 17448 9613
    object _9612 = NOVALUE; // 17434 9612
    object _9611 = NOVALUE; // 17433 9611
    object _9610 = NOVALUE; // 17432 9610
    object _9609 = NOVALUE; // 17431 9609
    object _9608 = NOVALUE; // 17430 9608
    object _9607 = NOVALUE; // 17424 9607
// skipping _9606  name type: 0
    object _9605 = NOVALUE; // 17422 9605
    object _9604 = NOVALUE; // 17421 9604
    object _9603 = NOVALUE; // 17416 9603
// skipping _9602  name type: 0
// skipping _9601  name type: 0
    object _9600 = NOVALUE; // 17411 9600
    object _9599 = NOVALUE; // 17410 9599
// skipping _9598  name type: 0
    object _9597 = NOVALUE; // 17408 9597
    object _9596 = NOVALUE; // 17407 9596
// skipping _9595  name type: 0
    object _9594 = NOVALUE; // 17404 9594
// skipping _9593  name type: 0
    object _9592 = NOVALUE; // 17398 9592
// skipping _9591  name type: 0
// skipping _9590  name type: 0
    object _9589 = NOVALUE; // 17392 9589
// skipping _9588  name type: 0
// skipping _9587  name type: 0
// skipping _9586  name type: 0
// skipping _9585  name type: 0
    object _9584 = NOVALUE; // 17385 9584
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_create_table pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 3 op: INTEGER_CHECK (96)
    // SubProg db_create_table pc: 5 op: STARTLINE (58)

    /** eds.e:1603		if not cstring(name) then*/
    // SubProg db_create_table pc: 7 op: PROC (27)
    RefDS(_name_17370);
    _9584 = _8cstring(_name_17370);
    // SubProg db_create_table pc: 11 op: NOT_IFW (108)
    if (IS_ATOM_INT(_9584)) {
        if (_9584 != 0){
            DeRef(_9584);
            _9584 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    else {
        if (DBL_PTR(_9584)->dbl != 0.0){
            DeRef(_9584);
            _9584 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    DeRef(_9584);
    _9584 = NOVALUE;
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
    _9589 = MAKE_SEQ(_1);
    // SubProg db_create_table pc: 58 op: PROC (27)
    _init_index_17382 = _9min(_9589);
    _9589 = NOVALUE;
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9592 = _tables_17374 - 4;
        if ((object)((uintptr_t)_9592 +(uintptr_t) HIGH_BITS) >= 0){
            _9592 = NewDouble((eudouble)_9592);
        }
    }
    else {
        _9592 = NewDouble(DBL_PTR(_tables_17374)->dbl - (eudouble)4);
    }
    // SubProg db_create_table pc: 94 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_94_17400);
    _pos_inlined_seek_at_94_17400 = _9592;
    _9592 = NOVALUE;
    // SubProg db_create_table pc: 97 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 99 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_94_17400);
    DeRef(_seek_1__tmp_at97_17402);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9594 = _44get4();
    // SubProg db_create_table pc: 120 op: PLUS1 (93)
    DeRef(_nt_17373);
    if (IS_ATOM_INT(_9594)) {
        _nt_17373 = _9594 + 1;
        if (_nt_17373 > MAXINT){
            _nt_17373 = NewDouble((eudouble)_nt_17373);
        }
    }
    else
    _nt_17373 = binary_op(PLUS, 1, _9594);
    DeRef(_9594);
    _9594 = NOVALUE;
    // SubProg db_create_table pc: 124 op: STARTLINE (58)

    /** eds.e:1623		if nt*SIZEOF_TABLE_HEADER + 8 > size then*/
    // SubProg db_create_table pc: 126 op: MULTIPLY (13)
    if (IS_ATOM_INT(_nt_17373)) {
        if (_nt_17373 == (short)_nt_17373){
            _9596 = _nt_17373 * 16;
        }
        else{
            _9596 = NewDouble(_nt_17373 * (eudouble)16);
        }
    }
    else {
        _9596 = NewDouble(DBL_PTR(_nt_17373)->dbl * (eudouble)16);
    }
    // SubProg db_create_table pc: 130 op: PLUS (11)
    if (IS_ATOM_INT(_9596)) {
        _9597 = _9596 + 8;
        if ((object)((uintptr_t)_9597 + (uintptr_t)HIGH_BITS) >= 0){
            _9597 = NewDouble((eudouble)_9597);
        }
    }
    else {
        _9597 = NewDouble(DBL_PTR(_9596)->dbl + (eudouble)8);
    }
    DeRef(_9596);
    _9596 = NOVALUE;
    // SubProg db_create_table pc: 134 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9597, _size_17378)){
        DeRef(_9597);
        _9597 = NOVALUE;
        goto L4; // [134] 365
    }
    DeRef(_9597);
    _9597 = NOVALUE;
    // SubProg db_create_table pc: 138 op: STARTLINE (58)

    /** eds.e:1625			newsize = floor(size + size / 2)*/
    // SubProg db_create_table pc: 140 op: DIV2 (98)
    if (IS_ATOM_INT(_size_17378)) {
        if (_size_17378 & 1) {
            _9599 = NewDouble((_size_17378 >> 1) + 0.5);
        }
        else
        _9599 = _size_17378 >> 1;
    }
    else {
        _9599 = binary_op(DIVIDE, _size_17378, 2);
    }
    // SubProg db_create_table pc: 144 op: PLUS (11)
    if (IS_ATOM_INT(_size_17378) && IS_ATOM_INT(_9599)) {
        _9600 = _size_17378 + _9599;
        if ((object)((uintptr_t)_9600 + (uintptr_t)HIGH_BITS) >= 0){
            _9600 = NewDouble((eudouble)_9600);
        }
    }
    else {
        if (IS_ATOM_INT(_size_17378)) {
            _9600 = NewDouble((eudouble)_size_17378 + DBL_PTR(_9599)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9599)) {
                _9600 = NewDouble(DBL_PTR(_size_17378)->dbl + (eudouble)_9599);
            }
            else
            _9600 = NewDouble(DBL_PTR(_size_17378)->dbl + DBL_PTR(_9599)->dbl);
        }
    }
    DeRef(_9599);
    _9599 = NOVALUE;
    // SubProg db_create_table pc: 148 op: FLOOR (83)
    DeRef(_newsize_17379);
    if (IS_ATOM_INT(_9600))
    _newsize_17379 = e_floor(_9600);
    else
    _newsize_17379 = unary_op(FLOOR, _9600);
    DeRef(_9600);
    _9600 = NOVALUE;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at159_17415); // DJP 
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
        _9603 = _tables_17374 + 4;
        if ((object)((uintptr_t)_9603 + (uintptr_t)HIGH_BITS) >= 0){
            _9603 = NewDouble((eudouble)_9603);
        }
    }
    else {
        _9603 = NewDouble(DBL_PTR(_tables_17374)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 193 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_193_17418);
    _pos_inlined_seek_at_193_17418 = _9603;
    _9603 = NOVALUE;
    // SubProg db_create_table pc: 196 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 198 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_193_17418);
    DeRef(_seek_1__tmp_at196_17420);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9604 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9604 +(uintptr_t) HIGH_BITS) >= 0){
            _9604 = NewDouble((eudouble)_9604);
        }
    }
    else {
        _9604 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 217 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9604)) {
        if (_9604 == (short)_9604){
            _9605 = _9604 * 16;
        }
        else{
            _9605 = NewDouble(_9604 * (eudouble)16);
        }
    }
    else {
        _9605 = NewDouble(DBL_PTR(_9604)->dbl * (eudouble)16);
    }
    DeRef(_9604);
    _9604 = NOVALUE;
    // SubProg db_create_table pc: 221 op: PROC (27)
    _0 = _remaining_17381;
    _remaining_17381 = _14get_bytes(_44current_db_16085, _9605);
    DeRef(_0);
    _9605 = NOVALUE;
    // SubProg db_create_table pc: 226 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 228 op: STARTLINE (58)

    /** eds.e:1631			io:seek(current_db, newtables+4)*/
    // SubProg db_create_table pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 232 op: PLUS (11)
    if (IS_ATOM_INT(_newtables_17375)) {
        _9607 = _newtables_17375 + 4;
        if ((object)((uintptr_t)_9607 + (uintptr_t)HIGH_BITS) >= 0){
            _9607 = NewDouble((eudouble)_9607);
        }
    }
    else {
        _9607 = NewDouble(DBL_PTR(_newtables_17375)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 236 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_236_17426);
    _pos_inlined_seek_at_236_17426 = _9607;
    _9607 = NOVALUE;
    // SubProg db_create_table pc: 239 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 241 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_236_17426);
    DeRef(_seek_1__tmp_at239_17428);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    EPuts(_44current_db_16085, _remaining_17381); // DJP 
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
        _9608 = _newsize_17379 - 4;
        if ((object)((uintptr_t)_9608 +(uintptr_t) HIGH_BITS) >= 0){
            _9608 = NewDouble((eudouble)_9608);
        }
    }
    else {
        _9608 = NewDouble(DBL_PTR(_newsize_17379)->dbl - (eudouble)4);
    }
    // SubProg db_create_table pc: 272 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17373)) {
        _9609 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9609 +(uintptr_t) HIGH_BITS) >= 0){
            _9609 = NewDouble((eudouble)_9609);
        }
    }
    else {
        _9609 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 276 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9609)) {
        if (_9609 == (short)_9609){
            _9610 = _9609 * 16;
        }
        else{
            _9610 = NewDouble(_9609 * (eudouble)16);
        }
    }
    else {
        _9610 = NewDouble(DBL_PTR(_9609)->dbl * (eudouble)16);
    }
    DeRef(_9609);
    _9609 = NOVALUE;
    // SubProg db_create_table pc: 280 op: MINUS (10)
    if (IS_ATOM_INT(_9608) && IS_ATOM_INT(_9610)) {
        _9611 = _9608 - _9610;
    }
    else {
        if (IS_ATOM_INT(_9608)) {
            _9611 = NewDouble((eudouble)_9608 - DBL_PTR(_9610)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9610)) {
                _9611 = NewDouble(DBL_PTR(_9608)->dbl - (eudouble)_9610);
            }
            else
            _9611 = NewDouble(DBL_PTR(_9608)->dbl - DBL_PTR(_9610)->dbl);
        }
    }
    DeRef(_9608);
    _9608 = NOVALUE;
    DeRef(_9610);
    _9610 = NOVALUE;
    // SubProg db_create_table pc: 284 op: REPEAT (32)
    _9612 = Repeat(0, _9611);
    DeRef(_9611);
    _9611 = NOVALUE;
    // SubProg db_create_table pc: 288 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_288_17436);
    _s_inlined_putn_at_288_17436 = _9612;
    _9612 = NOVALUE;
    // SubProg db_create_table pc: 291 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 293 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 295 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 297 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_288_17436); // DJP 
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at331_17441); // DJP 
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at384_17447); // DJP 
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
        _9613 = _init_records_17371 * 4;
    }
    else{
        _9613 = NewDouble(_init_records_17371 * (eudouble)4);
    }
    // SubProg db_create_table pc: 417 op: PROC (27)
    _0 = _records_ptr_17377;
    _records_ptr_17377 = _44db_allocate(_9613);
    DeRef(_0);
    _9613 = NOVALUE;
    // SubProg db_create_table pc: 421 op: STARTLINE (58)

    /** eds.e:1646		putn(repeat(0, init_records * 4))*/
    // SubProg db_create_table pc: 423 op: MULTIPLY (13)
    _9615 = _init_records_17371 * 4;
    // SubProg db_create_table pc: 427 op: REPEAT (32)
    _9616 = Repeat(0, _9615);
    _9615 = NOVALUE;
    // SubProg db_create_table pc: 431 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_431_17453);
    _s_inlined_putn_at_431_17453 = _9616;
    _9616 = NOVALUE;
    // SubProg db_create_table pc: 434 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 436 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 440 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_431_17453); // DJP 
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
        _9617 = _init_index_17382 * 8;
    }
    else{
        _9617 = NewDouble(_init_index_17382 * (eudouble)8);
    }
    // SubProg db_create_table pc: 456 op: PROC (27)
    _0 = _index_ptr_17380;
    _index_ptr_17380 = _44db_allocate(_9617);
    DeRef(_0);
    _9617 = NOVALUE;
    // SubProg db_create_table pc: 460 op: STARTLINE (58)

    /** eds.e:1650		put4(0)  -- 0 records*/
    // SubProg db_create_table pc: 462 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_create_table pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 466 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create_table pc: 469 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 471 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 473 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 475 op: PEEK (127)
    DeRefi(_put4_1__tmp_at462_17457);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at462_17457); // DJP 
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at490_17459); // DJP 
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
    _9619 = _init_index_17382 - 1;
    if ((object)((uintptr_t)_9619 +(uintptr_t) HIGH_BITS) >= 0){
        _9619 = NewDouble((eudouble)_9619);
    }
    // SubProg db_create_table pc: 522 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9619)) {
        _9620 = _9619 * 8;
    }
    else {
        _9620 = NewDouble(DBL_PTR(_9619)->dbl * (eudouble)8);
    }
    DeRef(_9619);
    _9619 = NOVALUE;
    // SubProg db_create_table pc: 526 op: REPEAT (32)
    _9621 = Repeat(0, _9620);
    DeRef(_9620);
    _9620 = NOVALUE;
    // SubProg db_create_table pc: 530 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_530_17464);
    _s_inlined_putn_at_530_17464 = _9621;
    _9621 = NOVALUE;
    // SubProg db_create_table pc: 533 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 535 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 537 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 539 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_530_17464); // DJP 
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
            _9622 = SEQ_PTR(_name_17370)->length;
    }
    else {
        _9622 = 1;
    }
    // SubProg db_create_table pc: 554 op: PLUS1 (93)
    _9623 = _9622 + 1;
    _9622 = NOVALUE;
    // SubProg db_create_table pc: 558 op: PROC (27)
    _0 = _name_ptr_17372;
    _name_ptr_17372 = _44db_allocate(_9623);
    DeRef(_0);
    _9623 = NOVALUE;
    // SubProg db_create_table pc: 562 op: STARTLINE (58)

    /** eds.e:1656		putn(name & 0)*/
    // SubProg db_create_table pc: 564 op: CONCAT (15)
    Append(&_9625, _name_17370, 0);
    // SubProg db_create_table pc: 568 op: ASSIGN (18)
    DeRef(_s_inlined_putn_at_568_17470);
    _s_inlined_putn_at_568_17470 = _9625;
    _9625 = NOVALUE;
    // SubProg db_create_table pc: 571 op: SEQUENCE_CHECK (97)
    // SubProg db_create_table pc: 573 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_create_table pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 577 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_568_17470); // DJP 
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
        _9626 = _tables_17374 + 4;
        if ((object)((uintptr_t)_9626 + (uintptr_t)HIGH_BITS) >= 0){
            _9626 = NewDouble((eudouble)_9626);
        }
    }
    else {
        _9626 = NewDouble(DBL_PTR(_tables_17374)->dbl + (eudouble)4);
    }
    // SubProg db_create_table pc: 595 op: MINUS (10)
    if (IS_ATOM_INT(_nt_17373)) {
        _9627 = _nt_17373 - 1;
        if ((object)((uintptr_t)_9627 +(uintptr_t) HIGH_BITS) >= 0){
            _9627 = NewDouble((eudouble)_9627);
        }
    }
    else {
        _9627 = NewDouble(DBL_PTR(_nt_17373)->dbl - (eudouble)1);
    }
    // SubProg db_create_table pc: 599 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9627)) {
        if (_9627 == (short)_9627){
            _9628 = _9627 * 16;
        }
        else{
            _9628 = NewDouble(_9627 * (eudouble)16);
        }
    }
    else {
        _9628 = NewDouble(DBL_PTR(_9627)->dbl * (eudouble)16);
    }
    DeRef(_9627);
    _9627 = NOVALUE;
    // SubProg db_create_table pc: 603 op: PLUS (11)
    if (IS_ATOM_INT(_9626) && IS_ATOM_INT(_9628)) {
        _9629 = _9626 + _9628;
        if ((object)((uintptr_t)_9629 + (uintptr_t)HIGH_BITS) >= 0){
            _9629 = NewDouble((eudouble)_9629);
        }
    }
    else {
        if (IS_ATOM_INT(_9626)) {
            _9629 = NewDouble((eudouble)_9626 + DBL_PTR(_9628)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9628)) {
                _9629 = NewDouble(DBL_PTR(_9626)->dbl + (eudouble)_9628);
            }
            else
            _9629 = NewDouble(DBL_PTR(_9626)->dbl + DBL_PTR(_9628)->dbl);
        }
    }
    DeRef(_9626);
    _9626 = NOVALUE;
    DeRef(_9628);
    _9628 = NOVALUE;
    // SubProg db_create_table pc: 607 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_607_17476);
    _pos_inlined_seek_at_607_17476 = _9629;
    _9629 = NOVALUE;
    // SubProg db_create_table pc: 610 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_create_table pc: 612 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_607_17476);
    DeRef(_seek_1__tmp_at610_17478);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at625_17480); // DJP 
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)0;
    // SubProg db_create_table pc: 660 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 664 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 666 op: PEEK (127)
    DeRefi(_put4_1__tmp_at653_17482);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at653_17482); // DJP 
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)1;
    // SubProg db_create_table pc: 688 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_create_table pc: 690 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 692 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_create_table pc: 694 op: PEEK (127)
    DeRefi(_put4_1__tmp_at681_17484);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at681_17484); // DJP 
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at709_17486); // DJP 
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
    _9630 = _44db_select_table(_name_17370);
    // SubProg db_create_table pc: 741 op: IF (20)
    if (_9630 == 0) {
        DeRef(_9630);
        _9630 = NOVALUE;
        goto L14; // [741] 745
    }
    else {
        if (!IS_ATOM_INT(_9630) && DBL_PTR(_9630)->dbl == 0.0){
            DeRef(_9630);
            _9630 = NOVALUE;
            goto L14; // [741] 745
        }
        DeRef(_9630);
        _9630 = NOVALUE;
    }
    DeRef(_9630);
    _9630 = NOVALUE;
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
    object _9729 = NOVALUE; // 17747 9729
    object _9728 = NOVALUE; // 17746 9728
// skipping _9727  name type: 0
    object _9726 = NOVALUE; // 17737 9726
    object _9725 = NOVALUE; // 17736 9725
    object _9724 = NOVALUE; // 17735 9724
    object _9723 = NOVALUE; // 17734 9723
// skipping _9722  name type: 0
// skipping _9721  name type: 0
// skipping _9720  name type: 0
// skipping _9719  name type: 0
    object _9718 = NOVALUE; // 17724 9718
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_SEQUENCE(_44vLastErrors_16109)){
            _9718 = SEQ_PTR(_44vLastErrors_16109)->length;
    }
    else {
        _9718 = 1;
    }
    // SubProg db_table_list pc: 25 op: GREATER_IFW_I (124)
    if (_9718 <= 0)
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9723 = _nt_17718 - 1;
        if ((object)((uintptr_t)_9723 +(uintptr_t) HIGH_BITS) >= 0){
            _9723 = NewDouble((eudouble)_9723);
        }
    }
    else {
        _9723 = NewDouble(DBL_PTR(_nt_17718)->dbl - (eudouble)1);
    }
    // SubProg db_table_list pc: 73 op: FOR (21)
    {
        object _i_17733;
        _i_17733 = 0;
L2: // addr: 80 pc: 73 sub: 17714 op: 21
        if (binary_op_a(GREATER, _i_17733, _9723)){
            goto L3; // [73] 154
        }
        // SubProg db_table_list pc: 80 op: STARTLINE (58)

        /** eds.e:1930			io:seek(current_db, tables + 4 + i*SIZEOF_TABLE_HEADER)*/
        // SubProg db_table_list pc: 82 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_table_list pc: 84 op: PLUS (11)
        if (IS_ATOM_INT(_tables_17717)) {
            _9724 = _tables_17717 + 4;
            if ((object)((uintptr_t)_9724 + (uintptr_t)HIGH_BITS) >= 0){
                _9724 = NewDouble((eudouble)_9724);
            }
        }
        else {
            _9724 = NewDouble(DBL_PTR(_tables_17717)->dbl + (eudouble)4);
        }
        // SubProg db_table_list pc: 88 op: MULTIPLY (13)
        if (IS_ATOM_INT(_i_17733)) {
            if (_i_17733 == (short)_i_17733){
                _9725 = _i_17733 * 16;
            }
            else{
                _9725 = NewDouble(_i_17733 * (eudouble)16);
            }
        }
        else {
            _9725 = NewDouble(DBL_PTR(_i_17733)->dbl * (eudouble)16);
        }
        // SubProg db_table_list pc: 92 op: PLUS (11)
        if (IS_ATOM_INT(_9724) && IS_ATOM_INT(_9725)) {
            _9726 = _9724 + _9725;
            if ((object)((uintptr_t)_9726 + (uintptr_t)HIGH_BITS) >= 0){
                _9726 = NewDouble((eudouble)_9726);
            }
        }
        else {
            if (IS_ATOM_INT(_9724)) {
                _9726 = NewDouble((eudouble)_9724 + DBL_PTR(_9725)->dbl);
            }
            else {
                if (IS_ATOM_INT(_9725)) {
                    _9726 = NewDouble(DBL_PTR(_9724)->dbl + (eudouble)_9725);
                }
                else
                _9726 = NewDouble(DBL_PTR(_9724)->dbl + DBL_PTR(_9725)->dbl);
            }
        }
        DeRef(_9724);
        _9724 = NOVALUE;
        DeRef(_9725);
        _9725 = NOVALUE;
        // SubProg db_table_list pc: 96 op: ASSIGN (18)
        DeRef(_pos_inlined_seek_at_95_17739);
        _pos_inlined_seek_at_95_17739 = _9726;
        _9726 = NOVALUE;
        // SubProg db_table_list pc: 99 op: STARTLINE (58)

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        // SubProg db_table_list pc: 101 op: RIGHT_BRACE_2 (85)
        Ref(_pos_inlined_seek_at_95_17739);
        DeRef(_seek_1__tmp_at98_17741);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
        ((intptr_t *)_2)[1] = _44current_db_16085;
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
            _9728 = _i_17733 + 1;
            if (_9728 > MAXINT){
                _9728 = NewDouble((eudouble)_9728);
            }
        }
        else
        _9728 = binary_op(PLUS, 1, _i_17733);
        // SubProg db_table_list pc: 140 op: PROC (27)
        _9729 = _44get_string();
        // SubProg db_table_list pc: 143 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_table_names_17716);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _table_names_17716 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_9728))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_9728)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _9728);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _9729;
        if( _1 != _9729 ){
            DeRef(_1);
        }
        _9729 = NOVALUE;
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
    DeRef(_9728);
    _9728 = NOVALUE;
    DeRef(_9723);
    _9723 = NOVALUE;
    return _table_names_17716;
    // SubProg db_table_list pc: 160 op: BADRETURNF (43)
    ;
}


object _44key_value(object _ptr_17750)
{
    object _seek_1__tmp_at11_17755 = NOVALUE;
    object _seek_inlined_seek_at_11_17754 = NOVALUE;
    object _pos_inlined_seek_at_8_17753 = NOVALUE;
    object _9731 = NOVALUE; // 17756 9731
    object _9730 = NOVALUE; // 17751 9730
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg key_value pc: 1 op: STARTLINE (58)

    /** eds.e:1941		io:seek(current_db, ptr+4) -- skip ptr to data*/
    // SubProg key_value pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg key_value pc: 5 op: PLUS (11)
    if (IS_ATOM_INT(_ptr_17750)) {
        _9730 = _ptr_17750 + 4;
        if ((object)((uintptr_t)_9730 + (uintptr_t)HIGH_BITS) >= 0){
            _9730 = NewDouble((eudouble)_9730);
        }
    }
    else {
        _9730 = NewDouble(DBL_PTR(_ptr_17750)->dbl + (eudouble)4);
    }
    // SubProg key_value pc: 9 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_8_17753);
    _pos_inlined_seek_at_8_17753 = _9730;
    _9730 = NOVALUE;
    // SubProg key_value pc: 12 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg key_value pc: 14 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_8_17753);
    DeRef(_seek_1__tmp_at11_17755);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9731 = _44decompress(0);
    // SubProg key_value pc: 31 op: RETURNF (28)

// Exiting block BLOCK: key_value

// block var ptr_17750
    DeRef(_ptr_17750);
    return _9731;
    // SubProg key_value pc: 35 op: BADRETURNF (43)
    ;
}


object _44db_find_key(object _key_17759, object _table_name_17760)
{
    object _lo_17761 = NOVALUE;
    object _hi_17762 = NOVALUE;
    object _mid_17763 = NOVALUE;
    object _c_17764 = NOVALUE;
    object _9755 = NOVALUE; // 17796 9755
// skipping _9754  name type: 0
// skipping _9753  name type: 0
// skipping _9752  name type: 0
// skipping _9751  name type: 0
// skipping _9750  name type: 0
// skipping _9749  name type: 0
// skipping _9748  name type: 0
    object _9747 = NOVALUE; // 17784 9747
    object _9746 = NOVALUE; // 17783 9746
// skipping _9745  name type: 0
    object _9744 = NOVALUE; // 17781 9744
// skipping _9743  name type: 0
// skipping _9742  name type: 0
    object _9741 = NOVALUE; // 17777 9741
// skipping _9739  name type: 0
    object _9738 = NOVALUE; // 17773 9738
// skipping _9735  name type: 0
    object _9734 = NOVALUE; // 17769 9734
// skipping _9733  name type: 0
    object _9732 = NOVALUE; // 17766 9732
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_find_key pc: 1 op: STARTLINE (58)

    /** eds.e:2003		if not equal(table_name, current_table_name) then*/
    // SubProg db_find_key pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_find_key pc: 5 op: EQUAL (153)
    if (_table_name_17760 == _44current_table_name_16087)
    _9732 = 1;
    else if (IS_ATOM_INT(_table_name_17760) && IS_ATOM_INT(_44current_table_name_16087))
    _9732 = 0;
    else
    _9732 = (compare(_table_name_17760, _44current_table_name_16087) == 0);
    // SubProg db_find_key pc: 9 op: NOT_IFW (108)
    if (_9732 != 0)
    goto L1; // [9] 42
    _9732 = NOVALUE;
    // SubProg db_find_key pc: 12 op: STARTLINE (58)

    /** eds.e:2004			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_find_key pc: 14 op: PROC (27)
    RefDS(_table_name_17760);
    _9734 = _44db_select_table(_table_name_17760);
    // SubProg db_find_key pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9734, 0)){
        DeRef(_9734);
        _9734 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_9734);
    _9734 = NOVALUE;
    // SubProg db_find_key pc: 22 op: STARTLINE (58)

    /** eds.e:2005				fatal(NO_TABLE, "invalid table name given", "db_find_key", {key, table_name})*/
    // SubProg db_find_key pc: 24 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_17760);
    Ref(_key_17759);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_17759;
    ((intptr_t *)_2)[2] = _table_name_17760;
    _9738 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 28 op: PROC (27)
    RefDS(_9736);
    RefDS(_9737);
    _44fatal(903, _9736, _9737, _9738);
    _9738 = NOVALUE;
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
    if (binary_op_a(NOTEQ, _44current_table_pos_16086, -1)){
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
    _9741 = MAKE_SEQ(_1);
    // SubProg db_find_key pc: 56 op: PROC (27)
    RefDS(_9740);
    RefDS(_9737);
    _44fatal(903, _9740, _9737, _9741);
    _9741 = NOVALUE;
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
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _hi_17762 = SEQ_PTR(_44key_pointers_16092)->length;
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
    _9744 = _lo_17761 + _hi_17762;
    if ((object)((uintptr_t)_9744 + (uintptr_t)HIGH_BITS) >= 0){
        _9744 = NewDouble((eudouble)_9744);
    }
    // SubProg db_find_key pc: 106 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_9744)) {
        _mid_17763 = _9744 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _9744, 2);
        _mid_17763 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_9744);
    _9744 = NOVALUE;
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
    _2 = (object)SEQ_PTR(_44key_pointers_16092);
    _9746 = (object)*(((s1_ptr)_2)->base + _mid_17763);
    // SubProg db_find_key pc: 120 op: PROC (27)
    Ref(_9746);
    _9747 = _44key_value(_9746);
    _9746 = NOVALUE;
    // SubProg db_find_key pc: 124 op: COMPARE (76)
    if (IS_ATOM_INT(_key_17759) && IS_ATOM_INT(_9747)){
        _c_17764 = (_key_17759 < _9747) ? -1 : (_key_17759 > _9747);
    }
    else{
        _c_17764 = compare(_key_17759, _9747);
    }
    DeRef(_9747);
    _9747 = NOVALUE;
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
        _9755 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _9755 = - _mid_17763;
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
    return _9755;
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
    object _9851 = NOVALUE; // 18005 9851
    object _9850 = NOVALUE; // 18002 9850
    object _9849 = NOVALUE; // 18001 9849
    object _9848 = NOVALUE; // 18000 9848
// skipping _9847  name type: 0
// skipping _9846  name type: 0
    object _9845 = NOVALUE; // 17996 9845
    object _9844 = NOVALUE; // 17995 9844
// skipping _9843  name type: 0
    object _9842 = NOVALUE; // 17993 9842
// skipping _9841  name type: 0
    object _9840 = NOVALUE; // 17991 9840
    object _9839 = NOVALUE; // 17990 9839
// skipping _9838  name type: 0
    object _9837 = NOVALUE; // 17987 9837
    object _9836 = NOVALUE; // 17982 9836
// skipping _9835  name type: 0
    object _9834 = NOVALUE; // 17974 9834
    object _9833 = NOVALUE; // 17964 9833
// skipping _9832  name type: 0
    object _9831 = NOVALUE; // 17962 9831
    object _9830 = NOVALUE; // 17961 9830
    object _9829 = NOVALUE; // 17960 9829
    object _9828 = NOVALUE; // 17959 9828
    object _9827 = NOVALUE; // 17954 9827
    object _9826 = NOVALUE; // 17950 9826
    object _9825 = NOVALUE; // 17944 9825
    object _9824 = NOVALUE; // 17943 9824
    object _9823 = NOVALUE; // 17942 9823
// skipping _9822  name type: 0
// skipping _9821  name type: 0
    object _9820 = NOVALUE; // 17938 9820
    object _9819 = NOVALUE; // 17933 9819
    object _9818 = NOVALUE; // 17932 9818
    object _9817 = NOVALUE; // 17931 9817
// skipping _9816  name type: 0
// skipping _9815  name type: 0
    object _9814 = NOVALUE; // 17928 9814
// skipping _9813  name type: 0
// skipping _9812  name type: 0
    object _9811 = NOVALUE; // 17924 9811
    object _9810 = NOVALUE; // 17923 9810
    object _9809 = NOVALUE; // 17922 9809
    object _9808 = NOVALUE; // 17921 9808
// skipping _9805  name type: 0
    object _9804 = NOVALUE; // 17917 9804
    object _9803 = NOVALUE; // 17916 9803
// skipping _9802  name type: 0
    object _9801 = NOVALUE; // 17913 9801
    object _9800 = NOVALUE; // 17908 9800
// skipping _9799  name type: 0
    object _9798 = NOVALUE; // 17898 9798
    object _9797 = NOVALUE; // 17897 9797
    object _9796 = NOVALUE; // 17896 9796
    object _9795 = NOVALUE; // 17895 9795
    object _9794 = NOVALUE; // 17888 9794
    object _9793 = NOVALUE; // 17887 9793
    object _9792 = NOVALUE; // 17886 9792
// skipping _9791  name type: 0
    object _9790 = NOVALUE; // 17884 9790
// skipping _9789  name type: 0
// skipping _9788  name type: 0
    object _9787 = NOVALUE; // 17879 9787
// skipping _9786  name type: 0
// skipping _9785  name type: 0
// skipping _9784  name type: 0
// skipping _9783  name type: 0
    object _9782 = NOVALUE; // 17865 9782
    object _9780 = NOVALUE; // 17863 9780
    object _9779 = NOVALUE; // 17862 9779
// skipping _9778  name type: 0
    object _9777 = NOVALUE; // 17859 9777
    object _9776 = NOVALUE; // 17858 9776
    object _9775 = NOVALUE; // 17857 9775
// skipping _9774  name type: 0
// skipping _9773  name type: 0
    object _9772 = NOVALUE; // 17854 9772
// skipping _9771  name type: 0
    object _9770 = NOVALUE; // 17845 9770
// skipping _9769  name type: 0
// skipping _9768  name type: 0
    object _9767 = NOVALUE; // 17842 9767
    object _9766 = NOVALUE; // 17837 9766
// skipping _9765  name type: 0
    object _9764 = NOVALUE; // 17832 9764
    object _9763 = NOVALUE; // 17831 9763
// skipping _9762  name type: 0
    object _9761 = NOVALUE; // 17828 9761
// skipping _9760  name type: 0
// skipping _9759  name type: 0
// skipping _9758  name type: 0
// skipping _9757  name type: 0
// skipping _9756  name type: 0
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
            _9761 = SEQ_PTR(_data_string_17803)->length;
    }
    else {
        _9761 = 1;
    }
    // SubProg db_insert pc: 47 op: PROC (27)
    _0 = _data_ptr_17807;
    _data_ptr_17807 = _44db_allocate(_9761);
    DeRef(_0);
    _9761 = NOVALUE;
    // SubProg db_insert pc: 51 op: STARTLINE (58)

    /** eds.e:2083		putn(data_string)*/
    // SubProg db_insert pc: 53 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 57 op: PUTS (44)
    EPuts(_44current_db_16085, _data_string_17803); // DJP 
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
            _9763 = SEQ_PTR(_key_string_17802)->length;
    }
    else {
        _9763 = 1;
    }
    // SubProg db_insert pc: 70 op: PLUS (11)
    _9764 = 4 + _9763;
    _9763 = NOVALUE;
    // SubProg db_insert pc: 74 op: PROC (27)
    _0 = _key_ptr_17806;
    _key_ptr_17806 = _44db_allocate(_9764);
    DeRef(_0);
    _9764 = NOVALUE;
    // SubProg db_insert pc: 78 op: STARTLINE (58)

    /** eds.e:2086		put4(data_ptr)*/
    // SubProg db_insert pc: 80 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 84 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at79_17835); // DJP 
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
    EPuts(_44current_db_16085, _key_string_17802); // DJP 
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
    if (IS_ATOM_INT(_44current_table_pos_16086)) {
        _9766 = _44current_table_pos_16086 + 4;
        if ((object)((uintptr_t)_9766 + (uintptr_t)HIGH_BITS) >= 0){
            _9766 = NewDouble((eudouble)_9766);
        }
    }
    else {
        _9766 = NewDouble(DBL_PTR(_44current_table_pos_16086)->dbl + (eudouble)4);
    }
    // SubProg db_insert pc: 130 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_129_17839);
    _pos_inlined_seek_at_129_17839 = _9766;
    _9766 = NOVALUE;
    // SubProg db_insert pc: 133 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 135 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_129_17839);
    DeRef(_seek_1__tmp_at132_17841);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9767 = _44get4();
    // SubProg db_insert pc: 151 op: PLUS1 (93)
    DeRef(_total_recs_17817);
    if (IS_ATOM_INT(_9767)) {
        _total_recs_17817 = _9767 + 1;
        if (_total_recs_17817 > MAXINT){
            _total_recs_17817 = NewDouble((eudouble)_total_recs_17817);
        }
    }
    else
    _total_recs_17817 = binary_op(PLUS, 1, _9767);
    DeRef(_9767);
    _9767 = NOVALUE;
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
    if (IS_ATOM_INT(_44current_table_pos_16086)) {
        _9770 = _44current_table_pos_16086 + 4;
        if ((object)((uintptr_t)_9770 + (uintptr_t)HIGH_BITS) >= 0){
            _9770 = NewDouble((eudouble)_9770);
        }
    }
    else {
        _9770 = NewDouble(DBL_PTR(_44current_table_pos_16086)->dbl + (eudouble)4);
    }
    // SubProg db_insert pc: 172 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_171_17847);
    _pos_inlined_seek_at_171_17847 = _9770;
    _9770 = NOVALUE;
    // SubProg db_insert pc: 175 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 177 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_171_17847);
    DeRef(_seek_1__tmp_at174_17849);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at189_17851); // DJP 
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
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _n_17821 = SEQ_PTR(_44key_pointers_16092)->length;
    }
    else {
        _n_17821 = 1;
    }
    // SubProg db_insert pc: 223 op: STARTLINE (58)

    /** eds.e:2098		if key_location >= floor(n/2) then*/
    // SubProg db_insert pc: 225 op: FLOOR_DIV2 (66)
    _9772 = _n_17821 >> 1;
    // SubProg db_insert pc: 229 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _key_location_17813, _9772)){
        _9772 = NOVALUE;
        goto L6; // [229] 268
    }
    DeRef(_9772);
    _9772 = NOVALUE;
    // SubProg db_insert pc: 233 op: STARTLINE (58)

    /** eds.e:2100			key_pointers = append(key_pointers, 0)*/
    // SubProg db_insert pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 237 op: APPEND (35)
    Append(&_44key_pointers_16092, _44key_pointers_16092, 0);
    // SubProg db_insert pc: 241 op: STARTLINE (58)

    /** eds.e:2102			key_pointers[key_location+1..n+1] = key_pointers[key_location..n]*/
    // SubProg db_insert pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 245 op: PLUS1 (93)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9775 = _key_location_17813 + 1;
        if (_9775 > MAXINT){
            _9775 = NewDouble((eudouble)_9775);
        }
    }
    else
    _9775 = binary_op(PLUS, 1, _key_location_17813);
    // SubProg db_insert pc: 249 op: PLUS1 (93)
    _9776 = _n_17821 + 1;
    // SubProg db_insert pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 255 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_9777;
    RHS_Slice(_44key_pointers_16092, _key_location_17813, _n_17821);
    // SubProg db_insert pc: 260 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_44key_pointers_16092;
    AssignSlice(_9775, _9776, _9777);
    DeRef(_9775);
    _9775 = NOVALUE;
    _9776 = NOVALUE;
    DeRefDS(_9777);
    _9777 = NOVALUE;
    // SubProg db_insert pc: 265 op: ELSE (23)
    goto L7; // [265] 297
    // SubProg db_insert pc: 267 op: NOP1 (159)
L6: // addr: 268 pc: 267 sub: 17797 op: 159
    // SubProg db_insert pc: 268 op: STARTLINE (58)

    /** eds.e:2105			key_pointers = prepend(key_pointers, 0)*/
    // SubProg db_insert pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 272 op: PREPEND (57)
    Prepend(&_44key_pointers_16092, _44key_pointers_16092, 0);
    // SubProg db_insert pc: 276 op: STARTLINE (58)

    /** eds.e:2107			key_pointers[1..key_location-1] = key_pointers[2..key_location]*/
    // SubProg db_insert pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 280 op: MINUS (10)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9779 = _key_location_17813 - 1;
        if ((object)((uintptr_t)_9779 +(uintptr_t) HIGH_BITS) >= 0){
            _9779 = NewDouble((eudouble)_9779);
        }
    }
    else {
        _9779 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)1);
    }
    // SubProg db_insert pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 286 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_9780;
    RHS_Slice(_44key_pointers_16092, 2, _key_location_17813);
    // SubProg db_insert pc: 291 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_44key_pointers_16092;
    AssignSlice(1, _9779, _9780);
    DeRef(_9779);
    _9779 = NOVALUE;
    DeRefDS(_9780);
    _9780 = NOVALUE;
    // SubProg db_insert pc: 296 op: NOP1 (159)
L7: // addr: 297 pc: 296 sub: 17797 op: 159
    // SubProg db_insert pc: 297 op: STARTLINE (58)

    /** eds.e:2109		key_pointers[key_location] = key_ptr*/
    // SubProg db_insert pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 301 op: ASSIGN_SUBS (16)
    Ref(_key_ptr_17806);
    _2 = (object)SEQ_PTR(_44key_pointers_16092);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _44key_pointers_16092 = MAKE_SEQ(_2);
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
    if (IS_ATOM_INT(_44current_table_pos_16086)) {
        _9782 = _44current_table_pos_16086 + 12;
        if ((object)((uintptr_t)_9782 + (uintptr_t)HIGH_BITS) >= 0){
            _9782 = NewDouble((eudouble)_9782);
        }
    }
    else {
        _9782 = NewDouble(DBL_PTR(_44current_table_pos_16086)->dbl + (eudouble)12);
    }
    // SubProg db_insert pc: 315 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_314_17867);
    _pos_inlined_seek_at_314_17867 = _9782;
    _9782 = NOVALUE;
    // SubProg db_insert pc: 318 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 320 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_314_17867);
    DeRef(_seek_1__tmp_at317_17869);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9787 = _r_17818 + 1;
    if (_9787 > MAXINT){
        _9787 = NewDouble((eudouble)_9787);
    }
    // SubProg db_insert pc: 387 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _9787, _key_location_17813)){
        DeRef(_9787);
        _9787 = NOVALUE;
        goto L8; // [387] 363
    }
    DeRef(_9787);
    _9787 = NOVALUE;
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
    _where_inlined_where_at_404_17882 = machine(20, _44current_db_16085);
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
        _9790 = _r_17818 - _nrecs_17809;
        if ((object)((uintptr_t)_9790 +(uintptr_t) HIGH_BITS) >= 0){
            _9790 = NewDouble((eudouble)_9790);
        }
    }
    else {
        _9790 = NewDouble((eudouble)_r_17818 - DBL_PTR(_nrecs_17809)->dbl);
    }
    // SubProg db_insert pc: 424 op: MINUS (10)
    _0 = _key_location_17813;
    if (IS_ATOM_INT(_key_location_17813) && IS_ATOM_INT(_9790)) {
        _key_location_17813 = _key_location_17813 - _9790;
        if ((object)((uintptr_t)_key_location_17813 +(uintptr_t) HIGH_BITS) >= 0){
            _key_location_17813 = NewDouble((eudouble)_key_location_17813);
        }
    }
    else {
        if (IS_ATOM_INT(_key_location_17813)) {
            _key_location_17813 = NewDouble((eudouble)_key_location_17813 - DBL_PTR(_9790)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9790)) {
                _key_location_17813 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)_9790);
            }
            else
            _key_location_17813 = NewDouble(DBL_PTR(_key_location_17813)->dbl - DBL_PTR(_9790)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_9790);
    _9790 = NOVALUE;
    // SubProg db_insert pc: 428 op: STARTLINE (58)

    /** eds.e:2129		io:seek(current_db, records_ptr+4*(key_location-1))*/
    // SubProg db_insert pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 432 op: PRIVATE_INIT_CHECK (30)
    // SubProg db_insert pc: 434 op: MINUS (10)
    if (IS_ATOM_INT(_key_location_17813)) {
        _9792 = _key_location_17813 - 1;
        if ((object)((uintptr_t)_9792 +(uintptr_t) HIGH_BITS) >= 0){
            _9792 = NewDouble((eudouble)_9792);
        }
    }
    else {
        _9792 = NewDouble(DBL_PTR(_key_location_17813)->dbl - (eudouble)1);
    }
    // SubProg db_insert pc: 438 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9792)) {
        if (_9792 <= INT15 && _9792 >= -INT15){
            _9793 = 4 * _9792;
        }
        else{
            _9793 = NewDouble(4 * (eudouble)_9792);
        }
    }
    else {
        _9793 = NewDouble((eudouble)4 * DBL_PTR(_9792)->dbl);
    }
    DeRef(_9792);
    _9792 = NOVALUE;
    // SubProg db_insert pc: 442 op: PLUS (11)
    if (IS_ATOM_INT(_records_ptr_17808) && IS_ATOM_INT(_9793)) {
        _9794 = _records_ptr_17808 + _9793;
        if ((object)((uintptr_t)_9794 + (uintptr_t)HIGH_BITS) >= 0){
            _9794 = NewDouble((eudouble)_9794);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_17808)) {
            _9794 = NewDouble((eudouble)_records_ptr_17808 + DBL_PTR(_9793)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9793)) {
                _9794 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + (eudouble)_9793);
            }
            else
            _9794 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + DBL_PTR(_9793)->dbl);
        }
    }
    DeRef(_9793);
    _9793 = NOVALUE;
    // SubProg db_insert pc: 446 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_445_17890);
    _pos_inlined_seek_at_445_17890 = _9794;
    _9794 = NOVALUE;
    // SubProg db_insert pc: 449 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 451 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_445_17890);
    DeRef(_seek_1__tmp_at448_17892);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9795 = _nrecs_17809 + 1;
        if (_9795 > MAXINT){
            _9795 = NewDouble((eudouble)_9795);
        }
    }
    else
    _9795 = binary_op(PLUS, 1, _nrecs_17809);
    // SubProg db_insert pc: 468 op: FOR (21)
    {
        object _i_17894;
        Ref(_key_location_17813);
        _i_17894 = _key_location_17813;
LA: // addr: 475 pc: 468 sub: 17797 op: 21
        if (binary_op_a(GREATER, _i_17894, _9795)){
            goto LB; // [468] 527
        }
        // SubProg db_insert pc: 475 op: STARTLINE (58)

        /** eds.e:2131			put4(key_pointers[i+r-nrecs])*/
        // SubProg db_insert pc: 477 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 479 op: PLUS (11)
        if (IS_ATOM_INT(_i_17894)) {
            _9796 = _i_17894 + _r_17818;
            if ((object)((uintptr_t)_9796 + (uintptr_t)HIGH_BITS) >= 0){
                _9796 = NewDouble((eudouble)_9796);
            }
        }
        else {
            _9796 = NewDouble(DBL_PTR(_i_17894)->dbl + (eudouble)_r_17818);
        }
        // SubProg db_insert pc: 483 op: MINUS (10)
        if (IS_ATOM_INT(_9796) && IS_ATOM_INT(_nrecs_17809)) {
            _9797 = _9796 - _nrecs_17809;
        }
        else {
            if (IS_ATOM_INT(_9796)) {
                _9797 = NewDouble((eudouble)_9796 - DBL_PTR(_nrecs_17809)->dbl);
            }
            else {
                if (IS_ATOM_INT(_nrecs_17809)) {
                    _9797 = NewDouble(DBL_PTR(_9796)->dbl - (eudouble)_nrecs_17809);
                }
                else
                _9797 = NewDouble(DBL_PTR(_9796)->dbl - DBL_PTR(_nrecs_17809)->dbl);
            }
        }
        DeRef(_9796);
        _9796 = NOVALUE;
        // SubProg db_insert pc: 487 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_44key_pointers_16092);
        if (!IS_ATOM_INT(_9797)){
            _9798 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_9797)->dbl));
        }
        else{
            _9798 = (object)*(((s1_ptr)_2)->base + _9797);
        }
        // SubProg db_insert pc: 491 op: ASSIGN (18)
        Ref(_9798);
        DeRef(_x_inlined_put4_at_490_17900);
        _x_inlined_put4_at_490_17900 = _9798;
        _9798 = NOVALUE;
        // SubProg db_insert pc: 494 op: STARTLINE (58)

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        // SubProg db_insert pc: 496 op: GLOBAL_INIT_CHECK (109)
        // SubProg db_insert pc: 498 op: POKE4 (138)
        if (IS_ATOM_INT(_44mem0_16127)){
            poke4_addr = (uint32_t *)_44mem0_16127;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
        _1 = (object)SEQ_PTR(_44memseq_16362);
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
        EPuts(_44current_db_16085, _put4_1__tmp_at493_17901); // DJP 
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at551_17907); // DJP 
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
        _9800 = _records_ptr_17808 - 4;
        if ((object)((uintptr_t)_9800 +(uintptr_t) HIGH_BITS) >= 0){
            _9800 = NewDouble((eudouble)_9800);
        }
    }
    else {
        _9800 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 586 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_585_17910);
    _pos_inlined_seek_at_585_17910 = _9800;
    _9800 = NOVALUE;
    // SubProg db_insert pc: 589 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 591 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_585_17910);
    DeRef(_seek_1__tmp_at588_17912);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9801 = _44get4();
    // SubProg db_insert pc: 607 op: MINUS (10)
    DeRef(_size_17811);
    if (IS_ATOM_INT(_9801)) {
        _size_17811 = _9801 - 4;
        if ((object)((uintptr_t)_size_17811 +(uintptr_t) HIGH_BITS) >= 0){
            _size_17811 = NewDouble((eudouble)_size_17811);
        }
    }
    else {
        _size_17811 = binary_op(MINUS, _9801, 4);
    }
    DeRef(_9801);
    _9801 = NOVALUE;
    // SubProg db_insert pc: 611 op: STARTLINE (58)

    /** eds.e:2142		if nrecs*4 > size-4 then*/
    // SubProg db_insert pc: 613 op: MULTIPLY (13)
    if (IS_ATOM_INT(_nrecs_17809)) {
        if (_nrecs_17809 == (short)_nrecs_17809){
            _9803 = _nrecs_17809 * 4;
        }
        else{
            _9803 = NewDouble(_nrecs_17809 * (eudouble)4);
        }
    }
    else {
        _9803 = NewDouble(DBL_PTR(_nrecs_17809)->dbl * (eudouble)4);
    }
    // SubProg db_insert pc: 617 op: MINUS (10)
    if (IS_ATOM_INT(_size_17811)) {
        _9804 = _size_17811 - 4;
        if ((object)((uintptr_t)_9804 +(uintptr_t) HIGH_BITS) >= 0){
            _9804 = NewDouble((eudouble)_9804);
        }
    }
    else {
        _9804 = NewDouble(DBL_PTR(_size_17811)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 621 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9803, _9804)){
        DeRef(_9803);
        _9803 = NOVALUE;
        DeRef(_9804);
        _9804 = NOVALUE;
        goto LE; // [621] 1217
    }
    DeRef(_9803);
    _9803 = NOVALUE;
    DeRef(_9804);
    _9804 = NOVALUE;
    // SubProg db_insert pc: 625 op: STARTLINE (58)

    /** eds.e:2150			new_size = 8 * (20 + floor(sqrt(1.5 * total_recs)))*/
    // SubProg db_insert pc: 627 op: MULTIPLY (13)
    if (IS_ATOM_INT(_total_recs_17817)) {
        _9808 = NewDouble(DBL_PTR(_9807)->dbl * (eudouble)_total_recs_17817);
    }
    else
    _9808 = NewDouble(DBL_PTR(_9807)->dbl * DBL_PTR(_total_recs_17817)->dbl);
    // SubProg db_insert pc: 631 op: SQRT (41)
    _9809 = unary_op(SQRT, _9808);
    DeRefDS(_9808);
    _9808 = NOVALUE;
    // SubProg db_insert pc: 634 op: FLOOR (83)
    _9810 = unary_op(FLOOR, _9809);
    DeRefDS(_9809);
    _9809 = NOVALUE;
    // SubProg db_insert pc: 637 op: PLUS (11)
    if (IS_ATOM_INT(_9810)) {
        _9811 = 20 + _9810;
        if ((object)((uintptr_t)_9811 + (uintptr_t)HIGH_BITS) >= 0){
            _9811 = NewDouble((eudouble)_9811);
        }
    }
    else {
        _9811 = binary_op(PLUS, 20, _9810);
    }
    DeRef(_9810);
    _9810 = NOVALUE;
    // SubProg db_insert pc: 641 op: MULTIPLY (13)
    DeRef(_new_size_17812);
    if (IS_ATOM_INT(_9811)) {
        if (_9811 <= INT15 && _9811 >= -INT15){
            _new_size_17812 = 8 * _9811;
        }
        else{
            _new_size_17812 = NewDouble(8 * (eudouble)_9811);
        }
    }
    else {
        _new_size_17812 = binary_op(MULTIPLY, 8, _9811);
    }
    DeRef(_9811);
    _9811 = NOVALUE;
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
        _9814 = _nrecs_17809 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _nrecs_17809, 2);
        _9814 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg db_insert pc: 659 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _new_recs_17820, _9814)){
        DeRef(_9814);
        _9814 = NOVALUE;
        goto LF; // [659] 672
    }
    DeRef(_9814);
    _9814 = NOVALUE;
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
        _9817 = _nrecs_17809 - _new_recs_17820;
        if ((object)((uintptr_t)_9817 +(uintptr_t) HIGH_BITS) >= 0){
            _9817 = NewDouble((eudouble)_9817);
        }
    }
    else {
        _9817 = NewDouble(DBL_PTR(_nrecs_17809)->dbl - (eudouble)_new_recs_17820);
    }
    // SubProg db_insert pc: 680 op: MULTIPLY (13)
    if (IS_ATOM_INT(_9817)) {
        if (_9817 == (short)_9817){
            _9818 = _9817 * 4;
        }
        else{
            _9818 = NewDouble(_9817 * (eudouble)4);
        }
    }
    else {
        _9818 = NewDouble(DBL_PTR(_9817)->dbl * (eudouble)4);
    }
    DeRef(_9817);
    _9817 = NOVALUE;
    // SubProg db_insert pc: 684 op: PLUS (11)
    if (IS_ATOM_INT(_records_ptr_17808) && IS_ATOM_INT(_9818)) {
        _9819 = _records_ptr_17808 + _9818;
        if ((object)((uintptr_t)_9819 + (uintptr_t)HIGH_BITS) >= 0){
            _9819 = NewDouble((eudouble)_9819);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_17808)) {
            _9819 = NewDouble((eudouble)_records_ptr_17808 + DBL_PTR(_9818)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9818)) {
                _9819 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + (eudouble)_9818);
            }
            else
            _9819 = NewDouble(DBL_PTR(_records_ptr_17808)->dbl + DBL_PTR(_9818)->dbl);
        }
    }
    DeRef(_9818);
    _9818 = NOVALUE;
    // SubProg db_insert pc: 688 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_687_17935);
    _pos_inlined_seek_at_687_17935 = _9819;
    _9819 = NOVALUE;
    // SubProg db_insert pc: 691 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 693 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_687_17935);
    DeRef(_seek_1__tmp_at690_17937);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9820 = _new_recs_17820 * 4;
    }
    else{
        _9820 = NewDouble(_new_recs_17820 * (eudouble)4);
    }
    // SubProg db_insert pc: 712 op: PROC (27)
    _0 = _last_part_17804;
    _last_part_17804 = _14get_bytes(_44current_db_16085, _9820);
    DeRef(_0);
    _9820 = NOVALUE;
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
    EPuts(_44current_db_16085, _last_part_17804); // DJP 
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
            _9823 = SEQ_PTR(_last_part_17804)->length;
    }
    else {
        _9823 = 1;
    }
    // SubProg db_insert pc: 744 op: MINUS (10)
    if (IS_ATOM_INT(_new_size_17812)) {
        _9824 = _new_size_17812 - _9823;
    }
    else {
        _9824 = NewDouble(DBL_PTR(_new_size_17812)->dbl - (eudouble)_9823);
    }
    _9823 = NOVALUE;
    // SubProg db_insert pc: 748 op: REPEAT (32)
    _9825 = Repeat(0, _9824);
    DeRef(_9824);
    _9824 = NOVALUE;
    // SubProg db_insert pc: 752 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_751_17946);
    _s_inlined_putn_at_751_17946 = _9825;
    _9825 = NOVALUE;
    // SubProg db_insert pc: 755 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 757 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 759 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 761 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_751_17946); // DJP 
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9826 = _nrecs_17809 - _new_recs_17820;
        if ((object)((uintptr_t)_9826 +(uintptr_t) HIGH_BITS) >= 0){
            _9826 = NewDouble((eudouble)_9826);
        }
    }
    else {
        _9826 = NewDouble(DBL_PTR(_nrecs_17809)->dbl - (eudouble)_new_recs_17820);
    }
    // SubProg db_insert pc: 794 op: ASSIGN (18)
    DeRef(_x_inlined_put4_at_793_17952);
    _x_inlined_put4_at_793_17952 = _9826;
    _9826 = NOVALUE;
    // SubProg db_insert pc: 797 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_insert pc: 799 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 801 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at796_17953); // DJP 
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
        _9827 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9827 + (uintptr_t)HIGH_BITS) >= 0){
            _9827 = NewDouble((eudouble)_9827);
        }
    }
    else {
        _9827 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 831 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_830_17956);
    _pos_inlined_seek_at_830_17956 = _9827;
    _9827 = NOVALUE;
    // SubProg db_insert pc: 834 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 836 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_830_17956);
    DeRef(_seek_1__tmp_at833_17958);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
        _9828 = _blocks_17819 * 8;
    }
    else{
        _9828 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 855 op: PLUS (11)
    if (IS_ATOM_INT(_index_ptr_17815) && IS_ATOM_INT(_9828)) {
        _9829 = _index_ptr_17815 + _9828;
        if ((object)((uintptr_t)_9829 + (uintptr_t)HIGH_BITS) >= 0){
            _9829 = NewDouble((eudouble)_9829);
        }
    }
    else {
        if (IS_ATOM_INT(_index_ptr_17815)) {
            _9829 = NewDouble((eudouble)_index_ptr_17815 + DBL_PTR(_9828)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9828)) {
                _9829 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl + (eudouble)_9828);
            }
            else
            _9829 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl + DBL_PTR(_9828)->dbl);
        }
    }
    DeRef(_9828);
    _9828 = NOVALUE;
    // SubProg db_insert pc: 859 op: PLUS (11)
    if (IS_ATOM_INT(_current_block_17810)) {
        _9830 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9830 + (uintptr_t)HIGH_BITS) >= 0){
            _9830 = NewDouble((eudouble)_9830);
        }
    }
    else {
        _9830 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 863 op: MINUS (10)
    if (IS_ATOM_INT(_9829) && IS_ATOM_INT(_9830)) {
        _9831 = _9829 - _9830;
        if ((object)((uintptr_t)_9831 +(uintptr_t) HIGH_BITS) >= 0){
            _9831 = NewDouble((eudouble)_9831);
        }
    }
    else {
        if (IS_ATOM_INT(_9829)) {
            _9831 = NewDouble((eudouble)_9829 - DBL_PTR(_9830)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9830)) {
                _9831 = NewDouble(DBL_PTR(_9829)->dbl - (eudouble)_9830);
            }
            else
            _9831 = NewDouble(DBL_PTR(_9829)->dbl - DBL_PTR(_9830)->dbl);
        }
    }
    DeRef(_9829);
    _9829 = NOVALUE;
    DeRef(_9830);
    _9830 = NOVALUE;
    // SubProg db_insert pc: 867 op: PROC (27)
    _0 = _remaining_17805;
    _remaining_17805 = _14get_bytes(_44current_db_16085, _9831);
    DeRef(_0);
    _9831 = NOVALUE;
    // SubProg db_insert pc: 872 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 874 op: STARTLINE (58)

    /** eds.e:2172			io:seek(current_db, current_block+8)*/
    // SubProg db_insert pc: 876 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 878 op: PLUS (11)
    if (IS_ATOM_INT(_current_block_17810)) {
        _9833 = _current_block_17810 + 8;
        if ((object)((uintptr_t)_9833 + (uintptr_t)HIGH_BITS) >= 0){
            _9833 = NewDouble((eudouble)_9833);
        }
    }
    else {
        _9833 = NewDouble(DBL_PTR(_current_block_17810)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 882 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_881_17966);
    _pos_inlined_seek_at_881_17966 = _9833;
    _9833 = NOVALUE;
    // SubProg db_insert pc: 885 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 887 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_881_17966);
    DeRef(_seek_1__tmp_at884_17968);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)_new_recs_17820;
    // SubProg db_insert pc: 907 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 909 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 911 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 913 op: PEEK (127)
    DeRefi(_put4_1__tmp_at899_17970);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at899_17970); // DJP 
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at927_17972); // DJP 
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
    EPuts(_44current_db_16085, _remaining_17805); // DJP 
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
    if (IS_ATOM_INT(_44current_table_pos_16086)) {
        _9834 = _44current_table_pos_16086 + 8;
        if ((object)((uintptr_t)_9834 + (uintptr_t)HIGH_BITS) >= 0){
            _9834 = NewDouble((eudouble)_9834);
        }
    }
    else {
        _9834 = NewDouble(DBL_PTR(_44current_table_pos_16086)->dbl + (eudouble)8);
    }
    // SubProg db_insert pc: 978 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_977_17976);
    _pos_inlined_seek_at_977_17976 = _9834;
    _9834 = NOVALUE;
    // SubProg db_insert pc: 981 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 983 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_977_17976);
    DeRef(_seek_1__tmp_at980_17978);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
    }
    *poke4_addr = (uint32_t)_blocks_17819;
    // SubProg db_insert pc: 1009 op: STARTLINE (58)

    /** eds.e:443		puts(current_db, peek(memseq))*/
    // SubProg db_insert pc: 1011 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1013 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1015 op: PEEK (127)
    DeRefi(_put4_1__tmp_at1001_17981);
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at1001_17981); // DJP 
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
        _9836 = _index_ptr_17815 - 4;
        if ((object)((uintptr_t)_9836 +(uintptr_t) HIGH_BITS) >= 0){
            _9836 = NewDouble((eudouble)_9836);
        }
    }
    else {
        _9836 = NewDouble(DBL_PTR(_index_ptr_17815)->dbl - (eudouble)4);
    }
    // SubProg db_insert pc: 1036 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_1035_17984);
    _pos_inlined_seek_at_1035_17984 = _9836;
    _9836 = NOVALUE;
    // SubProg db_insert pc: 1039 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 1041 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_1035_17984);
    DeRef(_seek_1__tmp_at1038_17986);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    _9837 = _44get4();
    // SubProg db_insert pc: 1057 op: MINUS (10)
    DeRef(_size_17811);
    if (IS_ATOM_INT(_9837)) {
        _size_17811 = _9837 - 4;
        if ((object)((uintptr_t)_size_17811 +(uintptr_t) HIGH_BITS) >= 0){
            _size_17811 = NewDouble((eudouble)_size_17811);
        }
    }
    else {
        _size_17811 = binary_op(MINUS, _9837, 4);
    }
    DeRef(_9837);
    _9837 = NOVALUE;
    // SubProg db_insert pc: 1061 op: STARTLINE (58)

    /** eds.e:2182			if blocks*8 > size-8 then*/
    // SubProg db_insert pc: 1063 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9839 = _blocks_17819 * 8;
    }
    else{
        _9839 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1067 op: MINUS (10)
    if (IS_ATOM_INT(_size_17811)) {
        _9840 = _size_17811 - 8;
        if ((object)((uintptr_t)_9840 +(uintptr_t) HIGH_BITS) >= 0){
            _9840 = NewDouble((eudouble)_9840);
        }
    }
    else {
        _9840 = NewDouble(DBL_PTR(_size_17811)->dbl - (eudouble)8);
    }
    // SubProg db_insert pc: 1071 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _9839, _9840)){
        DeRef(_9839);
        _9839 = NOVALUE;
        DeRef(_9840);
        _9840 = NOVALUE;
        goto L17; // [1071] 1216
    }
    DeRef(_9839);
    _9839 = NOVALUE;
    DeRef(_9840);
    _9840 = NOVALUE;
    // SubProg db_insert pc: 1075 op: STARTLINE (58)

    /** eds.e:2184				remaining = io:get_bytes(current_db, blocks*8)*/
    // SubProg db_insert pc: 1077 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1079 op: MULTIPLY (13)
    if (_blocks_17819 == (short)_blocks_17819){
        _9842 = _blocks_17819 * 8;
    }
    else{
        _9842 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1083 op: PROC (27)
    _0 = _remaining_17805;
    _remaining_17805 = _14get_bytes(_44current_db_16085, _9842);
    DeRef(_0);
    _9842 = NOVALUE;
    // SubProg db_insert pc: 1088 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 1090 op: STARTLINE (58)

    /** eds.e:2185				new_size = floor(size + size/2)*/
    // SubProg db_insert pc: 1092 op: DIV2 (98)
    if (IS_ATOM_INT(_size_17811)) {
        if (_size_17811 & 1) {
            _9844 = NewDouble((_size_17811 >> 1) + 0.5);
        }
        else
        _9844 = _size_17811 >> 1;
    }
    else {
        _9844 = binary_op(DIVIDE, _size_17811, 2);
    }
    // SubProg db_insert pc: 1096 op: PLUS (11)
    if (IS_ATOM_INT(_size_17811) && IS_ATOM_INT(_9844)) {
        _9845 = _size_17811 + _9844;
        if ((object)((uintptr_t)_9845 + (uintptr_t)HIGH_BITS) >= 0){
            _9845 = NewDouble((eudouble)_9845);
        }
    }
    else {
        if (IS_ATOM_INT(_size_17811)) {
            _9845 = NewDouble((eudouble)_size_17811 + DBL_PTR(_9844)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9844)) {
                _9845 = NewDouble(DBL_PTR(_size_17811)->dbl + (eudouble)_9844);
            }
            else
            _9845 = NewDouble(DBL_PTR(_size_17811)->dbl + DBL_PTR(_9844)->dbl);
        }
    }
    DeRef(_9844);
    _9844 = NOVALUE;
    // SubProg db_insert pc: 1100 op: FLOOR (83)
    DeRef(_new_size_17812);
    if (IS_ATOM_INT(_9845))
    _new_size_17812 = e_floor(_9845);
    else
    _new_size_17812 = unary_op(FLOOR, _9845);
    DeRef(_9845);
    _9845 = NOVALUE;
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
    EPuts(_44current_db_16085, _remaining_17805); // DJP 
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
        _9848 = _blocks_17819 * 8;
    }
    else{
        _9848 = NewDouble(_blocks_17819 * (eudouble)8);
    }
    // SubProg db_insert pc: 1129 op: MINUS (10)
    if (IS_ATOM_INT(_new_size_17812) && IS_ATOM_INT(_9848)) {
        _9849 = _new_size_17812 - _9848;
    }
    else {
        if (IS_ATOM_INT(_new_size_17812)) {
            _9849 = NewDouble((eudouble)_new_size_17812 - DBL_PTR(_9848)->dbl);
        }
        else {
            if (IS_ATOM_INT(_9848)) {
                _9849 = NewDouble(DBL_PTR(_new_size_17812)->dbl - (eudouble)_9848);
            }
            else
            _9849 = NewDouble(DBL_PTR(_new_size_17812)->dbl - DBL_PTR(_9848)->dbl);
        }
    }
    DeRef(_9848);
    _9848 = NOVALUE;
    // SubProg db_insert pc: 1133 op: REPEAT (32)
    _9850 = Repeat(0, _9849);
    DeRef(_9849);
    _9849 = NOVALUE;
    // SubProg db_insert pc: 1137 op: ASSIGN (18)
    DeRefi(_s_inlined_putn_at_1136_18004);
    _s_inlined_putn_at_1136_18004 = _9850;
    _9850 = NOVALUE;
    // SubProg db_insert pc: 1140 op: SEQUENCE_CHECK (97)
    // SubProg db_insert pc: 1142 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_insert pc: 1144 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_insert pc: 1146 op: PUTS (44)
    EPuts(_44current_db_16085, _s_inlined_putn_at_1136_18004); // DJP 
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
    if (IS_ATOM_INT(_44current_table_pos_16086)) {
        _9851 = _44current_table_pos_16086 + 12;
        if ((object)((uintptr_t)_9851 + (uintptr_t)HIGH_BITS) >= 0){
            _9851 = NewDouble((eudouble)_9851);
        }
    }
    else {
        _9851 = NewDouble(DBL_PTR(_44current_table_pos_16086)->dbl + (eudouble)12);
    }
    // SubProg db_insert pc: 1171 op: ASSIGN (18)
    DeRef(_pos_inlined_seek_at_1170_18007);
    _pos_inlined_seek_at_1170_18007 = _9851;
    _9851 = NOVALUE;
    // SubProg db_insert pc: 1174 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_insert pc: 1176 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_1170_18007);
    DeRef(_seek_1__tmp_at1173_18009);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at1188_18011); // DJP 
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
    DeRef(_9797);
    _9797 = NOVALUE;
    DeRef(_9795);
    _9795 = NOVALUE;
    return 0;
    // SubProg db_insert pc: 1223 op: BADRETURNF (43)
    ;
}


void _44db_replace_data(object _key_location_18146, object _data_18147, object _table_name_18148)
{
    object _9925 = NOVALUE; // 18167 9925
    object _9924 = NOVALUE; // 18165 9924
    object _9923 = NOVALUE; // 18164 9923
    object _9922 = NOVALUE; // 18163 9922
// skipping _9921  name type: 0
    object _9920 = NOVALUE; // 18161 9920
    object _9919 = NOVALUE; // 18159 9919
// skipping _9918  name type: 0
    object _9917 = NOVALUE; // 18156 9917
// skipping _9915  name type: 0
    object _9914 = NOVALUE; // 18153 9914
// skipping _9913  name type: 0
    object _9912 = NOVALUE; // 18150 9912
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_replace_data pc: 1 op: INTEGER_CHECK (96)
    // SubProg db_replace_data pc: 3 op: STARTLINE (58)

    /** eds.e:2323		if not equal(table_name, current_table_name) then*/
    // SubProg db_replace_data pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 7 op: EQUAL (153)
    if (_table_name_18148 == _44current_table_name_16087)
    _9912 = 1;
    else if (IS_ATOM_INT(_table_name_18148) && IS_ATOM_INT(_44current_table_name_16087))
    _9912 = 0;
    else
    _9912 = (compare(_table_name_18148, _44current_table_name_16087) == 0);
    // SubProg db_replace_data pc: 11 op: NOT_IFW (108)
    if (_9912 != 0)
    goto L1; // [11] 45
    _9912 = NOVALUE;
    // SubProg db_replace_data pc: 14 op: STARTLINE (58)

    /** eds.e:2324			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_replace_data pc: 16 op: PROC (27)
    RefDS(_table_name_18148);
    _9914 = _44db_select_table(_table_name_18148);
    // SubProg db_replace_data pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9914, 0)){
        DeRef(_9914);
        _9914 = NOVALUE;
        goto L2; // [20] 44
    }
    DeRef(_9914);
    _9914 = NOVALUE;
    // SubProg db_replace_data pc: 24 op: STARTLINE (58)

    /** eds.e:2325				fatal(NO_TABLE, "invalid table name given", "db_replace_data", {key_location, data, table_name})*/
    // SubProg db_replace_data pc: 26 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_18146;
    ((intptr_t*)_2)[2] = _data_18147;
    RefDS(_table_name_18148);
    ((intptr_t*)_2)[3] = _table_name_18148;
    _9917 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 32 op: PROC (27)
    RefDS(_9736);
    RefDS(_9916);
    _44fatal(903, _9736, _9916, _9917);
    _9917 = NOVALUE;
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
    if (binary_op_a(NOTEQ, _44current_table_pos_16086, -1)){
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
    _9919 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 61 op: PROC (27)
    RefDS(_9740);
    RefDS(_9916);
    _44fatal(903, _9740, _9916, _9919);
    _9919 = NOVALUE;
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
    _9920 = (_key_location_18146 < 1);
    // SubProg db_replace_data pc: 79 op: SC1_OR_IF (147)
    if (_9920 != 0) {
        goto L4; // [79] 97
    }
    // SubProg db_replace_data pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 85 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _9922 = SEQ_PTR(_44key_pointers_16092)->length;
    }
    else {
        _9922 = 1;
    }
    // SubProg db_replace_data pc: 88 op: GREATER (6)
    _9923 = (_key_location_18146 > _9922);
    _9922 = NOVALUE;
    // SubProg db_replace_data pc: 92 op: NOP1 (159)
    // SubProg db_replace_data pc: 93 op: IF (20)
    if (_9923 == 0)
    {
        DeRef(_9923);
        _9923 = NOVALUE;
        goto L5; // [93] 117
    }
    else{
        DeRef(_9923);
        _9923 = NOVALUE;
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
    _9924 = MAKE_SEQ(_1);
    // SubProg db_replace_data pc: 105 op: PROC (27)
    RefDS(_9864);
    RefDS(_9916);
    _44fatal(905, _9864, _9916, _9924);
    _9924 = NOVALUE;
    // SubProg db_replace_data pc: 111 op: STARTLINE (58)

    /** eds.e:2336			return*/
    // SubProg db_replace_data pc: 113 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRef(_table_name_18148);
    DeRef(_9920);
    _9920 = NOVALUE;
    return;
    // SubProg db_replace_data pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 18144 op: 159
    // SubProg db_replace_data pc: 117 op: STARTLINE (58)

    /** eds.e:2338		db_replace_recid(key_pointers[key_location], data)*/
    // SubProg db_replace_data pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_data pc: 121 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16092);
    _9925 = (object)*(((s1_ptr)_2)->base + _key_location_18146);
    // SubProg db_replace_data pc: 125 op: PROC (27)
    Ref(_9925);
    _44db_replace_recid(_9925, _data_18147);
    _9925 = NOVALUE;
    // SubProg db_replace_data pc: 129 op: STARTLINE (58)

    /** eds.e:2339	end procedure*/
    // SubProg db_replace_data pc: 131 op: RETURNP (29)

// Exiting block BLOCK: db_replace_data

// block var key_location_18146

// block var data_18147

// block var table_name_18148
    DeRef(_table_name_18148);
    DeRef(_9920);
    _9920 = NOVALUE;
    return;
    // SubProg db_replace_data pc: 134 op: BADRETURNF (43)
    ;
}


object _44db_table_size(object _table_name_18170)
{
    object _9934 = NOVALUE; // 18182 9934
    object _9933 = NOVALUE; // 18181 9933
// skipping _9932  name type: 0
    object _9931 = NOVALUE; // 18178 9931
// skipping _9929  name type: 0
    object _9928 = NOVALUE; // 18175 9928
// skipping _9927  name type: 0
    object _9926 = NOVALUE; // 18172 9926
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg db_table_size pc: 1 op: STARTLINE (58)

    /** eds.e:2369		if not equal(table_name, current_table_name) then*/
    // SubProg db_table_size pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_table_size pc: 5 op: EQUAL (153)
    if (_table_name_18170 == _44current_table_name_16087)
    _9926 = 1;
    else if (IS_ATOM_INT(_table_name_18170) && IS_ATOM_INT(_44current_table_name_16087))
    _9926 = 0;
    else
    _9926 = (compare(_table_name_18170, _44current_table_name_16087) == 0);
    // SubProg db_table_size pc: 9 op: NOT_IFW (108)
    if (_9926 != 0)
    goto L1; // [9] 42
    _9926 = NOVALUE;
    // SubProg db_table_size pc: 12 op: STARTLINE (58)

    /** eds.e:2370			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_table_size pc: 14 op: PROC (27)
    RefDS(_table_name_18170);
    _9928 = _44db_select_table(_table_name_18170);
    // SubProg db_table_size pc: 18 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9928, 0)){
        DeRef(_9928);
        _9928 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_9928);
    _9928 = NOVALUE;
    // SubProg db_table_size pc: 22 op: STARTLINE (58)

    /** eds.e:2371				fatal(NO_TABLE, "invalid table name given", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 24 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_18170);
    ((intptr_t*)_2)[1] = _table_name_18170;
    _9931 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 28 op: PROC (27)
    RefDS(_9736);
    RefDS(_9930);
    _44fatal(903, _9736, _9930, _9931);
    _9931 = NOVALUE;
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
    if (binary_op_a(NOTEQ, _44current_table_pos_16086, -1)){
        goto L3; // [46] 69
    }
    // SubProg db_table_size pc: 50 op: STARTLINE (58)

    /** eds.e:2377			fatal(NO_TABLE, "no table selected", "db_table_size", {table_name})*/
    // SubProg db_table_size pc: 52 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_table_name_18170);
    ((intptr_t*)_2)[1] = _table_name_18170;
    _9933 = MAKE_SEQ(_1);
    // SubProg db_table_size pc: 56 op: PROC (27)
    RefDS(_9740);
    RefDS(_9930);
    _44fatal(903, _9740, _9930, _9933);
    _9933 = NOVALUE;
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
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _9934 = SEQ_PTR(_44key_pointers_16092)->length;
    }
    else {
        _9934 = 1;
    }
    // SubProg db_table_size pc: 76 op: RETURNF (28)

// Exiting block BLOCK: db_table_size

// block var table_name_18170
    DeRef(_table_name_18170);
    return _9934;
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
// skipping _9952  name type: 0
// skipping _9951  name type: 0
// skipping _9950  name type: 0
    object _9949 = NOVALUE; // 18212 9949
    object _9948 = NOVALUE; // 18206 9948
    object _9947 = NOVALUE; // 18205 9947
    object _9946 = NOVALUE; // 18204 9946
    object _9945 = NOVALUE; // 18203 9945
// skipping _9944  name type: 0
    object _9943 = NOVALUE; // 18201 9943
    object _9942 = NOVALUE; // 18199 9942
// skipping _9941  name type: 0
    object _9940 = NOVALUE; // 18196 9940
// skipping _9938  name type: 0
    object _9937 = NOVALUE; // 18193 9937
// skipping _9936  name type: 0
    object _9935 = NOVALUE; // 18190 9935
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
    if (_table_name_18186 == _44current_table_name_16087)
    _9935 = 1;
    else if (IS_ATOM_INT(_table_name_18186) && IS_ATOM_INT(_44current_table_name_16087))
    _9935 = 0;
    else
    _9935 = (compare(_table_name_18186, _44current_table_name_16087) == 0);
    // SubProg db_record_data pc: 11 op: NOT_IFW (108)
    if (_9935 != 0)
    goto L1; // [11] 44
    _9935 = NOVALUE;
    // SubProg db_record_data pc: 14 op: STARTLINE (58)

    /** eds.e:2418			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_data pc: 16 op: PROC (27)
    RefDS(_table_name_18186);
    _9937 = _44db_select_table(_table_name_18186);
    // SubProg db_record_data pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9937, 0)){
        DeRef(_9937);
        _9937 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_9937);
    _9937 = NOVALUE;
    // SubProg db_record_data pc: 24 op: STARTLINE (58)

    /** eds.e:2419				fatal(NO_TABLE, "invalid table name given", "db_record_data", {key_location, table_name})*/
    // SubProg db_record_data pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_18186);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18185;
    ((intptr_t *)_2)[2] = _table_name_18186;
    _9940 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 30 op: PROC (27)
    RefDS(_9736);
    RefDS(_9939);
    _44fatal(903, _9736, _9939, _9940);
    _9940 = NOVALUE;
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
    if (binary_op_a(NOTEQ, _44current_table_pos_16086, -1)){
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
    _9942 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 58 op: PROC (27)
    RefDS(_9740);
    RefDS(_9939);
    _44fatal(903, _9740, _9939, _9942);
    _9942 = NOVALUE;
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
    _9943 = (_key_location_18185 < 1);
    // SubProg db_record_data pc: 77 op: SC1_OR_IF (147)
    if (_9943 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_data pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _9945 = SEQ_PTR(_44key_pointers_16092)->length;
    }
    else {
        _9945 = 1;
    }
    // SubProg db_record_data pc: 86 op: GREATER (6)
    _9946 = (_key_location_18185 > _9945);
    _9945 = NOVALUE;
    // SubProg db_record_data pc: 90 op: NOP1 (159)
    // SubProg db_record_data pc: 91 op: IF (20)
    if (_9946 == 0)
    {
        DeRef(_9946);
        _9946 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_9946);
        _9946 = NOVALUE;
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
    _9947 = MAKE_SEQ(_1);
    // SubProg db_record_data pc: 101 op: PROC (27)
    RefDS(_9864);
    RefDS(_9939);
    _44fatal(905, _9864, _9939, _9947);
    _9947 = NOVALUE;
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
    DeRef(_9943);
    _9943 = NOVALUE;
    return -1;
    // SubProg db_record_data pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 18183 op: 159
    // SubProg db_record_data pc: 114 op: STARTLINE (58)

    /** eds.e:2433		io:seek(current_db, key_pointers[key_location])*/
    // SubProg db_record_data pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_data pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16092);
    _9948 = (object)*(((s1_ptr)_2)->base + _key_location_18185);
    // SubProg db_record_data pc: 124 op: ASSIGN (18)
    Ref(_9948);
    DeRef(_pos_inlined_seek_at_123_18208);
    _pos_inlined_seek_at_123_18208 = _9948;
    _9948 = NOVALUE;
    // SubProg db_record_data pc: 127 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg db_record_data pc: 129 op: RIGHT_BRACE_2 (85)
    Ref(_pos_inlined_seek_at_123_18208);
    DeRef(_seek_1__tmp_at126_18210);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    if (IS_SEQUENCE(_44vLastErrors_16109)){
            _9949 = SEQ_PTR(_44vLastErrors_16109)->length;
    }
    else {
        _9949 = 1;
    }
    // SubProg db_record_data pc: 147 op: GREATER_IFW_I (124)
    if (_9949 <= 0)
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
    DeRef(_9943);
    _9943 = NOVALUE;
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
    ((intptr_t *)_2)[1] = _44current_db_16085;
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
    DeRef(_9943);
    _9943 = NOVALUE;
    return _data_value_18188;
    // SubProg db_record_data pc: 190 op: BADRETURNF (43)
    ;
}


object _44db_fetch_record(object _key_18221, object _table_name_18222)
{
    object _pos_18223 = NOVALUE;
    object _9955 = NOVALUE; // 18227 9955
// skipping _9954  name type: 0
// skipping _9953  name type: 0
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
    _9955 = _44db_record_data(_pos_18223, _table_name_18222);
    // SubProg db_fetch_record pc: 23 op: RETURNF (28)

// Exiting block BLOCK: db_fetch_record

// block var key_18221
    DeRef(_key_18221);

// block var table_name_18222
    DeRefDS(_table_name_18222);

// block var pos_18223
    return _9955;
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
    DeRef(_9955);
    _9955 = NOVALUE;
    return _pos_18223;
    // SubProg db_fetch_record pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 18219 op: 159
    // SubProg db_fetch_record pc: 37 op: BADRETURNF (43)
    ;
}


object _44db_record_key(object _key_location_18231, object _table_name_18232)
{
    object _9970 = NOVALUE; // 18251 9970
    object _9969 = NOVALUE; // 18250 9969
    object _9968 = NOVALUE; // 18249 9968
    object _9967 = NOVALUE; // 18248 9967
    object _9966 = NOVALUE; // 18247 9966
// skipping _9965  name type: 0
    object _9964 = NOVALUE; // 18245 9964
    object _9963 = NOVALUE; // 18243 9963
// skipping _9962  name type: 0
    object _9961 = NOVALUE; // 18240 9961
// skipping _9959  name type: 0
    object _9958 = NOVALUE; // 18237 9958
// skipping _9957  name type: 0
    object _9956 = NOVALUE; // 18234 9956
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
    if (_table_name_18232 == _44current_table_name_16087)
    _9956 = 1;
    else if (IS_ATOM_INT(_table_name_18232) && IS_ATOM_INT(_44current_table_name_16087))
    _9956 = 0;
    else
    _9956 = (compare(_table_name_18232, _44current_table_name_16087) == 0);
    // SubProg db_record_key pc: 11 op: NOT_IFW (108)
    if (_9956 != 0)
    goto L1; // [11] 44
    _9956 = NOVALUE;
    // SubProg db_record_key pc: 14 op: STARTLINE (58)

    /** eds.e:2520			if db_select_table(table_name) != DB_OK then*/
    // SubProg db_record_key pc: 16 op: PROC (27)
    RefDS(_table_name_18232);
    _9958 = _44db_select_table(_table_name_18232);
    // SubProg db_record_key pc: 20 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _9958, 0)){
        DeRef(_9958);
        _9958 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_9958);
    _9958 = NOVALUE;
    // SubProg db_record_key pc: 24 op: STARTLINE (58)

    /** eds.e:2521				fatal(NO_TABLE, "invalid table name given", "db_record_key", {key_location, table_name})*/
    // SubProg db_record_key pc: 26 op: RIGHT_BRACE_2 (85)
    RefDS(_table_name_18232);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_18231;
    ((intptr_t *)_2)[2] = _table_name_18232;
    _9961 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 30 op: PROC (27)
    RefDS(_9736);
    RefDS(_9960);
    _44fatal(903, _9736, _9960, _9961);
    _9961 = NOVALUE;
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
    if (binary_op_a(NOTEQ, _44current_table_pos_16086, -1)){
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
    _9963 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 58 op: PROC (27)
    RefDS(_9740);
    RefDS(_9960);
    _44fatal(903, _9740, _9960, _9963);
    _9963 = NOVALUE;
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
    _9964 = (_key_location_18231 < 1);
    // SubProg db_record_key pc: 77 op: SC1_OR_IF (147)
    if (_9964 != 0) {
        goto L4; // [77] 95
    }
    // SubProg db_record_key pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 83 op: LENGTH (42)
    if (IS_SEQUENCE(_44key_pointers_16092)){
            _9966 = SEQ_PTR(_44key_pointers_16092)->length;
    }
    else {
        _9966 = 1;
    }
    // SubProg db_record_key pc: 86 op: GREATER (6)
    _9967 = (_key_location_18231 > _9966);
    _9966 = NOVALUE;
    // SubProg db_record_key pc: 90 op: NOP1 (159)
    // SubProg db_record_key pc: 91 op: IF (20)
    if (_9967 == 0)
    {
        DeRef(_9967);
        _9967 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_9967);
        _9967 = NOVALUE;
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
    _9968 = MAKE_SEQ(_1);
    // SubProg db_record_key pc: 101 op: PROC (27)
    RefDS(_9864);
    RefDS(_9960);
    _44fatal(905, _9864, _9960, _9968);
    _9968 = NOVALUE;
    // SubProg db_record_key pc: 107 op: STARTLINE (58)

    /** eds.e:2532			return -1*/
    // SubProg db_record_key pc: 109 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRef(_table_name_18232);
    DeRef(_9964);
    _9964 = NOVALUE;
    return -1;
    // SubProg db_record_key pc: 113 op: NOP1 (159)
L5: // addr: 114 pc: 113 sub: 18229 op: 159
    // SubProg db_record_key pc: 114 op: STARTLINE (58)

    /** eds.e:2534		return key_value(key_pointers[key_location])*/
    // SubProg db_record_key pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_record_key pc: 118 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_44key_pointers_16092);
    _9969 = (object)*(((s1_ptr)_2)->base + _key_location_18231);
    // SubProg db_record_key pc: 122 op: PROC (27)
    Ref(_9969);
    _9970 = _44key_value(_9969);
    _9969 = NOVALUE;
    // SubProg db_record_key pc: 126 op: RETURNF (28)

// Exiting block BLOCK: db_record_key

// block var key_location_18231

// block var table_name_18232
    DeRef(_table_name_18232);
    DeRef(_9964);
    _9964 = NOVALUE;
    return _9970;
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
    object _10069 = NOVALUE; // 18428 10069
    object _10068 = NOVALUE; // 18427 10068
    object _10067 = NOVALUE; // 18426 10067
    object _10066 = NOVALUE; // 18425 10066
    object _10065 = NOVALUE; // 18424 10065
// skipping _10038  name type: 0
    object _10037 = NOVALUE; // 18372 10037
// skipping _10036  name type: 0
    object _10035 = NOVALUE; // 18366 10035
    object _10034 = NOVALUE; // 18363 10034
    object _10033 = NOVALUE; // 18362 10033
    object _10032 = NOVALUE; // 18361 10032
    object _10031 = NOVALUE; // 18360 10031
// skipping _10030  name type: 0
// skipping _10029  name type: 0
// skipping _10028  name type: 0
    object _10027 = NOVALUE; // 18355 10027
    object _10026 = NOVALUE; // 18354 10026
// skipping _10025  name type: 0
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
    _10069 = _14seek(_44current_db_16085, _recid_18345);
    // SubProg db_replace_recid pc: 12 op: DEREF_TEMP (208)
    DeRef(_10069);
    _10069 = NOVALUE;
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
        _10026 = _data_ptr_18349 - 4;
        if ((object)((uintptr_t)_10026 +(uintptr_t) HIGH_BITS) >= 0){
            _10026 = NewDouble((eudouble)_10026);
        }
    }
    else {
        _10026 = NewDouble(DBL_PTR(_data_ptr_18349)->dbl - (eudouble)4);
    }
    // SubProg db_replace_recid pc: 27 op: PROC (27)
    _10068 = _14seek(_44current_db_16085, _10026);
    _10026 = NOVALUE;
    // SubProg db_replace_recid pc: 32 op: DEREF_TEMP (208)
    DeRef(_10068);
    _10068 = NOVALUE;
    // SubProg db_replace_recid pc: 34 op: STARTLINE (58)

    /** eds.e:2763		old_size = get4()-4*/
    // SubProg db_replace_recid pc: 36 op: PROC (27)
    _10027 = _44get4();
    // SubProg db_replace_recid pc: 39 op: MINUS (10)
    DeRef(_old_size_18347);
    if (IS_ATOM_INT(_10027)) {
        _old_size_18347 = _10027 - 4;
        if ((object)((uintptr_t)_old_size_18347 +(uintptr_t) HIGH_BITS) >= 0){
            _old_size_18347 = NewDouble((eudouble)_old_size_18347);
        }
    }
    else {
        _old_size_18347 = binary_op(MINUS, _10027, 4);
    }
    DeRef(_10027);
    _10027 = NOVALUE;
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
        _10031 = (_new_size_18348 <= _old_size_18347);
    }
    else {
        _10031 = ((eudouble)_new_size_18348 <= DBL_PTR(_old_size_18347)->dbl);
    }
    // SubProg db_replace_recid pc: 62 op: SC1_AND_IF (146)
    if (_10031 == 0) {
        goto L1; // [62] 92
    }
    // SubProg db_replace_recid pc: 66 op: MINUS (10)
    if (IS_ATOM_INT(_old_size_18347)) {
        _10033 = _old_size_18347 - 16;
        if ((object)((uintptr_t)_10033 +(uintptr_t) HIGH_BITS) >= 0){
            _10033 = NewDouble((eudouble)_10033);
        }
    }
    else {
        _10033 = NewDouble(DBL_PTR(_old_size_18347)->dbl - (eudouble)16);
    }
    // SubProg db_replace_recid pc: 70 op: GREATEREQ (2)
    if (IS_ATOM_INT(_10033)) {
        _10034 = (_new_size_18348 >= _10033);
    }
    else {
        _10034 = ((eudouble)_new_size_18348 >= DBL_PTR(_10033)->dbl);
    }
    DeRef(_10033);
    _10033 = NOVALUE;
    // SubProg db_replace_recid pc: 74 op: NOP1 (159)
    // SubProg db_replace_recid pc: 75 op: IF (20)
    if (_10034 == 0)
    {
        DeRef(_10034);
        _10034 = NOVALUE;
        goto L1; // [75] 92
    }
    else{
        DeRef(_10034);
        _10034 = NOVALUE;
    }
    // SubProg db_replace_recid pc: 78 op: STARTLINE (58)

    /** eds.e:2769			seek(current_db, data_ptr)*/
    // SubProg db_replace_recid pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 82 op: PROC (27)
    Ref(_data_ptr_18349);
    _10067 = _14seek(_44current_db_16085, _data_ptr_18349);
    // SubProg db_replace_recid pc: 87 op: DEREF_TEMP (208)
    DeRef(_10067);
    _10067 = NOVALUE;
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
    _10035 = _new_size_18348 + 8;
    if ((object)((uintptr_t)_10035 + (uintptr_t)HIGH_BITS) >= 0){
        _10035 = NewDouble((eudouble)_10035);
    }
    // SubProg db_replace_recid pc: 103 op: PROC (27)
    _0 = _data_ptr_18349;
    _data_ptr_18349 = _44db_allocate(_10035);
    DeRef(_0);
    _10035 = NOVALUE;
    // SubProg db_replace_recid pc: 107 op: STARTLINE (58)

    /** eds.e:2775			seek(current_db, recid)*/
    // SubProg db_replace_recid pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 111 op: PROC (27)
    _10066 = _14seek(_44current_db_16085, _recid_18345);
    // SubProg db_replace_recid pc: 116 op: DEREF_TEMP (208)
    DeRef(_10066);
    _10066 = NOVALUE;
    // SubProg db_replace_recid pc: 118 op: STARTLINE (58)

    /** eds.e:2776			put4(data_ptr)*/
    // SubProg db_replace_recid pc: 120 op: STARTLINE (58)

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    // SubProg db_replace_recid pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 124 op: POKE4 (138)
    if (IS_ATOM_INT(_44mem0_16127)){
        poke4_addr = (uint32_t *)_44mem0_16127;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_44mem0_16127)->dbl);
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
    _1 = (object)SEQ_PTR(_44memseq_16362);
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
    EPuts(_44current_db_16085, _put4_1__tmp_at111_18370); // DJP 
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
    _10065 = _14seek(_44current_db_16085, _data_ptr_18349);
    // SubProg db_replace_recid pc: 155 op: DEREF_TEMP (208)
    DeRef(_10065);
    _10065 = NOVALUE;
    // SubProg db_replace_recid pc: 157 op: STARTLINE (58)

    /** eds.e:2781			data_string &= repeat( 0, 8 )*/
    // SubProg db_replace_recid pc: 159 op: REPEAT (32)
    _10037 = Repeat(0, 8);
    // SubProg db_replace_recid pc: 163 op: CONCAT (15)
    Concat((object_ptr)&_data_string_18350, _data_string_18350, _10037);
    DeRefDS(_10037);
    _10037 = NOVALUE;
    // SubProg db_replace_recid pc: 167 op: NOP1 (159)
L2: // addr: 168 pc: 167 sub: 18343 op: 159
    // SubProg db_replace_recid pc: 168 op: STARTLINE (58)

    /** eds.e:2784		putn(data_string)*/
    // SubProg db_replace_recid pc: 170 op: STARTLINE (58)

    /** eds.e:448		puts(current_db, s)*/
    // SubProg db_replace_recid pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg db_replace_recid pc: 174 op: PUTS (44)
    EPuts(_44current_db_16085, _data_string_18350); // DJP 
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
    DeRef(_10031);
    _10031 = NOVALUE;
    return;
    // SubProg db_replace_recid pc: 187 op: BADRETURNF (43)
    ;
}



// 0xE7625984
