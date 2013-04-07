// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _16int_to_bytes(object _x_2914, object _size_2915)
{
    object _1331 = NOVALUE; // 2924 1331
    object _1330 = NOVALUE; // 2923 1330
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg int_to_bytes pc: 1 op: INTEGER_CHECK (96)
    // SubProg int_to_bytes pc: 3 op: STARTLINE (58)

    /** convert.e:68		switch size do*/
    // SubProg int_to_bytes pc: 5 op: SWITCH_I (193)
    _0 = 4;
    switch ( _0 ){ 
        // SubProg int_to_bytes pc: 10 op: STARTLINE (58)

        /** convert.e:69			case 1 then*/
        // SubProg int_to_bytes pc: 12 op: CASE (186)
        case 1:
        // SubProg int_to_bytes pc: 14 op: STARTLINE (58)

        /** convert.e:70				poke( mem, x )*/
        // SubProg int_to_bytes pc: 16 op: GLOBAL_INIT_CHECK (109)
        // SubProg int_to_bytes pc: 18 op: POKE (128)
        if (IS_ATOM_INT(_16mem_2910)){
            poke_addr = (uint8_t *)_16mem_2910;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_16mem_2910)->dbl);
        }
        if (IS_ATOM_INT(_x_2914)) {
            *poke_addr = (uint8_t)_x_2914;
        }
        else {
            *poke_addr = (uint8_t)DBL_PTR(_x_2914)->dbl;
        }
        // SubProg int_to_bytes pc: 21 op: ELSE (23)
        goto L1; // [21] 73
        // SubProg int_to_bytes pc: 23 op: STARTLINE (58)

        /** convert.e:71			case 2 then*/
        // SubProg int_to_bytes pc: 25 op: CASE (186)
        case 2:
        // SubProg int_to_bytes pc: 27 op: STARTLINE (58)

        /** convert.e:72				poke2( mem, x )*/
        // SubProg int_to_bytes pc: 29 op: GLOBAL_INIT_CHECK (109)
        // SubProg int_to_bytes pc: 31 op: POKE2 (178)
        if (IS_ATOM_INT(_16mem_2910)){
            poke2_addr = (uint16_t *)_16mem_2910;
        }
        else {
            poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_16mem_2910)->dbl);
        }
        if (IS_ATOM_INT(_x_2914)) {
            *poke2_addr = (uint16_t)_x_2914;
        }
        else {
            *poke2_addr = (uint16_t)DBL_PTR(_x_2914)->dbl;
        }
        // SubProg int_to_bytes pc: 34 op: ELSE (23)
        goto L1; // [34] 73
        // SubProg int_to_bytes pc: 36 op: STARTLINE (58)

        /** convert.e:73			case 4 then*/
        // SubProg int_to_bytes pc: 38 op: CASE (186)
        case 4:
        // SubProg int_to_bytes pc: 40 op: STARTLINE (58)

        /** convert.e:74				poke4( mem, x )*/
        // SubProg int_to_bytes pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg int_to_bytes pc: 44 op: POKE4 (138)
        if (IS_ATOM_INT(_16mem_2910)){
            poke4_addr = (uint32_t *)_16mem_2910;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_16mem_2910)->dbl);
        }
        if (IS_ATOM_INT(_x_2914)) {
            *poke4_addr = (uint32_t)_x_2914;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_2914)->dbl;
        }
        // SubProg int_to_bytes pc: 47 op: ELSE (23)
        goto L1; // [47] 73
        // SubProg int_to_bytes pc: 49 op: STARTLINE (58)

        /** convert.e:75			case 8 then*/
        // SubProg int_to_bytes pc: 51 op: CASE (186)
        case 8:
        // SubProg int_to_bytes pc: 53 op: STARTLINE (58)

        /** convert.e:76				poke8( mem, x )*/
        // SubProg int_to_bytes pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg int_to_bytes pc: 57 op: POKE8 (212)
        if (IS_ATOM_INT(_16mem_2910)){
            poke8_addr = (uint64_t *)_16mem_2910;
        }
        else {
            poke8_addr = (uint64_t *)(uintptr_t)(DBL_PTR(_16mem_2910)->dbl);
        }
        if (IS_ATOM_INT(_x_2914)) {
            *poke8_addr = (uint64_t)_x_2914;
        }
        else {
            *poke8_addr = (uint64_t)DBL_PTR(_x_2914)->dbl;
        }
        // SubProg int_to_bytes pc: 60 op: ELSE (23)
        goto L1; // [60] 73
        // SubProg int_to_bytes pc: 62 op: STARTLINE (58)

        /** convert.e:77			case else*/
        // SubProg int_to_bytes pc: 64 op: CASE (186)
        default:
        // SubProg int_to_bytes pc: 66 op: STARTLINE (58)

        /** convert.e:78				return {}*/
        // SubProg int_to_bytes pc: 68 op: RETURNF (28)
        RefDS(_5);

// Exiting block BLOCK: int_to_bytes

// block var x_2914
        DeRef(_x_2914);

// block var size_2915
        return _5;
        // SubProg int_to_bytes pc: 72 op: NOPSWITCH (187)
    ;}L1: // addr: 73 pc: 72 sub: 2912 op: 187
    // SubProg int_to_bytes pc: 73 op: STARTLINE (58)

    /** convert.e:80		return peek( mem & size )*/
    // SubProg int_to_bytes pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg int_to_bytes pc: 77 op: CONCAT (15)
    Concat((object_ptr)&_1330, _16mem_2910, _size_2915);
    // SubProg int_to_bytes pc: 81 op: PEEK (127)
    _1 = (object)SEQ_PTR(_1330);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _1331 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_1330);
    _1330 = NOVALUE;
    // SubProg int_to_bytes pc: 84 op: RETURNF (28)

// Exiting block BLOCK: int_to_bytes

// block var x_2914
    DeRef(_x_2914);

// block var size_2915
    return _1331;
    // SubProg int_to_bytes pc: 88 op: BADRETURNF (43)
    ;
}


object _16int_to_bits(object _x_2953, object _nbits_2954)
{
    object _bits_2955 = NOVALUE;
    object _mask_2956 = NOVALUE;
// skipping _1358  name type: 0
    object _1357 = NOVALUE; // 2976 1357
    object _1356 = NOVALUE; // 2975 1356
// skipping _1355  name type: 0
    object _1354 = NOVALUE; // 2971 1354
// skipping _1353  name type: 0
// skipping _1352  name type: 0
    object _1351 = NOVALUE; // 2966 1351
    object _1350 = NOVALUE; // 2965 1350
    object _1349 = NOVALUE; // 2964 1349
// skipping _1348  name type: 0
// skipping _1347  name type: 0
// skipping _1346  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg int_to_bits pc: 1 op: INTEGER_CHECK (96)
    // SubProg int_to_bits pc: 3 op: STARTLINE (58)

    /** convert.e:167		if nbits < 1 then*/
    // SubProg int_to_bits pc: 5 op: LESS_IFW_I (119)
    if (_nbits_2954 >= 1)
    goto L1; // [5] 16
    // SubProg int_to_bits pc: 9 op: STARTLINE (58)

    /** convert.e:168			return {}*/
    // SubProg int_to_bits pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: int_to_bits

// block var x_2953
    DeRef(_x_2953);

// block var nbits_2954

// block var bits_2955
    DeRef(_bits_2955);

// block var mask_2956
    DeRef(_mask_2956);
    return _5;
    // SubProg int_to_bits pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 2951 op: 159
    // SubProg int_to_bits pc: 16 op: STARTLINE (58)

    /** convert.e:170		bits = repeat(0, nbits)*/
    // SubProg int_to_bits pc: 18 op: REPEAT (32)
    DeRef(_bits_2955);
    _bits_2955 = Repeat(0, _nbits_2954);
    // SubProg int_to_bits pc: 22 op: STARTLINE (58)

    /** convert.e:171		if nbits <= 32 then*/
    // SubProg int_to_bits pc: 24 op: LESSEQ_IFW_I (123)
    if (_nbits_2954 > 32)
    goto L2; // [24] 75
    // SubProg int_to_bits pc: 28 op: STARTLINE (58)

    /** convert.e:173			mask = 1*/
    // SubProg int_to_bits pc: 30 op: ASSIGN (18)
    DeRef(_mask_2956);
    _mask_2956 = 1;
    // SubProg int_to_bits pc: 33 op: STARTLINE (58)

    /** convert.e:174			for i = 1 to nbits do*/
    // SubProg int_to_bits pc: 35 op: ASSIGN (18)
    _1349 = _nbits_2954;
    // SubProg int_to_bits pc: 38 op: FOR_I (125)
    {
        object _i_2963;
        _i_2963 = 1;
L3: // addr: 45 pc: 38 sub: 2951 op: 125
        if (_i_2963 > _1349){
            goto L4; // [38] 72
        }
        // SubProg int_to_bits pc: 45 op: STARTLINE (58)

        /** convert.e:175				bits[i] = and_bits(x, mask) and 1*/
        // SubProg int_to_bits pc: 47 op: AND_BITS (56)
        if (IS_ATOM_INT(_x_2953) && IS_ATOM_INT(_mask_2956)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_x_2953 & (uintptr_t)_mask_2956;
                 _1350 = MAKE_UINT(tu);
            }
        }
        else {
            if (IS_ATOM_INT(_x_2953)) {
                temp_d.dbl = (eudouble)_x_2953;
                _1350 = Dand_bits(&temp_d, DBL_PTR(_mask_2956));
            }
            else {
                if (IS_ATOM_INT(_mask_2956)) {
                    temp_d.dbl = (eudouble)_mask_2956;
                    _1350 = Dand_bits(DBL_PTR(_x_2953), &temp_d);
                }
                else
                _1350 = Dand_bits(DBL_PTR(_x_2953), DBL_PTR(_mask_2956));
            }
        }
        // SubProg int_to_bits pc: 51 op: AND (8)
        if (IS_ATOM_INT(_1350)) {
            _1351 = (_1350 != 0 && 1 != 0);
        }
        else {
            temp_d.dbl = (eudouble)1;
            _1351 = Dand(DBL_PTR(_1350), &temp_d);
        }
        DeRef(_1350);
        _1350 = NOVALUE;
        // SubProg int_to_bits pc: 55 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_bits_2955);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2955 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2963);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1351;
        if( _1 != _1351 ){
            DeRef(_1);
        }
        _1351 = NOVALUE;
        // SubProg int_to_bits pc: 59 op: STARTLINE (58)

        /** convert.e:176				mask *= 2*/
        // SubProg int_to_bits pc: 61 op: PLUS (11)
        _0 = _mask_2956;
        if (IS_ATOM_INT(_mask_2956) && IS_ATOM_INT(_mask_2956)) {
            _mask_2956 = _mask_2956 + _mask_2956;
            if ((object)((uintptr_t)_mask_2956 + (uintptr_t)HIGH_BITS) >= 0){
                _mask_2956 = NewDouble((eudouble)_mask_2956);
            }
        }
        else {
            if (IS_ATOM_INT(_mask_2956)) {
                _mask_2956 = NewDouble((eudouble)_mask_2956 + DBL_PTR(_mask_2956)->dbl);
            }
            else {
                if (IS_ATOM_INT(_mask_2956)) {
                    _mask_2956 = NewDouble(DBL_PTR(_mask_2956)->dbl + (eudouble)_mask_2956);
                }
                else
                _mask_2956 = NewDouble(DBL_PTR(_mask_2956)->dbl + DBL_PTR(_mask_2956)->dbl);
            }
        }
        DeRef(_0);
        // SubProg int_to_bits pc: 65 op: STARTLINE (58)

        /** convert.e:177			end for*/
        // SubProg int_to_bits pc: 67 op: ENDFOR_INT_UP1 (54)
        _i_2963 = _i_2963 + 1;
        goto L3; // [67] 45
L4: // addr: 72 pc: 67 sub: 2951 op: 54
        ;
    }
    // SubProg int_to_bits pc: 72 op: ELSE (23)
    goto L5; // [72] 128
    // SubProg int_to_bits pc: 74 op: NOP1 (159)
L2: // addr: 75 pc: 74 sub: 2951 op: 159
    // SubProg int_to_bits pc: 75 op: STARTLINE (58)

    /** convert.e:180			if x < 0 then*/
    // SubProg int_to_bits pc: 77 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _x_2953, 0)){
        goto L6; // [77] 92
    }
    // SubProg int_to_bits pc: 81 op: STARTLINE (58)

    /** convert.e:181				x += power(2, nbits) -- for 2's complement bit pattern*/
    // SubProg int_to_bits pc: 83 op: POWER (72)
    _1354 = power(2, _nbits_2954);
    // SubProg int_to_bits pc: 87 op: PLUS (11)
    _0 = _x_2953;
    if (IS_ATOM_INT(_x_2953) && IS_ATOM_INT(_1354)) {
        _x_2953 = _x_2953 + _1354;
        if ((object)((uintptr_t)_x_2953 + (uintptr_t)HIGH_BITS) >= 0){
            _x_2953 = NewDouble((eudouble)_x_2953);
        }
    }
    else {
        if (IS_ATOM_INT(_x_2953)) {
            _x_2953 = NewDouble((eudouble)_x_2953 + DBL_PTR(_1354)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1354)) {
                _x_2953 = NewDouble(DBL_PTR(_x_2953)->dbl + (eudouble)_1354);
            }
            else
            _x_2953 = NewDouble(DBL_PTR(_x_2953)->dbl + DBL_PTR(_1354)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_1354);
    _1354 = NOVALUE;
    // SubProg int_to_bits pc: 91 op: NOP1 (159)
L6: // addr: 92 pc: 91 sub: 2951 op: 159
    // SubProg int_to_bits pc: 92 op: STARTLINE (58)

    /** convert.e:183			for i = 1 to nbits do*/
    // SubProg int_to_bits pc: 94 op: ASSIGN (18)
    _1356 = _nbits_2954;
    // SubProg int_to_bits pc: 97 op: FOR_I (125)
    {
        object _i_2974;
        _i_2974 = 1;
L7: // addr: 104 pc: 97 sub: 2951 op: 125
        if (_i_2974 > _1356){
            goto L8; // [97] 127
        }
        // SubProg int_to_bits pc: 104 op: STARTLINE (58)

        /** convert.e:184				bits[i] = remainder(x, 2)*/
        // SubProg int_to_bits pc: 106 op: REMAINDER (71)
        if (IS_ATOM_INT(_x_2953)) {
            _1357 = (_x_2953 % 2);
        }
        else {
            temp_d.dbl = (eudouble)2;
            _1357 = Dremainder(DBL_PTR(_x_2953), &temp_d);
        }
        // SubProg int_to_bits pc: 110 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_bits_2955);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2955 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2974);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1357;
        if( _1 != _1357 ){
            DeRef(_1);
        }
        _1357 = NOVALUE;
        // SubProg int_to_bits pc: 114 op: STARTLINE (58)

        /** convert.e:185				x = floor(x / 2)*/
        // SubProg int_to_bits pc: 116 op: FLOOR_DIV2 (66)
        _0 = _x_2953;
        if (IS_ATOM_INT(_x_2953)) {
            _x_2953 = _x_2953 >> 1;
        }
        else {
            _1 = binary_op(DIVIDE, _x_2953, 2);
            _x_2953 = unary_op(FLOOR, _1);
            DeRef(_1);
        }
        DeRef(_0);
        // SubProg int_to_bits pc: 120 op: STARTLINE (58)

        /** convert.e:186			end for*/
        // SubProg int_to_bits pc: 122 op: ENDFOR_INT_UP1 (54)
        _i_2974 = _i_2974 + 1;
        goto L7; // [122] 104
L8: // addr: 127 pc: 122 sub: 2951 op: 54
        ;
    }
    // SubProg int_to_bits pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 2951 op: 159
    // SubProg int_to_bits pc: 128 op: STARTLINE (58)

    /** convert.e:188		return bits*/
    // SubProg int_to_bits pc: 130 op: RETURNF (28)

// Exiting block BLOCK: int_to_bits

// block var x_2953
    DeRef(_x_2953);

// block var nbits_2954

// block var mask_2956
    DeRef(_mask_2956);
    return _bits_2955;
    // SubProg int_to_bits pc: 134 op: BADRETURNF (43)
    ;
}


object _16bits_to_int(object _bits_2980)
{
    object _value_2981 = NOVALUE;
    object _p_2982 = NOVALUE;
// skipping _1362  name type: 0
// skipping _1361  name type: 0
    object _1360 = NOVALUE; // 2987 1360
    object _1359 = NOVALUE; // 2985 1359
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bits_to_int pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_int pc: 3 op: STARTLINE (58)

    /** convert.e:225		value = 0*/
    // SubProg bits_to_int pc: 5 op: ASSIGN (18)
    DeRef(_value_2981);
    _value_2981 = 0;
    // SubProg bits_to_int pc: 8 op: STARTLINE (58)

    /** convert.e:226		p = 1*/
    // SubProg bits_to_int pc: 10 op: ASSIGN (18)
    DeRef(_p_2982);
    _p_2982 = 1;
    // SubProg bits_to_int pc: 13 op: STARTLINE (58)

    /** convert.e:227		for i = 1 to length(bits) do*/
    // SubProg bits_to_int pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_2980)){
            _1359 = SEQ_PTR(_bits_2980)->length;
    }
    else {
        _1359 = 1;
    }
    // SubProg bits_to_int pc: 18 op: FOR_I (125)
    {
        object _i_2984;
        _i_2984 = 1;
L1: // addr: 25 pc: 18 sub: 2978 op: 125
        if (_i_2984 > _1359){
            goto L2; // [18] 54
        }
        // SubProg bits_to_int pc: 25 op: STARTLINE (58)

        /** convert.e:228			if bits[i] then*/
        // SubProg bits_to_int pc: 27 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_bits_2980);
        _1360 = (object)*(((s1_ptr)_2)->base + _i_2984);
        // SubProg bits_to_int pc: 31 op: IF (20)
        if (_1360 == 0) {
            _1360 = NOVALUE;
            goto L3; // [31] 41
        }
        else {
            if (!IS_ATOM_INT(_1360) && DBL_PTR(_1360)->dbl == 0.0){
                _1360 = NOVALUE;
                goto L3; // [31] 41
            }
            _1360 = NOVALUE;
        }
        _1360 = NOVALUE;
        // SubProg bits_to_int pc: 34 op: STARTLINE (58)

        /** convert.e:229				value += p*/
        // SubProg bits_to_int pc: 36 op: PLUS (11)
        _0 = _value_2981;
        if (IS_ATOM_INT(_value_2981) && IS_ATOM_INT(_p_2982)) {
            _value_2981 = _value_2981 + _p_2982;
            if ((object)((uintptr_t)_value_2981 + (uintptr_t)HIGH_BITS) >= 0){
                _value_2981 = NewDouble((eudouble)_value_2981);
            }
        }
        else {
            if (IS_ATOM_INT(_value_2981)) {
                _value_2981 = NewDouble((eudouble)_value_2981 + DBL_PTR(_p_2982)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2982)) {
                    _value_2981 = NewDouble(DBL_PTR(_value_2981)->dbl + (eudouble)_p_2982);
                }
                else
                _value_2981 = NewDouble(DBL_PTR(_value_2981)->dbl + DBL_PTR(_p_2982)->dbl);
            }
        }
        DeRef(_0);
        // SubProg bits_to_int pc: 40 op: NOP1 (159)
L3: // addr: 41 pc: 40 sub: 2978 op: 159
        // SubProg bits_to_int pc: 41 op: STARTLINE (58)

        /** convert.e:231			p += p*/
        // SubProg bits_to_int pc: 43 op: PLUS (11)
        _0 = _p_2982;
        if (IS_ATOM_INT(_p_2982) && IS_ATOM_INT(_p_2982)) {
            _p_2982 = _p_2982 + _p_2982;
            if ((object)((uintptr_t)_p_2982 + (uintptr_t)HIGH_BITS) >= 0){
                _p_2982 = NewDouble((eudouble)_p_2982);
            }
        }
        else {
            if (IS_ATOM_INT(_p_2982)) {
                _p_2982 = NewDouble((eudouble)_p_2982 + DBL_PTR(_p_2982)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2982)) {
                    _p_2982 = NewDouble(DBL_PTR(_p_2982)->dbl + (eudouble)_p_2982);
                }
                else
                _p_2982 = NewDouble(DBL_PTR(_p_2982)->dbl + DBL_PTR(_p_2982)->dbl);
            }
        }
        DeRef(_0);
        // SubProg bits_to_int pc: 47 op: STARTLINE (58)

        /** convert.e:232		end for*/
        // SubProg bits_to_int pc: 49 op: ENDFOR_INT_UP1 (54)
        _i_2984 = _i_2984 + 1;
        goto L1; // [49] 25
L2: // addr: 54 pc: 49 sub: 2978 op: 54
        ;
    }
    // SubProg bits_to_int pc: 54 op: STARTLINE (58)

    /** convert.e:233		return value*/
    // SubProg bits_to_int pc: 56 op: RETURNF (28)

// Exiting block BLOCK: bits_to_int

// block var bits_2980
    DeRefDS(_bits_2980);

// block var p_2982
    DeRef(_p_2982);
    return _value_2981;
    // SubProg bits_to_int pc: 60 op: BADRETURNF (43)
    ;
}


object _16atom_to_float64(object _a_2992)
{
    object _1363 = NOVALUE; // 2993 1363
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float64 pc: 1 op: STARTLINE (58)

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    // SubProg atom_to_float64 pc: 3 op: MACHINE_FUNC (111)
    _1363 = machine(46, _a_2992);
    // SubProg atom_to_float64 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float64

// block var a_2992
    DeRef(_a_2992);
    return _1363;
    // SubProg atom_to_float64 pc: 11 op: BADRETURNF (43)
    ;
}


object _16atom_to_float80(object _a_2996)
{
    object _1364 = NOVALUE; // 2997 1364
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float80 pc: 1 op: STARTLINE (58)

    /** convert.e:268		return machine_func(M_A_TO_F80, a)*/
    // SubProg atom_to_float80 pc: 3 op: MACHINE_FUNC (111)
    _1364 = machine(105, _a_2996);
    // SubProg atom_to_float80 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float80

// block var a_2996
    DeRef(_a_2996);
    return _1364;
    // SubProg atom_to_float80 pc: 11 op: BADRETURNF (43)
    ;
}


object _16float80_to_atom(object _bytes_3000)
{
    object _1365 = NOVALUE; // 3001 1365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float80_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float80_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:274		return machine_func(M_F80_TO_A, bytes )*/
    // SubProg float80_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1365 = machine(101, _bytes_3000);
    // SubProg float80_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float80_to_atom

// block var bytes_3000
    DeRefDS(_bytes_3000);
    return _1365;
    // SubProg float80_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _16atom_to_float32(object _a_3004)
{
    object _1366 = NOVALUE; // 3005 1366
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float32 pc: 1 op: STARTLINE (58)

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    // SubProg atom_to_float32 pc: 3 op: MACHINE_FUNC (111)
    _1366 = machine(48, _a_3004);
    // SubProg atom_to_float32 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float32

// block var a_3004
    DeRef(_a_3004);
    return _1366;
    // SubProg atom_to_float32 pc: 11 op: BADRETURNF (43)
    ;
}


object _16float64_to_atom(object _ieee64_3008)
{
    object _1367 = NOVALUE; // 3009 1367
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float64_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float64_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
    // SubProg float64_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1367 = machine(47, _ieee64_3008);
    // SubProg float64_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float64_to_atom

// block var ieee64_3008
    DeRefDS(_ieee64_3008);
    return _1367;
    // SubProg float64_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _16float32_to_atom(object _ieee32_3012)
{
    object _1368 = NOVALUE; // 3013 1368
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float32_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float32_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    // SubProg float32_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1368 = machine(49, _ieee32_3012);
    // SubProg float32_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float32_to_atom

// block var ieee32_3012
    DeRefDS(_ieee32_3012);
    return _1368;
    // SubProg float32_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _16to_number(object _text_in_3090, object _return_bad_pos_3091)
{
    object _lDotFound_3092 = NOVALUE;
    object _lSignFound_3093 = NOVALUE;
    object _lCharValue_3094 = NOVALUE;
    object _lBadPos_3095 = NOVALUE;
    object _lLeftSize_3096 = NOVALUE;
    object _lRightSize_3097 = NOVALUE;
    object _lLeftValue_3098 = NOVALUE;
    object _lRightValue_3099 = NOVALUE;
    object _lBase_3100 = NOVALUE;
    object _lPercent_3101 = NOVALUE;
    object _lResult_3102 = NOVALUE;
    object _lDigitCount_3103 = NOVALUE;
    object _lCurrencyFound_3104 = NOVALUE;
    object _lLastDigit_3105 = NOVALUE;
    object _lChar_3106 = NOVALUE;
    object _1486 = NOVALUE; // 3244 1486
    object _1485 = NOVALUE; // 3243 1485
// skipping _1484  name type: 0
// skipping _1483  name type: 0
// skipping _1482  name type: 0
// skipping _1481  name type: 0
// skipping _1480  name type: 0
// skipping _1479  name type: 0
    object _1478 = NOVALUE; // 3231 1478
// skipping _1477  name type: 0
    object _1476 = NOVALUE; // 3228 1476
    object _1475 = NOVALUE; // 3227 1475
// skipping _1474  name type: 0
// skipping _1473  name type: 0
// skipping _1472  name type: 0
// skipping _1471  name type: 0
    object _1470 = NOVALUE; // 3217 1470
    object _1469 = NOVALUE; // 3216 1469
    object _1468 = NOVALUE; // 3215 1468
    object _1467 = NOVALUE; // 3213 1467
    object _1466 = NOVALUE; // 3212 1466
    object _1465 = NOVALUE; // 3211 1465
// skipping _1464  name type: 0
// skipping _1463  name type: 0
// skipping _1462  name type: 0
    object _1461 = NOVALUE; // 3204 1461
// skipping _1460  name type: 0
// skipping _1459  name type: 0
// skipping _1458  name type: 0
    object _1457 = NOVALUE; // 3199 1457
// skipping _1456  name type: 0
// skipping _1455  name type: 0
// skipping _1454  name type: 0
// skipping _1453  name type: 0
// skipping _1452  name type: 0
// skipping _1451  name type: 0
// skipping _1450  name type: 0
    object _1449 = NOVALUE; // 3187 1449
// skipping _1443  name type: 0
// skipping _1442  name type: 0
// skipping _1441  name type: 0
    object _1440 = NOVALUE; // 3173 1440
    object _1439 = NOVALUE; // 3172 1439
// skipping _1438  name type: 0
// skipping _1437  name type: 0
// skipping _1436  name type: 0
// skipping _1435  name type: 0
    object _1434 = NOVALUE; // 3156 1434
// skipping _1433  name type: 0
    object _1432 = NOVALUE; // 3154 1432
// skipping _1431  name type: 0
    object _1426 = NOVALUE; // 3142 1426
    object _1425 = NOVALUE; // 3141 1425
    object _1424 = NOVALUE; // 3140 1424
    object _1423 = NOVALUE; // 3136 1423
    object _1422 = NOVALUE; // 3135 1422
    object _1421 = NOVALUE; // 3134 1421
    object _1420 = NOVALUE; // 3130 1420
    object _1419 = NOVALUE; // 3129 1419
    object _1418 = NOVALUE; // 3128 1418
// skipping _1417  name type: 0
// skipping _1415  name type: 0
// skipping _1412  name type: 0
// skipping _1411  name type: 0
    object _1410 = NOVALUE; // 3112 1410
    object _1409 = NOVALUE; // 3111 1409
    object _1408 = NOVALUE; // 3109 1408
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg to_number pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg to_number pc: 3 op: INTEGER_CHECK (96)
    // SubProg to_number pc: 5 op: STARTLINE (58)

    /** convert.e:593		integer lDotFound = 0*/
    // SubProg to_number pc: 7 op: ASSIGN_I (113)
    _lDotFound_3092 = 0;
    // SubProg to_number pc: 10 op: STARTLINE (58)

    /** convert.e:594		integer lSignFound = 2*/
    // SubProg to_number pc: 12 op: ASSIGN_I (113)
    _lSignFound_3093 = 2;
    // SubProg to_number pc: 15 op: STARTLINE (58)

    /** convert.e:596		integer lBadPos = 0*/
    // SubProg to_number pc: 17 op: ASSIGN_I (113)
    _lBadPos_3095 = 0;
    // SubProg to_number pc: 20 op: STARTLINE (58)

    /** convert.e:597		atom    lLeftSize = 0*/
    // SubProg to_number pc: 22 op: ASSIGN (18)
    DeRef(_lLeftSize_3096);
    _lLeftSize_3096 = 0;
    // SubProg to_number pc: 25 op: STARTLINE (58)

    /** convert.e:598		atom    lRightSize = 1*/
    // SubProg to_number pc: 27 op: ASSIGN (18)
    DeRef(_lRightSize_3097);
    _lRightSize_3097 = 1;
    // SubProg to_number pc: 30 op: STARTLINE (58)

    /** convert.e:599		atom    lLeftValue = 0*/
    // SubProg to_number pc: 32 op: ASSIGN (18)
    DeRef(_lLeftValue_3098);
    _lLeftValue_3098 = 0;
    // SubProg to_number pc: 35 op: STARTLINE (58)

    /** convert.e:600		atom    lRightValue = 0*/
    // SubProg to_number pc: 37 op: ASSIGN (18)
    DeRef(_lRightValue_3099);
    _lRightValue_3099 = 0;
    // SubProg to_number pc: 40 op: STARTLINE (58)

    /** convert.e:601		integer lBase = 10*/
    // SubProg to_number pc: 42 op: ASSIGN_I (113)
    _lBase_3100 = 10;
    // SubProg to_number pc: 45 op: STARTLINE (58)

    /** convert.e:602		integer lPercent = 1*/
    // SubProg to_number pc: 47 op: ASSIGN_I (113)
    _lPercent_3101 = 1;
    // SubProg to_number pc: 50 op: STARTLINE (58)

    /** convert.e:604		integer lDigitCount = 0*/
    // SubProg to_number pc: 52 op: ASSIGN_I (113)
    _lDigitCount_3103 = 0;
    // SubProg to_number pc: 55 op: STARTLINE (58)

    /** convert.e:605		integer lCurrencyFound = 0*/
    // SubProg to_number pc: 57 op: ASSIGN_I (113)
    _lCurrencyFound_3104 = 0;
    // SubProg to_number pc: 60 op: STARTLINE (58)

    /** convert.e:606		integer lLastDigit = 0*/
    // SubProg to_number pc: 62 op: ASSIGN_I (113)
    _lLastDigit_3105 = 0;
    // SubProg to_number pc: 65 op: STARTLINE (58)

    /** convert.e:609		for i = 1 to length(text_in) do*/
    // SubProg to_number pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_3090)){
            _1408 = SEQ_PTR(_text_in_3090)->length;
    }
    else {
        _1408 = 1;
    }
    // SubProg to_number pc: 70 op: FOR_I (125)
    {
        object _i_3108;
        _i_3108 = 1;
L1: // addr: 77 pc: 70 sub: 3088 op: 125
        if (_i_3108 > _1408){
            goto L2; // [70] 672
        }
        // SubProg to_number pc: 77 op: STARTLINE (58)

        /** convert.e:610			if not integer(text_in[i]) then*/
        // SubProg to_number pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_3090);
        _1409 = (object)*(((s1_ptr)_2)->base + _i_3108);
        // SubProg to_number pc: 83 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_1409))
        _1410 = 1;
        else if (IS_ATOM_DBL(_1409))
        _1410 = IS_ATOM_INT(DoubleToInt(_1409));
        else
        _1410 = 0;
        _1409 = NOVALUE;
        // SubProg to_number pc: 86 op: NOT_IFW (108)
        if (_1410 != 0)
        goto L3; // [86] 94
        _1410 = NOVALUE;
        // SubProg to_number pc: 89 op: STARTLINE (58)

        /** convert.e:611				exit*/
        // SubProg to_number pc: 91 op: EXIT (61)
        goto L2; // [91] 672
        // SubProg to_number pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 3088 op: 159
        // SubProg to_number pc: 94 op: STARTLINE (58)

        /** convert.e:614			lChar = text_in[i]*/
        // SubProg to_number pc: 96 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_text_in_3090);
        _lChar_3106 = (object)*(((s1_ptr)_2)->base + _i_3108);
        if (!IS_ATOM_INT(_lChar_3106))
        _lChar_3106 = (object)DBL_PTR(_lChar_3106)->dbl;
        // SubProg to_number pc: 100 op: STARTLINE (58)

        /** convert.e:615			switch lChar do*/
        // SubProg to_number pc: 102 op: SWITCH_I (193)
        _0 = _lChar_3106;
        switch ( _0 ){ 
            // SubProg to_number pc: 107 op: STARTLINE (58)

            /** convert.e:616				case '-' then*/
            // SubProg to_number pc: 109 op: CASE (186)
            case 45:
            // SubProg to_number pc: 111 op: STARTLINE (58)

            /** convert.e:617					if lSignFound = 2 then*/
            // SubProg to_number pc: 113 op: EQUALS_IFW_I (121)
            if (_lSignFound_3093 != 2)
            goto L4; // [113] 130
            // SubProg to_number pc: 117 op: STARTLINE (58)

            /** convert.e:618						lSignFound = -1*/
            // SubProg to_number pc: 119 op: ASSIGN_I (113)
            _lSignFound_3093 = -1;
            // SubProg to_number pc: 122 op: STARTLINE (58)

            /** convert.e:619						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 124 op: ASSIGN_I (113)
            _lLastDigit_3105 = _lDigitCount_3103;
            // SubProg to_number pc: 127 op: ELSE (23)
            goto L5; // [127] 654
            // SubProg to_number pc: 129 op: NOP1 (159)
L4: // addr: 130 pc: 129 sub: 3088 op: 159
            // SubProg to_number pc: 130 op: STARTLINE (58)

            /** convert.e:621						lBadPos = i*/
            // SubProg to_number pc: 132 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 135 op: NOP1 (159)
            // SubProg to_number pc: 136 op: ELSE (23)
            goto L5; // [136] 654
            // SubProg to_number pc: 138 op: STARTLINE (58)

            /** convert.e:624				case '+' then*/
            // SubProg to_number pc: 140 op: CASE (186)
            case 43:
            // SubProg to_number pc: 142 op: STARTLINE (58)

            /** convert.e:625					if lSignFound = 2 then*/
            // SubProg to_number pc: 144 op: EQUALS_IFW_I (121)
            if (_lSignFound_3093 != 2)
            goto L6; // [144] 161
            // SubProg to_number pc: 148 op: STARTLINE (58)

            /** convert.e:626						lSignFound = 1*/
            // SubProg to_number pc: 150 op: ASSIGN_I (113)
            _lSignFound_3093 = 1;
            // SubProg to_number pc: 153 op: STARTLINE (58)

            /** convert.e:627						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 155 op: ASSIGN_I (113)
            _lLastDigit_3105 = _lDigitCount_3103;
            // SubProg to_number pc: 158 op: ELSE (23)
            goto L5; // [158] 654
            // SubProg to_number pc: 160 op: NOP1 (159)
L6: // addr: 161 pc: 160 sub: 3088 op: 159
            // SubProg to_number pc: 161 op: STARTLINE (58)

            /** convert.e:629						lBadPos = i*/
            // SubProg to_number pc: 163 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 166 op: NOP1 (159)
            // SubProg to_number pc: 167 op: ELSE (23)
            goto L5; // [167] 654
            // SubProg to_number pc: 169 op: STARTLINE (58)

            /** convert.e:632				case '#' then*/
            // SubProg to_number pc: 171 op: CASE (186)
            case 35:
            // SubProg to_number pc: 173 op: STARTLINE (58)

            /** convert.e:633					if lDigitCount = 0 and lBase = 10 then*/
            // SubProg to_number pc: 175 op: EQUALS (3)
            _1418 = (_lDigitCount_3103 == 0);
            // SubProg to_number pc: 179 op: SC1_AND_IF (146)
            if (_1418 == 0) {
                goto L7; // [179] 199
            }
            // SubProg to_number pc: 183 op: EQUALS (3)
            _1420 = (_lBase_3100 == 10);
            // SubProg to_number pc: 187 op: NOP1 (159)
            // SubProg to_number pc: 188 op: IF (20)
            if (_1420 == 0)
            {
                DeRef(_1420);
                _1420 = NOVALUE;
                goto L7; // [188] 199
            }
            else{
                DeRef(_1420);
                _1420 = NOVALUE;
            }
            // SubProg to_number pc: 191 op: STARTLINE (58)

            /** convert.e:634						lBase = 16*/
            // SubProg to_number pc: 193 op: ASSIGN_I (113)
            _lBase_3100 = 16;
            // SubProg to_number pc: 196 op: ELSE (23)
            goto L5; // [196] 654
            // SubProg to_number pc: 198 op: NOP1 (159)
L7: // addr: 199 pc: 198 sub: 3088 op: 159
            // SubProg to_number pc: 199 op: STARTLINE (58)

            /** convert.e:636						lBadPos = i*/
            // SubProg to_number pc: 201 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 204 op: NOP1 (159)
            // SubProg to_number pc: 205 op: ELSE (23)
            goto L5; // [205] 654
            // SubProg to_number pc: 207 op: STARTLINE (58)

            /** convert.e:639				case '@' then*/
            // SubProg to_number pc: 209 op: CASE (186)
            case 64:
            // SubProg to_number pc: 211 op: STARTLINE (58)

            /** convert.e:640					if lDigitCount = 0  and lBase = 10 then*/
            // SubProg to_number pc: 213 op: EQUALS (3)
            _1421 = (_lDigitCount_3103 == 0);
            // SubProg to_number pc: 217 op: SC1_AND_IF (146)
            if (_1421 == 0) {
                goto L8; // [217] 237
            }
            // SubProg to_number pc: 221 op: EQUALS (3)
            _1423 = (_lBase_3100 == 10);
            // SubProg to_number pc: 225 op: NOP1 (159)
            // SubProg to_number pc: 226 op: IF (20)
            if (_1423 == 0)
            {
                DeRef(_1423);
                _1423 = NOVALUE;
                goto L8; // [226] 237
            }
            else{
                DeRef(_1423);
                _1423 = NOVALUE;
            }
            // SubProg to_number pc: 229 op: STARTLINE (58)

            /** convert.e:641						lBase = 8*/
            // SubProg to_number pc: 231 op: ASSIGN_I (113)
            _lBase_3100 = 8;
            // SubProg to_number pc: 234 op: ELSE (23)
            goto L5; // [234] 654
            // SubProg to_number pc: 236 op: NOP1 (159)
L8: // addr: 237 pc: 236 sub: 3088 op: 159
            // SubProg to_number pc: 237 op: STARTLINE (58)

            /** convert.e:643						lBadPos = i*/
            // SubProg to_number pc: 239 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 242 op: NOP1 (159)
            // SubProg to_number pc: 243 op: ELSE (23)
            goto L5; // [243] 654
            // SubProg to_number pc: 245 op: STARTLINE (58)

            /** convert.e:646				case '!' then*/
            // SubProg to_number pc: 247 op: CASE (186)
            case 33:
            // SubProg to_number pc: 249 op: STARTLINE (58)

            /** convert.e:647					if lDigitCount = 0  and lBase = 10 then*/
            // SubProg to_number pc: 251 op: EQUALS (3)
            _1424 = (_lDigitCount_3103 == 0);
            // SubProg to_number pc: 255 op: SC1_AND_IF (146)
            if (_1424 == 0) {
                goto L9; // [255] 275
            }
            // SubProg to_number pc: 259 op: EQUALS (3)
            _1426 = (_lBase_3100 == 10);
            // SubProg to_number pc: 263 op: NOP1 (159)
            // SubProg to_number pc: 264 op: IF (20)
            if (_1426 == 0)
            {
                DeRef(_1426);
                _1426 = NOVALUE;
                goto L9; // [264] 275
            }
            else{
                DeRef(_1426);
                _1426 = NOVALUE;
            }
            // SubProg to_number pc: 267 op: STARTLINE (58)

            /** convert.e:648						lBase = 2*/
            // SubProg to_number pc: 269 op: ASSIGN_I (113)
            _lBase_3100 = 2;
            // SubProg to_number pc: 272 op: ELSE (23)
            goto L5; // [272] 654
            // SubProg to_number pc: 274 op: NOP1 (159)
L9: // addr: 275 pc: 274 sub: 3088 op: 159
            // SubProg to_number pc: 275 op: STARTLINE (58)

            /** convert.e:650						lBadPos = i*/
            // SubProg to_number pc: 277 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 280 op: NOP1 (159)
            // SubProg to_number pc: 281 op: ELSE (23)
            goto L5; // [281] 654
            // SubProg to_number pc: 283 op: STARTLINE (58)

            /** convert.e:653				case '$', '£', '¤', '¥', '€' then*/
            // SubProg to_number pc: 285 op: CASE (186)
            case 36:
            // SubProg to_number pc: 287 op: CASE (186)
            case 163:
            // SubProg to_number pc: 289 op: CASE (186)
            case 164:
            // SubProg to_number pc: 291 op: CASE (186)
            case 165:
            // SubProg to_number pc: 293 op: CASE (186)
            case 128:
            // SubProg to_number pc: 295 op: STARTLINE (58)

            /** convert.e:654					if lCurrencyFound = 0 then*/
            // SubProg to_number pc: 297 op: EQUALS_IFW_I (121)
            if (_lCurrencyFound_3104 != 0)
            goto LA; // [297] 314
            // SubProg to_number pc: 301 op: STARTLINE (58)

            /** convert.e:655						lCurrencyFound = 1*/
            // SubProg to_number pc: 303 op: ASSIGN_I (113)
            _lCurrencyFound_3104 = 1;
            // SubProg to_number pc: 306 op: STARTLINE (58)

            /** convert.e:656						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 308 op: ASSIGN_I (113)
            _lLastDigit_3105 = _lDigitCount_3103;
            // SubProg to_number pc: 311 op: ELSE (23)
            goto L5; // [311] 654
            // SubProg to_number pc: 313 op: NOP1 (159)
LA: // addr: 314 pc: 313 sub: 3088 op: 159
            // SubProg to_number pc: 314 op: STARTLINE (58)

            /** convert.e:658						lBadPos = i*/
            // SubProg to_number pc: 316 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 319 op: NOP1 (159)
            // SubProg to_number pc: 320 op: ELSE (23)
            goto L5; // [320] 654
            // SubProg to_number pc: 322 op: STARTLINE (58)

            /** convert.e:661				case '_' then -- grouping character*/
            // SubProg to_number pc: 324 op: CASE (186)
            case 95:
            // SubProg to_number pc: 326 op: STARTLINE (58)

            /** convert.e:662					if lDigitCount = 0 or lLastDigit != 0 then*/
            // SubProg to_number pc: 328 op: EQUALS (3)
            _1432 = (_lDigitCount_3103 == 0);
            // SubProg to_number pc: 332 op: SC1_OR_IF (147)
            if (_1432 != 0) {
                goto LB; // [332] 345
            }
            // SubProg to_number pc: 336 op: NOTEQ (4)
            _1434 = (_lLastDigit_3105 != 0);
            // SubProg to_number pc: 340 op: NOP1 (159)
            // SubProg to_number pc: 341 op: IF (20)
            if (_1434 == 0)
            {
                DeRef(_1434);
                _1434 = NOVALUE;
                goto L5; // [341] 654
            }
            else{
                DeRef(_1434);
                _1434 = NOVALUE;
            }
            // SubProg to_number pc: 344 op: NOP1 (159)
LB: // addr: 345 pc: 344 sub: 3088 op: 159
            // SubProg to_number pc: 345 op: STARTLINE (58)

            /** convert.e:663						lBadPos = i*/
            // SubProg to_number pc: 347 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 350 op: NOP1 (159)
            // SubProg to_number pc: 351 op: ELSE (23)
            goto L5; // [351] 654
            // SubProg to_number pc: 353 op: STARTLINE (58)

            /** convert.e:666				case '.', ',' then*/
            // SubProg to_number pc: 355 op: CASE (186)
            case 46:
            // SubProg to_number pc: 357 op: CASE (186)
            case 44:
            // SubProg to_number pc: 359 op: STARTLINE (58)

            /** convert.e:667					if lLastDigit = 0 then*/
            // SubProg to_number pc: 361 op: EQUALS_IFW_I (121)
            if (_lLastDigit_3105 != 0)
            goto LC; // [361] 400
            // SubProg to_number pc: 365 op: STARTLINE (58)

            /** convert.e:668						if decimal_mark = lChar then*/
            // SubProg to_number pc: 367 op: GLOBAL_INIT_CHECK (109)
            // SubProg to_number pc: 369 op: EQUALS_IFW_I (121)
            if (46 != _lChar_3106)
            goto L5; // [369] 654
            // SubProg to_number pc: 373 op: STARTLINE (58)

            /** convert.e:669							if lDotFound = 0 then*/
            // SubProg to_number pc: 375 op: EQUALS_IFW_I (121)
            if (_lDotFound_3092 != 0)
            goto LD; // [375] 387
            // SubProg to_number pc: 379 op: STARTLINE (58)

            /** convert.e:670								lDotFound = 1*/
            // SubProg to_number pc: 381 op: ASSIGN_I (113)
            _lDotFound_3092 = 1;
            // SubProg to_number pc: 384 op: ELSE (23)
            goto L5; // [384] 654
            // SubProg to_number pc: 386 op: NOP1 (159)
LD: // addr: 387 pc: 386 sub: 3088 op: 159
            // SubProg to_number pc: 387 op: STARTLINE (58)

            /** convert.e:672								lBadPos = i*/
            // SubProg to_number pc: 389 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 392 op: NOP1 (159)
            // SubProg to_number pc: 393 op: ELSE (23)
            goto L5; // [393] 654
            // SubProg to_number pc: 395 op: NOP1 (159)
            // SubProg to_number pc: 396 op: NOP1 (159)
            // SubProg to_number pc: 397 op: ELSE (23)
            goto L5; // [397] 654
            // SubProg to_number pc: 399 op: NOP1 (159)
LC: // addr: 400 pc: 399 sub: 3088 op: 159
            // SubProg to_number pc: 400 op: STARTLINE (58)

            /** convert.e:678						lBadPos = i*/
            // SubProg to_number pc: 402 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 405 op: NOP1 (159)
            // SubProg to_number pc: 406 op: ELSE (23)
            goto L5; // [406] 654
            // SubProg to_number pc: 408 op: STARTLINE (58)

            /** convert.e:681				case '%' then*/
            // SubProg to_number pc: 410 op: CASE (186)
            case 37:
            // SubProg to_number pc: 412 op: STARTLINE (58)

            /** convert.e:682					lLastDigit = lDigitCount*/
            // SubProg to_number pc: 414 op: ASSIGN_I (113)
            _lLastDigit_3105 = _lDigitCount_3103;
            // SubProg to_number pc: 417 op: STARTLINE (58)

            /** convert.e:683					if lPercent = 1 then*/
            // SubProg to_number pc: 419 op: EQUALS_IFW_I (121)
            if (_lPercent_3101 != 1)
            goto LE; // [419] 431
            // SubProg to_number pc: 423 op: STARTLINE (58)

            /** convert.e:684						lPercent = 100*/
            // SubProg to_number pc: 425 op: ASSIGN_I (113)
            _lPercent_3101 = 100;
            // SubProg to_number pc: 428 op: ELSE (23)
            goto L5; // [428] 654
            // SubProg to_number pc: 430 op: NOP1 (159)
LE: // addr: 431 pc: 430 sub: 3088 op: 159
            // SubProg to_number pc: 431 op: STARTLINE (58)

            /** convert.e:686						if text_in[i-1] = '%' then*/
            // SubProg to_number pc: 433 op: MINUS (10)
            _1439 = _i_3108 - 1;
            // SubProg to_number pc: 437 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_text_in_3090);
            _1440 = (object)*(((s1_ptr)_2)->base + _1439);
            // SubProg to_number pc: 441 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _1440, 37)){
                _1440 = NOVALUE;
                goto LF; // [441] 456
            }
            _1440 = NOVALUE;
            // SubProg to_number pc: 445 op: STARTLINE (58)

            /** convert.e:687							lPercent *= 10 -- Yes ten not one hundred.*/
            // SubProg to_number pc: 447 op: MULTIPLY (13)
            _lPercent_3101 = _lPercent_3101 * 10;
            // SubProg to_number pc: 453 op: ELSE (23)
            goto L5; // [453] 654
            // SubProg to_number pc: 455 op: NOP1 (159)
LF: // addr: 456 pc: 455 sub: 3088 op: 159
            // SubProg to_number pc: 456 op: STARTLINE (58)

            /** convert.e:689							lBadPos = i*/
            // SubProg to_number pc: 458 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 461 op: NOP1 (159)
            // SubProg to_number pc: 462 op: NOP1 (159)
            // SubProg to_number pc: 463 op: ELSE (23)
            goto L5; // [463] 654
            // SubProg to_number pc: 465 op: STARTLINE (58)

            /** convert.e:693				case '\t', ' ', #A0 then*/
            // SubProg to_number pc: 467 op: CASE (186)
            case 9:
            // SubProg to_number pc: 469 op: CASE (186)
            case 32:
            // SubProg to_number pc: 471 op: CASE (186)
            case 160:
            // SubProg to_number pc: 473 op: STARTLINE (58)

            /** convert.e:694					if lDigitCount = 0 then*/
            // SubProg to_number pc: 475 op: EQUALS_IFW_I (121)
            if (_lDigitCount_3103 != 0)
            goto L10; // [475] 482
            // SubProg to_number pc: 479 op: ELSE (23)
            goto L5; // [479] 654
            // SubProg to_number pc: 481 op: NOP1 (159)
L10: // addr: 482 pc: 481 sub: 3088 op: 159
            // SubProg to_number pc: 482 op: STARTLINE (58)

            /** convert.e:697						lLastDigit = i*/
            // SubProg to_number pc: 484 op: ASSIGN_I (113)
            _lLastDigit_3105 = _i_3108;
            // SubProg to_number pc: 487 op: NOP1 (159)
            // SubProg to_number pc: 488 op: ELSE (23)
            goto L5; // [488] 654
            // SubProg to_number pc: 490 op: STARTLINE (58)

            /** convert.e:700				case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',*/
            // SubProg to_number pc: 492 op: CASE (186)
            case 48:
            // SubProg to_number pc: 494 op: CASE (186)
            case 49:
            // SubProg to_number pc: 496 op: CASE (186)
            case 50:
            // SubProg to_number pc: 498 op: CASE (186)
            case 51:
            // SubProg to_number pc: 500 op: CASE (186)
            case 52:
            // SubProg to_number pc: 502 op: CASE (186)
            case 53:
            // SubProg to_number pc: 504 op: CASE (186)
            case 54:
            // SubProg to_number pc: 506 op: CASE (186)
            case 55:
            // SubProg to_number pc: 508 op: CASE (186)
            case 56:
            // SubProg to_number pc: 510 op: CASE (186)
            case 57:
            // SubProg to_number pc: 512 op: CASE (186)
            case 65:
            // SubProg to_number pc: 514 op: CASE (186)
            case 66:
            // SubProg to_number pc: 516 op: CASE (186)
            case 67:
            // SubProg to_number pc: 518 op: CASE (186)
            case 68:
            // SubProg to_number pc: 520 op: CASE (186)
            case 69:
            // SubProg to_number pc: 522 op: CASE (186)
            case 70:
            // SubProg to_number pc: 524 op: CASE (186)
            case 97:
            // SubProg to_number pc: 526 op: CASE (186)
            case 98:
            // SubProg to_number pc: 528 op: CASE (186)
            case 99:
            // SubProg to_number pc: 530 op: CASE (186)
            case 100:
            // SubProg to_number pc: 532 op: CASE (186)
            case 101:
            // SubProg to_number pc: 534 op: CASE (186)
            case 102:
            // SubProg to_number pc: 536 op: STARTLINE (58)

            /** convert.e:703		            lCharValue = find(lChar, vDigits) - 1*/
            // SubProg to_number pc: 538 op: FIND_FROM (176)
            _1449 = find_from(_lChar_3106, _16vDigits_3076, 1);
            // SubProg to_number pc: 543 op: MINUS_I (116)
            _lCharValue_3094 = _1449 - 1;
            _1449 = NOVALUE;
            // SubProg to_number pc: 547 op: STARTLINE (58)

            /** convert.e:704		            if lCharValue > 15 then*/
            // SubProg to_number pc: 549 op: GREATER_IFW_I (124)
            if (_lCharValue_3094 <= 15)
            goto L11; // [549] 560
            // SubProg to_number pc: 553 op: STARTLINE (58)

            /** convert.e:705		            	lCharValue -= 6*/
            // SubProg to_number pc: 555 op: MINUS_I (116)
            _lCharValue_3094 = _lCharValue_3094 - 6;
            // SubProg to_number pc: 559 op: NOP1 (159)
L11: // addr: 560 pc: 559 sub: 3088 op: 159
            // SubProg to_number pc: 560 op: STARTLINE (58)

            /** convert.e:708		            if lCharValue >= lBase then*/
            // SubProg to_number pc: 562 op: GREATEREQ_IFW_I (120)
            if (_lCharValue_3094 < _lBase_3100)
            goto L12; // [562] 574
            // SubProg to_number pc: 566 op: STARTLINE (58)

            /** convert.e:709		                lBadPos = i*/
            // SubProg to_number pc: 568 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 571 op: ELSE (23)
            goto L5; // [571] 654
            // SubProg to_number pc: 573 op: NOP1 (159)
L12: // addr: 574 pc: 573 sub: 3088 op: 159
            // SubProg to_number pc: 574 op: STARTLINE (58)

            /** convert.e:711		            elsif lLastDigit != 0 then  -- shouldn't be any more digits*/
            // SubProg to_number pc: 576 op: NOTEQ_IFW_I (122)
            if (_lLastDigit_3105 == 0)
            goto L13; // [576] 588
            // SubProg to_number pc: 580 op: STARTLINE (58)

            /** convert.e:712						lBadPos = i*/
            // SubProg to_number pc: 582 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 585 op: ELSE (23)
            goto L5; // [585] 654
            // SubProg to_number pc: 587 op: NOP1 (159)
L13: // addr: 588 pc: 587 sub: 3088 op: 159
            // SubProg to_number pc: 588 op: STARTLINE (58)

            /** convert.e:714					elsif lDotFound = 1 then*/
            // SubProg to_number pc: 590 op: EQUALS_IFW_I (121)
            if (_lDotFound_3092 != 1)
            goto L14; // [590] 619
            // SubProg to_number pc: 594 op: STARTLINE (58)

            /** convert.e:715						lRightSize *= lBase*/
            // SubProg to_number pc: 596 op: MULTIPLY (13)
            _0 = _lRightSize_3097;
            if (IS_ATOM_INT(_lRightSize_3097)) {
                if (_lRightSize_3097 == (short)_lRightSize_3097 && _lBase_3100 <= INT15 && _lBase_3100 >= -INT15){
                    _lRightSize_3097 = _lRightSize_3097 * _lBase_3100;
                }
                else{
                    _lRightSize_3097 = NewDouble(_lRightSize_3097 * (eudouble)_lBase_3100);
                }
            }
            else {
                _lRightSize_3097 = NewDouble(DBL_PTR(_lRightSize_3097)->dbl * (eudouble)_lBase_3100);
            }
            DeRef(_0);
            // SubProg to_number pc: 600 op: STARTLINE (58)

            /** convert.e:716						lRightValue = (lRightValue * lBase) + lCharValue*/
            // SubProg to_number pc: 602 op: MULTIPLY (13)
            if (IS_ATOM_INT(_lRightValue_3099)) {
                if (_lRightValue_3099 == (short)_lRightValue_3099 && _lBase_3100 <= INT15 && _lBase_3100 >= -INT15){
                    _1457 = _lRightValue_3099 * _lBase_3100;
                }
                else{
                    _1457 = NewDouble(_lRightValue_3099 * (eudouble)_lBase_3100);
                }
            }
            else {
                _1457 = NewDouble(DBL_PTR(_lRightValue_3099)->dbl * (eudouble)_lBase_3100);
            }
            // SubProg to_number pc: 606 op: PLUS (11)
            DeRef(_lRightValue_3099);
            if (IS_ATOM_INT(_1457)) {
                _lRightValue_3099 = _1457 + _lCharValue_3094;
                if ((object)((uintptr_t)_lRightValue_3099 + (uintptr_t)HIGH_BITS) >= 0){
                    _lRightValue_3099 = NewDouble((eudouble)_lRightValue_3099);
                }
            }
            else {
                _lRightValue_3099 = NewDouble(DBL_PTR(_1457)->dbl + (eudouble)_lCharValue_3094);
            }
            DeRef(_1457);
            _1457 = NOVALUE;
            // SubProg to_number pc: 610 op: STARTLINE (58)

            /** convert.e:717						lDigitCount += 1*/
            // SubProg to_number pc: 612 op: PLUS1_I (117)
            _lDigitCount_3103 = _lDigitCount_3103 + 1;
            // SubProg to_number pc: 616 op: ELSE (23)
            goto L5; // [616] 654
            // SubProg to_number pc: 618 op: NOP1 (159)
L14: // addr: 619 pc: 618 sub: 3088 op: 159
            // SubProg to_number pc: 619 op: STARTLINE (58)

            /** convert.e:719						lLeftSize += 1*/
            // SubProg to_number pc: 621 op: PLUS1 (93)
            _0 = _lLeftSize_3096;
            if (IS_ATOM_INT(_lLeftSize_3096)) {
                _lLeftSize_3096 = _lLeftSize_3096 + 1;
                if (_lLeftSize_3096 > MAXINT){
                    _lLeftSize_3096 = NewDouble((eudouble)_lLeftSize_3096);
                }
            }
            else
            _lLeftSize_3096 = binary_op(PLUS, 1, _lLeftSize_3096);
            DeRef(_0);
            // SubProg to_number pc: 625 op: STARTLINE (58)

            /** convert.e:720						lLeftValue = (lLeftValue * lBase) + lCharValue*/
            // SubProg to_number pc: 627 op: MULTIPLY (13)
            if (IS_ATOM_INT(_lLeftValue_3098)) {
                if (_lLeftValue_3098 == (short)_lLeftValue_3098 && _lBase_3100 <= INT15 && _lBase_3100 >= -INT15){
                    _1461 = _lLeftValue_3098 * _lBase_3100;
                }
                else{
                    _1461 = NewDouble(_lLeftValue_3098 * (eudouble)_lBase_3100);
                }
            }
            else {
                _1461 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl * (eudouble)_lBase_3100);
            }
            // SubProg to_number pc: 631 op: PLUS (11)
            DeRef(_lLeftValue_3098);
            if (IS_ATOM_INT(_1461)) {
                _lLeftValue_3098 = _1461 + _lCharValue_3094;
                if ((object)((uintptr_t)_lLeftValue_3098 + (uintptr_t)HIGH_BITS) >= 0){
                    _lLeftValue_3098 = NewDouble((eudouble)_lLeftValue_3098);
                }
            }
            else {
                _lLeftValue_3098 = NewDouble(DBL_PTR(_1461)->dbl + (eudouble)_lCharValue_3094);
            }
            DeRef(_1461);
            _1461 = NOVALUE;
            // SubProg to_number pc: 635 op: STARTLINE (58)

            /** convert.e:721						lDigitCount += 1*/
            // SubProg to_number pc: 637 op: PLUS1_I (117)
            _lDigitCount_3103 = _lDigitCount_3103 + 1;
            // SubProg to_number pc: 641 op: NOP1 (159)
            // SubProg to_number pc: 642 op: ELSE (23)
            goto L5; // [642] 654
            // SubProg to_number pc: 644 op: STARTLINE (58)

            /** convert.e:724				case else*/
            // SubProg to_number pc: 646 op: CASE (186)
            default:
            // SubProg to_number pc: 648 op: STARTLINE (58)

            /** convert.e:725					lBadPos = i*/
            // SubProg to_number pc: 650 op: ASSIGN_I (113)
            _lBadPos_3095 = _i_3108;
            // SubProg to_number pc: 653 op: NOPSWITCH (187)
        ;}L5: // addr: 654 pc: 653 sub: 3088 op: 187
        // SubProg to_number pc: 654 op: STARTLINE (58)

        /** convert.e:729			if lBadPos != 0 then*/
        // SubProg to_number pc: 656 op: NOTEQ_IFW_I (122)
        if (_lBadPos_3095 == 0)
        goto L15; // [656] 665
        // SubProg to_number pc: 660 op: STARTLINE (58)

        /** convert.e:730				exit*/
        // SubProg to_number pc: 662 op: EXIT (61)
        goto L2; // [662] 672
        // SubProg to_number pc: 664 op: NOP1 (159)
L15: // addr: 665 pc: 664 sub: 3088 op: 159
        // SubProg to_number pc: 665 op: STARTLINE (58)

        /** convert.e:732		end for*/
        // SubProg to_number pc: 667 op: ENDFOR_INT_UP1 (54)
        _i_3108 = _i_3108 + 1;
        goto L1; // [667] 77
L2: // addr: 672 pc: 667 sub: 3088 op: 54
        ;
    }
    // SubProg to_number pc: 672 op: STARTLINE (58)

    /** convert.e:736		if lBadPos = 0 and lDigitCount = 0 then*/
    // SubProg to_number pc: 674 op: EQUALS (3)
    _1465 = (_lBadPos_3095 == 0);
    // SubProg to_number pc: 678 op: SC1_AND_IF (146)
    if (_1465 == 0) {
        goto L16; // [678] 696
    }
    // SubProg to_number pc: 682 op: EQUALS (3)
    _1467 = (_lDigitCount_3103 == 0);
    // SubProg to_number pc: 686 op: NOP1 (159)
    // SubProg to_number pc: 687 op: IF (20)
    if (_1467 == 0)
    {
        DeRef(_1467);
        _1467 = NOVALUE;
        goto L16; // [687] 696
    }
    else{
        DeRef(_1467);
        _1467 = NOVALUE;
    }
    // SubProg to_number pc: 690 op: STARTLINE (58)

    /** convert.e:737			lBadPos = 1*/
    // SubProg to_number pc: 692 op: ASSIGN_I (113)
    _lBadPos_3095 = 1;
    // SubProg to_number pc: 695 op: NOP1 (159)
L16: // addr: 696 pc: 695 sub: 3088 op: 159
    // SubProg to_number pc: 696 op: STARTLINE (58)

    /** convert.e:740		if return_bad_pos = 0 and lBadPos != 0 then*/
    // SubProg to_number pc: 698 op: EQUALS (3)
    _1468 = (_return_bad_pos_3091 == 0);
    // SubProg to_number pc: 702 op: SC1_AND_IF (146)
    if (_1468 == 0) {
        goto L17; // [702] 721
    }
    // SubProg to_number pc: 706 op: NOTEQ (4)
    _1470 = (_lBadPos_3095 != 0);
    // SubProg to_number pc: 710 op: NOP1 (159)
    // SubProg to_number pc: 711 op: IF (20)
    if (_1470 == 0)
    {
        DeRef(_1470);
        _1470 = NOVALUE;
        goto L17; // [711] 721
    }
    else{
        DeRef(_1470);
        _1470 = NOVALUE;
    }
    // SubProg to_number pc: 714 op: STARTLINE (58)

    /** convert.e:741			return 0*/
    // SubProg to_number pc: 716 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3090
    DeRefDS(_text_in_3090);

// block var return_bad_pos_3091

// block var lDotFound_3092

// block var lSignFound_3093

// block var lCharValue_3094

// block var lBadPos_3095

// block var lLeftSize_3096
    DeRef(_lLeftSize_3096);

// block var lRightSize_3097
    DeRef(_lRightSize_3097);

// block var lLeftValue_3098
    DeRef(_lLeftValue_3098);

// block var lRightValue_3099
    DeRef(_lRightValue_3099);

// block var lBase_3100

// block var lPercent_3101

// block var lResult_3102
    DeRef(_lResult_3102);

// block var lDigitCount_3103

// block var lCurrencyFound_3104

// block var lLastDigit_3105

// block var lChar_3106
    DeRef(_1424);
    _1424 = NOVALUE;
    DeRef(_1432);
    _1432 = NOVALUE;
    DeRef(_1465);
    _1465 = NOVALUE;
    DeRef(_1439);
    _1439 = NOVALUE;
    DeRef(_1468);
    _1468 = NOVALUE;
    DeRef(_1418);
    _1418 = NOVALUE;
    DeRef(_1421);
    _1421 = NOVALUE;
    return 0;
    // SubProg to_number pc: 720 op: NOP1 (159)
L17: // addr: 721 pc: 720 sub: 3088 op: 159
    // SubProg to_number pc: 721 op: STARTLINE (58)

    /** convert.e:744		if lRightValue = 0 then*/
    // SubProg to_number pc: 723 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _lRightValue_3099, 0)){
        goto L18; // [723] 751
    }
    // SubProg to_number pc: 727 op: STARTLINE (58)

    /** convert.e:746		    if lPercent != 1 then*/
    // SubProg to_number pc: 729 op: NOTEQ_IFW_I (122)
    if (_lPercent_3101 == 1)
    goto L19; // [729] 742
    // SubProg to_number pc: 733 op: STARTLINE (58)

    /** convert.e:747				lResult = (lLeftValue / lPercent)*/
    // SubProg to_number pc: 735 op: DIVIDE (14)
    DeRef(_lResult_3102);
    if (IS_ATOM_INT(_lLeftValue_3098)) {
        _lResult_3102 = (_lLeftValue_3098 % _lPercent_3101) ? NewDouble((eudouble)_lLeftValue_3098 / _lPercent_3101) : (_lLeftValue_3098 / _lPercent_3101);
    }
    else {
        _lResult_3102 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl / (eudouble)_lPercent_3101);
    }
    // SubProg to_number pc: 739 op: ELSE (23)
    goto L1A; // [739] 786
    // SubProg to_number pc: 741 op: NOP1 (159)
L19: // addr: 742 pc: 741 sub: 3088 op: 159
    // SubProg to_number pc: 742 op: STARTLINE (58)

    /** convert.e:749		        lResult = lLeftValue*/
    // SubProg to_number pc: 744 op: ASSIGN (18)
    Ref(_lLeftValue_3098);
    DeRef(_lResult_3102);
    _lResult_3102 = _lLeftValue_3098;
    // SubProg to_number pc: 747 op: NOP1 (159)
    // SubProg to_number pc: 748 op: ELSE (23)
    goto L1A; // [748] 786
    // SubProg to_number pc: 750 op: NOP1 (159)
L18: // addr: 751 pc: 750 sub: 3088 op: 159
    // SubProg to_number pc: 751 op: STARTLINE (58)

    /** convert.e:752		    if lPercent != 1 then*/
    // SubProg to_number pc: 753 op: NOTEQ_IFW_I (122)
    if (_lPercent_3101 == 1)
    goto L1B; // [753] 774
    // SubProg to_number pc: 757 op: STARTLINE (58)

    /** convert.e:753		        lResult = (lLeftValue  + (lRightValue / (lRightSize))) / lPercent*/
    // SubProg to_number pc: 759 op: DIVIDE (14)
    if (IS_ATOM_INT(_lRightValue_3099) && IS_ATOM_INT(_lRightSize_3097)) {
        _1475 = (_lRightValue_3099 % _lRightSize_3097) ? NewDouble((eudouble)_lRightValue_3099 / _lRightSize_3097) : (_lRightValue_3099 / _lRightSize_3097);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_3099)) {
            _1475 = NewDouble((eudouble)_lRightValue_3099 / DBL_PTR(_lRightSize_3097)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_3097)) {
                _1475 = NewDouble(DBL_PTR(_lRightValue_3099)->dbl / (eudouble)_lRightSize_3097);
            }
            else
            _1475 = NewDouble(DBL_PTR(_lRightValue_3099)->dbl / DBL_PTR(_lRightSize_3097)->dbl);
        }
    }
    // SubProg to_number pc: 763 op: PLUS (11)
    if (IS_ATOM_INT(_lLeftValue_3098) && IS_ATOM_INT(_1475)) {
        _1476 = _lLeftValue_3098 + _1475;
        if ((object)((uintptr_t)_1476 + (uintptr_t)HIGH_BITS) >= 0){
            _1476 = NewDouble((eudouble)_1476);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_3098)) {
            _1476 = NewDouble((eudouble)_lLeftValue_3098 + DBL_PTR(_1475)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1475)) {
                _1476 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl + (eudouble)_1475);
            }
            else
            _1476 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl + DBL_PTR(_1475)->dbl);
        }
    }
    DeRef(_1475);
    _1475 = NOVALUE;
    // SubProg to_number pc: 767 op: DIVIDE (14)
    DeRef(_lResult_3102);
    if (IS_ATOM_INT(_1476)) {
        _lResult_3102 = (_1476 % _lPercent_3101) ? NewDouble((eudouble)_1476 / _lPercent_3101) : (_1476 / _lPercent_3101);
    }
    else {
        _lResult_3102 = NewDouble(DBL_PTR(_1476)->dbl / (eudouble)_lPercent_3101);
    }
    DeRef(_1476);
    _1476 = NOVALUE;
    // SubProg to_number pc: 771 op: ELSE (23)
    goto L1C; // [771] 785
    // SubProg to_number pc: 773 op: NOP1 (159)
L1B: // addr: 774 pc: 773 sub: 3088 op: 159
    // SubProg to_number pc: 774 op: STARTLINE (58)

    /** convert.e:755		        lResult = lLeftValue + (lRightValue / lRightSize)*/
    // SubProg to_number pc: 776 op: DIVIDE (14)
    if (IS_ATOM_INT(_lRightValue_3099) && IS_ATOM_INT(_lRightSize_3097)) {
        _1478 = (_lRightValue_3099 % _lRightSize_3097) ? NewDouble((eudouble)_lRightValue_3099 / _lRightSize_3097) : (_lRightValue_3099 / _lRightSize_3097);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_3099)) {
            _1478 = NewDouble((eudouble)_lRightValue_3099 / DBL_PTR(_lRightSize_3097)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_3097)) {
                _1478 = NewDouble(DBL_PTR(_lRightValue_3099)->dbl / (eudouble)_lRightSize_3097);
            }
            else
            _1478 = NewDouble(DBL_PTR(_lRightValue_3099)->dbl / DBL_PTR(_lRightSize_3097)->dbl);
        }
    }
    // SubProg to_number pc: 780 op: PLUS (11)
    DeRef(_lResult_3102);
    if (IS_ATOM_INT(_lLeftValue_3098) && IS_ATOM_INT(_1478)) {
        _lResult_3102 = _lLeftValue_3098 + _1478;
        if ((object)((uintptr_t)_lResult_3102 + (uintptr_t)HIGH_BITS) >= 0){
            _lResult_3102 = NewDouble((eudouble)_lResult_3102);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_3098)) {
            _lResult_3102 = NewDouble((eudouble)_lLeftValue_3098 + DBL_PTR(_1478)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1478)) {
                _lResult_3102 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl + (eudouble)_1478);
            }
            else
            _lResult_3102 = NewDouble(DBL_PTR(_lLeftValue_3098)->dbl + DBL_PTR(_1478)->dbl);
        }
    }
    DeRef(_1478);
    _1478 = NOVALUE;
    // SubProg to_number pc: 784 op: NOP1 (159)
L1C: // addr: 785 pc: 784 sub: 3088 op: 159
    // SubProg to_number pc: 785 op: NOP1 (159)
L1A: // addr: 786 pc: 785 sub: 3088 op: 159
    // SubProg to_number pc: 786 op: STARTLINE (58)

    /** convert.e:759		if lSignFound < 0 then*/
    // SubProg to_number pc: 788 op: LESS_IFW_I (119)
    if (_lSignFound_3093 >= 0)
    goto L1D; // [788] 800
    // SubProg to_number pc: 792 op: STARTLINE (58)

    /** convert.e:760			lResult = -lResult*/
    // SubProg to_number pc: 794 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 796 op: UMINUS (12)
    _0 = _lResult_3102;
    if (IS_ATOM_INT(_lResult_3102)) {
        if ((uintptr_t)_lResult_3102 == (uintptr_t)HIGH_BITS){
            _lResult_3102 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _lResult_3102 = - _lResult_3102;
        }
    }
    else {
        _lResult_3102 = unary_op(UMINUS, _lResult_3102);
    }
    DeRef(_0);
    // SubProg to_number pc: 799 op: NOP1 (159)
L1D: // addr: 800 pc: 799 sub: 3088 op: 159
    // SubProg to_number pc: 800 op: STARTLINE (58)

    /** convert.e:763		if return_bad_pos = 0 then*/
    // SubProg to_number pc: 802 op: EQUALS_IFW_I (121)
    if (_return_bad_pos_3091 != 0)
    goto L1E; // [802] 815
    // SubProg to_number pc: 806 op: STARTLINE (58)

    /** convert.e:764			return lResult*/
    // SubProg to_number pc: 808 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 810 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3090
    DeRefDS(_text_in_3090);

// block var return_bad_pos_3091

// block var lDotFound_3092

// block var lSignFound_3093

// block var lCharValue_3094

// block var lBadPos_3095

// block var lLeftSize_3096
    DeRef(_lLeftSize_3096);

// block var lRightSize_3097
    DeRef(_lRightSize_3097);

// block var lLeftValue_3098
    DeRef(_lLeftValue_3098);

// block var lRightValue_3099
    DeRef(_lRightValue_3099);

// block var lBase_3100

// block var lPercent_3101

// block var lDigitCount_3103

// block var lCurrencyFound_3104

// block var lLastDigit_3105

// block var lChar_3106
    DeRef(_1424);
    _1424 = NOVALUE;
    DeRef(_1432);
    _1432 = NOVALUE;
    DeRef(_1465);
    _1465 = NOVALUE;
    DeRef(_1439);
    _1439 = NOVALUE;
    DeRef(_1468);
    _1468 = NOVALUE;
    DeRef(_1418);
    _1418 = NOVALUE;
    DeRef(_1421);
    _1421 = NOVALUE;
    return _lResult_3102;
    // SubProg to_number pc: 814 op: NOP1 (159)
L1E: // addr: 815 pc: 814 sub: 3088 op: 159
    // SubProg to_number pc: 815 op: STARTLINE (58)

    /** convert.e:767		if return_bad_pos = -1 then*/
    // SubProg to_number pc: 817 op: EQUALS_IFW_I (121)
    if (_return_bad_pos_3091 != -1)
    goto L1F; // [817] 850
    // SubProg to_number pc: 821 op: STARTLINE (58)

    /** convert.e:768			if lBadPos = 0 then*/
    // SubProg to_number pc: 823 op: EQUALS_IFW_I (121)
    if (_lBadPos_3095 != 0)
    goto L20; // [823] 838
    // SubProg to_number pc: 827 op: STARTLINE (58)

    /** convert.e:769				return lResult*/
    // SubProg to_number pc: 829 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 831 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3090
    DeRefDS(_text_in_3090);

// block var return_bad_pos_3091

// block var lDotFound_3092

// block var lSignFound_3093

// block var lCharValue_3094

// block var lBadPos_3095

// block var lLeftSize_3096
    DeRef(_lLeftSize_3096);

// block var lRightSize_3097
    DeRef(_lRightSize_3097);

// block var lLeftValue_3098
    DeRef(_lLeftValue_3098);

// block var lRightValue_3099
    DeRef(_lRightValue_3099);

// block var lBase_3100

// block var lPercent_3101

// block var lDigitCount_3103

// block var lCurrencyFound_3104

// block var lLastDigit_3105

// block var lChar_3106
    DeRef(_1424);
    _1424 = NOVALUE;
    DeRef(_1432);
    _1432 = NOVALUE;
    DeRef(_1465);
    _1465 = NOVALUE;
    DeRef(_1439);
    _1439 = NOVALUE;
    DeRef(_1468);
    _1468 = NOVALUE;
    DeRef(_1418);
    _1418 = NOVALUE;
    DeRef(_1421);
    _1421 = NOVALUE;
    return _lResult_3102;
    // SubProg to_number pc: 835 op: ELSE (23)
    goto L21; // [835] 849
    // SubProg to_number pc: 837 op: NOP1 (159)
L20: // addr: 838 pc: 837 sub: 3088 op: 159
    // SubProg to_number pc: 838 op: STARTLINE (58)

    /** convert.e:771				return {lBadPos}	*/
    // SubProg to_number pc: 840 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _lBadPos_3095;
    _1485 = MAKE_SEQ(_1);
    // SubProg to_number pc: 844 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3090
    DeRefDS(_text_in_3090);

// block var return_bad_pos_3091

// block var lDotFound_3092

// block var lSignFound_3093

// block var lCharValue_3094

// block var lBadPos_3095

// block var lLeftSize_3096
    DeRef(_lLeftSize_3096);

// block var lRightSize_3097
    DeRef(_lRightSize_3097);

// block var lLeftValue_3098
    DeRef(_lLeftValue_3098);

// block var lRightValue_3099
    DeRef(_lRightValue_3099);

// block var lBase_3100

// block var lPercent_3101

// block var lResult_3102
    DeRef(_lResult_3102);

// block var lDigitCount_3103

// block var lCurrencyFound_3104

// block var lLastDigit_3105

// block var lChar_3106
    DeRef(_1424);
    _1424 = NOVALUE;
    DeRef(_1432);
    _1432 = NOVALUE;
    DeRef(_1465);
    _1465 = NOVALUE;
    DeRef(_1439);
    _1439 = NOVALUE;
    DeRef(_1468);
    _1468 = NOVALUE;
    DeRef(_1418);
    _1418 = NOVALUE;
    DeRef(_1421);
    _1421 = NOVALUE;
    return _1485;
    // SubProg to_number pc: 848 op: NOP1 (159)
L21: // addr: 849 pc: 848 sub: 3088 op: 159
    // SubProg to_number pc: 849 op: NOP1 (159)
L1F: // addr: 850 pc: 849 sub: 3088 op: 159
    // SubProg to_number pc: 850 op: STARTLINE (58)

    /** convert.e:775		return {lResult, lBadPos}*/
    // SubProg to_number pc: 852 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 854 op: RIGHT_BRACE_2 (85)
    Ref(_lResult_3102);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lResult_3102;
    ((intptr_t *)_2)[2] = _lBadPos_3095;
    _1486 = MAKE_SEQ(_1);
    // SubProg to_number pc: 858 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3090
    DeRefDS(_text_in_3090);

// block var return_bad_pos_3091

// block var lDotFound_3092

// block var lSignFound_3093

// block var lCharValue_3094

// block var lBadPos_3095

// block var lLeftSize_3096
    DeRef(_lLeftSize_3096);

// block var lRightSize_3097
    DeRef(_lRightSize_3097);

// block var lLeftValue_3098
    DeRef(_lLeftValue_3098);

// block var lRightValue_3099
    DeRef(_lRightValue_3099);

// block var lBase_3100

// block var lPercent_3101

// block var lResult_3102
    DeRef(_lResult_3102);

// block var lDigitCount_3103

// block var lCurrencyFound_3104

// block var lLastDigit_3105

// block var lChar_3106
    DeRef(_1424);
    _1424 = NOVALUE;
    DeRef(_1432);
    _1432 = NOVALUE;
    DeRef(_1465);
    _1465 = NOVALUE;
    DeRef(_1439);
    _1439 = NOVALUE;
    DeRef(_1468);
    _1468 = NOVALUE;
    DeRef(_1418);
    _1418 = NOVALUE;
    DeRef(_1421);
    _1421 = NOVALUE;
    DeRef(_1485);
    _1485 = NOVALUE;
    return _1486;
    // SubProg to_number pc: 862 op: BADRETURNF (43)
    ;
}



// 0x643EC42B
