// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _36open_locked(object _file_path_15434)
{
    object _fh_15435 = NOVALUE;
    object _0, _1, _2;
    

    /** common.e:55		fh = open(file_path, "u")*/
    _fh_15435 = EOpen(_file_path_15434, _8580, 0);

    /** common.e:57		if fh = -1 then*/
    if (_fh_15435 != -1)
    goto L1; // [12] 24

    /** common.e:58			fh = open(file_path, "r")*/
    _fh_15435 = EOpen(_file_path_15434, _1522, 0);
L1: 

    /** common.e:61		return fh*/
    DeRefDS(_file_path_15434);
    return _fh_15435;
    ;
}


object _36get_eudir()
{
    object _possible_paths_15448 = NOVALUE;
    object _home_15453 = NOVALUE;
    object _possible_path_15467 = NOVALUE;
    object _possible_path_15481 = NOVALUE;
    object _file_check_15495 = NOVALUE;
    object _8621 = NOVALUE;
    object _8620 = NOVALUE;
    object _8619 = NOVALUE;
    object _8617 = NOVALUE;
    object _8615 = NOVALUE;
    object _8613 = NOVALUE;
    object _8612 = NOVALUE;
    object _8611 = NOVALUE;
    object _8610 = NOVALUE;
    object _8609 = NOVALUE;
    object _8607 = NOVALUE;
    object _8605 = NOVALUE;
    object _8604 = NOVALUE;
    object _8600 = NOVALUE;
    object _8594 = NOVALUE;
    object _8592 = NOVALUE;
    object _8586 = NOVALUE;
    object _8584 = NOVALUE;
    object _0, _1, _2;
    

    /** common.e:82		if sequence(eudir) then*/
    _8584 = IS_SEQUENCE(_36eudir_15430);
    if (_8584 == 0)
    {
        _8584 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _8584 = NOVALUE;
    }

    /** common.e:83			return eudir*/
    Ref(_36eudir_15430);
    DeRef(_possible_paths_15448);
    DeRefi(_home_15453);
    return _36eudir_15430;
L1: 

    /** common.e:86		eudir = getenv("EUDIR")*/
    DeRef(_36eudir_15430);
    _36eudir_15430 = EGetEnv(_4656);

    /** common.e:87		if sequence(eudir) then*/
    _8586 = IS_SEQUENCE(_36eudir_15430);
    if (_8586 == 0)
    {
        _8586 = NOVALUE;
        goto L2; // [32] 44
    }
    else{
        _8586 = NOVALUE;
    }

    /** common.e:88			return eudir*/
    Ref(_36eudir_15430);
    DeRef(_possible_paths_15448);
    DeRefi(_home_15453);
    return _36eudir_15430;
L2: 

    /** common.e:91		ifdef UNIX then*/

    /** common.e:92			sequence possible_paths = {*/
    _0 = _possible_paths_15448;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8587);
    ((intptr_t*)_2)[1] = _8587;
    RefDS(_8588);
    ((intptr_t*)_2)[2] = _8588;
    RefDS(_8589);
    ((intptr_t*)_2)[3] = _8589;
    _possible_paths_15448 = MAKE_SEQ(_1);
    DeRef(_0);

    /** common.e:97			object home = getenv("HOME")*/
    DeRefi(_home_15453);
    _home_15453 = EGetEnv(_4302);

    /** common.e:98			if sequence(home) then*/
    _8592 = IS_SEQUENCE(_home_15453);
    if (_8592 == 0)
    {
        _8592 = NOVALUE;
        goto L3; // [64] 78
    }
    else{
        _8592 = NOVALUE;
    }

    /** common.e:99				possible_paths = append(possible_paths, home & "/euphoria")*/
    if (IS_SEQUENCE(_home_15453) && IS_ATOM(_8593)) {
    }
    else if (IS_ATOM(_home_15453) && IS_SEQUENCE(_8593)) {
        Ref(_home_15453);
        Prepend(&_8594, _8593, _home_15453);
    }
    else {
        Concat((object_ptr)&_8594, _home_15453, _8593);
    }
    RefDS(_8594);
    Append(&_possible_paths_15448, _possible_paths_15448, _8594);
    DeRefDS(_8594);
    _8594 = NOVALUE;
L3: 

    /** common.e:118		for i = 1 to length(possible_paths) do*/
    if (IS_SEQUENCE(_possible_paths_15448)){
            _8600 = SEQ_PTR(_possible_paths_15448)->length;
    }
    else {
        _8600 = 1;
    }
    {
        object _i_15465;
        _i_15465 = 1;
L4: 
        if (_i_15465 > _8600){
            goto L5; // [85] 144
        }

        /** common.e:119			sequence possible_path = possible_paths[i]*/
        DeRef(_possible_path_15467);
        _2 = (object)SEQ_PTR(_possible_paths_15448);
        _possible_path_15467 = (object)*(((s1_ptr)_2)->base + _i_15465);
        RefDS(_possible_path_15467);

        /** common.e:121			if file_exists(possible_path & SLASH & "include" & SLASH & "euphoria.h") then*/
        {
            object concat_list[5];

            concat_list[0] = _8603;
            concat_list[1] = 47;
            concat_list[2] = _8602;
            concat_list[3] = 47;
            concat_list[4] = _possible_path_15467;
            Concat_N((object_ptr)&_8604, concat_list, 5);
        }
        _8605 = _16file_exists(_8604);
        _8604 = NOVALUE;
        if (_8605 == 0) {
            DeRef(_8605);
            _8605 = NOVALUE;
            goto L6; // [118] 135
        }
        else {
            if (!IS_ATOM_INT(_8605) && DBL_PTR(_8605)->dbl == 0.0){
                DeRef(_8605);
                _8605 = NOVALUE;
                goto L6; // [118] 135
            }
            DeRef(_8605);
            _8605 = NOVALUE;
        }
        DeRef(_8605);
        _8605 = NOVALUE;

        /** common.e:122				eudir = possible_path*/
        RefDS(_possible_path_15467);
        DeRef(_36eudir_15430);
        _36eudir_15430 = _possible_path_15467;

        /** common.e:123				return eudir*/
        RefDS(_36eudir_15430);
        DeRefDS(_possible_path_15467);
        DeRefDS(_possible_paths_15448);
        DeRefi(_home_15453);
        return _36eudir_15430;
L6: 
        DeRef(_possible_path_15467);
        _possible_path_15467 = NOVALUE;

        /** common.e:125		end for*/
        _i_15465 = _i_15465 + 1;
        goto L4; // [139] 92
L5: 
        ;
    }

    /** common.e:127		possible_paths = include_paths(0)*/
    _0 = _possible_paths_15448;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_4683);
    ((intptr_t*)_2)[1] = _4683;
    RefDS(_4682);
    ((intptr_t*)_2)[2] = _4682;
    RefDS(_4681);
    ((intptr_t*)_2)[3] = _4681;
    RefDS(_4680);
    ((intptr_t*)_2)[4] = _4680;
    _possible_paths_15448 = MAKE_SEQ(_1);
    DeRef(_0);

    /** common.e:128		for i = 1 to length(possible_paths) do*/
    _8607 = 4;
    {
        object _i_15479;
        _i_15479 = 1;
L7: 
        if (_i_15479 > 4){
            goto L8; // [158] 283
        }

        /** common.e:129			sequence possible_path = possible_paths[i]*/
        DeRef(_possible_path_15481);
        _2 = (object)SEQ_PTR(_possible_paths_15448);
        _possible_path_15481 = (object)*(((s1_ptr)_2)->base + _i_15479);
        RefDS(_possible_path_15481);

        /** common.e:130			if equal(possible_path[$], SLASH) then*/
        if (IS_SEQUENCE(_possible_path_15481)){
                _8609 = SEQ_PTR(_possible_path_15481)->length;
        }
        else {
            _8609 = 1;
        }
        _2 = (object)SEQ_PTR(_possible_path_15481);
        _8610 = (object)*(((s1_ptr)_2)->base + _8609);
        if (_8610 == 47)
        _8611 = 1;
        else if (IS_ATOM_INT(_8610) && IS_ATOM_INT(47))
        _8611 = 0;
        else
        _8611 = (compare(_8610, 47) == 0);
        _8610 = NOVALUE;
        if (_8611 == 0)
        {
            _8611 = NOVALUE;
            goto L9; // [188] 206
        }
        else{
            _8611 = NOVALUE;
        }

        /** common.e:131				possible_path = possible_path[1..$-1]*/
        if (IS_SEQUENCE(_possible_path_15481)){
                _8612 = SEQ_PTR(_possible_path_15481)->length;
        }
        else {
            _8612 = 1;
        }
        _8613 = _8612 - 1;
        _8612 = NOVALUE;
        rhs_slice_target = (object_ptr)&_possible_path_15481;
        RHS_Slice(_possible_path_15481, 1, _8613);
L9: 

        /** common.e:134			if not ends("include", possible_path) then*/
        RefDS(_8602);
        RefDS(_possible_path_15481);
        _8615 = _15ends(_8602, _possible_path_15481);
        if (IS_ATOM_INT(_8615)) {
            if (_8615 != 0){
                DeRef(_8615);
                _8615 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        else {
            if (DBL_PTR(_8615)->dbl != 0.0){
                DeRef(_8615);
                _8615 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        DeRef(_8615);
        _8615 = NOVALUE;

        /** common.e:135				continue*/
        DeRefDS(_possible_path_15481);
        _possible_path_15481 = NOVALUE;
        DeRef(_file_check_15495);
        _file_check_15495 = NOVALUE;
        goto LB; // [220] 278
LA: 

        /** common.e:138			sequence file_check = possible_path*/
        RefDS(_possible_path_15481);
        DeRef(_file_check_15495);
        _file_check_15495 = _possible_path_15481;

        /** common.e:139			file_check &= SLASH & "euphoria.h"*/
        Prepend(&_8617, _8603, 47);
        Concat((object_ptr)&_file_check_15495, _file_check_15495, _8617);
        DeRefDS(_8617);
        _8617 = NOVALUE;

        /** common.e:141			if file_exists(file_check) then*/
        RefDS(_file_check_15495);
        _8619 = _16file_exists(_file_check_15495);
        if (_8619 == 0) {
            DeRef(_8619);
            _8619 = NOVALUE;
            goto LC; // [248] 274
        }
        else {
            if (!IS_ATOM_INT(_8619) && DBL_PTR(_8619)->dbl == 0.0){
                DeRef(_8619);
                _8619 = NOVALUE;
                goto LC; // [248] 274
            }
            DeRef(_8619);
            _8619 = NOVALUE;
        }
        DeRef(_8619);
        _8619 = NOVALUE;

        /** common.e:142				eudir = possible_path[1..$-8] -- strip SLASH & "include"*/
        if (IS_SEQUENCE(_possible_path_15481)){
                _8620 = SEQ_PTR(_possible_path_15481)->length;
        }
        else {
            _8620 = 1;
        }
        _8621 = _8620 - 8;
        _8620 = NOVALUE;
        rhs_slice_target = (object_ptr)&_36eudir_15430;
        RHS_Slice(_possible_path_15481, 1, _8621);

        /** common.e:143				return eudir*/
        RefDS(_36eudir_15430);
        DeRefDS(_possible_path_15481);
        DeRefDS(_file_check_15495);
        DeRef(_possible_paths_15448);
        DeRefi(_home_15453);
        _8621 = NOVALUE;
        DeRef(_8613);
        _8613 = NOVALUE;
        return _36eudir_15430;
LC: 
        DeRef(_possible_path_15481);
        _possible_path_15481 = NOVALUE;
        DeRef(_file_check_15495);
        _file_check_15495 = NOVALUE;

        /** common.e:145		end for*/
LB: 
        _i_15479 = _i_15479 + 1;
        goto L7; // [278] 165
L8: 
        ;
    }

    /** common.e:147		return ""*/
    RefDS(_5);
    DeRef(_possible_paths_15448);
    DeRefi(_home_15453);
    DeRef(_8621);
    _8621 = NOVALUE;
    DeRef(_8613);
    _8613 = NOVALUE;
    return _5;
    ;
}


void _36set_eudir(object _new_eudir_15507)
{
    object _0, _1, _2;
    

    /** common.e:151		eudir = new_eudir*/
    RefDS(_new_eudir_15507);
    DeRef(_36eudir_15430);
    _36eudir_15430 = _new_eudir_15507;

    /** common.e:152		cmdline_eudir = 1*/
    _36cmdline_eudir_15431 = 1;

    /** common.e:153	end procedure*/
    DeRefDS(_new_eudir_15507);
    return;
    ;
}


object _36is_eudir_from_cmdline()
{
    object _0, _1, _2;
    

    /** common.e:156		return cmdline_eudir*/
    return _36cmdline_eudir_15431;
    ;
}



// 0x031FCE48
