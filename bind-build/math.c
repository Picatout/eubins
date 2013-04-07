// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _10abs(object _a_1204)
{
    object _t_1205 = NOVALUE;
    object _486 = NOVALUE;
    object _485 = NOVALUE;
    object _484 = NOVALUE;
    object _482 = NOVALUE;
    object _480 = NOVALUE;
    object _479 = NOVALUE;
    object _477 = NOVALUE;
    object _0, _1, _2;
    

    /** math.e:58		if atom(a) then*/
    _477 = IS_ATOM(_a_1204);
    if (_477 == 0)
    {
        _477 = NOVALUE;
        goto L1; // [6] 35
    }
    else{
        _477 = NOVALUE;
    }

    /** math.e:59			if a >= 0 then*/
    if (binary_op_a(LESS, _a_1204, 0)){
        goto L2; // [11] 24
    }

    /** math.e:60				return a*/
    DeRef(_t_1205);
    return _a_1204;
    goto L3; // [21] 34
L2: 

    /** math.e:62				return - a*/
    if (IS_ATOM_INT(_a_1204)) {
        if ((uintptr_t)_a_1204 == (uintptr_t)HIGH_BITS){
            _479 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _479 = - _a_1204;
        }
    }
    else {
        _479 = unary_op(UMINUS, _a_1204);
    }
    DeRef(_a_1204);
    DeRef(_t_1205);
    return _479;
L3: 
L1: 

    /** math.e:65		for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_1204)){
            _480 = SEQ_PTR(_a_1204)->length;
    }
    else {
        _480 = 1;
    }
    {
        object _i_1213;
        _i_1213 = 1;
L4: 
        if (_i_1213 > _480){
            goto L5; // [40] 101
        }

        /** math.e:66			t = a[i]*/
        DeRef(_t_1205);
        _2 = (object)SEQ_PTR(_a_1204);
        _t_1205 = (object)*(((s1_ptr)_2)->base + _i_1213);
        Ref(_t_1205);

        /** math.e:67			if atom(t) then*/
        _482 = IS_ATOM(_t_1205);
        if (_482 == 0)
        {
            _482 = NOVALUE;
            goto L6; // [58] 80
        }
        else{
            _482 = NOVALUE;
        }

        /** math.e:68				if t < 0 then*/
        if (binary_op_a(GREATEREQ, _t_1205, 0)){
            goto L7; // [63] 94
        }

        /** math.e:69					a[i] = - t*/
        if (IS_ATOM_INT(_t_1205)) {
            if ((uintptr_t)_t_1205 == (uintptr_t)HIGH_BITS){
                _484 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _484 = - _t_1205;
            }
        }
        else {
            _484 = unary_op(UMINUS, _t_1205);
        }
        _2 = (object)SEQ_PTR(_a_1204);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1204 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1213);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _484;
        if( _1 != _484 ){
            DeRef(_1);
        }
        _484 = NOVALUE;
        goto L7; // [77] 94
L6: 

        /** math.e:72				a[i] = abs(t)*/
        Ref(_t_1205);
        DeRef(_485);
        _485 = _t_1205;
        _486 = _10abs(_485);
        _485 = NOVALUE;
        _2 = (object)SEQ_PTR(_a_1204);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_1204 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_1213);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _486;
        if( _1 != _486 ){
            DeRef(_1);
        }
        _486 = NOVALUE;
L7: 

        /** math.e:74		end for*/
        _i_1213 = _i_1213 + 1;
        goto L4; // [96] 47
L5: 
        ;
    }

    /** math.e:75		return a*/
    DeRef(_t_1205);
    DeRef(_479);
    _479 = NOVALUE;
    return _a_1204;
    ;
}


object _10max(object _a_1248)
{
    object _b_1249 = NOVALUE;
    object _c_1250 = NOVALUE;
    object _496 = NOVALUE;
    object _495 = NOVALUE;
    object _494 = NOVALUE;
    object _0, _1, _2;
    

    /** math.e:199		if atom(a) then*/
    _494 = IS_ATOM(_a_1248);
    if (_494 == 0)
    {
        _494 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _494 = NOVALUE;
    }

    /** math.e:200			return a*/
    DeRef(_b_1249);
    DeRef(_c_1250);
    return _a_1248;
L1: 

    /** math.e:202		b = mathcons:MINF*/
    RefDS(_12MINF_1182);
    DeRef(_b_1249);
    _b_1249 = _12MINF_1182;

    /** math.e:203		for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_1248)){
            _495 = SEQ_PTR(_a_1248)->length;
    }
    else {
        _495 = 1;
    }
    {
        object _i_1254;
        _i_1254 = 1;
L2: 
        if (_i_1254 > _495){
            goto L3; // [28] 64
        }

        /** math.e:204			c = max(a[i])*/
        _2 = (object)SEQ_PTR(_a_1248);
        _496 = (object)*(((s1_ptr)_2)->base + _i_1254);
        Ref(_496);
        _0 = _c_1250;
        _c_1250 = _10max(_496);
        DeRef(_0);
        _496 = NOVALUE;

        /** math.e:205			if c > b then*/
        if (binary_op_a(LESSEQ, _c_1250, _b_1249)){
            goto L4; // [47] 57
        }

        /** math.e:206				b = c*/
        Ref(_c_1250);
        DeRef(_b_1249);
        _b_1249 = _c_1250;
L4: 

        /** math.e:208		end for*/
        _i_1254 = _i_1254 + 1;
        goto L2; // [59] 35
L3: 
        ;
    }

    /** math.e:209		return b*/
    DeRef(_a_1248);
    DeRef(_c_1250);
    return _b_1249;
    ;
}


object _10min(object _a_1262)
{
    object _b_1263 = NOVALUE;
    object _c_1264 = NOVALUE;
    object _501 = NOVALUE;
    object _500 = NOVALUE;
    object _499 = NOVALUE;
    object _0, _1, _2;
    

    /** math.e:232		if atom(a) then*/
    _499 = IS_ATOM(_a_1262);
    if (_499 == 0)
    {
        _499 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _499 = NOVALUE;
    }

    /** math.e:233				return a*/
    DeRef(_b_1263);
    DeRef(_c_1264);
    return _a_1262;
L1: 

    /** math.e:235		b = mathcons:PINF*/
    RefDS(_12PINF_1178);
    DeRef(_b_1263);
    _b_1263 = _12PINF_1178;

    /** math.e:236		for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_1262)){
            _500 = SEQ_PTR(_a_1262)->length;
    }
    else {
        _500 = 1;
    }
    {
        object _i_1268;
        _i_1268 = 1;
L2: 
        if (_i_1268 > _500){
            goto L3; // [28] 64
        }

        /** math.e:237			c = min(a[i])*/
        _2 = (object)SEQ_PTR(_a_1262);
        _501 = (object)*(((s1_ptr)_2)->base + _i_1268);
        Ref(_501);
        _0 = _c_1264;
        _c_1264 = _10min(_501);
        DeRef(_0);
        _501 = NOVALUE;

        /** math.e:238				if c < b then*/
        if (binary_op_a(GREATEREQ, _c_1264, _b_1263)){
            goto L4; // [47] 57
        }

        /** math.e:239					b = c*/
        Ref(_c_1264);
        DeRef(_b_1263);
        _b_1263 = _c_1264;
L4: 

        /** math.e:241		end for*/
        _i_1268 = _i_1268 + 1;
        goto L2; // [59] 35
L3: 
        ;
    }

    /** math.e:242		return b*/
    DeRef(_a_1262);
    DeRef(_c_1264);
    return _b_1263;
    ;
}


object _10or_all(object _a_1641)
{
    object _b_1642 = NOVALUE;
    object _700 = NOVALUE;
    object _699 = NOVALUE;
    object _697 = NOVALUE;
    object _696 = NOVALUE;
    object _695 = NOVALUE;
    object _694 = NOVALUE;
    object _693 = NOVALUE;
    object _0, _1, _2;
    

    /** math.e:1461		if atom(a) then*/
    _693 = IS_ATOM(_a_1641);
    if (_693 == 0)
    {
        _693 = NOVALUE;
        goto L1; // [6] 16
    }
    else{
        _693 = NOVALUE;
    }

    /** math.e:1462			return a*/
    DeRef(_b_1642);
    return _a_1641;
L1: 

    /** math.e:1464		b = 0*/
    DeRef(_b_1642);
    _b_1642 = 0;

    /** math.e:1465		for i = 1 to length(a) do*/
    if (IS_SEQUENCE(_a_1641)){
            _694 = SEQ_PTR(_a_1641)->length;
    }
    else {
        _694 = 1;
    }
    {
        object _i_1646;
        _i_1646 = 1;
L2: 
        if (_i_1646 > _694){
            goto L3; // [26] 80
        }

        /** math.e:1466			if atom(a[i]) then*/
        _2 = (object)SEQ_PTR(_a_1641);
        _695 = (object)*(((s1_ptr)_2)->base + _i_1646);
        _696 = IS_ATOM(_695);
        _695 = NOVALUE;
        if (_696 == 0)
        {
            _696 = NOVALUE;
            goto L4; // [42] 58
        }
        else{
            _696 = NOVALUE;
        }

        /** math.e:1467				b = or_bits(b, a[i])*/
        _2 = (object)SEQ_PTR(_a_1641);
        _697 = (object)*(((s1_ptr)_2)->base + _i_1646);
        _0 = _b_1642;
        if (IS_ATOM_INT(_b_1642) && IS_ATOM_INT(_697)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1642 | (uintptr_t)_697;
                 _b_1642 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1642 = binary_op(OR_BITS, _b_1642, _697);
        }
        DeRef(_0);
        _697 = NOVALUE;
        goto L5; // [55] 73
L4: 

        /** math.e:1469				b = or_bits(b, or_all(a[i]))*/
        _2 = (object)SEQ_PTR(_a_1641);
        _699 = (object)*(((s1_ptr)_2)->base + _i_1646);
        Ref(_699);
        _700 = _10or_all(_699);
        _699 = NOVALUE;
        _0 = _b_1642;
        if (IS_ATOM_INT(_b_1642) && IS_ATOM_INT(_700)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_b_1642 | (uintptr_t)_700;
                 _b_1642 = MAKE_UINT(tu);
            }
        }
        else {
            _b_1642 = binary_op(OR_BITS, _b_1642, _700);
        }
        DeRef(_0);
        DeRef(_700);
        _700 = NOVALUE;
L5: 

        /** math.e:1471		end for*/
        _i_1646 = _i_1646 + 1;
        goto L2; // [75] 33
L3: 
        ;
    }

    /** math.e:1472		return b*/
    DeRef(_a_1641);
    return _b_1642;
    ;
}



// 0xB435DB4E
