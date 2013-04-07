// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _60get_eucompiledir()
{
    object _x_42107 = NOVALUE;
    object _22300 = NOVALUE;
    object _22298 = NOVALUE;
    object _22295 = NOVALUE;
    object _22293 = NOVALUE;
    object _22291 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:133		object x = getenv("EUCOMPILEDIR")*/
    DeRef(_x_42107);
    _x_42107 = EGetEnv(_22289);

    /** c_decl.e:134		if is_eudir_from_cmdline() then*/
    _22291 = _36is_eudir_from_cmdline();
    if (_22291 == 0) {
        DeRef(_22291);
        _22291 = NOVALUE;
        goto L1; // [11] 20
    }
    else {
        if (!IS_ATOM_INT(_22291) && DBL_PTR(_22291)->dbl == 0.0){
            DeRef(_22291);
            _22291 = NOVALUE;
            goto L1; // [11] 20
        }
        DeRef(_22291);
        _22291 = NOVALUE;
    }
    DeRef(_22291);
    _22291 = NOVALUE;

    /** c_decl.e:135			x = get_eudir()*/
    _0 = _x_42107;
    _x_42107 = _36get_eudir();
    DeRefi(_0);
L1: 

    /** c_decl.e:138		ifdef UNIX then*/

    /** c_decl.e:139			if equal(x, -1) then*/
    if (_x_42107 == -1)
    _22293 = 1;
    else if (IS_ATOM_INT(_x_42107) && IS_ATOM_INT(-1))
    _22293 = 0;
    else
    _22293 = (compare(_x_42107, -1) == 0);
    if (_22293 == 0)
    {
        _22293 = NOVALUE;
        goto L2; // [28] 67
    }
    else{
        _22293 = NOVALUE;
    }

    /** c_decl.e:140				x = "/usr/local/share/euphoria"*/
    RefDS(_22294);
    DeRef(_x_42107);
    _x_42107 = _22294;

    /** c_decl.e:141				if not file_exists( x ) then*/
    RefDS(_x_42107);
    _22295 = _16file_exists(_x_42107);
    if (IS_ATOM_INT(_22295)) {
        if (_22295 != 0){
            DeRef(_22295);
            _22295 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    else {
        if (DBL_PTR(_22295)->dbl != 0.0){
            DeRef(_22295);
            _22295 = NOVALUE;
            goto L3; // [42] 66
        }
    }
    DeRef(_22295);
    _22295 = NOVALUE;

    /** c_decl.e:144					x = "/usr/share/euphoria"*/
    RefDS(_22297);
    DeRefDSi(_x_42107);
    _x_42107 = _22297;

    /** c_decl.e:145					if not file_exists( x ) then*/
    RefDS(_x_42107);
    _22298 = _16file_exists(_x_42107);
    if (IS_ATOM_INT(_22298)) {
        if (_22298 != 0){
            DeRef(_22298);
            _22298 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    else {
        if (DBL_PTR(_22298)->dbl != 0.0){
            DeRef(_22298);
            _22298 = NOVALUE;
            goto L4; // [56] 65
        }
    }
    DeRef(_22298);
    _22298 = NOVALUE;

    /** c_decl.e:146						x = -1*/
    DeRefDSi(_x_42107);
    _x_42107 = -1;
L4: 
L3: 
L2: 

    /** c_decl.e:152		if equal(x, -1) then*/
    if (_x_42107 == -1)
    _22300 = 1;
    else if (IS_ATOM_INT(_x_42107) && IS_ATOM_INT(-1))
    _22300 = 0;
    else
    _22300 = (compare(_x_42107, -1) == 0);
    if (_22300 == 0)
    {
        _22300 = NOVALUE;
        goto L5; // [73] 82
    }
    else{
        _22300 = NOVALUE;
    }

    /** c_decl.e:153			x = get_eudir()*/
    _0 = _x_42107;
    _x_42107 = _36get_eudir();
    DeRef(_0);
L5: 

    /** c_decl.e:156		return x*/
    return _x_42107;
    ;
}


void _60NewBB(object _a_call_42133, object _mask_42134, object _sub_42136)
{
    object _s_42138 = NOVALUE;
    object _22333 = NOVALUE;
    object _22332 = NOVALUE;
    object _22330 = NOVALUE;
    object _22329 = NOVALUE;
    object _22327 = NOVALUE;
    object _22326 = NOVALUE;
    object _22325 = NOVALUE;
    object _22324 = NOVALUE;
    object _22323 = NOVALUE;
    object _22322 = NOVALUE;
    object _22321 = NOVALUE;
    object _22320 = NOVALUE;
    object _22319 = NOVALUE;
    object _22318 = NOVALUE;
    object _22317 = NOVALUE;
    object _22316 = NOVALUE;
    object _22315 = NOVALUE;
    object _22314 = NOVALUE;
    object _22313 = NOVALUE;
    object _22312 = NOVALUE;
    object _22311 = NOVALUE;
    object _22310 = NOVALUE;
    object _22309 = NOVALUE;
    object _22308 = NOVALUE;
    object _22307 = NOVALUE;
    object _22306 = NOVALUE;
    object _22305 = NOVALUE;
    object _22303 = NOVALUE;
    object _22302 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_mask_42134)) {
        _1 = (object)(DBL_PTR(_mask_42134)->dbl);
        DeRefDS(_mask_42134);
        _mask_42134 = _1;
    }

    /** c_decl.e:166		if a_call then*/
    if (_a_call_42133 == 0)
    {
        goto L1; // [9] 252
    }
    else{
    }

    /** c_decl.e:169			for i = 1 to length(BB_info) do*/
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22302 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22302 = 1;
    }
    {
        object _i_42141;
        _i_42141 = 1;
L2: 
        if (_i_42141 > _22302){
            goto L3; // [19] 249
        }

        /** c_decl.e:170				s = BB_info[i][BB_VAR]*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22303 = (object)*(((s1_ptr)_2)->base + _i_42141);
        _2 = (object)SEQ_PTR(_22303);
        _s_42138 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_s_42138)){
            _s_42138 = (object)DBL_PTR(_s_42138)->dbl;
        }
        _22303 = NOVALUE;

        /** c_decl.e:171				if SymTab[s][S_MODE] = M_NORMAL and*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22305 = (object)*(((s1_ptr)_2)->base + _s_42138);
        _2 = (object)SEQ_PTR(_22305);
        _22306 = (object)*(((s1_ptr)_2)->base + 3);
        _22305 = NOVALUE;
        if (IS_ATOM_INT(_22306)) {
            _22307 = (_22306 == 1);
        }
        else {
            _22307 = binary_op(EQUALS, _22306, 1);
        }
        _22306 = NOVALUE;
        if (IS_ATOM_INT(_22307)) {
            if (_22307 == 0) {
                goto L4; // [60] 242
            }
        }
        else {
            if (DBL_PTR(_22307)->dbl == 0.0) {
                goto L4; // [60] 242
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22309 = (object)*(((s1_ptr)_2)->base + _s_42138);
        _2 = (object)SEQ_PTR(_22309);
        _22310 = (object)*(((s1_ptr)_2)->base + 4);
        _22309 = NOVALUE;
        if (IS_ATOM_INT(_22310)) {
            _22311 = (_22310 == 6);
        }
        else {
            _22311 = binary_op(EQUALS, _22310, 6);
        }
        _22310 = NOVALUE;
        if (IS_ATOM_INT(_22311)) {
            if (_22311 != 0) {
                DeRef(_22312);
                _22312 = 1;
                goto L5; // [82] 108
            }
        }
        else {
            if (DBL_PTR(_22311)->dbl != 0.0) {
                DeRef(_22312);
                _22312 = 1;
                goto L5; // [82] 108
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22313 = (object)*(((s1_ptr)_2)->base + _s_42138);
        _2 = (object)SEQ_PTR(_22313);
        _22314 = (object)*(((s1_ptr)_2)->base + 4);
        _22313 = NOVALUE;
        if (IS_ATOM_INT(_22314)) {
            _22315 = (_22314 == 5);
        }
        else {
            _22315 = binary_op(EQUALS, _22314, 5);
        }
        _22314 = NOVALUE;
        DeRef(_22312);
        if (IS_ATOM_INT(_22315))
        _22312 = (_22315 != 0);
        else
        _22312 = DBL_PTR(_22315)->dbl != 0.0;
L5: 
        if (_22312 != 0) {
            _22316 = 1;
            goto L6; // [108] 134
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22317 = (object)*(((s1_ptr)_2)->base + _s_42138);
        _2 = (object)SEQ_PTR(_22317);
        _22318 = (object)*(((s1_ptr)_2)->base + 4);
        _22317 = NOVALUE;
        if (IS_ATOM_INT(_22318)) {
            _22319 = (_22318 == 11);
        }
        else {
            _22319 = binary_op(EQUALS, _22318, 11);
        }
        _22318 = NOVALUE;
        if (IS_ATOM_INT(_22319))
        _22316 = (_22319 != 0);
        else
        _22316 = DBL_PTR(_22319)->dbl != 0.0;
L6: 
        if (_22316 != 0) {
            DeRef(_22320);
            _22320 = 1;
            goto L7; // [134] 160
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22321 = (object)*(((s1_ptr)_2)->base + _s_42138);
        _2 = (object)SEQ_PTR(_22321);
        _22322 = (object)*(((s1_ptr)_2)->base + 4);
        _22321 = NOVALUE;
        if (IS_ATOM_INT(_22322)) {
            _22323 = (_22322 == 13);
        }
        else {
            _22323 = binary_op(EQUALS, _22322, 13);
        }
        _22322 = NOVALUE;
        if (IS_ATOM_INT(_22323))
        _22320 = (_22323 != 0);
        else
        _22320 = DBL_PTR(_22323)->dbl != 0.0;
L7: 
        if (_22320 == 0)
        {
            _22320 = NOVALUE;
            goto L4; // [161] 242
        }
        else{
            _22320 = NOVALUE;
        }

        /** c_decl.e:176					  if and_bits(mask, power(2, remainder(s, E_SIZE))) then*/
        _22324 = (_s_42138 % 29);
        _22325 = power(2, _22324);
        _22324 = NOVALUE;
        if (IS_ATOM_INT(_22325)) {
            {uintptr_t tu;
                 tu = (uintptr_t)_mask_42134 & (uintptr_t)_22325;
                 _22326 = MAKE_UINT(tu);
            }
        }
        else {
            temp_d.dbl = (eudouble)_mask_42134;
            _22326 = Dand_bits(&temp_d, DBL_PTR(_22325));
        }
        DeRef(_22325);
        _22325 = NOVALUE;
        if (_22326 == 0) {
            DeRef(_22326);
            _22326 = NOVALUE;
            goto L8; // [180] 241
        }
        else {
            if (!IS_ATOM_INT(_22326) && DBL_PTR(_22326)->dbl == 0.0){
                DeRef(_22326);
                _22326 = NOVALUE;
                goto L8; // [180] 241
            }
            DeRef(_22326);
            _22326 = NOVALUE;
        }
        DeRef(_22326);
        _22326 = NOVALUE;

        /** c_decl.e:177						  if mask = E_ALL_EFFECT or s < sub then*/
        _22327 = (_mask_42134 == 1073741823);
        if (_22327 != 0) {
            goto L9; // [191] 204
        }
        _22329 = (_s_42138 < _sub_42136);
        if (_22329 == 0)
        {
            DeRef(_22329);
            _22329 = NOVALUE;
            goto LA; // [200] 240
        }
        else{
            DeRef(_22329);
            _22329 = NOVALUE;
        }
L9: 

        /** c_decl.e:178							  BB_info[i][BB_TYPE..BB_OBJ] =*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _60BB_info_42085 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_42141 + ((s1_ptr)_2)->base);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -1073741824;
        ((intptr_t *)_2)[2] = 1073741823;
        _22332 = MAKE_SEQ(_1);
        _1 = NewS1(4);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = 0;
        ((intptr_t*)_2)[2] = 0;
        Ref(_39NOVALUE_16670);
        ((intptr_t*)_2)[3] = _39NOVALUE_16670;
        ((intptr_t*)_2)[4] = _22332;
        _22333 = MAKE_SEQ(_1);
        _22332 = NOVALUE;
        assign_slice_seq = (s1_ptr *)_3;
        AssignSlice(2, 5, _22333);
        DeRefDS(_22333);
        _22333 = NOVALUE;
LA: 
L8: 
L4: 

        /** c_decl.e:183			end for*/
        _i_42141 = _i_42141 + 1;
        goto L2; // [244] 26
L3: 
        ;
    }
    goto LB; // [249] 260
L1: 

    /** c_decl.e:186			BB_info = {}*/
    RefDS(_21928);
    DeRef(_60BB_info_42085);
    _60BB_info_42085 = _21928;
LB: 

    /** c_decl.e:188	end procedure*/
    DeRef(_22319);
    _22319 = NOVALUE;
    DeRef(_22323);
    _22323 = NOVALUE;
    DeRef(_22327);
    _22327 = NOVALUE;
    DeRef(_22311);
    _22311 = NOVALUE;
    DeRef(_22307);
    _22307 = NOVALUE;
    DeRef(_22315);
    _22315 = NOVALUE;
    DeRef(_22330);
    _22330 = NOVALUE;
    return;
    ;
}


object _60BB_var_obj(object _var_42206)
{
    object _bbi_42207 = NOVALUE;
    object _22344 = NOVALUE;
    object _22342 = NOVALUE;
    object _22340 = NOVALUE;
    object _22339 = NOVALUE;
    object _22337 = NOVALUE;
    object _22335 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:196		for i = length(BB_info) to 1 by -1 do*/
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22335 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22335 = 1;
    }
    {
        object _i_42209;
        _i_42209 = _22335;
L1: 
        if (_i_42209 < 1){
            goto L2; // [10] 99
        }

        /** c_decl.e:197			bbi = BB_info[i]*/
        DeRef(_bbi_42207);
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _bbi_42207 = (object)*(((s1_ptr)_2)->base + _i_42209);
        Ref(_bbi_42207);

        /** c_decl.e:198			if bbi[BB_VAR] != var then*/
        _2 = (object)SEQ_PTR(_bbi_42207);
        _22337 = (object)*(((s1_ptr)_2)->base + 1);
        if (binary_op_a(EQUALS, _22337, _var_42206)){
            _22337 = NOVALUE;
            goto L3; // [31] 40
        }
        _22337 = NOVALUE;

        /** c_decl.e:199				continue*/
        goto L4; // [37] 94
L3: 

        /** c_decl.e:202			if SymTab[var][S_MODE] != M_NORMAL then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22339 = (object)*(((s1_ptr)_2)->base + _var_42206);
        _2 = (object)SEQ_PTR(_22339);
        _22340 = (object)*(((s1_ptr)_2)->base + 3);
        _22339 = NOVALUE;
        if (binary_op_a(EQUALS, _22340, 1)){
            _22340 = NOVALUE;
            goto L5; // [56] 65
        }
        _22340 = NOVALUE;

        /** c_decl.e:203				continue*/
        goto L4; // [62] 94
L5: 

        /** c_decl.e:206			if bbi[BB_TYPE] != TYPE_INTEGER then*/
        _2 = (object)SEQ_PTR(_bbi_42207);
        _22342 = (object)*(((s1_ptr)_2)->base + 2);
        if (binary_op_a(EQUALS, _22342, 1)){
            _22342 = NOVALUE;
            goto L6; // [73] 82
        }
        _22342 = NOVALUE;

        /** c_decl.e:207				exit*/
        goto L2; // [79] 99
L6: 

        /** c_decl.e:210			return bbi[BB_OBJ]*/
        _2 = (object)SEQ_PTR(_bbi_42207);
        _22344 = (object)*(((s1_ptr)_2)->base + 5);
        Ref(_22344);
        DeRef(_bbi_42207);
        return _22344;

        /** c_decl.e:211		end for*/
L4: 
        _i_42209 = _i_42209 + -1;
        goto L1; // [94] 17
L2: 
        ;
    }

    /** c_decl.e:212		return BB_def_values*/
    RefDS(_60BB_def_values_42200);
    DeRef(_bbi_42207);
    _22344 = NOVALUE;
    return _60BB_def_values_42200;
    ;
}


object _60BB_var_type(object _var_42229)
{
    object _22359 = NOVALUE;
    object _22358 = NOVALUE;
    object _22356 = NOVALUE;
    object _22355 = NOVALUE;
    object _22354 = NOVALUE;
    object _22353 = NOVALUE;
    object _22352 = NOVALUE;
    object _22351 = NOVALUE;
    object _22350 = NOVALUE;
    object _22349 = NOVALUE;
    object _22348 = NOVALUE;
    object _22347 = NOVALUE;
    object _22346 = NOVALUE;
    object _22345 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:218		for i = length(BB_info) to 1 by -1 do*/
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22345 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22345 = 1;
    }
    {
        object _i_42231;
        _i_42231 = _22345;
L1: 
        if (_i_42231 < 1){
            goto L2; // [10] 125
        }

        /** c_decl.e:219			if BB_info[i][BB_VAR] = var and*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22346 = (object)*(((s1_ptr)_2)->base + _i_42231);
        _2 = (object)SEQ_PTR(_22346);
        _22347 = (object)*(((s1_ptr)_2)->base + 1);
        _22346 = NOVALUE;
        if (IS_ATOM_INT(_22347)) {
            _22348 = (_22347 == _var_42229);
        }
        else {
            _22348 = binary_op(EQUALS, _22347, _var_42229);
        }
        _22347 = NOVALUE;
        if (IS_ATOM_INT(_22348)) {
            if (_22348 == 0) {
                goto L3; // [33] 118
            }
        }
        else {
            if (DBL_PTR(_22348)->dbl == 0.0) {
                goto L3; // [33] 118
            }
        }
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22350 = (object)*(((s1_ptr)_2)->base + _i_42231);
        _2 = (object)SEQ_PTR(_22350);
        _22351 = (object)*(((s1_ptr)_2)->base + 1);
        _22350 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_22351)){
            _22352 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22351)->dbl));
        }
        else{
            _22352 = (object)*(((s1_ptr)_2)->base + _22351);
        }
        _2 = (object)SEQ_PTR(_22352);
        _22353 = (object)*(((s1_ptr)_2)->base + 3);
        _22352 = NOVALUE;
        if (IS_ATOM_INT(_22353)) {
            _22354 = (_22353 == 1);
        }
        else {
            _22354 = binary_op(EQUALS, _22353, 1);
        }
        _22353 = NOVALUE;
        if (_22354 == 0) {
            DeRef(_22354);
            _22354 = NOVALUE;
            goto L3; // [66] 118
        }
        else {
            if (!IS_ATOM_INT(_22354) && DBL_PTR(_22354)->dbl == 0.0){
                DeRef(_22354);
                _22354 = NOVALUE;
                goto L3; // [66] 118
            }
            DeRef(_22354);
            _22354 = NOVALUE;
        }
        DeRef(_22354);
        _22354 = NOVALUE;

        /** c_decl.e:221				ifdef DEBUG then*/

        /** c_decl.e:228				if BB_info[i][BB_TYPE] = TYPE_NULL then  -- var has only been read*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22355 = (object)*(((s1_ptr)_2)->base + _i_42231);
        _2 = (object)SEQ_PTR(_22355);
        _22356 = (object)*(((s1_ptr)_2)->base + 2);
        _22355 = NOVALUE;
        if (binary_op_a(NOTEQ, _22356, 0)){
            _22356 = NOVALUE;
            goto L4; // [85] 100
        }
        _22356 = NOVALUE;

        /** c_decl.e:229					return TYPE_OBJECT*/
        DeRef(_22348);
        _22348 = NOVALUE;
        _22351 = NOVALUE;
        return 16;
        goto L5; // [97] 117
L4: 

        /** c_decl.e:231					return BB_info[i][BB_TYPE]*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22358 = (object)*(((s1_ptr)_2)->base + _i_42231);
        _2 = (object)SEQ_PTR(_22358);
        _22359 = (object)*(((s1_ptr)_2)->base + 2);
        _22358 = NOVALUE;
        Ref(_22359);
        DeRef(_22348);
        _22348 = NOVALUE;
        _22351 = NOVALUE;
        return _22359;
L5: 
L3: 

        /** c_decl.e:234		end for*/
        _i_42231 = _i_42231 + -1;
        goto L1; // [120] 17
L2: 
        ;
    }

    /** c_decl.e:235		return TYPE_OBJECT*/
    _22359 = NOVALUE;
    DeRef(_22348);
    _22348 = NOVALUE;
    _22351 = NOVALUE;
    return 16;
    ;
}


object _60GType(object _s_42259)
{
    object _t_42260 = NOVALUE;
    object _local_t_42261 = NOVALUE;
    object _22363 = NOVALUE;
    object _22362 = NOVALUE;
    object _22360 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_42259)) {
        _1 = (object)(DBL_PTR(_s_42259)->dbl);
        DeRefDS(_s_42259);
        _s_42259 = _1;
    }

    /** c_decl.e:243		t = SymTab[s][S_GTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22360 = (object)*(((s1_ptr)_2)->base + _s_42259);
    _2 = (object)SEQ_PTR(_22360);
    _t_42260 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_t_42260)){
        _t_42260 = (object)DBL_PTR(_t_42260)->dbl;
    }
    _22360 = NOVALUE;

    /** c_decl.e:244		ifdef DEBUG then*/

    /** c_decl.e:250		if SymTab[s][S_MODE] != M_NORMAL then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22362 = (object)*(((s1_ptr)_2)->base + _s_42259);
    _2 = (object)SEQ_PTR(_22362);
    _22363 = (object)*(((s1_ptr)_2)->base + 3);
    _22362 = NOVALUE;
    if (binary_op_a(EQUALS, _22363, 1)){
        _22363 = NOVALUE;
        goto L1; // [37] 48
    }
    _22363 = NOVALUE;

    /** c_decl.e:251			return t*/
    return _t_42260;
L1: 

    /** c_decl.e:254		local_t = BB_var_type(s)*/
    _local_t_42261 = _60BB_var_type(_s_42259);
    if (!IS_ATOM_INT(_local_t_42261)) {
        _1 = (object)(DBL_PTR(_local_t_42261)->dbl);
        DeRefDS(_local_t_42261);
        _local_t_42261 = _1;
    }

    /** c_decl.e:255		if local_t = TYPE_OBJECT then*/
    if (_local_t_42261 != 16)
    goto L2; // [60] 71

    /** c_decl.e:256			return t*/
    return _t_42260;
L2: 

    /** c_decl.e:258		if t = TYPE_INTEGER then*/
    if (_t_42260 != 1)
    goto L3; // [75] 88

    /** c_decl.e:259			return TYPE_INTEGER*/
    return 1;
L3: 

    /** c_decl.e:261		return local_t*/
    return _local_t_42261;
    ;
}


object _60GDelete()
{
    object _0, _1, _2;
    

    /** c_decl.e:269		return g_has_delete*/
    return _60g_has_delete_42281;
    ;
}


object _60HasDelete(object _s_42288)
{
    object _22378 = NOVALUE;
    object _22377 = NOVALUE;
    object _22375 = NOVALUE;
    object _22374 = NOVALUE;
    object _22373 = NOVALUE;
    object _22372 = NOVALUE;
    object _22370 = NOVALUE;
    object _22369 = NOVALUE;
    object _22368 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_42288)) {
        _1 = (object)(DBL_PTR(_s_42288)->dbl);
        DeRefDS(_s_42288);
        _s_42288 = _1;
    }

    /** c_decl.e:274		for i = length(BB_info) to 1 by -1 do*/
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22368 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22368 = 1;
    }
    {
        object _i_42290;
        _i_42290 = _22368;
L1: 
        if (_i_42290 < 1){
            goto L2; // [10] 57
        }

        /** c_decl.e:275			if BB_info[i][BB_VAR] = s then*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22369 = (object)*(((s1_ptr)_2)->base + _i_42290);
        _2 = (object)SEQ_PTR(_22369);
        _22370 = (object)*(((s1_ptr)_2)->base + 1);
        _22369 = NOVALUE;
        if (binary_op_a(NOTEQ, _22370, _s_42288)){
            _22370 = NOVALUE;
            goto L3; // [29] 50
        }
        _22370 = NOVALUE;

        /** c_decl.e:276				return BB_info[i][BB_DELETE]*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22372 = (object)*(((s1_ptr)_2)->base + _i_42290);
        _2 = (object)SEQ_PTR(_22372);
        _22373 = (object)*(((s1_ptr)_2)->base + 6);
        _22372 = NOVALUE;
        Ref(_22373);
        return _22373;
L3: 

        /** c_decl.e:278		end for*/
        _i_42290 = _i_42290 + -1;
        goto L1; // [52] 17
L2: 
        ;
    }

    /** c_decl.e:279		if length(SymTab[s]) < S_HAS_DELETE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22374 = (object)*(((s1_ptr)_2)->base + _s_42288);
    if (IS_SEQUENCE(_22374)){
            _22375 = SEQ_PTR(_22374)->length;
    }
    else {
        _22375 = 1;
    }
    _22374 = NOVALUE;
    if (_22375 >= 54)
    goto L4; // [70] 81

    /** c_decl.e:280			return 0*/
    _22374 = NOVALUE;
    _22373 = NOVALUE;
    return 0;
L4: 

    /** c_decl.e:282		return SymTab[s][S_HAS_DELETE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22377 = (object)*(((s1_ptr)_2)->base + _s_42288);
    _2 = (object)SEQ_PTR(_22377);
    _22378 = (object)*(((s1_ptr)_2)->base + 54);
    _22377 = NOVALUE;
    Ref(_22378);
    _22374 = NOVALUE;
    _22373 = NOVALUE;
    return _22378;
    ;
}


object _60ObjValue(object _s_42311)
{
    object _local_t_42312 = NOVALUE;
    object _st_42313 = NOVALUE;
    object _tmin_42314 = NOVALUE;
    object _tmax_42315 = NOVALUE;
    object _22391 = NOVALUE;
    object _22389 = NOVALUE;
    object _22388 = NOVALUE;
    object _22386 = NOVALUE;
    object _22383 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_42311)) {
        _1 = (object)(DBL_PTR(_s_42311)->dbl);
        DeRefDS(_s_42311);
        _s_42311 = _1;
    }

    /** c_decl.e:293		st = SymTab[s]*/
    DeRef(_st_42313);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _st_42313 = (object)*(((s1_ptr)_2)->base + _s_42311);
    Ref(_st_42313);

    /** c_decl.e:294		tmin = st[S_OBJ_MIN]*/
    DeRef(_tmin_42314);
    _2 = (object)SEQ_PTR(_st_42313);
    _tmin_42314 = (object)*(((s1_ptr)_2)->base + 30);
    Ref(_tmin_42314);

    /** c_decl.e:295		tmax = st[S_OBJ_MAX]*/
    DeRef(_tmax_42315);
    _2 = (object)SEQ_PTR(_st_42313);
    _tmax_42315 = (object)*(((s1_ptr)_2)->base + 31);
    Ref(_tmax_42315);

    /** c_decl.e:297		if tmin != tmax then*/
    if (binary_op_a(EQUALS, _tmin_42314, _tmax_42315)){
        goto L1; // [29] 41
    }

    /** c_decl.e:298			tmin = NOVALUE*/
    Ref(_39NOVALUE_16670);
    DeRef(_tmin_42314);
    _tmin_42314 = _39NOVALUE_16670;
L1: 

    /** c_decl.e:300		if st[S_MODE] != M_NORMAL then*/
    _2 = (object)SEQ_PTR(_st_42313);
    _22383 = (object)*(((s1_ptr)_2)->base + 3);
    if (binary_op_a(EQUALS, _22383, 1)){
        _22383 = NOVALUE;
        goto L2; // [51] 62
    }
    _22383 = NOVALUE;

    /** c_decl.e:301			return tmin*/
    DeRef(_local_t_42312);
    DeRef(_st_42313);
    DeRef(_tmax_42315);
    return _tmin_42314;
L2: 

    /** c_decl.e:305		local_t = BB_var_obj(s)*/
    _0 = _local_t_42312;
    _local_t_42312 = _60BB_var_obj(_s_42311);
    DeRef(_0);

    /** c_decl.e:306		if local_t[MIN] = NOVALUE then*/
    _2 = (object)SEQ_PTR(_local_t_42312);
    _22386 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _22386, _39NOVALUE_16670)){
        _22386 = NOVALUE;
        goto L3; // [80] 91
    }
    _22386 = NOVALUE;

    /** c_decl.e:307			return tmin*/
    DeRefDS(_local_t_42312);
    DeRef(_st_42313);
    DeRef(_tmax_42315);
    return _tmin_42314;
L3: 

    /** c_decl.e:310		if local_t[MIN] != local_t[MAX] then*/
    _2 = (object)SEQ_PTR(_local_t_42312);
    _22388 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_local_t_42312);
    _22389 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(EQUALS, _22388, _22389)){
        _22388 = NOVALUE;
        _22389 = NOVALUE;
        goto L4; // [105] 116
    }
    _22388 = NOVALUE;
    _22389 = NOVALUE;

    /** c_decl.e:311			return tmin*/
    DeRefDS(_local_t_42312);
    DeRef(_st_42313);
    DeRef(_tmax_42315);
    return _tmin_42314;
L4: 

    /** c_decl.e:314		return local_t[MIN]*/
    _2 = (object)SEQ_PTR(_local_t_42312);
    _22391 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22391);
    DeRefDS(_local_t_42312);
    DeRef(_st_42313);
    DeRef(_tmin_42314);
    DeRef(_tmax_42315);
    return _22391;
    ;
}


object _60TypeIs(object _x_42346, object _typei_42347)
{
    object _22393 = NOVALUE;
    object _22392 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_42346)) {
        _1 = (object)(DBL_PTR(_x_42346)->dbl);
        DeRefDS(_x_42346);
        _x_42346 = _1;
    }

    /** c_decl.e:319		return GType(x) = typei*/
    _22392 = _60GType(_x_42346);
    if (IS_ATOM_INT(_22392)) {
        _22393 = (_22392 == _typei_42347);
    }
    else {
        _22393 = binary_op(EQUALS, _22392, _typei_42347);
    }
    DeRef(_22392);
    _22392 = NOVALUE;
    return _22393;
    ;
}


object _60TypeIsIn(object _x_42352, object _types_42353)
{
    object _22395 = NOVALUE;
    object _22394 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_42352)) {
        _1 = (object)(DBL_PTR(_x_42352)->dbl);
        DeRefDS(_x_42352);
        _x_42352 = _1;
    }

    /** c_decl.e:323		return find(GType(x), types)*/
    _22394 = _60GType(_x_42352);
    _22395 = find_from(_22394, _types_42353, 1);
    DeRef(_22394);
    _22394 = NOVALUE;
    DeRefDS(_types_42353);
    return _22395;
    ;
}


object _60TypeIsNot(object _x_42358, object _typei_42359)
{
    object _22397 = NOVALUE;
    object _22396 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_42358)) {
        _1 = (object)(DBL_PTR(_x_42358)->dbl);
        DeRefDS(_x_42358);
        _x_42358 = _1;
    }

    /** c_decl.e:327		return GType(x) != typei*/
    _22396 = _60GType(_x_42358);
    if (IS_ATOM_INT(_22396)) {
        _22397 = (_22396 != _typei_42359);
    }
    else {
        _22397 = binary_op(NOTEQ, _22396, _typei_42359);
    }
    DeRef(_22396);
    _22396 = NOVALUE;
    return _22397;
    ;
}


object _60TypeIsNotIn(object _x_42364, object _types_42365)
{
    object _22400 = NOVALUE;
    object _22399 = NOVALUE;
    object _22398 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_42364)) {
        _1 = (object)(DBL_PTR(_x_42364)->dbl);
        DeRefDS(_x_42364);
        _x_42364 = _1;
    }

    /** c_decl.e:331		return not find(GType(x), types)*/
    _22398 = _60GType(_x_42364);
    _22399 = find_from(_22398, _types_42365, 1);
    DeRef(_22398);
    _22398 = NOVALUE;
    _22400 = (_22399 == 0);
    _22399 = NOVALUE;
    DeRefDS(_types_42365);
    return _22400;
    ;
}


object _60or_type(object _t1_42371, object _t2_42372)
{
    object _22420 = NOVALUE;
    object _22419 = NOVALUE;
    object _22418 = NOVALUE;
    object _22417 = NOVALUE;
    object _22412 = NOVALUE;
    object _22410 = NOVALUE;
    object _22405 = NOVALUE;
    object _22403 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_t1_42371)) {
        _1 = (object)(DBL_PTR(_t1_42371)->dbl);
        DeRefDS(_t1_42371);
        _t1_42371 = _1;
    }
    if (!IS_ATOM_INT(_t2_42372)) {
        _1 = (object)(DBL_PTR(_t2_42372)->dbl);
        DeRefDS(_t2_42372);
        _t2_42372 = _1;
    }

    /** c_decl.e:337		if t1 = TYPE_NULL then*/
    if (_t1_42371 != 0)
    goto L1; // [9] 22

    /** c_decl.e:338			return t2*/
    return _t2_42372;
    goto L2; // [19] 307
L1: 

    /** c_decl.e:340		elsif t2 = TYPE_NULL then*/
    if (_t2_42372 != 0)
    goto L3; // [26] 39

    /** c_decl.e:341			return t1*/
    return _t1_42371;
    goto L2; // [36] 307
L3: 

    /** c_decl.e:343		elsif t1 = TYPE_OBJECT or t2 = TYPE_OBJECT then*/
    _22403 = (_t1_42371 == 16);
    if (_22403 != 0) {
        goto L4; // [47] 62
    }
    _22405 = (_t2_42372 == 16);
    if (_22405 == 0)
    {
        DeRef(_22405);
        _22405 = NOVALUE;
        goto L5; // [58] 73
    }
    else{
        DeRef(_22405);
        _22405 = NOVALUE;
    }
L4: 

    /** c_decl.e:344			return TYPE_OBJECT*/
    DeRef(_22403);
    _22403 = NOVALUE;
    return 16;
    goto L2; // [70] 307
L5: 

    /** c_decl.e:346		elsif t1 = TYPE_SEQUENCE then*/
    if (_t1_42371 != 8)
    goto L6; // [77] 112

    /** c_decl.e:347			if t2 = TYPE_SEQUENCE then*/
    if (_t2_42372 != 8)
    goto L7; // [85] 100

    /** c_decl.e:348				return TYPE_SEQUENCE*/
    DeRef(_22403);
    _22403 = NOVALUE;
    return 8;
    goto L2; // [97] 307
L7: 

    /** c_decl.e:350				return TYPE_OBJECT*/
    DeRef(_22403);
    _22403 = NOVALUE;
    return 16;
    goto L2; // [109] 307
L6: 

    /** c_decl.e:353		elsif t2 = TYPE_SEQUENCE then*/
    if (_t2_42372 != 8)
    goto L8; // [116] 151

    /** c_decl.e:354			if t1 = TYPE_SEQUENCE then*/
    if (_t1_42371 != 8)
    goto L9; // [124] 139

    /** c_decl.e:355				return TYPE_SEQUENCE*/
    DeRef(_22403);
    _22403 = NOVALUE;
    return 8;
    goto L2; // [136] 307
L9: 

    /** c_decl.e:357				return TYPE_OBJECT*/
    DeRef(_22403);
    _22403 = NOVALUE;
    return 16;
    goto L2; // [148] 307
L8: 

    /** c_decl.e:360		elsif t1 = TYPE_ATOM or t2 = TYPE_ATOM then*/
    _22410 = (_t1_42371 == 4);
    if (_22410 != 0) {
        goto LA; // [159] 174
    }
    _22412 = (_t2_42372 == 4);
    if (_22412 == 0)
    {
        DeRef(_22412);
        _22412 = NOVALUE;
        goto LB; // [170] 185
    }
    else{
        DeRef(_22412);
        _22412 = NOVALUE;
    }
LA: 

    /** c_decl.e:361			return TYPE_ATOM*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    return 4;
    goto L2; // [182] 307
LB: 

    /** c_decl.e:363		elsif t1 = TYPE_DOUBLE then*/
    if (_t1_42371 != 2)
    goto LC; // [189] 224

    /** c_decl.e:364			if t2 = TYPE_INTEGER then*/
    if (_t2_42372 != 1)
    goto LD; // [197] 212

    /** c_decl.e:365				return TYPE_ATOM*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    return 4;
    goto L2; // [209] 307
LD: 

    /** c_decl.e:367				return TYPE_DOUBLE*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    return 2;
    goto L2; // [221] 307
LC: 

    /** c_decl.e:370		elsif t2 = TYPE_DOUBLE then*/
    if (_t2_42372 != 2)
    goto LE; // [228] 263

    /** c_decl.e:371			if t1 = TYPE_INTEGER then*/
    if (_t1_42371 != 1)
    goto LF; // [236] 251

    /** c_decl.e:372				return TYPE_ATOM*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    return 4;
    goto L2; // [248] 307
LF: 

    /** c_decl.e:374				return TYPE_DOUBLE*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    return 2;
    goto L2; // [260] 307
LE: 

    /** c_decl.e:377		elsif t1 = TYPE_INTEGER and t2 = TYPE_INTEGER then*/
    _22417 = (_t1_42371 == 1);
    if (_22417 == 0) {
        goto L10; // [271] 296
    }
    _22419 = (_t2_42372 == 1);
    if (_22419 == 0)
    {
        DeRef(_22419);
        _22419 = NOVALUE;
        goto L10; // [282] 296
    }
    else{
        DeRef(_22419);
        _22419 = NOVALUE;
    }

    /** c_decl.e:378			return TYPE_INTEGER*/
    DeRef(_22403);
    _22403 = NOVALUE;
    DeRef(_22410);
    _22410 = NOVALUE;
    DeRef(_22417);
    _22417 = NOVALUE;
    return 1;
    goto L2; // [293] 307
L10: 

    /** c_decl.e:381			InternalErr(258, {t1, t2})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _t1_42371;
    ((intptr_t *)_2)[2] = _t2_42372;
    _22420 = MAKE_SEQ(_1);
    _52InternalErr(258, _22420);
    _22420 = NOVALUE;
L2: 
    ;
}


void _60RemoveFromBB(object _s_42442)
{
    object _int_42443 = NOVALUE;
    object _22422 = NOVALUE;
    object _22421 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:388		for i = 1 to length(BB_info) do*/
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22421 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22421 = 1;
    }
    {
        object _i_42445;
        _i_42445 = 1;
L1: 
        if (_i_42445 > _22421){
            goto L2; // [10] 59
        }

        /** c_decl.e:389			int = BB_info[i][BB_VAR]*/
        _2 = (object)SEQ_PTR(_60BB_info_42085);
        _22422 = (object)*(((s1_ptr)_2)->base + _i_42445);
        _2 = (object)SEQ_PTR(_22422);
        _int_42443 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_int_42443)){
            _int_42443 = (object)DBL_PTR(_int_42443)->dbl;
        }
        _22422 = NOVALUE;

        /** c_decl.e:390			if int = s then*/
        if (_int_42443 != _s_42442)
        goto L3; // [33] 52

        /** c_decl.e:391				BB_info = remove( BB_info, int )*/
        {
            s1_ptr assign_space = SEQ_PTR(_60BB_info_42085);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_int_42443)) ? _int_42443 : (object)(DBL_PTR(_int_42443)->dbl);
            int stop = (IS_ATOM_INT(_int_42443)) ? _int_42443 : (object)(DBL_PTR(_int_42443)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_60BB_info_42085), start, &_60BB_info_42085 );
                }
                else Tail(SEQ_PTR(_60BB_info_42085), stop+1, &_60BB_info_42085);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_60BB_info_42085), start, &_60BB_info_42085);
            }
            else {
                assign_slice_seq = &assign_space;
                _60BB_info_42085 = Remove_elements(start, stop, (SEQ_PTR(_60BB_info_42085)->ref == 1));
            }
        }

        /** c_decl.e:392				return*/
        return;
L3: 

        /** c_decl.e:394		end for*/
        _i_42445 = _i_42445 + 1;
        goto L1; // [54] 17
L2: 
        ;
    }

    /** c_decl.e:395	end procedure*/
    return;
    ;
}


void _60SetBBType(object _s_42463, object _t_42464, object _val_42465, object _etype_42466, object _has_delete_42467)
{
    object _found_42468 = NOVALUE;
    object _i_42469 = NOVALUE;
    object _tn_42470 = NOVALUE;
    object _int_42471 = NOVALUE;
    object _sym_42472 = NOVALUE;
    object _mode_42477 = NOVALUE;
    object _gtype_42492 = NOVALUE;
    object _new_type_42529 = NOVALUE;
    object _bbsym_42552 = NOVALUE;
    object _bbi_42688 = NOVALUE;
    object _22541 = NOVALUE;
    object _22540 = NOVALUE;
    object _22539 = NOVALUE;
    object _22537 = NOVALUE;
    object _22536 = NOVALUE;
    object _22535 = NOVALUE;
    object _22533 = NOVALUE;
    object _22532 = NOVALUE;
    object _22530 = NOVALUE;
    object _22528 = NOVALUE;
    object _22527 = NOVALUE;
    object _22525 = NOVALUE;
    object _22523 = NOVALUE;
    object _22522 = NOVALUE;
    object _22521 = NOVALUE;
    object _22520 = NOVALUE;
    object _22519 = NOVALUE;
    object _22518 = NOVALUE;
    object _22517 = NOVALUE;
    object _22516 = NOVALUE;
    object _22515 = NOVALUE;
    object _22512 = NOVALUE;
    object _22508 = NOVALUE;
    object _22503 = NOVALUE;
    object _22501 = NOVALUE;
    object _22500 = NOVALUE;
    object _22499 = NOVALUE;
    object _22497 = NOVALUE;
    object _22495 = NOVALUE;
    object _22494 = NOVALUE;
    object _22493 = NOVALUE;
    object _22491 = NOVALUE;
    object _22490 = NOVALUE;
    object _22488 = NOVALUE;
    object _22487 = NOVALUE;
    object _22486 = NOVALUE;
    object _22484 = NOVALUE;
    object _22483 = NOVALUE;
    object _22480 = NOVALUE;
    object _22479 = NOVALUE;
    object _22478 = NOVALUE;
    object _22476 = NOVALUE;
    object _22474 = NOVALUE;
    object _22473 = NOVALUE;
    object _22471 = NOVALUE;
    object _22470 = NOVALUE;
    object _22469 = NOVALUE;
    object _22467 = NOVALUE;
    object _22466 = NOVALUE;
    object _22455 = NOVALUE;
    object _22453 = NOVALUE;
    object _22450 = NOVALUE;
    object _22449 = NOVALUE;
    object _22446 = NOVALUE;
    object _22445 = NOVALUE;
    object _22444 = NOVALUE;
    object _22442 = NOVALUE;
    object _22441 = NOVALUE;
    object _22440 = NOVALUE;
    object _22438 = NOVALUE;
    object _22437 = NOVALUE;
    object _22435 = NOVALUE;
    object _22432 = NOVALUE;
    object _22430 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_s_42463)) {
        _1 = (object)(DBL_PTR(_s_42463)->dbl);
        DeRefDS(_s_42463);
        _s_42463 = _1;
    }
    if (!IS_ATOM_INT(_t_42464)) {
        _1 = (object)(DBL_PTR(_t_42464)->dbl);
        DeRefDS(_t_42464);
        _t_42464 = _1;
    }
    if (!IS_ATOM_INT(_etype_42466)) {
        _1 = (object)(DBL_PTR(_etype_42466)->dbl);
        DeRefDS(_etype_42466);
        _etype_42466 = _1;
    }
    if (!IS_ATOM_INT(_has_delete_42467)) {
        _1 = (object)(DBL_PTR(_has_delete_42467)->dbl);
        DeRefDS(_has_delete_42467);
        _has_delete_42467 = _1;
    }

    /** c_decl.e:416		if has_delete then*/
    if (_has_delete_42467 == 0)
    {
        goto L1; // [13] 27
    }
    else{
    }

    /** c_decl.e:417			p_has_delete = 1*/
    _60p_has_delete_42282 = 1;

    /** c_decl.e:418			g_has_delete = 1*/
    _60g_has_delete_42281 = 1;
L1: 

    /** c_decl.e:421		sym = SymTab[s]*/
    DeRef(_sym_42472);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _sym_42472 = (object)*(((s1_ptr)_2)->base + _s_42463);
    Ref(_sym_42472);

    /** c_decl.e:422		SymTab[s] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42463);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:424		integer mode = sym[S_MODE]*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _mode_42477 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42477))
    _mode_42477 = (object)DBL_PTR(_mode_42477)->dbl;

    /** c_decl.e:425		if mode = M_NORMAL or mode = M_TEMP  then*/
    _22430 = (_mode_42477 == 1);
    if (_22430 != 0) {
        goto L2; // [61] 76
    }
    _22432 = (_mode_42477 == 3);
    if (_22432 == 0)
    {
        DeRef(_22432);
        _22432 = NOVALUE;
        goto L3; // [72] 1167
    }
    else{
        DeRef(_22432);
        _22432 = NOVALUE;
    }
L2: 

    /** c_decl.e:427			found = FALSE*/
    _found_42468 = _9FALSE_442;

    /** c_decl.e:428			if mode = M_TEMP then*/
    if (_mode_42477 != 3)
    goto L4; // [89] 465

    /** c_decl.e:429				sym[S_GTYPE] = t*/
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42464;
    DeRef(_1);

    /** c_decl.e:430				sym[S_SEQ_ELEM] = etype*/
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42466;
    DeRef(_1);

    /** c_decl.e:431				integer gtype = sym[S_GTYPE]*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _gtype_42492 = (object)*(((s1_ptr)_2)->base + 36);
    if (!IS_ATOM_INT(_gtype_42492))
    _gtype_42492 = (object)DBL_PTR(_gtype_42492)->dbl;

    /** c_decl.e:432				if gtype = TYPE_OBJECT*/
    _22435 = (_gtype_42492 == 16);
    if (_22435 != 0) {
        goto L5; // [125] 140
    }
    _22437 = (_gtype_42492 == 8);
    if (_22437 == 0)
    {
        DeRef(_22437);
        _22437 = NOVALUE;
        goto L6; // [136] 213
    }
    else{
        DeRef(_22437);
        _22437 = NOVALUE;
    }
L5: 

    /** c_decl.e:435					if val[MIN] < 0 then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22438 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(GREATEREQ, _22438, 0)){
        _22438 = NOVALUE;
        goto L7; // [148] 165
    }
    _22438 = NOVALUE;

    /** c_decl.e:436						sym[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L8; // [162] 180
L7: 

    /** c_decl.e:438						sym[S_SEQ_LEN] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22440 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22440);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22440;
    if( _1 != _22440 ){
        DeRef(_1);
    }
    _22440 = NOVALUE;
L8: 

    /** c_decl.e:440					sym[S_OBJ] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** c_decl.e:442					sym[S_OBJ_MIN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** c_decl.e:443					sym[S_OBJ_MAX] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L9; // [210] 252
L6: 

    /** c_decl.e:445					sym[S_OBJ_MIN] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22441 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22441);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22441;
    if( _1 != _22441 ){
        DeRef(_1);
    }
    _22441 = NOVALUE;

    /** c_decl.e:446					sym[S_OBJ_MAX] = val[MAX]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22442 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_22442);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22442;
    if( _1 != _22442 ){
        DeRef(_1);
    }
    _22442 = NOVALUE;

    /** c_decl.e:447					sym[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
L9: 

    /** c_decl.e:449				if not Initializing then*/
    if (_39Initializing_16895 != 0)
    goto LA; // [256] 326

    /** c_decl.e:450					integer new_type = or_type(temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW], t)*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22444 = (object)*(((s1_ptr)_2)->base + 34);
    _2 = (object)SEQ_PTR(_39temp_name_type_16897);
    if (!IS_ATOM_INT(_22444)){
        _22445 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22444)->dbl));
    }
    else{
        _22445 = (object)*(((s1_ptr)_2)->base + _22444);
    }
    _2 = (object)SEQ_PTR(_22445);
    _22446 = (object)*(((s1_ptr)_2)->base + 2);
    _22445 = NOVALUE;
    Ref(_22446);
    _new_type_42529 = _60or_type(_22446, _t_42464);
    _22446 = NOVALUE;
    if (!IS_ATOM_INT(_new_type_42529)) {
        _1 = (object)(DBL_PTR(_new_type_42529)->dbl);
        DeRefDS(_new_type_42529);
        _new_type_42529 = _1;
    }

    /** c_decl.e:451					if new_type = TYPE_NULL then*/
    if (_new_type_42529 != 0)
    goto LB; // [290] 304

    /** c_decl.e:452						new_type = TYPE_OBJECT*/
    _new_type_42529 = 16;
LB: 

    /** c_decl.e:454					temp_name_type[sym[S_TEMP_NAME]][T_GTYPE_NEW] = new_type*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22449 = (object)*(((s1_ptr)_2)->base + 34);
    _2 = (object)SEQ_PTR(_39temp_name_type_16897);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39temp_name_type_16897 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_22449))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_22449)->dbl));
    else
    _3 = (object)(_22449 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_type_42529;
    DeRef(_1);
    _22450 = NOVALUE;
LA: 

    /** c_decl.e:458				tn = sym[S_TEMP_NAME]*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _tn_42470 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_tn_42470))
    _tn_42470 = (object)DBL_PTR(_tn_42470)->dbl;

    /** c_decl.e:459				i = 1*/
    _i_42469 = 1;

    /** c_decl.e:460				while i <= length(BB_info) do*/
LC: 
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22453 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22453 = 1;
    }
    if (_i_42469 > _22453)
    goto LD; // [351] 460

    /** c_decl.e:461					sequence bbsym*/

    /** c_decl.e:462					int = BB_info[i][BB_VAR]*/
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    _22455 = (object)*(((s1_ptr)_2)->base + _i_42469);
    _2 = (object)SEQ_PTR(_22455);
    _int_42471 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42471)){
        _int_42471 = (object)DBL_PTR(_int_42471)->dbl;
    }
    _22455 = NOVALUE;

    /** c_decl.e:463					if int = s then*/
    if (_int_42471 != _s_42463)
    goto LE; // [373] 387

    /** c_decl.e:464						bbsym = sym*/
    RefDS(_sym_42472);
    DeRef(_bbsym_42552);
    _bbsym_42552 = _sym_42472;
    goto LF; // [384] 398
LE: 

    /** c_decl.e:466						bbsym = SymTab[int]*/
    DeRef(_bbsym_42552);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _bbsym_42552 = (object)*(((s1_ptr)_2)->base + _int_42471);
    Ref(_bbsym_42552);
LF: 

    /** c_decl.e:468					int = bbsym[S_MODE]*/
    _2 = (object)SEQ_PTR(_bbsym_42552);
    _int_42471 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_int_42471))
    _int_42471 = (object)DBL_PTR(_int_42471)->dbl;

    /** c_decl.e:469					if int = M_TEMP then*/
    if (_int_42471 != 3)
    goto L10; // [412] 447

    /** c_decl.e:470						int = bbsym[S_TEMP_NAME]*/
    _2 = (object)SEQ_PTR(_bbsym_42552);
    _int_42471 = (object)*(((s1_ptr)_2)->base + 34);
    if (!IS_ATOM_INT(_int_42471))
    _int_42471 = (object)DBL_PTR(_int_42471)->dbl;

    /** c_decl.e:471						if int = tn then*/
    if (_int_42471 != _tn_42470)
    goto L11; // [426] 446

    /** c_decl.e:472							found = TRUE*/
    _found_42468 = _9TRUE_444;

    /** c_decl.e:473							exit*/
    DeRefDS(_bbsym_42552);
    _bbsym_42552 = NOVALUE;
    goto LD; // [443] 460
L11: 
L10: 

    /** c_decl.e:476					i += 1*/
    _i_42469 = _i_42469 + 1;
    DeRef(_bbsym_42552);
    _bbsym_42552 = NOVALUE;

    /** c_decl.e:477				end while*/
    goto LC; // [457] 346
LD: 
    goto L12; // [462] 889
L4: 

    /** c_decl.e:479				if t != TYPE_NULL then*/
    if (_t_42464 == 0)
    goto L13; // [469] 824

    /** c_decl.e:480					if not Initializing then*/
    if (_39Initializing_16895 != 0)
    goto L14; // [477] 500

    /** c_decl.e:481						sym[S_GTYPE_NEW] = or_type(sym[S_GTYPE_NEW], t)*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22466 = (object)*(((s1_ptr)_2)->base + 38);
    Ref(_22466);
    _22467 = _60or_type(_22466, _t_42464);
    _22466 = NOVALUE;
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22467;
    if( _1 != _22467 ){
        DeRef(_1);
    }
    _22467 = NOVALUE;
L14: 

    /** c_decl.e:484					if t = TYPE_SEQUENCE then*/
    if (_t_42464 != 8)
    goto L15; // [504] 633

    /** c_decl.e:485						sym[S_SEQ_ELEM_NEW] =*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22469 = (object)*(((s1_ptr)_2)->base + 40);
    Ref(_22469);
    _22470 = _60or_type(_22469, _etype_42466);
    _22469 = NOVALUE;
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22470;
    if( _1 != _22470 ){
        DeRef(_1);
    }
    _22470 = NOVALUE;

    /** c_decl.e:488						if val[MIN] != -1 then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22471 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _22471, -1)){
        _22471 = NOVALUE;
        goto L16; // [535] 823
    }
    _22471 = NOVALUE;

    /** c_decl.e:489							if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22473 = (object)*(((s1_ptr)_2)->base + 39);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22474 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22474 = - _39NOVALUE_16670;
        }
    }
    else {
        _22474 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (binary_op_a(NOTEQ, _22473, _22474)){
        _22473 = NOVALUE;
        DeRef(_22474);
        _22474 = NOVALUE;
        goto L17; // [552] 599
    }
    _22473 = NOVALUE;
    DeRef(_22474);
    _22474 = NOVALUE;

    /** c_decl.e:490								if val[MIN] < 0 then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22476 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(GREATEREQ, _22476, 0)){
        _22476 = NOVALUE;
        goto L18; // [564] 581
    }
    _22476 = NOVALUE;

    /** c_decl.e:491									sym[S_SEQ_LEN_NEW] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L16; // [578] 823
L18: 

    /** c_decl.e:493									sym[S_SEQ_LEN_NEW] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22478 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22478);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22478;
    if( _1 != _22478 ){
        DeRef(_1);
    }
    _22478 = NOVALUE;
    goto L16; // [596] 823
L17: 

    /** c_decl.e:495							elsif val[MIN] != sym[S_SEQ_LEN_NEW] then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22479 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_sym_42472);
    _22480 = (object)*(((s1_ptr)_2)->base + 39);
    if (binary_op_a(EQUALS, _22479, _22480)){
        _22479 = NOVALUE;
        _22480 = NOVALUE;
        goto L16; // [613] 823
    }
    _22479 = NOVALUE;
    _22480 = NOVALUE;

    /** c_decl.e:496								sym[S_SEQ_LEN_NEW] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L16; // [630] 823
L15: 

    /** c_decl.e:500					elsif t = TYPE_INTEGER then*/
    if (_t_42464 != 1)
    goto L19; // [637] 774

    /** c_decl.e:502						if sym[S_OBJ_MIN_NEW] = -NOVALUE then*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22483 = (object)*(((s1_ptr)_2)->base + 41);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22484 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22484 = - _39NOVALUE_16670;
        }
    }
    else {
        _22484 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (binary_op_a(NOTEQ, _22483, _22484)){
        _22483 = NOVALUE;
        DeRef(_22484);
        _22484 = NOVALUE;
        goto L1A; // [654] 689
    }
    _22483 = NOVALUE;
    DeRef(_22484);
    _22484 = NOVALUE;

    /** c_decl.e:504							sym[S_OBJ_MIN_NEW] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22486 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22486);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22486;
    if( _1 != _22486 ){
        DeRef(_1);
    }
    _22486 = NOVALUE;

    /** c_decl.e:505							sym[S_OBJ_MAX_NEW] = val[MAX]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22487 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_22487);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22487;
    if( _1 != _22487 ){
        DeRef(_1);
    }
    _22487 = NOVALUE;
    goto L16; // [686] 823
L1A: 

    /** c_decl.e:507						elsif sym[S_OBJ_MIN_NEW] != NOVALUE then*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22488 = (object)*(((s1_ptr)_2)->base + 41);
    if (binary_op_a(EQUALS, _22488, _39NOVALUE_16670)){
        _22488 = NOVALUE;
        goto L16; // [699] 823
    }
    _22488 = NOVALUE;

    /** c_decl.e:509							if val[MIN] < sym[S_OBJ_MIN_NEW] then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22490 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_sym_42472);
    _22491 = (object)*(((s1_ptr)_2)->base + 41);
    if (binary_op_a(GREATEREQ, _22490, _22491)){
        _22490 = NOVALUE;
        _22491 = NOVALUE;
        goto L1B; // [717] 736
    }
    _22490 = NOVALUE;
    _22491 = NOVALUE;

    /** c_decl.e:510								sym[S_OBJ_MIN_NEW] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22493 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22493);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22493;
    if( _1 != _22493 ){
        DeRef(_1);
    }
    _22493 = NOVALUE;
L1B: 

    /** c_decl.e:512							if val[MAX] > sym[S_OBJ_MAX_NEW] then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22494 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_sym_42472);
    _22495 = (object)*(((s1_ptr)_2)->base + 42);
    if (binary_op_a(LESSEQ, _22494, _22495)){
        _22494 = NOVALUE;
        _22495 = NOVALUE;
        goto L16; // [750] 823
    }
    _22494 = NOVALUE;
    _22495 = NOVALUE;

    /** c_decl.e:513								sym[S_OBJ_MAX_NEW] = val[MAX]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22497 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_22497);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22497;
    if( _1 != _22497 ){
        DeRef(_1);
    }
    _22497 = NOVALUE;
    goto L16; // [771] 823
L19: 

    /** c_decl.e:518						sym[S_OBJ_MIN_NEW] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** c_decl.e:519						if t = TYPE_OBJECT then*/
    if (_t_42464 != 16)
    goto L1C; // [788] 822

    /** c_decl.e:522							sym[S_SEQ_ELEM_NEW] =*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22499 = (object)*(((s1_ptr)_2)->base + 40);
    Ref(_22499);
    _22500 = _60or_type(_22499, _etype_42466);
    _22499 = NOVALUE;
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22500;
    if( _1 != _22500 ){
        DeRef(_1);
    }
    _22500 = NOVALUE;

    /** c_decl.e:524							sym[S_SEQ_LEN_NEW] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
L1C: 
L16: 
L13: 

    /** c_decl.e:529				i = 1*/
    _i_42469 = 1;

    /** c_decl.e:530				while i <= length(BB_info) do*/
L1D: 
    if (IS_SEQUENCE(_60BB_info_42085)){
            _22501 = SEQ_PTR(_60BB_info_42085)->length;
    }
    else {
        _22501 = 1;
    }
    if (_i_42469 > _22501)
    goto L1E; // [839] 888

    /** c_decl.e:531					int = BB_info[i][BB_VAR]*/
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    _22503 = (object)*(((s1_ptr)_2)->base + _i_42469);
    _2 = (object)SEQ_PTR(_22503);
    _int_42471 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_int_42471)){
        _int_42471 = (object)DBL_PTR(_int_42471)->dbl;
    }
    _22503 = NOVALUE;

    /** c_decl.e:532					if int = s then*/
    if (_int_42471 != _s_42463)
    goto L1F; // [859] 877

    /** c_decl.e:533						found = TRUE*/
    _found_42468 = _9TRUE_444;

    /** c_decl.e:534						exit*/
    goto L1E; // [874] 888
L1F: 

    /** c_decl.e:536					i += 1*/
    _i_42469 = _i_42469 + 1;

    /** c_decl.e:537				end while*/
    goto L1D; // [885] 834
L1E: 
L12: 

    /** c_decl.e:541			if not found then*/
    if (_found_42468 != 0)
    goto L20; // [891] 907

    /** c_decl.e:543				BB_info = append(BB_info, repeat(0, 6))*/
    _22508 = Repeat(0, 6);
    RefDS(_22508);
    Append(&_60BB_info_42085, _60BB_info_42085, _22508);
    DeRefDS(_22508);
    _22508 = NOVALUE;
L20: 

    /** c_decl.e:546			if t = TYPE_NULL then*/
    if (_t_42464 != 0)
    goto L21; // [911] 949

    /** c_decl.e:547				if not found then*/
    if (_found_42468 != 0)
    goto L22; // [917] 1308

    /** c_decl.e:549					BB_info[i] = dummy_bb*/
    RefDS(_60dummy_bb_42452);
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _60BB_info_42085 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42469);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _60dummy_bb_42452;
    DeRef(_1);

    /** c_decl.e:550					BB_info[i][BB_VAR] = s*/
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _60BB_info_42085 = MAKE_SEQ(_2);
    }
    _3 = (object)(_i_42469 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42463;
    DeRef(_1);
    _22512 = NOVALUE;
    goto L22; // [946] 1308
L21: 

    /** c_decl.e:554				sequence bbi = BB_info[i]*/
    DeRef(_bbi_42688);
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    _bbi_42688 = (object)*(((s1_ptr)_2)->base + _i_42469);
    Ref(_bbi_42688);

    /** c_decl.e:555				BB_info[i] = 0*/
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _60BB_info_42085 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42469);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:556				bbi[BB_VAR] = s*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_42463;
    DeRef(_1);

    /** c_decl.e:557				bbi[BB_TYPE] = t*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42464;
    DeRef(_1);

    /** c_decl.e:558				bbi[BB_DELETE] = has_delete*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 6);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42467;
    DeRef(_1);

    /** c_decl.e:560				if t = TYPE_SEQUENCE and val[MIN] = -1 then*/
    _22515 = (_t_42464 == 8);
    if (_22515 == 0) {
        goto L23; // [995] 1077
    }
    _2 = (object)SEQ_PTR(_val_42465);
    _22517 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_22517)) {
        _22518 = (_22517 == -1);
    }
    else {
        _22518 = binary_op(EQUALS, _22517, -1);
    }
    _22517 = NOVALUE;
    if (_22518 == 0) {
        DeRef(_22518);
        _22518 = NOVALUE;
        goto L23; // [1010] 1077
    }
    else {
        if (!IS_ATOM_INT(_22518) && DBL_PTR(_22518)->dbl == 0.0){
            DeRef(_22518);
            _22518 = NOVALUE;
            goto L23; // [1010] 1077
        }
        DeRef(_22518);
        _22518 = NOVALUE;
    }
    DeRef(_22518);
    _22518 = NOVALUE;

    /** c_decl.e:562					if found and bbi[BB_ELEM] != TYPE_NULL then*/
    if (_found_42468 == 0) {
        goto L24; // [1015] 1051
    }
    _2 = (object)SEQ_PTR(_bbi_42688);
    _22520 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_22520)) {
        _22521 = (_22520 != 0);
    }
    else {
        _22521 = binary_op(NOTEQ, _22520, 0);
    }
    _22520 = NOVALUE;
    if (_22521 == 0) {
        DeRef(_22521);
        _22521 = NOVALUE;
        goto L24; // [1030] 1051
    }
    else {
        if (!IS_ATOM_INT(_22521) && DBL_PTR(_22521)->dbl == 0.0){
            DeRef(_22521);
            _22521 = NOVALUE;
            goto L24; // [1030] 1051
        }
        DeRef(_22521);
        _22521 = NOVALUE;
    }
    DeRef(_22521);
    _22521 = NOVALUE;

    /** c_decl.e:564						bbi[BB_ELEM] = or_type(bbi[BB_ELEM], etype)*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    _22522 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_22522);
    _22523 = _60or_type(_22522, _etype_42466);
    _22522 = NOVALUE;
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22523;
    if( _1 != _22523 ){
        DeRef(_1);
    }
    _22523 = NOVALUE;
    goto L25; // [1048] 1060
L24: 

    /** c_decl.e:566						bbi[BB_ELEM] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
L25: 

    /** c_decl.e:568					if not found then*/
    if (_found_42468 != 0)
    goto L26; // [1062] 1153

    /** c_decl.e:569						bbi[BB_SEQLEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L26; // [1074] 1153
L23: 

    /** c_decl.e:572					bbi[BB_ELEM] = etype*/
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42466;
    DeRef(_1);

    /** c_decl.e:573					if t = TYPE_SEQUENCE or t = TYPE_OBJECT then*/
    _22525 = (_t_42464 == 8);
    if (_22525 != 0) {
        goto L27; // [1091] 1106
    }
    _22527 = (_t_42464 == 16);
    if (_22527 == 0)
    {
        DeRef(_22527);
        _22527 = NOVALUE;
        goto L28; // [1102] 1145
    }
    else{
        DeRef(_22527);
        _22527 = NOVALUE;
    }
L27: 

    /** c_decl.e:574						if val[MIN] < 0 then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22528 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(GREATEREQ, _22528, 0)){
        _22528 = NOVALUE;
        goto L29; // [1114] 1129
    }
    _22528 = NOVALUE;

    /** c_decl.e:575							bbi[BB_SEQLEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L2A; // [1126] 1152
L29: 

    /** c_decl.e:577							bbi[BB_SEQLEN] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22530 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22530);
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22530;
    if( _1 != _22530 ){
        DeRef(_1);
    }
    _22530 = NOVALUE;
    goto L2A; // [1142] 1152
L28: 

    /** c_decl.e:580						bbi[BB_OBJ] = val*/
    RefDS(_val_42465);
    _2 = (object)SEQ_PTR(_bbi_42688);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _bbi_42688 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_42465;
    DeRef(_1);
L2A: 
L26: 

    /** c_decl.e:583				BB_info[i] = bbi*/
    RefDS(_bbi_42688);
    _2 = (object)SEQ_PTR(_60BB_info_42085);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _60BB_info_42085 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _i_42469);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _bbi_42688;
    DeRef(_1);
    DeRefDS(_bbi_42688);
    _bbi_42688 = NOVALUE;
    goto L22; // [1164] 1308
L3: 

    /** c_decl.e:586		elsif mode = M_CONSTANT then*/
    if (_mode_42477 != 2)
    goto L2B; // [1171] 1307

    /** c_decl.e:587			sym[S_GTYPE] = t*/
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _t_42464;
    DeRef(_1);

    /** c_decl.e:588			sym[S_SEQ_ELEM] = etype*/
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _etype_42466;
    DeRef(_1);

    /** c_decl.e:589			if sym[S_GTYPE] = TYPE_SEQUENCE or*/
    _2 = (object)SEQ_PTR(_sym_42472);
    _22532 = (object)*(((s1_ptr)_2)->base + 36);
    if (IS_ATOM_INT(_22532)) {
        _22533 = (_22532 == 8);
    }
    else {
        _22533 = binary_op(EQUALS, _22532, 8);
    }
    _22532 = NOVALUE;
    if (IS_ATOM_INT(_22533)) {
        if (_22533 != 0) {
            goto L2C; // [1205] 1226
        }
    }
    else {
        if (DBL_PTR(_22533)->dbl != 0.0) {
            goto L2C; // [1205] 1226
        }
    }
    _2 = (object)SEQ_PTR(_sym_42472);
    _22535 = (object)*(((s1_ptr)_2)->base + 36);
    if (IS_ATOM_INT(_22535)) {
        _22536 = (_22535 == 16);
    }
    else {
        _22536 = binary_op(EQUALS, _22535, 16);
    }
    _22535 = NOVALUE;
    if (_22536 == 0) {
        DeRef(_22536);
        _22536 = NOVALUE;
        goto L2D; // [1222] 1269
    }
    else {
        if (!IS_ATOM_INT(_22536) && DBL_PTR(_22536)->dbl == 0.0){
            DeRef(_22536);
            _22536 = NOVALUE;
            goto L2D; // [1222] 1269
        }
        DeRef(_22536);
        _22536 = NOVALUE;
    }
    DeRef(_22536);
    _22536 = NOVALUE;
L2C: 

    /** c_decl.e:591				if val[MIN] < 0 then*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22537 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(GREATEREQ, _22537, 0)){
        _22537 = NOVALUE;
        goto L2E; // [1234] 1251
    }
    _22537 = NOVALUE;

    /** c_decl.e:592					sym[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L2F; // [1248] 1298
L2E: 

    /** c_decl.e:594					sym[S_SEQ_LEN] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22539 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22539);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22539;
    if( _1 != _22539 ){
        DeRef(_1);
    }
    _22539 = NOVALUE;
    goto L2F; // [1266] 1298
L2D: 

    /** c_decl.e:597				sym[S_OBJ_MIN] = val[MIN]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22540 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22540);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22540;
    if( _1 != _22540 ){
        DeRef(_1);
    }
    _22540 = NOVALUE;

    /** c_decl.e:598				sym[S_OBJ_MAX] = val[MAX]*/
    _2 = (object)SEQ_PTR(_val_42465);
    _22541 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_22541);
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22541;
    if( _1 != _22541 ){
        DeRef(_1);
    }
    _22541 = NOVALUE;
L2F: 

    /** c_decl.e:600			sym[S_HAS_DELETE] = has_delete*/
    _2 = (object)SEQ_PTR(_sym_42472);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_42472 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 54);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _has_delete_42467;
    DeRef(_1);
L2B: 
L22: 

    /** c_decl.e:603		SymTab[s] = sym*/
    RefDS(_sym_42472);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_42463);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_42472;
    DeRef(_1);

    /** c_decl.e:605	end procedure*/
    DeRefDS(_val_42465);
    DeRefDS(_sym_42472);
    DeRef(_22525);
    _22525 = NOVALUE;
    DeRef(_22435);
    _22435 = NOVALUE;
    _22449 = NOVALUE;
    DeRef(_22533);
    _22533 = NOVALUE;
    DeRef(_22515);
    _22515 = NOVALUE;
    _22444 = NOVALUE;
    DeRef(_22430);
    _22430 = NOVALUE;
    return;
    ;
}


void _60CName(object _s_42762)
{
    object _v_42763 = NOVALUE;
    object _mode_42765 = NOVALUE;
    object _22606 = NOVALUE;
    object _22605 = NOVALUE;
    object _22603 = NOVALUE;
    object _22602 = NOVALUE;
    object _22601 = NOVALUE;
    object _22600 = NOVALUE;
    object _22599 = NOVALUE;
    object _22598 = NOVALUE;
    object _22597 = NOVALUE;
    object _22596 = NOVALUE;
    object _22594 = NOVALUE;
    object _22592 = NOVALUE;
    object _22591 = NOVALUE;
    object _22590 = NOVALUE;
    object _22589 = NOVALUE;
    object _22588 = NOVALUE;
    object _22587 = NOVALUE;
    object _22585 = NOVALUE;
    object _22584 = NOVALUE;
    object _22583 = NOVALUE;
    object _22582 = NOVALUE;
    object _22581 = NOVALUE;
    object _22579 = NOVALUE;
    object _22578 = NOVALUE;
    object _22577 = NOVALUE;
    object _22576 = NOVALUE;
    object _22575 = NOVALUE;
    object _22574 = NOVALUE;
    object _22572 = NOVALUE;
    object _22571 = NOVALUE;
    object _22569 = NOVALUE;
    object _22568 = NOVALUE;
    object _22567 = NOVALUE;
    object _22566 = NOVALUE;
    object _22565 = NOVALUE;
    object _22564 = NOVALUE;
    object _22563 = NOVALUE;
    object _22562 = NOVALUE;
    object _22561 = NOVALUE;
    object _22560 = NOVALUE;
    object _22559 = NOVALUE;
    object _22558 = NOVALUE;
    object _22556 = NOVALUE;
    object _22555 = NOVALUE;
    object _22551 = NOVALUE;
    object _22550 = NOVALUE;
    object _22549 = NOVALUE;
    object _22548 = NOVALUE;
    object _22547 = NOVALUE;
    object _22546 = NOVALUE;
    object _22543 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_s_42762)) {
        _1 = (object)(DBL_PTR(_s_42762)->dbl);
        DeRefDS(_s_42762);
        _s_42762 = _1;
    }

    /** c_decl.e:612		v = ObjValue(s)*/
    _0 = _v_42763;
    _v_42763 = _60ObjValue(_s_42762);
    DeRef(_0);

    /** c_decl.e:613		integer mode = SymTab[s][S_MODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22543 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22543);
    _mode_42765 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_42765)){
        _mode_42765 = (object)DBL_PTR(_mode_42765)->dbl;
    }
    _22543 = NOVALUE;

    /** c_decl.e:614	 	if mode = M_NORMAL then*/
    if (_mode_42765 != 1)
    goto L1; // [29] 254

    /** c_decl.e:617			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    _22546 = (_60LeftSym_42086 == _9FALSE_442);
    if (_22546 == 0) {
        _22547 = 0;
        goto L2; // [43] 61
    }
    _22548 = _60GType(_s_42762);
    if (IS_ATOM_INT(_22548)) {
        _22549 = (_22548 == 1);
    }
    else {
        _22549 = binary_op(EQUALS, _22548, 1);
    }
    DeRef(_22548);
    _22548 = NOVALUE;
    if (IS_ATOM_INT(_22549))
    _22547 = (_22549 != 0);
    else
    _22547 = DBL_PTR(_22549)->dbl != 0.0;
L2: 
    if (_22547 == 0) {
        goto L3; // [61] 98
    }
    if (IS_ATOM_INT(_v_42763) && IS_ATOM_INT(_39NOVALUE_16670)) {
        _22551 = (_v_42763 != _39NOVALUE_16670);
    }
    else {
        _22551 = binary_op(NOTEQ, _v_42763, _39NOVALUE_16670);
    }
    if (_22551 == 0) {
        DeRef(_22551);
        _22551 = NOVALUE;
        goto L3; // [72] 98
    }
    else {
        if (!IS_ATOM_INT(_22551) && DBL_PTR(_22551)->dbl == 0.0){
            DeRef(_22551);
            _22551 = NOVALUE;
            goto L3; // [72] 98
        }
        DeRef(_22551);
        _22551 = NOVALUE;
    }
    DeRef(_22551);
    _22551 = NOVALUE;

    /** c_decl.e:618				c_printf("%d", v)*/
    RefDS(_22552);
    Ref(_v_42763);
    _57c_printf(_22552, _v_42763);

    /** c_decl.e:619				if TARGET_SIZEOF_POINTER = 8 then*/
    goto L4; // [95] 180
L3: 

    /** c_decl.e:623				if SymTab[s][S_SCOPE] > SC_PRIVATE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22555 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22555);
    _22556 = (object)*(((s1_ptr)_2)->base + 4);
    _22555 = NOVALUE;
    if (binary_op_a(LESSEQ, _22556, 3)){
        _22556 = NOVALUE;
        goto L5; // [114] 156
    }
    _22556 = NOVALUE;

    /** c_decl.e:624					c_printf("_%d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22558 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22558);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22559 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22559 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22558 = NOVALUE;
    RefDS(_22051);
    Ref(_22559);
    _57c_printf(_22051, _22559);
    _22559 = NOVALUE;

    /** c_decl.e:625					c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22560 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22560);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22561 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22561 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22560 = NOVALUE;
    Ref(_22561);
    _57c_puts(_22561);
    _22561 = NOVALUE;
    goto L6; // [153] 179
L5: 

    /** c_decl.e:627					c_puts("_")*/
    RefDS(_22000);
    _57c_puts(_22000);

    /** c_decl.e:628					c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22562 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22562);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22563 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22563 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22562 = NOVALUE;
    Ref(_22563);
    _57c_puts(_22563);
    _22563 = NOVALUE;
L6: 
L4: 

    /** c_decl.e:631			if s != CurrentSub and SymTab[s][S_NREFS] < 2 then*/
    _22564 = (_s_42762 != _39CurrentSub_16823);
    if (_22564 == 0) {
        goto L7; // [188] 236
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22566 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22566);
    _22567 = (object)*(((s1_ptr)_2)->base + 12);
    _22566 = NOVALUE;
    if (IS_ATOM_INT(_22567)) {
        _22568 = (_22567 < 2);
    }
    else {
        _22568 = binary_op(LESS, _22567, 2);
    }
    _22567 = NOVALUE;
    if (_22568 == 0) {
        DeRef(_22568);
        _22568 = NOVALUE;
        goto L7; // [209] 236
    }
    else {
        if (!IS_ATOM_INT(_22568) && DBL_PTR(_22568)->dbl == 0.0){
            DeRef(_22568);
            _22568 = NOVALUE;
            goto L7; // [209] 236
        }
        DeRef(_22568);
        _22568 = NOVALUE;
    }
    DeRef(_22568);
    _22568 = NOVALUE;

    /** c_decl.e:632				SymTab[s][S_NREFS] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42762 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22571 = (object)*(((s1_ptr)_2)->base + 12);
    _22569 = NOVALUE;
    if (IS_ATOM_INT(_22571)) {
        _22572 = _22571 + 1;
        if (_22572 > MAXINT){
            _22572 = NewDouble((eudouble)_22572);
        }
    }
    else
    _22572 = binary_op(PLUS, 1, _22571);
    _22571 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22572;
    if( _1 != _22572 ){
        DeRef(_1);
    }
    _22572 = NOVALUE;
    _22569 = NOVALUE;
L7: 

    /** c_decl.e:634			SetBBType(s, TYPE_NULL, novalue, TYPE_OBJECT, 0) -- record that this var was referenced in this BB*/
    RefDS(_57novalue_46109);
    _60SetBBType(_s_42762, 0, _57novalue_46109, 16, 0);
    goto L8; // [251] 533
L1: 

    /** c_decl.e:636	 	elsif mode = M_CONSTANT then*/
    if (_mode_42765 != 2)
    goto L9; // [258] 448

    /** c_decl.e:638			if (is_integer( sym_obj( s ) ) and SymTab[s][S_GTYPE] != TYPE_DOUBLE ) or (LeftSym = FALSE and TypeIs(s, TYPE_INTEGER) and v != NOVALUE) then*/
    _22574 = _56sym_obj(_s_42762);
    _22575 = _39is_integer(_22574);
    _22574 = NOVALUE;
    if (IS_ATOM_INT(_22575)) {
        if (_22575 == 0) {
            DeRef(_22576);
            _22576 = 0;
            goto LA; // [272] 298
        }
    }
    else {
        if (DBL_PTR(_22575)->dbl == 0.0) {
            DeRef(_22576);
            _22576 = 0;
            goto LA; // [272] 298
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22577 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22577);
    _22578 = (object)*(((s1_ptr)_2)->base + 36);
    _22577 = NOVALUE;
    if (IS_ATOM_INT(_22578)) {
        _22579 = (_22578 != 2);
    }
    else {
        _22579 = binary_op(NOTEQ, _22578, 2);
    }
    _22578 = NOVALUE;
    DeRef(_22576);
    if (IS_ATOM_INT(_22579))
    _22576 = (_22579 != 0);
    else
    _22576 = DBL_PTR(_22579)->dbl != 0.0;
LA: 
    if (_22576 != 0) {
        goto LB; // [298] 344
    }
    _22581 = (_60LeftSym_42086 == _9FALSE_442);
    if (_22581 == 0) {
        _22582 = 0;
        goto LC; // [310] 325
    }
    _22583 = _60TypeIs(_s_42762, 1);
    if (IS_ATOM_INT(_22583))
    _22582 = (_22583 != 0);
    else
    _22582 = DBL_PTR(_22583)->dbl != 0.0;
LC: 
    if (_22582 == 0) {
        DeRef(_22584);
        _22584 = 0;
        goto LD; // [325] 339
    }
    if (IS_ATOM_INT(_v_42763) && IS_ATOM_INT(_39NOVALUE_16670)) {
        _22585 = (_v_42763 != _39NOVALUE_16670);
    }
    else {
        _22585 = binary_op(NOTEQ, _v_42763, _39NOVALUE_16670);
    }
    if (IS_ATOM_INT(_22585))
    _22584 = (_22585 != 0);
    else
    _22584 = DBL_PTR(_22585)->dbl != 0.0;
LD: 
    if (_22584 == 0)
    {
        _22584 = NOVALUE;
        goto LE; // [340] 367
    }
    else{
        _22584 = NOVALUE;
    }
LB: 

    /** c_decl.e:641				c_printf("%d", v)*/
    RefDS(_22552);
    Ref(_v_42763);
    _57c_printf(_22552, _v_42763);

    /** c_decl.e:642				if TARGET_SIZEOF_POINTER = 8 then*/
    goto L8; // [364] 533
LE: 

    /** c_decl.e:647				c_printf("_%d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22587 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22587);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22588 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22588 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22587 = NOVALUE;
    RefDS(_22051);
    Ref(_22588);
    _57c_printf(_22051, _22588);
    _22588 = NOVALUE;

    /** c_decl.e:648				c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22589 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22589);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22590 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22590 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22589 = NOVALUE;
    Ref(_22590);
    _57c_puts(_22590);
    _22590 = NOVALUE;

    /** c_decl.e:649				if SymTab[s][S_NREFS] < 2 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22591 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22591);
    _22592 = (object)*(((s1_ptr)_2)->base + 12);
    _22591 = NOVALUE;
    if (binary_op_a(GREATEREQ, _22592, 2)){
        _22592 = NOVALUE;
        goto L8; // [416] 533
    }
    _22592 = NOVALUE;

    /** c_decl.e:650					SymTab[s][S_NREFS] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_42762 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _22596 = (object)*(((s1_ptr)_2)->base + 12);
    _22594 = NOVALUE;
    if (IS_ATOM_INT(_22596)) {
        _22597 = _22596 + 1;
        if (_22597 > MAXINT){
            _22597 = NewDouble((eudouble)_22597);
        }
    }
    else
    _22597 = binary_op(PLUS, 1, _22596);
    _22596 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22597;
    if( _1 != _22597 ){
        DeRef(_1);
    }
    _22597 = NOVALUE;
    _22594 = NOVALUE;
    goto L8; // [445] 533
L9: 

    /** c_decl.e:656			if LeftSym = FALSE and GType(s) = TYPE_INTEGER and v != NOVALUE then*/
    _22598 = (_60LeftSym_42086 == _9FALSE_442);
    if (_22598 == 0) {
        _22599 = 0;
        goto LF; // [458] 476
    }
    _22600 = _60GType(_s_42762);
    if (IS_ATOM_INT(_22600)) {
        _22601 = (_22600 == 1);
    }
    else {
        _22601 = binary_op(EQUALS, _22600, 1);
    }
    DeRef(_22600);
    _22600 = NOVALUE;
    if (IS_ATOM_INT(_22601))
    _22599 = (_22601 != 0);
    else
    _22599 = DBL_PTR(_22601)->dbl != 0.0;
LF: 
    if (_22599 == 0) {
        goto L10; // [476] 513
    }
    if (IS_ATOM_INT(_v_42763) && IS_ATOM_INT(_39NOVALUE_16670)) {
        _22603 = (_v_42763 != _39NOVALUE_16670);
    }
    else {
        _22603 = binary_op(NOTEQ, _v_42763, _39NOVALUE_16670);
    }
    if (_22603 == 0) {
        DeRef(_22603);
        _22603 = NOVALUE;
        goto L10; // [487] 513
    }
    else {
        if (!IS_ATOM_INT(_22603) && DBL_PTR(_22603)->dbl == 0.0){
            DeRef(_22603);
            _22603 = NOVALUE;
            goto L10; // [487] 513
        }
        DeRef(_22603);
        _22603 = NOVALUE;
    }
    DeRef(_22603);
    _22603 = NOVALUE;

    /** c_decl.e:657				c_printf("%d", v)*/
    RefDS(_22552);
    Ref(_v_42763);
    _57c_printf(_22552, _v_42763);

    /** c_decl.e:658				if TARGET_SIZEOF_POINTER = 8 then*/
    goto L11; // [510] 532
L10: 

    /** c_decl.e:662				c_printf("_%d", SymTab[s][S_TEMP_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22605 = (object)*(((s1_ptr)_2)->base + _s_42762);
    _2 = (object)SEQ_PTR(_22605);
    _22606 = (object)*(((s1_ptr)_2)->base + 34);
    _22605 = NOVALUE;
    RefDS(_22051);
    Ref(_22606);
    _57c_printf(_22051, _22606);
    _22606 = NOVALUE;
L11: 
L8: 

    /** c_decl.e:666		LeftSym = FALSE*/
    _60LeftSym_42086 = _9FALSE_442;

    /** c_decl.e:667	end procedure*/
    DeRef(_v_42763);
    DeRef(_22585);
    _22585 = NOVALUE;
    DeRef(_22579);
    _22579 = NOVALUE;
    DeRef(_22583);
    _22583 = NOVALUE;
    DeRef(_22546);
    _22546 = NOVALUE;
    DeRef(_22581);
    _22581 = NOVALUE;
    DeRef(_22575);
    _22575 = NOVALUE;
    DeRef(_22601);
    _22601 = NOVALUE;
    DeRef(_22564);
    _22564 = NOVALUE;
    DeRef(_22549);
    _22549 = NOVALUE;
    DeRef(_22598);
    _22598 = NOVALUE;
    return;
    ;
}


void _60c_stmt(object _stmt_42910, object _arg_42911, object _lhs_arg_42913)
{
    object _argcount_42914 = NOVALUE;
    object _i_42915 = NOVALUE;
    object _22661 = NOVALUE;
    object _22660 = NOVALUE;
    object _22659 = NOVALUE;
    object _22658 = NOVALUE;
    object _22657 = NOVALUE;
    object _22656 = NOVALUE;
    object _22655 = NOVALUE;
    object _22654 = NOVALUE;
    object _22653 = NOVALUE;
    object _22652 = NOVALUE;
    object _22651 = NOVALUE;
    object _22650 = NOVALUE;
    object _22649 = NOVALUE;
    object _22648 = NOVALUE;
    object _22647 = NOVALUE;
    object _22646 = NOVALUE;
    object _22645 = NOVALUE;
    object _22643 = NOVALUE;
    object _22641 = NOVALUE;
    object _22639 = NOVALUE;
    object _22638 = NOVALUE;
    object _22637 = NOVALUE;
    object _22636 = NOVALUE;
    object _22634 = NOVALUE;
    object _22633 = NOVALUE;
    object _22632 = NOVALUE;
    object _22631 = NOVALUE;
    object _22630 = NOVALUE;
    object _22629 = NOVALUE;
    object _22628 = NOVALUE;
    object _22627 = NOVALUE;
    object _22626 = NOVALUE;
    object _22625 = NOVALUE;
    object _22624 = NOVALUE;
    object _22623 = NOVALUE;
    object _22622 = NOVALUE;
    object _22621 = NOVALUE;
    object _22618 = NOVALUE;
    object _22617 = NOVALUE;
    object _22616 = NOVALUE;
    object _22615 = NOVALUE;
    object _22614 = NOVALUE;
    object _22613 = NOVALUE;
    object _22611 = NOVALUE;
    object _22609 = NOVALUE;
    object _22608 = NOVALUE;
    object _22607 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_lhs_arg_42913)) {
        _1 = (object)(DBL_PTR(_lhs_arg_42913)->dbl);
        DeRefDS(_lhs_arg_42913);
        _lhs_arg_42913 = _1;
    }

    /** c_decl.e:675		if LAST_PASS = TRUE and Initializing = FALSE then*/
    _22607 = (_60LAST_PASS_42076 == _9TRUE_444);
    if (_22607 == 0) {
        goto L1; // [15] 47
    }
    _22609 = (_39Initializing_16895 == _9FALSE_442);
    if (_22609 == 0)
    {
        DeRef(_22609);
        _22609 = NOVALUE;
        goto L1; // [28] 47
    }
    else{
        DeRef(_22609);
        _22609 = NOVALUE;
    }

    /** c_decl.e:676			cfile_size += 1*/
    _39cfile_size_16894 = _39cfile_size_16894 + 1;

    /** c_decl.e:677			update_checksum( stmt )*/
    RefDS(_stmt_42910);
    _58update_checksum(_stmt_42910);
L1: 

    /** c_decl.e:681		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L2; // [51] 60
    }
    else{
    }

    /** c_decl.e:682			adjust_indent_before(stmt)*/
    RefDS(_stmt_42910);
    _57adjust_indent_before(_stmt_42910);
L2: 

    /** c_decl.e:685		if atom(arg) then*/
    _22611 = IS_ATOM(_arg_42911);
    if (_22611 == 0)
    {
        _22611 = NOVALUE;
        goto L3; // [65] 75
    }
    else{
        _22611 = NOVALUE;
    }

    /** c_decl.e:686			arg = {arg}*/
    _0 = _arg_42911;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_42911);
    ((intptr_t*)_2)[1] = _arg_42911;
    _arg_42911 = MAKE_SEQ(_1);
    DeRef(_0);
L3: 

    /** c_decl.e:689		argcount = 1*/
    _argcount_42914 = 1;

    /** c_decl.e:690		i = 1*/
    _i_42915 = 1;

    /** c_decl.e:691		while i <= length(stmt) and length(stmt) > 0 do*/
L4: 
    if (IS_SEQUENCE(_stmt_42910)){
            _22613 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22613 = 1;
    }
    _22614 = (_i_42915 <= _22613);
    _22613 = NOVALUE;
    if (_22614 == 0) {
        goto L5; // [97] 435
    }
    if (IS_SEQUENCE(_stmt_42910)){
            _22616 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22616 = 1;
    }
    _22617 = (_22616 > 0);
    _22616 = NOVALUE;
    if (_22617 == 0)
    {
        DeRef(_22617);
        _22617 = NOVALUE;
        goto L5; // [109] 435
    }
    else{
        DeRef(_22617);
        _22617 = NOVALUE;
    }

    /** c_decl.e:692			if stmt[i] = '@' then*/
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22618 = (object)*(((s1_ptr)_2)->base + _i_42915);
    if (binary_op_a(NOTEQ, _22618, 64)){
        _22618 = NOVALUE;
        goto L6; // [118] 288
    }
    _22618 = NOVALUE;

    /** c_decl.e:694				if i = 1 then*/
    if (_i_42915 != 1)
    goto L7; // [124] 138

    /** c_decl.e:695					LeftSym = TRUE*/
    _60LeftSym_42086 = _9TRUE_444;
L7: 

    /** c_decl.e:698				if i < length(stmt) and stmt[i+1] > '0' and stmt[i+1] <= '9' then*/
    if (IS_SEQUENCE(_stmt_42910)){
            _22621 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22621 = 1;
    }
    _22622 = (_i_42915 < _22621);
    _22621 = NOVALUE;
    if (_22622 == 0) {
        _22623 = 0;
        goto L8; // [147] 167
    }
    _22624 = _i_42915 + 1;
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22625 = (object)*(((s1_ptr)_2)->base + _22624);
    if (IS_ATOM_INT(_22625)) {
        _22626 = (_22625 > 48);
    }
    else {
        _22626 = binary_op(GREATER, _22625, 48);
    }
    _22625 = NOVALUE;
    if (IS_ATOM_INT(_22626))
    _22623 = (_22626 != 0);
    else
    _22623 = DBL_PTR(_22626)->dbl != 0.0;
L8: 
    if (_22623 == 0) {
        goto L9; // [167] 249
    }
    _22628 = _i_42915 + 1;
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22629 = (object)*(((s1_ptr)_2)->base + _22628);
    if (IS_ATOM_INT(_22629)) {
        _22630 = (_22629 <= 57);
    }
    else {
        _22630 = binary_op(LESSEQ, _22629, 57);
    }
    _22629 = NOVALUE;
    if (_22630 == 0) {
        DeRef(_22630);
        _22630 = NOVALUE;
        goto L9; // [184] 249
    }
    else {
        if (!IS_ATOM_INT(_22630) && DBL_PTR(_22630)->dbl == 0.0){
            DeRef(_22630);
            _22630 = NOVALUE;
            goto L9; // [184] 249
        }
        DeRef(_22630);
        _22630 = NOVALUE;
    }
    DeRef(_22630);
    _22630 = NOVALUE;

    /** c_decl.e:700					if arg[stmt[i+1]-'0'] = lhs_arg then*/
    _22631 = _i_42915 + 1;
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22632 = (object)*(((s1_ptr)_2)->base + _22631);
    if (IS_ATOM_INT(_22632)) {
        _22633 = _22632 - 48;
    }
    else {
        _22633 = binary_op(MINUS, _22632, 48);
    }
    _22632 = NOVALUE;
    _2 = (object)SEQ_PTR(_arg_42911);
    if (!IS_ATOM_INT(_22633)){
        _22634 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22633)->dbl));
    }
    else{
        _22634 = (object)*(((s1_ptr)_2)->base + _22633);
    }
    if (binary_op_a(NOTEQ, _22634, _lhs_arg_42913)){
        _22634 = NOVALUE;
        goto LA; // [205] 219
    }
    _22634 = NOVALUE;

    /** c_decl.e:701						LeftSym = TRUE*/
    _60LeftSym_42086 = _9TRUE_444;
LA: 

    /** c_decl.e:703					CName(arg[stmt[i+1]-'0'])*/
    _22636 = _i_42915 + 1;
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22637 = (object)*(((s1_ptr)_2)->base + _22636);
    if (IS_ATOM_INT(_22637)) {
        _22638 = _22637 - 48;
    }
    else {
        _22638 = binary_op(MINUS, _22637, 48);
    }
    _22637 = NOVALUE;
    _2 = (object)SEQ_PTR(_arg_42911);
    if (!IS_ATOM_INT(_22638)){
        _22639 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22638)->dbl));
    }
    else{
        _22639 = (object)*(((s1_ptr)_2)->base + _22638);
    }
    Ref(_22639);
    _60CName(_22639);
    _22639 = NOVALUE;

    /** c_decl.e:704					i += 1*/
    _i_42915 = _i_42915 + 1;
    goto LB; // [246] 279
L9: 

    /** c_decl.e:708					if arg[argcount] = lhs_arg then*/
    _2 = (object)SEQ_PTR(_arg_42911);
    _22641 = (object)*(((s1_ptr)_2)->base + _argcount_42914);
    if (binary_op_a(NOTEQ, _22641, _lhs_arg_42913)){
        _22641 = NOVALUE;
        goto LC; // [255] 269
    }
    _22641 = NOVALUE;

    /** c_decl.e:709						LeftSym = TRUE*/
    _60LeftSym_42086 = _9TRUE_444;
LC: 

    /** c_decl.e:711					CName(arg[argcount])*/
    _2 = (object)SEQ_PTR(_arg_42911);
    _22643 = (object)*(((s1_ptr)_2)->base + _argcount_42914);
    Ref(_22643);
    _60CName(_22643);
    _22643 = NOVALUE;
LB: 

    /** c_decl.e:714				argcount += 1*/
    _argcount_42914 = _argcount_42914 + 1;
    goto LD; // [285] 353
L6: 

    /** c_decl.e:717				c_putc(stmt[i])*/
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22645 = (object)*(((s1_ptr)_2)->base + _i_42915);
    Ref(_22645);
    _57c_putc(_22645);
    _22645 = NOVALUE;

    /** c_decl.e:718				if stmt[i] = '&' and i < length(stmt) and stmt[i+1] = '@' then*/
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22646 = (object)*(((s1_ptr)_2)->base + _i_42915);
    if (IS_ATOM_INT(_22646)) {
        _22647 = (_22646 == 38);
    }
    else {
        _22647 = binary_op(EQUALS, _22646, 38);
    }
    _22646 = NOVALUE;
    if (IS_ATOM_INT(_22647)) {
        if (_22647 == 0) {
            DeRef(_22648);
            _22648 = 0;
            goto LE; // [307] 322
        }
    }
    else {
        if (DBL_PTR(_22647)->dbl == 0.0) {
            DeRef(_22648);
            _22648 = 0;
            goto LE; // [307] 322
        }
    }
    if (IS_SEQUENCE(_stmt_42910)){
            _22649 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22649 = 1;
    }
    _22650 = (_i_42915 < _22649);
    _22649 = NOVALUE;
    DeRef(_22648);
    _22648 = (_22650 != 0);
LE: 
    if (_22648 == 0) {
        goto LF; // [322] 352
    }
    _22652 = _i_42915 + 1;
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22653 = (object)*(((s1_ptr)_2)->base + _22652);
    if (IS_ATOM_INT(_22653)) {
        _22654 = (_22653 == 64);
    }
    else {
        _22654 = binary_op(EQUALS, _22653, 64);
    }
    _22653 = NOVALUE;
    if (_22654 == 0) {
        DeRef(_22654);
        _22654 = NOVALUE;
        goto LF; // [339] 352
    }
    else {
        if (!IS_ATOM_INT(_22654) && DBL_PTR(_22654)->dbl == 0.0){
            DeRef(_22654);
            _22654 = NOVALUE;
            goto LF; // [339] 352
        }
        DeRef(_22654);
        _22654 = NOVALUE;
    }
    DeRef(_22654);
    _22654 = NOVALUE;

    /** c_decl.e:719					LeftSym = TRUE -- never say: x = x &y or andy - always leave space*/
    _60LeftSym_42086 = _9TRUE_444;
LF: 
LD: 

    /** c_decl.e:723			if stmt[i] = '\n' and i < length(stmt) then*/
    _2 = (object)SEQ_PTR(_stmt_42910);
    _22655 = (object)*(((s1_ptr)_2)->base + _i_42915);
    if (IS_ATOM_INT(_22655)) {
        _22656 = (_22655 == 10);
    }
    else {
        _22656 = binary_op(EQUALS, _22655, 10);
    }
    _22655 = NOVALUE;
    if (IS_ATOM_INT(_22656)) {
        if (_22656 == 0) {
            goto L10; // [363] 424
        }
    }
    else {
        if (DBL_PTR(_22656)->dbl == 0.0) {
            goto L10; // [363] 424
        }
    }
    if (IS_SEQUENCE(_stmt_42910)){
            _22658 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22658 = 1;
    }
    _22659 = (_i_42915 < _22658);
    _22658 = NOVALUE;
    if (_22659 == 0)
    {
        DeRef(_22659);
        _22659 = NOVALUE;
        goto L10; // [375] 424
    }
    else{
        DeRef(_22659);
        _22659 = NOVALUE;
    }

    /** c_decl.e:724				if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L11; // [382] 391
    }
    else{
    }

    /** c_decl.e:725					adjust_indent_after(stmt)*/
    RefDS(_stmt_42910);
    _57adjust_indent_after(_stmt_42910);
L11: 

    /** c_decl.e:727				stmt = stmt[i+1..$]*/
    _22660 = _i_42915 + 1;
    if (_22660 > MAXINT){
        _22660 = NewDouble((eudouble)_22660);
    }
    if (IS_SEQUENCE(_stmt_42910)){
            _22661 = SEQ_PTR(_stmt_42910)->length;
    }
    else {
        _22661 = 1;
    }
    rhs_slice_target = (object_ptr)&_stmt_42910;
    RHS_Slice(_stmt_42910, _22660, _22661);

    /** c_decl.e:728				i = 0*/
    _i_42915 = 0;

    /** c_decl.e:729				if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L12; // [414] 423
    }
    else{
    }

    /** c_decl.e:730					adjust_indent_before(stmt)*/
    RefDS(_stmt_42910);
    _57adjust_indent_before(_stmt_42910);
L12: 
L10: 

    /** c_decl.e:734			i += 1*/
    _i_42915 = _i_42915 + 1;

    /** c_decl.e:735		end while*/
    goto L4; // [432] 90
L5: 

    /** c_decl.e:737		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L13; // [439] 448
    }
    else{
    }

    /** c_decl.e:738			adjust_indent_after(stmt)*/
    RefDS(_stmt_42910);
    _57adjust_indent_after(_stmt_42910);
L13: 

    /** c_decl.e:740	end procedure*/
    DeRefDS(_stmt_42910);
    DeRef(_arg_42911);
    DeRef(_22652);
    _22652 = NOVALUE;
    DeRef(_22650);
    _22650 = NOVALUE;
    DeRef(_22660);
    _22660 = NOVALUE;
    DeRef(_22636);
    _22636 = NOVALUE;
    DeRef(_22628);
    _22628 = NOVALUE;
    DeRef(_22607);
    _22607 = NOVALUE;
    DeRef(_22631);
    _22631 = NOVALUE;
    DeRef(_22622);
    _22622 = NOVALUE;
    DeRef(_22647);
    _22647 = NOVALUE;
    DeRef(_22626);
    _22626 = NOVALUE;
    DeRef(_22633);
    _22633 = NOVALUE;
    DeRef(_22614);
    _22614 = NOVALUE;
    DeRef(_22624);
    _22624 = NOVALUE;
    DeRef(_22638);
    _22638 = NOVALUE;
    DeRef(_22656);
    _22656 = NOVALUE;
    return;
    ;
}


void _60c_stmt0(object _stmt_43009)
{
    object _0, _1, _2;
    

    /** c_decl.e:745		if emit_c_output then*/
    if (_57emit_c_output_46102 == 0)
    {
        goto L1; // [7] 18
    }
    else{
    }

    /** c_decl.e:746			c_stmt(stmt, {})*/
    RefDS(_stmt_43009);
    RefDS(_21928);
    _60c_stmt(_stmt_43009, _21928, 0);
L1: 

    /** c_decl.e:748	end procedure*/
    DeRefDSi(_stmt_43009);
    return;
    ;
}


object _60needs_uninit(object _eentry_43014)
{
    object _22684 = NOVALUE;
    object _22683 = NOVALUE;
    object _22682 = NOVALUE;
    object _22681 = NOVALUE;
    object _22680 = NOVALUE;
    object _22679 = NOVALUE;
    object _22678 = NOVALUE;
    object _22677 = NOVALUE;
    object _22676 = NOVALUE;
    object _22675 = NOVALUE;
    object _22674 = NOVALUE;
    object _22673 = NOVALUE;
    object _22672 = NOVALUE;
    object _22671 = NOVALUE;
    object _22670 = NOVALUE;
    object _22669 = NOVALUE;
    object _22668 = NOVALUE;
    object _22667 = NOVALUE;
    object _22666 = NOVALUE;
    object _22665 = NOVALUE;
    object _22664 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:751		if eentry[S_SCOPE] >= SC_LOCAL*/
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22664 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22664)) {
        _22665 = (_22664 >= 5);
    }
    else {
        _22665 = binary_op(GREATEREQ, _22664, 5);
    }
    _22664 = NOVALUE;
    if (IS_ATOM_INT(_22665)) {
        if (_22665 == 0) {
            _22666 = 0;
            goto L1; // [17] 77
        }
    }
    else {
        if (DBL_PTR(_22665)->dbl == 0.0) {
            _22666 = 0;
            goto L1; // [17] 77
        }
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22667 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22667)) {
        _22668 = (_22667 <= 6);
    }
    else {
        _22668 = binary_op(LESSEQ, _22667, 6);
    }
    _22667 = NOVALUE;
    if (IS_ATOM_INT(_22668)) {
        if (_22668 != 0) {
            _22669 = 1;
            goto L2; // [33] 53
        }
    }
    else {
        if (DBL_PTR(_22668)->dbl != 0.0) {
            _22669 = 1;
            goto L2; // [33] 53
        }
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22670 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22670)) {
        _22671 = (_22670 == 11);
    }
    else {
        _22671 = binary_op(EQUALS, _22670, 11);
    }
    _22670 = NOVALUE;
    DeRef(_22669);
    if (IS_ATOM_INT(_22671))
    _22669 = (_22671 != 0);
    else
    _22669 = DBL_PTR(_22671)->dbl != 0.0;
L2: 
    if (_22669 != 0) {
        _22672 = 1;
        goto L3; // [53] 73
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22673 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22673)) {
        _22674 = (_22673 == 13);
    }
    else {
        _22674 = binary_op(EQUALS, _22673, 13);
    }
    _22673 = NOVALUE;
    if (IS_ATOM_INT(_22674))
    _22672 = (_22674 != 0);
    else
    _22672 = DBL_PTR(_22674)->dbl != 0.0;
L3: 
    DeRef(_22666);
    _22666 = (_22672 != 0);
L1: 
    if (_22666 == 0) {
        _22675 = 0;
        goto L4; // [77] 97
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22676 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_22676)) {
        _22677 = (_22676 != 0);
    }
    else {
        _22677 = binary_op(NOTEQ, _22676, 0);
    }
    _22676 = NOVALUE;
    if (IS_ATOM_INT(_22677))
    _22675 = (_22677 != 0);
    else
    _22675 = DBL_PTR(_22677)->dbl != 0.0;
L4: 
    if (_22675 == 0) {
        _22678 = 0;
        goto L5; // [97] 117
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    _22679 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_22679)) {
        _22680 = (_22679 != 99);
    }
    else {
        _22680 = binary_op(NOTEQ, _22679, 99);
    }
    _22679 = NOVALUE;
    if (IS_ATOM_INT(_22680))
    _22678 = (_22680 != 0);
    else
    _22678 = DBL_PTR(_22680)->dbl != 0.0;
L5: 
    if (_22678 == 0) {
        goto L6; // [117] 150
    }
    _2 = (object)SEQ_PTR(_eentry_43014);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22682 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22682 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _22683 = find_from(_22682, _40RTN_TOKS_16423, 1);
    _22682 = NOVALUE;
    _22684 = (_22683 == 0);
    _22683 = NOVALUE;
    if (_22684 == 0)
    {
        DeRef(_22684);
        _22684 = NOVALUE;
        goto L6; // [138] 150
    }
    else{
        DeRef(_22684);
        _22684 = NOVALUE;
    }

    /** c_decl.e:757			return 1*/
    DeRefDS(_eentry_43014);
    DeRef(_22674);
    _22674 = NOVALUE;
    DeRef(_22668);
    _22668 = NOVALUE;
    DeRef(_22671);
    _22671 = NOVALUE;
    DeRef(_22677);
    _22677 = NOVALUE;
    DeRef(_22680);
    _22680 = NOVALUE;
    DeRef(_22665);
    _22665 = NOVALUE;
    return 1;
    goto L7; // [147] 157
L6: 

    /** c_decl.e:759			return 0*/
    DeRefDS(_eentry_43014);
    DeRef(_22674);
    _22674 = NOVALUE;
    DeRef(_22668);
    _22668 = NOVALUE;
    DeRef(_22671);
    _22671 = NOVALUE;
    DeRef(_22677);
    _22677 = NOVALUE;
    DeRef(_22680);
    _22680 = NOVALUE;
    DeRef(_22665);
    _22665 = NOVALUE;
    return 0;
L7: 
    ;
}


void _60DeclareFileVars()
{
    object _s_43055 = NOVALUE;
    object _eentry_43057 = NOVALUE;
    object _cleanup_vars_43151 = NOVALUE;
    object _22767 = NOVALUE;
    object _22760 = NOVALUE;
    object _22755 = NOVALUE;
    object _22752 = NOVALUE;
    object _22751 = NOVALUE;
    object _22750 = NOVALUE;
    object _22748 = NOVALUE;
    object _22744 = NOVALUE;
    object _22740 = NOVALUE;
    object _22737 = NOVALUE;
    object _22736 = NOVALUE;
    object _22735 = NOVALUE;
    object _22733 = NOVALUE;
    object _22729 = NOVALUE;
    object _22725 = NOVALUE;
    object _22724 = NOVALUE;
    object _22723 = NOVALUE;
    object _22720 = NOVALUE;
    object _22719 = NOVALUE;
    object _22717 = NOVALUE;
    object _22716 = NOVALUE;
    object _22715 = NOVALUE;
    object _22714 = NOVALUE;
    object _22710 = NOVALUE;
    object _22709 = NOVALUE;
    object _22708 = NOVALUE;
    object _22707 = NOVALUE;
    object _22706 = NOVALUE;
    object _22705 = NOVALUE;
    object _22704 = NOVALUE;
    object _22703 = NOVALUE;
    object _22702 = NOVALUE;
    object _22701 = NOVALUE;
    object _22700 = NOVALUE;
    object _22699 = NOVALUE;
    object _22698 = NOVALUE;
    object _22697 = NOVALUE;
    object _22696 = NOVALUE;
    object _22695 = NOVALUE;
    object _22694 = NOVALUE;
    object _22693 = NOVALUE;
    object _22692 = NOVALUE;
    object _22691 = NOVALUE;
    object _22690 = NOVALUE;
    object _22689 = NOVALUE;
    object _22686 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:769		c_puts("// Declaring file vars\n")*/
    RefDS(_22685);
    _57c_puts(_22685);

    /** c_decl.e:770		s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22686 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_22686);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22686 = NOVALUE;

    /** c_decl.e:772		while s do*/
L1: 
    if (_s_43055 == 0)
    {
        goto L2; // [29] 328
    }
    else{
    }

    /** c_decl.e:773			eentry = SymTab[s]*/
    DeRef(_eentry_43057);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_43057 = (object)*(((s1_ptr)_2)->base + _s_43055);
    Ref(_eentry_43057);

    /** c_decl.e:774			if eentry[S_SCOPE] >= SC_LOCAL*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22689 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22689)) {
        _22690 = (_22689 >= 5);
    }
    else {
        _22690 = binary_op(GREATEREQ, _22689, 5);
    }
    _22689 = NOVALUE;
    if (IS_ATOM_INT(_22690)) {
        if (_22690 == 0) {
            DeRef(_22691);
            _22691 = 0;
            goto L3; // [56] 116
        }
    }
    else {
        if (DBL_PTR(_22690)->dbl == 0.0) {
            DeRef(_22691);
            _22691 = 0;
            goto L3; // [56] 116
        }
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22692 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22692)) {
        _22693 = (_22692 <= 6);
    }
    else {
        _22693 = binary_op(LESSEQ, _22692, 6);
    }
    _22692 = NOVALUE;
    if (IS_ATOM_INT(_22693)) {
        if (_22693 != 0) {
            DeRef(_22694);
            _22694 = 1;
            goto L4; // [72] 92
        }
    }
    else {
        if (DBL_PTR(_22693)->dbl != 0.0) {
            DeRef(_22694);
            _22694 = 1;
            goto L4; // [72] 92
        }
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22695 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22695)) {
        _22696 = (_22695 == 11);
    }
    else {
        _22696 = binary_op(EQUALS, _22695, 11);
    }
    _22695 = NOVALUE;
    DeRef(_22694);
    if (IS_ATOM_INT(_22696))
    _22694 = (_22696 != 0);
    else
    _22694 = DBL_PTR(_22696)->dbl != 0.0;
L4: 
    if (_22694 != 0) {
        _22697 = 1;
        goto L5; // [92] 112
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22698 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_22698)) {
        _22699 = (_22698 == 13);
    }
    else {
        _22699 = binary_op(EQUALS, _22698, 13);
    }
    _22698 = NOVALUE;
    if (IS_ATOM_INT(_22699))
    _22697 = (_22699 != 0);
    else
    _22697 = DBL_PTR(_22699)->dbl != 0.0;
L5: 
    DeRef(_22691);
    _22691 = (_22697 != 0);
L3: 
    if (_22691 == 0) {
        _22700 = 0;
        goto L6; // [116] 136
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22701 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_22701)) {
        _22702 = (_22701 != 0);
    }
    else {
        _22702 = binary_op(NOTEQ, _22701, 0);
    }
    _22701 = NOVALUE;
    if (IS_ATOM_INT(_22702))
    _22700 = (_22702 != 0);
    else
    _22700 = DBL_PTR(_22702)->dbl != 0.0;
L6: 
    if (_22700 == 0) {
        _22703 = 0;
        goto L7; // [136] 156
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22704 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_ATOM_INT(_22704)) {
        _22705 = (_22704 != 99);
    }
    else {
        _22705 = binary_op(NOTEQ, _22704, 99);
    }
    _22704 = NOVALUE;
    if (IS_ATOM_INT(_22705))
    _22703 = (_22705 != 0);
    else
    _22703 = DBL_PTR(_22705)->dbl != 0.0;
L7: 
    if (_22703 == 0) {
        goto L8; // [156] 307
    }
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22707 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22707 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _22708 = find_from(_22707, _40RTN_TOKS_16423, 1);
    _22707 = NOVALUE;
    _22709 = (_22708 == 0);
    _22708 = NOVALUE;
    if (_22709 == 0)
    {
        DeRef(_22709);
        _22709 = NOVALUE;
        goto L8; // [177] 307
    }
    else{
        DeRef(_22709);
        _22709 = NOVALUE;
    }

    /** c_decl.e:780				if eentry[S_TOKEN] = PROC then*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22710 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22710 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    if (binary_op_a(NOTEQ, _22710, 27)){
        _22710 = NOVALUE;
        goto L9; // [190] 202
    }
    _22710 = NOVALUE;

    /** c_decl.e:781					c_puts( "void ")*/
    RefDS(_22712);
    _57c_puts(_22712);
    goto LA; // [199] 208
L9: 

    /** c_decl.e:783					c_puts("object ")*/
    RefDS(_22713);
    _57c_puts(_22713);
LA: 

    /** c_decl.e:785				c_printf("_%d", eentry[S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22714 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22714 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    RefDS(_22051);
    Ref(_22714);
    _57c_printf(_22051, _22714);
    _22714 = NOVALUE;

    /** c_decl.e:786				c_puts(eentry[S_NAME])*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22715 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22715 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_22715);
    _57c_puts(_22715);
    _22715 = NOVALUE;

    /** c_decl.e:787				if is_integer( eentry[S_OBJ] ) then*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22716 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_22716);
    _22717 = _39is_integer(_22716);
    _22716 = NOVALUE;
    if (_22717 == 0) {
        DeRef(_22717);
        _22717 = NOVALUE;
        goto LB; // [243] 267
    }
    else {
        if (!IS_ATOM_INT(_22717) && DBL_PTR(_22717)->dbl == 0.0){
            DeRef(_22717);
            _22717 = NOVALUE;
            goto LB; // [243] 267
        }
        DeRef(_22717);
        _22717 = NOVALUE;
    }
    DeRef(_22717);
    _22717 = NOVALUE;

    /** c_decl.e:788						c_printf(" = %d%s;\n", { eentry[S_OBJ], LL_suffix} )*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    _22719 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_61LL_suffix_29580);
    Ref(_22719);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _22719;
    ((intptr_t *)_2)[2] = _61LL_suffix_29580;
    _22720 = MAKE_SEQ(_1);
    _22719 = NOVALUE;
    RefDS(_22718);
    _57c_printf(_22718, _22720);
    _22720 = NOVALUE;
    goto LC; // [264] 273
LB: 

    /** c_decl.e:790					c_puts(" = NOVALUE;\n")*/
    RefDS(_22721);
    _57c_puts(_22721);
LC: 

    /** c_decl.e:793				c_hputs("extern object ")*/
    RefDS(_22722);
    _57c_hputs(_22722);

    /** c_decl.e:794				c_hprintf("_%d", eentry[S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22723 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22723 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    RefDS(_22051);
    Ref(_22723);
    _57c_hprintf(_22051, _22723);
    _22723 = NOVALUE;

    /** c_decl.e:795				c_hputs(eentry[S_NAME])*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22724 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22724 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_22724);
    _57c_hputs(_22724);
    _22724 = NOVALUE;

    /** c_decl.e:797				c_hputs(";\n")*/
    RefDS(_22204);
    _57c_hputs(_22204);
L8: 

    /** c_decl.e:799			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22725 = (object)*(((s1_ptr)_2)->base + _s_43055);
    _2 = (object)SEQ_PTR(_22725);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22725 = NOVALUE;

    /** c_decl.e:800		end while*/
    goto L1; // [325] 29
L2: 

    /** c_decl.e:801		c_puts("\n")*/
    RefDS(_22123);
    _57c_puts(_22123);

    /** c_decl.e:802		c_hputs("\n")*/
    RefDS(_22123);
    _57c_hputs(_22123);

    /** c_decl.e:803		if dll_option or debug_option then*/
    if (_60dll_option_42089 != 0) {
        goto LD; // [342] 353
    }
    if (_60debug_option_42099 == 0)
    {
        goto LE; // [349] 707
    }
    else{
    }
LD: 

    /** c_decl.e:804			integer cleanup_vars = 0*/
    _cleanup_vars_43151 = 0;

    /** c_decl.e:805			c_puts("// Declaring var array for cleanup\n")*/
    RefDS(_22728);
    _57c_puts(_22728);

    /** c_decl.e:806			s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22729 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_22729);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22729 = NOVALUE;

    /** c_decl.e:807			c_stmt0( "object_ptr _0var_cleanup[] = {\n" )*/
    RefDS(_22731);
    _60c_stmt0(_22731);

    /** c_decl.e:808			while s do*/
LF: 
    if (_s_43055 == 0)
    {
        goto L10; // [391] 473
    }
    else{
    }

    /** c_decl.e:809				eentry = SymTab[s]*/
    DeRef(_eentry_43057);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_43057 = (object)*(((s1_ptr)_2)->base + _s_43055);
    Ref(_eentry_43057);

    /** c_decl.e:810				if needs_uninit( eentry ) then*/
    RefDS(_eentry_43057);
    _22733 = _60needs_uninit(_eentry_43057);
    if (_22733 == 0) {
        DeRef(_22733);
        _22733 = NOVALUE;
        goto L11; // [410] 452
    }
    else {
        if (!IS_ATOM_INT(_22733) && DBL_PTR(_22733)->dbl == 0.0){
            DeRef(_22733);
            _22733 = NOVALUE;
            goto L11; // [410] 452
        }
        DeRef(_22733);
        _22733 = NOVALUE;
    }
    DeRef(_22733);
    _22733 = NOVALUE;

    /** c_decl.e:812					c_stmt0( sprintf("&_%d", eentry[S_FILE_NO]))*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22735 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22735 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22736 = EPrintf(-9999999, _22734, _22735);
    _22735 = NOVALUE;
    _60c_stmt0(_22736);
    _22736 = NOVALUE;

    /** c_decl.e:813					c_puts(eentry[S_NAME] )*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22737 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22737 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_22737);
    _57c_puts(_22737);
    _22737 = NOVALUE;

    /** c_decl.e:814					c_printf(", // %d\n", cleanup_vars )*/
    RefDS(_22738);
    _57c_printf(_22738, _cleanup_vars_43151);

    /** c_decl.e:815					cleanup_vars += 1*/
    _cleanup_vars_43151 = _cleanup_vars_43151 + 1;
L11: 

    /** c_decl.e:818				s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22740 = (object)*(((s1_ptr)_2)->base + _s_43055);
    _2 = (object)SEQ_PTR(_22740);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22740 = NOVALUE;

    /** c_decl.e:819			end while*/
    goto LF; // [470] 391
L10: 

    /** c_decl.e:820			c_stmt0( "0\n" )*/
    RefDS(_22742);
    _60c_stmt0(_22742);

    /** c_decl.e:821			c_stmt0( "};\n" )*/
    RefDS(_22743);
    _60c_stmt0(_22743);

    /** c_decl.e:822			s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22744 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_22744);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22744 = NOVALUE;

    /** c_decl.e:823			c_stmt0( "char *_0var_cleanup_name[] = {\n" )*/
    RefDS(_22746);
    _60c_stmt0(_22746);

    /** c_decl.e:824			cleanup_vars = 0*/
    _cleanup_vars_43151 = 0;

    /** c_decl.e:825			while s do*/
L12: 
    if (_s_43055 == 0)
    {
        goto L13; // [516] 598
    }
    else{
    }

    /** c_decl.e:826				eentry = SymTab[s]*/
    DeRef(_eentry_43057);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_43057 = (object)*(((s1_ptr)_2)->base + _s_43055);
    Ref(_eentry_43057);

    /** c_decl.e:827				if needs_uninit( eentry ) then*/
    RefDS(_eentry_43057);
    _22748 = _60needs_uninit(_eentry_43057);
    if (_22748 == 0) {
        DeRef(_22748);
        _22748 = NOVALUE;
        goto L14; // [535] 577
    }
    else {
        if (!IS_ATOM_INT(_22748) && DBL_PTR(_22748)->dbl == 0.0){
            DeRef(_22748);
            _22748 = NOVALUE;
            goto L14; // [535] 577
        }
        DeRef(_22748);
        _22748 = NOVALUE;
    }
    DeRef(_22748);
    _22748 = NOVALUE;

    /** c_decl.e:828					c_stmt0( sprintf("\"_%d", eentry[S_FILE_NO]))*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22750 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22750 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22751 = EPrintf(-9999999, _22749, _22750);
    _22750 = NOVALUE;
    _60c_stmt0(_22751);
    _22751 = NOVALUE;

    /** c_decl.e:829					c_puts(eentry[S_NAME] )*/
    _2 = (object)SEQ_PTR(_eentry_43057);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22752 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22752 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_22752);
    _57c_puts(_22752);
    _22752 = NOVALUE;

    /** c_decl.e:830					c_printf("\", // %d\n", cleanup_vars )*/
    RefDS(_22753);
    _57c_printf(_22753, _cleanup_vars_43151);

    /** c_decl.e:831					cleanup_vars += 1*/
    _cleanup_vars_43151 = _cleanup_vars_43151 + 1;
L14: 

    /** c_decl.e:834				s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22755 = (object)*(((s1_ptr)_2)->base + _s_43055);
    _2 = (object)SEQ_PTR(_22755);
    _s_43055 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43055)){
        _s_43055 = (object)DBL_PTR(_s_43055)->dbl;
    }
    _22755 = NOVALUE;

    /** c_decl.e:835			end while*/
    goto L12; // [595] 516
L13: 

    /** c_decl.e:836			c_stmt0( "0\n" )*/
    RefDS(_22742);
    _60c_stmt0(_22742);

    /** c_decl.e:837			c_stmt0( "};\n" )*/
    RefDS(_22743);
    _60c_stmt0(_22743);

    /** c_decl.e:838			c_stmt0( "void _0cleanup_vars(){\n" )*/
    RefDS(_22757);
    _60c_stmt0(_22757);

    /** c_decl.e:839				c_stmt0( "int i;\n" )*/
    RefDS(_22012);
    _60c_stmt0(_22012);

    /** c_decl.e:840				c_stmt0( "object x;\n" )*/
    RefDS(_22758);
    _60c_stmt0(_22758);

    /** c_decl.e:841				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    _22760 = EPrintf(-9999999, _22759, _cleanup_vars_43151);
    _60c_stmt0(_22760);
    _22760 = NOVALUE;

    /** c_decl.e:842					c_stmt0( "x = *_0var_cleanup[i];\n" )*/
    RefDS(_22761);
    _60c_stmt0(_22761);

    //c_decl.e:843					c_stmt0( "if( x >= NOVALUE ) /* do nothing */;\n" )
    RefDS(_22762);
    _60c_stmt0(_22762);

    /** c_decl.e:844					c_stmt0( "else if ( IS_ATOM_DBL( x ) && DBL_PTR( x )->cleanup != 0) {\n")*/
    RefDS(_22763);
    _60c_stmt0(_22763);

    /** c_decl.e:845						c_stmt0( "cleanup_double( DBL_PTR( x ) );\n")*/
    RefDS(_22764);
    _60c_stmt0(_22764);

    /** c_decl.e:846					c_stmt0( "}\n" )*/
    RefDS(_15942);
    _60c_stmt0(_15942);

    /** c_decl.e:847						c_stmt0( "else if (IS_SEQUENCE( x ) && SEQ_PTR( x )->cleanup != 0 ) {\n")*/
    RefDS(_22765);
    _60c_stmt0(_22765);

    /** c_decl.e:848						c_stmt0( "cleanup_sequence( SEQ_PTR( x ) );\n")*/
    RefDS(_22766);
    _60c_stmt0(_22766);

    /** c_decl.e:849					c_stmt0( "}\n" )*/
    RefDS(_15942);
    _60c_stmt0(_15942);

    /** c_decl.e:850				c_stmt0( "}\n" )*/
    RefDS(_15942);
    _60c_stmt0(_15942);

    /** c_decl.e:851				c_stmt0( sprintf( "for( i = 0; i < %d; ++i ){\n", cleanup_vars ) )*/
    _22767 = EPrintf(-9999999, _22759, _cleanup_vars_43151);
    _60c_stmt0(_22767);
    _22767 = NOVALUE;

    /** c_decl.e:852					c_stmt0( "DeRef( *_0var_cleanup[i] );\n" )*/
    RefDS(_22768);
    _60c_stmt0(_22768);

    /** c_decl.e:853					c_stmt0( "*_0var_cleanup[i] = NOVALUE;\n" )*/
    RefDS(_22769);
    _60c_stmt0(_22769);

    /** c_decl.e:854				c_stmt0( "}\n" )*/
    RefDS(_15942);
    _60c_stmt0(_15942);

    /** c_decl.e:855			c_stmt0( "}\n" )*/
    RefDS(_15942);
    _60c_stmt0(_15942);
LE: 

    /** c_decl.e:857	end procedure*/
    DeRef(_eentry_43057);
    DeRef(_22702);
    _22702 = NOVALUE;
    DeRef(_22705);
    _22705 = NOVALUE;
    DeRef(_22699);
    _22699 = NOVALUE;
    DeRef(_22693);
    _22693 = NOVALUE;
    DeRef(_22696);
    _22696 = NOVALUE;
    DeRef(_22690);
    _22690 = NOVALUE;
    return;
    ;
}


object _60PromoteTypeInfo()
{
    object _updsym_43222 = NOVALUE;
    object _s_43224 = NOVALUE;
    object _sym_43225 = NOVALUE;
    object _symo_43226 = NOVALUE;
    object _upd_43455 = NOVALUE;
    object _22868 = NOVALUE;
    object _22866 = NOVALUE;
    object _22865 = NOVALUE;
    object _22864 = NOVALUE;
    object _22863 = NOVALUE;
    object _22861 = NOVALUE;
    object _22859 = NOVALUE;
    object _22858 = NOVALUE;
    object _22857 = NOVALUE;
    object _22856 = NOVALUE;
    object _22855 = NOVALUE;
    object _22851 = NOVALUE;
    object _22848 = NOVALUE;
    object _22847 = NOVALUE;
    object _22846 = NOVALUE;
    object _22845 = NOVALUE;
    object _22844 = NOVALUE;
    object _22843 = NOVALUE;
    object _22842 = NOVALUE;
    object _22841 = NOVALUE;
    object _22840 = NOVALUE;
    object _22839 = NOVALUE;
    object _22838 = NOVALUE;
    object _22836 = NOVALUE;
    object _22835 = NOVALUE;
    object _22834 = NOVALUE;
    object _22833 = NOVALUE;
    object _22832 = NOVALUE;
    object _22831 = NOVALUE;
    object _22830 = NOVALUE;
    object _22829 = NOVALUE;
    object _22828 = NOVALUE;
    object _22827 = NOVALUE;
    object _22825 = NOVALUE;
    object _22824 = NOVALUE;
    object _22823 = NOVALUE;
    object _22821 = NOVALUE;
    object _22820 = NOVALUE;
    object _22819 = NOVALUE;
    object _22817 = NOVALUE;
    object _22816 = NOVALUE;
    object _22815 = NOVALUE;
    object _22814 = NOVALUE;
    object _22813 = NOVALUE;
    object _22812 = NOVALUE;
    object _22811 = NOVALUE;
    object _22809 = NOVALUE;
    object _22808 = NOVALUE;
    object _22807 = NOVALUE;
    object _22806 = NOVALUE;
    object _22804 = NOVALUE;
    object _22803 = NOVALUE;
    object _22801 = NOVALUE;
    object _22800 = NOVALUE;
    object _22799 = NOVALUE;
    object _22798 = NOVALUE;
    object _22797 = NOVALUE;
    object _22796 = NOVALUE;
    object _22795 = NOVALUE;
    object _22793 = NOVALUE;
    object _22792 = NOVALUE;
    object _22791 = NOVALUE;
    object _22790 = NOVALUE;
    object _22789 = NOVALUE;
    object _22788 = NOVALUE;
    object _22787 = NOVALUE;
    object _22786 = NOVALUE;
    object _22785 = NOVALUE;
    object _22784 = NOVALUE;
    object _22783 = NOVALUE;
    object _22782 = NOVALUE;
    object _22781 = NOVALUE;
    object _22780 = NOVALUE;
    object _22778 = NOVALUE;
    object _22777 = NOVALUE;
    object _22776 = NOVALUE;
    object _22774 = NOVALUE;
    object _22773 = NOVALUE;
    object _22770 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** c_decl.e:866		sequence sym, symo*/

    /** c_decl.e:868		updsym = 0*/
    _updsym_43222 = 0;

    /** c_decl.e:869		g_has_delete = p_has_delete*/
    _60g_has_delete_42281 = _60p_has_delete_42282;

    /** c_decl.e:870		s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22770 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_22770);
    _s_43224 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43224)){
        _s_43224 = (object)DBL_PTR(_s_43224)->dbl;
    }
    _22770 = NOVALUE;

    /** c_decl.e:871		while s do*/
L1: 
    if (_s_43224 == 0)
    {
        goto L2; // [38] 921
    }
    else{
    }

    /** c_decl.e:872			sym = SymTab[s]*/
    DeRef(_sym_43225);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _sym_43225 = (object)*(((s1_ptr)_2)->base + _s_43224);
    Ref(_sym_43225);

    /** c_decl.e:873			symo = sym*/
    RefDS(_sym_43225);
    DeRef(_symo_43226);
    _symo_43226 = _sym_43225;

    /** c_decl.e:874			if sym[S_TOKEN] = FUNC or sym[S_TOKEN] = TYPE then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22773 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22773 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    if (IS_ATOM_INT(_22773)) {
        _22774 = (_22773 == 501);
    }
    else {
        _22774 = binary_op(EQUALS, _22773, 501);
    }
    _22773 = NOVALUE;
    if (IS_ATOM_INT(_22774)) {
        if (_22774 != 0) {
            goto L3; // [72] 93
        }
    }
    else {
        if (DBL_PTR(_22774)->dbl != 0.0) {
            goto L3; // [72] 93
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22776 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22776 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    if (IS_ATOM_INT(_22776)) {
        _22777 = (_22776 == 504);
    }
    else {
        _22777 = binary_op(EQUALS, _22776, 504);
    }
    _22776 = NOVALUE;
    if (_22777 == 0) {
        DeRef(_22777);
        _22777 = NOVALUE;
        goto L4; // [89] 138
    }
    else {
        if (!IS_ATOM_INT(_22777) && DBL_PTR(_22777)->dbl == 0.0){
            DeRef(_22777);
            _22777 = NOVALUE;
            goto L4; // [89] 138
        }
        DeRef(_22777);
        _22777 = NOVALUE;
    }
    DeRef(_22777);
    _22777 = NOVALUE;
L3: 

    /** c_decl.e:875				if sym[S_GTYPE_NEW] = TYPE_NULL then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22778 = (object)*(((s1_ptr)_2)->base + 38);
    if (binary_op_a(NOTEQ, _22778, 0)){
        _22778 = NOVALUE;
        goto L5; // [103] 120
    }
    _22778 = NOVALUE;

    /** c_decl.e:876					sym[S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    goto L6; // [117] 549
L5: 

    /** c_decl.e:878					sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22780 = (object)*(((s1_ptr)_2)->base + 38);
    Ref(_22780);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22780;
    if( _1 != _22780 ){
        DeRef(_1);
    }
    _22780 = NOVALUE;
    goto L6; // [135] 549
L4: 

    /** c_decl.e:883				if sym[S_GTYPE] != TYPE_INTEGER and*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22781 = (object)*(((s1_ptr)_2)->base + 36);
    if (IS_ATOM_INT(_22781)) {
        _22782 = (_22781 != 1);
    }
    else {
        _22782 = binary_op(NOTEQ, _22781, 1);
    }
    _22781 = NOVALUE;
    if (IS_ATOM_INT(_22782)) {
        if (_22782 == 0) {
            DeRef(_22783);
            _22783 = 0;
            goto L7; // [152] 172
        }
    }
    else {
        if (DBL_PTR(_22782)->dbl == 0.0) {
            DeRef(_22783);
            _22783 = 0;
            goto L7; // [152] 172
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22784 = (object)*(((s1_ptr)_2)->base + 38);
    if (IS_ATOM_INT(_22784)) {
        _22785 = (_22784 != 16);
    }
    else {
        _22785 = binary_op(NOTEQ, _22784, 16);
    }
    _22784 = NOVALUE;
    DeRef(_22783);
    if (IS_ATOM_INT(_22785))
    _22783 = (_22785 != 0);
    else
    _22783 = DBL_PTR(_22785)->dbl != 0.0;
L7: 
    if (_22783 == 0) {
        goto L8; // [172] 283
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22787 = (object)*(((s1_ptr)_2)->base + 38);
    if (IS_ATOM_INT(_22787)) {
        _22788 = (_22787 != 0);
    }
    else {
        _22788 = binary_op(NOTEQ, _22787, 0);
    }
    _22787 = NOVALUE;
    if (_22788 == 0) {
        DeRef(_22788);
        _22788 = NOVALUE;
        goto L8; // [189] 283
    }
    else {
        if (!IS_ATOM_INT(_22788) && DBL_PTR(_22788)->dbl == 0.0){
            DeRef(_22788);
            _22788 = NOVALUE;
            goto L8; // [189] 283
        }
        DeRef(_22788);
        _22788 = NOVALUE;
    }
    DeRef(_22788);
    _22788 = NOVALUE;

    /** c_decl.e:886					if sym[S_GTYPE_NEW] = TYPE_INTEGER or*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22789 = (object)*(((s1_ptr)_2)->base + 38);
    if (IS_ATOM_INT(_22789)) {
        _22790 = (_22789 == 1);
    }
    else {
        _22790 = binary_op(EQUALS, _22789, 1);
    }
    _22789 = NOVALUE;
    if (IS_ATOM_INT(_22790)) {
        if (_22790 != 0) {
            DeRef(_22791);
            _22791 = 1;
            goto L9; // [206] 226
        }
    }
    else {
        if (DBL_PTR(_22790)->dbl != 0.0) {
            DeRef(_22791);
            _22791 = 1;
            goto L9; // [206] 226
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22792 = (object)*(((s1_ptr)_2)->base + 36);
    if (IS_ATOM_INT(_22792)) {
        _22793 = (_22792 == 16);
    }
    else {
        _22793 = binary_op(EQUALS, _22792, 16);
    }
    _22792 = NOVALUE;
    DeRef(_22791);
    if (IS_ATOM_INT(_22793))
    _22791 = (_22793 != 0);
    else
    _22791 = DBL_PTR(_22793)->dbl != 0.0;
L9: 
    if (_22791 != 0) {
        goto LA; // [226] 267
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22795 = (object)*(((s1_ptr)_2)->base + 36);
    if (IS_ATOM_INT(_22795)) {
        _22796 = (_22795 == 4);
    }
    else {
        _22796 = binary_op(EQUALS, _22795, 4);
    }
    _22795 = NOVALUE;
    if (IS_ATOM_INT(_22796)) {
        if (_22796 == 0) {
            DeRef(_22797);
            _22797 = 0;
            goto LB; // [242] 262
        }
    }
    else {
        if (DBL_PTR(_22796)->dbl == 0.0) {
            DeRef(_22797);
            _22797 = 0;
            goto LB; // [242] 262
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22798 = (object)*(((s1_ptr)_2)->base + 38);
    if (IS_ATOM_INT(_22798)) {
        _22799 = (_22798 == 2);
    }
    else {
        _22799 = binary_op(EQUALS, _22798, 2);
    }
    _22798 = NOVALUE;
    DeRef(_22797);
    if (IS_ATOM_INT(_22799))
    _22797 = (_22799 != 0);
    else
    _22797 = DBL_PTR(_22799)->dbl != 0.0;
LB: 
    if (_22797 == 0)
    {
        _22797 = NOVALUE;
        goto LC; // [263] 282
    }
    else{
        _22797 = NOVALUE;
    }
LA: 

    /** c_decl.e:890							sym[S_GTYPE] = sym[S_GTYPE_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22800 = (object)*(((s1_ptr)_2)->base + 38);
    Ref(_22800);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22800;
    if( _1 != _22800 ){
        DeRef(_1);
    }
    _22800 = NOVALUE;
LC: 
L8: 

    /** c_decl.e:893				if sym[S_ARG_TYPE_NEW] = TYPE_NULL then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22801 = (object)*(((s1_ptr)_2)->base + 44);
    if (binary_op_a(NOTEQ, _22801, 0)){
        _22801 = NOVALUE;
        goto LD; // [293] 310
    }
    _22801 = NOVALUE;

    /** c_decl.e:894					sym[S_ARG_TYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    goto LE; // [307] 325
LD: 

    /** c_decl.e:896					sym[S_ARG_TYPE] = sym[S_ARG_TYPE_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22803 = (object)*(((s1_ptr)_2)->base + 44);
    Ref(_22803);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22803;
    if( _1 != _22803 ){
        DeRef(_1);
    }
    _22803 = NOVALUE;
LE: 

    /** c_decl.e:898				sym[S_ARG_TYPE_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 44);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:900				if sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22804 = (object)*(((s1_ptr)_2)->base + 46);
    if (binary_op_a(NOTEQ, _22804, 0)){
        _22804 = NOVALUE;
        goto LF; // [345] 362
    }
    _22804 = NOVALUE;

    /** c_decl.e:901					sym[S_ARG_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    goto L10; // [359] 377
LF: 

    /** c_decl.e:903					sym[S_ARG_SEQ_ELEM] = sym[S_ARG_SEQ_ELEM_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22806 = (object)*(((s1_ptr)_2)->base + 46);
    Ref(_22806);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22806;
    if( _1 != _22806 ){
        DeRef(_1);
    }
    _22806 = NOVALUE;
L10: 

    /** c_decl.e:905				sym[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 46);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:907				if sym[S_ARG_MIN_NEW] = -NOVALUE or*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22807 = (object)*(((s1_ptr)_2)->base + 49);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22808 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22808 = - _39NOVALUE_16670;
        }
    }
    else {
        _22808 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (IS_ATOM_INT(_22807) && IS_ATOM_INT(_22808)) {
        _22809 = (_22807 == _22808);
    }
    else {
        _22809 = binary_op(EQUALS, _22807, _22808);
    }
    _22807 = NOVALUE;
    DeRef(_22808);
    _22808 = NOVALUE;
    if (IS_ATOM_INT(_22809)) {
        if (_22809 != 0) {
            goto L11; // [404] 425
        }
    }
    else {
        if (DBL_PTR(_22809)->dbl != 0.0) {
            goto L11; // [404] 425
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22811 = (object)*(((s1_ptr)_2)->base + 49);
    if (IS_ATOM_INT(_22811) && IS_ATOM_INT(_39NOVALUE_16670)) {
        _22812 = (_22811 == _39NOVALUE_16670);
    }
    else {
        _22812 = binary_op(EQUALS, _22811, _39NOVALUE_16670);
    }
    _22811 = NOVALUE;
    if (_22812 == 0) {
        DeRef(_22812);
        _22812 = NOVALUE;
        goto L12; // [421] 448
    }
    else {
        if (!IS_ATOM_INT(_22812) && DBL_PTR(_22812)->dbl == 0.0){
            DeRef(_22812);
            _22812 = NOVALUE;
            goto L12; // [421] 448
        }
        DeRef(_22812);
        _22812 = NOVALUE;
    }
    DeRef(_22812);
    _22812 = NOVALUE;
L11: 

    /** c_decl.e:909					sym[S_ARG_MIN] = MININT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);

    /** c_decl.e:910					sym[S_ARG_MAX] = MAXINT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    goto L13; // [445] 477
L12: 

    /** c_decl.e:912					sym[S_ARG_MIN] = sym[S_ARG_MIN_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22813 = (object)*(((s1_ptr)_2)->base + 49);
    Ref(_22813);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22813;
    if( _1 != _22813 ){
        DeRef(_1);
    }
    _22813 = NOVALUE;

    /** c_decl.e:913					sym[S_ARG_MAX] = sym[S_ARG_MAX_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22814 = (object)*(((s1_ptr)_2)->base + 50);
    Ref(_22814);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 48);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22814;
    if( _1 != _22814 ){
        DeRef(_1);
    }
    _22814 = NOVALUE;
L13: 

    /** c_decl.e:915				sym[S_ARG_MIN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22815 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22815 = - _39NOVALUE_16670;
        }
    }
    else {
        _22815 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22815;
    if( _1 != _22815 ){
        DeRef(_1);
    }
    _22815 = NOVALUE;

    /** c_decl.e:917				if sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22816 = (object)*(((s1_ptr)_2)->base + 52);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22817 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22817 = - _39NOVALUE_16670;
        }
    }
    else {
        _22817 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (binary_op_a(NOTEQ, _22816, _22817)){
        _22816 = NOVALUE;
        DeRef(_22817);
        _22817 = NOVALUE;
        goto L14; // [503] 520
    }
    _22816 = NOVALUE;
    DeRef(_22817);
    _22817 = NOVALUE;

    /** c_decl.e:918					sym[S_ARG_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L15; // [517] 535
L14: 

    /** c_decl.e:920					sym[S_ARG_SEQ_LEN] = sym[S_ARG_SEQ_LEN_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22819 = (object)*(((s1_ptr)_2)->base + 52);
    Ref(_22819);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22819;
    if( _1 != _22819 ){
        DeRef(_1);
    }
    _22819 = NOVALUE;
L15: 

    /** c_decl.e:922				sym[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22820 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22820 = - _39NOVALUE_16670;
        }
    }
    else {
        _22820 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22820;
    if( _1 != _22820 ){
        DeRef(_1);
    }
    _22820 = NOVALUE;
L6: 

    /** c_decl.e:925			sym[S_GTYPE_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:927			if sym[S_SEQ_ELEM_NEW] = TYPE_NULL then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22821 = (object)*(((s1_ptr)_2)->base + 40);
    if (binary_op_a(NOTEQ, _22821, 0)){
        _22821 = NOVALUE;
        goto L16; // [569] 586
    }
    _22821 = NOVALUE;

    /** c_decl.e:928			   sym[S_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    goto L17; // [583] 601
L16: 

    /** c_decl.e:930				sym[S_SEQ_ELEM] = sym[S_SEQ_ELEM_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22823 = (object)*(((s1_ptr)_2)->base + 40);
    Ref(_22823);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22823;
    if( _1 != _22823 ){
        DeRef(_1);
    }
    _22823 = NOVALUE;
L17: 

    /** c_decl.e:932			sym[S_SEQ_ELEM_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:934			if sym[S_SEQ_LEN_NEW] = -NOVALUE then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22824 = (object)*(((s1_ptr)_2)->base + 39);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22825 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22825 = - _39NOVALUE_16670;
        }
    }
    else {
        _22825 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (binary_op_a(NOTEQ, _22824, _22825)){
        _22824 = NOVALUE;
        DeRef(_22825);
        _22825 = NOVALUE;
        goto L18; // [624] 641
    }
    _22824 = NOVALUE;
    DeRef(_22825);
    _22825 = NOVALUE;

    /** c_decl.e:935				sym[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    goto L19; // [638] 656
L18: 

    /** c_decl.e:937				sym[S_SEQ_LEN] = sym[S_SEQ_LEN_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22827 = (object)*(((s1_ptr)_2)->base + 39);
    Ref(_22827);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22827;
    if( _1 != _22827 ){
        DeRef(_1);
    }
    _22827 = NOVALUE;
L19: 

    /** c_decl.e:939			sym[S_SEQ_LEN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22828 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22828 = - _39NOVALUE_16670;
        }
    }
    else {
        _22828 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22828;
    if( _1 != _22828 ){
        DeRef(_1);
    }
    _22828 = NOVALUE;

    /** c_decl.e:941			if sym[S_TOKEN] != NAMESPACE*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22829 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22829 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    if (IS_ATOM_INT(_22829)) {
        _22830 = (_22829 != 523);
    }
    else {
        _22830 = binary_op(NOTEQ, _22829, 523);
    }
    _22829 = NOVALUE;
    if (IS_ATOM_INT(_22830)) {
        if (_22830 == 0) {
            goto L1A; // [683] 794
        }
    }
    else {
        if (DBL_PTR(_22830)->dbl == 0.0) {
            goto L1A; // [683] 794
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22832 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_22832)) {
        _22833 = (_22832 != 2);
    }
    else {
        _22833 = binary_op(NOTEQ, _22832, 2);
    }
    _22832 = NOVALUE;
    if (_22833 == 0) {
        DeRef(_22833);
        _22833 = NOVALUE;
        goto L1A; // [700] 794
    }
    else {
        if (!IS_ATOM_INT(_22833) && DBL_PTR(_22833)->dbl == 0.0){
            DeRef(_22833);
            _22833 = NOVALUE;
            goto L1A; // [700] 794
        }
        DeRef(_22833);
        _22833 = NOVALUE;
    }
    DeRef(_22833);
    _22833 = NOVALUE;

    /** c_decl.e:944				if sym[S_OBJ_MIN_NEW] = -NOVALUE or*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22834 = (object)*(((s1_ptr)_2)->base + 41);
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22835 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22835 = - _39NOVALUE_16670;
        }
    }
    else {
        _22835 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    if (IS_ATOM_INT(_22834) && IS_ATOM_INT(_22835)) {
        _22836 = (_22834 == _22835);
    }
    else {
        _22836 = binary_op(EQUALS, _22834, _22835);
    }
    _22834 = NOVALUE;
    DeRef(_22835);
    _22835 = NOVALUE;
    if (IS_ATOM_INT(_22836)) {
        if (_22836 != 0) {
            goto L1B; // [720] 741
        }
    }
    else {
        if (DBL_PTR(_22836)->dbl != 0.0) {
            goto L1B; // [720] 741
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    _22838 = (object)*(((s1_ptr)_2)->base + 41);
    if (IS_ATOM_INT(_22838) && IS_ATOM_INT(_39NOVALUE_16670)) {
        _22839 = (_22838 == _39NOVALUE_16670);
    }
    else {
        _22839 = binary_op(EQUALS, _22838, _39NOVALUE_16670);
    }
    _22838 = NOVALUE;
    if (_22839 == 0) {
        DeRef(_22839);
        _22839 = NOVALUE;
        goto L1C; // [737] 764
    }
    else {
        if (!IS_ATOM_INT(_22839) && DBL_PTR(_22839)->dbl == 0.0){
            DeRef(_22839);
            _22839 = NOVALUE;
            goto L1C; // [737] 764
        }
        DeRef(_22839);
        _22839 = NOVALUE;
    }
    DeRef(_22839);
    _22839 = NOVALUE;
L1B: 

    /** c_decl.e:946					sym[S_OBJ_MIN] = MININT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);

    /** c_decl.e:947					sym[S_OBJ_MAX] = MAXINT*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    goto L1D; // [761] 793
L1C: 

    /** c_decl.e:949					sym[S_OBJ_MIN] = sym[S_OBJ_MIN_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22840 = (object)*(((s1_ptr)_2)->base + 41);
    Ref(_22840);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22840;
    if( _1 != _22840 ){
        DeRef(_1);
    }
    _22840 = NOVALUE;

    /** c_decl.e:950					sym[S_OBJ_MAX] = sym[S_OBJ_MAX_NEW]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22841 = (object)*(((s1_ptr)_2)->base + 42);
    Ref(_22841);
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22841;
    if( _1 != _22841 ){
        DeRef(_1);
    }
    _22841 = NOVALUE;
L1D: 
L1A: 

    /** c_decl.e:953			sym[S_OBJ_MIN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _22842 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _22842 = - _39NOVALUE_16670;
        }
    }
    else {
        _22842 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _22842;
    if( _1 != _22842 ){
        DeRef(_1);
    }
    _22842 = NOVALUE;

    /** c_decl.e:955			if sym[S_NREFS] = 1 and*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22843 = (object)*(((s1_ptr)_2)->base + 12);
    if (IS_ATOM_INT(_22843)) {
        _22844 = (_22843 == 1);
    }
    else {
        _22844 = binary_op(EQUALS, _22843, 1);
    }
    _22843 = NOVALUE;
    if (IS_ATOM_INT(_22844)) {
        if (_22844 == 0) {
            goto L1E; // [819] 874
        }
    }
    else {
        if (DBL_PTR(_22844)->dbl == 0.0) {
            goto L1E; // [819] 874
        }
    }
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22846 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22846 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _22847 = find_from(_22846, _40RTN_TOKS_16423, 1);
    _22846 = NOVALUE;
    if (_22847 == 0)
    {
        _22847 = NOVALUE;
        goto L1E; // [837] 874
    }
    else{
        _22847 = NOVALUE;
    }

    /** c_decl.e:957				if sym[S_USAGE] != U_DELETED then*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _22848 = (object)*(((s1_ptr)_2)->base + 5);
    if (binary_op_a(EQUALS, _22848, 99)){
        _22848 = NOVALUE;
        goto L1F; // [850] 873
    }
    _22848 = NOVALUE;

    /** c_decl.e:958					sym[S_USAGE] = U_DELETED*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 99;
    DeRef(_1);

    /** c_decl.e:959					deleted_routines += 1*/
    _60deleted_routines_43219 = _60deleted_routines_43219 + 1;
L1F: 
L1E: 

    /** c_decl.e:962			sym[S_NREFS] = 0*/
    _2 = (object)SEQ_PTR(_sym_43225);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _sym_43225 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** c_decl.e:963			if not equal(symo, sym) then*/
    if (_symo_43226 == _sym_43225)
    _22851 = 1;
    else if (IS_ATOM_INT(_symo_43226) && IS_ATOM_INT(_sym_43225))
    _22851 = 0;
    else
    _22851 = (compare(_symo_43226, _sym_43225) == 0);
    if (_22851 != 0)
    goto L20; // [888] 906
    _22851 = NOVALUE;

    /** c_decl.e:964				SymTab[s] = sym*/
    RefDS(_sym_43225);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _s_43224);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_43225;
    DeRef(_1);

    /** c_decl.e:965				updsym += 1*/
    _updsym_43222 = _updsym_43222 + 1;
L20: 

    /** c_decl.e:967			s = sym[S_NEXT]*/
    _2 = (object)SEQ_PTR(_sym_43225);
    _s_43224 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43224)){
        _s_43224 = (object)DBL_PTR(_s_43224)->dbl;
    }

    /** c_decl.e:968		end while*/
    goto L1; // [918] 38
L2: 

    /** c_decl.e:971		for i = 1 to length(temp_name_type) do*/
    if (IS_SEQUENCE(_39temp_name_type_16897)){
            _22855 = SEQ_PTR(_39temp_name_type_16897)->length;
    }
    else {
        _22855 = 1;
    }
    {
        object _i_43452;
        _i_43452 = 1;
L21: 
        if (_i_43452 > _22855){
            goto L22; // [928] 1061
        }

        /** c_decl.e:972			integer upd = 0*/
        _upd_43455 = 0;

        /** c_decl.e:974			if temp_name_type[i][T_GTYPE] != temp_name_type[i][T_GTYPE_NEW] then*/
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        _22856 = (object)*(((s1_ptr)_2)->base + _i_43452);
        _2 = (object)SEQ_PTR(_22856);
        _22857 = (object)*(((s1_ptr)_2)->base + 1);
        _22856 = NOVALUE;
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        _22858 = (object)*(((s1_ptr)_2)->base + _i_43452);
        _2 = (object)SEQ_PTR(_22858);
        _22859 = (object)*(((s1_ptr)_2)->base + 2);
        _22858 = NOVALUE;
        if (binary_op_a(EQUALS, _22857, _22859)){
            _22857 = NOVALUE;
            _22859 = NOVALUE;
            goto L23; // [966] 1003
        }
        _22857 = NOVALUE;
        _22859 = NOVALUE;

        /** c_decl.e:975				temp_name_type[i][T_GTYPE] = temp_name_type[i][T_GTYPE_NEW]*/
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39temp_name_type_16897 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43452 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        _22863 = (object)*(((s1_ptr)_2)->base + _i_43452);
        _2 = (object)SEQ_PTR(_22863);
        _22864 = (object)*(((s1_ptr)_2)->base + 2);
        _22863 = NOVALUE;
        Ref(_22864);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _22864;
        if( _1 != _22864 ){
            DeRef(_1);
        }
        _22864 = NOVALUE;
        _22861 = NOVALUE;

        /** c_decl.e:976				upd = 1*/
        _upd_43455 = 1;
L23: 

        /** c_decl.e:978			if temp_name_type[i][T_GTYPE_NEW] != TYPE_NULL then*/
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        _22865 = (object)*(((s1_ptr)_2)->base + _i_43452);
        _2 = (object)SEQ_PTR(_22865);
        _22866 = (object)*(((s1_ptr)_2)->base + 2);
        _22865 = NOVALUE;
        if (binary_op_a(EQUALS, _22866, 0)){
            _22866 = NOVALUE;
            goto L24; // [1019] 1046
        }
        _22866 = NOVALUE;

        /** c_decl.e:979				temp_name_type[i][T_GTYPE_NEW] = TYPE_NULL*/
        _2 = (object)SEQ_PTR(_39temp_name_type_16897);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _39temp_name_type_16897 = MAKE_SEQ(_2);
        }
        _3 = (object)(_i_43452 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 2);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 0;
        DeRef(_1);
        _22868 = NOVALUE;

        /** c_decl.e:980				upd = 1*/
        _upd_43455 = 1;
L24: 

        /** c_decl.e:982			updsym += upd*/
        _updsym_43222 = _updsym_43222 + _upd_43455;

        /** c_decl.e:983		end for*/
        _i_43452 = _i_43452 + 1;
        goto L21; // [1056] 935
L22: 
        ;
    }

    /** c_decl.e:985		return updsym*/
    DeRef(_sym_43225);
    DeRef(_symo_43226);
    DeRef(_22844);
    _22844 = NOVALUE;
    DeRef(_22799);
    _22799 = NOVALUE;
    DeRef(_22790);
    _22790 = NOVALUE;
    DeRef(_22796);
    _22796 = NOVALUE;
    DeRef(_22782);
    _22782 = NOVALUE;
    DeRef(_22830);
    _22830 = NOVALUE;
    DeRef(_22809);
    _22809 = NOVALUE;
    DeRef(_22774);
    _22774 = NOVALUE;
    DeRef(_22785);
    _22785 = NOVALUE;
    DeRef(_22836);
    _22836 = NOVALUE;
    DeRef(_22793);
    _22793 = NOVALUE;
    return _updsym_43222;
    ;
}


void _60declare_prototype(object _s_43490)
{
    object _ret_type_43491 = NOVALUE;
    object _scope_43502 = NOVALUE;
    object _22888 = NOVALUE;
    object _22887 = NOVALUE;
    object _22885 = NOVALUE;
    object _22884 = NOVALUE;
    object _22883 = NOVALUE;
    object _22882 = NOVALUE;
    object _22880 = NOVALUE;
    object _22879 = NOVALUE;
    object _22878 = NOVALUE;
    object _22877 = NOVALUE;
    object _22876 = NOVALUE;
    object _22874 = NOVALUE;
    object _22873 = NOVALUE;
    object _22871 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:990		if sym_token( s ) = PROC then*/
    _22871 = _56sym_token(_s_43490);
    if (binary_op_a(NOTEQ, _22871, 27)){
        DeRef(_22871);
        _22871 = NOVALUE;
        goto L1; // [11] 25
    }
    DeRef(_22871);
    _22871 = NOVALUE;

    /** c_decl.e:991			ret_type = "void "*/
    RefDS(_22712);
    DeRefi(_ret_type_43491);
    _ret_type_43491 = _22712;
    goto L2; // [22] 33
L1: 

    /** c_decl.e:993			ret_type ="object "*/
    RefDS(_22713);
    DeRefi(_ret_type_43491);
    _ret_type_43491 = _22713;
L2: 

    /** c_decl.e:996		c_hputs(ret_type)*/
    RefDS(_ret_type_43491);
    _57c_hputs(_ret_type_43491);

    /** c_decl.e:999		if dll_option and TWINDOWS  then*/
    if (_60dll_option_42089 == 0) {
        goto L3; // [44] 116
    }
    goto L3; // [51] 116

    /** c_decl.e:1000			integer scope = SymTab[s][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22874 = (object)*(((s1_ptr)_2)->base + _s_43490);
    _2 = (object)SEQ_PTR(_22874);
    _scope_43502 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43502)){
        _scope_43502 = (object)DBL_PTR(_scope_43502)->dbl;
    }
    _22874 = NOVALUE;

    /** c_decl.e:1001			if (scope = SC_PUBLIC*/
    _22876 = (_scope_43502 == 13);
    if (_22876 != 0) {
        _22877 = 1;
        goto L4; // [78] 92
    }
    _22878 = (_scope_43502 == 11);
    _22877 = (_22878 != 0);
L4: 
    if (_22877 != 0) {
        DeRef(_22879);
        _22879 = 1;
        goto L5; // [92] 106
    }
    _22880 = (_scope_43502 == 6);
    _22879 = (_22880 != 0);
L5: 
    if (_22879 == 0)
    {
        _22879 = NOVALUE;
        goto L6; // [106] 115
    }
    else{
        _22879 = NOVALUE;
    }

    /** c_decl.e:1006				c_hputs("__stdcall ")*/
    RefDS(_22881);
    _57c_hputs(_22881);
L6: 
L3: 

    /** c_decl.e:1010		c_hprintf("_%d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22882 = (object)*(((s1_ptr)_2)->base + _s_43490);
    _2 = (object)SEQ_PTR(_22882);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22883 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22883 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22882 = NOVALUE;
    RefDS(_22051);
    Ref(_22883);
    _57c_hprintf(_22051, _22883);
    _22883 = NOVALUE;

    /** c_decl.e:1011		c_hputs(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22884 = (object)*(((s1_ptr)_2)->base + _s_43490);
    _2 = (object)SEQ_PTR(_22884);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22885 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22885 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22884 = NOVALUE;
    Ref(_22885);
    _57c_hputs(_22885);
    _22885 = NOVALUE;

    /** c_decl.e:1012		c_hputs("(")*/
    RefDS(_22886);
    _57c_hputs(_22886);

    /** c_decl.e:1014		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22887 = (object)*(((s1_ptr)_2)->base + _s_43490);
    _2 = (object)SEQ_PTR(_22887);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _22888 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _22888 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _22887 = NOVALUE;
    {
        object _i_43531;
        _i_43531 = 1;
L7: 
        if (binary_op_a(GREATER, _i_43531, _22888)){
            goto L8; // [172] 206
        }

        /** c_decl.e:1015			if i = 1 then*/
        if (binary_op_a(NOTEQ, _i_43531, 1)){
            goto L9; // [181] 193
        }

        /** c_decl.e:1016				c_hputs("object")*/
        RefDS(_22890);
        _57c_hputs(_22890);
        goto LA; // [190] 199
L9: 

        /** c_decl.e:1018				c_hputs(", object")*/
        RefDS(_22891);
        _57c_hputs(_22891);
LA: 

        /** c_decl.e:1020		end for*/
        _0 = _i_43531;
        if (IS_ATOM_INT(_i_43531)) {
            _i_43531 = _i_43531 + 1;
            if ((object)((uintptr_t)_i_43531 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43531 = NewDouble((eudouble)_i_43531);
            }
        }
        else {
            _i_43531 = binary_op_a(PLUS, _i_43531, 1);
        }
        DeRef(_0);
        goto L7; // [201] 179
L8: 
        ;
        DeRef(_i_43531);
    }

    /** c_decl.e:1021		c_hputs(");\n")*/
    RefDS(_22232);
    _57c_hputs(_22232);

    /** c_decl.e:1022	end procedure*/
    DeRefi(_ret_type_43491);
    DeRef(_22878);
    _22878 = NOVALUE;
    DeRef(_22880);
    _22880 = NOVALUE;
    DeRef(_22876);
    _22876 = NOVALUE;
    _22888 = NOVALUE;
    return;
    ;
}


void _60add_to_routine_list(object _s_43547, object _seq_num_43548, object _first_43549)
{
    object _p_43624 = NOVALUE;
    object _22937 = NOVALUE;
    object _22935 = NOVALUE;
    object _22933 = NOVALUE;
    object _22931 = NOVALUE;
    object _22929 = NOVALUE;
    object _22928 = NOVALUE;
    object _22927 = NOVALUE;
    object _22925 = NOVALUE;
    object _22923 = NOVALUE;
    object _22921 = NOVALUE;
    object _22920 = NOVALUE;
    object _22918 = NOVALUE;
    object _22917 = NOVALUE;
    object _22913 = NOVALUE;
    object _22912 = NOVALUE;
    object _22911 = NOVALUE;
    object _22910 = NOVALUE;
    object _22909 = NOVALUE;
    object _22908 = NOVALUE;
    object _22907 = NOVALUE;
    object _22906 = NOVALUE;
    object _22905 = NOVALUE;
    object _22904 = NOVALUE;
    object _22902 = NOVALUE;
    object _22901 = NOVALUE;
    object _22900 = NOVALUE;
    object _22899 = NOVALUE;
    object _22896 = NOVALUE;
    object _22895 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** c_decl.e:1025		if not first then*/
    if (_first_43549 != 0)
    goto L1; // [9] 18

    /** c_decl.e:1026			c_puts(",\n")*/
    RefDS(_22893);
    _57c_puts(_22893);
L1: 

    /** c_decl.e:1029		c_puts("  {\"")*/
    RefDS(_22894);
    _57c_puts(_22894);

    /** c_decl.e:1031		c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22895 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22895);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22896 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22896 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22895 = NOVALUE;
    Ref(_22896);
    _57c_puts(_22896);
    _22896 = NOVALUE;

    /** c_decl.e:1032		c_puts("\", ")*/
    RefDS(_22897);
    _57c_puts(_22897);

    /** c_decl.e:1033		c_puts("(object (*)())")*/
    RefDS(_22898);
    _57c_puts(_22898);

    /** c_decl.e:1034		c_printf("_%d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22899 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22899);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22900 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22900 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22899 = NOVALUE;
    RefDS(_22051);
    Ref(_22900);
    _57c_printf(_22051, _22900);
    _22900 = NOVALUE;

    /** c_decl.e:1035		c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22901 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22901);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22902 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22902 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22901 = NOVALUE;
    Ref(_22902);
    _57c_puts(_22902);
    _22902 = NOVALUE;

    /** c_decl.e:1036		c_printf(", %d", seq_num)*/
    RefDS(_22903);
    _57c_printf(_22903, _seq_num_43548);

    /** c_decl.e:1037		c_printf(", %d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22904 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22904);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22905 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22905 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22904 = NOVALUE;
    RefDS(_22903);
    Ref(_22905);
    _57c_printf(_22903, _22905);
    _22905 = NOVALUE;

    /** c_decl.e:1038		c_printf(", %d", SymTab[s][S_NUM_ARGS])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22906 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22906);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _22907 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _22907 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _22906 = NOVALUE;
    RefDS(_22903);
    Ref(_22907);
    _57c_printf(_22903, _22907);
    _22907 = NOVALUE;

    /** c_decl.e:1040		if TWINDOWS and dll_option and find( SymTab[s][S_SCOPE], { SC_GLOBAL, SC_EXPORT, SC_PUBLIC} ) then*/
    if (0 == 0) {
        _22908 = 0;
        goto L2; // [131] 141
    }
    _22908 = (_60dll_option_42089 != 0);
L2: 
    if (_22908 == 0) {
        goto L3; // [141] 186
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22910 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22910);
    _22911 = (object)*(((s1_ptr)_2)->base + 4);
    _22910 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 11;
    ((intptr_t*)_2)[3] = 13;
    _22912 = MAKE_SEQ(_1);
    _22913 = find_from(_22911, _22912, 1);
    _22911 = NOVALUE;
    DeRefDS(_22912);
    _22912 = NOVALUE;
    if (_22913 == 0)
    {
        _22913 = NOVALUE;
        goto L3; // [175] 186
    }
    else{
        _22913 = NOVALUE;
    }

    /** c_decl.e:1041			c_puts(", 1")  -- must call with __stdcall convention*/
    RefDS(_22914);
    _57c_puts(_22914);
    goto L4; // [183] 192
L3: 

    /** c_decl.e:1043			c_puts(", 0")  -- default: call with normal or __cdecl convention*/
    RefDS(_22915);
    _57c_puts(_22915);
L4: 

    /** c_decl.e:1046		c_printf(", %d, 0", SymTab[s][S_SCOPE] )*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22917 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22917);
    _22918 = (object)*(((s1_ptr)_2)->base + 4);
    _22917 = NOVALUE;
    RefDS(_22916);
    Ref(_22918);
    _57c_printf(_22916, _22918);
    _22918 = NOVALUE;

    /** c_decl.e:1047		c_puts("}")*/
    RefDS(_22919);
    _57c_puts(_22919);

    /** c_decl.e:1049		if SymTab[s][S_NREFS] < 2 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22920 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22920);
    _22921 = (object)*(((s1_ptr)_2)->base + 12);
    _22920 = NOVALUE;
    if (binary_op_a(GREATEREQ, _22921, 2)){
        _22921 = NOVALUE;
        goto L5; // [229] 249
    }
    _22921 = NOVALUE;

    /** c_decl.e:1050			SymTab[s][S_NREFS] = 2 --s->nrefs++*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_43547 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _22923 = NOVALUE;
L5: 

    /** c_decl.e:1055		symtab_index p = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22925 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22925);
    _p_43624 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_43624)){
        _p_43624 = (object)DBL_PTR(_p_43624)->dbl;
    }
    _22925 = NOVALUE;

    /** c_decl.e:1056		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22927 = (object)*(((s1_ptr)_2)->base + _s_43547);
    _2 = (object)SEQ_PTR(_22927);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _22928 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _22928 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _22927 = NOVALUE;
    {
        object _i_43630;
        _i_43630 = 1;
L6: 
        if (binary_op_a(GREATER, _i_43630, _22928)){
            goto L7; // [279] 377
        }

        /** c_decl.e:1057			SymTab[p][S_ARG_SEQ_ELEM_NEW] = TYPE_OBJECT*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43624 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 46);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 16;
        DeRef(_1);
        _22929 = NOVALUE;

        /** c_decl.e:1058			SymTab[p][S_ARG_TYPE_NEW] = TYPE_OBJECT*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43624 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 44);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = 16;
        DeRef(_1);
        _22931 = NOVALUE;

        /** c_decl.e:1059			SymTab[p][S_ARG_MIN_NEW] = NOVALUE*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43624 + ((s1_ptr)_2)->base);
        Ref(_39NOVALUE_16670);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 49);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _39NOVALUE_16670;
        DeRef(_1);
        _22933 = NOVALUE;

        /** c_decl.e:1060			SymTab[p][S_ARG_SEQ_LEN_NEW] = NOVALUE*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_43624 + ((s1_ptr)_2)->base);
        Ref(_39NOVALUE_16670);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 52);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _39NOVALUE_16670;
        DeRef(_1);
        _22935 = NOVALUE;

        /** c_decl.e:1061			p = SymTab[p][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _22937 = (object)*(((s1_ptr)_2)->base + _p_43624);
        _2 = (object)SEQ_PTR(_22937);
        _p_43624 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_p_43624)){
            _p_43624 = (object)DBL_PTR(_p_43624)->dbl;
        }
        _22937 = NOVALUE;

        /** c_decl.e:1062		end for*/
        _0 = _i_43630;
        if (IS_ATOM_INT(_i_43630)) {
            _i_43630 = _i_43630 + 1;
            if ((object)((uintptr_t)_i_43630 +(uintptr_t) HIGH_BITS) >= 0){
                _i_43630 = NewDouble((eudouble)_i_43630);
            }
        }
        else {
            _i_43630 = binary_op_a(PLUS, _i_43630, 1);
        }
        DeRef(_0);
        goto L6; // [372] 286
L7: 
        ;
        DeRef(_i_43630);
    }

    /** c_decl.e:1063	end procedure*/
    _22928 = NOVALUE;
    return;
    ;
}


void _60DeclareRoutineList()
{
    object _s_43662 = NOVALUE;
    object _first_43663 = NOVALUE;
    object _seq_num_43664 = NOVALUE;
    object _these_routines_43672 = NOVALUE;
    object _these_routines_43694 = NOVALUE;
    object _22953 = NOVALUE;
    object _22952 = NOVALUE;
    object _22950 = NOVALUE;
    object _22948 = NOVALUE;
    object _22945 = NOVALUE;
    object _22944 = NOVALUE;
    object _22942 = NOVALUE;
    object _22940 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1069		integer first, seq_num*/

    /** c_decl.e:1071		c_hputs("extern struct routine_list _00[];\n")*/
    RefDS(_22939);
    _57c_hputs(_22939);

    /** c_decl.e:1073		check_file_routines()*/
    _60check_file_routines();

    /** c_decl.e:1074		for f = 1 to length( file_routines ) do*/
    if (IS_SEQUENCE(_60file_routines_44249)){
            _22940 = SEQ_PTR(_60file_routines_44249)->length;
    }
    else {
        _22940 = 1;
    }
    {
        object _f_43669;
        _f_43669 = 1;
L1: 
        if (_f_43669 > _22940){
            goto L2; // [19] 98
        }

        /** c_decl.e:1075			sequence these_routines = file_routines[f]*/
        DeRef(_these_routines_43672);
        _2 = (object)SEQ_PTR(_60file_routines_44249);
        _these_routines_43672 = (object)*(((s1_ptr)_2)->base + _f_43669);
        Ref(_these_routines_43672);

        /** c_decl.e:1076			for r = 1 to length( these_routines ) do*/
        if (IS_SEQUENCE(_these_routines_43672)){
                _22942 = SEQ_PTR(_these_routines_43672)->length;
        }
        else {
            _22942 = 1;
        }
        {
            object _r_43676;
            _r_43676 = 1;
L3: 
            if (_r_43676 > _22942){
                goto L4; // [41] 89
            }

            /** c_decl.e:1077				s = these_routines[r]*/
            _2 = (object)SEQ_PTR(_these_routines_43672);
            _s_43662 = (object)*(((s1_ptr)_2)->base + _r_43676);
            if (!IS_ATOM_INT(_s_43662)){
                _s_43662 = (object)DBL_PTR(_s_43662)->dbl;
            }

            /** c_decl.e:1078				if SymTab[s][S_USAGE] != U_DELETED then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _22944 = (object)*(((s1_ptr)_2)->base + _s_43662);
            _2 = (object)SEQ_PTR(_22944);
            _22945 = (object)*(((s1_ptr)_2)->base + 5);
            _22944 = NOVALUE;
            if (binary_op_a(EQUALS, _22945, 99)){
                _22945 = NOVALUE;
                goto L5; // [72] 82
            }
            _22945 = NOVALUE;

            /** c_decl.e:1080					declare_prototype( s )*/
            _60declare_prototype(_s_43662);
L5: 

            /** c_decl.e:1083			end for*/
            _r_43676 = _r_43676 + 1;
            goto L3; // [84] 48
L4: 
            ;
        }
        DeRef(_these_routines_43672);
        _these_routines_43672 = NOVALUE;

        /** c_decl.e:1084		end for*/
        _f_43669 = _f_43669 + 1;
        goto L1; // [93] 26
L2: 
        ;
    }

    /** c_decl.e:1085		c_puts("\n")*/
    RefDS(_22123);
    _57c_puts(_22123);

    /** c_decl.e:1088		seq_num = 0*/
    _seq_num_43664 = 0;

    /** c_decl.e:1089		first = TRUE*/
    _first_43663 = _9TRUE_444;

    /** c_decl.e:1090		c_puts("struct routine_list _00[] = {\n")*/
    RefDS(_22947);
    _57c_puts(_22947);

    /** c_decl.e:1092		for f = 1 to length( file_routines ) do*/
    if (IS_SEQUENCE(_60file_routines_44249)){
            _22948 = SEQ_PTR(_60file_routines_44249)->length;
    }
    else {
        _22948 = 1;
    }
    {
        object _f_43691;
        _f_43691 = 1;
L6: 
        if (_f_43691 > _22948){
            goto L7; // [129] 222
        }

        /** c_decl.e:1093			sequence these_routines = file_routines[f]*/
        DeRef(_these_routines_43694);
        _2 = (object)SEQ_PTR(_60file_routines_44249);
        _these_routines_43694 = (object)*(((s1_ptr)_2)->base + _f_43691);
        Ref(_these_routines_43694);

        /** c_decl.e:1094			for r = 1 to length( these_routines ) do*/
        if (IS_SEQUENCE(_these_routines_43694)){
                _22950 = SEQ_PTR(_these_routines_43694)->length;
        }
        else {
            _22950 = 1;
        }
        {
            object _r_43698;
            _r_43698 = 1;
L8: 
            if (_r_43698 > _22950){
                goto L9; // [151] 213
            }

            /** c_decl.e:1095				s = these_routines[r]*/
            _2 = (object)SEQ_PTR(_these_routines_43694);
            _s_43662 = (object)*(((s1_ptr)_2)->base + _r_43698);
            if (!IS_ATOM_INT(_s_43662)){
                _s_43662 = (object)DBL_PTR(_s_43662)->dbl;
            }

            /** c_decl.e:1096				if SymTab[s][S_RI_TARGET] then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _22952 = (object)*(((s1_ptr)_2)->base + _s_43662);
            _2 = (object)SEQ_PTR(_22952);
            _22953 = (object)*(((s1_ptr)_2)->base + 53);
            _22952 = NOVALUE;
            if (_22953 == 0) {
                _22953 = NOVALUE;
                goto LA; // [180] 200
            }
            else {
                if (!IS_ATOM_INT(_22953) && DBL_PTR(_22953)->dbl == 0.0){
                    _22953 = NOVALUE;
                    goto LA; // [180] 200
                }
                _22953 = NOVALUE;
            }
            _22953 = NOVALUE;

            /** c_decl.e:1098					add_to_routine_list( s, seq_num, first )*/
            _60add_to_routine_list(_s_43662, _seq_num_43664, _first_43663);

            /** c_decl.e:1099					first = FALSE*/
            _first_43663 = _9FALSE_442;
LA: 

            /** c_decl.e:1102				seq_num += 1*/
            _seq_num_43664 = _seq_num_43664 + 1;

            /** c_decl.e:1103			end for*/
            _r_43698 = _r_43698 + 1;
            goto L8; // [208] 158
L9: 
            ;
        }
        DeRef(_these_routines_43694);
        _these_routines_43694 = NOVALUE;

        /** c_decl.e:1104		end for*/
        _f_43691 = _f_43691 + 1;
        goto L6; // [217] 136
L7: 
        ;
    }

    /** c_decl.e:1105		if not first then*/
    if (_first_43663 != 0)
    goto LB; // [224] 233

    /** c_decl.e:1106			c_puts(",\n")*/
    RefDS(_22893);
    _57c_puts(_22893);
LB: 

    /** c_decl.e:1108		c_puts("  {\"\", 0, 999999999, 0, 0, 0, 0}\n};\n\n")  -- end marker*/
    RefDS(_22956);
    _57c_puts(_22956);

    /** c_decl.e:1110		c_hputs("extern char ** _02;\n")*/
    RefDS(_22957);
    _57c_hputs(_22957);

    /** c_decl.e:1111		c_puts("char ** _02;\n")*/
    RefDS(_22958);
    _57c_puts(_22958);

    /** c_decl.e:1113		c_hputs("extern object _0switches;\n")*/
    RefDS(_22959);
    _57c_hputs(_22959);

    /** c_decl.e:1114		c_puts("object _0switches;\n")*/
    RefDS(_22960);
    _57c_puts(_22960);

    /** c_decl.e:1115	end procedure*/
    return;
    ;
}


void _60DeclareNameSpaceList()
{
    object _s_43724 = NOVALUE;
    object _first_43725 = NOVALUE;
    object _seq_num_43726 = NOVALUE;
    object _22980 = NOVALUE;
    object _22978 = NOVALUE;
    object _22977 = NOVALUE;
    object _22976 = NOVALUE;
    object _22975 = NOVALUE;
    object _22973 = NOVALUE;
    object _22972 = NOVALUE;
    object _22969 = NOVALUE;
    object _22968 = NOVALUE;
    object _22967 = NOVALUE;
    object _22966 = NOVALUE;
    object _22965 = NOVALUE;
    object _22963 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1121		integer first, seq_num*/

    /** c_decl.e:1123		c_hputs("extern struct ns_list _01[];\n")*/
    RefDS(_22961);
    _57c_hputs(_22961);

    /** c_decl.e:1124		c_puts("struct ns_list _01[] = {\n")*/
    RefDS(_22962);
    _57c_puts(_22962);

    /** c_decl.e:1126		seq_num = 0*/
    _seq_num_43726 = 0;

    /** c_decl.e:1127		first = TRUE*/
    _first_43725 = _9TRUE_444;

    /** c_decl.e:1129		s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22963 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_22963);
    _s_43724 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43724)){
        _s_43724 = (object)DBL_PTR(_s_43724)->dbl;
    }
    _22963 = NOVALUE;

    /** c_decl.e:1130		while s do*/
L1: 
    if (_s_43724 == 0)
    {
        goto L2; // [50] 215
    }
    else{
    }

    /** c_decl.e:1131			if find(SymTab[s][S_TOKEN], NAMED_TOKS) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22965 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22965);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22966 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22966 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _22965 = NOVALUE;
    _22967 = find_from(_22966, _40NAMED_TOKS_16425, 1);
    _22966 = NOVALUE;
    if (_22967 == 0)
    {
        _22967 = NOVALUE;
        goto L3; // [74] 194
    }
    else{
        _22967 = NOVALUE;
    }

    /** c_decl.e:1132				if SymTab[s][S_TOKEN] = NAMESPACE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22968 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22968);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _22969 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _22969 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _22968 = NOVALUE;
    if (binary_op_a(NOTEQ, _22969, 523)){
        _22969 = NOVALUE;
        goto L4; // [93] 187
    }
    _22969 = NOVALUE;

    /** c_decl.e:1133					if not first then*/
    if (_first_43725 != 0)
    goto L5; // [99] 108

    /** c_decl.e:1134						c_puts(",\n")*/
    RefDS(_22893);
    _57c_puts(_22893);
L5: 

    /** c_decl.e:1136					first = FALSE*/
    _first_43725 = _9FALSE_442;

    /** c_decl.e:1138					c_puts("  {\"")*/
    RefDS(_22894);
    _57c_puts(_22894);

    /** c_decl.e:1139					c_puts(SymTab[s][S_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22972 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22972);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _22973 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _22973 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _22972 = NOVALUE;
    Ref(_22973);
    _57c_puts(_22973);
    _22973 = NOVALUE;

    /** c_decl.e:1140					c_printf("\", %d", SymTab[s][S_OBJ])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22975 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22975);
    _22976 = (object)*(((s1_ptr)_2)->base + 1);
    _22975 = NOVALUE;
    RefDS(_22974);
    Ref(_22976);
    _57c_printf(_22974, _22976);
    _22976 = NOVALUE;

    /** c_decl.e:1141					c_printf(", %d", seq_num)*/
    RefDS(_22903);
    _57c_printf(_22903, _seq_num_43726);

    /** c_decl.e:1142					c_printf(", %d", SymTab[s][S_FILE_NO])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22977 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22977);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22978 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22978 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _22977 = NOVALUE;
    RefDS(_22903);
    Ref(_22978);
    _57c_printf(_22903, _22978);
    _22978 = NOVALUE;

    /** c_decl.e:1144					c_puts("}")*/
    RefDS(_22919);
    _57c_puts(_22919);
L4: 

    /** c_decl.e:1146				seq_num += 1*/
    _seq_num_43726 = _seq_num_43726 + 1;
L3: 

    /** c_decl.e:1148			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _22980 = (object)*(((s1_ptr)_2)->base + _s_43724);
    _2 = (object)SEQ_PTR(_22980);
    _s_43724 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_43724)){
        _s_43724 = (object)DBL_PTR(_s_43724)->dbl;
    }
    _22980 = NOVALUE;

    /** c_decl.e:1149		end while*/
    goto L1; // [212] 50
L2: 

    /** c_decl.e:1150		if not first then*/
    if (_first_43725 != 0)
    goto L6; // [217] 226

    /** c_decl.e:1151			c_puts(",\n")*/
    RefDS(_22893);
    _57c_puts(_22893);
L6: 

    /** c_decl.e:1153		c_puts("  {\"\", 0, 999999999, 0}\n};\n\n")  -- end marker*/
    RefDS(_22983);
    _57c_puts(_22983);

    /** c_decl.e:1154	end procedure*/
    return;
    ;
}


object _60is_exported(object _s_43788)
{
    object _eentry_43789 = NOVALUE;
    object _scope_43792 = NOVALUE;
    object _22998 = NOVALUE;
    object _22997 = NOVALUE;
    object _22996 = NOVALUE;
    object _22995 = NOVALUE;
    object _22994 = NOVALUE;
    object _22993 = NOVALUE;
    object _22992 = NOVALUE;
    object _22991 = NOVALUE;
    object _22990 = NOVALUE;
    object _22989 = NOVALUE;
    object _22988 = NOVALUE;
    object _22986 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_43788)) {
        _1 = (object)(DBL_PTR(_s_43788)->dbl);
        DeRefDS(_s_43788);
        _s_43788 = _1;
    }

    /** c_decl.e:1159		sequence eentry = SymTab[s]*/
    DeRef(_eentry_43789);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _eentry_43789 = (object)*(((s1_ptr)_2)->base + _s_43788);
    Ref(_eentry_43789);

    /** c_decl.e:1160		integer scope = eentry[S_SCOPE]*/
    _2 = (object)SEQ_PTR(_eentry_43789);
    _scope_43792 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_43792))
    _scope_43792 = (object)DBL_PTR(_scope_43792)->dbl;

    /** c_decl.e:1162		if eentry[S_MODE] = M_NORMAL then*/
    _2 = (object)SEQ_PTR(_eentry_43789);
    _22986 = (object)*(((s1_ptr)_2)->base + 3);
    if (binary_op_a(NOTEQ, _22986, 1)){
        _22986 = NOVALUE;
        goto L1; // [31] 125
    }
    _22986 = NOVALUE;

    /** c_decl.e:1163			if eentry[S_FILE_NO] = 1 and find(scope, { SC_EXPORT, SC_PUBLIC, SC_GLOBAL }) then*/
    _2 = (object)SEQ_PTR(_eentry_43789);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22988 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22988 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (IS_ATOM_INT(_22988)) {
        _22989 = (_22988 == 1);
    }
    else {
        _22989 = binary_op(EQUALS, _22988, 1);
    }
    _22988 = NOVALUE;
    if (IS_ATOM_INT(_22989)) {
        if (_22989 == 0) {
            goto L2; // [47] 79
        }
    }
    else {
        if (DBL_PTR(_22989)->dbl == 0.0) {
            goto L2; // [47] 79
        }
    }
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 11;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 6;
    _22991 = MAKE_SEQ(_1);
    _22992 = find_from(_scope_43792, _22991, 1);
    DeRefDS(_22991);
    _22991 = NOVALUE;
    if (_22992 == 0)
    {
        _22992 = NOVALUE;
        goto L2; // [69] 79
    }
    else{
        _22992 = NOVALUE;
    }

    /** c_decl.e:1164				return 1*/
    DeRef(_eentry_43789);
    DeRef(_22989);
    _22989 = NOVALUE;
    return 1;
L2: 

    /** c_decl.e:1167			if scope = SC_PUBLIC and*/
    _22993 = (_scope_43792 == 13);
    if (_22993 == 0) {
        goto L3; // [87] 124
    }
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _22995 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_eentry_43789);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _22996 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _22996 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _2 = (object)SEQ_PTR(_22995);
    if (!IS_ATOM_INT(_22996)){
        _22997 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_22996)->dbl));
    }
    else{
        _22997 = (object)*(((s1_ptr)_2)->base + _22996);
    }
    _22995 = NOVALUE;
    if (IS_ATOM_INT(_22997)) {
        {uintptr_t tu;
             tu = (uintptr_t)_22997 & (uintptr_t)4;
             _22998 = MAKE_UINT(tu);
        }
    }
    else {
        _22998 = binary_op(AND_BITS, _22997, 4);
    }
    _22997 = NOVALUE;
    if (_22998 == 0) {
        DeRef(_22998);
        _22998 = NOVALUE;
        goto L3; // [114] 124
    }
    else {
        if (!IS_ATOM_INT(_22998) && DBL_PTR(_22998)->dbl == 0.0){
            DeRef(_22998);
            _22998 = NOVALUE;
            goto L3; // [114] 124
        }
        DeRef(_22998);
        _22998 = NOVALUE;
    }
    DeRef(_22998);
    _22998 = NOVALUE;

    /** c_decl.e:1170				return 1*/
    DeRef(_eentry_43789);
    DeRef(_22993);
    _22993 = NOVALUE;
    DeRef(_22989);
    _22989 = NOVALUE;
    _22996 = NOVALUE;
    return 1;
L3: 
L1: 

    /** c_decl.e:1174		return 0*/
    DeRef(_eentry_43789);
    DeRef(_22993);
    _22993 = NOVALUE;
    DeRef(_22989);
    _22989 = NOVALUE;
    _22996 = NOVALUE;
    return 0;
    ;
}


void _60version()
{
    object _23032 = NOVALUE;
    object _23031 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1207		c_puts("// Euphoria To C version " & version_string() & "\n")*/
    _23031 = _27version_string(0);
    {
        object concat_list[3];

        concat_list[0] = _22123;
        concat_list[1] = _23031;
        concat_list[2] = _23030;
        Concat_N((object_ptr)&_23032, concat_list, 3);
    }
    DeRef(_23031);
    _23031 = NOVALUE;
    _57c_puts(_23032);
    _23032 = NOVALUE;

    /** c_decl.e:1208	end procedure*/
    return;
    ;
}


void _60new_c_file(object _name_43896)
{
    object _23035 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1213		cfile_size = 0*/
    _39cfile_size_16894 = 0;

    /** c_decl.e:1216		if LAST_PASS = FALSE then*/
    if (_60LAST_PASS_42076 != _9FALSE_442)
    goto L1; // [16] 26

    /** c_decl.e:1217			return*/
    DeRefDS(_name_43896);
    return;
L1: 

    /** c_decl.e:1220		write_checksum( c_code )*/
    _58write_checksum(_57c_code_46105);

    /** c_decl.e:1221		close(c_code)*/
    EClose(_57c_code_46105);

    /** c_decl.e:1223		c_code = open(output_dir & name & ".c", "w")*/
    {
        object concat_list[3];

        concat_list[0] = _23034;
        concat_list[1] = _name_43896;
        concat_list[2] = _60output_dir_42103;
        Concat_N((object_ptr)&_23035, concat_list, 3);
    }
    _57c_code_46105 = EOpen(_23035, _22064, 0);
    DeRefDS(_23035);
    _23035 = NOVALUE;

    /** c_decl.e:1224		if c_code = -1 then*/
    if (_57c_code_46105 != -1)
    goto L2; // [60] 72

    /** c_decl.e:1225			CompileErr(57)*/
    RefDS(_21928);
    _52CompileErr(57, _21928, 0);
L2: 

    /** c_decl.e:1228		cfile_count += 1*/
    _39cfile_count_16893 = _39cfile_count_16893 + 1;

    /** c_decl.e:1229		version()*/
    _60version();

    /** c_decl.e:1231		c_puts("#include \"include/euphoria.h\"\n")*/
    RefDS(_22069);
    _57c_puts(_22069);

    /** c_decl.e:1233		c_puts("#include \"main-.h\"\n\n")*/
    RefDS(_22070);
    _57c_puts(_22070);

    /** c_decl.e:1235		if not TUNIX then*/
    if (_43TUNIX_21592 != 0)
    goto L3; // [100] 112

    /** c_decl.e:1236			name = lower(name)  -- for faster compare later*/
    RefDS(_name_43896);
    _0 = _name_43896;
    _name_43896 = _13lower(_name_43896);
    DeRefDS(_0);
L3: 

    /** c_decl.e:1238	end procedure*/
    DeRefDS(_name_43896);
    return;
    ;
}


object _60unique_c_name(object _name_43925)
{
    object _i_43926 = NOVALUE;
    object _compare_name_43927 = NOVALUE;
    object _next_fc_43928 = NOVALUE;
    object _23052 = NOVALUE;
    object _23049 = NOVALUE;
    object _23048 = NOVALUE;
    object _23047 = NOVALUE;
    object _23045 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1253		compare_name = name & ".c"*/
    Concat((object_ptr)&_compare_name_43927, _name_43925, _23034);

    /** c_decl.e:1254		if not TUNIX then*/
    if (_43TUNIX_21592 != 0)
    goto L1; // [13] 25

    /** c_decl.e:1255			compare_name = lower(compare_name)*/
    RefDS(_compare_name_43927);
    _0 = _compare_name_43927;
    _compare_name_43927 = _13lower(_compare_name_43927);
    DeRefDS(_0);
L1: 

    /** c_decl.e:1258		next_fc = 1*/
    _next_fc_43928 = 1;

    /** c_decl.e:1259		i = 1*/
    _i_43926 = 1;

    /** c_decl.e:1261		while i <= length(generated_files) do*/
L2: 
    if (IS_SEQUENCE(_60generated_files_42093)){
            _23045 = SEQ_PTR(_60generated_files_42093)->length;
    }
    else {
        _23045 = 1;
    }
    if (_i_43926 > _23045)
    goto L3; // [45] 139

    /** c_decl.e:1263			if equal(generated_files[i], compare_name) then*/
    _2 = (object)SEQ_PTR(_60generated_files_42093);
    _23047 = (object)*(((s1_ptr)_2)->base + _i_43926);
    if (_23047 == _compare_name_43927)
    _23048 = 1;
    else if (IS_ATOM_INT(_23047) && IS_ATOM_INT(_compare_name_43927))
    _23048 = 0;
    else
    _23048 = (compare(_23047, _compare_name_43927) == 0);
    _23047 = NOVALUE;
    if (_23048 == 0)
    {
        _23048 = NOVALUE;
        goto L4; // [61] 127
    }
    else{
        _23048 = NOVALUE;
    }

    /** c_decl.e:1265				if next_fc > length(file_chars) then*/
    if (IS_SEQUENCE(_60file_chars_43921)){
            _23049 = SEQ_PTR(_60file_chars_43921)->length;
    }
    else {
        _23049 = 1;
    }
    if (_next_fc_43928 <= _23049)
    goto L5; // [69] 81

    /** c_decl.e:1266					CompileErr(140)*/
    RefDS(_21928);
    _52CompileErr(140, _21928, 0);
L5: 

    /** c_decl.e:1269				name[1] = file_chars[next_fc]*/
    _2 = (object)SEQ_PTR(_60file_chars_43921);
    _23052 = (object)*(((s1_ptr)_2)->base + _next_fc_43928);
    Ref(_23052);
    _2 = (object)SEQ_PTR(_name_43925);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _name_43925 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23052;
    if( _1 != _23052 ){
        DeRef(_1);
    }
    _23052 = NOVALUE;

    /** c_decl.e:1270				compare_name = name & ".c"*/
    Concat((object_ptr)&_compare_name_43927, _name_43925, _23034);

    /** c_decl.e:1271				if not TUNIX then*/
    if (_43TUNIX_21592 != 0)
    goto L6; // [101] 113

    /** c_decl.e:1272					compare_name = lower(compare_name)*/
    RefDS(_compare_name_43927);
    _0 = _compare_name_43927;
    _compare_name_43927 = _13lower(_compare_name_43927);
    DeRefDS(_0);
L6: 

    /** c_decl.e:1275				next_fc += 1*/
    _next_fc_43928 = _next_fc_43928 + 1;

    /** c_decl.e:1276				i = 1 -- start over and compare again*/
    _i_43926 = 1;
    goto L2; // [124] 40
L4: 

    /** c_decl.e:1279				i += 1*/
    _i_43926 = _i_43926 + 1;

    /** c_decl.e:1281		end while*/
    goto L2; // [136] 40
L3: 

    /** c_decl.e:1283		return name*/
    DeRef(_compare_name_43927);
    return _name_43925;
    ;
}


object _60is_file_newer(object _f1_43958, object _f2_43959)
{
    object _d1_43960 = NOVALUE;
    object _d2_43963 = NOVALUE;
    object _diff_2__tmp_at42_43974 = NOVALUE;
    object _diff_1__tmp_at42_43973 = NOVALUE;
    object _diff_inlined_diff_at_42_43972 = NOVALUE;
    object _23062 = NOVALUE;
    object _23060 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1287		object d1 = file_timestamp(f1)*/
    RefDS(_f1_43958);
    _0 = _d1_43960;
    _d1_43960 = _16file_timestamp(_f1_43958);
    DeRef(_0);

    /** c_decl.e:1288		object d2 = file_timestamp(f2)*/
    RefDS(_f2_43959);
    _0 = _d2_43963;
    _d2_43963 = _16file_timestamp(_f2_43959);
    DeRef(_0);

    /** c_decl.e:1290		if atom(d1) or atom(d2) then return 1 end if*/
    _23060 = IS_ATOM(_d1_43960);
    if (_23060 != 0) {
        goto L1; // [22] 34
    }
    _23062 = IS_ATOM(_d2_43963);
    if (_23062 == 0)
    {
        _23062 = NOVALUE;
        goto L2; // [30] 39
    }
    else{
        _23062 = NOVALUE;
    }
L1: 
    DeRefDS(_f1_43958);
    DeRefDS(_f2_43959);
    DeRef(_d1_43960);
    DeRef(_d2_43963);
    return 1;
L2: 

    /** c_decl.e:1291		if datetime:diff(d1, d2) < 0 then*/

    /** datetime.e:1253		return datetimeToSeconds(dt2) - datetimeToSeconds(dt1)*/
    Ref(_d2_43963);
    _0 = _diff_1__tmp_at42_43973;
    _diff_1__tmp_at42_43973 = _17datetimeToSeconds(_d2_43963);
    DeRef(_0);
    Ref(_d1_43960);
    _0 = _diff_2__tmp_at42_43974;
    _diff_2__tmp_at42_43974 = _17datetimeToSeconds(_d1_43960);
    DeRef(_0);
    DeRef(_diff_inlined_diff_at_42_43972);
    if (IS_ATOM_INT(_diff_1__tmp_at42_43973) && IS_ATOM_INT(_diff_2__tmp_at42_43974)) {
        _diff_inlined_diff_at_42_43972 = _diff_1__tmp_at42_43973 - _diff_2__tmp_at42_43974;
        if ((object)((uintptr_t)_diff_inlined_diff_at_42_43972 +(uintptr_t) HIGH_BITS) >= 0){
            _diff_inlined_diff_at_42_43972 = NewDouble((eudouble)_diff_inlined_diff_at_42_43972);
        }
    }
    else {
        _diff_inlined_diff_at_42_43972 = binary_op(MINUS, _diff_1__tmp_at42_43973, _diff_2__tmp_at42_43974);
    }
    DeRef(_diff_1__tmp_at42_43973);
    _diff_1__tmp_at42_43973 = NOVALUE;
    DeRef(_diff_2__tmp_at42_43974);
    _diff_2__tmp_at42_43974 = NOVALUE;
    if (binary_op_a(GREATEREQ, _diff_inlined_diff_at_42_43972, 0)){
        goto L3; // [58] 69
    }

    /** c_decl.e:1292			return 1*/
    DeRefDS(_f1_43958);
    DeRefDS(_f2_43959);
    DeRef(_d1_43960);
    DeRef(_d2_43963);
    return 1;
L3: 

    /** c_decl.e:1295		return 0*/
    DeRefDS(_f1_43958);
    DeRefDS(_f2_43959);
    DeRef(_d1_43960);
    DeRef(_d2_43963);
    return 0;
    ;
}


void _60add_file(object _filename_43978, object _eu_filename_43979)
{
    object _obj_fname_43999 = NOVALUE;
    object _src_fname_44000 = NOVALUE;
    object _23086 = NOVALUE;
    object _23085 = NOVALUE;
    object _23072 = NOVALUE;
    object _23071 = NOVALUE;
    object _23068 = NOVALUE;
    object _23067 = NOVALUE;
    object _23066 = NOVALUE;
    object _23065 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1303		if equal("c", fileext(filename)) then*/
    RefDS(_filename_43978);
    _23065 = _16fileext(_filename_43978);
    if (_23064 == _23065)
    _23066 = 1;
    else if (IS_ATOM_INT(_23064) && IS_ATOM_INT(_23065))
    _23066 = 0;
    else
    _23066 = (compare(_23064, _23065) == 0);
    DeRef(_23065);
    _23065 = NOVALUE;
    if (_23066 == 0)
    {
        _23066 = NOVALUE;
        goto L1; // [15] 35
    }
    else{
        _23066 = NOVALUE;
    }

    /** c_decl.e:1304			filename = filename[1..$-2]*/
    if (IS_SEQUENCE(_filename_43978)){
            _23067 = SEQ_PTR(_filename_43978)->length;
    }
    else {
        _23067 = 1;
    }
    _23068 = _23067 - 2;
    _23067 = NOVALUE;
    rhs_slice_target = (object_ptr)&_filename_43978;
    RHS_Slice(_filename_43978, 1, _23068);
    goto L2; // [32] 82
L1: 

    /** c_decl.e:1305		elsif equal("h", fileext(filename)) then*/
    RefDS(_filename_43978);
    _23071 = _16fileext(_filename_43978);
    if (_23070 == _23071)
    _23072 = 1;
    else if (IS_ATOM_INT(_23070) && IS_ATOM_INT(_23071))
    _23072 = 0;
    else
    _23072 = (compare(_23070, _23071) == 0);
    DeRef(_23071);
    _23071 = NOVALUE;
    if (_23072 == 0)
    {
        _23072 = NOVALUE;
        goto L3; // [45] 81
    }
    else{
        _23072 = NOVALUE;
    }

    /** c_decl.e:1306			generated_files = append(generated_files, filename)*/
    RefDS(_filename_43978);
    Append(&_60generated_files_42093, _60generated_files_42093, _filename_43978);

    /** c_decl.e:1307			if build_system_type = BUILD_DIRECT then*/

    /** c_decl.e:1308				outdated_files  = append(outdated_files, 0)*/
    Append(&_60outdated_files_42094, _60outdated_files_42094, 0);

    /** c_decl.e:1311			return*/
    DeRefDS(_filename_43978);
    DeRefDS(_eu_filename_43979);
    DeRef(_obj_fname_43999);
    DeRef(_src_fname_44000);
    DeRef(_23068);
    _23068 = NOVALUE;
    return;
L3: 
L2: 

    /** c_decl.e:1314		sequence obj_fname = filename, src_fname = filename & ".c"*/
    RefDS(_filename_43978);
    DeRef(_obj_fname_43999);
    _obj_fname_43999 = _filename_43978;
    Concat((object_ptr)&_src_fname_44000, _filename_43978, _23034);

    /** c_decl.e:1316		if compiler_type = COMPILER_WATCOM then*/

    /** c_decl.e:1319			obj_fname &= ".o"*/
    Concat((object_ptr)&_obj_fname_43999, _obj_fname_43999, _23080);

    /** c_decl.e:1322		generated_files = append(generated_files, src_fname)*/
    RefDS(_src_fname_44000);
    Append(&_60generated_files_42093, _60generated_files_42093, _src_fname_44000);

    /** c_decl.e:1323		generated_files = append(generated_files, obj_fname)*/
    RefDS(_obj_fname_43999);
    Append(&_60generated_files_42093, _60generated_files_42093, _obj_fname_43999);

    /** c_decl.e:1324		if build_system_type = BUILD_DIRECT then*/

    /** c_decl.e:1325			outdated_files  = append(outdated_files, is_file_newer(eu_filename, output_dir & src_fname))*/
    Concat((object_ptr)&_23085, _60output_dir_42103, _src_fname_44000);
    RefDS(_eu_filename_43979);
    _23086 = _60is_file_newer(_eu_filename_43979, _23085);
    _23085 = NOVALUE;
    Ref(_23086);
    Append(&_60outdated_files_42094, _60outdated_files_42094, _23086);
    DeRef(_23086);
    _23086 = NOVALUE;

    /** c_decl.e:1326			outdated_files  = append(outdated_files, 0)*/
    Append(&_60outdated_files_42094, _60outdated_files_42094, 0);

    /** c_decl.e:1328	end procedure*/
    DeRefDS(_filename_43978);
    DeRefDS(_eu_filename_43979);
    DeRef(_obj_fname_43999);
    DeRef(_src_fname_44000);
    DeRef(_23068);
    _23068 = NOVALUE;
    return;
    ;
}


object _60any_code(object _file_no_44023)
{
    object _these_routines_44025 = NOVALUE;
    object _s_44032 = NOVALUE;
    object _23102 = NOVALUE;
    object _23101 = NOVALUE;
    object _23100 = NOVALUE;
    object _23099 = NOVALUE;
    object _23098 = NOVALUE;
    object _23097 = NOVALUE;
    object _23096 = NOVALUE;
    object _23095 = NOVALUE;
    object _23094 = NOVALUE;
    object _23093 = NOVALUE;
    object _23092 = NOVALUE;
    object _23090 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1334		check_file_routines()*/
    _60check_file_routines();

    /** c_decl.e:1336		sequence these_routines = file_routines[file_no]*/
    DeRef(_these_routines_44025);
    _2 = (object)SEQ_PTR(_60file_routines_44249);
    _these_routines_44025 = (object)*(((s1_ptr)_2)->base + _file_no_44023);
    Ref(_these_routines_44025);

    /** c_decl.e:1337		for i = 1 to length( these_routines ) do*/
    if (IS_SEQUENCE(_these_routines_44025)){
            _23090 = SEQ_PTR(_these_routines_44025)->length;
    }
    else {
        _23090 = 1;
    }
    {
        object _i_44029;
        _i_44029 = 1;
L1: 
        if (_i_44029 > _23090){
            goto L2; // [22] 126
        }

        /** c_decl.e:1338			symtab_index s = these_routines[i]*/
        _2 = (object)SEQ_PTR(_these_routines_44025);
        _s_44032 = (object)*(((s1_ptr)_2)->base + _i_44029);
        if (!IS_ATOM_INT(_s_44032)){
            _s_44032 = (object)DBL_PTR(_s_44032)->dbl;
        }

        /** c_decl.e:1339			if SymTab[s][S_FILE_NO] = file_no and*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _23092 = (object)*(((s1_ptr)_2)->base + _s_44032);
        _2 = (object)SEQ_PTR(_23092);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _23093 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _23093 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _23092 = NOVALUE;
        if (IS_ATOM_INT(_23093)) {
            _23094 = (_23093 == _file_no_44023);
        }
        else {
            _23094 = binary_op(EQUALS, _23093, _file_no_44023);
        }
        _23093 = NOVALUE;
        if (IS_ATOM_INT(_23094)) {
            if (_23094 == 0) {
                DeRef(_23095);
                _23095 = 0;
                goto L3; // [55] 81
            }
        }
        else {
            if (DBL_PTR(_23094)->dbl == 0.0) {
                DeRef(_23095);
                _23095 = 0;
                goto L3; // [55] 81
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _23096 = (object)*(((s1_ptr)_2)->base + _s_44032);
        _2 = (object)SEQ_PTR(_23096);
        _23097 = (object)*(((s1_ptr)_2)->base + 5);
        _23096 = NOVALUE;
        if (IS_ATOM_INT(_23097)) {
            _23098 = (_23097 != 99);
        }
        else {
            _23098 = binary_op(NOTEQ, _23097, 99);
        }
        _23097 = NOVALUE;
        DeRef(_23095);
        if (IS_ATOM_INT(_23098))
        _23095 = (_23098 != 0);
        else
        _23095 = DBL_PTR(_23098)->dbl != 0.0;
L3: 
        if (_23095 == 0) {
            goto L4; // [81] 117
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _23100 = (object)*(((s1_ptr)_2)->base + _s_44032);
        _2 = (object)SEQ_PTR(_23100);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _23101 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _23101 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _23100 = NOVALUE;
        _23102 = find_from(_23101, _40RTN_TOKS_16423, 1);
        _23101 = NOVALUE;
        if (_23102 == 0)
        {
            _23102 = NOVALUE;
            goto L4; // [105] 117
        }
        else{
            _23102 = NOVALUE;
        }

        /** c_decl.e:1342				return TRUE -- found a non-deleted routine in this file*/
        DeRef(_these_routines_44025);
        DeRef(_23094);
        _23094 = NOVALUE;
        DeRef(_23098);
        _23098 = NOVALUE;
        return _9TRUE_444;
L4: 

        /** c_decl.e:1344		end for*/
        _i_44029 = _i_44029 + 1;
        goto L1; // [121] 29
L2: 
        ;
    }

    /** c_decl.e:1345		return FALSE*/
    DeRef(_these_routines_44025);
    DeRef(_23094);
    _23094 = NOVALUE;
    DeRef(_23098);
    _23098 = NOVALUE;
    return _9FALSE_442;
    ;
}


void _60check_file_routines()
{
    object _s_44258 = NOVALUE;
    object _23264 = NOVALUE;
    object _23263 = NOVALUE;
    object _23262 = NOVALUE;
    object _23261 = NOVALUE;
    object _23260 = NOVALUE;
    object _23259 = NOVALUE;
    object _23258 = NOVALUE;
    object _23257 = NOVALUE;
    object _23256 = NOVALUE;
    object _23255 = NOVALUE;
    object _23254 = NOVALUE;
    object _23253 = NOVALUE;
    object _23251 = NOVALUE;
    object _23249 = NOVALUE;
    object _23247 = NOVALUE;
    object _0, _1, _2;
    

    /** c_decl.e:1451		if not length( file_routines ) then*/
    if (IS_SEQUENCE(_60file_routines_44249)){
            _23247 = SEQ_PTR(_60file_routines_44249)->length;
    }
    else {
        _23247 = 1;
    }
    if (_23247 != 0)
    goto L1; // [8] 146
    _23247 = NOVALUE;

    /** c_decl.e:1452			file_routines = repeat( {}, length( known_files ) )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _23249 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _23249 = 1;
    }
    DeRefDS(_60file_routines_44249);
    _60file_routines_44249 = Repeat(_21928, _23249);
    _23249 = NOVALUE;

    /** c_decl.e:1453			integer s = SymTab[TopLevelSub][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23251 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
    _2 = (object)SEQ_PTR(_23251);
    _s_44258 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44258)){
        _s_44258 = (object)DBL_PTR(_s_44258)->dbl;
    }
    _23251 = NOVALUE;

    /** c_decl.e:1454			while s do*/
L2: 
    if (_s_44258 == 0)
    {
        goto L3; // [45] 145
    }
    else{
    }

    /** c_decl.e:1455				if SymTab[s][S_USAGE] != U_DELETED and*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23253 = (object)*(((s1_ptr)_2)->base + _s_44258);
    _2 = (object)SEQ_PTR(_23253);
    _23254 = (object)*(((s1_ptr)_2)->base + 5);
    _23253 = NOVALUE;
    if (IS_ATOM_INT(_23254)) {
        _23255 = (_23254 != 99);
    }
    else {
        _23255 = binary_op(NOTEQ, _23254, 99);
    }
    _23254 = NOVALUE;
    if (IS_ATOM_INT(_23255)) {
        if (_23255 == 0) {
            goto L4; // [68] 124
        }
    }
    else {
        if (DBL_PTR(_23255)->dbl == 0.0) {
            goto L4; // [68] 124
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23257 = (object)*(((s1_ptr)_2)->base + _s_44258);
    _2 = (object)SEQ_PTR(_23257);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _23258 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _23258 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _23257 = NOVALUE;
    _23259 = find_from(_23258, _40RTN_TOKS_16423, 1);
    _23258 = NOVALUE;
    if (_23259 == 0)
    {
        _23259 = NOVALUE;
        goto L4; // [92] 124
    }
    else{
        _23259 = NOVALUE;
    }

    /** c_decl.e:1458					file_routines[SymTab[s][S_FILE_NO]] &= s*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23260 = (object)*(((s1_ptr)_2)->base + _s_44258);
    _2 = (object)SEQ_PTR(_23260);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _23261 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _23261 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _23260 = NOVALUE;
    _2 = (object)SEQ_PTR(_60file_routines_44249);
    if (!IS_ATOM_INT(_23261)){
        _23262 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23261)->dbl));
    }
    else{
        _23262 = (object)*(((s1_ptr)_2)->base + _23261);
    }
    if (IS_SEQUENCE(_23262) && IS_ATOM(_s_44258)) {
        Append(&_23263, _23262, _s_44258);
    }
    else if (IS_ATOM(_23262) && IS_SEQUENCE(_s_44258)) {
    }
    else {
        Concat((object_ptr)&_23263, _23262, _s_44258);
        _23262 = NOVALUE;
    }
    _23262 = NOVALUE;
    _2 = (object)SEQ_PTR(_60file_routines_44249);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _60file_routines_44249 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_23261))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_23261)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _23261);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _23263;
    if( _1 != _23263 ){
        DeRef(_1);
    }
    _23263 = NOVALUE;
L4: 

    /** c_decl.e:1460				s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _23264 = (object)*(((s1_ptr)_2)->base + _s_44258);
    _2 = (object)SEQ_PTR(_23264);
    _s_44258 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_44258)){
        _s_44258 = (object)DBL_PTR(_s_44258)->dbl;
    }
    _23264 = NOVALUE;

    /** c_decl.e:1461			end while*/
    goto L2; // [142] 45
L3: 
L1: 

    /** c_decl.e:1464	end procedure*/
    DeRef(_23255);
    _23255 = NOVALUE;
    _23261 = NOVALUE;
    return;
    ;
}


void _60GenerateUserRoutines()
{
    object _s_44292 = NOVALUE;
    object _sp_44293 = NOVALUE;
    object _next_c_char_44294 = NOVALUE;
    object _q_44295 = NOVALUE;
    object _temps_44296 = NOVALUE;
    object _buff_44297 = NOVALUE;
    object _base_name_44298 = NOVALUE;
    object _long_c_file_44299 = NOVALUE;
    object _c_file_44300 = NOVALUE;
    object _these_routines_44367 = NOVALUE;
    object _ret_type_44425 = NOVALUE;
    object _s_scope_44434 = NOVALUE;
    object _s_file_44437 = NOVALUE;
    object _scope_44514 = NOVALUE;
    object _names_44548 = NOVALUE;
    object _name_44558 = NOVALUE;
    object _23492 = NOVALUE;
    object _23490 = NOVALUE;
    object _23489 = NOVALUE;
    object _23458 = NOVALUE;
    object _23457 = NOVALUE;
    object _23456 = NOVALUE;
    object _23454 = NOVALUE;
    object _23452 = NOVALUE;
    object _23451 = NOVALUE;
    object _23450 = NOVALUE;
    object _23449 = NOVALUE;
    object _23448 = NOVALUE;
    object _23447 = NOVALUE;
    object _23446 = NOVALUE;
    object _23444 = NOVALUE;
    object _23443 = NOVALUE;
    object _23442 = NOVALUE;
    object _23441 = NOVALUE;
    object _23440 = NOVALUE;
    object _23439 = NOVALUE;
    object _23438 = NOVALUE;
    object _23437 = NOVALUE;
    object _23435 = NOVALUE;
    object _23434 = NOVALUE;
    object _23432 = NOVALUE;
    object _23431 = NOVALUE;
    object _23430 = NOVALUE;
    object _23429 = NOVALUE;
    object _23428 = NOVALUE;
    object _23427 = NOVALUE;
    object _23426 = NOVALUE;
    object _23425 = NOVALUE;
    object _23423 = NOVALUE;
    object _23422 = NOVALUE;
    object _23420 = NOVALUE;
    object _23419 = NOVALUE;
    object _23418 = NOVALUE;
    object _23416 = NOVALUE;
    object _23411 = NOVALUE;
    object _23410 = NOVALUE;
    object _23408 = NOVALUE;
    object _23406 = NOVALUE;
    object _23400 = NOVALUE;
    object _23399 = NOVALUE;
    object _23398 = NOVALUE;
    object _23397 = NOVALUE;
    object _23396 = NOVALUE;
    object _23395 = NOVALUE;
    object _23394 = NOVALUE;
    object _23393 = NOVALUE;
    object _23391 = NOVALUE;
    object _23390 = NOVALUE;
    object _23388 = NOVALUE;
    object _23387 = NOVALUE;
    object _23384 = NOVALUE;
    object _23382 = NOVALUE;
    object _23381 = NOVALUE;
    object _23380 = NOVALUE;
    object _23376 = NOVALUE;
    object _23373 = NOVALUE;
    object _23370 = NOVALUE;
    object _23369 = NOVALUE;
    object _23368 = NOVALUE;
    object _23367 = NOVALUE;
    object _23365 = NOVALUE;
    object _23364 = NOVALUE;
    object _23362 = NOVALUE;
    object _23361 = NOVALUE;
    object _23360 = NOVALUE;
    object _23355 = NOVALUE;
    object _23354 = NOVALUE;
    object _23353 = NOVALUE;
    object _23352 = NOVALUE;
    object _23351 = NOVALUE;
    object _23350 = NOVALUE;
    object _23349 = NOVALUE;
    object _23348 = NOVALUE;
    object _23347 = NOVALUE;
    object _23346 = NOVALUE;
    object _23345 = NOVALUE;
    object _23344 = NOVALUE;
    object _23343 = NOVALUE;
    object _23342 = NOVALUE;
    object _23341 = NOVALUE;
    object _23339 = NOVALUE;
    object _23336 = NOVALUE;
    object _23335 = NOVALUE;
    object _23333 = NOVALUE;
    object _23330 = NOVALUE;
    object _23329 = NOVALUE;
    object _23325 = NOVALUE;
    object _23324 = NOVALUE;
    object _23322 = NOVALUE;
    object _23318 = NOVALUE;
    object _23317 = NOVALUE;
    object _23316 = NOVALUE;
    object _23315 = NOVALUE;
    object _23314 = NOVALUE;
    object _23313 = NOVALUE;
    object _23312 = NOVALUE;
    object _23311 = NOVALUE;
    object _23310 = NOVALUE;
    object _23309 = NOVALUE;
    object _23308 = NOVALUE;
    object _23307 = NOVALUE;
    object _23306 = NOVALUE;
    object _23305 = NOVALUE;
    object _23303 = NOVALUE;
    object _23302 = NOVALUE;
    object _23300 = NOVALUE;
    object _23297 = NOVALUE;
    object _23294 = NOVALUE;
    object _23291 = NOVALUE;
    object _23288 = NOVALUE;
    object _23287 = NOVALUE;
    object _23286 = NOVALUE;
    object _23283 = NOVALUE;
    object _23280 = NOVALUE;
    object _23278 = NOVALUE;
    object _23274 = NOVALUE;
    object _23273 = NOVALUE;
    object _23271 = NOVALUE;
    object _23270 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** c_decl.e:1468		integer next_c_char, q, temps*/

    /** c_decl.e:1469		sequence buff, base_name, long_c_file, c_file*/

    /** c_decl.e:1471		if not silent then*/
    if (_39silent_16930 != 0)
    goto L1; // [9] 62

    /** c_decl.e:1472			if Pass = 1 then*/
    if (_60Pass_42078 != 1)
    goto L2; // [16] 29

    /** c_decl.e:1473				ShowMsg(1, 239,,0)*/
    RefDS(_21928);
    _44ShowMsg(1, 239, _21928, 0);
L2: 

    /** c_decl.e:1476			if LAST_PASS = TRUE then*/
    if (_60LAST_PASS_42076 != _9TRUE_444)
    goto L3; // [35] 50

    /** c_decl.e:1477				ShowMsg(1, 240)*/
    RefDS(_21928);
    _44ShowMsg(1, 240, _21928, 1);
    goto L4; // [47] 61
L3: 

    /** c_decl.e:1479				ShowMsg(1, 241, Pass, 0)*/
    _44ShowMsg(1, 241, _60Pass_42078, 0);
L4: 
L1: 

    /** c_decl.e:1483		check_file_routines()*/
    _60check_file_routines();

    /** c_decl.e:1485		c_puts("// GenerateUserRoutines\n")*/
    RefDS(_23269);
    _57c_puts(_23269);

    /** c_decl.e:1486		for file_no = 1 to length(known_files) do*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _23270 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _23270 = 1;
    }
    {
        object _file_no_44316;
        _file_no_44316 = 1;
L5: 
        if (_file_no_44316 > _23270){
            goto L6; // [78] 2143
        }

        /** c_decl.e:1487			if file_no = 1 or any_code(file_no) then*/
        _23271 = (_file_no_44316 == 1);
        if (_23271 != 0) {
            goto L7; // [91] 104
        }
        _23273 = _60any_code(_file_no_44316);
        if (_23273 == 0) {
            DeRef(_23273);
            _23273 = NOVALUE;
            goto L8; // [100] 2134
        }
        else {
            if (!IS_ATOM_INT(_23273) && DBL_PTR(_23273)->dbl == 0.0){
                DeRef(_23273);
                _23273 = NOVALUE;
                goto L8; // [100] 2134
            }
            DeRef(_23273);
            _23273 = NOVALUE;
        }
        DeRef(_23273);
        _23273 = NOVALUE;
L7: 

        /** c_decl.e:1490				next_c_char = 1*/
        _next_c_char_44294 = 1;

        /** c_decl.e:1491				base_name = name_ext(known_files[file_no])*/
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _23274 = (object)*(((s1_ptr)_2)->base + _file_no_44316);
        Ref(_23274);
        _0 = _base_name_44298;
        _base_name_44298 = _56name_ext(_23274);
        DeRef(_0);
        _23274 = NOVALUE;

        /** c_decl.e:1492				c_file = base_name*/
        RefDS(_base_name_44298);
        DeRef(_c_file_44300);
        _c_file_44300 = _base_name_44298;

        /** c_decl.e:1494				q = length(c_file)*/
        if (IS_SEQUENCE(_c_file_44300)){
                _q_44295 = SEQ_PTR(_c_file_44300)->length;
        }
        else {
            _q_44295 = 1;
        }

        /** c_decl.e:1495				while q >= 1 do*/
L9: 
        if (_q_44295 < 1)
        goto LA; // [140] 181

        /** c_decl.e:1496					if c_file[q] = '.' then*/
        _2 = (object)SEQ_PTR(_c_file_44300);
        _23278 = (object)*(((s1_ptr)_2)->base + _q_44295);
        if (binary_op_a(NOTEQ, _23278, 46)){
            _23278 = NOVALUE;
            goto LB; // [150] 170
        }
        _23278 = NOVALUE;

        /** c_decl.e:1497						c_file = c_file[1..q-1]*/
        _23280 = _q_44295 - 1;
        rhs_slice_target = (object_ptr)&_c_file_44300;
        RHS_Slice(_c_file_44300, 1, _23280);

        /** c_decl.e:1498						exit*/
        goto LA; // [167] 181
LB: 

        /** c_decl.e:1500					q -= 1*/
        _q_44295 = _q_44295 - 1;

        /** c_decl.e:1501				end while*/
        goto L9; // [178] 140
LA: 

        /** c_decl.e:1503				if find(lower(c_file), {"main-", "init-"})  then*/
        RefDS(_c_file_44300);
        _23283 = _13lower(_c_file_44300);
        RefDS(_23285);
        RefDS(_23284);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _23284;
        ((intptr_t *)_2)[2] = _23285;
        _23286 = MAKE_SEQ(_1);
        _23287 = find_from(_23283, _23286, 1);
        DeRef(_23283);
        _23283 = NOVALUE;
        DeRefDS(_23286);
        _23286 = NOVALUE;
        if (_23287 == 0)
        {
            _23287 = NOVALUE;
            goto LC; // [196] 211
        }
        else{
            _23287 = NOVALUE;
        }

        /** c_decl.e:1504					CompileErr(12, {base_name})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        RefDS(_base_name_44298);
        ((intptr_t*)_2)[1] = _base_name_44298;
        _23288 = MAKE_SEQ(_1);
        _52CompileErr(12, _23288, 0);
        _23288 = NOVALUE;
LC: 

        /** c_decl.e:1507				long_c_file = c_file*/
        RefDS(_c_file_44300);
        DeRef(_long_c_file_44299);
        _long_c_file_44299 = _c_file_44300;

        /** c_decl.e:1508				if LAST_PASS = TRUE then*/
        if (_60LAST_PASS_42076 != _9TRUE_444)
        goto LD; // [224] 249

        /** c_decl.e:1509					c_file = unique_c_name(c_file)*/
        RefDS(_c_file_44300);
        _0 = _c_file_44300;
        _c_file_44300 = _60unique_c_name(_c_file_44300);
        DeRefDS(_0);

        /** c_decl.e:1510					add_file(c_file, known_files[file_no])*/
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _23291 = (object)*(((s1_ptr)_2)->base + _file_no_44316);
        RefDS(_c_file_44300);
        Ref(_23291);
        _60add_file(_c_file_44300, _23291);
        _23291 = NOVALUE;
LD: 

        /** c_decl.e:1513				if file_no = 1 then*/
        if (_file_no_44316 != 1)
        goto LE; // [251] 314

        /** c_decl.e:1515					if LAST_PASS = TRUE then*/
        if (_60LAST_PASS_42076 != _9TRUE_444)
        goto LF; // [261] 306

        /** c_decl.e:1516						add_file("main-")*/
        RefDS(_23284);
        RefDS(_21928);
        _60add_file(_23284, _21928);

        /** c_decl.e:1517						for i = 0 to main_name_num-1 do*/
        _23294 = _57main_name_num_46107 - 1;
        if ((object)((uintptr_t)_23294 +(uintptr_t) HIGH_BITS) >= 0){
            _23294 = NewDouble((eudouble)_23294);
        }
        {
            object _i_44357;
            _i_44357 = 0;
L10: 
            if (binary_op_a(GREATER, _i_44357, _23294)){
                goto L11; // [279] 305
            }

            /** c_decl.e:1518							buff = sprintf("main-%d", i)*/
            DeRefi(_buff_44297);
            _buff_44297 = EPrintf(-9999999, _23295, _i_44357);

            /** c_decl.e:1519							add_file(buff)*/
            RefDS(_buff_44297);
            RefDS(_21928);
            _60add_file(_buff_44297, _21928);

            /** c_decl.e:1520						end for*/
            _0 = _i_44357;
            if (IS_ATOM_INT(_i_44357)) {
                _i_44357 = _i_44357 + 1;
                if ((object)((uintptr_t)_i_44357 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_44357 = NewDouble((eudouble)_i_44357);
                }
            }
            else {
                _i_44357 = binary_op_a(PLUS, _i_44357, 1);
            }
            DeRef(_0);
            goto L10; // [300] 286
L11: 
            ;
            DeRef(_i_44357);
        }
LF: 

        /** c_decl.e:1523					file0 = long_c_file*/
        RefDS(_long_c_file_44299);
        DeRef(_60file0_44056);
        _60file0_44056 = _long_c_file_44299;
LE: 

        /** c_decl.e:1526				new_c_file(c_file)*/
        RefDS(_c_file_44300);
        _60new_c_file(_c_file_44300);

        /** c_decl.e:1528				s = SymTab[TopLevelSub][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _23297 = (object)*(((s1_ptr)_2)->base + _39TopLevelSub_16822);
        _2 = (object)SEQ_PTR(_23297);
        _s_44292 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_s_44292)){
            _s_44292 = (object)DBL_PTR(_s_44292)->dbl;
        }
        _23297 = NOVALUE;

        /** c_decl.e:1530				sequence these_routines = file_routines[file_no]*/
        DeRef(_these_routines_44367);
        _2 = (object)SEQ_PTR(_60file_routines_44249);
        _these_routines_44367 = (object)*(((s1_ptr)_2)->base + _file_no_44316);
        Ref(_these_routines_44367);

        /** c_decl.e:1531				for routine_no = 1 to length( these_routines ) do*/
        if (IS_SEQUENCE(_these_routines_44367)){
                _23300 = SEQ_PTR(_these_routines_44367)->length;
        }
        else {
            _23300 = 1;
        }
        {
            object _routine_no_44370;
            _routine_no_44370 = 1;
L12: 
            if (_routine_no_44370 > _23300){
                goto L13; // [352] 2133
            }

            /** c_decl.e:1532					s = these_routines[routine_no]*/
            _2 = (object)SEQ_PTR(_these_routines_44367);
            _s_44292 = (object)*(((s1_ptr)_2)->base + _routine_no_44370);
            if (!IS_ATOM_INT(_s_44292)){
                _s_44292 = (object)DBL_PTR(_s_44292)->dbl;
            }

            /** c_decl.e:1533					if SymTab[s][S_USAGE] != U_DELETED then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23302 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23302);
            _23303 = (object)*(((s1_ptr)_2)->base + 5);
            _23302 = NOVALUE;
            if (binary_op_a(EQUALS, _23303, 99)){
                _23303 = NOVALUE;
                goto L14; // [383] 2124
            }
            _23303 = NOVALUE;

            /** c_decl.e:1537						if LAST_PASS = TRUE and*/
            _23305 = (_60LAST_PASS_42076 == _9TRUE_444);
            if (_23305 == 0) {
                goto L15; // [397] 593
            }
            _23307 = (_39cfile_size_16894 > 100000);
            if (_23307 != 0) {
                DeRef(_23308);
                _23308 = 1;
                goto L16; // [409] 472
            }
            _23309 = (_s_44292 != _39TopLevelSub_16822);
            if (_23309 == 0) {
                _23310 = 0;
                goto L17; // [419] 439
            }
            _23311 = (100000 % 4) ? NewDouble((eudouble)100000 / 4) : (100000 / 4);
            if (IS_ATOM_INT(_23311)) {
                _23312 = (_39cfile_size_16894 > _23311);
            }
            else {
                _23312 = ((eudouble)_39cfile_size_16894 > DBL_PTR(_23311)->dbl);
            }
            DeRef(_23311);
            _23311 = NOVALUE;
            _23310 = (_23312 != 0);
L17: 
            if (_23310 == 0) {
                _23313 = 0;
                goto L18; // [439] 468
            }
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23314 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23314);
            if (!IS_ATOM_INT(_39S_CODE_16482)){
                _23315 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
            }
            else{
                _23315 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
            }
            _23314 = NOVALUE;
            if (IS_SEQUENCE(_23315)){
                    _23316 = SEQ_PTR(_23315)->length;
            }
            else {
                _23316 = 1;
            }
            _23315 = NOVALUE;
            _23317 = (_23316 > 100000);
            _23316 = NOVALUE;
            _23313 = (_23317 != 0);
L18: 
            DeRef(_23308);
            _23308 = (_23313 != 0);
L16: 
            if (_23308 == 0)
            {
                _23308 = NOVALUE;
                goto L15; // [473] 593
            }
            else{
                _23308 = NOVALUE;
            }

            /** c_decl.e:1546							if length(c_file) = 7 then*/
            if (IS_SEQUENCE(_c_file_44300)){
                    _23318 = SEQ_PTR(_c_file_44300)->length;
            }
            else {
                _23318 = 1;
            }
            if (_23318 != 7)
            goto L19; // [481] 492

            /** c_decl.e:1548								c_file &= " "*/
            Concat((object_ptr)&_c_file_44300, _c_file_44300, _23320);
L19: 

            /** c_decl.e:1551							if length(c_file) >= 8 then*/
            if (IS_SEQUENCE(_c_file_44300)){
                    _23322 = SEQ_PTR(_c_file_44300)->length;
            }
            else {
                _23322 = 1;
            }
            if (_23322 < 8)
            goto L1A; // [497] 520

            /** c_decl.e:1552								c_file[7] = '_'*/
            _2 = (object)SEQ_PTR(_c_file_44300);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44300 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 7);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 95;
            DeRef(_1);

            /** c_decl.e:1553								c_file[8] = file_chars[next_c_char]*/
            _2 = (object)SEQ_PTR(_60file_chars_43921);
            _23324 = (object)*(((s1_ptr)_2)->base + _next_c_char_44294);
            Ref(_23324);
            _2 = (object)SEQ_PTR(_c_file_44300);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44300 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 8);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23324;
            if( _1 != _23324 ){
                DeRef(_1);
            }
            _23324 = NOVALUE;
            goto L1B; // [517] 552
L1A: 

            /** c_decl.e:1556								if find('_', c_file) = 0 then*/
            _23325 = find_from(95, _c_file_44300, 1);
            if (_23325 != 0)
            goto L1C; // [527] 538

            /** c_decl.e:1557									c_file &= "_ "*/
            Concat((object_ptr)&_c_file_44300, _c_file_44300, _23327);
L1C: 

            /** c_decl.e:1560								c_file[$] = file_chars[next_c_char]*/
            if (IS_SEQUENCE(_c_file_44300)){
                    _23329 = SEQ_PTR(_c_file_44300)->length;
            }
            else {
                _23329 = 1;
            }
            _2 = (object)SEQ_PTR(_60file_chars_43921);
            _23330 = (object)*(((s1_ptr)_2)->base + _next_c_char_44294);
            Ref(_23330);
            _2 = (object)SEQ_PTR(_c_file_44300);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _c_file_44300 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _23329);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _23330;
            if( _1 != _23330 ){
                DeRef(_1);
            }
            _23330 = NOVALUE;
L1B: 

            /** c_decl.e:1564							c_file = unique_c_name(c_file)*/
            RefDS(_c_file_44300);
            _0 = _c_file_44300;
            _c_file_44300 = _60unique_c_name(_c_file_44300);
            DeRefDS(_0);

            /** c_decl.e:1565							new_c_file(c_file)*/
            RefDS(_c_file_44300);
            _60new_c_file(_c_file_44300);

            /** c_decl.e:1567							next_c_char += 1*/
            _next_c_char_44294 = _next_c_char_44294 + 1;

            /** c_decl.e:1568							if next_c_char > length(file_chars) then*/
            if (IS_SEQUENCE(_60file_chars_43921)){
                    _23333 = SEQ_PTR(_60file_chars_43921)->length;
            }
            else {
                _23333 = 1;
            }
            if (_next_c_char_44294 <= _23333)
            goto L1D; // [576] 586

            /** c_decl.e:1569								next_c_char = 1  -- (unique_c_name will resolve)*/
            _next_c_char_44294 = 1;
L1D: 

            /** c_decl.e:1572							add_file(c_file)*/
            RefDS(_c_file_44300);
            RefDS(_21928);
            _60add_file(_c_file_44300, _21928);
L15: 

            /** c_decl.e:1575						sequence ret_type*/

            /** c_decl.e:1576						if SymTab[s][S_TOKEN] = PROC then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23335 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23335);
            if (!IS_ATOM_INT(_39S_TOKEN_16475)){
                _23336 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
            }
            else{
                _23336 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
            }
            _23335 = NOVALUE;
            if (binary_op_a(NOTEQ, _23336, 27)){
                _23336 = NOVALUE;
                goto L1E; // [611] 625
            }
            _23336 = NOVALUE;

            /** c_decl.e:1577							ret_type = "void "*/
            RefDS(_22712);
            DeRefi(_ret_type_44425);
            _ret_type_44425 = _22712;
            goto L1F; // [622] 633
L1E: 

            /** c_decl.e:1579							ret_type = "object "*/
            RefDS(_22713);
            DeRefi(_ret_type_44425);
            _ret_type_44425 = _22713;
L1F: 

            /** c_decl.e:1581						integer s_scope = sym_scope( s )*/
            _s_scope_44434 = _56sym_scope(_s_44292);
            if (!IS_ATOM_INT(_s_scope_44434)) {
                _1 = (object)(DBL_PTR(_s_scope_44434)->dbl);
                DeRefDS(_s_scope_44434);
                _s_scope_44434 = _1;
            }

            /** c_decl.e:1582						integer s_file  = SymTab[s][S_FILE_NO]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23339 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23339);
            if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
                _s_file_44437 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
            }
            else{
                _s_file_44437 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
            }
            if (!IS_ATOM_INT(_s_file_44437)){
                _s_file_44437 = (object)DBL_PTR(_s_file_44437)->dbl;
            }
            _23339 = NOVALUE;

            /** c_decl.e:1583						if dll_option and*/
            if (_60dll_option_42089 == 0) {
                goto L20; // [661] 819
            }
            _23342 = (_s_scope_44434 == 6);
            if (_23342 != 0) {
                DeRef(_23343);
                _23343 = 1;
                goto L21; // [671] 749
            }
            _23344 = (_s_file_44437 == 1);
            if (_23344 == 0) {
                _23345 = 0;
                goto L22; // [679] 707
            }
            _23346 = (_s_scope_44434 == 13);
            if (_23346 != 0) {
                _23347 = 1;
                goto L23; // [689] 703
            }
            _23348 = (_s_scope_44434 == 11);
            _23347 = (_23348 != 0);
L23: 
            _23345 = (_23347 != 0);
L22: 
            if (_23345 != 0) {
                _23349 = 1;
                goto L24; // [707] 745
            }
            _23350 = (_s_scope_44434 == 13);
            if (_23350 == 0) {
                _23351 = 0;
                goto L25; // [717] 741
            }
            _2 = (object)SEQ_PTR(_36include_matrix_15411);
            _23352 = (object)*(((s1_ptr)_2)->base + 1);
            _2 = (object)SEQ_PTR(_23352);
            _23353 = (object)*(((s1_ptr)_2)->base + _s_file_44437);
            _23352 = NOVALUE;
            if (IS_ATOM_INT(_23353)) {
                {uintptr_t tu;
                     tu = (uintptr_t)_23353 & (uintptr_t)4;
                     _23354 = MAKE_UINT(tu);
                }
            }
            else {
                _23354 = binary_op(AND_BITS, _23353, 4);
            }
            _23353 = NOVALUE;
            if (IS_ATOM_INT(_23354))
            _23351 = (_23354 != 0);
            else
            _23351 = DBL_PTR(_23354)->dbl != 0.0;
L25: 
            _23349 = (_23351 != 0);
L24: 
            DeRef(_23343);
            _23343 = (_23349 != 0);
L21: 
            if (_23343 == 0)
            {
                _23343 = NOVALUE;
                goto L20; // [750] 819
            }
            else{
                _23343 = NOVALUE;
            }

            /** c_decl.e:1589							SymTab[s][S_RI_TARGET] = TRUE*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_s_44292 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 53);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _9TRUE_444;
            DeRef(_1);
            _23355 = NOVALUE;

            /** c_decl.e:1590							LeftSym = TRUE*/
            _60LeftSym_42086 = _9TRUE_444;

            /** c_decl.e:1593							if TWINDOWS then*/

            /** c_decl.e:1596								c_stmt(ret_type & "@(", s)*/
            Concat((object_ptr)&_23360, _ret_type_44425, _23359);
            _60c_stmt(_23360, _s_44292, 0);
            _23360 = NOVALUE;
            goto L26; // [816] 842
L20: 

            /** c_decl.e:1600							LeftSym = TRUE*/
            _60LeftSym_42086 = _9TRUE_444;

            /** c_decl.e:1601							c_stmt( ret_type & "@(", s)*/
            Concat((object_ptr)&_23361, _ret_type_44425, _23359);
            _60c_stmt(_23361, _s_44292, 0);
            _23361 = NOVALUE;
L26: 

            /** c_decl.e:1605						sp = SymTab[s][S_NEXT]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23362 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23362);
            _sp_44293 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44293)){
                _sp_44293 = (object)DBL_PTR(_sp_44293)->dbl;
            }
            _23362 = NOVALUE;

            /** c_decl.e:1606						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23364 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23364);
            if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
                _23365 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
            }
            else{
                _23365 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
            }
            _23364 = NOVALUE;
            {
                object _p_44484;
                _p_44484 = 1;
L27: 
                if (binary_op_a(GREATER, _p_44484, _23365)){
                    goto L28; // [872] 948
                }

                /** c_decl.e:1607							c_puts("object _")*/
                RefDS(_23366);
                _57c_puts(_23366);

                /** c_decl.e:1608							c_puts(SymTab[sp][S_NAME])*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23367 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23367);
                if (!IS_ATOM_INT(_39S_NAME_16470)){
                    _23368 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
                }
                else{
                    _23368 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
                }
                _23367 = NOVALUE;
                Ref(_23368);
                _57c_puts(_23368);
                _23368 = NOVALUE;

                /** c_decl.e:1609							if p != SymTab[s][S_NUM_ARGS] then*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23369 = (object)*(((s1_ptr)_2)->base + _s_44292);
                _2 = (object)SEQ_PTR(_23369);
                if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
                    _23370 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
                }
                else{
                    _23370 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
                }
                _23369 = NOVALUE;
                if (binary_op_a(EQUALS, _p_44484, _23370)){
                    _23370 = NOVALUE;
                    goto L29; // [915] 925
                }
                _23370 = NOVALUE;

                /** c_decl.e:1610								c_puts(", ")*/
                RefDS(_23372);
                _57c_puts(_23372);
L29: 

                /** c_decl.e:1612							sp = SymTab[sp][S_NEXT]*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23373 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23373);
                _sp_44293 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44293)){
                    _sp_44293 = (object)DBL_PTR(_sp_44293)->dbl;
                }
                _23373 = NOVALUE;

                /** c_decl.e:1613						end for*/
                _0 = _p_44484;
                if (IS_ATOM_INT(_p_44484)) {
                    _p_44484 = _p_44484 + 1;
                    if ((object)((uintptr_t)_p_44484 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44484 = NewDouble((eudouble)_p_44484);
                    }
                }
                else {
                    _p_44484 = binary_op_a(PLUS, _p_44484, 1);
                }
                DeRef(_0);
                goto L27; // [943] 879
L28: 
                ;
                DeRef(_p_44484);
            }

            /** c_decl.e:1615						c_puts(")\n")*/
            RefDS(_23375);
            _57c_puts(_23375);

            /** c_decl.e:1616						c_stmt0("{\n")*/
            RefDS(_22032);
            _60c_stmt0(_22032);

            /** c_decl.e:1618						NewBB(0, E_ALL_EFFECT, 0)*/
            _60NewBB(0, 1073741823, 0);

            /** c_decl.e:1619						Initializing = TRUE*/
            _39Initializing_16895 = _9TRUE_444;

            /** c_decl.e:1622						while sp do*/
L2A: 
            if (_sp_44293 == 0)
            {
                goto L2B; // [981] 1120
            }
            else{
            }

            /** c_decl.e:1623							integer scope = SymTab[sp][S_SCOPE]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23376 = (object)*(((s1_ptr)_2)->base + _sp_44293);
            _2 = (object)SEQ_PTR(_23376);
            _scope_44514 = (object)*(((s1_ptr)_2)->base + 4);
            if (!IS_ATOM_INT(_scope_44514)){
                _scope_44514 = (object)DBL_PTR(_scope_44514)->dbl;
            }
            _23376 = NOVALUE;

            /** c_decl.e:1624							switch scope with fallthru do*/
            _0 = _scope_44514;
            switch ( _0 ){ 

                /** c_decl.e:1625								case SC_LOOP_VAR, SC_UNDEFINED then*/
                case 2:
                case 9:

                /** c_decl.e:1628									break*/
                goto L2C; // [1015] 1097

                /** c_decl.e:1630								case SC_PRIVATE then*/
                case 3:

                /** c_decl.e:1631									c_stmt0("object ")*/
                RefDS(_22713);
                _60c_stmt0(_22713);

                /** c_decl.e:1632									c_puts("_")*/
                RefDS(_22000);
                _57c_puts(_22000);

                /** c_decl.e:1633									c_puts(SymTab[sp][S_NAME])*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23380 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23380);
                if (!IS_ATOM_INT(_39S_NAME_16470)){
                    _23381 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
                }
                else{
                    _23381 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
                }
                _23380 = NOVALUE;
                Ref(_23381);
                _57c_puts(_23381);
                _23381 = NOVALUE;

                /** c_decl.e:1635									c_puts(" = NOVALUE;\n")*/
                RefDS(_22721);
                _57c_puts(_22721);

                /** c_decl.e:1636									target[MIN] = NOVALUE*/
                Ref(_39NOVALUE_16670);
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _39NOVALUE_16670;
                DeRef(_1);

                /** c_decl.e:1637									target[MAX] = NOVALUE*/
                Ref(_39NOVALUE_16670);
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _39NOVALUE_16670;
                DeRef(_1);

                /** c_decl.e:1638									RemoveFromBB( sp )*/
                _60RemoveFromBB(_sp_44293);

                /** c_decl.e:1640									break*/
                goto L2C; // [1084] 1097

                /** c_decl.e:1642								case else*/
                default:

                /** c_decl.e:1643									exit*/
                goto L2B; // [1094] 1120
            ;}L2C: 

            /** c_decl.e:1645							sp = SymTab[sp][S_NEXT]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23382 = (object)*(((s1_ptr)_2)->base + _sp_44293);
            _2 = (object)SEQ_PTR(_23382);
            _sp_44293 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44293)){
                _sp_44293 = (object)DBL_PTR(_sp_44293)->dbl;
            }
            _23382 = NOVALUE;

            /** c_decl.e:1646						end while*/
            goto L2A; // [1117] 981
L2B: 

            /** c_decl.e:1649						temps = SymTab[s][S_TEMPS]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23384 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23384);
            if (!IS_ATOM_INT(_39S_TEMPS_16515)){
                _temps_44296 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
            }
            else{
                _temps_44296 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
            }
            if (!IS_ATOM_INT(_temps_44296)){
                _temps_44296 = (object)DBL_PTR(_temps_44296)->dbl;
            }
            _23384 = NOVALUE;

            /** c_decl.e:1650						sequence names = {}*/
            RefDS(_21928);
            DeRef(_names_44548);
            _names_44548 = _21928;

            /** c_decl.e:1651						while temps != 0 do*/
L2D: 
            if (_temps_44296 == 0)
            goto L2E; // [1148] 1340

            /** c_decl.e:1652							if SymTab[temps][S_SCOPE] != DELETED then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23387 = (object)*(((s1_ptr)_2)->base + _temps_44296);
            _2 = (object)SEQ_PTR(_23387);
            _23388 = (object)*(((s1_ptr)_2)->base + 4);
            _23387 = NOVALUE;
            if (binary_op_a(EQUALS, _23388, 2)){
                _23388 = NOVALUE;
                goto L2F; // [1168] 1300
            }
            _23388 = NOVALUE;

            /** c_decl.e:1653								sequence name = sprintf("_%d", SymTab[temps][S_TEMP_NAME] )*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23390 = (object)*(((s1_ptr)_2)->base + _temps_44296);
            _2 = (object)SEQ_PTR(_23390);
            _23391 = (object)*(((s1_ptr)_2)->base + 34);
            _23390 = NOVALUE;
            DeRefi(_name_44558);
            _name_44558 = EPrintf(-9999999, _22051, _23391);
            _23391 = NOVALUE;

            /** c_decl.e:1654								if temp_name_type[SymTab[temps][S_TEMP_NAME]][T_GTYPE]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23393 = (object)*(((s1_ptr)_2)->base + _temps_44296);
            _2 = (object)SEQ_PTR(_23393);
            _23394 = (object)*(((s1_ptr)_2)->base + 34);
            _23393 = NOVALUE;
            _2 = (object)SEQ_PTR(_39temp_name_type_16897);
            if (!IS_ATOM_INT(_23394)){
                _23395 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_23394)->dbl));
            }
            else{
                _23395 = (object)*(((s1_ptr)_2)->base + _23394);
            }
            _2 = (object)SEQ_PTR(_23395);
            _23396 = (object)*(((s1_ptr)_2)->base + 1);
            _23395 = NOVALUE;
            if (IS_ATOM_INT(_23396)) {
                _23397 = (_23396 != 0);
            }
            else {
                _23397 = binary_op(NOTEQ, _23396, 0);
            }
            _23396 = NOVALUE;
            if (IS_ATOM_INT(_23397)) {
                if (_23397 == 0) {
                    goto L30; // [1222] 1296
                }
            }
            else {
                if (DBL_PTR(_23397)->dbl == 0.0) {
                    goto L30; // [1222] 1296
                }
            }
            _23399 = find_from(_name_44558, _names_44548, 1);
            _23400 = (_23399 == 0);
            _23399 = NOVALUE;
            if (_23400 == 0)
            {
                DeRef(_23400);
                _23400 = NOVALUE;
                goto L30; // [1235] 1296
            }
            else{
                DeRef(_23400);
                _23400 = NOVALUE;
            }

            /** c_decl.e:1657									c_stmt0("object ")*/
            RefDS(_22713);
            _60c_stmt0(_22713);

            /** c_decl.e:1658									c_puts( name )*/
            RefDS(_name_44558);
            _57c_puts(_name_44558);

            /** c_decl.e:1659									c_puts(" = NOVALUE")*/
            RefDS(_23401);
            _57c_puts(_23401);

            /** c_decl.e:1661									target = {NOVALUE, NOVALUE}*/
            Ref(_39NOVALUE_16670);
            Ref(_39NOVALUE_16670);
            DeRef(_61target_27985);
            _1 = NewS1(2);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t *)_2)[1] = _39NOVALUE_16670;
            ((intptr_t *)_2)[2] = _39NOVALUE_16670;
            _61target_27985 = MAKE_SEQ(_1);

            /** c_decl.e:1663									SetBBType(temps, TYPE_INTEGER, target, TYPE_OBJECT, 0)*/
            RefDS(_61target_27985);
            _60SetBBType(_temps_44296, 1, _61target_27985, 16, 0);

            /** c_decl.e:1664									ifdef DEBUG then*/

            /** c_decl.e:1667										c_puts(";\n")*/
            RefDS(_22204);
            _57c_puts(_22204);

            /** c_decl.e:1669									names = prepend( names, name )*/
            RefDS(_name_44558);
            Prepend(&_names_44548, _names_44548, _name_44558);
            goto L31; // [1293] 1299
L30: 

            /** c_decl.e:1671									ifdef DEBUG then*/
L31: 
L2F: 
            DeRefi(_name_44558);
            _name_44558 = NOVALUE;

            /** c_decl.e:1677							SymTab[temps][S_GTYPE] = TYPE_OBJECT*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _36SymTab_15404 = MAKE_SEQ(_2);
            }
            _3 = (object)(_temps_44296 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 36);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = 16;
            DeRef(_1);
            _23406 = NOVALUE;

            /** c_decl.e:1678							temps = SymTab[temps][S_NEXT]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23408 = (object)*(((s1_ptr)_2)->base + _temps_44296);
            _2 = (object)SEQ_PTR(_23408);
            _temps_44296 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_temps_44296)){
                _temps_44296 = (object)DBL_PTR(_temps_44296)->dbl;
            }
            _23408 = NOVALUE;

            /** c_decl.e:1679						end while*/
            goto L2D; // [1337] 1148
L2E: 

            /** c_decl.e:1680						Initializing = FALSE*/
            _39Initializing_16895 = _9FALSE_442;

            /** c_decl.e:1682						if SymTab[s][S_LHS_SUBS2] then*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23410 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23410);
            _23411 = (object)*(((s1_ptr)_2)->base + 37);
            _23410 = NOVALUE;
            if (_23411 == 0) {
                _23411 = NOVALUE;
                goto L32; // [1363] 1376
            }
            else {
                if (!IS_ATOM_INT(_23411) && DBL_PTR(_23411)->dbl == 0.0){
                    _23411 = NOVALUE;
                    goto L32; // [1363] 1376
                }
                _23411 = NOVALUE;
            }
            _23411 = NOVALUE;

            /** c_decl.e:1683							c_stmt0("object _0, _1, _2, _3;\n\n")*/
            RefDS(_23412);
            _60c_stmt0(_23412);

            /** c_decl.e:1684							ifdef DEBUG then*/
            goto L33; // [1373] 1384
L32: 

            /** c_decl.e:1688							c_stmt0("object _0, _1, _2;\n\n")*/
            RefDS(_23414);
            _60c_stmt0(_23414);

            /** c_decl.e:1689							ifdef DEBUG then*/
L33: 

            /** c_decl.e:1696						sp = SymTab[s][S_NEXT]*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23416 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23416);
            _sp_44293 = (object)*(((s1_ptr)_2)->base + 2);
            if (!IS_ATOM_INT(_sp_44293)){
                _sp_44293 = (object)DBL_PTR(_sp_44293)->dbl;
            }
            _23416 = NOVALUE;

            /** c_decl.e:1697						for p = 1 to SymTab[s][S_NUM_ARGS] do*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23418 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23418);
            if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
                _23419 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
            }
            else{
                _23419 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
            }
            _23418 = NOVALUE;
            {
                object _p_44619;
                _p_44619 = 1;
L34: 
                if (binary_op_a(GREATER, _p_44619, _23419)){
                    goto L35; // [1414] 1765
                }

                /** c_decl.e:1698							SymTab[sp][S_ONE_REF] = FALSE*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _36SymTab_15404 = MAKE_SEQ(_2);
                }
                _3 = (object)(_sp_44293 + ((s1_ptr)_2)->base);
                _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    *(intptr_t *)_3 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 35);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _9FALSE_442;
                DeRef(_1);
                _23420 = NOVALUE;

                /** c_decl.e:1699							if SymTab[sp][S_ARG_TYPE] = TYPE_SEQUENCE then*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23422 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23422);
                _23423 = (object)*(((s1_ptr)_2)->base + 43);
                _23422 = NOVALUE;
                if (binary_op_a(NOTEQ, _23423, 8)){
                    _23423 = NOVALUE;
                    goto L36; // [1454] 1518
                }
                _23423 = NOVALUE;

                /** c_decl.e:1700								target[MIN] = SymTab[sp][S_ARG_SEQ_LEN]*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23425 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23425);
                _23426 = (object)*(((s1_ptr)_2)->base + 51);
                _23425 = NOVALUE;
                Ref(_23426);
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23426;
                if( _1 != _23426 ){
                    DeRef(_1);
                }
                _23426 = NOVALUE;

                /** c_decl.e:1701								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target,*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23427 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23427);
                _23428 = (object)*(((s1_ptr)_2)->base + 43);
                _23427 = NOVALUE;
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23429 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23429);
                _23430 = (object)*(((s1_ptr)_2)->base + 45);
                _23429 = NOVALUE;
                Ref(_23428);
                RefDS(_61target_27985);
                Ref(_23430);
                _60SetBBType(_sp_44293, _23428, _61target_27985, _23430, 0);
                _23428 = NOVALUE;
                _23430 = NOVALUE;
                goto L37; // [1515] 1742
L36: 

                /** c_decl.e:1704							elsif SymTab[sp][S_ARG_TYPE] = TYPE_INTEGER then*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23431 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23431);
                _23432 = (object)*(((s1_ptr)_2)->base + 43);
                _23431 = NOVALUE;
                if (binary_op_a(NOTEQ, _23432, 1)){
                    _23432 = NOVALUE;
                    goto L38; // [1534] 1658
                }
                _23432 = NOVALUE;

                /** c_decl.e:1705								if SymTab[sp][S_ARG_MIN] = NOVALUE then*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23434 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23434);
                _23435 = (object)*(((s1_ptr)_2)->base + 47);
                _23434 = NOVALUE;
                if (binary_op_a(NOTEQ, _23435, _39NOVALUE_16670)){
                    _23435 = NOVALUE;
                    goto L39; // [1554] 1585
                }
                _23435 = NOVALUE;

                /** c_decl.e:1706									target[MIN] = MININT*/
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = -1073741824;
                DeRef(_1);

                /** c_decl.e:1707									target[MAX] = MAXINT*/
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = 1073741823;
                DeRef(_1);
                goto L3A; // [1582] 1630
L39: 

                /** c_decl.e:1709									target[MIN] = SymTab[sp][S_ARG_MIN]*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23437 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23437);
                _23438 = (object)*(((s1_ptr)_2)->base + 47);
                _23437 = NOVALUE;
                Ref(_23438);
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 1);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23438;
                if( _1 != _23438 ){
                    DeRef(_1);
                }
                _23438 = NOVALUE;

                /** c_decl.e:1710									target[MAX] = SymTab[sp][S_ARG_MAX]*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23439 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23439);
                _23440 = (object)*(((s1_ptr)_2)->base + 48);
                _23439 = NOVALUE;
                Ref(_23440);
                _2 = (object)SEQ_PTR(_61target_27985);
                if (!UNIQUE(_2)) {
                    _2 = (object)SequenceCopy((s1_ptr)_2);
                    _61target_27985 = MAKE_SEQ(_2);
                }
                _2 = (object)(((s1_ptr)_2)->base + 2);
                _1 = *(intptr_t *)_2;
                *(intptr_t *)_2 = _23440;
                if( _1 != _23440 ){
                    DeRef(_1);
                }
                _23440 = NOVALUE;
L3A: 

                /** c_decl.e:1712								SetBBType(sp, SymTab[sp][S_ARG_TYPE], target, TYPE_OBJECT, 0)*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23441 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23441);
                _23442 = (object)*(((s1_ptr)_2)->base + 43);
                _23441 = NOVALUE;
                Ref(_23442);
                RefDS(_61target_27985);
                _60SetBBType(_sp_44293, _23442, _61target_27985, 16, 0);
                _23442 = NOVALUE;
                goto L37; // [1655] 1742
L38: 

                /** c_decl.e:1714							elsif SymTab[sp][S_ARG_TYPE] = TYPE_OBJECT then*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23443 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23443);
                _23444 = (object)*(((s1_ptr)_2)->base + 43);
                _23443 = NOVALUE;
                if (binary_op_a(NOTEQ, _23444, 16)){
                    _23444 = NOVALUE;
                    goto L3B; // [1674] 1716
                }
                _23444 = NOVALUE;

                /** c_decl.e:1716								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue,*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23446 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23446);
                _23447 = (object)*(((s1_ptr)_2)->base + 43);
                _23446 = NOVALUE;
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23448 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23448);
                _23449 = (object)*(((s1_ptr)_2)->base + 45);
                _23448 = NOVALUE;
                Ref(_23447);
                RefDS(_57novalue_46109);
                Ref(_23449);
                _60SetBBType(_sp_44293, _23447, _57novalue_46109, _23449, 0);
                _23447 = NOVALUE;
                _23449 = NOVALUE;
                goto L37; // [1713] 1742
L3B: 

                /** c_decl.e:1720								SetBBType(sp, SymTab[sp][S_ARG_TYPE], novalue, TYPE_OBJECT, 0)*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23450 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23450);
                _23451 = (object)*(((s1_ptr)_2)->base + 43);
                _23450 = NOVALUE;
                Ref(_23451);
                RefDS(_57novalue_46109);
                _60SetBBType(_sp_44293, _23451, _57novalue_46109, 16, 0);
                _23451 = NOVALUE;
L37: 

                /** c_decl.e:1723							sp = SymTab[sp][S_NEXT]*/
                _2 = (object)SEQ_PTR(_36SymTab_15404);
                _23452 = (object)*(((s1_ptr)_2)->base + _sp_44293);
                _2 = (object)SEQ_PTR(_23452);
                _sp_44293 = (object)*(((s1_ptr)_2)->base + 2);
                if (!IS_ATOM_INT(_sp_44293)){
                    _sp_44293 = (object)DBL_PTR(_sp_44293)->dbl;
                }
                _23452 = NOVALUE;

                /** c_decl.e:1724						end for*/
                _0 = _p_44619;
                if (IS_ATOM_INT(_p_44619)) {
                    _p_44619 = _p_44619 + 1;
                    if ((object)((uintptr_t)_p_44619 +(uintptr_t) HIGH_BITS) >= 0){
                        _p_44619 = NewDouble((eudouble)_p_44619);
                    }
                }
                else {
                    _p_44619 = binary_op_a(PLUS, _p_44619, 1);
                }
                DeRef(_0);
                goto L34; // [1760] 1421
L35: 
                ;
                DeRef(_p_44619);
            }

            /** c_decl.e:1727						call_proc(Execute_id, {s})*/
            _1 = NewS1(1);
            _2 = (object)((s1_ptr)_1)->base;
            ((intptr_t*)_2)[1] = _s_44292;
            _23454 = MAKE_SEQ(_1);
            _1 = (object)SEQ_PTR(_23454);
            _2 = (object)((s1_ptr)_1)->base;
            _0 = (object)_00[_39Execute_id_16902].addr;
            Ref( *(( (intptr_t*)_2) + 1) );
            (*(intptr_t (*)())_0)(
                                *( ((intptr_t *)_2) + 1)
                                 );
            DeRefDS(_23454);
            _23454 = NOVALUE;

            /** c_decl.e:1729						c_puts("    ;\n}\n")*/
            RefDS(_23455);
            _57c_puts(_23455);

            /** c_decl.e:1730						if TUNIX and dll_option and is_exported( s ) then*/
            if (_43TUNIX_21592 == 0) {
                _23456 = 0;
                goto L3C; // [1785] 1795
            }
            _23456 = (_60dll_option_42089 != 0);
L3C: 
            if (_23456 == 0) {
                goto L3D; // [1795] 2118
            }
            _23458 = _60is_exported(_s_44292);
            if (_23458 == 0) {
                DeRef(_23458);
                _23458 = NOVALUE;
                goto L3D; // [1804] 2118
            }
            else {
                if (!IS_ATOM_INT(_23458) && DBL_PTR(_23458)->dbl == 0.0){
                    DeRef(_23458);
                    _23458 = NOVALUE;
                    goto L3D; // [1804] 2118
                }
                DeRef(_23458);
                _23458 = NOVALUE;
            }
            DeRef(_23458);
            _23458 = NOVALUE;

            /** c_decl.e:1732							LeftSym = TRUE*/
            _60LeftSym_42086 = _9TRUE_444;

            /** c_decl.e:1733							if TOSX then*/

            /** c_decl.e:1763								c_stmt( ret_type & SymTab[s][S_NAME] & "() __attribute__ ((alias (\"@\")));\n", s )*/
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            _23489 = (object)*(((s1_ptr)_2)->base + _s_44292);
            _2 = (object)SEQ_PTR(_23489);
            if (!IS_ATOM_INT(_39S_NAME_16470)){
                _23490 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
            }
            else{
                _23490 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
            }
            _23489 = NOVALUE;
            {
                object concat_list[3];

                concat_list[0] = _23491;
                concat_list[1] = _23490;
                concat_list[2] = _ret_type_44425;
                Concat_N((object_ptr)&_23492, concat_list, 3);
            }
            _23490 = NOVALUE;
            _60c_stmt(_23492, _s_44292, 0);
            _23492 = NOVALUE;

            /** c_decl.e:1765							LeftSym = FALSE*/
            _60LeftSym_42086 = _9FALSE_442;
L3D: 

            /** c_decl.e:1767						c_puts("\n\n" )*/
            RefDS(_22072);
            _57c_puts(_22072);
L14: 
            DeRefi(_ret_type_44425);
            _ret_type_44425 = NOVALUE;
            DeRef(_names_44548);
            _names_44548 = NOVALUE;

            /** c_decl.e:1769				end for*/
            _routine_no_44370 = _routine_no_44370 + 1;
            goto L12; // [2128] 359
L13: 
            ;
        }
L8: 
        DeRef(_these_routines_44367);
        _these_routines_44367 = NOVALUE;

        /** c_decl.e:1771		end for*/
        _file_no_44316 = _file_no_44316 + 1;
        goto L5; // [2138] 85
L6: 
        ;
    }

    /** c_decl.e:1772	end procedure*/
    DeRefi(_buff_44297);
    DeRef(_base_name_44298);
    DeRef(_long_c_file_44299);
    DeRef(_c_file_44300);
    DeRef(_23317);
    _23317 = NOVALUE;
    DeRef(_23280);
    _23280 = NOVALUE;
    DeRef(_23307);
    _23307 = NOVALUE;
    DeRef(_23312);
    _23312 = NOVALUE;
    _23365 = NOVALUE;
    DeRef(_23271);
    _23271 = NOVALUE;
    DeRef(_23348);
    _23348 = NOVALUE;
    _23419 = NOVALUE;
    DeRef(_23346);
    _23346 = NOVALUE;
    DeRef(_23397);
    _23397 = NOVALUE;
    DeRef(_23344);
    _23344 = NOVALUE;
    DeRef(_23309);
    _23309 = NOVALUE;
    _23394 = NOVALUE;
    _23315 = NOVALUE;
    DeRef(_23350);
    _23350 = NOVALUE;
    DeRef(_23305);
    _23305 = NOVALUE;
    DeRef(_23354);
    _23354 = NOVALUE;
    DeRef(_23294);
    _23294 = NOVALUE;
    DeRef(_23342);
    _23342 = NOVALUE;
    return;
    ;
}



// 0x0A7D5726
