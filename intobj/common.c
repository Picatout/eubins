// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _7open_locked(object _file_path_11420)
{
    object _fh_11421 = NOVALUE;
// skipping _6401  name type: 0
// skipping _6400  name type: 0
// skipping _6399  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg open_locked pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg open_locked pc: 3 op: STARTLINE (58)

    /** common.e:55		fh = open(file_path, "u")*/
    // SubProg open_locked pc: 5 op: OPEN (37)
    _fh_11421 = EOpen(_file_path_11420, _6398, 0);
    // SubProg open_locked pc: 10 op: STARTLINE (58)

    /** common.e:57		if fh = -1 then*/
    // SubProg open_locked pc: 12 op: EQUALS_IFW_I (121)
    if (_fh_11421 != -1)
    goto L1; // [12] 24
    // SubProg open_locked pc: 16 op: STARTLINE (58)

    /** common.e:58			fh = open(file_path, "r")*/
    // SubProg open_locked pc: 18 op: OPEN (37)
    _fh_11421 = EOpen(_file_path_11420, _4159, 0);
    // SubProg open_locked pc: 23 op: NOP1 (159)
L1: // addr: 24 pc: 23 sub: 11418 op: 159
    // SubProg open_locked pc: 24 op: STARTLINE (58)

    /** common.e:61		return fh*/
    // SubProg open_locked pc: 26 op: RETURNF (28)

// Exiting block BLOCK: open_locked

// block var file_path_11420
    DeRefDS(_file_path_11420);
    return _fh_11421;
    // SubProg open_locked pc: 30 op: BADRETURNF (43)
    ;
}


object _7get_eudir()
{
    object _possible_paths_11434 = NOVALUE;
    object _home_11439 = NOVALUE;
    object _possible_path_11453 = NOVALUE;
    object _possible_path_11467 = NOVALUE;
    object _file_check_11481 = NOVALUE;
// skipping _6440  name type: 0
    object _6439 = NOVALUE; // 11489 6439
    object _6438 = NOVALUE; // 11488 6438
    object _6437 = NOVALUE; // 11487 6437
// skipping _6436  name type: 0
    object _6435 = NOVALUE; // 11483 6435
// skipping _6434  name type: 0
    object _6433 = NOVALUE; // 11479 6433
// skipping _6432  name type: 0
    object _6431 = NOVALUE; // 11475 6431
    object _6430 = NOVALUE; // 11474 6430
    object _6429 = NOVALUE; // 11473 6429
    object _6428 = NOVALUE; // 11471 6428
    object _6427 = NOVALUE; // 11470 6427
// skipping _6426  name type: 0
    object _6425 = NOVALUE; // 11466 6425
// skipping _6424  name type: 0
    object _6423 = NOVALUE; // 11462 6423
    object _6422 = NOVALUE; // 11461 6422
// skipping _6419  name type: 0
    object _6418 = NOVALUE; // 11452 6418
// skipping _6413  name type: 0
    object _6412 = NOVALUE; // 11444 6412
    object _6410 = NOVALUE; // 11442 6410
// skipping _6409  name type: 0
// skipping _6408  name type: 0
    object _6404 = NOVALUE; // 11433 6404
// skipping _6403  name type: 0
    object _6402 = NOVALUE; // 11430 6402
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_eudir pc: 1 op: STARTLINE (58)

    /** common.e:82		if sequence(eudir) then*/
    // SubProg get_eudir pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 5 op: IS_A_SEQUENCE (68)
    _6402 = IS_SEQUENCE(_7eudir_11416);
    // SubProg get_eudir pc: 8 op: IF (20)
    if (_6402 == 0)
    {
        _6402 = NOVALUE;
        goto L1; // [8] 20
    }
    else{
        _6402 = NOVALUE;
    }
    // SubProg get_eudir pc: 11 op: STARTLINE (58)

    /** common.e:83			return eudir*/
    // SubProg get_eudir pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 15 op: RETURNF (28)
    Ref(_7eudir_11416);

// Exiting block BLOCK: get_eudir

// block var possible_paths_11434
    DeRef(_possible_paths_11434);

// block var home_11439
    DeRefi(_home_11439);
    return _7eudir_11416;
    // SubProg get_eudir pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 11427 op: 159
    // SubProg get_eudir pc: 20 op: STARTLINE (58)

    /** common.e:86		eudir = getenv("EUDIR")*/
    // SubProg get_eudir pc: 22 op: GETENV (91)
    DeRef(_7eudir_11416);
    _7eudir_11416 = EGetEnv(_6105);
    // SubProg get_eudir pc: 25 op: STARTLINE (58)

    /** common.e:87		if sequence(eudir) then*/
    // SubProg get_eudir pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 29 op: IS_A_SEQUENCE (68)
    _6404 = IS_SEQUENCE(_7eudir_11416);
    // SubProg get_eudir pc: 32 op: IF (20)
    if (_6404 == 0)
    {
        _6404 = NOVALUE;
        goto L2; // [32] 44
    }
    else{
        _6404 = NOVALUE;
    }
    // SubProg get_eudir pc: 35 op: STARTLINE (58)

    /** common.e:88			return eudir*/
    // SubProg get_eudir pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_eudir pc: 39 op: RETURNF (28)
    Ref(_7eudir_11416);

// Exiting block BLOCK: get_eudir

// block var possible_paths_11434
    DeRef(_possible_paths_11434);

// block var home_11439
    DeRefi(_home_11439);
    return _7eudir_11416;
    // SubProg get_eudir pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 11427 op: 159
    // SubProg get_eudir pc: 44 op: STARTLINE (58)

    /** common.e:91		ifdef UNIX then*/
    // SubProg get_eudir pc: 46 op: STARTLINE (58)

    /** common.e:92			sequence possible_paths = {*/
    // SubProg get_eudir pc: 48 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_11434;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_6405);
    ((intptr_t*)_2)[1] = _6405;
    RefDS(_6406);
    ((intptr_t*)_2)[2] = _6406;
    RefDS(_6407);
    ((intptr_t*)_2)[3] = _6407;
    _possible_paths_11434 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 54 op: STARTLINE (58)

    /** common.e:97			object home = getenv("HOME")*/
    // SubProg get_eudir pc: 56 op: GETENV (91)
    DeRefi(_home_11439);
    _home_11439 = EGetEnv(_5753);
    // SubProg get_eudir pc: 59 op: STARTLINE (58)

    /** common.e:98			if sequence(home) then*/
    // SubProg get_eudir pc: 61 op: IS_A_SEQUENCE (68)
    _6410 = IS_SEQUENCE(_home_11439);
    // SubProg get_eudir pc: 64 op: IF (20)
    if (_6410 == 0)
    {
        _6410 = NOVALUE;
        goto L3; // [64] 78
    }
    else{
        _6410 = NOVALUE;
    }
    // SubProg get_eudir pc: 67 op: STARTLINE (58)

    /** common.e:99				possible_paths = append(possible_paths, home & "/euphoria")*/
    // SubProg get_eudir pc: 69 op: CONCAT (15)
    if (IS_SEQUENCE(_home_11439) && IS_ATOM(_6411)) {
    }
    else if (IS_ATOM(_home_11439) && IS_SEQUENCE(_6411)) {
        Ref(_home_11439);
        Prepend(&_6412, _6411, _home_11439);
    }
    else {
        Concat((object_ptr)&_6412, _home_11439, _6411);
    }
    // SubProg get_eudir pc: 73 op: APPEND (35)
    RefDS(_6412);
    Append(&_possible_paths_11434, _possible_paths_11434, _6412);
    DeRefDS(_6412);
    _6412 = NOVALUE;
    // SubProg get_eudir pc: 77 op: NOP1 (159)
L3: // addr: 78 pc: 77 sub: 11427 op: 159
    // SubProg get_eudir pc: 78 op: STARTLINE (58)

    /** common.e:118		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 80 op: PRIVATE_INIT_CHECK (30)
    // SubProg get_eudir pc: 82 op: LENGTH (42)
    if (IS_SEQUENCE(_possible_paths_11434)){
            _6418 = SEQ_PTR(_possible_paths_11434)->length;
    }
    else {
        _6418 = 1;
    }
    // SubProg get_eudir pc: 85 op: FOR_I (125)
    {
        object _i_11451;
        _i_11451 = 1;
L4: // addr: 92 pc: 85 sub: 11427 op: 125
        if (_i_11451 > _6418){
            goto L5; // [85] 144
        }
        // SubProg get_eudir pc: 92 op: STARTLINE (58)

        /** common.e:119			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 94 op: RHS_SUBS (25)
        DeRef(_possible_path_11453);
        _2 = (object)SEQ_PTR(_possible_paths_11434);
        _possible_path_11453 = (object)*(((s1_ptr)_2)->base + _i_11451);
        RefDS(_possible_path_11453);
        // SubProg get_eudir pc: 98 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 100 op: STARTLINE (58)

        /** common.e:121			if file_exists(possible_path & SLASH & "include" & SLASH & "euphoria.h") then*/
        // SubProg get_eudir pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 104 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 106 op: CONCAT_N (157)
        {
            object concat_list[5];

            concat_list[0] = _6421;
            concat_list[1] = 47;
            concat_list[2] = _6420;
            concat_list[3] = 47;
            concat_list[4] = _possible_path_11453;
            Concat_N((object_ptr)&_6422, concat_list, 5);
        }
        // SubProg get_eudir pc: 114 op: PROC (27)
        _6423 = _16file_exists(_6422);
        _6422 = NOVALUE;
        // SubProg get_eudir pc: 118 op: IF (20)
        if (_6423 == 0) {
            DeRef(_6423);
            _6423 = NOVALUE;
            goto L6; // [118] 135
        }
        else {
            if (!IS_ATOM_INT(_6423) && DBL_PTR(_6423)->dbl == 0.0){
                DeRef(_6423);
                _6423 = NOVALUE;
                goto L6; // [118] 135
            }
            DeRef(_6423);
            _6423 = NOVALUE;
        }
        DeRef(_6423);
        _6423 = NOVALUE;
        // SubProg get_eudir pc: 121 op: STARTLINE (58)

        /** common.e:122				eudir = possible_path*/
        // SubProg get_eudir pc: 123 op: ASSIGN (18)
        RefDS(_possible_path_11453);
        DeRef(_7eudir_11416);
        _7eudir_11416 = _possible_path_11453;
        // SubProg get_eudir pc: 126 op: STARTLINE (58)

        /** common.e:123				return eudir*/
        // SubProg get_eudir pc: 128 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 130 op: RETURNF (28)
        RefDS(_7eudir_11416);

// Exiting block BLOCK: FOR-

// block var possible_path_11453
        DeRefDS(_possible_path_11453);

// Exiting block BLOCK: get_eudir

// block var possible_paths_11434
        DeRefDS(_possible_paths_11434);

// block var home_11439
        DeRefi(_home_11439);
        return _7eudir_11416;
        // SubProg get_eudir pc: 134 op: NOP1 (159)
L6: // addr: 135 pc: 134 sub: 11427 op: 159
        // SubProg get_eudir pc: 135 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_11453
        DeRef(_possible_path_11453);
        _possible_path_11453 = NOVALUE;
        // SubProg get_eudir pc: 137 op: STARTLINE (58)

        /** common.e:125		end for*/
        // SubProg get_eudir pc: 139 op: ENDFOR_INT_UP1 (54)
        _i_11451 = _i_11451 + 1;
        goto L4; // [139] 92
L5: // addr: 144 pc: 139 sub: 11427 op: 54
        ;
    }
    // SubProg get_eudir pc: 144 op: STARTLINE (58)

    /** common.e:127		possible_paths = include_paths(0)*/
    // SubProg get_eudir pc: 146 op: RIGHT_BRACE_N (31)
    _0 = _possible_paths_11434;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_6132);
    ((intptr_t*)_2)[1] = _6132;
    RefDS(_6131);
    ((intptr_t*)_2)[2] = _6131;
    RefDS(_6130);
    ((intptr_t*)_2)[3] = _6130;
    RefDS(_6129);
    ((intptr_t*)_2)[4] = _6129;
    _possible_paths_11434 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg get_eudir pc: 153 op: STARTLINE (58)

    /** common.e:128		for i = 1 to length(possible_paths) do*/
    // SubProg get_eudir pc: 155 op: LENGTH (42)
    // Known sequence length:
    _6425 = 4;
    // SubProg get_eudir pc: 158 op: FOR_I (125)
    {
        object _i_11465;
        _i_11465 = 1;
L7: // addr: 165 pc: 158 sub: 11427 op: 125
        if (_i_11465 > 4){
            goto L8; // [158] 283
        }
        // SubProg get_eudir pc: 165 op: STARTLINE (58)

        /** common.e:129			sequence possible_path = possible_paths[i]*/
        // SubProg get_eudir pc: 167 op: RHS_SUBS (25)
        DeRef(_possible_path_11467);
        _2 = (object)SEQ_PTR(_possible_paths_11434);
        _possible_path_11467 = (object)*(((s1_ptr)_2)->base + _i_11465);
        RefDS(_possible_path_11467);
        // SubProg get_eudir pc: 171 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 173 op: STARTLINE (58)

        /** common.e:130			if equal(possible_path[$], SLASH) then*/
        // SubProg get_eudir pc: 175 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_11467)){
                _6427 = SEQ_PTR(_possible_path_11467)->length;
        }
        else {
            _6427 = 1;
        }
        // SubProg get_eudir pc: 178 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_possible_path_11467);
        _6428 = (object)*(((s1_ptr)_2)->base + _6427);
        // SubProg get_eudir pc: 182 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 184 op: EQUAL (153)
        if (_6428 == 47)
        _6429 = 1;
        else if (IS_ATOM_INT(_6428) && IS_ATOM_INT(47))
        _6429 = 0;
        else
        _6429 = (compare(_6428, 47) == 0);
        _6428 = NOVALUE;
        // SubProg get_eudir pc: 188 op: IF (20)
        if (_6429 == 0)
        {
            _6429 = NOVALUE;
            goto L9; // [188] 206
        }
        else{
            _6429 = NOVALUE;
        }
        // SubProg get_eudir pc: 191 op: STARTLINE (58)

        /** common.e:131				possible_path = possible_path[1..$-1]*/
        // SubProg get_eudir pc: 193 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_11467)){
                _6430 = SEQ_PTR(_possible_path_11467)->length;
        }
        else {
            _6430 = 1;
        }
        // SubProg get_eudir pc: 196 op: MINUS (10)
        _6431 = _6430 - 1;
        _6430 = NOVALUE;
        // SubProg get_eudir pc: 200 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_possible_path_11467;
        RHS_Slice(_possible_path_11467, 1, _6431);
        // SubProg get_eudir pc: 205 op: NOP1 (159)
L9: // addr: 206 pc: 205 sub: 11427 op: 159
        // SubProg get_eudir pc: 206 op: STARTLINE (58)

        /** common.e:134			if not ends("include", possible_path) then*/
        // SubProg get_eudir pc: 208 op: PROC (27)
        RefDS(_6420);
        RefDS(_possible_path_11467);
        _6433 = _22ends(_6420, _possible_path_11467);
        // SubProg get_eudir pc: 213 op: NOT_IFW (108)
        if (IS_ATOM_INT(_6433)) {
            if (_6433 != 0){
                DeRef(_6433);
                _6433 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        else {
            if (DBL_PTR(_6433)->dbl != 0.0){
                DeRef(_6433);
                _6433 = NOVALUE;
                goto LA; // [213] 223
            }
        }
        DeRef(_6433);
        _6433 = NOVALUE;
        // SubProg get_eudir pc: 216 op: STARTLINE (58)

        /** common.e:135				continue*/
        // SubProg get_eudir pc: 218 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_11467
        DeRefDS(_possible_path_11467);
        _possible_path_11467 = NOVALUE;

// block var file_check_11481
        DeRef(_file_check_11481);
        _file_check_11481 = NOVALUE;
        // SubProg get_eudir pc: 220 op: ELSE (23)
        goto LB; // [220] 278
        // SubProg get_eudir pc: 222 op: NOP1 (159)
LA: // addr: 223 pc: 222 sub: 11427 op: 159
        // SubProg get_eudir pc: 223 op: STARTLINE (58)

        /** common.e:138			sequence file_check = possible_path*/
        // SubProg get_eudir pc: 225 op: ASSIGN (18)
        RefDS(_possible_path_11467);
        DeRef(_file_check_11481);
        _file_check_11481 = _possible_path_11467;
        // SubProg get_eudir pc: 228 op: SEQUENCE_CHECK (97)
        // SubProg get_eudir pc: 230 op: STARTLINE (58)

        /** common.e:139			file_check &= SLASH & "euphoria.h"*/
        // SubProg get_eudir pc: 232 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 234 op: CONCAT (15)
        Prepend(&_6435, _6421, 47);
        // SubProg get_eudir pc: 238 op: CONCAT (15)
        Concat((object_ptr)&_file_check_11481, _file_check_11481, _6435);
        DeRefDS(_6435);
        _6435 = NOVALUE;
        // SubProg get_eudir pc: 242 op: STARTLINE (58)

        /** common.e:141			if file_exists(file_check) then*/
        // SubProg get_eudir pc: 244 op: PROC (27)
        RefDS(_file_check_11481);
        _6437 = _16file_exists(_file_check_11481);
        // SubProg get_eudir pc: 248 op: IF (20)
        if (_6437 == 0) {
            DeRef(_6437);
            _6437 = NOVALUE;
            goto LC; // [248] 274
        }
        else {
            if (!IS_ATOM_INT(_6437) && DBL_PTR(_6437)->dbl == 0.0){
                DeRef(_6437);
                _6437 = NOVALUE;
                goto LC; // [248] 274
            }
            DeRef(_6437);
            _6437 = NOVALUE;
        }
        DeRef(_6437);
        _6437 = NOVALUE;
        // SubProg get_eudir pc: 251 op: STARTLINE (58)

        /** common.e:142				eudir = possible_path[1..$-8] -- strip SLASH & "include"*/
        // SubProg get_eudir pc: 253 op: LENGTH (42)
        if (IS_SEQUENCE(_possible_path_11467)){
                _6438 = SEQ_PTR(_possible_path_11467)->length;
        }
        else {
            _6438 = 1;
        }
        // SubProg get_eudir pc: 256 op: MINUS (10)
        _6439 = _6438 - 8;
        _6438 = NOVALUE;
        // SubProg get_eudir pc: 260 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_7eudir_11416;
        RHS_Slice(_possible_path_11467, 1, _6439);
        // SubProg get_eudir pc: 265 op: STARTLINE (58)

        /** common.e:143				return eudir*/
        // SubProg get_eudir pc: 267 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_eudir pc: 269 op: RETURNF (28)
        RefDS(_7eudir_11416);

// Exiting block BLOCK: FOR-

// block var possible_path_11467
        DeRefDS(_possible_path_11467);

// block var file_check_11481
        DeRefDS(_file_check_11481);

// Exiting block BLOCK: get_eudir

// block var possible_paths_11434
        DeRef(_possible_paths_11434);

// block var home_11439
        DeRefi(_home_11439);
        _6439 = NOVALUE;
        DeRef(_6431);
        _6431 = NOVALUE;
        return _7eudir_11416;
        // SubProg get_eudir pc: 273 op: NOP1 (159)
LC: // addr: 274 pc: 273 sub: 11427 op: 159
        // SubProg get_eudir pc: 274 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var possible_path_11467
        DeRef(_possible_path_11467);
        _possible_path_11467 = NOVALUE;

// block var file_check_11481
        DeRef(_file_check_11481);
        _file_check_11481 = NOVALUE;
        // SubProg get_eudir pc: 276 op: STARTLINE (58)

        /** common.e:145		end for*/
        // SubProg get_eudir pc: 278 op: ENDFOR_INT_UP1 (54)
LB: // addr: 278 pc: 278 sub: 11427 op: 54
        _i_11465 = _i_11465 + 1;
        goto L7; // [278] 165
L8: // addr: 283 pc: 278 sub: 11427 op: 54
        ;
    }
    // SubProg get_eudir pc: 283 op: STARTLINE (58)

    /** common.e:147		return ""*/
    // SubProg get_eudir pc: 285 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: get_eudir

// block var possible_paths_11434
    DeRef(_possible_paths_11434);

// block var home_11439
    DeRefi(_home_11439);
    DeRef(_6439);
    _6439 = NOVALUE;
    DeRef(_6431);
    _6431 = NOVALUE;
    return _5;
    // SubProg get_eudir pc: 289 op: BADRETURNF (43)
    ;
}


void _7set_eudir(object _new_eudir_11493)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_eudir pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg set_eudir pc: 3 op: STARTLINE (58)

    /** common.e:151		eudir = new_eudir*/
    // SubProg set_eudir pc: 5 op: ASSIGN (18)
    RefDS(_new_eudir_11493);
    DeRef(_7eudir_11416);
    _7eudir_11416 = _new_eudir_11493;
    // SubProg set_eudir pc: 8 op: STARTLINE (58)

    /** common.e:152		cmdline_eudir = 1*/
    // SubProg set_eudir pc: 10 op: ASSIGN_I (113)
    _7cmdline_eudir_11417 = 1;
    // SubProg set_eudir pc: 13 op: STARTLINE (58)

    /** common.e:153	end procedure*/
    // SubProg set_eudir pc: 15 op: RETURNP (29)

// Exiting block BLOCK: set_eudir

// block var new_eudir_11493
    DeRefDS(_new_eudir_11493);
    return;
    // SubProg set_eudir pc: 18 op: BADRETURNF (43)
    ;
}


object _7is_eudir_from_cmdline()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_eudir_from_cmdline pc: 1 op: STARTLINE (58)

    /** common.e:156		return cmdline_eudir*/
    // SubProg is_eudir_from_cmdline pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_eudir_from_cmdline pc: 5 op: RETURNF (28)

// Exiting block BLOCK: is_eudir_from_cmdline
    return _7cmdline_eudir_11417;
    // SubProg is_eudir_from_cmdline pc: 9 op: BADRETURNF (43)
    ;
}



// 0xB6E19E89
