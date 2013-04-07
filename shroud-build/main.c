// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _75GetSourceName()
{
    object _real_name_67054 = NOVALUE;
    object _fh_67055 = NOVALUE;
    object _has_extension_67057 = NOVALUE;
    object _33404 = NOVALUE;
    object _33402 = NOVALUE;
    object _33401 = NOVALUE;
    object _33398 = NOVALUE;
    object _33397 = NOVALUE;
    object _33396 = NOVALUE;
    object _33395 = NOVALUE;
    object _33394 = NOVALUE;
    object _33393 = NOVALUE;
    object _33390 = NOVALUE;
    object _33389 = NOVALUE;
    object _33387 = NOVALUE;
    object _33386 = NOVALUE;
    object _33385 = NOVALUE;
    object _33384 = NOVALUE;
    object _33383 = NOVALUE;
    object _33382 = NOVALUE;
    object _33379 = NOVALUE;
    object _33378 = NOVALUE;
    object _33376 = NOVALUE;
    object _33375 = NOVALUE;
    object _33373 = NOVALUE;
    object _33372 = NOVALUE;
    object _33369 = NOVALUE;
    object _33368 = NOVALUE;
    object _33367 = NOVALUE;
    object _33365 = NOVALUE;
    object _33364 = NOVALUE;
    object _33363 = NOVALUE;
    object _33361 = NOVALUE;
    object _33360 = NOVALUE;
    object _33359 = NOVALUE;
    object _33358 = NOVALUE;
    object _0, _1, _2;
    

    /** main.e:48		boolean has_extension = FALSE*/
    _has_extension_67057 = _9FALSE_442;

    /** main.e:50		if length(src_name) = 0 and not repl then*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33358 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33358 = 1;
    }
    _33359 = (_33358 == 0);
    _33358 = NOVALUE;
    if (_33359 == 0) {
        goto L1; // [19] 45
    }
    _33361 = (0 == 0);
    if (_33361 == 0)
    {
        DeRef(_33361);
        _33361 = NOVALUE;
        goto L1; // [29] 45
    }
    else{
        DeRef(_33361);
        _33361 = NOVALUE;
    }

    /** main.e:51			show_banner()*/
    _51show_banner();

    /** main.e:52			return -2 -- No source file*/
    DeRef(_real_name_67054);
    DeRef(_33359);
    _33359 = NOVALUE;
    return -2;
    goto L2; // [42] 143
L1: 

    /** main.e:53		elsif length(src_name) = 0 and repl then*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33363 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33363 = 1;
    }
    _33364 = (_33363 == 0);
    _33363 = NOVALUE;
    if (_33364 == 0) {
        goto L3; // [56] 142
    }
    goto L3; // [63] 142

    /** main.e:54			known_files = append(known_files, "")*/
    RefDS(_21928);
    Append(&_36known_files_15405, _36known_files_15405, _21928);

    /** main.e:55			known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33367 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33367 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33368 = (object)*(((s1_ptr)_2)->base + _33367);
    _33369 = calc_hash(_33368, -5);
    _33368 = NOVALUE;
    Ref(_33369);
    Append(&_36known_files_hash_15406, _36known_files_hash_15406, _33369);
    DeRef(_33369);
    _33369 = NOVALUE;

    /** main.e:56			real_name = ""*/
    RefDS(_21928);
    DeRef(_real_name_67054);
    _real_name_67054 = _21928;

    /** main.e:57			finished_files &= 0*/
    Append(&_36finished_files_15407, _36finished_files_15407, 0);

    /** main.e:58			file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33372 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33372 = 1;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33372;
    _33373 = MAKE_SEQ(_1);
    _33372 = NOVALUE;
    RefDS(_33373);
    Append(&_36file_include_depend_15408, _36file_include_depend_15408, _33373);
    DeRefDS(_33373);
    _33373 = NOVALUE;

    /** main.e:59			return repl_file*/
    DeRefDS(_real_name_67054);
    DeRef(_33364);
    _33364 = NOVALUE;
    DeRef(_33359);
    _33359 = NOVALUE;
    return 5555;
L3: 
L2: 

    /** main.e:62		ifdef WINDOWS then*/

    /** main.e:66		for p = length(src_name) to 1 by -1 do*/
    if (IS_SEQUENCE(_51src_name_49054)){
            _33375 = SEQ_PTR(_51src_name_49054)->length;
    }
    else {
        _33375 = 1;
    }
    {
        object _p_67093;
        _p_67093 = _33375;
L4: 
        if (_p_67093 < 1){
            goto L5; // [152] 216
        }

        /** main.e:67			if src_name[p] = '.' then*/
        _2 = (object)SEQ_PTR(_51src_name_49054);
        _33376 = (object)*(((s1_ptr)_2)->base + _p_67093);
        if (binary_op_a(NOTEQ, _33376, 46)){
            _33376 = NOVALUE;
            goto L6; // [167] 185
        }
        _33376 = NOVALUE;

        /** main.e:68			   has_extension = TRUE*/
        _has_extension_67057 = _9TRUE_444;

        /** main.e:69			   exit*/
        goto L5; // [180] 216
        goto L7; // [182] 209
L6: 

        /** main.e:70			elsif find(src_name[p], SLASH_CHARS) then*/
        _2 = (object)SEQ_PTR(_51src_name_49054);
        _33378 = (object)*(((s1_ptr)_2)->base + _p_67093);
        _33379 = find_from(_33378, _43SLASH_CHARS_21608, 1);
        _33378 = NOVALUE;
        if (_33379 == 0)
        {
            _33379 = NOVALUE;
            goto L8; // [200] 208
        }
        else{
            _33379 = NOVALUE;
        }

        /** main.e:71			   exit*/
        goto L5; // [205] 216
L8: 
L7: 

        /** main.e:73		end for*/
        _p_67093 = _p_67093 + -1;
        goto L4; // [211] 159
L5: 
        ;
    }

    /** main.e:75		if not has_extension then*/
    if (_has_extension_67057 != 0)
    goto L9; // [218] 323

    /** main.e:79			known_files = append(known_files, "")*/
    RefDS(_21928);
    Append(&_36known_files_15405, _36known_files_15405, _21928);

    /** main.e:82			for i = 1 to length( DEFAULT_EXTS ) do*/
    _33382 = 4;
    {
        object _i_67112;
        _i_67112 = 1;
LA: 
        if (_i_67112 > 4){
            goto LB; // [238] 303
        }

        /** main.e:83				known_files[$] = src_name & DEFAULT_EXTS[i]*/
        if (IS_SEQUENCE(_36known_files_15405)){
                _33383 = SEQ_PTR(_36known_files_15405)->length;
        }
        else {
            _33383 = 1;
        }
        _2 = (object)SEQ_PTR(_43DEFAULT_EXTS_21583);
        _33384 = (object)*(((s1_ptr)_2)->base + _i_67112);
        Concat((object_ptr)&_33385, _51src_name_49054, _33384);
        _33384 = NOVALUE;
        _2 = (object)SEQ_PTR(_36known_files_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36known_files_15405 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _33383);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33385;
        if( _1 != _33385 ){
            DeRef(_1);
        }
        _33385 = NOVALUE;

        /** main.e:84				real_name = e_path_find(known_files[$])*/
        if (IS_SEQUENCE(_36known_files_15405)){
                _33386 = SEQ_PTR(_36known_files_15405)->length;
        }
        else {
            _33386 = 1;
        }
        _2 = (object)SEQ_PTR(_36known_files_15405);
        _33387 = (object)*(((s1_ptr)_2)->base + _33386);
        Ref(_33387);
        _0 = _real_name_67054;
        _real_name_67054 = _50e_path_find(_33387);
        DeRef(_0);
        _33387 = NOVALUE;

        /** main.e:85				if sequence(real_name) then*/
        _33389 = IS_SEQUENCE(_real_name_67054);
        if (_33389 == 0)
        {
            _33389 = NOVALUE;
            goto LC; // [288] 296
        }
        else{
            _33389 = NOVALUE;
        }

        /** main.e:86					exit*/
        goto LB; // [293] 303
LC: 

        /** main.e:88			end for*/
        _i_67112 = _i_67112 + 1;
        goto LA; // [298] 245
LB: 
        ;
    }

    /** main.e:90			if atom(real_name) then*/
    _33390 = IS_ATOM(_real_name_67054);
    if (_33390 == 0)
    {
        _33390 = NOVALUE;
        goto LD; // [310] 359
    }
    else{
        _33390 = NOVALUE;
    }

    /** main.e:91				return -1*/
    DeRef(_real_name_67054);
    DeRef(_33364);
    _33364 = NOVALUE;
    DeRef(_33359);
    _33359 = NOVALUE;
    return -1;
    goto LD; // [320] 359
L9: 

    /** main.e:94			known_files = append(known_files, src_name)*/
    RefDS(_51src_name_49054);
    Append(&_36known_files_15405, _36known_files_15405, _51src_name_49054);

    /** main.e:95			real_name = e_path_find(src_name)*/
    RefDS(_51src_name_49054);
    _0 = _real_name_67054;
    _real_name_67054 = _50e_path_find(_51src_name_49054);
    DeRef(_0);

    /** main.e:96			if atom(real_name) then*/
    _33393 = IS_ATOM(_real_name_67054);
    if (_33393 == 0)
    {
        _33393 = NOVALUE;
        goto LE; // [348] 358
    }
    else{
        _33393 = NOVALUE;
    }

    /** main.e:97				return -1*/
    DeRef(_real_name_67054);
    DeRef(_33364);
    _33364 = NOVALUE;
    DeRef(_33359);
    _33359 = NOVALUE;
    return -1;
LE: 
LD: 

    /** main.e:100		known_files[$] = canonical_path(real_name,,CORRECT)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33394 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33394 = 1;
    }
    Ref(_real_name_67054);
    _33395 = _16canonical_path(_real_name_67054, 0, 2);
    _2 = (object)SEQ_PTR(_36known_files_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36known_files_15405 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _33394);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _33395;
    if( _1 != _33395 ){
        DeRef(_1);
    }
    _33395 = NOVALUE;

    /** main.e:101		known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33396 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33396 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33397 = (object)*(((s1_ptr)_2)->base + _33396);
    _33398 = calc_hash(_33397, -5);
    _33397 = NOVALUE;
    Ref(_33398);
    Append(&_36known_files_hash_15406, _36known_files_hash_15406, _33398);
    DeRef(_33398);
    _33398 = NOVALUE;

    /** main.e:102		finished_files &= 0*/
    Append(&_36finished_files_15407, _36finished_files_15407, 0);

    /** main.e:103		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _33401 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33401 = 1;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33401;
    _33402 = MAKE_SEQ(_1);
    _33401 = NOVALUE;
    RefDS(_33402);
    Append(&_36file_include_depend_15408, _36file_include_depend_15408, _33402);
    DeRefDS(_33402);
    _33402 = NOVALUE;

    /** main.e:105		if file_exists(real_name) then*/
    Ref(_real_name_67054);
    _33404 = _16file_exists(_real_name_67054);
    if (_33404 == 0) {
        DeRef(_33404);
        _33404 = NOVALUE;
        goto LF; // [438] 462
    }
    else {
        if (!IS_ATOM_INT(_33404) && DBL_PTR(_33404)->dbl == 0.0){
            DeRef(_33404);
            _33404 = NOVALUE;
            goto LF; // [438] 462
        }
        DeRef(_33404);
        _33404 = NOVALUE;
    }
    DeRef(_33404);
    _33404 = NOVALUE;

    /** main.e:106			real_name = maybe_preprocess(real_name)*/
    Ref(_real_name_67054);
    _0 = _real_name_67054;
    _real_name_67054 = _65maybe_preprocess(_real_name_67054);
    DeRef(_0);

    /** main.e:107			fh = open_locked(real_name)*/
    Ref(_real_name_67054);
    _fh_67055 = _36open_locked(_real_name_67054);
    if (!IS_ATOM_INT(_fh_67055)) {
        _1 = (object)(DBL_PTR(_fh_67055)->dbl);
        DeRefDS(_fh_67055);
        _fh_67055 = _1;
    }

    /** main.e:108			return fh*/
    DeRef(_real_name_67054);
    DeRef(_33364);
    _33364 = NOVALUE;
    DeRef(_33359);
    _33359 = NOVALUE;
    return _fh_67055;
LF: 

    /** main.e:111		return -1*/
    DeRef(_real_name_67054);
    DeRef(_33364);
    _33364 = NOVALUE;
    DeRef(_33359);
    _33359 = NOVALUE;
    return -1;
    ;
}


void _75main()
{
    object _argc_67181 = NOVALUE;
    object _argv_67182 = NOVALUE;
    object _33436 = NOVALUE;
    object _33435 = NOVALUE;
    object _33432 = NOVALUE;
    object _33430 = NOVALUE;
    object _33428 = NOVALUE;
    object _33427 = NOVALUE;
    object _33426 = NOVALUE;
    object _33425 = NOVALUE;
    object _33424 = NOVALUE;
    object _33423 = NOVALUE;
    object _33422 = NOVALUE;
    object _33421 = NOVALUE;
    object _33416 = NOVALUE;
    object _0, _1, _2;
    

    /** main.e:131		argv = command_line()*/
    DeRef(_argv_67182);
    _argv_67182 = Command_Line();

    /** main.e:133		if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }

    /** main.e:134			argv = extract_options(argv)*/
    RefDS(_argv_67182);
    _0 = _argv_67182;
    _argv_67182 = _2extract_options(_argv_67182);
    DeRefDS(_0);
L1: 

    /** main.e:137		argc = length(argv)*/
    if (IS_SEQUENCE(_argv_67182)){
            _argc_67181 = SEQ_PTR(_argv_67182)->length;
    }
    else {
        _argc_67181 = 1;
    }

    /** main.e:139		Argv = argv*/
    RefDS(_argv_67182);
    DeRef(_39Argv_16826);
    _39Argv_16826 = _argv_67182;

    /** main.e:140		Argc = argc*/
    _39Argc_16825 = _argc_67181;

    /** main.e:142		TempErrName = "ex.err"*/
    RefDS(_33415);
    DeRefi(_52TempErrName_48708);
    _52TempErrName_48708 = _33415;

    /** main.e:143		TempWarningName = STDERR*/
    DeRef(_39TempWarningName_16829);
    _39TempWarningName_16829 = 2;

    /** main.e:144		display_warnings = 1*/
    _52display_warnings_48709 = 1;

    /** main.e:146		InitGlobals()*/
    _42InitGlobals();

    /** main.e:148		if TRANSLATE or BIND or INTERPRET then*/
    if (_39TRANSLATE_16440 != 0) {
        _33416 = 1;
        goto L2; // [69] 79
    }
    _33416 = (_39BIND_16443 != 0);
L2: 
    if (_33416 != 0) {
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
            _33421 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33421 = 1;
    }
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _33422 = (object)*(((s1_ptr)_2)->base + _33421);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_33422);
    ((intptr_t*)_2)[1] = _33422;
    _33423 = MAKE_SEQ(_1);
    _33422 = NOVALUE;
    _33424 = _44GetMsgText(51, 0, _33423);
    _33423 = NOVALUE;
    _52screen_output(2, _33424);
    _33424 = NOVALUE;

    /** main.e:157			if not batch_job and not test_only then*/
    _33425 = (_39batch_job_16828 == 0);
    if (_33425 == 0) {
        goto L6; // [145] 173
    }
    _33427 = (_39test_only_16827 == 0);
    if (_33427 == 0)
    {
        DeRef(_33427);
        _33427 = NOVALUE;
        goto L6; // [155] 173
    }
    else{
        DeRef(_33427);
        _33427 = NOVALUE;
    }

    /** main.e:158				maybe_any_key(GetMsgText(277,0), STDERR)*/
    RefDS(_21928);
    _33428 = _44GetMsgText(277, 0, _21928);
    _29maybe_any_key(_33428, 2);
    _33428 = NOVALUE;
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
            _33430 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _33430 = 1;
    }
    DeRef(_39main_path_16935);
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _39main_path_16935 = (object)*(((s1_ptr)_2)->base + _33430);
    Ref(_39main_path_16935);

    /** main.e:164			if length(main_path) = 0 then*/
    if (IS_SEQUENCE(_39main_path_16935)){
            _33432 = SEQ_PTR(_39main_path_16935)->length;
    }
    else {
        _33432 = 1;
    }
    if (_33432 != 0)
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
    _33436 = (_39test_only_16827 == 0);
    if (_33436 == 0)
    {
        DeRef(_33436);
        _33436 = NOVALUE;
        goto LE; // [324] 382
    }
    else{
        DeRef(_33436);
        _33436 = NOVALUE;
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
    DeRef(_argv_67182);
    DeRef(_33425);
    _33425 = NOVALUE;
    return;
    ;
}



// 0x99FC7E3E
