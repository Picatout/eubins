// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _68GetSourceName()
{
    object _real_name_66190 = NOVALUE;
    object _fh_66191 = NOVALUE;
    object _has_extension_66193 = NOVALUE;
// skipping _32982  name type: 0
// skipping _32981  name type: 0
    object _32980 = NOVALUE; // 66297 32980
// skipping _32979  name type: 0
    object _32978 = NOVALUE; // 66293 32978
    object _32977 = NOVALUE; // 66292 32977
// skipping _32976  name type: 0
// skipping _32975  name type: 0
    object _32974 = NOVALUE; // 66285 32974
    object _32973 = NOVALUE; // 66284 32973
    object _32972 = NOVALUE; // 66283 32972
    object _32971 = NOVALUE; // 66280 32971
    object _32970 = NOVALUE; // 66277 32970
    object _32969 = NOVALUE; // 66275 32969
// skipping _32968  name type: 0
// skipping _32967  name type: 0
    object _32966 = NOVALUE; // 66265 32966
    object _32965 = NOVALUE; // 66263 32965
// skipping _32964  name type: 0
    object _32963 = NOVALUE; // 66260 32963
    object _32962 = NOVALUE; // 66259 32962
    object _32961 = NOVALUE; // 66256 32961
    object _32960 = NOVALUE; // 66255 32960
    object _32959 = NOVALUE; // 66252 32959
    object _32958 = NOVALUE; // 66250 32958
// skipping _32957  name type: 0
// skipping _32956  name type: 0
    object _32955 = NOVALUE; // 66241 32955
    object _32954 = NOVALUE; // 66239 32954
// skipping _32953  name type: 0
    object _32952 = NOVALUE; // 66234 32952
    object _32951 = NOVALUE; // 66231 32951
// skipping _32950  name type: 0
    object _32949 = NOVALUE; // 66225 32949
    object _32948 = NOVALUE; // 66224 32948
// skipping _32947  name type: 0
// skipping _32946  name type: 0
    object _32945 = NOVALUE; // 66217 32945
    object _32944 = NOVALUE; // 66216 32944
    object _32943 = NOVALUE; // 66215 32943
// skipping _32942  name type: 0
    object _32941 = NOVALUE; // 66208 32941
    object _32940 = NOVALUE; // 66207 32940
    object _32939 = NOVALUE; // 66206 32939
    object _32937 = NOVALUE; // 66201 32937
    object _32936 = NOVALUE; // 66199 32936
    object _32935 = NOVALUE; // 66198 32935
    object _32934 = NOVALUE; // 66197 32934
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetSourceName pc: 1 op: STARTLINE (58)

    /** main.e:48		boolean has_extension = FALSE*/
    // SubProg GetSourceName pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 5 op: ASSIGN (18)
    _has_extension_66193 = _13FALSE_450;
    // SubProg GetSourceName pc: 8 op: STARTLINE (58)

    /** main.e:50		if length(src_name) = 0 and not repl then*/
    // SubProg GetSourceName pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_49src_name_49051)){
            _32934 = SEQ_PTR(_49src_name_49051)->length;
    }
    else {
        _32934 = 1;
    }
    // SubProg GetSourceName pc: 15 op: EQUALS (3)
    _32935 = (_32934 == 0);
    _32934 = NOVALUE;
    // SubProg GetSourceName pc: 19 op: SC1_AND_IF (146)
    if (_32935 == 0) {
        goto L1; // [19] 45
    }
    // SubProg GetSourceName pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 25 op: NOT (7)
    _32937 = (0 == 0);
    // SubProg GetSourceName pc: 28 op: NOP1 (159)
    // SubProg GetSourceName pc: 29 op: IF (20)
    if (_32937 == 0)
    {
        DeRef(_32937);
        _32937 = NOVALUE;
        goto L1; // [29] 45
    }
    else{
        DeRef(_32937);
        _32937 = NOVALUE;
    }
    // SubProg GetSourceName pc: 32 op: STARTLINE (58)

    /** main.e:51			show_banner()*/
    // SubProg GetSourceName pc: 34 op: PROC (27)
    _49show_banner();
    // SubProg GetSourceName pc: 36 op: STARTLINE (58)

    /** main.e:52			return -2 -- No source file*/
    // SubProg GetSourceName pc: 38 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRef(_real_name_66190);

// block var fh_66191

// block var has_extension_66193
    DeRef(_32935);
    _32935 = NOVALUE;
    return -2;
    // SubProg GetSourceName pc: 42 op: ELSE (23)
    goto L2; // [42] 143
    // SubProg GetSourceName pc: 44 op: NOP1 (159)
L1: // addr: 45 pc: 44 sub: 66188 op: 159
    // SubProg GetSourceName pc: 45 op: STARTLINE (58)

    /** main.e:53		elsif length(src_name) = 0 and repl then*/
    // SubProg GetSourceName pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_49src_name_49051)){
            _32939 = SEQ_PTR(_49src_name_49051)->length;
    }
    else {
        _32939 = 1;
    }
    // SubProg GetSourceName pc: 52 op: EQUALS (3)
    _32940 = (_32939 == 0);
    _32939 = NOVALUE;
    // SubProg GetSourceName pc: 56 op: SC1_AND_IF (146)
    if (_32940 == 0) {
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
    RefDS(_21933);
    Append(&_37known_files_15406, _37known_files_15406, _21933);
    // SubProg GetSourceName pc: 74 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 76 op: STARTLINE (58)

    /** main.e:55			known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    // SubProg GetSourceName pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 82 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32943 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32943 = 1;
    }
    // SubProg GetSourceName pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _32944 = (object)*(((s1_ptr)_2)->base + _32943);
    // SubProg GetSourceName pc: 89 op: HASH (194)
    _32945 = calc_hash(_32944, -5);
    _32944 = NOVALUE;
    // SubProg GetSourceName pc: 93 op: CONCAT (15)
    Ref(_32945);
    Append(&_37known_files_hash_15407, _37known_files_hash_15407, _32945);
    DeRef(_32945);
    _32945 = NOVALUE;
    // SubProg GetSourceName pc: 97 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 99 op: STARTLINE (58)

    /** main.e:56			real_name = ""*/
    // SubProg GetSourceName pc: 101 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_real_name_66190);
    _real_name_66190 = _21933;
    // SubProg GetSourceName pc: 104 op: STARTLINE (58)

    /** main.e:57			finished_files &= 0*/
    // SubProg GetSourceName pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 108 op: CONCAT (15)
    Append(&_37finished_files_15408, _37finished_files_15408, 0);
    // SubProg GetSourceName pc: 112 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 114 op: STARTLINE (58)

    /** main.e:58			file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg GetSourceName pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 120 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32948 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32948 = 1;
    }
    // SubProg GetSourceName pc: 123 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _32948;
    _32949 = MAKE_SEQ(_1);
    _32948 = NOVALUE;
    // SubProg GetSourceName pc: 127 op: APPEND (35)
    RefDS(_32949);
    Append(&_37file_include_depend_15409, _37file_include_depend_15409, _32949);
    DeRefDS(_32949);
    _32949 = NOVALUE;
    // SubProg GetSourceName pc: 131 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 133 op: STARTLINE (58)

    /** main.e:59			return repl_file*/
    // SubProg GetSourceName pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 137 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRefDS(_real_name_66190);

// block var fh_66191

// block var has_extension_66193
    DeRef(_32940);
    _32940 = NOVALUE;
    DeRef(_32935);
    _32935 = NOVALUE;
    return 5555;
    // SubProg GetSourceName pc: 141 op: NOP1 (159)
L3: // addr: 142 pc: 141 sub: 66188 op: 159
    // SubProg GetSourceName pc: 142 op: NOP1 (159)
L2: // addr: 143 pc: 142 sub: 66188 op: 159
    // SubProg GetSourceName pc: 143 op: STARTLINE (58)

    /** main.e:62		ifdef WINDOWS then*/
    // SubProg GetSourceName pc: 145 op: STARTLINE (58)

    /** main.e:66		for p = length(src_name) to 1 by -1 do*/
    // SubProg GetSourceName pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 149 op: LENGTH (42)
    if (IS_SEQUENCE(_49src_name_49051)){
            _32951 = SEQ_PTR(_49src_name_49051)->length;
    }
    else {
        _32951 = 1;
    }
    // SubProg GetSourceName pc: 152 op: FOR_I (125)
    {
        object _p_66229;
        _p_66229 = _32951;
L4: // addr: 159 pc: 152 sub: 66188 op: 125
        if (_p_66229 < 1){
            goto L5; // [152] 216
        }
        // SubProg GetSourceName pc: 159 op: STARTLINE (58)

        /** main.e:67			if src_name[p] = '.' then*/
        // SubProg GetSourceName pc: 161 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 163 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_49src_name_49051);
        _32952 = (object)*(((s1_ptr)_2)->base + _p_66229);
        // SubProg GetSourceName pc: 167 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _32952, 46)){
            _32952 = NOVALUE;
            goto L6; // [167] 185
        }
        _32952 = NOVALUE;
        // SubProg GetSourceName pc: 171 op: STARTLINE (58)

        /** main.e:68			   has_extension = TRUE*/
        // SubProg GetSourceName pc: 173 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 175 op: ASSIGN (18)
        _has_extension_66193 = _13TRUE_452;
        // SubProg GetSourceName pc: 178 op: STARTLINE (58)

        /** main.e:69			   exit*/
        // SubProg GetSourceName pc: 180 op: EXIT (61)
        goto L5; // [180] 216
        // SubProg GetSourceName pc: 182 op: ELSE (23)
        goto L7; // [182] 209
        // SubProg GetSourceName pc: 184 op: NOP1 (159)
L6: // addr: 185 pc: 184 sub: 66188 op: 159
        // SubProg GetSourceName pc: 185 op: STARTLINE (58)

        /** main.e:70			elsif find(src_name[p], SLASH_CHARS) then*/
        // SubProg GetSourceName pc: 187 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 189 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_49src_name_49051);
        _32954 = (object)*(((s1_ptr)_2)->base + _p_66229);
        // SubProg GetSourceName pc: 193 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 195 op: FIND_FROM (176)
        _32955 = find_from(_32954, _41SLASH_CHARS_21230, 1);
        _32954 = NOVALUE;
        // SubProg GetSourceName pc: 200 op: IF (20)
        if (_32955 == 0)
        {
            _32955 = NOVALUE;
            goto L8; // [200] 208
        }
        else{
            _32955 = NOVALUE;
        }
        // SubProg GetSourceName pc: 203 op: STARTLINE (58)

        /** main.e:71			   exit*/
        // SubProg GetSourceName pc: 205 op: EXIT (61)
        goto L5; // [205] 216
        // SubProg GetSourceName pc: 207 op: NOP1 (159)
L8: // addr: 208 pc: 207 sub: 66188 op: 159
        // SubProg GetSourceName pc: 208 op: NOP1 (159)
L7: // addr: 209 pc: 208 sub: 66188 op: 159
        // SubProg GetSourceName pc: 209 op: STARTLINE (58)

        /** main.e:73		end for*/
        // SubProg GetSourceName pc: 211 op: ENDFOR_GENERAL (39)
        _p_66229 = _p_66229 + -1;
        goto L4; // [211] 159
L5: // addr: 216 pc: 211 sub: 66188 op: 39
        ;
    }
    // SubProg GetSourceName pc: 216 op: STARTLINE (58)

    /** main.e:75		if not has_extension then*/
    // SubProg GetSourceName pc: 218 op: NOT_IFW (108)
    if (_has_extension_66193 != 0)
    goto L9; // [218] 323
    // SubProg GetSourceName pc: 221 op: STARTLINE (58)

    /** main.e:79			known_files = append(known_files, "")*/
    // SubProg GetSourceName pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 225 op: APPEND (35)
    RefDS(_21933);
    Append(&_37known_files_15406, _37known_files_15406, _21933);
    // SubProg GetSourceName pc: 229 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 231 op: STARTLINE (58)

    /** main.e:82			for i = 1 to length( DEFAULT_EXTS ) do*/
    // SubProg GetSourceName pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 235 op: LENGTH (42)
    // Known sequence length:
    _32958 = 4;
    // SubProg GetSourceName pc: 238 op: FOR_I (125)
    {
        object _i_66248;
        _i_66248 = 1;
LA: // addr: 245 pc: 238 sub: 66188 op: 125
        if (_i_66248 > 4){
            goto LB; // [238] 303
        }
        // SubProg GetSourceName pc: 245 op: STARTLINE (58)

        /** main.e:83				known_files[$] = src_name & DEFAULT_EXTS[i]*/
        // SubProg GetSourceName pc: 247 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 249 op: LENGTH (42)
        if (IS_SEQUENCE(_37known_files_15406)){
                _32959 = SEQ_PTR(_37known_files_15406)->length;
        }
        else {
            _32959 = 1;
        }
        // SubProg GetSourceName pc: 252 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 254 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 256 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_41DEFAULT_EXTS_21205);
        _32960 = (object)*(((s1_ptr)_2)->base + _i_66248);
        // SubProg GetSourceName pc: 260 op: CONCAT (15)
        Concat((object_ptr)&_32961, _49src_name_49051, _32960);
        _32960 = NOVALUE;
        // SubProg GetSourceName pc: 264 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37known_files_15406 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _32959);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _32961;
        if( _1 != _32961 ){
            DeRef(_1);
        }
        _32961 = NOVALUE;
        // SubProg GetSourceName pc: 268 op: STARTLINE (58)

        /** main.e:84				real_name = e_path_find(known_files[$])*/
        // SubProg GetSourceName pc: 270 op: GLOBAL_INIT_CHECK (109)
        // SubProg GetSourceName pc: 272 op: LENGTH (42)
        if (IS_SEQUENCE(_37known_files_15406)){
                _32962 = SEQ_PTR(_37known_files_15406)->length;
        }
        else {
            _32962 = 1;
        }
        // SubProg GetSourceName pc: 275 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37known_files_15406);
        _32963 = (object)*(((s1_ptr)_2)->base + _32962);
        // SubProg GetSourceName pc: 279 op: PROC (27)
        Ref(_32963);
        _0 = _real_name_66190;
        _real_name_66190 = _48e_path_find(_32963);
        DeRef(_0);
        _32963 = NOVALUE;
        // SubProg GetSourceName pc: 283 op: STARTLINE (58)

        /** main.e:85				if sequence(real_name) then*/
        // SubProg GetSourceName pc: 285 op: IS_A_SEQUENCE (68)
        _32965 = IS_SEQUENCE(_real_name_66190);
        // SubProg GetSourceName pc: 288 op: IF (20)
        if (_32965 == 0)
        {
            _32965 = NOVALUE;
            goto LC; // [288] 296
        }
        else{
            _32965 = NOVALUE;
        }
        // SubProg GetSourceName pc: 291 op: STARTLINE (58)

        /** main.e:86					exit*/
        // SubProg GetSourceName pc: 293 op: EXIT (61)
        goto LB; // [293] 303
        // SubProg GetSourceName pc: 295 op: NOP1 (159)
LC: // addr: 296 pc: 295 sub: 66188 op: 159
        // SubProg GetSourceName pc: 296 op: STARTLINE (58)

        /** main.e:88			end for*/
        // SubProg GetSourceName pc: 298 op: ENDFOR_INT_UP1 (54)
        _i_66248 = _i_66248 + 1;
        goto LA; // [298] 245
LB: // addr: 303 pc: 298 sub: 66188 op: 54
        ;
    }
    // SubProg GetSourceName pc: 303 op: STARTLINE (58)

    /** main.e:90			if atom(real_name) then*/
    // SubProg GetSourceName pc: 305 op: PRIVATE_INIT_CHECK (30)
    // SubProg GetSourceName pc: 307 op: IS_AN_ATOM (67)
    _32966 = IS_ATOM(_real_name_66190);
    // SubProg GetSourceName pc: 310 op: IF (20)
    if (_32966 == 0)
    {
        _32966 = NOVALUE;
        goto LD; // [310] 359
    }
    else{
        _32966 = NOVALUE;
    }
    // SubProg GetSourceName pc: 313 op: STARTLINE (58)

    /** main.e:91				return -1*/
    // SubProg GetSourceName pc: 315 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRef(_real_name_66190);

// block var fh_66191

// block var has_extension_66193
    DeRef(_32940);
    _32940 = NOVALUE;
    DeRef(_32935);
    _32935 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 319 op: NOP1 (159)
    // SubProg GetSourceName pc: 320 op: ELSE (23)
    goto LD; // [320] 359
    // SubProg GetSourceName pc: 322 op: NOP1 (159)
L9: // addr: 323 pc: 322 sub: 66188 op: 159
    // SubProg GetSourceName pc: 323 op: STARTLINE (58)

    /** main.e:94			known_files = append(known_files, src_name)*/
    // SubProg GetSourceName pc: 325 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 329 op: APPEND (35)
    RefDS(_49src_name_49051);
    Append(&_37known_files_15406, _37known_files_15406, _49src_name_49051);
    // SubProg GetSourceName pc: 333 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 335 op: STARTLINE (58)

    /** main.e:95			real_name = e_path_find(src_name)*/
    // SubProg GetSourceName pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 339 op: PROC (27)
    RefDS(_49src_name_49051);
    _0 = _real_name_66190;
    _real_name_66190 = _48e_path_find(_49src_name_49051);
    DeRef(_0);
    // SubProg GetSourceName pc: 343 op: STARTLINE (58)

    /** main.e:96			if atom(real_name) then*/
    // SubProg GetSourceName pc: 345 op: IS_AN_ATOM (67)
    _32969 = IS_ATOM(_real_name_66190);
    // SubProg GetSourceName pc: 348 op: IF (20)
    if (_32969 == 0)
    {
        _32969 = NOVALUE;
        goto LE; // [348] 358
    }
    else{
        _32969 = NOVALUE;
    }
    // SubProg GetSourceName pc: 351 op: STARTLINE (58)

    /** main.e:97				return -1*/
    // SubProg GetSourceName pc: 353 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRef(_real_name_66190);

// block var fh_66191

// block var has_extension_66193
    DeRef(_32940);
    _32940 = NOVALUE;
    DeRef(_32935);
    _32935 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 357 op: NOP1 (159)
LE: // addr: 358 pc: 357 sub: 66188 op: 159
    // SubProg GetSourceName pc: 358 op: NOP1 (159)
LD: // addr: 359 pc: 358 sub: 66188 op: 159
    // SubProg GetSourceName pc: 359 op: STARTLINE (58)

    /** main.e:100		known_files[$] = canonical_path(real_name,,CORRECT)*/
    // SubProg GetSourceName pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 363 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32970 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32970 = 1;
    }
    // SubProg GetSourceName pc: 366 op: PRIVATE_INIT_CHECK (30)
    // SubProg GetSourceName pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 370 op: PROC (27)
    Ref(_real_name_66190);
    _32971 = _20canonical_path(_real_name_66190, 0, 2);
    // SubProg GetSourceName pc: 376 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37known_files_15406 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _32970);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _32971;
    if( _1 != _32971 ){
        DeRef(_1);
    }
    _32971 = NOVALUE;
    // SubProg GetSourceName pc: 380 op: STARTLINE (58)

    /** main.e:101		known_files_hash &= hash(known_files[$], stdhash:HSIEH32)*/
    // SubProg GetSourceName pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 386 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32972 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32972 = 1;
    }
    // SubProg GetSourceName pc: 389 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _32973 = (object)*(((s1_ptr)_2)->base + _32972);
    // SubProg GetSourceName pc: 393 op: HASH (194)
    _32974 = calc_hash(_32973, -5);
    _32973 = NOVALUE;
    // SubProg GetSourceName pc: 397 op: CONCAT (15)
    Ref(_32974);
    Append(&_37known_files_hash_15407, _37known_files_hash_15407, _32974);
    DeRef(_32974);
    _32974 = NOVALUE;
    // SubProg GetSourceName pc: 401 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 403 op: STARTLINE (58)

    /** main.e:102		finished_files &= 0*/
    // SubProg GetSourceName pc: 405 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 407 op: CONCAT (15)
    Append(&_37finished_files_15408, _37finished_files_15408, 0);
    // SubProg GetSourceName pc: 411 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 413 op: STARTLINE (58)

    /** main.e:103		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg GetSourceName pc: 415 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 417 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetSourceName pc: 419 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32977 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32977 = 1;
    }
    // SubProg GetSourceName pc: 422 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _32977;
    _32978 = MAKE_SEQ(_1);
    _32977 = NOVALUE;
    // SubProg GetSourceName pc: 426 op: APPEND (35)
    RefDS(_32978);
    Append(&_37file_include_depend_15409, _37file_include_depend_15409, _32978);
    DeRefDS(_32978);
    _32978 = NOVALUE;
    // SubProg GetSourceName pc: 430 op: SEQUENCE_CHECK (97)
    // SubProg GetSourceName pc: 432 op: STARTLINE (58)

    /** main.e:105		if file_exists(real_name) then*/
    // SubProg GetSourceName pc: 434 op: PROC (27)
    Ref(_real_name_66190);
    _32980 = _20file_exists(_real_name_66190);
    // SubProg GetSourceName pc: 438 op: IF (20)
    if (_32980 == 0) {
        DeRef(_32980);
        _32980 = NOVALUE;
        goto LF; // [438] 462
    }
    else {
        if (!IS_ATOM_INT(_32980) && DBL_PTR(_32980)->dbl == 0.0){
            DeRef(_32980);
            _32980 = NOVALUE;
            goto LF; // [438] 462
        }
        DeRef(_32980);
        _32980 = NOVALUE;
    }
    DeRef(_32980);
    _32980 = NOVALUE;
    // SubProg GetSourceName pc: 441 op: STARTLINE (58)

    /** main.e:106			real_name = maybe_preprocess(real_name)*/
    // SubProg GetSourceName pc: 443 op: PROC (27)
    Ref(_real_name_66190);
    _0 = _real_name_66190;
    _real_name_66190 = _64maybe_preprocess(_real_name_66190);
    DeRef(_0);
    // SubProg GetSourceName pc: 447 op: STARTLINE (58)

    /** main.e:107			fh = open_locked(real_name)*/
    // SubProg GetSourceName pc: 449 op: PROC (27)
    Ref(_real_name_66190);
    _fh_66191 = _37open_locked(_real_name_66190);
    // SubProg GetSourceName pc: 453 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fh_66191)) {
        _1 = (object)(DBL_PTR(_fh_66191)->dbl);
        DeRefDS(_fh_66191);
        _fh_66191 = _1;
    }
    // SubProg GetSourceName pc: 455 op: STARTLINE (58)

    /** main.e:108			return fh*/
    // SubProg GetSourceName pc: 457 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRef(_real_name_66190);

// block var has_extension_66193
    DeRef(_32940);
    _32940 = NOVALUE;
    DeRef(_32935);
    _32935 = NOVALUE;
    return _fh_66191;
    // SubProg GetSourceName pc: 461 op: NOP1 (159)
LF: // addr: 462 pc: 461 sub: 66188 op: 159
    // SubProg GetSourceName pc: 462 op: STARTLINE (58)

    /** main.e:111		return -1*/
    // SubProg GetSourceName pc: 464 op: RETURNF (28)

// Exiting block BLOCK: GetSourceName

// block var real_name_66190
    DeRef(_real_name_66190);

// block var fh_66191

// block var has_extension_66193
    DeRef(_32940);
    _32940 = NOVALUE;
    DeRef(_32935);
    _32935 = NOVALUE;
    return -1;
    // SubProg GetSourceName pc: 468 op: BADRETURNF (43)
    ;
}


void _68main()
{
    object _argc_66317 = NOVALUE;
    object _argv_66318 = NOVALUE;
    object _33021 = NOVALUE; // 66421 33021
    object _33020 = NOVALUE; // 66419 33020
    object _33019 = NOVALUE; // 66405 33019
    object _33018 = NOVALUE; // 66404 33018
    object _33017 = NOVALUE; // 66401 33017
    object _33016 = NOVALUE; // 66400 33016
    object _33015 = NOVALUE; // 66399 33015
    object _33014 = NOVALUE; // 66398 33014
    object _33013 = NOVALUE; // 66395 33013
    object _33012 = NOVALUE; // 66393 33012
    object _33011 = NOVALUE; // 66390 33011
// skipping _33010  name type: 0
// skipping _33009  name type: 0
    object _33008 = NOVALUE; // 66374 33008
// skipping _33007  name type: 0
    object _33006 = NOVALUE; // 66370 33006
// skipping _33005  name type: 0
    object _33004 = NOVALUE; // 66362 33004
    object _33003 = NOVALUE; // 66359 33003
    object _33002 = NOVALUE; // 66357 33002
    object _33001 = NOVALUE; // 66356 33001
    object _33000 = NOVALUE; // 66353 33000
    object _32999 = NOVALUE; // 66352 32999
    object _32998 = NOVALUE; // 66351 32998
    object _32997 = NOVALUE; // 66350 32997
// skipping _32995  name type: 0
// skipping _32994  name type: 0
// skipping _32993  name type: 0
    object _32992 = NOVALUE; // 66335 32992
// skipping _32990  name type: 0
// skipping _32989  name type: 0
// skipping _32988  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg main pc: 1 op: STARTLINE (58)

    /** main.e:131		argv = command_line()*/
    // SubProg main pc: 3 op: COMMAND_LINE (100)
    DeRef(_argv_66318);
    _argv_66318 = Command_Line();
    // SubProg main pc: 5 op: STARTLINE (58)

    /** main.e:133		if BIND then*/
    // SubProg main pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 9 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L1; // [9] 21
    }
    else{
    }
    // SubProg main pc: 12 op: STARTLINE (58)

    /** main.e:134			argv = extract_options(argv)*/
    // SubProg main pc: 14 op: PROC (27)
    RefDS(_argv_66318);
    _0 = _argv_66318;
    _argv_66318 = _2extract_options(_argv_66318);
    DeRefDS(_0);
    // SubProg main pc: 18 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 66315 op: 159
    // SubProg main pc: 21 op: STARTLINE (58)

    /** main.e:137		argc = length(argv)*/
    // SubProg main pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_argv_66318)){
            _argc_66317 = SEQ_PTR(_argv_66318)->length;
    }
    else {
        _argc_66317 = 1;
    }
    // SubProg main pc: 26 op: STARTLINE (58)

    /** main.e:139		Argv = argv*/
    // SubProg main pc: 28 op: ASSIGN (18)
    RefDS(_argv_66318);
    DeRef(_36Argv_16447);
    _36Argv_16447 = _argv_66318;
    // SubProg main pc: 31 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 33 op: STARTLINE (58)

    /** main.e:140		Argc = argc*/
    // SubProg main pc: 35 op: ASSIGN (18)
    _36Argc_16446 = _argc_66317;
    // SubProg main pc: 38 op: INTEGER_CHECK (96)
    // SubProg main pc: 40 op: STARTLINE (58)

    /** main.e:142		TempErrName = "ex.err"*/
    // SubProg main pc: 42 op: ASSIGN (18)
    RefDS(_32991);
    DeRefi(_50TempErrName_48705);
    _50TempErrName_48705 = _32991;
    // SubProg main pc: 45 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 47 op: STARTLINE (58)

    /** main.e:143		TempWarningName = STDERR*/
    // SubProg main pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 51 op: ASSIGN (18)
    DeRef(_36TempWarningName_16450);
    _36TempWarningName_16450 = 2;
    // SubProg main pc: 54 op: STARTLINE (58)

    /** main.e:144		display_warnings = 1*/
    // SubProg main pc: 56 op: ASSIGN (18)
    _50display_warnings_48706 = 1;
    // SubProg main pc: 59 op: INTEGER_CHECK (96)
    // SubProg main pc: 61 op: STARTLINE (58)

    /** main.e:146		InitGlobals()*/
    // SubProg main pc: 63 op: PROC (27)
    _40InitGlobals();
    // SubProg main pc: 65 op: STARTLINE (58)

    /** main.e:148		if TRANSLATE or BIND or INTERPRET then*/
    // SubProg main pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 69 op: SC1_OR (143)
    if (_36TRANSLATE_16061 != 0) {
        _32992 = 1;
        goto L2; // [69] 79
    }
    // SubProg main pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 75 op: SC2_OR (144)
    _32992 = (_36BIND_16064 != 0);
    // SubProg main pc: 78 op: NOP1 (159)
L2: // addr: 79 pc: 78 sub: 66315 op: 159
    // SubProg main pc: 79 op: SC1_OR_IF (147)
    if (_32992 != 0) {
        goto L3; // [79] 90
    }
    // SubProg main pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 85 op: NOP1 (159)
    // SubProg main pc: 86 op: IF (20)
    if (_36INTERPRET_16058 == 0)
    {
        goto L4; // [86] 96
    }
    else{
    }
    // SubProg main pc: 89 op: NOP1 (159)
L3: // addr: 90 pc: 89 sub: 66315 op: 159
    // SubProg main pc: 90 op: STARTLINE (58)

    /** main.e:149			InitBackEnd(0)*/
    // SubProg main pc: 92 op: PROC (27)
    _2InitBackEnd(0);
    // SubProg main pc: 95 op: NOP1 (159)
L4: // addr: 96 pc: 95 sub: 66315 op: 159
    // SubProg main pc: 96 op: STARTLINE (58)

    /** main.e:152		src_file = GetSourceName()*/
    // SubProg main pc: 98 op: PROC (27)
    _0 = _68GetSourceName();
    _36src_file_16557 = _0;
    // SubProg main pc: 101 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_36src_file_16557)) {
        _1 = (object)(DBL_PTR(_36src_file_16557)->dbl);
        DeRefDS(_36src_file_16557);
        _36src_file_16557 = _1;
    }
    // SubProg main pc: 103 op: STARTLINE (58)

    /** main.e:154		if src_file = -1 then*/
    // SubProg main pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 107 op: EQUALS_IFW (104)
    if (_36src_file_16557 != -1)
    goto L5; // [107] 181
    // SubProg main pc: 111 op: STARTLINE (58)

    /** main.e:156			screen_output(STDERR, GetMsgText(51, 0, {known_files[$]}))*/
    // SubProg main pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 117 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _32997 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _32997 = 1;
    }
    // SubProg main pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _32998 = (object)*(((s1_ptr)_2)->base + _32997);
    // SubProg main pc: 124 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_32998);
    ((intptr_t*)_2)[1] = _32998;
    _32999 = MAKE_SEQ(_1);
    _32998 = NOVALUE;
    // SubProg main pc: 128 op: PROC (27)
    _33000 = _42GetMsgText(51, 0, _32999);
    _32999 = NOVALUE;
    // SubProg main pc: 134 op: PROC (27)
    _50screen_output(2, _33000);
    _33000 = NOVALUE;
    // SubProg main pc: 138 op: STARTLINE (58)

    /** main.e:157			if not batch_job and not test_only then*/
    // SubProg main pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 142 op: NOT (7)
    _33001 = (_36batch_job_16449 == 0);
    // SubProg main pc: 145 op: SC1_AND_IF (146)
    if (_33001 == 0) {
        goto L6; // [145] 173
    }
    // SubProg main pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 151 op: NOT (7)
    _33003 = (_36test_only_16448 == 0);
    // SubProg main pc: 154 op: NOP1 (159)
    // SubProg main pc: 155 op: IF (20)
    if (_33003 == 0)
    {
        DeRef(_33003);
        _33003 = NOVALUE;
        goto L6; // [155] 173
    }
    else{
        DeRef(_33003);
        _33003 = NOVALUE;
    }
    // SubProg main pc: 158 op: STARTLINE (58)

    /** main.e:158				maybe_any_key(GetMsgText(277,0), STDERR)*/
    // SubProg main pc: 160 op: PROC (27)
    RefDS(_21933);
    _33004 = _42GetMsgText(277, 0, _21933);
    // SubProg main pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 168 op: PROC (27)
    _5maybe_any_key(_33004, 2);
    _33004 = NOVALUE;
    // SubProg main pc: 172 op: NOP1 (159)
L6: // addr: 173 pc: 172 sub: 66315 op: 159
    // SubProg main pc: 173 op: STARTLINE (58)

    /** main.e:160			Cleanup(1)*/
    // SubProg main pc: 175 op: PROC (27)
    _50Cleanup(1);
    // SubProg main pc: 178 op: ELSE (23)
    goto L7; // [178] 226
    // SubProg main pc: 180 op: NOP1 (159)
L5: // addr: 181 pc: 180 sub: 66315 op: 159
    // SubProg main pc: 181 op: STARTLINE (58)

    /** main.e:162		elsif src_file >= 0 then*/
    // SubProg main pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 185 op: GREATEREQ_IFW (103)
    if (_36src_file_16557 < 0)
    goto L8; // [185] 225
    // SubProg main pc: 189 op: STARTLINE (58)

    /** main.e:163			main_path = known_files[$]*/
    // SubProg main pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 193 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _33006 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _33006 = 1;
    }
    // SubProg main pc: 196 op: RHS_SUBS_CHECK (92)
    DeRef(_36main_path_16556);
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _36main_path_16556 = (object)*(((s1_ptr)_2)->base + _33006);
    Ref(_36main_path_16556);
    // SubProg main pc: 200 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 202 op: STARTLINE (58)

    /** main.e:164			if length(main_path) = 0 then*/
    // SubProg main pc: 204 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 206 op: LENGTH (42)
    if (IS_SEQUENCE(_36main_path_16556)){
            _33008 = SEQ_PTR(_36main_path_16556)->length;
    }
    else {
        _33008 = 1;
    }
    // SubProg main pc: 209 op: EQUALS_IFW_I (121)
    if (_33008 != 0)
    goto L9; // [209] 224
    // SubProg main pc: 213 op: STARTLINE (58)

    /** main.e:165				main_path = '.' & SLASH*/
    // SubProg main pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 217 op: CONCAT (15)
    Concat((object_ptr)&_36main_path_16556, 46, 47);
    // SubProg main pc: 221 op: SEQUENCE_CHECK (97)
    // SubProg main pc: 223 op: NOP1 (159)
L9: // addr: 224 pc: 223 sub: 66315 op: 159
    // SubProg main pc: 224 op: NOP1 (159)
L8: // addr: 225 pc: 224 sub: 66315 op: 159
    // SubProg main pc: 225 op: NOP1 (159)
L7: // addr: 226 pc: 225 sub: 66315 op: 159
    // SubProg main pc: 226 op: STARTLINE (58)

    /** main.e:171		if TRANSLATE then*/
    // SubProg main pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 230 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
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
LA: // addr: 239 pc: 238 sub: 66315 op: 159
    // SubProg main pc: 239 op: STARTLINE (58)

    /** main.e:175		CheckPlatform()*/
    // SubProg main pc: 241 op: PROC (27)
    _2CheckPlatform();
    // SubProg main pc: 243 op: STARTLINE (58)

    /** main.e:177		InitSymTab()*/
    // SubProg main pc: 245 op: PROC (27)
    _54InitSymTab();
    // SubProg main pc: 247 op: STARTLINE (58)

    /** main.e:178		InitEmit()*/
    // SubProg main pc: 249 op: PROC (27)
    _47InitEmit();
    // SubProg main pc: 251 op: STARTLINE (58)

    /** main.e:179		InitLex()*/
    // SubProg main pc: 253 op: PROC (27)
    _62InitLex();
    // SubProg main pc: 255 op: STARTLINE (58)

    /** main.e:180		InitParser()*/
    // SubProg main pc: 257 op: PROC (27)
    _40InitParser();
    // SubProg main pc: 259 op: STARTLINE (58)

    /** main.e:184		eu_namespace()*/
    // SubProg main pc: 261 op: PROC (27)
    _62eu_namespace();
    // SubProg main pc: 263 op: STARTLINE (58)

    /** main.e:186		ifdef TRANSLATOR then*/
    // SubProg main pc: 265 op: STARTLINE (58)

    /** main.e:187			if keep and build_system_type = BUILD_DIRECT then*/
    // SubProg main pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 269 op: SC1_AND_IF (146)
    if (_58keep_42093 == 0) {
        goto LB; // [269] 338
    }
    // SubProg main pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 275 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 277 op: EQUALS (3)
    _33012 = (_56build_system_type_44889 == 3);
    // SubProg main pc: 281 op: NOP1 (159)
    // SubProg main pc: 282 op: IF (20)
    if (_33012 == 0)
    {
        DeRef(_33012);
        _33012 = NOVALUE;
        goto LB; // [282] 338
    }
    else{
        DeRef(_33012);
        _33012 = NOVALUE;
    }
    // SubProg main pc: 285 op: STARTLINE (58)

    /** main.e:188				if 0 and not quick_has_changed(known_files[$]) then*/
    // SubProg main pc: 287 op: SC1_AND_IF (146)
    if (0 == 0) {
        goto LC; // [287] 337
    }
    // SubProg main pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 293 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _33014 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _33014 = 1;
    }
    // SubProg main pc: 296 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _33015 = (object)*(((s1_ptr)_2)->base + _33014);
    // SubProg main pc: 300 op: PROC (27)
    Ref(_33015);
    _33016 = _56quick_has_changed(_33015);
    _33015 = NOVALUE;
    // SubProg main pc: 304 op: NOT (7)
    if (IS_ATOM_INT(_33016)) {
        _33017 = (_33016 == 0);
    }
    else {
        _33017 = unary_op(NOT, _33016);
    }
    DeRef(_33016);
    _33016 = NOVALUE;
    // SubProg main pc: 307 op: NOP1 (159)
    // SubProg main pc: 308 op: IF (20)
    if (_33017 == 0) {
        DeRef(_33017);
        _33017 = NOVALUE;
        goto LC; // [308] 337
    }
    else {
        if (!IS_ATOM_INT(_33017) && DBL_PTR(_33017)->dbl == 0.0){
            DeRef(_33017);
            _33017 = NOVALUE;
            goto LC; // [308] 337
        }
        DeRef(_33017);
        _33017 = NOVALUE;
    }
    DeRef(_33017);
    _33017 = NOVALUE;
    // SubProg main pc: 311 op: STARTLINE (58)

    /** main.e:189					build_direct(1, known_files[$])*/
    // SubProg main pc: 313 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 315 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _33018 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _33018 = 1;
    }
    // SubProg main pc: 318 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _33019 = (object)*(((s1_ptr)_2)->base + _33018);
    // SubProg main pc: 322 op: PROC (27)
    Ref(_33019);
    _56build_direct(1, _33019);
    _33019 = NOVALUE;
    // SubProg main pc: 326 op: STARTLINE (58)

    /** main.e:190					Cleanup(0)*/
    // SubProg main pc: 328 op: PROC (27)
    _50Cleanup(0);
    // SubProg main pc: 331 op: STARTLINE (58)

    /** main.e:191					return*/
    // SubProg main pc: 333 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: main

// block var argc_66317

// block var argv_66318
    DeRef(_argv_66318);
    DeRef(_33001);
    _33001 = NOVALUE;
    return;
    // SubProg main pc: 336 op: NOP1 (159)
LC: // addr: 337 pc: 336 sub: 66315 op: 159
    // SubProg main pc: 337 op: NOP1 (159)
LB: // addr: 338 pc: 337 sub: 66315 op: 159
    // SubProg main pc: 338 op: STARTLINE (58)

    /** main.e:197		main_file()*/
    // SubProg main pc: 340 op: PROC (27)
    _62main_file();
    // SubProg main pc: 342 op: STARTLINE (58)

    /** main.e:199		check_coverage()*/
    // SubProg main pc: 344 op: PROC (27)
    _51check_coverage();
    // SubProg main pc: 346 op: STARTLINE (58)

    /** main.e:201		parser()*/
    // SubProg main pc: 348 op: PROC (27)
    _40parser();
    // SubProg main pc: 350 op: STARTLINE (58)

    /** main.e:203		init_coverage()*/
    // SubProg main pc: 352 op: PROC (27)
    _51init_coverage();
    // SubProg main pc: 354 op: STARTLINE (58)

    /** main.e:206		if TRANSLATE then*/
    // SubProg main pc: 356 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 358 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto LD; // [358] 369
    }
    else{
    }
    // SubProg main pc: 361 op: STARTLINE (58)

    /** main.e:207			BackEnd(0) -- translate IL to C*/
    // SubProg main pc: 363 op: PROC (27)
    _2BackEnd(0);
    // SubProg main pc: 366 op: ELSE (23)
    goto LE; // [366] 456
    // SubProg main pc: 368 op: NOP1 (159)
LD: // addr: 369 pc: 368 sub: 66315 op: 159
    // SubProg main pc: 369 op: STARTLINE (58)

    /** main.e:209		elsif BIND then*/
    // SubProg main pc: 371 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 373 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto LF; // [373] 383
    }
    else{
    }
    // SubProg main pc: 376 op: STARTLINE (58)

    /** main.e:210			OutputIL()*/
    // SubProg main pc: 378 op: PROC (27)
    _2OutputIL();
    // SubProg main pc: 380 op: ELSE (23)
    goto LE; // [380] 456
    // SubProg main pc: 382 op: NOP1 (159)
LF: // addr: 383 pc: 382 sub: 66315 op: 159
    // SubProg main pc: 383 op: STARTLINE (58)

    /** main.e:212		elsif INTERPRET and not test_only then*/
    // SubProg main pc: 385 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 387 op: SC1_AND_IF (146)
    if (_36INTERPRET_16058 == 0) {
        goto L10; // [387] 455
    }
    // SubProg main pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 393 op: NOT (7)
    _33021 = (_36test_only_16448 == 0);
    // SubProg main pc: 396 op: NOP1 (159)
    // SubProg main pc: 397 op: IF (20)
    if (_33021 == 0)
    {
        DeRef(_33021);
        _33021 = NOVALUE;
        goto L10; // [397] 455
    }
    else{
        DeRef(_33021);
        _33021 = NOVALUE;
    }
    // SubProg main pc: 400 op: STARTLINE (58)

    /** main.e:213			ifdef not STDDEBUG then*/
    // SubProg main pc: 402 op: STARTLINE (58)

    /** main.e:214				BackEnd(0) -- execute IL using Euphoria-coded back-end*/
    // SubProg main pc: 404 op: PROC (27)
    _2BackEnd(0);
    // SubProg main pc: 407 op: STARTLINE (58)

    /** main.e:216			while repl do*/
    // SubProg main pc: 409 op: NOP2 (110)
    // SubProg main pc: 411 op: NOPWHILE (158)
    // SubProg main pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg main pc: 414 op: WHILE (47)
    // SubProg main pc: 454 op: NOP1 (159)
L10: // addr: 455 pc: 454 sub: 66315 op: 159
    // SubProg main pc: 455 op: NOP1 (159)
LE: // addr: 456 pc: 455 sub: 66315 op: 159
    // SubProg main pc: 456 op: STARTLINE (58)

    /** main.e:225		Cleanup(0) -- does warnings*/
    // SubProg main pc: 458 op: PROC (27)
    _50Cleanup(0);
    // SubProg main pc: 461 op: STARTLINE (58)

    /** main.e:226	end procedure*/
    // SubProg main pc: 463 op: RETURNP (29)

// Exiting block BLOCK: main

// block var argc_66317

// block var argv_66318
    DeRef(_argv_66318);
    DeRef(_33001);
    _33001 = NOVALUE;
    return;
    // SubProg main pc: 466 op: BADRETURNF (43)
    ;
}



// 0x4191E836
