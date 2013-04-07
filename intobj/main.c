// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _74GetSourceName()
{
    object _real_name_66380 = NOVALUE;
    object _fh_66381 = NOVALUE;
    object _has_extension_66383 = NOVALUE;
// skipping _33131  name type: 0
// skipping _33130  name type: 0
    object _33129 = NOVALUE; // 66486 33129
// skipping _33128  name type: 0
    object _33127 = NOVALUE; // 66482 33127
    object _33126 = NOVALUE; // 66481 33126
// skipping _33125  name type: 0
// skipping _33124  name type: 0
    object _33123 = NOVALUE; // 66474 33123
    object _33122 = NOVALUE; // 66473 33122
    object _33121 = NOVALUE; // 66472 33121
    object _33120 = NOVALUE; // 66469 33120
    object _33119 = NOVALUE; // 66466 33119
    object _33118 = NOVALUE; // 66464 33118
// skipping _33117  name type: 0
// skipping _33116  name type: 0
    object _33115 = NOVALUE; // 66454 33115
    object _33114 = NOVALUE; // 66452 33114
// skipping _33113  name type: 0
    object _33112 = NOVALUE; // 66449 33112
    object _33111 = NOVALUE; // 66448 33111
    object _33110 = NOVALUE; // 66445 33110
    object _33109 = NOVALUE; // 66444 33109
    object _33108 = NOVALUE; // 66441 33108
    object _33107 = NOVALUE; // 66439 33107
// skipping _33106  name type: 0
// skipping _33105  name type: 0
    object _33104 = NOVALUE; // 66430 33104
    object _33103 = NOVALUE; // 66428 33103
// skipping _33102  name type: 0
    object _33101 = NOVALUE; // 66423 33101
    object _33100 = NOVALUE; // 66420 33100
// skipping _33099  name type: 0
    object _33098 = NOVALUE; // 66414 33098
    object _33097 = NOVALUE; // 66413 33097
// skipping _33096  name type: 0
// skipping _33095  name type: 0
    object _33094 = NOVALUE; // 66406 33094
    object _33093 = NOVALUE; // 66405 33093
    object _33092 = NOVALUE; // 66404 33092
// skipping _33091  name type: 0
    object _33090 = NOVALUE; // 66397 33090
    object _33089 = NOVALUE; // 66396 33089
    object _33088 = NOVALUE; // 66395 33088
    object _33087 = NOVALUE; // 66391 33087
    object _33086 = NOVALUE; // 66389 33086
    object _33085 = NOVALUE; // 66388 33085
    object _33084 = NOVALUE; // 66387 33084
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetSourceName pc: 1 op: STARTLINE (58)

    /** main.e:48		boolean has_extension = FALSE*/
    // SubProg GetSourceName pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 5 op: ASSIGN (18)
    _has_extension_66383 = _6FALSE_363;
    // SubProg GetSourceName pc: 8 op: STARTLINE (58)

    /** main.e:50		if length(src_name) = 0 and not repl then*/
    // SubProg GetSourceName pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_47src_name_49127)){
            _33084 = SEQ_PTR(_47src_name_49127)->length;
    }
    else {
        _33084 = 1;
    }
    // SubProg GetSourceName pc: 15 op: EQUALS (3)
    _33085 = (_33084 == 0);
    _33084 = NOVALUE;
    // SubProg GetSourceName pc: 19 op: SC1_AND_IF (146)
    if (_33085 == 0) {
        goto L1; // [19] 45
    }
    // SubProg GetSourceName pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 25 op: NOT (7)
    _33087 = (0 == 0);
    // SubProg GetSourceName pc: 28 op: NOP1 (159)
    // SubProg GetSourceName pc: 29 op: IF (20)
    if (_33087 == 0)
    {
        DeRef(_33087);
        _33087 = NOVALUE;
        goto L1; // [29] 45
    }
    else{
        DeRef(_33087);
        _33087 = NOVALUE;
    }
    // SubProg GetSourceName pc: 32 op: STARTLINE (58)

    /** main.e:51			show_banner()*/
    // SubProg GetSourceName pc: 34 op: PROC (27)
    _47show_banner();
    // SubProg GetSourceName pc: 36 op: STARTLINE (58)

    /** main.e:52			return -2 -- No source file*/
    // SubProg GetSourceName pc: 38 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRef(_real_name_66380);

// block var fh_66381

// block var has_extension_66383
    DeRef(_33085);
    _33085 = NOVALUE;
    return -2;
    // SubProg GetSourceName pc: 42 op: ELSE (23)
    goto L2; // [42] 143
    // SubProg GetSourceName pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 66378 op: 159
    // SubProg GetSourceName pc: 45 op: STARTLINE (58)

    /** main.e:53		elsif length(src_name) = 0 and repl then*/
    // SubProg GetSourceName pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_47src_name_49127)){
            _33088 = SEQ_PTR(_47src_name_49127)->length;
    }
    else {
        _33088 = 1;
    }
    // SubProg GetSourceName pc: 52 op: EQUALS (3)
    _33089 = (_33088 == 0);
    _33088 = NOVALUE;
    // SubProg GetSourceName pc: 56 op: SC1_AND_IF (146)
    if (_33089 == 0) {
        goto L3; // [56] 142
    }
    // SubProg GetSourceName pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 62 op: NOP1 (159)
    // SubProg GetSourceName pc: 63 op: IF (20)
    goto L3; // [63] 142
    // SubProg GetSourceName pc: 66 op: STARTLINE (58)

    /** main.e:54			known_files = append(known_files, "")*/
    // SubProg GetSourceName pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 70 op: APPEND (35)
    RefDS(_21958);
    Append(&_7known_files_11390, _7known_files_11390, _21958);
    // SubProg GetSourceName pc: 74 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 76 op: STARTLINE (58)

    /** main.e:55			known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    // SubProg GetSourceName pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 82 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33092 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33092 = 1;
    }
    // SubProg GetSourceName pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _33093 = (object)*(((s1_ptr)_2)->base + _33092);
    // SubProg GetSourceName pc: 89 op: HASH (194)
    _33094 = calc_hash(_33093, -5);
    _33093 = NOVALUE;
    // SubProg GetSourceName pc: 93 op: CONCAT (15)
    Ref(_33094);
    Append(&_7known_files_hash_11391, _7known_files_hash_11391, _33094);
    DeRef(_33094);
    _33094 = NOVALUE;
    // SubProg GetSourceName pc: 97 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 99 op: STARTLINE (58)

    /** main.e:56			real_name = ""*/
    // SubProg GetSourceName pc: 101 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_real_name_66380);
    _real_name_66380 = _21958;
    // SubProg GetSourceName pc: 104 op: STARTLINE (58)

    /** main.e:57			finished_files &= 0*/
    // SubProg GetSourceName pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 108 op: CONCAT (15)
    Append(&_7finished_files_11392, _7finished_files_11392, 0);
    // SubProg GetSourceName pc: 112 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 114 op: STARTLINE (58)

    /** main.e:58			file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg GetSourceName pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 120 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33097 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33097 = 1;
    }
    // SubProg GetSourceName pc: 123 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33097;
    _33098 = MAKE_SEQ(_1);
    _33097 = NOVALUE;
    // SubProg GetSourceName pc: 127 op: APPEND (35)
    RefDS(_33098);
    Append(&_7file_include_depend_11393, _7file_include_depend_11393, _33098);
    DeRefDS(_33098);
    _33098 = NOVALUE;
    // SubProg GetSourceName pc: 131 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 133 op: STARTLINE (58)

    /** main.e:59			return repl_file*/
    // SubProg GetSourceName pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 137 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRefDS(_real_name_66380);

// block var fh_66381

// block var has_extension_66383
    DeRef(_33089);
    _33089 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    return 5555;
    // SubProg GetSourceName pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 66378 op: 159
    // SubProg GetSourceName pc: 142 op: NOP1 (159)
L2: // addr: 143 pc: 142 sub: 66378 op: 159
    // SubProg GetSourceName pc: 143 op: STARTLINE (58)

    /** main.e:62		ifdef WINDOWS then*/
    // SubProg GetSourceName pc: 145 op: STARTLINE (58)

    /** main.e:66		for p = length(src_name) to 1 by -1 do*/
    // SubProg GetSourceName pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 149 op: LENGTH (42)
    if (IS_SEQUENCE(_47src_name_49127)){
            _33100 = SEQ_PTR(_47src_name_49127)->length;
    }
    else {
        _33100 = 1;
    }
    // SubProg GetSourceName pc: 152 op: FOR_I (125)
    {
        object _p_66418;
        _p_66418 = _33100;
L4: // addr: 159 pc: 152 sub: 66378 op: 125
        if (_p_66418 < 1){
            goto L5; // [152] 216
        }
        // SubProg GetSourceName pc: 159 op: STARTLINE (58)

        /** main.e:67			if src_name[p] = '.' then*/
        // SubProg GetSourceName pc: 161 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 163 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_47src_name_49127);
        _33101 = (object)*(((s1_ptr)_2)->base + _p_66418);
        // SubProg GetSourceName pc: 167 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _33101, 46)){
            _33101 = NOVALUE;
            goto L6; // [167] 185
        }
        _33101 = NOVALUE;
        // SubProg GetSourceName pc: 171 op: STARTLINE (58)

        /** main.e:68			   has_extension = TRUE*/
        // SubProg GetSourceName pc: 173 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 175 op: ASSIGN (18)
        _has_extension_66383 = _6TRUE_365;
        // SubProg GetSourceName pc: 178 op: STARTLINE (58)

        /** main.e:69			   exit*/
        // SubProg GetSourceName pc: 180 op: EXIT (61)
        goto L5; // [180] 216
        // SubProg GetSourceName pc: 182 op: ELSE (23)
        goto L7; // [182] 209
        // SubProg GetSourceName pc: 184 op: NOP1 (159)
L6: // addr: 185 pc: 184 sub: 66378 op: 159
        // SubProg GetSourceName pc: 185 op: STARTLINE (58)

        /** main.e:70			elsif find(src_name[p], SLASH_CHARS) then*/
        // SubProg GetSourceName pc: 187 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 189 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_47src_name_49127);
        _33103 = (object)*(((s1_ptr)_2)->base + _p_66418);
        // SubProg GetSourceName pc: 193 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 195 op: FIND_FROM (176)
        _33104 = find_from(_33103, _39SLASH_CHARS_20003, 1);
        _33103 = NOVALUE;
        // SubProg GetSourceName pc: 200 op: IF (20)
        if (_33104 == 0)
        {
            _33104 = NOVALUE;
            goto L8; // [200] 208
        }
        else{
            _33104 = NOVALUE;
        }
        // SubProg GetSourceName pc: 203 op: STARTLINE (58)

        /** main.e:71			   exit*/
        // SubProg GetSourceName pc: 205 op: EXIT (61)
        goto L5; // [205] 216
        // SubProg GetSourceName pc: 207 op: NOP1 (159)
L8: // addr: 208 pc: 207 sub: 66378 op: 159
        // SubProg GetSourceName pc: 208 op: NOP1 (159)
L7: // addr: 209 pc: 208 sub: 66378 op: 159
        // SubProg GetSourceName pc: 209 op: STARTLINE (58)

        /** main.e:73		end for*/
        // SubProg GetSourceName pc: 211 op: ENDFOR_GENERAL (39)
        _p_66418 = _p_66418 + -1;
        goto L4; // [211] 159
L5: // addr: 216 pc: 211 sub: 66378 op: 39
        ;
    }
    // SubProg GetSourceName pc: 216 op: STARTLINE (58)

    /** main.e:75		if not has_extension then*/
    // SubProg GetSourceName pc: 218 op: NOT_IFW (108)
    if (_has_extension_66383 != 0)
    goto L9; // [218] 323
    // SubProg GetSourceName pc: 221 op: STARTLINE (58)

    /** main.e:79			known_files = append(known_files, "")*/
    // SubProg GetSourceName pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 225 op: APPEND (35)
    RefDS(_21958);
    Append(&_7known_files_11390, _7known_files_11390, _21958);
    // SubProg GetSourceName pc: 229 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 231 op: STARTLINE (58)

    /** main.e:82			for i = 1 to length( DEFAULT_EXTS ) do*/
    // SubProg GetSourceName pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 235 op: LENGTH (42)
    // Known sequence length:
    _33107 = 4;
    // SubProg GetSourceName pc: 238 op: FOR_I (125)
    {
        object _i_66437;
        _i_66437 = 1;
LA: // addr: 245 pc: 238 sub: 66378 op: 125
        if (_i_66437 > 4){
            goto LB; // [238] 303
        }
        // SubProg GetSourceName pc: 245 op: STARTLINE (58)

        /** main.e:83				known_files[$] = src_name & DEFAULT_EXTS[i]*/
        // SubProg GetSourceName pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_7known_files_11390)){
                _33108 = SEQ_PTR(_7known_files_11390)->length;
        }
        else {
            _33108 = 1;
        }
        // SubProg GetSourceName pc: 252 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 254 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 256 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_39DEFAULT_EXTS_19978);
        _33109 = (object)*(((s1_ptr)_2)->base + _i_66437);
        // SubProg GetSourceName pc: 260 op: CONCAT (15)
        Concat((object_ptr)&_33110, _47src_name_49127, _33109);
        _33109 = NOVALUE;
        // SubProg GetSourceName pc: 264 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7known_files_11390 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _33108);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _33110;
        if( _1 != _33110 ){
            DeRef(_1);
        }
        _33110 = NOVALUE;
        // SubProg GetSourceName pc: 268 op: STARTLINE (58)

        /** main.e:84				real_name = e_path_find(known_files[$])*/
        // SubProg GetSourceName pc: 270 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 272 op: LENGTH (42)
        if (IS_SEQUENCE(_7known_files_11390)){
                _33111 = SEQ_PTR(_7known_files_11390)->length;
        }
        else {
            _33111 = 1;
        }
        // SubProg GetSourceName pc: 275 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7known_files_11390);
        _33112 = (object)*(((s1_ptr)_2)->base + _33111);
        // SubProg GetSourceName pc: 279 op: PROC (27)
        Ref(_33112);
        _0 = _real_name_66380;
        _real_name_66380 = _46e_path_find(_33112);
        DeRef(_0);
        _33112 = NOVALUE;
        // SubProg GetSourceName pc: 283 op: STARTLINE (58)

        /** main.e:85				if sequence(real_name) then*/
        // SubProg GetSourceName pc: 285 op: IS_A_SEQUENCE (68)
        _33114 = IS_SEQUENCE(_real_name_66380);
        // SubProg GetSourceName pc: 288 op: IF (20)
        if (_33114 == 0)
        {
            _33114 = NOVALUE;
            goto LC; // [288] 296
        }
        else{
            _33114 = NOVALUE;
        }
        // SubProg GetSourceName pc: 291 op: STARTLINE (58)

        /** main.e:86					exit*/
        // SubProg GetSourceName pc: 293 op: EXIT (61)
        goto LB; // [293] 303
        // SubProg GetSourceName pc: 295 op: NOP1 (159)
LC: // addr: 296 pc: 295 sub: 66378 op: 159
        // SubProg GetSourceName pc: 296 op: STARTLINE (58)

        /** main.e:88			end for*/
        // SubProg GetSourceName pc: 298 op: ENDFOR_INT_UP1 (54)
        _i_66437 = _i_66437 + 1;
        goto LA; // [298] 245
LB: // addr: 303 pc: 298 sub: 66378 op: 54
        ;
    }
    // SubProg GetSourceName pc: 303 op: STARTLINE (58)

    /** main.e:90			if atom(real_name) then*/
    // SubProg GetSourceName pc: 305 op: PRIVATE_INIT_CHECK (30)
    // SubProg GetSourceName pc: 307 op: IS_AN_ATOM (67)
    _33115 = IS_ATOM(_real_name_66380);
    // SubProg GetSourceName pc: 310 op: IF (20)
    if (_33115 == 0)
    {
        _33115 = NOVALUE;
        goto LD; // [310] 359
    }
    else{
        _33115 = NOVALUE;
    }
    // SubProg GetSourceName pc: 313 op: STARTLINE (58)

    /** main.e:91				return -1*/
    // SubProg GetSourceName pc: 315 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRef(_real_name_66380);

// block var fh_66381

// block var has_extension_66383
    DeRef(_33089);
    _33089 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 319 op: NOP1 (159)
    // SubProg GetSourceName pc: 320 op: ELSE (23)
    goto LD; // [320] 359
    // SubProg GetSourceName pc: 322 op: NOP1 (159)
L9: // addr: 323 pc: 322 sub: 66378 op: 159
    // SubProg GetSourceName pc: 323 op: STARTLINE (58)

    /** main.e:94			known_files = append(known_files, src_name)*/
    // SubProg GetSourceName pc: 325 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 329 op: APPEND (35)
    RefDS(_47src_name_49127);
    Append(&_7known_files_11390, _7known_files_11390, _47src_name_49127);
    // SubProg GetSourceName pc: 333 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 335 op: STARTLINE (58)

    /** main.e:95			real_name = e_path_find(src_name)*/
    // SubProg GetSourceName pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 339 op: PROC (27)
    RefDS(_47src_name_49127);
    _0 = _real_name_66380;
    _real_name_66380 = _46e_path_find(_47src_name_49127);
    DeRef(_0);
    // SubProg GetSourceName pc: 343 op: STARTLINE (58)

    /** main.e:96			if atom(real_name) then*/
    // SubProg GetSourceName pc: 345 op: IS_AN_ATOM (67)
    _33118 = IS_ATOM(_real_name_66380);
    // SubProg GetSourceName pc: 348 op: IF (20)
    if (_33118 == 0)
    {
        _33118 = NOVALUE;
        goto LE; // [348] 358
    }
    else{
        _33118 = NOVALUE;
    }
    // SubProg GetSourceName pc: 351 op: STARTLINE (58)

    /** main.e:97				return -1*/
    // SubProg GetSourceName pc: 353 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRef(_real_name_66380);

// block var fh_66381

// block var has_extension_66383
    DeRef(_33089);
    _33089 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 357 op: NOP1 (159)
LE: // addr: 358 pc: 357 sub: 66378 op: 159
    // SubProg GetSourceName pc: 358 op: NOP1 (159)
LD: // addr: 359 pc: 358 sub: 66378 op: 159
    // SubProg GetSourceName pc: 359 op: STARTLINE (58)

    /** main.e:100		known_files[$] = canonical_path(real_name,,CORRECT)*/
    // SubProg GetSourceName pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 363 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33119 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33119 = 1;
    }
    // SubProg GetSourceName pc: 366 op: PRIVATE_INIT_CHECK (30)
    // SubProg GetSourceName pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 370 op: PROC (27)
    Ref(_real_name_66380);
    _33120 = _16canonical_path(_real_name_66380, 0, 2);
    // SubProg GetSourceName pc: 376 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7known_files_11390 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _33119);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _33120;
    if( _1 != _33120 ){
        DeRef(_1);
    }
    _33120 = NOVALUE;
    // SubProg GetSourceName pc: 380 op: STARTLINE (58)

    /** main.e:101		known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    // SubProg GetSourceName pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 386 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33121 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33121 = 1;
    }
    // SubProg GetSourceName pc: 389 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _33122 = (object)*(((s1_ptr)_2)->base + _33121);
    // SubProg GetSourceName pc: 393 op: HASH (194)
    _33123 = calc_hash(_33122, -5);
    _33122 = NOVALUE;
    // SubProg GetSourceName pc: 397 op: CONCAT (15)
    Ref(_33123);
    Append(&_7known_files_hash_11391, _7known_files_hash_11391, _33123);
    DeRef(_33123);
    _33123 = NOVALUE;
    // SubProg GetSourceName pc: 401 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 403 op: STARTLINE (58)

    /** main.e:102		finished_files &= 0*/
    // SubProg GetSourceName pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 407 op: CONCAT (15)
    Append(&_7finished_files_11392, _7finished_files_11392, 0);
    // SubProg GetSourceName pc: 411 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 413 op: STARTLINE (58)

    /** main.e:103		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg GetSourceName pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 417 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 419 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33126 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33126 = 1;
    }
    // SubProg GetSourceName pc: 422 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _33126;
    _33127 = MAKE_SEQ(_1);
    _33126 = NOVALUE;
    // SubProg GetSourceName pc: 426 op: APPEND (35)
    RefDS(_33127);
    Append(&_7file_include_depend_11393, _7file_include_depend_11393, _33127);
    DeRefDS(_33127);
    _33127 = NOVALUE;
    // SubProg GetSourceName pc: 430 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 432 op: STARTLINE (58)

    /** main.e:105		if file_exists(real_name) then*/
    // SubProg GetSourceName pc: 434 op: PROC (27)
    Ref(_real_name_66380);
    _33129 = _16file_exists(_real_name_66380);
    // SubProg GetSourceName pc: 438 op: IF (20)
    if (_33129 == 0) {
        DeRef(_33129);
        _33129 = NOVALUE;
        goto LF; // [438] 462
    }
    else {
        if (!IS_ATOM_INT(_33129) && DBL_PTR(_33129)->dbl == 0.0){
            DeRef(_33129);
            _33129 = NOVALUE;
            goto LF; // [438] 462
        }
        DeRef(_33129);
        _33129 = NOVALUE;
    }
    DeRef(_33129);
    _33129 = NOVALUE;
    // SubProg GetSourceName pc: 441 op: STARTLINE (58)

    /** main.e:106			real_name = maybe_preprocess(real_name)*/
    // SubProg GetSourceName pc: 443 op: PROC (27)
    Ref(_real_name_66380);
    _0 = _real_name_66380;
    _real_name_66380 = _63maybe_preprocess(_real_name_66380);
    DeRef(_0);
    // SubProg GetSourceName pc: 447 op: STARTLINE (58)

    /** main.e:107			fh = open_locked(real_name)*/
    // SubProg GetSourceName pc: 449 op: PROC (27)
    Ref(_real_name_66380);
    _fh_66381 = _7open_locked(_real_name_66380);
    // SubProg GetSourceName pc: 453 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fh_66381)) {
        _1 = (object)(DBL_PTR(_fh_66381)->dbl);
        DeRefDS(_fh_66381);
        _fh_66381 = _1;
    }
    // SubProg GetSourceName pc: 455 op: STARTLINE (58)

    /** main.e:108			return fh*/
    // SubProg GetSourceName pc: 457 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRef(_real_name_66380);

// block var has_extension_66383
    DeRef(_33089);
    _33089 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    return _fh_66381;
    // SubProg GetSourceName pc: 461 op: NOP1 (159)
LF: // addr: 462 pc: 461 sub: 66378 op: 159
    // SubProg GetSourceName pc: 462 op: STARTLINE (58)

    /** main.e:111		return -1*/
    // SubProg GetSourceName pc: 464 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66380
    DeRef(_real_name_66380);

// block var fh_66381

// block var has_extension_66383
    DeRef(_33089);
    _33089 = NOVALUE;
    DeRef(_33085);
    _33085 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 468 op: BADRETURNF (43)
    ;
}


void _74main()
{
    object _argc_66506 = NOVALUE;
    object _argv_66507 = NOVALUE;
    object _33160 = NOVALUE; // 66590 33160
    object _33159 = NOVALUE; // 66588 33159
// skipping _33158  name type: 0
// skipping _33157  name type: 0
    object _33156 = NOVALUE; // 66562 33156
// skipping _33155  name type: 0
    object _33154 = NOVALUE; // 66558 33154
// skipping _33153  name type: 0
    object _33152 = NOVALUE; // 66550 33152
    object _33151 = NOVALUE; // 66547 33151
    object _33150 = NOVALUE; // 66545 33150
    object _33149 = NOVALUE; // 66544 33149
    object _33148 = NOVALUE; // 66541 33148
    object _33147 = NOVALUE; // 66540 33147
    object _33146 = NOVALUE; // 66539 33146
    object _33145 = NOVALUE; // 66538 33145
// skipping _33144  name type: 0
// skipping _33143  name type: 0
// skipping _33142  name type: 0
    object _33141 = NOVALUE; // 66524 33141
// skipping _33139  name type: 0
// skipping _33138  name type: 0
// skipping _33137  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg main pc: 1 op: STARTLINE (58)

    /** main.e:131		argv = command_line()*/
    // SubProg main pc: 3 op: COMMAND_LINE (100)
    DeRef(_argv_66507);
    _argv_66507 = Command_Line();
    // SubProg main pc: 5 op: STARTLINE (58)

    /** main.e:133		if BIND then*/
    // SubProg main pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 9 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }
    // SubProg main pc: 12 op: STARTLINE (58)

    /** main.e:134			argv = extract_options(argv)*/
    // SubProg main pc: 14 op: PROC (27)
    RefDS(_argv_66507);
    _0 = _argv_66507;
    _argv_66507 = _2extract_options(_argv_66507);
    DeRefDS(_0);
    // SubProg main pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 66504 op: 159
    // SubProg main pc: 21 op: STARTLINE (58)

    /** main.e:137		argc = length(argv)*/
    // SubProg main pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_argv_66507)){
            _argc_66506 = SEQ_PTR(_argv_66507)->length;
    }
    else {
        _argc_66506 = 1;
    }
    // SubProg main pc: 26 op: STARTLINE (58)

    /** main.e:139		Argv = argv*/
    // SubProg main pc: 28 op: ASSIGN (18)
    RefDS(_argv_66507);
    DeRef(_5Argv_12488);
    _5Argv_12488 = _argv_66507;
    // SubProg main pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 33 op: STARTLINE (58)

    /** main.e:140		Argc = argc*/
    // SubProg main pc: 35 op: ASSIGN (18)
    _5Argc_12487 = _argc_66506;
    // SubProg main pc: 38 op: INTEGER_CHECK (96)
    // SubProg main pc: 40 op: STARTLINE (58)

    /** main.e:142		TempErrName = "ex.err"*/
    // SubProg main pc: 42 op: ASSIGN (18)
    RefDS(_33140);
    DeRefi(_49TempErrName_48779);
    _49TempErrName_48779 = _33140;
    // SubProg main pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 47 op: STARTLINE (58)

    /** main.e:143		TempWarningName = STDERR*/
    // SubProg main pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 51 op: ASSIGN (18)
    DeRef(_5TempWarningName_12491);
    _5TempWarningName_12491 = 2;
    // SubProg main pc: 54 op: STARTLINE (58)

    /** main.e:144		display_warnings = 1*/
    // SubProg main pc: 56 op: ASSIGN (18)
    _49display_warnings_48780 = 1;
    // SubProg main pc: 59 op: INTEGER_CHECK (96)
    // SubProg main pc: 61 op: STARTLINE (58)

    /** main.e:146		InitGlobals()*/
    // SubProg main pc: 63 op: PROC (27)
    _31InitGlobals();
    // SubProg main pc: 65 op: STARTLINE (58)

    /** main.e:148		if TRANSLATE or BIND or INTERPRET then*/
    // SubProg main pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 69 op: SC1_OR (143)
    if (_5TRANSLATE_12097 != 0) {
        _33141 = 1;
        goto L2; // [69] 79
    }
    // SubProg main pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 75 op: SC2_OR (144)
    _33141 = (_5BIND_12100 != 0);
    // SubProg main pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 66504 op: 159
    // SubProg main pc: 79 op: SC1_OR_IF (147)
    if (_33141 != 0) {
        goto L3; // [79] 90
    }
    // SubProg main pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 85 op: NOP1 (159)
    // SubProg main pc: 86 op: IF (20)
    if (_5INTERPRET_12094 == 0)
    {
        goto L4; // [86] 96
    }
    else{
    }
    // SubProg main pc: 89 op: NOP1 (159)
L3: // addr: 90 pc: 89 sub: 66504 op: 159
    // SubProg main pc: 90 op: STARTLINE (58)

    /** main.e:149			InitBackEnd(0)*/
    // SubProg main pc: 92 op: PROC (27)
    _2InitBackEnd(0);
    // SubProg main pc: 95 op: NOP1 (159)
L4: // addr: 96 pc: 95 sub: 66504 op: 159
    // SubProg main pc: 96 op: STARTLINE (58)

    /** main.e:152		src_file = GetSourceName()*/
    // SubProg main pc: 98 op: PROC (27)
    _0 = _74GetSourceName();
    _5src_file_12599 = _0;
    // SubProg main pc: 101 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_5src_file_12599)) {
        _1 = (object)(DBL_PTR(_5src_file_12599)->dbl);
        DeRefDS(_5src_file_12599);
        _5src_file_12599 = _1;
    }
    // SubProg main pc: 103 op: STARTLINE (58)

    /** main.e:154		if src_file = -1 then*/
    // SubProg main pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 107 op: EQUALS_IFW (104)
    if (_5src_file_12599 != -1)
    goto L5; // [107] 181
    // SubProg main pc: 111 op: STARTLINE (58)

    /** main.e:156			screen_output(STDERR, GetMsgText(51, 0, {known_files[$]}))*/
    // SubProg main pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 117 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33145 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33145 = 1;
    }
    // SubProg main pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _33146 = (object)*(((s1_ptr)_2)->base + _33145);
    // SubProg main pc: 124 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_33146);
    ((intptr_t*)_2)[1] = _33146;
    _33147 = MAKE_SEQ(_1);
    _33146 = NOVALUE;
    // SubProg main pc: 128 op: PROC (27)
    _33148 = _40GetMsgText(51, 0, _33147);
    _33147 = NOVALUE;
    // SubProg main pc: 134 op: PROC (27)
    _49screen_output(2, _33148);
    _33148 = NOVALUE;
    // SubProg main pc: 138 op: STARTLINE (58)

    /** main.e:157			if not batch_job and not test_only then*/
    // SubProg main pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 142 op: NOT (7)
    _33149 = (_5batch_job_12490 == 0);
    // SubProg main pc: 145 op: SC1_AND_IF (146)
    if (_33149 == 0) {
        goto L6; // [145] 173
    }
    // SubProg main pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 151 op: NOT (7)
    _33151 = (_5test_only_12489 == 0);
    // SubProg main pc: 154 op: NOP1 (159)
    // SubProg main pc: 155 op: IF (20)
    if (_33151 == 0)
    {
        DeRef(_33151);
        _33151 = NOVALUE;
        goto L6; // [155] 173
    }
    else{
        DeRef(_33151);
        _33151 = NOVALUE;
    }
    // SubProg main pc: 158 op: STARTLINE (58)

    /** main.e:158				maybe_any_key(GetMsgText(277,0), STDERR)*/
    // SubProg main pc: 160 op: PROC (27)
    RefDS(_21958);
    _33152 = _40GetMsgText(277, 0, _21958);
    // SubProg main pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 168 op: PROC (27)
    _37maybe_any_key(_33152, 2);
    _33152 = NOVALUE;
    // SubProg main pc: 172 op: NOP1 (159)
L6: // addr: 173 pc: 172 sub: 66504 op: 159
    // SubProg main pc: 173 op: STARTLINE (58)

    /** main.e:160			Cleanup(1)*/
    // SubProg main pc: 175 op: PROC (27)
    _49Cleanup(1);
    // SubProg main pc: 178 op: ELSE (23)
    goto L7; // [178] 226
    // SubProg main pc: 180 op: NOP1 (159)
L5: // addr: 181 pc: 180 sub: 66504 op: 159
    // SubProg main pc: 181 op: STARTLINE (58)

    /** main.e:162		elsif src_file >= 0 then*/
    // SubProg main pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 185 op: GREATEREQ_IFW (103)
    if (_5src_file_12599 < 0)
    goto L8; // [185] 225
    // SubProg main pc: 189 op: STARTLINE (58)

    /** main.e:163			main_path = known_files[$]*/
    // SubProg main pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 193 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _33154 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _33154 = 1;
    }
    // SubProg main pc: 196 op: RHS_SUBS_CHECK (92)
    DeRef(_5main_path_12598);
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _5main_path_12598 = (object)*(((s1_ptr)_2)->base + _33154);
    Ref(_5main_path_12598);
    // SubProg main pc: 200 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 202 op: STARTLINE (58)

    /** main.e:164			if length(main_path) = 0 then*/
    // SubProg main pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 206 op: LENGTH (42)
    if (IS_SEQUENCE(_5main_path_12598)){
            _33156 = SEQ_PTR(_5main_path_12598)->length;
    }
    else {
        _33156 = 1;
    }
    // SubProg main pc: 209 op: EQUALS_IFW_I (121)
    if (_33156 != 0)
    goto L9; // [209] 224
    // SubProg main pc: 213 op: STARTLINE (58)

    /** main.e:165				main_path = '.' & SLASH*/
    // SubProg main pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 217 op: CONCAT (15)
    Concat((object_ptr)&_5main_path_12598, 46, 47);
    // SubProg main pc: 221 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 223 op: NOP1 (159)
L9: // addr: 224 pc: 223 sub: 66504 op: 159
    // SubProg main pc: 224 op: NOP1 (159)
L8: // addr: 225 pc: 224 sub: 66504 op: 159
    // SubProg main pc: 225 op: NOP1 (159)
L7: // addr: 226 pc: 225 sub: 66504 op: 159
    // SubProg main pc: 226 op: STARTLINE (58)

    /** main.e:171		if TRANSLATE then*/
    // SubProg main pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 230 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto LA; // [230] 239
    }
    else{
    }
    // SubProg main pc: 233 op: STARTLINE (58)

    /** main.e:172			InitBackEnd(1)*/
    // SubProg main pc: 235 op: PROC (27)
    _2InitBackEnd(1);
    // SubProg main pc: 238 op: NOP1 (159)
LA: // addr: 239 pc: 238 sub: 66504 op: 159
    // SubProg main pc: 239 op: STARTLINE (58)

    /** main.e:175		CheckPlatform()*/
    // SubProg main pc: 241 op: PROC (27)
    _2CheckPlatform();
    // SubProg main pc: 243 op: STARTLINE (58)

    /** main.e:177		InitSymTab()*/
    // SubProg main pc: 245 op: PROC (27)
    _53InitSymTab();
    // SubProg main pc: 247 op: STARTLINE (58)

    /** main.e:178		InitEmit()*/
    // SubProg main pc: 249 op: PROC (27)
    _45InitEmit();
    // SubProg main pc: 251 op: STARTLINE (58)

    /** main.e:179		InitLex()*/
    // SubProg main pc: 253 op: PROC (27)
    _61InitLex();
    // SubProg main pc: 255 op: STARTLINE (58)

    /** main.e:180		InitParser()*/
    // SubProg main pc: 257 op: PROC (27)
    _31InitParser();
    // SubProg main pc: 259 op: STARTLINE (58)

    /** main.e:184		eu_namespace()*/
    // SubProg main pc: 261 op: PROC (27)
    _61eu_namespace();
    // SubProg main pc: 263 op: STARTLINE (58)

    /** main.e:186		ifdef TRANSLATOR then*/
    // SubProg main pc: 265 op: STARTLINE (58)

    /** main.e:197		main_file()*/
    // SubProg main pc: 267 op: PROC (27)
    _61main_file();
    // SubProg main pc: 269 op: STARTLINE (58)

    /** main.e:199		check_coverage()*/
    // SubProg main pc: 271 op: PROC (27)
    _50check_coverage();
    // SubProg main pc: 273 op: STARTLINE (58)

    /** main.e:201		parser()*/
    // SubProg main pc: 275 op: PROC (27)
    _31parser();
    // SubProg main pc: 277 op: STARTLINE (58)

    /** main.e:203		init_coverage()*/
    // SubProg main pc: 279 op: PROC (27)
    _50init_coverage();
    // SubProg main pc: 281 op: STARTLINE (58)

    /** main.e:206		if TRANSLATE then*/
    // SubProg main pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 285 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto LB; // [285] 296
    }
    else{
    }
    // SubProg main pc: 288 op: STARTLINE (58)

    /** main.e:207			BackEnd(0) -- translate IL to C*/
    // SubProg main pc: 290 op: PROC (27)
    _2BackEnd(0);
    // SubProg main pc: 293 op: ELSE (23)
    goto LC; // [293] 383
    // SubProg main pc: 295 op: NOP1 (159)
LB: // addr: 296 pc: 295 sub: 66504 op: 159
    // SubProg main pc: 296 op: STARTLINE (58)

    /** main.e:209		elsif BIND then*/
    // SubProg main pc: 298 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 300 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto LD; // [300] 310
    }
    else{
    }
    // SubProg main pc: 303 op: STARTLINE (58)

    /** main.e:210			OutputIL()*/
    // SubProg main pc: 305 op: PROC (27)
    _2OutputIL();
    // SubProg main pc: 307 op: ELSE (23)
    goto LC; // [307] 383
    // SubProg main pc: 309 op: NOP1 (159)
LD: // addr: 310 pc: 309 sub: 66504 op: 159
    // SubProg main pc: 310 op: STARTLINE (58)

    /** main.e:212		elsif INTERPRET and not test_only then*/
    // SubProg main pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 314 op: SC1_AND_IF (146)
    if (_5INTERPRET_12094 == 0) {
        goto LE; // [314] 382
    }
    // SubProg main pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 320 op: NOT (7)
    _33160 = (_5test_only_12489 == 0);
    // SubProg main pc: 323 op: NOP1 (159)
    // SubProg main pc: 324 op: IF (20)
    if (_33160 == 0)
    {
        DeRef(_33160);
        _33160 = NOVALUE;
        goto LE; // [324] 382
    }
    else{
        DeRef(_33160);
        _33160 = NOVALUE;
    }
    // SubProg main pc: 327 op: STARTLINE (58)

    /** main.e:213			ifdef not STDDEBUG then*/
    // SubProg main pc: 329 op: STARTLINE (58)

    /** main.e:214				BackEnd(0) -- execute IL using Euphoria-coded back-end*/
    // SubProg main pc: 331 op: PROC (27)
    _2BackEnd(0);
    // SubProg main pc: 334 op: STARTLINE (58)

    /** main.e:216			while repl do*/
    // SubProg main pc: 336 op: NOP2 (110)
    // SubProg main pc: 338 op: NOPWHILE (158)
    // SubProg main pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 341 op: WHILE (47)
    // SubProg main pc: 381 op: NOP1 (159)
LE: // addr: 382 pc: 381 sub: 66504 op: 159
    // SubProg main pc: 382 op: NOP1 (159)
LC: // addr: 383 pc: 382 sub: 66504 op: 159
    // SubProg main pc: 383 op: STARTLINE (58)

    /** main.e:225		Cleanup(0) -- does warnings*/
    // SubProg main pc: 385 op: PROC (27)
    _49Cleanup(0);
    // SubProg main pc: 388 op: STARTLINE (58)

    /** main.e:226	end procedure*/
    // SubProg main pc: 390 op: RETURNP (29)

// Exiting block BLOCK: main

// block var argc_66506

// block var argv_66507
    DeRef(_argv_66507);
    DeRef(_33149);
    _33149 = NOVALUE;
    return;
    // SubProg main pc: 393 op: BADRETURNF (43)
    ;
}



// 0x4277954C
