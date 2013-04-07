// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _75GetSourceName()
{
    object _real_name_67049 = NOVALUE;
    object _fh_67050 = NOVALUE;
    object _has_extension_67052 = NOVALUE;
    object _33402 = NOVALUE;
    object _33400 = NOVALUE;
    object _33399 = NOVALUE;
    object _33396 = NOVALUE;
    object _33395 = NOVALUE;
    object _33394 = NOVALUE;
    object _33393 = NOVALUE;
    object _33392 = NOVALUE;
    object _33391 = NOVALUE;
    object _33388 = NOVALUE;
    object _33387 = NOVALUE;
    object _33385 = NOVALUE;
    object _33384 = NOVALUE;
    object _33383 = NOVALUE;
    object _33382 = NOVALUE;
    object _33381 = NOVALUE;
    object _33380 = NOVALUE;
    object _33377 = NOVALUE;
    object _33376 = NOVALUE;
    object _33374 = NOVALUE;
    object _33373 = NOVALUE;
    object _33371 = NOVALUE;
    object _33370 = NOVALUE;
    object _33367 = NOVALUE;
    object _33366 = NOVALUE;
    object _33365 = NOVALUE;
    object _33363 = NOVALUE;
    object _33362 = NOVALUE;
    object _33361 = NOVALUE;
    object _33359 = NOVALUE;
    object _33358 = NOVALUE;
    object _33357 = NOVALUE;
    object _33356 = NOVALUE;
    object _0, _1, _2;
    

    /** main.e:48		boolean has_extension = FALSE*/
    _has_extension_67052 = _9FALSE_442;

    /** main.e:50		if length(src_name) = 0 and not repl then*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33356 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33356 = 1;
    }
    _33357 = (_33356 == 0);
    _33356 = NOVALUE;
    if (_33357 == 0) {
        goto L1; // [19] 45
    }
    _33359 = (0 == 0);
    if (_33359 == 0)
    {
        DeRef(_33359);
        _33359 = NOVALUE;
        goto L1; // [29] 45
    }
    else{
        DeRef(_33359);
        _33359 = NOVALUE;
    }

    /** main.e:51			show_banner()*/
    _51show_banner();

    /** main.e:52			return -2 -- No source file*/
    DeRef(_real_name_67049);
    DeRef(_33357);
    _33357 = NOVALUE;
    return -2;
    goto L2; // [42] 143
L1: 

    /** main.e:53		elsif length(src_name) = 0 and repl then*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33361 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33361 = 1;
    }
    _33362 = (_33361 == 0);
    _33361 = NOVALUE;
    if (_33362 == 0) {
        goto L3; // [56] 142
    }
    goto L3; // [63] 142

    /** main.e:54			known_files = append(known_files, "")*/
    RefDS(_21928);
    Append(&_36known_files_15405, _36known_files_15405, _21928);

    /** main.e:55			known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33365 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33365 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33366 = (object)*(((s1_ptr)_2)->base + _33365);
    _33367 = calc_hash(_33366, -5);
    _33366 = NOVALUE;
    Ref(_33367);
    Append(&_36known_files_hash_15406, _36known_files_hash_15406, _33367);
    DeRef(_33367);
    _33367 = NOVALUE;

    /** main.e:56			real_name = ""*/
    RefDS(_21928);
    DeRef(_real_name_67049);
    _real_name_67049 = _21928;

    /** main.e:57			finished_files &= 0*/
    Append(&_36finished_files_15407, _36finished_files_15407, 0);

    /** main.e:58			file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33370 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33370 = 1;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33370;
    _33371 = MAKE_SEQ(_1);
    _33370 = NOVALUE;
    RefDS(_33371);
    Append(&_36file_include_depend_15408, _36file_include_depend_15408, _33371);
    DeRefDS(_33371);
    _33371 = NOVALUE;

    /** main.e:59			return repl_file*/
    DeRefDS(_real_name_67049);
    DeRef(_33362);
    _33362 = NOVALUE;
    DeRef(_33357);
    _33357 = NOVALUE;
    return 5555;
L3: 
L2: 

    /** main.e:62		ifdef WINDOWS then*/

    /** main.e:66		for p = length(src_name) to 1 by -1 do*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33373 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33373 = 1;
    }
    {
        object _p_67088;
        _p_67088 = _33373;
L4: 
        if (_p_67088 < 1){
            goto L5; // [152] 216
        }

        /** main.e:67			if src_name[p] = '.' then*/
        _2 = (object)SEQ_PTR(_51src_name_49054);
        _33374 = (object)*(((s1_ptr)_2)->base + _p_67088);
        if (binary_op_a(NOTEQ, _33374, 46)){
            _33374 = NOVALUE;
            goto L6; // [167] 185
        }
        _33374 = NOVALUE;

        /** main.e:68			   has_extension = TRUE*/
        _has_extension_67052 = _9TRUE_444;

        /** main.e:69			   exit*/
        goto L5; // [180] 216
        goto L7; // [182] 209
L6: 

        /** main.e:70			elsif find(src_name[p], SLASH_CHARS) then*/
        _2 = (object)SEQ_PTR(_51src_name_49054);
        _33376 = (object)*(((s1_ptr)_2)->base + _p_67088);
        _33377 = find_from(_33376, _43SLASH_CHARS_21608, 1);
        _33376 = NOVALUE;
        if (_33377 == 0)
        {
            _33377 = NOVALUE;
            goto L8; // [200] 208
        }
        else{
            _33377 = NOVALUE;
        }

        /** main.e:71			   exit*/
        goto L5; // [205] 216
L8: 
L7: 

        /** main.e:73		end for*/
        _p_67088 = _p_67088 + -1;
        goto L4; // [211] 159
L5: 
        ;
    }

    /** main.e:75		if not has_extension then*/
    if (_has_extension_67052 != 0)
    goto L9; // [218] 323

    /** main.e:79			known_files = append(known_files, "")*/
    RefDS(_21928);
    Append(&_36known_files_15405, _36known_files_15405, _21928);

    /** main.e:82			for i = 1 to length( DEFAULT_EXTS ) do*/
    _33380 = 4;
    {
        object _i_67107;
        _i_67107 = 1;
LA: 
        if (_i_67107 > 4){
            goto LB; // [238] 303
        }

        /** main.e:83				known_files[$] = src_name & DEFAULT_EXTS[i]*/
        if (IS_SEQUENCE(_36known_files_15405)){
                _33381 = SEQ_PTR(_36known_files_15405)->length;
        }
        else {
            _33381 = 1;
        }
        _2 = (object)SEQ_PTR(_43DEFAULT_EXTS_21583);
        _33382 = (object)*(((s1_ptr)_2)->base + _i_67107);
        Concat((object_ptr)&_33383, _51src_name_49054, _33382);
        _33382 = NOVALUE;
        _2 = (object)SEQ_PTR(_36known_files_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36known_files_15405 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _33381);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33383;
        if( _1 != _33383 ){
            DeRef(_1);
        }
        _33383 = NOVALUE;

        /** main.e:84				real_name = e_path_find(known_files[$])*/
        if (IS_SEQUENCE(_36known_files_15405)){
                _33384 = SEQ_PTR(_36known_files_15405)->length;
        }
        else {
            _33384 = 1;
        }
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _33385 = (object)*(((s1_ptr)_2)->base + _33384);
        Ref(_33385);
        _0 = _real_name_67049;
        _real_name_67049 = _50e_path_find(_33385);
        DeRef(_0);
        _33385 = NOVALUE;

        /** main.e:85				if sequence(real_name) then*/
        _33387 = IS_SEQUENCE(_real_name_67049);
        if (_33387 == 0)
        {
            _33387 = NOVALUE;
            goto LC; // [288] 296
        }
        else{
            _33387 = NOVALUE;
        }

        /** main.e:86					exit*/
        goto LB; // [293] 303
LC: 

        /** main.e:88			end for*/
        _i_67107 = _i_67107 + 1;
        goto LA; // [298] 245
LB: 
        ;
    }

    /** main.e:90			if atom(real_name) then*/
    _33388 = IS_ATOM(_real_name_67049);
    if (_33388 == 0)
    {
        _33388 = NOVALUE;
        goto LD; // [310] 359
    }
    else{
        _33388 = NOVALUE;
    }

    /** main.e:91				return -1*/
    DeRef(_real_name_67049);
    DeRef(_33362);
    _33362 = NOVALUE;
    DeRef(_33357);
    _33357 = NOVALUE;
    return -1;
    goto LD; // [320] 359
L9: 

    /** main.e:94			known_files = append(known_files, src_name)*/
    RefDS(_51src_name_49054);
    Append(&_36known_files_15405, _36known_files_15405, _51src_name_49054);

    /** main.e:95			real_name = e_path_find(src_name)*/
    RefDS(_51src_name_49054);
    _0 = _real_name_67049;
    _real_name_67049 = _50e_path_find(_51src_name_49054);
    DeRef(_0);

    /** main.e:96			if atom(real_name) then*/
    _33391 = IS_ATOM(_real_name_67049);
    if (_33391 == 0)
    {
        _33391 = NOVALUE;
        goto LE; // [348] 358
    }
    else{
        _33391 = NOVALUE;
    }

    /** main.e:97				return -1*/
    DeRef(_real_name_67049);
    DeRef(_33362);
    _33362 = NOVALUE;
    DeRef(_33357);
    _33357 = NOVALUE;
    return -1;
LE: 
LD: 

    /** main.e:100		known_files[$] = canonical_path(real_name,,CORRECT)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33392 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33392 = 1;
    }
    Ref(_real_name_67049);
    _33393 = _16canonical_path(_real_name_67049, 0, 2);
    _2 = (object)SEQ_PTR(_36known_files_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36known_files_15405 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _33392);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _33393;
    if( _1 != _33393 ){
        DeRef(_1);
    }
    _33393 = NOVALUE;

    /** main.e:101		known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33394 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33394 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33395 = (object)*(((s1_ptr)_2)->base + _33394);
    _33396 = calc_hash(_33395, -5);
    _33395 = NOVALUE;
    Ref(_33396);
    Append(&_36known_files_hash_15406, _36known_files_hash_15406, _33396);
    DeRef(_33396);
    _33396 = NOVALUE;

    /** main.e:102		finished_files &= 0*/
    Append(&_36finished_files_15407, _36finished_files_15407, 0);

    /** main.e:103		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33399 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33399 = 1;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33399;
    _33400 = MAKE_SEQ(_1);
    _33399 = NOVALUE;
    RefDS(_33400);
    Append(&_36file_include_depend_15408, _36file_include_depend_15408, _33400);
    DeRefDS(_33400);
    _33400 = NOVALUE;

    /** main.e:105		if file_exists(real_name) then*/
    Ref(_real_name_67049);
    _33402 = _16file_exists(_real_name_67049);
    if (_33402 == 0) {
        DeRef(_33402);
        _33402 = NOVALUE;
        goto LF; // [438] 462
    }
    else {
        if (!IS_ATOM_INT(_33402) && DBL_PTR(_33402)->dbl == 0.0){
            DeRef(_33402);
            _33402 = NOVALUE;
            goto LF; // [438] 462
        }
        DeRef(_33402);
        _33402 = NOVALUE;
    }
    DeRef(_33402);
    _33402 = NOVALUE;

    /** main.e:106			real_name = maybe_preprocess(real_name)*/
    Ref(_real_name_67049);
    _0 = _real_name_67049;
    _real_name_67049 = _65maybe_preprocess(_real_name_67049);
    DeRef(_0);

    /** main.e:107			fh = open_locked(real_name)*/
    Ref(_real_name_67049);
    _fh_67050 = _36open_locked(_real_name_67049);
    if (!IS_ATOM_INT(_fh_67050)) {
        _1 = (object)(DBL_PTR(_fh_67050)->dbl);
        DeRefDS(_fh_67050);
        _fh_67050 = _1;
    }

    /** main.e:108			return fh*/
    DeRef(_real_name_67049);
    DeRef(_33362);
    _33362 = NOVALUE;
    DeRef(_33357);
    _33357 = NOVALUE;
    return _fh_67050;
LF: 

    /** main.e:111		return -1*/
    DeRef(_real_name_67049);
    DeRef(_33362);
    _33362 = NOVALUE;
    DeRef(_33357);
    _33357 = NOVALUE;
    return -1;
    ;
}


void _75main()
{
    object _argc_67176 = NOVALUE;
    object _argv_67177 = NOVALUE;
    object _33434 = NOVALUE;
    object _33433 = NOVALUE;
    object _33430 = NOVALUE;
    object _33428 = NOVALUE;
    object _33426 = NOVALUE;
    object _33425 = NOVALUE;
    object _33424 = NOVALUE;
    object _33423 = NOVALUE;
    object _33422 = NOVALUE;
    object _33421 = NOVALUE;
    object _33420 = NOVALUE;
    object _33419 = NOVALUE;
    object _33414 = NOVALUE;
    object _0, _1, _2;
    

    /** main.e:131		argv = command_line()*/
    DeRef(_argv_67177);
    _argv_67177 = Command_Line();

    /** main.e:133		if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }

    /** main.e:134			argv = extract_options(argv)*/
    RefDS(_argv_67177);
    _0 = _argv_67177;
    _argv_67177 = _2extract_options(_argv_67177);
    DeRefDS(_0);
L1: 

    /** main.e:137		argc = length(argv)*/
    if (IS_SEQUENCE(_argv_67177)){
            _argc_67176 = SEQ_PTR(_argv_67177)->length;
    }
    else {
        _argc_67176 = 1;
    }

    /** main.e:139		Argv = argv*/
    RefDS(_argv_67177);
    DeRef(_39Argv_16826);
    _39Argv_16826 = _argv_67177;

    /** main.e:140		Argc = argc*/
    _39Argc_16825 = _argc_67176;

    /** main.e:142		TempErrName = "ex.err"*/
    RefDS(_33413);
    DeRefi(_52TempErrName_48708);
    _52TempErrName_48708 = _33413;

    /** main.e:143		TempWarningName = STDERR*/
    DeRef(_39TempWarningName_16829);
    _39TempWarningName_16829 = 2;

    /** main.e:144		display_warnings = 1*/
    _52display_warnings_48709 = 1;

    /** main.e:146		InitGlobals()*/
    _42InitGlobals();

    /** main.e:148		if TRANSLATE or BIND or INTERPRET then*/
    if (_39TRANSLATE_16440 != 0) {
        _33414 = 1;
        goto L2; // [69] 79
    }
    _33414 = (_39BIND_16443 != 0);
L2: 
    if (_33414 != 0) {
        goto L3; // [79] 90
    }
    if (_39INTERPRET_16437 == 0)
    {
        goto L4; // [86] 96
    }
    else{
    }
L3: 

    /** main.e:149			InitBackEnd(0)*/
    _2InitBackEnd(0);
L4: 

    /** main.e:152		src_file = GetSourceName()*/
    _0 = _75GetSourceName();
    _39src_file_16936 = _0;
    if (!IS_ATOM_INT(_39src_file_16936)) {
        _1 = (object)(DBL_PTR(_39src_file_16936)->dbl);
        DeRefDS(_39src_file_16936);
        _39src_file_16936 = _1;
    }

    /** main.e:154		if src_file = -1 then*/
    if (_39src_file_16936 != -1)
    goto L5; // [107] 181

    /** main.e:156			screen_output(STDERR, GetMsgText(51, 0, {known_files[$]}))*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33419 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33419 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33420 = (object)*(((s1_ptr)_2)->base + _33419);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_33420);
    ((intptr_t*)_2)[1] = _33420;
    _33421 = MAKE_SEQ(_1);
    _33420 = NOVALUE;
    _33422 = _44GetMsgText(51, 0, _33421);
    _33421 = NOVALUE;
    _52screen_output(2, _33422);
    _33422 = NOVALUE;

    /** main.e:157			if not batch_job and not test_only then*/
    _33423 = (_39batch_job_16828 == 0);
    if (_33423 == 0) {
        goto L6; // [145] 173
    }
    _33425 = (_39test_only_16827 == 0);
    if (_33425 == 0)
    {
        DeRef(_33425);
        _33425 = NOVALUE;
        goto L6; // [155] 173
    }
    else{
        DeRef(_33425);
        _33425 = NOVALUE;
    }

    /** main.e:158				maybe_any_key(GetMsgText(277,0), STDERR)*/
    RefDS(_21928);
    _33426 = _44GetMsgText(277, 0, _21928);
    _29maybe_any_key(_33426, 2);
    _33426 = NOVALUE;
L6: 

    /** main.e:160			Cleanup(1)*/
    _52Cleanup(1);
    goto L7; // [178] 226
L5: 

    /** main.e:162		elsif src_file >= 0 then*/
    if (_39src_file_16936 < 0)
    goto L8; // [185] 225

    /** main.e:163			main_path = known_files[$]*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33428 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33428 = 1;
    }
    DeRef(_39main_path_16935);
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _39main_path_16935 = (object)*(((s1_ptr)_2)->base + _33428);
    Ref(_39main_path_16935);

    /** main.e:164			if length(main_path) = 0 then*/
    if (IS_SEQUENCE(_39main_path_16935)){
            _33430 = SEQ_PTR(_39main_path_16935)->length;
    }
    else {
        _33430 = 1;
    }
    if (_33430 != 0)
    goto L9; // [209] 224

    /** main.e:165				main_path = '.' & SLASH*/
    Concat((object_ptr)&_39main_path_16935, 46, 47);
L9: 
L8: 
L7: 

    /** main.e:171		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LA; // [230] 239
    }
    else{
    }

    /** main.e:172			InitBackEnd(1)*/
    _2InitBackEnd(1);
LA: 

    /** main.e:175		CheckPlatform()*/
    _2CheckPlatform();

    /** main.e:177		InitSymTab()*/
    _56InitSymTab();

    /** main.e:178		InitEmit()*/
    _49InitEmit();

    /** main.e:179		InitLex()*/
    _63InitLex();

    /** main.e:180		InitParser()*/
    _42InitParser();

    /** main.e:184		eu_namespace()*/
    _63eu_namespace();

    /** main.e:186		ifdef TRANSLATOR then*/

    /** main.e:197		main_file()*/
    _63main_file();

    /** main.e:199		check_coverage()*/
    _53check_coverage();

    /** main.e:201		parser()*/
    _42parser();

    /** main.e:203		init_coverage()*/
    _53init_coverage();

    /** main.e:206		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto LB; // [285] 296
    }
    else{
    }

    /** main.e:207			BackEnd(0) -- translate IL to C*/
    _2BackEnd(0);
    goto LC; // [293] 383
LB: 

    /** main.e:209		elsif BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto LD; // [300] 310
    }
    else{
    }

    /** main.e:210			OutputIL()*/
    _2OutputIL();
    goto LC; // [307] 383
LD: 

    /** main.e:212		elsif INTERPRET and not test_only then*/
    if (_39INTERPRET_16437 == 0) {
        goto LE; // [314] 382
    }
    _33434 = (_39test_only_16827 == 0);
    if (_33434 == 0)
    {
        DeRef(_33434);
        _33434 = NOVALUE;
        goto LE; // [324] 382
    }
    else{
        DeRef(_33434);
        _33434 = NOVALUE;
    }

    /** main.e:213			ifdef not STDDEBUG then*/

    /** main.e:214				BackEnd(0) -- execute IL using Euphoria-coded back-end*/
    _2BackEnd(0);

    /** main.e:216			while repl do*/
LE: 
LC: 

    /** main.e:225		Cleanup(0) -- does warnings*/
    _52Cleanup(0);

    /** main.e:226	end procedure*/
    DeRef(_argv_67177);
    DeRef(_33423);
    _33423 = NOVALUE;
    return;
    ;
}



// 0xAFD970AC
