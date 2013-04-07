// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _8get_integer32(object _fh_9914)
{
    object _c_9915 = NOVALUE;
    object _5566 = NOVALUE; // 9922 5566
// skipping _5565  name type: 0
// skipping _5564  name type: 0
// skipping _5563  name type: 0
// skipping _5562  name type: 0
// skipping _5561  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_integer32 pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_integer32 pc: 3 op: STARTLINE (58)

    /** io.e:525		c = getc(fh)*/
    // SubProg get_integer32 pc: 5 op: GETC (33)
    if (_fh_9914 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9914, EF_READ);
        last_r_file_no = _fh_9914;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9915 = getc((FILE*)xstdin);
        }
        else{
            _c_9915 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9915 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 8 op: STARTLINE (58)

    /** io.e:526		poke(mem0, c)*/
    // SubProg get_integer32 pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 12 op: POKE (128)
    if (IS_ATOM_INT(_8mem0_9904)){
        poke_addr = (uint8_t *)_8mem0_9904;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem0_9904)->dbl);
    }
    *poke_addr = (uint8_t)_c_9915;
    // SubProg get_integer32 pc: 15 op: STARTLINE (58)

    /** io.e:527		c = getc(fh)*/
    // SubProg get_integer32 pc: 17 op: GETC (33)
    if (_fh_9914 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9914, EF_READ);
        last_r_file_no = _fh_9914;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9915 = getc((FILE*)xstdin);
        }
        else{
            _c_9915 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9915 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 20 op: STARTLINE (58)

    /** io.e:528		poke(mem1, c)*/
    // SubProg get_integer32 pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 24 op: POKE (128)
    if (IS_ATOM_INT(_8mem1_9905)){
        poke_addr = (uint8_t *)_8mem1_9905;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem1_9905)->dbl);
    }
    *poke_addr = (uint8_t)_c_9915;
    // SubProg get_integer32 pc: 27 op: STARTLINE (58)

    /** io.e:529		c = getc(fh)*/
    // SubProg get_integer32 pc: 29 op: GETC (33)
    if (_fh_9914 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9914, EF_READ);
        last_r_file_no = _fh_9914;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9915 = getc((FILE*)xstdin);
        }
        else{
            _c_9915 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9915 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 32 op: STARTLINE (58)

    /** io.e:530		poke(mem2, c)*/
    // SubProg get_integer32 pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 36 op: POKE (128)
    if (IS_ATOM_INT(_8mem2_9906)){
        poke_addr = (uint8_t *)_8mem2_9906;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem2_9906)->dbl);
    }
    *poke_addr = (uint8_t)_c_9915;
    // SubProg get_integer32 pc: 39 op: STARTLINE (58)

    /** io.e:531		c = getc(fh)*/
    // SubProg get_integer32 pc: 41 op: GETC (33)
    if (_fh_9914 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9914, EF_READ);
        last_r_file_no = _fh_9914;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9915 = getc((FILE*)xstdin);
        }
        else{
            _c_9915 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9915 = getc(last_r_file_ptr);
    }
    // SubProg get_integer32 pc: 44 op: STARTLINE (58)

    /** io.e:532		if c = -1 then*/
    // SubProg get_integer32 pc: 46 op: EQUALS_IFW_I (121)
    if (_c_9915 != -1)
    goto L1; // [46] 57
    // SubProg get_integer32 pc: 50 op: STARTLINE (58)

    /** io.e:533			return -1*/
    // SubProg get_integer32 pc: 52 op: RETURNF (28)

// Exiting block BLOCK: get_integer32

// block var fh_9914

// block var c_9915
    return -1;
    // SubProg get_integer32 pc: 56 op: NOP1 (159)
L1: // addr: 57 pc: 56 sub: 9912 op: 159
    // SubProg get_integer32 pc: 57 op: STARTLINE (58)

    /** io.e:535		poke(mem3, c)*/
    // SubProg get_integer32 pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 61 op: POKE (128)
    if (IS_ATOM_INT(_8mem3_9907)){
        poke_addr = (uint8_t *)_8mem3_9907;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem3_9907)->dbl);
    }
    *poke_addr = (uint8_t)_c_9915;
    // SubProg get_integer32 pc: 64 op: STARTLINE (58)

    /** io.e:536		return peek4u(mem0)*/
    // SubProg get_integer32 pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer32 pc: 68 op: PEEK4U (140)
    if (IS_ATOM_INT(_8mem0_9904)) {
        _5566 = (object)*(uint32_t *)_8mem0_9904;
        if ((uintptr_t)_5566 > (uintptr_t)MAXINT){
            _5566 = NewDouble((eudouble)(uintptr_t)_5566);
        }
    }
    else {
        _5566 = (object)*(uint32_t *)(uintptr_t)(DBL_PTR(_8mem0_9904)->dbl);
        if ((uintptr_t)_5566 > (uintptr_t)MAXINT){
            _5566 = NewDouble((eudouble)(uintptr_t)_5566);
        }
    }
    // SubProg get_integer32 pc: 71 op: RETURNF (28)

// Exiting block BLOCK: get_integer32

// block var fh_9914

// block var c_9915
    return _5566;
    // SubProg get_integer32 pc: 75 op: BADRETURNF (43)
    ;
}


object _8get_integer16(object _fh_9925)
{
    object _c_9926 = NOVALUE;
    object _5570 = NOVALUE; // 9931 5570
// skipping _5569  name type: 0
// skipping _5568  name type: 0
// skipping _5567  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_integer16 pc: 1 op: INTEGER_CHECK (96)
    // SubProg get_integer16 pc: 3 op: STARTLINE (58)

    /** io.e:568		c = getc(fh)*/
    // SubProg get_integer16 pc: 5 op: GETC (33)
    if (_fh_9925 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9925, EF_READ);
        last_r_file_no = _fh_9925;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9926 = getc((FILE*)xstdin);
        }
        else{
            _c_9926 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9926 = getc(last_r_file_ptr);
    }
    // SubProg get_integer16 pc: 8 op: STARTLINE (58)

    /** io.e:569		poke(mem0, c)*/
    // SubProg get_integer16 pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 12 op: POKE (128)
    if (IS_ATOM_INT(_8mem0_9904)){
        poke_addr = (uint8_t *)_8mem0_9904;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem0_9904)->dbl);
    }
    *poke_addr = (uint8_t)_c_9926;
    // SubProg get_integer16 pc: 15 op: STARTLINE (58)

    /** io.e:570		c = getc(fh)*/
    // SubProg get_integer16 pc: 17 op: GETC (33)
    if (_fh_9925 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_9925, EF_READ);
        last_r_file_no = _fh_9925;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_9926 = getc((FILE*)xstdin);
        }
        else{
            _c_9926 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_9926 = getc(last_r_file_ptr);
    }
    // SubProg get_integer16 pc: 20 op: STARTLINE (58)

    /** io.e:571		if c = -1 then*/
    // SubProg get_integer16 pc: 22 op: EQUALS_IFW_I (121)
    if (_c_9926 != -1)
    goto L1; // [22] 33
    // SubProg get_integer16 pc: 26 op: STARTLINE (58)

    /** io.e:572			return -1*/
    // SubProg get_integer16 pc: 28 op: RETURNF (28)

// Exiting block BLOCK: get_integer16

// block var fh_9925

// block var c_9926
    return -1;
    // SubProg get_integer16 pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 9923 op: 159
    // SubProg get_integer16 pc: 33 op: STARTLINE (58)

    /** io.e:574		poke(mem1, c)*/
    // SubProg get_integer16 pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 37 op: POKE (128)
    if (IS_ATOM_INT(_8mem1_9905)){
        poke_addr = (uint8_t *)_8mem1_9905;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_8mem1_9905)->dbl);
    }
    *poke_addr = (uint8_t)_c_9926;
    // SubProg get_integer16 pc: 40 op: STARTLINE (58)

    /** io.e:575		return peek2u(mem0)*/
    // SubProg get_integer16 pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_integer16 pc: 44 op: PEEK2U (180)
    if (IS_ATOM_INT(_8mem0_9904)) {
        _5570 = *(uint16_t *)_8mem0_9904;
    }
    else {
        _5570 = *(uint16_t *)(uintptr_t)(DBL_PTR(_8mem0_9904)->dbl);
    }
    // SubProg get_integer16 pc: 47 op: RETURNF (28)

// Exiting block BLOCK: get_integer16

// block var fh_9925

// block var c_9926
    return _5570;
    // SubProg get_integer16 pc: 51 op: BADRETURNF (43)
    ;
}


object _8seek(object _fn_10021, object _pos_10022)
{
    object _5616 = NOVALUE; // 10024 5616
    object _5615 = NOVALUE; // 10023 5615
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg seek pc: 1 op: STARTLINE (58)

    /** io.e:907		return machine_func(M_SEEK, {fn, pos})*/
    // SubProg seek pc: 3 op: RIGHT_BRACE_2 (85)
    Ref(_pos_10022);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _fn_10021;
    ((intptr_t *)_2)[2] = _pos_10022;
    _5615 = MAKE_SEQ(_1);
    // SubProg seek pc: 7 op: MACHINE_FUNC (111)
    _5616 = machine(19, _5615);
    DeRefDS(_5615);
    _5615 = NOVALUE;
    // SubProg seek pc: 11 op: RETURNF (28)

// Exiting block BLOCK: seek

// block var fn_10021

// block var pos_10022
    DeRef(_pos_10022);
    return _5616;
    // SubProg seek pc: 15 op: BADRETURNF (43)
    ;
}


object _8where(object _fn_10027)
{
    object _5617 = NOVALUE; // 10028 5617
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg where pc: 1 op: STARTLINE (58)

    /** io.e:932		return machine_func(M_WHERE, fn)*/
    // SubProg where pc: 3 op: MACHINE_FUNC (111)
    _5617 = machine(20, _fn_10027);
    // SubProg where pc: 7 op: RETURNF (28)

// Exiting block BLOCK: where

// block var fn_10027
    return _5617;
    // SubProg where pc: 11 op: BADRETURNF (43)
    ;
}


object _8read_lines(object _file_10046)
{
    object _fn_10047 = NOVALUE;
    object _ret_10048 = NOVALUE;
    object _y_10049 = NOVALUE;
    object _5646 = NOVALUE; // 10086 5646
    object _5645 = NOVALUE; // 10085 5645
    object _5644 = NOVALUE; // 10084 5644
    object _5643 = NOVALUE; // 10083 5643
// skipping _5642  name type: 0
// skipping _5641  name type: 0
// skipping _5640  name type: 0
// skipping _5639  name type: 0
    object _5638 = NOVALUE; // 10076 5638
    object _5637 = NOVALUE; // 10075 5637
// skipping _5636  name type: 0
    object _5635 = NOVALUE; // 10073 5635
    object _5634 = NOVALUE; // 10072 5634
    object _5633 = NOVALUE; // 10070 5633
// skipping _5632  name type: 0
    object _5631 = NOVALUE; // 10067 5631
    object _5630 = NOVALUE; // 10066 5630
// skipping _5629  name type: 0
    object _5628 = NOVALUE; // 10064 5628
    object _5627 = NOVALUE; // 10063 5627
    object _5626 = NOVALUE; // 10061 5626
// skipping _5625  name type: 0
// skipping _5624  name type: 0
// skipping _5623  name type: 0
    object _5622 = NOVALUE; // 10053 5622
    object _5621 = NOVALUE; // 10051 5621
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_lines pc: 1 op: STARTLINE (58)

    /** io.e:1127		if sequence(file) then*/
    // SubProg read_lines pc: 3 op: IS_A_SEQUENCE (68)
    _5621 = 1;
    // SubProg read_lines pc: 6 op: IF (20)
    if (_5621 == 0)
    {
        _5621 = NOVALUE;
        goto L1; // [6] 37
    }
    else{
        _5621 = NOVALUE;
    }
    // SubProg read_lines pc: 9 op: STARTLINE (58)

    /** io.e:1128			if length(file) = 0 then*/
    // SubProg read_lines pc: 11 op: LENGTH (42)
    if (IS_SEQUENCE(_file_10046)){
            _5622 = SEQ_PTR(_file_10046)->length;
    }
    else {
        _5622 = 1;
    }
    // SubProg read_lines pc: 14 op: EQUALS_IFW_I (121)
    if (_5622 != 0)
    goto L2; // [14] 26
    // SubProg read_lines pc: 18 op: STARTLINE (58)

    /** io.e:1129				fn = 0*/
    // SubProg read_lines pc: 20 op: ASSIGN (18)
    DeRef(_fn_10047);
    _fn_10047 = 0;
    // SubProg read_lines pc: 23 op: ELSE (23)
    goto L3; // [23] 43
    // SubProg read_lines pc: 25 op: NOP1 (159)
L2: // addr: 26 pc: 25 sub: 10044 op: 159
    // SubProg read_lines pc: 26 op: STARTLINE (58)

    /** io.e:1131				fn = open(file, "r")*/
    // SubProg read_lines pc: 28 op: OPEN (37)
    DeRef(_fn_10047);
    _fn_10047 = EOpen(_file_10046, _3928, 0);
    // SubProg read_lines pc: 33 op: NOP1 (159)
    // SubProg read_lines pc: 34 op: ELSE (23)
    goto L3; // [34] 43
    // SubProg read_lines pc: 36 op: NOP1 (159)
L1: // addr: 37 pc: 36 sub: 10044 op: 159
    // SubProg read_lines pc: 37 op: STARTLINE (58)

    /** io.e:1134			fn = file*/
    // SubProg read_lines pc: 39 op: ASSIGN (18)
    Ref(_file_10046);
    DeRef(_fn_10047);
    _fn_10047 = _file_10046;
    // SubProg read_lines pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 10044 op: 159
    // SubProg read_lines pc: 43 op: STARTLINE (58)

    /** io.e:1136		if fn < 0 then return -1 end if*/
    // SubProg read_lines pc: 45 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 47 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_10047, 0)){
        goto L4; // [47] 56
    }
    // SubProg read_lines pc: 51 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_10046
    DeRef(_file_10046);

// block var fn_10047
    DeRef(_fn_10047);

// block var ret_10048
    DeRef(_ret_10048);

// block var y_10049
    DeRefi(_y_10049);
    return -1;
    // SubProg read_lines pc: 55 op: NOP1 (159)
L4: // addr: 56 pc: 55 sub: 10044 op: 159
    // SubProg read_lines pc: 56 op: STARTLINE (58)

    /** io.e:1138		ret = {}*/
    // SubProg read_lines pc: 58 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_ret_10048);
    _ret_10048 = _5;
    // SubProg read_lines pc: 61 op: STARTLINE (58)

    /** io.e:1139		while sequence(y) with entry do*/
    // SubProg read_lines pc: 63 op: ELSE (23)
    goto L5; // [63] 162
    // SubProg read_lines pc: 65 op: NOPWHILE (158)
L6: // addr: 66 pc: 65 sub: 10044 op: 158
    // SubProg read_lines pc: 66 op: PRIVATE_INIT_CHECK (30)
    // SubProg read_lines pc: 68 op: IS_A_SEQUENCE (68)
    _5626 = IS_SEQUENCE(_y_10049);
    // SubProg read_lines pc: 71 op: WHILE (47)
    if (_5626 == 0)
    {
        _5626 = NOVALUE;
        goto L7; // [71] 172
    }
    else{
        _5626 = NOVALUE;
    }
    // SubProg read_lines pc: 74 op: STARTLINE (58)

    /** io.e:1140			if y[$] = '\n' then*/
    // SubProg read_lines pc: 76 op: LENGTH (42)
    if (IS_SEQUENCE(_y_10049)){
            _5627 = SEQ_PTR(_y_10049)->length;
    }
    else {
        _5627 = 1;
    }
    // SubProg read_lines pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_10049);
    _5628 = (object)*(((s1_ptr)_2)->base + _5627);
    // SubProg read_lines pc: 83 op: EQUALS_IFW (104)
    if (_5628 != 10)
    goto L8; // [83] 141
    // SubProg read_lines pc: 87 op: STARTLINE (58)

    /** io.e:1141				y = y[1..$-1]*/
    // SubProg read_lines pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_y_10049)){
            _5630 = SEQ_PTR(_y_10049)->length;
    }
    else {
        _5630 = 1;
    }
    // SubProg read_lines pc: 92 op: MINUS (10)
    _5631 = _5630 - 1;
    _5630 = NOVALUE;
    // SubProg read_lines pc: 96 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_10049;
    RHS_Slice(_y_10049, 1, _5631);
    // SubProg read_lines pc: 101 op: STARTLINE (58)

    /** io.e:1142				ifdef UNIX then*/
    // SubProg read_lines pc: 103 op: STARTLINE (58)

    /** io.e:1143					if length(y) then*/
    // SubProg read_lines pc: 105 op: LENGTH (42)
    if (IS_SEQUENCE(_y_10049)){
            _5633 = SEQ_PTR(_y_10049)->length;
    }
    else {
        _5633 = 1;
    }
    // SubProg read_lines pc: 108 op: IF (20)
    if (_5633 == 0)
    {
        _5633 = NOVALUE;
        goto L9; // [108] 140
    }
    else{
        _5633 = NOVALUE;
    }
    // SubProg read_lines pc: 111 op: STARTLINE (58)

    /** io.e:1144						if y[$] = '\r' then*/
    // SubProg read_lines pc: 113 op: LENGTH (42)
    if (IS_SEQUENCE(_y_10049)){
            _5634 = SEQ_PTR(_y_10049)->length;
    }
    else {
        _5634 = 1;
    }
    // SubProg read_lines pc: 116 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_y_10049);
    _5635 = (object)*(((s1_ptr)_2)->base + _5634);
    // SubProg read_lines pc: 120 op: EQUALS_IFW (104)
    if (_5635 != 13)
    goto LA; // [120] 139
    // SubProg read_lines pc: 124 op: STARTLINE (58)

    /** io.e:1145							y = y[1..$-1]*/
    // SubProg read_lines pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_y_10049)){
            _5637 = SEQ_PTR(_y_10049)->length;
    }
    else {
        _5637 = 1;
    }
    // SubProg read_lines pc: 129 op: MINUS (10)
    _5638 = _5637 - 1;
    _5637 = NOVALUE;
    // SubProg read_lines pc: 133 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_y_10049;
    RHS_Slice(_y_10049, 1, _5638);
    // SubProg read_lines pc: 138 op: NOP1 (159)
LA: // addr: 139 pc: 138 sub: 10044 op: 159
    // SubProg read_lines pc: 139 op: NOP1 (159)
L9: // addr: 140 pc: 139 sub: 10044 op: 159
    // SubProg read_lines pc: 140 op: NOP1 (159)
L8: // addr: 141 pc: 140 sub: 10044 op: 159
    // SubProg read_lines pc: 141 op: STARTLINE (58)

    /** io.e:1150			ret = append(ret, y)*/
    // SubProg read_lines pc: 143 op: APPEND (35)
    Ref(_y_10049);
    Append(&_ret_10048, _ret_10048, _y_10049);
    // SubProg read_lines pc: 147 op: STARTLINE (58)

    /** io.e:1151			if fn = 0 then*/
    // SubProg read_lines pc: 149 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fn_10047, 0)){
        goto LB; // [149] 159
    }
    // SubProg read_lines pc: 153 op: STARTLINE (58)

    /** io.e:1152				puts(2, '\n')*/
    // SubProg read_lines pc: 155 op: PUTS (44)
    EPuts(2, 10); // DJP 
    // SubProg read_lines pc: 158 op: NOP1 (159)
LB: // addr: 159 pc: 158 sub: 10044 op: 159
    // SubProg read_lines pc: 159 op: STARTLINE (58)

    /** io.e:1154		entry*/
    // SubProg read_lines pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 10044 op: 159
    // SubProg read_lines pc: 162 op: STARTLINE (58)

    /** io.e:1155			y = gets(fn)*/
    // SubProg read_lines pc: 164 op: GETS (17)
    DeRefi(_y_10049);
    _y_10049 = EGets(_fn_10047);
    // SubProg read_lines pc: 167 op: STARTLINE (58)

    /** io.e:1156		end while*/
    // SubProg read_lines pc: 169 op: ENDWHILE (22)
    goto L6; // [169] 66
    // SubProg read_lines pc: 171 op: NOP1 (159)
L7: // addr: 172 pc: 171 sub: 10044 op: 159
    // SubProg read_lines pc: 172 op: STARTLINE (58)

    /** io.e:1158		if sequence(file) and length(file) != 0 then*/
    // SubProg read_lines pc: 174 op: IS_A_SEQUENCE (68)
    _5643 = IS_SEQUENCE(_file_10046);
    // SubProg read_lines pc: 177 op: SC1_AND_IF (146)
    if (_5643 == 0) {
        goto LC; // [177] 197
    }
    // SubProg read_lines pc: 181 op: LENGTH (42)
    if (IS_SEQUENCE(_file_10046)){
            _5645 = SEQ_PTR(_file_10046)->length;
    }
    else {
        _5645 = 1;
    }
    // SubProg read_lines pc: 184 op: NOTEQ (4)
    _5646 = (_5645 != 0);
    _5645 = NOVALUE;
    // SubProg read_lines pc: 188 op: NOP1 (159)
    // SubProg read_lines pc: 189 op: IF (20)
    if (_5646 == 0)
    {
        DeRef(_5646);
        _5646 = NOVALUE;
        goto LC; // [189] 197
    }
    else{
        DeRef(_5646);
        _5646 = NOVALUE;
    }
    // SubProg read_lines pc: 192 op: STARTLINE (58)

    /** io.e:1159			close(fn)*/
    // SubProg read_lines pc: 194 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_10047))
    EClose(_fn_10047);
    else
    EClose((object)DBL_PTR(_fn_10047)->dbl);
    // SubProg read_lines pc: 196 op: NOP1 (159)
LC: // addr: 197 pc: 196 sub: 10044 op: 159
    // SubProg read_lines pc: 197 op: STARTLINE (58)

    /** io.e:1162		return ret*/
    // SubProg read_lines pc: 199 op: RETURNF (28)

// Exiting block BLOCK: read_lines

// block var file_10046
    DeRef(_file_10046);

// block var fn_10047
    DeRef(_fn_10047);

// block var y_10049
    DeRefi(_y_10049);
    DeRef(_5631);
    _5631 = NOVALUE;
    _5635 = NOVALUE;
    DeRef(_5638);
    _5638 = NOVALUE;
    _5628 = NOVALUE;
    return _ret_10048;
    // SubProg read_lines pc: 203 op: BADRETURNF (43)
    ;
}


object _8write_lines(object _file_10140, object _lines_10141)
{
    object _fn_10142 = NOVALUE;
    object _5683 = NOVALUE; // 10155 5683
    object _5682 = NOVALUE; // 10153 5682
    object _5681 = NOVALUE; // 10152 5681
// skipping _5680  name type: 0
// skipping _5679  name type: 0
    object _5677 = NOVALUE; // 10144 5677
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_lines pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_lines pc: 3 op: STARTLINE (58)

    /** io.e:1285		if sequence(file) then*/
    // SubProg write_lines pc: 5 op: IS_A_SEQUENCE (68)
    _5677 = 1;
    // SubProg write_lines pc: 8 op: IF (20)
    if (_5677 == 0)
    {
        _5677 = NOVALUE;
        goto L1; // [8] 21
    }
    else{
        _5677 = NOVALUE;
    }
    // SubProg write_lines pc: 11 op: STARTLINE (58)

    /** io.e:1286	    	fn = open(file, "w")*/
    // SubProg write_lines pc: 13 op: OPEN (37)
    DeRef(_fn_10142);
    _fn_10142 = EOpen(_file_10140, _5678, 0);
    // SubProg write_lines pc: 18 op: ELSE (23)
    goto L2; // [18] 27
    // SubProg write_lines pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 10138 op: 159
    // SubProg write_lines pc: 21 op: STARTLINE (58)

    /** io.e:1288			fn = file*/
    // SubProg write_lines pc: 23 op: ASSIGN (18)
    Ref(_file_10140);
    DeRef(_fn_10142);
    _fn_10142 = _file_10140;
    // SubProg write_lines pc: 26 op: NOP1 (159)
L2: // addr: 27 pc: 26 sub: 10138 op: 159
    // SubProg write_lines pc: 27 op: STARTLINE (58)

    /** io.e:1290		if fn < 0 then return -1 end if*/
    // SubProg write_lines pc: 29 op: PRIVATE_INIT_CHECK (30)
    // SubProg write_lines pc: 31 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _fn_10142, 0)){
        goto L3; // [31] 40
    }
    // SubProg write_lines pc: 35 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_10140
    DeRef(_file_10140);

// block var lines_10141
    DeRefDS(_lines_10141);

// block var fn_10142
    DeRef(_fn_10142);
    return -1;
    // SubProg write_lines pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 10138 op: 159
    // SubProg write_lines pc: 40 op: STARTLINE (58)

    /** io.e:1292		for i = 1 to length(lines) do*/
    // SubProg write_lines pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_lines_10141)){
            _5681 = SEQ_PTR(_lines_10141)->length;
    }
    else {
        _5681 = 1;
    }
    // SubProg write_lines pc: 45 op: FOR_I (125)
    {
        object _i_10151;
        _i_10151 = 1;
L4: // addr: 52 pc: 45 sub: 10138 op: 125
        if (_i_10151 > _5681){
            goto L5; // [45] 73
        }
        // SubProg write_lines pc: 52 op: STARTLINE (58)

        /** io.e:1293			puts(fn, lines[i])*/
        // SubProg write_lines pc: 54 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_lines_10141);
        _5682 = (object)*(((s1_ptr)_2)->base + _i_10151);
        // SubProg write_lines pc: 58 op: PUTS (44)
        EPuts(_fn_10142, _5682); // DJP 
        _5682 = NOVALUE;
        // SubProg write_lines pc: 61 op: STARTLINE (58)

        /** io.e:1294			puts(fn, '\n')*/
        // SubProg write_lines pc: 63 op: PUTS (44)
        EPuts(_fn_10142, 10); // DJP 
        // SubProg write_lines pc: 66 op: STARTLINE (58)

        /** io.e:1295		end for*/
        // SubProg write_lines pc: 68 op: ENDFOR_INT_UP1 (54)
        _i_10151 = _i_10151 + 1;
        goto L4; // [68] 52
L5: // addr: 73 pc: 68 sub: 10138 op: 54
        ;
    }
    // SubProg write_lines pc: 73 op: STARTLINE (58)

    /** io.e:1297		if sequence(file) then*/
    // SubProg write_lines pc: 75 op: IS_A_SEQUENCE (68)
    _5683 = IS_SEQUENCE(_file_10140);
    // SubProg write_lines pc: 78 op: IF (20)
    if (_5683 == 0)
    {
        _5683 = NOVALUE;
        goto L6; // [78] 86
    }
    else{
        _5683 = NOVALUE;
    }
    // SubProg write_lines pc: 81 op: STARTLINE (58)

    /** io.e:1298			close(fn)*/
    // SubProg write_lines pc: 83 op: CLOSE (86)
    if (IS_ATOM_INT(_fn_10142))
    EClose(_fn_10142);
    else
    EClose((object)DBL_PTR(_fn_10142)->dbl);
    // SubProg write_lines pc: 85 op: NOP1 (159)
L6: // addr: 86 pc: 85 sub: 10138 op: 159
    // SubProg write_lines pc: 86 op: STARTLINE (58)

    /** io.e:1301		return 1*/
    // SubProg write_lines pc: 88 op: RETURNF (28)

// Exiting block BLOCK: write_lines

// block var file_10140
    DeRef(_file_10140);

// block var lines_10141
    DeRefDS(_lines_10141);

// block var fn_10142
    DeRef(_fn_10142);
    return 1;
    // SubProg write_lines pc: 92 op: BADRETURNF (43)
    ;
}


object _8write_file(object _file_10219, object _data_10220, object _as_text_10221)
{
    object _fn_10222 = NOVALUE;
    object _5729 = NOVALUE; // 10259 5729
// skipping _5728  name type: 0
// skipping _5727  name type: 0
// skipping _5726  name type: 0
// skipping _5725  name type: 0
    object _5724 = NOVALUE; // 10249 5724
// skipping _5723  name type: 0
// skipping _5722  name type: 0
// skipping _5721  name type: 0
// skipping _5720  name type: 0
// skipping _5719  name type: 0
// skipping _5718  name type: 0
// skipping _5717  name type: 0
// skipping _5716  name type: 0
// skipping _5715  name type: 0
// skipping _5714  name type: 0
// skipping _5713  name type: 0
// skipping _5712  name type: 0
// skipping _5711  name type: 0
// skipping _5710  name type: 0
// skipping _5709  name type: 0
// skipping _5708  name type: 0
// skipping _5707  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg write_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg write_file pc: 3 op: INTEGER_CHECK (96)
    // SubProg write_file pc: 5 op: STARTLINE (58)

    /** io.e:1496		if as_text != BINARY_MODE then*/
    // SubProg write_file pc: 7 op: NOTEQ_IFW_I (122)
    // SubProg write_file pc: 146 op: STARTLINE (58)

    /** io.e:1525		if sequence(file) then*/
    // SubProg write_file pc: 148 op: IS_A_SEQUENCE (68)
    _5724 = 1;
    // SubProg write_file pc: 151 op: IF (20)
    if (_5724 == 0)
    {
        _5724 = NOVALUE;
        goto L1; // [151] 181
    }
    else{
        _5724 = NOVALUE;
    }
    // SubProg write_file pc: 154 op: STARTLINE (58)

    /** io.e:1526			if as_text = TEXT_MODE then*/
    // SubProg write_file pc: 156 op: EQUALS_IFW_I (121)
    // SubProg write_file pc: 170 op: STARTLINE (58)

    /** io.e:1529				fn = open(file, "wb")*/
    // SubProg write_file pc: 172 op: OPEN (37)
    _fn_10222 = EOpen(_file_10219, _3317, 0);
    // SubProg write_file pc: 177 op: NOP1 (159)
    // SubProg write_file pc: 178 op: ELSE (23)
    goto L2; // [178] 189
    // SubProg write_file pc: 180 op: NOP1 (159)
L1: // addr: 181 pc: 180 sub: 10217 op: 159
    // SubProg write_file pc: 181 op: STARTLINE (58)

    /** io.e:1532			fn = file*/
    // SubProg write_file pc: 183 op: ASSIGN (18)
    Ref(_file_10219);
    _fn_10222 = _file_10219;
    // SubProg write_file pc: 186 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fn_10222)) {
        _1 = (object)(DBL_PTR(_fn_10222)->dbl);
        DeRefDS(_fn_10222);
        _fn_10222 = _1;
    }
    // SubProg write_file pc: 188 op: NOP1 (159)
L2: // addr: 189 pc: 188 sub: 10217 op: 159
    // SubProg write_file pc: 189 op: STARTLINE (58)

    /** io.e:1534		if fn < 0 then return -1 end if*/
    // SubProg write_file pc: 191 op: PRIVATE_INIT_CHECK (30)
    // SubProg write_file pc: 193 op: LESS_IFW_I (119)
    if (_fn_10222 >= 0)
    goto L3; // [193] 202
    // SubProg write_file pc: 197 op: RETURNF (28)

// Exiting block BLOCK: write_file

// block var file_10219
    DeRefi(_file_10219);

// block var data_10220
    DeRefDS(_data_10220);

// block var as_text_10221

// block var fn_10222
    return -1;
    // SubProg write_file pc: 201 op: NOP1 (159)
L3: // addr: 202 pc: 201 sub: 10217 op: 159
    // SubProg write_file pc: 202 op: STARTLINE (58)

    /** io.e:1536		puts(fn, data)*/
    // SubProg write_file pc: 204 op: PUTS (44)
    EPuts(_fn_10222, _data_10220); // DJP 
    // SubProg write_file pc: 207 op: STARTLINE (58)

    /** io.e:1538		if sequence(file) then*/
    // SubProg write_file pc: 209 op: IS_A_SEQUENCE (68)
    _5729 = IS_SEQUENCE(_file_10219);
    // SubProg write_file pc: 212 op: IF (20)
    if (_5729 == 0)
    {
        _5729 = NOVALUE;
        goto L4; // [212] 220
    }
    else{
        _5729 = NOVALUE;
    }
    // SubProg write_file pc: 215 op: STARTLINE (58)

    /** io.e:1539			close(fn)*/
    // SubProg write_file pc: 217 op: CLOSE (86)
    EClose(_fn_10222);
    // SubProg write_file pc: 219 op: NOP1 (159)
L4: // addr: 220 pc: 219 sub: 10217 op: 159
    // SubProg write_file pc: 220 op: STARTLINE (58)

    /** io.e:1542		return 1*/
    // SubProg write_file pc: 222 op: RETURNF (28)

// Exiting block BLOCK: write_file

// block var file_10219
    DeRefi(_file_10219);

// block var data_10220
    DeRefDS(_data_10220);

// block var as_text_10221

// block var fn_10222
    return 1;
    // SubProg write_file pc: 226 op: BADRETURNF (43)
    ;
}


void _8writef(object _fm_10262, object _data_10263, object _fn_10264, object _data_not_string_10265)
{
    object _real_fn_10266 = NOVALUE;
    object _close_fn_10267 = NOVALUE;
    object _out_style_10268 = NOVALUE;
    object _ts_10271 = NOVALUE;
    object _msg_inlined_crash_at_163_10296 = NOVALUE;
    object _data_inlined_crash_at_160_10295 = NOVALUE;
    object _5749 = NOVALUE; // 10303 5749
// skipping _5748  name type: 0
    object _5747 = NOVALUE; // 10301 5747
    object _5746 = NOVALUE; // 10299 5746
    object _5745 = NOVALUE; // 10293 5745
// skipping _5743  name type: 0
// skipping _5742  name type: 0
// skipping _5741  name type: 0
// skipping _5740  name type: 0
    object _5739 = NOVALUE; // 10285 5739
    object _5738 = NOVALUE; // 10284 5738
    object _5737 = NOVALUE; // 10282 5737
    object _5736 = NOVALUE; // 10281 5736
    object _5735 = NOVALUE; // 10279 5735
    object _5734 = NOVALUE; // 10278 5734
// skipping _5733  name type: 0
    object _5732 = NOVALUE; // 10275 5732
    object _5731 = NOVALUE; // 10273 5731
    object _5730 = NOVALUE; // 10270 5730
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg writef pc: 1 op: STARTLINE (58)

    /** io.e:1608		integer real_fn = 0*/
    // SubProg writef pc: 3 op: ASSIGN_I (113)
    _real_fn_10266 = 0;
    // SubProg writef pc: 6 op: STARTLINE (58)

    /** io.e:1609		integer close_fn = 0*/
    // SubProg writef pc: 8 op: ASSIGN_I (113)
    _close_fn_10267 = 0;
    // SubProg writef pc: 11 op: STARTLINE (58)

    /** io.e:1610		sequence out_style = "w"*/
    // SubProg writef pc: 13 op: ASSIGN (18)
    RefDS(_5678);
    DeRefi(_out_style_10268);
    _out_style_10268 = _5678;
    // SubProg writef pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 18 op: STARTLINE (58)

    /** io.e:1612		if integer(fm) then*/
    // SubProg writef pc: 20 op: IS_AN_INTEGER (94)
    _5730 = 1;
    // SubProg writef pc: 23 op: IF (20)
    if (_5730 == 0)
    {
        _5730 = NOVALUE;
        goto L1; // [23] 49
    }
    else{
        _5730 = NOVALUE;
    }
    // SubProg writef pc: 26 op: STARTLINE (58)

    /** io.e:1613			object ts*/
    // SubProg writef pc: 28 op: STARTLINE (58)

    /** io.e:1615			ts = fm*/
    // SubProg writef pc: 30 op: ASSIGN (18)
    _ts_10271 = _fm_10262;
    // SubProg writef pc: 33 op: STARTLINE (58)

    /** io.e:1616			fm = data*/
    // SubProg writef pc: 35 op: ASSIGN (18)
    RefDS(_data_10263);
    _fm_10262 = _data_10263;
    // SubProg writef pc: 38 op: STARTLINE (58)

    /** io.e:1617			data = fn*/
    // SubProg writef pc: 40 op: ASSIGN (18)
    RefDS(_fn_10264);
    DeRefDS(_data_10263);
    _data_10263 = _fn_10264;
    // SubProg writef pc: 43 op: STARTLINE (58)

    /** io.e:1618			fn = ts*/
    // SubProg writef pc: 45 op: ASSIGN (18)
    DeRefDS(_fn_10264);
    _fn_10264 = _ts_10271;
    // SubProg writef pc: 48 op: NOP1 (159)
L1: // addr: 49 pc: 48 sub: 10260 op: 159
    // SubProg writef pc: 49 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ts_10271
    // SubProg writef pc: 51 op: STARTLINE (58)

    /** io.e:1621		if sequence(fn) then*/
    // SubProg writef pc: 53 op: IS_A_SEQUENCE (68)
    _5731 = IS_SEQUENCE(_fn_10264);
    // SubProg writef pc: 56 op: IF (20)
    if (_5731 == 0)
    {
        _5731 = NOVALUE;
        goto L2; // [56] 191
    }
    else{
        _5731 = NOVALUE;
    }
    // SubProg writef pc: 59 op: STARTLINE (58)

    /** io.e:1622			if length(fn) = 2 then*/
    // SubProg writef pc: 61 op: LENGTH (42)
    if (IS_SEQUENCE(_fn_10264)){
            _5732 = SEQ_PTR(_fn_10264)->length;
    }
    else {
        _5732 = 1;
    }
    // SubProg writef pc: 64 op: EQUALS_IFW_I (121)
    if (_5732 != 2)
    goto L3; // [64] 142
    // SubProg writef pc: 68 op: STARTLINE (58)

    /** io.e:1623				if sequence(fn[1]) then*/
    // SubProg writef pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_10264);
    _5734 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg writef pc: 74 op: IS_A_SEQUENCE (68)
    _5735 = IS_SEQUENCE(_5734);
    _5734 = NOVALUE;
    // SubProg writef pc: 77 op: IF (20)
    if (_5735 == 0)
    {
        _5735 = NOVALUE;
        goto L4; // [77] 141
    }
    else{
        _5735 = NOVALUE;
    }
    // SubProg writef pc: 80 op: STARTLINE (58)

    /** io.e:1624					if equal(fn[2], 'a') then*/
    // SubProg writef pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_10264);
    _5736 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 86 op: EQUAL (153)
    if (_5736 == 97)
    _5737 = 1;
    else if (IS_ATOM_INT(_5736) && IS_ATOM_INT(97))
    _5737 = 0;
    else
    _5737 = (compare(_5736, 97) == 0);
    _5736 = NOVALUE;
    // SubProg writef pc: 90 op: IF (20)
    if (_5737 == 0)
    {
        _5737 = NOVALUE;
        goto L5; // [90] 103
    }
    else{
        _5737 = NOVALUE;
    }
    // SubProg writef pc: 93 op: STARTLINE (58)

    /** io.e:1625						out_style = "a"*/
    // SubProg writef pc: 95 op: ASSIGN (18)
    RefDS(_5684);
    DeRefi(_out_style_10268);
    _out_style_10268 = _5684;
    // SubProg writef pc: 98 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 100 op: ELSE (23)
    goto L6; // [100] 134
    // SubProg writef pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 10260 op: 159
    // SubProg writef pc: 103 op: STARTLINE (58)

    /** io.e:1626					elsif not equal(fn[2], "a") then*/
    // SubProg writef pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_fn_10264);
    _5738 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg writef pc: 109 op: EQUAL (153)
    if (_5738 == _5684)
    _5739 = 1;
    else if (IS_ATOM_INT(_5738) && IS_ATOM_INT(_5684))
    _5739 = 0;
    else
    _5739 = (compare(_5738, _5684) == 0);
    _5738 = NOVALUE;
    // SubProg writef pc: 113 op: NOT_IFW (108)
    if (_5739 != 0)
    goto L7; // [113] 126
    _5739 = NOVALUE;
    // SubProg writef pc: 116 op: STARTLINE (58)

    /** io.e:1627						out_style = "w"*/
    // SubProg writef pc: 118 op: ASSIGN (18)
    RefDS(_5678);
    DeRefi(_out_style_10268);
    _out_style_10268 = _5678;
    // SubProg writef pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 123 op: ELSE (23)
    goto L6; // [123] 134
    // SubProg writef pc: 125 op: NOP1 (159)
L7: // addr: 126 pc: 125 sub: 10260 op: 159
    // SubProg writef pc: 126 op: STARTLINE (58)

    /** io.e:1629						out_style = "a"*/
    // SubProg writef pc: 128 op: ASSIGN (18)
    RefDS(_5684);
    DeRefi(_out_style_10268);
    _out_style_10268 = _5684;
    // SubProg writef pc: 131 op: SEQUENCE_CHECK (97)
    // SubProg writef pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 10260 op: 159
    // SubProg writef pc: 134 op: STARTLINE (58)

    /** io.e:1631					fn = fn[1]*/
    // SubProg writef pc: 136 op: RHS_SUBS_CHECK (92)
    _0 = _fn_10264;
    _2 = (object)SEQ_PTR(_fn_10264);
    _fn_10264 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_fn_10264);
    DeRef(_0);
    // SubProg writef pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 10260 op: 159
    // SubProg writef pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 10260 op: 159
    // SubProg writef pc: 142 op: STARTLINE (58)

    /** io.e:1634			real_fn = open(fn, out_style)*/
    // SubProg writef pc: 144 op: OPEN (37)
    _real_fn_10266 = EOpen(_fn_10264, _out_style_10268, 0);
    // SubProg writef pc: 149 op: STARTLINE (58)

    /** io.e:1636			if real_fn = -1 then*/
    // SubProg writef pc: 151 op: EQUALS_IFW_I (121)
    if (_real_fn_10266 != -1)
    goto L8; // [151] 183
    // SubProg writef pc: 155 op: STARTLINE (58)

    /** io.e:1637				error:crash("Unable to write to '%s'", {fn})*/
    // SubProg writef pc: 157 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_fn_10264);
    ((intptr_t*)_2)[1] = _fn_10264;
    _5745 = MAKE_SEQ(_1);
    // SubProg writef pc: 161 op: ASSIGN (18)
    DeRef(_data_inlined_crash_at_160_10295);
    _data_inlined_crash_at_160_10295 = _5745;
    _5745 = NOVALUE;
    // SubProg writef pc: 164 op: STARTLINE (58)

    /** error.e:51		msg = sprintf(fmt, data)*/
    // SubProg writef pc: 166 op: SPRINTF (53)
    DeRefi(_msg_inlined_crash_at_163_10296);
    _msg_inlined_crash_at_163_10296 = EPrintf(-9999999, _5744, _data_inlined_crash_at_160_10295);
    // SubProg writef pc: 170 op: STARTLINE (58)

    /** error.e:52		machine_proc(M_CRASH, msg)*/
    // SubProg writef pc: 172 op: MACHINE_PROC (112)
    machine(67, _msg_inlined_crash_at_163_10296);
    // SubProg writef pc: 175 op: STARTLINE (58)

    /** error.e:53	end procedure*/
    // SubProg writef pc: 177 op: ELSE (23)
    goto L9; // [177] 180
    // SubProg writef pc: 179 op: NOP1 (159)
L9: // addr: 180 pc: 179 sub: 10260 op: 159
    // SubProg writef pc: 180 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from writef @ 160

// block var data_inlined_crash_at_160_10295
    DeRef(_data_inlined_crash_at_160_10295);
    _data_inlined_crash_at_160_10295 = NOVALUE;

// block var msg_inlined_crash_at_163_10296
    DeRefi(_msg_inlined_crash_at_163_10296);
    _msg_inlined_crash_at_163_10296 = NOVALUE;
    // SubProg writef pc: 182 op: NOP1 (159)
L8: // addr: 183 pc: 182 sub: 10260 op: 159
    // SubProg writef pc: 183 op: STARTLINE (58)

    /** io.e:1639			close_fn = 1*/
    // SubProg writef pc: 185 op: ASSIGN_I (113)
    _close_fn_10267 = 1;
    // SubProg writef pc: 188 op: ELSE (23)
    goto LA; // [188] 199
    // SubProg writef pc: 190 op: NOP1 (159)
L2: // addr: 191 pc: 190 sub: 10260 op: 159
    // SubProg writef pc: 191 op: STARTLINE (58)

    /** io.e:1641			real_fn = fn*/
    // SubProg writef pc: 193 op: ASSIGN (18)
    Ref(_fn_10264);
    _real_fn_10266 = _fn_10264;
    // SubProg writef pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_real_fn_10266)) {
        _1 = (object)(DBL_PTR(_real_fn_10266)->dbl);
        DeRefDS(_real_fn_10266);
        _real_fn_10266 = _1;
    }
    // SubProg writef pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 10260 op: 159
    // SubProg writef pc: 199 op: STARTLINE (58)

    /** io.e:1644		if equal(data_not_string, 0) then*/
    // SubProg writef pc: 201 op: EQUAL (153)
    if (_data_not_string_10265 == 0)
    _5746 = 1;
    else if (IS_ATOM_INT(_data_not_string_10265) && IS_ATOM_INT(0))
    _5746 = 0;
    else
    _5746 = (compare(_data_not_string_10265, 0) == 0);
    // SubProg writef pc: 205 op: IF (20)
    if (_5746 == 0)
    {
        _5746 = NOVALUE;
        goto LB; // [205] 225
    }
    else{
        _5746 = NOVALUE;
    }
    // SubProg writef pc: 208 op: STARTLINE (58)

    /** io.e:1645			if types:t_display(data) then*/
    // SubProg writef pc: 210 op: PROC (27)
    Ref(_data_10263);
    _5747 = _13t_display(_data_10263);
    // SubProg writef pc: 214 op: IF (20)
    if (_5747 == 0) {
        DeRef(_5747);
        _5747 = NOVALUE;
        goto LC; // [214] 224
    }
    else {
        if (!IS_ATOM_INT(_5747) && DBL_PTR(_5747)->dbl == 0.0){
            DeRef(_5747);
            _5747 = NOVALUE;
            goto LC; // [214] 224
        }
        DeRef(_5747);
        _5747 = NOVALUE;
    }
    DeRef(_5747);
    _5747 = NOVALUE;
    // SubProg writef pc: 217 op: STARTLINE (58)

    /** io.e:1646				data = {data}*/
    // SubProg writef pc: 219 op: RIGHT_BRACE_N (31)
    _0 = _data_10263;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_data_10263);
    ((intptr_t*)_2)[1] = _data_10263;
    _data_10263 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg writef pc: 223 op: NOP1 (159)
LC: // addr: 224 pc: 223 sub: 10260 op: 159
    // SubProg writef pc: 224 op: NOP1 (159)
LB: // addr: 225 pc: 224 sub: 10260 op: 159
    // SubProg writef pc: 225 op: STARTLINE (58)

    /** io.e:1649	    puts(real_fn, text:format( fm, data ) )*/
    // SubProg writef pc: 227 op: PROC (27)
    Ref(_fm_10262);
    Ref(_data_10263);
    _5749 = _17format(_fm_10262, _data_10263);
    // SubProg writef pc: 232 op: PUTS (44)
    EPuts(_real_fn_10266, _5749); // DJP 
    DeRef(_5749);
    _5749 = NOVALUE;
    // SubProg writef pc: 235 op: STARTLINE (58)

    /** io.e:1650	    if close_fn then*/
    // SubProg writef pc: 237 op: IF (20)
    if (_close_fn_10267 == 0)
    {
        goto LD; // [237] 245
    }
    else{
    }
    // SubProg writef pc: 240 op: STARTLINE (58)

    /** io.e:1651	    	close(real_fn)*/
    // SubProg writef pc: 242 op: CLOSE (86)
    EClose(_real_fn_10266);
    // SubProg writef pc: 244 op: NOP1 (159)
LD: // addr: 245 pc: 244 sub: 10260 op: 159
    // SubProg writef pc: 245 op: STARTLINE (58)

    /** io.e:1653	end procedure*/
    // SubProg writef pc: 247 op: RETURNP (29)

// Exiting block BLOCK: writef

// block var fm_10262
    DeRef(_fm_10262);

// block var data_10263
    DeRef(_data_10263);

// block var fn_10264
    DeRef(_fn_10264);

// block var data_not_string_10265

// block var real_fn_10266

// block var close_fn_10267

// block var out_style_10268
    DeRefi(_out_style_10268);
    return;
    // SubProg writef pc: 250 op: BADRETURNF (43)
    ;
}



// 0xAD867762
