// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _58get_eucompiledir()
{
    object _x_42104 = NOVALUE;
// skipping _22306  name type: 0
    object _22305 = NOVALUE; // 42125 22305
// skipping _22304  name type: 0
    object _22303 = NOVALUE; // 42122 22303
// skipping _22301  name type: 0
    object _22300 = NOVALUE; // 42117 22300
    object _22298 = NOVALUE; // 42113 22298
// skipping _22297  name type: 0
    object _22296 = NOVALUE; // 42109 22296
// skipping _22295  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_eucompiledir pc: 1 op: STARTLINE (58)

    /** c_decl.e:133		object x = getenv("EUCOMPILEDIR")*/
    // SubProg get_eucompiledir pc: 3 op: GETENV (91)
    DeRef(_x_42104);
    _x_42104 = EGetEnv(_22294);
    // SubProg get_eucompiledir pc: 6 op: STARTLINE (58)

    /** c_decl.e:134		if is_eudir_from_cmdline() then*/
    // SubProg get_eucompiledir pc: 8 op: PROC (27)
    _22296 = _37is_eudir_from_cmdline();
    // SubProg get_eucompiledir pc: 11 op: IF (20)
    if (_22296 == 0) {
        DeRef(_22296);
        _22296 = NOVALUE;
        goto L1; // [11] 20
    }
    else {
        if (!IS_ATOM_INT(_22296) && DBL_PTR(_22296)->dbl == 0.0){
            DeRef(_22296);
            _22296 = NOVALUE;
            goto L1; // [11] 20
        }
        DeRef(_22296);
        _22296 = NOVALUE;
    }
    DeRef(_22296);
    _22296 = NOVALUE;
    // SubProg get_eucompiledir pc: 14 op: STARTLINE (58)

    /** c_decl.e:135			x = get_eudir()*/
    // SubProg get_eucompiledir pc: 16 op: PROC (27)
    _0 = _x_42104;
    _x_42104 = _37get_eudir();
    DeRefi(_0);
    // SubProg get_eucompiledir pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 42102 op: 159
    // SubProg get_eucompiledir pc: 20 op: STARTLINE (58)

    /** c_decl.e:138		ifdef UNIX then*/
    // SubProg get_eucompiledir pc: 22 op: STARTLINE (58)

    /** c_decl.e:139			if equal(x, -1) then*/
    // SubProg get_eucompiledir pc: 24 op: EQUAL (153)
    if (_x_42104 == -1)
    _22298 = 1;
    else if (IS_ATOM_INT(_x_42104) && IS_ATOM_INT(-1))
    _22298 = 0;
    else
    _22298 = (compare(_x_42104, -1) == 0);
    // SubProg get_eucompiledir pc: 28 op: IF (20)
    if (_22298 == 0)
    {
        _22298 = NOVALUE;
        goto L2; // [28] 67
    }
    else{
        _22298 = NOVALUE;
    }
    // SubProg get_eucompiledir pc: 31 op: STARTLINE (58)

    /** c_decl.e:140				x = "/usr/local/share/euphoria"*/
    // SubProg get_eucompiledir pc: 33 op: ASSIGN (18)
    RefDS(_22299);
    DeRef(_x_42104);
    _x_42104 = _22299;
    // SubProg get_eucompiledir pc: 36 op: STARTLINE (58)

    /** c_decl.e:141				if not file_exists( x ) then*/
    // SubProg get_eucompiledir pc: 38 op: PROC (27)
    RefDS(_x_42104);
    _22300 = _20file_exists(_x_42104);
    // SubProg get_eucompiledir pc: 42 op: NOT_IFW (108)
    if (IS_ATOM_INT(_22300)) {
        if (_22300 != 0){
            DeRef(_22300);
            _22300 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    else {
        if (DBL_PTR(_22300)->dbl != 0.0){
            DeRef(_22300);
            _22300 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    DeRef(_22300);
    _22300 = NOVALUE;
    // SubProg get_eucompiledir pc: 45 op: STARTLINE (58)

    /** c_decl.e:144					x = "/usr/share/euphoria"*/
    // SubProg get_eucompiledir pc: 47 op: ASSIGN (18)
    RefDS(_22302);
    DeRefDSi(_x_42104);
    _x_42104 = _22302;
    // SubProg get_eucompiledir pc: 50 op: STARTLINE (58)

    /** c_decl.e:145					if not file_exists( x ) then*/
    // SubProg get_eucompiledir pc: 52 op: PROC (27)
    RefDS(_x_42104);
    _22303 = _20file_exists(_x_42104);
    // SubProg get_eucompiledir pc: 56 op: NOT_IFW (108)
    if (IS_ATOM_INT(_22303)) {
        if (_22303 != 0){
            DeRef(_22303);
            _22303 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    else {
        if (DBL_PTR(_22303)->dbl != 0.0){
            DeRef(_22303);
            _22303 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    DeRef(_22303);
    _22303 = NOVALUE;
    // SubProg get_eucompiledir pc: 59 op: STARTLINE (58)

    /** c_decl.e:146						x = -1*/
    // SubProg get_eucompiledir pc: 61 op: ASSIGN (18)
    DeRefDSi(_x_42104);
    _x_42104 = -1;
    // SubProg get_eucompiledir pc: 64 op: NOP1 (159)
L4: // addr: 65 pc: 64 sub: 42102 op: 159
    // SubProg get_eucompiledir pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 42102 op: 159
    // SubProg get_eucompiledir pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 42102 op: 159
    // SubProg get_eucompiledir pc: 67 op: STARTLINE (58)

    /** c_decl.e:152		if equal(x, -1) then*/
    // SubProg get_eucompiledir pc: 69 op: EQUAL (153)
    if (_x_42104 == -1)
    _22305 = 1;
    else if (IS_ATOM_INT(_x_42104) && IS_ATOM_INT(-1))
    _22305 = 0;
    else
    _22305 = (compare(_x_42104, -1) == 0);
    // SubProg get_eucompiledir pc: 73 op: IF (20)
    if (_22305 == 0)
    {
        _22305 = NOVALUE;
        goto L5; // [73] 82
    }
    else{
        _22305 = NOVALUE;
    }
    // SubProg get_eucompiledir pc: 76 op: STARTLINE (58)

    /** c_decl.e:153			x = get_eudir()*/
    // SubProg get_eucompiledir pc: 78 op: PROC (27)
    _0 = _x_42104;
    _x_42104 = _37get_eudir();
    DeRef(_0);
    // SubProg get_eucompiledir pc: 81 op: NOP1 (159)
L5: // addr: 82 pc: 81 sub: 42102 op: 159
    // SubProg get_eucompiledir pc: 82 op: STARTLINE (58)

    /** c_decl.e:156		return x*/
    // SubProg get_eucompiledir pc: 84 op: RETURNF (28)

// Exiting block BLOCK: get_eucompiledir
    return _x_42104;
    // SubProg get_eucompiledir pc: 88 op: BADRETURNF (43)
    ;
}


void _58NewBB(object _a_call_42130, object _mask_42131, object _sub_42133)
{
    object _s_42135 = NOVALUE;
    object _22338 = NOVALUE; // 42195 22338
    object _22337 = NOVALUE; // 42194 22337
// skipping _22336  name type: 0
    object _22335 = NOVALUE; // 42187 22335
    object _22334 = NOVALUE; // 42186 22334
// skipping _22333  name type: 0
    object _22332 = NOVALUE; // 42184 22332
    object _22331 = NOVALUE; // 42181 22331
    object _22330 = NOVALUE; // 42180 22330
    object _22329 = NOVALUE; // 42179 22329
    object _22328 = NOVALUE; // 42176 22328
    object _22327 = NOVALUE; // 42174 22327
    object _22326 = NOVALUE; // 42172 22326
    object _22325 = NOVALUE; // 42170 22325
    object _22324 = NOVALUE; // 42169 22324
    object _22323 = NOVALUE; // 42167 22323
    object _22322 = NOVALUE; // 42165 22322
    object _22321 = NOVALUE; // 42163 22321
    object _22320 = NOVALUE; // 42162 22320
    object _22319 = NOVALUE; // 42160 22319
    object _22318 = NOVALUE; // 42158 22318
    object _22317 = NOVALUE; // 42156 22317
    object _22316 = NOVALUE; // 42155 22316
    object _22315 = NOVALUE; // 42153 22315
    object _22314 = NOVALUE; // 42151 22314
    object _22313 = NOVALUE; // 42149 22313
    object _22312 = NOVALUE; // 42148 22312
    object _22311 = NOVALUE; // 42146 22311
    object _22310 = NOVALUE; // 42144 22310
// skipping _22309  name type: 0
    object _22308 = NOVALUE; // 42140 22308
    object _22307 = NOVALUE; // 42139 22307
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewBB pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewBB pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_mask_42131)) {
        _1 = (object)(DBL_PTR(_mask_42131)->dbl);
        DeRefDS(_mask_42131);
        _mask_42131 = _1;
    }
    // SubProg NewBB pc: 5 op: INTEGER_CHECK (96)
    // SubProg NewBB pc: 7 op: STARTLINE (58)

    /** c_decl.e:166		if a_call then*/
    // SubProg NewBB pc: 9 op: IF (20)
    if (_a_call_42130 == 0)
    {
        goto L1; // [9] 252
    }
    else{
    }
    // SubProg NewBB pc: 12 op: STARTLINE (58)

    /** c_decl.e:169			for i = 1 to length(BB_info) do*/
    // SubProg NewBB pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBB pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22307 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22307 = 1;
    }
    // SubProg NewBB pc: 19 op: FOR_I (125)
    {
        object _i_42138;
        _i_42138 = 1;
L2: // addr: 26 pc: 19 sub: 42128 op: 125
        if (_i_42138 > _22307){
            goto L3; // [19] 249
        }
        // SubProg NewBB pc: 26 op: STARTLINE (58)

        /** c_decl.e:170				s = BB_info[i][BB_VAR]*/
        // SubProg NewBB pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22308 = (object)*(((s1_ptr)_2)->base + _i_42138);
        // SubProg NewBB pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22308);
        _s_42135 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_s_42135)){
            _s_42135 = (object)DBL_PTR(_s_42135)->dbl;
        }
        _22308 = NOVALUE;
        // SubProg NewBB pc: 40 op: STARTLINE (58)

        /** c_decl.e:171				if SymTab[s][S_MODE] = M_NORMAL and*/
        // SubProg NewBB pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22310 = (object)*(((s1_ptr)_2)->base + _s_42135);
        // SubProg NewBB pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22310);
        _22311 = (object)*(((s1_ptr)_2)->base + 3);
        _22310 = NOVALUE;
        // SubProg NewBB pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 56 op: EQUALS (3)
        if (IS_ATOM_INT(_22311)) {
            _22312 = (_22311 == 1);
        }
        else {
            _22312 = binary_op(EQUALS, _22311, 1);
        }
        _22311 = NOVALUE;
        // SubProg NewBB pc: 60 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_22312)) {
            if (_22312 == 0) {
                goto L4; // [60] 242
            }
        }
        else {
            if (DBL_PTR(_22312)->dbl == 0.0) {
                goto L4; // [60] 242
            }
        }
        // SubProg NewBB pc: 64 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22314 = (object)*(((s1_ptr)_2)->base + _s_42135);
        // SubProg NewBB pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22314);
        _22315 = (object)*(((s1_ptr)_2)->base + 4);
        _22314 = NOVALUE;
        // SubProg NewBB pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 78 op: EQUALS (3)
        if (IS_ATOM_INT(_22315)) {
            _22316 = (_22315 == 6);
        }
        else {
            _22316 = binary_op(EQUALS, _22315, 6);
        }
        _22315 = NOVALUE;
        // SubProg NewBB pc: 82 op: SC1_OR (143)
        if (IS_ATOM_INT(_22316)) {
            if (_22316 != 0) {
                DeRef(_22317);
                _22317 = 1;
                goto L5; // [82] 108
            }
        }
        else {
            if (DBL_PTR(_22316)->dbl != 0.0) {
                DeRef(_22317);
                _22317 = 1;
                goto L5; // [82] 108
            }
        }
        // SubProg NewBB pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22318 = (object)*(((s1_ptr)_2)->base + _s_42135);
        // SubProg NewBB pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 94 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22318);
        _22319 = (object)*(((s1_ptr)_2)->base + 4);
        _22318 = NOVALUE;
        // SubProg NewBB pc: 98 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 100 op: EQUALS (3)
        if (IS_ATOM_INT(_22319)) {
            _22320 = (_22319 == 5);
        }
        else {
            _22320 = binary_op(EQUALS, _22319, 5);
        }
        _22319 = NOVALUE;
        // SubProg NewBB pc: 104 op: SC2_OR (144)
        DeRef(_22317);
        if (IS_ATOM_INT(_22320))
        _22317 = (_22320 != 0);
        else
        _22317 = DBL_PTR(_22320)->dbl != 0.0;
        // SubProg NewBB pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 42128 op: 159
        // SubProg NewBB pc: 108 op: SC1_OR (143)
        if (_22317 != 0) {
            _22321 = 1;
            goto L6; // [108] 134
        }
        // SubProg NewBB pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 114 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22322 = (object)*(((s1_ptr)_2)->base + _s_42135);
        // SubProg NewBB pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 120 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22322);
        _22323 = (object)*(((s1_ptr)_2)->base + 4);
        _22322 = NOVALUE;
        // SubProg NewBB pc: 124 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 126 op: EQUALS (3)
        if (IS_ATOM_INT(_22323)) {
            _22324 = (_22323 == 11);
        }
        else {
            _22324 = binary_op(EQUALS, _22323, 11);
        }
        _22323 = NOVALUE;
        // SubProg NewBB pc: 130 op: SC2_OR (144)
        if (IS_ATOM_INT(_22324))
        _22321 = (_22324 != 0);
        else
        _22321 = DBL_PTR(_22324)->dbl != 0.0;
        // SubProg NewBB pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 42128 op: 159
        // SubProg NewBB pc: 134 op: SC1_OR (143)
        if (_22321 != 0) {
            DeRef(_22325);
            _22325 = 1;
            goto L7; // [134] 160
        }
        // SubProg NewBB pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 140 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22326 = (object)*(((s1_ptr)_2)->base + _s_42135);
        // SubProg NewBB pc: 144 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 146 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22326);
        _22327 = (object)*(((s1_ptr)_2)->base + 4);
        _22326 = NOVALUE;
        // SubProg NewBB pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 152 op: EQUALS (3)
        if (IS_ATOM_INT(_22327)) {
            _22328 = (_22327 == 13);
        }
        else {
            _22328 = binary_op(EQUALS, _22327, 13);
        }
        _22327 = NOVALUE;
        // SubProg NewBB pc: 156 op: SC2_OR (144)
        if (IS_ATOM_INT(_22328))
        _22325 = (_22328 != 0);
        else
        _22325 = DBL_PTR(_22328)->dbl != 0.0;
        // SubProg NewBB pc: 159 op: NOP1 (159)
L7: // addr: 160 pc: 159 sub: 42128 op: 159
        // SubProg NewBB pc: 160 op: NOP1 (159)
        // SubProg NewBB pc: 161 op: IF (20)
        if (_22325 == 0)
        {
            _22325 = NOVALUE;
            goto L4; // [161] 242
        }
        else{
            _22325 = NOVALUE;
        }
        // SubProg NewBB pc: 164 op: STARTLINE (58)

        /** c_decl.e:176					  if and_bits(mask, power(2, remainder(s, E_SIZE))) then*/
        // SubProg NewBB pc: 166 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 168 op: REMAINDER (71)
        _22329 = (_s_42135 % 29);
        // SubProg NewBB pc: 172 op: POWER (72)
        _22330 = power(2, _22329);
        _22329 = NOVALUE;
        // SubProg NewBB pc: 176 op: AND_BITS (56)
        if (IS_ATOM_INT(_22330)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_mask_42131 & (uintptr_t)_22330;
                 _22331 = MAKE_UINT(tu);
            }
        }
        else {
            temp_d.dbl = (eudouble)_mask_42131;
            _22331 = Dand_bits(&temp_d, DBL_PTR(_22330));
        }
        DeRef(_22330);
        _22330 = NOVALUE;
        // SubProg NewBB pc: 180 op: IF (20)
        if (_22331 == 0) {
            DeRef(_22331);
            _22331 = NOVALUE;
            goto L8; // [180] 241
        }
        else {
            if (!IS_ATOM_INT(_22331) && DBL_PTR(_22331)->dbl == 0.0){
                DeRef(_22331);
                _22331 = NOVALUE;
                goto L8; // [180] 241
            }
            DeRef(_22331);
            _22331 = NOVALUE;
        }
        DeRef(_22331);
        _22331 = NOVALUE;
        // SubProg NewBB pc: 183 op: STARTLINE (58)

        /** c_decl.e:177						  if mask = E_ALL_EFFECT or s < sub then*/
        // SubProg NewBB pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 187 op: EQUALS (3)
        _22332 = (_mask_42131 == 1073741823);
        // SubProg NewBB pc: 191 op: SC1_OR_IF (147)
        if (_22332 != 0) {
            goto L9; // [191] 204
        }
        // SubProg NewBB pc: 195 op: LESS (1)
        _22334 = (_s_42135 < _sub_42133);
        // SubProg NewBB pc: 199 op: NOP1 (159)
        // SubProg NewBB pc: 200 op: IF (20)
        if (_22334 == 0)
        {
            DeRef(_22334);
            _22334 = NOVALUE;
            goto LA; // [200] 240
        }
        else{
            DeRef(_22334);
            _22334 = NOVALUE;
        }
        // SubProg NewBB pc: 203 op: NOP1 (159)
L9: // addr: 204 pc: 203 sub: 42128 op: 159
        // SubProg NewBB pc: 204 op: STARTLINE (58)

        /** c_decl.e:178							  BB_info[i][BB_TYPE..BB_OBJ] =*/
        // SubProg NewBB pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 208 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _58BB_info_42082 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_42138 + ((s1_ptr)_2)->base);
        // SubProg NewBB pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 215 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 217 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 219 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 221 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 223 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -1073741824;
        ((intptr_t *)_2)[2] = 1073741823;
        _22337 = MAKE_SEQ(_1);
        // SubProg NewBB pc: 227 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 0;
        ((intptr_t*)_2)[2] = 0;
        Ref(_36NOVALUE_16291);
        ((intptr_t*)_2)[3] = _36NOVALUE_16291;
        ((intptr_t*)_2)[4] = _22337;
        _22338 = MAKE_SEQ(_1);
        _22337 = NOVALUE;
        // SubProg NewBB pc: 234 op: PASSIGN_SLICE (163)
        assign_slice_seq = (s1_ptr *)_3;
        AssignSlice(2, 5, _22338);
        DeRefDS(_22338);
        _22338 = NOVALUE;
        // SubProg NewBB pc: 239 op: NOP1 (159)
LA: // addr: 240 pc: 239 sub: 42128 op: 159
        // SubProg NewBB pc: 240 op: NOP1 (159)
L8: // addr: 241 pc: 240 sub: 42128 op: 159
        // SubProg NewBB pc: 241 op: NOP1 (159)
L4: // addr: 242 pc: 241 sub: 42128 op: 159
        // SubProg NewBB pc: 242 op: STARTLINE (58)

        /** c_decl.e:183			end for*/
        // SubProg NewBB pc: 244 op: ENDFOR_INT_UP1 (54)
        _i_42138 = _i_42138 + 1;
        goto L2; // [244] 26
L3: // addr: 249 pc: 244 sub: 42128 op: 54
        ;
    }
    // SubProg NewBB pc: 249 op: ELSE (23)
    goto LB; // [249] 260
    // SubProg NewBB pc: 251 op: NOP1 (159)
L1: // addr: 252 pc: 251 sub: 42128 op: 159
    // SubProg NewBB pc: 252 op: STARTLINE (58)

    /** c_decl.e:186			BB_info = {}*/
    // SubProg NewBB pc: 254 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_58BB_info_42082);
    _58BB_info_42082 = _21933;
    // SubProg NewBB pc: 257 op: SEQUENCE_CHECK (97)
    // SubProg NewBB pc: 259 op: NOP1 (159)
LB: // addr: 260 pc: 259 sub: 42128 op: 159
    // SubProg NewBB pc: 260 op: STARTLINE (58)

    /** c_decl.e:188	end procedure*/
    // SubProg NewBB pc: 262 op: RETURNP (29)

// Exiting block BLOCK: NewBB

// block var a_call_42130

// block var mask_42131

// block var sub_42133

// block var s_42135
    DeRef(_22312);
    _22312 = NOVALUE;
    DeRef(_22332);
    _22332 = NOVALUE;
    DeRef(_22335);
    _22335 = NOVALUE;
    DeRef(_22320);
    _22320 = NOVALUE;
    DeRef(_22328);
    _22328 = NOVALUE;
    DeRef(_22316);
    _22316 = NOVALUE;
    DeRef(_22324);
    _22324 = NOVALUE;
    return;
    // SubProg NewBB pc: 265 op: BADRETURNF (43)
    ;
}


object _58BB_var_obj(object _var_42203)
{
    object _bbi_42204 = NOVALUE;
    object _22349 = NOVALUE; // 42223 22349
// skipping _22348  name type: 0
    object _22347 = NOVALUE; // 42220 22347
// skipping _22346  name type: 0
    object _22345 = NOVALUE; // 42216 22345
    object _22344 = NOVALUE; // 42214 22344
// skipping _22343  name type: 0
    object _22342 = NOVALUE; // 42210 22342
// skipping _22341  name type: 0
    object _22340 = NOVALUE; // 42207 22340
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BB_var_obj pc: 1 op: INTEGER_CHECK (96)
    // SubProg BB_var_obj pc: 3 op: STARTLINE (58)

    /** c_decl.e:196		for i = length(BB_info) to 1 by -1 do*/
    // SubProg BB_var_obj pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_obj pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22340 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22340 = 1;
    }
    // SubProg BB_var_obj pc: 10 op: FOR_I (125)
    {
        object _i_42206;
        _i_42206 = _22340;
L1: // addr: 17 pc: 10 sub: 42201 op: 125
        if (_i_42206 < 1){
            goto L2; // [10] 99
        }
        // SubProg BB_var_obj pc: 17 op: STARTLINE (58)

        /** c_decl.e:197			bbi = BB_info[i]*/
        // SubProg BB_var_obj pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 21 op: RHS_SUBS (25)
        DeRef(_bbi_42204);
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _bbi_42204 = (object)*(((s1_ptr)_2)->base + _i_42206);
        Ref(_bbi_42204);
        // SubProg BB_var_obj pc: 25 op: STARTLINE (58)

        /** c_decl.e:198			if bbi[BB_VAR] != var then*/
        // SubProg BB_var_obj pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42204);
        _22342 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BB_var_obj pc: 31 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22342, _var_42203)){
            _22342 = NOVALUE;
            goto L3; // [31] 40
        }
        _22342 = NOVALUE;
        // SubProg BB_var_obj pc: 35 op: STARTLINE (58)

        /** c_decl.e:199				continue*/
        // SubProg BB_var_obj pc: 37 op: ELSE (23)
        goto L4; // [37] 94
        // SubProg BB_var_obj pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 42201 op: 159
        // SubProg BB_var_obj pc: 40 op: STARTLINE (58)

        /** c_decl.e:202			if SymTab[var][S_MODE] != M_NORMAL then*/
        // SubProg BB_var_obj pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22344 = (object)*(((s1_ptr)_2)->base + _var_42203);
        // SubProg BB_var_obj pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22344);
        _22345 = (object)*(((s1_ptr)_2)->base + 3);
        _22344 = NOVALUE;
        // SubProg BB_var_obj pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 56 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22345, 1)){
            _22345 = NOVALUE;
            goto L5; // [56] 65
        }
        _22345 = NOVALUE;
        // SubProg BB_var_obj pc: 60 op: STARTLINE (58)

        /** c_decl.e:203				continue*/
        // SubProg BB_var_obj pc: 62 op: ELSE (23)
        goto L4; // [62] 94
        // SubProg BB_var_obj pc: 64 op: NOP1 (159)
L5: // addr: 65 pc: 64 sub: 42201 op: 159
        // SubProg BB_var_obj pc: 65 op: STARTLINE (58)

        /** c_decl.e:206			if bbi[BB_TYPE] != TYPE_INTEGER then*/
        // SubProg BB_var_obj pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42204);
        _22347 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BB_var_obj pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 73 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22347, 1)){
            _22347 = NOVALUE;
            goto L6; // [73] 82
        }
        _22347 = NOVALUE;
        // SubProg BB_var_obj pc: 77 op: STARTLINE (58)

        /** c_decl.e:207				exit*/
        // SubProg BB_var_obj pc: 79 op: EXIT (61)
        goto L2; // [79] 99
        // SubProg BB_var_obj pc: 81 op: NOP1 (159)
L6: // addr: 82 pc: 81 sub: 42201 op: 159
        // SubProg BB_var_obj pc: 82 op: STARTLINE (58)

        /** c_decl.e:210			return bbi[BB_OBJ]*/
        // SubProg BB_var_obj pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42204);
        _22349 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg BB_var_obj pc: 88 op: RETURNF (28)
        Ref(_22349);

// Exiting block BLOCK: BB_var_obj

// block var var_42203

// block var bbi_42204
        DeRef(_bbi_42204);
        return _22349;
        // SubProg BB_var_obj pc: 92 op: STARTLINE (58)

        /** c_decl.e:211		end for*/
        // SubProg BB_var_obj pc: 94 op: ENDFOR_GENERAL (39)
L4: // addr: 94 pc: 94 sub: 42201 op: 39
        _i_42206 = _i_42206 + -1;
        goto L1; // [94] 17
L2: // addr: 99 pc: 94 sub: 42201 op: 39
        ;
    }
    // SubProg BB_var_obj pc: 99 op: STARTLINE (58)

    /** c_decl.e:212		return BB_def_values*/
    // SubProg BB_var_obj pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_obj pc: 103 op: RETURNF (28)
    RefDS(_58BB_def_values_42197);

// Exiting block BLOCK: BB_var_obj

// block var var_42203

// block var bbi_42204
    DeRef(_bbi_42204);
    _22349 = NOVALUE;
    return _58BB_def_values_42197;
    // SubProg BB_var_obj pc: 107 op: BADRETURNF (43)
    ;
}


object _58BB_var_type(object _var_42226)
{
    object _22364 = NOVALUE; // 42251 22364
    object _22363 = NOVALUE; // 42250 22363
// skipping _22362  name type: 0
    object _22361 = NOVALUE; // 42245 22361
    object _22360 = NOVALUE; // 42244 22360
    object _22359 = NOVALUE; // 42242 22359
    object _22358 = NOVALUE; // 42240 22358
    object _22357 = NOVALUE; // 42238 22357
    object _22356 = NOVALUE; // 42237 22356
    object _22355 = NOVALUE; // 42236 22355
    object _22354 = NOVALUE; // 42234 22354
    object _22353 = NOVALUE; // 42233 22353
    object _22352 = NOVALUE; // 42232 22352
    object _22351 = NOVALUE; // 42231 22351
    object _22350 = NOVALUE; // 42229 22350
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BB_var_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg BB_var_type pc: 3 op: STARTLINE (58)

    /** c_decl.e:218		for i = length(BB_info) to 1 by -1 do*/
    // SubProg BB_var_type pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_type pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22350 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22350 = 1;
    }
    // SubProg BB_var_type pc: 10 op: FOR_I (125)
    {
        object _i_42228;
        _i_42228 = _22350;
L1: // addr: 17 pc: 10 sub: 42224 op: 125
        if (_i_42228 < 1){
            goto L2; // [10] 125
        }
        // SubProg BB_var_type pc: 17 op: STARTLINE (58)

        /** c_decl.e:219			if BB_info[i][BB_VAR] = var and*/
        // SubProg BB_var_type pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22351 = (object)*(((s1_ptr)_2)->base + _i_42228);
        // SubProg BB_var_type pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22351);
        _22352 = (object)*(((s1_ptr)_2)->base + 1);
        _22351 = NOVALUE;
        // SubProg BB_var_type pc: 29 op: EQUALS (3)
        if (IS_ATOM_INT(_22352)) {
            _22353 = (_22352 == _var_42226);
        }
        else {
            _22353 = binary_op(EQUALS, _22352, _var_42226);
        }
        _22352 = NOVALUE;
        // SubProg BB_var_type pc: 33 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_22353)) {
            if (_22353 == 0) {
                goto L3; // [33] 118
            }
        }
        else {
            if (DBL_PTR(_22353)->dbl == 0.0) {
                goto L3; // [33] 118
            }
        }
        // SubProg BB_var_type pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22355 = (object)*(((s1_ptr)_2)->base + _i_42228);
        // SubProg BB_var_type pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22355);
        _22356 = (object)*(((s1_ptr)_2)->base + 1);
        _22355 = NOVALUE;
        // SubProg BB_var_type pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_22356)){
            _22357 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22356)->dbl));
        }
        else{
            _22357 = (object)*(((s1_ptr)_2)->base + _22356);
        }
        // SubProg BB_var_type pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22357);
        _22358 = (object)*(((s1_ptr)_2)->base + 3);
        _22357 = NOVALUE;
        // SubProg BB_var_type pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 61 op: EQUALS (3)
        if (IS_ATOM_INT(_22358)) {
            _22359 = (_22358 == 1);
        }
        else {
            _22359 = binary_op(EQUALS, _22358, 1);
        }
        _22358 = NOVALUE;
        // SubProg BB_var_type pc: 65 op: NOP1 (159)
        // SubProg BB_var_type pc: 66 op: IF (20)
        if (_22359 == 0) {
            DeRef(_22359);
            _22359 = NOVALUE;
            goto L3; // [66] 118
        }
        else {
            if (!IS_ATOM_INT(_22359) && DBL_PTR(_22359)->dbl == 0.0){
                DeRef(_22359);
                _22359 = NOVALUE;
                goto L3; // [66] 118
            }
            DeRef(_22359);
            _22359 = NOVALUE;
        }
        DeRef(_22359);
        _22359 = NOVALUE;
        // SubProg BB_var_type pc: 69 op: STARTLINE (58)

        /** c_decl.e:221				ifdef DEBUG then*/
        // SubProg BB_var_type pc: 71 op: STARTLINE (58)

        /** c_decl.e:228				if BB_info[i][BB_TYPE] = TYPE_NULL then  -- var has only been read*/
        // SubProg BB_var_type pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 75 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22360 = (object)*(((s1_ptr)_2)->base + _i_42228);
        // SubProg BB_var_type pc: 79 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22360);
        _22361 = (object)*(((s1_ptr)_2)->base + 2);
        _22360 = NOVALUE;
        // SubProg BB_var_type pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 85 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _22361, 0)){
            _22361 = NOVALUE;
            goto L4; // [85] 100
        }
        _22361 = NOVALUE;
        // SubProg BB_var_type pc: 89 op: STARTLINE (58)

        /** c_decl.e:229					return TYPE_OBJECT*/
        // SubProg BB_var_type pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 93 op: RETURNF (28)

// Exiting block BLOCK: BB_var_type

// block var var_42226
        DeRef(_22353);
        _22353 = NOVALUE;
        _22356 = NOVALUE;
        return 16;
        // SubProg BB_var_type pc: 97 op: ELSE (23)
        goto L5; // [97] 117
        // SubProg BB_var_type pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 42224 op: 159
        // SubProg BB_var_type pc: 100 op: STARTLINE (58)

        /** c_decl.e:231					return BB_info[i][BB_TYPE]*/
        // SubProg BB_var_type pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 104 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22363 = (object)*(((s1_ptr)_2)->base + _i_42228);
        // SubProg BB_var_type pc: 108 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22363);
        _22364 = (object)*(((s1_ptr)_2)->base + 2);
        _22363 = NOVALUE;
        // SubProg BB_var_type pc: 112 op: RETURNF (28)
        Ref(_22364);

// Exiting block BLOCK: BB_var_type

// block var var_42226
        DeRef(_22353);
        _22353 = NOVALUE;
        _22356 = NOVALUE;
        return _22364;
        // SubProg BB_var_type pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 42224 op: 159
        // SubProg BB_var_type pc: 117 op: NOP1 (159)
L3: // addr: 118 pc: 117 sub: 42224 op: 159
        // SubProg BB_var_type pc: 118 op: STARTLINE (58)

        /** c_decl.e:234		end for*/
        // SubProg BB_var_type pc: 120 op: ENDFOR_GENERAL (39)
        _i_42228 = _i_42228 + -1;
        goto L1; // [120] 17
L2: // addr: 125 pc: 120 sub: 42224 op: 39
        ;
    }
    // SubProg BB_var_type pc: 125 op: STARTLINE (58)

    /** c_decl.e:235		return TYPE_OBJECT*/
    // SubProg BB_var_type pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_type pc: 129 op: RETURNF (28)

// Exiting block BLOCK: BB_var_type

// block var var_42226
    DeRef(_22353);
    _22353 = NOVALUE;
    _22356 = NOVALUE;
    _22364 = NOVALUE;
    return 16;
    // SubProg BB_var_type pc: 133 op: BADRETURNF (43)
    ;
}


object _58GType(object _s_42256)
{
    object _t_42257 = NOVALUE;
    object _local_t_42258 = NOVALUE;
// skipping _22372  name type: 0
// skipping _22371  name type: 0
// skipping _22370  name type: 0
// skipping _22369  name type: 0
    object _22368 = NOVALUE; // 42267 22368
    object _22367 = NOVALUE; // 42265 22367
// skipping _22366  name type: 0
    object _22365 = NOVALUE; // 42260 22365
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GType pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42256)) {
        _1 = (object)(DBL_PTR(_s_42256)->dbl);
        DeRefDS(_s_42256);
        _s_42256 = _1;
    }
    // SubProg GType pc: 3 op: STARTLINE (58)

    /** c_decl.e:243		t = SymTab[s][S_GTYPE]*/
    // SubProg GType pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22365 = (object)*(((s1_ptr)_2)->base + _s_42256);
    // SubProg GType pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22365);
    _t_42257 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_t_42257)){
        _t_42257 = (object)DBL_PTR(_t_42257)->dbl;
    }
    _22365 = NOVALUE;
    // SubProg GType pc: 19 op: STARTLINE (58)

    /** c_decl.e:244		ifdef DEBUG then*/
    // SubProg GType pc: 21 op: STARTLINE (58)

    /** c_decl.e:250		if SymTab[s][S_MODE] != M_NORMAL then*/
    // SubProg GType pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22367 = (object)*(((s1_ptr)_2)->base + _s_42256);
    // SubProg GType pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22367);
    _22368 = (object)*(((s1_ptr)_2)->base + 3);
    _22367 = NOVALUE;
    // SubProg GType pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 37 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22368, 1)){
        _22368 = NOVALUE;
        goto L1; // [37] 48
    }
    _22368 = NOVALUE;
    // SubProg GType pc: 41 op: STARTLINE (58)

    /** c_decl.e:251			return t*/
    // SubProg GType pc: 43 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42256

// block var local_t_42258
    return _t_42257;
    // SubProg GType pc: 47 op: NOP1 (159)
L1: // addr: 48 pc: 47 sub: 42253 op: 159
    // SubProg GType pc: 48 op: STARTLINE (58)

    /** c_decl.e:254		local_t = BB_var_type(s)*/
    // SubProg GType pc: 50 op: PROC (27)
    _local_t_42258 = _58BB_var_type(_s_42256);
    // SubProg GType pc: 54 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_local_t_42258)) {
        _1 = (object)(DBL_PTR(_local_t_42258)->dbl);
        DeRefDS(_local_t_42258);
        _local_t_42258 = _1;
    }
    // SubProg GType pc: 56 op: STARTLINE (58)

    /** c_decl.e:255		if local_t = TYPE_OBJECT then*/
    // SubProg GType pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 60 op: EQUALS_IFW (104)
    if (_local_t_42258 != 16)
    goto L2; // [60] 71
    // SubProg GType pc: 64 op: STARTLINE (58)

    /** c_decl.e:256			return t*/
    // SubProg GType pc: 66 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42256

// block var local_t_42258
    return _t_42257;
    // SubProg GType pc: 70 op: NOP1 (159)
L2: // addr: 71 pc: 70 sub: 42253 op: 159
    // SubProg GType pc: 71 op: STARTLINE (58)

    /** c_decl.e:258		if t = TYPE_INTEGER then*/
    // SubProg GType pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 75 op: EQUALS_IFW (104)
    if (_t_42257 != 1)
    goto L3; // [75] 88
    // SubProg GType pc: 79 op: STARTLINE (58)

    /** c_decl.e:259			return TYPE_INTEGER*/
    // SubProg GType pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 83 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42256

// block var t_42257

// block var local_t_42258
    return 1;
    // SubProg GType pc: 87 op: NOP1 (159)
L3: // addr: 88 pc: 87 sub: 42253 op: 159
    // SubProg GType pc: 88 op: STARTLINE (58)

    /** c_decl.e:261		return local_t*/
    // SubProg GType pc: 90 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42256

// block var t_42257
    return _local_t_42258;
    // SubProg GType pc: 94 op: BADRETURNF (43)
    ;
}


object _58GDelete()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GDelete pc: 1 op: STARTLINE (58)

    /** c_decl.e:269		return g_has_delete*/
    // SubProg GDelete pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GDelete pc: 5 op: RETURNF (28)

// Exiting block BLOCK: GDelete
    return _58g_has_delete_42278;
    // SubProg GDelete pc: 9 op: BADRETURNF (43)
    ;
}


object _58HasDelete(object _s_42285)
{
    object _22383 = NOVALUE; // 42304 22383
    object _22382 = NOVALUE; // 42302 22382
// skipping _22381  name type: 0
    object _22380 = NOVALUE; // 42298 22380
    object _22379 = NOVALUE; // 42297 22379
    object _22378 = NOVALUE; // 42294 22378
    object _22377 = NOVALUE; // 42293 22377
// skipping _22376  name type: 0
    object _22375 = NOVALUE; // 42291 22375
    object _22374 = NOVALUE; // 42290 22374
    object _22373 = NOVALUE; // 42288 22373
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg HasDelete pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42285)) {
        _1 = (object)(DBL_PTR(_s_42285)->dbl);
        DeRefDS(_s_42285);
        _s_42285 = _1;
    }
    // SubProg HasDelete pc: 3 op: STARTLINE (58)

    /** c_decl.e:274		for i = length(BB_info) to 1 by -1 do*/
    // SubProg HasDelete pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22373 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22373 = 1;
    }
    // SubProg HasDelete pc: 10 op: FOR_I (125)
    {
        object _i_42287;
        _i_42287 = _22373;
L1: // addr: 17 pc: 10 sub: 42282 op: 125
        if (_i_42287 < 1){
            goto L2; // [10] 57
        }
        // SubProg HasDelete pc: 17 op: STARTLINE (58)

        /** c_decl.e:275			if BB_info[i][BB_VAR] = s then*/
        // SubProg HasDelete pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg HasDelete pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22374 = (object)*(((s1_ptr)_2)->base + _i_42287);
        // SubProg HasDelete pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22374);
        _22375 = (object)*(((s1_ptr)_2)->base + 1);
        _22374 = NOVALUE;
        // SubProg HasDelete pc: 29 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _22375, _s_42285)){
            _22375 = NOVALUE;
            goto L3; // [29] 50
        }
        _22375 = NOVALUE;
        // SubProg HasDelete pc: 33 op: STARTLINE (58)

        /** c_decl.e:276				return BB_info[i][BB_DELETE]*/
        // SubProg HasDelete pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg HasDelete pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22377 = (object)*(((s1_ptr)_2)->base + _i_42287);
        // SubProg HasDelete pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22377);
        _22378 = (object)*(((s1_ptr)_2)->base + 6);
        _22377 = NOVALUE;
        // SubProg HasDelete pc: 45 op: RETURNF (28)
        Ref(_22378);

// Exiting block BLOCK: HasDelete

// block var s_42285
        return _22378;
        // SubProg HasDelete pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 42282 op: 159
        // SubProg HasDelete pc: 50 op: STARTLINE (58)

        /** c_decl.e:278		end for*/
        // SubProg HasDelete pc: 52 op: ENDFOR_GENERAL (39)
        _i_42287 = _i_42287 + -1;
        goto L1; // [52] 17
L2: // addr: 57 pc: 52 sub: 42282 op: 39
        ;
    }
    // SubProg HasDelete pc: 57 op: STARTLINE (58)

    /** c_decl.e:279		if length(SymTab[s]) < S_HAS_DELETE then*/
    // SubProg HasDelete pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22379 = (object)*(((s1_ptr)_2)->base + _s_42285);
    // SubProg HasDelete pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_22379)){
            _22380 = SEQ_PTR(_22379)->length;
    }
    else {
        _22380 = 1;
    }
    _22379 = NOVALUE;
    // SubProg HasDelete pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 70 op: LESS_IFW (102)
    if (_22380 >= 54)
    goto L4; // [70] 81
    // SubProg HasDelete pc: 74 op: STARTLINE (58)

    /** c_decl.e:280			return 0*/
    // SubProg HasDelete pc: 76 op: RETURNF (28)

// Exiting block BLOCK: HasDelete

// block var s_42285
    _22378 = NOVALUE;
    _22379 = NOVALUE;
    return 0;
    // SubProg HasDelete pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 42282 op: 159
    // SubProg HasDelete pc: 81 op: STARTLINE (58)

    /** c_decl.e:282		return SymTab[s][S_HAS_DELETE]*/
    // SubProg HasDelete pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22382 = (object)*(((s1_ptr)_2)->base + _s_42285);
    // SubProg HasDelete pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22382);
    _22383 = (object)*(((s1_ptr)_2)->base + 54);
    _22382 = NOVALUE;
    // SubProg HasDelete pc: 95 op: RETURNF (28)
    Ref(_22383);

// Exiting block BLOCK: HasDelete

// block var s_42285
    _22378 = NOVALUE;
    _22379 = NOVALUE;
    return _22383;
    // SubProg HasDelete pc: 99 op: BADRETURNF (43)
    ;
}


object _58ObjValue(object _s_42308)
{
    object _local_t_42309 = NOVALUE;
    object _st_42310 = NOVALUE;
    object _tmin_42311 = NOVALUE;
    object _tmax_42312 = NOVALUE;
    object _22396 = NOVALUE; // 42340 22396
// skipping _22395  name type: 0
    object _22394 = NOVALUE; // 42337 22394
    object _22393 = NOVALUE; // 42335 22393
// skipping _22392  name type: 0
    object _22391 = NOVALUE; // 42330 22391
// skipping _22390  name type: 0
// skipping _22389  name type: 0
    object _22388 = NOVALUE; // 42324 22388
// skipping _22387  name type: 0
// skipping _22386  name type: 0
// skipping _22385  name type: 0
// skipping _22384  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ObjValue pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42308)) {
        _1 = (object)(DBL_PTR(_s_42308)->dbl);
        DeRefDS(_s_42308);
        _s_42308 = _1;
    }
    // SubProg ObjValue pc: 3 op: STARTLINE (58)

    /** c_decl.e:293		st = SymTab[s]*/
    // SubProg ObjValue pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 7 op: RHS_SUBS_CHECK (92)
    DeRef(_st_42310);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _st_42310 = (object)*(((s1_ptr)_2)->base + _s_42308);
    Ref(_st_42310);
    // SubProg ObjValue pc: 11 op: STARTLINE (58)

    /** c_decl.e:294		tmin = st[S_OBJ_MIN]*/
    // SubProg ObjValue pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 15 op: RHS_SUBS_CHECK (92)
    DeRef(_tmin_42311);
    _2 = (object)SEQ_PTR(_st_42310);
    _tmin_42311 = (object)*(((s1_ptr)_2)->base + 30);
    Ref(_tmin_42311);
    // SubProg ObjValue pc: 19 op: STARTLINE (58)

    /** c_decl.e:295		tmax = st[S_OBJ_MAX]*/
    // SubProg ObjValue pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 23 op: RHS_SUBS_CHECK (92)
    DeRef(_tmax_42312);
    _2 = (object)SEQ_PTR(_st_42310);
    _tmax_42312 = (object)*(((s1_ptr)_2)->base + 31);
    Ref(_tmax_42312);
    // SubProg ObjValue pc: 27 op: STARTLINE (58)

    /** c_decl.e:297		if tmin != tmax then*/
    // SubProg ObjValue pc: 29 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _tmin_42311, _tmax_42312)){
        goto L1; // [29] 41
    }
    // SubProg ObjValue pc: 33 op: STARTLINE (58)

    /** c_decl.e:298			tmin = NOVALUE*/
    // SubProg ObjValue pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 37 op: ASSIGN (18)
    Ref(_36NOVALUE_16291);
    DeRef(_tmin_42311);
    _tmin_42311 = _36NOVALUE_16291;
    // SubProg ObjValue pc: 40 op: NOP1 (159)
L1: // addr: 41 pc: 40 sub: 42305 op: 159
    // SubProg ObjValue pc: 41 op: STARTLINE (58)

    /** c_decl.e:300		if st[S_MODE] != M_NORMAL then*/
    // SubProg ObjValue pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_st_42310);
    _22388 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg ObjValue pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 51 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22388, 1)){
        _22388 = NOVALUE;
        goto L2; // [51] 62
    }
    _22388 = NOVALUE;
    // SubProg ObjValue pc: 55 op: STARTLINE (58)

    /** c_decl.e:301			return tmin*/
    // SubProg ObjValue pc: 57 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42308

// block var local_t_42309
    DeRef(_local_t_42309);

// block var st_42310
    DeRef(_st_42310);

// block var tmax_42312
    DeRef(_tmax_42312);
    return _tmin_42311;
    // SubProg ObjValue pc: 61 op: NOP1 (159)
L2: // addr: 62 pc: 61 sub: 42305 op: 159
    // SubProg ObjValue pc: 62 op: STARTLINE (58)

    /** c_decl.e:305		local_t = BB_var_obj(s)*/
    // SubProg ObjValue pc: 64 op: PROC (27)
    _0 = _local_t_42309;
    _local_t_42309 = _58BB_var_obj(_s_42308);
    DeRef(_0);
    // SubProg ObjValue pc: 68 op: SEQUENCE_CHECK (97)
    // SubProg ObjValue pc: 70 op: STARTLINE (58)

    /** c_decl.e:306		if local_t[MIN] = NOVALUE then*/
    // SubProg ObjValue pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42309);
    _22391 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22391, _36NOVALUE_16291)){
        _22391 = NOVALUE;
        goto L3; // [80] 91
    }
    _22391 = NOVALUE;
    // SubProg ObjValue pc: 84 op: STARTLINE (58)

    /** c_decl.e:307			return tmin*/
    // SubProg ObjValue pc: 86 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42308

// block var local_t_42309
    DeRefDS(_local_t_42309);

// block var st_42310
    DeRef(_st_42310);

// block var tmax_42312
    DeRef(_tmax_42312);
    return _tmin_42311;
    // SubProg ObjValue pc: 90 op: NOP1 (159)
L3: // addr: 91 pc: 90 sub: 42305 op: 159
    // SubProg ObjValue pc: 91 op: STARTLINE (58)

    /** c_decl.e:310		if local_t[MIN] != local_t[MAX] then*/
    // SubProg ObjValue pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 95 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42309);
    _22393 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42309);
    _22394 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg ObjValue pc: 105 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22393, _22394)){
        _22393 = NOVALUE;
        _22394 = NOVALUE;
        goto L4; // [105] 116
    }
    _22393 = NOVALUE;
    _22394 = NOVALUE;
    // SubProg ObjValue pc: 109 op: STARTLINE (58)

    /** c_decl.e:311			return tmin*/
    // SubProg ObjValue pc: 111 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42308

// block var local_t_42309
    DeRefDS(_local_t_42309);

// block var st_42310
    DeRef(_st_42310);

// block var tmax_42312
    DeRef(_tmax_42312);
    return _tmin_42311;
    // SubProg ObjValue pc: 115 op: NOP1 (159)
L4: // addr: 116 pc: 115 sub: 42305 op: 159
    // SubProg ObjValue pc: 116 op: STARTLINE (58)

    /** c_decl.e:314		return local_t[MIN]*/
    // SubProg ObjValue pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42309);
    _22396 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 124 op: RETURNF (28)
    Ref(_22396);

// Exiting block BLOCK: ObjValue

// block var s_42308

// block var local_t_42309
    DeRefDS(_local_t_42309);

// block var st_42310
    DeRef(_st_42310);

// block var tmin_42311
    DeRef(_tmin_42311);

// block var tmax_42312
    DeRef(_tmax_42312);
    return _22396;
    // SubProg ObjValue pc: 128 op: BADRETURNF (43)
    ;
}


object _58TypeIs(object _x_42343, object _typei_42344)
{
    object _22398 = NOVALUE; // 42346 22398
    object _22397 = NOVALUE; // 42345 22397
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIs pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42343)) {
        _1 = (object)(DBL_PTR(_x_42343)->dbl);
        DeRefDS(_x_42343);
        _x_42343 = _1;
    }
    // SubProg TypeIs pc: 3 op: INTEGER_CHECK (96)
    // SubProg TypeIs pc: 5 op: STARTLINE (58)

    /** c_decl.e:319		return GType(x) = typei*/
    // SubProg TypeIs pc: 7 op: PROC (27)
    _22397 = _58GType(_x_42343);
    // SubProg TypeIs pc: 11 op: EQUALS (3)
    if (IS_ATOM_INT(_22397)) {
        _22398 = (_22397 == _typei_42344);
    }
    else {
        _22398 = binary_op(EQUALS, _22397, _typei_42344);
    }
    DeRef(_22397);
    _22397 = NOVALUE;
    // SubProg TypeIs pc: 15 op: RETURNF (28)

// Exiting block BLOCK: TypeIs

// block var x_42343

// block var typei_42344
    return _22398;
    // SubProg TypeIs pc: 19 op: BADRETURNF (43)
    ;
}


object _58TypeIsIn(object _x_42349, object _types_42350)
{
    object _22400 = NOVALUE; // 42352 22400
    object _22399 = NOVALUE; // 42351 22399
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsIn pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42349)) {
        _1 = (object)(DBL_PTR(_x_42349)->dbl);
        DeRefDS(_x_42349);
        _x_42349 = _1;
    }
    // SubProg TypeIsIn pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg TypeIsIn pc: 5 op: STARTLINE (58)

    /** c_decl.e:323		return find(GType(x), types)*/
    // SubProg TypeIsIn pc: 7 op: PROC (27)
    _22399 = _58GType(_x_42349);
    // SubProg TypeIsIn pc: 11 op: FIND_FROM (176)
    _22400 = find_from(_22399, _types_42350, 1);
    DeRef(_22399);
    _22399 = NOVALUE;
    // SubProg TypeIsIn pc: 16 op: RETURNF (28)

// Exiting block BLOCK: TypeIsIn

// block var x_42349

// block var types_42350
    DeRefDS(_types_42350);
    return _22400;
    // SubProg TypeIsIn pc: 20 op: BADRETURNF (43)
    ;
}


object _58TypeIsNot(object _x_42355, object _typei_42356)
{
    object _22402 = NOVALUE; // 42358 22402
    object _22401 = NOVALUE; // 42357 22401
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsNot pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42355)) {
        _1 = (object)(DBL_PTR(_x_42355)->dbl);
        DeRefDS(_x_42355);
        _x_42355 = _1;
    }
    // SubProg TypeIsNot pc: 3 op: INTEGER_CHECK (96)
    // SubProg TypeIsNot pc: 5 op: STARTLINE (58)

    /** c_decl.e:327		return GType(x) != typei*/
    // SubProg TypeIsNot pc: 7 op: PROC (27)
    _22401 = _58GType(_x_42355);
    // SubProg TypeIsNot pc: 11 op: NOTEQ (4)
    if (IS_ATOM_INT(_22401)) {
        _22402 = (_22401 != _typei_42356);
    }
    else {
        _22402 = binary_op(NOTEQ, _22401, _typei_42356);
    }
    DeRef(_22401);
    _22401 = NOVALUE;
    // SubProg TypeIsNot pc: 15 op: RETURNF (28)

// Exiting block BLOCK: TypeIsNot

// block var x_42355

// block var typei_42356
    return _22402;
    // SubProg TypeIsNot pc: 19 op: BADRETURNF (43)
    ;
}


object _58TypeIsNotIn(object _x_42361, object _types_42362)
{
    object _22405 = NOVALUE; // 42365 22405
    object _22404 = NOVALUE; // 42364 22404
    object _22403 = NOVALUE; // 42363 22403
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsNotIn pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42361)) {
        _1 = (object)(DBL_PTR(_x_42361)->dbl);
        DeRefDS(_x_42361);
        _x_42361 = _1;
    }
    // SubProg TypeIsNotIn pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg TypeIsNotIn pc: 5 op: STARTLINE (58)

    /** c_decl.e:331		return not find(GType(x), types)*/
    // SubProg TypeIsNotIn pc: 7 op: PROC (27)
    _22403 = _58GType(_x_42361);
    // SubProg TypeIsNotIn pc: 11 op: FIND_FROM (176)
    _22404 = find_from(_22403, _types_42362, 1);
    DeRef(_22403);
    _22403 = NOVALUE;
    // SubProg TypeIsNotIn pc: 16 op: NOT (7)
    _22405 = (_22404 == 0);
    _22404 = NOVALUE;
    // SubProg TypeIsNotIn pc: 19 op: RETURNF (28)

// Exiting block BLOCK: TypeIsNotIn

// block var x_42361

// block var types_42362
    DeRefDS(_types_42362);
    return _22405;
    // SubProg TypeIsNotIn pc: 23 op: BADRETURNF (43)
    ;
}


object _58or_type(object _t1_42368, object _t2_42369)
{
    object _22425 = NOVALUE; // 42435 22425
    object _22424 = NOVALUE; // 42431 22424
    object _22423 = NOVALUE; // 42429 22423
    object _22422 = NOVALUE; // 42428 22422
// skipping _22421  name type: 0
// skipping _22420  name type: 0
// skipping _22419  name type: 0
// skipping _22418  name type: 0
    object _22417 = NOVALUE; // 42406 22417
// skipping _22416  name type: 0
    object _22415 = NOVALUE; // 42403 22415
// skipping _22414  name type: 0
// skipping _22413  name type: 0
// skipping _22412  name type: 0
// skipping _22411  name type: 0
    object _22410 = NOVALUE; // 42381 22410
// skipping _22409  name type: 0
    object _22408 = NOVALUE; // 42378 22408
// skipping _22407  name type: 0
// skipping _22406  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg or_type pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t1_42368)) {
        _1 = (object)(DBL_PTR(_t1_42368)->dbl);
        DeRefDS(_t1_42368);
        _t1_42368 = _1;
    }
    // SubProg or_type pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t2_42369)) {
        _1 = (object)(DBL_PTR(_t2_42369)->dbl);
        DeRefDS(_t2_42369);
        _t2_42369 = _1;
    }
    // SubProg or_type pc: 5 op: STARTLINE (58)

    /** c_decl.e:337		if t1 = TYPE_NULL then*/
    // SubProg or_type pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 9 op: EQUALS_IFW (104)
    if (_t1_42368 != 0)
    goto L1; // [9] 22
    // SubProg or_type pc: 13 op: STARTLINE (58)

    /** c_decl.e:338			return t2*/
    // SubProg or_type pc: 15 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368
    return _t2_42369;
    // SubProg or_type pc: 19 op: ELSE (23)
    goto L2; // [19] 307
    // SubProg or_type pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 42366 op: 159
    // SubProg or_type pc: 22 op: STARTLINE (58)

    /** c_decl.e:340		elsif t2 = TYPE_NULL then*/
    // SubProg or_type pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 26 op: EQUALS_IFW (104)
    if (_t2_42369 != 0)
    goto L3; // [26] 39
    // SubProg or_type pc: 30 op: STARTLINE (58)

    /** c_decl.e:341			return t1*/
    // SubProg or_type pc: 32 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t2_42369
    return _t1_42368;
    // SubProg or_type pc: 36 op: ELSE (23)
    goto L2; // [36] 307
    // SubProg or_type pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 42366 op: 159
    // SubProg or_type pc: 39 op: STARTLINE (58)

    /** c_decl.e:343		elsif t1 = TYPE_OBJECT or t2 = TYPE_OBJECT then*/
    // SubProg or_type pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 43 op: EQUALS (3)
    _22408 = (_t1_42368 == 16);
    // SubProg or_type pc: 47 op: SC1_OR_IF (147)
    if (_22408 != 0) {
        goto L4; // [47] 62
    }
    // SubProg or_type pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 53 op: EQUALS (3)
    _22410 = (_t2_42369 == 16);
    // SubProg or_type pc: 57 op: NOP1 (159)
    // SubProg or_type pc: 58 op: IF (20)
    if (_22410 == 0)
    {
        DeRef(_22410);
        _22410 = NOVALUE;
        goto L5; // [58] 73
    }
    else{
        DeRef(_22410);
        _22410 = NOVALUE;
    }
    // SubProg or_type pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 42366 op: 159
    // SubProg or_type pc: 62 op: STARTLINE (58)

    /** c_decl.e:344			return TYPE_OBJECT*/
    // SubProg or_type pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 66 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    return 16;
    // SubProg or_type pc: 70 op: ELSE (23)
    goto L2; // [70] 307
    // SubProg or_type pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 42366 op: 159
    // SubProg or_type pc: 73 op: STARTLINE (58)

    /** c_decl.e:346		elsif t1 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 77 op: EQUALS_IFW (104)
    if (_t1_42368 != 8)
    goto L6; // [77] 112
    // SubProg or_type pc: 81 op: STARTLINE (58)

    /** c_decl.e:347			if t2 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 85 op: EQUALS_IFW (104)
    if (_t2_42369 != 8)
    goto L7; // [85] 100
    // SubProg or_type pc: 89 op: STARTLINE (58)

    /** c_decl.e:348				return TYPE_SEQUENCE*/
    // SubProg or_type pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 93 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    return 8;
    // SubProg or_type pc: 97 op: ELSE (23)
    goto L2; // [97] 307
    // SubProg or_type pc: 99 op: NOP1 (159)
L7: // addr: 100 pc: 99 sub: 42366 op: 159
    // SubProg or_type pc: 100 op: STARTLINE (58)

    /** c_decl.e:350				return TYPE_OBJECT*/
    // SubProg or_type pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 104 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    return 16;
    // SubProg or_type pc: 108 op: NOP1 (159)
    // SubProg or_type pc: 109 op: ELSE (23)
    goto L2; // [109] 307
    // SubProg or_type pc: 111 op: NOP1 (159)
L6: // addr: 112 pc: 111 sub: 42366 op: 159
    // SubProg or_type pc: 112 op: STARTLINE (58)

    /** c_decl.e:353		elsif t2 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 116 op: EQUALS_IFW (104)
    if (_t2_42369 != 8)
    goto L8; // [116] 151
    // SubProg or_type pc: 120 op: STARTLINE (58)

    /** c_decl.e:354			if t1 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 124 op: EQUALS_IFW (104)
    if (_t1_42368 != 8)
    goto L9; // [124] 139
    // SubProg or_type pc: 128 op: STARTLINE (58)

    /** c_decl.e:355				return TYPE_SEQUENCE*/
    // SubProg or_type pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 132 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    return 8;
    // SubProg or_type pc: 136 op: ELSE (23)
    goto L2; // [136] 307
    // SubProg or_type pc: 138 op: NOP1 (159)
L9: // addr: 139 pc: 138 sub: 42366 op: 159
    // SubProg or_type pc: 139 op: STARTLINE (58)

    /** c_decl.e:357				return TYPE_OBJECT*/
    // SubProg or_type pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 143 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    return 16;
    // SubProg or_type pc: 147 op: NOP1 (159)
    // SubProg or_type pc: 148 op: ELSE (23)
    goto L2; // [148] 307
    // SubProg or_type pc: 150 op: NOP1 (159)
L8: // addr: 151 pc: 150 sub: 42366 op: 159
    // SubProg or_type pc: 151 op: STARTLINE (58)

    /** c_decl.e:360		elsif t1 = TYPE_ATOM or t2 = TYPE_ATOM then*/
    // SubProg or_type pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 155 op: EQUALS (3)
    _22415 = (_t1_42368 == 4);
    // SubProg or_type pc: 159 op: SC1_OR_IF (147)
    if (_22415 != 0) {
        goto LA; // [159] 174
    }
    // SubProg or_type pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 165 op: EQUALS (3)
    _22417 = (_t2_42369 == 4);
    // SubProg or_type pc: 169 op: NOP1 (159)
    // SubProg or_type pc: 170 op: IF (20)
    if (_22417 == 0)
    {
        DeRef(_22417);
        _22417 = NOVALUE;
        goto LB; // [170] 185
    }
    else{
        DeRef(_22417);
        _22417 = NOVALUE;
    }
    // SubProg or_type pc: 173 op: NOP1 (159)
LA: // addr: 174 pc: 173 sub: 42366 op: 159
    // SubProg or_type pc: 174 op: STARTLINE (58)

    /** c_decl.e:361			return TYPE_ATOM*/
    // SubProg or_type pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 178 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 4;
    // SubProg or_type pc: 182 op: ELSE (23)
    goto L2; // [182] 307
    // SubProg or_type pc: 184 op: NOP1 (159)
LB: // addr: 185 pc: 184 sub: 42366 op: 159
    // SubProg or_type pc: 185 op: STARTLINE (58)

    /** c_decl.e:363		elsif t1 = TYPE_DOUBLE then*/
    // SubProg or_type pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 189 op: EQUALS_IFW (104)
    if (_t1_42368 != 2)
    goto LC; // [189] 224
    // SubProg or_type pc: 193 op: STARTLINE (58)

    /** c_decl.e:364			if t2 = TYPE_INTEGER then*/
    // SubProg or_type pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 197 op: EQUALS_IFW (104)
    if (_t2_42369 != 1)
    goto LD; // [197] 212
    // SubProg or_type pc: 201 op: STARTLINE (58)

    /** c_decl.e:365				return TYPE_ATOM*/
    // SubProg or_type pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 205 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 4;
    // SubProg or_type pc: 209 op: ELSE (23)
    goto L2; // [209] 307
    // SubProg or_type pc: 211 op: NOP1 (159)
LD: // addr: 212 pc: 211 sub: 42366 op: 159
    // SubProg or_type pc: 212 op: STARTLINE (58)

    /** c_decl.e:367				return TYPE_DOUBLE*/
    // SubProg or_type pc: 214 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 216 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 2;
    // SubProg or_type pc: 220 op: NOP1 (159)
    // SubProg or_type pc: 221 op: ELSE (23)
    goto L2; // [221] 307
    // SubProg or_type pc: 223 op: NOP1 (159)
LC: // addr: 224 pc: 223 sub: 42366 op: 159
    // SubProg or_type pc: 224 op: STARTLINE (58)

    /** c_decl.e:370		elsif t2 = TYPE_DOUBLE then*/
    // SubProg or_type pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 228 op: EQUALS_IFW (104)
    if (_t2_42369 != 2)
    goto LE; // [228] 263
    // SubProg or_type pc: 232 op: STARTLINE (58)

    /** c_decl.e:371			if t1 = TYPE_INTEGER then*/
    // SubProg or_type pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 236 op: EQUALS_IFW (104)
    if (_t1_42368 != 1)
    goto LF; // [236] 251
    // SubProg or_type pc: 240 op: STARTLINE (58)

    /** c_decl.e:372				return TYPE_ATOM*/
    // SubProg or_type pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 244 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 4;
    // SubProg or_type pc: 248 op: ELSE (23)
    goto L2; // [248] 307
    // SubProg or_type pc: 250 op: NOP1 (159)
LF: // addr: 251 pc: 250 sub: 42366 op: 159
    // SubProg or_type pc: 251 op: STARTLINE (58)

    /** c_decl.e:374				return TYPE_DOUBLE*/
    // SubProg or_type pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 255 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 2;
    // SubProg or_type pc: 259 op: NOP1 (159)
    // SubProg or_type pc: 260 op: ELSE (23)
    goto L2; // [260] 307
    // SubProg or_type pc: 262 op: NOP1 (159)
LE: // addr: 263 pc: 262 sub: 42366 op: 159
    // SubProg or_type pc: 263 op: STARTLINE (58)

    /** c_decl.e:377		elsif t1 = TYPE_INTEGER and t2 = TYPE_INTEGER then*/
    // SubProg or_type pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 267 op: EQUALS (3)
    _22422 = (_t1_42368 == 1);
    // SubProg or_type pc: 271 op: SC1_AND_IF (146)
    if (_22422 == 0) {
        goto L10; // [271] 296
    }
    // SubProg or_type pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 277 op: EQUALS (3)
    _22424 = (_t2_42369 == 1);
    // SubProg or_type pc: 281 op: NOP1 (159)
    // SubProg or_type pc: 282 op: IF (20)
    if (_22424 == 0)
    {
        DeRef(_22424);
        _22424 = NOVALUE;
        goto L10; // [282] 296
    }
    else{
        DeRef(_22424);
        _22424 = NOVALUE;
    }
    // SubProg or_type pc: 285 op: STARTLINE (58)

    /** c_decl.e:378			return TYPE_INTEGER*/
    // SubProg or_type pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 289 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42368

// block var t2_42369
    DeRef(_22408);
    _22408 = NOVALUE;
    DeRef(_22422);
    _22422 = NOVALUE;
    DeRef(_22415);
    _22415 = NOVALUE;
    return 1;
    // SubProg or_type pc: 293 op: ELSE (23)
    goto L2; // [293] 307
    // SubProg or_type pc: 295 op: NOP1 (159)
L10: // addr: 296 pc: 295 sub: 42366 op: 159
    // SubProg or_type pc: 296 op: STARTLINE (58)

    /** c_decl.e:381			InternalErr(258, {t1, t2})*/
    // SubProg or_type pc: 298 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _t1_42368;
    ((intptr_t *)_2)[2] = _t2_42369;
    _22425 = MAKE_SEQ(_1);
    // SubProg or_type pc: 302 op: PROC (27)
    _50InternalErr(258, _22425);
    _22425 = NOVALUE;
    // SubProg or_type pc: 306 op: NOP1 (159)
L2: // addr: 307 pc: 306 sub: 42366 op: 159
    // SubProg or_type pc: 307 op: BADRETURNF (43)
    ;
}


void _58RemoveFromBB(object _s_42439)
{
    object _int_42440 = NOVALUE;
// skipping _22430  name type: 0
// skipping _22429  name type: 0
// skipping _22428  name type: 0
    object _22427 = NOVALUE; // 42444 22427
    object _22426 = NOVALUE; // 42443 22426
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg RemoveFromBB pc: 1 op: INTEGER_CHECK (96)
    // SubProg RemoveFromBB pc: 3 op: STARTLINE (58)

    /** c_decl.e:388		for i = 1 to length(BB_info) do*/
    // SubProg RemoveFromBB pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg RemoveFromBB pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22426 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22426 = 1;
    }
    // SubProg RemoveFromBB pc: 10 op: FOR_I (125)
    {
        object _i_42442;
        _i_42442 = 1;
L1: // addr: 17 pc: 10 sub: 42436 op: 125
        if (_i_42442 > _22426){
            goto L2; // [10] 59
        }
        // SubProg RemoveFromBB pc: 17 op: STARTLINE (58)

        /** c_decl.e:389			int = BB_info[i][BB_VAR]*/
        // SubProg RemoveFromBB pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg RemoveFromBB pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_58BB_info_42082);
        _22427 = (object)*(((s1_ptr)_2)->base + _i_42442);
        // SubProg RemoveFromBB pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22427);
        _int_42440 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_int_42440)){
            _int_42440 = (object)DBL_PTR(_int_42440)->dbl;
        }
        _22427 = NOVALUE;
        // SubProg RemoveFromBB pc: 31 op: STARTLINE (58)

        /** c_decl.e:390			if int = s then*/
        // SubProg RemoveFromBB pc: 33 op: EQUALS_IFW (104)
        if (_int_42440 != _s_42439)
        goto L3; // [33] 52
        // SubProg RemoveFromBB pc: 37 op: STARTLINE (58)

        /** c_decl.e:391				BB_info = remove( BB_info, int )*/
        // SubProg RemoveFromBB pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg RemoveFromBB pc: 41 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_58BB_info_42082);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_int_42440)) ? _int_42440 : (object)(DBL_PTR(_int_42440)->dbl);
            int stop = (IS_ATOM_INT(_int_42440)) ? _int_42440 : (object)(DBL_PTR(_int_42440)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_58BB_info_42082), start, &_58BB_info_42082 );
                }
                else Tail(SEQ_PTR(_58BB_info_42082), stop+1, &_58BB_info_42082);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_58BB_info_42082), start, &_58BB_info_42082);
            }
            else {
                assign_slice_seq = &assign_space;
                _58BB_info_42082 = Remove_elements(start, stop, (SEQ_PTR(_58BB_info_42082)->ref == 1));
            }
        }
        // SubProg RemoveFromBB pc: 46 op: STARTLINE (58)

        /** c_decl.e:392				return*/
        // SubProg RemoveFromBB pc: 48 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: RemoveFromBB

// block var s_42439

// block var int_42440
        return;
        // SubProg RemoveFromBB pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 42436 op: 159
        // SubProg RemoveFromBB pc: 52 op: STARTLINE (58)

        /** c_decl.e:394		end for*/
        // SubProg RemoveFromBB pc: 54 op: ENDFOR_INT_UP1 (54)
        _i_42442 = _i_42442 + 1;
        goto L1; // [54] 17
L2: // addr: 59 pc: 54 sub: 42436 op: 54
        ;
    }
    // SubProg RemoveFromBB pc: 59 op: STARTLINE (58)

    /** c_decl.e:395	end procedure*/
    // SubProg RemoveFromBB pc: 61 op: RETURNP (29)

// Exiting block BLOCK: RemoveFromBB

// block var s_42439

// block var int_42440
    return;
    // SubProg RemoveFromBB pc: 64 op: BADRETURNF (43)
    ;
}


void _58SetBBType(object _s_42460, object _t_42461, object _val_42462, object _etype_42463, object _has_delete_42464)
{
    object _found_42465 = NOVALUE;
    object _i_42466 = NOVALUE;
    object _tn_42467 = NOVALUE;
    object _int_42468 = NOVALUE;
    object _sym_42469 = NOVALUE;
    object _mode_42474 = NOVALUE;
    object _gtype_42489 = NOVALUE;
    object _new_type_42526 = NOVALUE;
    object _bbsym_42549 = NOVALUE;
    object _bbi_42685 = NOVALUE;
    object _22546 = NOVALUE; // 42753 22546
    object _22545 = NOVALUE; // 42750 22545
    object _22544 = NOVALUE; // 42746 22544
// skipping _22543  name type: 0
    object _22542 = NOVALUE; // 42739 22542
    object _22541 = NOVALUE; // 42736 22541
    object _22540 = NOVALUE; // 42734 22540
// skipping _22539  name type: 0
    object _22538 = NOVALUE; // 42731 22538
    object _22537 = NOVALUE; // 42729 22537
// skipping _22536  name type: 0
    object _22535 = NOVALUE; // 42720 22535
// skipping _22534  name type: 0
    object _22533 = NOVALUE; // 42715 22533
    object _22532 = NOVALUE; // 42712 22532
// skipping _22531  name type: 0
    object _22530 = NOVALUE; // 42709 22530
// skipping _22529  name type: 0
    object _22528 = NOVALUE; // 42700 22528
    object _22527 = NOVALUE; // 42699 22527
    object _22526 = NOVALUE; // 42698 22526
    object _22525 = NOVALUE; // 42696 22525
    object _22524 = NOVALUE; // 42695 22524
    object _22523 = NOVALUE; // 42693 22523
    object _22522 = NOVALUE; // 42692 22522
    object _22521 = NOVALUE; // 42690 22521
    object _22520 = NOVALUE; // 42689 22520
// skipping _22519  name type: 0
// skipping _22518  name type: 0
    object _22517 = NOVALUE; // 42682 22517
// skipping _22516  name type: 0
// skipping _22515  name type: 0
// skipping _22514  name type: 0
    object _22513 = NOVALUE; // 42675 22513
// skipping _22512  name type: 0
// skipping _22511  name type: 0
// skipping _22510  name type: 0
// skipping _22509  name type: 0
    object _22508 = NOVALUE; // 42667 22508
// skipping _22507  name type: 0
    object _22506 = NOVALUE; // 42665 22506
    object _22505 = NOVALUE; // 42661 22505
    object _22504 = NOVALUE; // 42660 22504
// skipping _22503  name type: 0
    object _22502 = NOVALUE; // 42651 22502
// skipping _22501  name type: 0
    object _22500 = NOVALUE; // 42647 22500
    object _22499 = NOVALUE; // 42645 22499
    object _22498 = NOVALUE; // 42642 22498
// skipping _22497  name type: 0
    object _22496 = NOVALUE; // 42638 22496
    object _22495 = NOVALUE; // 42636 22495
// skipping _22494  name type: 0
    object _22493 = NOVALUE; // 42631 22493
    object _22492 = NOVALUE; // 42628 22492
    object _22491 = NOVALUE; // 42625 22491
// skipping _22490  name type: 0
    object _22489 = NOVALUE; // 42621 22489
    object _22488 = NOVALUE; // 42619 22488
// skipping _22487  name type: 0
// skipping _22486  name type: 0
    object _22485 = NOVALUE; // 42610 22485
    object _22484 = NOVALUE; // 42608 22484
    object _22483 = NOVALUE; // 42605 22483
// skipping _22482  name type: 0
    object _22481 = NOVALUE; // 42598 22481
// skipping _22480  name type: 0
    object _22479 = NOVALUE; // 42594 22479
    object _22478 = NOVALUE; // 42592 22478
// skipping _22477  name type: 0
    object _22476 = NOVALUE; // 42588 22476
    object _22475 = NOVALUE; // 42585 22475
    object _22474 = NOVALUE; // 42584 22474
// skipping _22473  name type: 0
    object _22472 = NOVALUE; // 42578 22472
    object _22471 = NOVALUE; // 42577 22471
// skipping _22470  name type: 0
// skipping _22469  name type: 0
// skipping _22468  name type: 0
// skipping _22467  name type: 0
// skipping _22466  name type: 0
// skipping _22465  name type: 0
// skipping _22464  name type: 0
// skipping _22463  name type: 0
// skipping _22462  name type: 0
// skipping _22461  name type: 0
    object _22460 = NOVALUE; // 42550 22460
// skipping _22459  name type: 0
    object _22458 = NOVALUE; // 42547 22458
// skipping _22457  name type: 0
// skipping _22456  name type: 0
    object _22455 = NOVALUE; // 42541 22455
    object _22454 = NOVALUE; // 42540 22454
// skipping _22453  name type: 0
// skipping _22452  name type: 0
    object _22451 = NOVALUE; // 42532 22451
    object _22450 = NOVALUE; // 42530 22450
    object _22449 = NOVALUE; // 42529 22449
// skipping _22448  name type: 0
    object _22447 = NOVALUE; // 42520 22447
    object _22446 = NOVALUE; // 42517 22446
    object _22445 = NOVALUE; // 42507 22445
// skipping _22444  name type: 0
    object _22443 = NOVALUE; // 42500 22443
    object _22442 = NOVALUE; // 42497 22442
// skipping _22441  name type: 0
    object _22440 = NOVALUE; // 42494 22440
// skipping _22439  name type: 0
// skipping _22438  name type: 0
    object _22437 = NOVALUE; // 42482 22437
// skipping _22436  name type: 0
    object _22435 = NOVALUE; // 42479 22435
// skipping _22434  name type: 0
// skipping _22433  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg SetBBType pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42460)) {
        _1 = (object)(DBL_PTR(_s_42460)->dbl);
        DeRefDS(_s_42460);
        _s_42460 = _1;
    }
    // SubProg SetBBType pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_42461)) {
        _1 = (object)(DBL_PTR(_t_42461)->dbl);
        DeRefDS(_t_42461);
        _t_42461 = _1;
    }
    // SubProg SetBBType pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_etype_42463)) {
        _1 = (object)(DBL_PTR(_etype_42463)->dbl);
        DeRefDS(_etype_42463);
        _etype_42463 = _1;
    }
    // SubProg SetBBType pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_has_delete_42464)) {
        _1 = (object)(DBL_PTR(_has_delete_42464)->dbl);
        DeRefDS(_has_delete_42464);
        _has_delete_42464 = _1;
    }
    // SubProg SetBBType pc: 11 op: STARTLINE (58)

    /** c_decl.e:416		if has_delete then*/
    // SubProg SetBBType pc: 13 op: IF (20)
    if (_has_delete_42464 == 0)
    {
        goto L1; // [13] 27
    }
    else{
    }
    // SubProg SetBBType pc: 16 op: STARTLINE (58)

    /** c_decl.e:417			p_has_delete = 1*/
    // SubProg SetBBType pc: 18 op: ASSIGN_I (113)
    _58p_has_delete_42279 = 1;
    // SubProg SetBBType pc: 21 op: STARTLINE (58)

    /** c_decl.e:418			g_has_delete = 1*/
    // SubProg SetBBType pc: 23 op: ASSIGN_I (113)
    _58g_has_delete_42278 = 1;
    // SubProg SetBBType pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 42457 op: 159
    // SubProg SetBBType pc: 27 op: STARTLINE (58)

    /** c_decl.e:421		sym = SymTab[s]*/
    // SubProg SetBBType pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 31 op: RHS_SUBS_CHECK (92)
    DeRef(_sym_42469);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _sym_42469 = (object)*(((s1_ptr)_2)->base + _s_42460);
    Ref(_sym_42469);
    // SubProg SetBBType pc: 35 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 37 op: STARTLINE (58)

    /** c_decl.e:422		SymTab[s] = 0*/
    // SubProg SetBBType pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 41 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42460);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 45 op: STARTLINE (58)

    /** c_decl.e:424		integer mode = sym[S_MODE]*/
    // SubProg SetBBType pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 49 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42469);
    _mode_42474 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42474))
    _mode_42474 = (object)DBL_PTR(_mode_42474)->dbl;
    // SubProg SetBBType pc: 53 op: STARTLINE (58)

    /** c_decl.e:425		if mode = M_NORMAL or mode = M_TEMP  then*/
    // SubProg SetBBType pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 57 op: EQUALS (3)
    _22435 = (_mode_42474 == 1);
    // SubProg SetBBType pc: 61 op: SC1_OR_IF (147)
    if (_22435 != 0) {
        goto L2; // [61] 76
    }
    // SubProg SetBBType pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 67 op: EQUALS (3)
    _22437 = (_mode_42474 == 3);
    // SubProg SetBBType pc: 71 op: NOP1 (159)
    // SubProg SetBBType pc: 72 op: IF (20)
    if (_22437 == 0)
    {
        DeRef(_22437);
        _22437 = NOVALUE;
        goto L3; // [72] 1167
    }
    else{
        DeRef(_22437);
        _22437 = NOVALUE;
    }
    // SubProg SetBBType pc: 75 op: NOP1 (159)
L2: // addr: 76 pc: 75 sub: 42457 op: 159
    // SubProg SetBBType pc: 76 op: STARTLINE (58)

    /** c_decl.e:427			found = FALSE*/
    // SubProg SetBBType pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 80 op: ASSIGN (18)
    _found_42465 = _13FALSE_450;
    // SubProg SetBBType pc: 83 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 85 op: STARTLINE (58)

    /** c_decl.e:428			if mode = M_TEMP then*/
    // SubProg SetBBType pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 89 op: EQUALS_IFW (104)
    if (_mode_42474 != 3)
    goto L4; // [89] 465
    // SubProg SetBBType pc: 93 op: STARTLINE (58)

    /** c_decl.e:429				sym[S_GTYPE] = t*/
    // SubProg SetBBType pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 97 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42461;
    DeRef(_1);
    // SubProg SetBBType pc: 101 op: STARTLINE (58)

    /** c_decl.e:430				sym[S_SEQ_ELEM] = etype*/
    // SubProg SetBBType pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 105 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42463;
    DeRef(_1);
    // SubProg SetBBType pc: 109 op: STARTLINE (58)

    /** c_decl.e:431				integer gtype = sym[S_GTYPE]*/
    // SubProg SetBBType pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 113 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42469);
    _gtype_42489 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_gtype_42489))
    _gtype_42489 = (object)DBL_PTR(_gtype_42489)->dbl;
    // SubProg SetBBType pc: 117 op: STARTLINE (58)

    /** c_decl.e:432				if gtype = TYPE_OBJECT*/
    // SubProg SetBBType pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 121 op: EQUALS (3)
    _22440 = (_gtype_42489 == 16);
    // SubProg SetBBType pc: 125 op: SC1_OR_IF (147)
    if (_22440 != 0) {
        goto L5; // [125] 140
    }
    // SubProg SetBBType pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 131 op: EQUALS (3)
    _22442 = (_gtype_42489 == 8);
    // SubProg SetBBType pc: 135 op: NOP1 (159)
    // SubProg SetBBType pc: 136 op: IF (20)
    if (_22442 == 0)
    {
        DeRef(_22442);
        _22442 = NOVALUE;
        goto L6; // [136] 213
    }
    else{
        DeRef(_22442);
        _22442 = NOVALUE;
    }
    // SubProg SetBBType pc: 139 op: NOP1 (159)
L5: // addr: 140 pc: 139 sub: 42457 op: 159
    // SubProg SetBBType pc: 140 op: STARTLINE (58)

    /** c_decl.e:435					if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 144 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22443 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 148 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22443, 0)){
        _22443 = NOVALUE;
        goto L7; // [148] 165
    }
    _22443 = NOVALUE;
    // SubProg SetBBType pc: 152 op: STARTLINE (58)

    /** c_decl.e:436						sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 158 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 162 op: ELSE (23)
    goto L8; // [162] 180
    // SubProg SetBBType pc: 164 op: NOP1 (159)
L7: // addr: 165 pc: 164 sub: 42457 op: 159
    // SubProg SetBBType pc: 165 op: STARTLINE (58)

    /** c_decl.e:438						sym[S_SEQ_LEN] = val[MIN]*/
    // SubProg SetBBType pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 171 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22445 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 175 op: ASSIGN_SUBS (16)
    Ref(_22445);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22445;
    if( _1 != _22445 ){
        DeRef(_1);
    }
    _22445 = NOVALUE;
    // SubProg SetBBType pc: 179 op: NOP1 (159)
L8: // addr: 180 pc: 179 sub: 42457 op: 159
    // SubProg SetBBType pc: 180 op: STARTLINE (58)

    /** c_decl.e:440					sym[S_OBJ] = NOVALUE*/
    // SubProg SetBBType pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 186 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 190 op: STARTLINE (58)

    /** c_decl.e:442					sym[S_OBJ_MIN] = NOVALUE*/
    // SubProg SetBBType pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 196 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 200 op: STARTLINE (58)

    /** c_decl.e:443					sym[S_OBJ_MAX] = NOVALUE*/
    // SubProg SetBBType pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 206 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 210 op: ELSE (23)
    goto L9; // [210] 252
    // SubProg SetBBType pc: 212 op: NOP1 (159)
L6: // addr: 213 pc: 212 sub: 42457 op: 159
    // SubProg SetBBType pc: 213 op: STARTLINE (58)

    /** c_decl.e:445					sym[S_OBJ_MIN] = val[MIN]*/
    // SubProg SetBBType pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 219 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22446 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 223 op: ASSIGN_SUBS (16)
    Ref(_22446);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22446;
    if( _1 != _22446 ){
        DeRef(_1);
    }
    _22446 = NOVALUE;
    // SubProg SetBBType pc: 227 op: STARTLINE (58)

    /** c_decl.e:446					sym[S_OBJ_MAX] = val[MAX]*/
    // SubProg SetBBType pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22447 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 237 op: ASSIGN_SUBS (16)
    Ref(_22447);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22447;
    if( _1 != _22447 ){
        DeRef(_1);
    }
    _22447 = NOVALUE;
    // SubProg SetBBType pc: 241 op: STARTLINE (58)

    /** c_decl.e:447					sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 245 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 247 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 251 op: NOP1 (159)
L9: // addr: 252 pc: 251 sub: 42457 op: 159
    // SubProg SetBBType pc: 252 op: STARTLINE (58)

    /** c_decl.e:449				if not Initializing then*/
    // SubProg SetBBType pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 256 op: NOT_IFW (108)
    if (_36Initializing_16516 != 0)
    goto LA; // [256] 326
    // SubProg SetBBType pc: 259 op: STARTLINE (58)

    /** c_decl.e:450					integer new_type = or_type(temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW], t)*/
    // SubProg SetBBType pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 265 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22449 = (object)*(((s1_ptr)_2)->base + 34);
    // SubProg SetBBType pc: 269 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36temp_name_type_16518);
    if (!IS_ATOM_INT(_22449)){
        _22450 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22449)->dbl));
    }
    else{
        _22450 = (object)*(((s1_ptr)_2)->base + _22449);
    }
    // SubProg SetBBType pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 275 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22450);
    _22451 = (object)*(((s1_ptr)_2)->base + 2);
    _22450 = NOVALUE;
    // SubProg SetBBType pc: 279 op: PROC (27)
    Ref(_22451);
    _new_type_42526 = _58or_type(_22451, _t_42461);
    _22451 = NOVALUE;
    // SubProg SetBBType pc: 284 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_type_42526)) {
        _1 = (object)(DBL_PTR(_new_type_42526)->dbl);
        DeRefDS(_new_type_42526);
        _new_type_42526 = _1;
    }
    // SubProg SetBBType pc: 286 op: STARTLINE (58)

    /** c_decl.e:451					if new_type = TYPE_NULL then*/
    // SubProg SetBBType pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 290 op: EQUALS_IFW (104)
    if (_new_type_42526 != 0)
    goto LB; // [290] 304
    // SubProg SetBBType pc: 294 op: STARTLINE (58)

    /** c_decl.e:452						new_type = TYPE_OBJECT*/
    // SubProg SetBBType pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 298 op: ASSIGN (18)
    _new_type_42526 = 16;
    // SubProg SetBBType pc: 301 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 303 op: NOP1 (159)
LB: // addr: 304 pc: 303 sub: 42457 op: 159
    // SubProg SetBBType pc: 304 op: STARTLINE (58)

    /** c_decl.e:454					temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW] = new_type*/
    // SubProg SetBBType pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 308 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 310 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22454 = (object)*(((s1_ptr)_2)->base + 34);
    // SubProg SetBBType pc: 314 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_36temp_name_type_16518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36temp_name_type_16518 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_22454))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_22454)->dbl));
    else
    _3 = (object)(_22454 + ((s1_ptr)_2)->base);
    // SubProg SetBBType pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 321 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_type_42526;
    DeRef(_1);
    _22455 = NOVALUE;
    // SubProg SetBBType pc: 325 op: NOP1 (159)
LA: // addr: 326 pc: 325 sub: 42457 op: 159
    // SubProg SetBBType pc: 326 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var new_type_42526
    // SubProg SetBBType pc: 328 op: STARTLINE (58)

    /** c_decl.e:458				tn = sym[S_TEMP_NAME]*/
    // SubProg SetBBType pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 332 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42469);
    _tn_42467 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_tn_42467))
    _tn_42467 = (object)DBL_PTR(_tn_42467)->dbl;
    // SubProg SetBBType pc: 336 op: STARTLINE (58)

    /** c_decl.e:459				i = 1*/
    // SubProg SetBBType pc: 338 op: ASSIGN_I (113)
    _i_42466 = 1;
    // SubProg SetBBType pc: 341 op: STARTLINE (58)

    /** c_decl.e:460				while i <= length(BB_info) do*/
    // SubProg SetBBType pc: 343 op: NOP2 (110)
    // SubProg SetBBType pc: 345 op: NOPWHILE (158)
LC: // addr: 346 pc: 345 sub: 42457 op: 158
    // SubProg SetBBType pc: 346 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 348 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22458 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22458 = 1;
    }
    // SubProg SetBBType pc: 351 op: LESSEQ_IFW_I (123)
    if (_i_42466 > _22458)
    goto LD; // [351] 460
    // SubProg SetBBType pc: 355 op: STARTLINE (58)

    /** c_decl.e:461					sequence bbsym*/
    // SubProg SetBBType pc: 357 op: STARTLINE (58)

    /** c_decl.e:462					int = BB_info[i][BB_VAR]*/
    // SubProg SetBBType pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 361 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    _22460 = (object)*(((s1_ptr)_2)->base + _i_42466);
    // SubProg SetBBType pc: 365 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22460);
    _int_42468 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42468)){
        _int_42468 = (object)DBL_PTR(_int_42468)->dbl;
    }
    _22460 = NOVALUE;
    // SubProg SetBBType pc: 371 op: STARTLINE (58)

    /** c_decl.e:463					if int = s then*/
    // SubProg SetBBType pc: 373 op: EQUALS_IFW (104)
    if (_int_42468 != _s_42460)
    goto LE; // [373] 387
    // SubProg SetBBType pc: 377 op: STARTLINE (58)

    /** c_decl.e:464						bbsym = sym*/
    // SubProg SetBBType pc: 379 op: ASSIGN (18)
    RefDS(_sym_42469);
    DeRef(_bbsym_42549);
    _bbsym_42549 = _sym_42469;
    // SubProg SetBBType pc: 382 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 384 op: ELSE (23)
    goto LF; // [384] 398
    // SubProg SetBBType pc: 386 op: NOP1 (159)
LE: // addr: 387 pc: 386 sub: 42457 op: 159
    // SubProg SetBBType pc: 387 op: STARTLINE (58)

    /** c_decl.e:466						bbsym = SymTab[int]*/
    // SubProg SetBBType pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 391 op: RHS_SUBS_CHECK (92)
    DeRef(_bbsym_42549);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _bbsym_42549 = (object)*(((s1_ptr)_2)->base + _int_42468);
    Ref(_bbsym_42549);
    // SubProg SetBBType pc: 395 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 397 op: NOP1 (159)
LF: // addr: 398 pc: 397 sub: 42457 op: 159
    // SubProg SetBBType pc: 398 op: STARTLINE (58)

    /** c_decl.e:468					int = bbsym[S_MODE]*/
    // SubProg SetBBType pc: 400 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 402 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 404 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_bbsym_42549);
    _int_42468 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_int_42468))
    _int_42468 = (object)DBL_PTR(_int_42468)->dbl;
    // SubProg SetBBType pc: 408 op: STARTLINE (58)

    /** c_decl.e:469					if int = M_TEMP then*/
    // SubProg SetBBType pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 412 op: EQUALS_IFW (104)
    if (_int_42468 != 3)
    goto L10; // [412] 447
    // SubProg SetBBType pc: 416 op: STARTLINE (58)

    /** c_decl.e:470						int = bbsym[S_TEMP_NAME]*/
    // SubProg SetBBType pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 420 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_bbsym_42549);
    _int_42468 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_int_42468))
    _int_42468 = (object)DBL_PTR(_int_42468)->dbl;
    // SubProg SetBBType pc: 424 op: STARTLINE (58)

    /** c_decl.e:471						if int = tn then*/
    // SubProg SetBBType pc: 426 op: EQUALS_IFW_I (121)
    if (_int_42468 != _tn_42467)
    goto L11; // [426] 446
    // SubProg SetBBType pc: 430 op: STARTLINE (58)

    /** c_decl.e:472							found = TRUE*/
    // SubProg SetBBType pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 434 op: ASSIGN (18)
    _found_42465 = _13TRUE_452;
    // SubProg SetBBType pc: 437 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 439 op: STARTLINE (58)

    /** c_decl.e:473							exit*/
    // SubProg SetBBType pc: 441 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var bbsym_42549
    DeRefDS(_bbsym_42549);
    _bbsym_42549 = NOVALUE;
    // SubProg SetBBType pc: 443 op: EXIT (61)
    goto LD; // [443] 460
    // SubProg SetBBType pc: 445 op: NOP1 (159)
L11: // addr: 446 pc: 445 sub: 42457 op: 159
    // SubProg SetBBType pc: 446 op: NOP1 (159)
L10: // addr: 447 pc: 446 sub: 42457 op: 159
    // SubProg SetBBType pc: 447 op: STARTLINE (58)

    /** c_decl.e:476					i += 1*/
    // SubProg SetBBType pc: 449 op: PLUS1_I (117)
    _i_42466 = _i_42466 + 1;
    // SubProg SetBBType pc: 453 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var bbsym_42549
    DeRef(_bbsym_42549);
    _bbsym_42549 = NOVALUE;
    // SubProg SetBBType pc: 455 op: STARTLINE (58)

    /** c_decl.e:477				end while*/
    // SubProg SetBBType pc: 457 op: ENDWHILE (22)
    goto LC; // [457] 346
    // SubProg SetBBType pc: 459 op: NOP1 (159)
LD: // addr: 460 pc: 459 sub: 42457 op: 159
    // SubProg SetBBType pc: 460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var gtype_42489
    // SubProg SetBBType pc: 462 op: ELSE (23)
    goto L12; // [462] 889
    // SubProg SetBBType pc: 464 op: NOP1 (159)
L4: // addr: 465 pc: 464 sub: 42457 op: 159
    // SubProg SetBBType pc: 465 op: STARTLINE (58)

    /** c_decl.e:479				if t != TYPE_NULL then*/
    // SubProg SetBBType pc: 467 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 469 op: NOTEQ_IFW (105)
    if (_t_42461 == 0)
    goto L13; // [469] 824
    // SubProg SetBBType pc: 473 op: STARTLINE (58)

    /** c_decl.e:480					if not Initializing then*/
    // SubProg SetBBType pc: 475 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 477 op: NOT_IFW (108)
    if (_36Initializing_16516 != 0)
    goto L14; // [477] 500
    // SubProg SetBBType pc: 480 op: STARTLINE (58)

    /** c_decl.e:481						sym[S_GTYPE_NEW] = or_type(sym[S_GTYPE_NEW], t)*/
    // SubProg SetBBType pc: 482 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 484 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 486 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22471 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg SetBBType pc: 490 op: PROC (27)
    Ref(_22471);
    _22472 = _58or_type(_22471, _t_42461);
    _22471 = NOVALUE;
    // SubProg SetBBType pc: 495 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22472;
    if( _1 != _22472 ){
        DeRef(_1);
    }
    _22472 = NOVALUE;
    // SubProg SetBBType pc: 499 op: NOP1 (159)
L14: // addr: 500 pc: 499 sub: 42457 op: 159
    // SubProg SetBBType pc: 500 op: STARTLINE (58)

    /** c_decl.e:484					if t = TYPE_SEQUENCE then*/
    // SubProg SetBBType pc: 502 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 504 op: EQUALS_IFW (104)
    if (_t_42461 != 8)
    goto L15; // [504] 633
    // SubProg SetBBType pc: 508 op: STARTLINE (58)

    /** c_decl.e:485						sym[S_SEQ_ELEM_NEW] =*/
    // SubProg SetBBType pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 512 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 514 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22474 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg SetBBType pc: 518 op: PROC (27)
    Ref(_22474);
    _22475 = _58or_type(_22474, _etype_42463);
    _22474 = NOVALUE;
    // SubProg SetBBType pc: 523 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22475;
    if( _1 != _22475 ){
        DeRef(_1);
    }
    _22475 = NOVALUE;
    // SubProg SetBBType pc: 527 op: STARTLINE (58)

    /** c_decl.e:488						if val[MIN] != -1 then*/
    // SubProg SetBBType pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 531 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22476 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 535 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22476, -1)){
        _22476 = NOVALUE;
        goto L16; // [535] 823
    }
    _22476 = NOVALUE;
    // SubProg SetBBType pc: 539 op: STARTLINE (58)

    /** c_decl.e:489							if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg SetBBType pc: 541 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 543 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22478 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg SetBBType pc: 547 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 549 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22479 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22479 = - _36NOVALUE_16291;
        }
    }
    else {
        _22479 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg SetBBType pc: 552 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22478, _22479)){
        _22478 = NOVALUE;
        DeRef(_22479);
        _22479 = NOVALUE;
        goto L17; // [552] 599
    }
    _22478 = NOVALUE;
    DeRef(_22479);
    _22479 = NOVALUE;
    // SubProg SetBBType pc: 556 op: STARTLINE (58)

    /** c_decl.e:490								if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 560 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22481 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 564 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22481, 0)){
        _22481 = NOVALUE;
        goto L18; // [564] 581
    }
    _22481 = NOVALUE;
    // SubProg SetBBType pc: 568 op: STARTLINE (58)

    /** c_decl.e:491									sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 570 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 572 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 574 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 578 op: ELSE (23)
    goto L16; // [578] 823
    // SubProg SetBBType pc: 580 op: NOP1 (159)
L18: // addr: 581 pc: 580 sub: 42457 op: 159
    // SubProg SetBBType pc: 581 op: STARTLINE (58)

    /** c_decl.e:493									sym[S_SEQ_LEN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 583 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 587 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22483 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 591 op: ASSIGN_SUBS (16)
    Ref(_22483);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22483;
    if( _1 != _22483 ){
        DeRef(_1);
    }
    _22483 = NOVALUE;
    // SubProg SetBBType pc: 595 op: NOP1 (159)
    // SubProg SetBBType pc: 596 op: ELSE (23)
    goto L16; // [596] 823
    // SubProg SetBBType pc: 598 op: NOP1 (159)
L17: // addr: 599 pc: 598 sub: 42457 op: 159
    // SubProg SetBBType pc: 599 op: STARTLINE (58)

    /** c_decl.e:495							elsif val[MIN] != sym[S_SEQ_LEN_NEW] then*/
    // SubProg SetBBType pc: 601 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 603 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22484 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 607 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 609 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22485 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg SetBBType pc: 613 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22484, _22485)){
        _22484 = NOVALUE;
        _22485 = NOVALUE;
        goto L16; // [613] 823
    }
    _22484 = NOVALUE;
    _22485 = NOVALUE;
    // SubProg SetBBType pc: 617 op: STARTLINE (58)

    /** c_decl.e:496								sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 619 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 621 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 623 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 627 op: NOP1 (159)
    // SubProg SetBBType pc: 628 op: NOP1 (159)
    // SubProg SetBBType pc: 629 op: NOP1 (159)
    // SubProg SetBBType pc: 630 op: ELSE (23)
    goto L16; // [630] 823
    // SubProg SetBBType pc: 632 op: NOP1 (159)
L15: // addr: 633 pc: 632 sub: 42457 op: 159
    // SubProg SetBBType pc: 633 op: STARTLINE (58)

    /** c_decl.e:500					elsif t = TYPE_INTEGER then*/
    // SubProg SetBBType pc: 635 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 637 op: EQUALS_IFW (104)
    if (_t_42461 != 1)
    goto L19; // [637] 774
    // SubProg SetBBType pc: 641 op: STARTLINE (58)

    /** c_decl.e:502						if sym[S_OBJ_MIN_NEW] = -NOVALUE then*/
    // SubProg SetBBType pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 645 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22488 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 649 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 651 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22489 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22489 = - _36NOVALUE_16291;
        }
    }
    else {
        _22489 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg SetBBType pc: 654 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22488, _22489)){
        _22488 = NOVALUE;
        DeRef(_22489);
        _22489 = NOVALUE;
        goto L1A; // [654] 689
    }
    _22488 = NOVALUE;
    DeRef(_22489);
    _22489 = NOVALUE;
    // SubProg SetBBType pc: 658 op: STARTLINE (58)

    /** c_decl.e:504							sym[S_OBJ_MIN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 660 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 664 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22491 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 668 op: ASSIGN_SUBS (16)
    Ref(_22491);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22491;
    if( _1 != _22491 ){
        DeRef(_1);
    }
    _22491 = NOVALUE;
    // SubProg SetBBType pc: 672 op: STARTLINE (58)

    /** c_decl.e:505							sym[S_OBJ_MAX_NEW] = val[MAX]*/
    // SubProg SetBBType pc: 674 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 676 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 678 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22492 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 682 op: ASSIGN_SUBS (16)
    Ref(_22492);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22492;
    if( _1 != _22492 ){
        DeRef(_1);
    }
    _22492 = NOVALUE;
    // SubProg SetBBType pc: 686 op: ELSE (23)
    goto L16; // [686] 823
    // SubProg SetBBType pc: 688 op: NOP1 (159)
L1A: // addr: 689 pc: 688 sub: 42457 op: 159
    // SubProg SetBBType pc: 689 op: STARTLINE (58)

    /** c_decl.e:507						elsif sym[S_OBJ_MIN_NEW] != NOVALUE then*/
    // SubProg SetBBType pc: 691 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 693 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22493 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 697 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 699 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22493, _36NOVALUE_16291)){
        _22493 = NOVALUE;
        goto L16; // [699] 823
    }
    _22493 = NOVALUE;
    // SubProg SetBBType pc: 703 op: STARTLINE (58)

    /** c_decl.e:509							if val[MIN] < sym[S_OBJ_MIN_NEW] then*/
    // SubProg SetBBType pc: 705 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 707 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22495 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 713 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22496 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 717 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22495, _22496)){
        _22495 = NOVALUE;
        _22496 = NOVALUE;
        goto L1B; // [717] 736
    }
    _22495 = NOVALUE;
    _22496 = NOVALUE;
    // SubProg SetBBType pc: 721 op: STARTLINE (58)

    /** c_decl.e:510								sym[S_OBJ_MIN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 725 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 727 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22498 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 731 op: ASSIGN_SUBS (16)
    Ref(_22498);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22498;
    if( _1 != _22498 ){
        DeRef(_1);
    }
    _22498 = NOVALUE;
    // SubProg SetBBType pc: 735 op: NOP1 (159)
L1B: // addr: 736 pc: 735 sub: 42457 op: 159
    // SubProg SetBBType pc: 736 op: STARTLINE (58)

    /** c_decl.e:512							if val[MAX] > sym[S_OBJ_MAX_NEW] then*/
    // SubProg SetBBType pc: 738 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 740 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22499 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 744 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 746 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22500 = (object)*(((s1_ptr)_2)->base + 42);
    // SubProg SetBBType pc: 750 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _22499, _22500)){
        _22499 = NOVALUE;
        _22500 = NOVALUE;
        goto L16; // [750] 823
    }
    _22499 = NOVALUE;
    _22500 = NOVALUE;
    // SubProg SetBBType pc: 754 op: STARTLINE (58)

    /** c_decl.e:513								sym[S_OBJ_MAX_NEW] = val[MAX]*/
    // SubProg SetBBType pc: 756 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 760 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22502 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 764 op: ASSIGN_SUBS (16)
    Ref(_22502);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22502;
    if( _1 != _22502 ){
        DeRef(_1);
    }
    _22502 = NOVALUE;
    // SubProg SetBBType pc: 768 op: NOP1 (159)
    // SubProg SetBBType pc: 769 op: NOP1 (159)
    // SubProg SetBBType pc: 770 op: NOP1 (159)
    // SubProg SetBBType pc: 771 op: ELSE (23)
    goto L16; // [771] 823
    // SubProg SetBBType pc: 773 op: NOP1 (159)
L19: // addr: 774 pc: 773 sub: 42457 op: 159
    // SubProg SetBBType pc: 774 op: STARTLINE (58)

    /** c_decl.e:518						sym[S_OBJ_MIN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 778 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 780 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 784 op: STARTLINE (58)

    /** c_decl.e:519						if t = TYPE_OBJECT then*/
    // SubProg SetBBType pc: 786 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 788 op: EQUALS_IFW (104)
    if (_t_42461 != 16)
    goto L1C; // [788] 822
    // SubProg SetBBType pc: 792 op: STARTLINE (58)

    /** c_decl.e:522							sym[S_SEQ_ELEM_NEW] =*/
    // SubProg SetBBType pc: 794 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 798 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22504 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg SetBBType pc: 802 op: PROC (27)
    Ref(_22504);
    _22505 = _58or_type(_22504, _etype_42463);
    _22504 = NOVALUE;
    // SubProg SetBBType pc: 807 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22505;
    if( _1 != _22505 ){
        DeRef(_1);
    }
    _22505 = NOVALUE;
    // SubProg SetBBType pc: 811 op: STARTLINE (58)

    /** c_decl.e:524							sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 817 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 821 op: NOP1 (159)
L1C: // addr: 822 pc: 821 sub: 42457 op: 159
    // SubProg SetBBType pc: 822 op: NOP1 (159)
L16: // addr: 823 pc: 822 sub: 42457 op: 159
    // SubProg SetBBType pc: 823 op: NOP1 (159)
L13: // addr: 824 pc: 823 sub: 42457 op: 159
    // SubProg SetBBType pc: 824 op: STARTLINE (58)

    /** c_decl.e:529				i = 1*/
    // SubProg SetBBType pc: 826 op: ASSIGN_I (113)
    _i_42466 = 1;
    // SubProg SetBBType pc: 829 op: STARTLINE (58)

    /** c_decl.e:530				while i <= length(BB_info) do*/
    // SubProg SetBBType pc: 831 op: NOP2 (110)
    // SubProg SetBBType pc: 833 op: NOPWHILE (158)
L1D: // addr: 834 pc: 833 sub: 42457 op: 158
    // SubProg SetBBType pc: 834 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 836 op: LENGTH (42)
    if (IS_SEQUENCE(_58BB_info_42082)){
            _22506 = SEQ_PTR(_58BB_info_42082)->length;
    }
    else {
        _22506 = 1;
    }
    // SubProg SetBBType pc: 839 op: LESSEQ_IFW_I (123)
    if (_i_42466 > _22506)
    goto L1E; // [839] 888
    // SubProg SetBBType pc: 843 op: STARTLINE (58)

    /** c_decl.e:531					int = BB_info[i][BB_VAR]*/
    // SubProg SetBBType pc: 845 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 847 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    _22508 = (object)*(((s1_ptr)_2)->base + _i_42466);
    // SubProg SetBBType pc: 851 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22508);
    _int_42468 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42468)){
        _int_42468 = (object)DBL_PTR(_int_42468)->dbl;
    }
    _22508 = NOVALUE;
    // SubProg SetBBType pc: 857 op: STARTLINE (58)

    /** c_decl.e:532					if int = s then*/
    // SubProg SetBBType pc: 859 op: EQUALS_IFW (104)
    if (_int_42468 != _s_42460)
    goto L1F; // [859] 877
    // SubProg SetBBType pc: 863 op: STARTLINE (58)

    /** c_decl.e:533						found = TRUE*/
    // SubProg SetBBType pc: 865 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 867 op: ASSIGN (18)
    _found_42465 = _13TRUE_452;
    // SubProg SetBBType pc: 870 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 872 op: STARTLINE (58)

    /** c_decl.e:534						exit*/
    // SubProg SetBBType pc: 874 op: EXIT (61)
    goto L1E; // [874] 888
    // SubProg SetBBType pc: 876 op: NOP1 (159)
L1F: // addr: 877 pc: 876 sub: 42457 op: 159
    // SubProg SetBBType pc: 877 op: STARTLINE (58)

    /** c_decl.e:536					i += 1*/
    // SubProg SetBBType pc: 879 op: PLUS1_I (117)
    _i_42466 = _i_42466 + 1;
    // SubProg SetBBType pc: 883 op: STARTLINE (58)

    /** c_decl.e:537				end while*/
    // SubProg SetBBType pc: 885 op: ENDWHILE (22)
    goto L1D; // [885] 834
    // SubProg SetBBType pc: 887 op: NOP1 (159)
L1E: // addr: 888 pc: 887 sub: 42457 op: 159
    // SubProg SetBBType pc: 888 op: NOP1 (159)
L12: // addr: 889 pc: 888 sub: 42457 op: 159
    // SubProg SetBBType pc: 889 op: STARTLINE (58)

    /** c_decl.e:541			if not found then*/
    // SubProg SetBBType pc: 891 op: NOT_IFW (108)
    if (_found_42465 != 0)
    goto L20; // [891] 907
    // SubProg SetBBType pc: 894 op: STARTLINE (58)

    /** c_decl.e:543				BB_info = append(BB_info, repeat(0, 6))*/
    // SubProg SetBBType pc: 896 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 898 op: REPEAT (32)
    _22513 = Repeat(0, 6);
    // SubProg SetBBType pc: 902 op: APPEND (35)
    RefDS(_22513);
    Append(&_58BB_info_42082, _58BB_info_42082, _22513);
    DeRefDS(_22513);
    _22513 = NOVALUE;
    // SubProg SetBBType pc: 906 op: NOP1 (159)
L20: // addr: 907 pc: 906 sub: 42457 op: 159
    // SubProg SetBBType pc: 907 op: STARTLINE (58)

    /** c_decl.e:546			if t = TYPE_NULL then*/
    // SubProg SetBBType pc: 909 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 911 op: EQUALS_IFW (104)
    if (_t_42461 != 0)
    goto L21; // [911] 949
    // SubProg SetBBType pc: 915 op: STARTLINE (58)

    /** c_decl.e:547				if not found then*/
    // SubProg SetBBType pc: 917 op: NOT_IFW (108)
    if (_found_42465 != 0)
    goto L22; // [917] 1308
    // SubProg SetBBType pc: 920 op: STARTLINE (58)

    /** c_decl.e:549					BB_info[i] = dummy_bb*/
    // SubProg SetBBType pc: 922 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 924 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 926 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 928 op: ASSIGN_SUBS (16)
    RefDS(_58dummy_bb_42449);
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _58BB_info_42082 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _58dummy_bb_42449;
    DeRef(_1);
    // SubProg SetBBType pc: 932 op: STARTLINE (58)

    /** c_decl.e:550					BB_info[i][BB_VAR] = s*/
    // SubProg SetBBType pc: 934 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 936 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _58BB_info_42082 = MAKE_SEQ(_2);
    }
    _3 = (object)(_i_42466 + ((s1_ptr)_2)->base);
    // SubProg SetBBType pc: 941 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42460;
    DeRef(_1);
    _22517 = NOVALUE;
    // SubProg SetBBType pc: 945 op: NOP1 (159)
    // SubProg SetBBType pc: 946 op: ELSE (23)
    goto L22; // [946] 1308
    // SubProg SetBBType pc: 948 op: NOP1 (159)
L21: // addr: 949 pc: 948 sub: 42457 op: 159
    // SubProg SetBBType pc: 949 op: STARTLINE (58)

    /** c_decl.e:554				sequence bbi = BB_info[i]*/
    // SubProg SetBBType pc: 951 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 953 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 955 op: RHS_SUBS (25)
    DeRef(_bbi_42685);
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    _bbi_42685 = (object)*(((s1_ptr)_2)->base + _i_42466);
    Ref(_bbi_42685);
    // SubProg SetBBType pc: 959 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 961 op: STARTLINE (58)

    /** c_decl.e:555				BB_info[i] = 0*/
    // SubProg SetBBType pc: 963 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 965 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _58BB_info_42082 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 969 op: STARTLINE (58)

    /** c_decl.e:556				bbi[BB_VAR] = s*/
    // SubProg SetBBType pc: 971 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42460;
    DeRef(_1);
    // SubProg SetBBType pc: 975 op: STARTLINE (58)

    /** c_decl.e:557				bbi[BB_TYPE] = t*/
    // SubProg SetBBType pc: 977 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42461;
    DeRef(_1);
    // SubProg SetBBType pc: 981 op: STARTLINE (58)

    /** c_decl.e:558				bbi[BB_DELETE] = has_delete*/
    // SubProg SetBBType pc: 983 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42464;
    DeRef(_1);
    // SubProg SetBBType pc: 987 op: STARTLINE (58)

    /** c_decl.e:560				if t = TYPE_SEQUENCE and val[MIN] = -1 then*/
    // SubProg SetBBType pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 991 op: EQUALS (3)
    _22520 = (_t_42461 == 8);
    // SubProg SetBBType pc: 995 op: SC1_AND_IF (146)
    if (_22520 == 0) {
        goto L23; // [995] 1077
    }
    // SubProg SetBBType pc: 999 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1001 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22522 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1005 op: EQUALS (3)
    if (IS_ATOM_INT(_22522)) {
        _22523 = (_22522 == -1);
    }
    else {
        _22523 = binary_op(EQUALS, _22522, -1);
    }
    _22522 = NOVALUE;
    // SubProg SetBBType pc: 1009 op: NOP1 (159)
    // SubProg SetBBType pc: 1010 op: IF (20)
    if (_22523 == 0) {
        DeRef(_22523);
        _22523 = NOVALUE;
        goto L23; // [1010] 1077
    }
    else {
        if (!IS_ATOM_INT(_22523) && DBL_PTR(_22523)->dbl == 0.0){
            DeRef(_22523);
            _22523 = NOVALUE;
            goto L23; // [1010] 1077
        }
        DeRef(_22523);
        _22523 = NOVALUE;
    }
    DeRef(_22523);
    _22523 = NOVALUE;
    // SubProg SetBBType pc: 1013 op: STARTLINE (58)

    /** c_decl.e:562					if found and bbi[BB_ELEM] != TYPE_NULL then*/
    // SubProg SetBBType pc: 1015 op: SC1_AND_IF (146)
    if (_found_42465 == 0) {
        goto L24; // [1015] 1051
    }
    // SubProg SetBBType pc: 1019 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bbi_42685);
    _22525 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg SetBBType pc: 1023 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1025 op: NOTEQ (4)
    if (IS_ATOM_INT(_22525)) {
        _22526 = (_22525 != 0);
    }
    else {
        _22526 = binary_op(NOTEQ, _22525, 0);
    }
    _22525 = NOVALUE;
    // SubProg SetBBType pc: 1029 op: NOP1 (159)
    // SubProg SetBBType pc: 1030 op: IF (20)
    if (_22526 == 0) {
        DeRef(_22526);
        _22526 = NOVALUE;
        goto L24; // [1030] 1051
    }
    else {
        if (!IS_ATOM_INT(_22526) && DBL_PTR(_22526)->dbl == 0.0){
            DeRef(_22526);
            _22526 = NOVALUE;
            goto L24; // [1030] 1051
        }
        DeRef(_22526);
        _22526 = NOVALUE;
    }
    DeRef(_22526);
    _22526 = NOVALUE;
    // SubProg SetBBType pc: 1033 op: STARTLINE (58)

    /** c_decl.e:564						bbi[BB_ELEM] = or_type(bbi[BB_ELEM], etype)*/
    // SubProg SetBBType pc: 1035 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bbi_42685);
    _22527 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg SetBBType pc: 1039 op: PROC (27)
    Ref(_22527);
    _22528 = _58or_type(_22527, _etype_42463);
    _22527 = NOVALUE;
    // SubProg SetBBType pc: 1044 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22528;
    if( _1 != _22528 ){
        DeRef(_1);
    }
    _22528 = NOVALUE;
    // SubProg SetBBType pc: 1048 op: ELSE (23)
    goto L25; // [1048] 1060
    // SubProg SetBBType pc: 1050 op: NOP1 (159)
L24: // addr: 1051 pc: 1050 sub: 42457 op: 159
    // SubProg SetBBType pc: 1051 op: STARTLINE (58)

    /** c_decl.e:566						bbi[BB_ELEM] = TYPE_NULL*/
    // SubProg SetBBType pc: 1053 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1055 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 1059 op: NOP1 (159)
L25: // addr: 1060 pc: 1059 sub: 42457 op: 159
    // SubProg SetBBType pc: 1060 op: STARTLINE (58)

    /** c_decl.e:568					if not found then*/
    // SubProg SetBBType pc: 1062 op: NOT_IFW (108)
    if (_found_42465 != 0)
    goto L26; // [1062] 1153
    // SubProg SetBBType pc: 1065 op: STARTLINE (58)

    /** c_decl.e:569						bbi[BB_SEQLEN] = NOVALUE*/
    // SubProg SetBBType pc: 1067 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1069 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 1073 op: NOP1 (159)
    // SubProg SetBBType pc: 1074 op: ELSE (23)
    goto L26; // [1074] 1153
    // SubProg SetBBType pc: 1076 op: NOP1 (159)
L23: // addr: 1077 pc: 1076 sub: 42457 op: 159
    // SubProg SetBBType pc: 1077 op: STARTLINE (58)

    /** c_decl.e:572					bbi[BB_ELEM] = etype*/
    // SubProg SetBBType pc: 1079 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42463;
    DeRef(_1);
    // SubProg SetBBType pc: 1083 op: STARTLINE (58)

    /** c_decl.e:573					if t = TYPE_SEQUENCE or t = TYPE_OBJECT then*/
    // SubProg SetBBType pc: 1085 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1087 op: EQUALS (3)
    _22530 = (_t_42461 == 8);
    // SubProg SetBBType pc: 1091 op: SC1_OR_IF (147)
    if (_22530 != 0) {
        goto L27; // [1091] 1106
    }
    // SubProg SetBBType pc: 1095 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1097 op: EQUALS (3)
    _22532 = (_t_42461 == 16);
    // SubProg SetBBType pc: 1101 op: NOP1 (159)
    // SubProg SetBBType pc: 1102 op: IF (20)
    if (_22532 == 0)
    {
        DeRef(_22532);
        _22532 = NOVALUE;
        goto L28; // [1102] 1145
    }
    else{
        DeRef(_22532);
        _22532 = NOVALUE;
    }
    // SubProg SetBBType pc: 1105 op: NOP1 (159)
L27: // addr: 1106 pc: 1105 sub: 42457 op: 159
    // SubProg SetBBType pc: 1106 op: STARTLINE (58)

    /** c_decl.e:574						if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 1108 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1110 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22533 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1114 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22533, 0)){
        _22533 = NOVALUE;
        goto L29; // [1114] 1129
    }
    _22533 = NOVALUE;
    // SubProg SetBBType pc: 1118 op: STARTLINE (58)

    /** c_decl.e:575							bbi[BB_SEQLEN] = NOVALUE*/
    // SubProg SetBBType pc: 1120 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1122 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 1126 op: ELSE (23)
    goto L2A; // [1126] 1152
    // SubProg SetBBType pc: 1128 op: NOP1 (159)
L29: // addr: 1129 pc: 1128 sub: 42457 op: 159
    // SubProg SetBBType pc: 1129 op: STARTLINE (58)

    /** c_decl.e:577							bbi[BB_SEQLEN] = val[MIN]*/
    // SubProg SetBBType pc: 1131 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1133 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22535 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1137 op: ASSIGN_SUBS (16)
    Ref(_22535);
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22535;
    if( _1 != _22535 ){
        DeRef(_1);
    }
    _22535 = NOVALUE;
    // SubProg SetBBType pc: 1141 op: NOP1 (159)
    // SubProg SetBBType pc: 1142 op: ELSE (23)
    goto L2A; // [1142] 1152
    // SubProg SetBBType pc: 1144 op: NOP1 (159)
L28: // addr: 1145 pc: 1144 sub: 42457 op: 159
    // SubProg SetBBType pc: 1145 op: STARTLINE (58)

    /** c_decl.e:580						bbi[BB_OBJ] = val*/
    // SubProg SetBBType pc: 1147 op: ASSIGN_SUBS (16)
    RefDS(_val_42462);
    _2 = (object)SEQ_PTR(_bbi_42685);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42685 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_42462;
    DeRef(_1);
    // SubProg SetBBType pc: 1151 op: NOP1 (159)
L2A: // addr: 1152 pc: 1151 sub: 42457 op: 159
    // SubProg SetBBType pc: 1152 op: NOP1 (159)
L26: // addr: 1153 pc: 1152 sub: 42457 op: 159
    // SubProg SetBBType pc: 1153 op: STARTLINE (58)

    /** c_decl.e:583				BB_info[i] = bbi*/
    // SubProg SetBBType pc: 1155 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1157 op: ASSIGN_SUBS (16)
    RefDS(_bbi_42685);
    _2 = (object)SEQ_PTR(_58BB_info_42082);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _58BB_info_42082 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bbi_42685;
    DeRef(_1);
    // SubProg SetBBType pc: 1161 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var bbi_42685
    DeRefDS(_bbi_42685);
    _bbi_42685 = NOVALUE;
    // SubProg SetBBType pc: 1163 op: NOP1 (159)
    // SubProg SetBBType pc: 1164 op: ELSE (23)
    goto L22; // [1164] 1308
    // SubProg SetBBType pc: 1166 op: NOP1 (159)
L3: // addr: 1167 pc: 1166 sub: 42457 op: 159
    // SubProg SetBBType pc: 1167 op: STARTLINE (58)

    /** c_decl.e:586		elsif mode = M_CONSTANT then*/
    // SubProg SetBBType pc: 1169 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1171 op: EQUALS_IFW (104)
    if (_mode_42474 != 2)
    goto L2B; // [1171] 1307
    // SubProg SetBBType pc: 1175 op: STARTLINE (58)

    /** c_decl.e:587			sym[S_GTYPE] = t*/
    // SubProg SetBBType pc: 1177 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1179 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42461;
    DeRef(_1);
    // SubProg SetBBType pc: 1183 op: STARTLINE (58)

    /** c_decl.e:588			sym[S_SEQ_ELEM] = etype*/
    // SubProg SetBBType pc: 1185 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1187 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42463;
    DeRef(_1);
    // SubProg SetBBType pc: 1191 op: STARTLINE (58)

    /** c_decl.e:589			if sym[S_GTYPE] = TYPE_SEQUENCE or*/
    // SubProg SetBBType pc: 1193 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1195 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22537 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg SetBBType pc: 1199 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1201 op: EQUALS (3)
    if (IS_ATOM_INT(_22537)) {
        _22538 = (_22537 == 8);
    }
    else {
        _22538 = binary_op(EQUALS, _22537, 8);
    }
    _22537 = NOVALUE;
    // SubProg SetBBType pc: 1205 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22538)) {
        if (_22538 != 0) {
            goto L2C; // [1205] 1226
        }
    }
    else {
        if (DBL_PTR(_22538)->dbl != 0.0) {
            goto L2C; // [1205] 1226
        }
    }
    // SubProg SetBBType pc: 1209 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42469);
    _22540 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg SetBBType pc: 1215 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1217 op: EQUALS (3)
    if (IS_ATOM_INT(_22540)) {
        _22541 = (_22540 == 16);
    }
    else {
        _22541 = binary_op(EQUALS, _22540, 16);
    }
    _22540 = NOVALUE;
    // SubProg SetBBType pc: 1221 op: NOP1 (159)
    // SubProg SetBBType pc: 1222 op: IF (20)
    if (_22541 == 0) {
        DeRef(_22541);
        _22541 = NOVALUE;
        goto L2D; // [1222] 1269
    }
    else {
        if (!IS_ATOM_INT(_22541) && DBL_PTR(_22541)->dbl == 0.0){
            DeRef(_22541);
            _22541 = NOVALUE;
            goto L2D; // [1222] 1269
        }
        DeRef(_22541);
        _22541 = NOVALUE;
    }
    DeRef(_22541);
    _22541 = NOVALUE;
    // SubProg SetBBType pc: 1225 op: NOP1 (159)
L2C: // addr: 1226 pc: 1225 sub: 42457 op: 159
    // SubProg SetBBType pc: 1226 op: STARTLINE (58)

    /** c_decl.e:591				if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 1228 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1230 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22542 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1234 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22542, 0)){
        _22542 = NOVALUE;
        goto L2E; // [1234] 1251
    }
    _22542 = NOVALUE;
    // SubProg SetBBType pc: 1238 op: STARTLINE (58)

    /** c_decl.e:592					sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 1240 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1242 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1244 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg SetBBType pc: 1248 op: ELSE (23)
    goto L2F; // [1248] 1298
    // SubProg SetBBType pc: 1250 op: NOP1 (159)
L2E: // addr: 1251 pc: 1250 sub: 42457 op: 159
    // SubProg SetBBType pc: 1251 op: STARTLINE (58)

    /** c_decl.e:594					sym[S_SEQ_LEN] = val[MIN]*/
    // SubProg SetBBType pc: 1253 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1255 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1257 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22544 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1261 op: ASSIGN_SUBS (16)
    Ref(_22544);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22544;
    if( _1 != _22544 ){
        DeRef(_1);
    }
    _22544 = NOVALUE;
    // SubProg SetBBType pc: 1265 op: NOP1 (159)
    // SubProg SetBBType pc: 1266 op: ELSE (23)
    goto L2F; // [1266] 1298
    // SubProg SetBBType pc: 1268 op: NOP1 (159)
L2D: // addr: 1269 pc: 1268 sub: 42457 op: 159
    // SubProg SetBBType pc: 1269 op: STARTLINE (58)

    /** c_decl.e:597				sym[S_OBJ_MIN] = val[MIN]*/
    // SubProg SetBBType pc: 1271 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1273 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1275 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22545 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1279 op: ASSIGN_SUBS (16)
    Ref(_22545);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22545;
    if( _1 != _22545 ){
        DeRef(_1);
    }
    _22545 = NOVALUE;
    // SubProg SetBBType pc: 1283 op: STARTLINE (58)

    /** c_decl.e:598				sym[S_OBJ_MAX] = val[MAX]*/
    // SubProg SetBBType pc: 1285 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1287 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1289 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42462);
    _22546 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 1293 op: ASSIGN_SUBS (16)
    Ref(_22546);
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22546;
    if( _1 != _22546 ){
        DeRef(_1);
    }
    _22546 = NOVALUE;
    // SubProg SetBBType pc: 1297 op: NOP1 (159)
L2F: // addr: 1298 pc: 1297 sub: 42457 op: 159
    // SubProg SetBBType pc: 1298 op: STARTLINE (58)

    /** c_decl.e:600			sym[S_HAS_DELETE] = has_delete*/
    // SubProg SetBBType pc: 1300 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1302 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42469);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42469 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 54);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42464;
    DeRef(_1);
    // SubProg SetBBType pc: 1306 op: NOP1 (159)
L2B: // addr: 1307 pc: 1306 sub: 42457 op: 159
    // SubProg SetBBType pc: 1307 op: NOP1 (159)
L22: // addr: 1308 pc: 1307 sub: 42457 op: 159
    // SubProg SetBBType pc: 1308 op: STARTLINE (58)

    /** c_decl.e:603		SymTab[s] = sym*/
    // SubProg SetBBType pc: 1310 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1312 op: ASSIGN_SUBS (16)
    RefDS(_sym_42469);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42460);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_42469;
    DeRef(_1);
    // SubProg SetBBType pc: 1316 op: STARTLINE (58)

    /** c_decl.e:605	end procedure*/
    // SubProg SetBBType pc: 1318 op: RETURNP (29)

// Exiting block BLOCK: SetBBType

// block var s_42460

// block var t_42461

// block var val_42462
    DeRefDS(_val_42462);

// block var etype_42463

// block var has_delete_42464

// block var found_42465

// block var i_42466

// block var tn_42467

// block var int_42468

// block var sym_42469
    DeRefDS(_sym_42469);

// block var mode_42474
    DeRef(_22435);
    _22435 = NOVALUE;
    DeRef(_22538);
    _22538 = NOVALUE;
    DeRef(_22530);
    _22530 = NOVALUE;
    DeRef(_22520);
    _22520 = NOVALUE;
    DeRef(_22440);
    _22440 = NOVALUE;
    _22449 = NOVALUE;
    _22454 = NOVALUE;
    return;
    // SubProg SetBBType pc: 1321 op: BADRETURNF (43)
    ;
}


void _58CName(object _s_42759)
{
    object _v_42760 = NOVALUE;
    object _mode_42762 = NOVALUE;
    object _22611 = NOVALUE; // 42903 22611
    object _22610 = NOVALUE; // 42901 22610
// skipping _22609  name type: 0
    object _22608 = NOVALUE; // 42892 22608
    object _22607 = NOVALUE; // 42890 22607
    object _22606 = NOVALUE; // 42889 22606
    object _22605 = NOVALUE; // 42887 22605
    object _22604 = NOVALUE; // 42886 22604
    object _22603 = NOVALUE; // 42885 22603
    object _22602 = NOVALUE; // 42881 22602
    object _22601 = NOVALUE; // 42880 22601
// skipping _22600  name type: 0
    object _22599 = NOVALUE; // 42877 22599
// skipping _22598  name type: 0
    object _22597 = NOVALUE; // 42874 22597
    object _22596 = NOVALUE; // 42872 22596
    object _22595 = NOVALUE; // 42869 22595
    object _22594 = NOVALUE; // 42867 22594
    object _22593 = NOVALUE; // 42864 22593
    object _22592 = NOVALUE; // 42862 22592
// skipping _22591  name type: 0
    object _22590 = NOVALUE; // 42853 22590
    object _22589 = NOVALUE; // 42851 22589
    object _22588 = NOVALUE; // 42850 22588
    object _22587 = NOVALUE; // 42848 22587
    object _22586 = NOVALUE; // 42847 22586
// skipping _22585  name type: 0
    object _22584 = NOVALUE; // 42844 22584
    object _22583 = NOVALUE; // 42842 22583
    object _22582 = NOVALUE; // 42840 22582
    object _22581 = NOVALUE; // 42838 22581
    object _22580 = NOVALUE; // 42837 22580
    object _22579 = NOVALUE; // 42836 22579
// skipping _22578  name type: 0
    object _22577 = NOVALUE; // 42826 22577
    object _22576 = NOVALUE; // 42825 22576
// skipping _22575  name type: 0
    object _22574 = NOVALUE; // 42822 22574
    object _22573 = NOVALUE; // 42820 22573
    object _22572 = NOVALUE; // 42819 22572
    object _22571 = NOVALUE; // 42817 22571
    object _22570 = NOVALUE; // 42815 22570
    object _22569 = NOVALUE; // 42814 22569
    object _22568 = NOVALUE; // 42811 22568
    object _22567 = NOVALUE; // 42809 22567
    object _22566 = NOVALUE; // 42804 22566
    object _22565 = NOVALUE; // 42802 22565
    object _22564 = NOVALUE; // 42799 22564
    object _22563 = NOVALUE; // 42797 22563
// skipping _22562  name type: 0
    object _22561 = NOVALUE; // 42792 22561
    object _22560 = NOVALUE; // 42790 22560
// skipping _22558  name type: 0
    object _22556 = NOVALUE; // 42779 22556
    object _22555 = NOVALUE; // 42777 22555
    object _22554 = NOVALUE; // 42776 22554
    object _22553 = NOVALUE; // 42774 22553
    object _22552 = NOVALUE; // 42773 22552
    object _22551 = NOVALUE; // 42772 22551
// skipping _22550  name type: 0
// skipping _22549  name type: 0
    object _22548 = NOVALUE; // 42764 22548
// skipping _22547  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg CName pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42759)) {
        _1 = (object)(DBL_PTR(_s_42759)->dbl);
        DeRefDS(_s_42759);
        _s_42759 = _1;
    }
    // SubProg CName pc: 3 op: STARTLINE (58)

    /** c_decl.e:612		v = ObjValue(s)*/
    // SubProg CName pc: 5 op: PROC (27)
    _0 = _v_42760;
    _v_42760 = _58ObjValue(_s_42759);
    DeRef(_0);
    // SubProg CName pc: 9 op: STARTLINE (58)

    /** c_decl.e:613		integer mode = SymTab[s][S_MODE]*/
    // SubProg CName pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22548 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22548);
    _mode_42762 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42762)){
        _mode_42762 = (object)DBL_PTR(_mode_42762)->dbl;
    }
    _22548 = NOVALUE;
    // SubProg CName pc: 25 op: STARTLINE (58)

    /** c_decl.e:614	 	if mode = M_NORMAL then*/
    // SubProg CName pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 29 op: EQUALS_IFW (104)
    if (_mode_42762 != 1)
    goto L1; // [29] 254
    // SubProg CName pc: 33 op: STARTLINE (58)

    /** c_decl.e:617			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    // SubProg CName pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 39 op: EQUALS (3)
    _22551 = (_58LeftSym_42083 == _13FALSE_450);
    // SubProg CName pc: 43 op: SC1_AND (141)
    if (_22551 == 0) {
        _22552 = 0;
        goto L2; // [43] 61
    }
    // SubProg CName pc: 47 op: PROC (27)
    _22553 = _58GType(_s_42759);
    // SubProg CName pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 53 op: EQUALS (3)
    if (IS_ATOM_INT(_22553)) {
        _22554 = (_22553 == 1);
    }
    else {
        _22554 = binary_op(EQUALS, _22553, 1);
    }
    DeRef(_22553);
    _22553 = NOVALUE;
    // SubProg CName pc: 57 op: SC2_AND (142)
    if (IS_ATOM_INT(_22554))
    _22552 = (_22554 != 0);
    else
    _22552 = DBL_PTR(_22554)->dbl != 0.0;
    // SubProg CName pc: 60 op: NOP1 (159)
L2: // addr: 61 pc: 60 sub: 42756 op: 159
    // SubProg CName pc: 61 op: SC1_AND_IF (146)
    if (_22552 == 0) {
        goto L3; // [61] 98
    }
    // SubProg CName pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 67 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42760) && IS_ATOM_INT(_36NOVALUE_16291)) {
        _22556 = (_v_42760 != _36NOVALUE_16291);
    }
    else {
        _22556 = binary_op(NOTEQ, _v_42760, _36NOVALUE_16291);
    }
    // SubProg CName pc: 71 op: NOP1 (159)
    // SubProg CName pc: 72 op: IF (20)
    if (_22556 == 0) {
        DeRef(_22556);
        _22556 = NOVALUE;
        goto L3; // [72] 98
    }
    else {
        if (!IS_ATOM_INT(_22556) && DBL_PTR(_22556)->dbl == 0.0){
            DeRef(_22556);
            _22556 = NOVALUE;
            goto L3; // [72] 98
        }
        DeRef(_22556);
        _22556 = NOVALUE;
    }
    DeRef(_22556);
    _22556 = NOVALUE;
    // SubProg CName pc: 75 op: STARTLINE (58)

    /** c_decl.e:618				c_printf("%d", v)*/
    // SubProg CName pc: 77 op: PROC (27)
    RefDS(_22557);
    Ref(_v_42760);
    _55c_printf(_22557, _v_42760);
    // SubProg CName pc: 81 op: STARTLINE (58)

    /** c_decl.e:619				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 85 op: EQUALS_IFW (104)
    if (_36TARGET_SIZEOF_POINTER_16271 != 8)
    goto L4; // [85] 180
    // SubProg CName pc: 89 op: STARTLINE (58)

    /** c_decl.e:620					c_puts( "LL" )*/
    // SubProg CName pc: 91 op: PROC (27)
    RefDS(_22559);
    _55c_puts(_22559);
    // SubProg CName pc: 94 op: NOP1 (159)
    // SubProg CName pc: 95 op: ELSE (23)
    goto L4; // [95] 180
    // SubProg CName pc: 97 op: NOP1 (159)
L3: // addr: 98 pc: 97 sub: 42756 op: 159
    // SubProg CName pc: 98 op: STARTLINE (58)

    /** c_decl.e:623				if SymTab[s][S_SCOPE] > SC_PRIVATE then*/
    // SubProg CName pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22560 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 108 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22560);
    _22561 = (object)*(((s1_ptr)_2)->base + 4);
    _22560 = NOVALUE;
    // SubProg CName pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 114 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _22561, 3)){
        _22561 = NOVALUE;
        goto L5; // [114] 156
    }
    _22561 = NOVALUE;
    // SubProg CName pc: 118 op: STARTLINE (58)

    /** c_decl.e:624					c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg CName pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22563 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22563);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22564 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22564 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22563 = NOVALUE;
    // SubProg CName pc: 132 op: PROC (27)
    RefDS(_22056);
    Ref(_22564);
    _55c_printf(_22056, _22564);
    _22564 = NOVALUE;
    // SubProg CName pc: 136 op: STARTLINE (58)

    /** c_decl.e:625					c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 140 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22565 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22565);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22566 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22566 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22565 = NOVALUE;
    // SubProg CName pc: 150 op: PROC (27)
    Ref(_22566);
    _55c_puts(_22566);
    _22566 = NOVALUE;
    // SubProg CName pc: 153 op: ELSE (23)
    goto L6; // [153] 179
    // SubProg CName pc: 155 op: NOP1 (159)
L5: // addr: 156 pc: 155 sub: 42756 op: 159
    // SubProg CName pc: 156 op: STARTLINE (58)

    /** c_decl.e:627					c_puts("_")*/
    // SubProg CName pc: 158 op: PROC (27)
    RefDS(_22005);
    _55c_puts(_22005);
    // SubProg CName pc: 161 op: STARTLINE (58)

    /** c_decl.e:628					c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 165 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22567 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22567);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22568 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22568 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22567 = NOVALUE;
    // SubProg CName pc: 175 op: PROC (27)
    Ref(_22568);
    _55c_puts(_22568);
    _22568 = NOVALUE;
    // SubProg CName pc: 178 op: NOP1 (159)
L6: // addr: 179 pc: 178 sub: 42756 op: 159
    // SubProg CName pc: 179 op: NOP1 (159)
L4: // addr: 180 pc: 179 sub: 42756 op: 159
    // SubProg CName pc: 180 op: STARTLINE (58)

    /** c_decl.e:631			if s != CurrentSub and SymTab[s][S_NREFS] < 2 then*/
    // SubProg CName pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 184 op: NOTEQ (4)
    _22569 = (_s_42759 != _36CurrentSub_16444);
    // SubProg CName pc: 188 op: SC1_AND_IF (146)
    if (_22569 == 0) {
        goto L7; // [188] 236
    }
    // SubProg CName pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 194 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22571 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 200 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22571);
    _22572 = (object)*(((s1_ptr)_2)->base + 12);
    _22571 = NOVALUE;
    // SubProg CName pc: 204 op: LESS (1)
    if (IS_ATOM_INT(_22572)) {
        _22573 = (_22572 < 2);
    }
    else {
        _22573 = binary_op(LESS, _22572, 2);
    }
    _22572 = NOVALUE;
    // SubProg CName pc: 208 op: NOP1 (159)
    // SubProg CName pc: 209 op: IF (20)
    if (_22573 == 0) {
        DeRef(_22573);
        _22573 = NOVALUE;
        goto L7; // [209] 236
    }
    else {
        if (!IS_ATOM_INT(_22573) && DBL_PTR(_22573)->dbl == 0.0){
            DeRef(_22573);
            _22573 = NOVALUE;
            goto L7; // [209] 236
        }
        DeRef(_22573);
        _22573 = NOVALUE;
    }
    DeRef(_22573);
    _22573 = NOVALUE;
    // SubProg CName pc: 212 op: STARTLINE (58)

    /** c_decl.e:632				SymTab[s][S_NREFS] += 1*/
    // SubProg CName pc: 214 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 216 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42759 + ((s1_ptr)_2)->base);
    // SubProg CName pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 223 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22576 = (object)*(((s1_ptr)_2)->base + 12);
    _22574 = NOVALUE;
    // SubProg CName pc: 227 op: PLUS1 (93)
    if (IS_ATOM_INT(_22576)) {
        _22577 = _22576 + 1;
        if (_22577 > MAXINT){
            _22577 = NewDouble((eudouble)_22577);
        }
    }
    else
    _22577 = binary_op(PLUS, 1, _22576);
    _22576 = NOVALUE;
    // SubProg CName pc: 231 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22577;
    if( _1 != _22577 ){
        DeRef(_1);
    }
    _22577 = NOVALUE;
    _22574 = NOVALUE;
    // SubProg CName pc: 235 op: NOP1 (159)
L7: // addr: 236 pc: 235 sub: 42756 op: 159
    // SubProg CName pc: 236 op: STARTLINE (58)

    /** c_decl.e:634			SetBBType(s, TYPE_NULL, novalue, TYPE_OBJECT, 0) -- record that this var was referenced in this BB*/
    // SubProg CName pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 244 op: PROC (27)
    RefDS(_55novalue_46106);
    _58SetBBType(_s_42759, 0, _55novalue_46106, 16, 0);
    // SubProg CName pc: 251 op: ELSE (23)
    goto L8; // [251] 533
    // SubProg CName pc: 253 op: NOP1 (159)
L1: // addr: 254 pc: 253 sub: 42756 op: 159
    // SubProg CName pc: 254 op: STARTLINE (58)

    /** c_decl.e:636	 	elsif mode = M_CONSTANT then*/
    // SubProg CName pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 258 op: EQUALS_IFW (104)
    if (_mode_42762 != 2)
    goto L9; // [258] 448
    // SubProg CName pc: 262 op: STARTLINE (58)

    /** c_decl.e:638			if (is_integer( sym_obj( s ) ) and SymTab[s][S_GTYPE] != TYPE_DOUBLE ) or (LeftSym = FALSE and TypeIs(s, TYPE_INTEGER) and v != NOVALUE) then*/
    // SubProg CName pc: 264 op: PROC (27)
    _22579 = _54sym_obj(_s_42759);
    // SubProg CName pc: 268 op: PROC (27)
    _22580 = _36is_integer(_22579);
    _22579 = NOVALUE;
    // SubProg CName pc: 272 op: SC1_AND (141)
    if (IS_ATOM_INT(_22580)) {
        if (_22580 == 0) {
            DeRef(_22581);
            _22581 = 0;
            goto LA; // [272] 298
        }
    }
    else {
        if (DBL_PTR(_22580)->dbl == 0.0) {
            DeRef(_22581);
            _22581 = 0;
            goto LA; // [272] 298
        }
    }
    // SubProg CName pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22582 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22582);
    _22583 = (object)*(((s1_ptr)_2)->base + 36);
    _22582 = NOVALUE;
    // SubProg CName pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 290 op: NOTEQ (4)
    if (IS_ATOM_INT(_22583)) {
        _22584 = (_22583 != 2);
    }
    else {
        _22584 = binary_op(NOTEQ, _22583, 2);
    }
    _22583 = NOVALUE;
    // SubProg CName pc: 294 op: SC2_AND (142)
    DeRef(_22581);
    if (IS_ATOM_INT(_22584))
    _22581 = (_22584 != 0);
    else
    _22581 = DBL_PTR(_22584)->dbl != 0.0;
    // SubProg CName pc: 297 op: NOP1 (159)
LA: // addr: 298 pc: 297 sub: 42756 op: 159
    // SubProg CName pc: 298 op: SC1_OR_IF (147)
    if (_22581 != 0) {
        goto LB; // [298] 344
    }
    // SubProg CName pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 306 op: EQUALS (3)
    _22586 = (_58LeftSym_42083 == _13FALSE_450);
    // SubProg CName pc: 310 op: SC1_AND (141)
    if (_22586 == 0) {
        _22587 = 0;
        goto LC; // [310] 325
    }
    // SubProg CName pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 316 op: PROC (27)
    _22588 = _58TypeIs(_s_42759, 1);
    // SubProg CName pc: 321 op: SC2_AND (142)
    if (IS_ATOM_INT(_22588))
    _22587 = (_22588 != 0);
    else
    _22587 = DBL_PTR(_22588)->dbl != 0.0;
    // SubProg CName pc: 324 op: NOP1 (159)
LC: // addr: 325 pc: 324 sub: 42756 op: 159
    // SubProg CName pc: 325 op: SC1_AND (141)
    if (_22587 == 0) {
        DeRef(_22589);
        _22589 = 0;
        goto LD; // [325] 339
    }
    // SubProg CName pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 331 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42760) && IS_ATOM_INT(_36NOVALUE_16291)) {
        _22590 = (_v_42760 != _36NOVALUE_16291);
    }
    else {
        _22590 = binary_op(NOTEQ, _v_42760, _36NOVALUE_16291);
    }
    // SubProg CName pc: 335 op: SC2_AND (142)
    if (IS_ATOM_INT(_22590))
    _22589 = (_22590 != 0);
    else
    _22589 = DBL_PTR(_22590)->dbl != 0.0;
    // SubProg CName pc: 338 op: NOP1 (159)
LD: // addr: 339 pc: 338 sub: 42756 op: 159
    // SubProg CName pc: 339 op: NOP1 (159)
    // SubProg CName pc: 340 op: IF (20)
    if (_22589 == 0)
    {
        _22589 = NOVALUE;
        goto LE; // [340] 367
    }
    else{
        _22589 = NOVALUE;
    }
    // SubProg CName pc: 343 op: NOP1 (159)
LB: // addr: 344 pc: 343 sub: 42756 op: 159
    // SubProg CName pc: 344 op: STARTLINE (58)

    /** c_decl.e:641				c_printf("%d", v)*/
    // SubProg CName pc: 346 op: PROC (27)
    RefDS(_22557);
    Ref(_v_42760);
    _55c_printf(_22557, _v_42760);
    // SubProg CName pc: 350 op: STARTLINE (58)

    /** c_decl.e:642				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 354 op: EQUALS_IFW (104)
    if (_36TARGET_SIZEOF_POINTER_16271 != 8)
    goto L8; // [354] 533
    // SubProg CName pc: 358 op: STARTLINE (58)

    /** c_decl.e:643					c_puts( "LL" )*/
    // SubProg CName pc: 360 op: PROC (27)
    RefDS(_22559);
    _55c_puts(_22559);
    // SubProg CName pc: 363 op: NOP1 (159)
    // SubProg CName pc: 364 op: ELSE (23)
    goto L8; // [364] 533
    // SubProg CName pc: 366 op: NOP1 (159)
LE: // addr: 367 pc: 366 sub: 42756 op: 159
    // SubProg CName pc: 367 op: STARTLINE (58)

    /** c_decl.e:647				c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg CName pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 371 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22592 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 375 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 377 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22592);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22593 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22593 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22592 = NOVALUE;
    // SubProg CName pc: 381 op: PROC (27)
    RefDS(_22056);
    Ref(_22593);
    _55c_printf(_22056, _22593);
    _22593 = NOVALUE;
    // SubProg CName pc: 385 op: STARTLINE (58)

    /** c_decl.e:648				c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 389 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22594 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 393 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 395 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22594);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22595 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22595 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22594 = NOVALUE;
    // SubProg CName pc: 399 op: PROC (27)
    Ref(_22595);
    _55c_puts(_22595);
    _22595 = NOVALUE;
    // SubProg CName pc: 402 op: STARTLINE (58)

    /** c_decl.e:649				if SymTab[s][S_NREFS] < 2 then*/
    // SubProg CName pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 406 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22596 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 412 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22596);
    _22597 = (object)*(((s1_ptr)_2)->base + 12);
    _22596 = NOVALUE;
    // SubProg CName pc: 416 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22597, 2)){
        _22597 = NOVALUE;
        goto L8; // [416] 533
    }
    _22597 = NOVALUE;
    // SubProg CName pc: 420 op: STARTLINE (58)

    /** c_decl.e:650					SymTab[s][S_NREFS] += 1*/
    // SubProg CName pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 424 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42759 + ((s1_ptr)_2)->base);
    // SubProg CName pc: 429 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 431 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22601 = (object)*(((s1_ptr)_2)->base + 12);
    _22599 = NOVALUE;
    // SubProg CName pc: 435 op: PLUS1 (93)
    if (IS_ATOM_INT(_22601)) {
        _22602 = _22601 + 1;
        if (_22602 > MAXINT){
            _22602 = NewDouble((eudouble)_22602);
        }
    }
    else
    _22602 = binary_op(PLUS, 1, _22601);
    _22601 = NOVALUE;
    // SubProg CName pc: 439 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22602;
    if( _1 != _22602 ){
        DeRef(_1);
    }
    _22602 = NOVALUE;
    _22599 = NOVALUE;
    // SubProg CName pc: 443 op: NOP1 (159)
    // SubProg CName pc: 444 op: NOP1 (159)
    // SubProg CName pc: 445 op: ELSE (23)
    goto L8; // [445] 533
    // SubProg CName pc: 447 op: NOP1 (159)
L9: // addr: 448 pc: 447 sub: 42756 op: 159
    // SubProg CName pc: 448 op: STARTLINE (58)

    /** c_decl.e:656			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    // SubProg CName pc: 450 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 454 op: EQUALS (3)
    _22603 = (_58LeftSym_42083 == _13FALSE_450);
    // SubProg CName pc: 458 op: SC1_AND (141)
    if (_22603 == 0) {
        _22604 = 0;
        goto LF; // [458] 476
    }
    // SubProg CName pc: 462 op: PROC (27)
    _22605 = _58GType(_s_42759);
    // SubProg CName pc: 466 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 468 op: EQUALS (3)
    if (IS_ATOM_INT(_22605)) {
        _22606 = (_22605 == 1);
    }
    else {
        _22606 = binary_op(EQUALS, _22605, 1);
    }
    DeRef(_22605);
    _22605 = NOVALUE;
    // SubProg CName pc: 472 op: SC2_AND (142)
    if (IS_ATOM_INT(_22606))
    _22604 = (_22606 != 0);
    else
    _22604 = DBL_PTR(_22606)->dbl != 0.0;
    // SubProg CName pc: 475 op: NOP1 (159)
LF: // addr: 476 pc: 475 sub: 42756 op: 159
    // SubProg CName pc: 476 op: SC1_AND_IF (146)
    if (_22604 == 0) {
        goto L10; // [476] 513
    }
    // SubProg CName pc: 480 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 482 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42760) && IS_ATOM_INT(_36NOVALUE_16291)) {
        _22608 = (_v_42760 != _36NOVALUE_16291);
    }
    else {
        _22608 = binary_op(NOTEQ, _v_42760, _36NOVALUE_16291);
    }
    // SubProg CName pc: 486 op: NOP1 (159)
    // SubProg CName pc: 487 op: IF (20)
    if (_22608 == 0) {
        DeRef(_22608);
        _22608 = NOVALUE;
        goto L10; // [487] 513
    }
    else {
        if (!IS_ATOM_INT(_22608) && DBL_PTR(_22608)->dbl == 0.0){
            DeRef(_22608);
            _22608 = NOVALUE;
            goto L10; // [487] 513
        }
        DeRef(_22608);
        _22608 = NOVALUE;
    }
    DeRef(_22608);
    _22608 = NOVALUE;
    // SubProg CName pc: 490 op: STARTLINE (58)

    /** c_decl.e:657				c_printf("%d", v)*/
    // SubProg CName pc: 492 op: PROC (27)
    RefDS(_22557);
    Ref(_v_42760);
    _55c_printf(_22557, _v_42760);
    // SubProg CName pc: 496 op: STARTLINE (58)

    /** c_decl.e:658				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 500 op: EQUALS_IFW (104)
    if (_36TARGET_SIZEOF_POINTER_16271 != 8)
    goto L11; // [500] 532
    // SubProg CName pc: 504 op: STARTLINE (58)

    /** c_decl.e:659					c_puts( "LL" )*/
    // SubProg CName pc: 506 op: PROC (27)
    RefDS(_22559);
    _55c_puts(_22559);
    // SubProg CName pc: 509 op: NOP1 (159)
    // SubProg CName pc: 510 op: ELSE (23)
    goto L11; // [510] 532
    // SubProg CName pc: 512 op: NOP1 (159)
L10: // addr: 513 pc: 512 sub: 42756 op: 159
    // SubProg CName pc: 513 op: STARTLINE (58)

    /** c_decl.e:662				c_printf("_%d", SymTab[s][S_TEMP_NAME])*/
    // SubProg CName pc: 515 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 517 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22610 = (object)*(((s1_ptr)_2)->base + _s_42759);
    // SubProg CName pc: 521 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 523 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22610);
    _22611 = (object)*(((s1_ptr)_2)->base + 34);
    _22610 = NOVALUE;
    // SubProg CName pc: 527 op: PROC (27)
    RefDS(_22056);
    Ref(_22611);
    _55c_printf(_22056, _22611);
    _22611 = NOVALUE;
    // SubProg CName pc: 531 op: NOP1 (159)
L11: // addr: 532 pc: 531 sub: 42756 op: 159
    // SubProg CName pc: 532 op: NOP1 (159)
L8: // addr: 533 pc: 532 sub: 42756 op: 159
    // SubProg CName pc: 533 op: STARTLINE (58)

    /** c_decl.e:666		LeftSym = FALSE*/
    // SubProg CName pc: 535 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 537 op: ASSIGN (18)
    _58LeftSym_42083 = _13FALSE_450;
    // SubProg CName pc: 540 op: INTEGER_CHECK (96)
    // SubProg CName pc: 542 op: STARTLINE (58)

    /** c_decl.e:667	end procedure*/
    // SubProg CName pc: 544 op: RETURNP (29)

// Exiting block BLOCK: CName

// block var s_42759

// block var v_42760
    DeRef(_v_42760);

// block var mode_42762
    DeRef(_22569);
    _22569 = NOVALUE;
    DeRef(_22586);
    _22586 = NOVALUE;
    DeRef(_22590);
    _22590 = NOVALUE;
    DeRef(_22606);
    _22606 = NOVALUE;
    DeRef(_22580);
    _22580 = NOVALUE;
    DeRef(_22551);
    _22551 = NOVALUE;
    DeRef(_22554);
    _22554 = NOVALUE;
    DeRef(_22588);
    _22588 = NOVALUE;
    DeRef(_22584);
    _22584 = NOVALUE;
    DeRef(_22603);
    _22603 = NOVALUE;
    return;
    // SubProg CName pc: 547 op: BADRETURNF (43)
    ;
}


void _58c_stmt(object _stmt_42907, object _arg_42908, object _lhs_arg_42910)
{
    object _argcount_42911 = NOVALUE;
    object _i_42912 = NOVALUE;
// skipping _22668  name type: 0
// skipping _22667  name type: 0
    object _22666 = NOVALUE; // 42995 22666
    object _22665 = NOVALUE; // 42994 22665
    object _22664 = NOVALUE; // 42990 22664
    object _22663 = NOVALUE; // 42989 22663
    object _22662 = NOVALUE; // 42988 22662
    object _22661 = NOVALUE; // 42987 22661
    object _22660 = NOVALUE; // 42986 22660
    object _22659 = NOVALUE; // 42983 22659
    object _22658 = NOVALUE; // 42982 22658
    object _22657 = NOVALUE; // 42981 22657
    object _22656 = NOVALUE; // 42980 22656
    object _22655 = NOVALUE; // 42979 22655
    object _22654 = NOVALUE; // 42978 22654
    object _22653 = NOVALUE; // 42977 22653
    object _22652 = NOVALUE; // 42976 22652
    object _22651 = NOVALUE; // 42975 22651
    object _22650 = NOVALUE; // 42973 22650
// skipping _22649  name type: 0
    object _22648 = NOVALUE; // 42969 22648
// skipping _22647  name type: 0
    object _22646 = NOVALUE; // 42966 22646
// skipping _22645  name type: 0
    object _22644 = NOVALUE; // 42962 22644
    object _22643 = NOVALUE; // 42961 22643
    object _22642 = NOVALUE; // 42960 22642
    object _22641 = NOVALUE; // 42959 22641
// skipping _22640  name type: 0
    object _22639 = NOVALUE; // 42956 22639
    object _22638 = NOVALUE; // 42955 22638
    object _22637 = NOVALUE; // 42954 22637
    object _22636 = NOVALUE; // 42953 22636
    object _22635 = NOVALUE; // 42951 22635
    object _22634 = NOVALUE; // 42950 22634
    object _22633 = NOVALUE; // 42949 22633
    object _22632 = NOVALUE; // 42948 22632
    object _22631 = NOVALUE; // 42947 22631
    object _22630 = NOVALUE; // 42946 22630
    object _22629 = NOVALUE; // 42945 22629
    object _22628 = NOVALUE; // 42944 22628
    object _22627 = NOVALUE; // 42943 22627
    object _22626 = NOVALUE; // 42942 22626
// skipping _22625  name type: 0
// skipping _22624  name type: 0
    object _22623 = NOVALUE; // 42936 22623
    object _22622 = NOVALUE; // 42934 22622
    object _22621 = NOVALUE; // 42933 22621
    object _22620 = NOVALUE; // 42932 22620
    object _22619 = NOVALUE; // 42931 22619
    object _22618 = NOVALUE; // 42930 22618
// skipping _22617  name type: 0
    object _22616 = NOVALUE; // 42927 22616
// skipping _22615  name type: 0
    object _22614 = NOVALUE; // 42919 22614
    object _22613 = NOVALUE; // 42916 22613
    object _22612 = NOVALUE; // 42915 22612
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_stmt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_stmt pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_lhs_arg_42910)) {
        _1 = (object)(DBL_PTR(_lhs_arg_42910)->dbl);
        DeRefDS(_lhs_arg_42910);
        _lhs_arg_42910 = _1;
    }
    // SubProg c_stmt pc: 5 op: STARTLINE (58)

    /** c_decl.e:675		if LAST_PASS = TRUE and Initializing = FALSE then*/
    // SubProg c_stmt pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 11 op: EQUALS (3)
    _22612 = (_58LAST_PASS_42073 == _13TRUE_452);
    // SubProg c_stmt pc: 15 op: SC1_AND_IF (146)
    if (_22612 == 0) {
        goto L1; // [15] 47
    }
    // SubProg c_stmt pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 23 op: EQUALS (3)
    _22614 = (_36Initializing_16516 == _13FALSE_450);
    // SubProg c_stmt pc: 27 op: NOP1 (159)
    // SubProg c_stmt pc: 28 op: IF (20)
    if (_22614 == 0)
    {
        DeRef(_22614);
        _22614 = NOVALUE;
        goto L1; // [28] 47
    }
    else{
        DeRef(_22614);
        _22614 = NOVALUE;
    }
    // SubProg c_stmt pc: 31 op: STARTLINE (58)

    /** c_decl.e:676			cfile_size += 1*/
    // SubProg c_stmt pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 35 op: PLUS (11)
    _36cfile_size_16515 = _36cfile_size_16515 + 1;
    // SubProg c_stmt pc: 41 op: STARTLINE (58)

    /** c_decl.e:677			update_checksum( stmt )*/
    // SubProg c_stmt pc: 43 op: PROC (27)
    RefDS(_stmt_42907);
    _56update_checksum(_stmt_42907);
    // SubProg c_stmt pc: 46 op: NOP1 (159)
L1: // addr: 47 pc: 46 sub: 42905 op: 159
    // SubProg c_stmt pc: 47 op: STARTLINE (58)

    /** c_decl.e:681		if emit_c_output then*/
    // SubProg c_stmt pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 51 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L2; // [51] 60
    }
    else{
    }
    // SubProg c_stmt pc: 54 op: STARTLINE (58)

    /** c_decl.e:682			adjust_indent_before(stmt)*/
    // SubProg c_stmt pc: 56 op: PROC (27)
    RefDS(_stmt_42907);
    _55adjust_indent_before(_stmt_42907);
    // SubProg c_stmt pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 42905 op: 159
    // SubProg c_stmt pc: 60 op: STARTLINE (58)

    /** c_decl.e:685		if atom(arg) then*/
    // SubProg c_stmt pc: 62 op: IS_AN_ATOM (67)
    _22616 = IS_ATOM(_arg_42908);
    // SubProg c_stmt pc: 65 op: IF (20)
    if (_22616 == 0)
    {
        _22616 = NOVALUE;
        goto L3; // [65] 75
    }
    else{
        _22616 = NOVALUE;
    }
    // SubProg c_stmt pc: 68 op: STARTLINE (58)

    /** c_decl.e:686			arg = {arg}*/
    // SubProg c_stmt pc: 70 op: RIGHT_BRACE_N (31)
    _0 = _arg_42908;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_42908);
    ((intptr_t*)_2)[1] = _arg_42908;
    _arg_42908 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg c_stmt pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 42905 op: 159
    // SubProg c_stmt pc: 75 op: STARTLINE (58)

    /** c_decl.e:689		argcount = 1*/
    // SubProg c_stmt pc: 77 op: ASSIGN_I (113)
    _argcount_42911 = 1;
    // SubProg c_stmt pc: 80 op: STARTLINE (58)

    /** c_decl.e:690		i = 1*/
    // SubProg c_stmt pc: 82 op: ASSIGN_I (113)
    _i_42912 = 1;
    // SubProg c_stmt pc: 85 op: STARTLINE (58)

    /** c_decl.e:691		while i <= length(stmt) and length(stmt) > 0 do*/
    // SubProg c_stmt pc: 87 op: NOP2 (110)
    // SubProg c_stmt pc: 89 op: NOPWHILE (158)
L4: // addr: 90 pc: 89 sub: 42905 op: 158
    // SubProg c_stmt pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22618 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22618 = 1;
    }
    // SubProg c_stmt pc: 93 op: LESSEQ (5)
    _22619 = (_i_42912 <= _22618);
    _22618 = NOVALUE;
    // SubProg c_stmt pc: 97 op: SC1_AND_IF (146)
    if (_22619 == 0) {
        goto L5; // [97] 435
    }
    // SubProg c_stmt pc: 101 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22621 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22621 = 1;
    }
    // SubProg c_stmt pc: 104 op: GREATER (6)
    _22622 = (_22621 > 0);
    _22621 = NOVALUE;
    // SubProg c_stmt pc: 108 op: NOP1 (159)
    // SubProg c_stmt pc: 109 op: WHILE (47)
    if (_22622 == 0)
    {
        DeRef(_22622);
        _22622 = NOVALUE;
        goto L5; // [109] 435
    }
    else{
        DeRef(_22622);
        _22622 = NOVALUE;
    }
    // SubProg c_stmt pc: 112 op: STARTLINE (58)

    /** c_decl.e:692			if stmt[i] = '@' then*/
    // SubProg c_stmt pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22623 = (object)*(((s1_ptr)_2)->base + _i_42912);
    // SubProg c_stmt pc: 118 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22623, 64)){
        _22623 = NOVALUE;
        goto L6; // [118] 288
    }
    _22623 = NOVALUE;
    // SubProg c_stmt pc: 122 op: STARTLINE (58)

    /** c_decl.e:694				if i = 1 then*/
    // SubProg c_stmt pc: 124 op: EQUALS_IFW_I (121)
    if (_i_42912 != 1)
    goto L7; // [124] 138
    // SubProg c_stmt pc: 128 op: STARTLINE (58)

    /** c_decl.e:695					LeftSym = TRUE*/
    // SubProg c_stmt pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 132 op: ASSIGN (18)
    _58LeftSym_42083 = _13TRUE_452;
    // SubProg c_stmt pc: 135 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 137 op: NOP1 (159)
L7: // addr: 138 pc: 137 sub: 42905 op: 159
    // SubProg c_stmt pc: 138 op: STARTLINE (58)

    /** c_decl.e:698				if i < length(stmt) and stmt[i+1] > '0' and stmt[i+1] <= '9' then*/
    // SubProg c_stmt pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22626 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22626 = 1;
    }
    // SubProg c_stmt pc: 143 op: LESS (1)
    _22627 = (_i_42912 < _22626);
    _22626 = NOVALUE;
    // SubProg c_stmt pc: 147 op: SC1_AND (141)
    if (_22627 == 0) {
        _22628 = 0;
        goto L8; // [147] 167
    }
    // SubProg c_stmt pc: 151 op: PLUS1 (93)
    _22629 = _i_42912 + 1;
    // SubProg c_stmt pc: 155 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22630 = (object)*(((s1_ptr)_2)->base + _22629);
    // SubProg c_stmt pc: 159 op: GREATER (6)
    if (IS_ATOM_INT(_22630)) {
        _22631 = (_22630 > 48);
    }
    else {
        _22631 = binary_op(GREATER, _22630, 48);
    }
    _22630 = NOVALUE;
    // SubProg c_stmt pc: 163 op: SC2_AND (142)
    if (IS_ATOM_INT(_22631))
    _22628 = (_22631 != 0);
    else
    _22628 = DBL_PTR(_22631)->dbl != 0.0;
    // SubProg c_stmt pc: 166 op: NOP1 (159)
L8: // addr: 167 pc: 166 sub: 42905 op: 159
    // SubProg c_stmt pc: 167 op: SC1_AND_IF (146)
    if (_22628 == 0) {
        goto L9; // [167] 249
    }
    // SubProg c_stmt pc: 171 op: PLUS1 (93)
    _22633 = _i_42912 + 1;
    // SubProg c_stmt pc: 175 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22634 = (object)*(((s1_ptr)_2)->base + _22633);
    // SubProg c_stmt pc: 179 op: LESSEQ (5)
    if (IS_ATOM_INT(_22634)) {
        _22635 = (_22634 <= 57);
    }
    else {
        _22635 = binary_op(LESSEQ, _22634, 57);
    }
    _22634 = NOVALUE;
    // SubProg c_stmt pc: 183 op: NOP1 (159)
    // SubProg c_stmt pc: 184 op: IF (20)
    if (_22635 == 0) {
        DeRef(_22635);
        _22635 = NOVALUE;
        goto L9; // [184] 249
    }
    else {
        if (!IS_ATOM_INT(_22635) && DBL_PTR(_22635)->dbl == 0.0){
            DeRef(_22635);
            _22635 = NOVALUE;
            goto L9; // [184] 249
        }
        DeRef(_22635);
        _22635 = NOVALUE;
    }
    DeRef(_22635);
    _22635 = NOVALUE;
    // SubProg c_stmt pc: 187 op: STARTLINE (58)

    /** c_decl.e:700					if arg[stmt[i+1]-'0'] = lhs_arg then*/
    // SubProg c_stmt pc: 189 op: PLUS1 (93)
    _22636 = _i_42912 + 1;
    // SubProg c_stmt pc: 193 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22637 = (object)*(((s1_ptr)_2)->base + _22636);
    // SubProg c_stmt pc: 197 op: MINUS (10)
    if (IS_ATOM_INT(_22637)) {
        _22638 = _22637 - 48;
    }
    else {
        _22638 = binary_op(MINUS, _22637, 48);
    }
    _22637 = NOVALUE;
    // SubProg c_stmt pc: 201 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42908);
    if (!IS_ATOM_INT(_22638)){
        _22639 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22638)->dbl));
    }
    else{
        _22639 = (object)*(((s1_ptr)_2)->base + _22638);
    }
    // SubProg c_stmt pc: 205 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22639, _lhs_arg_42910)){
        _22639 = NOVALUE;
        goto LA; // [205] 219
    }
    _22639 = NOVALUE;
    // SubProg c_stmt pc: 209 op: STARTLINE (58)

    /** c_decl.e:701						LeftSym = TRUE*/
    // SubProg c_stmt pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 213 op: ASSIGN (18)
    _58LeftSym_42083 = _13TRUE_452;
    // SubProg c_stmt pc: 216 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 218 op: NOP1 (159)
LA: // addr: 219 pc: 218 sub: 42905 op: 159
    // SubProg c_stmt pc: 219 op: STARTLINE (58)

    /** c_decl.e:703					CName(arg[stmt[i+1]-'0'])*/
    // SubProg c_stmt pc: 221 op: PLUS1 (93)
    _22641 = _i_42912 + 1;
    // SubProg c_stmt pc: 225 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22642 = (object)*(((s1_ptr)_2)->base + _22641);
    // SubProg c_stmt pc: 229 op: MINUS (10)
    if (IS_ATOM_INT(_22642)) {
        _22643 = _22642 - 48;
    }
    else {
        _22643 = binary_op(MINUS, _22642, 48);
    }
    _22642 = NOVALUE;
    // SubProg c_stmt pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42908);
    if (!IS_ATOM_INT(_22643)){
        _22644 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22643)->dbl));
    }
    else{
        _22644 = (object)*(((s1_ptr)_2)->base + _22643);
    }
    // SubProg c_stmt pc: 237 op: PROC (27)
    Ref(_22644);
    _58CName(_22644);
    _22644 = NOVALUE;
    // SubProg c_stmt pc: 240 op: STARTLINE (58)

    /** c_decl.e:704					i += 1*/
    // SubProg c_stmt pc: 242 op: PLUS1_I (117)
    _i_42912 = _i_42912 + 1;
    // SubProg c_stmt pc: 246 op: ELSE (23)
    goto LB; // [246] 279
    // SubProg c_stmt pc: 248 op: NOP1 (159)
L9: // addr: 249 pc: 248 sub: 42905 op: 159
    // SubProg c_stmt pc: 249 op: STARTLINE (58)

    /** c_decl.e:708					if arg[argcount] = lhs_arg then*/
    // SubProg c_stmt pc: 251 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42908);
    _22646 = (object)*(((s1_ptr)_2)->base + _argcount_42911);
    // SubProg c_stmt pc: 255 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22646, _lhs_arg_42910)){
        _22646 = NOVALUE;
        goto LC; // [255] 269
    }
    _22646 = NOVALUE;
    // SubProg c_stmt pc: 259 op: STARTLINE (58)

    /** c_decl.e:709						LeftSym = TRUE*/
    // SubProg c_stmt pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 263 op: ASSIGN (18)
    _58LeftSym_42083 = _13TRUE_452;
    // SubProg c_stmt pc: 266 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 268 op: NOP1 (159)
LC: // addr: 269 pc: 268 sub: 42905 op: 159
    // SubProg c_stmt pc: 269 op: STARTLINE (58)

    /** c_decl.e:711					CName(arg[argcount])*/
    // SubProg c_stmt pc: 271 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42908);
    _22648 = (object)*(((s1_ptr)_2)->base + _argcount_42911);
    // SubProg c_stmt pc: 275 op: PROC (27)
    Ref(_22648);
    _58CName(_22648);
    _22648 = NOVALUE;
    // SubProg c_stmt pc: 278 op: NOP1 (159)
LB: // addr: 279 pc: 278 sub: 42905 op: 159
    // SubProg c_stmt pc: 279 op: STARTLINE (58)

    /** c_decl.e:714				argcount += 1*/
    // SubProg c_stmt pc: 281 op: PLUS1_I (117)
    _argcount_42911 = _argcount_42911 + 1;
    // SubProg c_stmt pc: 285 op: ELSE (23)
    goto LD; // [285] 353
    // SubProg c_stmt pc: 287 op: NOP1 (159)
L6: // addr: 288 pc: 287 sub: 42905 op: 159
    // SubProg c_stmt pc: 288 op: STARTLINE (58)

    /** c_decl.e:717				c_putc(stmt[i])*/
    // SubProg c_stmt pc: 290 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22650 = (object)*(((s1_ptr)_2)->base + _i_42912);
    // SubProg c_stmt pc: 294 op: PROC (27)
    Ref(_22650);
    _55c_putc(_22650);
    _22650 = NOVALUE;
    // SubProg c_stmt pc: 297 op: STARTLINE (58)

    /** c_decl.e:718				if stmt[i] = '&' and i < length(stmt) and stmt[i+1] = '@' then*/
    // SubProg c_stmt pc: 299 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22651 = (object)*(((s1_ptr)_2)->base + _i_42912);
    // SubProg c_stmt pc: 303 op: EQUALS (3)
    if (IS_ATOM_INT(_22651)) {
        _22652 = (_22651 == 38);
    }
    else {
        _22652 = binary_op(EQUALS, _22651, 38);
    }
    _22651 = NOVALUE;
    // SubProg c_stmt pc: 307 op: SC1_AND (141)
    if (IS_ATOM_INT(_22652)) {
        if (_22652 == 0) {
            DeRef(_22653);
            _22653 = 0;
            goto LE; // [307] 322
        }
    }
    else {
        if (DBL_PTR(_22652)->dbl == 0.0) {
            DeRef(_22653);
            _22653 = 0;
            goto LE; // [307] 322
        }
    }
    // SubProg c_stmt pc: 311 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22654 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22654 = 1;
    }
    // SubProg c_stmt pc: 314 op: LESS (1)
    _22655 = (_i_42912 < _22654);
    _22654 = NOVALUE;
    // SubProg c_stmt pc: 318 op: SC2_AND (142)
    DeRef(_22653);
    _22653 = (_22655 != 0);
    // SubProg c_stmt pc: 321 op: NOP1 (159)
LE: // addr: 322 pc: 321 sub: 42905 op: 159
    // SubProg c_stmt pc: 322 op: SC1_AND_IF (146)
    if (_22653 == 0) {
        goto LF; // [322] 352
    }
    // SubProg c_stmt pc: 326 op: PLUS1 (93)
    _22657 = _i_42912 + 1;
    // SubProg c_stmt pc: 330 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22658 = (object)*(((s1_ptr)_2)->base + _22657);
    // SubProg c_stmt pc: 334 op: EQUALS (3)
    if (IS_ATOM_INT(_22658)) {
        _22659 = (_22658 == 64);
    }
    else {
        _22659 = binary_op(EQUALS, _22658, 64);
    }
    _22658 = NOVALUE;
    // SubProg c_stmt pc: 338 op: NOP1 (159)
    // SubProg c_stmt pc: 339 op: IF (20)
    if (_22659 == 0) {
        DeRef(_22659);
        _22659 = NOVALUE;
        goto LF; // [339] 352
    }
    else {
        if (!IS_ATOM_INT(_22659) && DBL_PTR(_22659)->dbl == 0.0){
            DeRef(_22659);
            _22659 = NOVALUE;
            goto LF; // [339] 352
        }
        DeRef(_22659);
        _22659 = NOVALUE;
    }
    DeRef(_22659);
    _22659 = NOVALUE;
    // SubProg c_stmt pc: 342 op: STARTLINE (58)

    /** c_decl.e:719					LeftSym = TRUE -- never say: x = x &y or andy - always leave space*/
    // SubProg c_stmt pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 346 op: ASSIGN (18)
    _58LeftSym_42083 = _13TRUE_452;
    // SubProg c_stmt pc: 349 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 351 op: NOP1 (159)
LF: // addr: 352 pc: 351 sub: 42905 op: 159
    // SubProg c_stmt pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 42905 op: 159
    // SubProg c_stmt pc: 353 op: STARTLINE (58)

    /** c_decl.e:723			if stmt[i] = '\n' and i < length(stmt) then*/
    // SubProg c_stmt pc: 355 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42907);
    _22660 = (object)*(((s1_ptr)_2)->base + _i_42912);
    // SubProg c_stmt pc: 359 op: EQUALS (3)
    if (IS_ATOM_INT(_22660)) {
        _22661 = (_22660 == 10);
    }
    else {
        _22661 = binary_op(EQUALS, _22660, 10);
    }
    _22660 = NOVALUE;
    // SubProg c_stmt pc: 363 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22661)) {
        if (_22661 == 0) {
            goto L10; // [363] 424
        }
    }
    else {
        if (DBL_PTR(_22661)->dbl == 0.0) {
            goto L10; // [363] 424
        }
    }
    // SubProg c_stmt pc: 367 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22663 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22663 = 1;
    }
    // SubProg c_stmt pc: 370 op: LESS (1)
    _22664 = (_i_42912 < _22663);
    _22663 = NOVALUE;
    // SubProg c_stmt pc: 374 op: NOP1 (159)
    // SubProg c_stmt pc: 375 op: IF (20)
    if (_22664 == 0)
    {
        DeRef(_22664);
        _22664 = NOVALUE;
        goto L10; // [375] 424
    }
    else{
        DeRef(_22664);
        _22664 = NOVALUE;
    }
    // SubProg c_stmt pc: 378 op: STARTLINE (58)

    /** c_decl.e:724				if emit_c_output then*/
    // SubProg c_stmt pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 382 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L11; // [382] 391
    }
    else{
    }
    // SubProg c_stmt pc: 385 op: STARTLINE (58)

    /** c_decl.e:725					adjust_indent_after(stmt)*/
    // SubProg c_stmt pc: 387 op: PROC (27)
    RefDS(_stmt_42907);
    _55adjust_indent_after(_stmt_42907);
    // SubProg c_stmt pc: 390 op: NOP1 (159)
L11: // addr: 391 pc: 390 sub: 42905 op: 159
    // SubProg c_stmt pc: 391 op: STARTLINE (58)

    /** c_decl.e:727				stmt = stmt[i+1..$]*/
    // SubProg c_stmt pc: 393 op: PLUS1 (93)
    _22665 = _i_42912 + 1;
    if (_22665 > MAXINT){
        _22665 = NewDouble((eudouble)_22665);
    }
    // SubProg c_stmt pc: 397 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42907)){
            _22666 = SEQ_PTR(_stmt_42907)->length;
    }
    else {
        _22666 = 1;
    }
    // SubProg c_stmt pc: 400 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_stmt_42907;
    RHS_Slice(_stmt_42907, _22665, _22666);
    // SubProg c_stmt pc: 405 op: STARTLINE (58)

    /** c_decl.e:728				i = 0*/
    // SubProg c_stmt pc: 407 op: ASSIGN_I (113)
    _i_42912 = 0;
    // SubProg c_stmt pc: 410 op: STARTLINE (58)

    /** c_decl.e:729				if emit_c_output then*/
    // SubProg c_stmt pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 414 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L12; // [414] 423
    }
    else{
    }
    // SubProg c_stmt pc: 417 op: STARTLINE (58)

    /** c_decl.e:730					adjust_indent_before(stmt)*/
    // SubProg c_stmt pc: 419 op: PROC (27)
    RefDS(_stmt_42907);
    _55adjust_indent_before(_stmt_42907);
    // SubProg c_stmt pc: 422 op: NOP1 (159)
L12: // addr: 423 pc: 422 sub: 42905 op: 159
    // SubProg c_stmt pc: 423 op: NOP1 (159)
L10: // addr: 424 pc: 423 sub: 42905 op: 159
    // SubProg c_stmt pc: 424 op: STARTLINE (58)

    /** c_decl.e:734			i += 1*/
    // SubProg c_stmt pc: 426 op: PLUS1_I (117)
    _i_42912 = _i_42912 + 1;
    // SubProg c_stmt pc: 430 op: STARTLINE (58)

    /** c_decl.e:735		end while*/
    // SubProg c_stmt pc: 432 op: ENDWHILE (22)
    goto L4; // [432] 90
    // SubProg c_stmt pc: 434 op: NOP1 (159)
L5: // addr: 435 pc: 434 sub: 42905 op: 159
    // SubProg c_stmt pc: 435 op: STARTLINE (58)

    /** c_decl.e:737		if emit_c_output then*/
    // SubProg c_stmt pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 439 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L13; // [439] 448
    }
    else{
    }
    // SubProg c_stmt pc: 442 op: STARTLINE (58)

    /** c_decl.e:738			adjust_indent_after(stmt)*/
    // SubProg c_stmt pc: 444 op: PROC (27)
    RefDS(_stmt_42907);
    _55adjust_indent_after(_stmt_42907);
    // SubProg c_stmt pc: 447 op: NOP1 (159)
L13: // addr: 448 pc: 447 sub: 42905 op: 159
    // SubProg c_stmt pc: 448 op: STARTLINE (58)

    /** c_decl.e:740	end procedure*/
    // SubProg c_stmt pc: 450 op: RETURNP (29)

// Exiting block BLOCK: c_stmt

// block var stmt_42907
    DeRefDS(_stmt_42907);

// block var arg_42908
    DeRef(_arg_42908);

// block var lhs_arg_42910

// block var argcount_42911

// block var i_42912
    DeRef(_22638);
    _22638 = NOVALUE;
    DeRef(_22612);
    _22612 = NOVALUE;
    DeRef(_22643);
    _22643 = NOVALUE;
    DeRef(_22627);
    _22627 = NOVALUE;
    DeRef(_22652);
    _22652 = NOVALUE;
    DeRef(_22631);
    _22631 = NOVALUE;
    DeRef(_22629);
    _22629 = NOVALUE;
    DeRef(_22619);
    _22619 = NOVALUE;
    DeRef(_22633);
    _22633 = NOVALUE;
    DeRef(_22636);
    _22636 = NOVALUE;
    DeRef(_22655);
    _22655 = NOVALUE;
    DeRef(_22657);
    _22657 = NOVALUE;
    DeRef(_22661);
    _22661 = NOVALUE;
    DeRef(_22665);
    _22665 = NOVALUE;
    DeRef(_22641);
    _22641 = NOVALUE;
    return;
    // SubProg c_stmt pc: 453 op: BADRETURNF (43)
    ;
}


void _58c_stmt0(object _stmt_43006)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_stmt0 pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_stmt0 pc: 3 op: STARTLINE (58)

    /** c_decl.e:745		if emit_c_output then*/
    // SubProg c_stmt0 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt0 pc: 7 op: IF (20)
    if (_55emit_c_output_46099 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }
    // SubProg c_stmt0 pc: 10 op: STARTLINE (58)

    /** c_decl.e:746			c_stmt(stmt, {})*/
    // SubProg c_stmt0 pc: 12 op: PROC (27)
    RefDS(_stmt_43006);
    RefDS(_21933);
    _58c_stmt(_stmt_43006, _21933, 0);
    // SubProg c_stmt0 pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 43004 op: 159
    // SubProg c_stmt0 pc: 18 op: STARTLINE (58)

    /** c_decl.e:748	end procedure*/
    // SubProg c_stmt0 pc: 20 op: RETURNP (29)

// Exiting block BLOCK: c_stmt0

// block var stmt_43006
    DeRefDS(_stmt_43006);
    return;
    // SubProg c_stmt0 pc: 23 op: BADRETURNF (43)
    ;
}


object _58needs_uninit(object _eentry_43011)
{
    object _22689 = NOVALUE; // 43047 22689
    object _22688 = NOVALUE; // 43046 22688
    object _22687 = NOVALUE; // 43044 22687
    object _22686 = NOVALUE; // 43042 22686
    object _22685 = NOVALUE; // 43041 22685
    object _22684 = NOVALUE; // 43039 22684
    object _22683 = NOVALUE; // 43037 22683
    object _22682 = NOVALUE; // 43036 22682
    object _22681 = NOVALUE; // 43034 22681
    object _22680 = NOVALUE; // 43032 22680
    object _22679 = NOVALUE; // 43031 22679
    object _22678 = NOVALUE; // 43029 22678
    object _22677 = NOVALUE; // 43027 22677
    object _22676 = NOVALUE; // 43026 22676
    object _22675 = NOVALUE; // 43024 22675
    object _22674 = NOVALUE; // 43022 22674
    object _22673 = NOVALUE; // 43021 22673
    object _22672 = NOVALUE; // 43019 22672
    object _22671 = NOVALUE; // 43017 22671
    object _22670 = NOVALUE; // 43016 22670
    object _22669 = NOVALUE; // 43014 22669
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg needs_uninit pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg needs_uninit pc: 3 op: STARTLINE (58)

    /** c_decl.e:751		if eentry[S_SCOPE] >= SC_LOCAL*/
    // SubProg needs_uninit pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22669 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 13 op: GREATEREQ (2)
    if (IS_ATOM_INT(_22669)) {
        _22670 = (_22669 >= 5);
    }
    else {
        _22670 = binary_op(GREATEREQ, _22669, 5);
    }
    _22669 = NOVALUE;
    // SubProg needs_uninit pc: 17 op: SC1_AND (141)
    if (IS_ATOM_INT(_22670)) {
        if (_22670 == 0) {
            _22671 = 0;
            goto L1; // [17] 77
        }
    }
    else {
        if (DBL_PTR(_22670)->dbl == 0.0) {
            _22671 = 0;
            goto L1; // [17] 77
        }
    }
    // SubProg needs_uninit pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22672 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 29 op: LESSEQ (5)
    if (IS_ATOM_INT(_22672)) {
        _22673 = (_22672 <= 6);
    }
    else {
        _22673 = binary_op(LESSEQ, _22672, 6);
    }
    _22672 = NOVALUE;
    // SubProg needs_uninit pc: 33 op: SC1_OR (143)
    if (IS_ATOM_INT(_22673)) {
        if (_22673 != 0) {
            _22674 = 1;
            goto L2; // [33] 53
        }
    }
    else {
        if (DBL_PTR(_22673)->dbl != 0.0) {
            _22674 = 1;
            goto L2; // [33] 53
        }
    }
    // SubProg needs_uninit pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22675 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 45 op: EQUALS (3)
    if (IS_ATOM_INT(_22675)) {
        _22676 = (_22675 == 11);
    }
    else {
        _22676 = binary_op(EQUALS, _22675, 11);
    }
    _22675 = NOVALUE;
    // SubProg needs_uninit pc: 49 op: SC2_OR (144)
    DeRef(_22674);
    if (IS_ATOM_INT(_22676))
    _22674 = (_22676 != 0);
    else
    _22674 = DBL_PTR(_22676)->dbl != 0.0;
    // SubProg needs_uninit pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 43009 op: 159
    // SubProg needs_uninit pc: 53 op: SC1_OR (143)
    if (_22674 != 0) {
        _22677 = 1;
        goto L3; // [53] 73
    }
    // SubProg needs_uninit pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22678 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 65 op: EQUALS (3)
    if (IS_ATOM_INT(_22678)) {
        _22679 = (_22678 == 13);
    }
    else {
        _22679 = binary_op(EQUALS, _22678, 13);
    }
    _22678 = NOVALUE;
    // SubProg needs_uninit pc: 69 op: SC2_OR (144)
    if (IS_ATOM_INT(_22679))
    _22677 = (_22679 != 0);
    else
    _22677 = DBL_PTR(_22679)->dbl != 0.0;
    // SubProg needs_uninit pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 43009 op: 159
    // SubProg needs_uninit pc: 73 op: SC2_AND (142)
    DeRef(_22671);
    _22671 = (_22677 != 0);
    // SubProg needs_uninit pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 43009 op: 159
    // SubProg needs_uninit pc: 77 op: SC1_AND (141)
    if (_22671 == 0) {
        _22680 = 0;
        goto L4; // [77] 97
    }
    // SubProg needs_uninit pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22681 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg needs_uninit pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 89 op: NOTEQ (4)
    if (IS_ATOM_INT(_22681)) {
        _22682 = (_22681 != 0);
    }
    else {
        _22682 = binary_op(NOTEQ, _22681, 0);
    }
    _22681 = NOVALUE;
    // SubProg needs_uninit pc: 93 op: SC2_AND (142)
    if (IS_ATOM_INT(_22682))
    _22680 = (_22682 != 0);
    else
    _22680 = DBL_PTR(_22682)->dbl != 0.0;
    // SubProg needs_uninit pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 43009 op: 159
    // SubProg needs_uninit pc: 97 op: SC1_AND (141)
    if (_22680 == 0) {
        _22683 = 0;
        goto L5; // [97] 117
    }
    // SubProg needs_uninit pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    _22684 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg needs_uninit pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 109 op: NOTEQ (4)
    if (IS_ATOM_INT(_22684)) {
        _22685 = (_22684 != 99);
    }
    else {
        _22685 = binary_op(NOTEQ, _22684, 99);
    }
    _22684 = NOVALUE;
    // SubProg needs_uninit pc: 113 op: SC2_AND (142)
    if (IS_ATOM_INT(_22685))
    _22683 = (_22685 != 0);
    else
    _22683 = DBL_PTR(_22685)->dbl != 0.0;
    // SubProg needs_uninit pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 43009 op: 159
    // SubProg needs_uninit pc: 117 op: SC1_AND_IF (146)
    if (_22683 == 0) {
        goto L6; // [117] 150
    }
    // SubProg needs_uninit pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43011);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22687 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22687 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg needs_uninit pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 129 op: FIND_FROM (176)
    _22688 = find_from(_22687, _38RTN_TOKS_16044, 1);
    _22687 = NOVALUE;
    // SubProg needs_uninit pc: 134 op: NOT (7)
    _22689 = (_22688 == 0);
    _22688 = NOVALUE;
    // SubProg needs_uninit pc: 137 op: NOP1 (159)
    // SubProg needs_uninit pc: 138 op: IF (20)
    if (_22689 == 0)
    {
        DeRef(_22689);
        _22689 = NOVALUE;
        goto L6; // [138] 150
    }
    else{
        DeRef(_22689);
        _22689 = NOVALUE;
    }
    // SubProg needs_uninit pc: 141 op: STARTLINE (58)

    /** c_decl.e:757			return 1*/
    // SubProg needs_uninit pc: 143 op: RETURNF (28)

// Exiting block BLOCK: needs_uninit

// block var eentry_43011
    DeRefDS(_eentry_43011);
    DeRef(_22676);
    _22676 = NOVALUE;
    DeRef(_22685);
    _22685 = NOVALUE;
    DeRef(_22670);
    _22670 = NOVALUE;
    DeRef(_22673);
    _22673 = NOVALUE;
    DeRef(_22679);
    _22679 = NOVALUE;
    DeRef(_22682);
    _22682 = NOVALUE;
    return 1;
    // SubProg needs_uninit pc: 147 op: ELSE (23)
    goto L7; // [147] 157
    // SubProg needs_uninit pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 43009 op: 159
    // SubProg needs_uninit pc: 150 op: STARTLINE (58)

    /** c_decl.e:759			return 0*/
    // SubProg needs_uninit pc: 152 op: RETURNF (28)

// Exiting block BLOCK: needs_uninit

// block var eentry_43011
    DeRefDS(_eentry_43011);
    DeRef(_22676);
    _22676 = NOVALUE;
    DeRef(_22685);
    _22685 = NOVALUE;
    DeRef(_22670);
    _22670 = NOVALUE;
    DeRef(_22673);
    _22673 = NOVALUE;
    DeRef(_22679);
    _22679 = NOVALUE;
    DeRef(_22682);
    _22682 = NOVALUE;
    return 0;
    // SubProg needs_uninit pc: 156 op: NOP1 (159)
L7: // addr: 157 pc: 156 sub: 43009 op: 159
    // SubProg needs_uninit pc: 157 op: BADRETURNF (43)
    ;
}


void _58DeclareFileVars()
{
    object _s_43052 = NOVALUE;
    object _eentry_43054 = NOVALUE;
    object _cleanup_vars_43148 = NOVALUE;
    object _22772 = NOVALUE; // 43213 22772
    object _22765 = NOVALUE; // 43206 22765
// skipping _22761  name type: 0
    object _22760 = NOVALUE; // 43200 22760
// skipping _22759  name type: 0
    object _22757 = NOVALUE; // 43195 22757
    object _22756 = NOVALUE; // 43192 22756
    object _22755 = NOVALUE; // 43191 22755
    object _22753 = NOVALUE; // 43188 22753
// skipping _22752  name type: 0
// skipping _22750  name type: 0
    object _22749 = NOVALUE; // 43180 22749
// skipping _22746  name type: 0
    object _22745 = NOVALUE; // 43173 22745
// skipping _22744  name type: 0
    object _22742 = NOVALUE; // 43168 22742
    object _22741 = NOVALUE; // 43165 22741
    object _22740 = NOVALUE; // 43164 22740
    object _22738 = NOVALUE; // 43161 22738
// skipping _22737  name type: 0
// skipping _22735  name type: 0
    object _22734 = NOVALUE; // 43153 22734
// skipping _22732  name type: 0
// skipping _22731  name type: 0
    object _22730 = NOVALUE; // 43141 22730
    object _22729 = NOVALUE; // 43138 22729
    object _22728 = NOVALUE; // 43135 22728
    object _22725 = NOVALUE; // 43127 22725
    object _22724 = NOVALUE; // 43125 22724
    object _22722 = NOVALUE; // 43121 22722
    object _22721 = NOVALUE; // 43120 22721
    object _22720 = NOVALUE; // 43116 22720
    object _22719 = NOVALUE; // 43113 22719
// skipping _22716  name type: 0
    object _22715 = NOVALUE; // 43103 22715
    object _22714 = NOVALUE; // 43100 22714
    object _22713 = NOVALUE; // 43099 22713
    object _22712 = NOVALUE; // 43097 22712
    object _22711 = NOVALUE; // 43095 22711
    object _22710 = NOVALUE; // 43094 22710
    object _22709 = NOVALUE; // 43092 22709
    object _22708 = NOVALUE; // 43090 22708
    object _22707 = NOVALUE; // 43089 22707
    object _22706 = NOVALUE; // 43087 22706
    object _22705 = NOVALUE; // 43085 22705
    object _22704 = NOVALUE; // 43084 22704
    object _22703 = NOVALUE; // 43082 22703
    object _22702 = NOVALUE; // 43080 22702
    object _22701 = NOVALUE; // 43079 22701
    object _22700 = NOVALUE; // 43077 22700
    object _22699 = NOVALUE; // 43075 22699
    object _22698 = NOVALUE; // 43074 22698
    object _22697 = NOVALUE; // 43072 22697
    object _22696 = NOVALUE; // 43070 22696
    object _22695 = NOVALUE; // 43069 22695
    object _22694 = NOVALUE; // 43067 22694
// skipping _22693  name type: 0
// skipping _22692  name type: 0
    object _22691 = NOVALUE; // 43059 22691
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareFileVars pc: 1 op: STARTLINE (58)

    /** c_decl.e:769		c_puts("// Declaring file vars\n")*/
    // SubProg DeclareFileVars pc: 3 op: PROC (27)
    RefDS(_22690);
    _55c_puts(_22690);
    // SubProg DeclareFileVars pc: 6 op: STARTLINE (58)

    /** c_decl.e:770		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22691 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg DeclareFileVars pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22691);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22691 = NOVALUE;
    // SubProg DeclareFileVars pc: 24 op: STARTLINE (58)

    /** c_decl.e:772		while s do*/
    // SubProg DeclareFileVars pc: 26 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 28 op: NOPWHILE (158)
L1: // addr: 29 pc: 28 sub: 43049 op: 158
    // SubProg DeclareFileVars pc: 29 op: WHILE (47)
    if (_s_43052 == 0)
    {
        goto L2; // [29] 328
    }
    else{
    }
    // SubProg DeclareFileVars pc: 32 op: STARTLINE (58)

    /** c_decl.e:773			eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 36 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43054);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_43054 = (object)*(((s1_ptr)_2)->base + _s_43052);
    Ref(_eentry_43054);
    // SubProg DeclareFileVars pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 42 op: STARTLINE (58)

    /** c_decl.e:774			if eentry[S_SCOPE] >= SC_LOCAL*/
    // SubProg DeclareFileVars pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 46 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22694 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 52 op: GREATEREQ (2)
    if (IS_ATOM_INT(_22694)) {
        _22695 = (_22694 >= 5);
    }
    else {
        _22695 = binary_op(GREATEREQ, _22694, 5);
    }
    _22694 = NOVALUE;
    // SubProg DeclareFileVars pc: 56 op: SC1_AND (141)
    if (IS_ATOM_INT(_22695)) {
        if (_22695 == 0) {
            DeRef(_22696);
            _22696 = 0;
            goto L3; // [56] 116
        }
    }
    else {
        if (DBL_PTR(_22695)->dbl == 0.0) {
            DeRef(_22696);
            _22696 = 0;
            goto L3; // [56] 116
        }
    }
    // SubProg DeclareFileVars pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22697 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 68 op: LESSEQ (5)
    if (IS_ATOM_INT(_22697)) {
        _22698 = (_22697 <= 6);
    }
    else {
        _22698 = binary_op(LESSEQ, _22697, 6);
    }
    _22697 = NOVALUE;
    // SubProg DeclareFileVars pc: 72 op: SC1_OR (143)
    if (IS_ATOM_INT(_22698)) {
        if (_22698 != 0) {
            DeRef(_22699);
            _22699 = 1;
            goto L4; // [72] 92
        }
    }
    else {
        if (DBL_PTR(_22698)->dbl != 0.0) {
            DeRef(_22699);
            _22699 = 1;
            goto L4; // [72] 92
        }
    }
    // SubProg DeclareFileVars pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 78 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22700 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 84 op: EQUALS (3)
    if (IS_ATOM_INT(_22700)) {
        _22701 = (_22700 == 11);
    }
    else {
        _22701 = binary_op(EQUALS, _22700, 11);
    }
    _22700 = NOVALUE;
    // SubProg DeclareFileVars pc: 88 op: SC2_OR (144)
    DeRef(_22699);
    if (IS_ATOM_INT(_22701))
    _22699 = (_22701 != 0);
    else
    _22699 = DBL_PTR(_22701)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 92 op: SC1_OR (143)
    if (_22699 != 0) {
        _22702 = 1;
        goto L5; // [92] 112
    }
    // SubProg DeclareFileVars pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22703 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 104 op: EQUALS (3)
    if (IS_ATOM_INT(_22703)) {
        _22704 = (_22703 == 13);
    }
    else {
        _22704 = binary_op(EQUALS, _22703, 13);
    }
    _22703 = NOVALUE;
    // SubProg DeclareFileVars pc: 108 op: SC2_OR (144)
    if (IS_ATOM_INT(_22704))
    _22702 = (_22704 != 0);
    else
    _22702 = DBL_PTR(_22704)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 112 op: SC2_AND (142)
    DeRef(_22696);
    _22696 = (_22702 != 0);
    // SubProg DeclareFileVars pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 116 op: SC1_AND (141)
    if (_22696 == 0) {
        _22705 = 0;
        goto L6; // [116] 136
    }
    // SubProg DeclareFileVars pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22706 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg DeclareFileVars pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 128 op: NOTEQ (4)
    if (IS_ATOM_INT(_22706)) {
        _22707 = (_22706 != 0);
    }
    else {
        _22707 = binary_op(NOTEQ, _22706, 0);
    }
    _22706 = NOVALUE;
    // SubProg DeclareFileVars pc: 132 op: SC2_AND (142)
    if (IS_ATOM_INT(_22707))
    _22705 = (_22707 != 0);
    else
    _22705 = DBL_PTR(_22707)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 136 op: SC1_AND (141)
    if (_22705 == 0) {
        _22708 = 0;
        goto L7; // [136] 156
    }
    // SubProg DeclareFileVars pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 142 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22709 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg DeclareFileVars pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 148 op: NOTEQ (4)
    if (IS_ATOM_INT(_22709)) {
        _22710 = (_22709 != 99);
    }
    else {
        _22710 = binary_op(NOTEQ, _22709, 99);
    }
    _22709 = NOVALUE;
    // SubProg DeclareFileVars pc: 152 op: SC2_AND (142)
    if (IS_ATOM_INT(_22710))
    _22708 = (_22710 != 0);
    else
    _22708 = DBL_PTR(_22710)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 155 op: NOP1 (159)
L7: // addr: 156 pc: 155 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 156 op: SC1_AND_IF (146)
    if (_22708 == 0) {
        goto L8; // [156] 307
    }
    // SubProg DeclareFileVars pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22712 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22712 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg DeclareFileVars pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 168 op: FIND_FROM (176)
    _22713 = find_from(_22712, _38RTN_TOKS_16044, 1);
    _22712 = NOVALUE;
    // SubProg DeclareFileVars pc: 173 op: NOT (7)
    _22714 = (_22713 == 0);
    _22713 = NOVALUE;
    // SubProg DeclareFileVars pc: 176 op: NOP1 (159)
    // SubProg DeclareFileVars pc: 177 op: IF (20)
    if (_22714 == 0)
    {
        DeRef(_22714);
        _22714 = NOVALUE;
        goto L8; // [177] 307
    }
    else{
        DeRef(_22714);
        _22714 = NOVALUE;
    }
    // SubProg DeclareFileVars pc: 180 op: STARTLINE (58)

    /** c_decl.e:780				if eentry[S_TOKEN] = PROC then*/
    // SubProg DeclareFileVars pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 184 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22715 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22715 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg DeclareFileVars pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 190 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22715, 27)){
        _22715 = NOVALUE;
        goto L9; // [190] 202
    }
    _22715 = NOVALUE;
    // SubProg DeclareFileVars pc: 194 op: STARTLINE (58)

    /** c_decl.e:781					c_puts( "void ")*/
    // SubProg DeclareFileVars pc: 196 op: PROC (27)
    RefDS(_22717);
    _55c_puts(_22717);
    // SubProg DeclareFileVars pc: 199 op: ELSE (23)
    goto LA; // [199] 208
    // SubProg DeclareFileVars pc: 201 op: NOP1 (159)
L9: // addr: 202 pc: 201 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 202 op: STARTLINE (58)

    /** c_decl.e:783					c_puts("object ")*/
    // SubProg DeclareFileVars pc: 204 op: PROC (27)
    RefDS(_22718);
    _55c_puts(_22718);
    // SubProg DeclareFileVars pc: 207 op: NOP1 (159)
LA: // addr: 208 pc: 207 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 208 op: STARTLINE (58)

    /** c_decl.e:785				c_printf("_%d", eentry[S_FILE_NO])*/
    // SubProg DeclareFileVars pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 212 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22719 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22719 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg DeclareFileVars pc: 216 op: PROC (27)
    RefDS(_22056);
    Ref(_22719);
    _55c_printf(_22056, _22719);
    _22719 = NOVALUE;
    // SubProg DeclareFileVars pc: 220 op: STARTLINE (58)

    /** c_decl.e:786				c_puts(eentry[S_NAME])*/
    // SubProg DeclareFileVars pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 224 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22720 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22720 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    // SubProg DeclareFileVars pc: 228 op: PROC (27)
    Ref(_22720);
    _55c_puts(_22720);
    _22720 = NOVALUE;
    // SubProg DeclareFileVars pc: 231 op: STARTLINE (58)

    /** c_decl.e:787				if is_integer( eentry[S_OBJ] ) then*/
    // SubProg DeclareFileVars pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 235 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22721 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg DeclareFileVars pc: 239 op: PROC (27)
    Ref(_22721);
    _22722 = _36is_integer(_22721);
    _22721 = NOVALUE;
    // SubProg DeclareFileVars pc: 243 op: IF (20)
    if (_22722 == 0) {
        DeRef(_22722);
        _22722 = NOVALUE;
        goto LB; // [243] 267
    }
    else {
        if (!IS_ATOM_INT(_22722) && DBL_PTR(_22722)->dbl == 0.0){
            DeRef(_22722);
            _22722 = NOVALUE;
            goto LB; // [243] 267
        }
        DeRef(_22722);
        _22722 = NOVALUE;
    }
    DeRef(_22722);
    _22722 = NOVALUE;
    // SubProg DeclareFileVars pc: 246 op: STARTLINE (58)

    /** c_decl.e:788						c_printf(" = %d%s;\n", { eentry[S_OBJ], LL_suffix} )*/
    // SubProg DeclareFileVars pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    _22724 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg DeclareFileVars pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 256 op: RIGHT_BRACE_2 (85)
    RefDS(_59LL_suffix_29577);
    Ref(_22724);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _22724;
    ((intptr_t *)_2)[2] = _59LL_suffix_29577;
    _22725 = MAKE_SEQ(_1);
    _22724 = NOVALUE;
    // SubProg DeclareFileVars pc: 260 op: PROC (27)
    RefDS(_22723);
    _55c_printf(_22723, _22725);
    _22725 = NOVALUE;
    // SubProg DeclareFileVars pc: 264 op: ELSE (23)
    goto LC; // [264] 273
    // SubProg DeclareFileVars pc: 266 op: NOP1 (159)
LB: // addr: 267 pc: 266 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 267 op: STARTLINE (58)

    /** c_decl.e:790					c_puts(" = NOVALUE;\n")*/
    // SubProg DeclareFileVars pc: 269 op: PROC (27)
    RefDS(_22726);
    _55c_puts(_22726);
    // SubProg DeclareFileVars pc: 272 op: NOP1 (159)
LC: // addr: 273 pc: 272 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 273 op: STARTLINE (58)

    /** c_decl.e:793				c_hputs("extern object ")*/
    // SubProg DeclareFileVars pc: 275 op: PROC (27)
    RefDS(_22727);
    _55c_hputs(_22727);
    // SubProg DeclareFileVars pc: 278 op: STARTLINE (58)

    /** c_decl.e:794				c_hprintf("_%d", eentry[S_FILE_NO])*/
    // SubProg DeclareFileVars pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 282 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22728 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22728 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg DeclareFileVars pc: 286 op: PROC (27)
    RefDS(_22056);
    Ref(_22728);
    _55c_hprintf(_22056, _22728);
    _22728 = NOVALUE;
    // SubProg DeclareFileVars pc: 290 op: STARTLINE (58)

    /** c_decl.e:795				c_hputs(eentry[S_NAME])*/
    // SubProg DeclareFileVars pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 294 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22729 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22729 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    // SubProg DeclareFileVars pc: 298 op: PROC (27)
    Ref(_22729);
    _55c_hputs(_22729);
    _22729 = NOVALUE;
    // SubProg DeclareFileVars pc: 301 op: STARTLINE (58)

    /** c_decl.e:797				c_hputs(";\n")*/
    // SubProg DeclareFileVars pc: 303 op: PROC (27)
    RefDS(_22209);
    _55c_hputs(_22209);
    // SubProg DeclareFileVars pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 307 op: STARTLINE (58)

    /** c_decl.e:799			s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 311 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22730 = (object)*(((s1_ptr)_2)->base + _s_43052);
    // SubProg DeclareFileVars pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 317 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22730);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22730 = NOVALUE;
    // SubProg DeclareFileVars pc: 323 op: STARTLINE (58)

    /** c_decl.e:800		end while*/
    // SubProg DeclareFileVars pc: 325 op: ENDWHILE (22)
    goto L1; // [325] 29
    // SubProg DeclareFileVars pc: 327 op: NOP1 (159)
L2: // addr: 328 pc: 327 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 328 op: STARTLINE (58)

    /** c_decl.e:801		c_puts("\n")*/
    // SubProg DeclareFileVars pc: 330 op: PROC (27)
    RefDS(_22128);
    _55c_puts(_22128);
    // SubProg DeclareFileVars pc: 333 op: STARTLINE (58)

    /** c_decl.e:802		c_hputs("\n")*/
    // SubProg DeclareFileVars pc: 335 op: PROC (27)
    RefDS(_22128);
    _55c_hputs(_22128);
    // SubProg DeclareFileVars pc: 338 op: STARTLINE (58)

    /** c_decl.e:803		if dll_option or debug_option then*/
    // SubProg DeclareFileVars pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 342 op: SC1_OR_IF (147)
    if (_58dll_option_42086 != 0) {
        goto LD; // [342] 353
    }
    // SubProg DeclareFileVars pc: 346 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 348 op: NOP1 (159)
    // SubProg DeclareFileVars pc: 349 op: IF (20)
    if (_58debug_option_42096 == 0)
    {
        goto LE; // [349] 707
    }
    else{
    }
    // SubProg DeclareFileVars pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 353 op: STARTLINE (58)

    /** c_decl.e:804			integer cleanup_vars = 0*/
    // SubProg DeclareFileVars pc: 355 op: ASSIGN_I (113)
    _cleanup_vars_43148 = 0;
    // SubProg DeclareFileVars pc: 358 op: STARTLINE (58)

    /** c_decl.e:805			c_puts("// Declaring var array for cleanup\n")*/
    // SubProg DeclareFileVars pc: 360 op: PROC (27)
    RefDS(_22733);
    _55c_puts(_22733);
    // SubProg DeclareFileVars pc: 363 op: STARTLINE (58)

    /** c_decl.e:806			s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 365 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 369 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22734 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg DeclareFileVars pc: 373 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 375 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22734);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22734 = NOVALUE;
    // SubProg DeclareFileVars pc: 381 op: STARTLINE (58)

    /** c_decl.e:807			c_stmt0( "object_ptr _0var_cleanup[] = {\n" )*/
    // SubProg DeclareFileVars pc: 383 op: PROC (27)
    RefDS(_22736);
    _58c_stmt0(_22736);
    // SubProg DeclareFileVars pc: 386 op: STARTLINE (58)

    /** c_decl.e:808			while s do*/
    // SubProg DeclareFileVars pc: 388 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 390 op: NOPWHILE (158)
LF: // addr: 391 pc: 390 sub: 43049 op: 158
    // SubProg DeclareFileVars pc: 391 op: WHILE (47)
    if (_s_43052 == 0)
    {
        goto L10; // [391] 473
    }
    else{
    }
    // SubProg DeclareFileVars pc: 394 op: STARTLINE (58)

    /** c_decl.e:809				eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 398 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43054);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_43054 = (object)*(((s1_ptr)_2)->base + _s_43052);
    Ref(_eentry_43054);
    // SubProg DeclareFileVars pc: 402 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 404 op: STARTLINE (58)

    /** c_decl.e:810				if needs_uninit( eentry ) then*/
    // SubProg DeclareFileVars pc: 406 op: PROC (27)
    RefDS(_eentry_43054);
    _22738 = _58needs_uninit(_eentry_43054);
    // SubProg DeclareFileVars pc: 410 op: IF (20)
    if (_22738 == 0) {
        DeRef(_22738);
        _22738 = NOVALUE;
        goto L11; // [410] 452
    }
    else {
        if (!IS_ATOM_INT(_22738) && DBL_PTR(_22738)->dbl == 0.0){
            DeRef(_22738);
            _22738 = NOVALUE;
            goto L11; // [410] 452
        }
        DeRef(_22738);
        _22738 = NOVALUE;
    }
    DeRef(_22738);
    _22738 = NOVALUE;
    // SubProg DeclareFileVars pc: 413 op: STARTLINE (58)

    /** c_decl.e:812					c_stmt0( sprintf("&_%d", eentry[S_FILE_NO]))*/
    // SubProg DeclareFileVars pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 417 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22740 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22740 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg DeclareFileVars pc: 421 op: SPRINTF (53)
    _22741 = EPrintf(-9999999, _22739, _22740);
    _22740 = NOVALUE;
    // SubProg DeclareFileVars pc: 425 op: PROC (27)
    _58c_stmt0(_22741);
    _22741 = NOVALUE;
    // SubProg DeclareFileVars pc: 428 op: STARTLINE (58)

    /** c_decl.e:813					c_puts(eentry[S_NAME] )*/
    // SubProg DeclareFileVars pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 432 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22742 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22742 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    // SubProg DeclareFileVars pc: 436 op: PROC (27)
    Ref(_22742);
    _55c_puts(_22742);
    _22742 = NOVALUE;
    // SubProg DeclareFileVars pc: 439 op: STARTLINE (58)

    /** c_decl.e:814					c_printf(", // %d\n", cleanup_vars )*/
    // SubProg DeclareFileVars pc: 441 op: PROC (27)
    RefDS(_22743);
    _55c_printf(_22743, _cleanup_vars_43148);
    // SubProg DeclareFileVars pc: 445 op: STARTLINE (58)

    /** c_decl.e:815					cleanup_vars += 1*/
    // SubProg DeclareFileVars pc: 447 op: PLUS1_I (117)
    _cleanup_vars_43148 = _cleanup_vars_43148 + 1;
    // SubProg DeclareFileVars pc: 451 op: NOP1 (159)
L11: // addr: 452 pc: 451 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 452 op: STARTLINE (58)

    /** c_decl.e:818				s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 456 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22745 = (object)*(((s1_ptr)_2)->base + _s_43052);
    // SubProg DeclareFileVars pc: 460 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 462 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22745);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22745 = NOVALUE;
    // SubProg DeclareFileVars pc: 468 op: STARTLINE (58)

    /** c_decl.e:819			end while*/
    // SubProg DeclareFileVars pc: 470 op: ENDWHILE (22)
    goto LF; // [470] 391
    // SubProg DeclareFileVars pc: 472 op: NOP1 (159)
L10: // addr: 473 pc: 472 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 473 op: STARTLINE (58)

    /** c_decl.e:820			c_stmt0( "0\n" )*/
    // SubProg DeclareFileVars pc: 475 op: PROC (27)
    RefDS(_22747);
    _58c_stmt0(_22747);
    // SubProg DeclareFileVars pc: 478 op: STARTLINE (58)

    /** c_decl.e:821			c_stmt0( "};\n" )*/
    // SubProg DeclareFileVars pc: 480 op: PROC (27)
    RefDS(_22748);
    _58c_stmt0(_22748);
    // SubProg DeclareFileVars pc: 483 op: STARTLINE (58)

    /** c_decl.e:822			s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 489 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22749 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg DeclareFileVars pc: 493 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 495 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22749);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22749 = NOVALUE;
    // SubProg DeclareFileVars pc: 501 op: STARTLINE (58)

    /** c_decl.e:823			c_stmt0( "char *_0var_cleanup_name[] = {\n" )*/
    // SubProg DeclareFileVars pc: 503 op: PROC (27)
    RefDS(_22751);
    _58c_stmt0(_22751);
    // SubProg DeclareFileVars pc: 506 op: STARTLINE (58)

    /** c_decl.e:824			cleanup_vars = 0*/
    // SubProg DeclareFileVars pc: 508 op: ASSIGN_I (113)
    _cleanup_vars_43148 = 0;
    // SubProg DeclareFileVars pc: 511 op: STARTLINE (58)

    /** c_decl.e:825			while s do*/
    // SubProg DeclareFileVars pc: 513 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 515 op: NOPWHILE (158)
L12: // addr: 516 pc: 515 sub: 43049 op: 158
    // SubProg DeclareFileVars pc: 516 op: WHILE (47)
    if (_s_43052 == 0)
    {
        goto L13; // [516] 598
    }
    else{
    }
    // SubProg DeclareFileVars pc: 519 op: STARTLINE (58)

    /** c_decl.e:826				eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 521 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 523 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43054);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_43054 = (object)*(((s1_ptr)_2)->base + _s_43052);
    Ref(_eentry_43054);
    // SubProg DeclareFileVars pc: 527 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 529 op: STARTLINE (58)

    /** c_decl.e:827				if needs_uninit( eentry ) then*/
    // SubProg DeclareFileVars pc: 531 op: PROC (27)
    RefDS(_eentry_43054);
    _22753 = _58needs_uninit(_eentry_43054);
    // SubProg DeclareFileVars pc: 535 op: IF (20)
    if (_22753 == 0) {
        DeRef(_22753);
        _22753 = NOVALUE;
        goto L14; // [535] 577
    }
    else {
        if (!IS_ATOM_INT(_22753) && DBL_PTR(_22753)->dbl == 0.0){
            DeRef(_22753);
            _22753 = NOVALUE;
            goto L14; // [535] 577
        }
        DeRef(_22753);
        _22753 = NOVALUE;
    }
    DeRef(_22753);
    _22753 = NOVALUE;
    // SubProg DeclareFileVars pc: 538 op: STARTLINE (58)

    /** c_decl.e:828					c_stmt0( sprintf("\"_%d", eentry[S_FILE_NO]))*/
    // SubProg DeclareFileVars pc: 540 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 542 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22755 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22755 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg DeclareFileVars pc: 546 op: SPRINTF (53)
    _22756 = EPrintf(-9999999, _22754, _22755);
    _22755 = NOVALUE;
    // SubProg DeclareFileVars pc: 550 op: PROC (27)
    _58c_stmt0(_22756);
    _22756 = NOVALUE;
    // SubProg DeclareFileVars pc: 553 op: STARTLINE (58)

    /** c_decl.e:829					c_puts(eentry[S_NAME] )*/
    // SubProg DeclareFileVars pc: 555 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 557 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43054);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22757 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22757 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    // SubProg DeclareFileVars pc: 561 op: PROC (27)
    Ref(_22757);
    _55c_puts(_22757);
    _22757 = NOVALUE;
    // SubProg DeclareFileVars pc: 564 op: STARTLINE (58)

    /** c_decl.e:830					c_printf("\", // %d\n", cleanup_vars )*/
    // SubProg DeclareFileVars pc: 566 op: PROC (27)
    RefDS(_22758);
    _55c_printf(_22758, _cleanup_vars_43148);
    // SubProg DeclareFileVars pc: 570 op: STARTLINE (58)

    /** c_decl.e:831					cleanup_vars += 1*/
    // SubProg DeclareFileVars pc: 572 op: PLUS1_I (117)
    _cleanup_vars_43148 = _cleanup_vars_43148 + 1;
    // SubProg DeclareFileVars pc: 576 op: NOP1 (159)
L14: // addr: 577 pc: 576 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 577 op: STARTLINE (58)

    /** c_decl.e:834				s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 579 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 581 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22760 = (object)*(((s1_ptr)_2)->base + _s_43052);
    // SubProg DeclareFileVars pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 587 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22760);
    _s_43052 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43052)){
        _s_43052 = (object)DBL_PTR(_s_43052)->dbl;
    }
    _22760 = NOVALUE;
    // SubProg DeclareFileVars pc: 593 op: STARTLINE (58)

    /** c_decl.e:835			end while*/
    // SubProg DeclareFileVars pc: 595 op: ENDWHILE (22)
    goto L12; // [595] 516
    // SubProg DeclareFileVars pc: 597 op: NOP1 (159)
L13: // addr: 598 pc: 597 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 598 op: STARTLINE (58)

    /** c_decl.e:836			c_stmt0( "0\n" )*/
    // SubProg DeclareFileVars pc: 600 op: PROC (27)
    RefDS(_22747);
    _58c_stmt0(_22747);
    // SubProg DeclareFileVars pc: 603 op: STARTLINE (58)

    /** c_decl.e:837			c_stmt0( "};\n" )*/
    // SubProg DeclareFileVars pc: 605 op: PROC (27)
    RefDS(_22748);
    _58c_stmt0(_22748);
    // SubProg DeclareFileVars pc: 608 op: STARTLINE (58)

    /** c_decl.e:838			c_stmt0( "void _0cleanup_vars(){\n" )*/
    // SubProg DeclareFileVars pc: 610 op: PROC (27)
    RefDS(_22762);
    _58c_stmt0(_22762);
    // SubProg DeclareFileVars pc: 613 op: STARTLINE (58)

    /** c_decl.e:839				c_stmt0( "int i;\n" )*/
    // SubProg DeclareFileVars pc: 615 op: PROC (27)
    RefDS(_22017);
    _58c_stmt0(_22017);
    // SubProg DeclareFileVars pc: 618 op: STARTLINE (58)

    /** c_decl.e:840				c_stmt0( "object x;\n" )*/
    // SubProg DeclareFileVars pc: 620 op: PROC (27)
    RefDS(_22763);
    _58c_stmt0(_22763);
    // SubProg DeclareFileVars pc: 623 op: STARTLINE (58)

    /** c_decl.e:841				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    // SubProg DeclareFileVars pc: 625 op: SPRINTF (53)
    _22765 = EPrintf(-9999999, _22764, _cleanup_vars_43148);
    // SubProg DeclareFileVars pc: 629 op: PROC (27)
    _58c_stmt0(_22765);
    _22765 = NOVALUE;
    // SubProg DeclareFileVars pc: 632 op: STARTLINE (58)

    /** c_decl.e:842					c_stmt0( "x = *_0var_cleanup[i];\n" )*/
    // SubProg DeclareFileVars pc: 634 op: PROC (27)
    RefDS(_22766);
    _58c_stmt0(_22766);
    // SubProg DeclareFileVars pc: 637 op: STARTLINE (58)

    //c_decl.e:843					c_stmt0( "if( x >= NOVALUE ) /* do nothing */;\n" )
    // SubProg DeclareFileVars pc: 639 op: PROC (27)
    RefDS(_22767);
    _58c_stmt0(_22767);
    // SubProg DeclareFileVars pc: 642 op: STARTLINE (58)

    /** c_decl.e:844					c_stmt0( "else if ( IS_ATOM_DBL( x ) && DBL_PTR( x )->cleanup != 0) {\n")*/
    // SubProg DeclareFileVars pc: 644 op: PROC (27)
    RefDS(_22768);
    _58c_stmt0(_22768);
    // SubProg DeclareFileVars pc: 647 op: STARTLINE (58)

    /** c_decl.e:845						c_stmt0( "cleanup_double( DBL_PTR( x ) );\n")*/
    // SubProg DeclareFileVars pc: 649 op: PROC (27)
    RefDS(_22769);
    _58c_stmt0(_22769);
    // SubProg DeclareFileVars pc: 652 op: STARTLINE (58)

    /** c_decl.e:846					c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 654 op: PROC (27)
    RefDS(_15947);
    _58c_stmt0(_15947);
    // SubProg DeclareFileVars pc: 657 op: STARTLINE (58)

    /** c_decl.e:847						c_stmt0( "else if (IS_SEQUENCE( x ) && SEQ_PTR( x )->cleanup != 0 ) {\n")*/
    // SubProg DeclareFileVars pc: 659 op: PROC (27)
    RefDS(_22770);
    _58c_stmt0(_22770);
    // SubProg DeclareFileVars pc: 662 op: STARTLINE (58)

    /** c_decl.e:848						c_stmt0( "cleanup_sequence( SEQ_PTR( x ) );\n")*/
    // SubProg DeclareFileVars pc: 664 op: PROC (27)
    RefDS(_22771);
    _58c_stmt0(_22771);
    // SubProg DeclareFileVars pc: 667 op: STARTLINE (58)

    /** c_decl.e:849					c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 669 op: PROC (27)
    RefDS(_15947);
    _58c_stmt0(_15947);
    // SubProg DeclareFileVars pc: 672 op: STARTLINE (58)

    /** c_decl.e:850				c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 674 op: PROC (27)
    RefDS(_15947);
    _58c_stmt0(_15947);
    // SubProg DeclareFileVars pc: 677 op: STARTLINE (58)

    /** c_decl.e:851				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    // SubProg DeclareFileVars pc: 679 op: SPRINTF (53)
    _22772 = EPrintf(-9999999, _22764, _cleanup_vars_43148);
    // SubProg DeclareFileVars pc: 683 op: PROC (27)
    _58c_stmt0(_22772);
    _22772 = NOVALUE;
    // SubProg DeclareFileVars pc: 686 op: STARTLINE (58)

    /** c_decl.e:852					c_stmt0( "DeRef( *_0var_cleanup[i] );\n" )*/
    // SubProg DeclareFileVars pc: 688 op: PROC (27)
    RefDS(_22773);
    _58c_stmt0(_22773);
    // SubProg DeclareFileVars pc: 691 op: STARTLINE (58)

    /** c_decl.e:853					c_stmt0( "*_0var_cleanup[i] = NOVALUE;\n" )*/
    // SubProg DeclareFileVars pc: 693 op: PROC (27)
    RefDS(_22774);
    _58c_stmt0(_22774);
    // SubProg DeclareFileVars pc: 696 op: STARTLINE (58)

    /** c_decl.e:854				c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 698 op: PROC (27)
    RefDS(_15947);
    _58c_stmt0(_15947);
    // SubProg DeclareFileVars pc: 701 op: STARTLINE (58)

    /** c_decl.e:855			c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 703 op: PROC (27)
    RefDS(_15947);
    _58c_stmt0(_15947);
    // SubProg DeclareFileVars pc: 706 op: NOP1 (159)
LE: // addr: 707 pc: 706 sub: 43049 op: 159
    // SubProg DeclareFileVars pc: 707 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cleanup_vars_43148
    // SubProg DeclareFileVars pc: 709 op: STARTLINE (58)

    /** c_decl.e:857	end procedure*/
    // SubProg DeclareFileVars pc: 711 op: RETURNP (29)

// Exiting block BLOCK: DeclareFileVars

// block var s_43052

// block var eentry_43054
    DeRef(_eentry_43054);
    DeRef(_22695);
    _22695 = NOVALUE;
    DeRef(_22707);
    _22707 = NOVALUE;
    DeRef(_22710);
    _22710 = NOVALUE;
    DeRef(_22701);
    _22701 = NOVALUE;
    DeRef(_22704);
    _22704 = NOVALUE;
    DeRef(_22698);
    _22698 = NOVALUE;
    return;
    // SubProg DeclareFileVars pc: 714 op: BADRETURNF (43)
    ;
}


object _58PromoteTypeInfo()
{
    object _updsym_43219 = NOVALUE;
    object _s_43221 = NOVALUE;
    object _sym_43222 = NOVALUE;
    object _symo_43223 = NOVALUE;
    object _upd_43452 = NOVALUE;
// skipping _22875  name type: 0
// skipping _22874  name type: 0
    object _22873 = NOVALUE; // 43479 22873
// skipping _22872  name type: 0
    object _22871 = NOVALUE; // 43475 22871
    object _22870 = NOVALUE; // 43473 22870
    object _22869 = NOVALUE; // 43470 22869
    object _22868 = NOVALUE; // 43468 22868
// skipping _22867  name type: 0
    object _22866 = NOVALUE; // 43464 22866
// skipping _22865  name type: 0
    object _22864 = NOVALUE; // 43461 22864
    object _22863 = NOVALUE; // 43459 22863
    object _22862 = NOVALUE; // 43457 22862
    object _22861 = NOVALUE; // 43455 22861
    object _22860 = NOVALUE; // 43451 22860
// skipping _22859  name type: 0
// skipping _22858  name type: 0
// skipping _22857  name type: 0
    object _22856 = NOVALUE; // 43442 22856
// skipping _22855  name type: 0
// skipping _22854  name type: 0
    object _22853 = NOVALUE; // 43434 22853
    object _22852 = NOVALUE; // 43431 22852
    object _22851 = NOVALUE; // 43429 22851
    object _22850 = NOVALUE; // 43427 22850
    object _22849 = NOVALUE; // 43426 22849
    object _22848 = NOVALUE; // 43425 22848
    object _22847 = NOVALUE; // 43422 22847
    object _22846 = NOVALUE; // 43419 22846
    object _22845 = NOVALUE; // 43416 22845
    object _22844 = NOVALUE; // 43408 22844
    object _22843 = NOVALUE; // 43406 22843
// skipping _22842  name type: 0
    object _22841 = NOVALUE; // 43403 22841
    object _22840 = NOVALUE; // 43402 22840
    object _22839 = NOVALUE; // 43400 22839
    object _22838 = NOVALUE; // 43397 22838
    object _22837 = NOVALUE; // 43395 22837
    object _22836 = NOVALUE; // 43393 22836
    object _22835 = NOVALUE; // 43392 22835
    object _22834 = NOVALUE; // 43390 22834
    object _22833 = NOVALUE; // 43387 22833
    object _22832 = NOVALUE; // 43384 22832
// skipping _22831  name type: 0
    object _22830 = NOVALUE; // 43377 22830
    object _22829 = NOVALUE; // 43375 22829
    object _22828 = NOVALUE; // 43370 22828
// skipping _22827  name type: 0
    object _22826 = NOVALUE; // 43362 22826
    object _22825 = NOVALUE; // 43357 22825
    object _22824 = NOVALUE; // 43354 22824
// skipping _22823  name type: 0
    object _22822 = NOVALUE; // 43347 22822
    object _22821 = NOVALUE; // 43345 22821
    object _22820 = NOVALUE; // 43342 22820
    object _22819 = NOVALUE; // 43339 22819
    object _22818 = NOVALUE; // 43336 22818
    object _22817 = NOVALUE; // 43328 22817
    object _22816 = NOVALUE; // 43326 22816
// skipping _22815  name type: 0
    object _22814 = NOVALUE; // 43323 22814
    object _22813 = NOVALUE; // 43322 22813
    object _22812 = NOVALUE; // 43320 22812
    object _22811 = NOVALUE; // 43315 22811
// skipping _22810  name type: 0
    object _22809 = NOVALUE; // 43307 22809
    object _22808 = NOVALUE; // 43302 22808
// skipping _22807  name type: 0
    object _22806 = NOVALUE; // 43294 22806
    object _22805 = NOVALUE; // 43291 22805
    object _22804 = NOVALUE; // 43288 22804
    object _22803 = NOVALUE; // 43286 22803
    object _22802 = NOVALUE; // 43284 22802
    object _22801 = NOVALUE; // 43283 22801
    object _22800 = NOVALUE; // 43281 22800
// skipping _22799  name type: 0
    object _22798 = NOVALUE; // 43278 22798
    object _22797 = NOVALUE; // 43276 22797
    object _22796 = NOVALUE; // 43274 22796
    object _22795 = NOVALUE; // 43273 22795
    object _22794 = NOVALUE; // 43271 22794
    object _22793 = NOVALUE; // 43268 22793
    object _22792 = NOVALUE; // 43266 22792
    object _22791 = NOVALUE; // 43264 22791
    object _22790 = NOVALUE; // 43263 22790
    object _22789 = NOVALUE; // 43261 22789
    object _22788 = NOVALUE; // 43259 22788
    object _22787 = NOVALUE; // 43258 22787
    object _22786 = NOVALUE; // 43256 22786
    object _22785 = NOVALUE; // 43252 22785
// skipping _22784  name type: 0
    object _22783 = NOVALUE; // 43244 22783
    object _22782 = NOVALUE; // 43241 22782
    object _22781 = NOVALUE; // 43239 22781
// skipping _22780  name type: 0
    object _22779 = NOVALUE; // 43236 22779
    object _22778 = NOVALUE; // 43234 22778
// skipping _22777  name type: 0
// skipping _22776  name type: 0
    object _22775 = NOVALUE; // 43226 22775
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg PromoteTypeInfo pc: 1 op: STARTLINE (58)

    /** c_decl.e:866		sequence sym, symo*/
    // SubProg PromoteTypeInfo pc: 3 op: STARTLINE (58)

    /** c_decl.e:868		updsym = 0*/
    // SubProg PromoteTypeInfo pc: 5 op: ASSIGN_I (113)
    _updsym_43219 = 0;
    // SubProg PromoteTypeInfo pc: 8 op: STARTLINE (58)

    /** c_decl.e:869		g_has_delete = p_has_delete*/
    // SubProg PromoteTypeInfo pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 12 op: ASSIGN_I (113)
    _58g_has_delete_42278 = _58p_has_delete_42279;
    // SubProg PromoteTypeInfo pc: 15 op: STARTLINE (58)

    /** c_decl.e:870		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg PromoteTypeInfo pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22775 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg PromoteTypeInfo pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22775);
    _s_43221 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43221)){
        _s_43221 = (object)DBL_PTR(_s_43221)->dbl;
    }
    _22775 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 33 op: STARTLINE (58)

    /** c_decl.e:871		while s do*/
    // SubProg PromoteTypeInfo pc: 35 op: NOP2 (110)
    // SubProg PromoteTypeInfo pc: 37 op: NOPWHILE (158)
L1: // addr: 38 pc: 37 sub: 43217 op: 158
    // SubProg PromoteTypeInfo pc: 38 op: WHILE (47)
    if (_s_43221 == 0)
    {
        goto L2; // [38] 921
    }
    else{
    }
    // SubProg PromoteTypeInfo pc: 41 op: STARTLINE (58)

    /** c_decl.e:872			sym = SymTab[s]*/
    // SubProg PromoteTypeInfo pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_sym_43222);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _sym_43222 = (object)*(((s1_ptr)_2)->base + _s_43221);
    Ref(_sym_43222);
    // SubProg PromoteTypeInfo pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg PromoteTypeInfo pc: 51 op: STARTLINE (58)

    /** c_decl.e:873			symo = sym*/
    // SubProg PromoteTypeInfo pc: 53 op: ASSIGN (18)
    RefDS(_sym_43222);
    DeRef(_symo_43223);
    _symo_43223 = _sym_43222;
    // SubProg PromoteTypeInfo pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg PromoteTypeInfo pc: 58 op: STARTLINE (58)

    /** c_decl.e:874			if sym[S_TOKEN] = FUNC or sym[S_TOKEN] = TYPE then*/
    // SubProg PromoteTypeInfo pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22778 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22778 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg PromoteTypeInfo pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 68 op: EQUALS (3)
    if (IS_ATOM_INT(_22778)) {
        _22779 = (_22778 == 501);
    }
    else {
        _22779 = binary_op(EQUALS, _22778, 501);
    }
    _22778 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 72 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22779)) {
        if (_22779 != 0) {
            goto L3; // [72] 93
        }
    }
    else {
        if (DBL_PTR(_22779)->dbl != 0.0) {
            goto L3; // [72] 93
        }
    }
    // SubProg PromoteTypeInfo pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 78 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22781 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22781 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg PromoteTypeInfo pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 84 op: EQUALS (3)
    if (IS_ATOM_INT(_22781)) {
        _22782 = (_22781 == 504);
    }
    else {
        _22782 = binary_op(EQUALS, _22781, 504);
    }
    _22781 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 88 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 89 op: IF (20)
    if (_22782 == 0) {
        DeRef(_22782);
        _22782 = NOVALUE;
        goto L4; // [89] 138
    }
    else {
        if (!IS_ATOM_INT(_22782) && DBL_PTR(_22782)->dbl == 0.0){
            DeRef(_22782);
            _22782 = NOVALUE;
            goto L4; // [89] 138
        }
        DeRef(_22782);
        _22782 = NOVALUE;
    }
    DeRef(_22782);
    _22782 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 93 op: STARTLINE (58)

    /** c_decl.e:875				if sym[S_GTYPE_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22783 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 103 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22783, 0)){
        _22783 = NOVALUE;
        goto L5; // [103] 120
    }
    _22783 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 107 op: STARTLINE (58)

    /** c_decl.e:876					sym[S_GTYPE] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 113 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 117 op: ELSE (23)
    goto L6; // [117] 549
    // SubProg PromoteTypeInfo pc: 119 op: NOP1 (159)
L5: // addr: 120 pc: 119 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 120 op: STARTLINE (58)

    /** c_decl.e:878					sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 126 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22785 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 130 op: ASSIGN_SUBS (16)
    Ref(_22785);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22785;
    if( _1 != _22785 ){
        DeRef(_1);
    }
    _22785 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 134 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 135 op: ELSE (23)
    goto L6; // [135] 549
    // SubProg PromoteTypeInfo pc: 137 op: NOP1 (159)
L4: // addr: 138 pc: 137 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 138 op: STARTLINE (58)

    /** c_decl.e:883				if sym[S_GTYPE] != TYPE_INTEGER and*/
    // SubProg PromoteTypeInfo pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 142 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22786 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 148 op: NOTEQ (4)
    if (IS_ATOM_INT(_22786)) {
        _22787 = (_22786 != 1);
    }
    else {
        _22787 = binary_op(NOTEQ, _22786, 1);
    }
    _22786 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 152 op: SC1_AND (141)
    if (IS_ATOM_INT(_22787)) {
        if (_22787 == 0) {
            DeRef(_22788);
            _22788 = 0;
            goto L7; // [152] 172
        }
    }
    else {
        if (DBL_PTR(_22787)->dbl == 0.0) {
            DeRef(_22788);
            _22788 = 0;
            goto L7; // [152] 172
        }
    }
    // SubProg PromoteTypeInfo pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 158 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22789 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 164 op: NOTEQ (4)
    if (IS_ATOM_INT(_22789)) {
        _22790 = (_22789 != 16);
    }
    else {
        _22790 = binary_op(NOTEQ, _22789, 16);
    }
    _22789 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 168 op: SC2_AND (142)
    DeRef(_22788);
    if (IS_ATOM_INT(_22790))
    _22788 = (_22790 != 0);
    else
    _22788 = DBL_PTR(_22790)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 171 op: NOP1 (159)
L7: // addr: 172 pc: 171 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 172 op: SC1_AND_IF (146)
    if (_22788 == 0) {
        goto L8; // [172] 283
    }
    // SubProg PromoteTypeInfo pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 178 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22792 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 184 op: NOTEQ (4)
    if (IS_ATOM_INT(_22792)) {
        _22793 = (_22792 != 0);
    }
    else {
        _22793 = binary_op(NOTEQ, _22792, 0);
    }
    _22792 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 188 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 189 op: IF (20)
    if (_22793 == 0) {
        DeRef(_22793);
        _22793 = NOVALUE;
        goto L8; // [189] 283
    }
    else {
        if (!IS_ATOM_INT(_22793) && DBL_PTR(_22793)->dbl == 0.0){
            DeRef(_22793);
            _22793 = NOVALUE;
            goto L8; // [189] 283
        }
        DeRef(_22793);
        _22793 = NOVALUE;
    }
    DeRef(_22793);
    _22793 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 192 op: STARTLINE (58)

    /** c_decl.e:886					if sym[S_GTYPE_NEW] = TYPE_INTEGER or*/
    // SubProg PromoteTypeInfo pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 196 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22794 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 202 op: EQUALS (3)
    if (IS_ATOM_INT(_22794)) {
        _22795 = (_22794 == 1);
    }
    else {
        _22795 = binary_op(EQUALS, _22794, 1);
    }
    _22794 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 206 op: SC1_OR (143)
    if (IS_ATOM_INT(_22795)) {
        if (_22795 != 0) {
            DeRef(_22796);
            _22796 = 1;
            goto L9; // [206] 226
        }
    }
    else {
        if (DBL_PTR(_22795)->dbl != 0.0) {
            DeRef(_22796);
            _22796 = 1;
            goto L9; // [206] 226
        }
    }
    // SubProg PromoteTypeInfo pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 212 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22797 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 218 op: EQUALS (3)
    if (IS_ATOM_INT(_22797)) {
        _22798 = (_22797 == 16);
    }
    else {
        _22798 = binary_op(EQUALS, _22797, 16);
    }
    _22797 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 222 op: SC2_OR (144)
    DeRef(_22796);
    if (IS_ATOM_INT(_22798))
    _22796 = (_22798 != 0);
    else
    _22796 = DBL_PTR(_22798)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 225 op: NOP1 (159)
L9: // addr: 226 pc: 225 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 226 op: SC1_OR_IF (147)
    if (_22796 != 0) {
        goto LA; // [226] 267
    }
    // SubProg PromoteTypeInfo pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 232 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22800 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 238 op: EQUALS (3)
    if (IS_ATOM_INT(_22800)) {
        _22801 = (_22800 == 4);
    }
    else {
        _22801 = binary_op(EQUALS, _22800, 4);
    }
    _22800 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 242 op: SC1_AND (141)
    if (IS_ATOM_INT(_22801)) {
        if (_22801 == 0) {
            DeRef(_22802);
            _22802 = 0;
            goto LB; // [242] 262
        }
    }
    else {
        if (DBL_PTR(_22801)->dbl == 0.0) {
            DeRef(_22802);
            _22802 = 0;
            goto LB; // [242] 262
        }
    }
    // SubProg PromoteTypeInfo pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 248 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22803 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 254 op: EQUALS (3)
    if (IS_ATOM_INT(_22803)) {
        _22804 = (_22803 == 2);
    }
    else {
        _22804 = binary_op(EQUALS, _22803, 2);
    }
    _22803 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 258 op: SC2_AND (142)
    DeRef(_22802);
    if (IS_ATOM_INT(_22804))
    _22802 = (_22804 != 0);
    else
    _22802 = DBL_PTR(_22804)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 261 op: NOP1 (159)
LB: // addr: 262 pc: 261 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 262 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 263 op: IF (20)
    if (_22802 == 0)
    {
        _22802 = NOVALUE;
        goto LC; // [263] 282
    }
    else{
        _22802 = NOVALUE;
    }
    // SubProg PromoteTypeInfo pc: 266 op: NOP1 (159)
LA: // addr: 267 pc: 266 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 267 op: STARTLINE (58)

    /** c_decl.e:890							sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 273 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22805 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 277 op: ASSIGN_SUBS (16)
    Ref(_22805);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22805;
    if( _1 != _22805 ){
        DeRef(_1);
    }
    _22805 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 281 op: NOP1 (159)
LC: // addr: 282 pc: 281 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 282 op: NOP1 (159)
L8: // addr: 283 pc: 282 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 283 op: STARTLINE (58)

    /** c_decl.e:893				if sym[S_ARG_TYPE_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 287 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22806 = (object)*(((s1_ptr)_2)->base + 44);
    // SubProg PromoteTypeInfo pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 293 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22806, 0)){
        _22806 = NOVALUE;
        goto LD; // [293] 310
    }
    _22806 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 297 op: STARTLINE (58)

    /** c_decl.e:894					sym[S_ARG_TYPE] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 303 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 307 op: ELSE (23)
    goto LE; // [307] 325
    // SubProg PromoteTypeInfo pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 310 op: STARTLINE (58)

    /** c_decl.e:896					sym[S_ARG_TYPE] = sym[S_ARG_TYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 316 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22808 = (object)*(((s1_ptr)_2)->base + 44);
    // SubProg PromoteTypeInfo pc: 320 op: ASSIGN_SUBS (16)
    Ref(_22808);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22808;
    if( _1 != _22808 ){
        DeRef(_1);
    }
    _22808 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 324 op: NOP1 (159)
LE: // addr: 325 pc: 324 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 325 op: STARTLINE (58)

    /** c_decl.e:898				sym[S_ARG_TYPE_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 331 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 44);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 335 op: STARTLINE (58)

    /** c_decl.e:900				if sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 339 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22809 = (object)*(((s1_ptr)_2)->base + 46);
    // SubProg PromoteTypeInfo pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 345 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22809, 0)){
        _22809 = NOVALUE;
        goto LF; // [345] 362
    }
    _22809 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 349 op: STARTLINE (58)

    /** c_decl.e:901					sym[S_ARG_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 355 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 359 op: ELSE (23)
    goto L10; // [359] 377
    // SubProg PromoteTypeInfo pc: 361 op: NOP1 (159)
LF: // addr: 362 pc: 361 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 362 op: STARTLINE (58)

    /** c_decl.e:903					sym[S_ARG_SEQ_ELEM] = sym[S_ARG_SEQ_ELEM_NEW]*/
    // SubProg PromoteTypeInfo pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 368 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22811 = (object)*(((s1_ptr)_2)->base + 46);
    // SubProg PromoteTypeInfo pc: 372 op: ASSIGN_SUBS (16)
    Ref(_22811);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22811;
    if( _1 != _22811 ){
        DeRef(_1);
    }
    _22811 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 376 op: NOP1 (159)
L10: // addr: 377 pc: 376 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 377 op: STARTLINE (58)

    /** c_decl.e:905				sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 383 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 46);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 387 op: STARTLINE (58)

    /** c_decl.e:907				if sym[S_ARG_MIN_NEW] = -NOVALUE or*/
    // SubProg PromoteTypeInfo pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 391 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22812 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 397 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22813 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22813 = - _36NOVALUE_16291;
        }
    }
    else {
        _22813 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 400 op: EQUALS (3)
    if (IS_ATOM_INT(_22812) && IS_ATOM_INT(_22813)) {
        _22814 = (_22812 == _22813);
    }
    else {
        _22814 = binary_op(EQUALS, _22812, _22813);
    }
    _22812 = NOVALUE;
    DeRef(_22813);
    _22813 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 404 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22814)) {
        if (_22814 != 0) {
            goto L11; // [404] 425
        }
    }
    else {
        if (DBL_PTR(_22814)->dbl != 0.0) {
            goto L11; // [404] 425
        }
    }
    // SubProg PromoteTypeInfo pc: 408 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 410 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22816 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 416 op: EQUALS (3)
    if (IS_ATOM_INT(_22816) && IS_ATOM_INT(_36NOVALUE_16291)) {
        _22817 = (_22816 == _36NOVALUE_16291);
    }
    else {
        _22817 = binary_op(EQUALS, _22816, _36NOVALUE_16291);
    }
    _22816 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 420 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 421 op: IF (20)
    if (_22817 == 0) {
        DeRef(_22817);
        _22817 = NOVALUE;
        goto L12; // [421] 448
    }
    else {
        if (!IS_ATOM_INT(_22817) && DBL_PTR(_22817)->dbl == 0.0){
            DeRef(_22817);
            _22817 = NOVALUE;
            goto L12; // [421] 448
        }
        DeRef(_22817);
        _22817 = NOVALUE;
    }
    DeRef(_22817);
    _22817 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 424 op: NOP1 (159)
L11: // addr: 425 pc: 424 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 425 op: STARTLINE (58)

    /** c_decl.e:909					sym[S_ARG_MIN] = MININT*/
    // SubProg PromoteTypeInfo pc: 427 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 429 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 431 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 435 op: STARTLINE (58)

    /** c_decl.e:910					sym[S_ARG_MAX] = MAXINT*/
    // SubProg PromoteTypeInfo pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 439 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 441 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 445 op: ELSE (23)
    goto L13; // [445] 477
    // SubProg PromoteTypeInfo pc: 447 op: NOP1 (159)
L12: // addr: 448 pc: 447 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 448 op: STARTLINE (58)

    /** c_decl.e:912					sym[S_ARG_MIN] = sym[S_ARG_MIN_NEW]*/
    // SubProg PromoteTypeInfo pc: 450 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 454 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22818 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 458 op: ASSIGN_SUBS (16)
    Ref(_22818);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22818;
    if( _1 != _22818 ){
        DeRef(_1);
    }
    _22818 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 462 op: STARTLINE (58)

    /** c_decl.e:913					sym[S_ARG_MAX] = sym[S_ARG_MAX_NEW]*/
    // SubProg PromoteTypeInfo pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 466 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 468 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22819 = (object)*(((s1_ptr)_2)->base + 50);
    // SubProg PromoteTypeInfo pc: 472 op: ASSIGN_SUBS (16)
    Ref(_22819);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22819;
    if( _1 != _22819 ){
        DeRef(_1);
    }
    _22819 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 476 op: NOP1 (159)
L13: // addr: 477 pc: 476 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 477 op: STARTLINE (58)

    /** c_decl.e:915				sym[S_ARG_MIN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 481 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 483 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22820 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22820 = - _36NOVALUE_16291;
        }
    }
    else {
        _22820 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 486 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22820;
    if( _1 != _22820 ){
        DeRef(_1);
    }
    _22820 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 490 op: STARTLINE (58)

    /** c_decl.e:917				if sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg PromoteTypeInfo pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 494 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22821 = (object)*(((s1_ptr)_2)->base + 52);
    // SubProg PromoteTypeInfo pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 500 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22822 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22822 = - _36NOVALUE_16291;
        }
    }
    else {
        _22822 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 503 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22821, _22822)){
        _22821 = NOVALUE;
        DeRef(_22822);
        _22822 = NOVALUE;
        goto L14; // [503] 520
    }
    _22821 = NOVALUE;
    DeRef(_22822);
    _22822 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 507 op: STARTLINE (58)

    /** c_decl.e:918					sym[S_ARG_SEQ_LEN] = NOVALUE*/
    // SubProg PromoteTypeInfo pc: 509 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 513 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 517 op: ELSE (23)
    goto L15; // [517] 535
    // SubProg PromoteTypeInfo pc: 519 op: NOP1 (159)
L14: // addr: 520 pc: 519 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 520 op: STARTLINE (58)

    /** c_decl.e:920					sym[S_ARG_SEQ_LEN] = sym[S_ARG_SEQ_LEN_NEW]*/
    // SubProg PromoteTypeInfo pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 524 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 526 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22824 = (object)*(((s1_ptr)_2)->base + 52);
    // SubProg PromoteTypeInfo pc: 530 op: ASSIGN_SUBS (16)
    Ref(_22824);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22824;
    if( _1 != _22824 ){
        DeRef(_1);
    }
    _22824 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 534 op: NOP1 (159)
L15: // addr: 535 pc: 534 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 535 op: STARTLINE (58)

    /** c_decl.e:922				sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 537 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 539 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 541 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22825 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22825 = - _36NOVALUE_16291;
        }
    }
    else {
        _22825 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 544 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22825;
    if( _1 != _22825 ){
        DeRef(_1);
    }
    _22825 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 548 op: NOP1 (159)
L6: // addr: 549 pc: 548 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 549 op: STARTLINE (58)

    /** c_decl.e:925			sym[S_GTYPE_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 551 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 553 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 555 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 559 op: STARTLINE (58)

    /** c_decl.e:927			if sym[S_SEQ_ELEM_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 561 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 563 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22826 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg PromoteTypeInfo pc: 567 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 569 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22826, 0)){
        _22826 = NOVALUE;
        goto L16; // [569] 586
    }
    _22826 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 573 op: STARTLINE (58)

    /** c_decl.e:928			   sym[S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 577 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 579 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 583 op: ELSE (23)
    goto L17; // [583] 601
    // SubProg PromoteTypeInfo pc: 585 op: NOP1 (159)
L16: // addr: 586 pc: 585 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 586 op: STARTLINE (58)

    /** c_decl.e:930				sym[S_SEQ_ELEM] = sym[S_SEQ_ELEM_NEW]*/
    // SubProg PromoteTypeInfo pc: 588 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 592 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22828 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg PromoteTypeInfo pc: 596 op: ASSIGN_SUBS (16)
    Ref(_22828);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22828;
    if( _1 != _22828 ){
        DeRef(_1);
    }
    _22828 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 600 op: NOP1 (159)
L17: // addr: 601 pc: 600 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 601 op: STARTLINE (58)

    /** c_decl.e:932			sym[S_SEQ_ELEM_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 603 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 605 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 607 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 611 op: STARTLINE (58)

    /** c_decl.e:934			if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg PromoteTypeInfo pc: 613 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 615 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22829 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg PromoteTypeInfo pc: 619 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 621 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22830 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22830 = - _36NOVALUE_16291;
        }
    }
    else {
        _22830 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 624 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22829, _22830)){
        _22829 = NOVALUE;
        DeRef(_22830);
        _22830 = NOVALUE;
        goto L18; // [624] 641
    }
    _22829 = NOVALUE;
    DeRef(_22830);
    _22830 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 628 op: STARTLINE (58)

    /** c_decl.e:935				sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg PromoteTypeInfo pc: 630 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 632 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 634 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 638 op: ELSE (23)
    goto L19; // [638] 656
    // SubProg PromoteTypeInfo pc: 640 op: NOP1 (159)
L18: // addr: 641 pc: 640 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 641 op: STARTLINE (58)

    /** c_decl.e:937				sym[S_SEQ_LEN] = sym[S_SEQ_LEN_NEW]*/
    // SubProg PromoteTypeInfo pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 645 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 647 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22832 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg PromoteTypeInfo pc: 651 op: ASSIGN_SUBS (16)
    Ref(_22832);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22832;
    if( _1 != _22832 ){
        DeRef(_1);
    }
    _22832 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 655 op: NOP1 (159)
L19: // addr: 656 pc: 655 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 656 op: STARTLINE (58)

    /** c_decl.e:939			sym[S_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 658 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 660 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 662 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22833 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22833 = - _36NOVALUE_16291;
        }
    }
    else {
        _22833 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 665 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22833;
    if( _1 != _22833 ){
        DeRef(_1);
    }
    _22833 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 669 op: STARTLINE (58)

    /** c_decl.e:941			if sym[S_TOKEN] != NAMESPACE*/
    // SubProg PromoteTypeInfo pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 673 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22834 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22834 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg PromoteTypeInfo pc: 677 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 679 op: NOTEQ (4)
    if (IS_ATOM_INT(_22834)) {
        _22835 = (_22834 != 523);
    }
    else {
        _22835 = binary_op(NOTEQ, _22834, 523);
    }
    _22834 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 683 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22835)) {
        if (_22835 == 0) {
            goto L1A; // [683] 794
        }
    }
    else {
        if (DBL_PTR(_22835)->dbl == 0.0) {
            goto L1A; // [683] 794
        }
    }
    // SubProg PromoteTypeInfo pc: 687 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 689 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22837 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg PromoteTypeInfo pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 695 op: NOTEQ (4)
    if (IS_ATOM_INT(_22837)) {
        _22838 = (_22837 != 2);
    }
    else {
        _22838 = binary_op(NOTEQ, _22837, 2);
    }
    _22837 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 699 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 700 op: IF (20)
    if (_22838 == 0) {
        DeRef(_22838);
        _22838 = NOVALUE;
        goto L1A; // [700] 794
    }
    else {
        if (!IS_ATOM_INT(_22838) && DBL_PTR(_22838)->dbl == 0.0){
            DeRef(_22838);
            _22838 = NOVALUE;
            goto L1A; // [700] 794
        }
        DeRef(_22838);
        _22838 = NOVALUE;
    }
    DeRef(_22838);
    _22838 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 703 op: STARTLINE (58)

    /** c_decl.e:944				if sym[S_OBJ_MIN_NEW] = -NOVALUE or*/
    // SubProg PromoteTypeInfo pc: 705 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 707 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22839 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 713 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22840 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22840 = - _36NOVALUE_16291;
        }
    }
    else {
        _22840 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 716 op: EQUALS (3)
    if (IS_ATOM_INT(_22839) && IS_ATOM_INT(_22840)) {
        _22841 = (_22839 == _22840);
    }
    else {
        _22841 = binary_op(EQUALS, _22839, _22840);
    }
    _22839 = NOVALUE;
    DeRef(_22840);
    _22840 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 720 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22841)) {
        if (_22841 != 0) {
            goto L1B; // [720] 741
        }
    }
    else {
        if (DBL_PTR(_22841)->dbl != 0.0) {
            goto L1B; // [720] 741
        }
    }
    // SubProg PromoteTypeInfo pc: 724 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 726 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22843 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 730 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 732 op: EQUALS (3)
    if (IS_ATOM_INT(_22843) && IS_ATOM_INT(_36NOVALUE_16291)) {
        _22844 = (_22843 == _36NOVALUE_16291);
    }
    else {
        _22844 = binary_op(EQUALS, _22843, _36NOVALUE_16291);
    }
    _22843 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 736 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 737 op: IF (20)
    if (_22844 == 0) {
        DeRef(_22844);
        _22844 = NOVALUE;
        goto L1C; // [737] 764
    }
    else {
        if (!IS_ATOM_INT(_22844) && DBL_PTR(_22844)->dbl == 0.0){
            DeRef(_22844);
            _22844 = NOVALUE;
            goto L1C; // [737] 764
        }
        DeRef(_22844);
        _22844 = NOVALUE;
    }
    DeRef(_22844);
    _22844 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 740 op: NOP1 (159)
L1B: // addr: 741 pc: 740 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 741 op: STARTLINE (58)

    /** c_decl.e:946					sym[S_OBJ_MIN] = MININT*/
    // SubProg PromoteTypeInfo pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 745 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 747 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 751 op: STARTLINE (58)

    /** c_decl.e:947					sym[S_OBJ_MAX] = MAXINT*/
    // SubProg PromoteTypeInfo pc: 753 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 757 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 761 op: ELSE (23)
    goto L1D; // [761] 793
    // SubProg PromoteTypeInfo pc: 763 op: NOP1 (159)
L1C: // addr: 764 pc: 763 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 764 op: STARTLINE (58)

    /** c_decl.e:949					sym[S_OBJ_MIN] = sym[S_OBJ_MIN_NEW]*/
    // SubProg PromoteTypeInfo pc: 766 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 768 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 770 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22845 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 774 op: ASSIGN_SUBS (16)
    Ref(_22845);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22845;
    if( _1 != _22845 ){
        DeRef(_1);
    }
    _22845 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 778 op: STARTLINE (58)

    /** c_decl.e:950					sym[S_OBJ_MAX] = sym[S_OBJ_MAX_NEW]*/
    // SubProg PromoteTypeInfo pc: 780 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 782 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 784 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22846 = (object)*(((s1_ptr)_2)->base + 42);
    // SubProg PromoteTypeInfo pc: 788 op: ASSIGN_SUBS (16)
    Ref(_22846);
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22846;
    if( _1 != _22846 ){
        DeRef(_1);
    }
    _22846 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 792 op: NOP1 (159)
L1D: // addr: 793 pc: 792 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 793 op: NOP1 (159)
L1A: // addr: 794 pc: 793 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 794 op: STARTLINE (58)

    /** c_decl.e:953			sym[S_OBJ_MIN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 798 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 800 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _22847 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22847 = - _36NOVALUE_16291;
        }
    }
    else {
        _22847 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg PromoteTypeInfo pc: 803 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22847;
    if( _1 != _22847 ){
        DeRef(_1);
    }
    _22847 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 807 op: STARTLINE (58)

    /** c_decl.e:955			if sym[S_NREFS] = 1 and*/
    // SubProg PromoteTypeInfo pc: 809 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 811 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22848 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg PromoteTypeInfo pc: 815 op: EQUALS (3)
    if (IS_ATOM_INT(_22848)) {
        _22849 = (_22848 == 1);
    }
    else {
        _22849 = binary_op(EQUALS, _22848, 1);
    }
    _22848 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 819 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22849)) {
        if (_22849 == 0) {
            goto L1E; // [819] 874
        }
    }
    else {
        if (DBL_PTR(_22849)->dbl == 0.0) {
            goto L1E; // [819] 874
        }
    }
    // SubProg PromoteTypeInfo pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 825 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22851 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22851 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    // SubProg PromoteTypeInfo pc: 829 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 831 op: FIND_FROM (176)
    _22852 = find_from(_22851, _38RTN_TOKS_16044, 1);
    _22851 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 836 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 837 op: IF (20)
    if (_22852 == 0)
    {
        _22852 = NOVALUE;
        goto L1E; // [837] 874
    }
    else{
        _22852 = NOVALUE;
    }
    // SubProg PromoteTypeInfo pc: 840 op: STARTLINE (58)

    /** c_decl.e:957				if sym[S_USAGE] != U_DELETED then*/
    // SubProg PromoteTypeInfo pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 844 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _22853 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg PromoteTypeInfo pc: 848 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 850 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22853, 99)){
        _22853 = NOVALUE;
        goto L1F; // [850] 873
    }
    _22853 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 854 op: STARTLINE (58)

    /** c_decl.e:958					sym[S_USAGE] = U_DELETED*/
    // SubProg PromoteTypeInfo pc: 856 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 860 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 99;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 864 op: STARTLINE (58)

    /** c_decl.e:959					deleted_routines += 1*/
    // SubProg PromoteTypeInfo pc: 866 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 868 op: PLUS1_I (117)
    _58deleted_routines_43216 = _58deleted_routines_43216 + 1;
    // SubProg PromoteTypeInfo pc: 872 op: NOP1 (159)
L1F: // addr: 873 pc: 872 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 873 op: NOP1 (159)
L1E: // addr: 874 pc: 873 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 874 op: STARTLINE (58)

    /** c_decl.e:962			sym[S_NREFS] = 0*/
    // SubProg PromoteTypeInfo pc: 876 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 878 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_43222);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43222 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 882 op: STARTLINE (58)

    /** c_decl.e:963			if not equal(symo, sym) then*/
    // SubProg PromoteTypeInfo pc: 884 op: EQUAL (153)
    if (_symo_43223 == _sym_43222)
    _22856 = 1;
    else if (IS_ATOM_INT(_symo_43223) && IS_ATOM_INT(_sym_43222))
    _22856 = 0;
    else
    _22856 = (compare(_symo_43223, _sym_43222) == 0);
    // SubProg PromoteTypeInfo pc: 888 op: NOT_IFW (108)
    if (_22856 != 0)
    goto L20; // [888] 906
    _22856 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 891 op: STARTLINE (58)

    /** c_decl.e:964				SymTab[s] = sym*/
    // SubProg PromoteTypeInfo pc: 893 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 895 op: ASSIGN_SUBS (16)
    RefDS(_sym_43222);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_43221);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_43222;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 899 op: STARTLINE (58)

    /** c_decl.e:965				updsym += 1*/
    // SubProg PromoteTypeInfo pc: 901 op: PLUS1_I (117)
    _updsym_43219 = _updsym_43219 + 1;
    // SubProg PromoteTypeInfo pc: 905 op: NOP1 (159)
L20: // addr: 906 pc: 905 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 906 op: STARTLINE (58)

    /** c_decl.e:967			s = sym[S_NEXT]*/
    // SubProg PromoteTypeInfo pc: 908 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 910 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43222);
    _s_43221 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43221)){
        _s_43221 = (object)DBL_PTR(_s_43221)->dbl;
    }
    // SubProg PromoteTypeInfo pc: 916 op: STARTLINE (58)

    /** c_decl.e:968		end while*/
    // SubProg PromoteTypeInfo pc: 918 op: ENDWHILE (22)
    goto L1; // [918] 38
    // SubProg PromoteTypeInfo pc: 920 op: NOP1 (159)
L2: // addr: 921 pc: 920 sub: 43217 op: 159
    // SubProg PromoteTypeInfo pc: 921 op: STARTLINE (58)

    /** c_decl.e:971		for i = 1 to length(temp_name_type) do*/
    // SubProg PromoteTypeInfo pc: 923 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 925 op: LENGTH (42)
    if (IS_SEQUENCE(_36temp_name_type_16518)){
            _22860 = SEQ_PTR(_36temp_name_type_16518)->length;
    }
    else {
        _22860 = 1;
    }
    // SubProg PromoteTypeInfo pc: 928 op: FOR_I (125)
    {
        object _i_43449;
        _i_43449 = 1;
L21: // addr: 935 pc: 928 sub: 43217 op: 125
        if (_i_43449 > _22860){
            goto L22; // [928] 1061
        }
        // SubProg PromoteTypeInfo pc: 935 op: STARTLINE (58)

        /** c_decl.e:972			integer upd = 0*/
        // SubProg PromoteTypeInfo pc: 937 op: ASSIGN_I (113)
        _upd_43452 = 0;
        // SubProg PromoteTypeInfo pc: 940 op: STARTLINE (58)

        /** c_decl.e:974			if temp_name_type[i][T_GTYPE] != temp_name_type[i][T_GTYPE_NEW] then*/
        // SubProg PromoteTypeInfo pc: 942 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 944 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        _22861 = (object)*(((s1_ptr)_2)->base + _i_43449);
        // SubProg PromoteTypeInfo pc: 948 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 950 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22861);
        _22862 = (object)*(((s1_ptr)_2)->base + 1);
        _22861 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 954 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 956 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        _22863 = (object)*(((s1_ptr)_2)->base + _i_43449);
        // SubProg PromoteTypeInfo pc: 960 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 962 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22863);
        _22864 = (object)*(((s1_ptr)_2)->base + 2);
        _22863 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 966 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22862, _22864)){
            _22862 = NOVALUE;
            _22864 = NOVALUE;
            goto L23; // [966] 1003
        }
        _22862 = NOVALUE;
        _22864 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 970 op: STARTLINE (58)

        /** c_decl.e:975				temp_name_type[i][T_GTYPE] = temp_name_type[i][T_GTYPE_NEW]*/
        // SubProg PromoteTypeInfo pc: 972 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 974 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36temp_name_type_16518 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43449 + ((s1_ptr)_2)->base);
        // SubProg PromoteTypeInfo pc: 979 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 981 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 983 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        _22868 = (object)*(((s1_ptr)_2)->base + _i_43449);
        // SubProg PromoteTypeInfo pc: 987 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 989 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22868);
        _22869 = (object)*(((s1_ptr)_2)->base + 2);
        _22868 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 993 op: PASSIGN_SUBS (162)
        Ref(_22869);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _22869;
        if( _1 != _22869 ){
            DeRef(_1);
        }
        _22869 = NOVALUE;
        _22866 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 997 op: STARTLINE (58)

        /** c_decl.e:976				upd = 1*/
        // SubProg PromoteTypeInfo pc: 999 op: ASSIGN_I (113)
        _upd_43452 = 1;
        // SubProg PromoteTypeInfo pc: 1002 op: NOP1 (159)
L23: // addr: 1003 pc: 1002 sub: 43217 op: 159
        // SubProg PromoteTypeInfo pc: 1003 op: STARTLINE (58)

        /** c_decl.e:978			if temp_name_type[i][T_GTYPE_NEW] != TYPE_NULL then*/
        // SubProg PromoteTypeInfo pc: 1005 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1007 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        _22870 = (object)*(((s1_ptr)_2)->base + _i_43449);
        // SubProg PromoteTypeInfo pc: 1011 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1013 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22870);
        _22871 = (object)*(((s1_ptr)_2)->base + 2);
        _22870 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1017 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1019 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22871, 0)){
            _22871 = NOVALUE;
            goto L24; // [1019] 1046
        }
        _22871 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1023 op: STARTLINE (58)

        /** c_decl.e:979				temp_name_type[i][T_GTYPE_NEW] = TYPE_NULL*/
        // SubProg PromoteTypeInfo pc: 1025 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1027 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_36temp_name_type_16518);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36temp_name_type_16518 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43449 + ((s1_ptr)_2)->base);
        // SubProg PromoteTypeInfo pc: 1032 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1034 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1036 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        _22873 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1040 op: STARTLINE (58)

        /** c_decl.e:980				upd = 1*/
        // SubProg PromoteTypeInfo pc: 1042 op: ASSIGN_I (113)
        _upd_43452 = 1;
        // SubProg PromoteTypeInfo pc: 1045 op: NOP1 (159)
L24: // addr: 1046 pc: 1045 sub: 43217 op: 159
        // SubProg PromoteTypeInfo pc: 1046 op: STARTLINE (58)

        /** c_decl.e:982			updsym += upd*/
        // SubProg PromoteTypeInfo pc: 1048 op: PLUS_I (115)
        _updsym_43219 = _updsym_43219 + _upd_43452;
        // SubProg PromoteTypeInfo pc: 1052 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var upd_43452
        // SubProg PromoteTypeInfo pc: 1054 op: STARTLINE (58)

        /** c_decl.e:983		end for*/
        // SubProg PromoteTypeInfo pc: 1056 op: ENDFOR_INT_UP1 (54)
        _i_43449 = _i_43449 + 1;
        goto L21; // [1056] 935
L22: // addr: 1061 pc: 1056 sub: 43217 op: 54
        ;
    }
    // SubProg PromoteTypeInfo pc: 1061 op: STARTLINE (58)

    /** c_decl.e:985		return updsym*/
    // SubProg PromoteTypeInfo pc: 1063 op: RETURNF (28)

// Exiting block BLOCK: PromoteTypeInfo

// block var s_43221

// block var sym_43222
    DeRef(_sym_43222);

// block var symo_43223
    DeRef(_symo_43223);
    DeRef(_22787);
    _22787 = NOVALUE;
    DeRef(_22790);
    _22790 = NOVALUE;
    DeRef(_22814);
    _22814 = NOVALUE;
    DeRef(_22779);
    _22779 = NOVALUE;
    DeRef(_22795);
    _22795 = NOVALUE;
    DeRef(_22801);
    _22801 = NOVALUE;
    DeRef(_22835);
    _22835 = NOVALUE;
    DeRef(_22841);
    _22841 = NOVALUE;
    DeRef(_22804);
    _22804 = NOVALUE;
    DeRef(_22849);
    _22849 = NOVALUE;
    DeRef(_22798);
    _22798 = NOVALUE;
    return _updsym_43219;
    // SubProg PromoteTypeInfo pc: 1067 op: BADRETURNF (43)
    ;
}


void _58declare_prototype(object _s_43487)
{
    object _ret_type_43488 = NOVALUE;
    object _scope_43499 = NOVALUE;
// skipping _22894  name type: 0
    object _22893 = NOVALUE; // 43532 22893
    object _22892 = NOVALUE; // 43530 22892
    object _22890 = NOVALUE; // 43524 22890
    object _22889 = NOVALUE; // 43522 22889
    object _22888 = NOVALUE; // 43519 22888
    object _22887 = NOVALUE; // 43517 22887
    object _22885 = NOVALUE; // 43512 22885
    object _22884 = NOVALUE; // 43510 22884
    object _22883 = NOVALUE; // 43509 22883
    object _22882 = NOVALUE; // 43507 22882
    object _22881 = NOVALUE; // 43506 22881
// skipping _22880  name type: 0
    object _22879 = NOVALUE; // 43501 22879
    object _22878 = NOVALUE; // 43497 22878
// skipping _22877  name type: 0
    object _22876 = NOVALUE; // 43491 22876
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg declare_prototype pc: 1 op: INTEGER_CHECK (96)
    // SubProg declare_prototype pc: 3 op: STARTLINE (58)

    /** c_decl.e:990		if sym_token( s ) = PROC then*/
    // SubProg declare_prototype pc: 5 op: PROC (27)
    _22876 = _54sym_token(_s_43487);
    // SubProg declare_prototype pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 11 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22876, 27)){
        DeRef(_22876);
        _22876 = NOVALUE;
        goto L1; // [11] 25
    }
    DeRef(_22876);
    _22876 = NOVALUE;
    // SubProg declare_prototype pc: 15 op: STARTLINE (58)

    /** c_decl.e:991			ret_type = "void "*/
    // SubProg declare_prototype pc: 17 op: ASSIGN (18)
    RefDS(_22717);
    DeRefi(_ret_type_43488);
    _ret_type_43488 = _22717;
    // SubProg declare_prototype pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg declare_prototype pc: 22 op: ELSE (23)
    goto L2; // [22] 33
    // SubProg declare_prototype pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 43484 op: 159
    // SubProg declare_prototype pc: 25 op: STARTLINE (58)

    /** c_decl.e:993			ret_type ="object "*/
    // SubProg declare_prototype pc: 27 op: ASSIGN (18)
    RefDS(_22718);
    DeRefi(_ret_type_43488);
    _ret_type_43488 = _22718;
    // SubProg declare_prototype pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg declare_prototype pc: 32 op: NOP1 (159)
L2: // addr: 33 pc: 32 sub: 43484 op: 159
    // SubProg declare_prototype pc: 33 op: STARTLINE (58)

    /** c_decl.e:996		c_hputs(ret_type)*/
    // SubProg declare_prototype pc: 35 op: PRIVATE_INIT_CHECK (30)
    // SubProg declare_prototype pc: 37 op: PROC (27)
    RefDS(_ret_type_43488);
    _55c_hputs(_ret_type_43488);
    // SubProg declare_prototype pc: 40 op: STARTLINE (58)

    /** c_decl.e:999		if dll_option and TWINDOWS  then*/
    // SubProg declare_prototype pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 44 op: SC1_AND_IF (146)
    if (_58dll_option_42086 == 0) {
        goto L3; // [44] 116
    }
    // SubProg declare_prototype pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 50 op: NOP1 (159)
    // SubProg declare_prototype pc: 51 op: IF (20)
    if (_41TWINDOWS_21210 == 0)
    {
        goto L3; // [51] 116
    }
    else{
    }
    // SubProg declare_prototype pc: 54 op: STARTLINE (58)

    /** c_decl.e:1000			integer scope = SymTab[s][S_SCOPE]*/
    // SubProg declare_prototype pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22879 = (object)*(((s1_ptr)_2)->base + _s_43487);
    // SubProg declare_prototype pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22879);
    _scope_43499 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43499)){
        _scope_43499 = (object)DBL_PTR(_scope_43499)->dbl;
    }
    _22879 = NOVALUE;
    // SubProg declare_prototype pc: 70 op: STARTLINE (58)

    /** c_decl.e:1001			if (scope = SC_PUBLIC*/
    // SubProg declare_prototype pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 74 op: EQUALS (3)
    _22881 = (_scope_43499 == 13);
    // SubProg declare_prototype pc: 78 op: SC1_OR (143)
    if (_22881 != 0) {
        _22882 = 1;
        goto L4; // [78] 92
    }
    // SubProg declare_prototype pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 84 op: EQUALS (3)
    _22883 = (_scope_43499 == 11);
    // SubProg declare_prototype pc: 88 op: SC2_OR (144)
    _22882 = (_22883 != 0);
    // SubProg declare_prototype pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 43484 op: 159
    // SubProg declare_prototype pc: 92 op: SC1_OR (143)
    if (_22882 != 0) {
        DeRef(_22884);
        _22884 = 1;
        goto L5; // [92] 106
    }
    // SubProg declare_prototype pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 98 op: EQUALS (3)
    _22885 = (_scope_43499 == 6);
    // SubProg declare_prototype pc: 102 op: SC2_OR (144)
    _22884 = (_22885 != 0);
    // SubProg declare_prototype pc: 105 op: NOP1 (159)
L5: // addr: 106 pc: 105 sub: 43484 op: 159
    // SubProg declare_prototype pc: 106 op: IF (20)
    if (_22884 == 0)
    {
        _22884 = NOVALUE;
        goto L6; // [106] 115
    }
    else{
        _22884 = NOVALUE;
    }
    // SubProg declare_prototype pc: 109 op: STARTLINE (58)

    /** c_decl.e:1006				c_hputs("__stdcall ")*/
    // SubProg declare_prototype pc: 111 op: PROC (27)
    RefDS(_22886);
    _55c_hputs(_22886);
    // SubProg declare_prototype pc: 114 op: NOP1 (159)
L6: // addr: 115 pc: 114 sub: 43484 op: 159
    // SubProg declare_prototype pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 43484 op: 159
    // SubProg declare_prototype pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var scope_43499
    // SubProg declare_prototype pc: 118 op: STARTLINE (58)

    /** c_decl.e:1010		c_hprintf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg declare_prototype pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22887 = (object)*(((s1_ptr)_2)->base + _s_43487);
    // SubProg declare_prototype pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22887);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22888 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22888 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22887 = NOVALUE;
    // SubProg declare_prototype pc: 132 op: PROC (27)
    RefDS(_22056);
    Ref(_22888);
    _55c_hprintf(_22056, _22888);
    _22888 = NOVALUE;
    // SubProg declare_prototype pc: 136 op: STARTLINE (58)

    /** c_decl.e:1011		c_hputs(SymTab[s][S_NAME])*/
    // SubProg declare_prototype pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 140 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22889 = (object)*(((s1_ptr)_2)->base + _s_43487);
    // SubProg declare_prototype pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22889);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22890 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22890 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22889 = NOVALUE;
    // SubProg declare_prototype pc: 150 op: PROC (27)
    Ref(_22890);
    _55c_hputs(_22890);
    _22890 = NOVALUE;
    // SubProg declare_prototype pc: 153 op: STARTLINE (58)

    /** c_decl.e:1012		c_hputs("(")*/
    // SubProg declare_prototype pc: 155 op: PROC (27)
    RefDS(_22891);
    _55c_hputs(_22891);
    // SubProg declare_prototype pc: 158 op: STARTLINE (58)

    /** c_decl.e:1014		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg declare_prototype pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22892 = (object)*(((s1_ptr)_2)->base + _s_43487);
    // SubProg declare_prototype pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 168 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22892);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _22893 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _22893 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _22892 = NOVALUE;
    // SubProg declare_prototype pc: 172 op: FOR (21)
    {
        object _i_43528;
        _i_43528 = 1;
L7: // addr: 179 pc: 172 sub: 43484 op: 21
        if (binary_op_a(GREATER, _i_43528, _22893)){
            goto L8; // [172] 206
        }
        // SubProg declare_prototype pc: 179 op: STARTLINE (58)

        /** c_decl.e:1015			if i = 1 then*/
        // SubProg declare_prototype pc: 181 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _i_43528, 1)){
            goto L9; // [181] 193
        }
        // SubProg declare_prototype pc: 185 op: STARTLINE (58)

        /** c_decl.e:1016				c_hputs("object")*/
        // SubProg declare_prototype pc: 187 op: PROC (27)
        RefDS(_22895);
        _55c_hputs(_22895);
        // SubProg declare_prototype pc: 190 op: ELSE (23)
        goto LA; // [190] 199
        // SubProg declare_prototype pc: 192 op: NOP1 (159)
L9: // addr: 193 pc: 192 sub: 43484 op: 159
        // SubProg declare_prototype pc: 193 op: STARTLINE (58)

        /** c_decl.e:1018				c_hputs(", object")*/
        // SubProg declare_prototype pc: 195 op: PROC (27)
        RefDS(_22896);
        _55c_hputs(_22896);
        // SubProg declare_prototype pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 43484 op: 159
        // SubProg declare_prototype pc: 199 op: STARTLINE (58)

        /** c_decl.e:1020		end for*/
        // SubProg declare_prototype pc: 201 op: ENDFOR_INT_UP1 (54)
        _0 = _i_43528;
        if (IS_ATOM_INT(_i_43528)) {
            _i_43528 = _i_43528 + 1;
            if ((object)((uintptr_t)_i_43528 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43528 = NewDouble((eudouble)_i_43528);
            }
        }
        else {
            _i_43528 = binary_op_a(PLUS, _i_43528, 1);
        }
        DeRef(_0);
        goto L7; // [201] 179
L8: // addr: 206 pc: 201 sub: 43484 op: 54
        ;
        DeRef(_i_43528);
    }
    // SubProg declare_prototype pc: 206 op: STARTLINE (58)

    /** c_decl.e:1021		c_hputs(");\n")*/
    // SubProg declare_prototype pc: 208 op: PROC (27)
    RefDS(_22237);
    _55c_hputs(_22237);
    // SubProg declare_prototype pc: 211 op: STARTLINE (58)

    /** c_decl.e:1022	end procedure*/
    // SubProg declare_prototype pc: 213 op: RETURNP (29)

// Exiting block BLOCK: declare_prototype

// block var s_43487

// block var ret_type_43488
    DeRefi(_ret_type_43488);
    DeRef(_22885);
    _22885 = NOVALUE;
    _22893 = NOVALUE;
    DeRef(_22881);
    _22881 = NOVALUE;
    DeRef(_22883);
    _22883 = NOVALUE;
    return;
    // SubProg declare_prototype pc: 216 op: BADRETURNF (43)
    ;
}


void _58add_to_routine_list(object _s_43544, object _seq_num_43545, object _first_43546)
{
    object _p_43621 = NOVALUE;
// skipping _22943  name type: 0
    object _22942 = NOVALUE; // 43653 22942
// skipping _22941  name type: 0
    object _22940 = NOVALUE; // 43648 22940
// skipping _22939  name type: 0
    object _22938 = NOVALUE; // 43643 22938
// skipping _22937  name type: 0
    object _22936 = NOVALUE; // 43638 22936
// skipping _22935  name type: 0
    object _22934 = NOVALUE; // 43633 22934
    object _22933 = NOVALUE; // 43631 22933
    object _22932 = NOVALUE; // 43629 22932
// skipping _22931  name type: 0
    object _22930 = NOVALUE; // 43623 22930
// skipping _22929  name type: 0
    object _22928 = NOVALUE; // 43617 22928
// skipping _22927  name type: 0
    object _22926 = NOVALUE; // 43614 22926
    object _22925 = NOVALUE; // 43612 22925
    object _22923 = NOVALUE; // 43607 22923
    object _22922 = NOVALUE; // 43605 22922
    object _22918 = NOVALUE; // 43596 22918
    object _22917 = NOVALUE; // 43595 22917
    object _22916 = NOVALUE; // 43591 22916
    object _22915 = NOVALUE; // 43589 22915
    object _22914 = NOVALUE; // 43587 22914
    object _22913 = NOVALUE; // 43586 22913
    object _22912 = NOVALUE; // 43583 22912
    object _22911 = NOVALUE; // 43581 22911
    object _22910 = NOVALUE; // 43578 22910
    object _22909 = NOVALUE; // 43576 22909
    object _22907 = NOVALUE; // 43571 22907
    object _22906 = NOVALUE; // 43569 22906
    object _22905 = NOVALUE; // 43566 22905
    object _22904 = NOVALUE; // 43564 22904
    object _22901 = NOVALUE; // 43557 22901
    object _22900 = NOVALUE; // 43555 22900
// skipping _22897  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_to_routine_list pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 5 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 7 op: STARTLINE (58)

    /** c_decl.e:1025		if not first then*/
    // SubProg add_to_routine_list pc: 9 op: NOT_IFW (108)
    if (_first_43546 != 0)
    goto L1; // [9] 18
    // SubProg add_to_routine_list pc: 12 op: STARTLINE (58)

    /** c_decl.e:1026			c_puts(",\n")*/
    // SubProg add_to_routine_list pc: 14 op: PROC (27)
    RefDS(_22898);
    _55c_puts(_22898);
    // SubProg add_to_routine_list pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 43541 op: 159
    // SubProg add_to_routine_list pc: 18 op: STARTLINE (58)

    /** c_decl.e:1029		c_puts("  {\"")*/
    // SubProg add_to_routine_list pc: 20 op: PROC (27)
    RefDS(_22899);
    _55c_puts(_22899);
    // SubProg add_to_routine_list pc: 23 op: STARTLINE (58)

    /** c_decl.e:1031		c_puts(SymTab[s][S_NAME])*/
    // SubProg add_to_routine_list pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22900 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22900);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22901 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22901 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22900 = NOVALUE;
    // SubProg add_to_routine_list pc: 37 op: PROC (27)
    Ref(_22901);
    _55c_puts(_22901);
    _22901 = NOVALUE;
    // SubProg add_to_routine_list pc: 40 op: STARTLINE (58)

    /** c_decl.e:1032		c_puts("\", ")*/
    // SubProg add_to_routine_list pc: 42 op: PROC (27)
    RefDS(_22902);
    _55c_puts(_22902);
    // SubProg add_to_routine_list pc: 45 op: STARTLINE (58)

    /** c_decl.e:1033		c_puts("(object (*)())")*/
    // SubProg add_to_routine_list pc: 47 op: PROC (27)
    RefDS(_22903);
    _55c_puts(_22903);
    // SubProg add_to_routine_list pc: 50 op: STARTLINE (58)

    /** c_decl.e:1034		c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg add_to_routine_list pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22904 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22904);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22905 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22905 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22904 = NOVALUE;
    // SubProg add_to_routine_list pc: 64 op: PROC (27)
    RefDS(_22056);
    Ref(_22905);
    _55c_printf(_22056, _22905);
    _22905 = NOVALUE;
    // SubProg add_to_routine_list pc: 68 op: STARTLINE (58)

    /** c_decl.e:1035		c_puts(SymTab[s][S_NAME])*/
    // SubProg add_to_routine_list pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22906 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 78 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22906);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22907 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22907 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22906 = NOVALUE;
    // SubProg add_to_routine_list pc: 82 op: PROC (27)
    Ref(_22907);
    _55c_puts(_22907);
    _22907 = NOVALUE;
    // SubProg add_to_routine_list pc: 85 op: STARTLINE (58)

    /** c_decl.e:1036		c_printf(", %d", seq_num)*/
    // SubProg add_to_routine_list pc: 87 op: PROC (27)
    RefDS(_22908);
    _55c_printf(_22908, _seq_num_43545);
    // SubProg add_to_routine_list pc: 91 op: STARTLINE (58)

    /** c_decl.e:1037		c_printf(", %d", SymTab[s][S_FILE_NO])*/
    // SubProg add_to_routine_list pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22909 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22909);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22910 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22910 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22909 = NOVALUE;
    // SubProg add_to_routine_list pc: 105 op: PROC (27)
    RefDS(_22908);
    Ref(_22910);
    _55c_printf(_22908, _22910);
    _22910 = NOVALUE;
    // SubProg add_to_routine_list pc: 109 op: STARTLINE (58)

    /** c_decl.e:1038		c_printf(", %d", SymTab[s][S_NUM_ARGS])*/
    // SubProg add_to_routine_list pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 113 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22911 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 119 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22911);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _22912 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _22912 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _22911 = NOVALUE;
    // SubProg add_to_routine_list pc: 123 op: PROC (27)
    RefDS(_22908);
    Ref(_22912);
    _55c_printf(_22908, _22912);
    _22912 = NOVALUE;
    // SubProg add_to_routine_list pc: 127 op: STARTLINE (58)

    /** c_decl.e:1040		if TWINDOWS and dll_option and find( SymTab[s][S_SCOPE], { SC_GLOBAL, SC_EXPORT, SC_PUBLIC} ) then*/
    // SubProg add_to_routine_list pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 131 op: SC1_AND (141)
    if (_41TWINDOWS_21210 == 0) {
        _22913 = 0;
        goto L2; // [131] 141
    }
    // SubProg add_to_routine_list pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 137 op: SC2_AND (142)
    _22913 = (_58dll_option_42086 != 0);
    // SubProg add_to_routine_list pc: 140 op: NOP1 (159)
L2: // addr: 141 pc: 140 sub: 43541 op: 159
    // SubProg add_to_routine_list pc: 141 op: SC1_AND_IF (146)
    if (_22913 == 0) {
        goto L3; // [141] 186
    }
    // SubProg add_to_routine_list pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22915 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22915);
    _22916 = (object)*(((s1_ptr)_2)->base + 4);
    _22915 = NOVALUE;
    // SubProg add_to_routine_list pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 163 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 11;
    ((intptr_t*)_2)[3] = 13;
    _22917 = MAKE_SEQ(_1);
    // SubProg add_to_routine_list pc: 169 op: FIND_FROM (176)
    _22918 = find_from(_22916, _22917, 1);
    _22916 = NOVALUE;
    DeRefDS(_22917);
    _22917 = NOVALUE;
    // SubProg add_to_routine_list pc: 174 op: NOP1 (159)
    // SubProg add_to_routine_list pc: 175 op: IF (20)
    if (_22918 == 0)
    {
        _22918 = NOVALUE;
        goto L3; // [175] 186
    }
    else{
        _22918 = NOVALUE;
    }
    // SubProg add_to_routine_list pc: 178 op: STARTLINE (58)

    /** c_decl.e:1041			c_puts(", 1")  -- must call with __stdcall convention*/
    // SubProg add_to_routine_list pc: 180 op: PROC (27)
    RefDS(_22919);
    _55c_puts(_22919);
    // SubProg add_to_routine_list pc: 183 op: ELSE (23)
    goto L4; // [183] 192
    // SubProg add_to_routine_list pc: 185 op: NOP1 (159)
L3: // addr: 186 pc: 185 sub: 43541 op: 159
    // SubProg add_to_routine_list pc: 186 op: STARTLINE (58)

    /** c_decl.e:1043			c_puts(", 0")  -- default: call with normal or __cdecl convention*/
    // SubProg add_to_routine_list pc: 188 op: PROC (27)
    RefDS(_22920);
    _55c_puts(_22920);
    // SubProg add_to_routine_list pc: 191 op: NOP1 (159)
L4: // addr: 192 pc: 191 sub: 43541 op: 159
    // SubProg add_to_routine_list pc: 192 op: STARTLINE (58)

    /** c_decl.e:1046		c_printf(", %d, 0", SymTab[s][S_SCOPE] )*/
    // SubProg add_to_routine_list pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 196 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22922 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 202 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22922);
    _22923 = (object)*(((s1_ptr)_2)->base + 4);
    _22922 = NOVALUE;
    // SubProg add_to_routine_list pc: 206 op: PROC (27)
    RefDS(_22921);
    Ref(_22923);
    _55c_printf(_22921, _22923);
    _22923 = NOVALUE;
    // SubProg add_to_routine_list pc: 210 op: STARTLINE (58)

    /** c_decl.e:1047		c_puts("}")*/
    // SubProg add_to_routine_list pc: 212 op: PROC (27)
    RefDS(_22924);
    _55c_puts(_22924);
    // SubProg add_to_routine_list pc: 215 op: STARTLINE (58)

    /** c_decl.e:1049		if SymTab[s][S_NREFS] < 2 then*/
    // SubProg add_to_routine_list pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 219 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22925 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 225 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22925);
    _22926 = (object)*(((s1_ptr)_2)->base + 12);
    _22925 = NOVALUE;
    // SubProg add_to_routine_list pc: 229 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22926, 2)){
        _22926 = NOVALUE;
        goto L5; // [229] 249
    }
    _22926 = NOVALUE;
    // SubProg add_to_routine_list pc: 233 op: STARTLINE (58)

    /** c_decl.e:1050			SymTab[s][S_NREFS] = 2 --s->nrefs++*/
    // SubProg add_to_routine_list pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 237 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_43544 + ((s1_ptr)_2)->base);
    // SubProg add_to_routine_list pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 244 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _22928 = NOVALUE;
    // SubProg add_to_routine_list pc: 248 op: NOP1 (159)
L5: // addr: 249 pc: 248 sub: 43541 op: 159
    // SubProg add_to_routine_list pc: 249 op: STARTLINE (58)

    /** c_decl.e:1055		symtab_index p = SymTab[s][S_NEXT]*/
    // SubProg add_to_routine_list pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 253 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22930 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 259 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22930);
    _p_43621 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_43621)){
        _p_43621 = (object)DBL_PTR(_p_43621)->dbl;
    }
    _22930 = NOVALUE;
    // SubProg add_to_routine_list pc: 265 op: STARTLINE (58)

    /** c_decl.e:1056		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg add_to_routine_list pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 269 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22932 = (object)*(((s1_ptr)_2)->base + _s_43544);
    // SubProg add_to_routine_list pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 275 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22932);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _22933 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _22933 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _22932 = NOVALUE;
    // SubProg add_to_routine_list pc: 279 op: FOR (21)
    {
        object _i_43627;
        _i_43627 = 1;
L6: // addr: 286 pc: 279 sub: 43541 op: 21
        if (binary_op_a(GREATER, _i_43627, _22933)){
            goto L7; // [279] 377
        }
        // SubProg add_to_routine_list pc: 286 op: STARTLINE (58)

        /** c_decl.e:1057			SymTab[p][S_ARG_SEQ_ELEM_NEW] = TYPE_OBJECT*/
        // SubProg add_to_routine_list pc: 288 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 290 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43621 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 295 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 297 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 299 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 46);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 16;
        DeRef(_1);
        _22934 = NOVALUE;
        // SubProg add_to_routine_list pc: 303 op: STARTLINE (58)

        /** c_decl.e:1058			SymTab[p][S_ARG_TYPE_NEW] = TYPE_OBJECT*/
        // SubProg add_to_routine_list pc: 305 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 307 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43621 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 312 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 314 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 316 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 44);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 16;
        DeRef(_1);
        _22936 = NOVALUE;
        // SubProg add_to_routine_list pc: 320 op: STARTLINE (58)

        /** c_decl.e:1059			SymTab[p][S_ARG_MIN_NEW] = NOVALUE*/
        // SubProg add_to_routine_list pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 324 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43621 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 331 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 333 op: PASSIGN_SUBS (162)
        Ref(_36NOVALUE_16291);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 49);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _36NOVALUE_16291;
        DeRef(_1);
        _22938 = NOVALUE;
        // SubProg add_to_routine_list pc: 337 op: STARTLINE (58)

        /** c_decl.e:1060			SymTab[p][S_ARG_SEQ_LEN_NEW] = NOVALUE*/
        // SubProg add_to_routine_list pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 341 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43621 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 346 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 348 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 350 op: PASSIGN_SUBS (162)
        Ref(_36NOVALUE_16291);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 52);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _36NOVALUE_16291;
        DeRef(_1);
        _22940 = NOVALUE;
        // SubProg add_to_routine_list pc: 354 op: STARTLINE (58)

        /** c_decl.e:1061			p = SymTab[p][S_NEXT]*/
        // SubProg add_to_routine_list pc: 356 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _22942 = (object)*(((s1_ptr)_2)->base + _p_43621);
        // SubProg add_to_routine_list pc: 362 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22942);
        _p_43621 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_p_43621)){
            _p_43621 = (object)DBL_PTR(_p_43621)->dbl;
        }
        _22942 = NOVALUE;
        // SubProg add_to_routine_list pc: 370 op: STARTLINE (58)

        /** c_decl.e:1062		end for*/
        // SubProg add_to_routine_list pc: 372 op: ENDFOR_INT_UP1 (54)
        _0 = _i_43627;
        if (IS_ATOM_INT(_i_43627)) {
            _i_43627 = _i_43627 + 1;
            if ((object)((uintptr_t)_i_43627 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43627 = NewDouble((eudouble)_i_43627);
            }
        }
        else {
            _i_43627 = binary_op_a(PLUS, _i_43627, 1);
        }
        DeRef(_0);
        goto L6; // [372] 286
L7: // addr: 377 pc: 372 sub: 43541 op: 54
        ;
        DeRef(_i_43627);
    }
    // SubProg add_to_routine_list pc: 377 op: STARTLINE (58)

    /** c_decl.e:1063	end procedure*/
    // SubProg add_to_routine_list pc: 379 op: RETURNP (29)

// Exiting block BLOCK: add_to_routine_list

// block var s_43544

// block var seq_num_43545

// block var first_43546

// block var p_43621
    _22933 = NOVALUE;
    return;
    // SubProg add_to_routine_list pc: 382 op: BADRETURNF (43)
    ;
}


void _58DeclareRoutineList()
{
    object _s_43659 = NOVALUE;
    object _first_43660 = NOVALUE;
    object _seq_num_43661 = NOVALUE;
    object _these_routines_43669 = NOVALUE;
    object _these_routines_43691 = NOVALUE;
// skipping _22960  name type: 0
// skipping _22959  name type: 0
    object _22958 = NOVALUE; // 43702 22958
    object _22957 = NOVALUE; // 43700 22957
// skipping _22956  name type: 0
    object _22955 = NOVALUE; // 43696 22955
// skipping _22954  name type: 0
    object _22953 = NOVALUE; // 43690 22953
// skipping _22951  name type: 0
    object _22950 = NOVALUE; // 43680 22950
    object _22949 = NOVALUE; // 43678 22949
// skipping _22948  name type: 0
    object _22947 = NOVALUE; // 43674 22947
// skipping _22946  name type: 0
    object _22945 = NOVALUE; // 43668 22945
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareRoutineList pc: 1 op: STARTLINE (58)

    /** c_decl.e:1069		integer first, seq_num*/
    // SubProg DeclareRoutineList pc: 3 op: STARTLINE (58)

    /** c_decl.e:1071		c_hputs("extern struct routine_list _00[];\n")*/
    // SubProg DeclareRoutineList pc: 5 op: PROC (27)
    RefDS(_22944);
    _55c_hputs(_22944);
    // SubProg DeclareRoutineList pc: 8 op: STARTLINE (58)

    /** c_decl.e:1073		check_file_routines()*/
    // SubProg DeclareRoutineList pc: 10 op: PROC (27)
    _58check_file_routines();
    // SubProg DeclareRoutineList pc: 12 op: STARTLINE (58)

    /** c_decl.e:1074		for f = 1 to length( file_routines ) do*/
    // SubProg DeclareRoutineList pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_58file_routines_44246)){
            _22945 = SEQ_PTR(_58file_routines_44246)->length;
    }
    else {
        _22945 = 1;
    }
    // SubProg DeclareRoutineList pc: 19 op: FOR_I (125)
    {
        object _f_43666;
        _f_43666 = 1;
L1: // addr: 26 pc: 19 sub: 43656 op: 125
        if (_f_43666 > _22945){
            goto L2; // [19] 98
        }
        // SubProg DeclareRoutineList pc: 26 op: STARTLINE (58)

        /** c_decl.e:1075			sequence these_routines = file_routines[f]*/
        // SubProg DeclareRoutineList pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg DeclareRoutineList pc: 30 op: RHS_SUBS_CHECK (92)
        DeRef(_these_routines_43669);
        _2 = (object)SEQ_PTR(_58file_routines_44246);
        _these_routines_43669 = (object)*(((s1_ptr)_2)->base + _f_43666);
        Ref(_these_routines_43669);
        // SubProg DeclareRoutineList pc: 34 op: SEQUENCE_CHECK (97)
        // SubProg DeclareRoutineList pc: 36 op: STARTLINE (58)

        /** c_decl.e:1076			for r = 1 to length( these_routines ) do*/
        // SubProg DeclareRoutineList pc: 38 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_43669)){
                _22947 = SEQ_PTR(_these_routines_43669)->length;
        }
        else {
            _22947 = 1;
        }
        // SubProg DeclareRoutineList pc: 41 op: FOR_I (125)
        {
            object _r_43673;
            _r_43673 = 1;
L3: // addr: 48 pc: 41 sub: 43656 op: 125
            if (_r_43673 > _22947){
                goto L4; // [41] 89
            }
            // SubProg DeclareRoutineList pc: 48 op: STARTLINE (58)

            /** c_decl.e:1077				s = these_routines[r]*/
            // SubProg DeclareRoutineList pc: 50 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_43669);
            _s_43659 = (object)*(((s1_ptr)_2)->base + _r_43673);
            if (!IS_ATOM_INT(_s_43659)){
                _s_43659 = (object)DBL_PTR(_s_43659)->dbl;
            }
            // SubProg DeclareRoutineList pc: 56 op: STARTLINE (58)

            /** c_decl.e:1078				if SymTab[s][S_USAGE] != U_DELETED then*/
            // SubProg DeclareRoutineList pc: 58 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 60 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _22949 = (object)*(((s1_ptr)_2)->base + _s_43659);
            // SubProg DeclareRoutineList pc: 64 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 66 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_22949);
            _22950 = (object)*(((s1_ptr)_2)->base + 5);
            _22949 = NOVALUE;
            // SubProg DeclareRoutineList pc: 70 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 72 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _22950, 99)){
                _22950 = NOVALUE;
                goto L5; // [72] 82
            }
            _22950 = NOVALUE;
            // SubProg DeclareRoutineList pc: 76 op: STARTLINE (58)

            /** c_decl.e:1080					declare_prototype( s )*/
            // SubProg DeclareRoutineList pc: 78 op: PROC (27)
            _58declare_prototype(_s_43659);
            // SubProg DeclareRoutineList pc: 81 op: NOP1 (159)
L5: // addr: 82 pc: 81 sub: 43656 op: 159
            // SubProg DeclareRoutineList pc: 82 op: STARTLINE (58)

            /** c_decl.e:1083			end for*/
            // SubProg DeclareRoutineList pc: 84 op: ENDFOR_INT_UP1 (54)
            _r_43673 = _r_43673 + 1;
            goto L3; // [84] 48
L4: // addr: 89 pc: 84 sub: 43656 op: 54
            ;
        }
        // SubProg DeclareRoutineList pc: 89 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var these_routines_43669
        DeRef(_these_routines_43669);
        _these_routines_43669 = NOVALUE;
        // SubProg DeclareRoutineList pc: 91 op: STARTLINE (58)

        /** c_decl.e:1084		end for*/
        // SubProg DeclareRoutineList pc: 93 op: ENDFOR_INT_UP1 (54)
        _f_43666 = _f_43666 + 1;
        goto L1; // [93] 26
L2: // addr: 98 pc: 93 sub: 43656 op: 54
        ;
    }
    // SubProg DeclareRoutineList pc: 98 op: STARTLINE (58)

    /** c_decl.e:1085		c_puts("\n")*/
    // SubProg DeclareRoutineList pc: 100 op: PROC (27)
    RefDS(_22128);
    _55c_puts(_22128);
    // SubProg DeclareRoutineList pc: 103 op: STARTLINE (58)

    /** c_decl.e:1088		seq_num = 0*/
    // SubProg DeclareRoutineList pc: 105 op: ASSIGN_I (113)
    _seq_num_43661 = 0;
    // SubProg DeclareRoutineList pc: 108 op: STARTLINE (58)

    /** c_decl.e:1089		first = TRUE*/
    // SubProg DeclareRoutineList pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 112 op: ASSIGN (18)
    _first_43660 = _13TRUE_452;
    // SubProg DeclareRoutineList pc: 115 op: INTEGER_CHECK (96)
    // SubProg DeclareRoutineList pc: 117 op: STARTLINE (58)

    /** c_decl.e:1090		c_puts("struct routine_list _00[] = {\n")*/
    // SubProg DeclareRoutineList pc: 119 op: PROC (27)
    RefDS(_22952);
    _55c_puts(_22952);
    // SubProg DeclareRoutineList pc: 122 op: STARTLINE (58)

    /** c_decl.e:1092		for f = 1 to length( file_routines ) do*/
    // SubProg DeclareRoutineList pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_58file_routines_44246)){
            _22953 = SEQ_PTR(_58file_routines_44246)->length;
    }
    else {
        _22953 = 1;
    }
    // SubProg DeclareRoutineList pc: 129 op: FOR_I (125)
    {
        object _f_43688;
        _f_43688 = 1;
L6: // addr: 136 pc: 129 sub: 43656 op: 125
        if (_f_43688 > _22953){
            goto L7; // [129] 222
        }
        // SubProg DeclareRoutineList pc: 136 op: STARTLINE (58)

        /** c_decl.e:1093			sequence these_routines = file_routines[f]*/
        // SubProg DeclareRoutineList pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg DeclareRoutineList pc: 140 op: RHS_SUBS_CHECK (92)
        DeRef(_these_routines_43691);
        _2 = (object)SEQ_PTR(_58file_routines_44246);
        _these_routines_43691 = (object)*(((s1_ptr)_2)->base + _f_43688);
        Ref(_these_routines_43691);
        // SubProg DeclareRoutineList pc: 144 op: SEQUENCE_CHECK (97)
        // SubProg DeclareRoutineList pc: 146 op: STARTLINE (58)

        /** c_decl.e:1094			for r = 1 to length( these_routines ) do*/
        // SubProg DeclareRoutineList pc: 148 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_43691)){
                _22955 = SEQ_PTR(_these_routines_43691)->length;
        }
        else {
            _22955 = 1;
        }
        // SubProg DeclareRoutineList pc: 151 op: FOR_I (125)
        {
            object _r_43695;
            _r_43695 = 1;
L8: // addr: 158 pc: 151 sub: 43656 op: 125
            if (_r_43695 > _22955){
                goto L9; // [151] 213
            }
            // SubProg DeclareRoutineList pc: 158 op: STARTLINE (58)

            /** c_decl.e:1095				s = these_routines[r]*/
            // SubProg DeclareRoutineList pc: 160 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_43691);
            _s_43659 = (object)*(((s1_ptr)_2)->base + _r_43695);
            if (!IS_ATOM_INT(_s_43659)){
                _s_43659 = (object)DBL_PTR(_s_43659)->dbl;
            }
            // SubProg DeclareRoutineList pc: 166 op: STARTLINE (58)

            /** c_decl.e:1096				if SymTab[s][S_RI_TARGET] then*/
            // SubProg DeclareRoutineList pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 170 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _22957 = (object)*(((s1_ptr)_2)->base + _s_43659);
            // SubProg DeclareRoutineList pc: 174 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 176 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_22957);
            _22958 = (object)*(((s1_ptr)_2)->base + 53);
            _22957 = NOVALUE;
            // SubProg DeclareRoutineList pc: 180 op: IF (20)
            if (_22958 == 0) {
                _22958 = NOVALUE;
                goto LA; // [180] 200
            }
            else {
                if (!IS_ATOM_INT(_22958) && DBL_PTR(_22958)->dbl == 0.0){
                    _22958 = NOVALUE;
                    goto LA; // [180] 200
                }
                _22958 = NOVALUE;
            }
            _22958 = NOVALUE;
            // SubProg DeclareRoutineList pc: 183 op: STARTLINE (58)

            /** c_decl.e:1098					add_to_routine_list( s, seq_num, first )*/
            // SubProg DeclareRoutineList pc: 185 op: PROC (27)
            _58add_to_routine_list(_s_43659, _seq_num_43661, _first_43660);
            // SubProg DeclareRoutineList pc: 190 op: STARTLINE (58)

            /** c_decl.e:1099					first = FALSE*/
            // SubProg DeclareRoutineList pc: 192 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 194 op: ASSIGN (18)
            _first_43660 = _13FALSE_450;
            // SubProg DeclareRoutineList pc: 197 op: INTEGER_CHECK (96)
            // SubProg DeclareRoutineList pc: 199 op: NOP1 (159)
LA: // addr: 200 pc: 199 sub: 43656 op: 159
            // SubProg DeclareRoutineList pc: 200 op: STARTLINE (58)

            /** c_decl.e:1102				seq_num += 1*/
            // SubProg DeclareRoutineList pc: 202 op: PLUS1_I (117)
            _seq_num_43661 = _seq_num_43661 + 1;
            // SubProg DeclareRoutineList pc: 206 op: STARTLINE (58)

            /** c_decl.e:1103			end for*/
            // SubProg DeclareRoutineList pc: 208 op: ENDFOR_INT_UP1 (54)
            _r_43695 = _r_43695 + 1;
            goto L8; // [208] 158
L9: // addr: 213 pc: 208 sub: 43656 op: 54
            ;
        }
        // SubProg DeclareRoutineList pc: 213 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var these_routines_43691
        DeRef(_these_routines_43691);
        _these_routines_43691 = NOVALUE;
        // SubProg DeclareRoutineList pc: 215 op: STARTLINE (58)

        /** c_decl.e:1104		end for*/
        // SubProg DeclareRoutineList pc: 217 op: ENDFOR_INT_UP1 (54)
        _f_43688 = _f_43688 + 1;
        goto L6; // [217] 136
L7: // addr: 222 pc: 217 sub: 43656 op: 54
        ;
    }
    // SubProg DeclareRoutineList pc: 222 op: STARTLINE (58)

    /** c_decl.e:1105		if not first then*/
    // SubProg DeclareRoutineList pc: 224 op: NOT_IFW (108)
    if (_first_43660 != 0)
    goto LB; // [224] 233
    // SubProg DeclareRoutineList pc: 227 op: STARTLINE (58)

    /** c_decl.e:1106			c_puts(",\n")*/
    // SubProg DeclareRoutineList pc: 229 op: PROC (27)
    RefDS(_22898);
    _55c_puts(_22898);
    // SubProg DeclareRoutineList pc: 232 op: NOP1 (159)
LB: // addr: 233 pc: 232 sub: 43656 op: 159
    // SubProg DeclareRoutineList pc: 233 op: STARTLINE (58)

    /** c_decl.e:1108		c_puts("  {\"\", 0, 999999999, 0, 0, 0, 0}\n};\n\n")  -- end marker*/
    // SubProg DeclareRoutineList pc: 235 op: PROC (27)
    RefDS(_22961);
    _55c_puts(_22961);
    // SubProg DeclareRoutineList pc: 238 op: STARTLINE (58)

    /** c_decl.e:1110		c_hputs("extern char ** _02;\n")*/
    // SubProg DeclareRoutineList pc: 240 op: PROC (27)
    RefDS(_22962);
    _55c_hputs(_22962);
    // SubProg DeclareRoutineList pc: 243 op: STARTLINE (58)

    /** c_decl.e:1111		c_puts("char ** _02;\n")*/
    // SubProg DeclareRoutineList pc: 245 op: PROC (27)
    RefDS(_22963);
    _55c_puts(_22963);
    // SubProg DeclareRoutineList pc: 248 op: STARTLINE (58)

    /** c_decl.e:1113		c_hputs("extern object _0switches;\n")*/
    // SubProg DeclareRoutineList pc: 250 op: PROC (27)
    RefDS(_22964);
    _55c_hputs(_22964);
    // SubProg DeclareRoutineList pc: 253 op: STARTLINE (58)

    /** c_decl.e:1114		c_puts("object _0switches;\n")*/
    // SubProg DeclareRoutineList pc: 255 op: PROC (27)
    RefDS(_22965);
    _55c_puts(_22965);
    // SubProg DeclareRoutineList pc: 258 op: STARTLINE (58)

    /** c_decl.e:1115	end procedure*/
    // SubProg DeclareRoutineList pc: 260 op: RETURNP (29)

// Exiting block BLOCK: DeclareRoutineList

// block var s_43659

// block var first_43660

// block var seq_num_43661
    return;
    // SubProg DeclareRoutineList pc: 263 op: BADRETURNF (43)
    ;
}


void _58DeclareNameSpaceList()
{
    object _s_43721 = NOVALUE;
    object _first_43722 = NOVALUE;
    object _seq_num_43723 = NOVALUE;
// skipping _22987  name type: 0
// skipping _22986  name type: 0
    object _22985 = NOVALUE; // 43774 22985
// skipping _22984  name type: 0
    object _22983 = NOVALUE; // 43770 22983
    object _22982 = NOVALUE; // 43768 22982
    object _22981 = NOVALUE; // 43764 22981
    object _22980 = NOVALUE; // 43762 22980
    object _22978 = NOVALUE; // 43758 22978
    object _22977 = NOVALUE; // 43756 22977
// skipping _22976  name type: 0
// skipping _22975  name type: 0
    object _22974 = NOVALUE; // 43746 22974
    object _22973 = NOVALUE; // 43744 22973
    object _22972 = NOVALUE; // 43741 22972
    object _22971 = NOVALUE; // 43739 22971
    object _22970 = NOVALUE; // 43737 22970
// skipping _22969  name type: 0
    object _22968 = NOVALUE; // 43731 22968
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareNameSpaceList pc: 1 op: STARTLINE (58)

    /** c_decl.e:1121		integer first, seq_num*/
    // SubProg DeclareNameSpaceList pc: 3 op: STARTLINE (58)

    /** c_decl.e:1123		c_hputs("extern struct ns_list _01[];\n")*/
    // SubProg DeclareNameSpaceList pc: 5 op: PROC (27)
    RefDS(_22966);
    _55c_hputs(_22966);
    // SubProg DeclareNameSpaceList pc: 8 op: STARTLINE (58)

    /** c_decl.e:1124		c_puts("struct ns_list _01[] = {\n")*/
    // SubProg DeclareNameSpaceList pc: 10 op: PROC (27)
    RefDS(_22967);
    _55c_puts(_22967);
    // SubProg DeclareNameSpaceList pc: 13 op: STARTLINE (58)

    /** c_decl.e:1126		seq_num = 0*/
    // SubProg DeclareNameSpaceList pc: 15 op: ASSIGN_I (113)
    _seq_num_43723 = 0;
    // SubProg DeclareNameSpaceList pc: 18 op: STARTLINE (58)

    /** c_decl.e:1127		first = TRUE*/
    // SubProg DeclareNameSpaceList pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 22 op: ASSIGN (18)
    _first_43722 = _13TRUE_452;
    // SubProg DeclareNameSpaceList pc: 25 op: INTEGER_CHECK (96)
    // SubProg DeclareNameSpaceList pc: 27 op: STARTLINE (58)

    /** c_decl.e:1129		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareNameSpaceList pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22968 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg DeclareNameSpaceList pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22968);
    _s_43721 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43721)){
        _s_43721 = (object)DBL_PTR(_s_43721)->dbl;
    }
    _22968 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 45 op: STARTLINE (58)

    /** c_decl.e:1130		while s do*/
    // SubProg DeclareNameSpaceList pc: 47 op: NOP2 (110)
    // SubProg DeclareNameSpaceList pc: 49 op: NOPWHILE (158)
L1: // addr: 50 pc: 49 sub: 43718 op: 158
    // SubProg DeclareNameSpaceList pc: 50 op: WHILE (47)
    if (_s_43721 == 0)
    {
        goto L2; // [50] 215
    }
    else{
    }
    // SubProg DeclareNameSpaceList pc: 53 op: STARTLINE (58)

    /** c_decl.e:1131			if find(SymTab[s][S_TOKEN], NAMED_TOKS) then*/
    // SubProg DeclareNameSpaceList pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22970 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22970);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22971 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22971 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _22970 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 69 op: FIND_FROM (176)
    _22972 = find_from(_22971, _38NAMED_TOKS_16046, 1);
    _22971 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 74 op: IF (20)
    if (_22972 == 0)
    {
        _22972 = NOVALUE;
        goto L3; // [74] 194
    }
    else{
        _22972 = NOVALUE;
    }
    // SubProg DeclareNameSpaceList pc: 77 op: STARTLINE (58)

    /** c_decl.e:1132				if SymTab[s][S_TOKEN] = NAMESPACE then*/
    // SubProg DeclareNameSpaceList pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22973 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22973);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _22974 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _22974 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _22973 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 93 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22974, 523)){
        _22974 = NOVALUE;
        goto L4; // [93] 187
    }
    _22974 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 97 op: STARTLINE (58)

    /** c_decl.e:1133					if not first then*/
    // SubProg DeclareNameSpaceList pc: 99 op: NOT_IFW (108)
    if (_first_43722 != 0)
    goto L5; // [99] 108
    // SubProg DeclareNameSpaceList pc: 102 op: STARTLINE (58)

    /** c_decl.e:1134						c_puts(",\n")*/
    // SubProg DeclareNameSpaceList pc: 104 op: PROC (27)
    RefDS(_22898);
    _55c_puts(_22898);
    // SubProg DeclareNameSpaceList pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 43718 op: 159
    // SubProg DeclareNameSpaceList pc: 108 op: STARTLINE (58)

    /** c_decl.e:1136					first = FALSE*/
    // SubProg DeclareNameSpaceList pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 112 op: ASSIGN (18)
    _first_43722 = _13FALSE_450;
    // SubProg DeclareNameSpaceList pc: 115 op: INTEGER_CHECK (96)
    // SubProg DeclareNameSpaceList pc: 117 op: STARTLINE (58)

    /** c_decl.e:1138					c_puts("  {\"")*/
    // SubProg DeclareNameSpaceList pc: 119 op: PROC (27)
    RefDS(_22899);
    _55c_puts(_22899);
    // SubProg DeclareNameSpaceList pc: 122 op: STARTLINE (58)

    /** c_decl.e:1139					c_puts(SymTab[s][S_NAME])*/
    // SubProg DeclareNameSpaceList pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22977 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22977);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _22978 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _22978 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _22977 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 136 op: PROC (27)
    Ref(_22978);
    _55c_puts(_22978);
    _22978 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 139 op: STARTLINE (58)

    /** c_decl.e:1140					c_printf("\", %d", SymTab[s][S_OBJ])*/
    // SubProg DeclareNameSpaceList pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 143 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22980 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 149 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22980);
    _22981 = (object)*(((s1_ptr)_2)->base + 1);
    _22980 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 153 op: PROC (27)
    RefDS(_22979);
    Ref(_22981);
    _55c_printf(_22979, _22981);
    _22981 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 157 op: STARTLINE (58)

    /** c_decl.e:1141					c_printf(", %d", seq_num)*/
    // SubProg DeclareNameSpaceList pc: 159 op: PROC (27)
    RefDS(_22908);
    _55c_printf(_22908, _seq_num_43723);
    // SubProg DeclareNameSpaceList pc: 163 op: STARTLINE (58)

    /** c_decl.e:1142					c_printf(", %d", SymTab[s][S_FILE_NO])*/
    // SubProg DeclareNameSpaceList pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 167 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22982 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 173 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22982);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22983 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22983 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _22982 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 177 op: PROC (27)
    RefDS(_22908);
    Ref(_22983);
    _55c_printf(_22908, _22983);
    _22983 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 181 op: STARTLINE (58)

    /** c_decl.e:1144					c_puts("}")*/
    // SubProg DeclareNameSpaceList pc: 183 op: PROC (27)
    RefDS(_22924);
    _55c_puts(_22924);
    // SubProg DeclareNameSpaceList pc: 186 op: NOP1 (159)
L4: // addr: 187 pc: 186 sub: 43718 op: 159
    // SubProg DeclareNameSpaceList pc: 187 op: STARTLINE (58)

    /** c_decl.e:1146				seq_num += 1*/
    // SubProg DeclareNameSpaceList pc: 189 op: PLUS1_I (117)
    _seq_num_43723 = _seq_num_43723 + 1;
    // SubProg DeclareNameSpaceList pc: 193 op: NOP1 (159)
L3: // addr: 194 pc: 193 sub: 43718 op: 159
    // SubProg DeclareNameSpaceList pc: 194 op: STARTLINE (58)

    /** c_decl.e:1148			s = SymTab[s][S_NEXT]*/
    // SubProg DeclareNameSpaceList pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 198 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _22985 = (object)*(((s1_ptr)_2)->base + _s_43721);
    // SubProg DeclareNameSpaceList pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 204 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22985);
    _s_43721 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43721)){
        _s_43721 = (object)DBL_PTR(_s_43721)->dbl;
    }
    _22985 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 210 op: STARTLINE (58)

    /** c_decl.e:1149		end while*/
    // SubProg DeclareNameSpaceList pc: 212 op: ENDWHILE (22)
    goto L1; // [212] 50
    // SubProg DeclareNameSpaceList pc: 214 op: NOP1 (159)
L2: // addr: 215 pc: 214 sub: 43718 op: 159
    // SubProg DeclareNameSpaceList pc: 215 op: STARTLINE (58)

    /** c_decl.e:1150		if not first then*/
    // SubProg DeclareNameSpaceList pc: 217 op: NOT_IFW (108)
    if (_first_43722 != 0)
    goto L6; // [217] 226
    // SubProg DeclareNameSpaceList pc: 220 op: STARTLINE (58)

    /** c_decl.e:1151			c_puts(",\n")*/
    // SubProg DeclareNameSpaceList pc: 222 op: PROC (27)
    RefDS(_22898);
    _55c_puts(_22898);
    // SubProg DeclareNameSpaceList pc: 225 op: NOP1 (159)
L6: // addr: 226 pc: 225 sub: 43718 op: 159
    // SubProg DeclareNameSpaceList pc: 226 op: STARTLINE (58)

    /** c_decl.e:1153		c_puts("  {\"\", 0, 999999999, 0}\n};\n\n")  -- end marker*/
    // SubProg DeclareNameSpaceList pc: 228 op: PROC (27)
    RefDS(_22988);
    _55c_puts(_22988);
    // SubProg DeclareNameSpaceList pc: 231 op: STARTLINE (58)

    /** c_decl.e:1154	end procedure*/
    // SubProg DeclareNameSpaceList pc: 233 op: RETURNP (29)

// Exiting block BLOCK: DeclareNameSpaceList

// block var s_43721

// block var first_43722

// block var seq_num_43723
    return;
    // SubProg DeclareNameSpaceList pc: 236 op: BADRETURNF (43)
    ;
}


object _58is_exported(object _s_43785)
{
    object _eentry_43786 = NOVALUE;
    object _scope_43789 = NOVALUE;
    object _23003 = NOVALUE; // 43817 23003
    object _23002 = NOVALUE; // 43815 23002
    object _23001 = NOVALUE; // 43814 23001
    object _23000 = NOVALUE; // 43812 23000
    object _22999 = NOVALUE; // 43810 22999
    object _22998 = NOVALUE; // 43809 22998
    object _22997 = NOVALUE; // 43806 22997
    object _22996 = NOVALUE; // 43805 22996
    object _22995 = NOVALUE; // 43801 22995
    object _22994 = NOVALUE; // 43800 22994
    object _22993 = NOVALUE; // 43799 22993
// skipping _22992  name type: 0
    object _22991 = NOVALUE; // 43794 22991
// skipping _22990  name type: 0
// skipping _22989  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_exported pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_43785)) {
        _1 = (object)(DBL_PTR(_s_43785)->dbl);
        DeRefDS(_s_43785);
        _s_43785 = _1;
    }
    // SubProg is_exported pc: 3 op: STARTLINE (58)

    /** c_decl.e:1159		sequence eentry = SymTab[s]*/
    // SubProg is_exported pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 7 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43786);
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _eentry_43786 = (object)*(((s1_ptr)_2)->base + _s_43785);
    Ref(_eentry_43786);
    // SubProg is_exported pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg is_exported pc: 13 op: STARTLINE (58)

    /** c_decl.e:1160		integer scope = eentry[S_SCOPE]*/
    // SubProg is_exported pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 17 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_eentry_43786);
    _scope_43789 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43789))
    _scope_43789 = (object)DBL_PTR(_scope_43789)->dbl;
    // SubProg is_exported pc: 21 op: STARTLINE (58)

    /** c_decl.e:1162		if eentry[S_MODE] = M_NORMAL then*/
    // SubProg is_exported pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43786);
    _22991 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg is_exported pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 31 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22991, 1)){
        _22991 = NOVALUE;
        goto L1; // [31] 125
    }
    _22991 = NOVALUE;
    // SubProg is_exported pc: 35 op: STARTLINE (58)

    /** c_decl.e:1163			if eentry[S_FILE_NO] = 1 and find(scope, { SC_EXPORT, SC_PUBLIC, SC_GLOBAL }) then*/
    // SubProg is_exported pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43786);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _22993 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _22993 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg is_exported pc: 43 op: EQUALS (3)
    if (IS_ATOM_INT(_22993)) {
        _22994 = (_22993 == 1);
    }
    else {
        _22994 = binary_op(EQUALS, _22993, 1);
    }
    _22993 = NOVALUE;
    // SubProg is_exported pc: 47 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22994)) {
        if (_22994 == 0) {
            goto L2; // [47] 79
        }
    }
    else {
        if (DBL_PTR(_22994)->dbl == 0.0) {
            goto L2; // [47] 79
        }
    }
    // SubProg is_exported pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 57 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 11;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 6;
    _22996 = MAKE_SEQ(_1);
    // SubProg is_exported pc: 63 op: FIND_FROM (176)
    _22997 = find_from(_scope_43789, _22996, 1);
    DeRefDS(_22996);
    _22996 = NOVALUE;
    // SubProg is_exported pc: 68 op: NOP1 (159)
    // SubProg is_exported pc: 69 op: IF (20)
    if (_22997 == 0)
    {
        _22997 = NOVALUE;
        goto L2; // [69] 79
    }
    else{
        _22997 = NOVALUE;
    }
    // SubProg is_exported pc: 72 op: STARTLINE (58)

    /** c_decl.e:1164				return 1*/
    // SubProg is_exported pc: 74 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43785

// block var eentry_43786
    DeRef(_eentry_43786);

// block var scope_43789
    DeRef(_22994);
    _22994 = NOVALUE;
    return 1;
    // SubProg is_exported pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 43782 op: 159
    // SubProg is_exported pc: 79 op: STARTLINE (58)

    /** c_decl.e:1167			if scope = SC_PUBLIC and*/
    // SubProg is_exported pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 83 op: EQUALS (3)
    _22998 = (_scope_43789 == 13);
    // SubProg is_exported pc: 87 op: SC1_AND_IF (146)
    if (_22998 == 0) {
        goto L3; // [87] 124
    }
    // SubProg is_exported pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _23000 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg is_exported pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 99 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43786);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _23001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _23001 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    // SubProg is_exported pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23000);
    if (!IS_ATOM_INT(_23001)){
        _23002 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23001)->dbl));
    }
    else{
        _23002 = (object)*(((s1_ptr)_2)->base + _23001);
    }
    _23000 = NOVALUE;
    // SubProg is_exported pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 109 op: AND_BITS (56)
    if (IS_ATOM_INT(_23002)) {
        {uintptr_t tu;
             tu = (uintptr_t)_23002 & (uintptr_t)4;
             _23003 = MAKE_UINT(tu);
        }
    }
    else {
        _23003 = binary_op(AND_BITS, _23002, 4);
    }
    _23002 = NOVALUE;
    // SubProg is_exported pc: 113 op: NOP1 (159)
    // SubProg is_exported pc: 114 op: IF (20)
    if (_23003 == 0) {
        DeRef(_23003);
        _23003 = NOVALUE;
        goto L3; // [114] 124
    }
    else {
        if (!IS_ATOM_INT(_23003) && DBL_PTR(_23003)->dbl == 0.0){
            DeRef(_23003);
            _23003 = NOVALUE;
            goto L3; // [114] 124
        }
        DeRef(_23003);
        _23003 = NOVALUE;
    }
    DeRef(_23003);
    _23003 = NOVALUE;
    // SubProg is_exported pc: 117 op: STARTLINE (58)

    /** c_decl.e:1170				return 1*/
    // SubProg is_exported pc: 119 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43785

// block var eentry_43786
    DeRef(_eentry_43786);

// block var scope_43789
    _23001 = NOVALUE;
    DeRef(_22994);
    _22994 = NOVALUE;
    DeRef(_22998);
    _22998 = NOVALUE;
    return 1;
    // SubProg is_exported pc: 123 op: NOP1 (159)
L3: // addr: 124 pc: 123 sub: 43782 op: 159
    // SubProg is_exported pc: 124 op: NOP1 (159)
L1: // addr: 125 pc: 124 sub: 43782 op: 159
    // SubProg is_exported pc: 125 op: STARTLINE (58)

    /** c_decl.e:1174		return 0*/
    // SubProg is_exported pc: 127 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43785

// block var eentry_43786
    DeRef(_eentry_43786);

// block var scope_43789
    _23001 = NOVALUE;
    DeRef(_22994);
    _22994 = NOVALUE;
    DeRef(_22998);
    _22998 = NOVALUE;
    return 0;
    // SubProg is_exported pc: 131 op: BADRETURNF (43)
    ;
}


void _58version()
{
    object _23037 = NOVALUE; // 43890 23037
    object _23036 = NOVALUE; // 43889 23036
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version pc: 1 op: STARTLINE (58)

    /** c_decl.e:1207		c_puts("// Euphoria To C version " & version_string() & "\n")*/
    // SubProg version pc: 3 op: PROC (27)
    _23036 = _33version_string(0);
    // SubProg version pc: 7 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _22128;
        concat_list[1] = _23036;
        concat_list[2] = _23035;
        Concat_N((object_ptr)&_23037, concat_list, 3);
    }
    DeRef(_23036);
    _23036 = NOVALUE;
    // SubProg version pc: 13 op: PROC (27)
    _55c_puts(_23037);
    _23037 = NOVALUE;
    // SubProg version pc: 16 op: STARTLINE (58)

    /** c_decl.e:1208	end procedure*/
    // SubProg version pc: 18 op: RETURNP (29)

// Exiting block BLOCK: version
    return;
    // SubProg version pc: 21 op: BADRETURNF (43)
    ;
}


void _58new_c_file(object _name_43893)
{
// skipping _23045  name type: 0
// skipping _23044  name type: 0
// skipping _23043  name type: 0
// skipping _23042  name type: 0
// skipping _23041  name type: 0
    object _23040 = NOVALUE; // 43903 23040
// skipping _23038  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_c_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg new_c_file pc: 3 op: STARTLINE (58)

    /** c_decl.e:1213		cfile_size = 0*/
    // SubProg new_c_file pc: 5 op: ASSIGN (18)
    _36cfile_size_16515 = 0;
    // SubProg new_c_file pc: 8 op: INTEGER_CHECK (96)
    // SubProg new_c_file pc: 10 op: STARTLINE (58)

    /** c_decl.e:1216		if LAST_PASS = FALSE then*/
    // SubProg new_c_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 16 op: EQUALS_IFW (104)
    if (_58LAST_PASS_42073 != _13FALSE_450)
    goto L1; // [16] 26
    // SubProg new_c_file pc: 20 op: STARTLINE (58)

    /** c_decl.e:1217			return*/
    // SubProg new_c_file pc: 22 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: new_c_file

// block var name_43893
    DeRefDS(_name_43893);
    return;
    // SubProg new_c_file pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 43891 op: 159
    // SubProg new_c_file pc: 26 op: STARTLINE (58)

    /** c_decl.e:1220		write_checksum( c_code )*/
    // SubProg new_c_file pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 30 op: PROC (27)
    _56write_checksum(_55c_code_46102);
    // SubProg new_c_file pc: 33 op: STARTLINE (58)

    /** c_decl.e:1221		close(c_code)*/
    // SubProg new_c_file pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 37 op: CLOSE (86)
    EClose(_55c_code_46102);
    // SubProg new_c_file pc: 39 op: STARTLINE (58)

    /** c_decl.e:1223		c_code = open(output_dir & name & ".c", "w")*/
    // SubProg new_c_file pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 43 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23039;
        concat_list[1] = _name_43893;
        concat_list[2] = _58output_dir_42100;
        Concat_N((object_ptr)&_23040, concat_list, 3);
    }
    // SubProg new_c_file pc: 49 op: OPEN (37)
    _55c_code_46102 = EOpen(_23040, _22069, 0);
    DeRefDS(_23040);
    _23040 = NOVALUE;
    // SubProg new_c_file pc: 54 op: INTEGER_CHECK (96)
    // SubProg new_c_file pc: 56 op: STARTLINE (58)

    /** c_decl.e:1224		if c_code = -1 then*/
    // SubProg new_c_file pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 60 op: EQUALS_IFW (104)
    if (_55c_code_46102 != -1)
    goto L2; // [60] 72
    // SubProg new_c_file pc: 64 op: STARTLINE (58)

    /** c_decl.e:1225			CompileErr(57)*/
    // SubProg new_c_file pc: 66 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(57, _21933, 0);
    // SubProg new_c_file pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 43891 op: 159
    // SubProg new_c_file pc: 72 op: STARTLINE (58)

    /** c_decl.e:1228		cfile_count += 1*/
    // SubProg new_c_file pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 76 op: PLUS (11)
    _36cfile_count_16514 = _36cfile_count_16514 + 1;
    // SubProg new_c_file pc: 82 op: STARTLINE (58)

    /** c_decl.e:1229		version()*/
    // SubProg new_c_file pc: 84 op: PROC (27)
    _58version();
    // SubProg new_c_file pc: 86 op: STARTLINE (58)

    /** c_decl.e:1231		c_puts("#include \"include/euphoria.h\"\n")*/
    // SubProg new_c_file pc: 88 op: PROC (27)
    RefDS(_22074);
    _55c_puts(_22074);
    // SubProg new_c_file pc: 91 op: STARTLINE (58)

    /** c_decl.e:1233		c_puts("#include \"main-.h\"\n\n")*/
    // SubProg new_c_file pc: 93 op: PROC (27)
    RefDS(_22075);
    _55c_puts(_22075);
    // SubProg new_c_file pc: 96 op: STARTLINE (58)

    /** c_decl.e:1235		if not TUNIX then*/
    // SubProg new_c_file pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 100 op: NOT_IFW (108)
    if (_41TUNIX_21214 != 0)
    goto L3; // [100] 112
    // SubProg new_c_file pc: 103 op: STARTLINE (58)

    /** c_decl.e:1236			name = lower(name)  -- for faster compare later*/
    // SubProg new_c_file pc: 105 op: PROC (27)
    RefDS(_name_43893);
    _0 = _name_43893;
    _name_43893 = _17lower(_name_43893);
    DeRefDS(_0);
    // SubProg new_c_file pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg new_c_file pc: 111 op: NOP1 (159)
L3: // addr: 112 pc: 111 sub: 43891 op: 159
    // SubProg new_c_file pc: 112 op: STARTLINE (58)

    /** c_decl.e:1238	end procedure*/
    // SubProg new_c_file pc: 114 op: RETURNP (29)

// Exiting block BLOCK: new_c_file

// block var name_43893
    DeRefDS(_name_43893);
    return;
    // SubProg new_c_file pc: 117 op: BADRETURNF (43)
    ;
}


object _58unique_c_name(object _name_43922)
{
    object _i_43923 = NOVALUE;
    object _compare_name_43924 = NOVALUE;
    object _next_fc_43925 = NOVALUE;
// skipping _23062  name type: 0
// skipping _23061  name type: 0
// skipping _23060  name type: 0
// skipping _23059  name type: 0
// skipping _23058  name type: 0
    object _23057 = NOVALUE; // 43943 23057
// skipping _23055  name type: 0
    object _23054 = NOVALUE; // 43939 23054
    object _23053 = NOVALUE; // 43937 23053
    object _23052 = NOVALUE; // 43936 23052
// skipping _23051  name type: 0
    object _23050 = NOVALUE; // 43933 23050
// skipping _23049  name type: 0
// skipping _23048  name type: 0
// skipping _23047  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg unique_c_name pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 3 op: STARTLINE (58)

    /** c_decl.e:1253		compare_name = name & ".c"*/
    // SubProg unique_c_name pc: 5 op: CONCAT (15)
    Concat((object_ptr)&_compare_name_43924, _name_43922, _23039);
    // SubProg unique_c_name pc: 9 op: STARTLINE (58)

    /** c_decl.e:1254		if not TUNIX then*/
    // SubProg unique_c_name pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 13 op: NOT_IFW (108)
    if (_41TUNIX_21214 != 0)
    goto L1; // [13] 25
    // SubProg unique_c_name pc: 16 op: STARTLINE (58)

    /** c_decl.e:1255			compare_name = lower(compare_name)*/
    // SubProg unique_c_name pc: 18 op: PROC (27)
    RefDS(_compare_name_43924);
    _0 = _compare_name_43924;
    _compare_name_43924 = _17lower(_compare_name_43924);
    DeRefDS(_0);
    // SubProg unique_c_name pc: 22 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 43920 op: 159
    // SubProg unique_c_name pc: 25 op: STARTLINE (58)

    /** c_decl.e:1258		next_fc = 1*/
    // SubProg unique_c_name pc: 27 op: ASSIGN_I (113)
    _next_fc_43925 = 1;
    // SubProg unique_c_name pc: 30 op: STARTLINE (58)

    /** c_decl.e:1259		i = 1*/
    // SubProg unique_c_name pc: 32 op: ASSIGN_I (113)
    _i_43923 = 1;
    // SubProg unique_c_name pc: 35 op: STARTLINE (58)

    /** c_decl.e:1261		while i <= length(generated_files) do*/
    // SubProg unique_c_name pc: 37 op: NOP2 (110)
    // SubProg unique_c_name pc: 39 op: NOPWHILE (158)
L2: // addr: 40 pc: 39 sub: 43920 op: 158
    // SubProg unique_c_name pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_58generated_files_42090)){
            _23050 = SEQ_PTR(_58generated_files_42090)->length;
    }
    else {
        _23050 = 1;
    }
    // SubProg unique_c_name pc: 45 op: LESSEQ_IFW_I (123)
    if (_i_43923 > _23050)
    goto L3; // [45] 139
    // SubProg unique_c_name pc: 49 op: STARTLINE (58)

    /** c_decl.e:1263			if equal(generated_files[i], compare_name) then*/
    // SubProg unique_c_name pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 53 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_58generated_files_42090);
    _23052 = (object)*(((s1_ptr)_2)->base + _i_43923);
    // SubProg unique_c_name pc: 57 op: EQUAL (153)
    if (_23052 == _compare_name_43924)
    _23053 = 1;
    else if (IS_ATOM_INT(_23052) && IS_ATOM_INT(_compare_name_43924))
    _23053 = 0;
    else
    _23053 = (compare(_23052, _compare_name_43924) == 0);
    _23052 = NOVALUE;
    // SubProg unique_c_name pc: 61 op: IF (20)
    if (_23053 == 0)
    {
        _23053 = NOVALUE;
        goto L4; // [61] 127
    }
    else{
        _23053 = NOVALUE;
    }
    // SubProg unique_c_name pc: 64 op: STARTLINE (58)

    /** c_decl.e:1265				if next_fc > length(file_chars) then*/
    // SubProg unique_c_name pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_58file_chars_43918)){
            _23054 = SEQ_PTR(_58file_chars_43918)->length;
    }
    else {
        _23054 = 1;
    }
    // SubProg unique_c_name pc: 69 op: GREATER_IFW_I (124)
    if (_next_fc_43925 <= _23054)
    goto L5; // [69] 81
    // SubProg unique_c_name pc: 73 op: STARTLINE (58)

    /** c_decl.e:1266					CompileErr(140)*/
    // SubProg unique_c_name pc: 75 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(140, _21933, 0);
    // SubProg unique_c_name pc: 80 op: NOP1 (159)
L5: // addr: 81 pc: 80 sub: 43920 op: 159
    // SubProg unique_c_name pc: 81 op: STARTLINE (58)

    /** c_decl.e:1269				name[1] = file_chars[next_fc]*/
    // SubProg unique_c_name pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_58file_chars_43918);
    _23057 = (object)*(((s1_ptr)_2)->base + _next_fc_43925);
    // SubProg unique_c_name pc: 87 op: ASSIGN_SUBS (16)
    Ref(_23057);
    _2 = (object)SEQ_PTR(_name_43922);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _name_43922 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23057;
    if( _1 != _23057 ){
        DeRef(_1);
    }
    _23057 = NOVALUE;
    // SubProg unique_c_name pc: 91 op: STARTLINE (58)

    /** c_decl.e:1270				compare_name = name & ".c"*/
    // SubProg unique_c_name pc: 93 op: CONCAT (15)
    Concat((object_ptr)&_compare_name_43924, _name_43922, _23039);
    // SubProg unique_c_name pc: 97 op: STARTLINE (58)

    /** c_decl.e:1271				if not TUNIX then*/
    // SubProg unique_c_name pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 101 op: NOT_IFW (108)
    if (_41TUNIX_21214 != 0)
    goto L6; // [101] 113
    // SubProg unique_c_name pc: 104 op: STARTLINE (58)

    /** c_decl.e:1272					compare_name = lower(compare_name)*/
    // SubProg unique_c_name pc: 106 op: PROC (27)
    RefDS(_compare_name_43924);
    _0 = _compare_name_43924;
    _compare_name_43924 = _17lower(_compare_name_43924);
    DeRefDS(_0);
    // SubProg unique_c_name pc: 110 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 112 op: NOP1 (159)
L6: // addr: 113 pc: 112 sub: 43920 op: 159
    // SubProg unique_c_name pc: 113 op: STARTLINE (58)

    /** c_decl.e:1275				next_fc += 1*/
    // SubProg unique_c_name pc: 115 op: PLUS1_I (117)
    _next_fc_43925 = _next_fc_43925 + 1;
    // SubProg unique_c_name pc: 119 op: STARTLINE (58)

    /** c_decl.e:1276				i = 1 -- start over and compare again*/
    // SubProg unique_c_name pc: 121 op: ASSIGN_I (113)
    _i_43923 = 1;
    // SubProg unique_c_name pc: 124 op: ELSE (23)
    goto L2; // [124] 40
    // SubProg unique_c_name pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 43920 op: 159
    // SubProg unique_c_name pc: 127 op: STARTLINE (58)

    /** c_decl.e:1279				i += 1*/
    // SubProg unique_c_name pc: 129 op: PLUS1_I (117)
    _i_43923 = _i_43923 + 1;
    // SubProg unique_c_name pc: 133 op: NOP1 (159)
    // SubProg unique_c_name pc: 134 op: STARTLINE (58)

    /** c_decl.e:1281		end while*/
    // SubProg unique_c_name pc: 136 op: ENDWHILE (22)
    goto L2; // [136] 40
    // SubProg unique_c_name pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 43920 op: 159
    // SubProg unique_c_name pc: 139 op: STARTLINE (58)

    /** c_decl.e:1283		return name*/
    // SubProg unique_c_name pc: 141 op: RETURNF (28)

// Exiting block BLOCK: unique_c_name

// block var i_43923

// block var compare_name_43924
    DeRef(_compare_name_43924);

// block var next_fc_43925
    return _name_43922;
    // SubProg unique_c_name pc: 145 op: BADRETURNF (43)
    ;
}


object _58is_file_newer(object _f1_43955, object _f2_43956)
{
    object _d1_43957 = NOVALUE;
    object _d2_43960 = NOVALUE;
    object _diff_2__tmp_at42_43971 = NOVALUE;
    object _diff_1__tmp_at42_43970 = NOVALUE;
    object _diff_inlined_diff_at_42_43969 = NOVALUE;
// skipping _23068  name type: 0
    object _23067 = NOVALUE; // 43966 23067
// skipping _23066  name type: 0
    object _23065 = NOVALUE; // 43964 23065
// skipping _23064  name type: 0
// skipping _23063  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_file_newer pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 5 op: STARTLINE (58)

    /** c_decl.e:1287		object d1 = file_timestamp(f1)*/
    // SubProg is_file_newer pc: 7 op: PROC (27)
    RefDS(_f1_43955);
    _0 = _d1_43957;
    _d1_43957 = _20file_timestamp(_f1_43955);
    DeRef(_0);
    // SubProg is_file_newer pc: 11 op: STARTLINE (58)

    /** c_decl.e:1288		object d2 = file_timestamp(f2)*/
    // SubProg is_file_newer pc: 13 op: PROC (27)
    RefDS(_f2_43956);
    _0 = _d2_43960;
    _d2_43960 = _20file_timestamp(_f2_43956);
    DeRef(_0);
    // SubProg is_file_newer pc: 17 op: STARTLINE (58)

    /** c_decl.e:1290		if atom(d1) or atom(d2) then return 1 end if*/
    // SubProg is_file_newer pc: 19 op: IS_AN_ATOM (67)
    _23065 = IS_ATOM(_d1_43957);
    // SubProg is_file_newer pc: 22 op: SC1_OR_IF (147)
    if (_23065 != 0) {
        goto L1; // [22] 34
    }
    // SubProg is_file_newer pc: 26 op: IS_AN_ATOM (67)
    _23067 = IS_ATOM(_d2_43960);
    // SubProg is_file_newer pc: 29 op: NOP1 (159)
    // SubProg is_file_newer pc: 30 op: IF (20)
    if (_23067 == 0)
    {
        _23067 = NOVALUE;
        goto L2; // [30] 39
    }
    else{
        _23067 = NOVALUE;
    }
    // SubProg is_file_newer pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 43953 op: 159
    // SubProg is_file_newer pc: 34 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_43955
    DeRefDS(_f1_43955);

// block var f2_43956
    DeRefDS(_f2_43956);

// block var d1_43957
    DeRef(_d1_43957);

// block var d2_43960
    DeRef(_d2_43960);
    return 1;
    // SubProg is_file_newer pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 43953 op: 159
    // SubProg is_file_newer pc: 39 op: STARTLINE (58)

    /** c_decl.e:1291		if datetime:diff(d1, d2) < 0 then*/
    // SubProg is_file_newer pc: 41 op: STARTLINE (58)

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    // SubProg is_file_newer pc: 43 op: PROC (27)
    Ref(_d2_43960);
    _0 = _diff_1__tmp_at42_43970;
    _diff_1__tmp_at42_43970 = _21datetimeToSeconds(_d2_43960);
    DeRef(_0);
    // SubProg is_file_newer pc: 47 op: PROC (27)
    Ref(_d1_43957);
    _0 = _diff_2__tmp_at42_43971;
    _diff_2__tmp_at42_43971 = _21datetimeToSeconds(_d1_43957);
    DeRef(_0);
    // SubProg is_file_newer pc: 51 op: MINUS (10)
    DeRef(_diff_inlined_diff_at_42_43969);
    if (IS_ATOM_INT(_diff_1__tmp_at42_43970) && IS_ATOM_INT(_diff_2__tmp_at42_43971)) {
        _diff_inlined_diff_at_42_43969 = _diff_1__tmp_at42_43970 - _diff_2__tmp_at42_43971;
        if ((object)((uintptr_t)_diff_inlined_diff_at_42_43969 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_42_43969 = NewDouble((eudouble)_diff_inlined_diff_at_42_43969);
        }
    }
    else {
        _diff_inlined_diff_at_42_43969 = binary_op(MINUS, _diff_1__tmp_at42_43970, _diff_2__tmp_at42_43971);
    }
    // SubProg is_file_newer pc: 55 op: NOP1 (159)
    // SubProg is_file_newer pc: 56 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from is_file_newer @ 42

// block var diff_1__tmp_at42_43970
    DeRef(_diff_1__tmp_at42_43970);
    _diff_1__tmp_at42_43970 = NOVALUE;

// block var diff_2__tmp_at42_43971
    DeRef(_diff_2__tmp_at42_43971);
    _diff_2__tmp_at42_43971 = NOVALUE;
    // SubProg is_file_newer pc: 58 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_42_43969, 0)){
        goto L3; // [58] 69
    }
    // SubProg is_file_newer pc: 62 op: STARTLINE (58)

    /** c_decl.e:1292			return 1*/
    // SubProg is_file_newer pc: 64 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_43955
    DeRefDS(_f1_43955);

// block var f2_43956
    DeRefDS(_f2_43956);

// block var d1_43957
    DeRef(_d1_43957);

// block var d2_43960
    DeRef(_d2_43960);
    return 1;
    // SubProg is_file_newer pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 43953 op: 159
    // SubProg is_file_newer pc: 69 op: STARTLINE (58)

    /** c_decl.e:1295		return 0*/
    // SubProg is_file_newer pc: 71 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_43955
    DeRefDS(_f1_43955);

// block var f2_43956
    DeRefDS(_f2_43956);

// block var d1_43957
    DeRef(_d1_43957);

// block var d2_43960
    DeRef(_d2_43960);
    return 0;
    // SubProg is_file_newer pc: 75 op: BADRETURNF (43)
    ;
}


void _58add_file(object _filename_43975, object _eu_filename_43976)
{
    object _obj_fname_43996 = NOVALUE;
    object _src_fname_43997 = NOVALUE;
// skipping _23093  name type: 0
// skipping _23092  name type: 0
    object _23091 = NOVALUE; // 44015 23091
    object _23090 = NOVALUE; // 44014 23090
// skipping _23089  name type: 0
// skipping _23088  name type: 0
// skipping _23087  name type: 0
// skipping _23086  name type: 0
// skipping _23084  name type: 0
// skipping _23082  name type: 0
// skipping _23081  name type: 0
// skipping _23080  name type: 0
// skipping _23079  name type: 0
// skipping _23078  name type: 0
    object _23077 = NOVALUE; // 43989 23077
    object _23076 = NOVALUE; // 43988 23076
// skipping _23074  name type: 0
    object _23073 = NOVALUE; // 43983 23073
    object _23072 = NOVALUE; // 43982 23072
    object _23071 = NOVALUE; // 43981 23071
    object _23070 = NOVALUE; // 43980 23070
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 5 op: STARTLINE (58)

    /** c_decl.e:1303		if equal("c", fileext(filename)) then*/
    // SubProg add_file pc: 7 op: PROC (27)
    RefDS(_filename_43975);
    _23070 = _20fileext(_filename_43975);
    // SubProg add_file pc: 11 op: EQUAL (153)
    if (_23069 == _23070)
    _23071 = 1;
    else if (IS_ATOM_INT(_23069) && IS_ATOM_INT(_23070))
    _23071 = 0;
    else
    _23071 = (compare(_23069, _23070) == 0);
    DeRef(_23070);
    _23070 = NOVALUE;
    // SubProg add_file pc: 15 op: IF (20)
    if (_23071 == 0)
    {
        _23071 = NOVALUE;
        goto L1; // [15] 35
    }
    else{
        _23071 = NOVALUE;
    }
    // SubProg add_file pc: 18 op: STARTLINE (58)

    /** c_decl.e:1304			filename = filename[1..$-2]*/
    // SubProg add_file pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_43975)){
            _23072 = SEQ_PTR(_filename_43975)->length;
    }
    else {
        _23072 = 1;
    }
    // SubProg add_file pc: 23 op: MINUS (10)
    _23073 = _23072 - 2;
    _23072 = NOVALUE;
    // SubProg add_file pc: 27 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_filename_43975;
    RHS_Slice(_filename_43975, 1, _23073);
    // SubProg add_file pc: 32 op: ELSE (23)
    goto L2; // [32] 82
    // SubProg add_file pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 43973 op: 159
    // SubProg add_file pc: 35 op: STARTLINE (58)

    /** c_decl.e:1305		elsif equal("h", fileext(filename)) then*/
    // SubProg add_file pc: 37 op: PROC (27)
    RefDS(_filename_43975);
    _23076 = _20fileext(_filename_43975);
    // SubProg add_file pc: 41 op: EQUAL (153)
    if (_23075 == _23076)
    _23077 = 1;
    else if (IS_ATOM_INT(_23075) && IS_ATOM_INT(_23076))
    _23077 = 0;
    else
    _23077 = (compare(_23075, _23076) == 0);
    DeRef(_23076);
    _23076 = NOVALUE;
    // SubProg add_file pc: 45 op: IF (20)
    if (_23077 == 0)
    {
        _23077 = NOVALUE;
        goto L3; // [45] 81
    }
    else{
        _23077 = NOVALUE;
    }
    // SubProg add_file pc: 48 op: STARTLINE (58)

    /** c_decl.e:1306			generated_files = append(generated_files, filename)*/
    // SubProg add_file pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 52 op: APPEND (35)
    RefDS(_filename_43975);
    Append(&_58generated_files_42090, _58generated_files_42090, _filename_43975);
    // SubProg add_file pc: 56 op: STARTLINE (58)

    /** c_decl.e:1307			if build_system_type = BUILD_DIRECT then*/
    // SubProg add_file pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 62 op: EQUALS_IFW (104)
    if (_56build_system_type_44889 != 3)
    goto L4; // [62] 75
    // SubProg add_file pc: 66 op: STARTLINE (58)

    /** c_decl.e:1308				outdated_files  = append(outdated_files, 0)*/
    // SubProg add_file pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 70 op: APPEND (35)
    Append(&_58outdated_files_42091, _58outdated_files_42091, 0);
    // SubProg add_file pc: 74 op: NOP1 (159)
L4: // addr: 75 pc: 74 sub: 43973 op: 159
    // SubProg add_file pc: 75 op: STARTLINE (58)

    /** c_decl.e:1311			return*/
    // SubProg add_file pc: 77 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: add_file

// block var filename_43975
    DeRefDS(_filename_43975);

// block var eu_filename_43976
    DeRefDS(_eu_filename_43976);

// block var obj_fname_43996
    DeRef(_obj_fname_43996);

// block var src_fname_43997
    DeRef(_src_fname_43997);
    DeRef(_23073);
    _23073 = NOVALUE;
    return;
    // SubProg add_file pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 43973 op: 159
    // SubProg add_file pc: 81 op: NOP1 (159)
L2: // addr: 82 pc: 81 sub: 43973 op: 159
    // SubProg add_file pc: 82 op: STARTLINE (58)

    /** c_decl.e:1314		sequence obj_fname = filename, src_fname = filename & ".c"*/
    // SubProg add_file pc: 84 op: ASSIGN (18)
    RefDS(_filename_43975);
    DeRef(_obj_fname_43996);
    _obj_fname_43996 = _filename_43975;
    // SubProg add_file pc: 87 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 89 op: CONCAT (15)
    Concat((object_ptr)&_src_fname_43997, _filename_43975, _23039);
    // SubProg add_file pc: 93 op: STARTLINE (58)

    /** c_decl.e:1316		if compiler_type = COMPILER_WATCOM then*/
    // SubProg add_file pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 99 op: EQUALS_IFW (104)
    if (_56compiler_type_44893 != 2)
    goto L5; // [99] 112
    // SubProg add_file pc: 103 op: STARTLINE (58)

    /** c_decl.e:1317			obj_fname &= ".obj"*/
    // SubProg add_file pc: 105 op: CONCAT (15)
    Concat((object_ptr)&_obj_fname_43996, _obj_fname_43996, _23083);
    // SubProg add_file pc: 109 op: ELSE (23)
    goto L6; // [109] 119
    // SubProg add_file pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 43973 op: 159
    // SubProg add_file pc: 112 op: STARTLINE (58)

    /** c_decl.e:1319			obj_fname &= ".o"*/
    // SubProg add_file pc: 114 op: CONCAT (15)
    Concat((object_ptr)&_obj_fname_43996, _obj_fname_43996, _23085);
    // SubProg add_file pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 43973 op: 159
    // SubProg add_file pc: 119 op: STARTLINE (58)

    /** c_decl.e:1322		generated_files = append(generated_files, src_fname)*/
    // SubProg add_file pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 123 op: APPEND (35)
    RefDS(_src_fname_43997);
    Append(&_58generated_files_42090, _58generated_files_42090, _src_fname_43997);
    // SubProg add_file pc: 127 op: STARTLINE (58)

    /** c_decl.e:1323		generated_files = append(generated_files, obj_fname)*/
    // SubProg add_file pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 131 op: APPEND (35)
    RefDS(_obj_fname_43996);
    Append(&_58generated_files_42090, _58generated_files_42090, _obj_fname_43996);
    // SubProg add_file pc: 135 op: STARTLINE (58)

    /** c_decl.e:1324		if build_system_type = BUILD_DIRECT then*/
    // SubProg add_file pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 141 op: EQUALS_IFW (104)
    if (_56build_system_type_44889 != 3)
    goto L7; // [141] 173
    // SubProg add_file pc: 145 op: STARTLINE (58)

    /** c_decl.e:1325			outdated_files  = append(outdated_files, is_file_newer(eu_filename, output_dir & src_fname))*/
    // SubProg add_file pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 151 op: CONCAT (15)
    Concat((object_ptr)&_23090, _58output_dir_42100, _src_fname_43997);
    // SubProg add_file pc: 155 op: PROC (27)
    RefDS(_eu_filename_43976);
    _23091 = _58is_file_newer(_eu_filename_43976, _23090);
    _23090 = NOVALUE;
    // SubProg add_file pc: 160 op: APPEND (35)
    Ref(_23091);
    Append(&_58outdated_files_42091, _58outdated_files_42091, _23091);
    DeRef(_23091);
    _23091 = NOVALUE;
    // SubProg add_file pc: 164 op: STARTLINE (58)

    /** c_decl.e:1326			outdated_files  = append(outdated_files, 0)*/
    // SubProg add_file pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 168 op: APPEND (35)
    Append(&_58outdated_files_42091, _58outdated_files_42091, 0);
    // SubProg add_file pc: 172 op: NOP1 (159)
L7: // addr: 173 pc: 172 sub: 43973 op: 159
    // SubProg add_file pc: 173 op: STARTLINE (58)

    /** c_decl.e:1328	end procedure*/
    // SubProg add_file pc: 175 op: RETURNP (29)

// Exiting block BLOCK: add_file

// block var filename_43975
    DeRefDS(_filename_43975);

// block var eu_filename_43976
    DeRefDS(_eu_filename_43976);

// block var obj_fname_43996
    DeRef(_obj_fname_43996);

// block var src_fname_43997
    DeRef(_src_fname_43997);
    DeRef(_23073);
    _23073 = NOVALUE;
    return;
    // SubProg add_file pc: 178 op: BADRETURNF (43)
    ;
}


object _58any_code(object _file_no_44020)
{
    object _these_routines_44022 = NOVALUE;
    object _s_44029 = NOVALUE;
    object _23107 = NOVALUE; // 44050 23107
    object _23106 = NOVALUE; // 44048 23106
    object _23105 = NOVALUE; // 44046 23105
    object _23104 = NOVALUE; // 44044 23104
    object _23103 = NOVALUE; // 44043 23103
    object _23102 = NOVALUE; // 44041 23102
    object _23101 = NOVALUE; // 44039 23101
    object _23100 = NOVALUE; // 44037 23100
    object _23099 = NOVALUE; // 44036 23099
    object _23098 = NOVALUE; // 44035 23098
    object _23097 = NOVALUE; // 44033 23097
// skipping _23096  name type: 0
    object _23095 = NOVALUE; // 44027 23095
// skipping _23094  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg any_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg any_code pc: 3 op: STARTLINE (58)

    /** c_decl.e:1334		check_file_routines()*/
    // SubProg any_code pc: 5 op: PROC (27)
    _58check_file_routines();
    // SubProg any_code pc: 7 op: STARTLINE (58)

    /** c_decl.e:1336		sequence these_routines = file_routines[file_no]*/
    // SubProg any_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg any_code pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_these_routines_44022);
    _2 = (object)SEQ_PTR(_58file_routines_44246);
    _these_routines_44022 = (object)*(((s1_ptr)_2)->base + _file_no_44020);
    Ref(_these_routines_44022);
    // SubProg any_code pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg any_code pc: 17 op: STARTLINE (58)

    /** c_decl.e:1337		for i = 1 to length( these_routines ) do*/
    // SubProg any_code pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_these_routines_44022)){
            _23095 = SEQ_PTR(_these_routines_44022)->length;
    }
    else {
        _23095 = 1;
    }
    // SubProg any_code pc: 22 op: FOR_I (125)
    {
        object _i_44026;
        _i_44026 = 1;
L1: // addr: 29 pc: 22 sub: 44018 op: 125
        if (_i_44026 > _23095){
            goto L2; // [22] 126
        }
        // SubProg any_code pc: 29 op: STARTLINE (58)

        /** c_decl.e:1338			symtab_index s = these_routines[i]*/
        // SubProg any_code pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_these_routines_44022);
        _s_44029 = (object)*(((s1_ptr)_2)->base + _i_44026);
        if (!IS_ATOM_INT(_s_44029)){
            _s_44029 = (object)DBL_PTR(_s_44029)->dbl;
        }
        // SubProg any_code pc: 37 op: STARTLINE (58)

        /** c_decl.e:1339			if SymTab[s][S_FILE_NO] = file_no and*/
        // SubProg any_code pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _23097 = (object)*(((s1_ptr)_2)->base + _s_44029);
        // SubProg any_code pc: 45 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 47 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23097);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _23098 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _23098 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _23097 = NOVALUE;
        // SubProg any_code pc: 51 op: EQUALS (3)
        if (IS_ATOM_INT(_23098)) {
            _23099 = (_23098 == _file_no_44020);
        }
        else {
            _23099 = binary_op(EQUALS, _23098, _file_no_44020);
        }
        _23098 = NOVALUE;
        // SubProg any_code pc: 55 op: SC1_AND (141)
        if (IS_ATOM_INT(_23099)) {
            if (_23099 == 0) {
                DeRef(_23100);
                _23100 = 0;
                goto L3; // [55] 81
            }
        }
        else {
            if (DBL_PTR(_23099)->dbl == 0.0) {
                DeRef(_23100);
                _23100 = 0;
                goto L3; // [55] 81
            }
        }
        // SubProg any_code pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 61 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _23101 = (object)*(((s1_ptr)_2)->base + _s_44029);
        // SubProg any_code pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23101);
        _23102 = (object)*(((s1_ptr)_2)->base + 5);
        _23101 = NOVALUE;
        // SubProg any_code pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 73 op: NOTEQ (4)
        if (IS_ATOM_INT(_23102)) {
            _23103 = (_23102 != 99);
        }
        else {
            _23103 = binary_op(NOTEQ, _23102, 99);
        }
        _23102 = NOVALUE;
        // SubProg any_code pc: 77 op: SC2_AND (142)
        DeRef(_23100);
        if (IS_ATOM_INT(_23103))
        _23100 = (_23103 != 0);
        else
        _23100 = DBL_PTR(_23103)->dbl != 0.0;
        // SubProg any_code pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 44018 op: 159
        // SubProg any_code pc: 81 op: SC1_AND_IF (146)
        if (_23100 == 0) {
            goto L4; // [81] 117
        }
        // SubProg any_code pc: 85 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 87 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _23105 = (object)*(((s1_ptr)_2)->base + _s_44029);
        // SubProg any_code pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23105);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _23106 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _23106 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _23105 = NOVALUE;
        // SubProg any_code pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 99 op: FIND_FROM (176)
        _23107 = find_from(_23106, _38RTN_TOKS_16044, 1);
        _23106 = NOVALUE;
        // SubProg any_code pc: 104 op: NOP1 (159)
        // SubProg any_code pc: 105 op: IF (20)
        if (_23107 == 0)
        {
            _23107 = NOVALUE;
            goto L4; // [105] 117
        }
        else{
            _23107 = NOVALUE;
        }
        // SubProg any_code pc: 108 op: STARTLINE (58)

        /** c_decl.e:1342				return TRUE -- found a non-deleted routine in this file*/
        // SubProg any_code pc: 110 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 112 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var s_44029

// Exiting block BLOCK: any_code

// block var file_no_44020

// block var these_routines_44022
        DeRef(_these_routines_44022);
        DeRef(_23099);
        _23099 = NOVALUE;
        DeRef(_23103);
        _23103 = NOVALUE;
        return _13TRUE_452;
        // SubProg any_code pc: 116 op: NOP1 (159)
L4: // addr: 117 pc: 116 sub: 44018 op: 159
        // SubProg any_code pc: 117 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var s_44029
        // SubProg any_code pc: 119 op: STARTLINE (58)

        /** c_decl.e:1344		end for*/
        // SubProg any_code pc: 121 op: ENDFOR_INT_UP1 (54)
        _i_44026 = _i_44026 + 1;
        goto L1; // [121] 29
L2: // addr: 126 pc: 121 sub: 44018 op: 54
        ;
    }
    // SubProg any_code pc: 126 op: STARTLINE (58)

    /** c_decl.e:1345		return FALSE*/
    // SubProg any_code pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg any_code pc: 130 op: RETURNF (28)

// Exiting block BLOCK: any_code

// block var file_no_44020

// block var these_routines_44022
    DeRef(_these_routines_44022);
    DeRef(_23099);
    _23099 = NOVALUE;
    DeRef(_23103);
    _23103 = NOVALUE;
    return _13FALSE_450;
    // SubProg any_code pc: 134 op: BADRETURNF (43)
    ;
}


void _58check_file_routines()
{
    object _s_44255 = NOVALUE;
// skipping _23270  name type: 0
    object _23269 = NOVALUE; // 44283 23269
    object _23268 = NOVALUE; // 44281 23268
    object _23267 = NOVALUE; // 44280 23267
    object _23266 = NOVALUE; // 44279 23266
    object _23265 = NOVALUE; // 44277 23265
    object _23264 = NOVALUE; // 44275 23264
    object _23263 = NOVALUE; // 44273 23263
    object _23262 = NOVALUE; // 44271 23262
    object _23261 = NOVALUE; // 44269 23261
    object _23260 = NOVALUE; // 44268 23260
    object _23259 = NOVALUE; // 44266 23259
    object _23258 = NOVALUE; // 44264 23258
// skipping _23257  name type: 0
    object _23256 = NOVALUE; // 44258 23256
// skipping _23255  name type: 0
    object _23254 = NOVALUE; // 44253 23254
// skipping _23253  name type: 0
    object _23252 = NOVALUE; // 44250 23252
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_file_routines pc: 1 op: STARTLINE (58)

    /** c_decl.e:1451		if not length( file_routines ) then*/
    // SubProg check_file_routines pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_58file_routines_44246)){
            _23252 = SEQ_PTR(_58file_routines_44246)->length;
    }
    else {
        _23252 = 1;
    }
    // SubProg check_file_routines pc: 8 op: NOT_IFW (108)
    if (_23252 != 0)
    goto L1; // [8] 146
    _23252 = NOVALUE;
    // SubProg check_file_routines pc: 11 op: STARTLINE (58)

    /** c_decl.e:1452			file_routines = repeat( {}, length( known_files ) )*/
    // SubProg check_file_routines pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _23254 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _23254 = 1;
    }
    // SubProg check_file_routines pc: 18 op: REPEAT (32)
    DeRefDS(_58file_routines_44246);
    _58file_routines_44246 = Repeat(_21933, _23254);
    _23254 = NOVALUE;
    // SubProg check_file_routines pc: 22 op: STARTLINE (58)

    /** c_decl.e:1453			integer s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg check_file_routines pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 28 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23256 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
    // SubProg check_file_routines pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 34 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23256);
    _s_44255 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44255)){
        _s_44255 = (object)DBL_PTR(_s_44255)->dbl;
    }
    _23256 = NOVALUE;
    // SubProg check_file_routines pc: 40 op: STARTLINE (58)

    /** c_decl.e:1454			while s do*/
    // SubProg check_file_routines pc: 42 op: NOP2 (110)
    // SubProg check_file_routines pc: 44 op: NOPWHILE (158)
L2: // addr: 45 pc: 44 sub: 44247 op: 158
    // SubProg check_file_routines pc: 45 op: WHILE (47)
    if (_s_44255 == 0)
    {
        goto L3; // [45] 145
    }
    else{
    }
    // SubProg check_file_routines pc: 48 op: STARTLINE (58)

    /** c_decl.e:1455				if SymTab[s][S_USAGE] != U_DELETED and*/
    // SubProg check_file_routines pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 52 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23258 = (object)*(((s1_ptr)_2)->base + _s_44255);
    // SubProg check_file_routines pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23258);
    _23259 = (object)*(((s1_ptr)_2)->base + 5);
    _23258 = NOVALUE;
    // SubProg check_file_routines pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 64 op: NOTEQ (4)
    if (IS_ATOM_INT(_23259)) {
        _23260 = (_23259 != 99);
    }
    else {
        _23260 = binary_op(NOTEQ, _23259, 99);
    }
    _23259 = NOVALUE;
    // SubProg check_file_routines pc: 68 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_23260)) {
        if (_23260 == 0) {
            goto L4; // [68] 124
        }
    }
    else {
        if (DBL_PTR(_23260)->dbl == 0.0) {
            goto L4; // [68] 124
        }
    }
    // SubProg check_file_routines pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 74 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23262 = (object)*(((s1_ptr)_2)->base + _s_44255);
    // SubProg check_file_routines pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23262);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _23263 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _23263 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _23262 = NOVALUE;
    // SubProg check_file_routines pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 86 op: FIND_FROM (176)
    _23264 = find_from(_23263, _38RTN_TOKS_16044, 1);
    _23263 = NOVALUE;
    // SubProg check_file_routines pc: 91 op: NOP1 (159)
    // SubProg check_file_routines pc: 92 op: IF (20)
    if (_23264 == 0)
    {
        _23264 = NOVALUE;
        goto L4; // [92] 124
    }
    else{
        _23264 = NOVALUE;
    }
    // SubProg check_file_routines pc: 95 op: STARTLINE (58)

    /** c_decl.e:1458					file_routines[SymTab[s][S_FILE_NO]] &= s*/
    // SubProg check_file_routines pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23265 = (object)*(((s1_ptr)_2)->base + _s_44255);
    // SubProg check_file_routines pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 107 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23265);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _23266 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _23266 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _23265 = NOVALUE;
    // SubProg check_file_routines pc: 111 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_58file_routines_44246);
    if (!IS_ATOM_INT(_23266)){
        _23267 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23266)->dbl));
    }
    else{
        _23267 = (object)*(((s1_ptr)_2)->base + _23266);
    }
    // SubProg check_file_routines pc: 115 op: CONCAT (15)
    if (IS_SEQUENCE(_23267) && IS_ATOM(_s_44255)) {
        Append(&_23268, _23267, _s_44255);
    }
    else if (IS_ATOM(_23267) && IS_SEQUENCE(_s_44255)) {
    }
    else {
        Concat((object_ptr)&_23268, _23267, _s_44255);
        _23267 = NOVALUE;
    }
    _23267 = NOVALUE;
    // SubProg check_file_routines pc: 119 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_58file_routines_44246);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _58file_routines_44246 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_23266))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_23266)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _23266);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23268;
    if( _1 != _23268 ){
        DeRef(_1);
    }
    _23268 = NOVALUE;
    // SubProg check_file_routines pc: 123 op: NOP1 (159)
L4: // addr: 124 pc: 123 sub: 44247 op: 159
    // SubProg check_file_routines pc: 124 op: STARTLINE (58)

    /** c_decl.e:1460				s = SymTab[s][S_NEXT]*/
    // SubProg check_file_routines pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _23269 = (object)*(((s1_ptr)_2)->base + _s_44255);
    // SubProg check_file_routines pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 134 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23269);
    _s_44255 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44255)){
        _s_44255 = (object)DBL_PTR(_s_44255)->dbl;
    }
    _23269 = NOVALUE;
    // SubProg check_file_routines pc: 140 op: STARTLINE (58)

    /** c_decl.e:1461			end while*/
    // SubProg check_file_routines pc: 142 op: ENDWHILE (22)
    goto L2; // [142] 45
    // SubProg check_file_routines pc: 144 op: NOP1 (159)
L3: // addr: 145 pc: 144 sub: 44247 op: 159
    // SubProg check_file_routines pc: 145 op: NOP1 (159)
L1: // addr: 146 pc: 145 sub: 44247 op: 159
    // SubProg check_file_routines pc: 146 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_44255
    // SubProg check_file_routines pc: 148 op: STARTLINE (58)

    /** c_decl.e:1464	end procedure*/
    // SubProg check_file_routines pc: 150 op: RETURNP (29)

// Exiting block BLOCK: check_file_routines
    DeRef(_23260);
    _23260 = NOVALUE;
    _23266 = NOVALUE;
    return;
    // SubProg check_file_routines pc: 153 op: BADRETURNF (43)
    ;
}


void _58GenerateUserRoutines()
{
    object _s_44289 = NOVALUE;
    object _sp_44290 = NOVALUE;
    object _next_c_char_44291 = NOVALUE;
    object _q_44292 = NOVALUE;
    object _temps_44293 = NOVALUE;
    object _buff_44294 = NOVALUE;
    object _base_name_44295 = NOVALUE;
    object _long_c_file_44296 = NOVALUE;
    object _c_file_44297 = NOVALUE;
    object _these_routines_44364 = NOVALUE;
    object _ret_type_44422 = NOVALUE;
    object _s_scope_44431 = NOVALUE;
    object _s_file_44434 = NOVALUE;
    object _scope_44511 = NOVALUE;
    object _names_44545 = NOVALUE;
    object _name_44555 = NOVALUE;
    object _23497 = NOVALUE; // 44798 23497
    object _23495 = NOVALUE; // 44796 23495
    object _23494 = NOVALUE; // 44794 23494
// skipping _23492  name type: 0
    object _23491 = NOVALUE; // 44787 23491
// skipping _23490  name type: 0
    object _23489 = NOVALUE; // 44783 23489
    object _23488 = NOVALUE; // 44781 23488
    object _23487 = NOVALUE; // 44778 23487
    object _23486 = NOVALUE; // 44776 23486
    object _23485 = NOVALUE; // 44772 23485
    object _23484 = NOVALUE; // 44770 23484
// skipping _23483  name type: 0
    object _23482 = NOVALUE; // 44764 23482
// skipping _23479  name type: 0
    object _23478 = NOVALUE; // 44757 23478
// skipping _23477  name type: 0
    object _23476 = NOVALUE; // 44753 23476
    object _23475 = NOVALUE; // 44751 23475
    object _23474 = NOVALUE; // 44748 23474
    object _23473 = NOVALUE; // 44746 23473
    object _23471 = NOVALUE; // 44741 23471
    object _23470 = NOVALUE; // 44739 23470
// skipping _23469  name type: 0
    object _23468 = NOVALUE; // 44733 23468
    object _23467 = NOVALUE; // 44731 23467
    object _23465 = NOVALUE; // 44729 23465
    object _23464 = NOVALUE; // 44727 23464
    object _23463 = NOVALUE; // 44722 23463
    object _23462 = NOVALUE; // 44721 23462
    object _23461 = NOVALUE; // 44720 23461
    object _23459 = NOVALUE; // 44715 23459
// skipping _23458  name type: 0
    object _23457 = NOVALUE; // 44711 23457
    object _23456 = NOVALUE; // 44707 23456
    object _23455 = NOVALUE; // 44705 23455
    object _23454 = NOVALUE; // 44702 23454
    object _23453 = NOVALUE; // 44700 23453
    object _23452 = NOVALUE; // 44697 23452
    object _23451 = NOVALUE; // 44695 23451
// skipping _23450  name type: 0
    object _23449 = NOVALUE; // 44691 23449
    object _23448 = NOVALUE; // 44689 23448
    object _23447 = NOVALUE; // 44684 23447
    object _23446 = NOVALUE; // 44682 23446
    object _23445 = NOVALUE; // 44680 23445
    object _23444 = NOVALUE; // 44678 23444
    object _23443 = NOVALUE; // 44674 23443
    object _23442 = NOVALUE; // 44672 23442
// skipping _23441  name type: 0
    object _23440 = NOVALUE; // 44659 23440
    object _23439 = NOVALUE; // 44657 23439
// skipping _23438  name type: 0
    object _23437 = NOVALUE; // 44652 23437
    object _23436 = NOVALUE; // 44650 23436
    object _23435 = NOVALUE; // 44647 23435
    object _23434 = NOVALUE; // 44645 23434
    object _23433 = NOVALUE; // 44642 23433
    object _23432 = NOVALUE; // 44640 23432
    object _23431 = NOVALUE; // 44638 23431
    object _23430 = NOVALUE; // 44636 23430
// skipping _23429  name type: 0
    object _23428 = NOVALUE; // 44630 23428
    object _23427 = NOVALUE; // 44628 23427
// skipping _23426  name type: 0
    object _23425 = NOVALUE; // 44622 23425
    object _23424 = NOVALUE; // 44620 23424
    object _23423 = NOVALUE; // 44618 23423
// skipping _23422  name type: 0
    object _23421 = NOVALUE; // 44612 23421
    object _23416 = NOVALUE; // 44605 23416
    object _23415 = NOVALUE; // 44603 23415
// skipping _23414  name type: 0
    object _23413 = NOVALUE; // 44596 23413
// skipping _23412  name type: 0
    object _23411 = NOVALUE; // 44591 23411
// skipping _23409  name type: 0
// skipping _23407  name type: 0
    object _23405 = NOVALUE; // 44574 23405
    object _23404 = NOVALUE; // 44573 23404
    object _23403 = NOVALUE; // 44572 23403
    object _23402 = NOVALUE; // 44571 23402
    object _23401 = NOVALUE; // 44569 23401
    object _23400 = NOVALUE; // 44567 23400
    object _23399 = NOVALUE; // 44566 23399
    object _23398 = NOVALUE; // 44564 23398
// skipping _23397  name type: 0
    object _23396 = NOVALUE; // 44559 23396
    object _23395 = NOVALUE; // 44557 23395
// skipping _23394  name type: 0
    object _23393 = NOVALUE; // 44552 23393
    object _23392 = NOVALUE; // 44550 23392
// skipping _23391  name type: 0
// skipping _23390  name type: 0
    object _23389 = NOVALUE; // 44542 23389
// skipping _23388  name type: 0
    object _23387 = NOVALUE; // 44538 23387
    object _23386 = NOVALUE; // 44528 23386
    object _23385 = NOVALUE; // 44526 23385
// skipping _23382  name type: 0
    object _23381 = NOVALUE; // 44513 23381
// skipping _23379  name type: 0
    object _23378 = NOVALUE; // 44502 23378
// skipping _23376  name type: 0
    object _23375 = NOVALUE; // 44497 23375
    object _23374 = NOVALUE; // 44495 23374
    object _23373 = NOVALUE; // 44492 23373
    object _23372 = NOVALUE; // 44490 23372
    object _23370 = NOVALUE; // 44485 23370
    object _23369 = NOVALUE; // 44483 23369
// skipping _23368  name type: 0
    object _23367 = NOVALUE; // 44477 23367
    object _23366 = NOVALUE; // 44475 23366
    object _23365 = NOVALUE; // 44472 23365
    object _23363 = NOVALUE; // 44469 23363
// skipping _23361  name type: 0
    object _23360 = NOVALUE; // 44461 23360
    object _23359 = NOVALUE; // 44459 23359
    object _23358 = NOVALUE; // 44457 23358
    object _23357 = NOVALUE; // 44456 23357
    object _23356 = NOVALUE; // 44454 23356
    object _23355 = NOVALUE; // 44453 23355
    object _23354 = NOVALUE; // 44451 23354
    object _23353 = NOVALUE; // 44450 23353
    object _23352 = NOVALUE; // 44448 23352
    object _23351 = NOVALUE; // 44447 23351
    object _23350 = NOVALUE; // 44445 23350
    object _23349 = NOVALUE; // 44444 23349
    object _23348 = NOVALUE; // 44443 23348
    object _23347 = NOVALUE; // 44442 23347
    object _23346 = NOVALUE; // 44440 23346
// skipping _23345  name type: 0
    object _23344 = NOVALUE; // 44436 23344
// skipping _23343  name type: 0
// skipping _23342  name type: 0
    object _23341 = NOVALUE; // 44427 23341
    object _23340 = NOVALUE; // 44425 23340
// skipping _23339  name type: 0
    object _23338 = NOVALUE; // 44420 23338
// skipping _23337  name type: 0
// skipping _23336  name type: 0
    object _23335 = NOVALUE; // 44416 23335
    object _23334 = NOVALUE; // 44415 23334
// skipping _23333  name type: 0
// skipping _23331  name type: 0
    object _23330 = NOVALUE; // 44411 23330
    object _23329 = NOVALUE; // 44408 23329
// skipping _23328  name type: 0
    object _23327 = NOVALUE; // 44406 23327
// skipping _23326  name type: 0
// skipping _23324  name type: 0
    object _23323 = NOVALUE; // 44401 23323
    object _23322 = NOVALUE; // 44399 23322
    object _23321 = NOVALUE; // 44397 23321
    object _23320 = NOVALUE; // 44396 23320
    object _23319 = NOVALUE; // 44394 23319
    object _23318 = NOVALUE; // 44392 23318
    object _23317 = NOVALUE; // 44391 23317
    object _23316 = NOVALUE; // 44390 23316
    object _23315 = NOVALUE; // 44387 23315
    object _23314 = NOVALUE; // 44386 23314
    object _23313 = NOVALUE; // 44384 23313
    object _23312 = NOVALUE; // 44383 23312
    object _23311 = NOVALUE; // 44380 23311
    object _23310 = NOVALUE; // 44379 23310
// skipping _23309  name type: 0
    object _23308 = NOVALUE; // 44374 23308
    object _23307 = NOVALUE; // 44372 23307
// skipping _23306  name type: 0
    object _23305 = NOVALUE; // 44368 23305
// skipping _23304  name type: 0
// skipping _23303  name type: 0
    object _23302 = NOVALUE; // 44361 23302
// skipping _23301  name type: 0
    object _23299 = NOVALUE; // 44356 23299
// skipping _23298  name type: 0
// skipping _23297  name type: 0
    object _23296 = NOVALUE; // 44347 23296
// skipping _23295  name type: 0
// skipping _23294  name type: 0
    object _23293 = NOVALUE; // 44341 23293
    object _23292 = NOVALUE; // 44339 23292
    object _23291 = NOVALUE; // 44338 23291
    object _23288 = NOVALUE; // 44335 23288
// skipping _23287  name type: 0
// skipping _23286  name type: 0
    object _23285 = NOVALUE; // 44330 23285
// skipping _23284  name type: 0
    object _23283 = NOVALUE; // 44328 23283
// skipping _23282  name type: 0
// skipping _23281  name type: 0
// skipping _23280  name type: 0
    object _23279 = NOVALUE; // 44322 23279
    object _23278 = NOVALUE; // 44319 23278
// skipping _23277  name type: 0
    object _23276 = NOVALUE; // 44317 23276
    object _23275 = NOVALUE; // 44315 23275
// skipping _23273  name type: 0
// skipping _23272  name type: 0
// skipping _23271  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg GenerateUserRoutines pc: 1 op: STARTLINE (58)

    /** c_decl.e:1468		integer next_c_char, q, temps*/
    // SubProg GenerateUserRoutines pc: 3 op: STARTLINE (58)

    /** c_decl.e:1469		sequence buff, base_name, long_c_file, c_file*/
    // SubProg GenerateUserRoutines pc: 5 op: STARTLINE (58)

    /** c_decl.e:1471		if not silent then*/
    // SubProg GenerateUserRoutines pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 9 op: NOT_IFW (108)
    if (_36silent_16551 != 0)
    goto L1; // [9] 62
    // SubProg GenerateUserRoutines pc: 12 op: STARTLINE (58)

    /** c_decl.e:1472			if Pass = 1 then*/
    // SubProg GenerateUserRoutines pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 16 op: EQUALS_IFW_I (121)
    if (_58Pass_42075 != 1)
    goto L2; // [16] 29
    // SubProg GenerateUserRoutines pc: 20 op: STARTLINE (58)

    /** c_decl.e:1473				ShowMsg(1, 239,,0)*/
    // SubProg GenerateUserRoutines pc: 22 op: PROC (27)
    RefDS(_21933);
    _42ShowMsg(1, 239, _21933, 0);
    // SubProg GenerateUserRoutines pc: 28 op: NOP1 (159)
L2: // addr: 29 pc: 28 sub: 44286 op: 159
    // SubProg GenerateUserRoutines pc: 29 op: STARTLINE (58)

    /** c_decl.e:1476			if LAST_PASS = TRUE then*/
    // SubProg GenerateUserRoutines pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 35 op: EQUALS_IFW (104)
    if (_58LAST_PASS_42073 != _13TRUE_452)
    goto L3; // [35] 50
    // SubProg GenerateUserRoutines pc: 39 op: STARTLINE (58)

    /** c_decl.e:1477				ShowMsg(1, 240)*/
    // SubProg GenerateUserRoutines pc: 41 op: PROC (27)
    RefDS(_21933);
    _42ShowMsg(1, 240, _21933, 1);
    // SubProg GenerateUserRoutines pc: 47 op: ELSE (23)
    goto L4; // [47] 61
    // SubProg GenerateUserRoutines pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 44286 op: 159
    // SubProg GenerateUserRoutines pc: 50 op: STARTLINE (58)

    /** c_decl.e:1479				ShowMsg(1, 241, Pass, 0)*/
    // SubProg GenerateUserRoutines pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 54 op: PROC (27)
    _42ShowMsg(1, 241, _58Pass_42075, 0);
    // SubProg GenerateUserRoutines pc: 60 op: NOP1 (159)
L4: // addr: 61 pc: 60 sub: 44286 op: 159
    // SubProg GenerateUserRoutines pc: 61 op: NOP1 (159)
L1: // addr: 62 pc: 61 sub: 44286 op: 159
    // SubProg GenerateUserRoutines pc: 62 op: STARTLINE (58)

    /** c_decl.e:1483		check_file_routines()*/
    // SubProg GenerateUserRoutines pc: 64 op: PROC (27)
    _58check_file_routines();
    // SubProg GenerateUserRoutines pc: 66 op: STARTLINE (58)

    /** c_decl.e:1485		c_puts("// GenerateUserRoutines\n")*/
    // SubProg GenerateUserRoutines pc: 68 op: PROC (27)
    RefDS(_23274);
    _55c_puts(_23274);
    // SubProg GenerateUserRoutines pc: 71 op: STARTLINE (58)

    /** c_decl.e:1486		for file_no = 1 to length(known_files) do*/
    // SubProg GenerateUserRoutines pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 75 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _23275 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _23275 = 1;
    }
    // SubProg GenerateUserRoutines pc: 78 op: FOR_I (125)
    {
        object _file_no_44313;
        _file_no_44313 = 1;
L5: // addr: 85 pc: 78 sub: 44286 op: 125
        if (_file_no_44313 > _23275){
            goto L6; // [78] 2143
        }
        // SubProg GenerateUserRoutines pc: 85 op: STARTLINE (58)

        /** c_decl.e:1487			if file_no = 1 or any_code(file_no) then*/
        // SubProg GenerateUserRoutines pc: 87 op: EQUALS (3)
        _23276 = (_file_no_44313 == 1);
        // SubProg GenerateUserRoutines pc: 91 op: SC1_OR_IF (147)
        if (_23276 != 0) {
            goto L7; // [91] 104
        }
        // SubProg GenerateUserRoutines pc: 95 op: PROC (27)
        _23278 = _58any_code(_file_no_44313);
        // SubProg GenerateUserRoutines pc: 99 op: NOP1 (159)
        // SubProg GenerateUserRoutines pc: 100 op: IF (20)
        if (_23278 == 0) {
            DeRef(_23278);
            _23278 = NOVALUE;
            goto L8; // [100] 2134
        }
        else {
            if (!IS_ATOM_INT(_23278) && DBL_PTR(_23278)->dbl == 0.0){
                DeRef(_23278);
                _23278 = NOVALUE;
                goto L8; // [100] 2134
            }
            DeRef(_23278);
            _23278 = NOVALUE;
        }
        DeRef(_23278);
        _23278 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 103 op: NOP1 (159)
L7: // addr: 104 pc: 103 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 104 op: STARTLINE (58)

        /** c_decl.e:1490				next_c_char = 1*/
        // SubProg GenerateUserRoutines pc: 106 op: ASSIGN_I (113)
        _next_c_char_44291 = 1;
        // SubProg GenerateUserRoutines pc: 109 op: STARTLINE (58)

        /** c_decl.e:1491				base_name = name_ext(known_files[file_no])*/
        // SubProg GenerateUserRoutines pc: 111 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 113 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        _23279 = (object)*(((s1_ptr)_2)->base + _file_no_44313);
        // SubProg GenerateUserRoutines pc: 117 op: PROC (27)
        Ref(_23279);
        _0 = _base_name_44295;
        _base_name_44295 = _54name_ext(_23279);
        DeRef(_0);
        _23279 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 121 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 123 op: STARTLINE (58)

        /** c_decl.e:1492				c_file = base_name*/
        // SubProg GenerateUserRoutines pc: 125 op: ASSIGN (18)
        RefDS(_base_name_44295);
        DeRef(_c_file_44297);
        _c_file_44297 = _base_name_44295;
        // SubProg GenerateUserRoutines pc: 128 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 130 op: STARTLINE (58)

        /** c_decl.e:1494				q = length(c_file)*/
        // SubProg GenerateUserRoutines pc: 132 op: LENGTH (42)
        if (IS_SEQUENCE(_c_file_44297)){
                _q_44292 = SEQ_PTR(_c_file_44297)->length;
        }
        else {
            _q_44292 = 1;
        }
        // SubProg GenerateUserRoutines pc: 135 op: STARTLINE (58)

        /** c_decl.e:1495				while q >= 1 do*/
        // SubProg GenerateUserRoutines pc: 137 op: NOP2 (110)
        // SubProg GenerateUserRoutines pc: 139 op: NOPWHILE (158)
L9: // addr: 140 pc: 139 sub: 44286 op: 158
        // SubProg GenerateUserRoutines pc: 140 op: GREATEREQ_IFW_I (120)
        if (_q_44292 < 1)
        goto LA; // [140] 181
        // SubProg GenerateUserRoutines pc: 144 op: STARTLINE (58)

        /** c_decl.e:1496					if c_file[q] = '.' then*/
        // SubProg GenerateUserRoutines pc: 146 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_c_file_44297);
        _23283 = (object)*(((s1_ptr)_2)->base + _q_44292);
        // SubProg GenerateUserRoutines pc: 150 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23283, 46)){
            _23283 = NOVALUE;
            goto LB; // [150] 170
        }
        _23283 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 154 op: STARTLINE (58)

        /** c_decl.e:1497						c_file = c_file[1..q-1]*/
        // SubProg GenerateUserRoutines pc: 156 op: MINUS (10)
        _23285 = _q_44292 - 1;
        // SubProg GenerateUserRoutines pc: 160 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_c_file_44297;
        RHS_Slice(_c_file_44297, 1, _23285);
        // SubProg GenerateUserRoutines pc: 165 op: STARTLINE (58)

        /** c_decl.e:1498						exit*/
        // SubProg GenerateUserRoutines pc: 167 op: EXIT (61)
        goto LA; // [167] 181
        // SubProg GenerateUserRoutines pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 170 op: STARTLINE (58)

        /** c_decl.e:1500					q -= 1*/
        // SubProg GenerateUserRoutines pc: 172 op: MINUS_I (116)
        _q_44292 = _q_44292 - 1;
        // SubProg GenerateUserRoutines pc: 176 op: STARTLINE (58)

        /** c_decl.e:1501				end while*/
        // SubProg GenerateUserRoutines pc: 178 op: ENDWHILE (22)
        goto L9; // [178] 140
        // SubProg GenerateUserRoutines pc: 180 op: NOP1 (159)
LA: // addr: 181 pc: 180 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 181 op: STARTLINE (58)

        /** c_decl.e:1503				if find(lower(c_file), {"main-", "init-"})  then*/
        // SubProg GenerateUserRoutines pc: 183 op: PROC (27)
        RefDS(_c_file_44297);
        _23288 = _17lower(_c_file_44297);
        // SubProg GenerateUserRoutines pc: 187 op: RIGHT_BRACE_2 (85)
        RefDS(_23290);
        RefDS(_23289);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23289;
        ((intptr_t *)_2)[2] = _23290;
        _23291 = MAKE_SEQ(_1);
        // SubProg GenerateUserRoutines pc: 191 op: FIND_FROM (176)
        _23292 = find_from(_23288, _23291, 1);
        DeRef(_23288);
        _23288 = NOVALUE;
        DeRefDS(_23291);
        _23291 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 196 op: IF (20)
        if (_23292 == 0)
        {
            _23292 = NOVALUE;
            goto LC; // [196] 211
        }
        else{
            _23292 = NOVALUE;
        }
        // SubProg GenerateUserRoutines pc: 199 op: STARTLINE (58)

        /** c_decl.e:1504					CompileErr(12, {base_name})*/
        // SubProg GenerateUserRoutines pc: 201 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_base_name_44295);
        ((intptr_t*)_2)[1] = _base_name_44295;
        _23293 = MAKE_SEQ(_1);
        // SubProg GenerateUserRoutines pc: 205 op: PROC (27)
        _50CompileErr(12, _23293, 0);
        _23293 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 210 op: NOP1 (159)
LC: // addr: 211 pc: 210 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 211 op: STARTLINE (58)

        /** c_decl.e:1507				long_c_file = c_file*/
        // SubProg GenerateUserRoutines pc: 213 op: ASSIGN (18)
        RefDS(_c_file_44297);
        DeRef(_long_c_file_44296);
        _long_c_file_44296 = _c_file_44297;
        // SubProg GenerateUserRoutines pc: 216 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 218 op: STARTLINE (58)

        /** c_decl.e:1508				if LAST_PASS = TRUE then*/
        // SubProg GenerateUserRoutines pc: 220 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 222 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 224 op: EQUALS_IFW (104)
        if (_58LAST_PASS_42073 != _13TRUE_452)
        goto LD; // [224] 249
        // SubProg GenerateUserRoutines pc: 228 op: STARTLINE (58)

        /** c_decl.e:1509					c_file = unique_c_name(c_file)*/
        // SubProg GenerateUserRoutines pc: 230 op: PROC (27)
        RefDS(_c_file_44297);
        _0 = _c_file_44297;
        _c_file_44297 = _58unique_c_name(_c_file_44297);
        DeRefDS(_0);
        // SubProg GenerateUserRoutines pc: 234 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 236 op: STARTLINE (58)

        /** c_decl.e:1510					add_file(c_file, known_files[file_no])*/
        // SubProg GenerateUserRoutines pc: 238 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 240 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        _23296 = (object)*(((s1_ptr)_2)->base + _file_no_44313);
        // SubProg GenerateUserRoutines pc: 244 op: PROC (27)
        RefDS(_c_file_44297);
        Ref(_23296);
        _58add_file(_c_file_44297, _23296);
        _23296 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 248 op: NOP1 (159)
LD: // addr: 249 pc: 248 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 249 op: STARTLINE (58)

        /** c_decl.e:1513				if file_no = 1 then*/
        // SubProg GenerateUserRoutines pc: 251 op: EQUALS_IFW_I (121)
        if (_file_no_44313 != 1)
        goto LE; // [251] 314
        // SubProg GenerateUserRoutines pc: 255 op: STARTLINE (58)

        /** c_decl.e:1515					if LAST_PASS = TRUE then*/
        // SubProg GenerateUserRoutines pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 261 op: EQUALS_IFW (104)
        if (_58LAST_PASS_42073 != _13TRUE_452)
        goto LF; // [261] 306
        // SubProg GenerateUserRoutines pc: 265 op: STARTLINE (58)

        /** c_decl.e:1516						add_file("main-")*/
        // SubProg GenerateUserRoutines pc: 267 op: PROC (27)
        RefDS(_23289);
        RefDS(_21933);
        _58add_file(_23289, _21933);
        // SubProg GenerateUserRoutines pc: 271 op: STARTLINE (58)

        /** c_decl.e:1517						for i = 0 to main_name_num-1 do*/
        // SubProg GenerateUserRoutines pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 275 op: MINUS (10)
        _23299 = _55main_name_num_46104 - 1;
        if ((object)((uintptr_t)_23299 +(uintptr_t) HIGH_BITS) >= 0){
            _23299 = NewDouble((eudouble)_23299);
        }
        // SubProg GenerateUserRoutines pc: 279 op: FOR (21)
        {
            object _i_44354;
            _i_44354 = 0;
L10: // addr: 286 pc: 279 sub: 44286 op: 21
            if (binary_op_a(GREATER, _i_44354, _23299)){
                goto L11; // [279] 305
            }
            // SubProg GenerateUserRoutines pc: 286 op: STARTLINE (58)

            /** c_decl.e:1518							buff = sprintf("main-%d", i)*/
            // SubProg GenerateUserRoutines pc: 288 op: SPRINTF (53)
            DeRefi(_buff_44294);
            _buff_44294 = EPrintf(-9999999, _23300, _i_44354);
            // SubProg GenerateUserRoutines pc: 292 op: STARTLINE (58)

            /** c_decl.e:1519							add_file(buff)*/
            // SubProg GenerateUserRoutines pc: 294 op: PROC (27)
            RefDS(_buff_44294);
            RefDS(_21933);
            _58add_file(_buff_44294, _21933);
            // SubProg GenerateUserRoutines pc: 298 op: STARTLINE (58)

            /** c_decl.e:1520						end for*/
            // SubProg GenerateUserRoutines pc: 300 op: ENDFOR_INT_UP1 (54)
            _0 = _i_44354;
            if (IS_ATOM_INT(_i_44354)) {
                _i_44354 = _i_44354 + 1;
                if ((object)((uintptr_t)_i_44354 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_44354 = NewDouble((eudouble)_i_44354);
                }
            }
            else {
                _i_44354 = binary_op_a(PLUS, _i_44354, 1);
            }
            DeRef(_0);
            goto L10; // [300] 286
L11: // addr: 305 pc: 300 sub: 44286 op: 54
            ;
            DeRef(_i_44354);
        }
        // SubProg GenerateUserRoutines pc: 305 op: NOP1 (159)
LF: // addr: 306 pc: 305 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 306 op: STARTLINE (58)

        /** c_decl.e:1523					file0 = long_c_file*/
        // SubProg GenerateUserRoutines pc: 308 op: ASSIGN (18)
        RefDS(_long_c_file_44296);
        DeRef(_58file0_44053);
        _58file0_44053 = _long_c_file_44296;
        // SubProg GenerateUserRoutines pc: 311 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 313 op: NOP1 (159)
LE: // addr: 314 pc: 313 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 314 op: STARTLINE (58)

        /** c_decl.e:1526				new_c_file(c_file)*/
        // SubProg GenerateUserRoutines pc: 316 op: PROC (27)
        RefDS(_c_file_44297);
        _58new_c_file(_c_file_44297);
        // SubProg GenerateUserRoutines pc: 319 op: STARTLINE (58)

        /** c_decl.e:1528				s = SymTab[TopLevelSub][S_NEXT]*/
        // SubProg GenerateUserRoutines pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 323 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 325 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _23302 = (object)*(((s1_ptr)_2)->base + _36TopLevelSub_16443);
        // SubProg GenerateUserRoutines pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 331 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23302);
        _s_44289 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_44289)){
            _s_44289 = (object)DBL_PTR(_s_44289)->dbl;
        }
        _23302 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 337 op: STARTLINE (58)

        /** c_decl.e:1530				sequence these_routines = file_routines[file_no]*/
        // SubProg GenerateUserRoutines pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 341 op: RHS_SUBS (25)
        DeRef(_these_routines_44364);
        _2 = (object)SEQ_PTR(_58file_routines_44246);
        _these_routines_44364 = (object)*(((s1_ptr)_2)->base + _file_no_44313);
        Ref(_these_routines_44364);
        // SubProg GenerateUserRoutines pc: 345 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 347 op: STARTLINE (58)

        /** c_decl.e:1531				for routine_no = 1 to length( these_routines ) do*/
        // SubProg GenerateUserRoutines pc: 349 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_44364)){
                _23305 = SEQ_PTR(_these_routines_44364)->length;
        }
        else {
            _23305 = 1;
        }
        // SubProg GenerateUserRoutines pc: 352 op: FOR_I (125)
        {
            object _routine_no_44367;
            _routine_no_44367 = 1;
L12: // addr: 359 pc: 352 sub: 44286 op: 125
            if (_routine_no_44367 > _23305){
                goto L13; // [352] 2133
            }
            // SubProg GenerateUserRoutines pc: 359 op: STARTLINE (58)

            /** c_decl.e:1532					s = these_routines[routine_no]*/
            // SubProg GenerateUserRoutines pc: 361 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_44364);
            _s_44289 = (object)*(((s1_ptr)_2)->base + _routine_no_44367);
            if (!IS_ATOM_INT(_s_44289)){
                _s_44289 = (object)DBL_PTR(_s_44289)->dbl;
            }
            // SubProg GenerateUserRoutines pc: 367 op: STARTLINE (58)

            /** c_decl.e:1533					if SymTab[s][S_USAGE] != U_DELETED then*/
            // SubProg GenerateUserRoutines pc: 369 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 371 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23307 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 375 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 377 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23307);
            _23308 = (object)*(((s1_ptr)_2)->base + 5);
            _23307 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 381 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 383 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _23308, 99)){
                _23308 = NOVALUE;
                goto L14; // [383] 2124
            }
            _23308 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 387 op: STARTLINE (58)

            /** c_decl.e:1537						if LAST_PASS = TRUE and*/
            // SubProg GenerateUserRoutines pc: 389 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 391 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 393 op: EQUALS (3)
            _23310 = (_58LAST_PASS_42073 == _13TRUE_452);
            // SubProg GenerateUserRoutines pc: 397 op: SC1_AND_IF (146)
            if (_23310 == 0) {
                goto L15; // [397] 593
            }
            // SubProg GenerateUserRoutines pc: 401 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 403 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 405 op: GREATER (6)
            _23312 = (_36cfile_size_16515 > _56max_cfile_size_44909);
            // SubProg GenerateUserRoutines pc: 409 op: SC1_OR (143)
            if (_23312 != 0) {
                DeRef(_23313);
                _23313 = 1;
                goto L16; // [409] 472
            }
            // SubProg GenerateUserRoutines pc: 413 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 415 op: NOTEQ (4)
            _23314 = (_s_44289 != _36TopLevelSub_16443);
            // SubProg GenerateUserRoutines pc: 419 op: SC1_AND (141)
            if (_23314 == 0) {
                _23315 = 0;
                goto L17; // [419] 439
            }
            // SubProg GenerateUserRoutines pc: 423 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 425 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 427 op: DIVIDE (14)
            _23316 = (_56max_cfile_size_44909 % 4) ? NewDouble((eudouble)_56max_cfile_size_44909 / 4) : (_56max_cfile_size_44909 / 4);
            // SubProg GenerateUserRoutines pc: 431 op: GREATER (6)
            if (IS_ATOM_INT(_23316)) {
                _23317 = (_36cfile_size_16515 > _23316);
            }
            else {
                _23317 = ((eudouble)_36cfile_size_16515 > DBL_PTR(_23316)->dbl);
            }
            DeRef(_23316);
            _23316 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 435 op: SC2_AND (142)
            _23315 = (_23317 != 0);
            // SubProg GenerateUserRoutines pc: 438 op: NOP1 (159)
L17: // addr: 439 pc: 438 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 439 op: SC1_AND (141)
            if (_23315 == 0) {
                _23318 = 0;
                goto L18; // [439] 468
            }
            // SubProg GenerateUserRoutines pc: 443 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 445 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23319 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 449 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 451 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23319);
            if (!IS_ATOM_INT(_36S_CODE_16103)){
                _23320 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
            }
            else{
                _23320 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
            }
            _23319 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 455 op: LENGTH (42)
            if (IS_SEQUENCE(_23320)){
                    _23321 = SEQ_PTR(_23320)->length;
            }
            else {
                _23321 = 1;
            }
            _23320 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 458 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 460 op: GREATER (6)
            _23322 = (_23321 > _56max_cfile_size_44909);
            _23321 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 464 op: SC2_AND (142)
            _23318 = (_23322 != 0);
            // SubProg GenerateUserRoutines pc: 467 op: NOP1 (159)
L18: // addr: 468 pc: 467 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 468 op: SC2_OR (144)
            DeRef(_23313);
            _23313 = (_23318 != 0);
            // SubProg GenerateUserRoutines pc: 471 op: NOP1 (159)
L16: // addr: 472 pc: 471 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 472 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 473 op: IF (20)
            if (_23313 == 0)
            {
                _23313 = NOVALUE;
                goto L15; // [473] 593
            }
            else{
                _23313 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 476 op: STARTLINE (58)

            /** c_decl.e:1546							if length(c_file) = 7 then*/
            // SubProg GenerateUserRoutines pc: 478 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44297)){
                    _23323 = SEQ_PTR(_c_file_44297)->length;
            }
            else {
                _23323 = 1;
            }
            // SubProg GenerateUserRoutines pc: 481 op: EQUALS_IFW_I (121)
            if (_23323 != 7)
            goto L19; // [481] 492
            // SubProg GenerateUserRoutines pc: 485 op: STARTLINE (58)

            /** c_decl.e:1548								c_file &= " "*/
            // SubProg GenerateUserRoutines pc: 487 op: CONCAT (15)
            Concat((object_ptr)&_c_file_44297, _c_file_44297, _23325);
            // SubProg GenerateUserRoutines pc: 491 op: NOP1 (159)
L19: // addr: 492 pc: 491 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 492 op: STARTLINE (58)

            /** c_decl.e:1551							if length(c_file) >= 8 then*/
            // SubProg GenerateUserRoutines pc: 494 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44297)){
                    _23327 = SEQ_PTR(_c_file_44297)->length;
            }
            else {
                _23327 = 1;
            }
            // SubProg GenerateUserRoutines pc: 497 op: GREATEREQ_IFW_I (120)
            if (_23327 < 8)
            goto L1A; // [497] 520
            // SubProg GenerateUserRoutines pc: 501 op: STARTLINE (58)

            /** c_decl.e:1552								c_file[7] = '_'*/
            // SubProg GenerateUserRoutines pc: 503 op: ASSIGN_SUBS_I (118)
            _2 = (object)SEQ_PTR(_c_file_44297);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44297 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 7);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 95;
            DeRef(_1);
            // SubProg GenerateUserRoutines pc: 507 op: STARTLINE (58)

            /** c_decl.e:1553								c_file[8] = file_chars[next_c_char]*/
            // SubProg GenerateUserRoutines pc: 509 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_58file_chars_43918);
            _23329 = (object)*(((s1_ptr)_2)->base + _next_c_char_44291);
            // SubProg GenerateUserRoutines pc: 513 op: ASSIGN_SUBS (16)
            Ref(_23329);
            _2 = (object)SEQ_PTR(_c_file_44297);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44297 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 8);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23329;
            if( _1 != _23329 ){
                DeRef(_1);
            }
            _23329 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 517 op: ELSE (23)
            goto L1B; // [517] 552
            // SubProg GenerateUserRoutines pc: 519 op: NOP1 (159)
L1A: // addr: 520 pc: 519 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 520 op: STARTLINE (58)

            /** c_decl.e:1556								if find('_', c_file) = 0 then*/
            // SubProg GenerateUserRoutines pc: 522 op: FIND_FROM (176)
            _23330 = find_from(95, _c_file_44297, 1);
            // SubProg GenerateUserRoutines pc: 527 op: EQUALS_IFW_I (121)
            if (_23330 != 0)
            goto L1C; // [527] 538
            // SubProg GenerateUserRoutines pc: 531 op: STARTLINE (58)

            /** c_decl.e:1557									c_file &= "_ "*/
            // SubProg GenerateUserRoutines pc: 533 op: CONCAT (15)
            Concat((object_ptr)&_c_file_44297, _c_file_44297, _23332);
            // SubProg GenerateUserRoutines pc: 537 op: NOP1 (159)
L1C: // addr: 538 pc: 537 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 538 op: STARTLINE (58)

            /** c_decl.e:1560								c_file[$] = file_chars[next_c_char]*/
            // SubProg GenerateUserRoutines pc: 540 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44297)){
                    _23334 = SEQ_PTR(_c_file_44297)->length;
            }
            else {
                _23334 = 1;
            }
            // SubProg GenerateUserRoutines pc: 543 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_58file_chars_43918);
            _23335 = (object)*(((s1_ptr)_2)->base + _next_c_char_44291);
            // SubProg GenerateUserRoutines pc: 547 op: ASSIGN_SUBS (16)
            Ref(_23335);
            _2 = (object)SEQ_PTR(_c_file_44297);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44297 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _23334);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23335;
            if( _1 != _23335 ){
                DeRef(_1);
            }
            _23335 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 551 op: NOP1 (159)
L1B: // addr: 552 pc: 551 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 552 op: STARTLINE (58)

            /** c_decl.e:1564							c_file = unique_c_name(c_file)*/
            // SubProg GenerateUserRoutines pc: 554 op: PROC (27)
            RefDS(_c_file_44297);
            _0 = _c_file_44297;
            _c_file_44297 = _58unique_c_name(_c_file_44297);
            DeRefDS(_0);
            // SubProg GenerateUserRoutines pc: 558 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 560 op: STARTLINE (58)

            /** c_decl.e:1565							new_c_file(c_file)*/
            // SubProg GenerateUserRoutines pc: 562 op: PROC (27)
            RefDS(_c_file_44297);
            _58new_c_file(_c_file_44297);
            // SubProg GenerateUserRoutines pc: 565 op: STARTLINE (58)

            /** c_decl.e:1567							next_c_char += 1*/
            // SubProg GenerateUserRoutines pc: 567 op: PLUS1_I (117)
            _next_c_char_44291 = _next_c_char_44291 + 1;
            // SubProg GenerateUserRoutines pc: 571 op: STARTLINE (58)

            /** c_decl.e:1568							if next_c_char > length(file_chars) then*/
            // SubProg GenerateUserRoutines pc: 573 op: LENGTH (42)
            if (IS_SEQUENCE(_58file_chars_43918)){
                    _23338 = SEQ_PTR(_58file_chars_43918)->length;
            }
            else {
                _23338 = 1;
            }
            // SubProg GenerateUserRoutines pc: 576 op: GREATER_IFW_I (124)
            if (_next_c_char_44291 <= _23338)
            goto L1D; // [576] 586
            // SubProg GenerateUserRoutines pc: 580 op: STARTLINE (58)

            /** c_decl.e:1569								next_c_char = 1  -- (unique_c_name will resolve)*/
            // SubProg GenerateUserRoutines pc: 582 op: ASSIGN_I (113)
            _next_c_char_44291 = 1;
            // SubProg GenerateUserRoutines pc: 585 op: NOP1 (159)
L1D: // addr: 586 pc: 585 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 586 op: STARTLINE (58)

            /** c_decl.e:1572							add_file(c_file)*/
            // SubProg GenerateUserRoutines pc: 588 op: PROC (27)
            RefDS(_c_file_44297);
            RefDS(_21933);
            _58add_file(_c_file_44297, _21933);
            // SubProg GenerateUserRoutines pc: 592 op: NOP1 (159)
L15: // addr: 593 pc: 592 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 593 op: STARTLINE (58)

            /** c_decl.e:1575						sequence ret_type*/
            // SubProg GenerateUserRoutines pc: 595 op: STARTLINE (58)

            /** c_decl.e:1576						if SymTab[s][S_TOKEN] = PROC then*/
            // SubProg GenerateUserRoutines pc: 597 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 599 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23340 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 603 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 605 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23340);
            if (!IS_ATOM_INT(_36S_TOKEN_16096)){
                _23341 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
            }
            else{
                _23341 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
            }
            _23340 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 609 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 611 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _23341, 27)){
                _23341 = NOVALUE;
                goto L1E; // [611] 625
            }
            _23341 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 615 op: STARTLINE (58)

            /** c_decl.e:1577							ret_type = "void "*/
            // SubProg GenerateUserRoutines pc: 617 op: ASSIGN (18)
            RefDS(_22717);
            DeRefi(_ret_type_44422);
            _ret_type_44422 = _22717;
            // SubProg GenerateUserRoutines pc: 620 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 622 op: ELSE (23)
            goto L1F; // [622] 633
            // SubProg GenerateUserRoutines pc: 624 op: NOP1 (159)
L1E: // addr: 625 pc: 624 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 625 op: STARTLINE (58)

            /** c_decl.e:1579							ret_type = "object "*/
            // SubProg GenerateUserRoutines pc: 627 op: ASSIGN (18)
            RefDS(_22718);
            DeRefi(_ret_type_44422);
            _ret_type_44422 = _22718;
            // SubProg GenerateUserRoutines pc: 630 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 632 op: NOP1 (159)
L1F: // addr: 633 pc: 632 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 633 op: STARTLINE (58)

            /** c_decl.e:1581						integer s_scope = sym_scope( s )*/
            // SubProg GenerateUserRoutines pc: 635 op: PROC (27)
            _s_scope_44431 = _54sym_scope(_s_44289);
            // SubProg GenerateUserRoutines pc: 639 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_s_scope_44431)) {
                _1 = (object)(DBL_PTR(_s_scope_44431)->dbl);
                DeRefDS(_s_scope_44431);
                _s_scope_44431 = _1;
            }
            // SubProg GenerateUserRoutines pc: 641 op: STARTLINE (58)

            /** c_decl.e:1582						integer s_file  = SymTab[s][S_FILE_NO]*/
            // SubProg GenerateUserRoutines pc: 643 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 645 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23344 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 649 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 651 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23344);
            if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
                _s_file_44434 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
            }
            else{
                _s_file_44434 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
            }
            if (!IS_ATOM_INT(_s_file_44434)){
                _s_file_44434 = (object)DBL_PTR(_s_file_44434)->dbl;
            }
            _23344 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 657 op: STARTLINE (58)

            /** c_decl.e:1583						if dll_option and*/
            // SubProg GenerateUserRoutines pc: 659 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 661 op: SC1_AND_IF (146)
            if (_58dll_option_42086 == 0) {
                goto L20; // [661] 819
            }
            // SubProg GenerateUserRoutines pc: 665 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 667 op: EQUALS (3)
            _23347 = (_s_scope_44431 == 6);
            // SubProg GenerateUserRoutines pc: 671 op: SC1_OR (143)
            if (_23347 != 0) {
                DeRef(_23348);
                _23348 = 1;
                goto L21; // [671] 749
            }
            // SubProg GenerateUserRoutines pc: 675 op: EQUALS (3)
            _23349 = (_s_file_44434 == 1);
            // SubProg GenerateUserRoutines pc: 679 op: SC1_AND (141)
            if (_23349 == 0) {
                _23350 = 0;
                goto L22; // [679] 707
            }
            // SubProg GenerateUserRoutines pc: 683 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 685 op: EQUALS (3)
            _23351 = (_s_scope_44431 == 13);
            // SubProg GenerateUserRoutines pc: 689 op: SC1_OR (143)
            if (_23351 != 0) {
                _23352 = 1;
                goto L23; // [689] 703
            }
            // SubProg GenerateUserRoutines pc: 693 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 695 op: EQUALS (3)
            _23353 = (_s_scope_44431 == 11);
            // SubProg GenerateUserRoutines pc: 699 op: SC2_OR (144)
            _23352 = (_23353 != 0);
            // SubProg GenerateUserRoutines pc: 702 op: NOP1 (159)
L23: // addr: 703 pc: 702 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 703 op: SC2_AND (142)
            _23350 = (_23352 != 0);
            // SubProg GenerateUserRoutines pc: 706 op: NOP1 (159)
L22: // addr: 707 pc: 706 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 707 op: SC1_OR (143)
            if (_23350 != 0) {
                _23354 = 1;
                goto L24; // [707] 745
            }
            // SubProg GenerateUserRoutines pc: 711 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 713 op: EQUALS (3)
            _23355 = (_s_scope_44431 == 13);
            // SubProg GenerateUserRoutines pc: 717 op: SC1_AND (141)
            if (_23355 == 0) {
                _23356 = 0;
                goto L25; // [717] 741
            }
            // SubProg GenerateUserRoutines pc: 721 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 723 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37include_matrix_15412);
            _23357 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg GenerateUserRoutines pc: 727 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23357);
            _23358 = (object)*(((s1_ptr)_2)->base + _s_file_44434);
            _23357 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 731 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 733 op: AND_BITS (56)
            if (IS_ATOM_INT(_23358)) {
                {uintptr_t tu;
                     tu = (uintptr_t)_23358 & (uintptr_t)4;
                     _23359 = MAKE_UINT(tu);
                }
            }
            else {
                _23359 = binary_op(AND_BITS, _23358, 4);
            }
            _23358 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 737 op: SC2_AND (142)
            if (IS_ATOM_INT(_23359))
            _23356 = (_23359 != 0);
            else
            _23356 = DBL_PTR(_23359)->dbl != 0.0;
            // SubProg GenerateUserRoutines pc: 740 op: NOP1 (159)
L25: // addr: 741 pc: 740 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 741 op: SC2_OR (144)
            _23354 = (_23356 != 0);
            // SubProg GenerateUserRoutines pc: 744 op: NOP1 (159)
L24: // addr: 745 pc: 744 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 745 op: SC2_OR (144)
            DeRef(_23348);
            _23348 = (_23354 != 0);
            // SubProg GenerateUserRoutines pc: 748 op: NOP1 (159)
L21: // addr: 749 pc: 748 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 749 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 750 op: IF (20)
            if (_23348 == 0)
            {
                _23348 = NOVALUE;
                goto L20; // [750] 819
            }
            else{
                _23348 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 753 op: STARTLINE (58)

            /** c_decl.e:1589							SymTab[s][S_RI_TARGET] = TRUE*/
            // SubProg GenerateUserRoutines pc: 755 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 757 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_s_44289 + ((s1_ptr)_2)->base);
            // SubProg GenerateUserRoutines pc: 762 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 764 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 766 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 53);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _13TRUE_452;
            DeRef(_1);
            _23360 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 770 op: STARTLINE (58)

            /** c_decl.e:1590							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 772 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 774 op: ASSIGN (18)
            _58LeftSym_42083 = _13TRUE_452;
            // SubProg GenerateUserRoutines pc: 777 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 779 op: STARTLINE (58)

            /** c_decl.e:1593							if TWINDOWS then*/
            // SubProg GenerateUserRoutines pc: 781 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 783 op: IF (20)
            if (_41TWINDOWS_21210 == 0)
            {
                goto L26; // [783] 802
            }
            else{
            }
            // SubProg GenerateUserRoutines pc: 786 op: STARTLINE (58)

            /** c_decl.e:1594								c_stmt(ret_type & " __stdcall @(", s)*/
            // SubProg GenerateUserRoutines pc: 788 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 790 op: CONCAT (15)
            Concat((object_ptr)&_23363, _ret_type_44422, _23362);
            // SubProg GenerateUserRoutines pc: 794 op: PROC (27)
            _58c_stmt(_23363, _s_44289, 0);
            _23363 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 799 op: ELSE (23)
            goto L27; // [799] 842
            // SubProg GenerateUserRoutines pc: 801 op: NOP1 (159)
L26: // addr: 802 pc: 801 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 802 op: STARTLINE (58)

            /** c_decl.e:1596								c_stmt(ret_type & "@(", s)*/
            // SubProg GenerateUserRoutines pc: 804 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 806 op: CONCAT (15)
            Concat((object_ptr)&_23365, _ret_type_44422, _23364);
            // SubProg GenerateUserRoutines pc: 810 op: PROC (27)
            _58c_stmt(_23365, _s_44289, 0);
            _23365 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 815 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 816 op: ELSE (23)
            goto L27; // [816] 842
            // SubProg GenerateUserRoutines pc: 818 op: NOP1 (159)
L20: // addr: 819 pc: 818 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 819 op: STARTLINE (58)

            /** c_decl.e:1600							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 821 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 823 op: ASSIGN (18)
            _58LeftSym_42083 = _13TRUE_452;
            // SubProg GenerateUserRoutines pc: 826 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 828 op: STARTLINE (58)

            /** c_decl.e:1601							c_stmt( ret_type & "@(", s)*/
            // SubProg GenerateUserRoutines pc: 830 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 832 op: CONCAT (15)
            Concat((object_ptr)&_23366, _ret_type_44422, _23364);
            // SubProg GenerateUserRoutines pc: 836 op: PROC (27)
            _58c_stmt(_23366, _s_44289, 0);
            _23366 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 841 op: NOP1 (159)
L27: // addr: 842 pc: 841 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 842 op: STARTLINE (58)

            /** c_decl.e:1605						sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 844 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 846 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23367 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 850 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 852 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23367);
            _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44290)){
                _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
            }
            _23367 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 858 op: STARTLINE (58)

            /** c_decl.e:1606						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 860 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 862 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23369 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 866 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 868 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23369);
            if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                _23370 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
            }
            else{
                _23370 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
            }
            _23369 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 872 op: FOR (21)
            {
                object _p_44481;
                _p_44481 = 1;
L28: // addr: 879 pc: 872 sub: 44286 op: 21
                if (binary_op_a(GREATER, _p_44481, _23370)){
                    goto L29; // [872] 948
                }
                // SubProg GenerateUserRoutines pc: 879 op: STARTLINE (58)

                /** c_decl.e:1607							c_puts("object _")*/
                // SubProg GenerateUserRoutines pc: 881 op: PROC (27)
                RefDS(_23371);
                _55c_puts(_23371);
                // SubProg GenerateUserRoutines pc: 884 op: STARTLINE (58)

                /** c_decl.e:1608							c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 886 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 888 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23372 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 892 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 894 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23372);
                if (!IS_ATOM_INT(_36S_NAME_16091)){
                    _23373 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
                }
                else{
                    _23373 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
                }
                _23372 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 898 op: PROC (27)
                Ref(_23373);
                _55c_puts(_23373);
                _23373 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 901 op: STARTLINE (58)

                /** c_decl.e:1609							if p != SymTab[s][S_NUM_ARGS] then*/
                // SubProg GenerateUserRoutines pc: 903 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 905 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23374 = (object)*(((s1_ptr)_2)->base + _s_44289);
                // SubProg GenerateUserRoutines pc: 909 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 911 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23374);
                if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                    _23375 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
                }
                else{
                    _23375 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
                }
                _23374 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 915 op: NOTEQ_IFW (105)
                if (binary_op_a(EQUALS, _p_44481, _23375)){
                    _23375 = NOVALUE;
                    goto L2A; // [915] 925
                }
                _23375 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 919 op: STARTLINE (58)

                /** c_decl.e:1610								c_puts(", ")*/
                // SubProg GenerateUserRoutines pc: 921 op: PROC (27)
                RefDS(_23377);
                _55c_puts(_23377);
                // SubProg GenerateUserRoutines pc: 924 op: NOP1 (159)
L2A: // addr: 925 pc: 924 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 925 op: STARTLINE (58)

                /** c_decl.e:1612							sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 927 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 929 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23378 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 933 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 935 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23378);
                _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44290)){
                    _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
                }
                _23378 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 941 op: STARTLINE (58)

                /** c_decl.e:1613						end for*/
                // SubProg GenerateUserRoutines pc: 943 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44481;
                if (IS_ATOM_INT(_p_44481)) {
                    _p_44481 = _p_44481 + 1;
                    if ((object)((uintptr_t)_p_44481 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44481 = NewDouble((eudouble)_p_44481);
                    }
                }
                else {
                    _p_44481 = binary_op_a(PLUS, _p_44481, 1);
                }
                DeRef(_0);
                goto L28; // [943] 879
L29: // addr: 948 pc: 943 sub: 44286 op: 54
                ;
                DeRef(_p_44481);
            }
            // SubProg GenerateUserRoutines pc: 948 op: STARTLINE (58)

            /** c_decl.e:1615						c_puts(")\n")*/
            // SubProg GenerateUserRoutines pc: 950 op: PROC (27)
            RefDS(_23380);
            _55c_puts(_23380);
            // SubProg GenerateUserRoutines pc: 953 op: STARTLINE (58)

            /** c_decl.e:1616						c_stmt0("{\n")*/
            // SubProg GenerateUserRoutines pc: 955 op: PROC (27)
            RefDS(_22037);
            _58c_stmt0(_22037);
            // SubProg GenerateUserRoutines pc: 958 op: STARTLINE (58)

            /** c_decl.e:1618						NewBB(0, E_ALL_EFFECT, 0)*/
            // SubProg GenerateUserRoutines pc: 960 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 962 op: PROC (27)
            _58NewBB(0, 1073741823, 0);
            // SubProg GenerateUserRoutines pc: 967 op: STARTLINE (58)

            /** c_decl.e:1619						Initializing = TRUE*/
            // SubProg GenerateUserRoutines pc: 969 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 971 op: ASSIGN (18)
            _36Initializing_16516 = _13TRUE_452;
            // SubProg GenerateUserRoutines pc: 974 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 976 op: STARTLINE (58)

            /** c_decl.e:1622						while sp do*/
            // SubProg GenerateUserRoutines pc: 978 op: NOP2 (110)
            // SubProg GenerateUserRoutines pc: 980 op: NOPWHILE (158)
L2B: // addr: 981 pc: 980 sub: 44286 op: 158
            // SubProg GenerateUserRoutines pc: 981 op: WHILE (47)
            if (_sp_44290 == 0)
            {
                goto L2C; // [981] 1120
            }
            else{
            }
            // SubProg GenerateUserRoutines pc: 984 op: STARTLINE (58)

            /** c_decl.e:1623							integer scope = SymTab[sp][S_SCOPE]*/
            // SubProg GenerateUserRoutines pc: 986 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 988 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23381 = (object)*(((s1_ptr)_2)->base + _sp_44290);
            // SubProg GenerateUserRoutines pc: 992 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 994 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23381);
            _scope_44511 = (object)*(((s1_ptr)_2)->base + 4);
            if (!IS_ATOM_INT(_scope_44511)){
                _scope_44511 = (object)DBL_PTR(_scope_44511)->dbl;
            }
            _23381 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1000 op: STARTLINE (58)

            /** c_decl.e:1624							switch scope with fallthru do*/
            // SubProg GenerateUserRoutines pc: 1002 op: SWITCH_I (193)
            _0 = _scope_44511;
            switch ( _0 ){ 
                // SubProg GenerateUserRoutines pc: 1007 op: STARTLINE (58)

                /** c_decl.e:1625								case SC_LOOP_VAR, SC_UNDEFINED then*/
                // SubProg GenerateUserRoutines pc: 1009 op: CASE (186)
                case 2:
                // SubProg GenerateUserRoutines pc: 1011 op: CASE (186)
                case 9:
                // SubProg GenerateUserRoutines pc: 1013 op: STARTLINE (58)

                /** c_decl.e:1628									break*/
                // SubProg GenerateUserRoutines pc: 1015 op: ELSE (23)
                goto L2D; // [1015] 1097
                // SubProg GenerateUserRoutines pc: 1017 op: STARTLINE (58)

                /** c_decl.e:1630								case SC_PRIVATE then*/
                // SubProg GenerateUserRoutines pc: 1019 op: CASE (186)
                case 3:
                // SubProg GenerateUserRoutines pc: 1021 op: STARTLINE (58)

                /** c_decl.e:1631									c_stmt0("object ")*/
                // SubProg GenerateUserRoutines pc: 1023 op: PROC (27)
                RefDS(_22718);
                _58c_stmt0(_22718);
                // SubProg GenerateUserRoutines pc: 1026 op: STARTLINE (58)

                /** c_decl.e:1632									c_puts("_")*/
                // SubProg GenerateUserRoutines pc: 1028 op: PROC (27)
                RefDS(_22005);
                _55c_puts(_22005);
                // SubProg GenerateUserRoutines pc: 1031 op: STARTLINE (58)

                /** c_decl.e:1633									c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 1033 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1035 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23385 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1039 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1041 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23385);
                if (!IS_ATOM_INT(_36S_NAME_16091)){
                    _23386 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
                }
                else{
                    _23386 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
                }
                _23385 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1045 op: PROC (27)
                Ref(_23386);
                _55c_puts(_23386);
                _23386 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1048 op: STARTLINE (58)

                /** c_decl.e:1635									c_puts(" = NOVALUE;\n")*/
                // SubProg GenerateUserRoutines pc: 1050 op: PROC (27)
                RefDS(_22726);
                _55c_puts(_22726);
                // SubProg GenerateUserRoutines pc: 1053 op: STARTLINE (58)

                /** c_decl.e:1636									target[MIN] = NOVALUE*/
                // SubProg GenerateUserRoutines pc: 1055 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1057 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1059 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1061 op: ASSIGN_SUBS (16)
                Ref(_36NOVALUE_16291);
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _36NOVALUE_16291;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1065 op: STARTLINE (58)

                /** c_decl.e:1637									target[MAX] = NOVALUE*/
                // SubProg GenerateUserRoutines pc: 1067 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1069 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1071 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1073 op: ASSIGN_SUBS (16)
                Ref(_36NOVALUE_16291);
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _36NOVALUE_16291;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1077 op: STARTLINE (58)

                /** c_decl.e:1638									RemoveFromBB( sp )*/
                // SubProg GenerateUserRoutines pc: 1079 op: PROC (27)
                _58RemoveFromBB(_sp_44290);
                // SubProg GenerateUserRoutines pc: 1082 op: STARTLINE (58)

                /** c_decl.e:1640									break*/
                // SubProg GenerateUserRoutines pc: 1084 op: ELSE (23)
                goto L2D; // [1084] 1097
                // SubProg GenerateUserRoutines pc: 1086 op: STARTLINE (58)

                /** c_decl.e:1642								case else*/
                // SubProg GenerateUserRoutines pc: 1088 op: CASE (186)
                default:
                // SubProg GenerateUserRoutines pc: 1090 op: STARTLINE (58)

                /** c_decl.e:1643									exit*/
                // SubProg GenerateUserRoutines pc: 1092 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var scope_44511
                // SubProg GenerateUserRoutines pc: 1094 op: EXIT (61)
                goto L2C; // [1094] 1120
                // SubProg GenerateUserRoutines pc: 1096 op: NOPSWITCH (187)
            ;}L2D: // addr: 1097 pc: 1096 sub: 44286 op: 187
            // SubProg GenerateUserRoutines pc: 1097 op: STARTLINE (58)

            /** c_decl.e:1645							sp = SymTab[sp][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1099 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1101 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23387 = (object)*(((s1_ptr)_2)->base + _sp_44290);
            // SubProg GenerateUserRoutines pc: 1105 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1107 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23387);
            _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44290)){
                _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
            }
            _23387 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1113 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var scope_44511
            // SubProg GenerateUserRoutines pc: 1115 op: STARTLINE (58)

            /** c_decl.e:1646						end while*/
            // SubProg GenerateUserRoutines pc: 1117 op: ENDWHILE (22)
            goto L2B; // [1117] 981
            // SubProg GenerateUserRoutines pc: 1119 op: NOP1 (159)
L2C: // addr: 1120 pc: 1119 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1120 op: STARTLINE (58)

            /** c_decl.e:1649						temps = SymTab[s][S_TEMPS]*/
            // SubProg GenerateUserRoutines pc: 1122 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1124 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23389 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1128 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1130 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23389);
            if (!IS_ATOM_INT(_36S_TEMPS_16136)){
                _temps_44293 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
            }
            else{
                _temps_44293 = (object)*(((s1_ptr)_2)->base + _36S_TEMPS_16136);
            }
            if (!IS_ATOM_INT(_temps_44293)){
                _temps_44293 = (object)DBL_PTR(_temps_44293)->dbl;
            }
            _23389 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1136 op: STARTLINE (58)

            /** c_decl.e:1650						sequence names = {}*/
            // SubProg GenerateUserRoutines pc: 1138 op: ASSIGN (18)
            RefDS(_21933);
            DeRef(_names_44545);
            _names_44545 = _21933;
            // SubProg GenerateUserRoutines pc: 1141 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 1143 op: STARTLINE (58)

            /** c_decl.e:1651						while temps != 0 do*/
            // SubProg GenerateUserRoutines pc: 1145 op: NOP2 (110)
            // SubProg GenerateUserRoutines pc: 1147 op: NOPWHILE (158)
L2E: // addr: 1148 pc: 1147 sub: 44286 op: 158
            // SubProg GenerateUserRoutines pc: 1148 op: NOTEQ_IFW_I (122)
            if (_temps_44293 == 0)
            goto L2F; // [1148] 1340
            // SubProg GenerateUserRoutines pc: 1152 op: STARTLINE (58)

            /** c_decl.e:1652							if SymTab[temps][S_SCOPE] != DELETED then*/
            // SubProg GenerateUserRoutines pc: 1154 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1156 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23392 = (object)*(((s1_ptr)_2)->base + _temps_44293);
            // SubProg GenerateUserRoutines pc: 1160 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1162 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23392);
            _23393 = (object)*(((s1_ptr)_2)->base + 4);
            _23392 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1166 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1168 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _23393, 2)){
                _23393 = NOVALUE;
                goto L30; // [1168] 1300
            }
            _23393 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1172 op: STARTLINE (58)

            /** c_decl.e:1653								sequence name = sprintf("_%d", SymTab[temps][S_TEMP_NAME] )*/
            // SubProg GenerateUserRoutines pc: 1174 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1176 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23395 = (object)*(((s1_ptr)_2)->base + _temps_44293);
            // SubProg GenerateUserRoutines pc: 1180 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1182 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23395);
            _23396 = (object)*(((s1_ptr)_2)->base + 34);
            _23395 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1186 op: SPRINTF (53)
            DeRefi(_name_44555);
            _name_44555 = EPrintf(-9999999, _22056, _23396);
            _23396 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1190 op: STARTLINE (58)

            /** c_decl.e:1654								if temp_name_type[SymTab[temps][S_TEMP_NAME]][T_GTYPE]*/
            // SubProg GenerateUserRoutines pc: 1192 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1194 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1196 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23398 = (object)*(((s1_ptr)_2)->base + _temps_44293);
            // SubProg GenerateUserRoutines pc: 1200 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1202 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23398);
            _23399 = (object)*(((s1_ptr)_2)->base + 34);
            _23398 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1206 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_36temp_name_type_16518);
            if (!IS_ATOM_INT(_23399)){
                _23400 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23399)->dbl));
            }
            else{
                _23400 = (object)*(((s1_ptr)_2)->base + _23399);
            }
            // SubProg GenerateUserRoutines pc: 1210 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1212 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23400);
            _23401 = (object)*(((s1_ptr)_2)->base + 1);
            _23400 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1216 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1218 op: NOTEQ (4)
            if (IS_ATOM_INT(_23401)) {
                _23402 = (_23401 != 0);
            }
            else {
                _23402 = binary_op(NOTEQ, _23401, 0);
            }
            _23401 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1222 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_23402)) {
                if (_23402 == 0) {
                    goto L31; // [1222] 1296
                }
            }
            else {
                if (DBL_PTR(_23402)->dbl == 0.0) {
                    goto L31; // [1222] 1296
                }
            }
            // SubProg GenerateUserRoutines pc: 1226 op: FIND_FROM (176)
            _23404 = find_from(_name_44555, _names_44545, 1);
            // SubProg GenerateUserRoutines pc: 1231 op: NOT (7)
            _23405 = (_23404 == 0);
            _23404 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1234 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 1235 op: IF (20)
            if (_23405 == 0)
            {
                DeRef(_23405);
                _23405 = NOVALUE;
                goto L31; // [1235] 1296
            }
            else{
                DeRef(_23405);
                _23405 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 1238 op: STARTLINE (58)

            /** c_decl.e:1657									c_stmt0("object ")*/
            // SubProg GenerateUserRoutines pc: 1240 op: PROC (27)
            RefDS(_22718);
            _58c_stmt0(_22718);
            // SubProg GenerateUserRoutines pc: 1243 op: STARTLINE (58)

            /** c_decl.e:1658									c_puts( name )*/
            // SubProg GenerateUserRoutines pc: 1245 op: PROC (27)
            RefDS(_name_44555);
            _55c_puts(_name_44555);
            // SubProg GenerateUserRoutines pc: 1248 op: STARTLINE (58)

            /** c_decl.e:1659									c_puts(" = NOVALUE")*/
            // SubProg GenerateUserRoutines pc: 1250 op: PROC (27)
            RefDS(_23406);
            _55c_puts(_23406);
            // SubProg GenerateUserRoutines pc: 1253 op: STARTLINE (58)

            /** c_decl.e:1661									target = {NOVALUE, NOVALUE}*/
            // SubProg GenerateUserRoutines pc: 1255 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1257 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1259 op: RIGHT_BRACE_2 (85)
            Ref(_36NOVALUE_16291);
            Ref(_36NOVALUE_16291);
            DeRef(_59target_27982);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _36NOVALUE_16291;
            ((intptr_t *)_2)[2] = _36NOVALUE_16291;
            _59target_27982 = MAKE_SEQ(_1);
            // SubProg GenerateUserRoutines pc: 1263 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 1265 op: STARTLINE (58)

            /** c_decl.e:1663									SetBBType(temps, TYPE_INTEGER, target, TYPE_OBJECT, 0)*/
            // SubProg GenerateUserRoutines pc: 1267 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1269 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1271 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1273 op: PROC (27)
            RefDS(_59target_27982);
            _58SetBBType(_temps_44293, 1, _59target_27982, 16, 0);
            // SubProg GenerateUserRoutines pc: 1280 op: STARTLINE (58)

            /** c_decl.e:1664									ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1282 op: STARTLINE (58)

            /** c_decl.e:1667										c_puts(";\n")*/
            // SubProg GenerateUserRoutines pc: 1284 op: PROC (27)
            RefDS(_22209);
            _55c_puts(_22209);
            // SubProg GenerateUserRoutines pc: 1287 op: STARTLINE (58)

            /** c_decl.e:1669									names = prepend( names, name )*/
            // SubProg GenerateUserRoutines pc: 1289 op: PREPEND (57)
            RefDS(_name_44555);
            Prepend(&_names_44545, _names_44545, _name_44555);
            // SubProg GenerateUserRoutines pc: 1293 op: ELSE (23)
            goto L32; // [1293] 1299
            // SubProg GenerateUserRoutines pc: 1295 op: NOP1 (159)
L31: // addr: 1296 pc: 1295 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1296 op: STARTLINE (58)

            /** c_decl.e:1671									ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1298 op: NOP1 (159)
L32: // addr: 1299 pc: 1298 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1299 op: NOP1 (159)
L30: // addr: 1300 pc: 1299 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1300 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var name_44555
            DeRefi(_name_44555);
            _name_44555 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1302 op: STARTLINE (58)

            /** c_decl.e:1677							SymTab[temps][S_GTYPE] = TYPE_OBJECT*/
            // SubProg GenerateUserRoutines pc: 1304 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1306 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _37SymTab_15405 = MAKE_SEQ(_2);
            }
            _3 = (object)(_temps_44293 + ((s1_ptr)_2)->base);
            // SubProg GenerateUserRoutines pc: 1311 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1313 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1315 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 36);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 16;
            DeRef(_1);
            _23411 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1319 op: STARTLINE (58)

            /** c_decl.e:1678							temps = SymTab[temps][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1321 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1323 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23413 = (object)*(((s1_ptr)_2)->base + _temps_44293);
            // SubProg GenerateUserRoutines pc: 1327 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1329 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23413);
            _temps_44293 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_temps_44293)){
                _temps_44293 = (object)DBL_PTR(_temps_44293)->dbl;
            }
            _23413 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1335 op: STARTLINE (58)

            /** c_decl.e:1679						end while*/
            // SubProg GenerateUserRoutines pc: 1337 op: ENDWHILE (22)
            goto L2E; // [1337] 1148
            // SubProg GenerateUserRoutines pc: 1339 op: NOP1 (159)
L2F: // addr: 1340 pc: 1339 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1340 op: STARTLINE (58)

            /** c_decl.e:1680						Initializing = FALSE*/
            // SubProg GenerateUserRoutines pc: 1342 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1344 op: ASSIGN (18)
            _36Initializing_16516 = _13FALSE_450;
            // SubProg GenerateUserRoutines pc: 1347 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 1349 op: STARTLINE (58)

            /** c_decl.e:1682						if SymTab[s][S_LHS_SUBS2] then*/
            // SubProg GenerateUserRoutines pc: 1351 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1353 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23415 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1357 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1359 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23415);
            _23416 = (object)*(((s1_ptr)_2)->base + 37);
            _23415 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1363 op: IF (20)
            if (_23416 == 0) {
                _23416 = NOVALUE;
                goto L33; // [1363] 1376
            }
            else {
                if (!IS_ATOM_INT(_23416) && DBL_PTR(_23416)->dbl == 0.0){
                    _23416 = NOVALUE;
                    goto L33; // [1363] 1376
                }
                _23416 = NOVALUE;
            }
            _23416 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1366 op: STARTLINE (58)

            /** c_decl.e:1683							c_stmt0("object _0, _1, _2, _3;\n\n")*/
            // SubProg GenerateUserRoutines pc: 1368 op: PROC (27)
            RefDS(_23417);
            _58c_stmt0(_23417);
            // SubProg GenerateUserRoutines pc: 1371 op: STARTLINE (58)

            /** c_decl.e:1684							ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1373 op: ELSE (23)
            goto L34; // [1373] 1384
            // SubProg GenerateUserRoutines pc: 1375 op: NOP1 (159)
L33: // addr: 1376 pc: 1375 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1376 op: STARTLINE (58)

            /** c_decl.e:1688							c_stmt0("object _0, _1, _2;\n\n")*/
            // SubProg GenerateUserRoutines pc: 1378 op: PROC (27)
            RefDS(_23419);
            _58c_stmt0(_23419);
            // SubProg GenerateUserRoutines pc: 1381 op: STARTLINE (58)

            /** c_decl.e:1689							ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1383 op: NOP1 (159)
L34: // addr: 1384 pc: 1383 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1384 op: STARTLINE (58)

            /** c_decl.e:1696						sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1386 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1388 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23421 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1392 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1394 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23421);
            _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44290)){
                _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
            }
            _23421 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1400 op: STARTLINE (58)

            /** c_decl.e:1697						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 1402 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1404 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23423 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1408 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1410 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23423);
            if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                _23424 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
            }
            else{
                _23424 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
            }
            _23423 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1414 op: FOR (21)
            {
                object _p_44616;
                _p_44616 = 1;
L35: // addr: 1421 pc: 1414 sub: 44286 op: 21
                if (binary_op_a(GREATER, _p_44616, _23424)){
                    goto L36; // [1414] 1765
                }
                // SubProg GenerateUserRoutines pc: 1421 op: STARTLINE (58)

                /** c_decl.e:1698							SymTab[sp][S_ONE_REF] = FALSE*/
                // SubProg GenerateUserRoutines pc: 1423 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1425 op: LHS_SUBS1 (161)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _37SymTab_15405 = MAKE_SEQ(_2);
                }
                _3 = (object)(_sp_44290 + ((s1_ptr)_2)->base);
                // SubProg GenerateUserRoutines pc: 1430 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1432 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1434 op: PASSIGN_SUBS (162)
                _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    *(intptr_t *)_3 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 35);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _13FALSE_450;
                DeRef(_1);
                _23425 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1438 op: STARTLINE (58)

                /** c_decl.e:1699							if SymTab[sp][S_ARG_TYPE] = TYPE_SEQUENCE then*/
                // SubProg GenerateUserRoutines pc: 1440 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1442 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23427 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1446 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1448 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23427);
                _23428 = (object)*(((s1_ptr)_2)->base + 43);
                _23427 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1452 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1454 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23428, 8)){
                    _23428 = NOVALUE;
                    goto L37; // [1454] 1518
                }
                _23428 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1458 op: STARTLINE (58)

                /** c_decl.e:1700								target[MIN] = SymTab[sp][S_ARG_SEQ_LEN]*/
                // SubProg GenerateUserRoutines pc: 1460 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1462 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1464 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1466 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23430 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1470 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1472 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23430);
                _23431 = (object)*(((s1_ptr)_2)->base + 51);
                _23430 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1476 op: ASSIGN_SUBS (16)
                Ref(_23431);
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23431;
                if( _1 != _23431 ){
                    DeRef(_1);
                }
                _23431 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1480 op: STARTLINE (58)

                /** c_decl.e:1701								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target,*/
                // SubProg GenerateUserRoutines pc: 1482 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1484 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23432 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1488 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1490 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23432);
                _23433 = (object)*(((s1_ptr)_2)->base + 43);
                _23432 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1494 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1496 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1498 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23434 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1502 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1504 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23434);
                _23435 = (object)*(((s1_ptr)_2)->base + 45);
                _23434 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1508 op: PROC (27)
                Ref(_23433);
                RefDS(_59target_27982);
                Ref(_23435);
                _58SetBBType(_sp_44290, _23433, _59target_27982, _23435, 0);
                _23433 = NOVALUE;
                _23435 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1515 op: ELSE (23)
                goto L38; // [1515] 1742
                // SubProg GenerateUserRoutines pc: 1517 op: NOP1 (159)
L37: // addr: 1518 pc: 1517 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1518 op: STARTLINE (58)

                /** c_decl.e:1704							elsif SymTab[sp][S_ARG_TYPE] = TYPE_INTEGER then*/
                // SubProg GenerateUserRoutines pc: 1520 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1522 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23436 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1526 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1528 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23436);
                _23437 = (object)*(((s1_ptr)_2)->base + 43);
                _23436 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1532 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1534 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23437, 1)){
                    _23437 = NOVALUE;
                    goto L39; // [1534] 1658
                }
                _23437 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1538 op: STARTLINE (58)

                /** c_decl.e:1705								if SymTab[sp][S_ARG_MIN] = NOVALUE then*/
                // SubProg GenerateUserRoutines pc: 1540 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1542 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23439 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1546 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1548 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23439);
                _23440 = (object)*(((s1_ptr)_2)->base + 47);
                _23439 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1552 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1554 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23440, _36NOVALUE_16291)){
                    _23440 = NOVALUE;
                    goto L3A; // [1554] 1585
                }
                _23440 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1558 op: STARTLINE (58)

                /** c_decl.e:1706									target[MIN] = MININT*/
                // SubProg GenerateUserRoutines pc: 1560 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1562 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1564 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1566 op: ASSIGN_SUBS (16)
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = -1073741824;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1570 op: STARTLINE (58)

                /** c_decl.e:1707									target[MAX] = MAXINT*/
                // SubProg GenerateUserRoutines pc: 1572 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1574 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1576 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1578 op: ASSIGN_SUBS (16)
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = 1073741823;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1582 op: ELSE (23)
                goto L3B; // [1582] 1630
                // SubProg GenerateUserRoutines pc: 1584 op: NOP1 (159)
L3A: // addr: 1585 pc: 1584 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1585 op: STARTLINE (58)

                /** c_decl.e:1709									target[MIN] = SymTab[sp][S_ARG_MIN]*/
                // SubProg GenerateUserRoutines pc: 1587 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1589 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1591 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1593 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23442 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1597 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1599 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23442);
                _23443 = (object)*(((s1_ptr)_2)->base + 47);
                _23442 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1603 op: ASSIGN_SUBS (16)
                Ref(_23443);
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23443;
                if( _1 != _23443 ){
                    DeRef(_1);
                }
                _23443 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1607 op: STARTLINE (58)

                /** c_decl.e:1710									target[MAX] = SymTab[sp][S_ARG_MAX]*/
                // SubProg GenerateUserRoutines pc: 1609 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1611 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1613 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1615 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23444 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1619 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1621 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23444);
                _23445 = (object)*(((s1_ptr)_2)->base + 48);
                _23444 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1625 op: ASSIGN_SUBS (16)
                Ref(_23445);
                _2 = (object)SEQ_PTR(_59target_27982);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _59target_27982 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23445;
                if( _1 != _23445 ){
                    DeRef(_1);
                }
                _23445 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1629 op: NOP1 (159)
L3B: // addr: 1630 pc: 1629 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1630 op: STARTLINE (58)

                /** c_decl.e:1712								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target, TYPE_OBJECT, 0)*/
                // SubProg GenerateUserRoutines pc: 1632 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1634 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23446 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1638 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1640 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23446);
                _23447 = (object)*(((s1_ptr)_2)->base + 43);
                _23446 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1644 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1646 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1648 op: PROC (27)
                Ref(_23447);
                RefDS(_59target_27982);
                _58SetBBType(_sp_44290, _23447, _59target_27982, 16, 0);
                _23447 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1655 op: ELSE (23)
                goto L38; // [1655] 1742
                // SubProg GenerateUserRoutines pc: 1657 op: NOP1 (159)
L39: // addr: 1658 pc: 1657 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1658 op: STARTLINE (58)

                /** c_decl.e:1714							elsif SymTab[sp][S_ARG_TYPE] = TYPE_OBJECT then*/
                // SubProg GenerateUserRoutines pc: 1660 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1662 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23448 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1666 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1668 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23448);
                _23449 = (object)*(((s1_ptr)_2)->base + 43);
                _23448 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1672 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1674 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23449, 16)){
                    _23449 = NOVALUE;
                    goto L3C; // [1674] 1716
                }
                _23449 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1678 op: STARTLINE (58)

                /** c_decl.e:1716								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue,*/
                // SubProg GenerateUserRoutines pc: 1680 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1682 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23451 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1686 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1688 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23451);
                _23452 = (object)*(((s1_ptr)_2)->base + 43);
                _23451 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1692 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1694 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1696 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23453 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1700 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1702 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23453);
                _23454 = (object)*(((s1_ptr)_2)->base + 45);
                _23453 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1706 op: PROC (27)
                Ref(_23452);
                RefDS(_55novalue_46106);
                Ref(_23454);
                _58SetBBType(_sp_44290, _23452, _55novalue_46106, _23454, 0);
                _23452 = NOVALUE;
                _23454 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1713 op: ELSE (23)
                goto L38; // [1713] 1742
                // SubProg GenerateUserRoutines pc: 1715 op: NOP1 (159)
L3C: // addr: 1716 pc: 1715 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1716 op: STARTLINE (58)

                /** c_decl.e:1720								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue, TYPE_OBJECT, 0)*/
                // SubProg GenerateUserRoutines pc: 1718 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1720 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23455 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1724 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1726 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23455);
                _23456 = (object)*(((s1_ptr)_2)->base + 43);
                _23455 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1730 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1732 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1734 op: PROC (27)
                Ref(_23456);
                RefDS(_55novalue_46106);
                _58SetBBType(_sp_44290, _23456, _55novalue_46106, 16, 0);
                _23456 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1741 op: NOP1 (159)
L38: // addr: 1742 pc: 1741 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1742 op: STARTLINE (58)

                /** c_decl.e:1723							sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 1744 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1746 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23457 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1750 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1752 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23457);
                _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44290)){
                    _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
                }
                _23457 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1758 op: STARTLINE (58)

                /** c_decl.e:1724						end for*/
                // SubProg GenerateUserRoutines pc: 1760 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44616;
                if (IS_ATOM_INT(_p_44616)) {
                    _p_44616 = _p_44616 + 1;
                    if ((object)((uintptr_t)_p_44616 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44616 = NewDouble((eudouble)_p_44616);
                    }
                }
                else {
                    _p_44616 = binary_op_a(PLUS, _p_44616, 1);
                }
                DeRef(_0);
                goto L35; // [1760] 1421
L36: // addr: 1765 pc: 1760 sub: 44286 op: 54
                ;
                DeRef(_p_44616);
            }
            // SubProg GenerateUserRoutines pc: 1765 op: STARTLINE (58)

            /** c_decl.e:1727						call_proc(Execute_id, {s})*/
            // SubProg GenerateUserRoutines pc: 1767 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1769 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t*)_2)[1] = _s_44289;
            _23459 = MAKE_SEQ(_1);
            // SubProg GenerateUserRoutines pc: 1773 op: CALL_PROC (136)
            _1 = (object)SEQ_PTR(_23459);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_36Execute_id_16523].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1)
                                 );
            DeRefDS(_23459);
            _23459 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1776 op: STARTLINE (58)

            /** c_decl.e:1729						c_puts("    ;\n}\n")*/
            // SubProg GenerateUserRoutines pc: 1778 op: PROC (27)
            RefDS(_23460);
            _55c_puts(_23460);
            // SubProg GenerateUserRoutines pc: 1781 op: STARTLINE (58)

            /** c_decl.e:1730						if TUNIX and dll_option and is_exported( s ) then*/
            // SubProg GenerateUserRoutines pc: 1783 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1785 op: SC1_AND (141)
            if (_41TUNIX_21214 == 0) {
                _23461 = 0;
                goto L3D; // [1785] 1795
            }
            // SubProg GenerateUserRoutines pc: 1789 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1791 op: SC2_AND (142)
            _23461 = (_58dll_option_42086 != 0);
            // SubProg GenerateUserRoutines pc: 1794 op: NOP1 (159)
L3D: // addr: 1795 pc: 1794 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 1795 op: SC1_AND_IF (146)
            if (_23461 == 0) {
                goto L3E; // [1795] 2118
            }
            // SubProg GenerateUserRoutines pc: 1799 op: PROC (27)
            _23463 = _58is_exported(_s_44289);
            // SubProg GenerateUserRoutines pc: 1803 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 1804 op: IF (20)
            if (_23463 == 0) {
                DeRef(_23463);
                _23463 = NOVALUE;
                goto L3E; // [1804] 2118
            }
            else {
                if (!IS_ATOM_INT(_23463) && DBL_PTR(_23463)->dbl == 0.0){
                    DeRef(_23463);
                    _23463 = NOVALUE;
                    goto L3E; // [1804] 2118
                }
                DeRef(_23463);
                _23463 = NOVALUE;
            }
            DeRef(_23463);
            _23463 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1807 op: STARTLINE (58)

            /** c_decl.e:1732							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 1809 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1811 op: ASSIGN (18)
            _58LeftSym_42083 = _13TRUE_452;
            // SubProg GenerateUserRoutines pc: 1814 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 1816 op: STARTLINE (58)

            /** c_decl.e:1733							if TOSX then*/
            // SubProg GenerateUserRoutines pc: 1818 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1820 op: IF (20)
            if (_41TOSX_21218 == 0)
            {
                goto L3F; // [1820] 2080
            }
            else{
            }
            // SubProg GenerateUserRoutines pc: 1823 op: STARTLINE (58)

            /** c_decl.e:1737								c_stmt0( ret_type & SymTab[s][S_NAME] & " (" )*/
            // SubProg GenerateUserRoutines pc: 1825 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 1827 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1829 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23464 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1833 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1835 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23464);
            if (!IS_ATOM_INT(_36S_NAME_16091)){
                _23465 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
            }
            else{
                _23465 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
            }
            _23464 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1839 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _23466;
                concat_list[1] = _23465;
                concat_list[2] = _ret_type_44422;
                Concat_N((object_ptr)&_23467, concat_list, 3);
            }
            _23465 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1845 op: PROC (27)
            _58c_stmt0(_23467);
            _23467 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1848 op: STARTLINE (58)

            /** c_decl.e:1739								sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1850 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1852 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23468 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1856 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1858 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23468);
            _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44290)){
                _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
            }
            _23468 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1864 op: STARTLINE (58)

            /** c_decl.e:1740								for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 1866 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1868 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23470 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1872 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1874 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23470);
            if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                _23471 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
            }
            else{
                _23471 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
            }
            _23470 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1878 op: FOR (21)
            {
                object _p_44737;
                _p_44737 = 1;
L40: // addr: 1885 pc: 1878 sub: 44286 op: 21
                if (binary_op_a(GREATER, _p_44737, _23471)){
                    goto L41; // [1878] 1954
                }
                // SubProg GenerateUserRoutines pc: 1885 op: STARTLINE (58)

                /** c_decl.e:1741									c_puts("int _")*/
                // SubProg GenerateUserRoutines pc: 1887 op: PROC (27)
                RefDS(_23472);
                _55c_puts(_23472);
                // SubProg GenerateUserRoutines pc: 1890 op: STARTLINE (58)

                /** c_decl.e:1742									c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 1892 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1894 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23473 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1898 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1900 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23473);
                if (!IS_ATOM_INT(_36S_NAME_16091)){
                    _23474 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
                }
                else{
                    _23474 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
                }
                _23473 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1904 op: PROC (27)
                Ref(_23474);
                _55c_puts(_23474);
                _23474 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1907 op: STARTLINE (58)

                /** c_decl.e:1743									if p != SymTab[s][S_NUM_ARGS] then*/
                // SubProg GenerateUserRoutines pc: 1909 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1911 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23475 = (object)*(((s1_ptr)_2)->base + _s_44289);
                // SubProg GenerateUserRoutines pc: 1915 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1917 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23475);
                if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                    _23476 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
                }
                else{
                    _23476 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
                }
                _23475 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1921 op: NOTEQ_IFW (105)
                if (binary_op_a(EQUALS, _p_44737, _23476)){
                    _23476 = NOVALUE;
                    goto L42; // [1921] 1931
                }
                _23476 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1925 op: STARTLINE (58)

                /** c_decl.e:1744										c_puts(", ")*/
                // SubProg GenerateUserRoutines pc: 1927 op: PROC (27)
                RefDS(_23377);
                _55c_puts(_23377);
                // SubProg GenerateUserRoutines pc: 1930 op: NOP1 (159)
L42: // addr: 1931 pc: 1930 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 1931 op: STARTLINE (58)

                /** c_decl.e:1746									sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 1933 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1935 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23478 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 1939 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1941 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23478);
                _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44290)){
                    _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
                }
                _23478 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1947 op: STARTLINE (58)

                /** c_decl.e:1747								end for*/
                // SubProg GenerateUserRoutines pc: 1949 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44737;
                if (IS_ATOM_INT(_p_44737)) {
                    _p_44737 = _p_44737 + 1;
                    if ((object)((uintptr_t)_p_44737 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44737 = NewDouble((eudouble)_p_44737);
                    }
                }
                else {
                    _p_44737 = binary_op_a(PLUS, _p_44737, 1);
                }
                DeRef(_0);
                goto L40; // [1949] 1885
L41: // addr: 1954 pc: 1949 sub: 44286 op: 54
                ;
                DeRef(_p_44737);
            }
            // SubProg GenerateUserRoutines pc: 1954 op: STARTLINE (58)

            /** c_decl.e:1749								c_puts( ") {\n")*/
            // SubProg GenerateUserRoutines pc: 1956 op: PROC (27)
            RefDS(_23480);
            _55c_puts(_23480);
            // SubProg GenerateUserRoutines pc: 1959 op: STARTLINE (58)

            /** c_decl.e:1750								c_stmt("    return @(", s)*/
            // SubProg GenerateUserRoutines pc: 1961 op: PROC (27)
            RefDS(_23481);
            _58c_stmt(_23481, _s_44289, 0);
            // SubProg GenerateUserRoutines pc: 1966 op: STARTLINE (58)

            /** c_decl.e:1751								sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1968 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1970 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23482 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1974 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1976 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23482);
            _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44290)){
                _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
            }
            _23482 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1982 op: STARTLINE (58)

            /** c_decl.e:1752								for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 1984 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1986 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23484 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 1990 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1992 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23484);
            if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                _23485 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
            }
            else{
                _23485 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
            }
            _23484 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1996 op: FOR (21)
            {
                object _p_44768;
                _p_44768 = 1;
L43: // addr: 2003 pc: 1996 sub: 44286 op: 21
                if (binary_op_a(GREATER, _p_44768, _23485)){
                    goto L44; // [1996] 2072
                }
                // SubProg GenerateUserRoutines pc: 2003 op: STARTLINE (58)

                /** c_decl.e:1753									c_puts("_")*/
                // SubProg GenerateUserRoutines pc: 2005 op: PROC (27)
                RefDS(_22005);
                _55c_puts(_22005);
                // SubProg GenerateUserRoutines pc: 2008 op: STARTLINE (58)

                /** c_decl.e:1754									c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 2010 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2012 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23486 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 2016 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2018 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23486);
                if (!IS_ATOM_INT(_36S_NAME_16091)){
                    _23487 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
                }
                else{
                    _23487 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
                }
                _23486 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 2022 op: PROC (27)
                Ref(_23487);
                _55c_puts(_23487);
                _23487 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 2025 op: STARTLINE (58)

                /** c_decl.e:1755									if p != SymTab[s][S_NUM_ARGS] then*/
                // SubProg GenerateUserRoutines pc: 2027 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2029 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23488 = (object)*(((s1_ptr)_2)->base + _s_44289);
                // SubProg GenerateUserRoutines pc: 2033 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2035 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23488);
                if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
                    _23489 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
                }
                else{
                    _23489 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
                }
                _23488 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 2039 op: NOTEQ_IFW (105)
                if (binary_op_a(EQUALS, _p_44768, _23489)){
                    _23489 = NOVALUE;
                    goto L45; // [2039] 2049
                }
                _23489 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 2043 op: STARTLINE (58)

                /** c_decl.e:1756										c_puts(", ")*/
                // SubProg GenerateUserRoutines pc: 2045 op: PROC (27)
                RefDS(_23377);
                _55c_puts(_23377);
                // SubProg GenerateUserRoutines pc: 2048 op: NOP1 (159)
L45: // addr: 2049 pc: 2048 sub: 44286 op: 159
                // SubProg GenerateUserRoutines pc: 2049 op: STARTLINE (58)

                /** c_decl.e:1758									sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 2051 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2053 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_37SymTab_15405);
                _23491 = (object)*(((s1_ptr)_2)->base + _sp_44290);
                // SubProg GenerateUserRoutines pc: 2057 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 2059 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23491);
                _sp_44290 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44290)){
                    _sp_44290 = (object)DBL_PTR(_sp_44290)->dbl;
                }
                _23491 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 2065 op: STARTLINE (58)

                /** c_decl.e:1759								end for*/
                // SubProg GenerateUserRoutines pc: 2067 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44768;
                if (IS_ATOM_INT(_p_44768)) {
                    _p_44768 = _p_44768 + 1;
                    if ((object)((uintptr_t)_p_44768 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44768 = NewDouble((eudouble)_p_44768);
                    }
                }
                else {
                    _p_44768 = binary_op_a(PLUS, _p_44768, 1);
                }
                DeRef(_0);
                goto L43; // [2067] 2003
L44: // addr: 2072 pc: 2067 sub: 44286 op: 54
                ;
                DeRef(_p_44768);
            }
            // SubProg GenerateUserRoutines pc: 2072 op: STARTLINE (58)

            /** c_decl.e:1761								c_puts( ");\n}\n" )	*/
            // SubProg GenerateUserRoutines pc: 2074 op: PROC (27)
            RefDS(_23493);
            _55c_puts(_23493);
            // SubProg GenerateUserRoutines pc: 2077 op: ELSE (23)
            goto L46; // [2077] 2108
            // SubProg GenerateUserRoutines pc: 2079 op: NOP1 (159)
L3F: // addr: 2080 pc: 2079 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 2080 op: STARTLINE (58)

            /** c_decl.e:1763								c_stmt( ret_type & SymTab[s][S_NAME] & "() __attribute__ ((alias (\"@\")));\n", s )*/
            // SubProg GenerateUserRoutines pc: 2082 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 2084 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2086 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_37SymTab_15405);
            _23494 = (object)*(((s1_ptr)_2)->base + _s_44289);
            // SubProg GenerateUserRoutines pc: 2090 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2092 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23494);
            if (!IS_ATOM_INT(_36S_NAME_16091)){
                _23495 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
            }
            else{
                _23495 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
            }
            _23494 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2096 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _23496;
                concat_list[1] = _23495;
                concat_list[2] = _ret_type_44422;
                Concat_N((object_ptr)&_23497, concat_list, 3);
            }
            _23495 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2102 op: PROC (27)
            _58c_stmt(_23497, _s_44289, 0);
            _23497 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2107 op: NOP1 (159)
L46: // addr: 2108 pc: 2107 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 2108 op: STARTLINE (58)

            /** c_decl.e:1765							LeftSym = FALSE*/
            // SubProg GenerateUserRoutines pc: 2110 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2112 op: ASSIGN (18)
            _58LeftSym_42083 = _13FALSE_450;
            // SubProg GenerateUserRoutines pc: 2115 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 2117 op: NOP1 (159)
L3E: // addr: 2118 pc: 2117 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 2118 op: STARTLINE (58)

            /** c_decl.e:1767						c_puts("\n\n" )*/
            // SubProg GenerateUserRoutines pc: 2120 op: PROC (27)
            RefDS(_22077);
            _55c_puts(_22077);
            // SubProg GenerateUserRoutines pc: 2123 op: NOP1 (159)
L14: // addr: 2124 pc: 2123 sub: 44286 op: 159
            // SubProg GenerateUserRoutines pc: 2124 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ret_type_44422
            DeRefi(_ret_type_44422);
            _ret_type_44422 = NOVALUE;

// block var s_scope_44431

// block var s_file_44434

// block var names_44545
            DeRef(_names_44545);
            _names_44545 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2126 op: STARTLINE (58)

            /** c_decl.e:1769				end for*/
            // SubProg GenerateUserRoutines pc: 2128 op: ENDFOR_INT_UP1 (54)
            _routine_no_44367 = _routine_no_44367 + 1;
            goto L12; // [2128] 359
L13: // addr: 2133 pc: 2128 sub: 44286 op: 54
            ;
        }
        // SubProg GenerateUserRoutines pc: 2133 op: NOP1 (159)
L8: // addr: 2134 pc: 2133 sub: 44286 op: 159
        // SubProg GenerateUserRoutines pc: 2134 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var these_routines_44364
        DeRef(_these_routines_44364);
        _these_routines_44364 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 2136 op: STARTLINE (58)

        /** c_decl.e:1771		end for*/
        // SubProg GenerateUserRoutines pc: 2138 op: ENDFOR_INT_UP1 (54)
        _file_no_44313 = _file_no_44313 + 1;
        goto L5; // [2138] 85
L6: // addr: 2143 pc: 2138 sub: 44286 op: 54
        ;
    }
    // SubProg GenerateUserRoutines pc: 2143 op: STARTLINE (58)

    /** c_decl.e:1772	end procedure*/
    // SubProg GenerateUserRoutines pc: 2145 op: RETURNP (29)

// Exiting block BLOCK: GenerateUserRoutines

// block var s_44289

// block var sp_44290

// block var next_c_char_44291

// block var q_44292

// block var temps_44293

// block var buff_44294
    DeRefi(_buff_44294);

// block var base_name_44295
    DeRef(_base_name_44295);

// block var long_c_file_44296
    DeRef(_long_c_file_44296);

// block var c_file_44297
    DeRef(_c_file_44297);
    _23485 = NOVALUE;
    DeRef(_23402);
    _23402 = NOVALUE;
    DeRef(_23322);
    _23322 = NOVALUE;
    DeRef(_23314);
    _23314 = NOVALUE;
    DeRef(_23285);
    _23285 = NOVALUE;
    _23320 = NOVALUE;
    _23424 = NOVALUE;
    DeRef(_23310);
    _23310 = NOVALUE;
    DeRef(_23355);
    _23355 = NOVALUE;
    _23370 = NOVALUE;
    DeRef(_23353);
    _23353 = NOVALUE;
    DeRef(_23349);
    _23349 = NOVALUE;
    _23399 = NOVALUE;
    _23471 = NOVALUE;
    DeRef(_23351);
    _23351 = NOVALUE;
    DeRef(_23276);
    _23276 = NOVALUE;
    DeRef(_23312);
    _23312 = NOVALUE;
    DeRef(_23347);
    _23347 = NOVALUE;
    DeRef(_23359);
    _23359 = NOVALUE;
    DeRef(_23317);
    _23317 = NOVALUE;
    DeRef(_23299);
    _23299 = NOVALUE;
    return;
    // SubProg GenerateUserRoutines pc: 2148 op: BADRETURNF (43)
    ;
}



// 0x0CC4433A
