// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _13sprint(object _x_9780)
{
    object _s_9781 = NOVALUE;
    object _5358 = NOVALUE;
    object _5356 = NOVALUE;
    object _5355 = NOVALUE;
    object _5352 = NOVALUE;
    object _5351 = NOVALUE;
    object _5349 = NOVALUE;
    object _5348 = NOVALUE;
    object _5347 = NOVALUE;
    object _5346 = NOVALUE;
    object _5345 = NOVALUE;
    object _5344 = NOVALUE;
    object _5343 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:93		if atom(x) then*/
    _5343 = IS_ATOM(_x_9780);
    if (_5343 == 0)
    {
        _5343 = NOVALUE;
        goto L1; // [6] 22
    }
    else{
        _5343 = NOVALUE;
    }

    /** text.e:94			return sprintf("%.10g", x)*/
    _5344 = EPrintf(-9999999, _5023, _x_9780);
    DeRef(_x_9780);
    DeRef(_s_9781);
    return _5344;
    goto L2; // [19] 137
L1: 

    /** text.e:96			s = "{"*/
    RefDS(_1423);
    DeRef(_s_9781);
    _s_9781 = _1423;

    /** text.e:97			for i = 1 to length(x) do*/
    if (IS_SEQUENCE(_x_9780)){
            _5345 = SEQ_PTR(_x_9780)->length;
    }
    else {
        _5345 = 1;
    }
    {
        object _i_9787;
        _i_9787 = 1;
L3: 
        if (_i_9787 > _5345){
            goto L4; // [34] 98
        }

        /** text.e:98				if atom(x[i]) then*/
        _2 = (object)SEQ_PTR(_x_9780);
        _5346 = (object)*(((s1_ptr)_2)->base + _i_9787);
        _5347 = IS_ATOM(_5346);
        _5346 = NOVALUE;
        if (_5347 == 0)
        {
            _5347 = NOVALUE;
            goto L5; // [50] 70
        }
        else{
            _5347 = NOVALUE;
        }

        /** text.e:99					s &= sprintf("%.10g", x[i])*/
        _2 = (object)SEQ_PTR(_x_9780);
        _5348 = (object)*(((s1_ptr)_2)->base + _i_9787);
        _5349 = EPrintf(-9999999, _5023, _5348);
        _5348 = NOVALUE;
        Concat((object_ptr)&_s_9781, _s_9781, _5349);
        DeRefDS(_5349);
        _5349 = NOVALUE;
        goto L6; // [67] 85
L5: 

        /** text.e:101					s &= sprint(x[i])*/
        _2 = (object)SEQ_PTR(_x_9780);
        _5351 = (object)*(((s1_ptr)_2)->base + _i_9787);
        Ref(_5351);
        _5352 = _13sprint(_5351);
        _5351 = NOVALUE;
        if (IS_SEQUENCE(_s_9781) && IS_ATOM(_5352)) {
            Ref(_5352);
            Append(&_s_9781, _s_9781, _5352);
        }
        else if (IS_ATOM(_s_9781) && IS_SEQUENCE(_5352)) {
        }
        else {
            Concat((object_ptr)&_s_9781, _s_9781, _5352);
        }
        DeRef(_5352);
        _5352 = NOVALUE;
L6: 

        /** text.e:103				s &= ','*/
        Append(&_s_9781, _s_9781, 44);

        /** text.e:104			end for*/
        _i_9787 = _i_9787 + 1;
        goto L3; // [93] 41
L4: 
        ;
    }

    /** text.e:105			if s[$] = ',' then*/
    if (IS_SEQUENCE(_s_9781)){
            _5355 = SEQ_PTR(_s_9781)->length;
    }
    else {
        _5355 = 1;
    }
    _2 = (object)SEQ_PTR(_s_9781);
    _5356 = (object)*(((s1_ptr)_2)->base + _5355);
    if (binary_op_a(NOTEQ, _5356, 44)){
        _5356 = NOVALUE;
        goto L7; // [107] 123
    }
    _5356 = NOVALUE;

    /** text.e:106				s[$] = '}'*/
    if (IS_SEQUENCE(_s_9781)){
            _5358 = SEQ_PTR(_s_9781)->length;
    }
    else {
        _5358 = 1;
    }
    _2 = (object)SEQ_PTR(_s_9781);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _s_9781 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _5358);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 125;
    DeRef(_1);
    goto L8; // [120] 130
L7: 

    /** text.e:108				s &= '}'*/
    Append(&_s_9781, _s_9781, 125);
L8: 

    /** text.e:110			return s*/
    DeRef(_x_9780);
    DeRef(_5344);
    _5344 = NOVALUE;
    return _s_9781;
L2: 
    ;
}


object _13trim(object _source_9850, object _what_9851, object _ret_index_9852)
{
    object _rpos_9853 = NOVALUE;
    object _lpos_9854 = NOVALUE;
    object _5399 = NOVALUE;
    object _5397 = NOVALUE;
    object _5395 = NOVALUE;
    object _5393 = NOVALUE;
    object _5390 = NOVALUE;
    object _5389 = NOVALUE;
    object _5384 = NOVALUE;
    object _5383 = NOVALUE;
    object _5381 = NOVALUE;
    object _5379 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:243		if atom(what) then*/
    _5379 = 0;
    if (_5379 == 0)
    {
        _5379 = NOVALUE;
        goto L1; // [10] 20
    }
    else{
        _5379 = NOVALUE;
    }

    /** text.e:244			what = {what}*/
    _0 = _what_9851;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_what_9851);
    ((intptr_t*)_2)[1] = _what_9851;
    _what_9851 = MAKE_SEQ(_1);
    DeRefDSi(_0);
L1: 

    /** text.e:247		lpos = 1*/
    _lpos_9854 = 1;

    /** text.e:248		while lpos <= length(source) do*/
L2: 
    if (IS_SEQUENCE(_source_9850)){
            _5381 = SEQ_PTR(_source_9850)->length;
    }
    else {
        _5381 = 1;
    }
    if (_lpos_9854 > _5381)
    goto L3; // [33] 67

    /** text.e:249			if not find(source[lpos], what) then*/
    _2 = (object)SEQ_PTR(_source_9850);
    _5383 = (object)*(((s1_ptr)_2)->base + _lpos_9854);
    _5384 = find_from(_5383, _what_9851, 1);
    _5383 = NOVALUE;
    if (_5384 != 0)
    goto L4; // [48] 56
    _5384 = NOVALUE;

    /** text.e:250				exit*/
    goto L3; // [53] 67
L4: 

    /** text.e:252			lpos += 1*/
    _lpos_9854 = _lpos_9854 + 1;

    /** text.e:253		end while*/
    goto L2; // [64] 30
L3: 

    /** text.e:255		rpos = length(source)*/
    if (IS_SEQUENCE(_source_9850)){
            _rpos_9853 = SEQ_PTR(_source_9850)->length;
    }
    else {
        _rpos_9853 = 1;
    }

    /** text.e:256		while rpos > lpos do*/
L5: 
    if (_rpos_9853 <= _lpos_9854)
    goto L6; // [77] 111

    /** text.e:257			if not find(source[rpos], what) then*/
    _2 = (object)SEQ_PTR(_source_9850);
    _5389 = (object)*(((s1_ptr)_2)->base + _rpos_9853);
    _5390 = find_from(_5389, _what_9851, 1);
    _5389 = NOVALUE;
    if (_5390 != 0)
    goto L7; // [92] 100
    _5390 = NOVALUE;

    /** text.e:258				exit*/
    goto L6; // [97] 111
L7: 

    /** text.e:260			rpos -= 1*/
    _rpos_9853 = _rpos_9853 - 1;

    /** text.e:261		end while*/
    goto L5; // [108] 77
L6: 

    /** text.e:263		if ret_index then*/
    if (_ret_index_9852 == 0)
    {
        goto L8; // [113] 129
    }
    else{
    }

    /** text.e:264			return {lpos, rpos}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _lpos_9854;
    ((intptr_t *)_2)[2] = _rpos_9853;
    _5393 = MAKE_SEQ(_1);
    DeRefDS(_source_9850);
    DeRef(_what_9851);
    return _5393;
    goto L9; // [126] 180
L8: 

    /** text.e:266			if lpos = 1 then*/
    if (_lpos_9854 != 1)
    goto LA; // [131] 152

    /** text.e:267				if rpos = length(source) then*/
    if (IS_SEQUENCE(_source_9850)){
            _5395 = SEQ_PTR(_source_9850)->length;
    }
    else {
        _5395 = 1;
    }
    if (_rpos_9853 != _5395)
    goto LB; // [140] 151

    /** text.e:268					return source*/
    DeRef(_what_9851);
    DeRef(_5393);
    _5393 = NOVALUE;
    return _source_9850;
LB: 
LA: 

    /** text.e:271			if lpos > length(source) then*/
    if (IS_SEQUENCE(_source_9850)){
            _5397 = SEQ_PTR(_source_9850)->length;
    }
    else {
        _5397 = 1;
    }
    if (_lpos_9854 <= _5397)
    goto LC; // [157] 168

    /** text.e:272				return {}*/
    RefDS(_5);
    DeRefDS(_source_9850);
    DeRef(_what_9851);
    DeRef(_5393);
    _5393 = NOVALUE;
    return _5;
LC: 

    /** text.e:274			return source[lpos..rpos]*/
    rhs_slice_target = (object_ptr)&_5399;
    RHS_Slice(_source_9850, _lpos_9854, _rpos_9853);
    DeRefDS(_source_9850);
    DeRef(_what_9851);
    DeRef(_5393);
    _5393 = NOVALUE;
    return _5399;
L9: 
    ;
}


object _13lower(object _x_10044)
{
    object _5509 = NOVALUE;
    object _5508 = NOVALUE;
    object _5507 = NOVALUE;
    object _5506 = NOVALUE;
    object _5505 = NOVALUE;
    object _5502 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:535		if length(lower_case_SET) != 0 then*/
    _5502 = 0;

    /** text.e:539		ifdef WINDOWS then*/

    /** text.e:542			return x + (x >= 'A' and x <= 'Z') * TO_LOWER*/
    if (IS_ATOM_INT(_x_10044)) {
        _5505 = (_x_10044 >= 65);
    }
    else {
        _5505 = binary_op(GREATEREQ, _x_10044, 65);
    }
    if (IS_ATOM_INT(_x_10044)) {
        _5506 = (_x_10044 <= 90);
    }
    else {
        _5506 = binary_op(LESSEQ, _x_10044, 90);
    }
    if (IS_ATOM_INT(_5505) && IS_ATOM_INT(_5506)) {
        _5507 = (_5505 != 0 && _5506 != 0);
    }
    else {
        _5507 = binary_op(AND, _5505, _5506);
    }
    DeRef(_5505);
    _5505 = NOVALUE;
    DeRef(_5506);
    _5506 = NOVALUE;
    if (IS_ATOM_INT(_5507)) {
        if (_5507 == (short)_5507){
            _5508 = _5507 * 32;
        }
        else{
            _5508 = NewDouble(_5507 * (eudouble)32);
        }
    }
    else {
        _5508 = binary_op(MULTIPLY, _5507, 32);
    }
    DeRef(_5507);
    _5507 = NOVALUE;
    if (IS_ATOM_INT(_x_10044) && IS_ATOM_INT(_5508)) {
        _5509 = _x_10044 + _5508;
        if ((object)((uintptr_t)_5509 + (uintptr_t)HIGH_BITS) >= 0){
            _5509 = NewDouble((eudouble)_5509);
        }
    }
    else {
        _5509 = binary_op(PLUS, _x_10044, _5508);
    }
    DeRef(_5508);
    _5508 = NOVALUE;
    DeRef(_x_10044);
    return _5509;
    ;
}


object _13upper(object _x_10056)
{
    object _5517 = NOVALUE;
    object _5516 = NOVALUE;
    object _5515 = NOVALUE;
    object _5514 = NOVALUE;
    object _5513 = NOVALUE;
    object _5510 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:581		if length(upper_case_SET) != 0 then*/
    _5510 = 0;

    /** text.e:584		ifdef WINDOWS then*/

    /** text.e:587			return x - (x >= 'a' and x <= 'z') * TO_LOWER*/
    if (IS_ATOM_INT(_x_10056)) {
        _5513 = (_x_10056 >= 97);
    }
    else {
        _5513 = binary_op(GREATEREQ, _x_10056, 97);
    }
    if (IS_ATOM_INT(_x_10056)) {
        _5514 = (_x_10056 <= 122);
    }
    else {
        _5514 = binary_op(LESSEQ, _x_10056, 122);
    }
    if (IS_ATOM_INT(_5513) && IS_ATOM_INT(_5514)) {
        _5515 = (_5513 != 0 && _5514 != 0);
    }
    else {
        _5515 = binary_op(AND, _5513, _5514);
    }
    DeRef(_5513);
    _5513 = NOVALUE;
    DeRef(_5514);
    _5514 = NOVALUE;
    if (IS_ATOM_INT(_5515)) {
        if (_5515 == (short)_5515){
            _5516 = _5515 * 32;
        }
        else{
            _5516 = NewDouble(_5515 * (eudouble)32);
        }
    }
    else {
        _5516 = binary_op(MULTIPLY, _5515, 32);
    }
    DeRef(_5515);
    _5515 = NOVALUE;
    if (IS_ATOM_INT(_x_10056) && IS_ATOM_INT(_5516)) {
        _5517 = _x_10056 - _5516;
        if ((object)((uintptr_t)_5517 +(uintptr_t) HIGH_BITS) >= 0){
            _5517 = NewDouble((eudouble)_5517);
        }
    }
    else {
        _5517 = binary_op(MINUS, _x_10056, _5516);
    }
    DeRef(_5516);
    _5516 = NOVALUE;
    DeRef(_x_10056);
    return _5517;
    ;
}


object _13proper(object _x_10068)
{
    object _pos_10069 = NOVALUE;
    object _inword_10070 = NOVALUE;
    object _convert_10071 = NOVALUE;
    object _res_10072 = NOVALUE;
    object _5546 = NOVALUE;
    object _5545 = NOVALUE;
    object _5544 = NOVALUE;
    object _5543 = NOVALUE;
    object _5542 = NOVALUE;
    object _5541 = NOVALUE;
    object _5540 = NOVALUE;
    object _5539 = NOVALUE;
    object _5538 = NOVALUE;
    object _5537 = NOVALUE;
    object _5535 = NOVALUE;
    object _5534 = NOVALUE;
    object _5530 = NOVALUE;
    object _5527 = NOVALUE;
    object _5524 = NOVALUE;
    object _5521 = NOVALUE;
    object _5520 = NOVALUE;
    object _5519 = NOVALUE;
    object _5518 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:633		inword = 0	-- Initially not in a word*/
    _inword_10070 = 0;

    /** text.e:634		convert = 1	-- Initially convert text*/
    _convert_10071 = 1;

    /** text.e:635		res = x		-- Work on a copy of the original, in case we need to restore.*/
    RefDS(_x_10068);
    DeRef(_res_10072);
    _res_10072 = _x_10068;

    /** text.e:636		for i = 1 to length(res) do*/
    if (IS_SEQUENCE(_res_10072)){
            _5518 = SEQ_PTR(_res_10072)->length;
    }
    else {
        _5518 = 1;
    }
    {
        object _i_10074;
        _i_10074 = 1;
L1: 
        if (_i_10074 > _5518){
            goto L2; // [25] 298
        }

        /** text.e:637			if integer(res[i]) then*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5519 = (object)*(((s1_ptr)_2)->base + _i_10074);
        if (IS_ATOM_INT(_5519))
        _5520 = 1;
        else if (IS_ATOM_DBL(_5519))
        _5520 = IS_ATOM_INT(DoubleToInt(_5519));
        else
        _5520 = 0;
        _5519 = NOVALUE;
        if (_5520 == 0)
        {
            _5520 = NOVALUE;
            goto L3; // [41] 209
        }
        else{
            _5520 = NOVALUE;
        }

        /** text.e:638				if convert then*/
        if (_convert_10071 == 0)
        {
            goto L4; // [46] 291
        }
        else{
        }

        /** text.e:640					pos = types:t_upper(res[i])*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5521 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5521);
        _pos_10069 = _9t_upper(_5521);
        _5521 = NOVALUE;
        if (!IS_ATOM_INT(_pos_10069)) {
            _1 = (object)(DBL_PTR(_pos_10069)->dbl);
            DeRefDS(_pos_10069);
            _pos_10069 = _1;
        }

        /** text.e:641					if pos = 0 then*/
        if (_pos_10069 != 0)
        goto L5; // [63] 175

        /** text.e:643						pos = types:t_lower(res[i])*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5524 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5524);
        _pos_10069 = _9t_lower(_5524);
        _5524 = NOVALUE;
        if (!IS_ATOM_INT(_pos_10069)) {
            _1 = (object)(DBL_PTR(_pos_10069)->dbl);
            DeRefDS(_pos_10069);
            _pos_10069 = _1;
        }

        /** text.e:644						if pos = 0 then*/
        if (_pos_10069 != 0)
        goto L6; // [81] 138

        /** text.e:647							pos = t_digit(res[i])*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5527 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5527);
        _pos_10069 = _9t_digit(_5527);
        _5527 = NOVALUE;
        if (!IS_ATOM_INT(_pos_10069)) {
            _1 = (object)(DBL_PTR(_pos_10069)->dbl);
            DeRefDS(_pos_10069);
            _pos_10069 = _1;
        }

        /** text.e:648							if pos = 0 then*/
        if (_pos_10069 != 0)
        goto L4; // [99] 291

        /** text.e:650								pos = t_specword(res[i])*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5530 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5530);
        _pos_10069 = _9t_specword(_5530);
        _5530 = NOVALUE;
        if (!IS_ATOM_INT(_pos_10069)) {
            _1 = (object)(DBL_PTR(_pos_10069)->dbl);
            DeRefDS(_pos_10069);
            _pos_10069 = _1;
        }

        /** text.e:651								if pos then*/
        if (_pos_10069 == 0)
        {
            goto L7; // [117] 128
        }
        else{
        }

        /** text.e:652									inword = 1*/
        _inword_10070 = 1;
        goto L4; // [125] 291
L7: 

        /** text.e:654									inword = 0*/
        _inword_10070 = 0;
        goto L4; // [135] 291
L6: 

        /** text.e:658							if inword = 0 then*/
        if (_inword_10070 != 0)
        goto L4; // [140] 291

        /** text.e:660								if pos <= 26 then*/
        if (_pos_10069 > 26)
        goto L8; // [146] 165

        /** text.e:661									res[i] = upper(res[i]) -- Convert to uppercase*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5534 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5534);
        _5535 = _13upper(_5534);
        _5534 = NOVALUE;
        _2 = (object)SEQ_PTR(_res_10072);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_10072 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10074);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5535;
        if( _1 != _5535 ){
            DeRef(_1);
        }
        _5535 = NOVALUE;
L8: 

        /** text.e:663								inword = 1	-- now we are in a word*/
        _inword_10070 = 1;
        goto L4; // [172] 291
L5: 

        /** text.e:667						if inword = 1 then*/
        if (_inword_10070 != 1)
        goto L9; // [177] 198

        /** text.e:669							res[i] = lower(res[i]) -- Convert to lowercase*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5537 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5537);
        _5538 = _13lower(_5537);
        _5537 = NOVALUE;
        _2 = (object)SEQ_PTR(_res_10072);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_10072 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10074);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5538;
        if( _1 != _5538 ){
            DeRef(_1);
        }
        _5538 = NOVALUE;
        goto L4; // [195] 291
L9: 

        /** text.e:671							inword = 1	-- now we are in a word*/
        _inword_10070 = 1;
        goto L4; // [206] 291
L3: 

        /** text.e:678				if convert then*/
        if (_convert_10071 == 0)
        {
            goto LA; // [211] 263
        }
        else{
        }

        /** text.e:680					for j = 1 to i-1 do*/
        _5539 = _i_10074 - 1;
        {
            object _j_10114;
            _j_10114 = 1;
LB: 
            if (_j_10114 > _5539){
                goto LC; // [220] 257
            }

            /** text.e:681						if atom(x[j]) then*/
            _2 = (object)SEQ_PTR(_x_10068);
            _5540 = (object)*(((s1_ptr)_2)->base + _j_10114);
            _5541 = IS_ATOM(_5540);
            _5540 = NOVALUE;
            if (_5541 == 0)
            {
                _5541 = NOVALUE;
                goto LD; // [236] 250
            }
            else{
                _5541 = NOVALUE;
            }

            /** text.e:682							res[j] = x[j]*/
            _2 = (object)SEQ_PTR(_x_10068);
            _5542 = (object)*(((s1_ptr)_2)->base + _j_10114);
            Ref(_5542);
            _2 = (object)SEQ_PTR(_res_10072);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _res_10072 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_10114);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _5542;
            if( _1 != _5542 ){
                DeRef(_1);
            }
            _5542 = NOVALUE;
LD: 

            /** text.e:684					end for*/
            _j_10114 = _j_10114 + 1;
            goto LB; // [252] 227
LC: 
            ;
        }

        /** text.e:686					convert = 0*/
        _convert_10071 = 0;
LA: 

        /** text.e:689				if sequence(res[i]) then*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5543 = (object)*(((s1_ptr)_2)->base + _i_10074);
        _5544 = IS_SEQUENCE(_5543);
        _5543 = NOVALUE;
        if (_5544 == 0)
        {
            _5544 = NOVALUE;
            goto LE; // [272] 290
        }
        else{
            _5544 = NOVALUE;
        }

        /** text.e:690					res[i] = proper(res[i])	-- recursive conversion*/
        _2 = (object)SEQ_PTR(_res_10072);
        _5545 = (object)*(((s1_ptr)_2)->base + _i_10074);
        Ref(_5545);
        _5546 = _13proper(_5545);
        _5545 = NOVALUE;
        _2 = (object)SEQ_PTR(_res_10072);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _res_10072 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10074);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5546;
        if( _1 != _5546 ){
            DeRef(_1);
        }
        _5546 = NOVALUE;
LE: 
L4: 

        /** text.e:693		end for*/
        _i_10074 = _i_10074 + 1;
        goto L1; // [293] 32
L2: 
        ;
    }

    /** text.e:694		return res*/
    DeRefDS(_x_10068);
    DeRef(_5539);
    _5539 = NOVALUE;
    return _res_10072;
    ;
}


object _13quote(object _text_in_10390, object _quote_pair_10391, object _esc_10393, object _sp_10395)
{
    object _5817 = NOVALUE;
    object _5816 = NOVALUE;
    object _5815 = NOVALUE;
    object _5813 = NOVALUE;
    object _5812 = NOVALUE;
    object _5811 = NOVALUE;
    object _5809 = NOVALUE;
    object _5808 = NOVALUE;
    object _5807 = NOVALUE;
    object _5806 = NOVALUE;
    object _5805 = NOVALUE;
    object _5804 = NOVALUE;
    object _5803 = NOVALUE;
    object _5802 = NOVALUE;
    object _5801 = NOVALUE;
    object _5799 = NOVALUE;
    object _5798 = NOVALUE;
    object _5797 = NOVALUE;
    object _5795 = NOVALUE;
    object _5794 = NOVALUE;
    object _5793 = NOVALUE;
    object _5792 = NOVALUE;
    object _5791 = NOVALUE;
    object _5790 = NOVALUE;
    object _5789 = NOVALUE;
    object _5788 = NOVALUE;
    object _5787 = NOVALUE;
    object _5785 = NOVALUE;
    object _5784 = NOVALUE;
    object _5782 = NOVALUE;
    object _5781 = NOVALUE;
    object _5780 = NOVALUE;
    object _5778 = NOVALUE;
    object _5777 = NOVALUE;
    object _5776 = NOVALUE;
    object _5775 = NOVALUE;
    object _5774 = NOVALUE;
    object _5773 = NOVALUE;
    object _5772 = NOVALUE;
    object _5771 = NOVALUE;
    object _5770 = NOVALUE;
    object _5769 = NOVALUE;
    object _5768 = NOVALUE;
    object _5767 = NOVALUE;
    object _5766 = NOVALUE;
    object _5765 = NOVALUE;
    object _5764 = NOVALUE;
    object _5763 = NOVALUE;
    object _5762 = NOVALUE;
    object _5759 = NOVALUE;
    object _5758 = NOVALUE;
    object _5757 = NOVALUE;
    object _5756 = NOVALUE;
    object _5755 = NOVALUE;
    object _5754 = NOVALUE;
    object _5753 = NOVALUE;
    object _5752 = NOVALUE;
    object _5751 = NOVALUE;
    object _5750 = NOVALUE;
    object _5749 = NOVALUE;
    object _5748 = NOVALUE;
    object _5747 = NOVALUE;
    object _5746 = NOVALUE;
    object _5743 = NOVALUE;
    object _5741 = NOVALUE;
    object _5740 = NOVALUE;
    object _5738 = NOVALUE;
    object _5736 = NOVALUE;
    object _5735 = NOVALUE;
    object _5734 = NOVALUE;
    object _5732 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:1118		if length(text_in) = 0 then*/
    if (IS_SEQUENCE(_text_in_10390)){
            _5732 = SEQ_PTR(_text_in_10390)->length;
    }
    else {
        _5732 = 1;
    }
    if (_5732 != 0)
    goto L1; // [10] 21

    /** text.e:1119			return text_in*/
    DeRef(_quote_pair_10391);
    DeRef(_sp_10395);
    return _text_in_10390;
L1: 

    /** text.e:1122		if atom(quote_pair) then*/
    _5734 = IS_ATOM(_quote_pair_10391);
    if (_5734 == 0)
    {
        _5734 = NOVALUE;
        goto L2; // [26] 46
    }
    else{
        _5734 = NOVALUE;
    }

    /** text.e:1123			quote_pair = {{quote_pair}, {quote_pair}}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_10391);
    ((intptr_t*)_2)[1] = _quote_pair_10391;
    _5735 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_quote_pair_10391);
    ((intptr_t*)_2)[1] = _quote_pair_10391;
    _5736 = MAKE_SEQ(_1);
    DeRef(_quote_pair_10391);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5735;
    ((intptr_t *)_2)[2] = _5736;
    _quote_pair_10391 = MAKE_SEQ(_1);
    _5736 = NOVALUE;
    _5735 = NOVALUE;
    goto L3; // [43] 89
L2: 

    /** text.e:1124		elsif length(quote_pair) = 1 then*/
    if (IS_SEQUENCE(_quote_pair_10391)){
            _5738 = SEQ_PTR(_quote_pair_10391)->length;
    }
    else {
        _5738 = 1;
    }
    if (_5738 != 1)
    goto L4; // [51] 72

    /** text.e:1125			quote_pair = {quote_pair[1], quote_pair[1]}*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5740 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5741 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_5741);
    Ref(_5740);
    DeRef(_quote_pair_10391);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5740;
    ((intptr_t *)_2)[2] = _5741;
    _quote_pair_10391 = MAKE_SEQ(_1);
    _5741 = NOVALUE;
    _5740 = NOVALUE;
    goto L3; // [69] 89
L4: 

    /** text.e:1126		elsif length(quote_pair) = 0 then*/
    if (IS_SEQUENCE(_quote_pair_10391)){
            _5743 = SEQ_PTR(_quote_pair_10391)->length;
    }
    else {
        _5743 = 1;
    }
    if (_5743 != 0)
    goto L5; // [77] 88

    /** text.e:1127			quote_pair = {"\"", "\""}*/
    RefDS(_5724);
    RefDS(_5724);
    DeRef(_quote_pair_10391);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5724;
    ((intptr_t *)_2)[2] = _5724;
    _quote_pair_10391 = MAKE_SEQ(_1);
L5: 
L3: 

    /** text.e:1130		if sequence(text_in[1]) then*/
    _2 = (object)SEQ_PTR(_text_in_10390);
    _5746 = (object)*(((s1_ptr)_2)->base + 1);
    _5747 = IS_SEQUENCE(_5746);
    _5746 = NOVALUE;
    if (_5747 == 0)
    {
        _5747 = NOVALUE;
        goto L6; // [98] 166
    }
    else{
        _5747 = NOVALUE;
    }

    /** text.e:1131			for i = 1 to length(text_in) do*/
    if (IS_SEQUENCE(_text_in_10390)){
            _5748 = SEQ_PTR(_text_in_10390)->length;
    }
    else {
        _5748 = 1;
    }
    {
        object _i_10418;
        _i_10418 = 1;
L7: 
        if (_i_10418 > _5748){
            goto L8; // [106] 159
        }

        /** text.e:1132				if sequence(text_in[i]) then*/
        _2 = (object)SEQ_PTR(_text_in_10390);
        _5749 = (object)*(((s1_ptr)_2)->base + _i_10418);
        _5750 = IS_SEQUENCE(_5749);
        _5749 = NOVALUE;
        if (_5750 == 0)
        {
            _5750 = NOVALUE;
            goto L9; // [122] 152
        }
        else{
            _5750 = NOVALUE;
        }

        /** text.e:1133					text_in[i] = quote(text_in[i], quote_pair, esc, sp)*/
        _2 = (object)SEQ_PTR(_text_in_10390);
        _5751 = (object)*(((s1_ptr)_2)->base + _i_10418);
        Ref(_quote_pair_10391);
        DeRef(_5752);
        _5752 = _quote_pair_10391;
        DeRef(_5753);
        _5753 = _esc_10393;
        Ref(_sp_10395);
        DeRef(_5754);
        _5754 = _sp_10395;
        Ref(_5751);
        _5755 = _13quote(_5751, _5752, _5753, _5754);
        _5751 = NOVALUE;
        _5752 = NOVALUE;
        _5753 = NOVALUE;
        _5754 = NOVALUE;
        _2 = (object)SEQ_PTR(_text_in_10390);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _text_in_10390 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_10418);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _5755;
        if( _1 != _5755 ){
            DeRef(_1);
        }
        _5755 = NOVALUE;
L9: 

        /** text.e:1135			end for*/
        _i_10418 = _i_10418 + 1;
        goto L7; // [154] 113
L8: 
        ;
    }

    /** text.e:1137			return text_in*/
    DeRef(_quote_pair_10391);
    DeRef(_sp_10395);
    return _text_in_10390;
L6: 

    /** text.e:1141		for i = 1 to length(sp) do*/
    if (IS_SEQUENCE(_sp_10395)){
            _5756 = SEQ_PTR(_sp_10395)->length;
    }
    else {
        _5756 = 1;
    }
    {
        object _i_10429;
        _i_10429 = 1;
LA: 
        if (_i_10429 > _5756){
            goto LB; // [171] 220
        }

        /** text.e:1142			if find(sp[i], text_in) then*/
        _2 = (object)SEQ_PTR(_sp_10395);
        _5757 = (object)*(((s1_ptr)_2)->base + _i_10429);
        _5758 = find_from(_5757, _text_in_10390, 1);
        _5757 = NOVALUE;
        if (_5758 == 0)
        {
            _5758 = NOVALUE;
            goto LC; // [189] 197
        }
        else{
            _5758 = NOVALUE;
        }

        /** text.e:1143				exit*/
        goto LB; // [194] 220
LC: 

        /** text.e:1146			if i = length(sp) then*/
        if (IS_SEQUENCE(_sp_10395)){
                _5759 = SEQ_PTR(_sp_10395)->length;
        }
        else {
            _5759 = 1;
        }
        if (_i_10429 != _5759)
        goto LD; // [202] 213

        /** text.e:1148				return text_in*/
        DeRef(_quote_pair_10391);
        DeRef(_sp_10395);
        return _text_in_10390;
LD: 

        /** text.e:1150		end for*/
        _i_10429 = _i_10429 + 1;
        goto LA; // [215] 178
LB: 
        ;
    }

    /** text.e:1152		if esc >= 0  then*/
    if (_esc_10393 < 0)
    goto LE; // [222] 561

    /** text.e:1156			if atom(quote_pair[1]) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5762 = (object)*(((s1_ptr)_2)->base + 1);
    _5763 = IS_ATOM(_5762);
    _5762 = NOVALUE;
    if (_5763 == 0)
    {
        _5763 = NOVALUE;
        goto LF; // [235] 253
    }
    else{
        _5763 = NOVALUE;
    }

    /** text.e:1157				quote_pair[1] = {quote_pair[1]}*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5764 = (object)*(((s1_ptr)_2)->base + 1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5764);
    ((intptr_t*)_2)[1] = _5764;
    _5765 = MAKE_SEQ(_1);
    _5764 = NOVALUE;
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_10391 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5765;
    if( _1 != _5765 ){
        DeRef(_1);
    }
    _5765 = NOVALUE;
LF: 

    /** text.e:1159			if atom(quote_pair[2]) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5766 = (object)*(((s1_ptr)_2)->base + 2);
    _5767 = IS_ATOM(_5766);
    _5766 = NOVALUE;
    if (_5767 == 0)
    {
        _5767 = NOVALUE;
        goto L10; // [262] 280
    }
    else{
        _5767 = NOVALUE;
    }

    /** text.e:1160				quote_pair[2] = {quote_pair[2]}*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5768 = (object)*(((s1_ptr)_2)->base + 2);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_5768);
    ((intptr_t*)_2)[1] = _5768;
    _5769 = MAKE_SEQ(_1);
    _5768 = NOVALUE;
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _quote_pair_10391 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5769;
    if( _1 != _5769 ){
        DeRef(_1);
    }
    _5769 = NOVALUE;
L10: 

    /** text.e:1163			if equal(quote_pair[1], quote_pair[2]) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5770 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5771 = (object)*(((s1_ptr)_2)->base + 2);
    if (_5770 == _5771)
    _5772 = 1;
    else if (IS_ATOM_INT(_5770) && IS_ATOM_INT(_5771))
    _5772 = 0;
    else
    _5772 = (compare(_5770, _5771) == 0);
    _5770 = NOVALUE;
    _5771 = NOVALUE;
    if (_5772 == 0)
    {
        _5772 = NOVALUE;
        goto L11; // [294] 372
    }
    else{
        _5772 = NOVALUE;
    }

    /** text.e:1165				if match(quote_pair[1], text_in) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5773 = (object)*(((s1_ptr)_2)->base + 1);
    _5774 = e_match_from(_5773, _text_in_10390, 1);
    _5773 = NOVALUE;
    if (_5774 == 0)
    {
        _5774 = NOVALUE;
        goto L12; // [308] 560
    }
    else{
        _5774 = NOVALUE;
    }

    /** text.e:1166					if match(esc & quote_pair[1], text_in) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5775 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5775)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5775)) {
        Prepend(&_5776, _5775, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5776, _esc_10393, _5775);
    }
    _5775 = NOVALUE;
    _5777 = e_match_from(_5776, _text_in_10390, 1);
    DeRefDS(_5776);
    _5776 = NOVALUE;
    if (_5777 == 0)
    {
        _5777 = NOVALUE;
        goto L13; // [326] 345
    }
    else{
        _5777 = NOVALUE;
    }

    /** text.e:1167						text_in = search:match_replace(esc, text_in, esc & esc)*/
    Concat((object_ptr)&_5778, _esc_10393, _esc_10393);
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_esc_10393, _text_in_10390, _5778, 0);
    DeRefDS(_0);
    _5778 = NOVALUE;
L13: 

    /** text.e:1169					text_in = search:match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5780 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5781 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5781)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5781)) {
        Prepend(&_5782, _5781, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5782, _esc_10393, _5781);
    }
    _5781 = NOVALUE;
    Ref(_5780);
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_5780, _text_in_10390, _5782, 0);
    DeRefDS(_0);
    _5780 = NOVALUE;
    _5782 = NOVALUE;
    goto L12; // [369] 560
L11: 

    /** text.e:1172				if match(quote_pair[1], text_in) or*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5784 = (object)*(((s1_ptr)_2)->base + 1);
    _5785 = e_match_from(_5784, _text_in_10390, 1);
    _5784 = NOVALUE;
    if (_5785 != 0) {
        goto L14; // [383] 401
    }
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5787 = (object)*(((s1_ptr)_2)->base + 2);
    _5788 = e_match_from(_5787, _text_in_10390, 1);
    _5787 = NOVALUE;
    if (_5788 == 0)
    {
        _5788 = NOVALUE;
        goto L15; // [397] 473
    }
    else{
        _5788 = NOVALUE;
    }
L14: 

    /** text.e:1174					if match(esc & quote_pair[1], text_in) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5789 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5789)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5789)) {
        Prepend(&_5790, _5789, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5790, _esc_10393, _5789);
    }
    _5789 = NOVALUE;
    _5791 = e_match_from(_5790, _text_in_10390, 1);
    DeRefDS(_5790);
    _5790 = NOVALUE;
    if (_5791 == 0)
    {
        _5791 = NOVALUE;
        goto L16; // [416] 449
    }
    else{
        _5791 = NOVALUE;
    }

    /** text.e:1175						text_in = search:match_replace(esc & quote_pair[1], text_in, esc & esc & quote_pair[1])*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5792 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5792)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5792)) {
        Prepend(&_5793, _5792, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5793, _esc_10393, _5792);
    }
    _5792 = NOVALUE;
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5794 = (object)*(((s1_ptr)_2)->base + 1);
    {
        object concat_list[3];

        concat_list[0] = _5794;
        concat_list[1] = _esc_10393;
        concat_list[2] = _esc_10393;
        Concat_N((object_ptr)&_5795, concat_list, 3);
    }
    _5794 = NOVALUE;
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_5793, _text_in_10390, _5795, 0);
    DeRefDS(_0);
    _5793 = NOVALUE;
    _5795 = NOVALUE;
L16: 

    /** text.e:1177					text_in = match_replace(quote_pair[1], text_in, esc & quote_pair[1])*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5797 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5798 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5798)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5798)) {
        Prepend(&_5799, _5798, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5799, _esc_10393, _5798);
    }
    _5798 = NOVALUE;
    Ref(_5797);
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_5797, _text_in_10390, _5799, 0);
    DeRefDS(_0);
    _5797 = NOVALUE;
    _5799 = NOVALUE;
L15: 

    /** text.e:1180				if match(quote_pair[2], text_in) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5801 = (object)*(((s1_ptr)_2)->base + 2);
    _5802 = e_match_from(_5801, _text_in_10390, 1);
    _5801 = NOVALUE;
    if (_5802 == 0)
    {
        _5802 = NOVALUE;
        goto L17; // [484] 559
    }
    else{
        _5802 = NOVALUE;
    }

    /** text.e:1181					if match(esc & quote_pair[2], text_in) then*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5803 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5803)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5803)) {
        Prepend(&_5804, _5803, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5804, _esc_10393, _5803);
    }
    _5803 = NOVALUE;
    _5805 = e_match_from(_5804, _text_in_10390, 1);
    DeRefDS(_5804);
    _5804 = NOVALUE;
    if (_5805 == 0)
    {
        _5805 = NOVALUE;
        goto L18; // [502] 535
    }
    else{
        _5805 = NOVALUE;
    }

    /** text.e:1182						text_in = search:match_replace(esc & quote_pair[2], text_in, esc & esc & quote_pair[2])*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5806 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5806)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5806)) {
        Prepend(&_5807, _5806, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5807, _esc_10393, _5806);
    }
    _5806 = NOVALUE;
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5808 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _5808;
        concat_list[1] = _esc_10393;
        concat_list[2] = _esc_10393;
        Concat_N((object_ptr)&_5809, concat_list, 3);
    }
    _5808 = NOVALUE;
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_5807, _text_in_10390, _5809, 0);
    DeRefDS(_0);
    _5807 = NOVALUE;
    _5809 = NOVALUE;
L18: 

    /** text.e:1184					text_in = search:match_replace(quote_pair[2], text_in, esc & quote_pair[2])*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5811 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5812 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_esc_10393) && IS_ATOM(_5812)) {
    }
    else if (IS_ATOM(_esc_10393) && IS_SEQUENCE(_5812)) {
        Prepend(&_5813, _5812, _esc_10393);
    }
    else {
        Concat((object_ptr)&_5813, _esc_10393, _5812);
    }
    _5812 = NOVALUE;
    Ref(_5811);
    RefDS(_text_in_10390);
    _0 = _text_in_10390;
    _text_in_10390 = _15match_replace(_5811, _text_in_10390, _5813, 0);
    DeRefDS(_0);
    _5811 = NOVALUE;
    _5813 = NOVALUE;
L17: 
L12: 
LE: 

    /** text.e:1189		return quote_pair[1] & text_in & quote_pair[2]*/
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5815 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_quote_pair_10391);
    _5816 = (object)*(((s1_ptr)_2)->base + 2);
    {
        object concat_list[3];

        concat_list[0] = _5816;
        concat_list[1] = _text_in_10390;
        concat_list[2] = _5815;
        Concat_N((object_ptr)&_5817, concat_list, 3);
    }
    _5816 = NOVALUE;
    _5815 = NOVALUE;
    DeRefDS(_text_in_10390);
    DeRef(_quote_pair_10391);
    DeRef(_sp_10395);
    return _5817;
    ;
}


object _13format(object _format_pattern_10611, object _arg_list_10612)
{
    object _result_10613 = NOVALUE;
    object _in_token_10614 = NOVALUE;
    object _tch_10615 = NOVALUE;
    object _i_10616 = NOVALUE;
    object _tend_10617 = NOVALUE;
    object _cap_10618 = NOVALUE;
    object _align_10619 = NOVALUE;
    object _psign_10620 = NOVALUE;
    object _msign_10621 = NOVALUE;
    object _zfill_10622 = NOVALUE;
    object _bwz_10623 = NOVALUE;
    object _spacer_10624 = NOVALUE;
    object _alt_10625 = NOVALUE;
    object _width_10626 = NOVALUE;
    object _decs_10627 = NOVALUE;
    object _pos_10628 = NOVALUE;
    object _argn_10629 = NOVALUE;
    object _argl_10630 = NOVALUE;
    object _trimming_10631 = NOVALUE;
    object _hexout_10632 = NOVALUE;
    object _binout_10633 = NOVALUE;
    object _tsep_10634 = NOVALUE;
    object _istext_10635 = NOVALUE;
    object _prevargv_10636 = NOVALUE;
    object _currargv_10637 = NOVALUE;
    object _idname_10638 = NOVALUE;
    object _envsym_10639 = NOVALUE;
    object _envvar_10640 = NOVALUE;
    object _ep_10641 = NOVALUE;
    object _sp_10713 = NOVALUE;
    object _sp_10748 = NOVALUE;
    object _argtext_10795 = NOVALUE;
    object _tempv_11027 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2456_11082 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2453_11081 = NOVALUE;
    object _pretty_sprint_inlined_pretty_sprint_at_2512_11089 = NOVALUE;
    object _options_inlined_pretty_sprint_at_2509_11088 = NOVALUE;
    object _x_inlined_pretty_sprint_at_2506_11087 = NOVALUE;
    object _msg_inlined_crash_at_2660_11111 = NOVALUE;
    object _dpos_11154 = NOVALUE;
    object _dist_11155 = NOVALUE;
    object _bracketed_11156 = NOVALUE;
    object _6316 = NOVALUE;
    object _6315 = NOVALUE;
    object _6314 = NOVALUE;
    object _6312 = NOVALUE;
    object _6311 = NOVALUE;
    object _6310 = NOVALUE;
    object _6307 = NOVALUE;
    object _6306 = NOVALUE;
    object _6303 = NOVALUE;
    object _6301 = NOVALUE;
    object _6298 = NOVALUE;
    object _6297 = NOVALUE;
    object _6296 = NOVALUE;
    object _6293 = NOVALUE;
    object _6290 = NOVALUE;
    object _6289 = NOVALUE;
    object _6288 = NOVALUE;
    object _6287 = NOVALUE;
    object _6284 = NOVALUE;
    object _6283 = NOVALUE;
    object _6282 = NOVALUE;
    object _6279 = NOVALUE;
    object _6277 = NOVALUE;
    object _6274 = NOVALUE;
    object _6273 = NOVALUE;
    object _6272 = NOVALUE;
    object _6271 = NOVALUE;
    object _6268 = NOVALUE;
    object _6263 = NOVALUE;
    object _6262 = NOVALUE;
    object _6261 = NOVALUE;
    object _6260 = NOVALUE;
    object _6254 = NOVALUE;
    object _6250 = NOVALUE;
    object _6249 = NOVALUE;
    object _6247 = NOVALUE;
    object _6245 = NOVALUE;
    object _6244 = NOVALUE;
    object _6243 = NOVALUE;
    object _6242 = NOVALUE;
    object _6241 = NOVALUE;
    object _6238 = NOVALUE;
    object _6235 = NOVALUE;
    object _6234 = NOVALUE;
    object _6231 = NOVALUE;
    object _6230 = NOVALUE;
    object _6229 = NOVALUE;
    object _6226 = NOVALUE;
    object _6224 = NOVALUE;
    object _6219 = NOVALUE;
    object _6218 = NOVALUE;
    object _6210 = NOVALUE;
    object _6206 = NOVALUE;
    object _6204 = NOVALUE;
    object _6203 = NOVALUE;
    object _6202 = NOVALUE;
    object _6199 = NOVALUE;
    object _6197 = NOVALUE;
    object _6196 = NOVALUE;
    object _6195 = NOVALUE;
    object _6193 = NOVALUE;
    object _6192 = NOVALUE;
    object _6191 = NOVALUE;
    object _6190 = NOVALUE;
    object _6187 = NOVALUE;
    object _6186 = NOVALUE;
    object _6185 = NOVALUE;
    object _6183 = NOVALUE;
    object _6182 = NOVALUE;
    object _6181 = NOVALUE;
    object _6180 = NOVALUE;
    object _6178 = NOVALUE;
    object _6176 = NOVALUE;
    object _6174 = NOVALUE;
    object _6172 = NOVALUE;
    object _6170 = NOVALUE;
    object _6168 = NOVALUE;
    object _6167 = NOVALUE;
    object _6166 = NOVALUE;
    object _6165 = NOVALUE;
    object _6164 = NOVALUE;
    object _6163 = NOVALUE;
    object _6161 = NOVALUE;
    object _6160 = NOVALUE;
    object _6158 = NOVALUE;
    object _6157 = NOVALUE;
    object _6155 = NOVALUE;
    object _6153 = NOVALUE;
    object _6152 = NOVALUE;
    object _6149 = NOVALUE;
    object _6147 = NOVALUE;
    object _6143 = NOVALUE;
    object _6141 = NOVALUE;
    object _6140 = NOVALUE;
    object _6139 = NOVALUE;
    object _6137 = NOVALUE;
    object _6136 = NOVALUE;
    object _6135 = NOVALUE;
    object _6134 = NOVALUE;
    object _6133 = NOVALUE;
    object _6131 = NOVALUE;
    object _6129 = NOVALUE;
    object _6128 = NOVALUE;
    object _6127 = NOVALUE;
    object _6126 = NOVALUE;
    object _6122 = NOVALUE;
    object _6119 = NOVALUE;
    object _6118 = NOVALUE;
    object _6115 = NOVALUE;
    object _6114 = NOVALUE;
    object _6113 = NOVALUE;
    object _6111 = NOVALUE;
    object _6110 = NOVALUE;
    object _6109 = NOVALUE;
    object _6108 = NOVALUE;
    object _6106 = NOVALUE;
    object _6104 = NOVALUE;
    object _6103 = NOVALUE;
    object _6102 = NOVALUE;
    object _6101 = NOVALUE;
    object _6100 = NOVALUE;
    object _6099 = NOVALUE;
    object _6097 = NOVALUE;
    object _6096 = NOVALUE;
    object _6095 = NOVALUE;
    object _6093 = NOVALUE;
    object _6092 = NOVALUE;
    object _6091 = NOVALUE;
    object _6090 = NOVALUE;
    object _6088 = NOVALUE;
    object _6085 = NOVALUE;
    object _6084 = NOVALUE;
    object _6082 = NOVALUE;
    object _6081 = NOVALUE;
    object _6079 = NOVALUE;
    object _6076 = NOVALUE;
    object _6075 = NOVALUE;
    object _6072 = NOVALUE;
    object _6070 = NOVALUE;
    object _6066 = NOVALUE;
    object _6064 = NOVALUE;
    object _6063 = NOVALUE;
    object _6062 = NOVALUE;
    object _6060 = NOVALUE;
    object _6058 = NOVALUE;
    object _6057 = NOVALUE;
    object _6056 = NOVALUE;
    object _6055 = NOVALUE;
    object _6054 = NOVALUE;
    object _6052 = NOVALUE;
    object _6050 = NOVALUE;
    object _6049 = NOVALUE;
    object _6048 = NOVALUE;
    object _6047 = NOVALUE;
    object _6045 = NOVALUE;
    object _6042 = NOVALUE;
    object _6040 = NOVALUE;
    object _6039 = NOVALUE;
    object _6037 = NOVALUE;
    object _6036 = NOVALUE;
    object _6035 = NOVALUE;
    object _6032 = NOVALUE;
    object _6031 = NOVALUE;
    object _6030 = NOVALUE;
    object _6029 = NOVALUE;
    object _6027 = NOVALUE;
    object _6026 = NOVALUE;
    object _6025 = NOVALUE;
    object _6024 = NOVALUE;
    object _6021 = NOVALUE;
    object _6020 = NOVALUE;
    object _6019 = NOVALUE;
    object _6017 = NOVALUE;
    object _6016 = NOVALUE;
    object _6015 = NOVALUE;
    object _6014 = NOVALUE;
    object _6011 = NOVALUE;
    object _6010 = NOVALUE;
    object _6009 = NOVALUE;
    object _6008 = NOVALUE;
    object _6006 = NOVALUE;
    object _6005 = NOVALUE;
    object _6004 = NOVALUE;
    object _6002 = NOVALUE;
    object _6001 = NOVALUE;
    object _6000 = NOVALUE;
    object _5998 = NOVALUE;
    object _5991 = NOVALUE;
    object _5989 = NOVALUE;
    object _5988 = NOVALUE;
    object _5981 = NOVALUE;
    object _5978 = NOVALUE;
    object _5974 = NOVALUE;
    object _5972 = NOVALUE;
    object _5971 = NOVALUE;
    object _5968 = NOVALUE;
    object _5966 = NOVALUE;
    object _5964 = NOVALUE;
    object _5961 = NOVALUE;
    object _5959 = NOVALUE;
    object _5958 = NOVALUE;
    object _5957 = NOVALUE;
    object _5956 = NOVALUE;
    object _5955 = NOVALUE;
    object _5952 = NOVALUE;
    object _5950 = NOVALUE;
    object _5949 = NOVALUE;
    object _5948 = NOVALUE;
    object _5945 = NOVALUE;
    object _5943 = NOVALUE;
    object _5941 = NOVALUE;
    object _5938 = NOVALUE;
    object _5937 = NOVALUE;
    object _5930 = NOVALUE;
    object _5927 = NOVALUE;
    object _5926 = NOVALUE;
    object _5919 = NOVALUE;
    object _5915 = NOVALUE;
    object _5912 = NOVALUE;
    object _5901 = NOVALUE;
    object _5899 = NOVALUE;
    object _0, _1, _2;
    

    /** text.e:1443		if atom(arg_list) then*/
    _5899 = IS_ATOM(_arg_list_10612);
    if (_5899 == 0)
    {
        _5899 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _5899 = NOVALUE;
    }

    /** text.e:1444			arg_list = {arg_list}*/
    _0 = _arg_list_10612;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_arg_list_10612);
    ((intptr_t*)_2)[1] = _arg_list_10612;
    _arg_list_10612 = MAKE_SEQ(_1);
    DeRef(_0);
L1: 

    /** text.e:1447		result = ""*/
    RefDS(_5);
    DeRef(_result_10613);
    _result_10613 = _5;

    /** text.e:1448		in_token = 0*/
    _in_token_10614 = 0;

    /** text.e:1451		i = 0*/
    _i_10616 = 0;

    /** text.e:1452		tend = 0*/
    _tend_10617 = 0;

    /** text.e:1453		argl = 0*/
    _argl_10630 = 0;

    /** text.e:1454		spacer = 0*/
    _spacer_10624 = 0;

    /** text.e:1455		prevargv = 0*/
    DeRef(_prevargv_10636);
    _prevargv_10636 = 0;

    /** text.e:1456	    while i < length(format_pattern) do*/
L2: 
    if (IS_SEQUENCE(_format_pattern_10611)){
            _5901 = SEQ_PTR(_format_pattern_10611)->length;
    }
    else {
        _5901 = 1;
    }
    if (_i_10616 >= _5901)
    goto L3; // [63] 3409

    /** text.e:1457	    	i += 1*/
    _i_10616 = _i_10616 + 1;

    /** text.e:1458	    	tch = format_pattern[i]*/
    _2 = (object)SEQ_PTR(_format_pattern_10611);
    _tch_10615 = (object)*(((s1_ptr)_2)->base + _i_10616);
    if (!IS_ATOM_INT(_tch_10615))
    _tch_10615 = (object)DBL_PTR(_tch_10615)->dbl;

    /** text.e:1459	    	if not in_token then*/
    if (_in_token_10614 != 0)
    goto L4; // [81] 210

    /** text.e:1460	    		if tch = '[' then*/
    if (_tch_10615 != 91)
    goto L5; // [86] 200

    /** text.e:1461	    			in_token = 1*/
    _in_token_10614 = 1;

    /** text.e:1462	    			tend = 0*/
    _tend_10617 = 0;

    /** text.e:1463					cap = 0*/
    _cap_10618 = 0;

    /** text.e:1464					align = 0*/
    _align_10619 = 0;

    /** text.e:1465					psign = 0*/
    _psign_10620 = 0;

    /** text.e:1466					msign = 0*/
    _msign_10621 = 0;

    /** text.e:1467					zfill = 0*/
    _zfill_10622 = 0;

    /** text.e:1468					bwz = 0*/
    _bwz_10623 = 0;

    /** text.e:1469					spacer = 0*/
    _spacer_10624 = 0;

    /** text.e:1470					alt = 0*/
    _alt_10625 = 0;

    /** text.e:1471	    			width = 0*/
    _width_10626 = 0;

    /** text.e:1472	    			decs = -1*/
    _decs_10627 = -1;

    /** text.e:1473	    			argn = 0*/
    _argn_10629 = 0;

    /** text.e:1474	    			hexout = 0*/
    _hexout_10632 = 0;

    /** text.e:1475	    			binout = 0*/
    _binout_10633 = 0;

    /** text.e:1476	    			trimming = 0*/
    _trimming_10631 = 0;

    /** text.e:1477	    			tsep = 0*/
    _tsep_10634 = 0;

    /** text.e:1478	    			istext = 0*/
    _istext_10635 = 0;

    /** text.e:1479	    			idname = ""*/
    RefDS(_5);
    DeRef(_idname_10638);
    _idname_10638 = _5;

    /** text.e:1480	    			envvar = ""*/
    RefDS(_5);
    DeRefi(_envvar_10640);
    _envvar_10640 = _5;

    /** text.e:1481	    			envsym = ""*/
    RefDS(_5);
    DeRef(_envsym_10639);
    _envsym_10639 = _5;
    goto L2; // [197] 60
L5: 

    /** text.e:1483	    			result &= tch*/
    Append(&_result_10613, _result_10613, _tch_10615);
    goto L2; // [207] 60
L4: 

    /** text.e:1486				switch tch do*/
    _0 = _tch_10615;
    switch ( _0 ){ 

        /** text.e:1487	    			case ']' then*/
        case 93:

        /** text.e:1488	    				in_token = 0*/
        _in_token_10614 = 0;

        /** text.e:1489	    				tend = i*/
        _tend_10617 = _i_10616;
        goto L6; // [231] 1072

        /** text.e:1491	    			case '[' then*/
        case 91:

        /** text.e:1492		    			result &= tch*/
        Append(&_result_10613, _result_10613, _tch_10615);

        /** text.e:1493		    			while i < length(format_pattern) do*/
L7: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5912 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5912 = 1;
        }
        if (_i_10616 >= _5912)
        goto L6; // [251] 1072

        /** text.e:1494		    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1495		    				if format_pattern[i] = ']' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5915 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5915, 93)){
            _5915 = NOVALUE;
            goto L7; // [267] 248
        }
        _5915 = NOVALUE;

        /** text.e:1496		    					in_token = 0*/
        _in_token_10614 = 0;

        /** text.e:1497		    					tend = 0*/
        _tend_10617 = 0;

        /** text.e:1498		    					exit*/
        goto L6; // [283] 1072

        /** text.e:1500		    			end while*/
        goto L7; // [288] 248
        goto L6; // [291] 1072

        /** text.e:1502		    		case 'w', 'u', 'l' then*/
        case 119:
        case 117:
        case 108:

        /** text.e:1503		    			cap = tch*/
        _cap_10618 = _tch_10615;
        goto L6; // [306] 1072

        /** text.e:1505		    		case 'b' then*/
        case 98:

        /** text.e:1506		    			bwz = 1*/
        _bwz_10623 = 1;
        goto L6; // [317] 1072

        /** text.e:1508		    		case 's' then*/
        case 115:

        /** text.e:1509		    			spacer = 1*/
        _spacer_10624 = 1;
        goto L6; // [328] 1072

        /** text.e:1511		    		case 't' then*/
        case 116:

        /** text.e:1512		    			trimming = 1*/
        _trimming_10631 = 1;
        goto L6; // [339] 1072

        /** text.e:1514		    		case 'z' then*/
        case 122:

        /** text.e:1515		    			zfill = 1*/
        _zfill_10622 = 1;
        goto L6; // [350] 1072

        /** text.e:1517		    		case 'X' then*/
        case 88:

        /** text.e:1518		    			hexout = 1*/
        _hexout_10632 = 1;
        goto L6; // [361] 1072

        /** text.e:1520		    		case 'B' then*/
        case 66:

        /** text.e:1521		    			binout = 1*/
        _binout_10633 = 1;
        goto L6; // [372] 1072

        /** text.e:1523		    		case 'c', '<', '>' then*/
        case 99:
        case 60:
        case 62:

        /** text.e:1524		    			align = tch*/
        _align_10619 = _tch_10615;
        goto L6; // [387] 1072

        /** text.e:1526		    		case '+' then*/
        case 43:

        /** text.e:1527		    			psign = 1*/
        _psign_10620 = 1;
        goto L6; // [398] 1072

        /** text.e:1529		    		case '(' then*/
        case 40:

        /** text.e:1530		    			msign = 1*/
        _msign_10621 = 1;
        goto L6; // [409] 1072

        /** text.e:1532		    		case '?' then*/
        case 63:

        /** text.e:1533		    			alt = 1*/
        _alt_10625 = 1;
        goto L6; // [420] 1072

        /** text.e:1535		    		case 'T' then*/
        case 84:

        /** text.e:1536		    			istext = 1*/
        _istext_10635 = 1;
        goto L6; // [431] 1072

        /** text.e:1538		    		case ':' then*/
        case 58:

        /** text.e:1539		    			while i < length(format_pattern) do*/
L8: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5919 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5919 = 1;
        }
        if (_i_10616 >= _5919)
        goto L6; // [445] 1072

        /** text.e:1540		    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1541		    				tch = format_pattern[i]*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _tch_10615 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (!IS_ATOM_INT(_tch_10615))
        _tch_10615 = (object)DBL_PTR(_tch_10615)->dbl;

        /** text.e:1542		    				pos = find(tch, "0123456789")*/
        _pos_10628 = find_from(_tch_10615, _1952, 1);

        /** text.e:1543		    				if pos = 0 then*/
        if (_pos_10628 != 0)
        goto L9; // [470] 485

        /** text.e:1544		    					i -= 1*/
        _i_10616 = _i_10616 - 1;

        /** text.e:1545		    					exit*/
        goto L6; // [482] 1072
L9: 

        /** text.e:1547		    				width = width * 10 + pos - 1*/
        if (_width_10626 == (short)_width_10626){
            _5926 = _width_10626 * 10;
        }
        else{
            _5926 = NewDouble(_width_10626 * (eudouble)10);
        }
        if (IS_ATOM_INT(_5926)) {
            _5927 = _5926 + _pos_10628;
            if ((object)((uintptr_t)_5927 + (uintptr_t)HIGH_BITS) >= 0){
                _5927 = NewDouble((eudouble)_5927);
            }
        }
        else {
            _5927 = NewDouble(DBL_PTR(_5926)->dbl + (eudouble)_pos_10628);
        }
        DeRef(_5926);
        _5926 = NOVALUE;
        if (IS_ATOM_INT(_5927)) {
            _width_10626 = _5927 - 1;
        }
        else {
            _width_10626 = NewDouble(DBL_PTR(_5927)->dbl - (eudouble)1);
        }
        DeRef(_5927);
        _5927 = NOVALUE;
        if (!IS_ATOM_INT(_width_10626)) {
            _1 = (object)(DBL_PTR(_width_10626)->dbl);
            DeRefDS(_width_10626);
            _width_10626 = _1;
        }

        /** text.e:1548		    				if width = 0 then*/
        if (_width_10626 != 0)
        goto L8; // [505] 442

        /** text.e:1549		    					zfill = '0'*/
        _zfill_10622 = 48;

        /** text.e:1551		    			end while*/
        goto L8; // [517] 442
        goto L6; // [520] 1072

        /** text.e:1553		    		case '.' then*/
        case 46:

        /** text.e:1554		    			decs = 0*/
        _decs_10627 = 0;

        /** text.e:1555		    			while i < length(format_pattern) do*/
LA: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5930 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5930 = 1;
        }
        if (_i_10616 >= _5930)
        goto L6; // [539] 1072

        /** text.e:1556		    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1557		    				tch = format_pattern[i]*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _tch_10615 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (!IS_ATOM_INT(_tch_10615))
        _tch_10615 = (object)DBL_PTR(_tch_10615)->dbl;

        /** text.e:1558		    				pos = find(tch, "0123456789")*/
        _pos_10628 = find_from(_tch_10615, _1952, 1);

        /** text.e:1559		    				if pos = 0 then*/
        if (_pos_10628 != 0)
        goto LB; // [564] 579

        /** text.e:1560		    					i -= 1*/
        _i_10616 = _i_10616 - 1;

        /** text.e:1561		    					exit*/
        goto L6; // [576] 1072
LB: 

        /** text.e:1563		    				decs = decs * 10 + pos - 1*/
        if (_decs_10627 == (short)_decs_10627){
            _5937 = _decs_10627 * 10;
        }
        else{
            _5937 = NewDouble(_decs_10627 * (eudouble)10);
        }
        if (IS_ATOM_INT(_5937)) {
            _5938 = _5937 + _pos_10628;
            if ((object)((uintptr_t)_5938 + (uintptr_t)HIGH_BITS) >= 0){
                _5938 = NewDouble((eudouble)_5938);
            }
        }
        else {
            _5938 = NewDouble(DBL_PTR(_5937)->dbl + (eudouble)_pos_10628);
        }
        DeRef(_5937);
        _5937 = NOVALUE;
        if (IS_ATOM_INT(_5938)) {
            _decs_10627 = _5938 - 1;
        }
        else {
            _decs_10627 = NewDouble(DBL_PTR(_5938)->dbl - (eudouble)1);
        }
        DeRef(_5938);
        _5938 = NOVALUE;
        if (!IS_ATOM_INT(_decs_10627)) {
            _1 = (object)(DBL_PTR(_decs_10627)->dbl);
            DeRefDS(_decs_10627);
            _decs_10627 = _1;
        }

        /** text.e:1564		    			end while*/
        goto LA; // [597] 536
        goto L6; // [600] 1072

        /** text.e:1566		    		case '{' then*/
        case 123:

        /** text.e:1568		    			integer sp*/

        /** text.e:1570		    			sp = i + 1*/
        _sp_10713 = _i_10616 + 1;

        /** text.e:1571		    			i = sp*/
        _i_10616 = _sp_10713;

        /** text.e:1572		    			while i < length(format_pattern) do*/
LC: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5941 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5941 = 1;
        }
        if (_i_10616 >= _5941)
        goto LD; // [627] 672

        /** text.e:1573		    				if format_pattern[i] = '}' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5943 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5943, 125)){
            _5943 = NOVALUE;
            goto LE; // [637] 646
        }
        _5943 = NOVALUE;

        /** text.e:1574		    					exit*/
        goto LD; // [643] 672
LE: 

        /** text.e:1576		    				if format_pattern[i] = ']' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5945 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5945, 93)){
            _5945 = NOVALUE;
            goto LF; // [652] 661
        }
        _5945 = NOVALUE;

        /** text.e:1577		    					exit*/
        goto LD; // [658] 672
LF: 

        /** text.e:1579		    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1580		    			end while*/
        goto LC; // [669] 624
LD: 

        /** text.e:1581		    			idname = trim(format_pattern[sp .. i-1]) & '='*/
        _5948 = _i_10616 - 1;
        rhs_slice_target = (object_ptr)&_5949;
        RHS_Slice(_format_pattern_10611, _sp_10713, _5948);
        RefDS(_4749);
        _5950 = _13trim(_5949, _4749, 0);
        _5949 = NOVALUE;
        if (IS_SEQUENCE(_5950) && IS_ATOM(61)) {
            Append(&_idname_10638, _5950, 61);
        }
        else if (IS_ATOM(_5950) && IS_SEQUENCE(61)) {
        }
        else {
            Concat((object_ptr)&_idname_10638, _5950, 61);
            DeRef(_5950);
            _5950 = NOVALUE;
        }
        DeRef(_5950);
        _5950 = NOVALUE;

        /** text.e:1582	    				if format_pattern[i] = ']' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5952 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5952, 93)){
            _5952 = NOVALUE;
            goto L10; // [699] 710
        }
        _5952 = NOVALUE;

        /** text.e:1583	    					i -= 1*/
        _i_10616 = _i_10616 - 1;
L10: 

        /** text.e:1586	    				for j = 1 to length(arg_list) do*/
        if (IS_SEQUENCE(_arg_list_10612)){
                _5955 = SEQ_PTR(_arg_list_10612)->length;
        }
        else {
            _5955 = 1;
        }
        {
            object _j_10734;
            _j_10734 = 1;
L11: 
            if (_j_10734 > _5955){
                goto L12; // [715] 797
            }

            /** text.e:1587	    					if sequence(arg_list[j]) then*/
            _2 = (object)SEQ_PTR(_arg_list_10612);
            _5956 = (object)*(((s1_ptr)_2)->base + _j_10734);
            _5957 = IS_SEQUENCE(_5956);
            _5956 = NOVALUE;
            if (_5957 == 0)
            {
                _5957 = NOVALUE;
                goto L13; // [731] 768
            }
            else{
                _5957 = NOVALUE;
            }

            /** text.e:1588	    						if search:begins(idname, arg_list[j]) then*/
            _2 = (object)SEQ_PTR(_arg_list_10612);
            _5958 = (object)*(((s1_ptr)_2)->base + _j_10734);
            RefDS(_idname_10638);
            Ref(_5958);
            _5959 = _15begins(_idname_10638, _5958);
            _5958 = NOVALUE;
            if (_5959 == 0) {
                DeRef(_5959);
                _5959 = NOVALUE;
                goto L14; // [745] 767
            }
            else {
                if (!IS_ATOM_INT(_5959) && DBL_PTR(_5959)->dbl == 0.0){
                    DeRef(_5959);
                    _5959 = NOVALUE;
                    goto L14; // [745] 767
                }
                DeRef(_5959);
                _5959 = NOVALUE;
            }
            DeRef(_5959);
            _5959 = NOVALUE;

            /** text.e:1589	    							if argn = 0 then*/
            if (_argn_10629 != 0)
            goto L15; // [752] 766

            /** text.e:1590	    								argn = j*/
            _argn_10629 = _j_10734;

            /** text.e:1591	    								exit*/
            goto L12; // [763] 797
L15: 
L14: 
L13: 

            /** text.e:1595	    					if j = length(arg_list) then*/
            if (IS_SEQUENCE(_arg_list_10612)){
                    _5961 = SEQ_PTR(_arg_list_10612)->length;
            }
            else {
                _5961 = 1;
            }
            if (_j_10734 != _5961)
            goto L16; // [773] 790

            /** text.e:1596	    						idname = ""*/
            RefDS(_5);
            DeRef(_idname_10638);
            _idname_10638 = _5;

            /** text.e:1597	    						argn = -1*/
            _argn_10629 = -1;
L16: 

            /** text.e:1599	    				end for*/
            _j_10734 = _j_10734 + 1;
            goto L11; // [792] 722
L12: 
            ;
        }
        goto L6; // [799] 1072

        /** text.e:1600		    		case '%' then*/
        case 37:

        /** text.e:1602		    			integer sp*/

        /** text.e:1604		    			sp = i + 1*/
        _sp_10748 = _i_10616 + 1;

        /** text.e:1605		    			i = sp*/
        _i_10616 = _sp_10748;

        /** text.e:1606		    			while i < length(format_pattern) do*/
L17: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5964 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5964 = 1;
        }
        if (_i_10616 >= _5964)
        goto L18; // [826] 871

        /** text.e:1607		    				if format_pattern[i] = '%' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5966 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5966, 37)){
            _5966 = NOVALUE;
            goto L19; // [836] 845
        }
        _5966 = NOVALUE;

        /** text.e:1608		    					exit*/
        goto L18; // [842] 871
L19: 

        /** text.e:1610		    				if format_pattern[i] = ']' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5968 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5968, 93)){
            _5968 = NOVALUE;
            goto L1A; // [851] 860
        }
        _5968 = NOVALUE;

        /** text.e:1611		    					exit*/
        goto L18; // [857] 871
L1A: 

        /** text.e:1613		    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1614		    			end while*/
        goto L17; // [868] 823
L18: 

        /** text.e:1615		    			envsym = trim(format_pattern[sp .. i-1])*/
        _5971 = _i_10616 - 1;
        rhs_slice_target = (object_ptr)&_5972;
        RHS_Slice(_format_pattern_10611, _sp_10748, _5971);
        RefDS(_4749);
        _0 = _envsym_10639;
        _envsym_10639 = _13trim(_5972, _4749, 0);
        DeRef(_0);
        _5972 = NOVALUE;

        /** text.e:1616	    				if format_pattern[i] = ']' then*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _5974 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (binary_op_a(NOTEQ, _5974, 93)){
            _5974 = NOVALUE;
            goto L1B; // [894] 905
        }
        _5974 = NOVALUE;

        /** text.e:1617	    					i -= 1*/
        _i_10616 = _i_10616 - 1;
L1B: 

        /** text.e:1620	    				envvar = getenv(envsym)*/
        DeRefi(_envvar_10640);
        _envvar_10640 = EGetEnv(_envsym_10639);

        /** text.e:1622	    				argn = -1*/
        _argn_10629 = -1;

        /** text.e:1623	    				if atom(envvar) then*/
        _5978 = IS_ATOM(_envvar_10640);
        if (_5978 == 0)
        {
            _5978 = NOVALUE;
            goto L1C; // [920] 929
        }
        else{
            _5978 = NOVALUE;
        }

        /** text.e:1624	    					envvar = ""*/
        RefDS(_5);
        DeRefi(_envvar_10640);
        _envvar_10640 = _5;
L1C: 
        goto L6; // [931] 1072

        /** text.e:1628		    		case '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' then*/
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:

        /** text.e:1629		    			if argn = 0 then*/
        if (_argn_10629 != 0)
        goto L6; // [957] 1072

        /** text.e:1630			    			i -= 1*/
        _i_10616 = _i_10616 - 1;

        /** text.e:1631			    			while i < length(format_pattern) do*/
L1D: 
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5981 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5981 = 1;
        }
        if (_i_10616 >= _5981)
        goto L6; // [975] 1072

        /** text.e:1632			    				i += 1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1633			    				tch = format_pattern[i]*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _tch_10615 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (!IS_ATOM_INT(_tch_10615))
        _tch_10615 = (object)DBL_PTR(_tch_10615)->dbl;

        /** text.e:1634			    				pos = find(tch, "0123456789")*/
        _pos_10628 = find_from(_tch_10615, _1952, 1);

        /** text.e:1635			    				if pos = 0 then*/
        if (_pos_10628 != 0)
        goto L1E; // [1000] 1015

        /** text.e:1636			    					i -= 1*/
        _i_10616 = _i_10616 - 1;

        /** text.e:1637			    					exit*/
        goto L6; // [1012] 1072
L1E: 

        /** text.e:1639			    				argn = argn * 10 + pos - 1*/
        if (_argn_10629 == (short)_argn_10629){
            _5988 = _argn_10629 * 10;
        }
        else{
            _5988 = NewDouble(_argn_10629 * (eudouble)10);
        }
        if (IS_ATOM_INT(_5988)) {
            _5989 = _5988 + _pos_10628;
            if ((object)((uintptr_t)_5989 + (uintptr_t)HIGH_BITS) >= 0){
                _5989 = NewDouble((eudouble)_5989);
            }
        }
        else {
            _5989 = NewDouble(DBL_PTR(_5988)->dbl + (eudouble)_pos_10628);
        }
        DeRef(_5988);
        _5988 = NOVALUE;
        if (IS_ATOM_INT(_5989)) {
            _argn_10629 = _5989 - 1;
        }
        else {
            _argn_10629 = NewDouble(DBL_PTR(_5989)->dbl - (eudouble)1);
        }
        DeRef(_5989);
        _5989 = NOVALUE;
        if (!IS_ATOM_INT(_argn_10629)) {
            _1 = (object)(DBL_PTR(_argn_10629)->dbl);
            DeRefDS(_argn_10629);
            _argn_10629 = _1;
        }

        /** text.e:1640			    			end while*/
        goto L1D; // [1033] 972
        goto L6; // [1037] 1072

        /** text.e:1643		    		case ',' then*/
        case 44:

        /** text.e:1644		    			if i < length(format_pattern) then*/
        if (IS_SEQUENCE(_format_pattern_10611)){
                _5991 = SEQ_PTR(_format_pattern_10611)->length;
        }
        else {
            _5991 = 1;
        }
        if (_i_10616 >= _5991)
        goto L6; // [1048] 1072

        /** text.e:1645		    				i +=1*/
        _i_10616 = _i_10616 + 1;

        /** text.e:1646		    				tsep = format_pattern[i]*/
        _2 = (object)SEQ_PTR(_format_pattern_10611);
        _tsep_10634 = (object)*(((s1_ptr)_2)->base + _i_10616);
        if (!IS_ATOM_INT(_tsep_10634))
        _tsep_10634 = (object)DBL_PTR(_tsep_10634)->dbl;
        goto L6; // [1065] 1072

        /** text.e:1649		    		case else*/
        default:
    ;}L6: 

    /** text.e:1653	    		if tend > 0 then*/
    if (_tend_10617 <= 0)
    goto L1F; // [1074] 3401

    /** text.e:1655	    			sequence argtext = ""*/
    RefDS(_5);
    DeRef(_argtext_10795);
    _argtext_10795 = _5;

    /** text.e:1657	    			if argn = 0 then*/
    if (_argn_10629 != 0)
    goto L20; // [1089] 1100

    /** text.e:1658	    				argn = argl + 1*/
    _argn_10629 = _argl_10630 + 1;
L20: 

    /** text.e:1660	    			argl = argn*/
    _argl_10630 = _argn_10629;

    /** text.e:1662	    			if argn < 1 or argn > length(arg_list) then*/
    _5998 = (_argn_10629 < 1);
    if (_5998 != 0) {
        goto L21; // [1111] 1127
    }
    if (IS_SEQUENCE(_arg_list_10612)){
            _6000 = SEQ_PTR(_arg_list_10612)->length;
    }
    else {
        _6000 = 1;
    }
    _6001 = (_argn_10629 > _6000);
    _6000 = NOVALUE;
    if (_6001 == 0)
    {
        DeRef(_6001);
        _6001 = NOVALUE;
        goto L22; // [1123] 1169
    }
    else{
        DeRef(_6001);
        _6001 = NOVALUE;
    }
L21: 

    /** text.e:1663	    				if length(envvar) > 0 then*/
    if (IS_SEQUENCE(_envvar_10640)){
            _6002 = SEQ_PTR(_envvar_10640)->length;
    }
    else {
        _6002 = 1;
    }
    if (_6002 <= 0)
    goto L23; // [1134] 1153

    /** text.e:1664	    					argtext = envvar*/
    Ref(_envvar_10640);
    DeRef(_argtext_10795);
    _argtext_10795 = _envvar_10640;

    /** text.e:1665		    				currargv = envvar*/
    Ref(_envvar_10640);
    DeRef(_currargv_10637);
    _currargv_10637 = _envvar_10640;
    goto L24; // [1150] 2582
L23: 

    /** text.e:1667	    					argtext = ""*/
    RefDS(_5);
    DeRef(_argtext_10795);
    _argtext_10795 = _5;

    /** text.e:1668		    				currargv =""*/
    RefDS(_5);
    DeRef(_currargv_10637);
    _currargv_10637 = _5;
    goto L24; // [1166] 2582
L22: 

    /** text.e:1671						if string(arg_list[argn]) then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6004 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    Ref(_6004);
    _6005 = _9string(_6004);
    _6004 = NOVALUE;
    if (_6005 == 0) {
        DeRef(_6005);
        _6005 = NOVALUE;
        goto L25; // [1179] 1229
    }
    else {
        if (!IS_ATOM_INT(_6005) && DBL_PTR(_6005)->dbl == 0.0){
            DeRef(_6005);
            _6005 = NOVALUE;
            goto L25; // [1179] 1229
        }
        DeRef(_6005);
        _6005 = NOVALUE;
    }
    DeRef(_6005);
    _6005 = NOVALUE;

    /** text.e:1672							if length(idname) > 0 then*/
    if (IS_SEQUENCE(_idname_10638)){
            _6006 = SEQ_PTR(_idname_10638)->length;
    }
    else {
        _6006 = 1;
    }
    if (_6006 <= 0)
    goto L26; // [1189] 1217

    /** text.e:1673								argtext = arg_list[argn][length(idname) + 1 .. $]*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6008 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_SEQUENCE(_idname_10638)){
            _6009 = SEQ_PTR(_idname_10638)->length;
    }
    else {
        _6009 = 1;
    }
    _6010 = _6009 + 1;
    _6009 = NOVALUE;
    if (IS_SEQUENCE(_6008)){
            _6011 = SEQ_PTR(_6008)->length;
    }
    else {
        _6011 = 1;
    }
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_6008, _6010, _6011);
    _6008 = NOVALUE;
    goto L27; // [1214] 2575
L26: 

    /** text.e:1675								argtext = arg_list[argn]*/
    DeRef(_argtext_10795);
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _argtext_10795 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    Ref(_argtext_10795);
    goto L27; // [1226] 2575
L25: 

    /** text.e:1678						elsif integer(arg_list[argn]) */
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6014 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_ATOM_INT(_6014))
    _6015 = 1;
    else if (IS_ATOM_DBL(_6014))
    _6015 = IS_ATOM_INT(DoubleToInt(_6014));
    else
    _6015 = 0;
    _6014 = NOVALUE;
    if (_6015 == 0) {
        _6016 = 0;
        goto L28; // [1238] 1254
    }
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6017 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_ATOM_INT(_6017)) {
        _6019 = (_6017 <= 67108863);
    }
    else {
        _6019 = binary_op(LESSEQ, _6017, 67108863);
    }
    _6017 = NOVALUE;
    if (IS_ATOM_INT(_6019))
    _6016 = (_6019 != 0);
    else
    _6016 = DBL_PTR(_6019)->dbl != 0.0;
L28: 
    if (_6016 == 0) {
        goto L29; // [1254] 1747
    }
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6021 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    _6024 = binary_op(GREATEREQ, _6021, _6023);
    _6021 = NOVALUE;
    if (_6024 == 0) {
        DeRef(_6024);
        _6024 = NOVALUE;
        goto L29; // [1267] 1747
    }
    else {
        if (!IS_ATOM_INT(_6024) && DBL_PTR(_6024)->dbl == 0.0){
            DeRef(_6024);
            _6024 = NOVALUE;
            goto L29; // [1267] 1747
        }
        DeRef(_6024);
        _6024 = NOVALUE;
    }
    DeRef(_6024);
    _6024 = NOVALUE;

    /** text.e:1682							if istext then*/
    if (_istext_10635 == 0)
    {
        goto L2A; // [1274] 1298
    }
    else{
    }

    /** text.e:1683								argtext = {and_bits(0xFFFF_FFFF, math:abs(arg_list[argn]))}*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6025 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    Ref(_6025);
    _6026 = _10abs(_6025);
    _6025 = NOVALUE;
    _6027 = binary_op(AND_BITS, _406, _6026);
    DeRef(_6026);
    _6026 = NOVALUE;
    _0 = _argtext_10795;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6027;
    _argtext_10795 = MAKE_SEQ(_1);
    DeRef(_0);
    _6027 = NOVALUE;
    goto L27; // [1295] 2575
L2A: 

    /** text.e:1685							elsif bwz != 0 and arg_list[argn] = 0 then*/
    _6029 = (_bwz_10623 != 0);
    if (_6029 == 0) {
        goto L2B; // [1306] 1333
    }
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6031 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_ATOM_INT(_6031)) {
        _6032 = (_6031 == 0);
    }
    else {
        _6032 = binary_op(EQUALS, _6031, 0);
    }
    _6031 = NOVALUE;
    if (_6032 == 0) {
        DeRef(_6032);
        _6032 = NOVALUE;
        goto L2B; // [1319] 1333
    }
    else {
        if (!IS_ATOM_INT(_6032) && DBL_PTR(_6032)->dbl == 0.0){
            DeRef(_6032);
            _6032 = NOVALUE;
            goto L2B; // [1319] 1333
        }
        DeRef(_6032);
        _6032 = NOVALUE;
    }
    DeRef(_6032);
    _6032 = NOVALUE;

    /** text.e:1686								argtext = repeat(' ', width)*/
    DeRef(_argtext_10795);
    _argtext_10795 = Repeat(32, _width_10626);
    goto L27; // [1330] 2575
L2B: 

    /** text.e:1688							elsif binout = 1 then*/
    if (_binout_10633 != 1)
    goto L2C; // [1337] 1411

    /** text.e:1689								argtext = stdseq:reverse( convert:int_to_bits(arg_list[argn], 32)) + '0'*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6035 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    Ref(_6035);
    _6036 = _14int_to_bits(_6035, 32);
    _6035 = NOVALUE;
    _6037 = _22reverse(_6036, 1, 0);
    _6036 = NOVALUE;
    DeRef(_argtext_10795);
    if (IS_ATOM_INT(_6037)) {
        _argtext_10795 = _6037 + 48;
        if ((object)((uintptr_t)_argtext_10795 + (uintptr_t)HIGH_BITS) >= 0){
            _argtext_10795 = NewDouble((eudouble)_argtext_10795);
        }
    }
    else {
        _argtext_10795 = binary_op(PLUS, _6037, 48);
    }
    DeRef(_6037);
    _6037 = NOVALUE;

    /** text.e:1690								for ib = 1 to length(argtext) do*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6039 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6039 = 1;
    }
    {
        object _ib_10853;
        _ib_10853 = 1;
L2D: 
        if (_ib_10853 > _6039){
            goto L2E; // [1369] 1408
        }

        /** text.e:1691									if argtext[ib] = '1' then*/
        _2 = (object)SEQ_PTR(_argtext_10795);
        _6040 = (object)*(((s1_ptr)_2)->base + _ib_10853);
        if (binary_op_a(NOTEQ, _6040, 49)){
            _6040 = NOVALUE;
            goto L2F; // [1382] 1401
        }
        _6040 = NOVALUE;

        /** text.e:1692										argtext = argtext[ib .. $]*/
        if (IS_SEQUENCE(_argtext_10795)){
                _6042 = SEQ_PTR(_argtext_10795)->length;
        }
        else {
            _6042 = 1;
        }
        rhs_slice_target = (object_ptr)&_argtext_10795;
        RHS_Slice(_argtext_10795, _ib_10853, _6042);

        /** text.e:1693										exit*/
        goto L2E; // [1398] 1408
L2F: 

        /** text.e:1695								end for*/
        _ib_10853 = _ib_10853 + 1;
        goto L2D; // [1403] 1376
L2E: 
        ;
    }
    goto L27; // [1408] 2575
L2C: 

    /** text.e:1697							elsif hexout = 0 then*/
    if (_hexout_10632 != 0)
    goto L30; // [1415] 1681

    /** text.e:1698								argtext = sprintf("%d", arg_list[argn])*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6045 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_argtext_10795);
    _argtext_10795 = EPrintf(-9999999, _1413, _6045);
    _6045 = NOVALUE;

    /** text.e:1699								if zfill != 0 and width > 0 then*/
    _6047 = (_zfill_10622 != 0);
    if (_6047 == 0) {
        goto L31; // [1437] 1534
    }
    _6049 = (_width_10626 > 0);
    if (_6049 == 0)
    {
        DeRef(_6049);
        _6049 = NOVALUE;
        goto L31; // [1448] 1534
    }
    else{
        DeRef(_6049);
        _6049 = NOVALUE;
    }

    /** text.e:1700									if argtext[1] = '-' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6050 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _6050, 45)){
        _6050 = NOVALUE;
        goto L32; // [1457] 1503
    }
    _6050 = NOVALUE;

    /** text.e:1701										if width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6052 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6052 = 1;
    }
    if (_width_10626 <= _6052)
    goto L33; // [1468] 1533

    /** text.e:1702											argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6054 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6054 = 1;
    }
    _6055 = _width_10626 - _6054;
    _6054 = NOVALUE;
    _6056 = Repeat(48, _6055);
    _6055 = NOVALUE;
    if (IS_SEQUENCE(_argtext_10795)){
            _6057 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6057 = 1;
    }
    rhs_slice_target = (object_ptr)&_6058;
    RHS_Slice(_argtext_10795, 2, _6057);
    {
        object concat_list[3];

        concat_list[0] = _6058;
        concat_list[1] = _6056;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6058);
    _6058 = NOVALUE;
    DeRefDS(_6056);
    _6056 = NOVALUE;
    goto L33; // [1500] 1533
L32: 

    /** text.e:1705										if width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6060 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6060 = 1;
    }
    if (_width_10626 <= _6060)
    goto L34; // [1510] 1532

    /** text.e:1706											argtext = repeat('0', width - length(argtext)) & argtext*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6062 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6062 = 1;
    }
    _6063 = _width_10626 - _6062;
    _6062 = NOVALUE;
    _6064 = Repeat(48, _6063);
    _6063 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _6064, _argtext_10795);
    DeRefDS(_6064);
    _6064 = NOVALUE;
    DeRef(_6064);
    _6064 = NOVALUE;
L34: 
L33: 
L31: 

    /** text.e:1711								if arg_list[argn] > 0 then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6066 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (binary_op_a(LESSEQ, _6066, 0)){
        _6066 = NOVALUE;
        goto L35; // [1540] 1588
    }
    _6066 = NOVALUE;

    /** text.e:1712									if psign then*/
    if (_psign_10620 == 0)
    {
        goto L27; // [1548] 2575
    }
    else{
    }

    /** text.e:1713										if zfill = 0 then*/
    if (_zfill_10622 != 0)
    goto L36; // [1553] 1566

    /** text.e:1714											argtext = '+' & argtext*/
    Prepend(&_argtext_10795, _argtext_10795, 43);
    goto L27; // [1563] 2575
L36: 

    /** text.e:1715										elsif argtext[1] = '0' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6070 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _6070, 48)){
        _6070 = NOVALUE;
        goto L27; // [1572] 2575
    }
    _6070 = NOVALUE;

    /** text.e:1716											argtext[1] = '+'*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    goto L27; // [1585] 2575
L35: 

    /** text.e:1719								elsif arg_list[argn] < 0 then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6072 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (binary_op_a(GREATEREQ, _6072, 0)){
        _6072 = NOVALUE;
        goto L27; // [1594] 2575
    }
    _6072 = NOVALUE;

    /** text.e:1720									if msign then*/
    if (_msign_10621 == 0)
    {
        goto L27; // [1602] 2575
    }
    else{
    }

    /** text.e:1721										if zfill = 0 then*/
    if (_zfill_10622 != 0)
    goto L37; // [1607] 1630

    /** text.e:1722											argtext = '(' & argtext[2..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6075 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6075 = 1;
    }
    rhs_slice_target = (object_ptr)&_6076;
    RHS_Slice(_argtext_10795, 2, _6075);
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _6076;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6076);
    _6076 = NOVALUE;
    goto L27; // [1627] 2575
L37: 

    /** text.e:1724											if argtext[2] = '0' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6079 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(NOTEQ, _6079, 48)){
        _6079 = NOVALUE;
        goto L38; // [1636] 1659
    }
    _6079 = NOVALUE;

    /** text.e:1725												argtext = '(' & argtext[3..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6081 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6081 = 1;
    }
    rhs_slice_target = (object_ptr)&_6082;
    RHS_Slice(_argtext_10795, 3, _6081);
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _6082;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6082);
    _6082 = NOVALUE;
    goto L27; // [1656] 2575
L38: 

    /** text.e:1729												argtext = argtext[2..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6084 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6084 = 1;
    }
    rhs_slice_target = (object_ptr)&_6085;
    RHS_Slice(_argtext_10795, 2, _6084);
    Append(&_argtext_10795, _6085, 41);
    DeRefDS(_6085);
    _6085 = NOVALUE;
    goto L27; // [1678] 2575
L30: 

    /** text.e:1735								argtext = sprintf("%x", arg_list[argn])*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6088 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_argtext_10795);
    _argtext_10795 = EPrintf(-9999999, _6087, _6088);
    _6088 = NOVALUE;

    /** text.e:1736								if zfill != 0 and width > 0 then*/
    _6090 = (_zfill_10622 != 0);
    if (_6090 == 0) {
        goto L27; // [1699] 2575
    }
    _6092 = (_width_10626 > 0);
    if (_6092 == 0)
    {
        DeRef(_6092);
        _6092 = NOVALUE;
        goto L27; // [1710] 2575
    }
    else{
        DeRef(_6092);
        _6092 = NOVALUE;
    }

    /** text.e:1737									if width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6093 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6093 = 1;
    }
    if (_width_10626 <= _6093)
    goto L27; // [1720] 2575

    /** text.e:1738										argtext = repeat('0', width - length(argtext)) & argtext*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6095 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6095 = 1;
    }
    _6096 = _width_10626 - _6095;
    _6095 = NOVALUE;
    _6097 = Repeat(48, _6096);
    _6096 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _6097, _argtext_10795);
    DeRefDS(_6097);
    _6097 = NOVALUE;
    DeRef(_6097);
    _6097 = NOVALUE;
    goto L27; // [1744] 2575
L29: 

    /** text.e:1743						elsif atom(arg_list[argn]) then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6099 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    _6100 = IS_ATOM(_6099);
    _6099 = NOVALUE;
    if (_6100 == 0)
    {
        _6100 = NOVALUE;
        goto L39; // [1756] 2159
    }
    else{
        _6100 = NOVALUE;
    }

    /** text.e:1744							if istext then*/
    if (_istext_10635 == 0)
    {
        goto L3A; // [1763] 1790
    }
    else{
    }

    /** text.e:1745								argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(arg_list[argn])))}*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6101 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_ATOM_INT(_6101))
    _6102 = e_floor(_6101);
    else
    _6102 = unary_op(FLOOR, _6101);
    _6101 = NOVALUE;
    _6103 = _10abs(_6102);
    _6102 = NOVALUE;
    _6104 = binary_op(AND_BITS, _406, _6103);
    DeRef(_6103);
    _6103 = NOVALUE;
    _0 = _argtext_10795;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6104;
    _argtext_10795 = MAKE_SEQ(_1);
    DeRef(_0);
    _6104 = NOVALUE;
    goto L27; // [1787] 2575
L3A: 

    /** text.e:1748								if hexout then*/
    if (_hexout_10632 == 0)
    {
        goto L3B; // [1794] 1862
    }
    else{
    }

    /** text.e:1749									argtext = sprintf("%x", arg_list[argn])*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6106 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_argtext_10795);
    _argtext_10795 = EPrintf(-9999999, _6087, _6106);
    _6106 = NOVALUE;

    /** text.e:1750									if zfill != 0 and width > 0 then*/
    _6108 = (_zfill_10622 != 0);
    if (_6108 == 0) {
        goto L27; // [1815] 2575
    }
    _6110 = (_width_10626 > 0);
    if (_6110 == 0)
    {
        DeRef(_6110);
        _6110 = NOVALUE;
        goto L27; // [1826] 2575
    }
    else{
        DeRef(_6110);
        _6110 = NOVALUE;
    }

    /** text.e:1751										if width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6111 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6111 = 1;
    }
    if (_width_10626 <= _6111)
    goto L27; // [1836] 2575

    /** text.e:1752											argtext = repeat('0', width - length(argtext)) & argtext*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6113 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6113 = 1;
    }
    _6114 = _width_10626 - _6113;
    _6113 = NOVALUE;
    _6115 = Repeat(48, _6114);
    _6114 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _6115, _argtext_10795);
    DeRefDS(_6115);
    _6115 = NOVALUE;
    DeRef(_6115);
    _6115 = NOVALUE;
    goto L27; // [1859] 2575
L3B: 

    /** text.e:1756									argtext = trim(sprintf("%15.15g", arg_list[argn]))*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6118 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    _6119 = EPrintf(-9999999, _6117, _6118);
    _6118 = NOVALUE;
    RefDS(_4749);
    _0 = _argtext_10795;
    _argtext_10795 = _13trim(_6119, _4749, 0);
    DeRef(_0);
    _6119 = NOVALUE;

    /** text.e:1758									while ep != 0 with entry do*/
    goto L3C; // [1882] 1905
L3D: 
    if (_ep_10641 == 0)
    goto L3E; // [1887] 1917

    /** text.e:1759										argtext = remove(argtext, ep+2)*/
    _6122 = _ep_10641 + 2;
    if ((object)((uintptr_t)_6122 + (uintptr_t)HIGH_BITS) >= 0){
        _6122 = NewDouble((eudouble)_6122);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_10795);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_6122)) ? _6122 : (object)(DBL_PTR(_6122)->dbl);
        int stop = (IS_ATOM_INT(_6122)) ? _6122 : (object)(DBL_PTR(_6122)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_10795), start, &_argtext_10795 );
            }
            else Tail(SEQ_PTR(_argtext_10795), stop+1, &_argtext_10795);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_10795), start, &_argtext_10795);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_10795 = Remove_elements(start, stop, (SEQ_PTR(_argtext_10795)->ref == 1));
        }
    }
    DeRef(_6122);
    _6122 = NOVALUE;
    _6122 = NOVALUE;

    /** text.e:1760									entry*/
L3C: 

    /** text.e:1761										ep = match("e+0", argtext)*/
    _ep_10641 = e_match_from(_6124, _argtext_10795, 1);

    /** text.e:1762									end while*/
    goto L3D; // [1914] 1885
L3E: 

    /** text.e:1763									if zfill != 0 and width > 0 then*/
    _6126 = (_zfill_10622 != 0);
    if (_6126 == 0) {
        goto L3F; // [1925] 2010
    }
    _6128 = (_width_10626 > 0);
    if (_6128 == 0)
    {
        DeRef(_6128);
        _6128 = NOVALUE;
        goto L3F; // [1936] 2010
    }
    else{
        DeRef(_6128);
        _6128 = NOVALUE;
    }

    /** text.e:1764										if width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6129 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6129 = 1;
    }
    if (_width_10626 <= _6129)
    goto L40; // [1946] 2009

    /** text.e:1765											if argtext[1] = '-' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6131 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _6131, 45)){
        _6131 = NOVALUE;
        goto L41; // [1956] 1990
    }
    _6131 = NOVALUE;

    /** text.e:1766												argtext = '-' & repeat('0', width - length(argtext)) & argtext[2..$]*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6133 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6133 = 1;
    }
    _6134 = _width_10626 - _6133;
    _6133 = NOVALUE;
    _6135 = Repeat(48, _6134);
    _6134 = NOVALUE;
    if (IS_SEQUENCE(_argtext_10795)){
            _6136 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6136 = 1;
    }
    rhs_slice_target = (object_ptr)&_6137;
    RHS_Slice(_argtext_10795, 2, _6136);
    {
        object concat_list[3];

        concat_list[0] = _6137;
        concat_list[1] = _6135;
        concat_list[2] = 45;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6137);
    _6137 = NOVALUE;
    DeRefDS(_6135);
    _6135 = NOVALUE;
    goto L42; // [1987] 2008
L41: 

    /** text.e:1768												argtext = repeat('0', width - length(argtext)) & argtext*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6139 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6139 = 1;
    }
    _6140 = _width_10626 - _6139;
    _6139 = NOVALUE;
    _6141 = Repeat(48, _6140);
    _6140 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _6141, _argtext_10795);
    DeRefDS(_6141);
    _6141 = NOVALUE;
    DeRef(_6141);
    _6141 = NOVALUE;
L42: 
L40: 
L3F: 

    /** text.e:1772									if arg_list[argn] > 0 then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6143 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (binary_op_a(LESSEQ, _6143, 0)){
        _6143 = NOVALUE;
        goto L43; // [2016] 2064
    }
    _6143 = NOVALUE;

    /** text.e:1773										if psign  then*/
    if (_psign_10620 == 0)
    {
        goto L27; // [2024] 2575
    }
    else{
    }

    /** text.e:1774											if zfill = 0 then*/
    if (_zfill_10622 != 0)
    goto L44; // [2029] 2042

    /** text.e:1775												argtext = '+' & argtext*/
    Prepend(&_argtext_10795, _argtext_10795, 43);
    goto L27; // [2039] 2575
L44: 

    /** text.e:1776											elsif argtext[1] = '0' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6147 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _6147, 48)){
        _6147 = NOVALUE;
        goto L27; // [2048] 2575
    }
    _6147 = NOVALUE;

    /** text.e:1777												argtext[1] = '+'*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 43;
    DeRef(_1);
    goto L27; // [2061] 2575
L43: 

    /** text.e:1780									elsif arg_list[argn] < 0 then*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6149 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (binary_op_a(GREATEREQ, _6149, 0)){
        _6149 = NOVALUE;
        goto L27; // [2070] 2575
    }
    _6149 = NOVALUE;

    /** text.e:1781										if msign then*/
    if (_msign_10621 == 0)
    {
        goto L27; // [2078] 2575
    }
    else{
    }

    /** text.e:1782											if zfill = 0 then*/
    if (_zfill_10622 != 0)
    goto L45; // [2083] 2106

    /** text.e:1783												argtext = '(' & argtext[2..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6152 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6152 = 1;
    }
    rhs_slice_target = (object_ptr)&_6153;
    RHS_Slice(_argtext_10795, 2, _6152);
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _6153;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6153);
    _6153 = NOVALUE;
    goto L27; // [2103] 2575
L45: 

    /** text.e:1785												if argtext[2] = '0' then*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6155 = (object)*(((s1_ptr)_2)->base + 2);
    if (binary_op_a(NOTEQ, _6155, 48)){
        _6155 = NOVALUE;
        goto L46; // [2112] 2135
    }
    _6155 = NOVALUE;

    /** text.e:1786													argtext = '(' & argtext[3..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6157 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6157 = 1;
    }
    rhs_slice_target = (object_ptr)&_6158;
    RHS_Slice(_argtext_10795, 3, _6157);
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _6158;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6158);
    _6158 = NOVALUE;
    goto L27; // [2132] 2575
L46: 

    /** text.e:1788													argtext = argtext[2..$] & ')'*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6160 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6160 = 1;
    }
    rhs_slice_target = (object_ptr)&_6161;
    RHS_Slice(_argtext_10795, 2, _6160);
    Append(&_argtext_10795, _6161, 41);
    DeRefDS(_6161);
    _6161 = NOVALUE;
    goto L27; // [2156] 2575
L39: 

    /** text.e:1797							if alt != 0 and length(arg_list[argn]) = 2 then*/
    _6163 = (_alt_10625 != 0);
    if (_6163 == 0) {
        goto L47; // [2167] 2486
    }
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6165 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    if (IS_SEQUENCE(_6165)){
            _6166 = SEQ_PTR(_6165)->length;
    }
    else {
        _6166 = 1;
    }
    _6165 = NOVALUE;
    _6167 = (_6166 == 2);
    _6166 = NOVALUE;
    if (_6167 == 0)
    {
        DeRef(_6167);
        _6167 = NOVALUE;
        goto L47; // [2183] 2486
    }
    else{
        DeRef(_6167);
        _6167 = NOVALUE;
    }

    /** text.e:1798								object tempv*/

    /** text.e:1799								if atom(prevargv) then*/
    _6168 = IS_ATOM(_prevargv_10636);
    if (_6168 == 0)
    {
        _6168 = NOVALUE;
        goto L48; // [2193] 2229
    }
    else{
        _6168 = NOVALUE;
    }

    /** text.e:1800									if prevargv != 1 then*/
    if (binary_op_a(EQUALS, _prevargv_10636, 1)){
        goto L49; // [2198] 2215
    }

    /** text.e:1801										tempv = arg_list[argn][1]*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6170 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_tempv_11027);
    _2 = (object)SEQ_PTR(_6170);
    _tempv_11027 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_11027);
    _6170 = NOVALUE;
    goto L4A; // [2212] 2263
L49: 

    /** text.e:1803										tempv = arg_list[argn][2]*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6172 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_tempv_11027);
    _2 = (object)SEQ_PTR(_6172);
    _tempv_11027 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_11027);
    _6172 = NOVALUE;
    goto L4A; // [2226] 2263
L48: 

    /** text.e:1806									if length(prevargv) = 0 then*/
    if (IS_SEQUENCE(_prevargv_10636)){
            _6174 = SEQ_PTR(_prevargv_10636)->length;
    }
    else {
        _6174 = 1;
    }
    if (_6174 != 0)
    goto L4B; // [2234] 2251

    /** text.e:1807										tempv = arg_list[argn][1]*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6176 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_tempv_11027);
    _2 = (object)SEQ_PTR(_6176);
    _tempv_11027 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_tempv_11027);
    _6176 = NOVALUE;
    goto L4C; // [2248] 2262
L4B: 

    /** text.e:1809										tempv = arg_list[argn][2]*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6178 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    DeRef(_tempv_11027);
    _2 = (object)SEQ_PTR(_6178);
    _tempv_11027 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_tempv_11027);
    _6178 = NOVALUE;
L4C: 
L4A: 

    /** text.e:1813								if string(tempv) then*/
    Ref(_tempv_11027);
    _6180 = _9string(_tempv_11027);
    if (_6180 == 0) {
        DeRef(_6180);
        _6180 = NOVALUE;
        goto L4D; // [2271] 2284
    }
    else {
        if (!IS_ATOM_INT(_6180) && DBL_PTR(_6180)->dbl == 0.0){
            DeRef(_6180);
            _6180 = NOVALUE;
            goto L4D; // [2271] 2284
        }
        DeRef(_6180);
        _6180 = NOVALUE;
    }
    DeRef(_6180);
    _6180 = NOVALUE;

    /** text.e:1814									argtext = tempv*/
    Ref(_tempv_11027);
    DeRef(_argtext_10795);
    _argtext_10795 = _tempv_11027;
    goto L4E; // [2281] 2481
L4D: 

    /** text.e:1815								elsif integer(tempv) then*/
    if (IS_ATOM_INT(_tempv_11027))
    _6181 = 1;
    else if (IS_ATOM_DBL(_tempv_11027))
    _6181 = IS_ATOM_INT(DoubleToInt(_tempv_11027));
    else
    _6181 = 0;
    if (_6181 == 0)
    {
        _6181 = NOVALUE;
        goto L4F; // [2289] 2355
    }
    else{
        _6181 = NOVALUE;
    }

    /** text.e:1816									if istext then*/
    if (_istext_10635 == 0)
    {
        goto L50; // [2294] 2314
    }
    else{
    }

    /** text.e:1817										argtext = {and_bits(0xFFFF_FFFF, math:abs(tempv))}*/
    Ref(_tempv_11027);
    _6182 = _10abs(_tempv_11027);
    _6183 = binary_op(AND_BITS, _406, _6182);
    DeRef(_6182);
    _6182 = NOVALUE;
    _0 = _argtext_10795;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6183;
    _argtext_10795 = MAKE_SEQ(_1);
    DeRef(_0);
    _6183 = NOVALUE;
    goto L4E; // [2311] 2481
L50: 

    /** text.e:1819									elsif bwz != 0 and tempv = 0 then*/
    _6185 = (_bwz_10623 != 0);
    if (_6185 == 0) {
        goto L51; // [2322] 2345
    }
    if (IS_ATOM_INT(_tempv_11027)) {
        _6187 = (_tempv_11027 == 0);
    }
    else {
        _6187 = binary_op(EQUALS, _tempv_11027, 0);
    }
    if (_6187 == 0) {
        DeRef(_6187);
        _6187 = NOVALUE;
        goto L51; // [2331] 2345
    }
    else {
        if (!IS_ATOM_INT(_6187) && DBL_PTR(_6187)->dbl == 0.0){
            DeRef(_6187);
            _6187 = NOVALUE;
            goto L51; // [2331] 2345
        }
        DeRef(_6187);
        _6187 = NOVALUE;
    }
    DeRef(_6187);
    _6187 = NOVALUE;

    /** text.e:1820										argtext = repeat(' ', width)*/
    DeRef(_argtext_10795);
    _argtext_10795 = Repeat(32, _width_10626);
    goto L4E; // [2342] 2481
L51: 

    /** text.e:1822										argtext = sprintf("%d", tempv)*/
    DeRef(_argtext_10795);
    _argtext_10795 = EPrintf(-9999999, _1413, _tempv_11027);
    goto L4E; // [2352] 2481
L4F: 

    /** text.e:1825								elsif atom(tempv) then*/
    _6190 = IS_ATOM(_tempv_11027);
    if (_6190 == 0)
    {
        _6190 = NOVALUE;
        goto L52; // [2360] 2437
    }
    else{
        _6190 = NOVALUE;
    }

    /** text.e:1826									if istext then*/
    if (_istext_10635 == 0)
    {
        goto L53; // [2365] 2388
    }
    else{
    }

    /** text.e:1827										argtext = {and_bits(0xFFFF_FFFF, math:abs(floor(tempv)))}*/
    if (IS_ATOM_INT(_tempv_11027))
    _6191 = e_floor(_tempv_11027);
    else
    _6191 = unary_op(FLOOR, _tempv_11027);
    _6192 = _10abs(_6191);
    _6191 = NOVALUE;
    _6193 = binary_op(AND_BITS, _406, _6192);
    DeRef(_6192);
    _6192 = NOVALUE;
    _0 = _argtext_10795;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _6193;
    _argtext_10795 = MAKE_SEQ(_1);
    DeRef(_0);
    _6193 = NOVALUE;
    goto L4E; // [2385] 2481
L53: 

    /** text.e:1828									elsif bwz != 0 and tempv = 0 then*/
    _6195 = (_bwz_10623 != 0);
    if (_6195 == 0) {
        goto L54; // [2396] 2419
    }
    if (IS_ATOM_INT(_tempv_11027)) {
        _6197 = (_tempv_11027 == 0);
    }
    else {
        _6197 = binary_op(EQUALS, _tempv_11027, 0);
    }
    if (_6197 == 0) {
        DeRef(_6197);
        _6197 = NOVALUE;
        goto L54; // [2405] 2419
    }
    else {
        if (!IS_ATOM_INT(_6197) && DBL_PTR(_6197)->dbl == 0.0){
            DeRef(_6197);
            _6197 = NOVALUE;
            goto L54; // [2405] 2419
        }
        DeRef(_6197);
        _6197 = NOVALUE;
    }
    DeRef(_6197);
    _6197 = NOVALUE;

    /** text.e:1829										argtext = repeat(' ', width)*/
    DeRef(_argtext_10795);
    _argtext_10795 = Repeat(32, _width_10626);
    goto L4E; // [2416] 2481
L54: 

    /** text.e:1831										argtext = trim(sprintf("%15.15g", tempv))*/
    _6199 = EPrintf(-9999999, _6117, _tempv_11027);
    RefDS(_4749);
    _0 = _argtext_10795;
    _argtext_10795 = _13trim(_6199, _4749, 0);
    DeRef(_0);
    _6199 = NOVALUE;
    goto L4E; // [2434] 2481
L52: 

    /** text.e:1834									argtext = pretty:pretty_sprint( tempv,*/
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1413);
    ((intptr_t*)_2)[5] = _1413;
    RefDS(_6201);
    ((intptr_t*)_2)[6] = _6201;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _6202 = MAKE_SEQ(_1);
    DeRef(_options_inlined_pretty_sprint_at_2453_11081);
    _options_inlined_pretty_sprint_at_2453_11081 = _6202;
    _6202 = NOVALUE;

    /** pretty.e:364		pretty_printing = 0*/
    _25pretty_printing_9117 = 0;

    /** pretty.e:365		pretty( x, options )*/
    Ref(_tempv_11027);
    RefDS(_options_inlined_pretty_sprint_at_2453_11081);
    _25pretty(_tempv_11027, _options_inlined_pretty_sprint_at_2453_11081);

    /** pretty.e:366		return pretty_line*/
    RefDS(_25pretty_line_9120);
    DeRef(_argtext_10795);
    _argtext_10795 = _25pretty_line_9120;
    DeRef(_options_inlined_pretty_sprint_at_2453_11081);
    _options_inlined_pretty_sprint_at_2453_11081 = NOVALUE;
L4E: 
    DeRef(_tempv_11027);
    _tempv_11027 = NOVALUE;
    goto L55; // [2483] 2562
L47: 

    /** text.e:1839								argtext = pretty:pretty_sprint( arg_list[argn],*/
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _6203 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    _1 = NewS1(10);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 2;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 1;
    ((intptr_t*)_2)[4] = 1000;
    RefDS(_1413);
    ((intptr_t*)_2)[5] = _1413;
    RefDS(_6201);
    ((intptr_t*)_2)[6] = _6201;
    ((intptr_t*)_2)[7] = 32;
    ((intptr_t*)_2)[8] = 127;
    ((intptr_t*)_2)[9] = 1;
    ((intptr_t*)_2)[10] = 0;
    _6204 = MAKE_SEQ(_1);
    Ref(_6203);
    DeRef(_x_inlined_pretty_sprint_at_2506_11087);
    _x_inlined_pretty_sprint_at_2506_11087 = _6203;
    _6203 = NOVALUE;
    DeRef(_options_inlined_pretty_sprint_at_2509_11088);
    _options_inlined_pretty_sprint_at_2509_11088 = _6204;
    _6204 = NOVALUE;

    /** pretty.e:364		pretty_printing = 0*/
    _25pretty_printing_9117 = 0;

    /** pretty.e:365		pretty( x, options )*/
    Ref(_x_inlined_pretty_sprint_at_2506_11087);
    RefDS(_options_inlined_pretty_sprint_at_2509_11088);
    _25pretty(_x_inlined_pretty_sprint_at_2506_11087, _options_inlined_pretty_sprint_at_2509_11088);

    /** pretty.e:366		return pretty_line*/
    RefDS(_25pretty_line_9120);
    DeRef(_argtext_10795);
    _argtext_10795 = _25pretty_line_9120;
    DeRef(_x_inlined_pretty_sprint_at_2506_11087);
    _x_inlined_pretty_sprint_at_2506_11087 = NOVALUE;
    DeRef(_options_inlined_pretty_sprint_at_2509_11088);
    _options_inlined_pretty_sprint_at_2509_11088 = NOVALUE;

    /** text.e:1844							while ep != 0 with entry do*/
    goto L55; // [2539] 2562
L56: 
    if (_ep_10641 == 0)
    goto L57; // [2544] 2574

    /** text.e:1845								argtext = remove(argtext, ep+2)*/
    _6206 = _ep_10641 + 2;
    if ((object)((uintptr_t)_6206 + (uintptr_t)HIGH_BITS) >= 0){
        _6206 = NewDouble((eudouble)_6206);
    }
    {
        s1_ptr assign_space = SEQ_PTR(_argtext_10795);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_6206)) ? _6206 : (object)(DBL_PTR(_6206)->dbl);
        int stop = (IS_ATOM_INT(_6206)) ? _6206 : (object)(DBL_PTR(_6206)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_argtext_10795), start, &_argtext_10795 );
            }
            else Tail(SEQ_PTR(_argtext_10795), stop+1, &_argtext_10795);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_argtext_10795), start, &_argtext_10795);
        }
        else {
            assign_slice_seq = &assign_space;
            _argtext_10795 = Remove_elements(start, stop, (SEQ_PTR(_argtext_10795)->ref == 1));
        }
    }
    DeRef(_6206);
    _6206 = NOVALUE;
    _6206 = NOVALUE;

    /** text.e:1846							entry*/
L55: 

    /** text.e:1847								ep = match("e+0", argtext)*/
    _ep_10641 = e_match_from(_6124, _argtext_10795, 1);

    /** text.e:1848							end while*/
    goto L56; // [2571] 2542
L57: 
L27: 

    /** text.e:1850		    			currargv = arg_list[argn]*/
    DeRef(_currargv_10637);
    _2 = (object)SEQ_PTR(_arg_list_10612);
    _currargv_10637 = (object)*(((s1_ptr)_2)->base + _argn_10629);
    Ref(_currargv_10637);
L24: 

    /** text.e:1854	    			if length(argtext) > 0 then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6210 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6210 = 1;
    }
    if (_6210 <= 0)
    goto L58; // [2587] 3357

    /** text.e:1855	    				switch cap do*/
    _0 = _cap_10618;
    switch ( _0 ){ 

        /** text.e:1856	    					case 'u' then*/
        case 117:

        /** text.e:1857	    						argtext = upper(argtext)*/
        RefDS(_argtext_10795);
        _0 = _argtext_10795;
        _argtext_10795 = _13upper(_argtext_10795);
        DeRefDS(_0);
        goto L59; // [2612] 2678

        /** text.e:1858	    					case 'l' then*/
        case 108:

        /** text.e:1859	    						argtext = lower(argtext)*/
        RefDS(_argtext_10795);
        _0 = _argtext_10795;
        _argtext_10795 = _13lower(_argtext_10795);
        DeRefDS(_0);
        goto L59; // [2626] 2678

        /** text.e:1860	    					case 'w' then*/
        case 119:

        /** text.e:1861	    						argtext = proper(argtext)*/
        RefDS(_argtext_10795);
        _0 = _argtext_10795;
        _argtext_10795 = _13proper(_argtext_10795);
        DeRefDS(_0);
        goto L59; // [2640] 2678

        /** text.e:1862	    					case 0 then*/
        case 0:

        /** text.e:1864								cap = cap*/
        _cap_10618 = _cap_10618;
        goto L59; // [2651] 2678

        /** text.e:1866	    					case else*/
        default:

        /** text.e:1867	    						error:crash("logic error: 'cap' mode in format.")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_2660_11111);
        _msg_inlined_crash_at_2660_11111 = EPrintf(-9999999, _6217, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_2660_11111);

        /** error.e:53	end procedure*/
        goto L5A; // [2672] 2675
L5A: 
        DeRefi(_msg_inlined_crash_at_2660_11111);
        _msg_inlined_crash_at_2660_11111 = NOVALUE;
    ;}L59: 

    /** text.e:1871						if atom(currargv) then*/
    _6218 = IS_ATOM(_currargv_10637);
    if (_6218 == 0)
    {
        _6218 = NOVALUE;
        goto L5B; // [2685] 2824
    }
    else{
        _6218 = NOVALUE;
    }

    /** text.e:1872							if find('e', argtext) = 0 then*/
    _6219 = find_from(101, _argtext_10795, 1);
    if (_6219 != 0)
    goto L5C; // [2695] 2823

    /** text.e:1874								if decs != -1 then*/
    if (_decs_10627 == -1)
    goto L5D; // [2703] 2822

    /** text.e:1875									pos = find('.', argtext)*/
    _pos_10628 = find_from(46, _argtext_10795, 1);

    /** text.e:1876									if pos then*/
    if (_pos_10628 == 0)
    {
        goto L5E; // [2716] 2801
    }
    else{
    }

    /** text.e:1877										if decs = 0 then*/
    if (_decs_10627 != 0)
    goto L5F; // [2721] 2739

    /** text.e:1878											argtext = argtext [1 .. pos-1 ]*/
    _6224 = _pos_10628 - 1;
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, 1, _6224);
    goto L60; // [2736] 2821
L5F: 

    /** text.e:1880											pos = length(argtext) - pos*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6226 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6226 = 1;
    }
    _pos_10628 = _6226 - _pos_10628;
    _6226 = NOVALUE;

    /** text.e:1881											if pos > decs then*/
    if (_pos_10628 <= _decs_10627)
    goto L61; // [2750] 2775

    /** text.e:1882												argtext = argtext[ 1 .. $ - pos + decs ]*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6229 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6229 = 1;
    }
    _6230 = _6229 - _pos_10628;
    if ((object)((uintptr_t)_6230 +(uintptr_t) HIGH_BITS) >= 0){
        _6230 = NewDouble((eudouble)_6230);
    }
    _6229 = NOVALUE;
    if (IS_ATOM_INT(_6230)) {
        _6231 = _6230 + _decs_10627;
    }
    else {
        _6231 = NewDouble(DBL_PTR(_6230)->dbl + (eudouble)_decs_10627);
    }
    DeRef(_6230);
    _6230 = NOVALUE;
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, 1, _6231);
    goto L60; // [2772] 2821
L61: 

    /** text.e:1883											elsif pos < decs then*/
    if (_pos_10628 >= _decs_10627)
    goto L60; // [2777] 2821

    /** text.e:1884												argtext = argtext & repeat('0', decs - pos)*/
    _6234 = _decs_10627 - _pos_10628;
    _6235 = Repeat(48, _6234);
    _6234 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _argtext_10795, _6235);
    DeRefDS(_6235);
    _6235 = NOVALUE;
    goto L60; // [2798] 2821
L5E: 

    /** text.e:1887									elsif decs > 0 then*/
    if (_decs_10627 <= 0)
    goto L62; // [2803] 2820

    /** text.e:1888										argtext = argtext & '.' & repeat('0', decs)*/
    _6238 = Repeat(48, _decs_10627);
    {
        object concat_list[3];

        concat_list[0] = _6238;
        concat_list[1] = 46;
        concat_list[2] = _argtext_10795;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6238);
    _6238 = NOVALUE;
L62: 
L60: 
L5D: 
L5C: 
L5B: 

    /** text.e:1895	    				if align = 0 then*/
    if (_align_10619 != 0)
    goto L63; // [2828] 2855

    /** text.e:1896	    					if atom(currargv) then*/
    _6241 = IS_ATOM(_currargv_10637);
    if (_6241 == 0)
    {
        _6241 = NOVALUE;
        goto L64; // [2837] 2848
    }
    else{
        _6241 = NOVALUE;
    }

    /** text.e:1897	    						align = '>'*/
    _align_10619 = 62;
    goto L65; // [2845] 2854
L64: 

    /** text.e:1899	    						align = '<'*/
    _align_10619 = 60;
L65: 
L63: 

    /** text.e:1903	    				if atom(currargv) then*/
    _6242 = IS_ATOM(_currargv_10637);
    if (_6242 == 0)
    {
        _6242 = NOVALUE;
        goto L66; // [2860] 3061
    }
    else{
        _6242 = NOVALUE;
    }

    /** text.e:1904		    				if tsep != 0 and zfill = 0 then*/
    _6243 = (_tsep_10634 != 0);
    if (_6243 == 0) {
        goto L67; // [2871] 3058
    }
    _6245 = (_zfill_10622 == 0);
    if (_6245 == 0)
    {
        DeRef(_6245);
        _6245 = NOVALUE;
        goto L67; // [2882] 3058
    }
    else{
        DeRef(_6245);
        _6245 = NOVALUE;
    }

    /** text.e:1905		    					integer dpos*/

    /** text.e:1906		    					integer dist*/

    /** text.e:1907		    					integer bracketed*/

    /** text.e:1909		    					if binout or hexout then*/
    if (_binout_10633 != 0) {
        goto L68; // [2895] 2904
    }
    if (_hexout_10632 == 0)
    {
        goto L69; // [2900] 2912
    }
    else{
    }
L68: 

    /** text.e:1910		    						dist = 4*/
    _dist_11155 = 4;
    goto L6A; // [2909] 2918
L69: 

    /** text.e:1912		    						dist = 3*/
    _dist_11155 = 3;
L6A: 

    /** text.e:1914		    					bracketed = (argtext[1] = '(')*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    _6247 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_6247)) {
        _bracketed_11156 = (_6247 == 40);
    }
    else {
        _bracketed_11156 = binary_op(EQUALS, _6247, 40);
    }
    _6247 = NOVALUE;
    if (!IS_ATOM_INT(_bracketed_11156)) {
        _1 = (object)(DBL_PTR(_bracketed_11156)->dbl);
        DeRefDS(_bracketed_11156);
        _bracketed_11156 = _1;
    }

    /** text.e:1915		    					if bracketed then*/
    if (_bracketed_11156 == 0)
    {
        goto L6B; // [2932] 2950
    }
    else{
    }

    /** text.e:1916		    						argtext = argtext[2 .. $-1]*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6249 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6249 = 1;
    }
    _6250 = _6249 - 1;
    _6249 = NOVALUE;
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, 2, _6250);
L6B: 

    /** text.e:1918		    					dpos = find('.', argtext)*/
    _dpos_11154 = find_from(46, _argtext_10795, 1);

    /** text.e:1919		    					if dpos = 0 then*/
    if (_dpos_11154 != 0)
    goto L6C; // [2959] 2975

    /** text.e:1920		    						dpos = length(argtext) + 1*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6254 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6254 = 1;
    }
    _dpos_11154 = _6254 + 1;
    _6254 = NOVALUE;
    goto L6D; // [2972] 2989
L6C: 

    /** text.e:1922		    						if tsep = '.' then*/
    if (_tsep_10634 != 46)
    goto L6E; // [2977] 2988

    /** text.e:1923		    							argtext[dpos] = ','*/
    _2 = (object)SEQ_PTR(_argtext_10795);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _argtext_10795 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _dpos_11154);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 44;
    DeRef(_1);
L6E: 
L6D: 

    /** text.e:1926		    					while dpos > dist do*/
L6F: 
    if (_dpos_11154 <= _dist_11155)
    goto L70; // [2996] 3043

    /** text.e:1927		    						dpos -= dist*/
    _dpos_11154 = _dpos_11154 - _dist_11155;

    /** text.e:1928		    						if dpos > 1 then*/
    if (_dpos_11154 <= 1)
    goto L6F; // [3008] 2994

    /** text.e:1929		    							argtext = argtext[1.. dpos - 1] & tsep & argtext[dpos .. $]*/
    _6260 = _dpos_11154 - 1;
    rhs_slice_target = (object_ptr)&_6261;
    RHS_Slice(_argtext_10795, 1, _6260);
    if (IS_SEQUENCE(_argtext_10795)){
            _6262 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6262 = 1;
    }
    rhs_slice_target = (object_ptr)&_6263;
    RHS_Slice(_argtext_10795, _dpos_11154, _6262);
    {
        object concat_list[3];

        concat_list[0] = _6263;
        concat_list[1] = _tsep_10634;
        concat_list[2] = _6261;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6263);
    _6263 = NOVALUE;
    DeRefDS(_6261);
    _6261 = NOVALUE;

    /** text.e:1931		    					end while*/
    goto L6F; // [3040] 2994
L70: 

    /** text.e:1932		    					if bracketed then*/
    if (_bracketed_11156 == 0)
    {
        goto L71; // [3045] 3057
    }
    else{
    }

    /** text.e:1933		    						argtext = '(' & argtext & ')'*/
    {
        object concat_list[3];

        concat_list[0] = 41;
        concat_list[1] = _argtext_10795;
        concat_list[2] = 40;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
L71: 
L67: 
L66: 

    /** text.e:1938	    				if width <= 0 then*/
    if (_width_10626 > 0)
    goto L72; // [3065] 3075

    /** text.e:1939	    					width = length(argtext)*/
    if (IS_SEQUENCE(_argtext_10795)){
            _width_10626 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _width_10626 = 1;
    }
L72: 

    /** text.e:1943	    				if width < length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6268 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6268 = 1;
    }
    if (_width_10626 >= _6268)
    goto L73; // [3080] 3211

    /** text.e:1944	    					if align = '>' then*/
    if (_align_10619 != 62)
    goto L74; // [3086] 3114

    /** text.e:1945	    						argtext = argtext[ $ - width + 1 .. $]*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6271 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6271 = 1;
    }
    _6272 = _6271 - _width_10626;
    if ((object)((uintptr_t)_6272 +(uintptr_t) HIGH_BITS) >= 0){
        _6272 = NewDouble((eudouble)_6272);
    }
    _6271 = NOVALUE;
    if (IS_ATOM_INT(_6272)) {
        _6273 = _6272 + 1;
        if (_6273 > MAXINT){
            _6273 = NewDouble((eudouble)_6273);
        }
    }
    else
    _6273 = binary_op(PLUS, 1, _6272);
    DeRef(_6272);
    _6272 = NOVALUE;
    if (IS_SEQUENCE(_argtext_10795)){
            _6274 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6274 = 1;
    }
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, _6273, _6274);
    goto L75; // [3111] 3348
L74: 

    /** text.e:1946	    					elsif align = 'c' then*/
    if (_align_10619 != 99)
    goto L76; // [3116] 3200

    /** text.e:1947	    						pos = length(argtext) - width*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6277 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6277 = 1;
    }
    _pos_10628 = _6277 - _width_10626;
    _6277 = NOVALUE;

    /** text.e:1948	    						if remainder(pos, 2) = 0 then*/
    _6279 = (_pos_10628 % 2);
    if (_6279 != 0)
    goto L77; // [3135] 3168

    /** text.e:1949	    							pos = pos / 2*/
    if (_pos_10628 & 1) {
        _pos_10628 = NewDouble((_pos_10628 >> 1) + 0.5);
    }
    else
    _pos_10628 = _pos_10628 >> 1;
    if (!IS_ATOM_INT(_pos_10628)) {
        _1 = (object)(DBL_PTR(_pos_10628)->dbl);
        DeRefDS(_pos_10628);
        _pos_10628 = _1;
    }

    /** text.e:1950	    							argtext = argtext[ pos + 1 .. $ - pos ]*/
    _6282 = _pos_10628 + 1;
    if (_6282 > MAXINT){
        _6282 = NewDouble((eudouble)_6282);
    }
    if (IS_SEQUENCE(_argtext_10795)){
            _6283 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6283 = 1;
    }
    _6284 = _6283 - _pos_10628;
    _6283 = NOVALUE;
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, _6282, _6284);
    goto L75; // [3165] 3348
L77: 

    /** text.e:1952	    							pos = floor(pos / 2)*/
    _pos_10628 = _pos_10628 >> 1;

    /** text.e:1953	    							argtext = argtext[ pos + 1 .. $ - pos - 1]*/
    _6287 = _pos_10628 + 1;
    if (_6287 > MAXINT){
        _6287 = NewDouble((eudouble)_6287);
    }
    if (IS_SEQUENCE(_argtext_10795)){
            _6288 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6288 = 1;
    }
    _6289 = _6288 - _pos_10628;
    if ((object)((uintptr_t)_6289 +(uintptr_t) HIGH_BITS) >= 0){
        _6289 = NewDouble((eudouble)_6289);
    }
    _6288 = NOVALUE;
    if (IS_ATOM_INT(_6289)) {
        _6290 = _6289 - 1;
    }
    else {
        _6290 = NewDouble(DBL_PTR(_6289)->dbl - (eudouble)1);
    }
    DeRef(_6289);
    _6289 = NOVALUE;
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, _6287, _6290);
    goto L75; // [3197] 3348
L76: 

    /** text.e:1956	    						argtext = argtext[ 1 .. width]*/
    rhs_slice_target = (object_ptr)&_argtext_10795;
    RHS_Slice(_argtext_10795, 1, _width_10626);
    goto L75; // [3208] 3348
L73: 

    /** text.e:1958	    				elsif width > length(argtext) then*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6293 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6293 = 1;
    }
    if (_width_10626 <= _6293)
    goto L78; // [3216] 3347

    /** text.e:1959							if align = '>' then*/
    if (_align_10619 != 62)
    goto L79; // [3222] 3246

    /** text.e:1960								argtext = repeat(' ', width - length(argtext)) & argtext*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6296 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6296 = 1;
    }
    _6297 = _width_10626 - _6296;
    _6296 = NOVALUE;
    _6298 = Repeat(32, _6297);
    _6297 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _6298, _argtext_10795);
    DeRefDS(_6298);
    _6298 = NOVALUE;
    DeRef(_6298);
    _6298 = NOVALUE;
    goto L7A; // [3243] 3346
L79: 

    /** text.e:1961	    					elsif align = 'c' then*/
    if (_align_10619 != 99)
    goto L7B; // [3248] 3328

    /** text.e:1962	    						pos = width - length(argtext)*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6301 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6301 = 1;
    }
    _pos_10628 = _width_10626 - _6301;
    _6301 = NOVALUE;

    /** text.e:1963	    						if remainder(pos, 2) = 0 then*/
    _6303 = (_pos_10628 % 2);
    if (_6303 != 0)
    goto L7C; // [3267] 3298

    /** text.e:1964	    							pos = pos / 2*/
    if (_pos_10628 & 1) {
        _pos_10628 = NewDouble((_pos_10628 >> 1) + 0.5);
    }
    else
    _pos_10628 = _pos_10628 >> 1;
    if (!IS_ATOM_INT(_pos_10628)) {
        _1 = (object)(DBL_PTR(_pos_10628)->dbl);
        DeRefDS(_pos_10628);
        _pos_10628 = _1;
    }

    /** text.e:1965	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos)*/
    _6306 = Repeat(32, _pos_10628);
    _6307 = Repeat(32, _pos_10628);
    {
        object concat_list[3];

        concat_list[0] = _6307;
        concat_list[1] = _argtext_10795;
        concat_list[2] = _6306;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6307);
    _6307 = NOVALUE;
    DeRefDS(_6306);
    _6306 = NOVALUE;
    goto L7A; // [3295] 3346
L7C: 

    /** text.e:1967	    							pos = floor(pos / 2)*/
    _pos_10628 = _pos_10628 >> 1;

    /** text.e:1968	    							argtext = repeat(' ', pos) & argtext & repeat(' ', pos + 1)*/
    _6310 = Repeat(32, _pos_10628);
    _6311 = _pos_10628 + 1;
    _6312 = Repeat(32, _6311);
    _6311 = NOVALUE;
    {
        object concat_list[3];

        concat_list[0] = _6312;
        concat_list[1] = _argtext_10795;
        concat_list[2] = _6310;
        Concat_N((object_ptr)&_argtext_10795, concat_list, 3);
    }
    DeRefDS(_6312);
    _6312 = NOVALUE;
    DeRefDS(_6310);
    _6310 = NOVALUE;
    goto L7A; // [3325] 3346
L7B: 

    /** text.e:1972								argtext = argtext & repeat(' ', width - length(argtext))*/
    if (IS_SEQUENCE(_argtext_10795)){
            _6314 = SEQ_PTR(_argtext_10795)->length;
    }
    else {
        _6314 = 1;
    }
    _6315 = _width_10626 - _6314;
    _6314 = NOVALUE;
    _6316 = Repeat(32, _6315);
    _6315 = NOVALUE;
    Concat((object_ptr)&_argtext_10795, _argtext_10795, _6316);
    DeRefDS(_6316);
    _6316 = NOVALUE;
L7A: 
L78: 
L75: 

    /** text.e:1975	    				result &= argtext*/
    Concat((object_ptr)&_result_10613, _result_10613, _argtext_10795);
    goto L7D; // [3354] 3370
L58: 

    /** text.e:1978	    				if spacer then*/
    if (_spacer_10624 == 0)
    {
        goto L7E; // [3359] 3369
    }
    else{
    }

    /** text.e:1979	    					result &= ' '*/
    Append(&_result_10613, _result_10613, 32);
L7E: 
L7D: 

    /** text.e:1983	   				if trimming then*/
    if (_trimming_10631 == 0)
    {
        goto L7F; // [3374] 3388
    }
    else{
    }

    /** text.e:1984	   					result = trim(result)*/
    RefDS(_result_10613);
    RefDS(_4749);
    _0 = _result_10613;
    _result_10613 = _13trim(_result_10613, _4749, 0);
    DeRefDS(_0);
L7F: 

    /** text.e:1987	    			tend = 0*/
    _tend_10617 = 0;

    /** text.e:1988			    	prevargv = currargv*/
    Ref(_currargv_10637);
    DeRef(_prevargv_10636);
    _prevargv_10636 = _currargv_10637;
L1F: 
    DeRef(_argtext_10795);
    _argtext_10795 = NOVALUE;

    /** text.e:1991	    end while*/
    goto L2; // [3406] 60
L3: 

    /** text.e:1993		return result*/
    DeRefDS(_format_pattern_10611);
    DeRef(_arg_list_10612);
    DeRef(_prevargv_10636);
    DeRef(_currargv_10637);
    DeRef(_idname_10638);
    DeRef(_envsym_10639);
    DeRefi(_envvar_10640);
    DeRef(_6010);
    _6010 = NOVALUE;
    DeRef(_5998);
    _5998 = NOVALUE;
    DeRef(_6243);
    _6243 = NOVALUE;
    DeRef(_6282);
    _6282 = NOVALUE;
    DeRef(_6195);
    _6195 = NOVALUE;
    DeRef(_6287);
    _6287 = NOVALUE;
    DeRef(_6029);
    _6029 = NOVALUE;
    DeRef(_5948);
    _5948 = NOVALUE;
    DeRef(_6273);
    _6273 = NOVALUE;
    DeRef(_6108);
    _6108 = NOVALUE;
    DeRef(_6090);
    _6090 = NOVALUE;
    DeRef(_6163);
    _6163 = NOVALUE;
    DeRef(_6250);
    _6250 = NOVALUE;
    DeRef(_6019);
    _6019 = NOVALUE;
    DeRef(_6224);
    _6224 = NOVALUE;
    DeRef(_6231);
    _6231 = NOVALUE;
    DeRef(_6260);
    _6260 = NOVALUE;
    DeRef(_6290);
    _6290 = NOVALUE;
    DeRef(_6126);
    _6126 = NOVALUE;
    DeRef(_5971);
    _5971 = NOVALUE;
    DeRef(_6284);
    _6284 = NOVALUE;
    DeRef(_6303);
    _6303 = NOVALUE;
    _6165 = NOVALUE;
    DeRef(_6185);
    _6185 = NOVALUE;
    DeRef(_6279);
    _6279 = NOVALUE;
    DeRef(_6047);
    _6047 = NOVALUE;
    return _result_10613;
    ;
}



// 0xF71311B5
