// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _43host_platform()
{
    object _0, _1, _2;
    

    /** platform.e:113		return ihost_platform*/
    return 3;
    ;
}


object _43GetPlatformDefines(object _for_translator_21657)
{
    object _local_defines_21658 = NOVALUE;
    object _lcmds_21668 = NOVALUE;
    object _fh_21670 = NOVALUE;
    object _sk_21690 = NOVALUE;
    object _12508 = NOVALUE;
    object _12507 = NOVALUE;
    object _12505 = NOVALUE;
    object _12502 = NOVALUE;
    object _12501 = NOVALUE;
    object _12499 = NOVALUE;
    object _12498 = NOVALUE;
    object _12496 = NOVALUE;
    object _12493 = NOVALUE;
    object _12492 = NOVALUE;
    object _12490 = NOVALUE;
    object _12489 = NOVALUE;
    object _12487 = NOVALUE;
    object _12485 = NOVALUE;
    object _12483 = NOVALUE;
    object _12482 = NOVALUE;
    object _12480 = NOVALUE;
    object _12477 = NOVALUE;
    object _12475 = NOVALUE;
    object _12474 = NOVALUE;
    object _12472 = NOVALUE;
    object _12470 = NOVALUE;
    object _12468 = NOVALUE;
    object _12467 = NOVALUE;
    object _12465 = NOVALUE;
    object _12463 = NOVALUE;
    object _12461 = NOVALUE;
    object _12460 = NOVALUE;
    object _12458 = NOVALUE;
    object _12456 = NOVALUE;
    object _12454 = NOVALUE;
    object _12453 = NOVALUE;
    object _12451 = NOVALUE;
    object _12448 = NOVALUE;
    object _12446 = NOVALUE;
    object _12445 = NOVALUE;
    object _12443 = NOVALUE;
    object _12440 = NOVALUE;
    object _12438 = NOVALUE;
    object _12437 = NOVALUE;
    object _12434 = NOVALUE;
    object _12431 = NOVALUE;
    object _12428 = NOVALUE;
    object _12424 = NOVALUE;
    object _12423 = NOVALUE;
    object _12418 = NOVALUE;
    object _12417 = NOVALUE;
    object _12404 = NOVALUE;
    object _12401 = NOVALUE;
    object _12398 = NOVALUE;
    object _12397 = NOVALUE;
    object _12396 = NOVALUE;
    object _12392 = NOVALUE;
    object _12389 = NOVALUE;
    object _12386 = NOVALUE;
    object _12384 = NOVALUE;
    object _12383 = NOVALUE;
    object _0, _1, _2;
    

    /** platform.e:173		sequence local_defines = {}*/
    RefDS(_5);
    DeRef(_local_defines_21658);
    _local_defines_21658 = _5;

    /** platform.e:175		if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    if (0 == 0) {
        _12383 = 0;
        goto L1; // [14] 25
    }
    _12384 = (0 == 0);
    _12383 = (_12384 != 0);
L1: 
    if (_12383 != 0) {
        goto L2; // [25] 44
    }
    if (0 == 0) {
        DeRef(_12386);
        _12386 = 0;
        goto L3; // [31] 39
    }
    _12386 = (_for_translator_21657 != 0);
L3: 
    if (_12386 == 0)
    {
        _12386 = NOVALUE;
        goto L4; // [40] 326
    }
    else{
        _12386 = NOVALUE;
    }
L2: 

    /** platform.e:176			local_defines &= {"WINDOWS", "WIN32"}*/
    RefDS(_12388);
    RefDS(_12387);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12387;
    ((intptr_t *)_2)[2] = _12388;
    _12389 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12389);
    DeRefDS(_12389);
    _12389 = NOVALUE;

    /** platform.e:177			sequence lcmds = command_line()*/
    DeRef(_lcmds_21668);
    _lcmds_21668 = Command_Line();

    /** platform.e:180			integer fh*/

    /** platform.e:181			fh = open(lcmds[1], "rb")*/
    _2 = (object)SEQ_PTR(_lcmds_21668);
    _12392 = (object)*(((s1_ptr)_2)->base + 1);
    _fh_21670 = EOpen(_12392, _10472, 0);
    _12392 = NOVALUE;

    /** platform.e:182			if fh = -1 then*/
    if (_fh_21670 != -1)
    goto L5; // [73] 123

    /** platform.e:184	 			if match("euiw", lower(lcmds[1])) != 0 then*/
    _2 = (object)SEQ_PTR(_lcmds_21668);
    _12396 = (object)*(((s1_ptr)_2)->base + 1);
    RefDS(_12396);
    _12397 = _13lower(_12396);
    _12396 = NOVALUE;
    _12398 = e_match_from(_12395, _12397, 1);
    DeRef(_12397);
    _12397 = NOVALUE;
    if (_12398 == 0)
    goto L6; // [92] 109

    /** platform.e:185	 				local_defines &= { "GUI" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12400);
    ((intptr_t*)_2)[1] = _12400;
    _12401 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12401);
    DeRefDS(_12401);
    _12401 = NOVALUE;
    goto L7; // [106] 321
L6: 

    /** platform.e:187	 				local_defines &= { "CONSOLE" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12403);
    ((intptr_t*)_2)[1] = _12403;
    _12404 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12404);
    DeRefDS(_12404);
    _12404 = NOVALUE;
    goto L7; // [120] 321
L5: 

    /** platform.e:190				atom sk*/

    /** platform.e:191				sk = seek(fh, #18) -- Fixed location of relocation table.*/
    _0 = _sk_21690;
    _sk_21690 = _19seek(_fh_21670, 24);
    DeRef(_0);

    /** platform.e:192				sk = get_integer16(fh)*/
    _0 = _sk_21690;
    _sk_21690 = _19get_integer16(_fh_21670);
    DeRef(_0);

    /** platform.e:193				if sk = #40 then*/
    if (binary_op_a(NOTEQ, _sk_21690, 64)){
        goto L8; // [140] 259
    }

    /** platform.e:195					sk = seek(fh, #3C) -- Fixed location of COFF signature offset.*/
    _0 = _sk_21690;
    _sk_21690 = _19seek(_fh_21670, 60);
    DeRef(_0);

    /** platform.e:196					sk = get_integer32(fh)*/
    _0 = _sk_21690;
    _sk_21690 = _19get_integer32(_fh_21670);
    DeRef(_0);

    /** platform.e:197					sk = seek(fh, sk)*/
    Ref(_sk_21690);
    _0 = _sk_21690;
    _sk_21690 = _19seek(_fh_21670, _sk_21690);
    DeRef(_0);

    /** platform.e:198					sk = get_integer16(fh)*/
    _0 = _sk_21690;
    _sk_21690 = _19get_integer16(_fh_21670);
    DeRef(_0);

    /** platform.e:199					if sk = #4550 then -- "PE" in intel endian*/
    if (binary_op_a(NOTEQ, _sk_21690, 17744)){
        goto L9; // [172] 221
    }

    /** platform.e:200						sk = get_integer16(fh)*/
    _0 = _sk_21690;
    _sk_21690 = _19get_integer16(_fh_21670);
    DeRef(_0);

    /** platform.e:201						if sk = 0 then*/
    if (binary_op_a(NOTEQ, _sk_21690, 0)){
        goto LA; // [184] 212
    }

    /** platform.e:203							sk = seek(fh, where(fh) + 88 )*/
    _12417 = _19where(_fh_21670);
    if (IS_ATOM_INT(_12417)) {
        _12418 = _12417 + 88;
        if ((object)((uintptr_t)_12418 + (uintptr_t)HIGH_BITS) >= 0){
            _12418 = NewDouble((eudouble)_12418);
        }
    }
    else {
        _12418 = binary_op(PLUS, _12417, 88);
    }
    DeRef(_12417);
    _12417 = NOVALUE;
    _0 = _sk_21690;
    _sk_21690 = _19seek(_fh_21670, _12418);
    DeRef(_0);
    _12418 = NOVALUE;

    /** platform.e:204							sk = get_integer16(fh)*/
    _0 = _sk_21690;
    _sk_21690 = _19get_integer16(_fh_21670);
    DeRef(_0);
    goto LB; // [209] 265
LA: 

    /** platform.e:206							sk = 0	-- Don't know this format.*/
    DeRef(_sk_21690);
    _sk_21690 = 0;
    goto LB; // [218] 265
L9: 

    /** platform.e:208					elsif sk = #454E then -- "NE" in intel endian*/
    if (binary_op_a(NOTEQ, _sk_21690, 17742)){
        goto LC; // [223] 250
    }

    /** platform.e:210						sk = seek(fh, where(fh) + 54 )*/
    _12423 = _19where(_fh_21670);
    if (IS_ATOM_INT(_12423)) {
        _12424 = _12423 + 54;
        if ((object)((uintptr_t)_12424 + (uintptr_t)HIGH_BITS) >= 0){
            _12424 = NewDouble((eudouble)_12424);
        }
    }
    else {
        _12424 = binary_op(PLUS, _12423, 54);
    }
    DeRef(_12423);
    _12423 = NOVALUE;
    _0 = _sk_21690;
    _sk_21690 = _19seek(_fh_21670, _12424);
    DeRef(_0);
    _12424 = NOVALUE;

    /** platform.e:211						sk = getc(fh)*/
    DeRef(_sk_21690);
    if (_fh_21670 != last_r_file_no) {
        last_r_file_ptr = which_file(_fh_21670, EF_READ);
        last_r_file_no = _fh_21670;
    }
    if (last_r_file_ptr == xstdin) {
        if (in_from_keyb) {
            _sk_21690 = getc((FILE*)xstdin);
        }
        else{
            _sk_21690 = getc(last_r_file_ptr);
        }
    }
    else{
        _sk_21690 = getc(last_r_file_ptr);
    }
    goto LB; // [247] 265
LC: 

    /** platform.e:213						sk = 0*/
    DeRef(_sk_21690);
    _sk_21690 = 0;
    goto LB; // [256] 265
L8: 

    /** platform.e:216					sk = 0*/
    DeRef(_sk_21690);
    _sk_21690 = 0;
LB: 

    /** platform.e:218				if sk = 2 then*/
    if (binary_op_a(NOTEQ, _sk_21690, 2)){
        goto LD; // [267] 284
    }

    /** platform.e:219					local_defines &= { "GUI" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12400);
    ((intptr_t*)_2)[1] = _12400;
    _12428 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12428);
    DeRefDS(_12428);
    _12428 = NOVALUE;
    goto LE; // [281] 314
LD: 

    /** platform.e:220				elsif sk = 3 then*/
    if (binary_op_a(NOTEQ, _sk_21690, 3)){
        goto LF; // [286] 303
    }

    /** platform.e:221					local_defines &= { "CONSOLE" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12403);
    ((intptr_t*)_2)[1] = _12403;
    _12431 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12431);
    DeRefDS(_12431);
    _12431 = NOVALUE;
    goto LE; // [300] 314
LF: 

    /** platform.e:223					local_defines &= { "UNKNOWN" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12433);
    ((intptr_t*)_2)[1] = _12433;
    _12434 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12434);
    DeRefDS(_12434);
    _12434 = NOVALUE;
LE: 

    /** platform.e:225				close(fh)*/
    EClose(_fh_21670);
    DeRef(_sk_21690);
    _sk_21690 = NOVALUE;
L7: 
    DeRef(_lcmds_21668);
    _lcmds_21668 = NOVALUE;
    goto L10; // [323] 575
L4: 

    /** platform.e:228			local_defines = append( local_defines, "CONSOLE" )*/
    RefDS(_12403);
    Append(&_local_defines_21658, _local_defines_21658, _12403);

    /** platform.e:229			if (ILINUX and not for_translator) or (TLINUX and for_translator) then*/
    if (_43ILINUX_21589 == 0) {
        _12437 = 0;
        goto L11; // [336] 347
    }
    _12438 = (_for_translator_21657 == 0);
    _12437 = (_12438 != 0);
L11: 
    if (_12437 != 0) {
        goto L12; // [347] 366
    }
    if (_43TLINUX_21590 == 0) {
        DeRef(_12440);
        _12440 = 0;
        goto L13; // [353] 361
    }
    _12440 = (_for_translator_21657 != 0);
L13: 
    if (_12440 == 0)
    {
        _12440 = NOVALUE;
        goto L14; // [362] 379
    }
    else{
        _12440 = NOVALUE;
    }
L12: 

    /** platform.e:230				local_defines &= {"UNIX", "LINUX"}*/
    RefDS(_12442);
    RefDS(_12441);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12441;
    ((intptr_t *)_2)[2] = _12442;
    _12443 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12443);
    DeRefDS(_12443);
    _12443 = NOVALUE;
    goto L15; // [376] 574
L14: 

    /** platform.e:231			elsif (IOSX and not for_translator) or (TOSX and for_translator) then*/
    if (0 == 0) {
        _12445 = 0;
        goto L16; // [383] 394
    }
    _12446 = (_for_translator_21657 == 0);
    _12445 = (_12446 != 0);
L16: 
    if (_12445 != 0) {
        goto L17; // [394] 413
    }
    if (0 == 0) {
        DeRef(_12448);
        _12448 = 0;
        goto L18; // [400] 408
    }
    _12448 = (_for_translator_21657 != 0);
L18: 
    if (_12448 == 0)
    {
        _12448 = NOVALUE;
        goto L19; // [409] 428
    }
    else{
        _12448 = NOVALUE;
    }
L17: 

    /** platform.e:232				local_defines &= {"UNIX", "BSD", "OSX"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12441);
    ((intptr_t*)_2)[1] = _12441;
    RefDS(_12449);
    ((intptr_t*)_2)[2] = _12449;
    RefDS(_12450);
    ((intptr_t*)_2)[3] = _12450;
    _12451 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12451);
    DeRefDS(_12451);
    _12451 = NOVALUE;
    goto L15; // [425] 574
L19: 

    /** platform.e:233			elsif (IOPENBSD and not for_translator) or (TOPENBSD and for_translator) then*/
    if (0 == 0) {
        _12453 = 0;
        goto L1A; // [432] 443
    }
    _12454 = (_for_translator_21657 == 0);
    _12453 = (_12454 != 0);
L1A: 
    if (_12453 != 0) {
        goto L1B; // [443] 462
    }
    if (0 == 0) {
        DeRef(_12456);
        _12456 = 0;
        goto L1C; // [449] 457
    }
    _12456 = (_for_translator_21657 != 0);
L1C: 
    if (_12456 == 0)
    {
        _12456 = NOVALUE;
        goto L1D; // [458] 477
    }
    else{
        _12456 = NOVALUE;
    }
L1B: 

    /** platform.e:234				local_defines &= { "UNIX", "BSD", "OPENBSD"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12441);
    ((intptr_t*)_2)[1] = _12441;
    RefDS(_12449);
    ((intptr_t*)_2)[2] = _12449;
    RefDS(_12457);
    ((intptr_t*)_2)[3] = _12457;
    _12458 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12458);
    DeRefDS(_12458);
    _12458 = NOVALUE;
    goto L15; // [474] 574
L1D: 

    /** platform.e:235			elsif (INETBSD and not for_translator) or (TNETBSD and for_translator) then*/
    if (0 == 0) {
        _12460 = 0;
        goto L1E; // [481] 492
    }
    _12461 = (_for_translator_21657 == 0);
    _12460 = (_12461 != 0);
L1E: 
    if (_12460 != 0) {
        goto L1F; // [492] 511
    }
    if (0 == 0) {
        DeRef(_12463);
        _12463 = 0;
        goto L20; // [498] 506
    }
    _12463 = (_for_translator_21657 != 0);
L20: 
    if (_12463 == 0)
    {
        _12463 = NOVALUE;
        goto L21; // [507] 526
    }
    else{
        _12463 = NOVALUE;
    }
L1F: 

    /** platform.e:236				local_defines &= { "UNIX", "BSD", "NETBSD"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12441);
    ((intptr_t*)_2)[1] = _12441;
    RefDS(_12449);
    ((intptr_t*)_2)[2] = _12449;
    RefDS(_12464);
    ((intptr_t*)_2)[3] = _12464;
    _12465 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12465);
    DeRefDS(_12465);
    _12465 = NOVALUE;
    goto L15; // [523] 574
L21: 

    /** platform.e:237			elsif (IBSD and not for_translator) or (TBSD and for_translator) then*/
    if (0 == 0) {
        _12467 = 0;
        goto L22; // [530] 541
    }
    _12468 = (_for_translator_21657 == 0);
    _12467 = (_12468 != 0);
L22: 
    if (_12467 != 0) {
        goto L23; // [541] 560
    }
    if (0 == 0) {
        DeRef(_12470);
        _12470 = 0;
        goto L24; // [547] 555
    }
    _12470 = (_for_translator_21657 != 0);
L24: 
    if (_12470 == 0)
    {
        _12470 = NOVALUE;
        goto L25; // [556] 573
    }
    else{
        _12470 = NOVALUE;
    }
L23: 

    /** platform.e:238				local_defines &= {"UNIX", "BSD", "FREEBSD"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12441);
    ((intptr_t*)_2)[1] = _12441;
    RefDS(_12449);
    ((intptr_t*)_2)[2] = _12449;
    RefDS(_12471);
    ((intptr_t*)_2)[3] = _12471;
    _12472 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12472);
    DeRefDS(_12472);
    _12472 = NOVALUE;
L25: 
L15: 
L10: 

    /** platform.e:242		if (IX86 and not for_translator) or (TX86 and for_translator) then*/
    if (_43IX86_21601 == 0) {
        _12474 = 0;
        goto L26; // [579] 590
    }
    _12475 = (_for_translator_21657 == 0);
    _12474 = (_12475 != 0);
L26: 
    if (_12474 != 0) {
        goto L27; // [590] 609
    }
    if (_43TX86_21602 == 0) {
        DeRef(_12477);
        _12477 = 0;
        goto L28; // [596] 604
    }
    _12477 = (_for_translator_21657 != 0);
L28: 
    if (_12477 == 0)
    {
        _12477 = NOVALUE;
        goto L29; // [605] 624
    }
    else{
        _12477 = NOVALUE;
    }
L27: 

    /** platform.e:243			local_defines &= {"X86", "BITS32", "LONG32"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12376);
    ((intptr_t*)_2)[1] = _12376;
    RefDS(_12478);
    ((intptr_t*)_2)[2] = _12478;
    RefDS(_12479);
    ((intptr_t*)_2)[3] = _12479;
    _12480 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12480);
    DeRefDS(_12480);
    _12480 = NOVALUE;
    goto L2A; // [621] 777
L29: 

    /** platform.e:245		elsif (IX86_64 and not for_translator) or (TX86_64 and for_translator) then*/
    if (0 == 0) {
        _12482 = 0;
        goto L2B; // [628] 639
    }
    _12483 = (_for_translator_21657 == 0);
    _12482 = (_12483 != 0);
L2B: 
    if (_12482 != 0) {
        goto L2C; // [639] 658
    }
    if (0 == 0) {
        DeRef(_12485);
        _12485 = 0;
        goto L2D; // [645] 653
    }
    _12485 = (_for_translator_21657 != 0);
L2D: 
    if (_12485 == 0)
    {
        _12485 = NOVALUE;
        goto L2E; // [654] 729
    }
    else{
        _12485 = NOVALUE;
    }
L2C: 

    /** platform.e:246			local_defines &= {"X86_64", "BITS64"}*/
    RefDS(_12486);
    RefDS(_12378);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _12378;
    ((intptr_t *)_2)[2] = _12486;
    _12487 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12487);
    DeRefDS(_12487);
    _12487 = NOVALUE;

    /** platform.e:247			if (IWINDOWS and not for_translator) or (TWINDOWS and for_translator) then*/
    if (0 == 0) {
        _12489 = 0;
        goto L2F; // [672] 683
    }
    _12490 = (_for_translator_21657 == 0);
    _12489 = (_12490 != 0);
L2F: 
    if (_12489 != 0) {
        goto L30; // [683] 702
    }
    if (0 == 0) {
        DeRef(_12492);
        _12492 = 0;
        goto L31; // [689] 697
    }
    _12492 = (_for_translator_21657 != 0);
L31: 
    if (_12492 == 0)
    {
        _12492 = NOVALUE;
        goto L32; // [698] 715
    }
    else{
        _12492 = NOVALUE;
    }
L30: 

    /** platform.e:248				local_defines &= {"LONG32"}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12479);
    ((intptr_t*)_2)[1] = _12479;
    _12493 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12493);
    DeRefDS(_12493);
    _12493 = NOVALUE;
    goto L2A; // [712] 777
L32: 

    /** platform.e:250				local_defines &= {"LONG64"}*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12495);
    ((intptr_t*)_2)[1] = _12495;
    _12496 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12496);
    DeRefDS(_12496);
    _12496 = NOVALUE;
    goto L2A; // [726] 777
L2E: 

    /** platform.e:252		elsif (IARM and not for_translator) or (TARM and for_translator) then*/
    if (0 == 0) {
        _12498 = 0;
        goto L33; // [733] 744
    }
    _12499 = (_for_translator_21657 == 0);
    _12498 = (_12499 != 0);
L33: 
    if (_12498 != 0) {
        goto L34; // [744] 763
    }
    if (0 == 0) {
        DeRef(_12501);
        _12501 = 0;
        goto L35; // [750] 758
    }
    _12501 = (_for_translator_21657 != 0);
L35: 
    if (_12501 == 0)
    {
        _12501 = NOVALUE;
        goto L36; // [759] 776
    }
    else{
        _12501 = NOVALUE;
    }
L34: 

    /** platform.e:253			local_defines &= {"ARM", "BITS32", "LONG32"}*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12380);
    ((intptr_t*)_2)[1] = _12380;
    RefDS(_12478);
    ((intptr_t*)_2)[2] = _12478;
    RefDS(_12479);
    ((intptr_t*)_2)[3] = _12479;
    _12502 = MAKE_SEQ(_1);
    Concat((object_ptr)&_local_defines_21658, _local_defines_21658, _12502);
    DeRefDS(_12502);
    _12502 = NOVALUE;
L36: 
L2A: 

    /** platform.e:258		return { "_PLAT_START" } & local_defines & { "_PLAT_STOP" }*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12504);
    ((intptr_t*)_2)[1] = _12504;
    _12505 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_12506);
    ((intptr_t*)_2)[1] = _12506;
    _12507 = MAKE_SEQ(_1);
    {
        object concat_list[3];

        concat_list[0] = _12507;
        concat_list[1] = _local_defines_21658;
        concat_list[2] = _12505;
        Concat_N((object_ptr)&_12508, concat_list, 3);
    }
    DeRefDS(_12507);
    _12507 = NOVALUE;
    DeRefDS(_12505);
    _12505 = NOVALUE;
    DeRefDS(_local_defines_21658);
    DeRef(_12483);
    _12483 = NOVALUE;
    DeRef(_12490);
    _12490 = NOVALUE;
    DeRef(_12384);
    _12384 = NOVALUE;
    DeRef(_12454);
    _12454 = NOVALUE;
    DeRef(_12475);
    _12475 = NOVALUE;
    DeRef(_12446);
    _12446 = NOVALUE;
    DeRef(_12468);
    _12468 = NOVALUE;
    DeRef(_12438);
    _12438 = NOVALUE;
    DeRef(_12461);
    _12461 = NOVALUE;
    DeRef(_12499);
    _12499 = NOVALUE;
    return _12508;
    ;
}



// 0x0AF22598
