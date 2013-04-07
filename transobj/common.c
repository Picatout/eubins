// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _37open_locked(object _file_path_15435)
{
    object _fh_15436 = NOVALUE;
// skipping _8590  name type: 0
// skipping _8589  name type: 0
// skipping _8588  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg open_locked pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg open_locked pc: 3 op: STARTLINE (58)

    /** common.e:55		fh = open(file_path, "u")*/
    // SubProg open_locked pc: 5 op: OPEN (37)
    _fh_15436 = EOpen(_file_path_15435, _8587, 0);
    // SubProg open_locked pc: 10 op: STARTLINE (58)

    /** common.e:57		if fh = -1 then*/
    // SubProg open_locked pc: 12 op: EQUALS_IFW_I (121)
    if (_fh_15436 != -1)
    goto L1; // [12] 24
    // SubProg open_locked pc: 16 op: STARTLINE (58)

    /** common.e:58			fh = open(file_path, "r")*/
    // SubProg open_locked pc: 18 op: OPEN (37)
    _fh_15436 = EOpen(_file_path_15435, _3928, 0);
    // SubProg open_locked pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 15433 op: 159
    // SubProg open_locked pc: 24 op: STARTLINE (58)

    /** common.e:61		return fh*/
    // SubProg open_locked pc: 26 op: RETURNF (28)

// Exiting block BLOCK: open_locked

// block var file_path_15435
    DeRefDS(_file_path_15435);
    return _fh_15436;
    // SubProg open_locked pc: 30 op: BADRETURNF (43)
    ;
}


object _37get_eudir()
{
    object _possible_paths_15449 = NOVALUE;
    object _home_15454 = NOVALUE;
    object _possible_path_15468 = NOVALUE;
    object _possible_path_15482 = NOVALUE;
    object _file_check_15496 = NOVALUE;
// skipping _8629  name type: 0
    object _8628 = NOVALUE; // 15504 8628
    object _8627 = NOVALUE; // 15503 8627
    object _8626 = NOVALUE; // 15502 8626
// skipping _8625  name type: 0
    object _8624 = NOVALUE; // 15498 8624
// skipping _8623  name type: 0
    object _8622 = NOVALUE; // 15494 8622
// skipping _8621  name type: 0
    object _8620 = NOVALUE; // 15490 8620
    object _8619 = NOVALUE; // 15489 8619
    object _8618 = NOVALUE; // 15488 8618
    object _8617 = NOVALUE; // 15486 8617
    object _8616 = NOVALUE; // 15485 8616
// skipping _8615  name type: 0
    object _8614 = NOVALUE; // 15481 8614
// skipping _8613  name type: 0
    object _8612 = NOVALUE; // 15477 8612
    object _8611 = NOVALUE; // 15476 8611
// skipping _8608  name type: 0
    object _8607 = NOVALUE; // 15467 8607
// skipping _8602  name type: 0
    object _8601 = NOVALUE; // 15459 8601
    object _8599 = NOVALUE; // 15457 8599
// skipping _8598  name type: 0
// skipping _8597  name type: 0
    object _8593 = NOVALUE; // 15448 8593
// skipping _8592  name type: 0
    object _8591 = NOVALUE; // 15445 8591
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_eudir pc: 1 op: STARTLINE (58)

    /** common.e:82		if sequence(eudir) then*/
    // SubProg get_eudir pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 5 op: IS_A_SEQUENCE (68)
    _8591 = IS_SEQUENCE(_37eudir_15431);
    // SubProg get_eudir pc: 8 op: IF (20)
    if (_8591 == 0)
    {
        _8591 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _8591 = NOVALUE;
    }
    // SubProg get_eudir pc: 11 op: STARTLINE (58)

    /** common.e:83			return eudir*/
    // SubProg get_eudir pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 15 op: RETURNF (28)
    Ref(_37eudir_15431);

// Exiting block BLOCK: get_eudir

// block var possible_paths_15449
    DeRef(_possible_paths_15449);

// block var home_15454
    DeRefi(_home_15454);
    return _37eudir_15431;
    // SubProg get_eudir pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 15442 op: 159
    // SubProg get_eudir pc: 20 op: STARTLINE (58)

    /** common.e:86		eudir = getenv("EUDIR")*/
    // SubProg get_eudir pc: 22 op: GETENV (91)
    DeRef(_37eudir_15431);
    _37eudir_15431 = EGetEnv(_3839);
    // SubProg get_eudir pc: 25 op: STARTLINE (58)

    /** common.e:87		if sequence(eudir) then*/
    // SubProg get_eudir pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 29 op: IS_A_SEQUENCE (68)
    _8593 = IS_SEQUENCE(_37eudir_15431);
    // SubProg get_eudir pc: 32 op: IF (20)
    if (_8593 == 0)
    {
        _8593 = NOVALUE;
        goto L2; // [32] 44
    }
    else{
        _8593 = NOVALUE;
    }
    // SubProg get_eudir pc: 35 op: STARTLINE (58)

    /** common.e:88			return eudir*/
    // SubProg get_eudir pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 39 op: RETURNF (28)
    Ref(_37eudir_15431);

// Exiting block BLOCK: get_eudir

// block var possible_paths_15449
    DeRef(_possible_paths_15449);

// block var home_15454
    DeRefi(_home_15454);
    return _37eudir_15431;
    // SubProg get_eudir pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 15442 op: 159
    // SubProg get_eudir pc: 44 op: STARTLINE (58)

    /** common.e:91		ifdef UNIX then*/
    // SubProg get_eudir pc: 46 op: STARTLINE (58)

    /** common.e:92			sequence possible_paths = {*/
    // SubProg get_eudir pc: 48 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_15449;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_8594);
    ((intptr_t*)_2)[1] = _8594;
    RefDS(_8595);
    ((intptr_t*)_2)[2] = _8595;
    RefDS(_8596);
    ((intptr_t*)_2)[3] = _8596;
    _possible_paths_15449 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 54 op: STARTLINE (58)

    /** common.e:97			object home = getenv("HOME")*/
    // SubProg get_eudir pc: 56 op: GETENV (91)
    DeRefi(_home_15454);
    _home_15454 = EGetEnv(_3484);
    // SubProg get_eudir pc: 59 op: STARTLINE (58)

    /** common.e:98			if sequence(home) then*/
    // SubProg get_eudir pc: 61 op: IS_A_SEQUENCE (68)
    _8599 = IS_SEQUENCE(_home_15454);
    // SubProg get_eudir pc: 64 op: IF (20)
    if (_8599 == 0)
    {
        _8599 = NOVALUE;
        goto L3; // [64] 78
    }
    else{
        _8599 = NOVALUE;
    }
    // SubProg get_eudir pc: 67 op: STARTLINE (58)

    /** common.e:99				possible_paths = append(possible_paths, home & "/euphoria")*/
    // SubProg get_eudir pc: 69 op: CONCAT (15)
    if (IS_SEQUENCE(_home_15454) && IS_ATOM(_8600)) {
    }
    else if (IS_ATOM(_home_15454) && IS_SEQUENCE(_8600)) {
        Ref(_home_15454);
        Prepend(&_8601, _8600, _home_15454);
    }
    else {
        Concat((object_ptr)&_8601, _home_15454, _8600);
    }
    // SubProg get_eudir pc: 73 op: APPEND (35)
    RefDS(_8601);
    Append(&_possible_paths_15449, _possible_paths_15449, _8601);
    DeRefDS(_8601);
    _8601 = NOVALUE;
    // SubProg get_eudir pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 15442 op: 159
    // SubProg get_eudir pc: 78 op: STARTLINE (58)

    /** common.e:118		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 80 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_eudir pc: 82 op: LENGTH (42)
    if (IS_SEQUENCE(_possible_paths_15449)){
            _8607 = SEQ_PTR(_possible_paths_15449)->length;
    }
    else {
        _8607 = 1;
    }
    // SubProg get_eudir pc: 85 op: FOR_I (125)
    {
        object _i_15466;
        _i_15466 = 1;
L4: // addr: 92 pc: 85 sub: 15442 op: 125
        if (_i_15466 > _8607){
            goto L5; // [85] 144
        }
        // SubProg get_eudir pc: 92 op: STARTLINE (58)

        /** common.e:119			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 94 op: RHS_SUBS (25)
        DeRef(_possible_path_15468);
        _2 = (object)SEQ_PTR(_possible_paths_15449);
        _possible_path_15468 = (object)*(((s1_ptr)_2)->base + _i_15466);
        RefDS(_possible_path_15468);
        // SubProg get_eudir pc: 98 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 100 op: STARTLINE (58)

        /** common.e:121			if file_exists(possible_path & SLASH & "include" & SLASH & "euphoria.h") then*/
        // SubProg get_eudir pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 104 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 106 op: CONCAT_N (157)
        {
            object concat_list[5];

            concat_list[0] = _8610;
            concat_list[1] = 47;
            concat_list[2] = _8609;
            concat_list[3] = 47;
            concat_list[4] = _possible_path_15468;
            Concat_N((object_ptr)&_8611, concat_list, 5);
        }
        // SubProg get_eudir pc: 114 op: PROC (27)
        _8612 = _20file_exists(_8611);
        _8611 = NOVALUE;
        // SubProg get_eudir pc: 118 op: IF (20)
        if (_8612 == 0) {
            DeRef(_8612);
            _8612 = NOVALUE;
            goto L6; // [118] 135
        }
        else {
            if (!IS_ATOM_INT(_8612) && DBL_PTR(_8612)->dbl == 0.0){
                DeRef(_8612);
                _8612 = NOVALUE;
                goto L6; // [118] 135
            }
            DeRef(_8612);
            _8612 = NOVALUE;
        }
        DeRef(_8612);
        _8612 = NOVALUE;
        // SubProg get_eudir pc: 121 op: STARTLINE (58)

        /** common.e:122				eudir = possible_path*/
        // SubProg get_eudir pc: 123 op: ASSIGN (18)
        RefDS(_possible_path_15468);
        DeRef(_37eudir_15431);
        _37eudir_15431 = _possible_path_15468;
        // SubProg get_eudir pc: 126 op: STARTLINE (58)

        /** common.e:123				return eudir*/
        // SubProg get_eudir pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 130 op: RETURNF (28)
        RefDS(_37eudir_15431);

// Exiting block BLOCK: FOR-

// block var possible_path_15468
        DeRefDS(_possible_path_15468);

// Exiting block BLOCK: get_eudir

// block var possible_paths_15449
        DeRefDS(_possible_paths_15449);

// block var home_15454
        DeRefi(_home_15454);
        return _37eudir_15431;
        // SubProg get_eudir pc: 134 op: NOP1 (159)
L6: // addr: 135 pc: 134 sub: 15442 op: 159
        // SubProg get_eudir pc: 135 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_15468
        DeRef(_possible_path_15468);
        _possible_path_15468 = NOVALUE;
        // SubProg get_eudir pc: 137 op: STARTLINE (58)

        /** common.e:125		end for*/
        // SubProg get_eudir pc: 139 op: ENDFOR_INT_UP1 (54)
        _i_15466 = _i_15466 + 1;
        goto L4; // [139] 92
L5: // addr: 144 pc: 139 sub: 15442 op: 54
        ;
    }
    // SubProg get_eudir pc: 144 op: STARTLINE (58)

    /** common.e:127		possible_paths = include_paths(0)*/
    // SubProg get_eudir pc: 146 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_15449;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_3866);
    ((intptr_t*)_2)[1] = _3866;
    RefDS(_3865);
    ((intptr_t*)_2)[2] = _3865;
    RefDS(_3864);
    ((intptr_t*)_2)[3] = _3864;
    RefDS(_3863);
    ((intptr_t*)_2)[4] = _3863;
    _possible_paths_15449 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 153 op: STARTLINE (58)

    /** common.e:128		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 155 op: LENGTH (42)
    // Known sequence length:
    _8614 = 4;
    // SubProg get_eudir pc: 158 op: FOR_I (125)
    {
        object _i_15480;
        _i_15480 = 1;
L7: // addr: 165 pc: 158 sub: 15442 op: 125
        if (_i_15480 > 4){
            goto L8; // [158] 283
        }
        // SubProg get_eudir pc: 165 op: STARTLINE (58)

        /** common.e:129			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 167 op: RHS_SUBS (25)
        DeRef(_possible_path_15482);
        _2 = (object)SEQ_PTR(_possible_paths_15449);
        _possible_path_15482 = (object)*(((s1_ptr)_2)->base + _i_15480);
        RefDS(_possible_path_15482);
        // SubProg get_eudir pc: 171 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 173 op: STARTLINE (58)

        /** common.e:130			if equal(possible_path[$], SLASH) then*/
        // SubProg get_eudir pc: 175 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_15482)){
                _8616 = SEQ_PTR(_possible_path_15482)->length;
        }
        else {
            _8616 = 1;
        }
        // SubProg get_eudir pc: 178 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_possible_path_15482);
        _8617 = (object)*(((s1_ptr)_2)->base + _8616);
        // SubProg get_eudir pc: 182 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 184 op: EQUAL (153)
        if (_8617 == 47)
        _8618 = 1;
        else if (IS_ATOM_INT(_8617) && IS_ATOM_INT(47))
        _8618 = 0;
        else
        _8618 = (compare(_8617, 47) == 0);
        _8617 = NOVALUE;
        // SubProg get_eudir pc: 188 op: IF (20)
        if (_8618 == 0)
        {
            _8618 = NOVALUE;
            goto L9; // [188] 206
        }
        else{
            _8618 = NOVALUE;
        }
        // SubProg get_eudir pc: 191 op: STARTLINE (58)

        /** common.e:131				possible_path = possible_path[1..$-1]*/
        // SubProg get_eudir pc: 193 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_15482)){
                _8619 = SEQ_PTR(_possible_path_15482)->length;
        }
        else {
            _8619 = 1;
        }
        // SubProg get_eudir pc: 196 op: MINUS (10)
        _8620 = _8619 - 1;
        _8619 = NOVALUE;
        // SubProg get_eudir pc: 200 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_possible_path_15482;
        RHS_Slice(_possible_path_15482, 1, _8620);
        // SubProg get_eudir pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 15442 op: 159
        // SubProg get_eudir pc: 206 op: STARTLINE (58)

        /** common.e:134			if not ends("include", possible_path) then*/
        // SubProg get_eudir pc: 208 op: PROC (27)
        RefDS(_8609);
        RefDS(_possible_path_15482);
        _8622 = _19ends(_8609, _possible_path_15482);
        // SubProg get_eudir pc: 213 op: NOT_IFW (108)
        if (IS_ATOM_INT(_8622)) {
            if (_8622 != 0){
                DeRef(_8622);
                _8622 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        else {
            if (DBL_PTR(_8622)->dbl != 0.0){
                DeRef(_8622);
                _8622 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        DeRef(_8622);
        _8622 = NOVALUE;
        // SubProg get_eudir pc: 216 op: STARTLINE (58)

        /** common.e:135				continue*/
        // SubProg get_eudir pc: 218 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_15482
        DeRefDS(_possible_path_15482);
        _possible_path_15482 = NOVALUE;

// block var file_check_15496
        DeRef(_file_check_15496);
        _file_check_15496 = NOVALUE;
        // SubProg get_eudir pc: 220 op: ELSE (23)
        goto LB; // [220] 278
        // SubProg get_eudir pc: 222 op: NOP1 (159)
LA: // addr: 223 pc: 222 sub: 15442 op: 159
        // SubProg get_eudir pc: 223 op: STARTLINE (58)

        /** common.e:138			sequence file_check = possible_path*/
        // SubProg get_eudir pc: 225 op: ASSIGN (18)
        RefDS(_possible_path_15482);
        DeRef(_file_check_15496);
        _file_check_15496 = _possible_path_15482;
        // SubProg get_eudir pc: 228 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 230 op: STARTLINE (58)

        /** common.e:139			file_check &= SLASH & "euphoria.h"*/
        // SubProg get_eudir pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 234 op: CONCAT (15)
        Prepend(&_8624, _8610, 47);
        // SubProg get_eudir pc: 238 op: CONCAT (15)
        Concat((object_ptr)&_file_check_15496, _file_check_15496, _8624);
        DeRefDS(_8624);
        _8624 = NOVALUE;
        // SubProg get_eudir pc: 242 op: STARTLINE (58)

        /** common.e:141			if file_exists(file_check) then*/
        // SubProg get_eudir pc: 244 op: PROC (27)
        RefDS(_file_check_15496);
        _8626 = _20file_exists(_file_check_15496);
        // SubProg get_eudir pc: 248 op: IF (20)
        if (_8626 == 0) {
            DeRef(_8626);
            _8626 = NOVALUE;
            goto LC; // [248] 274
        }
        else {
            if (!IS_ATOM_INT(_8626) && DBL_PTR(_8626)->dbl == 0.0){
                DeRef(_8626);
                _8626 = NOVALUE;
                goto LC; // [248] 274
            }
            DeRef(_8626);
            _8626 = NOVALUE;
        }
        DeRef(_8626);
        _8626 = NOVALUE;
        // SubProg get_eudir pc: 251 op: STARTLINE (58)

        /** common.e:142				eudir = possible_path[1..$-8] -- strip SLASH & "include"*/
        // SubProg get_eudir pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_15482)){
                _8627 = SEQ_PTR(_possible_path_15482)->length;
        }
        else {
            _8627 = 1;
        }
        // SubProg get_eudir pc: 256 op: MINUS (10)
        _8628 = _8627 - 8;
        _8627 = NOVALUE;
        // SubProg get_eudir pc: 260 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_37eudir_15431;
        RHS_Slice(_possible_path_15482, 1, _8628);
        // SubProg get_eudir pc: 265 op: STARTLINE (58)

        /** common.e:143				return eudir*/
        // SubProg get_eudir pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 269 op: RETURNF (28)
        RefDS(_37eudir_15431);

// Exiting block BLOCK: FOR-

// block var possible_path_15482
        DeRefDS(_possible_path_15482);

// block var file_check_15496
        DeRefDS(_file_check_15496);

// Exiting block BLOCK: get_eudir

// block var possible_paths_15449
        DeRef(_possible_paths_15449);

// block var home_15454
        DeRefi(_home_15454);
        _8628 = NOVALUE;
        DeRef(_8620);
        _8620 = NOVALUE;
        return _37eudir_15431;
        // SubProg get_eudir pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 15442 op: 159
        // SubProg get_eudir pc: 274 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_15482
        DeRef(_possible_path_15482);
        _possible_path_15482 = NOVALUE;

// block var file_check_15496
        DeRef(_file_check_15496);
        _file_check_15496 = NOVALUE;
        // SubProg get_eudir pc: 276 op: STARTLINE (58)

        /** common.e:145		end for*/
        // SubProg get_eudir pc: 278 op: ENDFOR_INT_UP1 (54)
LB: // addr: 278 pc: 278 sub: 15442 op: 54
        _i_15480 = _i_15480 + 1;
        goto L7; // [278] 165
L8: // addr: 283 pc: 278 sub: 15442 op: 54
        ;
    }
    // SubProg get_eudir pc: 283 op: STARTLINE (58)

    /** common.e:147		return ""*/
    // SubProg get_eudir pc: 285 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_eudir

// block var possible_paths_15449
    DeRef(_possible_paths_15449);

// block var home_15454
    DeRefi(_home_15454);
    DeRef(_8628);
    _8628 = NOVALUE;
    DeRef(_8620);
    _8620 = NOVALUE;
    return _5;
    // SubProg get_eudir pc: 289 op: BADRETURNF (43)
    ;
}


void _37set_eudir(object _new_eudir_15508)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_eudir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_eudir pc: 3 op: STARTLINE (58)

    /** common.e:151		eudir = new_eudir*/
    // SubProg set_eudir pc: 5 op: ASSIGN (18)
    RefDS(_new_eudir_15508);
    DeRef(_37eudir_15431);
    _37eudir_15431 = _new_eudir_15508;
    // SubProg set_eudir pc: 8 op: STARTLINE (58)

    /** common.e:152		cmdline_eudir = 1*/
    // SubProg set_eudir pc: 10 op: ASSIGN_I (113)
    _37cmdline_eudir_15432 = 1;
    // SubProg set_eudir pc: 13 op: STARTLINE (58)

    /** common.e:153	end procedure*/
    // SubProg set_eudir pc: 15 op: RETURNP (29)

// Exiting block BLOCK: set_eudir

// block var new_eudir_15508
    DeRefDS(_new_eudir_15508);
    return;
    // SubProg set_eudir pc: 18 op: BADRETURNF (43)
    ;
}


object _37is_eudir_from_cmdline()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_eudir_from_cmdline pc: 1 op: STARTLINE (58)

    /** common.e:156		return cmdline_eudir*/
    // SubProg is_eudir_from_cmdline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_eudir_from_cmdline pc: 5 op: RETURNF (28)

// Exiting block BLOCK: is_eudir_from_cmdline
    return _37cmdline_eudir_15432;
    // SubProg is_eudir_from_cmdline pc: 9 op: BADRETURNF (43)
    ;
}



// 0x3A48D30F
