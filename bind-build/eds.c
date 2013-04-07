// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _48fatal(object _errcode_17739, object _msg_17740, object _routine_name_17741, object _parms_17742)
{
    object _9961 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:231		vLastErrors = append(vLastErrors, {errcode, msg, routine_name, parms})*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _errcode_17739;
    RefDS(_msg_17740);
    ((intptr_t*)_2)[2] = _msg_17740;
    RefDS(_routine_name_17741);
    ((intptr_t*)_2)[3] = _routine_name_17741;
    RefDS(_parms_17742);
    ((intptr_t*)_2)[4] = _parms_17742;
    _9961 = MAKE_SEQ(_1);
    RefDS(_9961);
    Append(&_48vLastErrors_17736, _48vLastErrors_17736, _9961);
    DeRefDS(_9961);
    _9961 = NOVALUE;

    /** eds.e:232		if db_fatal_id >= 0 then*/

    /** eds.e:235	end procedure*/
    DeRefDSi(_msg_17740);
    DeRefDSi(_routine_name_17741);
    DeRefDS(_parms_17742);
    return;
    ;
}


object _48get4()
{
    object _9977 = NOVALUE;
    object _9976 = NOVALUE;
    object _9975 = NOVALUE;
    object _9974 = NOVALUE;
    object _9973 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:250		poke(mem0, getc(current_db))*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9973 = getc((FILE*)xstdin);
        }
        else{
            _9973 = getc(last_r_file_ptr);
        }
    }
    else{
        _9973 = getc(last_r_file_ptr);
    }
    if (IS_ATOM_INT(_48mem0_17754)){
        poke_addr = (uint8_t *)_48mem0_17754;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke_addr = (uint8_t)_9973;
    _9973 = NOVALUE;

    /** eds.e:251		poke(mem1, getc(current_db))*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9974 = getc((FILE*)xstdin);
        }
        else{
            _9974 = getc(last_r_file_ptr);
        }
    }
    else{
        _9974 = getc(last_r_file_ptr);
    }
    if (IS_ATOM_INT(_48mem1_17755)){
        poke_addr = (uint8_t *)_48mem1_17755;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_48mem1_17755)->dbl);
    }
    *poke_addr = (uint8_t)_9974;
    _9974 = NOVALUE;

    /** eds.e:252		poke(mem2, getc(current_db))*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9975 = getc((FILE*)xstdin);
        }
        else{
            _9975 = getc(last_r_file_ptr);
        }
    }
    else{
        _9975 = getc(last_r_file_ptr);
    }
    if (IS_ATOM_INT(_48mem2_17756)){
        poke_addr = (uint8_t *)_48mem2_17756;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_48mem2_17756)->dbl);
    }
    *poke_addr = (uint8_t)_9975;
    _9975 = NOVALUE;

    /** eds.e:253		poke(mem3, getc(current_db))*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _9976 = getc((FILE*)xstdin);
        }
        else{
            _9976 = getc(last_r_file_ptr);
        }
    }
    else{
        _9976 = getc(last_r_file_ptr);
    }
    if (IS_ATOM_INT(_48mem3_17757)){
        poke_addr = (uint8_t *)_48mem3_17757;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_48mem3_17757)->dbl);
    }
    *poke_addr = (uint8_t)_9976;
    _9976 = NOVALUE;

    /** eds.e:254		return peek4u(mem0)*/
    if (IS_ATOM_INT(_48mem0_17754)) {
        _9977 = (object)*(uint32_t *)_48mem0_17754;
        if ((uintptr_t)_9977 > (uintptr_t)MAXINT){
            _9977 = NewDouble((eudouble)(uintptr_t)_9977);
        }
    }
    else {
        _9977 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        if ((uintptr_t)_9977 > (uintptr_t)MAXINT){
            _9977 = NewDouble((eudouble)(uintptr_t)_9977);
        }
    }
    return _9977;
    ;
}


object _48get_string()
{
    object _where_inlined_where_at_31_17782 = NOVALUE;
    object _s_17771 = NOVALUE;
    object _c_17772 = NOVALUE;
    object _i_17773 = NOVALUE;
    object _9990 = NOVALUE;
    object _9987 = NOVALUE;
    object _9985 = NOVALUE;
    object _9983 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:263		s = repeat(0, 256)*/
    DeRefi(_s_17771);
    _s_17771 = Repeat(0, 256);

    /** eds.e:264		i = 0*/
    _i_17773 = 0;

    /** eds.e:265		while c with entry do*/
    goto L1; // [14] 89
L2: 
    if (_c_17772 == 0)
    {
        goto L3; // [19] 101
    }
    else{
    }

    /** eds.e:266			if c = -1 then*/
    if (_c_17772 != -1)
    goto L4; // [24] 54

    /** eds.e:267				fatal(MISSING_END, "string is missing 0 terminator", "get_string", {io:where(current_db)})*/

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    DeRef(_where_inlined_where_at_31_17782);
    _where_inlined_where_at_31_17782 = machine(20, _48current_db_17712);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_31_17782);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_31_17782;
    _9983 = MAKE_SEQ(_1);
    RefDS(_9981);
    RefDS(_9982);
    _48fatal(900, _9981, _9982, _9983);
    _9983 = NOVALUE;

    /** eds.e:268				exit*/
    goto L3; // [51] 101
L4: 

    /** eds.e:270			i += 1*/
    _i_17773 = _i_17773 + 1;

    /** eds.e:271			if i > length(s) then*/
    if (IS_SEQUENCE(_s_17771)){
            _9985 = SEQ_PTR(_s_17771)->length;
    }
    else {
        _9985 = 1;
    }
    if (_i_17773 <= _9985)
    goto L5; // [65] 80

    /** eds.e:272				s &= repeat(0, 256)*/
    _9987 = Repeat(0, 256);
    Concat((object_ptr)&_s_17771, _s_17771, _9987);
    DeRefDS(_9987);
    _9987 = NOVALUE;
L5: 

    /** eds.e:274			s[i] = c*/
    _2 = (object)SEQ_PTR(_s_17771);
    _2 = (object)(((s1_ptr)_2)->base + _i_17773);
    *(intptr_t *)_2 = _c_17772;

    /** eds.e:275		  entry*/
L1: 

    /** eds.e:276			c = getc(current_db)*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17772 = getc((FILE*)xstdin);
        }
        else{
            _c_17772 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17772 = getc(last_r_file_ptr);
    }

    /** eds.e:277		end while*/
    goto L2; // [98] 17
L3: 

    /** eds.e:278		return s[1..i]*/
    rhs_slice_target = (object_ptr)&_9990;
    RHS_Slice(_s_17771, 1, _i_17773);
    DeRefDSi(_s_17771);
    return _9990;
    ;
}


object _48equal_string(object _target_17794)
{
    object _c_17795 = NOVALUE;
    object _i_17796 = NOVALUE;
    object _where_inlined_where_at_27_17802 = NOVALUE;
    object _10001 = NOVALUE;
    object _10000 = NOVALUE;
    object _9997 = NOVALUE;
    object _9995 = NOVALUE;
    object _9993 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:286		i = 0*/
    _i_17796 = 0;

    /** eds.e:287		while c with entry do*/
    goto L1; // [10] 94
L2: 
    if (_c_17795 == 0)
    {
        goto L3; // [15] 106
    }
    else{
    }

    /** eds.e:288			if c = -1 then*/
    if (_c_17795 != -1)
    goto L4; // [20] 52

    /** eds.e:289				fatal(MISSING_END, "string is missing 0 terminator", "equal_string", {io:where(current_db)})*/

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    DeRef(_where_inlined_where_at_27_17802);
    _where_inlined_where_at_27_17802 = machine(20, _48current_db_17712);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_where_inlined_where_at_27_17802);
    ((intptr_t*)_2)[1] = _where_inlined_where_at_27_17802;
    _9993 = MAKE_SEQ(_1);
    RefDS(_9981);
    RefDS(_9992);
    _48fatal(900, _9981, _9992, _9993);
    _9993 = NOVALUE;

    /** eds.e:290				return DB_FATAL_FAIL*/
    DeRefDS(_target_17794);
    return -404;
L4: 

    /** eds.e:292			i += 1*/
    _i_17796 = _i_17796 + 1;

    /** eds.e:293			if i > length(target) then*/
    if (IS_SEQUENCE(_target_17794)){
            _9995 = SEQ_PTR(_target_17794)->length;
    }
    else {
        _9995 = 1;
    }
    if (_i_17796 <= _9995)
    goto L5; // [63] 74

    /** eds.e:294				return 0*/
    DeRefDS(_target_17794);
    return 0;
L5: 

    /** eds.e:296			if target[i] != c then*/
    _2 = (object)SEQ_PTR(_target_17794);
    _9997 = (object)*(((s1_ptr)_2)->base + _i_17796);
    if (binary_op_a(EQUALS, _9997, _c_17795)){
        _9997 = NOVALUE;
        goto L6; // [80] 91
    }
    _9997 = NOVALUE;

    /** eds.e:297				return 0*/
    DeRefDS(_target_17794);
    return 0;
L6: 

    /** eds.e:299		  entry*/
L1: 

    /** eds.e:300			c = getc(current_db)*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17795 = getc((FILE*)xstdin);
        }
        else{
            _c_17795 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17795 = getc(last_r_file_ptr);
    }

    /** eds.e:301		end while*/
    goto L2; // [103] 13
L3: 

    /** eds.e:302		return (i = length(target))*/
    if (IS_SEQUENCE(_target_17794)){
            _10000 = SEQ_PTR(_target_17794)->length;
    }
    else {
        _10000 = 1;
    }
    _10001 = (_i_17796 == _10000);
    _10000 = NOVALUE;
    DeRefDS(_target_17794);
    return _10001;
    ;
}


object _48decompress(object _c_17853)
{
    object _s_17854 = NOVALUE;
    object _len_17855 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_176_17891 = NOVALUE;
    object _ieee32_inlined_float32_to_atom_at_173_17890 = NOVALUE;
    object _float64_to_atom_inlined_float64_to_atom_at_251_17904 = NOVALUE;
    object _ieee64_inlined_float64_to_atom_at_248_17903 = NOVALUE;
    object _10070 = NOVALUE;
    object _10069 = NOVALUE;
    object _10068 = NOVALUE;
    object _10065 = NOVALUE;
    object _10060 = NOVALUE;
    object _10059 = NOVALUE;
    object _10058 = NOVALUE;
    object _10057 = NOVALUE;
    object _10056 = NOVALUE;
    object _10055 = NOVALUE;
    object _10054 = NOVALUE;
    object _10053 = NOVALUE;
    object _10052 = NOVALUE;
    object _10051 = NOVALUE;
    object _10050 = NOVALUE;
    object _10049 = NOVALUE;
    object _10048 = NOVALUE;
    object _10047 = NOVALUE;
    object _10046 = NOVALUE;
    object _10045 = NOVALUE;
    object _10044 = NOVALUE;
    object _10043 = NOVALUE;
    object _10042 = NOVALUE;
    object _10041 = NOVALUE;
    object _10039 = NOVALUE;
    object _10038 = NOVALUE;
    object _10037 = NOVALUE;
    object _10036 = NOVALUE;
    object _10035 = NOVALUE;
    object _10034 = NOVALUE;
    object _10033 = NOVALUE;
    object _10032 = NOVALUE;
    object _10031 = NOVALUE;
    object _10028 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:332		if c = 0 then*/
    if (_c_17853 != 0)
    goto L1; // [5] 34

    /** eds.e:333			c = getc(current_db)*/
    if (_48current_db_17712 != last_r_file_no) {
        last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
        last_r_file_no = _48current_db_17712;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_17853 = getc((FILE*)xstdin);
        }
        else{
            _c_17853 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_17853 = getc(last_r_file_ptr);
    }

    /** eds.e:334			if c < I2B then*/
    if (_c_17853 >= 249)
    goto L2; // [18] 33

    /** eds.e:335				return c + MIN1B*/
    _10028 = _c_17853 + -9;
    DeRef(_s_17854);
    return _10028;
L2: 
L1: 

    /** eds.e:339		switch c with fallthru do*/
    _0 = _c_17853;
    switch ( _0 ){ 

        /** eds.e:340			case I2B then*/
        case 249:

        /** eds.e:341				return getc(current_db) +*/
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10031 = getc((FILE*)xstdin);
            }
            else{
                _10031 = getc(last_r_file_ptr);
            }
        }
        else{
            _10031 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10032 = getc((FILE*)xstdin);
            }
            else{
                _10032 = getc(last_r_file_ptr);
            }
        }
        else{
            _10032 = getc(last_r_file_ptr);
        }
        _10033 = 256 * _10032;
        _10032 = NOVALUE;
        _10034 = _10031 + _10033;
        _10031 = NOVALUE;
        _10033 = NOVALUE;
        _10035 = _10034 + _48MIN2B_17833;
        if ((object)((uintptr_t)_10035 + (uintptr_t)HIGH_BITS) >= 0){
            _10035 = NewDouble((eudouble)_10035);
        }
        _10034 = NOVALUE;
        DeRef(_s_17854);
        DeRef(_10028);
        _10028 = NOVALUE;
        return _10035;

        /** eds.e:345			case I3B then*/
        case 250:

        /** eds.e:346				return getc(current_db) +*/
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10036 = getc((FILE*)xstdin);
            }
            else{
                _10036 = getc(last_r_file_ptr);
            }
        }
        else{
            _10036 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10037 = getc((FILE*)xstdin);
            }
            else{
                _10037 = getc(last_r_file_ptr);
            }
        }
        else{
            _10037 = getc(last_r_file_ptr);
        }
        _10038 = 256 * _10037;
        _10037 = NOVALUE;
        _10039 = _10036 + _10038;
        _10036 = NOVALUE;
        _10038 = NOVALUE;
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10041 = getc((FILE*)xstdin);
            }
            else{
                _10041 = getc(last_r_file_ptr);
            }
        }
        else{
            _10041 = getc(last_r_file_ptr);
        }
        _10042 = 65536 * _10041;
        _10041 = NOVALUE;
        _10043 = _10039 + _10042;
        _10039 = NOVALUE;
        _10042 = NOVALUE;
        _10044 = _10043 + _48MIN3B_17840;
        if ((object)((uintptr_t)_10044 + (uintptr_t)HIGH_BITS) >= 0){
            _10044 = NewDouble((eudouble)_10044);
        }
        _10043 = NOVALUE;
        DeRef(_s_17854);
        DeRef(_10028);
        _10028 = NOVALUE;
        DeRef(_10035);
        _10035 = NOVALUE;
        return _10044;

        /** eds.e:351			case I4B then*/
        case 251:

        /** eds.e:352				return get4() + MIN4B*/
        _10045 = _48get4();
        if (IS_ATOM_INT(_10045) && IS_ATOM_INT(_48MIN4B_17847)) {
            _10046 = _10045 + _48MIN4B_17847;
            if ((object)((uintptr_t)_10046 + (uintptr_t)HIGH_BITS) >= 0){
                _10046 = NewDouble((eudouble)_10046);
            }
        }
        else {
            _10046 = binary_op(PLUS, _10045, _48MIN4B_17847);
        }
        DeRef(_10045);
        _10045 = NOVALUE;
        DeRef(_s_17854);
        DeRef(_10028);
        _10028 = NOVALUE;
        DeRef(_10044);
        _10044 = NOVALUE;
        DeRef(_10035);
        _10035 = NOVALUE;
        return _10046;

        /** eds.e:354			case F4B then*/
        case 252:

        /** eds.e:355				return convert:float32_to_atom({getc(current_db), getc(current_db),*/
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10047 = getc((FILE*)xstdin);
            }
            else{
                _10047 = getc(last_r_file_ptr);
            }
        }
        else{
            _10047 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10048 = getc((FILE*)xstdin);
            }
            else{
                _10048 = getc(last_r_file_ptr);
            }
        }
        else{
            _10048 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10049 = getc((FILE*)xstdin);
            }
            else{
                _10049 = getc(last_r_file_ptr);
            }
        }
        else{
            _10049 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10050 = getc((FILE*)xstdin);
            }
            else{
                _10050 = getc(last_r_file_ptr);
            }
        }
        else{
            _10050 = getc(last_r_file_ptr);
        }
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _10047;
        ((intptr_t*)_2)[2] = _10048;
        ((intptr_t*)_2)[3] = _10049;
        ((intptr_t*)_2)[4] = _10050;
        _10051 = MAKE_SEQ(_1);
        _10050 = NOVALUE;
        _10049 = NOVALUE;
        _10048 = NOVALUE;
        _10047 = NOVALUE;
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_17890);
        _ieee32_inlined_float32_to_atom_at_173_17890 = _10051;
        _10051 = NOVALUE;

        /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
        DeRef(_float32_to_atom_inlined_float32_to_atom_at_176_17891);
        _float32_to_atom_inlined_float32_to_atom_at_176_17891 = machine(49, _ieee32_inlined_float32_to_atom_at_173_17890);
        DeRefi(_ieee32_inlined_float32_to_atom_at_173_17890);
        _ieee32_inlined_float32_to_atom_at_173_17890 = NOVALUE;
        DeRef(_s_17854);
        DeRef(_10028);
        _10028 = NOVALUE;
        DeRef(_10046);
        _10046 = NOVALUE;
        DeRef(_10044);
        _10044 = NOVALUE;
        DeRef(_10035);
        _10035 = NOVALUE;
        return _float32_to_atom_inlined_float32_to_atom_at_176_17891;

        /** eds.e:358			case F8B then*/
        case 253:

        /** eds.e:359				return convert:float64_to_atom({getc(current_db), getc(current_db),*/
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10052 = getc((FILE*)xstdin);
            }
            else{
                _10052 = getc(last_r_file_ptr);
            }
        }
        else{
            _10052 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10053 = getc((FILE*)xstdin);
            }
            else{
                _10053 = getc(last_r_file_ptr);
            }
        }
        else{
            _10053 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10054 = getc((FILE*)xstdin);
            }
            else{
                _10054 = getc(last_r_file_ptr);
            }
        }
        else{
            _10054 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10055 = getc((FILE*)xstdin);
            }
            else{
                _10055 = getc(last_r_file_ptr);
            }
        }
        else{
            _10055 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10056 = getc((FILE*)xstdin);
            }
            else{
                _10056 = getc(last_r_file_ptr);
            }
        }
        else{
            _10056 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10057 = getc((FILE*)xstdin);
            }
            else{
                _10057 = getc(last_r_file_ptr);
            }
        }
        else{
            _10057 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10058 = getc((FILE*)xstdin);
            }
            else{
                _10058 = getc(last_r_file_ptr);
            }
        }
        else{
            _10058 = getc(last_r_file_ptr);
        }
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _10059 = getc((FILE*)xstdin);
            }
            else{
                _10059 = getc(last_r_file_ptr);
            }
        }
        else{
            _10059 = getc(last_r_file_ptr);
        }
        _1 = NewS1(8);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _10052;
        ((intptr_t*)_2)[2] = _10053;
        ((intptr_t*)_2)[3] = _10054;
        ((intptr_t*)_2)[4] = _10055;
        ((intptr_t*)_2)[5] = _10056;
        ((intptr_t*)_2)[6] = _10057;
        ((intptr_t*)_2)[7] = _10058;
        ((intptr_t*)_2)[8] = _10059;
        _10060 = MAKE_SEQ(_1);
        _10059 = NOVALUE;
        _10058 = NOVALUE;
        _10057 = NOVALUE;
        _10056 = NOVALUE;
        _10055 = NOVALUE;
        _10054 = NOVALUE;
        _10053 = NOVALUE;
        _10052 = NOVALUE;
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_17903);
        _ieee64_inlined_float64_to_atom_at_248_17903 = _10060;
        _10060 = NOVALUE;

        /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
        DeRef(_float64_to_atom_inlined_float64_to_atom_at_251_17904);
        _float64_to_atom_inlined_float64_to_atom_at_251_17904 = machine(47, _ieee64_inlined_float64_to_atom_at_248_17903);
        DeRefi(_ieee64_inlined_float64_to_atom_at_248_17903);
        _ieee64_inlined_float64_to_atom_at_248_17903 = NOVALUE;
        DeRef(_s_17854);
        DeRef(_10028);
        _10028 = NOVALUE;
        DeRef(_10046);
        _10046 = NOVALUE;
        DeRef(_10044);
        _10044 = NOVALUE;
        DeRef(_10035);
        _10035 = NOVALUE;
        return _float64_to_atom_inlined_float64_to_atom_at_251_17904;

        /** eds.e:364			case else*/
        default:

        /** eds.e:366				if c = S1B then*/
        if (_c_17853 != 254)
        goto L3; // [273] 287

        /** eds.e:367					len = getc(current_db)*/
        if (_48current_db_17712 != last_r_file_no) {
            last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
            last_r_file_no = _48current_db_17712;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _len_17855 = getc((FILE*)xstdin);
            }
            else{
                _len_17855 = getc(last_r_file_ptr);
            }
        }
        else{
            _len_17855 = getc(last_r_file_ptr);
        }
        goto L4; // [284] 295
L3: 

        /** eds.e:369					len = get4()*/
        _len_17855 = _48get4();
        if (!IS_ATOM_INT(_len_17855)) {
            _1 = (object)(DBL_PTR(_len_17855)->dbl);
            DeRefDS(_len_17855);
            _len_17855 = _1;
        }
L4: 

        /** eds.e:371				s = repeat(0, len)*/
        DeRef(_s_17854);
        _s_17854 = Repeat(0, _len_17855);

        /** eds.e:372				for i = 1 to len do*/
        _10065 = _len_17855;
        {
            object _i_17913;
            _i_17913 = 1;
L5: 
            if (_i_17913 > _10065){
                goto L6; // [308] 362
            }

            /** eds.e:374					c = getc(current_db)*/
            if (_48current_db_17712 != last_r_file_no) {
                last_r_file_ptr = which_file(_48current_db_17712, EF_READ);
                last_r_file_no = _48current_db_17712;
            }
            if (last_r_file_ptr == xstdin) {
                if (in_from_keyb) {
                    _c_17853 = getc((FILE*)xstdin);
                }
                else{
                    _c_17853 = getc(last_r_file_ptr);
                }
            }
            else{
                _c_17853 = getc(last_r_file_ptr);
            }

            /** eds.e:375					if c < I2B then*/
            if (_c_17853 >= 249)
            goto L7; // [324] 341

            /** eds.e:376						s[i] = c + MIN1B*/
            _10068 = _c_17853 + -9;
            _2 = (object)SEQ_PTR(_s_17854);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_17854 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_17913);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _10068;
            if( _1 != _10068 ){
                DeRef(_1);
            }
            _10068 = NOVALUE;
            goto L8; // [338] 355
L7: 

            /** eds.e:378						s[i] = decompress(c)*/
            DeRef(_10069);
            _10069 = _c_17853;
            _10070 = _48decompress(_10069);
            _10069 = NOVALUE;
            _2 = (object)SEQ_PTR(_s_17854);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _s_17854 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _i_17913);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _10070;
            if( _1 != _10070 ){
                DeRef(_1);
            }
            _10070 = NOVALUE;
L8: 

            /** eds.e:380				end for*/
            _i_17913 = _i_17913 + 1;
            goto L5; // [357] 315
L6: 
            ;
        }

        /** eds.e:381				return s*/
        DeRef(_10028);
        _10028 = NOVALUE;
        DeRef(_10046);
        _10046 = NOVALUE;
        DeRef(_10044);
        _10044 = NOVALUE;
        DeRef(_10035);
        _10035 = NOVALUE;
        return _s_17854;
    ;}    ;
}


object _48compress(object _x_17924)
{
    object _x4_17925 = NOVALUE;
    object _s_17926 = NOVALUE;
    object _atom_to_float32_inlined_atom_to_float32_at_193_17960 = NOVALUE;
    object _float32_to_atom_inlined_float32_to_atom_at_204_17963 = NOVALUE;
    object _atom_to_float64_inlined_atom_to_float64_at_230_17968 = NOVALUE;
    object _10109 = NOVALUE;
    object _10108 = NOVALUE;
    object _10107 = NOVALUE;
    object _10105 = NOVALUE;
    object _10104 = NOVALUE;
    object _10102 = NOVALUE;
    object _10100 = NOVALUE;
    object _10099 = NOVALUE;
    object _10098 = NOVALUE;
    object _10096 = NOVALUE;
    object _10095 = NOVALUE;
    object _10094 = NOVALUE;
    object _10093 = NOVALUE;
    object _10092 = NOVALUE;
    object _10091 = NOVALUE;
    object _10090 = NOVALUE;
    object _10089 = NOVALUE;
    object _10088 = NOVALUE;
    object _10086 = NOVALUE;
    object _10085 = NOVALUE;
    object _10084 = NOVALUE;
    object _10083 = NOVALUE;
    object _10082 = NOVALUE;
    object _10081 = NOVALUE;
    object _10079 = NOVALUE;
    object _10078 = NOVALUE;
    object _10077 = NOVALUE;
    object _10076 = NOVALUE;
    object _10075 = NOVALUE;
    object _10074 = NOVALUE;
    object _10073 = NOVALUE;
    object _10072 = NOVALUE;
    object _10071 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:390		if integer(x) then*/
    if (IS_ATOM_INT(_x_17924))
    _10071 = 1;
    else if (IS_ATOM_DBL(_x_17924))
    _10071 = IS_ATOM_INT(DoubleToInt(_x_17924));
    else
    _10071 = 0;
    if (_10071 == 0)
    {
        _10071 = NOVALUE;
        goto L1; // [6] 184
    }
    else{
        _10071 = NOVALUE;
    }

    /** eds.e:391			if x >= MIN1B and x <= MAX1B then*/
    if (IS_ATOM_INT(_x_17924)) {
        _10072 = (_x_17924 >= -9);
    }
    else {
        _10072 = binary_op(GREATEREQ, _x_17924, -9);
    }
    if (IS_ATOM_INT(_10072)) {
        if (_10072 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_10072)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    if (IS_ATOM_INT(_x_17924)) {
        _10074 = (_x_17924 <= 239);
    }
    else {
        _10074 = binary_op(LESSEQ, _x_17924, 239);
    }
    if (_10074 == 0) {
        DeRef(_10074);
        _10074 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_10074) && DBL_PTR(_10074)->dbl == 0.0){
            DeRef(_10074);
            _10074 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_10074);
        _10074 = NOVALUE;
    }
    DeRef(_10074);
    _10074 = NOVALUE;

    /** eds.e:392				return {x - MIN1B}*/
    if (IS_ATOM_INT(_x_17924)) {
        _10075 = _x_17924 - -9;
        if ((object)((uintptr_t)_10075 +(uintptr_t) HIGH_BITS) >= 0){
            _10075 = NewDouble((eudouble)_10075);
        }
    }
    else {
        _10075 = binary_op(MINUS, _x_17924, -9);
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _10075;
    _10076 = MAKE_SEQ(_1);
    _10075 = NOVALUE;
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10072);
    _10072 = NOVALUE;
    return _10076;
    goto L3; // [41] 330
L2: 

    /** eds.e:394			elsif x >= MIN2B and x <= MAX2B then*/
    if (IS_ATOM_INT(_x_17924)) {
        _10077 = (_x_17924 >= _48MIN2B_17833);
    }
    else {
        _10077 = binary_op(GREATEREQ, _x_17924, _48MIN2B_17833);
    }
    if (IS_ATOM_INT(_10077)) {
        if (_10077 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_10077)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    if (IS_ATOM_INT(_x_17924)) {
        _10079 = (_x_17924 <= 32767);
    }
    else {
        _10079 = binary_op(LESSEQ, _x_17924, 32767);
    }
    if (_10079 == 0) {
        DeRef(_10079);
        _10079 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_10079) && DBL_PTR(_10079)->dbl == 0.0){
            DeRef(_10079);
            _10079 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_10079);
        _10079 = NOVALUE;
    }
    DeRef(_10079);
    _10079 = NOVALUE;

    /** eds.e:395				x -= MIN2B*/
    _0 = _x_17924;
    if (IS_ATOM_INT(_x_17924)) {
        _x_17924 = _x_17924 - _48MIN2B_17833;
        if ((object)((uintptr_t)_x_17924 +(uintptr_t) HIGH_BITS) >= 0){
            _x_17924 = NewDouble((eudouble)_x_17924);
        }
    }
    else {
        _x_17924 = binary_op(MINUS, _x_17924, _48MIN2B_17833);
    }
    DeRef(_0);

    /** eds.e:396				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    if (IS_ATOM_INT(_x_17924)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_17924 & (uintptr_t)255;
             _10081 = MAKE_UINT(tu);
        }
    }
    else {
        _10081 = binary_op(AND_BITS, _x_17924, 255);
    }
    if (IS_ATOM_INT(_x_17924)) {
        if (256 > 0 && _x_17924 >= 0) {
            _10082 = _x_17924 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_17924 / (eudouble)256);
            if (_x_17924 != MININT)
            _10082 = (object)temp_dbl;
            else
            _10082 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_17924, 256);
        _10082 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 249;
    ((intptr_t*)_2)[2] = _10081;
    ((intptr_t*)_2)[3] = _10082;
    _10083 = MAKE_SEQ(_1);
    _10082 = NOVALUE;
    _10081 = NOVALUE;
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    return _10083;
    goto L3; // [94] 330
L4: 

    /** eds.e:398			elsif x >= MIN3B and x <= MAX3B then*/
    if (IS_ATOM_INT(_x_17924)) {
        _10084 = (_x_17924 >= _48MIN3B_17840);
    }
    else {
        _10084 = binary_op(GREATEREQ, _x_17924, _48MIN3B_17840);
    }
    if (IS_ATOM_INT(_10084)) {
        if (_10084 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_10084)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    if (IS_ATOM_INT(_x_17924)) {
        _10086 = (_x_17924 <= 8388607);
    }
    else {
        _10086 = binary_op(LESSEQ, _x_17924, 8388607);
    }
    if (_10086 == 0) {
        DeRef(_10086);
        _10086 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_10086) && DBL_PTR(_10086)->dbl == 0.0){
            DeRef(_10086);
            _10086 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_10086);
        _10086 = NOVALUE;
    }
    DeRef(_10086);
    _10086 = NOVALUE;

    /** eds.e:399				x -= MIN3B*/
    _0 = _x_17924;
    if (IS_ATOM_INT(_x_17924)) {
        _x_17924 = _x_17924 - _48MIN3B_17840;
        if ((object)((uintptr_t)_x_17924 +(uintptr_t) HIGH_BITS) >= 0){
            _x_17924 = NewDouble((eudouble)_x_17924);
        }
    }
    else {
        _x_17924 = binary_op(MINUS, _x_17924, _48MIN3B_17840);
    }
    DeRef(_0);

    /** eds.e:400				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    if (IS_ATOM_INT(_x_17924)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_17924 & (uintptr_t)255;
             _10088 = MAKE_UINT(tu);
        }
    }
    else {
        _10088 = binary_op(AND_BITS, _x_17924, 255);
    }
    if (IS_ATOM_INT(_x_17924)) {
        if (256 > 0 && _x_17924 >= 0) {
            _10089 = _x_17924 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_17924 / (eudouble)256);
            if (_x_17924 != MININT)
            _10089 = (object)temp_dbl;
            else
            _10089 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_17924, 256);
        _10089 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    if (IS_ATOM_INT(_10089)) {
        {uintptr_t tu;
             tu = (uintptr_t)_10089 & (uintptr_t)255;
             _10090 = MAKE_UINT(tu);
        }
    }
    else {
        _10090 = binary_op(AND_BITS, _10089, 255);
    }
    DeRef(_10089);
    _10089 = NOVALUE;
    if (IS_ATOM_INT(_x_17924)) {
        if (65536 > 0 && _x_17924 >= 0) {
            _10091 = _x_17924 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_17924 / (eudouble)65536);
            if (_x_17924 != MININT)
            _10091 = (object)temp_dbl;
            else
            _10091 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_17924, 65536);
        _10091 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 250;
    ((intptr_t*)_2)[2] = _10088;
    ((intptr_t*)_2)[3] = _10090;
    ((intptr_t*)_2)[4] = _10091;
    _10092 = MAKE_SEQ(_1);
    _10091 = NOVALUE;
    _10090 = NOVALUE;
    _10088 = NOVALUE;
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10084);
    _10084 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    DeRef(_10083);
    _10083 = NOVALUE;
    return _10092;
    goto L3; // [156] 330
L5: 

    /** eds.e:403				return I4B & convert:int_to_bytes(x-MIN4B)*/
    if (IS_ATOM_INT(_x_17924) && IS_ATOM_INT(_48MIN4B_17847)) {
        _10093 = _x_17924 - _48MIN4B_17847;
        if ((object)((uintptr_t)_10093 +(uintptr_t) HIGH_BITS) >= 0){
            _10093 = NewDouble((eudouble)_10093);
        }
    }
    else {
        _10093 = binary_op(MINUS, _x_17924, _48MIN4B_17847);
    }
    _10094 = _14int_to_bytes(_10093, 4);
    _10093 = NOVALUE;
    if (IS_SEQUENCE(251) && IS_ATOM(_10094)) {
    }
    else if (IS_ATOM(251) && IS_SEQUENCE(_10094)) {
        Prepend(&_10095, _10094, 251);
    }
    else {
        Concat((object_ptr)&_10095, 251, _10094);
    }
    DeRef(_10094);
    _10094 = NOVALUE;
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10084);
    _10084 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    DeRef(_10083);
    _10083 = NOVALUE;
    DeRef(_10092);
    _10092 = NOVALUE;
    return _10095;
    goto L3; // [181] 330
L1: 

    /** eds.e:407		elsif atom(x) then*/
    _10096 = IS_ATOM(_x_17924);
    if (_10096 == 0)
    {
        _10096 = NOVALUE;
        goto L6; // [189] 250
    }
    else{
        _10096 = NOVALUE;
    }

    /** eds.e:409			x4 = convert:atom_to_float32(x)*/

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    DeRefi(_x4_17925);
    _x4_17925 = machine(48, _x_17924);

    /** eds.e:410			if x = convert:float32_to_atom(x4) then*/

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    DeRef(_float32_to_atom_inlined_float32_to_atom_at_204_17963);
    _float32_to_atom_inlined_float32_to_atom_at_204_17963 = machine(49, _x4_17925);
    if (binary_op_a(NOTEQ, _x_17924, _float32_to_atom_inlined_float32_to_atom_at_204_17963)){
        goto L7; // [212] 229
    }

    /** eds.e:412				return F4B & x4*/
    Prepend(&_10098, _x4_17925, 252);
    DeRef(_x_17924);
    DeRefDSi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10084);
    _10084 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    DeRef(_10083);
    _10083 = NOVALUE;
    DeRef(_10095);
    _10095 = NOVALUE;
    DeRef(_10092);
    _10092 = NOVALUE;
    return _10098;
    goto L3; // [226] 330
L7: 

    /** eds.e:414				return F8B & convert:atom_to_float64(x)*/

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    DeRefi(_atom_to_float64_inlined_atom_to_float64_at_230_17968);
    _atom_to_float64_inlined_atom_to_float64_at_230_17968 = machine(46, _x_17924);
    Prepend(&_10099, _atom_to_float64_inlined_atom_to_float64_at_230_17968, 253);
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_s_17926);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10098);
    _10098 = NOVALUE;
    DeRef(_10084);
    _10084 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    DeRef(_10083);
    _10083 = NOVALUE;
    DeRef(_10095);
    _10095 = NOVALUE;
    DeRef(_10092);
    _10092 = NOVALUE;
    return _10099;
    goto L3; // [247] 330
L6: 

    /** eds.e:419			if length(x) <= 255 then*/
    if (IS_SEQUENCE(_x_17924)){
            _10100 = SEQ_PTR(_x_17924)->length;
    }
    else {
        _10100 = 1;
    }
    if (_10100 > 255)
    goto L8; // [255] 271

    /** eds.e:420				s = {S1B, length(x)}*/
    if (IS_SEQUENCE(_x_17924)){
            _10102 = SEQ_PTR(_x_17924)->length;
    }
    else {
        _10102 = 1;
    }
    DeRef(_s_17926);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _10102;
    _s_17926 = MAKE_SEQ(_1);
    _10102 = NOVALUE;
    goto L9; // [268] 286
L8: 

    /** eds.e:422				s = S4B & convert:int_to_bytes(length(x))*/
    if (IS_SEQUENCE(_x_17924)){
            _10104 = SEQ_PTR(_x_17924)->length;
    }
    else {
        _10104 = 1;
    }
    _10105 = _14int_to_bytes(_10104, 4);
    _10104 = NOVALUE;
    if (IS_SEQUENCE(255) && IS_ATOM(_10105)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_10105)) {
        Prepend(&_s_17926, _10105, 255);
    }
    else {
        Concat((object_ptr)&_s_17926, 255, _10105);
    }
    DeRef(_10105);
    _10105 = NOVALUE;
L9: 

    /** eds.e:424			for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_17924)){
            _10107 = SEQ_PTR(_x_17924)->length;
    }
    else {
        _10107 = 1;
    }
    {
        object _i_17981;
        _i_17981 = 1;
LA: 
        if (_i_17981 > _10107){
            goto LB; // [291] 321
        }

        /** eds.e:425				s &= compress(x[i])*/
        _2 = (object)SEQ_PTR(_x_17924);
        _10108 = (object)*(((s1_ptr)_2)->base + _i_17981);
        Ref(_10108);
        _10109 = _48compress(_10108);
        _10108 = NOVALUE;
        if (IS_SEQUENCE(_s_17926) && IS_ATOM(_10109)) {
            Ref(_10109);
            Append(&_s_17926, _s_17926, _10109);
        }
        else if (IS_ATOM(_s_17926) && IS_SEQUENCE(_10109)) {
        }
        else {
            Concat((object_ptr)&_s_17926, _s_17926, _10109);
        }
        DeRef(_10109);
        _10109 = NOVALUE;

        /** eds.e:426			end for*/
        _i_17981 = _i_17981 + 1;
        goto LA; // [316] 298
LB: 
        ;
    }

    /** eds.e:427			return s*/
    DeRef(_x_17924);
    DeRefi(_x4_17925);
    DeRef(_10077);
    _10077 = NOVALUE;
    DeRef(_10072);
    _10072 = NOVALUE;
    DeRef(_10099);
    _10099 = NOVALUE;
    DeRef(_10098);
    _10098 = NOVALUE;
    DeRef(_10084);
    _10084 = NOVALUE;
    DeRef(_10076);
    _10076 = NOVALUE;
    DeRef(_10083);
    _10083 = NOVALUE;
    DeRef(_10095);
    _10095 = NOVALUE;
    DeRef(_10092);
    _10092 = NOVALUE;
    return _s_17926;
L3: 
    ;
}


object _48db_allocate(object _n_18366)
{
    object _free_list_18367 = NOVALUE;
    object _size_18368 = NOVALUE;
    object _size_ptr_18369 = NOVALUE;
    object _addr_18370 = NOVALUE;
    object _free_count_18371 = NOVALUE;
    object _remaining_18372 = NOVALUE;
    object _seek_1__tmp_at4_18375 = NOVALUE;
    object _seek_inlined_seek_at_4_18374 = NOVALUE;
    object _seek_1__tmp_at39_18382 = NOVALUE;
    object _seek_inlined_seek_at_39_18381 = NOVALUE;
    object _seek_1__tmp_at111_18399 = NOVALUE;
    object _seek_inlined_seek_at_111_18398 = NOVALUE;
    object _pos_inlined_seek_at_108_18397 = NOVALUE;
    object _put4_1__tmp_at137_18404 = NOVALUE;
    object _x_inlined_put4_at_134_18403 = NOVALUE;
    object _seek_1__tmp_at167_18407 = NOVALUE;
    object _seek_inlined_seek_at_167_18406 = NOVALUE;
    object _put4_1__tmp_at193_18412 = NOVALUE;
    object _x_inlined_put4_at_190_18411 = NOVALUE;
    object _seek_1__tmp_at244_18420 = NOVALUE;
    object _seek_inlined_seek_at_244_18419 = NOVALUE;
    object _pos_inlined_seek_at_241_18418 = NOVALUE;
    object _put4_1__tmp_at266_18424 = NOVALUE;
    object _x_inlined_put4_at_263_18423 = NOVALUE;
    object _seek_1__tmp_at333_18435 = NOVALUE;
    object _seek_inlined_seek_at_333_18434 = NOVALUE;
    object _pos_inlined_seek_at_330_18433 = NOVALUE;
    object _seek_1__tmp_at364_18439 = NOVALUE;
    object _seek_inlined_seek_at_364_18438 = NOVALUE;
    object _put4_1__tmp_at386_18443 = NOVALUE;
    object _x_inlined_put4_at_383_18442 = NOVALUE;
    object _seek_1__tmp_at423_18448 = NOVALUE;
    object _seek_inlined_seek_at_423_18447 = NOVALUE;
    object _pos_inlined_seek_at_420_18446 = NOVALUE;
    object _put4_1__tmp_at438_18450 = NOVALUE;
    object _seek_1__tmp_at490_18454 = NOVALUE;
    object _seek_inlined_seek_at_490_18453 = NOVALUE;
    object _put4_1__tmp_at512_18458 = NOVALUE;
    object _x_inlined_put4_at_509_18457 = NOVALUE;
    object _where_inlined_where_at_542_18460 = NOVALUE;
    object _10322 = NOVALUE;
    object _10320 = NOVALUE;
    object _10319 = NOVALUE;
    object _10318 = NOVALUE;
    object _10317 = NOVALUE;
    object _10316 = NOVALUE;
    object _10314 = NOVALUE;
    object _10313 = NOVALUE;
    object _10312 = NOVALUE;
    object _10311 = NOVALUE;
    object _10309 = NOVALUE;
    object _10308 = NOVALUE;
    object _10307 = NOVALUE;
    object _10306 = NOVALUE;
    object _10305 = NOVALUE;
    object _10304 = NOVALUE;
    object _10303 = NOVALUE;
    object _10301 = NOVALUE;
    object _10299 = NOVALUE;
    object _10296 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:795		io:seek(current_db, FREE_COUNT)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at4_18375);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at4_18375 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_4_18374 = machine(19, _seek_1__tmp_at4_18375);
    DeRefi(_seek_1__tmp_at4_18375);
    _seek_1__tmp_at4_18375 = NOVALUE;

    /** eds.e:796		free_count = get4()*/
    _free_count_18371 = _48get4();
    if (!IS_ATOM_INT(_free_count_18371)) {
        _1 = (object)(DBL_PTR(_free_count_18371)->dbl);
        DeRefDS(_free_count_18371);
        _free_count_18371 = _1;
    }

    /** eds.e:797		if free_count > 0 then*/
    if (_free_count_18371 <= 0)
    goto L1; // [27] 487

    /** eds.e:798			free_list = get4()*/
    _0 = _free_list_18367;
    _free_list_18367 = _48get4();
    DeRef(_0);

    /** eds.e:799			io:seek(current_db, free_list)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_free_list_18367);
    DeRef(_seek_1__tmp_at39_18382);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _free_list_18367;
    _seek_1__tmp_at39_18382 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_39_18381 = machine(19, _seek_1__tmp_at39_18382);
    DeRef(_seek_1__tmp_at39_18382);
    _seek_1__tmp_at39_18382 = NOVALUE;

    /** eds.e:800			size_ptr = free_list + 4*/
    DeRef(_size_ptr_18369);
    if (IS_ATOM_INT(_free_list_18367)) {
        _size_ptr_18369 = _free_list_18367 + 4;
        if ((object)((uintptr_t)_size_ptr_18369 + (uintptr_t)HIGH_BITS) >= 0){
            _size_ptr_18369 = NewDouble((eudouble)_size_ptr_18369);
        }
    }
    else {
        _size_ptr_18369 = NewDouble(DBL_PTR(_free_list_18367)->dbl + (eudouble)4);
    }

    /** eds.e:801			for i = 1 to free_count do*/
    _10296 = _free_count_18371;
    {
        object _i_18385;
        _i_18385 = 1;
L2: 
        if (_i_18385 > _10296){
            goto L3; // [64] 486
        }

        /** eds.e:802				addr = get4()*/
        _0 = _addr_18370;
        _addr_18370 = _48get4();
        DeRef(_0);

        /** eds.e:803				size = get4()*/
        _0 = _size_18368;
        _size_18368 = _48get4();
        DeRef(_0);

        /** eds.e:804				if size >= n+4 then*/
        if (IS_ATOM_INT(_n_18366)) {
            _10299 = _n_18366 + 4;
            if ((object)((uintptr_t)_10299 + (uintptr_t)HIGH_BITS) >= 0){
                _10299 = NewDouble((eudouble)_10299);
            }
        }
        else {
            _10299 = NewDouble(DBL_PTR(_n_18366)->dbl + (eudouble)4);
        }
        if (binary_op_a(LESS, _size_18368, _10299)){
            DeRef(_10299);
            _10299 = NOVALUE;
            goto L4; // [87] 473
        }
        DeRef(_10299);
        _10299 = NOVALUE;

        /** eds.e:806					if size >= n+16 then*/
        if (IS_ATOM_INT(_n_18366)) {
            _10301 = _n_18366 + 16;
            if ((object)((uintptr_t)_10301 + (uintptr_t)HIGH_BITS) >= 0){
                _10301 = NewDouble((eudouble)_10301);
            }
        }
        else {
            _10301 = NewDouble(DBL_PTR(_n_18366)->dbl + (eudouble)16);
        }
        if (binary_op_a(LESS, _size_18368, _10301)){
            DeRef(_10301);
            _10301 = NOVALUE;
            goto L5; // [97] 296
        }
        DeRef(_10301);
        _10301 = NOVALUE;

        /** eds.e:808						io:seek(current_db, addr - 4)*/
        if (IS_ATOM_INT(_addr_18370)) {
            _10303 = _addr_18370 - 4;
            if ((object)((uintptr_t)_10303 +(uintptr_t) HIGH_BITS) >= 0){
                _10303 = NewDouble((eudouble)_10303);
            }
        }
        else {
            _10303 = NewDouble(DBL_PTR(_addr_18370)->dbl - (eudouble)4);
        }
        DeRef(_pos_inlined_seek_at_108_18397);
        _pos_inlined_seek_at_108_18397 = _10303;
        _10303 = NOVALUE;

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_pos_inlined_seek_at_108_18397);
        DeRef(_seek_1__tmp_at111_18399);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_108_18397;
        _seek_1__tmp_at111_18399 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_111_18398 = machine(19, _seek_1__tmp_at111_18399);
        DeRef(_pos_inlined_seek_at_108_18397);
        _pos_inlined_seek_at_108_18397 = NOVALUE;
        DeRef(_seek_1__tmp_at111_18399);
        _seek_1__tmp_at111_18399 = NOVALUE;

        /** eds.e:809						put4(size-n-4) -- shrink the block*/
        if (IS_ATOM_INT(_size_18368) && IS_ATOM_INT(_n_18366)) {
            _10304 = _size_18368 - _n_18366;
            if ((object)((uintptr_t)_10304 +(uintptr_t) HIGH_BITS) >= 0){
                _10304 = NewDouble((eudouble)_10304);
            }
        }
        else {
            if (IS_ATOM_INT(_size_18368)) {
                _10304 = NewDouble((eudouble)_size_18368 - DBL_PTR(_n_18366)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_18366)) {
                    _10304 = NewDouble(DBL_PTR(_size_18368)->dbl - (eudouble)_n_18366);
                }
                else
                _10304 = NewDouble(DBL_PTR(_size_18368)->dbl - DBL_PTR(_n_18366)->dbl);
            }
        }
        if (IS_ATOM_INT(_10304)) {
            _10305 = _10304 - 4;
            if ((object)((uintptr_t)_10305 +(uintptr_t) HIGH_BITS) >= 0){
                _10305 = NewDouble((eudouble)_10305);
            }
        }
        else {
            _10305 = NewDouble(DBL_PTR(_10304)->dbl - (eudouble)4);
        }
        DeRef(_10304);
        _10304 = NOVALUE;
        DeRef(_x_inlined_put4_at_134_18403);
        _x_inlined_put4_at_134_18403 = _10305;
        _10305 = NOVALUE;

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_134_18403)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_134_18403;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_134_18403)->dbl;
        }

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at137_18404);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at137_18404 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at137_18404); // DJP 

        /** eds.e:444	end procedure*/
        goto L6; // [159] 162
L6: 
        DeRef(_x_inlined_put4_at_134_18403);
        _x_inlined_put4_at_134_18403 = NOVALUE;
        DeRefi(_put4_1__tmp_at137_18404);
        _put4_1__tmp_at137_18404 = NOVALUE;

        /** eds.e:810						io:seek(current_db, size_ptr)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_size_ptr_18369);
        DeRef(_seek_1__tmp_at167_18407);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _size_ptr_18369;
        _seek_1__tmp_at167_18407 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_167_18406 = machine(19, _seek_1__tmp_at167_18407);
        DeRef(_seek_1__tmp_at167_18407);
        _seek_1__tmp_at167_18407 = NOVALUE;

        /** eds.e:811						put4(size-n-4) -- update size on free list too*/
        if (IS_ATOM_INT(_size_18368) && IS_ATOM_INT(_n_18366)) {
            _10306 = _size_18368 - _n_18366;
            if ((object)((uintptr_t)_10306 +(uintptr_t) HIGH_BITS) >= 0){
                _10306 = NewDouble((eudouble)_10306);
            }
        }
        else {
            if (IS_ATOM_INT(_size_18368)) {
                _10306 = NewDouble((eudouble)_size_18368 - DBL_PTR(_n_18366)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_18366)) {
                    _10306 = NewDouble(DBL_PTR(_size_18368)->dbl - (eudouble)_n_18366);
                }
                else
                _10306 = NewDouble(DBL_PTR(_size_18368)->dbl - DBL_PTR(_n_18366)->dbl);
            }
        }
        if (IS_ATOM_INT(_10306)) {
            _10307 = _10306 - 4;
            if ((object)((uintptr_t)_10307 +(uintptr_t) HIGH_BITS) >= 0){
                _10307 = NewDouble((eudouble)_10307);
            }
        }
        else {
            _10307 = NewDouble(DBL_PTR(_10306)->dbl - (eudouble)4);
        }
        DeRef(_10306);
        _10306 = NOVALUE;
        DeRef(_x_inlined_put4_at_190_18411);
        _x_inlined_put4_at_190_18411 = _10307;
        _10307 = NOVALUE;

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_190_18411)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_190_18411;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_190_18411)->dbl;
        }

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at193_18412);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at193_18412 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at193_18412); // DJP 

        /** eds.e:444	end procedure*/
        goto L7; // [215] 218
L7: 
        DeRef(_x_inlined_put4_at_190_18411);
        _x_inlined_put4_at_190_18411 = NOVALUE;
        DeRefi(_put4_1__tmp_at193_18412);
        _put4_1__tmp_at193_18412 = NOVALUE;

        /** eds.e:812						addr += size-n-4*/
        if (IS_ATOM_INT(_size_18368) && IS_ATOM_INT(_n_18366)) {
            _10308 = _size_18368 - _n_18366;
            if ((object)((uintptr_t)_10308 +(uintptr_t) HIGH_BITS) >= 0){
                _10308 = NewDouble((eudouble)_10308);
            }
        }
        else {
            if (IS_ATOM_INT(_size_18368)) {
                _10308 = NewDouble((eudouble)_size_18368 - DBL_PTR(_n_18366)->dbl);
            }
            else {
                if (IS_ATOM_INT(_n_18366)) {
                    _10308 = NewDouble(DBL_PTR(_size_18368)->dbl - (eudouble)_n_18366);
                }
                else
                _10308 = NewDouble(DBL_PTR(_size_18368)->dbl - DBL_PTR(_n_18366)->dbl);
            }
        }
        if (IS_ATOM_INT(_10308)) {
            _10309 = _10308 - 4;
            if ((object)((uintptr_t)_10309 +(uintptr_t) HIGH_BITS) >= 0){
                _10309 = NewDouble((eudouble)_10309);
            }
        }
        else {
            _10309 = NewDouble(DBL_PTR(_10308)->dbl - (eudouble)4);
        }
        DeRef(_10308);
        _10308 = NOVALUE;
        _0 = _addr_18370;
        if (IS_ATOM_INT(_addr_18370) && IS_ATOM_INT(_10309)) {
            _addr_18370 = _addr_18370 + _10309;
            if ((object)((uintptr_t)_addr_18370 + (uintptr_t)HIGH_BITS) >= 0){
                _addr_18370 = NewDouble((eudouble)_addr_18370);
            }
        }
        else {
            if (IS_ATOM_INT(_addr_18370)) {
                _addr_18370 = NewDouble((eudouble)_addr_18370 + DBL_PTR(_10309)->dbl);
            }
            else {
                if (IS_ATOM_INT(_10309)) {
                    _addr_18370 = NewDouble(DBL_PTR(_addr_18370)->dbl + (eudouble)_10309);
                }
                else
                _addr_18370 = NewDouble(DBL_PTR(_addr_18370)->dbl + DBL_PTR(_10309)->dbl);
            }
        }
        DeRef(_0);
        DeRef(_10309);
        _10309 = NOVALUE;

        /** eds.e:813						io:seek(current_db, addr - 4) */
        if (IS_ATOM_INT(_addr_18370)) {
            _10311 = _addr_18370 - 4;
            if ((object)((uintptr_t)_10311 +(uintptr_t) HIGH_BITS) >= 0){
                _10311 = NewDouble((eudouble)_10311);
            }
        }
        else {
            _10311 = NewDouble(DBL_PTR(_addr_18370)->dbl - (eudouble)4);
        }
        DeRef(_pos_inlined_seek_at_241_18418);
        _pos_inlined_seek_at_241_18418 = _10311;
        _10311 = NOVALUE;

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_pos_inlined_seek_at_241_18418);
        DeRef(_seek_1__tmp_at244_18420);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_241_18418;
        _seek_1__tmp_at244_18420 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_244_18419 = machine(19, _seek_1__tmp_at244_18420);
        DeRef(_pos_inlined_seek_at_241_18418);
        _pos_inlined_seek_at_241_18418 = NOVALUE;
        DeRef(_seek_1__tmp_at244_18420);
        _seek_1__tmp_at244_18420 = NOVALUE;

        /** eds.e:814						put4(n+4)*/
        if (IS_ATOM_INT(_n_18366)) {
            _10312 = _n_18366 + 4;
            if ((object)((uintptr_t)_10312 + (uintptr_t)HIGH_BITS) >= 0){
                _10312 = NewDouble((eudouble)_10312);
            }
        }
        else {
            _10312 = NewDouble(DBL_PTR(_n_18366)->dbl + (eudouble)4);
        }
        DeRef(_x_inlined_put4_at_263_18423);
        _x_inlined_put4_at_263_18423 = _10312;
        _10312 = NOVALUE;

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_263_18423)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_263_18423;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_263_18423)->dbl;
        }

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at266_18424);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at266_18424 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at266_18424); // DJP 

        /** eds.e:444	end procedure*/
        goto L8; // [288] 291
L8: 
        DeRef(_x_inlined_put4_at_263_18423);
        _x_inlined_put4_at_263_18423 = NOVALUE;
        DeRefi(_put4_1__tmp_at266_18424);
        _put4_1__tmp_at266_18424 = NOVALUE;
        goto L9; // [293] 466
L5: 

        /** eds.e:817						remaining = io:get_bytes(current_db, (free_count-i) * 8)*/
        _10313 = _free_count_18371 - _i_18385;
        if ((object)((uintptr_t)_10313 +(uintptr_t) HIGH_BITS) >= 0){
            _10313 = NewDouble((eudouble)_10313);
        }
        if (IS_ATOM_INT(_10313)) {
            if (_10313 == (short)_10313){
                _10314 = _10313 * 8;
            }
            else{
                _10314 = NewDouble(_10313 * (eudouble)8);
            }
        }
        else {
            _10314 = NewDouble(DBL_PTR(_10313)->dbl * (eudouble)8);
        }
        DeRef(_10313);
        _10313 = NOVALUE;
        _0 = _remaining_18372;
        _remaining_18372 = _19get_bytes(_48current_db_17712, _10314);
        DeRef(_0);
        _10314 = NOVALUE;

        /** eds.e:818						io:seek(current_db, free_list+8*(i-1))*/
        _10316 = _i_18385 - 1;
        if (_10316 <= INT15){
            _10317 = 8 * _10316;
        }
        else{
            _10317 = NewDouble(8 * (eudouble)_10316);
        }
        _10316 = NOVALUE;
        if (IS_ATOM_INT(_free_list_18367) && IS_ATOM_INT(_10317)) {
            _10318 = _free_list_18367 + _10317;
            if ((object)((uintptr_t)_10318 + (uintptr_t)HIGH_BITS) >= 0){
                _10318 = NewDouble((eudouble)_10318);
            }
        }
        else {
            if (IS_ATOM_INT(_free_list_18367)) {
                _10318 = NewDouble((eudouble)_free_list_18367 + DBL_PTR(_10317)->dbl);
            }
            else {
                if (IS_ATOM_INT(_10317)) {
                    _10318 = NewDouble(DBL_PTR(_free_list_18367)->dbl + (eudouble)_10317);
                }
                else
                _10318 = NewDouble(DBL_PTR(_free_list_18367)->dbl + DBL_PTR(_10317)->dbl);
            }
        }
        DeRef(_10317);
        _10317 = NOVALUE;
        DeRef(_pos_inlined_seek_at_330_18433);
        _pos_inlined_seek_at_330_18433 = _10318;
        _10318 = NOVALUE;

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_pos_inlined_seek_at_330_18433);
        DeRef(_seek_1__tmp_at333_18435);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_330_18433;
        _seek_1__tmp_at333_18435 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_333_18434 = machine(19, _seek_1__tmp_at333_18435);
        DeRef(_pos_inlined_seek_at_330_18433);
        _pos_inlined_seek_at_330_18433 = NOVALUE;
        DeRef(_seek_1__tmp_at333_18435);
        _seek_1__tmp_at333_18435 = NOVALUE;

        /** eds.e:819						putn(remaining)*/

        /** eds.e:448		puts(current_db, s)*/
        EPuts(_48current_db_17712, _remaining_18372); // DJP 

        /** eds.e:449	end procedure*/
        goto LA; // [358] 361
LA: 

        /** eds.e:820						io:seek(current_db, FREE_COUNT)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        DeRefi(_seek_1__tmp_at364_18439);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = 7;
        _seek_1__tmp_at364_18439 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_364_18438 = machine(19, _seek_1__tmp_at364_18439);
        DeRefi(_seek_1__tmp_at364_18439);
        _seek_1__tmp_at364_18439 = NOVALUE;

        /** eds.e:821						put4(free_count-1)*/
        _10319 = _free_count_18371 - 1;
        if ((object)((uintptr_t)_10319 +(uintptr_t) HIGH_BITS) >= 0){
            _10319 = NewDouble((eudouble)_10319);
        }
        DeRef(_x_inlined_put4_at_383_18442);
        _x_inlined_put4_at_383_18442 = _10319;
        _10319 = NOVALUE;

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_383_18442)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_383_18442;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_383_18442)->dbl;
        }

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at386_18443);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at386_18443 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at386_18443); // DJP 

        /** eds.e:444	end procedure*/
        goto LB; // [408] 411
LB: 
        DeRef(_x_inlined_put4_at_383_18442);
        _x_inlined_put4_at_383_18442 = NOVALUE;
        DeRefi(_put4_1__tmp_at386_18443);
        _put4_1__tmp_at386_18443 = NOVALUE;

        /** eds.e:822						io:seek(current_db, addr - 4)*/
        if (IS_ATOM_INT(_addr_18370)) {
            _10320 = _addr_18370 - 4;
            if ((object)((uintptr_t)_10320 +(uintptr_t) HIGH_BITS) >= 0){
                _10320 = NewDouble((eudouble)_10320);
            }
        }
        else {
            _10320 = NewDouble(DBL_PTR(_addr_18370)->dbl - (eudouble)4);
        }
        DeRef(_pos_inlined_seek_at_420_18446);
        _pos_inlined_seek_at_420_18446 = _10320;
        _10320 = NOVALUE;

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_pos_inlined_seek_at_420_18446);
        DeRef(_seek_1__tmp_at423_18448);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_420_18446;
        _seek_1__tmp_at423_18448 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_423_18447 = machine(19, _seek_1__tmp_at423_18448);
        DeRef(_pos_inlined_seek_at_420_18446);
        _pos_inlined_seek_at_420_18446 = NOVALUE;
        DeRef(_seek_1__tmp_at423_18448);
        _seek_1__tmp_at423_18448 = NOVALUE;

        /** eds.e:823						put4(size) -- in case size was not updated by db_free()*/

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_size_18368)) {
            *poke4_addr = (uint32_t)_size_18368;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_size_18368)->dbl;
        }

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at438_18450);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at438_18450 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at438_18450); // DJP 

        /** eds.e:444	end procedure*/
        goto LC; // [460] 463
LC: 
        DeRefi(_put4_1__tmp_at438_18450);
        _put4_1__tmp_at438_18450 = NOVALUE;
L9: 

        /** eds.e:825					return addr*/
        DeRef(_n_18366);
        DeRef(_free_list_18367);
        DeRef(_size_18368);
        DeRef(_size_ptr_18369);
        DeRef(_remaining_18372);
        return _addr_18370;
L4: 

        /** eds.e:827				size_ptr += 8*/
        _0 = _size_ptr_18369;
        if (IS_ATOM_INT(_size_ptr_18369)) {
            _size_ptr_18369 = _size_ptr_18369 + 8;
            if ((object)((uintptr_t)_size_ptr_18369 + (uintptr_t)HIGH_BITS) >= 0){
                _size_ptr_18369 = NewDouble((eudouble)_size_ptr_18369);
            }
        }
        else {
            _size_ptr_18369 = NewDouble(DBL_PTR(_size_ptr_18369)->dbl + (eudouble)8);
        }
        DeRef(_0);

        /** eds.e:828			end for*/
        _i_18385 = _i_18385 + 1;
        goto L2; // [481] 71
L3: 
        ;
    }
L1: 

    /** eds.e:831		io:seek(current_db, -1)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at490_18454);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = -1;
    _seek_1__tmp_at490_18454 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_490_18453 = machine(19, _seek_1__tmp_at490_18454);
    DeRefi(_seek_1__tmp_at490_18454);
    _seek_1__tmp_at490_18454 = NOVALUE;

    /** eds.e:832		put4(n+4)*/
    if (IS_ATOM_INT(_n_18366)) {
        _10322 = _n_18366 + 4;
        if ((object)((uintptr_t)_10322 + (uintptr_t)HIGH_BITS) >= 0){
            _10322 = NewDouble((eudouble)_10322);
        }
    }
    else {
        _10322 = NewDouble(DBL_PTR(_n_18366)->dbl + (eudouble)4);
    }
    DeRef(_x_inlined_put4_at_509_18457);
    _x_inlined_put4_at_509_18457 = _10322;
    _10322 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_509_18457)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_509_18457;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_509_18457)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at512_18458);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at512_18458 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at512_18458); // DJP 

    /** eds.e:444	end procedure*/
    goto LD; // [534] 537
LD: 
    DeRef(_x_inlined_put4_at_509_18457);
    _x_inlined_put4_at_509_18457 = NOVALUE;
    DeRefi(_put4_1__tmp_at512_18458);
    _put4_1__tmp_at512_18458 = NOVALUE;

    /** eds.e:833		return io:where(current_db)*/

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    DeRef(_where_inlined_where_at_542_18460);
    _where_inlined_where_at_542_18460 = machine(20, _48current_db_17712);
    DeRef(_n_18366);
    DeRef(_free_list_18367);
    DeRef(_size_18368);
    DeRef(_size_ptr_18369);
    DeRef(_addr_18370);
    DeRef(_remaining_18372);
    return _where_inlined_where_at_542_18460;
    ;
}


void _48db_free(object _p_18463)
{
    object _psize_18464 = NOVALUE;
    object _i_18465 = NOVALUE;
    object _size_18466 = NOVALUE;
    object _addr_18467 = NOVALUE;
    object _free_list_18468 = NOVALUE;
    object _free_list_space_18469 = NOVALUE;
    object _new_space_18470 = NOVALUE;
    object _to_be_freed_18471 = NOVALUE;
    object _prev_addr_18472 = NOVALUE;
    object _prev_size_18473 = NOVALUE;
    object _free_count_18474 = NOVALUE;
    object _remaining_18475 = NOVALUE;
    object _seek_1__tmp_at11_18480 = NOVALUE;
    object _seek_inlined_seek_at_11_18479 = NOVALUE;
    object _pos_inlined_seek_at_8_18478 = NOVALUE;
    object _seek_1__tmp_at33_18484 = NOVALUE;
    object _seek_inlined_seek_at_33_18483 = NOVALUE;
    object _seek_1__tmp_at69_18491 = NOVALUE;
    object _seek_inlined_seek_at_69_18490 = NOVALUE;
    object _pos_inlined_seek_at_66_18489 = NOVALUE;
    object _seek_1__tmp_at133_18504 = NOVALUE;
    object _seek_inlined_seek_at_133_18503 = NOVALUE;
    object _seek_1__tmp_at157_18508 = NOVALUE;
    object _seek_inlined_seek_at_157_18507 = NOVALUE;
    object _put4_1__tmp_at172_18510 = NOVALUE;
    object _seek_1__tmp_at202_18513 = NOVALUE;
    object _seek_inlined_seek_at_202_18512 = NOVALUE;
    object _seek_1__tmp_at234_18518 = NOVALUE;
    object _seek_inlined_seek_at_234_18517 = NOVALUE;
    object _s_inlined_putn_at_274_18524 = NOVALUE;
    object _seek_1__tmp_at297_18527 = NOVALUE;
    object _seek_inlined_seek_at_297_18526 = NOVALUE;
    object _seek_1__tmp_at430_18548 = NOVALUE;
    object _seek_inlined_seek_at_430_18547 = NOVALUE;
    object _pos_inlined_seek_at_427_18546 = NOVALUE;
    object _put4_1__tmp_at482_18558 = NOVALUE;
    object _x_inlined_put4_at_479_18557 = NOVALUE;
    object _seek_1__tmp_at523_18564 = NOVALUE;
    object _seek_inlined_seek_at_523_18563 = NOVALUE;
    object _pos_inlined_seek_at_520_18562 = NOVALUE;
    object _seek_1__tmp_at574_18574 = NOVALUE;
    object _seek_inlined_seek_at_574_18573 = NOVALUE;
    object _pos_inlined_seek_at_571_18572 = NOVALUE;
    object _seek_1__tmp_at611_18579 = NOVALUE;
    object _seek_inlined_seek_at_611_18578 = NOVALUE;
    object _put4_1__tmp_at626_18581 = NOVALUE;
    object _put4_1__tmp_at664_18586 = NOVALUE;
    object _x_inlined_put4_at_661_18585 = NOVALUE;
    object _seek_1__tmp_at737_18598 = NOVALUE;
    object _seek_inlined_seek_at_737_18597 = NOVALUE;
    object _pos_inlined_seek_at_734_18596 = NOVALUE;
    object _put4_1__tmp_at752_18600 = NOVALUE;
    object _put4_1__tmp_at789_18604 = NOVALUE;
    object _x_inlined_put4_at_786_18603 = NOVALUE;
    object _seek_1__tmp_at837_18612 = NOVALUE;
    object _seek_inlined_seek_at_837_18611 = NOVALUE;
    object _pos_inlined_seek_at_834_18610 = NOVALUE;
    object _seek_1__tmp_at883_18620 = NOVALUE;
    object _seek_inlined_seek_at_883_18619 = NOVALUE;
    object _put4_1__tmp_at898_18622 = NOVALUE;
    object _seek_1__tmp_at943_18629 = NOVALUE;
    object _seek_inlined_seek_at_943_18628 = NOVALUE;
    object _pos_inlined_seek_at_940_18627 = NOVALUE;
    object _put4_1__tmp_at958_18631 = NOVALUE;
    object _put4_1__tmp_at986_18633 = NOVALUE;
    object _10390 = NOVALUE;
    object _10389 = NOVALUE;
    object _10388 = NOVALUE;
    object _10385 = NOVALUE;
    object _10384 = NOVALUE;
    object _10383 = NOVALUE;
    object _10382 = NOVALUE;
    object _10381 = NOVALUE;
    object _10380 = NOVALUE;
    object _10379 = NOVALUE;
    object _10378 = NOVALUE;
    object _10377 = NOVALUE;
    object _10376 = NOVALUE;
    object _10375 = NOVALUE;
    object _10374 = NOVALUE;
    object _10373 = NOVALUE;
    object _10372 = NOVALUE;
    object _10371 = NOVALUE;
    object _10369 = NOVALUE;
    object _10368 = NOVALUE;
    object _10367 = NOVALUE;
    object _10365 = NOVALUE;
    object _10364 = NOVALUE;
    object _10363 = NOVALUE;
    object _10362 = NOVALUE;
    object _10361 = NOVALUE;
    object _10360 = NOVALUE;
    object _10359 = NOVALUE;
    object _10358 = NOVALUE;
    object _10357 = NOVALUE;
    object _10356 = NOVALUE;
    object _10355 = NOVALUE;
    object _10354 = NOVALUE;
    object _10353 = NOVALUE;
    object _10352 = NOVALUE;
    object _10351 = NOVALUE;
    object _10350 = NOVALUE;
    object _10349 = NOVALUE;
    object _10348 = NOVALUE;
    object _10342 = NOVALUE;
    object _10341 = NOVALUE;
    object _10340 = NOVALUE;
    object _10338 = NOVALUE;
    object _10334 = NOVALUE;
    object _10333 = NOVALUE;
    object _10331 = NOVALUE;
    object _10330 = NOVALUE;
    object _10328 = NOVALUE;
    object _10327 = NOVALUE;
    object _10323 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:844		io:seek(current_db, p-4)*/
    if (IS_ATOM_INT(_p_18463)) {
        _10323 = _p_18463 - 4;
        if ((object)((uintptr_t)_10323 +(uintptr_t) HIGH_BITS) >= 0){
            _10323 = NewDouble((eudouble)_10323);
        }
    }
    else {
        _10323 = NewDouble(DBL_PTR(_p_18463)->dbl - (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_8_18478);
    _pos_inlined_seek_at_8_18478 = _10323;
    _10323 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_8_18478);
    DeRef(_seek_1__tmp_at11_18480);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_18478;
    _seek_1__tmp_at11_18480 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_11_18479 = machine(19, _seek_1__tmp_at11_18480);
    DeRef(_pos_inlined_seek_at_8_18478);
    _pos_inlined_seek_at_8_18478 = NOVALUE;
    DeRef(_seek_1__tmp_at11_18480);
    _seek_1__tmp_at11_18480 = NOVALUE;

    /** eds.e:845		psize = get4()*/
    _0 = _psize_18464;
    _psize_18464 = _48get4();
    DeRef(_0);

    /** eds.e:847		io:seek(current_db, FREE_COUNT)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at33_18484);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at33_18484 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_33_18483 = machine(19, _seek_1__tmp_at33_18484);
    DeRefi(_seek_1__tmp_at33_18484);
    _seek_1__tmp_at33_18484 = NOVALUE;

    /** eds.e:848		free_count = get4()*/
    _free_count_18474 = _48get4();
    if (!IS_ATOM_INT(_free_count_18474)) {
        _1 = (object)(DBL_PTR(_free_count_18474)->dbl);
        DeRefDS(_free_count_18474);
        _free_count_18474 = _1;
    }

    /** eds.e:849		free_list = get4()*/
    _0 = _free_list_18468;
    _free_list_18468 = _48get4();
    DeRef(_0);

    /** eds.e:850		io:seek(current_db, free_list - 4)*/
    if (IS_ATOM_INT(_free_list_18468)) {
        _10327 = _free_list_18468 - 4;
        if ((object)((uintptr_t)_10327 +(uintptr_t) HIGH_BITS) >= 0){
            _10327 = NewDouble((eudouble)_10327);
        }
    }
    else {
        _10327 = NewDouble(DBL_PTR(_free_list_18468)->dbl - (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_66_18489);
    _pos_inlined_seek_at_66_18489 = _10327;
    _10327 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_66_18489);
    DeRef(_seek_1__tmp_at69_18491);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_66_18489;
    _seek_1__tmp_at69_18491 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_69_18490 = machine(19, _seek_1__tmp_at69_18491);
    DeRef(_pos_inlined_seek_at_66_18489);
    _pos_inlined_seek_at_66_18489 = NOVALUE;
    DeRef(_seek_1__tmp_at69_18491);
    _seek_1__tmp_at69_18491 = NOVALUE;

    /** eds.e:851		free_list_space = get4()-4*/
    _10328 = _48get4();
    DeRef(_free_list_space_18469);
    if (IS_ATOM_INT(_10328)) {
        _free_list_space_18469 = _10328 - 4;
        if ((object)((uintptr_t)_free_list_space_18469 +(uintptr_t) HIGH_BITS) >= 0){
            _free_list_space_18469 = NewDouble((eudouble)_free_list_space_18469);
        }
    }
    else {
        _free_list_space_18469 = binary_op(MINUS, _10328, 4);
    }
    DeRef(_10328);
    _10328 = NOVALUE;

    /** eds.e:852		if free_list_space < 8 * (free_count+1) then*/
    _10330 = _free_count_18474 + 1;
    if (_10330 > MAXINT){
        _10330 = NewDouble((eudouble)_10330);
    }
    if (IS_ATOM_INT(_10330)) {
        if (_10330 <= INT15 && _10330 >= -INT15){
            _10331 = 8 * _10330;
        }
        else{
            _10331 = NewDouble(8 * (eudouble)_10330);
        }
    }
    else {
        _10331 = NewDouble((eudouble)8 * DBL_PTR(_10330)->dbl);
    }
    DeRef(_10330);
    _10330 = NOVALUE;
    if (binary_op_a(GREATEREQ, _free_list_space_18469, _10331)){
        DeRef(_10331);
        _10331 = NOVALUE;
        goto L1; // [102] 314
    }
    DeRef(_10331);
    _10331 = NOVALUE;

    /** eds.e:854			new_space = floor(free_list_space + free_list_space / 2)*/
    if (IS_ATOM_INT(_free_list_space_18469)) {
        if (_free_list_space_18469 & 1) {
            _10333 = NewDouble((_free_list_space_18469 >> 1) + 0.5);
        }
        else
        _10333 = _free_list_space_18469 >> 1;
    }
    else {
        _10333 = binary_op(DIVIDE, _free_list_space_18469, 2);
    }
    if (IS_ATOM_INT(_free_list_space_18469) && IS_ATOM_INT(_10333)) {
        _10334 = _free_list_space_18469 + _10333;
        if ((object)((uintptr_t)_10334 + (uintptr_t)HIGH_BITS) >= 0){
            _10334 = NewDouble((eudouble)_10334);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_space_18469)) {
            _10334 = NewDouble((eudouble)_free_list_space_18469 + DBL_PTR(_10333)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10333)) {
                _10334 = NewDouble(DBL_PTR(_free_list_space_18469)->dbl + (eudouble)_10333);
            }
            else
            _10334 = NewDouble(DBL_PTR(_free_list_space_18469)->dbl + DBL_PTR(_10333)->dbl);
        }
    }
    DeRef(_10333);
    _10333 = NOVALUE;
    DeRef(_new_space_18470);
    if (IS_ATOM_INT(_10334))
    _new_space_18470 = e_floor(_10334);
    else
    _new_space_18470 = unary_op(FLOOR, _10334);
    DeRef(_10334);
    _10334 = NOVALUE;

    /** eds.e:855			to_be_freed = free_list*/
    Ref(_free_list_18468);
    DeRef(_to_be_freed_18471);
    _to_be_freed_18471 = _free_list_18468;

    /** eds.e:856			free_list = db_allocate(new_space)*/
    Ref(_new_space_18470);
    _0 = _free_list_18468;
    _free_list_18468 = _48db_allocate(_new_space_18470);
    DeRef(_0);

    /** eds.e:857			io:seek(current_db, FREE_COUNT)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at133_18504);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at133_18504 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_133_18503 = machine(19, _seek_1__tmp_at133_18504);
    DeRefi(_seek_1__tmp_at133_18504);
    _seek_1__tmp_at133_18504 = NOVALUE;

    /** eds.e:858			free_count = get4() -- db_allocate may have changed it*/
    _free_count_18474 = _48get4();
    if (!IS_ATOM_INT(_free_count_18474)) {
        _1 = (object)(DBL_PTR(_free_count_18474)->dbl);
        DeRefDS(_free_count_18474);
        _free_count_18474 = _1;
    }

    /** eds.e:859			io:seek(current_db, FREE_LIST)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at157_18508);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 11;
    _seek_1__tmp_at157_18508 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_157_18507 = machine(19, _seek_1__tmp_at157_18508);
    DeRefi(_seek_1__tmp_at157_18508);
    _seek_1__tmp_at157_18508 = NOVALUE;

    /** eds.e:860			put4(free_list)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_free_list_18468)) {
        *poke4_addr = (uint32_t)_free_list_18468;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_free_list_18468)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at172_18510);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at172_18510 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at172_18510); // DJP 

    /** eds.e:444	end procedure*/
    goto L2; // [194] 197
L2: 
    DeRefi(_put4_1__tmp_at172_18510);
    _put4_1__tmp_at172_18510 = NOVALUE;

    /** eds.e:861			io:seek(current_db, to_be_freed)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_to_be_freed_18471);
    DeRef(_seek_1__tmp_at202_18513);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _to_be_freed_18471;
    _seek_1__tmp_at202_18513 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_202_18512 = machine(19, _seek_1__tmp_at202_18513);
    DeRef(_seek_1__tmp_at202_18513);
    _seek_1__tmp_at202_18513 = NOVALUE;

    /** eds.e:862			remaining = io:get_bytes(current_db, 8*free_count)*/
    if (_free_count_18474 <= INT15 && _free_count_18474 >= -INT15){
        _10338 = 8 * _free_count_18474;
    }
    else{
        _10338 = NewDouble(8 * (eudouble)_free_count_18474);
    }
    _0 = _remaining_18475;
    _remaining_18475 = _19get_bytes(_48current_db_17712, _10338);
    DeRef(_0);
    _10338 = NOVALUE;

    /** eds.e:863			io:seek(current_db, free_list)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_free_list_18468);
    DeRef(_seek_1__tmp_at234_18518);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _free_list_18468;
    _seek_1__tmp_at234_18518 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_234_18517 = machine(19, _seek_1__tmp_at234_18518);
    DeRef(_seek_1__tmp_at234_18518);
    _seek_1__tmp_at234_18518 = NOVALUE;

    /** eds.e:864			putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_18475); // DJP 

    /** eds.e:449	end procedure*/
    goto L3; // [259] 262
L3: 

    /** eds.e:865			putn(repeat(0, new_space-length(remaining)))*/
    if (IS_SEQUENCE(_remaining_18475)){
            _10340 = SEQ_PTR(_remaining_18475)->length;
    }
    else {
        _10340 = 1;
    }
    if (IS_ATOM_INT(_new_space_18470)) {
        _10341 = _new_space_18470 - _10340;
    }
    else {
        _10341 = NewDouble(DBL_PTR(_new_space_18470)->dbl - (eudouble)_10340);
    }
    _10340 = NOVALUE;
    _10342 = Repeat(0, _10341);
    DeRef(_10341);
    _10341 = NOVALUE;
    DeRefi(_s_inlined_putn_at_274_18524);
    _s_inlined_putn_at_274_18524 = _10342;
    _10342 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_274_18524); // DJP 

    /** eds.e:449	end procedure*/
    goto L4; // [289] 292
L4: 
    DeRefi(_s_inlined_putn_at_274_18524);
    _s_inlined_putn_at_274_18524 = NOVALUE;

    /** eds.e:866			io:seek(current_db, free_list)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_free_list_18468);
    DeRef(_seek_1__tmp_at297_18527);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _free_list_18468;
    _seek_1__tmp_at297_18527 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_297_18526 = machine(19, _seek_1__tmp_at297_18527);
    DeRef(_seek_1__tmp_at297_18527);
    _seek_1__tmp_at297_18527 = NOVALUE;
    goto L5; // [311] 320
L1: 

    /** eds.e:868			new_space = 0*/
    DeRef(_new_space_18470);
    _new_space_18470 = 0;
L5: 

    /** eds.e:871		i = 1*/
    DeRef(_i_18465);
    _i_18465 = 1;

    /** eds.e:872		prev_addr = 0*/
    DeRef(_prev_addr_18472);
    _prev_addr_18472 = 0;

    /** eds.e:873		prev_size = 0*/
    DeRef(_prev_size_18473);
    _prev_size_18473 = 0;

    /** eds.e:874		while i <= free_count do*/
L6: 
    if (binary_op_a(GREATER, _i_18465, _free_count_18474)){
        goto L7; // [340] 386
    }

    /** eds.e:875			addr = get4()*/
    _0 = _addr_18467;
    _addr_18467 = _48get4();
    DeRef(_0);

    /** eds.e:876			size = get4()*/
    _0 = _size_18466;
    _size_18466 = _48get4();
    DeRef(_0);

    /** eds.e:877			if p < addr then*/
    if (binary_op_a(GREATEREQ, _p_18463, _addr_18467)){
        goto L8; // [356] 365
    }

    /** eds.e:878				exit*/
    goto L7; // [362] 386
L8: 

    /** eds.e:880			prev_addr = addr*/
    Ref(_addr_18467);
    DeRef(_prev_addr_18472);
    _prev_addr_18472 = _addr_18467;

    /** eds.e:881			prev_size = size*/
    Ref(_size_18466);
    DeRef(_prev_size_18473);
    _prev_size_18473 = _size_18466;

    /** eds.e:882			i += 1*/
    _0 = _i_18465;
    if (IS_ATOM_INT(_i_18465)) {
        _i_18465 = _i_18465 + 1;
        if (_i_18465 > MAXINT){
            _i_18465 = NewDouble((eudouble)_i_18465);
        }
    }
    else
    _i_18465 = binary_op(PLUS, 1, _i_18465);
    DeRef(_0);

    /** eds.e:883		end while*/
    goto L6; // [383] 340
L7: 

    /** eds.e:885		if i > 1 and prev_addr + prev_size = p then*/
    if (IS_ATOM_INT(_i_18465)) {
        _10348 = (_i_18465 > 1);
    }
    else {
        _10348 = (DBL_PTR(_i_18465)->dbl > (eudouble)1);
    }
    if (_10348 == 0) {
        goto L9; // [392] 695
    }
    if (IS_ATOM_INT(_prev_addr_18472) && IS_ATOM_INT(_prev_size_18473)) {
        _10350 = _prev_addr_18472 + _prev_size_18473;
        if ((object)((uintptr_t)_10350 + (uintptr_t)HIGH_BITS) >= 0){
            _10350 = NewDouble((eudouble)_10350);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_addr_18472)) {
            _10350 = NewDouble((eudouble)_prev_addr_18472 + DBL_PTR(_prev_size_18473)->dbl);
        }
        else {
            if (IS_ATOM_INT(_prev_size_18473)) {
                _10350 = NewDouble(DBL_PTR(_prev_addr_18472)->dbl + (eudouble)_prev_size_18473);
            }
            else
            _10350 = NewDouble(DBL_PTR(_prev_addr_18472)->dbl + DBL_PTR(_prev_size_18473)->dbl);
        }
    }
    if (IS_ATOM_INT(_10350) && IS_ATOM_INT(_p_18463)) {
        _10351 = (_10350 == _p_18463);
    }
    else {
        if (IS_ATOM_INT(_10350)) {
            _10351 = ((eudouble)_10350 == DBL_PTR(_p_18463)->dbl);
        }
        else {
            if (IS_ATOM_INT(_p_18463)) {
                _10351 = (DBL_PTR(_10350)->dbl == (eudouble)_p_18463);
            }
            else
            _10351 = (DBL_PTR(_10350)->dbl == DBL_PTR(_p_18463)->dbl);
        }
    }
    DeRef(_10350);
    _10350 = NOVALUE;
    if (_10351 == 0)
    {
        DeRef(_10351);
        _10351 = NOVALUE;
        goto L9; // [405] 695
    }
    else{
        DeRef(_10351);
        _10351 = NOVALUE;
    }

    /** eds.e:887			io:seek(current_db, free_list+(i-2)*8+4)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10352 = _i_18465 - 2;
        if ((object)((uintptr_t)_10352 +(uintptr_t) HIGH_BITS) >= 0){
            _10352 = NewDouble((eudouble)_10352);
        }
    }
    else {
        _10352 = NewDouble(DBL_PTR(_i_18465)->dbl - (eudouble)2);
    }
    if (IS_ATOM_INT(_10352)) {
        if (_10352 == (short)_10352){
            _10353 = _10352 * 8;
        }
        else{
            _10353 = NewDouble(_10352 * (eudouble)8);
        }
    }
    else {
        _10353 = NewDouble(DBL_PTR(_10352)->dbl * (eudouble)8);
    }
    DeRef(_10352);
    _10352 = NOVALUE;
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10353)) {
        _10354 = _free_list_18468 + _10353;
        if ((object)((uintptr_t)_10354 + (uintptr_t)HIGH_BITS) >= 0){
            _10354 = NewDouble((eudouble)_10354);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10354 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10353)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10353)) {
                _10354 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10353);
            }
            else
            _10354 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10353)->dbl);
        }
    }
    DeRef(_10353);
    _10353 = NOVALUE;
    if (IS_ATOM_INT(_10354)) {
        _10355 = _10354 + 4;
        if ((object)((uintptr_t)_10355 + (uintptr_t)HIGH_BITS) >= 0){
            _10355 = NewDouble((eudouble)_10355);
        }
    }
    else {
        _10355 = NewDouble(DBL_PTR(_10354)->dbl + (eudouble)4);
    }
    DeRef(_10354);
    _10354 = NOVALUE;
    DeRef(_pos_inlined_seek_at_427_18546);
    _pos_inlined_seek_at_427_18546 = _10355;
    _10355 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_427_18546);
    DeRef(_seek_1__tmp_at430_18548);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_427_18546;
    _seek_1__tmp_at430_18548 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_430_18547 = machine(19, _seek_1__tmp_at430_18548);
    DeRef(_pos_inlined_seek_at_427_18546);
    _pos_inlined_seek_at_427_18546 = NOVALUE;
    DeRef(_seek_1__tmp_at430_18548);
    _seek_1__tmp_at430_18548 = NOVALUE;

    /** eds.e:888			if i < free_count and p + psize = addr then*/
    if (IS_ATOM_INT(_i_18465)) {
        _10356 = (_i_18465 < _free_count_18474);
    }
    else {
        _10356 = (DBL_PTR(_i_18465)->dbl < (eudouble)_free_count_18474);
    }
    if (_10356 == 0) {
        goto LA; // [450] 656
    }
    if (IS_ATOM_INT(_p_18463) && IS_ATOM_INT(_psize_18464)) {
        _10358 = _p_18463 + _psize_18464;
        if ((object)((uintptr_t)_10358 + (uintptr_t)HIGH_BITS) >= 0){
            _10358 = NewDouble((eudouble)_10358);
        }
    }
    else {
        if (IS_ATOM_INT(_p_18463)) {
            _10358 = NewDouble((eudouble)_p_18463 + DBL_PTR(_psize_18464)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_18464)) {
                _10358 = NewDouble(DBL_PTR(_p_18463)->dbl + (eudouble)_psize_18464);
            }
            else
            _10358 = NewDouble(DBL_PTR(_p_18463)->dbl + DBL_PTR(_psize_18464)->dbl);
        }
    }
    if (IS_ATOM_INT(_10358) && IS_ATOM_INT(_addr_18467)) {
        _10359 = (_10358 == _addr_18467);
    }
    else {
        if (IS_ATOM_INT(_10358)) {
            _10359 = ((eudouble)_10358 == DBL_PTR(_addr_18467)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_18467)) {
                _10359 = (DBL_PTR(_10358)->dbl == (eudouble)_addr_18467);
            }
            else
            _10359 = (DBL_PTR(_10358)->dbl == DBL_PTR(_addr_18467)->dbl);
        }
    }
    DeRef(_10358);
    _10358 = NOVALUE;
    if (_10359 == 0)
    {
        DeRef(_10359);
        _10359 = NOVALUE;
        goto LA; // [465] 656
    }
    else{
        DeRef(_10359);
        _10359 = NOVALUE;
    }

    /** eds.e:890				put4(prev_size+psize+size) -- update size on free list (only)*/
    if (IS_ATOM_INT(_prev_size_18473) && IS_ATOM_INT(_psize_18464)) {
        _10360 = _prev_size_18473 + _psize_18464;
        if ((object)((uintptr_t)_10360 + (uintptr_t)HIGH_BITS) >= 0){
            _10360 = NewDouble((eudouble)_10360);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_18473)) {
            _10360 = NewDouble((eudouble)_prev_size_18473 + DBL_PTR(_psize_18464)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_18464)) {
                _10360 = NewDouble(DBL_PTR(_prev_size_18473)->dbl + (eudouble)_psize_18464);
            }
            else
            _10360 = NewDouble(DBL_PTR(_prev_size_18473)->dbl + DBL_PTR(_psize_18464)->dbl);
        }
    }
    if (IS_ATOM_INT(_10360) && IS_ATOM_INT(_size_18466)) {
        _10361 = _10360 + _size_18466;
        if ((object)((uintptr_t)_10361 + (uintptr_t)HIGH_BITS) >= 0){
            _10361 = NewDouble((eudouble)_10361);
        }
    }
    else {
        if (IS_ATOM_INT(_10360)) {
            _10361 = NewDouble((eudouble)_10360 + DBL_PTR(_size_18466)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_18466)) {
                _10361 = NewDouble(DBL_PTR(_10360)->dbl + (eudouble)_size_18466);
            }
            else
            _10361 = NewDouble(DBL_PTR(_10360)->dbl + DBL_PTR(_size_18466)->dbl);
        }
    }
    DeRef(_10360);
    _10360 = NOVALUE;
    DeRef(_x_inlined_put4_at_479_18557);
    _x_inlined_put4_at_479_18557 = _10361;
    _10361 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_479_18557)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_479_18557;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_479_18557)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at482_18558);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at482_18558 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at482_18558); // DJP 

    /** eds.e:444	end procedure*/
    goto LB; // [504] 507
LB: 
    DeRef(_x_inlined_put4_at_479_18557);
    _x_inlined_put4_at_479_18557 = NOVALUE;
    DeRefi(_put4_1__tmp_at482_18558);
    _put4_1__tmp_at482_18558 = NOVALUE;

    /** eds.e:891				io:seek(current_db, free_list+i*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        if (_i_18465 == (short)_i_18465){
            _10362 = _i_18465 * 8;
        }
        else{
            _10362 = NewDouble(_i_18465 * (eudouble)8);
        }
    }
    else {
        _10362 = NewDouble(DBL_PTR(_i_18465)->dbl * (eudouble)8);
    }
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10362)) {
        _10363 = _free_list_18468 + _10362;
        if ((object)((uintptr_t)_10363 + (uintptr_t)HIGH_BITS) >= 0){
            _10363 = NewDouble((eudouble)_10363);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10363 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10362)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10362)) {
                _10363 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10362);
            }
            else
            _10363 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10362)->dbl);
        }
    }
    DeRef(_10362);
    _10362 = NOVALUE;
    DeRef(_pos_inlined_seek_at_520_18562);
    _pos_inlined_seek_at_520_18562 = _10363;
    _10363 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_520_18562);
    DeRef(_seek_1__tmp_at523_18564);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_520_18562;
    _seek_1__tmp_at523_18564 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_523_18563 = machine(19, _seek_1__tmp_at523_18564);
    DeRef(_pos_inlined_seek_at_520_18562);
    _pos_inlined_seek_at_520_18562 = NOVALUE;
    DeRef(_seek_1__tmp_at523_18564);
    _seek_1__tmp_at523_18564 = NOVALUE;

    /** eds.e:892				remaining = io:get_bytes(current_db, (free_count-i)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10364 = _free_count_18474 - _i_18465;
        if ((object)((uintptr_t)_10364 +(uintptr_t) HIGH_BITS) >= 0){
            _10364 = NewDouble((eudouble)_10364);
        }
    }
    else {
        _10364 = NewDouble((eudouble)_free_count_18474 - DBL_PTR(_i_18465)->dbl);
    }
    if (IS_ATOM_INT(_10364)) {
        if (_10364 == (short)_10364){
            _10365 = _10364 * 8;
        }
        else{
            _10365 = NewDouble(_10364 * (eudouble)8);
        }
    }
    else {
        _10365 = NewDouble(DBL_PTR(_10364)->dbl * (eudouble)8);
    }
    DeRef(_10364);
    _10364 = NOVALUE;
    _0 = _remaining_18475;
    _remaining_18475 = _19get_bytes(_48current_db_17712, _10365);
    DeRef(_0);
    _10365 = NOVALUE;

    /** eds.e:893				io:seek(current_db, free_list+(i-1)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10367 = _i_18465 - 1;
        if ((object)((uintptr_t)_10367 +(uintptr_t) HIGH_BITS) >= 0){
            _10367 = NewDouble((eudouble)_10367);
        }
    }
    else {
        _10367 = NewDouble(DBL_PTR(_i_18465)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10367)) {
        if (_10367 == (short)_10367){
            _10368 = _10367 * 8;
        }
        else{
            _10368 = NewDouble(_10367 * (eudouble)8);
        }
    }
    else {
        _10368 = NewDouble(DBL_PTR(_10367)->dbl * (eudouble)8);
    }
    DeRef(_10367);
    _10367 = NOVALUE;
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10368)) {
        _10369 = _free_list_18468 + _10368;
        if ((object)((uintptr_t)_10369 + (uintptr_t)HIGH_BITS) >= 0){
            _10369 = NewDouble((eudouble)_10369);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10369 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10368)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10368)) {
                _10369 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10368);
            }
            else
            _10369 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10368)->dbl);
        }
    }
    DeRef(_10368);
    _10368 = NOVALUE;
    DeRef(_pos_inlined_seek_at_571_18572);
    _pos_inlined_seek_at_571_18572 = _10369;
    _10369 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_571_18572);
    DeRef(_seek_1__tmp_at574_18574);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_571_18572;
    _seek_1__tmp_at574_18574 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_574_18573 = machine(19, _seek_1__tmp_at574_18574);
    DeRef(_pos_inlined_seek_at_571_18572);
    _pos_inlined_seek_at_571_18572 = NOVALUE;
    DeRef(_seek_1__tmp_at574_18574);
    _seek_1__tmp_at574_18574 = NOVALUE;

    /** eds.e:894				putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_18475); // DJP 

    /** eds.e:449	end procedure*/
    goto LC; // [599] 602
LC: 

    /** eds.e:895				free_count -= 1*/
    _free_count_18474 = _free_count_18474 - 1;

    /** eds.e:896				io:seek(current_db, FREE_COUNT)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at611_18579);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at611_18579 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_611_18578 = machine(19, _seek_1__tmp_at611_18579);
    DeRefi(_seek_1__tmp_at611_18579);
    _seek_1__tmp_at611_18579 = NOVALUE;

    /** eds.e:897				put4(free_count)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_18474;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at626_18581);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at626_18581 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at626_18581); // DJP 

    /** eds.e:444	end procedure*/
    goto LD; // [648] 651
LD: 
    DeRefi(_put4_1__tmp_at626_18581);
    _put4_1__tmp_at626_18581 = NOVALUE;
    goto LE; // [653] 1028
LA: 

    /** eds.e:899				put4(prev_size+psize) -- increase previous size on free list (only)*/
    if (IS_ATOM_INT(_prev_size_18473) && IS_ATOM_INT(_psize_18464)) {
        _10371 = _prev_size_18473 + _psize_18464;
        if ((object)((uintptr_t)_10371 + (uintptr_t)HIGH_BITS) >= 0){
            _10371 = NewDouble((eudouble)_10371);
        }
    }
    else {
        if (IS_ATOM_INT(_prev_size_18473)) {
            _10371 = NewDouble((eudouble)_prev_size_18473 + DBL_PTR(_psize_18464)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_18464)) {
                _10371 = NewDouble(DBL_PTR(_prev_size_18473)->dbl + (eudouble)_psize_18464);
            }
            else
            _10371 = NewDouble(DBL_PTR(_prev_size_18473)->dbl + DBL_PTR(_psize_18464)->dbl);
        }
    }
    DeRef(_x_inlined_put4_at_661_18585);
    _x_inlined_put4_at_661_18585 = _10371;
    _10371 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_661_18585)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_661_18585;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_661_18585)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at664_18586);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at664_18586 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at664_18586); // DJP 

    /** eds.e:444	end procedure*/
    goto LF; // [686] 689
LF: 
    DeRef(_x_inlined_put4_at_661_18585);
    _x_inlined_put4_at_661_18585 = NOVALUE;
    DeRefi(_put4_1__tmp_at664_18586);
    _put4_1__tmp_at664_18586 = NOVALUE;
    goto LE; // [692] 1028
L9: 

    /** eds.e:901		elsif i < free_count and p + psize = addr then*/
    if (IS_ATOM_INT(_i_18465)) {
        _10372 = (_i_18465 < _free_count_18474);
    }
    else {
        _10372 = (DBL_PTR(_i_18465)->dbl < (eudouble)_free_count_18474);
    }
    if (_10372 == 0) {
        goto L10; // [701] 819
    }
    if (IS_ATOM_INT(_p_18463) && IS_ATOM_INT(_psize_18464)) {
        _10374 = _p_18463 + _psize_18464;
        if ((object)((uintptr_t)_10374 + (uintptr_t)HIGH_BITS) >= 0){
            _10374 = NewDouble((eudouble)_10374);
        }
    }
    else {
        if (IS_ATOM_INT(_p_18463)) {
            _10374 = NewDouble((eudouble)_p_18463 + DBL_PTR(_psize_18464)->dbl);
        }
        else {
            if (IS_ATOM_INT(_psize_18464)) {
                _10374 = NewDouble(DBL_PTR(_p_18463)->dbl + (eudouble)_psize_18464);
            }
            else
            _10374 = NewDouble(DBL_PTR(_p_18463)->dbl + DBL_PTR(_psize_18464)->dbl);
        }
    }
    if (IS_ATOM_INT(_10374) && IS_ATOM_INT(_addr_18467)) {
        _10375 = (_10374 == _addr_18467);
    }
    else {
        if (IS_ATOM_INT(_10374)) {
            _10375 = ((eudouble)_10374 == DBL_PTR(_addr_18467)->dbl);
        }
        else {
            if (IS_ATOM_INT(_addr_18467)) {
                _10375 = (DBL_PTR(_10374)->dbl == (eudouble)_addr_18467);
            }
            else
            _10375 = (DBL_PTR(_10374)->dbl == DBL_PTR(_addr_18467)->dbl);
        }
    }
    DeRef(_10374);
    _10374 = NOVALUE;
    if (_10375 == 0)
    {
        DeRef(_10375);
        _10375 = NOVALUE;
        goto L10; // [716] 819
    }
    else{
        DeRef(_10375);
        _10375 = NOVALUE;
    }

    /** eds.e:903			io:seek(current_db, free_list+(i-1)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10376 = _i_18465 - 1;
        if ((object)((uintptr_t)_10376 +(uintptr_t) HIGH_BITS) >= 0){
            _10376 = NewDouble((eudouble)_10376);
        }
    }
    else {
        _10376 = NewDouble(DBL_PTR(_i_18465)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10376)) {
        if (_10376 == (short)_10376){
            _10377 = _10376 * 8;
        }
        else{
            _10377 = NewDouble(_10376 * (eudouble)8);
        }
    }
    else {
        _10377 = NewDouble(DBL_PTR(_10376)->dbl * (eudouble)8);
    }
    DeRef(_10376);
    _10376 = NOVALUE;
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10377)) {
        _10378 = _free_list_18468 + _10377;
        if ((object)((uintptr_t)_10378 + (uintptr_t)HIGH_BITS) >= 0){
            _10378 = NewDouble((eudouble)_10378);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10378 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10377)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10377)) {
                _10378 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10377);
            }
            else
            _10378 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10377)->dbl);
        }
    }
    DeRef(_10377);
    _10377 = NOVALUE;
    DeRef(_pos_inlined_seek_at_734_18596);
    _pos_inlined_seek_at_734_18596 = _10378;
    _10378 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_734_18596);
    DeRef(_seek_1__tmp_at737_18598);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_734_18596;
    _seek_1__tmp_at737_18598 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_737_18597 = machine(19, _seek_1__tmp_at737_18598);
    DeRef(_pos_inlined_seek_at_734_18596);
    _pos_inlined_seek_at_734_18596 = NOVALUE;
    DeRef(_seek_1__tmp_at737_18598);
    _seek_1__tmp_at737_18598 = NOVALUE;

    /** eds.e:904			put4(p)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_p_18463)) {
        *poke4_addr = (uint32_t)_p_18463;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_18463)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at752_18600);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at752_18600 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at752_18600); // DJP 

    /** eds.e:444	end procedure*/
    goto L11; // [774] 777
L11: 
    DeRefi(_put4_1__tmp_at752_18600);
    _put4_1__tmp_at752_18600 = NOVALUE;

    /** eds.e:905			put4(psize+size)*/
    if (IS_ATOM_INT(_psize_18464) && IS_ATOM_INT(_size_18466)) {
        _10379 = _psize_18464 + _size_18466;
        if ((object)((uintptr_t)_10379 + (uintptr_t)HIGH_BITS) >= 0){
            _10379 = NewDouble((eudouble)_10379);
        }
    }
    else {
        if (IS_ATOM_INT(_psize_18464)) {
            _10379 = NewDouble((eudouble)_psize_18464 + DBL_PTR(_size_18466)->dbl);
        }
        else {
            if (IS_ATOM_INT(_size_18466)) {
                _10379 = NewDouble(DBL_PTR(_psize_18464)->dbl + (eudouble)_size_18466);
            }
            else
            _10379 = NewDouble(DBL_PTR(_psize_18464)->dbl + DBL_PTR(_size_18466)->dbl);
        }
    }
    DeRef(_x_inlined_put4_at_786_18603);
    _x_inlined_put4_at_786_18603 = _10379;
    _10379 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_786_18603)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_786_18603;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_786_18603)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at789_18604);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at789_18604 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at789_18604); // DJP 

    /** eds.e:444	end procedure*/
    goto L12; // [811] 814
L12: 
    DeRef(_x_inlined_put4_at_786_18603);
    _x_inlined_put4_at_786_18603 = NOVALUE;
    DeRefi(_put4_1__tmp_at789_18604);
    _put4_1__tmp_at789_18604 = NOVALUE;
    goto LE; // [816] 1028
L10: 

    /** eds.e:908			io:seek(current_db, free_list+(i-1)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10380 = _i_18465 - 1;
        if ((object)((uintptr_t)_10380 +(uintptr_t) HIGH_BITS) >= 0){
            _10380 = NewDouble((eudouble)_10380);
        }
    }
    else {
        _10380 = NewDouble(DBL_PTR(_i_18465)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10380)) {
        if (_10380 == (short)_10380){
            _10381 = _10380 * 8;
        }
        else{
            _10381 = NewDouble(_10380 * (eudouble)8);
        }
    }
    else {
        _10381 = NewDouble(DBL_PTR(_10380)->dbl * (eudouble)8);
    }
    DeRef(_10380);
    _10380 = NOVALUE;
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10381)) {
        _10382 = _free_list_18468 + _10381;
        if ((object)((uintptr_t)_10382 + (uintptr_t)HIGH_BITS) >= 0){
            _10382 = NewDouble((eudouble)_10382);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10382 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10381)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10381)) {
                _10382 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10381);
            }
            else
            _10382 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10381)->dbl);
        }
    }
    DeRef(_10381);
    _10381 = NOVALUE;
    DeRef(_pos_inlined_seek_at_834_18610);
    _pos_inlined_seek_at_834_18610 = _10382;
    _10382 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_834_18610);
    DeRef(_seek_1__tmp_at837_18612);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_834_18610;
    _seek_1__tmp_at837_18612 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_837_18611 = machine(19, _seek_1__tmp_at837_18612);
    DeRef(_pos_inlined_seek_at_834_18610);
    _pos_inlined_seek_at_834_18610 = NOVALUE;
    DeRef(_seek_1__tmp_at837_18612);
    _seek_1__tmp_at837_18612 = NOVALUE;

    /** eds.e:909			remaining = io:get_bytes(current_db, (free_count-i+1)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10383 = _free_count_18474 - _i_18465;
        if ((object)((uintptr_t)_10383 +(uintptr_t) HIGH_BITS) >= 0){
            _10383 = NewDouble((eudouble)_10383);
        }
    }
    else {
        _10383 = NewDouble((eudouble)_free_count_18474 - DBL_PTR(_i_18465)->dbl);
    }
    if (IS_ATOM_INT(_10383)) {
        _10384 = _10383 + 1;
        if (_10384 > MAXINT){
            _10384 = NewDouble((eudouble)_10384);
        }
    }
    else
    _10384 = binary_op(PLUS, 1, _10383);
    DeRef(_10383);
    _10383 = NOVALUE;
    if (IS_ATOM_INT(_10384)) {
        if (_10384 == (short)_10384){
            _10385 = _10384 * 8;
        }
        else{
            _10385 = NewDouble(_10384 * (eudouble)8);
        }
    }
    else {
        _10385 = NewDouble(DBL_PTR(_10384)->dbl * (eudouble)8);
    }
    DeRef(_10384);
    _10384 = NOVALUE;
    _0 = _remaining_18475;
    _remaining_18475 = _19get_bytes(_48current_db_17712, _10385);
    DeRef(_0);
    _10385 = NOVALUE;

    /** eds.e:910			free_count += 1*/
    _free_count_18474 = _free_count_18474 + 1;

    /** eds.e:911			io:seek(current_db, FREE_COUNT)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at883_18620);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 7;
    _seek_1__tmp_at883_18620 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_883_18619 = machine(19, _seek_1__tmp_at883_18620);
    DeRefi(_seek_1__tmp_at883_18620);
    _seek_1__tmp_at883_18620 = NOVALUE;

    /** eds.e:912			put4(free_count)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)_free_count_18474;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at898_18622);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at898_18622 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at898_18622); // DJP 

    /** eds.e:444	end procedure*/
    goto L13; // [920] 923
L13: 
    DeRefi(_put4_1__tmp_at898_18622);
    _put4_1__tmp_at898_18622 = NOVALUE;

    /** eds.e:913			io:seek(current_db, free_list+(i-1)*8)*/
    if (IS_ATOM_INT(_i_18465)) {
        _10388 = _i_18465 - 1;
        if ((object)((uintptr_t)_10388 +(uintptr_t) HIGH_BITS) >= 0){
            _10388 = NewDouble((eudouble)_10388);
        }
    }
    else {
        _10388 = NewDouble(DBL_PTR(_i_18465)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10388)) {
        if (_10388 == (short)_10388){
            _10389 = _10388 * 8;
        }
        else{
            _10389 = NewDouble(_10388 * (eudouble)8);
        }
    }
    else {
        _10389 = NewDouble(DBL_PTR(_10388)->dbl * (eudouble)8);
    }
    DeRef(_10388);
    _10388 = NOVALUE;
    if (IS_ATOM_INT(_free_list_18468) && IS_ATOM_INT(_10389)) {
        _10390 = _free_list_18468 + _10389;
        if ((object)((uintptr_t)_10390 + (uintptr_t)HIGH_BITS) >= 0){
            _10390 = NewDouble((eudouble)_10390);
        }
    }
    else {
        if (IS_ATOM_INT(_free_list_18468)) {
            _10390 = NewDouble((eudouble)_free_list_18468 + DBL_PTR(_10389)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10389)) {
                _10390 = NewDouble(DBL_PTR(_free_list_18468)->dbl + (eudouble)_10389);
            }
            else
            _10390 = NewDouble(DBL_PTR(_free_list_18468)->dbl + DBL_PTR(_10389)->dbl);
        }
    }
    DeRef(_10389);
    _10389 = NOVALUE;
    DeRef(_pos_inlined_seek_at_940_18627);
    _pos_inlined_seek_at_940_18627 = _10390;
    _10390 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_940_18627);
    DeRef(_seek_1__tmp_at943_18629);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_940_18627;
    _seek_1__tmp_at943_18629 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_943_18628 = machine(19, _seek_1__tmp_at943_18629);
    DeRef(_pos_inlined_seek_at_940_18627);
    _pos_inlined_seek_at_940_18627 = NOVALUE;
    DeRef(_seek_1__tmp_at943_18629);
    _seek_1__tmp_at943_18629 = NOVALUE;

    /** eds.e:914			put4(p)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_p_18463)) {
        *poke4_addr = (uint32_t)_p_18463;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_p_18463)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at958_18631);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at958_18631 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at958_18631); // DJP 

    /** eds.e:444	end procedure*/
    goto L14; // [980] 983
L14: 
    DeRefi(_put4_1__tmp_at958_18631);
    _put4_1__tmp_at958_18631 = NOVALUE;

    /** eds.e:915			put4(psize)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_psize_18464)) {
        *poke4_addr = (uint32_t)_psize_18464;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_psize_18464)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at986_18633);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at986_18633 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at986_18633); // DJP 

    /** eds.e:444	end procedure*/
    goto L15; // [1008] 1011
L15: 
    DeRefi(_put4_1__tmp_at986_18633);
    _put4_1__tmp_at986_18633 = NOVALUE;

    /** eds.e:916			putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_18475); // DJP 

    /** eds.e:449	end procedure*/
    goto L16; // [1024] 1027
L16: 
LE: 

    /** eds.e:919		if new_space then*/
    if (_new_space_18470 == 0) {
        goto L17; // [1032] 1043
    }
    else {
        if (!IS_ATOM_INT(_new_space_18470) && DBL_PTR(_new_space_18470)->dbl == 0.0){
            goto L17; // [1032] 1043
        }
    }

    /** eds.e:920			db_free(to_be_freed) -- free the old space*/
    Ref(_to_be_freed_18471);
    _48db_free(_to_be_freed_18471);
L17: 

    /** eds.e:922	end procedure*/
    DeRef(_p_18463);
    DeRef(_psize_18464);
    DeRef(_i_18465);
    DeRef(_size_18466);
    DeRef(_addr_18467);
    DeRef(_free_list_18468);
    DeRef(_free_list_space_18469);
    DeRef(_new_space_18470);
    DeRef(_to_be_freed_18471);
    DeRef(_prev_addr_18472);
    DeRef(_prev_size_18473);
    DeRef(_remaining_18475);
    DeRef(_10372);
    _10372 = NOVALUE;
    DeRef(_10348);
    _10348 = NOVALUE;
    DeRef(_10356);
    _10356 = NOVALUE;
    return;
    ;
}


void _48save_keys()
{
    object _k_18638 = NOVALUE;
    object _10397 = NOVALUE;
    object _10393 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:926		if caching_option = 1 then*/

    /** eds.e:927			if current_table_pos > 0 then*/
    if (binary_op_a(LESSEQ, _48current_table_pos_17713, 0)){
        goto L1; // [13] 81
    }

    /** eds.e:928				k = eu:find({current_db, current_table_pos}, cache_index)*/
    Ref(_48current_table_pos_17713);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _48current_table_pos_17713;
    _10393 = MAKE_SEQ(_1);
    _k_18638 = find_from(_10393, _48cache_index_17721, 1);
    DeRefDS(_10393);
    _10393 = NOVALUE;

    /** eds.e:929				if k != 0 then*/
    if (_k_18638 == 0)
    goto L2; // [36] 53

    /** eds.e:930					key_cache[k] = key_pointers*/
    RefDS(_48key_pointers_17719);
    _2 = (object)SEQ_PTR(_48key_cache_17720);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48key_cache_17720 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _k_18638);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _48key_pointers_17719;
    DeRef(_1);
    goto L3; // [50] 80
L2: 

    /** eds.e:932					key_cache = append(key_cache, key_pointers)*/
    RefDS(_48key_pointers_17719);
    Append(&_48key_cache_17720, _48key_cache_17720, _48key_pointers_17719);

    /** eds.e:933					cache_index = append(cache_index, {current_db, current_table_pos})*/
    Ref(_48current_table_pos_17713);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _48current_table_pos_17713;
    _10397 = MAKE_SEQ(_1);
    RefDS(_10397);
    Append(&_48cache_index_17721, _48cache_index_17721, _10397);
    DeRefDS(_10397);
    _10397 = NOVALUE;
L3: 
L1: 

    /** eds.e:937	end procedure*/
    return;
    ;
}


object _48db_create(object _path_18735, object _lock_method_18736, object _init_tables_18737, object _init_free_18738)
{
    object _db_18739 = NOVALUE;
    object _lock_file_1__tmp_at222_18780 = NOVALUE;
    object _lock_file_inlined_lock_file_at_222_18779 = NOVALUE;
    object _put4_1__tmp_at342_18789 = NOVALUE;
    object _put4_1__tmp_at370_18791 = NOVALUE;
    object _put4_1__tmp_at413_18797 = NOVALUE;
    object _x_inlined_put4_at_410_18796 = NOVALUE;
    object _put4_1__tmp_at452_18802 = NOVALUE;
    object _x_inlined_put4_at_449_18801 = NOVALUE;
    object _put4_1__tmp_at480_18804 = NOVALUE;
    object _s_inlined_putn_at_516_18808 = NOVALUE;
    object _put4_1__tmp_at548_18813 = NOVALUE;
    object _x_inlined_put4_at_545_18812 = NOVALUE;
    object _s_inlined_putn_at_584_18817 = NOVALUE;
    object _10497 = NOVALUE;
    object _10496 = NOVALUE;
    object _10495 = NOVALUE;
    object _10494 = NOVALUE;
    object _10493 = NOVALUE;
    object _10492 = NOVALUE;
    object _10491 = NOVALUE;
    object _10490 = NOVALUE;
    object _10489 = NOVALUE;
    object _10488 = NOVALUE;
    object _10487 = NOVALUE;
    object _10468 = NOVALUE;
    object _10466 = NOVALUE;
    object _10465 = NOVALUE;
    object _10463 = NOVALUE;
    object _10462 = NOVALUE;
    object _10460 = NOVALUE;
    object _10459 = NOVALUE;
    object _10457 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1133		db = find(path, Known_Aliases)*/
    _db_18739 = find_from(_path_18735, _48Known_Aliases_17733, 1);

    /** eds.e:1134		if db then*/
    if (_db_18739 == 0)
    {
        goto L1; // [20] 94
    }
    else{
    }

    /** eds.e:1136			path = Alias_Details[db][1]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10457 = (object)*(((s1_ptr)_2)->base + _db_18739);
    DeRefDS(_path_18735);
    _2 = (object)SEQ_PTR(_10457);
    _path_18735 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_18735);
    _10457 = NOVALUE;

    /** eds.e:1137			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10459 = (object)*(((s1_ptr)_2)->base + _db_18739);
    _2 = (object)SEQ_PTR(_10459);
    _10460 = (object)*(((s1_ptr)_2)->base + 2);
    _10459 = NOVALUE;
    _2 = (object)SEQ_PTR(_10460);
    _lock_method_18736 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_18736)){
        _lock_method_18736 = (object)DBL_PTR(_lock_method_18736)->dbl;
    }
    _10460 = NOVALUE;

    /** eds.e:1138			init_tables = Alias_Details[db][2][CONNECT_TABLES]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10462 = (object)*(((s1_ptr)_2)->base + _db_18739);
    _2 = (object)SEQ_PTR(_10462);
    _10463 = (object)*(((s1_ptr)_2)->base + 2);
    _10462 = NOVALUE;
    _2 = (object)SEQ_PTR(_10463);
    _init_tables_18737 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_init_tables_18737)){
        _init_tables_18737 = (object)DBL_PTR(_init_tables_18737)->dbl;
    }
    _10463 = NOVALUE;

    /** eds.e:1139			init_free = Alias_Details[db][2][CONNECT_FREE]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10465 = (object)*(((s1_ptr)_2)->base + _db_18739);
    _2 = (object)SEQ_PTR(_10465);
    _10466 = (object)*(((s1_ptr)_2)->base + 2);
    _10465 = NOVALUE;
    _2 = (object)SEQ_PTR(_10466);
    _init_free_18738 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_init_free_18738)){
        _init_free_18738 = (object)DBL_PTR(_init_free_18738)->dbl;
    }
    _10466 = NOVALUE;
    goto L2; // [91] 134
L1: 

    /** eds.e:1141			path = filesys:canonical_path( defaultext(path, "edb") )*/
    RefDS(_path_18735);
    RefDS(_10451);
    _10468 = _16defaultext(_path_18735, _10451);
    _0 = _path_18735;
    _path_18735 = _16canonical_path(_10468, 0, 0);
    DeRefDS(_0);
    _10468 = NOVALUE;

    /** eds.e:1143			if init_tables < 1 then*/
    if (_init_tables_18737 >= 1)
    goto L3; // [111] 121

    /** eds.e:1144				init_tables = 1*/
    _init_tables_18737 = 1;
L3: 

    /** eds.e:1147			if init_free < 0 then*/
    if (_init_free_18738 >= 0)
    goto L4; // [123] 133

    /** eds.e:1148				init_free = 0*/
    _init_free_18738 = 0;
L4: 
L2: 

    /** eds.e:1154		db = open(path, "rb")*/
    _db_18739 = EOpen(_path_18735, _10472, 0);

    /** eds.e:1155		if db != -1 then*/
    if (_db_18739 == -1)
    goto L5; // [143] 158

    /** eds.e:1157			close(db)*/
    EClose(_db_18739);

    /** eds.e:1158			return DB_EXISTS_ALREADY*/
    DeRefDS(_path_18735);
    return -2;
L5: 

    /** eds.e:1162		db = open(path, "wb")*/
    _db_18739 = EOpen(_path_18735, _10475, 0);

    /** eds.e:1163		if db = -1 then*/
    if (_db_18739 != -1)
    goto L6; // [167] 178

    /** eds.e:1164			return DB_OPEN_FAIL*/
    DeRefDS(_path_18735);
    return -1;
L6: 

    /** eds.e:1166		close(db)*/
    EClose(_db_18739);

    /** eds.e:1169		db = open(path, "ub")*/
    _db_18739 = EOpen(_path_18735, _10478, 0);

    /** eds.e:1170		if db = -1 then*/
    if (_db_18739 != -1)
    goto L7; // [191] 202

    /** eds.e:1171			return DB_OPEN_FAIL*/
    DeRefDS(_path_18735);
    return -1;
L7: 

    /** eds.e:1173		if lock_method = DB_LOCK_SHARED then*/
    if (_lock_method_18736 != 1)
    goto L8; // [204] 214

    /** eds.e:1175			lock_method = DB_LOCK_NO*/
    _lock_method_18736 = 0;
L8: 

    /** eds.e:1177		if lock_method = DB_LOCK_EXCLUSIVE then*/
    if (_lock_method_18736 != 2)
    goto L9; // [216] 248

    /** eds.e:1178			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    _0 = _lock_file_1__tmp_at222_18780;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_18739;
    ((intptr_t*)_2)[2] = 2;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at222_18780 = MAKE_SEQ(_1);
    DeRef(_0);
    _lock_file_inlined_lock_file_at_222_18779 = machine(61, _lock_file_1__tmp_at222_18780);
    DeRef(_lock_file_1__tmp_at222_18780);
    _lock_file_1__tmp_at222_18780 = NOVALUE;
    if (_lock_file_inlined_lock_file_at_222_18779 != 0)
    goto LA; // [237] 247

    /** eds.e:1179				return DB_LOCK_FAIL*/
    DeRefDS(_path_18735);
    return -3;
LA: 
L9: 

    /** eds.e:1182		save_keys()*/
    _48save_keys();

    /** eds.e:1183		current_db = db*/
    _48current_db_17712 = _db_18739;

    /** eds.e:1184		current_lock = lock_method*/
    _48current_lock_17718 = _lock_method_18736;

    /** eds.e:1185		current_table_pos = -1*/
    DeRef(_48current_table_pos_17713);
    _48current_table_pos_17713 = -1;

    /** eds.e:1186		current_table_name = ""*/
    RefDS(_5);
    DeRef(_48current_table_name_17714);
    _48current_table_name_17714 = _5;

    /** eds.e:1187		db_names = append(db_names, path)*/
    RefDS(_path_18735);
    Append(&_48db_names_17715, _48db_names_17715, _path_18735);

    /** eds.e:1188		db_lock_methods = append(db_lock_methods, lock_method)*/
    Append(&_48db_lock_methods_17717, _48db_lock_methods_17717, _lock_method_18736);

    /** eds.e:1189		db_file_nums = append(db_file_nums, db)*/
    Append(&_48db_file_nums_17716, _48db_file_nums_17716, _db_18739);

    /** eds.e:1192		put1(DB_MAGIC) -- so we know what type of file it is*/

    /** eds.e:433		puts(current_db, x)*/
    EPuts(_48current_db_17712, 77); // DJP 

    /** eds.e:434	end procedure*/
    goto LB; // [309] 312
LB: 

    /** eds.e:1193		put1(DB_MAJOR) -- major version*/

    /** eds.e:433		puts(current_db, x)*/
    EPuts(_48current_db_17712, 4); // DJP 

    /** eds.e:434	end procedure*/
    goto LC; // [323] 326
LC: 

    /** eds.e:1194		put1(DB_MINOR) -- minor version*/

    /** eds.e:433		puts(current_db, x)*/
    EPuts(_48current_db_17712, 0); // DJP 

    /** eds.e:434	end procedure*/
    goto LD; // [337] 340
LD: 

    /** eds.e:1196		put4(19)  -- pointer to tables*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)19;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at342_18789);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at342_18789 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at342_18789); // DJP 

    /** eds.e:444	end procedure*/
    goto LE; // [363] 366
LE: 
    DeRefi(_put4_1__tmp_at342_18789);
    _put4_1__tmp_at342_18789 = NOVALUE;

    /** eds.e:1198		put4(0)   -- number of free blocks*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)0;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at370_18791);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at370_18791 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at370_18791); // DJP 

    /** eds.e:444	end procedure*/
    goto LF; // [391] 394
LF: 
    DeRefi(_put4_1__tmp_at370_18791);
    _put4_1__tmp_at370_18791 = NOVALUE;

    /** eds.e:1200		put4(23 + init_tables * SIZEOF_TABLE_HEADER + 4)   -- pointer to free list*/
    if (_init_tables_18737 == (short)_init_tables_18737){
        _10487 = _init_tables_18737 * 16;
    }
    else{
        _10487 = NewDouble(_init_tables_18737 * (eudouble)16);
    }
    if (IS_ATOM_INT(_10487)) {
        _10488 = 23 + _10487;
        if ((object)((uintptr_t)_10488 + (uintptr_t)HIGH_BITS) >= 0){
            _10488 = NewDouble((eudouble)_10488);
        }
    }
    else {
        _10488 = NewDouble((eudouble)23 + DBL_PTR(_10487)->dbl);
    }
    DeRef(_10487);
    _10487 = NOVALUE;
    if (IS_ATOM_INT(_10488)) {
        _10489 = _10488 + 4;
        if ((object)((uintptr_t)_10489 + (uintptr_t)HIGH_BITS) >= 0){
            _10489 = NewDouble((eudouble)_10489);
        }
    }
    else {
        _10489 = NewDouble(DBL_PTR(_10488)->dbl + (eudouble)4);
    }
    DeRef(_10488);
    _10488 = NOVALUE;
    DeRef(_x_inlined_put4_at_410_18796);
    _x_inlined_put4_at_410_18796 = _10489;
    _10489 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_410_18796)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_410_18796;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_410_18796)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at413_18797);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at413_18797 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at413_18797); // DJP 

    /** eds.e:444	end procedure*/
    goto L10; // [434] 437
L10: 
    DeRef(_x_inlined_put4_at_410_18796);
    _x_inlined_put4_at_410_18796 = NOVALUE;
    DeRefi(_put4_1__tmp_at413_18797);
    _put4_1__tmp_at413_18797 = NOVALUE;

    /** eds.e:1202		put4( 8 + init_tables * SIZEOF_TABLE_HEADER)  -- allocated size*/
    if (_init_tables_18737 == (short)_init_tables_18737){
        _10490 = _init_tables_18737 * 16;
    }
    else{
        _10490 = NewDouble(_init_tables_18737 * (eudouble)16);
    }
    if (IS_ATOM_INT(_10490)) {
        _10491 = 8 + _10490;
        if ((object)((uintptr_t)_10491 + (uintptr_t)HIGH_BITS) >= 0){
            _10491 = NewDouble((eudouble)_10491);
        }
    }
    else {
        _10491 = NewDouble((eudouble)8 + DBL_PTR(_10490)->dbl);
    }
    DeRef(_10490);
    _10490 = NOVALUE;
    DeRef(_x_inlined_put4_at_449_18801);
    _x_inlined_put4_at_449_18801 = _10491;
    _10491 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_449_18801)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_449_18801;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_449_18801)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at452_18802);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at452_18802 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at452_18802); // DJP 

    /** eds.e:444	end procedure*/
    goto L11; // [473] 476
L11: 
    DeRef(_x_inlined_put4_at_449_18801);
    _x_inlined_put4_at_449_18801 = NOVALUE;
    DeRefi(_put4_1__tmp_at452_18802);
    _put4_1__tmp_at452_18802 = NOVALUE;

    /** eds.e:1204		put4(0)   -- number of tables that currently exist*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)0;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at480_18804);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at480_18804 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at480_18804); // DJP 

    /** eds.e:444	end procedure*/
    goto L12; // [501] 504
L12: 
    DeRefi(_put4_1__tmp_at480_18804);
    _put4_1__tmp_at480_18804 = NOVALUE;

    /** eds.e:1206		putn(repeat(0, init_tables * SIZEOF_TABLE_HEADER))*/
    _10492 = _init_tables_18737 * 16;
    _10493 = Repeat(0, _10492);
    _10492 = NOVALUE;
    DeRefi(_s_inlined_putn_at_516_18808);
    _s_inlined_putn_at_516_18808 = _10493;
    _10493 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_516_18808); // DJP 

    /** eds.e:449	end procedure*/
    goto L13; // [530] 533
L13: 
    DeRefi(_s_inlined_putn_at_516_18808);
    _s_inlined_putn_at_516_18808 = NOVALUE;

    /** eds.e:1208		put4(4+init_free*8)   -- allocated size*/
    if (_init_free_18738 == (short)_init_free_18738){
        _10494 = _init_free_18738 * 8;
    }
    else{
        _10494 = NewDouble(_init_free_18738 * (eudouble)8);
    }
    if (IS_ATOM_INT(_10494)) {
        _10495 = 4 + _10494;
        if ((object)((uintptr_t)_10495 + (uintptr_t)HIGH_BITS) >= 0){
            _10495 = NewDouble((eudouble)_10495);
        }
    }
    else {
        _10495 = NewDouble((eudouble)4 + DBL_PTR(_10494)->dbl);
    }
    DeRef(_10494);
    _10494 = NOVALUE;
    DeRef(_x_inlined_put4_at_545_18812);
    _x_inlined_put4_at_545_18812 = _10495;
    _10495 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_545_18812)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_545_18812;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_545_18812)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at548_18813);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at548_18813 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at548_18813); // DJP 

    /** eds.e:444	end procedure*/
    goto L14; // [569] 572
L14: 
    DeRef(_x_inlined_put4_at_545_18812);
    _x_inlined_put4_at_545_18812 = NOVALUE;
    DeRefi(_put4_1__tmp_at548_18813);
    _put4_1__tmp_at548_18813 = NOVALUE;

    /** eds.e:1209		putn(repeat(0, init_free * 8))*/
    _10496 = _init_free_18738 * 8;
    _10497 = Repeat(0, _10496);
    _10496 = NOVALUE;
    DeRefi(_s_inlined_putn_at_584_18817);
    _s_inlined_putn_at_584_18817 = _10497;
    _10497 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_584_18817); // DJP 

    /** eds.e:449	end procedure*/
    goto L15; // [598] 601
L15: 
    DeRefi(_s_inlined_putn_at_584_18817);
    _s_inlined_putn_at_584_18817 = NOVALUE;

    /** eds.e:1210		return DB_OK*/
    DeRefDS(_path_18735);
    return 0;
    ;
}


object _48db_open(object _path_18820, object _lock_method_18821)
{
    object _db_18822 = NOVALUE;
    object _magic_18823 = NOVALUE;
    object _lock_file_1__tmp_at129_18848 = NOVALUE;
    object _lock_file_inlined_lock_file_at_129_18847 = NOVALUE;
    object _lock_file_1__tmp_at169_18855 = NOVALUE;
    object _lock_file_inlined_lock_file_at_169_18854 = NOVALUE;
    object _10508 = NOVALUE;
    object _10506 = NOVALUE;
    object _10504 = NOVALUE;
    object _10502 = NOVALUE;
    object _10501 = NOVALUE;
    object _10499 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1273		db = find(path, Known_Aliases)*/
    _db_18822 = find_from(_path_18820, _48Known_Aliases_17733, 1);

    /** eds.e:1274		if db then*/
    if (_db_18822 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }

    /** eds.e:1276			path = Alias_Details[db][1]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10499 = (object)*(((s1_ptr)_2)->base + _db_18822);
    DeRefDS(_path_18820);
    _2 = (object)SEQ_PTR(_10499);
    _path_18820 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_18820);
    _10499 = NOVALUE;

    /** eds.e:1277			lock_method = Alias_Details[db][2][CONNECT_LOCK]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10501 = (object)*(((s1_ptr)_2)->base + _db_18822);
    _2 = (object)SEQ_PTR(_10501);
    _10502 = (object)*(((s1_ptr)_2)->base + 2);
    _10501 = NOVALUE;
    _2 = (object)SEQ_PTR(_10502);
    _lock_method_18821 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_18821)){
        _lock_method_18821 = (object)DBL_PTR(_lock_method_18821)->dbl;
    }
    _10502 = NOVALUE;
    goto L2; // [51] 70
L1: 

    /** eds.e:1279			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    RefDS(_path_18820);
    RefDS(_10451);
    _10504 = _16defaultext(_path_18820, _10451);
    _0 = _path_18820;
    _path_18820 = _16canonical_path(_10504, 0, 0);
    DeRefDS(_0);
    _10504 = NOVALUE;
L2: 

    /** eds.e:1282		if lock_method = DB_LOCK_NO or*/
    _10506 = (_lock_method_18821 == 0);
    if (_10506 != 0) {
        goto L3; // [76] 89
    }
    _10508 = (_lock_method_18821 == 2);
    if (_10508 == 0)
    {
        DeRef(_10508);
        _10508 = NOVALUE;
        goto L4; // [85] 99
    }
    else{
        DeRef(_10508);
        _10508 = NOVALUE;
    }
L3: 

    /** eds.e:1285			db = open(path, "ub")*/
    _db_18822 = EOpen(_path_18820, _10478, 0);
    goto L5; // [96] 107
L4: 

    /** eds.e:1288			db = open(path, "rb")*/
    _db_18822 = EOpen(_path_18820, _10472, 0);
L5: 

    /** eds.e:1291	ifdef WINDOWS then*/

    /** eds.e:1298		if db = -1 then*/
    if (_db_18822 != -1)
    goto L6; // [111] 122

    /** eds.e:1299			return DB_OPEN_FAIL*/
    DeRefDS(_path_18820);
    DeRef(_10506);
    _10506 = NOVALUE;
    return -1;
L6: 

    /** eds.e:1301		if lock_method = DB_LOCK_EXCLUSIVE then*/
    if (_lock_method_18821 != 2)
    goto L7; // [124] 162

    /** eds.e:1302			if not io:lock_file(db, io:LOCK_EXCLUSIVE, {}) then*/

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    _0 = _lock_file_1__tmp_at129_18848;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_18822;
    ((intptr_t*)_2)[2] = 2;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at129_18848 = MAKE_SEQ(_1);
    DeRef(_0);
    _lock_file_inlined_lock_file_at_129_18847 = machine(61, _lock_file_1__tmp_at129_18848);
    DeRef(_lock_file_1__tmp_at129_18848);
    _lock_file_1__tmp_at129_18848 = NOVALUE;
    if (_lock_file_inlined_lock_file_at_129_18847 != 0)
    goto L8; // [145] 201

    /** eds.e:1303				close(db)*/
    EClose(_db_18822);

    /** eds.e:1304				return DB_LOCK_FAIL*/
    DeRefDS(_path_18820);
    DeRef(_10506);
    _10506 = NOVALUE;
    return -3;
    goto L8; // [159] 201
L7: 

    /** eds.e:1306		elsif lock_method = DB_LOCK_SHARED then*/
    if (_lock_method_18821 != 1)
    goto L9; // [164] 200

    /** eds.e:1307			if not io:lock_file(db, io:LOCK_SHARED, {}) then*/

    /** io.e:1055		return machine_func(M_LOCK_FILE, {fn, t, r})*/
    _0 = _lock_file_1__tmp_at169_18855;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _db_18822;
    ((intptr_t*)_2)[2] = 1;
    RefDS(_5);
    ((intptr_t*)_2)[3] = _5;
    _lock_file_1__tmp_at169_18855 = MAKE_SEQ(_1);
    DeRef(_0);
    _lock_file_inlined_lock_file_at_169_18854 = machine(61, _lock_file_1__tmp_at169_18855);
    DeRef(_lock_file_1__tmp_at169_18855);
    _lock_file_1__tmp_at169_18855 = NOVALUE;
    if (_lock_file_inlined_lock_file_at_169_18854 != 0)
    goto LA; // [185] 199

    /** eds.e:1308				close(db)*/
    EClose(_db_18822);

    /** eds.e:1309				return DB_LOCK_FAIL*/
    DeRefDS(_path_18820);
    DeRef(_10506);
    _10506 = NOVALUE;
    return -3;
LA: 
L9: 
L8: 

    /** eds.e:1312		magic = getc(db)*/
    if (_db_18822 != last_r_file_no) {
        last_r_file_ptr = which_file(_db_18822, EF_READ);
        last_r_file_no = _db_18822;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _magic_18823 = getc((FILE*)xstdin);
        }
        else{
            _magic_18823 = getc(last_r_file_ptr);
        }
    }
    else{
        _magic_18823 = getc(last_r_file_ptr);
    }

    /** eds.e:1313		if magic != DB_MAGIC then*/
    if (_magic_18823 == 77)
    goto LB; // [208] 223

    /** eds.e:1314			close(db)*/
    EClose(_db_18822);

    /** eds.e:1315			return DB_OPEN_FAIL*/
    DeRefDS(_path_18820);
    DeRef(_10506);
    _10506 = NOVALUE;
    return -1;
LB: 

    /** eds.e:1317		save_keys()*/
    _48save_keys();

    /** eds.e:1318		current_db = db */
    _48current_db_17712 = _db_18822;

    /** eds.e:1319		current_table_pos = -1*/
    DeRef(_48current_table_pos_17713);
    _48current_table_pos_17713 = -1;

    /** eds.e:1320		current_table_name = ""*/
    RefDS(_5);
    DeRef(_48current_table_name_17714);
    _48current_table_name_17714 = _5;

    /** eds.e:1321		current_lock = lock_method*/
    _48current_lock_17718 = _lock_method_18821;

    /** eds.e:1322		db_names = append(db_names, path)*/
    RefDS(_path_18820);
    Append(&_48db_names_17715, _48db_names_17715, _path_18820);

    /** eds.e:1323		db_lock_methods = append(db_lock_methods, lock_method)*/
    Append(&_48db_lock_methods_17717, _48db_lock_methods_17717, _lock_method_18821);

    /** eds.e:1324		db_file_nums = append(db_file_nums, db)*/
    Append(&_48db_file_nums_17716, _48db_file_nums_17716, _db_18822);

    /** eds.e:1325		return DB_OK*/
    DeRefDS(_path_18820);
    DeRef(_10506);
    _10506 = NOVALUE;
    return 0;
    ;
}


object _48db_select(object _path_18865, object _lock_method_18866)
{
    object _index_18867 = NOVALUE;
    object _10527 = NOVALUE;
    object _10525 = NOVALUE;
    object _10524 = NOVALUE;
    object _10522 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1372		index = find(path, Known_Aliases)*/
    _index_18867 = find_from(_path_18865, _48Known_Aliases_17733, 1);

    /** eds.e:1373		if index then*/
    if (_index_18867 == 0)
    {
        goto L1; // [16] 54
    }
    else{
    }

    /** eds.e:1375			path = Alias_Details[index][1]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10522 = (object)*(((s1_ptr)_2)->base + _index_18867);
    DeRefDS(_path_18865);
    _2 = (object)SEQ_PTR(_10522);
    _path_18865 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_path_18865);
    _10522 = NOVALUE;

    /** eds.e:1376			lock_method = Alias_Details[index][2][CONNECT_LOCK]*/
    _2 = (object)SEQ_PTR(_48Alias_Details_17734);
    _10524 = (object)*(((s1_ptr)_2)->base + _index_18867);
    _2 = (object)SEQ_PTR(_10524);
    _10525 = (object)*(((s1_ptr)_2)->base + 2);
    _10524 = NOVALUE;
    _2 = (object)SEQ_PTR(_10525);
    _lock_method_18866 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_lock_method_18866)){
        _lock_method_18866 = (object)DBL_PTR(_lock_method_18866)->dbl;
    }
    _10525 = NOVALUE;
    goto L2; // [51] 70
L1: 

    /** eds.e:1378			path = filesys:canonical_path( filesys:defaultext(path, "edb") )*/
    RefDS(_path_18865);
    RefDS(_10451);
    _10527 = _16defaultext(_path_18865, _10451);
    _0 = _path_18865;
    _path_18865 = _16canonical_path(_10527, 0, 0);
    DeRefDS(_0);
    _10527 = NOVALUE;
L2: 

    /** eds.e:1381		index = eu:find(path, db_names)*/
    _index_18867 = find_from(_path_18865, _48db_names_17715, 1);

    /** eds.e:1382		if index = 0 then*/
    if (_index_18867 != 0)
    goto L3; // [81] 130

    /** eds.e:1383			if lock_method = -1 then*/
    if (_lock_method_18866 != -1)
    goto L4; // [87] 98

    /** eds.e:1384				return DB_OPEN_FAIL*/
    DeRefDS(_path_18865);
    return -1;
L4: 

    /** eds.e:1386			index = db_open(path, lock_method)*/
    RefDS(_path_18865);
    _index_18867 = _48db_open(_path_18865, _lock_method_18866);
    if (!IS_ATOM_INT(_index_18867)) {
        _1 = (object)(DBL_PTR(_index_18867)->dbl);
        DeRefDS(_index_18867);
        _index_18867 = _1;
    }

    /** eds.e:1387			if index != DB_OK then*/
    if (_index_18867 == 0)
    goto L5; // [109] 120

    /** eds.e:1388				return index*/
    DeRefDS(_path_18865);
    return _index_18867;
L5: 

    /** eds.e:1390			index = eu:find(path, db_names)*/
    _index_18867 = find_from(_path_18865, _48db_names_17715, 1);
L3: 

    /** eds.e:1392		save_keys()*/
    _48save_keys();

    /** eds.e:1393		current_db = db_file_nums[index]*/
    _2 = (object)SEQ_PTR(_48db_file_nums_17716);
    _48current_db_17712 = (object)*(((s1_ptr)_2)->base + _index_18867);
    if (!IS_ATOM_INT(_48current_db_17712))
    _48current_db_17712 = (object)DBL_PTR(_48current_db_17712)->dbl;

    /** eds.e:1394		current_lock = db_lock_methods[index]*/
    _2 = (object)SEQ_PTR(_48db_lock_methods_17717);
    _48current_lock_17718 = (object)*(((s1_ptr)_2)->base + _index_18867);
    if (!IS_ATOM_INT(_48current_lock_17718))
    _48current_lock_17718 = (object)DBL_PTR(_48current_lock_17718)->dbl;

    /** eds.e:1395		current_table_pos = -1*/
    DeRef(_48current_table_pos_17713);
    _48current_table_pos_17713 = -1;

    /** eds.e:1396		current_table_name = ""*/
    RefDS(_5);
    DeRef(_48current_table_name_17714);
    _48current_table_name_17714 = _5;

    /** eds.e:1397		key_pointers = {}*/
    RefDS(_5);
    DeRef(_48key_pointers_17719);
    _48key_pointers_17719 = _5;

    /** eds.e:1398		return DB_OK*/
    DeRefDS(_path_18865);
    return 0;
    ;
}


void _48db_close()
{
    object _unlock_file_1__tmp_at25_18896 = NOVALUE;
    object _index_18891 = NOVALUE;
    object _10544 = NOVALUE;
    object _10543 = NOVALUE;
    object _10542 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1413		if current_db = -1 then*/
    if (_48current_db_17712 != -1)
    goto L1; // [5] 15

    /** eds.e:1414			return*/
    return;
L1: 

    /** eds.e:1417		if current_lock then*/
    if (_48current_lock_17718 == 0)
    {
        goto L2; // [19] 43
    }
    else{
    }

    /** eds.e:1418			io:unlock_file(current_db, {})*/

    /** io.e:1086		machine_proc(M_UNLOCK_FILE, {fn, r})*/
    RefDS(_5);
    DeRef(_unlock_file_1__tmp_at25_18896);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _5;
    _unlock_file_1__tmp_at25_18896 = MAKE_SEQ(_1);
    machine(62, _unlock_file_1__tmp_at25_18896);

    /** io.e:1087	end procedure*/
    goto L3; // [37] 40
L3: 
    DeRef(_unlock_file_1__tmp_at25_18896);
    _unlock_file_1__tmp_at25_18896 = NOVALUE;
L2: 

    /** eds.e:1420		close(current_db)*/
    EClose(_48current_db_17712);

    /** eds.e:1422		index = eu:find(current_db, db_file_nums)*/
    _index_18891 = find_from(_48current_db_17712, _48db_file_nums_17716, 1);

    /** eds.e:1423		db_names = remove(db_names, index)*/
    {
        s1_ptr assign_space = SEQ_PTR(_48db_names_17715);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        int stop = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_48db_names_17715), start, &_48db_names_17715 );
            }
            else Tail(SEQ_PTR(_48db_names_17715), stop+1, &_48db_names_17715);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_48db_names_17715), start, &_48db_names_17715);
        }
        else {
            assign_slice_seq = &assign_space;
            _48db_names_17715 = Remove_elements(start, stop, (SEQ_PTR(_48db_names_17715)->ref == 1));
        }
    }

    /** eds.e:1424		db_file_nums = remove(db_file_nums, index)*/
    {
        s1_ptr assign_space = SEQ_PTR(_48db_file_nums_17716);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        int stop = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_48db_file_nums_17716), start, &_48db_file_nums_17716 );
            }
            else Tail(SEQ_PTR(_48db_file_nums_17716), stop+1, &_48db_file_nums_17716);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_48db_file_nums_17716), start, &_48db_file_nums_17716);
        }
        else {
            assign_slice_seq = &assign_space;
            _48db_file_nums_17716 = Remove_elements(start, stop, (SEQ_PTR(_48db_file_nums_17716)->ref == 1));
        }
    }

    /** eds.e:1425		db_lock_methods = remove(db_lock_methods, index)*/
    {
        s1_ptr assign_space = SEQ_PTR(_48db_lock_methods_17717);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        int stop = (IS_ATOM_INT(_index_18891)) ? _index_18891 : (object)(DBL_PTR(_index_18891)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_48db_lock_methods_17717), start, &_48db_lock_methods_17717 );
            }
            else Tail(SEQ_PTR(_48db_lock_methods_17717), stop+1, &_48db_lock_methods_17717);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_48db_lock_methods_17717), start, &_48db_lock_methods_17717);
        }
        else {
            assign_slice_seq = &assign_space;
            _48db_lock_methods_17717 = Remove_elements(start, stop, (SEQ_PTR(_48db_lock_methods_17717)->ref == 1));
        }
    }

    /** eds.e:1427		for i = length(cache_index) to 1 by -1 do*/
    if (IS_SEQUENCE(_48cache_index_17721)){
            _10542 = SEQ_PTR(_48cache_index_17721)->length;
    }
    else {
        _10542 = 1;
    }
    {
        object _i_18902;
        _i_18902 = _10542;
L4: 
        if (_i_18902 < 1){
            goto L5; // [94] 145
        }

        /** eds.e:1428			if cache_index[i][1] = current_db then*/
        _2 = (object)SEQ_PTR(_48cache_index_17721);
        _10543 = (object)*(((s1_ptr)_2)->base + _i_18902);
        _2 = (object)SEQ_PTR(_10543);
        _10544 = (object)*(((s1_ptr)_2)->base + 1);
        _10543 = NOVALUE;
        if (binary_op_a(NOTEQ, _10544, _48current_db_17712)){
            _10544 = NOVALUE;
            goto L6; // [115] 138
        }
        _10544 = NOVALUE;

        /** eds.e:1429				cache_index = remove(cache_index, i)*/
        {
            s1_ptr assign_space = SEQ_PTR(_48cache_index_17721);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_18902)) ? _i_18902 : (object)(DBL_PTR(_i_18902)->dbl);
            int stop = (IS_ATOM_INT(_i_18902)) ? _i_18902 : (object)(DBL_PTR(_i_18902)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_48cache_index_17721), start, &_48cache_index_17721 );
                }
                else Tail(SEQ_PTR(_48cache_index_17721), stop+1, &_48cache_index_17721);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_48cache_index_17721), start, &_48cache_index_17721);
            }
            else {
                assign_slice_seq = &assign_space;
                _48cache_index_17721 = Remove_elements(start, stop, (SEQ_PTR(_48cache_index_17721)->ref == 1));
            }
        }

        /** eds.e:1430				key_cache = remove(key_cache, i)*/
        {
            s1_ptr assign_space = SEQ_PTR(_48key_cache_17720);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_i_18902)) ? _i_18902 : (object)(DBL_PTR(_i_18902)->dbl);
            int stop = (IS_ATOM_INT(_i_18902)) ? _i_18902 : (object)(DBL_PTR(_i_18902)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_48key_cache_17720), start, &_48key_cache_17720 );
                }
                else Tail(SEQ_PTR(_48key_cache_17720), stop+1, &_48key_cache_17720);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_48key_cache_17720), start, &_48key_cache_17720);
            }
            else {
                assign_slice_seq = &assign_space;
                _48key_cache_17720 = Remove_elements(start, stop, (SEQ_PTR(_48key_cache_17720)->ref == 1));
            }
        }
L6: 

        /** eds.e:1432		end for*/
        _i_18902 = _i_18902 + -1;
        goto L4; // [140] 101
L5: 
        ;
    }

    /** eds.e:1433		current_table_pos = -1*/
    DeRef(_48current_table_pos_17713);
    _48current_table_pos_17713 = -1;

    /** eds.e:1434		current_table_name = ""	*/
    RefDS(_5);
    DeRef(_48current_table_name_17714);
    _48current_table_name_17714 = _5;

    /** eds.e:1435		current_db = -1*/
    _48current_db_17712 = -1;

    /** eds.e:1436		key_pointers = {}*/
    RefDS(_5);
    DeRef(_48key_pointers_17719);
    _48key_pointers_17719 = _5;

    /** eds.e:1437	end procedure*/
    return;
    ;
}


object _48table_find(object _name_18912)
{
    object _tables_18913 = NOVALUE;
    object _nt_18914 = NOVALUE;
    object _t_header_18915 = NOVALUE;
    object _name_ptr_18916 = NOVALUE;
    object _seek_1__tmp_at6_18919 = NOVALUE;
    object _seek_inlined_seek_at_6_18918 = NOVALUE;
    object _seek_1__tmp_at44_18926 = NOVALUE;
    object _seek_inlined_seek_at_44_18925 = NOVALUE;
    object _seek_1__tmp_at84_18934 = NOVALUE;
    object _seek_inlined_seek_at_84_18933 = NOVALUE;
    object _seek_1__tmp_at106_18938 = NOVALUE;
    object _seek_inlined_seek_at_106_18937 = NOVALUE;
    object _10555 = NOVALUE;
    object _10553 = NOVALUE;
    object _10548 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1446		io:seek(current_db, TABLE_HEADERS)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at6_18919);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at6_18919 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_6_18918 = machine(19, _seek_1__tmp_at6_18919);
    DeRefi(_seek_1__tmp_at6_18919);
    _seek_1__tmp_at6_18919 = NOVALUE;

    /** eds.e:1447		if length(vLastErrors) > 0 then return -1 end if*/
    if (IS_SEQUENCE(_48vLastErrors_17736)){
            _10548 = SEQ_PTR(_48vLastErrors_17736)->length;
    }
    else {
        _10548 = 1;
    }
    if (_10548 <= 0)
    goto L1; // [27] 36
    DeRefDS(_name_18912);
    DeRef(_tables_18913);
    DeRef(_nt_18914);
    DeRef(_t_header_18915);
    DeRef(_name_ptr_18916);
    return -1;
L1: 

    /** eds.e:1448		tables = get4()*/
    _0 = _tables_18913;
    _tables_18913 = _48get4();
    DeRef(_0);

    /** eds.e:1449		io:seek(current_db, tables)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_tables_18913);
    DeRef(_seek_1__tmp_at44_18926);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _tables_18913;
    _seek_1__tmp_at44_18926 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_44_18925 = machine(19, _seek_1__tmp_at44_18926);
    DeRef(_seek_1__tmp_at44_18926);
    _seek_1__tmp_at44_18926 = NOVALUE;

    /** eds.e:1450		nt = get4()*/
    _0 = _nt_18914;
    _nt_18914 = _48get4();
    DeRef(_0);

    /** eds.e:1451		t_header = tables+4*/
    DeRef(_t_header_18915);
    if (IS_ATOM_INT(_tables_18913)) {
        _t_header_18915 = _tables_18913 + 4;
        if ((object)((uintptr_t)_t_header_18915 + (uintptr_t)HIGH_BITS) >= 0){
            _t_header_18915 = NewDouble((eudouble)_t_header_18915);
        }
    }
    else {
        _t_header_18915 = NewDouble(DBL_PTR(_tables_18913)->dbl + (eudouble)4);
    }

    /** eds.e:1452		for i = 1 to nt do*/
    Ref(_nt_18914);
    DeRef(_10553);
    _10553 = _nt_18914;
    {
        object _i_18930;
        _i_18930 = 1;
L2: 
        if (binary_op_a(GREATER, _i_18930, _10553)){
            goto L3; // [74] 150
        }

        /** eds.e:1453			io:seek(current_db, t_header)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_t_header_18915);
        DeRef(_seek_1__tmp_at84_18934);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _t_header_18915;
        _seek_1__tmp_at84_18934 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_84_18933 = machine(19, _seek_1__tmp_at84_18934);
        DeRef(_seek_1__tmp_at84_18934);
        _seek_1__tmp_at84_18934 = NOVALUE;

        /** eds.e:1454			name_ptr = get4()*/
        _0 = _name_ptr_18916;
        _name_ptr_18916 = _48get4();
        DeRef(_0);

        /** eds.e:1455			io:seek(current_db, name_ptr)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_name_ptr_18916);
        DeRef(_seek_1__tmp_at106_18938);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _name_ptr_18916;
        _seek_1__tmp_at106_18938 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_106_18937 = machine(19, _seek_1__tmp_at106_18938);
        DeRef(_seek_1__tmp_at106_18938);
        _seek_1__tmp_at106_18938 = NOVALUE;

        /** eds.e:1456			if equal_string(name) > 0 then*/
        RefDS(_name_18912);
        _10555 = _48equal_string(_name_18912);
        if (binary_op_a(LESSEQ, _10555, 0)){
            DeRef(_10555);
            _10555 = NOVALUE;
            goto L4; // [126] 137
        }
        DeRef(_10555);
        _10555 = NOVALUE;

        /** eds.e:1458				return t_header*/
        DeRef(_i_18930);
        DeRefDS(_name_18912);
        DeRef(_tables_18913);
        DeRef(_nt_18914);
        DeRef(_name_ptr_18916);
        return _t_header_18915;
L4: 

        /** eds.e:1460			t_header += SIZEOF_TABLE_HEADER*/
        _0 = _t_header_18915;
        if (IS_ATOM_INT(_t_header_18915)) {
            _t_header_18915 = _t_header_18915 + 16;
            if ((object)((uintptr_t)_t_header_18915 + (uintptr_t)HIGH_BITS) >= 0){
                _t_header_18915 = NewDouble((eudouble)_t_header_18915);
            }
        }
        else {
            _t_header_18915 = NewDouble(DBL_PTR(_t_header_18915)->dbl + (eudouble)16);
        }
        DeRef(_0);

        /** eds.e:1461		end for*/
        _0 = _i_18930;
        if (IS_ATOM_INT(_i_18930)) {
            _i_18930 = _i_18930 + 1;
            if ((object)((uintptr_t)_i_18930 +(uintptr_t) HIGH_BITS) >= 0){
                _i_18930 = NewDouble((eudouble)_i_18930);
            }
        }
        else {
            _i_18930 = binary_op_a(PLUS, _i_18930, 1);
        }
        DeRef(_0);
        goto L2; // [145] 81
L3: 
        ;
        DeRef(_i_18930);
    }

    /** eds.e:1462		return -1*/
    DeRefDS(_name_18912);
    DeRef(_tables_18913);
    DeRef(_nt_18914);
    DeRef(_t_header_18915);
    DeRef(_name_ptr_18916);
    return -1;
    ;
}


object _48db_select_table(object _name_18945)
{
    object _table_18946 = NOVALUE;
    object _nkeys_18947 = NOVALUE;
    object _index_18948 = NOVALUE;
    object _block_ptr_18949 = NOVALUE;
    object _block_size_18950 = NOVALUE;
    object _blocks_18951 = NOVALUE;
    object _k_18952 = NOVALUE;
    object _seek_1__tmp_at120_18971 = NOVALUE;
    object _seek_inlined_seek_at_120_18970 = NOVALUE;
    object _pos_inlined_seek_at_117_18969 = NOVALUE;
    object _seek_1__tmp_at178_18981 = NOVALUE;
    object _seek_inlined_seek_at_178_18980 = NOVALUE;
    object _seek_1__tmp_at205_18986 = NOVALUE;
    object _seek_inlined_seek_at_205_18985 = NOVALUE;
    object _10576 = NOVALUE;
    object _10575 = NOVALUE;
    object _10572 = NOVALUE;
    object _10567 = NOVALUE;
    object _10562 = NOVALUE;
    object _10558 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1501		if equal(current_table_name, name) then*/
    if (_48current_table_name_17714 == _name_18945)
    _10558 = 1;
    else if (IS_ATOM_INT(_48current_table_name_17714) && IS_ATOM_INT(_name_18945))
    _10558 = 0;
    else
    _10558 = (compare(_48current_table_name_17714, _name_18945) == 0);
    if (_10558 == 0)
    {
        _10558 = NOVALUE;
        goto L1; // [11] 21
    }
    else{
        _10558 = NOVALUE;
    }

    /** eds.e:1502			return DB_OK*/
    DeRefDS(_name_18945);
    DeRef(_table_18946);
    DeRef(_nkeys_18947);
    DeRef(_index_18948);
    DeRef(_block_ptr_18949);
    DeRef(_block_size_18950);
    return 0;
L1: 

    /** eds.e:1504		table = table_find(name)*/
    RefDS(_name_18945);
    _0 = _table_18946;
    _table_18946 = _48table_find(_name_18945);
    DeRef(_0);

    /** eds.e:1505		if table = -1 then*/
    if (binary_op_a(NOTEQ, _table_18946, -1)){
        goto L2; // [29] 40
    }

    /** eds.e:1506			return DB_OPEN_FAIL*/
    DeRefDS(_name_18945);
    DeRef(_table_18946);
    DeRef(_nkeys_18947);
    DeRef(_index_18948);
    DeRef(_block_ptr_18949);
    DeRef(_block_size_18950);
    return -1;
L2: 

    /** eds.e:1509		save_keys()*/
    _48save_keys();

    /** eds.e:1511		current_table_pos = table*/
    Ref(_table_18946);
    DeRef(_48current_table_pos_17713);
    _48current_table_pos_17713 = _table_18946;

    /** eds.e:1512		current_table_name = name*/
    RefDS(_name_18945);
    DeRef(_48current_table_name_17714);
    _48current_table_name_17714 = _name_18945;

    /** eds.e:1514		k = 0*/
    _k_18952 = 0;

    /** eds.e:1515		if caching_option = 1 then*/

    /** eds.e:1516			k = eu:find({current_db, current_table_pos}, cache_index)*/
    Ref(_48current_table_pos_17713);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _48current_table_pos_17713;
    _10562 = MAKE_SEQ(_1);
    _k_18952 = find_from(_10562, _48cache_index_17721, 1);
    DeRefDS(_10562);
    _10562 = NOVALUE;

    /** eds.e:1517			if k != 0 then*/
    if (_k_18952 == 0)
    goto L3; // [88] 103

    /** eds.e:1518				key_pointers = key_cache[k]*/
    DeRef(_48key_pointers_17719);
    _2 = (object)SEQ_PTR(_48key_cache_17720);
    _48key_pointers_17719 = (object)*(((s1_ptr)_2)->base + _k_18952);
    Ref(_48key_pointers_17719);
L3: 

    /** eds.e:1521		if k = 0 then*/
    if (_k_18952 != 0)
    goto L4; // [106] 269

    /** eds.e:1523			io:seek(current_db, table+4)*/
    if (IS_ATOM_INT(_table_18946)) {
        _10567 = _table_18946 + 4;
        if ((object)((uintptr_t)_10567 + (uintptr_t)HIGH_BITS) >= 0){
            _10567 = NewDouble((eudouble)_10567);
        }
    }
    else {
        _10567 = NewDouble(DBL_PTR(_table_18946)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_117_18969);
    _pos_inlined_seek_at_117_18969 = _10567;
    _10567 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_117_18969);
    DeRef(_seek_1__tmp_at120_18971);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_117_18969;
    _seek_1__tmp_at120_18971 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_120_18970 = machine(19, _seek_1__tmp_at120_18971);
    DeRef(_pos_inlined_seek_at_117_18969);
    _pos_inlined_seek_at_117_18969 = NOVALUE;
    DeRef(_seek_1__tmp_at120_18971);
    _seek_1__tmp_at120_18971 = NOVALUE;

    /** eds.e:1524			nkeys = get4()*/
    _0 = _nkeys_18947;
    _nkeys_18947 = _48get4();
    DeRef(_0);

    /** eds.e:1525			blocks = get4()*/
    _blocks_18951 = _48get4();
    if (!IS_ATOM_INT(_blocks_18951)) {
        _1 = (object)(DBL_PTR(_blocks_18951)->dbl);
        DeRefDS(_blocks_18951);
        _blocks_18951 = _1;
    }

    /** eds.e:1526			index = get4()*/
    _0 = _index_18948;
    _index_18948 = _48get4();
    DeRef(_0);

    /** eds.e:1527			key_pointers = repeat(0, nkeys)*/
    DeRef(_48key_pointers_17719);
    _48key_pointers_17719 = Repeat(0, _nkeys_18947);

    /** eds.e:1528			k = 1*/
    _k_18952 = 1;

    /** eds.e:1529			for b = 0 to blocks-1 do*/
    _10572 = _blocks_18951 - 1;
    if ((object)((uintptr_t)_10572 +(uintptr_t) HIGH_BITS) >= 0){
        _10572 = NewDouble((eudouble)_10572);
    }
    {
        object _b_18977;
        _b_18977 = 0;
L5: 
        if (binary_op_a(GREATER, _b_18977, _10572)){
            goto L6; // [168] 268
        }

        /** eds.e:1530				io:seek(current_db, index)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_index_18948);
        DeRef(_seek_1__tmp_at178_18981);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _index_18948;
        _seek_1__tmp_at178_18981 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_178_18980 = machine(19, _seek_1__tmp_at178_18981);
        DeRef(_seek_1__tmp_at178_18981);
        _seek_1__tmp_at178_18981 = NOVALUE;

        /** eds.e:1531				block_size = get4()*/
        _0 = _block_size_18950;
        _block_size_18950 = _48get4();
        DeRef(_0);

        /** eds.e:1532				block_ptr = get4()*/
        _0 = _block_ptr_18949;
        _block_ptr_18949 = _48get4();
        DeRef(_0);

        /** eds.e:1533				io:seek(current_db, block_ptr)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_block_ptr_18949);
        DeRef(_seek_1__tmp_at205_18986);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _block_ptr_18949;
        _seek_1__tmp_at205_18986 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_205_18985 = machine(19, _seek_1__tmp_at205_18986);
        DeRef(_seek_1__tmp_at205_18986);
        _seek_1__tmp_at205_18986 = NOVALUE;

        /** eds.e:1534				for j = 1 to block_size do*/
        Ref(_block_size_18950);
        DeRef(_10575);
        _10575 = _block_size_18950;
        {
            object _j_18988;
            _j_18988 = 1;
L7: 
            if (binary_op_a(GREATER, _j_18988, _10575)){
                goto L8; // [224] 255
            }

            /** eds.e:1535					key_pointers[k] = get4()*/
            _10576 = _48get4();
            _2 = (object)SEQ_PTR(_48key_pointers_17719);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _48key_pointers_17719 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _k_18952);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _10576;
            if( _1 != _10576 ){
                DeRef(_1);
            }
            _10576 = NOVALUE;

            /** eds.e:1536					k += 1*/
            _k_18952 = _k_18952 + 1;

            /** eds.e:1537				end for*/
            _0 = _j_18988;
            if (IS_ATOM_INT(_j_18988)) {
                _j_18988 = _j_18988 + 1;
                if ((object)((uintptr_t)_j_18988 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_18988 = NewDouble((eudouble)_j_18988);
                }
            }
            else {
                _j_18988 = binary_op_a(PLUS, _j_18988, 1);
            }
            DeRef(_0);
            goto L7; // [250] 231
L8: 
            ;
            DeRef(_j_18988);
        }

        /** eds.e:1538				index += 8*/
        _0 = _index_18948;
        if (IS_ATOM_INT(_index_18948)) {
            _index_18948 = _index_18948 + 8;
            if ((object)((uintptr_t)_index_18948 + (uintptr_t)HIGH_BITS) >= 0){
                _index_18948 = NewDouble((eudouble)_index_18948);
            }
        }
        else {
            _index_18948 = NewDouble(DBL_PTR(_index_18948)->dbl + (eudouble)8);
        }
        DeRef(_0);

        /** eds.e:1539			end for*/
        _0 = _b_18977;
        if (IS_ATOM_INT(_b_18977)) {
            _b_18977 = _b_18977 + 1;
            if ((object)((uintptr_t)_b_18977 +(uintptr_t) HIGH_BITS) >= 0){
                _b_18977 = NewDouble((eudouble)_b_18977);
            }
        }
        else {
            _b_18977 = binary_op_a(PLUS, _b_18977, 1);
        }
        DeRef(_0);
        goto L5; // [263] 175
L6: 
        ;
        DeRef(_b_18977);
    }
L4: 

    /** eds.e:1541		return DB_OK*/
    DeRefDS(_name_18945);
    DeRef(_table_18946);
    DeRef(_nkeys_18947);
    DeRef(_index_18948);
    DeRef(_block_ptr_18949);
    DeRef(_block_size_18950);
    DeRef(_10572);
    _10572 = NOVALUE;
    return 0;
    ;
}


object _48db_create_table(object _name_18997, object _init_records_18998)
{
    object _name_ptr_18999 = NOVALUE;
    object _nt_19000 = NOVALUE;
    object _tables_19001 = NOVALUE;
    object _newtables_19002 = NOVALUE;
    object _table_19003 = NOVALUE;
    object _records_ptr_19004 = NOVALUE;
    object _size_19005 = NOVALUE;
    object _newsize_19006 = NOVALUE;
    object _index_ptr_19007 = NOVALUE;
    object _remaining_19008 = NOVALUE;
    object _init_index_19009 = NOVALUE;
    object _seek_1__tmp_at68_19023 = NOVALUE;
    object _seek_inlined_seek_at_68_19022 = NOVALUE;
    object _seek_1__tmp_at97_19029 = NOVALUE;
    object _seek_inlined_seek_at_97_19028 = NOVALUE;
    object _pos_inlined_seek_at_94_19027 = NOVALUE;
    object _put4_1__tmp_at159_19042 = NOVALUE;
    object _seek_1__tmp_at196_19047 = NOVALUE;
    object _seek_inlined_seek_at_196_19046 = NOVALUE;
    object _pos_inlined_seek_at_193_19045 = NOVALUE;
    object _seek_1__tmp_at239_19055 = NOVALUE;
    object _seek_inlined_seek_at_239_19054 = NOVALUE;
    object _pos_inlined_seek_at_236_19053 = NOVALUE;
    object _s_inlined_putn_at_288_19063 = NOVALUE;
    object _seek_1__tmp_at316_19066 = NOVALUE;
    object _seek_inlined_seek_at_316_19065 = NOVALUE;
    object _put4_1__tmp_at331_19068 = NOVALUE;
    object _seek_1__tmp_at369_19072 = NOVALUE;
    object _seek_inlined_seek_at_369_19071 = NOVALUE;
    object _put4_1__tmp_at384_19074 = NOVALUE;
    object _s_inlined_putn_at_431_19080 = NOVALUE;
    object _put4_1__tmp_at462_19084 = NOVALUE;
    object _put4_1__tmp_at490_19086 = NOVALUE;
    object _s_inlined_putn_at_530_19091 = NOVALUE;
    object _s_inlined_putn_at_568_19097 = NOVALUE;
    object _seek_1__tmp_at610_19105 = NOVALUE;
    object _seek_inlined_seek_at_610_19104 = NOVALUE;
    object _pos_inlined_seek_at_607_19103 = NOVALUE;
    object _put4_1__tmp_at625_19107 = NOVALUE;
    object _put4_1__tmp_at653_19109 = NOVALUE;
    object _put4_1__tmp_at681_19111 = NOVALUE;
    object _put4_1__tmp_at709_19113 = NOVALUE;
    object _10625 = NOVALUE;
    object _10624 = NOVALUE;
    object _10623 = NOVALUE;
    object _10622 = NOVALUE;
    object _10621 = NOVALUE;
    object _10620 = NOVALUE;
    object _10618 = NOVALUE;
    object _10617 = NOVALUE;
    object _10616 = NOVALUE;
    object _10615 = NOVALUE;
    object _10614 = NOVALUE;
    object _10612 = NOVALUE;
    object _10611 = NOVALUE;
    object _10610 = NOVALUE;
    object _10608 = NOVALUE;
    object _10607 = NOVALUE;
    object _10606 = NOVALUE;
    object _10605 = NOVALUE;
    object _10604 = NOVALUE;
    object _10603 = NOVALUE;
    object _10602 = NOVALUE;
    object _10600 = NOVALUE;
    object _10599 = NOVALUE;
    object _10598 = NOVALUE;
    object _10595 = NOVALUE;
    object _10594 = NOVALUE;
    object _10592 = NOVALUE;
    object _10591 = NOVALUE;
    object _10589 = NOVALUE;
    object _10587 = NOVALUE;
    object _10584 = NOVALUE;
    object _10579 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1603		if not cstring(name) then*/
    RefDS(_name_18997);
    _10579 = _9cstring(_name_18997);
    if (IS_ATOM_INT(_10579)) {
        if (_10579 != 0){
            DeRef(_10579);
            _10579 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    else {
        if (DBL_PTR(_10579)->dbl != 0.0){
            DeRef(_10579);
            _10579 = NOVALUE;
            goto L1; // [11] 21
        }
    }
    DeRef(_10579);
    _10579 = NOVALUE;

    /** eds.e:1604			return DB_BAD_NAME*/
    DeRefDS(_name_18997);
    DeRef(_name_ptr_18999);
    DeRef(_nt_19000);
    DeRef(_tables_19001);
    DeRef(_newtables_19002);
    DeRef(_table_19003);
    DeRef(_records_ptr_19004);
    DeRef(_size_19005);
    DeRef(_newsize_19006);
    DeRef(_index_ptr_19007);
    DeRef(_remaining_19008);
    return -4;
L1: 

    /** eds.e:1607		table = table_find(name)*/
    RefDS(_name_18997);
    _0 = _table_19003;
    _table_19003 = _48table_find(_name_18997);
    DeRef(_0);

    /** eds.e:1608		if table != -1 then*/
    if (binary_op_a(EQUALS, _table_19003, -1)){
        goto L2; // [29] 40
    }

    /** eds.e:1609			return DB_EXISTS_ALREADY*/
    DeRefDS(_name_18997);
    DeRef(_name_ptr_18999);
    DeRef(_nt_19000);
    DeRef(_tables_19001);
    DeRef(_newtables_19002);
    DeRef(_table_19003);
    DeRef(_records_ptr_19004);
    DeRef(_size_19005);
    DeRef(_newsize_19006);
    DeRef(_index_ptr_19007);
    DeRef(_remaining_19008);
    return -2;
L2: 

    /** eds.e:1612		if init_records < 1 then*/
    if (_init_records_18998 >= 1)
    goto L3; // [42] 52

    /** eds.e:1613			init_records = 1*/
    _init_records_18998 = 1;
L3: 

    /** eds.e:1615		init_index = math:min({init_records, MAX_INDEX})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _init_records_18998;
    ((intptr_t *)_2)[2] = 10;
    _10584 = MAKE_SEQ(_1);
    _init_index_19009 = _10min(_10584);
    _10584 = NOVALUE;
    if (!IS_ATOM_INT(_init_index_19009)) {
        _1 = (object)(DBL_PTR(_init_index_19009)->dbl);
        DeRefDS(_init_index_19009);
        _init_index_19009 = _1;
    }

    /** eds.e:1618		io:seek(current_db, TABLE_HEADERS)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at68_19023);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at68_19023 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_68_19022 = machine(19, _seek_1__tmp_at68_19023);
    DeRefi(_seek_1__tmp_at68_19023);
    _seek_1__tmp_at68_19023 = NOVALUE;

    /** eds.e:1619		tables = get4()*/
    _0 = _tables_19001;
    _tables_19001 = _48get4();
    DeRef(_0);

    /** eds.e:1620		io:seek(current_db, tables-4)*/
    if (IS_ATOM_INT(_tables_19001)) {
        _10587 = _tables_19001 - 4;
        if ((object)((uintptr_t)_10587 +(uintptr_t) HIGH_BITS) >= 0){
            _10587 = NewDouble((eudouble)_10587);
        }
    }
    else {
        _10587 = NewDouble(DBL_PTR(_tables_19001)->dbl - (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_94_19027);
    _pos_inlined_seek_at_94_19027 = _10587;
    _10587 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_94_19027);
    DeRef(_seek_1__tmp_at97_19029);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_94_19027;
    _seek_1__tmp_at97_19029 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_97_19028 = machine(19, _seek_1__tmp_at97_19029);
    DeRef(_pos_inlined_seek_at_94_19027);
    _pos_inlined_seek_at_94_19027 = NOVALUE;
    DeRef(_seek_1__tmp_at97_19029);
    _seek_1__tmp_at97_19029 = NOVALUE;

    /** eds.e:1621		size = get4()*/
    _0 = _size_19005;
    _size_19005 = _48get4();
    DeRef(_0);

    /** eds.e:1622		nt = get4()+1*/
    _10589 = _48get4();
    DeRef(_nt_19000);
    if (IS_ATOM_INT(_10589)) {
        _nt_19000 = _10589 + 1;
        if (_nt_19000 > MAXINT){
            _nt_19000 = NewDouble((eudouble)_nt_19000);
        }
    }
    else
    _nt_19000 = binary_op(PLUS, 1, _10589);
    DeRef(_10589);
    _10589 = NOVALUE;

    /** eds.e:1623		if nt*SIZEOF_TABLE_HEADER + 8 > size then*/
    if (IS_ATOM_INT(_nt_19000)) {
        if (_nt_19000 == (short)_nt_19000){
            _10591 = _nt_19000 * 16;
        }
        else{
            _10591 = NewDouble(_nt_19000 * (eudouble)16);
        }
    }
    else {
        _10591 = NewDouble(DBL_PTR(_nt_19000)->dbl * (eudouble)16);
    }
    if (IS_ATOM_INT(_10591)) {
        _10592 = _10591 + 8;
        if ((object)((uintptr_t)_10592 + (uintptr_t)HIGH_BITS) >= 0){
            _10592 = NewDouble((eudouble)_10592);
        }
    }
    else {
        _10592 = NewDouble(DBL_PTR(_10591)->dbl + (eudouble)8);
    }
    DeRef(_10591);
    _10591 = NOVALUE;
    if (binary_op_a(LESSEQ, _10592, _size_19005)){
        DeRef(_10592);
        _10592 = NOVALUE;
        goto L4; // [134] 365
    }
    DeRef(_10592);
    _10592 = NOVALUE;

    /** eds.e:1625			newsize = floor(size + size / 2)*/
    if (IS_ATOM_INT(_size_19005)) {
        if (_size_19005 & 1) {
            _10594 = NewDouble((_size_19005 >> 1) + 0.5);
        }
        else
        _10594 = _size_19005 >> 1;
    }
    else {
        _10594 = binary_op(DIVIDE, _size_19005, 2);
    }
    if (IS_ATOM_INT(_size_19005) && IS_ATOM_INT(_10594)) {
        _10595 = _size_19005 + _10594;
        if ((object)((uintptr_t)_10595 + (uintptr_t)HIGH_BITS) >= 0){
            _10595 = NewDouble((eudouble)_10595);
        }
    }
    else {
        if (IS_ATOM_INT(_size_19005)) {
            _10595 = NewDouble((eudouble)_size_19005 + DBL_PTR(_10594)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10594)) {
                _10595 = NewDouble(DBL_PTR(_size_19005)->dbl + (eudouble)_10594);
            }
            else
            _10595 = NewDouble(DBL_PTR(_size_19005)->dbl + DBL_PTR(_10594)->dbl);
        }
    }
    DeRef(_10594);
    _10594 = NOVALUE;
    DeRef(_newsize_19006);
    if (IS_ATOM_INT(_10595))
    _newsize_19006 = e_floor(_10595);
    else
    _newsize_19006 = unary_op(FLOOR, _10595);
    DeRef(_10595);
    _10595 = NOVALUE;

    /** eds.e:1626			newtables = db_allocate(newsize)*/
    Ref(_newsize_19006);
    _0 = _newtables_19002;
    _newtables_19002 = _48db_allocate(_newsize_19006);
    DeRef(_0);

    /** eds.e:1627			put4(nt)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_nt_19000)) {
        *poke4_addr = (uint32_t)_nt_19000;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nt_19000)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at159_19042);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at159_19042 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at159_19042); // DJP 

    /** eds.e:444	end procedure*/
    goto L5; // [180] 183
L5: 
    DeRefi(_put4_1__tmp_at159_19042);
    _put4_1__tmp_at159_19042 = NOVALUE;

    /** eds.e:1629			io:seek(current_db, tables+4)*/
    if (IS_ATOM_INT(_tables_19001)) {
        _10598 = _tables_19001 + 4;
        if ((object)((uintptr_t)_10598 + (uintptr_t)HIGH_BITS) >= 0){
            _10598 = NewDouble((eudouble)_10598);
        }
    }
    else {
        _10598 = NewDouble(DBL_PTR(_tables_19001)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_193_19045);
    _pos_inlined_seek_at_193_19045 = _10598;
    _10598 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_193_19045);
    DeRef(_seek_1__tmp_at196_19047);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_193_19045;
    _seek_1__tmp_at196_19047 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_196_19046 = machine(19, _seek_1__tmp_at196_19047);
    DeRef(_pos_inlined_seek_at_193_19045);
    _pos_inlined_seek_at_193_19045 = NOVALUE;
    DeRef(_seek_1__tmp_at196_19047);
    _seek_1__tmp_at196_19047 = NOVALUE;

    /** eds.e:1630			remaining = io:get_bytes(current_db, (nt-1)*SIZEOF_TABLE_HEADER)*/
    if (IS_ATOM_INT(_nt_19000)) {
        _10599 = _nt_19000 - 1;
        if ((object)((uintptr_t)_10599 +(uintptr_t) HIGH_BITS) >= 0){
            _10599 = NewDouble((eudouble)_10599);
        }
    }
    else {
        _10599 = NewDouble(DBL_PTR(_nt_19000)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10599)) {
        if (_10599 == (short)_10599){
            _10600 = _10599 * 16;
        }
        else{
            _10600 = NewDouble(_10599 * (eudouble)16);
        }
    }
    else {
        _10600 = NewDouble(DBL_PTR(_10599)->dbl * (eudouble)16);
    }
    DeRef(_10599);
    _10599 = NOVALUE;
    _0 = _remaining_19008;
    _remaining_19008 = _19get_bytes(_48current_db_17712, _10600);
    DeRef(_0);
    _10600 = NOVALUE;

    /** eds.e:1631			io:seek(current_db, newtables+4)*/
    if (IS_ATOM_INT(_newtables_19002)) {
        _10602 = _newtables_19002 + 4;
        if ((object)((uintptr_t)_10602 + (uintptr_t)HIGH_BITS) >= 0){
            _10602 = NewDouble((eudouble)_10602);
        }
    }
    else {
        _10602 = NewDouble(DBL_PTR(_newtables_19002)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_236_19053);
    _pos_inlined_seek_at_236_19053 = _10602;
    _10602 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_236_19053);
    DeRef(_seek_1__tmp_at239_19055);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_236_19053;
    _seek_1__tmp_at239_19055 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_239_19054 = machine(19, _seek_1__tmp_at239_19055);
    DeRef(_pos_inlined_seek_at_236_19053);
    _pos_inlined_seek_at_236_19053 = NOVALUE;
    DeRef(_seek_1__tmp_at239_19055);
    _seek_1__tmp_at239_19055 = NOVALUE;

    /** eds.e:1632			putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_19008); // DJP 

    /** eds.e:449	end procedure*/
    goto L6; // [263] 266
L6: 

    /** eds.e:1634			putn(repeat(0, newsize - 4 - (nt-1)*SIZEOF_TABLE_HEADER))*/
    if (IS_ATOM_INT(_newsize_19006)) {
        _10603 = _newsize_19006 - 4;
        if ((object)((uintptr_t)_10603 +(uintptr_t) HIGH_BITS) >= 0){
            _10603 = NewDouble((eudouble)_10603);
        }
    }
    else {
        _10603 = NewDouble(DBL_PTR(_newsize_19006)->dbl - (eudouble)4);
    }
    if (IS_ATOM_INT(_nt_19000)) {
        _10604 = _nt_19000 - 1;
        if ((object)((uintptr_t)_10604 +(uintptr_t) HIGH_BITS) >= 0){
            _10604 = NewDouble((eudouble)_10604);
        }
    }
    else {
        _10604 = NewDouble(DBL_PTR(_nt_19000)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10604)) {
        if (_10604 == (short)_10604){
            _10605 = _10604 * 16;
        }
        else{
            _10605 = NewDouble(_10604 * (eudouble)16);
        }
    }
    else {
        _10605 = NewDouble(DBL_PTR(_10604)->dbl * (eudouble)16);
    }
    DeRef(_10604);
    _10604 = NOVALUE;
    if (IS_ATOM_INT(_10603) && IS_ATOM_INT(_10605)) {
        _10606 = _10603 - _10605;
    }
    else {
        if (IS_ATOM_INT(_10603)) {
            _10606 = NewDouble((eudouble)_10603 - DBL_PTR(_10605)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10605)) {
                _10606 = NewDouble(DBL_PTR(_10603)->dbl - (eudouble)_10605);
            }
            else
            _10606 = NewDouble(DBL_PTR(_10603)->dbl - DBL_PTR(_10605)->dbl);
        }
    }
    DeRef(_10603);
    _10603 = NOVALUE;
    DeRef(_10605);
    _10605 = NOVALUE;
    _10607 = Repeat(0, _10606);
    DeRef(_10606);
    _10606 = NOVALUE;
    DeRefi(_s_inlined_putn_at_288_19063);
    _s_inlined_putn_at_288_19063 = _10607;
    _10607 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_288_19063); // DJP 

    /** eds.e:449	end procedure*/
    goto L7; // [302] 305
L7: 
    DeRefi(_s_inlined_putn_at_288_19063);
    _s_inlined_putn_at_288_19063 = NOVALUE;

    /** eds.e:1635			db_free(tables)*/
    Ref(_tables_19001);
    _48db_free(_tables_19001);

    /** eds.e:1636			io:seek(current_db, TABLE_HEADERS)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at316_19066);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at316_19066 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_316_19065 = machine(19, _seek_1__tmp_at316_19066);
    DeRefi(_seek_1__tmp_at316_19066);
    _seek_1__tmp_at316_19066 = NOVALUE;

    /** eds.e:1637			put4(newtables)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_newtables_19002)) {
        *poke4_addr = (uint32_t)_newtables_19002;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_newtables_19002)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at331_19068);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at331_19068 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at331_19068); // DJP 

    /** eds.e:444	end procedure*/
    goto L8; // [352] 355
L8: 
    DeRefi(_put4_1__tmp_at331_19068);
    _put4_1__tmp_at331_19068 = NOVALUE;

    /** eds.e:1638			tables = newtables*/
    Ref(_newtables_19002);
    DeRef(_tables_19001);
    _tables_19001 = _newtables_19002;
    goto L9; // [362] 411
L4: 

    /** eds.e:1640			io:seek(current_db, tables)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_tables_19001);
    DeRef(_seek_1__tmp_at369_19072);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _tables_19001;
    _seek_1__tmp_at369_19072 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_369_19071 = machine(19, _seek_1__tmp_at369_19072);
    DeRef(_seek_1__tmp_at369_19072);
    _seek_1__tmp_at369_19072 = NOVALUE;

    /** eds.e:1641			put4(nt)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_nt_19000)) {
        *poke4_addr = (uint32_t)_nt_19000;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nt_19000)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at384_19074);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at384_19074 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at384_19074); // DJP 

    /** eds.e:444	end procedure*/
    goto LA; // [405] 408
LA: 
    DeRefi(_put4_1__tmp_at384_19074);
    _put4_1__tmp_at384_19074 = NOVALUE;
L9: 

    /** eds.e:1645		records_ptr = db_allocate(init_records * 4)*/
    if (_init_records_18998 == (short)_init_records_18998){
        _10608 = _init_records_18998 * 4;
    }
    else{
        _10608 = NewDouble(_init_records_18998 * (eudouble)4);
    }
    _0 = _records_ptr_19004;
    _records_ptr_19004 = _48db_allocate(_10608);
    DeRef(_0);
    _10608 = NOVALUE;

    /** eds.e:1646		putn(repeat(0, init_records * 4))*/
    _10610 = _init_records_18998 * 4;
    _10611 = Repeat(0, _10610);
    _10610 = NOVALUE;
    DeRefi(_s_inlined_putn_at_431_19080);
    _s_inlined_putn_at_431_19080 = _10611;
    _10611 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_431_19080); // DJP 

    /** eds.e:449	end procedure*/
    goto LB; // [445] 448
LB: 
    DeRefi(_s_inlined_putn_at_431_19080);
    _s_inlined_putn_at_431_19080 = NOVALUE;

    /** eds.e:1649		index_ptr = db_allocate(init_index * 8)*/
    if (_init_index_19009 == (short)_init_index_19009){
        _10612 = _init_index_19009 * 8;
    }
    else{
        _10612 = NewDouble(_init_index_19009 * (eudouble)8);
    }
    _0 = _index_ptr_19007;
    _index_ptr_19007 = _48db_allocate(_10612);
    DeRef(_0);
    _10612 = NOVALUE;

    /** eds.e:1650		put4(0)  -- 0 records*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)0;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at462_19084);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at462_19084 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at462_19084); // DJP 

    /** eds.e:444	end procedure*/
    goto LC; // [483] 486
LC: 
    DeRefi(_put4_1__tmp_at462_19084);
    _put4_1__tmp_at462_19084 = NOVALUE;

    /** eds.e:1651		put4(records_ptr) -- point to 1st block*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_records_ptr_19004)) {
        *poke4_addr = (uint32_t)_records_ptr_19004;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_records_ptr_19004)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at490_19086);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at490_19086 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at490_19086); // DJP 

    /** eds.e:444	end procedure*/
    goto LD; // [511] 514
LD: 
    DeRefi(_put4_1__tmp_at490_19086);
    _put4_1__tmp_at490_19086 = NOVALUE;

    /** eds.e:1652		putn(repeat(0, (init_index-1) * 8))*/
    _10614 = _init_index_19009 - 1;
    if ((object)((uintptr_t)_10614 +(uintptr_t) HIGH_BITS) >= 0){
        _10614 = NewDouble((eudouble)_10614);
    }
    if (IS_ATOM_INT(_10614)) {
        _10615 = _10614 * 8;
    }
    else {
        _10615 = NewDouble(DBL_PTR(_10614)->dbl * (eudouble)8);
    }
    DeRef(_10614);
    _10614 = NOVALUE;
    _10616 = Repeat(0, _10615);
    DeRef(_10615);
    _10615 = NOVALUE;
    DeRefi(_s_inlined_putn_at_530_19091);
    _s_inlined_putn_at_530_19091 = _10616;
    _10616 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_530_19091); // DJP 

    /** eds.e:449	end procedure*/
    goto LE; // [544] 547
LE: 
    DeRefi(_s_inlined_putn_at_530_19091);
    _s_inlined_putn_at_530_19091 = NOVALUE;

    /** eds.e:1655		name_ptr = db_allocate(length(name)+1)*/
    if (IS_SEQUENCE(_name_18997)){
            _10617 = SEQ_PTR(_name_18997)->length;
    }
    else {
        _10617 = 1;
    }
    _10618 = _10617 + 1;
    _10617 = NOVALUE;
    _0 = _name_ptr_18999;
    _name_ptr_18999 = _48db_allocate(_10618);
    DeRef(_0);
    _10618 = NOVALUE;

    /** eds.e:1656		putn(name & 0)*/
    Append(&_10620, _name_18997, 0);
    DeRef(_s_inlined_putn_at_568_19097);
    _s_inlined_putn_at_568_19097 = _10620;
    _10620 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_568_19097); // DJP 

    /** eds.e:449	end procedure*/
    goto LF; // [582] 585
LF: 
    DeRef(_s_inlined_putn_at_568_19097);
    _s_inlined_putn_at_568_19097 = NOVALUE;

    /** eds.e:1658		io:seek(current_db, tables+4+(nt-1)*SIZEOF_TABLE_HEADER)*/
    if (IS_ATOM_INT(_tables_19001)) {
        _10621 = _tables_19001 + 4;
        if ((object)((uintptr_t)_10621 + (uintptr_t)HIGH_BITS) >= 0){
            _10621 = NewDouble((eudouble)_10621);
        }
    }
    else {
        _10621 = NewDouble(DBL_PTR(_tables_19001)->dbl + (eudouble)4);
    }
    if (IS_ATOM_INT(_nt_19000)) {
        _10622 = _nt_19000 - 1;
        if ((object)((uintptr_t)_10622 +(uintptr_t) HIGH_BITS) >= 0){
            _10622 = NewDouble((eudouble)_10622);
        }
    }
    else {
        _10622 = NewDouble(DBL_PTR(_nt_19000)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10622)) {
        if (_10622 == (short)_10622){
            _10623 = _10622 * 16;
        }
        else{
            _10623 = NewDouble(_10622 * (eudouble)16);
        }
    }
    else {
        _10623 = NewDouble(DBL_PTR(_10622)->dbl * (eudouble)16);
    }
    DeRef(_10622);
    _10622 = NOVALUE;
    if (IS_ATOM_INT(_10621) && IS_ATOM_INT(_10623)) {
        _10624 = _10621 + _10623;
        if ((object)((uintptr_t)_10624 + (uintptr_t)HIGH_BITS) >= 0){
            _10624 = NewDouble((eudouble)_10624);
        }
    }
    else {
        if (IS_ATOM_INT(_10621)) {
            _10624 = NewDouble((eudouble)_10621 + DBL_PTR(_10623)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10623)) {
                _10624 = NewDouble(DBL_PTR(_10621)->dbl + (eudouble)_10623);
            }
            else
            _10624 = NewDouble(DBL_PTR(_10621)->dbl + DBL_PTR(_10623)->dbl);
        }
    }
    DeRef(_10621);
    _10621 = NOVALUE;
    DeRef(_10623);
    _10623 = NOVALUE;
    DeRef(_pos_inlined_seek_at_607_19103);
    _pos_inlined_seek_at_607_19103 = _10624;
    _10624 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_607_19103);
    DeRef(_seek_1__tmp_at610_19105);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_607_19103;
    _seek_1__tmp_at610_19105 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_610_19104 = machine(19, _seek_1__tmp_at610_19105);
    DeRef(_pos_inlined_seek_at_607_19103);
    _pos_inlined_seek_at_607_19103 = NOVALUE;
    DeRef(_seek_1__tmp_at610_19105);
    _seek_1__tmp_at610_19105 = NOVALUE;

    /** eds.e:1659		put4(name_ptr)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_name_ptr_18999)) {
        *poke4_addr = (uint32_t)_name_ptr_18999;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_name_ptr_18999)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at625_19107);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at625_19107 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at625_19107); // DJP 

    /** eds.e:444	end procedure*/
    goto L10; // [646] 649
L10: 
    DeRefi(_put4_1__tmp_at625_19107);
    _put4_1__tmp_at625_19107 = NOVALUE;

    /** eds.e:1660		put4(0)  -- start with 0 records total*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)0;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at653_19109);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at653_19109 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at653_19109); // DJP 

    /** eds.e:444	end procedure*/
    goto L11; // [674] 677
L11: 
    DeRefi(_put4_1__tmp_at653_19109);
    _put4_1__tmp_at653_19109 = NOVALUE;

    /** eds.e:1661		put4(1)  -- start with 1 block of records in index*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)1;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at681_19111);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at681_19111 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at681_19111); // DJP 

    /** eds.e:444	end procedure*/
    goto L12; // [702] 705
L12: 
    DeRefi(_put4_1__tmp_at681_19111);
    _put4_1__tmp_at681_19111 = NOVALUE;

    /** eds.e:1662		put4(index_ptr)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_index_ptr_19007)) {
        *poke4_addr = (uint32_t)_index_ptr_19007;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_index_ptr_19007)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at709_19113);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at709_19113 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at709_19113); // DJP 

    /** eds.e:444	end procedure*/
    goto L13; // [730] 733
L13: 
    DeRefi(_put4_1__tmp_at709_19113);
    _put4_1__tmp_at709_19113 = NOVALUE;

    /** eds.e:1663		if db_select_table(name) then*/
    RefDS(_name_18997);
    _10625 = _48db_select_table(_name_18997);
    if (_10625 == 0) {
        DeRef(_10625);
        _10625 = NOVALUE;
        goto L14; // [741] 745
    }
    else {
        if (!IS_ATOM_INT(_10625) && DBL_PTR(_10625)->dbl == 0.0){
            DeRef(_10625);
            _10625 = NOVALUE;
            goto L14; // [741] 745
        }
        DeRef(_10625);
        _10625 = NOVALUE;
    }
    DeRef(_10625);
    _10625 = NOVALUE;
L14: 

    /** eds.e:1665		return DB_OK*/
    DeRefDS(_name_18997);
    DeRef(_name_ptr_18999);
    DeRef(_nt_19000);
    DeRef(_tables_19001);
    DeRef(_newtables_19002);
    DeRef(_table_19003);
    DeRef(_records_ptr_19004);
    DeRef(_size_19005);
    DeRef(_newsize_19006);
    DeRef(_index_ptr_19007);
    DeRef(_remaining_19008);
    return 0;
    ;
}


object _48db_table_list()
{
    object _seek_1__tmp_at120_19372 = NOVALUE;
    object _seek_inlined_seek_at_120_19371 = NOVALUE;
    object _seek_1__tmp_at98_19368 = NOVALUE;
    object _seek_inlined_seek_at_98_19367 = NOVALUE;
    object _pos_inlined_seek_at_95_19366 = NOVALUE;
    object _seek_1__tmp_at42_19356 = NOVALUE;
    object _seek_inlined_seek_at_42_19355 = NOVALUE;
    object _seek_1__tmp_at4_19349 = NOVALUE;
    object _seek_inlined_seek_at_4_19348 = NOVALUE;
    object _table_names_19343 = NOVALUE;
    object _tables_19344 = NOVALUE;
    object _nt_19345 = NOVALUE;
    object _name_19346 = NOVALUE;
    object _10724 = NOVALUE;
    object _10723 = NOVALUE;
    object _10721 = NOVALUE;
    object _10720 = NOVALUE;
    object _10719 = NOVALUE;
    object _10718 = NOVALUE;
    object _10713 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1923		io:seek(current_db, TABLE_HEADERS)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    DeRefi(_seek_1__tmp_at4_19349);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = 3;
    _seek_1__tmp_at4_19349 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_4_19348 = machine(19, _seek_1__tmp_at4_19349);
    DeRefi(_seek_1__tmp_at4_19349);
    _seek_1__tmp_at4_19349 = NOVALUE;

    /** eds.e:1924		if length(vLastErrors) > 0 then return {} end if*/
    if (IS_SEQUENCE(_48vLastErrors_17736)){
            _10713 = SEQ_PTR(_48vLastErrors_17736)->length;
    }
    else {
        _10713 = 1;
    }
    if (_10713 <= 0)
    goto L1; // [25] 34
    RefDS(_5);
    DeRef(_table_names_19343);
    DeRef(_tables_19344);
    DeRef(_nt_19345);
    DeRef(_name_19346);
    return _5;
L1: 

    /** eds.e:1925		tables = get4()*/
    _0 = _tables_19344;
    _tables_19344 = _48get4();
    DeRef(_0);

    /** eds.e:1926		io:seek(current_db, tables)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_tables_19344);
    DeRef(_seek_1__tmp_at42_19356);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _tables_19344;
    _seek_1__tmp_at42_19356 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_42_19355 = machine(19, _seek_1__tmp_at42_19356);
    DeRef(_seek_1__tmp_at42_19356);
    _seek_1__tmp_at42_19356 = NOVALUE;

    /** eds.e:1927		nt = get4()*/
    _0 = _nt_19345;
    _nt_19345 = _48get4();
    DeRef(_0);

    /** eds.e:1928		table_names = repeat(0, nt)*/
    DeRef(_table_names_19343);
    _table_names_19343 = Repeat(0, _nt_19345);

    /** eds.e:1929		for i = 0 to nt-1 do*/
    if (IS_ATOM_INT(_nt_19345)) {
        _10718 = _nt_19345 - 1;
        if ((object)((uintptr_t)_10718 +(uintptr_t) HIGH_BITS) >= 0){
            _10718 = NewDouble((eudouble)_10718);
        }
    }
    else {
        _10718 = NewDouble(DBL_PTR(_nt_19345)->dbl - (eudouble)1);
    }
    {
        object _i_19360;
        _i_19360 = 0;
L2: 
        if (binary_op_a(GREATER, _i_19360, _10718)){
            goto L3; // [73] 154
        }

        /** eds.e:1930			io:seek(current_db, tables + 4 + i*SIZEOF_TABLE_HEADER)*/
        if (IS_ATOM_INT(_tables_19344)) {
            _10719 = _tables_19344 + 4;
            if ((object)((uintptr_t)_10719 + (uintptr_t)HIGH_BITS) >= 0){
                _10719 = NewDouble((eudouble)_10719);
            }
        }
        else {
            _10719 = NewDouble(DBL_PTR(_tables_19344)->dbl + (eudouble)4);
        }
        if (IS_ATOM_INT(_i_19360)) {
            if (_i_19360 == (short)_i_19360){
                _10720 = _i_19360 * 16;
            }
            else{
                _10720 = NewDouble(_i_19360 * (eudouble)16);
            }
        }
        else {
            _10720 = NewDouble(DBL_PTR(_i_19360)->dbl * (eudouble)16);
        }
        if (IS_ATOM_INT(_10719) && IS_ATOM_INT(_10720)) {
            _10721 = _10719 + _10720;
            if ((object)((uintptr_t)_10721 + (uintptr_t)HIGH_BITS) >= 0){
                _10721 = NewDouble((eudouble)_10721);
            }
        }
        else {
            if (IS_ATOM_INT(_10719)) {
                _10721 = NewDouble((eudouble)_10719 + DBL_PTR(_10720)->dbl);
            }
            else {
                if (IS_ATOM_INT(_10720)) {
                    _10721 = NewDouble(DBL_PTR(_10719)->dbl + (eudouble)_10720);
                }
                else
                _10721 = NewDouble(DBL_PTR(_10719)->dbl + DBL_PTR(_10720)->dbl);
            }
        }
        DeRef(_10719);
        _10719 = NOVALUE;
        DeRef(_10720);
        _10720 = NOVALUE;
        DeRef(_pos_inlined_seek_at_95_19366);
        _pos_inlined_seek_at_95_19366 = _10721;
        _10721 = NOVALUE;

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_pos_inlined_seek_at_95_19366);
        DeRef(_seek_1__tmp_at98_19368);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _pos_inlined_seek_at_95_19366;
        _seek_1__tmp_at98_19368 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_98_19367 = machine(19, _seek_1__tmp_at98_19368);
        DeRef(_pos_inlined_seek_at_95_19366);
        _pos_inlined_seek_at_95_19366 = NOVALUE;
        DeRef(_seek_1__tmp_at98_19368);
        _seek_1__tmp_at98_19368 = NOVALUE;

        /** eds.e:1931			name = get4()*/
        _0 = _name_19346;
        _name_19346 = _48get4();
        DeRef(_0);

        /** eds.e:1932			io:seek(current_db, name)*/

        /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
        Ref(_name_19346);
        DeRef(_seek_1__tmp_at120_19372);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _48current_db_17712;
        ((intptr_t *)_2)[2] = _name_19346;
        _seek_1__tmp_at120_19372 = MAKE_SEQ(_1);
        _seek_inlined_seek_at_120_19371 = machine(19, _seek_1__tmp_at120_19372);
        DeRef(_seek_1__tmp_at120_19372);
        _seek_1__tmp_at120_19372 = NOVALUE;

        /** eds.e:1933			table_names[i+1] = get_string()*/
        if (IS_ATOM_INT(_i_19360)) {
            _10723 = _i_19360 + 1;
            if (_10723 > MAXINT){
                _10723 = NewDouble((eudouble)_10723);
            }
        }
        else
        _10723 = binary_op(PLUS, 1, _i_19360);
        _10724 = _48get_string();
        _2 = (object)SEQ_PTR(_table_names_19343);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _table_names_19343 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_10723))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_10723)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _10723);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _10724;
        if( _1 != _10724 ){
            DeRef(_1);
        }
        _10724 = NOVALUE;

        /** eds.e:1934		end for*/
        _0 = _i_19360;
        if (IS_ATOM_INT(_i_19360)) {
            _i_19360 = _i_19360 + 1;
            if ((object)((uintptr_t)_i_19360 +(uintptr_t) HIGH_BITS) >= 0){
                _i_19360 = NewDouble((eudouble)_i_19360);
            }
        }
        else {
            _i_19360 = binary_op_a(PLUS, _i_19360, 1);
        }
        DeRef(_0);
        goto L2; // [149] 80
L3: 
        ;
        DeRef(_i_19360);
    }

    /** eds.e:1935		return table_names*/
    DeRef(_tables_19344);
    DeRef(_nt_19345);
    DeRef(_name_19346);
    DeRef(_10723);
    _10723 = NOVALUE;
    DeRef(_10718);
    _10718 = NOVALUE;
    return _table_names_19343;
    ;
}


object _48key_value(object _ptr_19377)
{
    object _seek_1__tmp_at11_19382 = NOVALUE;
    object _seek_inlined_seek_at_11_19381 = NOVALUE;
    object _pos_inlined_seek_at_8_19380 = NOVALUE;
    object _10726 = NOVALUE;
    object _10725 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:1941		io:seek(current_db, ptr+4) -- skip ptr to data*/
    if (IS_ATOM_INT(_ptr_19377)) {
        _10725 = _ptr_19377 + 4;
        if ((object)((uintptr_t)_10725 + (uintptr_t)HIGH_BITS) >= 0){
            _10725 = NewDouble((eudouble)_10725);
        }
    }
    else {
        _10725 = NewDouble(DBL_PTR(_ptr_19377)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_8_19380);
    _pos_inlined_seek_at_8_19380 = _10725;
    _10725 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_8_19380);
    DeRef(_seek_1__tmp_at11_19382);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_8_19380;
    _seek_1__tmp_at11_19382 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_11_19381 = machine(19, _seek_1__tmp_at11_19382);
    DeRef(_pos_inlined_seek_at_8_19380);
    _pos_inlined_seek_at_8_19380 = NOVALUE;
    DeRef(_seek_1__tmp_at11_19382);
    _seek_1__tmp_at11_19382 = NOVALUE;

    /** eds.e:1942		return decompress(0)*/
    _10726 = _48decompress(0);
    DeRef(_ptr_19377);
    return _10726;
    ;
}


object _48db_find_key(object _key_19386, object _table_name_19387)
{
    object _lo_19388 = NOVALUE;
    object _hi_19389 = NOVALUE;
    object _mid_19390 = NOVALUE;
    object _c_19391 = NOVALUE;
    object _10750 = NOVALUE;
    object _10742 = NOVALUE;
    object _10741 = NOVALUE;
    object _10739 = NOVALUE;
    object _10736 = NOVALUE;
    object _10733 = NOVALUE;
    object _10729 = NOVALUE;
    object _10727 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:2003		if not equal(table_name, current_table_name) then*/
    if (_table_name_19387 == _48current_table_name_17714)
    _10727 = 1;
    else if (IS_ATOM_INT(_table_name_19387) && IS_ATOM_INT(_48current_table_name_17714))
    _10727 = 0;
    else
    _10727 = (compare(_table_name_19387, _48current_table_name_17714) == 0);
    if (_10727 != 0)
    goto L1; // [9] 42
    _10727 = NOVALUE;

    /** eds.e:2004			if db_select_table(table_name) != DB_OK then*/
    RefDS(_table_name_19387);
    _10729 = _48db_select_table(_table_name_19387);
    if (binary_op_a(EQUALS, _10729, 0)){
        DeRef(_10729);
        _10729 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_10729);
    _10729 = NOVALUE;

    /** eds.e:2005				fatal(NO_TABLE, "invalid table name given", "db_find_key", {key, table_name})*/
    RefDS(_table_name_19387);
    Ref(_key_19386);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_19386;
    ((intptr_t *)_2)[2] = _table_name_19387;
    _10733 = MAKE_SEQ(_1);
    RefDS(_10731);
    RefDS(_10732);
    _48fatal(903, _10731, _10732, _10733);
    _10733 = NOVALUE;

    /** eds.e:2006				return 0*/
    DeRef(_key_19386);
    DeRefDS(_table_name_19387);
    return 0;
L2: 
L1: 

    /** eds.e:2010		if current_table_pos = -1 then*/
    if (binary_op_a(NOTEQ, _48current_table_pos_17713, -1)){
        goto L3; // [46] 69
    }

    /** eds.e:2011			fatal(NO_TABLE, "no table selected", "db_find_key", {key, table_name})*/
    Ref(_table_name_19387);
    Ref(_key_19386);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_19386;
    ((intptr_t *)_2)[2] = _table_name_19387;
    _10736 = MAKE_SEQ(_1);
    RefDS(_10735);
    RefDS(_10732);
    _48fatal(903, _10735, _10732, _10736);
    _10736 = NOVALUE;

    /** eds.e:2012			return 0*/
    DeRef(_key_19386);
    DeRef(_table_name_19387);
    return 0;
L3: 

    /** eds.e:2015		lo = 1*/
    _lo_19388 = 1;

    /** eds.e:2016		hi = length(key_pointers)*/
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _hi_19389 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _hi_19389 = 1;
    }

    /** eds.e:2017		mid = 1*/
    _mid_19390 = 1;

    /** eds.e:2018		c = 0*/
    _c_19391 = 0;

    /** eds.e:2019		while lo <= hi do*/
L4: 
    if (_lo_19388 > _hi_19389)
    goto L5; // [96] 170

    /** eds.e:2020			mid = floor((lo + hi) / 2)*/
    _10739 = _lo_19388 + _hi_19389;
    if ((object)((uintptr_t)_10739 + (uintptr_t)HIGH_BITS) >= 0){
        _10739 = NewDouble((eudouble)_10739);
    }
    if (IS_ATOM_INT(_10739)) {
        _mid_19390 = _10739 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _10739, 2);
        _mid_19390 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    DeRef(_10739);
    _10739 = NOVALUE;
    if (!IS_ATOM_INT(_mid_19390)) {
        _1 = (object)(DBL_PTR(_mid_19390)->dbl);
        DeRefDS(_mid_19390);
        _mid_19390 = _1;
    }

    /** eds.e:2021			c = eu:compare(key, key_value(key_pointers[mid]))*/
    _2 = (object)SEQ_PTR(_48key_pointers_17719);
    _10741 = (object)*(((s1_ptr)_2)->base + _mid_19390);
    Ref(_10741);
    _10742 = _48key_value(_10741);
    _10741 = NOVALUE;
    if (IS_ATOM_INT(_key_19386) && IS_ATOM_INT(_10742)){
        _c_19391 = (_key_19386 < _10742) ? -1 : (_key_19386 > _10742);
    }
    else{
        _c_19391 = compare(_key_19386, _10742);
    }
    DeRef(_10742);
    _10742 = NOVALUE;

    /** eds.e:2022			if c < 0 then*/
    if (_c_19391 >= 0)
    goto L6; // [130] 143

    /** eds.e:2023				hi = mid - 1*/
    _hi_19389 = _mid_19390 - 1;
    goto L4; // [140] 96
L6: 

    /** eds.e:2024			elsif c > 0 then*/
    if (_c_19391 <= 0)
    goto L7; // [145] 158

    /** eds.e:2025				lo = mid + 1*/
    _lo_19388 = _mid_19390 + 1;
    goto L4; // [155] 96
L7: 

    /** eds.e:2027				return mid*/
    DeRef(_key_19386);
    DeRef(_table_name_19387);
    return _mid_19390;

    /** eds.e:2029		end while*/
    goto L4; // [167] 96
L5: 

    /** eds.e:2031		if c > 0 then*/
    if (_c_19391 <= 0)
    goto L8; // [172] 183

    /** eds.e:2032			mid += 1*/
    _mid_19390 = _mid_19390 + 1;
L8: 

    /** eds.e:2034		return -mid*/
    if ((uintptr_t)_mid_19390 == (uintptr_t)HIGH_BITS){
        _10750 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _10750 = - _mid_19390;
    }
    DeRef(_key_19386);
    DeRef(_table_name_19387);
    return _10750;
    ;
}


object _48db_insert(object _key_19426, object _data_19427, object _table_name_19428)
{
    object _key_string_19429 = NOVALUE;
    object _data_string_19430 = NOVALUE;
    object _last_part_19431 = NOVALUE;
    object _remaining_19432 = NOVALUE;
    object _key_ptr_19433 = NOVALUE;
    object _data_ptr_19434 = NOVALUE;
    object _records_ptr_19435 = NOVALUE;
    object _nrecs_19436 = NOVALUE;
    object _current_block_19437 = NOVALUE;
    object _size_19438 = NOVALUE;
    object _new_size_19439 = NOVALUE;
    object _key_location_19440 = NOVALUE;
    object _new_block_19441 = NOVALUE;
    object _index_ptr_19442 = NOVALUE;
    object _new_index_ptr_19443 = NOVALUE;
    object _total_recs_19444 = NOVALUE;
    object _r_19445 = NOVALUE;
    object _blocks_19446 = NOVALUE;
    object _new_recs_19447 = NOVALUE;
    object _n_19448 = NOVALUE;
    object _put4_1__tmp_at79_19462 = NOVALUE;
    object _seek_1__tmp_at132_19468 = NOVALUE;
    object _seek_inlined_seek_at_132_19467 = NOVALUE;
    object _pos_inlined_seek_at_129_19466 = NOVALUE;
    object _seek_1__tmp_at174_19476 = NOVALUE;
    object _seek_inlined_seek_at_174_19475 = NOVALUE;
    object _pos_inlined_seek_at_171_19474 = NOVALUE;
    object _put4_1__tmp_at189_19478 = NOVALUE;
    object _seek_1__tmp_at317_19496 = NOVALUE;
    object _seek_inlined_seek_at_317_19495 = NOVALUE;
    object _pos_inlined_seek_at_314_19494 = NOVALUE;
    object _seek_1__tmp_at339_19500 = NOVALUE;
    object _seek_inlined_seek_at_339_19499 = NOVALUE;
    object _where_inlined_where_at_404_19509 = NOVALUE;
    object _seek_1__tmp_at448_19519 = NOVALUE;
    object _seek_inlined_seek_at_448_19518 = NOVALUE;
    object _pos_inlined_seek_at_445_19517 = NOVALUE;
    object _put4_1__tmp_at493_19528 = NOVALUE;
    object _x_inlined_put4_at_490_19527 = NOVALUE;
    object _seek_1__tmp_at530_19531 = NOVALUE;
    object _seek_inlined_seek_at_530_19530 = NOVALUE;
    object _put4_1__tmp_at551_19534 = NOVALUE;
    object _seek_1__tmp_at588_19539 = NOVALUE;
    object _seek_inlined_seek_at_588_19538 = NOVALUE;
    object _pos_inlined_seek_at_585_19537 = NOVALUE;
    object _seek_1__tmp_at690_19564 = NOVALUE;
    object _seek_inlined_seek_at_690_19563 = NOVALUE;
    object _pos_inlined_seek_at_687_19562 = NOVALUE;
    object _s_inlined_putn_at_751_19573 = NOVALUE;
    object _seek_1__tmp_at774_19576 = NOVALUE;
    object _seek_inlined_seek_at_774_19575 = NOVALUE;
    object _put4_1__tmp_at796_19580 = NOVALUE;
    object _x_inlined_put4_at_793_19579 = NOVALUE;
    object _seek_1__tmp_at833_19585 = NOVALUE;
    object _seek_inlined_seek_at_833_19584 = NOVALUE;
    object _pos_inlined_seek_at_830_19583 = NOVALUE;
    object _seek_1__tmp_at884_19595 = NOVALUE;
    object _seek_inlined_seek_at_884_19594 = NOVALUE;
    object _pos_inlined_seek_at_881_19593 = NOVALUE;
    object _put4_1__tmp_at899_19597 = NOVALUE;
    object _put4_1__tmp_at927_19599 = NOVALUE;
    object _seek_1__tmp_at980_19605 = NOVALUE;
    object _seek_inlined_seek_at_980_19604 = NOVALUE;
    object _pos_inlined_seek_at_977_19603 = NOVALUE;
    object _put4_1__tmp_at1001_19608 = NOVALUE;
    object _seek_1__tmp_at1038_19613 = NOVALUE;
    object _seek_inlined_seek_at_1038_19612 = NOVALUE;
    object _pos_inlined_seek_at_1035_19611 = NOVALUE;
    object _s_inlined_putn_at_1136_19631 = NOVALUE;
    object _seek_1__tmp_at1173_19636 = NOVALUE;
    object _seek_inlined_seek_at_1173_19635 = NOVALUE;
    object _pos_inlined_seek_at_1170_19634 = NOVALUE;
    object _put4_1__tmp_at1188_19638 = NOVALUE;
    object _10846 = NOVALUE;
    object _10845 = NOVALUE;
    object _10844 = NOVALUE;
    object _10843 = NOVALUE;
    object _10840 = NOVALUE;
    object _10839 = NOVALUE;
    object _10837 = NOVALUE;
    object _10835 = NOVALUE;
    object _10834 = NOVALUE;
    object _10832 = NOVALUE;
    object _10831 = NOVALUE;
    object _10829 = NOVALUE;
    object _10828 = NOVALUE;
    object _10826 = NOVALUE;
    object _10825 = NOVALUE;
    object _10824 = NOVALUE;
    object _10823 = NOVALUE;
    object _10822 = NOVALUE;
    object _10821 = NOVALUE;
    object _10820 = NOVALUE;
    object _10819 = NOVALUE;
    object _10818 = NOVALUE;
    object _10815 = NOVALUE;
    object _10814 = NOVALUE;
    object _10813 = NOVALUE;
    object _10812 = NOVALUE;
    object _10809 = NOVALUE;
    object _10806 = NOVALUE;
    object _10805 = NOVALUE;
    object _10804 = NOVALUE;
    object _10803 = NOVALUE;
    object _10799 = NOVALUE;
    object _10798 = NOVALUE;
    object _10796 = NOVALUE;
    object _10795 = NOVALUE;
    object _10793 = NOVALUE;
    object _10792 = NOVALUE;
    object _10791 = NOVALUE;
    object _10790 = NOVALUE;
    object _10789 = NOVALUE;
    object _10788 = NOVALUE;
    object _10787 = NOVALUE;
    object _10785 = NOVALUE;
    object _10782 = NOVALUE;
    object _10777 = NOVALUE;
    object _10775 = NOVALUE;
    object _10774 = NOVALUE;
    object _10772 = NOVALUE;
    object _10771 = NOVALUE;
    object _10770 = NOVALUE;
    object _10767 = NOVALUE;
    object _10765 = NOVALUE;
    object _10762 = NOVALUE;
    object _10761 = NOVALUE;
    object _10759 = NOVALUE;
    object _10758 = NOVALUE;
    object _10756 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:2071		key_location = db_find_key(key, table_name) -- Let it set the current table if necessary*/
    Ref(_key_19426);
    RefDS(_table_name_19428);
    _0 = _key_location_19440;
    _key_location_19440 = _48db_find_key(_key_19426, _table_name_19428);
    DeRef(_0);

    /** eds.e:2073		if key_location > 0 then*/
    if (binary_op_a(LESSEQ, _key_location_19440, 0)){
        goto L1; // [10] 21
    }

    /** eds.e:2075			return DB_EXISTS_ALREADY*/
    DeRef(_key_19426);
    DeRefDS(_table_name_19428);
    DeRef(_key_string_19429);
    DeRef(_data_string_19430);
    DeRef(_last_part_19431);
    DeRef(_remaining_19432);
    DeRef(_key_ptr_19433);
    DeRef(_data_ptr_19434);
    DeRef(_records_ptr_19435);
    DeRef(_nrecs_19436);
    DeRef(_current_block_19437);
    DeRef(_size_19438);
    DeRef(_new_size_19439);
    DeRef(_key_location_19440);
    DeRef(_new_block_19441);
    DeRef(_index_ptr_19442);
    DeRef(_new_index_ptr_19443);
    DeRef(_total_recs_19444);
    return -2;
L1: 

    /** eds.e:2077		key_location = -key_location*/
    _0 = _key_location_19440;
    if (IS_ATOM_INT(_key_location_19440)) {
        if ((uintptr_t)_key_location_19440 == (uintptr_t)HIGH_BITS){
            _key_location_19440 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _key_location_19440 = - _key_location_19440;
        }
    }
    else {
        _key_location_19440 = unary_op(UMINUS, _key_location_19440);
    }
    DeRef(_0);

    /** eds.e:2079		data_string = compress(data)*/
    _0 = _data_string_19430;
    _data_string_19430 = _48compress(_data_19427);
    DeRef(_0);

    /** eds.e:2080		key_string  = compress(key)*/
    Ref(_key_19426);
    _0 = _key_string_19429;
    _key_string_19429 = _48compress(_key_19426);
    DeRef(_0);

    /** eds.e:2082		data_ptr = db_allocate(length(data_string))*/
    if (IS_SEQUENCE(_data_string_19430)){
            _10756 = SEQ_PTR(_data_string_19430)->length;
    }
    else {
        _10756 = 1;
    }
    _0 = _data_ptr_19434;
    _data_ptr_19434 = _48db_allocate(_10756);
    DeRef(_0);
    _10756 = NOVALUE;

    /** eds.e:2083		putn(data_string)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _data_string_19430); // DJP 

    /** eds.e:449	end procedure*/
    goto L2; // [62] 65
L2: 

    /** eds.e:2085		key_ptr = db_allocate(4+length(key_string))*/
    if (IS_SEQUENCE(_key_string_19429)){
            _10758 = SEQ_PTR(_key_string_19429)->length;
    }
    else {
        _10758 = 1;
    }
    _10759 = 4 + _10758;
    _10758 = NOVALUE;
    _0 = _key_ptr_19433;
    _key_ptr_19433 = _48db_allocate(_10759);
    DeRef(_0);
    _10759 = NOVALUE;

    /** eds.e:2086		put4(data_ptr)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_data_ptr_19434)) {
        *poke4_addr = (uint32_t)_data_ptr_19434;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_data_ptr_19434)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at79_19462);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at79_19462 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at79_19462); // DJP 

    /** eds.e:444	end procedure*/
    goto L3; // [101] 104
L3: 
    DeRefi(_put4_1__tmp_at79_19462);
    _put4_1__tmp_at79_19462 = NOVALUE;

    /** eds.e:2087		putn(key_string)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _key_string_19429); // DJP 

    /** eds.e:449	end procedure*/
    goto L4; // [117] 120
L4: 

    /** eds.e:2091		io:seek(current_db, current_table_pos+4)*/
    if (IS_ATOM_INT(_48current_table_pos_17713)) {
        _10761 = _48current_table_pos_17713 + 4;
        if ((object)((uintptr_t)_10761 + (uintptr_t)HIGH_BITS) >= 0){
            _10761 = NewDouble((eudouble)_10761);
        }
    }
    else {
        _10761 = NewDouble(DBL_PTR(_48current_table_pos_17713)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_129_19466);
    _pos_inlined_seek_at_129_19466 = _10761;
    _10761 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_129_19466);
    DeRef(_seek_1__tmp_at132_19468);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_129_19466;
    _seek_1__tmp_at132_19468 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_132_19467 = machine(19, _seek_1__tmp_at132_19468);
    DeRef(_pos_inlined_seek_at_129_19466);
    _pos_inlined_seek_at_129_19466 = NOVALUE;
    DeRef(_seek_1__tmp_at132_19468);
    _seek_1__tmp_at132_19468 = NOVALUE;

    /** eds.e:2092		total_recs = get4()+1*/
    _10762 = _48get4();
    DeRef(_total_recs_19444);
    if (IS_ATOM_INT(_10762)) {
        _total_recs_19444 = _10762 + 1;
        if (_total_recs_19444 > MAXINT){
            _total_recs_19444 = NewDouble((eudouble)_total_recs_19444);
        }
    }
    else
    _total_recs_19444 = binary_op(PLUS, 1, _10762);
    DeRef(_10762);
    _10762 = NOVALUE;

    /** eds.e:2093		blocks = get4()*/
    _blocks_19446 = _48get4();
    if (!IS_ATOM_INT(_blocks_19446)) {
        _1 = (object)(DBL_PTR(_blocks_19446)->dbl);
        DeRefDS(_blocks_19446);
        _blocks_19446 = _1;
    }

    /** eds.e:2094		io:seek(current_db, current_table_pos+4)*/
    if (IS_ATOM_INT(_48current_table_pos_17713)) {
        _10765 = _48current_table_pos_17713 + 4;
        if ((object)((uintptr_t)_10765 + (uintptr_t)HIGH_BITS) >= 0){
            _10765 = NewDouble((eudouble)_10765);
        }
    }
    else {
        _10765 = NewDouble(DBL_PTR(_48current_table_pos_17713)->dbl + (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_171_19474);
    _pos_inlined_seek_at_171_19474 = _10765;
    _10765 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_171_19474);
    DeRef(_seek_1__tmp_at174_19476);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_171_19474;
    _seek_1__tmp_at174_19476 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_174_19475 = machine(19, _seek_1__tmp_at174_19476);
    DeRef(_pos_inlined_seek_at_171_19474);
    _pos_inlined_seek_at_171_19474 = NOVALUE;
    DeRef(_seek_1__tmp_at174_19476);
    _seek_1__tmp_at174_19476 = NOVALUE;

    /** eds.e:2095		put4(total_recs)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_total_recs_19444)) {
        *poke4_addr = (uint32_t)_total_recs_19444;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_total_recs_19444)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at189_19478);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at189_19478 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at189_19478); // DJP 

    /** eds.e:444	end procedure*/
    goto L5; // [211] 214
L5: 
    DeRefi(_put4_1__tmp_at189_19478);
    _put4_1__tmp_at189_19478 = NOVALUE;

    /** eds.e:2097		n = length(key_pointers)*/
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _n_19448 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _n_19448 = 1;
    }

    /** eds.e:2098		if key_location >= floor(n/2) then*/
    _10767 = _n_19448 >> 1;
    if (binary_op_a(LESS, _key_location_19440, _10767)){
        _10767 = NOVALUE;
        goto L6; // [229] 268
    }
    DeRef(_10767);
    _10767 = NOVALUE;

    /** eds.e:2100			key_pointers = append(key_pointers, 0)*/
    Append(&_48key_pointers_17719, _48key_pointers_17719, 0);

    /** eds.e:2102			key_pointers[key_location+1..n+1] = key_pointers[key_location..n]*/
    if (IS_ATOM_INT(_key_location_19440)) {
        _10770 = _key_location_19440 + 1;
        if (_10770 > MAXINT){
            _10770 = NewDouble((eudouble)_10770);
        }
    }
    else
    _10770 = binary_op(PLUS, 1, _key_location_19440);
    _10771 = _n_19448 + 1;
    rhs_slice_target = (object_ptr)&_10772;
    RHS_Slice(_48key_pointers_17719, _key_location_19440, _n_19448);
    assign_slice_seq = (s1_ptr *)&_48key_pointers_17719;
    AssignSlice(_10770, _10771, _10772);
    DeRef(_10770);
    _10770 = NOVALUE;
    _10771 = NOVALUE;
    DeRefDS(_10772);
    _10772 = NOVALUE;
    goto L7; // [265] 297
L6: 

    /** eds.e:2105			key_pointers = prepend(key_pointers, 0)*/
    Prepend(&_48key_pointers_17719, _48key_pointers_17719, 0);

    /** eds.e:2107			key_pointers[1..key_location-1] = key_pointers[2..key_location]*/
    if (IS_ATOM_INT(_key_location_19440)) {
        _10774 = _key_location_19440 - 1;
        if ((object)((uintptr_t)_10774 +(uintptr_t) HIGH_BITS) >= 0){
            _10774 = NewDouble((eudouble)_10774);
        }
    }
    else {
        _10774 = NewDouble(DBL_PTR(_key_location_19440)->dbl - (eudouble)1);
    }
    rhs_slice_target = (object_ptr)&_10775;
    RHS_Slice(_48key_pointers_17719, 2, _key_location_19440);
    assign_slice_seq = (s1_ptr *)&_48key_pointers_17719;
    AssignSlice(1, _10774, _10775);
    DeRef(_10774);
    _10774 = NOVALUE;
    DeRefDS(_10775);
    _10775 = NOVALUE;
L7: 

    /** eds.e:2109		key_pointers[key_location] = key_ptr*/
    Ref(_key_ptr_19433);
    _2 = (object)SEQ_PTR(_48key_pointers_17719);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _48key_pointers_17719 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_key_location_19440))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_key_location_19440)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _key_location_19440);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _key_ptr_19433;
    DeRef(_1);

    /** eds.e:2111		io:seek(current_db, current_table_pos+12) -- get after put - seek is necessary*/
    if (IS_ATOM_INT(_48current_table_pos_17713)) {
        _10777 = _48current_table_pos_17713 + 12;
        if ((object)((uintptr_t)_10777 + (uintptr_t)HIGH_BITS) >= 0){
            _10777 = NewDouble((eudouble)_10777);
        }
    }
    else {
        _10777 = NewDouble(DBL_PTR(_48current_table_pos_17713)->dbl + (eudouble)12);
    }
    DeRef(_pos_inlined_seek_at_314_19494);
    _pos_inlined_seek_at_314_19494 = _10777;
    _10777 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_314_19494);
    DeRef(_seek_1__tmp_at317_19496);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_314_19494;
    _seek_1__tmp_at317_19496 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_317_19495 = machine(19, _seek_1__tmp_at317_19496);
    DeRef(_pos_inlined_seek_at_314_19494);
    _pos_inlined_seek_at_314_19494 = NOVALUE;
    DeRef(_seek_1__tmp_at317_19496);
    _seek_1__tmp_at317_19496 = NOVALUE;

    /** eds.e:2112		index_ptr = get4()*/
    _0 = _index_ptr_19442;
    _index_ptr_19442 = _48get4();
    DeRef(_0);

    /** eds.e:2114		io:seek(current_db, index_ptr)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_index_ptr_19442);
    DeRef(_seek_1__tmp_at339_19500);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _index_ptr_19442;
    _seek_1__tmp_at339_19500 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_339_19499 = machine(19, _seek_1__tmp_at339_19500);
    DeRef(_seek_1__tmp_at339_19500);
    _seek_1__tmp_at339_19500 = NOVALUE;

    /** eds.e:2115		r = 0*/
    _r_19445 = 0;

    /** eds.e:2116		while TRUE do*/
L8: 

    /** eds.e:2117			nrecs = get4()*/
    _0 = _nrecs_19436;
    _nrecs_19436 = _48get4();
    DeRef(_0);

    /** eds.e:2118			records_ptr = get4()*/
    _0 = _records_ptr_19435;
    _records_ptr_19435 = _48get4();
    DeRef(_0);

    /** eds.e:2119			r += nrecs*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _r_19445 = _r_19445 + _nrecs_19436;
    }
    else {
        _r_19445 = NewDouble((eudouble)_r_19445 + DBL_PTR(_nrecs_19436)->dbl);
    }
    if (!IS_ATOM_INT(_r_19445)) {
        _1 = (object)(DBL_PTR(_r_19445)->dbl);
        DeRefDS(_r_19445);
        _r_19445 = _1;
    }

    /** eds.e:2120			if r + 1 >= key_location then*/
    _10782 = _r_19445 + 1;
    if (_10782 > MAXINT){
        _10782 = NewDouble((eudouble)_10782);
    }
    if (binary_op_a(LESS, _10782, _key_location_19440)){
        DeRef(_10782);
        _10782 = NOVALUE;
        goto L8; // [387] 363
    }
    DeRef(_10782);
    _10782 = NOVALUE;

    /** eds.e:2121				exit*/
    goto L9; // [393] 401

    /** eds.e:2123		end while*/
    goto L8; // [398] 363
L9: 

    /** eds.e:2125		current_block = io:where(current_db)-8*/

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    DeRef(_where_inlined_where_at_404_19509);
    _where_inlined_where_at_404_19509 = machine(20, _48current_db_17712);
    DeRef(_current_block_19437);
    if (IS_ATOM_INT(_where_inlined_where_at_404_19509)) {
        _current_block_19437 = _where_inlined_where_at_404_19509 - 8;
        if ((object)((uintptr_t)_current_block_19437 +(uintptr_t) HIGH_BITS) >= 0){
            _current_block_19437 = NewDouble((eudouble)_current_block_19437);
        }
    }
    else {
        _current_block_19437 = NewDouble(DBL_PTR(_where_inlined_where_at_404_19509)->dbl - (eudouble)8);
    }

    /** eds.e:2127		key_location -= (r-nrecs)*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _10785 = _r_19445 - _nrecs_19436;
        if ((object)((uintptr_t)_10785 +(uintptr_t) HIGH_BITS) >= 0){
            _10785 = NewDouble((eudouble)_10785);
        }
    }
    else {
        _10785 = NewDouble((eudouble)_r_19445 - DBL_PTR(_nrecs_19436)->dbl);
    }
    _0 = _key_location_19440;
    if (IS_ATOM_INT(_key_location_19440) && IS_ATOM_INT(_10785)) {
        _key_location_19440 = _key_location_19440 - _10785;
        if ((object)((uintptr_t)_key_location_19440 +(uintptr_t) HIGH_BITS) >= 0){
            _key_location_19440 = NewDouble((eudouble)_key_location_19440);
        }
    }
    else {
        if (IS_ATOM_INT(_key_location_19440)) {
            _key_location_19440 = NewDouble((eudouble)_key_location_19440 - DBL_PTR(_10785)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10785)) {
                _key_location_19440 = NewDouble(DBL_PTR(_key_location_19440)->dbl - (eudouble)_10785);
            }
            else
            _key_location_19440 = NewDouble(DBL_PTR(_key_location_19440)->dbl - DBL_PTR(_10785)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_10785);
    _10785 = NOVALUE;

    /** eds.e:2129		io:seek(current_db, records_ptr+4*(key_location-1))*/
    if (IS_ATOM_INT(_key_location_19440)) {
        _10787 = _key_location_19440 - 1;
        if ((object)((uintptr_t)_10787 +(uintptr_t) HIGH_BITS) >= 0){
            _10787 = NewDouble((eudouble)_10787);
        }
    }
    else {
        _10787 = NewDouble(DBL_PTR(_key_location_19440)->dbl - (eudouble)1);
    }
    if (IS_ATOM_INT(_10787)) {
        if (_10787 <= INT15 && _10787 >= -INT15){
            _10788 = 4 * _10787;
        }
        else{
            _10788 = NewDouble(4 * (eudouble)_10787);
        }
    }
    else {
        _10788 = NewDouble((eudouble)4 * DBL_PTR(_10787)->dbl);
    }
    DeRef(_10787);
    _10787 = NOVALUE;
    if (IS_ATOM_INT(_records_ptr_19435) && IS_ATOM_INT(_10788)) {
        _10789 = _records_ptr_19435 + _10788;
        if ((object)((uintptr_t)_10789 + (uintptr_t)HIGH_BITS) >= 0){
            _10789 = NewDouble((eudouble)_10789);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_19435)) {
            _10789 = NewDouble((eudouble)_records_ptr_19435 + DBL_PTR(_10788)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10788)) {
                _10789 = NewDouble(DBL_PTR(_records_ptr_19435)->dbl + (eudouble)_10788);
            }
            else
            _10789 = NewDouble(DBL_PTR(_records_ptr_19435)->dbl + DBL_PTR(_10788)->dbl);
        }
    }
    DeRef(_10788);
    _10788 = NOVALUE;
    DeRef(_pos_inlined_seek_at_445_19517);
    _pos_inlined_seek_at_445_19517 = _10789;
    _10789 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_445_19517);
    DeRef(_seek_1__tmp_at448_19519);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_445_19517;
    _seek_1__tmp_at448_19519 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_448_19518 = machine(19, _seek_1__tmp_at448_19519);
    DeRef(_pos_inlined_seek_at_445_19517);
    _pos_inlined_seek_at_445_19517 = NOVALUE;
    DeRef(_seek_1__tmp_at448_19519);
    _seek_1__tmp_at448_19519 = NOVALUE;

    /** eds.e:2130		for i = key_location to nrecs+1 do*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _10790 = _nrecs_19436 + 1;
        if (_10790 > MAXINT){
            _10790 = NewDouble((eudouble)_10790);
        }
    }
    else
    _10790 = binary_op(PLUS, 1, _nrecs_19436);
    {
        object _i_19521;
        Ref(_key_location_19440);
        _i_19521 = _key_location_19440;
LA: 
        if (binary_op_a(GREATER, _i_19521, _10790)){
            goto LB; // [468] 527
        }

        /** eds.e:2131			put4(key_pointers[i+r-nrecs])*/
        if (IS_ATOM_INT(_i_19521)) {
            _10791 = _i_19521 + _r_19445;
            if ((object)((uintptr_t)_10791 + (uintptr_t)HIGH_BITS) >= 0){
                _10791 = NewDouble((eudouble)_10791);
            }
        }
        else {
            _10791 = NewDouble(DBL_PTR(_i_19521)->dbl + (eudouble)_r_19445);
        }
        if (IS_ATOM_INT(_10791) && IS_ATOM_INT(_nrecs_19436)) {
            _10792 = _10791 - _nrecs_19436;
        }
        else {
            if (IS_ATOM_INT(_10791)) {
                _10792 = NewDouble((eudouble)_10791 - DBL_PTR(_nrecs_19436)->dbl);
            }
            else {
                if (IS_ATOM_INT(_nrecs_19436)) {
                    _10792 = NewDouble(DBL_PTR(_10791)->dbl - (eudouble)_nrecs_19436);
                }
                else
                _10792 = NewDouble(DBL_PTR(_10791)->dbl - DBL_PTR(_nrecs_19436)->dbl);
            }
        }
        DeRef(_10791);
        _10791 = NOVALUE;
        _2 = (object)SEQ_PTR(_48key_pointers_17719);
        if (!IS_ATOM_INT(_10792)){
            _10793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_10792)->dbl));
        }
        else{
            _10793 = (object)*(((s1_ptr)_2)->base + _10792);
        }
        Ref(_10793);
        DeRef(_x_inlined_put4_at_490_19527);
        _x_inlined_put4_at_490_19527 = _10793;
        _10793 = NOVALUE;

        /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
        if (IS_ATOM_INT(_48mem0_17754)){
            poke4_addr = (uint32_t *)_48mem0_17754;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
        }
        if (IS_ATOM_INT(_x_inlined_put4_at_490_19527)) {
            *poke4_addr = (uint32_t)_x_inlined_put4_at_490_19527;
        }
        else if (IS_ATOM(_x_inlined_put4_at_490_19527)) {
            *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_490_19527)->dbl;
        }
        else {
            _1 = (object)SEQ_PTR(_x_inlined_put4_at_490_19527);
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

        /** eds.e:443		puts(current_db, peek(memseq))*/
        DeRefi(_put4_1__tmp_at493_19528);
        _1 = (object)SEQ_PTR(_48memseq_17989);
        peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
        _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
        pokeptr_addr = (uintptr_t *)NewS1(_2);
        _put4_1__tmp_at493_19528 = MAKE_SEQ(pokeptr_addr);
        pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
        while (--_2 >= 0) {
            pokeptr_addr++;
            *pokeptr_addr = (object)*peek_addr++;
        }
        EPuts(_48current_db_17712, _put4_1__tmp_at493_19528); // DJP 

        /** eds.e:444	end procedure*/
        goto LC; // [515] 518
LC: 
        DeRef(_x_inlined_put4_at_490_19527);
        _x_inlined_put4_at_490_19527 = NOVALUE;
        DeRefi(_put4_1__tmp_at493_19528);
        _put4_1__tmp_at493_19528 = NOVALUE;

        /** eds.e:2132		end for*/
        _0 = _i_19521;
        if (IS_ATOM_INT(_i_19521)) {
            _i_19521 = _i_19521 + 1;
            if ((object)((uintptr_t)_i_19521 +(uintptr_t) HIGH_BITS) >= 0){
                _i_19521 = NewDouble((eudouble)_i_19521);
            }
        }
        else {
            _i_19521 = binary_op_a(PLUS, _i_19521, 1);
        }
        DeRef(_0);
        goto LA; // [522] 475
LB: 
        ;
        DeRef(_i_19521);
    }

    /** eds.e:2135		io:seek(current_db, current_block)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_current_block_19437);
    DeRef(_seek_1__tmp_at530_19531);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _current_block_19437;
    _seek_1__tmp_at530_19531 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_530_19530 = machine(19, _seek_1__tmp_at530_19531);
    DeRef(_seek_1__tmp_at530_19531);
    _seek_1__tmp_at530_19531 = NOVALUE;

    /** eds.e:2136		nrecs += 1*/
    _0 = _nrecs_19436;
    if (IS_ATOM_INT(_nrecs_19436)) {
        _nrecs_19436 = _nrecs_19436 + 1;
        if (_nrecs_19436 > MAXINT){
            _nrecs_19436 = NewDouble((eudouble)_nrecs_19436);
        }
    }
    else
    _nrecs_19436 = binary_op(PLUS, 1, _nrecs_19436);
    DeRef(_0);

    /** eds.e:2137		put4(nrecs)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_nrecs_19436)) {
        *poke4_addr = (uint32_t)_nrecs_19436;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_nrecs_19436)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at551_19534);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at551_19534 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at551_19534); // DJP 

    /** eds.e:444	end procedure*/
    goto LD; // [573] 576
LD: 
    DeRefi(_put4_1__tmp_at551_19534);
    _put4_1__tmp_at551_19534 = NOVALUE;

    /** eds.e:2140		io:seek(current_db, records_ptr - 4)*/
    if (IS_ATOM_INT(_records_ptr_19435)) {
        _10795 = _records_ptr_19435 - 4;
        if ((object)((uintptr_t)_10795 +(uintptr_t) HIGH_BITS) >= 0){
            _10795 = NewDouble((eudouble)_10795);
        }
    }
    else {
        _10795 = NewDouble(DBL_PTR(_records_ptr_19435)->dbl - (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_585_19537);
    _pos_inlined_seek_at_585_19537 = _10795;
    _10795 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_585_19537);
    DeRef(_seek_1__tmp_at588_19539);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_585_19537;
    _seek_1__tmp_at588_19539 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_588_19538 = machine(19, _seek_1__tmp_at588_19539);
    DeRef(_pos_inlined_seek_at_585_19537);
    _pos_inlined_seek_at_585_19537 = NOVALUE;
    DeRef(_seek_1__tmp_at588_19539);
    _seek_1__tmp_at588_19539 = NOVALUE;

    /** eds.e:2141		size = get4() - 4*/
    _10796 = _48get4();
    DeRef(_size_19438);
    if (IS_ATOM_INT(_10796)) {
        _size_19438 = _10796 - 4;
        if ((object)((uintptr_t)_size_19438 +(uintptr_t) HIGH_BITS) >= 0){
            _size_19438 = NewDouble((eudouble)_size_19438);
        }
    }
    else {
        _size_19438 = binary_op(MINUS, _10796, 4);
    }
    DeRef(_10796);
    _10796 = NOVALUE;

    /** eds.e:2142		if nrecs*4 > size-4 then*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        if (_nrecs_19436 == (short)_nrecs_19436){
            _10798 = _nrecs_19436 * 4;
        }
        else{
            _10798 = NewDouble(_nrecs_19436 * (eudouble)4);
        }
    }
    else {
        _10798 = NewDouble(DBL_PTR(_nrecs_19436)->dbl * (eudouble)4);
    }
    if (IS_ATOM_INT(_size_19438)) {
        _10799 = _size_19438 - 4;
        if ((object)((uintptr_t)_10799 +(uintptr_t) HIGH_BITS) >= 0){
            _10799 = NewDouble((eudouble)_10799);
        }
    }
    else {
        _10799 = NewDouble(DBL_PTR(_size_19438)->dbl - (eudouble)4);
    }
    if (binary_op_a(LESSEQ, _10798, _10799)){
        DeRef(_10798);
        _10798 = NOVALUE;
        DeRef(_10799);
        _10799 = NOVALUE;
        goto LE; // [621] 1217
    }
    DeRef(_10798);
    _10798 = NOVALUE;
    DeRef(_10799);
    _10799 = NOVALUE;

    /** eds.e:2150			new_size = 8 * (20 + floor(sqrt(1.5 * total_recs)))*/
    if (IS_ATOM_INT(_total_recs_19444)) {
        _10803 = NewDouble(DBL_PTR(_10802)->dbl * (eudouble)_total_recs_19444);
    }
    else
    _10803 = NewDouble(DBL_PTR(_10802)->dbl * DBL_PTR(_total_recs_19444)->dbl);
    _10804 = unary_op(SQRT, _10803);
    DeRefDS(_10803);
    _10803 = NOVALUE;
    _10805 = unary_op(FLOOR, _10804);
    DeRefDS(_10804);
    _10804 = NOVALUE;
    if (IS_ATOM_INT(_10805)) {
        _10806 = 20 + _10805;
        if ((object)((uintptr_t)_10806 + (uintptr_t)HIGH_BITS) >= 0){
            _10806 = NewDouble((eudouble)_10806);
        }
    }
    else {
        _10806 = binary_op(PLUS, 20, _10805);
    }
    DeRef(_10805);
    _10805 = NOVALUE;
    DeRef(_new_size_19439);
    if (IS_ATOM_INT(_10806)) {
        if (_10806 <= INT15 && _10806 >= -INT15){
            _new_size_19439 = 8 * _10806;
        }
        else{
            _new_size_19439 = NewDouble(8 * (eudouble)_10806);
        }
    }
    else {
        _new_size_19439 = binary_op(MULTIPLY, 8, _10806);
    }
    DeRef(_10806);
    _10806 = NOVALUE;

    /** eds.e:2152			new_recs = floor(new_size/8)*/
    if (IS_ATOM_INT(_new_size_19439)) {
        if (8 > 0 && _new_size_19439 >= 0) {
            _new_recs_19447 = _new_size_19439 / 8;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_new_size_19439 / (eudouble)8);
            _new_recs_19447 = (object)temp_dbl;
        }
    }
    else {
        _2 = binary_op(DIVIDE, _new_size_19439, 8);
        _new_recs_19447 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    if (!IS_ATOM_INT(_new_recs_19447)) {
        _1 = (object)(DBL_PTR(_new_recs_19447)->dbl);
        DeRefDS(_new_recs_19447);
        _new_recs_19447 = _1;
    }

    /** eds.e:2153			if new_recs > floor(nrecs/2) then*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _10809 = _nrecs_19436 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _nrecs_19436, 2);
        _10809 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    if (binary_op_a(LESSEQ, _new_recs_19447, _10809)){
        DeRef(_10809);
        _10809 = NOVALUE;
        goto LF; // [659] 672
    }
    DeRef(_10809);
    _10809 = NOVALUE;

    /** eds.e:2154				new_recs = floor(nrecs/2)*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _new_recs_19447 = _nrecs_19436 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _nrecs_19436, 2);
        _new_recs_19447 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    if (!IS_ATOM_INT(_new_recs_19447)) {
        _1 = (object)(DBL_PTR(_new_recs_19447)->dbl);
        DeRefDS(_new_recs_19447);
        _new_recs_19447 = _1;
    }
LF: 

    /** eds.e:2158			io:seek(current_db, records_ptr + (nrecs-new_recs)*4)*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _10812 = _nrecs_19436 - _new_recs_19447;
        if ((object)((uintptr_t)_10812 +(uintptr_t) HIGH_BITS) >= 0){
            _10812 = NewDouble((eudouble)_10812);
        }
    }
    else {
        _10812 = NewDouble(DBL_PTR(_nrecs_19436)->dbl - (eudouble)_new_recs_19447);
    }
    if (IS_ATOM_INT(_10812)) {
        if (_10812 == (short)_10812){
            _10813 = _10812 * 4;
        }
        else{
            _10813 = NewDouble(_10812 * (eudouble)4);
        }
    }
    else {
        _10813 = NewDouble(DBL_PTR(_10812)->dbl * (eudouble)4);
    }
    DeRef(_10812);
    _10812 = NOVALUE;
    if (IS_ATOM_INT(_records_ptr_19435) && IS_ATOM_INT(_10813)) {
        _10814 = _records_ptr_19435 + _10813;
        if ((object)((uintptr_t)_10814 + (uintptr_t)HIGH_BITS) >= 0){
            _10814 = NewDouble((eudouble)_10814);
        }
    }
    else {
        if (IS_ATOM_INT(_records_ptr_19435)) {
            _10814 = NewDouble((eudouble)_records_ptr_19435 + DBL_PTR(_10813)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10813)) {
                _10814 = NewDouble(DBL_PTR(_records_ptr_19435)->dbl + (eudouble)_10813);
            }
            else
            _10814 = NewDouble(DBL_PTR(_records_ptr_19435)->dbl + DBL_PTR(_10813)->dbl);
        }
    }
    DeRef(_10813);
    _10813 = NOVALUE;
    DeRef(_pos_inlined_seek_at_687_19562);
    _pos_inlined_seek_at_687_19562 = _10814;
    _10814 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_687_19562);
    DeRef(_seek_1__tmp_at690_19564);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_687_19562;
    _seek_1__tmp_at690_19564 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_690_19563 = machine(19, _seek_1__tmp_at690_19564);
    DeRef(_pos_inlined_seek_at_687_19562);
    _pos_inlined_seek_at_687_19562 = NOVALUE;
    DeRef(_seek_1__tmp_at690_19564);
    _seek_1__tmp_at690_19564 = NOVALUE;

    /** eds.e:2159			last_part = io:get_bytes(current_db, new_recs*4)*/
    if (_new_recs_19447 == (short)_new_recs_19447){
        _10815 = _new_recs_19447 * 4;
    }
    else{
        _10815 = NewDouble(_new_recs_19447 * (eudouble)4);
    }
    _0 = _last_part_19431;
    _last_part_19431 = _19get_bytes(_48current_db_17712, _10815);
    DeRef(_0);
    _10815 = NOVALUE;

    /** eds.e:2160			new_block = db_allocate(new_size)*/
    Ref(_new_size_19439);
    _0 = _new_block_19441;
    _new_block_19441 = _48db_allocate(_new_size_19439);
    DeRef(_0);

    /** eds.e:2161			putn(last_part)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _last_part_19431); // DJP 

    /** eds.e:449	end procedure*/
    goto L10; // [736] 739
L10: 

    /** eds.e:2163			putn(repeat(0, new_size-length(last_part)))*/
    if (IS_SEQUENCE(_last_part_19431)){
            _10818 = SEQ_PTR(_last_part_19431)->length;
    }
    else {
        _10818 = 1;
    }
    if (IS_ATOM_INT(_new_size_19439)) {
        _10819 = _new_size_19439 - _10818;
    }
    else {
        _10819 = NewDouble(DBL_PTR(_new_size_19439)->dbl - (eudouble)_10818);
    }
    _10818 = NOVALUE;
    _10820 = Repeat(0, _10819);
    DeRef(_10819);
    _10819 = NOVALUE;
    DeRefi(_s_inlined_putn_at_751_19573);
    _s_inlined_putn_at_751_19573 = _10820;
    _10820 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_751_19573); // DJP 

    /** eds.e:449	end procedure*/
    goto L11; // [766] 769
L11: 
    DeRefi(_s_inlined_putn_at_751_19573);
    _s_inlined_putn_at_751_19573 = NOVALUE;

    /** eds.e:2166			io:seek(current_db, current_block)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_current_block_19437);
    DeRef(_seek_1__tmp_at774_19576);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _current_block_19437;
    _seek_1__tmp_at774_19576 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_774_19575 = machine(19, _seek_1__tmp_at774_19576);
    DeRef(_seek_1__tmp_at774_19576);
    _seek_1__tmp_at774_19576 = NOVALUE;

    /** eds.e:2167			put4(nrecs-new_recs)*/
    if (IS_ATOM_INT(_nrecs_19436)) {
        _10821 = _nrecs_19436 - _new_recs_19447;
        if ((object)((uintptr_t)_10821 +(uintptr_t) HIGH_BITS) >= 0){
            _10821 = NewDouble((eudouble)_10821);
        }
    }
    else {
        _10821 = NewDouble(DBL_PTR(_nrecs_19436)->dbl - (eudouble)_new_recs_19447);
    }
    DeRef(_x_inlined_put4_at_793_19579);
    _x_inlined_put4_at_793_19579 = _10821;
    _10821 = NOVALUE;

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_x_inlined_put4_at_793_19579)) {
        *poke4_addr = (uint32_t)_x_inlined_put4_at_793_19579;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_x_inlined_put4_at_793_19579)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at796_19580);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at796_19580 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at796_19580); // DJP 

    /** eds.e:444	end procedure*/
    goto L12; // [818] 821
L12: 
    DeRef(_x_inlined_put4_at_793_19579);
    _x_inlined_put4_at_793_19579 = NOVALUE;
    DeRefi(_put4_1__tmp_at796_19580);
    _put4_1__tmp_at796_19580 = NOVALUE;

    /** eds.e:2170			io:seek(current_db, current_block+8)*/
    if (IS_ATOM_INT(_current_block_19437)) {
        _10822 = _current_block_19437 + 8;
        if ((object)((uintptr_t)_10822 + (uintptr_t)HIGH_BITS) >= 0){
            _10822 = NewDouble((eudouble)_10822);
        }
    }
    else {
        _10822 = NewDouble(DBL_PTR(_current_block_19437)->dbl + (eudouble)8);
    }
    DeRef(_pos_inlined_seek_at_830_19583);
    _pos_inlined_seek_at_830_19583 = _10822;
    _10822 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_830_19583);
    DeRef(_seek_1__tmp_at833_19585);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_830_19583;
    _seek_1__tmp_at833_19585 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_833_19584 = machine(19, _seek_1__tmp_at833_19585);
    DeRef(_pos_inlined_seek_at_830_19583);
    _pos_inlined_seek_at_830_19583 = NOVALUE;
    DeRef(_seek_1__tmp_at833_19585);
    _seek_1__tmp_at833_19585 = NOVALUE;

    /** eds.e:2171			remaining = io:get_bytes(current_db, index_ptr+blocks*8-(current_block+8))*/
    if (_blocks_19446 == (short)_blocks_19446){
        _10823 = _blocks_19446 * 8;
    }
    else{
        _10823 = NewDouble(_blocks_19446 * (eudouble)8);
    }
    if (IS_ATOM_INT(_index_ptr_19442) && IS_ATOM_INT(_10823)) {
        _10824 = _index_ptr_19442 + _10823;
        if ((object)((uintptr_t)_10824 + (uintptr_t)HIGH_BITS) >= 0){
            _10824 = NewDouble((eudouble)_10824);
        }
    }
    else {
        if (IS_ATOM_INT(_index_ptr_19442)) {
            _10824 = NewDouble((eudouble)_index_ptr_19442 + DBL_PTR(_10823)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10823)) {
                _10824 = NewDouble(DBL_PTR(_index_ptr_19442)->dbl + (eudouble)_10823);
            }
            else
            _10824 = NewDouble(DBL_PTR(_index_ptr_19442)->dbl + DBL_PTR(_10823)->dbl);
        }
    }
    DeRef(_10823);
    _10823 = NOVALUE;
    if (IS_ATOM_INT(_current_block_19437)) {
        _10825 = _current_block_19437 + 8;
        if ((object)((uintptr_t)_10825 + (uintptr_t)HIGH_BITS) >= 0){
            _10825 = NewDouble((eudouble)_10825);
        }
    }
    else {
        _10825 = NewDouble(DBL_PTR(_current_block_19437)->dbl + (eudouble)8);
    }
    if (IS_ATOM_INT(_10824) && IS_ATOM_INT(_10825)) {
        _10826 = _10824 - _10825;
        if ((object)((uintptr_t)_10826 +(uintptr_t) HIGH_BITS) >= 0){
            _10826 = NewDouble((eudouble)_10826);
        }
    }
    else {
        if (IS_ATOM_INT(_10824)) {
            _10826 = NewDouble((eudouble)_10824 - DBL_PTR(_10825)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10825)) {
                _10826 = NewDouble(DBL_PTR(_10824)->dbl - (eudouble)_10825);
            }
            else
            _10826 = NewDouble(DBL_PTR(_10824)->dbl - DBL_PTR(_10825)->dbl);
        }
    }
    DeRef(_10824);
    _10824 = NOVALUE;
    DeRef(_10825);
    _10825 = NOVALUE;
    _0 = _remaining_19432;
    _remaining_19432 = _19get_bytes(_48current_db_17712, _10826);
    DeRef(_0);
    _10826 = NOVALUE;

    /** eds.e:2172			io:seek(current_db, current_block+8)*/
    if (IS_ATOM_INT(_current_block_19437)) {
        _10828 = _current_block_19437 + 8;
        if ((object)((uintptr_t)_10828 + (uintptr_t)HIGH_BITS) >= 0){
            _10828 = NewDouble((eudouble)_10828);
        }
    }
    else {
        _10828 = NewDouble(DBL_PTR(_current_block_19437)->dbl + (eudouble)8);
    }
    DeRef(_pos_inlined_seek_at_881_19593);
    _pos_inlined_seek_at_881_19593 = _10828;
    _10828 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_881_19593);
    DeRef(_seek_1__tmp_at884_19595);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_881_19593;
    _seek_1__tmp_at884_19595 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_884_19594 = machine(19, _seek_1__tmp_at884_19595);
    DeRef(_pos_inlined_seek_at_881_19593);
    _pos_inlined_seek_at_881_19593 = NOVALUE;
    DeRef(_seek_1__tmp_at884_19595);
    _seek_1__tmp_at884_19595 = NOVALUE;

    /** eds.e:2173			put4(new_recs)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)_new_recs_19447;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at899_19597);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at899_19597 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at899_19597); // DJP 

    /** eds.e:444	end procedure*/
    goto L13; // [921] 924
L13: 
    DeRefi(_put4_1__tmp_at899_19597);
    _put4_1__tmp_at899_19597 = NOVALUE;

    /** eds.e:2174			put4(new_block)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_new_block_19441)) {
        *poke4_addr = (uint32_t)_new_block_19441;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_new_block_19441)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at927_19599);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at927_19599 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at927_19599); // DJP 

    /** eds.e:444	end procedure*/
    goto L14; // [949] 952
L14: 
    DeRefi(_put4_1__tmp_at927_19599);
    _put4_1__tmp_at927_19599 = NOVALUE;

    /** eds.e:2175			putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_19432); // DJP 

    /** eds.e:449	end procedure*/
    goto L15; // [965] 968
L15: 

    /** eds.e:2176			io:seek(current_db, current_table_pos+8)*/
    if (IS_ATOM_INT(_48current_table_pos_17713)) {
        _10829 = _48current_table_pos_17713 + 8;
        if ((object)((uintptr_t)_10829 + (uintptr_t)HIGH_BITS) >= 0){
            _10829 = NewDouble((eudouble)_10829);
        }
    }
    else {
        _10829 = NewDouble(DBL_PTR(_48current_table_pos_17713)->dbl + (eudouble)8);
    }
    DeRef(_pos_inlined_seek_at_977_19603);
    _pos_inlined_seek_at_977_19603 = _10829;
    _10829 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_977_19603);
    DeRef(_seek_1__tmp_at980_19605);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_977_19603;
    _seek_1__tmp_at980_19605 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_980_19604 = machine(19, _seek_1__tmp_at980_19605);
    DeRef(_pos_inlined_seek_at_977_19603);
    _pos_inlined_seek_at_977_19603 = NOVALUE;
    DeRef(_seek_1__tmp_at980_19605);
    _seek_1__tmp_at980_19605 = NOVALUE;

    /** eds.e:2177			blocks += 1*/
    _blocks_19446 = _blocks_19446 + 1;

    /** eds.e:2178			put4(blocks)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    *poke4_addr = (uint32_t)_blocks_19446;

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at1001_19608);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at1001_19608 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at1001_19608); // DJP 

    /** eds.e:444	end procedure*/
    goto L16; // [1023] 1026
L16: 
    DeRefi(_put4_1__tmp_at1001_19608);
    _put4_1__tmp_at1001_19608 = NOVALUE;

    /** eds.e:2180			io:seek(current_db, index_ptr-4)*/
    if (IS_ATOM_INT(_index_ptr_19442)) {
        _10831 = _index_ptr_19442 - 4;
        if ((object)((uintptr_t)_10831 +(uintptr_t) HIGH_BITS) >= 0){
            _10831 = NewDouble((eudouble)_10831);
        }
    }
    else {
        _10831 = NewDouble(DBL_PTR(_index_ptr_19442)->dbl - (eudouble)4);
    }
    DeRef(_pos_inlined_seek_at_1035_19611);
    _pos_inlined_seek_at_1035_19611 = _10831;
    _10831 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_1035_19611);
    DeRef(_seek_1__tmp_at1038_19613);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_1035_19611;
    _seek_1__tmp_at1038_19613 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_1038_19612 = machine(19, _seek_1__tmp_at1038_19613);
    DeRef(_pos_inlined_seek_at_1035_19611);
    _pos_inlined_seek_at_1035_19611 = NOVALUE;
    DeRef(_seek_1__tmp_at1038_19613);
    _seek_1__tmp_at1038_19613 = NOVALUE;

    /** eds.e:2181			size = get4() - 4*/
    _10832 = _48get4();
    DeRef(_size_19438);
    if (IS_ATOM_INT(_10832)) {
        _size_19438 = _10832 - 4;
        if ((object)((uintptr_t)_size_19438 +(uintptr_t) HIGH_BITS) >= 0){
            _size_19438 = NewDouble((eudouble)_size_19438);
        }
    }
    else {
        _size_19438 = binary_op(MINUS, _10832, 4);
    }
    DeRef(_10832);
    _10832 = NOVALUE;

    /** eds.e:2182			if blocks*8 > size-8 then*/
    if (_blocks_19446 == (short)_blocks_19446){
        _10834 = _blocks_19446 * 8;
    }
    else{
        _10834 = NewDouble(_blocks_19446 * (eudouble)8);
    }
    if (IS_ATOM_INT(_size_19438)) {
        _10835 = _size_19438 - 8;
        if ((object)((uintptr_t)_10835 +(uintptr_t) HIGH_BITS) >= 0){
            _10835 = NewDouble((eudouble)_10835);
        }
    }
    else {
        _10835 = NewDouble(DBL_PTR(_size_19438)->dbl - (eudouble)8);
    }
    if (binary_op_a(LESSEQ, _10834, _10835)){
        DeRef(_10834);
        _10834 = NOVALUE;
        DeRef(_10835);
        _10835 = NOVALUE;
        goto L17; // [1071] 1216
    }
    DeRef(_10834);
    _10834 = NOVALUE;
    DeRef(_10835);
    _10835 = NOVALUE;

    /** eds.e:2184				remaining = io:get_bytes(current_db, blocks*8)*/
    if (_blocks_19446 == (short)_blocks_19446){
        _10837 = _blocks_19446 * 8;
    }
    else{
        _10837 = NewDouble(_blocks_19446 * (eudouble)8);
    }
    _0 = _remaining_19432;
    _remaining_19432 = _19get_bytes(_48current_db_17712, _10837);
    DeRef(_0);
    _10837 = NOVALUE;

    /** eds.e:2185				new_size = floor(size + size/2)*/
    if (IS_ATOM_INT(_size_19438)) {
        if (_size_19438 & 1) {
            _10839 = NewDouble((_size_19438 >> 1) + 0.5);
        }
        else
        _10839 = _size_19438 >> 1;
    }
    else {
        _10839 = binary_op(DIVIDE, _size_19438, 2);
    }
    if (IS_ATOM_INT(_size_19438) && IS_ATOM_INT(_10839)) {
        _10840 = _size_19438 + _10839;
        if ((object)((uintptr_t)_10840 + (uintptr_t)HIGH_BITS) >= 0){
            _10840 = NewDouble((eudouble)_10840);
        }
    }
    else {
        if (IS_ATOM_INT(_size_19438)) {
            _10840 = NewDouble((eudouble)_size_19438 + DBL_PTR(_10839)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10839)) {
                _10840 = NewDouble(DBL_PTR(_size_19438)->dbl + (eudouble)_10839);
            }
            else
            _10840 = NewDouble(DBL_PTR(_size_19438)->dbl + DBL_PTR(_10839)->dbl);
        }
    }
    DeRef(_10839);
    _10839 = NOVALUE;
    DeRef(_new_size_19439);
    if (IS_ATOM_INT(_10840))
    _new_size_19439 = e_floor(_10840);
    else
    _new_size_19439 = unary_op(FLOOR, _10840);
    DeRef(_10840);
    _10840 = NOVALUE;

    /** eds.e:2186				new_index_ptr = db_allocate(new_size)*/
    Ref(_new_size_19439);
    _0 = _new_index_ptr_19443;
    _new_index_ptr_19443 = _48db_allocate(_new_size_19439);
    DeRef(_0);

    /** eds.e:2187				putn(remaining)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _remaining_19432); // DJP 

    /** eds.e:449	end procedure*/
    goto L18; // [1120] 1123
L18: 

    /** eds.e:2188				putn(repeat(0, new_size-blocks*8))*/
    if (_blocks_19446 == (short)_blocks_19446){
        _10843 = _blocks_19446 * 8;
    }
    else{
        _10843 = NewDouble(_blocks_19446 * (eudouble)8);
    }
    if (IS_ATOM_INT(_new_size_19439) && IS_ATOM_INT(_10843)) {
        _10844 = _new_size_19439 - _10843;
    }
    else {
        if (IS_ATOM_INT(_new_size_19439)) {
            _10844 = NewDouble((eudouble)_new_size_19439 - DBL_PTR(_10843)->dbl);
        }
        else {
            if (IS_ATOM_INT(_10843)) {
                _10844 = NewDouble(DBL_PTR(_new_size_19439)->dbl - (eudouble)_10843);
            }
            else
            _10844 = NewDouble(DBL_PTR(_new_size_19439)->dbl - DBL_PTR(_10843)->dbl);
        }
    }
    DeRef(_10843);
    _10843 = NOVALUE;
    _10845 = Repeat(0, _10844);
    DeRef(_10844);
    _10844 = NOVALUE;
    DeRefi(_s_inlined_putn_at_1136_19631);
    _s_inlined_putn_at_1136_19631 = _10845;
    _10845 = NOVALUE;

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _s_inlined_putn_at_1136_19631); // DJP 

    /** eds.e:449	end procedure*/
    goto L19; // [1151] 1154
L19: 
    DeRefi(_s_inlined_putn_at_1136_19631);
    _s_inlined_putn_at_1136_19631 = NOVALUE;

    /** eds.e:2189				db_free(index_ptr)*/
    Ref(_index_ptr_19442);
    _48db_free(_index_ptr_19442);

    /** eds.e:2190				io:seek(current_db, current_table_pos+12)*/
    if (IS_ATOM_INT(_48current_table_pos_17713)) {
        _10846 = _48current_table_pos_17713 + 12;
        if ((object)((uintptr_t)_10846 + (uintptr_t)HIGH_BITS) >= 0){
            _10846 = NewDouble((eudouble)_10846);
        }
    }
    else {
        _10846 = NewDouble(DBL_PTR(_48current_table_pos_17713)->dbl + (eudouble)12);
    }
    DeRef(_pos_inlined_seek_at_1170_19634);
    _pos_inlined_seek_at_1170_19634 = _10846;
    _10846 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_1170_19634);
    DeRef(_seek_1__tmp_at1173_19636);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_1170_19634;
    _seek_1__tmp_at1173_19636 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_1173_19635 = machine(19, _seek_1__tmp_at1173_19636);
    DeRef(_pos_inlined_seek_at_1170_19634);
    _pos_inlined_seek_at_1170_19634 = NOVALUE;
    DeRef(_seek_1__tmp_at1173_19636);
    _seek_1__tmp_at1173_19636 = NOVALUE;

    /** eds.e:2191				put4(new_index_ptr)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_new_index_ptr_19443)) {
        *poke4_addr = (uint32_t)_new_index_ptr_19443;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_new_index_ptr_19443)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at1188_19638);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at1188_19638 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at1188_19638); // DJP 

    /** eds.e:444	end procedure*/
    goto L1A; // [1210] 1213
L1A: 
    DeRefi(_put4_1__tmp_at1188_19638);
    _put4_1__tmp_at1188_19638 = NOVALUE;
L17: 
LE: 

    /** eds.e:2194		return DB_OK*/
    DeRef(_key_19426);
    DeRef(_table_name_19428);
    DeRef(_key_string_19429);
    DeRef(_data_string_19430);
    DeRef(_last_part_19431);
    DeRef(_remaining_19432);
    DeRef(_key_ptr_19433);
    DeRef(_data_ptr_19434);
    DeRef(_records_ptr_19435);
    DeRef(_nrecs_19436);
    DeRef(_current_block_19437);
    DeRef(_size_19438);
    DeRef(_new_size_19439);
    DeRef(_key_location_19440);
    DeRef(_new_block_19441);
    DeRef(_index_ptr_19442);
    DeRef(_new_index_ptr_19443);
    DeRef(_total_recs_19444);
    DeRef(_10790);
    _10790 = NOVALUE;
    DeRef(_10792);
    _10792 = NOVALUE;
    return 0;
    ;
}


void _48db_replace_data(object _key_location_19773, object _data_19774, object _table_name_19775)
{
    object _10920 = NOVALUE;
    object _10919 = NOVALUE;
    object _10918 = NOVALUE;
    object _10917 = NOVALUE;
    object _10915 = NOVALUE;
    object _10914 = NOVALUE;
    object _10912 = NOVALUE;
    object _10909 = NOVALUE;
    object _10907 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:2323		if not equal(table_name, current_table_name) then*/
    if (_table_name_19775 == _48current_table_name_17714)
    _10907 = 1;
    else if (IS_ATOM_INT(_table_name_19775) && IS_ATOM_INT(_48current_table_name_17714))
    _10907 = 0;
    else
    _10907 = (compare(_table_name_19775, _48current_table_name_17714) == 0);
    if (_10907 != 0)
    goto L1; // [11] 45
    _10907 = NOVALUE;

    /** eds.e:2324			if db_select_table(table_name) != DB_OK then*/
    RefDS(_table_name_19775);
    _10909 = _48db_select_table(_table_name_19775);
    if (binary_op_a(EQUALS, _10909, 0)){
        DeRef(_10909);
        _10909 = NOVALUE;
        goto L2; // [20] 44
    }
    DeRef(_10909);
    _10909 = NOVALUE;

    /** eds.e:2325				fatal(NO_TABLE, "invalid table name given", "db_replace_data", {key_location, data, table_name})*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_19773;
    ((intptr_t*)_2)[2] = _data_19774;
    RefDS(_table_name_19775);
    ((intptr_t*)_2)[3] = _table_name_19775;
    _10912 = MAKE_SEQ(_1);
    RefDS(_10731);
    RefDS(_10911);
    _48fatal(903, _10731, _10911, _10912);
    _10912 = NOVALUE;

    /** eds.e:2326				return*/
    DeRefDS(_table_name_19775);
    return;
L2: 
L1: 

    /** eds.e:2330		if current_table_pos = -1 then*/
    if (binary_op_a(NOTEQ, _48current_table_pos_17713, -1)){
        goto L3; // [49] 73
    }

    /** eds.e:2331			fatal(NO_TABLE, "no table selected", "db_replace_data", {key_location, data, table_name})*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_19773;
    ((intptr_t*)_2)[2] = _data_19774;
    Ref(_table_name_19775);
    ((intptr_t*)_2)[3] = _table_name_19775;
    _10914 = MAKE_SEQ(_1);
    RefDS(_10735);
    RefDS(_10911);
    _48fatal(903, _10735, _10911, _10914);
    _10914 = NOVALUE;

    /** eds.e:2332			return*/
    DeRef(_table_name_19775);
    return;
L3: 

    /** eds.e:2334		if key_location < 1 or key_location > length(key_pointers) then*/
    _10915 = (_key_location_19773 < 1);
    if (_10915 != 0) {
        goto L4; // [79] 97
    }
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _10917 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _10917 = 1;
    }
    _10918 = (_key_location_19773 > _10917);
    _10917 = NOVALUE;
    if (_10918 == 0)
    {
        DeRef(_10918);
        _10918 = NOVALUE;
        goto L5; // [93] 117
    }
    else{
        DeRef(_10918);
        _10918 = NOVALUE;
    }
L4: 

    /** eds.e:2335			fatal(BAD_RECNO, "bad record number", "db_replace_data", {key_location, data, table_name})*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _key_location_19773;
    ((intptr_t*)_2)[2] = _data_19774;
    Ref(_table_name_19775);
    ((intptr_t*)_2)[3] = _table_name_19775;
    _10919 = MAKE_SEQ(_1);
    RefDS(_10859);
    RefDS(_10911);
    _48fatal(905, _10859, _10911, _10919);
    _10919 = NOVALUE;

    /** eds.e:2336			return*/
    DeRef(_table_name_19775);
    DeRef(_10915);
    _10915 = NOVALUE;
    return;
L5: 

    /** eds.e:2338		db_replace_recid(key_pointers[key_location], data)*/
    _2 = (object)SEQ_PTR(_48key_pointers_17719);
    _10920 = (object)*(((s1_ptr)_2)->base + _key_location_19773);
    Ref(_10920);
    _48db_replace_recid(_10920, _data_19774);
    _10920 = NOVALUE;

    /** eds.e:2339	end procedure*/
    DeRef(_table_name_19775);
    DeRef(_10915);
    _10915 = NOVALUE;
    return;
    ;
}


object _48db_table_size(object _table_name_19797)
{
    object _10929 = NOVALUE;
    object _10928 = NOVALUE;
    object _10926 = NOVALUE;
    object _10923 = NOVALUE;
    object _10921 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:2369		if not equal(table_name, current_table_name) then*/
    if (_table_name_19797 == _48current_table_name_17714)
    _10921 = 1;
    else if (IS_ATOM_INT(_table_name_19797) && IS_ATOM_INT(_48current_table_name_17714))
    _10921 = 0;
    else
    _10921 = (compare(_table_name_19797, _48current_table_name_17714) == 0);
    if (_10921 != 0)
    goto L1; // [9] 42
    _10921 = NOVALUE;

    /** eds.e:2370			if db_select_table(table_name) != DB_OK then*/
    RefDS(_table_name_19797);
    _10923 = _48db_select_table(_table_name_19797);
    if (binary_op_a(EQUALS, _10923, 0)){
        DeRef(_10923);
        _10923 = NOVALUE;
        goto L2; // [18] 41
    }
    DeRef(_10923);
    _10923 = NOVALUE;

    /** eds.e:2371				fatal(NO_TABLE, "invalid table name given", "db_table_size", {table_name})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_table_name_19797);
    ((intptr_t*)_2)[1] = _table_name_19797;
    _10926 = MAKE_SEQ(_1);
    RefDS(_10731);
    RefDS(_10925);
    _48fatal(903, _10731, _10925, _10926);
    _10926 = NOVALUE;

    /** eds.e:2372				return -1*/
    DeRefDS(_table_name_19797);
    return -1;
L2: 
L1: 

    /** eds.e:2376		if current_table_pos = -1 then*/
    if (binary_op_a(NOTEQ, _48current_table_pos_17713, -1)){
        goto L3; // [46] 69
    }

    /** eds.e:2377			fatal(NO_TABLE, "no table selected", "db_table_size", {table_name})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_table_name_19797);
    ((intptr_t*)_2)[1] = _table_name_19797;
    _10928 = MAKE_SEQ(_1);
    RefDS(_10735);
    RefDS(_10925);
    _48fatal(903, _10735, _10925, _10928);
    _10928 = NOVALUE;

    /** eds.e:2378			return -1*/
    DeRef(_table_name_19797);
    return -1;
L3: 

    /** eds.e:2380		return length(key_pointers)*/
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _10929 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _10929 = 1;
    }
    DeRef(_table_name_19797);
    return _10929;
    ;
}


object _48db_record_data(object _key_location_19812, object _table_name_19813)
{
    object _data_ptr_19814 = NOVALUE;
    object _data_value_19815 = NOVALUE;
    object _seek_1__tmp_at126_19837 = NOVALUE;
    object _seek_inlined_seek_at_126_19836 = NOVALUE;
    object _pos_inlined_seek_at_123_19835 = NOVALUE;
    object _seek_1__tmp_at164_19844 = NOVALUE;
    object _seek_inlined_seek_at_164_19843 = NOVALUE;
    object _10944 = NOVALUE;
    object _10943 = NOVALUE;
    object _10942 = NOVALUE;
    object _10941 = NOVALUE;
    object _10940 = NOVALUE;
    object _10938 = NOVALUE;
    object _10937 = NOVALUE;
    object _10935 = NOVALUE;
    object _10932 = NOVALUE;
    object _10930 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_key_location_19812)) {
        _1 = (object)(DBL_PTR(_key_location_19812)->dbl);
        DeRefDS(_key_location_19812);
        _key_location_19812 = _1;
    }

    /** eds.e:2417		if not equal(table_name, current_table_name) then*/
    if (_table_name_19813 == _48current_table_name_17714)
    _10930 = 1;
    else if (IS_ATOM_INT(_table_name_19813) && IS_ATOM_INT(_48current_table_name_17714))
    _10930 = 0;
    else
    _10930 = (compare(_table_name_19813, _48current_table_name_17714) == 0);
    if (_10930 != 0)
    goto L1; // [11] 44
    _10930 = NOVALUE;

    /** eds.e:2418			if db_select_table(table_name) != DB_OK then*/
    RefDS(_table_name_19813);
    _10932 = _48db_select_table(_table_name_19813);
    if (binary_op_a(EQUALS, _10932, 0)){
        DeRef(_10932);
        _10932 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_10932);
    _10932 = NOVALUE;

    /** eds.e:2419				fatal(NO_TABLE, "invalid table name given", "db_record_data", {key_location, table_name})*/
    RefDS(_table_name_19813);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19812;
    ((intptr_t *)_2)[2] = _table_name_19813;
    _10935 = MAKE_SEQ(_1);
    RefDS(_10731);
    RefDS(_10934);
    _48fatal(903, _10731, _10934, _10935);
    _10935 = NOVALUE;

    /** eds.e:2420				return -1*/
    DeRefDS(_table_name_19813);
    DeRef(_data_ptr_19814);
    DeRef(_data_value_19815);
    return -1;
L2: 
L1: 

    /** eds.e:2424		if current_table_pos = -1 then*/
    if (binary_op_a(NOTEQ, _48current_table_pos_17713, -1)){
        goto L3; // [48] 71
    }

    /** eds.e:2425			fatal(NO_TABLE, "no table selected", "db_record_data", {key_location, table_name})*/
    Ref(_table_name_19813);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19812;
    ((intptr_t *)_2)[2] = _table_name_19813;
    _10937 = MAKE_SEQ(_1);
    RefDS(_10735);
    RefDS(_10934);
    _48fatal(903, _10735, _10934, _10937);
    _10937 = NOVALUE;

    /** eds.e:2426			return -1*/
    DeRef(_table_name_19813);
    DeRef(_data_ptr_19814);
    DeRef(_data_value_19815);
    return -1;
L3: 

    /** eds.e:2428		if key_location < 1 or key_location > length(key_pointers) then*/
    _10938 = (_key_location_19812 < 1);
    if (_10938 != 0) {
        goto L4; // [77] 95
    }
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _10940 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _10940 = 1;
    }
    _10941 = (_key_location_19812 > _10940);
    _10940 = NOVALUE;
    if (_10941 == 0)
    {
        DeRef(_10941);
        _10941 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_10941);
        _10941 = NOVALUE;
    }
L4: 

    /** eds.e:2429			fatal(BAD_RECNO, "bad record number", "db_record_data", {key_location, table_name})*/
    Ref(_table_name_19813);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19812;
    ((intptr_t *)_2)[2] = _table_name_19813;
    _10942 = MAKE_SEQ(_1);
    RefDS(_10859);
    RefDS(_10934);
    _48fatal(905, _10859, _10934, _10942);
    _10942 = NOVALUE;

    /** eds.e:2430			return -1*/
    DeRef(_table_name_19813);
    DeRef(_data_ptr_19814);
    DeRef(_data_value_19815);
    DeRef(_10938);
    _10938 = NOVALUE;
    return -1;
L5: 

    /** eds.e:2433		io:seek(current_db, key_pointers[key_location])*/
    _2 = (object)SEQ_PTR(_48key_pointers_17719);
    _10943 = (object)*(((s1_ptr)_2)->base + _key_location_19812);
    Ref(_10943);
    DeRef(_pos_inlined_seek_at_123_19835);
    _pos_inlined_seek_at_123_19835 = _10943;
    _10943 = NOVALUE;

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_pos_inlined_seek_at_123_19835);
    DeRef(_seek_1__tmp_at126_19837);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _pos_inlined_seek_at_123_19835;
    _seek_1__tmp_at126_19837 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_126_19836 = machine(19, _seek_1__tmp_at126_19837);
    DeRef(_pos_inlined_seek_at_123_19835);
    _pos_inlined_seek_at_123_19835 = NOVALUE;
    DeRef(_seek_1__tmp_at126_19837);
    _seek_1__tmp_at126_19837 = NOVALUE;

    /** eds.e:2434		if length(vLastErrors) > 0 then return -1 end if*/
    if (IS_SEQUENCE(_48vLastErrors_17736)){
            _10944 = SEQ_PTR(_48vLastErrors_17736)->length;
    }
    else {
        _10944 = 1;
    }
    if (_10944 <= 0)
    goto L6; // [147] 156
    DeRef(_table_name_19813);
    DeRef(_data_ptr_19814);
    DeRef(_data_value_19815);
    DeRef(_10938);
    _10938 = NOVALUE;
    return -1;
L6: 

    /** eds.e:2435		data_ptr = get4()*/
    _0 = _data_ptr_19814;
    _data_ptr_19814 = _48get4();
    DeRef(_0);

    /** eds.e:2436		io:seek(current_db, data_ptr)*/

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    Ref(_data_ptr_19814);
    DeRef(_seek_1__tmp_at164_19844);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _48current_db_17712;
    ((intptr_t *)_2)[2] = _data_ptr_19814;
    _seek_1__tmp_at164_19844 = MAKE_SEQ(_1);
    _seek_inlined_seek_at_164_19843 = machine(19, _seek_1__tmp_at164_19844);
    DeRef(_seek_1__tmp_at164_19844);
    _seek_1__tmp_at164_19844 = NOVALUE;

    /** eds.e:2437		data_value = decompress(0)*/
    _0 = _data_value_19815;
    _data_value_19815 = _48decompress(0);
    DeRef(_0);

    /** eds.e:2439		return data_value*/
    DeRef(_table_name_19813);
    DeRef(_data_ptr_19814);
    DeRef(_10938);
    _10938 = NOVALUE;
    return _data_value_19815;
    ;
}


object _48db_fetch_record(object _key_19848, object _table_name_19849)
{
    object _pos_19850 = NOVALUE;
    object _10950 = NOVALUE;
    object _0, _1, _2;
    

    /** eds.e:2481		pos = db_find_key(key, table_name)*/
    Ref(_key_19848);
    RefDS(_table_name_19849);
    _pos_19850 = _48db_find_key(_key_19848, _table_name_19849);
    if (!IS_ATOM_INT(_pos_19850)) {
        _1 = (object)(DBL_PTR(_pos_19850)->dbl);
        DeRefDS(_pos_19850);
        _pos_19850 = _1;
    }

    /** eds.e:2482		if pos > 0 then*/
    if (_pos_19850 <= 0)
    goto L1; // [12] 30

    /** eds.e:2483			return db_record_data(pos, table_name)*/
    RefDS(_table_name_19849);
    _10950 = _48db_record_data(_pos_19850, _table_name_19849);
    DeRef(_key_19848);
    DeRefDS(_table_name_19849);
    return _10950;
    goto L2; // [27] 37
L1: 

    /** eds.e:2485			return pos*/
    DeRef(_key_19848);
    DeRef(_table_name_19849);
    DeRef(_10950);
    _10950 = NOVALUE;
    return _pos_19850;
L2: 
    ;
}


object _48db_record_key(object _key_location_19858, object _table_name_19859)
{
    object _10965 = NOVALUE;
    object _10964 = NOVALUE;
    object _10963 = NOVALUE;
    object _10962 = NOVALUE;
    object _10961 = NOVALUE;
    object _10959 = NOVALUE;
    object _10958 = NOVALUE;
    object _10956 = NOVALUE;
    object _10953 = NOVALUE;
    object _10951 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_key_location_19858)) {
        _1 = (object)(DBL_PTR(_key_location_19858)->dbl);
        DeRefDS(_key_location_19858);
        _key_location_19858 = _1;
    }

    /** eds.e:2519		if not equal(table_name, current_table_name) then*/
    if (_table_name_19859 == _48current_table_name_17714)
    _10951 = 1;
    else if (IS_ATOM_INT(_table_name_19859) && IS_ATOM_INT(_48current_table_name_17714))
    _10951 = 0;
    else
    _10951 = (compare(_table_name_19859, _48current_table_name_17714) == 0);
    if (_10951 != 0)
    goto L1; // [11] 44
    _10951 = NOVALUE;

    /** eds.e:2520			if db_select_table(table_name) != DB_OK then*/
    RefDS(_table_name_19859);
    _10953 = _48db_select_table(_table_name_19859);
    if (binary_op_a(EQUALS, _10953, 0)){
        DeRef(_10953);
        _10953 = NOVALUE;
        goto L2; // [20] 43
    }
    DeRef(_10953);
    _10953 = NOVALUE;

    /** eds.e:2521				fatal(NO_TABLE, "invalid table name given", "db_record_key", {key_location, table_name})*/
    RefDS(_table_name_19859);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19858;
    ((intptr_t *)_2)[2] = _table_name_19859;
    _10956 = MAKE_SEQ(_1);
    RefDS(_10731);
    RefDS(_10955);
    _48fatal(903, _10731, _10955, _10956);
    _10956 = NOVALUE;

    /** eds.e:2522				return -1*/
    DeRefDS(_table_name_19859);
    return -1;
L2: 
L1: 

    /** eds.e:2526		if current_table_pos = -1 then*/
    if (binary_op_a(NOTEQ, _48current_table_pos_17713, -1)){
        goto L3; // [48] 71
    }

    /** eds.e:2527			fatal(NO_TABLE, "no table selected", "db_record_key", {key_location, table_name})*/
    Ref(_table_name_19859);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19858;
    ((intptr_t *)_2)[2] = _table_name_19859;
    _10958 = MAKE_SEQ(_1);
    RefDS(_10735);
    RefDS(_10955);
    _48fatal(903, _10735, _10955, _10958);
    _10958 = NOVALUE;

    /** eds.e:2528			return -1*/
    DeRef(_table_name_19859);
    return -1;
L3: 

    /** eds.e:2530		if key_location < 1 or key_location > length(key_pointers) then*/
    _10959 = (_key_location_19858 < 1);
    if (_10959 != 0) {
        goto L4; // [77] 95
    }
    if (IS_SEQUENCE(_48key_pointers_17719)){
            _10961 = SEQ_PTR(_48key_pointers_17719)->length;
    }
    else {
        _10961 = 1;
    }
    _10962 = (_key_location_19858 > _10961);
    _10961 = NOVALUE;
    if (_10962 == 0)
    {
        DeRef(_10962);
        _10962 = NOVALUE;
        goto L5; // [91] 114
    }
    else{
        DeRef(_10962);
        _10962 = NOVALUE;
    }
L4: 

    /** eds.e:2531			fatal(BAD_RECNO, "bad record number", "db_record_key", {key_location, table_name})*/
    Ref(_table_name_19859);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _key_location_19858;
    ((intptr_t *)_2)[2] = _table_name_19859;
    _10963 = MAKE_SEQ(_1);
    RefDS(_10859);
    RefDS(_10955);
    _48fatal(905, _10859, _10955, _10963);
    _10963 = NOVALUE;

    /** eds.e:2532			return -1*/
    DeRef(_table_name_19859);
    DeRef(_10959);
    _10959 = NOVALUE;
    return -1;
L5: 

    /** eds.e:2534		return key_value(key_pointers[key_location])*/
    _2 = (object)SEQ_PTR(_48key_pointers_17719);
    _10964 = (object)*(((s1_ptr)_2)->base + _key_location_19858);
    Ref(_10964);
    _10965 = _48key_value(_10964);
    _10964 = NOVALUE;
    DeRef(_table_name_19859);
    DeRef(_10959);
    _10959 = NOVALUE;
    return _10965;
    ;
}


void _48db_replace_recid(object _recid_19972, object _data_19973)
{
    object _old_size_19974 = NOVALUE;
    object _new_size_19975 = NOVALUE;
    object _data_ptr_19976 = NOVALUE;
    object _data_string_19977 = NOVALUE;
    object _put4_1__tmp_at111_19997 = NOVALUE;
    object _11064 = NOVALUE;
    object _11063 = NOVALUE;
    object _11062 = NOVALUE;
    object _11061 = NOVALUE;
    object _11060 = NOVALUE;
    object _11032 = NOVALUE;
    object _11030 = NOVALUE;
    object _11029 = NOVALUE;
    object _11028 = NOVALUE;
    object _11027 = NOVALUE;
    object _11026 = NOVALUE;
    object _11022 = NOVALUE;
    object _11021 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_recid_19972)) {
        _1 = (object)(DBL_PTR(_recid_19972)->dbl);
        DeRefDS(_recid_19972);
        _recid_19972 = _1;
    }

    /** eds.e:2760		seek(current_db, recid)*/
    _11064 = _19seek(_48current_db_17712, _recid_19972);
    DeRef(_11064);
    _11064 = NOVALUE;

    /** eds.e:2761		data_ptr = get4()*/
    _0 = _data_ptr_19976;
    _data_ptr_19976 = _48get4();
    DeRef(_0);

    /** eds.e:2762		seek(current_db, data_ptr-4)*/
    if (IS_ATOM_INT(_data_ptr_19976)) {
        _11021 = _data_ptr_19976 - 4;
        if ((object)((uintptr_t)_11021 +(uintptr_t) HIGH_BITS) >= 0){
            _11021 = NewDouble((eudouble)_11021);
        }
    }
    else {
        _11021 = NewDouble(DBL_PTR(_data_ptr_19976)->dbl - (eudouble)4);
    }
    _11063 = _19seek(_48current_db_17712, _11021);
    _11021 = NOVALUE;
    DeRef(_11063);
    _11063 = NOVALUE;

    /** eds.e:2763		old_size = get4()-4*/
    _11022 = _48get4();
    DeRef(_old_size_19974);
    if (IS_ATOM_INT(_11022)) {
        _old_size_19974 = _11022 - 4;
        if ((object)((uintptr_t)_old_size_19974 +(uintptr_t) HIGH_BITS) >= 0){
            _old_size_19974 = NewDouble((eudouble)_old_size_19974);
        }
    }
    else {
        _old_size_19974 = binary_op(MINUS, _11022, 4);
    }
    DeRef(_11022);
    _11022 = NOVALUE;

    /** eds.e:2764		data_string = compress(data)*/
    _0 = _data_string_19977;
    _data_string_19977 = _48compress(_data_19973);
    DeRef(_0);

    /** eds.e:2765		new_size = length(data_string)*/
    if (IS_SEQUENCE(_data_string_19977)){
            _new_size_19975 = SEQ_PTR(_data_string_19977)->length;
    }
    else {
        _new_size_19975 = 1;
    }

    /** eds.e:2766		if new_size <= old_size and*/
    if (IS_ATOM_INT(_old_size_19974)) {
        _11026 = (_new_size_19975 <= _old_size_19974);
    }
    else {
        _11026 = ((eudouble)_new_size_19975 <= DBL_PTR(_old_size_19974)->dbl);
    }
    if (_11026 == 0) {
        goto L1; // [62] 92
    }
    if (IS_ATOM_INT(_old_size_19974)) {
        _11028 = _old_size_19974 - 16;
        if ((object)((uintptr_t)_11028 +(uintptr_t) HIGH_BITS) >= 0){
            _11028 = NewDouble((eudouble)_11028);
        }
    }
    else {
        _11028 = NewDouble(DBL_PTR(_old_size_19974)->dbl - (eudouble)16);
    }
    if (IS_ATOM_INT(_11028)) {
        _11029 = (_new_size_19975 >= _11028);
    }
    else {
        _11029 = ((eudouble)_new_size_19975 >= DBL_PTR(_11028)->dbl);
    }
    DeRef(_11028);
    _11028 = NOVALUE;
    if (_11029 == 0)
    {
        DeRef(_11029);
        _11029 = NOVALUE;
        goto L1; // [75] 92
    }
    else{
        DeRef(_11029);
        _11029 = NOVALUE;
    }

    /** eds.e:2769			seek(current_db, data_ptr)*/
    Ref(_data_ptr_19976);
    _11062 = _19seek(_48current_db_17712, _data_ptr_19976);
    DeRef(_11062);
    _11062 = NOVALUE;
    goto L2; // [89] 168
L1: 

    /** eds.e:2772			db_free(data_ptr)*/
    Ref(_data_ptr_19976);
    _48db_free(_data_ptr_19976);

    /** eds.e:2774			data_ptr = db_allocate(new_size + 8)*/
    _11030 = _new_size_19975 + 8;
    if ((object)((uintptr_t)_11030 + (uintptr_t)HIGH_BITS) >= 0){
        _11030 = NewDouble((eudouble)_11030);
    }
    _0 = _data_ptr_19976;
    _data_ptr_19976 = _48db_allocate(_11030);
    DeRef(_0);
    _11030 = NOVALUE;

    /** eds.e:2775			seek(current_db, recid)*/
    _11061 = _19seek(_48current_db_17712, _recid_19972);
    DeRef(_11061);
    _11061 = NOVALUE;

    /** eds.e:2776			put4(data_ptr)*/

    /** eds.e:442		poke4(mem0, x) -- faster than doing divides etc.*/
    if (IS_ATOM_INT(_48mem0_17754)){
        poke4_addr = (uint32_t *)_48mem0_17754;
    }
    else {
        poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_48mem0_17754)->dbl);
    }
    if (IS_ATOM_INT(_data_ptr_19976)) {
        *poke4_addr = (uint32_t)_data_ptr_19976;
    }
    else {
        *poke4_addr = (uint32_t)DBL_PTR(_data_ptr_19976)->dbl;
    }

    /** eds.e:443		puts(current_db, peek(memseq))*/
    DeRefi(_put4_1__tmp_at111_19997);
    _1 = (object)SEQ_PTR(_48memseq_17989);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _put4_1__tmp_at111_19997 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    EPuts(_48current_db_17712, _put4_1__tmp_at111_19997); // DJP 

    /** eds.e:444	end procedure*/
    goto L3; // [141] 144
L3: 
    DeRefi(_put4_1__tmp_at111_19997);
    _put4_1__tmp_at111_19997 = NOVALUE;

    /** eds.e:2777			seek(current_db, data_ptr)*/
    Ref(_data_ptr_19976);
    _11060 = _19seek(_48current_db_17712, _data_ptr_19976);
    DeRef(_11060);
    _11060 = NOVALUE;

    /** eds.e:2781			data_string &= repeat( 0, 8 )*/
    _11032 = Repeat(0, 8);
    Concat((object_ptr)&_data_string_19977, _data_string_19977, _11032);
    DeRefDS(_11032);
    _11032 = NOVALUE;
L2: 

    /** eds.e:2784		putn(data_string)*/

    /** eds.e:448		puts(current_db, s)*/
    EPuts(_48current_db_17712, _data_string_19977); // DJP 

    /** eds.e:449	end procedure*/
    goto L4; // [179] 182
L4: 

    /** eds.e:2785	end procedure*/
    DeRef(_old_size_19974);
    DeRef(_data_ptr_19976);
    DeRef(_data_string_19977);
    DeRef(_11026);
    _11026 = NOVALUE;
    return;
    ;
}



// 0x04B8677A
