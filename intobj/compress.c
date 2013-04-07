// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _59compress(object _x_22206)
{
    object _x4_22207 = NOVALUE;
    object _s_22208 = NOVALUE;
// skipping _12737  name type: 0
    object _12736 = NOVALUE; // 22287 12736
    object _12735 = NOVALUE; // 22286 12735
    object _12734 = NOVALUE; // 22285 12734
// skipping _12733  name type: 0
    object _12732 = NOVALUE; // 22281 12732
    object _12731 = NOVALUE; // 22280 12731
// skipping _12730  name type: 0
    object _12729 = NOVALUE; // 22276 12729
// skipping _12728  name type: 0
    object _12727 = NOVALUE; // 22274 12727
    object _12726 = NOVALUE; // 22271 12726
    object _12725 = NOVALUE; // 22270 12725
    object _12724 = NOVALUE; // 22267 12724
// skipping _12723  name type: 0
    object _12722 = NOVALUE; // 22265 12722
// skipping _12721  name type: 0
    object _12720 = NOVALUE; // 22259 12720
// skipping _12719  name type: 0
    object _12718 = NOVALUE; // 22257 12718
// skipping _12717  name type: 0
    object _12716 = NOVALUE; // 22252 12716
    object _12715 = NOVALUE; // 22250 12715
    object _12714 = NOVALUE; // 22249 12714
    object _12713 = NOVALUE; // 22248 12713
    object _12712 = NOVALUE; // 22246 12712
    object _12711 = NOVALUE; // 22245 12711
    object _12709 = NOVALUE; // 22241 12709
    object _12708 = NOVALUE; // 22240 12708
    object _12707 = NOVALUE; // 22238 12707
    object _12706 = NOVALUE; // 22237 12706
    object _12705 = NOVALUE; // 22236 12705
    object _12704 = NOVALUE; // 22234 12704
    object _12703 = NOVALUE; // 22233 12703
    object _12702 = NOVALUE; // 22232 12702
    object _12701 = NOVALUE; // 22231 12701
    object _12700 = NOVALUE; // 22230 12700
// skipping _12699  name type: 0
    object _12698 = NOVALUE; // 22228 12698
    object _12697 = NOVALUE; // 22227 12697
    object _12696 = NOVALUE; // 22226 12696
    object _12695 = NOVALUE; // 22224 12695
    object _12694 = NOVALUE; // 22223 12694
    object _12693 = NOVALUE; // 22222 12693
// skipping _12692  name type: 0
    object _12691 = NOVALUE; // 22220 12691
    object _12690 = NOVALUE; // 22219 12690
    object _12689 = NOVALUE; // 22218 12689
    object _12688 = NOVALUE; // 22216 12688
    object _12687 = NOVALUE; // 22215 12687
    object _12686 = NOVALUE; // 22214 12686
    object _12685 = NOVALUE; // 22213 12685
    object _12684 = NOVALUE; // 22212 12684
    object _12683 = NOVALUE; // 22210 12683
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg compress pc: 1 op: STARTLINE (58)

    /** compress.e:59		if integer(x) then*/
    // SubProg compress pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_x_22206))
    _12683 = 1;
    else if (IS_ATOM_DBL(_x_22206))
    _12683 = IS_ATOM_INT(DoubleToInt(_x_22206));
    else
    _12683 = 0;
    // SubProg compress pc: 6 op: IF (20)
    if (_12683 == 0)
    {
        _12683 = NOVALUE;
        goto L1; // [6] 235
    }
    else{
        _12683 = NOVALUE;
    }
    // SubProg compress pc: 9 op: STARTLINE (58)

    /** compress.e:60			if x >= MIN1B and x <= MAX1B then*/
    // SubProg compress pc: 11 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22206)) {
        _12684 = (_x_22206 >= -2);
    }
    else {
        _12684 = binary_op(GREATEREQ, _x_22206, -2);
    }
    // SubProg compress pc: 15 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12684)) {
        if (_12684 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_12684)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    // SubProg compress pc: 19 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22206)) {
        _12686 = (_x_22206 <= 244);
    }
    else {
        _12686 = binary_op(LESSEQ, _x_22206, 244);
    }
    // SubProg compress pc: 23 op: NOP1 (159)
    // SubProg compress pc: 24 op: IF (20)
    if (_12686 == 0) {
        DeRef(_12686);
        _12686 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_12686) && DBL_PTR(_12686)->dbl == 0.0){
            DeRef(_12686);
            _12686 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_12686);
        _12686 = NOVALUE;
    }
    DeRef(_12686);
    _12686 = NOVALUE;
    // SubProg compress pc: 27 op: STARTLINE (58)

    /** compress.e:61				return {x - MIN1B}*/
    // SubProg compress pc: 29 op: MINUS (10)
    if (IS_ATOM_INT(_x_22206)) {
        _12687 = _x_22206 - -2;
        if ((object)((uintptr_t)_12687 +(uintptr_t) HIGH_BITS) >= 0){
            _12687 = NewDouble((eudouble)_12687);
        }
    }
    else {
        _12687 = binary_op(MINUS, _x_22206, -2);
    }
    // SubProg compress pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12687;
    _12688 = MAKE_SEQ(_1);
    _12687 = NOVALUE;
    // SubProg compress pc: 37 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12684);
    _12684 = NOVALUE;
    return _12688;
    // SubProg compress pc: 41 op: ELSE (23)
    goto L3; // [41] 404
    // SubProg compress pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 22204 op: 159
    // SubProg compress pc: 44 op: STARTLINE (58)

    /** compress.e:63			elsif x >= MIN2B and x <= MAX2B then*/
    // SubProg compress pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 48 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22206)) {
        _12689 = (_x_22206 >= _59MIN2B_22180);
    }
    else {
        _12689 = binary_op(GREATEREQ, _x_22206, _59MIN2B_22180);
    }
    // SubProg compress pc: 52 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12689)) {
        if (_12689 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_12689)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    // SubProg compress pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22206)) {
        _12691 = (_x_22206 <= 32767);
    }
    else {
        _12691 = binary_op(LESSEQ, _x_22206, 32767);
    }
    // SubProg compress pc: 62 op: NOP1 (159)
    // SubProg compress pc: 63 op: IF (20)
    if (_12691 == 0) {
        DeRef(_12691);
        _12691 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_12691) && DBL_PTR(_12691)->dbl == 0.0){
            DeRef(_12691);
            _12691 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_12691);
        _12691 = NOVALUE;
    }
    DeRef(_12691);
    _12691 = NOVALUE;
    // SubProg compress pc: 66 op: STARTLINE (58)

    /** compress.e:64				x -= MIN2B*/
    // SubProg compress pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 70 op: MINUS (10)
    _0 = _x_22206;
    if (IS_ATOM_INT(_x_22206)) {
        _x_22206 = _x_22206 - _59MIN2B_22180;
        if ((object)((uintptr_t)_x_22206 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22206 = NewDouble((eudouble)_x_22206);
        }
    }
    else {
        _x_22206 = binary_op(MINUS, _x_22206, _59MIN2B_22180);
    }
    DeRef(_0);
    // SubProg compress pc: 74 op: STARTLINE (58)

    /** compress.e:65				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    // SubProg compress pc: 76 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22206)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22206 & (uintptr_t)255;
             _12693 = MAKE_UINT(tu);
        }
    }
    else {
        _12693 = binary_op(AND_BITS, _x_22206, 255);
    }
    // SubProg compress pc: 80 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22206)) {
        if (256 > 0 && _x_22206 >= 0) {
            _12694 = _x_22206 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22206 / (eudouble)256);
            if (_x_22206 != MININT)
            _12694 = (object)temp_dbl;
            else
            _12694 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22206, 256);
        _12694 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 247;
    ((intptr_t*)_2)[2] = _12693;
    ((intptr_t*)_2)[3] = _12694;
    _12695 = MAKE_SEQ(_1);
    _12694 = NOVALUE;
    _12693 = NOVALUE;
    // SubProg compress pc: 90 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    return _12695;
    // SubProg compress pc: 94 op: ELSE (23)
    goto L3; // [94] 404
    // SubProg compress pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 22204 op: 159
    // SubProg compress pc: 97 op: STARTLINE (58)

    /** compress.e:67			elsif x >= MIN3B and x <= MAX3B then*/
    // SubProg compress pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 101 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22206)) {
        _12696 = (_x_22206 >= _59MIN3B_22186);
    }
    else {
        _12696 = binary_op(GREATEREQ, _x_22206, _59MIN3B_22186);
    }
    // SubProg compress pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12696)) {
        if (_12696 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_12696)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    // SubProg compress pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 111 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22206)) {
        _12698 = (_x_22206 <= 8388607);
    }
    else {
        _12698 = binary_op(LESSEQ, _x_22206, 8388607);
    }
    // SubProg compress pc: 115 op: NOP1 (159)
    // SubProg compress pc: 116 op: IF (20)
    if (_12698 == 0) {
        DeRef(_12698);
        _12698 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_12698) && DBL_PTR(_12698)->dbl == 0.0){
            DeRef(_12698);
            _12698 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_12698);
        _12698 = NOVALUE;
    }
    DeRef(_12698);
    _12698 = NOVALUE;
    // SubProg compress pc: 119 op: STARTLINE (58)

    /** compress.e:68				x -= MIN3B*/
    // SubProg compress pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 123 op: MINUS (10)
    _0 = _x_22206;
    if (IS_ATOM_INT(_x_22206)) {
        _x_22206 = _x_22206 - _59MIN3B_22186;
        if ((object)((uintptr_t)_x_22206 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22206 = NewDouble((eudouble)_x_22206);
        }
    }
    else {
        _x_22206 = binary_op(MINUS, _x_22206, _59MIN3B_22186);
    }
    DeRef(_0);
    // SubProg compress pc: 127 op: STARTLINE (58)

    /** compress.e:69				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    // SubProg compress pc: 129 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22206)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22206 & (uintptr_t)255;
             _12700 = MAKE_UINT(tu);
        }
    }
    else {
        _12700 = binary_op(AND_BITS, _x_22206, 255);
    }
    // SubProg compress pc: 133 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22206)) {
        if (256 > 0 && _x_22206 >= 0) {
            _12701 = _x_22206 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22206 / (eudouble)256);
            if (_x_22206 != MININT)
            _12701 = (object)temp_dbl;
            else
            _12701 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22206, 256);
        _12701 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 137 op: AND_BITS (56)
    if (IS_ATOM_INT(_12701)) {
        {uintptr_t tu;
             tu = (uintptr_t)_12701 & (uintptr_t)255;
             _12702 = MAKE_UINT(tu);
        }
    }
    else {
        _12702 = binary_op(AND_BITS, _12701, 255);
    }
    DeRef(_12701);
    _12701 = NOVALUE;
    // SubProg compress pc: 141 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22206)) {
        if (65536 > 0 && _x_22206 >= 0) {
            _12703 = _x_22206 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22206 / (eudouble)65536);
            if (_x_22206 != MININT)
            _12703 = (object)temp_dbl;
            else
            _12703 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22206, 65536);
        _12703 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 145 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 248;
    ((intptr_t*)_2)[2] = _12700;
    ((intptr_t*)_2)[3] = _12702;
    ((intptr_t*)_2)[4] = _12703;
    _12704 = MAKE_SEQ(_1);
    _12703 = NOVALUE;
    _12702 = NOVALUE;
    _12700 = NOVALUE;
    // SubProg compress pc: 152 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12704;
    // SubProg compress pc: 156 op: ELSE (23)
    goto L3; // [156] 404
    // SubProg compress pc: 158 op: NOP1 (159)
L5: // addr: 159 pc: 158 sub: 22204 op: 159
    // SubProg compress pc: 159 op: STARTLINE (58)

    /** compress.e:71			elsif x >= MIN4B and x <= MAX4B then*/
    // SubProg compress pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 163 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22206) && IS_ATOM_INT(_59MIN4B_22192)) {
        _12705 = (_x_22206 >= _59MIN4B_22192);
    }
    else {
        _12705 = binary_op(GREATEREQ, _x_22206, _59MIN4B_22192);
    }
    // SubProg compress pc: 167 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12705)) {
        if (_12705 == 0) {
            goto L6; // [167] 199
        }
    }
    else {
        if (DBL_PTR(_12705)->dbl == 0.0) {
            goto L6; // [167] 199
        }
    }
    // SubProg compress pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 173 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22206) && IS_ATOM_INT(_59MAX4B_22195)) {
        _12707 = (_x_22206 <= _59MAX4B_22195);
    }
    else {
        _12707 = binary_op(LESSEQ, _x_22206, _59MAX4B_22195);
    }
    // SubProg compress pc: 177 op: NOP1 (159)
    // SubProg compress pc: 178 op: IF (20)
    if (_12707 == 0) {
        DeRef(_12707);
        _12707 = NOVALUE;
        goto L6; // [178] 199
    }
    else {
        if (!IS_ATOM_INT(_12707) && DBL_PTR(_12707)->dbl == 0.0){
            DeRef(_12707);
            _12707 = NOVALUE;
            goto L6; // [178] 199
        }
        DeRef(_12707);
        _12707 = NOVALUE;
    }
    DeRef(_12707);
    _12707 = NOVALUE;
    // SubProg compress pc: 181 op: STARTLINE (58)

    /** compress.e:72				return I4B & int_to_bytes(x)*/
    // SubProg compress pc: 183 op: PROC (27)
    Ref(_x_22206);
    _12708 = _21int_to_bytes(_x_22206, 4);
    // SubProg compress pc: 188 op: CONCAT (15)
    if (IS_SEQUENCE(249) && IS_ATOM(_12708)) {
    }
    else if (IS_ATOM(249) && IS_SEQUENCE(_12708)) {
        Prepend(&_12709, _12708, 249);
    }
    else {
        Concat((object_ptr)&_12709, 249, _12708);
    }
    DeRef(_12708);
    _12708 = NOVALUE;
    // SubProg compress pc: 192 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12709;
    // SubProg compress pc: 196 op: ELSE (23)
    goto L3; // [196] 404
    // SubProg compress pc: 198 op: NOP1 (159)
L6: // addr: 199 pc: 198 sub: 22204 op: 159
    // SubProg compress pc: 199 op: STARTLINE (58)

    /** compress.e:75				ifdef EU4_0 then*/
    // SubProg compress pc: 201 op: STARTLINE (58)

    /** compress.e:77					return I8B & int_to_bytes(remainder(x,#1_0000_0000)) & int_to_bytes(floor(x/#1_0000_0000))*/
    // SubProg compress pc: 203 op: REMAINDER (71)
    _12711 = binary_op(REMAINDER, _x_22206, _12710);
    // SubProg compress pc: 207 op: PROC (27)
    _12712 = _21int_to_bytes(_12711, 4);
    _12711 = NOVALUE;
    // SubProg compress pc: 212 op: FLOOR_DIV (63)
    _2 = binary_op(DIVIDE, _x_22206, _12710);
    _12713 = unary_op(FLOOR, _2);
    DeRef(_2);
    // SubProg compress pc: 216 op: PROC (27)
    _12714 = _21int_to_bytes(_12713, 4);
    _12713 = NOVALUE;
    // SubProg compress pc: 221 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _12714;
        concat_list[1] = _12712;
        concat_list[2] = 250;
        Concat_N((object_ptr)&_12715, concat_list, 3);
    }
    DeRef(_12714);
    _12714 = NOVALUE;
    DeRef(_12712);
    _12712 = NOVALUE;
    // SubProg compress pc: 227 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12715;
    // SubProg compress pc: 231 op: NOP1 (159)
    // SubProg compress pc: 232 op: ELSE (23)
    goto L3; // [232] 404
    // SubProg compress pc: 234 op: NOP1 (159)
L1: // addr: 235 pc: 234 sub: 22204 op: 159
    // SubProg compress pc: 235 op: STARTLINE (58)

    /** compress.e:83		elsif atom(x) then*/
    // SubProg compress pc: 237 op: IS_AN_ATOM (67)
    _12716 = IS_ATOM(_x_22206);
    // SubProg compress pc: 240 op: IF (20)
    if (_12716 == 0)
    {
        _12716 = NOVALUE;
        goto L7; // [240] 324
    }
    else{
        _12716 = NOVALUE;
    }
    // SubProg compress pc: 243 op: STARTLINE (58)

    /** compress.e:85			x4 = atom_to_float32(x)*/
    // SubProg compress pc: 245 op: PROC (27)
    Ref(_x_22206);
    _0 = _x4_22207;
    _x4_22207 = _21atom_to_float32(_x_22206);
    DeRef(_0);
    // SubProg compress pc: 249 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 251 op: STARTLINE (58)

    /** compress.e:86			if x = float32_to_atom(x4) then*/
    // SubProg compress pc: 253 op: PROC (27)
    RefDS(_x4_22207);
    _12718 = _21float32_to_atom(_x4_22207);
    // SubProg compress pc: 257 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22206, _12718)){
        DeRef(_12718);
        _12718 = NOVALUE;
        goto L8; // [257] 274
    }
    DeRef(_12718);
    _12718 = NOVALUE;
    // SubProg compress pc: 261 op: STARTLINE (58)

    /** compress.e:88				return F4B & x4*/
    // SubProg compress pc: 263 op: CONCAT (15)
    Prepend(&_12720, _x4_22207, 251);
    // SubProg compress pc: 267 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRefDS(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12715);
    _12715 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12720;
    // SubProg compress pc: 271 op: ELSE (23)
    goto L3; // [271] 404
    // SubProg compress pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 22204 op: 159
    // SubProg compress pc: 274 op: STARTLINE (58)

    /** compress.e:90				x4 = atom_to_float64( x )*/
    // SubProg compress pc: 276 op: PROC (27)
    Ref(_x_22206);
    _0 = _x4_22207;
    _x4_22207 = _21atom_to_float64(_x_22206);
    DeRef(_0);
    // SubProg compress pc: 280 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 282 op: STARTLINE (58)

    /** compress.e:91				if x = float64_to_atom( x4 ) then*/
    // SubProg compress pc: 284 op: PROC (27)
    RefDS(_x4_22207);
    _12722 = _21float64_to_atom(_x4_22207);
    // SubProg compress pc: 288 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22206, _12722)){
        DeRef(_12722);
        _12722 = NOVALUE;
        goto L9; // [288] 305
    }
    DeRef(_12722);
    _12722 = NOVALUE;
    // SubProg compress pc: 292 op: STARTLINE (58)

    /** compress.e:92					return F8B & x4*/
    // SubProg compress pc: 294 op: CONCAT (15)
    Prepend(&_12724, _x4_22207, 252);
    // SubProg compress pc: 298 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRefDS(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12720);
    _12720 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12715);
    _12715 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12724;
    // SubProg compress pc: 302 op: ELSE (23)
    goto L3; // [302] 404
    // SubProg compress pc: 304 op: NOP1 (159)
L9: // addr: 305 pc: 304 sub: 22204 op: 159
    // SubProg compress pc: 305 op: STARTLINE (58)

    /** compress.e:94					return F10B & atom_to_float80( x )*/
    // SubProg compress pc: 307 op: PROC (27)
    Ref(_x_22206);
    _12725 = _21atom_to_float80(_x_22206);
    // SubProg compress pc: 311 op: CONCAT (15)
    if (IS_SEQUENCE(253) && IS_ATOM(_12725)) {
    }
    else if (IS_ATOM(253) && IS_SEQUENCE(_12725)) {
        Prepend(&_12726, _12725, 253);
    }
    else {
        Concat((object_ptr)&_12726, 253, _12725);
    }
    DeRef(_12725);
    _12725 = NOVALUE;
    // SubProg compress pc: 315 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);

// block var s_22208
    DeRef(_s_22208);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12720);
    _12720 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12715);
    _12715 = NOVALUE;
    DeRef(_12724);
    _12724 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _12726;
    // SubProg compress pc: 319 op: NOP1 (159)
    // SubProg compress pc: 320 op: NOP1 (159)
    // SubProg compress pc: 321 op: ELSE (23)
    goto L3; // [321] 404
    // SubProg compress pc: 323 op: NOP1 (159)
L7: // addr: 324 pc: 323 sub: 22204 op: 159
    // SubProg compress pc: 324 op: STARTLINE (58)

    /** compress.e:100			if length(x) <= 255 then*/
    // SubProg compress pc: 326 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22206)){
            _12727 = SEQ_PTR(_x_22206)->length;
    }
    else {
        _12727 = 1;
    }
    // SubProg compress pc: 329 op: LESSEQ_IFW_I (123)
    if (_12727 > 255)
    goto LA; // [329] 345
    // SubProg compress pc: 333 op: STARTLINE (58)

    /** compress.e:101				s = {S1B, length(x)}*/
    // SubProg compress pc: 335 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22206)){
            _12729 = SEQ_PTR(_x_22206)->length;
    }
    else {
        _12729 = 1;
    }
    // SubProg compress pc: 338 op: RIGHT_BRACE_2 (85)
    DeRef(_s_22208);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _12729;
    _s_22208 = MAKE_SEQ(_1);
    _12729 = NOVALUE;
    // SubProg compress pc: 342 op: ELSE (23)
    goto LB; // [342] 360
    // SubProg compress pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 22204 op: 159
    // SubProg compress pc: 345 op: STARTLINE (58)

    /** compress.e:103				s = S4B & int_to_bytes(length(x))*/
    // SubProg compress pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22206)){
            _12731 = SEQ_PTR(_x_22206)->length;
    }
    else {
        _12731 = 1;
    }
    // SubProg compress pc: 350 op: PROC (27)
    _12732 = _21int_to_bytes(_12731, 4);
    _12731 = NOVALUE;
    // SubProg compress pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(255) && IS_ATOM(_12732)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_12732)) {
        Prepend(&_s_22208, _12732, 255);
    }
    else {
        Concat((object_ptr)&_s_22208, 255, _12732);
    }
    DeRef(_12732);
    _12732 = NOVALUE;
    // SubProg compress pc: 359 op: NOP1 (159)
LB: // addr: 360 pc: 359 sub: 22204 op: 159
    // SubProg compress pc: 360 op: STARTLINE (58)

    /** compress.e:105			for i = 1 to length(x) do*/
    // SubProg compress pc: 362 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22206)){
            _12734 = SEQ_PTR(_x_22206)->length;
    }
    else {
        _12734 = 1;
    }
    // SubProg compress pc: 365 op: FOR_I (125)
    {
        object _i_22284;
        _i_22284 = 1;
LC: // addr: 372 pc: 365 sub: 22204 op: 125
        if (_i_22284 > _12734){
            goto LD; // [365] 395
        }
        // SubProg compress pc: 372 op: STARTLINE (58)

        /** compress.e:106				s &= compress(x[i])*/
        // SubProg compress pc: 374 op: PRIVATE_INIT_CHECK (30)
        // SubProg compress pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_22206);
        _12735 = (object)*(((s1_ptr)_2)->base + _i_22284);
        // SubProg compress pc: 380 op: PROC (27)
        Ref(_12735);
        _12736 = _59compress(_12735);
        _12735 = NOVALUE;
        // SubProg compress pc: 384 op: CONCAT (15)
        if (IS_SEQUENCE(_s_22208) && IS_ATOM(_12736)) {
            Ref(_12736);
            Append(&_s_22208, _s_22208, _12736);
        }
        else if (IS_ATOM(_s_22208) && IS_SEQUENCE(_12736)) {
        }
        else {
            Concat((object_ptr)&_s_22208, _s_22208, _12736);
        }
        DeRef(_12736);
        _12736 = NOVALUE;
        // SubProg compress pc: 388 op: STARTLINE (58)

        /** compress.e:107			end for*/
        // SubProg compress pc: 390 op: ENDFOR_INT_UP1 (54)
        _i_22284 = _i_22284 + 1;
        goto LC; // [390] 372
LD: // addr: 395 pc: 390 sub: 22204 op: 54
        ;
    }
    // SubProg compress pc: 395 op: STARTLINE (58)

    /** compress.e:108			return s*/
    // SubProg compress pc: 397 op: PRIVATE_INIT_CHECK (30)
    // SubProg compress pc: 399 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22206
    DeRef(_x_22206);

// block var x4_22207
    DeRef(_x4_22207);
    DeRef(_12695);
    _12695 = NOVALUE;
    DeRef(_12720);
    _12720 = NOVALUE;
    DeRef(_12726);
    _12726 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12715);
    _12715 = NOVALUE;
    DeRef(_12724);
    _12724 = NOVALUE;
    DeRef(_12704);
    _12704 = NOVALUE;
    DeRef(_12684);
    _12684 = NOVALUE;
    DeRef(_12688);
    _12688 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    DeRef(_12696);
    _12696 = NOVALUE;
    return _s_22208;
    // SubProg compress pc: 403 op: NOP1 (159)
L3: // addr: 404 pc: 403 sub: 22204 op: 159
    // SubProg compress pc: 404 op: BADRETURNF (43)
    ;
}



// 0x5B488FB4
