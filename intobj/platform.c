// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _39host_platform()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg host_platform pc: 1 op: STARTLINE (58)

    /** platform.e:113		return ihost_platform*/
    // SubProg host_platform pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg host_platform pc: 5 op: RETURNF (28)

// Exiting block BLOCK: host_platform
    return 3;
    // SubProg host_platform pc: 9 op: BADRETURNF (43)
    ;
}


object _39GetPlatformDefines(object _for_translator_20052)
{
    object _local_defines_20053 = NOVALUE;
    object _lcmds_20063 = NOVALUE;
    object _fh_20065 = NOVALUE;
    object _sk_20085 = NOVALUE;
    object _11529 = NOVALUE; // 20221 11529
    object _11528 = NOVALUE; // 20220 11528
    object _11526 = NOVALUE; // 20218 11526
// skipping _11524  name type: 0
    object _11523 = NOVALUE; // 20215 11523
    object _11522 = NOVALUE; // 20214 11522
// skipping _11521  name type: 0
    object _11520 = NOVALUE; // 20212 11520
    object _11519 = NOVALUE; // 20211 11519
// skipping _11518  name type: 0
    object _11517 = NOVALUE; // 20208 11517
// skipping _11515  name type: 0
    object _11514 = NOVALUE; // 20204 11514
    object _11513 = NOVALUE; // 20203 11513
// skipping _11512  name type: 0
    object _11511 = NOVALUE; // 20201 11511
    object _11510 = NOVALUE; // 20200 11510
// skipping _11509  name type: 0
    object _11508 = NOVALUE; // 20197 11508
    object _11506 = NOVALUE; // 20195 11506
// skipping _11505  name type: 0
    object _11504 = NOVALUE; // 20193 11504
    object _11503 = NOVALUE; // 20192 11503
// skipping _11502  name type: 0
    object _11501 = NOVALUE; // 20189 11501
    object _11498 = NOVALUE; // 20186 11498
// skipping _11497  name type: 0
    object _11496 = NOVALUE; // 20184 11496
    object _11495 = NOVALUE; // 20183 11495
// skipping _11494  name type: 0
    object _11493 = NOVALUE; // 20180 11493
    object _11491 = NOVALUE; // 20178 11491
// skipping _11490  name type: 0
    object _11489 = NOVALUE; // 20176 11489
    object _11488 = NOVALUE; // 20175 11488
// skipping _11487  name type: 0
    object _11486 = NOVALUE; // 20172 11486
    object _11484 = NOVALUE; // 20170 11484
// skipping _11483  name type: 0
    object _11482 = NOVALUE; // 20168 11482
    object _11481 = NOVALUE; // 20167 11481
// skipping _11480  name type: 0
    object _11479 = NOVALUE; // 20164 11479
    object _11477 = NOVALUE; // 20162 11477
// skipping _11476  name type: 0
    object _11475 = NOVALUE; // 20160 11475
    object _11474 = NOVALUE; // 20159 11474
// skipping _11473  name type: 0
    object _11472 = NOVALUE; // 20156 11472
    object _11469 = NOVALUE; // 20153 11469
// skipping _11468  name type: 0
    object _11467 = NOVALUE; // 20151 11467
    object _11466 = NOVALUE; // 20150 11466
// skipping _11465  name type: 0
    object _11464 = NOVALUE; // 20147 11464
    object _11461 = NOVALUE; // 20144 11461
// skipping _11460  name type: 0
    object _11459 = NOVALUE; // 20142 11459
    object _11458 = NOVALUE; // 20141 11458
// skipping _11457  name type: 0
// skipping _11456  name type: 0
    object _11455 = NOVALUE; // 20136 11455
// skipping _11453  name type: 0
    object _11452 = NOVALUE; // 20132 11452
// skipping _11451  name type: 0
// skipping _11450  name type: 0
    object _11449 = NOVALUE; // 20128 11449
// skipping _11448  name type: 0
// skipping _11447  name type: 0
// skipping _11446  name type: 0
    object _11445 = NOVALUE; // 20121 11445
    object _11444 = NOVALUE; // 20120 11444
// skipping _11443  name type: 0
// skipping _11441  name type: 0
// skipping _11440  name type: 0
    object _11439 = NOVALUE; // 20110 11439
    object _11438 = NOVALUE; // 20109 11438
// skipping _11437  name type: 0
// skipping _11436  name type: 0
// skipping _11435  name type: 0
// skipping _11433  name type: 0
// skipping _11432  name type: 0
// skipping _11431  name type: 0
// skipping _11430  name type: 0
// skipping _11429  name type: 0
// skipping _11428  name type: 0
// skipping _11427  name type: 0
// skipping _11426  name type: 0
    object _11425 = NOVALUE; // 20082 11425
// skipping _11423  name type: 0
    object _11422 = NOVALUE; // 20078 11422
// skipping _11420  name type: 0
    object _11419 = NOVALUE; // 20075 11419
    object _11418 = NOVALUE; // 20074 11418
    object _11417 = NOVALUE; // 20073 11417
// skipping _11415  name type: 0
// skipping _11414  name type: 0
    object _11413 = NOVALUE; // 20066 11413
// skipping _11412  name type: 0
// skipping _11411  name type: 0
    object _11410 = NOVALUE; // 20061 11410
    object _11407 = NOVALUE; // 20058 11407
// skipping _11406  name type: 0
    object _11405 = NOVALUE; // 20056 11405
    object _11404 = NOVALUE; // 20055 11404
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetPlatformDefines pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetPlatformDefines pc: 3 op: STARTLINE (58)

    /** platform.e:173		sequence local_defines = {}*/
    // SubProg GetPlatformDefines pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_local_defines_20053);
    _local_defines_20053 = _5;
    // SubProg GetPlatformDefines pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg GetPlatformDefines pc: 10 op: STARTLINE (58)

    /** platform.e:175		if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    // SubProg GetPlatformDefines pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 14 op: SC1_AND (141)
    if (0 == 0) {
        _11404 = 0;
        goto L1; // [14] 25
    }
    // SubProg GetPlatformDefines pc: 18 op: NOT (7)
    _11405 = (0 == 0);
    // SubProg GetPlatformDefines pc: 21 op: SC2_AND (142)
    _11404 = (_11405 != 0);
    // SubProg GetPlatformDefines pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 25 op: SC1_OR_IF (147)
    if (_11404 != 0) {
        goto L2; // [25] 44
    }
    // SubProg GetPlatformDefines pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 31 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11407);
        _11407 = 0;
        goto L3; // [31] 39
    }
    // SubProg GetPlatformDefines pc: 35 op: SC2_AND (142)
    _11407 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 38 op: NOP1 (159)
L3: // addr: 39 pc: 38 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 39 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 40 op: IF (20)
    if (_11407 == 0)
    {
        _11407 = NOVALUE;
        goto L4; // [40] 326
    }
    else{
        _11407 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 43 op: NOP1 (159)
L2: // addr: 44 pc: 43 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 44 op: STARTLINE (58)

    /** platform.e:176			local_defines &= {"WINDOWS", "WIN32"}*/
    // SubProg GetPlatformDefines pc: 46 op: RIGHT_BRACE_2 (85)
    RefDS(_11409);
    RefDS(_11408);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _11408;
    ((intptr_t *)_2)[2] = _11409;
    _11410 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 50 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11410);
    DeRefDS(_11410);
    _11410 = NOVALUE;
    // SubProg GetPlatformDefines pc: 54 op: STARTLINE (58)

    /** platform.e:177			sequence lcmds = command_line()*/
    // SubProg GetPlatformDefines pc: 56 op: COMMAND_LINE (100)
    DeRef(_lcmds_20063);
    _lcmds_20063 = Command_Line();
    // SubProg GetPlatformDefines pc: 58 op: STARTLINE (58)

    /** platform.e:180			integer fh*/
    // SubProg GetPlatformDefines pc: 60 op: STARTLINE (58)

    /** platform.e:181			fh = open(lcmds[1], "rb")*/
    // SubProg GetPlatformDefines pc: 62 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lcmds_20063);
    _11413 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg GetPlatformDefines pc: 66 op: OPEN (37)
    _fh_20065 = EOpen(_11413, _3046, 0);
    _11413 = NOVALUE;
    // SubProg GetPlatformDefines pc: 71 op: STARTLINE (58)

    /** platform.e:182			if fh = -1 then*/
    // SubProg GetPlatformDefines pc: 73 op: EQUALS_IFW_I (121)
    if (_fh_20065 != -1)
    goto L5; // [73] 123
    // SubProg GetPlatformDefines pc: 77 op: STARTLINE (58)

    /** platform.e:184	 			if match("euiw", lower(lcmds[1])) != 0 then*/
    // SubProg GetPlatformDefines pc: 79 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_lcmds_20063);
    _11417 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg GetPlatformDefines pc: 83 op: PROC (27)
    RefDS(_11417);
    _11418 = _20lower(_11417);
    _11417 = NOVALUE;
    // SubProg GetPlatformDefines pc: 87 op: MATCH_FROM (177)
    _11419 = e_match_from(_11416, _11418, 1);
    DeRef(_11418);
    _11418 = NOVALUE;
    // SubProg GetPlatformDefines pc: 92 op: NOTEQ_IFW (105)
    if (_11419 == 0)
    goto L6; // [92] 109
    // SubProg GetPlatformDefines pc: 96 op: STARTLINE (58)

    /** platform.e:185	 				local_defines &= { "GUI" }*/
    // SubProg GetPlatformDefines pc: 98 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11421);
    ((intptr_t*)_2)[1] = _11421;
    _11422 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 102 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11422);
    DeRefDS(_11422);
    _11422 = NOVALUE;
    // SubProg GetPlatformDefines pc: 106 op: ELSE (23)
    goto L7; // [106] 321
    // SubProg GetPlatformDefines pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 109 op: STARTLINE (58)

    /** platform.e:187	 				local_defines &= { "CONSOLE" }*/
    // SubProg GetPlatformDefines pc: 111 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11424);
    ((intptr_t*)_2)[1] = _11424;
    _11425 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 115 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11425);
    DeRefDS(_11425);
    _11425 = NOVALUE;
    // SubProg GetPlatformDefines pc: 119 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 120 op: ELSE (23)
    goto L7; // [120] 321
    // SubProg GetPlatformDefines pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 123 op: STARTLINE (58)

    /** platform.e:190				atom sk*/
    // SubProg GetPlatformDefines pc: 125 op: STARTLINE (58)

    /** platform.e:191				sk = seek(fh, #18) -- Fixed location of relocation table.*/
    // SubProg GetPlatformDefines pc: 127 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19seek(_fh_20065, 24);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 132 op: STARTLINE (58)

    /** platform.e:192				sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 134 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19get_integer16(_fh_20065);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 138 op: STARTLINE (58)

    /** platform.e:193				if sk = #40 then*/
    // SubProg GetPlatformDefines pc: 140 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 64)){
        goto L8; // [140] 259
    }
    // SubProg GetPlatformDefines pc: 144 op: STARTLINE (58)

    /** platform.e:195					sk = seek(fh, #3C) -- Fixed location of COFF signature offset.*/
    // SubProg GetPlatformDefines pc: 146 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19seek(_fh_20065, 60);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 151 op: STARTLINE (58)

    /** platform.e:196					sk = get_integer32(fh)*/
    // SubProg GetPlatformDefines pc: 153 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19get_integer32(_fh_20065);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 157 op: STARTLINE (58)

    /** platform.e:197					sk = seek(fh, sk)*/
    // SubProg GetPlatformDefines pc: 159 op: PROC (27)
    Ref(_sk_20085);
    _0 = _sk_20085;
    _sk_20085 = _19seek(_fh_20065, _sk_20085);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 164 op: STARTLINE (58)

    /** platform.e:198					sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 166 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19get_integer16(_fh_20065);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 170 op: STARTLINE (58)

    /** platform.e:199					if sk = #4550 then -- "PE" in intel endian*/
    // SubProg GetPlatformDefines pc: 172 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 17744)){
        goto L9; // [172] 221
    }
    // SubProg GetPlatformDefines pc: 176 op: STARTLINE (58)

    /** platform.e:200						sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 178 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19get_integer16(_fh_20065);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 182 op: STARTLINE (58)

    /** platform.e:201						if sk = 0 then*/
    // SubProg GetPlatformDefines pc: 184 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 0)){
        goto LA; // [184] 212
    }
    // SubProg GetPlatformDefines pc: 188 op: STARTLINE (58)

    /** platform.e:203							sk = seek(fh, where(fh) + 88 )*/
    // SubProg GetPlatformDefines pc: 190 op: PROC (27)
    _11438 = _19where(_fh_20065);
    // SubProg GetPlatformDefines pc: 194 op: PLUS (11)
    if (IS_ATOM_INT(_11438)) {
        _11439 = _11438 + 88;
        if ((object)((uintptr_t)_11439 + (uintptr_t)HIGH_BITS) >= 0){
            _11439 = NewDouble((eudouble)_11439);
        }
    }
    else {
        _11439 = binary_op(PLUS, _11438, 88);
    }
    DeRef(_11438);
    _11438 = NOVALUE;
    // SubProg GetPlatformDefines pc: 198 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19seek(_fh_20065, _11439);
    DeRef(_0);
    _11439 = NOVALUE;
    // SubProg GetPlatformDefines pc: 203 op: STARTLINE (58)

    /** platform.e:204							sk = get_integer16(fh)*/
    // SubProg GetPlatformDefines pc: 205 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19get_integer16(_fh_20065);
    DeRef(_0);
    // SubProg GetPlatformDefines pc: 209 op: ELSE (23)
    goto LB; // [209] 265
    // SubProg GetPlatformDefines pc: 211 op: NOP1 (159)
LA: // addr: 212 pc: 211 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 212 op: STARTLINE (58)

    /** platform.e:206							sk = 0	-- Don't know this format.*/
    // SubProg GetPlatformDefines pc: 214 op: ASSIGN (18)
    DeRef(_sk_20085);
    _sk_20085 = 0;
    // SubProg GetPlatformDefines pc: 217 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 218 op: ELSE (23)
    goto LB; // [218] 265
    // SubProg GetPlatformDefines pc: 220 op: NOP1 (159)
L9: // addr: 221 pc: 220 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 221 op: STARTLINE (58)

    /** platform.e:208					elsif sk = #454E then -- "NE" in intel endian*/
    // SubProg GetPlatformDefines pc: 223 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 17742)){
        goto LC; // [223] 250
    }
    // SubProg GetPlatformDefines pc: 227 op: STARTLINE (58)

    /** platform.e:210						sk = seek(fh, where(fh) + 54 )*/
    // SubProg GetPlatformDefines pc: 229 op: PROC (27)
    _11444 = _19where(_fh_20065);
    // SubProg GetPlatformDefines pc: 233 op: PLUS (11)
    if (IS_ATOM_INT(_11444)) {
        _11445 = _11444 + 54;
        if ((object)((uintptr_t)_11445 + (uintptr_t)HIGH_BITS) >= 0){
            _11445 = NewDouble((eudouble)_11445);
        }
    }
    else {
        _11445 = binary_op(PLUS, _11444, 54);
    }
    DeRef(_11444);
    _11444 = NOVALUE;
    // SubProg GetPlatformDefines pc: 237 op: PROC (27)
    _0 = _sk_20085;
    _sk_20085 = _19seek(_fh_20065, _11445);
    DeRef(_0);
    _11445 = NOVALUE;
    // SubProg GetPlatformDefines pc: 242 op: STARTLINE (58)

    /** platform.e:211						sk = getc(fh)*/
    // SubProg GetPlatformDefines pc: 244 op: GETC (33)
    DeRef(_sk_20085);
    if (_fh_20065 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_20065, EF_READ);
        last_r_file_no = _fh_20065;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _sk_20085 = getc((FILE*)xstdin);
        }
        else{
            _sk_20085 = getc(last_r_file_ptr);
        }
    }
    else{
        _sk_20085 = getc(last_r_file_ptr);
    }
    // SubProg GetPlatformDefines pc: 247 op: ELSE (23)
    goto LB; // [247] 265
    // SubProg GetPlatformDefines pc: 249 op: NOP1 (159)
LC: // addr: 250 pc: 249 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 250 op: STARTLINE (58)

    /** platform.e:213						sk = 0*/
    // SubProg GetPlatformDefines pc: 252 op: ASSIGN (18)
    DeRef(_sk_20085);
    _sk_20085 = 0;
    // SubProg GetPlatformDefines pc: 255 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 256 op: ELSE (23)
    goto LB; // [256] 265
    // SubProg GetPlatformDefines pc: 258 op: NOP1 (159)
L8: // addr: 259 pc: 258 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 259 op: STARTLINE (58)

    /** platform.e:216					sk = 0*/
    // SubProg GetPlatformDefines pc: 261 op: ASSIGN (18)
    DeRef(_sk_20085);
    _sk_20085 = 0;
    // SubProg GetPlatformDefines pc: 264 op: NOP1 (159)
LB: // addr: 265 pc: 264 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 265 op: STARTLINE (58)

    /** platform.e:218				if sk = 2 then*/
    // SubProg GetPlatformDefines pc: 267 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 2)){
        goto LD; // [267] 284
    }
    // SubProg GetPlatformDefines pc: 271 op: STARTLINE (58)

    /** platform.e:219					local_defines &= { "GUI" }*/
    // SubProg GetPlatformDefines pc: 273 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11421);
    ((intptr_t*)_2)[1] = _11421;
    _11449 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 277 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11449);
    DeRefDS(_11449);
    _11449 = NOVALUE;
    // SubProg GetPlatformDefines pc: 281 op: ELSE (23)
    goto LE; // [281] 314
    // SubProg GetPlatformDefines pc: 283 op: NOP1 (159)
LD: // addr: 284 pc: 283 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 284 op: STARTLINE (58)

    /** platform.e:220				elsif sk = 3 then*/
    // SubProg GetPlatformDefines pc: 286 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _sk_20085, 3)){
        goto LF; // [286] 303
    }
    // SubProg GetPlatformDefines pc: 290 op: STARTLINE (58)

    /** platform.e:221					local_defines &= { "CONSOLE" }*/
    // SubProg GetPlatformDefines pc: 292 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11424);
    ((intptr_t*)_2)[1] = _11424;
    _11452 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 296 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11452);
    DeRefDS(_11452);
    _11452 = NOVALUE;
    // SubProg GetPlatformDefines pc: 300 op: ELSE (23)
    goto LE; // [300] 314
    // SubProg GetPlatformDefines pc: 302 op: NOP1 (159)
LF: // addr: 303 pc: 302 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 303 op: STARTLINE (58)

    /** platform.e:223					local_defines &= { "UNKNOWN" }*/
    // SubProg GetPlatformDefines pc: 305 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11454);
    ((intptr_t*)_2)[1] = _11454;
    _11455 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 309 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11455);
    DeRefDS(_11455);
    _11455 = NOVALUE;
    // SubProg GetPlatformDefines pc: 313 op: NOP1 (159)
LE: // addr: 314 pc: 313 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 314 op: STARTLINE (58)

    /** platform.e:225				close(fh)*/
    // SubProg GetPlatformDefines pc: 316 op: CLOSE (86)
    EClose(_fh_20065);
    // SubProg GetPlatformDefines pc: 318 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var sk_20085
    DeRef(_sk_20085);
    _sk_20085 = NOVALUE;
    // SubProg GetPlatformDefines pc: 320 op: NOP1 (159)
L7: // addr: 321 pc: 320 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 321 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var lcmds_20063
    DeRef(_lcmds_20063);
    _lcmds_20063 = NOVALUE;

// block var fh_20065
    // SubProg GetPlatformDefines pc: 323 op: ELSE (23)
    goto L10; // [323] 575
    // SubProg GetPlatformDefines pc: 325 op: NOP1 (159)
L4: // addr: 326 pc: 325 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 326 op: STARTLINE (58)

    /** platform.e:228			local_defines = append( local_defines, "CONSOLE" )*/
    // SubProg GetPlatformDefines pc: 328 op: APPEND (35)
    RefDS(_11424);
    Append(&_local_defines_20053, _local_defines_20053, _11424);
    // SubProg GetPlatformDefines pc: 332 op: STARTLINE (58)

    /** platform.e:229			if (ILINUX and not for_translator) or (TLINUX and for_translator) then*/
    // SubProg GetPlatformDefines pc: 334 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 336 op: SC1_AND (141)
    if (_39ILINUX_19984 == 0) {
        _11458 = 0;
        goto L11; // [336] 347
    }
    // SubProg GetPlatformDefines pc: 340 op: NOT (7)
    _11459 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 343 op: SC2_AND (142)
    _11458 = (_11459 != 0);
    // SubProg GetPlatformDefines pc: 346 op: NOP1 (159)
L11: // addr: 347 pc: 346 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 347 op: SC1_OR_IF (147)
    if (_11458 != 0) {
        goto L12; // [347] 366
    }
    // SubProg GetPlatformDefines pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 353 op: SC1_AND (141)
    if (_39TLINUX_19985 == 0) {
        DeRef(_11461);
        _11461 = 0;
        goto L13; // [353] 361
    }
    // SubProg GetPlatformDefines pc: 357 op: SC2_AND (142)
    _11461 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 360 op: NOP1 (159)
L13: // addr: 361 pc: 360 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 361 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 362 op: IF (20)
    if (_11461 == 0)
    {
        _11461 = NOVALUE;
        goto L14; // [362] 379
    }
    else{
        _11461 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 365 op: NOP1 (159)
L12: // addr: 366 pc: 365 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 366 op: STARTLINE (58)

    /** platform.e:230				local_defines &= {"UNIX", "LINUX"}*/
    // SubProg GetPlatformDefines pc: 368 op: RIGHT_BRACE_2 (85)
    RefDS(_11463);
    RefDS(_11462);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _11462;
    ((intptr_t *)_2)[2] = _11463;
    _11464 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 372 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11464);
    DeRefDS(_11464);
    _11464 = NOVALUE;
    // SubProg GetPlatformDefines pc: 376 op: ELSE (23)
    goto L15; // [376] 574
    // SubProg GetPlatformDefines pc: 378 op: NOP1 (159)
L14: // addr: 379 pc: 378 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 379 op: STARTLINE (58)

    /** platform.e:231			elsif (IOSX and not for_translator) or (TOSX and for_translator) then*/
    // SubProg GetPlatformDefines pc: 381 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 383 op: SC1_AND (141)
    if (0 == 0) {
        _11466 = 0;
        goto L16; // [383] 394
    }
    // SubProg GetPlatformDefines pc: 387 op: NOT (7)
    _11467 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 390 op: SC2_AND (142)
    _11466 = (_11467 != 0);
    // SubProg GetPlatformDefines pc: 393 op: NOP1 (159)
L16: // addr: 394 pc: 393 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 394 op: SC1_OR_IF (147)
    if (_11466 != 0) {
        goto L17; // [394] 413
    }
    // SubProg GetPlatformDefines pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 400 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11469);
        _11469 = 0;
        goto L18; // [400] 408
    }
    // SubProg GetPlatformDefines pc: 404 op: SC2_AND (142)
    _11469 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 407 op: NOP1 (159)
L18: // addr: 408 pc: 407 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 408 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 409 op: IF (20)
    if (_11469 == 0)
    {
        _11469 = NOVALUE;
        goto L19; // [409] 428
    }
    else{
        _11469 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 412 op: NOP1 (159)
L17: // addr: 413 pc: 412 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 413 op: STARTLINE (58)

    /** platform.e:232				local_defines &= {"UNIX", "BSD", "OSX"}*/
    // SubProg GetPlatformDefines pc: 415 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11462);
    ((intptr_t*)_2)[1] = _11462;
    RefDS(_11470);
    ((intptr_t*)_2)[2] = _11470;
    RefDS(_11471);
    ((intptr_t*)_2)[3] = _11471;
    _11472 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 421 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11472);
    DeRefDS(_11472);
    _11472 = NOVALUE;
    // SubProg GetPlatformDefines pc: 425 op: ELSE (23)
    goto L15; // [425] 574
    // SubProg GetPlatformDefines pc: 427 op: NOP1 (159)
L19: // addr: 428 pc: 427 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 428 op: STARTLINE (58)

    /** platform.e:233			elsif (IOPENBSD and not for_translator) or (TOPENBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 432 op: SC1_AND (141)
    if (0 == 0) {
        _11474 = 0;
        goto L1A; // [432] 443
    }
    // SubProg GetPlatformDefines pc: 436 op: NOT (7)
    _11475 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 439 op: SC2_AND (142)
    _11474 = (_11475 != 0);
    // SubProg GetPlatformDefines pc: 442 op: NOP1 (159)
L1A: // addr: 443 pc: 442 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 443 op: SC1_OR_IF (147)
    if (_11474 != 0) {
        goto L1B; // [443] 462
    }
    // SubProg GetPlatformDefines pc: 447 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 449 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11477);
        _11477 = 0;
        goto L1C; // [449] 457
    }
    // SubProg GetPlatformDefines pc: 453 op: SC2_AND (142)
    _11477 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 456 op: NOP1 (159)
L1C: // addr: 457 pc: 456 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 457 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 458 op: IF (20)
    if (_11477 == 0)
    {
        _11477 = NOVALUE;
        goto L1D; // [458] 477
    }
    else{
        _11477 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 461 op: NOP1 (159)
L1B: // addr: 462 pc: 461 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 462 op: STARTLINE (58)

    /** platform.e:234				local_defines &= { "UNIX", "BSD", "OPENBSD"}*/
    // SubProg GetPlatformDefines pc: 464 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11462);
    ((intptr_t*)_2)[1] = _11462;
    RefDS(_11470);
    ((intptr_t*)_2)[2] = _11470;
    RefDS(_11478);
    ((intptr_t*)_2)[3] = _11478;
    _11479 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 470 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11479);
    DeRefDS(_11479);
    _11479 = NOVALUE;
    // SubProg GetPlatformDefines pc: 474 op: ELSE (23)
    goto L15; // [474] 574
    // SubProg GetPlatformDefines pc: 476 op: NOP1 (159)
L1D: // addr: 477 pc: 476 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 477 op: STARTLINE (58)

    /** platform.e:235			elsif (INETBSD and not for_translator) or (TNETBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 479 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 481 op: SC1_AND (141)
    if (0 == 0) {
        _11481 = 0;
        goto L1E; // [481] 492
    }
    // SubProg GetPlatformDefines pc: 485 op: NOT (7)
    _11482 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 488 op: SC2_AND (142)
    _11481 = (_11482 != 0);
    // SubProg GetPlatformDefines pc: 491 op: NOP1 (159)
L1E: // addr: 492 pc: 491 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 492 op: SC1_OR_IF (147)
    if (_11481 != 0) {
        goto L1F; // [492] 511
    }
    // SubProg GetPlatformDefines pc: 496 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 498 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11484);
        _11484 = 0;
        goto L20; // [498] 506
    }
    // SubProg GetPlatformDefines pc: 502 op: SC2_AND (142)
    _11484 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 505 op: NOP1 (159)
L20: // addr: 506 pc: 505 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 506 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 507 op: IF (20)
    if (_11484 == 0)
    {
        _11484 = NOVALUE;
        goto L21; // [507] 526
    }
    else{
        _11484 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 510 op: NOP1 (159)
L1F: // addr: 511 pc: 510 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 511 op: STARTLINE (58)

    /** platform.e:236				local_defines &= { "UNIX", "BSD", "NETBSD"}*/
    // SubProg GetPlatformDefines pc: 513 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11462);
    ((intptr_t*)_2)[1] = _11462;
    RefDS(_11470);
    ((intptr_t*)_2)[2] = _11470;
    RefDS(_11485);
    ((intptr_t*)_2)[3] = _11485;
    _11486 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 519 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11486);
    DeRefDS(_11486);
    _11486 = NOVALUE;
    // SubProg GetPlatformDefines pc: 523 op: ELSE (23)
    goto L15; // [523] 574
    // SubProg GetPlatformDefines pc: 525 op: NOP1 (159)
L21: // addr: 526 pc: 525 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 526 op: STARTLINE (58)

    /** platform.e:237			elsif (IBSD and not for_translator) or (TBSD and for_translator) then*/
    // SubProg GetPlatformDefines pc: 528 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 530 op: SC1_AND (141)
    if (0 == 0) {
        _11488 = 0;
        goto L22; // [530] 541
    }
    // SubProg GetPlatformDefines pc: 534 op: NOT (7)
    _11489 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 537 op: SC2_AND (142)
    _11488 = (_11489 != 0);
    // SubProg GetPlatformDefines pc: 540 op: NOP1 (159)
L22: // addr: 541 pc: 540 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 541 op: SC1_OR_IF (147)
    if (_11488 != 0) {
        goto L23; // [541] 560
    }
    // SubProg GetPlatformDefines pc: 545 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 547 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11491);
        _11491 = 0;
        goto L24; // [547] 555
    }
    // SubProg GetPlatformDefines pc: 551 op: SC2_AND (142)
    _11491 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 554 op: NOP1 (159)
L24: // addr: 555 pc: 554 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 555 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 556 op: IF (20)
    if (_11491 == 0)
    {
        _11491 = NOVALUE;
        goto L25; // [556] 573
    }
    else{
        _11491 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 559 op: NOP1 (159)
L23: // addr: 560 pc: 559 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 560 op: STARTLINE (58)

    /** platform.e:238				local_defines &= {"UNIX", "BSD", "FREEBSD"}*/
    // SubProg GetPlatformDefines pc: 562 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11462);
    ((intptr_t*)_2)[1] = _11462;
    RefDS(_11470);
    ((intptr_t*)_2)[2] = _11470;
    RefDS(_11492);
    ((intptr_t*)_2)[3] = _11492;
    _11493 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 568 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11493);
    DeRefDS(_11493);
    _11493 = NOVALUE;
    // SubProg GetPlatformDefines pc: 572 op: NOP1 (159)
L25: // addr: 573 pc: 572 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 573 op: NOP1 (159)
L15: // addr: 574 pc: 573 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 574 op: NOP1 (159)
L10: // addr: 575 pc: 574 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 575 op: STARTLINE (58)

    /** platform.e:242		if (IX86 and not for_translator) or (TX86 and for_translator) then*/
    // SubProg GetPlatformDefines pc: 577 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 579 op: SC1_AND (141)
    if (_39IX86_19996 == 0) {
        _11495 = 0;
        goto L26; // [579] 590
    }
    // SubProg GetPlatformDefines pc: 583 op: NOT (7)
    _11496 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 586 op: SC2_AND (142)
    _11495 = (_11496 != 0);
    // SubProg GetPlatformDefines pc: 589 op: NOP1 (159)
L26: // addr: 590 pc: 589 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 590 op: SC1_OR_IF (147)
    if (_11495 != 0) {
        goto L27; // [590] 609
    }
    // SubProg GetPlatformDefines pc: 594 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 596 op: SC1_AND (141)
    if (_39TX86_19997 == 0) {
        DeRef(_11498);
        _11498 = 0;
        goto L28; // [596] 604
    }
    // SubProg GetPlatformDefines pc: 600 op: SC2_AND (142)
    _11498 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 603 op: NOP1 (159)
L28: // addr: 604 pc: 603 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 604 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 605 op: IF (20)
    if (_11498 == 0)
    {
        _11498 = NOVALUE;
        goto L29; // [605] 624
    }
    else{
        _11498 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 608 op: NOP1 (159)
L27: // addr: 609 pc: 608 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 609 op: STARTLINE (58)

    /** platform.e:243			local_defines &= {"X86", "BITS32", "LONG32"}*/
    // SubProg GetPlatformDefines pc: 611 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11397);
    ((intptr_t*)_2)[1] = _11397;
    RefDS(_11499);
    ((intptr_t*)_2)[2] = _11499;
    RefDS(_11500);
    ((intptr_t*)_2)[3] = _11500;
    _11501 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 617 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11501);
    DeRefDS(_11501);
    _11501 = NOVALUE;
    // SubProg GetPlatformDefines pc: 621 op: ELSE (23)
    goto L2A; // [621] 777
    // SubProg GetPlatformDefines pc: 623 op: NOP1 (159)
L29: // addr: 624 pc: 623 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 624 op: STARTLINE (58)

    /** platform.e:245		elsif (IX86_64 and not for_translator) or (TX86_64 and for_translator) then*/
    // SubProg GetPlatformDefines pc: 626 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 628 op: SC1_AND (141)
    if (0 == 0) {
        _11503 = 0;
        goto L2B; // [628] 639
    }
    // SubProg GetPlatformDefines pc: 632 op: NOT (7)
    _11504 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 635 op: SC2_AND (142)
    _11503 = (_11504 != 0);
    // SubProg GetPlatformDefines pc: 638 op: NOP1 (159)
L2B: // addr: 639 pc: 638 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 639 op: SC1_OR_IF (147)
    if (_11503 != 0) {
        goto L2C; // [639] 658
    }
    // SubProg GetPlatformDefines pc: 643 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 645 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11506);
        _11506 = 0;
        goto L2D; // [645] 653
    }
    // SubProg GetPlatformDefines pc: 649 op: SC2_AND (142)
    _11506 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 652 op: NOP1 (159)
L2D: // addr: 653 pc: 652 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 653 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 654 op: IF (20)
    if (_11506 == 0)
    {
        _11506 = NOVALUE;
        goto L2E; // [654] 729
    }
    else{
        _11506 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 657 op: NOP1 (159)
L2C: // addr: 658 pc: 657 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 658 op: STARTLINE (58)

    /** platform.e:246			local_defines &= {"X86_64", "BITS64"}*/
    // SubProg GetPlatformDefines pc: 660 op: RIGHT_BRACE_2 (85)
    RefDS(_11507);
    RefDS(_11399);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _11399;
    ((intptr_t *)_2)[2] = _11507;
    _11508 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 664 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11508);
    DeRefDS(_11508);
    _11508 = NOVALUE;
    // SubProg GetPlatformDefines pc: 668 op: STARTLINE (58)

    /** platform.e:247			if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    // SubProg GetPlatformDefines pc: 670 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 672 op: SC1_AND (141)
    if (0 == 0) {
        _11510 = 0;
        goto L2F; // [672] 683
    }
    // SubProg GetPlatformDefines pc: 676 op: NOT (7)
    _11511 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 679 op: SC2_AND (142)
    _11510 = (_11511 != 0);
    // SubProg GetPlatformDefines pc: 682 op: NOP1 (159)
L2F: // addr: 683 pc: 682 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 683 op: SC1_OR_IF (147)
    if (_11510 != 0) {
        goto L30; // [683] 702
    }
    // SubProg GetPlatformDefines pc: 687 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 689 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11513);
        _11513 = 0;
        goto L31; // [689] 697
    }
    // SubProg GetPlatformDefines pc: 693 op: SC2_AND (142)
    _11513 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 696 op: NOP1 (159)
L31: // addr: 697 pc: 696 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 697 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 698 op: IF (20)
    if (_11513 == 0)
    {
        _11513 = NOVALUE;
        goto L32; // [698] 715
    }
    else{
        _11513 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 701 op: NOP1 (159)
L30: // addr: 702 pc: 701 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 702 op: STARTLINE (58)

    /** platform.e:248				local_defines &= {"LONG32"}*/
    // SubProg GetPlatformDefines pc: 704 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11500);
    ((intptr_t*)_2)[1] = _11500;
    _11514 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 708 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11514);
    DeRefDS(_11514);
    _11514 = NOVALUE;
    // SubProg GetPlatformDefines pc: 712 op: ELSE (23)
    goto L2A; // [712] 777
    // SubProg GetPlatformDefines pc: 714 op: NOP1 (159)
L32: // addr: 715 pc: 714 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 715 op: STARTLINE (58)

    /** platform.e:250				local_defines &= {"LONG64"}*/
    // SubProg GetPlatformDefines pc: 717 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11516);
    ((intptr_t*)_2)[1] = _11516;
    _11517 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 721 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11517);
    DeRefDS(_11517);
    _11517 = NOVALUE;
    // SubProg GetPlatformDefines pc: 725 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 726 op: ELSE (23)
    goto L2A; // [726] 777
    // SubProg GetPlatformDefines pc: 728 op: NOP1 (159)
L2E: // addr: 729 pc: 728 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 729 op: STARTLINE (58)

    /** platform.e:252		elsif (IARM and not for_translator) or (TARM and for_translator) then*/
    // SubProg GetPlatformDefines pc: 731 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 733 op: SC1_AND (141)
    if (0 == 0) {
        _11519 = 0;
        goto L33; // [733] 744
    }
    // SubProg GetPlatformDefines pc: 737 op: NOT (7)
    _11520 = (_for_translator_20052 == 0);
    // SubProg GetPlatformDefines pc: 740 op: SC2_AND (142)
    _11519 = (_11520 != 0);
    // SubProg GetPlatformDefines pc: 743 op: NOP1 (159)
L33: // addr: 744 pc: 743 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 744 op: SC1_OR_IF (147)
    if (_11519 != 0) {
        goto L34; // [744] 763
    }
    // SubProg GetPlatformDefines pc: 748 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetPlatformDefines pc: 750 op: SC1_AND (141)
    if (0 == 0) {
        DeRef(_11522);
        _11522 = 0;
        goto L35; // [750] 758
    }
    // SubProg GetPlatformDefines pc: 754 op: SC2_AND (142)
    _11522 = (_for_translator_20052 != 0);
    // SubProg GetPlatformDefines pc: 757 op: NOP1 (159)
L35: // addr: 758 pc: 757 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 758 op: NOP1 (159)
    // SubProg GetPlatformDefines pc: 759 op: IF (20)
    if (_11522 == 0)
    {
        _11522 = NOVALUE;
        goto L36; // [759] 776
    }
    else{
        _11522 = NOVALUE;
    }
    // SubProg GetPlatformDefines pc: 762 op: NOP1 (159)
L34: // addr: 763 pc: 762 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 763 op: STARTLINE (58)

    /** platform.e:253			local_defines &= {"ARM", "BITS32", "LONG32"}*/
    // SubProg GetPlatformDefines pc: 765 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11401);
    ((intptr_t*)_2)[1] = _11401;
    RefDS(_11499);
    ((intptr_t*)_2)[2] = _11499;
    RefDS(_11500);
    ((intptr_t*)_2)[3] = _11500;
    _11523 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 771 op: CONCAT (15)
    Concat((object_ptr)&_local_defines_20053, _local_defines_20053, _11523);
    DeRefDS(_11523);
    _11523 = NOVALUE;
    // SubProg GetPlatformDefines pc: 775 op: NOP1 (159)
L36: // addr: 776 pc: 775 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 776 op: NOP1 (159)
L2A: // addr: 777 pc: 776 sub: 20050 op: 159
    // SubProg GetPlatformDefines pc: 777 op: STARTLINE (58)

    /** platform.e:258		return { "_PLAT_START" } & local_defines & { "_PLAT_STOP" }*/
    // SubProg GetPlatformDefines pc: 779 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11525);
    ((intptr_t*)_2)[1] = _11525;
    _11526 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 783 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_11527);
    ((intptr_t*)_2)[1] = _11527;
    _11528 = MAKE_SEQ(_1);
    // SubProg GetPlatformDefines pc: 787 op: CONCAT_N (157)
    {
        object concat_list[3];

        concat_list[0] = _11528;
        concat_list[1] = _local_defines_20053;
        concat_list[2] = _11526;
        Concat_N((object_ptr)&_11529, concat_list, 3);
    }
    DeRefDS(_11528);
    _11528 = NOVALUE;
    DeRefDS(_11526);
    _11526 = NOVALUE;
    // SubProg GetPlatformDefines pc: 793 op: RETURNF (28)

// Exiting block BLOCK: GetPlatformDefines

// block var for_translator_20052

// block var local_defines_20053
    DeRefDS(_local_defines_20053);
    DeRef(_11489);
    _11489 = NOVALUE;
    DeRef(_11459);
    _11459 = NOVALUE;
    DeRef(_11504);
    _11504 = NOVALUE;
    DeRef(_11467);
    _11467 = NOVALUE;
    DeRef(_11511);
    _11511 = NOVALUE;
    DeRef(_11405);
    _11405 = NOVALUE;
    DeRef(_11520);
    _11520 = NOVALUE;
    DeRef(_11482);
    _11482 = NOVALUE;
    DeRef(_11475);
    _11475 = NOVALUE;
    DeRef(_11496);
    _11496 = NOVALUE;
    return _11529;
    // SubProg GetPlatformDefines pc: 797 op: BADRETURNF (43)
    ;
}



// 0xA27A468D
