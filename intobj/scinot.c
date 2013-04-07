// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _27reverse(object _s_7911)
{
    object _lower_7912 = NOVALUE;
    object _n_7913 = NOVALUE;
    object _n2_7914 = NOVALUE;
    object _t_7915 = NOVALUE;
// skipping _4299  name type: 0
    object _4298 = NOVALUE; // 7924 4298
    object _4297 = NOVALUE; // 7923 4297
    object _4296 = NOVALUE; // 7922 4296
// skipping _4295  name type: 0
// skipping _4294  name type: 0
    object _4293 = NOVALUE; // 7917 4293
// skipping _4292  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg reverse pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg reverse pc: 3 op: STARTLINE (58)

    /** scinot.e:87		n = length(s)*/
    // SubProg reverse pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_7911)){
            _n_7913 = SEQ_PTR(_s_7911)->length;
    }
    else {
        _n_7913 = 1;
    }
    // SubProg reverse pc: 8 op: STARTLINE (58)

    /** scinot.e:88		n2 = floor(n/2)+1*/
    // SubProg reverse pc: 10 op: FLOOR_DIV2 (66)
    _4293 = _n_7913 >> 1;
    // SubProg reverse pc: 14 op: PLUS1_I (117)
    _n2_7914 = _4293 + 1;
    _4293 = NOVALUE;
    // SubProg reverse pc: 18 op: STARTLINE (58)

    /** scinot.e:89		t = repeat(0, n)*/
    // SubProg reverse pc: 20 op: REPEAT (32)
    DeRef(_t_7915);
    _t_7915 = Repeat(0, _n_7913);
    // SubProg reverse pc: 24 op: STARTLINE (58)

    /** scinot.e:90		lower = 1*/
    // SubProg reverse pc: 26 op: ASSIGN_I (113)
    _lower_7912 = 1;
    // SubProg reverse pc: 29 op: STARTLINE (58)

    /** scinot.e:91		for upper = n to n2 by -1 do*/
    // SubProg reverse pc: 31 op: ASSIGN (18)
    _4296 = _n2_7914;
    // SubProg reverse pc: 34 op: FOR_I (125)
    {
        object _upper_7921;
        _upper_7921 = _n_7913;
L1: // addr: 41 pc: 34 sub: 7909 op: 125
        if (_upper_7921 < _4296){
            goto L2; // [34] 74
        }
        // SubProg reverse pc: 41 op: STARTLINE (58)

        /** scinot.e:92			t[upper] = s[lower]*/
        // SubProg reverse pc: 43 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_7911);
        _4297 = (object)*(((s1_ptr)_2)->base + _lower_7912);
        // SubProg reverse pc: 47 op: ASSIGN_SUBS (16)
        Ref(_4297);
        _2 = (object)SEQ_PTR(_t_7915);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_7915 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _upper_7921);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4297;
        if( _1 != _4297 ){
            DeRef(_1);
        }
        _4297 = NOVALUE;
        // SubProg reverse pc: 51 op: STARTLINE (58)

        /** scinot.e:93			t[lower] = s[upper]*/
        // SubProg reverse pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_7911);
        _4298 = (object)*(((s1_ptr)_2)->base + _upper_7921);
        // SubProg reverse pc: 57 op: ASSIGN_SUBS (16)
        Ref(_4298);
        _2 = (object)SEQ_PTR(_t_7915);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _t_7915 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _lower_7912);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4298;
        if( _1 != _4298 ){
            DeRef(_1);
        }
        _4298 = NOVALUE;
        // SubProg reverse pc: 61 op: STARTLINE (58)

        /** scinot.e:94			lower += 1*/
        // SubProg reverse pc: 63 op: PLUS1_I (117)
        _lower_7912 = _lower_7912 + 1;
        // SubProg reverse pc: 67 op: STARTLINE (58)

        /** scinot.e:95		end for*/
        // SubProg reverse pc: 69 op: ENDFOR_GENERAL (39)
        _upper_7921 = _upper_7921 + -1;
        goto L1; // [69] 41
L2: // addr: 74 pc: 69 sub: 7909 op: 39
        ;
    }
    // SubProg reverse pc: 74 op: STARTLINE (58)

    /** scinot.e:96		return t*/
    // SubProg reverse pc: 76 op: RETURNF (28)

// Exiting block BLOCK: reverse

// block var s_7911
    DeRefDS(_s_7911);

// block var lower_7912

// block var n_7913

// block var n2_7914
    return _t_7915;
    // SubProg reverse pc: 80 op: BADRETURNF (43)
    ;
}


object _27carry(object _a_7928, object _radix_7929)
{
    object _q_7930 = NOVALUE;
    object _r_7931 = NOVALUE;
    object _b_7932 = NOVALUE;
    object _rmax_7933 = NOVALUE;
    object _i_7934 = NOVALUE;
// skipping _4313  name type: 0
    object _4312 = NOVALUE; // 7950 4312
    object _4311 = NOVALUE; // 7949 4311
    object _4310 = NOVALUE; // 7948 4310
// skipping _4309  name type: 0
// skipping _4308  name type: 0
    object _4307 = NOVALUE; // 7945 4307
// skipping _4306  name type: 0
// skipping _4305  name type: 0
// skipping _4304  name type: 0
// skipping _4303  name type: 0
// skipping _4302  name type: 0
    object _4301 = NOVALUE; // 7937 4301
// skipping _4300  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg carry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg carry pc: 3 op: INTEGER_CHECK (96)
    // SubProg carry pc: 5 op: STARTLINE (58)

    /** scinot.e:102		rmax = radix - 1*/
    // SubProg carry pc: 7 op: MINUS (10)
    DeRef(_rmax_7933);
    _rmax_7933 = _radix_7929 - 1;
    if ((object)((uintptr_t)_rmax_7933 +(uintptr_t) HIGH_BITS) >= 0){
        _rmax_7933 = NewDouble((eudouble)_rmax_7933);
    }
    // SubProg carry pc: 11 op: STARTLINE (58)

    /** scinot.e:103		i = 1*/
    // SubProg carry pc: 13 op: ASSIGN (18)
    DeRef(_i_7934);
    _i_7934 = 1;
    // SubProg carry pc: 16 op: STARTLINE (58)

    /** scinot.e:104		while i <= length(a) do*/
    // SubProg carry pc: 18 op: NOP2 (110)
    // SubProg carry pc: 20 op: NOPWHILE (158)
L1: // addr: 21 pc: 20 sub: 7926 op: 158
    // SubProg carry pc: 21 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7928)){
            _4301 = SEQ_PTR(_a_7928)->length;
    }
    else {
        _4301 = 1;
    }
    // SubProg carry pc: 24 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _i_7934, _4301)){
        _4301 = NOVALUE;
        goto L2; // [24] 104
    }
    _4301 = NOVALUE;
    // SubProg carry pc: 28 op: STARTLINE (58)

    /** scinot.e:105			b = a[i]*/
    // SubProg carry pc: 30 op: RHS_SUBS (25)
    DeRef(_b_7932);
    _2 = (object)SEQ_PTR(_a_7928);
    if (!IS_ATOM_INT(_i_7934)){
        _b_7932 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_7934)->dbl));
    }
    else{
        _b_7932 = (object)*(((s1_ptr)_2)->base + _i_7934);
    }
    Ref(_b_7932);
    // SubProg carry pc: 34 op: STARTLINE (58)

    /** scinot.e:106			if b > rmax then*/
    // SubProg carry pc: 36 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _b_7932, _rmax_7933)){
        goto L3; // [36] 93
    }
    // SubProg carry pc: 40 op: STARTLINE (58)

    /** scinot.e:107				q = floor( b / radix )*/
    // SubProg carry pc: 42 op: FLOOR_DIV (63)
    DeRef(_q_7930);
    if (IS_ATOM_INT(_b_7932)) {
        if (_radix_7929 > 0 && _b_7932 >= 0) {
            _q_7930 = _b_7932 / _radix_7929;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_b_7932 / (eudouble)_radix_7929);
            if (_b_7932 != MININT)
            _q_7930 = (object)temp_dbl;
            else
            _q_7930 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _b_7932, _radix_7929);
        _q_7930 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    // SubProg carry pc: 46 op: STARTLINE (58)

    /** scinot.e:108				r = remainder( b, radix )*/
    // SubProg carry pc: 48 op: REMAINDER (71)
    DeRef(_r_7931);
    if (IS_ATOM_INT(_b_7932)) {
        _r_7931 = (_b_7932 % _radix_7929);
    }
    else {
        temp_d.dbl = (eudouble)_radix_7929;
        _r_7931 = Dremainder(DBL_PTR(_b_7932), &temp_d);
    }
    // SubProg carry pc: 52 op: STARTLINE (58)

    /** scinot.e:109				a[i] = r*/
    // SubProg carry pc: 54 op: ASSIGN_SUBS (16)
    Ref(_r_7931);
    _2 = (object)SEQ_PTR(_a_7928);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_7928 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_i_7934))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_7934)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _i_7934);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _r_7931;
    DeRef(_1);
    // SubProg carry pc: 58 op: STARTLINE (58)

    /** scinot.e:110				if i = length(a) then*/
    // SubProg carry pc: 60 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7928)){
            _4307 = SEQ_PTR(_a_7928)->length;
    }
    else {
        _4307 = 1;
    }
    // SubProg carry pc: 63 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _i_7934, _4307)){
        _4307 = NOVALUE;
        goto L4; // [63] 74
    }
    _4307 = NOVALUE;
    // SubProg carry pc: 67 op: STARTLINE (58)

    /** scinot.e:111					a &= 0*/
    // SubProg carry pc: 69 op: CONCAT (15)
    Append(&_a_7928, _a_7928, 0);
    // SubProg carry pc: 73 op: NOP1 (159)
L4: // addr: 74 pc: 73 sub: 7926 op: 159
    // SubProg carry pc: 74 op: STARTLINE (58)

    /** scinot.e:113				a[i+1] += q*/
    // SubProg carry pc: 76 op: PLUS1 (93)
    if (IS_ATOM_INT(_i_7934)) {
        _4310 = _i_7934 + 1;
    }
    else
    _4310 = binary_op(PLUS, 1, _i_7934);
    // SubProg carry pc: 80 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_a_7928);
    if (!IS_ATOM_INT(_4310)){
        _4311 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4310)->dbl));
    }
    else{
        _4311 = (object)*(((s1_ptr)_2)->base + _4310);
    }
    // SubProg carry pc: 84 op: PLUS (11)
    if (IS_ATOM_INT(_4311) && IS_ATOM_INT(_q_7930)) {
        _4312 = _4311 + _q_7930;
        if ((object)((uintptr_t)_4312 + (uintptr_t)HIGH_BITS) >= 0){
            _4312 = NewDouble((eudouble)_4312);
        }
    }
    else {
        _4312 = binary_op(PLUS, _4311, _q_7930);
    }
    _4311 = NOVALUE;
    // SubProg carry pc: 88 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_a_7928);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _a_7928 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_4310))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_4310)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _4310);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4312;
    if( _1 != _4312 ){
        DeRef(_1);
    }
    _4312 = NOVALUE;
    // SubProg carry pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 7926 op: 159
    // SubProg carry pc: 93 op: STARTLINE (58)

    /** scinot.e:115			i += 1*/
    // SubProg carry pc: 95 op: PLUS1 (93)
    _0 = _i_7934;
    if (IS_ATOM_INT(_i_7934)) {
        _i_7934 = _i_7934 + 1;
        if (_i_7934 > MAXINT){
            _i_7934 = NewDouble((eudouble)_i_7934);
        }
    }
    else
    _i_7934 = binary_op(PLUS, 1, _i_7934);
    DeRef(_0);
    // SubProg carry pc: 99 op: STARTLINE (58)

    /** scinot.e:116		end while*/
    // SubProg carry pc: 101 op: ENDWHILE (22)
    goto L1; // [101] 21
    // SubProg carry pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 7926 op: 159
    // SubProg carry pc: 104 op: STARTLINE (58)

    /** scinot.e:118		return a*/
    // SubProg carry pc: 106 op: RETURNF (28)

// Exiting block BLOCK: carry

// block var radix_7929

// block var q_7930
    DeRef(_q_7930);

// block var r_7931
    DeRef(_r_7931);

// block var b_7932
    DeRef(_b_7932);

// block var rmax_7933
    DeRef(_rmax_7933);

// block var i_7934
    DeRef(_i_7934);
    DeRef(_4310);
    _4310 = NOVALUE;
    return _a_7928;
    // SubProg carry pc: 110 op: BADRETURNF (43)
    ;
}


object _27add(object _a_7954, object _b_7955)
{
    object _4330 = NOVALUE; // 7974 4330
// skipping _4329  name type: 0
    object _4328 = NOVALUE; // 7972 4328
    object _4327 = NOVALUE; // 7971 4327
    object _4326 = NOVALUE; // 7970 4326
    object _4325 = NOVALUE; // 7969 4325
// skipping _4324  name type: 0
    object _4323 = NOVALUE; // 7967 4323
    object _4322 = NOVALUE; // 7966 4322
// skipping _4321  name type: 0
    object _4320 = NOVALUE; // 7963 4320
    object _4319 = NOVALUE; // 7962 4319
    object _4318 = NOVALUE; // 7961 4318
    object _4317 = NOVALUE; // 7960 4317
// skipping _4316  name type: 0
    object _4315 = NOVALUE; // 7958 4315
    object _4314 = NOVALUE; // 7957 4314
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add pc: 5 op: STARTLINE (58)

    /** scinot.e:123		if length(a) < length(b) then*/
    // SubProg add pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7954)){
            _4314 = SEQ_PTR(_a_7954)->length;
    }
    else {
        _4314 = 1;
    }
    // SubProg add pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_b_7955)){
            _4315 = SEQ_PTR(_b_7955)->length;
    }
    else {
        _4315 = 1;
    }
    // SubProg add pc: 13 op: LESS_IFW_I (119)
    if (_4314 >= _4315)
    goto L1; // [13] 40
    // SubProg add pc: 17 op: STARTLINE (58)

    /** scinot.e:124			a &= repeat( 0, length(b) - length(a) )*/
    // SubProg add pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_b_7955)){
            _4317 = SEQ_PTR(_b_7955)->length;
    }
    else {
        _4317 = 1;
    }
    // SubProg add pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7954)){
            _4318 = SEQ_PTR(_a_7954)->length;
    }
    else {
        _4318 = 1;
    }
    // SubProg add pc: 25 op: MINUS (10)
    _4319 = _4317 - _4318;
    _4317 = NOVALUE;
    _4318 = NOVALUE;
    // SubProg add pc: 29 op: REPEAT (32)
    _4320 = Repeat(0, _4319);
    _4319 = NOVALUE;
    // SubProg add pc: 33 op: CONCAT (15)
    Concat((object_ptr)&_a_7954, _a_7954, _4320);
    DeRefDS(_4320);
    _4320 = NOVALUE;
    // SubProg add pc: 37 op: ELSE (23)
    goto L2; // [37] 74
    // SubProg add pc: 39 op: NOP1 (159)
L1: // addr: 40 pc: 39 sub: 7952 op: 159
    // SubProg add pc: 40 op: STARTLINE (58)

    /** scinot.e:125		elsif length(b) < length(a) then*/
    // SubProg add pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_b_7955)){
            _4322 = SEQ_PTR(_b_7955)->length;
    }
    else {
        _4322 = 1;
    }
    // SubProg add pc: 45 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7954)){
            _4323 = SEQ_PTR(_a_7954)->length;
    }
    else {
        _4323 = 1;
    }
    // SubProg add pc: 48 op: LESS_IFW_I (119)
    if (_4322 >= _4323)
    goto L3; // [48] 73
    // SubProg add pc: 52 op: STARTLINE (58)

    /** scinot.e:126			b &= repeat( 0, length(a) - length(b) )*/
    // SubProg add pc: 54 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7954)){
            _4325 = SEQ_PTR(_a_7954)->length;
    }
    else {
        _4325 = 1;
    }
    // SubProg add pc: 57 op: LENGTH (42)
    if (IS_SEQUENCE(_b_7955)){
            _4326 = SEQ_PTR(_b_7955)->length;
    }
    else {
        _4326 = 1;
    }
    // SubProg add pc: 60 op: MINUS (10)
    _4327 = _4325 - _4326;
    _4325 = NOVALUE;
    _4326 = NOVALUE;
    // SubProg add pc: 64 op: REPEAT (32)
    _4328 = Repeat(0, _4327);
    _4327 = NOVALUE;
    // SubProg add pc: 68 op: CONCAT (15)
    Concat((object_ptr)&_b_7955, _b_7955, _4328);
    DeRefDS(_4328);
    _4328 = NOVALUE;
    // SubProg add pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 7952 op: 159
    // SubProg add pc: 73 op: NOP1 (159)
L2: // addr: 74 pc: 73 sub: 7952 op: 159
    // SubProg add pc: 74 op: STARTLINE (58)

    /** scinot.e:129		return a + b*/
    // SubProg add pc: 76 op: PLUS (11)
    _4330 = binary_op(PLUS, _a_7954, _b_7955);
    // SubProg add pc: 80 op: RETURNF (28)

// Exiting block BLOCK: add

// block var a_7954
    DeRefDS(_a_7954);

// block var b_7955
    DeRefDS(_b_7955);
    return _4330;
    // SubProg add pc: 84 op: BADRETURNF (43)
    ;
}


object _27borrow(object _a_7977, object _radix_7978)
{
    object _4338 = NOVALUE; // 7989 4338
    object _4337 = NOVALUE; // 7988 4337
    object _4336 = NOVALUE; // 7987 4336
    object _4335 = NOVALUE; // 7986 4335
    object _4334 = NOVALUE; // 7985 4334
// skipping _4333  name type: 0
    object _4332 = NOVALUE; // 7983 4332
    object _4331 = NOVALUE; // 7981 4331
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg borrow pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg borrow pc: 3 op: INTEGER_CHECK (96)
    // SubProg borrow pc: 5 op: STARTLINE (58)

    /** scinot.e:134		for i = length(a) to 2 by -1 do*/
    // SubProg borrow pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_a_7977)){
            _4331 = SEQ_PTR(_a_7977)->length;
    }
    else {
        _4331 = 1;
    }
    // SubProg borrow pc: 10 op: FOR_I (125)
    {
        object _i_7980;
        _i_7980 = _4331;
L1: // addr: 17 pc: 10 sub: 7975 op: 125
        if (_i_7980 < 2){
            goto L2; // [10] 67
        }
        // SubProg borrow pc: 17 op: STARTLINE (58)

        /** scinot.e:135			if a[i] < 0 then*/
        // SubProg borrow pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_a_7977);
        _4332 = (object)*(((s1_ptr)_2)->base + _i_7980);
        // SubProg borrow pc: 23 op: LESS_IFW (102)
        if (binary_op_a(GREATEREQ, _4332, 0)){
            _4332 = NOVALUE;
            goto L3; // [23] 60
        }
        _4332 = NOVALUE;
        // SubProg borrow pc: 27 op: STARTLINE (58)

        /** scinot.e:136				a[i] += radix*/
        // SubProg borrow pc: 29 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_7977);
        _4334 = (object)*(((s1_ptr)_2)->base + _i_7980);
        // SubProg borrow pc: 33 op: PLUS (11)
        if (IS_ATOM_INT(_4334)) {
            _4335 = _4334 + _radix_7978;
            if ((object)((uintptr_t)_4335 + (uintptr_t)HIGH_BITS) >= 0){
                _4335 = NewDouble((eudouble)_4335);
            }
        }
        else {
            _4335 = binary_op(PLUS, _4334, _radix_7978);
        }
        _4334 = NOVALUE;
        // SubProg borrow pc: 37 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_7977);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_7977 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_7980);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4335;
        if( _1 != _4335 ){
            DeRef(_1);
        }
        _4335 = NOVALUE;
        // SubProg borrow pc: 41 op: STARTLINE (58)

        /** scinot.e:137				a[i-1] -= 1*/
        // SubProg borrow pc: 43 op: MINUS (10)
        _4336 = _i_7980 - 1;
        // SubProg borrow pc: 47 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_a_7977);
        _4337 = (object)*(((s1_ptr)_2)->base + _4336);
        // SubProg borrow pc: 51 op: MINUS (10)
        if (IS_ATOM_INT(_4337)) {
            _4338 = _4337 - 1;
            if ((object)((uintptr_t)_4338 +(uintptr_t) HIGH_BITS) >= 0){
                _4338 = NewDouble((eudouble)_4338);
            }
        }
        else {
            _4338 = binary_op(MINUS, _4337, 1);
        }
        _4337 = NOVALUE;
        // SubProg borrow pc: 55 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_a_7977);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _a_7977 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _4336);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4338;
        if( _1 != _4338 ){
            DeRef(_1);
        }
        _4338 = NOVALUE;
        // SubProg borrow pc: 59 op: NOP1 (159)
L3: // addr: 60 pc: 59 sub: 7975 op: 159
        // SubProg borrow pc: 60 op: STARTLINE (58)

        /** scinot.e:139		end for*/
        // SubProg borrow pc: 62 op: ENDFOR_GENERAL (39)
        _i_7980 = _i_7980 + -1;
        goto L1; // [62] 17
L2: // addr: 67 pc: 62 sub: 7975 op: 39
        ;
    }
    // SubProg borrow pc: 67 op: STARTLINE (58)

    /** scinot.e:140		return a*/
    // SubProg borrow pc: 69 op: RETURNF (28)

// Exiting block BLOCK: borrow

// block var radix_7978
    DeRef(_4336);
    _4336 = NOVALUE;
    return _a_7977;
    // SubProg borrow pc: 73 op: BADRETURNF (43)
    ;
}


object _27bits_to_bytes(object _bits_7992)
{
    object _bytes_7993 = NOVALUE;
    object _r_7994 = NOVALUE;
// skipping _4348  name type: 0
    object _4347 = NOVALUE; // 8007 4347
    object _4346 = NOVALUE; // 8006 4346
    object _4345 = NOVALUE; // 8005 4345
    object _4344 = NOVALUE; // 8003 4344
// skipping _4343  name type: 0
    object _4342 = NOVALUE; // 7999 4342
    object _4341 = NOVALUE; // 7998 4341
// skipping _4340  name type: 0
    object _4339 = NOVALUE; // 7995 4339
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bits_to_bytes pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 3 op: STARTLINE (58)

    /** scinot.e:155		r = remainder( length(bits), 8 )*/
    // SubProg bits_to_bytes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_7992)){
            _4339 = SEQ_PTR(_bits_7992)->length;
    }
    else {
        _4339 = 1;
    }
    // SubProg bits_to_bytes pc: 8 op: REMAINDER (71)
    _r_7994 = (_4339 % 8);
    _4339 = NOVALUE;
    // SubProg bits_to_bytes pc: 12 op: STARTLINE (58)

    /** scinot.e:156		if r  then*/
    // SubProg bits_to_bytes pc: 14 op: IF (20)
    if (_r_7994 == 0)
    {
        goto L1; // [14] 32
    }
    else{
    }
    // SubProg bits_to_bytes pc: 17 op: STARTLINE (58)

    /** scinot.e:157			bits &= repeat( 0, 8 - r )*/
    // SubProg bits_to_bytes pc: 19 op: MINUS (10)
    _4341 = 8 - _r_7994;
    // SubProg bits_to_bytes pc: 23 op: REPEAT (32)
    _4342 = Repeat(0, _4341);
    _4341 = NOVALUE;
    // SubProg bits_to_bytes pc: 27 op: CONCAT (15)
    Concat((object_ptr)&_bits_7992, _bits_7992, _4342);
    DeRefDS(_4342);
    _4342 = NOVALUE;
    // SubProg bits_to_bytes pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 7990 op: 159
    // SubProg bits_to_bytes pc: 32 op: STARTLINE (58)

    /** scinot.e:160		bytes = {}*/
    // SubProg bits_to_bytes pc: 34 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bytes_7993);
    _bytes_7993 = _5;
    // SubProg bits_to_bytes pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg bits_to_bytes pc: 39 op: STARTLINE (58)

    /** scinot.e:161		for i = 1 to length(bits) by 8 do*/
    // SubProg bits_to_bytes pc: 41 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_7992)){
            _4344 = SEQ_PTR(_bits_7992)->length;
    }
    else {
        _4344 = 1;
    }
    // SubProg bits_to_bytes pc: 44 op: FOR_I (125)
    {
        object _i_8002;
        _i_8002 = 1;
L2: // addr: 51 pc: 44 sub: 7990 op: 125
        if (_i_8002 > _4344){
            goto L3; // [44] 77
        }
        // SubProg bits_to_bytes pc: 51 op: STARTLINE (58)

        /** scinot.e:162			bytes &= bits_to_int( bits[i..i+7] )*/
        // SubProg bits_to_bytes pc: 53 op: PLUS (11)
        _4345 = _i_8002 + 7;
        // SubProg bits_to_bytes pc: 57 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_4346;
        RHS_Slice(_bits_7992, _i_8002, _4345);
        // SubProg bits_to_bytes pc: 62 op: PROC (27)
        _4347 = _21bits_to_int(_4346);
        _4346 = NOVALUE;
        // SubProg bits_to_bytes pc: 66 op: CONCAT (15)
        if (IS_SEQUENCE(_bytes_7993) && IS_ATOM(_4347)) {
            Ref(_4347);
            Append(&_bytes_7993, _bytes_7993, _4347);
        }
        else if (IS_ATOM(_bytes_7993) && IS_SEQUENCE(_4347)) {
        }
        else {
            Concat((object_ptr)&_bytes_7993, _bytes_7993, _4347);
        }
        DeRef(_4347);
        _4347 = NOVALUE;
        // SubProg bits_to_bytes pc: 70 op: STARTLINE (58)

        /** scinot.e:163		end for*/
        // SubProg bits_to_bytes pc: 72 op: ENDFOR_GENERAL (39)
        _i_8002 = _i_8002 + 8;
        goto L2; // [72] 51
L3: // addr: 77 pc: 72 sub: 7990 op: 39
        ;
    }
    // SubProg bits_to_bytes pc: 77 op: STARTLINE (58)

    /** scinot.e:164		return bytes*/
    // SubProg bits_to_bytes pc: 79 op: RETURNF (28)

// Exiting block BLOCK: bits_to_bytes

// block var bits_7992
    DeRefDS(_bits_7992);

// block var r_7994
    DeRef(_4345);
    _4345 = NOVALUE;
    return _bytes_7993;
    // SubProg bits_to_bytes pc: 83 op: BADRETURNF (43)
    ;
}


object _27bytes_to_bits(object _bytes_8011)
{
    object _bits_8012 = NOVALUE;
// skipping _4352  name type: 0
    object _4351 = NOVALUE; // 8018 4351
    object _4350 = NOVALUE; // 8017 4350
    object _4349 = NOVALUE; // 8015 4349
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg bytes_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:179		bits = {}*/
    // SubProg bytes_to_bits pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_bits_8012);
    _bits_8012 = _5;
    // SubProg bytes_to_bits pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg bytes_to_bits pc: 10 op: STARTLINE (58)

    /** scinot.e:180		for i = 1 to length(bytes) do*/
    // SubProg bytes_to_bits pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_bytes_8011)){
            _4349 = SEQ_PTR(_bytes_8011)->length;
    }
    else {
        _4349 = 1;
    }
    // SubProg bytes_to_bits pc: 15 op: FOR_I (125)
    {
        object _i_8014;
        _i_8014 = 1;
L1: // addr: 22 pc: 15 sub: 8009 op: 125
        if (_i_8014 > _4349){
            goto L2; // [15] 44
        }
        // SubProg bytes_to_bits pc: 22 op: STARTLINE (58)

        /** scinot.e:181			bits &= int_to_bits( bytes[i], 8 )*/
        // SubProg bytes_to_bits pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_bytes_8011);
        _4350 = (object)*(((s1_ptr)_2)->base + _i_8014);
        // SubProg bytes_to_bits pc: 28 op: PROC (27)
        Ref(_4350);
        _4351 = _21int_to_bits(_4350, 8);
        _4350 = NOVALUE;
        // SubProg bytes_to_bits pc: 33 op: CONCAT (15)
        if (IS_SEQUENCE(_bits_8012) && IS_ATOM(_4351)) {
            Ref(_4351);
            Append(&_bits_8012, _bits_8012, _4351);
        }
        else if (IS_ATOM(_bits_8012) && IS_SEQUENCE(_4351)) {
        }
        else {
            Concat((object_ptr)&_bits_8012, _bits_8012, _4351);
        }
        DeRef(_4351);
        _4351 = NOVALUE;
        // SubProg bytes_to_bits pc: 37 op: STARTLINE (58)

        /** scinot.e:182		end for*/
        // SubProg bytes_to_bits pc: 39 op: ENDFOR_INT_UP1 (54)
        _i_8014 = _i_8014 + 1;
        goto L1; // [39] 22
L2: // addr: 44 pc: 39 sub: 8009 op: 54
        ;
    }
    // SubProg bytes_to_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:184		return bits*/
    // SubProg bytes_to_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: bytes_to_bits

// block var bytes_8011
    DeRefDS(_bytes_8011);
    return _bits_8012;
    // SubProg bytes_to_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _27convert_radix(object _number_8022, object _from_radix_8023, object _to_radix_8024)
{
    object _target_8025 = NOVALUE;
    object _base_8026 = NOVALUE;
// skipping _4361  name type: 0
// skipping _4360  name type: 0
// skipping _4359  name type: 0
    object _4358 = NOVALUE; // 8034 4358
    object _4357 = NOVALUE; // 8033 4357
    object _4356 = NOVALUE; // 8032 4356
    object _4355 = NOVALUE; // 8031 4355
// skipping _4354  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg convert_radix pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 3 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 5 op: INTEGER_CHECK (96)
    // SubProg convert_radix pc: 7 op: STARTLINE (58)

    /** scinot.e:190		base = {1}*/
    // SubProg convert_radix pc: 9 op: ASSIGN (18)
    RefDS(_4353);
    DeRef(_base_8026);
    _base_8026 = _4353;
    // SubProg convert_radix pc: 12 op: SEQUENCE_CHECK (97)
    // SubProg convert_radix pc: 14 op: STARTLINE (58)

    /** scinot.e:191		target = {0}*/
    // SubProg convert_radix pc: 16 op: RIGHT_BRACE_N (31)
    _0 = _target_8025;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _target_8025 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg convert_radix pc: 20 op: STARTLINE (58)

    /** scinot.e:192		for i = 1 to length(number) do*/
    // SubProg convert_radix pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_number_8022)){
            _4355 = SEQ_PTR(_number_8022)->length;
    }
    else {
        _4355 = 1;
    }
    // SubProg convert_radix pc: 25 op: FOR_I (125)
    {
        object _i_8030;
        _i_8030 = 1;
L1: // addr: 32 pc: 25 sub: 8020 op: 125
        if (_i_8030 > _4355){
            goto L2; // [25] 78
        }
        // SubProg convert_radix pc: 32 op: STARTLINE (58)

        /** scinot.e:193			target = carry( add( base * number[i], target ), to_radix )*/
        // SubProg convert_radix pc: 34 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_number_8022);
        _4356 = (object)*(((s1_ptr)_2)->base + _i_8030);
        // SubProg convert_radix pc: 38 op: MULTIPLY (13)
        _4357 = binary_op(MULTIPLY, _base_8026, _4356);
        _4356 = NOVALUE;
        // SubProg convert_radix pc: 42 op: PROC (27)
        RefDS(_target_8025);
        _4358 = _27add(_4357, _target_8025);
        _4357 = NOVALUE;
        // SubProg convert_radix pc: 47 op: PROC (27)
        _0 = _target_8025;
        _target_8025 = _27carry(_4358, _to_radix_8024);
        DeRefDS(_0);
        _4358 = NOVALUE;
        // SubProg convert_radix pc: 52 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 54 op: STARTLINE (58)

        /** scinot.e:194			base *= from_radix*/
        // SubProg convert_radix pc: 56 op: MULTIPLY (13)
        _0 = _base_8026;
        _base_8026 = binary_op(MULTIPLY, _base_8026, _from_radix_8023);
        DeRefDS(_0);
        // SubProg convert_radix pc: 60 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 62 op: STARTLINE (58)

        /** scinot.e:195			base = carry( base, to_radix )*/
        // SubProg convert_radix pc: 64 op: PROC (27)
        RefDS(_base_8026);
        _0 = _base_8026;
        _base_8026 = _27carry(_base_8026, _to_radix_8024);
        DeRefDS(_0);
        // SubProg convert_radix pc: 69 op: SEQUENCE_CHECK (97)
        // SubProg convert_radix pc: 71 op: STARTLINE (58)

        /** scinot.e:196		end for*/
        // SubProg convert_radix pc: 73 op: ENDFOR_INT_UP1 (54)
        _i_8030 = _i_8030 + 1;
        goto L1; // [73] 32
L2: // addr: 78 pc: 73 sub: 8020 op: 54
        ;
    }
    // SubProg convert_radix pc: 78 op: STARTLINE (58)

    /** scinot.e:198		return target*/
    // SubProg convert_radix pc: 80 op: RETURNF (28)

// Exiting block BLOCK: convert_radix

// block var number_8022
    DeRefDS(_number_8022);

// block var from_radix_8023

// block var to_radix_8024

// block var base_8026
    DeRef(_base_8026);
    return _target_8025;
    // SubProg convert_radix pc: 84 op: BADRETURNF (43)
    ;
}


object _27half(object _decimal_8040)
{
    object _quotient_8041 = NOVALUE;
    object _q_8042 = NOVALUE;
    object _Q_8043 = NOVALUE;
    object _4379 = NOVALUE; // 8065 4379
    object _4378 = NOVALUE; // 8064 4378
    object _4377 = NOVALUE; // 8063 4377
    object _4376 = NOVALUE; // 8062 4376
    object _4375 = NOVALUE; // 8061 4375
    object _4374 = NOVALUE; // 8060 4374
// skipping _4373  name type: 0
// skipping _4372  name type: 0
    object _4371 = NOVALUE; // 8057 4371
// skipping _4370  name type: 0
    object _4369 = NOVALUE; // 8053 4369
    object _4368 = NOVALUE; // 8052 4368
// skipping _4367  name type: 0
// skipping _4366  name type: 0
    object _4365 = NOVALUE; // 8049 4365
    object _4364 = NOVALUE; // 8048 4364
// skipping _4363  name type: 0
    object _4362 = NOVALUE; // 8044 4362
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg half pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg half pc: 3 op: STARTLINE (58)

    /** scinot.e:205		quotient = repeat( 0, length(decimal) )*/
    // SubProg half pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_8040)){
            _4362 = SEQ_PTR(_decimal_8040)->length;
    }
    else {
        _4362 = 1;
    }
    // SubProg half pc: 8 op: REPEAT (32)
    DeRef(_quotient_8041);
    _quotient_8041 = Repeat(0, _4362);
    _4362 = NOVALUE;
    // SubProg half pc: 12 op: STARTLINE (58)

    /** scinot.e:206		for i = 1 to length( decimal ) do*/
    // SubProg half pc: 14 op: LENGTH (42)
    if (IS_SEQUENCE(_decimal_8040)){
            _4364 = SEQ_PTR(_decimal_8040)->length;
    }
    else {
        _4364 = 1;
    }
    // SubProg half pc: 17 op: FOR_I (125)
    {
        object _i_8047;
        _i_8047 = 1;
L1: // addr: 24 pc: 17 sub: 8038 op: 125
        if (_i_8047 > _4364){
            goto L2; // [17] 101
        }
        // SubProg half pc: 24 op: STARTLINE (58)

        /** scinot.e:207			q = decimal[i] / 2*/
        // SubProg half pc: 26 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_decimal_8040);
        _4365 = (object)*(((s1_ptr)_2)->base + _i_8047);
        // SubProg half pc: 30 op: DIV2 (98)
        DeRef(_q_8042);
        if (IS_ATOM_INT(_4365)) {
            if (_4365 & 1) {
                _q_8042 = NewDouble((_4365 >> 1) + 0.5);
            }
            else
            _q_8042 = _4365 >> 1;
        }
        else {
            _q_8042 = binary_op(DIVIDE, _4365, 2);
        }
        _4365 = NOVALUE;
        // SubProg half pc: 34 op: STARTLINE (58)

        /** scinot.e:208			Q = floor( q )*/
        // SubProg half pc: 36 op: FLOOR (83)
        DeRef(_Q_8043);
        if (IS_ATOM_INT(_q_8042))
        _Q_8043 = e_floor(_q_8042);
        else
        _Q_8043 = unary_op(FLOOR, _q_8042);
        // SubProg half pc: 39 op: STARTLINE (58)

        /** scinot.e:209			quotient[i] +=  Q*/
        // SubProg half pc: 41 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_8041);
        _4368 = (object)*(((s1_ptr)_2)->base + _i_8047);
        // SubProg half pc: 45 op: PLUS (11)
        if (IS_ATOM_INT(_4368) && IS_ATOM_INT(_Q_8043)) {
            _4369 = _4368 + _Q_8043;
            if ((object)((uintptr_t)_4369 + (uintptr_t)HIGH_BITS) >= 0){
                _4369 = NewDouble((eudouble)_4369);
            }
        }
        else {
            _4369 = binary_op(PLUS, _4368, _Q_8043);
        }
        _4368 = NOVALUE;
        // SubProg half pc: 49 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_8041);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_8041 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_8047);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4369;
        if( _1 != _4369 ){
            DeRef(_1);
        }
        _4369 = NOVALUE;
        // SubProg half pc: 53 op: STARTLINE (58)

        /** scinot.e:211			if q != Q then*/
        // SubProg half pc: 55 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _q_8042, _Q_8043)){
            goto L3; // [55] 94
        }
        // SubProg half pc: 59 op: STARTLINE (58)

        /** scinot.e:212				if length(quotient) = i then*/
        // SubProg half pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_quotient_8041)){
                _4371 = SEQ_PTR(_quotient_8041)->length;
        }
        else {
            _4371 = 1;
        }
        // SubProg half pc: 64 op: EQUALS_IFW_I (121)
        if (_4371 != _i_8047)
        goto L4; // [64] 75
        // SubProg half pc: 68 op: STARTLINE (58)

        /** scinot.e:213					quotient &= 0*/
        // SubProg half pc: 70 op: CONCAT (15)
        Append(&_quotient_8041, _quotient_8041, 0);
        // SubProg half pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 8038 op: 159
        // SubProg half pc: 75 op: STARTLINE (58)

        /** scinot.e:215				quotient[i+1] += 5*/
        // SubProg half pc: 77 op: PLUS1 (93)
        _4374 = _i_8047 + 1;
        // SubProg half pc: 81 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_quotient_8041);
        _4375 = (object)*(((s1_ptr)_2)->base + _4374);
        // SubProg half pc: 85 op: PLUS (11)
        if (IS_ATOM_INT(_4375)) {
            _4376 = _4375 + 5;
            if ((object)((uintptr_t)_4376 + (uintptr_t)HIGH_BITS) >= 0){
                _4376 = NewDouble((eudouble)_4376);
            }
        }
        else {
            _4376 = binary_op(PLUS, _4375, 5);
        }
        _4375 = NOVALUE;
        // SubProg half pc: 89 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_quotient_8041);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _quotient_8041 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _4374);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _4376;
        if( _1 != _4376 ){
            DeRef(_1);
        }
        _4376 = NOVALUE;
        // SubProg half pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 8038 op: 159
        // SubProg half pc: 94 op: STARTLINE (58)

        /** scinot.e:217		end for*/
        // SubProg half pc: 96 op: ENDFOR_INT_UP1 (54)
        _i_8047 = _i_8047 + 1;
        goto L1; // [96] 24
L2: // addr: 101 pc: 96 sub: 8038 op: 54
        ;
    }
    // SubProg half pc: 101 op: STARTLINE (58)

    /** scinot.e:218		return reverse( carry( reverse( quotient ), 10 ) )*/
    // SubProg half pc: 103 op: PROC (27)
    RefDS(_quotient_8041);
    _4377 = _27reverse(_quotient_8041);
    // SubProg half pc: 107 op: PROC (27)
    _4378 = _27carry(_4377, 10);
    _4377 = NOVALUE;
    // SubProg half pc: 112 op: PROC (27)
    _4379 = _27reverse(_4378);
    _4378 = NOVALUE;
    // SubProg half pc: 116 op: RETURNF (28)

// Exiting block BLOCK: half

// block var decimal_8040
    DeRefDS(_decimal_8040);

// block var quotient_8041
    DeRefDS(_quotient_8041);

// block var q_8042
    DeRef(_q_8042);

// block var Q_8043
    DeRef(_Q_8043);
    DeRef(_4374);
    _4374 = NOVALUE;
    return _4379;
    // SubProg half pc: 120 op: BADRETURNF (43)
    ;
}


object _27decimals_to_bits(object _decimals_8076, object _size_8077)
{
    object _sub_8078 = NOVALUE;
    object _bits_8079 = NOVALUE;
    object _bit_8080 = NOVALUE;
    object _assigned_8081 = NOVALUE;
    object _4407 = NOVALUE; // 8111 4407
// skipping _4406  name type: 0
// skipping _4405  name type: 0
// skipping _4404  name type: 0
    object _4403 = NOVALUE; // 8107 4403
    object _4402 = NOVALUE; // 8106 4402
    object _4401 = NOVALUE; // 8105 4401
    object _4400 = NOVALUE; // 8104 4400
// skipping _4399  name type: 0
    object _4398 = NOVALUE; // 8102 4398
    object _4397 = NOVALUE; // 8101 4397
    object _4396 = NOVALUE; // 8100 4396
// skipping _4395  name type: 0
    object _4394 = NOVALUE; // 8098 4394
// skipping _4393  name type: 0
    object _4392 = NOVALUE; // 8095 4392
    object _4391 = NOVALUE; // 8093 4391
    object _4390 = NOVALUE; // 8092 4390
    object _4389 = NOVALUE; // 8091 4389
    object _4388 = NOVALUE; // 8090 4388
// skipping _4387  name type: 0
    object _4386 = NOVALUE; // 8088 4386
// skipping _4385  name type: 0
    object _4384 = NOVALUE; // 8085 4384
// skipping _4383  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg decimals_to_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 3 op: INTEGER_CHECK (96)
    // SubProg decimals_to_bits pc: 5 op: STARTLINE (58)

    /** scinot.e:233		sub = {5}*/
    // SubProg decimals_to_bits pc: 7 op: ASSIGN (18)
    RefDS(_4382);
    DeRef(_sub_8078);
    _sub_8078 = _4382;
    // SubProg decimals_to_bits pc: 10 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 12 op: STARTLINE (58)

    /** scinot.e:234		bits = repeat( 0, size )*/
    // SubProg decimals_to_bits pc: 14 op: REPEAT (32)
    DeRef(_bits_8079);
    _bits_8079 = Repeat(0, _size_8077);
    // SubProg decimals_to_bits pc: 18 op: STARTLINE (58)

    /** scinot.e:235		bit = 1*/
    // SubProg decimals_to_bits pc: 20 op: ASSIGN_I (113)
    _bit_8080 = 1;
    // SubProg decimals_to_bits pc: 23 op: STARTLINE (58)

    /** scinot.e:236		assigned = 0*/
    // SubProg decimals_to_bits pc: 25 op: ASSIGN_I (113)
    _assigned_8081 = 0;
    // SubProg decimals_to_bits pc: 28 op: STARTLINE (58)

    /** scinot.e:240		if compare(decimals, bits) > 0 then */
    // SubProg decimals_to_bits pc: 30 op: COMPARE (76)
    if (IS_ATOM_INT(_decimals_8076) && IS_ATOM_INT(_bits_8079)){
        _4384 = (_decimals_8076 < _bits_8079) ? -1 : (_decimals_8076 > _bits_8079);
    }
    else{
        _4384 = compare(_decimals_8076, _bits_8079);
    }
    // SubProg decimals_to_bits pc: 34 op: GREATER_IFW_I (124)
    if (_4384 <= 0)
    goto L1; // [34] 166
    // SubProg decimals_to_bits pc: 38 op: STARTLINE (58)

    /** scinot.e:242			while (not assigned) or (bit < find( 1, bits ) + size + 1)  do*/
    // SubProg decimals_to_bits pc: 40 op: NOP2 (110)
    // SubProg decimals_to_bits pc: 42 op: NOPWHILE (158)
L2: // addr: 43 pc: 42 sub: 8074 op: 158
    // SubProg decimals_to_bits pc: 43 op: NOT (7)
    _4386 = (_assigned_8081 == 0);
    // SubProg decimals_to_bits pc: 46 op: SC1_OR_IF (147)
    if (_4386 != 0) {
        goto L3; // [46] 72
    }
    // SubProg decimals_to_bits pc: 50 op: FIND_FROM (176)
    _4388 = find_from(1, _bits_8079, 1);
    // SubProg decimals_to_bits pc: 55 op: PLUS (11)
    _4389 = _4388 + _size_8077;
    if ((object)((uintptr_t)_4389 + (uintptr_t)HIGH_BITS) >= 0){
        _4389 = NewDouble((eudouble)_4389);
    }
    _4388 = NOVALUE;
    // SubProg decimals_to_bits pc: 59 op: PLUS1 (93)
    if (IS_ATOM_INT(_4389)) {
        _4390 = _4389 + 1;
        if (_4390 > MAXINT){
            _4390 = NewDouble((eudouble)_4390);
        }
    }
    else
    _4390 = binary_op(PLUS, 1, _4389);
    DeRef(_4389);
    _4389 = NOVALUE;
    // SubProg decimals_to_bits pc: 63 op: LESS (1)
    if (IS_ATOM_INT(_4390)) {
        _4391 = (_bit_8080 < _4390);
    }
    else {
        _4391 = ((eudouble)_bit_8080 < DBL_PTR(_4390)->dbl);
    }
    DeRef(_4390);
    _4390 = NOVALUE;
    // SubProg decimals_to_bits pc: 67 op: NOP1 (159)
    // SubProg decimals_to_bits pc: 68 op: WHILE (47)
    if (_4391 == 0)
    {
        DeRef(_4391);
        _4391 = NOVALUE;
        goto L4; // [68] 165
    }
    else{
        DeRef(_4391);
        _4391 = NOVALUE;
    }
    // SubProg decimals_to_bits pc: 71 op: NOP1 (159)
L3: // addr: 72 pc: 71 sub: 8074 op: 159
    // SubProg decimals_to_bits pc: 72 op: STARTLINE (58)

    /** scinot.e:243				if compare( sub, decimals ) <= 0 then*/
    // SubProg decimals_to_bits pc: 74 op: COMPARE (76)
    if (IS_ATOM_INT(_sub_8078) && IS_ATOM_INT(_decimals_8076)){
        _4392 = (_sub_8078 < _decimals_8076) ? -1 : (_sub_8078 > _decimals_8076);
    }
    else{
        _4392 = compare(_sub_8078, _decimals_8076);
    }
    // SubProg decimals_to_bits pc: 78 op: LESSEQ_IFW_I (123)
    if (_4392 > 0)
    goto L5; // [78] 146
    // SubProg decimals_to_bits pc: 82 op: STARTLINE (58)

    /** scinot.e:244					assigned = 1*/
    // SubProg decimals_to_bits pc: 84 op: ASSIGN_I (113)
    _assigned_8081 = 1;
    // SubProg decimals_to_bits pc: 87 op: STARTLINE (58)

    /** scinot.e:245					if length( bits ) < bit then*/
    // SubProg decimals_to_bits pc: 89 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_8079)){
            _4394 = SEQ_PTR(_bits_8079)->length;
    }
    else {
        _4394 = 1;
    }
    // SubProg decimals_to_bits pc: 92 op: LESS_IFW_I (119)
    if (_4394 >= _bit_8080)
    goto L6; // [92] 114
    // SubProg decimals_to_bits pc: 96 op: STARTLINE (58)

    /** scinot.e:246						bits &= repeat( 0, bit - length(bits)) */
    // SubProg decimals_to_bits pc: 98 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_8079)){
            _4396 = SEQ_PTR(_bits_8079)->length;
    }
    else {
        _4396 = 1;
    }
    // SubProg decimals_to_bits pc: 101 op: MINUS (10)
    _4397 = _bit_8080 - _4396;
    _4396 = NOVALUE;
    // SubProg decimals_to_bits pc: 105 op: REPEAT (32)
    _4398 = Repeat(0, _4397);
    _4397 = NOVALUE;
    // SubProg decimals_to_bits pc: 109 op: CONCAT (15)
    Concat((object_ptr)&_bits_8079, _bits_8079, _4398);
    DeRefDS(_4398);
    _4398 = NOVALUE;
    // SubProg decimals_to_bits pc: 113 op: NOP1 (159)
L6: // addr: 114 pc: 113 sub: 8074 op: 159
    // SubProg decimals_to_bits pc: 114 op: STARTLINE (58)

    /** scinot.e:249					bits[bit] += 1*/
    // SubProg decimals_to_bits pc: 116 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_bits_8079);
    _4400 = (object)*(((s1_ptr)_2)->base + _bit_8080);
    // SubProg decimals_to_bits pc: 120 op: PLUS1 (93)
    if (IS_ATOM_INT(_4400)) {
        _4401 = _4400 + 1;
        if (_4401 > MAXINT){
            _4401 = NewDouble((eudouble)_4401);
        }
    }
    else
    _4401 = binary_op(PLUS, 1, _4400);
    _4400 = NOVALUE;
    // SubProg decimals_to_bits pc: 124 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bits_8079);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bits_8079 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _bit_8080);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4401;
    if( _1 != _4401 ){
        DeRef(_1);
    }
    _4401 = NOVALUE;
    // SubProg decimals_to_bits pc: 128 op: STARTLINE (58)

    /** scinot.e:250					decimals = borrow( add( decimals, -sub ), 10 )*/
    // SubProg decimals_to_bits pc: 130 op: UMINUS (12)
    _4402 = unary_op(UMINUS, _sub_8078);
    // SubProg decimals_to_bits pc: 133 op: PROC (27)
    RefDS(_decimals_8076);
    _4403 = _27add(_decimals_8076, _4402);
    _4402 = NOVALUE;
    // SubProg decimals_to_bits pc: 138 op: PROC (27)
    _0 = _decimals_8076;
    _decimals_8076 = _27borrow(_4403, 10);
    DeRefDS(_0);
    _4403 = NOVALUE;
    // SubProg decimals_to_bits pc: 143 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 145 op: NOP1 (159)
L5: // addr: 146 pc: 145 sub: 8074 op: 159
    // SubProg decimals_to_bits pc: 146 op: STARTLINE (58)

    /** scinot.e:252				sub = half( sub )*/
    // SubProg decimals_to_bits pc: 148 op: PROC (27)
    RefDS(_sub_8078);
    _0 = _sub_8078;
    _sub_8078 = _27half(_sub_8078);
    DeRefDS(_0);
    // SubProg decimals_to_bits pc: 152 op: SEQUENCE_CHECK (97)
    // SubProg decimals_to_bits pc: 154 op: STARTLINE (58)

    /** scinot.e:254				bit += 1*/
    // SubProg decimals_to_bits pc: 156 op: PLUS1_I (117)
    _bit_8080 = _bit_8080 + 1;
    // SubProg decimals_to_bits pc: 160 op: STARTLINE (58)

    /** scinot.e:255			end while*/
    // SubProg decimals_to_bits pc: 162 op: ENDWHILE (22)
    goto L2; // [162] 43
    // SubProg decimals_to_bits pc: 164 op: NOP1 (159)
L4: // addr: 165 pc: 164 sub: 8074 op: 159
    // SubProg decimals_to_bits pc: 165 op: NOP1 (159)
L1: // addr: 166 pc: 165 sub: 8074 op: 159
    // SubProg decimals_to_bits pc: 166 op: STARTLINE (58)

    /** scinot.e:258		return reverse(bits)*/
    // SubProg decimals_to_bits pc: 168 op: PROC (27)
    RefDS(_bits_8079);
    _4407 = _27reverse(_bits_8079);
    // SubProg decimals_to_bits pc: 172 op: RETURNF (28)

// Exiting block BLOCK: decimals_to_bits

// block var decimals_8076
    DeRefDS(_decimals_8076);

// block var size_8077

// block var sub_8078
    DeRef(_sub_8078);

// block var bits_8079
    DeRefDS(_bits_8079);

// block var bit_8080

// block var assigned_8081
    DeRef(_4386);
    _4386 = NOVALUE;
    return _4407;
    // SubProg decimals_to_bits pc: 176 op: BADRETURNF (43)
    ;
}


object _27string_to_int(object _s_8114)
{
    object _int_8115 = NOVALUE;
// skipping _4412  name type: 0
    object _4411 = NOVALUE; // 8121 4411
    object _4410 = NOVALUE; // 8120 4410
// skipping _4409  name type: 0
    object _4408 = NOVALUE; // 8118 4408
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg string_to_int pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg string_to_int pc: 3 op: STARTLINE (58)

    /** scinot.e:263		int = 0*/
    // SubProg string_to_int pc: 5 op: ASSIGN_I (113)
    _int_8115 = 0;
    // SubProg string_to_int pc: 8 op: STARTLINE (58)

    /** scinot.e:264		for i = 1 to length(s) do*/
    // SubProg string_to_int pc: 10 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8114)){
            _4408 = SEQ_PTR(_s_8114)->length;
    }
    else {
        _4408 = 1;
    }
    // SubProg string_to_int pc: 13 op: FOR_I (125)
    {
        object _i_8117;
        _i_8117 = 1;
L1: // addr: 20 pc: 13 sub: 8112 op: 125
        if (_i_8117 > _4408){
            goto L2; // [13] 51
        }
        // SubProg string_to_int pc: 20 op: STARTLINE (58)

        /** scinot.e:265			int *= 10*/
        // SubProg string_to_int pc: 22 op: MULTIPLY (13)
        _int_8115 = _int_8115 * 10;
        // SubProg string_to_int pc: 28 op: STARTLINE (58)

        /** scinot.e:266			int += s[i] - '0'*/
        // SubProg string_to_int pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_8114);
        _4410 = (object)*(((s1_ptr)_2)->base + _i_8117);
        // SubProg string_to_int pc: 34 op: MINUS (10)
        if (IS_ATOM_INT(_4410)) {
            _4411 = _4410 - 48;
            if ((object)((uintptr_t)_4411 +(uintptr_t) HIGH_BITS) >= 0){
                _4411 = NewDouble((eudouble)_4411);
            }
        }
        else {
            _4411 = binary_op(MINUS, _4410, 48);
        }
        _4410 = NOVALUE;
        // SubProg string_to_int pc: 38 op: PLUS (11)
        if (IS_ATOM_INT(_4411)) {
            _int_8115 = _int_8115 + _4411;
        }
        else {
            _int_8115 = binary_op(PLUS, _int_8115, _4411);
        }
        DeRef(_4411);
        _4411 = NOVALUE;
        // SubProg string_to_int pc: 42 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_int_8115)) {
            _1 = (object)(DBL_PTR(_int_8115)->dbl);
            DeRefDS(_int_8115);
            _int_8115 = _1;
        }
        // SubProg string_to_int pc: 44 op: STARTLINE (58)

        /** scinot.e:267		end for*/
        // SubProg string_to_int pc: 46 op: ENDFOR_INT_UP1 (54)
        _i_8117 = _i_8117 + 1;
        goto L1; // [46] 20
L2: // addr: 51 pc: 46 sub: 8112 op: 54
        ;
    }
    // SubProg string_to_int pc: 51 op: STARTLINE (58)

    /** scinot.e:268		return int*/
    // SubProg string_to_int pc: 53 op: RETURNF (28)

// Exiting block BLOCK: string_to_int

// block var s_8114
    DeRefDS(_s_8114);
    return _int_8115;
    // SubProg string_to_int pc: 57 op: BADRETURNF (43)
    ;
}


object _27trim_bits(object _bits_8125)
{
// skipping _4419  name type: 0
    object _4418 = NOVALUE; // 8132 4418
    object _4417 = NOVALUE; // 8131 4417
    object _4416 = NOVALUE; // 8130 4416
    object _4415 = NOVALUE; // 8129 4415
    object _4414 = NOVALUE; // 8128 4414
    object _4413 = NOVALUE; // 8127 4413
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg trim_bits pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg trim_bits pc: 3 op: STARTLINE (58)

    /** scinot.e:272			while length(bits) and not bits[$] do*/
    // SubProg trim_bits pc: 5 op: NOP2 (110)
    // SubProg trim_bits pc: 7 op: NOPWHILE (158)
L1: // addr: 8 pc: 7 sub: 8123 op: 158
    // SubProg trim_bits pc: 8 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_8125)){
            _4413 = SEQ_PTR(_bits_8125)->length;
    }
    else {
        _4413 = 1;
    }
    // SubProg trim_bits pc: 11 op: SC1_AND_IF (146)
    if (_4413 == 0) {
        goto L2; // [11] 44
    }
    // SubProg trim_bits pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_8125)){
            _4415 = SEQ_PTR(_bits_8125)->length;
    }
    else {
        _4415 = 1;
    }
    // SubProg trim_bits pc: 18 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bits_8125);
    _4416 = (object)*(((s1_ptr)_2)->base + _4415);
    // SubProg trim_bits pc: 22 op: NOT (7)
    if (IS_ATOM_INT(_4416)) {
        _4417 = (_4416 == 0);
    }
    else {
        _4417 = unary_op(NOT, _4416);
    }
    _4416 = NOVALUE;
    // SubProg trim_bits pc: 25 op: NOP1 (159)
    // SubProg trim_bits pc: 26 op: WHILE (47)
    if (_4417 <= 0) {
        if (_4417 == 0) {
            DeRef(_4417);
            _4417 = NOVALUE;
            goto L2; // [26] 44
        }
        else {
            if (!IS_ATOM_INT(_4417) && DBL_PTR(_4417)->dbl == 0.0){
                DeRef(_4417);
                _4417 = NOVALUE;
                goto L2; // [26] 44
            }
            DeRef(_4417);
            _4417 = NOVALUE;
        }
    }
    DeRef(_4417);
    _4417 = NOVALUE;
    // SubProg trim_bits pc: 29 op: STARTLINE (58)

    /** scinot.e:273				bits = remove( bits, length( bits ) )*/
    // SubProg trim_bits pc: 31 op: LENGTH (42)
    if (IS_SEQUENCE(_bits_8125)){
            _4418 = SEQ_PTR(_bits_8125)->length;
    }
    else {
        _4418 = 1;
    }
    // SubProg trim_bits pc: 34 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_bits_8125);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_4418)) ? _4418 : (object)(DBL_PTR(_4418)->dbl);
        int stop = (IS_ATOM_INT(_4418)) ? _4418 : (object)(DBL_PTR(_4418)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_bits_8125), start, &_bits_8125 );
            }
            else Tail(SEQ_PTR(_bits_8125), stop+1, &_bits_8125);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_bits_8125), start, &_bits_8125);
        }
        else {
            assign_slice_seq = &assign_space;
            _bits_8125 = Remove_elements(start, stop, (SEQ_PTR(_bits_8125)->ref == 1));
        }
    }
    _4418 = NOVALUE;
    _4418 = NOVALUE;
    // SubProg trim_bits pc: 39 op: STARTLINE (58)

    /** scinot.e:274			end while*/
    // SubProg trim_bits pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 8
    // SubProg trim_bits pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 8123 op: 159
    // SubProg trim_bits pc: 44 op: STARTLINE (58)

    /** scinot.e:275			return bits*/
    // SubProg trim_bits pc: 46 op: RETURNF (28)

// Exiting block BLOCK: trim_bits
    return _bits_8125;
    // SubProg trim_bits pc: 50 op: BADRETURNF (43)
    ;
}


object _27scientific_to_float(object _s_8148, object _fp_8149)
{
    object _dp_8150 = NOVALUE;
    object _e_8151 = NOVALUE;
    object _exp_8152 = NOVALUE;
    object _int_bits_8153 = NOVALUE;
    object _frac_bits_8154 = NOVALUE;
    object _mbits_8155 = NOVALUE;
    object _ebits_8156 = NOVALUE;
    object _sbits_8157 = NOVALUE;
    object _significand_8158 = NOVALUE;
    object _exponent_8159 = NOVALUE;
    object _min_exp_8160 = NOVALUE;
    object _exp_bias_8161 = NOVALUE;
    object _4577 = NOVALUE; // 8352 4577
    object _4576 = NOVALUE; // 8351 4576
// skipping _4575  name type: 0
    object _4574 = NOVALUE; // 8349 4574
// skipping _4573  name type: 0
    object _4572 = NOVALUE; // 8346 4572
    object _4571 = NOVALUE; // 8345 4571
// skipping _4570  name type: 0
    object _4569 = NOVALUE; // 8343 4569
    object _4568 = NOVALUE; // 8342 4568
    object _4567 = NOVALUE; // 8341 4567
    object _4566 = NOVALUE; // 8340 4566
    object _4565 = NOVALUE; // 8339 4565
    object _4564 = NOVALUE; // 8338 4564
    object _4563 = NOVALUE; // 8337 4563
// skipping _4562  name type: 0
    object _4561 = NOVALUE; // 8333 4561
    object _4560 = NOVALUE; // 8332 4560
// skipping _4559  name type: 0
    object _4558 = NOVALUE; // 8329 4558
    object _4557 = NOVALUE; // 8328 4557
    object _4556 = NOVALUE; // 8327 4556
    object _4555 = NOVALUE; // 8326 4555
// skipping _4554  name type: 0
// skipping _4553  name type: 0
    object _4552 = NOVALUE; // 8322 4552
    object _4551 = NOVALUE; // 8321 4551
    object _4550 = NOVALUE; // 8320 4550
    object _4549 = NOVALUE; // 8319 4549
    object _4548 = NOVALUE; // 8318 4548
    object _4547 = NOVALUE; // 8317 4547
    object _4546 = NOVALUE; // 8316 4546
    object _4545 = NOVALUE; // 8315 4545
// skipping _4544  name type: 0
// skipping _4543  name type: 0
    object _4542 = NOVALUE; // 8310 4542
    object _4541 = NOVALUE; // 8309 4541
// skipping _4540  name type: 0
// skipping _4539  name type: 0
    object _4538 = NOVALUE; // 8306 4538
    object _4537 = NOVALUE; // 8305 4537
    object _4536 = NOVALUE; // 8304 4536
    object _4535 = NOVALUE; // 8303 4535
// skipping _4534  name type: 0
// skipping _4533  name type: 0
    object _4532 = NOVALUE; // 8298 4532
    object _4531 = NOVALUE; // 8297 4531
// skipping _4530  name type: 0
    object _4529 = NOVALUE; // 8294 4529
    object _4528 = NOVALUE; // 8293 4528
// skipping _4527  name type: 0
    object _4526 = NOVALUE; // 8289 4526
// skipping _4525  name type: 0
    object _4524 = NOVALUE; // 8287 4524
    object _4523 = NOVALUE; // 8286 4523
    object _4522 = NOVALUE; // 8285 4522
    object _4521 = NOVALUE; // 8284 4521
    object _4520 = NOVALUE; // 8283 4520
    object _4519 = NOVALUE; // 8282 4519
    object _4518 = NOVALUE; // 8281 4518
    object _4517 = NOVALUE; // 8280 4517
    object _4516 = NOVALUE; // 8279 4516
    object _4515 = NOVALUE; // 8278 4515
// skipping _4514  name type: 0
    object _4513 = NOVALUE; // 8275 4513
    object _4512 = NOVALUE; // 8274 4512
    object _4511 = NOVALUE; // 8273 4511
    object _4510 = NOVALUE; // 8272 4510
// skipping _4509  name type: 0
    object _4508 = NOVALUE; // 8269 4508
    object _4507 = NOVALUE; // 8268 4507
    object _4506 = NOVALUE; // 8267 4506
    object _4505 = NOVALUE; // 8266 4505
// skipping _4504  name type: 0
// skipping _4503  name type: 0
    object _4502 = NOVALUE; // 8262 4502
// skipping _4501  name type: 0
    object _4500 = NOVALUE; // 8259 4500
    object _4499 = NOVALUE; // 8258 4499
    object _4498 = NOVALUE; // 8257 4498
    object _4497 = NOVALUE; // 8256 4497
    object _4496 = NOVALUE; // 8255 4496
// skipping _4495  name type: 0
    object _4494 = NOVALUE; // 8253 4494
    object _4493 = NOVALUE; // 8252 4493
    object _4492 = NOVALUE; // 8251 4492
    object _4491 = NOVALUE; // 8250 4491
    object _4490 = NOVALUE; // 8249 4490
    object _4489 = NOVALUE; // 8248 4489
// skipping _4488  name type: 0
    object _4487 = NOVALUE; // 8245 4487
    object _4486 = NOVALUE; // 8244 4486
    object _4485 = NOVALUE; // 8243 4485
    object _4484 = NOVALUE; // 8242 4484
    object _4483 = NOVALUE; // 8241 4483
// skipping _4482  name type: 0
    object _4481 = NOVALUE; // 8239 4481
    object _4480 = NOVALUE; // 8238 4480
// skipping _4479  name type: 0
    object _4478 = NOVALUE; // 8234 4478
    object _4477 = NOVALUE; // 8233 4477
    object _4476 = NOVALUE; // 8232 4476
    object _4475 = NOVALUE; // 8231 4475
    object _4474 = NOVALUE; // 8230 4474
// skipping _4473  name type: 0
    object _4472 = NOVALUE; // 8227 4472
// skipping _4471  name type: 0
    object _4470 = NOVALUE; // 8223 4470
// skipping _4469  name type: 0
// skipping _4468  name type: 0
    object _4467 = NOVALUE; // 8218 4467
    object _4466 = NOVALUE; // 8217 4466
// skipping _4465  name type: 0
    object _4464 = NOVALUE; // 8214 4464
    object _4463 = NOVALUE; // 8213 4463
// skipping _4462  name type: 0
    object _4461 = NOVALUE; // 8211 4461
// skipping _4460  name type: 0
// skipping _4459  name type: 0
// skipping _4458  name type: 0
    object _4457 = NOVALUE; // 8206 4457
    object _4456 = NOVALUE; // 8205 4456
    object _4455 = NOVALUE; // 8204 4455
    object _4454 = NOVALUE; // 8203 4454
// skipping _4453  name type: 0
    object _4452 = NOVALUE; // 8200 4452
    object _4451 = NOVALUE; // 8199 4451
    object _4450 = NOVALUE; // 8198 4450
    object _4449 = NOVALUE; // 8197 4449
// skipping _4448  name type: 0
    object _4447 = NOVALUE; // 8195 4447
    object _4446 = NOVALUE; // 8194 4446
// skipping _4445  name type: 0
    object _4444 = NOVALUE; // 8190 4444
    object _4443 = NOVALUE; // 8189 4443
    object _4442 = NOVALUE; // 8188 4442
    object _4441 = NOVALUE; // 8187 4441
// skipping _4440  name type: 0
    object _4439 = NOVALUE; // 8185 4439
    object _4438 = NOVALUE; // 8184 4438
// skipping _4437  name type: 0
// skipping _4436  name type: 0
// skipping _4435  name type: 0
// skipping _4434  name type: 0
// skipping _4433  name type: 0
// skipping _4432  name type: 0
    object _4431 = NOVALUE; // 8175 4431
// skipping _4430  name type: 0
// skipping _4429  name type: 0
// skipping _4428  name type: 0
    object _4427 = NOVALUE; // 8169 4427
// skipping _4426  name type: 0
// skipping _4425  name type: 0
// skipping _4424  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_float pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 3 op: STARTLINE (58)

    /** scinot.e:316		if fp = NATIVE then*/
    // SubProg scientific_to_float pc: 5 op: EQUALS_IFW (104)
    if (_fp_8149 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_float pc: 9 op: STARTLINE (58)

    /** scinot.e:317			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_float pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_float pc: 13 op: ASSIGN (18)
    _fp_8149 = 2;
    // SubProg scientific_to_float pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 17 op: STARTLINE (58)

    /** scinot.e:319		if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 19 op: EQUALS_IFW (104)
    if (_fp_8149 != 2)
    goto L2; // [19] 46
    // SubProg scientific_to_float pc: 23 op: STARTLINE (58)

    /** scinot.e:320			significand = DOUBLE_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 25 op: ASSIGN_I (113)
    _significand_8158 = 52;
    // SubProg scientific_to_float pc: 28 op: STARTLINE (58)

    /** scinot.e:321			exponent    = DOUBLE_EXPONENT*/
    // SubProg scientific_to_float pc: 30 op: ASSIGN_I (113)
    _exponent_8159 = 11;
    // SubProg scientific_to_float pc: 33 op: STARTLINE (58)

    /** scinot.e:322			min_exp     = DOUBLE_MIN_EXP*/
    // SubProg scientific_to_float pc: 35 op: ASSIGN_I (113)
    _min_exp_8160 = -1023;
    // SubProg scientific_to_float pc: 38 op: STARTLINE (58)

    /** scinot.e:323			exp_bias    = DOUBLE_EXP_BIAS*/
    // SubProg scientific_to_float pc: 40 op: ASSIGN_I (113)
    _exp_bias_8161 = 1023;
    // SubProg scientific_to_float pc: 43 op: ELSE (23)
    goto L3; // [43] 74
    // SubProg scientific_to_float pc: 45 op: NOP1 (159)
L2: // addr: 46 pc: 45 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 46 op: STARTLINE (58)

    /** scinot.e:325		elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 48 op: EQUALS_IFW (104)
    if (_fp_8149 != 3)
    goto L4; // [48] 73
    // SubProg scientific_to_float pc: 52 op: STARTLINE (58)

    /** scinot.e:326			significand = EXTENDED_SIGNIFICAND*/
    // SubProg scientific_to_float pc: 54 op: ASSIGN_I (113)
    _significand_8158 = 64;
    // SubProg scientific_to_float pc: 57 op: STARTLINE (58)

    /** scinot.e:327			exponent    = EXTENDED_EXPONENT*/
    // SubProg scientific_to_float pc: 59 op: ASSIGN_I (113)
    _exponent_8159 = 15;
    // SubProg scientific_to_float pc: 62 op: STARTLINE (58)

    /** scinot.e:328			min_exp     = EXTENDED_MIN_EXP*/
    // SubProg scientific_to_float pc: 64 op: ASSIGN_I (113)
    _min_exp_8160 = -16383;
    // SubProg scientific_to_float pc: 67 op: STARTLINE (58)

    /** scinot.e:329			exp_bias    = EXTENDED_EXP_BIAS*/
    // SubProg scientific_to_float pc: 69 op: ASSIGN_I (113)
    _exp_bias_8161 = 16383;
    // SubProg scientific_to_float pc: 72 op: NOP1 (159)
L4: // addr: 73 pc: 72 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 73 op: NOP1 (159)
L3: // addr: 74 pc: 73 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 74 op: STARTLINE (58)

    /** scinot.e:333		if s[1] = '-' then*/
    // SubProg scientific_to_float pc: 76 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_8148);
    _4427 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4427, 45)){
        _4427 = NOVALUE;
        goto L5; // [80] 101
    }
    _4427 = NOVALUE;
    // SubProg scientific_to_float pc: 84 op: STARTLINE (58)

    /** scinot.e:334			sbits = {1}*/
    // SubProg scientific_to_float pc: 86 op: ASSIGN (18)
    RefDS(_4353);
    DeRefi(_sbits_8157);
    _sbits_8157 = _4353;
    // SubProg scientific_to_float pc: 89 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 91 op: STARTLINE (58)

    /** scinot.e:335			s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 93 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_8148);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_8148), start, &_s_8148 );
            }
            else Tail(SEQ_PTR(_s_8148), stop+1, &_s_8148);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_8148), start, &_s_8148);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_8148 = Remove_elements(start, stop, (SEQ_PTR(_s_8148)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 98 op: ELSE (23)
    goto L6; // [98] 126
    // SubProg scientific_to_float pc: 100 op: NOP1 (159)
L5: // addr: 101 pc: 100 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 101 op: STARTLINE (58)

    /** scinot.e:337			sbits = {0}*/
    // SubProg scientific_to_float pc: 103 op: RIGHT_BRACE_N (31)
    _0 = _sbits_8157;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _sbits_8157 = MAKE_SEQ(_1);
    DeRefi(_0);
    // SubProg scientific_to_float pc: 107 op: STARTLINE (58)

    /** scinot.e:338			if s[1] = '+' then*/
    // SubProg scientific_to_float pc: 109 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_8148);
    _4431 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 113 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4431, 43)){
        _4431 = NOVALUE;
        goto L7; // [113] 125
    }
    _4431 = NOVALUE;
    // SubProg scientific_to_float pc: 117 op: STARTLINE (58)

    /** scinot.e:339				s = remove( s, 1 )*/
    // SubProg scientific_to_float pc: 119 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_8148);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_8148), start, &_s_8148 );
            }
            else Tail(SEQ_PTR(_s_8148), stop+1, &_s_8148);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_8148), start, &_s_8148);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_8148 = Remove_elements(start, stop, (SEQ_PTR(_s_8148)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 124 op: NOP1 (159)
L7: // addr: 125 pc: 124 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 126 op: STARTLINE (58)

    /** scinot.e:344		dp = find('.', s)*/
    // SubProg scientific_to_float pc: 128 op: FIND_FROM (176)
    _dp_8150 = find_from(46, _s_8148, 1);
    // SubProg scientific_to_float pc: 133 op: STARTLINE (58)

    /** scinot.e:345		e = find( 'e', s )*/
    // SubProg scientific_to_float pc: 135 op: FIND_FROM (176)
    _e_8151 = find_from(101, _s_8148, 1);
    // SubProg scientific_to_float pc: 140 op: STARTLINE (58)

    /** scinot.e:346		if not e then*/
    // SubProg scientific_to_float pc: 142 op: NOT_IFW (108)
    if (_e_8151 != 0)
    goto L8; // [142] 153
    // SubProg scientific_to_float pc: 145 op: STARTLINE (58)

    /** scinot.e:347			e = find('E', s )*/
    // SubProg scientific_to_float pc: 147 op: FIND_FROM (176)
    _e_8151 = find_from(69, _s_8148, 1);
    // SubProg scientific_to_float pc: 152 op: NOP1 (159)
L8: // addr: 153 pc: 152 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 153 op: STARTLINE (58)

    /** scinot.e:351		exp = 0*/
    // SubProg scientific_to_float pc: 155 op: ASSIGN_I (113)
    _exp_8152 = 0;
    // SubProg scientific_to_float pc: 158 op: STARTLINE (58)

    /** scinot.e:352		if s[e+1] = '-' then*/
    // SubProg scientific_to_float pc: 160 op: PLUS1 (93)
    _4438 = _e_8151 + 1;
    // SubProg scientific_to_float pc: 164 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_8148);
    _4439 = (object)*(((s1_ptr)_2)->base + _4438);
    // SubProg scientific_to_float pc: 168 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4439, 45)){
        _4439 = NOVALUE;
        goto L9; // [168] 199
    }
    _4439 = NOVALUE;
    // SubProg scientific_to_float pc: 172 op: STARTLINE (58)

    /** scinot.e:353			exp -= string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 174 op: PLUS (11)
    _4441 = _e_8151 + 2;
    if ((object)((uintptr_t)_4441 + (uintptr_t)HIGH_BITS) >= 0){
        _4441 = NewDouble((eudouble)_4441);
    }
    // SubProg scientific_to_float pc: 178 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4442 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4442 = 1;
    }
    // SubProg scientific_to_float pc: 181 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4443;
    RHS_Slice(_s_8148, _4441, _4442);
    // SubProg scientific_to_float pc: 186 op: PROC (27)
    _4444 = _27string_to_int(_4443);
    _4443 = NOVALUE;
    // SubProg scientific_to_float pc: 190 op: MINUS (10)
    if (IS_ATOM_INT(_4444)) {
        _exp_8152 = _exp_8152 - _4444;
    }
    else {
        _exp_8152 = binary_op(MINUS, _exp_8152, _4444);
    }
    DeRef(_4444);
    _4444 = NOVALUE;
    // SubProg scientific_to_float pc: 194 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_8152)) {
        _1 = (object)(DBL_PTR(_exp_8152)->dbl);
        DeRefDS(_exp_8152);
        _exp_8152 = _1;
    }
    // SubProg scientific_to_float pc: 196 op: ELSE (23)
    goto LA; // [196] 266
    // SubProg scientific_to_float pc: 198 op: NOP1 (159)
L9: // addr: 199 pc: 198 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 199 op: STARTLINE (58)

    /** scinot.e:356			if s[e+1] = '+' then*/
    // SubProg scientific_to_float pc: 201 op: PLUS1 (93)
    _4446 = _e_8151 + 1;
    // SubProg scientific_to_float pc: 205 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_s_8148);
    _4447 = (object)*(((s1_ptr)_2)->base + _4446);
    // SubProg scientific_to_float pc: 209 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _4447, 43)){
        _4447 = NOVALUE;
        goto LB; // [209] 240
    }
    _4447 = NOVALUE;
    // SubProg scientific_to_float pc: 213 op: STARTLINE (58)

    /** scinot.e:357				exp += string_to_int( s[e+2..$] )*/
    // SubProg scientific_to_float pc: 215 op: PLUS (11)
    _4449 = _e_8151 + 2;
    if ((object)((uintptr_t)_4449 + (uintptr_t)HIGH_BITS) >= 0){
        _4449 = NewDouble((eudouble)_4449);
    }
    // SubProg scientific_to_float pc: 219 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4450 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4450 = 1;
    }
    // SubProg scientific_to_float pc: 222 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4451;
    RHS_Slice(_s_8148, _4449, _4450);
    // SubProg scientific_to_float pc: 227 op: PROC (27)
    _4452 = _27string_to_int(_4451);
    _4451 = NOVALUE;
    // SubProg scientific_to_float pc: 231 op: PLUS (11)
    if (IS_ATOM_INT(_4452)) {
        _exp_8152 = _exp_8152 + _4452;
    }
    else {
        _exp_8152 = binary_op(PLUS, _exp_8152, _4452);
    }
    DeRef(_4452);
    _4452 = NOVALUE;
    // SubProg scientific_to_float pc: 235 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_8152)) {
        _1 = (object)(DBL_PTR(_exp_8152)->dbl);
        DeRefDS(_exp_8152);
        _exp_8152 = _1;
    }
    // SubProg scientific_to_float pc: 237 op: ELSE (23)
    goto LC; // [237] 265
    // SubProg scientific_to_float pc: 239 op: NOP1 (159)
LB: // addr: 240 pc: 239 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 240 op: STARTLINE (58)

    /** scinot.e:359				exp += string_to_int( s[e+1..$] )*/
    // SubProg scientific_to_float pc: 242 op: PLUS1 (93)
    _4454 = _e_8151 + 1;
    if (_4454 > MAXINT){
        _4454 = NewDouble((eudouble)_4454);
    }
    // SubProg scientific_to_float pc: 246 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4455 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4455 = 1;
    }
    // SubProg scientific_to_float pc: 249 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4456;
    RHS_Slice(_s_8148, _4454, _4455);
    // SubProg scientific_to_float pc: 254 op: PROC (27)
    _4457 = _27string_to_int(_4456);
    _4456 = NOVALUE;
    // SubProg scientific_to_float pc: 258 op: PLUS (11)
    if (IS_ATOM_INT(_4457)) {
        _exp_8152 = _exp_8152 + _4457;
    }
    else {
        _exp_8152 = binary_op(PLUS, _exp_8152, _4457);
    }
    DeRef(_4457);
    _4457 = NOVALUE;
    // SubProg scientific_to_float pc: 262 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_8152)) {
        _1 = (object)(DBL_PTR(_exp_8152)->dbl);
        DeRefDS(_exp_8152);
        _exp_8152 = _1;
    }
    // SubProg scientific_to_float pc: 264 op: NOP1 (159)
LC: // addr: 265 pc: 264 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 265 op: NOP1 (159)
LA: // addr: 266 pc: 265 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 266 op: STARTLINE (58)

    /** scinot.e:363		if dp then*/
    // SubProg scientific_to_float pc: 268 op: IF (20)
    if (_dp_8150 == 0)
    {
        goto LD; // [268] 297
    }
    else{
    }
    // SubProg scientific_to_float pc: 271 op: STARTLINE (58)

    /** scinot.e:365			s = remove( s, dp )*/
    // SubProg scientific_to_float pc: 273 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_s_8148);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_dp_8150)) ? _dp_8150 : (object)(DBL_PTR(_dp_8150)->dbl);
        int stop = (IS_ATOM_INT(_dp_8150)) ? _dp_8150 : (object)(DBL_PTR(_dp_8150)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_s_8148), start, &_s_8148 );
            }
            else Tail(SEQ_PTR(_s_8148), stop+1, &_s_8148);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_s_8148), start, &_s_8148);
        }
        else {
            assign_slice_seq = &assign_space;
            _s_8148 = Remove_elements(start, stop, (SEQ_PTR(_s_8148)->ref == 1));
        }
    }
    // SubProg scientific_to_float pc: 278 op: STARTLINE (58)

    /** scinot.e:366			e -= 1*/
    // SubProg scientific_to_float pc: 280 op: MINUS_I (116)
    _e_8151 = _e_8151 - 1;
    // SubProg scientific_to_float pc: 284 op: STARTLINE (58)

    /** scinot.e:369			exp -= e - dp*/
    // SubProg scientific_to_float pc: 286 op: MINUS (10)
    _4461 = _e_8151 - _dp_8150;
    if ((object)((uintptr_t)_4461 +(uintptr_t) HIGH_BITS) >= 0){
        _4461 = NewDouble((eudouble)_4461);
    }
    // SubProg scientific_to_float pc: 290 op: MINUS (10)
    if (IS_ATOM_INT(_4461)) {
        _exp_8152 = _exp_8152 - _4461;
    }
    else {
        _exp_8152 = NewDouble((eudouble)_exp_8152 - DBL_PTR(_4461)->dbl);
    }
    DeRef(_4461);
    _4461 = NOVALUE;
    // SubProg scientific_to_float pc: 294 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_exp_8152)) {
        _1 = (object)(DBL_PTR(_exp_8152)->dbl);
        DeRefDS(_exp_8152);
        _exp_8152 = _1;
    }
    // SubProg scientific_to_float pc: 296 op: NOP1 (159)
LD: // addr: 297 pc: 296 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 297 op: STARTLINE (58)

    /** scinot.e:374		s = s[1..e-1] - '0'*/
    // SubProg scientific_to_float pc: 299 op: MINUS (10)
    _4463 = _e_8151 - 1;
    // SubProg scientific_to_float pc: 303 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4464;
    RHS_Slice(_s_8148, 1, _4463);
    // SubProg scientific_to_float pc: 308 op: MINUS (10)
    DeRefDS(_s_8148);
    _s_8148 = binary_op(MINUS, _4464, 48);
    DeRefDS(_4464);
    _4464 = NOVALUE;
    // SubProg scientific_to_float pc: 312 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 314 op: STARTLINE (58)

    /** scinot.e:377		if not find(0, s = 0) then*/
    // SubProg scientific_to_float pc: 316 op: EQUALS (3)
    _4466 = binary_op(EQUALS, _s_8148, 0);
    // SubProg scientific_to_float pc: 320 op: FIND_FROM (176)
    _4467 = find_from(0, _4466, 1);
    DeRefDS(_4466);
    _4466 = NOVALUE;
    // SubProg scientific_to_float pc: 325 op: NOT_IFW (108)
    if (_4467 != 0)
    goto LE; // [325] 366
    _4467 = NOVALUE;
    // SubProg scientific_to_float pc: 328 op: STARTLINE (58)

    /** scinot.e:378			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 330 op: EQUALS_IFW (104)
    if (_fp_8149 != 2)
    goto LF; // [330] 347
    // SubProg scientific_to_float pc: 334 op: STARTLINE (58)

    /** scinot.e:379				return atom_to_float64(0)*/
    // SubProg scientific_to_float pc: 336 op: PROC (27)
    _4470 = _21atom_to_float64(0);
    // SubProg scientific_to_float pc: 340 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_8148
    DeRefDS(_s_8148);

// block var fp_8149

// block var dp_8150

// block var e_8151

// block var exp_8152

// block var int_bits_8153
    DeRef(_int_bits_8153);

// block var frac_bits_8154
    DeRef(_frac_bits_8154);

// block var mbits_8155
    DeRef(_mbits_8155);

// block var ebits_8156
    DeRef(_ebits_8156);

// block var sbits_8157
    DeRefi(_sbits_8157);

// block var significand_8158

// block var exponent_8159

// block var min_exp_8160

// block var exp_bias_8161
    _4463 = NOVALUE;
    DeRef(_4441);
    _4441 = NOVALUE;
    DeRef(_4454);
    _4454 = NOVALUE;
    DeRef(_4446);
    _4446 = NOVALUE;
    DeRef(_4438);
    _4438 = NOVALUE;
    DeRef(_4449);
    _4449 = NOVALUE;
    return _4470;
    // SubProg scientific_to_float pc: 344 op: ELSE (23)
    goto L10; // [344] 365
    // SubProg scientific_to_float pc: 346 op: NOP1 (159)
LF: // addr: 347 pc: 346 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 347 op: STARTLINE (58)

    /** scinot.e:380			elsif fp = EXTENDED then*/
    // SubProg scientific_to_float pc: 349 op: EQUALS_IFW (104)
    if (_fp_8149 != 3)
    goto L11; // [349] 364
    // SubProg scientific_to_float pc: 353 op: STARTLINE (58)

    /** scinot.e:381				return atom_to_float80(0)*/
    // SubProg scientific_to_float pc: 355 op: PROC (27)
    _4472 = _21atom_to_float80(0);
    // SubProg scientific_to_float pc: 359 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_8148
    DeRefDS(_s_8148);

// block var fp_8149

// block var dp_8150

// block var e_8151

// block var exp_8152

// block var int_bits_8153
    DeRef(_int_bits_8153);

// block var frac_bits_8154
    DeRef(_frac_bits_8154);

// block var mbits_8155
    DeRef(_mbits_8155);

// block var ebits_8156
    DeRef(_ebits_8156);

// block var sbits_8157
    DeRefi(_sbits_8157);

// block var significand_8158

// block var exponent_8159

// block var min_exp_8160

// block var exp_bias_8161
    DeRef(_4463);
    _4463 = NOVALUE;
    DeRef(_4441);
    _4441 = NOVALUE;
    DeRef(_4470);
    _4470 = NOVALUE;
    DeRef(_4454);
    _4454 = NOVALUE;
    DeRef(_4446);
    _4446 = NOVALUE;
    DeRef(_4438);
    _4438 = NOVALUE;
    DeRef(_4449);
    _4449 = NOVALUE;
    return _4472;
    // SubProg scientific_to_float pc: 363 op: NOP1 (159)
L11: // addr: 364 pc: 363 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 364 op: NOP1 (159)
L10: // addr: 365 pc: 364 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 365 op: NOP1 (159)
LE: // addr: 366 pc: 365 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 366 op: STARTLINE (58)

    /** scinot.e:385		if exp >= 0 then*/
    // SubProg scientific_to_float pc: 368 op: GREATEREQ_IFW_I (120)
    if (_exp_8152 < 0)
    goto L12; // [368] 412
    // SubProg scientific_to_float pc: 372 op: STARTLINE (58)

    /** scinot.e:388			int_bits = trim_bits( bytes_to_bits( convert_radix( repeat( 0, exp ) & reverse( s ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 374 op: REPEAT (32)
    _4474 = Repeat(0, _exp_8152);
    // SubProg scientific_to_float pc: 378 op: PROC (27)
    RefDS(_s_8148);
    _4475 = _27reverse(_s_8148);
    // SubProg scientific_to_float pc: 382 op: CONCAT (15)
    if (IS_SEQUENCE(_4474) && IS_ATOM(_4475)) {
        Ref(_4475);
        Append(&_4476, _4474, _4475);
    }
    else if (IS_ATOM(_4474) && IS_SEQUENCE(_4475)) {
    }
    else {
        Concat((object_ptr)&_4476, _4474, _4475);
        DeRefDS(_4474);
        _4474 = NOVALUE;
    }
    DeRef(_4474);
    _4474 = NOVALUE;
    DeRef(_4475);
    _4475 = NOVALUE;
    // SubProg scientific_to_float pc: 386 op: PROC (27)
    _4477 = _27convert_radix(_4476, 10, 256);
    _4476 = NOVALUE;
    // SubProg scientific_to_float pc: 392 op: PROC (27)
    _4478 = _27bytes_to_bits(_4477);
    _4477 = NOVALUE;
    // SubProg scientific_to_float pc: 396 op: PROC (27)
    _0 = _int_bits_8153;
    _int_bits_8153 = _27trim_bits(_4478);
    DeRef(_0);
    _4478 = NOVALUE;
    // SubProg scientific_to_float pc: 400 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 402 op: STARTLINE (58)

    /** scinot.e:389			frac_bits = {}*/
    // SubProg scientific_to_float pc: 404 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_frac_bits_8154);
    _frac_bits_8154 = _5;
    // SubProg scientific_to_float pc: 407 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 409 op: ELSE (23)
    goto L13; // [409] 529
    // SubProg scientific_to_float pc: 411 op: NOP1 (159)
L12: // addr: 412 pc: 411 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 412 op: STARTLINE (58)

    /** scinot.e:391			if -exp > length(s) then*/
    // SubProg scientific_to_float pc: 414 op: UMINUS (12)
    if ((uintptr_t)_exp_8152 == (uintptr_t)HIGH_BITS){
        _4480 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _4480 = - _exp_8152;
    }
    // SubProg scientific_to_float pc: 417 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4481 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4481 = 1;
    }
    // SubProg scientific_to_float pc: 420 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _4480, _4481)){
        DeRef(_4480);
        _4480 = NOVALUE;
        _4481 = NOVALUE;
        goto L14; // [420] 463
    }
    DeRef(_4480);
    _4480 = NOVALUE;
    _4481 = NOVALUE;
    // SubProg scientific_to_float pc: 424 op: STARTLINE (58)

    /** scinot.e:393				int_bits = {}*/
    // SubProg scientific_to_float pc: 426 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_int_bits_8153);
    _int_bits_8153 = _5;
    // SubProg scientific_to_float pc: 429 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 431 op: STARTLINE (58)

    /** scinot.e:394				frac_bits = decimals_to_bits( repeat( 0, -exp-length(s) ) & s, significand ) */
    // SubProg scientific_to_float pc: 433 op: UMINUS (12)
    if ((uintptr_t)_exp_8152 == (uintptr_t)HIGH_BITS){
        _4483 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _4483 = - _exp_8152;
    }
    // SubProg scientific_to_float pc: 436 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4484 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4484 = 1;
    }
    // SubProg scientific_to_float pc: 439 op: MINUS (10)
    if (IS_ATOM_INT(_4483)) {
        _4485 = _4483 - _4484;
    }
    else {
        _4485 = NewDouble(DBL_PTR(_4483)->dbl - (eudouble)_4484);
    }
    DeRef(_4483);
    _4483 = NOVALUE;
    _4484 = NOVALUE;
    // SubProg scientific_to_float pc: 443 op: REPEAT (32)
    _4486 = Repeat(0, _4485);
    DeRef(_4485);
    _4485 = NOVALUE;
    // SubProg scientific_to_float pc: 447 op: CONCAT (15)
    Concat((object_ptr)&_4487, _4486, _s_8148);
    DeRefDS(_4486);
    _4486 = NOVALUE;
    DeRef(_4486);
    _4486 = NOVALUE;
    // SubProg scientific_to_float pc: 451 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 453 op: PROC (27)
    _0 = _frac_bits_8154;
    _frac_bits_8154 = _27decimals_to_bits(_4487, _significand_8158);
    DeRef(_0);
    _4487 = NOVALUE;
    // SubProg scientific_to_float pc: 458 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 460 op: ELSE (23)
    goto L15; // [460] 528
    // SubProg scientific_to_float pc: 462 op: NOP1 (159)
L14: // addr: 463 pc: 462 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 463 op: STARTLINE (58)

    /** scinot.e:398				int_bits = trim_bits( bytes_to_bits( convert_radix( reverse( s[1..$+exp] ), 10, #100 ) ) )*/
    // SubProg scientific_to_float pc: 465 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4489 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4489 = 1;
    }
    // SubProg scientific_to_float pc: 468 op: PLUS (11)
    _4490 = _4489 + _exp_8152;
    _4489 = NOVALUE;
    // SubProg scientific_to_float pc: 472 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4491;
    RHS_Slice(_s_8148, 1, _4490);
    // SubProg scientific_to_float pc: 477 op: PROC (27)
    _4492 = _27reverse(_4491);
    _4491 = NOVALUE;
    // SubProg scientific_to_float pc: 481 op: PROC (27)
    _4493 = _27convert_radix(_4492, 10, 256);
    _4492 = NOVALUE;
    // SubProg scientific_to_float pc: 487 op: PROC (27)
    _4494 = _27bytes_to_bits(_4493);
    _4493 = NOVALUE;
    // SubProg scientific_to_float pc: 491 op: PROC (27)
    _0 = _int_bits_8153;
    _int_bits_8153 = _27trim_bits(_4494);
    DeRef(_0);
    _4494 = NOVALUE;
    // SubProg scientific_to_float pc: 495 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 497 op: STARTLINE (58)

    /** scinot.e:399				frac_bits =  decimals_to_bits( s[$+exp+1..$], significand )*/
    // SubProg scientific_to_float pc: 499 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4496 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4496 = 1;
    }
    // SubProg scientific_to_float pc: 502 op: PLUS (11)
    _4497 = _4496 + _exp_8152;
    if ((object)((uintptr_t)_4497 + (uintptr_t)HIGH_BITS) >= 0){
        _4497 = NewDouble((eudouble)_4497);
    }
    _4496 = NOVALUE;
    // SubProg scientific_to_float pc: 506 op: PLUS1 (93)
    if (IS_ATOM_INT(_4497)) {
        _4498 = _4497 + 1;
        if (_4498 > MAXINT){
            _4498 = NewDouble((eudouble)_4498);
        }
    }
    else
    _4498 = binary_op(PLUS, 1, _4497);
    DeRef(_4497);
    _4497 = NOVALUE;
    // SubProg scientific_to_float pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_s_8148)){
            _4499 = SEQ_PTR(_s_8148)->length;
    }
    else {
        _4499 = 1;
    }
    // SubProg scientific_to_float pc: 513 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_4500;
    RHS_Slice(_s_8148, _4498, _4499);
    // SubProg scientific_to_float pc: 518 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 520 op: PROC (27)
    _0 = _frac_bits_8154;
    _frac_bits_8154 = _27decimals_to_bits(_4500, _significand_8158);
    DeRef(_0);
    _4500 = NOVALUE;
    // SubProg scientific_to_float pc: 525 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 527 op: NOP1 (159)
L15: // addr: 528 pc: 527 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 528 op: NOP1 (159)
L13: // addr: 529 pc: 528 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 529 op: STARTLINE (58)

    /** scinot.e:403		if length(int_bits) > significand then*/
    // SubProg scientific_to_float pc: 531 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 533 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4502 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4502 = 1;
    }
    // SubProg scientific_to_float pc: 536 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 538 op: GREATER_IFW_I (124)
    if (_4502 <= _significand_8158)
    goto L16; // [538] 668
    // SubProg scientific_to_float pc: 542 op: STARTLINE (58)

    /** scinot.e:406			if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 544 op: EQUALS_IFW (104)
    if (_fp_8149 != 2)
    goto L17; // [544] 572
    // SubProg scientific_to_float pc: 548 op: STARTLINE (58)

    /** scinot.e:408				mbits = int_bits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 550 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4505 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4505 = 1;
    }
    // SubProg scientific_to_float pc: 553 op: MINUS (10)
    _4506 = _4505 - _significand_8158;
    if ((object)((uintptr_t)_4506 +(uintptr_t) HIGH_BITS) >= 0){
        _4506 = NewDouble((eudouble)_4506);
    }
    _4505 = NOVALUE;
    // SubProg scientific_to_float pc: 557 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4507 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4507 = 1;
    }
    // SubProg scientific_to_float pc: 560 op: MINUS (10)
    _4508 = _4507 - 1;
    _4507 = NOVALUE;
    // SubProg scientific_to_float pc: 564 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_8155;
    RHS_Slice(_int_bits_8153, _4506, _4508);
    // SubProg scientific_to_float pc: 569 op: ELSE (23)
    goto L18; // [569] 594
    // SubProg scientific_to_float pc: 571 op: NOP1 (159)
L17: // addr: 572 pc: 571 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 572 op: STARTLINE (58)

    /** scinot.e:411				mbits = int_bits[$-significand+1..$]*/
    // SubProg scientific_to_float pc: 574 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4510 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4510 = 1;
    }
    // SubProg scientific_to_float pc: 577 op: MINUS (10)
    _4511 = _4510 - _significand_8158;
    if ((object)((uintptr_t)_4511 +(uintptr_t) HIGH_BITS) >= 0){
        _4511 = NewDouble((eudouble)_4511);
    }
    _4510 = NOVALUE;
    // SubProg scientific_to_float pc: 581 op: PLUS1 (93)
    if (IS_ATOM_INT(_4511)) {
        _4512 = _4511 + 1;
        if (_4512 > MAXINT){
            _4512 = NewDouble((eudouble)_4512);
        }
    }
    else
    _4512 = binary_op(PLUS, 1, _4511);
    DeRef(_4511);
    _4511 = NOVALUE;
    // SubProg scientific_to_float pc: 585 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4513 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4513 = 1;
    }
    // SubProg scientific_to_float pc: 588 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_8155;
    RHS_Slice(_int_bits_8153, _4512, _4513);
    // SubProg scientific_to_float pc: 593 op: NOP1 (159)
L18: // addr: 594 pc: 593 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 594 op: STARTLINE (58)

    /** scinot.e:414			if length(int_bits) > significand + 1 and int_bits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 596 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4515 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4515 = 1;
    }
    // SubProg scientific_to_float pc: 599 op: PLUS1 (93)
    _4516 = _significand_8158 + 1;
    if (_4516 > MAXINT){
        _4516 = NewDouble((eudouble)_4516);
    }
    // SubProg scientific_to_float pc: 603 op: GREATER (6)
    if (IS_ATOM_INT(_4516)) {
        _4517 = (_4515 > _4516);
    }
    else {
        _4517 = ((eudouble)_4515 > DBL_PTR(_4516)->dbl);
    }
    _4515 = NOVALUE;
    DeRef(_4516);
    _4516 = NOVALUE;
    // SubProg scientific_to_float pc: 607 op: SC1_AND_IF (146)
    if (_4517 == 0) {
        goto L19; // [607] 656
    }
    // SubProg scientific_to_float pc: 611 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4519 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4519 = 1;
    }
    // SubProg scientific_to_float pc: 614 op: PLUS1 (93)
    _4520 = _significand_8158 + 1;
    if (_4520 > MAXINT){
        _4520 = NewDouble((eudouble)_4520);
    }
    // SubProg scientific_to_float pc: 618 op: MINUS (10)
    if (IS_ATOM_INT(_4520)) {
        _4521 = _4519 - _4520;
    }
    else {
        _4521 = NewDouble((eudouble)_4519 - DBL_PTR(_4520)->dbl);
    }
    _4519 = NOVALUE;
    DeRef(_4520);
    _4520 = NOVALUE;
    // SubProg scientific_to_float pc: 622 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_int_bits_8153);
    if (!IS_ATOM_INT(_4521)){
        _4522 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4521)->dbl));
    }
    else{
        _4522 = (object)*(((s1_ptr)_2)->base + _4521);
    }
    // SubProg scientific_to_float pc: 626 op: NOP1 (159)
    // SubProg scientific_to_float pc: 627 op: IF (20)
    if (_4522 == 0) {
        _4522 = NOVALUE;
        goto L19; // [627] 656
    }
    else {
        if (!IS_ATOM_INT(_4522) && DBL_PTR(_4522)->dbl == 0.0){
            _4522 = NOVALUE;
            goto L19; // [627] 656
        }
        _4522 = NOVALUE;
    }
    _4522 = NOVALUE;
    // SubProg scientific_to_float pc: 630 op: STARTLINE (58)

    /** scinot.e:416				mbits[1] += 1*/
    // SubProg scientific_to_float pc: 632 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 634 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_8155);
    _4523 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg scientific_to_float pc: 638 op: PLUS1 (93)
    if (IS_ATOM_INT(_4523)) {
        _4524 = _4523 + 1;
        if (_4524 > MAXINT){
            _4524 = NewDouble((eudouble)_4524);
        }
    }
    else
    _4524 = binary_op(PLUS, 1, _4523);
    _4523 = NOVALUE;
    // SubProg scientific_to_float pc: 642 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_8155);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_8155 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4524;
    if( _1 != _4524 ){
        DeRef(_1);
    }
    _4524 = NOVALUE;
    // SubProg scientific_to_float pc: 646 op: STARTLINE (58)

    /** scinot.e:417				mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 648 op: PROC (27)
    RefDS(_mbits_8155);
    _0 = _mbits_8155;
    _mbits_8155 = _27carry(_mbits_8155, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 653 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 655 op: NOP1 (159)
L19: // addr: 656 pc: 655 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 656 op: STARTLINE (58)

    /** scinot.e:419			exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 658 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4526 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4526 = 1;
    }
    // SubProg scientific_to_float pc: 661 op: MINUS_I (116)
    _exp_8152 = _4526 - 1;
    _4526 = NOVALUE;
    // SubProg scientific_to_float pc: 665 op: ELSE (23)
    goto L1A; // [665] 940
    // SubProg scientific_to_float pc: 667 op: NOP1 (159)
L16: // addr: 668 pc: 667 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 668 op: STARTLINE (58)

    /** scinot.e:422			if length(int_bits) then*/
    // SubProg scientific_to_float pc: 670 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4528 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4528 = 1;
    }
    // SubProg scientific_to_float pc: 673 op: IF (20)
    if (_4528 == 0)
    {
        _4528 = NOVALUE;
        goto L1B; // [673] 688
    }
    else{
        _4528 = NOVALUE;
    }
    // SubProg scientific_to_float pc: 676 op: STARTLINE (58)

    /** scinot.e:424				exp = length(int_bits)-1*/
    // SubProg scientific_to_float pc: 678 op: LENGTH (42)
    if (IS_SEQUENCE(_int_bits_8153)){
            _4529 = SEQ_PTR(_int_bits_8153)->length;
    }
    else {
        _4529 = 1;
    }
    // SubProg scientific_to_float pc: 681 op: MINUS_I (116)
    _exp_8152 = _4529 - 1;
    _4529 = NOVALUE;
    // SubProg scientific_to_float pc: 685 op: ELSE (23)
    goto L1C; // [685] 748
    // SubProg scientific_to_float pc: 687 op: NOP1 (159)
L1B: // addr: 688 pc: 687 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 688 op: STARTLINE (58)

    /** scinot.e:428				exp = - find( 1, reverse( frac_bits ) )*/
    // SubProg scientific_to_float pc: 690 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 692 op: PROC (27)
    RefDS(_frac_bits_8154);
    _4531 = _27reverse(_frac_bits_8154);
    // SubProg scientific_to_float pc: 696 op: FIND_FROM (176)
    _4532 = find_from(1, _4531, 1);
    DeRef(_4531);
    _4531 = NOVALUE;
    // SubProg scientific_to_float pc: 701 op: UMINUS (12)
    _exp_8152 = - _4532;
    // SubProg scientific_to_float pc: 706 op: STARTLINE (58)

    /** scinot.e:429				if exp < min_exp then*/
    // SubProg scientific_to_float pc: 708 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 710 op: LESS_IFW_I (119)
    if (_exp_8152 >= _min_exp_8160)
    goto L1D; // [710] 720
    // SubProg scientific_to_float pc: 714 op: STARTLINE (58)

    /** scinot.e:432					exp = min_exp*/
    // SubProg scientific_to_float pc: 716 op: ASSIGN_I (113)
    _exp_8152 = _min_exp_8160;
    // SubProg scientific_to_float pc: 719 op: NOP1 (159)
L1D: // addr: 720 pc: 719 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 720 op: STARTLINE (58)

    /** scinot.e:435				if exp then*/
    // SubProg scientific_to_float pc: 722 op: IF (20)
    if (_exp_8152 == 0)
    {
        goto L1E; // [722] 747
    }
    else{
    }
    // SubProg scientific_to_float pc: 725 op: STARTLINE (58)

    /** scinot.e:437					frac_bits = remove( frac_bits, length(frac_bits) + exp + 2, length( frac_bits ) )*/
    // SubProg scientific_to_float pc: 727 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_8154)){
            _4535 = SEQ_PTR(_frac_bits_8154)->length;
    }
    else {
        _4535 = 1;
    }
    // SubProg scientific_to_float pc: 730 op: PLUS (11)
    _4536 = _4535 + _exp_8152;
    if ((object)((uintptr_t)_4536 + (uintptr_t)HIGH_BITS) >= 0){
        _4536 = NewDouble((eudouble)_4536);
    }
    _4535 = NOVALUE;
    // SubProg scientific_to_float pc: 734 op: PLUS (11)
    if (IS_ATOM_INT(_4536)) {
        _4537 = _4536 + 2;
        if ((object)((uintptr_t)_4537 + (uintptr_t)HIGH_BITS) >= 0){
            _4537 = NewDouble((eudouble)_4537);
        }
    }
    else {
        _4537 = NewDouble(DBL_PTR(_4536)->dbl + (eudouble)2);
    }
    DeRef(_4536);
    _4536 = NOVALUE;
    // SubProg scientific_to_float pc: 738 op: LENGTH (42)
    if (IS_SEQUENCE(_frac_bits_8154)){
            _4538 = SEQ_PTR(_frac_bits_8154)->length;
    }
    else {
        _4538 = 1;
    }
    // SubProg scientific_to_float pc: 741 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_frac_bits_8154);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_4537)) ? _4537 : (object)(DBL_PTR(_4537)->dbl);
        int stop = (IS_ATOM_INT(_4538)) ? _4538 : (object)(DBL_PTR(_4538)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_frac_bits_8154), start, &_frac_bits_8154 );
            }
            else Tail(SEQ_PTR(_frac_bits_8154), stop+1, &_frac_bits_8154);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_frac_bits_8154), start, &_frac_bits_8154);
        }
        else {
            assign_slice_seq = &assign_space;
            _frac_bits_8154 = Remove_elements(start, stop, (SEQ_PTR(_frac_bits_8154)->ref == 1));
        }
    }
    DeRef(_4537);
    _4537 = NOVALUE;
    _4538 = NOVALUE;
    // SubProg scientific_to_float pc: 746 op: NOP1 (159)
L1E: // addr: 747 pc: 746 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 747 op: NOP1 (159)
L1C: // addr: 748 pc: 747 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 748 op: STARTLINE (58)

    /** scinot.e:444			mbits = frac_bits & int_bits*/
    // SubProg scientific_to_float pc: 750 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 752 op: CONCAT (15)
    Concat((object_ptr)&_mbits_8155, _frac_bits_8154, _int_bits_8153);
    // SubProg scientific_to_float pc: 756 op: STARTLINE (58)

    /** scinot.e:445			mbits = repeat( 0, significand + 1 ) & mbits*/
    // SubProg scientific_to_float pc: 758 op: PLUS1 (93)
    _4541 = _significand_8158 + 1;
    // SubProg scientific_to_float pc: 762 op: REPEAT (32)
    _4542 = Repeat(0, _4541);
    _4541 = NOVALUE;
    // SubProg scientific_to_float pc: 766 op: CONCAT (15)
    Concat((object_ptr)&_mbits_8155, _4542, _mbits_8155);
    DeRefDS(_4542);
    _4542 = NOVALUE;
    DeRef(_4542);
    _4542 = NOVALUE;
    // SubProg scientific_to_float pc: 770 op: STARTLINE (58)

    /** scinot.e:447			if exp > min_exp then*/
    // SubProg scientific_to_float pc: 772 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 774 op: GREATER_IFW_I (124)
    if (_exp_8152 <= _min_exp_8160)
    goto L1F; // [774] 877
    // SubProg scientific_to_float pc: 778 op: STARTLINE (58)

    /** scinot.e:449				if mbits[$-(significand+1)] then*/
    // SubProg scientific_to_float pc: 780 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4545 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4545 = 1;
    }
    // SubProg scientific_to_float pc: 783 op: PLUS1 (93)
    _4546 = _significand_8158 + 1;
    if (_4546 > MAXINT){
        _4546 = NewDouble((eudouble)_4546);
    }
    // SubProg scientific_to_float pc: 787 op: MINUS (10)
    if (IS_ATOM_INT(_4546)) {
        _4547 = _4545 - _4546;
    }
    else {
        _4547 = NewDouble((eudouble)_4545 - DBL_PTR(_4546)->dbl);
    }
    _4545 = NOVALUE;
    DeRef(_4546);
    _4546 = NOVALUE;
    // SubProg scientific_to_float pc: 791 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_8155);
    if (!IS_ATOM_INT(_4547)){
        _4548 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_4547)->dbl));
    }
    else{
        _4548 = (object)*(((s1_ptr)_2)->base + _4547);
    }
    // SubProg scientific_to_float pc: 795 op: IF (20)
    if (_4548 == 0) {
        _4548 = NOVALUE;
        goto L20; // [795] 829
    }
    else {
        if (!IS_ATOM_INT(_4548) && DBL_PTR(_4548)->dbl == 0.0){
            _4548 = NOVALUE;
            goto L20; // [795] 829
        }
        _4548 = NOVALUE;
    }
    _4548 = NOVALUE;
    // SubProg scientific_to_float pc: 798 op: STARTLINE (58)

    /** scinot.e:451					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4549 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4549 = 1;
    }
    // SubProg scientific_to_float pc: 803 op: MINUS (10)
    _4550 = _4549 - _significand_8158;
    _4549 = NOVALUE;
    // SubProg scientific_to_float pc: 807 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_8155);
    _4551 = (object)*(((s1_ptr)_2)->base + _4550);
    // SubProg scientific_to_float pc: 811 op: PLUS1 (93)
    if (IS_ATOM_INT(_4551)) {
        _4552 = _4551 + 1;
        if (_4552 > MAXINT){
            _4552 = NewDouble((eudouble)_4552);
        }
    }
    else
    _4552 = binary_op(PLUS, 1, _4551);
    _4551 = NOVALUE;
    // SubProg scientific_to_float pc: 815 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_8155);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_8155 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _4550);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4552;
    if( _1 != _4552 ){
        DeRef(_1);
    }
    _4552 = NOVALUE;
    // SubProg scientific_to_float pc: 819 op: STARTLINE (58)

    /** scinot.e:452					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 821 op: PROC (27)
    RefDS(_mbits_8155);
    _0 = _mbits_8155;
    _mbits_8155 = _27carry(_mbits_8155, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 826 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 828 op: NOP1 (159)
L20: // addr: 829 pc: 828 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 829 op: STARTLINE (58)

    /** scinot.e:454				if fp = DOUBLE then*/
    // SubProg scientific_to_float pc: 831 op: EQUALS_IFW (104)
    if (_fp_8149 != 2)
    goto L21; // [831] 859
    // SubProg scientific_to_float pc: 835 op: STARTLINE (58)

    /** scinot.e:456					mbits = mbits[$-significand..$-1]*/
    // SubProg scientific_to_float pc: 837 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4555 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4555 = 1;
    }
    // SubProg scientific_to_float pc: 840 op: MINUS (10)
    _4556 = _4555 - _significand_8158;
    if ((object)((uintptr_t)_4556 +(uintptr_t) HIGH_BITS) >= 0){
        _4556 = NewDouble((eudouble)_4556);
    }
    _4555 = NOVALUE;
    // SubProg scientific_to_float pc: 844 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4557 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4557 = 1;
    }
    // SubProg scientific_to_float pc: 847 op: MINUS (10)
    _4558 = _4557 - 1;
    _4557 = NOVALUE;
    // SubProg scientific_to_float pc: 851 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mbits_8155;
    RHS_Slice(_mbits_8155, _4556, _4558);
    // SubProg scientific_to_float pc: 856 op: ELSE (23)
    goto L22; // [856] 939
    // SubProg scientific_to_float pc: 858 op: NOP1 (159)
L21: // addr: 859 pc: 858 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 859 op: STARTLINE (58)

    /** scinot.e:459					mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 861 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4560 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4560 = 1;
    }
    // SubProg scientific_to_float pc: 864 op: MINUS (10)
    _4561 = _4560 - _significand_8158;
    if ((object)((uintptr_t)_4561 +(uintptr_t) HIGH_BITS) >= 0){
        _4561 = NewDouble((eudouble)_4561);
    }
    _4560 = NOVALUE;
    // SubProg scientific_to_float pc: 868 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_8155);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_4561)) ? _4561 : (object)(DBL_PTR(_4561)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_8155), start, &_mbits_8155 );
            }
            else Tail(SEQ_PTR(_mbits_8155), stop+1, &_mbits_8155);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_8155), start, &_mbits_8155);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_8155 = Remove_elements(start, stop, (SEQ_PTR(_mbits_8155)->ref == 1));
        }
    }
    DeRef(_4561);
    _4561 = NOVALUE;
    // SubProg scientific_to_float pc: 873 op: NOP1 (159)
    // SubProg scientific_to_float pc: 874 op: ELSE (23)
    goto L22; // [874] 939
    // SubProg scientific_to_float pc: 876 op: NOP1 (159)
L1F: // addr: 877 pc: 876 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 877 op: STARTLINE (58)

    /** scinot.e:463				if mbits[$-significand] then*/
    // SubProg scientific_to_float pc: 879 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4563 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4563 = 1;
    }
    // SubProg scientific_to_float pc: 882 op: MINUS (10)
    _4564 = _4563 - _significand_8158;
    _4563 = NOVALUE;
    // SubProg scientific_to_float pc: 886 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_mbits_8155);
    _4565 = (object)*(((s1_ptr)_2)->base + _4564);
    // SubProg scientific_to_float pc: 890 op: IF (20)
    if (_4565 == 0) {
        _4565 = NOVALUE;
        goto L23; // [890] 924
    }
    else {
        if (!IS_ATOM_INT(_4565) && DBL_PTR(_4565)->dbl == 0.0){
            _4565 = NOVALUE;
            goto L23; // [890] 924
        }
        _4565 = NOVALUE;
    }
    _4565 = NOVALUE;
    // SubProg scientific_to_float pc: 893 op: STARTLINE (58)

    /** scinot.e:465					mbits[$-significand] += 1*/
    // SubProg scientific_to_float pc: 895 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4566 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4566 = 1;
    }
    // SubProg scientific_to_float pc: 898 op: MINUS (10)
    _4567 = _4566 - _significand_8158;
    _4566 = NOVALUE;
    // SubProg scientific_to_float pc: 902 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_mbits_8155);
    _4568 = (object)*(((s1_ptr)_2)->base + _4567);
    // SubProg scientific_to_float pc: 906 op: PLUS1 (93)
    if (IS_ATOM_INT(_4568)) {
        _4569 = _4568 + 1;
        if (_4569 > MAXINT){
            _4569 = NewDouble((eudouble)_4569);
        }
    }
    else
    _4569 = binary_op(PLUS, 1, _4568);
    _4568 = NOVALUE;
    // SubProg scientific_to_float pc: 910 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_mbits_8155);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _mbits_8155 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _4567);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _4569;
    if( _1 != _4569 ){
        DeRef(_1);
    }
    _4569 = NOVALUE;
    // SubProg scientific_to_float pc: 914 op: STARTLINE (58)

    /** scinot.e:466					mbits = carry( mbits, 2 )*/
    // SubProg scientific_to_float pc: 916 op: PROC (27)
    RefDS(_mbits_8155);
    _0 = _mbits_8155;
    _mbits_8155 = _27carry(_mbits_8155, 2);
    DeRefDS(_0);
    // SubProg scientific_to_float pc: 921 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 923 op: NOP1 (159)
L23: // addr: 924 pc: 923 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 924 op: STARTLINE (58)

    /** scinot.e:468				mbits = remove( mbits, 1, length(mbits) - significand )*/
    // SubProg scientific_to_float pc: 926 op: LENGTH (42)
    if (IS_SEQUENCE(_mbits_8155)){
            _4571 = SEQ_PTR(_mbits_8155)->length;
    }
    else {
        _4571 = 1;
    }
    // SubProg scientific_to_float pc: 929 op: MINUS (10)
    _4572 = _4571 - _significand_8158;
    if ((object)((uintptr_t)_4572 +(uintptr_t) HIGH_BITS) >= 0){
        _4572 = NewDouble((eudouble)_4572);
    }
    _4571 = NOVALUE;
    // SubProg scientific_to_float pc: 933 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_mbits_8155);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(1)) ? 1 : (object)(DBL_PTR(1)->dbl);
        int stop = (IS_ATOM_INT(_4572)) ? _4572 : (object)(DBL_PTR(_4572)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_mbits_8155), start, &_mbits_8155 );
            }
            else Tail(SEQ_PTR(_mbits_8155), stop+1, &_mbits_8155);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_mbits_8155), start, &_mbits_8155);
        }
        else {
            assign_slice_seq = &assign_space;
            _mbits_8155 = Remove_elements(start, stop, (SEQ_PTR(_mbits_8155)->ref == 1));
        }
    }
    DeRef(_4572);
    _4572 = NOVALUE;
    // SubProg scientific_to_float pc: 938 op: NOP1 (159)
L22: // addr: 939 pc: 938 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 939 op: NOP1 (159)
L1A: // addr: 940 pc: 939 sub: 8146 op: 159
    // SubProg scientific_to_float pc: 940 op: STARTLINE (58)

    /** scinot.e:474		ebits = int_to_bits( exp + exp_bias, exponent )*/
    // SubProg scientific_to_float pc: 942 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 944 op: PLUS (11)
    _4574 = _exp_8152 + _exp_bias_8161;
    if ((object)((uintptr_t)_4574 + (uintptr_t)HIGH_BITS) >= 0){
        _4574 = NewDouble((eudouble)_4574);
    }
    // SubProg scientific_to_float pc: 948 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 950 op: PROC (27)
    _0 = _ebits_8156;
    _ebits_8156 = _21int_to_bits(_4574, _exponent_8159);
    DeRef(_0);
    _4574 = NOVALUE;
    // SubProg scientific_to_float pc: 955 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_float pc: 957 op: STARTLINE (58)

    /** scinot.e:477		return bits_to_bytes( mbits & ebits & sbits )*/
    // SubProg scientific_to_float pc: 959 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 961 op: PRIVATE_INIT_CHECK (30)
    // SubProg scientific_to_float pc: 963 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _sbits_8157;
        concat_list[1] = _ebits_8156;
        concat_list[2] = _mbits_8155;
        Concat_N((object_ptr)&_4576, concat_list, 3);
    }
    // SubProg scientific_to_float pc: 969 op: PROC (27)
    _4577 = _27bits_to_bytes(_4576);
    _4576 = NOVALUE;
    // SubProg scientific_to_float pc: 973 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_float

// block var s_8148
    DeRefDS(_s_8148);

// block var fp_8149

// block var dp_8150

// block var e_8151

// block var exp_8152

// block var int_bits_8153
    DeRef(_int_bits_8153);

// block var frac_bits_8154
    DeRef(_frac_bits_8154);

// block var mbits_8155
    DeRefDS(_mbits_8155);

// block var ebits_8156
    DeRefDS(_ebits_8156);

// block var sbits_8157
    DeRefDSi(_sbits_8157);

// block var significand_8158

// block var exponent_8159

// block var min_exp_8160

// block var exp_bias_8161
    DeRef(_4463);
    _4463 = NOVALUE;
    DeRef(_4521);
    _4521 = NOVALUE;
    DeRef(_4556);
    _4556 = NOVALUE;
    DeRef(_4441);
    _4441 = NOVALUE;
    DeRef(_4567);
    _4567 = NOVALUE;
    DeRef(_4564);
    _4564 = NOVALUE;
    DeRef(_4470);
    _4470 = NOVALUE;
    DeRef(_4547);
    _4547 = NOVALUE;
    DeRef(_4472);
    _4472 = NOVALUE;
    DeRef(_4558);
    _4558 = NOVALUE;
    DeRef(_4506);
    _4506 = NOVALUE;
    DeRef(_4550);
    _4550 = NOVALUE;
    DeRef(_4490);
    _4490 = NOVALUE;
    DeRef(_4454);
    _4454 = NOVALUE;
    DeRef(_4512);
    _4512 = NOVALUE;
    DeRef(_4498);
    _4498 = NOVALUE;
    DeRef(_4508);
    _4508 = NOVALUE;
    DeRef(_4446);
    _4446 = NOVALUE;
    DeRef(_4438);
    _4438 = NOVALUE;
    DeRef(_4449);
    _4449 = NOVALUE;
    DeRef(_4517);
    _4517 = NOVALUE;
    return _4577;
    // SubProg scientific_to_float pc: 977 op: BADRETURNF (43)
    ;
}


object _27scientific_to_atom(object _s_8355, object _fp_8356)
{
    object _float_8359 = NOVALUE;
    object _4583 = NOVALUE; // 8368 4583
// skipping _4582  name type: 0
    object _4581 = NOVALUE; // 8364 4581
// skipping _4580  name type: 0
// skipping _4579  name type: 0
// skipping _4578  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg scientific_to_atom pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 3 op: STARTLINE (58)

    /** scinot.e:495		if fp = NATIVE then*/
    // SubProg scientific_to_atom pc: 5 op: EQUALS_IFW (104)
    if (_fp_8356 != 1)
    goto L1; // [5] 17
    // SubProg scientific_to_atom pc: 9 op: STARTLINE (58)

    /** scinot.e:496			fp = NATIVE_FORMAT*/
    // SubProg scientific_to_atom pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg scientific_to_atom pc: 13 op: ASSIGN (18)
    _fp_8356 = 2;
    // SubProg scientific_to_atom pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 8353 op: 159
    // SubProg scientific_to_atom pc: 17 op: STARTLINE (58)

    /** scinot.e:498		sequence float = scientific_to_float( s, fp )*/
    // SubProg scientific_to_atom pc: 19 op: PROC (27)
    RefDS(_s_8355);
    _0 = _float_8359;
    _float_8359 = _27scientific_to_float(_s_8355, _fp_8356);
    DeRef(_0);
    // SubProg scientific_to_atom pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg scientific_to_atom pc: 26 op: STARTLINE (58)

    /** scinot.e:499		if fp = DOUBLE then*/
    // SubProg scientific_to_atom pc: 28 op: EQUALS_IFW (104)
    if (_fp_8356 != 2)
    goto L2; // [28] 45
    // SubProg scientific_to_atom pc: 32 op: STARTLINE (58)

    /** scinot.e:500			return float64_to_atom( float )*/
    // SubProg scientific_to_atom pc: 34 op: PROC (27)
    RefDS(_float_8359);
    _4581 = _21float64_to_atom(_float_8359);
    // SubProg scientific_to_atom pc: 38 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_8355
    DeRefDS(_s_8355);

// block var fp_8356

// block var float_8359
    DeRefDS(_float_8359);
    return _4581;
    // SubProg scientific_to_atom pc: 42 op: ELSE (23)
    goto L3; // [42] 63
    // SubProg scientific_to_atom pc: 44 op: NOP1 (159)
L2: // addr: 45 pc: 44 sub: 8353 op: 159
    // SubProg scientific_to_atom pc: 45 op: STARTLINE (58)

    /** scinot.e:501		elsif fp = EXTENDED then*/
    // SubProg scientific_to_atom pc: 47 op: EQUALS_IFW (104)
    if (_fp_8356 != 3)
    goto L4; // [47] 62
    // SubProg scientific_to_atom pc: 51 op: STARTLINE (58)

    /** scinot.e:502			return float80_to_atom( float )*/
    // SubProg scientific_to_atom pc: 53 op: PROC (27)
    RefDS(_float_8359);
    _4583 = _21float80_to_atom(_float_8359);
    // SubProg scientific_to_atom pc: 57 op: RETURNF (28)

// Exiting block BLOCK: scientific_to_atom

// block var s_8355
    DeRefDS(_s_8355);

// block var fp_8356

// block var float_8359
    DeRefDS(_float_8359);
    DeRef(_4581);
    _4581 = NOVALUE;
    return _4583;
    // SubProg scientific_to_atom pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 8353 op: 159
    // SubProg scientific_to_atom pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 8353 op: 159
    // SubProg scientific_to_atom pc: 63 op: BADRETURNF (43)
    ;
}



// 0x3D4A5407
