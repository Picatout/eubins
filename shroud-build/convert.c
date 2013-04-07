// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _14int_to_bytes(object _x_2742, object _size_2743)
{
    object _1234 = NOVALUE;
    object _1233 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:68		switch size do*/
    _0 = 4;
    switch ( _0 ){ 

        /** convert.e:69			case 1 then*/
        case 1:

        /** convert.e:70				poke( mem, x )*/
        if (IS_ATOM_INT(_14mem_2738)){
            poke_addr = (uint8_t *)_14mem_2738;
        }
        else {
            poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14mem_2738)->dbl);
        }
        if (IS_ATOM_INT(_x_2742)) {
            *poke_addr = (uint8_t)_x_2742;
        }
        else {
            *poke_addr = (uint8_t)DBL_PTR(_x_2742)->dbl;
        }
        goto L1; // [21] 73

        /** convert.e:71			case 2 then*/
        case 2:

        /** convert.e:72				poke2( mem, x )*/
        if (IS_ATOM_INT(_14mem_2738)){
            poke2_addr = (uint16_t *)_14mem_2738;
        }
        else {
            poke2_addr = (uint16_t *)(uintptr_t)(DBL_PTR(_14mem_2738)->dbl);
        }
        if (IS_ATOM_INT(_x_2742)) {
            *poke2_addr = (uint16_t)_x_2742;
        }
        else {
            *poke2_addr = (uint16_t)DBL_PTR(_x_2742)->dbl;
        }
        goto L1; // [34] 73

        /** convert.e:73			case 4 then*/
        case 4:

        /** convert.e:74				poke4( mem, x )*/
        if (IS_ATOM_INT(_14mem_2738)){
            poke4_addr = (uint32_t *)_14mem_2738;
        }
        else {
            poke4_addr = (uint32_t *)(uintptr_t)(DBL_PTR(_14mem_2738)->dbl);
        }
        if (IS_ATOM_INT(_x_2742)) {
            *poke4_addr = (uint32_t)_x_2742;
        }
        else {
            *poke4_addr = (uint32_t)DBL_PTR(_x_2742)->dbl;
        }
        goto L1; // [47] 73

        /** convert.e:75			case 8 then*/
        case 8:

        /** convert.e:76				poke8( mem, x )*/
        if (IS_ATOM_INT(_14mem_2738)){
            poke8_addr = (uint64_t *)_14mem_2738;
        }
        else {
            poke8_addr = (uint64_t *)(uintptr_t)(DBL_PTR(_14mem_2738)->dbl);
        }
        if (IS_ATOM_INT(_x_2742)) {
            *poke8_addr = (uint64_t)_x_2742;
        }
        else {
            *poke8_addr = (uint64_t)DBL_PTR(_x_2742)->dbl;
        }
        goto L1; // [60] 73

        /** convert.e:77			case else*/
        default:

        /** convert.e:78				return {}*/
        RefDS(_5);
        DeRef(_x_2742);
        return _5;
    ;}L1: 

    /** convert.e:80		return peek( mem & size )*/
    Concat((object_ptr)&_1233, _14mem_2738, _size_2743);
    _1 = (object)SEQ_PTR(_1233);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _1234 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_1233);
    _1233 = NOVALUE;
    DeRef(_x_2742);
    return _1234;
    ;
}


object _14int_to_bits(object _x_2781, object _nbits_2782)
{
    object _bits_2783 = NOVALUE;
    object _mask_2784 = NOVALUE;
    object _1260 = NOVALUE;
    object _1259 = NOVALUE;
    object _1257 = NOVALUE;
    object _1254 = NOVALUE;
    object _1253 = NOVALUE;
    object _1252 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:167		if nbits < 1 then*/
    if (_nbits_2782 >= 1)
    goto L1; // [5] 16

    /** convert.e:168			return {}*/
    RefDS(_5);
    DeRef(_x_2781);
    DeRef(_bits_2783);
    DeRef(_mask_2784);
    return _5;
L1: 

    /** convert.e:170		bits = repeat(0, nbits)*/
    DeRef(_bits_2783);
    _bits_2783 = Repeat(0, _nbits_2782);

    /** convert.e:171		if nbits <= 32 then*/
    if (_nbits_2782 > 32)
    goto L2; // [24] 75

    /** convert.e:173			mask = 1*/
    DeRef(_mask_2784);
    _mask_2784 = 1;

    /** convert.e:174			for i = 1 to nbits do*/
    _1252 = _nbits_2782;
    {
        object _i_2791;
        _i_2791 = 1;
L3: 
        if (_i_2791 > _1252){
            goto L4; // [38] 72
        }

        /** convert.e:175				bits[i] = and_bits(x, mask) and 1*/
        if (IS_ATOM_INT(_x_2781) && IS_ATOM_INT(_mask_2784)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_x_2781 & (uintptr_t)_mask_2784;
                 _1253 = MAKE_UINT(tu);
            }
        }
        else {
            if (IS_ATOM_INT(_x_2781)) {
                temp_d.dbl = (eudouble)_x_2781;
                _1253 = Dand_bits(&temp_d, DBL_PTR(_mask_2784));
            }
            else {
                if (IS_ATOM_INT(_mask_2784)) {
                    temp_d.dbl = (eudouble)_mask_2784;
                    _1253 = Dand_bits(DBL_PTR(_x_2781), &temp_d);
                }
                else
                _1253 = Dand_bits(DBL_PTR(_x_2781), DBL_PTR(_mask_2784));
            }
        }
        if (IS_ATOM_INT(_1253)) {
            _1254 = (_1253 != 0 && 1 != 0);
        }
        else {
            temp_d.dbl = (eudouble)1;
            _1254 = Dand(DBL_PTR(_1253), &temp_d);
        }
        DeRef(_1253);
        _1253 = NOVALUE;
        _2 = (object)SEQ_PTR(_bits_2783);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2783 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2791);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1254;
        if( _1 != _1254 ){
            DeRef(_1);
        }
        _1254 = NOVALUE;

        /** convert.e:176				mask *= 2*/
        _0 = _mask_2784;
        if (IS_ATOM_INT(_mask_2784) && IS_ATOM_INT(_mask_2784)) {
            _mask_2784 = _mask_2784 + _mask_2784;
            if ((object)((uintptr_t)_mask_2784 + (uintptr_t)HIGH_BITS) >= 0){
                _mask_2784 = NewDouble((eudouble)_mask_2784);
            }
        }
        else {
            if (IS_ATOM_INT(_mask_2784)) {
                _mask_2784 = NewDouble((eudouble)_mask_2784 + DBL_PTR(_mask_2784)->dbl);
            }
            else {
                if (IS_ATOM_INT(_mask_2784)) {
                    _mask_2784 = NewDouble(DBL_PTR(_mask_2784)->dbl + (eudouble)_mask_2784);
                }
                else
                _mask_2784 = NewDouble(DBL_PTR(_mask_2784)->dbl + DBL_PTR(_mask_2784)->dbl);
            }
        }
        DeRef(_0);

        /** convert.e:177			end for*/
        _i_2791 = _i_2791 + 1;
        goto L3; // [67] 45
L4: 
        ;
    }
    goto L5; // [72] 128
L2: 

    /** convert.e:180			if x < 0 then*/
    if (binary_op_a(GREATEREQ, _x_2781, 0)){
        goto L6; // [77] 92
    }

    /** convert.e:181				x += power(2, nbits) -- for 2's complement bit pattern*/
    _1257 = power(2, _nbits_2782);
    _0 = _x_2781;
    if (IS_ATOM_INT(_x_2781) && IS_ATOM_INT(_1257)) {
        _x_2781 = _x_2781 + _1257;
        if ((object)((uintptr_t)_x_2781 + (uintptr_t)HIGH_BITS) >= 0){
            _x_2781 = NewDouble((eudouble)_x_2781);
        }
    }
    else {
        if (IS_ATOM_INT(_x_2781)) {
            _x_2781 = NewDouble((eudouble)_x_2781 + DBL_PTR(_1257)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1257)) {
                _x_2781 = NewDouble(DBL_PTR(_x_2781)->dbl + (eudouble)_1257);
            }
            else
            _x_2781 = NewDouble(DBL_PTR(_x_2781)->dbl + DBL_PTR(_1257)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_1257);
    _1257 = NOVALUE;
L6: 

    /** convert.e:183			for i = 1 to nbits do*/
    _1259 = _nbits_2782;
    {
        object _i_2802;
        _i_2802 = 1;
L7: 
        if (_i_2802 > _1259){
            goto L8; // [97] 127
        }

        /** convert.e:184				bits[i] = remainder(x, 2)*/
        if (IS_ATOM_INT(_x_2781)) {
            _1260 = (_x_2781 % 2);
        }
        else {
            temp_d.dbl = (eudouble)2;
            _1260 = Dremainder(DBL_PTR(_x_2781), &temp_d);
        }
        _2 = (object)SEQ_PTR(_bits_2783);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _bits_2783 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_2802);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _1260;
        if( _1 != _1260 ){
            DeRef(_1);
        }
        _1260 = NOVALUE;

        /** convert.e:185				x = floor(x / 2)*/
        _0 = _x_2781;
        if (IS_ATOM_INT(_x_2781)) {
            _x_2781 = _x_2781 >> 1;
        }
        else {
            _1 = binary_op(DIVIDE, _x_2781, 2);
            _x_2781 = unary_op(FLOOR, _1);
            DeRef(_1);
        }
        DeRef(_0);

        /** convert.e:186			end for*/
        _i_2802 = _i_2802 + 1;
        goto L7; // [122] 104
L8: 
        ;
    }
L5: 

    /** convert.e:188		return bits*/
    DeRef(_x_2781);
    DeRef(_mask_2784);
    return _bits_2783;
    ;
}


object _14bits_to_int(object _bits_2808)
{
    object _value_2809 = NOVALUE;
    object _p_2810 = NOVALUE;
    object _1263 = NOVALUE;
    object _1262 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:225		value = 0*/
    DeRef(_value_2809);
    _value_2809 = 0;

    /** convert.e:226		p = 1*/
    DeRef(_p_2810);
    _p_2810 = 1;

    /** convert.e:227		for i = 1 to length(bits) do*/
    if (IS_SEQUENCE(_bits_2808)){
            _1262 = SEQ_PTR(_bits_2808)->length;
    }
    else {
        _1262 = 1;
    }
    {
        object _i_2812;
        _i_2812 = 1;
L1: 
        if (_i_2812 > _1262){
            goto L2; // [18] 54
        }

        /** convert.e:228			if bits[i] then*/
        _2 = (object)SEQ_PTR(_bits_2808);
        _1263 = (object)*(((s1_ptr)_2)->base + _i_2812);
        if (_1263 == 0) {
            _1263 = NOVALUE;
            goto L3; // [31] 41
        }
        else {
            if (!IS_ATOM_INT(_1263) && DBL_PTR(_1263)->dbl == 0.0){
                _1263 = NOVALUE;
                goto L3; // [31] 41
            }
            _1263 = NOVALUE;
        }
        _1263 = NOVALUE;

        /** convert.e:229				value += p*/
        _0 = _value_2809;
        if (IS_ATOM_INT(_value_2809) && IS_ATOM_INT(_p_2810)) {
            _value_2809 = _value_2809 + _p_2810;
            if ((object)((uintptr_t)_value_2809 + (uintptr_t)HIGH_BITS) >= 0){
                _value_2809 = NewDouble((eudouble)_value_2809);
            }
        }
        else {
            if (IS_ATOM_INT(_value_2809)) {
                _value_2809 = NewDouble((eudouble)_value_2809 + DBL_PTR(_p_2810)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2810)) {
                    _value_2809 = NewDouble(DBL_PTR(_value_2809)->dbl + (eudouble)_p_2810);
                }
                else
                _value_2809 = NewDouble(DBL_PTR(_value_2809)->dbl + DBL_PTR(_p_2810)->dbl);
            }
        }
        DeRef(_0);
L3: 

        /** convert.e:231			p += p*/
        _0 = _p_2810;
        if (IS_ATOM_INT(_p_2810) && IS_ATOM_INT(_p_2810)) {
            _p_2810 = _p_2810 + _p_2810;
            if ((object)((uintptr_t)_p_2810 + (uintptr_t)HIGH_BITS) >= 0){
                _p_2810 = NewDouble((eudouble)_p_2810);
            }
        }
        else {
            if (IS_ATOM_INT(_p_2810)) {
                _p_2810 = NewDouble((eudouble)_p_2810 + DBL_PTR(_p_2810)->dbl);
            }
            else {
                if (IS_ATOM_INT(_p_2810)) {
                    _p_2810 = NewDouble(DBL_PTR(_p_2810)->dbl + (eudouble)_p_2810);
                }
                else
                _p_2810 = NewDouble(DBL_PTR(_p_2810)->dbl + DBL_PTR(_p_2810)->dbl);
            }
        }
        DeRef(_0);

        /** convert.e:232		end for*/
        _i_2812 = _i_2812 + 1;
        goto L1; // [49] 25
L2: 
        ;
    }

    /** convert.e:233		return value*/
    DeRefDS(_bits_2808);
    DeRef(_p_2810);
    return _value_2809;
    ;
}


object _14atom_to_float64(object _a_2820)
{
    object _1266 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:262		return machine_func(M_A_TO_F64, a)*/
    _1266 = machine(46, _a_2820);
    DeRef(_a_2820);
    return _1266;
    ;
}


object _14atom_to_float80(object _a_2824)
{
    object _1267 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:268		return machine_func(M_A_TO_F80, a)*/
    _1267 = machine(105, _a_2824);
    DeRef(_a_2824);
    return _1267;
    ;
}


object _14float80_to_atom(object _bytes_2828)
{
    object _1268 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:274		return machine_func(M_F80_TO_A, bytes )*/
    _1268 = machine(101, _bytes_2828);
    DeRefDS(_bytes_2828);
    return _1268;
    ;
}


object _14atom_to_float32(object _a_2832)
{
    object _1269 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:312		return machine_func(M_A_TO_F32, a)*/
    _1269 = machine(48, _a_2832);
    DeRef(_a_2832);
    return _1269;
    ;
}


object _14float64_to_atom(object _ieee64_2836)
{
    object _1270 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:343		return machine_func(M_F64_TO_A, ieee64)*/
    _1270 = machine(47, _ieee64_2836);
    DeRefDS(_ieee64_2836);
    return _1270;
    ;
}


object _14float32_to_atom(object _ieee32_2840)
{
    object _1271 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:374		return machine_func(M_F32_TO_A, ieee32)*/
    _1271 = machine(49, _ieee32_2840);
    DeRefDS(_ieee32_2840);
    return _1271;
    ;
}


object _14to_number(object _text_in_2918, object _return_bad_pos_2919)
{
    object _lDotFound_2920 = NOVALUE;
    object _lSignFound_2921 = NOVALUE;
    object _lCharValue_2922 = NOVALUE;
    object _lBadPos_2923 = NOVALUE;
    object _lLeftSize_2924 = NOVALUE;
    object _lRightSize_2925 = NOVALUE;
    object _lLeftValue_2926 = NOVALUE;
    object _lRightValue_2927 = NOVALUE;
    object _lBase_2928 = NOVALUE;
    object _lPercent_2929 = NOVALUE;
    object _lResult_2930 = NOVALUE;
    object _lDigitCount_2931 = NOVALUE;
    object _lCurrencyFound_2932 = NOVALUE;
    object _lLastDigit_2933 = NOVALUE;
    object _lChar_2934 = NOVALUE;
    object _1390 = NOVALUE;
    object _1389 = NOVALUE;
    object _1382 = NOVALUE;
    object _1380 = NOVALUE;
    object _1379 = NOVALUE;
    object _1374 = NOVALUE;
    object _1373 = NOVALUE;
    object _1372 = NOVALUE;
    object _1371 = NOVALUE;
    object _1370 = NOVALUE;
    object _1369 = NOVALUE;
    object _1365 = NOVALUE;
    object _1361 = NOVALUE;
    object _1353 = NOVALUE;
    object _1343 = NOVALUE;
    object _1342 = NOVALUE;
    object _1337 = NOVALUE;
    object _1335 = NOVALUE;
    object _1329 = NOVALUE;
    object _1328 = NOVALUE;
    object _1327 = NOVALUE;
    object _1326 = NOVALUE;
    object _1325 = NOVALUE;
    object _1324 = NOVALUE;
    object _1323 = NOVALUE;
    object _1322 = NOVALUE;
    object _1321 = NOVALUE;
    object _1313 = NOVALUE;
    object _1312 = NOVALUE;
    object _1311 = NOVALUE;
    object _0, _1, _2;
    

    /** convert.e:593		integer lDotFound = 0*/
    _lDotFound_2920 = 0;

    /** convert.e:594		integer lSignFound = 2*/
    _lSignFound_2921 = 2;

    /** convert.e:596		integer lBadPos = 0*/
    _lBadPos_2923 = 0;

    /** convert.e:597		atom    lLeftSize = 0*/
    DeRef(_lLeftSize_2924);
    _lLeftSize_2924 = 0;

    /** convert.e:598		atom    lRightSize = 1*/
    DeRef(_lRightSize_2925);
    _lRightSize_2925 = 1;

    /** convert.e:599		atom    lLeftValue = 0*/
    DeRef(_lLeftValue_2926);
    _lLeftValue_2926 = 0;

    /** convert.e:600		atom    lRightValue = 0*/
    DeRef(_lRightValue_2927);
    _lRightValue_2927 = 0;

    /** convert.e:601		integer lBase = 10*/
    _lBase_2928 = 10;

    /** convert.e:602		integer lPercent = 1*/
    _lPercent_2929 = 1;

    /** convert.e:604		integer lDigitCount = 0*/
    _lDigitCount_2931 = 0;

    /** convert.e:605		integer lCurrencyFound = 0*/
    _lCurrencyFound_2932 = 0;

    /** convert.e:606		integer lLastDigit = 0*/
    _lLastDigit_2933 = 0;

    /** convert.e:609		for i = 1 to length(text_in) do*/
    if (IS_SEQUENCE(_text_in_2918)){
            _1311 = SEQ_PTR(_text_in_2918)->length;
    }
    else {
        _1311 = 1;
    }
    {
        object _i_2936;
        _i_2936 = 1;
L1: 
        if (_i_2936 > _1311){
            goto L2; // [70] 672
        }

        /** convert.e:610			if not integer(text_in[i]) then*/
        _2 = (object)SEQ_PTR(_text_in_2918);
        _1312 = (object)*(((s1_ptr)_2)->base + _i_2936);
        if (IS_ATOM_INT(_1312))
        _1313 = 1;
        else if (IS_ATOM_DBL(_1312))
        _1313 = IS_ATOM_INT(DoubleToInt(_1312));
        else
        _1313 = 0;
        _1312 = NOVALUE;
        if (_1313 != 0)
        goto L3; // [86] 94
        _1313 = NOVALUE;

        /** convert.e:611				exit*/
        goto L2; // [91] 672
L3: 

        /** convert.e:614			lChar = text_in[i]*/
        _2 = (object)SEQ_PTR(_text_in_2918);
        _lChar_2934 = (object)*(((s1_ptr)_2)->base + _i_2936);
        if (!IS_ATOM_INT(_lChar_2934))
        _lChar_2934 = (object)DBL_PTR(_lChar_2934)->dbl;

        /** convert.e:615			switch lChar do*/
        _0 = _lChar_2934;
        switch ( _0 ){ 

            /** convert.e:616				case '-' then*/
            case 45:

            /** convert.e:617					if lSignFound = 2 then*/
            if (_lSignFound_2921 != 2)
            goto L4; // [113] 130

            /** convert.e:618						lSignFound = -1*/
            _lSignFound_2921 = -1;

            /** convert.e:619						lLastDigit = lDigitCount*/
            _lLastDigit_2933 = _lDigitCount_2931;
            goto L5; // [127] 654
L4: 

            /** convert.e:621						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [136] 654

            /** convert.e:624				case '+' then*/
            case 43:

            /** convert.e:625					if lSignFound = 2 then*/
            if (_lSignFound_2921 != 2)
            goto L6; // [144] 161

            /** convert.e:626						lSignFound = 1*/
            _lSignFound_2921 = 1;

            /** convert.e:627						lLastDigit = lDigitCount*/
            _lLastDigit_2933 = _lDigitCount_2931;
            goto L5; // [158] 654
L6: 

            /** convert.e:629						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [167] 654

            /** convert.e:632				case '#' then*/
            case 35:

            /** convert.e:633					if lDigitCount = 0 and lBase = 10 then*/
            _1321 = (_lDigitCount_2931 == 0);
            if (_1321 == 0) {
                goto L7; // [179] 199
            }
            _1323 = (_lBase_2928 == 10);
            if (_1323 == 0)
            {
                DeRef(_1323);
                _1323 = NOVALUE;
                goto L7; // [188] 199
            }
            else{
                DeRef(_1323);
                _1323 = NOVALUE;
            }

            /** convert.e:634						lBase = 16*/
            _lBase_2928 = 16;
            goto L5; // [196] 654
L7: 

            /** convert.e:636						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [205] 654

            /** convert.e:639				case '@' then*/
            case 64:

            /** convert.e:640					if lDigitCount = 0  and lBase = 10 then*/
            _1324 = (_lDigitCount_2931 == 0);
            if (_1324 == 0) {
                goto L8; // [217] 237
            }
            _1326 = (_lBase_2928 == 10);
            if (_1326 == 0)
            {
                DeRef(_1326);
                _1326 = NOVALUE;
                goto L8; // [226] 237
            }
            else{
                DeRef(_1326);
                _1326 = NOVALUE;
            }

            /** convert.e:641						lBase = 8*/
            _lBase_2928 = 8;
            goto L5; // [234] 654
L8: 

            /** convert.e:643						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [243] 654

            /** convert.e:646				case '!' then*/
            case 33:

            /** convert.e:647					if lDigitCount = 0  and lBase = 10 then*/
            _1327 = (_lDigitCount_2931 == 0);
            if (_1327 == 0) {
                goto L9; // [255] 275
            }
            _1329 = (_lBase_2928 == 10);
            if (_1329 == 0)
            {
                DeRef(_1329);
                _1329 = NOVALUE;
                goto L9; // [264] 275
            }
            else{
                DeRef(_1329);
                _1329 = NOVALUE;
            }

            /** convert.e:648						lBase = 2*/
            _lBase_2928 = 2;
            goto L5; // [272] 654
L9: 

            /** convert.e:650						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [281] 654

            /** convert.e:653				case '$', '£', '¤', '¥', '€' then*/
            case 36:
            case 163:
            case 164:
            case 165:
            case 128:

            /** convert.e:654					if lCurrencyFound = 0 then*/
            if (_lCurrencyFound_2932 != 0)
            goto LA; // [297] 314

            /** convert.e:655						lCurrencyFound = 1*/
            _lCurrencyFound_2932 = 1;

            /** convert.e:656						lLastDigit = lDigitCount*/
            _lLastDigit_2933 = _lDigitCount_2931;
            goto L5; // [311] 654
LA: 

            /** convert.e:658						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [320] 654

            /** convert.e:661				case '_' then -- grouping character*/
            case 95:

            /** convert.e:662					if lDigitCount = 0 or lLastDigit != 0 then*/
            _1335 = (_lDigitCount_2931 == 0);
            if (_1335 != 0) {
                goto LB; // [332] 345
            }
            _1337 = (_lLastDigit_2933 != 0);
            if (_1337 == 0)
            {
                DeRef(_1337);
                _1337 = NOVALUE;
                goto L5; // [341] 654
            }
            else{
                DeRef(_1337);
                _1337 = NOVALUE;
            }
LB: 

            /** convert.e:663						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [351] 654

            /** convert.e:666				case '.', ',' then*/
            case 46:
            case 44:

            /** convert.e:667					if lLastDigit = 0 then*/
            if (_lLastDigit_2933 != 0)
            goto LC; // [361] 400

            /** convert.e:668						if decimal_mark = lChar then*/
            if (46 != _lChar_2934)
            goto L5; // [369] 654

            /** convert.e:669							if lDotFound = 0 then*/
            if (_lDotFound_2920 != 0)
            goto LD; // [375] 387

            /** convert.e:670								lDotFound = 1*/
            _lDotFound_2920 = 1;
            goto L5; // [384] 654
LD: 

            /** convert.e:672								lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [393] 654
            goto L5; // [397] 654
LC: 

            /** convert.e:678						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [406] 654

            /** convert.e:681				case '%' then*/
            case 37:

            /** convert.e:682					lLastDigit = lDigitCount*/
            _lLastDigit_2933 = _lDigitCount_2931;

            /** convert.e:683					if lPercent = 1 then*/
            if (_lPercent_2929 != 1)
            goto LE; // [419] 431

            /** convert.e:684						lPercent = 100*/
            _lPercent_2929 = 100;
            goto L5; // [428] 654
LE: 

            /** convert.e:686						if text_in[i-1] = '%' then*/
            _1342 = _i_2936 - 1;
            _2 = (object)SEQ_PTR(_text_in_2918);
            _1343 = (object)*(((s1_ptr)_2)->base + _1342);
            if (binary_op_a(NOTEQ, _1343, 37)){
                _1343 = NOVALUE;
                goto LF; // [441] 456
            }
            _1343 = NOVALUE;

            /** convert.e:687							lPercent *= 10 -- Yes ten not one hundred.*/
            _lPercent_2929 = _lPercent_2929 * 10;
            goto L5; // [453] 654
LF: 

            /** convert.e:689							lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [463] 654

            /** convert.e:693				case '\t', ' ', #A0 then*/
            case 9:
            case 32:
            case 160:

            /** convert.e:694					if lDigitCount = 0 then*/
            if (_lDigitCount_2931 != 0)
            goto L10; // [475] 482
            goto L5; // [479] 654
L10: 

            /** convert.e:697						lLastDigit = i*/
            _lLastDigit_2933 = _i_2936;
            goto L5; // [488] 654

            /** convert.e:700				case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',*/
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:

            /** convert.e:703		            lCharValue = find(lChar, vDigits) - 1*/
            _1353 = find_from(_lChar_2934, _14vDigits_2904, 1);
            _lCharValue_2922 = _1353 - 1;
            _1353 = NOVALUE;

            /** convert.e:704		            if lCharValue > 15 then*/
            if (_lCharValue_2922 <= 15)
            goto L11; // [549] 560

            /** convert.e:705		            	lCharValue -= 6*/
            _lCharValue_2922 = _lCharValue_2922 - 6;
L11: 

            /** convert.e:708		            if lCharValue >= lBase then*/
            if (_lCharValue_2922 < _lBase_2928)
            goto L12; // [562] 574

            /** convert.e:709		                lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [571] 654
L12: 

            /** convert.e:711		            elsif lLastDigit != 0 then  -- shouldn't be any more digits*/
            if (_lLastDigit_2933 == 0)
            goto L13; // [576] 588

            /** convert.e:712						lBadPos = i*/
            _lBadPos_2923 = _i_2936;
            goto L5; // [585] 654
L13: 

            /** convert.e:714					elsif lDotFound = 1 then*/
            if (_lDotFound_2920 != 1)
            goto L14; // [590] 619

            /** convert.e:715						lRightSize *= lBase*/
            _0 = _lRightSize_2925;
            if (IS_ATOM_INT(_lRightSize_2925)) {
                if (_lRightSize_2925 == (short)_lRightSize_2925 && _lBase_2928 <= INT15 && _lBase_2928 >= -INT15){
                    _lRightSize_2925 = _lRightSize_2925 * _lBase_2928;
                }
                else{
                    _lRightSize_2925 = NewDouble(_lRightSize_2925 * (eudouble)_lBase_2928);
                }
            }
            else {
                _lRightSize_2925 = NewDouble(DBL_PTR(_lRightSize_2925)->dbl * (eudouble)_lBase_2928);
            }
            DeRef(_0);

            /** convert.e:716						lRightValue = (lRightValue * lBase) + lCharValue*/
            if (IS_ATOM_INT(_lRightValue_2927)) {
                if (_lRightValue_2927 == (short)_lRightValue_2927 && _lBase_2928 <= INT15 && _lBase_2928 >= -INT15){
                    _1361 = _lRightValue_2927 * _lBase_2928;
                }
                else{
                    _1361 = NewDouble(_lRightValue_2927 * (eudouble)_lBase_2928);
                }
            }
            else {
                _1361 = NewDouble(DBL_PTR(_lRightValue_2927)->dbl * (eudouble)_lBase_2928);
            }
            DeRef(_lRightValue_2927);
            if (IS_ATOM_INT(_1361)) {
                _lRightValue_2927 = _1361 + _lCharValue_2922;
                if ((object)((uintptr_t)_lRightValue_2927 + (uintptr_t)HIGH_BITS) >= 0){
                    _lRightValue_2927 = NewDouble((eudouble)_lRightValue_2927);
                }
            }
            else {
                _lRightValue_2927 = NewDouble(DBL_PTR(_1361)->dbl + (eudouble)_lCharValue_2922);
            }
            DeRef(_1361);
            _1361 = NOVALUE;

            /** convert.e:717						lDigitCount += 1*/
            _lDigitCount_2931 = _lDigitCount_2931 + 1;
            goto L5; // [616] 654
L14: 

            /** convert.e:719						lLeftSize += 1*/
            _0 = _lLeftSize_2924;
            if (IS_ATOM_INT(_lLeftSize_2924)) {
                _lLeftSize_2924 = _lLeftSize_2924 + 1;
                if (_lLeftSize_2924 > MAXINT){
                    _lLeftSize_2924 = NewDouble((eudouble)_lLeftSize_2924);
                }
            }
            else
            _lLeftSize_2924 = binary_op(PLUS, 1, _lLeftSize_2924);
            DeRef(_0);

            /** convert.e:720						lLeftValue = (lLeftValue * lBase) + lCharValue*/
            if (IS_ATOM_INT(_lLeftValue_2926)) {
                if (_lLeftValue_2926 == (short)_lLeftValue_2926 && _lBase_2928 <= INT15 && _lBase_2928 >= -INT15){
                    _1365 = _lLeftValue_2926 * _lBase_2928;
                }
                else{
                    _1365 = NewDouble(_lLeftValue_2926 * (eudouble)_lBase_2928);
                }
            }
            else {
                _1365 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl * (eudouble)_lBase_2928);
            }
            DeRef(_lLeftValue_2926);
            if (IS_ATOM_INT(_1365)) {
                _lLeftValue_2926 = _1365 + _lCharValue_2922;
                if ((object)((uintptr_t)_lLeftValue_2926 + (uintptr_t)HIGH_BITS) >= 0){
                    _lLeftValue_2926 = NewDouble((eudouble)_lLeftValue_2926);
                }
            }
            else {
                _lLeftValue_2926 = NewDouble(DBL_PTR(_1365)->dbl + (eudouble)_lCharValue_2922);
            }
            DeRef(_1365);
            _1365 = NOVALUE;

            /** convert.e:721						lDigitCount += 1*/
            _lDigitCount_2931 = _lDigitCount_2931 + 1;
            goto L5; // [642] 654

            /** convert.e:724				case else*/
            default:

            /** convert.e:725					lBadPos = i*/
            _lBadPos_2923 = _i_2936;
        ;}L5: 

        /** convert.e:729			if lBadPos != 0 then*/
        if (_lBadPos_2923 == 0)
        goto L15; // [656] 665

        /** convert.e:730				exit*/
        goto L2; // [662] 672
L15: 

        /** convert.e:732		end for*/
        _i_2936 = _i_2936 + 1;
        goto L1; // [667] 77
L2: 
        ;
    }

    /** convert.e:736		if lBadPos = 0 and lDigitCount = 0 then*/
    _1369 = (_lBadPos_2923 == 0);
    if (_1369 == 0) {
        goto L16; // [678] 696
    }
    _1371 = (_lDigitCount_2931 == 0);
    if (_1371 == 0)
    {
        DeRef(_1371);
        _1371 = NOVALUE;
        goto L16; // [687] 696
    }
    else{
        DeRef(_1371);
        _1371 = NOVALUE;
    }

    /** convert.e:737			lBadPos = 1*/
    _lBadPos_2923 = 1;
L16: 

    /** convert.e:740		if return_bad_pos = 0 and lBadPos != 0 then*/
    _1372 = (_return_bad_pos_2919 == 0);
    if (_1372 == 0) {
        goto L17; // [702] 721
    }
    _1374 = (_lBadPos_2923 != 0);
    if (_1374 == 0)
    {
        DeRef(_1374);
        _1374 = NOVALUE;
        goto L17; // [711] 721
    }
    else{
        DeRef(_1374);
        _1374 = NOVALUE;
    }

    /** convert.e:741			return 0*/
    DeRefDS(_text_in_2918);
    DeRef(_lLeftSize_2924);
    DeRef(_lRightSize_2925);
    DeRef(_lLeftValue_2926);
    DeRef(_lRightValue_2927);
    DeRef(_lResult_2930);
    DeRef(_1327);
    _1327 = NOVALUE;
    DeRef(_1321);
    _1321 = NOVALUE;
    DeRef(_1342);
    _1342 = NOVALUE;
    DeRef(_1324);
    _1324 = NOVALUE;
    DeRef(_1372);
    _1372 = NOVALUE;
    DeRef(_1335);
    _1335 = NOVALUE;
    DeRef(_1369);
    _1369 = NOVALUE;
    return 0;
L17: 

    /** convert.e:744		if lRightValue = 0 then*/
    if (binary_op_a(NOTEQ, _lRightValue_2927, 0)){
        goto L18; // [723] 751
    }

    /** convert.e:746		    if lPercent != 1 then*/
    if (_lPercent_2929 == 1)
    goto L19; // [729] 742

    /** convert.e:747				lResult = (lLeftValue / lPercent)*/
    DeRef(_lResult_2930);
    if (IS_ATOM_INT(_lLeftValue_2926)) {
        _lResult_2930 = (_lLeftValue_2926 % _lPercent_2929) ? NewDouble((eudouble)_lLeftValue_2926 / _lPercent_2929) : (_lLeftValue_2926 / _lPercent_2929);
    }
    else {
        _lResult_2930 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl / (eudouble)_lPercent_2929);
    }
    goto L1A; // [739] 786
L19: 

    /** convert.e:749		        lResult = lLeftValue*/
    Ref(_lLeftValue_2926);
    DeRef(_lResult_2930);
    _lResult_2930 = _lLeftValue_2926;
    goto L1A; // [748] 786
L18: 

    /** convert.e:752		    if lPercent != 1 then*/
    if (_lPercent_2929 == 1)
    goto L1B; // [753] 774

    /** convert.e:753		        lResult = (lLeftValue  + (lRightValue / (lRightSize))) / lPercent*/
    if (IS_ATOM_INT(_lRightValue_2927) && IS_ATOM_INT(_lRightSize_2925)) {
        _1379 = (_lRightValue_2927 % _lRightSize_2925) ? NewDouble((eudouble)_lRightValue_2927 / _lRightSize_2925) : (_lRightValue_2927 / _lRightSize_2925);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_2927)) {
            _1379 = NewDouble((eudouble)_lRightValue_2927 / DBL_PTR(_lRightSize_2925)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_2925)) {
                _1379 = NewDouble(DBL_PTR(_lRightValue_2927)->dbl / (eudouble)_lRightSize_2925);
            }
            else
            _1379 = NewDouble(DBL_PTR(_lRightValue_2927)->dbl / DBL_PTR(_lRightSize_2925)->dbl);
        }
    }
    if (IS_ATOM_INT(_lLeftValue_2926) && IS_ATOM_INT(_1379)) {
        _1380 = _lLeftValue_2926 + _1379;
        if ((object)((uintptr_t)_1380 + (uintptr_t)HIGH_BITS) >= 0){
            _1380 = NewDouble((eudouble)_1380);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_2926)) {
            _1380 = NewDouble((eudouble)_lLeftValue_2926 + DBL_PTR(_1379)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1379)) {
                _1380 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl + (eudouble)_1379);
            }
            else
            _1380 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl + DBL_PTR(_1379)->dbl);
        }
    }
    DeRef(_1379);
    _1379 = NOVALUE;
    DeRef(_lResult_2930);
    if (IS_ATOM_INT(_1380)) {
        _lResult_2930 = (_1380 % _lPercent_2929) ? NewDouble((eudouble)_1380 / _lPercent_2929) : (_1380 / _lPercent_2929);
    }
    else {
        _lResult_2930 = NewDouble(DBL_PTR(_1380)->dbl / (eudouble)_lPercent_2929);
    }
    DeRef(_1380);
    _1380 = NOVALUE;
    goto L1C; // [771] 785
L1B: 

    /** convert.e:755		        lResult = lLeftValue + (lRightValue / lRightSize)*/
    if (IS_ATOM_INT(_lRightValue_2927) && IS_ATOM_INT(_lRightSize_2925)) {
        _1382 = (_lRightValue_2927 % _lRightSize_2925) ? NewDouble((eudouble)_lRightValue_2927 / _lRightSize_2925) : (_lRightValue_2927 / _lRightSize_2925);
    }
    else {
        if (IS_ATOM_INT(_lRightValue_2927)) {
            _1382 = NewDouble((eudouble)_lRightValue_2927 / DBL_PTR(_lRightSize_2925)->dbl);
        }
        else {
            if (IS_ATOM_INT(_lRightSize_2925)) {
                _1382 = NewDouble(DBL_PTR(_lRightValue_2927)->dbl / (eudouble)_lRightSize_2925);
            }
            else
            _1382 = NewDouble(DBL_PTR(_lRightValue_2927)->dbl / DBL_PTR(_lRightSize_2925)->dbl);
        }
    }
    DeRef(_lResult_2930);
    if (IS_ATOM_INT(_lLeftValue_2926) && IS_ATOM_INT(_1382)) {
        _lResult_2930 = _lLeftValue_2926 + _1382;
        if ((object)((uintptr_t)_lResult_2930 + (uintptr_t)HIGH_BITS) >= 0){
            _lResult_2930 = NewDouble((eudouble)_lResult_2930);
        }
    }
    else {
        if (IS_ATOM_INT(_lLeftValue_2926)) {
            _lResult_2930 = NewDouble((eudouble)_lLeftValue_2926 + DBL_PTR(_1382)->dbl);
        }
        else {
            if (IS_ATOM_INT(_1382)) {
                _lResult_2930 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl + (eudouble)_1382);
            }
            else
            _lResult_2930 = NewDouble(DBL_PTR(_lLeftValue_2926)->dbl + DBL_PTR(_1382)->dbl);
        }
    }
    DeRef(_1382);
    _1382 = NOVALUE;
L1C: 
L1A: 

    /** convert.e:759		if lSignFound < 0 then*/
    if (_lSignFound_2921 >= 0)
    goto L1D; // [788] 800

    /** convert.e:760			lResult = -lResult*/
    _0 = _lResult_2930;
    if (IS_ATOM_INT(_lResult_2930)) {
        if ((uintptr_t)_lResult_2930 == (uintptr_t)HIGH_BITS){
            _lResult_2930 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _lResult_2930 = - _lResult_2930;
        }
    }
    else {
        _lResult_2930 = unary_op(UMINUS, _lResult_2930);
    }
    DeRef(_0);
L1D: 

    /** convert.e:763		if return_bad_pos = 0 then*/
    if (_return_bad_pos_2919 != 0)
    goto L1E; // [802] 815

    /** convert.e:764			return lResult*/
    DeRefDS(_text_in_2918);
    DeRef(_lLeftSize_2924);
    DeRef(_lRightSize_2925);
    DeRef(_lLeftValue_2926);
    DeRef(_lRightValue_2927);
    DeRef(_1327);
    _1327 = NOVALUE;
    DeRef(_1321);
    _1321 = NOVALUE;
    DeRef(_1342);
    _1342 = NOVALUE;
    DeRef(_1324);
    _1324 = NOVALUE;
    DeRef(_1372);
    _1372 = NOVALUE;
    DeRef(_1335);
    _1335 = NOVALUE;
    DeRef(_1369);
    _1369 = NOVALUE;
    return _lResult_2930;
L1E: 

    /** convert.e:767		if return_bad_pos = -1 then*/
    if (_return_bad_pos_2919 != -1)
    goto L1F; // [817] 850

    /** convert.e:768			if lBadPos = 0 then*/
    if (_lBadPos_2923 != 0)
    goto L20; // [823] 838

    /** convert.e:769				return lResult*/
    DeRefDS(_text_in_2918);
    DeRef(_lLeftSize_2924);
    DeRef(_lRightSize_2925);
    DeRef(_lLeftValue_2926);
    DeRef(_lRightValue_2927);
    DeRef(_1327);
    _1327 = NOVALUE;
    DeRef(_1321);
    _1321 = NOVALUE;
    DeRef(_1342);
    _1342 = NOVALUE;
    DeRef(_1324);
    _1324 = NOVALUE;
    DeRef(_1372);
    _1372 = NOVALUE;
    DeRef(_1335);
    _1335 = NOVALUE;
    DeRef(_1369);
    _1369 = NOVALUE;
    return _lResult_2930;
    goto L21; // [835] 849
L20: 

    /** convert.e:771				return {lBadPos}	*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _lBadPos_2923;
    _1389 = MAKE_SEQ(_1);
    DeRefDS(_text_in_2918);
    DeRef(_lLeftSize_2924);
    DeRef(_lRightSize_2925);
    DeRef(_lLeftValue_2926);
    DeRef(_lRightValue_2927);
    DeRef(_lResult_2930);
    DeRef(_1327);
    _1327 = NOVALUE;
    DeRef(_1321);
    _1321 = NOVALUE;
    DeRef(_1342);
    _1342 = NOVALUE;
    DeRef(_1324);
    _1324 = NOVALUE;
    DeRef(_1372);
    _1372 = NOVALUE;
    DeRef(_1335);
    _1335 = NOVALUE;
    DeRef(_1369);
    _1369 = NOVALUE;
    return _1389;
L21: 
L1F: 

    /** convert.e:775		return {lResult, lBadPos}*/
    Ref(_lResult_2930);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lResult_2930;
    ((intptr_t *)_2)[2] = _lBadPos_2923;
    _1390 = MAKE_SEQ(_1);
    DeRefDS(_text_in_2918);
    DeRef(_lLeftSize_2924);
    DeRef(_lRightSize_2925);
    DeRef(_lLeftValue_2926);
    DeRef(_lRightValue_2927);
    DeRef(_lResult_2930);
    DeRef(_1327);
    _1327 = NOVALUE;
    DeRef(_1321);
    _1321 = NOVALUE;
    DeRef(_1342);
    _1342 = NOVALUE;
    DeRef(_1324);
    _1324 = NOVALUE;
    DeRef(_1372);
    _1372 = NOVALUE;
    DeRef(_1389);
    _1389 = NOVALUE;
    DeRef(_1335);
    _1335 = NOVALUE;
    DeRef(_1369);
    _1369 = NOVALUE;
    return _1390;
    ;
}



// 0xCE1CCF4B
