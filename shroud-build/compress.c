// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _37compress(object _x_15553)
{
    object _x4_15554 = NOVALUE;
    object _s_15555 = NOVALUE;
    object _8695 = NOVALUE;
    object _8694 = NOVALUE;
    object _8693 = NOVALUE;
    object _8691 = NOVALUE;
    object _8690 = NOVALUE;
    object _8688 = NOVALUE;
    object _8686 = NOVALUE;
    object _8685 = NOVALUE;
    object _8684 = NOVALUE;
    object _8683 = NOVALUE;
    object _8681 = NOVALUE;
    object _8679 = NOVALUE;
    object _8677 = NOVALUE;
    object _8675 = NOVALUE;
    object _8674 = NOVALUE;
    object _8673 = NOVALUE;
    object _8672 = NOVALUE;
    object _8671 = NOVALUE;
    object _8670 = NOVALUE;
    object _8668 = NOVALUE;
    object _8667 = NOVALUE;
    object _8666 = NOVALUE;
    object _8665 = NOVALUE;
    object _8664 = NOVALUE;
    object _8663 = NOVALUE;
    object _8662 = NOVALUE;
    object _8661 = NOVALUE;
    object _8660 = NOVALUE;
    object _8659 = NOVALUE;
    object _8657 = NOVALUE;
    object _8656 = NOVALUE;
    object _8655 = NOVALUE;
    object _8654 = NOVALUE;
    object _8653 = NOVALUE;
    object _8652 = NOVALUE;
    object _8650 = NOVALUE;
    object _8649 = NOVALUE;
    object _8648 = NOVALUE;
    object _8647 = NOVALUE;
    object _8646 = NOVALUE;
    object _8645 = NOVALUE;
    object _8644 = NOVALUE;
    object _8643 = NOVALUE;
    object _8642 = NOVALUE;
    object _0, _1, _2;
    

    /** compress.e:59		if integer(x) then*/
    if (IS_ATOM_INT(_x_15553))
    _8642 = 1;
    else if (IS_ATOM_DBL(_x_15553))
    _8642 = IS_ATOM_INT(DoubleToInt(_x_15553));
    else
    _8642 = 0;
    if (_8642 == 0)
    {
        _8642 = NOVALUE;
        goto L1; // [6] 235
    }
    else{
        _8642 = NOVALUE;
    }

    /** compress.e:60			if x >= MIN1B and x <= MAX1B then*/
    if (IS_ATOM_INT(_x_15553)) {
        _8643 = (_x_15553 >= -2);
    }
    else {
        _8643 = binary_op(GREATEREQ, _x_15553, -2);
    }
    if (IS_ATOM_INT(_8643)) {
        if (_8643 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_8643)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    if (IS_ATOM_INT(_x_15553)) {
        _8645 = (_x_15553 <= 244);
    }
    else {
        _8645 = binary_op(LESSEQ, _x_15553, 244);
    }
    if (_8645 == 0) {
        DeRef(_8645);
        _8645 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_8645) && DBL_PTR(_8645)->dbl == 0.0){
            DeRef(_8645);
            _8645 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_8645);
        _8645 = NOVALUE;
    }
    DeRef(_8645);
    _8645 = NOVALUE;

    /** compress.e:61				return {x - MIN1B}*/
    if (IS_ATOM_INT(_x_15553)) {
        _8646 = _x_15553 - -2;
        if ((object)((uintptr_t)_8646 +(uintptr_t) HIGH_BITS) >= 0){
            _8646 = NewDouble((eudouble)_8646);
        }
    }
    else {
        _8646 = binary_op(MINUS, _x_15553, -2);
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _8646;
    _8647 = MAKE_SEQ(_1);
    _8646 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8643);
    _8643 = NOVALUE;
    return _8647;
    goto L3; // [41] 404
L2: 

    /** compress.e:63			elsif x >= MIN2B and x <= MAX2B then*/
    if (IS_ATOM_INT(_x_15553)) {
        _8648 = (_x_15553 >= _37MIN2B_15527);
    }
    else {
        _8648 = binary_op(GREATEREQ, _x_15553, _37MIN2B_15527);
    }
    if (IS_ATOM_INT(_8648)) {
        if (_8648 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_8648)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    if (IS_ATOM_INT(_x_15553)) {
        _8650 = (_x_15553 <= 32767);
    }
    else {
        _8650 = binary_op(LESSEQ, _x_15553, 32767);
    }
    if (_8650 == 0) {
        DeRef(_8650);
        _8650 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_8650) && DBL_PTR(_8650)->dbl == 0.0){
            DeRef(_8650);
            _8650 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_8650);
        _8650 = NOVALUE;
    }
    DeRef(_8650);
    _8650 = NOVALUE;

    /** compress.e:64				x -= MIN2B*/
    _0 = _x_15553;
    if (IS_ATOM_INT(_x_15553)) {
        _x_15553 = _x_15553 - _37MIN2B_15527;
        if ((object)((uintptr_t)_x_15553 +(uintptr_t) HIGH_BITS) >= 0){
            _x_15553 = NewDouble((eudouble)_x_15553);
        }
    }
    else {
        _x_15553 = binary_op(MINUS, _x_15553, _37MIN2B_15527);
    }
    DeRef(_0);

    /** compress.e:65				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    if (IS_ATOM_INT(_x_15553)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_15553 & (uintptr_t)255;
             _8652 = MAKE_UINT(tu);
        }
    }
    else {
        _8652 = binary_op(AND_BITS, _x_15553, 255);
    }
    if (IS_ATOM_INT(_x_15553)) {
        if (256 > 0 && _x_15553 >= 0) {
            _8653 = _x_15553 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15553 / (eudouble)256);
            if (_x_15553 != MININT)
            _8653 = (object)temp_dbl;
            else
            _8653 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15553, 256);
        _8653 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 247;
    ((intptr_t*)_2)[2] = _8652;
    ((intptr_t*)_2)[3] = _8653;
    _8654 = MAKE_SEQ(_1);
    _8653 = NOVALUE;
    _8652 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    return _8654;
    goto L3; // [94] 404
L4: 

    /** compress.e:67			elsif x >= MIN3B and x <= MAX3B then*/
    if (IS_ATOM_INT(_x_15553)) {
        _8655 = (_x_15553 >= _37MIN3B_15533);
    }
    else {
        _8655 = binary_op(GREATEREQ, _x_15553, _37MIN3B_15533);
    }
    if (IS_ATOM_INT(_8655)) {
        if (_8655 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_8655)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    if (IS_ATOM_INT(_x_15553)) {
        _8657 = (_x_15553 <= 8388607);
    }
    else {
        _8657 = binary_op(LESSEQ, _x_15553, 8388607);
    }
    if (_8657 == 0) {
        DeRef(_8657);
        _8657 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_8657) && DBL_PTR(_8657)->dbl == 0.0){
            DeRef(_8657);
            _8657 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_8657);
        _8657 = NOVALUE;
    }
    DeRef(_8657);
    _8657 = NOVALUE;

    /** compress.e:68				x -= MIN3B*/
    _0 = _x_15553;
    if (IS_ATOM_INT(_x_15553)) {
        _x_15553 = _x_15553 - _37MIN3B_15533;
        if ((object)((uintptr_t)_x_15553 +(uintptr_t) HIGH_BITS) >= 0){
            _x_15553 = NewDouble((eudouble)_x_15553);
        }
    }
    else {
        _x_15553 = binary_op(MINUS, _x_15553, _37MIN3B_15533);
    }
    DeRef(_0);

    /** compress.e:69				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    if (IS_ATOM_INT(_x_15553)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_15553 & (uintptr_t)255;
             _8659 = MAKE_UINT(tu);
        }
    }
    else {
        _8659 = binary_op(AND_BITS, _x_15553, 255);
    }
    if (IS_ATOM_INT(_x_15553)) {
        if (256 > 0 && _x_15553 >= 0) {
            _8660 = _x_15553 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15553 / (eudouble)256);
            if (_x_15553 != MININT)
            _8660 = (object)temp_dbl;
            else
            _8660 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15553, 256);
        _8660 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    if (IS_ATOM_INT(_8660)) {
        {uintptr_t tu;
             tu = (uintptr_t)_8660 & (uintptr_t)255;
             _8661 = MAKE_UINT(tu);
        }
    }
    else {
        _8661 = binary_op(AND_BITS, _8660, 255);
    }
    DeRef(_8660);
    _8660 = NOVALUE;
    if (IS_ATOM_INT(_x_15553)) {
        if (65536 > 0 && _x_15553 >= 0) {
            _8662 = _x_15553 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15553 / (eudouble)65536);
            if (_x_15553 != MININT)
            _8662 = (object)temp_dbl;
            else
            _8662 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15553, 65536);
        _8662 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 248;
    ((intptr_t*)_2)[2] = _8659;
    ((intptr_t*)_2)[3] = _8661;
    ((intptr_t*)_2)[4] = _8662;
    _8663 = MAKE_SEQ(_1);
    _8662 = NOVALUE;
    _8661 = NOVALUE;
    _8659 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    return _8663;
    goto L3; // [156] 404
L5: 

    /** compress.e:71			elsif x >= MIN4B and x <= MAX4B then*/
    if (IS_ATOM_INT(_x_15553) && IS_ATOM_INT(_37MIN4B_15539)) {
        _8664 = (_x_15553 >= _37MIN4B_15539);
    }
    else {
        _8664 = binary_op(GREATEREQ, _x_15553, _37MIN4B_15539);
    }
    if (IS_ATOM_INT(_8664)) {
        if (_8664 == 0) {
            goto L6; // [167] 199
        }
    }
    else {
        if (DBL_PTR(_8664)->dbl == 0.0) {
            goto L6; // [167] 199
        }
    }
    if (IS_ATOM_INT(_x_15553) && IS_ATOM_INT(_37MAX4B_15542)) {
        _8666 = (_x_15553 <= _37MAX4B_15542);
    }
    else {
        _8666 = binary_op(LESSEQ, _x_15553, _37MAX4B_15542);
    }
    if (_8666 == 0) {
        DeRef(_8666);
        _8666 = NOVALUE;
        goto L6; // [178] 199
    }
    else {
        if (!IS_ATOM_INT(_8666) && DBL_PTR(_8666)->dbl == 0.0){
            DeRef(_8666);
            _8666 = NOVALUE;
            goto L6; // [178] 199
        }
        DeRef(_8666);
        _8666 = NOVALUE;
    }
    DeRef(_8666);
    _8666 = NOVALUE;

    /** compress.e:72				return I4B & int_to_bytes(x)*/
    Ref(_x_15553);
    _8667 = _14int_to_bytes(_x_15553, 4);
    if (IS_SEQUENCE(249) && IS_ATOM(_8667)) {
    }
    else if (IS_ATOM(249) && IS_SEQUENCE(_8667)) {
        Prepend(&_8668, _8667, 249);
    }
    else {
        Concat((object_ptr)&_8668, 249, _8667);
    }
    DeRef(_8667);
    _8667 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    return _8668;
    goto L3; // [196] 404
L6: 

    /** compress.e:75				ifdef EU4_0 then*/

    /** compress.e:77					return I8B & int_to_bytes(remainder(x,#1_0000_0000)) & int_to_bytes(floor(x/#1_0000_0000))*/
    _8670 = binary_op(REMAINDER, _x_15553, _8669);
    _8671 = _14int_to_bytes(_8670, 4);
    _8670 = NOVALUE;
    _2 = binary_op(DIVIDE, _x_15553, _8669);
    _8672 = unary_op(FLOOR, _2);
    DeRef(_2);
    _8673 = _14int_to_bytes(_8672, 4);
    _8672 = NOVALUE;
    {
        object concat_list[3];

        concat_list[0] = _8673;
        concat_list[1] = _8671;
        concat_list[2] = 250;
        Concat_N((object_ptr)&_8674, concat_list, 3);
    }
    DeRef(_8673);
    _8673 = NOVALUE;
    DeRef(_8671);
    _8671 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8668);
    _8668 = NOVALUE;
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    return _8674;
    goto L3; // [232] 404
L1: 

    /** compress.e:83		elsif atom(x) then*/
    _8675 = IS_ATOM(_x_15553);
    if (_8675 == 0)
    {
        _8675 = NOVALUE;
        goto L7; // [240] 324
    }
    else{
        _8675 = NOVALUE;
    }

    /** compress.e:85			x4 = atom_to_float32(x)*/
    Ref(_x_15553);
    _0 = _x4_15554;
    _x4_15554 = _14atom_to_float32(_x_15553);
    DeRef(_0);

    /** compress.e:86			if x = float32_to_atom(x4) then*/
    RefDS(_x4_15554);
    _8677 = _14float32_to_atom(_x4_15554);
    if (binary_op_a(NOTEQ, _x_15553, _8677)){
        DeRef(_8677);
        _8677 = NOVALUE;
        goto L8; // [257] 274
    }
    DeRef(_8677);
    _8677 = NOVALUE;

    /** compress.e:88				return F4B & x4*/
    Prepend(&_8679, _x4_15554, 251);
    DeRef(_x_15553);
    DeRefDS(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8668);
    _8668 = NOVALUE;
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    DeRef(_8674);
    _8674 = NOVALUE;
    return _8679;
    goto L3; // [271] 404
L8: 

    /** compress.e:90				x4 = atom_to_float64( x )*/
    Ref(_x_15553);
    _0 = _x4_15554;
    _x4_15554 = _14atom_to_float64(_x_15553);
    DeRef(_0);

    /** compress.e:91				if x = float64_to_atom( x4 ) then*/
    RefDS(_x4_15554);
    _8681 = _14float64_to_atom(_x4_15554);
    if (binary_op_a(NOTEQ, _x_15553, _8681)){
        DeRef(_8681);
        _8681 = NOVALUE;
        goto L9; // [288] 305
    }
    DeRef(_8681);
    _8681 = NOVALUE;

    /** compress.e:92					return F8B & x4*/
    Prepend(&_8683, _x4_15554, 252);
    DeRef(_x_15553);
    DeRefDS(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8668);
    _8668 = NOVALUE;
    DeRef(_8679);
    _8679 = NOVALUE;
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    DeRef(_8674);
    _8674 = NOVALUE;
    return _8683;
    goto L3; // [302] 404
L9: 

    /** compress.e:94					return F10B & atom_to_float80( x )*/
    Ref(_x_15553);
    _8684 = _14atom_to_float80(_x_15553);
    if (IS_SEQUENCE(253) && IS_ATOM(_8684)) {
    }
    else if (IS_ATOM(253) && IS_SEQUENCE(_8684)) {
        Prepend(&_8685, _8684, 253);
    }
    else {
        Concat((object_ptr)&_8685, 253, _8684);
    }
    DeRef(_8684);
    _8684 = NOVALUE;
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_s_15555);
    DeRef(_8668);
    _8668 = NOVALUE;
    DeRef(_8679);
    _8679 = NOVALUE;
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    DeRef(_8674);
    _8674 = NOVALUE;
    DeRef(_8683);
    _8683 = NOVALUE;
    return _8685;
    goto L3; // [321] 404
L7: 

    /** compress.e:100			if length(x) <= 255 then*/
    if (IS_SEQUENCE(_x_15553)){
            _8686 = SEQ_PTR(_x_15553)->length;
    }
    else {
        _8686 = 1;
    }
    if (_8686 > 255)
    goto LA; // [329] 345

    /** compress.e:101				s = {S1B, length(x)}*/
    if (IS_SEQUENCE(_x_15553)){
            _8688 = SEQ_PTR(_x_15553)->length;
    }
    else {
        _8688 = 1;
    }
    DeRef(_s_15555);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _8688;
    _s_15555 = MAKE_SEQ(_1);
    _8688 = NOVALUE;
    goto LB; // [342] 360
LA: 

    /** compress.e:103				s = S4B & int_to_bytes(length(x))*/
    if (IS_SEQUENCE(_x_15553)){
            _8690 = SEQ_PTR(_x_15553)->length;
    }
    else {
        _8690 = 1;
    }
    _8691 = _14int_to_bytes(_8690, 4);
    _8690 = NOVALUE;
    if (IS_SEQUENCE(255) && IS_ATOM(_8691)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_8691)) {
        Prepend(&_s_15555, _8691, 255);
    }
    else {
        Concat((object_ptr)&_s_15555, 255, _8691);
    }
    DeRef(_8691);
    _8691 = NOVALUE;
LB: 

    /** compress.e:105			for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_15553)){
            _8693 = SEQ_PTR(_x_15553)->length;
    }
    else {
        _8693 = 1;
    }
    {
        object _i_15631;
        _i_15631 = 1;
LC: 
        if (_i_15631 > _8693){
            goto LD; // [365] 395
        }

        /** compress.e:106				s &= compress(x[i])*/
        _2 = (object)SEQ_PTR(_x_15553);
        _8694 = (object)*(((s1_ptr)_2)->base + _i_15631);
        Ref(_8694);
        _8695 = _37compress(_8694);
        _8694 = NOVALUE;
        if (IS_SEQUENCE(_s_15555) && IS_ATOM(_8695)) {
            Ref(_8695);
            Append(&_s_15555, _s_15555, _8695);
        }
        else if (IS_ATOM(_s_15555) && IS_SEQUENCE(_8695)) {
        }
        else {
            Concat((object_ptr)&_s_15555, _s_15555, _8695);
        }
        DeRef(_8695);
        _8695 = NOVALUE;

        /** compress.e:107			end for*/
        _i_15631 = _i_15631 + 1;
        goto LC; // [390] 372
LD: 
        ;
    }

    /** compress.e:108			return s*/
    DeRef(_x_15553);
    DeRef(_x4_15554);
    DeRef(_8668);
    _8668 = NOVALUE;
    DeRef(_8679);
    _8679 = NOVALUE;
    DeRef(_8663);
    _8663 = NOVALUE;
    DeRef(_8643);
    _8643 = NOVALUE;
    DeRef(_8647);
    _8647 = NOVALUE;
    DeRef(_8655);
    _8655 = NOVALUE;
    DeRef(_8685);
    _8685 = NOVALUE;
    DeRef(_8664);
    _8664 = NOVALUE;
    DeRef(_8648);
    _8648 = NOVALUE;
    DeRef(_8654);
    _8654 = NOVALUE;
    DeRef(_8674);
    _8674 = NOVALUE;
    DeRef(_8683);
    _8683 = NOVALUE;
    return _s_15555;
L3: 
    ;
}


void _37init_compress()
{
    object _0, _1, _2;
    

    /** compress.e:136		comp_cache = repeat({}, COMP_CACHE_SIZE)*/
    DeRef(_37comp_cache_15642);
    _37comp_cache_15642 = Repeat(_5, 64);

    /** compress.e:137	end procedure*/
    return;
    ;
}


void _37fcompress(object _f_15648, object _x_15649)
{
    object _x4_15650 = NOVALUE;
    object _s_15651 = NOVALUE;
    object _p_15652 = NOVALUE;
    object _8758 = NOVALUE;
    object _8757 = NOVALUE;
    object _8756 = NOVALUE;
    object _8754 = NOVALUE;
    object _8753 = NOVALUE;
    object _8751 = NOVALUE;
    object _8749 = NOVALUE;
    object _8748 = NOVALUE;
    object _8747 = NOVALUE;
    object _8746 = NOVALUE;
    object _8744 = NOVALUE;
    object _8742 = NOVALUE;
    object _8740 = NOVALUE;
    object _8738 = NOVALUE;
    object _8737 = NOVALUE;
    object _8736 = NOVALUE;
    object _8735 = NOVALUE;
    object _8734 = NOVALUE;
    object _8733 = NOVALUE;
    object _8732 = NOVALUE;
    object _8731 = NOVALUE;
    object _8730 = NOVALUE;
    object _8729 = NOVALUE;
    object _8728 = NOVALUE;
    object _8727 = NOVALUE;
    object _8726 = NOVALUE;
    object _8725 = NOVALUE;
    object _8724 = NOVALUE;
    object _8723 = NOVALUE;
    object _8721 = NOVALUE;
    object _8720 = NOVALUE;
    object _8719 = NOVALUE;
    object _8718 = NOVALUE;
    object _8717 = NOVALUE;
    object _8716 = NOVALUE;
    object _8714 = NOVALUE;
    object _8713 = NOVALUE;
    object _8712 = NOVALUE;
    object _8711 = NOVALUE;
    object _8710 = NOVALUE;
    object _8709 = NOVALUE;
    object _8707 = NOVALUE;
    object _8706 = NOVALUE;
    object _8705 = NOVALUE;
    object _8704 = NOVALUE;
    object _8703 = NOVALUE;
    object _8702 = NOVALUE;
    object _8701 = NOVALUE;
    object _0, _1, _2;
    

    /** compress.e:145		if integer(x) then*/
    if (IS_ATOM_INT(_x_15649))
    _8701 = 1;
    else if (IS_ATOM_DBL(_x_15649))
    _8701 = IS_ATOM_INT(DoubleToInt(_x_15649));
    else
    _8701 = 0;
    if (_8701 == 0)
    {
        _8701 = NOVALUE;
        goto L1; // [8] 283
    }
    else{
        _8701 = NOVALUE;
    }

    /** compress.e:146			if x >= MIN1B and x <= max1b then*/
    if (IS_ATOM_INT(_x_15649)) {
        _8702 = (_x_15649 >= -2);
    }
    else {
        _8702 = binary_op(GREATEREQ, _x_15649, -2);
    }
    if (IS_ATOM_INT(_8702)) {
        if (_8702 == 0) {
            goto L2; // [17] 43
        }
    }
    else {
        if (DBL_PTR(_8702)->dbl == 0.0) {
            goto L2; // [17] 43
        }
    }
    if (IS_ATOM_INT(_x_15649)) {
        _8704 = (_x_15649 <= 180);
    }
    else {
        _8704 = binary_op(LESSEQ, _x_15649, 180);
    }
    if (_8704 == 0) {
        DeRef(_8704);
        _8704 = NOVALUE;
        goto L2; // [28] 43
    }
    else {
        if (!IS_ATOM_INT(_8704) && DBL_PTR(_8704)->dbl == 0.0){
            DeRef(_8704);
            _8704 = NOVALUE;
            goto L2; // [28] 43
        }
        DeRef(_8704);
        _8704 = NOVALUE;
    }
    DeRef(_8704);
    _8704 = NOVALUE;

    /** compress.e:147				puts(f, x - MIN1B) -- normal, quite small integer*/
    if (IS_ATOM_INT(_x_15649)) {
        _8705 = _x_15649 - -2;
        if ((object)((uintptr_t)_8705 +(uintptr_t) HIGH_BITS) >= 0){
            _8705 = NewDouble((eudouble)_8705);
        }
    }
    else {
        _8705 = binary_op(MINUS, _x_15649, -2);
    }
    EPuts(_f_15648, _8705); // DJP 
    DeRef(_8705);
    _8705 = NOVALUE;
    goto L3; // [40] 445
L2: 

    /** compress.e:151				p = 1 + and_bits(x, COMP_CACHE_SIZE-1)*/
    _8706 = 63;
    if (IS_ATOM_INT(_x_15649)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_15649 & (uintptr_t)63;
             _8707 = MAKE_UINT(tu);
        }
    }
    else {
        _8707 = binary_op(AND_BITS, _x_15649, 63);
    }
    _8706 = NOVALUE;
    if (IS_ATOM_INT(_8707)) {
        _p_15652 = _8707 + 1;
    }
    else
    { // coercing _p_15652 to an integer 1
        _p_15652 = 1+(object)(DBL_PTR(_8707)->dbl);
        if( !IS_ATOM_INT(_p_15652) ){
            _p_15652 = (object)DBL_PTR(_p_15652)->dbl;
        }
    }
    DeRef(_8707);
    _8707 = NOVALUE;

    /** compress.e:152				if equal(comp_cache[p], x) then*/
    _2 = (object)SEQ_PTR(_37comp_cache_15642);
    _8709 = (object)*(((s1_ptr)_2)->base + _p_15652);
    if (_8709 == _x_15649)
    _8710 = 1;
    else if (IS_ATOM_INT(_8709) && IS_ATOM_INT(_x_15649))
    _8710 = 0;
    else
    _8710 = (compare(_8709, _x_15649) == 0);
    _8709 = NOVALUE;
    if (_8710 == 0)
    {
        _8710 = NOVALUE;
        goto L4; // [69] 86
    }
    else{
        _8710 = NOVALUE;
    }

    /** compress.e:154					puts(f, CACHE0 + p) -- output the cache slot number*/
    _8711 = 182 + _p_15652;
    if ((object)((uintptr_t)_8711 + (uintptr_t)HIGH_BITS) >= 0){
        _8711 = NewDouble((eudouble)_8711);
    }
    EPuts(_f_15648, _8711); // DJP 
    DeRef(_8711);
    _8711 = NOVALUE;
    goto L3; // [83] 445
L4: 

    /** compress.e:158					comp_cache[p] = x -- store it in cache slot p*/
    Ref(_x_15649);
    _2 = (object)SEQ_PTR(_37comp_cache_15642);
    _2 = (object)(((s1_ptr)_2)->base + _p_15652);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _x_15649;
    DeRef(_1);

    /** compress.e:163					if x >= MIN2B and x <= MAX2B then*/
    if (IS_ATOM_INT(_x_15649)) {
        _8712 = (_x_15649 >= _37MIN2B_15527);
    }
    else {
        _8712 = binary_op(GREATEREQ, _x_15649, _37MIN2B_15527);
    }
    if (IS_ATOM_INT(_8712)) {
        if (_8712 == 0) {
            goto L5; // [102] 146
        }
    }
    else {
        if (DBL_PTR(_8712)->dbl == 0.0) {
            goto L5; // [102] 146
        }
    }
    if (IS_ATOM_INT(_x_15649)) {
        _8714 = (_x_15649 <= 32767);
    }
    else {
        _8714 = binary_op(LESSEQ, _x_15649, 32767);
    }
    if (_8714 == 0) {
        DeRef(_8714);
        _8714 = NOVALUE;
        goto L5; // [113] 146
    }
    else {
        if (!IS_ATOM_INT(_8714) && DBL_PTR(_8714)->dbl == 0.0){
            DeRef(_8714);
            _8714 = NOVALUE;
            goto L5; // [113] 146
        }
        DeRef(_8714);
        _8714 = NOVALUE;
    }
    DeRef(_8714);
    _8714 = NOVALUE;

    /** compress.e:164						x -= MIN2B*/
    _0 = _x_15649;
    if (IS_ATOM_INT(_x_15649)) {
        _x_15649 = _x_15649 - _37MIN2B_15527;
        if ((object)((uintptr_t)_x_15649 +(uintptr_t) HIGH_BITS) >= 0){
            _x_15649 = NewDouble((eudouble)_x_15649);
        }
    }
    else {
        _x_15649 = binary_op(MINUS, _x_15649, _37MIN2B_15527);
    }
    DeRef(_0);

    /** compress.e:165						puts(f, {I2B, and_bits(x, #FF), floor(x / #100)})*/
    if (IS_ATOM_INT(_x_15649)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_15649 & (uintptr_t)255;
             _8716 = MAKE_UINT(tu);
        }
    }
    else {
        _8716 = binary_op(AND_BITS, _x_15649, 255);
    }
    if (IS_ATOM_INT(_x_15649)) {
        if (256 > 0 && _x_15649 >= 0) {
            _8717 = _x_15649 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15649 / (eudouble)256);
            if (_x_15649 != MININT)
            _8717 = (object)temp_dbl;
            else
            _8717 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15649, 256);
        _8717 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 247;
    ((intptr_t*)_2)[2] = _8716;
    ((intptr_t*)_2)[3] = _8717;
    _8718 = MAKE_SEQ(_1);
    _8717 = NOVALUE;
    _8716 = NOVALUE;
    EPuts(_f_15648, _8718); // DJP 
    DeRefDS(_8718);
    _8718 = NOVALUE;
    goto L3; // [143] 445
L5: 

    /** compress.e:167					elsif x >= MIN3B and x <= MAX3B then*/
    if (IS_ATOM_INT(_x_15649)) {
        _8719 = (_x_15649 >= _37MIN3B_15533);
    }
    else {
        _8719 = binary_op(GREATEREQ, _x_15649, _37MIN3B_15533);
    }
    if (IS_ATOM_INT(_8719)) {
        if (_8719 == 0) {
            goto L6; // [154] 207
        }
    }
    else {
        if (DBL_PTR(_8719)->dbl == 0.0) {
            goto L6; // [154] 207
        }
    }
    if (IS_ATOM_INT(_x_15649)) {
        _8721 = (_x_15649 <= 8388607);
    }
    else {
        _8721 = binary_op(LESSEQ, _x_15649, 8388607);
    }
    if (_8721 == 0) {
        DeRef(_8721);
        _8721 = NOVALUE;
        goto L6; // [165] 207
    }
    else {
        if (!IS_ATOM_INT(_8721) && DBL_PTR(_8721)->dbl == 0.0){
            DeRef(_8721);
            _8721 = NOVALUE;
            goto L6; // [165] 207
        }
        DeRef(_8721);
        _8721 = NOVALUE;
    }
    DeRef(_8721);
    _8721 = NOVALUE;

    /** compress.e:168						x -= MIN3B*/
    _0 = _x_15649;
    if (IS_ATOM_INT(_x_15649)) {
        _x_15649 = _x_15649 - _37MIN3B_15533;
        if ((object)((uintptr_t)_x_15649 +(uintptr_t) HIGH_BITS) >= 0){
            _x_15649 = NewDouble((eudouble)_x_15649);
        }
    }
    else {
        _x_15649 = binary_op(MINUS, _x_15649, _37MIN3B_15533);
    }
    DeRef(_0);

    /** compress.e:169						puts(f, {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)})*/
    if (IS_ATOM_INT(_x_15649)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_15649 & (uintptr_t)255;
             _8723 = MAKE_UINT(tu);
        }
    }
    else {
        _8723 = binary_op(AND_BITS, _x_15649, 255);
    }
    if (IS_ATOM_INT(_x_15649)) {
        if (256 > 0 && _x_15649 >= 0) {
            _8724 = _x_15649 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15649 / (eudouble)256);
            if (_x_15649 != MININT)
            _8724 = (object)temp_dbl;
            else
            _8724 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15649, 256);
        _8724 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    if (IS_ATOM_INT(_8724)) {
        {uintptr_t tu;
             tu = (uintptr_t)_8724 & (uintptr_t)255;
             _8725 = MAKE_UINT(tu);
        }
    }
    else {
        _8725 = binary_op(AND_BITS, _8724, 255);
    }
    DeRef(_8724);
    _8724 = NOVALUE;
    if (IS_ATOM_INT(_x_15649)) {
        if (65536 > 0 && _x_15649 >= 0) {
            _8726 = _x_15649 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_15649 / (eudouble)65536);
            if (_x_15649 != MININT)
            _8726 = (object)temp_dbl;
            else
            _8726 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_15649, 65536);
        _8726 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 248;
    ((intptr_t*)_2)[2] = _8723;
    ((intptr_t*)_2)[3] = _8725;
    ((intptr_t*)_2)[4] = _8726;
    _8727 = MAKE_SEQ(_1);
    _8726 = NOVALUE;
    _8725 = NOVALUE;
    _8723 = NOVALUE;
    EPuts(_f_15648, _8727); // DJP 
    DeRefDS(_8727);
    _8727 = NOVALUE;
    goto L3; // [204] 445
L6: 

    /** compress.e:171					elsif x >= MIN4B and x <= MAX4B then*/
    if (IS_ATOM_INT(_x_15649) && IS_ATOM_INT(_37MIN4B_15539)) {
        _8728 = (_x_15649 >= _37MIN4B_15539);
    }
    else {
        _8728 = binary_op(GREATEREQ, _x_15649, _37MIN4B_15539);
    }
    if (IS_ATOM_INT(_8728)) {
        if (_8728 == 0) {
            goto L7; // [215] 246
        }
    }
    else {
        if (DBL_PTR(_8728)->dbl == 0.0) {
            goto L7; // [215] 246
        }
    }
    if (IS_ATOM_INT(_x_15649) && IS_ATOM_INT(_37MAX4B_15542)) {
        _8730 = (_x_15649 <= _37MAX4B_15542);
    }
    else {
        _8730 = binary_op(LESSEQ, _x_15649, _37MAX4B_15542);
    }
    if (_8730 == 0) {
        DeRef(_8730);
        _8730 = NOVALUE;
        goto L7; // [226] 246
    }
    else {
        if (!IS_ATOM_INT(_8730) && DBL_PTR(_8730)->dbl == 0.0){
            DeRef(_8730);
            _8730 = NOVALUE;
            goto L7; // [226] 246
        }
        DeRef(_8730);
        _8730 = NOVALUE;
    }
    DeRef(_8730);
    _8730 = NOVALUE;

    /** compress.e:172						puts(f, I4B & int_to_bytes(x))*/
    Ref(_x_15649);
    _8731 = _14int_to_bytes(_x_15649, 4);
    if (IS_SEQUENCE(249) && IS_ATOM(_8731)) {
    }
    else if (IS_ATOM(249) && IS_SEQUENCE(_8731)) {
        Prepend(&_8732, _8731, 249);
    }
    else {
        Concat((object_ptr)&_8732, 249, _8731);
    }
    DeRef(_8731);
    _8731 = NOVALUE;
    EPuts(_f_15648, _8732); // DJP 
    DeRefDS(_8732);
    _8732 = NOVALUE;
    goto L3; // [243] 445
L7: 

    /** compress.e:175						ifdef not EU4_0 then*/

    /** compress.e:179							puts(f, I8B & int_to_bytes(remainder(x,#1_0000_0000)) & int_to_bytes(floor(x/#1_0000_0000)) )*/
    _8733 = binary_op(REMAINDER, _x_15649, _8669);
    _8734 = _14int_to_bytes(_8733, 4);
    _8733 = NOVALUE;
    _2 = binary_op(DIVIDE, _x_15649, _8669);
    _8735 = unary_op(FLOOR, _2);
    DeRef(_2);
    _8736 = _14int_to_bytes(_8735, 4);
    _8735 = NOVALUE;
    {
        object concat_list[3];

        concat_list[0] = _8736;
        concat_list[1] = _8734;
        concat_list[2] = 250;
        Concat_N((object_ptr)&_8737, concat_list, 3);
    }
    DeRef(_8736);
    _8736 = NOVALUE;
    DeRef(_8734);
    _8734 = NOVALUE;
    EPuts(_f_15648, _8737); // DJP 
    DeRefDS(_8737);
    _8737 = NOVALUE;
    goto L3; // [280] 445
L1: 

    /** compress.e:185		elsif atom(x) then*/
    _8738 = IS_ATOM(_x_15649);
    if (_8738 == 0)
    {
        _8738 = NOVALUE;
        goto L8; // [288] 369
    }
    else{
        _8738 = NOVALUE;
    }

    /** compress.e:187			x4 = atom_to_float32(x)*/
    Ref(_x_15649);
    _0 = _x4_15650;
    _x4_15650 = _14atom_to_float32(_x_15649);
    DeRef(_0);

    /** compress.e:188			if x = float32_to_atom(x4) then*/
    RefDS(_x4_15650);
    _8740 = _14float32_to_atom(_x4_15650);
    if (binary_op_a(NOTEQ, _x_15649, _8740)){
        DeRef(_8740);
        _8740 = NOVALUE;
        goto L9; // [305] 321
    }
    DeRef(_8740);
    _8740 = NOVALUE;

    /** compress.e:190				puts(f, F4B & x4)*/
    Prepend(&_8742, _x4_15650, 251);
    EPuts(_f_15648, _8742); // DJP 
    DeRefDS(_8742);
    _8742 = NOVALUE;
    goto L3; // [318] 445
L9: 

    /** compress.e:192				x4 = atom_to_float64(x)*/
    Ref(_x_15649);
    _0 = _x4_15650;
    _x4_15650 = _14atom_to_float64(_x_15649);
    DeRef(_0);

    /** compress.e:193				if x = float64_to_atom( x4 ) then*/
    RefDS(_x4_15650);
    _8744 = _14float64_to_atom(_x4_15650);
    if (binary_op_a(NOTEQ, _x_15649, _8744)){
        DeRef(_8744);
        _8744 = NOVALUE;
        goto LA; // [335] 351
    }
    DeRef(_8744);
    _8744 = NOVALUE;

    /** compress.e:194					puts(f, F8B & x4)*/
    Prepend(&_8746, _x4_15650, 252);
    EPuts(_f_15648, _8746); // DJP 
    DeRefDS(_8746);
    _8746 = NOVALUE;
    goto L3; // [348] 445
LA: 

    /** compress.e:196					puts(f, F10B & atom_to_float80( x ) )*/
    Ref(_x_15649);
    _8747 = _14atom_to_float80(_x_15649);
    if (IS_SEQUENCE(253) && IS_ATOM(_8747)) {
    }
    else if (IS_ATOM(253) && IS_SEQUENCE(_8747)) {
        Prepend(&_8748, _8747, 253);
    }
    else {
        Concat((object_ptr)&_8748, 253, _8747);
    }
    DeRef(_8747);
    _8747 = NOVALUE;
    EPuts(_f_15648, _8748); // DJP 
    DeRefDS(_8748);
    _8748 = NOVALUE;
    goto L3; // [366] 445
L8: 

    /** compress.e:202			if length(x) <= 255 then*/
    if (IS_SEQUENCE(_x_15649)){
            _8749 = SEQ_PTR(_x_15649)->length;
    }
    else {
        _8749 = 1;
    }
    if (_8749 > 255)
    goto LB; // [374] 390

    /** compress.e:203				s = {S1B, length(x)}*/
    if (IS_SEQUENCE(_x_15649)){
            _8751 = SEQ_PTR(_x_15649)->length;
    }
    else {
        _8751 = 1;
    }
    DeRef(_s_15651);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _8751;
    _s_15651 = MAKE_SEQ(_1);
    _8751 = NOVALUE;
    goto LC; // [387] 405
LB: 

    /** compress.e:205				s = S4B & int_to_bytes(length(x))*/
    if (IS_SEQUENCE(_x_15649)){
            _8753 = SEQ_PTR(_x_15649)->length;
    }
    else {
        _8753 = 1;
    }
    _8754 = _14int_to_bytes(_8753, 4);
    _8753 = NOVALUE;
    if (IS_SEQUENCE(255) && IS_ATOM(_8754)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_8754)) {
        Prepend(&_s_15651, _8754, 255);
    }
    else {
        Concat((object_ptr)&_s_15651, 255, _8754);
    }
    DeRef(_8754);
    _8754 = NOVALUE;
LC: 

    /** compress.e:207			puts(f, s)*/
    EPuts(_f_15648, _s_15651); // DJP 

    /** compress.e:208			for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_15649)){
            _8756 = SEQ_PTR(_x_15649)->length;
    }
    else {
        _8756 = 1;
    }
    {
        object _i_15735;
        _i_15735 = 1;
LD: 
        if (_i_15735 > _8756){
            goto LE; // [417] 444
        }

        /** compress.e:209				fcompress(f, x[i])*/
        _2 = (object)SEQ_PTR(_x_15649);
        _8757 = (object)*(((s1_ptr)_2)->base + _i_15735);
        DeRef(_8758);
        _8758 = _f_15648;
        Ref(_8757);
        _37fcompress(_8758, _8757);
        _8758 = NOVALUE;
        _8757 = NOVALUE;

        /** compress.e:210			end for*/
        _i_15735 = _i_15735 + 1;
        goto LD; // [439] 424
LE: 
        ;
    }
L3: 

    /** compress.e:212	end procedure*/
    DeRef(_x_15649);
    DeRef(_x4_15650);
    DeRef(_s_15651);
    DeRef(_8712);
    _8712 = NOVALUE;
    DeRef(_8728);
    _8728 = NOVALUE;
    DeRef(_8719);
    _8719 = NOVALUE;
    DeRef(_8702);
    _8702 = NOVALUE;
    return;
    ;
}



// 0x10222821
