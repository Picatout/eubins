// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _49Push(object _x_50627)
{
    object _26224 = NOVALUE;
    object _26222 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_x_50627)) {
        _1 = (object)(DBL_PTR(_x_50627)->dbl);
        DeRefDS(_x_50627);
        _x_50627 = _1;
    }

    /** emit.e:135		cgi += 1*/
    _49cgi_50388 = _49cgi_50388 + 1;

    /** emit.e:136		if cgi > length(cg_stack) then*/
    if (IS_SEQUENCE(_49cg_stack_50387)){
            _26222 = SEQ_PTR(_49cg_stack_50387)->length;
    }
    else {
        _26222 = 1;
    }
    if (_49cgi_50388 <= _26222)
    goto L1; // [20] 37

    /** emit.e:137			cg_stack &= repeat(0, 400)*/
    _26224 = Repeat(0, 400);
    Concat((object_ptr)&_49cg_stack_50387, _49cg_stack_50387, _26224);
    DeRefDS(_26224);
    _26224 = NOVALUE;
L1: 

    /** emit.e:139		cg_stack[cgi] = x*/
    _2 = (object)SEQ_PTR(_49cg_stack_50387);
    _2 = (object)(((s1_ptr)_2)->base + _49cgi_50388);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _x_50627;
    DeRef(_1);

    /** emit.e:141	end procedure*/
    return;
    ;
}


object _49Top()
{
    object _26226 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:145		return cg_stack[cgi]*/
    _2 = (object)SEQ_PTR(_49cg_stack_50387);
    _26226 = (object)*(((s1_ptr)_2)->base + _49cgi_50388);
    Ref(_26226);
    return _26226;
    ;
}


object _49Pop()
{
    object _t_50640 = NOVALUE;
    object _s_50646 = NOVALUE;
    object _26238 = NOVALUE;
    object _26236 = NOVALUE;
    object _26234 = NOVALUE;
    object _26231 = NOVALUE;
    object _26230 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** emit.e:153		t = cg_stack[cgi]*/
    _2 = (object)SEQ_PTR(_49cg_stack_50387);
    _t_50640 = (object)*(((s1_ptr)_2)->base + _49cgi_50388);
    if (!IS_ATOM_INT(_t_50640)){
        _t_50640 = (object)DBL_PTR(_t_50640)->dbl;
    }

    /** emit.e:154		cgi -= 1*/
    _49cgi_50388 = _49cgi_50388 - 1;

    /** emit.e:155		if t > 0 then*/
    if (_t_50640 <= 0)
    goto L1; // [23] 116

    /** emit.e:156			symtab_index s = t -- for type checking*/
    _s_50646 = _t_50640;

    /** emit.e:157			if SymTab[t][S_MODE] = M_TEMP then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26230 = (object)*(((s1_ptr)_2)->base + _t_50640);
    _2 = (object)SEQ_PTR(_26230);
    _26231 = (object)*(((s1_ptr)_2)->base + 3);
    _26230 = NOVALUE;
    if (binary_op_a(NOTEQ, _26231, 3)){
        _26231 = NOVALUE;
        goto L2; // [50] 115
    }
    _26231 = NOVALUE;

    /** emit.e:158				if use_private_list = 0 then  -- no problem with reusing the temp*/
    if (_39use_private_list_16928 != 0)
    goto L3; // [58] 82

    /** emit.e:159					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50640 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26234 = NOVALUE;
    goto L4; // [79] 114
L3: 

    /** emit.e:163				elsif find(t, private_sym) = 0 then*/
    _26236 = find_from(_t_50640, _39private_sym_16927, 1);
    if (_26236 != 0)
    goto L5; // [91] 113

    /** emit.e:165					SymTab[t][S_SCOPE] = FREE -- mark it as being free*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_t_50640 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26238 = NOVALUE;
L5: 
L4: 
L2: 
L1: 

    /** emit.e:169		return t*/
    return _t_50640;
    ;
}


void _49TempKeep(object _x_50674)
{
    object _26245 = NOVALUE;
    object _26244 = NOVALUE;
    object _26243 = NOVALUE;
    object _26242 = NOVALUE;
    object _26241 = NOVALUE;
    object _26240 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** emit.e:173		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    _26240 = (_x_50674 > 0);
    if (_26240 == 0) {
        goto L1; // [9] 53
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26242 = (object)*(((s1_ptr)_2)->base + _x_50674);
    _2 = (object)SEQ_PTR(_26242);
    _26243 = (object)*(((s1_ptr)_2)->base + 3);
    _26242 = NOVALUE;
    if (IS_ATOM_INT(_26243)) {
        _26244 = (_26243 == 3);
    }
    else {
        _26244 = binary_op(EQUALS, _26243, 3);
    }
    _26243 = NOVALUE;
    if (_26244 == 0) {
        DeRef(_26244);
        _26244 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26244) && DBL_PTR(_26244)->dbl == 0.0){
            DeRef(_26244);
            _26244 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26244);
        _26244 = NOVALUE;
    }
    DeRef(_26244);
    _26244 = NOVALUE;

    /** emit.e:174			SymTab[x][S_SCOPE] = IN_USE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50674 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _26245 = NOVALUE;
L1: 

    /** emit.e:176	end procedure*/
    DeRef(_26240);
    _26240 = NOVALUE;
    return;
    ;
}


void _49TempFree(object _x_50692)
{
    object _26251 = NOVALUE;
    object _26249 = NOVALUE;
    object _26248 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** emit.e:179		if x > 0 then*/
    if (_x_50692 <= 0)
    goto L1; // [5] 53

    /** emit.e:180			if SymTab[x][S_MODE] = M_TEMP then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26248 = (object)*(((s1_ptr)_2)->base + _x_50692);
    _2 = (object)SEQ_PTR(_26248);
    _26249 = (object)*(((s1_ptr)_2)->base + 3);
    _26248 = NOVALUE;
    if (binary_op_a(NOTEQ, _26249, 3)){
        _26249 = NOVALUE;
        goto L2; // [25] 52
    }
    _26249 = NOVALUE;

    /** emit.e:181				SymTab[x][S_SCOPE] = FREE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50692 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _26251 = NOVALUE;

    /** emit.e:182				clear_temp( x )*/
    _49clear_temp(_x_50692);
L2: 
L1: 

    /** emit.e:185	end procedure*/
    return;
    ;
}


void _49TempInteger(object _x_50711)
{
    object _26258 = NOVALUE;
    object _26257 = NOVALUE;
    object _26256 = NOVALUE;
    object _26255 = NOVALUE;
    object _26254 = NOVALUE;
    object _26253 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_x_50711)) {
        _1 = (object)(DBL_PTR(_x_50711)->dbl);
        DeRefDS(_x_50711);
        _x_50711 = _1;
    }

    /** emit.e:188		if x > 0 and SymTab[x][S_MODE] = M_TEMP then*/
    _26253 = (_x_50711 > 0);
    if (_26253 == 0) {
        goto L1; // [9] 53
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26255 = (object)*(((s1_ptr)_2)->base + _x_50711);
    _2 = (object)SEQ_PTR(_26255);
    _26256 = (object)*(((s1_ptr)_2)->base + 3);
    _26255 = NOVALUE;
    if (IS_ATOM_INT(_26256)) {
        _26257 = (_26256 == 3);
    }
    else {
        _26257 = binary_op(EQUALS, _26256, 3);
    }
    _26256 = NOVALUE;
    if (_26257 == 0) {
        DeRef(_26257);
        _26257 = NOVALUE;
        goto L1; // [32] 53
    }
    else {
        if (!IS_ATOM_INT(_26257) && DBL_PTR(_26257)->dbl == 0.0){
            DeRef(_26257);
            _26257 = NOVALUE;
            goto L1; // [32] 53
        }
        DeRef(_26257);
        _26257 = NOVALUE;
    }
    DeRef(_26257);
    _26257 = NOVALUE;

    /** emit.e:189			SymTab[x][S_USAGE] = T_INTEGER*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_x_50711 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _26258 = NOVALUE;
L1: 

    /** emit.e:191	end procedure*/
    DeRef(_26253);
    _26253 = NOVALUE;
    return;
    ;
}


object _49LexName(object _t_50728, object _defname_50729)
{
    object _name_50731 = NOVALUE;
    object _26267 = NOVALUE;
    object _26265 = NOVALUE;
    object _26263 = NOVALUE;
    object _26262 = NOVALUE;
    object _26261 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_t_50728)) {
        _1 = (object)(DBL_PTR(_t_50728)->dbl);
        DeRefDS(_t_50728);
        _t_50728 = _1;
    }

    /** emit.e:197		for i = 1 to length(token_name) do*/
    _26261 = 80;
    {
        object _i_50733;
        _i_50733 = 1;
L1: 
        if (_i_50733 > 80){
            goto L2; // [12] 82
        }

        /** emit.e:198			if t = token_name[i][LEX_NUMBER] then*/
        _2 = (object)SEQ_PTR(_49token_name_50395);
        _26262 = (object)*(((s1_ptr)_2)->base + _i_50733);
        _2 = (object)SEQ_PTR(_26262);
        _26263 = (object)*(((s1_ptr)_2)->base + 1);
        _26262 = NOVALUE;
        if (binary_op_a(NOTEQ, _t_50728, _26263)){
            _26263 = NOVALUE;
            goto L3; // [31] 75
        }
        _26263 = NOVALUE;

        /** emit.e:199				name = token_name[i][LEX_NAME]*/
        _2 = (object)SEQ_PTR(_49token_name_50395);
        _26265 = (object)*(((s1_ptr)_2)->base + _i_50733);
        DeRef(_name_50731);
        _2 = (object)SEQ_PTR(_26265);
        _name_50731 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_name_50731);
        _26265 = NOVALUE;

        /** emit.e:200				if not find(' ', name) then*/
        _26267 = find_from(32, _name_50731, 1);
        if (_26267 != 0)
        goto L4; // [56] 68
        _26267 = NOVALUE;

        /** emit.e:201					name = "'" & name & "'"*/
        {
            object concat_list[3];

            concat_list[0] = _26269;
            concat_list[1] = _name_50731;
            concat_list[2] = _26269;
            Concat_N((object_ptr)&_name_50731, concat_list, 3);
        }
L4: 

        /** emit.e:203				return name*/
        DeRefDSi(_defname_50729);
        return _name_50731;
L3: 

        /** emit.e:205		end for*/
        _i_50733 = _i_50733 + 1;
        goto L1; // [77] 19
L2: 
        ;
    }

    /** emit.e:206		return defname -- try to avoid this case*/
    DeRef(_name_50731);
    return _defname_50729;
    ;
}


void _49InitEmit()
{
    object _0, _1, _2;
    

    /** emit.e:212		cg_stack = repeat(0, 400)*/
    DeRef(_49cg_stack_50387);
    _49cg_stack_50387 = Repeat(0, 400);

    /** emit.e:213		cgi = 0*/
    _49cgi_50388 = 0;

    /** emit.e:214	end procedure*/
    return;
    ;
}


object _49IsInteger(object _sym_50752)
{
    object _mode_50753 = NOVALUE;
    object _t_50755 = NOVALUE;
    object _pt_50756 = NOVALUE;
    object _26292 = NOVALUE;
    object _26291 = NOVALUE;
    object _26289 = NOVALUE;
    object _26288 = NOVALUE;
    object _26287 = NOVALUE;
    object _26285 = NOVALUE;
    object _26284 = NOVALUE;
    object _26283 = NOVALUE;
    object _26282 = NOVALUE;
    object _26280 = NOVALUE;
    object _26276 = NOVALUE;
    object _26273 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_50752)) {
        _1 = (object)(DBL_PTR(_sym_50752)->dbl);
        DeRefDS(_sym_50752);
        _sym_50752 = _1;
    }

    /** emit.e:221		if sym < 1 then*/
    if (_sym_50752 >= 1)
    goto L1; // [5] 16

    /** emit.e:223			return 0*/
    return 0;
L1: 

    /** emit.e:226		mode = SymTab[sym][S_MODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26273 = (object)*(((s1_ptr)_2)->base + _sym_50752);
    _2 = (object)SEQ_PTR(_26273);
    _mode_50753 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_mode_50753)){
        _mode_50753 = (object)DBL_PTR(_mode_50753)->dbl;
    }
    _26273 = NOVALUE;

    /** emit.e:227		if mode = M_NORMAL then*/
    if (_mode_50753 != 1)
    goto L2; // [36] 136

    /** emit.e:228			t = SymTab[sym][S_VTYPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26276 = (object)*(((s1_ptr)_2)->base + _sym_50752);
    _2 = (object)SEQ_PTR(_26276);
    _t_50755 = (object)*(((s1_ptr)_2)->base + 15);
    if (!IS_ATOM_INT(_t_50755)){
        _t_50755 = (object)DBL_PTR(_t_50755)->dbl;
    }
    _26276 = NOVALUE;

    /** emit.e:229			if t = integer_type then*/
    if (_t_50755 != _56integer_type_46264)
    goto L3; // [60] 73

    /** emit.e:230				return TRUE*/
    return _9TRUE_444;
L3: 

    /** emit.e:232			if t > 0 then*/
    if (_t_50755 <= 0)
    goto L4; // [75] 215

    /** emit.e:233				pt = SymTab[t][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26280 = (object)*(((s1_ptr)_2)->base + _t_50755);
    _2 = (object)SEQ_PTR(_26280);
    _pt_50756 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_pt_50756)){
        _pt_50756 = (object)DBL_PTR(_pt_50756)->dbl;
    }
    _26280 = NOVALUE;

    /** emit.e:234				if pt and SymTab[pt][S_VTYPE] = integer_type then*/
    if (_pt_50756 == 0) {
        goto L4; // [97] 215
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26283 = (object)*(((s1_ptr)_2)->base + _pt_50756);
    _2 = (object)SEQ_PTR(_26283);
    _26284 = (object)*(((s1_ptr)_2)->base + 15);
    _26283 = NOVALUE;
    if (IS_ATOM_INT(_26284)) {
        _26285 = (_26284 == _56integer_type_46264);
    }
    else {
        _26285 = binary_op(EQUALS, _26284, _56integer_type_46264);
    }
    _26284 = NOVALUE;
    if (_26285 == 0) {
        DeRef(_26285);
        _26285 = NOVALUE;
        goto L4; // [120] 215
    }
    else {
        if (!IS_ATOM_INT(_26285) && DBL_PTR(_26285)->dbl == 0.0){
            DeRef(_26285);
            _26285 = NOVALUE;
            goto L4; // [120] 215
        }
        DeRef(_26285);
        _26285 = NOVALUE;
    }
    DeRef(_26285);
    _26285 = NOVALUE;

    /** emit.e:235					return TRUE   -- usertype(integer x)*/
    return _9TRUE_444;
    goto L4; // [133] 215
L2: 

    /** emit.e:239		elsif mode = M_CONSTANT then*/
    if (_mode_50753 != 2)
    goto L5; // [140] 176

    /** emit.e:240			if integer(SymTab[sym][S_OBJ]) then  -- bug fixed: can't allow PLUS1_I op*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26287 = (object)*(((s1_ptr)_2)->base + _sym_50752);
    _2 = (object)SEQ_PTR(_26287);
    _26288 = (object)*(((s1_ptr)_2)->base + 1);
    _26287 = NOVALUE;
    if (IS_ATOM_INT(_26288))
    _26289 = 1;
    else if (IS_ATOM_DBL(_26288))
    _26289 = IS_ATOM_INT(DoubleToInt(_26288));
    else
    _26289 = 0;
    _26288 = NOVALUE;
    if (_26289 == 0)
    {
        _26289 = NOVALUE;
        goto L4; // [161] 215
    }
    else{
        _26289 = NOVALUE;
    }

    /** emit.e:241				return TRUE*/
    return _9TRUE_444;
    goto L4; // [173] 215
L5: 

    /** emit.e:244		elsif mode = M_TEMP then*/
    if (_mode_50753 != 3)
    goto L6; // [180] 214

    /** emit.e:245			if SymTab[sym][S_USAGE] = T_INTEGER then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _26291 = (object)*(((s1_ptr)_2)->base + _sym_50752);
    _2 = (object)SEQ_PTR(_26291);
    _26292 = (object)*(((s1_ptr)_2)->base + 5);
    _26291 = NOVALUE;
    if (binary_op_a(NOTEQ, _26292, 1)){
        _26292 = NOVALUE;
        goto L7; // [200] 213
    }
    _26292 = NOVALUE;

    /** emit.e:246				return TRUE*/
    return _9TRUE_444;
L7: 
L6: 
L4: 

    /** emit.e:250		return FALSE*/
    return _9FALSE_442;
    ;
}


void _49emit(object _val_50813)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_val_50813)) {
        _1 = (object)(DBL_PTR(_val_50813)->dbl);
        DeRefDS(_val_50813);
        _val_50813 = _1;
    }

    /** emit.e:260		Code = append(Code, val)*/
    Append(&_39Code_16903, _39Code_16903, _val_50813);

    /** emit.e:261	end procedure*/
    return;
    ;
}


void _49emit_opnd(object _opnd_50820)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_opnd_50820)) {
        _1 = (object)(DBL_PTR(_opnd_50820)->dbl);
        DeRefDS(_opnd_50820);
        _opnd_50820 = _1;
    }

    /** emit.e:271			Push(opnd)*/
    _49Push(_opnd_50820);

    /** emit.e:272			previous_op = -1  -- N.B.*/
    _39previous_op_16913 = -1;

    /** emit.e:273	end procedure*/
    return;
    ;
}


void _49emit_addr(object _x_50824)
{
    object _0, _1, _2;
    

    /** emit.e:277			Code = append(Code, x)*/
    Ref(_x_50824);
    Append(&_39Code_16903, _39Code_16903, _x_50824);

    /** emit.e:278	end procedure*/
    DeRef(_x_50824);
    return;
    ;
}


void _49emit_opcode(object _op_50830)
{
    object _0, _1, _2;
    

    /** emit.e:282		Code = append(Code, op)*/
    Append(&_39Code_16903, _39Code_16903, _op_50830);

    /** emit.e:283	end procedure*/
    return;
    ;
}


void _49emit_temp(object _tempsym_50864, object _referenced_50865)
{
    object _26323 = NOVALUE;
    object _26322 = NOVALUE;
    object _26321 = NOVALUE;
    object _26320 = NOVALUE;
    object _26319 = NOVALUE;
    object _26318 = NOVALUE;
    object _26317 = NOVALUE;
    object _26316 = NOVALUE;
    object _26315 = NOVALUE;
    object _26314 = NOVALUE;
    object _26313 = NOVALUE;
    object _26312 = NOVALUE;
    object _26311 = NOVALUE;
    object _26310 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:307		if not TRANSLATE  then -- translator has its own way of handling temps*/
    if (_39TRANSLATE_16440 != 0)
    goto L1; // [7] 129

    /** emit.e:308			if sequence(tempsym) then*/
    _26310 = IS_SEQUENCE(_tempsym_50864);
    if (_26310 == 0)
    {
        _26310 = NOVALUE;
        goto L2; // [15] 53
    }
    else{
        _26310 = NOVALUE;
    }

    /** emit.e:309				for i = 1 to length(tempsym) do*/
    if (IS_SEQUENCE(_tempsym_50864)){
            _26311 = SEQ_PTR(_tempsym_50864)->length;
    }
    else {
        _26311 = 1;
    }
    {
        object _i_50872;
        _i_50872 = 1;
L3: 
        if (_i_50872 > _26311){
            goto L4; // [23] 50
        }

        /** emit.e:310					emit_temp( tempsym[i], referenced )*/
        _2 = (object)SEQ_PTR(_tempsym_50864);
        _26312 = (object)*(((s1_ptr)_2)->base + _i_50872);
        DeRef(_26313);
        _26313 = _referenced_50865;
        Ref(_26312);
        _49emit_temp(_26312, _26313);
        _26312 = NOVALUE;
        _26313 = NOVALUE;

        /** emit.e:311				end for*/
        _i_50872 = _i_50872 + 1;
        goto L3; // [45] 30
L4: 
        ;
    }
    goto L5; // [50] 128
L2: 

    /** emit.e:313			elsif tempsym > 0*/
    if (IS_ATOM_INT(_tempsym_50864)) {
        _26314 = (_tempsym_50864 > 0);
    }
    else {
        _26314 = binary_op(GREATER, _tempsym_50864, 0);
    }
    if (IS_ATOM_INT(_26314)) {
        if (_26314 == 0) {
            DeRef(_26315);
            _26315 = 0;
            goto L6; // [59] 77
        }
    }
    else {
        if (DBL_PTR(_26314)->dbl == 0.0) {
            DeRef(_26315);
            _26315 = 0;
            goto L6; // [59] 77
        }
    }
    Ref(_tempsym_50864);
    _26316 = _56sym_mode(_tempsym_50864);
    if (IS_ATOM_INT(_26316)) {
        _26317 = (_26316 == 3);
    }
    else {
        _26317 = binary_op(EQUALS, _26316, 3);
    }
    DeRef(_26316);
    _26316 = NOVALUE;
    DeRef(_26315);
    if (IS_ATOM_INT(_26317))
    _26315 = (_26317 != 0);
    else
    _26315 = DBL_PTR(_26317)->dbl != 0.0;
L6: 
    if (_26315 == 0) {
        _26318 = 0;
        goto L7; // [77] 92
    }
    Ref(_tempsym_50864);
    _26319 = _49IsInteger(_tempsym_50864);
    if (IS_ATOM_INT(_26319)) {
        _26320 = (_26319 == 0);
    }
    else {
        _26320 = unary_op(NOT, _26319);
    }
    DeRef(_26319);
    _26319 = NOVALUE;
    if (IS_ATOM_INT(_26320))
    _26318 = (_26320 != 0);
    else
    _26318 = DBL_PTR(_26320)->dbl != 0.0;
L7: 
    if (_26318 == 0) {
        goto L8; // [92] 127
    }
    _26322 = find_from(_tempsym_50864, _49emitted_temps_50860, 1);
    _26323 = (_26322 == 0);
    _26322 = NOVALUE;
    if (_26323 == 0)
    {
        DeRef(_26323);
        _26323 = NOVALUE;
        goto L8; // [107] 127
    }
    else{
        DeRef(_26323);
        _26323 = NOVALUE;
    }

    /** emit.e:319				emitted_temps &= tempsym*/
    if (IS_SEQUENCE(_49emitted_temps_50860) && IS_ATOM(_tempsym_50864)) {
        Ref(_tempsym_50864);
        Append(&_49emitted_temps_50860, _49emitted_temps_50860, _tempsym_50864);
    }
    else if (IS_ATOM(_49emitted_temps_50860) && IS_SEQUENCE(_tempsym_50864)) {
    }
    else {
        Concat((object_ptr)&_49emitted_temps_50860, _49emitted_temps_50860, _tempsym_50864);
    }

    /** emit.e:320				emitted_temp_referenced &= referenced*/
    Append(&_49emitted_temp_referenced_50861, _49emitted_temp_referenced_50861, _referenced_50865);
L8: 
L5: 
L1: 

    /** emit.e:323	end procedure*/
    DeRef(_tempsym_50864);
    DeRef(_26320);
    _26320 = NOVALUE;
    DeRef(_26317);
    _26317 = NOVALUE;
    DeRef(_26314);
    _26314 = NOVALUE;
    return;
    ;
}


void _49flush_temps(object _except_for_50894)
{
    object _refs_50897 = NOVALUE;
    object _novalues_50898 = NOVALUE;
    object _sym_50903 = NOVALUE;
    object _26338 = NOVALUE;
    object _26337 = NOVALUE;
    object _26336 = NOVALUE;
    object _26335 = NOVALUE;
    object _26333 = NOVALUE;
    object _26329 = NOVALUE;
    object _26328 = NOVALUE;
    object _26326 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:332		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [7] 16
    }
    else{
    }

    /** emit.e:333			return*/
    DeRefDS(_except_for_50894);
    DeRef(_refs_50897);
    DeRefi(_novalues_50898);
    return;
L1: 

    /** emit.e:336		sequence*/

    /** emit.e:337			refs = {},*/
    RefDS(_21928);
    DeRef(_refs_50897);
    _refs_50897 = _21928;

    /** emit.e:338			novalues = {}*/
    RefDS(_21928);
    DeRefi(_novalues_50898);
    _novalues_50898 = _21928;

    /** emit.e:340		derefs = {}*/
    RefDS(_21928);
    DeRefi(_49derefs_50891);
    _49derefs_50891 = _21928;

    /** emit.e:341		for i = 1 to length( emitted_temps ) do*/
    if (IS_SEQUENCE(_49emitted_temps_50860)){
            _26326 = SEQ_PTR(_49emitted_temps_50860)->length;
    }
    else {
        _26326 = 1;
    }
    {
        object _i_50900;
        _i_50900 = 1;
L2: 
        if (_i_50900 > _26326){
            goto L3; // [46] 119
        }

        /** emit.e:342			symtab_index sym = emitted_temps[i]*/
        _2 = (object)SEQ_PTR(_49emitted_temps_50860);
        _sym_50903 = (object)*(((s1_ptr)_2)->base + _i_50900);
        if (!IS_ATOM_INT(_sym_50903)){
            _sym_50903 = (object)DBL_PTR(_sym_50903)->dbl;
        }

        /** emit.e:344			if find( sym, except_for ) then*/
        _26328 = find_from(_sym_50903, _except_for_50894, 1);
        if (_26328 == 0)
        {
            _26328 = NOVALUE;
            goto L4; // [70] 80
        }
        else{
            _26328 = NOVALUE;
        }

        /** emit.e:345				continue*/
        goto L5; // [77] 114
L4: 

        /** emit.e:348			if emitted_temp_referenced[i] = NEW_REFERENCE then*/
        _2 = (object)SEQ_PTR(_49emitted_temp_referenced_50861);
        _26329 = (object)*(((s1_ptr)_2)->base + _i_50900);
        if (binary_op_a(NOTEQ, _26329, 1)){
            _26329 = NOVALUE;
            goto L6; // [88] 103
        }
        _26329 = NOVALUE;

        /** emit.e:349				derefs &= sym*/
        Append(&_49derefs_50891, _49derefs_50891, _sym_50903);
        goto L7; // [100] 110
L6: 

        /** emit.e:351				novalues &= sym*/
        Append(&_novalues_50898, _novalues_50898, _sym_50903);
L7: 

        /** emit.e:353		end for*/
L5: 
        _i_50900 = _i_50900 + 1;
        goto L2; // [114] 53
L3: 
        ;
    }

    /** emit.e:355		if not length( except_for ) then*/
    if (IS_SEQUENCE(_except_for_50894)){
            _26333 = SEQ_PTR(_except_for_50894)->length;
    }
    else {
        _26333 = 1;
    }
    if (_26333 != 0)
    goto L8; // [124] 132
    _26333 = NOVALUE;

    /** emit.e:356			clear_last()*/
    _49clear_last();
L8: 

    /** emit.e:359		for i = 1 to length( derefs ) do*/
    if (IS_SEQUENCE(_49derefs_50891)){
            _26335 = SEQ_PTR(_49derefs_50891)->length;
    }
    else {
        _26335 = 1;
    }
    {
        object _i_50918;
        _i_50918 = 1;
L9: 
        if (_i_50918 > _26335){
            goto LA; // [139] 171
        }

        /** emit.e:360			emit( DEREF_TEMP )*/
        _49emit(208);

        /** emit.e:361			emit( derefs[i] )*/
        _2 = (object)SEQ_PTR(_49derefs_50891);
        _26336 = (object)*(((s1_ptr)_2)->base + _i_50918);
        _49emit(_26336);
        _26336 = NOVALUE;

        /** emit.e:362		end for*/
        _i_50918 = _i_50918 + 1;
        goto L9; // [166] 146
LA: 
        ;
    }

    /** emit.e:364		for i = 1 to length( novalues ) do*/
    if (IS_SEQUENCE(_novalues_50898)){
            _26337 = SEQ_PTR(_novalues_50898)->length;
    }
    else {
        _26337 = 1;
    }
    {
        object _i_50923;
        _i_50923 = 1;
LB: 
        if (_i_50923 > _26337){
            goto LC; // [176] 206
        }

        /** emit.e:365			emit( NOVALUE_TEMP )*/
        _49emit(209);

        /** emit.e:366			emit( novalues[i] )*/
        _2 = (object)SEQ_PTR(_novalues_50898);
        _26338 = (object)*(((s1_ptr)_2)->base + _i_50923);
        _49emit(_26338);
        _26338 = NOVALUE;

        /** emit.e:367		end for*/
        _i_50923 = _i_50923 + 1;
        goto LB; // [201] 183
LC: 
        ;
    }

    /** emit.e:369		emitted_temps = {}*/
    RefDS(_21928);
    DeRef(_49emitted_temps_50860);
    _49emitted_temps_50860 = _21928;

    /** emit.e:370		emitted_temp_referenced = {}*/
    RefDS(_21928);
    DeRef(_49emitted_temp_referenced_50861);
    _49emitted_temp_referenced_50861 = _21928;

    /** emit.e:371	end procedure*/
    DeRefDS(_except_for_50894);
    DeRef(_refs_50897);
    DeRefi(_novalues_50898);
    return;
    ;
}


void _49flush_temp(object _temp_50930)
{
    object _except_for_50931 = NOVALUE;
    object _ix_50932 = NOVALUE;
    object _26340 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_temp_50930)) {
        _1 = (object)(DBL_PTR(_temp_50930)->dbl);
        DeRefDS(_temp_50930);
        _temp_50930 = _1;
    }

    /** emit.e:374		sequence except_for = emitted_temps*/
    RefDS(_49emitted_temps_50860);
    DeRef(_except_for_50931);
    _except_for_50931 = _49emitted_temps_50860;

    /** emit.e:375		integer ix = find( temp, emitted_temps )*/
    _ix_50932 = find_from(_temp_50930, _49emitted_temps_50860, 1);

    /** emit.e:376		if ix then*/
    if (_ix_50932 == 0)
    {
        goto L1; // [23] 37
    }
    else{
    }

    /** emit.e:377			flush_temps( remove( except_for, ix ) )*/
    {
        s1_ptr assign_space = SEQ_PTR(_except_for_50931);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50932)) ? _ix_50932 : (object)(DBL_PTR(_ix_50932)->dbl);
        int stop = (IS_ATOM_INT(_ix_50932)) ? _ix_50932 : (object)(DBL_PTR(_ix_50932)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
            RefDS(_except_for_50931);
            DeRef(_26340);
            _26340 = _except_for_50931;
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_except_for_50931), start, &_26340 );
            }
            else Tail(SEQ_PTR(_except_for_50931), stop+1, &_26340);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_except_for_50931), start, &_26340);
        }
        else {
            assign_slice_seq = &assign_space;
            _1 = Remove_elements(start, stop, 0);
            DeRef(_26340);
            _26340 = _1;
        }
    }
    _49flush_temps(_26340);
    _26340 = NOVALUE;
L1: 

    /** emit.e:379	end procedure*/
    DeRef(_except_for_50931);
    return;
    ;
}


void _49check_for_temps()
{
    object _26347 = NOVALUE;
    object _26346 = NOVALUE;
    object _26345 = NOVALUE;
    object _26344 = NOVALUE;
    object _26342 = NOVALUE;
    object _26341 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:382		if TRANSLATE or last_op < 1 or last_pc < 1 then*/
    if (_39TRANSLATE_16440 != 0) {
        _26341 = 1;
        goto L1; // [5] 19
    }
    _26342 = (_49last_op_51269 < 1);
    _26341 = (_26342 != 0);
L1: 
    if (_26341 != 0) {
        goto L2; // [19] 34
    }
    _26344 = (_49last_pc_51270 < 1);
    if (_26344 == 0)
    {
        DeRef(_26344);
        _26344 = NOVALUE;
        goto L3; // [30] 40
    }
    else{
        DeRef(_26344);
        _26344 = NOVALUE;
    }
L2: 

    /** emit.e:383			return*/
    DeRef(_26342);
    _26342 = NOVALUE;
    return;
L3: 

    /** emit.e:386		emit_temp( get_target_sym( current_op( last_pc ) ), op_temp_ref[last_op] )*/
    RefDS(_39Code_16903);
    _26345 = _67current_op(_49last_pc_51270, _39Code_16903);
    _26346 = _67get_target_sym(_26345);
    _26345 = NOVALUE;
    _2 = (object)SEQ_PTR(_49op_temp_ref_51082);
    _26347 = (object)*(((s1_ptr)_2)->base + _49last_op_51269);
    _49emit_temp(_26346, _26347);
    _26346 = NOVALUE;
    _26347 = NOVALUE;

    /** emit.e:388	end procedure*/
    DeRef(_26342);
    _26342 = NOVALUE;
    return;
    ;
}


void _49clear_temp(object _tempsym_50957)
{
    object _ix_50958 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_tempsym_50957)) {
        _1 = (object)(DBL_PTR(_tempsym_50957)->dbl);
        DeRefDS(_tempsym_50957);
        _tempsym_50957 = _1;
    }

    /** emit.e:391		integer ix = find( tempsym, emitted_temps )*/
    _ix_50958 = find_from(_tempsym_50957, _49emitted_temps_50860, 1);

    /** emit.e:392		if ix then*/
    if (_ix_50958 == 0)
    {
        goto L1; // [14] 36
    }
    else{
    }

    /** emit.e:393			emitted_temps = remove( emitted_temps, ix )*/
    {
        s1_ptr assign_space = SEQ_PTR(_49emitted_temps_50860);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50958)) ? _ix_50958 : (object)(DBL_PTR(_ix_50958)->dbl);
        int stop = (IS_ATOM_INT(_ix_50958)) ? _ix_50958 : (object)(DBL_PTR(_ix_50958)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49emitted_temps_50860), start, &_49emitted_temps_50860 );
            }
            else Tail(SEQ_PTR(_49emitted_temps_50860), stop+1, &_49emitted_temps_50860);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49emitted_temps_50860), start, &_49emitted_temps_50860);
        }
        else {
            assign_slice_seq = &assign_space;
            _49emitted_temps_50860 = Remove_elements(start, stop, (SEQ_PTR(_49emitted_temps_50860)->ref == 1));
        }
    }

    /** emit.e:394			emitted_temp_referenced = remove( emitted_temp_referenced, ix )*/
    {
        s1_ptr assign_space = SEQ_PTR(_49emitted_temp_referenced_50861);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_50958)) ? _ix_50958 : (object)(DBL_PTR(_ix_50958)->dbl);
        int stop = (IS_ATOM_INT(_ix_50958)) ? _ix_50958 : (object)(DBL_PTR(_ix_50958)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49emitted_temp_referenced_50861), start, &_49emitted_temp_referenced_50861 );
            }
            else Tail(SEQ_PTR(_49emitted_temp_referenced_50861), stop+1, &_49emitted_temp_referenced_50861);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49emitted_temp_referenced_50861), start, &_49emitted_temp_referenced_50861);
        }
        else {
            assign_slice_seq = &assign_space;
            _49emitted_temp_referenced_50861 = Remove_elements(start, stop, (SEQ_PTR(_49emitted_temp_referenced_50861)->ref == 1));
        }
    }
L1: 

    /** emit.e:396	end procedure*/
    return;
    ;
}


object _49pop_temps()
{
    object _new_emitted_50965 = NOVALUE;
    object _new_referenced_50966 = NOVALUE;
    object _26351 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:402		sequence new_emitted  = emitted_temps*/
    RefDS(_49emitted_temps_50860);
    DeRef(_new_emitted_50965);
    _new_emitted_50965 = _49emitted_temps_50860;

    /** emit.e:403		sequence new_referenced = emitted_temp_referenced*/
    RefDS(_49emitted_temp_referenced_50861);
    DeRef(_new_referenced_50966);
    _new_referenced_50966 = _49emitted_temp_referenced_50861;

    /** emit.e:405		emitted_temps  = {}*/
    RefDS(_21928);
    DeRefDS(_49emitted_temps_50860);
    _49emitted_temps_50860 = _21928;

    /** emit.e:406		emitted_temp_referenced = {}*/
    RefDS(_21928);
    DeRefDS(_49emitted_temp_referenced_50861);
    _49emitted_temp_referenced_50861 = _21928;

    /** emit.e:407		return { new_emitted, new_referenced }*/
    RefDS(_new_referenced_50966);
    RefDS(_new_emitted_50965);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _new_emitted_50965;
    ((intptr_t *)_2)[2] = _new_referenced_50966;
    _26351 = MAKE_SEQ(_1);
    DeRefDS(_new_emitted_50965);
    DeRefDS(_new_referenced_50966);
    return _26351;
    ;
}


object _49get_temps(object _add_to_50970)
{
    object _26356 = NOVALUE;
    object _26355 = NOVALUE;
    object _26354 = NOVALUE;
    object _26353 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:416		add_to[1] &= emitted_temps*/
    _2 = (object)SEQ_PTR(_add_to_50970);
    _26353 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_26353) && IS_ATOM(_49emitted_temps_50860)) {
    }
    else if (IS_ATOM(_26353) && IS_SEQUENCE(_49emitted_temps_50860)) {
        Ref(_26353);
        Prepend(&_26354, _49emitted_temps_50860, _26353);
    }
    else {
        Concat((object_ptr)&_26354, _26353, _49emitted_temps_50860);
        _26353 = NOVALUE;
    }
    _26353 = NOVALUE;
    _2 = (object)SEQ_PTR(_add_to_50970);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50970 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26354;
    if( _1 != _26354 ){
        DeRef(_1);
    }
    _26354 = NOVALUE;

    /** emit.e:417		add_to[2] &= emitted_temp_referenced*/
    _2 = (object)SEQ_PTR(_add_to_50970);
    _26355 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_26355) && IS_ATOM(_49emitted_temp_referenced_50861)) {
    }
    else if (IS_ATOM(_26355) && IS_SEQUENCE(_49emitted_temp_referenced_50861)) {
        Ref(_26355);
        Prepend(&_26356, _49emitted_temp_referenced_50861, _26355);
    }
    else {
        Concat((object_ptr)&_26356, _26355, _49emitted_temp_referenced_50861);
        _26355 = NOVALUE;
    }
    _26355 = NOVALUE;
    _2 = (object)SEQ_PTR(_add_to_50970);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _add_to_50970 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _26356;
    if( _1 != _26356 ){
        DeRef(_1);
    }
    _26356 = NOVALUE;

    /** emit.e:418		return add_to*/
    return _add_to_50970;
    ;
}


void _49push_temps(object _temps_50978)
{
    object _26359 = NOVALUE;
    object _26357 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:426		emitted_temps &= temps[1]*/
    _2 = (object)SEQ_PTR(_temps_50978);
    _26357 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_49emitted_temps_50860) && IS_ATOM(_26357)) {
        Ref(_26357);
        Append(&_49emitted_temps_50860, _49emitted_temps_50860, _26357);
    }
    else if (IS_ATOM(_49emitted_temps_50860) && IS_SEQUENCE(_26357)) {
    }
    else {
        Concat((object_ptr)&_49emitted_temps_50860, _49emitted_temps_50860, _26357);
    }
    _26357 = NOVALUE;

    /** emit.e:427		emitted_temp_referenced &= temps[2]*/
    _2 = (object)SEQ_PTR(_temps_50978);
    _26359 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_49emitted_temp_referenced_50861) && IS_ATOM(_26359)) {
        Ref(_26359);
        Append(&_49emitted_temp_referenced_50861, _49emitted_temp_referenced_50861, _26359);
    }
    else if (IS_ATOM(_49emitted_temp_referenced_50861) && IS_SEQUENCE(_26359)) {
    }
    else {
        Concat((object_ptr)&_49emitted_temp_referenced_50861, _49emitted_temp_referenced_50861, _26359);
    }
    _26359 = NOVALUE;

    /** emit.e:428		flush_temps()*/
    RefDS(_21928);
    _49flush_temps(_21928);

    /** emit.e:429	end procedure*/
    DeRefDS(_temps_50978);
    return;
    ;
}


void _49backpatch(object _index_50985, object _val_50986)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_index_50985)) {
        _1 = (object)(DBL_PTR(_index_50985)->dbl);
        DeRefDS(_index_50985);
        _index_50985 = _1;
    }
    if (!IS_ATOM_INT(_val_50986)) {
        _1 = (object)(DBL_PTR(_val_50986)->dbl);
        DeRefDS(_val_50986);
        _val_50986 = _1;
    }

    /** emit.e:433			Code[index] = val*/
    _2 = (object)SEQ_PTR(_39Code_16903);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39Code_16903 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_50985);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _val_50986;
    DeRef(_1);

    /** emit.e:434	end procedure*/
    return;
    ;
}


void _49cont11ii(object _op_51170, object _ii_51172)
{
    object _t_51173 = NOVALUE;
    object _source_51174 = NOVALUE;
    object _c_51175 = NOVALUE;
    object _26368 = NOVALUE;
    object _26367 = NOVALUE;
    object _26365 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:580		emit_opcode(op)*/
    _49emit_opcode(_op_51170);

    /** emit.e:581		source = Pop()*/
    _source_51174 = _49Pop();
    if (!IS_ATOM_INT(_source_51174)) {
        _1 = (object)(DBL_PTR(_source_51174)->dbl);
        DeRefDS(_source_51174);
        _source_51174 = _1;
    }

    /** emit.e:582		emit_addr(source)*/
    _49emit_addr(_source_51174);

    /** emit.e:583		assignable = TRUE*/
    _49assignable_50390 = _9TRUE_444;

    /** emit.e:584		t = op_result[op]*/
    _2 = (object)SEQ_PTR(_49op_result_50988);
    _t_51173 = (object)*(((s1_ptr)_2)->base + _op_51170);

    /** emit.e:587		if t = T_INTEGER or (ii and IsInteger(source)) then*/
    _26365 = (_t_51173 == 1);
    if (_26365 != 0) {
        goto L1; // [43] 64
    }
    if (_ii_51172 == 0) {
        _26367 = 0;
        goto L2; // [47] 59
    }
    _26368 = _49IsInteger(_source_51174);
    if (IS_ATOM_INT(_26368))
    _26367 = (_26368 != 0);
    else
    _26367 = DBL_PTR(_26368)->dbl != 0.0;
L2: 
    if (_26367 == 0)
    {
        _26367 = NOVALUE;
        goto L3; // [60] 80
    }
    else{
        _26367 = NOVALUE;
    }
L1: 

    /** emit.e:588			c = NewTempSym()*/
    _c_51175 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_51175)) {
        _1 = (object)(DBL_PTR(_c_51175)->dbl);
        DeRefDS(_c_51175);
        _c_51175 = _1;
    }

    /** emit.e:589			TempInteger(c)*/
    _49TempInteger(_c_51175);
    goto L4; // [77] 95
L3: 

    /** emit.e:591			c = NewTempSym() -- allocate *after* checking opnd type*/
    _c_51175 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_51175)) {
        _1 = (object)(DBL_PTR(_c_51175)->dbl);
        DeRefDS(_c_51175);
        _c_51175 = _1;
    }

    /** emit.e:592			emit_temp( c, NEW_REFERENCE )*/
    _49emit_temp(_c_51175, 1);
L4: 

    /** emit.e:595		Push(c)*/
    _49Push(_c_51175);

    /** emit.e:596		emit_addr(c)*/
    _49emit_addr(_c_51175);

    /** emit.e:597	end procedure*/
    DeRef(_26368);
    _26368 = NOVALUE;
    DeRef(_26365);
    _26365 = NOVALUE;
    return;
    ;
}


void _49cont21d(object _op_51192, object _a_51193, object _b_51194, object _ii_51196)
{
    object _c_51197 = NOVALUE;
    object _t_51198 = NOVALUE;
    object _26378 = NOVALUE;
    object _26377 = NOVALUE;
    object _26376 = NOVALUE;
    object _26375 = NOVALUE;
    object _26373 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:602		assignable = TRUE*/
    _49assignable_50390 = _9TRUE_444;

    /** emit.e:603		t = op_result[op]*/
    _2 = (object)SEQ_PTR(_49op_result_50988);
    _t_51198 = (object)*(((s1_ptr)_2)->base + _op_51192);

    /** emit.e:604		if op = C_FUNC then*/
    if (_op_51192 != 133)
    goto L1; // [26] 38

    /** emit.e:605			emit_addr(CurrentSub)*/
    _49emit_addr(_39CurrentSub_16823);
L1: 

    /** emit.e:607		if t = T_INTEGER or (ii and IsInteger(a) and IsInteger(b)) then*/
    _26373 = (_t_51198 == 1);
    if (_26373 != 0) {
        goto L2; // [46] 79
    }
    if (_ii_51196 == 0) {
        _26375 = 0;
        goto L3; // [50] 62
    }
    _26376 = _49IsInteger(_a_51193);
    if (IS_ATOM_INT(_26376))
    _26375 = (_26376 != 0);
    else
    _26375 = DBL_PTR(_26376)->dbl != 0.0;
L3: 
    if (_26375 == 0) {
        DeRef(_26377);
        _26377 = 0;
        goto L4; // [62] 74
    }
    _26378 = _49IsInteger(_b_51194);
    if (IS_ATOM_INT(_26378))
    _26377 = (_26378 != 0);
    else
    _26377 = DBL_PTR(_26378)->dbl != 0.0;
L4: 
    if (_26377 == 0)
    {
        _26377 = NOVALUE;
        goto L5; // [75] 95
    }
    else{
        _26377 = NOVALUE;
    }
L2: 

    /** emit.e:608			c = NewTempSym()*/
    _c_51197 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_51197)) {
        _1 = (object)(DBL_PTR(_c_51197)->dbl);
        DeRefDS(_c_51197);
        _c_51197 = _1;
    }

    /** emit.e:609			TempInteger(c)*/
    _49TempInteger(_c_51197);
    goto L6; // [92] 110
L5: 

    /** emit.e:611			c = NewTempSym() -- allocate *after* checking opnd types*/
    _c_51197 = _56NewTempSym(0);
    if (!IS_ATOM_INT(_c_51197)) {
        _1 = (object)(DBL_PTR(_c_51197)->dbl);
        DeRefDS(_c_51197);
        _c_51197 = _1;
    }

    /** emit.e:612			emit_temp( c, NEW_REFERENCE )*/
    _49emit_temp(_c_51197, 1);
L6: 

    /** emit.e:614		Push(c)*/
    _49Push(_c_51197);

    /** emit.e:615		emit_addr(c)*/
    _49emit_addr(_c_51197);

    /** emit.e:616	end procedure*/
    DeRef(_26376);
    _26376 = NOVALUE;
    DeRef(_26378);
    _26378 = NOVALUE;
    DeRef(_26373);
    _26373 = NOVALUE;
    return;
    ;
}


void _49cont21ii(object _op_51220, object _ii_51222)
{
    object _a_51223 = NOVALUE;
    object _b_51224 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:621		b = Pop()*/
    _b_51224 = _49Pop();
    if (!IS_ATOM_INT(_b_51224)) {
        _1 = (object)(DBL_PTR(_b_51224)->dbl);
        DeRefDS(_b_51224);
        _b_51224 = _1;
    }

    /** emit.e:622		emit_opcode(op)*/
    _49emit_opcode(_op_51220);

    /** emit.e:623		a = Pop()*/
    _a_51223 = _49Pop();
    if (!IS_ATOM_INT(_a_51223)) {
        _1 = (object)(DBL_PTR(_a_51223)->dbl);
        DeRefDS(_a_51223);
        _a_51223 = _1;
    }

    /** emit.e:624		emit_addr(a)*/
    _49emit_addr(_a_51223);

    /** emit.e:625		emit_addr(b)*/
    _49emit_addr(_b_51224);

    /** emit.e:626		cont21d(op, a, b, ii)*/
    _49cont21d(_op_51220, _a_51223, _b_51224, _ii_51222);

    /** emit.e:627	end procedure*/
    return;
    ;
}


object _49good_string(object _elements_51229)
{
    object _obj_51230 = NOVALUE;
    object _ep_51232 = NOVALUE;
    object _e_51234 = NOVALUE;
    object _element_vals_51235 = NOVALUE;
    object _26401 = NOVALUE;
    object _26400 = NOVALUE;
    object _26399 = NOVALUE;
    object _26398 = NOVALUE;
    object _26397 = NOVALUE;
    object _26396 = NOVALUE;
    object _26395 = NOVALUE;
    object _26394 = NOVALUE;
    object _26393 = NOVALUE;
    object _26392 = NOVALUE;
    object _26391 = NOVALUE;
    object _26389 = NOVALUE;
    object _26386 = NOVALUE;
    object _26385 = NOVALUE;
    object _26384 = NOVALUE;
    object _26383 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:634		sequence element_vals*/

    /** emit.e:636		if TRANSLATE and length(elements) > 10000 then*/
    if (_39TRANSLATE_16440 == 0) {
        goto L1; // [9] 31
    }
    if (IS_SEQUENCE(_elements_51229)){
            _26384 = SEQ_PTR(_elements_51229)->length;
    }
    else {
        _26384 = 1;
    }
    _26385 = (_26384 > 10000);
    _26384 = NOVALUE;
    if (_26385 == 0)
    {
        DeRef(_26385);
        _26385 = NOVALUE;
        goto L1; // [21] 31
    }
    else{
        DeRef(_26385);
        _26385 = NOVALUE;
    }

    /** emit.e:637			return -1 -- A huge string might upset the C compiler.*/
    DeRefDS(_elements_51229);
    DeRef(_obj_51230);
    DeRef(_element_vals_51235);
    return -1;
L1: 

    /** emit.e:639		element_vals = {}*/
    RefDS(_21928);
    DeRef(_element_vals_51235);
    _element_vals_51235 = _21928;

    /** emit.e:640		for i = 1 to length(elements) do*/
    if (IS_SEQUENCE(_elements_51229)){
            _26386 = SEQ_PTR(_elements_51229)->length;
    }
    else {
        _26386 = 1;
    }
    {
        object _i_51242;
        _i_51242 = 1;
L2: 
        if (_i_51242 > _26386){
            goto L3; // [43] 183
        }

        /** emit.e:641			ep = elements[i]*/
        _2 = (object)SEQ_PTR(_elements_51229);
        _ep_51232 = (object)*(((s1_ptr)_2)->base + _i_51242);
        if (!IS_ATOM_INT(_ep_51232)){
            _ep_51232 = (object)DBL_PTR(_ep_51232)->dbl;
        }

        /** emit.e:642			if ep < 1 then*/
        if (_ep_51232 >= 1)
        goto L4; // [60] 71

        /** emit.e:644				return -1*/
        DeRefDS(_elements_51229);
        DeRef(_obj_51230);
        DeRef(_element_vals_51235);
        return -1;
L4: 

        /** emit.e:646			e = ep*/
        _e_51234 = _ep_51232;

        /** emit.e:647			obj = SymTab[e][S_OBJ]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26389 = (object)*(((s1_ptr)_2)->base + _e_51234);
        DeRef(_obj_51230);
        _2 = (object)SEQ_PTR(_26389);
        _obj_51230 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51230);
        _26389 = NOVALUE;

        /** emit.e:648			if SymTab[e][S_MODE] = M_CONSTANT and*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26391 = (object)*(((s1_ptr)_2)->base + _e_51234);
        _2 = (object)SEQ_PTR(_26391);
        _26392 = (object)*(((s1_ptr)_2)->base + 3);
        _26391 = NOVALUE;
        if (IS_ATOM_INT(_26392)) {
            _26393 = (_26392 == 2);
        }
        else {
            _26393 = binary_op(EQUALS, _26392, 2);
        }
        _26392 = NOVALUE;
        if (IS_ATOM_INT(_26393)) {
            if (_26393 == 0) {
                DeRef(_26394);
                _26394 = 0;
                goto L5; // [112] 123
            }
        }
        else {
            if (DBL_PTR(_26393)->dbl == 0.0) {
                DeRef(_26394);
                _26394 = 0;
                goto L5; // [112] 123
            }
        }
        if (IS_ATOM_INT(_obj_51230))
        _26395 = 1;
        else if (IS_ATOM_DBL(_obj_51230))
        _26395 = IS_ATOM_INT(DoubleToInt(_obj_51230));
        else
        _26395 = 0;
        DeRef(_26394);
        _26394 = (_26395 != 0);
L5: 
        if (_26394 == 0) {
            goto L6; // [123] 169
        }
        _26397 = (_39TRANSLATE_16440 == 0);
        if (_26397 != 0) {
            DeRef(_26398);
            _26398 = 1;
            goto L7; // [132] 156
        }
        if (IS_ATOM_INT(_obj_51230)) {
            _26399 = (_obj_51230 >= 1);
        }
        else {
            _26399 = binary_op(GREATEREQ, _obj_51230, 1);
        }
        if (IS_ATOM_INT(_26399)) {
            if (_26399 == 0) {
                DeRef(_26400);
                _26400 = 0;
                goto L8; // [140] 152
            }
        }
        else {
            if (DBL_PTR(_26399)->dbl == 0.0) {
                DeRef(_26400);
                _26400 = 0;
                goto L8; // [140] 152
            }
        }
        if (IS_ATOM_INT(_obj_51230)) {
            _26401 = (_obj_51230 <= 255);
        }
        else {
            _26401 = binary_op(LESSEQ, _obj_51230, 255);
        }
        DeRef(_26400);
        if (IS_ATOM_INT(_26401))
        _26400 = (_26401 != 0);
        else
        _26400 = DBL_PTR(_26401)->dbl != 0.0;
L8: 
        DeRef(_26398);
        _26398 = (_26400 != 0);
L7: 
        if (_26398 == 0)
        {
            _26398 = NOVALUE;
            goto L6; // [157] 169
        }
        else{
            _26398 = NOVALUE;
        }

        /** emit.e:653				element_vals = prepend(element_vals, obj)*/
        Ref(_obj_51230);
        Prepend(&_element_vals_51235, _element_vals_51235, _obj_51230);
        goto L9; // [166] 176
L6: 

        /** emit.e:655				return -1*/
        DeRefDS(_elements_51229);
        DeRef(_obj_51230);
        DeRef(_element_vals_51235);
        DeRef(_26399);
        _26399 = NOVALUE;
        DeRef(_26393);
        _26393 = NOVALUE;
        DeRef(_26401);
        _26401 = NOVALUE;
        DeRef(_26397);
        _26397 = NOVALUE;
        return -1;
L9: 

        /** emit.e:657		end for*/
        _i_51242 = _i_51242 + 1;
        goto L2; // [178] 50
L3: 
        ;
    }

    /** emit.e:658		return element_vals*/
    DeRefDS(_elements_51229);
    DeRef(_obj_51230);
    DeRef(_26399);
    _26399 = NOVALUE;
    DeRef(_26393);
    _26393 = NOVALUE;
    DeRef(_26401);
    _26401 = NOVALUE;
    DeRef(_26397);
    _26397 = NOVALUE;
    return _element_vals_51235;
    ;
}


object _49Last_op()
{
    object _0, _1, _2;
    

    /** emit.e:664		return last_op*/
    return _49last_op_51269;
    ;
}


object _49Last_pc()
{
    object _0, _1, _2;
    

    /** emit.e:668		return last_pc*/
    return _49last_pc_51270;
    ;
}


void _49move_last_pc(object _amount_51277)
{
    object _0, _1, _2;
    

    /** emit.e:672		if last_pc > 0 then*/
    if (_49last_pc_51270 <= 0)
    goto L1; // [7] 20

    /** emit.e:673			last_pc += amount*/
    _49last_pc_51270 = _49last_pc_51270 + _amount_51277;
L1: 

    /** emit.e:675	end procedure*/
    return;
    ;
}


void _49clear_last()
{
    object _0, _1, _2;
    

    /** emit.e:678		last_op = 0*/
    _49last_op_51269 = 0;

    /** emit.e:679		last_pc = 0*/
    _49last_pc_51270 = 0;

    /** emit.e:680	end procedure*/
    return;
    ;
}


void _49clear_op()
{
    object _0, _1, _2;
    

    /** emit.e:683		previous_op = -1*/
    _39previous_op_16913 = -1;

    /** emit.e:684		assignable = FALSE*/
    _49assignable_50390 = _9FALSE_442;

    /** emit.e:685	end procedure*/
    return;
    ;
}


void _49inlined_function()
{
    object _0, _1, _2;
    

    /** emit.e:689		previous_op = PROC*/
    _39previous_op_16913 = 27;

    /** emit.e:690		assignable = TRUE*/
    _49assignable_50390 = _9TRUE_444;

    /** emit.e:691		inlined = TRUE*/
    _49inlined_51288 = _9TRUE_444;

    /** emit.e:692	end procedure*/
    return;
    ;
}


void _49add_inline_target(object _pc_51299)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_pc_51299)) {
        _1 = (object)(DBL_PTR(_pc_51299)->dbl);
        DeRefDS(_pc_51299);
        _pc_51299 = _1;
    }

    /** emit.e:696		inlined_targets &= pc*/
    Append(&_49inlined_targets_51296, _49inlined_targets_51296, _pc_51299);

    /** emit.e:697	end procedure*/
    return;
    ;
}


void _49clear_inline_targets()
{
    object _0, _1, _2;
    

    /** emit.e:700		inlined_targets = {}*/
    RefDS(_21928);
    DeRefi(_49inlined_targets_51296);
    _49inlined_targets_51296 = _21928;

    /** emit.e:701	end procedure*/
    return;
    ;
}


void _49emit_inline(object _code_51305)
{
    object _0, _1, _2;
    

    /** emit.e:704		last_pc = 0*/
    _49last_pc_51270 = 0;

    /** emit.e:705		last_op = 0*/
    _49last_op_51269 = 0;

    /** emit.e:706		Code &= code*/
    Concat((object_ptr)&_39Code_16903, _39Code_16903, _code_51305);

    /** emit.e:707	end procedure*/
    DeRefDS(_code_51305);
    return;
    ;
}


void _49emit_op(object _op_51310)
{
    object _a_51312 = NOVALUE;
    object _b_51313 = NOVALUE;
    object _c_51314 = NOVALUE;
    object _d_51315 = NOVALUE;
    object _source_51316 = NOVALUE;
    object _target_51317 = NOVALUE;
    object _subsym_51318 = NOVALUE;
    object _lhs_var_51320 = NOVALUE;
    object _ib_51321 = NOVALUE;
    object _ic_51322 = NOVALUE;
    object _n_51323 = NOVALUE;
    object _obj_51324 = NOVALUE;
    object _elements_51325 = NOVALUE;
    object _element_vals_51326 = NOVALUE;
    object _last_pc_backup_51327 = NOVALUE;
    object _last_op_backup_51328 = NOVALUE;
    object _temp_51337 = NOVALUE;
    object _real_op_51637 = NOVALUE;
    object _ref_51644 = NOVALUE;
    object _paths_51674 = NOVALUE;
    object _if_code_51754 = NOVALUE;
    object _if_code_51793 = NOVALUE;
    object _Top_inlined_Top_at_5480_52411 = NOVALUE;
    object _element_52482 = NOVALUE;
    object _Top_inlined_Top_at_7035_52629 = NOVALUE;
    object _31689 = NOVALUE;
    object _31688 = NOVALUE;
    object _27001 = NOVALUE;
    object _27000 = NOVALUE;
    object _26999 = NOVALUE;
    object _26995 = NOVALUE;
    object _26992 = NOVALUE;
    object _26990 = NOVALUE;
    object _26984 = NOVALUE;
    object _26983 = NOVALUE;
    object _26982 = NOVALUE;
    object _26980 = NOVALUE;
    object _26978 = NOVALUE;
    object _26977 = NOVALUE;
    object _26976 = NOVALUE;
    object _26975 = NOVALUE;
    object _26974 = NOVALUE;
    object _26973 = NOVALUE;
    object _26972 = NOVALUE;
    object _26971 = NOVALUE;
    object _26970 = NOVALUE;
    object _26969 = NOVALUE;
    object _26968 = NOVALUE;
    object _26966 = NOVALUE;
    object _26965 = NOVALUE;
    object _26964 = NOVALUE;
    object _26962 = NOVALUE;
    object _26961 = NOVALUE;
    object _26960 = NOVALUE;
    object _26959 = NOVALUE;
    object _26958 = NOVALUE;
    object _26957 = NOVALUE;
    object _26956 = NOVALUE;
    object _26955 = NOVALUE;
    object _26954 = NOVALUE;
    object _26951 = NOVALUE;
    object _26948 = NOVALUE;
    object _26947 = NOVALUE;
    object _26946 = NOVALUE;
    object _26945 = NOVALUE;
    object _26943 = NOVALUE;
    object _26941 = NOVALUE;
    object _26929 = NOVALUE;
    object _26921 = NOVALUE;
    object _26918 = NOVALUE;
    object _26917 = NOVALUE;
    object _26916 = NOVALUE;
    object _26915 = NOVALUE;
    object _26912 = NOVALUE;
    object _26911 = NOVALUE;
    object _26910 = NOVALUE;
    object _26909 = NOVALUE;
    object _26908 = NOVALUE;
    object _26907 = NOVALUE;
    object _26906 = NOVALUE;
    object _26905 = NOVALUE;
    object _26904 = NOVALUE;
    object _26903 = NOVALUE;
    object _26902 = NOVALUE;
    object _26900 = NOVALUE;
    object _26896 = NOVALUE;
    object _26895 = NOVALUE;
    object _26894 = NOVALUE;
    object _26893 = NOVALUE;
    object _26892 = NOVALUE;
    object _26891 = NOVALUE;
    object _26890 = NOVALUE;
    object _26889 = NOVALUE;
    object _26888 = NOVALUE;
    object _26887 = NOVALUE;
    object _26886 = NOVALUE;
    object _26884 = NOVALUE;
    object _26879 = NOVALUE;
    object _26878 = NOVALUE;
    object _26876 = NOVALUE;
    object _26875 = NOVALUE;
    object _26874 = NOVALUE;
    object _26872 = NOVALUE;
    object _26869 = NOVALUE;
    object _26865 = NOVALUE;
    object _26862 = NOVALUE;
    object _26861 = NOVALUE;
    object _26860 = NOVALUE;
    object _26859 = NOVALUE;
    object _26858 = NOVALUE;
    object _26857 = NOVALUE;
    object _26855 = NOVALUE;
    object _26854 = NOVALUE;
    object _26852 = NOVALUE;
    object _26851 = NOVALUE;
    object _26850 = NOVALUE;
    object _26849 = NOVALUE;
    object _26848 = NOVALUE;
    object _26847 = NOVALUE;
    object _26846 = NOVALUE;
    object _26845 = NOVALUE;
    object _26844 = NOVALUE;
    object _26843 = NOVALUE;
    object _26841 = NOVALUE;
    object _26840 = NOVALUE;
    object _26839 = NOVALUE;
    object _26838 = NOVALUE;
    object _26837 = NOVALUE;
    object _26836 = NOVALUE;
    object _26835 = NOVALUE;
    object _26834 = NOVALUE;
    object _26833 = NOVALUE;
    object _26832 = NOVALUE;
    object _26831 = NOVALUE;
    object _26830 = NOVALUE;
    object _26829 = NOVALUE;
    object _26828 = NOVALUE;
    object _26827 = NOVALUE;
    object _26825 = NOVALUE;
    object _26822 = NOVALUE;
    object _26821 = NOVALUE;
    object _26820 = NOVALUE;
    object _26819 = NOVALUE;
    object _26818 = NOVALUE;
    object _26817 = NOVALUE;
    object _26816 = NOVALUE;
    object _26815 = NOVALUE;
    object _26814 = NOVALUE;
    object _26813 = NOVALUE;
    object _26812 = NOVALUE;
    object _26811 = NOVALUE;
    object _26810 = NOVALUE;
    object _26809 = NOVALUE;
    object _26808 = NOVALUE;
    object _26806 = NOVALUE;
    object _26802 = NOVALUE;
    object _26800 = NOVALUE;
    object _26799 = NOVALUE;
    object _26797 = NOVALUE;
    object _26795 = NOVALUE;
    object _26793 = NOVALUE;
    object _26792 = NOVALUE;
    object _26790 = NOVALUE;
    object _26789 = NOVALUE;
    object _26788 = NOVALUE;
    object _26787 = NOVALUE;
    object _26786 = NOVALUE;
    object _26785 = NOVALUE;
    object _26784 = NOVALUE;
    object _26783 = NOVALUE;
    object _26782 = NOVALUE;
    object _26781 = NOVALUE;
    object _26780 = NOVALUE;
    object _26779 = NOVALUE;
    object _26778 = NOVALUE;
    object _26777 = NOVALUE;
    object _26776 = NOVALUE;
    object _26775 = NOVALUE;
    object _26774 = NOVALUE;
    object _26773 = NOVALUE;
    object _26772 = NOVALUE;
    object _26770 = NOVALUE;
    object _26768 = NOVALUE;
    object _26767 = NOVALUE;
    object _26765 = NOVALUE;
    object _26762 = NOVALUE;
    object _26761 = NOVALUE;
    object _26759 = NOVALUE;
    object _26758 = NOVALUE;
    object _26757 = NOVALUE;
    object _26755 = NOVALUE;
    object _26747 = NOVALUE;
    object _26746 = NOVALUE;
    object _26745 = NOVALUE;
    object _26744 = NOVALUE;
    object _26743 = NOVALUE;
    object _26742 = NOVALUE;
    object _26741 = NOVALUE;
    object _26740 = NOVALUE;
    object _26739 = NOVALUE;
    object _26738 = NOVALUE;
    object _26737 = NOVALUE;
    object _26736 = NOVALUE;
    object _26735 = NOVALUE;
    object _26734 = NOVALUE;
    object _26733 = NOVALUE;
    object _26732 = NOVALUE;
    object _26731 = NOVALUE;
    object _26730 = NOVALUE;
    object _26729 = NOVALUE;
    object _26728 = NOVALUE;
    object _26727 = NOVALUE;
    object _26726 = NOVALUE;
    object _26725 = NOVALUE;
    object _26724 = NOVALUE;
    object _26718 = NOVALUE;
    object _26717 = NOVALUE;
    object _26714 = NOVALUE;
    object _26711 = NOVALUE;
    object _26710 = NOVALUE;
    object _26709 = NOVALUE;
    object _26708 = NOVALUE;
    object _26707 = NOVALUE;
    object _26706 = NOVALUE;
    object _26705 = NOVALUE;
    object _26704 = NOVALUE;
    object _26703 = NOVALUE;
    object _26702 = NOVALUE;
    object _26700 = NOVALUE;
    object _26699 = NOVALUE;
    object _26698 = NOVALUE;
    object _26696 = NOVALUE;
    object _26694 = NOVALUE;
    object _26693 = NOVALUE;
    object _26692 = NOVALUE;
    object _26691 = NOVALUE;
    object _26690 = NOVALUE;
    object _26689 = NOVALUE;
    object _26688 = NOVALUE;
    object _26687 = NOVALUE;
    object _26686 = NOVALUE;
    object _26685 = NOVALUE;
    object _26683 = NOVALUE;
    object _26682 = NOVALUE;
    object _26680 = NOVALUE;
    object _26679 = NOVALUE;
    object _26678 = NOVALUE;
    object _26677 = NOVALUE;
    object _26676 = NOVALUE;
    object _26674 = NOVALUE;
    object _26673 = NOVALUE;
    object _26672 = NOVALUE;
    object _26671 = NOVALUE;
    object _26670 = NOVALUE;
    object _26669 = NOVALUE;
    object _26668 = NOVALUE;
    object _26667 = NOVALUE;
    object _26665 = NOVALUE;
    object _26664 = NOVALUE;
    object _26663 = NOVALUE;
    object _26662 = NOVALUE;
    object _26661 = NOVALUE;
    object _26659 = NOVALUE;
    object _26658 = NOVALUE;
    object _26656 = NOVALUE;
    object _26655 = NOVALUE;
    object _26654 = NOVALUE;
    object _26653 = NOVALUE;
    object _26652 = NOVALUE;
    object _26650 = NOVALUE;
    object _26648 = NOVALUE;
    object _26646 = NOVALUE;
    object _26645 = NOVALUE;
    object _26643 = NOVALUE;
    object _26642 = NOVALUE;
    object _26641 = NOVALUE;
    object _26640 = NOVALUE;
    object _26639 = NOVALUE;
    object _26638 = NOVALUE;
    object _26637 = NOVALUE;
    object _26636 = NOVALUE;
    object _26635 = NOVALUE;
    object _26634 = NOVALUE;
    object _26633 = NOVALUE;
    object _26632 = NOVALUE;
    object _26631 = NOVALUE;
    object _26630 = NOVALUE;
    object _26629 = NOVALUE;
    object _26628 = NOVALUE;
    object _26627 = NOVALUE;
    object _26624 = NOVALUE;
    object _26623 = NOVALUE;
    object _26621 = NOVALUE;
    object _26620 = NOVALUE;
    object _26619 = NOVALUE;
    object _26618 = NOVALUE;
    object _26617 = NOVALUE;
    object _26615 = NOVALUE;
    object _26613 = NOVALUE;
    object _26612 = NOVALUE;
    object _26611 = NOVALUE;
    object _26610 = NOVALUE;
    object _26609 = NOVALUE;
    object _26608 = NOVALUE;
    object _26607 = NOVALUE;
    object _26606 = NOVALUE;
    object _26605 = NOVALUE;
    object _26602 = NOVALUE;
    object _26601 = NOVALUE;
    object _26599 = NOVALUE;
    object _26598 = NOVALUE;
    object _26597 = NOVALUE;
    object _26596 = NOVALUE;
    object _26595 = NOVALUE;
    object _26592 = NOVALUE;
    object _26591 = NOVALUE;
    object _26590 = NOVALUE;
    object _26589 = NOVALUE;
    object _26588 = NOVALUE;
    object _26587 = NOVALUE;
    object _26586 = NOVALUE;
    object _26581 = NOVALUE;
    object _26580 = NOVALUE;
    object _26579 = NOVALUE;
    object _26577 = NOVALUE;
    object _26576 = NOVALUE;
    object _26574 = NOVALUE;
    object _26573 = NOVALUE;
    object _26568 = NOVALUE;
    object _26567 = NOVALUE;
    object _26566 = NOVALUE;
    object _26565 = NOVALUE;
    object _26564 = NOVALUE;
    object _26558 = NOVALUE;
    object _26557 = NOVALUE;
    object _26555 = NOVALUE;
    object _26554 = NOVALUE;
    object _26553 = NOVALUE;
    object _26552 = NOVALUE;
    object _26551 = NOVALUE;
    object _26550 = NOVALUE;
    object _26549 = NOVALUE;
    object _26548 = NOVALUE;
    object _26547 = NOVALUE;
    object _26546 = NOVALUE;
    object _26545 = NOVALUE;
    object _26543 = NOVALUE;
    object _26542 = NOVALUE;
    object _26541 = NOVALUE;
    object _26540 = NOVALUE;
    object _26539 = NOVALUE;
    object _26538 = NOVALUE;
    object _26537 = NOVALUE;
    object _26536 = NOVALUE;
    object _26535 = NOVALUE;
    object _26534 = NOVALUE;
    object _26533 = NOVALUE;
    object _26532 = NOVALUE;
    object _26531 = NOVALUE;
    object _26530 = NOVALUE;
    object _26528 = NOVALUE;
    object _26527 = NOVALUE;
    object _26526 = NOVALUE;
    object _26525 = NOVALUE;
    object _26522 = NOVALUE;
    object _26521 = NOVALUE;
    object _26520 = NOVALUE;
    object _26519 = NOVALUE;
    object _26517 = NOVALUE;
    object _26516 = NOVALUE;
    object _26515 = NOVALUE;
    object _26514 = NOVALUE;
    object _26512 = NOVALUE;
    object _26511 = NOVALUE;
    object _26510 = NOVALUE;
    object _26509 = NOVALUE;
    object _26508 = NOVALUE;
    object _26507 = NOVALUE;
    object _26506 = NOVALUE;
    object _26505 = NOVALUE;
    object _26504 = NOVALUE;
    object _26503 = NOVALUE;
    object _26502 = NOVALUE;
    object _26501 = NOVALUE;
    object _26500 = NOVALUE;
    object _26499 = NOVALUE;
    object _26497 = NOVALUE;
    object _26496 = NOVALUE;
    object _26495 = NOVALUE;
    object _26494 = NOVALUE;
    object _26493 = NOVALUE;
    object _26491 = NOVALUE;
    object _26490 = NOVALUE;
    object _26489 = NOVALUE;
    object _26488 = NOVALUE;
    object _26487 = NOVALUE;
    object _26483 = NOVALUE;
    object _26482 = NOVALUE;
    object _26481 = NOVALUE;
    object _26480 = NOVALUE;
    object _26479 = NOVALUE;
    object _26477 = NOVALUE;
    object _26476 = NOVALUE;
    object _26475 = NOVALUE;
    object _26474 = NOVALUE;
    object _26473 = NOVALUE;
    object _26472 = NOVALUE;
    object _26471 = NOVALUE;
    object _26470 = NOVALUE;
    object _26469 = NOVALUE;
    object _26468 = NOVALUE;
    object _26467 = NOVALUE;
    object _26466 = NOVALUE;
    object _26465 = NOVALUE;
    object _26464 = NOVALUE;
    object _26463 = NOVALUE;
    object _26462 = NOVALUE;
    object _26461 = NOVALUE;
    object _26460 = NOVALUE;
    object _26458 = NOVALUE;
    object _26457 = NOVALUE;
    object _26456 = NOVALUE;
    object _26455 = NOVALUE;
    object _26454 = NOVALUE;
    object _26453 = NOVALUE;
    object _26452 = NOVALUE;
    object _26451 = NOVALUE;
    object _26450 = NOVALUE;
    object _26448 = NOVALUE;
    object _26447 = NOVALUE;
    object _26446 = NOVALUE;
    object _26444 = NOVALUE;
    object _26443 = NOVALUE;
    object _26441 = NOVALUE;
    object _26439 = NOVALUE;
    object _26438 = NOVALUE;
    object _26437 = NOVALUE;
    object _26436 = NOVALUE;
    object _26435 = NOVALUE;
    object _26434 = NOVALUE;
    object _26430 = NOVALUE;
    object _26429 = NOVALUE;
    object _26428 = NOVALUE;
    object _26426 = NOVALUE;
    object _26425 = NOVALUE;
    object _26424 = NOVALUE;
    object _26423 = NOVALUE;
    object _26422 = NOVALUE;
    object _26421 = NOVALUE;
    object _26420 = NOVALUE;
    object _26419 = NOVALUE;
    object _26418 = NOVALUE;
    object _26417 = NOVALUE;
    object _26416 = NOVALUE;
    object _26415 = NOVALUE;
    object _26414 = NOVALUE;
    object _26413 = NOVALUE;
    object _26412 = NOVALUE;
    object _26407 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_op_51310)) {
        _1 = (object)(DBL_PTR(_op_51310)->dbl);
        DeRefDS(_op_51310);
        _op_51310 = _1;
    }

    /** emit.e:717		integer ib, ic, n*/

    /** emit.e:718		object obj*/

    /** emit.e:719		sequence elements*/

    /** emit.e:720		object element_vals*/

    /** emit.e:722		check_for_temps()*/
    _49check_for_temps();

    /** emit.e:723		integer last_pc_backup = last_pc*/
    _last_pc_backup_51327 = _49last_pc_51270;

    /** emit.e:724		integer last_op_backup = last_op*/
    _last_op_backup_51328 = _49last_op_51269;

    /** emit.e:726		last_op = op*/
    _49last_op_51269 = _op_51310;

    /** emit.e:727		last_pc = length(Code) + 1*/
    if (IS_SEQUENCE(_39Code_16903)){
            _26407 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _26407 = 1;
    }
    _49last_pc_51270 = _26407 + 1;
    _26407 = NOVALUE;

    /** emit.e:729		switch op label "EMIT" do*/
    _0 = _op_51310;
    switch ( _0 ){ 

        /** emit.e:730		case ASSIGN then*/
        case 18:

        /** emit.e:731			sequence temp = {}*/
        RefDS(_21928);
        DeRef(_temp_51337);
        _temp_51337 = _21928;

        /** emit.e:732			if not TRANSLATE and*/
        _26412 = (_39TRANSLATE_16440 == 0);
        if (_26412 == 0) {
            goto L1; // [70] 202
        }
        _26414 = (_39previous_op_16913 == 92);
        if (_26414 != 0) {
            DeRef(_26415);
            _26415 = 1;
            goto L2; // [82] 98
        }
        _26416 = (_39previous_op_16913 == 25);
        _26415 = (_26416 != 0);
L2: 
        if (_26415 == 0)
        {
            _26415 = NOVALUE;
            goto L1; // [99] 202
        }
        else{
            _26415 = NOVALUE;
        }

        /** emit.e:736				while Code[$-1] = DEREF_TEMP and find( Code[$], derefs ) do*/
L3: 
        if (IS_SEQUENCE(_39Code_16903)){
                _26417 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26417 = 1;
        }
        _26418 = _26417 - 1;
        _26417 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26419 = (object)*(((s1_ptr)_2)->base + _26418);
        if (IS_ATOM_INT(_26419)) {
            _26420 = (_26419 == 208);
        }
        else {
            _26420 = binary_op(EQUALS, _26419, 208);
        }
        _26419 = NOVALUE;
        if (IS_ATOM_INT(_26420)) {
            if (_26420 == 0) {
                goto L4; // [126] 201
            }
        }
        else {
            if (DBL_PTR(_26420)->dbl == 0.0) {
                goto L4; // [126] 201
            }
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _26422 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26422 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26423 = (object)*(((s1_ptr)_2)->base + _26422);
        _26424 = find_from(_26423, _49derefs_50891, 1);
        _26423 = NOVALUE;
        if (_26424 == 0)
        {
            _26424 = NOVALUE;
            goto L4; // [147] 201
        }
        else{
            _26424 = NOVALUE;
        }

        /** emit.e:739					temp &= Code[$]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26425 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26425 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26426 = (object)*(((s1_ptr)_2)->base + _26425);
        if (IS_SEQUENCE(_temp_51337) && IS_ATOM(_26426)) {
            Ref(_26426);
            Append(&_temp_51337, _temp_51337, _26426);
        }
        else if (IS_ATOM(_temp_51337) && IS_SEQUENCE(_26426)) {
        }
        else {
            Concat((object_ptr)&_temp_51337, _temp_51337, _26426);
        }
        _26426 = NOVALUE;

        /** emit.e:740					Code = remove( Code, length(Code)-1, length(Code) )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26428 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26428 = 1;
        }
        _26429 = _26428 - 1;
        _26428 = NOVALUE;
        if (IS_SEQUENCE(_39Code_16903)){
                _26430 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26430 = 1;
        }
        {
            s1_ptr assign_space = SEQ_PTR(_39Code_16903);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26429)) ? _26429 : (object)(DBL_PTR(_26429)->dbl);
            int stop = (IS_ATOM_INT(_26430)) ? _26430 : (object)(DBL_PTR(_26430)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_39Code_16903), start, &_39Code_16903 );
                }
                else Tail(SEQ_PTR(_39Code_16903), stop+1, &_39Code_16903);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_39Code_16903), start, &_39Code_16903);
            }
            else {
                assign_slice_seq = &assign_space;
                _39Code_16903 = Remove_elements(start, stop, (SEQ_PTR(_39Code_16903)->ref == 1));
            }
        }
        _26429 = NOVALUE;
        _26430 = NOVALUE;

        /** emit.e:741					emit_temp( temp, NEW_REFERENCE )*/
        RefDS(_temp_51337);
        _49emit_temp(_temp_51337, 1);

        /** emit.e:742				end while*/
        goto L3; // [198] 107
L4: 
L1: 

        /** emit.e:746			source = Pop()*/
        _source_51316 = _49Pop();
        if (!IS_ATOM_INT(_source_51316)) {
            _1 = (object)(DBL_PTR(_source_51316)->dbl);
            DeRefDS(_source_51316);
            _source_51316 = _1;
        }

        /** emit.e:747			target = Pop()*/
        _target_51317 = _49Pop();
        if (!IS_ATOM_INT(_target_51317)) {
            _1 = (object)(DBL_PTR(_target_51317)->dbl);
            DeRefDS(_target_51317);
            _target_51317 = _1;
        }

        /** emit.e:748			if assignable then*/
        if (_49assignable_50390 == 0)
        {
            goto L5; // [220] 601
        }
        else{
        }

        /** emit.e:750				if inlined then*/
        if (_49inlined_51288 == 0)
        {
            goto L6; // [227] 326
        }
        else{
        }

        /** emit.e:751					inlined = 0*/
        _49inlined_51288 = 0;

        /** emit.e:752					if length( inlined_targets ) then*/
        if (IS_SEQUENCE(_49inlined_targets_51296)){
                _26434 = SEQ_PTR(_49inlined_targets_51296)->length;
        }
        else {
            _26434 = 1;
        }
        if (_26434 == 0)
        {
            _26434 = NOVALUE;
            goto L7; // [242] 295
        }
        else{
            _26434 = NOVALUE;
        }

        /** emit.e:753						for i = 1 to length( inlined_targets ) do*/
        if (IS_SEQUENCE(_49inlined_targets_51296)){
                _26435 = SEQ_PTR(_49inlined_targets_51296)->length;
        }
        else {
            _26435 = 1;
        }
        {
            object _i_51380;
            _i_51380 = 1;
L8: 
            if (_i_51380 > _26435){
                goto L9; // [252] 280
            }

            /** emit.e:754							Code[inlined_targets[i]] = target*/
            _2 = (object)SEQ_PTR(_49inlined_targets_51296);
            _26436 = (object)*(((s1_ptr)_2)->base + _i_51380);
            _2 = (object)SEQ_PTR(_39Code_16903);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _39Code_16903 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _26436);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _target_51317;
            DeRef(_1);

            /** emit.e:755						end for*/
            _i_51380 = _i_51380 + 1;
            goto L8; // [275] 259
L9: 
            ;
        }

        /** emit.e:756						clear_inline_targets()*/

        /** emit.e:700		inlined_targets = {}*/
        RefDS(_21928);
        DeRefi(_49inlined_targets_51296);
        _49inlined_targets_51296 = _21928;

        /** emit.e:701	end procedure*/
        goto LA; // [291] 294
LA: 
L7: 

        /** emit.e:759					assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:760					clear_last()*/

        /** emit.e:678		last_op = 0*/
        _49last_op_51269 = 0;

        /** emit.e:679		last_pc = 0*/
        _49last_pc_51270 = 0;

        /** emit.e:680	end procedure*/
        goto LB; // [316] 319
LB: 

        /** emit.e:761					break "EMIT"*/
        DeRef(_temp_51337);
        _temp_51337 = NOVALUE;
        goto LC; // [323] 7737
L6: 

        /** emit.e:764				clear_temp( Code[$] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26437 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26437 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26438 = (object)*(((s1_ptr)_2)->base + _26437);
        Ref(_26438);
        _49clear_temp(_26438);
        _26438 = NOVALUE;

        /** emit.e:765				Code = remove( Code, length( Code ) ) -- drop previous target*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26439 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26439 = 1;
        }
        {
            s1_ptr assign_space = SEQ_PTR(_39Code_16903);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_26439)) ? _26439 : (object)(DBL_PTR(_26439)->dbl);
            int stop = (IS_ATOM_INT(_26439)) ? _26439 : (object)(DBL_PTR(_26439)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_39Code_16903), start, &_39Code_16903 );
                }
                else Tail(SEQ_PTR(_39Code_16903), stop+1, &_39Code_16903);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_39Code_16903), start, &_39Code_16903);
            }
            else {
                assign_slice_seq = &assign_space;
                _39Code_16903 = Remove_elements(start, stop, (SEQ_PTR(_39Code_16903)->ref == 1));
            }
        }
        _26439 = NOVALUE;
        _26439 = NOVALUE;

        /** emit.e:766				op = previous_op -- keep same previous op*/
        _op_51310 = _39previous_op_16913;

        /** emit.e:767				if IsInteger(target) then*/
        _26441 = _49IsInteger(_target_51317);
        if (_26441 == 0) {
            DeRef(_26441);
            _26441 = NOVALUE;
            goto LD; // [372] 588
        }
        else {
            if (!IS_ATOM_INT(_26441) && DBL_PTR(_26441)->dbl == 0.0){
                DeRef(_26441);
                _26441 = NOVALUE;
                goto LD; // [372] 588
            }
            DeRef(_26441);
            _26441 = NOVALUE;
        }
        DeRef(_26441);
        _26441 = NOVALUE;

        /** emit.e:768					if previous_op = RHS_SUBS then*/
        if (_39previous_op_16913 != 25)
        goto LE; // [381] 412

        /** emit.e:769						op = RHS_SUBS_I*/
        _op_51310 = 114;

        /** emit.e:770						backpatch(length(Code) - 2, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26443 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26443 = 1;
        }
        _26444 = _26443 - 2;
        _26443 = NOVALUE;
        _49backpatch(_26444, 114);
        _26444 = NOVALUE;
        goto LF; // [409] 587
LE: 

        /** emit.e:772					elsif previous_op = PLUS1 then*/
        if (_39previous_op_16913 != 93)
        goto L10; // [418] 449

        /** emit.e:773						op = PLUS1_I*/
        _op_51310 = 117;

        /** emit.e:774						backpatch(length(Code) - 2, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26446 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26446 = 1;
        }
        _26447 = _26446 - 2;
        _26446 = NOVALUE;
        _49backpatch(_26447, 117);
        _26447 = NOVALUE;
        goto LF; // [446] 587
L10: 

        /** emit.e:776					elsif previous_op = PLUS or previous_op = MINUS then*/
        _26448 = (_39previous_op_16913 == 11);
        if (_26448 != 0) {
            goto L11; // [459] 476
        }
        _26450 = (_39previous_op_16913 == 10);
        if (_26450 == 0)
        {
            DeRef(_26450);
            _26450 = NOVALUE;
            goto L12; // [472] 567
        }
        else{
            DeRef(_26450);
            _26450 = NOVALUE;
        }
L11: 

        /** emit.e:777						if IsInteger(Code[$]) and*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26451 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26451 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26452 = (object)*(((s1_ptr)_2)->base + _26451);
        Ref(_26452);
        _26453 = _49IsInteger(_26452);
        _26452 = NOVALUE;
        if (IS_ATOM_INT(_26453)) {
            if (_26453 == 0) {
                goto LF; // [491] 587
            }
        }
        else {
            if (DBL_PTR(_26453)->dbl == 0.0) {
                goto LF; // [491] 587
            }
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _26455 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26455 = 1;
        }
        _26456 = _26455 - 1;
        _26455 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26457 = (object)*(((s1_ptr)_2)->base + _26456);
        Ref(_26457);
        _26458 = _49IsInteger(_26457);
        _26457 = NOVALUE;
        if (_26458 == 0) {
            DeRef(_26458);
            _26458 = NOVALUE;
            goto LF; // [513] 587
        }
        else {
            if (!IS_ATOM_INT(_26458) && DBL_PTR(_26458)->dbl == 0.0){
                DeRef(_26458);
                _26458 = NOVALUE;
                goto LF; // [513] 587
            }
            DeRef(_26458);
            _26458 = NOVALUE;
        }
        DeRef(_26458);
        _26458 = NOVALUE;

        /** emit.e:779							if previous_op = PLUS then*/
        if (_39previous_op_16913 != 11)
        goto L13; // [522] 538

        /** emit.e:780								op = PLUS_I*/
        _op_51310 = 115;
        goto L14; // [535] 548
L13: 

        /** emit.e:782								op = MINUS_I*/
        _op_51310 = 116;
L14: 

        /** emit.e:784							backpatch(length(Code) - 2, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26460 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26460 = 1;
        }
        _26461 = _26460 - 2;
        _26460 = NOVALUE;
        _49backpatch(_26461, _op_51310);
        _26461 = NOVALUE;
        goto LF; // [564] 587
L12: 

        /** emit.e:790						if IsInteger(source) then*/
        _26462 = _49IsInteger(_source_51316);
        if (_26462 == 0) {
            DeRef(_26462);
            _26462 = NOVALUE;
            goto L15; // [573] 586
        }
        else {
            if (!IS_ATOM_INT(_26462) && DBL_PTR(_26462)->dbl == 0.0){
                DeRef(_26462);
                _26462 = NOVALUE;
                goto L15; // [573] 586
            }
            DeRef(_26462);
            _26462 = NOVALUE;
        }
        DeRef(_26462);
        _26462 = NOVALUE;

        /** emit.e:791							op = ASSIGN_I -- fake to avoid subsequent check*/
        _op_51310 = 113;
L15: 
LF: 
LD: 

        /** emit.e:795				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:796				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto L16; // [598] 743
L5: 

        /** emit.e:798				if IsInteger(source) and IsInteger(target) then*/
        _26463 = _49IsInteger(_source_51316);
        if (IS_ATOM_INT(_26463)) {
            if (_26463 == 0) {
                goto L17; // [607] 629
            }
        }
        else {
            if (DBL_PTR(_26463)->dbl == 0.0) {
                goto L17; // [607] 629
            }
        }
        _26465 = _49IsInteger(_target_51317);
        if (_26465 == 0) {
            DeRef(_26465);
            _26465 = NOVALUE;
            goto L17; // [616] 629
        }
        else {
            if (!IS_ATOM_INT(_26465) && DBL_PTR(_26465)->dbl == 0.0){
                DeRef(_26465);
                _26465 = NOVALUE;
                goto L17; // [616] 629
            }
            DeRef(_26465);
            _26465 = NOVALUE;
        }
        DeRef(_26465);
        _26465 = NOVALUE;

        /** emit.e:799					op = ASSIGN_I*/
        _op_51310 = 113;
L17: 

        /** emit.e:801				if source > 0 and target > 0 and*/
        _26466 = (_source_51316 > 0);
        if (_26466 == 0) {
            _26467 = 0;
            goto L18; // [635] 647
        }
        _26468 = (_target_51317 > 0);
        _26467 = (_26468 != 0);
L18: 
        if (_26467 == 0) {
            _26469 = 0;
            goto L19; // [647] 673
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26470 = (object)*(((s1_ptr)_2)->base + _source_51316);
        _2 = (object)SEQ_PTR(_26470);
        _26471 = (object)*(((s1_ptr)_2)->base + 3);
        _26470 = NOVALUE;
        if (IS_ATOM_INT(_26471)) {
            _26472 = (_26471 == 2);
        }
        else {
            _26472 = binary_op(EQUALS, _26471, 2);
        }
        _26471 = NOVALUE;
        if (IS_ATOM_INT(_26472))
        _26469 = (_26472 != 0);
        else
        _26469 = DBL_PTR(_26472)->dbl != 0.0;
L19: 
        if (_26469 == 0) {
            goto L1A; // [673] 727
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26474 = (object)*(((s1_ptr)_2)->base + _target_51317);
        _2 = (object)SEQ_PTR(_26474);
        _26475 = (object)*(((s1_ptr)_2)->base + 3);
        _26474 = NOVALUE;
        if (IS_ATOM_INT(_26475)) {
            _26476 = (_26475 == 2);
        }
        else {
            _26476 = binary_op(EQUALS, _26475, 2);
        }
        _26475 = NOVALUE;
        if (_26476 == 0) {
            DeRef(_26476);
            _26476 = NOVALUE;
            goto L1A; // [696] 727
        }
        else {
            if (!IS_ATOM_INT(_26476) && DBL_PTR(_26476)->dbl == 0.0){
                DeRef(_26476);
                _26476 = NOVALUE;
                goto L1A; // [696] 727
            }
            DeRef(_26476);
            _26476 = NOVALUE;
        }
        DeRef(_26476);
        _26476 = NOVALUE;

        /** emit.e:806					SymTab[target][S_OBJ] = SymTab[source][S_OBJ]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_target_51317 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26479 = (object)*(((s1_ptr)_2)->base + _source_51316);
        _2 = (object)SEQ_PTR(_26479);
        _26480 = (object)*(((s1_ptr)_2)->base + 1);
        _26479 = NOVALUE;
        Ref(_26480);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 1);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _26480;
        if( _1 != _26480 ){
            DeRef(_1);
        }
        _26480 = NOVALUE;
        _26477 = NOVALUE;
L1A: 

        /** emit.e:809				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:810				emit_addr(source)*/
        _49emit_addr(_source_51316);

        /** emit.e:811				last_op = op*/
        _49last_op_51269 = _op_51310;
L16: 

        /** emit.e:814			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:815			emit_addr(target)*/
        _49emit_addr(_target_51317);

        /** emit.e:817			if length(temp) then*/
        if (IS_SEQUENCE(_temp_51337)){
                _26481 = SEQ_PTR(_temp_51337)->length;
        }
        else {
            _26481 = 1;
        }
        if (_26481 == 0)
        {
            _26481 = NOVALUE;
            goto L1B; // [760] 792
        }
        else{
            _26481 = NOVALUE;
        }

        /** emit.e:819				for i = 1 to length( temp ) do*/
        if (IS_SEQUENCE(_temp_51337)){
                _26482 = SEQ_PTR(_temp_51337)->length;
        }
        else {
            _26482 = 1;
        }
        {
            object _i_51483;
            _i_51483 = 1;
L1C: 
            if (_i_51483 > _26482){
                goto L1D; // [768] 791
            }

            /** emit.e:820					flush_temp( temp[i] )*/
            _2 = (object)SEQ_PTR(_temp_51337);
            _26483 = (object)*(((s1_ptr)_2)->base + _i_51483);
            Ref(_26483);
            _49flush_temp(_26483);
            _26483 = NOVALUE;

            /** emit.e:821				end for*/
            _i_51483 = _i_51483 + 1;
            goto L1C; // [786] 775
L1D: 
            ;
        }
L1B: 
        DeRef(_temp_51337);
        _temp_51337 = NOVALUE;
        goto LC; // [794] 7737

        /** emit.e:824		case RHS_SUBS then*/
        case 25:

        /** emit.e:825			b = Pop() -- subscript*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:826			c = Pop() -- sequence*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:827			target = NewTempSym() -- target*/
        _target_51317 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_target_51317)) {
            _1 = (object)(DBL_PTR(_target_51317)->dbl);
            DeRefDS(_target_51317);
            _target_51317 = _1;
        }

        /** emit.e:828			if c < 0 or length(SymTab[c]) < S_VTYPE or SymTab[c][S_VTYPE] < 0 then -- forward reference*/
        _26487 = (_c_51314 < 0);
        if (_26487 != 0) {
            _26488 = 1;
            goto L1E; // [828] 851
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26489 = (object)*(((s1_ptr)_2)->base + _c_51314);
        if (IS_SEQUENCE(_26489)){
                _26490 = SEQ_PTR(_26489)->length;
        }
        else {
            _26490 = 1;
        }
        _26489 = NOVALUE;
        _26491 = (_26490 < 15);
        _26490 = NOVALUE;
        _26488 = (_26491 != 0);
L1E: 
        if (_26488 != 0) {
            goto L1F; // [851] 876
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26493 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26493);
        _26494 = (object)*(((s1_ptr)_2)->base + 15);
        _26493 = NOVALUE;
        if (IS_ATOM_INT(_26494)) {
            _26495 = (_26494 < 0);
        }
        else {
            _26495 = binary_op(LESS, _26494, 0);
        }
        _26494 = NOVALUE;
        if (_26495 == 0) {
            DeRef(_26495);
            _26495 = NOVALUE;
            goto L20; // [872] 888
        }
        else {
            if (!IS_ATOM_INT(_26495) && DBL_PTR(_26495)->dbl == 0.0){
                DeRef(_26495);
                _26495 = NOVALUE;
                goto L20; // [872] 888
            }
            DeRef(_26495);
            _26495 = NOVALUE;
        }
        DeRef(_26495);
        _26495 = NOVALUE;
L1F: 

        /** emit.e:830				op = RHS_SUBS_CHECK*/
        _op_51310 = 92;
        goto L21; // [885] 1049
L20: 

        /** emit.e:831			elsif SymTab[c][S_MODE] = M_NORMAL then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26496 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26496);
        _26497 = (object)*(((s1_ptr)_2)->base + 3);
        _26496 = NOVALUE;
        if (binary_op_a(NOTEQ, _26497, 1)){
            _26497 = NOVALUE;
            goto L22; // [904] 991
        }
        _26497 = NOVALUE;

        /** emit.e:832				if SymTab[c][S_VTYPE] != sequence_type and*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26499 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26499);
        _26500 = (object)*(((s1_ptr)_2)->base + 15);
        _26499 = NOVALUE;
        if (IS_ATOM_INT(_26500)) {
            _26501 = (_26500 != _56sequence_type_46262);
        }
        else {
            _26501 = binary_op(NOTEQ, _26500, _56sequence_type_46262);
        }
        _26500 = NOVALUE;
        if (IS_ATOM_INT(_26501)) {
            if (_26501 == 0) {
                goto L21; // [928] 1049
            }
        }
        else {
            if (DBL_PTR(_26501)->dbl == 0.0) {
                goto L21; // [928] 1049
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26503 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26503);
        _26504 = (object)*(((s1_ptr)_2)->base + 15);
        _26503 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_26504)){
            _26505 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26504)->dbl));
        }
        else{
            _26505 = (object)*(((s1_ptr)_2)->base + _26504);
        }
        _2 = (object)SEQ_PTR(_26505);
        _26506 = (object)*(((s1_ptr)_2)->base + 2);
        _26505 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_26506)){
            _26507 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26506)->dbl));
        }
        else{
            _26507 = (object)*(((s1_ptr)_2)->base + _26506);
        }
        _2 = (object)SEQ_PTR(_26507);
        _26508 = (object)*(((s1_ptr)_2)->base + 15);
        _26507 = NOVALUE;
        if (IS_ATOM_INT(_26508)) {
            _26509 = (_26508 != _56sequence_type_46262);
        }
        else {
            _26509 = binary_op(NOTEQ, _26508, _56sequence_type_46262);
        }
        _26508 = NOVALUE;
        if (_26509 == 0) {
            DeRef(_26509);
            _26509 = NOVALUE;
            goto L21; // [975] 1049
        }
        else {
            if (!IS_ATOM_INT(_26509) && DBL_PTR(_26509)->dbl == 0.0){
                DeRef(_26509);
                _26509 = NOVALUE;
                goto L21; // [975] 1049
            }
            DeRef(_26509);
            _26509 = NOVALUE;
        }
        DeRef(_26509);
        _26509 = NOVALUE;

        /** emit.e:835					op = RHS_SUBS_CHECK*/
        _op_51310 = 92;
        goto L21; // [988] 1049
L22: 

        /** emit.e:837			elsif SymTab[c][S_MODE] != M_CONSTANT or*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26510 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26510);
        _26511 = (object)*(((s1_ptr)_2)->base + 3);
        _26510 = NOVALUE;
        if (IS_ATOM_INT(_26511)) {
            _26512 = (_26511 != 2);
        }
        else {
            _26512 = binary_op(NOTEQ, _26511, 2);
        }
        _26511 = NOVALUE;
        if (IS_ATOM_INT(_26512)) {
            if (_26512 != 0) {
                goto L23; // [1011] 1038
            }
        }
        else {
            if (DBL_PTR(_26512)->dbl != 0.0) {
                goto L23; // [1011] 1038
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26514 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26514);
        _26515 = (object)*(((s1_ptr)_2)->base + 1);
        _26514 = NOVALUE;
        _26516 = IS_SEQUENCE(_26515);
        _26515 = NOVALUE;
        _26517 = (_26516 == 0);
        _26516 = NOVALUE;
        if (_26517 == 0)
        {
            DeRef(_26517);
            _26517 = NOVALUE;
            goto L24; // [1034] 1048
        }
        else{
            DeRef(_26517);
            _26517 = NOVALUE;
        }
L23: 

        /** emit.e:839				op = RHS_SUBS_CHECK*/
        _op_51310 = 92;
L24: 
L21: 

        /** emit.e:841			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:842			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:843			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:844			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:845			Push(target)*/
        _49Push(_target_51317);

        /** emit.e:846			emit_addr(target)*/
        _49emit_addr(_target_51317);

        /** emit.e:847			emit_temp(target, NEW_REFERENCE)*/
        _49emit_temp(_target_51317, 1);

        /** emit.e:848			current_sequence = append(current_sequence, target)*/
        Append(&_49current_sequence_50380, _49current_sequence_50380, _target_51317);

        /** emit.e:849			flush_temp( Code[$-2] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26519 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26519 = 1;
        }
        _26520 = _26519 - 2;
        _26519 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26521 = (object)*(((s1_ptr)_2)->base + _26520);
        Ref(_26521);
        _49flush_temp(_26521);
        _26521 = NOVALUE;
        goto LC; // [1113] 7737

        /** emit.e:851		case PROC then -- procedure, function and type calls*/
        case 27:

        /** emit.e:853			assignable = FALSE -- assume for now*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:854			subsym = op_info1*/
        _subsym_51318 = _49op_info1_50372;

        /** emit.e:855			n = SymTab[subsym][S_NUM_ARGS]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26522 = (object)*(((s1_ptr)_2)->base + _subsym_51318);
        _2 = (object)SEQ_PTR(_26522);
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
            _n_51323 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        }
        else{
            _n_51323 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        }
        if (!IS_ATOM_INT(_n_51323)){
            _n_51323 = (object)DBL_PTR(_n_51323)->dbl;
        }
        _26522 = NOVALUE;

        /** emit.e:857			if subsym = CurrentSub then*/
        if (_subsym_51318 != _39CurrentSub_16823)
        goto L25; // [1155] 1340

        /** emit.e:860				for i = cgi-n+1 to cgi do*/
        _26525 = _49cgi_50388 - _n_51323;
        if ((object)((uintptr_t)_26525 +(uintptr_t) HIGH_BITS) >= 0){
            _26525 = NewDouble((eudouble)_26525);
        }
        if (IS_ATOM_INT(_26525)) {
            _26526 = _26525 + 1;
            if (_26526 > MAXINT){
                _26526 = NewDouble((eudouble)_26526);
            }
        }
        else
        _26526 = binary_op(PLUS, 1, _26525);
        DeRef(_26525);
        _26525 = NOVALUE;
        _26527 = _49cgi_50388;
        {
            object _i_51569;
            Ref(_26526);
            _i_51569 = _26526;
L26: 
            if (binary_op_a(GREATER, _i_51569, _26527)){
                goto L27; // [1176] 1339
            }

            /** emit.e:861					if cg_stack[i] > 0 then -- if it's a forward reference, it's not a private*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26528 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26528 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            if (binary_op_a(LESSEQ, _26528, 0)){
                _26528 = NOVALUE;
                goto L28; // [1191] 1332
            }
            _26528 = NOVALUE;

            /** emit.e:862						if SymTab[cg_stack[i]][S_SCOPE] = SC_PRIVATE and*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26530 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26530 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!IS_ATOM_INT(_26530)){
                _26531 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26530)->dbl));
            }
            else{
                _26531 = (object)*(((s1_ptr)_2)->base + _26530);
            }
            _2 = (object)SEQ_PTR(_26531);
            _26532 = (object)*(((s1_ptr)_2)->base + 4);
            _26531 = NOVALUE;
            if (IS_ATOM_INT(_26532)) {
                _26533 = (_26532 == 3);
            }
            else {
                _26533 = binary_op(EQUALS, _26532, 3);
            }
            _26532 = NOVALUE;
            if (IS_ATOM_INT(_26533)) {
                if (_26533 == 0) {
                    goto L29; // [1221] 1299
                }
            }
            else {
                if (DBL_PTR(_26533)->dbl == 0.0) {
                    goto L29; // [1221] 1299
                }
            }
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26535 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26535 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            _2 = (object)SEQ_PTR(_36SymTab_15404);
            if (!IS_ATOM_INT(_26535)){
                _26536 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26535)->dbl));
            }
            else{
                _26536 = (object)*(((s1_ptr)_2)->base + _26535);
            }
            _2 = (object)SEQ_PTR(_26536);
            _26537 = (object)*(((s1_ptr)_2)->base + 16);
            _26536 = NOVALUE;
            if (IS_ATOM_INT(_26537) && IS_ATOM_INT(_i_51569)) {
                _26538 = (_26537 < _i_51569);
            }
            else {
                _26538 = binary_op(LESS, _26537, _i_51569);
            }
            _26537 = NOVALUE;
            if (_26538 == 0) {
                DeRef(_26538);
                _26538 = NOVALUE;
                goto L29; // [1248] 1299
            }
            else {
                if (!IS_ATOM_INT(_26538) && DBL_PTR(_26538)->dbl == 0.0){
                    DeRef(_26538);
                    _26538 = NOVALUE;
                    goto L29; // [1248] 1299
                }
                DeRef(_26538);
                _26538 = NOVALUE;
            }
            DeRef(_26538);
            _26538 = NOVALUE;

            /** emit.e:865							emit_opcode(ASSIGN)*/
            _49emit_opcode(18);

            /** emit.e:866							emit_addr(cg_stack[i])*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26539 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26539 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            Ref(_26539);
            _49emit_addr(_26539);
            _26539 = NOVALUE;

            /** emit.e:867							cg_stack[i] = NewTempSym()*/
            _26540 = _56NewTempSym(0);
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569))
            _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            else
            _2 = (object)(((s1_ptr)_2)->base + _i_51569);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _26540;
            if( _1 != _26540 ){
                DeRef(_1);
            }
            _26540 = NOVALUE;

            /** emit.e:868							emit_addr(cg_stack[i])*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26541 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26541 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            Ref(_26541);
            _49emit_addr(_26541);
            _26541 = NOVALUE;

            /** emit.e:869							check_for_temps()*/
            _49check_for_temps();
            goto L2A; // [1296] 1331
L29: 

            /** emit.e:870						elsif sym_mode( cg_stack[i] ) = M_TEMP then*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26542 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26542 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            Ref(_26542);
            _26543 = _56sym_mode(_26542);
            _26542 = NOVALUE;
            if (binary_op_a(NOTEQ, _26543, 3)){
                DeRef(_26543);
                _26543 = NOVALUE;
                goto L2B; // [1313] 1330
            }
            DeRef(_26543);
            _26543 = NOVALUE;

            /** emit.e:871							emit_temp( cg_stack[i], NEW_REFERENCE )*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51569)){
                _26545 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51569)->dbl));
            }
            else{
                _26545 = (object)*(((s1_ptr)_2)->base + _i_51569);
            }
            Ref(_26545);
            _49emit_temp(_26545, 1);
            _26545 = NOVALUE;
L2B: 
L2A: 
L28: 

            /** emit.e:874				end for*/
            _0 = _i_51569;
            if (IS_ATOM_INT(_i_51569)) {
                _i_51569 = _i_51569 + 1;
                if ((object)((uintptr_t)_i_51569 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51569 = NewDouble((eudouble)_i_51569);
                }
            }
            else {
                _i_51569 = binary_op_a(PLUS, _i_51569, 1);
            }
            DeRef(_0);
            goto L26; // [1334] 1183
L27: 
            ;
            DeRef(_i_51569);
        }
L25: 

        /** emit.e:877			if SymTab[subsym][S_DEPRECATED] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26546 = (object)*(((s1_ptr)_2)->base + _subsym_51318);
        _2 = (object)SEQ_PTR(_26546);
        _26547 = (object)*(((s1_ptr)_2)->base + 30);
        _26546 = NOVALUE;
        if (_26547 == 0) {
            _26547 = NOVALUE;
            goto L2C; // [1354] 1383
        }
        else {
            if (!IS_ATOM_INT(_26547) && DBL_PTR(_26547)->dbl == 0.0){
                _26547 = NOVALUE;
                goto L2C; // [1354] 1383
            }
            _26547 = NOVALUE;
        }
        _26547 = NOVALUE;

        /** emit.e:878				Warning(327, deprecated_warning_flag, { SymTab[subsym][S_NAME] })*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26548 = (object)*(((s1_ptr)_2)->base + _subsym_51318);
        _2 = (object)SEQ_PTR(_26548);
        if (!IS_ATOM_INT(_39S_NAME_16470)){
            _26549 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
        }
        else{
            _26549 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
        }
        _26548 = NOVALUE;
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_26549);
        ((intptr_t*)_2)[1] = _26549;
        _26550 = MAKE_SEQ(_1);
        _26549 = NOVALUE;
        _52Warning(327, 16384, _26550);
        _26550 = NOVALUE;
L2C: 

        /** emit.e:881			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:882			emit_addr(subsym)*/
        _49emit_addr(_subsym_51318);

        /** emit.e:883			for i = cgi-n+1 to cgi do*/
        _26551 = _49cgi_50388 - _n_51323;
        if ((object)((uintptr_t)_26551 +(uintptr_t) HIGH_BITS) >= 0){
            _26551 = NewDouble((eudouble)_26551);
        }
        if (IS_ATOM_INT(_26551)) {
            _26552 = _26551 + 1;
            if (_26552 > MAXINT){
                _26552 = NewDouble((eudouble)_26552);
            }
        }
        else
        _26552 = binary_op(PLUS, 1, _26551);
        DeRef(_26551);
        _26551 = NOVALUE;
        _26553 = _49cgi_50388;
        {
            object _i_51616;
            Ref(_26552);
            _i_51616 = _26552;
L2D: 
            if (binary_op_a(GREATER, _i_51616, _26553)){
                goto L2E; // [1410] 1447
            }

            /** emit.e:884				emit_addr(cg_stack[i])*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51616)){
                _26554 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51616)->dbl));
            }
            else{
                _26554 = (object)*(((s1_ptr)_2)->base + _i_51616);
            }
            Ref(_26554);
            _49emit_addr(_26554);
            _26554 = NOVALUE;

            /** emit.e:885				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51616)){
                _26555 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51616)->dbl));
            }
            else{
                _26555 = (object)*(((s1_ptr)_2)->base + _i_51616);
            }
            Ref(_26555);
            _49emit_temp(_26555, 1);
            _26555 = NOVALUE;

            /** emit.e:886			end for*/
            _0 = _i_51616;
            if (IS_ATOM_INT(_i_51616)) {
                _i_51616 = _i_51616 + 1;
                if ((object)((uintptr_t)_i_51616 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51616 = NewDouble((eudouble)_i_51616);
                }
            }
            else {
                _i_51616 = binary_op_a(PLUS, _i_51616, 1);
            }
            DeRef(_0);
            goto L2D; // [1442] 1417
L2E: 
            ;
            DeRef(_i_51616);
        }

        /** emit.e:888			cgi -= n*/
        _49cgi_50388 = _49cgi_50388 - _n_51323;

        /** emit.e:890			if SymTab[subsym][S_TOKEN] != PROC then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26557 = (object)*(((s1_ptr)_2)->base + _subsym_51318);
        _2 = (object)SEQ_PTR(_26557);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _26558 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _26558 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _26557 = NOVALUE;
        if (binary_op_a(EQUALS, _26558, 27)){
            _26558 = NOVALUE;
            goto LC; // [1471] 7737
        }
        _26558 = NOVALUE;

        /** emit.e:891				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:892				c = NewTempSym() -- put final result in temp*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:893				emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);

        /** emit.e:894				Push(c)*/
        _49Push(_c_51314);

        /** emit.e:896				emit_addr(c)*/
        _49emit_addr(_c_51314);
        goto LC; // [1507] 7737

        /** emit.e:900		case PROC_FORWARD, FUNC_FORWARD then*/
        case 195:
        case 196:

        /** emit.e:901			assignable = FALSE -- assume for now*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:902			integer real_op*/

        /** emit.e:903			if op = PROC_FORWARD then*/
        if (_op_51310 != 195)
        goto L2F; // [1528] 1544

        /** emit.e:904				real_op = PROC*/
        _real_op_51637 = 27;
        goto L30; // [1541] 1554
L2F: 

        /** emit.e:906				real_op = FUNC*/
        _real_op_51637 = 501;
L30: 

        /** emit.e:908			integer ref*/

        /** emit.e:909			ref = new_forward_reference( real_op, op_info1, real_op )*/
        _ref_51644 = _41new_forward_reference(_real_op_51637, _49op_info1_50372, _real_op_51637);
        if (!IS_ATOM_INT(_ref_51644)) {
            _1 = (object)(DBL_PTR(_ref_51644)->dbl);
            DeRefDS(_ref_51644);
            _ref_51644 = _1;
        }

        /** emit.e:910			n = Pop() -- number of known args*/
        _n_51323 = _49Pop();
        if (!IS_ATOM_INT(_n_51323)) {
            _1 = (object)(DBL_PTR(_n_51323)->dbl);
            DeRefDS(_n_51323);
            _n_51323 = _1;
        }

        /** emit.e:912			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:913			emit_addr(ref)*/
        _49emit_addr(_ref_51644);

        /** emit.e:914			emit_addr( n ) -- this changes to be the "next" instruction*/
        _49emit_addr(_n_51323);

        /** emit.e:915			for i = cgi-n+1 to cgi do*/
        _26564 = _49cgi_50388 - _n_51323;
        if ((object)((uintptr_t)_26564 +(uintptr_t) HIGH_BITS) >= 0){
            _26564 = NewDouble((eudouble)_26564);
        }
        if (IS_ATOM_INT(_26564)) {
            _26565 = _26564 + 1;
            if (_26565 > MAXINT){
                _26565 = NewDouble((eudouble)_26565);
            }
        }
        else
        _26565 = binary_op(PLUS, 1, _26564);
        DeRef(_26564);
        _26564 = NOVALUE;
        _26566 = _49cgi_50388;
        {
            object _i_51649;
            Ref(_26565);
            _i_51649 = _26565;
L31: 
            if (binary_op_a(GREATER, _i_51649, _26566)){
                goto L32; // [1609] 1646
            }

            /** emit.e:916				emit_addr(cg_stack[i])*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51649)){
                _26567 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51649)->dbl));
            }
            else{
                _26567 = (object)*(((s1_ptr)_2)->base + _i_51649);
            }
            Ref(_26567);
            _49emit_addr(_26567);
            _26567 = NOVALUE;

            /** emit.e:917				emit_temp( cg_stack[i], NEW_REFERENCE )*/
            _2 = (object)SEQ_PTR(_49cg_stack_50387);
            if (!IS_ATOM_INT(_i_51649)){
                _26568 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_51649)->dbl));
            }
            else{
                _26568 = (object)*(((s1_ptr)_2)->base + _i_51649);
            }
            Ref(_26568);
            _49emit_temp(_26568, 1);
            _26568 = NOVALUE;

            /** emit.e:918			end for*/
            _0 = _i_51649;
            if (IS_ATOM_INT(_i_51649)) {
                _i_51649 = _i_51649 + 1;
                if ((object)((uintptr_t)_i_51649 +(uintptr_t) HIGH_BITS) >= 0){
                    _i_51649 = NewDouble((eudouble)_i_51649);
                }
            }
            else {
                _i_51649 = binary_op_a(PLUS, _i_51649, 1);
            }
            DeRef(_0);
            goto L31; // [1641] 1616
L32: 
            ;
            DeRef(_i_51649);
        }

        /** emit.e:919			cgi -= n*/
        _49cgi_50388 = _49cgi_50388 - _n_51323;

        /** emit.e:921			if op != PROC_FORWARD then*/
        if (_op_51310 == 195)
        goto L33; // [1658] 1694

        /** emit.e:922				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:923				c = NewTempSym() -- put final result in temp*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:924				Push(c)*/
        _49Push(_c_51314);

        /** emit.e:926				emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:927				emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);
L33: 
        goto LC; // [1696] 7737

        /** emit.e:930		case WARNING then*/
        case 506:

        /** emit.e:931			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:932		    a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:933			Warning(SymTab[a][S_OBJ], custom_warning_flag,"")*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26573 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26573);
        _26574 = (object)*(((s1_ptr)_2)->base + 1);
        _26573 = NOVALUE;
        Ref(_26574);
        RefDS(_21928);
        _52Warning(_26574, 64, _21928);
        _26574 = NOVALUE;
        goto LC; // [1737] 7737

        /** emit.e:935		case INCLUDE_PATHS then*/
        case 507:

        /** emit.e:936			sequence paths*/

        /** emit.e:938			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:939		    a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:940		    emit_opcode(RIGHT_BRACE_N)*/
        _49emit_opcode(31);

        /** emit.e:941		    paths = Include_paths(SymTab[a][S_OBJ])*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26576 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26576);
        _26577 = (object)*(((s1_ptr)_2)->base + 1);
        _26576 = NOVALUE;
        Ref(_26577);
        _0 = _paths_51674;
        _paths_51674 = _50Include_paths(_26577);
        DeRef(_0);
        _26577 = NOVALUE;

        /** emit.e:942		    emit(length(paths))*/
        if (IS_SEQUENCE(_paths_51674)){
                _26579 = SEQ_PTR(_paths_51674)->length;
        }
        else {
            _26579 = 1;
        }
        _49emit(_26579);
        _26579 = NOVALUE;

        /** emit.e:943		    for i=length(paths) to 1 by -1 do*/
        if (IS_SEQUENCE(_paths_51674)){
                _26580 = SEQ_PTR(_paths_51674)->length;
        }
        else {
            _26580 = 1;
        }
        {
            object _i_51686;
            _i_51686 = _26580;
L34: 
            if (_i_51686 < 1){
                goto L35; // [1799] 1830
            }

            /** emit.e:944		        c = NewStringSym(paths[i])*/
            _2 = (object)SEQ_PTR(_paths_51674);
            _26581 = (object)*(((s1_ptr)_2)->base + _i_51686);
            Ref(_26581);
            _c_51314 = _56NewStringSym(_26581);
            _26581 = NOVALUE;
            if (!IS_ATOM_INT(_c_51314)) {
                _1 = (object)(DBL_PTR(_c_51314)->dbl);
                DeRefDS(_c_51314);
                _c_51314 = _1;
            }

            /** emit.e:945		        emit_addr(c)*/
            _49emit_addr(_c_51314);

            /** emit.e:946		    end for*/
            _i_51686 = _i_51686 + -1;
            goto L34; // [1825] 1806
L35: 
            ;
        }

        /** emit.e:947		    b = NewTempSym()*/
        _b_51313 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:948			emit_temp(b, NEW_REFERENCE)*/
        _49emit_temp(_b_51313, 1);

        /** emit.e:949		    Push(b)*/
        _49Push(_b_51313);

        /** emit.e:950		    emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:951			last_op = RIGHT_BRACE_N*/
        _49last_op_51269 = 31;

        /** emit.e:952			op = last_op*/
        _op_51310 = 31;
        DeRef(_paths_51674);
        _paths_51674 = NOVALUE;
        goto LC; // [1872] 7737

        /** emit.e:955		case NOP1, NOP2, NOPWHILE, PRIVATE_INIT_CHECK, GLOBAL_INIT_CHECK,*/
        case 159:
        case 110:
        case 158:
        case 30:
        case 109:
        case 58:
        case 59:
        case 61:
        case 184:
        case 22:
        case 23:
        case 188:
        case 189:
        case 88:
        case 43:
        case 90:
        case 89:
        case 87:
        case 135:
        case 156:
        case 169:
        case 175:
        case 174:
        case 187:
        case 210:
        case 211:

        /** emit.e:961			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:962			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:963			if op = UPDATE_GLOBALS then*/
        if (_op_51310 != 89)
        goto LC; // [1944] 7737

        /** emit.e:964				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:965				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [1959] 7737

        /** emit.e:969		case IF, WHILE then*/
        case 20:
        case 47:

        /** emit.e:970			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:971			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:973			if previous_op >= LESS and previous_op <= NOT then*/
        _26586 = (_39previous_op_16913 >= 1);
        if (_26586 == 0) {
            goto L36; // [1991] 2283
        }
        _26588 = (_39previous_op_16913 <= 7);
        if (_26588 == 0)
        {
            DeRef(_26588);
            _26588 = NOVALUE;
            goto L36; // [2004] 2283
        }
        else{
            DeRef(_26588);
            _26588 = NOVALUE;
        }

        /** emit.e:974				clear_temp( Code[$] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26589 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26589 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26590 = (object)*(((s1_ptr)_2)->base + _26589);
        Ref(_26590);
        _49clear_temp(_26590);
        _26590 = NOVALUE;

        /** emit.e:975				Code = Code[1..$-1]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26591 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26591 = 1;
        }
        _26592 = _26591 - 1;
        _26591 = NOVALUE;
        rhs_slice_target = (object_ptr)&_39Code_16903;
        RHS_Slice(_39Code_16903, 1, _26592);

        /** emit.e:976				if previous_op = NOT then*/
        if (_39previous_op_16913 != 7)
        goto L37; // [2045] 2125

        /** emit.e:977					op = NOT_IFW*/
        _op_51310 = 108;

        /** emit.e:978					backpatch(length(Code) - 1, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26595 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26595 = 1;
        }
        _26596 = _26595 - 1;
        _26595 = NOVALUE;
        _49backpatch(_26596, 108);
        _26596 = NOVALUE;

        /** emit.e:979					sequence if_code = Code[$-1..$]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26597 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26597 = 1;
        }
        _26598 = _26597 - 1;
        _26597 = NOVALUE;
        if (IS_SEQUENCE(_39Code_16903)){
                _26599 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26599 = 1;
        }
        rhs_slice_target = (object_ptr)&_if_code_51754;
        RHS_Slice(_39Code_16903, _26598, _26599);

        /** emit.e:980					Code = Code[1..$-2]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26601 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26601 = 1;
        }
        _26602 = _26601 - 2;
        _26601 = NOVALUE;
        rhs_slice_target = (object_ptr)&_39Code_16903;
        RHS_Slice(_39Code_16903, 1, _26602);

        /** emit.e:981					Code &= if_code*/
        Concat((object_ptr)&_39Code_16903, _39Code_16903, _if_code_51754);
        DeRefDS(_if_code_51754);
        _if_code_51754 = NOVALUE;
        goto L38; // [2122] 2270
L37: 

        /** emit.e:983					if IsInteger(Code[$-1]) and IsInteger(Code[$]) then*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26605 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26605 = 1;
        }
        _26606 = _26605 - 1;
        _26605 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26607 = (object)*(((s1_ptr)_2)->base + _26606);
        Ref(_26607);
        _26608 = _49IsInteger(_26607);
        _26607 = NOVALUE;
        if (IS_ATOM_INT(_26608)) {
            if (_26608 == 0) {
                goto L39; // [2144] 2186
            }
        }
        else {
            if (DBL_PTR(_26608)->dbl == 0.0) {
                goto L39; // [2144] 2186
            }
        }
        if (IS_SEQUENCE(_39Code_16903)){
                _26610 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26610 = 1;
        }
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26611 = (object)*(((s1_ptr)_2)->base + _26610);
        Ref(_26611);
        _26612 = _49IsInteger(_26611);
        _26611 = NOVALUE;
        if (_26612 == 0) {
            DeRef(_26612);
            _26612 = NOVALUE;
            goto L39; // [2162] 2186
        }
        else {
            if (!IS_ATOM_INT(_26612) && DBL_PTR(_26612)->dbl == 0.0){
                DeRef(_26612);
                _26612 = NOVALUE;
                goto L39; // [2162] 2186
            }
            DeRef(_26612);
            _26612 = NOVALUE;
        }
        DeRef(_26612);
        _26612 = NOVALUE;

        /** emit.e:984						op = previous_op + LESS_IFW_I - LESS*/
        _26613 = _39previous_op_16913 + 119;
        if ((object)((uintptr_t)_26613 + (uintptr_t)HIGH_BITS) >= 0){
            _26613 = NewDouble((eudouble)_26613);
        }
        if (IS_ATOM_INT(_26613)) {
            _op_51310 = _26613 - 1;
        }
        else {
            _op_51310 = NewDouble(DBL_PTR(_26613)->dbl - (eudouble)1);
        }
        DeRef(_26613);
        _26613 = NOVALUE;
        if (!IS_ATOM_INT(_op_51310)) {
            _1 = (object)(DBL_PTR(_op_51310)->dbl);
            DeRefDS(_op_51310);
            _op_51310 = _1;
        }
        goto L3A; // [2183] 2205
L39: 

        /** emit.e:986						op = previous_op + LESS_IFW - LESS*/
        _26615 = _39previous_op_16913 + 102;
        if ((object)((uintptr_t)_26615 + (uintptr_t)HIGH_BITS) >= 0){
            _26615 = NewDouble((eudouble)_26615);
        }
        if (IS_ATOM_INT(_26615)) {
            _op_51310 = _26615 - 1;
        }
        else {
            _op_51310 = NewDouble(DBL_PTR(_26615)->dbl - (eudouble)1);
        }
        DeRef(_26615);
        _26615 = NOVALUE;
        if (!IS_ATOM_INT(_op_51310)) {
            _1 = (object)(DBL_PTR(_op_51310)->dbl);
            DeRefDS(_op_51310);
            _op_51310 = _1;
        }
L3A: 

        /** emit.e:989					backpatch(length(Code) - 2, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26617 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26617 = 1;
        }
        _26618 = _26617 - 2;
        _26617 = NOVALUE;
        _49backpatch(_26618, _op_51310);
        _26618 = NOVALUE;

        /** emit.e:991					sequence if_code = Code[$-2..$]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26619 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26619 = 1;
        }
        _26620 = _26619 - 2;
        _26619 = NOVALUE;
        if (IS_SEQUENCE(_39Code_16903)){
                _26621 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26621 = 1;
        }
        rhs_slice_target = (object_ptr)&_if_code_51793;
        RHS_Slice(_39Code_16903, _26620, _26621);

        /** emit.e:992					Code = Code[1..$-3]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26623 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26623 = 1;
        }
        _26624 = _26623 - 3;
        _26623 = NOVALUE;
        rhs_slice_target = (object_ptr)&_39Code_16903;
        RHS_Slice(_39Code_16903, 1, _26624);

        /** emit.e:993					Code &= if_code*/
        Concat((object_ptr)&_39Code_16903, _39Code_16903, _if_code_51793);
        DeRefDS(_if_code_51793);
        _if_code_51793 = NOVALUE;
L38: 

        /** emit.e:997				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;

        /** emit.e:998				last_op = op*/
        _49last_op_51269 = _op_51310;
        goto LC; // [2280] 7737
L36: 

        /** emit.e:1000			elsif op = WHILE and*/
        _26627 = (_op_51310 == 47);
        if (_26627 == 0) {
            _26628 = 0;
            goto L3B; // [2291] 2303
        }
        _26629 = (_a_51312 > 0);
        _26628 = (_26629 != 0);
L3B: 
        if (_26628 == 0) {
            _26630 = 0;
            goto L3C; // [2303] 2329
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26631 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26631);
        _26632 = (object)*(((s1_ptr)_2)->base + 3);
        _26631 = NOVALUE;
        if (IS_ATOM_INT(_26632)) {
            _26633 = (_26632 == 2);
        }
        else {
            _26633 = binary_op(EQUALS, _26632, 2);
        }
        _26632 = NOVALUE;
        if (IS_ATOM_INT(_26633))
        _26630 = (_26633 != 0);
        else
        _26630 = DBL_PTR(_26633)->dbl != 0.0;
L3C: 
        if (_26630 == 0) {
            _26634 = 0;
            goto L3D; // [2329] 2352
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26635 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26635);
        _26636 = (object)*(((s1_ptr)_2)->base + 1);
        _26635 = NOVALUE;
        if (IS_ATOM_INT(_26636))
        _26637 = 1;
        else if (IS_ATOM_DBL(_26636))
        _26637 = IS_ATOM_INT(DoubleToInt(_26636));
        else
        _26637 = 0;
        _26636 = NOVALUE;
        _26634 = (_26637 != 0);
L3D: 
        if (_26634 == 0) {
            goto L3E; // [2352] 2401
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26639 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26639);
        _26640 = (object)*(((s1_ptr)_2)->base + 1);
        _26639 = NOVALUE;
        if (_26640 == 0)
        _26641 = 1;
        else if (IS_ATOM_INT(_26640) && IS_ATOM_INT(0))
        _26641 = 0;
        else
        _26641 = (compare(_26640, 0) == 0);
        _26640 = NOVALUE;
        _26642 = (_26641 == 0);
        _26641 = NOVALUE;
        if (_26642 == 0)
        {
            DeRef(_26642);
            _26642 = NOVALUE;
            goto L3E; // [2376] 2401
        }
        else{
            DeRef(_26642);
            _26642 = NOVALUE;
        }

        /** emit.e:1005				optimized_while = TRUE   -- while TRUE ... emit nothing*/
        _49optimized_while_50374 = _9TRUE_444;

        /** emit.e:1006				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;

        /** emit.e:1007				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;
        goto LC; // [2398] 7737
L3E: 

        /** emit.e:1009				flush_temps( {a} )*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _a_51312;
        _26643 = MAKE_SEQ(_1);
        _49flush_temps(_26643);
        _26643 = NOVALUE;

        /** emit.e:1010				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1011				emit_addr(a)*/
        _49emit_addr(_a_51312);
        goto LC; // [2421] 7737

        /** emit.e:1016		case INTEGER_CHECK then*/
        case 96:

        /** emit.e:1017			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:1018			if previous_op = ASSIGN then*/
        if (_39previous_op_16913 != 18)
        goto L3F; // [2440] 2499

        /** emit.e:1019				c = Code[$-1]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26645 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26645 = 1;
        }
        _26646 = _26645 - 1;
        _26645 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _c_51314 = (object)*(((s1_ptr)_2)->base + _26646);
        if (!IS_ATOM_INT(_c_51314)){
            _c_51314 = (object)DBL_PTR(_c_51314)->dbl;
        }

        /** emit.e:1020				if not IsInteger(c) then*/
        _26648 = _49IsInteger(_c_51314);
        if (IS_ATOM_INT(_26648)) {
            if (_26648 != 0){
                DeRef(_26648);
                _26648 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        else {
            if (DBL_PTR(_26648)->dbl != 0.0){
                DeRef(_26648);
                _26648 = NOVALUE;
                goto L40; // [2467] 2485
            }
        }
        DeRef(_26648);
        _26648 = NOVALUE;

        /** emit.e:1021					emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1022					emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);
        goto L41; // [2482] 2556
L40: 

        /** emit.e:1024					last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1025					last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto L41; // [2496] 2556
L3F: 

        /** emit.e:1027			elsif previous_op = -1 or*/
        _26650 = (_39previous_op_16913 == -1);
        if (_26650 != 0) {
            goto L42; // [2507] 2530
        }
        _2 = (object)SEQ_PTR(_49op_result_50988);
        _26652 = (object)*(((s1_ptr)_2)->base + _39previous_op_16913);
        _26653 = (_26652 != 1);
        _26652 = NOVALUE;
        if (_26653 == 0)
        {
            DeRef(_26653);
            _26653 = NOVALUE;
            goto L43; // [2526] 2545
        }
        else{
            DeRef(_26653);
            _26653 = NOVALUE;
        }
L42: 

        /** emit.e:1029				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1030				emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);
        goto L41; // [2542] 2556
L43: 

        /** emit.e:1032				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1033				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
L41: 

        /** emit.e:1035			clear_temp( Code[$-1] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26654 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26654 = 1;
        }
        _26655 = _26654 - 1;
        _26654 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26656 = (object)*(((s1_ptr)_2)->base + _26655);
        Ref(_26656);
        _49clear_temp(_26656);
        _26656 = NOVALUE;
        goto LC; // [2574] 7737

        /** emit.e:1037		case SEQUENCE_CHECK then*/
        case 97:

        /** emit.e:1038			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:1039			if previous_op = ASSIGN then*/
        if (_39previous_op_16913 != 18)
        goto L44; // [2593] 2720

        /** emit.e:1040				c = Code[$-1]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26658 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26658 = 1;
        }
        _26659 = _26658 - 1;
        _26658 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _c_51314 = (object)*(((s1_ptr)_2)->base + _26659);
        if (!IS_ATOM_INT(_c_51314)){
            _c_51314 = (object)DBL_PTR(_c_51314)->dbl;
        }

        /** emit.e:1041				if c < 1 or*/
        _26661 = (_c_51314 < 1);
        if (_26661 != 0) {
            _26662 = 1;
            goto L45; // [2620] 2646
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26663 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26663);
        _26664 = (object)*(((s1_ptr)_2)->base + 3);
        _26663 = NOVALUE;
        if (IS_ATOM_INT(_26664)) {
            _26665 = (_26664 != 2);
        }
        else {
            _26665 = binary_op(NOTEQ, _26664, 2);
        }
        _26664 = NOVALUE;
        if (IS_ATOM_INT(_26665))
        _26662 = (_26665 != 0);
        else
        _26662 = DBL_PTR(_26665)->dbl != 0.0;
L45: 
        if (_26662 != 0) {
            goto L46; // [2646] 2673
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26667 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26667);
        _26668 = (object)*(((s1_ptr)_2)->base + 1);
        _26667 = NOVALUE;
        _26669 = IS_SEQUENCE(_26668);
        _26668 = NOVALUE;
        _26670 = (_26669 == 0);
        _26669 = NOVALUE;
        if (_26670 == 0)
        {
            DeRef(_26670);
            _26670 = NOVALUE;
            goto L47; // [2669] 2706
        }
        else{
            DeRef(_26670);
            _26670 = NOVALUE;
        }
L46: 

        /** emit.e:1044					emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1045					emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);

        /** emit.e:1046					clear_temp( Code[$-1] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26671 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26671 = 1;
        }
        _26672 = _26671 - 1;
        _26671 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26673 = (object)*(((s1_ptr)_2)->base + _26672);
        Ref(_26673);
        _49clear_temp(_26673);
        _26673 = NOVALUE;
        goto LC; // [2703] 7737
L47: 

        /** emit.e:1048					last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1049					last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [2717] 7737
L44: 

        /** emit.e:1051			elsif previous_op = -1 or op_result[previous_op] != T_SEQUENCE then*/
        _26674 = (_39previous_op_16913 == -1);
        if (_26674 != 0) {
            goto L48; // [2728] 2751
        }
        _2 = (object)SEQ_PTR(_49op_result_50988);
        _26676 = (object)*(((s1_ptr)_2)->base + _39previous_op_16913);
        _26677 = (_26676 != 2);
        _26676 = NOVALUE;
        if (_26677 == 0)
        {
            DeRef(_26677);
            _26677 = NOVALUE;
            goto L49; // [2747] 2784
        }
        else{
            DeRef(_26677);
            _26677 = NOVALUE;
        }
L48: 

        /** emit.e:1052				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1053				emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);

        /** emit.e:1054				clear_temp( Code[$-1] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26678 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26678 = 1;
        }
        _26679 = _26678 - 1;
        _26678 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26680 = (object)*(((s1_ptr)_2)->base + _26679);
        Ref(_26680);
        _49clear_temp(_26680);
        _26680 = NOVALUE;
        goto LC; // [2781] 7737
L49: 

        /** emit.e:1056				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1057				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [2795] 7737

        /** emit.e:1061		case ATOM_CHECK then*/
        case 101:

        /** emit.e:1062			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:1063			if previous_op = ASSIGN then*/
        if (_39previous_op_16913 != 18)
        goto L4A; // [2814] 3013

        /** emit.e:1064				c = Code[$-1]*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26682 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26682 = 1;
        }
        _26683 = _26682 - 1;
        _26682 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _c_51314 = (object)*(((s1_ptr)_2)->base + _26683);
        if (!IS_ATOM_INT(_c_51314)){
            _c_51314 = (object)DBL_PTR(_c_51314)->dbl;
        }

        /** emit.e:1065				if c > 1*/
        _26685 = (_c_51314 > 1);
        if (_26685 == 0) {
            goto L4B; // [2841] 2962
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26687 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26687);
        _26688 = (object)*(((s1_ptr)_2)->base + 3);
        _26687 = NOVALUE;
        if (IS_ATOM_INT(_26688)) {
            _26689 = (_26688 == 2);
        }
        else {
            _26689 = binary_op(EQUALS, _26688, 2);
        }
        _26688 = NOVALUE;
        if (_26689 == 0) {
            DeRef(_26689);
            _26689 = NOVALUE;
            goto L4B; // [2864] 2962
        }
        else {
            if (!IS_ATOM_INT(_26689) && DBL_PTR(_26689)->dbl == 0.0){
                DeRef(_26689);
                _26689 = NOVALUE;
                goto L4B; // [2864] 2962
            }
            DeRef(_26689);
            _26689 = NOVALUE;
        }
        DeRef(_26689);
        _26689 = NOVALUE;

        /** emit.e:1068					if sequence( SymTab[c][S_OBJ] ) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26690 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26690);
        _26691 = (object)*(((s1_ptr)_2)->base + 1);
        _26690 = NOVALUE;
        _26692 = IS_SEQUENCE(_26691);
        _26691 = NOVALUE;
        if (_26692 == 0)
        {
            _26692 = NOVALUE;
            goto L4C; // [2884] 2913
        }
        else{
            _26692 = NOVALUE;
        }

        /** emit.e:1070						ThisLine = ExprLine*/
        RefDS(_42ExprLine_56468);
        DeRef(_52ThisLine_48710);
        _52ThisLine_48710 = _42ExprLine_56468;

        /** emit.e:1071						bp = expr_bp*/
        _52bp_48714 = _42expr_bp_56469;

        /** emit.e:1072						CompileErr( 346 )*/
        RefDS(_21928);
        _52CompileErr(346, _21928, 0);
        goto L4D; // [2910] 3092
L4C: 

        /** emit.e:1074					elsif SymTab[c][S_OBJ] = NOVALUE then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26693 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26693);
        _26694 = (object)*(((s1_ptr)_2)->base + 1);
        _26693 = NOVALUE;
        if (binary_op_a(NOTEQ, _26694, _39NOVALUE_16670)){
            _26694 = NOVALUE;
            goto L4E; // [2929] 2948
        }
        _26694 = NOVALUE;

        /** emit.e:1075						emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1076						emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);
        goto L4D; // [2945] 3092
L4E: 

        /** emit.e:1078						last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1079						last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto L4D; // [2959] 3092
L4B: 

        /** emit.e:1082				elsif c < 1 */
        _26696 = (_c_51314 < 1);
        if (_26696 != 0) {
            goto L4F; // [2968] 2984
        }
        _26698 = _49IsInteger(_c_51314);
        if (IS_ATOM_INT(_26698)) {
            _26699 = (_26698 == 0);
        }
        else {
            _26699 = unary_op(NOT, _26698);
        }
        DeRef(_26698);
        _26698 = NOVALUE;
        if (_26699 == 0) {
            DeRef(_26699);
            _26699 = NOVALUE;
            goto L50; // [2980] 2999
        }
        else {
            if (!IS_ATOM_INT(_26699) && DBL_PTR(_26699)->dbl == 0.0){
                DeRef(_26699);
                _26699 = NOVALUE;
                goto L50; // [2980] 2999
            }
            DeRef(_26699);
            _26699 = NOVALUE;
        }
        DeRef(_26699);
        _26699 = NOVALUE;
L4F: 

        /** emit.e:1085					emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1086					emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);
        goto L4D; // [2996] 3092
L50: 

        /** emit.e:1089					last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1090					last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto L4D; // [3010] 3092
L4A: 

        /** emit.e:1092			elsif previous_op = -1 or*/
        _26700 = (_39previous_op_16913 == -1);
        if (_26700 != 0) {
            goto L51; // [3021] 3066
        }
        _2 = (object)SEQ_PTR(_49op_result_50988);
        _26702 = (object)*(((s1_ptr)_2)->base + _39previous_op_16913);
        _26703 = (_26702 != 1);
        _26702 = NOVALUE;
        if (_26703 == 0) {
            DeRef(_26704);
            _26704 = 0;
            goto L52; // [3039] 3061
        }
        _2 = (object)SEQ_PTR(_49op_result_50988);
        _26705 = (object)*(((s1_ptr)_2)->base + _39previous_op_16913);
        _26706 = (_26705 != 3);
        _26705 = NOVALUE;
        _26704 = (_26706 != 0);
L52: 
        if (_26704 == 0)
        {
            _26704 = NOVALUE;
            goto L53; // [3062] 3081
        }
        else{
            _26704 = NOVALUE;
        }
L51: 

        /** emit.e:1095				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1096				emit_addr(op_info1)*/
        _49emit_addr(_49op_info1_50372);
        goto L4D; // [3078] 3092
L53: 

        /** emit.e:1098				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1099				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
L4D: 

        /** emit.e:1101			clear_temp( Code[$-1] )*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26707 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26707 = 1;
        }
        _26708 = _26707 - 1;
        _26707 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26709 = (object)*(((s1_ptr)_2)->base + _26708);
        Ref(_26709);
        _49clear_temp(_26709);
        _26709 = NOVALUE;
        goto LC; // [3110] 7737

        /** emit.e:1103		case RIGHT_BRACE_N then*/
        case 31:

        /** emit.e:1105			n = op_info1*/
        _n_51323 = _49op_info1_50372;

        /** emit.e:1107			elements = {}*/
        RefDS(_21928);
        DeRef(_elements_51325);
        _elements_51325 = _21928;

        /** emit.e:1108			for i = 1 to n do*/
        _26710 = _n_51323;
        {
            object _i_51973;
            _i_51973 = 1;
L54: 
            if (_i_51973 > _26710){
                goto L55; // [3135] 3158
            }

            /** emit.e:1109				elements = append(elements, Pop())*/
            _26711 = _49Pop();
            Ref(_26711);
            Append(&_elements_51325, _elements_51325, _26711);
            DeRef(_26711);
            _26711 = NOVALUE;

            /** emit.e:1110			end for*/
            _i_51973 = _i_51973 + 1;
            goto L54; // [3153] 3142
L55: 
            ;
        }

        /** emit.e:1111			element_vals = good_string(elements)*/
        RefDS(_elements_51325);
        _0 = _element_vals_51326;
        _element_vals_51326 = _49good_string(_elements_51325);
        DeRef(_0);

        /** emit.e:1113			if sequence(element_vals) then*/
        _26714 = IS_SEQUENCE(_element_vals_51326);
        if (_26714 == 0)
        {
            _26714 = NOVALUE;
            goto L56; // [3169] 3200
        }
        else{
            _26714 = NOVALUE;
        }

        /** emit.e:1114				c = NewStringSym(element_vals)  -- make a string literal*/
        Ref(_element_vals_51326);
        _c_51314 = _56NewStringSym(_element_vals_51326);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1115				assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:1116				last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1117				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto L57; // [3197] 3291
L56: 

        /** emit.e:1119				if n = 2 then*/
        if (_n_51323 != 2)
        goto L58; // [3202] 3225

        /** emit.e:1120					emit_opcode(RIGHT_BRACE_2) -- faster op for two items*/
        _49emit_opcode(85);

        /** emit.e:1121					last_op = RIGHT_BRACE_2*/
        _49last_op_51269 = 85;
        goto L59; // [3222] 3236
L58: 

        /** emit.e:1123					emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1124					emit(n)*/
        _49emit(_n_51323);
L59: 

        /** emit.e:1127				for i = 1 to n do*/
        _26717 = _n_51323;
        {
            object _i_51990;
            _i_51990 = 1;
L5A: 
            if (_i_51990 > _26717){
                goto L5B; // [3241] 3264
            }

            /** emit.e:1128					emit_addr(elements[i])*/
            _2 = (object)SEQ_PTR(_elements_51325);
            _26718 = (object)*(((s1_ptr)_2)->base + _i_51990);
            Ref(_26718);
            _49emit_addr(_26718);
            _26718 = NOVALUE;

            /** emit.e:1129				end for*/
            _i_51990 = _i_51990 + 1;
            goto L5A; // [3259] 3248
L5B: 
            ;
        }

        /** emit.e:1130				c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1131				emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1132				emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);

        /** emit.e:1133				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;
L57: 

        /** emit.e:1135			Push(c)*/
        _49Push(_c_51314);
        goto LC; // [3296] 7737

        /** emit.e:1138		case ASSIGN_SUBS2,      -- can't change the op*/
        case 148:
        case 16:
        case 162:

        /** emit.e:1141			b = Pop() -- rhs value*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1142			a = Pop() -- subscript*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1143			c = Pop() -- sequence*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1144			if op = ASSIGN_SUBS then*/
        if (_op_51310 != 16)
        goto L5C; // [3331] 3523

        /** emit.e:1146				if (previous_op != LHS_SUBS) and*/
        _26724 = (_39previous_op_16913 != 95);
        if (_26724 == 0) {
            _26725 = 0;
            goto L5D; // [3345] 3357
        }
        _26726 = (_c_51314 > 0);
        _26725 = (_26726 != 0);
L5D: 
        if (_26725 == 0) {
            goto L5E; // [3357] 3495
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26728 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26728);
        _26729 = (object)*(((s1_ptr)_2)->base + 3);
        _26728 = NOVALUE;
        if (IS_ATOM_INT(_26729)) {
            _26730 = (_26729 != 1);
        }
        else {
            _26730 = binary_op(NOTEQ, _26729, 1);
        }
        _26729 = NOVALUE;
        if (IS_ATOM_INT(_26730)) {
            if (_26730 != 0) {
                DeRef(_26731);
                _26731 = 1;
                goto L5F; // [3379] 3479
            }
        }
        else {
            if (DBL_PTR(_26730)->dbl != 0.0) {
                DeRef(_26731);
                _26731 = 1;
                goto L5F; // [3379] 3479
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26732 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26732);
        _26733 = (object)*(((s1_ptr)_2)->base + 15);
        _26732 = NOVALUE;
        if (IS_ATOM_INT(_26733)) {
            _26734 = (_26733 != _56sequence_type_46262);
        }
        else {
            _26734 = binary_op(NOTEQ, _26733, _56sequence_type_46262);
        }
        _26733 = NOVALUE;
        if (IS_ATOM_INT(_26734)) {
            if (_26734 == 0) {
                DeRef(_26735);
                _26735 = 0;
                goto L60; // [3401] 3475
            }
        }
        else {
            if (DBL_PTR(_26734)->dbl == 0.0) {
                DeRef(_26735);
                _26735 = 0;
                goto L60; // [3401] 3475
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26736 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26736);
        _26737 = (object)*(((s1_ptr)_2)->base + 15);
        _26736 = NOVALUE;
        if (IS_ATOM_INT(_26737)) {
            _26738 = (_26737 > 0);
        }
        else {
            _26738 = binary_op(GREATER, _26737, 0);
        }
        _26737 = NOVALUE;
        if (IS_ATOM_INT(_26738)) {
            if (_26738 == 0) {
                DeRef(_26739);
                _26739 = 0;
                goto L61; // [3421] 3471
            }
        }
        else {
            if (DBL_PTR(_26738)->dbl == 0.0) {
                DeRef(_26739);
                _26739 = 0;
                goto L61; // [3421] 3471
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26740 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26740);
        _26741 = (object)*(((s1_ptr)_2)->base + 15);
        _26740 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_26741)){
            _26742 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26741)->dbl));
        }
        else{
            _26742 = (object)*(((s1_ptr)_2)->base + _26741);
        }
        _2 = (object)SEQ_PTR(_26742);
        _26743 = (object)*(((s1_ptr)_2)->base + 2);
        _26742 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_26743)){
            _26744 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26743)->dbl));
        }
        else{
            _26744 = (object)*(((s1_ptr)_2)->base + _26743);
        }
        _2 = (object)SEQ_PTR(_26744);
        _26745 = (object)*(((s1_ptr)_2)->base + 15);
        _26744 = NOVALUE;
        if (IS_ATOM_INT(_26745)) {
            _26746 = (_26745 != _56sequence_type_46262);
        }
        else {
            _26746 = binary_op(NOTEQ, _26745, _56sequence_type_46262);
        }
        _26745 = NOVALUE;
        DeRef(_26739);
        if (IS_ATOM_INT(_26746))
        _26739 = (_26746 != 0);
        else
        _26739 = DBL_PTR(_26746)->dbl != 0.0;
L61: 
        DeRef(_26735);
        _26735 = (_26739 != 0);
L60: 
        DeRef(_26731);
        _26731 = (_26735 != 0);
L5F: 
        if (_26731 == 0)
        {
            _26731 = NOVALUE;
            goto L5E; // [3480] 3495
        }
        else{
            _26731 = NOVALUE;
        }

        /** emit.e:1153					op = ASSIGN_SUBS_CHECK*/
        _op_51310 = 84;
        goto L62; // [3492] 3515
L5E: 

        /** emit.e:1155					if IsInteger(b) then*/
        _26747 = _49IsInteger(_b_51313);
        if (_26747 == 0) {
            DeRef(_26747);
            _26747 = NOVALUE;
            goto L63; // [3501] 3514
        }
        else {
            if (!IS_ATOM_INT(_26747) && DBL_PTR(_26747)->dbl == 0.0){
                DeRef(_26747);
                _26747 = NOVALUE;
                goto L63; // [3501] 3514
            }
            DeRef(_26747);
            _26747 = NOVALUE;
        }
        DeRef(_26747);
        _26747 = NOVALUE;

        /** emit.e:1156						op = ASSIGN_SUBS_I*/
        _op_51310 = 118;
L63: 
L62: 

        /** emit.e:1159				emit_opcode(op)*/
        _49emit_opcode(_op_51310);
        goto L64; // [3520] 3549
L5C: 

        /** emit.e:1161			elsif op = PASSIGN_SUBS then*/
        if (_op_51310 != 162)
        goto L65; // [3527] 3541

        /** emit.e:1162				emit_opcode(PASSIGN_SUBS) -- always*/
        _49emit_opcode(162);
        goto L64; // [3538] 3549
L65: 

        /** emit.e:1165				emit_opcode(ASSIGN_SUBS) -- always*/
        _49emit_opcode(16);
L64: 

        /** emit.e:1169			emit_addr(c) -- sequence*/
        _49emit_addr(_c_51314);

        /** emit.e:1170			emit_addr(a) -- subscript*/
        _49emit_addr(_a_51312);

        /** emit.e:1171			emit_addr(b) -- rhs value*/
        _49emit_addr(_b_51313);

        /** emit.e:1172			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [3571] 7737

        /** emit.e:1174		case LHS_SUBS, LHS_SUBS1, LHS_SUBS1_COPY then*/
        case 95:
        case 161:
        case 166:

        /** emit.e:1176			a = Pop() -- subs*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1177			lhs_var = Pop() -- sequence*/
        _lhs_var_51320 = _49Pop();
        if (!IS_ATOM_INT(_lhs_var_51320)) {
            _1 = (object)(DBL_PTR(_lhs_var_51320)->dbl);
            DeRefDS(_lhs_var_51320);
            _lhs_var_51320 = _1;
        }

        /** emit.e:1178			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1179			emit_addr(lhs_var)*/
        _49emit_addr(_lhs_var_51320);

        /** emit.e:1180			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1181			if op = LHS_SUBS then*/
        if (_op_51310 != 95)
        goto L66; // [3614] 3645

        /** emit.e:1182				TempKeep(lhs_var) -- should be lhs_target_temp*/
        _49TempKeep(_lhs_var_51320);

        /** emit.e:1183				emit_addr(lhs_target_temp)*/
        _49emit_addr(_49lhs_target_temp_50386);

        /** emit.e:1184				Push(lhs_target_temp)*/
        _49Push(_49lhs_target_temp_50386);

        /** emit.e:1185				emit_addr(0) -- place holder*/
        _49emit_addr(0);
        goto L67; // [3642] 3699
L66: 

        /** emit.e:1189				lhs_target_temp = NewTempSym() -- use same temp for all subscripts*/
        _0 = _56NewTempSym(0);
        _49lhs_target_temp_50386 = _0;
        if (!IS_ATOM_INT(_49lhs_target_temp_50386)) {
            _1 = (object)(DBL_PTR(_49lhs_target_temp_50386)->dbl);
            DeRefDS(_49lhs_target_temp_50386);
            _49lhs_target_temp_50386 = _1;
        }

        /** emit.e:1190				emit_addr(lhs_target_temp) -- target temp holds pointer to sequence*/
        _49emit_addr(_49lhs_target_temp_50386);

        /** emit.e:1191				emit_temp(lhs_target_temp, NEW_REFERENCE )*/
        _49emit_temp(_49lhs_target_temp_50386, 1);

        /** emit.e:1192				Push(lhs_target_temp)*/
        _49Push(_49lhs_target_temp_50386);

        /** emit.e:1193				lhs_subs1_copy_temp = NewTempSym() -- place to copy (may be ignored)*/
        _0 = _56NewTempSym(0);
        _49lhs_subs1_copy_temp_50385 = _0;
        if (!IS_ATOM_INT(_49lhs_subs1_copy_temp_50385)) {
            _1 = (object)(DBL_PTR(_49lhs_subs1_copy_temp_50385)->dbl);
            DeRefDS(_49lhs_subs1_copy_temp_50385);
            _49lhs_subs1_copy_temp_50385 = _1;
        }

        /** emit.e:1194				emit_addr(lhs_subs1_copy_temp)*/
        _49emit_addr(_49lhs_subs1_copy_temp_50385);

        /** emit.e:1195				emit_temp( lhs_subs1_copy_temp, NEW_REFERENCE )*/
        _49emit_temp(_49lhs_subs1_copy_temp_50385, 1);
L67: 

        /** emit.e:1198			current_sequence = append(current_sequence, lhs_target_temp)*/
        Append(&_49current_sequence_50380, _49current_sequence_50380, _49lhs_target_temp_50386);

        /** emit.e:1199			assignable = FALSE  -- need to update current_sequence like in RHS_SUBS*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [3716] 7737

        /** emit.e:1201		case PEEK_LONGS then*/
        case 436:

        /** emit.e:1202			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        if (0 != 0) {
            _26755 = 1;
            goto L68; // [3726] 3736
        }
        _26755 = (0 != 0);
L68: 
        if (_26755 != 0) {
            goto L69; // [3736] 3760
        }
        if (0 != 0) {
            DeRef(_26757);
            _26757 = 1;
            goto L6A; // [3742] 3752
        }
        _26757 = (0 != 0);
L6A: 
        _26758 = (_26757 == 0);
        _26757 = NOVALUE;
        if (_26758 == 0)
        {
            DeRef(_26758);
            _26758 = NOVALUE;
            goto L6B; // [3756] 3772
        }
        else{
            DeRef(_26758);
            _26758 = NOVALUE;
        }
L69: 

        /** emit.e:1203				op = PEEK4S*/
        _op_51310 = 139;
        goto L6C; // [3769] 3782
L6B: 

        /** emit.e:1205				op = PEEK8S*/
        _op_51310 = 213;
L6C: 

        /** emit.e:1207			last_op = op*/
        _49last_op_51269 = _op_51310;

        /** emit.e:1208			cont11ii(op, TRUE )*/
        _49cont11ii(_op_51310, _9TRUE_444);
        goto LC; // [3795] 7737

        /** emit.e:1210		case PEEK_LONGU then*/
        case 435:

        /** emit.e:1211			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        if (0 != 0) {
            _26759 = 1;
            goto L6D; // [3805] 3815
        }
        _26759 = (0 != 0);
L6D: 
        if (_26759 != 0) {
            goto L6E; // [3815] 3839
        }
        if (0 != 0) {
            DeRef(_26761);
            _26761 = 1;
            goto L6F; // [3821] 3831
        }
        _26761 = (0 != 0);
L6F: 
        _26762 = (_26761 == 0);
        _26761 = NOVALUE;
        if (_26762 == 0)
        {
            DeRef(_26762);
            _26762 = NOVALUE;
            goto L70; // [3835] 3851
        }
        else{
            DeRef(_26762);
            _26762 = NOVALUE;
        }
L6E: 

        /** emit.e:1212				op = PEEK4U*/
        _op_51310 = 140;
        goto L71; // [3848] 3861
L70: 

        /** emit.e:1214				op = PEEK8U*/
        _op_51310 = 214;
L71: 

        /** emit.e:1216			last_op = op*/
        _49last_op_51269 = _op_51310;

        /** emit.e:1217			cont11ii(op, TRUE )*/
        _49cont11ii(_op_51310, _9TRUE_444);
        goto LC; // [3874] 7737

        /** emit.e:1220		case RAND, PEEK, PEEK4S, PEEK4U, NOT_BITS, NOT, PEEK8U, PEEK8S, SIZEOF,*/
        case 62:
        case 127:
        case 139:
        case 140:
        case 51:
        case 7:
        case 214:
        case 213:
        case 217:
        case 173:
        case 180:
        case 179:
        case 181:
        case 182:
        case 216:

        /** emit.e:1222			cont11ii(op, TRUE)*/
        _49cont11ii(_op_51310, _9TRUE_444);
        goto LC; // [3916] 7737

        /** emit.e:1224		case UMINUS then*/
        case 12:

        /** emit.e:1226			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1228			if a > 0 then*/
        if (_a_51312 <= 0)
        goto L72; // [3931] 4178

        /** emit.e:1229				obj = SymTab[a][S_OBJ]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26765 = (object)*(((s1_ptr)_2)->base + _a_51312);
        DeRef(_obj_51324);
        _2 = (object)SEQ_PTR(_26765);
        _obj_51324 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_obj_51324);
        _26765 = NOVALUE;

        /** emit.e:1230				if SymTab[a][S_MODE] = M_CONSTANT then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26767 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26767);
        _26768 = (object)*(((s1_ptr)_2)->base + 3);
        _26767 = NOVALUE;
        if (binary_op_a(NOTEQ, _26768, 2)){
            _26768 = NOVALUE;
            goto L73; // [3965] 4090
        }
        _26768 = NOVALUE;

        /** emit.e:1231					if is_integer(obj) then*/
        Ref(_obj_51324);
        _26770 = _39is_integer(_obj_51324);
        if (_26770 == 0) {
            DeRef(_26770);
            _26770 = NOVALUE;
            goto L74; // [3975] 4029
        }
        else {
            if (!IS_ATOM_INT(_26770) && DBL_PTR(_26770)->dbl == 0.0){
                DeRef(_26770);
                _26770 = NOVALUE;
                goto L74; // [3975] 4029
            }
            DeRef(_26770);
            _26770 = NOVALUE;
        }
        DeRef(_26770);
        _26770 = NOVALUE;

        /** emit.e:1232						if obj = MININT then*/
        if (binary_op_a(NOTEQ, _obj_51324, -1073741824)){
            goto L75; // [3982] 4003
        }

        /** emit.e:1233							Push(NewDoubleSym(-MININT))*/
        if ((uintptr_t)-1073741824 == (uintptr_t)HIGH_BITS){
            _26772 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _26772 = - -1073741824;
        }
        _26773 = _56NewDoubleSym(_26772);
        _26772 = NOVALUE;
        _49Push(_26773);
        _26773 = NOVALUE;
        goto L76; // [4000] 4016
L75: 

        /** emit.e:1235							Push(NewIntSym(-obj))*/
        if (IS_ATOM_INT(_obj_51324)) {
            if ((uintptr_t)_obj_51324 == (uintptr_t)HIGH_BITS){
                _26774 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26774 = - _obj_51324;
            }
        }
        else {
            _26774 = unary_op(UMINUS, _obj_51324);
        }
        _26775 = _56NewIntSym(_26774);
        _26774 = NOVALUE;
        _49Push(_26775);
        _26775 = NOVALUE;
L76: 

        /** emit.e:1237						last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;

        /** emit.e:1238						last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;
        goto LC; // [4026] 7737
L74: 

        /** emit.e:1240					elsif atom(obj) and obj != NOVALUE then*/
        _26776 = IS_ATOM(_obj_51324);
        if (_26776 == 0) {
            goto L77; // [4034] 4073
        }
        if (IS_ATOM_INT(_obj_51324) && IS_ATOM_INT(_39NOVALUE_16670)) {
            _26778 = (_obj_51324 != _39NOVALUE_16670);
        }
        else {
            _26778 = binary_op(NOTEQ, _obj_51324, _39NOVALUE_16670);
        }
        if (_26778 == 0) {
            DeRef(_26778);
            _26778 = NOVALUE;
            goto L77; // [4045] 4073
        }
        else {
            if (!IS_ATOM_INT(_26778) && DBL_PTR(_26778)->dbl == 0.0){
                DeRef(_26778);
                _26778 = NOVALUE;
                goto L77; // [4045] 4073
            }
            DeRef(_26778);
            _26778 = NOVALUE;
        }
        DeRef(_26778);
        _26778 = NOVALUE;

        /** emit.e:1245						Push(NewDoubleSym(-obj))*/
        if (IS_ATOM_INT(_obj_51324)) {
            if ((uintptr_t)_obj_51324 == (uintptr_t)HIGH_BITS){
                _26779 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26779 = - _obj_51324;
            }
        }
        else {
            _26779 = unary_op(UMINUS, _obj_51324);
        }
        _26780 = _56NewDoubleSym(_26779);
        _26779 = NOVALUE;
        _49Push(_26780);
        _26780 = NOVALUE;

        /** emit.e:1246						last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;

        /** emit.e:1247						last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;
        goto LC; // [4070] 7737
L77: 

        /** emit.e:1250						Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1251						cont11ii(op, FALSE)*/
        _49cont11ii(_op_51310, _9FALSE_442);
        goto LC; // [4087] 7737
L73: 

        /** emit.e:1254				elsif TRANSLATE and SymTab[a][S_MODE] = M_TEMP and*/
        if (_39TRANSLATE_16440 == 0) {
            _26781 = 0;
            goto L78; // [4094] 4120
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26782 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26782);
        _26783 = (object)*(((s1_ptr)_2)->base + 3);
        _26782 = NOVALUE;
        if (IS_ATOM_INT(_26783)) {
            _26784 = (_26783 == 3);
        }
        else {
            _26784 = binary_op(EQUALS, _26783, 3);
        }
        _26783 = NOVALUE;
        if (IS_ATOM_INT(_26784))
        _26781 = (_26784 != 0);
        else
        _26781 = DBL_PTR(_26784)->dbl != 0.0;
L78: 
        if (_26781 == 0) {
            goto L79; // [4120] 4161
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26786 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26786);
        _26787 = (object)*(((s1_ptr)_2)->base + 36);
        _26786 = NOVALUE;
        if (IS_ATOM_INT(_26787)) {
            _26788 = (_26787 == 2);
        }
        else {
            _26788 = binary_op(EQUALS, _26787, 2);
        }
        _26787 = NOVALUE;
        if (_26788 == 0) {
            DeRef(_26788);
            _26788 = NOVALUE;
            goto L79; // [4143] 4161
        }
        else {
            if (!IS_ATOM_INT(_26788) && DBL_PTR(_26788)->dbl == 0.0){
                DeRef(_26788);
                _26788 = NOVALUE;
                goto L79; // [4143] 4161
            }
            DeRef(_26788);
            _26788 = NOVALUE;
        }
        DeRef(_26788);
        _26788 = NOVALUE;

        /** emit.e:1256					Push(NewDoubleSym(-obj))*/
        if (IS_ATOM_INT(_obj_51324)) {
            if ((uintptr_t)_obj_51324 == (uintptr_t)HIGH_BITS){
                _26789 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _26789 = - _obj_51324;
            }
        }
        else {
            _26789 = unary_op(UMINUS, _obj_51324);
        }
        _26790 = _56NewDoubleSym(_26789);
        _26789 = NOVALUE;
        _49Push(_26790);
        _26790 = NOVALUE;
        goto LC; // [4158] 7737
L79: 

        /** emit.e:1259					Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1260					cont11ii(op, FALSE)*/
        _49cont11ii(_op_51310, _9FALSE_442);
        goto LC; // [4175] 7737
L72: 

        /** emit.e:1263				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1264				cont11ii(op, FALSE)*/
        _49cont11ii(_op_51310, _9FALSE_442);
        goto LC; // [4192] 7737

        /** emit.e:1267		case LENGTH, GETC, SQRT, SIN, COS, TAN, ARCTAN, LOG, GETS, GETENV then*/
        case 42:
        case 33:
        case 41:
        case 80:
        case 81:
        case 82:
        case 73:
        case 74:
        case 17:
        case 91:

        /** emit.e:1268			cont11ii(op, FALSE)*/
        _49cont11ii(_op_51310, _9FALSE_442);
        goto LC; // [4224] 7737

        /** emit.e:1270		case IS_AN_INTEGER, IS_AN_ATOM, IS_A_SEQUENCE, IS_AN_OBJECT then*/
        case 94:
        case 67:
        case 68:
        case 40:

        /** emit.e:1271			cont11ii(op, FALSE)*/
        _49cont11ii(_op_51310, _9FALSE_442);
        goto LC; // [4244] 7737

        /** emit.e:1275		case ROUTINE_ID then*/
        case 134:

        /** emit.e:1276			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1277			source = Pop()*/
        _source_51316 = _49Pop();
        if (!IS_ATOM_INT(_source_51316)) {
            _1 = (object)(DBL_PTR(_source_51316)->dbl);
            DeRefDS(_source_51316);
            _source_51316 = _1;
        }

        /** emit.e:1278			if TRANSLATE then*/
        if (_39TRANSLATE_16440 == 0)
        {
            goto L7A; // [4266] 4310
        }
        else{
        }

        /** emit.e:1279				emit_addr(num_routines-1)*/
        _26792 = _39num_routines_16824 - 1;
        if ((object)((uintptr_t)_26792 +(uintptr_t) HIGH_BITS) >= 0){
            _26792 = NewDouble((eudouble)_26792);
        }
        _49emit_addr(_26792);
        _26792 = NOVALUE;

        /** emit.e:1280				last_routine_id = num_routines*/
        _49last_routine_id_50377 = _39num_routines_16824;

        /** emit.e:1281				last_max_params = max_params*/
        _49last_max_params_50379 = _49max_params_50378;

        /** emit.e:1282				MarkTargets(source, S_RI_TARGET)*/
        _31689 = _56MarkTargets(_source_51316, 53);
        DeRef(_31689);
        _31689 = NOVALUE;
        goto L7B; // [4307] 4347
L7A: 

        /** emit.e:1285				emit_addr(CurrentSub)*/
        _49emit_addr(_39CurrentSub_16823);

        /** emit.e:1286				emit_addr(length(SymTab))*/
        if (IS_SEQUENCE(_36SymTab_15404)){
                _26793 = SEQ_PTR(_36SymTab_15404)->length;
        }
        else {
            _26793 = 1;
        }
        _49emit_addr(_26793);
        _26793 = NOVALUE;

        /** emit.e:1288				if BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto L7C; // [4331] 4346
        }
        else{
        }

        /** emit.e:1290					MarkTargets(source, S_NREFS)*/
        _31688 = _56MarkTargets(_source_51316, 12);
        DeRef(_31688);
        _31688 = NOVALUE;
L7C: 
L7B: 

        /** emit.e:1294			emit_addr(source)*/
        _49emit_addr(_source_51316);

        /** emit.e:1295			emit_addr(current_file_no)  -- necessary at top level*/
        _49emit_addr(_39current_file_no_16815);

        /** emit.e:1296			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1297			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1298			TempInteger(c) -- result will always be an integer*/
        _49TempInteger(_c_51314);

        /** emit.e:1299			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1300			emit_addr(c)*/
        _49emit_addr(_c_51314);
        goto LC; // [4389] 7737

        /** emit.e:1305		case SC1_OR, SC1_AND then*/
        case 143:
        case 141:

        /** emit.e:1306			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1307			emit_addr(Pop())*/
        _26795 = _49Pop();
        _49emit_addr(_26795);
        _26795 = NOVALUE;

        /** emit.e:1308			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1309			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1310			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1311			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [4435] 7737

        /** emit.e:1315		case POKE_LONG then*/
        case 434:

        /** emit.e:1316			if IWINDOWS or TWINDOWS or not (IX86_64 or TX86_64) then*/
        if (0 != 0) {
            _26797 = 1;
            goto L7D; // [4445] 4455
        }
        _26797 = (0 != 0);
L7D: 
        if (_26797 != 0) {
            goto L7E; // [4455] 4479
        }
        if (0 != 0) {
            DeRef(_26799);
            _26799 = 1;
            goto L7F; // [4461] 4471
        }
        _26799 = (0 != 0);
L7F: 
        _26800 = (_26799 == 0);
        _26799 = NOVALUE;
        if (_26800 == 0)
        {
            DeRef(_26800);
            _26800 = NOVALUE;
            goto L80; // [4475] 4491
        }
        else{
            DeRef(_26800);
            _26800 = NOVALUE;
        }
L7E: 

        /** emit.e:1317				op = POKE4*/
        _op_51310 = 138;
        goto L81; // [4488] 4501
L80: 

        /** emit.e:1319				op = POKE8*/
        _op_51310 = 212;
L81: 

        /** emit.e:1321			last_op = op*/
        _49last_op_51269 = _op_51310;

        /** emit.e:1324		case SYSTEM, PUTS, PRINT, QPRINT, POSITION, MACHINE_PROC,*/
        case 99:
        case 44:
        case 19:
        case 36:
        case 60:
        case 112:
        case 132:
        case 128:
        case 138:
        case 168:
        case 178:
        case 212:
        case 215:

        /** emit.e:1326			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1328			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1329			emit_addr(Pop())*/
        _26802 = _49Pop();
        _49emit_addr(_26802);
        _26802 = NOVALUE;

        /** emit.e:1330			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1331			if op = C_PROC then*/
        if (_op_51310 != 132)
        goto L82; // [4563] 4575

        /** emit.e:1332				emit_addr(CurrentSub)*/
        _49emit_addr(_39CurrentSub_16823);
L82: 

        /** emit.e:1334			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [4582] 7737

        /** emit.e:1337		case EQUALS, LESS, GREATER, NOTEQ, LESSEQ, GREATEREQ,*/
        case 3:
        case 1:
        case 6:
        case 4:
        case 5:
        case 2:
        case 8:
        case 9:
        case 152:
        case 71:
        case 56:
        case 24:
        case 26:

        /** emit.e:1339			cont21ii(op, TRUE)  -- both integer args => integer result*/
        _49cont21ii(_op_51310, _9TRUE_444);
        goto LC; // [4620] 7737

        /** emit.e:1341		case PLUS then -- elsif op = PLUS then*/
        case 11:

        /** emit.e:1343			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1344			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1346			if b < 1 or a < 1 then*/
        _26806 = (_b_51313 < 1);
        if (_26806 != 0) {
            goto L83; // [4646] 4659
        }
        _26808 = (_a_51312 < 1);
        if (_26808 == 0)
        {
            DeRef(_26808);
            _26808 = NOVALUE;
            goto L84; // [4655] 4680
        }
        else{
            DeRef(_26808);
            _26808 = NOVALUE;
        }
L83: 

        /** emit.e:1347				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1348				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1349				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [4677] 7737
L84: 

        /** emit.e:1350			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 1) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26809 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26809);
        _26810 = (object)*(((s1_ptr)_2)->base + 3);
        _26809 = NOVALUE;
        if (IS_ATOM_INT(_26810)) {
            _26811 = (_26810 == 2);
        }
        else {
            _26811 = binary_op(EQUALS, _26810, 2);
        }
        _26810 = NOVALUE;
        if (IS_ATOM_INT(_26811)) {
            if (_26811 == 0) {
                goto L85; // [4700] 4761
            }
        }
        else {
            if (DBL_PTR(_26811)->dbl == 0.0) {
                goto L85; // [4700] 4761
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26813 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26813);
        _26814 = (object)*(((s1_ptr)_2)->base + 1);
        _26813 = NOVALUE;
        if (_26814 == 1)
        _26815 = 1;
        else if (IS_ATOM_INT(_26814) && IS_ATOM_INT(1))
        _26815 = 0;
        else
        _26815 = (compare(_26814, 1) == 0);
        _26814 = NOVALUE;
        if (_26815 == 0)
        {
            _26815 = NOVALUE;
            goto L85; // [4721] 4761
        }
        else{
            _26815 = NOVALUE;
        }

        /** emit.e:1351				op = PLUS1*/
        _op_51310 = 93;

        /** emit.e:1352				emit_opcode(op)*/
        _49emit_opcode(93);

        /** emit.e:1353				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1354				emit_addr(0)*/
        _49emit_addr(0);

        /** emit.e:1355				cont21d(op, a, b, FALSE)*/
        _49cont21d(93, _a_51312, _b_51313, _9FALSE_442);
        goto LC; // [4758] 7737
L85: 

        /** emit.e:1356			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 1) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26816 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26816);
        _26817 = (object)*(((s1_ptr)_2)->base + 3);
        _26816 = NOVALUE;
        if (IS_ATOM_INT(_26817)) {
            _26818 = (_26817 == 2);
        }
        else {
            _26818 = binary_op(EQUALS, _26817, 2);
        }
        _26817 = NOVALUE;
        if (IS_ATOM_INT(_26818)) {
            if (_26818 == 0) {
                goto L86; // [4781] 4842
            }
        }
        else {
            if (DBL_PTR(_26818)->dbl == 0.0) {
                goto L86; // [4781] 4842
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26820 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26820);
        _26821 = (object)*(((s1_ptr)_2)->base + 1);
        _26820 = NOVALUE;
        if (_26821 == 1)
        _26822 = 1;
        else if (IS_ATOM_INT(_26821) && IS_ATOM_INT(1))
        _26822 = 0;
        else
        _26822 = (compare(_26821, 1) == 0);
        _26821 = NOVALUE;
        if (_26822 == 0)
        {
            _26822 = NOVALUE;
            goto L86; // [4802] 4842
        }
        else{
            _26822 = NOVALUE;
        }

        /** emit.e:1357				op = PLUS1*/
        _op_51310 = 93;

        /** emit.e:1358				emit_opcode(op)*/
        _49emit_opcode(93);

        /** emit.e:1359				emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1360				emit_addr(0)*/
        _49emit_addr(0);

        /** emit.e:1361				cont21d(op, a, b, FALSE)*/
        _49cont21d(93, _a_51312, _b_51313, _9FALSE_442);
        goto LC; // [4839] 7737
L86: 

        /** emit.e:1363				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1364				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1365				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [4861] 7737

        /** emit.e:1368		case rw:MULTIPLY then*/
        case 13:

        /** emit.e:1370			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1371			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1372			if a < 1 or b < 1 then*/
        _26825 = (_a_51312 < 1);
        if (_26825 != 0) {
            goto L87; // [4887] 4900
        }
        _26827 = (_b_51313 < 1);
        if (_26827 == 0)
        {
            DeRef(_26827);
            _26827 = NOVALUE;
            goto L88; // [4896] 4921
        }
        else{
            DeRef(_26827);
            _26827 = NOVALUE;
        }
L87: 

        /** emit.e:1373				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1374				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1375				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [4918] 7737
L88: 

        /** emit.e:1377			elsif SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26828 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26828);
        _26829 = (object)*(((s1_ptr)_2)->base + 3);
        _26828 = NOVALUE;
        if (IS_ATOM_INT(_26829)) {
            _26830 = (_26829 == 2);
        }
        else {
            _26830 = binary_op(EQUALS, _26829, 2);
        }
        _26829 = NOVALUE;
        if (IS_ATOM_INT(_26830)) {
            if (_26830 == 0) {
                goto L89; // [4941] 5002
            }
        }
        else {
            if (DBL_PTR(_26830)->dbl == 0.0) {
                goto L89; // [4941] 5002
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26832 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26832);
        _26833 = (object)*(((s1_ptr)_2)->base + 1);
        _26832 = NOVALUE;
        if (_26833 == 2)
        _26834 = 1;
        else if (IS_ATOM_INT(_26833) && IS_ATOM_INT(2))
        _26834 = 0;
        else
        _26834 = (compare(_26833, 2) == 0);
        _26833 = NOVALUE;
        if (_26834 == 0)
        {
            _26834 = NOVALUE;
            goto L89; // [4962] 5002
        }
        else{
            _26834 = NOVALUE;
        }

        /** emit.e:1379				op = PLUS*/
        _op_51310 = 11;

        /** emit.e:1380				emit_opcode(op)*/
        _49emit_opcode(11);

        /** emit.e:1381				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1382				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1383				cont21d(op, a, b, FALSE)*/
        _49cont21d(11, _a_51312, _b_51313, _9FALSE_442);
        goto LC; // [4999] 7737
L89: 

        /** emit.e:1385			elsif SymTab[a][S_MODE] = M_CONSTANT and equal(SymTab[a][S_OBJ], 2) then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26835 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26835);
        _26836 = (object)*(((s1_ptr)_2)->base + 3);
        _26835 = NOVALUE;
        if (IS_ATOM_INT(_26836)) {
            _26837 = (_26836 == 2);
        }
        else {
            _26837 = binary_op(EQUALS, _26836, 2);
        }
        _26836 = NOVALUE;
        if (IS_ATOM_INT(_26837)) {
            if (_26837 == 0) {
                goto L8A; // [5022] 5083
            }
        }
        else {
            if (DBL_PTR(_26837)->dbl == 0.0) {
                goto L8A; // [5022] 5083
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26839 = (object)*(((s1_ptr)_2)->base + _a_51312);
        _2 = (object)SEQ_PTR(_26839);
        _26840 = (object)*(((s1_ptr)_2)->base + 1);
        _26839 = NOVALUE;
        if (_26840 == 2)
        _26841 = 1;
        else if (IS_ATOM_INT(_26840) && IS_ATOM_INT(2))
        _26841 = 0;
        else
        _26841 = (compare(_26840, 2) == 0);
        _26840 = NOVALUE;
        if (_26841 == 0)
        {
            _26841 = NOVALUE;
            goto L8A; // [5043] 5083
        }
        else{
            _26841 = NOVALUE;
        }

        /** emit.e:1386				op = PLUS*/
        _op_51310 = 11;

        /** emit.e:1387				emit_opcode(op)*/
        _49emit_opcode(11);

        /** emit.e:1388				emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1389				emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1390				cont21d(op, a, b, FALSE)*/
        _49cont21d(11, _a_51312, _b_51313, _9FALSE_442);
        goto LC; // [5080] 7737
L8A: 

        /** emit.e:1393				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1394				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1395				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [5102] 7737

        /** emit.e:1399		case rw:DIVIDE then*/
        case 14:

        /** emit.e:1400			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1401			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        _26843 = (_b_51313 > 0);
        if (_26843 == 0) {
            _26844 = 0;
            goto L8B; // [5121] 5147
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26845 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26845);
        _26846 = (object)*(((s1_ptr)_2)->base + 3);
        _26845 = NOVALUE;
        if (IS_ATOM_INT(_26846)) {
            _26847 = (_26846 == 2);
        }
        else {
            _26847 = binary_op(EQUALS, _26846, 2);
        }
        _26846 = NOVALUE;
        if (IS_ATOM_INT(_26847))
        _26844 = (_26847 != 0);
        else
        _26844 = DBL_PTR(_26847)->dbl != 0.0;
L8B: 
        if (_26844 == 0) {
            goto L8C; // [5147] 5218
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26849 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26849);
        _26850 = (object)*(((s1_ptr)_2)->base + 1);
        _26849 = NOVALUE;
        if (_26850 == 2)
        _26851 = 1;
        else if (IS_ATOM_INT(_26850) && IS_ATOM_INT(2))
        _26851 = 0;
        else
        _26851 = (compare(_26850, 2) == 0);
        _26850 = NOVALUE;
        if (_26851 == 0)
        {
            _26851 = NOVALUE;
            goto L8C; // [5168] 5218
        }
        else{
            _26851 = NOVALUE;
        }

        /** emit.e:1402				op = DIV2*/
        _op_51310 = 98;

        /** emit.e:1403				emit_opcode(op)*/
        _49emit_opcode(98);

        /** emit.e:1404				emit_addr(Pop()) -- n.b. "a" hasn't been set*/
        _26852 = _49Pop();
        _49emit_addr(_26852);
        _26852 = NOVALUE;

        /** emit.e:1405				a = 0*/
        _a_51312 = 0;

        /** emit.e:1406				emit_addr(0)*/
        _49emit_addr(0);

        /** emit.e:1407				cont21d(op, a, b, FALSE)  -- could have fractional result*/
        _49cont21d(98, 0, _b_51313, _9FALSE_442);
        goto LC; // [5215] 7737
L8C: 

        /** emit.e:1409				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1410				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [5232] 7737

        /** emit.e:1413		case FLOOR then*/
        case 83:

        /** emit.e:1414			if previous_op = rw:DIVIDE then*/
        if (_39previous_op_16913 != 14)
        goto L8D; // [5242] 5290

        /** emit.e:1415				op = FLOOR_DIV*/
        _op_51310 = 63;

        /** emit.e:1416				backpatch(length(Code) - 3, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26854 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26854 = 1;
        }
        _26855 = _26854 - 3;
        _26854 = NOVALUE;
        _49backpatch(_26855, 63);
        _26855 = NOVALUE;

        /** emit.e:1417				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1418				last_op = op*/
        _49last_op_51269 = 63;

        /** emit.e:1419				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [5287] 7737
L8D: 

        /** emit.e:1421			elsif previous_op = DIV2 then*/
        if (_39previous_op_16913 != 98)
        goto L8E; // [5296] 5383

        /** emit.e:1422				op = FLOOR_DIV2*/
        _op_51310 = 66;

        /** emit.e:1423				backpatch(length(Code) - 3, op)*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26857 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26857 = 1;
        }
        _26858 = _26857 - 3;
        _26857 = NOVALUE;
        _49backpatch(_26858, 66);
        _26858 = NOVALUE;

        /** emit.e:1424				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1425				if IsInteger(Code[$-2]) then*/
        if (IS_SEQUENCE(_39Code_16903)){
                _26859 = SEQ_PTR(_39Code_16903)->length;
        }
        else {
            _26859 = 1;
        }
        _26860 = _26859 - 2;
        _26859 = NOVALUE;
        _2 = (object)SEQ_PTR(_39Code_16903);
        _26861 = (object)*(((s1_ptr)_2)->base + _26860);
        Ref(_26861);
        _26862 = _49IsInteger(_26861);
        _26861 = NOVALUE;
        if (_26862 == 0) {
            DeRef(_26862);
            _26862 = NOVALUE;
            goto L8F; // [5350] 5370
        }
        else {
            if (!IS_ATOM_INT(_26862) && DBL_PTR(_26862)->dbl == 0.0){
                DeRef(_26862);
                _26862 = NOVALUE;
                goto L8F; // [5350] 5370
            }
            DeRef(_26862);
            _26862 = NOVALUE;
        }
        DeRef(_26862);
        _26862 = NOVALUE;

        /** emit.e:1426					TempInteger(Top()) --mark temp as integer type*/

        /** emit.e:145		return cg_stack[cgi]*/
        DeRef(_Top_inlined_Top_at_5480_52411);
        _2 = (object)SEQ_PTR(_49cg_stack_50387);
        _Top_inlined_Top_at_5480_52411 = (object)*(((s1_ptr)_2)->base + _49cgi_50388);
        Ref(_Top_inlined_Top_at_5480_52411);
        Ref(_Top_inlined_Top_at_5480_52411);
        _49TempInteger(_Top_inlined_Top_at_5480_52411);
L8F: 

        /** emit.e:1428				last_op = op*/
        _49last_op_51269 = _op_51310;

        /** emit.e:1429				last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [5380] 7737
L8E: 

        /** emit.e:1431				cont11ii(op, TRUE)*/
        _49cont11ii(_op_51310, _9TRUE_444);
        goto LC; // [5392] 7737

        /** emit.e:1437		case MINUS, rw:APPEND, PREPEND, COMPARE, EQUAL,*/
        case 10:
        case 35:
        case 57:
        case 76:
        case 153:
        case 154:
        case 15:
        case 32:
        case 111:
        case 133:
        case 53:
        case 167:
        case 194:
        case 198:
        case 199:
        case 204:

        /** emit.e:1440			cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [5436] 7737

        /** emit.e:1442		case SC2_NULL then  -- correct the stack - we aren't emitting anything*/
        case 145:

        /** emit.e:1443			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1444			TempKeep(c)*/
        _49TempKeep(_c_51314);

        /** emit.e:1445			b = Pop()  -- remove SC1's temp*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1446			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1447			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;

        /** emit.e:1448			last_op = last_op_backup*/
        _49last_op_51269 = _last_op_backup_51328;

        /** emit.e:1449			last_pc = last_pc_backup*/
        _49last_pc_51270 = _last_pc_backup_51327;
        goto LC; // [5483] 7737

        /** emit.e:1452		case SC2_AND, SC2_OR then*/
        case 142:
        case 144:

        /** emit.e:1453			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1454			emit_addr(Pop())*/
        _26865 = _49Pop();
        _49emit_addr(_26865);
        _26865 = NOVALUE;

        /** emit.e:1455			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1456			TempKeep(c)*/
        _49TempKeep(_c_51314);

        /** emit.e:1457			emit_addr(c) -- target*/
        _49emit_addr(_c_51314);

        /** emit.e:1458			TempInteger(c)*/
        _49TempInteger(_c_51314);

        /** emit.e:1459			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1460			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [5538] 7737

        /** emit.e:1463		case MEM_COPY, MEM_SET, PRINTF then*/
        case 130:
        case 131:
        case 38:

        /** emit.e:1464			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1465			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1466			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1467			emit_addr(Pop())*/
        _26869 = _49Pop();
        _49emit_addr(_26869);
        _26869 = NOVALUE;

        /** emit.e:1468			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1469			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1470			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [5592] 7737

        /** emit.e:1473		case RHS_SLICE, FIND, MATCH, FIND_FROM, MATCH_FROM, SPLICE, INSERT, REMOVE, OPEN then*/
        case 46:
        case 77:
        case 78:
        case 176:
        case 177:
        case 190:
        case 191:
        case 200:
        case 37:

        /** emit.e:1474			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1475			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1476			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1477			emit_addr(Pop())*/
        _26872 = _49Pop();
        _49emit_addr(_26872);
        _26872 = NOVALUE;

        /** emit.e:1478			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1479			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1480			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1481			if op = FIND or op = FIND_FROM or op = OPEN then*/
        _26874 = (_op_51310 == 77);
        if (_26874 != 0) {
            _26875 = 1;
            goto L90; // [5667] 5681
        }
        _26876 = (_op_51310 == 176);
        _26875 = (_26876 != 0);
L90: 
        if (_26875 != 0) {
            goto L91; // [5681] 5696
        }
        _26878 = (_op_51310 == 37);
        if (_26878 == 0)
        {
            DeRef(_26878);
            _26878 = NOVALUE;
            goto L92; // [5692] 5704
        }
        else{
            DeRef(_26878);
            _26878 = NOVALUE;
        }
L91: 

        /** emit.e:1482				TempInteger( c )*/
        _49TempInteger(_c_51314);
        goto L93; // [5701] 5711
L92: 

        /** emit.e:1484				emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);
L93: 

        /** emit.e:1486			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1487			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1488			emit_addr(c)*/
        _49emit_addr(_c_51314);
        goto LC; // [5728] 7737

        /** emit.e:1491		case CONCAT_N then     -- concatenate 3 or more items*/
        case 157:

        /** emit.e:1492			n = op_info1  -- number of items to concatenate*/
        _n_51323 = _49op_info1_50372;

        /** emit.e:1493			emit_opcode(CONCAT_N)*/
        _49emit_opcode(157);

        /** emit.e:1494			emit(n)*/
        _49emit(_n_51323);

        /** emit.e:1495			for i = 1 to n do*/
        _26879 = _n_51323;
        {
            object _i_52479;
            _i_52479 = 1;
L94: 
            if (_i_52479 > _26879){
                goto L95; // [5758] 5786
            }

            /** emit.e:1496				symtab_index element = Pop()*/
            _element_52482 = _49Pop();
            if (!IS_ATOM_INT(_element_52482)) {
                _1 = (object)(DBL_PTR(_element_52482)->dbl);
                DeRefDS(_element_52482);
                _element_52482 = _1;
            }

            /** emit.e:1497				emit_addr( element )  -- reverse order*/
            _49emit_addr(_element_52482);

            /** emit.e:1498			end for*/
            _i_52479 = _i_52479 + 1;
            goto L94; // [5781] 5765
L95: 
            ;
        }

        /** emit.e:1499			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1500			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1501			emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);

        /** emit.e:1502			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1503			Push(c)*/
        _49Push(_c_51314);
        goto LC; // [5817] 7737

        /** emit.e:1505		case FOR then*/
        case 21:

        /** emit.e:1506			c = Pop() -- increment*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1507			TempKeep(c)*/
        _49TempKeep(_c_51314);

        /** emit.e:1508			ic = IsInteger(c)*/
        _ic_51322 = _49IsInteger(_c_51314);
        if (!IS_ATOM_INT(_ic_51322)) {
            _1 = (object)(DBL_PTR(_ic_51322)->dbl);
            DeRefDS(_ic_51322);
            _ic_51322 = _1;
        }

        /** emit.e:1509			if c < 1 or*/
        _26884 = (_c_51314 < 1);
        if (_26884 != 0) {
            goto L96; // [5849] 5928
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26886 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26886);
        _26887 = (object)*(((s1_ptr)_2)->base + 3);
        _26886 = NOVALUE;
        if (IS_ATOM_INT(_26887)) {
            _26888 = (_26887 == 1);
        }
        else {
            _26888 = binary_op(EQUALS, _26887, 1);
        }
        _26887 = NOVALUE;
        if (IS_ATOM_INT(_26888)) {
            if (_26888 == 0) {
                DeRef(_26889);
                _26889 = 0;
                goto L97; // [5871] 5897
            }
        }
        else {
            if (DBL_PTR(_26888)->dbl == 0.0) {
                DeRef(_26889);
                _26889 = 0;
                goto L97; // [5871] 5897
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26890 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26890);
        _26891 = (object)*(((s1_ptr)_2)->base + 4);
        _26890 = NOVALUE;
        if (IS_ATOM_INT(_26891)) {
            _26892 = (_26891 != 2);
        }
        else {
            _26892 = binary_op(NOTEQ, _26891, 2);
        }
        _26891 = NOVALUE;
        DeRef(_26889);
        if (IS_ATOM_INT(_26892))
        _26889 = (_26892 != 0);
        else
        _26889 = DBL_PTR(_26892)->dbl != 0.0;
L97: 
        if (_26889 == 0) {
            DeRef(_26893);
            _26893 = 0;
            goto L98; // [5897] 5923
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26894 = (object)*(((s1_ptr)_2)->base + _c_51314);
        _2 = (object)SEQ_PTR(_26894);
        _26895 = (object)*(((s1_ptr)_2)->base + 4);
        _26894 = NOVALUE;
        if (IS_ATOM_INT(_26895)) {
            _26896 = (_26895 != 4);
        }
        else {
            _26896 = binary_op(NOTEQ, _26895, 4);
        }
        _26895 = NOVALUE;
        if (IS_ATOM_INT(_26896))
        _26893 = (_26896 != 0);
        else
        _26893 = DBL_PTR(_26896)->dbl != 0.0;
L98: 
        if (_26893 == 0)
        {
            _26893 = NOVALUE;
            goto L99; // [5924] 5965
        }
        else{
            _26893 = NOVALUE;
        }
L96: 

        /** emit.e:1514				emit_opcode(ASSIGN)*/
        _49emit_opcode(18);

        /** emit.e:1515				emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1516				c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1517				if ic then*/
        if (_ic_51322 == 0)
        {
            goto L9A; // [5950] 5959
        }
        else{
        }

        /** emit.e:1518					TempInteger( c )*/
        _49TempInteger(_c_51314);
L9A: 

        /** emit.e:1520				emit_addr(c)*/
        _49emit_addr(_c_51314);
L99: 

        /** emit.e:1522			b = Pop() -- limit*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1523			TempKeep(b)*/
        _49TempKeep(_b_51313);

        /** emit.e:1524			ib = IsInteger(b)*/
        _ib_51321 = _49IsInteger(_b_51313);
        if (!IS_ATOM_INT(_ib_51321)) {
            _1 = (object)(DBL_PTR(_ib_51321)->dbl);
            DeRefDS(_ib_51321);
            _ib_51321 = _1;
        }

        /** emit.e:1525			if b < 1 or*/
        _26900 = (_b_51313 < 1);
        if (_26900 != 0) {
            goto L9B; // [5991] 6070
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26902 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26902);
        _26903 = (object)*(((s1_ptr)_2)->base + 3);
        _26902 = NOVALUE;
        if (IS_ATOM_INT(_26903)) {
            _26904 = (_26903 == 1);
        }
        else {
            _26904 = binary_op(EQUALS, _26903, 1);
        }
        _26903 = NOVALUE;
        if (IS_ATOM_INT(_26904)) {
            if (_26904 == 0) {
                DeRef(_26905);
                _26905 = 0;
                goto L9C; // [6013] 6039
            }
        }
        else {
            if (DBL_PTR(_26904)->dbl == 0.0) {
                DeRef(_26905);
                _26905 = 0;
                goto L9C; // [6013] 6039
            }
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26906 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26906);
        _26907 = (object)*(((s1_ptr)_2)->base + 4);
        _26906 = NOVALUE;
        if (IS_ATOM_INT(_26907)) {
            _26908 = (_26907 != 2);
        }
        else {
            _26908 = binary_op(NOTEQ, _26907, 2);
        }
        _26907 = NOVALUE;
        DeRef(_26905);
        if (IS_ATOM_INT(_26908))
        _26905 = (_26908 != 0);
        else
        _26905 = DBL_PTR(_26908)->dbl != 0.0;
L9C: 
        if (_26905 == 0) {
            DeRef(_26909);
            _26909 = 0;
            goto L9D; // [6039] 6065
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26910 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26910);
        _26911 = (object)*(((s1_ptr)_2)->base + 4);
        _26910 = NOVALUE;
        if (IS_ATOM_INT(_26911)) {
            _26912 = (_26911 != 4);
        }
        else {
            _26912 = binary_op(NOTEQ, _26911, 4);
        }
        _26911 = NOVALUE;
        if (IS_ATOM_INT(_26912))
        _26909 = (_26912 != 0);
        else
        _26909 = DBL_PTR(_26912)->dbl != 0.0;
L9D: 
        if (_26909 == 0)
        {
            _26909 = NOVALUE;
            goto L9E; // [6066] 6107
        }
        else{
            _26909 = NOVALUE;
        }
L9B: 

        /** emit.e:1530				emit_opcode(ASSIGN)*/
        _49emit_opcode(18);

        /** emit.e:1531				emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1532				b = NewTempSym()*/
        _b_51313 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1533				if ib then*/
        if (_ib_51321 == 0)
        {
            goto L9F; // [6092] 6101
        }
        else{
        }

        /** emit.e:1534					TempInteger( b )*/
        _49TempInteger(_b_51313);
L9F: 

        /** emit.e:1536				emit_addr(b)*/
        _49emit_addr(_b_51313);
L9E: 

        /** emit.e:1538			a = Pop() -- initial value*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1539			if IsInteger(a) and ib and ic then*/
        _26915 = _49IsInteger(_a_51312);
        if (IS_ATOM_INT(_26915)) {
            if (_26915 == 0) {
                DeRef(_26916);
                _26916 = 0;
                goto LA0; // [6120] 6128
            }
        }
        else {
            if (DBL_PTR(_26915)->dbl == 0.0) {
                DeRef(_26916);
                _26916 = 0;
                goto LA0; // [6120] 6128
            }
        }
        DeRef(_26916);
        _26916 = (_ib_51321 != 0);
LA0: 
        if (_26916 == 0) {
            goto LA1; // [6128] 6167
        }
        if (_ic_51322 == 0)
        {
            goto LA1; // [6133] 6167
        }
        else{
        }

        /** emit.e:1540				SymTab[op_info1][S_VTYPE] = integer_type*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_49op_info1_50372 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 15);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _56integer_type_46264;
        DeRef(_1);
        _26918 = NOVALUE;

        /** emit.e:1541				op = FOR_I*/
        _op_51310 = 125;
        goto LA2; // [6164] 6177
LA1: 

        /** emit.e:1543				op = FOR*/
        _op_51310 = 21;
LA2: 

        /** emit.e:1545			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1546			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1547			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1548			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1549			emit_addr(CurrentSub) -- in case recursion check is needed*/
        _49emit_addr(_39CurrentSub_16823);

        /** emit.e:1550			Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1551			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1552			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6221] 7737

        /** emit.e:1555		case ENDFOR_GENERAL, ENDFOR_INT_UP1 then  -- all ENDFORs*/
        case 39:
        case 54:

        /** emit.e:1556			emit_opcode(op) -- will be patched at runtime*/
        _49emit_opcode(_op_51310);

        /** emit.e:1557			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1558			emit_addr(op_info2) -- address of top of loop*/
        _49emit_addr(_49op_info2_50373);

        /** emit.e:1559			emit_addr(Pop())    -- limit*/
        _26921 = _49Pop();
        _49emit_addr(_26921);
        _26921 = NOVALUE;

        /** emit.e:1560			emit_addr(op_info1) -- loop var*/
        _49emit_addr(_49op_info1_50372);

        /** emit.e:1561			emit_addr(a)        -- increment - not always used -*/
        _49emit_addr(_a_51312);

        /** emit.e:1563			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6275] 7737

        /** emit.e:1566		case ASSIGN_OP_SUBS, PASSIGN_OP_SUBS then*/
        case 149:
        case 164:

        /** emit.e:1568			b = Pop()      -- rhs value, keep on stack*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1569			TempKeep(b)*/
        _49TempKeep(_b_51313);

        /** emit.e:1571			a = Pop()      -- subscript, keep on stack*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1572			TempKeep(a)*/
        _49TempKeep(_a_51312);

        /** emit.e:1574			c = Pop()      -- lhs sequence, keep on stack*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1575			TempKeep(c)*/
        _49TempKeep(_c_51314);

        /** emit.e:1577			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1578			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1579			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1581			d = NewTempSym()*/
        _d_51315 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_d_51315)) {
            _1 = (object)(DBL_PTR(_d_51315)->dbl);
            DeRefDS(_d_51315);
            _d_51315 = _1;
        }

        /** emit.e:1582			emit_addr(d)   -- place to store result*/
        _49emit_addr(_d_51315);

        /** emit.e:1583			emit_temp( d, NEW_REFERENCE )*/
        _49emit_temp(_d_51315, 1);

        /** emit.e:1585			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1586			Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1587			Push(d)*/
        _49Push(_d_51315);

        /** emit.e:1588			Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1589			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6380] 7737

        /** emit.e:1592		case ASSIGN_SLICE, PASSIGN_SLICE then*/
        case 45:
        case 163:

        /** emit.e:1593			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1594			b = Pop() -- rhs value*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1595			a = Pop() -- 2nd subs*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1596			c = Pop() -- 1st subs*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1597			emit_addr(Pop()) -- sequence*/
        _26929 = _49Pop();
        _49emit_addr(_26929);
        _26929 = NOVALUE;

        /** emit.e:1598			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1599			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1600			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1601			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6444] 7737

        /** emit.e:1604		case REPLACE then*/
        case 201:

        /** emit.e:1605			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1607			b = Pop()  -- source*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1608			a = Pop()  -- replacement*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1609			c = Pop()  -- start of replaced slice*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1610			d = Pop()  -- end of replaced slice*/
        _d_51315 = _49Pop();
        if (!IS_ATOM_INT(_d_51315)) {
            _1 = (object)(DBL_PTR(_d_51315)->dbl);
            DeRefDS(_d_51315);
            _d_51315 = _1;
        }

        /** emit.e:1611			emit_addr(d)*/
        _49emit_addr(_d_51315);

        /** emit.e:1612			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1613			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1614			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1616			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1617			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1618			emit_addr(c)     -- place to store result*/
        _49emit_addr(_c_51314);

        /** emit.e:1619			emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);

        /** emit.e:1620			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;
        goto LC; // [6534] 7737

        /** emit.e:1623		case ASSIGN_OP_SLICE, PASSIGN_OP_SLICE then*/
        case 150:
        case 165:

        /** emit.e:1625			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1627			b = Pop()        -- rhs value not used*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1628			TempKeep(b)*/
        _49TempKeep(_b_51313);

        /** emit.e:1630			a = Pop()        -- 2nd subs*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1631			TempKeep(a)*/
        _49TempKeep(_a_51312);

        /** emit.e:1633			c = Pop()        -- 1st subs*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1634			TempKeep(c)*/
        _49TempKeep(_c_51314);

        /** emit.e:1636			d = Pop()*/
        _d_51315 = _49Pop();
        if (!IS_ATOM_INT(_d_51315)) {
            _1 = (object)(DBL_PTR(_d_51315)->dbl);
            DeRefDS(_d_51315);
            _d_51315 = _1;
        }

        /** emit.e:1637			TempKeep(d)      -- sequence*/
        _49TempKeep(_d_51315);

        /** emit.e:1639			emit_addr(d)*/
        _49emit_addr(_d_51315);

        /** emit.e:1640			Push(d)*/
        _49Push(_d_51315);

        /** emit.e:1642			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1643			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1645			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1646			Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1648			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1649			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1650			emit_addr(c)     -- place to store result*/
        _49emit_addr(_c_51314);

        /** emit.e:1651			emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);

        /** emit.e:1653			Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1654			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6661] 7737

        /** emit.e:1657		case CALL_PROC then*/
        case 136:

        /** emit.e:1658			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1659			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1660			emit_addr(Pop())*/
        _26941 = _49Pop();
        _49emit_addr(_26941);
        _26941 = NOVALUE;

        /** emit.e:1661			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1662			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6699] 7737

        /** emit.e:1664		case CALL_FUNC then*/
        case 137:

        /** emit.e:1665			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1666			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1667			emit_addr(Pop())*/
        _26943 = _49Pop();
        _49emit_addr(_26943);
        _26943 = NOVALUE;

        /** emit.e:1668			emit_addr(b)*/
        _49emit_addr(_b_51313);

        /** emit.e:1669			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1670			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1671			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1672			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1673			emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);
        goto LC; // [6761] 7737

        /** emit.e:1675		case EXIT_BLOCK then*/
        case 206:

        /** emit.e:1676			emit_opcode( op )*/
        _49emit_opcode(_op_51310);

        /** emit.e:1677			emit_addr( Pop() )*/
        _26945 = _49Pop();
        _49emit_addr(_26945);
        _26945 = NOVALUE;

        /** emit.e:1678			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6787] 7737

        /** emit.e:1680		case RETURNP then*/
        case 29:

        /** emit.e:1681			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1682			emit_addr(CurrentSub)*/
        _49emit_addr(_39CurrentSub_16823);

        /** emit.e:1683			emit_addr(top_block())*/
        _26946 = _66top_block(0);
        _49emit_addr(_26946);
        _26946 = NOVALUE;

        /** emit.e:1684			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6821] 7737

        /** emit.e:1686		case RETURNF then*/
        case 28:

        /** emit.e:1687			clear_temp( Top() )*/

        /** emit.e:145		return cg_stack[cgi]*/
        DeRef(_Top_inlined_Top_at_7035_52629);
        _2 = (object)SEQ_PTR(_49cg_stack_50387);
        _Top_inlined_Top_at_7035_52629 = (object)*(((s1_ptr)_2)->base + _49cgi_50388);
        Ref(_Top_inlined_Top_at_7035_52629);
        Ref(_Top_inlined_Top_at_7035_52629);
        _49clear_temp(_Top_inlined_Top_at_7035_52629);

        /** emit.e:1688			flush_temps()*/
        RefDS(_21928);
        _49flush_temps(_21928);

        /** emit.e:1689			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1690			emit_addr(CurrentSub)*/
        _49emit_addr(_39CurrentSub_16823);

        /** emit.e:1691			emit_addr(Least_block())*/
        _26947 = _66Least_block();
        _49emit_addr(_26947);
        _26947 = NOVALUE;

        /** emit.e:1692			emit_addr(Pop())*/
        _26948 = _49Pop();
        _49emit_addr(_26948);
        _26948 = NOVALUE;

        /** emit.e:1693			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6883] 7737

        /** emit.e:1695		case RETURNT then*/
        case 34:

        /** emit.e:1696			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1697			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [6901] 7737

        /** emit.e:1699		case DATE, TIME, SPACE_USED, GET_KEY, TASK_LIST,*/
        case 69:
        case 70:
        case 75:
        case 79:
        case 172:
        case 100:
        case 183:

        /** emit.e:1701			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1702			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1703			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;

        /** emit.e:1704			if op = GET_KEY then  -- it's in op_result as integer*/
        if (_op_51310 != 79)
        goto LA3; // [6943] 6955

        /** emit.e:1705				TempInteger(c)*/
        _49TempInteger(_c_51314);
        goto LA4; // [6952] 6962
LA3: 

        /** emit.e:1707				emit_temp( c, NEW_REFERENCE )*/
        _49emit_temp(_c_51314, 1);
LA4: 

        /** emit.e:1709			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1710			emit_addr(c)*/
        _49emit_addr(_c_51314);
        goto LC; // [6972] 7737

        /** emit.e:1712		case CLOSE, ABORT, CALL, DELETE_OBJECT then*/
        case 86:
        case 126:
        case 129:
        case 205:

        /** emit.e:1713			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1714			emit_addr(Pop())*/
        _26951 = _49Pop();
        _49emit_addr(_26951);
        _26951 = NOVALUE;

        /** emit.e:1715			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7004] 7737

        /** emit.e:1717		case POWER then*/
        case 72:

        /** emit.e:1719			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1720			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1721			if b > 0 and SymTab[b][S_MODE] = M_CONSTANT and equal(SymTab[b][S_OBJ], 2) then*/
        _26954 = (_b_51313 > 0);
        if (_26954 == 0) {
            _26955 = 0;
            goto LA5; // [7030] 7056
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26956 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26956);
        _26957 = (object)*(((s1_ptr)_2)->base + 3);
        _26956 = NOVALUE;
        if (IS_ATOM_INT(_26957)) {
            _26958 = (_26957 == 2);
        }
        else {
            _26958 = binary_op(EQUALS, _26957, 2);
        }
        _26957 = NOVALUE;
        if (IS_ATOM_INT(_26958))
        _26955 = (_26958 != 0);
        else
        _26955 = DBL_PTR(_26958)->dbl != 0.0;
LA5: 
        if (_26955 == 0) {
            goto LA6; // [7056] 7113
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _26960 = (object)*(((s1_ptr)_2)->base + _b_51313);
        _2 = (object)SEQ_PTR(_26960);
        _26961 = (object)*(((s1_ptr)_2)->base + 1);
        _26960 = NOVALUE;
        if (_26961 == 2)
        _26962 = 1;
        else if (IS_ATOM_INT(_26961) && IS_ATOM_INT(2))
        _26962 = 0;
        else
        _26962 = (compare(_26961, 2) == 0);
        _26961 = NOVALUE;
        if (_26962 == 0)
        {
            _26962 = NOVALUE;
            goto LA6; // [7077] 7113
        }
        else{
            _26962 = NOVALUE;
        }

        /** emit.e:1723				op = rw:MULTIPLY*/
        _op_51310 = 13;

        /** emit.e:1724				emit_opcode(op)*/
        _49emit_opcode(13);

        /** emit.e:1725				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1726				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1727				cont21d(op, a, b, FALSE)*/
        _49cont21d(13, _a_51312, _b_51313, _9FALSE_442);
        goto LC; // [7110] 7737
LA6: 

        /** emit.e:1729				Push(a)*/
        _49Push(_a_51312);

        /** emit.e:1730				Push(b)*/
        _49Push(_b_51313);

        /** emit.e:1731				cont21ii(op, FALSE)*/
        _49cont21ii(_op_51310, _9FALSE_442);
        goto LC; // [7132] 7737

        /** emit.e:1735		case TYPE_CHECK then*/
        case 65:

        /** emit.e:1736			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1737			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1738			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7157] 7737

        /** emit.e:1741		case DOLLAR then*/
        case -22:

        /** emit.e:1742			if current_sequence[$] < 0 or SymTab[current_sequence[$]][S_SCOPE] = SC_UNDEFINED then*/
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26964 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26964 = 1;
        }
        _2 = (object)SEQ_PTR(_49current_sequence_50380);
        _26965 = (object)*(((s1_ptr)_2)->base + _26964);
        if (IS_ATOM_INT(_26965)) {
            _26966 = (_26965 < 0);
        }
        else {
            _26966 = binary_op(LESS, _26965, 0);
        }
        _26965 = NOVALUE;
        if (IS_ATOM_INT(_26966)) {
            if (_26966 != 0) {
                goto LA7; // [7178] 7214
            }
        }
        else {
            if (DBL_PTR(_26966)->dbl != 0.0) {
                goto LA7; // [7178] 7214
            }
        }
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26968 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26968 = 1;
        }
        _2 = (object)SEQ_PTR(_49current_sequence_50380);
        _26969 = (object)*(((s1_ptr)_2)->base + _26968);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_26969)){
            _26970 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_26969)->dbl));
        }
        else{
            _26970 = (object)*(((s1_ptr)_2)->base + _26969);
        }
        _2 = (object)SEQ_PTR(_26970);
        _26971 = (object)*(((s1_ptr)_2)->base + 4);
        _26970 = NOVALUE;
        if (IS_ATOM_INT(_26971)) {
            _26972 = (_26971 == 9);
        }
        else {
            _26972 = binary_op(EQUALS, _26971, 9);
        }
        _26971 = NOVALUE;
        if (_26972 == 0) {
            DeRef(_26972);
            _26972 = NOVALUE;
            goto LA8; // [7210] 7284
        }
        else {
            if (!IS_ATOM_INT(_26972) && DBL_PTR(_26972)->dbl == 0.0){
                DeRef(_26972);
                _26972 = NOVALUE;
                goto LA8; // [7210] 7284
            }
            DeRef(_26972);
            _26972 = NOVALUE;
        }
        DeRef(_26972);
        _26972 = NOVALUE;
LA7: 

        /** emit.e:1743				if lhs_ptr and length(current_sequence) = 1 then*/
        if (_49lhs_ptr_50382 == 0) {
            goto LA9; // [7218] 7247
        }
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26974 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26974 = 1;
        }
        _26975 = (_26974 == 1);
        _26974 = NOVALUE;
        if (_26975 == 0)
        {
            DeRef(_26975);
            _26975 = NOVALUE;
            goto LA9; // [7232] 7247
        }
        else{
            DeRef(_26975);
            _26975 = NOVALUE;
        }

        /** emit.e:1744					c = PLENGTH*/
        _c_51314 = 160;
        goto LAA; // [7244] 7257
LA9: 

        /** emit.e:1746					c = LENGTH*/
        _c_51314 = 42;
LAA: 

        /** emit.e:1748				c = - new_forward_reference( VARIABLE, current_sequence[$], c )*/
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26976 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26976 = 1;
        }
        _2 = (object)SEQ_PTR(_49current_sequence_50380);
        _26977 = (object)*(((s1_ptr)_2)->base + _26976);
        Ref(_26977);
        _26978 = _41new_forward_reference(-100, _26977, _c_51314);
        _26977 = NOVALUE;
        if (IS_ATOM_INT(_26978)) {
            if ((uintptr_t)_26978 == (uintptr_t)HIGH_BITS){
                _c_51314 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _c_51314 = - _26978;
            }
        }
        else {
            _c_51314 = unary_op(UMINUS, _26978);
        }
        DeRef(_26978);
        _26978 = NOVALUE;
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }
        goto LAB; // [7281] 7298
LA8: 

        /** emit.e:1750				c = current_sequence[$]*/
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26980 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26980 = 1;
        }
        _2 = (object)SEQ_PTR(_49current_sequence_50380);
        _c_51314 = (object)*(((s1_ptr)_2)->base + _26980);
        if (!IS_ATOM_INT(_c_51314)){
            _c_51314 = (object)DBL_PTR(_c_51314)->dbl;
        }
LAB: 

        /** emit.e:1754			if lhs_ptr and length(current_sequence) = 1 then*/
        if (_49lhs_ptr_50382 == 0) {
            goto LAC; // [7302] 7329
        }
        if (IS_SEQUENCE(_49current_sequence_50380)){
                _26983 = SEQ_PTR(_49current_sequence_50380)->length;
        }
        else {
            _26983 = 1;
        }
        _26984 = (_26983 == 1);
        _26983 = NOVALUE;
        if (_26984 == 0)
        {
            DeRef(_26984);
            _26984 = NOVALUE;
            goto LAC; // [7316] 7329
        }
        else{
            DeRef(_26984);
            _26984 = NOVALUE;
        }

        /** emit.e:1755				emit_opcode(PLENGTH)*/
        _49emit_opcode(160);
        goto LAD; // [7326] 7337
LAC: 

        /** emit.e:1757				emit_opcode(LENGTH)*/
        _49emit_opcode(42);
LAD: 

        /** emit.e:1760			emit_addr( c )*/
        _49emit_addr(_c_51314);

        /** emit.e:1762			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1763			TempInteger(c)*/
        _49TempInteger(_c_51314);

        /** emit.e:1764			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1765			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1766			assignable = FALSE -- it wouldn't be assigned anyway*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7372] 7737

        /** emit.e:1769		case TASK_SELF then*/
        case 170:

        /** emit.e:1770			c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1771			Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1772			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1773			emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1774			assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;
        goto LC; // [7408] 7737

        /** emit.e:1776		case SWITCH then*/
        case 185:

        /** emit.e:1777			emit_opcode( op )*/
        _49emit_opcode(_op_51310);

        /** emit.e:1778			c = Pop()*/
        _c_51314 = _49Pop();
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1779			b = Pop()*/
        _b_51313 = _49Pop();
        if (!IS_ATOM_INT(_b_51313)) {
            _1 = (object)(DBL_PTR(_b_51313)->dbl);
            DeRefDS(_b_51313);
            _b_51313 = _1;
        }

        /** emit.e:1780			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1781			emit_addr( a ) -- Switch Expr*/
        _49emit_addr(_a_51312);

        /** emit.e:1782			emit_addr( b ) -- Case values*/
        _49emit_addr(_b_51313);

        /** emit.e:1783			emit_addr( c ) -- Jump table*/
        _49emit_addr(_c_51314);

        /** emit.e:1785			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7462] 7737

        /** emit.e:1787		case CASE then*/
        case 186:

        /** emit.e:1789			emit_opcode( op )*/
        _49emit_opcode(_op_51310);

        /** emit.e:1790			emit( cg_stack[cgi] )  -- the case index*/
        _2 = (object)SEQ_PTR(_49cg_stack_50387);
        _26990 = (object)*(((s1_ptr)_2)->base + _49cgi_50388);
        Ref(_26990);
        _49emit(_26990);
        _26990 = NOVALUE;

        /** emit.e:1791			cgi -= 1*/
        _49cgi_50388 = _49cgi_50388 - 1;
        goto LC; // [7494] 7737

        /** emit.e:1794		case PLATFORM then*/
        case 155:

        /** emit.e:1795			if BIND and shroud_only then*/
        if (_39BIND_16443 == 0) {
            goto LAE; // [7504] 7552
        }
        if (_39shroud_only_16813 == 0)
        {
            goto LAE; // [7511] 7552
        }
        else{
        }

        /** emit.e:1797				c = NewTempSym()*/
        _c_51314 = _56NewTempSym(0);
        if (!IS_ATOM_INT(_c_51314)) {
            _1 = (object)(DBL_PTR(_c_51314)->dbl);
            DeRefDS(_c_51314);
            _c_51314 = _1;
        }

        /** emit.e:1798				TempInteger(c)*/
        _49TempInteger(_c_51314);

        /** emit.e:1799				Push(c)*/
        _49Push(_c_51314);

        /** emit.e:1800				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1801				emit_addr(c)*/
        _49emit_addr(_c_51314);

        /** emit.e:1802				assignable = TRUE*/
        _49assignable_50390 = _9TRUE_444;
        goto LC; // [7549] 7737
LAE: 

        /** emit.e:1806				n = host_platform()*/
        _n_51323 = _43host_platform();
        if (!IS_ATOM_INT(_n_51323)) {
            _1 = (object)(DBL_PTR(_n_51323)->dbl);
            DeRefDS(_n_51323);
            _n_51323 = _1;
        }

        /** emit.e:1807				Push(NewIntSym(n))*/
        _26995 = _56NewIntSym(_n_51323);
        _49Push(_26995);
        _26995 = NOVALUE;

        /** emit.e:1808				assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7576] 7737

        /** emit.e:1812		case PROFILE, TASK_SUSPEND then*/
        case 151:
        case 171:

        /** emit.e:1813			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1814			emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1815			emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1816			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7608] 7737

        /** emit.e:1818		case TRACE then*/
        case 64:

        /** emit.e:1819			a = Pop()*/
        _a_51312 = _49Pop();
        if (!IS_ATOM_INT(_a_51312)) {
            _1 = (object)(DBL_PTR(_a_51312)->dbl);
            DeRefDS(_a_51312);
            _a_51312 = _1;
        }

        /** emit.e:1820			if OpTrace then*/
        if (_39OpTrace_16884 == 0)
        {
            goto LAF; // [7625] 7671
        }
        else{
        }

        /** emit.e:1822				emit_opcode(op)*/
        _49emit_opcode(_op_51310);

        /** emit.e:1823				emit_addr(a)*/
        _49emit_addr(_a_51312);

        /** emit.e:1824				if TRANSLATE then*/
        if (_39TRANSLATE_16440 == 0)
        {
            goto LB0; // [7642] 7670
        }
        else{
        }

        /** emit.e:1825					if not trace_called then*/
        if (_49trace_called_50375 != 0)
        goto LB1; // [7649] 7660

        /** emit.e:1826						Warning(217,0)*/
        RefDS(_21928);
        _52Warning(217, 0, _21928);
LB1: 

        /** emit.e:1828					trace_called = TRUE*/
        _49trace_called_50375 = _9TRUE_444;
LB0: 
LAF: 

        /** emit.e:1831			assignable = FALSE*/
        _49assignable_50390 = _9FALSE_442;
        goto LC; // [7678] 7737

        /** emit.e:1833		case REF_TEMP then*/
        case 207:

        /** emit.e:1835			emit_opcode( REF_TEMP )*/
        _49emit_opcode(207);

        /** emit.e:1836			emit_addr( Pop() )*/
        _26999 = _49Pop();
        _49emit_addr(_26999);
        _26999 = NOVALUE;
        goto LC; // [7699] 7737

        /** emit.e:1838		case DEREF_TEMP then*/
        case 208:

        /** emit.e:1839			emit_opcode( DEREF_TEMP )*/
        _49emit_opcode(208);

        /** emit.e:1840			emit_addr( Pop() )*/
        _27000 = _49Pop();
        _49emit_addr(_27000);
        _27000 = NOVALUE;
        goto LC; // [7720] 7737

        /** emit.e:1842		case else*/
        default:

        /** emit.e:1843			InternalErr(259, {op})*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _op_51310;
        _27001 = MAKE_SEQ(_1);
        _52InternalErr(259, _27001);
        _27001 = NOVALUE;
    ;}LC: 

    /** emit.e:1847		previous_op = op*/
    _39previous_op_16913 = _op_51310;

    /** emit.e:1848		inlined = 0*/
    _49inlined_51288 = 0;

    /** emit.e:1850	end procedure*/
    DeRef(_obj_51324);
    DeRef(_elements_51325);
    DeRef(_element_vals_51326);
    DeRef(_26860);
    _26860 = NOVALUE;
    DeRef(_26738);
    _26738 = NOVALUE;
    DeRef(_26703);
    _26703 = NOVALUE;
    DeRef(_26487);
    _26487 = NOVALUE;
    DeRef(_26414);
    _26414 = NOVALUE;
    DeRef(_26650);
    _26650 = NOVALUE;
    _26743 = NOVALUE;
    DeRef(_26900);
    _26900 = NOVALUE;
    DeRef(_26818);
    _26818 = NOVALUE;
    DeRef(_26565);
    _26565 = NOVALUE;
    DeRef(_26463);
    _26463 = NOVALUE;
    DeRef(_26685);
    _26685 = NOVALUE;
    DeRef(_26696);
    _26696 = NOVALUE;
    DeRef(_26659);
    _26659 = NOVALUE;
    DeRef(_26954);
    _26954 = NOVALUE;
    _26530 = NOVALUE;
    _26535 = NOVALUE;
    DeRef(_26472);
    _26472 = NOVALUE;
    DeRef(_26627);
    _26627 = NOVALUE;
    DeRef(_26620);
    _26620 = NOVALUE;
    DeRef(_26418);
    _26418 = NOVALUE;
    DeRef(_26874);
    _26874 = NOVALUE;
    DeRef(_26586);
    _26586 = NOVALUE;
    DeRef(_26784);
    _26784 = NOVALUE;
    DeRef(_26884);
    _26884 = NOVALUE;
    DeRef(_26908);
    _26908 = NOVALUE;
    _26436 = NOVALUE;
    DeRef(_26746);
    _26746 = NOVALUE;
    DeRef(_26672);
    _26672 = NOVALUE;
    DeRef(_26420);
    _26420 = NOVALUE;
    DeRef(_26466);
    _26466 = NOVALUE;
    DeRef(_26533);
    _26533 = NOVALUE;
    DeRef(_26904);
    _26904 = NOVALUE;
    _26489 = NOVALUE;
    DeRef(_26412);
    _26412 = NOVALUE;
    DeRef(_26512);
    _26512 = NOVALUE;
    DeRef(_26453);
    _26453 = NOVALUE;
    DeRef(_26629);
    _26629 = NOVALUE;
    DeRef(_26683);
    _26683 = NOVALUE;
    DeRef(_26811);
    _26811 = NOVALUE;
    DeRef(_26592);
    _26592 = NOVALUE;
    DeRef(_26806);
    _26806 = NOVALUE;
    DeRef(_26888);
    _26888 = NOVALUE;
    DeRef(_26624);
    _26624 = NOVALUE;
    DeRef(_26915);
    _26915 = NOVALUE;
    _26969 = NOVALUE;
    DeRef(_26608);
    _26608 = NOVALUE;
    DeRef(_26646);
    _26646 = NOVALUE;
    DeRef(_26468);
    _26468 = NOVALUE;
    DeRef(_26966);
    _26966 = NOVALUE;
    DeRef(_26837);
    _26837 = NOVALUE;
    _26741 = NOVALUE;
    DeRef(_26825);
    _26825 = NOVALUE;
    DeRef(_26700);
    _26700 = NOVALUE;
    DeRef(_26708);
    _26708 = NOVALUE;
    DeRef(_26606);
    _26606 = NOVALUE;
    DeRef(_26655);
    _26655 = NOVALUE;
    DeRef(_26526);
    _26526 = NOVALUE;
    DeRef(_26896);
    _26896 = NOVALUE;
    DeRef(_26847);
    _26847 = NOVALUE;
    DeRef(_26726);
    _26726 = NOVALUE;
    DeRef(_26679);
    _26679 = NOVALUE;
    DeRef(_26734);
    _26734 = NOVALUE;
    _26506 = NOVALUE;
    DeRef(_26892);
    _26892 = NOVALUE;
    DeRef(_26876);
    _26876 = NOVALUE;
    DeRef(_26830);
    _26830 = NOVALUE;
    DeRef(_26730);
    _26730 = NOVALUE;
    DeRef(_26706);
    _26706 = NOVALUE;
    DeRef(_26674);
    _26674 = NOVALUE;
    DeRef(_26843);
    _26843 = NOVALUE;
    DeRef(_26456);
    _26456 = NOVALUE;
    DeRef(_26958);
    _26958 = NOVALUE;
    DeRef(_26501);
    _26501 = NOVALUE;
    _26504 = NOVALUE;
    DeRef(_26416);
    _26416 = NOVALUE;
    DeRef(_26633);
    _26633 = NOVALUE;
    DeRef(_26598);
    _26598 = NOVALUE;
    DeRef(_26724);
    _26724 = NOVALUE;
    DeRef(_26491);
    _26491 = NOVALUE;
    DeRef(_26665);
    _26665 = NOVALUE;
    DeRef(_26552);
    _26552 = NOVALUE;
    DeRef(_26448);
    _26448 = NOVALUE;
    DeRef(_26520);
    _26520 = NOVALUE;
    DeRef(_26912);
    _26912 = NOVALUE;
    DeRef(_26661);
    _26661 = NOVALUE;
    DeRef(_26602);
    _26602 = NOVALUE;
    return;
    ;
}


void _49emit_assign_op(object _op_52788)
{
    object _0, _1, _2;
    

    /** emit.e:1854		if op = PLUS_EQUALS then*/
    if (_op_52788 != 515)
    goto L1; // [7] 21

    /** emit.e:1855			emit_op(PLUS)*/
    _49emit_op(11);
    goto L2; // [18] 86
L1: 

    /** emit.e:1856		elsif op = MINUS_EQUALS then*/
    if (_op_52788 != 516)
    goto L3; // [25] 39

    /** emit.e:1857			emit_op(MINUS)*/
    _49emit_op(10);
    goto L2; // [36] 86
L3: 

    /** emit.e:1858		elsif op = MULTIPLY_EQUALS then*/
    if (_op_52788 != 517)
    goto L4; // [43] 55

    /** emit.e:1859			emit_op(rw:MULTIPLY)*/
    _49emit_op(13);
    goto L2; // [52] 86
L4: 

    /** emit.e:1860		elsif op = DIVIDE_EQUALS then*/
    if (_op_52788 != 518)
    goto L5; // [59] 71

    /** emit.e:1861			emit_op(rw:DIVIDE)*/
    _49emit_op(14);
    goto L2; // [68] 86
L5: 

    /** emit.e:1862		elsif op = CONCAT_EQUALS then*/
    if (_op_52788 != 519)
    goto L6; // [75] 85

    /** emit.e:1863			emit_op(rw:CONCAT)*/
    _49emit_op(15);
L6: 
L2: 

    /** emit.e:1865	end procedure*/
    return;
    ;
}


void _49StartSourceLine(object _sl_52808, object _dup_ok_52809, object _emit_coverage_52810)
{
    object _line_span_52813 = NOVALUE;
    object _27023 = NOVALUE;
    object _27021 = NOVALUE;
    object _27020 = NOVALUE;
    object _27019 = NOVALUE;
    object _27018 = NOVALUE;
    object _27017 = NOVALUE;
    object _27015 = NOVALUE;
    object _27012 = NOVALUE;
    object _27010 = NOVALUE;
    object _27009 = NOVALUE;
    object _27008 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:1873		if gline_number = LastLineNumber then*/
    if (_39gline_number_16820 != _63LastLineNumber_25185)
    goto L1; // [13] 66

    /** emit.e:1874			if length(LineTable) then*/
    if (IS_SEQUENCE(_39LineTable_16904)){
            _27008 = SEQ_PTR(_39LineTable_16904)->length;
    }
    else {
        _27008 = 1;
    }
    if (_27008 == 0)
    {
        _27008 = NOVALUE;
        goto L2; // [24] 55
    }
    else{
        _27008 = NOVALUE;
    }

    /** emit.e:1875				if dup_ok then*/
    if (_dup_ok_52809 == 0)
    {
        goto L3; // [29] 47
    }
    else{
    }

    /** emit.e:1876					emit_op( STARTLINE )*/
    _49emit_op(58);

    /** emit.e:1877					emit_addr( gline_number )*/
    _49emit_addr(_39gline_number_16820);
L3: 

    /** emit.e:1879				return -- ignore duplicates*/
    return;
    goto L4; // [52] 65
L2: 

    /** emit.e:1882				sl = FALSE -- top-level new statement to execute on same line*/
    _sl_52808 = _9FALSE_442;
L4: 
L1: 

    /** emit.e:1885		LastLineNumber = gline_number*/
    _63LastLineNumber_25185 = _39gline_number_16820;

    /** emit.e:1888		line_span = gline_number - SymTab[CurrentSub][S_FIRSTLINE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27009 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_27009);
    if (!IS_ATOM_INT(_39S_FIRSTLINE_16510)){
        _27010 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FIRSTLINE_16510)->dbl));
    }
    else{
        _27010 = (object)*(((s1_ptr)_2)->base + _39S_FIRSTLINE_16510);
    }
    _27009 = NOVALUE;
    if (IS_ATOM_INT(_27010)) {
        _line_span_52813 = _39gline_number_16820 - _27010;
    }
    else {
        _line_span_52813 = binary_op(MINUS, _39gline_number_16820, _27010);
    }
    _27010 = NOVALUE;
    if (!IS_ATOM_INT(_line_span_52813)) {
        _1 = (object)(DBL_PTR(_line_span_52813)->dbl);
        DeRefDS(_line_span_52813);
        _line_span_52813 = _1;
    }

    /** emit.e:1889		while length(LineTable) < line_span do*/
L5: 
    if (IS_SEQUENCE(_39LineTable_16904)){
            _27012 = SEQ_PTR(_39LineTable_16904)->length;
    }
    else {
        _27012 = 1;
    }
    if (_27012 >= _line_span_52813)
    goto L6; // [109] 128

    /** emit.e:1890			LineTable = append(LineTable, -1) -- filler*/
    Append(&_39LineTable_16904, _39LineTable_16904, -1);

    /** emit.e:1891		end while*/
    goto L5; // [125] 104
L6: 

    /** emit.e:1892		LineTable = append(LineTable, length(Code))*/
    if (IS_SEQUENCE(_39Code_16903)){
            _27015 = SEQ_PTR(_39Code_16903)->length;
    }
    else {
        _27015 = 1;
    }
    Append(&_39LineTable_16904, _39LineTable_16904, _27015);
    _27015 = NOVALUE;

    /** emit.e:1894		if sl and (TRANSLATE or (OpTrace or OpProfileStatement)) then*/
    if (_sl_52808 == 0) {
        goto L7; // [145] 190
    }
    if (_39TRANSLATE_16440 != 0) {
        DeRef(_27018);
        _27018 = 1;
        goto L8; // [151] 171
    }
    if (_39OpTrace_16884 != 0) {
        _27019 = 1;
        goto L9; // [157] 167
    }
    _27019 = (_39OpProfileStatement_16886 != 0);
L9: 
    DeRef(_27018);
    _27018 = (_27019 != 0);
L8: 
    if (_27018 == 0)
    {
        _27018 = NOVALUE;
        goto L7; // [172] 190
    }
    else{
        _27018 = NOVALUE;
    }

    /** emit.e:1896			emit_op(STARTLINE)*/
    _49emit_op(58);

    /** emit.e:1897			emit_addr(gline_number)*/
    _49emit_addr(_39gline_number_16820);
L7: 

    /** emit.e:1901		if (sl and emit_coverage = COVERAGE_INCLUDE) or emit_coverage = COVERAGE_OVERRIDE then*/
    if (_sl_52808 == 0) {
        _27020 = 0;
        goto LA; // [192] 206
    }
    _27021 = (_emit_coverage_52810 == 2);
    _27020 = (_27021 != 0);
LA: 
    if (_27020 != 0) {
        goto LB; // [206] 221
    }
    _27023 = (_emit_coverage_52810 == 3);
    if (_27023 == 0)
    {
        DeRef(_27023);
        _27023 = NOVALUE;
        goto LC; // [217] 229
    }
    else{
        DeRef(_27023);
        _27023 = NOVALUE;
    }
LB: 

    /** emit.e:1902			include_line( gline_number )*/
    _53include_line(_39gline_number_16820);
LC: 

    /** emit.e:1905	end procedure*/
    DeRef(_27021);
    _27021 = NOVALUE;
    return;
    ;
}


object _49has_forward_params(object _sym_52867)
{
    object _27029 = NOVALUE;
    object _27028 = NOVALUE;
    object _27027 = NOVALUE;
    object _27026 = NOVALUE;
    object _27025 = NOVALUE;
    object _27024 = NOVALUE;
    object _0, _1, _2;
    

    /** emit.e:1908		for i = cgi - (SymTab[sym][S_NUM_ARGS]-1) to cgi do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _27024 = (object)*(((s1_ptr)_2)->base + _sym_52867);
    _2 = (object)SEQ_PTR(_27024);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _27025 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _27025 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _27024 = NOVALUE;
    if (IS_ATOM_INT(_27025)) {
        _27026 = _27025 - 1;
        if ((object)((uintptr_t)_27026 +(uintptr_t) HIGH_BITS) >= 0){
            _27026 = NewDouble((eudouble)_27026);
        }
    }
    else {
        _27026 = binary_op(MINUS, _27025, 1);
    }
    _27025 = NOVALUE;
    if (IS_ATOM_INT(_27026)) {
        _27027 = _49cgi_50388 - _27026;
        if ((object)((uintptr_t)_27027 +(uintptr_t) HIGH_BITS) >= 0){
            _27027 = NewDouble((eudouble)_27027);
        }
    }
    else {
        _27027 = binary_op(MINUS, _49cgi_50388, _27026);
    }
    DeRef(_27026);
    _27026 = NOVALUE;
    _27028 = _49cgi_50388;
    {
        object _i_52869;
        Ref(_27027);
        _i_52869 = _27027;
L1: 
        if (binary_op_a(GREATER, _i_52869, _27028)){
            goto L2; // [32] 65
        }

        /** emit.e:1909			if cg_stack[i] < 0 then*/
        _2 = (object)SEQ_PTR(_49cg_stack_50387);
        if (!IS_ATOM_INT(_i_52869)){
            _27029 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_i_52869)->dbl));
        }
        else{
            _27029 = (object)*(((s1_ptr)_2)->base + _i_52869);
        }
        if (binary_op_a(GREATEREQ, _27029, 0)){
            _27029 = NOVALUE;
            goto L3; // [47] 58
        }
        _27029 = NOVALUE;

        /** emit.e:1910				return 1*/
        DeRef(_i_52869);
        DeRef(_27027);
        _27027 = NOVALUE;
        return 1;
L3: 

        /** emit.e:1912		end for*/
        _0 = _i_52869;
        if (IS_ATOM_INT(_i_52869)) {
            _i_52869 = _i_52869 + 1;
            if ((object)((uintptr_t)_i_52869 +(uintptr_t) HIGH_BITS) >= 0){
                _i_52869 = NewDouble((eudouble)_i_52869);
            }
        }
        else {
            _i_52869 = binary_op_a(PLUS, _i_52869, 1);
        }
        DeRef(_0);
        goto L1; // [60] 39
L2: 
        ;
        DeRef(_i_52869);
    }

    /** emit.e:1913		return 0*/
    DeRef(_27027);
    _27027 = NOVALUE;
    return 0;
    ;
}



// 0xA02F8A5B
