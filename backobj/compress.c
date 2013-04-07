// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _59compress(object _x_22185)
{
    object _x4_22186 = NOVALUE;
    object _s_22187 = NOVALUE;
// skipping _12722  name type: 0
    object _12721 = NOVALUE; // 22266 12721
    object _12720 = NOVALUE; // 22265 12720
    object _12719 = NOVALUE; // 22264 12719
// skipping _12718  name type: 0
    object _12717 = NOVALUE; // 22260 12717
    object _12716 = NOVALUE; // 22259 12716
// skipping _12715  name type: 0
    object _12714 = NOVALUE; // 22255 12714
// skipping _12713  name type: 0
    object _12712 = NOVALUE; // 22253 12712
    object _12711 = NOVALUE; // 22250 12711
    object _12710 = NOVALUE; // 22249 12710
    object _12709 = NOVALUE; // 22246 12709
// skipping _12708  name type: 0
    object _12707 = NOVALUE; // 22244 12707
// skipping _12706  name type: 0
    object _12705 = NOVALUE; // 22238 12705
// skipping _12704  name type: 0
    object _12703 = NOVALUE; // 22236 12703
// skipping _12702  name type: 0
    object _12701 = NOVALUE; // 22231 12701
    object _12700 = NOVALUE; // 22229 12700
    object _12699 = NOVALUE; // 22228 12699
    object _12698 = NOVALUE; // 22227 12698
    object _12697 = NOVALUE; // 22225 12697
    object _12696 = NOVALUE; // 22224 12696
    object _12694 = NOVALUE; // 22220 12694
    object _12693 = NOVALUE; // 22219 12693
    object _12692 = NOVALUE; // 22217 12692
    object _12691 = NOVALUE; // 22216 12691
    object _12690 = NOVALUE; // 22215 12690
    object _12689 = NOVALUE; // 22213 12689
    object _12688 = NOVALUE; // 22212 12688
    object _12687 = NOVALUE; // 22211 12687
    object _12686 = NOVALUE; // 22210 12686
    object _12685 = NOVALUE; // 22209 12685
// skipping _12684  name type: 0
    object _12683 = NOVALUE; // 22207 12683
    object _12682 = NOVALUE; // 22206 12682
    object _12681 = NOVALUE; // 22205 12681
    object _12680 = NOVALUE; // 22203 12680
    object _12679 = NOVALUE; // 22202 12679
    object _12678 = NOVALUE; // 22201 12678
// skipping _12677  name type: 0
    object _12676 = NOVALUE; // 22199 12676
    object _12675 = NOVALUE; // 22198 12675
    object _12674 = NOVALUE; // 22197 12674
    object _12673 = NOVALUE; // 22195 12673
    object _12672 = NOVALUE; // 22194 12672
    object _12671 = NOVALUE; // 22193 12671
    object _12670 = NOVALUE; // 22192 12670
    object _12669 = NOVALUE; // 22191 12669
    object _12668 = NOVALUE; // 22189 12668
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg compress pc: 1 op: STARTLINE (58)

    /** compress.e:59		if integer(x) then*/
    // SubProg compress pc: 3 op: IS_AN_INTEGER (94)
    if (IS_ATOM_INT(_x_22185))
    _12668 = 1;
    else if (IS_ATOM_DBL(_x_22185))
    _12668 = IS_ATOM_INT(DoubleToInt(_x_22185));
    else
    _12668 = 0;
    // SubProg compress pc: 6 op: IF (20)
    if (_12668 == 0)
    {
        _12668 = NOVALUE;
        goto L1; // [6] 235
    }
    else{
        _12668 = NOVALUE;
    }
    // SubProg compress pc: 9 op: STARTLINE (58)

    /** compress.e:60			if x >= MIN1B and x <= MAX1B then*/
    // SubProg compress pc: 11 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22185)) {
        _12669 = (_x_22185 >= -2);
    }
    else {
        _12669 = binary_op(GREATEREQ, _x_22185, -2);
    }
    // SubProg compress pc: 15 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12669)) {
        if (_12669 == 0) {
            goto L2; // [15] 44
        }
    }
    else {
        if (DBL_PTR(_12669)->dbl == 0.0) {
            goto L2; // [15] 44
        }
    }
    // SubProg compress pc: 19 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22185)) {
        _12671 = (_x_22185 <= 244);
    }
    else {
        _12671 = binary_op(LESSEQ, _x_22185, 244);
    }
    // SubProg compress pc: 23 op: NOP1 (159)
    // SubProg compress pc: 24 op: IF (20)
    if (_12671 == 0) {
        DeRef(_12671);
        _12671 = NOVALUE;
        goto L2; // [24] 44
    }
    else {
        if (!IS_ATOM_INT(_12671) && DBL_PTR(_12671)->dbl == 0.0){
            DeRef(_12671);
            _12671 = NOVALUE;
            goto L2; // [24] 44
        }
        DeRef(_12671);
        _12671 = NOVALUE;
    }
    DeRef(_12671);
    _12671 = NOVALUE;
    // SubProg compress pc: 27 op: STARTLINE (58)

    /** compress.e:61				return {x - MIN1B}*/
    // SubProg compress pc: 29 op: MINUS (10)
    if (IS_ATOM_INT(_x_22185)) {
        _12672 = _x_22185 - -2;
        if ((object)((uintptr_t)_12672 +(uintptr_t) HIGH_BITS) >= 0){
            _12672 = NewDouble((eudouble)_12672);
        }
    }
    else {
        _12672 = binary_op(MINUS, _x_22185, -2);
    }
    // SubProg compress pc: 33 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12672;
    _12673 = MAKE_SEQ(_1);
    _12672 = NOVALUE;
    // SubProg compress pc: 37 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12669);
    _12669 = NOVALUE;
    return _12673;
    // SubProg compress pc: 41 op: ELSE (23)
    goto L3; // [41] 404
    // SubProg compress pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 22183 op: 159
    // SubProg compress pc: 44 op: STARTLINE (58)

    /** compress.e:63			elsif x >= MIN2B and x <= MAX2B then*/
    // SubProg compress pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 48 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22185)) {
        _12674 = (_x_22185 >= _59MIN2B_22159);
    }
    else {
        _12674 = binary_op(GREATEREQ, _x_22185, _59MIN2B_22159);
    }
    // SubProg compress pc: 52 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12674)) {
        if (_12674 == 0) {
            goto L4; // [52] 97
        }
    }
    else {
        if (DBL_PTR(_12674)->dbl == 0.0) {
            goto L4; // [52] 97
        }
    }
    // SubProg compress pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 58 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22185)) {
        _12676 = (_x_22185 <= 32767);
    }
    else {
        _12676 = binary_op(LESSEQ, _x_22185, 32767);
    }
    // SubProg compress pc: 62 op: NOP1 (159)
    // SubProg compress pc: 63 op: IF (20)
    if (_12676 == 0) {
        DeRef(_12676);
        _12676 = NOVALUE;
        goto L4; // [63] 97
    }
    else {
        if (!IS_ATOM_INT(_12676) && DBL_PTR(_12676)->dbl == 0.0){
            DeRef(_12676);
            _12676 = NOVALUE;
            goto L4; // [63] 97
        }
        DeRef(_12676);
        _12676 = NOVALUE;
    }
    DeRef(_12676);
    _12676 = NOVALUE;
    // SubProg compress pc: 66 op: STARTLINE (58)

    /** compress.e:64				x -= MIN2B*/
    // SubProg compress pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 70 op: MINUS (10)
    _0 = _x_22185;
    if (IS_ATOM_INT(_x_22185)) {
        _x_22185 = _x_22185 - _59MIN2B_22159;
        if ((object)((uintptr_t)_x_22185 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22185 = NewDouble((eudouble)_x_22185);
        }
    }
    else {
        _x_22185 = binary_op(MINUS, _x_22185, _59MIN2B_22159);
    }
    DeRef(_0);
    // SubProg compress pc: 74 op: STARTLINE (58)

    /** compress.e:65				return {I2B, and_bits(x, #FF), floor(x / #100)}*/
    // SubProg compress pc: 76 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22185)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22185 & (uintptr_t)255;
             _12678 = MAKE_UINT(tu);
        }
    }
    else {
        _12678 = binary_op(AND_BITS, _x_22185, 255);
    }
    // SubProg compress pc: 80 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22185)) {
        if (256 > 0 && _x_22185 >= 0) {
            _12679 = _x_22185 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22185 / (eudouble)256);
            if (_x_22185 != MININT)
            _12679 = (object)temp_dbl;
            else
            _12679 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22185, 256);
        _12679 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 84 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 247;
    ((intptr_t*)_2)[2] = _12678;
    ((intptr_t*)_2)[3] = _12679;
    _12680 = MAKE_SEQ(_1);
    _12679 = NOVALUE;
    _12678 = NOVALUE;
    // SubProg compress pc: 90 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    return _12680;
    // SubProg compress pc: 94 op: ELSE (23)
    goto L3; // [94] 404
    // SubProg compress pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 22183 op: 159
    // SubProg compress pc: 97 op: STARTLINE (58)

    /** compress.e:67			elsif x >= MIN3B and x <= MAX3B then*/
    // SubProg compress pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 101 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22185)) {
        _12681 = (_x_22185 >= _59MIN3B_22165);
    }
    else {
        _12681 = binary_op(GREATEREQ, _x_22185, _59MIN3B_22165);
    }
    // SubProg compress pc: 105 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12681)) {
        if (_12681 == 0) {
            goto L5; // [105] 159
        }
    }
    else {
        if (DBL_PTR(_12681)->dbl == 0.0) {
            goto L5; // [105] 159
        }
    }
    // SubProg compress pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 111 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22185)) {
        _12683 = (_x_22185 <= 8388607);
    }
    else {
        _12683 = binary_op(LESSEQ, _x_22185, 8388607);
    }
    // SubProg compress pc: 115 op: NOP1 (159)
    // SubProg compress pc: 116 op: IF (20)
    if (_12683 == 0) {
        DeRef(_12683);
        _12683 = NOVALUE;
        goto L5; // [116] 159
    }
    else {
        if (!IS_ATOM_INT(_12683) && DBL_PTR(_12683)->dbl == 0.0){
            DeRef(_12683);
            _12683 = NOVALUE;
            goto L5; // [116] 159
        }
        DeRef(_12683);
        _12683 = NOVALUE;
    }
    DeRef(_12683);
    _12683 = NOVALUE;
    // SubProg compress pc: 119 op: STARTLINE (58)

    /** compress.e:68				x -= MIN3B*/
    // SubProg compress pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 123 op: MINUS (10)
    _0 = _x_22185;
    if (IS_ATOM_INT(_x_22185)) {
        _x_22185 = _x_22185 - _59MIN3B_22165;
        if ((object)((uintptr_t)_x_22185 +(uintptr_t) HIGH_BITS) >= 0){
            _x_22185 = NewDouble((eudouble)_x_22185);
        }
    }
    else {
        _x_22185 = binary_op(MINUS, _x_22185, _59MIN3B_22165);
    }
    DeRef(_0);
    // SubProg compress pc: 127 op: STARTLINE (58)

    /** compress.e:69				return {I3B, and_bits(x, #FF), and_bits(floor(x / #100), #FF), floor(x / #10000)}*/
    // SubProg compress pc: 129 op: AND_BITS (56)
    if (IS_ATOM_INT(_x_22185)) {
        {uintptr_t tu;
             tu = (uintptr_t)_x_22185 & (uintptr_t)255;
             _12685 = MAKE_UINT(tu);
        }
    }
    else {
        _12685 = binary_op(AND_BITS, _x_22185, 255);
    }
    // SubProg compress pc: 133 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22185)) {
        if (256 > 0 && _x_22185 >= 0) {
            _12686 = _x_22185 / 256;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22185 / (eudouble)256);
            if (_x_22185 != MININT)
            _12686 = (object)temp_dbl;
            else
            _12686 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22185, 256);
        _12686 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 137 op: AND_BITS (56)
    if (IS_ATOM_INT(_12686)) {
        {uintptr_t tu;
             tu = (uintptr_t)_12686 & (uintptr_t)255;
             _12687 = MAKE_UINT(tu);
        }
    }
    else {
        _12687 = binary_op(AND_BITS, _12686, 255);
    }
    DeRef(_12686);
    _12686 = NOVALUE;
    // SubProg compress pc: 141 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_x_22185)) {
        if (65536 > 0 && _x_22185 >= 0) {
            _12688 = _x_22185 / 65536;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_x_22185 / (eudouble)65536);
            if (_x_22185 != MININT)
            _12688 = (object)temp_dbl;
            else
            _12688 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _x_22185, 65536);
        _12688 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg compress pc: 145 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 248;
    ((intptr_t*)_2)[2] = _12685;
    ((intptr_t*)_2)[3] = _12687;
    ((intptr_t*)_2)[4] = _12688;
    _12689 = MAKE_SEQ(_1);
    _12688 = NOVALUE;
    _12687 = NOVALUE;
    _12685 = NOVALUE;
    // SubProg compress pc: 152 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    return _12689;
    // SubProg compress pc: 156 op: ELSE (23)
    goto L3; // [156] 404
    // SubProg compress pc: 158 op: NOP1 (159)
L5: // addr: 159 pc: 158 sub: 22183 op: 159
    // SubProg compress pc: 159 op: STARTLINE (58)

    /** compress.e:71			elsif x >= MIN4B and x <= MAX4B then*/
    // SubProg compress pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 163 op: GREATEREQ (2)
    if (IS_ATOM_INT(_x_22185) && IS_ATOM_INT(_59MIN4B_22171)) {
        _12690 = (_x_22185 >= _59MIN4B_22171);
    }
    else {
        _12690 = binary_op(GREATEREQ, _x_22185, _59MIN4B_22171);
    }
    // SubProg compress pc: 167 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_12690)) {
        if (_12690 == 0) {
            goto L6; // [167] 199
        }
    }
    else {
        if (DBL_PTR(_12690)->dbl == 0.0) {
            goto L6; // [167] 199
        }
    }
    // SubProg compress pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg compress pc: 173 op: LESSEQ (5)
    if (IS_ATOM_INT(_x_22185) && IS_ATOM_INT(_59MAX4B_22174)) {
        _12692 = (_x_22185 <= _59MAX4B_22174);
    }
    else {
        _12692 = binary_op(LESSEQ, _x_22185, _59MAX4B_22174);
    }
    // SubProg compress pc: 177 op: NOP1 (159)
    // SubProg compress pc: 178 op: IF (20)
    if (_12692 == 0) {
        DeRef(_12692);
        _12692 = NOVALUE;
        goto L6; // [178] 199
    }
    else {
        if (!IS_ATOM_INT(_12692) && DBL_PTR(_12692)->dbl == 0.0){
            DeRef(_12692);
            _12692 = NOVALUE;
            goto L6; // [178] 199
        }
        DeRef(_12692);
        _12692 = NOVALUE;
    }
    DeRef(_12692);
    _12692 = NOVALUE;
    // SubProg compress pc: 181 op: STARTLINE (58)

    /** compress.e:72				return I4B & int_to_bytes(x)*/
    // SubProg compress pc: 183 op: PROC (27)
    Ref(_x_22185);
    _12693 = _16int_to_bytes(_x_22185, 4);
    // SubProg compress pc: 188 op: CONCAT (15)
    if (IS_SEQUENCE(249) && IS_ATOM(_12693)) {
    }
    else if (IS_ATOM(249) && IS_SEQUENCE(_12693)) {
        Prepend(&_12694, _12693, 249);
    }
    else {
        Concat((object_ptr)&_12694, 249, _12693);
    }
    DeRef(_12693);
    _12693 = NOVALUE;
    // SubProg compress pc: 192 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    return _12694;
    // SubProg compress pc: 196 op: ELSE (23)
    goto L3; // [196] 404
    // SubProg compress pc: 198 op: NOP1 (159)
L6: // addr: 199 pc: 198 sub: 22183 op: 159
    // SubProg compress pc: 199 op: STARTLINE (58)

    /** compress.e:75				ifdef EU4_0 then*/
    // SubProg compress pc: 201 op: STARTLINE (58)

    /** compress.e:77					return I8B & int_to_bytes(remainder(x,#1_0000_0000)) & int_to_bytes(floor(x/#1_0000_0000))*/
    // SubProg compress pc: 203 op: REMAINDER (71)
    _12696 = binary_op(REMAINDER, _x_22185, _12695);
    // SubProg compress pc: 207 op: PROC (27)
    _12697 = _16int_to_bytes(_12696, 4);
    _12696 = NOVALUE;
    // SubProg compress pc: 212 op: FLOOR_DIV (63)
    _2 = binary_op(DIVIDE, _x_22185, _12695);
    _12698 = unary_op(FLOOR, _2);
    DeRef(_2);
    // SubProg compress pc: 216 op: PROC (27)
    _12699 = _16int_to_bytes(_12698, 4);
    _12698 = NOVALUE;
    // SubProg compress pc: 221 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _12699;
        concat_list[1] = _12697;
        concat_list[2] = 250;
        Concat_N((object_ptr)&_12700, concat_list, 3);
    }
    DeRef(_12699);
    _12699 = NOVALUE;
    DeRef(_12697);
    _12697 = NOVALUE;
    // SubProg compress pc: 227 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12694);
    _12694 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    return _12700;
    // SubProg compress pc: 231 op: NOP1 (159)
    // SubProg compress pc: 232 op: ELSE (23)
    goto L3; // [232] 404
    // SubProg compress pc: 234 op: NOP1 (159)
L1: // addr: 235 pc: 234 sub: 22183 op: 159
    // SubProg compress pc: 235 op: STARTLINE (58)

    /** compress.e:83		elsif atom(x) then*/
    // SubProg compress pc: 237 op: IS_AN_ATOM (67)
    _12701 = IS_ATOM(_x_22185);
    // SubProg compress pc: 240 op: IF (20)
    if (_12701 == 0)
    {
        _12701 = NOVALUE;
        goto L7; // [240] 324
    }
    else{
        _12701 = NOVALUE;
    }
    // SubProg compress pc: 243 op: STARTLINE (58)

    /** compress.e:85			x4 = atom_to_float32(x)*/
    // SubProg compress pc: 245 op: PROC (27)
    Ref(_x_22185);
    _0 = _x4_22186;
    _x4_22186 = _16atom_to_float32(_x_22185);
    DeRef(_0);
    // SubProg compress pc: 249 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 251 op: STARTLINE (58)

    /** compress.e:86			if x = float32_to_atom(x4) then*/
    // SubProg compress pc: 253 op: PROC (27)
    RefDS(_x4_22186);
    _12703 = _16float32_to_atom(_x4_22186);
    // SubProg compress pc: 257 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22185, _12703)){
        DeRef(_12703);
        _12703 = NOVALUE;
        goto L8; // [257] 274
    }
    DeRef(_12703);
    _12703 = NOVALUE;
    // SubProg compress pc: 261 op: STARTLINE (58)

    /** compress.e:88				return F4B & x4*/
    // SubProg compress pc: 263 op: CONCAT (15)
    Prepend(&_12705, _x4_22186, 251);
    // SubProg compress pc: 267 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRefDS(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12694);
    _12694 = NOVALUE;
    DeRef(_12700);
    _12700 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    return _12705;
    // SubProg compress pc: 271 op: ELSE (23)
    goto L3; // [271] 404
    // SubProg compress pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 22183 op: 159
    // SubProg compress pc: 274 op: STARTLINE (58)

    /** compress.e:90				x4 = atom_to_float64( x )*/
    // SubProg compress pc: 276 op: PROC (27)
    Ref(_x_22185);
    _0 = _x4_22186;
    _x4_22186 = _16atom_to_float64(_x_22185);
    DeRef(_0);
    // SubProg compress pc: 280 op: SEQUENCE_CHECK (97)
    // SubProg compress pc: 282 op: STARTLINE (58)

    /** compress.e:91				if x = float64_to_atom( x4 ) then*/
    // SubProg compress pc: 284 op: PROC (27)
    RefDS(_x4_22186);
    _12707 = _16float64_to_atom(_x4_22186);
    // SubProg compress pc: 288 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _x_22185, _12707)){
        DeRef(_12707);
        _12707 = NOVALUE;
        goto L9; // [288] 305
    }
    DeRef(_12707);
    _12707 = NOVALUE;
    // SubProg compress pc: 292 op: STARTLINE (58)

    /** compress.e:92					return F8B & x4*/
    // SubProg compress pc: 294 op: CONCAT (15)
    Prepend(&_12709, _x4_22186, 252);
    // SubProg compress pc: 298 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRefDS(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12694);
    _12694 = NOVALUE;
    DeRef(_12700);
    _12700 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    return _12709;
    // SubProg compress pc: 302 op: ELSE (23)
    goto L3; // [302] 404
    // SubProg compress pc: 304 op: NOP1 (159)
L9: // addr: 305 pc: 304 sub: 22183 op: 159
    // SubProg compress pc: 305 op: STARTLINE (58)

    /** compress.e:94					return F10B & atom_to_float80( x )*/
    // SubProg compress pc: 307 op: PROC (27)
    Ref(_x_22185);
    _12710 = _16atom_to_float80(_x_22185);
    // SubProg compress pc: 311 op: CONCAT (15)
    if (IS_SEQUENCE(253) && IS_ATOM(_12710)) {
    }
    else if (IS_ATOM(253) && IS_SEQUENCE(_12710)) {
        Prepend(&_12711, _12710, 253);
    }
    else {
        Concat((object_ptr)&_12711, 253, _12710);
    }
    DeRef(_12710);
    _12710 = NOVALUE;
    // SubProg compress pc: 315 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);

// block var s_22187
    DeRef(_s_22187);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12694);
    _12694 = NOVALUE;
    DeRef(_12700);
    _12700 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    return _12711;
    // SubProg compress pc: 319 op: NOP1 (159)
    // SubProg compress pc: 320 op: NOP1 (159)
    // SubProg compress pc: 321 op: ELSE (23)
    goto L3; // [321] 404
    // SubProg compress pc: 323 op: NOP1 (159)
L7: // addr: 324 pc: 323 sub: 22183 op: 159
    // SubProg compress pc: 324 op: STARTLINE (58)

    /** compress.e:100			if length(x) <= 255 then*/
    // SubProg compress pc: 326 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22185)){
            _12712 = SEQ_PTR(_x_22185)->length;
    }
    else {
        _12712 = 1;
    }
    // SubProg compress pc: 329 op: LESSEQ_IFW_I (123)
    if (_12712 > 255)
    goto LA; // [329] 345
    // SubProg compress pc: 333 op: STARTLINE (58)

    /** compress.e:101				s = {S1B, length(x)}*/
    // SubProg compress pc: 335 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22185)){
            _12714 = SEQ_PTR(_x_22185)->length;
    }
    else {
        _12714 = 1;
    }
    // SubProg compress pc: 338 op: RIGHT_BRACE_2 (85)
    DeRef(_s_22187);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 254;
    ((intptr_t *)_2)[2] = _12714;
    _s_22187 = MAKE_SEQ(_1);
    _12714 = NOVALUE;
    // SubProg compress pc: 342 op: ELSE (23)
    goto LB; // [342] 360
    // SubProg compress pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 22183 op: 159
    // SubProg compress pc: 345 op: STARTLINE (58)

    /** compress.e:103				s = S4B & int_to_bytes(length(x))*/
    // SubProg compress pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22185)){
            _12716 = SEQ_PTR(_x_22185)->length;
    }
    else {
        _12716 = 1;
    }
    // SubProg compress pc: 350 op: PROC (27)
    _12717 = _16int_to_bytes(_12716, 4);
    _12716 = NOVALUE;
    // SubProg compress pc: 355 op: CONCAT (15)
    if (IS_SEQUENCE(255) && IS_ATOM(_12717)) {
    }
    else if (IS_ATOM(255) && IS_SEQUENCE(_12717)) {
        Prepend(&_s_22187, _12717, 255);
    }
    else {
        Concat((object_ptr)&_s_22187, 255, _12717);
    }
    DeRef(_12717);
    _12717 = NOVALUE;
    // SubProg compress pc: 359 op: NOP1 (159)
LB: // addr: 360 pc: 359 sub: 22183 op: 159
    // SubProg compress pc: 360 op: STARTLINE (58)

    /** compress.e:105			for i = 1 to length(x) do*/
    // SubProg compress pc: 362 op: LENGTH (42)
    if (IS_SEQUENCE(_x_22185)){
            _12719 = SEQ_PTR(_x_22185)->length;
    }
    else {
        _12719 = 1;
    }
    // SubProg compress pc: 365 op: FOR_I (125)
    {
        object _i_22263;
        _i_22263 = 1;
LC: // addr: 372 pc: 365 sub: 22183 op: 125
        if (_i_22263 > _12719){
            goto LD; // [365] 395
        }
        // SubProg compress pc: 372 op: STARTLINE (58)

        /** compress.e:106				s &= compress(x[i])*/
        // SubProg compress pc: 374 op: PRIVATE_INIT_CHECK (30)
        // SubProg compress pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_x_22185);
        _12720 = (object)*(((s1_ptr)_2)->base + _i_22263);
        // SubProg compress pc: 380 op: PROC (27)
        Ref(_12720);
        _12721 = _59compress(_12720);
        _12720 = NOVALUE;
        // SubProg compress pc: 384 op: CONCAT (15)
        if (IS_SEQUENCE(_s_22187) && IS_ATOM(_12721)) {
            Ref(_12721);
            Append(&_s_22187, _s_22187, _12721);
        }
        else if (IS_ATOM(_s_22187) && IS_SEQUENCE(_12721)) {
        }
        else {
            Concat((object_ptr)&_s_22187, _s_22187, _12721);
        }
        DeRef(_12721);
        _12721 = NOVALUE;
        // SubProg compress pc: 388 op: STARTLINE (58)

        /** compress.e:107			end for*/
        // SubProg compress pc: 390 op: ENDFOR_INT_UP1 (54)
        _i_22263 = _i_22263 + 1;
        goto LC; // [390] 372
LD: // addr: 395 pc: 390 sub: 22183 op: 54
        ;
    }
    // SubProg compress pc: 395 op: STARTLINE (58)

    /** compress.e:108			return s*/
    // SubProg compress pc: 397 op: PRIVATE_INIT_CHECK (30)
    // SubProg compress pc: 399 op: RETURNF (28)

// Exiting block BLOCK: compress

// block var x_22185
    DeRef(_x_22185);

// block var x4_22186
    DeRef(_x4_22186);
    DeRef(_12690);
    _12690 = NOVALUE;
    DeRef(_12711);
    _12711 = NOVALUE;
    DeRef(_12689);
    _12689 = NOVALUE;
    DeRef(_12681);
    _12681 = NOVALUE;
    DeRef(_12669);
    _12669 = NOVALUE;
    DeRef(_12694);
    _12694 = NOVALUE;
    DeRef(_12700);
    _12700 = NOVALUE;
    DeRef(_12680);
    _12680 = NOVALUE;
    DeRef(_12673);
    _12673 = NOVALUE;
    DeRef(_12709);
    _12709 = NOVALUE;
    DeRef(_12674);
    _12674 = NOVALUE;
    DeRef(_12705);
    _12705 = NOVALUE;
    return _s_22187;
    // SubProg compress pc: 403 op: NOP1 (159)
L3: // addr: 404 pc: 403 sub: 22183 op: 159
    // SubProg compress pc: 404 op: BADRETURNF (43)
    ;
}


void _59init_compress()
{
// skipping _12726  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg init_compress pc: 1 op: STARTLINE (58)

    /** compress.e:136		comp_cache = repeat({}, COMP_CACHE_SIZE)*/
    // SubProg init_compress pc: 3 op: REPEAT (32)
    DeRef(_59comp_cache_22274);
    _59comp_cache_22274 = Repeat(_5, 64);
    // SubProg init_compress pc: 7 op: STARTLINE (58)

    /** compress.e:137	end procedure*/
    // SubProg init_compress pc: 9 op: RETURNP (29)

// Exiting block BLOCK: init_compress
    return;
    // SubProg init_compress pc: 12 op: BADRETURNF (43)
    ;
}


object _59get4()
{
    object _12797 = NOVALUE; // 22395 12797
    object _12796 = NOVALUE; // 22394 12796
    object _12795 = NOVALUE; // 22393 12795
    object _12794 = NOVALUE; // 22392 12794
    object _12793 = NOVALUE; // 22391 12793
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get4 pc: 1 op: STARTLINE (58)

    /** compress.e:230		poke(mem0, getc(current_db))*/
    // SubProg get4 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 7 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12793 = getc((FILE*)xstdin);
        }
        else{
            _12793 = getc(last_r_file_ptr);
        }
    }
    else{
        _12793 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 10 op: POKE (128)
    if (IS_ATOM_INT(_59mem0_22372)){
        poke_addr = (uint8_t *)_59mem0_22372;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem0_22372)->dbl);
    }
    *poke_addr = (uint8_t)_12793;
    _12793 = NOVALUE;
    // SubProg get4 pc: 13 op: STARTLINE (58)

    /** compress.e:231		poke(mem1, getc(current_db))*/
    // SubProg get4 pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 19 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12794 = getc((FILE*)xstdin);
        }
        else{
            _12794 = getc(last_r_file_ptr);
        }
    }
    else{
        _12794 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 22 op: POKE (128)
    if (IS_ATOM_INT(_59mem1_22374)){
        poke_addr = (uint8_t *)_59mem1_22374;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem1_22374)->dbl);
    }
    *poke_addr = (uint8_t)_12794;
    _12794 = NOVALUE;
    // SubProg get4 pc: 25 op: STARTLINE (58)

    /** compress.e:232		poke(mem2, getc(current_db))*/
    // SubProg get4 pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 31 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12795 = getc((FILE*)xstdin);
        }
        else{
            _12795 = getc(last_r_file_ptr);
        }
    }
    else{
        _12795 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 34 op: POKE (128)
    if (IS_ATOM_INT(_59mem2_22376)){
        poke_addr = (uint8_t *)_59mem2_22376;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem2_22376)->dbl);
    }
    *poke_addr = (uint8_t)_12795;
    _12795 = NOVALUE;
    // SubProg get4 pc: 37 op: STARTLINE (58)

    /** compress.e:233		poke(mem3, getc(current_db))*/
    // SubProg get4 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 43 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12796 = getc((FILE*)xstdin);
        }
        else{
            _12796 = getc(last_r_file_ptr);
        }
    }
    else{
        _12796 = getc(last_r_file_ptr);
    }
    // SubProg get4 pc: 46 op: POKE (128)
    if (IS_ATOM_INT(_59mem3_22378)){
        poke_addr = (uint8_t *)_59mem3_22378;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem3_22378)->dbl);
    }
    *poke_addr = (uint8_t)_12796;
    _12796 = NOVALUE;
    // SubProg get4 pc: 49 op: STARTLINE (58)

    /** compress.e:234		return peek4s(mem0)*/
    // SubProg get4 pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get4 pc: 53 op: PEEK4S (139)
    if (IS_ATOM_INT(_59mem0_22372)) {
        _12797 = (object)*(int32_t *)_59mem0_22372;
        if (_12797 < MININT || _12797 > MAXINT){
            _12797 = NewDouble((eudouble)(object)_12797);
        }
    }
    else {
        _12797 = (object)*(int32_t *)(uintptr_t)(DBL_PTR(_59mem0_22372)->dbl);
        if (_12797 < MININT || _12797 > MAXINT){
            _12797 = NewDouble((eudouble)(object)_12797);
        }
    }
    // SubProg get4 pc: 56 op: RETURNF (28)

// Exiting block BLOCK: get4
    return _12797;
    // SubProg get4 pc: 60 op: BADRETURNF (43)
    ;
}


object _59get8()
{
    object _12806 = NOVALUE; // 22406 12806
    object _12805 = NOVALUE; // 22405 12805
    object _12804 = NOVALUE; // 22404 12804
    object _12803 = NOVALUE; // 22403 12803
    object _12802 = NOVALUE; // 22402 12802
    object _12801 = NOVALUE; // 22401 12801
    object _12800 = NOVALUE; // 22400 12800
    object _12799 = NOVALUE; // 22399 12799
    object _12798 = NOVALUE; // 22398 12798
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get8 pc: 1 op: STARTLINE (58)

    /** compress.e:239		poke(mem0, getc(current_db))*/
    // SubProg get8 pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 7 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12798 = getc((FILE*)xstdin);
        }
        else{
            _12798 = getc(last_r_file_ptr);
        }
    }
    else{
        _12798 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 10 op: POKE (128)
    if (IS_ATOM_INT(_59mem0_22372)){
        poke_addr = (uint8_t *)_59mem0_22372;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem0_22372)->dbl);
    }
    *poke_addr = (uint8_t)_12798;
    _12798 = NOVALUE;
    // SubProg get8 pc: 13 op: STARTLINE (58)

    /** compress.e:240		poke(mem1, getc(current_db))*/
    // SubProg get8 pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 19 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12799 = getc((FILE*)xstdin);
        }
        else{
            _12799 = getc(last_r_file_ptr);
        }
    }
    else{
        _12799 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 22 op: POKE (128)
    if (IS_ATOM_INT(_59mem1_22374)){
        poke_addr = (uint8_t *)_59mem1_22374;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem1_22374)->dbl);
    }
    *poke_addr = (uint8_t)_12799;
    _12799 = NOVALUE;
    // SubProg get8 pc: 25 op: STARTLINE (58)

    /** compress.e:241		poke(mem2, getc(current_db))*/
    // SubProg get8 pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 31 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12800 = getc((FILE*)xstdin);
        }
        else{
            _12800 = getc(last_r_file_ptr);
        }
    }
    else{
        _12800 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 34 op: POKE (128)
    if (IS_ATOM_INT(_59mem2_22376)){
        poke_addr = (uint8_t *)_59mem2_22376;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem2_22376)->dbl);
    }
    *poke_addr = (uint8_t)_12800;
    _12800 = NOVALUE;
    // SubProg get8 pc: 37 op: STARTLINE (58)

    /** compress.e:242		poke(mem3, getc(current_db))*/
    // SubProg get8 pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 43 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12801 = getc((FILE*)xstdin);
        }
        else{
            _12801 = getc(last_r_file_ptr);
        }
    }
    else{
        _12801 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 46 op: POKE (128)
    if (IS_ATOM_INT(_59mem3_22378)){
        poke_addr = (uint8_t *)_59mem3_22378;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem3_22378)->dbl);
    }
    *poke_addr = (uint8_t)_12801;
    _12801 = NOVALUE;
    // SubProg get8 pc: 49 op: STARTLINE (58)

    /** compress.e:243		poke(mem4, getc(current_db))*/
    // SubProg get8 pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 55 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12802 = getc((FILE*)xstdin);
        }
        else{
            _12802 = getc(last_r_file_ptr);
        }
    }
    else{
        _12802 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 58 op: POKE (128)
    if (IS_ATOM_INT(_59mem4_22380)){
        poke_addr = (uint8_t *)_59mem4_22380;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem4_22380)->dbl);
    }
    *poke_addr = (uint8_t)_12802;
    _12802 = NOVALUE;
    // SubProg get8 pc: 61 op: STARTLINE (58)

    /** compress.e:244		poke(mem5, getc(current_db))*/
    // SubProg get8 pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 67 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12803 = getc((FILE*)xstdin);
        }
        else{
            _12803 = getc(last_r_file_ptr);
        }
    }
    else{
        _12803 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 70 op: POKE (128)
    if (IS_ATOM_INT(_59mem5_22382)){
        poke_addr = (uint8_t *)_59mem5_22382;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem5_22382)->dbl);
    }
    *poke_addr = (uint8_t)_12803;
    _12803 = NOVALUE;
    // SubProg get8 pc: 73 op: STARTLINE (58)

    /** compress.e:245		poke(mem6, getc(current_db))*/
    // SubProg get8 pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 79 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12804 = getc((FILE*)xstdin);
        }
        else{
            _12804 = getc(last_r_file_ptr);
        }
    }
    else{
        _12804 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 82 op: POKE (128)
    if (IS_ATOM_INT(_59mem6_22384)){
        poke_addr = (uint8_t *)_59mem6_22384;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem6_22384)->dbl);
    }
    *poke_addr = (uint8_t)_12804;
    _12804 = NOVALUE;
    // SubProg get8 pc: 85 op: STARTLINE (58)

    /** compress.e:246		poke(mem7, getc(current_db))*/
    // SubProg get8 pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 91 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12805 = getc((FILE*)xstdin);
        }
        else{
            _12805 = getc(last_r_file_ptr);
        }
    }
    else{
        _12805 = getc(last_r_file_ptr);
    }
    // SubProg get8 pc: 94 op: POKE (128)
    if (IS_ATOM_INT(_59mem7_22386)){
        poke_addr = (uint8_t *)_59mem7_22386;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_59mem7_22386)->dbl);
    }
    *poke_addr = (uint8_t)_12805;
    _12805 = NOVALUE;
    // SubProg get8 pc: 97 op: STARTLINE (58)

    /** compress.e:247		return peek8s(mem0)*/
    // SubProg get8 pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg get8 pc: 101 op: PEEK8S (213)
    {
        int64_t peek8_longlong;
        if (IS_ATOM_INT(_59mem0_22372)) {
            peek8_longlong = *(int64_t *)_59mem0_22372;
            if (peek8_longlong < (int64_t)MININT || peek8_longlong > (int64_t) MAXINT){
                _12806 = NewDouble((eudouble) peek8_longlong);
            }
            else{
                _12806 = (object) peek8_longlong;
            }
        }
        else {
            peek8_longlong = *(int64_t *)(uintptr_t)(DBL_PTR(_59mem0_22372)->dbl);
            if (peek8_longlong < (int64_t)MININT || peek8_longlong > (int64_t) MAXINT){
                _12806 = NewDouble((eudouble) peek8_longlong);
            }
            else{
                _12806 = (object) peek8_longlong;
            }
        }
    }
    // SubProg get8 pc: 104 op: RETURNF (28)

// Exiting block BLOCK: get8
    return _12806;
    // SubProg get8 pc: 108 op: BADRETURNF (43)
    ;
}


object _59fdecompress(object _c_22409)
{
    object _s_22410 = NOVALUE;
    object _len_22411 = NOVALUE;
    object _ival_22412 = NOVALUE;
    object _12891 = NOVALUE; // 22519 12891
    object _12890 = NOVALUE; // 22518 12890
    object _12889 = NOVALUE; // 22516 12889
    object _12888 = NOVALUE; // 22515 12888
// skipping _12887  name type: 0
    object _12886 = NOVALUE; // 22513 12886
    object _12885 = NOVALUE; // 22511 12885
// skipping _12884  name type: 0
// skipping _12883  name type: 0
// skipping _12882  name type: 0
    object _12881 = NOVALUE; // 22505 12881
// skipping _12880  name type: 0
// skipping _12879  name type: 0
// skipping _12878  name type: 0
// skipping _12877  name type: 0
    object _12876 = NOVALUE; // 22495 12876
    object _12875 = NOVALUE; // 22494 12875
    object _12874 = NOVALUE; // 22493 12874
    object _12873 = NOVALUE; // 22492 12873
    object _12872 = NOVALUE; // 22491 12872
    object _12871 = NOVALUE; // 22490 12871
    object _12870 = NOVALUE; // 22489 12870
    object _12869 = NOVALUE; // 22488 12869
    object _12868 = NOVALUE; // 22487 12868
    object _12867 = NOVALUE; // 22486 12867
    object _12866 = NOVALUE; // 22485 12866
    object _12865 = NOVALUE; // 22484 12865
// skipping _12864  name type: 0
    object _12863 = NOVALUE; // 22480 12863
    object _12862 = NOVALUE; // 22479 12862
    object _12861 = NOVALUE; // 22478 12861
    object _12860 = NOVALUE; // 22477 12860
    object _12859 = NOVALUE; // 22476 12859
    object _12858 = NOVALUE; // 22475 12858
    object _12857 = NOVALUE; // 22474 12857
    object _12856 = NOVALUE; // 22473 12856
    object _12855 = NOVALUE; // 22472 12855
    object _12854 = NOVALUE; // 22471 12854
// skipping _12853  name type: 0
    object _12852 = NOVALUE; // 22467 12852
    object _12851 = NOVALUE; // 22466 12851
    object _12850 = NOVALUE; // 22465 12850
    object _12849 = NOVALUE; // 22464 12849
    object _12848 = NOVALUE; // 22463 12848
    object _12847 = NOVALUE; // 22462 12847
// skipping _12846  name type: 0
    object _12845 = NOVALUE; // 22458 12845
    object _12844 = NOVALUE; // 22457 12844
    object _12843 = NOVALUE; // 22456 12843
// skipping _12842  name type: 0
// skipping _12841  name type: 0
    object _12840 = NOVALUE; // 22452 12840
    object _12839 = NOVALUE; // 22451 12839
    object _12838 = NOVALUE; // 22450 12838
// skipping _12837  name type: 0
// skipping _12836  name type: 0
    object _12835 = NOVALUE; // 22446 12835
    object _12834 = NOVALUE; // 22445 12834
    object _12833 = NOVALUE; // 22444 12833
// skipping _12832  name type: 0
    object _12831 = NOVALUE; // 22442 12831
    object _12830 = NOVALUE; // 22441 12830
    object _12829 = NOVALUE; // 22440 12829
    object _12828 = NOVALUE; // 22439 12828
    object _12827 = NOVALUE; // 22438 12827
    object _12826 = NOVALUE; // 22437 12826
    object _12825 = NOVALUE; // 22436 12825
// skipping _12824  name type: 0
    object _12823 = NOVALUE; // 22433 12823
    object _12822 = NOVALUE; // 22432 12822
    object _12821 = NOVALUE; // 22431 12821
// skipping _12820  name type: 0
    object _12819 = NOVALUE; // 22429 12819
    object _12818 = NOVALUE; // 22428 12818
    object _12817 = NOVALUE; // 22427 12817
    object _12816 = NOVALUE; // 22426 12816
// skipping _12815  name type: 0
    object _12814 = NOVALUE; // 22423 12814
    object _12813 = NOVALUE; // 22422 12813
// skipping _12812  name type: 0
    object _12811 = NOVALUE; // 22420 12811
    object _12810 = NOVALUE; // 22418 12810
// skipping _12809  name type: 0
// skipping _12808  name type: 0
// skipping _12807  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fdecompress pc: 1 op: INTEGER_CHECK (96)
    // SubProg fdecompress pc: 3 op: STARTLINE (58)

    /** compress.e:258		if c = 0 then*/
    // SubProg fdecompress pc: 5 op: EQUALS_IFW_I (121)
    if (_c_22409 != 0)
    goto L1; // [5] 70
    // SubProg fdecompress pc: 9 op: STARTLINE (58)

    /** compress.e:259			c = getc(current_db)*/
    // SubProg fdecompress pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 13 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _c_22409 = getc((FILE*)xstdin);
        }
        else{
            _c_22409 = getc(last_r_file_ptr);
        }
    }
    else{
        _c_22409 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 16 op: STARTLINE (58)

    /** compress.e:260			if c <= CACHE0 then*/
    // SubProg fdecompress pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 20 op: LESSEQ_IFW (106)
    if (_c_22409 > 182)
    goto L2; // [20] 37
    // SubProg fdecompress pc: 24 op: STARTLINE (58)

    /** compress.e:261				return c + MIN1B  -- a normal, quite small integer*/
    // SubProg fdecompress pc: 26 op: PLUS (11)
    _12810 = _c_22409 + -2;
    // SubProg fdecompress pc: 30 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411

// block var ival_22412
    return _12810;
    // SubProg fdecompress pc: 34 op: ELSE (23)
    goto L3; // [34] 69
    // SubProg fdecompress pc: 36 op: NOP1 (159)
L2: // addr: 37 pc: 36 sub: 22407 op: 159
    // SubProg fdecompress pc: 37 op: STARTLINE (58)

    /** compress.e:263			elsif c <= CACHE0 + COMP_CACHE_SIZE then*/
    // SubProg fdecompress pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 41 op: PLUS (11)
    _12811 = 246;
    // SubProg fdecompress pc: 45 op: LESSEQ_IFW (106)
    if (_c_22409 > 246)
    goto L4; // [45] 68
    // SubProg fdecompress pc: 49 op: STARTLINE (58)

    /** compress.e:266				return comp_cache[c-CACHE0]*/
    // SubProg fdecompress pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 55 op: MINUS (10)
    _12813 = _c_22409 - 182;
    // SubProg fdecompress pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_59comp_cache_22274);
    _12814 = (object)*(((s1_ptr)_2)->base + _12813);
    // SubProg fdecompress pc: 63 op: RETURNF (28)
    Ref(_12814);

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411

// block var ival_22412
    DeRef(_12810);
    _12810 = NOVALUE;
    _12813 = NOVALUE;
    _12811 = NOVALUE;
    return _12814;
    // SubProg fdecompress pc: 67 op: NOP1 (159)
L4: // addr: 68 pc: 67 sub: 22407 op: 159
    // SubProg fdecompress pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 22407 op: 159
    // SubProg fdecompress pc: 69 op: NOP1 (159)
L1: // addr: 70 pc: 69 sub: 22407 op: 159
    // SubProg fdecompress pc: 70 op: STARTLINE (58)

    /** compress.e:271		if c = I2B then*/
    // SubProg fdecompress pc: 72 op: EQUALS_IFW_I (121)
    if (_c_22409 != 247)
    goto L5; // [72] 133
    // SubProg fdecompress pc: 76 op: STARTLINE (58)

    /** compress.e:272			ival = getc(current_db) +*/
    // SubProg fdecompress pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 80 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12816 = getc((FILE*)xstdin);
        }
        else{
            _12816 = getc(last_r_file_ptr);
        }
    }
    else{
        _12816 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 85 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12817 = getc((FILE*)xstdin);
        }
        else{
            _12817 = getc(last_r_file_ptr);
        }
    }
    else{
        _12817 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 88 op: MULTIPLY (13)
    _12818 = 256 * _12817;
    _12817 = NOVALUE;
    // SubProg fdecompress pc: 92 op: PLUS (11)
    _12819 = _12816 + _12818;
    _12816 = NOVALUE;
    _12818 = NOVALUE;
    // SubProg fdecompress pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 98 op: PLUS (11)
    _ival_22412 = _12819 + _59MIN2B_22159;
    _12819 = NOVALUE;
    // SubProg fdecompress pc: 104 op: STARTLINE (58)

    /** compress.e:276			comp_cache[1 + and_bits(ival, COMP_CACHE_SIZE-1)] = ival*/
    // SubProg fdecompress pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 108 op: MINUS (10)
    _12821 = 63;
    // SubProg fdecompress pc: 112 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_ival_22412 & (uintptr_t)63;
         _12822 = MAKE_UINT(tu);
    }
    _12821 = NOVALUE;
    // SubProg fdecompress pc: 116 op: PLUS1 (93)
    if (IS_ATOM_INT(_12822)) {
        _12823 = _12822 + 1;
    }
    else
    _12823 = binary_op(PLUS, 1, _12822);
    DeRef(_12822);
    _12822 = NOVALUE;
    // SubProg fdecompress pc: 120 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_59comp_cache_22274);
    if (!IS_ATOM_INT(_12823))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_12823)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _12823);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _ival_22412;
    DeRef(_1);
    // SubProg fdecompress pc: 124 op: STARTLINE (58)

    /** compress.e:277			return ival*/
    // SubProg fdecompress pc: 126 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    return _ival_22412;
    // SubProg fdecompress pc: 130 op: ELSE (23)
    goto L6; // [130] 632
    // SubProg fdecompress pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 22407 op: 159
    // SubProg fdecompress pc: 133 op: STARTLINE (58)

    /** compress.e:279		elsif c = I3B then*/
    // SubProg fdecompress pc: 135 op: EQUALS_IFW_I (121)
    if (_c_22409 != 248)
    goto L7; // [135] 209
    // SubProg fdecompress pc: 139 op: STARTLINE (58)

    /** compress.e:280			ival = getc(current_db) +*/
    // SubProg fdecompress pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 143 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12825 = getc((FILE*)xstdin);
        }
        else{
            _12825 = getc(last_r_file_ptr);
        }
    }
    else{
        _12825 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 148 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12826 = getc((FILE*)xstdin);
        }
        else{
            _12826 = getc(last_r_file_ptr);
        }
    }
    else{
        _12826 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 151 op: MULTIPLY (13)
    _12827 = 256 * _12826;
    _12826 = NOVALUE;
    // SubProg fdecompress pc: 155 op: PLUS (11)
    _12828 = _12825 + _12827;
    _12825 = NOVALUE;
    _12827 = NOVALUE;
    // SubProg fdecompress pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 161 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12829 = getc((FILE*)xstdin);
        }
        else{
            _12829 = getc(last_r_file_ptr);
        }
    }
    else{
        _12829 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 164 op: MULTIPLY (13)
    _12830 = 65536 * _12829;
    _12829 = NOVALUE;
    // SubProg fdecompress pc: 168 op: PLUS (11)
    _12831 = _12828 + _12830;
    _12828 = NOVALUE;
    _12830 = NOVALUE;
    // SubProg fdecompress pc: 172 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 174 op: PLUS (11)
    _ival_22412 = _12831 + _59MIN3B_22165;
    _12831 = NOVALUE;
    // SubProg fdecompress pc: 180 op: STARTLINE (58)

    /** compress.e:285			comp_cache[1 + and_bits(ival, COMP_CACHE_SIZE-1)] = ival*/
    // SubProg fdecompress pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 184 op: MINUS (10)
    _12833 = 63;
    // SubProg fdecompress pc: 188 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_ival_22412 & (uintptr_t)63;
         _12834 = MAKE_UINT(tu);
    }
    _12833 = NOVALUE;
    // SubProg fdecompress pc: 192 op: PLUS1 (93)
    if (IS_ATOM_INT(_12834)) {
        _12835 = _12834 + 1;
    }
    else
    _12835 = binary_op(PLUS, 1, _12834);
    DeRef(_12834);
    _12834 = NOVALUE;
    // SubProg fdecompress pc: 196 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_59comp_cache_22274);
    if (!IS_ATOM_INT(_12835))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_12835)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _12835);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _ival_22412;
    DeRef(_1);
    // SubProg fdecompress pc: 200 op: STARTLINE (58)

    /** compress.e:286			return ival*/
    // SubProg fdecompress pc: 202 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    return _ival_22412;
    // SubProg fdecompress pc: 206 op: ELSE (23)
    goto L6; // [206] 632
    // SubProg fdecompress pc: 208 op: NOP1 (159)
L7: // addr: 209 pc: 208 sub: 22407 op: 159
    // SubProg fdecompress pc: 209 op: STARTLINE (58)

    /** compress.e:288		elsif c = I4B  then*/
    // SubProg fdecompress pc: 211 op: EQUALS_IFW_I (121)
    if (_c_22409 != 249)
    goto L8; // [211] 251
    // SubProg fdecompress pc: 215 op: STARTLINE (58)

    /** compress.e:289			ival = get4()*/
    // SubProg fdecompress pc: 217 op: PROC (27)
    _ival_22412 = _59get4();
    // SubProg fdecompress pc: 220 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ival_22412)) {
        _1 = (object)(DBL_PTR(_ival_22412)->dbl);
        DeRefDS(_ival_22412);
        _ival_22412 = _1;
    }
    // SubProg fdecompress pc: 222 op: STARTLINE (58)

    /** compress.e:291			comp_cache[1 + and_bits(ival, COMP_CACHE_SIZE-1)] = ival*/
    // SubProg fdecompress pc: 224 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 226 op: MINUS (10)
    _12838 = 63;
    // SubProg fdecompress pc: 230 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_ival_22412 & (uintptr_t)63;
         _12839 = MAKE_UINT(tu);
    }
    _12838 = NOVALUE;
    // SubProg fdecompress pc: 234 op: PLUS1 (93)
    if (IS_ATOM_INT(_12839)) {
        _12840 = _12839 + 1;
    }
    else
    _12840 = binary_op(PLUS, 1, _12839);
    DeRef(_12839);
    _12839 = NOVALUE;
    // SubProg fdecompress pc: 238 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_59comp_cache_22274);
    if (!IS_ATOM_INT(_12840))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_12840)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _12840);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _ival_22412;
    DeRef(_1);
    // SubProg fdecompress pc: 242 op: STARTLINE (58)

    /** compress.e:292			return ival*/
    // SubProg fdecompress pc: 244 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    return _ival_22412;
    // SubProg fdecompress pc: 248 op: ELSE (23)
    goto L6; // [248] 632
    // SubProg fdecompress pc: 250 op: NOP1 (159)
L8: // addr: 251 pc: 250 sub: 22407 op: 159
    // SubProg fdecompress pc: 251 op: STARTLINE (58)

    /** compress.e:294		elsif c = I8B then*/
    // SubProg fdecompress pc: 253 op: EQUALS_IFW_I (121)
    if (_c_22409 != 250)
    goto L9; // [253] 293
    // SubProg fdecompress pc: 257 op: STARTLINE (58)

    /** compress.e:295			ival = get8()*/
    // SubProg fdecompress pc: 259 op: PROC (27)
    _ival_22412 = _59get8();
    // SubProg fdecompress pc: 262 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ival_22412)) {
        _1 = (object)(DBL_PTR(_ival_22412)->dbl);
        DeRefDS(_ival_22412);
        _ival_22412 = _1;
    }
    // SubProg fdecompress pc: 264 op: STARTLINE (58)

    /** compress.e:297			comp_cache[1 + and_bits(ival, COMP_CACHE_SIZE-1)] = ival*/
    // SubProg fdecompress pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 268 op: MINUS (10)
    _12843 = 63;
    // SubProg fdecompress pc: 272 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_ival_22412 & (uintptr_t)63;
         _12844 = MAKE_UINT(tu);
    }
    _12843 = NOVALUE;
    // SubProg fdecompress pc: 276 op: PLUS1 (93)
    if (IS_ATOM_INT(_12844)) {
        _12845 = _12844 + 1;
    }
    else
    _12845 = binary_op(PLUS, 1, _12844);
    DeRef(_12844);
    _12844 = NOVALUE;
    // SubProg fdecompress pc: 280 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_59comp_cache_22274);
    if (!IS_ATOM_INT(_12845))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_12845)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _12845);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _ival_22412;
    DeRef(_1);
    // SubProg fdecompress pc: 284 op: STARTLINE (58)

    /** compress.e:298			return ival*/
    // SubProg fdecompress pc: 286 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    DeRef(_12845);
    _12845 = NOVALUE;
    return _ival_22412;
    // SubProg fdecompress pc: 290 op: ELSE (23)
    goto L6; // [290] 632
    // SubProg fdecompress pc: 292 op: NOP1 (159)
L9: // addr: 293 pc: 292 sub: 22407 op: 159
    // SubProg fdecompress pc: 293 op: STARTLINE (58)

    /** compress.e:300		elsif c = F4B then*/
    // SubProg fdecompress pc: 295 op: EQUALS_IFW_I (121)
    if (_c_22409 != 251)
    goto LA; // [295] 339
    // SubProg fdecompress pc: 299 op: STARTLINE (58)

    /** compress.e:301			return float32_to_atom({getc(current_db), getc(current_db),*/
    // SubProg fdecompress pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 303 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12847 = getc((FILE*)xstdin);
        }
        else{
            _12847 = getc(last_r_file_ptr);
        }
    }
    else{
        _12847 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 308 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12848 = getc((FILE*)xstdin);
        }
        else{
            _12848 = getc(last_r_file_ptr);
        }
    }
    else{
        _12848 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 313 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12849 = getc((FILE*)xstdin);
        }
        else{
            _12849 = getc(last_r_file_ptr);
        }
    }
    else{
        _12849 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 318 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12850 = getc((FILE*)xstdin);
        }
        else{
            _12850 = getc(last_r_file_ptr);
        }
    }
    else{
        _12850 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 321 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12847;
    ((intptr_t*)_2)[2] = _12848;
    ((intptr_t*)_2)[3] = _12849;
    ((intptr_t*)_2)[4] = _12850;
    _12851 = MAKE_SEQ(_1);
    _12850 = NOVALUE;
    _12849 = NOVALUE;
    _12848 = NOVALUE;
    _12847 = NOVALUE;
    // SubProg fdecompress pc: 328 op: PROC (27)
    _12852 = _16float32_to_atom(_12851);
    _12851 = NOVALUE;
    // SubProg fdecompress pc: 332 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411

// block var ival_22412
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    DeRef(_12845);
    _12845 = NOVALUE;
    return _12852;
    // SubProg fdecompress pc: 336 op: ELSE (23)
    goto L6; // [336] 632
    // SubProg fdecompress pc: 338 op: NOP1 (159)
LA: // addr: 339 pc: 338 sub: 22407 op: 159
    // SubProg fdecompress pc: 339 op: STARTLINE (58)

    /** compress.e:303		elsif c = F8B then*/
    // SubProg fdecompress pc: 341 op: EQUALS_IFW_I (121)
    if (_c_22409 != 252)
    goto LB; // [341] 409
    // SubProg fdecompress pc: 345 op: STARTLINE (58)

    /** compress.e:304			return float64_to_atom({getc(current_db), getc(current_db),*/
    // SubProg fdecompress pc: 347 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 349 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12854 = getc((FILE*)xstdin);
        }
        else{
            _12854 = getc(last_r_file_ptr);
        }
    }
    else{
        _12854 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 354 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12855 = getc((FILE*)xstdin);
        }
        else{
            _12855 = getc(last_r_file_ptr);
        }
    }
    else{
        _12855 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 359 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12856 = getc((FILE*)xstdin);
        }
        else{
            _12856 = getc(last_r_file_ptr);
        }
    }
    else{
        _12856 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 364 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12857 = getc((FILE*)xstdin);
        }
        else{
            _12857 = getc(last_r_file_ptr);
        }
    }
    else{
        _12857 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 369 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12858 = getc((FILE*)xstdin);
        }
        else{
            _12858 = getc(last_r_file_ptr);
        }
    }
    else{
        _12858 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 372 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 374 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12859 = getc((FILE*)xstdin);
        }
        else{
            _12859 = getc(last_r_file_ptr);
        }
    }
    else{
        _12859 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 379 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12860 = getc((FILE*)xstdin);
        }
        else{
            _12860 = getc(last_r_file_ptr);
        }
    }
    else{
        _12860 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 384 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12861 = getc((FILE*)xstdin);
        }
        else{
            _12861 = getc(last_r_file_ptr);
        }
    }
    else{
        _12861 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 387 op: RIGHT_BRACE_N (31)
    _1 = NewS1(8);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12854;
    ((intptr_t*)_2)[2] = _12855;
    ((intptr_t*)_2)[3] = _12856;
    ((intptr_t*)_2)[4] = _12857;
    ((intptr_t*)_2)[5] = _12858;
    ((intptr_t*)_2)[6] = _12859;
    ((intptr_t*)_2)[7] = _12860;
    ((intptr_t*)_2)[8] = _12861;
    _12862 = MAKE_SEQ(_1);
    _12861 = NOVALUE;
    _12860 = NOVALUE;
    _12859 = NOVALUE;
    _12858 = NOVALUE;
    _12857 = NOVALUE;
    _12856 = NOVALUE;
    _12855 = NOVALUE;
    _12854 = NOVALUE;
    // SubProg fdecompress pc: 398 op: PROC (27)
    _12863 = _16float64_to_atom(_12862);
    _12862 = NOVALUE;
    // SubProg fdecompress pc: 402 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411

// block var ival_22412
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    DeRef(_12852);
    _12852 = NOVALUE;
    DeRef(_12845);
    _12845 = NOVALUE;
    return _12863;
    // SubProg fdecompress pc: 406 op: ELSE (23)
    goto L6; // [406] 632
    // SubProg fdecompress pc: 408 op: NOP1 (159)
LB: // addr: 409 pc: 408 sub: 22407 op: 159
    // SubProg fdecompress pc: 409 op: STARTLINE (58)

    /** compress.e:308		elsif c = F10B then*/
    // SubProg fdecompress pc: 411 op: EQUALS_IFW_I (121)
    if (_c_22409 != 253)
    goto LC; // [411] 491
    // SubProg fdecompress pc: 415 op: STARTLINE (58)

    /** compress.e:309			return float80_to_atom({getc(current_db), getc(current_db),*/
    // SubProg fdecompress pc: 417 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 419 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12865 = getc((FILE*)xstdin);
        }
        else{
            _12865 = getc(last_r_file_ptr);
        }
    }
    else{
        _12865 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 424 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12866 = getc((FILE*)xstdin);
        }
        else{
            _12866 = getc(last_r_file_ptr);
        }
    }
    else{
        _12866 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 427 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 429 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12867 = getc((FILE*)xstdin);
        }
        else{
            _12867 = getc(last_r_file_ptr);
        }
    }
    else{
        _12867 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 434 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12868 = getc((FILE*)xstdin);
        }
        else{
            _12868 = getc(last_r_file_ptr);
        }
    }
    else{
        _12868 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 439 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12869 = getc((FILE*)xstdin);
        }
        else{
            _12869 = getc(last_r_file_ptr);
        }
    }
    else{
        _12869 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 442 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 444 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12870 = getc((FILE*)xstdin);
        }
        else{
            _12870 = getc(last_r_file_ptr);
        }
    }
    else{
        _12870 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 449 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12871 = getc((FILE*)xstdin);
        }
        else{
            _12871 = getc(last_r_file_ptr);
        }
    }
    else{
        _12871 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 454 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12872 = getc((FILE*)xstdin);
        }
        else{
            _12872 = getc(last_r_file_ptr);
        }
    }
    else{
        _12872 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 457 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 459 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12873 = getc((FILE*)xstdin);
        }
        else{
            _12873 = getc(last_r_file_ptr);
        }
    }
    else{
        _12873 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 462 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 464 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _12874 = getc((FILE*)xstdin);
        }
        else{
            _12874 = getc(last_r_file_ptr);
        }
    }
    else{
        _12874 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 467 op: RIGHT_BRACE_N (31)
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _12865;
    ((intptr_t*)_2)[2] = _12866;
    ((intptr_t*)_2)[3] = _12867;
    ((intptr_t*)_2)[4] = _12868;
    ((intptr_t*)_2)[5] = _12869;
    ((intptr_t*)_2)[6] = _12870;
    ((intptr_t*)_2)[7] = _12871;
    ((intptr_t*)_2)[8] = _12872;
    ((intptr_t*)_2)[9] = _12873;
    ((intptr_t*)_2)[10] = _12874;
    _12875 = MAKE_SEQ(_1);
    _12874 = NOVALUE;
    _12873 = NOVALUE;
    _12872 = NOVALUE;
    _12871 = NOVALUE;
    _12870 = NOVALUE;
    _12869 = NOVALUE;
    _12868 = NOVALUE;
    _12867 = NOVALUE;
    _12866 = NOVALUE;
    _12865 = NOVALUE;
    // SubProg fdecompress pc: 480 op: PROC (27)
    _12876 = _16float80_to_atom(_12875);
    _12875 = NOVALUE;
    // SubProg fdecompress pc: 484 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var s_22410
    DeRef(_s_22410);

// block var len_22411

// block var ival_22412
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12863);
    _12863 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    DeRef(_12852);
    _12852 = NOVALUE;
    DeRef(_12845);
    _12845 = NOVALUE;
    return _12876;
    // SubProg fdecompress pc: 488 op: ELSE (23)
    goto L6; // [488] 632
    // SubProg fdecompress pc: 490 op: NOP1 (159)
LC: // addr: 491 pc: 490 sub: 22407 op: 159
    // SubProg fdecompress pc: 491 op: STARTLINE (58)

    /** compress.e:316			if c = S1B then*/
    // SubProg fdecompress pc: 493 op: EQUALS_IFW_I (121)
    if (_c_22409 != 254)
    goto LD; // [493] 507
    // SubProg fdecompress pc: 497 op: STARTLINE (58)

    /** compress.e:317				len = getc(current_db)*/
    // SubProg fdecompress pc: 499 op: GLOBAL_INIT_CHECK (109)
    // SubProg fdecompress pc: 501 op: GETC (33)
    if (_59current_db_22388 != last_r_file_no) {
        last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
        last_r_file_no = _59current_db_22388;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _len_22411 = getc((FILE*)xstdin);
        }
        else{
            _len_22411 = getc(last_r_file_ptr);
        }
    }
    else{
        _len_22411 = getc(last_r_file_ptr);
    }
    // SubProg fdecompress pc: 504 op: ELSE (23)
    goto LE; // [504] 515
    // SubProg fdecompress pc: 506 op: NOP1 (159)
LD: // addr: 507 pc: 506 sub: 22407 op: 159
    // SubProg fdecompress pc: 507 op: STARTLINE (58)

    /** compress.e:319				len = get4()*/
    // SubProg fdecompress pc: 509 op: PROC (27)
    _len_22411 = _59get4();
    // SubProg fdecompress pc: 512 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_len_22411)) {
        _1 = (object)(DBL_PTR(_len_22411)->dbl);
        DeRefDS(_len_22411);
        _len_22411 = _1;
    }
    // SubProg fdecompress pc: 514 op: NOP1 (159)
LE: // addr: 515 pc: 514 sub: 22407 op: 159
    // SubProg fdecompress pc: 515 op: STARTLINE (58)

    /** compress.e:321			s = repeat(0, len)*/
    // SubProg fdecompress pc: 517 op: PRIVATE_INIT_CHECK (30)
    // SubProg fdecompress pc: 519 op: REPEAT (32)
    DeRef(_s_22410);
    _s_22410 = Repeat(0, _len_22411);
    // SubProg fdecompress pc: 523 op: STARTLINE (58)

    /** compress.e:322			for i = 1 to len do*/
    // SubProg fdecompress pc: 525 op: ASSIGN (18)
    _12881 = _len_22411;
    // SubProg fdecompress pc: 528 op: FOR_I (125)
    {
        object _i_22504;
        _i_22504 = 1;
LF: // addr: 535 pc: 528 sub: 22407 op: 125
        if (_i_22504 > _12881){
            goto L10; // [528] 625
        }
        // SubProg fdecompress pc: 535 op: STARTLINE (58)

        /** compress.e:324				c = getc(current_db)*/
        // SubProg fdecompress pc: 537 op: GLOBAL_INIT_CHECK (109)
        // SubProg fdecompress pc: 539 op: GETC (33)
        if (_59current_db_22388 != last_r_file_no) {
            last_r_file_ptr = which_file(_59current_db_22388, EF_READ);
            last_r_file_no = _59current_db_22388;
        }
        if (last_r_file_ptr == xstdin) {
            if (in_from_keyb) {
                _c_22409 = getc((FILE*)xstdin);
            }
            else{
                _c_22409 = getc(last_r_file_ptr);
            }
        }
        else{
            _c_22409 = getc(last_r_file_ptr);
        }
        // SubProg fdecompress pc: 542 op: STARTLINE (58)

        /** compress.e:325				if c < I2B then*/
        // SubProg fdecompress pc: 544 op: LESS_IFW_I (119)
        if (_c_22409 >= 247)
        goto L11; // [544] 604
        // SubProg fdecompress pc: 548 op: STARTLINE (58)

        /** compress.e:326					if c <= CACHE0 then*/
        // SubProg fdecompress pc: 550 op: GLOBAL_INIT_CHECK (109)
        // SubProg fdecompress pc: 552 op: LESSEQ_IFW (106)
        if (_c_22409 > 182)
        goto L12; // [552] 569
        // SubProg fdecompress pc: 556 op: STARTLINE (58)

        /** compress.e:327						s[i] = c + MIN1B*/
        // SubProg fdecompress pc: 558 op: PLUS (11)
        _12885 = _c_22409 + -2;
        // SubProg fdecompress pc: 562 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_s_22410);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_22410 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_22504);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _12885;
        if( _1 != _12885 ){
            DeRef(_1);
        }
        _12885 = NOVALUE;
        // SubProg fdecompress pc: 566 op: ELSE (23)
        goto L13; // [566] 618
        // SubProg fdecompress pc: 568 op: NOP1 (159)
L12: // addr: 569 pc: 568 sub: 22407 op: 159
        // SubProg fdecompress pc: 569 op: STARTLINE (58)

        /** compress.e:329					elsif c <= CACHE0 + COMP_CACHE_SIZE then*/
        // SubProg fdecompress pc: 571 op: GLOBAL_INIT_CHECK (109)
        // SubProg fdecompress pc: 573 op: PLUS (11)
        _12886 = 246;
        // SubProg fdecompress pc: 577 op: LESSEQ_IFW (106)
        if (_c_22409 > 246)
        goto L13; // [577] 618
        // SubProg fdecompress pc: 581 op: STARTLINE (58)

        /** compress.e:331						s[i] = comp_cache[c - CACHE0]*/
        // SubProg fdecompress pc: 583 op: GLOBAL_INIT_CHECK (109)
        // SubProg fdecompress pc: 585 op: GLOBAL_INIT_CHECK (109)
        // SubProg fdecompress pc: 587 op: MINUS (10)
        _12888 = _c_22409 - 182;
        // SubProg fdecompress pc: 591 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_59comp_cache_22274);
        _12889 = (object)*(((s1_ptr)_2)->base + _12888);
        // SubProg fdecompress pc: 595 op: ASSIGN_SUBS (16)
        Ref(_12889);
        _2 = (object)SEQ_PTR(_s_22410);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_22410 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_22504);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _12889;
        if( _1 != _12889 ){
            DeRef(_1);
        }
        _12889 = NOVALUE;
        // SubProg fdecompress pc: 599 op: NOP1 (159)
        // SubProg fdecompress pc: 600 op: NOP1 (159)
        // SubProg fdecompress pc: 601 op: ELSE (23)
        goto L13; // [601] 618
        // SubProg fdecompress pc: 603 op: NOP1 (159)
L11: // addr: 604 pc: 603 sub: 22407 op: 159
        // SubProg fdecompress pc: 604 op: STARTLINE (58)

        /** compress.e:334					s[i] = fdecompress(c)*/
        // SubProg fdecompress pc: 606 op: ASSIGN (18)
        DeRef(_12890);
        _12890 = _c_22409;
        // SubProg fdecompress pc: 609 op: PROC (27)
        _12891 = _59fdecompress(_12890);
        _12890 = NOVALUE;
        // SubProg fdecompress pc: 613 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_s_22410);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _s_22410 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_22504);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _12891;
        if( _1 != _12891 ){
            DeRef(_1);
        }
        _12891 = NOVALUE;
        // SubProg fdecompress pc: 617 op: NOP1 (159)
L13: // addr: 618 pc: 617 sub: 22407 op: 159
        // SubProg fdecompress pc: 618 op: STARTLINE (58)

        /** compress.e:336			end for*/
        // SubProg fdecompress pc: 620 op: ENDFOR_INT_UP1 (54)
        _i_22504 = _i_22504 + 1;
        goto LF; // [620] 535
L10: // addr: 625 pc: 620 sub: 22407 op: 54
        ;
    }
    // SubProg fdecompress pc: 625 op: STARTLINE (58)

    /** compress.e:337			return s*/
    // SubProg fdecompress pc: 627 op: RETURNF (28)

// Exiting block BLOCK: fdecompress

// block var c_22409

// block var len_22411

// block var ival_22412
    _12814 = NOVALUE;
    DeRef(_12810);
    _12810 = NOVALUE;
    DeRef(_12863);
    _12863 = NOVALUE;
    DeRef(_12886);
    _12886 = NOVALUE;
    DeRef(_12876);
    _12876 = NOVALUE;
    DeRef(_12888);
    _12888 = NOVALUE;
    DeRef(_12823);
    _12823 = NOVALUE;
    DeRef(_12813);
    _12813 = NOVALUE;
    DeRef(_12840);
    _12840 = NOVALUE;
    DeRef(_12811);
    _12811 = NOVALUE;
    DeRef(_12835);
    _12835 = NOVALUE;
    DeRef(_12852);
    _12852 = NOVALUE;
    DeRef(_12845);
    _12845 = NOVALUE;
    return _s_22410;
    // SubProg fdecompress pc: 631 op: NOP1 (159)
L6: // addr: 632 pc: 631 sub: 22407 op: 159
    // SubProg fdecompress pc: 632 op: BADRETURNF (43)
    ;
}



// 0x5D9861F9
