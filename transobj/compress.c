// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _60compress(object _x_22182)
{
    object _x4_22183 = NOVALUE;
    object _s_22184 = NOVALUE;
// skipping _12718  name type: 0
    object _12717 = NOVALUE; // 22263 12717
    object _12716 = NOVALUE; // 22262 12716
    object _12715 = NOVALUE; // 22261 12715
// skipping _12714  name type: 0
    object _12713 = NOVALUE; // 22257 12713
    object _12712 = NOVALUE; // 22256 12712
// skipping _12711  name type: 0
    object _12710 = NOVALUE; // 22252 12710
// skipping _12709  name type: 0
    object _12708 = NOVALUE; // 22250 12708
    object _12707 = NOVALUE; // 22247 12707
    object _12706 = NOVALUE; // 22246 12706
    object _12705 = NOVALUE; // 22243 12705
// skipping _12704  name type: 0
    object _12703 = NOVALUE; // 22241 12703
// skipping _12702  name type: 0
    object _12701 = NOVALUE; // 22235 12701
// skipping _12700  name type: 0
    object _12699 = NOVALUE; // 22233 12699
// skipping _12698  name type: 0
    object _12697 = NOVALUE; // 22228 12697
    object _12696 = NOVALUE; // 22226 12696
    object _12695 = NOVALUE; // 22225 12695
    object _12694 = NOVALUE; // 22224 12694
    object _12693 = NOVALUE; // 22222 12693
    object _12692 = NOVALUE; // 22221 12692
    object _12690 = NOVALUE; // 22217 12690
    object _12689 = NOVALUE; // 22216 12689
    object _12688 = NOVALUE; // 22214 12688
    object _12687 = NOVALUE; // 22213 12687
    object _12686 = NOVALUE; // 22212 12686
    object _12685 = NOVALUE; // 22210 12685
    object _12684 = NOVALUE; // 22209 12684
    object _12683 = NOVALUE; // 22208 12683
    object _12682 = NOVALUE; // 22207 12682
    object _12681 = NOVALUE; // 22206 12681
// skipping _12680  name type: 0
    object _12679 = NOVALUE; // 22204 12679
    object _12678 = NOVALUE; // 22203 12678
    object _12677 = NOVALUE; // 22202 12677
    object _12676 = NOVALUE; // 22200 12676
    object _12675 = NOVALUE; // 22199 12675
    object _12674 = NOVALUE; // 22198 12674
// skipping _12673  name type: 0
    object _12672 = NOVALUE; // 22196 12672
    object _12671 = NOVALUE; // 22195 12671
    object _12670 = NOVALUE; // 22194 12670
    object _12669 = NOVALUE; // 22192 12669
    object _12668 = NOVALUE; // 22191 12668
    object _12667 = NOVALUE; // 22190 12667
    object _12666 = NOVALUE; // 22189 12666
    object _12665 = NOVALUE; // 22188 12665
    object _12664 = NOVALUE; // 22186 12664
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg compress pc: 1 op: STARTLINE (58)

    /** compress.e:59		if integer(x) then*/
    // SubProg compress pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_x_22182))
    _12664 = 1;
    else if (IS_ATOM_DBL(_x_22182))
    _12664 = IS_ATOM_INT(DoubleToInt(_x_22182));
    else
    _12664 = 0;
    // SubProg compress pc: 6 op: IF (20)
    if (_12664 == 0)
    {
        _12664 = NOVALUE;
        goto L1; // [6] 235
    }
    else{
        _12664 = NOVALUE;
    }
    // SubProg compress pc: 9 op: STARTLINE (58)

    /** compress.e:60			if x >= MIN1B and x <= MAX1B then*/
    // SubProg compress pc: 11 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22182)) {
        _12665 = (_x_22182 >= -2);
    }
    else {
        _12665 = binary_op(GREATEREQ, _x_22182, -2);
    }
    // SubProg compress pc: 15 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12665)) {
        if (_12665 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_12665)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    // SubProg compress pc: 19 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22182)) {
        _12667 = (_x_22182 <= 244);
    }
    else {
        _12667 = binary_op(LESSEQ, _x_22182, 244);
    }
    // SubProg compress pc: 23 op: NOP1 (159)
    // SubProg compress pc: 24 op: IF (20)
    if (_12667 == 0) {
        DeRef(_12667);
        _12667 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_12667) && DBL_PTR(_12667)->dbl == 0.0){
            DeRef(_12667);
            _12667 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_12667);
        _12667 = NOVALUE;
    }
    DeRef(_12667);
    _12667 = NOVALUE;
    // SubProg compress pc: 27 op: STARTLINE (58)

    /** compress.e:61				return {x - MIN1B}*/
    // SubProg compress pc: 29 op: MINUS (10)
    if (IS_ATOM_INT(_x_22182)) {
        _12668 = _x_22182 - -2;
        if ((object)((uintptr_t)_12668 +(uintptr_t) HIGH_BITS) >= 0){
            _12668 = NewDouble((eudouble)_12668);
        }
    }
    else {
        _12668 = binary_op(MINUS, _x_22182, -2);
    }
    // SubProg compress pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12668;
    _12669 = MAKE_SEQ(_1);
    _12668 = NOVALUE;
    // SubProg compress pc: 37 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12665);
    _12665 = NOVALUE;
    return _12669;
    // SubProg compress pc: 41 op: ELSE (23)
    goto L3; // [41] 404
    // SubProg compress pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 22180 op: 159
    // SubProg compress pc: 44 op: STARTLINE (58)

    /** compress.e:63			elsif x >= MIN2B and x <= MAX2B then*/
    // SubProg compress pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 48 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22182)) {
        _12670 = (_x_22182 >= _60MIN2B_22156);
    }
    else {
        _12670 = binary_op(GREATEREQ, _x_22182, _60MIN2B_22156);
    }
    // SubProg compress pc: 52 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12670)) {
        if (_12670 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_12670)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    // SubProg compress pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22182)) {
        _12672 = (_x_22182 <= 32767);
    }
    else {
        _12672 = binary_op(LESSEQ, _x_22182, 32767);
    }
    // SubProg compress pc: 62 op: NOP1 (159)
    // SubProg compress pc: 63 op: IF (20)
    if (_12672 == 0) {
        DeRef(_12672);
        _12672 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_12672) && DBL_PTR(_12672)->dbl == 0.0){
            DeRef(_12672);
            _12672 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_12672);
        _12672 = NOVALUE;
    }
    DeRef(_12672);
    _12672 = NOVALUE;
    // SubProg compress pc: 66 op: STARTLINE (58)

    /** compress.e:64				x -= MIN2B*/
    // SubProg compress pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 70 op: MINUS (10)
    _0 = _x_22182;
    if (IS_ATOM_INT(_x_22182)) {
        _x_22182 = _x_22182 - _60MIN2B_22156;
        if ((object)((uintptr_t)_x_22182 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22182 = NewDouble((eudouble)_x_22182);
        }
    }
    else {
        _x_22182 = binary_op(MINUS, _x_22182, _60MIN2B_22156);
    }
    DeRef(_0);
    // SubProg compress pc: 74 op: STARTLINE (58)

    /** compress.e:65				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    // SubProg compress pc: 76 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22182)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22182 & (uintptr_t)255;
             _12674 = MAKE_UINT(tu);
        }
    }
    else {
        _12674 = binary_op(AND_BITS, _x_22182, 255);
    }
    // SubProg compress pc: 80 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22182)) {
        if (256 > 0 && _x_22182 >= 0) {
            _12675 = _x_22182 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22182 / (eudouble)256);
            if (_x_22182 != MININT)
            _12675 = (object)temp_dbl;
            else
            _12675 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22182, 256);
        _12675 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 247;
    ((intptr_t*)_2)[2] = _12674;
    ((intptr_t*)_2)[3] = _12675;
    _12676 = MAKE_SEQ(_1);
    _12675 = NOVALUE;
    _12674 = NOVALUE;
    // SubProg compress pc: 90 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    return _12676;
    // SubProg compress pc: 94 op: ELSE (23)
    goto L3; // [94] 404
    // SubProg compress pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 22180 op: 159
    // SubProg compress pc: 97 op: STARTLINE (58)

    /** compress.e:67			elsif x >= MIN3B and x <= MAX3B then*/
    // SubProg compress pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 101 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22182)) {
        _12677 = (_x_22182 >= _60MIN3B_22162);
    }
    else {
        _12677 = binary_op(GREATEREQ, _x_22182, _60MIN3B_22162);
    }
    // SubProg compress pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12677)) {
        if (_12677 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_12677)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    // SubProg compress pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 111 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22182)) {
        _12679 = (_x_22182 <= 8388607);
    }
    else {
        _12679 = binary_op(LESSEQ, _x_22182, 8388607);
    }
    // SubProg compress pc: 115 op: NOP1 (159)
    // SubProg compress pc: 116 op: IF (20)
    if (_12679 == 0) {
        DeRef(_12679);
        _12679 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_12679) && DBL_PTR(_12679)->dbl == 0.0){
            DeRef(_12679);
            _12679 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_12679);
        _12679 = NOVALUE;
    }
    DeRef(_12679);
    _12679 = NOVALUE;
    // SubProg compress pc: 119 op: STARTLINE (58)

    /** compress.e:68				x -= MIN3B*/
    // SubProg compress pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 123 op: MINUS (10)
    _0 = _x_22182;
    if (IS_ATOM_INT(_x_22182)) {
        _x_22182 = _x_22182 - _60MIN3B_22162;
        if ((object)((uintptr_t)_x_22182 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22182 = NewDouble((eudouble)_x_22182);
        }
    }
    else {
        _x_22182 = binary_op(MINUS, _x_22182, _60MIN3B_22162);
    }
    DeRef(_0);
    // SubProg compress pc: 127 op: STARTLINE (58)

    /** compress.e:69				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    // SubProg compress pc: 129 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22182)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22182 & (uintptr_t)255;
             _12681 = MAKE_UINT(tu);
        }
    }
    else {
        _12681 = binary_op(AND_BITS, _x_22182, 255);
    }
    // SubProg compress pc: 133 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22182)) {
        if (256 > 0 && _x_22182 >= 0) {
            _12682 = _x_22182 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22182 / (eudouble)256);
            if (_x_22182 != MININT)
            _12682 = (object)temp_dbl;
            else
            _12682 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22182, 256);
        _12682 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 137 op: AND_BITS (56)
    if (IS_ATOM_INT(_12682)) {
        {uintptr_t tu;
             tu = (uintptr_t)_12682 & (uintptr_t)255;
             _12683 = MAKE_UINT(tu);
        }
    }
    else {
        _12683 = binary_op(AND_BITS, _12682, 255);
    }
    DeRef(_12682);
    _12682 = NOVALUE;
    // SubProg compress pc: 141 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22182)) {
        if (65536 > 0 && _x_22182 >= 0) {
            _12684 = _x_22182 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22182 / (eudouble)65536);
            if (_x_22182 != MININT)
            _12684 = (object)temp_dbl;
            else
            _12684 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22182, 65536);
        _12684 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 145 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 248;
    ((intptr_t*)_2)[2] = _12681;
    ((intptr_t*)_2)[3] = _12683;
    ((intptr_t*)_2)[4] = _12684;
    _12685 = MAKE_SEQ(_1);
    _12684 = NOVALUE;
    _12683 = NOVALUE;
    _12681 = NOVALUE;
    // SubProg compress pc: 152 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    return _12685;
    // SubProg compress pc: 156 op: ELSE (23)
    goto L3; // [156] 404
    // SubProg compress pc: 158 op: NOP1 (159)
L5: // addr: 159 pc: 158 sub: 22180 op: 159
    // SubProg compress pc: 159 op: STARTLINE (58)

    /** compress.e:71			elsif x >= MIN4B and x <= MAX4B then*/
    // SubProg compress pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 163 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22182) && IS_ATOM_INT(_60MIN4B_22168)) {
        _12686 = (_x_22182 >= _60MIN4B_22168);
    }
    else {
        _12686 = binary_op(GREATEREQ, _x_22182, _60MIN4B_22168);
    }
    // SubProg compress pc: 167 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12686)) {
        if (_12686 == 0) {
            goto L6; // [167] 199
        }
    }
    else {
        if (DBL_PTR(_12686)->dbl == 0.0) {
            goto L6; // [167] 199
        }
    }
    // SubProg compress pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 173 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22182) && IS_ATOM_INT(_60MAX4B_22171)) {
        _12688 = (_x_22182 <= _60MAX4B_22171);
    }
    else {
        _12688 = binary_op(LESSEQ, _x_22182, _60MAX4B_22171);
    }
    // SubProg compress pc: 177 op: NOP1 (159)
    // SubProg compress pc: 178 op: IF (20)
    if (_12688 == 0) {
        DeRef(_12688);
        _12688 = NOVALUE;
        goto L6; // [178] 199
    }
    else {
        if (!IS_ATOM_INT(_12688) && DBL_PTR(_12688)->dbl == 0.0){
            DeRef(_12688);
            _12688 = NOVALUE;
            goto L6; // [178] 199
        }
        DeRef(_12688);
        _12688 = NOVALUE;
    }
    DeRef(_12688);
    _12688 = NOVALUE;
    // SubProg compress pc: 181 op: STARTLINE (58)

    /** compress.e:72				return I4B & int_to_bytes(x)*/
    // SubProg compress pc: 183 op: PROC (27)
    Ref(_x_22182);
    _12689 = _18int_to_bytes(_x_22182, 4);
    // SubProg compress pc: 188 op: CONCAT (15)
    if (IS_SEQUENCE(249) && IS_ATOM(_12689)) {
    }
    else if (IS_ATOM(249) && IS_SEQUENCE(_12689)) {
        Prepend(&_12690, _12689, 249);
    }
    else {
        Concat((object_ptr)&_12690, 249, _12689);
    }
    DeRef(_12689);
    _12689 = NOVALUE;
    // SubProg compress pc: 192 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    return _12690;
    // SubProg compress pc: 196 op: ELSE (23)
    goto L3; // [196] 404
    // SubProg compress pc: 198 op: NOP1 (159)
L6: // addr: 199 pc: 198 sub: 22180 op: 159
    // SubProg compress pc: 199 op: STARTLINE (58)

    /** compress.e:75				ifdef EU4_0 then*/
    // SubProg compress pc: 201 op: STARTLINE (58)

    /** compress.e:77					return I8B & int_to_bytes(remainder(x,#1_0000_0000)) & int_to_bytes(floor(x/#1_0000_0000))*/
    // SubProg compress pc: 203 op: REMAINDER (71)
    _12692 = binary_op(REMAINDER, _x_22182, _12691);
    // SubProg compress pc: 207 op: PROC (27)
    _12693 = _18int_to_bytes(_12692, 4);
    _12692 = NOVALUE;
    // SubProg compress pc: 212 op: FLOOR_DIV (63)
    _2 = binary_op(DIVIDE, _x_22182, _12691);
    _12694 = unary_op(FLOOR, _2);
    DeRef(_2);
    // SubProg compress pc: 216 op: PROC (27)
    _12695 = _18int_to_bytes(_12694, 4);
    _12694 = NOVALUE;
    // SubProg compress pc: 221 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _12695;
        concat_list[1] = _12693;
        concat_list[2] = 250;
        Concat_N((object_ptr)&_12696, concat_list, 3);
    }
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12693);
    _12693 = NOVALUE;
    // SubProg compress pc: 227 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    return _12696;
    // SubProg compress pc: 231 op: NOP1 (159)
    // SubProg compress pc: 232 op: ELSE (23)
    goto L3; // [232] 404
    // SubProg compress pc: 234 op: NOP1 (159)
L1: // addr: 235 pc: 234 sub: 22180 op: 159
    // SubProg compress pc: 235 op: STARTLINE (58)

    /** compress.e:83		elsif atom(x) then*/
    // SubProg compress pc: 237 op: IS_AN_ATOM (67)
    _12697 = IS_ATOM(_x_22182);
    // SubProg compress pc: 240 op: IF (20)
    if (_12697 == 0)
    {
        _12697 = NOVALUE;
        goto L7; // [240] 324
    }
    else{
        _12697 = NOVALUE;
    }
    // SubProg compress pc: 243 op: STARTLINE (58)

    /** compress.e:85			x4 = atom_to_float32(x)*/
    // SubProg compress pc: 245 op: PROC (27)
    Ref(_x_22182);
    _0 = _x4_22183;
    _x4_22183 = _18atom_to_float32(_x_22182);
    DeRef(_0);
    // SubProg compress pc: 249 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 251 op: STARTLINE (58)

    /** compress.e:86			if x = float32_to_atom(x4) then*/
    // SubProg compress pc: 253 op: PROC (27)
    RefDS(_x4_22183);
    _12699 = _18float32_to_atom(_x4_22183);
    // SubProg compress pc: 257 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22182, _12699)){
        DeRef(_12699);
        _12699 = NOVALUE;
        goto L8; // [257] 274
    }
    DeRef(_12699);
    _12699 = NOVALUE;
    // SubProg compress pc: 261 op: STARTLINE (58)

    /** compress.e:88				return F4B & x4*/
    // SubProg compress pc: 263 op: CONCAT (15)
    Prepend(&_12701, _x4_22183, 251);
    // SubProg compress pc: 267 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRefDS(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12701;
    // SubProg compress pc: 271 op: ELSE (23)
    goto L3; // [271] 404
    // SubProg compress pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 22180 op: 159
    // SubProg compress pc: 274 op: STARTLINE (58)

    /** compress.e:90				x4 = atom_to_float64( x )*/
    // SubProg compress pc: 276 op: PROC (27)
    Ref(_x_22182);
    _0 = _x4_22183;
    _x4_22183 = _18atom_to_float64(_x_22182);
    DeRef(_0);
    // SubProg compress pc: 280 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 282 op: STARTLINE (58)

    /** compress.e:91				if x = float64_to_atom( x4 ) then*/
    // SubProg compress pc: 284 op: PROC (27)
    RefDS(_x4_22183);
    _12703 = _18float64_to_atom(_x4_22183);
    // SubProg compress pc: 288 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22182, _12703)){
        DeRef(_12703);
        _12703 = NOVALUE;
        goto L9; // [288] 305
    }
    DeRef(_12703);
    _12703 = NOVALUE;
    // SubProg compress pc: 292 op: STARTLINE (58)

    /** compress.e:92					return F8B & x4*/
    // SubProg compress pc: 294 op: CONCAT (15)
    Prepend(&_12705, _x4_22183, 252);
    // SubProg compress pc: 298 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRefDS(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12701);
    _12701 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12705;
    // SubProg compress pc: 302 op: ELSE (23)
    goto L3; // [302] 404
    // SubProg compress pc: 304 op: NOP1 (159)
L9: // addr: 305 pc: 304 sub: 22180 op: 159
    // SubProg compress pc: 305 op: STARTLINE (58)

    /** compress.e:94					return F10B & atom_to_float80( x )*/
    // SubProg compress pc: 307 op: PROC (27)
    Ref(_x_22182);
    _12706 = _18atom_to_float80(_x_22182);
    // SubProg compress pc: 311 op: CONCAT (15)
    if (IS_SEQUENCE(253) && IS_ATOM(_12706)) {
    }
    else if (IS_ATOM(253) && IS_SEQUENCE(_12706)) {
        Prepend(&_12707, _12706, 253);
    }
    else {
        Concat((object_ptr)&_12707, 253, _12706);
    }
    DeRef(_12706);
    _12706 = NOVALUE;
    // SubProg compress pc: 315 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);

// block var s_22184
    DeRef(_s_22184);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12701);
    _12701 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12707;
    // SubProg compress pc: 319 op: NOP1 (159)
    // SubProg compress pc: 320 op: NOP1 (159)
    // SubProg compress pc: 321 op: ELSE (23)
    goto L3; // [321] 404
    // SubProg compress pc: 323 op: NOP1 (159)
L7: // addr: 324 pc: 323 sub: 22180 op: 159
    // SubProg compress pc: 324 op: STARTLINE (58)

    /** compress.e:100			if length(x) <= 255 then*/
    // SubProg compress pc: 326 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22182)){
            _12708 = SEQ_PTR(_x_22182)->length;
    }
    else {
        _12708 = 1;
    }
    // SubProg compress pc: 329 op: LESSEQ_IFW_I (123)
    if (_12708 > 255)
    goto LA; // [329] 345
    // SubProg compress pc: 333 op: STARTLINE (58)

    /** compress.e:101				s = {S1B, length(x)}*/
    // SubProg compress pc: 335 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22182)){
            _12710 = SEQ_PTR(_x_22182)->length;
    }
    else {
        _12710 = 1;
    }
    // SubProg compress pc: 338 op: RIGHT_BRACE_2 (85)
    DeRef(_s_22184);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _12710;
    _s_22184 = MAKE_SEQ(_1);
    _12710 = NOVALUE;
    // SubProg compress pc: 342 op: ELSE (23)
    goto LB; // [342] 360
    // SubProg compress pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 22180 op: 159
    // SubProg compress pc: 345 op: STARTLINE (58)

    /** compress.e:103				s = S4B & int_to_bytes(length(x))*/
    // SubProg compress pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22182)){
            _12712 = SEQ_PTR(_x_22182)->length;
    }
    else {
        _12712 = 1;
    }
    // SubProg compress pc: 350 op: PROC (27)
    _12713 = _18int_to_bytes(_12712, 4);
    _12712 = NOVALUE;
    // SubProg compress pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(255) && IS_ATOM(_12713)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_12713)) {
        Prepend(&_s_22184, _12713, 255);
    }
    else {
        Concat((object_ptr)&_s_22184, 255, _12713);
    }
    DeRef(_12713);
    _12713 = NOVALUE;
    // SubProg compress pc: 359 op: NOP1 (159)
LB: // addr: 360 pc: 359 sub: 22180 op: 159
    // SubProg compress pc: 360 op: STARTLINE (58)

    /** compress.e:105			for i = 1 to length(x) do*/
    // SubProg compress pc: 362 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22182)){
            _12715 = SEQ_PTR(_x_22182)->length;
    }
    else {
        _12715 = 1;
    }
    // SubProg compress pc: 365 op: FOR_I (125)
    {
        object _i_22260;
        _i_22260 = 1;
LC: // addr: 372 pc: 365 sub: 22180 op: 125
        if (_i_22260 > _12715){
            goto LD; // [365] 395
        }
        // SubProg compress pc: 372 op: STARTLINE (58)

        /** compress.e:106				s &= compress(x[i])*/
        // SubProg compress pc: 374 op: PRIVATE_INIT_CHECK (30)
        // SubProg compress pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_22182);
        _12716 = (object)*(((s1_ptr)_2)->base + _i_22260);
        // SubProg compress pc: 380 op: PROC (27)
        Ref(_12716);
        _12717 = _60compress(_12716);
        _12716 = NOVALUE;
        // SubProg compress pc: 384 op: CONCAT (15)
        if (IS_SEQUENCE(_s_22184) && IS_ATOM(_12717)) {
            Ref(_12717);
            Append(&_s_22184, _s_22184, _12717);
        }
        else if (IS_ATOM(_s_22184) && IS_SEQUENCE(_12717)) {
        }
        else {
            Concat((object_ptr)&_s_22184, _s_22184, _12717);
        }
        DeRef(_12717);
        _12717 = NOVALUE;
        // SubProg compress pc: 388 op: STARTLINE (58)

        /** compress.e:107			end for*/
        // SubProg compress pc: 390 op: ENDFOR_INT_UP1 (54)
        _i_22260 = _i_22260 + 1;
        goto LC; // [390] 372
LD: // addr: 395 pc: 390 sub: 22180 op: 54
        ;
    }
    // SubProg compress pc: 395 op: STARTLINE (58)

    /** compress.e:108			return s*/
    // SubProg compress pc: 397 op: PRIVATE_INIT_CHECK (30)
    // SubProg compress pc: 399 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22182
    DeRef(_x_22182);

// block var x4_22183
    DeRef(_x4_22183);
    DeRef(_12677);
    _12677 = NOVALUE;
    DeRef(_12701);
    _12701 = NOVALUE;
    DeRef(_12685);
    _12685 = NOVALUE;
    DeRef(_12670);
    _12670 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12686);
    _12686 = NOVALUE;
    DeRef(_12676);
    _12676 = NOVALUE;
    DeRef(_12665);
    _12665 = NOVALUE;
    DeRef(_12707);
    _12707 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _s_22184;
    // SubProg compress pc: 403 op: NOP1 (159)
L3: // addr: 404 pc: 403 sub: 22180 op: 159
    // SubProg compress pc: 404 op: BADRETURNF (43)
    ;
}



// 0xDCC18173
