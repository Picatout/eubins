// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _19get_bytes(object _fn_7456, object _n_7457)
{
    object _s_7458 = NOVALUE;
    object _c_7459 = NOVALUE;
    object _first_7460 = NOVALUE;
    object _last_7461 = NOVALUE;
    object _4091 = NOVALUE; // 7485 4091
// skipping _4090  name type: 0
// skipping _4089  name type: 0
    object _4088 = NOVALUE; // 7482 4088
// skipping _4087  name type: 0
    object _4086 = NOVALUE; // 7479 4086
    object _4085 = NOVALUE; // 7477 4085
    object _4084 = NOVALUE; // 7476 4084
// skipping _4083  name type: 0
// skipping _4082  name type: 0
// skipping _4081  name type: 0
// skipping _4080  name type: 0
// skipping _4079  name type: 0
// skipping _4078  name type: 0
// skipping _4077  name type: 0
// skipping _4076  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_bytes pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_bytes pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_n_7457)) {
        _1 = (object)(DBL_PTR(_n_7457)->dbl);
        DeRefDS(_n_7457);
        _n_7457 = _1;
    }
    // SubProg get_bytes pc: 5 op: STARTLINE (58)

    /** io.e:455		if n = 0 then*/
    // SubProg get_bytes pc: 7 op: EQUALS_IFW_I (121)
    if (_n_7457 != 0)
    goto L1; // [7] 18
    // SubProg get_bytes pc: 11 op: STARTLINE (58)

    /** io.e:456			return {}*/
    // SubProg get_bytes pc: 13 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_bytes

// block var fn_7456

// block var n_7457

// block var s_7458
    DeRefi(_s_7458);

// block var c_7459

// block var first_7460

// block var last_7461
    return _5;
    // SubProg get_bytes pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 7454 op: 159
    // SubProg get_bytes pc: 18 op: STARTLINE (58)

    /** io.e:459		c = getc(fn)*/
    // SubProg get_bytes pc: 20 op: GETC (33)
    if (_fn_7456 != last_r_file_no) {
        last_r_file_ptr = which_file(_fn_7456, EF_READ);
        last_r_file_no = _fn_7456;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7459 = getc((FILE*)xstdin);
        }
        else{
            _c_7459 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7459 = getc(last_r_file_ptr);
    }
    // SubProg get_bytes pc: 23 op: STARTLINE (58)

    /** io.e:460		if c = EOF then*/
    // SubProg get_bytes pc: 25 op: EQUALS_IFW_I (121)
    if (_c_7459 != -1)
    goto L2; // [25] 36
    // SubProg get_bytes pc: 29 op: STARTLINE (58)

    /** io.e:461			return {}*/
    // SubProg get_bytes pc: 31 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_bytes

// block var fn_7456

// block var n_7457

// block var s_7458
    DeRefi(_s_7458);

// block var c_7459

// block var first_7460

// block var last_7461
    return _5;
    // SubProg get_bytes pc: 35 op: NOP1 (159)
L2: // addr: 36 pc: 35 sub: 7454 op: 159
    // SubProg get_bytes pc: 36 op: STARTLINE (58)

    /** io.e:464		s = repeat(c, n)*/
    // SubProg get_bytes pc: 38 op: REPEAT (32)
    DeRefi(_s_7458);
    _s_7458 = Repeat(_c_7459, _n_7457);
    // SubProg get_bytes pc: 42 op: STARTLINE (58)

    /** io.e:466		last = 1*/
    // SubProg get_bytes pc: 44 op: ASSIGN_I (113)
    _last_7461 = 1;
    // SubProg get_bytes pc: 47 op: STARTLINE (58)

    /** io.e:467		while last < n do*/
    // SubProg get_bytes pc: 49 op: NOP2 (110)
    // SubProg get_bytes pc: 51 op: NOPWHILE (158)
L3: // addr: 52 pc: 51 sub: 7454 op: 158
    // SubProg get_bytes pc: 52 op: LESS_IFW_I (119)
    if (_last_7461 >= _n_7457)
    goto L4; // [52] 159
    // SubProg get_bytes pc: 56 op: STARTLINE (58)

    /** io.e:469			first = last+1*/
    // SubProg get_bytes pc: 58 op: PLUS1_I (117)
    _first_7460 = _last_7461 + 1;
    // SubProg get_bytes pc: 62 op: STARTLINE (58)

    /** io.e:470			last  = last+CHUNK*/
    // SubProg get_bytes pc: 64 op: PLUS_I (115)
    _last_7461 = _last_7461 + 100;
    // SubProg get_bytes pc: 68 op: STARTLINE (58)

    /** io.e:471			if last > n then*/
    // SubProg get_bytes pc: 70 op: GREATER_IFW_I (124)
    if (_last_7461 <= _n_7457)
    goto L5; // [70] 80
    // SubProg get_bytes pc: 74 op: STARTLINE (58)

    /** io.e:472				last = n*/
    // SubProg get_bytes pc: 76 op: ASSIGN_I (113)
    _last_7461 = _n_7457;
    // SubProg get_bytes pc: 79 op: NOP1 (159)
L5: // addr: 80 pc: 79 sub: 7454 op: 159
    // SubProg get_bytes pc: 80 op: STARTLINE (58)

    /** io.e:474			for i = first to last do*/
    // SubProg get_bytes pc: 82 op: ASSIGN (18)
    _4084 = _last_7461;
    // SubProg get_bytes pc: 85 op: FOR_I (125)
    {
        object _i_7475;
        _i_7475 = _first_7460;
L6: // addr: 92 pc: 85 sub: 7454 op: 125
        if (_i_7475 > _4084){
            goto L7; // [85] 108
        }
        // SubProg get_bytes pc: 92 op: STARTLINE (58)

        /** io.e:475				s[i] = getc(fn)*/
        // SubProg get_bytes pc: 94 op: GETC (33)
        if (_fn_7456 != last_r_file_no) {
            last_r_file_ptr = which_file(_fn_7456, EF_READ);
            last_r_file_no = _fn_7456;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _4085 = getc((FILE*)xstdin);
            }
            else{
                _4085 = getc(last_r_file_ptr);
            }
        }
        else{
            _4085 = getc(last_r_file_ptr);
        }
        // SubProg get_bytes pc: 97 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_s_7458);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_7458 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_7475);
        *(intptr_t *)_2 = _4085;
        if( _1 != _4085 ){
        }
        _4085 = NOVALUE;
        // SubProg get_bytes pc: 101 op: STARTLINE (58)

        /** io.e:476			end for*/
        // SubProg get_bytes pc: 103 op: ENDFOR_INT_UP1 (54)
        _i_7475 = _i_7475 + 1;
        goto L6; // [103] 92
L7: // addr: 108 pc: 103 sub: 7454 op: 54
        ;
    }
    // SubProg get_bytes pc: 108 op: STARTLINE (58)

    /** io.e:478			if s[last] = EOF then*/
    // SubProg get_bytes pc: 110 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_7458);
    _4086 = (object)*(((s1_ptr)_2)->base + _last_7461);
    // SubProg get_bytes pc: 114 op: EQUALS_IFW (104)
    if (_4086 != -1)
    goto L3; // [114] 52
    // SubProg get_bytes pc: 118 op: STARTLINE (58)

    /** io.e:480				while s[last] = EOF do*/
    // SubProg get_bytes pc: 120 op: NOP2 (110)
    // SubProg get_bytes pc: 122 op: NOPWHILE (158)
L8: // addr: 123 pc: 122 sub: 7454 op: 158
    // SubProg get_bytes pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_7458);
    _4088 = (object)*(((s1_ptr)_2)->base + _last_7461);
    // SubProg get_bytes pc: 127 op: EQUALS_IFW (104)
    if (_4088 != -1)
    goto L9; // [127] 142
    // SubProg get_bytes pc: 131 op: STARTLINE (58)

    /** io.e:481					last -= 1*/
    // SubProg get_bytes pc: 133 op: MINUS_I (116)
    _last_7461 = _last_7461 - 1;
    // SubProg get_bytes pc: 137 op: STARTLINE (58)

    /** io.e:482				end while*/
    // SubProg get_bytes pc: 139 op: ENDWHILE (22)
    goto L8; // [139] 123
    // SubProg get_bytes pc: 141 op: NOP1 (159)
L9: // addr: 142 pc: 141 sub: 7454 op: 159
    // SubProg get_bytes pc: 142 op: STARTLINE (58)

    /** io.e:483				return s[1..last]*/
    // SubProg get_bytes pc: 144 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4091;
    RHS_Slice(_s_7458, 1, _last_7461);
    // SubProg get_bytes pc: 149 op: RETURNF (28)

// Exiting block BLOCK: get_bytes

// block var fn_7456

// block var n_7457

// block var s_7458
    DeRefDSi(_s_7458);

// block var c_7459

// block var first_7460

// block var last_7461
    _4088 = NOVALUE;
    _4086 = NOVALUE;
    return _4091;
    // SubProg get_bytes pc: 153 op: NOP1 (159)
    // SubProg get_bytes pc: 154 op: STARTLINE (58)

    /** io.e:485		end while*/
    // SubProg get_bytes pc: 156 op: ENDWHILE (22)
    goto L3; // [156] 52
    // SubProg get_bytes pc: 158 op: NOP1 (159)
L4: // addr: 159 pc: 158 sub: 7454 op: 159
    // SubProg get_bytes pc: 159 op: STARTLINE (58)

    /** io.e:486		return s*/
    // SubProg get_bytes pc: 161 op: RETURNF (28)

// Exiting block BLOCK: get_bytes

// block var fn_7456

// block var n_7457

// block var c_7459

// block var first_7460

// block var last_7461
    _4088 = NOVALUE;
    DeRef(_4091);
    _4091 = NOVALUE;
    _4086 = NOVALUE;
    return _s_7458;
    // SubProg get_bytes pc: 165 op: BADRETURNF (43)
    ;
}


object _19get_integer32(object _fh_7496)
{
    object _c_7497 = NOVALUE;
    object _4101 = NOVALUE; // 7504 4101
// skipping _4100  name type: 0
// skipping _4099  name type: 0
// skipping _4098  name type: 0
// skipping _4097  name type: 0
// skipping _4096  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_integer32 pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_integer32 pc: 3 op: STARTLINE (58)

    /** io.e:525		c = getc(fh)*/
    // SubProg get_integer32 pc: 5 op: GETC (33)
    if (_fh_7496 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7496, EF_READ);
        last_r_file_no = _fh_7496;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7497 = getc((FILE*)xstdin);
        }
        else{
            _c_7497 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7497 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 8 op: STARTLINE (58)

    /** io.e:526		poke(mem0, c)*/
    // SubProg get_integer32 pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 12 op: POKE (128)
    if (IS_ATOM_INT(_19mem0_7486)){
        poke_addr = (uint8_t *)_19mem0_7486;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem0_7486)->dbl);
    }
    *poke_addr = (uint8_t)_c_7497;
    // SubProg get_integer32 pc: 15 op: STARTLINE (58)

    /** io.e:527		c = getc(fh)*/
    // SubProg get_integer32 pc: 17 op: GETC (33)
    if (_fh_7496 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7496, EF_READ);
        last_r_file_no = _fh_7496;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7497 = getc((FILE*)xstdin);
        }
        else{
            _c_7497 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7497 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 20 op: STARTLINE (58)

    /** io.e:528		poke(mem1, c)*/
    // SubProg get_integer32 pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 24 op: POKE (128)
    if (IS_ATOM_INT(_19mem1_7487)){
        poke_addr = (uint8_t *)_19mem1_7487;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem1_7487)->dbl);
    }
    *poke_addr = (uint8_t)_c_7497;
    // SubProg get_integer32 pc: 27 op: STARTLINE (58)

    /** io.e:529		c = getc(fh)*/
    // SubProg get_integer32 pc: 29 op: GETC (33)
    if (_fh_7496 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7496, EF_READ);
        last_r_file_no = _fh_7496;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7497 = getc((FILE*)xstdin);
        }
        else{
            _c_7497 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7497 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 32 op: STARTLINE (58)

    /** io.e:530		poke(mem2, c)*/
    // SubProg get_integer32 pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 36 op: POKE (128)
    if (IS_ATOM_INT(_19mem2_7488)){
        poke_addr = (uint8_t *)_19mem2_7488;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem2_7488)->dbl);
    }
    *poke_addr = (uint8_t)_c_7497;
    // SubProg get_integer32 pc: 39 op: STARTLINE (58)

    /** io.e:531		c = getc(fh)*/
    // SubProg get_integer32 pc: 41 op: GETC (33)
    if (_fh_7496 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7496, EF_READ);
        last_r_file_no = _fh_7496;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7497 = getc((FILE*)xstdin);
        }
        else{
            _c_7497 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7497 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 44 op: STARTLINE (58)

    /** io.e:532		if c = -1 then*/
    // SubProg get_integer32 pc: 46 op: EQUALS_IFW_I (121)
    if (_c_7497 != -1)
    goto L1; // [46] 57
    // SubProg get_integer32 pc: 50 op: STARTLINE (58)

    /** io.e:533			return -1*/
    // SubProg get_integer32 pc: 52 op: RETURNF (28)

// Exiting block BLOCK: get_integer32

// block var fh_7496

// block var c_7497
    return -1;
    // SubProg get_integer32 pc: 56 op: NOP1 (159)
L1: // addr: 57 pc: 56 sub: 7494 op: 159
    // SubProg get_integer32 pc: 57 op: STARTLINE (58)

    /** io.e:535		poke(mem3, c)*/
    // SubProg get_integer32 pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 61 op: POKE (128)
    if (IS_ATOM_INT(_19mem3_7489)){
        poke_addr = (uint8_t *)_19mem3_7489;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem3_7489)->dbl);
    }
    *poke_addr = (uint8_t)_c_7497;
    // SubProg get_integer32 pc: 64 op: STARTLINE (58)

    /** io.e:536		return peek4u(mem0)*/
    // SubProg get_integer32 pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 68 op: PEEK4U (140)
    if (IS_ATOM_INT(_19mem0_7486)) {
        _4101 = (object)*(uint32_t *)_19mem0_7486;
        if ((uintptr_t)_4101 > (uintptr_t)MAXINT){
            _4101 = NewDouble((eudouble)(uintptr_t)_4101);
        }
    }
    else {
        _4101 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_19mem0_7486)->dbl);
        if ((uintptr_t)_4101 > (uintptr_t)MAXINT){
            _4101 = NewDouble((eudouble)(uintptr_t)_4101);
        }
    }
    // SubProg get_integer32 pc: 71 op: RETURNF (28)

// Exiting block BLOCK: get_integer32

// block var fh_7496

// block var c_7497
    return _4101;
    // SubProg get_integer32 pc: 75 op: BADRETURNF (43)
    ;
}


object _19get_integer16(object _fh_7507)
{
    object _c_7508 = NOVALUE;
    object _4105 = NOVALUE; // 7513 4105
// skipping _4104  name type: 0
// skipping _4103  name type: 0
// skipping _4102  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_integer16 pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_integer16 pc: 3 op: STARTLINE (58)

    /** io.e:568		c = getc(fh)*/
    // SubProg get_integer16 pc: 5 op: GETC (33)
    if (_fh_7507 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7507, EF_READ);
        last_r_file_no = _fh_7507;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7508 = getc((FILE*)xstdin);
        }
        else{
            _c_7508 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7508 = getc(last_r_file_ptr);
    }
    // SubProg get_integer16 pc: 8 op: STARTLINE (58)

    /** io.e:569		poke(mem0, c)*/
    // SubProg get_integer16 pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 12 op: POKE (128)
    if (IS_ATOM_INT(_19mem0_7486)){
        poke_addr = (uint8_t *)_19mem0_7486;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem0_7486)->dbl);
    }
    *poke_addr = (uint8_t)_c_7508;
    // SubProg get_integer16 pc: 15 op: STARTLINE (58)

    /** io.e:570		c = getc(fh)*/
    // SubProg get_integer16 pc: 17 op: GETC (33)
    if (_fh_7507 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_7507, EF_READ);
        last_r_file_no = _fh_7507;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_7508 = getc((FILE*)xstdin);
        }
        else{
            _c_7508 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_7508 = getc(last_r_file_ptr);
    }
    // SubProg get_integer16 pc: 20 op: STARTLINE (58)

    /** io.e:571		if c = -1 then*/
    // SubProg get_integer16 pc: 22 op: EQUALS_IFW_I (121)
    if (_c_7508 != -1)
    goto L1; // [22] 33
    // SubProg get_integer16 pc: 26 op: STARTLINE (58)

    /** io.e:572			return -1*/
    // SubProg get_integer16 pc: 28 op: RETURNF (28)

// Exiting block BLOCK: get_integer16

// block var fh_7507

// block var c_7508
    return -1;
    // SubProg get_integer16 pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 7505 op: 159
    // SubProg get_integer16 pc: 33 op: STARTLINE (58)

    /** io.e:574		poke(mem1, c)*/
    // SubProg get_integer16 pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 37 op: POKE (128)
    if (IS_ATOM_INT(_19mem1_7487)){
        poke_addr = (uint8_t *)_19mem1_7487;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_19mem1_7487)->dbl);
    }
    *poke_addr = (uint8_t)_c_7508;
    // SubProg get_integer16 pc: 40 op: STARTLINE (58)

    /** io.e:575		return peek2u(mem0)*/
    // SubProg get_integer16 pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 44 op: PEEK2U (180)
    if (IS_ATOM_INT(_19mem0_7486)) {
        _4105 = *(uint16_t *)_19mem0_7486;
    }
    else {
        _4105 = *(uint16_t *)(uintptr_t)(DBL_PTR(_19mem0_7486)->dbl);
    }
    // SubProg get_integer16 pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_integer16

// block var fh_7507

// block var c_7508
    return _4105;
    // SubProg get_integer16 pc: 51 op: BADRETURNF (43)
    ;
}


object _19seek(object _fn_7603, object _pos_7604)
{
    object _4151 = NOVALUE; // 7606 4151
    object _4150 = NOVALUE; // 7605 4150
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg seek pc: 1 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg seek pc: 3 op: RIGHT_BRACE_2 (85)
    Ref(_pos_7604);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn_7603;
    ((intptr_t *)_2)[2] = _pos_7604;
    _4150 = MAKE_SEQ(_1);
    // SubProg seek pc: 7 op: MACHINE_FUNC (111)
    _4151 = machine(19, _4150);
    DeRefDS(_4150);
    _4150 = NOVALUE;
    // SubProg seek pc: 11 op: RETURNF (28)

// Exiting block BLOCK: seek

// block var fn_7603

// block var pos_7604
    DeRef(_pos_7604);
    return _4151;
    // SubProg seek pc: 15 op: BADRETURNF (43)
    ;
}


object _19where(object _fn_7609)
{
    object _4152 = NOVALUE; // 7610 4152
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg where pc: 1 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg where pc: 3 op: MACHINE_FUNC (111)
    _4152 = machine(20, _fn_7609);
    // SubProg where pc: 7 op: RETURNF (28)

// Exiting block BLOCK: where

// block var fn_7609
    return _4152;
    // SubProg where pc: 11 op: BADRETURNF (43)
    ;
}


object _19read_lines(object _file_7628)
{
    object _fn_7629 = NOVALUE;
    object _ret_7630 = NOVALUE;
    object _y_7631 = NOVALUE;
    object _4182 = NOVALUE; // 7669 4182
    object _4181 = NOVALUE; // 7668 4181
    object _4180 = NOVALUE; // 7667 4180
    object _4179 = NOVALUE; // 7666 4179
// skipping _4178  name type: 0
// skipping _4177  name type: 0
// skipping _4176  name type: 0
// skipping _4175  name type: 0
    object _4174 = NOVALUE; // 7659 4174
    object _4173 = NOVALUE; // 7658 4173
// skipping _4172  name type: 0
    object _4171 = NOVALUE; // 7656 4171
    object _4170 = NOVALUE; // 7655 4170
    object _4169 = NOVALUE; // 7653 4169
// skipping _4168  name type: 0
    object _4167 = NOVALUE; // 7650 4167
    object _4166 = NOVALUE; // 7649 4166
// skipping _4165  name type: 0
    object _4164 = NOVALUE; // 7647 4164
    object _4163 = NOVALUE; // 7646 4163
    object _4162 = NOVALUE; // 7644 4162
// skipping _4161  name type: 0
// skipping _4160  name type: 0
// skipping _4158  name type: 0
    object _4157 = NOVALUE; // 7635 4157
    object _4156 = NOVALUE; // 7633 4156
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_lines pc: 1 op: STARTLINE (58)

    /** io.e:1127		if sequence(file) then*/
    // SubProg read_lines pc: 3 op: IS_A_SEQUENCE (68)
    _4156 = 1;
    // SubProg read_lines pc: 6 op: IF (20)
    if (_4156 == 0)
    {
        _4156 = NOVALUE;
        goto L1; // [6] 37
    }
    else{
        _4156 = NOVALUE;
    }
    // SubProg read_lines pc: 9 op: STARTLINE (58)

    /** io.e:1128			if length(file) = 0 then*/
    // SubProg read_lines pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_file_7628)){
            _4157 = SEQ_PTR(_file_7628)->length;
    }
    else {
        _4157 = 1;
    }
    // SubProg read_lines pc: 14 op: EQUALS_IFW_I (121)
    if (_4157 != 0)
    goto L2; // [14] 26
    // SubProg read_lines pc: 18 op: STARTLINE (58)

    /** io.e:1129				fn = 0*/
    // SubProg read_lines pc: 20 op: ASSIGN (18)
    DeRef(_fn_7629);
    _fn_7629 = 0;
    // SubProg read_lines pc: 23 op: ELSE (23)
    goto L3; // [23] 43
    // SubProg read_lines pc: 25 op: NOP1 (159)
L2: // addr: 26 pc: 25 sub: 7626 op: 159
    // SubProg read_lines pc: 26 op: STARTLINE (58)

    /** io.e:1131				fn = open(file, "r")*/
    // SubProg read_lines pc: 28 op: OPEN (37)
    DeRef(_fn_7629);
    _fn_7629 = EOpen(_file_7628, _4159, 0);
    // SubProg read_lines pc: 33 op: NOP1 (159)
    // SubProg read_lines pc: 34 op: ELSE (23)
    goto L3; // [34] 43
    // SubProg read_lines pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 7626 op: 159
    // SubProg read_lines pc: 37 op: STARTLINE (58)

    /** io.e:1134			fn = file*/
    // SubProg read_lines pc: 39 op: ASSIGN (18)
    Ref(_file_7628);
    DeRef(_fn_7629);
    _fn_7629 = _file_7628;
    // SubProg read_lines pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 7626 op: 159
    // SubProg read_lines pc: 43 op: STARTLINE (58)

    /** io.e:1136		if fn < 0 then return -1 end if*/
    // SubProg read_lines pc: 45 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 47 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_7629, 0)){
        goto L4; // [47] 56
    }
    // SubProg read_lines pc: 51 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_7628
    DeRef(_file_7628);

// block var fn_7629
    DeRef(_fn_7629);

// block var ret_7630
    DeRef(_ret_7630);

// block var y_7631
    DeRefi(_y_7631);
    return -1;
    // SubProg read_lines pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 7626 op: 159
    // SubProg read_lines pc: 56 op: STARTLINE (58)

    /** io.e:1138		ret = {}*/
    // SubProg read_lines pc: 58 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_7630);
    _ret_7630 = _5;
    // SubProg read_lines pc: 61 op: STARTLINE (58)

    /** io.e:1139		while sequence(y) with entry do*/
    // SubProg read_lines pc: 63 op: ELSE (23)
    goto L5; // [63] 162
    // SubProg read_lines pc: 65 op: NOPWHILE (158)
L6: // addr: 66 pc: 65 sub: 7626 op: 158
    // SubProg read_lines pc: 66 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 68 op: IS_A_SEQUENCE (68)
    _4162 = IS_SEQUENCE(_y_7631);
    // SubProg read_lines pc: 71 op: WHILE (47)
    if (_4162 == 0)
    {
        _4162 = NOVALUE;
        goto L7; // [71] 172
    }
    else{
        _4162 = NOVALUE;
    }
    // SubProg read_lines pc: 74 op: STARTLINE (58)

    /** io.e:1140			if y[$] = '\n' then*/
    // SubProg read_lines pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_y_7631)){
            _4163 = SEQ_PTR(_y_7631)->length;
    }
    else {
        _4163 = 1;
    }
    // SubProg read_lines pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_7631);
    _4164 = (object)*(((s1_ptr)_2)->base + _4163);
    // SubProg read_lines pc: 83 op: EQUALS_IFW (104)
    if (_4164 != 10)
    goto L8; // [83] 141
    // SubProg read_lines pc: 87 op: STARTLINE (58)

    /** io.e:1141				y = y[1..$-1]*/
    // SubProg read_lines pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_y_7631)){
            _4166 = SEQ_PTR(_y_7631)->length;
    }
    else {
        _4166 = 1;
    }
    // SubProg read_lines pc: 92 op: MINUS (10)
    _4167 = _4166 - 1;
    _4166 = NOVALUE;
    // SubProg read_lines pc: 96 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_7631;
    RHS_Slice(_y_7631, 1, _4167);
    // SubProg read_lines pc: 101 op: STARTLINE (58)

    /** io.e:1142				ifdef UNIX then*/
    // SubProg read_lines pc: 103 op: STARTLINE (58)

    /** io.e:1143					if length(y) then*/
    // SubProg read_lines pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_y_7631)){
            _4169 = SEQ_PTR(_y_7631)->length;
    }
    else {
        _4169 = 1;
    }
    // SubProg read_lines pc: 108 op: IF (20)
    if (_4169 == 0)
    {
        _4169 = NOVALUE;
        goto L9; // [108] 140
    }
    else{
        _4169 = NOVALUE;
    }
    // SubProg read_lines pc: 111 op: STARTLINE (58)

    /** io.e:1144						if y[$] = '\r' then*/
    // SubProg read_lines pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_y_7631)){
            _4170 = SEQ_PTR(_y_7631)->length;
    }
    else {
        _4170 = 1;
    }
    // SubProg read_lines pc: 116 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_7631);
    _4171 = (object)*(((s1_ptr)_2)->base + _4170);
    // SubProg read_lines pc: 120 op: EQUALS_IFW (104)
    if (_4171 != 13)
    goto LA; // [120] 139
    // SubProg read_lines pc: 124 op: STARTLINE (58)

    /** io.e:1145							y = y[1..$-1]*/
    // SubProg read_lines pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_y_7631)){
            _4173 = SEQ_PTR(_y_7631)->length;
    }
    else {
        _4173 = 1;
    }
    // SubProg read_lines pc: 129 op: MINUS (10)
    _4174 = _4173 - 1;
    _4173 = NOVALUE;
    // SubProg read_lines pc: 133 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_7631;
    RHS_Slice(_y_7631, 1, _4174);
    // SubProg read_lines pc: 138 op: NOP1 (159)
LA: // addr: 139 pc: 138 sub: 7626 op: 159
    // SubProg read_lines pc: 139 op: NOP1 (159)
L9: // addr: 140 pc: 139 sub: 7626 op: 159
    // SubProg read_lines pc: 140 op: NOP1 (159)
L8: // addr: 141 pc: 140 sub: 7626 op: 159
    // SubProg read_lines pc: 141 op: STARTLINE (58)

    /** io.e:1150			ret = append(ret, y)*/
    // SubProg read_lines pc: 143 op: APPEND (35)
    Ref(_y_7631);
    Append(&_ret_7630, _ret_7630, _y_7631);
    // SubProg read_lines pc: 147 op: STARTLINE (58)

    /** io.e:1151			if fn = 0 then*/
    // SubProg read_lines pc: 149 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fn_7629, 0)){
        goto LB; // [149] 159
    }
    // SubProg read_lines pc: 153 op: STARTLINE (58)

    /** io.e:1152				puts(2, '\n')*/
    // SubProg read_lines pc: 155 op: PUTS (44)
    EPuts(2, 10); // DJP 
    // SubProg read_lines pc: 158 op: NOP1 (159)
LB: // addr: 159 pc: 158 sub: 7626 op: 159
    // SubProg read_lines pc: 159 op: STARTLINE (58)

    /** io.e:1154		entry*/
    // SubProg read_lines pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 7626 op: 159
    // SubProg read_lines pc: 162 op: STARTLINE (58)

    /** io.e:1155			y = gets(fn)*/
    // SubProg read_lines pc: 164 op: GETS (17)
    DeRefi(_y_7631);
    _y_7631 = EGets(_fn_7629);
    // SubProg read_lines pc: 167 op: STARTLINE (58)

    /** io.e:1156		end while*/
    // SubProg read_lines pc: 169 op: ENDWHILE (22)
    goto L6; // [169] 66
    // SubProg read_lines pc: 171 op: NOP1 (159)
L7: // addr: 172 pc: 171 sub: 7626 op: 159
    // SubProg read_lines pc: 172 op: STARTLINE (58)

    /** io.e:1158		if sequence(file) and length(file) != 0 then*/
    // SubProg read_lines pc: 174 op: IS_A_SEQUENCE (68)
    _4179 = IS_SEQUENCE(_file_7628);
    // SubProg read_lines pc: 177 op: SC1_AND_IF (146)
    if (_4179 == 0) {
        goto LC; // [177] 197
    }
    // SubProg read_lines pc: 181 op: LENGTH (42)
    if (IS_SEQUENCE(_file_7628)){
            _4181 = SEQ_PTR(_file_7628)->length;
    }
    else {
        _4181 = 1;
    }
    // SubProg read_lines pc: 184 op: NOTEQ (4)
    _4182 = (_4181 != 0);
    _4181 = NOVALUE;
    // SubProg read_lines pc: 188 op: NOP1 (159)
    // SubProg read_lines pc: 189 op: IF (20)
    if (_4182 == 0)
    {
        DeRef(_4182);
        _4182 = NOVALUE;
        goto LC; // [189] 197
    }
    else{
        DeRef(_4182);
        _4182 = NOVALUE;
    }
    // SubProg read_lines pc: 192 op: STARTLINE (58)

    /** io.e:1159			close(fn)*/
    // SubProg read_lines pc: 194 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_7629))
    EClose(_fn_7629);
    else
    EClose((object)DBL_PTR(_fn_7629)->dbl);
    // SubProg read_lines pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 7626 op: 159
    // SubProg read_lines pc: 197 op: STARTLINE (58)

    /** io.e:1162		return ret*/
    // SubProg read_lines pc: 199 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_7628
    DeRef(_file_7628);

// block var fn_7629
    DeRef(_fn_7629);

// block var y_7631
    DeRefi(_y_7631);
    _4171 = NOVALUE;
    DeRef(_4167);
    _4167 = NOVALUE;
    DeRef(_4174);
    _4174 = NOVALUE;
    _4164 = NOVALUE;
    return _ret_7630;
    // SubProg read_lines pc: 203 op: BADRETURNF (43)
    ;
}


object _19write_lines(object _file_7723, object _lines_7724)
{
    object _fn_7725 = NOVALUE;
    object _4219 = NOVALUE; // 7738 4219
    object _4218 = NOVALUE; // 7736 4218
    object _4217 = NOVALUE; // 7735 4217
// skipping _4216  name type: 0
// skipping _4215  name type: 0
    object _4213 = NOVALUE; // 7727 4213
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_lines pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_lines pc: 3 op: STARTLINE (58)

    /** io.e:1285		if sequence(file) then*/
    // SubProg write_lines pc: 5 op: IS_A_SEQUENCE (68)
    _4213 = 1;
    // SubProg write_lines pc: 8 op: IF (20)
    if (_4213 == 0)
    {
        _4213 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _4213 = NOVALUE;
    }
    // SubProg write_lines pc: 11 op: STARTLINE (58)

    /** io.e:1286	    	fn = open(file, "w")*/
    // SubProg write_lines pc: 13 op: OPEN (37)
    DeRef(_fn_7725);
    _fn_7725 = EOpen(_file_7723, _4214, 0);
    // SubProg write_lines pc: 18 op: ELSE (23)
    goto L2; // [18] 27
    // SubProg write_lines pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 7721 op: 159
    // SubProg write_lines pc: 21 op: STARTLINE (58)

    /** io.e:1288			fn = file*/
    // SubProg write_lines pc: 23 op: ASSIGN (18)
    Ref(_file_7723);
    DeRef(_fn_7725);
    _fn_7725 = _file_7723;
    // SubProg write_lines pc: 26 op: NOP1 (159)
L2: // addr: 27 pc: 26 sub: 7721 op: 159
    // SubProg write_lines pc: 27 op: STARTLINE (58)

    /** io.e:1290		if fn < 0 then return -1 end if*/
    // SubProg write_lines pc: 29 op: PRIVATE_INIT_CHECK (30)
    // SubProg write_lines pc: 31 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_7725, 0)){
        goto L3; // [31] 40
    }
    // SubProg write_lines pc: 35 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_7723
    DeRef(_file_7723);

// block var lines_7724
    DeRefDS(_lines_7724);

// block var fn_7725
    DeRef(_fn_7725);
    return -1;
    // SubProg write_lines pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 7721 op: 159
    // SubProg write_lines pc: 40 op: STARTLINE (58)

    /** io.e:1292		for i = 1 to length(lines) do*/
    // SubProg write_lines pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_lines_7724)){
            _4217 = SEQ_PTR(_lines_7724)->length;
    }
    else {
        _4217 = 1;
    }
    // SubProg write_lines pc: 45 op: FOR_I (125)
    {
        object _i_7734;
        _i_7734 = 1;
L4: // addr: 52 pc: 45 sub: 7721 op: 125
        if (_i_7734 > _4217){
            goto L5; // [45] 73
        }
        // SubProg write_lines pc: 52 op: STARTLINE (58)

        /** io.e:1293			puts(fn, lines[i])*/
        // SubProg write_lines pc: 54 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_lines_7724);
        _4218 = (object)*(((s1_ptr)_2)->base + _i_7734);
        // SubProg write_lines pc: 58 op: PUTS (44)
        EPuts(_fn_7725, _4218); // DJP 
        _4218 = NOVALUE;
        // SubProg write_lines pc: 61 op: STARTLINE (58)

        /** io.e:1294			puts(fn, '\n')*/
        // SubProg write_lines pc: 63 op: PUTS (44)
        EPuts(_fn_7725, 10); // DJP 
        // SubProg write_lines pc: 66 op: STARTLINE (58)

        /** io.e:1295		end for*/
        // SubProg write_lines pc: 68 op: ENDFOR_INT_UP1 (54)
        _i_7734 = _i_7734 + 1;
        goto L4; // [68] 52
L5: // addr: 73 pc: 68 sub: 7721 op: 54
        ;
    }
    // SubProg write_lines pc: 73 op: STARTLINE (58)

    /** io.e:1297		if sequence(file) then*/
    // SubProg write_lines pc: 75 op: IS_A_SEQUENCE (68)
    _4219 = IS_SEQUENCE(_file_7723);
    // SubProg write_lines pc: 78 op: IF (20)
    if (_4219 == 0)
    {
        _4219 = NOVALUE;
        goto L6; // [78] 86
    }
    else{
        _4219 = NOVALUE;
    }
    // SubProg write_lines pc: 81 op: STARTLINE (58)

    /** io.e:1298			close(fn)*/
    // SubProg write_lines pc: 83 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_7725))
    EClose(_fn_7725);
    else
    EClose((object)DBL_PTR(_fn_7725)->dbl);
    // SubProg write_lines pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 7721 op: 159
    // SubProg write_lines pc: 86 op: STARTLINE (58)

    /** io.e:1301		return 1*/
    // SubProg write_lines pc: 88 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_7723
    DeRef(_file_7723);

// block var lines_7724
    DeRefDS(_lines_7724);

// block var fn_7725
    DeRef(_fn_7725);
    return 1;
    // SubProg write_lines pc: 92 op: BADRETURNF (43)
    ;
}


void _19writef(object _fm_7846, object _data_7847, object _fn_7848, object _data_not_string_7849)
{
    object _real_fn_7850 = NOVALUE;
    object _close_fn_7851 = NOVALUE;
    object _out_style_7852 = NOVALUE;
    object _ts_7855 = NOVALUE;
    object _msg_inlined_crash_at_163_7880 = NOVALUE;
    object _data_inlined_crash_at_160_7879 = NOVALUE;
    object _4286 = NOVALUE; // 7887 4286
// skipping _4285  name type: 0
    object _4284 = NOVALUE; // 7885 4284
    object _4283 = NOVALUE; // 7883 4283
    object _4282 = NOVALUE; // 7877 4282
// skipping _4280  name type: 0
// skipping _4279  name type: 0
// skipping _4278  name type: 0
// skipping _4277  name type: 0
    object _4276 = NOVALUE; // 7869 4276
    object _4275 = NOVALUE; // 7868 4275
    object _4274 = NOVALUE; // 7866 4274
    object _4273 = NOVALUE; // 7865 4273
    object _4272 = NOVALUE; // 7863 4272
    object _4271 = NOVALUE; // 7862 4271
// skipping _4270  name type: 0
    object _4269 = NOVALUE; // 7859 4269
    object _4268 = NOVALUE; // 7857 4268
    object _4267 = NOVALUE; // 7854 4267
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg writef pc: 1 op: STARTLINE (58)

    /** io.e:1608		integer real_fn = 0*/
    // SubProg writef pc: 3 op: ASSIGN_I (113)
    _real_fn_7850 = 0;
    // SubProg writef pc: 6 op: STARTLINE (58)

    /** io.e:1609		integer close_fn = 0*/
    // SubProg writef pc: 8 op: ASSIGN_I (113)
    _close_fn_7851 = 0;
    // SubProg writef pc: 11 op: STARTLINE (58)

    /** io.e:1610		sequence out_style = "w"*/
    // SubProg writef pc: 13 op: ASSIGN (18)
    RefDS(_4214);
    DeRefi(_out_style_7852);
    _out_style_7852 = _4214;
    // SubProg writef pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 18 op: STARTLINE (58)

    /** io.e:1612		if integer(fm) then*/
    // SubProg writef pc: 20 op: IS_AN_INTEGER (94)
    _4267 = 1;
    // SubProg writef pc: 23 op: IF (20)
    if (_4267 == 0)
    {
        _4267 = NOVALUE;
        goto L1; // [23] 49
    }
    else{
        _4267 = NOVALUE;
    }
    // SubProg writef pc: 26 op: STARTLINE (58)

    /** io.e:1613			object ts*/
    // SubProg writef pc: 28 op: STARTLINE (58)

    /** io.e:1615			ts = fm*/
    // SubProg writef pc: 30 op: ASSIGN (18)
    _ts_7855 = _fm_7846;
    // SubProg writef pc: 33 op: STARTLINE (58)

    /** io.e:1616			fm = data*/
    // SubProg writef pc: 35 op: ASSIGN (18)
    RefDS(_data_7847);
    _fm_7846 = _data_7847;
    // SubProg writef pc: 38 op: STARTLINE (58)

    /** io.e:1617			data = fn*/
    // SubProg writef pc: 40 op: ASSIGN (18)
    RefDS(_fn_7848);
    DeRefDS(_data_7847);
    _data_7847 = _fn_7848;
    // SubProg writef pc: 43 op: STARTLINE (58)

    /** io.e:1618			fn = ts*/
    // SubProg writef pc: 45 op: ASSIGN (18)
    DeRefDS(_fn_7848);
    _fn_7848 = _ts_7855;
    // SubProg writef pc: 48 op: NOP1 (159)
L1: // addr: 49 pc: 48 sub: 7844 op: 159
    // SubProg writef pc: 49 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ts_7855
    // SubProg writef pc: 51 op: STARTLINE (58)

    /** io.e:1621		if sequence(fn) then*/
    // SubProg writef pc: 53 op: IS_A_SEQUENCE (68)
    _4268 = IS_SEQUENCE(_fn_7848);
    // SubProg writef pc: 56 op: IF (20)
    if (_4268 == 0)
    {
        _4268 = NOVALUE;
        goto L2; // [56] 191
    }
    else{
        _4268 = NOVALUE;
    }
    // SubProg writef pc: 59 op: STARTLINE (58)

    /** io.e:1622			if length(fn) = 2 then*/
    // SubProg writef pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_fn_7848)){
            _4269 = SEQ_PTR(_fn_7848)->length;
    }
    else {
        _4269 = 1;
    }
    // SubProg writef pc: 64 op: EQUALS_IFW_I (121)
    if (_4269 != 2)
    goto L3; // [64] 142
    // SubProg writef pc: 68 op: STARTLINE (58)

    /** io.e:1623				if sequence(fn[1]) then*/
    // SubProg writef pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_7848);
    _4271 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg writef pc: 74 op: IS_A_SEQUENCE (68)
    _4272 = IS_SEQUENCE(_4271);
    _4271 = NOVALUE;
    // SubProg writef pc: 77 op: IF (20)
    if (_4272 == 0)
    {
        _4272 = NOVALUE;
        goto L4; // [77] 141
    }
    else{
        _4272 = NOVALUE;
    }
    // SubProg writef pc: 80 op: STARTLINE (58)

    /** io.e:1624					if equal(fn[2], 'a') then*/
    // SubProg writef pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_7848);
    _4273 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 86 op: EQUAL (153)
    if (_4273 == 97)
    _4274 = 1;
    else if (IS_ATOM_INT(_4273) && IS_ATOM_INT(97))
    _4274 = 0;
    else
    _4274 = (compare(_4273, 97) == 0);
    _4273 = NOVALUE;
    // SubProg writef pc: 90 op: IF (20)
    if (_4274 == 0)
    {
        _4274 = NOVALUE;
        goto L5; // [90] 103
    }
    else{
        _4274 = NOVALUE;
    }
    // SubProg writef pc: 93 op: STARTLINE (58)

    /** io.e:1625						out_style = "a"*/
    // SubProg writef pc: 95 op: ASSIGN (18)
    RefDS(_4220);
    DeRefi(_out_style_7852);
    _out_style_7852 = _4220;
    // SubProg writef pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 100 op: ELSE (23)
    goto L6; // [100] 134
    // SubProg writef pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 7844 op: 159
    // SubProg writef pc: 103 op: STARTLINE (58)

    /** io.e:1626					elsif not equal(fn[2], "a") then*/
    // SubProg writef pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_7848);
    _4275 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 109 op: EQUAL (153)
    if (_4275 == _4220)
    _4276 = 1;
    else if (IS_ATOM_INT(_4275) && IS_ATOM_INT(_4220))
    _4276 = 0;
    else
    _4276 = (compare(_4275, _4220) == 0);
    _4275 = NOVALUE;
    // SubProg writef pc: 113 op: NOT_IFW (108)
    if (_4276 != 0)
    goto L7; // [113] 126
    _4276 = NOVALUE;
    // SubProg writef pc: 116 op: STARTLINE (58)

    /** io.e:1627						out_style = "w"*/
    // SubProg writef pc: 118 op: ASSIGN (18)
    RefDS(_4214);
    DeRefi(_out_style_7852);
    _out_style_7852 = _4214;
    // SubProg writef pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 123 op: ELSE (23)
    goto L6; // [123] 134
    // SubProg writef pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 7844 op: 159
    // SubProg writef pc: 126 op: STARTLINE (58)

    /** io.e:1629						out_style = "a"*/
    // SubProg writef pc: 128 op: ASSIGN (18)
    RefDS(_4220);
    DeRefi(_out_style_7852);
    _out_style_7852 = _4220;
    // SubProg writef pc: 131 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 7844 op: 159
    // SubProg writef pc: 134 op: STARTLINE (58)

    /** io.e:1631					fn = fn[1]*/
    // SubProg writef pc: 136 op: RHS_SUBS_CHECK (92)
    _0 = _fn_7848;
    _2 = (object)SEQ_PTR(_fn_7848);
    _fn_7848 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_fn_7848);
    DeRef(_0);
    // SubProg writef pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 7844 op: 159
    // SubProg writef pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 7844 op: 159
    // SubProg writef pc: 142 op: STARTLINE (58)

    /** io.e:1634			real_fn = open(fn, out_style)*/
    // SubProg writef pc: 144 op: OPEN (37)
    _real_fn_7850 = EOpen(_fn_7848, _out_style_7852, 0);
    // SubProg writef pc: 149 op: STARTLINE (58)

    /** io.e:1636			if real_fn = -1 then*/
    // SubProg writef pc: 151 op: EQUALS_IFW_I (121)
    if (_real_fn_7850 != -1)
    goto L8; // [151] 183
    // SubProg writef pc: 155 op: STARTLINE (58)

    /** io.e:1637				error:crash("Unable to write to '%s'", {fn})*/
    // SubProg writef pc: 157 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_fn_7848);
    ((intptr_t*)_2)[1] = _fn_7848;
    _4282 = MAKE_SEQ(_1);
    // SubProg writef pc: 161 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_160_7879);
    _data_inlined_crash_at_160_7879 = _4282;
    _4282 = NOVALUE;
    // SubProg writef pc: 164 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg writef pc: 166 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_163_7880);
    _msg_inlined_crash_at_163_7880 = EPrintf(-9999999, _4281, _data_inlined_crash_at_160_7879);
    // SubProg writef pc: 170 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg writef pc: 172 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_163_7880);
    // SubProg writef pc: 175 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg writef pc: 177 op: ELSE (23)
    goto L9; // [177] 180
    // SubProg writef pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 7844 op: 159
    // SubProg writef pc: 180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from writef @ 160

// block var data_inlined_crash_at_160_7879
    DeRef(_data_inlined_crash_at_160_7879);
    _data_inlined_crash_at_160_7879 = NOVALUE;

// block var msg_inlined_crash_at_163_7880
    DeRefi(_msg_inlined_crash_at_163_7880);
    _msg_inlined_crash_at_163_7880 = NOVALUE;
    // SubProg writef pc: 182 op: NOP1 (159)
L8: // addr: 183 pc: 182 sub: 7844 op: 159
    // SubProg writef pc: 183 op: STARTLINE (58)

    /** io.e:1639			close_fn = 1*/
    // SubProg writef pc: 185 op: ASSIGN_I (113)
    _close_fn_7851 = 1;
    // SubProg writef pc: 188 op: ELSE (23)
    goto LA; // [188] 199
    // SubProg writef pc: 190 op: NOP1 (159)
L2: // addr: 191 pc: 190 sub: 7844 op: 159
    // SubProg writef pc: 191 op: STARTLINE (58)

    /** io.e:1641			real_fn = fn*/
    // SubProg writef pc: 193 op: ASSIGN (18)
    Ref(_fn_7848);
    _real_fn_7850 = _fn_7848;
    // SubProg writef pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_real_fn_7850)) {
        _1 = (object)(DBL_PTR(_real_fn_7850)->dbl);
        DeRefDS(_real_fn_7850);
        _real_fn_7850 = _1;
    }
    // SubProg writef pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 7844 op: 159
    // SubProg writef pc: 199 op: STARTLINE (58)

    /** io.e:1644		if equal(data_not_string, 0) then*/
    // SubProg writef pc: 201 op: EQUAL (153)
    if (_data_not_string_7849 == 0)
    _4283 = 1;
    else if (IS_ATOM_INT(_data_not_string_7849) && IS_ATOM_INT(0))
    _4283 = 0;
    else
    _4283 = (compare(_data_not_string_7849, 0) == 0);
    // SubProg writef pc: 205 op: IF (20)
    if (_4283 == 0)
    {
        _4283 = NOVALUE;
        goto LB; // [205] 225
    }
    else{
        _4283 = NOVALUE;
    }
    // SubProg writef pc: 208 op: STARTLINE (58)

    /** io.e:1645			if types:t_display(data) then*/
    // SubProg writef pc: 210 op: PROC (27)
    Ref(_data_7847);
    _4284 = _6t_display(_data_7847);
    // SubProg writef pc: 214 op: IF (20)
    if (_4284 == 0) {
        DeRef(_4284);
        _4284 = NOVALUE;
        goto LC; // [214] 224
    }
    else {
        if (!IS_ATOM_INT(_4284) && DBL_PTR(_4284)->dbl == 0.0){
            DeRef(_4284);
            _4284 = NOVALUE;
            goto LC; // [214] 224
        }
        DeRef(_4284);
        _4284 = NOVALUE;
    }
    DeRef(_4284);
    _4284 = NOVALUE;
    // SubProg writef pc: 217 op: STARTLINE (58)

    /** io.e:1646				data = {data}*/
    // SubProg writef pc: 219 op: RIGHT_BRACE_N (31)
    _0 = _data_7847;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_data_7847);
    ((intptr_t*)_2)[1] = _data_7847;
    _data_7847 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg writef pc: 223 op: NOP1 (159)
LC: // addr: 224 pc: 223 sub: 7844 op: 159
    // SubProg writef pc: 224 op: NOP1 (159)
LB: // addr: 225 pc: 224 sub: 7844 op: 159
    // SubProg writef pc: 225 op: STARTLINE (58)

    /** io.e:1649	    puts(real_fn, text:format( fm, data ) )*/
    // SubProg writef pc: 227 op: PROC (27)
    Ref(_fm_7846);
    Ref(_data_7847);
    _4286 = _20format(_fm_7846, _data_7847);
    // SubProg writef pc: 232 op: PUTS (44)
    EPuts(_real_fn_7850, _4286); // DJP 
    DeRef(_4286);
    _4286 = NOVALUE;
    // SubProg writef pc: 235 op: STARTLINE (58)

    /** io.e:1650	    if close_fn then*/
    // SubProg writef pc: 237 op: IF (20)
    if (_close_fn_7851 == 0)
    {
        goto LD; // [237] 245
    }
    else{
    }
    // SubProg writef pc: 240 op: STARTLINE (58)

    /** io.e:1651	    	close(real_fn)*/
    // SubProg writef pc: 242 op: CLOSE (86)
    EClose(_real_fn_7850);
    // SubProg writef pc: 244 op: NOP1 (159)
LD: // addr: 245 pc: 244 sub: 7844 op: 159
    // SubProg writef pc: 245 op: STARTLINE (58)

    /** io.e:1653	end procedure*/
    // SubProg writef pc: 247 op: RETURNP (29)

// Exiting block BLOCK: writef

// block var fm_7846
    DeRef(_fm_7846);

// block var data_7847
    DeRef(_data_7847);

// block var fn_7848
    DeRef(_fn_7848);

// block var data_not_string_7849

// block var real_fn_7850

// block var close_fn_7851

// block var out_style_7852
    DeRefi(_out_style_7852);
    return;
    // SubProg writef pc: 250 op: BADRETURNF (43)
    ;
}



// 0xB5A3517F
