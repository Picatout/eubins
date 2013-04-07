// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _21int_to_bytes(object _x_2925, object _size_2926)
{
    object _1333 = NOVALUE; // 2935 1333
    object _1332 = NOVALUE; // 2934 1332
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
        if (IS_ATOM_INT(_21mem_2921)){
            poke_addr = (uint8_t *)_21mem_2921;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_21mem_2921)->dbl);
        }
        if (IS_ATOM_INT(_x_2925)) {
            *poke_addr = (uint8_t)_x_2925;
        }
        else {
            *poke_addr = (uint8_t)DBL_PTR(_x_2925)->dbl;
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
        if (IS_ATOM_INT(_21mem_2921)){
            poke2_addr = (uint16_t *)_21mem_2921;
        }
        else {
            poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_21mem_2921)->dbl);
        }
        if (IS_ATOM_INT(_x_2925)) {
            *poke2_addr = (uint16_t)_x_2925;
        }
        else {
            *poke2_addr = (uint16_t)DBL_PTR(_x_2925)->dbl;
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
        if (IS_ATOM_INT(_21mem_2921)){
            poke4_addr = (uint32_t *)_21mem_2921;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_21mem_2921)->dbl);
        }
        if (IS_ATOM_INT(_x_2925)) {
            *poke4_addr = (uint32_t)_x_2925;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_2925)->dbl;
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
        if (IS_ATOM_INT(_21mem_2921)){
            poke8_addr = (uint64_t *)_21mem_2921;
        }
        else {
            poke8_addr = (uint64_t *)(uintptr_t)(DBL_PTR(_21mem_2921)->dbl);
        }
        if (IS_ATOM_INT(_x_2925)) {
            *poke8_addr = (uint64_t)_x_2925;
        }
        else {
            *poke8_addr = (uint64_t)DBL_PTR(_x_2925)->dbl;
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

// block var x_2925
        DeRef(_x_2925);

// block var size_2926
        return _5;
        // SubProg int_to_bytes pc: 72 op: NOPSWITCH (187)
    ;}L1: // addr: 73 pc: 72 sub: 2923 op: 187
    // SubProg int_to_bytes pc: 73 op: STARTLINE (58)

    /** convert.e:80		return peek( mem & size )*/
    // SubProg int_to_bytes pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg int_to_bytes pc: 77 op: CONCAT (15)
    Concat((object_ptr)&_1332, _21mem_2921, _size_2926);
    // SubProg int_to_bytes pc: 81 op: PEEK (127)
    _1 = (object)SEQ_PTR(_1332);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _1333 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_1332);
    _1332 = NOVALUE;
    // SubProg int_to_bytes pc: 84 op: RETURNF (28)

// Exiting block BLOCK: int_to_bytes

// block var x_2925
    DeRef(_x_2925);

// block var size_2926
    return _1333;
    // SubProg int_to_bytes pc: 88 op: BADRETURNF (43)
    ;
}


object _21int_to_bits(object _x_2964, object _nbits_2965)
{
    object _bits_2966 = NOVALUE;
    object _mask_2967 = NOVALUE;
// skipping _1360  name type: 0
    object _1359 = NOVALUE; // 2987 1359
    object _1358 = NOVALUE; // 2986 1358
// skipping _1357  name type: 0
    object _1356 = NOVALUE; // 2982 1356
// skipping _1355  name type: 0
// skipping _1354  name type: 0
    object _1353 = NOVALUE; // 2977 1353
    object _1352 = NOVALUE; // 2976 1352
    object _1351 = NOVALUE; // 2975 1351
// skipping _1350  name type: 0
// skipping _1349  name type: 0
// skipping _1348  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg int_to_bits pc: 1 op: INTEGER_CHECK (96)
    // SubProg int_to_bits pc: 3 op: STARTLINE (58)

    /** convert.e:167		if nbits < 1 then*/
    // SubProg int_to_bits pc: 5 op: LESS_IFW_I (119)
    if (_nbits_2965 >= 1)
    goto L1; // [5] 16
    // SubProg int_to_bits pc: 9 op: STARTLINE (58)

    /** convert.e:168			return {}*/
    // SubProg int_to_bits pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: int_to_bits

// block var x_2964
    DeRef(_x_2964);

// block var nbits_2965

// block var bits_2966
    DeRef(_bits_2966);

// block var mask_2967
    DeRef(_mask_2967);
    return _5;
    // SubProg int_to_bits pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 2962 op: 159
    // SubProg int_to_bits pc: 16 op: STARTLINE (58)

    /** convert.e:170		bits = repeat(0, nbits)*/
    // SubProg int_to_bits pc: 18 op: REPEAT (32)
    DeRef(_bits_2966);
    _bits_2966 = Repeat(0, _nbits_2965);
    // SubProg int_to_bits pc: 22 op: STARTLINE (58)

    /** convert.e:171		if nbits <= 32 then*/
    // SubProg int_to_bits pc: 24 op: LESSEQ_IFW_I (123)
    if (_nbits_2965 > 32)
    goto L2; // [24] 75
    // SubProg int_to_bits pc: 28 op: STARTLINE (58)

    /** convert.e:173			mask = 1*/
    // SubProg int_to_bits pc: 30 op: ASSIGN (18)
    DeRef(_mask_2967);
    _mask_2967 = 1;
    // SubProg int_to_bits pc: 33 op: STARTLINE (58)

    /** convert.e:174			for i = 1 to nbits do*/
    // SubProg int_to_bits pc: 35 op: ASSIGN (18)
    _1351 = _nbits_2965;
    // SubProg int_to_bits pc: 38 op: FOR_I (125)
    {
        object _i_2974;
        _i_2974 = 1;
L3: // addr: 45 pc: 38 sub: 2962 op: 125
        if (_i_2974 > _1351){
            goto L4; // [38] 72
        }
        // SubProg int_to_bits pc: 45 op: STARTLINE (58)

        /** convert.e:175				bits[i] = and_bits(x, mask) and 1*/
        // SubProg int_to_bits pc: 47 op: AND_BITS (56)
        if (IS_ATOM_INT(_x_2964) && IS_ATOM_INT(_mask_2967)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_x_2964 & (uintptr_t)_mask_2967;
                 _1352 = MAKE_UINT(tu);
            }
        }
        else {
            if (IS_ATOM_INT(_x_2964)) {
                temp_d.dbl = (eudouble)_x_2964;
                _1352 = Dand_bits(&temp_d, DBL_PTR(_mask_2967));
            }
            else {
                if (IS_ATOM_INT(_mask_2967)) {
                    temp_d.dbl = (eudouble)_mask_2967;
                    _1352 = Dand_bits(DBL_PTR(_x_2964), &temp_d);
                }
                else
                _1352 = Dand_bits(DBL_PTR(_x_2964), DBL_PTR(_mask_2967));
            }
        }
        // SubProg int_to_bits pc: 51 op: AND (8)
        if (IS_ATOM_INT(_1352)) {
            _1353 = (_1352 != 0 && 1 != 0);
        }
        else {
            temp_d.dbl = (eudouble)1;
            _1353 = Dand(DBL_PTR(_1352), &temp_d);
        }
        DeRef(_1352);
        _1352 = NOVALUE;
        // SubProg int_to_bits pc: 55 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_bits_2966);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2966 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2974);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1353;
        if( _1 != _1353 ){
            DeRef(_1);
        }
        _1353 = NOVALUE;
        // SubProg int_to_bits pc: 59 op: STARTLINE (58)

        /** convert.e:176				mask *= 2*/
        // SubProg int_to_bits pc: 61 op: PLUS (11)
        _0 = _mask_2967;
        if (IS_ATOM_INT(_mask_2967) && IS_ATOM_INT(_mask_2967)) {
            _mask_2967 = _mask_2967 + _mask_2967;
            if ((object)((uintptr_t)_mask_2967 + (uintptr_t)HIGH_BITS) >= 0){
                _mask_2967 = NewDouble((eudouble)_mask_2967);
            }
        }
        else {
            if (IS_ATOM_INT(_mask_2967)) {
                _mask_2967 = NewDouble((eudouble)_mask_2967 + DBL_PTR(_mask_2967)->dbl);
            }
            else {
                if (IS_ATOM_INT(_mask_2967)) {
                    _mask_2967 = NewDouble(DBL_PTR(_mask_2967)->dbl + (eudouble)_mask_2967);
                }
                else
                _mask_2967 = NewDouble(DBL_PTR(_mask_2967)->dbl + DBL_PTR(_mask_2967)->dbl);
            }
        }
        DeRef(_0);
        // SubProg int_to_bits pc: 65 op: STARTLINE (58)

        /** convert.e:177			end for*/
        // SubProg int_to_bits pc: 67 op: ENDFOR_INT_UP1 (54)
        _i_2974 = _i_2974 + 1;
        goto L3; // [67] 45
L4: // addr: 72 pc: 67 sub: 2962 op: 54
        ;
    }
    // SubProg int_to_bits pc: 72 op: ELSE (23)
    goto L5; // [72] 128
    // SubProg int_to_bits pc: 74 op: NOP1 (159)
L2: // addr: 75 pc: 74 sub: 2962 op: 159
    // SubProg int_to_bits pc: 75 op: STARTLINE (58)

    /** convert.e:180			if x < 0 then*/
    // SubProg int_to_bits pc: 77 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _x_2964, 0)){
        goto L6; // [77] 92
    }
    // SubProg int_to_bits pc: 81 op: STARTLINE (58)

    /** convert.e:181				x += power(2, nbits) -- for 2's complement bit pattern*/
    // SubProg int_to_bits pc: 83 op: POWER (72)
    _1356 = power(2, _nbits_2965);
    // SubProg int_to_bits pc: 87 op: PLUS (11)
    _0 = _x_2964;
    if (IS_ATOM_INT(_x_2964) && IS_ATOM_INT(_1356)) {
        _x_2964 = _x_2964 + _1356;
        if ((object)((uintptr_t)_x_2964 + (uintptr_t)HIGH_BITS) >= 0){
            _x_2964 = NewDouble((eudouble)_x_2964);
        }
    }
    else {
        if (IS_ATOM_INT(_x_2964)) {
            _x_2964 = NewDouble((eudouble)_x_2964 + DBL_PTR(_1356)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1356)) {
                _x_2964 = NewDouble(DBL_PTR(_x_2964)->dbl + (eudouble)_1356);
            }
            else
            _x_2964 = NewDouble(DBL_PTR(_x_2964)->dbl + DBL_PTR(_1356)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_1356);
    _1356 = NOVALUE;
    // SubProg int_to_bits pc: 91 op: NOP1 (159)
L6: // addr: 92 pc: 91 sub: 2962 op: 159
    // SubProg int_to_bits pc: 92 op: STARTLINE (58)

    /** convert.e:183			for i = 1 to nbits do*/
    // SubProg int_to_bits pc: 94 op: ASSIGN (18)
    _1358 = _nbits_2965;
    // SubProg int_to_bits pc: 97 op: FOR_I (125)
    {
        object _i_2985;
        _i_2985 = 1;
L7: // addr: 104 pc: 97 sub: 2962 op: 125
        if (_i_2985 > _1358){
            goto L8; // [97] 127
        }
        // SubProg int_to_bits pc: 104 op: STARTLINE (58)

        /** convert.e:184				bits[i] = remainder(x, 2)*/
        // SubProg int_to_bits pc: 106 op: REMAINDER (71)
        if (IS_ATOM_INT(_x_2964)) {
            _1359 = (_x_2964 % 2);
        }
        else {
            temp_d.dbl = (eudouble)2;
            _1359 = Dremainder(DBL_PTR(_x_2964), &temp_d);
        }
        // SubProg int_to_bits pc: 110 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_bits_2966);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2966 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2985);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1359;
        if( _1 != _1359 ){
            DeRef(_1);
        }
        _1359 = NOVALUE;
        // SubProg int_to_bits pc: 114 op: STARTLINE (58)

        /** convert.e:185				x = floor(x / 2)*/
        // SubProg int_to_bits pc: 116 op: FLOOR_DIV2 (66)
        _0 = _x_2964;
        if (IS_ATOM_INT(_x_2964)) {
            _x_2964 = _x_2964 >> 1;
        }
        else {
            _1 = binary_op(DIVIDE, _x_2964, 2);
            _x_2964 = unary_op(FLOOR, _1);
            DeRef(_1);
        }
        DeRef(_0);
        // SubProg int_to_bits pc: 120 op: STARTLINE (58)

        /** convert.e:186			end for*/
        // SubProg int_to_bits pc: 122 op: ENDFOR_INT_UP1 (54)
        _i_2985 = _i_2985 + 1;
        goto L7; // [122] 104
L8: // addr: 127 pc: 122 sub: 2962 op: 54
        ;
    }
    // SubProg int_to_bits pc: 127 op: NOP1 (159)
L5: // addr: 128 pc: 127 sub: 2962 op: 159
    // SubProg int_to_bits pc: 128 op: STARTLINE (58)

    /** convert.e:188		return bits*/
    // SubProg int_to_bits pc: 130 op: RETURNF (28)

// Exiting block BLOCK: int_to_bits

// block var x_2964
    DeRef(_x_2964);

// block var nbits_2965

// block var mask_2967
    DeRef(_mask_2967);
    return _bits_2966;
    // SubProg int_to_bits pc: 134 op: BADRETURNF (43)
    ;
}


object _21bits_to_int(object _bits_2991)
{
    object _value_2992 = NOVALUE;
    object _p_2993 = NOVALUE;
// skipping _1364  name type: 0
// skipping _1363  name type: 0
    object _1362 = NOVALUE; // 2998 1362
    object _1361 = NOVALUE; // 2996 1361
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bits_to_int pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_int pc: 3 op: STARTLINE (58)

    /** convert.e:225		value = 0*/
    // SubProg bits_to_int pc: 5 op: ASSIGN (18)
    DeRef(_value_2992);
    _value_2992 = 0;
    // SubProg bits_to_int pc: 8 op: STARTLINE (58)

    /** convert.e:226		p = 1*/
    // SubProg bits_to_int pc: 10 op: ASSIGN (18)
    DeRef(_p_2993);
    _p_2993 = 1;
    // SubProg bits_to_int pc: 13 op: STARTLINE (58)

    /** convert.e:227		for i = 1 to length(bits) do*/
    // SubProg bits_to_int pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_2991)){
            _1361 = SEQ_PTR(_bits_2991)->length;
    }
    else {
        _1361 = 1;
    }
    // SubProg bits_to_int pc: 18 op: FOR_I (125)
    {
        object _i_2995;
        _i_2995 = 1;
L1: // addr: 25 pc: 18 sub: 2989 op: 125
        if (_i_2995 > _1361){
            goto L2; // [18] 54
        }
        // SubProg bits_to_int pc: 25 op: STARTLINE (58)

        /** convert.e:228			if bits[i] then*/
        // SubProg bits_to_int pc: 27 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_bits_2991);
        _1362 = (object)*(((s1_ptr)_2)->base + _i_2995);
        // SubProg bits_to_int pc: 31 op: IF (20)
        if (_1362 == 0) {
            _1362 = NOVALUE;
            goto L3; // [31] 41
        }
        else {
            if (!IS_ATOM_INT(_1362) && DBL_PTR(_1362)->dbl == 0.0){
                _1362 = NOVALUE;
                goto L3; // [31] 41
            }
            _1362 = NOVALUE;
        }
        _1362 = NOVALUE;
        // SubProg bits_to_int pc: 34 op: STARTLINE (58)

        /** convert.e:229				value += p*/
        // SubProg bits_to_int pc: 36 op: PLUS (11)
        _0 = _value_2992;
        if (IS_ATOM_INT(_value_2992) && IS_ATOM_INT(_p_2993)) {
            _value_2992 = _value_2992 + _p_2993;
            if ((object)((uintptr_t)_value_2992 + (uintptr_t)HIGH_BITS) >= 0){
                _value_2992 = NewDouble((eudouble)_value_2992);
            }
        }
        else {
            if (IS_ATOM_INT(_value_2992)) {
                _value_2992 = NewDouble((eudouble)_value_2992 + DBL_PTR(_p_2993)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2993)) {
                    _value_2992 = NewDouble(DBL_PTR(_value_2992)->dbl + (eudouble)_p_2993);
                }
                else
                _value_2992 = NewDouble(DBL_PTR(_value_2992)->dbl + DBL_PTR(_p_2993)->dbl);
            }
        }
        DeRef(_0);
        // SubProg bits_to_int pc: 40 op: NOP1 (159)
L3: // addr: 41 pc: 40 sub: 2989 op: 159
        // SubProg bits_to_int pc: 41 op: STARTLINE (58)

        /** convert.e:231			p += p*/
        // SubProg bits_to_int pc: 43 op: PLUS (11)
        _0 = _p_2993;
        if (IS_ATOM_INT(_p_2993) && IS_ATOM_INT(_p_2993)) {
            _p_2993 = _p_2993 + _p_2993;
            if ((object)((uintptr_t)_p_2993 + (uintptr_t)HIGH_BITS) >= 0){
                _p_2993 = NewDouble((eudouble)_p_2993);
            }
        }
        else {
            if (IS_ATOM_INT(_p_2993)) {
                _p_2993 = NewDouble((eudouble)_p_2993 + DBL_PTR(_p_2993)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2993)) {
                    _p_2993 = NewDouble(DBL_PTR(_p_2993)->dbl + (eudouble)_p_2993);
                }
                else
                _p_2993 = NewDouble(DBL_PTR(_p_2993)->dbl + DBL_PTR(_p_2993)->dbl);
            }
        }
        DeRef(_0);
        // SubProg bits_to_int pc: 47 op: STARTLINE (58)

        /** convert.e:232		end for*/
        // SubProg bits_to_int pc: 49 op: ENDFOR_INT_UP1 (54)
        _i_2995 = _i_2995 + 1;
        goto L1; // [49] 25
L2: // addr: 54 pc: 49 sub: 2989 op: 54
        ;
    }
    // SubProg bits_to_int pc: 54 op: STARTLINE (58)

    /** convert.e:233		return value*/
    // SubProg bits_to_int pc: 56 op: RETURNF (28)

// Exiting block BLOCK: bits_to_int

// block var bits_2991
    DeRefDS(_bits_2991);

// block var p_2993
    DeRef(_p_2993);
    return _value_2992;
    // SubProg bits_to_int pc: 60 op: BADRETURNF (43)
    ;
}


object _21atom_to_float64(object _a_3003)
{
    object _1365 = NOVALUE; // 3004 1365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float64 pc: 1 op: STARTLINE (58)

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    // SubProg atom_to_float64 pc: 3 op: MACHINE_FUNC (111)
    _1365 = machine(46, _a_3003);
    // SubProg atom_to_float64 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float64

// block var a_3003
    DeRef(_a_3003);
    return _1365;
    // SubProg atom_to_float64 pc: 11 op: BADRETURNF (43)
    ;
}


object _21atom_to_float80(object _a_3007)
{
    object _1366 = NOVALUE; // 3008 1366
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float80 pc: 1 op: STARTLINE (58)

    /** convert.e:268		return machine_func(M_A_TO_F80, a)*/
    // SubProg atom_to_float80 pc: 3 op: MACHINE_FUNC (111)
    _1366 = machine(105, _a_3007);
    // SubProg atom_to_float80 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float80

// block var a_3007
    DeRef(_a_3007);
    return _1366;
    // SubProg atom_to_float80 pc: 11 op: BADRETURNF (43)
    ;
}


object _21float80_to_atom(object _bytes_3011)
{
    object _1367 = NOVALUE; // 3012 1367
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float80_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float80_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:274		return machine_func(M_F80_TO_A, bytes )*/
    // SubProg float80_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1367 = machine(101, _bytes_3011);
    // SubProg float80_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float80_to_atom

// block var bytes_3011
    DeRefDS(_bytes_3011);
    return _1367;
    // SubProg float80_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _21atom_to_float32(object _a_3015)
{
    object _1368 = NOVALUE; // 3016 1368
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg atom_to_float32 pc: 1 op: STARTLINE (58)

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    // SubProg atom_to_float32 pc: 3 op: MACHINE_FUNC (111)
    _1368 = machine(48, _a_3015);
    // SubProg atom_to_float32 pc: 7 op: RETURNF (28)

// Exiting block BLOCK: atom_to_float32

// block var a_3015
    DeRef(_a_3015);
    return _1368;
    // SubProg atom_to_float32 pc: 11 op: BADRETURNF (43)
    ;
}


object _21float64_to_atom(object _ieee64_3019)
{
    object _1369 = NOVALUE; // 3020 1369
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float64_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float64_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
    // SubProg float64_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1369 = machine(47, _ieee64_3019);
    // SubProg float64_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float64_to_atom

// block var ieee64_3019
    DeRefDS(_ieee64_3019);
    return _1369;
    // SubProg float64_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _21float32_to_atom(object _ieee32_3023)
{
    object _1370 = NOVALUE; // 3024 1370
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg float32_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg float32_to_atom pc: 3 op: STARTLINE (58)

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    // SubProg float32_to_atom pc: 5 op: MACHINE_FUNC (111)
    _1370 = machine(49, _ieee32_3023);
    // SubProg float32_to_atom pc: 9 op: RETURNF (28)

// Exiting block BLOCK: float32_to_atom

// block var ieee32_3023
    DeRefDS(_ieee32_3023);
    return _1370;
    // SubProg float32_to_atom pc: 13 op: BADRETURNF (43)
    ;
}


object _21to_number(object _text_in_3101, object _return_bad_pos_3102)
{
    object _lDotFound_3103 = NOVALUE;
    object _lSignFound_3104 = NOVALUE;
    object _lCharValue_3105 = NOVALUE;
    object _lBadPos_3106 = NOVALUE;
    object _lLeftSize_3107 = NOVALUE;
    object _lRightSize_3108 = NOVALUE;
    object _lLeftValue_3109 = NOVALUE;
    object _lRightValue_3110 = NOVALUE;
    object _lBase_3111 = NOVALUE;
    object _lPercent_3112 = NOVALUE;
    object _lResult_3113 = NOVALUE;
    object _lDigitCount_3114 = NOVALUE;
    object _lCurrencyFound_3115 = NOVALUE;
    object _lLastDigit_3116 = NOVALUE;
    object _lChar_3117 = NOVALUE;
    object _1488 = NOVALUE; // 3255 1488
    object _1487 = NOVALUE; // 3254 1487
// skipping _1486  name type: 0
// skipping _1485  name type: 0
// skipping _1484  name type: 0
// skipping _1483  name type: 0
// skipping _1482  name type: 0
// skipping _1481  name type: 0
    object _1480 = NOVALUE; // 3242 1480
// skipping _1479  name type: 0
    object _1478 = NOVALUE; // 3239 1478
    object _1477 = NOVALUE; // 3238 1477
// skipping _1476  name type: 0
// skipping _1475  name type: 0
// skipping _1474  name type: 0
// skipping _1473  name type: 0
    object _1472 = NOVALUE; // 3228 1472
    object _1471 = NOVALUE; // 3227 1471
    object _1470 = NOVALUE; // 3226 1470
    object _1469 = NOVALUE; // 3224 1469
    object _1468 = NOVALUE; // 3223 1468
    object _1467 = NOVALUE; // 3222 1467
// skipping _1466  name type: 0
// skipping _1465  name type: 0
// skipping _1464  name type: 0
    object _1463 = NOVALUE; // 3215 1463
// skipping _1462  name type: 0
// skipping _1461  name type: 0
// skipping _1460  name type: 0
    object _1459 = NOVALUE; // 3210 1459
// skipping _1458  name type: 0
// skipping _1457  name type: 0
// skipping _1456  name type: 0
// skipping _1455  name type: 0
// skipping _1454  name type: 0
// skipping _1453  name type: 0
// skipping _1452  name type: 0
    object _1451 = NOVALUE; // 3198 1451
// skipping _1445  name type: 0
// skipping _1444  name type: 0
// skipping _1443  name type: 0
    object _1442 = NOVALUE; // 3184 1442
    object _1441 = NOVALUE; // 3183 1441
// skipping _1440  name type: 0
// skipping _1439  name type: 0
// skipping _1438  name type: 0
// skipping _1437  name type: 0
    object _1436 = NOVALUE; // 3167 1436
// skipping _1435  name type: 0
    object _1434 = NOVALUE; // 3165 1434
// skipping _1433  name type: 0
    object _1428 = NOVALUE; // 3153 1428
    object _1427 = NOVALUE; // 3152 1427
    object _1426 = NOVALUE; // 3151 1426
    object _1425 = NOVALUE; // 3147 1425
    object _1424 = NOVALUE; // 3146 1424
    object _1423 = NOVALUE; // 3145 1423
    object _1422 = NOVALUE; // 3141 1422
    object _1421 = NOVALUE; // 3140 1421
    object _1420 = NOVALUE; // 3139 1420
// skipping _1419  name type: 0
// skipping _1417  name type: 0
// skipping _1414  name type: 0
// skipping _1413  name type: 0
    object _1412 = NOVALUE; // 3123 1412
    object _1411 = NOVALUE; // 3122 1411
    object _1410 = NOVALUE; // 3120 1410
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg to_number pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg to_number pc: 3 op: INTEGER_CHECK (96)
    // SubProg to_number pc: 5 op: STARTLINE (58)

    /** convert.e:593		integer lDotFound = 0*/
    // SubProg to_number pc: 7 op: ASSIGN_I (113)
    _lDotFound_3103 = 0;
    // SubProg to_number pc: 10 op: STARTLINE (58)

    /** convert.e:594		integer lSignFound = 2*/
    // SubProg to_number pc: 12 op: ASSIGN_I (113)
    _lSignFound_3104 = 2;
    // SubProg to_number pc: 15 op: STARTLINE (58)

    /** convert.e:596		integer lBadPos = 0*/
    // SubProg to_number pc: 17 op: ASSIGN_I (113)
    _lBadPos_3106 = 0;
    // SubProg to_number pc: 20 op: STARTLINE (58)

    /** convert.e:597		atom    lLeftSize = 0*/
    // SubProg to_number pc: 22 op: ASSIGN (18)
    DeRef(_lLeftSize_3107);
    _lLeftSize_3107 = 0;
    // SubProg to_number pc: 25 op: STARTLINE (58)

    /** convert.e:598		atom    lRightSize = 1*/
    // SubProg to_number pc: 27 op: ASSIGN (18)
    DeRef(_lRightSize_3108);
    _lRightSize_3108 = 1;
    // SubProg to_number pc: 30 op: STARTLINE (58)

    /** convert.e:599		atom    lLeftValue = 0*/
    // SubProg to_number pc: 32 op: ASSIGN (18)
    DeRef(_lLeftValue_3109);
    _lLeftValue_3109 = 0;
    // SubProg to_number pc: 35 op: STARTLINE (58)

    /** convert.e:600		atom    lRightValue = 0*/
    // SubProg to_number pc: 37 op: ASSIGN (18)
    DeRef(_lRightValue_3110);
    _lRightValue_3110 = 0;
    // SubProg to_number pc: 40 op: STARTLINE (58)

    /** convert.e:601		integer lBase = 10*/
    // SubProg to_number pc: 42 op: ASSIGN_I (113)
    _lBase_3111 = 10;
    // SubProg to_number pc: 45 op: STARTLINE (58)

    /** convert.e:602		integer lPercent = 1*/
    // SubProg to_number pc: 47 op: ASSIGN_I (113)
    _lPercent_3112 = 1;
    // SubProg to_number pc: 50 op: STARTLINE (58)

    /** convert.e:604		integer lDigitCount = 0*/
    // SubProg to_number pc: 52 op: ASSIGN_I (113)
    _lDigitCount_3114 = 0;
    // SubProg to_number pc: 55 op: STARTLINE (58)

    /** convert.e:605		integer lCurrencyFound = 0*/
    // SubProg to_number pc: 57 op: ASSIGN_I (113)
    _lCurrencyFound_3115 = 0;
    // SubProg to_number pc: 60 op: STARTLINE (58)

    /** convert.e:606		integer lLastDigit = 0*/
    // SubProg to_number pc: 62 op: ASSIGN_I (113)
    _lLastDigit_3116 = 0;
    // SubProg to_number pc: 65 op: STARTLINE (58)

    /** convert.e:609		for i = 1 to length(text_in) do*/
    // SubProg to_number pc: 67 op: LENGTH (42)
    if (IS_SEQUENCE(_text_in_3101)){
            _1410 = SEQ_PTR(_text_in_3101)->length;
    }
    else {
        _1410 = 1;
    }
    // SubProg to_number pc: 70 op: FOR_I (125)
    {
        object _i_3119;
        _i_3119 = 1;
L1: // addr: 77 pc: 70 sub: 3099 op: 125
        if (_i_3119 > _1410){
            goto L2; // [70] 672
        }
        // SubProg to_number pc: 77 op: STARTLINE (58)

        /** convert.e:610			if not integer(text_in[i]) then*/
        // SubProg to_number pc: 79 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_in_3101);
        _1411 = (object)*(((s1_ptr)_2)->base + _i_3119);
        // SubProg to_number pc: 83 op: IS_AN_INTEGER (94)
        if (IS_ATOM_INT(_1411))
        _1412 = 1;
        else if (IS_ATOM_DBL(_1411))
        _1412 = IS_ATOM_INT(DoubleToInt(_1411));
        else
        _1412 = 0;
        _1411 = NOVALUE;
        // SubProg to_number pc: 86 op: NOT_IFW (108)
        if (_1412 != 0)
        goto L3; // [86] 94
        _1412 = NOVALUE;
        // SubProg to_number pc: 89 op: STARTLINE (58)

        /** convert.e:611				exit*/
        // SubProg to_number pc: 91 op: EXIT (61)
        goto L2; // [91] 672
        // SubProg to_number pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 3099 op: 159
        // SubProg to_number pc: 94 op: STARTLINE (58)

        /** convert.e:614			lChar = text_in[i]*/
        // SubProg to_number pc: 96 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_text_in_3101);
        _lChar_3117 = (object)*(((s1_ptr)_2)->base + _i_3119);
        if (!IS_ATOM_INT(_lChar_3117))
        _lChar_3117 = (object)DBL_PTR(_lChar_3117)->dbl;
        // SubProg to_number pc: 100 op: STARTLINE (58)

        /** convert.e:615			switch lChar do*/
        // SubProg to_number pc: 102 op: SWITCH_I (193)
        _0 = _lChar_3117;
        switch ( _0 ){ 
            // SubProg to_number pc: 107 op: STARTLINE (58)

            /** convert.e:616				case '-' then*/
            // SubProg to_number pc: 109 op: CASE (186)
            case 45:
            // SubProg to_number pc: 111 op: STARTLINE (58)

            /** convert.e:617					if lSignFound = 2 then*/
            // SubProg to_number pc: 113 op: EQUALS_IFW_I (121)
            if (_lSignFound_3104 != 2)
            goto L4; // [113] 130
            // SubProg to_number pc: 117 op: STARTLINE (58)

            /** convert.e:618						lSignFound = -1*/
            // SubProg to_number pc: 119 op: ASSIGN_I (113)
            _lSignFound_3104 = -1;
            // SubProg to_number pc: 122 op: STARTLINE (58)

            /** convert.e:619						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 124 op: ASSIGN_I (113)
            _lLastDigit_3116 = _lDigitCount_3114;
            // SubProg to_number pc: 127 op: ELSE (23)
            goto L5; // [127] 654
            // SubProg to_number pc: 129 op: NOP1 (159)
L4: // addr: 130 pc: 129 sub: 3099 op: 159
            // SubProg to_number pc: 130 op: STARTLINE (58)

            /** convert.e:621						lBadPos = i*/
            // SubProg to_number pc: 132 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            if (_lSignFound_3104 != 2)
            goto L6; // [144] 161
            // SubProg to_number pc: 148 op: STARTLINE (58)

            /** convert.e:626						lSignFound = 1*/
            // SubProg to_number pc: 150 op: ASSIGN_I (113)
            _lSignFound_3104 = 1;
            // SubProg to_number pc: 153 op: STARTLINE (58)

            /** convert.e:627						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 155 op: ASSIGN_I (113)
            _lLastDigit_3116 = _lDigitCount_3114;
            // SubProg to_number pc: 158 op: ELSE (23)
            goto L5; // [158] 654
            // SubProg to_number pc: 160 op: NOP1 (159)
L6: // addr: 161 pc: 160 sub: 3099 op: 159
            // SubProg to_number pc: 161 op: STARTLINE (58)

            /** convert.e:629						lBadPos = i*/
            // SubProg to_number pc: 163 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            _1420 = (_lDigitCount_3114 == 0);
            // SubProg to_number pc: 179 op: SC1_AND_IF (146)
            if (_1420 == 0) {
                goto L7; // [179] 199
            }
            // SubProg to_number pc: 183 op: EQUALS (3)
            _1422 = (_lBase_3111 == 10);
            // SubProg to_number pc: 187 op: NOP1 (159)
            // SubProg to_number pc: 188 op: IF (20)
            if (_1422 == 0)
            {
                DeRef(_1422);
                _1422 = NOVALUE;
                goto L7; // [188] 199
            }
            else{
                DeRef(_1422);
                _1422 = NOVALUE;
            }
            // SubProg to_number pc: 191 op: STARTLINE (58)

            /** convert.e:634						lBase = 16*/
            // SubProg to_number pc: 193 op: ASSIGN_I (113)
            _lBase_3111 = 16;
            // SubProg to_number pc: 196 op: ELSE (23)
            goto L5; // [196] 654
            // SubProg to_number pc: 198 op: NOP1 (159)
L7: // addr: 199 pc: 198 sub: 3099 op: 159
            // SubProg to_number pc: 199 op: STARTLINE (58)

            /** convert.e:636						lBadPos = i*/
            // SubProg to_number pc: 201 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            _1423 = (_lDigitCount_3114 == 0);
            // SubProg to_number pc: 217 op: SC1_AND_IF (146)
            if (_1423 == 0) {
                goto L8; // [217] 237
            }
            // SubProg to_number pc: 221 op: EQUALS (3)
            _1425 = (_lBase_3111 == 10);
            // SubProg to_number pc: 225 op: NOP1 (159)
            // SubProg to_number pc: 226 op: IF (20)
            if (_1425 == 0)
            {
                DeRef(_1425);
                _1425 = NOVALUE;
                goto L8; // [226] 237
            }
            else{
                DeRef(_1425);
                _1425 = NOVALUE;
            }
            // SubProg to_number pc: 229 op: STARTLINE (58)

            /** convert.e:641						lBase = 8*/
            // SubProg to_number pc: 231 op: ASSIGN_I (113)
            _lBase_3111 = 8;
            // SubProg to_number pc: 234 op: ELSE (23)
            goto L5; // [234] 654
            // SubProg to_number pc: 236 op: NOP1 (159)
L8: // addr: 237 pc: 236 sub: 3099 op: 159
            // SubProg to_number pc: 237 op: STARTLINE (58)

            /** convert.e:643						lBadPos = i*/
            // SubProg to_number pc: 239 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            _1426 = (_lDigitCount_3114 == 0);
            // SubProg to_number pc: 255 op: SC1_AND_IF (146)
            if (_1426 == 0) {
                goto L9; // [255] 275
            }
            // SubProg to_number pc: 259 op: EQUALS (3)
            _1428 = (_lBase_3111 == 10);
            // SubProg to_number pc: 263 op: NOP1 (159)
            // SubProg to_number pc: 264 op: IF (20)
            if (_1428 == 0)
            {
                DeRef(_1428);
                _1428 = NOVALUE;
                goto L9; // [264] 275
            }
            else{
                DeRef(_1428);
                _1428 = NOVALUE;
            }
            // SubProg to_number pc: 267 op: STARTLINE (58)

            /** convert.e:648						lBase = 2*/
            // SubProg to_number pc: 269 op: ASSIGN_I (113)
            _lBase_3111 = 2;
            // SubProg to_number pc: 272 op: ELSE (23)
            goto L5; // [272] 654
            // SubProg to_number pc: 274 op: NOP1 (159)
L9: // addr: 275 pc: 274 sub: 3099 op: 159
            // SubProg to_number pc: 275 op: STARTLINE (58)

            /** convert.e:650						lBadPos = i*/
            // SubProg to_number pc: 277 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            if (_lCurrencyFound_3115 != 0)
            goto LA; // [297] 314
            // SubProg to_number pc: 301 op: STARTLINE (58)

            /** convert.e:655						lCurrencyFound = 1*/
            // SubProg to_number pc: 303 op: ASSIGN_I (113)
            _lCurrencyFound_3115 = 1;
            // SubProg to_number pc: 306 op: STARTLINE (58)

            /** convert.e:656						lLastDigit = lDigitCount*/
            // SubProg to_number pc: 308 op: ASSIGN_I (113)
            _lLastDigit_3116 = _lDigitCount_3114;
            // SubProg to_number pc: 311 op: ELSE (23)
            goto L5; // [311] 654
            // SubProg to_number pc: 313 op: NOP1 (159)
LA: // addr: 314 pc: 313 sub: 3099 op: 159
            // SubProg to_number pc: 314 op: STARTLINE (58)

            /** convert.e:658						lBadPos = i*/
            // SubProg to_number pc: 316 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            _1434 = (_lDigitCount_3114 == 0);
            // SubProg to_number pc: 332 op: SC1_OR_IF (147)
            if (_1434 != 0) {
                goto LB; // [332] 345
            }
            // SubProg to_number pc: 336 op: NOTEQ (4)
            _1436 = (_lLastDigit_3116 != 0);
            // SubProg to_number pc: 340 op: NOP1 (159)
            // SubProg to_number pc: 341 op: IF (20)
            if (_1436 == 0)
            {
                DeRef(_1436);
                _1436 = NOVALUE;
                goto L5; // [341] 654
            }
            else{
                DeRef(_1436);
                _1436 = NOVALUE;
            }
            // SubProg to_number pc: 344 op: NOP1 (159)
LB: // addr: 345 pc: 344 sub: 3099 op: 159
            // SubProg to_number pc: 345 op: STARTLINE (58)

            /** convert.e:663						lBadPos = i*/
            // SubProg to_number pc: 347 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            if (_lLastDigit_3116 != 0)
            goto LC; // [361] 400
            // SubProg to_number pc: 365 op: STARTLINE (58)

            /** convert.e:668						if decimal_mark = lChar then*/
            // SubProg to_number pc: 367 op: GLOBAL_INIT_CHECK (109)
            // SubProg to_number pc: 369 op: EQUALS_IFW_I (121)
            if (46 != _lChar_3117)
            goto L5; // [369] 654
            // SubProg to_number pc: 373 op: STARTLINE (58)

            /** convert.e:669							if lDotFound = 0 then*/
            // SubProg to_number pc: 375 op: EQUALS_IFW_I (121)
            if (_lDotFound_3103 != 0)
            goto LD; // [375] 387
            // SubProg to_number pc: 379 op: STARTLINE (58)

            /** convert.e:670								lDotFound = 1*/
            // SubProg to_number pc: 381 op: ASSIGN_I (113)
            _lDotFound_3103 = 1;
            // SubProg to_number pc: 384 op: ELSE (23)
            goto L5; // [384] 654
            // SubProg to_number pc: 386 op: NOP1 (159)
LD: // addr: 387 pc: 386 sub: 3099 op: 159
            // SubProg to_number pc: 387 op: STARTLINE (58)

            /** convert.e:672								lBadPos = i*/
            // SubProg to_number pc: 389 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
            // SubProg to_number pc: 392 op: NOP1 (159)
            // SubProg to_number pc: 393 op: ELSE (23)
            goto L5; // [393] 654
            // SubProg to_number pc: 395 op: NOP1 (159)
            // SubProg to_number pc: 396 op: NOP1 (159)
            // SubProg to_number pc: 397 op: ELSE (23)
            goto L5; // [397] 654
            // SubProg to_number pc: 399 op: NOP1 (159)
LC: // addr: 400 pc: 399 sub: 3099 op: 159
            // SubProg to_number pc: 400 op: STARTLINE (58)

            /** convert.e:678						lBadPos = i*/
            // SubProg to_number pc: 402 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            _lLastDigit_3116 = _lDigitCount_3114;
            // SubProg to_number pc: 417 op: STARTLINE (58)

            /** convert.e:683					if lPercent = 1 then*/
            // SubProg to_number pc: 419 op: EQUALS_IFW_I (121)
            if (_lPercent_3112 != 1)
            goto LE; // [419] 431
            // SubProg to_number pc: 423 op: STARTLINE (58)

            /** convert.e:684						lPercent = 100*/
            // SubProg to_number pc: 425 op: ASSIGN_I (113)
            _lPercent_3112 = 100;
            // SubProg to_number pc: 428 op: ELSE (23)
            goto L5; // [428] 654
            // SubProg to_number pc: 430 op: NOP1 (159)
LE: // addr: 431 pc: 430 sub: 3099 op: 159
            // SubProg to_number pc: 431 op: STARTLINE (58)

            /** convert.e:686						if text_in[i-1] = '%' then*/
            // SubProg to_number pc: 433 op: MINUS (10)
            _1441 = _i_3119 - 1;
            // SubProg to_number pc: 437 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_text_in_3101);
            _1442 = (object)*(((s1_ptr)_2)->base + _1441);
            // SubProg to_number pc: 441 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _1442, 37)){
                _1442 = NOVALUE;
                goto LF; // [441] 456
            }
            _1442 = NOVALUE;
            // SubProg to_number pc: 445 op: STARTLINE (58)

            /** convert.e:687							lPercent *= 10 -- Yes ten not one hundred.*/
            // SubProg to_number pc: 447 op: MULTIPLY (13)
            _lPercent_3112 = _lPercent_3112 * 10;
            // SubProg to_number pc: 453 op: ELSE (23)
            goto L5; // [453] 654
            // SubProg to_number pc: 455 op: NOP1 (159)
LF: // addr: 456 pc: 455 sub: 3099 op: 159
            // SubProg to_number pc: 456 op: STARTLINE (58)

            /** convert.e:689							lBadPos = i*/
            // SubProg to_number pc: 458 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
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
            if (_lDigitCount_3114 != 0)
            goto L10; // [475] 482
            // SubProg to_number pc: 479 op: ELSE (23)
            goto L5; // [479] 654
            // SubProg to_number pc: 481 op: NOP1 (159)
L10: // addr: 482 pc: 481 sub: 3099 op: 159
            // SubProg to_number pc: 482 op: STARTLINE (58)

            /** convert.e:697						lLastDigit = i*/
            // SubProg to_number pc: 484 op: ASSIGN_I (113)
            _lLastDigit_3116 = _i_3119;
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
            _1451 = find_from(_lChar_3117, _21vDigits_3087, 1);
            // SubProg to_number pc: 543 op: MINUS_I (116)
            _lCharValue_3105 = _1451 - 1;
            _1451 = NOVALUE;
            // SubProg to_number pc: 547 op: STARTLINE (58)

            /** convert.e:704		            if lCharValue > 15 then*/
            // SubProg to_number pc: 549 op: GREATER_IFW_I (124)
            if (_lCharValue_3105 <= 15)
            goto L11; // [549] 560
            // SubProg to_number pc: 553 op: STARTLINE (58)

            /** convert.e:705		            	lCharValue -= 6*/
            // SubProg to_number pc: 555 op: MINUS_I (116)
            _lCharValue_3105 = _lCharValue_3105 - 6;
            // SubProg to_number pc: 559 op: NOP1 (159)
L11: // addr: 560 pc: 559 sub: 3099 op: 159
            // SubProg to_number pc: 560 op: STARTLINE (58)

            /** convert.e:708		            if lCharValue >= lBase then*/
            // SubProg to_number pc: 562 op: GREATEREQ_IFW_I (120)
            if (_lCharValue_3105 < _lBase_3111)
            goto L12; // [562] 574
            // SubProg to_number pc: 566 op: STARTLINE (58)

            /** convert.e:709		                lBadPos = i*/
            // SubProg to_number pc: 568 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
            // SubProg to_number pc: 571 op: ELSE (23)
            goto L5; // [571] 654
            // SubProg to_number pc: 573 op: NOP1 (159)
L12: // addr: 574 pc: 573 sub: 3099 op: 159
            // SubProg to_number pc: 574 op: STARTLINE (58)

            /** convert.e:711		            elsif lLastDigit != 0 then  -- shouldn't be any more digits*/
            // SubProg to_number pc: 576 op: NOTEQ_IFW_I (122)
            if (_lLastDigit_3116 == 0)
            goto L13; // [576] 588
            // SubProg to_number pc: 580 op: STARTLINE (58)

            /** convert.e:712						lBadPos = i*/
            // SubProg to_number pc: 582 op: ASSIGN_I (113)
            _lBadPos_3106 = _i_3119;
            // SubProg to_number pc: 585 op: ELSE (23)
            goto L5; // [585] 654
            // SubProg to_number pc: 587 op: NOP1 (159)
L13: // addr: 588 pc: 587 sub: 3099 op: 159
            // SubProg to_number pc: 588 op: STARTLINE (58)

            /** convert.e:714					elsif lDotFound = 1 then*/
            // SubProg to_number pc: 590 op: EQUALS_IFW_I (121)
            if (_lDotFound_3103 != 1)
            goto L14; // [590] 619
            // SubProg to_number pc: 594 op: STARTLINE (58)

            /** convert.e:715						lRightSize *= lBase*/
            // SubProg to_number pc: 596 op: MULTIPLY (13)
            _0 = _lRightSize_3108;
            if (IS_ATOM_INT(_lRightSize_3108)) {
                if (_lRightSize_3108 == (short)_lRightSize_3108 && _lBase_3111 <= INT15 && _lBase_3111 >= -INT15){
                    _lRightSize_3108 = _lRightSize_3108 * _lBase_3111;
                }
                else{
                    _lRightSize_3108 = NewDouble(_lRightSize_3108 * (eudouble)_lBase_3111);
                }
            }
            else {
                _lRightSize_3108 = NewDouble(DBL_PTR(_lRightSize_3108)->dbl * (eudouble)_lBase_3111);
            }
            DeRef(_0);
            // SubProg to_number pc: 600 op: STARTLINE (58)

            /** convert.e:716						lRightValue = (lRightValue * lBase) + lCharValue*/
            // SubProg to_number pc: 602 op: MULTIPLY (13)
            if (IS_ATOM_INT(_lRightValue_3110)) {
                if (_lRightValue_3110 == (short)_lRightValue_3110 && _lBase_3111 <= INT15 && _lBase_3111 >= -INT15){
                    _1459 = _lRightValue_3110 * _lBase_3111;
                }
                else{
                    _1459 = NewDouble(_lRightValue_3110 * (eudouble)_lBase_3111);
                }
            }
            else {
                _1459 = NewDouble(DBL_PTR(_lRightValue_3110)->dbl * (eudouble)_lBase_3111);
            }
            // SubProg to_number pc: 606 op: PLUS (11)
            DeRef(_lRightValue_3110);
            if (IS_ATOM_INT(_1459)) {
                _lRightValue_3110 = _1459 + _lCharValue_3105;
                if ((object)((uintptr_t)_lRightValue_3110 + (uintptr_t)HIGH_BITS) >= 0){
                    _lRightValue_3110 = NewDouble((eudouble)_lRightValue_3110);
                }
            }
            else {
                _lRightValue_3110 = NewDouble(DBL_PTR(_1459)->dbl + (eudouble)_lCharValue_3105);
            }
            DeRef(_1459);
            _1459 = NOVALUE;
            // SubProg to_number pc: 610 op: STARTLINE (58)

            /** convert.e:717						lDigitCount += 1*/
            // SubProg to_number pc: 612 op: PLUS1_I (117)
            _lDigitCount_3114 = _lDigitCount_3114 + 1;
            // SubProg to_number pc: 616 op: ELSE (23)
            goto L5; // [616] 654
            // SubProg to_number pc: 618 op: NOP1 (159)
L14: // addr: 619 pc: 618 sub: 3099 op: 159
            // SubProg to_number pc: 619 op: STARTLINE (58)

            /** convert.e:719						lLeftSize += 1*/
            // SubProg to_number pc: 621 op: PLUS1 (93)
            _0 = _lLeftSize_3107;
            if (IS_ATOM_INT(_lLeftSize_3107)) {
                _lLeftSize_3107 = _lLeftSize_3107 + 1;
                if (_lLeftSize_3107 > MAXINT){
                    _lLeftSize_3107 = NewDouble((eudouble)_lLeftSize_3107);
                }
            }
            else
            _lLeftSize_3107 = binary_op(PLUS, 1, _lLeftSize_3107);
            DeRef(_0);
            // SubProg to_number pc: 625 op: STARTLINE (58)

            /** convert.e:720						lLeftValue = (lLeftValue * lBase) + lCharValue*/
            // SubProg to_number pc: 627 op: MULTIPLY (13)
            if (IS_ATOM_INT(_lLeftValue_3109)) {
                if (_lLeftValue_3109 == (short)_lLeftValue_3109 && _lBase_3111 <= INT15 && _lBase_3111 >= -INT15){
                    _1463 = _lLeftValue_3109 * _lBase_3111;
                }
                else{
                    _1463 = NewDouble(_lLeftValue_3109 * (eudouble)_lBase_3111);
                }
            }
            else {
                _1463 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl * (eudouble)_lBase_3111);
            }
            // SubProg to_number pc: 631 op: PLUS (11)
            DeRef(_lLeftValue_3109);
            if (IS_ATOM_INT(_1463)) {
                _lLeftValue_3109 = _1463 + _lCharValue_3105;
                if ((object)((uintptr_t)_lLeftValue_3109 + (uintptr_t)HIGH_BITS) >= 0){
                    _lLeftValue_3109 = NewDouble((eudouble)_lLeftValue_3109);
                }
            }
            else {
                _lLeftValue_3109 = NewDouble(DBL_PTR(_1463)->dbl + (eudouble)_lCharValue_3105);
            }
            DeRef(_1463);
            _1463 = NOVALUE;
            // SubProg to_number pc: 635 op: STARTLINE (58)

            /** convert.e:721						lDigitCount += 1*/
            // SubProg to_number pc: 637 op: PLUS1_I (117)
            _lDigitCount_3114 = _lDigitCount_3114 + 1;
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
            _lBadPos_3106 = _i_3119;
            // SubProg to_number pc: 653 op: NOPSWITCH (187)
        ;}L5: // addr: 654 pc: 653 sub: 3099 op: 187
        // SubProg to_number pc: 654 op: STARTLINE (58)

        /** convert.e:729			if lBadPos != 0 then*/
        // SubProg to_number pc: 656 op: NOTEQ_IFW_I (122)
        if (_lBadPos_3106 == 0)
        goto L15; // [656] 665
        // SubProg to_number pc: 660 op: STARTLINE (58)

        /** convert.e:730				exit*/
        // SubProg to_number pc: 662 op: EXIT (61)
        goto L2; // [662] 672
        // SubProg to_number pc: 664 op: NOP1 (159)
L15: // addr: 665 pc: 664 sub: 3099 op: 159
        // SubProg to_number pc: 665 op: STARTLINE (58)

        /** convert.e:732		end for*/
        // SubProg to_number pc: 667 op: ENDFOR_INT_UP1 (54)
        _i_3119 = _i_3119 + 1;
        goto L1; // [667] 77
L2: // addr: 672 pc: 667 sub: 3099 op: 54
        ;
    }
    // SubProg to_number pc: 672 op: STARTLINE (58)

    /** convert.e:736		if lBadPos = 0 and lDigitCount = 0 then*/
    // SubProg to_number pc: 674 op: EQUALS (3)
    _1467 = (_lBadPos_3106 == 0);
    // SubProg to_number pc: 678 op: SC1_AND_IF (146)
    if (_1467 == 0) {
        goto L16; // [678] 696
    }
    // SubProg to_number pc: 682 op: EQUALS (3)
    _1469 = (_lDigitCount_3114 == 0);
    // SubProg to_number pc: 686 op: NOP1 (159)
    // SubProg to_number pc: 687 op: IF (20)
    if (_1469 == 0)
    {
        DeRef(_1469);
        _1469 = NOVALUE;
        goto L16; // [687] 696
    }
    else{
        DeRef(_1469);
        _1469 = NOVALUE;
    }
    // SubProg to_number pc: 690 op: STARTLINE (58)

    /** convert.e:737			lBadPos = 1*/
    // SubProg to_number pc: 692 op: ASSIGN_I (113)
    _lBadPos_3106 = 1;
    // SubProg to_number pc: 695 op: NOP1 (159)
L16: // addr: 696 pc: 695 sub: 3099 op: 159
    // SubProg to_number pc: 696 op: STARTLINE (58)

    /** convert.e:740		if return_bad_pos = 0 and lBadPos != 0 then*/
    // SubProg to_number pc: 698 op: EQUALS (3)
    _1470 = (_return_bad_pos_3102 == 0);
    // SubProg to_number pc: 702 op: SC1_AND_IF (146)
    if (_1470 == 0) {
        goto L17; // [702] 721
    }
    // SubProg to_number pc: 706 op: NOTEQ (4)
    _1472 = (_lBadPos_3106 != 0);
    // SubProg to_number pc: 710 op: NOP1 (159)
    // SubProg to_number pc: 711 op: IF (20)
    if (_1472 == 0)
    {
        DeRef(_1472);
        _1472 = NOVALUE;
        goto L17; // [711] 721
    }
    else{
        DeRef(_1472);
        _1472 = NOVALUE;
    }
    // SubProg to_number pc: 714 op: STARTLINE (58)

    /** convert.e:741			return 0*/
    // SubProg to_number pc: 716 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3101
    DeRefDS(_text_in_3101);

// block var return_bad_pos_3102

// block var lDotFound_3103

// block var lSignFound_3104

// block var lCharValue_3105

// block var lBadPos_3106

// block var lLeftSize_3107
    DeRef(_lLeftSize_3107);

// block var lRightSize_3108
    DeRef(_lRightSize_3108);

// block var lLeftValue_3109
    DeRef(_lLeftValue_3109);

// block var lRightValue_3110
    DeRef(_lRightValue_3110);

// block var lBase_3111

// block var lPercent_3112

// block var lResult_3113
    DeRef(_lResult_3113);

// block var lDigitCount_3114

// block var lCurrencyFound_3115

// block var lLastDigit_3116

// block var lChar_3117
    DeRef(_1441);
    _1441 = NOVALUE;
    DeRef(_1434);
    _1434 = NOVALUE;
    DeRef(_1423);
    _1423 = NOVALUE;
    DeRef(_1470);
    _1470 = NOVALUE;
    DeRef(_1467);
    _1467 = NOVALUE;
    DeRef(_1426);
    _1426 = NOVALUE;
    DeRef(_1420);
    _1420 = NOVALUE;
    return 0;
    // SubProg to_number pc: 720 op: NOP1 (159)
L17: // addr: 721 pc: 720 sub: 3099 op: 159
    // SubProg to_number pc: 721 op: STARTLINE (58)

    /** convert.e:744		if lRightValue = 0 then*/
    // SubProg to_number pc: 723 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _lRightValue_3110, 0)){
        goto L18; // [723] 751
    }
    // SubProg to_number pc: 727 op: STARTLINE (58)

    /** convert.e:746		    if lPercent != 1 then*/
    // SubProg to_number pc: 729 op: NOTEQ_IFW_I (122)
    if (_lPercent_3112 == 1)
    goto L19; // [729] 742
    // SubProg to_number pc: 733 op: STARTLINE (58)

    /** convert.e:747				lResult = (lLeftValue / lPercent)*/
    // SubProg to_number pc: 735 op: DIVIDE (14)
    DeRef(_lResult_3113);
    if (IS_ATOM_INT(_lLeftValue_3109)) {
        _lResult_3113 = (_lLeftValue_3109 % _lPercent_3112) ? NewDouble((eudouble)_lLeftValue_3109 / _lPercent_3112) : (_lLeftValue_3109 / _lPercent_3112);
    }
    else {
        _lResult_3113 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl / (eudouble)_lPercent_3112);
    }
    // SubProg to_number pc: 739 op: ELSE (23)
    goto L1A; // [739] 786
    // SubProg to_number pc: 741 op: NOP1 (159)
L19: // addr: 742 pc: 741 sub: 3099 op: 159
    // SubProg to_number pc: 742 op: STARTLINE (58)

    /** convert.e:749		        lResult = lLeftValue*/
    // SubProg to_number pc: 744 op: ASSIGN (18)
    Ref(_lLeftValue_3109);
    DeRef(_lResult_3113);
    _lResult_3113 = _lLeftValue_3109;
    // SubProg to_number pc: 747 op: NOP1 (159)
    // SubProg to_number pc: 748 op: ELSE (23)
    goto L1A; // [748] 786
    // SubProg to_number pc: 750 op: NOP1 (159)
L18: // addr: 751 pc: 750 sub: 3099 op: 159
    // SubProg to_number pc: 751 op: STARTLINE (58)

    /** convert.e:752		    if lPercent != 1 then*/
    // SubProg to_number pc: 753 op: NOTEQ_IFW_I (122)
    if (_lPercent_3112 == 1)
    goto L1B; // [753] 774
    // SubProg to_number pc: 757 op: STARTLINE (58)

    /** convert.e:753		        lResult = (lLeftValue  + (lRightValue / (lRightSize))) / lPercent*/
    // SubProg to_number pc: 759 op: DIVIDE (14)
    if (IS_ATOM_INT(_lRightValue_3110) && IS_ATOM_INT(_lRightSize_3108)) {
        _1477 = (_lRightValue_3110 % _lRightSize_3108) ? NewDouble((eudouble)_lRightValue_3110 / _lRightSize_3108) : (_lRightValue_3110 / _lRightSize_3108);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_3110)) {
            _1477 = NewDouble((eudouble)_lRightValue_3110 / DBL_PTR(_lRightSize_3108)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_3108)) {
                _1477 = NewDouble(DBL_PTR(_lRightValue_3110)->dbl / (eudouble)_lRightSize_3108);
            }
            else
            _1477 = NewDouble(DBL_PTR(_lRightValue_3110)->dbl / DBL_PTR(_lRightSize_3108)->dbl);
        }
    }
    // SubProg to_number pc: 763 op: PLUS (11)
    if (IS_ATOM_INT(_lLeftValue_3109) && IS_ATOM_INT(_1477)) {
        _1478 = _lLeftValue_3109 + _1477;
        if ((object)((uintptr_t)_1478 + (uintptr_t)HIGH_BITS) >= 0){
            _1478 = NewDouble((eudouble)_1478);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_3109)) {
            _1478 = NewDouble((eudouble)_lLeftValue_3109 + DBL_PTR(_1477)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1477)) {
                _1478 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl + (eudouble)_1477);
            }
            else
            _1478 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl + DBL_PTR(_1477)->dbl);
        }
    }
    DeRef(_1477);
    _1477 = NOVALUE;
    // SubProg to_number pc: 767 op: DIVIDE (14)
    DeRef(_lResult_3113);
    if (IS_ATOM_INT(_1478)) {
        _lResult_3113 = (_1478 % _lPercent_3112) ? NewDouble((eudouble)_1478 / _lPercent_3112) : (_1478 / _lPercent_3112);
    }
    else {
        _lResult_3113 = NewDouble(DBL_PTR(_1478)->dbl / (eudouble)_lPercent_3112);
    }
    DeRef(_1478);
    _1478 = NOVALUE;
    // SubProg to_number pc: 771 op: ELSE (23)
    goto L1C; // [771] 785
    // SubProg to_number pc: 773 op: NOP1 (159)
L1B: // addr: 774 pc: 773 sub: 3099 op: 159
    // SubProg to_number pc: 774 op: STARTLINE (58)

    /** convert.e:755		        lResult = lLeftValue + (lRightValue / lRightSize)*/
    // SubProg to_number pc: 776 op: DIVIDE (14)
    if (IS_ATOM_INT(_lRightValue_3110) && IS_ATOM_INT(_lRightSize_3108)) {
        _1480 = (_lRightValue_3110 % _lRightSize_3108) ? NewDouble((eudouble)_lRightValue_3110 / _lRightSize_3108) : (_lRightValue_3110 / _lRightSize_3108);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_3110)) {
            _1480 = NewDouble((eudouble)_lRightValue_3110 / DBL_PTR(_lRightSize_3108)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_3108)) {
                _1480 = NewDouble(DBL_PTR(_lRightValue_3110)->dbl / (eudouble)_lRightSize_3108);
            }
            else
            _1480 = NewDouble(DBL_PTR(_lRightValue_3110)->dbl / DBL_PTR(_lRightSize_3108)->dbl);
        }
    }
    // SubProg to_number pc: 780 op: PLUS (11)
    DeRef(_lResult_3113);
    if (IS_ATOM_INT(_lLeftValue_3109) && IS_ATOM_INT(_1480)) {
        _lResult_3113 = _lLeftValue_3109 + _1480;
        if ((object)((uintptr_t)_lResult_3113 + (uintptr_t)HIGH_BITS) >= 0){
            _lResult_3113 = NewDouble((eudouble)_lResult_3113);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_3109)) {
            _lResult_3113 = NewDouble((eudouble)_lLeftValue_3109 + DBL_PTR(_1480)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1480)) {
                _lResult_3113 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl + (eudouble)_1480);
            }
            else
            _lResult_3113 = NewDouble(DBL_PTR(_lLeftValue_3109)->dbl + DBL_PTR(_1480)->dbl);
        }
    }
    DeRef(_1480);
    _1480 = NOVALUE;
    // SubProg to_number pc: 784 op: NOP1 (159)
L1C: // addr: 785 pc: 784 sub: 3099 op: 159
    // SubProg to_number pc: 785 op: NOP1 (159)
L1A: // addr: 786 pc: 785 sub: 3099 op: 159
    // SubProg to_number pc: 786 op: STARTLINE (58)

    /** convert.e:759		if lSignFound < 0 then*/
    // SubProg to_number pc: 788 op: LESS_IFW_I (119)
    if (_lSignFound_3104 >= 0)
    goto L1D; // [788] 800
    // SubProg to_number pc: 792 op: STARTLINE (58)

    /** convert.e:760			lResult = -lResult*/
    // SubProg to_number pc: 794 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 796 op: UMINUS (12)
    _0 = _lResult_3113;
    if (IS_ATOM_INT(_lResult_3113)) {
        if ((uintptr_t)_lResult_3113 == (uintptr_t)HIGH_BITS){
            _lResult_3113 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _lResult_3113 = - _lResult_3113;
        }
    }
    else {
        _lResult_3113 = unary_op(UMINUS, _lResult_3113);
    }
    DeRef(_0);
    // SubProg to_number pc: 799 op: NOP1 (159)
L1D: // addr: 800 pc: 799 sub: 3099 op: 159
    // SubProg to_number pc: 800 op: STARTLINE (58)

    /** convert.e:763		if return_bad_pos = 0 then*/
    // SubProg to_number pc: 802 op: EQUALS_IFW_I (121)
    if (_return_bad_pos_3102 != 0)
    goto L1E; // [802] 815
    // SubProg to_number pc: 806 op: STARTLINE (58)

    /** convert.e:764			return lResult*/
    // SubProg to_number pc: 808 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 810 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3101
    DeRefDS(_text_in_3101);

// block var return_bad_pos_3102

// block var lDotFound_3103

// block var lSignFound_3104

// block var lCharValue_3105

// block var lBadPos_3106

// block var lLeftSize_3107
    DeRef(_lLeftSize_3107);

// block var lRightSize_3108
    DeRef(_lRightSize_3108);

// block var lLeftValue_3109
    DeRef(_lLeftValue_3109);

// block var lRightValue_3110
    DeRef(_lRightValue_3110);

// block var lBase_3111

// block var lPercent_3112

// block var lDigitCount_3114

// block var lCurrencyFound_3115

// block var lLastDigit_3116

// block var lChar_3117
    DeRef(_1441);
    _1441 = NOVALUE;
    DeRef(_1434);
    _1434 = NOVALUE;
    DeRef(_1423);
    _1423 = NOVALUE;
    DeRef(_1470);
    _1470 = NOVALUE;
    DeRef(_1467);
    _1467 = NOVALUE;
    DeRef(_1426);
    _1426 = NOVALUE;
    DeRef(_1420);
    _1420 = NOVALUE;
    return _lResult_3113;
    // SubProg to_number pc: 814 op: NOP1 (159)
L1E: // addr: 815 pc: 814 sub: 3099 op: 159
    // SubProg to_number pc: 815 op: STARTLINE (58)

    /** convert.e:767		if return_bad_pos = -1 then*/
    // SubProg to_number pc: 817 op: EQUALS_IFW_I (121)
    if (_return_bad_pos_3102 != -1)
    goto L1F; // [817] 850
    // SubProg to_number pc: 821 op: STARTLINE (58)

    /** convert.e:768			if lBadPos = 0 then*/
    // SubProg to_number pc: 823 op: EQUALS_IFW_I (121)
    if (_lBadPos_3106 != 0)
    goto L20; // [823] 838
    // SubProg to_number pc: 827 op: STARTLINE (58)

    /** convert.e:769				return lResult*/
    // SubProg to_number pc: 829 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 831 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3101
    DeRefDS(_text_in_3101);

// block var return_bad_pos_3102

// block var lDotFound_3103

// block var lSignFound_3104

// block var lCharValue_3105

// block var lBadPos_3106

// block var lLeftSize_3107
    DeRef(_lLeftSize_3107);

// block var lRightSize_3108
    DeRef(_lRightSize_3108);

// block var lLeftValue_3109
    DeRef(_lLeftValue_3109);

// block var lRightValue_3110
    DeRef(_lRightValue_3110);

// block var lBase_3111

// block var lPercent_3112

// block var lDigitCount_3114

// block var lCurrencyFound_3115

// block var lLastDigit_3116

// block var lChar_3117
    DeRef(_1441);
    _1441 = NOVALUE;
    DeRef(_1434);
    _1434 = NOVALUE;
    DeRef(_1423);
    _1423 = NOVALUE;
    DeRef(_1470);
    _1470 = NOVALUE;
    DeRef(_1467);
    _1467 = NOVALUE;
    DeRef(_1426);
    _1426 = NOVALUE;
    DeRef(_1420);
    _1420 = NOVALUE;
    return _lResult_3113;
    // SubProg to_number pc: 835 op: ELSE (23)
    goto L21; // [835] 849
    // SubProg to_number pc: 837 op: NOP1 (159)
L20: // addr: 838 pc: 837 sub: 3099 op: 159
    // SubProg to_number pc: 838 op: STARTLINE (58)

    /** convert.e:771				return {lBadPos}	*/
    // SubProg to_number pc: 840 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _lBadPos_3106;
    _1487 = MAKE_SEQ(_1);
    // SubProg to_number pc: 844 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3101
    DeRefDS(_text_in_3101);

// block var return_bad_pos_3102

// block var lDotFound_3103

// block var lSignFound_3104

// block var lCharValue_3105

// block var lBadPos_3106

// block var lLeftSize_3107
    DeRef(_lLeftSize_3107);

// block var lRightSize_3108
    DeRef(_lRightSize_3108);

// block var lLeftValue_3109
    DeRef(_lLeftValue_3109);

// block var lRightValue_3110
    DeRef(_lRightValue_3110);

// block var lBase_3111

// block var lPercent_3112

// block var lResult_3113
    DeRef(_lResult_3113);

// block var lDigitCount_3114

// block var lCurrencyFound_3115

// block var lLastDigit_3116

// block var lChar_3117
    DeRef(_1441);
    _1441 = NOVALUE;
    DeRef(_1434);
    _1434 = NOVALUE;
    DeRef(_1423);
    _1423 = NOVALUE;
    DeRef(_1470);
    _1470 = NOVALUE;
    DeRef(_1467);
    _1467 = NOVALUE;
    DeRef(_1426);
    _1426 = NOVALUE;
    DeRef(_1420);
    _1420 = NOVALUE;
    return _1487;
    // SubProg to_number pc: 848 op: NOP1 (159)
L21: // addr: 849 pc: 848 sub: 3099 op: 159
    // SubProg to_number pc: 849 op: NOP1 (159)
L1F: // addr: 850 pc: 849 sub: 3099 op: 159
    // SubProg to_number pc: 850 op: STARTLINE (58)

    /** convert.e:775		return {lResult, lBadPos}*/
    // SubProg to_number pc: 852 op: PRIVATE_INIT_CHECK (30)
    // SubProg to_number pc: 854 op: RIGHT_BRACE_2 (85)
    Ref(_lResult_3113);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lResult_3113;
    ((intptr_t *)_2)[2] = _lBadPos_3106;
    _1488 = MAKE_SEQ(_1);
    // SubProg to_number pc: 858 op: RETURNF (28)

// Exiting block BLOCK: to_number

// block var text_in_3101
    DeRefDS(_text_in_3101);

// block var return_bad_pos_3102

// block var lDotFound_3103

// block var lSignFound_3104

// block var lCharValue_3105

// block var lBadPos_3106

// block var lLeftSize_3107
    DeRef(_lLeftSize_3107);

// block var lRightSize_3108
    DeRef(_lRightSize_3108);

// block var lLeftValue_3109
    DeRef(_lLeftValue_3109);

// block var lRightValue_3110
    DeRef(_lRightValue_3110);

// block var lBase_3111

// block var lPercent_3112

// block var lResult_3113
    DeRef(_lResult_3113);

// block var lDigitCount_3114

// block var lCurrencyFound_3115

// block var lLastDigit_3116

// block var lChar_3117
    DeRef(_1441);
    _1441 = NOVALUE;
    DeRef(_1434);
    _1434 = NOVALUE;
    DeRef(_1423);
    _1423 = NOVALUE;
    DeRef(_1470);
    _1470 = NOVALUE;
    DeRef(_1467);
    _1467 = NOVALUE;
    DeRef(_1426);
    _1426 = NOVALUE;
    DeRef(_1420);
    _1420 = NOVALUE;
    DeRef(_1487);
    _1487 = NOVALUE;
    return _1488;
    // SubProg to_number pc: 862 op: BADRETURNF (43)
    ;
}



// 0xB795E1DA
