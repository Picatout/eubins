// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _57get_eucompiledir()
{
    object _x_42148 = NOVALUE;
// skipping _22345  name type: 0
    object _22344 = NOVALUE; // 42169 22344
// skipping _22343  name type: 0
    object _22342 = NOVALUE; // 42166 22342
// skipping _22340  name type: 0
    object _22339 = NOVALUE; // 42161 22339
    object _22337 = NOVALUE; // 42157 22337
// skipping _22336  name type: 0
    object _22335 = NOVALUE; // 42153 22335
// skipping _22334  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_eucompiledir pc: 1 op: STARTLINE (58)

    /** c_decl.e:133		object x = getenv("EUCOMPILEDIR")*/
    // SubProg get_eucompiledir pc: 3 op: GETENV (91)
    DeRef(_x_42148);
    _x_42148 = EGetEnv(_22333);
    // SubProg get_eucompiledir pc: 6 op: STARTLINE (58)

    /** c_decl.e:134		if is_eudir_from_cmdline() then*/
    // SubProg get_eucompiledir pc: 8 op: PROC (27)
    _22335 = _7is_eudir_from_cmdline();
    // SubProg get_eucompiledir pc: 11 op: IF (20)
    if (_22335 == 0) {
        DeRef(_22335);
        _22335 = NOVALUE;
        goto L1; // [11] 20
    }
    else {
        if (!IS_ATOM_INT(_22335) && DBL_PTR(_22335)->dbl == 0.0){
            DeRef(_22335);
            _22335 = NOVALUE;
            goto L1; // [11] 20
        }
        DeRef(_22335);
        _22335 = NOVALUE;
    }
    DeRef(_22335);
    _22335 = NOVALUE;
    // SubProg get_eucompiledir pc: 14 op: STARTLINE (58)

    /** c_decl.e:135			x = get_eudir()*/
    // SubProg get_eucompiledir pc: 16 op: PROC (27)
    _0 = _x_42148;
    _x_42148 = _7get_eudir();
    DeRefi(_0);
    // SubProg get_eucompiledir pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 42146 op: 159
    // SubProg get_eucompiledir pc: 20 op: STARTLINE (58)

    /** c_decl.e:138		ifdef UNIX then*/
    // SubProg get_eucompiledir pc: 22 op: STARTLINE (58)

    /** c_decl.e:139			if equal(x, -1) then*/
    // SubProg get_eucompiledir pc: 24 op: EQUAL (153)
    if (_x_42148 == -1)
    _22337 = 1;
    else if (IS_ATOM_INT(_x_42148) && IS_ATOM_INT(-1))
    _22337 = 0;
    else
    _22337 = (compare(_x_42148, -1) == 0);
    // SubProg get_eucompiledir pc: 28 op: IF (20)
    if (_22337 == 0)
    {
        _22337 = NOVALUE;
        goto L2; // [28] 67
    }
    else{
        _22337 = NOVALUE;
    }
    // SubProg get_eucompiledir pc: 31 op: STARTLINE (58)

    /** c_decl.e:140				x = "/usr/local/share/euphoria"*/
    // SubProg get_eucompiledir pc: 33 op: ASSIGN (18)
    RefDS(_22338);
    DeRef(_x_42148);
    _x_42148 = _22338;
    // SubProg get_eucompiledir pc: 36 op: STARTLINE (58)

    /** c_decl.e:141				if not file_exists( x ) then*/
    // SubProg get_eucompiledir pc: 38 op: PROC (27)
    RefDS(_x_42148);
    _22339 = _16file_exists(_x_42148);
    // SubProg get_eucompiledir pc: 42 op: NOT_IFW (108)
    if (IS_ATOM_INT(_22339)) {
        if (_22339 != 0){
            DeRef(_22339);
            _22339 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    else {
        if (DBL_PTR(_22339)->dbl != 0.0){
            DeRef(_22339);
            _22339 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    DeRef(_22339);
    _22339 = NOVALUE;
    // SubProg get_eucompiledir pc: 45 op: STARTLINE (58)

    /** c_decl.e:144					x = "/usr/share/euphoria"*/
    // SubProg get_eucompiledir pc: 47 op: ASSIGN (18)
    RefDS(_22341);
    DeRefDSi(_x_42148);
    _x_42148 = _22341;
    // SubProg get_eucompiledir pc: 50 op: STARTLINE (58)

    /** c_decl.e:145					if not file_exists( x ) then*/
    // SubProg get_eucompiledir pc: 52 op: PROC (27)
    RefDS(_x_42148);
    _22342 = _16file_exists(_x_42148);
    // SubProg get_eucompiledir pc: 56 op: NOT_IFW (108)
    if (IS_ATOM_INT(_22342)) {
        if (_22342 != 0){
            DeRef(_22342);
            _22342 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    else {
        if (DBL_PTR(_22342)->dbl != 0.0){
            DeRef(_22342);
            _22342 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    DeRef(_22342);
    _22342 = NOVALUE;
    // SubProg get_eucompiledir pc: 59 op: STARTLINE (58)

    /** c_decl.e:146						x = -1*/
    // SubProg get_eucompiledir pc: 61 op: ASSIGN (18)
    DeRefDSi(_x_42148);
    _x_42148 = -1;
    // SubProg get_eucompiledir pc: 64 op: NOP1 (159)
L4: // addr: 65 pc: 64 sub: 42146 op: 159
    // SubProg get_eucompiledir pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 42146 op: 159
    // SubProg get_eucompiledir pc: 66 op: NOP1 (159)
L2: // addr: 67 pc: 66 sub: 42146 op: 159
    // SubProg get_eucompiledir pc: 67 op: STARTLINE (58)

    /** c_decl.e:152		if equal(x, -1) then*/
    // SubProg get_eucompiledir pc: 69 op: EQUAL (153)
    if (_x_42148 == -1)
    _22344 = 1;
    else if (IS_ATOM_INT(_x_42148) && IS_ATOM_INT(-1))
    _22344 = 0;
    else
    _22344 = (compare(_x_42148, -1) == 0);
    // SubProg get_eucompiledir pc: 73 op: IF (20)
    if (_22344 == 0)
    {
        _22344 = NOVALUE;
        goto L5; // [73] 82
    }
    else{
        _22344 = NOVALUE;
    }
    // SubProg get_eucompiledir pc: 76 op: STARTLINE (58)

    /** c_decl.e:153			x = get_eudir()*/
    // SubProg get_eucompiledir pc: 78 op: PROC (27)
    _0 = _x_42148;
    _x_42148 = _7get_eudir();
    DeRef(_0);
    // SubProg get_eucompiledir pc: 81 op: NOP1 (159)
L5: // addr: 82 pc: 81 sub: 42146 op: 159
    // SubProg get_eucompiledir pc: 82 op: STARTLINE (58)

    /** c_decl.e:156		return x*/
    // SubProg get_eucompiledir pc: 84 op: RETURNF (28)

// Exiting block BLOCK: get_eucompiledir
    return _x_42148;
    // SubProg get_eucompiledir pc: 88 op: BADRETURNF (43)
    ;
}


void _57NewBB(object _a_call_42174, object _mask_42175, object _sub_42177)
{
    object _s_42179 = NOVALUE;
    object _22377 = NOVALUE; // 42239 22377
    object _22376 = NOVALUE; // 42238 22376
// skipping _22375  name type: 0
    object _22374 = NOVALUE; // 42231 22374
    object _22373 = NOVALUE; // 42230 22373
// skipping _22372  name type: 0
    object _22371 = NOVALUE; // 42228 22371
    object _22370 = NOVALUE; // 42225 22370
    object _22369 = NOVALUE; // 42224 22369
    object _22368 = NOVALUE; // 42223 22368
    object _22367 = NOVALUE; // 42220 22367
    object _22366 = NOVALUE; // 42218 22366
    object _22365 = NOVALUE; // 42216 22365
    object _22364 = NOVALUE; // 42214 22364
    object _22363 = NOVALUE; // 42213 22363
    object _22362 = NOVALUE; // 42211 22362
    object _22361 = NOVALUE; // 42209 22361
    object _22360 = NOVALUE; // 42207 22360
    object _22359 = NOVALUE; // 42206 22359
    object _22358 = NOVALUE; // 42204 22358
    object _22357 = NOVALUE; // 42202 22357
    object _22356 = NOVALUE; // 42200 22356
    object _22355 = NOVALUE; // 42199 22355
    object _22354 = NOVALUE; // 42197 22354
    object _22353 = NOVALUE; // 42195 22353
    object _22352 = NOVALUE; // 42193 22352
    object _22351 = NOVALUE; // 42192 22351
    object _22350 = NOVALUE; // 42190 22350
    object _22349 = NOVALUE; // 42188 22349
// skipping _22348  name type: 0
    object _22347 = NOVALUE; // 42184 22347
    object _22346 = NOVALUE; // 42183 22346
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewBB pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewBB pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_mask_42175)) {
        _1 = (object)(DBL_PTR(_mask_42175)->dbl);
        DeRefDS(_mask_42175);
        _mask_42175 = _1;
    }
    // SubProg NewBB pc: 5 op: INTEGER_CHECK (96)
    // SubProg NewBB pc: 7 op: STARTLINE (58)

    /** c_decl.e:166		if a_call then*/
    // SubProg NewBB pc: 9 op: IF (20)
    if (_a_call_42174 == 0)
    {
        goto L1; // [9] 252
    }
    else{
    }
    // SubProg NewBB pc: 12 op: STARTLINE (58)

    /** c_decl.e:169			for i = 1 to length(BB_info) do*/
    // SubProg NewBB pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBB pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22346 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22346 = 1;
    }
    // SubProg NewBB pc: 19 op: FOR_I (125)
    {
        object _i_42182;
        _i_42182 = 1;
L2: // addr: 26 pc: 19 sub: 42172 op: 125
        if (_i_42182 > _22346){
            goto L3; // [19] 249
        }
        // SubProg NewBB pc: 26 op: STARTLINE (58)

        /** c_decl.e:170				s = BB_info[i][BB_VAR]*/
        // SubProg NewBB pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 30 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22347 = (object)*(((s1_ptr)_2)->base + _i_42182);
        // SubProg NewBB pc: 34 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22347);
        _s_42179 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_s_42179)){
            _s_42179 = (object)DBL_PTR(_s_42179)->dbl;
        }
        _22347 = NOVALUE;
        // SubProg NewBB pc: 40 op: STARTLINE (58)

        /** c_decl.e:171				if SymTab[s][S_MODE] = M_NORMAL and*/
        // SubProg NewBB pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22349 = (object)*(((s1_ptr)_2)->base + _s_42179);
        // SubProg NewBB pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22349);
        _22350 = (object)*(((s1_ptr)_2)->base + 3);
        _22349 = NOVALUE;
        // SubProg NewBB pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 56 op: EQUALS (3)
        if (IS_ATOM_INT(_22350)) {
            _22351 = (_22350 == 1);
        }
        else {
            _22351 = binary_op(EQUALS, _22350, 1);
        }
        _22350 = NOVALUE;
        // SubProg NewBB pc: 60 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_22351)) {
            if (_22351 == 0) {
                goto L4; // [60] 242
            }
        }
        else {
            if (DBL_PTR(_22351)->dbl == 0.0) {
                goto L4; // [60] 242
            }
        }
        // SubProg NewBB pc: 64 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 66 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22353 = (object)*(((s1_ptr)_2)->base + _s_42179);
        // SubProg NewBB pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22353);
        _22354 = (object)*(((s1_ptr)_2)->base + 4);
        _22353 = NOVALUE;
        // SubProg NewBB pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 78 op: EQUALS (3)
        if (IS_ATOM_INT(_22354)) {
            _22355 = (_22354 == 6);
        }
        else {
            _22355 = binary_op(EQUALS, _22354, 6);
        }
        _22354 = NOVALUE;
        // SubProg NewBB pc: 82 op: SC1_OR (143)
        if (IS_ATOM_INT(_22355)) {
            if (_22355 != 0) {
                DeRef(_22356);
                _22356 = 1;
                goto L5; // [82] 108
            }
        }
        else {
            if (DBL_PTR(_22355)->dbl != 0.0) {
                DeRef(_22356);
                _22356 = 1;
                goto L5; // [82] 108
            }
        }
        // SubProg NewBB pc: 86 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22357 = (object)*(((s1_ptr)_2)->base + _s_42179);
        // SubProg NewBB pc: 92 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 94 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22357);
        _22358 = (object)*(((s1_ptr)_2)->base + 4);
        _22357 = NOVALUE;
        // SubProg NewBB pc: 98 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 100 op: EQUALS (3)
        if (IS_ATOM_INT(_22358)) {
            _22359 = (_22358 == 5);
        }
        else {
            _22359 = binary_op(EQUALS, _22358, 5);
        }
        _22358 = NOVALUE;
        // SubProg NewBB pc: 104 op: SC2_OR (144)
        DeRef(_22356);
        if (IS_ATOM_INT(_22359))
        _22356 = (_22359 != 0);
        else
        _22356 = DBL_PTR(_22359)->dbl != 0.0;
        // SubProg NewBB pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 42172 op: 159
        // SubProg NewBB pc: 108 op: SC1_OR (143)
        if (_22356 != 0) {
            _22360 = 1;
            goto L6; // [108] 134
        }
        // SubProg NewBB pc: 112 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 114 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22361 = (object)*(((s1_ptr)_2)->base + _s_42179);
        // SubProg NewBB pc: 118 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 120 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22361);
        _22362 = (object)*(((s1_ptr)_2)->base + 4);
        _22361 = NOVALUE;
        // SubProg NewBB pc: 124 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 126 op: EQUALS (3)
        if (IS_ATOM_INT(_22362)) {
            _22363 = (_22362 == 11);
        }
        else {
            _22363 = binary_op(EQUALS, _22362, 11);
        }
        _22362 = NOVALUE;
        // SubProg NewBB pc: 130 op: SC2_OR (144)
        if (IS_ATOM_INT(_22363))
        _22360 = (_22363 != 0);
        else
        _22360 = DBL_PTR(_22363)->dbl != 0.0;
        // SubProg NewBB pc: 133 op: NOP1 (159)
L6: // addr: 134 pc: 133 sub: 42172 op: 159
        // SubProg NewBB pc: 134 op: SC1_OR (143)
        if (_22360 != 0) {
            DeRef(_22364);
            _22364 = 1;
            goto L7; // [134] 160
        }
        // SubProg NewBB pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 140 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22365 = (object)*(((s1_ptr)_2)->base + _s_42179);
        // SubProg NewBB pc: 144 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 146 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22365);
        _22366 = (object)*(((s1_ptr)_2)->base + 4);
        _22365 = NOVALUE;
        // SubProg NewBB pc: 150 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 152 op: EQUALS (3)
        if (IS_ATOM_INT(_22366)) {
            _22367 = (_22366 == 13);
        }
        else {
            _22367 = binary_op(EQUALS, _22366, 13);
        }
        _22366 = NOVALUE;
        // SubProg NewBB pc: 156 op: SC2_OR (144)
        if (IS_ATOM_INT(_22367))
        _22364 = (_22367 != 0);
        else
        _22364 = DBL_PTR(_22367)->dbl != 0.0;
        // SubProg NewBB pc: 159 op: NOP1 (159)
L7: // addr: 160 pc: 159 sub: 42172 op: 159
        // SubProg NewBB pc: 160 op: NOP1 (159)
        // SubProg NewBB pc: 161 op: IF (20)
        if (_22364 == 0)
        {
            _22364 = NOVALUE;
            goto L4; // [161] 242
        }
        else{
            _22364 = NOVALUE;
        }
        // SubProg NewBB pc: 164 op: STARTLINE (58)

        /** c_decl.e:176					  if and_bits(mask, power(2, remainder(s, E_SIZE))) then*/
        // SubProg NewBB pc: 166 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 168 op: REMAINDER (71)
        _22368 = (_s_42179 % 29);
        // SubProg NewBB pc: 172 op: POWER (72)
        _22369 = power(2, _22368);
        _22368 = NOVALUE;
        // SubProg NewBB pc: 176 op: AND_BITS (56)
        if (IS_ATOM_INT(_22369)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_mask_42175 & (uintptr_t)_22369;
                 _22370 = MAKE_UINT(tu);
            }
        }
        else {
            temp_d.dbl = (eudouble)_mask_42175;
            _22370 = Dand_bits(&temp_d, DBL_PTR(_22369));
        }
        DeRef(_22369);
        _22369 = NOVALUE;
        // SubProg NewBB pc: 180 op: IF (20)
        if (_22370 == 0) {
            DeRef(_22370);
            _22370 = NOVALUE;
            goto L8; // [180] 241
        }
        else {
            if (!IS_ATOM_INT(_22370) && DBL_PTR(_22370)->dbl == 0.0){
                DeRef(_22370);
                _22370 = NOVALUE;
                goto L8; // [180] 241
            }
            DeRef(_22370);
            _22370 = NOVALUE;
        }
        DeRef(_22370);
        _22370 = NOVALUE;
        // SubProg NewBB pc: 183 op: STARTLINE (58)

        /** c_decl.e:177						  if mask = E_ALL_EFFECT or s < sub then*/
        // SubProg NewBB pc: 185 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 187 op: EQUALS (3)
        _22371 = (_mask_42175 == 1073741823);
        // SubProg NewBB pc: 191 op: SC1_OR_IF (147)
        if (_22371 != 0) {
            goto L9; // [191] 204
        }
        // SubProg NewBB pc: 195 op: LESS (1)
        _22373 = (_s_42179 < _sub_42177);
        // SubProg NewBB pc: 199 op: NOP1 (159)
        // SubProg NewBB pc: 200 op: IF (20)
        if (_22373 == 0)
        {
            DeRef(_22373);
            _22373 = NOVALUE;
            goto LA; // [200] 240
        }
        else{
            DeRef(_22373);
            _22373 = NOVALUE;
        }
        // SubProg NewBB pc: 203 op: NOP1 (159)
L9: // addr: 204 pc: 203 sub: 42172 op: 159
        // SubProg NewBB pc: 204 op: STARTLINE (58)

        /** c_decl.e:178							  BB_info[i][BB_TYPE..BB_OBJ] =*/
        // SubProg NewBB pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg NewBB pc: 208 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _57BB_info_42126 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_42182 + ((s1_ptr)_2)->base);
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
        _22376 = MAKE_SEQ(_1);
        // SubProg NewBB pc: 227 op: RIGHT_BRACE_N (31)
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 0;
        ((intptr_t*)_2)[2] = 0;
        Ref(_5NOVALUE_12331);
        ((intptr_t*)_2)[3] = _5NOVALUE_12331;
        ((intptr_t*)_2)[4] = _22376;
        _22377 = MAKE_SEQ(_1);
        _22376 = NOVALUE;
        // SubProg NewBB pc: 234 op: PASSIGN_SLICE (163)
        assign_slice_seq = (s1_ptr *)_3;
        AssignSlice(2, 5, _22377);
        DeRefDS(_22377);
        _22377 = NOVALUE;
        // SubProg NewBB pc: 239 op: NOP1 (159)
LA: // addr: 240 pc: 239 sub: 42172 op: 159
        // SubProg NewBB pc: 240 op: NOP1 (159)
L8: // addr: 241 pc: 240 sub: 42172 op: 159
        // SubProg NewBB pc: 241 op: NOP1 (159)
L4: // addr: 242 pc: 241 sub: 42172 op: 159
        // SubProg NewBB pc: 242 op: STARTLINE (58)

        /** c_decl.e:183			end for*/
        // SubProg NewBB pc: 244 op: ENDFOR_INT_UP1 (54)
        _i_42182 = _i_42182 + 1;
        goto L2; // [244] 26
L3: // addr: 249 pc: 244 sub: 42172 op: 54
        ;
    }
    // SubProg NewBB pc: 249 op: ELSE (23)
    goto LB; // [249] 260
    // SubProg NewBB pc: 251 op: NOP1 (159)
L1: // addr: 252 pc: 251 sub: 42172 op: 159
    // SubProg NewBB pc: 252 op: STARTLINE (58)

    /** c_decl.e:186			BB_info = {}*/
    // SubProg NewBB pc: 254 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_57BB_info_42126);
    _57BB_info_42126 = _21958;
    // SubProg NewBB pc: 257 op: SEQUENCE_CHECK (97)
    // SubProg NewBB pc: 259 op: NOP1 (159)
LB: // addr: 260 pc: 259 sub: 42172 op: 159
    // SubProg NewBB pc: 260 op: STARTLINE (58)

    /** c_decl.e:188	end procedure*/
    // SubProg NewBB pc: 262 op: RETURNP (29)

// Exiting block BLOCK: NewBB

// block var a_call_42174

// block var mask_42175

// block var sub_42177

// block var s_42179
    DeRef(_22367);
    _22367 = NOVALUE;
    DeRef(_22351);
    _22351 = NOVALUE;
    DeRef(_22374);
    _22374 = NOVALUE;
    DeRef(_22359);
    _22359 = NOVALUE;
    DeRef(_22371);
    _22371 = NOVALUE;
    DeRef(_22355);
    _22355 = NOVALUE;
    DeRef(_22363);
    _22363 = NOVALUE;
    return;
    // SubProg NewBB pc: 265 op: BADRETURNF (43)
    ;
}


object _57BB_var_obj(object _var_42247)
{
    object _bbi_42248 = NOVALUE;
    object _22388 = NOVALUE; // 42267 22388
// skipping _22387  name type: 0
    object _22386 = NOVALUE; // 42264 22386
// skipping _22385  name type: 0
    object _22384 = NOVALUE; // 42260 22384
    object _22383 = NOVALUE; // 42258 22383
// skipping _22382  name type: 0
    object _22381 = NOVALUE; // 42254 22381
// skipping _22380  name type: 0
    object _22379 = NOVALUE; // 42251 22379
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BB_var_obj pc: 1 op: INTEGER_CHECK (96)
    // SubProg BB_var_obj pc: 3 op: STARTLINE (58)

    /** c_decl.e:196		for i = length(BB_info) to 1 by -1 do*/
    // SubProg BB_var_obj pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_obj pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22379 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22379 = 1;
    }
    // SubProg BB_var_obj pc: 10 op: FOR_I (125)
    {
        object _i_42250;
        _i_42250 = _22379;
L1: // addr: 17 pc: 10 sub: 42245 op: 125
        if (_i_42250 < 1){
            goto L2; // [10] 99
        }
        // SubProg BB_var_obj pc: 17 op: STARTLINE (58)

        /** c_decl.e:197			bbi = BB_info[i]*/
        // SubProg BB_var_obj pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 21 op: RHS_SUBS (25)
        DeRef(_bbi_42248);
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _bbi_42248 = (object)*(((s1_ptr)_2)->base + _i_42250);
        Ref(_bbi_42248);
        // SubProg BB_var_obj pc: 25 op: STARTLINE (58)

        /** c_decl.e:198			if bbi[BB_VAR] != var then*/
        // SubProg BB_var_obj pc: 27 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42248);
        _22381 = (object)*(((s1_ptr)_2)->base + 1);
        // SubProg BB_var_obj pc: 31 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22381, _var_42247)){
            _22381 = NOVALUE;
            goto L3; // [31] 40
        }
        _22381 = NOVALUE;
        // SubProg BB_var_obj pc: 35 op: STARTLINE (58)

        /** c_decl.e:199				continue*/
        // SubProg BB_var_obj pc: 37 op: ELSE (23)
        goto L4; // [37] 94
        // SubProg BB_var_obj pc: 39 op: NOP1 (159)
L3: // addr: 40 pc: 39 sub: 42245 op: 159
        // SubProg BB_var_obj pc: 40 op: STARTLINE (58)

        /** c_decl.e:202			if SymTab[var][S_MODE] != M_NORMAL then*/
        // SubProg BB_var_obj pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 44 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22383 = (object)*(((s1_ptr)_2)->base + _var_42247);
        // SubProg BB_var_obj pc: 48 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 50 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22383);
        _22384 = (object)*(((s1_ptr)_2)->base + 3);
        _22383 = NOVALUE;
        // SubProg BB_var_obj pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 56 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22384, 1)){
            _22384 = NOVALUE;
            goto L5; // [56] 65
        }
        _22384 = NOVALUE;
        // SubProg BB_var_obj pc: 60 op: STARTLINE (58)

        /** c_decl.e:203				continue*/
        // SubProg BB_var_obj pc: 62 op: ELSE (23)
        goto L4; // [62] 94
        // SubProg BB_var_obj pc: 64 op: NOP1 (159)
L5: // addr: 65 pc: 64 sub: 42245 op: 159
        // SubProg BB_var_obj pc: 65 op: STARTLINE (58)

        /** c_decl.e:206			if bbi[BB_TYPE] != TYPE_INTEGER then*/
        // SubProg BB_var_obj pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42248);
        _22386 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg BB_var_obj pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_obj pc: 73 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22386, 1)){
            _22386 = NOVALUE;
            goto L6; // [73] 82
        }
        _22386 = NOVALUE;
        // SubProg BB_var_obj pc: 77 op: STARTLINE (58)

        /** c_decl.e:207				exit*/
        // SubProg BB_var_obj pc: 79 op: EXIT (61)
        goto L2; // [79] 99
        // SubProg BB_var_obj pc: 81 op: NOP1 (159)
L6: // addr: 82 pc: 81 sub: 42245 op: 159
        // SubProg BB_var_obj pc: 82 op: STARTLINE (58)

        /** c_decl.e:210			return bbi[BB_OBJ]*/
        // SubProg BB_var_obj pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_bbi_42248);
        _22388 = (object)*(((s1_ptr)_2)->base + 5);
        // SubProg BB_var_obj pc: 88 op: RETURNF (28)
        Ref(_22388);

// Exiting block BLOCK: BB_var_obj

// block var var_42247

// block var bbi_42248
        DeRef(_bbi_42248);
        return _22388;
        // SubProg BB_var_obj pc: 92 op: STARTLINE (58)

        /** c_decl.e:211		end for*/
        // SubProg BB_var_obj pc: 94 op: ENDFOR_GENERAL (39)
L4: // addr: 94 pc: 94 sub: 42245 op: 39
        _i_42250 = _i_42250 + -1;
        goto L1; // [94] 17
L2: // addr: 99 pc: 94 sub: 42245 op: 39
        ;
    }
    // SubProg BB_var_obj pc: 99 op: STARTLINE (58)

    /** c_decl.e:212		return BB_def_values*/
    // SubProg BB_var_obj pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_obj pc: 103 op: RETURNF (28)
    RefDS(_57BB_def_values_42241);

// Exiting block BLOCK: BB_var_obj

// block var var_42247

// block var bbi_42248
    DeRef(_bbi_42248);
    _22388 = NOVALUE;
    return _57BB_def_values_42241;
    // SubProg BB_var_obj pc: 107 op: BADRETURNF (43)
    ;
}


object _57BB_var_type(object _var_42270)
{
    object _22404 = NOVALUE; // 42296 22404
    object _22403 = NOVALUE; // 42295 22403
// skipping _22402  name type: 0
    object _22401 = NOVALUE; // 42290 22401
    object _22400 = NOVALUE; // 42289 22400
    object _22398 = NOVALUE; // 42286 22398
    object _22397 = NOVALUE; // 42284 22397
    object _22396 = NOVALUE; // 42282 22396
    object _22395 = NOVALUE; // 42281 22395
    object _22394 = NOVALUE; // 42280 22394
    object _22393 = NOVALUE; // 42278 22393
    object _22392 = NOVALUE; // 42277 22392
    object _22391 = NOVALUE; // 42276 22391
    object _22390 = NOVALUE; // 42275 22390
    object _22389 = NOVALUE; // 42273 22389
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg BB_var_type pc: 1 op: INTEGER_CHECK (96)
    // SubProg BB_var_type pc: 3 op: STARTLINE (58)

    /** c_decl.e:218		for i = length(BB_info) to 1 by -1 do*/
    // SubProg BB_var_type pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_type pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22389 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22389 = 1;
    }
    // SubProg BB_var_type pc: 10 op: FOR_I (125)
    {
        object _i_42272;
        _i_42272 = _22389;
L1: // addr: 17 pc: 10 sub: 42268 op: 125
        if (_i_42272 < 1){
            goto L2; // [10] 125
        }
        // SubProg BB_var_type pc: 17 op: STARTLINE (58)

        /** c_decl.e:219			if BB_info[i][BB_VAR] = var and*/
        // SubProg BB_var_type pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22390 = (object)*(((s1_ptr)_2)->base + _i_42272);
        // SubProg BB_var_type pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22390);
        _22391 = (object)*(((s1_ptr)_2)->base + 1);
        _22390 = NOVALUE;
        // SubProg BB_var_type pc: 29 op: EQUALS (3)
        if (IS_ATOM_INT(_22391)) {
            _22392 = (_22391 == _var_42270);
        }
        else {
            _22392 = binary_op(EQUALS, _22391, _var_42270);
        }
        _22391 = NOVALUE;
        // SubProg BB_var_type pc: 33 op: SC1_AND_IF (146)
        if (IS_ATOM_INT(_22392)) {
            if (_22392 == 0) {
                goto L3; // [33] 118
            }
        }
        else {
            if (DBL_PTR(_22392)->dbl == 0.0) {
                goto L3; // [33] 118
            }
        }
        // SubProg BB_var_type pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 41 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22394 = (object)*(((s1_ptr)_2)->base + _i_42272);
        // SubProg BB_var_type pc: 45 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22394);
        _22395 = (object)*(((s1_ptr)_2)->base + 1);
        _22394 = NOVALUE;
        // SubProg BB_var_type pc: 49 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!IS_ATOM_INT(_22395)){
            _22396 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22395)->dbl));
        }
        else{
            _22396 = (object)*(((s1_ptr)_2)->base + _22395);
        }
        // SubProg BB_var_type pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22396);
        _22397 = (object)*(((s1_ptr)_2)->base + 3);
        _22396 = NOVALUE;
        // SubProg BB_var_type pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 61 op: EQUALS (3)
        if (IS_ATOM_INT(_22397)) {
            _22398 = (_22397 == 1);
        }
        else {
            _22398 = binary_op(EQUALS, _22397, 1);
        }
        _22397 = NOVALUE;
        // SubProg BB_var_type pc: 65 op: NOP1 (159)
        // SubProg BB_var_type pc: 66 op: IF (20)
        if (_22398 == 0) {
            DeRef(_22398);
            _22398 = NOVALUE;
            goto L3; // [66] 118
        }
        else {
            if (!IS_ATOM_INT(_22398) && DBL_PTR(_22398)->dbl == 0.0){
                DeRef(_22398);
                _22398 = NOVALUE;
                goto L3; // [66] 118
            }
            DeRef(_22398);
            _22398 = NOVALUE;
        }
        DeRef(_22398);
        _22398 = NOVALUE;
        // SubProg BB_var_type pc: 69 op: STARTLINE (58)

        /** c_decl.e:221				ifdef DEBUG then*/
        // SubProg BB_var_type pc: 71 op: STARTLINE (58)

        /** c_decl.e:228				if BB_info[i][BB_TYPE] = TYPE_NULL then  -- var has only been read*/
        // SubProg BB_var_type pc: 73 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 75 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22400 = (object)*(((s1_ptr)_2)->base + _i_42272);
        // SubProg BB_var_type pc: 79 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22400);
        _22401 = (object)*(((s1_ptr)_2)->base + 2);
        _22400 = NOVALUE;
        // SubProg BB_var_type pc: 83 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 85 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _22401, 0)){
            _22401 = NOVALUE;
            goto L4; // [85] 100
        }
        _22401 = NOVALUE;
        // SubProg BB_var_type pc: 89 op: STARTLINE (58)

        /** c_decl.e:229					return TYPE_OBJECT*/
        // SubProg BB_var_type pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 93 op: RETURNF (28)

// Exiting block BLOCK: BB_var_type

// block var var_42270
        _22395 = NOVALUE;
        DeRef(_22392);
        _22392 = NOVALUE;
        return 16;
        // SubProg BB_var_type pc: 97 op: ELSE (23)
        goto L5; // [97] 117
        // SubProg BB_var_type pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 42268 op: 159
        // SubProg BB_var_type pc: 100 op: STARTLINE (58)

        /** c_decl.e:231					return BB_info[i][BB_TYPE]*/
        // SubProg BB_var_type pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg BB_var_type pc: 104 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22403 = (object)*(((s1_ptr)_2)->base + _i_42272);
        // SubProg BB_var_type pc: 108 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22403);
        _22404 = (object)*(((s1_ptr)_2)->base + 2);
        _22403 = NOVALUE;
        // SubProg BB_var_type pc: 112 op: RETURNF (28)
        Ref(_22404);

// Exiting block BLOCK: BB_var_type

// block var var_42270
        _22395 = NOVALUE;
        DeRef(_22392);
        _22392 = NOVALUE;
        return _22404;
        // SubProg BB_var_type pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 42268 op: 159
        // SubProg BB_var_type pc: 117 op: NOP1 (159)
L3: // addr: 118 pc: 117 sub: 42268 op: 159
        // SubProg BB_var_type pc: 118 op: STARTLINE (58)

        /** c_decl.e:234		end for*/
        // SubProg BB_var_type pc: 120 op: ENDFOR_GENERAL (39)
        _i_42272 = _i_42272 + -1;
        goto L1; // [120] 17
L2: // addr: 125 pc: 120 sub: 42268 op: 39
        ;
    }
    // SubProg BB_var_type pc: 125 op: STARTLINE (58)

    /** c_decl.e:235		return TYPE_OBJECT*/
    // SubProg BB_var_type pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg BB_var_type pc: 129 op: RETURNF (28)

// Exiting block BLOCK: BB_var_type

// block var var_42270
    _22395 = NOVALUE;
    DeRef(_22392);
    _22392 = NOVALUE;
    _22404 = NOVALUE;
    return 16;
    // SubProg BB_var_type pc: 133 op: BADRETURNF (43)
    ;
}


object _57GType(object _s_42301)
{
    object _t_42302 = NOVALUE;
    object _local_t_42303 = NOVALUE;
// skipping _22412  name type: 0
// skipping _22411  name type: 0
// skipping _22410  name type: 0
// skipping _22409  name type: 0
    object _22408 = NOVALUE; // 42312 22408
    object _22407 = NOVALUE; // 42310 22407
// skipping _22406  name type: 0
    object _22405 = NOVALUE; // 42305 22405
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GType pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42301)) {
        _1 = (object)(DBL_PTR(_s_42301)->dbl);
        DeRefDS(_s_42301);
        _s_42301 = _1;
    }
    // SubProg GType pc: 3 op: STARTLINE (58)

    /** c_decl.e:243		t = SymTab[s][S_GTYPE]*/
    // SubProg GType pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22405 = (object)*(((s1_ptr)_2)->base + _s_42301);
    // SubProg GType pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22405);
    _t_42302 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_t_42302)){
        _t_42302 = (object)DBL_PTR(_t_42302)->dbl;
    }
    _22405 = NOVALUE;
    // SubProg GType pc: 19 op: STARTLINE (58)

    /** c_decl.e:244		ifdef DEBUG then*/
    // SubProg GType pc: 21 op: STARTLINE (58)

    /** c_decl.e:250		if SymTab[s][S_MODE] != M_NORMAL then*/
    // SubProg GType pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22407 = (object)*(((s1_ptr)_2)->base + _s_42301);
    // SubProg GType pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22407);
    _22408 = (object)*(((s1_ptr)_2)->base + 3);
    _22407 = NOVALUE;
    // SubProg GType pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 37 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22408, 1)){
        _22408 = NOVALUE;
        goto L1; // [37] 48
    }
    _22408 = NOVALUE;
    // SubProg GType pc: 41 op: STARTLINE (58)

    /** c_decl.e:251			return t*/
    // SubProg GType pc: 43 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42301

// block var local_t_42303
    return _t_42302;
    // SubProg GType pc: 47 op: NOP1 (159)
L1: // addr: 48 pc: 47 sub: 42298 op: 159
    // SubProg GType pc: 48 op: STARTLINE (58)

    /** c_decl.e:254		local_t = BB_var_type(s)*/
    // SubProg GType pc: 50 op: PROC (27)
    _local_t_42303 = _57BB_var_type(_s_42301);
    // SubProg GType pc: 54 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_local_t_42303)) {
        _1 = (object)(DBL_PTR(_local_t_42303)->dbl);
        DeRefDS(_local_t_42303);
        _local_t_42303 = _1;
    }
    // SubProg GType pc: 56 op: STARTLINE (58)

    /** c_decl.e:255		if local_t = TYPE_OBJECT then*/
    // SubProg GType pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 60 op: EQUALS_IFW (104)
    if (_local_t_42303 != 16)
    goto L2; // [60] 71
    // SubProg GType pc: 64 op: STARTLINE (58)

    /** c_decl.e:256			return t*/
    // SubProg GType pc: 66 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42301

// block var local_t_42303
    return _t_42302;
    // SubProg GType pc: 70 op: NOP1 (159)
L2: // addr: 71 pc: 70 sub: 42298 op: 159
    // SubProg GType pc: 71 op: STARTLINE (58)

    /** c_decl.e:258		if t = TYPE_INTEGER then*/
    // SubProg GType pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 75 op: EQUALS_IFW (104)
    if (_t_42302 != 1)
    goto L3; // [75] 88
    // SubProg GType pc: 79 op: STARTLINE (58)

    /** c_decl.e:259			return TYPE_INTEGER*/
    // SubProg GType pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg GType pc: 83 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42301

// block var t_42302

// block var local_t_42303
    return 1;
    // SubProg GType pc: 87 op: NOP1 (159)
L3: // addr: 88 pc: 87 sub: 42298 op: 159
    // SubProg GType pc: 88 op: STARTLINE (58)

    /** c_decl.e:261		return local_t*/
    // SubProg GType pc: 90 op: RETURNF (28)

// Exiting block BLOCK: GType

// block var s_42301

// block var t_42302
    return _local_t_42303;
    // SubProg GType pc: 94 op: BADRETURNF (43)
    ;
}


object _57GDelete()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GDelete pc: 1 op: STARTLINE (58)

    /** c_decl.e:269		return g_has_delete*/
    // SubProg GDelete pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GDelete pc: 5 op: RETURNF (28)

// Exiting block BLOCK: GDelete
    return _57g_has_delete_42323;
    // SubProg GDelete pc: 9 op: BADRETURNF (43)
    ;
}


object _57HasDelete(object _s_42330)
{
    object _22423 = NOVALUE; // 42349 22423
    object _22422 = NOVALUE; // 42347 22422
// skipping _22421  name type: 0
    object _22420 = NOVALUE; // 42343 22420
    object _22419 = NOVALUE; // 42342 22419
    object _22418 = NOVALUE; // 42339 22418
    object _22417 = NOVALUE; // 42338 22417
// skipping _22416  name type: 0
    object _22415 = NOVALUE; // 42336 22415
    object _22414 = NOVALUE; // 42335 22414
    object _22413 = NOVALUE; // 42333 22413
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg HasDelete pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42330)) {
        _1 = (object)(DBL_PTR(_s_42330)->dbl);
        DeRefDS(_s_42330);
        _s_42330 = _1;
    }
    // SubProg HasDelete pc: 3 op: STARTLINE (58)

    /** c_decl.e:274		for i = length(BB_info) to 1 by -1 do*/
    // SubProg HasDelete pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22413 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22413 = 1;
    }
    // SubProg HasDelete pc: 10 op: FOR_I (125)
    {
        object _i_42332;
        _i_42332 = _22413;
L1: // addr: 17 pc: 10 sub: 42327 op: 125
        if (_i_42332 < 1){
            goto L2; // [10] 57
        }
        // SubProg HasDelete pc: 17 op: STARTLINE (58)

        /** c_decl.e:275			if BB_info[i][BB_VAR] = s then*/
        // SubProg HasDelete pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg HasDelete pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22414 = (object)*(((s1_ptr)_2)->base + _i_42332);
        // SubProg HasDelete pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22414);
        _22415 = (object)*(((s1_ptr)_2)->base + 1);
        _22414 = NOVALUE;
        // SubProg HasDelete pc: 29 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _22415, _s_42330)){
            _22415 = NOVALUE;
            goto L3; // [29] 50
        }
        _22415 = NOVALUE;
        // SubProg HasDelete pc: 33 op: STARTLINE (58)

        /** c_decl.e:276				return BB_info[i][BB_DELETE]*/
        // SubProg HasDelete pc: 35 op: GLOBAL_INIT_CHECK (109)
        // SubProg HasDelete pc: 37 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22417 = (object)*(((s1_ptr)_2)->base + _i_42332);
        // SubProg HasDelete pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22417);
        _22418 = (object)*(((s1_ptr)_2)->base + 6);
        _22417 = NOVALUE;
        // SubProg HasDelete pc: 45 op: RETURNF (28)
        Ref(_22418);

// Exiting block BLOCK: HasDelete

// block var s_42330
        return _22418;
        // SubProg HasDelete pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 42327 op: 159
        // SubProg HasDelete pc: 50 op: STARTLINE (58)

        /** c_decl.e:278		end for*/
        // SubProg HasDelete pc: 52 op: ENDFOR_GENERAL (39)
        _i_42332 = _i_42332 + -1;
        goto L1; // [52] 17
L2: // addr: 57 pc: 52 sub: 42327 op: 39
        ;
    }
    // SubProg HasDelete pc: 57 op: STARTLINE (58)

    /** c_decl.e:279		if length(SymTab[s]) < S_HAS_DELETE then*/
    // SubProg HasDelete pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22419 = (object)*(((s1_ptr)_2)->base + _s_42330);
    // SubProg HasDelete pc: 65 op: LENGTH (42)
    if (IS_SEQUENCE(_22419)){
            _22420 = SEQ_PTR(_22419)->length;
    }
    else {
        _22420 = 1;
    }
    _22419 = NOVALUE;
    // SubProg HasDelete pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 70 op: LESS_IFW (102)
    if (_22420 >= 54)
    goto L4; // [70] 81
    // SubProg HasDelete pc: 74 op: STARTLINE (58)

    /** c_decl.e:280			return 0*/
    // SubProg HasDelete pc: 76 op: RETURNF (28)

// Exiting block BLOCK: HasDelete

// block var s_42330
    _22418 = NOVALUE;
    _22419 = NOVALUE;
    return 0;
    // SubProg HasDelete pc: 80 op: NOP1 (159)
L4: // addr: 81 pc: 80 sub: 42327 op: 159
    // SubProg HasDelete pc: 81 op: STARTLINE (58)

    /** c_decl.e:282		return SymTab[s][S_HAS_DELETE]*/
    // SubProg HasDelete pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22422 = (object)*(((s1_ptr)_2)->base + _s_42330);
    // SubProg HasDelete pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg HasDelete pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22422);
    _22423 = (object)*(((s1_ptr)_2)->base + 54);
    _22422 = NOVALUE;
    // SubProg HasDelete pc: 95 op: RETURNF (28)
    Ref(_22423);

// Exiting block BLOCK: HasDelete

// block var s_42330
    _22418 = NOVALUE;
    _22419 = NOVALUE;
    return _22423;
    // SubProg HasDelete pc: 99 op: BADRETURNF (43)
    ;
}


object _57ObjValue(object _s_42353)
{
    object _local_t_42354 = NOVALUE;
    object _st_42355 = NOVALUE;
    object _tmin_42356 = NOVALUE;
    object _tmax_42357 = NOVALUE;
    object _22436 = NOVALUE; // 42385 22436
// skipping _22435  name type: 0
    object _22434 = NOVALUE; // 42382 22434
    object _22433 = NOVALUE; // 42380 22433
// skipping _22432  name type: 0
    object _22431 = NOVALUE; // 42375 22431
// skipping _22430  name type: 0
// skipping _22429  name type: 0
    object _22428 = NOVALUE; // 42369 22428
// skipping _22427  name type: 0
// skipping _22426  name type: 0
// skipping _22425  name type: 0
// skipping _22424  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ObjValue pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42353)) {
        _1 = (object)(DBL_PTR(_s_42353)->dbl);
        DeRefDS(_s_42353);
        _s_42353 = _1;
    }
    // SubProg ObjValue pc: 3 op: STARTLINE (58)

    /** c_decl.e:293		st = SymTab[s]*/
    // SubProg ObjValue pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 7 op: RHS_SUBS_CHECK (92)
    DeRef(_st_42355);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _st_42355 = (object)*(((s1_ptr)_2)->base + _s_42353);
    Ref(_st_42355);
    // SubProg ObjValue pc: 11 op: STARTLINE (58)

    /** c_decl.e:294		tmin = st[S_OBJ_MIN]*/
    // SubProg ObjValue pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 15 op: RHS_SUBS_CHECK (92)
    DeRef(_tmin_42356);
    _2 = (object)SEQ_PTR(_st_42355);
    _tmin_42356 = (object)*(((s1_ptr)_2)->base + 30);
    Ref(_tmin_42356);
    // SubProg ObjValue pc: 19 op: STARTLINE (58)

    /** c_decl.e:295		tmax = st[S_OBJ_MAX]*/
    // SubProg ObjValue pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 23 op: RHS_SUBS_CHECK (92)
    DeRef(_tmax_42357);
    _2 = (object)SEQ_PTR(_st_42355);
    _tmax_42357 = (object)*(((s1_ptr)_2)->base + 31);
    Ref(_tmax_42357);
    // SubProg ObjValue pc: 27 op: STARTLINE (58)

    /** c_decl.e:297		if tmin != tmax then*/
    // SubProg ObjValue pc: 29 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _tmin_42356, _tmax_42357)){
        goto L1; // [29] 41
    }
    // SubProg ObjValue pc: 33 op: STARTLINE (58)

    /** c_decl.e:298			tmin = NOVALUE*/
    // SubProg ObjValue pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 37 op: ASSIGN (18)
    Ref(_5NOVALUE_12331);
    DeRef(_tmin_42356);
    _tmin_42356 = _5NOVALUE_12331;
    // SubProg ObjValue pc: 40 op: NOP1 (159)
L1: // addr: 41 pc: 40 sub: 42350 op: 159
    // SubProg ObjValue pc: 41 op: STARTLINE (58)

    /** c_decl.e:300		if st[S_MODE] != M_NORMAL then*/
    // SubProg ObjValue pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_st_42355);
    _22428 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg ObjValue pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 51 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22428, 1)){
        _22428 = NOVALUE;
        goto L2; // [51] 62
    }
    _22428 = NOVALUE;
    // SubProg ObjValue pc: 55 op: STARTLINE (58)

    /** c_decl.e:301			return tmin*/
    // SubProg ObjValue pc: 57 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42353

// block var local_t_42354
    DeRef(_local_t_42354);

// block var st_42355
    DeRef(_st_42355);

// block var tmax_42357
    DeRef(_tmax_42357);
    return _tmin_42356;
    // SubProg ObjValue pc: 61 op: NOP1 (159)
L2: // addr: 62 pc: 61 sub: 42350 op: 159
    // SubProg ObjValue pc: 62 op: STARTLINE (58)

    /** c_decl.e:305		local_t = BB_var_obj(s)*/
    // SubProg ObjValue pc: 64 op: PROC (27)
    _0 = _local_t_42354;
    _local_t_42354 = _57BB_var_obj(_s_42353);
    DeRef(_0);
    // SubProg ObjValue pc: 68 op: SEQUENCE_CHECK (97)
    // SubProg ObjValue pc: 70 op: STARTLINE (58)

    /** c_decl.e:306		if local_t[MIN] = NOVALUE then*/
    // SubProg ObjValue pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42354);
    _22431 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 80 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22431, _5NOVALUE_12331)){
        _22431 = NOVALUE;
        goto L3; // [80] 91
    }
    _22431 = NOVALUE;
    // SubProg ObjValue pc: 84 op: STARTLINE (58)

    /** c_decl.e:307			return tmin*/
    // SubProg ObjValue pc: 86 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42353

// block var local_t_42354
    DeRefDS(_local_t_42354);

// block var st_42355
    DeRef(_st_42355);

// block var tmax_42357
    DeRef(_tmax_42357);
    return _tmin_42356;
    // SubProg ObjValue pc: 90 op: NOP1 (159)
L3: // addr: 91 pc: 90 sub: 42350 op: 159
    // SubProg ObjValue pc: 91 op: STARTLINE (58)

    /** c_decl.e:310		if local_t[MIN] != local_t[MAX] then*/
    // SubProg ObjValue pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 95 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42354);
    _22433 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 101 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42354);
    _22434 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg ObjValue pc: 105 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22433, _22434)){
        _22433 = NOVALUE;
        _22434 = NOVALUE;
        goto L4; // [105] 116
    }
    _22433 = NOVALUE;
    _22434 = NOVALUE;
    // SubProg ObjValue pc: 109 op: STARTLINE (58)

    /** c_decl.e:311			return tmin*/
    // SubProg ObjValue pc: 111 op: RETURNF (28)

// Exiting block BLOCK: ObjValue

// block var s_42353

// block var local_t_42354
    DeRefDS(_local_t_42354);

// block var st_42355
    DeRef(_st_42355);

// block var tmax_42357
    DeRef(_tmax_42357);
    return _tmin_42356;
    // SubProg ObjValue pc: 115 op: NOP1 (159)
L4: // addr: 116 pc: 115 sub: 42350 op: 159
    // SubProg ObjValue pc: 116 op: STARTLINE (58)

    /** c_decl.e:314		return local_t[MIN]*/
    // SubProg ObjValue pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg ObjValue pc: 120 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_local_t_42354);
    _22436 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ObjValue pc: 124 op: RETURNF (28)
    Ref(_22436);

// Exiting block BLOCK: ObjValue

// block var s_42353

// block var local_t_42354
    DeRefDS(_local_t_42354);

// block var st_42355
    DeRef(_st_42355);

// block var tmin_42356
    DeRef(_tmin_42356);

// block var tmax_42357
    DeRef(_tmax_42357);
    return _22436;
    // SubProg ObjValue pc: 128 op: BADRETURNF (43)
    ;
}


object _57TypeIs(object _x_42388, object _typei_42389)
{
    object _22438 = NOVALUE; // 42391 22438
    object _22437 = NOVALUE; // 42390 22437
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIs pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42388)) {
        _1 = (object)(DBL_PTR(_x_42388)->dbl);
        DeRefDS(_x_42388);
        _x_42388 = _1;
    }
    // SubProg TypeIs pc: 3 op: INTEGER_CHECK (96)
    // SubProg TypeIs pc: 5 op: STARTLINE (58)

    /** c_decl.e:319		return GType(x) = typei*/
    // SubProg TypeIs pc: 7 op: PROC (27)
    _22437 = _57GType(_x_42388);
    // SubProg TypeIs pc: 11 op: EQUALS (3)
    if (IS_ATOM_INT(_22437)) {
        _22438 = (_22437 == _typei_42389);
    }
    else {
        _22438 = binary_op(EQUALS, _22437, _typei_42389);
    }
    DeRef(_22437);
    _22437 = NOVALUE;
    // SubProg TypeIs pc: 15 op: RETURNF (28)

// Exiting block BLOCK: TypeIs

// block var x_42388

// block var typei_42389
    return _22438;
    // SubProg TypeIs pc: 19 op: BADRETURNF (43)
    ;
}


object _57TypeIsIn(object _x_42394, object _types_42395)
{
    object _22440 = NOVALUE; // 42397 22440
    object _22439 = NOVALUE; // 42396 22439
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsIn pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42394)) {
        _1 = (object)(DBL_PTR(_x_42394)->dbl);
        DeRefDS(_x_42394);
        _x_42394 = _1;
    }
    // SubProg TypeIsIn pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg TypeIsIn pc: 5 op: STARTLINE (58)

    /** c_decl.e:323		return find(GType(x), types)*/
    // SubProg TypeIsIn pc: 7 op: PROC (27)
    _22439 = _57GType(_x_42394);
    // SubProg TypeIsIn pc: 11 op: FIND_FROM (176)
    _22440 = find_from(_22439, _types_42395, 1);
    DeRef(_22439);
    _22439 = NOVALUE;
    // SubProg TypeIsIn pc: 16 op: RETURNF (28)

// Exiting block BLOCK: TypeIsIn

// block var x_42394

// block var types_42395
    DeRefDS(_types_42395);
    return _22440;
    // SubProg TypeIsIn pc: 20 op: BADRETURNF (43)
    ;
}


object _57TypeIsNot(object _x_42400, object _typei_42401)
{
    object _22442 = NOVALUE; // 42403 22442
    object _22441 = NOVALUE; // 42402 22441
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsNot pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42400)) {
        _1 = (object)(DBL_PTR(_x_42400)->dbl);
        DeRefDS(_x_42400);
        _x_42400 = _1;
    }
    // SubProg TypeIsNot pc: 3 op: INTEGER_CHECK (96)
    // SubProg TypeIsNot pc: 5 op: STARTLINE (58)

    /** c_decl.e:327		return GType(x) != typei*/
    // SubProg TypeIsNot pc: 7 op: PROC (27)
    _22441 = _57GType(_x_42400);
    // SubProg TypeIsNot pc: 11 op: NOTEQ (4)
    if (IS_ATOM_INT(_22441)) {
        _22442 = (_22441 != _typei_42401);
    }
    else {
        _22442 = binary_op(NOTEQ, _22441, _typei_42401);
    }
    DeRef(_22441);
    _22441 = NOVALUE;
    // SubProg TypeIsNot pc: 15 op: RETURNF (28)

// Exiting block BLOCK: TypeIsNot

// block var x_42400

// block var typei_42401
    return _22442;
    // SubProg TypeIsNot pc: 19 op: BADRETURNF (43)
    ;
}


object _57TypeIsNotIn(object _x_42406, object _types_42407)
{
    object _22445 = NOVALUE; // 42410 22445
    object _22444 = NOVALUE; // 42409 22444
    object _22443 = NOVALUE; // 42408 22443
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg TypeIsNotIn pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_x_42406)) {
        _1 = (object)(DBL_PTR(_x_42406)->dbl);
        DeRefDS(_x_42406);
        _x_42406 = _1;
    }
    // SubProg TypeIsNotIn pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg TypeIsNotIn pc: 5 op: STARTLINE (58)

    /** c_decl.e:331		return not find(GType(x), types)*/
    // SubProg TypeIsNotIn pc: 7 op: PROC (27)
    _22443 = _57GType(_x_42406);
    // SubProg TypeIsNotIn pc: 11 op: FIND_FROM (176)
    _22444 = find_from(_22443, _types_42407, 1);
    DeRef(_22443);
    _22443 = NOVALUE;
    // SubProg TypeIsNotIn pc: 16 op: NOT (7)
    _22445 = (_22444 == 0);
    _22444 = NOVALUE;
    // SubProg TypeIsNotIn pc: 19 op: RETURNF (28)

// Exiting block BLOCK: TypeIsNotIn

// block var x_42406

// block var types_42407
    DeRefDS(_types_42407);
    return _22445;
    // SubProg TypeIsNotIn pc: 23 op: BADRETURNF (43)
    ;
}


object _57or_type(object _t1_42413, object _t2_42414)
{
    object _22465 = NOVALUE; // 42480 22465
    object _22464 = NOVALUE; // 42476 22464
    object _22463 = NOVALUE; // 42474 22463
    object _22462 = NOVALUE; // 42473 22462
// skipping _22461  name type: 0
// skipping _22460  name type: 0
// skipping _22459  name type: 0
// skipping _22458  name type: 0
    object _22457 = NOVALUE; // 42451 22457
// skipping _22456  name type: 0
    object _22455 = NOVALUE; // 42448 22455
// skipping _22454  name type: 0
// skipping _22453  name type: 0
// skipping _22452  name type: 0
// skipping _22451  name type: 0
    object _22450 = NOVALUE; // 42426 22450
// skipping _22449  name type: 0
    object _22448 = NOVALUE; // 42423 22448
// skipping _22447  name type: 0
// skipping _22446  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg or_type pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t1_42413)) {
        _1 = (object)(DBL_PTR(_t1_42413)->dbl);
        DeRefDS(_t1_42413);
        _t1_42413 = _1;
    }
    // SubProg or_type pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t2_42414)) {
        _1 = (object)(DBL_PTR(_t2_42414)->dbl);
        DeRefDS(_t2_42414);
        _t2_42414 = _1;
    }
    // SubProg or_type pc: 5 op: STARTLINE (58)

    /** c_decl.e:337		if t1 = TYPE_NULL then*/
    // SubProg or_type pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 9 op: EQUALS_IFW (104)
    if (_t1_42413 != 0)
    goto L1; // [9] 22
    // SubProg or_type pc: 13 op: STARTLINE (58)

    /** c_decl.e:338			return t2*/
    // SubProg or_type pc: 15 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413
    return _t2_42414;
    // SubProg or_type pc: 19 op: ELSE (23)
    goto L2; // [19] 307
    // SubProg or_type pc: 21 op: NOP1 (159)
L1: // addr: 22 pc: 21 sub: 42411 op: 159
    // SubProg or_type pc: 22 op: STARTLINE (58)

    /** c_decl.e:340		elsif t2 = TYPE_NULL then*/
    // SubProg or_type pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 26 op: EQUALS_IFW (104)
    if (_t2_42414 != 0)
    goto L3; // [26] 39
    // SubProg or_type pc: 30 op: STARTLINE (58)

    /** c_decl.e:341			return t1*/
    // SubProg or_type pc: 32 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t2_42414
    return _t1_42413;
    // SubProg or_type pc: 36 op: ELSE (23)
    goto L2; // [36] 307
    // SubProg or_type pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 42411 op: 159
    // SubProg or_type pc: 39 op: STARTLINE (58)

    /** c_decl.e:343		elsif t1 = TYPE_OBJECT or t2 = TYPE_OBJECT then*/
    // SubProg or_type pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 43 op: EQUALS (3)
    _22448 = (_t1_42413 == 16);
    // SubProg or_type pc: 47 op: SC1_OR_IF (147)
    if (_22448 != 0) {
        goto L4; // [47] 62
    }
    // SubProg or_type pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 53 op: EQUALS (3)
    _22450 = (_t2_42414 == 16);
    // SubProg or_type pc: 57 op: NOP1 (159)
    // SubProg or_type pc: 58 op: IF (20)
    if (_22450 == 0)
    {
        DeRef(_22450);
        _22450 = NOVALUE;
        goto L5; // [58] 73
    }
    else{
        DeRef(_22450);
        _22450 = NOVALUE;
    }
    // SubProg or_type pc: 61 op: NOP1 (159)
L4: // addr: 62 pc: 61 sub: 42411 op: 159
    // SubProg or_type pc: 62 op: STARTLINE (58)

    /** c_decl.e:344			return TYPE_OBJECT*/
    // SubProg or_type pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 66 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22448);
    _22448 = NOVALUE;
    return 16;
    // SubProg or_type pc: 70 op: ELSE (23)
    goto L2; // [70] 307
    // SubProg or_type pc: 72 op: NOP1 (159)
L5: // addr: 73 pc: 72 sub: 42411 op: 159
    // SubProg or_type pc: 73 op: STARTLINE (58)

    /** c_decl.e:346		elsif t1 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 77 op: EQUALS_IFW (104)
    if (_t1_42413 != 8)
    goto L6; // [77] 112
    // SubProg or_type pc: 81 op: STARTLINE (58)

    /** c_decl.e:347			if t2 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 85 op: EQUALS_IFW (104)
    if (_t2_42414 != 8)
    goto L7; // [85] 100
    // SubProg or_type pc: 89 op: STARTLINE (58)

    /** c_decl.e:348				return TYPE_SEQUENCE*/
    // SubProg or_type pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 93 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22448);
    _22448 = NOVALUE;
    return 8;
    // SubProg or_type pc: 97 op: ELSE (23)
    goto L2; // [97] 307
    // SubProg or_type pc: 99 op: NOP1 (159)
L7: // addr: 100 pc: 99 sub: 42411 op: 159
    // SubProg or_type pc: 100 op: STARTLINE (58)

    /** c_decl.e:350				return TYPE_OBJECT*/
    // SubProg or_type pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 104 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22448);
    _22448 = NOVALUE;
    return 16;
    // SubProg or_type pc: 108 op: NOP1 (159)
    // SubProg or_type pc: 109 op: ELSE (23)
    goto L2; // [109] 307
    // SubProg or_type pc: 111 op: NOP1 (159)
L6: // addr: 112 pc: 111 sub: 42411 op: 159
    // SubProg or_type pc: 112 op: STARTLINE (58)

    /** c_decl.e:353		elsif t2 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 116 op: EQUALS_IFW (104)
    if (_t2_42414 != 8)
    goto L8; // [116] 151
    // SubProg or_type pc: 120 op: STARTLINE (58)

    /** c_decl.e:354			if t1 = TYPE_SEQUENCE then*/
    // SubProg or_type pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 124 op: EQUALS_IFW (104)
    if (_t1_42413 != 8)
    goto L9; // [124] 139
    // SubProg or_type pc: 128 op: STARTLINE (58)

    /** c_decl.e:355				return TYPE_SEQUENCE*/
    // SubProg or_type pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 132 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22448);
    _22448 = NOVALUE;
    return 8;
    // SubProg or_type pc: 136 op: ELSE (23)
    goto L2; // [136] 307
    // SubProg or_type pc: 138 op: NOP1 (159)
L9: // addr: 139 pc: 138 sub: 42411 op: 159
    // SubProg or_type pc: 139 op: STARTLINE (58)

    /** c_decl.e:357				return TYPE_OBJECT*/
    // SubProg or_type pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 143 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22448);
    _22448 = NOVALUE;
    return 16;
    // SubProg or_type pc: 147 op: NOP1 (159)
    // SubProg or_type pc: 148 op: ELSE (23)
    goto L2; // [148] 307
    // SubProg or_type pc: 150 op: NOP1 (159)
L8: // addr: 151 pc: 150 sub: 42411 op: 159
    // SubProg or_type pc: 151 op: STARTLINE (58)

    /** c_decl.e:360		elsif t1 = TYPE_ATOM or t2 = TYPE_ATOM then*/
    // SubProg or_type pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 155 op: EQUALS (3)
    _22455 = (_t1_42413 == 4);
    // SubProg or_type pc: 159 op: SC1_OR_IF (147)
    if (_22455 != 0) {
        goto LA; // [159] 174
    }
    // SubProg or_type pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 165 op: EQUALS (3)
    _22457 = (_t2_42414 == 4);
    // SubProg or_type pc: 169 op: NOP1 (159)
    // SubProg or_type pc: 170 op: IF (20)
    if (_22457 == 0)
    {
        DeRef(_22457);
        _22457 = NOVALUE;
        goto LB; // [170] 185
    }
    else{
        DeRef(_22457);
        _22457 = NOVALUE;
    }
    // SubProg or_type pc: 173 op: NOP1 (159)
LA: // addr: 174 pc: 173 sub: 42411 op: 159
    // SubProg or_type pc: 174 op: STARTLINE (58)

    /** c_decl.e:361			return TYPE_ATOM*/
    // SubProg or_type pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 178 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 4;
    // SubProg or_type pc: 182 op: ELSE (23)
    goto L2; // [182] 307
    // SubProg or_type pc: 184 op: NOP1 (159)
LB: // addr: 185 pc: 184 sub: 42411 op: 159
    // SubProg or_type pc: 185 op: STARTLINE (58)

    /** c_decl.e:363		elsif t1 = TYPE_DOUBLE then*/
    // SubProg or_type pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 189 op: EQUALS_IFW (104)
    if (_t1_42413 != 2)
    goto LC; // [189] 224
    // SubProg or_type pc: 193 op: STARTLINE (58)

    /** c_decl.e:364			if t2 = TYPE_INTEGER then*/
    // SubProg or_type pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 197 op: EQUALS_IFW (104)
    if (_t2_42414 != 1)
    goto LD; // [197] 212
    // SubProg or_type pc: 201 op: STARTLINE (58)

    /** c_decl.e:365				return TYPE_ATOM*/
    // SubProg or_type pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 205 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 4;
    // SubProg or_type pc: 209 op: ELSE (23)
    goto L2; // [209] 307
    // SubProg or_type pc: 211 op: NOP1 (159)
LD: // addr: 212 pc: 211 sub: 42411 op: 159
    // SubProg or_type pc: 212 op: STARTLINE (58)

    /** c_decl.e:367				return TYPE_DOUBLE*/
    // SubProg or_type pc: 214 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 216 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 2;
    // SubProg or_type pc: 220 op: NOP1 (159)
    // SubProg or_type pc: 221 op: ELSE (23)
    goto L2; // [221] 307
    // SubProg or_type pc: 223 op: NOP1 (159)
LC: // addr: 224 pc: 223 sub: 42411 op: 159
    // SubProg or_type pc: 224 op: STARTLINE (58)

    /** c_decl.e:370		elsif t2 = TYPE_DOUBLE then*/
    // SubProg or_type pc: 226 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 228 op: EQUALS_IFW (104)
    if (_t2_42414 != 2)
    goto LE; // [228] 263
    // SubProg or_type pc: 232 op: STARTLINE (58)

    /** c_decl.e:371			if t1 = TYPE_INTEGER then*/
    // SubProg or_type pc: 234 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 236 op: EQUALS_IFW (104)
    if (_t1_42413 != 1)
    goto LF; // [236] 251
    // SubProg or_type pc: 240 op: STARTLINE (58)

    /** c_decl.e:372				return TYPE_ATOM*/
    // SubProg or_type pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 244 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 4;
    // SubProg or_type pc: 248 op: ELSE (23)
    goto L2; // [248] 307
    // SubProg or_type pc: 250 op: NOP1 (159)
LF: // addr: 251 pc: 250 sub: 42411 op: 159
    // SubProg or_type pc: 251 op: STARTLINE (58)

    /** c_decl.e:374				return TYPE_DOUBLE*/
    // SubProg or_type pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 255 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 2;
    // SubProg or_type pc: 259 op: NOP1 (159)
    // SubProg or_type pc: 260 op: ELSE (23)
    goto L2; // [260] 307
    // SubProg or_type pc: 262 op: NOP1 (159)
LE: // addr: 263 pc: 262 sub: 42411 op: 159
    // SubProg or_type pc: 263 op: STARTLINE (58)

    /** c_decl.e:377		elsif t1 = TYPE_INTEGER and t2 = TYPE_INTEGER then*/
    // SubProg or_type pc: 265 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 267 op: EQUALS (3)
    _22462 = (_t1_42413 == 1);
    // SubProg or_type pc: 271 op: SC1_AND_IF (146)
    if (_22462 == 0) {
        goto L10; // [271] 296
    }
    // SubProg or_type pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 277 op: EQUALS (3)
    _22464 = (_t2_42414 == 1);
    // SubProg or_type pc: 281 op: NOP1 (159)
    // SubProg or_type pc: 282 op: IF (20)
    if (_22464 == 0)
    {
        DeRef(_22464);
        _22464 = NOVALUE;
        goto L10; // [282] 296
    }
    else{
        DeRef(_22464);
        _22464 = NOVALUE;
    }
    // SubProg or_type pc: 285 op: STARTLINE (58)

    /** c_decl.e:378			return TYPE_INTEGER*/
    // SubProg or_type pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg or_type pc: 289 op: RETURNF (28)

// Exiting block BLOCK: or_type

// block var t1_42413

// block var t2_42414
    DeRef(_22455);
    _22455 = NOVALUE;
    DeRef(_22462);
    _22462 = NOVALUE;
    DeRef(_22448);
    _22448 = NOVALUE;
    return 1;
    // SubProg or_type pc: 293 op: ELSE (23)
    goto L2; // [293] 307
    // SubProg or_type pc: 295 op: NOP1 (159)
L10: // addr: 296 pc: 295 sub: 42411 op: 159
    // SubProg or_type pc: 296 op: STARTLINE (58)

    /** c_decl.e:381			InternalErr(258, {t1, t2})*/
    // SubProg or_type pc: 298 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _t1_42413;
    ((intptr_t *)_2)[2] = _t2_42414;
    _22465 = MAKE_SEQ(_1);
    // SubProg or_type pc: 302 op: PROC (27)
    _49InternalErr(258, _22465);
    _22465 = NOVALUE;
    // SubProg or_type pc: 306 op: NOP1 (159)
L2: // addr: 307 pc: 306 sub: 42411 op: 159
    // SubProg or_type pc: 307 op: BADRETURNF (43)
    ;
}


void _57RemoveFromBB(object _s_42484)
{
    object _int_42485 = NOVALUE;
// skipping _22470  name type: 0
// skipping _22469  name type: 0
// skipping _22468  name type: 0
    object _22467 = NOVALUE; // 42489 22467
    object _22466 = NOVALUE; // 42488 22466
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg RemoveFromBB pc: 1 op: INTEGER_CHECK (96)
    // SubProg RemoveFromBB pc: 3 op: STARTLINE (58)

    /** c_decl.e:388		for i = 1 to length(BB_info) do*/
    // SubProg RemoveFromBB pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg RemoveFromBB pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22466 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22466 = 1;
    }
    // SubProg RemoveFromBB pc: 10 op: FOR_I (125)
    {
        object _i_42487;
        _i_42487 = 1;
L1: // addr: 17 pc: 10 sub: 42481 op: 125
        if (_i_42487 > _22466){
            goto L2; // [10] 59
        }
        // SubProg RemoveFromBB pc: 17 op: STARTLINE (58)

        /** c_decl.e:389			int = BB_info[i][BB_VAR]*/
        // SubProg RemoveFromBB pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg RemoveFromBB pc: 21 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_57BB_info_42126);
        _22467 = (object)*(((s1_ptr)_2)->base + _i_42487);
        // SubProg RemoveFromBB pc: 25 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22467);
        _int_42485 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_int_42485)){
            _int_42485 = (object)DBL_PTR(_int_42485)->dbl;
        }
        _22467 = NOVALUE;
        // SubProg RemoveFromBB pc: 31 op: STARTLINE (58)

        /** c_decl.e:390			if int = s then*/
        // SubProg RemoveFromBB pc: 33 op: EQUALS_IFW (104)
        if (_int_42485 != _s_42484)
        goto L3; // [33] 52
        // SubProg RemoveFromBB pc: 37 op: STARTLINE (58)

        /** c_decl.e:391				BB_info = remove( BB_info, int )*/
        // SubProg RemoveFromBB pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg RemoveFromBB pc: 41 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_57BB_info_42126);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_int_42485)) ? _int_42485 : (object)(DBL_PTR(_int_42485)->dbl);
            int stop = (IS_ATOM_INT(_int_42485)) ? _int_42485 : (object)(DBL_PTR(_int_42485)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_57BB_info_42126), start, &_57BB_info_42126 );
                }
                else Tail(SEQ_PTR(_57BB_info_42126), stop+1, &_57BB_info_42126);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_57BB_info_42126), start, &_57BB_info_42126);
            }
            else {
                assign_slice_seq = &assign_space;
                _57BB_info_42126 = Remove_elements(start, stop, (SEQ_PTR(_57BB_info_42126)->ref == 1));
            }
        }
        // SubProg RemoveFromBB pc: 46 op: STARTLINE (58)

        /** c_decl.e:392				return*/
        // SubProg RemoveFromBB pc: 48 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: FOR-

// Exiting block BLOCK: RemoveFromBB

// block var s_42484

// block var int_42485
        return;
        // SubProg RemoveFromBB pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 42481 op: 159
        // SubProg RemoveFromBB pc: 52 op: STARTLINE (58)

        /** c_decl.e:394		end for*/
        // SubProg RemoveFromBB pc: 54 op: ENDFOR_INT_UP1 (54)
        _i_42487 = _i_42487 + 1;
        goto L1; // [54] 17
L2: // addr: 59 pc: 54 sub: 42481 op: 54
        ;
    }
    // SubProg RemoveFromBB pc: 59 op: STARTLINE (58)

    /** c_decl.e:395	end procedure*/
    // SubProg RemoveFromBB pc: 61 op: RETURNP (29)

// Exiting block BLOCK: RemoveFromBB

// block var s_42484

// block var int_42485
    return;
    // SubProg RemoveFromBB pc: 64 op: BADRETURNF (43)
    ;
}


void _57SetBBType(object _s_42505, object _t_42506, object _val_42507, object _etype_42508, object _has_delete_42509)
{
    object _found_42510 = NOVALUE;
    object _i_42511 = NOVALUE;
    object _tn_42512 = NOVALUE;
    object _int_42513 = NOVALUE;
    object _sym_42514 = NOVALUE;
    object _mode_42519 = NOVALUE;
    object _gtype_42534 = NOVALUE;
    object _new_type_42571 = NOVALUE;
    object _bbsym_42594 = NOVALUE;
    object _bbi_42730 = NOVALUE;
    object _22586 = NOVALUE; // 42798 22586
    object _22585 = NOVALUE; // 42795 22585
    object _22584 = NOVALUE; // 42791 22584
// skipping _22583  name type: 0
    object _22582 = NOVALUE; // 42784 22582
    object _22581 = NOVALUE; // 42781 22581
    object _22580 = NOVALUE; // 42779 22580
// skipping _22579  name type: 0
    object _22578 = NOVALUE; // 42776 22578
    object _22577 = NOVALUE; // 42774 22577
// skipping _22576  name type: 0
    object _22575 = NOVALUE; // 42765 22575
// skipping _22574  name type: 0
    object _22573 = NOVALUE; // 42760 22573
    object _22572 = NOVALUE; // 42757 22572
// skipping _22571  name type: 0
    object _22570 = NOVALUE; // 42754 22570
// skipping _22569  name type: 0
    object _22568 = NOVALUE; // 42745 22568
    object _22567 = NOVALUE; // 42744 22567
    object _22566 = NOVALUE; // 42743 22566
    object _22565 = NOVALUE; // 42741 22565
    object _22564 = NOVALUE; // 42740 22564
    object _22563 = NOVALUE; // 42738 22563
    object _22562 = NOVALUE; // 42737 22562
    object _22561 = NOVALUE; // 42735 22561
    object _22560 = NOVALUE; // 42734 22560
// skipping _22559  name type: 0
// skipping _22558  name type: 0
    object _22557 = NOVALUE; // 42727 22557
// skipping _22556  name type: 0
// skipping _22555  name type: 0
// skipping _22554  name type: 0
    object _22553 = NOVALUE; // 42720 22553
// skipping _22552  name type: 0
// skipping _22551  name type: 0
// skipping _22550  name type: 0
// skipping _22549  name type: 0
    object _22548 = NOVALUE; // 42712 22548
// skipping _22547  name type: 0
    object _22546 = NOVALUE; // 42710 22546
    object _22545 = NOVALUE; // 42706 22545
    object _22544 = NOVALUE; // 42705 22544
// skipping _22543  name type: 0
    object _22542 = NOVALUE; // 42696 22542
// skipping _22541  name type: 0
    object _22540 = NOVALUE; // 42692 22540
    object _22539 = NOVALUE; // 42690 22539
    object _22538 = NOVALUE; // 42687 22538
// skipping _22537  name type: 0
    object _22536 = NOVALUE; // 42683 22536
    object _22535 = NOVALUE; // 42681 22535
// skipping _22534  name type: 0
    object _22533 = NOVALUE; // 42676 22533
    object _22532 = NOVALUE; // 42673 22532
    object _22531 = NOVALUE; // 42670 22531
// skipping _22530  name type: 0
    object _22529 = NOVALUE; // 42666 22529
    object _22528 = NOVALUE; // 42664 22528
// skipping _22527  name type: 0
// skipping _22526  name type: 0
    object _22525 = NOVALUE; // 42655 22525
    object _22524 = NOVALUE; // 42653 22524
    object _22523 = NOVALUE; // 42650 22523
// skipping _22522  name type: 0
    object _22521 = NOVALUE; // 42643 22521
// skipping _22520  name type: 0
    object _22519 = NOVALUE; // 42639 22519
    object _22518 = NOVALUE; // 42637 22518
// skipping _22517  name type: 0
    object _22516 = NOVALUE; // 42633 22516
    object _22515 = NOVALUE; // 42630 22515
    object _22514 = NOVALUE; // 42629 22514
// skipping _22513  name type: 0
    object _22512 = NOVALUE; // 42623 22512
    object _22511 = NOVALUE; // 42622 22511
// skipping _22510  name type: 0
// skipping _22509  name type: 0
// skipping _22508  name type: 0
// skipping _22507  name type: 0
// skipping _22506  name type: 0
// skipping _22505  name type: 0
// skipping _22504  name type: 0
// skipping _22503  name type: 0
// skipping _22502  name type: 0
// skipping _22501  name type: 0
    object _22500 = NOVALUE; // 42595 22500
// skipping _22499  name type: 0
    object _22498 = NOVALUE; // 42592 22498
// skipping _22497  name type: 0
// skipping _22496  name type: 0
    object _22495 = NOVALUE; // 42586 22495
    object _22494 = NOVALUE; // 42585 22494
// skipping _22493  name type: 0
// skipping _22492  name type: 0
    object _22491 = NOVALUE; // 42577 22491
    object _22490 = NOVALUE; // 42575 22490
    object _22489 = NOVALUE; // 42574 22489
// skipping _22488  name type: 0
    object _22487 = NOVALUE; // 42565 22487
    object _22486 = NOVALUE; // 42562 22486
    object _22485 = NOVALUE; // 42552 22485
// skipping _22484  name type: 0
    object _22483 = NOVALUE; // 42545 22483
    object _22482 = NOVALUE; // 42542 22482
// skipping _22481  name type: 0
    object _22480 = NOVALUE; // 42539 22480
// skipping _22479  name type: 0
// skipping _22478  name type: 0
    object _22477 = NOVALUE; // 42527 22477
// skipping _22476  name type: 0
    object _22475 = NOVALUE; // 42524 22475
// skipping _22474  name type: 0
// skipping _22473  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg SetBBType pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42505)) {
        _1 = (object)(DBL_PTR(_s_42505)->dbl);
        DeRefDS(_s_42505);
        _s_42505 = _1;
    }
    // SubProg SetBBType pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_t_42506)) {
        _1 = (object)(DBL_PTR(_t_42506)->dbl);
        DeRefDS(_t_42506);
        _t_42506 = _1;
    }
    // SubProg SetBBType pc: 5 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_etype_42508)) {
        _1 = (object)(DBL_PTR(_etype_42508)->dbl);
        DeRefDS(_etype_42508);
        _etype_42508 = _1;
    }
    // SubProg SetBBType pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_has_delete_42509)) {
        _1 = (object)(DBL_PTR(_has_delete_42509)->dbl);
        DeRefDS(_has_delete_42509);
        _has_delete_42509 = _1;
    }
    // SubProg SetBBType pc: 11 op: STARTLINE (58)

    /** c_decl.e:416		if has_delete then*/
    // SubProg SetBBType pc: 13 op: IF (20)
    if (_has_delete_42509 == 0)
    {
        goto L1; // [13] 27
    }
    else{
    }
    // SubProg SetBBType pc: 16 op: STARTLINE (58)

    /** c_decl.e:417			p_has_delete = 1*/
    // SubProg SetBBType pc: 18 op: ASSIGN_I (113)
    _57p_has_delete_42324 = 1;
    // SubProg SetBBType pc: 21 op: STARTLINE (58)

    /** c_decl.e:418			g_has_delete = 1*/
    // SubProg SetBBType pc: 23 op: ASSIGN_I (113)
    _57g_has_delete_42323 = 1;
    // SubProg SetBBType pc: 26 op: NOP1 (159)
L1: // addr: 27 pc: 26 sub: 42502 op: 159
    // SubProg SetBBType pc: 27 op: STARTLINE (58)

    /** c_decl.e:421		sym = SymTab[s]*/
    // SubProg SetBBType pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 31 op: RHS_SUBS_CHECK (92)
    DeRef(_sym_42514);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _sym_42514 = (object)*(((s1_ptr)_2)->base + _s_42505);
    Ref(_sym_42514);
    // SubProg SetBBType pc: 35 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 37 op: STARTLINE (58)

    /** c_decl.e:422		SymTab[s] = 0*/
    // SubProg SetBBType pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 41 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 45 op: STARTLINE (58)

    /** c_decl.e:424		integer mode = sym[S_MODE]*/
    // SubProg SetBBType pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 49 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42514);
    _mode_42519 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42519))
    _mode_42519 = (object)DBL_PTR(_mode_42519)->dbl;
    // SubProg SetBBType pc: 53 op: STARTLINE (58)

    /** c_decl.e:425		if mode = M_NORMAL or mode = M_TEMP  then*/
    // SubProg SetBBType pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 57 op: EQUALS (3)
    _22475 = (_mode_42519 == 1);
    // SubProg SetBBType pc: 61 op: SC1_OR_IF (147)
    if (_22475 != 0) {
        goto L2; // [61] 76
    }
    // SubProg SetBBType pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 67 op: EQUALS (3)
    _22477 = (_mode_42519 == 3);
    // SubProg SetBBType pc: 71 op: NOP1 (159)
    // SubProg SetBBType pc: 72 op: IF (20)
    if (_22477 == 0)
    {
        DeRef(_22477);
        _22477 = NOVALUE;
        goto L3; // [72] 1167
    }
    else{
        DeRef(_22477);
        _22477 = NOVALUE;
    }
    // SubProg SetBBType pc: 75 op: NOP1 (159)
L2: // addr: 76 pc: 75 sub: 42502 op: 159
    // SubProg SetBBType pc: 76 op: STARTLINE (58)

    /** c_decl.e:427			found = FALSE*/
    // SubProg SetBBType pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 80 op: ASSIGN (18)
    _found_42510 = _6FALSE_363;
    // SubProg SetBBType pc: 83 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 85 op: STARTLINE (58)

    /** c_decl.e:428			if mode = M_TEMP then*/
    // SubProg SetBBType pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 89 op: EQUALS_IFW (104)
    if (_mode_42519 != 3)
    goto L4; // [89] 465
    // SubProg SetBBType pc: 93 op: STARTLINE (58)

    /** c_decl.e:429				sym[S_GTYPE] = t*/
    // SubProg SetBBType pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 97 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42506;
    DeRef(_1);
    // SubProg SetBBType pc: 101 op: STARTLINE (58)

    /** c_decl.e:430				sym[S_SEQ_ELEM] = etype*/
    // SubProg SetBBType pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 105 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42508;
    DeRef(_1);
    // SubProg SetBBType pc: 109 op: STARTLINE (58)

    /** c_decl.e:431				integer gtype = sym[S_GTYPE]*/
    // SubProg SetBBType pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 113 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42514);
    _gtype_42534 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_gtype_42534))
    _gtype_42534 = (object)DBL_PTR(_gtype_42534)->dbl;
    // SubProg SetBBType pc: 117 op: STARTLINE (58)

    /** c_decl.e:432				if gtype = TYPE_OBJECT*/
    // SubProg SetBBType pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 121 op: EQUALS (3)
    _22480 = (_gtype_42534 == 16);
    // SubProg SetBBType pc: 125 op: SC1_OR_IF (147)
    if (_22480 != 0) {
        goto L5; // [125] 140
    }
    // SubProg SetBBType pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 131 op: EQUALS (3)
    _22482 = (_gtype_42534 == 8);
    // SubProg SetBBType pc: 135 op: NOP1 (159)
    // SubProg SetBBType pc: 136 op: IF (20)
    if (_22482 == 0)
    {
        DeRef(_22482);
        _22482 = NOVALUE;
        goto L6; // [136] 213
    }
    else{
        DeRef(_22482);
        _22482 = NOVALUE;
    }
    // SubProg SetBBType pc: 139 op: NOP1 (159)
L5: // addr: 140 pc: 139 sub: 42502 op: 159
    // SubProg SetBBType pc: 140 op: STARTLINE (58)

    /** c_decl.e:435					if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 144 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22483 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 148 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22483, 0)){
        _22483 = NOVALUE;
        goto L7; // [148] 165
    }
    _22483 = NOVALUE;
    // SubProg SetBBType pc: 152 op: STARTLINE (58)

    /** c_decl.e:436						sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 158 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 162 op: ELSE (23)
    goto L8; // [162] 180
    // SubProg SetBBType pc: 164 op: NOP1 (159)
L7: // addr: 165 pc: 164 sub: 42502 op: 159
    // SubProg SetBBType pc: 165 op: STARTLINE (58)

    /** c_decl.e:438						sym[S_SEQ_LEN] = val[MIN]*/
    // SubProg SetBBType pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 171 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22485 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 175 op: ASSIGN_SUBS (16)
    Ref(_22485);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22485;
    if( _1 != _22485 ){
        DeRef(_1);
    }
    _22485 = NOVALUE;
    // SubProg SetBBType pc: 179 op: NOP1 (159)
L8: // addr: 180 pc: 179 sub: 42502 op: 159
    // SubProg SetBBType pc: 180 op: STARTLINE (58)

    /** c_decl.e:440					sym[S_OBJ] = NOVALUE*/
    // SubProg SetBBType pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 186 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 190 op: STARTLINE (58)

    /** c_decl.e:442					sym[S_OBJ_MIN] = NOVALUE*/
    // SubProg SetBBType pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 196 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 200 op: STARTLINE (58)

    /** c_decl.e:443					sym[S_OBJ_MAX] = NOVALUE*/
    // SubProg SetBBType pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 206 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 210 op: ELSE (23)
    goto L9; // [210] 252
    // SubProg SetBBType pc: 212 op: NOP1 (159)
L6: // addr: 213 pc: 212 sub: 42502 op: 159
    // SubProg SetBBType pc: 213 op: STARTLINE (58)

    /** c_decl.e:445					sym[S_OBJ_MIN] = val[MIN]*/
    // SubProg SetBBType pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 219 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22486 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 223 op: ASSIGN_SUBS (16)
    Ref(_22486);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22486;
    if( _1 != _22486 ){
        DeRef(_1);
    }
    _22486 = NOVALUE;
    // SubProg SetBBType pc: 227 op: STARTLINE (58)

    /** c_decl.e:446					sym[S_OBJ_MAX] = val[MAX]*/
    // SubProg SetBBType pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 233 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22487 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 237 op: ASSIGN_SUBS (16)
    Ref(_22487);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22487;
    if( _1 != _22487 ){
        DeRef(_1);
    }
    _22487 = NOVALUE;
    // SubProg SetBBType pc: 241 op: STARTLINE (58)

    /** c_decl.e:447					sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 245 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 247 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 251 op: NOP1 (159)
L9: // addr: 252 pc: 251 sub: 42502 op: 159
    // SubProg SetBBType pc: 252 op: STARTLINE (58)

    /** c_decl.e:449				if not Initializing then*/
    // SubProg SetBBType pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 256 op: NOT_IFW (108)
    if (_5Initializing_12558 != 0)
    goto LA; // [256] 326
    // SubProg SetBBType pc: 259 op: STARTLINE (58)

    /** c_decl.e:450					integer new_type = or_type(temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW], t)*/
    // SubProg SetBBType pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 265 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22489 = (object)*(((s1_ptr)_2)->base + 34);
    // SubProg SetBBType pc: 269 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5temp_name_type_12560);
    if (!IS_ATOM_INT(_22489)){
        _22490 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22489)->dbl));
    }
    else{
        _22490 = (object)*(((s1_ptr)_2)->base + _22489);
    }
    // SubProg SetBBType pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 275 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22490);
    _22491 = (object)*(((s1_ptr)_2)->base + 2);
    _22490 = NOVALUE;
    // SubProg SetBBType pc: 279 op: PROC (27)
    Ref(_22491);
    _new_type_42571 = _57or_type(_22491, _t_42506);
    _22491 = NOVALUE;
    // SubProg SetBBType pc: 284 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_type_42571)) {
        _1 = (object)(DBL_PTR(_new_type_42571)->dbl);
        DeRefDS(_new_type_42571);
        _new_type_42571 = _1;
    }
    // SubProg SetBBType pc: 286 op: STARTLINE (58)

    /** c_decl.e:451					if new_type = TYPE_NULL then*/
    // SubProg SetBBType pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 290 op: EQUALS_IFW (104)
    if (_new_type_42571 != 0)
    goto LB; // [290] 304
    // SubProg SetBBType pc: 294 op: STARTLINE (58)

    /** c_decl.e:452						new_type = TYPE_OBJECT*/
    // SubProg SetBBType pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 298 op: ASSIGN (18)
    _new_type_42571 = 16;
    // SubProg SetBBType pc: 301 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 303 op: NOP1 (159)
LB: // addr: 304 pc: 303 sub: 42502 op: 159
    // SubProg SetBBType pc: 304 op: STARTLINE (58)

    /** c_decl.e:454					temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW] = new_type*/
    // SubProg SetBBType pc: 306 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 308 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 310 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22494 = (object)*(((s1_ptr)_2)->base + 34);
    // SubProg SetBBType pc: 314 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_5temp_name_type_12560);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _5temp_name_type_12560 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_22494))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_22494)->dbl));
    else
    _3 = (object)(_22494 + ((s1_ptr)_2)->base);
    // SubProg SetBBType pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 321 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_type_42571;
    DeRef(_1);
    _22495 = NOVALUE;
    // SubProg SetBBType pc: 325 op: NOP1 (159)
LA: // addr: 326 pc: 325 sub: 42502 op: 159
    // SubProg SetBBType pc: 326 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var new_type_42571
    // SubProg SetBBType pc: 328 op: STARTLINE (58)

    /** c_decl.e:458				tn = sym[S_TEMP_NAME]*/
    // SubProg SetBBType pc: 330 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 332 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_sym_42514);
    _tn_42512 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_tn_42512))
    _tn_42512 = (object)DBL_PTR(_tn_42512)->dbl;
    // SubProg SetBBType pc: 336 op: STARTLINE (58)

    /** c_decl.e:459				i = 1*/
    // SubProg SetBBType pc: 338 op: ASSIGN_I (113)
    _i_42511 = 1;
    // SubProg SetBBType pc: 341 op: STARTLINE (58)

    /** c_decl.e:460				while i <= length(BB_info) do*/
    // SubProg SetBBType pc: 343 op: NOP2 (110)
    // SubProg SetBBType pc: 345 op: NOPWHILE (158)
LC: // addr: 346 pc: 345 sub: 42502 op: 158
    // SubProg SetBBType pc: 346 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 348 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22498 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22498 = 1;
    }
    // SubProg SetBBType pc: 351 op: LESSEQ_IFW_I (123)
    if (_i_42511 > _22498)
    goto LD; // [351] 460
    // SubProg SetBBType pc: 355 op: STARTLINE (58)

    /** c_decl.e:461					sequence bbsym*/
    // SubProg SetBBType pc: 357 op: STARTLINE (58)

    /** c_decl.e:462					int = BB_info[i][BB_VAR]*/
    // SubProg SetBBType pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 361 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    _22500 = (object)*(((s1_ptr)_2)->base + _i_42511);
    // SubProg SetBBType pc: 365 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22500);
    _int_42513 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42513)){
        _int_42513 = (object)DBL_PTR(_int_42513)->dbl;
    }
    _22500 = NOVALUE;
    // SubProg SetBBType pc: 371 op: STARTLINE (58)

    /** c_decl.e:463					if int = s then*/
    // SubProg SetBBType pc: 373 op: EQUALS_IFW (104)
    if (_int_42513 != _s_42505)
    goto LE; // [373] 387
    // SubProg SetBBType pc: 377 op: STARTLINE (58)

    /** c_decl.e:464						bbsym = sym*/
    // SubProg SetBBType pc: 379 op: ASSIGN (18)
    RefDS(_sym_42514);
    DeRef(_bbsym_42594);
    _bbsym_42594 = _sym_42514;
    // SubProg SetBBType pc: 382 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 384 op: ELSE (23)
    goto LF; // [384] 398
    // SubProg SetBBType pc: 386 op: NOP1 (159)
LE: // addr: 387 pc: 386 sub: 42502 op: 159
    // SubProg SetBBType pc: 387 op: STARTLINE (58)

    /** c_decl.e:466						bbsym = SymTab[int]*/
    // SubProg SetBBType pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 391 op: RHS_SUBS_CHECK (92)
    DeRef(_bbsym_42594);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _bbsym_42594 = (object)*(((s1_ptr)_2)->base + _int_42513);
    Ref(_bbsym_42594);
    // SubProg SetBBType pc: 395 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 397 op: NOP1 (159)
LF: // addr: 398 pc: 397 sub: 42502 op: 159
    // SubProg SetBBType pc: 398 op: STARTLINE (58)

    /** c_decl.e:468					int = bbsym[S_MODE]*/
    // SubProg SetBBType pc: 400 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 402 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 404 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_bbsym_42594);
    _int_42513 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_int_42513))
    _int_42513 = (object)DBL_PTR(_int_42513)->dbl;
    // SubProg SetBBType pc: 408 op: STARTLINE (58)

    /** c_decl.e:469					if int = M_TEMP then*/
    // SubProg SetBBType pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 412 op: EQUALS_IFW (104)
    if (_int_42513 != 3)
    goto L10; // [412] 447
    // SubProg SetBBType pc: 416 op: STARTLINE (58)

    /** c_decl.e:470						int = bbsym[S_TEMP_NAME]*/
    // SubProg SetBBType pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 420 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_bbsym_42594);
    _int_42513 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_int_42513))
    _int_42513 = (object)DBL_PTR(_int_42513)->dbl;
    // SubProg SetBBType pc: 424 op: STARTLINE (58)

    /** c_decl.e:471						if int = tn then*/
    // SubProg SetBBType pc: 426 op: EQUALS_IFW_I (121)
    if (_int_42513 != _tn_42512)
    goto L11; // [426] 446
    // SubProg SetBBType pc: 430 op: STARTLINE (58)

    /** c_decl.e:472							found = TRUE*/
    // SubProg SetBBType pc: 432 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 434 op: ASSIGN (18)
    _found_42510 = _6TRUE_365;
    // SubProg SetBBType pc: 437 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 439 op: STARTLINE (58)

    /** c_decl.e:473							exit*/
    // SubProg SetBBType pc: 441 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var bbsym_42594
    DeRefDS(_bbsym_42594);
    _bbsym_42594 = NOVALUE;
    // SubProg SetBBType pc: 443 op: EXIT (61)
    goto LD; // [443] 460
    // SubProg SetBBType pc: 445 op: NOP1 (159)
L11: // addr: 446 pc: 445 sub: 42502 op: 159
    // SubProg SetBBType pc: 446 op: NOP1 (159)
L10: // addr: 447 pc: 446 sub: 42502 op: 159
    // SubProg SetBBType pc: 447 op: STARTLINE (58)

    /** c_decl.e:476					i += 1*/
    // SubProg SetBBType pc: 449 op: PLUS1_I (117)
    _i_42511 = _i_42511 + 1;
    // SubProg SetBBType pc: 453 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var bbsym_42594
    DeRef(_bbsym_42594);
    _bbsym_42594 = NOVALUE;
    // SubProg SetBBType pc: 455 op: STARTLINE (58)

    /** c_decl.e:477				end while*/
    // SubProg SetBBType pc: 457 op: ENDWHILE (22)
    goto LC; // [457] 346
    // SubProg SetBBType pc: 459 op: NOP1 (159)
LD: // addr: 460 pc: 459 sub: 42502 op: 159
    // SubProg SetBBType pc: 460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var gtype_42534
    // SubProg SetBBType pc: 462 op: ELSE (23)
    goto L12; // [462] 889
    // SubProg SetBBType pc: 464 op: NOP1 (159)
L4: // addr: 465 pc: 464 sub: 42502 op: 159
    // SubProg SetBBType pc: 465 op: STARTLINE (58)

    /** c_decl.e:479				if t != TYPE_NULL then*/
    // SubProg SetBBType pc: 467 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 469 op: NOTEQ_IFW (105)
    if (_t_42506 == 0)
    goto L13; // [469] 824
    // SubProg SetBBType pc: 473 op: STARTLINE (58)

    /** c_decl.e:480					if not Initializing then*/
    // SubProg SetBBType pc: 475 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 477 op: NOT_IFW (108)
    if (_5Initializing_12558 != 0)
    goto L14; // [477] 500
    // SubProg SetBBType pc: 480 op: STARTLINE (58)

    /** c_decl.e:481						sym[S_GTYPE_NEW] = or_type(sym[S_GTYPE_NEW], t)*/
    // SubProg SetBBType pc: 482 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 484 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 486 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22511 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg SetBBType pc: 490 op: PROC (27)
    Ref(_22511);
    _22512 = _57or_type(_22511, _t_42506);
    _22511 = NOVALUE;
    // SubProg SetBBType pc: 495 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22512;
    if( _1 != _22512 ){
        DeRef(_1);
    }
    _22512 = NOVALUE;
    // SubProg SetBBType pc: 499 op: NOP1 (159)
L14: // addr: 500 pc: 499 sub: 42502 op: 159
    // SubProg SetBBType pc: 500 op: STARTLINE (58)

    /** c_decl.e:484					if t = TYPE_SEQUENCE then*/
    // SubProg SetBBType pc: 502 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 504 op: EQUALS_IFW (104)
    if (_t_42506 != 8)
    goto L15; // [504] 633
    // SubProg SetBBType pc: 508 op: STARTLINE (58)

    /** c_decl.e:485						sym[S_SEQ_ELEM_NEW] =*/
    // SubProg SetBBType pc: 510 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 512 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 514 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22514 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg SetBBType pc: 518 op: PROC (27)
    Ref(_22514);
    _22515 = _57or_type(_22514, _etype_42508);
    _22514 = NOVALUE;
    // SubProg SetBBType pc: 523 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22515;
    if( _1 != _22515 ){
        DeRef(_1);
    }
    _22515 = NOVALUE;
    // SubProg SetBBType pc: 527 op: STARTLINE (58)

    /** c_decl.e:488						if val[MIN] != -1 then*/
    // SubProg SetBBType pc: 529 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 531 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22516 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 535 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22516, -1)){
        _22516 = NOVALUE;
        goto L16; // [535] 823
    }
    _22516 = NOVALUE;
    // SubProg SetBBType pc: 539 op: STARTLINE (58)

    /** c_decl.e:489							if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg SetBBType pc: 541 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 543 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22518 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg SetBBType pc: 547 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 549 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22519 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22519 = - _5NOVALUE_12331;
        }
    }
    else {
        _22519 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg SetBBType pc: 552 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22518, _22519)){
        _22518 = NOVALUE;
        DeRef(_22519);
        _22519 = NOVALUE;
        goto L17; // [552] 599
    }
    _22518 = NOVALUE;
    DeRef(_22519);
    _22519 = NOVALUE;
    // SubProg SetBBType pc: 556 op: STARTLINE (58)

    /** c_decl.e:490								if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 560 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22521 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 564 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22521, 0)){
        _22521 = NOVALUE;
        goto L18; // [564] 581
    }
    _22521 = NOVALUE;
    // SubProg SetBBType pc: 568 op: STARTLINE (58)

    /** c_decl.e:491									sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 570 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 572 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 574 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 578 op: ELSE (23)
    goto L16; // [578] 823
    // SubProg SetBBType pc: 580 op: NOP1 (159)
L18: // addr: 581 pc: 580 sub: 42502 op: 159
    // SubProg SetBBType pc: 581 op: STARTLINE (58)

    /** c_decl.e:493									sym[S_SEQ_LEN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 583 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 587 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22523 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 591 op: ASSIGN_SUBS (16)
    Ref(_22523);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22523;
    if( _1 != _22523 ){
        DeRef(_1);
    }
    _22523 = NOVALUE;
    // SubProg SetBBType pc: 595 op: NOP1 (159)
    // SubProg SetBBType pc: 596 op: ELSE (23)
    goto L16; // [596] 823
    // SubProg SetBBType pc: 598 op: NOP1 (159)
L17: // addr: 599 pc: 598 sub: 42502 op: 159
    // SubProg SetBBType pc: 599 op: STARTLINE (58)

    /** c_decl.e:495							elsif val[MIN] != sym[S_SEQ_LEN_NEW] then*/
    // SubProg SetBBType pc: 601 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 603 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22524 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 607 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 609 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22525 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg SetBBType pc: 613 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22524, _22525)){
        _22524 = NOVALUE;
        _22525 = NOVALUE;
        goto L16; // [613] 823
    }
    _22524 = NOVALUE;
    _22525 = NOVALUE;
    // SubProg SetBBType pc: 617 op: STARTLINE (58)

    /** c_decl.e:496								sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 619 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 621 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 623 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 627 op: NOP1 (159)
    // SubProg SetBBType pc: 628 op: NOP1 (159)
    // SubProg SetBBType pc: 629 op: NOP1 (159)
    // SubProg SetBBType pc: 630 op: ELSE (23)
    goto L16; // [630] 823
    // SubProg SetBBType pc: 632 op: NOP1 (159)
L15: // addr: 633 pc: 632 sub: 42502 op: 159
    // SubProg SetBBType pc: 633 op: STARTLINE (58)

    /** c_decl.e:500					elsif t = TYPE_INTEGER then*/
    // SubProg SetBBType pc: 635 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 637 op: EQUALS_IFW (104)
    if (_t_42506 != 1)
    goto L19; // [637] 774
    // SubProg SetBBType pc: 641 op: STARTLINE (58)

    /** c_decl.e:502						if sym[S_OBJ_MIN_NEW] = -NOVALUE then*/
    // SubProg SetBBType pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 645 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22528 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 649 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 651 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22529 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22529 = - _5NOVALUE_12331;
        }
    }
    else {
        _22529 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg SetBBType pc: 654 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22528, _22529)){
        _22528 = NOVALUE;
        DeRef(_22529);
        _22529 = NOVALUE;
        goto L1A; // [654] 689
    }
    _22528 = NOVALUE;
    DeRef(_22529);
    _22529 = NOVALUE;
    // SubProg SetBBType pc: 658 op: STARTLINE (58)

    /** c_decl.e:504							sym[S_OBJ_MIN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 660 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 664 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22531 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 668 op: ASSIGN_SUBS (16)
    Ref(_22531);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22531;
    if( _1 != _22531 ){
        DeRef(_1);
    }
    _22531 = NOVALUE;
    // SubProg SetBBType pc: 672 op: STARTLINE (58)

    /** c_decl.e:505							sym[S_OBJ_MAX_NEW] = val[MAX]*/
    // SubProg SetBBType pc: 674 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 676 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 678 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22532 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 682 op: ASSIGN_SUBS (16)
    Ref(_22532);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22532;
    if( _1 != _22532 ){
        DeRef(_1);
    }
    _22532 = NOVALUE;
    // SubProg SetBBType pc: 686 op: ELSE (23)
    goto L16; // [686] 823
    // SubProg SetBBType pc: 688 op: NOP1 (159)
L1A: // addr: 689 pc: 688 sub: 42502 op: 159
    // SubProg SetBBType pc: 689 op: STARTLINE (58)

    /** c_decl.e:507						elsif sym[S_OBJ_MIN_NEW] != NOVALUE then*/
    // SubProg SetBBType pc: 691 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 693 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22533 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 697 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 699 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22533, _5NOVALUE_12331)){
        _22533 = NOVALUE;
        goto L16; // [699] 823
    }
    _22533 = NOVALUE;
    // SubProg SetBBType pc: 703 op: STARTLINE (58)

    /** c_decl.e:509							if val[MIN] < sym[S_OBJ_MIN_NEW] then*/
    // SubProg SetBBType pc: 705 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 707 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22535 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 713 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22536 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg SetBBType pc: 717 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22535, _22536)){
        _22535 = NOVALUE;
        _22536 = NOVALUE;
        goto L1B; // [717] 736
    }
    _22535 = NOVALUE;
    _22536 = NOVALUE;
    // SubProg SetBBType pc: 721 op: STARTLINE (58)

    /** c_decl.e:510								sym[S_OBJ_MIN_NEW] = val[MIN]*/
    // SubProg SetBBType pc: 723 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 725 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 727 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22538 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 731 op: ASSIGN_SUBS (16)
    Ref(_22538);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22538;
    if( _1 != _22538 ){
        DeRef(_1);
    }
    _22538 = NOVALUE;
    // SubProg SetBBType pc: 735 op: NOP1 (159)
L1B: // addr: 736 pc: 735 sub: 42502 op: 159
    // SubProg SetBBType pc: 736 op: STARTLINE (58)

    /** c_decl.e:512							if val[MAX] > sym[S_OBJ_MAX_NEW] then*/
    // SubProg SetBBType pc: 738 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 740 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22539 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 744 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 746 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22540 = (object)*(((s1_ptr)_2)->base + 42);
    // SubProg SetBBType pc: 750 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _22539, _22540)){
        _22539 = NOVALUE;
        _22540 = NOVALUE;
        goto L16; // [750] 823
    }
    _22539 = NOVALUE;
    _22540 = NOVALUE;
    // SubProg SetBBType pc: 754 op: STARTLINE (58)

    /** c_decl.e:513								sym[S_OBJ_MAX_NEW] = val[MAX]*/
    // SubProg SetBBType pc: 756 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 758 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 760 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22542 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 764 op: ASSIGN_SUBS (16)
    Ref(_22542);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22542;
    if( _1 != _22542 ){
        DeRef(_1);
    }
    _22542 = NOVALUE;
    // SubProg SetBBType pc: 768 op: NOP1 (159)
    // SubProg SetBBType pc: 769 op: NOP1 (159)
    // SubProg SetBBType pc: 770 op: NOP1 (159)
    // SubProg SetBBType pc: 771 op: ELSE (23)
    goto L16; // [771] 823
    // SubProg SetBBType pc: 773 op: NOP1 (159)
L19: // addr: 774 pc: 773 sub: 42502 op: 159
    // SubProg SetBBType pc: 774 op: STARTLINE (58)

    /** c_decl.e:518						sym[S_OBJ_MIN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 778 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 780 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 784 op: STARTLINE (58)

    /** c_decl.e:519						if t = TYPE_OBJECT then*/
    // SubProg SetBBType pc: 786 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 788 op: EQUALS_IFW (104)
    if (_t_42506 != 16)
    goto L1C; // [788] 822
    // SubProg SetBBType pc: 792 op: STARTLINE (58)

    /** c_decl.e:522							sym[S_SEQ_ELEM_NEW] =*/
    // SubProg SetBBType pc: 794 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 798 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22544 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg SetBBType pc: 802 op: PROC (27)
    Ref(_22544);
    _22545 = _57or_type(_22544, _etype_42508);
    _22544 = NOVALUE;
    // SubProg SetBBType pc: 807 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22545;
    if( _1 != _22545 ){
        DeRef(_1);
    }
    _22545 = NOVALUE;
    // SubProg SetBBType pc: 811 op: STARTLINE (58)

    /** c_decl.e:524							sym[S_SEQ_LEN_NEW] = NOVALUE*/
    // SubProg SetBBType pc: 813 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 817 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 821 op: NOP1 (159)
L1C: // addr: 822 pc: 821 sub: 42502 op: 159
    // SubProg SetBBType pc: 822 op: NOP1 (159)
L16: // addr: 823 pc: 822 sub: 42502 op: 159
    // SubProg SetBBType pc: 823 op: NOP1 (159)
L13: // addr: 824 pc: 823 sub: 42502 op: 159
    // SubProg SetBBType pc: 824 op: STARTLINE (58)

    /** c_decl.e:529				i = 1*/
    // SubProg SetBBType pc: 826 op: ASSIGN_I (113)
    _i_42511 = 1;
    // SubProg SetBBType pc: 829 op: STARTLINE (58)

    /** c_decl.e:530				while i <= length(BB_info) do*/
    // SubProg SetBBType pc: 831 op: NOP2 (110)
    // SubProg SetBBType pc: 833 op: NOPWHILE (158)
L1D: // addr: 834 pc: 833 sub: 42502 op: 158
    // SubProg SetBBType pc: 834 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 836 op: LENGTH (42)
    if (IS_SEQUENCE(_57BB_info_42126)){
            _22546 = SEQ_PTR(_57BB_info_42126)->length;
    }
    else {
        _22546 = 1;
    }
    // SubProg SetBBType pc: 839 op: LESSEQ_IFW_I (123)
    if (_i_42511 > _22546)
    goto L1E; // [839] 888
    // SubProg SetBBType pc: 843 op: STARTLINE (58)

    /** c_decl.e:531					int = BB_info[i][BB_VAR]*/
    // SubProg SetBBType pc: 845 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 847 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    _22548 = (object)*(((s1_ptr)_2)->base + _i_42511);
    // SubProg SetBBType pc: 851 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22548);
    _int_42513 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42513)){
        _int_42513 = (object)DBL_PTR(_int_42513)->dbl;
    }
    _22548 = NOVALUE;
    // SubProg SetBBType pc: 857 op: STARTLINE (58)

    /** c_decl.e:532					if int = s then*/
    // SubProg SetBBType pc: 859 op: EQUALS_IFW (104)
    if (_int_42513 != _s_42505)
    goto L1F; // [859] 877
    // SubProg SetBBType pc: 863 op: STARTLINE (58)

    /** c_decl.e:533						found = TRUE*/
    // SubProg SetBBType pc: 865 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 867 op: ASSIGN (18)
    _found_42510 = _6TRUE_365;
    // SubProg SetBBType pc: 870 op: INTEGER_CHECK (96)
    // SubProg SetBBType pc: 872 op: STARTLINE (58)

    /** c_decl.e:534						exit*/
    // SubProg SetBBType pc: 874 op: EXIT (61)
    goto L1E; // [874] 888
    // SubProg SetBBType pc: 876 op: NOP1 (159)
L1F: // addr: 877 pc: 876 sub: 42502 op: 159
    // SubProg SetBBType pc: 877 op: STARTLINE (58)

    /** c_decl.e:536					i += 1*/
    // SubProg SetBBType pc: 879 op: PLUS1_I (117)
    _i_42511 = _i_42511 + 1;
    // SubProg SetBBType pc: 883 op: STARTLINE (58)

    /** c_decl.e:537				end while*/
    // SubProg SetBBType pc: 885 op: ENDWHILE (22)
    goto L1D; // [885] 834
    // SubProg SetBBType pc: 887 op: NOP1 (159)
L1E: // addr: 888 pc: 887 sub: 42502 op: 159
    // SubProg SetBBType pc: 888 op: NOP1 (159)
L12: // addr: 889 pc: 888 sub: 42502 op: 159
    // SubProg SetBBType pc: 889 op: STARTLINE (58)

    /** c_decl.e:541			if not found then*/
    // SubProg SetBBType pc: 891 op: NOT_IFW (108)
    if (_found_42510 != 0)
    goto L20; // [891] 907
    // SubProg SetBBType pc: 894 op: STARTLINE (58)

    /** c_decl.e:543				BB_info = append(BB_info, repeat(0, 6))*/
    // SubProg SetBBType pc: 896 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 898 op: REPEAT (32)
    _22553 = Repeat(0, 6);
    // SubProg SetBBType pc: 902 op: APPEND (35)
    RefDS(_22553);
    Append(&_57BB_info_42126, _57BB_info_42126, _22553);
    DeRefDS(_22553);
    _22553 = NOVALUE;
    // SubProg SetBBType pc: 906 op: NOP1 (159)
L20: // addr: 907 pc: 906 sub: 42502 op: 159
    // SubProg SetBBType pc: 907 op: STARTLINE (58)

    /** c_decl.e:546			if t = TYPE_NULL then*/
    // SubProg SetBBType pc: 909 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 911 op: EQUALS_IFW (104)
    if (_t_42506 != 0)
    goto L21; // [911] 949
    // SubProg SetBBType pc: 915 op: STARTLINE (58)

    /** c_decl.e:547				if not found then*/
    // SubProg SetBBType pc: 917 op: NOT_IFW (108)
    if (_found_42510 != 0)
    goto L22; // [917] 1308
    // SubProg SetBBType pc: 920 op: STARTLINE (58)

    /** c_decl.e:549					BB_info[i] = dummy_bb*/
    // SubProg SetBBType pc: 922 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 924 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 926 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 928 op: ASSIGN_SUBS (16)
    RefDS(_57dummy_bb_42494);
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _57BB_info_42126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42511);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _57dummy_bb_42494;
    DeRef(_1);
    // SubProg SetBBType pc: 932 op: STARTLINE (58)

    /** c_decl.e:550					BB_info[i][BB_VAR] = s*/
    // SubProg SetBBType pc: 934 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 936 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _57BB_info_42126 = MAKE_SEQ(_2);
    }
    _3 = (object)(_i_42511 + ((s1_ptr)_2)->base);
    // SubProg SetBBType pc: 941 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42505;
    DeRef(_1);
    _22557 = NOVALUE;
    // SubProg SetBBType pc: 945 op: NOP1 (159)
    // SubProg SetBBType pc: 946 op: ELSE (23)
    goto L22; // [946] 1308
    // SubProg SetBBType pc: 948 op: NOP1 (159)
L21: // addr: 949 pc: 948 sub: 42502 op: 159
    // SubProg SetBBType pc: 949 op: STARTLINE (58)

    /** c_decl.e:554				sequence bbi = BB_info[i]*/
    // SubProg SetBBType pc: 951 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 953 op: PRIVATE_INIT_CHECK (30)
    // SubProg SetBBType pc: 955 op: RHS_SUBS (25)
    DeRef(_bbi_42730);
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    _bbi_42730 = (object)*(((s1_ptr)_2)->base + _i_42511);
    Ref(_bbi_42730);
    // SubProg SetBBType pc: 959 op: SEQUENCE_CHECK (97)
    // SubProg SetBBType pc: 961 op: STARTLINE (58)

    /** c_decl.e:555				BB_info[i] = 0*/
    // SubProg SetBBType pc: 963 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 965 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _57BB_info_42126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42511);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 969 op: STARTLINE (58)

    /** c_decl.e:556				bbi[BB_VAR] = s*/
    // SubProg SetBBType pc: 971 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42505;
    DeRef(_1);
    // SubProg SetBBType pc: 975 op: STARTLINE (58)

    /** c_decl.e:557				bbi[BB_TYPE] = t*/
    // SubProg SetBBType pc: 977 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42506;
    DeRef(_1);
    // SubProg SetBBType pc: 981 op: STARTLINE (58)

    /** c_decl.e:558				bbi[BB_DELETE] = has_delete*/
    // SubProg SetBBType pc: 983 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42509;
    DeRef(_1);
    // SubProg SetBBType pc: 987 op: STARTLINE (58)

    /** c_decl.e:560				if t = TYPE_SEQUENCE and val[MIN] = -1 then*/
    // SubProg SetBBType pc: 989 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 991 op: EQUALS (3)
    _22560 = (_t_42506 == 8);
    // SubProg SetBBType pc: 995 op: SC1_AND_IF (146)
    if (_22560 == 0) {
        goto L23; // [995] 1077
    }
    // SubProg SetBBType pc: 999 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1001 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22562 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1005 op: EQUALS (3)
    if (IS_ATOM_INT(_22562)) {
        _22563 = (_22562 == -1);
    }
    else {
        _22563 = binary_op(EQUALS, _22562, -1);
    }
    _22562 = NOVALUE;
    // SubProg SetBBType pc: 1009 op: NOP1 (159)
    // SubProg SetBBType pc: 1010 op: IF (20)
    if (_22563 == 0) {
        DeRef(_22563);
        _22563 = NOVALUE;
        goto L23; // [1010] 1077
    }
    else {
        if (!IS_ATOM_INT(_22563) && DBL_PTR(_22563)->dbl == 0.0){
            DeRef(_22563);
            _22563 = NOVALUE;
            goto L23; // [1010] 1077
        }
        DeRef(_22563);
        _22563 = NOVALUE;
    }
    DeRef(_22563);
    _22563 = NOVALUE;
    // SubProg SetBBType pc: 1013 op: STARTLINE (58)

    /** c_decl.e:562					if found and bbi[BB_ELEM] != TYPE_NULL then*/
    // SubProg SetBBType pc: 1015 op: SC1_AND_IF (146)
    if (_found_42510 == 0) {
        goto L24; // [1015] 1051
    }
    // SubProg SetBBType pc: 1019 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bbi_42730);
    _22565 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg SetBBType pc: 1023 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1025 op: NOTEQ (4)
    if (IS_ATOM_INT(_22565)) {
        _22566 = (_22565 != 0);
    }
    else {
        _22566 = binary_op(NOTEQ, _22565, 0);
    }
    _22565 = NOVALUE;
    // SubProg SetBBType pc: 1029 op: NOP1 (159)
    // SubProg SetBBType pc: 1030 op: IF (20)
    if (_22566 == 0) {
        DeRef(_22566);
        _22566 = NOVALUE;
        goto L24; // [1030] 1051
    }
    else {
        if (!IS_ATOM_INT(_22566) && DBL_PTR(_22566)->dbl == 0.0){
            DeRef(_22566);
            _22566 = NOVALUE;
            goto L24; // [1030] 1051
        }
        DeRef(_22566);
        _22566 = NOVALUE;
    }
    DeRef(_22566);
    _22566 = NOVALUE;
    // SubProg SetBBType pc: 1033 op: STARTLINE (58)

    /** c_decl.e:564						bbi[BB_ELEM] = or_type(bbi[BB_ELEM], etype)*/
    // SubProg SetBBType pc: 1035 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_bbi_42730);
    _22567 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg SetBBType pc: 1039 op: PROC (27)
    Ref(_22567);
    _22568 = _57or_type(_22567, _etype_42508);
    _22567 = NOVALUE;
    // SubProg SetBBType pc: 1044 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22568;
    if( _1 != _22568 ){
        DeRef(_1);
    }
    _22568 = NOVALUE;
    // SubProg SetBBType pc: 1048 op: ELSE (23)
    goto L25; // [1048] 1060
    // SubProg SetBBType pc: 1050 op: NOP1 (159)
L24: // addr: 1051 pc: 1050 sub: 42502 op: 159
    // SubProg SetBBType pc: 1051 op: STARTLINE (58)

    /** c_decl.e:566						bbi[BB_ELEM] = TYPE_NULL*/
    // SubProg SetBBType pc: 1053 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1055 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg SetBBType pc: 1059 op: NOP1 (159)
L25: // addr: 1060 pc: 1059 sub: 42502 op: 159
    // SubProg SetBBType pc: 1060 op: STARTLINE (58)

    /** c_decl.e:568					if not found then*/
    // SubProg SetBBType pc: 1062 op: NOT_IFW (108)
    if (_found_42510 != 0)
    goto L26; // [1062] 1153
    // SubProg SetBBType pc: 1065 op: STARTLINE (58)

    /** c_decl.e:569						bbi[BB_SEQLEN] = NOVALUE*/
    // SubProg SetBBType pc: 1067 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1069 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 1073 op: NOP1 (159)
    // SubProg SetBBType pc: 1074 op: ELSE (23)
    goto L26; // [1074] 1153
    // SubProg SetBBType pc: 1076 op: NOP1 (159)
L23: // addr: 1077 pc: 1076 sub: 42502 op: 159
    // SubProg SetBBType pc: 1077 op: STARTLINE (58)

    /** c_decl.e:572					bbi[BB_ELEM] = etype*/
    // SubProg SetBBType pc: 1079 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42508;
    DeRef(_1);
    // SubProg SetBBType pc: 1083 op: STARTLINE (58)

    /** c_decl.e:573					if t = TYPE_SEQUENCE or t = TYPE_OBJECT then*/
    // SubProg SetBBType pc: 1085 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1087 op: EQUALS (3)
    _22570 = (_t_42506 == 8);
    // SubProg SetBBType pc: 1091 op: SC1_OR_IF (147)
    if (_22570 != 0) {
        goto L27; // [1091] 1106
    }
    // SubProg SetBBType pc: 1095 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1097 op: EQUALS (3)
    _22572 = (_t_42506 == 16);
    // SubProg SetBBType pc: 1101 op: NOP1 (159)
    // SubProg SetBBType pc: 1102 op: IF (20)
    if (_22572 == 0)
    {
        DeRef(_22572);
        _22572 = NOVALUE;
        goto L28; // [1102] 1145
    }
    else{
        DeRef(_22572);
        _22572 = NOVALUE;
    }
    // SubProg SetBBType pc: 1105 op: NOP1 (159)
L27: // addr: 1106 pc: 1105 sub: 42502 op: 159
    // SubProg SetBBType pc: 1106 op: STARTLINE (58)

    /** c_decl.e:574						if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 1108 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1110 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22573 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1114 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22573, 0)){
        _22573 = NOVALUE;
        goto L29; // [1114] 1129
    }
    _22573 = NOVALUE;
    // SubProg SetBBType pc: 1118 op: STARTLINE (58)

    /** c_decl.e:575							bbi[BB_SEQLEN] = NOVALUE*/
    // SubProg SetBBType pc: 1120 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1122 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 1126 op: ELSE (23)
    goto L2A; // [1126] 1152
    // SubProg SetBBType pc: 1128 op: NOP1 (159)
L29: // addr: 1129 pc: 1128 sub: 42502 op: 159
    // SubProg SetBBType pc: 1129 op: STARTLINE (58)

    /** c_decl.e:577							bbi[BB_SEQLEN] = val[MIN]*/
    // SubProg SetBBType pc: 1131 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1133 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22575 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1137 op: ASSIGN_SUBS (16)
    Ref(_22575);
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22575;
    if( _1 != _22575 ){
        DeRef(_1);
    }
    _22575 = NOVALUE;
    // SubProg SetBBType pc: 1141 op: NOP1 (159)
    // SubProg SetBBType pc: 1142 op: ELSE (23)
    goto L2A; // [1142] 1152
    // SubProg SetBBType pc: 1144 op: NOP1 (159)
L28: // addr: 1145 pc: 1144 sub: 42502 op: 159
    // SubProg SetBBType pc: 1145 op: STARTLINE (58)

    /** c_decl.e:580						bbi[BB_OBJ] = val*/
    // SubProg SetBBType pc: 1147 op: ASSIGN_SUBS (16)
    RefDS(_val_42507);
    _2 = (object)SEQ_PTR(_bbi_42730);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42730 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_42507;
    DeRef(_1);
    // SubProg SetBBType pc: 1151 op: NOP1 (159)
L2A: // addr: 1152 pc: 1151 sub: 42502 op: 159
    // SubProg SetBBType pc: 1152 op: NOP1 (159)
L26: // addr: 1153 pc: 1152 sub: 42502 op: 159
    // SubProg SetBBType pc: 1153 op: STARTLINE (58)

    /** c_decl.e:583				BB_info[i] = bbi*/
    // SubProg SetBBType pc: 1155 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1157 op: ASSIGN_SUBS (16)
    RefDS(_bbi_42730);
    _2 = (object)SEQ_PTR(_57BB_info_42126);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _57BB_info_42126 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42511);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bbi_42730;
    DeRef(_1);
    // SubProg SetBBType pc: 1161 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var bbi_42730
    DeRefDS(_bbi_42730);
    _bbi_42730 = NOVALUE;
    // SubProg SetBBType pc: 1163 op: NOP1 (159)
    // SubProg SetBBType pc: 1164 op: ELSE (23)
    goto L22; // [1164] 1308
    // SubProg SetBBType pc: 1166 op: NOP1 (159)
L3: // addr: 1167 pc: 1166 sub: 42502 op: 159
    // SubProg SetBBType pc: 1167 op: STARTLINE (58)

    /** c_decl.e:586		elsif mode = M_CONSTANT then*/
    // SubProg SetBBType pc: 1169 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1171 op: EQUALS_IFW (104)
    if (_mode_42519 != 2)
    goto L2B; // [1171] 1307
    // SubProg SetBBType pc: 1175 op: STARTLINE (58)

    /** c_decl.e:587			sym[S_GTYPE] = t*/
    // SubProg SetBBType pc: 1177 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1179 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42506;
    DeRef(_1);
    // SubProg SetBBType pc: 1183 op: STARTLINE (58)

    /** c_decl.e:588			sym[S_SEQ_ELEM] = etype*/
    // SubProg SetBBType pc: 1185 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1187 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42508;
    DeRef(_1);
    // SubProg SetBBType pc: 1191 op: STARTLINE (58)

    /** c_decl.e:589			if sym[S_GTYPE] = TYPE_SEQUENCE or*/
    // SubProg SetBBType pc: 1193 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1195 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22577 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg SetBBType pc: 1199 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1201 op: EQUALS (3)
    if (IS_ATOM_INT(_22577)) {
        _22578 = (_22577 == 8);
    }
    else {
        _22578 = binary_op(EQUALS, _22577, 8);
    }
    _22577 = NOVALUE;
    // SubProg SetBBType pc: 1205 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22578)) {
        if (_22578 != 0) {
            goto L2C; // [1205] 1226
        }
    }
    else {
        if (DBL_PTR(_22578)->dbl != 0.0) {
            goto L2C; // [1205] 1226
        }
    }
    // SubProg SetBBType pc: 1209 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1211 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_42514);
    _22580 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg SetBBType pc: 1215 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1217 op: EQUALS (3)
    if (IS_ATOM_INT(_22580)) {
        _22581 = (_22580 == 16);
    }
    else {
        _22581 = binary_op(EQUALS, _22580, 16);
    }
    _22580 = NOVALUE;
    // SubProg SetBBType pc: 1221 op: NOP1 (159)
    // SubProg SetBBType pc: 1222 op: IF (20)
    if (_22581 == 0) {
        DeRef(_22581);
        _22581 = NOVALUE;
        goto L2D; // [1222] 1269
    }
    else {
        if (!IS_ATOM_INT(_22581) && DBL_PTR(_22581)->dbl == 0.0){
            DeRef(_22581);
            _22581 = NOVALUE;
            goto L2D; // [1222] 1269
        }
        DeRef(_22581);
        _22581 = NOVALUE;
    }
    DeRef(_22581);
    _22581 = NOVALUE;
    // SubProg SetBBType pc: 1225 op: NOP1 (159)
L2C: // addr: 1226 pc: 1225 sub: 42502 op: 159
    // SubProg SetBBType pc: 1226 op: STARTLINE (58)

    /** c_decl.e:591				if val[MIN] < 0 then*/
    // SubProg SetBBType pc: 1228 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1230 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22582 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1234 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22582, 0)){
        _22582 = NOVALUE;
        goto L2E; // [1234] 1251
    }
    _22582 = NOVALUE;
    // SubProg SetBBType pc: 1238 op: STARTLINE (58)

    /** c_decl.e:592					sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg SetBBType pc: 1240 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1242 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1244 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg SetBBType pc: 1248 op: ELSE (23)
    goto L2F; // [1248] 1298
    // SubProg SetBBType pc: 1250 op: NOP1 (159)
L2E: // addr: 1251 pc: 1250 sub: 42502 op: 159
    // SubProg SetBBType pc: 1251 op: STARTLINE (58)

    /** c_decl.e:594					sym[S_SEQ_LEN] = val[MIN]*/
    // SubProg SetBBType pc: 1253 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1255 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1257 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22584 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1261 op: ASSIGN_SUBS (16)
    Ref(_22584);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22584;
    if( _1 != _22584 ){
        DeRef(_1);
    }
    _22584 = NOVALUE;
    // SubProg SetBBType pc: 1265 op: NOP1 (159)
    // SubProg SetBBType pc: 1266 op: ELSE (23)
    goto L2F; // [1266] 1298
    // SubProg SetBBType pc: 1268 op: NOP1 (159)
L2D: // addr: 1269 pc: 1268 sub: 42502 op: 159
    // SubProg SetBBType pc: 1269 op: STARTLINE (58)

    /** c_decl.e:597				sym[S_OBJ_MIN] = val[MIN]*/
    // SubProg SetBBType pc: 1271 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1273 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1275 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22585 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg SetBBType pc: 1279 op: ASSIGN_SUBS (16)
    Ref(_22585);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22585;
    if( _1 != _22585 ){
        DeRef(_1);
    }
    _22585 = NOVALUE;
    // SubProg SetBBType pc: 1283 op: STARTLINE (58)

    /** c_decl.e:598				sym[S_OBJ_MAX] = val[MAX]*/
    // SubProg SetBBType pc: 1285 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1287 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1289 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_val_42507);
    _22586 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg SetBBType pc: 1293 op: ASSIGN_SUBS (16)
    Ref(_22586);
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22586;
    if( _1 != _22586 ){
        DeRef(_1);
    }
    _22586 = NOVALUE;
    // SubProg SetBBType pc: 1297 op: NOP1 (159)
L2F: // addr: 1298 pc: 1297 sub: 42502 op: 159
    // SubProg SetBBType pc: 1298 op: STARTLINE (58)

    /** c_decl.e:600			sym[S_HAS_DELETE] = has_delete*/
    // SubProg SetBBType pc: 1300 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1302 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_42514);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42514 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 54);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42509;
    DeRef(_1);
    // SubProg SetBBType pc: 1306 op: NOP1 (159)
L2B: // addr: 1307 pc: 1306 sub: 42502 op: 159
    // SubProg SetBBType pc: 1307 op: NOP1 (159)
L22: // addr: 1308 pc: 1307 sub: 42502 op: 159
    // SubProg SetBBType pc: 1308 op: STARTLINE (58)

    /** c_decl.e:603		SymTab[s] = sym*/
    // SubProg SetBBType pc: 1310 op: GLOBAL_INIT_CHECK (109)
    // SubProg SetBBType pc: 1312 op: ASSIGN_SUBS (16)
    RefDS(_sym_42514);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42505);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_42514;
    DeRef(_1);
    // SubProg SetBBType pc: 1316 op: STARTLINE (58)

    /** c_decl.e:605	end procedure*/
    // SubProg SetBBType pc: 1318 op: RETURNP (29)

// Exiting block BLOCK: SetBBType

// block var s_42505

// block var t_42506

// block var val_42507
    DeRefDS(_val_42507);

// block var etype_42508

// block var has_delete_42509

// block var found_42510

// block var i_42511

// block var tn_42512

// block var int_42513

// block var sym_42514
    DeRefDS(_sym_42514);

// block var mode_42519
    _22489 = NOVALUE;
    DeRef(_22578);
    _22578 = NOVALUE;
    DeRef(_22475);
    _22475 = NOVALUE;
    DeRef(_22480);
    _22480 = NOVALUE;
    DeRef(_22570);
    _22570 = NOVALUE;
    DeRef(_22560);
    _22560 = NOVALUE;
    _22494 = NOVALUE;
    return;
    // SubProg SetBBType pc: 1321 op: BADRETURNF (43)
    ;
}


void _57CName(object _s_42804)
{
    object _v_42805 = NOVALUE;
    object _mode_42807 = NOVALUE;
    object _22651 = NOVALUE; // 42948 22651
    object _22650 = NOVALUE; // 42946 22650
// skipping _22649  name type: 0
    object _22648 = NOVALUE; // 42937 22648
    object _22647 = NOVALUE; // 42935 22647
    object _22646 = NOVALUE; // 42934 22646
    object _22645 = NOVALUE; // 42932 22645
    object _22644 = NOVALUE; // 42931 22644
    object _22643 = NOVALUE; // 42930 22643
    object _22642 = NOVALUE; // 42926 22642
    object _22641 = NOVALUE; // 42925 22641
// skipping _22640  name type: 0
    object _22639 = NOVALUE; // 42922 22639
// skipping _22638  name type: 0
    object _22637 = NOVALUE; // 42919 22637
    object _22636 = NOVALUE; // 42917 22636
    object _22635 = NOVALUE; // 42914 22635
    object _22634 = NOVALUE; // 42912 22634
    object _22633 = NOVALUE; // 42909 22633
    object _22632 = NOVALUE; // 42907 22632
// skipping _22631  name type: 0
    object _22630 = NOVALUE; // 42898 22630
    object _22629 = NOVALUE; // 42896 22629
    object _22628 = NOVALUE; // 42895 22628
    object _22627 = NOVALUE; // 42893 22627
    object _22626 = NOVALUE; // 42892 22626
// skipping _22625  name type: 0
    object _22624 = NOVALUE; // 42889 22624
    object _22623 = NOVALUE; // 42887 22623
    object _22622 = NOVALUE; // 42885 22622
    object _22621 = NOVALUE; // 42883 22621
    object _22620 = NOVALUE; // 42882 22620
    object _22619 = NOVALUE; // 42881 22619
// skipping _22618  name type: 0
    object _22617 = NOVALUE; // 42871 22617
    object _22616 = NOVALUE; // 42870 22616
// skipping _22615  name type: 0
    object _22614 = NOVALUE; // 42867 22614
    object _22613 = NOVALUE; // 42865 22613
    object _22612 = NOVALUE; // 42864 22612
    object _22611 = NOVALUE; // 42862 22611
    object _22610 = NOVALUE; // 42860 22610
    object _22609 = NOVALUE; // 42859 22609
    object _22608 = NOVALUE; // 42856 22608
    object _22607 = NOVALUE; // 42854 22607
    object _22606 = NOVALUE; // 42849 22606
    object _22605 = NOVALUE; // 42847 22605
    object _22604 = NOVALUE; // 42844 22604
    object _22603 = NOVALUE; // 42842 22603
// skipping _22602  name type: 0
    object _22601 = NOVALUE; // 42837 22601
    object _22600 = NOVALUE; // 42835 22600
// skipping _22598  name type: 0
    object _22596 = NOVALUE; // 42824 22596
    object _22595 = NOVALUE; // 42822 22595
    object _22594 = NOVALUE; // 42821 22594
    object _22593 = NOVALUE; // 42819 22593
    object _22592 = NOVALUE; // 42818 22592
    object _22591 = NOVALUE; // 42817 22591
// skipping _22590  name type: 0
// skipping _22589  name type: 0
    object _22588 = NOVALUE; // 42809 22588
// skipping _22587  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg CName pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_42804)) {
        _1 = (object)(DBL_PTR(_s_42804)->dbl);
        DeRefDS(_s_42804);
        _s_42804 = _1;
    }
    // SubProg CName pc: 3 op: STARTLINE (58)

    /** c_decl.e:612		v = ObjValue(s)*/
    // SubProg CName pc: 5 op: PROC (27)
    _0 = _v_42805;
    _v_42805 = _57ObjValue(_s_42804);
    DeRef(_0);
    // SubProg CName pc: 9 op: STARTLINE (58)

    /** c_decl.e:613		integer mode = SymTab[s][S_MODE]*/
    // SubProg CName pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22588 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 19 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22588);
    _mode_42807 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42807)){
        _mode_42807 = (object)DBL_PTR(_mode_42807)->dbl;
    }
    _22588 = NOVALUE;
    // SubProg CName pc: 25 op: STARTLINE (58)

    /** c_decl.e:614	 	if mode = M_NORMAL then*/
    // SubProg CName pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 29 op: EQUALS_IFW (104)
    if (_mode_42807 != 1)
    goto L1; // [29] 254
    // SubProg CName pc: 33 op: STARTLINE (58)

    /** c_decl.e:617			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    // SubProg CName pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 39 op: EQUALS (3)
    _22591 = (_57LeftSym_42127 == _6FALSE_363);
    // SubProg CName pc: 43 op: SC1_AND (141)
    if (_22591 == 0) {
        _22592 = 0;
        goto L2; // [43] 61
    }
    // SubProg CName pc: 47 op: PROC (27)
    _22593 = _57GType(_s_42804);
    // SubProg CName pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 53 op: EQUALS (3)
    if (IS_ATOM_INT(_22593)) {
        _22594 = (_22593 == 1);
    }
    else {
        _22594 = binary_op(EQUALS, _22593, 1);
    }
    DeRef(_22593);
    _22593 = NOVALUE;
    // SubProg CName pc: 57 op: SC2_AND (142)
    if (IS_ATOM_INT(_22594))
    _22592 = (_22594 != 0);
    else
    _22592 = DBL_PTR(_22594)->dbl != 0.0;
    // SubProg CName pc: 60 op: NOP1 (159)
L2: // addr: 61 pc: 60 sub: 42801 op: 159
    // SubProg CName pc: 61 op: SC1_AND_IF (146)
    if (_22592 == 0) {
        goto L3; // [61] 98
    }
    // SubProg CName pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 67 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42805) && IS_ATOM_INT(_5NOVALUE_12331)) {
        _22596 = (_v_42805 != _5NOVALUE_12331);
    }
    else {
        _22596 = binary_op(NOTEQ, _v_42805, _5NOVALUE_12331);
    }
    // SubProg CName pc: 71 op: NOP1 (159)
    // SubProg CName pc: 72 op: IF (20)
    if (_22596 == 0) {
        DeRef(_22596);
        _22596 = NOVALUE;
        goto L3; // [72] 98
    }
    else {
        if (!IS_ATOM_INT(_22596) && DBL_PTR(_22596)->dbl == 0.0){
            DeRef(_22596);
            _22596 = NOVALUE;
            goto L3; // [72] 98
        }
        DeRef(_22596);
        _22596 = NOVALUE;
    }
    DeRef(_22596);
    _22596 = NOVALUE;
    // SubProg CName pc: 75 op: STARTLINE (58)

    /** c_decl.e:618				c_printf("%d", v)*/
    // SubProg CName pc: 77 op: PROC (27)
    RefDS(_22597);
    Ref(_v_42805);
    _54c_printf(_22597, _v_42805);
    // SubProg CName pc: 81 op: STARTLINE (58)

    /** c_decl.e:619				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 85 op: EQUALS_IFW (104)
    // SubProg CName pc: 95 op: ELSE (23)
    goto L4; // [95] 180
    // SubProg CName pc: 97 op: NOP1 (159)
L3: // addr: 98 pc: 97 sub: 42801 op: 159
    // SubProg CName pc: 98 op: STARTLINE (58)

    /** c_decl.e:623				if SymTab[s][S_SCOPE] > SC_PRIVATE then*/
    // SubProg CName pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22600 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 108 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22600);
    _22601 = (object)*(((s1_ptr)_2)->base + 4);
    _22600 = NOVALUE;
    // SubProg CName pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 114 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _22601, 3)){
        _22601 = NOVALUE;
        goto L5; // [114] 156
    }
    _22601 = NOVALUE;
    // SubProg CName pc: 118 op: STARTLINE (58)

    /** c_decl.e:624					c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg CName pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22603 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22603);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22604 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22604 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _22603 = NOVALUE;
    // SubProg CName pc: 132 op: PROC (27)
    RefDS(_22090);
    Ref(_22604);
    _54c_printf(_22090, _22604);
    _22604 = NOVALUE;
    // SubProg CName pc: 136 op: STARTLINE (58)

    /** c_decl.e:625					c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 140 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22605 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22605);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22606 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22606 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22605 = NOVALUE;
    // SubProg CName pc: 150 op: PROC (27)
    Ref(_22606);
    _54c_puts(_22606);
    _22606 = NOVALUE;
    // SubProg CName pc: 153 op: ELSE (23)
    goto L6; // [153] 179
    // SubProg CName pc: 155 op: NOP1 (159)
L5: // addr: 156 pc: 155 sub: 42801 op: 159
    // SubProg CName pc: 156 op: STARTLINE (58)

    /** c_decl.e:627					c_puts("_")*/
    // SubProg CName pc: 158 op: PROC (27)
    RefDS(_22039);
    _54c_puts(_22039);
    // SubProg CName pc: 161 op: STARTLINE (58)

    /** c_decl.e:628					c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 163 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 165 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22607 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 171 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22607);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22608 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22608 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22607 = NOVALUE;
    // SubProg CName pc: 175 op: PROC (27)
    Ref(_22608);
    _54c_puts(_22608);
    _22608 = NOVALUE;
    // SubProg CName pc: 178 op: NOP1 (159)
L6: // addr: 179 pc: 178 sub: 42801 op: 159
    // SubProg CName pc: 179 op: NOP1 (159)
L4: // addr: 180 pc: 179 sub: 42801 op: 159
    // SubProg CName pc: 180 op: STARTLINE (58)

    /** c_decl.e:631			if s != CurrentSub and SymTab[s][S_NREFS] < 2 then*/
    // SubProg CName pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 184 op: NOTEQ (4)
    _22609 = (_s_42804 != _5CurrentSub_12485);
    // SubProg CName pc: 188 op: SC1_AND_IF (146)
    if (_22609 == 0) {
        goto L7; // [188] 236
    }
    // SubProg CName pc: 192 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 194 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22611 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 200 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22611);
    _22612 = (object)*(((s1_ptr)_2)->base + 12);
    _22611 = NOVALUE;
    // SubProg CName pc: 204 op: LESS (1)
    if (IS_ATOM_INT(_22612)) {
        _22613 = (_22612 < 2);
    }
    else {
        _22613 = binary_op(LESS, _22612, 2);
    }
    _22612 = NOVALUE;
    // SubProg CName pc: 208 op: NOP1 (159)
    // SubProg CName pc: 209 op: IF (20)
    if (_22613 == 0) {
        DeRef(_22613);
        _22613 = NOVALUE;
        goto L7; // [209] 236
    }
    else {
        if (!IS_ATOM_INT(_22613) && DBL_PTR(_22613)->dbl == 0.0){
            DeRef(_22613);
            _22613 = NOVALUE;
            goto L7; // [209] 236
        }
        DeRef(_22613);
        _22613 = NOVALUE;
    }
    DeRef(_22613);
    _22613 = NOVALUE;
    // SubProg CName pc: 212 op: STARTLINE (58)

    /** c_decl.e:632				SymTab[s][S_NREFS] += 1*/
    // SubProg CName pc: 214 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 216 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42804 + ((s1_ptr)_2)->base);
    // SubProg CName pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 223 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22616 = (object)*(((s1_ptr)_2)->base + 12);
    _22614 = NOVALUE;
    // SubProg CName pc: 227 op: PLUS1 (93)
    if (IS_ATOM_INT(_22616)) {
        _22617 = _22616 + 1;
        if (_22617 > MAXINT){
            _22617 = NewDouble((eudouble)_22617);
        }
    }
    else
    _22617 = binary_op(PLUS, 1, _22616);
    _22616 = NOVALUE;
    // SubProg CName pc: 231 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22617;
    if( _1 != _22617 ){
        DeRef(_1);
    }
    _22617 = NOVALUE;
    _22614 = NOVALUE;
    // SubProg CName pc: 235 op: NOP1 (159)
L7: // addr: 236 pc: 235 sub: 42801 op: 159
    // SubProg CName pc: 236 op: STARTLINE (58)

    /** c_decl.e:634			SetBBType(s, TYPE_NULL, novalue, TYPE_OBJECT, 0) -- record that this var was referenced in this BB*/
    // SubProg CName pc: 238 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 244 op: PROC (27)
    RefDS(_54novalue_46168);
    _57SetBBType(_s_42804, 0, _54novalue_46168, 16, 0);
    // SubProg CName pc: 251 op: ELSE (23)
    goto L8; // [251] 533
    // SubProg CName pc: 253 op: NOP1 (159)
L1: // addr: 254 pc: 253 sub: 42801 op: 159
    // SubProg CName pc: 254 op: STARTLINE (58)

    /** c_decl.e:636	 	elsif mode = M_CONSTANT then*/
    // SubProg CName pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 258 op: EQUALS_IFW (104)
    if (_mode_42807 != 2)
    goto L9; // [258] 448
    // SubProg CName pc: 262 op: STARTLINE (58)

    /** c_decl.e:638			if (is_integer( sym_obj( s ) ) and SymTab[s][S_GTYPE] != TYPE_DOUBLE ) or (LeftSym = FALSE and TypeIs(s, TYPE_INTEGER) and v != NOVALUE) then*/
    // SubProg CName pc: 264 op: PROC (27)
    _22619 = _53sym_obj(_s_42804);
    // SubProg CName pc: 268 op: PROC (27)
    _22620 = _5is_integer(_22619);
    _22619 = NOVALUE;
    // SubProg CName pc: 272 op: SC1_AND (141)
    if (IS_ATOM_INT(_22620)) {
        if (_22620 == 0) {
            DeRef(_22621);
            _22621 = 0;
            goto LA; // [272] 298
        }
    }
    else {
        if (DBL_PTR(_22620)->dbl == 0.0) {
            DeRef(_22621);
            _22621 = 0;
            goto LA; // [272] 298
        }
    }
    // SubProg CName pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 278 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22622 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 284 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22622);
    _22623 = (object)*(((s1_ptr)_2)->base + 36);
    _22622 = NOVALUE;
    // SubProg CName pc: 288 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 290 op: NOTEQ (4)
    if (IS_ATOM_INT(_22623)) {
        _22624 = (_22623 != 2);
    }
    else {
        _22624 = binary_op(NOTEQ, _22623, 2);
    }
    _22623 = NOVALUE;
    // SubProg CName pc: 294 op: SC2_AND (142)
    DeRef(_22621);
    if (IS_ATOM_INT(_22624))
    _22621 = (_22624 != 0);
    else
    _22621 = DBL_PTR(_22624)->dbl != 0.0;
    // SubProg CName pc: 297 op: NOP1 (159)
LA: // addr: 298 pc: 297 sub: 42801 op: 159
    // SubProg CName pc: 298 op: SC1_OR_IF (147)
    if (_22621 != 0) {
        goto LB; // [298] 344
    }
    // SubProg CName pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 304 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 306 op: EQUALS (3)
    _22626 = (_57LeftSym_42127 == _6FALSE_363);
    // SubProg CName pc: 310 op: SC1_AND (141)
    if (_22626 == 0) {
        _22627 = 0;
        goto LC; // [310] 325
    }
    // SubProg CName pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 316 op: PROC (27)
    _22628 = _57TypeIs(_s_42804, 1);
    // SubProg CName pc: 321 op: SC2_AND (142)
    if (IS_ATOM_INT(_22628))
    _22627 = (_22628 != 0);
    else
    _22627 = DBL_PTR(_22628)->dbl != 0.0;
    // SubProg CName pc: 324 op: NOP1 (159)
LC: // addr: 325 pc: 324 sub: 42801 op: 159
    // SubProg CName pc: 325 op: SC1_AND (141)
    if (_22627 == 0) {
        DeRef(_22629);
        _22629 = 0;
        goto LD; // [325] 339
    }
    // SubProg CName pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 331 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42805) && IS_ATOM_INT(_5NOVALUE_12331)) {
        _22630 = (_v_42805 != _5NOVALUE_12331);
    }
    else {
        _22630 = binary_op(NOTEQ, _v_42805, _5NOVALUE_12331);
    }
    // SubProg CName pc: 335 op: SC2_AND (142)
    if (IS_ATOM_INT(_22630))
    _22629 = (_22630 != 0);
    else
    _22629 = DBL_PTR(_22630)->dbl != 0.0;
    // SubProg CName pc: 338 op: NOP1 (159)
LD: // addr: 339 pc: 338 sub: 42801 op: 159
    // SubProg CName pc: 339 op: NOP1 (159)
    // SubProg CName pc: 340 op: IF (20)
    if (_22629 == 0)
    {
        _22629 = NOVALUE;
        goto LE; // [340] 367
    }
    else{
        _22629 = NOVALUE;
    }
    // SubProg CName pc: 343 op: NOP1 (159)
LB: // addr: 344 pc: 343 sub: 42801 op: 159
    // SubProg CName pc: 344 op: STARTLINE (58)

    /** c_decl.e:641				c_printf("%d", v)*/
    // SubProg CName pc: 346 op: PROC (27)
    RefDS(_22597);
    Ref(_v_42805);
    _54c_printf(_22597, _v_42805);
    // SubProg CName pc: 350 op: STARTLINE (58)

    /** c_decl.e:642				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 354 op: EQUALS_IFW (104)
    // SubProg CName pc: 364 op: ELSE (23)
    goto L8; // [364] 533
    // SubProg CName pc: 366 op: NOP1 (159)
LE: // addr: 367 pc: 366 sub: 42801 op: 159
    // SubProg CName pc: 367 op: STARTLINE (58)

    /** c_decl.e:647				c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg CName pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 371 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22632 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 375 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 377 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22632);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22633 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22633 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _22632 = NOVALUE;
    // SubProg CName pc: 381 op: PROC (27)
    RefDS(_22090);
    Ref(_22633);
    _54c_printf(_22090, _22633);
    _22633 = NOVALUE;
    // SubProg CName pc: 385 op: STARTLINE (58)

    /** c_decl.e:648				c_puts(SymTab[s][S_NAME])*/
    // SubProg CName pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 389 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22634 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 393 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 395 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22634);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22635 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22635 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22634 = NOVALUE;
    // SubProg CName pc: 399 op: PROC (27)
    Ref(_22635);
    _54c_puts(_22635);
    _22635 = NOVALUE;
    // SubProg CName pc: 402 op: STARTLINE (58)

    /** c_decl.e:649				if SymTab[s][S_NREFS] < 2 then*/
    // SubProg CName pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 406 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22636 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 410 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 412 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22636);
    _22637 = (object)*(((s1_ptr)_2)->base + 12);
    _22636 = NOVALUE;
    // SubProg CName pc: 416 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22637, 2)){
        _22637 = NOVALUE;
        goto L8; // [416] 533
    }
    _22637 = NOVALUE;
    // SubProg CName pc: 420 op: STARTLINE (58)

    /** c_decl.e:650					SymTab[s][S_NREFS] += 1*/
    // SubProg CName pc: 422 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 424 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42804 + ((s1_ptr)_2)->base);
    // SubProg CName pc: 429 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 431 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22641 = (object)*(((s1_ptr)_2)->base + 12);
    _22639 = NOVALUE;
    // SubProg CName pc: 435 op: PLUS1 (93)
    if (IS_ATOM_INT(_22641)) {
        _22642 = _22641 + 1;
        if (_22642 > MAXINT){
            _22642 = NewDouble((eudouble)_22642);
        }
    }
    else
    _22642 = binary_op(PLUS, 1, _22641);
    _22641 = NOVALUE;
    // SubProg CName pc: 439 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22642;
    if( _1 != _22642 ){
        DeRef(_1);
    }
    _22642 = NOVALUE;
    _22639 = NOVALUE;
    // SubProg CName pc: 443 op: NOP1 (159)
    // SubProg CName pc: 444 op: NOP1 (159)
    // SubProg CName pc: 445 op: ELSE (23)
    goto L8; // [445] 533
    // SubProg CName pc: 447 op: NOP1 (159)
L9: // addr: 448 pc: 447 sub: 42801 op: 159
    // SubProg CName pc: 448 op: STARTLINE (58)

    /** c_decl.e:656			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    // SubProg CName pc: 450 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 454 op: EQUALS (3)
    _22643 = (_57LeftSym_42127 == _6FALSE_363);
    // SubProg CName pc: 458 op: SC1_AND (141)
    if (_22643 == 0) {
        _22644 = 0;
        goto LF; // [458] 476
    }
    // SubProg CName pc: 462 op: PROC (27)
    _22645 = _57GType(_s_42804);
    // SubProg CName pc: 466 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 468 op: EQUALS (3)
    if (IS_ATOM_INT(_22645)) {
        _22646 = (_22645 == 1);
    }
    else {
        _22646 = binary_op(EQUALS, _22645, 1);
    }
    DeRef(_22645);
    _22645 = NOVALUE;
    // SubProg CName pc: 472 op: SC2_AND (142)
    if (IS_ATOM_INT(_22646))
    _22644 = (_22646 != 0);
    else
    _22644 = DBL_PTR(_22646)->dbl != 0.0;
    // SubProg CName pc: 475 op: NOP1 (159)
LF: // addr: 476 pc: 475 sub: 42801 op: 159
    // SubProg CName pc: 476 op: SC1_AND_IF (146)
    if (_22644 == 0) {
        goto L10; // [476] 513
    }
    // SubProg CName pc: 480 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 482 op: NOTEQ (4)
    if (IS_ATOM_INT(_v_42805) && IS_ATOM_INT(_5NOVALUE_12331)) {
        _22648 = (_v_42805 != _5NOVALUE_12331);
    }
    else {
        _22648 = binary_op(NOTEQ, _v_42805, _5NOVALUE_12331);
    }
    // SubProg CName pc: 486 op: NOP1 (159)
    // SubProg CName pc: 487 op: IF (20)
    if (_22648 == 0) {
        DeRef(_22648);
        _22648 = NOVALUE;
        goto L10; // [487] 513
    }
    else {
        if (!IS_ATOM_INT(_22648) && DBL_PTR(_22648)->dbl == 0.0){
            DeRef(_22648);
            _22648 = NOVALUE;
            goto L10; // [487] 513
        }
        DeRef(_22648);
        _22648 = NOVALUE;
    }
    DeRef(_22648);
    _22648 = NOVALUE;
    // SubProg CName pc: 490 op: STARTLINE (58)

    /** c_decl.e:657				c_printf("%d", v)*/
    // SubProg CName pc: 492 op: PROC (27)
    RefDS(_22597);
    Ref(_v_42805);
    _54c_printf(_22597, _v_42805);
    // SubProg CName pc: 496 op: STARTLINE (58)

    /** c_decl.e:658				if TARGET_SIZEOF_POINTER = 8 then*/
    // SubProg CName pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 500 op: EQUALS_IFW (104)
    // SubProg CName pc: 510 op: ELSE (23)
    goto L11; // [510] 532
    // SubProg CName pc: 512 op: NOP1 (159)
L10: // addr: 513 pc: 512 sub: 42801 op: 159
    // SubProg CName pc: 513 op: STARTLINE (58)

    /** c_decl.e:662				c_printf("_%d", SymTab[s][S_TEMP_NAME])*/
    // SubProg CName pc: 515 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 517 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22650 = (object)*(((s1_ptr)_2)->base + _s_42804);
    // SubProg CName pc: 521 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 523 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22650);
    _22651 = (object)*(((s1_ptr)_2)->base + 34);
    _22650 = NOVALUE;
    // SubProg CName pc: 527 op: PROC (27)
    RefDS(_22090);
    Ref(_22651);
    _54c_printf(_22090, _22651);
    _22651 = NOVALUE;
    // SubProg CName pc: 531 op: NOP1 (159)
L11: // addr: 532 pc: 531 sub: 42801 op: 159
    // SubProg CName pc: 532 op: NOP1 (159)
L8: // addr: 533 pc: 532 sub: 42801 op: 159
    // SubProg CName pc: 533 op: STARTLINE (58)

    /** c_decl.e:666		LeftSym = FALSE*/
    // SubProg CName pc: 535 op: GLOBAL_INIT_CHECK (109)
    // SubProg CName pc: 537 op: ASSIGN (18)
    _57LeftSym_42127 = _6FALSE_363;
    // SubProg CName pc: 540 op: INTEGER_CHECK (96)
    // SubProg CName pc: 542 op: STARTLINE (58)

    /** c_decl.e:667	end procedure*/
    // SubProg CName pc: 544 op: RETURNP (29)

// Exiting block BLOCK: CName

// block var s_42804

// block var v_42805
    DeRef(_v_42805);

// block var mode_42807
    DeRef(_22624);
    _22624 = NOVALUE;
    DeRef(_22594);
    _22594 = NOVALUE;
    DeRef(_22643);
    _22643 = NOVALUE;
    DeRef(_22620);
    _22620 = NOVALUE;
    DeRef(_22609);
    _22609 = NOVALUE;
    DeRef(_22626);
    _22626 = NOVALUE;
    DeRef(_22628);
    _22628 = NOVALUE;
    DeRef(_22630);
    _22630 = NOVALUE;
    DeRef(_22591);
    _22591 = NOVALUE;
    DeRef(_22646);
    _22646 = NOVALUE;
    return;
    // SubProg CName pc: 547 op: BADRETURNF (43)
    ;
}


void _57c_stmt(object _stmt_42952, object _arg_42953, object _lhs_arg_42955)
{
    object _argcount_42956 = NOVALUE;
    object _i_42957 = NOVALUE;
// skipping _22712  name type: 0
// skipping _22711  name type: 0
    object _22710 = NOVALUE; // 43044 22710
    object _22709 = NOVALUE; // 43043 22709
    object _22708 = NOVALUE; // 43039 22708
    object _22707 = NOVALUE; // 43038 22707
    object _22706 = NOVALUE; // 43037 22706
    object _22705 = NOVALUE; // 43036 22705
    object _22704 = NOVALUE; // 43035 22704
    object _22703 = NOVALUE; // 43032 22703
    object _22702 = NOVALUE; // 43031 22702
    object _22701 = NOVALUE; // 43030 22701
    object _22700 = NOVALUE; // 43029 22700
    object _22699 = NOVALUE; // 43028 22699
    object _22698 = NOVALUE; // 43027 22698
    object _22697 = NOVALUE; // 43026 22697
    object _22696 = NOVALUE; // 43025 22696
    object _22694 = NOVALUE; // 43023 22694
    object _22693 = NOVALUE; // 43021 22693
// skipping _22692  name type: 0
    object _22691 = NOVALUE; // 43017 22691
// skipping _22690  name type: 0
    object _22689 = NOVALUE; // 43014 22689
// skipping _22688  name type: 0
    object _22687 = NOVALUE; // 43010 22687
    object _22686 = NOVALUE; // 43009 22686
    object _22685 = NOVALUE; // 43008 22685
    object _22684 = NOVALUE; // 43007 22684
// skipping _22683  name type: 0
    object _22682 = NOVALUE; // 43004 22682
    object _22681 = NOVALUE; // 43003 22681
    object _22680 = NOVALUE; // 43002 22680
    object _22679 = NOVALUE; // 43001 22679
    object _22678 = NOVALUE; // 42999 22678
    object _22676 = NOVALUE; // 42997 22676
    object _22675 = NOVALUE; // 42996 22675
    object _22674 = NOVALUE; // 42995 22674
    object _22673 = NOVALUE; // 42994 22673
    object _22671 = NOVALUE; // 42992 22671
    object _22670 = NOVALUE; // 42991 22670
    object _22669 = NOVALUE; // 42990 22669
    object _22668 = NOVALUE; // 42989 22668
    object _22667 = NOVALUE; // 42988 22667
// skipping _22666  name type: 0
// skipping _22665  name type: 0
    object _22663 = NOVALUE; // 42981 22663
    object _22662 = NOVALUE; // 42979 22662
    object _22661 = NOVALUE; // 42978 22661
    object _22660 = NOVALUE; // 42977 22660
    object _22659 = NOVALUE; // 42976 22659
    object _22658 = NOVALUE; // 42975 22658
// skipping _22657  name type: 0
    object _22656 = NOVALUE; // 42972 22656
// skipping _22655  name type: 0
    object _22654 = NOVALUE; // 42964 22654
    object _22653 = NOVALUE; // 42961 22653
    object _22652 = NOVALUE; // 42960 22652
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_stmt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_stmt pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_lhs_arg_42955)) {
        _1 = (object)(DBL_PTR(_lhs_arg_42955)->dbl);
        DeRefDS(_lhs_arg_42955);
        _lhs_arg_42955 = _1;
    }
    // SubProg c_stmt pc: 5 op: STARTLINE (58)

    /** c_decl.e:675		if LAST_PASS = TRUE and Initializing = FALSE then*/
    // SubProg c_stmt pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 11 op: EQUALS (3)
    _22652 = (_57LAST_PASS_42116 == _6TRUE_365);
    // SubProg c_stmt pc: 15 op: SC1_AND_IF (146)
    if (_22652 == 0) {
        goto L1; // [15] 47
    }
    // SubProg c_stmt pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 23 op: EQUALS (3)
    _22654 = (_5Initializing_12558 == _6FALSE_363);
    // SubProg c_stmt pc: 27 op: NOP1 (159)
    // SubProg c_stmt pc: 28 op: IF (20)
    if (_22654 == 0)
    {
        DeRef(_22654);
        _22654 = NOVALUE;
        goto L1; // [28] 47
    }
    else{
        DeRef(_22654);
        _22654 = NOVALUE;
    }
    // SubProg c_stmt pc: 31 op: STARTLINE (58)

    /** c_decl.e:676			cfile_size += 1*/
    // SubProg c_stmt pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 35 op: PLUS (11)
    _5cfile_size_12557 = _5cfile_size_12557 + 1;
    // SubProg c_stmt pc: 41 op: STARTLINE (58)

    /** c_decl.e:677			update_checksum( stmt )*/
    // SubProg c_stmt pc: 43 op: PROC (27)
    RefDS(_stmt_42952);
    _55update_checksum(_stmt_42952);
    // SubProg c_stmt pc: 46 op: NOP1 (159)
L1: // addr: 47 pc: 46 sub: 42950 op: 159
    // SubProg c_stmt pc: 47 op: STARTLINE (58)

    /** c_decl.e:681		if emit_c_output then*/
    // SubProg c_stmt pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 51 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L2; // [51] 60
    }
    else{
    }
    // SubProg c_stmt pc: 54 op: STARTLINE (58)

    /** c_decl.e:682			adjust_indent_before(stmt)*/
    // SubProg c_stmt pc: 56 op: PROC (27)
    RefDS(_stmt_42952);
    _54adjust_indent_before(_stmt_42952);
    // SubProg c_stmt pc: 59 op: NOP1 (159)
L2: // addr: 60 pc: 59 sub: 42950 op: 159
    // SubProg c_stmt pc: 60 op: STARTLINE (58)

    /** c_decl.e:685		if atom(arg) then*/
    // SubProg c_stmt pc: 62 op: IS_AN_ATOM (67)
    _22656 = IS_ATOM(_arg_42953);
    // SubProg c_stmt pc: 65 op: IF (20)
    if (_22656 == 0)
    {
        _22656 = NOVALUE;
        goto L3; // [65] 75
    }
    else{
        _22656 = NOVALUE;
    }
    // SubProg c_stmt pc: 68 op: STARTLINE (58)

    /** c_decl.e:686			arg = {arg}*/
    // SubProg c_stmt pc: 70 op: RIGHT_BRACE_N (31)
    _0 = _arg_42953;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_42953);
    ((intptr_t*)_2)[1] = _arg_42953;
    _arg_42953 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg c_stmt pc: 74 op: NOP1 (159)
L3: // addr: 75 pc: 74 sub: 42950 op: 159
    // SubProg c_stmt pc: 75 op: STARTLINE (58)

    /** c_decl.e:689		argcount = 1*/
    // SubProg c_stmt pc: 77 op: ASSIGN_I (113)
    _argcount_42956 = 1;
    // SubProg c_stmt pc: 80 op: STARTLINE (58)

    /** c_decl.e:690		i = 1*/
    // SubProg c_stmt pc: 82 op: ASSIGN_I (113)
    _i_42957 = 1;
    // SubProg c_stmt pc: 85 op: STARTLINE (58)

    /** c_decl.e:691		while i <= length(stmt) and length(stmt) > 0 do*/
    // SubProg c_stmt pc: 87 op: NOP2 (110)
    // SubProg c_stmt pc: 89 op: NOPWHILE (158)
L4: // addr: 90 pc: 89 sub: 42950 op: 158
    // SubProg c_stmt pc: 90 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22658 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22658 = 1;
    }
    // SubProg c_stmt pc: 93 op: LESSEQ (5)
    _22659 = (_i_42957 <= _22658);
    _22658 = NOVALUE;
    // SubProg c_stmt pc: 97 op: SC1_AND_IF (146)
    if (_22659 == 0) {
        goto L5; // [97] 435
    }
    // SubProg c_stmt pc: 101 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22661 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22661 = 1;
    }
    // SubProg c_stmt pc: 104 op: GREATER (6)
    _22662 = (_22661 > 0);
    _22661 = NOVALUE;
    // SubProg c_stmt pc: 108 op: NOP1 (159)
    // SubProg c_stmt pc: 109 op: WHILE (47)
    if (_22662 == 0)
    {
        DeRef(_22662);
        _22662 = NOVALUE;
        goto L5; // [109] 435
    }
    else{
        DeRef(_22662);
        _22662 = NOVALUE;
    }
    // SubProg c_stmt pc: 112 op: STARTLINE (58)

    /** c_decl.e:692			if stmt[i] = '@' then*/
    // SubProg c_stmt pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22663 = (object)*(((s1_ptr)_2)->base + _i_42957);
    // SubProg c_stmt pc: 118 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22663, 64)){
        _22663 = NOVALUE;
        goto L6; // [118] 288
    }
    _22663 = NOVALUE;
    // SubProg c_stmt pc: 122 op: STARTLINE (58)

    /** c_decl.e:694				if i = 1 then*/
    // SubProg c_stmt pc: 124 op: EQUALS_IFW_I (121)
    if (_i_42957 != 1)
    goto L7; // [124] 138
    // SubProg c_stmt pc: 128 op: STARTLINE (58)

    /** c_decl.e:695					LeftSym = TRUE*/
    // SubProg c_stmt pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 132 op: ASSIGN (18)
    _57LeftSym_42127 = _6TRUE_365;
    // SubProg c_stmt pc: 135 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 137 op: NOP1 (159)
L7: // addr: 138 pc: 137 sub: 42950 op: 159
    // SubProg c_stmt pc: 138 op: STARTLINE (58)

    /** c_decl.e:698				if i < length(stmt) and stmt[i+1] > '0' and stmt[i+1] <= '9' then*/
    // SubProg c_stmt pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22667 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22667 = 1;
    }
    // SubProg c_stmt pc: 143 op: LESS (1)
    _22668 = (_i_42957 < _22667);
    _22667 = NOVALUE;
    // SubProg c_stmt pc: 147 op: SC1_AND (141)
    if (_22668 == 0) {
        _22669 = 0;
        goto L8; // [147] 167
    }
    // SubProg c_stmt pc: 151 op: PLUS1 (93)
    _22670 = _i_42957 + 1;
    // SubProg c_stmt pc: 155 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22671 = (object)*(((s1_ptr)_2)->base + _22670);
    // SubProg c_stmt pc: 159 op: GREATER (6)
    if (IS_ATOM_INT(_22671)) {
        _22673 = (_22671 > 48);
    }
    else {
        _22673 = binary_op(GREATER, _22671, 48);
    }
    _22671 = NOVALUE;
    // SubProg c_stmt pc: 163 op: SC2_AND (142)
    if (IS_ATOM_INT(_22673))
    _22669 = (_22673 != 0);
    else
    _22669 = DBL_PTR(_22673)->dbl != 0.0;
    // SubProg c_stmt pc: 166 op: NOP1 (159)
L8: // addr: 167 pc: 166 sub: 42950 op: 159
    // SubProg c_stmt pc: 167 op: SC1_AND_IF (146)
    if (_22669 == 0) {
        goto L9; // [167] 249
    }
    // SubProg c_stmt pc: 171 op: PLUS1 (93)
    _22675 = _i_42957 + 1;
    // SubProg c_stmt pc: 175 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22676 = (object)*(((s1_ptr)_2)->base + _22675);
    // SubProg c_stmt pc: 179 op: LESSEQ (5)
    if (IS_ATOM_INT(_22676)) {
        _22678 = (_22676 <= 57);
    }
    else {
        _22678 = binary_op(LESSEQ, _22676, 57);
    }
    _22676 = NOVALUE;
    // SubProg c_stmt pc: 183 op: NOP1 (159)
    // SubProg c_stmt pc: 184 op: IF (20)
    if (_22678 == 0) {
        DeRef(_22678);
        _22678 = NOVALUE;
        goto L9; // [184] 249
    }
    else {
        if (!IS_ATOM_INT(_22678) && DBL_PTR(_22678)->dbl == 0.0){
            DeRef(_22678);
            _22678 = NOVALUE;
            goto L9; // [184] 249
        }
        DeRef(_22678);
        _22678 = NOVALUE;
    }
    DeRef(_22678);
    _22678 = NOVALUE;
    // SubProg c_stmt pc: 187 op: STARTLINE (58)

    /** c_decl.e:700					if arg[stmt[i+1]-'0'] = lhs_arg then*/
    // SubProg c_stmt pc: 189 op: PLUS1 (93)
    _22679 = _i_42957 + 1;
    // SubProg c_stmt pc: 193 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22680 = (object)*(((s1_ptr)_2)->base + _22679);
    // SubProg c_stmt pc: 197 op: MINUS (10)
    if (IS_ATOM_INT(_22680)) {
        _22681 = _22680 - 48;
    }
    else {
        _22681 = binary_op(MINUS, _22680, 48);
    }
    _22680 = NOVALUE;
    // SubProg c_stmt pc: 201 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42953);
    if (!IS_ATOM_INT(_22681)){
        _22682 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22681)->dbl));
    }
    else{
        _22682 = (object)*(((s1_ptr)_2)->base + _22681);
    }
    // SubProg c_stmt pc: 205 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22682, _lhs_arg_42955)){
        _22682 = NOVALUE;
        goto LA; // [205] 219
    }
    _22682 = NOVALUE;
    // SubProg c_stmt pc: 209 op: STARTLINE (58)

    /** c_decl.e:701						LeftSym = TRUE*/
    // SubProg c_stmt pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 213 op: ASSIGN (18)
    _57LeftSym_42127 = _6TRUE_365;
    // SubProg c_stmt pc: 216 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 218 op: NOP1 (159)
LA: // addr: 219 pc: 218 sub: 42950 op: 159
    // SubProg c_stmt pc: 219 op: STARTLINE (58)

    /** c_decl.e:703					CName(arg[stmt[i+1]-'0'])*/
    // SubProg c_stmt pc: 221 op: PLUS1 (93)
    _22684 = _i_42957 + 1;
    // SubProg c_stmt pc: 225 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22685 = (object)*(((s1_ptr)_2)->base + _22684);
    // SubProg c_stmt pc: 229 op: MINUS (10)
    if (IS_ATOM_INT(_22685)) {
        _22686 = _22685 - 48;
    }
    else {
        _22686 = binary_op(MINUS, _22685, 48);
    }
    _22685 = NOVALUE;
    // SubProg c_stmt pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42953);
    if (!IS_ATOM_INT(_22686)){
        _22687 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22686)->dbl));
    }
    else{
        _22687 = (object)*(((s1_ptr)_2)->base + _22686);
    }
    // SubProg c_stmt pc: 237 op: PROC (27)
    Ref(_22687);
    _57CName(_22687);
    _22687 = NOVALUE;
    // SubProg c_stmt pc: 240 op: STARTLINE (58)

    /** c_decl.e:704					i += 1*/
    // SubProg c_stmt pc: 242 op: PLUS1_I (117)
    _i_42957 = _i_42957 + 1;
    // SubProg c_stmt pc: 246 op: ELSE (23)
    goto LB; // [246] 279
    // SubProg c_stmt pc: 248 op: NOP1 (159)
L9: // addr: 249 pc: 248 sub: 42950 op: 159
    // SubProg c_stmt pc: 249 op: STARTLINE (58)

    /** c_decl.e:708					if arg[argcount] = lhs_arg then*/
    // SubProg c_stmt pc: 251 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42953);
    _22689 = (object)*(((s1_ptr)_2)->base + _argcount_42956);
    // SubProg c_stmt pc: 255 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22689, _lhs_arg_42955)){
        _22689 = NOVALUE;
        goto LC; // [255] 269
    }
    _22689 = NOVALUE;
    // SubProg c_stmt pc: 259 op: STARTLINE (58)

    /** c_decl.e:709						LeftSym = TRUE*/
    // SubProg c_stmt pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 263 op: ASSIGN (18)
    _57LeftSym_42127 = _6TRUE_365;
    // SubProg c_stmt pc: 266 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 268 op: NOP1 (159)
LC: // addr: 269 pc: 268 sub: 42950 op: 159
    // SubProg c_stmt pc: 269 op: STARTLINE (58)

    /** c_decl.e:711					CName(arg[argcount])*/
    // SubProg c_stmt pc: 271 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_arg_42953);
    _22691 = (object)*(((s1_ptr)_2)->base + _argcount_42956);
    // SubProg c_stmt pc: 275 op: PROC (27)
    Ref(_22691);
    _57CName(_22691);
    _22691 = NOVALUE;
    // SubProg c_stmt pc: 278 op: NOP1 (159)
LB: // addr: 279 pc: 278 sub: 42950 op: 159
    // SubProg c_stmt pc: 279 op: STARTLINE (58)

    /** c_decl.e:714				argcount += 1*/
    // SubProg c_stmt pc: 281 op: PLUS1_I (117)
    _argcount_42956 = _argcount_42956 + 1;
    // SubProg c_stmt pc: 285 op: ELSE (23)
    goto LD; // [285] 353
    // SubProg c_stmt pc: 287 op: NOP1 (159)
L6: // addr: 288 pc: 287 sub: 42950 op: 159
    // SubProg c_stmt pc: 288 op: STARTLINE (58)

    /** c_decl.e:717				c_putc(stmt[i])*/
    // SubProg c_stmt pc: 290 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22693 = (object)*(((s1_ptr)_2)->base + _i_42957);
    // SubProg c_stmt pc: 294 op: PROC (27)
    Ref(_22693);
    _54c_putc(_22693);
    _22693 = NOVALUE;
    // SubProg c_stmt pc: 297 op: STARTLINE (58)

    /** c_decl.e:718				if stmt[i] = '&' and i < length(stmt) and stmt[i+1] = '@' then*/
    // SubProg c_stmt pc: 299 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22694 = (object)*(((s1_ptr)_2)->base + _i_42957);
    // SubProg c_stmt pc: 303 op: EQUALS (3)
    if (IS_ATOM_INT(_22694)) {
        _22696 = (_22694 == 38);
    }
    else {
        _22696 = binary_op(EQUALS, _22694, 38);
    }
    _22694 = NOVALUE;
    // SubProg c_stmt pc: 307 op: SC1_AND (141)
    if (IS_ATOM_INT(_22696)) {
        if (_22696 == 0) {
            DeRef(_22697);
            _22697 = 0;
            goto LE; // [307] 322
        }
    }
    else {
        if (DBL_PTR(_22696)->dbl == 0.0) {
            DeRef(_22697);
            _22697 = 0;
            goto LE; // [307] 322
        }
    }
    // SubProg c_stmt pc: 311 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22698 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22698 = 1;
    }
    // SubProg c_stmt pc: 314 op: LESS (1)
    _22699 = (_i_42957 < _22698);
    _22698 = NOVALUE;
    // SubProg c_stmt pc: 318 op: SC2_AND (142)
    DeRef(_22697);
    _22697 = (_22699 != 0);
    // SubProg c_stmt pc: 321 op: NOP1 (159)
LE: // addr: 322 pc: 321 sub: 42950 op: 159
    // SubProg c_stmt pc: 322 op: SC1_AND_IF (146)
    if (_22697 == 0) {
        goto LF; // [322] 352
    }
    // SubProg c_stmt pc: 326 op: PLUS1 (93)
    _22701 = _i_42957 + 1;
    // SubProg c_stmt pc: 330 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22702 = (object)*(((s1_ptr)_2)->base + _22701);
    // SubProg c_stmt pc: 334 op: EQUALS (3)
    if (IS_ATOM_INT(_22702)) {
        _22703 = (_22702 == 64);
    }
    else {
        _22703 = binary_op(EQUALS, _22702, 64);
    }
    _22702 = NOVALUE;
    // SubProg c_stmt pc: 338 op: NOP1 (159)
    // SubProg c_stmt pc: 339 op: IF (20)
    if (_22703 == 0) {
        DeRef(_22703);
        _22703 = NOVALUE;
        goto LF; // [339] 352
    }
    else {
        if (!IS_ATOM_INT(_22703) && DBL_PTR(_22703)->dbl == 0.0){
            DeRef(_22703);
            _22703 = NOVALUE;
            goto LF; // [339] 352
        }
        DeRef(_22703);
        _22703 = NOVALUE;
    }
    DeRef(_22703);
    _22703 = NOVALUE;
    // SubProg c_stmt pc: 342 op: STARTLINE (58)

    /** c_decl.e:719					LeftSym = TRUE -- never say: x = x &y or andy - always leave space*/
    // SubProg c_stmt pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 346 op: ASSIGN (18)
    _57LeftSym_42127 = _6TRUE_365;
    // SubProg c_stmt pc: 349 op: INTEGER_CHECK (96)
    // SubProg c_stmt pc: 351 op: NOP1 (159)
LF: // addr: 352 pc: 351 sub: 42950 op: 159
    // SubProg c_stmt pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 42950 op: 159
    // SubProg c_stmt pc: 353 op: STARTLINE (58)

    /** c_decl.e:723			if stmt[i] = '\n' and i < length(stmt) then*/
    // SubProg c_stmt pc: 355 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_stmt_42952);
    _22704 = (object)*(((s1_ptr)_2)->base + _i_42957);
    // SubProg c_stmt pc: 359 op: EQUALS (3)
    if (IS_ATOM_INT(_22704)) {
        _22705 = (_22704 == 10);
    }
    else {
        _22705 = binary_op(EQUALS, _22704, 10);
    }
    _22704 = NOVALUE;
    // SubProg c_stmt pc: 363 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22705)) {
        if (_22705 == 0) {
            goto L10; // [363] 424
        }
    }
    else {
        if (DBL_PTR(_22705)->dbl == 0.0) {
            goto L10; // [363] 424
        }
    }
    // SubProg c_stmt pc: 367 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22707 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22707 = 1;
    }
    // SubProg c_stmt pc: 370 op: LESS (1)
    _22708 = (_i_42957 < _22707);
    _22707 = NOVALUE;
    // SubProg c_stmt pc: 374 op: NOP1 (159)
    // SubProg c_stmt pc: 375 op: IF (20)
    if (_22708 == 0)
    {
        DeRef(_22708);
        _22708 = NOVALUE;
        goto L10; // [375] 424
    }
    else{
        DeRef(_22708);
        _22708 = NOVALUE;
    }
    // SubProg c_stmt pc: 378 op: STARTLINE (58)

    /** c_decl.e:724				if emit_c_output then*/
    // SubProg c_stmt pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 382 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L11; // [382] 391
    }
    else{
    }
    // SubProg c_stmt pc: 385 op: STARTLINE (58)

    /** c_decl.e:725					adjust_indent_after(stmt)*/
    // SubProg c_stmt pc: 387 op: PROC (27)
    RefDS(_stmt_42952);
    _54adjust_indent_after(_stmt_42952);
    // SubProg c_stmt pc: 390 op: NOP1 (159)
L11: // addr: 391 pc: 390 sub: 42950 op: 159
    // SubProg c_stmt pc: 391 op: STARTLINE (58)

    /** c_decl.e:727				stmt = stmt[i+1..$]*/
    // SubProg c_stmt pc: 393 op: PLUS1 (93)
    _22709 = _i_42957 + 1;
    if (_22709 > MAXINT){
        _22709 = NewDouble((eudouble)_22709);
    }
    // SubProg c_stmt pc: 397 op: LENGTH (42)
    if (IS_SEQUENCE(_stmt_42952)){
            _22710 = SEQ_PTR(_stmt_42952)->length;
    }
    else {
        _22710 = 1;
    }
    // SubProg c_stmt pc: 400 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_stmt_42952;
    RHS_Slice(_stmt_42952, _22709, _22710);
    // SubProg c_stmt pc: 405 op: STARTLINE (58)

    /** c_decl.e:728				i = 0*/
    // SubProg c_stmt pc: 407 op: ASSIGN_I (113)
    _i_42957 = 0;
    // SubProg c_stmt pc: 410 op: STARTLINE (58)

    /** c_decl.e:729				if emit_c_output then*/
    // SubProg c_stmt pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 414 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L12; // [414] 423
    }
    else{
    }
    // SubProg c_stmt pc: 417 op: STARTLINE (58)

    /** c_decl.e:730					adjust_indent_before(stmt)*/
    // SubProg c_stmt pc: 419 op: PROC (27)
    RefDS(_stmt_42952);
    _54adjust_indent_before(_stmt_42952);
    // SubProg c_stmt pc: 422 op: NOP1 (159)
L12: // addr: 423 pc: 422 sub: 42950 op: 159
    // SubProg c_stmt pc: 423 op: NOP1 (159)
L10: // addr: 424 pc: 423 sub: 42950 op: 159
    // SubProg c_stmt pc: 424 op: STARTLINE (58)

    /** c_decl.e:734			i += 1*/
    // SubProg c_stmt pc: 426 op: PLUS1_I (117)
    _i_42957 = _i_42957 + 1;
    // SubProg c_stmt pc: 430 op: STARTLINE (58)

    /** c_decl.e:735		end while*/
    // SubProg c_stmt pc: 432 op: ENDWHILE (22)
    goto L4; // [432] 90
    // SubProg c_stmt pc: 434 op: NOP1 (159)
L5: // addr: 435 pc: 434 sub: 42950 op: 159
    // SubProg c_stmt pc: 435 op: STARTLINE (58)

    /** c_decl.e:737		if emit_c_output then*/
    // SubProg c_stmt pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt pc: 439 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L13; // [439] 448
    }
    else{
    }
    // SubProg c_stmt pc: 442 op: STARTLINE (58)

    /** c_decl.e:738			adjust_indent_after(stmt)*/
    // SubProg c_stmt pc: 444 op: PROC (27)
    RefDS(_stmt_42952);
    _54adjust_indent_after(_stmt_42952);
    // SubProg c_stmt pc: 447 op: NOP1 (159)
L13: // addr: 448 pc: 447 sub: 42950 op: 159
    // SubProg c_stmt pc: 448 op: STARTLINE (58)

    /** c_decl.e:740	end procedure*/
    // SubProg c_stmt pc: 450 op: RETURNP (29)

// Exiting block BLOCK: c_stmt

// block var stmt_42952
    DeRefDS(_stmt_42952);

// block var arg_42953
    DeRef(_arg_42953);

// block var lhs_arg_42955

// block var argcount_42956

// block var i_42957
    DeRef(_22709);
    _22709 = NOVALUE;
    DeRef(_22659);
    _22659 = NOVALUE;
    DeRef(_22679);
    _22679 = NOVALUE;
    DeRef(_22681);
    _22681 = NOVALUE;
    DeRef(_22684);
    _22684 = NOVALUE;
    DeRef(_22652);
    _22652 = NOVALUE;
    DeRef(_22686);
    _22686 = NOVALUE;
    DeRef(_22705);
    _22705 = NOVALUE;
    DeRef(_22699);
    _22699 = NOVALUE;
    DeRef(_22701);
    _22701 = NOVALUE;
    DeRef(_22668);
    _22668 = NOVALUE;
    DeRef(_22670);
    _22670 = NOVALUE;
    DeRef(_22696);
    _22696 = NOVALUE;
    DeRef(_22673);
    _22673 = NOVALUE;
    DeRef(_22675);
    _22675 = NOVALUE;
    return;
    // SubProg c_stmt pc: 453 op: BADRETURNF (43)
    ;
}


void _57c_stmt0(object _stmt_43055)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg c_stmt0 pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg c_stmt0 pc: 3 op: STARTLINE (58)

    /** c_decl.e:745		if emit_c_output then*/
    // SubProg c_stmt0 pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg c_stmt0 pc: 7 op: IF (20)
    if (_54emit_c_output_46161 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }
    // SubProg c_stmt0 pc: 10 op: STARTLINE (58)

    /** c_decl.e:746			c_stmt(stmt, {})*/
    // SubProg c_stmt0 pc: 12 op: PROC (27)
    RefDS(_stmt_43055);
    RefDS(_21958);
    _57c_stmt(_stmt_43055, _21958, 0);
    // SubProg c_stmt0 pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 43053 op: 159
    // SubProg c_stmt0 pc: 18 op: STARTLINE (58)

    /** c_decl.e:748	end procedure*/
    // SubProg c_stmt0 pc: 20 op: RETURNP (29)

// Exiting block BLOCK: c_stmt0

// block var stmt_43055
    DeRefDSi(_stmt_43055);
    return;
    // SubProg c_stmt0 pc: 23 op: BADRETURNF (43)
    ;
}


object _57needs_uninit(object _eentry_43060)
{
    object _22733 = NOVALUE; // 43096 22733
    object _22732 = NOVALUE; // 43095 22732
    object _22731 = NOVALUE; // 43093 22731
    object _22730 = NOVALUE; // 43091 22730
    object _22729 = NOVALUE; // 43090 22729
    object _22728 = NOVALUE; // 43088 22728
    object _22727 = NOVALUE; // 43086 22727
    object _22726 = NOVALUE; // 43085 22726
    object _22725 = NOVALUE; // 43083 22725
    object _22724 = NOVALUE; // 43081 22724
    object _22723 = NOVALUE; // 43080 22723
    object _22722 = NOVALUE; // 43078 22722
    object _22721 = NOVALUE; // 43076 22721
    object _22720 = NOVALUE; // 43075 22720
    object _22719 = NOVALUE; // 43073 22719
    object _22718 = NOVALUE; // 43071 22718
    object _22717 = NOVALUE; // 43070 22717
    object _22716 = NOVALUE; // 43068 22716
    object _22715 = NOVALUE; // 43066 22715
    object _22714 = NOVALUE; // 43065 22714
    object _22713 = NOVALUE; // 43063 22713
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg needs_uninit pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg needs_uninit pc: 3 op: STARTLINE (58)

    /** c_decl.e:751		if eentry[S_SCOPE] >= SC_LOCAL*/
    // SubProg needs_uninit pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22713 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 13 op: GREATEREQ (2)
    if (IS_ATOM_INT(_22713)) {
        _22714 = (_22713 >= 5);
    }
    else {
        _22714 = binary_op(GREATEREQ, _22713, 5);
    }
    _22713 = NOVALUE;
    // SubProg needs_uninit pc: 17 op: SC1_AND (141)
    if (IS_ATOM_INT(_22714)) {
        if (_22714 == 0) {
            _22715 = 0;
            goto L1; // [17] 77
        }
    }
    else {
        if (DBL_PTR(_22714)->dbl == 0.0) {
            _22715 = 0;
            goto L1; // [17] 77
        }
    }
    // SubProg needs_uninit pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 23 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22716 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 29 op: LESSEQ (5)
    if (IS_ATOM_INT(_22716)) {
        _22717 = (_22716 <= 6);
    }
    else {
        _22717 = binary_op(LESSEQ, _22716, 6);
    }
    _22716 = NOVALUE;
    // SubProg needs_uninit pc: 33 op: SC1_OR (143)
    if (IS_ATOM_INT(_22717)) {
        if (_22717 != 0) {
            _22718 = 1;
            goto L2; // [33] 53
        }
    }
    else {
        if (DBL_PTR(_22717)->dbl != 0.0) {
            _22718 = 1;
            goto L2; // [33] 53
        }
    }
    // SubProg needs_uninit pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22719 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 45 op: EQUALS (3)
    if (IS_ATOM_INT(_22719)) {
        _22720 = (_22719 == 11);
    }
    else {
        _22720 = binary_op(EQUALS, _22719, 11);
    }
    _22719 = NOVALUE;
    // SubProg needs_uninit pc: 49 op: SC2_OR (144)
    DeRef(_22718);
    if (IS_ATOM_INT(_22720))
    _22718 = (_22720 != 0);
    else
    _22718 = DBL_PTR(_22720)->dbl != 0.0;
    // SubProg needs_uninit pc: 52 op: NOP1 (159)
L2: // addr: 53 pc: 52 sub: 43058 op: 159
    // SubProg needs_uninit pc: 53 op: SC1_OR (143)
    if (_22718 != 0) {
        _22721 = 1;
        goto L3; // [53] 73
    }
    // SubProg needs_uninit pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 59 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22722 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg needs_uninit pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 65 op: EQUALS (3)
    if (IS_ATOM_INT(_22722)) {
        _22723 = (_22722 == 13);
    }
    else {
        _22723 = binary_op(EQUALS, _22722, 13);
    }
    _22722 = NOVALUE;
    // SubProg needs_uninit pc: 69 op: SC2_OR (144)
    if (IS_ATOM_INT(_22723))
    _22721 = (_22723 != 0);
    else
    _22721 = DBL_PTR(_22723)->dbl != 0.0;
    // SubProg needs_uninit pc: 72 op: NOP1 (159)
L3: // addr: 73 pc: 72 sub: 43058 op: 159
    // SubProg needs_uninit pc: 73 op: SC2_AND (142)
    DeRef(_22715);
    _22715 = (_22721 != 0);
    // SubProg needs_uninit pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 43058 op: 159
    // SubProg needs_uninit pc: 77 op: SC1_AND (141)
    if (_22715 == 0) {
        _22724 = 0;
        goto L4; // [77] 97
    }
    // SubProg needs_uninit pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22725 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg needs_uninit pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 89 op: NOTEQ (4)
    if (IS_ATOM_INT(_22725)) {
        _22726 = (_22725 != 0);
    }
    else {
        _22726 = binary_op(NOTEQ, _22725, 0);
    }
    _22725 = NOVALUE;
    // SubProg needs_uninit pc: 93 op: SC2_AND (142)
    if (IS_ATOM_INT(_22726))
    _22724 = (_22726 != 0);
    else
    _22724 = DBL_PTR(_22726)->dbl != 0.0;
    // SubProg needs_uninit pc: 96 op: NOP1 (159)
L4: // addr: 97 pc: 96 sub: 43058 op: 159
    // SubProg needs_uninit pc: 97 op: SC1_AND (141)
    if (_22724 == 0) {
        _22727 = 0;
        goto L5; // [97] 117
    }
    // SubProg needs_uninit pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 103 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    _22728 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg needs_uninit pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 109 op: NOTEQ (4)
    if (IS_ATOM_INT(_22728)) {
        _22729 = (_22728 != 99);
    }
    else {
        _22729 = binary_op(NOTEQ, _22728, 99);
    }
    _22728 = NOVALUE;
    // SubProg needs_uninit pc: 113 op: SC2_AND (142)
    if (IS_ATOM_INT(_22729))
    _22727 = (_22729 != 0);
    else
    _22727 = DBL_PTR(_22729)->dbl != 0.0;
    // SubProg needs_uninit pc: 116 op: NOP1 (159)
L5: // addr: 117 pc: 116 sub: 43058 op: 159
    // SubProg needs_uninit pc: 117 op: SC1_AND_IF (146)
    if (_22727 == 0) {
        goto L6; // [117] 150
    }
    // SubProg needs_uninit pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43060);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22731 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22731 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg needs_uninit pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg needs_uninit pc: 129 op: FIND_FROM (176)
    _22732 = find_from(_22731, _29RTN_TOKS_12080, 1);
    _22731 = NOVALUE;
    // SubProg needs_uninit pc: 134 op: NOT (7)
    _22733 = (_22732 == 0);
    _22732 = NOVALUE;
    // SubProg needs_uninit pc: 137 op: NOP1 (159)
    // SubProg needs_uninit pc: 138 op: IF (20)
    if (_22733 == 0)
    {
        DeRef(_22733);
        _22733 = NOVALUE;
        goto L6; // [138] 150
    }
    else{
        DeRef(_22733);
        _22733 = NOVALUE;
    }
    // SubProg needs_uninit pc: 141 op: STARTLINE (58)

    /** c_decl.e:757			return 1*/
    // SubProg needs_uninit pc: 143 op: RETURNF (28)

// Exiting block BLOCK: needs_uninit

// block var eentry_43060
    DeRefDS(_eentry_43060);
    DeRef(_22717);
    _22717 = NOVALUE;
    DeRef(_22729);
    _22729 = NOVALUE;
    DeRef(_22714);
    _22714 = NOVALUE;
    DeRef(_22726);
    _22726 = NOVALUE;
    DeRef(_22720);
    _22720 = NOVALUE;
    DeRef(_22723);
    _22723 = NOVALUE;
    return 1;
    // SubProg needs_uninit pc: 147 op: ELSE (23)
    goto L7; // [147] 157
    // SubProg needs_uninit pc: 149 op: NOP1 (159)
L6: // addr: 150 pc: 149 sub: 43058 op: 159
    // SubProg needs_uninit pc: 150 op: STARTLINE (58)

    /** c_decl.e:759			return 0*/
    // SubProg needs_uninit pc: 152 op: RETURNF (28)

// Exiting block BLOCK: needs_uninit

// block var eentry_43060
    DeRefDS(_eentry_43060);
    DeRef(_22717);
    _22717 = NOVALUE;
    DeRef(_22729);
    _22729 = NOVALUE;
    DeRef(_22714);
    _22714 = NOVALUE;
    DeRef(_22726);
    _22726 = NOVALUE;
    DeRef(_22720);
    _22720 = NOVALUE;
    DeRef(_22723);
    _22723 = NOVALUE;
    return 0;
    // SubProg needs_uninit pc: 156 op: NOP1 (159)
L7: // addr: 157 pc: 156 sub: 43058 op: 159
    // SubProg needs_uninit pc: 157 op: BADRETURNF (43)
    ;
}


void _57DeclareFileVars()
{
    object _s_43101 = NOVALUE;
    object _eentry_43103 = NOVALUE;
    object _cleanup_vars_43197 = NOVALUE;
    object _22816 = NOVALUE; // 43262 22816
    object _22809 = NOVALUE; // 43255 22809
// skipping _22805  name type: 0
    object _22804 = NOVALUE; // 43249 22804
// skipping _22803  name type: 0
    object _22801 = NOVALUE; // 43244 22801
    object _22800 = NOVALUE; // 43241 22800
    object _22799 = NOVALUE; // 43240 22799
    object _22797 = NOVALUE; // 43237 22797
// skipping _22796  name type: 0
// skipping _22794  name type: 0
    object _22793 = NOVALUE; // 43229 22793
// skipping _22790  name type: 0
    object _22789 = NOVALUE; // 43222 22789
// skipping _22788  name type: 0
    object _22786 = NOVALUE; // 43217 22786
    object _22785 = NOVALUE; // 43214 22785
    object _22784 = NOVALUE; // 43213 22784
    object _22782 = NOVALUE; // 43210 22782
// skipping _22781  name type: 0
// skipping _22779  name type: 0
    object _22778 = NOVALUE; // 43202 22778
// skipping _22776  name type: 0
// skipping _22775  name type: 0
    object _22774 = NOVALUE; // 43190 22774
    object _22773 = NOVALUE; // 43187 22773
    object _22772 = NOVALUE; // 43184 22772
    object _22769 = NOVALUE; // 43176 22769
    object _22768 = NOVALUE; // 43174 22768
    object _22766 = NOVALUE; // 43170 22766
    object _22765 = NOVALUE; // 43169 22765
    object _22764 = NOVALUE; // 43165 22764
    object _22763 = NOVALUE; // 43162 22763
// skipping _22760  name type: 0
    object _22759 = NOVALUE; // 43152 22759
    object _22758 = NOVALUE; // 43149 22758
    object _22757 = NOVALUE; // 43148 22757
    object _22756 = NOVALUE; // 43146 22756
    object _22755 = NOVALUE; // 43144 22755
    object _22754 = NOVALUE; // 43143 22754
    object _22753 = NOVALUE; // 43141 22753
    object _22752 = NOVALUE; // 43139 22752
    object _22751 = NOVALUE; // 43138 22751
    object _22750 = NOVALUE; // 43136 22750
    object _22749 = NOVALUE; // 43134 22749
    object _22748 = NOVALUE; // 43133 22748
    object _22747 = NOVALUE; // 43131 22747
    object _22746 = NOVALUE; // 43129 22746
    object _22745 = NOVALUE; // 43128 22745
    object _22744 = NOVALUE; // 43126 22744
    object _22743 = NOVALUE; // 43124 22743
    object _22742 = NOVALUE; // 43123 22742
    object _22741 = NOVALUE; // 43121 22741
    object _22740 = NOVALUE; // 43119 22740
    object _22739 = NOVALUE; // 43118 22739
    object _22738 = NOVALUE; // 43116 22738
// skipping _22737  name type: 0
// skipping _22736  name type: 0
    object _22735 = NOVALUE; // 43108 22735
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareFileVars pc: 1 op: STARTLINE (58)

    /** c_decl.e:769		c_puts("// Declaring file vars\n")*/
    // SubProg DeclareFileVars pc: 3 op: PROC (27)
    RefDS(_22734);
    _54c_puts(_22734);
    // SubProg DeclareFileVars pc: 6 op: STARTLINE (58)

    /** c_decl.e:770		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 8 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22735 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg DeclareFileVars pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22735);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22735 = NOVALUE;
    // SubProg DeclareFileVars pc: 24 op: STARTLINE (58)

    /** c_decl.e:772		while s do*/
    // SubProg DeclareFileVars pc: 26 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 28 op: NOPWHILE (158)
L1: // addr: 29 pc: 28 sub: 43098 op: 158
    // SubProg DeclareFileVars pc: 29 op: WHILE (47)
    if (_s_43101 == 0)
    {
        goto L2; // [29] 328
    }
    else{
    }
    // SubProg DeclareFileVars pc: 32 op: STARTLINE (58)

    /** c_decl.e:773			eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 36 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43103);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_43103 = (object)*(((s1_ptr)_2)->base + _s_43101);
    Ref(_eentry_43103);
    // SubProg DeclareFileVars pc: 40 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 42 op: STARTLINE (58)

    /** c_decl.e:774			if eentry[S_SCOPE] >= SC_LOCAL*/
    // SubProg DeclareFileVars pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 46 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22738 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 52 op: GREATEREQ (2)
    if (IS_ATOM_INT(_22738)) {
        _22739 = (_22738 >= 5);
    }
    else {
        _22739 = binary_op(GREATEREQ, _22738, 5);
    }
    _22738 = NOVALUE;
    // SubProg DeclareFileVars pc: 56 op: SC1_AND (141)
    if (IS_ATOM_INT(_22739)) {
        if (_22739 == 0) {
            DeRef(_22740);
            _22740 = 0;
            goto L3; // [56] 116
        }
    }
    else {
        if (DBL_PTR(_22739)->dbl == 0.0) {
            DeRef(_22740);
            _22740 = 0;
            goto L3; // [56] 116
        }
    }
    // SubProg DeclareFileVars pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22741 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 68 op: LESSEQ (5)
    if (IS_ATOM_INT(_22741)) {
        _22742 = (_22741 <= 6);
    }
    else {
        _22742 = binary_op(LESSEQ, _22741, 6);
    }
    _22741 = NOVALUE;
    // SubProg DeclareFileVars pc: 72 op: SC1_OR (143)
    if (IS_ATOM_INT(_22742)) {
        if (_22742 != 0) {
            DeRef(_22743);
            _22743 = 1;
            goto L4; // [72] 92
        }
    }
    else {
        if (DBL_PTR(_22742)->dbl != 0.0) {
            DeRef(_22743);
            _22743 = 1;
            goto L4; // [72] 92
        }
    }
    // SubProg DeclareFileVars pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 78 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22744 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 84 op: EQUALS (3)
    if (IS_ATOM_INT(_22744)) {
        _22745 = (_22744 == 11);
    }
    else {
        _22745 = binary_op(EQUALS, _22744, 11);
    }
    _22744 = NOVALUE;
    // SubProg DeclareFileVars pc: 88 op: SC2_OR (144)
    DeRef(_22743);
    if (IS_ATOM_INT(_22745))
    _22743 = (_22745 != 0);
    else
    _22743 = DBL_PTR(_22745)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 92 op: SC1_OR (143)
    if (_22743 != 0) {
        _22746 = 1;
        goto L5; // [92] 112
    }
    // SubProg DeclareFileVars pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22747 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg DeclareFileVars pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 104 op: EQUALS (3)
    if (IS_ATOM_INT(_22747)) {
        _22748 = (_22747 == 13);
    }
    else {
        _22748 = binary_op(EQUALS, _22747, 13);
    }
    _22747 = NOVALUE;
    // SubProg DeclareFileVars pc: 108 op: SC2_OR (144)
    if (IS_ATOM_INT(_22748))
    _22746 = (_22748 != 0);
    else
    _22746 = DBL_PTR(_22748)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 111 op: NOP1 (159)
L5: // addr: 112 pc: 111 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 112 op: SC2_AND (142)
    DeRef(_22740);
    _22740 = (_22746 != 0);
    // SubProg DeclareFileVars pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 116 op: SC1_AND (141)
    if (_22740 == 0) {
        _22749 = 0;
        goto L6; // [116] 136
    }
    // SubProg DeclareFileVars pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22750 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg DeclareFileVars pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 128 op: NOTEQ (4)
    if (IS_ATOM_INT(_22750)) {
        _22751 = (_22750 != 0);
    }
    else {
        _22751 = binary_op(NOTEQ, _22750, 0);
    }
    _22750 = NOVALUE;
    // SubProg DeclareFileVars pc: 132 op: SC2_AND (142)
    if (IS_ATOM_INT(_22751))
    _22749 = (_22751 != 0);
    else
    _22749 = DBL_PTR(_22751)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 135 op: NOP1 (159)
L6: // addr: 136 pc: 135 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 136 op: SC1_AND (141)
    if (_22749 == 0) {
        _22752 = 0;
        goto L7; // [136] 156
    }
    // SubProg DeclareFileVars pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 142 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22753 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg DeclareFileVars pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 148 op: NOTEQ (4)
    if (IS_ATOM_INT(_22753)) {
        _22754 = (_22753 != 99);
    }
    else {
        _22754 = binary_op(NOTEQ, _22753, 99);
    }
    _22753 = NOVALUE;
    // SubProg DeclareFileVars pc: 152 op: SC2_AND (142)
    if (IS_ATOM_INT(_22754))
    _22752 = (_22754 != 0);
    else
    _22752 = DBL_PTR(_22754)->dbl != 0.0;
    // SubProg DeclareFileVars pc: 155 op: NOP1 (159)
L7: // addr: 156 pc: 155 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 156 op: SC1_AND_IF (146)
    if (_22752 == 0) {
        goto L8; // [156] 307
    }
    // SubProg DeclareFileVars pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22756 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22756 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg DeclareFileVars pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 168 op: FIND_FROM (176)
    _22757 = find_from(_22756, _29RTN_TOKS_12080, 1);
    _22756 = NOVALUE;
    // SubProg DeclareFileVars pc: 173 op: NOT (7)
    _22758 = (_22757 == 0);
    _22757 = NOVALUE;
    // SubProg DeclareFileVars pc: 176 op: NOP1 (159)
    // SubProg DeclareFileVars pc: 177 op: IF (20)
    if (_22758 == 0)
    {
        DeRef(_22758);
        _22758 = NOVALUE;
        goto L8; // [177] 307
    }
    else{
        DeRef(_22758);
        _22758 = NOVALUE;
    }
    // SubProg DeclareFileVars pc: 180 op: STARTLINE (58)

    /** c_decl.e:780				if eentry[S_TOKEN] = PROC then*/
    // SubProg DeclareFileVars pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 184 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22759 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22759 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg DeclareFileVars pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 190 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22759, 27)){
        _22759 = NOVALUE;
        goto L9; // [190] 202
    }
    _22759 = NOVALUE;
    // SubProg DeclareFileVars pc: 194 op: STARTLINE (58)

    /** c_decl.e:781					c_puts( "void ")*/
    // SubProg DeclareFileVars pc: 196 op: PROC (27)
    RefDS(_22761);
    _54c_puts(_22761);
    // SubProg DeclareFileVars pc: 199 op: ELSE (23)
    goto LA; // [199] 208
    // SubProg DeclareFileVars pc: 201 op: NOP1 (159)
L9: // addr: 202 pc: 201 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 202 op: STARTLINE (58)

    /** c_decl.e:783					c_puts("object ")*/
    // SubProg DeclareFileVars pc: 204 op: PROC (27)
    RefDS(_22762);
    _54c_puts(_22762);
    // SubProg DeclareFileVars pc: 207 op: NOP1 (159)
LA: // addr: 208 pc: 207 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 208 op: STARTLINE (58)

    /** c_decl.e:785				c_printf("_%d", eentry[S_FILE_NO])*/
    // SubProg DeclareFileVars pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 212 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22763 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22763 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg DeclareFileVars pc: 216 op: PROC (27)
    RefDS(_22090);
    Ref(_22763);
    _54c_printf(_22090, _22763);
    _22763 = NOVALUE;
    // SubProg DeclareFileVars pc: 220 op: STARTLINE (58)

    /** c_decl.e:786				c_puts(eentry[S_NAME])*/
    // SubProg DeclareFileVars pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 224 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22764 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22764 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    // SubProg DeclareFileVars pc: 228 op: PROC (27)
    Ref(_22764);
    _54c_puts(_22764);
    _22764 = NOVALUE;
    // SubProg DeclareFileVars pc: 231 op: STARTLINE (58)

    /** c_decl.e:787				if is_integer( eentry[S_OBJ] ) then*/
    // SubProg DeclareFileVars pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 235 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22765 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg DeclareFileVars pc: 239 op: PROC (27)
    Ref(_22765);
    _22766 = _5is_integer(_22765);
    _22765 = NOVALUE;
    // SubProg DeclareFileVars pc: 243 op: IF (20)
    if (_22766 == 0) {
        DeRef(_22766);
        _22766 = NOVALUE;
        goto LB; // [243] 267
    }
    else {
        if (!IS_ATOM_INT(_22766) && DBL_PTR(_22766)->dbl == 0.0){
            DeRef(_22766);
            _22766 = NOVALUE;
            goto LB; // [243] 267
        }
        DeRef(_22766);
        _22766 = NOVALUE;
    }
    DeRef(_22766);
    _22766 = NOVALUE;
    // SubProg DeclareFileVars pc: 246 op: STARTLINE (58)

    /** c_decl.e:788						c_printf(" = %d%s;\n", { eentry[S_OBJ], LL_suffix} )*/
    // SubProg DeclareFileVars pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    _22768 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg DeclareFileVars pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 256 op: RIGHT_BRACE_2 (85)
    RefDS(_58LL_suffix_29598);
    Ref(_22768);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _22768;
    ((intptr_t *)_2)[2] = _58LL_suffix_29598;
    _22769 = MAKE_SEQ(_1);
    _22768 = NOVALUE;
    // SubProg DeclareFileVars pc: 260 op: PROC (27)
    RefDS(_22767);
    _54c_printf(_22767, _22769);
    _22769 = NOVALUE;
    // SubProg DeclareFileVars pc: 264 op: ELSE (23)
    goto LC; // [264] 273
    // SubProg DeclareFileVars pc: 266 op: NOP1 (159)
LB: // addr: 267 pc: 266 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 267 op: STARTLINE (58)

    /** c_decl.e:790					c_puts(" = NOVALUE;\n")*/
    // SubProg DeclareFileVars pc: 269 op: PROC (27)
    RefDS(_22770);
    _54c_puts(_22770);
    // SubProg DeclareFileVars pc: 272 op: NOP1 (159)
LC: // addr: 273 pc: 272 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 273 op: STARTLINE (58)

    /** c_decl.e:793				c_hputs("extern object ")*/
    // SubProg DeclareFileVars pc: 275 op: PROC (27)
    RefDS(_22771);
    _54c_hputs(_22771);
    // SubProg DeclareFileVars pc: 278 op: STARTLINE (58)

    /** c_decl.e:794				c_hprintf("_%d", eentry[S_FILE_NO])*/
    // SubProg DeclareFileVars pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 282 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22772 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22772 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg DeclareFileVars pc: 286 op: PROC (27)
    RefDS(_22090);
    Ref(_22772);
    _54c_hprintf(_22090, _22772);
    _22772 = NOVALUE;
    // SubProg DeclareFileVars pc: 290 op: STARTLINE (58)

    /** c_decl.e:795				c_hputs(eentry[S_NAME])*/
    // SubProg DeclareFileVars pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 294 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22773 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22773 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    // SubProg DeclareFileVars pc: 298 op: PROC (27)
    Ref(_22773);
    _54c_hputs(_22773);
    _22773 = NOVALUE;
    // SubProg DeclareFileVars pc: 301 op: STARTLINE (58)

    /** c_decl.e:797				c_hputs(";\n")*/
    // SubProg DeclareFileVars pc: 303 op: PROC (27)
    RefDS(_22246);
    _54c_hputs(_22246);
    // SubProg DeclareFileVars pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 307 op: STARTLINE (58)

    /** c_decl.e:799			s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 311 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22774 = (object)*(((s1_ptr)_2)->base + _s_43101);
    // SubProg DeclareFileVars pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 317 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22774);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22774 = NOVALUE;
    // SubProg DeclareFileVars pc: 323 op: STARTLINE (58)

    /** c_decl.e:800		end while*/
    // SubProg DeclareFileVars pc: 325 op: ENDWHILE (22)
    goto L1; // [325] 29
    // SubProg DeclareFileVars pc: 327 op: NOP1 (159)
L2: // addr: 328 pc: 327 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 328 op: STARTLINE (58)

    /** c_decl.e:801		c_puts("\n")*/
    // SubProg DeclareFileVars pc: 330 op: PROC (27)
    RefDS(_22165);
    _54c_puts(_22165);
    // SubProg DeclareFileVars pc: 333 op: STARTLINE (58)

    /** c_decl.e:802		c_hputs("\n")*/
    // SubProg DeclareFileVars pc: 335 op: PROC (27)
    RefDS(_22165);
    _54c_hputs(_22165);
    // SubProg DeclareFileVars pc: 338 op: STARTLINE (58)

    /** c_decl.e:803		if dll_option or debug_option then*/
    // SubProg DeclareFileVars pc: 340 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 342 op: SC1_OR_IF (147)
    if (_57dll_option_42130 != 0) {
        goto LD; // [342] 353
    }
    // SubProg DeclareFileVars pc: 346 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 348 op: NOP1 (159)
    // SubProg DeclareFileVars pc: 349 op: IF (20)
    if (_57debug_option_42140 == 0)
    {
        goto LE; // [349] 707
    }
    else{
    }
    // SubProg DeclareFileVars pc: 352 op: NOP1 (159)
LD: // addr: 353 pc: 352 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 353 op: STARTLINE (58)

    /** c_decl.e:804			integer cleanup_vars = 0*/
    // SubProg DeclareFileVars pc: 355 op: ASSIGN_I (113)
    _cleanup_vars_43197 = 0;
    // SubProg DeclareFileVars pc: 358 op: STARTLINE (58)

    /** c_decl.e:805			c_puts("// Declaring var array for cleanup\n")*/
    // SubProg DeclareFileVars pc: 360 op: PROC (27)
    RefDS(_22777);
    _54c_puts(_22777);
    // SubProg DeclareFileVars pc: 363 op: STARTLINE (58)

    /** c_decl.e:806			s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 365 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 369 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22778 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg DeclareFileVars pc: 373 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 375 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22778);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22778 = NOVALUE;
    // SubProg DeclareFileVars pc: 381 op: STARTLINE (58)

    /** c_decl.e:807			c_stmt0( "object_ptr _0var_cleanup[] = {\n" )*/
    // SubProg DeclareFileVars pc: 383 op: PROC (27)
    RefDS(_22780);
    _57c_stmt0(_22780);
    // SubProg DeclareFileVars pc: 386 op: STARTLINE (58)

    /** c_decl.e:808			while s do*/
    // SubProg DeclareFileVars pc: 388 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 390 op: NOPWHILE (158)
LF: // addr: 391 pc: 390 sub: 43098 op: 158
    // SubProg DeclareFileVars pc: 391 op: WHILE (47)
    if (_s_43101 == 0)
    {
        goto L10; // [391] 473
    }
    else{
    }
    // SubProg DeclareFileVars pc: 394 op: STARTLINE (58)

    /** c_decl.e:809				eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 398 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43103);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_43103 = (object)*(((s1_ptr)_2)->base + _s_43101);
    Ref(_eentry_43103);
    // SubProg DeclareFileVars pc: 402 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 404 op: STARTLINE (58)

    /** c_decl.e:810				if needs_uninit( eentry ) then*/
    // SubProg DeclareFileVars pc: 406 op: PROC (27)
    RefDS(_eentry_43103);
    _22782 = _57needs_uninit(_eentry_43103);
    // SubProg DeclareFileVars pc: 410 op: IF (20)
    if (_22782 == 0) {
        DeRef(_22782);
        _22782 = NOVALUE;
        goto L11; // [410] 452
    }
    else {
        if (!IS_ATOM_INT(_22782) && DBL_PTR(_22782)->dbl == 0.0){
            DeRef(_22782);
            _22782 = NOVALUE;
            goto L11; // [410] 452
        }
        DeRef(_22782);
        _22782 = NOVALUE;
    }
    DeRef(_22782);
    _22782 = NOVALUE;
    // SubProg DeclareFileVars pc: 413 op: STARTLINE (58)

    /** c_decl.e:812					c_stmt0( sprintf("&_%d", eentry[S_FILE_NO]))*/
    // SubProg DeclareFileVars pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 417 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22784 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22784 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg DeclareFileVars pc: 421 op: SPRINTF (53)
    _22785 = EPrintf(-9999999, _22783, _22784);
    _22784 = NOVALUE;
    // SubProg DeclareFileVars pc: 425 op: PROC (27)
    _57c_stmt0(_22785);
    _22785 = NOVALUE;
    // SubProg DeclareFileVars pc: 428 op: STARTLINE (58)

    /** c_decl.e:813					c_puts(eentry[S_NAME] )*/
    // SubProg DeclareFileVars pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 432 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22786 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22786 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    // SubProg DeclareFileVars pc: 436 op: PROC (27)
    Ref(_22786);
    _54c_puts(_22786);
    _22786 = NOVALUE;
    // SubProg DeclareFileVars pc: 439 op: STARTLINE (58)

    /** c_decl.e:814					c_printf(", // %d\n", cleanup_vars )*/
    // SubProg DeclareFileVars pc: 441 op: PROC (27)
    RefDS(_22787);
    _54c_printf(_22787, _cleanup_vars_43197);
    // SubProg DeclareFileVars pc: 445 op: STARTLINE (58)

    /** c_decl.e:815					cleanup_vars += 1*/
    // SubProg DeclareFileVars pc: 447 op: PLUS1_I (117)
    _cleanup_vars_43197 = _cleanup_vars_43197 + 1;
    // SubProg DeclareFileVars pc: 451 op: NOP1 (159)
L11: // addr: 452 pc: 451 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 452 op: STARTLINE (58)

    /** c_decl.e:818				s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 456 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22789 = (object)*(((s1_ptr)_2)->base + _s_43101);
    // SubProg DeclareFileVars pc: 460 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 462 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22789);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22789 = NOVALUE;
    // SubProg DeclareFileVars pc: 468 op: STARTLINE (58)

    /** c_decl.e:819			end while*/
    // SubProg DeclareFileVars pc: 470 op: ENDWHILE (22)
    goto LF; // [470] 391
    // SubProg DeclareFileVars pc: 472 op: NOP1 (159)
L10: // addr: 473 pc: 472 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 473 op: STARTLINE (58)

    /** c_decl.e:820			c_stmt0( "0\n" )*/
    // SubProg DeclareFileVars pc: 475 op: PROC (27)
    RefDS(_22791);
    _57c_stmt0(_22791);
    // SubProg DeclareFileVars pc: 478 op: STARTLINE (58)

    /** c_decl.e:821			c_stmt0( "};\n" )*/
    // SubProg DeclareFileVars pc: 480 op: PROC (27)
    RefDS(_22792);
    _57c_stmt0(_22792);
    // SubProg DeclareFileVars pc: 483 op: STARTLINE (58)

    /** c_decl.e:822			s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareFileVars pc: 485 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 487 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 489 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22793 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg DeclareFileVars pc: 493 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 495 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22793);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22793 = NOVALUE;
    // SubProg DeclareFileVars pc: 501 op: STARTLINE (58)

    /** c_decl.e:823			c_stmt0( "char *_0var_cleanup_name[] = {\n" )*/
    // SubProg DeclareFileVars pc: 503 op: PROC (27)
    RefDS(_22795);
    _57c_stmt0(_22795);
    // SubProg DeclareFileVars pc: 506 op: STARTLINE (58)

    /** c_decl.e:824			cleanup_vars = 0*/
    // SubProg DeclareFileVars pc: 508 op: ASSIGN_I (113)
    _cleanup_vars_43197 = 0;
    // SubProg DeclareFileVars pc: 511 op: STARTLINE (58)

    /** c_decl.e:825			while s do*/
    // SubProg DeclareFileVars pc: 513 op: NOP2 (110)
    // SubProg DeclareFileVars pc: 515 op: NOPWHILE (158)
L12: // addr: 516 pc: 515 sub: 43098 op: 158
    // SubProg DeclareFileVars pc: 516 op: WHILE (47)
    if (_s_43101 == 0)
    {
        goto L13; // [516] 598
    }
    else{
    }
    // SubProg DeclareFileVars pc: 519 op: STARTLINE (58)

    /** c_decl.e:826				eentry = SymTab[s]*/
    // SubProg DeclareFileVars pc: 521 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 523 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43103);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_43103 = (object)*(((s1_ptr)_2)->base + _s_43101);
    Ref(_eentry_43103);
    // SubProg DeclareFileVars pc: 527 op: SEQUENCE_CHECK (97)
    // SubProg DeclareFileVars pc: 529 op: STARTLINE (58)

    /** c_decl.e:827				if needs_uninit( eentry ) then*/
    // SubProg DeclareFileVars pc: 531 op: PROC (27)
    RefDS(_eentry_43103);
    _22797 = _57needs_uninit(_eentry_43103);
    // SubProg DeclareFileVars pc: 535 op: IF (20)
    if (_22797 == 0) {
        DeRef(_22797);
        _22797 = NOVALUE;
        goto L14; // [535] 577
    }
    else {
        if (!IS_ATOM_INT(_22797) && DBL_PTR(_22797)->dbl == 0.0){
            DeRef(_22797);
            _22797 = NOVALUE;
            goto L14; // [535] 577
        }
        DeRef(_22797);
        _22797 = NOVALUE;
    }
    DeRef(_22797);
    _22797 = NOVALUE;
    // SubProg DeclareFileVars pc: 538 op: STARTLINE (58)

    /** c_decl.e:828					c_stmt0( sprintf("\"_%d", eentry[S_FILE_NO]))*/
    // SubProg DeclareFileVars pc: 540 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 542 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22799 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22799 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg DeclareFileVars pc: 546 op: SPRINTF (53)
    _22800 = EPrintf(-9999999, _22798, _22799);
    _22799 = NOVALUE;
    // SubProg DeclareFileVars pc: 550 op: PROC (27)
    _57c_stmt0(_22800);
    _22800 = NOVALUE;
    // SubProg DeclareFileVars pc: 553 op: STARTLINE (58)

    /** c_decl.e:829					c_puts(eentry[S_NAME] )*/
    // SubProg DeclareFileVars pc: 555 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 557 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eentry_43103);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22801 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22801 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    // SubProg DeclareFileVars pc: 561 op: PROC (27)
    Ref(_22801);
    _54c_puts(_22801);
    _22801 = NOVALUE;
    // SubProg DeclareFileVars pc: 564 op: STARTLINE (58)

    /** c_decl.e:830					c_printf("\", // %d\n", cleanup_vars )*/
    // SubProg DeclareFileVars pc: 566 op: PROC (27)
    RefDS(_22802);
    _54c_printf(_22802, _cleanup_vars_43197);
    // SubProg DeclareFileVars pc: 570 op: STARTLINE (58)

    /** c_decl.e:831					cleanup_vars += 1*/
    // SubProg DeclareFileVars pc: 572 op: PLUS1_I (117)
    _cleanup_vars_43197 = _cleanup_vars_43197 + 1;
    // SubProg DeclareFileVars pc: 576 op: NOP1 (159)
L14: // addr: 577 pc: 576 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 577 op: STARTLINE (58)

    /** c_decl.e:834				s = SymTab[s][S_NEXT]*/
    // SubProg DeclareFileVars pc: 579 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 581 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22804 = (object)*(((s1_ptr)_2)->base + _s_43101);
    // SubProg DeclareFileVars pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareFileVars pc: 587 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22804);
    _s_43101 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43101)){
        _s_43101 = (object)DBL_PTR(_s_43101)->dbl;
    }
    _22804 = NOVALUE;
    // SubProg DeclareFileVars pc: 593 op: STARTLINE (58)

    /** c_decl.e:835			end while*/
    // SubProg DeclareFileVars pc: 595 op: ENDWHILE (22)
    goto L12; // [595] 516
    // SubProg DeclareFileVars pc: 597 op: NOP1 (159)
L13: // addr: 598 pc: 597 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 598 op: STARTLINE (58)

    /** c_decl.e:836			c_stmt0( "0\n" )*/
    // SubProg DeclareFileVars pc: 600 op: PROC (27)
    RefDS(_22791);
    _57c_stmt0(_22791);
    // SubProg DeclareFileVars pc: 603 op: STARTLINE (58)

    /** c_decl.e:837			c_stmt0( "};\n" )*/
    // SubProg DeclareFileVars pc: 605 op: PROC (27)
    RefDS(_22792);
    _57c_stmt0(_22792);
    // SubProg DeclareFileVars pc: 608 op: STARTLINE (58)

    /** c_decl.e:838			c_stmt0( "void _0cleanup_vars(){\n" )*/
    // SubProg DeclareFileVars pc: 610 op: PROC (27)
    RefDS(_22806);
    _57c_stmt0(_22806);
    // SubProg DeclareFileVars pc: 613 op: STARTLINE (58)

    /** c_decl.e:839				c_stmt0( "int i;\n" )*/
    // SubProg DeclareFileVars pc: 615 op: PROC (27)
    RefDS(_22051);
    _57c_stmt0(_22051);
    // SubProg DeclareFileVars pc: 618 op: STARTLINE (58)

    /** c_decl.e:840				c_stmt0( "object x;\n" )*/
    // SubProg DeclareFileVars pc: 620 op: PROC (27)
    RefDS(_22807);
    _57c_stmt0(_22807);
    // SubProg DeclareFileVars pc: 623 op: STARTLINE (58)

    /** c_decl.e:841				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    // SubProg DeclareFileVars pc: 625 op: SPRINTF (53)
    _22809 = EPrintf(-9999999, _22808, _cleanup_vars_43197);
    // SubProg DeclareFileVars pc: 629 op: PROC (27)
    _57c_stmt0(_22809);
    _22809 = NOVALUE;
    // SubProg DeclareFileVars pc: 632 op: STARTLINE (58)

    /** c_decl.e:842					c_stmt0( "x = *_0var_cleanup[i];\n" )*/
    // SubProg DeclareFileVars pc: 634 op: PROC (27)
    RefDS(_22810);
    _57c_stmt0(_22810);
    // SubProg DeclareFileVars pc: 637 op: STARTLINE (58)

    //c_decl.e:843					c_stmt0( "if( x >= NOVALUE ) /* do nothing */;\n" )
    // SubProg DeclareFileVars pc: 639 op: PROC (27)
    RefDS(_22811);
    _57c_stmt0(_22811);
    // SubProg DeclareFileVars pc: 642 op: STARTLINE (58)

    /** c_decl.e:844					c_stmt0( "else if ( IS_ATOM_DBL( x ) && DBL_PTR( x )->cleanup != 0) {\n")*/
    // SubProg DeclareFileVars pc: 644 op: PROC (27)
    RefDS(_22812);
    _57c_stmt0(_22812);
    // SubProg DeclareFileVars pc: 647 op: STARTLINE (58)

    /** c_decl.e:845						c_stmt0( "cleanup_double( DBL_PTR( x ) );\n")*/
    // SubProg DeclareFileVars pc: 649 op: PROC (27)
    RefDS(_22813);
    _57c_stmt0(_22813);
    // SubProg DeclareFileVars pc: 652 op: STARTLINE (58)

    /** c_decl.e:846					c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 654 op: PROC (27)
    RefDS(_15963);
    _57c_stmt0(_15963);
    // SubProg DeclareFileVars pc: 657 op: STARTLINE (58)

    /** c_decl.e:847						c_stmt0( "else if (IS_SEQUENCE( x ) && SEQ_PTR( x )->cleanup != 0 ) {\n")*/
    // SubProg DeclareFileVars pc: 659 op: PROC (27)
    RefDS(_22814);
    _57c_stmt0(_22814);
    // SubProg DeclareFileVars pc: 662 op: STARTLINE (58)

    /** c_decl.e:848						c_stmt0( "cleanup_sequence( SEQ_PTR( x ) );\n")*/
    // SubProg DeclareFileVars pc: 664 op: PROC (27)
    RefDS(_22815);
    _57c_stmt0(_22815);
    // SubProg DeclareFileVars pc: 667 op: STARTLINE (58)

    /** c_decl.e:849					c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 669 op: PROC (27)
    RefDS(_15963);
    _57c_stmt0(_15963);
    // SubProg DeclareFileVars pc: 672 op: STARTLINE (58)

    /** c_decl.e:850				c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 674 op: PROC (27)
    RefDS(_15963);
    _57c_stmt0(_15963);
    // SubProg DeclareFileVars pc: 677 op: STARTLINE (58)

    /** c_decl.e:851				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    // SubProg DeclareFileVars pc: 679 op: SPRINTF (53)
    _22816 = EPrintf(-9999999, _22808, _cleanup_vars_43197);
    // SubProg DeclareFileVars pc: 683 op: PROC (27)
    _57c_stmt0(_22816);
    _22816 = NOVALUE;
    // SubProg DeclareFileVars pc: 686 op: STARTLINE (58)

    /** c_decl.e:852					c_stmt0( "DeRef( *_0var_cleanup[i] );\n" )*/
    // SubProg DeclareFileVars pc: 688 op: PROC (27)
    RefDS(_22817);
    _57c_stmt0(_22817);
    // SubProg DeclareFileVars pc: 691 op: STARTLINE (58)

    /** c_decl.e:853					c_stmt0( "*_0var_cleanup[i] = NOVALUE;\n" )*/
    // SubProg DeclareFileVars pc: 693 op: PROC (27)
    RefDS(_22818);
    _57c_stmt0(_22818);
    // SubProg DeclareFileVars pc: 696 op: STARTLINE (58)

    /** c_decl.e:854				c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 698 op: PROC (27)
    RefDS(_15963);
    _57c_stmt0(_15963);
    // SubProg DeclareFileVars pc: 701 op: STARTLINE (58)

    /** c_decl.e:855			c_stmt0( "}\n" )*/
    // SubProg DeclareFileVars pc: 703 op: PROC (27)
    RefDS(_15963);
    _57c_stmt0(_15963);
    // SubProg DeclareFileVars pc: 706 op: NOP1 (159)
LE: // addr: 707 pc: 706 sub: 43098 op: 159
    // SubProg DeclareFileVars pc: 707 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cleanup_vars_43197
    // SubProg DeclareFileVars pc: 709 op: STARTLINE (58)

    /** c_decl.e:857	end procedure*/
    // SubProg DeclareFileVars pc: 711 op: RETURNP (29)

// Exiting block BLOCK: DeclareFileVars

// block var s_43101

// block var eentry_43103
    DeRef(_eentry_43103);
    DeRef(_22739);
    _22739 = NOVALUE;
    DeRef(_22751);
    _22751 = NOVALUE;
    DeRef(_22754);
    _22754 = NOVALUE;
    DeRef(_22745);
    _22745 = NOVALUE;
    DeRef(_22742);
    _22742 = NOVALUE;
    DeRef(_22748);
    _22748 = NOVALUE;
    return;
    // SubProg DeclareFileVars pc: 714 op: BADRETURNF (43)
    ;
}


object _57PromoteTypeInfo()
{
    object _updsym_43268 = NOVALUE;
    object _s_43270 = NOVALUE;
    object _sym_43271 = NOVALUE;
    object _symo_43272 = NOVALUE;
    object _upd_43501 = NOVALUE;
// skipping _22919  name type: 0
// skipping _22918  name type: 0
    object _22917 = NOVALUE; // 43528 22917
// skipping _22916  name type: 0
    object _22915 = NOVALUE; // 43524 22915
    object _22914 = NOVALUE; // 43522 22914
    object _22913 = NOVALUE; // 43519 22913
    object _22912 = NOVALUE; // 43517 22912
// skipping _22911  name type: 0
    object _22910 = NOVALUE; // 43513 22910
// skipping _22909  name type: 0
    object _22908 = NOVALUE; // 43510 22908
    object _22907 = NOVALUE; // 43508 22907
    object _22906 = NOVALUE; // 43506 22906
    object _22905 = NOVALUE; // 43504 22905
    object _22904 = NOVALUE; // 43500 22904
// skipping _22903  name type: 0
// skipping _22902  name type: 0
// skipping _22901  name type: 0
    object _22900 = NOVALUE; // 43491 22900
// skipping _22899  name type: 0
// skipping _22898  name type: 0
    object _22897 = NOVALUE; // 43483 22897
    object _22896 = NOVALUE; // 43480 22896
    object _22895 = NOVALUE; // 43478 22895
    object _22894 = NOVALUE; // 43476 22894
    object _22893 = NOVALUE; // 43475 22893
    object _22892 = NOVALUE; // 43474 22892
    object _22891 = NOVALUE; // 43471 22891
    object _22890 = NOVALUE; // 43468 22890
    object _22889 = NOVALUE; // 43465 22889
    object _22888 = NOVALUE; // 43457 22888
    object _22887 = NOVALUE; // 43455 22887
// skipping _22886  name type: 0
    object _22885 = NOVALUE; // 43452 22885
    object _22884 = NOVALUE; // 43451 22884
    object _22883 = NOVALUE; // 43449 22883
    object _22882 = NOVALUE; // 43446 22882
    object _22881 = NOVALUE; // 43444 22881
    object _22880 = NOVALUE; // 43442 22880
    object _22879 = NOVALUE; // 43441 22879
    object _22878 = NOVALUE; // 43439 22878
    object _22877 = NOVALUE; // 43436 22877
    object _22876 = NOVALUE; // 43433 22876
// skipping _22875  name type: 0
    object _22874 = NOVALUE; // 43426 22874
    object _22873 = NOVALUE; // 43424 22873
    object _22872 = NOVALUE; // 43419 22872
// skipping _22871  name type: 0
    object _22870 = NOVALUE; // 43411 22870
    object _22869 = NOVALUE; // 43406 22869
    object _22868 = NOVALUE; // 43403 22868
// skipping _22867  name type: 0
    object _22866 = NOVALUE; // 43396 22866
    object _22865 = NOVALUE; // 43394 22865
    object _22864 = NOVALUE; // 43391 22864
    object _22863 = NOVALUE; // 43388 22863
    object _22862 = NOVALUE; // 43385 22862
    object _22861 = NOVALUE; // 43377 22861
    object _22860 = NOVALUE; // 43375 22860
// skipping _22859  name type: 0
    object _22858 = NOVALUE; // 43372 22858
    object _22857 = NOVALUE; // 43371 22857
    object _22856 = NOVALUE; // 43369 22856
    object _22855 = NOVALUE; // 43364 22855
// skipping _22854  name type: 0
    object _22853 = NOVALUE; // 43356 22853
    object _22852 = NOVALUE; // 43351 22852
// skipping _22851  name type: 0
    object _22850 = NOVALUE; // 43343 22850
    object _22849 = NOVALUE; // 43340 22849
    object _22848 = NOVALUE; // 43337 22848
    object _22847 = NOVALUE; // 43335 22847
    object _22846 = NOVALUE; // 43333 22846
    object _22845 = NOVALUE; // 43332 22845
    object _22844 = NOVALUE; // 43330 22844
// skipping _22843  name type: 0
    object _22842 = NOVALUE; // 43327 22842
    object _22841 = NOVALUE; // 43325 22841
    object _22840 = NOVALUE; // 43323 22840
    object _22839 = NOVALUE; // 43322 22839
    object _22838 = NOVALUE; // 43320 22838
    object _22837 = NOVALUE; // 43317 22837
    object _22836 = NOVALUE; // 43315 22836
    object _22835 = NOVALUE; // 43313 22835
    object _22834 = NOVALUE; // 43312 22834
    object _22833 = NOVALUE; // 43310 22833
    object _22832 = NOVALUE; // 43308 22832
    object _22831 = NOVALUE; // 43307 22831
    object _22830 = NOVALUE; // 43305 22830
    object _22829 = NOVALUE; // 43301 22829
// skipping _22828  name type: 0
    object _22827 = NOVALUE; // 43293 22827
    object _22826 = NOVALUE; // 43290 22826
    object _22825 = NOVALUE; // 43288 22825
// skipping _22824  name type: 0
    object _22823 = NOVALUE; // 43285 22823
    object _22822 = NOVALUE; // 43283 22822
// skipping _22821  name type: 0
// skipping _22820  name type: 0
    object _22819 = NOVALUE; // 43275 22819
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg PromoteTypeInfo pc: 1 op: STARTLINE (58)

    /** c_decl.e:866		sequence sym, symo*/
    // SubProg PromoteTypeInfo pc: 3 op: STARTLINE (58)

    /** c_decl.e:868		updsym = 0*/
    // SubProg PromoteTypeInfo pc: 5 op: ASSIGN_I (113)
    _updsym_43268 = 0;
    // SubProg PromoteTypeInfo pc: 8 op: STARTLINE (58)

    /** c_decl.e:869		g_has_delete = p_has_delete*/
    // SubProg PromoteTypeInfo pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 12 op: ASSIGN_I (113)
    _57g_has_delete_42323 = _57p_has_delete_42324;
    // SubProg PromoteTypeInfo pc: 15 op: STARTLINE (58)

    /** c_decl.e:870		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg PromoteTypeInfo pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 21 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22819 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg PromoteTypeInfo pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22819);
    _s_43270 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43270)){
        _s_43270 = (object)DBL_PTR(_s_43270)->dbl;
    }
    _22819 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 33 op: STARTLINE (58)

    /** c_decl.e:871		while s do*/
    // SubProg PromoteTypeInfo pc: 35 op: NOP2 (110)
    // SubProg PromoteTypeInfo pc: 37 op: NOPWHILE (158)
L1: // addr: 38 pc: 37 sub: 43266 op: 158
    // SubProg PromoteTypeInfo pc: 38 op: WHILE (47)
    if (_s_43270 == 0)
    {
        goto L2; // [38] 921
    }
    else{
    }
    // SubProg PromoteTypeInfo pc: 41 op: STARTLINE (58)

    /** c_decl.e:872			sym = SymTab[s]*/
    // SubProg PromoteTypeInfo pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_sym_43271);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _sym_43271 = (object)*(((s1_ptr)_2)->base + _s_43270);
    Ref(_sym_43271);
    // SubProg PromoteTypeInfo pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg PromoteTypeInfo pc: 51 op: STARTLINE (58)

    /** c_decl.e:873			symo = sym*/
    // SubProg PromoteTypeInfo pc: 53 op: ASSIGN (18)
    RefDS(_sym_43271);
    DeRef(_symo_43272);
    _symo_43272 = _sym_43271;
    // SubProg PromoteTypeInfo pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg PromoteTypeInfo pc: 58 op: STARTLINE (58)

    /** c_decl.e:874			if sym[S_TOKEN] = FUNC or sym[S_TOKEN] = TYPE then*/
    // SubProg PromoteTypeInfo pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22822 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22822 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg PromoteTypeInfo pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 68 op: EQUALS (3)
    if (IS_ATOM_INT(_22822)) {
        _22823 = (_22822 == 501);
    }
    else {
        _22823 = binary_op(EQUALS, _22822, 501);
    }
    _22822 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 72 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22823)) {
        if (_22823 != 0) {
            goto L3; // [72] 93
        }
    }
    else {
        if (DBL_PTR(_22823)->dbl != 0.0) {
            goto L3; // [72] 93
        }
    }
    // SubProg PromoteTypeInfo pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 78 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22825 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22825 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg PromoteTypeInfo pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 84 op: EQUALS (3)
    if (IS_ATOM_INT(_22825)) {
        _22826 = (_22825 == 504);
    }
    else {
        _22826 = binary_op(EQUALS, _22825, 504);
    }
    _22825 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 88 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 89 op: IF (20)
    if (_22826 == 0) {
        DeRef(_22826);
        _22826 = NOVALUE;
        goto L4; // [89] 138
    }
    else {
        if (!IS_ATOM_INT(_22826) && DBL_PTR(_22826)->dbl == 0.0){
            DeRef(_22826);
            _22826 = NOVALUE;
            goto L4; // [89] 138
        }
        DeRef(_22826);
        _22826 = NOVALUE;
    }
    DeRef(_22826);
    _22826 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 93 op: STARTLINE (58)

    /** c_decl.e:875				if sym[S_GTYPE_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 97 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22827 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 103 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22827, 0)){
        _22827 = NOVALUE;
        goto L5; // [103] 120
    }
    _22827 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 107 op: STARTLINE (58)

    /** c_decl.e:876					sym[S_GTYPE] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 113 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 117 op: ELSE (23)
    goto L6; // [117] 549
    // SubProg PromoteTypeInfo pc: 119 op: NOP1 (159)
L5: // addr: 120 pc: 119 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 120 op: STARTLINE (58)

    /** c_decl.e:878					sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 126 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22829 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 130 op: ASSIGN_SUBS (16)
    Ref(_22829);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22829;
    if( _1 != _22829 ){
        DeRef(_1);
    }
    _22829 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 134 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 135 op: ELSE (23)
    goto L6; // [135] 549
    // SubProg PromoteTypeInfo pc: 137 op: NOP1 (159)
L4: // addr: 138 pc: 137 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 138 op: STARTLINE (58)

    /** c_decl.e:883				if sym[S_GTYPE] != TYPE_INTEGER and*/
    // SubProg PromoteTypeInfo pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 142 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22830 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 148 op: NOTEQ (4)
    if (IS_ATOM_INT(_22830)) {
        _22831 = (_22830 != 1);
    }
    else {
        _22831 = binary_op(NOTEQ, _22830, 1);
    }
    _22830 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 152 op: SC1_AND (141)
    if (IS_ATOM_INT(_22831)) {
        if (_22831 == 0) {
            DeRef(_22832);
            _22832 = 0;
            goto L7; // [152] 172
        }
    }
    else {
        if (DBL_PTR(_22831)->dbl == 0.0) {
            DeRef(_22832);
            _22832 = 0;
            goto L7; // [152] 172
        }
    }
    // SubProg PromoteTypeInfo pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 158 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22833 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 164 op: NOTEQ (4)
    if (IS_ATOM_INT(_22833)) {
        _22834 = (_22833 != 16);
    }
    else {
        _22834 = binary_op(NOTEQ, _22833, 16);
    }
    _22833 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 168 op: SC2_AND (142)
    DeRef(_22832);
    if (IS_ATOM_INT(_22834))
    _22832 = (_22834 != 0);
    else
    _22832 = DBL_PTR(_22834)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 171 op: NOP1 (159)
L7: // addr: 172 pc: 171 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 172 op: SC1_AND_IF (146)
    if (_22832 == 0) {
        goto L8; // [172] 283
    }
    // SubProg PromoteTypeInfo pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 178 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22836 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 182 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 184 op: NOTEQ (4)
    if (IS_ATOM_INT(_22836)) {
        _22837 = (_22836 != 0);
    }
    else {
        _22837 = binary_op(NOTEQ, _22836, 0);
    }
    _22836 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 188 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 189 op: IF (20)
    if (_22837 == 0) {
        DeRef(_22837);
        _22837 = NOVALUE;
        goto L8; // [189] 283
    }
    else {
        if (!IS_ATOM_INT(_22837) && DBL_PTR(_22837)->dbl == 0.0){
            DeRef(_22837);
            _22837 = NOVALUE;
            goto L8; // [189] 283
        }
        DeRef(_22837);
        _22837 = NOVALUE;
    }
    DeRef(_22837);
    _22837 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 192 op: STARTLINE (58)

    /** c_decl.e:886					if sym[S_GTYPE_NEW] = TYPE_INTEGER or*/
    // SubProg PromoteTypeInfo pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 196 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22838 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 202 op: EQUALS (3)
    if (IS_ATOM_INT(_22838)) {
        _22839 = (_22838 == 1);
    }
    else {
        _22839 = binary_op(EQUALS, _22838, 1);
    }
    _22838 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 206 op: SC1_OR (143)
    if (IS_ATOM_INT(_22839)) {
        if (_22839 != 0) {
            DeRef(_22840);
            _22840 = 1;
            goto L9; // [206] 226
        }
    }
    else {
        if (DBL_PTR(_22839)->dbl != 0.0) {
            DeRef(_22840);
            _22840 = 1;
            goto L9; // [206] 226
        }
    }
    // SubProg PromoteTypeInfo pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 212 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22841 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 218 op: EQUALS (3)
    if (IS_ATOM_INT(_22841)) {
        _22842 = (_22841 == 16);
    }
    else {
        _22842 = binary_op(EQUALS, _22841, 16);
    }
    _22841 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 222 op: SC2_OR (144)
    DeRef(_22840);
    if (IS_ATOM_INT(_22842))
    _22840 = (_22842 != 0);
    else
    _22840 = DBL_PTR(_22842)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 225 op: NOP1 (159)
L9: // addr: 226 pc: 225 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 226 op: SC1_OR_IF (147)
    if (_22840 != 0) {
        goto LA; // [226] 267
    }
    // SubProg PromoteTypeInfo pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 232 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22844 = (object)*(((s1_ptr)_2)->base + 36);
    // SubProg PromoteTypeInfo pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 238 op: EQUALS (3)
    if (IS_ATOM_INT(_22844)) {
        _22845 = (_22844 == 4);
    }
    else {
        _22845 = binary_op(EQUALS, _22844, 4);
    }
    _22844 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 242 op: SC1_AND (141)
    if (IS_ATOM_INT(_22845)) {
        if (_22845 == 0) {
            DeRef(_22846);
            _22846 = 0;
            goto LB; // [242] 262
        }
    }
    else {
        if (DBL_PTR(_22845)->dbl == 0.0) {
            DeRef(_22846);
            _22846 = 0;
            goto LB; // [242] 262
        }
    }
    // SubProg PromoteTypeInfo pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 248 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22847 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 254 op: EQUALS (3)
    if (IS_ATOM_INT(_22847)) {
        _22848 = (_22847 == 2);
    }
    else {
        _22848 = binary_op(EQUALS, _22847, 2);
    }
    _22847 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 258 op: SC2_AND (142)
    DeRef(_22846);
    if (IS_ATOM_INT(_22848))
    _22846 = (_22848 != 0);
    else
    _22846 = DBL_PTR(_22848)->dbl != 0.0;
    // SubProg PromoteTypeInfo pc: 261 op: NOP1 (159)
LB: // addr: 262 pc: 261 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 262 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 263 op: IF (20)
    if (_22846 == 0)
    {
        _22846 = NOVALUE;
        goto LC; // [263] 282
    }
    else{
        _22846 = NOVALUE;
    }
    // SubProg PromoteTypeInfo pc: 266 op: NOP1 (159)
LA: // addr: 267 pc: 266 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 267 op: STARTLINE (58)

    /** c_decl.e:890							sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 273 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22849 = (object)*(((s1_ptr)_2)->base + 38);
    // SubProg PromoteTypeInfo pc: 277 op: ASSIGN_SUBS (16)
    Ref(_22849);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22849;
    if( _1 != _22849 ){
        DeRef(_1);
    }
    _22849 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 281 op: NOP1 (159)
LC: // addr: 282 pc: 281 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 282 op: NOP1 (159)
L8: // addr: 283 pc: 282 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 283 op: STARTLINE (58)

    /** c_decl.e:893				if sym[S_ARG_TYPE_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 287 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22850 = (object)*(((s1_ptr)_2)->base + 44);
    // SubProg PromoteTypeInfo pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 293 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22850, 0)){
        _22850 = NOVALUE;
        goto LD; // [293] 310
    }
    _22850 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 297 op: STARTLINE (58)

    /** c_decl.e:894					sym[S_ARG_TYPE] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 303 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 307 op: ELSE (23)
    goto LE; // [307] 325
    // SubProg PromoteTypeInfo pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 310 op: STARTLINE (58)

    /** c_decl.e:896					sym[S_ARG_TYPE] = sym[S_ARG_TYPE_NEW]*/
    // SubProg PromoteTypeInfo pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 316 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22852 = (object)*(((s1_ptr)_2)->base + 44);
    // SubProg PromoteTypeInfo pc: 320 op: ASSIGN_SUBS (16)
    Ref(_22852);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22852;
    if( _1 != _22852 ){
        DeRef(_1);
    }
    _22852 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 324 op: NOP1 (159)
LE: // addr: 325 pc: 324 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 325 op: STARTLINE (58)

    /** c_decl.e:898				sym[S_ARG_TYPE_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 331 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 44);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 335 op: STARTLINE (58)

    /** c_decl.e:900				if sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 339 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22853 = (object)*(((s1_ptr)_2)->base + 46);
    // SubProg PromoteTypeInfo pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 345 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22853, 0)){
        _22853 = NOVALUE;
        goto LF; // [345] 362
    }
    _22853 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 349 op: STARTLINE (58)

    /** c_decl.e:901					sym[S_ARG_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 355 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 359 op: ELSE (23)
    goto L10; // [359] 377
    // SubProg PromoteTypeInfo pc: 361 op: NOP1 (159)
LF: // addr: 362 pc: 361 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 362 op: STARTLINE (58)

    /** c_decl.e:903					sym[S_ARG_SEQ_ELEM] = sym[S_ARG_SEQ_ELEM_NEW]*/
    // SubProg PromoteTypeInfo pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 368 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22855 = (object)*(((s1_ptr)_2)->base + 46);
    // SubProg PromoteTypeInfo pc: 372 op: ASSIGN_SUBS (16)
    Ref(_22855);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22855;
    if( _1 != _22855 ){
        DeRef(_1);
    }
    _22855 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 376 op: NOP1 (159)
L10: // addr: 377 pc: 376 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 377 op: STARTLINE (58)

    /** c_decl.e:905				sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 383 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 46);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 387 op: STARTLINE (58)

    /** c_decl.e:907				if sym[S_ARG_MIN_NEW] = -NOVALUE or*/
    // SubProg PromoteTypeInfo pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 391 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22856 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 395 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 397 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22857 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22857 = - _5NOVALUE_12331;
        }
    }
    else {
        _22857 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 400 op: EQUALS (3)
    if (IS_ATOM_INT(_22856) && IS_ATOM_INT(_22857)) {
        _22858 = (_22856 == _22857);
    }
    else {
        _22858 = binary_op(EQUALS, _22856, _22857);
    }
    _22856 = NOVALUE;
    DeRef(_22857);
    _22857 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 404 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22858)) {
        if (_22858 != 0) {
            goto L11; // [404] 425
        }
    }
    else {
        if (DBL_PTR(_22858)->dbl != 0.0) {
            goto L11; // [404] 425
        }
    }
    // SubProg PromoteTypeInfo pc: 408 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 410 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22860 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 416 op: EQUALS (3)
    if (IS_ATOM_INT(_22860) && IS_ATOM_INT(_5NOVALUE_12331)) {
        _22861 = (_22860 == _5NOVALUE_12331);
    }
    else {
        _22861 = binary_op(EQUALS, _22860, _5NOVALUE_12331);
    }
    _22860 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 420 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 421 op: IF (20)
    if (_22861 == 0) {
        DeRef(_22861);
        _22861 = NOVALUE;
        goto L12; // [421] 448
    }
    else {
        if (!IS_ATOM_INT(_22861) && DBL_PTR(_22861)->dbl == 0.0){
            DeRef(_22861);
            _22861 = NOVALUE;
            goto L12; // [421] 448
        }
        DeRef(_22861);
        _22861 = NOVALUE;
    }
    DeRef(_22861);
    _22861 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 424 op: NOP1 (159)
L11: // addr: 425 pc: 424 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 425 op: STARTLINE (58)

    /** c_decl.e:909					sym[S_ARG_MIN] = MININT*/
    // SubProg PromoteTypeInfo pc: 427 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 429 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 431 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 445 op: ELSE (23)
    goto L13; // [445] 477
    // SubProg PromoteTypeInfo pc: 447 op: NOP1 (159)
L12: // addr: 448 pc: 447 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 448 op: STARTLINE (58)

    /** c_decl.e:912					sym[S_ARG_MIN] = sym[S_ARG_MIN_NEW]*/
    // SubProg PromoteTypeInfo pc: 450 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 454 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22862 = (object)*(((s1_ptr)_2)->base + 49);
    // SubProg PromoteTypeInfo pc: 458 op: ASSIGN_SUBS (16)
    Ref(_22862);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22862;
    if( _1 != _22862 ){
        DeRef(_1);
    }
    _22862 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 462 op: STARTLINE (58)

    /** c_decl.e:913					sym[S_ARG_MAX] = sym[S_ARG_MAX_NEW]*/
    // SubProg PromoteTypeInfo pc: 464 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 466 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 468 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22863 = (object)*(((s1_ptr)_2)->base + 50);
    // SubProg PromoteTypeInfo pc: 472 op: ASSIGN_SUBS (16)
    Ref(_22863);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22863;
    if( _1 != _22863 ){
        DeRef(_1);
    }
    _22863 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 476 op: NOP1 (159)
L13: // addr: 477 pc: 476 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 477 op: STARTLINE (58)

    /** c_decl.e:915				sym[S_ARG_MIN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 481 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 483 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22864 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22864 = - _5NOVALUE_12331;
        }
    }
    else {
        _22864 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 486 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22864;
    if( _1 != _22864 ){
        DeRef(_1);
    }
    _22864 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 490 op: STARTLINE (58)

    /** c_decl.e:917				if sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg PromoteTypeInfo pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 494 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22865 = (object)*(((s1_ptr)_2)->base + 52);
    // SubProg PromoteTypeInfo pc: 498 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 500 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22866 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22866 = - _5NOVALUE_12331;
        }
    }
    else {
        _22866 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 503 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22865, _22866)){
        _22865 = NOVALUE;
        DeRef(_22866);
        _22866 = NOVALUE;
        goto L14; // [503] 520
    }
    _22865 = NOVALUE;
    DeRef(_22866);
    _22866 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 507 op: STARTLINE (58)

    /** c_decl.e:918					sym[S_ARG_SEQ_LEN] = NOVALUE*/
    // SubProg PromoteTypeInfo pc: 509 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 513 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 517 op: ELSE (23)
    goto L15; // [517] 535
    // SubProg PromoteTypeInfo pc: 519 op: NOP1 (159)
L14: // addr: 520 pc: 519 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 520 op: STARTLINE (58)

    /** c_decl.e:920					sym[S_ARG_SEQ_LEN] = sym[S_ARG_SEQ_LEN_NEW]*/
    // SubProg PromoteTypeInfo pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 524 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 526 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22868 = (object)*(((s1_ptr)_2)->base + 52);
    // SubProg PromoteTypeInfo pc: 530 op: ASSIGN_SUBS (16)
    Ref(_22868);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22868;
    if( _1 != _22868 ){
        DeRef(_1);
    }
    _22868 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 534 op: NOP1 (159)
L15: // addr: 535 pc: 534 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 535 op: STARTLINE (58)

    /** c_decl.e:922				sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 537 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 539 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 541 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22869 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22869 = - _5NOVALUE_12331;
        }
    }
    else {
        _22869 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 544 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22869;
    if( _1 != _22869 ){
        DeRef(_1);
    }
    _22869 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 548 op: NOP1 (159)
L6: // addr: 549 pc: 548 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 549 op: STARTLINE (58)

    /** c_decl.e:925			sym[S_GTYPE_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 551 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 553 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 555 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 559 op: STARTLINE (58)

    /** c_decl.e:927			if sym[S_SEQ_ELEM_NEW] = TYPE_NULL then*/
    // SubProg PromoteTypeInfo pc: 561 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 563 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22870 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg PromoteTypeInfo pc: 567 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 569 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22870, 0)){
        _22870 = NOVALUE;
        goto L16; // [569] 586
    }
    _22870 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 573 op: STARTLINE (58)

    /** c_decl.e:928			   sym[S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg PromoteTypeInfo pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 577 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 579 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 583 op: ELSE (23)
    goto L17; // [583] 601
    // SubProg PromoteTypeInfo pc: 585 op: NOP1 (159)
L16: // addr: 586 pc: 585 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 586 op: STARTLINE (58)

    /** c_decl.e:930				sym[S_SEQ_ELEM] = sym[S_SEQ_ELEM_NEW]*/
    // SubProg PromoteTypeInfo pc: 588 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 590 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 592 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22872 = (object)*(((s1_ptr)_2)->base + 40);
    // SubProg PromoteTypeInfo pc: 596 op: ASSIGN_SUBS (16)
    Ref(_22872);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22872;
    if( _1 != _22872 ){
        DeRef(_1);
    }
    _22872 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 600 op: NOP1 (159)
L17: // addr: 601 pc: 600 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 601 op: STARTLINE (58)

    /** c_decl.e:932			sym[S_SEQ_ELEM_NEW] = TYPE_NULL*/
    // SubProg PromoteTypeInfo pc: 603 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 605 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 607 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 611 op: STARTLINE (58)

    /** c_decl.e:934			if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    // SubProg PromoteTypeInfo pc: 613 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 615 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22873 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg PromoteTypeInfo pc: 619 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 621 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22874 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22874 = - _5NOVALUE_12331;
        }
    }
    else {
        _22874 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 624 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22873, _22874)){
        _22873 = NOVALUE;
        DeRef(_22874);
        _22874 = NOVALUE;
        goto L18; // [624] 641
    }
    _22873 = NOVALUE;
    DeRef(_22874);
    _22874 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 628 op: STARTLINE (58)

    /** c_decl.e:935				sym[S_SEQ_LEN] = NOVALUE*/
    // SubProg PromoteTypeInfo pc: 630 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 632 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 634 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 638 op: ELSE (23)
    goto L19; // [638] 656
    // SubProg PromoteTypeInfo pc: 640 op: NOP1 (159)
L18: // addr: 641 pc: 640 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 641 op: STARTLINE (58)

    /** c_decl.e:937				sym[S_SEQ_LEN] = sym[S_SEQ_LEN_NEW]*/
    // SubProg PromoteTypeInfo pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 645 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 647 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22876 = (object)*(((s1_ptr)_2)->base + 39);
    // SubProg PromoteTypeInfo pc: 651 op: ASSIGN_SUBS (16)
    Ref(_22876);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22876;
    if( _1 != _22876 ){
        DeRef(_1);
    }
    _22876 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 655 op: NOP1 (159)
L19: // addr: 656 pc: 655 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 656 op: STARTLINE (58)

    /** c_decl.e:939			sym[S_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 658 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 660 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 662 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22877 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22877 = - _5NOVALUE_12331;
        }
    }
    else {
        _22877 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 665 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22877;
    if( _1 != _22877 ){
        DeRef(_1);
    }
    _22877 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 669 op: STARTLINE (58)

    /** c_decl.e:941			if sym[S_TOKEN] != NAMESPACE*/
    // SubProg PromoteTypeInfo pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 673 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22878 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22878 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg PromoteTypeInfo pc: 677 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 679 op: NOTEQ (4)
    if (IS_ATOM_INT(_22878)) {
        _22879 = (_22878 != 523);
    }
    else {
        _22879 = binary_op(NOTEQ, _22878, 523);
    }
    _22878 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 683 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22879)) {
        if (_22879 == 0) {
            goto L1A; // [683] 794
        }
    }
    else {
        if (DBL_PTR(_22879)->dbl == 0.0) {
            goto L1A; // [683] 794
        }
    }
    // SubProg PromoteTypeInfo pc: 687 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 689 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22881 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg PromoteTypeInfo pc: 693 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 695 op: NOTEQ (4)
    if (IS_ATOM_INT(_22881)) {
        _22882 = (_22881 != 2);
    }
    else {
        _22882 = binary_op(NOTEQ, _22881, 2);
    }
    _22881 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 699 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 700 op: IF (20)
    if (_22882 == 0) {
        DeRef(_22882);
        _22882 = NOVALUE;
        goto L1A; // [700] 794
    }
    else {
        if (!IS_ATOM_INT(_22882) && DBL_PTR(_22882)->dbl == 0.0){
            DeRef(_22882);
            _22882 = NOVALUE;
            goto L1A; // [700] 794
        }
        DeRef(_22882);
        _22882 = NOVALUE;
    }
    DeRef(_22882);
    _22882 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 703 op: STARTLINE (58)

    /** c_decl.e:944				if sym[S_OBJ_MIN_NEW] = -NOVALUE or*/
    // SubProg PromoteTypeInfo pc: 705 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 707 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22883 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 711 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 713 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22884 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22884 = - _5NOVALUE_12331;
        }
    }
    else {
        _22884 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 716 op: EQUALS (3)
    if (IS_ATOM_INT(_22883) && IS_ATOM_INT(_22884)) {
        _22885 = (_22883 == _22884);
    }
    else {
        _22885 = binary_op(EQUALS, _22883, _22884);
    }
    _22883 = NOVALUE;
    DeRef(_22884);
    _22884 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 720 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_22885)) {
        if (_22885 != 0) {
            goto L1B; // [720] 741
        }
    }
    else {
        if (DBL_PTR(_22885)->dbl != 0.0) {
            goto L1B; // [720] 741
        }
    }
    // SubProg PromoteTypeInfo pc: 724 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 726 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22887 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 730 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 732 op: EQUALS (3)
    if (IS_ATOM_INT(_22887) && IS_ATOM_INT(_5NOVALUE_12331)) {
        _22888 = (_22887 == _5NOVALUE_12331);
    }
    else {
        _22888 = binary_op(EQUALS, _22887, _5NOVALUE_12331);
    }
    _22887 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 736 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 737 op: IF (20)
    if (_22888 == 0) {
        DeRef(_22888);
        _22888 = NOVALUE;
        goto L1C; // [737] 764
    }
    else {
        if (!IS_ATOM_INT(_22888) && DBL_PTR(_22888)->dbl == 0.0){
            DeRef(_22888);
            _22888 = NOVALUE;
            goto L1C; // [737] 764
        }
        DeRef(_22888);
        _22888 = NOVALUE;
    }
    DeRef(_22888);
    _22888 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 740 op: NOP1 (159)
L1B: // addr: 741 pc: 740 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 741 op: STARTLINE (58)

    /** c_decl.e:946					sym[S_OBJ_MIN] = MININT*/
    // SubProg PromoteTypeInfo pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 745 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 747 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 761 op: ELSE (23)
    goto L1D; // [761] 793
    // SubProg PromoteTypeInfo pc: 763 op: NOP1 (159)
L1C: // addr: 764 pc: 763 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 764 op: STARTLINE (58)

    /** c_decl.e:949					sym[S_OBJ_MIN] = sym[S_OBJ_MIN_NEW]*/
    // SubProg PromoteTypeInfo pc: 766 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 768 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 770 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22889 = (object)*(((s1_ptr)_2)->base + 41);
    // SubProg PromoteTypeInfo pc: 774 op: ASSIGN_SUBS (16)
    Ref(_22889);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22889;
    if( _1 != _22889 ){
        DeRef(_1);
    }
    _22889 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 778 op: STARTLINE (58)

    /** c_decl.e:950					sym[S_OBJ_MAX] = sym[S_OBJ_MAX_NEW]*/
    // SubProg PromoteTypeInfo pc: 780 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 782 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 784 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22890 = (object)*(((s1_ptr)_2)->base + 42);
    // SubProg PromoteTypeInfo pc: 788 op: ASSIGN_SUBS (16)
    Ref(_22890);
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22890;
    if( _1 != _22890 ){
        DeRef(_1);
    }
    _22890 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 792 op: NOP1 (159)
L1D: // addr: 793 pc: 792 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 793 op: NOP1 (159)
L1A: // addr: 794 pc: 793 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 794 op: STARTLINE (58)

    /** c_decl.e:953			sym[S_OBJ_MIN_NEW] = -NOVALUE*/
    // SubProg PromoteTypeInfo pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 798 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 800 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _22891 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22891 = - _5NOVALUE_12331;
        }
    }
    else {
        _22891 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg PromoteTypeInfo pc: 803 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22891;
    if( _1 != _22891 ){
        DeRef(_1);
    }
    _22891 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 807 op: STARTLINE (58)

    /** c_decl.e:955			if sym[S_NREFS] = 1 and*/
    // SubProg PromoteTypeInfo pc: 809 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 811 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22892 = (object)*(((s1_ptr)_2)->base + 12);
    // SubProg PromoteTypeInfo pc: 815 op: EQUALS (3)
    if (IS_ATOM_INT(_22892)) {
        _22893 = (_22892 == 1);
    }
    else {
        _22893 = binary_op(EQUALS, _22892, 1);
    }
    _22892 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 819 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_22893)) {
        if (_22893 == 0) {
            goto L1E; // [819] 874
        }
    }
    else {
        if (DBL_PTR(_22893)->dbl == 0.0) {
            goto L1E; // [819] 874
        }
    }
    // SubProg PromoteTypeInfo pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 825 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _22895 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _22895 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    // SubProg PromoteTypeInfo pc: 829 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 831 op: FIND_FROM (176)
    _22896 = find_from(_22895, _29RTN_TOKS_12080, 1);
    _22895 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 836 op: NOP1 (159)
    // SubProg PromoteTypeInfo pc: 837 op: IF (20)
    if (_22896 == 0)
    {
        _22896 = NOVALUE;
        goto L1E; // [837] 874
    }
    else{
        _22896 = NOVALUE;
    }
    // SubProg PromoteTypeInfo pc: 840 op: STARTLINE (58)

    /** c_decl.e:957				if sym[S_USAGE] != U_DELETED then*/
    // SubProg PromoteTypeInfo pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 844 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _22897 = (object)*(((s1_ptr)_2)->base + 5);
    // SubProg PromoteTypeInfo pc: 848 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 850 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _22897, 99)){
        _22897 = NOVALUE;
        goto L1F; // [850] 873
    }
    _22897 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 854 op: STARTLINE (58)

    /** c_decl.e:958					sym[S_USAGE] = U_DELETED*/
    // SubProg PromoteTypeInfo pc: 856 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 858 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 860 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 99;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 864 op: STARTLINE (58)

    /** c_decl.e:959					deleted_routines += 1*/
    // SubProg PromoteTypeInfo pc: 866 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 868 op: PLUS1_I (117)
    _57deleted_routines_43265 = _57deleted_routines_43265 + 1;
    // SubProg PromoteTypeInfo pc: 872 op: NOP1 (159)
L1F: // addr: 873 pc: 872 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 873 op: NOP1 (159)
L1E: // addr: 874 pc: 873 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 874 op: STARTLINE (58)

    /** c_decl.e:962			sym[S_NREFS] = 0*/
    // SubProg PromoteTypeInfo pc: 876 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 878 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_sym_43271);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43271 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 882 op: STARTLINE (58)

    /** c_decl.e:963			if not equal(symo, sym) then*/
    // SubProg PromoteTypeInfo pc: 884 op: EQUAL (153)
    if (_symo_43272 == _sym_43271)
    _22900 = 1;
    else if (IS_ATOM_INT(_symo_43272) && IS_ATOM_INT(_sym_43271))
    _22900 = 0;
    else
    _22900 = (compare(_symo_43272, _sym_43271) == 0);
    // SubProg PromoteTypeInfo pc: 888 op: NOT_IFW (108)
    if (_22900 != 0)
    goto L20; // [888] 906
    _22900 = NOVALUE;
    // SubProg PromoteTypeInfo pc: 891 op: STARTLINE (58)

    /** c_decl.e:964				SymTab[s] = sym*/
    // SubProg PromoteTypeInfo pc: 893 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 895 op: ASSIGN_SUBS (16)
    RefDS(_sym_43271);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_43270);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_43271;
    DeRef(_1);
    // SubProg PromoteTypeInfo pc: 899 op: STARTLINE (58)

    /** c_decl.e:965				updsym += 1*/
    // SubProg PromoteTypeInfo pc: 901 op: PLUS1_I (117)
    _updsym_43268 = _updsym_43268 + 1;
    // SubProg PromoteTypeInfo pc: 905 op: NOP1 (159)
L20: // addr: 906 pc: 905 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 906 op: STARTLINE (58)

    /** c_decl.e:967			s = sym[S_NEXT]*/
    // SubProg PromoteTypeInfo pc: 908 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 910 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sym_43271);
    _s_43270 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43270)){
        _s_43270 = (object)DBL_PTR(_s_43270)->dbl;
    }
    // SubProg PromoteTypeInfo pc: 916 op: STARTLINE (58)

    /** c_decl.e:968		end while*/
    // SubProg PromoteTypeInfo pc: 918 op: ENDWHILE (22)
    goto L1; // [918] 38
    // SubProg PromoteTypeInfo pc: 920 op: NOP1 (159)
L2: // addr: 921 pc: 920 sub: 43266 op: 159
    // SubProg PromoteTypeInfo pc: 921 op: STARTLINE (58)

    /** c_decl.e:971		for i = 1 to length(temp_name_type) do*/
    // SubProg PromoteTypeInfo pc: 923 op: GLOBAL_INIT_CHECK (109)
    // SubProg PromoteTypeInfo pc: 925 op: LENGTH (42)
    if (IS_SEQUENCE(_5temp_name_type_12560)){
            _22904 = SEQ_PTR(_5temp_name_type_12560)->length;
    }
    else {
        _22904 = 1;
    }
    // SubProg PromoteTypeInfo pc: 928 op: FOR_I (125)
    {
        object _i_43498;
        _i_43498 = 1;
L21: // addr: 935 pc: 928 sub: 43266 op: 125
        if (_i_43498 > _22904){
            goto L22; // [928] 1061
        }
        // SubProg PromoteTypeInfo pc: 935 op: STARTLINE (58)

        /** c_decl.e:972			integer upd = 0*/
        // SubProg PromoteTypeInfo pc: 937 op: ASSIGN_I (113)
        _upd_43501 = 0;
        // SubProg PromoteTypeInfo pc: 940 op: STARTLINE (58)

        /** c_decl.e:974			if temp_name_type[i][T_GTYPE] != temp_name_type[i][T_GTYPE_NEW] then*/
        // SubProg PromoteTypeInfo pc: 942 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 944 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        _22905 = (object)*(((s1_ptr)_2)->base + _i_43498);
        // SubProg PromoteTypeInfo pc: 948 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 950 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22905);
        _22906 = (object)*(((s1_ptr)_2)->base + 1);
        _22905 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 954 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 956 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        _22907 = (object)*(((s1_ptr)_2)->base + _i_43498);
        // SubProg PromoteTypeInfo pc: 960 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 962 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22907);
        _22908 = (object)*(((s1_ptr)_2)->base + 2);
        _22907 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 966 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22906, _22908)){
            _22906 = NOVALUE;
            _22908 = NOVALUE;
            goto L23; // [966] 1003
        }
        _22906 = NOVALUE;
        _22908 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 970 op: STARTLINE (58)

        /** c_decl.e:975				temp_name_type[i][T_GTYPE] = temp_name_type[i][T_GTYPE_NEW]*/
        // SubProg PromoteTypeInfo pc: 972 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 974 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _5temp_name_type_12560 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43498 + ((s1_ptr)_2)->base);
        // SubProg PromoteTypeInfo pc: 979 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 981 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 983 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        _22912 = (object)*(((s1_ptr)_2)->base + _i_43498);
        // SubProg PromoteTypeInfo pc: 987 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 989 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22912);
        _22913 = (object)*(((s1_ptr)_2)->base + 2);
        _22912 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 993 op: PASSIGN_SUBS (162)
        Ref(_22913);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _22913;
        if( _1 != _22913 ){
            DeRef(_1);
        }
        _22913 = NOVALUE;
        _22910 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 997 op: STARTLINE (58)

        /** c_decl.e:976				upd = 1*/
        // SubProg PromoteTypeInfo pc: 999 op: ASSIGN_I (113)
        _upd_43501 = 1;
        // SubProg PromoteTypeInfo pc: 1002 op: NOP1 (159)
L23: // addr: 1003 pc: 1002 sub: 43266 op: 159
        // SubProg PromoteTypeInfo pc: 1003 op: STARTLINE (58)

        /** c_decl.e:978			if temp_name_type[i][T_GTYPE_NEW] != TYPE_NULL then*/
        // SubProg PromoteTypeInfo pc: 1005 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1007 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        _22914 = (object)*(((s1_ptr)_2)->base + _i_43498);
        // SubProg PromoteTypeInfo pc: 1011 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1013 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22914);
        _22915 = (object)*(((s1_ptr)_2)->base + 2);
        _22914 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1017 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1019 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _22915, 0)){
            _22915 = NOVALUE;
            goto L24; // [1019] 1046
        }
        _22915 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1023 op: STARTLINE (58)

        /** c_decl.e:979				temp_name_type[i][T_GTYPE_NEW] = TYPE_NULL*/
        // SubProg PromoteTypeInfo pc: 1025 op: GLOBAL_INIT_CHECK (109)
        // SubProg PromoteTypeInfo pc: 1027 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_5temp_name_type_12560);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _5temp_name_type_12560 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43498 + ((s1_ptr)_2)->base);
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
        _22917 = NOVALUE;
        // SubProg PromoteTypeInfo pc: 1040 op: STARTLINE (58)

        /** c_decl.e:980				upd = 1*/
        // SubProg PromoteTypeInfo pc: 1042 op: ASSIGN_I (113)
        _upd_43501 = 1;
        // SubProg PromoteTypeInfo pc: 1045 op: NOP1 (159)
L24: // addr: 1046 pc: 1045 sub: 43266 op: 159
        // SubProg PromoteTypeInfo pc: 1046 op: STARTLINE (58)

        /** c_decl.e:982			updsym += upd*/
        // SubProg PromoteTypeInfo pc: 1048 op: PLUS_I (115)
        _updsym_43268 = _updsym_43268 + _upd_43501;
        // SubProg PromoteTypeInfo pc: 1052 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var upd_43501
        // SubProg PromoteTypeInfo pc: 1054 op: STARTLINE (58)

        /** c_decl.e:983		end for*/
        // SubProg PromoteTypeInfo pc: 1056 op: ENDFOR_INT_UP1 (54)
        _i_43498 = _i_43498 + 1;
        goto L21; // [1056] 935
L22: // addr: 1061 pc: 1056 sub: 43266 op: 54
        ;
    }
    // SubProg PromoteTypeInfo pc: 1061 op: STARTLINE (58)

    /** c_decl.e:985		return updsym*/
    // SubProg PromoteTypeInfo pc: 1063 op: RETURNF (28)

// Exiting block BLOCK: PromoteTypeInfo

// block var s_43270

// block var sym_43271
    DeRef(_sym_43271);

// block var symo_43272
    DeRef(_symo_43272);
    DeRef(_22845);
    _22845 = NOVALUE;
    DeRef(_22839);
    _22839 = NOVALUE;
    DeRef(_22834);
    _22834 = NOVALUE;
    DeRef(_22848);
    _22848 = NOVALUE;
    DeRef(_22885);
    _22885 = NOVALUE;
    DeRef(_22831);
    _22831 = NOVALUE;
    DeRef(_22858);
    _22858 = NOVALUE;
    DeRef(_22879);
    _22879 = NOVALUE;
    DeRef(_22893);
    _22893 = NOVALUE;
    DeRef(_22823);
    _22823 = NOVALUE;
    DeRef(_22842);
    _22842 = NOVALUE;
    return _updsym_43268;
    // SubProg PromoteTypeInfo pc: 1067 op: BADRETURNF (43)
    ;
}


void _57declare_prototype(object _s_43536)
{
    object _ret_type_43537 = NOVALUE;
    object _scope_43548 = NOVALUE;
// skipping _22938  name type: 0
    object _22937 = NOVALUE; // 43581 22937
    object _22936 = NOVALUE; // 43579 22936
    object _22934 = NOVALUE; // 43573 22934
    object _22933 = NOVALUE; // 43571 22933
    object _22932 = NOVALUE; // 43568 22932
    object _22931 = NOVALUE; // 43566 22931
    object _22929 = NOVALUE; // 43561 22929
    object _22928 = NOVALUE; // 43559 22928
    object _22927 = NOVALUE; // 43558 22927
    object _22926 = NOVALUE; // 43556 22926
    object _22925 = NOVALUE; // 43555 22925
// skipping _22924  name type: 0
    object _22923 = NOVALUE; // 43550 22923
    object _22922 = NOVALUE; // 43546 22922
// skipping _22921  name type: 0
    object _22920 = NOVALUE; // 43540 22920
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg declare_prototype pc: 1 op: INTEGER_CHECK (96)
    // SubProg declare_prototype pc: 3 op: STARTLINE (58)

    /** c_decl.e:990		if sym_token( s ) = PROC then*/
    // SubProg declare_prototype pc: 5 op: PROC (27)
    _22920 = _53sym_token(_s_43536);
    // SubProg declare_prototype pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 11 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _22920, 27)){
        DeRef(_22920);
        _22920 = NOVALUE;
        goto L1; // [11] 25
    }
    DeRef(_22920);
    _22920 = NOVALUE;
    // SubProg declare_prototype pc: 15 op: STARTLINE (58)

    /** c_decl.e:991			ret_type = "void "*/
    // SubProg declare_prototype pc: 17 op: ASSIGN (18)
    RefDS(_22761);
    DeRefi(_ret_type_43537);
    _ret_type_43537 = _22761;
    // SubProg declare_prototype pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg declare_prototype pc: 22 op: ELSE (23)
    goto L2; // [22] 33
    // SubProg declare_prototype pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 43533 op: 159
    // SubProg declare_prototype pc: 25 op: STARTLINE (58)

    /** c_decl.e:993			ret_type ="object "*/
    // SubProg declare_prototype pc: 27 op: ASSIGN (18)
    RefDS(_22762);
    DeRefi(_ret_type_43537);
    _ret_type_43537 = _22762;
    // SubProg declare_prototype pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg declare_prototype pc: 32 op: NOP1 (159)
L2: // addr: 33 pc: 32 sub: 43533 op: 159
    // SubProg declare_prototype pc: 33 op: STARTLINE (58)

    /** c_decl.e:996		c_hputs(ret_type)*/
    // SubProg declare_prototype pc: 35 op: PRIVATE_INIT_CHECK (30)
    // SubProg declare_prototype pc: 37 op: PROC (27)
    RefDS(_ret_type_43537);
    _54c_hputs(_ret_type_43537);
    // SubProg declare_prototype pc: 40 op: STARTLINE (58)

    /** c_decl.e:999		if dll_option and TWINDOWS  then*/
    // SubProg declare_prototype pc: 42 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 44 op: SC1_AND_IF (146)
    if (_57dll_option_42130 == 0) {
        goto L3; // [44] 116
    }
    // SubProg declare_prototype pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 50 op: NOP1 (159)
    // SubProg declare_prototype pc: 51 op: IF (20)
    goto L3; // [51] 116
    // SubProg declare_prototype pc: 54 op: STARTLINE (58)

    /** c_decl.e:1000			integer scope = SymTab[s][S_SCOPE]*/
    // SubProg declare_prototype pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22923 = (object)*(((s1_ptr)_2)->base + _s_43536);
    // SubProg declare_prototype pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22923);
    _scope_43548 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43548)){
        _scope_43548 = (object)DBL_PTR(_scope_43548)->dbl;
    }
    _22923 = NOVALUE;
    // SubProg declare_prototype pc: 70 op: STARTLINE (58)

    /** c_decl.e:1001			if (scope = SC_PUBLIC*/
    // SubProg declare_prototype pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 74 op: EQUALS (3)
    _22925 = (_scope_43548 == 13);
    // SubProg declare_prototype pc: 78 op: SC1_OR (143)
    if (_22925 != 0) {
        _22926 = 1;
        goto L4; // [78] 92
    }
    // SubProg declare_prototype pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 84 op: EQUALS (3)
    _22927 = (_scope_43548 == 11);
    // SubProg declare_prototype pc: 88 op: SC2_OR (144)
    _22926 = (_22927 != 0);
    // SubProg declare_prototype pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 43533 op: 159
    // SubProg declare_prototype pc: 92 op: SC1_OR (143)
    if (_22926 != 0) {
        DeRef(_22928);
        _22928 = 1;
        goto L5; // [92] 106
    }
    // SubProg declare_prototype pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 98 op: EQUALS (3)
    _22929 = (_scope_43548 == 6);
    // SubProg declare_prototype pc: 102 op: SC2_OR (144)
    _22928 = (_22929 != 0);
    // SubProg declare_prototype pc: 105 op: NOP1 (159)
L5: // addr: 106 pc: 105 sub: 43533 op: 159
    // SubProg declare_prototype pc: 106 op: IF (20)
    if (_22928 == 0)
    {
        _22928 = NOVALUE;
        goto L6; // [106] 115
    }
    else{
        _22928 = NOVALUE;
    }
    // SubProg declare_prototype pc: 109 op: STARTLINE (58)

    /** c_decl.e:1006				c_hputs("__stdcall ")*/
    // SubProg declare_prototype pc: 111 op: PROC (27)
    RefDS(_22930);
    _54c_hputs(_22930);
    // SubProg declare_prototype pc: 114 op: NOP1 (159)
L6: // addr: 115 pc: 114 sub: 43533 op: 159
    // SubProg declare_prototype pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 43533 op: 159
    // SubProg declare_prototype pc: 116 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var scope_43548
    // SubProg declare_prototype pc: 118 op: STARTLINE (58)

    /** c_decl.e:1010		c_hprintf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg declare_prototype pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 122 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22931 = (object)*(((s1_ptr)_2)->base + _s_43536);
    // SubProg declare_prototype pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22931);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22932 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22932 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _22931 = NOVALUE;
    // SubProg declare_prototype pc: 132 op: PROC (27)
    RefDS(_22090);
    Ref(_22932);
    _54c_hprintf(_22090, _22932);
    _22932 = NOVALUE;
    // SubProg declare_prototype pc: 136 op: STARTLINE (58)

    /** c_decl.e:1011		c_hputs(SymTab[s][S_NAME])*/
    // SubProg declare_prototype pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 140 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22933 = (object)*(((s1_ptr)_2)->base + _s_43536);
    // SubProg declare_prototype pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22933);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22934 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22934 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22933 = NOVALUE;
    // SubProg declare_prototype pc: 150 op: PROC (27)
    Ref(_22934);
    _54c_hputs(_22934);
    _22934 = NOVALUE;
    // SubProg declare_prototype pc: 153 op: STARTLINE (58)

    /** c_decl.e:1012		c_hputs("(")*/
    // SubProg declare_prototype pc: 155 op: PROC (27)
    RefDS(_22935);
    _54c_hputs(_22935);
    // SubProg declare_prototype pc: 158 op: STARTLINE (58)

    /** c_decl.e:1014		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg declare_prototype pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 162 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22936 = (object)*(((s1_ptr)_2)->base + _s_43536);
    // SubProg declare_prototype pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg declare_prototype pc: 168 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22936);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _22937 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _22937 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _22936 = NOVALUE;
    // SubProg declare_prototype pc: 172 op: FOR (21)
    {
        object _i_43577;
        _i_43577 = 1;
L7: // addr: 179 pc: 172 sub: 43533 op: 21
        if (binary_op_a(GREATER, _i_43577, _22937)){
            goto L8; // [172] 206
        }
        // SubProg declare_prototype pc: 179 op: STARTLINE (58)

        /** c_decl.e:1015			if i = 1 then*/
        // SubProg declare_prototype pc: 181 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _i_43577, 1)){
            goto L9; // [181] 193
        }
        // SubProg declare_prototype pc: 185 op: STARTLINE (58)

        /** c_decl.e:1016				c_hputs("object")*/
        // SubProg declare_prototype pc: 187 op: PROC (27)
        RefDS(_22939);
        _54c_hputs(_22939);
        // SubProg declare_prototype pc: 190 op: ELSE (23)
        goto LA; // [190] 199
        // SubProg declare_prototype pc: 192 op: NOP1 (159)
L9: // addr: 193 pc: 192 sub: 43533 op: 159
        // SubProg declare_prototype pc: 193 op: STARTLINE (58)

        /** c_decl.e:1018				c_hputs(", object")*/
        // SubProg declare_prototype pc: 195 op: PROC (27)
        RefDS(_22940);
        _54c_hputs(_22940);
        // SubProg declare_prototype pc: 198 op: NOP1 (159)
LA: // addr: 199 pc: 198 sub: 43533 op: 159
        // SubProg declare_prototype pc: 199 op: STARTLINE (58)

        /** c_decl.e:1020		end for*/
        // SubProg declare_prototype pc: 201 op: ENDFOR_INT_UP1 (54)
        _0 = _i_43577;
        if (IS_ATOM_INT(_i_43577)) {
            _i_43577 = _i_43577 + 1;
            if ((object)((uintptr_t)_i_43577 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43577 = NewDouble((eudouble)_i_43577);
            }
        }
        else {
            _i_43577 = binary_op_a(PLUS, _i_43577, 1);
        }
        DeRef(_0);
        goto L7; // [201] 179
L8: // addr: 206 pc: 201 sub: 43533 op: 54
        ;
        DeRef(_i_43577);
    }
    // SubProg declare_prototype pc: 206 op: STARTLINE (58)

    /** c_decl.e:1021		c_hputs(");\n")*/
    // SubProg declare_prototype pc: 208 op: PROC (27)
    RefDS(_22275);
    _54c_hputs(_22275);
    // SubProg declare_prototype pc: 211 op: STARTLINE (58)

    /** c_decl.e:1022	end procedure*/
    // SubProg declare_prototype pc: 213 op: RETURNP (29)

// Exiting block BLOCK: declare_prototype

// block var s_43536

// block var ret_type_43537
    DeRefi(_ret_type_43537);
    _22937 = NOVALUE;
    DeRef(_22925);
    _22925 = NOVALUE;
    DeRef(_22927);
    _22927 = NOVALUE;
    DeRef(_22929);
    _22929 = NOVALUE;
    return;
    // SubProg declare_prototype pc: 216 op: BADRETURNF (43)
    ;
}


void _57add_to_routine_list(object _s_43593, object _seq_num_43594, object _first_43595)
{
    object _p_43670 = NOVALUE;
// skipping _22987  name type: 0
    object _22986 = NOVALUE; // 43702 22986
// skipping _22985  name type: 0
    object _22984 = NOVALUE; // 43697 22984
// skipping _22983  name type: 0
    object _22982 = NOVALUE; // 43692 22982
// skipping _22981  name type: 0
    object _22980 = NOVALUE; // 43687 22980
// skipping _22979  name type: 0
    object _22978 = NOVALUE; // 43682 22978
    object _22977 = NOVALUE; // 43680 22977
    object _22976 = NOVALUE; // 43678 22976
// skipping _22975  name type: 0
    object _22974 = NOVALUE; // 43672 22974
// skipping _22973  name type: 0
    object _22972 = NOVALUE; // 43666 22972
// skipping _22971  name type: 0
    object _22970 = NOVALUE; // 43663 22970
    object _22969 = NOVALUE; // 43661 22969
    object _22967 = NOVALUE; // 43656 22967
    object _22966 = NOVALUE; // 43654 22966
    object _22962 = NOVALUE; // 43645 22962
    object _22961 = NOVALUE; // 43644 22961
    object _22960 = NOVALUE; // 43640 22960
    object _22959 = NOVALUE; // 43638 22959
    object _22958 = NOVALUE; // 43636 22958
    object _22957 = NOVALUE; // 43635 22957
    object _22956 = NOVALUE; // 43632 22956
    object _22955 = NOVALUE; // 43630 22955
    object _22954 = NOVALUE; // 43627 22954
    object _22953 = NOVALUE; // 43625 22953
    object _22951 = NOVALUE; // 43620 22951
    object _22950 = NOVALUE; // 43618 22950
    object _22949 = NOVALUE; // 43615 22949
    object _22948 = NOVALUE; // 43613 22948
    object _22945 = NOVALUE; // 43606 22945
    object _22944 = NOVALUE; // 43604 22944
// skipping _22941  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_to_routine_list pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 5 op: INTEGER_CHECK (96)
    // SubProg add_to_routine_list pc: 7 op: STARTLINE (58)

    /** c_decl.e:1025		if not first then*/
    // SubProg add_to_routine_list pc: 9 op: NOT_IFW (108)
    if (_first_43595 != 0)
    goto L1; // [9] 18
    // SubProg add_to_routine_list pc: 12 op: STARTLINE (58)

    /** c_decl.e:1026			c_puts(",\n")*/
    // SubProg add_to_routine_list pc: 14 op: PROC (27)
    RefDS(_22942);
    _54c_puts(_22942);
    // SubProg add_to_routine_list pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 43590 op: 159
    // SubProg add_to_routine_list pc: 18 op: STARTLINE (58)

    /** c_decl.e:1029		c_puts("  {\"")*/
    // SubProg add_to_routine_list pc: 20 op: PROC (27)
    RefDS(_22943);
    _54c_puts(_22943);
    // SubProg add_to_routine_list pc: 23 op: STARTLINE (58)

    /** c_decl.e:1031		c_puts(SymTab[s][S_NAME])*/
    // SubProg add_to_routine_list pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22944 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22944);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22945 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22945 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22944 = NOVALUE;
    // SubProg add_to_routine_list pc: 37 op: PROC (27)
    Ref(_22945);
    _54c_puts(_22945);
    _22945 = NOVALUE;
    // SubProg add_to_routine_list pc: 40 op: STARTLINE (58)

    /** c_decl.e:1032		c_puts("\", ")*/
    // SubProg add_to_routine_list pc: 42 op: PROC (27)
    RefDS(_22946);
    _54c_puts(_22946);
    // SubProg add_to_routine_list pc: 45 op: STARTLINE (58)

    /** c_decl.e:1033		c_puts("(object (*)())")*/
    // SubProg add_to_routine_list pc: 47 op: PROC (27)
    RefDS(_22947);
    _54c_puts(_22947);
    // SubProg add_to_routine_list pc: 50 op: STARTLINE (58)

    /** c_decl.e:1034		c_printf("_%d", SymTab[s][S_FILE_NO])*/
    // SubProg add_to_routine_list pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22948 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 60 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22948);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22949 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22949 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _22948 = NOVALUE;
    // SubProg add_to_routine_list pc: 64 op: PROC (27)
    RefDS(_22090);
    Ref(_22949);
    _54c_printf(_22090, _22949);
    _22949 = NOVALUE;
    // SubProg add_to_routine_list pc: 68 op: STARTLINE (58)

    /** c_decl.e:1035		c_puts(SymTab[s][S_NAME])*/
    // SubProg add_to_routine_list pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 72 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22950 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 78 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22950);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _22951 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _22951 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _22950 = NOVALUE;
    // SubProg add_to_routine_list pc: 82 op: PROC (27)
    Ref(_22951);
    _54c_puts(_22951);
    _22951 = NOVALUE;
    // SubProg add_to_routine_list pc: 85 op: STARTLINE (58)

    /** c_decl.e:1036		c_printf(", %d", seq_num)*/
    // SubProg add_to_routine_list pc: 87 op: PROC (27)
    RefDS(_22952);
    _54c_printf(_22952, _seq_num_43594);
    // SubProg add_to_routine_list pc: 91 op: STARTLINE (58)

    /** c_decl.e:1037		c_printf(", %d", SymTab[s][S_FILE_NO])*/
    // SubProg add_to_routine_list pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 95 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22953 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22953);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _22954 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _22954 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _22953 = NOVALUE;
    // SubProg add_to_routine_list pc: 105 op: PROC (27)
    RefDS(_22952);
    Ref(_22954);
    _54c_printf(_22952, _22954);
    _22954 = NOVALUE;
    // SubProg add_to_routine_list pc: 109 op: STARTLINE (58)

    /** c_decl.e:1038		c_printf(", %d", SymTab[s][S_NUM_ARGS])*/
    // SubProg add_to_routine_list pc: 111 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 113 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22955 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 119 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22955);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _22956 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _22956 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _22955 = NOVALUE;
    // SubProg add_to_routine_list pc: 123 op: PROC (27)
    RefDS(_22952);
    Ref(_22956);
    _54c_printf(_22952, _22956);
    _22956 = NOVALUE;
    // SubProg add_to_routine_list pc: 127 op: STARTLINE (58)

    /** c_decl.e:1040		if TWINDOWS and dll_option and find( SymTab[s][S_SCOPE], { SC_GLOBAL, SC_EXPORT, SC_PUBLIC} ) then*/
    // SubProg add_to_routine_list pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 131 op: SC1_AND (141)
    if (0 == 0) {
        _22957 = 0;
        goto L2; // [131] 141
    }
    // SubProg add_to_routine_list pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 137 op: SC2_AND (142)
    _22957 = (_57dll_option_42130 != 0);
    // SubProg add_to_routine_list pc: 140 op: NOP1 (159)
L2: // addr: 141 pc: 140 sub: 43590 op: 159
    // SubProg add_to_routine_list pc: 141 op: SC1_AND_IF (146)
    if (_22957 == 0) {
        goto L3; // [141] 186
    }
    // SubProg add_to_routine_list pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22959 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22959);
    _22960 = (object)*(((s1_ptr)_2)->base + 4);
    _22959 = NOVALUE;
    // SubProg add_to_routine_list pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 163 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 11;
    ((intptr_t*)_2)[3] = 13;
    _22961 = MAKE_SEQ(_1);
    // SubProg add_to_routine_list pc: 169 op: FIND_FROM (176)
    _22962 = find_from(_22960, _22961, 1);
    _22960 = NOVALUE;
    DeRefDS(_22961);
    _22961 = NOVALUE;
    // SubProg add_to_routine_list pc: 174 op: NOP1 (159)
    // SubProg add_to_routine_list pc: 175 op: IF (20)
    if (_22962 == 0)
    {
        _22962 = NOVALUE;
        goto L3; // [175] 186
    }
    else{
        _22962 = NOVALUE;
    }
    // SubProg add_to_routine_list pc: 178 op: STARTLINE (58)

    /** c_decl.e:1041			c_puts(", 1")  -- must call with __stdcall convention*/
    // SubProg add_to_routine_list pc: 180 op: PROC (27)
    RefDS(_22963);
    _54c_puts(_22963);
    // SubProg add_to_routine_list pc: 183 op: ELSE (23)
    goto L4; // [183] 192
    // SubProg add_to_routine_list pc: 185 op: NOP1 (159)
L3: // addr: 186 pc: 185 sub: 43590 op: 159
    // SubProg add_to_routine_list pc: 186 op: STARTLINE (58)

    /** c_decl.e:1043			c_puts(", 0")  -- default: call with normal or __cdecl convention*/
    // SubProg add_to_routine_list pc: 188 op: PROC (27)
    RefDS(_22964);
    _54c_puts(_22964);
    // SubProg add_to_routine_list pc: 191 op: NOP1 (159)
L4: // addr: 192 pc: 191 sub: 43590 op: 159
    // SubProg add_to_routine_list pc: 192 op: STARTLINE (58)

    /** c_decl.e:1046		c_printf(", %d, 0", SymTab[s][S_SCOPE] )*/
    // SubProg add_to_routine_list pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 196 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22966 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 200 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 202 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22966);
    _22967 = (object)*(((s1_ptr)_2)->base + 4);
    _22966 = NOVALUE;
    // SubProg add_to_routine_list pc: 206 op: PROC (27)
    RefDS(_22965);
    Ref(_22967);
    _54c_printf(_22965, _22967);
    _22967 = NOVALUE;
    // SubProg add_to_routine_list pc: 210 op: STARTLINE (58)

    /** c_decl.e:1047		c_puts("}")*/
    // SubProg add_to_routine_list pc: 212 op: PROC (27)
    RefDS(_22968);
    _54c_puts(_22968);
    // SubProg add_to_routine_list pc: 215 op: STARTLINE (58)

    /** c_decl.e:1049		if SymTab[s][S_NREFS] < 2 then*/
    // SubProg add_to_routine_list pc: 217 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 219 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22969 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 225 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22969);
    _22970 = (object)*(((s1_ptr)_2)->base + 12);
    _22969 = NOVALUE;
    // SubProg add_to_routine_list pc: 229 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _22970, 2)){
        _22970 = NOVALUE;
        goto L5; // [229] 249
    }
    _22970 = NOVALUE;
    // SubProg add_to_routine_list pc: 233 op: STARTLINE (58)

    /** c_decl.e:1050			SymTab[s][S_NREFS] = 2 --s->nrefs++*/
    // SubProg add_to_routine_list pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 237 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_43593 + ((s1_ptr)_2)->base);
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
    _22972 = NOVALUE;
    // SubProg add_to_routine_list pc: 248 op: NOP1 (159)
L5: // addr: 249 pc: 248 sub: 43590 op: 159
    // SubProg add_to_routine_list pc: 249 op: STARTLINE (58)

    /** c_decl.e:1055		symtab_index p = SymTab[s][S_NEXT]*/
    // SubProg add_to_routine_list pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 253 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22974 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 257 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 259 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22974);
    _p_43670 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_43670)){
        _p_43670 = (object)DBL_PTR(_p_43670)->dbl;
    }
    _22974 = NOVALUE;
    // SubProg add_to_routine_list pc: 265 op: STARTLINE (58)

    /** c_decl.e:1056		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg add_to_routine_list pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 269 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _22976 = (object)*(((s1_ptr)_2)->base + _s_43593);
    // SubProg add_to_routine_list pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_to_routine_list pc: 275 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_22976);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _22977 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _22977 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _22976 = NOVALUE;
    // SubProg add_to_routine_list pc: 279 op: FOR (21)
    {
        object _i_43676;
        _i_43676 = 1;
L6: // addr: 286 pc: 279 sub: 43590 op: 21
        if (binary_op_a(GREATER, _i_43676, _22977)){
            goto L7; // [279] 377
        }
        // SubProg add_to_routine_list pc: 286 op: STARTLINE (58)

        /** c_decl.e:1057			SymTab[p][S_ARG_SEQ_ELEM_NEW] = TYPE_OBJECT*/
        // SubProg add_to_routine_list pc: 288 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 290 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43670 + ((s1_ptr)_2)->base);
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
        _22978 = NOVALUE;
        // SubProg add_to_routine_list pc: 303 op: STARTLINE (58)

        /** c_decl.e:1058			SymTab[p][S_ARG_TYPE_NEW] = TYPE_OBJECT*/
        // SubProg add_to_routine_list pc: 305 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 307 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43670 + ((s1_ptr)_2)->base);
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
        _22980 = NOVALUE;
        // SubProg add_to_routine_list pc: 320 op: STARTLINE (58)

        /** c_decl.e:1059			SymTab[p][S_ARG_MIN_NEW] = NOVALUE*/
        // SubProg add_to_routine_list pc: 322 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 324 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43670 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 331 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 333 op: PASSIGN_SUBS (162)
        Ref(_5NOVALUE_12331);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 49);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5NOVALUE_12331;
        DeRef(_1);
        _22982 = NOVALUE;
        // SubProg add_to_routine_list pc: 337 op: STARTLINE (58)

        /** c_decl.e:1060			SymTab[p][S_ARG_SEQ_LEN_NEW] = NOVALUE*/
        // SubProg add_to_routine_list pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 341 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43670 + ((s1_ptr)_2)->base);
        // SubProg add_to_routine_list pc: 346 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 348 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 350 op: PASSIGN_SUBS (162)
        Ref(_5NOVALUE_12331);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 52);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5NOVALUE_12331;
        DeRef(_1);
        _22984 = NOVALUE;
        // SubProg add_to_routine_list pc: 354 op: STARTLINE (58)

        /** c_decl.e:1061			p = SymTab[p][S_NEXT]*/
        // SubProg add_to_routine_list pc: 356 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 358 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _22986 = (object)*(((s1_ptr)_2)->base + _p_43670);
        // SubProg add_to_routine_list pc: 362 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_to_routine_list pc: 364 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_22986);
        _p_43670 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_p_43670)){
            _p_43670 = (object)DBL_PTR(_p_43670)->dbl;
        }
        _22986 = NOVALUE;
        // SubProg add_to_routine_list pc: 370 op: STARTLINE (58)

        /** c_decl.e:1062		end for*/
        // SubProg add_to_routine_list pc: 372 op: ENDFOR_INT_UP1 (54)
        _0 = _i_43676;
        if (IS_ATOM_INT(_i_43676)) {
            _i_43676 = _i_43676 + 1;
            if ((object)((uintptr_t)_i_43676 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43676 = NewDouble((eudouble)_i_43676);
            }
        }
        else {
            _i_43676 = binary_op_a(PLUS, _i_43676, 1);
        }
        DeRef(_0);
        goto L6; // [372] 286
L7: // addr: 377 pc: 372 sub: 43590 op: 54
        ;
        DeRef(_i_43676);
    }
    // SubProg add_to_routine_list pc: 377 op: STARTLINE (58)

    /** c_decl.e:1063	end procedure*/
    // SubProg add_to_routine_list pc: 379 op: RETURNP (29)

// Exiting block BLOCK: add_to_routine_list

// block var s_43593

// block var seq_num_43594

// block var first_43595

// block var p_43670
    _22977 = NOVALUE;
    return;
    // SubProg add_to_routine_list pc: 382 op: BADRETURNF (43)
    ;
}


void _57DeclareRoutineList()
{
    object _s_43708 = NOVALUE;
    object _first_43709 = NOVALUE;
    object _seq_num_43710 = NOVALUE;
    object _these_routines_43718 = NOVALUE;
    object _these_routines_43740 = NOVALUE;
// skipping _23004  name type: 0
// skipping _23003  name type: 0
    object _23002 = NOVALUE; // 43751 23002
    object _23001 = NOVALUE; // 43749 23001
// skipping _23000  name type: 0
    object _22999 = NOVALUE; // 43745 22999
// skipping _22998  name type: 0
    object _22997 = NOVALUE; // 43739 22997
// skipping _22995  name type: 0
    object _22994 = NOVALUE; // 43729 22994
    object _22993 = NOVALUE; // 43727 22993
// skipping _22992  name type: 0
    object _22991 = NOVALUE; // 43723 22991
// skipping _22990  name type: 0
    object _22989 = NOVALUE; // 43717 22989
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareRoutineList pc: 1 op: STARTLINE (58)

    /** c_decl.e:1069		integer first, seq_num*/
    // SubProg DeclareRoutineList pc: 3 op: STARTLINE (58)

    /** c_decl.e:1071		c_hputs("extern struct routine_list _00[];\n")*/
    // SubProg DeclareRoutineList pc: 5 op: PROC (27)
    RefDS(_22988);
    _54c_hputs(_22988);
    // SubProg DeclareRoutineList pc: 8 op: STARTLINE (58)

    /** c_decl.e:1073		check_file_routines()*/
    // SubProg DeclareRoutineList pc: 10 op: PROC (27)
    _57check_file_routines();
    // SubProg DeclareRoutineList pc: 12 op: STARTLINE (58)

    /** c_decl.e:1074		for f = 1 to length( file_routines ) do*/
    // SubProg DeclareRoutineList pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_57file_routines_44300)){
            _22989 = SEQ_PTR(_57file_routines_44300)->length;
    }
    else {
        _22989 = 1;
    }
    // SubProg DeclareRoutineList pc: 19 op: FOR_I (125)
    {
        object _f_43715;
        _f_43715 = 1;
L1: // addr: 26 pc: 19 sub: 43705 op: 125
        if (_f_43715 > _22989){
            goto L2; // [19] 98
        }
        // SubProg DeclareRoutineList pc: 26 op: STARTLINE (58)

        /** c_decl.e:1075			sequence these_routines = file_routines[f]*/
        // SubProg DeclareRoutineList pc: 28 op: GLOBAL_INIT_CHECK (109)
        // SubProg DeclareRoutineList pc: 30 op: RHS_SUBS_CHECK (92)
        DeRef(_these_routines_43718);
        _2 = (object)SEQ_PTR(_57file_routines_44300);
        _these_routines_43718 = (object)*(((s1_ptr)_2)->base + _f_43715);
        Ref(_these_routines_43718);
        // SubProg DeclareRoutineList pc: 34 op: SEQUENCE_CHECK (97)
        // SubProg DeclareRoutineList pc: 36 op: STARTLINE (58)

        /** c_decl.e:1076			for r = 1 to length( these_routines ) do*/
        // SubProg DeclareRoutineList pc: 38 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_43718)){
                _22991 = SEQ_PTR(_these_routines_43718)->length;
        }
        else {
            _22991 = 1;
        }
        // SubProg DeclareRoutineList pc: 41 op: FOR_I (125)
        {
            object _r_43722;
            _r_43722 = 1;
L3: // addr: 48 pc: 41 sub: 43705 op: 125
            if (_r_43722 > _22991){
                goto L4; // [41] 89
            }
            // SubProg DeclareRoutineList pc: 48 op: STARTLINE (58)

            /** c_decl.e:1077				s = these_routines[r]*/
            // SubProg DeclareRoutineList pc: 50 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_43718);
            _s_43708 = (object)*(((s1_ptr)_2)->base + _r_43722);
            if (!IS_ATOM_INT(_s_43708)){
                _s_43708 = (object)DBL_PTR(_s_43708)->dbl;
            }
            // SubProg DeclareRoutineList pc: 56 op: STARTLINE (58)

            /** c_decl.e:1078				if SymTab[s][S_USAGE] != U_DELETED then*/
            // SubProg DeclareRoutineList pc: 58 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 60 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _22993 = (object)*(((s1_ptr)_2)->base + _s_43708);
            // SubProg DeclareRoutineList pc: 64 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 66 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_22993);
            _22994 = (object)*(((s1_ptr)_2)->base + 5);
            _22993 = NOVALUE;
            // SubProg DeclareRoutineList pc: 70 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 72 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _22994, 99)){
                _22994 = NOVALUE;
                goto L5; // [72] 82
            }
            _22994 = NOVALUE;
            // SubProg DeclareRoutineList pc: 76 op: STARTLINE (58)

            /** c_decl.e:1080					declare_prototype( s )*/
            // SubProg DeclareRoutineList pc: 78 op: PROC (27)
            _57declare_prototype(_s_43708);
            // SubProg DeclareRoutineList pc: 81 op: NOP1 (159)
L5: // addr: 82 pc: 81 sub: 43705 op: 159
            // SubProg DeclareRoutineList pc: 82 op: STARTLINE (58)

            /** c_decl.e:1083			end for*/
            // SubProg DeclareRoutineList pc: 84 op: ENDFOR_INT_UP1 (54)
            _r_43722 = _r_43722 + 1;
            goto L3; // [84] 48
L4: // addr: 89 pc: 84 sub: 43705 op: 54
            ;
        }
        // SubProg DeclareRoutineList pc: 89 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var these_routines_43718
        DeRef(_these_routines_43718);
        _these_routines_43718 = NOVALUE;
        // SubProg DeclareRoutineList pc: 91 op: STARTLINE (58)

        /** c_decl.e:1084		end for*/
        // SubProg DeclareRoutineList pc: 93 op: ENDFOR_INT_UP1 (54)
        _f_43715 = _f_43715 + 1;
        goto L1; // [93] 26
L2: // addr: 98 pc: 93 sub: 43705 op: 54
        ;
    }
    // SubProg DeclareRoutineList pc: 98 op: STARTLINE (58)

    /** c_decl.e:1085		c_puts("\n")*/
    // SubProg DeclareRoutineList pc: 100 op: PROC (27)
    RefDS(_22165);
    _54c_puts(_22165);
    // SubProg DeclareRoutineList pc: 103 op: STARTLINE (58)

    /** c_decl.e:1088		seq_num = 0*/
    // SubProg DeclareRoutineList pc: 105 op: ASSIGN_I (113)
    _seq_num_43710 = 0;
    // SubProg DeclareRoutineList pc: 108 op: STARTLINE (58)

    /** c_decl.e:1089		first = TRUE*/
    // SubProg DeclareRoutineList pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 112 op: ASSIGN (18)
    _first_43709 = _6TRUE_365;
    // SubProg DeclareRoutineList pc: 115 op: INTEGER_CHECK (96)
    // SubProg DeclareRoutineList pc: 117 op: STARTLINE (58)

    /** c_decl.e:1090		c_puts("struct routine_list _00[] = {\n")*/
    // SubProg DeclareRoutineList pc: 119 op: PROC (27)
    RefDS(_22996);
    _54c_puts(_22996);
    // SubProg DeclareRoutineList pc: 122 op: STARTLINE (58)

    /** c_decl.e:1092		for f = 1 to length( file_routines ) do*/
    // SubProg DeclareRoutineList pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareRoutineList pc: 126 op: LENGTH (42)
    if (IS_SEQUENCE(_57file_routines_44300)){
            _22997 = SEQ_PTR(_57file_routines_44300)->length;
    }
    else {
        _22997 = 1;
    }
    // SubProg DeclareRoutineList pc: 129 op: FOR_I (125)
    {
        object _f_43737;
        _f_43737 = 1;
L6: // addr: 136 pc: 129 sub: 43705 op: 125
        if (_f_43737 > _22997){
            goto L7; // [129] 222
        }
        // SubProg DeclareRoutineList pc: 136 op: STARTLINE (58)

        /** c_decl.e:1093			sequence these_routines = file_routines[f]*/
        // SubProg DeclareRoutineList pc: 138 op: GLOBAL_INIT_CHECK (109)
        // SubProg DeclareRoutineList pc: 140 op: RHS_SUBS_CHECK (92)
        DeRef(_these_routines_43740);
        _2 = (object)SEQ_PTR(_57file_routines_44300);
        _these_routines_43740 = (object)*(((s1_ptr)_2)->base + _f_43737);
        Ref(_these_routines_43740);
        // SubProg DeclareRoutineList pc: 144 op: SEQUENCE_CHECK (97)
        // SubProg DeclareRoutineList pc: 146 op: STARTLINE (58)

        /** c_decl.e:1094			for r = 1 to length( these_routines ) do*/
        // SubProg DeclareRoutineList pc: 148 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_43740)){
                _22999 = SEQ_PTR(_these_routines_43740)->length;
        }
        else {
            _22999 = 1;
        }
        // SubProg DeclareRoutineList pc: 151 op: FOR_I (125)
        {
            object _r_43744;
            _r_43744 = 1;
L8: // addr: 158 pc: 151 sub: 43705 op: 125
            if (_r_43744 > _22999){
                goto L9; // [151] 213
            }
            // SubProg DeclareRoutineList pc: 158 op: STARTLINE (58)

            /** c_decl.e:1095				s = these_routines[r]*/
            // SubProg DeclareRoutineList pc: 160 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_43740);
            _s_43708 = (object)*(((s1_ptr)_2)->base + _r_43744);
            if (!IS_ATOM_INT(_s_43708)){
                _s_43708 = (object)DBL_PTR(_s_43708)->dbl;
            }
            // SubProg DeclareRoutineList pc: 166 op: STARTLINE (58)

            /** c_decl.e:1096				if SymTab[s][S_RI_TARGET] then*/
            // SubProg DeclareRoutineList pc: 168 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 170 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23001 = (object)*(((s1_ptr)_2)->base + _s_43708);
            // SubProg DeclareRoutineList pc: 174 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 176 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23001);
            _23002 = (object)*(((s1_ptr)_2)->base + 53);
            _23001 = NOVALUE;
            // SubProg DeclareRoutineList pc: 180 op: IF (20)
            if (_23002 == 0) {
                _23002 = NOVALUE;
                goto LA; // [180] 200
            }
            else {
                if (!IS_ATOM_INT(_23002) && DBL_PTR(_23002)->dbl == 0.0){
                    _23002 = NOVALUE;
                    goto LA; // [180] 200
                }
                _23002 = NOVALUE;
            }
            _23002 = NOVALUE;
            // SubProg DeclareRoutineList pc: 183 op: STARTLINE (58)

            /** c_decl.e:1098					add_to_routine_list( s, seq_num, first )*/
            // SubProg DeclareRoutineList pc: 185 op: PROC (27)
            _57add_to_routine_list(_s_43708, _seq_num_43710, _first_43709);
            // SubProg DeclareRoutineList pc: 190 op: STARTLINE (58)

            /** c_decl.e:1099					first = FALSE*/
            // SubProg DeclareRoutineList pc: 192 op: GLOBAL_INIT_CHECK (109)
            // SubProg DeclareRoutineList pc: 194 op: ASSIGN (18)
            _first_43709 = _6FALSE_363;
            // SubProg DeclareRoutineList pc: 197 op: INTEGER_CHECK (96)
            // SubProg DeclareRoutineList pc: 199 op: NOP1 (159)
LA: // addr: 200 pc: 199 sub: 43705 op: 159
            // SubProg DeclareRoutineList pc: 200 op: STARTLINE (58)

            /** c_decl.e:1102				seq_num += 1*/
            // SubProg DeclareRoutineList pc: 202 op: PLUS1_I (117)
            _seq_num_43710 = _seq_num_43710 + 1;
            // SubProg DeclareRoutineList pc: 206 op: STARTLINE (58)

            /** c_decl.e:1103			end for*/
            // SubProg DeclareRoutineList pc: 208 op: ENDFOR_INT_UP1 (54)
            _r_43744 = _r_43744 + 1;
            goto L8; // [208] 158
L9: // addr: 213 pc: 208 sub: 43705 op: 54
            ;
        }
        // SubProg DeclareRoutineList pc: 213 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var these_routines_43740
        DeRef(_these_routines_43740);
        _these_routines_43740 = NOVALUE;
        // SubProg DeclareRoutineList pc: 215 op: STARTLINE (58)

        /** c_decl.e:1104		end for*/
        // SubProg DeclareRoutineList pc: 217 op: ENDFOR_INT_UP1 (54)
        _f_43737 = _f_43737 + 1;
        goto L6; // [217] 136
L7: // addr: 222 pc: 217 sub: 43705 op: 54
        ;
    }
    // SubProg DeclareRoutineList pc: 222 op: STARTLINE (58)

    /** c_decl.e:1105		if not first then*/
    // SubProg DeclareRoutineList pc: 224 op: NOT_IFW (108)
    if (_first_43709 != 0)
    goto LB; // [224] 233
    // SubProg DeclareRoutineList pc: 227 op: STARTLINE (58)

    /** c_decl.e:1106			c_puts(",\n")*/
    // SubProg DeclareRoutineList pc: 229 op: PROC (27)
    RefDS(_22942);
    _54c_puts(_22942);
    // SubProg DeclareRoutineList pc: 232 op: NOP1 (159)
LB: // addr: 233 pc: 232 sub: 43705 op: 159
    // SubProg DeclareRoutineList pc: 233 op: STARTLINE (58)

    /** c_decl.e:1108		c_puts("  {\"\", 0, 999999999, 0, 0, 0, 0}\n};\n\n")  -- end marker*/
    // SubProg DeclareRoutineList pc: 235 op: PROC (27)
    RefDS(_23005);
    _54c_puts(_23005);
    // SubProg DeclareRoutineList pc: 238 op: STARTLINE (58)

    /** c_decl.e:1110		c_hputs("extern char ** _02;\n")*/
    // SubProg DeclareRoutineList pc: 240 op: PROC (27)
    RefDS(_23006);
    _54c_hputs(_23006);
    // SubProg DeclareRoutineList pc: 243 op: STARTLINE (58)

    /** c_decl.e:1111		c_puts("char ** _02;\n")*/
    // SubProg DeclareRoutineList pc: 245 op: PROC (27)
    RefDS(_23007);
    _54c_puts(_23007);
    // SubProg DeclareRoutineList pc: 248 op: STARTLINE (58)

    /** c_decl.e:1113		c_hputs("extern object _0switches;\n")*/
    // SubProg DeclareRoutineList pc: 250 op: PROC (27)
    RefDS(_23008);
    _54c_hputs(_23008);
    // SubProg DeclareRoutineList pc: 253 op: STARTLINE (58)

    /** c_decl.e:1114		c_puts("object _0switches;\n")*/
    // SubProg DeclareRoutineList pc: 255 op: PROC (27)
    RefDS(_23009);
    _54c_puts(_23009);
    // SubProg DeclareRoutineList pc: 258 op: STARTLINE (58)

    /** c_decl.e:1115	end procedure*/
    // SubProg DeclareRoutineList pc: 260 op: RETURNP (29)

// Exiting block BLOCK: DeclareRoutineList

// block var s_43708

// block var first_43709

// block var seq_num_43710
    return;
    // SubProg DeclareRoutineList pc: 263 op: BADRETURNF (43)
    ;
}


void _57DeclareNameSpaceList()
{
    object _s_43770 = NOVALUE;
    object _first_43771 = NOVALUE;
    object _seq_num_43772 = NOVALUE;
// skipping _23031  name type: 0
// skipping _23030  name type: 0
    object _23029 = NOVALUE; // 43823 23029
// skipping _23028  name type: 0
    object _23027 = NOVALUE; // 43819 23027
    object _23026 = NOVALUE; // 43817 23026
    object _23025 = NOVALUE; // 43813 23025
    object _23024 = NOVALUE; // 43811 23024
    object _23022 = NOVALUE; // 43807 23022
    object _23021 = NOVALUE; // 43805 23021
// skipping _23020  name type: 0
// skipping _23019  name type: 0
    object _23018 = NOVALUE; // 43795 23018
    object _23017 = NOVALUE; // 43793 23017
    object _23016 = NOVALUE; // 43790 23016
    object _23015 = NOVALUE; // 43788 23015
    object _23014 = NOVALUE; // 43786 23014
// skipping _23013  name type: 0
    object _23012 = NOVALUE; // 43780 23012
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DeclareNameSpaceList pc: 1 op: STARTLINE (58)

    /** c_decl.e:1121		integer first, seq_num*/
    // SubProg DeclareNameSpaceList pc: 3 op: STARTLINE (58)

    /** c_decl.e:1123		c_hputs("extern struct ns_list _01[];\n")*/
    // SubProg DeclareNameSpaceList pc: 5 op: PROC (27)
    RefDS(_23010);
    _54c_hputs(_23010);
    // SubProg DeclareNameSpaceList pc: 8 op: STARTLINE (58)

    /** c_decl.e:1124		c_puts("struct ns_list _01[] = {\n")*/
    // SubProg DeclareNameSpaceList pc: 10 op: PROC (27)
    RefDS(_23011);
    _54c_puts(_23011);
    // SubProg DeclareNameSpaceList pc: 13 op: STARTLINE (58)

    /** c_decl.e:1126		seq_num = 0*/
    // SubProg DeclareNameSpaceList pc: 15 op: ASSIGN_I (113)
    _seq_num_43772 = 0;
    // SubProg DeclareNameSpaceList pc: 18 op: STARTLINE (58)

    /** c_decl.e:1127		first = TRUE*/
    // SubProg DeclareNameSpaceList pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 22 op: ASSIGN (18)
    _first_43771 = _6TRUE_365;
    // SubProg DeclareNameSpaceList pc: 25 op: INTEGER_CHECK (96)
    // SubProg DeclareNameSpaceList pc: 27 op: STARTLINE (58)

    /** c_decl.e:1129		s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg DeclareNameSpaceList pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23012 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg DeclareNameSpaceList pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23012);
    _s_43770 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43770)){
        _s_43770 = (object)DBL_PTR(_s_43770)->dbl;
    }
    _23012 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 45 op: STARTLINE (58)

    /** c_decl.e:1130		while s do*/
    // SubProg DeclareNameSpaceList pc: 47 op: NOP2 (110)
    // SubProg DeclareNameSpaceList pc: 49 op: NOPWHILE (158)
L1: // addr: 50 pc: 49 sub: 43767 op: 158
    // SubProg DeclareNameSpaceList pc: 50 op: WHILE (47)
    if (_s_43770 == 0)
    {
        goto L2; // [50] 215
    }
    else{
    }
    // SubProg DeclareNameSpaceList pc: 53 op: STARTLINE (58)

    /** c_decl.e:1131			if find(SymTab[s][S_TOKEN], NAMED_TOKS) then*/
    // SubProg DeclareNameSpaceList pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23014 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 63 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23014);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _23015 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _23015 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _23014 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 69 op: FIND_FROM (176)
    _23016 = find_from(_23015, _29NAMED_TOKS_12082, 1);
    _23015 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 74 op: IF (20)
    if (_23016 == 0)
    {
        _23016 = NOVALUE;
        goto L3; // [74] 194
    }
    else{
        _23016 = NOVALUE;
    }
    // SubProg DeclareNameSpaceList pc: 77 op: STARTLINE (58)

    /** c_decl.e:1132				if SymTab[s][S_TOKEN] = NAMESPACE then*/
    // SubProg DeclareNameSpaceList pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 81 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23017 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23017);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _23018 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _23018 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _23017 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 93 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _23018, 523)){
        _23018 = NOVALUE;
        goto L4; // [93] 187
    }
    _23018 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 97 op: STARTLINE (58)

    /** c_decl.e:1133					if not first then*/
    // SubProg DeclareNameSpaceList pc: 99 op: NOT_IFW (108)
    if (_first_43771 != 0)
    goto L5; // [99] 108
    // SubProg DeclareNameSpaceList pc: 102 op: STARTLINE (58)

    /** c_decl.e:1134						c_puts(",\n")*/
    // SubProg DeclareNameSpaceList pc: 104 op: PROC (27)
    RefDS(_22942);
    _54c_puts(_22942);
    // SubProg DeclareNameSpaceList pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 43767 op: 159
    // SubProg DeclareNameSpaceList pc: 108 op: STARTLINE (58)

    /** c_decl.e:1136					first = FALSE*/
    // SubProg DeclareNameSpaceList pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 112 op: ASSIGN (18)
    _first_43771 = _6FALSE_363;
    // SubProg DeclareNameSpaceList pc: 115 op: INTEGER_CHECK (96)
    // SubProg DeclareNameSpaceList pc: 117 op: STARTLINE (58)

    /** c_decl.e:1138					c_puts("  {\"")*/
    // SubProg DeclareNameSpaceList pc: 119 op: PROC (27)
    RefDS(_22943);
    _54c_puts(_22943);
    // SubProg DeclareNameSpaceList pc: 122 op: STARTLINE (58)

    /** c_decl.e:1139					c_puts(SymTab[s][S_NAME])*/
    // SubProg DeclareNameSpaceList pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23021 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23021);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _23022 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _23022 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _23021 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 136 op: PROC (27)
    Ref(_23022);
    _54c_puts(_23022);
    _23022 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 139 op: STARTLINE (58)

    /** c_decl.e:1140					c_printf("\", %d", SymTab[s][S_OBJ])*/
    // SubProg DeclareNameSpaceList pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 143 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23024 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 149 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23024);
    _23025 = (object)*(((s1_ptr)_2)->base + 1);
    _23024 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 153 op: PROC (27)
    RefDS(_23023);
    Ref(_23025);
    _54c_printf(_23023, _23025);
    _23025 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 157 op: STARTLINE (58)

    /** c_decl.e:1141					c_printf(", %d", seq_num)*/
    // SubProg DeclareNameSpaceList pc: 159 op: PROC (27)
    RefDS(_22952);
    _54c_printf(_22952, _seq_num_43772);
    // SubProg DeclareNameSpaceList pc: 163 op: STARTLINE (58)

    /** c_decl.e:1142					c_printf(", %d", SymTab[s][S_FILE_NO])*/
    // SubProg DeclareNameSpaceList pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 167 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23026 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 173 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23026);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _23027 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _23027 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _23026 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 177 op: PROC (27)
    RefDS(_22952);
    Ref(_23027);
    _54c_printf(_22952, _23027);
    _23027 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 181 op: STARTLINE (58)

    /** c_decl.e:1144					c_puts("}")*/
    // SubProg DeclareNameSpaceList pc: 183 op: PROC (27)
    RefDS(_22968);
    _54c_puts(_22968);
    // SubProg DeclareNameSpaceList pc: 186 op: NOP1 (159)
L4: // addr: 187 pc: 186 sub: 43767 op: 159
    // SubProg DeclareNameSpaceList pc: 187 op: STARTLINE (58)

    /** c_decl.e:1146				seq_num += 1*/
    // SubProg DeclareNameSpaceList pc: 189 op: PLUS1_I (117)
    _seq_num_43772 = _seq_num_43772 + 1;
    // SubProg DeclareNameSpaceList pc: 193 op: NOP1 (159)
L3: // addr: 194 pc: 193 sub: 43767 op: 159
    // SubProg DeclareNameSpaceList pc: 194 op: STARTLINE (58)

    /** c_decl.e:1148			s = SymTab[s][S_NEXT]*/
    // SubProg DeclareNameSpaceList pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 198 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23029 = (object)*(((s1_ptr)_2)->base + _s_43770);
    // SubProg DeclareNameSpaceList pc: 202 op: GLOBAL_INIT_CHECK (109)
    // SubProg DeclareNameSpaceList pc: 204 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23029);
    _s_43770 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43770)){
        _s_43770 = (object)DBL_PTR(_s_43770)->dbl;
    }
    _23029 = NOVALUE;
    // SubProg DeclareNameSpaceList pc: 210 op: STARTLINE (58)

    /** c_decl.e:1149		end while*/
    // SubProg DeclareNameSpaceList pc: 212 op: ENDWHILE (22)
    goto L1; // [212] 50
    // SubProg DeclareNameSpaceList pc: 214 op: NOP1 (159)
L2: // addr: 215 pc: 214 sub: 43767 op: 159
    // SubProg DeclareNameSpaceList pc: 215 op: STARTLINE (58)

    /** c_decl.e:1150		if not first then*/
    // SubProg DeclareNameSpaceList pc: 217 op: NOT_IFW (108)
    if (_first_43771 != 0)
    goto L6; // [217] 226
    // SubProg DeclareNameSpaceList pc: 220 op: STARTLINE (58)

    /** c_decl.e:1151			c_puts(",\n")*/
    // SubProg DeclareNameSpaceList pc: 222 op: PROC (27)
    RefDS(_22942);
    _54c_puts(_22942);
    // SubProg DeclareNameSpaceList pc: 225 op: NOP1 (159)
L6: // addr: 226 pc: 225 sub: 43767 op: 159
    // SubProg DeclareNameSpaceList pc: 226 op: STARTLINE (58)

    /** c_decl.e:1153		c_puts("  {\"\", 0, 999999999, 0}\n};\n\n")  -- end marker*/
    // SubProg DeclareNameSpaceList pc: 228 op: PROC (27)
    RefDS(_23032);
    _54c_puts(_23032);
    // SubProg DeclareNameSpaceList pc: 231 op: STARTLINE (58)

    /** c_decl.e:1154	end procedure*/
    // SubProg DeclareNameSpaceList pc: 233 op: RETURNP (29)

// Exiting block BLOCK: DeclareNameSpaceList

// block var s_43770

// block var first_43771

// block var seq_num_43772
    return;
    // SubProg DeclareNameSpaceList pc: 236 op: BADRETURNF (43)
    ;
}


object _57is_exported(object _s_43834)
{
    object _eentry_43835 = NOVALUE;
    object _scope_43838 = NOVALUE;
    object _23047 = NOVALUE; // 43866 23047
    object _23046 = NOVALUE; // 43864 23046
    object _23045 = NOVALUE; // 43863 23045
    object _23044 = NOVALUE; // 43861 23044
    object _23043 = NOVALUE; // 43859 23043
    object _23042 = NOVALUE; // 43858 23042
    object _23041 = NOVALUE; // 43855 23041
    object _23040 = NOVALUE; // 43854 23040
    object _23039 = NOVALUE; // 43850 23039
    object _23038 = NOVALUE; // 43849 23038
    object _23037 = NOVALUE; // 43848 23037
// skipping _23036  name type: 0
    object _23035 = NOVALUE; // 43843 23035
// skipping _23034  name type: 0
// skipping _23033  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_exported pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_43834)) {
        _1 = (object)(DBL_PTR(_s_43834)->dbl);
        DeRefDS(_s_43834);
        _s_43834 = _1;
    }
    // SubProg is_exported pc: 3 op: STARTLINE (58)

    /** c_decl.e:1159		sequence eentry = SymTab[s]*/
    // SubProg is_exported pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 7 op: RHS_SUBS_CHECK (92)
    DeRef(_eentry_43835);
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _eentry_43835 = (object)*(((s1_ptr)_2)->base + _s_43834);
    Ref(_eentry_43835);
    // SubProg is_exported pc: 11 op: SEQUENCE_CHECK (97)
    // SubProg is_exported pc: 13 op: STARTLINE (58)

    /** c_decl.e:1160		integer scope = eentry[S_SCOPE]*/
    // SubProg is_exported pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 17 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_eentry_43835);
    _scope_43838 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43838))
    _scope_43838 = (object)DBL_PTR(_scope_43838)->dbl;
    // SubProg is_exported pc: 21 op: STARTLINE (58)

    /** c_decl.e:1162		if eentry[S_MODE] = M_NORMAL then*/
    // SubProg is_exported pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 25 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43835);
    _23035 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg is_exported pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 31 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _23035, 1)){
        _23035 = NOVALUE;
        goto L1; // [31] 125
    }
    _23035 = NOVALUE;
    // SubProg is_exported pc: 35 op: STARTLINE (58)

    /** c_decl.e:1163			if eentry[S_FILE_NO] = 1 and find(scope, { SC_EXPORT, SC_PUBLIC, SC_GLOBAL }) then*/
    // SubProg is_exported pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 39 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43835);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _23037 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _23037 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg is_exported pc: 43 op: EQUALS (3)
    if (IS_ATOM_INT(_23037)) {
        _23038 = (_23037 == 1);
    }
    else {
        _23038 = binary_op(EQUALS, _23037, 1);
    }
    _23037 = NOVALUE;
    // SubProg is_exported pc: 47 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_23038)) {
        if (_23038 == 0) {
            goto L2; // [47] 79
        }
    }
    else {
        if (DBL_PTR(_23038)->dbl == 0.0) {
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
    _23040 = MAKE_SEQ(_1);
    // SubProg is_exported pc: 63 op: FIND_FROM (176)
    _23041 = find_from(_scope_43838, _23040, 1);
    DeRefDS(_23040);
    _23040 = NOVALUE;
    // SubProg is_exported pc: 68 op: NOP1 (159)
    // SubProg is_exported pc: 69 op: IF (20)
    if (_23041 == 0)
    {
        _23041 = NOVALUE;
        goto L2; // [69] 79
    }
    else{
        _23041 = NOVALUE;
    }
    // SubProg is_exported pc: 72 op: STARTLINE (58)

    /** c_decl.e:1164				return 1*/
    // SubProg is_exported pc: 74 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43834

// block var eentry_43835
    DeRef(_eentry_43835);

// block var scope_43838
    DeRef(_23038);
    _23038 = NOVALUE;
    return 1;
    // SubProg is_exported pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 43831 op: 159
    // SubProg is_exported pc: 79 op: STARTLINE (58)

    /** c_decl.e:1167			if scope = SC_PUBLIC and*/
    // SubProg is_exported pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 83 op: EQUALS (3)
    _23042 = (_scope_43838 == 13);
    // SubProg is_exported pc: 87 op: SC1_AND_IF (146)
    if (_23042 == 0) {
        goto L3; // [87] 124
    }
    // SubProg is_exported pc: 91 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 93 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _23044 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg is_exported pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 99 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_eentry_43835);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _23045 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _23045 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    // SubProg is_exported pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23044);
    if (!IS_ATOM_INT(_23045)){
        _23046 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23045)->dbl));
    }
    else{
        _23046 = (object)*(((s1_ptr)_2)->base + _23045);
    }
    _23044 = NOVALUE;
    // SubProg is_exported pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_exported pc: 109 op: AND_BITS (56)
    if (IS_ATOM_INT(_23046)) {
        {uintptr_t tu;
             tu = (uintptr_t)_23046 & (uintptr_t)4;
             _23047 = MAKE_UINT(tu);
        }
    }
    else {
        _23047 = binary_op(AND_BITS, _23046, 4);
    }
    _23046 = NOVALUE;
    // SubProg is_exported pc: 113 op: NOP1 (159)
    // SubProg is_exported pc: 114 op: IF (20)
    if (_23047 == 0) {
        DeRef(_23047);
        _23047 = NOVALUE;
        goto L3; // [114] 124
    }
    else {
        if (!IS_ATOM_INT(_23047) && DBL_PTR(_23047)->dbl == 0.0){
            DeRef(_23047);
            _23047 = NOVALUE;
            goto L3; // [114] 124
        }
        DeRef(_23047);
        _23047 = NOVALUE;
    }
    DeRef(_23047);
    _23047 = NOVALUE;
    // SubProg is_exported pc: 117 op: STARTLINE (58)

    /** c_decl.e:1170				return 1*/
    // SubProg is_exported pc: 119 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43834

// block var eentry_43835
    DeRef(_eentry_43835);

// block var scope_43838
    _23045 = NOVALUE;
    DeRef(_23042);
    _23042 = NOVALUE;
    DeRef(_23038);
    _23038 = NOVALUE;
    return 1;
    // SubProg is_exported pc: 123 op: NOP1 (159)
L3: // addr: 124 pc: 123 sub: 43831 op: 159
    // SubProg is_exported pc: 124 op: NOP1 (159)
L1: // addr: 125 pc: 124 sub: 43831 op: 159
    // SubProg is_exported pc: 125 op: STARTLINE (58)

    /** c_decl.e:1174		return 0*/
    // SubProg is_exported pc: 127 op: RETURNF (28)

// Exiting block BLOCK: is_exported

// block var s_43834

// block var eentry_43835
    DeRef(_eentry_43835);

// block var scope_43838
    _23045 = NOVALUE;
    DeRef(_23042);
    _23042 = NOVALUE;
    DeRef(_23038);
    _23038 = NOVALUE;
    return 0;
    // SubProg is_exported pc: 131 op: BADRETURNF (43)
    ;
}


void _57version()
{
    object _23081 = NOVALUE; // 43939 23081
    object _23080 = NOVALUE; // 43938 23080
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg version pc: 1 op: STARTLINE (58)

    /** c_decl.e:1207		c_puts("// Euphoria To C version " & version_string() & "\n")*/
    // SubProg version pc: 3 op: PROC (27)
    _23080 = _32version_string(0);
    // SubProg version pc: 7 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _22165;
        concat_list[1] = _23080;
        concat_list[2] = _23079;
        Concat_N((object_ptr)&_23081, concat_list, 3);
    }
    DeRef(_23080);
    _23080 = NOVALUE;
    // SubProg version pc: 13 op: PROC (27)
    _54c_puts(_23081);
    _23081 = NOVALUE;
    // SubProg version pc: 16 op: STARTLINE (58)

    /** c_decl.e:1208	end procedure*/
    // SubProg version pc: 18 op: RETURNP (29)

// Exiting block BLOCK: version
    return;
    // SubProg version pc: 21 op: BADRETURNF (43)
    ;
}


void _57new_c_file(object _name_43942)
{
// skipping _23089  name type: 0
// skipping _23088  name type: 0
// skipping _23087  name type: 0
// skipping _23086  name type: 0
// skipping _23085  name type: 0
    object _23084 = NOVALUE; // 43952 23084
// skipping _23082  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_c_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg new_c_file pc: 3 op: STARTLINE (58)

    /** c_decl.e:1213		cfile_size = 0*/
    // SubProg new_c_file pc: 5 op: ASSIGN (18)
    _5cfile_size_12557 = 0;
    // SubProg new_c_file pc: 8 op: INTEGER_CHECK (96)
    // SubProg new_c_file pc: 10 op: STARTLINE (58)

    /** c_decl.e:1216		if LAST_PASS = FALSE then*/
    // SubProg new_c_file pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 16 op: EQUALS_IFW (104)
    if (_57LAST_PASS_42116 != _6FALSE_363)
    goto L1; // [16] 26
    // SubProg new_c_file pc: 20 op: STARTLINE (58)

    /** c_decl.e:1217			return*/
    // SubProg new_c_file pc: 22 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: new_c_file

// block var name_43942
    DeRefDS(_name_43942);
    return;
    // SubProg new_c_file pc: 25 op: NOP1 (159)
L1: // addr: 26 pc: 25 sub: 43940 op: 159
    // SubProg new_c_file pc: 26 op: STARTLINE (58)

    /** c_decl.e:1220		write_checksum( c_code )*/
    // SubProg new_c_file pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 30 op: PROC (27)
    _55write_checksum(_54c_code_46164);
    // SubProg new_c_file pc: 33 op: STARTLINE (58)

    /** c_decl.e:1221		close(c_code)*/
    // SubProg new_c_file pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 37 op: CLOSE (86)
    EClose(_54c_code_46164);
    // SubProg new_c_file pc: 39 op: STARTLINE (58)

    /** c_decl.e:1223		c_code = open(output_dir & name & ".c", "w")*/
    // SubProg new_c_file pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 43 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _23083;
        concat_list[1] = _name_43942;
        concat_list[2] = _57output_dir_42144;
        Concat_N((object_ptr)&_23084, concat_list, 3);
    }
    // SubProg new_c_file pc: 49 op: OPEN (37)
    _54c_code_46164 = EOpen(_23084, _22103, 0);
    DeRefDS(_23084);
    _23084 = NOVALUE;
    // SubProg new_c_file pc: 54 op: INTEGER_CHECK (96)
    // SubProg new_c_file pc: 56 op: STARTLINE (58)

    /** c_decl.e:1224		if c_code = -1 then*/
    // SubProg new_c_file pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 60 op: EQUALS_IFW (104)
    if (_54c_code_46164 != -1)
    goto L2; // [60] 72
    // SubProg new_c_file pc: 64 op: STARTLINE (58)

    /** c_decl.e:1225			CompileErr(57)*/
    // SubProg new_c_file pc: 66 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(57, _21958, 0);
    // SubProg new_c_file pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 43940 op: 159
    // SubProg new_c_file pc: 72 op: STARTLINE (58)

    /** c_decl.e:1228		cfile_count += 1*/
    // SubProg new_c_file pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 76 op: PLUS (11)
    _5cfile_count_12556 = _5cfile_count_12556 + 1;
    // SubProg new_c_file pc: 82 op: STARTLINE (58)

    /** c_decl.e:1229		version()*/
    // SubProg new_c_file pc: 84 op: PROC (27)
    _57version();
    // SubProg new_c_file pc: 86 op: STARTLINE (58)

    /** c_decl.e:1231		c_puts("#include \"include/euphoria.h\"\n")*/
    // SubProg new_c_file pc: 88 op: PROC (27)
    RefDS(_22109);
    _54c_puts(_22109);
    // SubProg new_c_file pc: 91 op: STARTLINE (58)

    /** c_decl.e:1233		c_puts("#include \"main-.h\"\n\n")*/
    // SubProg new_c_file pc: 93 op: PROC (27)
    RefDS(_22110);
    _54c_puts(_22110);
    // SubProg new_c_file pc: 96 op: STARTLINE (58)

    /** c_decl.e:1235		if not TUNIX then*/
    // SubProg new_c_file pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_c_file pc: 100 op: NOT_IFW (108)
    if (_39TUNIX_19987 != 0)
    goto L3; // [100] 112
    // SubProg new_c_file pc: 103 op: STARTLINE (58)

    /** c_decl.e:1236			name = lower(name)  -- for faster compare later*/
    // SubProg new_c_file pc: 105 op: PROC (27)
    RefDS(_name_43942);
    _0 = _name_43942;
    _name_43942 = _20lower(_name_43942);
    DeRefDS(_0);
    // SubProg new_c_file pc: 109 op: SEQUENCE_CHECK (97)
    // SubProg new_c_file pc: 111 op: NOP1 (159)
L3: // addr: 112 pc: 111 sub: 43940 op: 159
    // SubProg new_c_file pc: 112 op: STARTLINE (58)

    /** c_decl.e:1238	end procedure*/
    // SubProg new_c_file pc: 114 op: RETURNP (29)

// Exiting block BLOCK: new_c_file

// block var name_43942
    DeRefDS(_name_43942);
    return;
    // SubProg new_c_file pc: 117 op: BADRETURNF (43)
    ;
}


object _57unique_c_name(object _name_43971)
{
    object _i_43972 = NOVALUE;
    object _compare_name_43973 = NOVALUE;
    object _next_fc_43974 = NOVALUE;
// skipping _23106  name type: 0
// skipping _23105  name type: 0
// skipping _23104  name type: 0
// skipping _23103  name type: 0
// skipping _23102  name type: 0
    object _23101 = NOVALUE; // 43992 23101
// skipping _23099  name type: 0
    object _23098 = NOVALUE; // 43988 23098
    object _23097 = NOVALUE; // 43986 23097
    object _23096 = NOVALUE; // 43985 23096
// skipping _23095  name type: 0
    object _23094 = NOVALUE; // 43982 23094
// skipping _23093  name type: 0
// skipping _23092  name type: 0
// skipping _23091  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg unique_c_name pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 3 op: STARTLINE (58)

    /** c_decl.e:1253		compare_name = name & ".c"*/
    // SubProg unique_c_name pc: 5 op: CONCAT (15)
    Concat((object_ptr)&_compare_name_43973, _name_43971, _23083);
    // SubProg unique_c_name pc: 9 op: STARTLINE (58)

    /** c_decl.e:1254		if not TUNIX then*/
    // SubProg unique_c_name pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 13 op: NOT_IFW (108)
    if (_39TUNIX_19987 != 0)
    goto L1; // [13] 25
    // SubProg unique_c_name pc: 16 op: STARTLINE (58)

    /** c_decl.e:1255			compare_name = lower(compare_name)*/
    // SubProg unique_c_name pc: 18 op: PROC (27)
    RefDS(_compare_name_43973);
    _0 = _compare_name_43973;
    _compare_name_43973 = _20lower(_compare_name_43973);
    DeRefDS(_0);
    // SubProg unique_c_name pc: 22 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 43969 op: 159
    // SubProg unique_c_name pc: 25 op: STARTLINE (58)

    /** c_decl.e:1258		next_fc = 1*/
    // SubProg unique_c_name pc: 27 op: ASSIGN_I (113)
    _next_fc_43974 = 1;
    // SubProg unique_c_name pc: 30 op: STARTLINE (58)

    /** c_decl.e:1259		i = 1*/
    // SubProg unique_c_name pc: 32 op: ASSIGN_I (113)
    _i_43972 = 1;
    // SubProg unique_c_name pc: 35 op: STARTLINE (58)

    /** c_decl.e:1261		while i <= length(generated_files) do*/
    // SubProg unique_c_name pc: 37 op: NOP2 (110)
    // SubProg unique_c_name pc: 39 op: NOPWHILE (158)
L2: // addr: 40 pc: 39 sub: 43969 op: 158
    // SubProg unique_c_name pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 42 op: LENGTH (42)
    if (IS_SEQUENCE(_57generated_files_42134)){
            _23094 = SEQ_PTR(_57generated_files_42134)->length;
    }
    else {
        _23094 = 1;
    }
    // SubProg unique_c_name pc: 45 op: LESSEQ_IFW_I (123)
    if (_i_43972 > _23094)
    goto L3; // [45] 139
    // SubProg unique_c_name pc: 49 op: STARTLINE (58)

    /** c_decl.e:1263			if equal(generated_files[i], compare_name) then*/
    // SubProg unique_c_name pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 53 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_57generated_files_42134);
    _23096 = (object)*(((s1_ptr)_2)->base + _i_43972);
    // SubProg unique_c_name pc: 57 op: EQUAL (153)
    if (_23096 == _compare_name_43973)
    _23097 = 1;
    else if (IS_ATOM_INT(_23096) && IS_ATOM_INT(_compare_name_43973))
    _23097 = 0;
    else
    _23097 = (compare(_23096, _compare_name_43973) == 0);
    _23096 = NOVALUE;
    // SubProg unique_c_name pc: 61 op: IF (20)
    if (_23097 == 0)
    {
        _23097 = NOVALUE;
        goto L4; // [61] 127
    }
    else{
        _23097 = NOVALUE;
    }
    // SubProg unique_c_name pc: 64 op: STARTLINE (58)

    /** c_decl.e:1265				if next_fc > length(file_chars) then*/
    // SubProg unique_c_name pc: 66 op: LENGTH (42)
    if (IS_SEQUENCE(_57file_chars_43967)){
            _23098 = SEQ_PTR(_57file_chars_43967)->length;
    }
    else {
        _23098 = 1;
    }
    // SubProg unique_c_name pc: 69 op: GREATER_IFW_I (124)
    if (_next_fc_43974 <= _23098)
    goto L5; // [69] 81
    // SubProg unique_c_name pc: 73 op: STARTLINE (58)

    /** c_decl.e:1266					CompileErr(140)*/
    // SubProg unique_c_name pc: 75 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(140, _21958, 0);
    // SubProg unique_c_name pc: 80 op: NOP1 (159)
L5: // addr: 81 pc: 80 sub: 43969 op: 159
    // SubProg unique_c_name pc: 81 op: STARTLINE (58)

    /** c_decl.e:1269				name[1] = file_chars[next_fc]*/
    // SubProg unique_c_name pc: 83 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_57file_chars_43967);
    _23101 = (object)*(((s1_ptr)_2)->base + _next_fc_43974);
    // SubProg unique_c_name pc: 87 op: ASSIGN_SUBS (16)
    Ref(_23101);
    _2 = (object)SEQ_PTR(_name_43971);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _name_43971 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23101;
    if( _1 != _23101 ){
        DeRef(_1);
    }
    _23101 = NOVALUE;
    // SubProg unique_c_name pc: 91 op: STARTLINE (58)

    /** c_decl.e:1270				compare_name = name & ".c"*/
    // SubProg unique_c_name pc: 93 op: CONCAT (15)
    Concat((object_ptr)&_compare_name_43973, _name_43971, _23083);
    // SubProg unique_c_name pc: 97 op: STARTLINE (58)

    /** c_decl.e:1271				if not TUNIX then*/
    // SubProg unique_c_name pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg unique_c_name pc: 101 op: NOT_IFW (108)
    if (_39TUNIX_19987 != 0)
    goto L6; // [101] 113
    // SubProg unique_c_name pc: 104 op: STARTLINE (58)

    /** c_decl.e:1272					compare_name = lower(compare_name)*/
    // SubProg unique_c_name pc: 106 op: PROC (27)
    RefDS(_compare_name_43973);
    _0 = _compare_name_43973;
    _compare_name_43973 = _20lower(_compare_name_43973);
    DeRefDS(_0);
    // SubProg unique_c_name pc: 110 op: SEQUENCE_CHECK (97)
    // SubProg unique_c_name pc: 112 op: NOP1 (159)
L6: // addr: 113 pc: 112 sub: 43969 op: 159
    // SubProg unique_c_name pc: 113 op: STARTLINE (58)

    /** c_decl.e:1275				next_fc += 1*/
    // SubProg unique_c_name pc: 115 op: PLUS1_I (117)
    _next_fc_43974 = _next_fc_43974 + 1;
    // SubProg unique_c_name pc: 119 op: STARTLINE (58)

    /** c_decl.e:1276				i = 1 -- start over and compare again*/
    // SubProg unique_c_name pc: 121 op: ASSIGN_I (113)
    _i_43972 = 1;
    // SubProg unique_c_name pc: 124 op: ELSE (23)
    goto L2; // [124] 40
    // SubProg unique_c_name pc: 126 op: NOP1 (159)
L4: // addr: 127 pc: 126 sub: 43969 op: 159
    // SubProg unique_c_name pc: 127 op: STARTLINE (58)

    /** c_decl.e:1279				i += 1*/
    // SubProg unique_c_name pc: 129 op: PLUS1_I (117)
    _i_43972 = _i_43972 + 1;
    // SubProg unique_c_name pc: 133 op: NOP1 (159)
    // SubProg unique_c_name pc: 134 op: STARTLINE (58)

    /** c_decl.e:1281		end while*/
    // SubProg unique_c_name pc: 136 op: ENDWHILE (22)
    goto L2; // [136] 40
    // SubProg unique_c_name pc: 138 op: NOP1 (159)
L3: // addr: 139 pc: 138 sub: 43969 op: 159
    // SubProg unique_c_name pc: 139 op: STARTLINE (58)

    /** c_decl.e:1283		return name*/
    // SubProg unique_c_name pc: 141 op: RETURNF (28)

// Exiting block BLOCK: unique_c_name

// block var i_43972

// block var compare_name_43973
    DeRef(_compare_name_43973);

// block var next_fc_43974
    return _name_43971;
    // SubProg unique_c_name pc: 145 op: BADRETURNF (43)
    ;
}


object _57is_file_newer(object _f1_44004, object _f2_44005)
{
    object _d1_44006 = NOVALUE;
    object _d2_44009 = NOVALUE;
    object _diff_2__tmp_at42_44020 = NOVALUE;
    object _diff_1__tmp_at42_44019 = NOVALUE;
    object _diff_inlined_diff_at_42_44018 = NOVALUE;
// skipping _23112  name type: 0
    object _23111 = NOVALUE; // 44015 23111
// skipping _23110  name type: 0
    object _23109 = NOVALUE; // 44013 23109
// skipping _23108  name type: 0
// skipping _23107  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_file_newer pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg is_file_newer pc: 5 op: STARTLINE (58)

    /** c_decl.e:1287		object d1 = file_timestamp(f1)*/
    // SubProg is_file_newer pc: 7 op: PROC (27)
    RefDS(_f1_44004);
    _0 = _d1_44006;
    _d1_44006 = _16file_timestamp(_f1_44004);
    DeRef(_0);
    // SubProg is_file_newer pc: 11 op: STARTLINE (58)

    /** c_decl.e:1288		object d2 = file_timestamp(f2)*/
    // SubProg is_file_newer pc: 13 op: PROC (27)
    RefDS(_f2_44005);
    _0 = _d2_44009;
    _d2_44009 = _16file_timestamp(_f2_44005);
    DeRef(_0);
    // SubProg is_file_newer pc: 17 op: STARTLINE (58)

    /** c_decl.e:1290		if atom(d1) or atom(d2) then return 1 end if*/
    // SubProg is_file_newer pc: 19 op: IS_AN_ATOM (67)
    _23109 = IS_ATOM(_d1_44006);
    // SubProg is_file_newer pc: 22 op: SC1_OR_IF (147)
    if (_23109 != 0) {
        goto L1; // [22] 34
    }
    // SubProg is_file_newer pc: 26 op: IS_AN_ATOM (67)
    _23111 = IS_ATOM(_d2_44009);
    // SubProg is_file_newer pc: 29 op: NOP1 (159)
    // SubProg is_file_newer pc: 30 op: IF (20)
    if (_23111 == 0)
    {
        _23111 = NOVALUE;
        goto L2; // [30] 39
    }
    else{
        _23111 = NOVALUE;
    }
    // SubProg is_file_newer pc: 33 op: NOP1 (159)
L1: // addr: 34 pc: 33 sub: 44002 op: 159
    // SubProg is_file_newer pc: 34 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_44004
    DeRefDS(_f1_44004);

// block var f2_44005
    DeRefDS(_f2_44005);

// block var d1_44006
    DeRef(_d1_44006);

// block var d2_44009
    DeRef(_d2_44009);
    return 1;
    // SubProg is_file_newer pc: 38 op: NOP1 (159)
L2: // addr: 39 pc: 38 sub: 44002 op: 159
    // SubProg is_file_newer pc: 39 op: STARTLINE (58)

    /** c_decl.e:1291		if datetime:diff(d1, d2) < 0 then*/
    // SubProg is_file_newer pc: 41 op: STARTLINE (58)

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    // SubProg is_file_newer pc: 43 op: PROC (27)
    Ref(_d2_44009);
    _0 = _diff_1__tmp_at42_44019;
    _diff_1__tmp_at42_44019 = _17datetimeToSeconds(_d2_44009);
    DeRef(_0);
    // SubProg is_file_newer pc: 47 op: PROC (27)
    Ref(_d1_44006);
    _0 = _diff_2__tmp_at42_44020;
    _diff_2__tmp_at42_44020 = _17datetimeToSeconds(_d1_44006);
    DeRef(_0);
    // SubProg is_file_newer pc: 51 op: MINUS (10)
    DeRef(_diff_inlined_diff_at_42_44018);
    if (IS_ATOM_INT(_diff_1__tmp_at42_44019) && IS_ATOM_INT(_diff_2__tmp_at42_44020)) {
        _diff_inlined_diff_at_42_44018 = _diff_1__tmp_at42_44019 - _diff_2__tmp_at42_44020;
        if ((object)((uintptr_t)_diff_inlined_diff_at_42_44018 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_42_44018 = NewDouble((eudouble)_diff_inlined_diff_at_42_44018);
        }
    }
    else {
        _diff_inlined_diff_at_42_44018 = binary_op(MINUS, _diff_1__tmp_at42_44019, _diff_2__tmp_at42_44020);
    }
    // SubProg is_file_newer pc: 55 op: NOP1 (159)
    // SubProg is_file_newer pc: 56 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-diff from is_file_newer @ 42

// block var diff_1__tmp_at42_44019
    DeRef(_diff_1__tmp_at42_44019);
    _diff_1__tmp_at42_44019 = NOVALUE;

// block var diff_2__tmp_at42_44020
    DeRef(_diff_2__tmp_at42_44020);
    _diff_2__tmp_at42_44020 = NOVALUE;
    // SubProg is_file_newer pc: 58 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_42_44018, 0)){
        goto L3; // [58] 69
    }
    // SubProg is_file_newer pc: 62 op: STARTLINE (58)

    /** c_decl.e:1292			return 1*/
    // SubProg is_file_newer pc: 64 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_44004
    DeRefDS(_f1_44004);

// block var f2_44005
    DeRefDS(_f2_44005);

// block var d1_44006
    DeRef(_d1_44006);

// block var d2_44009
    DeRef(_d2_44009);
    return 1;
    // SubProg is_file_newer pc: 68 op: NOP1 (159)
L3: // addr: 69 pc: 68 sub: 44002 op: 159
    // SubProg is_file_newer pc: 69 op: STARTLINE (58)

    /** c_decl.e:1295		return 0*/
    // SubProg is_file_newer pc: 71 op: RETURNF (28)

// Exiting block BLOCK: is_file_newer

// block var f1_44004
    DeRefDS(_f1_44004);

// block var f2_44005
    DeRefDS(_f2_44005);

// block var d1_44006
    DeRef(_d1_44006);

// block var d2_44009
    DeRef(_d2_44009);
    return 0;
    // SubProg is_file_newer pc: 75 op: BADRETURNF (43)
    ;
}


void _57add_file(object _filename_44024, object _eu_filename_44025)
{
    object _obj_fname_44045 = NOVALUE;
    object _src_fname_44046 = NOVALUE;
// skipping _23137  name type: 0
// skipping _23136  name type: 0
    object _23135 = NOVALUE; // 44064 23135
    object _23134 = NOVALUE; // 44063 23134
// skipping _23133  name type: 0
// skipping _23132  name type: 0
// skipping _23131  name type: 0
// skipping _23130  name type: 0
// skipping _23128  name type: 0
// skipping _23126  name type: 0
// skipping _23125  name type: 0
// skipping _23124  name type: 0
// skipping _23123  name type: 0
// skipping _23122  name type: 0
    object _23121 = NOVALUE; // 44038 23121
    object _23120 = NOVALUE; // 44037 23120
// skipping _23118  name type: 0
    object _23117 = NOVALUE; // 44032 23117
    object _23116 = NOVALUE; // 44031 23116
    object _23115 = NOVALUE; // 44030 23115
    object _23114 = NOVALUE; // 44029 23114
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg add_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 5 op: STARTLINE (58)

    /** c_decl.e:1303		if equal("c", fileext(filename)) then*/
    // SubProg add_file pc: 7 op: PROC (27)
    RefDS(_filename_44024);
    _23114 = _16fileext(_filename_44024);
    // SubProg add_file pc: 11 op: EQUAL (153)
    if (_23113 == _23114)
    _23115 = 1;
    else if (IS_ATOM_INT(_23113) && IS_ATOM_INT(_23114))
    _23115 = 0;
    else
    _23115 = (compare(_23113, _23114) == 0);
    DeRef(_23114);
    _23114 = NOVALUE;
    // SubProg add_file pc: 15 op: IF (20)
    if (_23115 == 0)
    {
        _23115 = NOVALUE;
        goto L1; // [15] 35
    }
    else{
        _23115 = NOVALUE;
    }
    // SubProg add_file pc: 18 op: STARTLINE (58)

    /** c_decl.e:1304			filename = filename[1..$-2]*/
    // SubProg add_file pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_filename_44024)){
            _23116 = SEQ_PTR(_filename_44024)->length;
    }
    else {
        _23116 = 1;
    }
    // SubProg add_file pc: 23 op: MINUS (10)
    _23117 = _23116 - 2;
    _23116 = NOVALUE;
    // SubProg add_file pc: 27 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_filename_44024;
    RHS_Slice(_filename_44024, 1, _23117);
    // SubProg add_file pc: 32 op: ELSE (23)
    goto L2; // [32] 82
    // SubProg add_file pc: 34 op: NOP1 (159)
L1: // addr: 35 pc: 34 sub: 44022 op: 159
    // SubProg add_file pc: 35 op: STARTLINE (58)

    /** c_decl.e:1305		elsif equal("h", fileext(filename)) then*/
    // SubProg add_file pc: 37 op: PROC (27)
    RefDS(_filename_44024);
    _23120 = _16fileext(_filename_44024);
    // SubProg add_file pc: 41 op: EQUAL (153)
    if (_23119 == _23120)
    _23121 = 1;
    else if (IS_ATOM_INT(_23119) && IS_ATOM_INT(_23120))
    _23121 = 0;
    else
    _23121 = (compare(_23119, _23120) == 0);
    DeRef(_23120);
    _23120 = NOVALUE;
    // SubProg add_file pc: 45 op: IF (20)
    if (_23121 == 0)
    {
        _23121 = NOVALUE;
        goto L3; // [45] 81
    }
    else{
        _23121 = NOVALUE;
    }
    // SubProg add_file pc: 48 op: STARTLINE (58)

    /** c_decl.e:1306			generated_files = append(generated_files, filename)*/
    // SubProg add_file pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 52 op: APPEND (35)
    RefDS(_filename_44024);
    Append(&_57generated_files_42134, _57generated_files_42134, _filename_44024);
    // SubProg add_file pc: 56 op: STARTLINE (58)

    /** c_decl.e:1307			if build_system_type = BUILD_DIRECT then*/
    // SubProg add_file pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 62 op: EQUALS_IFW (104)
    // SubProg add_file pc: 66 op: STARTLINE (58)

    /** c_decl.e:1308				outdated_files  = append(outdated_files, 0)*/
    // SubProg add_file pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 70 op: APPEND (35)
    Append(&_57outdated_files_42135, _57outdated_files_42135, 0);
    // SubProg add_file pc: 74 op: NOP1 (159)
    // SubProg add_file pc: 75 op: STARTLINE (58)

    /** c_decl.e:1311			return*/
    // SubProg add_file pc: 77 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: add_file

// block var filename_44024
    DeRefDS(_filename_44024);

// block var eu_filename_44025
    DeRefDS(_eu_filename_44025);

// block var obj_fname_44045
    DeRef(_obj_fname_44045);

// block var src_fname_44046
    DeRef(_src_fname_44046);
    DeRef(_23117);
    _23117 = NOVALUE;
    return;
    // SubProg add_file pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 44022 op: 159
    // SubProg add_file pc: 81 op: NOP1 (159)
L2: // addr: 82 pc: 81 sub: 44022 op: 159
    // SubProg add_file pc: 82 op: STARTLINE (58)

    /** c_decl.e:1314		sequence obj_fname = filename, src_fname = filename & ".c"*/
    // SubProg add_file pc: 84 op: ASSIGN (18)
    RefDS(_filename_44024);
    DeRef(_obj_fname_44045);
    _obj_fname_44045 = _filename_44024;
    // SubProg add_file pc: 87 op: SEQUENCE_CHECK (97)
    // SubProg add_file pc: 89 op: CONCAT (15)
    Concat((object_ptr)&_src_fname_44046, _filename_44024, _23083);
    // SubProg add_file pc: 93 op: STARTLINE (58)

    /** c_decl.e:1316		if compiler_type = COMPILER_WATCOM then*/
    // SubProg add_file pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 99 op: EQUALS_IFW (104)
    // SubProg add_file pc: 112 op: STARTLINE (58)

    /** c_decl.e:1319			obj_fname &= ".o"*/
    // SubProg add_file pc: 114 op: CONCAT (15)
    Concat((object_ptr)&_obj_fname_44045, _obj_fname_44045, _23129);
    // SubProg add_file pc: 118 op: NOP1 (159)
    // SubProg add_file pc: 119 op: STARTLINE (58)

    /** c_decl.e:1322		generated_files = append(generated_files, src_fname)*/
    // SubProg add_file pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 123 op: APPEND (35)
    RefDS(_src_fname_44046);
    Append(&_57generated_files_42134, _57generated_files_42134, _src_fname_44046);
    // SubProg add_file pc: 127 op: STARTLINE (58)

    /** c_decl.e:1323		generated_files = append(generated_files, obj_fname)*/
    // SubProg add_file pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 131 op: APPEND (35)
    RefDS(_obj_fname_44045);
    Append(&_57generated_files_42134, _57generated_files_42134, _obj_fname_44045);
    // SubProg add_file pc: 135 op: STARTLINE (58)

    /** c_decl.e:1324		if build_system_type = BUILD_DIRECT then*/
    // SubProg add_file pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 141 op: EQUALS_IFW (104)
    // SubProg add_file pc: 145 op: STARTLINE (58)

    /** c_decl.e:1325			outdated_files  = append(outdated_files, is_file_newer(eu_filename, output_dir & src_fname))*/
    // SubProg add_file pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 151 op: CONCAT (15)
    Concat((object_ptr)&_23134, _57output_dir_42144, _src_fname_44046);
    // SubProg add_file pc: 155 op: PROC (27)
    RefDS(_eu_filename_44025);
    _23135 = _57is_file_newer(_eu_filename_44025, _23134);
    _23134 = NOVALUE;
    // SubProg add_file pc: 160 op: APPEND (35)
    Ref(_23135);
    Append(&_57outdated_files_42135, _57outdated_files_42135, _23135);
    DeRef(_23135);
    _23135 = NOVALUE;
    // SubProg add_file pc: 164 op: STARTLINE (58)

    /** c_decl.e:1326			outdated_files  = append(outdated_files, 0)*/
    // SubProg add_file pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_file pc: 168 op: APPEND (35)
    Append(&_57outdated_files_42135, _57outdated_files_42135, 0);
    // SubProg add_file pc: 172 op: NOP1 (159)
    // SubProg add_file pc: 173 op: STARTLINE (58)

    /** c_decl.e:1328	end procedure*/
    // SubProg add_file pc: 175 op: RETURNP (29)

// Exiting block BLOCK: add_file

// block var filename_44024
    DeRefDS(_filename_44024);

// block var eu_filename_44025
    DeRefDS(_eu_filename_44025);

// block var obj_fname_44045
    DeRef(_obj_fname_44045);

// block var src_fname_44046
    DeRef(_src_fname_44046);
    DeRef(_23117);
    _23117 = NOVALUE;
    return;
    // SubProg add_file pc: 178 op: BADRETURNF (43)
    ;
}


object _57any_code(object _file_no_44069)
{
    object _these_routines_44071 = NOVALUE;
    object _s_44078 = NOVALUE;
    object _23151 = NOVALUE; // 44099 23151
    object _23150 = NOVALUE; // 44097 23150
    object _23149 = NOVALUE; // 44095 23149
    object _23148 = NOVALUE; // 44093 23148
    object _23147 = NOVALUE; // 44092 23147
    object _23146 = NOVALUE; // 44090 23146
    object _23145 = NOVALUE; // 44088 23145
    object _23144 = NOVALUE; // 44086 23144
    object _23143 = NOVALUE; // 44085 23143
    object _23142 = NOVALUE; // 44084 23142
    object _23141 = NOVALUE; // 44082 23141
// skipping _23140  name type: 0
    object _23139 = NOVALUE; // 44076 23139
// skipping _23138  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg any_code pc: 1 op: INTEGER_CHECK (96)
    // SubProg any_code pc: 3 op: STARTLINE (58)

    /** c_decl.e:1334		check_file_routines()*/
    // SubProg any_code pc: 5 op: PROC (27)
    _57check_file_routines();
    // SubProg any_code pc: 7 op: STARTLINE (58)

    /** c_decl.e:1336		sequence these_routines = file_routines[file_no]*/
    // SubProg any_code pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg any_code pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_these_routines_44071);
    _2 = (object)SEQ_PTR(_57file_routines_44300);
    _these_routines_44071 = (object)*(((s1_ptr)_2)->base + _file_no_44069);
    Ref(_these_routines_44071);
    // SubProg any_code pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg any_code pc: 17 op: STARTLINE (58)

    /** c_decl.e:1337		for i = 1 to length( these_routines ) do*/
    // SubProg any_code pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_these_routines_44071)){
            _23139 = SEQ_PTR(_these_routines_44071)->length;
    }
    else {
        _23139 = 1;
    }
    // SubProg any_code pc: 22 op: FOR_I (125)
    {
        object _i_44075;
        _i_44075 = 1;
L1: // addr: 29 pc: 22 sub: 44067 op: 125
        if (_i_44075 > _23139){
            goto L2; // [22] 126
        }
        // SubProg any_code pc: 29 op: STARTLINE (58)

        /** c_decl.e:1338			symtab_index s = these_routines[i]*/
        // SubProg any_code pc: 31 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_these_routines_44071);
        _s_44078 = (object)*(((s1_ptr)_2)->base + _i_44075);
        if (!IS_ATOM_INT(_s_44078)){
            _s_44078 = (object)DBL_PTR(_s_44078)->dbl;
        }
        // SubProg any_code pc: 37 op: STARTLINE (58)

        /** c_decl.e:1339			if SymTab[s][S_FILE_NO] = file_no and*/
        // SubProg any_code pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _23141 = (object)*(((s1_ptr)_2)->base + _s_44078);
        // SubProg any_code pc: 45 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 47 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23141);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _23142 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _23142 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _23141 = NOVALUE;
        // SubProg any_code pc: 51 op: EQUALS (3)
        if (IS_ATOM_INT(_23142)) {
            _23143 = (_23142 == _file_no_44069);
        }
        else {
            _23143 = binary_op(EQUALS, _23142, _file_no_44069);
        }
        _23142 = NOVALUE;
        // SubProg any_code pc: 55 op: SC1_AND (141)
        if (IS_ATOM_INT(_23143)) {
            if (_23143 == 0) {
                DeRef(_23144);
                _23144 = 0;
                goto L3; // [55] 81
            }
        }
        else {
            if (DBL_PTR(_23143)->dbl == 0.0) {
                DeRef(_23144);
                _23144 = 0;
                goto L3; // [55] 81
            }
        }
        // SubProg any_code pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 61 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _23145 = (object)*(((s1_ptr)_2)->base + _s_44078);
        // SubProg any_code pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23145);
        _23146 = (object)*(((s1_ptr)_2)->base + 5);
        _23145 = NOVALUE;
        // SubProg any_code pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 73 op: NOTEQ (4)
        if (IS_ATOM_INT(_23146)) {
            _23147 = (_23146 != 99);
        }
        else {
            _23147 = binary_op(NOTEQ, _23146, 99);
        }
        _23146 = NOVALUE;
        // SubProg any_code pc: 77 op: SC2_AND (142)
        DeRef(_23144);
        if (IS_ATOM_INT(_23147))
        _23144 = (_23147 != 0);
        else
        _23144 = DBL_PTR(_23147)->dbl != 0.0;
        // SubProg any_code pc: 80 op: NOP1 (159)
L3: // addr: 81 pc: 80 sub: 44067 op: 159
        // SubProg any_code pc: 81 op: SC1_AND_IF (146)
        if (_23144 == 0) {
            goto L4; // [81] 117
        }
        // SubProg any_code pc: 85 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 87 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _23149 = (object)*(((s1_ptr)_2)->base + _s_44078);
        // SubProg any_code pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23149);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _23150 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _23150 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        _23149 = NOVALUE;
        // SubProg any_code pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 99 op: FIND_FROM (176)
        _23151 = find_from(_23150, _29RTN_TOKS_12080, 1);
        _23150 = NOVALUE;
        // SubProg any_code pc: 104 op: NOP1 (159)
        // SubProg any_code pc: 105 op: IF (20)
        if (_23151 == 0)
        {
            _23151 = NOVALUE;
            goto L4; // [105] 117
        }
        else{
            _23151 = NOVALUE;
        }
        // SubProg any_code pc: 108 op: STARTLINE (58)

        /** c_decl.e:1342				return TRUE -- found a non-deleted routine in this file*/
        // SubProg any_code pc: 110 op: GLOBAL_INIT_CHECK (109)
        // SubProg any_code pc: 112 op: RETURNF (28)

// Exiting block BLOCK: FOR-

// block var s_44078

// Exiting block BLOCK: any_code

// block var file_no_44069

// block var these_routines_44071
        DeRef(_these_routines_44071);
        DeRef(_23147);
        _23147 = NOVALUE;
        DeRef(_23143);
        _23143 = NOVALUE;
        return _6TRUE_365;
        // SubProg any_code pc: 116 op: NOP1 (159)
L4: // addr: 117 pc: 116 sub: 44067 op: 159
        // SubProg any_code pc: 117 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var s_44078
        // SubProg any_code pc: 119 op: STARTLINE (58)

        /** c_decl.e:1344		end for*/
        // SubProg any_code pc: 121 op: ENDFOR_INT_UP1 (54)
        _i_44075 = _i_44075 + 1;
        goto L1; // [121] 29
L2: // addr: 126 pc: 121 sub: 44067 op: 54
        ;
    }
    // SubProg any_code pc: 126 op: STARTLINE (58)

    /** c_decl.e:1345		return FALSE*/
    // SubProg any_code pc: 128 op: GLOBAL_INIT_CHECK (109)
    // SubProg any_code pc: 130 op: RETURNF (28)

// Exiting block BLOCK: any_code

// block var file_no_44069

// block var these_routines_44071
    DeRef(_these_routines_44071);
    DeRef(_23147);
    _23147 = NOVALUE;
    DeRef(_23143);
    _23143 = NOVALUE;
    return _6FALSE_363;
    // SubProg any_code pc: 134 op: BADRETURNF (43)
    ;
}


void _57check_file_routines()
{
    object _s_44309 = NOVALUE;
// skipping _23319  name type: 0
    object _23318 = NOVALUE; // 44337 23318
    object _23317 = NOVALUE; // 44335 23317
    object _23316 = NOVALUE; // 44334 23316
    object _23315 = NOVALUE; // 44333 23315
    object _23314 = NOVALUE; // 44331 23314
    object _23313 = NOVALUE; // 44329 23313
    object _23312 = NOVALUE; // 44327 23312
    object _23311 = NOVALUE; // 44325 23311
    object _23310 = NOVALUE; // 44323 23310
    object _23309 = NOVALUE; // 44322 23309
    object _23308 = NOVALUE; // 44320 23308
    object _23307 = NOVALUE; // 44318 23307
// skipping _23306  name type: 0
    object _23305 = NOVALUE; // 44312 23305
// skipping _23304  name type: 0
    object _23303 = NOVALUE; // 44307 23303
// skipping _23302  name type: 0
    object _23301 = NOVALUE; // 44304 23301
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg check_file_routines pc: 1 op: STARTLINE (58)

    /** c_decl.e:1451		if not length( file_routines ) then*/
    // SubProg check_file_routines pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_57file_routines_44300)){
            _23301 = SEQ_PTR(_57file_routines_44300)->length;
    }
    else {
        _23301 = 1;
    }
    // SubProg check_file_routines pc: 8 op: NOT_IFW (108)
    if (_23301 != 0)
    goto L1; // [8] 146
    _23301 = NOVALUE;
    // SubProg check_file_routines pc: 11 op: STARTLINE (58)

    /** c_decl.e:1452			file_routines = repeat( {}, length( known_files ) )*/
    // SubProg check_file_routines pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 15 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _23303 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _23303 = 1;
    }
    // SubProg check_file_routines pc: 18 op: REPEAT (32)
    DeRefDS(_57file_routines_44300);
    _57file_routines_44300 = Repeat(_21958, _23303);
    _23303 = NOVALUE;
    // SubProg check_file_routines pc: 22 op: STARTLINE (58)

    /** c_decl.e:1453			integer s = SymTab[TopLevelSub][S_NEXT]*/
    // SubProg check_file_routines pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 28 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23305 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
    // SubProg check_file_routines pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 34 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23305);
    _s_44309 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44309)){
        _s_44309 = (object)DBL_PTR(_s_44309)->dbl;
    }
    _23305 = NOVALUE;
    // SubProg check_file_routines pc: 40 op: STARTLINE (58)

    /** c_decl.e:1454			while s do*/
    // SubProg check_file_routines pc: 42 op: NOP2 (110)
    // SubProg check_file_routines pc: 44 op: NOPWHILE (158)
L2: // addr: 45 pc: 44 sub: 44301 op: 158
    // SubProg check_file_routines pc: 45 op: WHILE (47)
    if (_s_44309 == 0)
    {
        goto L3; // [45] 145
    }
    else{
    }
    // SubProg check_file_routines pc: 48 op: STARTLINE (58)

    /** c_decl.e:1455				if SymTab[s][S_USAGE] != U_DELETED and*/
    // SubProg check_file_routines pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 52 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23307 = (object)*(((s1_ptr)_2)->base + _s_44309);
    // SubProg check_file_routines pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23307);
    _23308 = (object)*(((s1_ptr)_2)->base + 5);
    _23307 = NOVALUE;
    // SubProg check_file_routines pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 64 op: NOTEQ (4)
    if (IS_ATOM_INT(_23308)) {
        _23309 = (_23308 != 99);
    }
    else {
        _23309 = binary_op(NOTEQ, _23308, 99);
    }
    _23308 = NOVALUE;
    // SubProg check_file_routines pc: 68 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_23309)) {
        if (_23309 == 0) {
            goto L4; // [68] 124
        }
    }
    else {
        if (DBL_PTR(_23309)->dbl == 0.0) {
            goto L4; // [68] 124
        }
    }
    // SubProg check_file_routines pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 74 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23311 = (object)*(((s1_ptr)_2)->base + _s_44309);
    // SubProg check_file_routines pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 80 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23311);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _23312 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _23312 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _23311 = NOVALUE;
    // SubProg check_file_routines pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 86 op: FIND_FROM (176)
    _23313 = find_from(_23312, _29RTN_TOKS_12080, 1);
    _23312 = NOVALUE;
    // SubProg check_file_routines pc: 91 op: NOP1 (159)
    // SubProg check_file_routines pc: 92 op: IF (20)
    if (_23313 == 0)
    {
        _23313 = NOVALUE;
        goto L4; // [92] 124
    }
    else{
        _23313 = NOVALUE;
    }
    // SubProg check_file_routines pc: 95 op: STARTLINE (58)

    /** c_decl.e:1458					file_routines[SymTab[s][S_FILE_NO]] &= s*/
    // SubProg check_file_routines pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 101 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23314 = (object)*(((s1_ptr)_2)->base + _s_44309);
    // SubProg check_file_routines pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 107 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23314);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _23315 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _23315 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _23314 = NOVALUE;
    // SubProg check_file_routines pc: 111 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_57file_routines_44300);
    if (!IS_ATOM_INT(_23315)){
        _23316 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23315)->dbl));
    }
    else{
        _23316 = (object)*(((s1_ptr)_2)->base + _23315);
    }
    // SubProg check_file_routines pc: 115 op: CONCAT (15)
    if (IS_SEQUENCE(_23316) && IS_ATOM(_s_44309)) {
        Append(&_23317, _23316, _s_44309);
    }
    else if (IS_ATOM(_23316) && IS_SEQUENCE(_s_44309)) {
    }
    else {
        Concat((object_ptr)&_23317, _23316, _s_44309);
        _23316 = NOVALUE;
    }
    _23316 = NOVALUE;
    // SubProg check_file_routines pc: 119 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_57file_routines_44300);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _57file_routines_44300 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_23315))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_23315)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _23315);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23317;
    if( _1 != _23317 ){
        DeRef(_1);
    }
    _23317 = NOVALUE;
    // SubProg check_file_routines pc: 123 op: NOP1 (159)
L4: // addr: 124 pc: 123 sub: 44301 op: 159
    // SubProg check_file_routines pc: 124 op: STARTLINE (58)

    /** c_decl.e:1460				s = SymTab[s][S_NEXT]*/
    // SubProg check_file_routines pc: 126 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 128 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _23318 = (object)*(((s1_ptr)_2)->base + _s_44309);
    // SubProg check_file_routines pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg check_file_routines pc: 134 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_23318);
    _s_44309 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44309)){
        _s_44309 = (object)DBL_PTR(_s_44309)->dbl;
    }
    _23318 = NOVALUE;
    // SubProg check_file_routines pc: 140 op: STARTLINE (58)

    /** c_decl.e:1461			end while*/
    // SubProg check_file_routines pc: 142 op: ENDWHILE (22)
    goto L2; // [142] 45
    // SubProg check_file_routines pc: 144 op: NOP1 (159)
L3: // addr: 145 pc: 144 sub: 44301 op: 159
    // SubProg check_file_routines pc: 145 op: NOP1 (159)
L1: // addr: 146 pc: 145 sub: 44301 op: 159
    // SubProg check_file_routines pc: 146 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var s_44309
    // SubProg check_file_routines pc: 148 op: STARTLINE (58)

    /** c_decl.e:1464	end procedure*/
    // SubProg check_file_routines pc: 150 op: RETURNP (29)

// Exiting block BLOCK: check_file_routines
    _23315 = NOVALUE;
    DeRef(_23309);
    _23309 = NOVALUE;
    return;
    // SubProg check_file_routines pc: 153 op: BADRETURNF (43)
    ;
}


void _57GenerateUserRoutines()
{
    object _s_44343 = NOVALUE;
    object _sp_44344 = NOVALUE;
    object _next_c_char_44345 = NOVALUE;
    object _q_44346 = NOVALUE;
    object _temps_44347 = NOVALUE;
    object _buff_44348 = NOVALUE;
    object _base_name_44349 = NOVALUE;
    object _long_c_file_44350 = NOVALUE;
    object _c_file_44351 = NOVALUE;
    object _these_routines_44420 = NOVALUE;
    object _ret_type_44480 = NOVALUE;
    object _s_scope_44489 = NOVALUE;
    object _s_file_44492 = NOVALUE;
    object _scope_44569 = NOVALUE;
    object _names_44603 = NOVALUE;
    object _name_44613 = NOVALUE;
    object _23550 = NOVALUE; // 44856 23550
    object _23548 = NOVALUE; // 44854 23548
    object _23547 = NOVALUE; // 44852 23547
// skipping _23545  name type: 0
// skipping _23544  name type: 0
// skipping _23543  name type: 0
// skipping _23542  name type: 0
// skipping _23541  name type: 0
// skipping _23540  name type: 0
// skipping _23539  name type: 0
// skipping _23538  name type: 0
// skipping _23537  name type: 0
// skipping _23536  name type: 0
// skipping _23535  name type: 0
// skipping _23532  name type: 0
// skipping _23531  name type: 0
// skipping _23530  name type: 0
// skipping _23529  name type: 0
// skipping _23528  name type: 0
// skipping _23527  name type: 0
// skipping _23526  name type: 0
// skipping _23524  name type: 0
// skipping _23523  name type: 0
// skipping _23522  name type: 0
// skipping _23521  name type: 0
// skipping _23520  name type: 0
// skipping _23518  name type: 0
// skipping _23517  name type: 0
    object _23516 = NOVALUE; // 44780 23516
    object _23515 = NOVALUE; // 44779 23515
    object _23514 = NOVALUE; // 44778 23514
    object _23512 = NOVALUE; // 44773 23512
// skipping _23511  name type: 0
    object _23510 = NOVALUE; // 44769 23510
    object _23509 = NOVALUE; // 44765 23509
    object _23508 = NOVALUE; // 44763 23508
    object _23507 = NOVALUE; // 44760 23507
    object _23506 = NOVALUE; // 44758 23506
    object _23505 = NOVALUE; // 44755 23505
    object _23504 = NOVALUE; // 44753 23504
// skipping _23503  name type: 0
    object _23502 = NOVALUE; // 44749 23502
    object _23501 = NOVALUE; // 44747 23501
    object _23500 = NOVALUE; // 44742 23500
    object _23499 = NOVALUE; // 44740 23499
    object _23498 = NOVALUE; // 44738 23498
    object _23497 = NOVALUE; // 44736 23497
    object _23496 = NOVALUE; // 44732 23496
    object _23495 = NOVALUE; // 44730 23495
// skipping _23494  name type: 0
    object _23493 = NOVALUE; // 44717 23493
    object _23492 = NOVALUE; // 44715 23492
// skipping _23491  name type: 0
    object _23490 = NOVALUE; // 44710 23490
    object _23489 = NOVALUE; // 44708 23489
    object _23488 = NOVALUE; // 44705 23488
    object _23487 = NOVALUE; // 44703 23487
    object _23486 = NOVALUE; // 44700 23486
    object _23485 = NOVALUE; // 44698 23485
    object _23484 = NOVALUE; // 44696 23484
    object _23483 = NOVALUE; // 44694 23483
// skipping _23482  name type: 0
    object _23481 = NOVALUE; // 44688 23481
    object _23480 = NOVALUE; // 44686 23480
// skipping _23479  name type: 0
    object _23478 = NOVALUE; // 44680 23478
    object _23477 = NOVALUE; // 44678 23477
    object _23476 = NOVALUE; // 44676 23476
// skipping _23475  name type: 0
    object _23474 = NOVALUE; // 44670 23474
    object _23469 = NOVALUE; // 44663 23469
    object _23468 = NOVALUE; // 44661 23468
// skipping _23467  name type: 0
    object _23466 = NOVALUE; // 44654 23466
// skipping _23465  name type: 0
    object _23464 = NOVALUE; // 44649 23464
// skipping _23462  name type: 0
// skipping _23460  name type: 0
    object _23458 = NOVALUE; // 44632 23458
    object _23457 = NOVALUE; // 44631 23457
    object _23456 = NOVALUE; // 44630 23456
    object _23455 = NOVALUE; // 44629 23455
    object _23454 = NOVALUE; // 44627 23454
    object _23453 = NOVALUE; // 44625 23453
    object _23452 = NOVALUE; // 44624 23452
    object _23451 = NOVALUE; // 44622 23451
// skipping _23450  name type: 0
    object _23449 = NOVALUE; // 44617 23449
    object _23448 = NOVALUE; // 44615 23448
// skipping _23447  name type: 0
    object _23446 = NOVALUE; // 44610 23446
    object _23445 = NOVALUE; // 44608 23445
// skipping _23444  name type: 0
// skipping _23443  name type: 0
    object _23442 = NOVALUE; // 44600 23442
// skipping _23441  name type: 0
    object _23440 = NOVALUE; // 44596 23440
    object _23439 = NOVALUE; // 44586 23439
    object _23438 = NOVALUE; // 44584 23438
// skipping _23435  name type: 0
    object _23434 = NOVALUE; // 44571 23434
// skipping _23432  name type: 0
    object _23431 = NOVALUE; // 44560 23431
// skipping _23429  name type: 0
    object _23428 = NOVALUE; // 44555 23428
    object _23427 = NOVALUE; // 44553 23427
    object _23426 = NOVALUE; // 44550 23426
    object _23425 = NOVALUE; // 44548 23425
    object _23423 = NOVALUE; // 44543 23423
    object _23422 = NOVALUE; // 44541 23422
// skipping _23421  name type: 0
    object _23420 = NOVALUE; // 44535 23420
    object _23419 = NOVALUE; // 44533 23419
    object _23418 = NOVALUE; // 44530 23418
// skipping _23416  name type: 0
// skipping _23414  name type: 0
    object _23413 = NOVALUE; // 44519 23413
    object _23412 = NOVALUE; // 44517 23412
    object _23411 = NOVALUE; // 44515 23411
    object _23410 = NOVALUE; // 44514 23410
    object _23409 = NOVALUE; // 44512 23409
    object _23408 = NOVALUE; // 44511 23408
    object _23407 = NOVALUE; // 44509 23407
    object _23406 = NOVALUE; // 44508 23406
    object _23405 = NOVALUE; // 44506 23405
    object _23404 = NOVALUE; // 44505 23404
    object _23403 = NOVALUE; // 44503 23403
    object _23402 = NOVALUE; // 44502 23402
    object _23401 = NOVALUE; // 44501 23401
    object _23400 = NOVALUE; // 44500 23400
    object _23399 = NOVALUE; // 44498 23399
// skipping _23398  name type: 0
    object _23397 = NOVALUE; // 44494 23397
// skipping _23396  name type: 0
// skipping _23395  name type: 0
    object _23394 = NOVALUE; // 44485 23394
    object _23393 = NOVALUE; // 44483 23393
// skipping _23392  name type: 0
    object _23391 = NOVALUE; // 44478 23391
// skipping _23390  name type: 0
// skipping _23389  name type: 0
    object _23388 = NOVALUE; // 44474 23388
    object _23387 = NOVALUE; // 44473 23387
// skipping _23386  name type: 0
// skipping _23384  name type: 0
    object _23383 = NOVALUE; // 44469 23383
    object _23382 = NOVALUE; // 44466 23382
// skipping _23380  name type: 0
    object _23379 = NOVALUE; // 44463 23379
// skipping _23378  name type: 0
// skipping _23376  name type: 0
    object _23374 = NOVALUE; // 44457 23374
    object _23373 = NOVALUE; // 44455 23373
    object _23372 = NOVALUE; // 44453 23372
    object _23371 = NOVALUE; // 44452 23371
    object _23370 = NOVALUE; // 44450 23370
    object _23369 = NOVALUE; // 44448 23369
    object _23368 = NOVALUE; // 44447 23368
    object _23367 = NOVALUE; // 44446 23367
    object _23366 = NOVALUE; // 44443 23366
    object _23365 = NOVALUE; // 44442 23365
    object _23364 = NOVALUE; // 44440 23364
    object _23363 = NOVALUE; // 44439 23363
    object _23362 = NOVALUE; // 44436 23362
    object _23361 = NOVALUE; // 44435 23361
// skipping _23360  name type: 0
    object _23359 = NOVALUE; // 44430 23359
    object _23358 = NOVALUE; // 44428 23358
// skipping _23357  name type: 0
    object _23356 = NOVALUE; // 44424 23356
// skipping _23355  name type: 0
// skipping _23354  name type: 0
    object _23353 = NOVALUE; // 44417 23353
// skipping _23352  name type: 0
    object _23350 = NOVALUE; // 44412 23350
// skipping _23349  name type: 0
// skipping _23348  name type: 0
    object _23347 = NOVALUE; // 44403 23347
// skipping _23346  name type: 0
// skipping _23345  name type: 0
    object _23344 = NOVALUE; // 44397 23344
    object _23342 = NOVALUE; // 44394 23342
    object _23341 = NOVALUE; // 44393 23341
    object _23338 = NOVALUE; // 44390 23338
// skipping _23337  name type: 0
// skipping _23336  name type: 0
    object _23335 = NOVALUE; // 44385 23335
// skipping _23334  name type: 0
    object _23333 = NOVALUE; // 44383 23333
// skipping _23332  name type: 0
// skipping _23331  name type: 0
// skipping _23330  name type: 0
    object _23329 = NOVALUE; // 44377 23329
    object _23328 = NOVALUE; // 44374 23328
// skipping _23327  name type: 0
    object _23326 = NOVALUE; // 44372 23326
    object _23325 = NOVALUE; // 44370 23325
// skipping _23323  name type: 0
// skipping _23321  name type: 0
// skipping _23320  name type: 0
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
    if (_5silent_12593 != 0)
    goto L1; // [9] 62
    // SubProg GenerateUserRoutines pc: 12 op: STARTLINE (58)

    /** c_decl.e:1472			if Pass = 1 then*/
    // SubProg GenerateUserRoutines pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 16 op: EQUALS_IFW_I (121)
    if (_57Pass_42118 != 1)
    goto L2; // [16] 29
    // SubProg GenerateUserRoutines pc: 20 op: STARTLINE (58)

    /** c_decl.e:1473				ShowMsg(1, 239,,0)*/
    // SubProg GenerateUserRoutines pc: 22 op: PROC (27)
    RefDS(_21958);
    _40ShowMsg(1, 239, _21958, 0);
    // SubProg GenerateUserRoutines pc: 28 op: NOP1 (159)
L2: // addr: 29 pc: 28 sub: 44340 op: 159
    // SubProg GenerateUserRoutines pc: 29 op: STARTLINE (58)

    /** c_decl.e:1476			if LAST_PASS = TRUE then*/
    // SubProg GenerateUserRoutines pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 35 op: EQUALS_IFW (104)
    if (_57LAST_PASS_42116 != _6TRUE_365)
    goto L3; // [35] 50
    // SubProg GenerateUserRoutines pc: 39 op: STARTLINE (58)

    /** c_decl.e:1477				ShowMsg(1, 240)*/
    // SubProg GenerateUserRoutines pc: 41 op: PROC (27)
    RefDS(_21958);
    _40ShowMsg(1, 240, _21958, 1);
    // SubProg GenerateUserRoutines pc: 47 op: ELSE (23)
    goto L4; // [47] 61
    // SubProg GenerateUserRoutines pc: 49 op: NOP1 (159)
L3: // addr: 50 pc: 49 sub: 44340 op: 159
    // SubProg GenerateUserRoutines pc: 50 op: STARTLINE (58)

    /** c_decl.e:1479				ShowMsg(1, 241, Pass, 0)*/
    // SubProg GenerateUserRoutines pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 54 op: PROC (27)
    _40ShowMsg(1, 241, _57Pass_42118, 0);
    // SubProg GenerateUserRoutines pc: 60 op: NOP1 (159)
L4: // addr: 61 pc: 60 sub: 44340 op: 159
    // SubProg GenerateUserRoutines pc: 61 op: NOP1 (159)
L1: // addr: 62 pc: 61 sub: 44340 op: 159
    // SubProg GenerateUserRoutines pc: 62 op: STARTLINE (58)

    /** c_decl.e:1483		check_file_routines()*/
    // SubProg GenerateUserRoutines pc: 64 op: PROC (27)
    _57check_file_routines();
    // SubProg GenerateUserRoutines pc: 66 op: STARTLINE (58)

    /** c_decl.e:1485		c_puts("// GenerateUserRoutines\n")*/
    // SubProg GenerateUserRoutines pc: 68 op: PROC (27)
    RefDS(_23324);
    _54c_puts(_23324);
    // SubProg GenerateUserRoutines pc: 71 op: STARTLINE (58)

    /** c_decl.e:1486		for file_no = 1 to length(known_files) do*/
    // SubProg GenerateUserRoutines pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg GenerateUserRoutines pc: 75 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _23325 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _23325 = 1;
    }
    // SubProg GenerateUserRoutines pc: 78 op: FOR_I (125)
    {
        object _file_no_44368;
        _file_no_44368 = 1;
L5: // addr: 85 pc: 78 sub: 44340 op: 125
        if (_file_no_44368 > _23325){
            goto L6; // [78] 2143
        }
        // SubProg GenerateUserRoutines pc: 85 op: STARTLINE (58)

        /** c_decl.e:1487			if file_no = 1 or any_code(file_no) then*/
        // SubProg GenerateUserRoutines pc: 87 op: EQUALS (3)
        _23326 = (_file_no_44368 == 1);
        // SubProg GenerateUserRoutines pc: 91 op: SC1_OR_IF (147)
        if (_23326 != 0) {
            goto L7; // [91] 104
        }
        // SubProg GenerateUserRoutines pc: 95 op: PROC (27)
        _23328 = _57any_code(_file_no_44368);
        // SubProg GenerateUserRoutines pc: 99 op: NOP1 (159)
        // SubProg GenerateUserRoutines pc: 100 op: IF (20)
        if (_23328 == 0) {
            DeRef(_23328);
            _23328 = NOVALUE;
            goto L8; // [100] 2134
        }
        else {
            if (!IS_ATOM_INT(_23328) && DBL_PTR(_23328)->dbl == 0.0){
                DeRef(_23328);
                _23328 = NOVALUE;
                goto L8; // [100] 2134
            }
            DeRef(_23328);
            _23328 = NOVALUE;
        }
        DeRef(_23328);
        _23328 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 103 op: NOP1 (159)
L7: // addr: 104 pc: 103 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 104 op: STARTLINE (58)

        /** c_decl.e:1490				next_c_char = 1*/
        // SubProg GenerateUserRoutines pc: 106 op: ASSIGN_I (113)
        _next_c_char_44345 = 1;
        // SubProg GenerateUserRoutines pc: 109 op: STARTLINE (58)

        /** c_decl.e:1491				base_name = name_ext(known_files[file_no])*/
        // SubProg GenerateUserRoutines pc: 111 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 113 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        _23329 = (object)*(((s1_ptr)_2)->base + _file_no_44368);
        // SubProg GenerateUserRoutines pc: 117 op: PROC (27)
        Ref(_23329);
        _0 = _base_name_44349;
        _base_name_44349 = _53name_ext(_23329);
        DeRef(_0);
        _23329 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 121 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 123 op: STARTLINE (58)

        /** c_decl.e:1492				c_file = base_name*/
        // SubProg GenerateUserRoutines pc: 125 op: ASSIGN (18)
        RefDS(_base_name_44349);
        DeRef(_c_file_44351);
        _c_file_44351 = _base_name_44349;
        // SubProg GenerateUserRoutines pc: 128 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 130 op: STARTLINE (58)

        /** c_decl.e:1494				q = length(c_file)*/
        // SubProg GenerateUserRoutines pc: 132 op: LENGTH (42)
        if (IS_SEQUENCE(_c_file_44351)){
                _q_44346 = SEQ_PTR(_c_file_44351)->length;
        }
        else {
            _q_44346 = 1;
        }
        // SubProg GenerateUserRoutines pc: 135 op: STARTLINE (58)

        /** c_decl.e:1495				while q >= 1 do*/
        // SubProg GenerateUserRoutines pc: 137 op: NOP2 (110)
        // SubProg GenerateUserRoutines pc: 139 op: NOPWHILE (158)
L9: // addr: 140 pc: 139 sub: 44340 op: 158
        // SubProg GenerateUserRoutines pc: 140 op: GREATEREQ_IFW_I (120)
        if (_q_44346 < 1)
        goto LA; // [140] 181
        // SubProg GenerateUserRoutines pc: 144 op: STARTLINE (58)

        /** c_decl.e:1496					if c_file[q] = '.' then*/
        // SubProg GenerateUserRoutines pc: 146 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_c_file_44351);
        _23333 = (object)*(((s1_ptr)_2)->base + _q_44346);
        // SubProg GenerateUserRoutines pc: 150 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _23333, 46)){
            _23333 = NOVALUE;
            goto LB; // [150] 170
        }
        _23333 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 154 op: STARTLINE (58)

        /** c_decl.e:1497						c_file = c_file[1..q-1]*/
        // SubProg GenerateUserRoutines pc: 156 op: MINUS (10)
        _23335 = _q_44346 - 1;
        // SubProg GenerateUserRoutines pc: 160 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_c_file_44351;
        RHS_Slice(_c_file_44351, 1, _23335);
        // SubProg GenerateUserRoutines pc: 165 op: STARTLINE (58)

        /** c_decl.e:1498						exit*/
        // SubProg GenerateUserRoutines pc: 167 op: EXIT (61)
        goto LA; // [167] 181
        // SubProg GenerateUserRoutines pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 170 op: STARTLINE (58)

        /** c_decl.e:1500					q -= 1*/
        // SubProg GenerateUserRoutines pc: 172 op: MINUS_I (116)
        _q_44346 = _q_44346 - 1;
        // SubProg GenerateUserRoutines pc: 176 op: STARTLINE (58)

        /** c_decl.e:1501				end while*/
        // SubProg GenerateUserRoutines pc: 178 op: ENDWHILE (22)
        goto L9; // [178] 140
        // SubProg GenerateUserRoutines pc: 180 op: NOP1 (159)
LA: // addr: 181 pc: 180 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 181 op: STARTLINE (58)

        /** c_decl.e:1503				if find(lower(c_file), {"main-", "init-"})  then*/
        // SubProg GenerateUserRoutines pc: 183 op: PROC (27)
        RefDS(_c_file_44351);
        _23338 = _20lower(_c_file_44351);
        // SubProg GenerateUserRoutines pc: 187 op: RIGHT_BRACE_2 (85)
        RefDS(_23340);
        RefDS(_23339);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23339;
        ((intptr_t *)_2)[2] = _23340;
        _23341 = MAKE_SEQ(_1);
        // SubProg GenerateUserRoutines pc: 191 op: FIND_FROM (176)
        _23342 = find_from(_23338, _23341, 1);
        DeRef(_23338);
        _23338 = NOVALUE;
        DeRefDS(_23341);
        _23341 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 196 op: IF (20)
        if (_23342 == 0)
        {
            _23342 = NOVALUE;
            goto LC; // [196] 211
        }
        else{
            _23342 = NOVALUE;
        }
        // SubProg GenerateUserRoutines pc: 199 op: STARTLINE (58)

        /** c_decl.e:1504					CompileErr(12, {base_name})*/
        // SubProg GenerateUserRoutines pc: 201 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_base_name_44349);
        ((intptr_t*)_2)[1] = _base_name_44349;
        _23344 = MAKE_SEQ(_1);
        // SubProg GenerateUserRoutines pc: 205 op: PROC (27)
        _49CompileErr(12, _23344, 0);
        _23344 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 210 op: NOP1 (159)
LC: // addr: 211 pc: 210 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 211 op: STARTLINE (58)

        /** c_decl.e:1507				long_c_file = c_file*/
        // SubProg GenerateUserRoutines pc: 213 op: ASSIGN (18)
        RefDS(_c_file_44351);
        DeRef(_long_c_file_44350);
        _long_c_file_44350 = _c_file_44351;
        // SubProg GenerateUserRoutines pc: 216 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 218 op: STARTLINE (58)

        /** c_decl.e:1508				if LAST_PASS = TRUE then*/
        // SubProg GenerateUserRoutines pc: 220 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 222 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 224 op: EQUALS_IFW (104)
        if (_57LAST_PASS_42116 != _6TRUE_365)
        goto LD; // [224] 249
        // SubProg GenerateUserRoutines pc: 228 op: STARTLINE (58)

        /** c_decl.e:1509					c_file = unique_c_name(c_file)*/
        // SubProg GenerateUserRoutines pc: 230 op: PROC (27)
        RefDS(_c_file_44351);
        _0 = _c_file_44351;
        _c_file_44351 = _57unique_c_name(_c_file_44351);
        DeRefDS(_0);
        // SubProg GenerateUserRoutines pc: 234 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 236 op: STARTLINE (58)

        /** c_decl.e:1510					add_file(c_file, known_files[file_no])*/
        // SubProg GenerateUserRoutines pc: 238 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 240 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        _23347 = (object)*(((s1_ptr)_2)->base + _file_no_44368);
        // SubProg GenerateUserRoutines pc: 244 op: PROC (27)
        RefDS(_c_file_44351);
        Ref(_23347);
        _57add_file(_c_file_44351, _23347);
        _23347 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 248 op: NOP1 (159)
LD: // addr: 249 pc: 248 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 249 op: STARTLINE (58)

        /** c_decl.e:1513				if file_no = 1 then*/
        // SubProg GenerateUserRoutines pc: 251 op: EQUALS_IFW_I (121)
        if (_file_no_44368 != 1)
        goto LE; // [251] 314
        // SubProg GenerateUserRoutines pc: 255 op: STARTLINE (58)

        /** c_decl.e:1515					if LAST_PASS = TRUE then*/
        // SubProg GenerateUserRoutines pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 261 op: EQUALS_IFW (104)
        if (_57LAST_PASS_42116 != _6TRUE_365)
        goto LF; // [261] 306
        // SubProg GenerateUserRoutines pc: 265 op: STARTLINE (58)

        /** c_decl.e:1516						add_file("main-")*/
        // SubProg GenerateUserRoutines pc: 267 op: PROC (27)
        RefDS(_23339);
        RefDS(_21958);
        _57add_file(_23339, _21958);
        // SubProg GenerateUserRoutines pc: 271 op: STARTLINE (58)

        /** c_decl.e:1517						for i = 0 to main_name_num-1 do*/
        // SubProg GenerateUserRoutines pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 275 op: MINUS (10)
        _23350 = _54main_name_num_46166 - 1;
        if ((object)((uintptr_t)_23350 +(uintptr_t) HIGH_BITS) >= 0){
            _23350 = NewDouble((eudouble)_23350);
        }
        // SubProg GenerateUserRoutines pc: 279 op: FOR (21)
        {
            object _i_44410;
            _i_44410 = 0;
L10: // addr: 286 pc: 279 sub: 44340 op: 21
            if (binary_op_a(GREATER, _i_44410, _23350)){
                goto L11; // [279] 305
            }
            // SubProg GenerateUserRoutines pc: 286 op: STARTLINE (58)

            /** c_decl.e:1518							buff = sprintf("main-%d", i)*/
            // SubProg GenerateUserRoutines pc: 288 op: SPRINTF (53)
            DeRefi(_buff_44348);
            _buff_44348 = EPrintf(-9999999, _23351, _i_44410);
            // SubProg GenerateUserRoutines pc: 292 op: STARTLINE (58)

            /** c_decl.e:1519							add_file(buff)*/
            // SubProg GenerateUserRoutines pc: 294 op: PROC (27)
            RefDS(_buff_44348);
            RefDS(_21958);
            _57add_file(_buff_44348, _21958);
            // SubProg GenerateUserRoutines pc: 298 op: STARTLINE (58)

            /** c_decl.e:1520						end for*/
            // SubProg GenerateUserRoutines pc: 300 op: ENDFOR_INT_UP1 (54)
            _0 = _i_44410;
            if (IS_ATOM_INT(_i_44410)) {
                _i_44410 = _i_44410 + 1;
                if ((object)((uintptr_t)_i_44410 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_44410 = NewDouble((eudouble)_i_44410);
                }
            }
            else {
                _i_44410 = binary_op_a(PLUS, _i_44410, 1);
            }
            DeRef(_0);
            goto L10; // [300] 286
L11: // addr: 305 pc: 300 sub: 44340 op: 54
            ;
            DeRef(_i_44410);
        }
        // SubProg GenerateUserRoutines pc: 305 op: NOP1 (159)
LF: // addr: 306 pc: 305 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 306 op: STARTLINE (58)

        /** c_decl.e:1523					file0 = long_c_file*/
        // SubProg GenerateUserRoutines pc: 308 op: ASSIGN (18)
        RefDS(_long_c_file_44350);
        DeRef(_57file0_44102);
        _57file0_44102 = _long_c_file_44350;
        // SubProg GenerateUserRoutines pc: 311 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 313 op: NOP1 (159)
LE: // addr: 314 pc: 313 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 314 op: STARTLINE (58)

        /** c_decl.e:1526				new_c_file(c_file)*/
        // SubProg GenerateUserRoutines pc: 316 op: PROC (27)
        RefDS(_c_file_44351);
        _57new_c_file(_c_file_44351);
        // SubProg GenerateUserRoutines pc: 319 op: STARTLINE (58)

        /** c_decl.e:1528				s = SymTab[TopLevelSub][S_NEXT]*/
        // SubProg GenerateUserRoutines pc: 321 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 323 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 325 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _23353 = (object)*(((s1_ptr)_2)->base + _5TopLevelSub_12484);
        // SubProg GenerateUserRoutines pc: 329 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 331 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_23353);
        _s_44343 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_44343)){
            _s_44343 = (object)DBL_PTR(_s_44343)->dbl;
        }
        _23353 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 337 op: STARTLINE (58)

        /** c_decl.e:1530				sequence these_routines = file_routines[file_no]*/
        // SubProg GenerateUserRoutines pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg GenerateUserRoutines pc: 341 op: RHS_SUBS (25)
        DeRef(_these_routines_44420);
        _2 = (object)SEQ_PTR(_57file_routines_44300);
        _these_routines_44420 = (object)*(((s1_ptr)_2)->base + _file_no_44368);
        Ref(_these_routines_44420);
        // SubProg GenerateUserRoutines pc: 345 op: SEQUENCE_CHECK (97)
        // SubProg GenerateUserRoutines pc: 347 op: STARTLINE (58)

        /** c_decl.e:1531				for routine_no = 1 to length( these_routines ) do*/
        // SubProg GenerateUserRoutines pc: 349 op: LENGTH (42)
        if (IS_SEQUENCE(_these_routines_44420)){
                _23356 = SEQ_PTR(_these_routines_44420)->length;
        }
        else {
            _23356 = 1;
        }
        // SubProg GenerateUserRoutines pc: 352 op: FOR_I (125)
        {
            object _routine_no_44423;
            _routine_no_44423 = 1;
L12: // addr: 359 pc: 352 sub: 44340 op: 125
            if (_routine_no_44423 > _23356){
                goto L13; // [352] 2133
            }
            // SubProg GenerateUserRoutines pc: 359 op: STARTLINE (58)

            /** c_decl.e:1532					s = these_routines[routine_no]*/
            // SubProg GenerateUserRoutines pc: 361 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_these_routines_44420);
            _s_44343 = (object)*(((s1_ptr)_2)->base + _routine_no_44423);
            if (!IS_ATOM_INT(_s_44343)){
                _s_44343 = (object)DBL_PTR(_s_44343)->dbl;
            }
            // SubProg GenerateUserRoutines pc: 367 op: STARTLINE (58)

            /** c_decl.e:1533					if SymTab[s][S_USAGE] != U_DELETED then*/
            // SubProg GenerateUserRoutines pc: 369 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 371 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23358 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 375 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 377 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23358);
            _23359 = (object)*(((s1_ptr)_2)->base + 5);
            _23358 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 381 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 383 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _23359, 99)){
                _23359 = NOVALUE;
                goto L14; // [383] 2124
            }
            _23359 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 387 op: STARTLINE (58)

            /** c_decl.e:1537						if LAST_PASS = TRUE and*/
            // SubProg GenerateUserRoutines pc: 389 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 391 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 393 op: EQUALS (3)
            _23361 = (_57LAST_PASS_42116 == _6TRUE_365);
            // SubProg GenerateUserRoutines pc: 397 op: SC1_AND_IF (146)
            if (_23361 == 0) {
                goto L15; // [397] 593
            }
            // SubProg GenerateUserRoutines pc: 401 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 403 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 405 op: GREATER (6)
            _23363 = (_5cfile_size_12557 > 100000);
            // SubProg GenerateUserRoutines pc: 409 op: SC1_OR (143)
            if (_23363 != 0) {
                DeRef(_23364);
                _23364 = 1;
                goto L16; // [409] 472
            }
            // SubProg GenerateUserRoutines pc: 413 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 415 op: NOTEQ (4)
            _23365 = (_s_44343 != _5TopLevelSub_12484);
            // SubProg GenerateUserRoutines pc: 419 op: SC1_AND (141)
            if (_23365 == 0) {
                _23366 = 0;
                goto L17; // [419] 439
            }
            // SubProg GenerateUserRoutines pc: 423 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 425 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 427 op: DIVIDE (14)
            _23367 = (100000 % 4) ? NewDouble((eudouble)100000 / 4) : (100000 / 4);
            // SubProg GenerateUserRoutines pc: 431 op: GREATER (6)
            if (IS_ATOM_INT(_23367)) {
                _23368 = (_5cfile_size_12557 > _23367);
            }
            else {
                _23368 = ((eudouble)_5cfile_size_12557 > DBL_PTR(_23367)->dbl);
            }
            DeRef(_23367);
            _23367 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 435 op: SC2_AND (142)
            _23366 = (_23368 != 0);
            // SubProg GenerateUserRoutines pc: 438 op: NOP1 (159)
L17: // addr: 439 pc: 438 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 439 op: SC1_AND (141)
            if (_23366 == 0) {
                _23369 = 0;
                goto L18; // [439] 468
            }
            // SubProg GenerateUserRoutines pc: 443 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 445 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23370 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 449 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 451 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23370);
            if (!IS_ATOM_INT(_5S_CODE_12144)){
                _23371 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
            }
            else{
                _23371 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
            }
            _23370 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 455 op: LENGTH (42)
            if (IS_SEQUENCE(_23371)){
                    _23372 = SEQ_PTR(_23371)->length;
            }
            else {
                _23372 = 1;
            }
            _23371 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 458 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 460 op: GREATER (6)
            _23373 = (_23372 > 100000);
            _23372 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 464 op: SC2_AND (142)
            _23369 = (_23373 != 0);
            // SubProg GenerateUserRoutines pc: 467 op: NOP1 (159)
L18: // addr: 468 pc: 467 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 468 op: SC2_OR (144)
            DeRef(_23364);
            _23364 = (_23369 != 0);
            // SubProg GenerateUserRoutines pc: 471 op: NOP1 (159)
L16: // addr: 472 pc: 471 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 472 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 473 op: IF (20)
            if (_23364 == 0)
            {
                _23364 = NOVALUE;
                goto L15; // [473] 593
            }
            else{
                _23364 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 476 op: STARTLINE (58)

            /** c_decl.e:1546							if length(c_file) = 7 then*/
            // SubProg GenerateUserRoutines pc: 478 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44351)){
                    _23374 = SEQ_PTR(_c_file_44351)->length;
            }
            else {
                _23374 = 1;
            }
            // SubProg GenerateUserRoutines pc: 481 op: EQUALS_IFW_I (121)
            if (_23374 != 7)
            goto L19; // [481] 492
            // SubProg GenerateUserRoutines pc: 485 op: STARTLINE (58)

            /** c_decl.e:1548								c_file &= " "*/
            // SubProg GenerateUserRoutines pc: 487 op: CONCAT (15)
            Concat((object_ptr)&_c_file_44351, _c_file_44351, _23377);
            // SubProg GenerateUserRoutines pc: 491 op: NOP1 (159)
L19: // addr: 492 pc: 491 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 492 op: STARTLINE (58)

            /** c_decl.e:1551							if length(c_file) >= 8 then*/
            // SubProg GenerateUserRoutines pc: 494 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44351)){
                    _23379 = SEQ_PTR(_c_file_44351)->length;
            }
            else {
                _23379 = 1;
            }
            // SubProg GenerateUserRoutines pc: 497 op: GREATEREQ_IFW_I (120)
            if (_23379 < 8)
            goto L1A; // [497] 520
            // SubProg GenerateUserRoutines pc: 501 op: STARTLINE (58)

            /** c_decl.e:1552								c_file[7] = '_'*/
            // SubProg GenerateUserRoutines pc: 503 op: ASSIGN_SUBS_I (118)
            _2 = (object)SEQ_PTR(_c_file_44351);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44351 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 7);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 95;
            DeRef(_1);
            // SubProg GenerateUserRoutines pc: 507 op: STARTLINE (58)

            /** c_decl.e:1553								c_file[8] = file_chars[next_c_char]*/
            // SubProg GenerateUserRoutines pc: 509 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_57file_chars_43967);
            _23382 = (object)*(((s1_ptr)_2)->base + _next_c_char_44345);
            // SubProg GenerateUserRoutines pc: 513 op: ASSIGN_SUBS (16)
            Ref(_23382);
            _2 = (object)SEQ_PTR(_c_file_44351);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44351 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 8);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23382;
            if( _1 != _23382 ){
                DeRef(_1);
            }
            _23382 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 517 op: ELSE (23)
            goto L1B; // [517] 552
            // SubProg GenerateUserRoutines pc: 519 op: NOP1 (159)
L1A: // addr: 520 pc: 519 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 520 op: STARTLINE (58)

            /** c_decl.e:1556								if find('_', c_file) = 0 then*/
            // SubProg GenerateUserRoutines pc: 522 op: FIND_FROM (176)
            _23383 = find_from(95, _c_file_44351, 1);
            // SubProg GenerateUserRoutines pc: 527 op: EQUALS_IFW_I (121)
            if (_23383 != 0)
            goto L1C; // [527] 538
            // SubProg GenerateUserRoutines pc: 531 op: STARTLINE (58)

            /** c_decl.e:1557									c_file &= "_ "*/
            // SubProg GenerateUserRoutines pc: 533 op: CONCAT (15)
            Concat((object_ptr)&_c_file_44351, _c_file_44351, _23385);
            // SubProg GenerateUserRoutines pc: 537 op: NOP1 (159)
L1C: // addr: 538 pc: 537 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 538 op: STARTLINE (58)

            /** c_decl.e:1560								c_file[$] = file_chars[next_c_char]*/
            // SubProg GenerateUserRoutines pc: 540 op: LENGTH (42)
            if (IS_SEQUENCE(_c_file_44351)){
                    _23387 = SEQ_PTR(_c_file_44351)->length;
            }
            else {
                _23387 = 1;
            }
            // SubProg GenerateUserRoutines pc: 543 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_57file_chars_43967);
            _23388 = (object)*(((s1_ptr)_2)->base + _next_c_char_44345);
            // SubProg GenerateUserRoutines pc: 547 op: ASSIGN_SUBS (16)
            Ref(_23388);
            _2 = (object)SEQ_PTR(_c_file_44351);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44351 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _23387);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23388;
            if( _1 != _23388 ){
                DeRef(_1);
            }
            _23388 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 551 op: NOP1 (159)
L1B: // addr: 552 pc: 551 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 552 op: STARTLINE (58)

            /** c_decl.e:1564							c_file = unique_c_name(c_file)*/
            // SubProg GenerateUserRoutines pc: 554 op: PROC (27)
            RefDS(_c_file_44351);
            _0 = _c_file_44351;
            _c_file_44351 = _57unique_c_name(_c_file_44351);
            DeRefDS(_0);
            // SubProg GenerateUserRoutines pc: 558 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 560 op: STARTLINE (58)

            /** c_decl.e:1565							new_c_file(c_file)*/
            // SubProg GenerateUserRoutines pc: 562 op: PROC (27)
            RefDS(_c_file_44351);
            _57new_c_file(_c_file_44351);
            // SubProg GenerateUserRoutines pc: 565 op: STARTLINE (58)

            /** c_decl.e:1567							next_c_char += 1*/
            // SubProg GenerateUserRoutines pc: 567 op: PLUS1_I (117)
            _next_c_char_44345 = _next_c_char_44345 + 1;
            // SubProg GenerateUserRoutines pc: 571 op: STARTLINE (58)

            /** c_decl.e:1568							if next_c_char > length(file_chars) then*/
            // SubProg GenerateUserRoutines pc: 573 op: LENGTH (42)
            if (IS_SEQUENCE(_57file_chars_43967)){
                    _23391 = SEQ_PTR(_57file_chars_43967)->length;
            }
            else {
                _23391 = 1;
            }
            // SubProg GenerateUserRoutines pc: 576 op: GREATER_IFW_I (124)
            if (_next_c_char_44345 <= _23391)
            goto L1D; // [576] 586
            // SubProg GenerateUserRoutines pc: 580 op: STARTLINE (58)

            /** c_decl.e:1569								next_c_char = 1  -- (unique_c_name will resolve)*/
            // SubProg GenerateUserRoutines pc: 582 op: ASSIGN_I (113)
            _next_c_char_44345 = 1;
            // SubProg GenerateUserRoutines pc: 585 op: NOP1 (159)
L1D: // addr: 586 pc: 585 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 586 op: STARTLINE (58)

            /** c_decl.e:1572							add_file(c_file)*/
            // SubProg GenerateUserRoutines pc: 588 op: PROC (27)
            RefDS(_c_file_44351);
            RefDS(_21958);
            _57add_file(_c_file_44351, _21958);
            // SubProg GenerateUserRoutines pc: 592 op: NOP1 (159)
L15: // addr: 593 pc: 592 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 593 op: STARTLINE (58)

            /** c_decl.e:1575						sequence ret_type*/
            // SubProg GenerateUserRoutines pc: 595 op: STARTLINE (58)

            /** c_decl.e:1576						if SymTab[s][S_TOKEN] = PROC then*/
            // SubProg GenerateUserRoutines pc: 597 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 599 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23393 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 603 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 605 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23393);
            if (!IS_ATOM_INT(_5S_TOKEN_12137)){
                _23394 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
            }
            else{
                _23394 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
            }
            _23393 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 609 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 611 op: EQUALS_IFW (104)
            if (binary_op_a(NOTEQ, _23394, 27)){
                _23394 = NOVALUE;
                goto L1E; // [611] 625
            }
            _23394 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 615 op: STARTLINE (58)

            /** c_decl.e:1577							ret_type = "void "*/
            // SubProg GenerateUserRoutines pc: 617 op: ASSIGN (18)
            RefDS(_22761);
            DeRefi(_ret_type_44480);
            _ret_type_44480 = _22761;
            // SubProg GenerateUserRoutines pc: 620 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 622 op: ELSE (23)
            goto L1F; // [622] 633
            // SubProg GenerateUserRoutines pc: 624 op: NOP1 (159)
L1E: // addr: 625 pc: 624 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 625 op: STARTLINE (58)

            /** c_decl.e:1579							ret_type = "object "*/
            // SubProg GenerateUserRoutines pc: 627 op: ASSIGN (18)
            RefDS(_22762);
            DeRefi(_ret_type_44480);
            _ret_type_44480 = _22762;
            // SubProg GenerateUserRoutines pc: 630 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 632 op: NOP1 (159)
L1F: // addr: 633 pc: 632 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 633 op: STARTLINE (58)

            /** c_decl.e:1581						integer s_scope = sym_scope( s )*/
            // SubProg GenerateUserRoutines pc: 635 op: PROC (27)
            _s_scope_44489 = _53sym_scope(_s_44343);
            // SubProg GenerateUserRoutines pc: 639 op: INTEGER_CHECK (96)
            if (!IS_ATOM_INT(_s_scope_44489)) {
                _1 = (object)(DBL_PTR(_s_scope_44489)->dbl);
                DeRefDS(_s_scope_44489);
                _s_scope_44489 = _1;
            }
            // SubProg GenerateUserRoutines pc: 641 op: STARTLINE (58)

            /** c_decl.e:1582						integer s_file  = SymTab[s][S_FILE_NO]*/
            // SubProg GenerateUserRoutines pc: 643 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 645 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23397 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 649 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 651 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23397);
            if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
                _s_file_44492 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
            }
            else{
                _s_file_44492 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
            }
            if (!IS_ATOM_INT(_s_file_44492)){
                _s_file_44492 = (object)DBL_PTR(_s_file_44492)->dbl;
            }
            _23397 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 657 op: STARTLINE (58)

            /** c_decl.e:1583						if dll_option and*/
            // SubProg GenerateUserRoutines pc: 659 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 661 op: SC1_AND_IF (146)
            if (_57dll_option_42130 == 0) {
                goto L20; // [661] 819
            }
            // SubProg GenerateUserRoutines pc: 665 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 667 op: EQUALS (3)
            _23400 = (_s_scope_44489 == 6);
            // SubProg GenerateUserRoutines pc: 671 op: SC1_OR (143)
            if (_23400 != 0) {
                DeRef(_23401);
                _23401 = 1;
                goto L21; // [671] 749
            }
            // SubProg GenerateUserRoutines pc: 675 op: EQUALS (3)
            _23402 = (_s_file_44492 == 1);
            // SubProg GenerateUserRoutines pc: 679 op: SC1_AND (141)
            if (_23402 == 0) {
                _23403 = 0;
                goto L22; // [679] 707
            }
            // SubProg GenerateUserRoutines pc: 683 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 685 op: EQUALS (3)
            _23404 = (_s_scope_44489 == 13);
            // SubProg GenerateUserRoutines pc: 689 op: SC1_OR (143)
            if (_23404 != 0) {
                _23405 = 1;
                goto L23; // [689] 703
            }
            // SubProg GenerateUserRoutines pc: 693 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 695 op: EQUALS (3)
            _23406 = (_s_scope_44489 == 11);
            // SubProg GenerateUserRoutines pc: 699 op: SC2_OR (144)
            _23405 = (_23406 != 0);
            // SubProg GenerateUserRoutines pc: 702 op: NOP1 (159)
L23: // addr: 703 pc: 702 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 703 op: SC2_AND (142)
            _23403 = (_23405 != 0);
            // SubProg GenerateUserRoutines pc: 706 op: NOP1 (159)
L22: // addr: 707 pc: 706 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 707 op: SC1_OR (143)
            if (_23403 != 0) {
                _23407 = 1;
                goto L24; // [707] 745
            }
            // SubProg GenerateUserRoutines pc: 711 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 713 op: EQUALS (3)
            _23408 = (_s_scope_44489 == 13);
            // SubProg GenerateUserRoutines pc: 717 op: SC1_AND (141)
            if (_23408 == 0) {
                _23409 = 0;
                goto L25; // [717] 741
            }
            // SubProg GenerateUserRoutines pc: 721 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 723 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7include_matrix_11396);
            _23410 = (object)*(((s1_ptr)_2)->base + 1);
            // SubProg GenerateUserRoutines pc: 727 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23410);
            _23411 = (object)*(((s1_ptr)_2)->base + _s_file_44492);
            _23410 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 731 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 733 op: AND_BITS (56)
            if (IS_ATOM_INT(_23411)) {
                {uintptr_t tu;
                     tu = (uintptr_t)_23411 & (uintptr_t)4;
                     _23412 = MAKE_UINT(tu);
                }
            }
            else {
                _23412 = binary_op(AND_BITS, _23411, 4);
            }
            _23411 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 737 op: SC2_AND (142)
            if (IS_ATOM_INT(_23412))
            _23409 = (_23412 != 0);
            else
            _23409 = DBL_PTR(_23412)->dbl != 0.0;
            // SubProg GenerateUserRoutines pc: 740 op: NOP1 (159)
L25: // addr: 741 pc: 740 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 741 op: SC2_OR (144)
            _23407 = (_23409 != 0);
            // SubProg GenerateUserRoutines pc: 744 op: NOP1 (159)
L24: // addr: 745 pc: 744 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 745 op: SC2_OR (144)
            DeRef(_23401);
            _23401 = (_23407 != 0);
            // SubProg GenerateUserRoutines pc: 748 op: NOP1 (159)
L21: // addr: 749 pc: 748 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 749 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 750 op: IF (20)
            if (_23401 == 0)
            {
                _23401 = NOVALUE;
                goto L20; // [750] 819
            }
            else{
                _23401 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 753 op: STARTLINE (58)

            /** c_decl.e:1589							SymTab[s][S_RI_TARGET] = TRUE*/
            // SubProg GenerateUserRoutines pc: 755 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 757 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_s_44343 + ((s1_ptr)_2)->base);
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
            *(intptr_t *)_2 = _6TRUE_365;
            DeRef(_1);
            _23413 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 770 op: STARTLINE (58)

            /** c_decl.e:1590							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 772 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 774 op: ASSIGN (18)
            _57LeftSym_42127 = _6TRUE_365;
            // SubProg GenerateUserRoutines pc: 777 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 779 op: STARTLINE (58)

            /** c_decl.e:1593							if TWINDOWS then*/
            // SubProg GenerateUserRoutines pc: 781 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 783 op: IF (20)
            // SubProg GenerateUserRoutines pc: 802 op: STARTLINE (58)

            /** c_decl.e:1596								c_stmt(ret_type & "@(", s)*/
            // SubProg GenerateUserRoutines pc: 804 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 806 op: CONCAT (15)
            Concat((object_ptr)&_23418, _ret_type_44480, _23417);
            // SubProg GenerateUserRoutines pc: 810 op: PROC (27)
            _57c_stmt(_23418, _s_44343, 0);
            _23418 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 815 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 816 op: ELSE (23)
            goto L26; // [816] 842
            // SubProg GenerateUserRoutines pc: 818 op: NOP1 (159)
L20: // addr: 819 pc: 818 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 819 op: STARTLINE (58)

            /** c_decl.e:1600							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 821 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 823 op: ASSIGN (18)
            _57LeftSym_42127 = _6TRUE_365;
            // SubProg GenerateUserRoutines pc: 826 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 828 op: STARTLINE (58)

            /** c_decl.e:1601							c_stmt( ret_type & "@(", s)*/
            // SubProg GenerateUserRoutines pc: 830 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 832 op: CONCAT (15)
            Concat((object_ptr)&_23419, _ret_type_44480, _23417);
            // SubProg GenerateUserRoutines pc: 836 op: PROC (27)
            _57c_stmt(_23419, _s_44343, 0);
            _23419 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 841 op: NOP1 (159)
L26: // addr: 842 pc: 841 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 842 op: STARTLINE (58)

            /** c_decl.e:1605						sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 844 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 846 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23420 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 850 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 852 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23420);
            _sp_44344 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44344)){
                _sp_44344 = (object)DBL_PTR(_sp_44344)->dbl;
            }
            _23420 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 858 op: STARTLINE (58)

            /** c_decl.e:1606						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 860 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 862 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23422 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 866 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 868 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23422);
            if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
                _23423 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
            }
            else{
                _23423 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
            }
            _23422 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 872 op: FOR (21)
            {
                object _p_44539;
                _p_44539 = 1;
L27: // addr: 879 pc: 872 sub: 44340 op: 21
                if (binary_op_a(GREATER, _p_44539, _23423)){
                    goto L28; // [872] 948
                }
                // SubProg GenerateUserRoutines pc: 879 op: STARTLINE (58)

                /** c_decl.e:1607							c_puts("object _")*/
                // SubProg GenerateUserRoutines pc: 881 op: PROC (27)
                RefDS(_23424);
                _54c_puts(_23424);
                // SubProg GenerateUserRoutines pc: 884 op: STARTLINE (58)

                /** c_decl.e:1608							c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 886 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 888 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23425 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 892 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 894 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23425);
                if (!IS_ATOM_INT(_5S_NAME_12132)){
                    _23426 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
                }
                else{
                    _23426 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
                }
                _23425 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 898 op: PROC (27)
                Ref(_23426);
                _54c_puts(_23426);
                _23426 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 901 op: STARTLINE (58)

                /** c_decl.e:1609							if p != SymTab[s][S_NUM_ARGS] then*/
                // SubProg GenerateUserRoutines pc: 903 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 905 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23427 = (object)*(((s1_ptr)_2)->base + _s_44343);
                // SubProg GenerateUserRoutines pc: 909 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 911 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23427);
                if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
                    _23428 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
                }
                else{
                    _23428 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
                }
                _23427 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 915 op: NOTEQ_IFW (105)
                if (binary_op_a(EQUALS, _p_44539, _23428)){
                    _23428 = NOVALUE;
                    goto L29; // [915] 925
                }
                _23428 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 919 op: STARTLINE (58)

                /** c_decl.e:1610								c_puts(", ")*/
                // SubProg GenerateUserRoutines pc: 921 op: PROC (27)
                RefDS(_23430);
                _54c_puts(_23430);
                // SubProg GenerateUserRoutines pc: 924 op: NOP1 (159)
L29: // addr: 925 pc: 924 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 925 op: STARTLINE (58)

                /** c_decl.e:1612							sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 927 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 929 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23431 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 933 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 935 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23431);
                _sp_44344 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44344)){
                    _sp_44344 = (object)DBL_PTR(_sp_44344)->dbl;
                }
                _23431 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 941 op: STARTLINE (58)

                /** c_decl.e:1613						end for*/
                // SubProg GenerateUserRoutines pc: 943 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44539;
                if (IS_ATOM_INT(_p_44539)) {
                    _p_44539 = _p_44539 + 1;
                    if ((object)((uintptr_t)_p_44539 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44539 = NewDouble((eudouble)_p_44539);
                    }
                }
                else {
                    _p_44539 = binary_op_a(PLUS, _p_44539, 1);
                }
                DeRef(_0);
                goto L27; // [943] 879
L28: // addr: 948 pc: 943 sub: 44340 op: 54
                ;
                DeRef(_p_44539);
            }
            // SubProg GenerateUserRoutines pc: 948 op: STARTLINE (58)

            /** c_decl.e:1615						c_puts(")\n")*/
            // SubProg GenerateUserRoutines pc: 950 op: PROC (27)
            RefDS(_23433);
            _54c_puts(_23433);
            // SubProg GenerateUserRoutines pc: 953 op: STARTLINE (58)

            /** c_decl.e:1616						c_stmt0("{\n")*/
            // SubProg GenerateUserRoutines pc: 955 op: PROC (27)
            RefDS(_22071);
            _57c_stmt0(_22071);
            // SubProg GenerateUserRoutines pc: 958 op: STARTLINE (58)

            /** c_decl.e:1618						NewBB(0, E_ALL_EFFECT, 0)*/
            // SubProg GenerateUserRoutines pc: 960 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 962 op: PROC (27)
            _57NewBB(0, 1073741823, 0);
            // SubProg GenerateUserRoutines pc: 967 op: STARTLINE (58)

            /** c_decl.e:1619						Initializing = TRUE*/
            // SubProg GenerateUserRoutines pc: 969 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 971 op: ASSIGN (18)
            _5Initializing_12558 = _6TRUE_365;
            // SubProg GenerateUserRoutines pc: 974 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 976 op: STARTLINE (58)

            /** c_decl.e:1622						while sp do*/
            // SubProg GenerateUserRoutines pc: 978 op: NOP2 (110)
            // SubProg GenerateUserRoutines pc: 980 op: NOPWHILE (158)
L2A: // addr: 981 pc: 980 sub: 44340 op: 158
            // SubProg GenerateUserRoutines pc: 981 op: WHILE (47)
            if (_sp_44344 == 0)
            {
                goto L2B; // [981] 1120
            }
            else{
            }
            // SubProg GenerateUserRoutines pc: 984 op: STARTLINE (58)

            /** c_decl.e:1623							integer scope = SymTab[sp][S_SCOPE]*/
            // SubProg GenerateUserRoutines pc: 986 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 988 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23434 = (object)*(((s1_ptr)_2)->base + _sp_44344);
            // SubProg GenerateUserRoutines pc: 992 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 994 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23434);
            _scope_44569 = (object)*(((s1_ptr)_2)->base + 4);
            if (!IS_ATOM_INT(_scope_44569)){
                _scope_44569 = (object)DBL_PTR(_scope_44569)->dbl;
            }
            _23434 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1000 op: STARTLINE (58)

            /** c_decl.e:1624							switch scope with fallthru do*/
            // SubProg GenerateUserRoutines pc: 1002 op: SWITCH_I (193)
            _0 = _scope_44569;
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
                goto L2C; // [1015] 1097
                // SubProg GenerateUserRoutines pc: 1017 op: STARTLINE (58)

                /** c_decl.e:1630								case SC_PRIVATE then*/
                // SubProg GenerateUserRoutines pc: 1019 op: CASE (186)
                case 3:
                // SubProg GenerateUserRoutines pc: 1021 op: STARTLINE (58)

                /** c_decl.e:1631									c_stmt0("object ")*/
                // SubProg GenerateUserRoutines pc: 1023 op: PROC (27)
                RefDS(_22762);
                _57c_stmt0(_22762);
                // SubProg GenerateUserRoutines pc: 1026 op: STARTLINE (58)

                /** c_decl.e:1632									c_puts("_")*/
                // SubProg GenerateUserRoutines pc: 1028 op: PROC (27)
                RefDS(_22039);
                _54c_puts(_22039);
                // SubProg GenerateUserRoutines pc: 1031 op: STARTLINE (58)

                /** c_decl.e:1633									c_puts(SymTab[sp][S_NAME])*/
                // SubProg GenerateUserRoutines pc: 1033 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1035 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23438 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1039 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1041 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23438);
                if (!IS_ATOM_INT(_5S_NAME_12132)){
                    _23439 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
                }
                else{
                    _23439 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
                }
                _23438 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1045 op: PROC (27)
                Ref(_23439);
                _54c_puts(_23439);
                _23439 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1048 op: STARTLINE (58)

                /** c_decl.e:1635									c_puts(" = NOVALUE;\n")*/
                // SubProg GenerateUserRoutines pc: 1050 op: PROC (27)
                RefDS(_22770);
                _54c_puts(_22770);
                // SubProg GenerateUserRoutines pc: 1053 op: STARTLINE (58)

                /** c_decl.e:1636									target[MIN] = NOVALUE*/
                // SubProg GenerateUserRoutines pc: 1055 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1057 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1059 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1061 op: ASSIGN_SUBS (16)
                Ref(_5NOVALUE_12331);
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _5NOVALUE_12331;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1065 op: STARTLINE (58)

                /** c_decl.e:1637									target[MAX] = NOVALUE*/
                // SubProg GenerateUserRoutines pc: 1067 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1069 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1071 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1073 op: ASSIGN_SUBS (16)
                Ref(_5NOVALUE_12331);
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _5NOVALUE_12331;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1077 op: STARTLINE (58)

                /** c_decl.e:1638									RemoveFromBB( sp )*/
                // SubProg GenerateUserRoutines pc: 1079 op: PROC (27)
                _57RemoveFromBB(_sp_44344);
                // SubProg GenerateUserRoutines pc: 1082 op: STARTLINE (58)

                /** c_decl.e:1640									break*/
                // SubProg GenerateUserRoutines pc: 1084 op: ELSE (23)
                goto L2C; // [1084] 1097
                // SubProg GenerateUserRoutines pc: 1086 op: STARTLINE (58)

                /** c_decl.e:1642								case else*/
                // SubProg GenerateUserRoutines pc: 1088 op: CASE (186)
                default:
                // SubProg GenerateUserRoutines pc: 1090 op: STARTLINE (58)

                /** c_decl.e:1643									exit*/
                // SubProg GenerateUserRoutines pc: 1092 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var scope_44569
                // SubProg GenerateUserRoutines pc: 1094 op: EXIT (61)
                goto L2B; // [1094] 1120
                // SubProg GenerateUserRoutines pc: 1096 op: NOPSWITCH (187)
            ;}L2C: // addr: 1097 pc: 1096 sub: 44340 op: 187
            // SubProg GenerateUserRoutines pc: 1097 op: STARTLINE (58)

            /** c_decl.e:1645							sp = SymTab[sp][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1099 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1101 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23440 = (object)*(((s1_ptr)_2)->base + _sp_44344);
            // SubProg GenerateUserRoutines pc: 1105 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1107 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23440);
            _sp_44344 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44344)){
                _sp_44344 = (object)DBL_PTR(_sp_44344)->dbl;
            }
            _23440 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1113 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var scope_44569
            // SubProg GenerateUserRoutines pc: 1115 op: STARTLINE (58)

            /** c_decl.e:1646						end while*/
            // SubProg GenerateUserRoutines pc: 1117 op: ENDWHILE (22)
            goto L2A; // [1117] 981
            // SubProg GenerateUserRoutines pc: 1119 op: NOP1 (159)
L2B: // addr: 1120 pc: 1119 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1120 op: STARTLINE (58)

            /** c_decl.e:1649						temps = SymTab[s][S_TEMPS]*/
            // SubProg GenerateUserRoutines pc: 1122 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1124 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23442 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 1128 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1130 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23442);
            if (!IS_ATOM_INT(_5S_TEMPS_12177)){
                _temps_44347 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
            }
            else{
                _temps_44347 = (object)*(((s1_ptr)_2)->base + _5S_TEMPS_12177);
            }
            if (!IS_ATOM_INT(_temps_44347)){
                _temps_44347 = (object)DBL_PTR(_temps_44347)->dbl;
            }
            _23442 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1136 op: STARTLINE (58)

            /** c_decl.e:1650						sequence names = {}*/
            // SubProg GenerateUserRoutines pc: 1138 op: ASSIGN (18)
            RefDS(_21958);
            DeRef(_names_44603);
            _names_44603 = _21958;
            // SubProg GenerateUserRoutines pc: 1141 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 1143 op: STARTLINE (58)

            /** c_decl.e:1651						while temps != 0 do*/
            // SubProg GenerateUserRoutines pc: 1145 op: NOP2 (110)
            // SubProg GenerateUserRoutines pc: 1147 op: NOPWHILE (158)
L2D: // addr: 1148 pc: 1147 sub: 44340 op: 158
            // SubProg GenerateUserRoutines pc: 1148 op: NOTEQ_IFW_I (122)
            if (_temps_44347 == 0)
            goto L2E; // [1148] 1340
            // SubProg GenerateUserRoutines pc: 1152 op: STARTLINE (58)

            /** c_decl.e:1652							if SymTab[temps][S_SCOPE] != DELETED then*/
            // SubProg GenerateUserRoutines pc: 1154 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1156 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23445 = (object)*(((s1_ptr)_2)->base + _temps_44347);
            // SubProg GenerateUserRoutines pc: 1160 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1162 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23445);
            _23446 = (object)*(((s1_ptr)_2)->base + 4);
            _23445 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1166 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1168 op: NOTEQ_IFW (105)
            if (binary_op_a(EQUALS, _23446, 2)){
                _23446 = NOVALUE;
                goto L2F; // [1168] 1300
            }
            _23446 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1172 op: STARTLINE (58)

            /** c_decl.e:1653								sequence name = sprintf("_%d", SymTab[temps][S_TEMP_NAME] )*/
            // SubProg GenerateUserRoutines pc: 1174 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1176 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23448 = (object)*(((s1_ptr)_2)->base + _temps_44347);
            // SubProg GenerateUserRoutines pc: 1180 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1182 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23448);
            _23449 = (object)*(((s1_ptr)_2)->base + 34);
            _23448 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1186 op: SPRINTF (53)
            DeRefi(_name_44613);
            _name_44613 = EPrintf(-9999999, _22090, _23449);
            _23449 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1190 op: STARTLINE (58)

            /** c_decl.e:1654								if temp_name_type[SymTab[temps][S_TEMP_NAME]][T_GTYPE]*/
            // SubProg GenerateUserRoutines pc: 1192 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1194 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1196 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23451 = (object)*(((s1_ptr)_2)->base + _temps_44347);
            // SubProg GenerateUserRoutines pc: 1200 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1202 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23451);
            _23452 = (object)*(((s1_ptr)_2)->base + 34);
            _23451 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1206 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_5temp_name_type_12560);
            if (!IS_ATOM_INT(_23452)){
                _23453 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23452)->dbl));
            }
            else{
                _23453 = (object)*(((s1_ptr)_2)->base + _23452);
            }
            // SubProg GenerateUserRoutines pc: 1210 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1212 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23453);
            _23454 = (object)*(((s1_ptr)_2)->base + 1);
            _23453 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1216 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1218 op: NOTEQ (4)
            if (IS_ATOM_INT(_23454)) {
                _23455 = (_23454 != 0);
            }
            else {
                _23455 = binary_op(NOTEQ, _23454, 0);
            }
            _23454 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1222 op: SC1_AND_IF (146)
            if (IS_ATOM_INT(_23455)) {
                if (_23455 == 0) {
                    goto L30; // [1222] 1296
                }
            }
            else {
                if (DBL_PTR(_23455)->dbl == 0.0) {
                    goto L30; // [1222] 1296
                }
            }
            // SubProg GenerateUserRoutines pc: 1226 op: FIND_FROM (176)
            _23457 = find_from(_name_44613, _names_44603, 1);
            // SubProg GenerateUserRoutines pc: 1231 op: NOT (7)
            _23458 = (_23457 == 0);
            _23457 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1234 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 1235 op: IF (20)
            if (_23458 == 0)
            {
                DeRef(_23458);
                _23458 = NOVALUE;
                goto L30; // [1235] 1296
            }
            else{
                DeRef(_23458);
                _23458 = NOVALUE;
            }
            // SubProg GenerateUserRoutines pc: 1238 op: STARTLINE (58)

            /** c_decl.e:1657									c_stmt0("object ")*/
            // SubProg GenerateUserRoutines pc: 1240 op: PROC (27)
            RefDS(_22762);
            _57c_stmt0(_22762);
            // SubProg GenerateUserRoutines pc: 1243 op: STARTLINE (58)

            /** c_decl.e:1658									c_puts( name )*/
            // SubProg GenerateUserRoutines pc: 1245 op: PROC (27)
            RefDS(_name_44613);
            _54c_puts(_name_44613);
            // SubProg GenerateUserRoutines pc: 1248 op: STARTLINE (58)

            /** c_decl.e:1659									c_puts(" = NOVALUE")*/
            // SubProg GenerateUserRoutines pc: 1250 op: PROC (27)
            RefDS(_23459);
            _54c_puts(_23459);
            // SubProg GenerateUserRoutines pc: 1253 op: STARTLINE (58)

            /** c_decl.e:1661									target = {NOVALUE, NOVALUE}*/
            // SubProg GenerateUserRoutines pc: 1255 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1257 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1259 op: RIGHT_BRACE_2 (85)
            Ref(_5NOVALUE_12331);
            Ref(_5NOVALUE_12331);
            DeRef(_58target_28003);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _5NOVALUE_12331;
            ((intptr_t *)_2)[2] = _5NOVALUE_12331;
            _58target_28003 = MAKE_SEQ(_1);
            // SubProg GenerateUserRoutines pc: 1263 op: SEQUENCE_CHECK (97)
            // SubProg GenerateUserRoutines pc: 1265 op: STARTLINE (58)

            /** c_decl.e:1663									SetBBType(temps, TYPE_INTEGER, target, TYPE_OBJECT, 0)*/
            // SubProg GenerateUserRoutines pc: 1267 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1269 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1271 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1273 op: PROC (27)
            RefDS(_58target_28003);
            _57SetBBType(_temps_44347, 1, _58target_28003, 16, 0);
            // SubProg GenerateUserRoutines pc: 1280 op: STARTLINE (58)

            /** c_decl.e:1664									ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1282 op: STARTLINE (58)

            /** c_decl.e:1667										c_puts(";\n")*/
            // SubProg GenerateUserRoutines pc: 1284 op: PROC (27)
            RefDS(_22246);
            _54c_puts(_22246);
            // SubProg GenerateUserRoutines pc: 1287 op: STARTLINE (58)

            /** c_decl.e:1669									names = prepend( names, name )*/
            // SubProg GenerateUserRoutines pc: 1289 op: PREPEND (57)
            RefDS(_name_44613);
            Prepend(&_names_44603, _names_44603, _name_44613);
            // SubProg GenerateUserRoutines pc: 1293 op: ELSE (23)
            goto L31; // [1293] 1299
            // SubProg GenerateUserRoutines pc: 1295 op: NOP1 (159)
L30: // addr: 1296 pc: 1295 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1296 op: STARTLINE (58)

            /** c_decl.e:1671									ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1298 op: NOP1 (159)
L31: // addr: 1299 pc: 1298 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1299 op: NOP1 (159)
L2F: // addr: 1300 pc: 1299 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1300 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var name_44613
            DeRefi(_name_44613);
            _name_44613 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1302 op: STARTLINE (58)

            /** c_decl.e:1677							SymTab[temps][S_GTYPE] = TYPE_OBJECT*/
            // SubProg GenerateUserRoutines pc: 1304 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1306 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _7SymTab_11389 = MAKE_SEQ(_2);
            }
            _3 = (object)(_temps_44347 + ((s1_ptr)_2)->base);
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
            _23464 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1319 op: STARTLINE (58)

            /** c_decl.e:1678							temps = SymTab[temps][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1321 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1323 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23466 = (object)*(((s1_ptr)_2)->base + _temps_44347);
            // SubProg GenerateUserRoutines pc: 1327 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1329 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23466);
            _temps_44347 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_temps_44347)){
                _temps_44347 = (object)DBL_PTR(_temps_44347)->dbl;
            }
            _23466 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1335 op: STARTLINE (58)

            /** c_decl.e:1679						end while*/
            // SubProg GenerateUserRoutines pc: 1337 op: ENDWHILE (22)
            goto L2D; // [1337] 1148
            // SubProg GenerateUserRoutines pc: 1339 op: NOP1 (159)
L2E: // addr: 1340 pc: 1339 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1340 op: STARTLINE (58)

            /** c_decl.e:1680						Initializing = FALSE*/
            // SubProg GenerateUserRoutines pc: 1342 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1344 op: ASSIGN (18)
            _5Initializing_12558 = _6FALSE_363;
            // SubProg GenerateUserRoutines pc: 1347 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 1349 op: STARTLINE (58)

            /** c_decl.e:1682						if SymTab[s][S_LHS_SUBS2] then*/
            // SubProg GenerateUserRoutines pc: 1351 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1353 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23468 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 1357 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1359 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23468);
            _23469 = (object)*(((s1_ptr)_2)->base + 37);
            _23468 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1363 op: IF (20)
            if (_23469 == 0) {
                _23469 = NOVALUE;
                goto L32; // [1363] 1376
            }
            else {
                if (!IS_ATOM_INT(_23469) && DBL_PTR(_23469)->dbl == 0.0){
                    _23469 = NOVALUE;
                    goto L32; // [1363] 1376
                }
                _23469 = NOVALUE;
            }
            _23469 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1366 op: STARTLINE (58)

            /** c_decl.e:1683							c_stmt0("object _0, _1, _2, _3;\n\n")*/
            // SubProg GenerateUserRoutines pc: 1368 op: PROC (27)
            RefDS(_23470);
            _57c_stmt0(_23470);
            // SubProg GenerateUserRoutines pc: 1371 op: STARTLINE (58)

            /** c_decl.e:1684							ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1373 op: ELSE (23)
            goto L33; // [1373] 1384
            // SubProg GenerateUserRoutines pc: 1375 op: NOP1 (159)
L32: // addr: 1376 pc: 1375 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1376 op: STARTLINE (58)

            /** c_decl.e:1688							c_stmt0("object _0, _1, _2;\n\n")*/
            // SubProg GenerateUserRoutines pc: 1378 op: PROC (27)
            RefDS(_23472);
            _57c_stmt0(_23472);
            // SubProg GenerateUserRoutines pc: 1381 op: STARTLINE (58)

            /** c_decl.e:1689							ifdef DEBUG then*/
            // SubProg GenerateUserRoutines pc: 1383 op: NOP1 (159)
L33: // addr: 1384 pc: 1383 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1384 op: STARTLINE (58)

            /** c_decl.e:1696						sp = SymTab[s][S_NEXT]*/
            // SubProg GenerateUserRoutines pc: 1386 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1388 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23474 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 1392 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1394 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23474);
            _sp_44344 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44344)){
                _sp_44344 = (object)DBL_PTR(_sp_44344)->dbl;
            }
            _23474 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1400 op: STARTLINE (58)

            /** c_decl.e:1697						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            // SubProg GenerateUserRoutines pc: 1402 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1404 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23476 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 1408 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1410 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23476);
            if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
                _23477 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
            }
            else{
                _23477 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
            }
            _23476 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1414 op: FOR (21)
            {
                object _p_44674;
                _p_44674 = 1;
L34: // addr: 1421 pc: 1414 sub: 44340 op: 21
                if (binary_op_a(GREATER, _p_44674, _23477)){
                    goto L35; // [1414] 1765
                }
                // SubProg GenerateUserRoutines pc: 1421 op: STARTLINE (58)

                /** c_decl.e:1698							SymTab[sp][S_ONE_REF] = FALSE*/
                // SubProg GenerateUserRoutines pc: 1423 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1425 op: LHS_SUBS1 (161)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _7SymTab_11389 = MAKE_SEQ(_2);
                }
                _3 = (object)(_sp_44344 + ((s1_ptr)_2)->base);
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
                *(intptr_t *)_2 = _6FALSE_363;
                DeRef(_1);
                _23478 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1438 op: STARTLINE (58)

                /** c_decl.e:1699							if SymTab[sp][S_ARG_TYPE] = TYPE_SEQUENCE then*/
                // SubProg GenerateUserRoutines pc: 1440 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1442 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23480 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1446 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1448 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23480);
                _23481 = (object)*(((s1_ptr)_2)->base + 43);
                _23480 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1452 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1454 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23481, 8)){
                    _23481 = NOVALUE;
                    goto L36; // [1454] 1518
                }
                _23481 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1458 op: STARTLINE (58)

                /** c_decl.e:1700								target[MIN] = SymTab[sp][S_ARG_SEQ_LEN]*/
                // SubProg GenerateUserRoutines pc: 1460 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1462 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1464 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1466 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23483 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1470 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1472 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23483);
                _23484 = (object)*(((s1_ptr)_2)->base + 51);
                _23483 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1476 op: ASSIGN_SUBS (16)
                Ref(_23484);
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23484;
                if( _1 != _23484 ){
                    DeRef(_1);
                }
                _23484 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1480 op: STARTLINE (58)

                /** c_decl.e:1701								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target,*/
                // SubProg GenerateUserRoutines pc: 1482 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1484 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23485 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1488 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1490 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23485);
                _23486 = (object)*(((s1_ptr)_2)->base + 43);
                _23485 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1494 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1496 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1498 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23487 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1502 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1504 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23487);
                _23488 = (object)*(((s1_ptr)_2)->base + 45);
                _23487 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1508 op: PROC (27)
                Ref(_23486);
                RefDS(_58target_28003);
                Ref(_23488);
                _57SetBBType(_sp_44344, _23486, _58target_28003, _23488, 0);
                _23486 = NOVALUE;
                _23488 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1515 op: ELSE (23)
                goto L37; // [1515] 1742
                // SubProg GenerateUserRoutines pc: 1517 op: NOP1 (159)
L36: // addr: 1518 pc: 1517 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1518 op: STARTLINE (58)

                /** c_decl.e:1704							elsif SymTab[sp][S_ARG_TYPE] = TYPE_INTEGER then*/
                // SubProg GenerateUserRoutines pc: 1520 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1522 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23489 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1526 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1528 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23489);
                _23490 = (object)*(((s1_ptr)_2)->base + 43);
                _23489 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1532 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1534 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23490, 1)){
                    _23490 = NOVALUE;
                    goto L38; // [1534] 1658
                }
                _23490 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1538 op: STARTLINE (58)

                /** c_decl.e:1705								if SymTab[sp][S_ARG_MIN] = NOVALUE then*/
                // SubProg GenerateUserRoutines pc: 1540 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1542 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23492 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1546 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1548 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23492);
                _23493 = (object)*(((s1_ptr)_2)->base + 47);
                _23492 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1552 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1554 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23493, _5NOVALUE_12331)){
                    _23493 = NOVALUE;
                    goto L39; // [1554] 1585
                }
                _23493 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1558 op: STARTLINE (58)

                /** c_decl.e:1706									target[MIN] = MININT*/
                // SubProg GenerateUserRoutines pc: 1560 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1562 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1564 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1566 op: ASSIGN_SUBS (16)
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
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
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = 1073741823;
                DeRef(_1);
                // SubProg GenerateUserRoutines pc: 1582 op: ELSE (23)
                goto L3A; // [1582] 1630
                // SubProg GenerateUserRoutines pc: 1584 op: NOP1 (159)
L39: // addr: 1585 pc: 1584 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1585 op: STARTLINE (58)

                /** c_decl.e:1709									target[MIN] = SymTab[sp][S_ARG_MIN]*/
                // SubProg GenerateUserRoutines pc: 1587 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1589 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1591 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1593 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23495 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1597 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1599 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23495);
                _23496 = (object)*(((s1_ptr)_2)->base + 47);
                _23495 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1603 op: ASSIGN_SUBS (16)
                Ref(_23496);
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23496;
                if( _1 != _23496 ){
                    DeRef(_1);
                }
                _23496 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1607 op: STARTLINE (58)

                /** c_decl.e:1710									target[MAX] = SymTab[sp][S_ARG_MAX]*/
                // SubProg GenerateUserRoutines pc: 1609 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1611 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1613 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1615 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23497 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1619 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1621 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23497);
                _23498 = (object)*(((s1_ptr)_2)->base + 48);
                _23497 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1625 op: ASSIGN_SUBS (16)
                Ref(_23498);
                _2 = (object)SEQ_PTR(_58target_28003);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _58target_28003 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23498;
                if( _1 != _23498 ){
                    DeRef(_1);
                }
                _23498 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1629 op: NOP1 (159)
L3A: // addr: 1630 pc: 1629 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1630 op: STARTLINE (58)

                /** c_decl.e:1712								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target, TYPE_OBJECT, 0)*/
                // SubProg GenerateUserRoutines pc: 1632 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1634 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23499 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1638 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1640 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23499);
                _23500 = (object)*(((s1_ptr)_2)->base + 43);
                _23499 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1644 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1646 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1648 op: PROC (27)
                Ref(_23500);
                RefDS(_58target_28003);
                _57SetBBType(_sp_44344, _23500, _58target_28003, 16, 0);
                _23500 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1655 op: ELSE (23)
                goto L37; // [1655] 1742
                // SubProg GenerateUserRoutines pc: 1657 op: NOP1 (159)
L38: // addr: 1658 pc: 1657 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1658 op: STARTLINE (58)

                /** c_decl.e:1714							elsif SymTab[sp][S_ARG_TYPE] = TYPE_OBJECT then*/
                // SubProg GenerateUserRoutines pc: 1660 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1662 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23501 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1666 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1668 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23501);
                _23502 = (object)*(((s1_ptr)_2)->base + 43);
                _23501 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1672 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1674 op: EQUALS_IFW (104)
                if (binary_op_a(NOTEQ, _23502, 16)){
                    _23502 = NOVALUE;
                    goto L3B; // [1674] 1716
                }
                _23502 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1678 op: STARTLINE (58)

                /** c_decl.e:1716								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue,*/
                // SubProg GenerateUserRoutines pc: 1680 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1682 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23504 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1686 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1688 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23504);
                _23505 = (object)*(((s1_ptr)_2)->base + 43);
                _23504 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1692 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1694 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1696 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23506 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1700 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1702 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23506);
                _23507 = (object)*(((s1_ptr)_2)->base + 45);
                _23506 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1706 op: PROC (27)
                Ref(_23505);
                RefDS(_54novalue_46168);
                Ref(_23507);
                _57SetBBType(_sp_44344, _23505, _54novalue_46168, _23507, 0);
                _23505 = NOVALUE;
                _23507 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1713 op: ELSE (23)
                goto L37; // [1713] 1742
                // SubProg GenerateUserRoutines pc: 1715 op: NOP1 (159)
L3B: // addr: 1716 pc: 1715 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1716 op: STARTLINE (58)

                /** c_decl.e:1720								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue, TYPE_OBJECT, 0)*/
                // SubProg GenerateUserRoutines pc: 1718 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1720 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23508 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1724 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1726 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23508);
                _23509 = (object)*(((s1_ptr)_2)->base + 43);
                _23508 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1730 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1732 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1734 op: PROC (27)
                Ref(_23509);
                RefDS(_54novalue_46168);
                _57SetBBType(_sp_44344, _23509, _54novalue_46168, 16, 0);
                _23509 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1741 op: NOP1 (159)
L37: // addr: 1742 pc: 1741 sub: 44340 op: 159
                // SubProg GenerateUserRoutines pc: 1742 op: STARTLINE (58)

                /** c_decl.e:1723							sp = SymTab[sp][S_NEXT]*/
                // SubProg GenerateUserRoutines pc: 1744 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1746 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_7SymTab_11389);
                _23510 = (object)*(((s1_ptr)_2)->base + _sp_44344);
                // SubProg GenerateUserRoutines pc: 1750 op: GLOBAL_INIT_CHECK (109)
                // SubProg GenerateUserRoutines pc: 1752 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_23510);
                _sp_44344 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44344)){
                    _sp_44344 = (object)DBL_PTR(_sp_44344)->dbl;
                }
                _23510 = NOVALUE;
                // SubProg GenerateUserRoutines pc: 1758 op: STARTLINE (58)

                /** c_decl.e:1724						end for*/
                // SubProg GenerateUserRoutines pc: 1760 op: ENDFOR_INT_UP1 (54)
                _0 = _p_44674;
                if (IS_ATOM_INT(_p_44674)) {
                    _p_44674 = _p_44674 + 1;
                    if ((object)((uintptr_t)_p_44674 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44674 = NewDouble((eudouble)_p_44674);
                    }
                }
                else {
                    _p_44674 = binary_op_a(PLUS, _p_44674, 1);
                }
                DeRef(_0);
                goto L34; // [1760] 1421
L35: // addr: 1765 pc: 1760 sub: 44340 op: 54
                ;
                DeRef(_p_44674);
            }
            // SubProg GenerateUserRoutines pc: 1765 op: STARTLINE (58)

            /** c_decl.e:1727						call_proc(Execute_id, {s})*/
            // SubProg GenerateUserRoutines pc: 1767 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1769 op: RIGHT_BRACE_N (31)
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t*)_2)[1] = _s_44343;
            _23512 = MAKE_SEQ(_1);
            // SubProg GenerateUserRoutines pc: 1773 op: CALL_PROC (136)
            _1 = (object)SEQ_PTR(_23512);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_5Execute_id_12565].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1)
                                 );
            DeRefDS(_23512);
            _23512 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1776 op: STARTLINE (58)

            /** c_decl.e:1729						c_puts("    ;\n}\n")*/
            // SubProg GenerateUserRoutines pc: 1778 op: PROC (27)
            RefDS(_23513);
            _54c_puts(_23513);
            // SubProg GenerateUserRoutines pc: 1781 op: STARTLINE (58)

            /** c_decl.e:1730						if TUNIX and dll_option and is_exported( s ) then*/
            // SubProg GenerateUserRoutines pc: 1783 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1785 op: SC1_AND (141)
            if (_39TUNIX_19987 == 0) {
                _23514 = 0;
                goto L3C; // [1785] 1795
            }
            // SubProg GenerateUserRoutines pc: 1789 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1791 op: SC2_AND (142)
            _23514 = (_57dll_option_42130 != 0);
            // SubProg GenerateUserRoutines pc: 1794 op: NOP1 (159)
L3C: // addr: 1795 pc: 1794 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 1795 op: SC1_AND_IF (146)
            if (_23514 == 0) {
                goto L3D; // [1795] 2118
            }
            // SubProg GenerateUserRoutines pc: 1799 op: PROC (27)
            _23516 = _57is_exported(_s_44343);
            // SubProg GenerateUserRoutines pc: 1803 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 1804 op: IF (20)
            if (_23516 == 0) {
                DeRef(_23516);
                _23516 = NOVALUE;
                goto L3D; // [1804] 2118
            }
            else {
                if (!IS_ATOM_INT(_23516) && DBL_PTR(_23516)->dbl == 0.0){
                    DeRef(_23516);
                    _23516 = NOVALUE;
                    goto L3D; // [1804] 2118
                }
                DeRef(_23516);
                _23516 = NOVALUE;
            }
            DeRef(_23516);
            _23516 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 1807 op: STARTLINE (58)

            /** c_decl.e:1732							LeftSym = TRUE*/
            // SubProg GenerateUserRoutines pc: 1809 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1811 op: ASSIGN (18)
            _57LeftSym_42127 = _6TRUE_365;
            // SubProg GenerateUserRoutines pc: 1814 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 1816 op: STARTLINE (58)

            /** c_decl.e:1733							if TOSX then*/
            // SubProg GenerateUserRoutines pc: 1818 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 1820 op: IF (20)
            // SubProg GenerateUserRoutines pc: 2080 op: STARTLINE (58)

            /** c_decl.e:1763								c_stmt( ret_type & SymTab[s][S_NAME] & "() __attribute__ ((alias (\"@\")));\n", s )*/
            // SubProg GenerateUserRoutines pc: 2082 op: PRIVATE_INIT_CHECK (30)
            // SubProg GenerateUserRoutines pc: 2084 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2086 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_7SymTab_11389);
            _23547 = (object)*(((s1_ptr)_2)->base + _s_44343);
            // SubProg GenerateUserRoutines pc: 2090 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2092 op: RHS_SUBS_CHECK (92)
            _2 = (object)SEQ_PTR(_23547);
            if (!IS_ATOM_INT(_5S_NAME_12132)){
                _23548 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
            }
            else{
                _23548 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
            }
            _23547 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2096 op: CONCAT_N (157)
            {
                object concat_list[3];

                concat_list[0] = _23549;
                concat_list[1] = _23548;
                concat_list[2] = _ret_type_44480;
                Concat_N((object_ptr)&_23550, concat_list, 3);
            }
            _23548 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2102 op: PROC (27)
            _57c_stmt(_23550, _s_44343, 0);
            _23550 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2107 op: NOP1 (159)
            // SubProg GenerateUserRoutines pc: 2108 op: STARTLINE (58)

            /** c_decl.e:1765							LeftSym = FALSE*/
            // SubProg GenerateUserRoutines pc: 2110 op: GLOBAL_INIT_CHECK (109)
            // SubProg GenerateUserRoutines pc: 2112 op: ASSIGN (18)
            _57LeftSym_42127 = _6FALSE_363;
            // SubProg GenerateUserRoutines pc: 2115 op: INTEGER_CHECK (96)
            // SubProg GenerateUserRoutines pc: 2117 op: NOP1 (159)
L3D: // addr: 2118 pc: 2117 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 2118 op: STARTLINE (58)

            /** c_decl.e:1767						c_puts("\n\n" )*/
            // SubProg GenerateUserRoutines pc: 2120 op: PROC (27)
            RefDS(_22112);
            _54c_puts(_22112);
            // SubProg GenerateUserRoutines pc: 2123 op: NOP1 (159)
L14: // addr: 2124 pc: 2123 sub: 44340 op: 159
            // SubProg GenerateUserRoutines pc: 2124 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ret_type_44480
            DeRefi(_ret_type_44480);
            _ret_type_44480 = NOVALUE;

// block var s_scope_44489

// block var s_file_44492

// block var names_44603
            DeRef(_names_44603);
            _names_44603 = NOVALUE;
            // SubProg GenerateUserRoutines pc: 2126 op: STARTLINE (58)

            /** c_decl.e:1769				end for*/
            // SubProg GenerateUserRoutines pc: 2128 op: ENDFOR_INT_UP1 (54)
            _routine_no_44423 = _routine_no_44423 + 1;
            goto L12; // [2128] 359
L13: // addr: 2133 pc: 2128 sub: 44340 op: 54
            ;
        }
        // SubProg GenerateUserRoutines pc: 2133 op: NOP1 (159)
L8: // addr: 2134 pc: 2133 sub: 44340 op: 159
        // SubProg GenerateUserRoutines pc: 2134 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var these_routines_44420
        DeRef(_these_routines_44420);
        _these_routines_44420 = NOVALUE;
        // SubProg GenerateUserRoutines pc: 2136 op: STARTLINE (58)

        /** c_decl.e:1771		end for*/
        // SubProg GenerateUserRoutines pc: 2138 op: ENDFOR_INT_UP1 (54)
        _file_no_44368 = _file_no_44368 + 1;
        goto L5; // [2138] 85
L6: // addr: 2143 pc: 2138 sub: 44340 op: 54
        ;
    }
    // SubProg GenerateUserRoutines pc: 2143 op: STARTLINE (58)

    /** c_decl.e:1772	end procedure*/
    // SubProg GenerateUserRoutines pc: 2145 op: RETURNP (29)

// Exiting block BLOCK: GenerateUserRoutines

// block var s_44343

// block var sp_44344

// block var next_c_char_44345

// block var q_44346

// block var temps_44347

// block var buff_44348
    DeRefi(_buff_44348);

// block var base_name_44349
    DeRef(_base_name_44349);

// block var long_c_file_44350
    DeRef(_long_c_file_44350);

// block var c_file_44351
    DeRef(_c_file_44351);
    DeRef(_23373);
    _23373 = NOVALUE;
    DeRef(_23400);
    _23400 = NOVALUE;
    DeRef(_23350);
    _23350 = NOVALUE;
    DeRef(_23408);
    _23408 = NOVALUE;
    DeRef(_23326);
    _23326 = NOVALUE;
    DeRef(_23412);
    _23412 = NOVALUE;
    DeRef(_23455);
    _23455 = NOVALUE;
    _23477 = NOVALUE;
    DeRef(_23406);
    _23406 = NOVALUE;
    _23423 = NOVALUE;
    DeRef(_23363);
    _23363 = NOVALUE;
    DeRef(_23404);
    _23404 = NOVALUE;
    _23452 = NOVALUE;
    DeRef(_23368);
    _23368 = NOVALUE;
    DeRef(_23365);
    _23365 = NOVALUE;
    _23371 = NOVALUE;
    DeRef(_23361);
    _23361 = NOVALUE;
    DeRef(_23402);
    _23402 = NOVALUE;
    DeRef(_23335);
    _23335 = NOVALUE;
    return;
    // SubProg GenerateUserRoutines pc: 2148 op: BADRETURNF (43)
    ;
}



// 0x774D91D6
