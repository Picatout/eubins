// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _61set_qualified_fwd(object _fwd_25238)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_qualified_fwd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_25238)) {
        _1 = (object)(DBL_PTR(_fwd_25238)->dbl);
        DeRefDS(_fwd_25238);
        _fwd_25238 = _1;
    }
    // SubProg set_qualified_fwd pc: 3 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg set_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _61qualified_fwd_25235 = _fwd_25238;
    // SubProg set_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg set_qualified_fwd pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_qualified_fwd

// block var fwd_25238
    return;
    // SubProg set_qualified_fwd pc: 13 op: BADRETURNF (43)
    ;
}


object _61get_qualified_fwd()
{
    object _fwd_25241 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qualified_fwd pc: 1 op: STARTLINE (58)

    /** scanner.e:108		integer fwd = qualified_fwd*/
    // SubProg get_qualified_fwd pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _fwd_25241 = _61qualified_fwd_25235;
    // SubProg get_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:109		set_qualified_fwd( -1 )*/
    // SubProg get_qualified_fwd pc: 10 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg get_qualified_fwd pc: 12 op: ASSIGN_I (113)
    _61qualified_fwd_25235 = -1;
    // SubProg get_qualified_fwd pc: 15 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg get_qualified_fwd pc: 17 op: ELSE (23)
    goto L1; // [17] 20
    // SubProg get_qualified_fwd pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 25239 op: 159
    // SubProg get_qualified_fwd pc: 20 op: STARTLINE (58)

    /** scanner.e:110		return fwd*/
    // SubProg get_qualified_fwd pc: 22 op: RETURNF (28)

// Exiting block BLOCK: get_qualified_fwd
    return _fwd_25241;
    // SubProg get_qualified_fwd pc: 26 op: BADRETURNF (43)
    ;
}


void _61InitLex()
{
// skipping _14242  name type: 0
    object _14241 = NOVALUE; // 25295 14241
    object _14240 = NOVALUE; // 25294 14240
    object _14239 = NOVALUE; // 25291 14239
// skipping _14238  name type: 0
    object _14237 = NOVALUE; // 25257 14237
    object _14236 = NOVALUE; // 25256 14236
    object _14235 = NOVALUE; // 25254 14235
    object _14234 = NOVALUE; // 25253 14234
// skipping _14233  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitLex pc: 1 op: STARTLINE (58)

    /** scanner.e:117		gline_number = 0*/
    // SubProg InitLex pc: 3 op: ASSIGN (18)
    _5gline_number_12482 = 0;
    // SubProg InitLex pc: 6 op: INTEGER_CHECK (96)
    // SubProg InitLex pc: 8 op: STARTLINE (58)

    /** scanner.e:118		line_number = 0*/
    // SubProg InitLex pc: 10 op: ASSIGN (18)
    _5line_number_12478 = 0;
    // SubProg InitLex pc: 13 op: INTEGER_CHECK (96)
    // SubProg InitLex pc: 15 op: STARTLINE (58)

    /** scanner.e:119		IncludeStk = {}*/
    // SubProg InitLex pc: 17 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_61IncludeStk_25212);
    _61IncludeStk_25212 = _5;
    // SubProg InitLex pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg InitLex pc: 22 op: STARTLINE (58)

    /** scanner.e:120		char_class = repeat(ILLEGAL_CHAR, 255)  -- we screen out the 0 character*/
    // SubProg InitLex pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 26 op: REPEAT (32)
    DeRefi(_61char_class_25210);
    _61char_class_25210 = Repeat(-20, 255);
    // SubProg InitLex pc: 30 op: STARTLINE (58)

    /** scanner.e:122		char_class['0'..'9'] = DIGIT*/
    // SubProg InitLex pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 36 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_61char_class_25210;
    AssignSlice(48, 57, -7);
    // SubProg InitLex pc: 41 op: STARTLINE (58)

    /** scanner.e:123		char_class['_']      = DIGIT*/
    // SubProg InitLex pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 47 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 95);
    *(intptr_t *)_2 = -7;
    // SubProg InitLex pc: 51 op: STARTLINE (58)

    /** scanner.e:124		char_class['a'..'z'] = LETTER*/
    // SubProg InitLex pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 57 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_61char_class_25210;
    AssignSlice(97, 122, -2);
    // SubProg InitLex pc: 62 op: STARTLINE (58)

    /** scanner.e:125		char_class['A'..'Z'] = LETTER*/
    // SubProg InitLex pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 68 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_61char_class_25210;
    AssignSlice(65, 90, -2);
    // SubProg InitLex pc: 73 op: STARTLINE (58)

    /** scanner.e:126		char_class[KEYWORD_BASE+1..KEYWORD_BASE+NUM_KEYWORDS] = KEYWORD*/
    // SubProg InitLex pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 77 op: PLUS1 (93)
    _14234 = 129;
    // SubProg InitLex pc: 81 op: PLUS (11)
    _14235 = 152;
    // SubProg InitLex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 87 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_61char_class_25210;
    AssignSlice(129, 152, -10);
    _14234 = NOVALUE;
    _14235 = NOVALUE;
    // SubProg InitLex pc: 92 op: STARTLINE (58)

    /** scanner.e:127		char_class[BUILTIN_BASE+1..BUILTIN_BASE+NUM_BUILTINS] = BUILTIN*/
    // SubProg InitLex pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 96 op: PLUS1 (93)
    _14236 = 171;
    // SubProg InitLex pc: 100 op: PLUS (11)
    _14237 = 234;
    // SubProg InitLex pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 106 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_61char_class_25210;
    AssignSlice(171, 234, -9);
    _14236 = NOVALUE;
    _14237 = NOVALUE;
    // SubProg InitLex pc: 111 op: STARTLINE (58)

    /** scanner.e:129		char_class[' '] = BLANK*/
    // SubProg InitLex pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 117 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = -8;
    // SubProg InitLex pc: 121 op: STARTLINE (58)

    /** scanner.e:130		char_class['\t'] = BLANK*/
    // SubProg InitLex pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 127 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    *(intptr_t *)_2 = -8;
    // SubProg InitLex pc: 131 op: STARTLINE (58)

    /** scanner.e:131		char_class['+'] = PLUS*/
    // SubProg InitLex pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 137 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 43);
    *(intptr_t *)_2 = 11;
    // SubProg InitLex pc: 141 op: STARTLINE (58)

    /** scanner.e:132		char_class['-'] = MINUS*/
    // SubProg InitLex pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 147 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 45);
    *(intptr_t *)_2 = 10;
    // SubProg InitLex pc: 151 op: STARTLINE (58)

    /** scanner.e:133		char_class['*'] = res:MULTIPLY*/
    // SubProg InitLex pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 155 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 42);
    *(intptr_t *)_2 = 13;
    // SubProg InitLex pc: 159 op: STARTLINE (58)

    /** scanner.e:134		char_class['/'] = res:DIVIDE*/
    // SubProg InitLex pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 163 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 47);
    *(intptr_t *)_2 = 14;
    // SubProg InitLex pc: 167 op: STARTLINE (58)

    /** scanner.e:135		char_class['='] = EQUALS*/
    // SubProg InitLex pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 173 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 61);
    *(intptr_t *)_2 = 3;
    // SubProg InitLex pc: 177 op: STARTLINE (58)

    /** scanner.e:136		char_class['<'] = LESS*/
    // SubProg InitLex pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 183 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 60);
    *(intptr_t *)_2 = 1;
    // SubProg InitLex pc: 187 op: STARTLINE (58)

    /** scanner.e:137		char_class['>'] = GREATER*/
    // SubProg InitLex pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 62);
    *(intptr_t *)_2 = 6;
    // SubProg InitLex pc: 197 op: STARTLINE (58)

    /** scanner.e:138		char_class['\''] = SINGLE_QUOTE*/
    // SubProg InitLex pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 203 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 39);
    *(intptr_t *)_2 = -5;
    // SubProg InitLex pc: 207 op: STARTLINE (58)

    /** scanner.e:139		char_class['"'] = DOUBLE_QUOTE*/
    // SubProg InitLex pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 34);
    *(intptr_t *)_2 = -4;
    // SubProg InitLex pc: 217 op: STARTLINE (58)

    /** scanner.e:140		char_class['`'] = BACK_QUOTE*/
    // SubProg InitLex pc: 219 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 223 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 96);
    *(intptr_t *)_2 = -12;
    // SubProg InitLex pc: 227 op: STARTLINE (58)

    /** scanner.e:141		char_class['.'] = DOT*/
    // SubProg InitLex pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 233 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 46);
    *(intptr_t *)_2 = -3;
    // SubProg InitLex pc: 237 op: STARTLINE (58)

    /** scanner.e:142		char_class[':'] = COLON*/
    // SubProg InitLex pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 241 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 243 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 58);
    *(intptr_t *)_2 = -23;
    // SubProg InitLex pc: 247 op: STARTLINE (58)

    /** scanner.e:143		char_class['\r'] = NEWLINE*/
    // SubProg InitLex pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 253 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    *(intptr_t *)_2 = -6;
    // SubProg InitLex pc: 257 op: STARTLINE (58)

    /** scanner.e:144		char_class['\n'] = NEWLINE*/
    // SubProg InitLex pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 263 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    *(intptr_t *)_2 = -6;
    // SubProg InitLex pc: 267 op: STARTLINE (58)

    /** scanner.e:145		char_class['!'] = BANG*/
    // SubProg InitLex pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 273 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 33);
    *(intptr_t *)_2 = -1;
    // SubProg InitLex pc: 277 op: STARTLINE (58)

    /** scanner.e:146		char_class['{'] = LEFT_BRACE*/
    // SubProg InitLex pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 283 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 123);
    *(intptr_t *)_2 = -24;
    // SubProg InitLex pc: 287 op: STARTLINE (58)

    /** scanner.e:147		char_class['}'] = RIGHT_BRACE*/
    // SubProg InitLex pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 293 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 125);
    *(intptr_t *)_2 = -25;
    // SubProg InitLex pc: 297 op: STARTLINE (58)

    /** scanner.e:148		char_class['('] = LEFT_ROUND*/
    // SubProg InitLex pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 303 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 40);
    *(intptr_t *)_2 = -26;
    // SubProg InitLex pc: 307 op: STARTLINE (58)

    /** scanner.e:149		char_class[')'] = RIGHT_ROUND*/
    // SubProg InitLex pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 313 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 41);
    *(intptr_t *)_2 = -27;
    // SubProg InitLex pc: 317 op: STARTLINE (58)

    /** scanner.e:150		char_class['['] = LEFT_SQUARE*/
    // SubProg InitLex pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 323 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 91);
    *(intptr_t *)_2 = -28;
    // SubProg InitLex pc: 327 op: STARTLINE (58)

    /** scanner.e:151		char_class[']'] = RIGHT_SQUARE*/
    // SubProg InitLex pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 333 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 93);
    *(intptr_t *)_2 = -29;
    // SubProg InitLex pc: 337 op: STARTLINE (58)

    /** scanner.e:152		char_class['$'] = DOLLAR*/
    // SubProg InitLex pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 343 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = -22;
    // SubProg InitLex pc: 347 op: STARTLINE (58)

    /** scanner.e:153		char_class[','] = COMMA*/
    // SubProg InitLex pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 353 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 44);
    *(intptr_t *)_2 = -30;
    // SubProg InitLex pc: 357 op: STARTLINE (58)

    /** scanner.e:154		char_class['&'] = res:CONCAT*/
    // SubProg InitLex pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 361 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 38);
    *(intptr_t *)_2 = 15;
    // SubProg InitLex pc: 365 op: STARTLINE (58)

    /** scanner.e:155		char_class['?'] = QUESTION_MARK*/
    // SubProg InitLex pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 371 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 63);
    *(intptr_t *)_2 = -31;
    // SubProg InitLex pc: 375 op: STARTLINE (58)

    /** scanner.e:156		char_class['#'] = NUMBER_SIGN*/
    // SubProg InitLex pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 381 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 35);
    *(intptr_t *)_2 = -11;
    // SubProg InitLex pc: 385 op: STARTLINE (58)

    /** scanner.e:159		char_class[END_OF_FILE_CHAR] = END_OF_FILE*/
    // SubProg InitLex pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 393 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _2 = (object)(((s1_ptr)_2)->base + 26);
    *(intptr_t *)_2 = -21;
    // SubProg InitLex pc: 397 op: STARTLINE (58)

    /** scanner.e:162		id_char = repeat(FALSE, 255)*/
    // SubProg InitLex pc: 399 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 401 op: REPEAT (32)
    DeRefi(_61id_char_25211);
    _61id_char_25211 = Repeat(_6FALSE_363, 255);
    // SubProg InitLex pc: 405 op: STARTLINE (58)

    /** scanner.e:163		for i = 1 to 255 do*/
    // SubProg InitLex pc: 407 op: FOR_I (125)
    {
        object _i_25289;
        _i_25289 = 1;
L1: // addr: 414 pc: 407 sub: 25243 op: 125
        if (_i_25289 > 255){
            goto L2; // [407] 456
        }
        // SubProg InitLex pc: 414 op: STARTLINE (58)

        /** scanner.e:164			if find(char_class[i], {LETTER, DIGIT}) then*/
        // SubProg InitLex pc: 416 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 418 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_61char_class_25210);
        _14239 = (object)*(((s1_ptr)_2)->base + _i_25289);
        // SubProg InitLex pc: 422 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 424 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 426 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = -7;
        _14240 = MAKE_SEQ(_1);
        // SubProg InitLex pc: 430 op: FIND_FROM (176)
        _14241 = find_from(_14239, _14240, 1);
        _14239 = NOVALUE;
        DeRefDS(_14240);
        _14240 = NOVALUE;
        // SubProg InitLex pc: 435 op: IF (20)
        if (_14241 == 0)
        {
            _14241 = NOVALUE;
            goto L3; // [435] 449
        }
        else{
            _14241 = NOVALUE;
        }
        // SubProg InitLex pc: 438 op: STARTLINE (58)

        /** scanner.e:165				id_char[i] = TRUE*/
        // SubProg InitLex pc: 440 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 444 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_61id_char_25211);
        _2 = (object)(((s1_ptr)_2)->base + _i_25289);
        *(intptr_t *)_2 = _6TRUE_365;
        // SubProg InitLex pc: 448 op: NOP1 (159)
L3: // addr: 449 pc: 448 sub: 25243 op: 159
        // SubProg InitLex pc: 449 op: STARTLINE (58)

        /** scanner.e:167		end for*/
        // SubProg InitLex pc: 451 op: ENDFOR_INT_UP1 (54)
        _i_25289 = _i_25289 + 1;
        goto L1; // [451] 414
L2: // addr: 456 pc: 451 sub: 25243 op: 54
        ;
    }
    // SubProg InitLex pc: 456 op: STARTLINE (58)

    /** scanner.e:169		default_namespaces = {0}*/
    // SubProg InitLex pc: 458 op: RIGHT_BRACE_N (31)
    _0 = _61default_namespaces_25209;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _61default_namespaces_25209 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg InitLex pc: 462 op: STARTLINE (58)

    /** scanner.e:170	end procedure*/
    // SubProg InitLex pc: 464 op: RETURNP (29)

// Exiting block BLOCK: InitLex
    return;
    // SubProg InitLex pc: 467 op: BADRETURNF (43)
    ;
}


void _61ResetTP()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ResetTP pc: 1 op: STARTLINE (58)

    /** scanner.e:174		OpTrace = FALSE*/
    // SubProg ResetTP pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 5 op: ASSIGN (18)
    _5OpTrace_12547 = _6FALSE_363;
    // SubProg ResetTP pc: 8 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 10 op: STARTLINE (58)

    /** scanner.e:175		OpProfileStatement = FALSE*/
    // SubProg ResetTP pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 14 op: ASSIGN (18)
    _5OpProfileStatement_12549 = _6FALSE_363;
    // SubProg ResetTP pc: 17 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 19 op: STARTLINE (58)

    /** scanner.e:176		OpProfileTime = FALSE*/
    // SubProg ResetTP pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 23 op: ASSIGN (18)
    _5OpProfileTime_12550 = _6FALSE_363;
    // SubProg ResetTP pc: 26 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 28 op: STARTLINE (58)

    /** scanner.e:177		AnyStatementProfile = FALSE*/
    // SubProg ResetTP pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 32 op: ASSIGN (18)
    _7AnyStatementProfile_11413 = _6FALSE_363;
    // SubProg ResetTP pc: 35 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 37 op: STARTLINE (58)

    /** scanner.e:178		AnyTimeProfile = FALSE*/
    // SubProg ResetTP pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 41 op: ASSIGN (18)
    _7AnyTimeProfile_11412 = _6FALSE_363;
    // SubProg ResetTP pc: 44 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 46 op: STARTLINE (58)

    /** scanner.e:179	end procedure*/
    // SubProg ResetTP pc: 48 op: RETURNP (29)

// Exiting block BLOCK: ResetTP
    return;
    // SubProg ResetTP pc: 51 op: BADRETURNF (43)
    ;
}


object _61pack_source(object _src_25319)
{
    object _start_25320 = NOVALUE;
    object _14265 = NOVALUE; // 25350 14265
    object _14264 = NOVALUE; // 25349 14264
    object _14263 = NOVALUE; // 25348 14263
    object _14262 = NOVALUE; // 25347 14262
// skipping _14261  name type: 0
    object _14260 = NOVALUE; // 25344 14260
// skipping _14259  name type: 0
    object _14258 = NOVALUE; // 25342 14258
    object _14257 = NOVALUE; // 25341 14257
    object _14256 = NOVALUE; // 25340 14256
// skipping _14255  name type: 0
// skipping _14254  name type: 0
// skipping _14253  name type: 0
    object _14252 = NOVALUE; // 25332 14252
// skipping _14251  name type: 0
    object _14250 = NOVALUE; // 25329 14250
    object _14249 = NOVALUE; // 25328 14249
// skipping _14248  name type: 0
// skipping _14247  name type: 0
    object _14246 = NOVALUE; // 25324 14246
    object _14245 = NOVALUE; // 25322 14245
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pack_source pc: 1 op: STARTLINE (58)

    /** scanner.e:197		if equal(src, 0) then*/
    // SubProg pack_source pc: 3 op: EQUAL (153)
    if (_src_25319 == 0)
    _14245 = 1;
    else if (IS_ATOM_INT(_src_25319) && IS_ATOM_INT(0))
    _14245 = 0;
    else
    _14245 = (compare(_src_25319, 0) == 0);
    // SubProg pack_source pc: 7 op: IF (20)
    if (_14245 == 0)
    {
        _14245 = NOVALUE;
        goto L1; // [7] 17
    }
    else{
        _14245 = NOVALUE;
    }
    // SubProg pack_source pc: 10 op: STARTLINE (58)

    /** scanner.e:198			return 0*/
    // SubProg pack_source pc: 12 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25319
    DeRef(_src_25319);

// block var start_25320
    return 0;
    // SubProg pack_source pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 25317 op: 159
    // SubProg pack_source pc: 17 op: STARTLINE (58)

    /** scanner.e:201		if length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25319)){
            _14246 = SEQ_PTR(_src_25319)->length;
    }
    else {
        _14246 = 1;
    }
    // SubProg pack_source pc: 22 op: GREATEREQ_IFW_I (120)
    if (_14246 < 10000)
    goto L2; // [22] 34
    // SubProg pack_source pc: 26 op: STARTLINE (58)

    /** scanner.e:202			src = src[1..100] -- enough for trace or profile display*/
    // SubProg pack_source pc: 28 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_src_25319;
    RHS_Slice(_src_25319, 1, 100);
    // SubProg pack_source pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 25317 op: 159
    // SubProg pack_source pc: 34 op: STARTLINE (58)

    /** scanner.e:205		if current_source_next + length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25319)){
            _14249 = SEQ_PTR(_src_25319)->length;
    }
    else {
        _14249 = 1;
    }
    // SubProg pack_source pc: 41 op: PLUS (11)
    _14250 = _61current_source_next_25315 + _14249;
    if ((object)((uintptr_t)_14250 + (uintptr_t)HIGH_BITS) >= 0){
        _14250 = NewDouble((eudouble)_14250);
    }
    _14249 = NOVALUE;
    // SubProg pack_source pc: 45 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _14250, 10000)){
        DeRef(_14250);
        _14250 = NOVALUE;
        goto L3; // [45] 94
    }
    DeRef(_14250);
    _14250 = NOVALUE;
    // SubProg pack_source pc: 49 op: STARTLINE (58)

    /** scanner.e:207			current_source = allocate(SOURCE_CHUNK + LINE_BUFLEN)*/
    // SubProg pack_source pc: 51 op: PLUS (11)
    _14252 = 10400;
    // SubProg pack_source pc: 55 op: PROC (27)
    _0 = _9allocate(10400, 0);
    DeRef(_61current_source_25314);
    _61current_source_25314 = _0;
    _14252 = NOVALUE;
    // SubProg pack_source pc: 60 op: STARTLINE (58)

    /** scanner.e:208			if current_source = 0 then*/
    // SubProg pack_source pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _61current_source_25314, 0)){
        goto L4; // [64] 76
    }
    // SubProg pack_source pc: 68 op: STARTLINE (58)

    /** scanner.e:209				CompileErr(123)*/
    // SubProg pack_source pc: 70 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(123, _21958, 0);
    // SubProg pack_source pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 25317 op: 159
    // SubProg pack_source pc: 76 op: STARTLINE (58)

    /** scanner.e:211			all_source = append(all_source, current_source)*/
    // SubProg pack_source pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 82 op: APPEND (35)
    Ref(_61current_source_25314);
    Append(&_7all_source_11414, _7all_source_11414, _61current_source_25314);
    // SubProg pack_source pc: 86 op: SEQUENCE_CHECK (97)
    // SubProg pack_source pc: 88 op: STARTLINE (58)

    /** scanner.e:213			current_source_next = 1*/
    // SubProg pack_source pc: 90 op: ASSIGN_I (113)
    _61current_source_next_25315 = 1;
    // SubProg pack_source pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 25317 op: 159
    // SubProg pack_source pc: 94 op: STARTLINE (58)

    /** scanner.e:216		start = current_source_next*/
    // SubProg pack_source pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 98 op: ASSIGN_I (113)
    _start_25320 = _61current_source_next_25315;
    // SubProg pack_source pc: 101 op: STARTLINE (58)

    /** scanner.e:217		poke(current_source+current_source_next, src)*/
    // SubProg pack_source pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 107 op: PLUS (11)
    if (IS_ATOM_INT(_61current_source_25314)) {
        _14256 = _61current_source_25314 + _61current_source_next_25315;
        if ((object)((uintptr_t)_14256 + (uintptr_t)HIGH_BITS) >= 0){
            _14256 = NewDouble((eudouble)_14256);
        }
    }
    else {
        _14256 = NewDouble(DBL_PTR(_61current_source_25314)->dbl + (eudouble)_61current_source_next_25315);
    }
    // SubProg pack_source pc: 111 op: POKE (128)
    if (IS_ATOM_INT(_14256)){
        poke_addr = (uint8_t *)_14256;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14256)->dbl);
    }
    if (IS_ATOM_INT(_src_25319)) {
        *poke_addr = (uint8_t)_src_25319;
    }
    else if (IS_ATOM(_src_25319)) {
        *poke_addr = (uint8_t)DBL_PTR(_src_25319)->dbl;
    }
    else {
        _1 = (object)SEQ_PTR(_src_25319);
        _1 = (object)((s1_ptr)_1)->base;
        while (1) {
            _1 += sizeof(object);
            _2 = *((object *)_1);
            if (IS_ATOM_INT(_2)) {
                *poke_addr++ = (uint8_t)_2;
            }
            else if (_2 == NOVALUE) {
                break;
            }
            else {
                *poke_addr++ = (uint8_t)DBL_PTR(_2)->dbl;
            }
        }
    }
    DeRef(_14256);
    _14256 = NOVALUE;
    // SubProg pack_source pc: 114 op: STARTLINE (58)

    /** scanner.e:218		current_source_next += length(src)-1*/
    // SubProg pack_source pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 118 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25319)){
            _14257 = SEQ_PTR(_src_25319)->length;
    }
    else {
        _14257 = 1;
    }
    // SubProg pack_source pc: 121 op: MINUS (10)
    _14258 = _14257 - 1;
    _14257 = NOVALUE;
    // SubProg pack_source pc: 125 op: PLUS (11)
    _61current_source_next_25315 = _61current_source_next_25315 + _14258;
    _14258 = NOVALUE;
    // SubProg pack_source pc: 131 op: STARTLINE (58)

    /** scanner.e:219		poke(current_source+current_source_next, 0) -- overwrite \n*/
    // SubProg pack_source pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 137 op: PLUS (11)
    if (IS_ATOM_INT(_61current_source_25314)) {
        _14260 = _61current_source_25314 + _61current_source_next_25315;
        if ((object)((uintptr_t)_14260 + (uintptr_t)HIGH_BITS) >= 0){
            _14260 = NewDouble((eudouble)_14260);
        }
    }
    else {
        _14260 = NewDouble(DBL_PTR(_61current_source_25314)->dbl + (eudouble)_61current_source_next_25315);
    }
    // SubProg pack_source pc: 141 op: POKE (128)
    if (IS_ATOM_INT(_14260)){
        poke_addr = (uint8_t *)_14260;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14260)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_14260);
    _14260 = NOVALUE;
    // SubProg pack_source pc: 144 op: STARTLINE (58)

    /** scanner.e:220		current_source_next += 1*/
    // SubProg pack_source pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 148 op: PLUS1_I (117)
    _61current_source_next_25315 = _61current_source_next_25315 + 1;
    // SubProg pack_source pc: 152 op: STARTLINE (58)

    /** scanner.e:221		return start + SOURCE_CHUNK * (length(all_source)-1)*/
    // SubProg pack_source pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 156 op: LENGTH (42)
    if (IS_SEQUENCE(_7all_source_11414)){
            _14262 = SEQ_PTR(_7all_source_11414)->length;
    }
    else {
        _14262 = 1;
    }
    // SubProg pack_source pc: 159 op: MINUS (10)
    _14263 = _14262 - 1;
    _14262 = NOVALUE;
    // SubProg pack_source pc: 163 op: MULTIPLY (13)
    if (_14263 <= INT15){
        _14264 = 10000 * _14263;
    }
    else{
        _14264 = NewDouble(10000 * (eudouble)_14263);
    }
    _14263 = NOVALUE;
    // SubProg pack_source pc: 167 op: PLUS (11)
    if (IS_ATOM_INT(_14264)) {
        _14265 = _start_25320 + _14264;
        if ((object)((uintptr_t)_14265 + (uintptr_t)HIGH_BITS) >= 0){
            _14265 = NewDouble((eudouble)_14265);
        }
    }
    else {
        _14265 = NewDouble((eudouble)_start_25320 + DBL_PTR(_14264)->dbl);
    }
    DeRef(_14264);
    _14264 = NOVALUE;
    // SubProg pack_source pc: 171 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25319
    DeRef(_src_25319);

// block var start_25320
    return _14265;
    // SubProg pack_source pc: 175 op: BADRETURNF (43)
    ;
}


object _61fetch_line(object _start_25353)
{
    object _line_25354 = NOVALUE;
    object _memdata_25355 = NOVALUE;
    object _c_25356 = NOVALUE;
    object _chunk_25357 = NOVALUE;
    object _p_25358 = NOVALUE;
    object _n_25359 = NOVALUE;
    object _m_25360 = NOVALUE;
// skipping _14291  name type: 0
    object _14290 = NOVALUE; // 25392 14290
    object _14289 = NOVALUE; // 25391 14289
// skipping _14288  name type: 0
    object _14287 = NOVALUE; // 25389 14287
// skipping _14286  name type: 0
    object _14285 = NOVALUE; // 25387 14285
// skipping _14284  name type: 0
// skipping _14283  name type: 0
// skipping _14282  name type: 0
// skipping _14281  name type: 0
// skipping _14280  name type: 0
    object _14279 = NOVALUE; // 25379 14279
// skipping _14278  name type: 0
    object _14277 = NOVALUE; // 25377 14277
// skipping _14276  name type: 0
// skipping _14275  name type: 0
// skipping _14274  name type: 0
    object _14273 = NOVALUE; // 25370 14273
// skipping _14272  name type: 0
    object _14271 = NOVALUE; // 25368 14271
// skipping _14270  name type: 0
// skipping _14269  name type: 0
    object _14268 = NOVALUE; // 25364 14268
// skipping _14267  name type: 0
// skipping _14266  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fetch_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg fetch_line pc: 3 op: STARTLINE (58)

    /** scanner.e:234		if start = 0 then*/
    // SubProg fetch_line pc: 5 op: EQUALS_IFW_I (121)
    if (_start_25353 != 0)
    goto L1; // [5] 16
    // SubProg fetch_line pc: 9 op: STARTLINE (58)

    /** scanner.e:235			return ""*/
    // SubProg fetch_line pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: fetch_line

// block var start_25353

// block var line_25354
    DeRef(_line_25354);

// block var memdata_25355
    DeRefi(_memdata_25355);

// block var c_25356

// block var chunk_25357

// block var p_25358
    DeRef(_p_25358);

// block var n_25359

// block var m_25360
    return _5;
    // SubProg fetch_line pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 25351 op: 159
    // SubProg fetch_line pc: 16 op: STARTLINE (58)

    /** scanner.e:237		line = repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 18 op: REPEAT (32)
    DeRef(_line_25354);
    _line_25354 = Repeat(0, 400);
    // SubProg fetch_line pc: 22 op: STARTLINE (58)

    /** scanner.e:238		n = 0*/
    // SubProg fetch_line pc: 24 op: ASSIGN_I (113)
    _n_25359 = 0;
    // SubProg fetch_line pc: 27 op: STARTLINE (58)

    /** scanner.e:239		chunk = 1+floor(start / SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 29 op: FLOOR_DIV (63)
    if (10000 > 0 && _start_25353 >= 0) {
        _14268 = _start_25353 / 10000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_start_25353 / (eudouble)10000);
        _14268 = (object)temp_dbl;
    }
    // SubProg fetch_line pc: 33 op: PLUS1_I (117)
    _chunk_25357 = _14268 + 1;
    _14268 = NOVALUE;
    // SubProg fetch_line pc: 37 op: STARTLINE (58)

    /** scanner.e:240		start = remainder(start, SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 39 op: REMAINDER (71)
    _start_25353 = (_start_25353 % 10000);
    // SubProg fetch_line pc: 43 op: STARTLINE (58)

    /** scanner.e:241		p = all_source[chunk] + start*/
    // SubProg fetch_line pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7all_source_11414);
    _14271 = (object)*(((s1_ptr)_2)->base + _chunk_25357);
    // SubProg fetch_line pc: 51 op: PLUS (11)
    DeRef(_p_25358);
    if (IS_ATOM_INT(_14271)) {
        _p_25358 = _14271 + _start_25353;
        if ((object)((uintptr_t)_p_25358 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25358 = NewDouble((eudouble)_p_25358);
        }
    }
    else {
        _p_25358 = NewDouble(DBL_PTR(_14271)->dbl + (eudouble)_start_25353);
    }
    _14271 = NOVALUE;
    // SubProg fetch_line pc: 55 op: STARTLINE (58)

    /** scanner.e:242		memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 57 op: RIGHT_BRACE_2 (85)
    Ref(_p_25358);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25358;
    ((intptr_t *)_2)[2] = 400;
    _14273 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 61 op: PEEK (127)
    DeRefi(_memdata_25355);
    _1 = (object)SEQ_PTR(_14273);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25355 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14273);
    _14273 = NOVALUE;
    // SubProg fetch_line pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 66 op: STARTLINE (58)

    /** scanner.e:243		p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 68 op: PLUS (11)
    _0 = _p_25358;
    if (IS_ATOM_INT(_p_25358)) {
        _p_25358 = _p_25358 + 400;
        if ((object)((uintptr_t)_p_25358 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25358 = NewDouble((eudouble)_p_25358);
        }
    }
    else {
        _p_25358 = NewDouble(DBL_PTR(_p_25358)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 72 op: STARTLINE (58)

    /** scanner.e:244		m = 0*/
    // SubProg fetch_line pc: 74 op: ASSIGN_I (113)
    _m_25360 = 0;
    // SubProg fetch_line pc: 77 op: STARTLINE (58)

    /** scanner.e:245		while TRUE do*/
    // SubProg fetch_line pc: 79 op: NOP2 (110)
    // SubProg fetch_line pc: 81 op: NOPWHILE (158)
L2: // addr: 82 pc: 81 sub: 25351 op: 158
    // SubProg fetch_line pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 84 op: WHILE (47)
    if (_6TRUE_365 == 0)
    {
        goto L3; // [84] 179
    }
    else{
    }
    // SubProg fetch_line pc: 87 op: STARTLINE (58)

    /** scanner.e:246			m += 1*/
    // SubProg fetch_line pc: 89 op: PLUS1_I (117)
    _m_25360 = _m_25360 + 1;
    // SubProg fetch_line pc: 93 op: STARTLINE (58)

    /** scanner.e:247			if m > length(memdata) then*/
    // SubProg fetch_line pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_memdata_25355)){
            _14277 = SEQ_PTR(_memdata_25355)->length;
    }
    else {
        _14277 = 1;
    }
    // SubProg fetch_line pc: 98 op: GREATER_IFW_I (124)
    if (_m_25360 <= _14277)
    goto L4; // [98] 125
    // SubProg fetch_line pc: 102 op: STARTLINE (58)

    /** scanner.e:248				memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 104 op: RIGHT_BRACE_2 (85)
    Ref(_p_25358);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25358;
    ((intptr_t *)_2)[2] = 400;
    _14279 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 108 op: PEEK (127)
    DeRefDSi(_memdata_25355);
    _1 = (object)SEQ_PTR(_14279);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25355 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14279);
    _14279 = NOVALUE;
    // SubProg fetch_line pc: 111 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 113 op: STARTLINE (58)

    /** scanner.e:249				p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 115 op: PLUS (11)
    _0 = _p_25358;
    if (IS_ATOM_INT(_p_25358)) {
        _p_25358 = _p_25358 + 400;
        if ((object)((uintptr_t)_p_25358 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25358 = NewDouble((eudouble)_p_25358);
        }
    }
    else {
        _p_25358 = NewDouble(DBL_PTR(_p_25358)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 119 op: STARTLINE (58)

    /** scanner.e:250				m = 1*/
    // SubProg fetch_line pc: 121 op: ASSIGN_I (113)
    _m_25360 = 1;
    // SubProg fetch_line pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 25351 op: 159
    // SubProg fetch_line pc: 125 op: STARTLINE (58)

    /** scanner.e:252			c = memdata[m]*/
    // SubProg fetch_line pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_memdata_25355);
    _c_25356 = (object)*(((s1_ptr)_2)->base + _m_25360);
    // SubProg fetch_line pc: 131 op: STARTLINE (58)

    /** scanner.e:253			if c = 0 then*/
    // SubProg fetch_line pc: 133 op: EQUALS_IFW_I (121)
    if (_c_25356 != 0)
    goto L5; // [133] 142
    // SubProg fetch_line pc: 137 op: STARTLINE (58)

    /** scanner.e:254				exit*/
    // SubProg fetch_line pc: 139 op: EXIT (61)
    goto L3; // [139] 179
    // SubProg fetch_line pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 25351 op: 159
    // SubProg fetch_line pc: 142 op: STARTLINE (58)

    /** scanner.e:256			n += 1*/
    // SubProg fetch_line pc: 144 op: PLUS1_I (117)
    _n_25359 = _n_25359 + 1;
    // SubProg fetch_line pc: 148 op: STARTLINE (58)

    /** scanner.e:257			if n > length(line) then*/
    // SubProg fetch_line pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25354)){
            _14285 = SEQ_PTR(_line_25354)->length;
    }
    else {
        _14285 = 1;
    }
    // SubProg fetch_line pc: 153 op: GREATER_IFW_I (124)
    if (_n_25359 <= _14285)
    goto L6; // [153] 168
    // SubProg fetch_line pc: 157 op: STARTLINE (58)

    /** scanner.e:258				line &= repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 159 op: REPEAT (32)
    _14287 = Repeat(0, 400);
    // SubProg fetch_line pc: 163 op: CONCAT (15)
    Concat((object_ptr)&_line_25354, _line_25354, _14287);
    DeRefDS(_14287);
    _14287 = NOVALUE;
    // SubProg fetch_line pc: 167 op: NOP1 (159)
L6: // addr: 168 pc: 167 sub: 25351 op: 159
    // SubProg fetch_line pc: 168 op: STARTLINE (58)

    /** scanner.e:260			line[n] = c*/
    // SubProg fetch_line pc: 170 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_line_25354);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _line_25354 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_25359);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _c_25356;
    DeRef(_1);
    // SubProg fetch_line pc: 174 op: STARTLINE (58)

    /** scanner.e:261		end while*/
    // SubProg fetch_line pc: 176 op: ENDWHILE (22)
    goto L2; // [176] 82
    // SubProg fetch_line pc: 178 op: NOP1 (159)
L3: // addr: 179 pc: 178 sub: 25351 op: 159
    // SubProg fetch_line pc: 179 op: STARTLINE (58)

    /** scanner.e:262		line = remove( line, n+1, length( line ) )*/
    // SubProg fetch_line pc: 181 op: PLUS1 (93)
    _14289 = _n_25359 + 1;
    if (_14289 > MAXINT){
        _14289 = NewDouble((eudouble)_14289);
    }
    // SubProg fetch_line pc: 185 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25354)){
            _14290 = SEQ_PTR(_line_25354)->length;
    }
    else {
        _14290 = 1;
    }
    // SubProg fetch_line pc: 188 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_line_25354);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14289)) ? _14289 : (object)(DBL_PTR(_14289)->dbl);
        int stop = (IS_ATOM_INT(_14290)) ? _14290 : (object)(DBL_PTR(_14290)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_line_25354), start, &_line_25354 );
            }
            else Tail(SEQ_PTR(_line_25354), stop+1, &_line_25354);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_line_25354), start, &_line_25354);
        }
        else {
            assign_slice_seq = &assign_space;
            _line_25354 = Remove_elements(start, stop, (SEQ_PTR(_line_25354)->ref == 1));
        }
    }
    DeRef(_14289);
    _14289 = NOVALUE;
    _14290 = NOVALUE;
    // SubProg fetch_line pc: 193 op: STARTLINE (58)

    /** scanner.e:263		return line*/
    // SubProg fetch_line pc: 195 op: RETURNF (28)

// Exiting block BLOCK: fetch_line

// block var start_25353

// block var memdata_25355
    DeRefi(_memdata_25355);

// block var c_25356

// block var chunk_25357

// block var p_25358
    DeRef(_p_25358);

// block var n_25359

// block var m_25360
    return _line_25354;
    // SubProg fetch_line pc: 199 op: BADRETURNF (43)
    ;
}


void _61AppendSourceLine()
{
    object _new_25396 = NOVALUE;
    object _old_25397 = NOVALUE;
    object _options_25398 = NOVALUE;
    object _src_25399 = NOVALUE;
// skipping _14332  name type: 0
    object _14331 = NOVALUE; // 25484 14331
// skipping _14330  name type: 0
// skipping _14329  name type: 0
// skipping _14328  name type: 0
    object _14327 = NOVALUE; // 25471 14327
// skipping _14326  name type: 0
    object _14325 = NOVALUE; // 25468 14325
    object _14324 = NOVALUE; // 25467 14324
// skipping _14323  name type: 0
// skipping _14322  name type: 0
    object _14321 = NOVALUE; // 25459 14321
    object _14320 = NOVALUE; // 25458 14320
    object _14319 = NOVALUE; // 25457 14319
    object _14318 = NOVALUE; // 25455 14318
    object _14317 = NOVALUE; // 25454 14317
    object _14316 = NOVALUE; // 25452 14316
    object _14315 = NOVALUE; // 25451 14315
    object _14314 = NOVALUE; // 25450 14314
    object _14313 = NOVALUE; // 25449 14313
    object _14312 = NOVALUE; // 25448 14312
    object _14311 = NOVALUE; // 25446 14311
    object _14310 = NOVALUE; // 25445 14310
    object _14309 = NOVALUE; // 25442 14309
    object _14308 = NOVALUE; // 25441 14308
    object _14307 = NOVALUE; // 25440 14307
    object _14306 = NOVALUE; // 25437 14306
    object _14305 = NOVALUE; // 25436 14305
    object _14304 = NOVALUE; // 25435 14304
// skipping _14303  name type: 0
    object _14302 = NOVALUE; // 25431 14302
    object _14301 = NOVALUE; // 25430 14301
    object _14300 = NOVALUE; // 25428 14300
// skipping _14299  name type: 0
    object _14298 = NOVALUE; // 25424 14298
// skipping _14297  name type: 0
// skipping _14296  name type: 0
// skipping _14295  name type: 0
// skipping _14294  name type: 0
    object _14293 = NOVALUE; // 25404 14293
    object _14292 = NOVALUE; // 25402 14292
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg AppendSourceLine pc: 1 op: STARTLINE (58)

    /** scanner.e:272		src = 0*/
    // SubProg AppendSourceLine pc: 3 op: ASSIGN (18)
    DeRef(_src_25399);
    _src_25399 = 0;
    // SubProg AppendSourceLine pc: 6 op: STARTLINE (58)

    /** scanner.e:273		options = 0*/
    // SubProg AppendSourceLine pc: 8 op: ASSIGN_I (113)
    _options_25398 = 0;
    // SubProg AppendSourceLine pc: 11 op: STARTLINE (58)

    /** scanner.e:275		if TRANSLATE or OpTrace or OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 15 op: SC1_OR (143)
    if (_5TRANSLATE_12097 != 0) {
        _14292 = 1;
        goto L1; // [15] 25
    }
    // SubProg AppendSourceLine pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 21 op: SC2_OR (144)
    _14292 = (_5OpTrace_12547 != 0);
    // SubProg AppendSourceLine pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 25 op: SC1_OR (143)
    if (_14292 != 0) {
        _14293 = 1;
        goto L2; // [25] 35
    }
    // SubProg AppendSourceLine pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 31 op: SC2_OR (144)
    _14293 = (_5OpProfileStatement_12549 != 0);
    // SubProg AppendSourceLine pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 35 op: SC1_OR_IF (147)
    if (_14293 != 0) {
        goto L3; // [35] 46
    }
    // SubProg AppendSourceLine pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 41 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 42 op: IF (20)
    if (_5OpProfileTime_12550 == 0)
    {
        goto L4; // [42] 136
    }
    else{
    }
    // SubProg AppendSourceLine pc: 45 op: NOP1 (159)
L3: // addr: 46 pc: 45 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 46 op: STARTLINE (58)

    /** scanner.e:277			src = ThisLine*/
    // SubProg AppendSourceLine pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 50 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_src_25399);
    _src_25399 = _49ThisLine_48781;
    // SubProg AppendSourceLine pc: 53 op: STARTLINE (58)

    /** scanner.e:279			if OpTrace then*/
    // SubProg AppendSourceLine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 57 op: IF (20)
    if (_5OpTrace_12547 == 0)
    {
        goto L5; // [57] 70
    }
    else{
    }
    // SubProg AppendSourceLine pc: 60 op: STARTLINE (58)

    /** scanner.e:280				options = SOP_TRACE*/
    // SubProg AppendSourceLine pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 64 op: ASSIGN (18)
    _options_25398 = 1;
    // SubProg AppendSourceLine pc: 67 op: INTEGER_CHECK (96)
    // SubProg AppendSourceLine pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 70 op: STARTLINE (58)

    /** scanner.e:282			if OpProfileTime then*/
    // SubProg AppendSourceLine pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 74 op: IF (20)
    if (_5OpProfileTime_12550 == 0)
    {
        goto L6; // [74] 88
    }
    else{
    }
    // SubProg AppendSourceLine pc: 77 op: STARTLINE (58)

    /** scanner.e:283				options = or_bits(options, SOP_PROFILE_TIME)*/
    // SubProg AppendSourceLine pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 81 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)_options_25398 | (uintptr_t)2;
         _options_25398 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 85 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25398)) {
        _1 = (object)(DBL_PTR(_options_25398)->dbl);
        DeRefDS(_options_25398);
        _options_25398 = _1;
    }
    // SubProg AppendSourceLine pc: 87 op: NOP1 (159)
L6: // addr: 88 pc: 87 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 88 op: STARTLINE (58)

    /** scanner.e:285			if OpProfileStatement then*/
    // SubProg AppendSourceLine pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 92 op: IF (20)
    if (_5OpProfileStatement_12549 == 0)
    {
        goto L7; // [92] 106
    }
    else{
    }
    // SubProg AppendSourceLine pc: 95 op: STARTLINE (58)

    /** scanner.e:286				options = or_bits(options, SOP_PROFILE_STATEMENT)*/
    // SubProg AppendSourceLine pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 99 op: OR_BITS (24)
    {uintptr_t tu;
         tu = (uintptr_t)_options_25398 | (uintptr_t)4;
         _options_25398 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 103 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25398)) {
        _1 = (object)(DBL_PTR(_options_25398)->dbl);
        DeRefDS(_options_25398);
        _options_25398 = _1;
    }
    // SubProg AppendSourceLine pc: 105 op: NOP1 (159)
L7: // addr: 106 pc: 105 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 106 op: STARTLINE (58)

    /** scanner.e:288			if OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 110 op: SC1_OR_IF (147)
    if (_5OpProfileStatement_12549 != 0) {
        goto L8; // [110] 121
    }
    // SubProg AppendSourceLine pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 116 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 117 op: IF (20)
    if (_5OpProfileTime_12550 == 0)
    {
        goto L9; // [117] 135
    }
    else{
    }
    // SubProg AppendSourceLine pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 121 op: STARTLINE (58)

    /** scanner.e:289				src = {0,0,0,0} & src*/
    // SubProg AppendSourceLine pc: 123 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _14298 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 130 op: CONCAT (15)
    if (IS_SEQUENCE(_14298) && IS_ATOM(_src_25399)) {
        Ref(_src_25399);
        Append(&_src_25399, _14298, _src_25399);
    }
    else if (IS_ATOM(_14298) && IS_SEQUENCE(_src_25399)) {
    }
    else {
        Concat((object_ptr)&_src_25399, _14298, _src_25399);
        DeRefDS(_14298);
        _14298 = NOVALUE;
    }
    DeRef(_14298);
    _14298 = NOVALUE;
    // SubProg AppendSourceLine pc: 134 op: NOP1 (159)
L9: // addr: 135 pc: 134 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 136 op: STARTLINE (58)

    /** scanner.e:293		if length(slist) then*/
    // SubProg AppendSourceLine pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14300 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14300 = 1;
    }
    // SubProg AppendSourceLine pc: 143 op: IF (20)
    if (_14300 == 0)
    {
        _14300 = NOVALUE;
        goto LA; // [143] 345
    }
    else{
        _14300 = NOVALUE;
    }
    // SubProg AppendSourceLine pc: 146 op: STARTLINE (58)

    /** scanner.e:294			old = slist[$-1]*/
    // SubProg AppendSourceLine pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14301 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14301 = 1;
    }
    // SubProg AppendSourceLine pc: 153 op: MINUS (10)
    _14302 = _14301 - 1;
    _14301 = NOVALUE;
    // SubProg AppendSourceLine pc: 157 op: RHS_SUBS_CHECK (92)
    DeRef(_old_25397);
    _2 = (object)SEQ_PTR(_5slist_12568);
    _old_25397 = (object)*(((s1_ptr)_2)->base + _14302);
    Ref(_old_25397);
    // SubProg AppendSourceLine pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 163 op: STARTLINE (58)

    /** scanner.e:296			if equal(src, old[SRC]) and*/
    // SubProg AppendSourceLine pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25397);
    _14304 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg AppendSourceLine pc: 171 op: EQUAL (153)
    if (_src_25399 == _14304)
    _14305 = 1;
    else if (IS_ATOM_INT(_src_25399) && IS_ATOM_INT(_14304))
    _14305 = 0;
    else
    _14305 = (compare(_src_25399, _14304) == 0);
    _14304 = NOVALUE;
    // SubProg AppendSourceLine pc: 175 op: SC1_AND (141)
    if (_14305 == 0) {
        _14306 = 0;
        goto LB; // [175] 195
    }
    // SubProg AppendSourceLine pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 183 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25397);
    _14307 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg AppendSourceLine pc: 187 op: EQUALS (3)
    if (IS_ATOM_INT(_14307)) {
        _14308 = (_5current_file_no_12477 == _14307);
    }
    else {
        _14308 = binary_op(EQUALS, _5current_file_no_12477, _14307);
    }
    _14307 = NOVALUE;
    // SubProg AppendSourceLine pc: 191 op: SC2_AND (142)
    if (IS_ATOM_INT(_14308))
    _14306 = (_14308 != 0);
    else
    _14306 = DBL_PTR(_14308)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 194 op: NOP1 (159)
LB: // addr: 195 pc: 194 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 195 op: SC1_AND (141)
    if (_14306 == 0) {
        _14309 = 0;
        goto LC; // [195] 232
    }
    // SubProg AppendSourceLine pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25397);
    _14310 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg AppendSourceLine pc: 207 op: PLUS1 (93)
    if (IS_ATOM_INT(_14310)) {
        _14311 = _14310 + 1;
        if (_14311 > MAXINT){
            _14311 = NewDouble((eudouble)_14311);
        }
    }
    else
    _14311 = binary_op(PLUS, 1, _14310);
    _14310 = NOVALUE;
    // SubProg AppendSourceLine pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 213 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14312 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14312 = 1;
    }
    // SubProg AppendSourceLine pc: 216 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5slist_12568);
    _14313 = (object)*(((s1_ptr)_2)->base + _14312);
    // SubProg AppendSourceLine pc: 220 op: PLUS (11)
    if (IS_ATOM_INT(_14311) && IS_ATOM_INT(_14313)) {
        _14314 = _14311 + _14313;
        if ((object)((uintptr_t)_14314 + (uintptr_t)HIGH_BITS) >= 0){
            _14314 = NewDouble((eudouble)_14314);
        }
    }
    else {
        _14314 = binary_op(PLUS, _14311, _14313);
    }
    DeRef(_14311);
    _14311 = NOVALUE;
    _14313 = NOVALUE;
    // SubProg AppendSourceLine pc: 224 op: EQUALS (3)
    if (IS_ATOM_INT(_14314)) {
        _14315 = (_5line_number_12478 == _14314);
    }
    else {
        _14315 = binary_op(EQUALS, _5line_number_12478, _14314);
    }
    DeRef(_14314);
    _14314 = NOVALUE;
    // SubProg AppendSourceLine pc: 228 op: SC2_AND (142)
    if (IS_ATOM_INT(_14315))
    _14309 = (_14315 != 0);
    else
    _14309 = DBL_PTR(_14315)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 231 op: NOP1 (159)
LC: // addr: 232 pc: 231 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 232 op: SC1_AND_IF (146)
    if (_14309 == 0) {
        goto LD; // [232] 272
    }
    // SubProg AppendSourceLine pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25397);
    _14317 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg AppendSourceLine pc: 242 op: EQUALS (3)
    if (IS_ATOM_INT(_14317)) {
        _14318 = (_options_25398 == _14317);
    }
    else {
        _14318 = binary_op(EQUALS, _options_25398, _14317);
    }
    _14317 = NOVALUE;
    // SubProg AppendSourceLine pc: 246 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 247 op: IF (20)
    if (_14318 == 0) {
        DeRef(_14318);
        _14318 = NOVALUE;
        goto LD; // [247] 272
    }
    else {
        if (!IS_ATOM_INT(_14318) && DBL_PTR(_14318)->dbl == 0.0){
            DeRef(_14318);
            _14318 = NOVALUE;
            goto LD; // [247] 272
        }
        DeRef(_14318);
        _14318 = NOVALUE;
    }
    DeRef(_14318);
    _14318 = NOVALUE;
    // SubProg AppendSourceLine pc: 250 op: STARTLINE (58)

    /** scanner.e:302				slist[$] += 1*/
    // SubProg AppendSourceLine pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 254 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14319 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14319 = 1;
    }
    // SubProg AppendSourceLine pc: 257 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_5slist_12568);
    _14320 = (object)*(((s1_ptr)_2)->base + _14319);
    // SubProg AppendSourceLine pc: 261 op: PLUS1 (93)
    if (IS_ATOM_INT(_14320)) {
        _14321 = _14320 + 1;
        if (_14321 > MAXINT){
            _14321 = NewDouble((eudouble)_14321);
        }
    }
    else
    _14321 = binary_op(PLUS, 1, _14320);
    _14320 = NOVALUE;
    // SubProg AppendSourceLine pc: 265 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_5slist_12568);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _5slist_12568 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14319);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14321;
    if( _1 != _14321 ){
        DeRef(_1);
    }
    _14321 = NOVALUE;
    // SubProg AppendSourceLine pc: 269 op: ELSE (23)
    goto LE; // [269] 371
    // SubProg AppendSourceLine pc: 271 op: NOP1 (159)
LD: // addr: 272 pc: 271 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 272 op: STARTLINE (58)

    /** scanner.e:304				src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 274 op: PROC (27)
    Ref(_src_25399);
    _0 = _src_25399;
    _src_25399 = _61pack_source(_src_25399);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 278 op: STARTLINE (58)

    /** scanner.e:305				new = {src, line_number, current_file_no, options}*/
    // SubProg AppendSourceLine pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 284 op: RIGHT_BRACE_N (31)
    _0 = _new_25396;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25399);
    ((intptr_t*)_2)[1] = _src_25399;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    ((intptr_t*)_2)[3] = _5current_file_no_12477;
    ((intptr_t*)_2)[4] = _options_25398;
    _new_25396 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 291 op: STARTLINE (58)

    /** scanner.e:306				if slist[$] = 0 then*/
    // SubProg AppendSourceLine pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 295 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14324 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14324 = 1;
    }
    // SubProg AppendSourceLine pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5slist_12568);
    _14325 = (object)*(((s1_ptr)_2)->base + _14324);
    // SubProg AppendSourceLine pc: 302 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14325, 0)){
        _14325 = NOVALUE;
        goto LF; // [302] 320
    }
    _14325 = NOVALUE;
    // SubProg AppendSourceLine pc: 306 op: STARTLINE (58)

    /** scanner.e:307					slist[$] = new*/
    // SubProg AppendSourceLine pc: 308 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_5slist_12568)){
            _14327 = SEQ_PTR(_5slist_12568)->length;
    }
    else {
        _14327 = 1;
    }
    // SubProg AppendSourceLine pc: 313 op: ASSIGN_SUBS (16)
    RefDS(_new_25396);
    _2 = (object)SEQ_PTR(_5slist_12568);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _5slist_12568 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14327);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_25396;
    DeRef(_1);
    // SubProg AppendSourceLine pc: 317 op: ELSE (23)
    goto L10; // [317] 331
    // SubProg AppendSourceLine pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 320 op: STARTLINE (58)

    /** scanner.e:309					slist = append(slist, new)*/
    // SubProg AppendSourceLine pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 324 op: APPEND (35)
    RefDS(_new_25396);
    Append(&_5slist_12568, _5slist_12568, _new_25396);
    // SubProg AppendSourceLine pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 330 op: NOP1 (159)
L10: // addr: 331 pc: 330 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 331 op: STARTLINE (58)

    /** scanner.e:311				slist = append(slist, 0)*/
    // SubProg AppendSourceLine pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 335 op: APPEND (35)
    Append(&_5slist_12568, _5slist_12568, 0);
    // SubProg AppendSourceLine pc: 339 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 341 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 342 op: ELSE (23)
    goto LE; // [342] 371
    // SubProg AppendSourceLine pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 345 op: STARTLINE (58)

    /** scanner.e:314			src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 347 op: PROC (27)
    Ref(_src_25399);
    _0 = _src_25399;
    _src_25399 = _61pack_source(_src_25399);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 351 op: STARTLINE (58)

    /** scanner.e:315			slist = {{src, line_number, current_file_no, options}, 0}*/
    // SubProg AppendSourceLine pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 357 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25399);
    ((intptr_t*)_2)[1] = _src_25399;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    ((intptr_t*)_2)[3] = _5current_file_no_12477;
    ((intptr_t*)_2)[4] = _options_25398;
    _14331 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 364 op: RIGHT_BRACE_2 (85)
    DeRef(_5slist_12568);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14331;
    ((intptr_t *)_2)[2] = 0;
    _5slist_12568 = MAKE_SEQ(_1);
    _14331 = NOVALUE;
    // SubProg AppendSourceLine pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 370 op: NOP1 (159)
LE: // addr: 371 pc: 370 sub: 25394 op: 159
    // SubProg AppendSourceLine pc: 371 op: STARTLINE (58)

    /** scanner.e:317	end procedure*/
    // SubProg AppendSourceLine pc: 373 op: RETURNP (29)

// Exiting block BLOCK: AppendSourceLine

// block var new_25396
    DeRef(_new_25396);

// block var old_25397
    DeRef(_old_25397);

// block var options_25398

// block var src_25399
    DeRef(_src_25399);
    DeRef(_14315);
    _14315 = NOVALUE;
    DeRef(_14302);
    _14302 = NOVALUE;
    DeRef(_14308);
    _14308 = NOVALUE;
    return;
    // SubProg AppendSourceLine pc: 376 op: BADRETURNF (43)
    ;
}


object _61s_expand(object _slist_25488)
{
    object _new_slist_25489 = NOVALUE;
// skipping _14346  name type: 0
    object _14345 = NOVALUE; // 25509 14345
    object _14344 = NOVALUE; // 25508 14344
    object _14343 = NOVALUE; // 25507 14343
    object _14342 = NOVALUE; // 25506 14342
// skipping _14341  name type: 0
    object _14340 = NOVALUE; // 25503 14340
    object _14339 = NOVALUE; // 25502 14339
    object _14338 = NOVALUE; // 25501 14338
// skipping _14337  name type: 0
    object _14336 = NOVALUE; // 25496 14336
    object _14335 = NOVALUE; // 25495 14335
    object _14334 = NOVALUE; // 25494 14334
    object _14333 = NOVALUE; // 25492 14333
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg s_expand pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 3 op: STARTLINE (58)

    /** scanner.e:323		new_slist = {}*/
    // SubProg s_expand pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_new_slist_25489);
    _new_slist_25489 = _5;
    // SubProg s_expand pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 10 op: STARTLINE (58)

    /** scanner.e:325		for i = 1 to length(slist) do*/
    // SubProg s_expand pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_slist_25488)){
            _14333 = SEQ_PTR(_slist_25488)->length;
    }
    else {
        _14333 = 1;
    }
    // SubProg s_expand pc: 15 op: FOR_I (125)
    {
        object _i_25491;
        _i_25491 = 1;
L1: // addr: 22 pc: 15 sub: 25486 op: 125
        if (_i_25491 > _14333){
            goto L2; // [15] 114
        }
        // SubProg s_expand pc: 22 op: STARTLINE (58)

        /** scanner.e:326			if sequence(slist[i]) then*/
        // SubProg s_expand pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25488);
        _14334 = (object)*(((s1_ptr)_2)->base + _i_25491);
        // SubProg s_expand pc: 28 op: IS_A_SEQUENCE (68)
        _14335 = IS_SEQUENCE(_14334);
        _14334 = NOVALUE;
        // SubProg s_expand pc: 31 op: IF (20)
        if (_14335 == 0)
        {
            _14335 = NOVALUE;
            goto L3; // [31] 47
        }
        else{
            _14335 = NOVALUE;
        }
        // SubProg s_expand pc: 34 op: STARTLINE (58)

        /** scanner.e:327				new_slist = append(new_slist, slist[i])*/
        // SubProg s_expand pc: 36 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25488);
        _14336 = (object)*(((s1_ptr)_2)->base + _i_25491);
        // SubProg s_expand pc: 40 op: APPEND (35)
        Ref(_14336);
        Append(&_new_slist_25489, _new_slist_25489, _14336);
        _14336 = NOVALUE;
        // SubProg s_expand pc: 44 op: ELSE (23)
        goto L4; // [44] 107
        // SubProg s_expand pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 25486 op: 159
        // SubProg s_expand pc: 47 op: STARTLINE (58)

        /** scanner.e:329				for j = 1 to slist[i] do*/
        // SubProg s_expand pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25488);
        _14338 = (object)*(((s1_ptr)_2)->base + _i_25491);
        // SubProg s_expand pc: 53 op: FOR (21)
        {
            object _j_25500;
            _j_25500 = 1;
L5: // addr: 60 pc: 53 sub: 25486 op: 21
            if (binary_op_a(GREATER, _j_25500, _14338)){
                goto L6; // [53] 106
            }
            // SubProg s_expand pc: 60 op: STARTLINE (58)

            /** scanner.e:330					slist[i-1][LINE] += 1*/
            // SubProg s_expand pc: 62 op: MINUS (10)
            _14339 = _i_25491 - 1;
            // SubProg s_expand pc: 66 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_slist_25488);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _slist_25488 = MAKE_SEQ(_2);
            }
            _3 = (object)(_14339 + ((s1_ptr)_2)->base);
            // SubProg s_expand pc: 71 op: GLOBAL_INIT_CHECK (109)
            // SubProg s_expand pc: 73 op: PASSIGN_OP_SUBS (164)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            _14342 = (object)*(((s1_ptr)_2)->base + 2);
            _14340 = NOVALUE;
            // SubProg s_expand pc: 77 op: PLUS1 (93)
            if (IS_ATOM_INT(_14342)) {
                _14343 = _14342 + 1;
                if (_14343 > MAXINT){
                    _14343 = NewDouble((eudouble)_14343);
                }
            }
            else
            _14343 = binary_op(PLUS, 1, _14342);
            _14342 = NOVALUE;
            // SubProg s_expand pc: 81 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 2);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _14343;
            if( _1 != _14343 ){
                DeRef(_1);
            }
            _14343 = NOVALUE;
            _14340 = NOVALUE;
            // SubProg s_expand pc: 85 op: STARTLINE (58)

            /** scanner.e:331					new_slist = append(new_slist, slist[i-1])*/
            // SubProg s_expand pc: 87 op: MINUS (10)
            _14344 = _i_25491 - 1;
            // SubProg s_expand pc: 91 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_slist_25488);
            _14345 = (object)*(((s1_ptr)_2)->base + _14344);
            // SubProg s_expand pc: 95 op: APPEND (35)
            Ref(_14345);
            Append(&_new_slist_25489, _new_slist_25489, _14345);
            _14345 = NOVALUE;
            // SubProg s_expand pc: 99 op: STARTLINE (58)

            /** scanner.e:332				end for*/
            // SubProg s_expand pc: 101 op: ENDFOR_INT_UP1 (54)
            _0 = _j_25500;
            if (IS_ATOM_INT(_j_25500)) {
                _j_25500 = _j_25500 + 1;
                if ((object)((uintptr_t)_j_25500 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_25500 = NewDouble((eudouble)_j_25500);
                }
            }
            else {
                _j_25500 = binary_op_a(PLUS, _j_25500, 1);
            }
            DeRef(_0);
            goto L5; // [101] 60
L6: // addr: 106 pc: 101 sub: 25486 op: 54
            ;
            DeRef(_j_25500);
        }
        // SubProg s_expand pc: 106 op: NOP1 (159)
L4: // addr: 107 pc: 106 sub: 25486 op: 159
        // SubProg s_expand pc: 107 op: STARTLINE (58)

        /** scanner.e:334		end for*/
        // SubProg s_expand pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_25491 = _i_25491 + 1;
        goto L1; // [109] 22
L2: // addr: 114 pc: 109 sub: 25486 op: 54
        ;
    }
    // SubProg s_expand pc: 114 op: STARTLINE (58)

    /** scanner.e:335		return new_slist*/
    // SubProg s_expand pc: 116 op: RETURNF (28)

// Exiting block BLOCK: s_expand

// block var slist_25488
    DeRefDS(_slist_25488);
    _14338 = NOVALUE;
    DeRef(_14339);
    _14339 = NOVALUE;
    DeRef(_14344);
    _14344 = NOVALUE;
    return _new_slist_25489;
    // SubProg s_expand pc: 120 op: BADRETURNF (43)
    ;
}


void _61set_dont_read(object _read_25515)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_dont_read pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_dont_read pc: 3 op: STARTLINE (58)

    /** scanner.e:357		dont_read = read*/
    // SubProg set_dont_read pc: 5 op: ASSIGN_I (113)
    _61dont_read_25512 = _read_25515;
    // SubProg set_dont_read pc: 8 op: STARTLINE (58)

    /** scanner.e:358	end procedure*/
    // SubProg set_dont_read pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_dont_read

// block var read_25515
    return;
    // SubProg set_dont_read pc: 13 op: BADRETURNF (43)
    ;
}


void _61read_line()
{
    object _n_25521 = NOVALUE;
    object _14376 = NOVALUE; // 25590 14376
    object _14375 = NOVALUE; // 25588 14375
    object _14374 = NOVALUE; // 25587 14374
    object _14373 = NOVALUE; // 25584 14373
    object _14372 = NOVALUE; // 25583 14372
// skipping _14371  name type: 0
    object _14370 = NOVALUE; // 25577 14370
    object _14369 = NOVALUE; // 25574 14369
// skipping _14368  name type: 0
    object _14367 = NOVALUE; // 25571 14367
    object _14366 = NOVALUE; // 25567 14366
    object _14364 = NOVALUE; // 25563 14364
    object _14363 = NOVALUE; // 25562 14363
// skipping _14362  name type: 0
// skipping _14361  name type: 0
// skipping _14360  name type: 0
// skipping _14359  name type: 0
// skipping _14356  name type: 0
    object _14355 = NOVALUE; // 25543 14355
// skipping _14354  name type: 0
    object _14353 = NOVALUE; // 25538 14353
    object _14352 = NOVALUE; // 25535 14352
    object _14351 = NOVALUE; // 25533 14351
    object _14350 = NOVALUE; // 25530 14350
// skipping _14349  name type: 0
// skipping _14348  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_line pc: 1 op: STARTLINE (58)

    /** scanner.e:367		line_number += 1*/
    // SubProg read_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 5 op: PLUS (11)
    _5line_number_12478 = _5line_number_12478 + 1;
    // SubProg read_line pc: 11 op: STARTLINE (58)

    /** scanner.e:368		gline_number += 1*/
    // SubProg read_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 15 op: PLUS (11)
    _5gline_number_12482 = _5gline_number_12482 + 1;
    // SubProg read_line pc: 21 op: STARTLINE (58)

    /** scanner.e:370		if dont_read then*/
    // SubProg read_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 25 op: IF (20)
    if (_61dont_read_25512 == 0)
    {
        goto L1; // [25] 36
    }
    else{
    }
    // SubProg read_line pc: 28 op: STARTLINE (58)

    /** scanner.e:371			ThisLine = -1*/
    // SubProg read_line pc: 30 op: ASSIGN (18)
    DeRef(_49ThisLine_48781);
    _49ThisLine_48781 = -1;
    // SubProg read_line pc: 33 op: ELSE (23)
    goto L2; // [33] 216
    // SubProg read_line pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 25519 op: 159
    // SubProg read_line pc: 36 op: STARTLINE (58)

    /** scanner.e:372		elsif repl and src_file = repl_file then*/
    // SubProg read_line pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 40 op: SC1_AND_IF (146)
    if (0 == 0) {
        goto L3; // [40] 144
    }
    // SubProg read_line pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 48 op: EQUALS (3)
    _14351 = (_5src_file_12599 == 5555);
    // SubProg read_line pc: 52 op: NOP1 (159)
    // SubProg read_line pc: 53 op: IF (20)
    if (_14351 == 0)
    {
        DeRef(_14351);
        _14351 = NOVALUE;
        goto L3; // [53] 144
    }
    else{
        DeRef(_14351);
        _14351 = NOVALUE;
    }
    // SubProg read_line pc: 56 op: STARTLINE (58)

    /** scanner.e:373			if repl_line_was_read and current_block = top_level_block then*/
    // SubProg read_line pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 60 op: SC1_AND_IF (146)
    if (_61repl_line_was_read_25516 == 0) {
        goto L4; // [60] 118
    }
    // SubProg read_line pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 68 op: EQUALS (3)
    _14353 = (_64current_block_24772 == _64top_level_block_24773);
    // SubProg read_line pc: 72 op: NOP1 (159)
    // SubProg read_line pc: 73 op: IF (20)
    if (_14353 == 0)
    {
        DeRef(_14353);
        _14353 = NOVALUE;
        goto L4; // [73] 118
    }
    else{
        DeRef(_14353);
        _14353 = NOVALUE;
    }
    // SubProg read_line pc: 76 op: STARTLINE (58)

    /** scanner.e:374				if repl_line_was_read > 1 then*/
    // SubProg read_line pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 80 op: GREATER_IFW_I (124)
    if (_61repl_line_was_read_25516 <= 1)
    goto L5; // [80] 110
    // SubProg read_line pc: 84 op: STARTLINE (58)

    /** scanner.e:375					if not match("end", ThisLine) then*/
    // SubProg read_line pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 88 op: MATCH_FROM (177)
    _14355 = e_match_from(_13128, _49ThisLine_48781, 1);
    // SubProg read_line pc: 93 op: NOT_IFW (108)
    if (_14355 != 0)
    goto L6; // [93] 109
    _14355 = NOVALUE;
    // SubProg read_line pc: 96 op: STARTLINE (58)

    /** scanner.e:376						goto "lol"*/
    // SubProg read_line pc: 98 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 100 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 102 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 104 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-
    // SubProg read_line pc: 106 op: GOTO (188)
    goto G7;
    // SubProg read_line pc: 108 op: NOP1 (159)
L6: // addr: 109 pc: 108 sub: 25519 op: 159
    // SubProg read_line pc: 109 op: NOP1 (159)
L5: // addr: 110 pc: 109 sub: 25519 op: 159
    // SubProg read_line pc: 110 op: STARTLINE (58)

    /** scanner.e:379				ThisLine = -1*/
    // SubProg read_line pc: 112 op: ASSIGN (18)
    DeRef(_49ThisLine_48781);
    _49ThisLine_48781 = -1;
    // SubProg read_line pc: 115 op: ELSE (23)
    goto L2; // [115] 216
    // SubProg read_line pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 25519 op: 159
    // SubProg read_line pc: 118 op: STARTLINE (58)

    /** scanner.e:381				label "lol"*/
    // SubProg read_line pc: 120 op: GLABEL (189)
G7:
    // SubProg read_line pc: 122 op: STARTLINE (58)

    /** scanner.e:382				puts(1, "Enter line:\n")*/
    // SubProg read_line pc: 124 op: PUTS (44)
    EPuts(1, _14358); // DJP 
    // SubProg read_line pc: 127 op: STARTLINE (58)

    /** scanner.e:383				repl_line_was_read += 1*/
    // SubProg read_line pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 131 op: PLUS1_I (117)
    _61repl_line_was_read_25516 = _61repl_line_was_read_25516 + 1;
    // SubProg read_line pc: 135 op: STARTLINE (58)

    /** scanner.e:384				ThisLine = gets(0)*/
    // SubProg read_line pc: 137 op: GETS (17)
    DeRef(_49ThisLine_48781);
    _49ThisLine_48781 = EGets(0);
    // SubProg read_line pc: 140 op: NOP1 (159)
    // SubProg read_line pc: 141 op: ELSE (23)
    goto L2; // [141] 216
    // SubProg read_line pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 25519 op: 159
    // SubProg read_line pc: 144 op: STARTLINE (58)

    /** scanner.e:386		elsif src_file < 0 then*/
    // SubProg read_line pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 148 op: LESS_IFW (102)
    if (_5src_file_12599 >= 0)
    goto L8; // [148] 160
    // SubProg read_line pc: 152 op: STARTLINE (58)

    /** scanner.e:387			ThisLine = -1*/
    // SubProg read_line pc: 154 op: ASSIGN (18)
    DeRef(_49ThisLine_48781);
    _49ThisLine_48781 = -1;
    // SubProg read_line pc: 157 op: ELSE (23)
    goto L2; // [157] 216
    // SubProg read_line pc: 159 op: NOP1 (159)
L8: // addr: 160 pc: 159 sub: 25519 op: 159
    // SubProg read_line pc: 160 op: STARTLINE (58)

    /** scanner.e:389			ThisLine = gets(src_file)*/
    // SubProg read_line pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 164 op: GETS (17)
    DeRef(_49ThisLine_48781);
    _49ThisLine_48781 = EGets(_5src_file_12599);
    // SubProg read_line pc: 167 op: STARTLINE (58)

    /** scanner.e:390			if sequence(ThisLine) and ends( {13,10}, ThisLine ) then*/
    // SubProg read_line pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 171 op: IS_A_SEQUENCE (68)
    _14363 = IS_SEQUENCE(_49ThisLine_48781);
    // SubProg read_line pc: 174 op: SC1_AND_IF (146)
    if (_14363 == 0) {
        goto L9; // [174] 215
    }
    // SubProg read_line pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 180 op: PROC (27)
    RefDS(_14365);
    Ref(_49ThisLine_48781);
    _14366 = _22ends(_14365, _49ThisLine_48781);
    // SubProg read_line pc: 185 op: NOP1 (159)
    // SubProg read_line pc: 186 op: IF (20)
    if (_14366 == 0) {
        DeRef(_14366);
        _14366 = NOVALUE;
        goto L9; // [186] 215
    }
    else {
        if (!IS_ATOM_INT(_14366) && DBL_PTR(_14366)->dbl == 0.0){
            DeRef(_14366);
            _14366 = NOVALUE;
            goto L9; // [186] 215
        }
        DeRef(_14366);
        _14366 = NOVALUE;
    }
    DeRef(_14366);
    _14366 = NOVALUE;
    // SubProg read_line pc: 189 op: STARTLINE (58)

    /** scanner.e:391				ThisLine = remove(ThisLine, length(ThisLine))*/
    // SubProg read_line pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48781)){
            _14367 = SEQ_PTR(_49ThisLine_48781)->length;
    }
    else {
        _14367 = 1;
    }
    // SubProg read_line pc: 198 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_49ThisLine_48781);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14367)) ? _14367 : (object)(DBL_PTR(_14367)->dbl);
        int stop = (IS_ATOM_INT(_14367)) ? _14367 : (object)(DBL_PTR(_14367)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_49ThisLine_48781), start, &_49ThisLine_48781 );
            }
            else Tail(SEQ_PTR(_49ThisLine_48781), stop+1, &_49ThisLine_48781);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_49ThisLine_48781), start, &_49ThisLine_48781);
        }
        else {
            assign_slice_seq = &assign_space;
            _49ThisLine_48781 = Remove_elements(start, stop, (SEQ_PTR(_49ThisLine_48781)->ref == 1));
        }
    }
    _14367 = NOVALUE;
    _14367 = NOVALUE;
    // SubProg read_line pc: 203 op: STARTLINE (58)

    /** scanner.e:392				ThisLine[$] = 10*/
    // SubProg read_line pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 207 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48781)){
            _14369 = SEQ_PTR(_49ThisLine_48781)->length;
    }
    else {
        _14369 = 1;
    }
    // SubProg read_line pc: 210 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_49ThisLine_48781);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _49ThisLine_48781 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14369);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg read_line pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 25519 op: 159
    // SubProg read_line pc: 215 op: NOP1 (159)
L2: // addr: 216 pc: 215 sub: 25519 op: 159
    // SubProg read_line pc: 216 op: STARTLINE (58)

    /** scanner.e:395		if atom(ThisLine) then*/
    // SubProg read_line pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 220 op: IS_AN_ATOM (67)
    _14370 = IS_ATOM(_49ThisLine_48781);
    // SubProg read_line pc: 223 op: IF (20)
    if (_14370 == 0)
    {
        _14370 = NOVALUE;
        goto LA; // [223] 286
    }
    else{
        _14370 = NOVALUE;
    }
    // SubProg read_line pc: 226 op: STARTLINE (58)

    /** scanner.e:396			ThisLine = {END_OF_FILE_CHAR}*/
    // SubProg read_line pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 230 op: RIGHT_BRACE_N (31)
    _0 = _49ThisLine_48781;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 26;
    _49ThisLine_48781 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg read_line pc: 234 op: STARTLINE (58)

    /** scanner.e:397			if src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg read_line pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 238 op: GREATEREQ (2)
    _14372 = (_5src_file_12599 >= 0);
    // SubProg read_line pc: 242 op: SC1_AND_IF (146)
    if (_14372 == 0) {
        goto LB; // [242] 278
    }
    // SubProg read_line pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 250 op: NOTEQ (4)
    _14374 = (_5src_file_12599 != 5555);
    // SubProg read_line pc: 254 op: SC1_OR (143)
    if (_14374 != 0) {
        DeRef(_14375);
        _14375 = 1;
        goto LC; // [254] 267
    }
    // SubProg read_line pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 260 op: NOT (7)
    _14376 = (0 == 0);
    // SubProg read_line pc: 263 op: SC2_OR (144)
    _14375 = (_14376 != 0);
    // SubProg read_line pc: 266 op: NOP1 (159)
LC: // addr: 267 pc: 266 sub: 25519 op: 159
    // SubProg read_line pc: 267 op: NOP1 (159)
    // SubProg read_line pc: 268 op: IF (20)
    if (_14375 == 0)
    {
        _14375 = NOVALUE;
        goto LB; // [268] 278
    }
    else{
        _14375 = NOVALUE;
    }
    // SubProg read_line pc: 271 op: STARTLINE (58)

    /** scanner.e:398				close(src_file)*/
    // SubProg read_line pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 275 op: CLOSE (86)
    EClose(_5src_file_12599);
    // SubProg read_line pc: 277 op: NOP1 (159)
LB: // addr: 278 pc: 277 sub: 25519 op: 159
    // SubProg read_line pc: 278 op: STARTLINE (58)

    /** scanner.e:400			src_file = -1*/
    // SubProg read_line pc: 280 op: ASSIGN (18)
    _5src_file_12599 = -1;
    // SubProg read_line pc: 283 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 285 op: NOP1 (159)
LA: // addr: 286 pc: 285 sub: 25519 op: 159
    // SubProg read_line pc: 286 op: STARTLINE (58)

    /** scanner.e:403		bp = 1*/
    // SubProg read_line pc: 288 op: ASSIGN (18)
    _49bp_48785 = 1;
    // SubProg read_line pc: 291 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 293 op: STARTLINE (58)

    /** scanner.e:411		AppendSourceLine()*/
    // SubProg read_line pc: 295 op: PROC (27)
    _61AppendSourceLine();
    // SubProg read_line pc: 297 op: STARTLINE (58)

    /** scanner.e:412	end procedure*/
    // SubProg read_line pc: 299 op: RETURNP (29)

// Exiting block BLOCK: read_line
    DeRef(_14372);
    _14372 = NOVALUE;
    DeRef(_14376);
    _14376 = NOVALUE;
    DeRef(_14374);
    _14374 = NOVALUE;
    return;
    // SubProg read_line pc: 302 op: BADRETURNF (43)
    ;
}


object _61getch()
{
    object _c_25596 = NOVALUE;
// skipping _14378  name type: 0
// skipping _14377  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg getch pc: 1 op: STARTLINE (58)

    /** scanner.e:417		c = ThisLine[bp]*/
    // SubProg getch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48781);
    _c_25596 = (object)*(((s1_ptr)_2)->base + _49bp_48785);
    if (!IS_ATOM_INT(_c_25596)){
        _c_25596 = (object)DBL_PTR(_c_25596)->dbl;
    }
    // SubProg getch pc: 13 op: STARTLINE (58)

    /** scanner.e:418		bp += 1*/
    // SubProg getch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 17 op: PLUS (11)
    _49bp_48785 = _49bp_48785 + 1;
    // SubProg getch pc: 23 op: STARTLINE (58)

    /** scanner.e:419		return c*/
    // SubProg getch pc: 25 op: RETURNF (28)

// Exiting block BLOCK: getch
    return _c_25596;
    // SubProg getch pc: 29 op: BADRETURNF (43)
    ;
}


void _61ungetch()
{
// skipping _14379  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ungetch pc: 1 op: STARTLINE (58)

    /** scanner.e:424		bp -= 1*/
    // SubProg ungetch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ungetch pc: 5 op: MINUS (10)
    _49bp_48785 = _49bp_48785 - 1;
    // SubProg ungetch pc: 11 op: STARTLINE (58)

    /** scanner.e:425	end procedure*/
    // SubProg ungetch pc: 13 op: RETURNP (29)

// Exiting block BLOCK: ungetch
    return;
    // SubProg ungetch pc: 16 op: BADRETURNF (43)
    ;
}


object _61get_file_path(object _s_25608)
{
    object _14385 = NOVALUE; // 25619 14385
    object _14383 = NOVALUE; // 25616 14383
    object _14382 = NOVALUE; // 25615 14382
    object _14381 = NOVALUE; // 25613 14381
    object _14380 = NOVALUE; // 25611 14380
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_file_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_file_path pc: 3 op: STARTLINE (58)

    /** scanner.e:429			for t=length(s) to 1 by -1 do*/
    // SubProg get_file_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_25608)){
            _14380 = SEQ_PTR(_s_25608)->length;
    }
    else {
        _14380 = 1;
    }
    // SubProg get_file_path pc: 8 op: FOR_I (125)
    {
        object _t_25610;
        _t_25610 = _14380;
L1: // addr: 15 pc: 8 sub: 25606 op: 125
        if (_t_25610 < 1){
            goto L2; // [8] 50
        }
        // SubProg get_file_path pc: 15 op: STARTLINE (58)

        /** scanner.e:430					if find(s[t],SLASH_CHARS) then*/
        // SubProg get_file_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_25608);
        _14381 = (object)*(((s1_ptr)_2)->base + _t_25610);
        // SubProg get_file_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_file_path pc: 23 op: FIND_FROM (176)
        _14382 = find_from(_14381, _39SLASH_CHARS_20003, 1);
        _14381 = NOVALUE;
        // SubProg get_file_path pc: 28 op: IF (20)
        if (_14382 == 0)
        {
            _14382 = NOVALUE;
            goto L3; // [28] 43
        }
        else{
            _14382 = NOVALUE;
        }
        // SubProg get_file_path pc: 31 op: STARTLINE (58)

        /** scanner.e:431							return s[1..t]*/
        // SubProg get_file_path pc: 33 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_14383;
        RHS_Slice(_s_25608, 1, _t_25610);
        // SubProg get_file_path pc: 38 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25608
        DeRefDS(_s_25608);
        return _14383;
        // SubProg get_file_path pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 25606 op: 159
        // SubProg get_file_path pc: 43 op: STARTLINE (58)

        /** scanner.e:433			end for*/
        // SubProg get_file_path pc: 45 op: ENDFOR_GENERAL (39)
        _t_25610 = _t_25610 + -1;
        goto L1; // [45] 15
L2: // addr: 50 pc: 45 sub: 25606 op: 39
        ;
    }
    // SubProg get_file_path pc: 50 op: STARTLINE (58)

    /** scanner.e:435			return "." & SLASH*/
    // SubProg get_file_path pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_file_path pc: 54 op: CONCAT (15)
    Append(&_14385, _14384, 47);
    // SubProg get_file_path pc: 58 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25608
    DeRefDS(_s_25608);
    DeRef(_14383);
    _14383 = NOVALUE;
    return _14385;
    // SubProg get_file_path pc: 62 op: BADRETURNF (43)
    ;
}


object _61find_file(object _fname_25622)
{
    object _try_25623 = NOVALUE;
    object _full_path_25624 = NOVALUE;
    object _errbuff_25625 = NOVALUE;
    object _currdir_25626 = NOVALUE;
    object _conf_path_25627 = NOVALUE;
    object _scan_result_25628 = NOVALUE;
    object _inc_path_25629 = NOVALUE;
    object _mainpath_25648 = NOVALUE;
    object _31806 = NOVALUE; // 64019 31806
    object _31805 = NOVALUE; // 64018 31805
    object _14482 = NOVALUE; // 25798 14482
// skipping _14481  name type: 0
    object _14480 = NOVALUE; // 25794 14480
    object _14479 = NOVALUE; // 25793 14479
    object _14478 = NOVALUE; // 25792 14478
    object _14476 = NOVALUE; // 25790 14476
// skipping _14475  name type: 0
    object _14474 = NOVALUE; // 25786 14474
// skipping _14473  name type: 0
    object _14472 = NOVALUE; // 25783 14472
    object _14471 = NOVALUE; // 25782 14471
// skipping _14470  name type: 0
    object _14469 = NOVALUE; // 25778 14469
    object _14468 = NOVALUE; // 25777 14468
// skipping _14467  name type: 0
// skipping _14466  name type: 0
    object _14465 = NOVALUE; // 25772 14465
// skipping _14464  name type: 0
// skipping _14463  name type: 0
    object _14462 = NOVALUE; // 25767 14462
    object _14461 = NOVALUE; // 25766 14461
    object _14460 = NOVALUE; // 25765 14460
    object _14459 = NOVALUE; // 25764 14459
    object _14458 = NOVALUE; // 25762 14458
    object _14457 = NOVALUE; // 25761 14457
    object _14456 = NOVALUE; // 25760 14456
    object _14455 = NOVALUE; // 25758 14455
// skipping _14454  name type: 0
// skipping _14453  name type: 0
    object _14452 = NOVALUE; // 25751 14452
    object _14451 = NOVALUE; // 25749 14451
// skipping _14450  name type: 0
// skipping _14449  name type: 0
// skipping _14448  name type: 0
    object _14447 = NOVALUE; // 25744 14447
// skipping _14446  name type: 0
// skipping _14445  name type: 0
    object _14444 = NOVALUE; // 25739 14444
    object _14443 = NOVALUE; // 25738 14443
    object _14442 = NOVALUE; // 25737 14442
    object _14441 = NOVALUE; // 25736 14441
    object _14440 = NOVALUE; // 25734 14440
    object _14439 = NOVALUE; // 25733 14439
    object _14438 = NOVALUE; // 25732 14438
    object _14437 = NOVALUE; // 25730 14437
// skipping _14436  name type: 0
// skipping _14435  name type: 0
    object _14434 = NOVALUE; // 25723 14434
// skipping _14433  name type: 0
// skipping _14432  name type: 0
// skipping _14431  name type: 0
    object _14430 = NOVALUE; // 25717 14430
// skipping _14429  name type: 0
    object _14428 = NOVALUE; // 25712 14428
    object _14427 = NOVALUE; // 25711 14427
    object _14426 = NOVALUE; // 25709 14426
    object _14425 = NOVALUE; // 25707 14425
    object _14424 = NOVALUE; // 25706 14424
// skipping _14423  name type: 0
// skipping _14422  name type: 0
    object _14421 = NOVALUE; // 25700 14421
    object _14420 = NOVALUE; // 25699 14420
    object _14419 = NOVALUE; // 25698 14419
    object _14418 = NOVALUE; // 25697 14418
    object _14417 = NOVALUE; // 25695 14417
    object _14416 = NOVALUE; // 25694 14416
// skipping _14415  name type: 0
    object _14414 = NOVALUE; // 25691 14414
    object _14413 = NOVALUE; // 25689 14413
    object _14412 = NOVALUE; // 25688 14412
    object _14411 = NOVALUE; // 25687 14411
    object _14410 = NOVALUE; // 25685 14410
// skipping _14409  name type: 0
    object _14408 = NOVALUE; // 25679 14408
    object _14407 = NOVALUE; // 25677 14407
// skipping _14406  name type: 0
    object _14404 = NOVALUE; // 25672 14404
// skipping _14403  name type: 0
    object _14401 = NOVALUE; // 25667 14401
// skipping _14400  name type: 0
    object _14399 = NOVALUE; // 25662 14399
// skipping _14398  name type: 0
// skipping _14397  name type: 0
    object _14396 = NOVALUE; // 25656 14396
// skipping _14395  name type: 0
    object _14394 = NOVALUE; // 25653 14394
    object _14393 = NOVALUE; // 25647 14393
// skipping _14392  name type: 0
// skipping _14391  name type: 0
    object _14390 = NOVALUE; // 25642 14390
    object _14389 = NOVALUE; // 25639 14389
// skipping _14388  name type: 0
    object _14387 = NOVALUE; // 25635 14387
    object _14386 = NOVALUE; // 25632 14386
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 3 op: STARTLINE (58)

    /** scanner.e:449		if absolute_path(fname) then*/
    // SubProg find_file pc: 5 op: PROC (27)
    RefDS(_fname_25622);
    _14386 = _16absolute_path(_fname_25622);
    // SubProg find_file pc: 9 op: IF (20)
    if (_14386 == 0) {
        DeRef(_14386);
        _14386 = NOVALUE;
        goto L1; // [9] 42
    }
    else {
        if (!IS_ATOM_INT(_14386) && DBL_PTR(_14386)->dbl == 0.0){
            DeRef(_14386);
            _14386 = NOVALUE;
            goto L1; // [9] 42
        }
        DeRef(_14386);
        _14386 = NOVALUE;
    }
    DeRef(_14386);
    _14386 = NOVALUE;
    // SubProg find_file pc: 12 op: STARTLINE (58)

    /** scanner.e:451			if not file_exists(fname) then*/
    // SubProg find_file pc: 14 op: PROC (27)
    RefDS(_fname_25622);
    _14387 = _16file_exists(_fname_25622);
    // SubProg find_file pc: 18 op: NOT_IFW (108)
    if (IS_ATOM_INT(_14387)) {
        if (_14387 != 0){
            DeRef(_14387);
            _14387 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    else {
        if (DBL_PTR(_14387)->dbl != 0.0){
            DeRef(_14387);
            _14387 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    DeRef(_14387);
    _14387 = NOVALUE;
    // SubProg find_file pc: 21 op: STARTLINE (58)

    /** scanner.e:452				CompileErr(51, {new_include_name})*/
    // SubProg find_file pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 25 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_5new_include_name_12600);
    ((intptr_t*)_2)[1] = _5new_include_name_12600;
    _14389 = MAKE_SEQ(_1);
    // SubProg find_file pc: 29 op: PROC (27)
    _49CompileErr(51, _14389, 0);
    _14389 = NOVALUE;
    // SubProg find_file pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25620 op: 159
    // SubProg find_file pc: 35 op: STARTLINE (58)

    /** scanner.e:455			return fname*/
    // SubProg find_file pc: 37 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var full_path_25624
    DeRef(_full_path_25624);

// block var errbuff_25625
    DeRef(_errbuff_25625);

// block var currdir_25626
    DeRef(_currdir_25626);

// block var conf_path_25627
    DeRef(_conf_path_25627);

// block var scan_result_25628
    DeRef(_scan_result_25628);

// block var inc_path_25629
    DeRef(_inc_path_25629);

// block var mainpath_25648
    DeRef(_mainpath_25648);
    return _fname_25622;
    // SubProg find_file pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 25620 op: 159
    // SubProg find_file pc: 42 op: STARTLINE (58)

    /** scanner.e:460		currdir = get_file_path( known_files[current_file_no] )*/
    // SubProg find_file pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _14390 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg find_file pc: 52 op: PROC (27)
    Ref(_14390);
    _0 = _currdir_25626;
    _currdir_25626 = _61get_file_path(_14390);
    DeRef(_0);
    _14390 = NOVALUE;
    // SubProg find_file pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 58 op: STARTLINE (58)

    /** scanner.e:461		full_path = currdir & fname*/
    // SubProg find_file pc: 60 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25624, _currdir_25626, _fname_25622);
    // SubProg find_file pc: 64 op: STARTLINE (58)

    /** scanner.e:462		if file_exists(full_path) then*/
    // SubProg find_file pc: 66 op: PROC (27)
    RefDS(_full_path_25624);
    _14393 = _16file_exists(_full_path_25624);
    // SubProg find_file pc: 70 op: IF (20)
    if (_14393 == 0) {
        DeRef(_14393);
        _14393 = NOVALUE;
        goto L3; // [70] 80
    }
    else {
        if (!IS_ATOM_INT(_14393) && DBL_PTR(_14393)->dbl == 0.0){
            DeRef(_14393);
            _14393 = NOVALUE;
            goto L3; // [70] 80
        }
        DeRef(_14393);
        _14393 = NOVALUE;
    }
    DeRef(_14393);
    _14393 = NOVALUE;
    // SubProg find_file pc: 73 op: STARTLINE (58)

    /** scanner.e:463			return full_path*/
    // SubProg find_file pc: 75 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25622
    DeRefDS(_fname_25622);

// block var errbuff_25625
    DeRef(_errbuff_25625);

// block var currdir_25626
    DeRefDS(_currdir_25626);

// block var conf_path_25627
    DeRef(_conf_path_25627);

// block var scan_result_25628
    DeRef(_scan_result_25628);

// block var inc_path_25629
    DeRef(_inc_path_25629);

// block var mainpath_25648
    DeRef(_mainpath_25648);
    return _full_path_25624;
    // SubProg find_file pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 25620 op: 159
    // SubProg find_file pc: 80 op: STARTLINE (58)

    /** scanner.e:467		sequence mainpath = main_path[1..rfind(SLASH, main_path)]*/
    // SubProg find_file pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 88 op: ASSIGN (18)
    RefDS(_5main_path_12598);
    DeRef(_31805);
    _31805 = _5main_path_12598;
    // SubProg find_file pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_31805)){
            _31806 = SEQ_PTR(_31805)->length;
    }
    else {
        _31806 = 1;
    }
    _31805 = NOVALUE;
    // SubProg find_file pc: 94 op: PROC (27)
    RefDS(_5main_path_12598);
    _14394 = _22rfind(47, _5main_path_12598, _31806);
    _31806 = NOVALUE;
    // SubProg find_file pc: 100 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mainpath_25648;
    RHS_Slice(_5main_path_12598, 1, _14394);
    // SubProg find_file pc: 105 op: STARTLINE (58)

    /** scanner.e:468		if not equal(mainpath, currdir) then*/
    // SubProg find_file pc: 107 op: EQUAL (153)
    if (_mainpath_25648 == _currdir_25626)
    _14396 = 1;
    else if (IS_ATOM_INT(_mainpath_25648) && IS_ATOM_INT(_currdir_25626))
    _14396 = 0;
    else
    _14396 = (compare(_mainpath_25648, _currdir_25626) == 0);
    // SubProg find_file pc: 111 op: NOT_IFW (108)
    if (_14396 != 0)
    goto L4; // [111] 139
    _14396 = NOVALUE;
    // SubProg find_file pc: 114 op: STARTLINE (58)

    /** scanner.e:469			full_path = mainpath & new_include_name*/
    // SubProg find_file pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 118 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25624, _mainpath_25648, _5new_include_name_12600);
    // SubProg find_file pc: 122 op: STARTLINE (58)

    /** scanner.e:470			if file_exists(full_path) then*/
    // SubProg find_file pc: 124 op: PROC (27)
    RefDS(_full_path_25624);
    _14399 = _16file_exists(_full_path_25624);
    // SubProg find_file pc: 128 op: IF (20)
    if (_14399 == 0) {
        DeRef(_14399);
        _14399 = NOVALUE;
        goto L5; // [128] 138
    }
    else {
        if (!IS_ATOM_INT(_14399) && DBL_PTR(_14399)->dbl == 0.0){
            DeRef(_14399);
            _14399 = NOVALUE;
            goto L5; // [128] 138
        }
        DeRef(_14399);
        _14399 = NOVALUE;
    }
    DeRef(_14399);
    _14399 = NOVALUE;
    // SubProg find_file pc: 131 op: STARTLINE (58)

    /** scanner.e:471				return full_path*/
    // SubProg find_file pc: 133 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25622
    DeRefDS(_fname_25622);

// block var errbuff_25625
    DeRef(_errbuff_25625);

// block var currdir_25626
    DeRefDS(_currdir_25626);

// block var conf_path_25627
    DeRef(_conf_path_25627);

// block var scan_result_25628
    DeRef(_scan_result_25628);

// block var inc_path_25629
    DeRef(_inc_path_25629);

// block var mainpath_25648
    DeRefDS(_mainpath_25648);
    DeRef(_14394);
    _14394 = NOVALUE;
    _31805 = NOVALUE;
    return _full_path_25624;
    // SubProg find_file pc: 137 op: NOP1 (159)
L5: // addr: 138 pc: 137 sub: 25620 op: 159
    // SubProg find_file pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 25620 op: 159
    // SubProg find_file pc: 139 op: STARTLINE (58)

    /** scanner.e:475		scan_result = ConfPath(new_include_name)*/
    // SubProg find_file pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 143 op: PROC (27)
    RefDS(_5new_include_name_12600);
    _0 = _scan_result_25628;
    _scan_result_25628 = _46ConfPath(_5new_include_name_12600);
    DeRef(_0);
    // SubProg find_file pc: 147 op: STARTLINE (58)

    /** scanner.e:477		if atom(scan_result) then*/
    // SubProg find_file pc: 149 op: IS_AN_ATOM (67)
    _14401 = IS_ATOM(_scan_result_25628);
    // SubProg find_file pc: 152 op: IF (20)
    if (_14401 == 0)
    {
        _14401 = NOVALUE;
        goto L6; // [152] 164
    }
    else{
        _14401 = NOVALUE;
    }
    // SubProg find_file pc: 155 op: STARTLINE (58)

    /** scanner.e:478			scan_result = ScanPath(fname,"EUINC",0)*/
    // SubProg find_file pc: 157 op: PROC (27)
    RefDS(_fname_25622);
    RefDS(_14402);
    _0 = _scan_result_25628;
    _scan_result_25628 = _46ScanPath(_fname_25622, _14402, 0);
    DeRef(_0);
    // SubProg find_file pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 25620 op: 159
    // SubProg find_file pc: 164 op: STARTLINE (58)

    /** scanner.e:481		if atom(scan_result) then*/
    // SubProg find_file pc: 166 op: IS_AN_ATOM (67)
    _14404 = IS_ATOM(_scan_result_25628);
    // SubProg find_file pc: 169 op: IF (20)
    if (_14404 == 0)
    {
        _14404 = NOVALUE;
        goto L7; // [169] 181
    }
    else{
        _14404 = NOVALUE;
    }
    // SubProg find_file pc: 172 op: STARTLINE (58)

    /** scanner.e:482			scan_result = ScanPath(fname, "EUDIR",1)*/
    // SubProg find_file pc: 174 op: PROC (27)
    RefDS(_fname_25622);
    RefDS(_14405);
    _0 = _scan_result_25628;
    _scan_result_25628 = _46ScanPath(_fname_25622, _14405, 1);
    DeRef(_0);
    // SubProg find_file pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 25620 op: 159
    // SubProg find_file pc: 181 op: STARTLINE (58)

    /** scanner.e:485		if atom(scan_result) then*/
    // SubProg find_file pc: 183 op: IS_AN_ATOM (67)
    _14407 = IS_ATOM(_scan_result_25628);
    // SubProg find_file pc: 186 op: IF (20)
    if (_14407 == 0)
    {
        _14407 = NOVALUE;
        goto L8; // [186] 223
    }
    else{
        _14407 = NOVALUE;
    }
    // SubProg find_file pc: 189 op: STARTLINE (58)

    /** scanner.e:487			full_path = get_eudir() & SLASH & "include" & SLASH & fname*/
    // SubProg find_file pc: 191 op: PROC (27)
    _14408 = _7get_eudir();
    // SubProg find_file pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 198 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _fname_25622;
        concat_list[1] = 47;
        concat_list[2] = _13166;
        concat_list[3] = 47;
        concat_list[4] = _14408;
        Concat_N((object_ptr)&_full_path_25624, concat_list, 5);
    }
    DeRef(_14408);
    _14408 = NOVALUE;
    // SubProg find_file pc: 206 op: STARTLINE (58)

    /** scanner.e:488			if file_exists(full_path) then*/
    // SubProg find_file pc: 208 op: PROC (27)
    RefDS(_full_path_25624);
    _14410 = _16file_exists(_full_path_25624);
    // SubProg find_file pc: 212 op: IF (20)
    if (_14410 == 0) {
        DeRef(_14410);
        _14410 = NOVALUE;
        goto L9; // [212] 222
    }
    else {
        if (!IS_ATOM_INT(_14410) && DBL_PTR(_14410)->dbl == 0.0){
            DeRef(_14410);
            _14410 = NOVALUE;
            goto L9; // [212] 222
        }
        DeRef(_14410);
        _14410 = NOVALUE;
    }
    DeRef(_14410);
    _14410 = NOVALUE;
    // SubProg find_file pc: 215 op: STARTLINE (58)

    /** scanner.e:489				return full_path*/
    // SubProg find_file pc: 217 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25622
    DeRefDS(_fname_25622);

// block var errbuff_25625
    DeRef(_errbuff_25625);

// block var currdir_25626
    DeRef(_currdir_25626);

// block var conf_path_25627
    DeRef(_conf_path_25627);

// block var scan_result_25628
    DeRef(_scan_result_25628);

// block var inc_path_25629
    DeRef(_inc_path_25629);

// block var mainpath_25648
    DeRef(_mainpath_25648);
    DeRef(_14394);
    _14394 = NOVALUE;
    _31805 = NOVALUE;
    return _full_path_25624;
    // SubProg find_file pc: 221 op: NOP1 (159)
L9: // addr: 222 pc: 221 sub: 25620 op: 159
    // SubProg find_file pc: 222 op: NOP1 (159)
L8: // addr: 223 pc: 222 sub: 25620 op: 159
    // SubProg find_file pc: 223 op: STARTLINE (58)

    /** scanner.e:493		if sequence(scan_result) then*/
    // SubProg find_file pc: 225 op: IS_A_SEQUENCE (68)
    _14411 = IS_SEQUENCE(_scan_result_25628);
    // SubProg find_file pc: 228 op: IF (20)
    if (_14411 == 0)
    {
        _14411 = NOVALUE;
        goto LA; // [228] 250
    }
    else{
        _14411 = NOVALUE;
    }
    // SubProg find_file pc: 231 op: STARTLINE (58)

    /** scanner.e:495			close(scan_result[2])*/
    // SubProg find_file pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25628);
    _14412 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_file pc: 237 op: CLOSE (86)
    if (IS_ATOM_INT(_14412))
    EClose(_14412);
    else
    EClose((object)DBL_PTR(_14412)->dbl);
    _14412 = NOVALUE;
    // SubProg find_file pc: 239 op: STARTLINE (58)

    /** scanner.e:496			return scan_result[1]*/
    // SubProg find_file pc: 241 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25628);
    _14413 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_file pc: 245 op: RETURNF (28)
    Ref(_14413);

// Exiting block BLOCK: find_file

// block var fname_25622
    DeRefDS(_fname_25622);

// block var full_path_25624
    DeRef(_full_path_25624);

// block var errbuff_25625
    DeRef(_errbuff_25625);

// block var currdir_25626
    DeRef(_currdir_25626);

// block var conf_path_25627
    DeRef(_conf_path_25627);

// block var scan_result_25628
    DeRef(_scan_result_25628);

// block var inc_path_25629
    DeRef(_inc_path_25629);

// block var mainpath_25648
    DeRef(_mainpath_25648);
    DeRef(_14394);
    _14394 = NOVALUE;
    _31805 = NOVALUE;
    return _14413;
    // SubProg find_file pc: 249 op: NOP1 (159)
LA: // addr: 250 pc: 249 sub: 25620 op: 159
    // SubProg find_file pc: 250 op: STARTLINE (58)

    /** scanner.e:500		errbuff = ""*/
    // SubProg find_file pc: 252 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25625);
    _errbuff_25625 = _5;
    // SubProg find_file pc: 255 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 257 op: STARTLINE (58)

    /** scanner.e:501		full_path = {}*/
    // SubProg find_file pc: 259 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_full_path_25624);
    _full_path_25624 = _5;
    // SubProg find_file pc: 262 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 264 op: STARTLINE (58)

    /** scanner.e:502		if length(currdir) > 0 then*/
    // SubProg find_file pc: 266 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25626)){
            _14414 = SEQ_PTR(_currdir_25626)->length;
    }
    else {
        _14414 = 1;
    }
    // SubProg find_file pc: 269 op: GREATER_IFW_I (124)
    if (_14414 <= 0)
    goto LB; // [269] 321
    // SubProg find_file pc: 273 op: STARTLINE (58)

    /** scanner.e:503			if find(currdir[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25626)){
            _14416 = SEQ_PTR(_currdir_25626)->length;
    }
    else {
        _14416 = 1;
    }
    // SubProg find_file pc: 278 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_currdir_25626);
    _14417 = (object)*(((s1_ptr)_2)->base + _14416);
    // SubProg find_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 284 op: FIND_FROM (176)
    _14418 = find_from(_14417, _39SLASH_CHARS_20003, 1);
    _14417 = NOVALUE;
    // SubProg find_file pc: 289 op: IF (20)
    if (_14418 == 0)
    {
        _14418 = NOVALUE;
        goto LC; // [289] 313
    }
    else{
        _14418 = NOVALUE;
    }
    // SubProg find_file pc: 292 op: STARTLINE (58)

    /** scanner.e:504				full_path = append(full_path, currdir[1..$-1])*/
    // SubProg find_file pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25626)){
            _14419 = SEQ_PTR(_currdir_25626)->length;
    }
    else {
        _14419 = 1;
    }
    // SubProg find_file pc: 297 op: MINUS (10)
    _14420 = _14419 - 1;
    _14419 = NOVALUE;
    // SubProg find_file pc: 301 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_14421;
    RHS_Slice(_currdir_25626, 1, _14420);
    // SubProg find_file pc: 306 op: APPEND (35)
    RefDS(_14421);
    Append(&_full_path_25624, _full_path_25624, _14421);
    DeRefDS(_14421);
    _14421 = NOVALUE;
    // SubProg find_file pc: 310 op: ELSE (23)
    goto LD; // [310] 320
    // SubProg find_file pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 25620 op: 159
    // SubProg find_file pc: 313 op: STARTLINE (58)

    /** scanner.e:506				full_path = append(full_path, currdir)*/
    // SubProg find_file pc: 315 op: APPEND (35)
    RefDS(_currdir_25626);
    Append(&_full_path_25624, _full_path_25624, _currdir_25626);
    // SubProg find_file pc: 319 op: NOP1 (159)
LD: // addr: 320 pc: 319 sub: 25620 op: 159
    // SubProg find_file pc: 320 op: NOP1 (159)
LB: // addr: 321 pc: 320 sub: 25620 op: 159
    // SubProg find_file pc: 321 op: STARTLINE (58)

    /** scanner.e:511		if find(main_path[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 325 op: LENGTH (42)
    if (IS_SEQUENCE(_5main_path_12598)){
            _14424 = SEQ_PTR(_5main_path_12598)->length;
    }
    else {
        _14424 = 1;
    }
    // SubProg find_file pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_5main_path_12598);
    _14425 = (object)*(((s1_ptr)_2)->base + _14424);
    // SubProg find_file pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 334 op: FIND_FROM (176)
    _14426 = find_from(_14425, _39SLASH_CHARS_20003, 1);
    _14425 = NOVALUE;
    // SubProg find_file pc: 339 op: IF (20)
    if (_14426 == 0)
    {
        _14426 = NOVALUE;
        goto LE; // [339] 361
    }
    else{
        _14426 = NOVALUE;
    }
    // SubProg find_file pc: 342 op: STARTLINE (58)

    /** scanner.e:512			errbuff = main_path[1..$-1]  -- looks better*/
    // SubProg find_file pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 346 op: LENGTH (42)
    if (IS_SEQUENCE(_5main_path_12598)){
            _14427 = SEQ_PTR(_5main_path_12598)->length;
    }
    else {
        _14427 = 1;
    }
    // SubProg find_file pc: 349 op: MINUS (10)
    _14428 = _14427 - 1;
    _14427 = NOVALUE;
    // SubProg find_file pc: 353 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_errbuff_25625;
    RHS_Slice(_5main_path_12598, 1, _14428);
    // SubProg find_file pc: 358 op: ELSE (23)
    goto LF; // [358] 371
    // SubProg find_file pc: 360 op: NOP1 (159)
LE: // addr: 361 pc: 360 sub: 25620 op: 159
    // SubProg find_file pc: 361 op: STARTLINE (58)

    /** scanner.e:514			errbuff = main_path*/
    // SubProg find_file pc: 363 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 365 op: ASSIGN (18)
    RefDS(_5main_path_12598);
    DeRef(_errbuff_25625);
    _errbuff_25625 = _5main_path_12598;
    // SubProg find_file pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 370 op: NOP1 (159)
LF: // addr: 371 pc: 370 sub: 25620 op: 159
    // SubProg find_file pc: 371 op: STARTLINE (58)

    /** scanner.e:516		if not find(errbuff, full_path) then*/
    // SubProg find_file pc: 373 op: FIND_FROM (176)
    _14430 = find_from(_errbuff_25625, _full_path_25624, 1);
    // SubProg find_file pc: 378 op: NOT_IFW (108)
    if (_14430 != 0)
    goto L10; // [378] 388
    _14430 = NOVALUE;
    // SubProg find_file pc: 381 op: STARTLINE (58)

    /** scanner.e:517			full_path = append(full_path, errbuff)*/
    // SubProg find_file pc: 383 op: APPEND (35)
    RefDS(_errbuff_25625);
    Append(&_full_path_25624, _full_path_25624, _errbuff_25625);
    // SubProg find_file pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 25620 op: 159
    // SubProg find_file pc: 388 op: STARTLINE (58)

    /** scanner.e:520		conf_path = get_conf_dirs()*/
    // SubProg find_file pc: 390 op: PROC (27)
    _0 = _conf_path_25627;
    _conf_path_25627 = _46get_conf_dirs();
    DeRef(_0);
    // SubProg find_file pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 395 op: STARTLINE (58)

    /** scanner.e:521		if length(conf_path) > 0 then*/
    // SubProg find_file pc: 397 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25627)){
            _14434 = SEQ_PTR(_conf_path_25627)->length;
    }
    else {
        _14434 = 1;
    }
    // SubProg find_file pc: 400 op: GREATER_IFW_I (124)
    if (_14434 <= 0)
    goto L11; // [400] 507
    // SubProg find_file pc: 404 op: STARTLINE (58)

    /** scanner.e:522			conf_path = split(conf_path, PATHSEP)*/
    // SubProg find_file pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 408 op: PROC (27)
    RefDS(_conf_path_25627);
    _0 = _conf_path_25627;
    _conf_path_25627 = _24split(_conf_path_25627, 58, 0, 0);
    DeRefDS(_0);
    // SubProg find_file pc: 415 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 417 op: STARTLINE (58)

    /** scanner.e:523			for i = 1 to length(conf_path) do*/
    // SubProg find_file pc: 419 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25627)){
            _14437 = SEQ_PTR(_conf_path_25627)->length;
    }
    else {
        _14437 = 1;
    }
    // SubProg find_file pc: 422 op: FOR_I (125)
    {
        object _i_25729;
        _i_25729 = 1;
L12: // addr: 429 pc: 422 sub: 25620 op: 125
        if (_i_25729 > _14437){
            goto L13; // [422] 506
        }
        // SubProg find_file pc: 429 op: STARTLINE (58)

        /** scanner.e:524				if find(conf_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 431 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25627);
        _14438 = (object)*(((s1_ptr)_2)->base + _i_25729);
        // SubProg find_file pc: 435 op: LENGTH (42)
        if (IS_SEQUENCE(_14438)){
                _14439 = SEQ_PTR(_14438)->length;
        }
        else {
            _14439 = 1;
        }
        // SubProg find_file pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14438);
        _14440 = (object)*(((s1_ptr)_2)->base + _14439);
        _14438 = NOVALUE;
        // SubProg find_file pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 444 op: FIND_FROM (176)
        _14441 = find_from(_14440, _39SLASH_CHARS_20003, 1);
        _14440 = NOVALUE;
        // SubProg find_file pc: 449 op: IF (20)
        if (_14441 == 0)
        {
            _14441 = NOVALUE;
            goto L14; // [449] 473
        }
        else{
            _14441 = NOVALUE;
        }
        // SubProg find_file pc: 452 op: STARTLINE (58)

        /** scanner.e:525					errbuff = conf_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25627);
        _14442 = (object)*(((s1_ptr)_2)->base + _i_25729);
        // SubProg find_file pc: 458 op: LENGTH (42)
        if (IS_SEQUENCE(_14442)){
                _14443 = SEQ_PTR(_14442)->length;
        }
        else {
            _14443 = 1;
        }
        // SubProg find_file pc: 461 op: MINUS (10)
        _14444 = _14443 - 1;
        _14443 = NOVALUE;
        // SubProg find_file pc: 465 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25625;
        RHS_Slice(_14442, 1, _14444);
        _14442 = NOVALUE;
        // SubProg find_file pc: 470 op: ELSE (23)
        goto L15; // [470] 482
        // SubProg find_file pc: 472 op: NOP1 (159)
L14: // addr: 473 pc: 472 sub: 25620 op: 159
        // SubProg find_file pc: 473 op: STARTLINE (58)

        /** scanner.e:527					errbuff = conf_path[i]*/
        // SubProg find_file pc: 475 op: RHS_SUBS (25)
        DeRef(_errbuff_25625);
        _2 = (object)SEQ_PTR(_conf_path_25627);
        _errbuff_25625 = (object)*(((s1_ptr)_2)->base + _i_25729);
        Ref(_errbuff_25625);
        // SubProg find_file pc: 479 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 481 op: NOP1 (159)
L15: // addr: 482 pc: 481 sub: 25620 op: 159
        // SubProg find_file pc: 482 op: STARTLINE (58)

        /** scanner.e:529				if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 484 op: FIND_FROM (176)
        _14447 = find_from(_errbuff_25625, _full_path_25624, 1);
        // SubProg find_file pc: 489 op: NOT_IFW (108)
        if (_14447 != 0)
        goto L16; // [489] 499
        _14447 = NOVALUE;
        // SubProg find_file pc: 492 op: STARTLINE (58)

        /** scanner.e:530					full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 494 op: APPEND (35)
        RefDS(_errbuff_25625);
        Append(&_full_path_25624, _full_path_25624, _errbuff_25625);
        // SubProg find_file pc: 498 op: NOP1 (159)
L16: // addr: 499 pc: 498 sub: 25620 op: 159
        // SubProg find_file pc: 499 op: STARTLINE (58)

        /** scanner.e:532			end for*/
        // SubProg find_file pc: 501 op: ENDFOR_INT_UP1 (54)
        _i_25729 = _i_25729 + 1;
        goto L12; // [501] 429
L13: // addr: 506 pc: 501 sub: 25620 op: 54
        ;
    }
    // SubProg find_file pc: 506 op: NOP1 (159)
L11: // addr: 507 pc: 506 sub: 25620 op: 159
    // SubProg find_file pc: 507 op: STARTLINE (58)

    /** scanner.e:535		inc_path = getenv("EUINC")*/
    // SubProg find_file pc: 509 op: GETENV (91)
    DeRef(_inc_path_25629);
    _inc_path_25629 = EGetEnv(_14402);
    // SubProg find_file pc: 512 op: STARTLINE (58)

    /** scanner.e:536		if sequence(inc_path) then*/
    // SubProg find_file pc: 514 op: IS_A_SEQUENCE (68)
    _14451 = IS_SEQUENCE(_inc_path_25629);
    // SubProg find_file pc: 517 op: IF (20)
    if (_14451 == 0)
    {
        _14451 = NOVALUE;
        goto L17; // [517] 631
    }
    else{
        _14451 = NOVALUE;
    }
    // SubProg find_file pc: 520 op: STARTLINE (58)

    /** scanner.e:537			if length(inc_path) > 0 then*/
    // SubProg find_file pc: 522 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25629)){
            _14452 = SEQ_PTR(_inc_path_25629)->length;
    }
    else {
        _14452 = 1;
    }
    // SubProg find_file pc: 525 op: GREATER_IFW_I (124)
    if (_14452 <= 0)
    goto L18; // [525] 630
    // SubProg find_file pc: 529 op: STARTLINE (58)

    /** scanner.e:538				inc_path = split(inc_path, PATHSEP)*/
    // SubProg find_file pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 533 op: PROC (27)
    Ref(_inc_path_25629);
    _0 = _inc_path_25629;
    _inc_path_25629 = _24split(_inc_path_25629, 58, 0, 0);
    DeRefi(_0);
    // SubProg find_file pc: 540 op: STARTLINE (58)

    /** scanner.e:539				for i = 1 to length(inc_path) do*/
    // SubProg find_file pc: 542 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25629)){
            _14455 = SEQ_PTR(_inc_path_25629)->length;
    }
    else {
        _14455 = 1;
    }
    // SubProg find_file pc: 545 op: FOR_I (125)
    {
        object _i_25757;
        _i_25757 = 1;
L19: // addr: 552 pc: 545 sub: 25620 op: 125
        if (_i_25757 > _14455){
            goto L1A; // [545] 629
        }
        // SubProg find_file pc: 552 op: STARTLINE (58)

        /** scanner.e:540					if find(inc_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25629);
        _14456 = (object)*(((s1_ptr)_2)->base + _i_25757);
        // SubProg find_file pc: 558 op: LENGTH (42)
        if (IS_SEQUENCE(_14456)){
                _14457 = SEQ_PTR(_14456)->length;
        }
        else {
            _14457 = 1;
        }
        // SubProg find_file pc: 561 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14456);
        _14458 = (object)*(((s1_ptr)_2)->base + _14457);
        _14456 = NOVALUE;
        // SubProg find_file pc: 565 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 567 op: FIND_FROM (176)
        _14459 = find_from(_14458, _39SLASH_CHARS_20003, 1);
        _14458 = NOVALUE;
        // SubProg find_file pc: 572 op: IF (20)
        if (_14459 == 0)
        {
            _14459 = NOVALUE;
            goto L1B; // [572] 596
        }
        else{
            _14459 = NOVALUE;
        }
        // SubProg find_file pc: 575 op: STARTLINE (58)

        /** scanner.e:541						errbuff = inc_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 577 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25629);
        _14460 = (object)*(((s1_ptr)_2)->base + _i_25757);
        // SubProg find_file pc: 581 op: LENGTH (42)
        if (IS_SEQUENCE(_14460)){
                _14461 = SEQ_PTR(_14460)->length;
        }
        else {
            _14461 = 1;
        }
        // SubProg find_file pc: 584 op: MINUS (10)
        _14462 = _14461 - 1;
        _14461 = NOVALUE;
        // SubProg find_file pc: 588 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25625;
        RHS_Slice(_14460, 1, _14462);
        _14460 = NOVALUE;
        // SubProg find_file pc: 593 op: ELSE (23)
        goto L1C; // [593] 605
        // SubProg find_file pc: 595 op: NOP1 (159)
L1B: // addr: 596 pc: 595 sub: 25620 op: 159
        // SubProg find_file pc: 596 op: STARTLINE (58)

        /** scanner.e:543						errbuff = inc_path[i]*/
        // SubProg find_file pc: 598 op: RHS_SUBS_CHECK (92)
        DeRef(_errbuff_25625);
        _2 = (object)SEQ_PTR(_inc_path_25629);
        _errbuff_25625 = (object)*(((s1_ptr)_2)->base + _i_25757);
        Ref(_errbuff_25625);
        // SubProg find_file pc: 602 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 604 op: NOP1 (159)
L1C: // addr: 605 pc: 604 sub: 25620 op: 159
        // SubProg find_file pc: 605 op: STARTLINE (58)

        /** scanner.e:545					if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 607 op: FIND_FROM (176)
        _14465 = find_from(_errbuff_25625, _full_path_25624, 1);
        // SubProg find_file pc: 612 op: NOT_IFW (108)
        if (_14465 != 0)
        goto L1D; // [612] 622
        _14465 = NOVALUE;
        // SubProg find_file pc: 615 op: STARTLINE (58)

        /** scanner.e:546						full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 617 op: APPEND (35)
        RefDS(_errbuff_25625);
        Append(&_full_path_25624, _full_path_25624, _errbuff_25625);
        // SubProg find_file pc: 621 op: NOP1 (159)
L1D: // addr: 622 pc: 621 sub: 25620 op: 159
        // SubProg find_file pc: 622 op: STARTLINE (58)

        /** scanner.e:548				end for*/
        // SubProg find_file pc: 624 op: ENDFOR_INT_UP1 (54)
        _i_25757 = _i_25757 + 1;
        goto L19; // [624] 552
L1A: // addr: 629 pc: 624 sub: 25620 op: 54
        ;
    }
    // SubProg find_file pc: 629 op: NOP1 (159)
L18: // addr: 630 pc: 629 sub: 25620 op: 159
    // SubProg find_file pc: 630 op: NOP1 (159)
L17: // addr: 631 pc: 630 sub: 25620 op: 159
    // SubProg find_file pc: 631 op: STARTLINE (58)

    /** scanner.e:552		if length(get_eudir()) > 0 then*/
    // SubProg find_file pc: 633 op: PROC (27)
    _14468 = _7get_eudir();
    // SubProg find_file pc: 636 op: LENGTH (42)
    if (IS_SEQUENCE(_14468)){
            _14469 = SEQ_PTR(_14468)->length;
    }
    else {
        _14469 = 1;
    }
    DeRef(_14468);
    _14468 = NOVALUE;
    // SubProg find_file pc: 639 op: GREATER_IFW_I (124)
    if (_14469 <= 0)
    goto L1E; // [639] 667
    // SubProg find_file pc: 643 op: STARTLINE (58)

    /** scanner.e:553			if not find(get_eudir(), full_path) then*/
    // SubProg find_file pc: 645 op: PROC (27)
    _14471 = _7get_eudir();
    // SubProg find_file pc: 648 op: FIND_FROM (176)
    _14472 = find_from(_14471, _full_path_25624, 1);
    DeRef(_14471);
    _14471 = NOVALUE;
    // SubProg find_file pc: 653 op: NOT_IFW (108)
    if (_14472 != 0)
    goto L1F; // [653] 666
    _14472 = NOVALUE;
    // SubProg find_file pc: 656 op: STARTLINE (58)

    /** scanner.e:554				full_path = append(full_path, get_eudir())*/
    // SubProg find_file pc: 658 op: PROC (27)
    _14474 = _7get_eudir();
    // SubProg find_file pc: 661 op: APPEND (35)
    Ref(_14474);
    Append(&_full_path_25624, _full_path_25624, _14474);
    DeRef(_14474);
    _14474 = NOVALUE;
    // SubProg find_file pc: 665 op: NOP1 (159)
L1F: // addr: 666 pc: 665 sub: 25620 op: 159
    // SubProg find_file pc: 666 op: NOP1 (159)
L1E: // addr: 667 pc: 666 sub: 25620 op: 159
    // SubProg find_file pc: 667 op: STARTLINE (58)

    /** scanner.e:558		errbuff = ""*/
    // SubProg find_file pc: 669 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25625);
    _errbuff_25625 = _5;
    // SubProg find_file pc: 672 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 674 op: STARTLINE (58)

    /** scanner.e:559		for i = 1 to length(full_path) do*/
    // SubProg find_file pc: 676 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_25624)){
            _14476 = SEQ_PTR(_full_path_25624)->length;
    }
    else {
        _14476 = 1;
    }
    // SubProg find_file pc: 679 op: FOR_I (125)
    {
        object _i_25789;
        _i_25789 = 1;
L20: // addr: 686 pc: 679 sub: 25620 op: 125
        if (_i_25789 > _14476){
            goto L21; // [679] 711
        }
        // SubProg find_file pc: 686 op: STARTLINE (58)

        /** scanner.e:560			errbuff &= sprintf("\t%s\n", {full_path[i]})*/
        // SubProg find_file pc: 688 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_25624);
        _14478 = (object)*(((s1_ptr)_2)->base + _i_25789);
        // SubProg find_file pc: 692 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_14478);
        ((intptr_t*)_2)[1] = _14478;
        _14479 = MAKE_SEQ(_1);
        _14478 = NOVALUE;
        // SubProg find_file pc: 696 op: SPRINTF (53)
        _14480 = EPrintf(-9999999, _14477, _14479);
        DeRefDS(_14479);
        _14479 = NOVALUE;
        // SubProg find_file pc: 700 op: CONCAT (15)
        Concat((object_ptr)&_errbuff_25625, _errbuff_25625, _14480);
        DeRefDS(_14480);
        _14480 = NOVALUE;
        // SubProg find_file pc: 704 op: STARTLINE (58)

        /** scanner.e:561		end for*/
        // SubProg find_file pc: 706 op: ENDFOR_INT_UP1 (54)
        _i_25789 = _i_25789 + 1;
        goto L20; // [706] 686
L21: // addr: 711 pc: 706 sub: 25620 op: 54
        ;
    }
    // SubProg find_file pc: 711 op: STARTLINE (58)

    /** scanner.e:563		CompileErr(52, {new_include_name, errbuff})*/
    // SubProg find_file pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 715 op: RIGHT_BRACE_2 (85)
    RefDS(_errbuff_25625);
    RefDS(_5new_include_name_12600);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _5new_include_name_12600;
    ((intptr_t *)_2)[2] = _errbuff_25625;
    _14482 = MAKE_SEQ(_1);
    // SubProg find_file pc: 719 op: PROC (27)
    _49CompileErr(52, _14482, 0);
    _14482 = NOVALUE;
    // SubProg find_file pc: 724 op: BADRETURNF (43)
    ;
}


object _61path_open()
{
    object _fh_25801 = NOVALUE;
// skipping _14485  name type: 0
// skipping _14484  name type: 0
// skipping _14483  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg path_open pc: 1 op: STARTLINE (58)

    /** scanner.e:569		new_include_name = find_file(new_include_name)*/
    // SubProg path_open pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 5 op: PROC (27)
    RefDS(_5new_include_name_12600);
    _0 = _61find_file(_5new_include_name_12600);
    DeRefDS(_5new_include_name_12600);
    _5new_include_name_12600 = _0;
    // SubProg path_open pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 11 op: STARTLINE (58)

    /** scanner.e:570		new_include_name = maybe_preprocess(new_include_name)*/
    // SubProg path_open pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 15 op: PROC (27)
    RefDS(_5new_include_name_12600);
    _0 = _63maybe_preprocess(_5new_include_name_12600);
    DeRefDS(_5new_include_name_12600);
    _5new_include_name_12600 = _0;
    // SubProg path_open pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 21 op: STARTLINE (58)

    /** scanner.e:572		fh = open_locked(new_include_name)*/
    // SubProg path_open pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 25 op: PROC (27)
    RefDS(_5new_include_name_12600);
    _fh_25801 = _7open_locked(_5new_include_name_12600);
    // SubProg path_open pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fh_25801)) {
        _1 = (object)(DBL_PTR(_fh_25801)->dbl);
        DeRefDS(_fh_25801);
        _fh_25801 = _1;
    }
    // SubProg path_open pc: 31 op: STARTLINE (58)

    /** scanner.e:573		return fh*/
    // SubProg path_open pc: 33 op: RETURNF (28)

// Exiting block BLOCK: path_open
    return _fh_25801;
    // SubProg path_open pc: 37 op: BADRETURNF (43)
    ;
}


object _61NameSpace_declaration(object _sym_25825)
{
    object _h_25826 = NOVALUE;
// skipping _14506  name type: 0
// skipping _14505  name type: 0
    object _14504 = NOVALUE; // 25864 14504
// skipping _14503  name type: 0
    object _14502 = NOVALUE; // 25859 14502
// skipping _14501  name type: 0
    object _14500 = NOVALUE; // 25854 14500
// skipping _14499  name type: 0
    object _14498 = NOVALUE; // 25850 14498
    object _14497 = NOVALUE; // 25847 14497
    object _14496 = NOVALUE; // 25845 14496
// skipping _14495  name type: 0
    object _14494 = NOVALUE; // 25840 14494
    object _14493 = NOVALUE; // 25838 14493
    object _14492 = NOVALUE; // 25837 14492
    object _14491 = NOVALUE; // 25832 14491
    object _14490 = NOVALUE; // 25830 14490
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NameSpace_declaration pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25825)) {
        _1 = (object)(DBL_PTR(_sym_25825)->dbl);
        DeRefDS(_sym_25825);
        _sym_25825 = _1;
    }
    // SubProg NameSpace_declaration pc: 3 op: STARTLINE (58)

    /** scanner.e:594		DefinedYet(sym)*/
    // SubProg NameSpace_declaration pc: 5 op: PROC (27)
    _53DefinedYet(_sym_25825);
    // SubProg NameSpace_declaration pc: 8 op: STARTLINE (58)

    /** scanner.e:595		if find(SymTab[sym][S_SCOPE], {SC_GLOBAL, SC_PUBLIC, SC_EXPORT, SC_PREDEF}) then*/
    // SubProg NameSpace_declaration pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _14490 = (object)*(((s1_ptr)_2)->base + _sym_25825);
    // SubProg NameSpace_declaration pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14490);
    _14491 = (object)*(((s1_ptr)_2)->base + 4);
    _14490 = NOVALUE;
    // SubProg NameSpace_declaration pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 26 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 30 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 11;
    ((intptr_t*)_2)[4] = 7;
    _14492 = MAKE_SEQ(_1);
    // SubProg NameSpace_declaration pc: 37 op: FIND_FROM (176)
    _14493 = find_from(_14491, _14492, 1);
    _14491 = NOVALUE;
    DeRefDS(_14492);
    _14492 = NOVALUE;
    // SubProg NameSpace_declaration pc: 42 op: IF (20)
    if (_14493 == 0)
    {
        _14493 = NOVALUE;
        goto L1; // [42] 104
    }
    else{
        _14493 = NOVALUE;
    }
    // SubProg NameSpace_declaration pc: 45 op: STARTLINE (58)

    /** scanner.e:597			h = SymTab[sym][S_HASHVAL]*/
    // SubProg NameSpace_declaration pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _14494 = (object)*(((s1_ptr)_2)->base + _sym_25825);
    // SubProg NameSpace_declaration pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14494);
    _h_25826 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_25826)){
        _h_25826 = (object)DBL_PTR(_h_25826)->dbl;
    }
    _14494 = NOVALUE;
    // SubProg NameSpace_declaration pc: 61 op: STARTLINE (58)

    /** scanner.e:599			sym = NewEntry(SymTab[sym][S_NAME], 0, 0, VARIABLE, h, buckets[h], 0)*/
    // SubProg NameSpace_declaration pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _14496 = (object)*(((s1_ptr)_2)->base + _sym_25825);
    // SubProg NameSpace_declaration pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14496);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _14497 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _14497 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _14496 = NOVALUE;
    // SubProg NameSpace_declaration pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _14498 = (object)*(((s1_ptr)_2)->base + _h_25826);
    // SubProg NameSpace_declaration pc: 83 op: PROC (27)
    Ref(_14497);
    Ref(_14498);
    _sym_25825 = _53NewEntry(_14497, 0, 0, -100, _h_25826, _14498, 0);
    _14497 = NOVALUE;
    _14498 = NOVALUE;
    // SubProg NameSpace_declaration pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25825)) {
        _1 = (object)(DBL_PTR(_sym_25825)->dbl);
        DeRefDS(_sym_25825);
        _sym_25825 = _1;
    }
    // SubProg NameSpace_declaration pc: 95 op: STARTLINE (58)

    /** scanner.e:600			buckets[h] = sym*/
    // SubProg NameSpace_declaration pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _2 = (object)(((s1_ptr)_2)->base + _h_25826);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_25825;
    DeRef(_1);
    // SubProg NameSpace_declaration pc: 103 op: NOP1 (159)
L1: // addr: 104 pc: 103 sub: 25822 op: 159
    // SubProg NameSpace_declaration pc: 104 op: STARTLINE (58)

    /** scanner.e:602		SymTab[sym][S_SCOPE] = SC_LOCAL*/
    // SubProg NameSpace_declaration pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 108 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25825 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 117 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    _14500 = NOVALUE;
    // SubProg NameSpace_declaration pc: 121 op: STARTLINE (58)

    /** scanner.e:603		SymTab[sym][S_MODE] = M_CONSTANT*/
    // SubProg NameSpace_declaration pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 125 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25825 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 134 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14502 = NOVALUE;
    // SubProg NameSpace_declaration pc: 138 op: STARTLINE (58)

    /** scanner.e:604		SymTab[sym][S_TOKEN] = NAMESPACE -- [S_OBJ] will get the file number referred-to*/
    // SubProg NameSpace_declaration pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 142 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25825 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 151 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_TOKEN_12137))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 523;
    DeRef(_1);
    _14504 = NOVALUE;
    // SubProg NameSpace_declaration pc: 155 op: STARTLINE (58)

    /** scanner.e:605		if TRANSLATE then*/
    // SubProg NameSpace_declaration pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 159 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L2; // [159] 173
    }
    else{
    }
    // SubProg NameSpace_declaration pc: 162 op: STARTLINE (58)

    /** scanner.e:606			num_routines += 1 -- order of ns declaration relative to routines*/
    // SubProg NameSpace_declaration pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 166 op: PLUS (11)
    _5num_routines_12486 = _5num_routines_12486 + 1;
    // SubProg NameSpace_declaration pc: 172 op: NOP1 (159)
L2: // addr: 173 pc: 172 sub: 25822 op: 159
    // SubProg NameSpace_declaration pc: 173 op: STARTLINE (58)

    /** scanner.e:609		return sym*/
    // SubProg NameSpace_declaration pc: 175 op: RETURNF (28)

// Exiting block BLOCK: NameSpace_declaration

// block var h_25826
    return _sym_25825;
    // SubProg NameSpace_declaration pc: 179 op: BADRETURNF (43)
    ;
}


void _61default_namespace()
{
    object _tok_25876 = NOVALUE;
    object _sym_25878 = NOVALUE;
    object _14528 = NOVALUE; // 25923 14528
    object _14527 = NOVALUE; // 25921 14527
// skipping _14526  name type: 0
    object _14525 = NOVALUE; // 25915 14525
// skipping _14524  name type: 0
    object _14523 = NOVALUE; // 25910 14523
// skipping _14522  name type: 0
// skipping _14521  name type: 0
    object _14520 = NOVALUE; // 25904 14520
// skipping _14519  name type: 0
// skipping _14518  name type: 0
    object _14517 = NOVALUE; // 25897 14517
// skipping _14516  name type: 0
    object _14515 = NOVALUE; // 25893 14515
    object _14513 = NOVALUE; // 25891 14513
    object _14512 = NOVALUE; // 25889 14512
    object _14511 = NOVALUE; // 25888 14511
    object _14510 = NOVALUE; // 25885 14510
    object _14509 = NOVALUE; // 25884 14509
    object _14508 = NOVALUE; // 25882 14508
// skipping _14507  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg default_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:618		tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 5 op: CALL_FUNC (137)
    _0 = (object)_00[_61scanner_rid_25872].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25876);
    _tok_25876 = _1;
    // SubProg default_namespace pc: 9 op: STARTLINE (58)

    /** scanner.e:619		if tok[T_ID] = VARIABLE and equal( SymTab[tok[T_SYM]][S_NAME], "namespace" ) then*/
    // SubProg default_namespace pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25876);
    _14508 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 19 op: EQUALS (3)
    if (IS_ATOM_INT(_14508)) {
        _14509 = (_14508 == -100);
    }
    else {
        _14509 = binary_op(EQUALS, _14508, -100);
    }
    _14508 = NOVALUE;
    // SubProg default_namespace pc: 23 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_14509)) {
        if (_14509 == 0) {
            goto L1; // [23] 177
        }
    }
    else {
        if (DBL_PTR(_14509)->dbl == 0.0) {
            goto L1; // [23] 177
        }
    }
    // SubProg default_namespace pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25876);
    _14511 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg default_namespace pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_14511)){
        _14512 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14511)->dbl));
    }
    else{
        _14512 = (object)*(((s1_ptr)_2)->base + _14511);
    }
    // SubProg default_namespace pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14512);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _14513 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _14513 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _14512 = NOVALUE;
    // SubProg default_namespace pc: 45 op: EQUAL (153)
    if (_14513 == _14514)
    _14515 = 1;
    else if (IS_ATOM_INT(_14513) && IS_ATOM_INT(_14514))
    _14515 = 0;
    else
    _14515 = (compare(_14513, _14514) == 0);
    _14513 = NOVALUE;
    // SubProg default_namespace pc: 49 op: NOP1 (159)
    // SubProg default_namespace pc: 50 op: IF (20)
    if (_14515 == 0)
    {
        _14515 = NOVALUE;
        goto L1; // [50] 177
    }
    else{
        _14515 = NOVALUE;
    }
    // SubProg default_namespace pc: 53 op: STARTLINE (58)

    /** scanner.e:621			tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 57 op: CALL_FUNC (137)
    _0 = (object)_00[_61scanner_rid_25872].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25876);
    _tok_25876 = _1;
    // SubProg default_namespace pc: 61 op: STARTLINE (58)

    /** scanner.e:622			if tok[T_ID] != VARIABLE then*/
    // SubProg default_namespace pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25876);
    _14517 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 71 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14517, -100)){
        _14517 = NOVALUE;
        goto L2; // [71] 83
    }
    _14517 = NOVALUE;
    // SubProg default_namespace pc: 75 op: STARTLINE (58)

    /** scanner.e:623				CompileErr(114)*/
    // SubProg default_namespace pc: 77 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(114, _21958, 0);
    // SubProg default_namespace pc: 82 op: NOP1 (159)
L2: // addr: 83 pc: 82 sub: 25873 op: 159
    // SubProg default_namespace pc: 83 op: STARTLINE (58)

    /** scanner.e:626			sym = tok[T_SYM]*/
    // SubProg default_namespace pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25876);
    _sym_25878 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_25878)){
        _sym_25878 = (object)DBL_PTR(_sym_25878)->dbl;
    }
    // SubProg default_namespace pc: 93 op: STARTLINE (58)

    /** scanner.e:628			SymTab[sym][S_FILE_NO] = current_file_no*/
    // SubProg default_namespace pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 97 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25878 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 106 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_FILE_NO_12128))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5current_file_no_12477;
    DeRef(_1);
    _14520 = NOVALUE;
    // SubProg default_namespace pc: 110 op: STARTLINE (58)

    /** scanner.e:629			sym  = NameSpace_declaration( sym )*/
    // SubProg default_namespace pc: 112 op: PROC (27)
    _sym_25878 = _61NameSpace_declaration(_sym_25878);
    // SubProg default_namespace pc: 116 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25878)) {
        _1 = (object)(DBL_PTR(_sym_25878)->dbl);
        DeRefDS(_sym_25878);
        _sym_25878 = _1;
    }
    // SubProg default_namespace pc: 118 op: STARTLINE (58)

    /** scanner.e:630			SymTab[sym][S_OBJ] = current_file_no*/
    // SubProg default_namespace pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 122 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25878 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 131 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5current_file_no_12477;
    DeRef(_1);
    _14523 = NOVALUE;
    // SubProg default_namespace pc: 135 op: STARTLINE (58)

    /** scanner.e:631			SymTab[sym][S_SCOPE] = SC_PUBLIC*/
    // SubProg default_namespace pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 139 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25878 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 148 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 13;
    DeRef(_1);
    _14525 = NOVALUE;
    // SubProg default_namespace pc: 152 op: STARTLINE (58)

    /** scanner.e:633			default_namespaces[current_file_no] = SymTab[sym][S_NAME]*/
    // SubProg default_namespace pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _14527 = (object)*(((s1_ptr)_2)->base + _sym_25878);
    // SubProg default_namespace pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 166 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14527);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _14528 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _14528 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _14527 = NOVALUE;
    // SubProg default_namespace pc: 170 op: ASSIGN_SUBS (16)
    Ref(_14528);
    _2 = (object)SEQ_PTR(_61default_namespaces_25209);
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14528;
    if( _1 != _14528 ){
        DeRef(_1);
    }
    _14528 = NOVALUE;
    // SubProg default_namespace pc: 174 op: ELSE (23)
    goto L3; // [174] 185
    // SubProg default_namespace pc: 176 op: NOP1 (159)
L1: // addr: 177 pc: 176 sub: 25873 op: 159
    // SubProg default_namespace pc: 177 op: STARTLINE (58)

    /** scanner.e:637			bp = 1*/
    // SubProg default_namespace pc: 179 op: ASSIGN (18)
    _49bp_48785 = 1;
    // SubProg default_namespace pc: 182 op: INTEGER_CHECK (96)
    // SubProg default_namespace pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 25873 op: 159
    // SubProg default_namespace pc: 185 op: STARTLINE (58)

    /** scanner.e:640	end procedure*/
    // SubProg default_namespace pc: 187 op: RETURNP (29)

// Exiting block BLOCK: default_namespace

// block var tok_25876
    DeRef(_tok_25876);

// block var sym_25878
    DeRef(_14509);
    _14509 = NOVALUE;
    _14511 = NOVALUE;
    return;
    // SubProg default_namespace pc: 190 op: BADRETURNF (43)
    ;
}


void _61add_exports(object _from_file_25928, object _to_file_25929)
{
    object _exports_25930 = NOVALUE;
    object _direct_25931 = NOVALUE;
    object _14548 = NOVALUE; // 25960 14548
    object _14547 = NOVALUE; // 25959 14547
    object _14546 = NOVALUE; // 25958 14546
    object _14545 = NOVALUE; // 25957 14545
    object _14544 = NOVALUE; // 25954 14544
// skipping _14543  name type: 0
    object _14542 = NOVALUE; // 25952 14542
// skipping _14541  name type: 0
    object _14540 = NOVALUE; // 25949 14540
    object _14539 = NOVALUE; // 25948 14539
// skipping _14538  name type: 0
    object _14537 = NOVALUE; // 25946 14537
    object _14536 = NOVALUE; // 25945 14536
    object _14535 = NOVALUE; // 25944 14535
// skipping _14534  name type: 0
    object _14533 = NOVALUE; // 25941 14533
    object _14532 = NOVALUE; // 25940 14532
    object _14531 = NOVALUE; // 25938 14531
// skipping _14530  name type: 0
// skipping _14529  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 5 op: STARTLINE (58)

    /** scanner.e:645		direct = file_include[to_file]*/
    // SubProg add_exports pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_direct_25931);
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _direct_25931 = (object)*(((s1_ptr)_2)->base + _to_file_25929);
    Ref(_direct_25931);
    // SubProg add_exports pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 15 op: STARTLINE (58)

    /** scanner.e:646		exports = file_public[from_file]*/
    // SubProg add_exports pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 19 op: RHS_SUBS_CHECK (92)
    DeRef(_exports_25930);
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _exports_25930 = (object)*(((s1_ptr)_2)->base + _from_file_25928);
    Ref(_exports_25930);
    // SubProg add_exports pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 25 op: STARTLINE (58)

    /** scanner.e:647		for i = 1 to length(exports) do*/
    // SubProg add_exports pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_exports_25930)){
            _14531 = SEQ_PTR(_exports_25930)->length;
    }
    else {
        _14531 = 1;
    }
    // SubProg add_exports pc: 30 op: FOR_I (125)
    {
        object _i_25937;
        _i_25937 = 1;
L1: // addr: 37 pc: 30 sub: 25926 op: 125
        if (_i_25937 > _14531){
            goto L2; // [30] 127
        }
        // SubProg add_exports pc: 37 op: STARTLINE (58)

        /** scanner.e:648			if not find( exports[i], direct ) then*/
        // SubProg add_exports pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25930);
        _14532 = (object)*(((s1_ptr)_2)->base + _i_25937);
        // SubProg add_exports pc: 43 op: FIND_FROM (176)
        _14533 = find_from(_14532, _direct_25931, 1);
        _14532 = NOVALUE;
        // SubProg add_exports pc: 48 op: NOT_IFW (108)
        if (_14533 != 0)
        goto L3; // [48] 120
        _14533 = NOVALUE;
        // SubProg add_exports pc: 51 op: STARTLINE (58)

        /** scanner.e:649				if not find( -exports[i], direct ) then*/
        // SubProg add_exports pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25930);
        _14535 = (object)*(((s1_ptr)_2)->base + _i_25937);
        // SubProg add_exports pc: 57 op: UMINUS (12)
        if (IS_ATOM_INT(_14535)) {
            if ((uintptr_t)_14535 == (uintptr_t)HIGH_BITS){
                _14536 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14536 = - _14535;
            }
        }
        else {
            _14536 = unary_op(UMINUS, _14535);
        }
        _14535 = NOVALUE;
        // SubProg add_exports pc: 60 op: FIND_FROM (176)
        _14537 = find_from(_14536, _direct_25931, 1);
        DeRef(_14536);
        _14536 = NOVALUE;
        // SubProg add_exports pc: 65 op: NOT_IFW (108)
        if (_14537 != 0)
        goto L4; // [65] 82
        _14537 = NOVALUE;
        // SubProg add_exports pc: 68 op: STARTLINE (58)

        /** scanner.e:650					direct &= -exports[i]*/
        // SubProg add_exports pc: 70 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25930);
        _14539 = (object)*(((s1_ptr)_2)->base + _i_25937);
        // SubProg add_exports pc: 74 op: UMINUS (12)
        if (IS_ATOM_INT(_14539)) {
            if ((uintptr_t)_14539 == (uintptr_t)HIGH_BITS){
                _14540 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14540 = - _14539;
            }
        }
        else {
            _14540 = unary_op(UMINUS, _14539);
        }
        _14539 = NOVALUE;
        // SubProg add_exports pc: 77 op: CONCAT (15)
        if (IS_SEQUENCE(_direct_25931) && IS_ATOM(_14540)) {
            Ref(_14540);
            Append(&_direct_25931, _direct_25931, _14540);
        }
        else if (IS_ATOM(_direct_25931) && IS_SEQUENCE(_14540)) {
        }
        else {
            Concat((object_ptr)&_direct_25931, _direct_25931, _14540);
        }
        DeRef(_14540);
        _14540 = NOVALUE;
        // SubProg add_exports pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 25926 op: 159
        // SubProg add_exports pc: 82 op: STARTLINE (58)

        /** scanner.e:654				include_matrix[to_file][exports[i]] = or_bits( PUBLIC_INCLUDE, include_matrix[to_file][exports[i]] )*/
        // SubProg add_exports pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 86 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7include_matrix_11396 = MAKE_SEQ(_2);
        }
        _3 = (object)(_to_file_25929 + ((s1_ptr)_2)->base);
        // SubProg add_exports pc: 91 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25930);
        _14544 = (object)*(((s1_ptr)_2)->base + _i_25937);
        // SubProg add_exports pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 99 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _14545 = (object)*(((s1_ptr)_2)->base + _to_file_25929);
        // SubProg add_exports pc: 103 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25930);
        _14546 = (object)*(((s1_ptr)_2)->base + _i_25937);
        // SubProg add_exports pc: 107 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14545);
        if (!IS_ATOM_INT(_14546)){
            _14547 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14546)->dbl));
        }
        else{
            _14547 = (object)*(((s1_ptr)_2)->base + _14546);
        }
        _14545 = NOVALUE;
        // SubProg add_exports pc: 111 op: OR_BITS (24)
        if (IS_ATOM_INT(_14547)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14547;
                 _14548 = MAKE_UINT(tu);
            }
        }
        else {
            _14548 = binary_op(OR_BITS, 4, _14547);
        }
        _14547 = NOVALUE;
        // SubProg add_exports pc: 115 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14544))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14544)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _14544);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14548;
        if( _1 != _14548 ){
            DeRef(_1);
        }
        _14548 = NOVALUE;
        _14542 = NOVALUE;
        // SubProg add_exports pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 25926 op: 159
        // SubProg add_exports pc: 120 op: STARTLINE (58)

        /** scanner.e:656		end for*/
        // SubProg add_exports pc: 122 op: ENDFOR_INT_UP1 (54)
        _i_25937 = _i_25937 + 1;
        goto L1; // [122] 37
L2: // addr: 127 pc: 122 sub: 25926 op: 54
        ;
    }
    // SubProg add_exports pc: 127 op: STARTLINE (58)

    /** scanner.e:657		file_include[to_file] = direct*/
    // SubProg add_exports pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 131 op: ASSIGN_SUBS (16)
    RefDS(_direct_25931);
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _2 = (object)(((s1_ptr)_2)->base + _to_file_25929);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _direct_25931;
    DeRef(_1);
    // SubProg add_exports pc: 135 op: STARTLINE (58)

    /** scanner.e:658	end procedure*/
    // SubProg add_exports pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_exports

// block var from_file_25928

// block var to_file_25929

// block var exports_25930
    DeRef(_exports_25930);

// block var direct_25931
    DeRefDS(_direct_25931);
    _14546 = NOVALUE;
    _14544 = NOVALUE;
    return;
    // SubProg add_exports pc: 140 op: BADRETURNF (43)
    ;
}


void _61patch_exports(object _for_file_25964)
{
    object _export_len_25965 = NOVALUE;
// skipping _14560  name type: 0
    object _14559 = NOVALUE; // 25985 14559
    object _14558 = NOVALUE; // 25984 14558
// skipping _14557  name type: 0
    object _14556 = NOVALUE; // 25980 14556
    object _14555 = NOVALUE; // 25978 14555
    object _14554 = NOVALUE; // 25977 14554
    object _14553 = NOVALUE; // 25975 14553
// skipping _14552  name type: 0
    object _14551 = NOVALUE; // 25973 14551
    object _14550 = NOVALUE; // 25972 14550
    object _14549 = NOVALUE; // 25969 14549
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_exports pc: 3 op: STARTLINE (58)

    /** scanner.e:663		for i = 1 to length(file_include) do*/
    // SubProg patch_exports pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_exports pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14549 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14549 = 1;
    }
    // SubProg patch_exports pc: 10 op: FOR_I (125)
    {
        object _i_25967;
        _i_25967 = 1;
L1: // addr: 17 pc: 10 sub: 25962 op: 125
        if (_i_25967 > _14549){
            goto L2; // [10] 99
        }
        // SubProg patch_exports pc: 17 op: STARTLINE (58)

        /** scanner.e:664			if find( for_file, file_include[i] ) or find( -for_file, file_include[i] ) then*/
        // SubProg patch_exports pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_11394);
        _14550 = (object)*(((s1_ptr)_2)->base + _i_25967);
        // SubProg patch_exports pc: 25 op: FIND_FROM (176)
        _14551 = find_from(_for_file_25964, _14550, 1);
        _14550 = NOVALUE;
        // SubProg patch_exports pc: 30 op: SC1_OR_IF (147)
        if (_14551 != 0) {
            goto L3; // [30] 53
        }
        // SubProg patch_exports pc: 34 op: UMINUS (12)
        if ((uintptr_t)_for_file_25964 == (uintptr_t)HIGH_BITS){
            _14553 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _14553 = - _for_file_25964;
        }
        // SubProg patch_exports pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_11394);
        _14554 = (object)*(((s1_ptr)_2)->base + _i_25967);
        // SubProg patch_exports pc: 43 op: FIND_FROM (176)
        _14555 = find_from(_14553, _14554, 1);
        DeRef(_14553);
        _14553 = NOVALUE;
        _14554 = NOVALUE;
        // SubProg patch_exports pc: 48 op: NOP1 (159)
        // SubProg patch_exports pc: 49 op: IF (20)
        if (_14555 == 0)
        {
            _14555 = NOVALUE;
            goto L4; // [49] 92
        }
        else{
            _14555 = NOVALUE;
        }
        // SubProg patch_exports pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 25962 op: 159
        // SubProg patch_exports pc: 53 op: STARTLINE (58)

        /** scanner.e:665				export_len = length( file_include[i] )*/
        // SubProg patch_exports pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_11394);
        _14556 = (object)*(((s1_ptr)_2)->base + _i_25967);
        // SubProg patch_exports pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_14556)){
                _export_len_25965 = SEQ_PTR(_14556)->length;
        }
        else {
            _export_len_25965 = 1;
        }
        _14556 = NOVALUE;
        // SubProg patch_exports pc: 64 op: STARTLINE (58)

        /** scanner.e:666				add_exports( for_file, i )*/
        // SubProg patch_exports pc: 66 op: PROC (27)
        _61add_exports(_for_file_25964, _i_25967);
        // SubProg patch_exports pc: 70 op: STARTLINE (58)

        /** scanner.e:667				if length( file_include[i] ) != export_len then*/
        // SubProg patch_exports pc: 72 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 74 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_11394);
        _14558 = (object)*(((s1_ptr)_2)->base + _i_25967);
        // SubProg patch_exports pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_14558)){
                _14559 = SEQ_PTR(_14558)->length;
        }
        else {
            _14559 = 1;
        }
        _14558 = NOVALUE;
        // SubProg patch_exports pc: 81 op: NOTEQ_IFW_I (122)
        if (_14559 == _export_len_25965)
        goto L5; // [81] 91
        // SubProg patch_exports pc: 85 op: STARTLINE (58)

        /** scanner.e:669					patch_exports( i )*/
        // SubProg patch_exports pc: 87 op: PROC (27)
        _61patch_exports(_i_25967);
        // SubProg patch_exports pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 25962 op: 159
        // SubProg patch_exports pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 25962 op: 159
        // SubProg patch_exports pc: 92 op: STARTLINE (58)

        /** scanner.e:672		end for*/
        // SubProg patch_exports pc: 94 op: ENDFOR_INT_UP1 (54)
        _i_25967 = _i_25967 + 1;
        goto L1; // [94] 17
L2: // addr: 99 pc: 94 sub: 25962 op: 54
        ;
    }
    // SubProg patch_exports pc: 99 op: STARTLINE (58)

    /** scanner.e:673	end procedure*/
    // SubProg patch_exports pc: 101 op: RETURNP (29)

// Exiting block BLOCK: patch_exports

// block var for_file_25964

// block var export_len_25965
    _14556 = NOVALUE;
    _14558 = NOVALUE;
    return;
    // SubProg patch_exports pc: 104 op: BADRETURNF (43)
    ;
}


void _61update_include_matrix(object _included_file_25989, object _from_file_25990)
{
    object _add_public_26000 = NOVALUE;
    object _px_26018 = NOVALUE;
    object _indirect_26077 = NOVALUE;
    object _mask_26080 = NOVALUE;
    object _ix_26091 = NOVALUE;
    object _indirect_file_26095 = NOVALUE;
// skipping _14637  name type: 0
// skipping _14636  name type: 0
    object _14635 = NOVALUE; // 26118 14635
    object _14634 = NOVALUE; // 26117 14634
// skipping _14633  name type: 0
    object _14632 = NOVALUE; // 26114 14632
    object _14631 = NOVALUE; // 26113 14631
    object _14630 = NOVALUE; // 26112 14630
    object _14629 = NOVALUE; // 26109 14629
    object _14628 = NOVALUE; // 26108 14628
    object _14627 = NOVALUE; // 26104 14627
    object _14626 = NOVALUE; // 26103 14626
    object _14625 = NOVALUE; // 26100 14625
    object _14624 = NOVALUE; // 26099 14624
// skipping _14623  name type: 0
// skipping _14622  name type: 0
    object _14621 = NOVALUE; // 26093 14621
// skipping _14620  name type: 0
    object _14619 = NOVALUE; // 26089 14619
    object _14618 = NOVALUE; // 26087 14618
    object _14617 = NOVALUE; // 26086 14617
// skipping _14616  name type: 0
    object _14615 = NOVALUE; // 26082 14615
// skipping _14614  name type: 0
    object _14613 = NOVALUE; // 26076 14613
    object _14612 = NOVALUE; // 26075 14612
// skipping _14611  name type: 0
    object _14610 = NOVALUE; // 26071 14610
    object _14609 = NOVALUE; // 26070 14609
    object _14608 = NOVALUE; // 26069 14608
    object _14607 = NOVALUE; // 26068 14607
    object _14606 = NOVALUE; // 26067 14606
// skipping _14605  name type: 0
    object _14604 = NOVALUE; // 26062 14604
    object _14603 = NOVALUE; // 26061 14603
    object _14602 = NOVALUE; // 26060 14602
    object _14601 = NOVALUE; // 26057 14601
    object _14600 = NOVALUE; // 26056 14600
    object _14599 = NOVALUE; // 26055 14599
// skipping _14598  name type: 0
    object _14597 = NOVALUE; // 26050 14597
    object _14596 = NOVALUE; // 26049 14596
    object _14595 = NOVALUE; // 26048 14595
// skipping _14594  name type: 0
    object _14593 = NOVALUE; // 26045 14593
    object _14592 = NOVALUE; // 26044 14592
    object _14591 = NOVALUE; // 26043 14591
    object _14590 = NOVALUE; // 26042 14590
    object _14589 = NOVALUE; // 26039 14589
    object _14588 = NOVALUE; // 26038 14588
    object _14587 = NOVALUE; // 26037 14587
    object _14586 = NOVALUE; // 26033 14586
    object _14585 = NOVALUE; // 26032 14585
    object _14584 = NOVALUE; // 26031 14584
    object _14583 = NOVALUE; // 26030 14583
// skipping _14582  name type: 0
    object _14581 = NOVALUE; // 26026 14581
    object _14580 = NOVALUE; // 26025 14580
// skipping _14579  name type: 0
    object _14578 = NOVALUE; // 26022 14578
// skipping _14577  name type: 0
    object _14576 = NOVALUE; // 26019 14576
// skipping _14575  name type: 0
    object _14574 = NOVALUE; // 26015 14574
    object _14573 = NOVALUE; // 26014 14573
    object _14572 = NOVALUE; // 26013 14572
    object _14571 = NOVALUE; // 26012 14571
// skipping _14570  name type: 0
    object _14569 = NOVALUE; // 26008 14569
    object _14568 = NOVALUE; // 26007 14568
    object _14567 = NOVALUE; // 26005 14567
// skipping _14566  name type: 0
    object _14565 = NOVALUE; // 25998 14565
    object _14564 = NOVALUE; // 25997 14564
    object _14563 = NOVALUE; // 25996 14563
// skipping _14562  name type: 0
    object _14561 = NOVALUE; // 25992 14561
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg update_include_matrix pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 3 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 5 op: STARTLINE (58)

    /** scanner.e:684		include_matrix[from_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[from_file][included_file] )*/
    // SubProg update_include_matrix pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    _3 = (object)(_from_file_25990 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14563 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    // SubProg update_include_matrix pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14563);
    _14564 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
    _14563 = NOVALUE;
    // SubProg update_include_matrix pc: 26 op: OR_BITS (24)
    if (IS_ATOM_INT(_14564)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14564;
             _14565 = MAKE_UINT(tu);
        }
    }
    else {
        _14565 = binary_op(OR_BITS, 2, _14564);
    }
    _14564 = NOVALUE;
    // SubProg update_include_matrix pc: 30 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25989);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14565;
    if( _1 != _14565 ){
        DeRef(_1);
    }
    _14565 = NOVALUE;
    _14561 = NOVALUE;
    // SubProg update_include_matrix pc: 34 op: STARTLINE (58)

    /** scanner.e:686		if public_include then*/
    // SubProg update_include_matrix pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 38 op: IF (20)
    if (_61public_include_25206 == 0)
    {
        goto L1; // [38] 339
    }
    else{
    }
    // SubProg update_include_matrix pc: 41 op: STARTLINE (58)

    /** scanner.e:689			sequence add_public = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_26000);
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _add_public_26000 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    Ref(_add_public_26000);
    // SubProg update_include_matrix pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 51 op: STARTLINE (58)

    /** scanner.e:690			for i = 1 to length( add_public ) do*/
    // SubProg update_include_matrix pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_26000)){
            _14567 = SEQ_PTR(_add_public_26000)->length;
    }
    else {
        _14567 = 1;
    }
    // SubProg update_include_matrix pc: 56 op: FOR_I (125)
    {
        object _i_26004;
        _i_26004 = 1;
L2: // addr: 63 pc: 56 sub: 25987 op: 125
        if (_i_26004 > _14567){
            goto L3; // [56] 107
        }
        // SubProg update_include_matrix pc: 63 op: STARTLINE (58)

        /** scanner.e:692				include_matrix[add_public[i]][included_file] =*/
        // SubProg update_include_matrix pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 67 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14568 = (object)*(((s1_ptr)_2)->base + _i_26004);
        // SubProg update_include_matrix pc: 71 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7include_matrix_11396 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14568))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14568)->dbl));
        else
        _3 = (object)(_14568 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14571 = (object)*(((s1_ptr)_2)->base + _i_26004);
        // SubProg update_include_matrix pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!IS_ATOM_INT(_14571)){
            _14572 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14571)->dbl));
        }
        else{
            _14572 = (object)*(((s1_ptr)_2)->base + _14571);
        }
        // SubProg update_include_matrix pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14572);
        _14573 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
        _14572 = NOVALUE;
        // SubProg update_include_matrix pc: 92 op: OR_BITS (24)
        if (IS_ATOM_INT(_14573)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14573;
                 _14574 = MAKE_UINT(tu);
            }
        }
        else {
            _14574 = binary_op(OR_BITS, 4, _14573);
        }
        _14573 = NOVALUE;
        // SubProg update_include_matrix pc: 96 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25989);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14574;
        if( _1 != _14574 ){
            DeRef(_1);
        }
        _14574 = NOVALUE;
        _14569 = NOVALUE;
        // SubProg update_include_matrix pc: 100 op: STARTLINE (58)

        /** scanner.e:695			end for*/
        // SubProg update_include_matrix pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_26004 = _i_26004 + 1;
        goto L2; // [102] 63
L3: // addr: 107 pc: 102 sub: 25987 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 107 op: STARTLINE (58)

    /** scanner.e:698			add_public = file_public_by[from_file]*/
    // SubProg update_include_matrix pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 111 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_26000);
    _2 = (object)SEQ_PTR(_7file_public_by_11405);
    _add_public_26000 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    Ref(_add_public_26000);
    // SubProg update_include_matrix pc: 115 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 117 op: STARTLINE (58)

    /** scanner.e:699			integer px = length( add_public ) + 1*/
    // SubProg update_include_matrix pc: 119 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_26000)){
            _14576 = SEQ_PTR(_add_public_26000)->length;
    }
    else {
        _14576 = 1;
    }
    // SubProg update_include_matrix pc: 122 op: PLUS1_I (117)
    _px_26018 = _14576 + 1;
    _14576 = NOVALUE;
    // SubProg update_include_matrix pc: 126 op: STARTLINE (58)

    /** scanner.e:700			while px <= length( add_public ) do*/
    // SubProg update_include_matrix pc: 128 op: NOP2 (110)
    // SubProg update_include_matrix pc: 130 op: NOPWHILE (158)
L4: // addr: 131 pc: 130 sub: 25987 op: 158
    // SubProg update_include_matrix pc: 131 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_26000)){
            _14578 = SEQ_PTR(_add_public_26000)->length;
    }
    else {
        _14578 = 1;
    }
    // SubProg update_include_matrix pc: 134 op: LESSEQ_IFW_I (123)
    if (_px_26018 > _14578)
    goto L5; // [134] 338
    // SubProg update_include_matrix pc: 138 op: STARTLINE (58)

    /** scanner.e:701				include_matrix[add_public[px]][included_file] =*/
    // SubProg update_include_matrix pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 142 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_26000);
    _14580 = (object)*(((s1_ptr)_2)->base + _px_26018);
    // SubProg update_include_matrix pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14580))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14580)->dbl));
    else
    _3 = (object)(_14580 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 155 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_26000);
    _14583 = (object)*(((s1_ptr)_2)->base + _px_26018);
    // SubProg update_include_matrix pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!IS_ATOM_INT(_14583)){
        _14584 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14583)->dbl));
    }
    else{
        _14584 = (object)*(((s1_ptr)_2)->base + _14583);
    }
    // SubProg update_include_matrix pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14584);
    _14585 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
    _14584 = NOVALUE;
    // SubProg update_include_matrix pc: 167 op: OR_BITS (24)
    if (IS_ATOM_INT(_14585)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14585;
             _14586 = MAKE_UINT(tu);
        }
    }
    else {
        _14586 = binary_op(OR_BITS, 4, _14585);
    }
    _14585 = NOVALUE;
    // SubProg update_include_matrix pc: 171 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25989);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14586;
    if( _1 != _14586 ){
        DeRef(_1);
    }
    _14586 = NOVALUE;
    _14581 = NOVALUE;
    // SubProg update_include_matrix pc: 175 op: STARTLINE (58)

    /** scanner.e:704				for i = 1 to length( file_public_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_26000);
    _14587 = (object)*(((s1_ptr)_2)->base + _px_26018);
    // SubProg update_include_matrix pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_public_by_11405);
    if (!IS_ATOM_INT(_14587)){
        _14588 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14587)->dbl));
    }
    else{
        _14588 = (object)*(((s1_ptr)_2)->base + _14587);
    }
    // SubProg update_include_matrix pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_14588)){
            _14589 = SEQ_PTR(_14588)->length;
    }
    else {
        _14589 = 1;
    }
    _14588 = NOVALUE;
    // SubProg update_include_matrix pc: 190 op: FOR_I (125)
    {
        object _i_26035;
        _i_26035 = 1;
L6: // addr: 197 pc: 190 sub: 25987 op: 125
        if (_i_26035 > _14589){
            goto L7; // [190] 249
        }
        // SubProg update_include_matrix pc: 197 op: STARTLINE (58)

        /** scanner.e:705					if not find( file_public[add_public[px]][i], add_public ) then*/
        // SubProg update_include_matrix pc: 199 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 201 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14590 = (object)*(((s1_ptr)_2)->base + _px_26018);
        // SubProg update_include_matrix pc: 205 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_public_11401);
        if (!IS_ATOM_INT(_14590)){
            _14591 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14590)->dbl));
        }
        else{
            _14591 = (object)*(((s1_ptr)_2)->base + _14590);
        }
        // SubProg update_include_matrix pc: 209 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14591);
        _14592 = (object)*(((s1_ptr)_2)->base + _i_26035);
        _14591 = NOVALUE;
        // SubProg update_include_matrix pc: 213 op: FIND_FROM (176)
        _14593 = find_from(_14592, _add_public_26000, 1);
        _14592 = NOVALUE;
        // SubProg update_include_matrix pc: 218 op: NOT_IFW (108)
        if (_14593 != 0)
        goto L8; // [218] 242
        _14593 = NOVALUE;
        // SubProg update_include_matrix pc: 221 op: STARTLINE (58)

        /** scanner.e:706						add_public &= file_public[add_public[px]][i]*/
        // SubProg update_include_matrix pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 225 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14595 = (object)*(((s1_ptr)_2)->base + _px_26018);
        // SubProg update_include_matrix pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_public_11401);
        if (!IS_ATOM_INT(_14595)){
            _14596 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14595)->dbl));
        }
        else{
            _14596 = (object)*(((s1_ptr)_2)->base + _14595);
        }
        // SubProg update_include_matrix pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14596);
        _14597 = (object)*(((s1_ptr)_2)->base + _i_26035);
        _14596 = NOVALUE;
        // SubProg update_include_matrix pc: 237 op: CONCAT (15)
        if (IS_SEQUENCE(_add_public_26000) && IS_ATOM(_14597)) {
            Ref(_14597);
            Append(&_add_public_26000, _add_public_26000, _14597);
        }
        else if (IS_ATOM(_add_public_26000) && IS_SEQUENCE(_14597)) {
        }
        else {
            Concat((object_ptr)&_add_public_26000, _add_public_26000, _14597);
        }
        _14597 = NOVALUE;
        // SubProg update_include_matrix pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 25987 op: 159
        // SubProg update_include_matrix pc: 242 op: STARTLINE (58)

        /** scanner.e:708				end for*/
        // SubProg update_include_matrix pc: 244 op: ENDFOR_INT_UP1 (54)
        _i_26035 = _i_26035 + 1;
        goto L6; // [244] 197
L7: // addr: 249 pc: 244 sub: 25987 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 249 op: STARTLINE (58)

    /** scanner.e:710				for i = 1 to length( file_include_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 253 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_26000);
    _14599 = (object)*(((s1_ptr)_2)->base + _px_26018);
    // SubProg update_include_matrix pc: 257 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    if (!IS_ATOM_INT(_14599)){
        _14600 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14599)->dbl));
    }
    else{
        _14600 = (object)*(((s1_ptr)_2)->base + _14599);
    }
    // SubProg update_include_matrix pc: 261 op: LENGTH (42)
    if (IS_SEQUENCE(_14600)){
            _14601 = SEQ_PTR(_14600)->length;
    }
    else {
        _14601 = 1;
    }
    _14600 = NOVALUE;
    // SubProg update_include_matrix pc: 264 op: FOR_I (125)
    {
        object _i_26053;
        _i_26053 = 1;
L9: // addr: 271 pc: 264 sub: 25987 op: 125
        if (_i_26053 > _14601){
            goto LA; // [264] 327
        }
        // SubProg update_include_matrix pc: 271 op: STARTLINE (58)

        /** scanner.e:711					include_matrix[file_include_by[add_public[px]]][included_file] =*/
        // SubProg update_include_matrix pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 275 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14602 = (object)*(((s1_ptr)_2)->base + _px_26018);
        // SubProg update_include_matrix pc: 281 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_by_11403);
        if (!IS_ATOM_INT(_14602)){
            _14603 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14602)->dbl));
        }
        else{
            _14603 = (object)*(((s1_ptr)_2)->base + _14602);
        }
        // SubProg update_include_matrix pc: 285 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7include_matrix_11396 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14603))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14603)->dbl));
        else
        _3 = (object)(_14603 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 290 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 294 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 296 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_26000);
        _14606 = (object)*(((s1_ptr)_2)->base + _px_26018);
        // SubProg update_include_matrix pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_by_11403);
        if (!IS_ATOM_INT(_14606)){
            _14607 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14606)->dbl));
        }
        else{
            _14607 = (object)*(((s1_ptr)_2)->base + _14606);
        }
        // SubProg update_include_matrix pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!IS_ATOM_INT(_14607)){
            _14608 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14607)->dbl));
        }
        else{
            _14608 = (object)*(((s1_ptr)_2)->base + _14607);
        }
        // SubProg update_include_matrix pc: 308 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14608);
        _14609 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
        _14608 = NOVALUE;
        // SubProg update_include_matrix pc: 312 op: OR_BITS (24)
        if (IS_ATOM_INT(_14609)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14609;
                 _14610 = MAKE_UINT(tu);
            }
        }
        else {
            _14610 = binary_op(OR_BITS, 4, _14609);
        }
        _14609 = NOVALUE;
        // SubProg update_include_matrix pc: 316 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25989);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14610;
        if( _1 != _14610 ){
            DeRef(_1);
        }
        _14610 = NOVALUE;
        _14604 = NOVALUE;
        // SubProg update_include_matrix pc: 320 op: STARTLINE (58)

        /** scanner.e:713				end for*/
        // SubProg update_include_matrix pc: 322 op: ENDFOR_INT_UP1 (54)
        _i_26053 = _i_26053 + 1;
        goto L9; // [322] 271
LA: // addr: 327 pc: 322 sub: 25987 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 327 op: STARTLINE (58)

    /** scanner.e:715				px += 1*/
    // SubProg update_include_matrix pc: 329 op: PLUS1_I (117)
    _px_26018 = _px_26018 + 1;
    // SubProg update_include_matrix pc: 333 op: STARTLINE (58)

    /** scanner.e:716			end while*/
    // SubProg update_include_matrix pc: 335 op: ENDWHILE (22)
    goto L4; // [335] 131
    // SubProg update_include_matrix pc: 337 op: NOP1 (159)
L5: // addr: 338 pc: 337 sub: 25987 op: 159
    // SubProg update_include_matrix pc: 338 op: NOP1 (159)
L1: // addr: 339 pc: 338 sub: 25987 op: 159
    // SubProg update_include_matrix pc: 339 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var add_public_26000
    DeRef(_add_public_26000);
    _add_public_26000 = NOVALUE;

// block var px_26018
    // SubProg update_include_matrix pc: 341 op: STARTLINE (58)

    /** scanner.e:721		if indirect_include[from_file][included_file] then*/
    // SubProg update_include_matrix pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7indirect_include_11399);
    _14612 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    // SubProg update_include_matrix pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14612);
    _14613 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
    _14612 = NOVALUE;
    // SubProg update_include_matrix pc: 353 op: IF (20)
    if (_14613 == 0) {
        _14613 = NOVALUE;
        goto LB; // [353] 545
    }
    else {
        if (!IS_ATOM_INT(_14613) && DBL_PTR(_14613)->dbl == 0.0){
            _14613 = NOVALUE;
            goto LB; // [353] 545
        }
        _14613 = NOVALUE;
    }
    _14613 = NOVALUE;
    // SubProg update_include_matrix pc: 356 op: STARTLINE (58)

    /** scanner.e:723			sequence indirect = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 360 op: RHS_SUBS_CHECK (92)
    DeRef(_indirect_26077);
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _indirect_26077 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    Ref(_indirect_26077);
    // SubProg update_include_matrix pc: 364 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 366 op: STARTLINE (58)

    /** scanner.e:725			sequence mask = include_matrix[included_file] != 0*/
    // SubProg update_include_matrix pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14615 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
    // SubProg update_include_matrix pc: 374 op: NOTEQ (4)
    DeRef(_mask_26080);
    if (IS_ATOM_INT(_14615)) {
        _mask_26080 = (_14615 != 0);
    }
    else {
        _mask_26080 = binary_op(NOTEQ, _14615, 0);
    }
    _14615 = NOVALUE;
    // SubProg update_include_matrix pc: 378 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 380 op: STARTLINE (58)

    /** scanner.e:726			include_matrix[from_file] = or_bits( include_matrix[from_file], mask )*/
    // SubProg update_include_matrix pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 386 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14617 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    // SubProg update_include_matrix pc: 390 op: OR_BITS (24)
    _14618 = binary_op(OR_BITS, _14617, _mask_26080);
    _14617 = NOVALUE;
    // SubProg update_include_matrix pc: 394 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _2 = (object)(((s1_ptr)_2)->base + _from_file_25990);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14618;
    if( _1 != _14618 ){
        DeRef(_1);
    }
    _14618 = NOVALUE;
    // SubProg update_include_matrix pc: 398 op: STARTLINE (58)

    /** scanner.e:727			mask = include_matrix[from_file] != 0*/
    // SubProg update_include_matrix pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14619 = (object)*(((s1_ptr)_2)->base + _from_file_25990);
    // SubProg update_include_matrix pc: 406 op: NOTEQ (4)
    DeRefDS(_mask_26080);
    if (IS_ATOM_INT(_14619)) {
        _mask_26080 = (_14619 != 0);
    }
    else {
        _mask_26080 = binary_op(NOTEQ, _14619, 0);
    }
    _14619 = NOVALUE;
    // SubProg update_include_matrix pc: 410 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 412 op: STARTLINE (58)

    /** scanner.e:728			integer ix = 1*/
    // SubProg update_include_matrix pc: 414 op: ASSIGN_I (113)
    _ix_26091 = 1;
    // SubProg update_include_matrix pc: 417 op: STARTLINE (58)

    /** scanner.e:729			while ix <= length(indirect) do*/
    // SubProg update_include_matrix pc: 419 op: NOP2 (110)
    // SubProg update_include_matrix pc: 421 op: NOPWHILE (158)
LC: // addr: 422 pc: 421 sub: 25987 op: 158
    // SubProg update_include_matrix pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_indirect_26077)){
            _14621 = SEQ_PTR(_indirect_26077)->length;
    }
    else {
        _14621 = 1;
    }
    // SubProg update_include_matrix pc: 425 op: LESSEQ_IFW_I (123)
    if (_ix_26091 > _14621)
    goto LD; // [425] 544
    // SubProg update_include_matrix pc: 429 op: STARTLINE (58)

    /** scanner.e:730				integer indirect_file = indirect[ix]*/
    // SubProg update_include_matrix pc: 431 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_indirect_26077);
    _indirect_file_26095 = (object)*(((s1_ptr)_2)->base + _ix_26091);
    if (!IS_ATOM_INT(_indirect_file_26095))
    _indirect_file_26095 = (object)DBL_PTR(_indirect_file_26095)->dbl;
    // SubProg update_include_matrix pc: 435 op: STARTLINE (58)

    /** scanner.e:731				if indirect_include[indirect_file][included_file] then*/
    // SubProg update_include_matrix pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 439 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7indirect_include_11399);
    _14624 = (object)*(((s1_ptr)_2)->base + _indirect_file_26095);
    // SubProg update_include_matrix pc: 443 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14624);
    _14625 = (object)*(((s1_ptr)_2)->base + _included_file_25989);
    _14624 = NOVALUE;
    // SubProg update_include_matrix pc: 447 op: IF (20)
    if (_14625 == 0) {
        _14625 = NOVALUE;
        goto LE; // [447] 531
    }
    else {
        if (!IS_ATOM_INT(_14625) && DBL_PTR(_14625)->dbl == 0.0){
            _14625 = NOVALUE;
            goto LE; // [447] 531
        }
        _14625 = NOVALUE;
    }
    _14625 = NOVALUE;
    // SubProg update_include_matrix pc: 450 op: STARTLINE (58)

    /** scanner.e:732					include_matrix[indirect_file] =*/
    // SubProg update_include_matrix pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 456 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14626 = (object)*(((s1_ptr)_2)->base + _indirect_file_26095);
    // SubProg update_include_matrix pc: 460 op: OR_BITS (24)
    _14627 = binary_op(OR_BITS, _mask_26080, _14626);
    _14626 = NOVALUE;
    // SubProg update_include_matrix pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _2 = (object)(((s1_ptr)_2)->base + _indirect_file_26095);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14627;
    if( _1 != _14627 ){
        DeRef(_1);
    }
    _14627 = NOVALUE;
    // SubProg update_include_matrix pc: 468 op: STARTLINE (58)

    /** scanner.e:734					for i = 1 to length( file_include_by[indirect_file] ) do*/
    // SubProg update_include_matrix pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 472 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _14628 = (object)*(((s1_ptr)_2)->base + _indirect_file_26095);
    // SubProg update_include_matrix pc: 476 op: LENGTH (42)
    if (IS_SEQUENCE(_14628)){
            _14629 = SEQ_PTR(_14628)->length;
    }
    else {
        _14629 = 1;
    }
    _14628 = NOVALUE;
    // SubProg update_include_matrix pc: 479 op: FOR_I (125)
    {
        object _i_26106;
        _i_26106 = 1;
LF: // addr: 486 pc: 479 sub: 25987 op: 125
        if (_i_26106 > _14629){
            goto L10; // [479] 530
        }
        // SubProg update_include_matrix pc: 486 op: STARTLINE (58)

        /** scanner.e:736						if not find( file_include_by[indirect_file][i], indirect ) then*/
        // SubProg update_include_matrix pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 490 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_by_11403);
        _14630 = (object)*(((s1_ptr)_2)->base + _indirect_file_26095);
        // SubProg update_include_matrix pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14630);
        _14631 = (object)*(((s1_ptr)_2)->base + _i_26106);
        _14630 = NOVALUE;
        // SubProg update_include_matrix pc: 498 op: FIND_FROM (176)
        _14632 = find_from(_14631, _indirect_26077, 1);
        _14631 = NOVALUE;
        // SubProg update_include_matrix pc: 503 op: NOT_IFW (108)
        if (_14632 != 0)
        goto L11; // [503] 523
        _14632 = NOVALUE;
        // SubProg update_include_matrix pc: 506 op: STARTLINE (58)

        /** scanner.e:737							indirect &= file_include_by[indirect_file][i]*/
        // SubProg update_include_matrix pc: 508 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 510 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_by_11403);
        _14634 = (object)*(((s1_ptr)_2)->base + _indirect_file_26095);
        // SubProg update_include_matrix pc: 514 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14634);
        _14635 = (object)*(((s1_ptr)_2)->base + _i_26106);
        _14634 = NOVALUE;
        // SubProg update_include_matrix pc: 518 op: CONCAT (15)
        if (IS_SEQUENCE(_indirect_26077) && IS_ATOM(_14635)) {
            Ref(_14635);
            Append(&_indirect_26077, _indirect_26077, _14635);
        }
        else if (IS_ATOM(_indirect_26077) && IS_SEQUENCE(_14635)) {
        }
        else {
            Concat((object_ptr)&_indirect_26077, _indirect_26077, _14635);
        }
        _14635 = NOVALUE;
        // SubProg update_include_matrix pc: 522 op: NOP1 (159)
L11: // addr: 523 pc: 522 sub: 25987 op: 159
        // SubProg update_include_matrix pc: 523 op: STARTLINE (58)

        /** scanner.e:740					end for*/
        // SubProg update_include_matrix pc: 525 op: ENDFOR_INT_UP1 (54)
        _i_26106 = _i_26106 + 1;
        goto LF; // [525] 486
L10: // addr: 530 pc: 525 sub: 25987 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 530 op: NOP1 (159)
LE: // addr: 531 pc: 530 sub: 25987 op: 159
    // SubProg update_include_matrix pc: 531 op: STARTLINE (58)

    /** scanner.e:742				ix += 1*/
    // SubProg update_include_matrix pc: 533 op: PLUS1_I (117)
    _ix_26091 = _ix_26091 + 1;
    // SubProg update_include_matrix pc: 537 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var indirect_file_26095
    // SubProg update_include_matrix pc: 539 op: STARTLINE (58)

    /** scanner.e:743			end while*/
    // SubProg update_include_matrix pc: 541 op: ENDWHILE (22)
    goto LC; // [541] 422
    // SubProg update_include_matrix pc: 543 op: NOP1 (159)
LD: // addr: 544 pc: 543 sub: 25987 op: 159
    // SubProg update_include_matrix pc: 544 op: NOP1 (159)
LB: // addr: 545 pc: 544 sub: 25987 op: 159
    // SubProg update_include_matrix pc: 545 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var indirect_26077
    DeRef(_indirect_26077);
    _indirect_26077 = NOVALUE;

// block var mask_26080
    DeRef(_mask_26080);
    _mask_26080 = NOVALUE;

// block var ix_26091
    // SubProg update_include_matrix pc: 547 op: STARTLINE (58)

    /** scanner.e:746		public_include = FALSE*/
    // SubProg update_include_matrix pc: 549 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 551 op: ASSIGN (18)
    _61public_include_25206 = _6FALSE_363;
    // SubProg update_include_matrix pc: 554 op: STARTLINE (58)

    /** scanner.e:747	end procedure*/
    // SubProg update_include_matrix pc: 556 op: RETURNP (29)

// Exiting block BLOCK: update_include_matrix

// block var included_file_25989

// block var from_file_25990
    _14590 = NOVALUE;
    _14568 = NOVALUE;
    _14600 = NOVALUE;
    _14571 = NOVALUE;
    _14603 = NOVALUE;
    _14607 = NOVALUE;
    _14588 = NOVALUE;
    _14580 = NOVALUE;
    _14595 = NOVALUE;
    _14587 = NOVALUE;
    _14606 = NOVALUE;
    _14602 = NOVALUE;
    _14628 = NOVALUE;
    _14583 = NOVALUE;
    _14599 = NOVALUE;
    return;
    // SubProg update_include_matrix pc: 559 op: BADRETURNF (43)
    ;
}


void _61add_include_by(object _by_file_26124, object _included_file_26125, object _is_public_26126)
{
    object _14682 = NOVALUE; // 26204 14682
    object _14681 = NOVALUE; // 26203 14681
    object _14680 = NOVALUE; // 26202 14680
// skipping _14679  name type: 0
    object _14678 = NOVALUE; // 26198 14678
    object _14677 = NOVALUE; // 26195 14677
    object _14676 = NOVALUE; // 26194 14676
    object _14675 = NOVALUE; // 26193 14675
// skipping _14674  name type: 0
    object _14673 = NOVALUE; // 26189 14673
    object _14672 = NOVALUE; // 26187 14672
    object _14671 = NOVALUE; // 26186 14671
    object _14670 = NOVALUE; // 26185 14670
    object _14669 = NOVALUE; // 26181 14669
    object _14668 = NOVALUE; // 26180 14668
    object _14667 = NOVALUE; // 26176 14667
    object _14666 = NOVALUE; // 26175 14666
// skipping _14665  name type: 0
    object _14664 = NOVALUE; // 26172 14664
    object _14663 = NOVALUE; // 26171 14663
    object _14662 = NOVALUE; // 26168 14662
    object _14661 = NOVALUE; // 26167 14661
// skipping _14660  name type: 0
    object _14659 = NOVALUE; // 26164 14659
    object _14658 = NOVALUE; // 26163 14658
    object _14657 = NOVALUE; // 26159 14657
    object _14656 = NOVALUE; // 26158 14656
// skipping _14655  name type: 0
    object _14654 = NOVALUE; // 26155 14654
    object _14653 = NOVALUE; // 26154 14653
    object _14652 = NOVALUE; // 26151 14652
    object _14651 = NOVALUE; // 26150 14651
// skipping _14650  name type: 0
    object _14649 = NOVALUE; // 26147 14649
    object _14648 = NOVALUE; // 26146 14648
    object _14647 = NOVALUE; // 26143 14647
    object _14646 = NOVALUE; // 26142 14646
    object _14645 = NOVALUE; // 26141 14645
// skipping _14644  name type: 0
    object _14643 = NOVALUE; // 26137 14643
    object _14642 = NOVALUE; // 26134 14642
    object _14641 = NOVALUE; // 26133 14641
    object _14640 = NOVALUE; // 26132 14640
// skipping _14639  name type: 0
    object _14638 = NOVALUE; // 26128 14638
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_include_by pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 5 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 7 op: STARTLINE (58)

    /** scanner.e:750		include_matrix[by_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 11 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26124 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14640 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14640);
    _14641 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    _14640 = NOVALUE;
    // SubProg add_include_by pc: 28 op: OR_BITS (24)
    if (IS_ATOM_INT(_14641)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14641;
             _14642 = MAKE_UINT(tu);
        }
    }
    else {
        _14642 = binary_op(OR_BITS, 2, _14641);
    }
    _14641 = NOVALUE;
    // SubProg add_include_by pc: 32 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26125);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14642;
    if( _1 != _14642 ){
        DeRef(_1);
    }
    _14642 = NOVALUE;
    _14638 = NOVALUE;
    // SubProg add_include_by pc: 36 op: STARTLINE (58)

    /** scanner.e:751		if is_public then*/
    // SubProg add_include_by pc: 38 op: IF (20)
    if (_is_public_26126 == 0)
    {
        goto L1; // [38] 71
    }
    else{
    }
    // SubProg add_include_by pc: 41 op: STARTLINE (58)

    /** scanner.e:752			include_matrix[by_file][included_file] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 45 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26124 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14645 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14645);
    _14646 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    _14645 = NOVALUE;
    // SubProg add_include_by pc: 62 op: OR_BITS (24)
    if (IS_ATOM_INT(_14646)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14646;
             _14647 = MAKE_UINT(tu);
        }
    }
    else {
        _14647 = binary_op(OR_BITS, 4, _14646);
    }
    _14646 = NOVALUE;
    // SubProg add_include_by pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26125);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14647;
    if( _1 != _14647 ){
        DeRef(_1);
    }
    _14647 = NOVALUE;
    _14643 = NOVALUE;
    // SubProg add_include_by pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 26122 op: 159
    // SubProg add_include_by pc: 71 op: STARTLINE (58)

    /** scanner.e:754		if not find( by_file, file_include_by[included_file] ) then*/
    // SubProg add_include_by pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 75 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _14648 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    // SubProg add_include_by pc: 79 op: FIND_FROM (176)
    _14649 = find_from(_by_file_26124, _14648, 1);
    _14648 = NOVALUE;
    // SubProg add_include_by pc: 84 op: NOT_IFW (108)
    if (_14649 != 0)
    goto L2; // [84] 104
    _14649 = NOVALUE;
    // SubProg add_include_by pc: 87 op: STARTLINE (58)

    /** scanner.e:755			file_include_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 91 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _14651 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    // SubProg add_include_by pc: 95 op: CONCAT (15)
    if (IS_SEQUENCE(_14651) && IS_ATOM(_by_file_26124)) {
        Append(&_14652, _14651, _by_file_26124);
    }
    else if (IS_ATOM(_14651) && IS_SEQUENCE(_by_file_26124)) {
    }
    else {
        Concat((object_ptr)&_14652, _14651, _by_file_26124);
        _14651 = NOVALUE;
    }
    _14651 = NOVALUE;
    // SubProg add_include_by pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_by_11403);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26125);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14652;
    if( _1 != _14652 ){
        DeRef(_1);
    }
    _14652 = NOVALUE;
    // SubProg add_include_by pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 26122 op: 159
    // SubProg add_include_by pc: 104 op: STARTLINE (58)

    /** scanner.e:758		if not find( included_file, file_include[by_file] ) then*/
    // SubProg add_include_by pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 108 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14653 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 112 op: FIND_FROM (176)
    _14654 = find_from(_included_file_26125, _14653, 1);
    _14653 = NOVALUE;
    // SubProg add_include_by pc: 117 op: NOT_IFW (108)
    if (_14654 != 0)
    goto L3; // [117] 137
    _14654 = NOVALUE;
    // SubProg add_include_by pc: 120 op: STARTLINE (58)

    /** scanner.e:759			file_include[by_file] &= included_file*/
    // SubProg add_include_by pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 124 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14656 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 128 op: CONCAT (15)
    if (IS_SEQUENCE(_14656) && IS_ATOM(_included_file_26125)) {
        Append(&_14657, _14656, _included_file_26125);
    }
    else if (IS_ATOM(_14656) && IS_SEQUENCE(_included_file_26125)) {
    }
    else {
        Concat((object_ptr)&_14657, _14656, _included_file_26125);
        _14656 = NOVALUE;
    }
    _14656 = NOVALUE;
    // SubProg add_include_by pc: 132 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14657;
    if( _1 != _14657 ){
        DeRef(_1);
    }
    _14657 = NOVALUE;
    // SubProg add_include_by pc: 136 op: NOP1 (159)
L3: // addr: 137 pc: 136 sub: 26122 op: 159
    // SubProg add_include_by pc: 137 op: STARTLINE (58)

    /** scanner.e:762		if is_public then*/
    // SubProg add_include_by pc: 139 op: IF (20)
    if (_is_public_26126 == 0)
    {
        goto L4; // [139] 209
    }
    else{
    }
    // SubProg add_include_by pc: 142 op: STARTLINE (58)

    /** scanner.e:763			if not find( by_file, file_public_by[included_file] ) then*/
    // SubProg add_include_by pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_public_by_11405);
    _14658 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    // SubProg add_include_by pc: 150 op: FIND_FROM (176)
    _14659 = find_from(_by_file_26124, _14658, 1);
    _14658 = NOVALUE;
    // SubProg add_include_by pc: 155 op: NOT_IFW (108)
    if (_14659 != 0)
    goto L5; // [155] 175
    _14659 = NOVALUE;
    // SubProg add_include_by pc: 158 op: STARTLINE (58)

    /** scanner.e:764				file_public_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 162 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_public_by_11405);
    _14661 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    // SubProg add_include_by pc: 166 op: CONCAT (15)
    if (IS_SEQUENCE(_14661) && IS_ATOM(_by_file_26124)) {
        Append(&_14662, _14661, _by_file_26124);
    }
    else if (IS_ATOM(_14661) && IS_SEQUENCE(_by_file_26124)) {
    }
    else {
        Concat((object_ptr)&_14662, _14661, _by_file_26124);
        _14661 = NOVALUE;
    }
    _14661 = NOVALUE;
    // SubProg add_include_by pc: 170 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_public_by_11405);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26125);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14662;
    if( _1 != _14662 ){
        DeRef(_1);
    }
    _14662 = NOVALUE;
    // SubProg add_include_by pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 26122 op: 159
    // SubProg add_include_by pc: 175 op: STARTLINE (58)

    /** scanner.e:767			if not find( included_file, file_public[by_file] ) then*/
    // SubProg add_include_by pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 179 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _14663 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 183 op: FIND_FROM (176)
    _14664 = find_from(_included_file_26125, _14663, 1);
    _14663 = NOVALUE;
    // SubProg add_include_by pc: 188 op: NOT_IFW (108)
    if (_14664 != 0)
    goto L6; // [188] 208
    _14664 = NOVALUE;
    // SubProg add_include_by pc: 191 op: STARTLINE (58)

    /** scanner.e:768				file_public[by_file] &= included_file*/
    // SubProg add_include_by pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 195 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _14666 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
    // SubProg add_include_by pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_14666) && IS_ATOM(_included_file_26125)) {
        Append(&_14667, _14666, _included_file_26125);
    }
    else if (IS_ATOM(_14666) && IS_SEQUENCE(_included_file_26125)) {
    }
    else {
        Concat((object_ptr)&_14667, _14666, _included_file_26125);
        _14666 = NOVALUE;
    }
    _14666 = NOVALUE;
    // SubProg add_include_by pc: 203 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26124);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14667;
    if( _1 != _14667 ){
        DeRef(_1);
    }
    _14667 = NOVALUE;
    // SubProg add_include_by pc: 207 op: NOP1 (159)
L6: // addr: 208 pc: 207 sub: 26122 op: 159
    // SubProg add_include_by pc: 208 op: NOP1 (159)
L4: // addr: 209 pc: 208 sub: 26122 op: 159
    // SubProg add_include_by pc: 209 op: STARTLINE (58)

    /** scanner.e:772		for propagate = 1 to length( include_matrix[included_file] ) do*/
    // SubProg add_include_by pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _14668 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
    // SubProg add_include_by pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_14668)){
            _14669 = SEQ_PTR(_14668)->length;
    }
    else {
        _14669 = 1;
    }
    _14668 = NOVALUE;
    // SubProg add_include_by pc: 220 op: FOR_I (125)
    {
        object _propagate_26178;
        _propagate_26178 = 1;
L7: // addr: 227 pc: 220 sub: 26122 op: 125
        if (_propagate_26178 > _14669){
            goto L8; // [220] 320
        }
        // SubProg add_include_by pc: 227 op: STARTLINE (58)

        /** scanner.e:773			if and_bits( PUBLIC_INCLUDE, include_matrix[included_file][propagate] ) then*/
        // SubProg add_include_by pc: 229 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _14670 = (object)*(((s1_ptr)_2)->base + _included_file_26125);
        // SubProg add_include_by pc: 237 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14670);
        _14671 = (object)*(((s1_ptr)_2)->base + _propagate_26178);
        _14670 = NOVALUE;
        // SubProg add_include_by pc: 241 op: AND_BITS (56)
        if (IS_ATOM_INT(_14671)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 & (uintptr_t)_14671;
                 _14672 = MAKE_UINT(tu);
            }
        }
        else {
            _14672 = binary_op(AND_BITS, 4, _14671);
        }
        _14671 = NOVALUE;
        // SubProg add_include_by pc: 245 op: IF (20)
        if (_14672 == 0) {
            DeRef(_14672);
            _14672 = NOVALUE;
            goto L9; // [245] 313
        }
        else {
            if (!IS_ATOM_INT(_14672) && DBL_PTR(_14672)->dbl == 0.0){
                DeRef(_14672);
                _14672 = NOVALUE;
                goto L9; // [245] 313
            }
            DeRef(_14672);
            _14672 = NOVALUE;
        }
        DeRef(_14672);
        _14672 = NOVALUE;
        // SubProg add_include_by pc: 248 op: STARTLINE (58)

        /** scanner.e:774				include_matrix[by_file][propagate] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 250 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 252 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7include_matrix_11396 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26124 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 261 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _14675 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
        // SubProg add_include_by pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14675);
        _14676 = (object)*(((s1_ptr)_2)->base + _propagate_26178);
        _14675 = NOVALUE;
        // SubProg add_include_by pc: 269 op: OR_BITS (24)
        if (IS_ATOM_INT(_14676)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 | (uintptr_t)_14676;
                 _14677 = MAKE_UINT(tu);
            }
        }
        else {
            _14677 = binary_op(OR_BITS, 2, _14676);
        }
        _14676 = NOVALUE;
        // SubProg add_include_by pc: 273 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26178);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14677;
        if( _1 != _14677 ){
            DeRef(_1);
        }
        _14677 = NOVALUE;
        _14673 = NOVALUE;
        // SubProg add_include_by pc: 277 op: STARTLINE (58)

        /** scanner.e:775				if is_public then*/
        // SubProg add_include_by pc: 279 op: IF (20)
        if (_is_public_26126 == 0)
        {
            goto LA; // [279] 312
        }
        else{
        }
        // SubProg add_include_by pc: 282 op: STARTLINE (58)

        /** scanner.e:776					include_matrix[by_file][propagate] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 284 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 286 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7include_matrix_11396 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26124 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 293 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 295 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _14680 = (object)*(((s1_ptr)_2)->base + _by_file_26124);
        // SubProg add_include_by pc: 299 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14680);
        _14681 = (object)*(((s1_ptr)_2)->base + _propagate_26178);
        _14680 = NOVALUE;
        // SubProg add_include_by pc: 303 op: OR_BITS (24)
        if (IS_ATOM_INT(_14681)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14681;
                 _14682 = MAKE_UINT(tu);
            }
        }
        else {
            _14682 = binary_op(OR_BITS, 4, _14681);
        }
        _14681 = NOVALUE;
        // SubProg add_include_by pc: 307 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26178);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14682;
        if( _1 != _14682 ){
            DeRef(_1);
        }
        _14682 = NOVALUE;
        _14678 = NOVALUE;
        // SubProg add_include_by pc: 311 op: NOP1 (159)
LA: // addr: 312 pc: 311 sub: 26122 op: 159
        // SubProg add_include_by pc: 312 op: NOP1 (159)
L9: // addr: 313 pc: 312 sub: 26122 op: 159
        // SubProg add_include_by pc: 313 op: STARTLINE (58)

        /** scanner.e:779		end for*/
        // SubProg add_include_by pc: 315 op: ENDFOR_INT_UP1 (54)
        _propagate_26178 = _propagate_26178 + 1;
        goto L7; // [315] 227
L8: // addr: 320 pc: 315 sub: 26122 op: 54
        ;
    }
    // SubProg add_include_by pc: 320 op: STARTLINE (58)

    /** scanner.e:780	end procedure*/
    // SubProg add_include_by pc: 322 op: RETURNP (29)

// Exiting block BLOCK: add_include_by

// block var by_file_26124

// block var included_file_26125

// block var is_public_26126
    _14668 = NOVALUE;
    return;
    // SubProg add_include_by pc: 325 op: BADRETURNF (43)
    ;
}


void _61IncludePush()
{
    object _new_file_handle_26207 = NOVALUE;
    object _old_file_no_26208 = NOVALUE;
    object _new_hash_26209 = NOVALUE;
    object _idx_26210 = NOVALUE;
// skipping _14770  name type: 0
    object _14769 = NOVALUE; // 26426 14769
// skipping _14768  name type: 0
// skipping _14767  name type: 0
    object _14766 = NOVALUE; // 26416 14766
// skipping _14765  name type: 0
    object _14764 = NOVALUE; // 26413 14764
    object _14763 = NOVALUE; // 26412 14763
    object _14762 = NOVALUE; // 26410 14762
// skipping _14761  name type: 0
    object _14760 = NOVALUE; // 26405 14760
    object _14759 = NOVALUE; // 26404 14759
// skipping _14758  name type: 0
// skipping _14757  name type: 0
// skipping _14756  name type: 0
// skipping _14755  name type: 0
    object _14753 = NOVALUE; // 26383 14753
    object _14752 = NOVALUE; // 26382 14752
    object _14751 = NOVALUE; // 26381 14751
    object _14750 = NOVALUE; // 26376 14750
    object _14749 = NOVALUE; // 26373 14749
    object _14748 = NOVALUE; // 26372 14748
    object _14747 = NOVALUE; // 26371 14747
// skipping _14746  name type: 0
// skipping _14745  name type: 0
    object _14744 = NOVALUE; // 26359 14744
// skipping _14743  name type: 0
    object _14742 = NOVALUE; // 26357 14742
// skipping _14741  name type: 0
    object _14740 = NOVALUE; // 26353 14740
    object _14739 = NOVALUE; // 26352 14739
    object _14738 = NOVALUE; // 26347 14738
// skipping _14737  name type: 0
    object _14736 = NOVALUE; // 26345 14736
    object _14735 = NOVALUE; // 26341 14735
// skipping _14734  name type: 0
    object _14733 = NOVALUE; // 26339 14733
    object _14732 = NOVALUE; // 26338 14732
// skipping _14731  name type: 0
    object _14730 = NOVALUE; // 26335 14730
    object _14729 = NOVALUE; // 26334 14729
    object _14728 = NOVALUE; // 26330 14728
    object _14727 = NOVALUE; // 26329 14727
    object _14726 = NOVALUE; // 26328 14726
    object _14725 = NOVALUE; // 26327 14725
    object _14724 = NOVALUE; // 26324 14724
// skipping _14723  name type: 0
// skipping _14722  name type: 0
// skipping _14721  name type: 0
    object _14720 = NOVALUE; // 26313 14720
// skipping _14719  name type: 0
    object _14718 = NOVALUE; // 26288 14718
    object _14717 = NOVALUE; // 26286 14717
    object _14716 = NOVALUE; // 26285 14716
    object _14715 = NOVALUE; // 26282 14715
    object _14714 = NOVALUE; // 26281 14714
    object _14713 = NOVALUE; // 26279 14713
    object _14712 = NOVALUE; // 26278 14712
    object _14711 = NOVALUE; // 26277 14711
    object _14710 = NOVALUE; // 26276 14710
// skipping _14709  name type: 0
    object _14708 = NOVALUE; // 26267 14708
    object _14707 = NOVALUE; // 26263 14707
    object _14706 = NOVALUE; // 26262 14706
// skipping _14705  name type: 0
    object _14704 = NOVALUE; // 26258 14704
    object _14703 = NOVALUE; // 26257 14703
    object _14702 = NOVALUE; // 26251 14702
    object _14701 = NOVALUE; // 26250 14701
// skipping _14700  name type: 0
    object _14699 = NOVALUE; // 26246 14699
    object _14698 = NOVALUE; // 26245 14698
    object _14697 = NOVALUE; // 26241 14697
    object _14696 = NOVALUE; // 26240 14696
    object _14695 = NOVALUE; // 26237 14695
// skipping _14694  name type: 0
    object _14693 = NOVALUE; // 26235 14693
    object _14692 = NOVALUE; // 26232 14692
    object _14691 = NOVALUE; // 26231 14691
    object _14690 = NOVALUE; // 26228 14690
// skipping _14689  name type: 0
    object _14688 = NOVALUE; // 26224 14688
// skipping _14687  name type: 0
// skipping _14686  name type: 0
// skipping _14685  name type: 0
    object _14684 = NOVALUE; // 26216 14684
// skipping _14683  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePush pc: 1 op: STARTLINE (58)

    /** scanner.e:788		start_include = FALSE*/
    // SubProg IncludePush pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 5 op: ASSIGN (18)
    _61start_include_25203 = _6FALSE_363;
    // SubProg IncludePush pc: 8 op: STARTLINE (58)

    /** scanner.e:790		new_file_handle = path_open() -- sets new_include_name to full path*/
    // SubProg IncludePush pc: 10 op: PROC (27)
    _new_file_handle_26207 = _61path_open();
    // SubProg IncludePush pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_file_handle_26207)) {
        _1 = (object)(DBL_PTR(_new_file_handle_26207)->dbl);
        DeRefDS(_new_file_handle_26207);
        _new_file_handle_26207 = _1;
    }
    // SubProg IncludePush pc: 15 op: STARTLINE (58)

    /** scanner.e:792		new_hash = hash(canonical_path(new_include_name,,CORRECT), stdhash:HSIEH32)*/
    // SubProg IncludePush pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 21 op: PROC (27)
    RefDS(_5new_include_name_12600);
    _14684 = _16canonical_path(_5new_include_name_12600, 0, 2);
    // SubProg IncludePush pc: 27 op: HASH (194)
    DeRef(_new_hash_26209);
    _new_hash_26209 = calc_hash(_14684, -5);
    DeRef(_14684);
    _14684 = NOVALUE;
    // SubProg IncludePush pc: 31 op: STARTLINE (58)

    /** scanner.e:794		idx = find(new_hash, known_files_hash)*/
    // SubProg IncludePush pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 35 op: FIND_FROM (176)
    _idx_26210 = find_from(_new_hash_26209, _7known_files_hash_11391, 1);
    // SubProg IncludePush pc: 40 op: STARTLINE (58)

    /** scanner.e:795		if idx then*/
    // SubProg IncludePush pc: 42 op: IF (20)
    if (_idx_26210 == 0)
    {
        goto L1; // [42] 335
    }
    else{
    }
    // SubProg IncludePush pc: 45 op: STARTLINE (58)

    /** scanner.e:797			if new_include_space != 0 then*/
    // SubProg IncludePush pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 49 op: NOTEQ_IFW (105)
    if (_61new_include_space_25201 == 0)
    goto L2; // [49] 71
    // SubProg IncludePush pc: 53 op: STARTLINE (58)

    /** scanner.e:798				SymTab[new_include_space][S_OBJ] = idx -- but note any namespace*/
    // SubProg IncludePush pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 59 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_61new_include_space_25201 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26210;
    DeRef(_1);
    _14688 = NOVALUE;
    // SubProg IncludePush pc: 70 op: NOP1 (159)
L2: // addr: 71 pc: 70 sub: 26205 op: 159
    // SubProg IncludePush pc: 71 op: STARTLINE (58)

    /** scanner.e:801			close(new_file_handle)*/
    // SubProg IncludePush pc: 73 op: CLOSE (86)
    EClose(_new_file_handle_26207);
    // SubProg IncludePush pc: 75 op: STARTLINE (58)

    /** scanner.e:803			if find( -idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 77 op: UMINUS (12)
    if ((uintptr_t)_idx_26210 == (uintptr_t)HIGH_BITS){
        _14690 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14690 = - _idx_26210;
    }
    // SubProg IncludePush pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14691 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 88 op: FIND_FROM (176)
    _14692 = find_from(_14690, _14691, 1);
    DeRef(_14690);
    _14690 = NOVALUE;
    _14691 = NOVALUE;
    // SubProg IncludePush pc: 93 op: IF (20)
    if (_14692 == 0)
    {
        _14692 = NOVALUE;
        goto L3; // [93] 130
    }
    else{
        _14692 = NOVALUE;
    }
    // SubProg IncludePush pc: 96 op: STARTLINE (58)

    /** scanner.e:805				file_include[current_file_no][ find( -idx, file_include[current_file_no] ) ] = idx*/
    // SubProg IncludePush pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 102 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7file_include_11394 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5current_file_no_12477 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 107 op: UMINUS (12)
    if ((uintptr_t)_idx_26210 == (uintptr_t)HIGH_BITS){
        _14695 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14695 = - _idx_26210;
    }
    // SubProg IncludePush pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 114 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14696 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 118 op: FIND_FROM (176)
    _14697 = find_from(_14695, _14696, 1);
    DeRef(_14695);
    _14695 = NOVALUE;
    _14696 = NOVALUE;
    // SubProg IncludePush pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14697);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26210;
    DeRef(_1);
    _14693 = NOVALUE;
    // SubProg IncludePush pc: 127 op: ELSE (23)
    goto L4; // [127] 228
    // SubProg IncludePush pc: 129 op: NOP1 (159)
L3: // addr: 130 pc: 129 sub: 26205 op: 159
    // SubProg IncludePush pc: 130 op: STARTLINE (58)

    /** scanner.e:809			elsif not find( idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14698 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 140 op: FIND_FROM (176)
    _14699 = find_from(_idx_26210, _14698, 1);
    _14698 = NOVALUE;
    // SubProg IncludePush pc: 145 op: NOT_IFW (108)
    if (_14699 != 0)
    goto L5; // [145] 227
    _14699 = NOVALUE;
    // SubProg IncludePush pc: 148 op: STARTLINE (58)

    /** scanner.e:811				file_include[current_file_no] &= idx*/
    // SubProg IncludePush pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 154 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14701 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 158 op: CONCAT (15)
    if (IS_SEQUENCE(_14701) && IS_ATOM(_idx_26210)) {
        Append(&_14702, _14701, _idx_26210);
    }
    else if (IS_ATOM(_14701) && IS_SEQUENCE(_idx_26210)) {
    }
    else {
        Concat((object_ptr)&_14702, _14701, _idx_26210);
        _14701 = NOVALUE;
    }
    _14701 = NOVALUE;
    // SubProg IncludePush pc: 162 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14702;
    if( _1 != _14702 ){
        DeRef(_1);
    }
    _14702 = NOVALUE;
    // SubProg IncludePush pc: 166 op: STARTLINE (58)

    /** scanner.e:814				add_exports( idx, current_file_no )*/
    // SubProg IncludePush pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 170 op: PROC (27)
    _61add_exports(_idx_26210, _5current_file_no_12477);
    // SubProg IncludePush pc: 174 op: STARTLINE (58)

    /** scanner.e:816				if public_include then*/
    // SubProg IncludePush pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 178 op: IF (20)
    if (_61public_include_25206 == 0)
    {
        goto L6; // [178] 226
    }
    else{
    }
    // SubProg IncludePush pc: 181 op: STARTLINE (58)

    /** scanner.e:818					if not find( idx, file_public[current_file_no] ) then*/
    // SubProg IncludePush pc: 183 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 187 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _14703 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 191 op: FIND_FROM (176)
    _14704 = find_from(_idx_26210, _14703, 1);
    _14703 = NOVALUE;
    // SubProg IncludePush pc: 196 op: NOT_IFW (108)
    if (_14704 != 0)
    goto L7; // [196] 225
    _14704 = NOVALUE;
    // SubProg IncludePush pc: 199 op: STARTLINE (58)

    /** scanner.e:819						file_public[current_file_no] &= idx*/
    // SubProg IncludePush pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 205 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _14706 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 209 op: CONCAT (15)
    if (IS_SEQUENCE(_14706) && IS_ATOM(_idx_26210)) {
        Append(&_14707, _14706, _idx_26210);
    }
    else if (IS_ATOM(_14706) && IS_SEQUENCE(_idx_26210)) {
    }
    else {
        Concat((object_ptr)&_14707, _14706, _idx_26210);
        _14706 = NOVALUE;
    }
    _14706 = NOVALUE;
    // SubProg IncludePush pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14707;
    if( _1 != _14707 ){
        DeRef(_1);
    }
    _14707 = NOVALUE;
    // SubProg IncludePush pc: 217 op: STARTLINE (58)

    /** scanner.e:820						patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 219 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 221 op: PROC (27)
    _61patch_exports(_5current_file_no_12477);
    // SubProg IncludePush pc: 224 op: NOP1 (159)
L7: // addr: 225 pc: 224 sub: 26205 op: 159
    // SubProg IncludePush pc: 225 op: NOP1 (159)
L6: // addr: 226 pc: 225 sub: 26205 op: 159
    // SubProg IncludePush pc: 226 op: NOP1 (159)
L5: // addr: 227 pc: 226 sub: 26205 op: 159
    // SubProg IncludePush pc: 227 op: NOP1 (159)
L4: // addr: 228 pc: 227 sub: 26205 op: 159
    // SubProg IncludePush pc: 228 op: STARTLINE (58)

    /** scanner.e:825			indirect_include[current_file_no][idx] = OpIndirectInclude*/
    // SubProg IncludePush pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 234 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7indirect_include_11399);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7indirect_include_11399 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5current_file_no_12477 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 241 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _idx_26210);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5OpIndirectInclude_12553;
    DeRef(_1);
    _14708 = NOVALUE;
    // SubProg IncludePush pc: 245 op: STARTLINE (58)

    /** scanner.e:826			add_include_by( current_file_no, idx, public_include )*/
    // SubProg IncludePush pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 251 op: PROC (27)
    _61add_include_by(_5current_file_no_12477, _idx_26210, _61public_include_25206);
    // SubProg IncludePush pc: 256 op: STARTLINE (58)

    /** scanner.e:827			update_include_matrix( idx, current_file_no )*/
    // SubProg IncludePush pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 260 op: PROC (27)
    _61update_include_matrix(_idx_26210, _5current_file_no_12477);
    // SubProg IncludePush pc: 264 op: STARTLINE (58)

    /** scanner.e:828			public_include = FALSE*/
    // SubProg IncludePush pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 268 op: ASSIGN (18)
    _61public_include_25206 = _6FALSE_363;
    // SubProg IncludePush pc: 271 op: STARTLINE (58)

    /** scanner.e:829			read_line() -- we can't return without reading a line first*/
    // SubProg IncludePush pc: 273 op: PROC (27)
    _61read_line();
    // SubProg IncludePush pc: 275 op: STARTLINE (58)

    /** scanner.e:830			if not find( idx, file_include_depend[current_file_no] ) and not finished_files[idx] then*/
    // SubProg IncludePush pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 281 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7file_include_depend_11393);
    _14710 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 285 op: FIND_FROM (176)
    _14711 = find_from(_idx_26210, _14710, 1);
    _14710 = NOVALUE;
    // SubProg IncludePush pc: 290 op: NOT (7)
    _14712 = (_14711 == 0);
    _14711 = NOVALUE;
    // SubProg IncludePush pc: 293 op: SC1_AND_IF (146)
    if (_14712 == 0) {
        goto L8; // [293] 329
    }
    // SubProg IncludePush pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7finished_files_11392);
    _14714 = (object)*(((s1_ptr)_2)->base + _idx_26210);
    // SubProg IncludePush pc: 303 op: NOT (7)
    _14715 = (_14714 == 0);
    _14714 = NOVALUE;
    // SubProg IncludePush pc: 306 op: NOP1 (159)
    // SubProg IncludePush pc: 307 op: IF (20)
    if (_14715 == 0)
    {
        DeRef(_14715);
        _14715 = NOVALUE;
        goto L8; // [307] 329
    }
    else{
        DeRef(_14715);
        _14715 = NOVALUE;
    }
    // SubProg IncludePush pc: 310 op: STARTLINE (58)

    /** scanner.e:831				file_include_depend[current_file_no] &= idx*/
    // SubProg IncludePush pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 316 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_depend_11393);
    _14716 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 320 op: CONCAT (15)
    if (IS_SEQUENCE(_14716) && IS_ATOM(_idx_26210)) {
        Append(&_14717, _14716, _idx_26210);
    }
    else if (IS_ATOM(_14716) && IS_SEQUENCE(_idx_26210)) {
    }
    else {
        Concat((object_ptr)&_14717, _14716, _idx_26210);
        _14716 = NOVALUE;
    }
    _14716 = NOVALUE;
    // SubProg IncludePush pc: 324 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_depend_11393);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7file_include_depend_11393 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14717;
    if( _1 != _14717 ){
        DeRef(_1);
    }
    _14717 = NOVALUE;
    // SubProg IncludePush pc: 328 op: NOP1 (159)
L8: // addr: 329 pc: 328 sub: 26205 op: 159
    // SubProg IncludePush pc: 329 op: STARTLINE (58)

    /** scanner.e:833			return -- ignore it*/
    // SubProg IncludePush pc: 331 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26207

// block var old_file_no_26208

// block var new_hash_26209
    DeRef(_new_hash_26209);

// block var idx_26210
    DeRef(_14712);
    _14712 = NOVALUE;
    return;
    // SubProg IncludePush pc: 334 op: NOP1 (159)
L1: // addr: 335 pc: 334 sub: 26205 op: 159
    // SubProg IncludePush pc: 335 op: STARTLINE (58)

    /** scanner.e:836		if length(IncludeStk) >= INCLUDE_LIMIT then*/
    // SubProg IncludePush pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 339 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25212)){
            _14718 = SEQ_PTR(_61IncludeStk_25212)->length;
    }
    else {
        _14718 = 1;
    }
    // SubProg IncludePush pc: 342 op: GREATEREQ_IFW_I (120)
    if (_14718 < 30)
    goto L9; // [342] 354
    // SubProg IncludePush pc: 346 op: STARTLINE (58)

    /** scanner.e:837			CompileErr(104)*/
    // SubProg IncludePush pc: 348 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(104, _21958, 0);
    // SubProg IncludePush pc: 353 op: NOP1 (159)
L9: // addr: 354 pc: 353 sub: 26205 op: 159
    // SubProg IncludePush pc: 354 op: STARTLINE (58)

    /** scanner.e:840		IncludeStk = append(IncludeStk,*/
    // SubProg IncludePush pc: 356 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 360 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 364 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 370 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 372 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 374 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 378 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 386 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 392 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 394 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 402 op: RIGHT_BRACE_N (31)
    _1 = NewS1(22);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _5current_file_no_12477;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    ((intptr_t*)_2)[3] = _5src_file_12599;
    ((intptr_t*)_2)[4] = _5file_start_sym_12483;
    ((intptr_t*)_2)[5] = _5OpWarning_12545;
    ((intptr_t*)_2)[6] = _5OpTrace_12547;
    ((intptr_t*)_2)[7] = _5OpTypeCheck_12548;
    ((intptr_t*)_2)[8] = _5OpProfileTime_12550;
    ((intptr_t*)_2)[9] = _5OpProfileStatement_12549;
    RefDS(_5OpDefines_12551);
    ((intptr_t*)_2)[10] = _5OpDefines_12551;
    ((intptr_t*)_2)[11] = _5prev_OpWarning_12546;
    ((intptr_t*)_2)[12] = _5OpInline_12552;
    ((intptr_t*)_2)[13] = _5OpIndirectInclude_12553;
    ((intptr_t*)_2)[14] = _5putback_fwd_line_number_12480;
    Ref(_49putback_ForwardLine_48783);
    ((intptr_t*)_2)[15] = _49putback_ForwardLine_48783;
    ((intptr_t*)_2)[16] = _49putback_forward_bp_48787;
    ((intptr_t*)_2)[17] = _5last_fwd_line_number_12481;
    Ref(_49last_ForwardLine_48784);
    ((intptr_t*)_2)[18] = _49last_ForwardLine_48784;
    ((intptr_t*)_2)[19] = _49last_forward_bp_48788;
    Ref(_49ThisLine_48781);
    ((intptr_t*)_2)[20] = _49ThisLine_48781;
    ((intptr_t*)_2)[21] = _5fwd_line_number_12479;
    ((intptr_t*)_2)[22] = _49forward_bp_48786;
    _14720 = MAKE_SEQ(_1);
    // SubProg IncludePush pc: 427 op: APPEND (35)
    RefDS(_14720);
    Append(&_61IncludeStk_25212, _61IncludeStk_25212, _14720);
    DeRefDS(_14720);
    _14720 = NOVALUE;
    // SubProg IncludePush pc: 431 op: STARTLINE (58)

    /** scanner.e:864		file_include = append( file_include, {} )*/
    // SubProg IncludePush pc: 433 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 435 op: APPEND (35)
    RefDS(_5);
    Append(&_7file_include_11394, _7file_include_11394, _5);
    // SubProg IncludePush pc: 439 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 441 op: STARTLINE (58)

    /** scanner.e:865		file_include_by = append( file_include_by, {} )*/
    // SubProg IncludePush pc: 443 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 445 op: APPEND (35)
    RefDS(_5);
    Append(&_7file_include_by_11403, _7file_include_by_11403, _5);
    // SubProg IncludePush pc: 449 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 451 op: STARTLINE (58)

    /** scanner.e:866		for i = 1 to length( include_matrix) do*/
    // SubProg IncludePush pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 455 op: LENGTH (42)
    if (IS_SEQUENCE(_7include_matrix_11396)){
            _14724 = SEQ_PTR(_7include_matrix_11396)->length;
    }
    else {
        _14724 = 1;
    }
    // SubProg IncludePush pc: 458 op: FOR_I (125)
    {
        object _i_26322;
        _i_26322 = 1;
LA: // addr: 465 pc: 458 sub: 26205 op: 125
        if (_i_26322 > _14724){
            goto LB; // [458] 504
        }
        // SubProg IncludePush pc: 465 op: STARTLINE (58)

        /** scanner.e:867			include_matrix[i]   &= 0*/
        // SubProg IncludePush pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 469 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _14725 = (object)*(((s1_ptr)_2)->base + _i_26322);
        // SubProg IncludePush pc: 473 op: CONCAT (15)
        if (IS_SEQUENCE(_14725) && IS_ATOM(0)) {
            Append(&_14726, _14725, 0);
        }
        else if (IS_ATOM(_14725) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14726, _14725, 0);
            _14725 = NOVALUE;
        }
        _14725 = NOVALUE;
        // SubProg IncludePush pc: 477 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _2 = (object)(((s1_ptr)_2)->base + _i_26322);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14726;
        if( _1 != _14726 ){
            DeRef(_1);
        }
        _14726 = NOVALUE;
        // SubProg IncludePush pc: 481 op: STARTLINE (58)

        /** scanner.e:868			indirect_include[i] &= 0*/
        // SubProg IncludePush pc: 483 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 485 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_7indirect_include_11399);
        _14727 = (object)*(((s1_ptr)_2)->base + _i_26322);
        // SubProg IncludePush pc: 489 op: CONCAT (15)
        if (IS_SEQUENCE(_14727) && IS_ATOM(0)) {
            Append(&_14728, _14727, 0);
        }
        else if (IS_ATOM(_14727) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14728, _14727, 0);
            _14727 = NOVALUE;
        }
        _14727 = NOVALUE;
        // SubProg IncludePush pc: 493 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_7indirect_include_11399);
        _2 = (object)(((s1_ptr)_2)->base + _i_26322);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14728;
        if( _1 != _14728 ){
            DeRef(_1);
        }
        _14728 = NOVALUE;
        // SubProg IncludePush pc: 497 op: STARTLINE (58)

        /** scanner.e:869		end for*/
        // SubProg IncludePush pc: 499 op: ENDFOR_INT_UP1 (54)
        _i_26322 = _i_26322 + 1;
        goto LA; // [499] 465
LB: // addr: 504 pc: 499 sub: 26205 op: 54
        ;
    }
    // SubProg IncludePush pc: 504 op: STARTLINE (58)

    /** scanner.e:870		include_matrix = append( include_matrix, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14729 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14729 = 1;
    }
    // SubProg IncludePush pc: 513 op: REPEAT (32)
    _14730 = Repeat(0, _14729);
    _14729 = NOVALUE;
    // SubProg IncludePush pc: 517 op: APPEND (35)
    RefDS(_14730);
    Append(&_7include_matrix_11396, _7include_matrix_11396, _14730);
    DeRefDS(_14730);
    _14730 = NOVALUE;
    // SubProg IncludePush pc: 521 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 523 op: STARTLINE (58)

    /** scanner.e:871		include_matrix[$][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 527 op: LENGTH (42)
    if (IS_SEQUENCE(_7include_matrix_11396)){
            _14732 = SEQ_PTR(_7include_matrix_11396)->length;
    }
    else {
        _14732 = 1;
    }
    // SubProg IncludePush pc: 530 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14732 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 535 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14735 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14735 = 1;
    }
    _14733 = NOVALUE;
    // SubProg IncludePush pc: 538 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 540 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14735);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14733 = NOVALUE;
    // SubProg IncludePush pc: 544 op: STARTLINE (58)

    /** scanner.e:872		include_matrix[current_file_no][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 546 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 550 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7include_matrix_11396 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5current_file_no_12477 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 555 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14738 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14738 = 1;
    }
    _14736 = NOVALUE;
    // SubProg IncludePush pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 560 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14738);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14736 = NOVALUE;
    // SubProg IncludePush pc: 564 op: STARTLINE (58)

    /** scanner.e:874		indirect_include = append( indirect_include, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 566 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 570 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14739 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14739 = 1;
    }
    // SubProg IncludePush pc: 573 op: REPEAT (32)
    _14740 = Repeat(0, _14739);
    _14739 = NOVALUE;
    // SubProg IncludePush pc: 577 op: APPEND (35)
    RefDS(_14740);
    Append(&_7indirect_include_11399, _7indirect_include_11399, _14740);
    DeRefDS(_14740);
    _14740 = NOVALUE;
    // SubProg IncludePush pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 583 op: STARTLINE (58)

    /** scanner.e:875		indirect_include[current_file_no][$] = OpIndirectInclude*/
    // SubProg IncludePush pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 587 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 589 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7indirect_include_11399);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7indirect_include_11399 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5current_file_no_12477 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 594 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14744 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14744 = 1;
    }
    _14742 = NOVALUE;
    // SubProg IncludePush pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 599 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14744);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5OpIndirectInclude_12553;
    DeRef(_1);
    _14742 = NOVALUE;
    // SubProg IncludePush pc: 603 op: STARTLINE (58)

    /** scanner.e:876		OpIndirectInclude = 1*/
    // SubProg IncludePush pc: 605 op: ASSIGN (18)
    _5OpIndirectInclude_12553 = 1;
    // SubProg IncludePush pc: 608 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 610 op: STARTLINE (58)

    /** scanner.e:878		file_public  = append( file_public, {} )*/
    // SubProg IncludePush pc: 612 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 614 op: APPEND (35)
    RefDS(_5);
    Append(&_7file_public_11401, _7file_public_11401, _5);
    // SubProg IncludePush pc: 618 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 620 op: STARTLINE (58)

    /** scanner.e:879		file_public_by = append( file_public_by, {} )*/
    // SubProg IncludePush pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 624 op: APPEND (35)
    RefDS(_5);
    Append(&_7file_public_by_11405, _7file_public_by_11405, _5);
    // SubProg IncludePush pc: 628 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 630 op: STARTLINE (58)

    /** scanner.e:880		file_include[current_file_no] &= length( file_include )*/
    // SubProg IncludePush pc: 632 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 634 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 638 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14747 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14747 = 1;
    }
    // SubProg IncludePush pc: 641 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _14748 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 645 op: CONCAT (15)
    if (IS_SEQUENCE(_14748) && IS_ATOM(_14747)) {
        Append(&_14749, _14748, _14747);
    }
    else if (IS_ATOM(_14748) && IS_SEQUENCE(_14747)) {
    }
    else {
        Concat((object_ptr)&_14749, _14748, _14747);
        _14748 = NOVALUE;
    }
    _14748 = NOVALUE;
    _14747 = NOVALUE;
    // SubProg IncludePush pc: 649 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_11394);
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14749;
    if( _1 != _14749 ){
        DeRef(_1);
    }
    _14749 = NOVALUE;
    // SubProg IncludePush pc: 653 op: STARTLINE (58)

    /** scanner.e:881		add_include_by( current_file_no, length(file_include), public_include )*/
    // SubProg IncludePush pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 657 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 659 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14750 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14750 = 1;
    }
    // SubProg IncludePush pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 664 op: PROC (27)
    _61add_include_by(_5current_file_no_12477, _14750, _61public_include_25206);
    _14750 = NOVALUE;
    // SubProg IncludePush pc: 669 op: STARTLINE (58)

    /** scanner.e:882		if public_include then*/
    // SubProg IncludePush pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 673 op: IF (20)
    if (_61public_include_25206 == 0)
    {
        goto LC; // [673] 707
    }
    else{
    }
    // SubProg IncludePush pc: 676 op: STARTLINE (58)

    /** scanner.e:883			file_public[current_file_no] &= length( file_public )*/
    // SubProg IncludePush pc: 678 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 680 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 684 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_public_11401)){
            _14751 = SEQ_PTR(_7file_public_11401)->length;
    }
    else {
        _14751 = 1;
    }
    // SubProg IncludePush pc: 687 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _14752 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 691 op: CONCAT (15)
    if (IS_SEQUENCE(_14752) && IS_ATOM(_14751)) {
        Append(&_14753, _14752, _14751);
    }
    else if (IS_ATOM(_14752) && IS_SEQUENCE(_14751)) {
    }
    else {
        Concat((object_ptr)&_14753, _14752, _14751);
        _14752 = NOVALUE;
    }
    _14752 = NOVALUE;
    _14751 = NOVALUE;
    // SubProg IncludePush pc: 695 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_public_11401);
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14753;
    if( _1 != _14753 ){
        DeRef(_1);
    }
    _14753 = NOVALUE;
    // SubProg IncludePush pc: 699 op: STARTLINE (58)

    /** scanner.e:884			patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 701 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 703 op: PROC (27)
    _61patch_exports(_5current_file_no_12477);
    // SubProg IncludePush pc: 706 op: NOP1 (159)
LC: // addr: 707 pc: 706 sub: 26205 op: 159
    // SubProg IncludePush pc: 707 op: STARTLINE (58)

    /** scanner.e:887	ifdef STDDEBUG then*/
    // SubProg IncludePush pc: 709 op: STARTLINE (58)

    /** scanner.e:893		src_file = new_file_handle*/
    // SubProg IncludePush pc: 711 op: ASSIGN (18)
    _5src_file_12599 = _new_file_handle_26207;
    // SubProg IncludePush pc: 714 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 716 op: STARTLINE (58)

    /** scanner.e:894		file_start_sym = last_sym*/
    // SubProg IncludePush pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 720 op: ASSIGN (18)
    _5file_start_sym_12483 = _53last_sym_46333;
    // SubProg IncludePush pc: 723 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 725 op: STARTLINE (58)

    /** scanner.e:895		if current_file_no >= MAX_FILE then*/
    // SubProg IncludePush pc: 727 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 729 op: GREATEREQ_IFW (103)
    if (_5current_file_no_12477 < 256)
    goto LD; // [729] 741
    // SubProg IncludePush pc: 733 op: STARTLINE (58)

    /** scanner.e:896			CompileErr(126)*/
    // SubProg IncludePush pc: 735 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(126, _21958, 0);
    // SubProg IncludePush pc: 740 op: NOP1 (159)
LD: // addr: 741 pc: 740 sub: 26205 op: 159
    // SubProg IncludePush pc: 741 op: STARTLINE (58)

    /** scanner.e:898		known_files = append(known_files, new_include_name)*/
    // SubProg IncludePush pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 745 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 747 op: APPEND (35)
    RefDS(_5new_include_name_12600);
    Append(&_7known_files_11390, _7known_files_11390, _5new_include_name_12600);
    // SubProg IncludePush pc: 751 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 753 op: STARTLINE (58)

    /** scanner.e:899		known_files_hash &= new_hash*/
    // SubProg IncludePush pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 757 op: CONCAT (15)
    Ref(_new_hash_26209);
    Append(&_7known_files_hash_11391, _7known_files_hash_11391, _new_hash_26209);
    // SubProg IncludePush pc: 761 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 763 op: STARTLINE (58)

    /** scanner.e:900		finished_files &= 0*/
    // SubProg IncludePush pc: 765 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 767 op: CONCAT (15)
    Append(&_7finished_files_11392, _7finished_files_11392, 0);
    // SubProg IncludePush pc: 771 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 773 op: STARTLINE (58)

    /** scanner.e:901		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg IncludePush pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 779 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _14759 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _14759 = 1;
    }
    // SubProg IncludePush pc: 782 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _14759;
    _14760 = MAKE_SEQ(_1);
    _14759 = NOVALUE;
    // SubProg IncludePush pc: 786 op: APPEND (35)
    RefDS(_14760);
    Append(&_7file_include_depend_11393, _7file_include_depend_11393, _14760);
    DeRefDS(_14760);
    _14760 = NOVALUE;
    // SubProg IncludePush pc: 790 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 792 op: STARTLINE (58)

    /** scanner.e:902		file_include_depend[current_file_no] &= length( known_files )*/
    // SubProg IncludePush pc: 794 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 798 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _14762 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _14762 = 1;
    }
    // SubProg IncludePush pc: 803 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_7file_include_depend_11393);
    _14763 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg IncludePush pc: 807 op: CONCAT (15)
    if (IS_SEQUENCE(_14763) && IS_ATOM(_14762)) {
        Append(&_14764, _14763, _14762);
    }
    else if (IS_ATOM(_14763) && IS_SEQUENCE(_14762)) {
    }
    else {
        Concat((object_ptr)&_14764, _14763, _14762);
        _14763 = NOVALUE;
    }
    _14763 = NOVALUE;
    _14762 = NOVALUE;
    // SubProg IncludePush pc: 811 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_7file_include_depend_11393);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7file_include_depend_11393 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _5current_file_no_12477);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14764;
    if( _1 != _14764 ){
        DeRef(_1);
    }
    _14764 = NOVALUE;
    // SubProg IncludePush pc: 815 op: STARTLINE (58)

    /** scanner.e:903		check_coverage()*/
    // SubProg IncludePush pc: 817 op: PROC (27)
    _50check_coverage();
    // SubProg IncludePush pc: 819 op: STARTLINE (58)

    /** scanner.e:904		default_namespaces &= 0*/
    // SubProg IncludePush pc: 821 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 823 op: CONCAT (15)
    Append(&_61default_namespaces_25209, _61default_namespaces_25209, 0);
    // SubProg IncludePush pc: 827 op: STARTLINE (58)

    /** scanner.e:906		update_include_matrix( length( file_include ), current_file_no )*/
    // SubProg IncludePush pc: 829 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 831 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_11394)){
            _14766 = SEQ_PTR(_7file_include_11394)->length;
    }
    else {
        _14766 = 1;
    }
    // SubProg IncludePush pc: 834 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 836 op: PROC (27)
    _61update_include_matrix(_14766, _5current_file_no_12477);
    _14766 = NOVALUE;
    // SubProg IncludePush pc: 840 op: STARTLINE (58)

    /** scanner.e:907		old_file_no = current_file_no*/
    // SubProg IncludePush pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 844 op: ASSIGN (18)
    _old_file_no_26208 = _5current_file_no_12477;
    // SubProg IncludePush pc: 847 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 849 op: STARTLINE (58)

    /** scanner.e:908		current_file_no = length(known_files)*/
    // SubProg IncludePush pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 853 op: LENGTH (42)
    if (IS_SEQUENCE(_7known_files_11390)){
            _5current_file_no_12477 = SEQ_PTR(_7known_files_11390)->length;
    }
    else {
        _5current_file_no_12477 = 1;
    }
    // SubProg IncludePush pc: 856 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 858 op: STARTLINE (58)

    /** scanner.e:909		line_number = 0*/
    // SubProg IncludePush pc: 860 op: ASSIGN (18)
    _5line_number_12478 = 0;
    // SubProg IncludePush pc: 863 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 865 op: STARTLINE (58)

    /** scanner.e:910		read_line()*/
    // SubProg IncludePush pc: 867 op: PROC (27)
    _61read_line();
    // SubProg IncludePush pc: 869 op: STARTLINE (58)

    /** scanner.e:912		if new_include_space != 0 then*/
    // SubProg IncludePush pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 873 op: NOTEQ_IFW (105)
    if (_61new_include_space_25201 == 0)
    goto LE; // [873] 897
    // SubProg IncludePush pc: 877 op: STARTLINE (58)

    /** scanner.e:913			SymTab[new_include_space][S_OBJ] = current_file_no*/
    // SubProg IncludePush pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_61new_include_space_25201 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 888 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 892 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5current_file_no_12477;
    DeRef(_1);
    _14769 = NOVALUE;
    // SubProg IncludePush pc: 896 op: NOP1 (159)
LE: // addr: 897 pc: 896 sub: 26205 op: 159
    // SubProg IncludePush pc: 897 op: STARTLINE (58)

    /** scanner.e:915		default_namespace( )*/
    // SubProg IncludePush pc: 899 op: PROC (27)
    _61default_namespace();
    // SubProg IncludePush pc: 901 op: STARTLINE (58)

    /** scanner.e:916	end procedure*/
    // SubProg IncludePush pc: 903 op: RETURNP (29)

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26207

// block var old_file_no_26208

// block var new_hash_26209
    DeRef(_new_hash_26209);

// block var idx_26210
    DeRef(_14712);
    _14712 = NOVALUE;
    return;
    // SubProg IncludePush pc: 906 op: BADRETURNF (43)
    ;
}


void _61update_include_completion(object _file_no_26432)
{
    object _fx_26441 = NOVALUE;
// skipping _14781  name type: 0
// skipping _14780  name type: 0
    object _14779 = NOVALUE; // 26453 14779
    object _14778 = NOVALUE; // 26452 14778
    object _14777 = NOVALUE; // 26449 14777
    object _14776 = NOVALUE; // 26448 14776
// skipping _14775  name type: 0
    object _14774 = NOVALUE; // 26443 14774
    object _14773 = NOVALUE; // 26440 14773
    object _14772 = NOVALUE; // 26439 14772
    object _14771 = NOVALUE; // 26436 14771
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_include_completion pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_completion pc: 3 op: STARTLINE (58)

    /** scanner.e:919		for i = 1 to length( file_include_depend ) do*/
    // SubProg update_include_completion pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_completion pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_7file_include_depend_11393)){
            _14771 = SEQ_PTR(_7file_include_depend_11393)->length;
    }
    else {
        _14771 = 1;
    }
    // SubProg update_include_completion pc: 10 op: FOR_I (125)
    {
        object _i_26434;
        _i_26434 = 1;
L1: // addr: 17 pc: 10 sub: 26430 op: 125
        if (_i_26434 > _14771){
            goto L2; // [10] 114
        }
        // SubProg update_include_completion pc: 17 op: STARTLINE (58)

        /** scanner.e:920			if length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_depend_11393);
        _14772 = (object)*(((s1_ptr)_2)->base + _i_26434);
        // SubProg update_include_completion pc: 25 op: LENGTH (42)
        if (IS_SEQUENCE(_14772)){
                _14773 = SEQ_PTR(_14772)->length;
        }
        else {
            _14773 = 1;
        }
        _14772 = NOVALUE;
        // SubProg update_include_completion pc: 28 op: IF (20)
        if (_14773 == 0)
        {
            _14773 = NOVALUE;
            goto L3; // [28] 105
        }
        else{
            _14773 = NOVALUE;
        }
        // SubProg update_include_completion pc: 31 op: STARTLINE (58)

        /** scanner.e:921				integer fx = find( file_no, file_include_depend[i] )*/
        // SubProg update_include_completion pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_depend_11393);
        _14774 = (object)*(((s1_ptr)_2)->base + _i_26434);
        // SubProg update_include_completion pc: 39 op: FIND_FROM (176)
        _fx_26441 = find_from(_file_no_26432, _14774, 1);
        _14774 = NOVALUE;
        // SubProg update_include_completion pc: 44 op: STARTLINE (58)

        /** scanner.e:922				if fx then*/
        // SubProg update_include_completion pc: 46 op: IF (20)
        if (_fx_26441 == 0)
        {
            goto L4; // [46] 104
        }
        else{
        }
        // SubProg update_include_completion pc: 49 op: STARTLINE (58)

        /** scanner.e:923					file_include_depend[i] = remove( file_include_depend[i], fx )*/
        // SubProg update_include_completion pc: 51 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_depend_11393);
        _14776 = (object)*(((s1_ptr)_2)->base + _i_26434);
        // SubProg update_include_completion pc: 59 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_14776);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_26441)) ? _fx_26441 : (object)(DBL_PTR(_fx_26441)->dbl);
            int stop = (IS_ATOM_INT(_fx_26441)) ? _fx_26441 : (object)(DBL_PTR(_fx_26441)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
                RefDS(_14776);
                DeRef(_14777);
                _14777 = _14776;
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_14776), start, &_14777 );
                }
                else Tail(SEQ_PTR(_14776), stop+1, &_14777);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_14776), start, &_14777);
            }
            else {
                assign_slice_seq = &assign_space;
                _1 = Remove_elements(start, stop, 0);
                DeRef(_14777);
                _14777 = _1;
            }
        }
        _14776 = NOVALUE;
        // SubProg update_include_completion pc: 64 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_7file_include_depend_11393);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7file_include_depend_11393 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26434);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14777;
        if( _1 != _14777 ){
            DeRef(_1);
        }
        _14777 = NOVALUE;
        // SubProg update_include_completion pc: 68 op: STARTLINE (58)

        /** scanner.e:924					if not length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7file_include_depend_11393);
        _14778 = (object)*(((s1_ptr)_2)->base + _i_26434);
        // SubProg update_include_completion pc: 76 op: LENGTH (42)
        if (IS_SEQUENCE(_14778)){
                _14779 = SEQ_PTR(_14778)->length;
        }
        else {
            _14779 = 1;
        }
        _14778 = NOVALUE;
        // SubProg update_include_completion pc: 79 op: NOT_IFW (108)
        if (_14779 != 0)
        goto L5; // [79] 103
        _14779 = NOVALUE;
        // SubProg update_include_completion pc: 82 op: STARTLINE (58)

        /** scanner.e:925						finished_files[i] = 1*/
        // SubProg update_include_completion pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 86 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_7finished_files_11392);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7finished_files_11392 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26434);
        *(intptr_t *)_2 = 1;
        // SubProg update_include_completion pc: 90 op: STARTLINE (58)

        /** scanner.e:926						if i != file_no then*/
        // SubProg update_include_completion pc: 92 op: NOTEQ_IFW_I (122)
        if (_i_26434 == _file_no_26432)
        goto L6; // [92] 102
        // SubProg update_include_completion pc: 96 op: STARTLINE (58)

        /** scanner.e:927							update_include_completion( i )*/
        // SubProg update_include_completion pc: 98 op: PROC (27)
        _61update_include_completion(_i_26434);
        // SubProg update_include_completion pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 26430 op: 159
        // SubProg update_include_completion pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 26430 op: 159
        // SubProg update_include_completion pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 26430 op: 159
        // SubProg update_include_completion pc: 104 op: NOP1 (159)
L3: // addr: 105 pc: 104 sub: 26430 op: 159
        // SubProg update_include_completion pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fx_26441
        // SubProg update_include_completion pc: 107 op: STARTLINE (58)

        /** scanner.e:932		end for*/
        // SubProg update_include_completion pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_26434 = _i_26434 + 1;
        goto L1; // [109] 17
L2: // addr: 114 pc: 109 sub: 26430 op: 54
        ;
    }
    // SubProg update_include_completion pc: 114 op: STARTLINE (58)

    /** scanner.e:933	end procedure*/
    // SubProg update_include_completion pc: 116 op: RETURNP (29)

// Exiting block BLOCK: update_include_completion

// block var file_no_26432
    _14778 = NOVALUE;
    _14772 = NOVALUE;
    return;
    // SubProg update_include_completion pc: 119 op: BADRETURNF (43)
    ;
}


object _61IncludePop()
{
    object _top_26472 = NOVALUE;
// skipping _14811  name type: 0
    object _14810 = NOVALUE; // 26530 14810
// skipping _14809  name type: 0
    object _14808 = NOVALUE; // 26526 14808
    object _14807 = NOVALUE; // 26525 14807
// skipping _14806  name type: 0
// skipping _14805  name type: 0
// skipping _14804  name type: 0
// skipping _14803  name type: 0
// skipping _14802  name type: 0
// skipping _14801  name type: 0
// skipping _14800  name type: 0
// skipping _14799  name type: 0
// skipping _14798  name type: 0
// skipping _14797  name type: 0
// skipping _14796  name type: 0
// skipping _14795  name type: 0
// skipping _14794  name type: 0
// skipping _14793  name type: 0
// skipping _14792  name type: 0
// skipping _14791  name type: 0
// skipping _14790  name type: 0
// skipping _14789  name type: 0
// skipping _14788  name type: 0
// skipping _14787  name type: 0
// skipping _14786  name type: 0
    object _14785 = NOVALUE; // 26473 14785
// skipping _14784  name type: 0
    object _14783 = NOVALUE; // 26469 14783
// skipping _14782  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePop pc: 1 op: STARTLINE (58)

    /** scanner.e:940		update_include_completion( current_file_no )*/
    // SubProg IncludePop pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 5 op: PROC (27)
    _61update_include_completion(_5current_file_no_12477);
    // SubProg IncludePop pc: 8 op: STARTLINE (58)

    /** scanner.e:941		Resolve_forward_references()*/
    // SubProg IncludePop pc: 10 op: PROC (27)
    _30Resolve_forward_references(0);
    // SubProg IncludePop pc: 13 op: STARTLINE (58)

    /** scanner.e:942		HideLocals()*/
    // SubProg IncludePop pc: 15 op: PROC (27)
    _53HideLocals();
    // SubProg IncludePop pc: 17 op: STARTLINE (58)

    /** scanner.e:944		if src_file >= 0 then*/
    // SubProg IncludePop pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 21 op: GREATEREQ_IFW (103)
    if (_5src_file_12599 < 0)
    goto L1; // [21] 39
    // SubProg IncludePop pc: 25 op: STARTLINE (58)

    /** scanner.e:945			close(src_file)*/
    // SubProg IncludePop pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 29 op: CLOSE (86)
    EClose(_5src_file_12599);
    // SubProg IncludePop pc: 31 op: STARTLINE (58)

    /** scanner.e:946			src_file = -1*/
    // SubProg IncludePop pc: 33 op: ASSIGN (18)
    _5src_file_12599 = -1;
    // SubProg IncludePop pc: 36 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 26458 op: 159
    // SubProg IncludePop pc: 39 op: STARTLINE (58)

    /** scanner.e:949		if length(IncludeStk) = 0 then*/
    // SubProg IncludePop pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25212)){
            _14783 = SEQ_PTR(_61IncludeStk_25212)->length;
    }
    else {
        _14783 = 1;
    }
    // SubProg IncludePop pc: 46 op: EQUALS_IFW_I (121)
    if (_14783 != 0)
    goto L2; // [46] 59
    // SubProg IncludePop pc: 50 op: STARTLINE (58)

    /** scanner.e:950			return FALSE  -- the end*/
    // SubProg IncludePop pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 54 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26472
    DeRef(_top_26472);
    return _6FALSE_363;
    // SubProg IncludePop pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 26458 op: 159
    // SubProg IncludePop pc: 59 op: STARTLINE (58)

    /** scanner.e:953		sequence top = IncludeStk[$]*/
    // SubProg IncludePop pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25212)){
            _14785 = SEQ_PTR(_61IncludeStk_25212)->length;
    }
    else {
        _14785 = 1;
    }
    // SubProg IncludePop pc: 66 op: RHS_SUBS (25)
    DeRef(_top_26472);
    _2 = (object)SEQ_PTR(_61IncludeStk_25212);
    _top_26472 = (object)*(((s1_ptr)_2)->base + _14785);
    RefDS(_top_26472);
    // SubProg IncludePop pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 72 op: STARTLINE (58)

    /** scanner.e:955		current_file_no    = top[FILE_NO]*/
    // SubProg IncludePop pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5current_file_no_12477 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_5current_file_no_12477)){
        _5current_file_no_12477 = (object)DBL_PTR(_5current_file_no_12477)->dbl;
    }
    // SubProg IncludePop pc: 80 op: STARTLINE (58)

    /** scanner.e:956		line_number        = top[LINE_NO]*/
    // SubProg IncludePop pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5line_number_12478 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_5line_number_12478)){
        _5line_number_12478 = (object)DBL_PTR(_5line_number_12478)->dbl;
    }
    // SubProg IncludePop pc: 88 op: STARTLINE (58)

    /** scanner.e:957		src_file           = top[FILE_PTR]*/
    // SubProg IncludePop pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5src_file_12599 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_5src_file_12599)){
        _5src_file_12599 = (object)DBL_PTR(_5src_file_12599)->dbl;
    }
    // SubProg IncludePop pc: 96 op: STARTLINE (58)

    /** scanner.e:958		file_start_sym     = top[FILE_START_SYM]*/
    // SubProg IncludePop pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5file_start_sym_12483 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_5file_start_sym_12483)){
        _5file_start_sym_12483 = (object)DBL_PTR(_5file_start_sym_12483)->dbl;
    }
    // SubProg IncludePop pc: 104 op: STARTLINE (58)

    /** scanner.e:959		OpWarning          = top[OP_WARNING]*/
    // SubProg IncludePop pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpWarning_12545 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_5OpWarning_12545)){
        _5OpWarning_12545 = (object)DBL_PTR(_5OpWarning_12545)->dbl;
    }
    // SubProg IncludePop pc: 112 op: STARTLINE (58)

    /** scanner.e:960		OpTrace            = top[OP_TRACE]*/
    // SubProg IncludePop pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpTrace_12547 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_5OpTrace_12547)){
        _5OpTrace_12547 = (object)DBL_PTR(_5OpTrace_12547)->dbl;
    }
    // SubProg IncludePop pc: 120 op: STARTLINE (58)

    /** scanner.e:961		OpTypeCheck        = top[OP_TYPE_CHECK]*/
    // SubProg IncludePop pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpTypeCheck_12548 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_5OpTypeCheck_12548)){
        _5OpTypeCheck_12548 = (object)DBL_PTR(_5OpTypeCheck_12548)->dbl;
    }
    // SubProg IncludePop pc: 128 op: STARTLINE (58)

    /** scanner.e:962		OpProfileTime      = top[OP_PROFILE_TIME]*/
    // SubProg IncludePop pc: 130 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpProfileTime_12550 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_5OpProfileTime_12550)){
        _5OpProfileTime_12550 = (object)DBL_PTR(_5OpProfileTime_12550)->dbl;
    }
    // SubProg IncludePop pc: 136 op: STARTLINE (58)

    /** scanner.e:963		OpProfileStatement = top[OP_PROFILE_STATEMENT]*/
    // SubProg IncludePop pc: 138 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpProfileStatement_12549 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_5OpProfileStatement_12549)){
        _5OpProfileStatement_12549 = (object)DBL_PTR(_5OpProfileStatement_12549)->dbl;
    }
    // SubProg IncludePop pc: 144 op: STARTLINE (58)

    /** scanner.e:964		OpDefines          = top[OP_DEFINES]*/
    // SubProg IncludePop pc: 146 op: RHS_SUBS (25)
    DeRef(_5OpDefines_12551);
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpDefines_12551 = (object)*(((s1_ptr)_2)->base + 10);
    Ref(_5OpDefines_12551);
    // SubProg IncludePop pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 152 op: STARTLINE (58)

    /** scanner.e:965		prev_OpWarning     = top[PREV_OP_WARNING]*/
    // SubProg IncludePop pc: 154 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5prev_OpWarning_12546 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_5prev_OpWarning_12546)){
        _5prev_OpWarning_12546 = (object)DBL_PTR(_5prev_OpWarning_12546)->dbl;
    }
    // SubProg IncludePop pc: 160 op: STARTLINE (58)

    /** scanner.e:966		OpInline           = top[OP_INLINE]*/
    // SubProg IncludePop pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpInline_12552 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_5OpInline_12552)){
        _5OpInline_12552 = (object)DBL_PTR(_5OpInline_12552)->dbl;
    }
    // SubProg IncludePop pc: 168 op: STARTLINE (58)

    /** scanner.e:967		OpIndirectInclude  = top[OP_INDIRECT_INCLUDE]*/
    // SubProg IncludePop pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5OpIndirectInclude_12553 = (object)*(((s1_ptr)_2)->base + 13);
    if (!IS_ATOM_INT(_5OpIndirectInclude_12553)){
        _5OpIndirectInclude_12553 = (object)DBL_PTR(_5OpIndirectInclude_12553)->dbl;
    }
    // SubProg IncludePop pc: 176 op: STARTLINE (58)

    /** scanner.e:968		putback_fwd_line_number = line_number -- top[PUTBACK_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 180 op: ASSIGN (18)
    _5putback_fwd_line_number_12480 = _5line_number_12478;
    // SubProg IncludePop pc: 183 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 185 op: STARTLINE (58)

    /** scanner.e:969		putback_ForwardLine = top[PUTBACK_FORWARDLINE]*/
    // SubProg IncludePop pc: 187 op: RHS_SUBS (25)
    DeRef(_49putback_ForwardLine_48783);
    _2 = (object)SEQ_PTR(_top_26472);
    _49putback_ForwardLine_48783 = (object)*(((s1_ptr)_2)->base + 15);
    Ref(_49putback_ForwardLine_48783);
    // SubProg IncludePop pc: 191 op: STARTLINE (58)

    /** scanner.e:970		putback_forward_bp = top[PUTBACK_FORWARD_BP]*/
    // SubProg IncludePop pc: 193 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _49putback_forward_bp_48787 = (object)*(((s1_ptr)_2)->base + 16);
    if (!IS_ATOM_INT(_49putback_forward_bp_48787)){
        _49putback_forward_bp_48787 = (object)DBL_PTR(_49putback_forward_bp_48787)->dbl;
    }
    // SubProg IncludePop pc: 199 op: STARTLINE (58)

    /** scanner.e:971		last_fwd_line_number = top[LAST_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _5last_fwd_line_number_12481 = (object)*(((s1_ptr)_2)->base + 17);
    if (!IS_ATOM_INT(_5last_fwd_line_number_12481)){
        _5last_fwd_line_number_12481 = (object)DBL_PTR(_5last_fwd_line_number_12481)->dbl;
    }
    // SubProg IncludePop pc: 207 op: STARTLINE (58)

    /** scanner.e:972		last_ForwardLine = top[LAST_FORWARDLINE]*/
    // SubProg IncludePop pc: 209 op: RHS_SUBS (25)
    DeRef(_49last_ForwardLine_48784);
    _2 = (object)SEQ_PTR(_top_26472);
    _49last_ForwardLine_48784 = (object)*(((s1_ptr)_2)->base + 18);
    Ref(_49last_ForwardLine_48784);
    // SubProg IncludePop pc: 213 op: STARTLINE (58)

    /** scanner.e:973		last_forward_bp = top[LAST_FORWARD_BP]*/
    // SubProg IncludePop pc: 215 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _49last_forward_bp_48788 = (object)*(((s1_ptr)_2)->base + 19);
    if (!IS_ATOM_INT(_49last_forward_bp_48788)){
        _49last_forward_bp_48788 = (object)DBL_PTR(_49last_forward_bp_48788)->dbl;
    }
    // SubProg IncludePop pc: 221 op: STARTLINE (58)

    /** scanner.e:974		ThisLine = top[THISLINE]*/
    // SubProg IncludePop pc: 223 op: RHS_SUBS (25)
    DeRef(_49ThisLine_48781);
    _2 = (object)SEQ_PTR(_top_26472);
    _49ThisLine_48781 = (object)*(((s1_ptr)_2)->base + 20);
    Ref(_49ThisLine_48781);
    // SubProg IncludePop pc: 227 op: STARTLINE (58)

    /** scanner.e:976		fwd_line_number = line_number --top[FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 231 op: ASSIGN (18)
    _5fwd_line_number_12479 = _5line_number_12478;
    // SubProg IncludePop pc: 234 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 236 op: STARTLINE (58)

    /** scanner.e:977		forward_bp = top[FORWARD_BP]*/
    // SubProg IncludePop pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26472);
    _49forward_bp_48786 = (object)*(((s1_ptr)_2)->base + 22);
    if (!IS_ATOM_INT(_49forward_bp_48786)){
        _49forward_bp_48786 = (object)DBL_PTR(_49forward_bp_48786)->dbl;
    }
    // SubProg IncludePop pc: 244 op: STARTLINE (58)

    /** scanner.e:978		ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 248 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_49ForwardLine_48782);
    _49ForwardLine_48782 = _49ThisLine_48781;
    // SubProg IncludePop pc: 251 op: STARTLINE (58)

    /** scanner.e:980		putback_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 255 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_49putback_ForwardLine_48783);
    _49putback_ForwardLine_48783 = _49ThisLine_48781;
    // SubProg IncludePop pc: 258 op: STARTLINE (58)

    /** scanner.e:981		last_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 262 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_49last_ForwardLine_48784);
    _49last_ForwardLine_48784 = _49ThisLine_48781;
    // SubProg IncludePop pc: 265 op: STARTLINE (58)

    /** scanner.e:983		IncludeStk = IncludeStk[1..$-1]*/
    // SubProg IncludePop pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25212)){
            _14807 = SEQ_PTR(_61IncludeStk_25212)->length;
    }
    else {
        _14807 = 1;
    }
    // SubProg IncludePop pc: 272 op: MINUS (10)
    _14808 = _14807 - 1;
    _14807 = NOVALUE;
    // SubProg IncludePop pc: 276 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_61IncludeStk_25212;
    RHS_Slice(_61IncludeStk_25212, 1, _14808);
    // SubProg IncludePop pc: 281 op: STARTLINE (58)

    /** scanner.e:984		SymTab[TopLevelSub][S_CODE] = Code*/
    // SubProg IncludePop pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 287 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5TopLevelSub_12484 + ((s1_ptr)_2)->base);
    // SubProg IncludePop pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 296 op: PASSIGN_SUBS (162)
    RefDS(_5Code_12566);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_CODE_12144))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_CODE_12144);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5Code_12566;
    DeRef(_1);
    _14810 = NOVALUE;
    // SubProg IncludePop pc: 300 op: STARTLINE (58)

    /** scanner.e:987		return TRUE*/
    // SubProg IncludePop pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 304 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26472
    DeRefDS(_top_26472);
    _14808 = NOVALUE;
    return _6TRUE_365;
    // SubProg IncludePop pc: 308 op: BADRETURNF (43)
    ;
}


object _61MakeInt(object _text_26571, object _nBase_26572)
{
    object _num_26573 = NOVALUE;
    object _fnum_26574 = NOVALUE;
    object _digit_26575 = NOVALUE;
    object _maxchk_26576 = NOVALUE;
// skipping _14860  name type: 0
// skipping _14859  name type: 0
    object _14858 = NOVALUE; // 26608 14858
// skipping _14857  name type: 0
    object _14856 = NOVALUE; // 26605 14856
// skipping _14855  name type: 0
    object _14854 = NOVALUE; // 26602 14854
// skipping _14853  name type: 0
// skipping _14852  name type: 0
    object _14851 = NOVALUE; // 26597 14851
    object _14850 = NOVALUE; // 26596 14850
    object _14849 = NOVALUE; // 26594 14849
// skipping _14848  name type: 0
    object _14847 = NOVALUE; // 26592 14847
// skipping _14846  name type: 0
    object _14845 = NOVALUE; // 26589 14845
    object _14844 = NOVALUE; // 26588 14844
    object _14843 = NOVALUE; // 26584 14843
// skipping _14842  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg MakeInt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg MakeInt pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_nBase_26572)) {
        _1 = (object)(DBL_PTR(_nBase_26572)->dbl);
        DeRefDS(_nBase_26572);
        _nBase_26572 = _1;
    }
    // SubProg MakeInt pc: 5 op: STARTLINE (58)

    /** scanner.e:1018		switch nBase do*/
    // SubProg MakeInt pc: 7 op: SWITCH_I (193)
    _0 = _nBase_26572;
    switch ( _0 ){ 
        // SubProg MakeInt pc: 12 op: STARTLINE (58)

        /** scanner.e:1019			case 2 then*/
        // SubProg MakeInt pc: 14 op: CASE (186)
        case 2:
        // SubProg MakeInt pc: 16 op: STARTLINE (58)

        /** scanner.e:1020				maxchk = MAXCHK2*/
        // SubProg MakeInt pc: 18 op: ASSIGN_I (113)
        _maxchk_26576 = 536870911;
        // SubProg MakeInt pc: 21 op: ELSE (23)
        goto L1; // [21] 82
        // SubProg MakeInt pc: 23 op: STARTLINE (58)

        /** scanner.e:1022			case 8 then*/
        // SubProg MakeInt pc: 25 op: CASE (186)
        case 8:
        // SubProg MakeInt pc: 27 op: STARTLINE (58)

        /** scanner.e:1023				maxchk = MAXCHK8*/
        // SubProg MakeInt pc: 29 op: ASSIGN_I (113)
        _maxchk_26576 = 134217727;
        // SubProg MakeInt pc: 32 op: ELSE (23)
        goto L1; // [32] 82
        // SubProg MakeInt pc: 34 op: STARTLINE (58)

        /** scanner.e:1025			case 10 then*/
        // SubProg MakeInt pc: 36 op: CASE (186)
        case 10:
        // SubProg MakeInt pc: 38 op: STARTLINE (58)

        /** scanner.e:1027				num = find(text, common_int_text)*/
        // SubProg MakeInt pc: 40 op: GLOBAL_INIT_CHECK (109)
        // SubProg MakeInt pc: 42 op: FIND_FROM (176)
        _num_26573 = find_from(_text_26571, _61common_int_text_26548, 1);
        // SubProg MakeInt pc: 47 op: STARTLINE (58)

        /** scanner.e:1028				if num then*/
        // SubProg MakeInt pc: 49 op: IF (20)
        if (_num_26573 == 0)
        {
            goto L2; // [49] 65
        }
        else{
        }
        // SubProg MakeInt pc: 52 op: STARTLINE (58)

        /** scanner.e:1029					return common_ints[num]*/
        // SubProg MakeInt pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg MakeInt pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_61common_ints_26566);
        _14843 = (object)*(((s1_ptr)_2)->base + _num_26573);
        // SubProg MakeInt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26571
        DeRefDS(_text_26571);

// block var nBase_26572

// block var num_26573

// block var fnum_26574
        DeRef(_fnum_26574);

// block var digit_26575

// block var maxchk_26576
        return _14843;
        // SubProg MakeInt pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 26569 op: 159
        // SubProg MakeInt pc: 65 op: STARTLINE (58)

        /** scanner.e:1032				maxchk = MAXCHK10*/
        // SubProg MakeInt pc: 67 op: ASSIGN_I (113)
        _maxchk_26576 = 107374181;
        // SubProg MakeInt pc: 70 op: ELSE (23)
        goto L1; // [70] 82
        // SubProg MakeInt pc: 72 op: STARTLINE (58)

        /** scanner.e:1034			case 16 then*/
        // SubProg MakeInt pc: 74 op: CASE (186)
        case 16:
        // SubProg MakeInt pc: 76 op: STARTLINE (58)

        /** scanner.e:1035				maxchk = MAXCHK16*/
        // SubProg MakeInt pc: 78 op: ASSIGN_I (113)
        _maxchk_26576 = 67108863;
        // SubProg MakeInt pc: 81 op: NOPSWITCH (187)
    ;}L1: // addr: 82 pc: 81 sub: 26569 op: 187
    // SubProg MakeInt pc: 82 op: STARTLINE (58)

    /** scanner.e:1039		num = 0*/
    // SubProg MakeInt pc: 84 op: ASSIGN_I (113)
    _num_26573 = 0;
    // SubProg MakeInt pc: 87 op: STARTLINE (58)

    /** scanner.e:1040		fnum = 0*/
    // SubProg MakeInt pc: 89 op: ASSIGN (18)
    DeRef(_fnum_26574);
    _fnum_26574 = 0;
    // SubProg MakeInt pc: 92 op: STARTLINE (58)

    /** scanner.e:1041		for i = 1 to length(text) do*/
    // SubProg MakeInt pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_26571)){
            _14844 = SEQ_PTR(_text_26571)->length;
    }
    else {
        _14844 = 1;
    }
    // SubProg MakeInt pc: 97 op: FOR_I (125)
    {
        object _i_26587;
        _i_26587 = 1;
L3: // addr: 104 pc: 97 sub: 26569 op: 125
        if (_i_26587 > _14844){
            goto L4; // [97] 212
        }
        // SubProg MakeInt pc: 104 op: STARTLINE (58)

        /** scanner.e:1042			digit = (text[i] - '0')*/
        // SubProg MakeInt pc: 106 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26571);
        _14845 = (object)*(((s1_ptr)_2)->base + _i_26587);
        // SubProg MakeInt pc: 110 op: MINUS (10)
        if (IS_ATOM_INT(_14845)) {
            _digit_26575 = _14845 - 48;
        }
        else {
            _digit_26575 = binary_op(MINUS, _14845, 48);
        }
        _14845 = NOVALUE;
        // SubProg MakeInt pc: 114 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_digit_26575)) {
            _1 = (object)(DBL_PTR(_digit_26575)->dbl);
            DeRefDS(_digit_26575);
            _digit_26575 = _1;
        }
        // SubProg MakeInt pc: 116 op: STARTLINE (58)

        /** scanner.e:1043			if digit >= nBase or digit < 0 then*/
        // SubProg MakeInt pc: 118 op: GREATEREQ (2)
        _14847 = (_digit_26575 >= _nBase_26572);
        // SubProg MakeInt pc: 122 op: SC1_OR_IF (147)
        if (_14847 != 0) {
            goto L5; // [122] 135
        }
        // SubProg MakeInt pc: 126 op: LESS (1)
        _14849 = (_digit_26575 < 0);
        // SubProg MakeInt pc: 130 op: NOP1 (159)
        // SubProg MakeInt pc: 131 op: IF (20)
        if (_14849 == 0)
        {
            DeRef(_14849);
            _14849 = NOVALUE;
            goto L6; // [131] 151
        }
        else{
            DeRef(_14849);
            _14849 = NOVALUE;
        }
        // SubProg MakeInt pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 26569 op: 159
        // SubProg MakeInt pc: 135 op: STARTLINE (58)

        /** scanner.e:1044				CompileErr(62, {text[i],i})*/
        // SubProg MakeInt pc: 137 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26571);
        _14850 = (object)*(((s1_ptr)_2)->base + _i_26587);
        // SubProg MakeInt pc: 141 op: RIGHT_BRACE_2 (85)
        Ref(_14850);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _14850;
        ((intptr_t *)_2)[2] = _i_26587;
        _14851 = MAKE_SEQ(_1);
        _14850 = NOVALUE;
        // SubProg MakeInt pc: 145 op: PROC (27)
        _49CompileErr(62, _14851, 0);
        _14851 = NOVALUE;
        // SubProg MakeInt pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 26569 op: 159
        // SubProg MakeInt pc: 151 op: STARTLINE (58)

        /** scanner.e:1046			if fnum = 0 then*/
        // SubProg MakeInt pc: 153 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _fnum_26574, 0)){
            goto L7; // [153] 194
        }
        // SubProg MakeInt pc: 157 op: STARTLINE (58)

        /** scanner.e:1047				if num <= maxchk then*/
        // SubProg MakeInt pc: 159 op: PRIVATE_INIT_CHECK (30)
        // SubProg MakeInt pc: 161 op: LESSEQ_IFW_I (123)
        if (_num_26573 > _maxchk_26576)
        goto L8; // [161] 180
        // SubProg MakeInt pc: 165 op: STARTLINE (58)

        /** scanner.e:1048					num = num * nBase + digit*/
        // SubProg MakeInt pc: 167 op: MULTIPLY (13)
        if (_num_26573 == (short)_num_26573 && _nBase_26572 <= INT15 && _nBase_26572 >= -INT15){
            _14854 = _num_26573 * _nBase_26572;
        }
        else{
            _14854 = NewDouble(_num_26573 * (eudouble)_nBase_26572);
        }
        // SubProg MakeInt pc: 171 op: PLUS (11)
        if (IS_ATOM_INT(_14854)) {
            _num_26573 = _14854 + _digit_26575;
        }
        else {
            _num_26573 = NewDouble(DBL_PTR(_14854)->dbl + (eudouble)_digit_26575);
        }
        DeRef(_14854);
        _14854 = NOVALUE;
        // SubProg MakeInt pc: 175 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_num_26573)) {
            _1 = (object)(DBL_PTR(_num_26573)->dbl);
            DeRefDS(_num_26573);
            _num_26573 = _1;
        }
        // SubProg MakeInt pc: 177 op: ELSE (23)
        goto L9; // [177] 205
        // SubProg MakeInt pc: 179 op: NOP1 (159)
L8: // addr: 180 pc: 179 sub: 26569 op: 159
        // SubProg MakeInt pc: 180 op: STARTLINE (58)

        /** scanner.e:1050					fnum = num * nBase + digit*/
        // SubProg MakeInt pc: 182 op: MULTIPLY (13)
        if (_num_26573 == (short)_num_26573 && _nBase_26572 <= INT15 && _nBase_26572 >= -INT15){
            _14856 = _num_26573 * _nBase_26572;
        }
        else{
            _14856 = NewDouble(_num_26573 * (eudouble)_nBase_26572);
        }
        // SubProg MakeInt pc: 186 op: PLUS (11)
        DeRef(_fnum_26574);
        if (IS_ATOM_INT(_14856)) {
            _fnum_26574 = _14856 + _digit_26575;
            if ((object)((uintptr_t)_fnum_26574 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26574 = NewDouble((eudouble)_fnum_26574);
            }
        }
        else {
            _fnum_26574 = NewDouble(DBL_PTR(_14856)->dbl + (eudouble)_digit_26575);
        }
        DeRef(_14856);
        _14856 = NOVALUE;
        // SubProg MakeInt pc: 190 op: NOP1 (159)
        // SubProg MakeInt pc: 191 op: ELSE (23)
        goto L9; // [191] 205
        // SubProg MakeInt pc: 193 op: NOP1 (159)
L7: // addr: 194 pc: 193 sub: 26569 op: 159
        // SubProg MakeInt pc: 194 op: STARTLINE (58)

        /** scanner.e:1053				fnum = fnum * nBase + digit*/
        // SubProg MakeInt pc: 196 op: MULTIPLY (13)
        if (IS_ATOM_INT(_fnum_26574)) {
            if (_fnum_26574 == (short)_fnum_26574 && _nBase_26572 <= INT15 && _nBase_26572 >= -INT15){
                _14858 = _fnum_26574 * _nBase_26572;
            }
            else{
                _14858 = NewDouble(_fnum_26574 * (eudouble)_nBase_26572);
            }
        }
        else {
            _14858 = NewDouble(DBL_PTR(_fnum_26574)->dbl * (eudouble)_nBase_26572);
        }
        // SubProg MakeInt pc: 200 op: PLUS (11)
        DeRef(_fnum_26574);
        if (IS_ATOM_INT(_14858)) {
            _fnum_26574 = _14858 + _digit_26575;
            if ((object)((uintptr_t)_fnum_26574 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26574 = NewDouble((eudouble)_fnum_26574);
            }
        }
        else {
            _fnum_26574 = NewDouble(DBL_PTR(_14858)->dbl + (eudouble)_digit_26575);
        }
        DeRef(_14858);
        _14858 = NOVALUE;
        // SubProg MakeInt pc: 204 op: NOP1 (159)
L9: // addr: 205 pc: 204 sub: 26569 op: 159
        // SubProg MakeInt pc: 205 op: STARTLINE (58)

        /** scanner.e:1055		end for*/
        // SubProg MakeInt pc: 207 op: ENDFOR_INT_UP1 (54)
        _i_26587 = _i_26587 + 1;
        goto L3; // [207] 104
L4: // addr: 212 pc: 207 sub: 26569 op: 54
        ;
    }
    // SubProg MakeInt pc: 212 op: STARTLINE (58)

    /** scanner.e:1057		if fnum = 0 then*/
    // SubProg MakeInt pc: 214 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fnum_26574, 0)){
        goto LA; // [214] 227
    }
    // SubProg MakeInt pc: 218 op: STARTLINE (58)

    /** scanner.e:1058			return num*/
    // SubProg MakeInt pc: 220 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26571
    DeRefDS(_text_26571);

// block var nBase_26572

// block var fnum_26574
    DeRef(_fnum_26574);

// block var digit_26575

// block var maxchk_26576
    DeRef(_14847);
    _14847 = NOVALUE;
    _14843 = NOVALUE;
    return _num_26573;
    // SubProg MakeInt pc: 224 op: ELSE (23)
    goto LB; // [224] 234
    // SubProg MakeInt pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 26569 op: 159
    // SubProg MakeInt pc: 227 op: STARTLINE (58)

    /** scanner.e:1060			return fnum*/
    // SubProg MakeInt pc: 229 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26571
    DeRefDS(_text_26571);

// block var nBase_26572

// block var num_26573

// block var digit_26575

// block var maxchk_26576
    DeRef(_14847);
    _14847 = NOVALUE;
    _14843 = NOVALUE;
    return _fnum_26574;
    // SubProg MakeInt pc: 233 op: NOP1 (159)
LB: // addr: 234 pc: 233 sub: 26569 op: 159
    // SubProg MakeInt pc: 234 op: BADRETURNF (43)
    ;
}


object _61GetHexChar(object _cnt_26615, object _errno_26616)
{
    object _val_26617 = NOVALUE;
    object _d_26618 = NOVALUE;
// skipping _14872  name type: 0
// skipping _14871  name type: 0
// skipping _14870  name type: 0
// skipping _14869  name type: 0
    object _14868 = NOVALUE; // 26630 14868
    object _14867 = NOVALUE; // 26629 14867
// skipping _14866  name type: 0
// skipping _14865  name type: 0
// skipping _14864  name type: 0
    object _14862 = NOVALUE; // 26621 14862
// skipping _14861  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 3 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 5 op: STARTLINE (58)

    /** scanner.e:1067		val = 0*/
    // SubProg GetHexChar pc: 7 op: ASSIGN (18)
    DeRef(_val_26617);
    _val_26617 = 0;
    // SubProg GetHexChar pc: 10 op: STARTLINE (58)

    /** scanner.e:1069		while cnt > 0 do*/
    // SubProg GetHexChar pc: 12 op: NOP2 (110)
    // SubProg GetHexChar pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 26613 op: 158
    // SubProg GetHexChar pc: 15 op: GREATER_IFW_I (124)
    if (_cnt_26615 <= 0)
    goto L2; // [15] 88
    // SubProg GetHexChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1070			d = find(getch(), "0123456789ABCDEFabcdef_")*/
    // SubProg GetHexChar pc: 21 op: PROC (27)
    _14862 = _61getch();
    // SubProg GetHexChar pc: 24 op: FIND_FROM (176)
    _d_26618 = find_from(_14862, _14863, 1);
    DeRef(_14862);
    _14862 = NOVALUE;
    // SubProg GetHexChar pc: 29 op: STARTLINE (58)

    /** scanner.e:1071			if d = 0 then*/
    // SubProg GetHexChar pc: 31 op: EQUALS_IFW_I (121)
    if (_d_26618 != 0)
    goto L3; // [31] 43
    // SubProg GetHexChar pc: 35 op: STARTLINE (58)

    /** scanner.e:1072				CompileErr( errno )*/
    // SubProg GetHexChar pc: 37 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(_errno_26616, _21958, 0);
    // SubProg GetHexChar pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 26613 op: 159
    // SubProg GetHexChar pc: 43 op: STARTLINE (58)

    /** scanner.e:1074			if d != 23 then*/
    // SubProg GetHexChar pc: 45 op: NOTEQ_IFW_I (122)
    if (_d_26618 == 23)
    goto L1; // [45] 15
    // SubProg GetHexChar pc: 49 op: STARTLINE (58)

    /** scanner.e:1075				val = val * 16 + d - 1*/
    // SubProg GetHexChar pc: 51 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26617)) {
        if (_val_26617 == (short)_val_26617){
            _14867 = _val_26617 * 16;
        }
        else{
            _14867 = NewDouble(_val_26617 * (eudouble)16);
        }
    }
    else {
        _14867 = NewDouble(DBL_PTR(_val_26617)->dbl * (eudouble)16);
    }
    // SubProg GetHexChar pc: 55 op: PLUS (11)
    if (IS_ATOM_INT(_14867)) {
        _14868 = _14867 + _d_26618;
        if ((object)((uintptr_t)_14868 + (uintptr_t)HIGH_BITS) >= 0){
            _14868 = NewDouble((eudouble)_14868);
        }
    }
    else {
        _14868 = NewDouble(DBL_PTR(_14867)->dbl + (eudouble)_d_26618);
    }
    DeRef(_14867);
    _14867 = NOVALUE;
    // SubProg GetHexChar pc: 59 op: MINUS (10)
    DeRef(_val_26617);
    if (IS_ATOM_INT(_14868)) {
        _val_26617 = _14868 - 1;
        if ((object)((uintptr_t)_val_26617 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26617 = NewDouble((eudouble)_val_26617);
        }
    }
    else {
        _val_26617 = NewDouble(DBL_PTR(_14868)->dbl - (eudouble)1);
    }
    DeRef(_14868);
    _14868 = NOVALUE;
    // SubProg GetHexChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1076				if d > 16 then*/
    // SubProg GetHexChar pc: 65 op: GREATER_IFW_I (124)
    if (_d_26618 <= 16)
    goto L4; // [65] 76
    // SubProg GetHexChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1077					val -= 6*/
    // SubProg GetHexChar pc: 71 op: MINUS (10)
    _0 = _val_26617;
    if (IS_ATOM_INT(_val_26617)) {
        _val_26617 = _val_26617 - 6;
        if ((object)((uintptr_t)_val_26617 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26617 = NewDouble((eudouble)_val_26617);
        }
    }
    else {
        _val_26617 = NewDouble(DBL_PTR(_val_26617)->dbl - (eudouble)6);
    }
    DeRef(_0);
    // SubProg GetHexChar pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 26613 op: 159
    // SubProg GetHexChar pc: 76 op: STARTLINE (58)

    /** scanner.e:1079				cnt -= 1*/
    // SubProg GetHexChar pc: 78 op: MINUS_I (116)
    _cnt_26615 = _cnt_26615 - 1;
    // SubProg GetHexChar pc: 82 op: NOP1 (159)
    // SubProg GetHexChar pc: 83 op: STARTLINE (58)

    /** scanner.e:1081		end while*/
    // SubProg GetHexChar pc: 85 op: ENDWHILE (22)
    goto L1; // [85] 15
    // SubProg GetHexChar pc: 87 op: NOP1 (159)
L2: // addr: 88 pc: 87 sub: 26613 op: 159
    // SubProg GetHexChar pc: 88 op: STARTLINE (58)

    /** scanner.e:1083		return val*/
    // SubProg GetHexChar pc: 90 op: RETURNF (28)

// Exiting block BLOCK: GetHexChar

// block var cnt_26615

// block var errno_26616

// block var d_26618
    return _val_26617;
    // SubProg GetHexChar pc: 94 op: BADRETURNF (43)
    ;
}


object _61GetBinaryChar(object _delim_26638)
{
    object _val_26639 = NOVALUE;
    object _d_26640 = NOVALUE;
    object _vchars_26641 = NOVALUE;
    object _cnt_26644 = NOVALUE;
// skipping _14885  name type: 0
// skipping _14884  name type: 0
// skipping _14883  name type: 0
    object _14882 = NOVALUE; // 26658 14882
    object _14881 = NOVALUE; // 26657 14881
// skipping _14880  name type: 0
// skipping _14879  name type: 0
// skipping _14878  name type: 0
// skipping _14877  name type: 0
// skipping _14876  name type: 0
    object _14875 = NOVALUE; // 26646 14875
// skipping _14874  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBinaryChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetBinaryChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1089		sequence vchars = "01_ " & delim*/
    // SubProg GetBinaryChar pc: 5 op: CONCAT (15)
    Append(&_vchars_26641, _14873, _delim_26638);
    // SubProg GetBinaryChar pc: 9 op: STARTLINE (58)

    /** scanner.e:1090		integer cnt = 0*/
    // SubProg GetBinaryChar pc: 11 op: ASSIGN_I (113)
    _cnt_26644 = 0;
    // SubProg GetBinaryChar pc: 14 op: STARTLINE (58)

    /** scanner.e:1091		val = 0*/
    // SubProg GetBinaryChar pc: 16 op: ASSIGN (18)
    DeRef(_val_26639);
    _val_26639 = 0;
    // SubProg GetBinaryChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1092		while 1 do*/
    // SubProg GetBinaryChar pc: 21 op: NOP2 (110)
    // SubProg GetBinaryChar pc: 23 op: NOPWHILE (158)
L1: // addr: 24 pc: 23 sub: 26636 op: 158
    // SubProg GetBinaryChar pc: 24 op: STARTLINE (58)

    /** scanner.e:1093			d = find(getch(), vchars)*/
    // SubProg GetBinaryChar pc: 26 op: PROC (27)
    _14875 = _61getch();
    // SubProg GetBinaryChar pc: 29 op: FIND_FROM (176)
    _d_26640 = find_from(_14875, _vchars_26641, 1);
    DeRef(_14875);
    _14875 = NOVALUE;
    // SubProg GetBinaryChar pc: 34 op: STARTLINE (58)

    /** scanner.e:1094			if d = 0 then*/
    // SubProg GetBinaryChar pc: 36 op: EQUALS_IFW_I (121)
    if (_d_26640 != 0)
    goto L2; // [36] 48
    // SubProg GetBinaryChar pc: 40 op: STARTLINE (58)

    /** scanner.e:1095				CompileErr( 343 )*/
    // SubProg GetBinaryChar pc: 42 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(343, _21958, 0);
    // SubProg GetBinaryChar pc: 47 op: NOP1 (159)
L2: // addr: 48 pc: 47 sub: 26636 op: 159
    // SubProg GetBinaryChar pc: 48 op: STARTLINE (58)

    /** scanner.e:1097			if d = 5 then*/
    // SubProg GetBinaryChar pc: 50 op: EQUALS_IFW_I (121)
    if (_d_26640 != 5)
    goto L3; // [50] 63
    // SubProg GetBinaryChar pc: 54 op: STARTLINE (58)

    /** scanner.e:1098				ungetch()*/
    // SubProg GetBinaryChar pc: 56 op: PROC (27)
    _61ungetch();
    // SubProg GetBinaryChar pc: 58 op: STARTLINE (58)

    /** scanner.e:1099				exit*/
    // SubProg GetBinaryChar pc: 60 op: EXIT (61)
    goto L4; // [60] 106
    // SubProg GetBinaryChar pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 26636 op: 159
    // SubProg GetBinaryChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1101			if d = 4 then*/
    // SubProg GetBinaryChar pc: 65 op: EQUALS_IFW_I (121)
    if (_d_26640 != 4)
    goto L5; // [65] 74
    // SubProg GetBinaryChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1102				exit*/
    // SubProg GetBinaryChar pc: 71 op: EXIT (61)
    goto L4; // [71] 106
    // SubProg GetBinaryChar pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 26636 op: 159
    // SubProg GetBinaryChar pc: 74 op: STARTLINE (58)

    /** scanner.e:1104			if d != 3 then*/
    // SubProg GetBinaryChar pc: 76 op: NOTEQ_IFW_I (122)
    if (_d_26640 == 3)
    goto L1; // [76] 24
    // SubProg GetBinaryChar pc: 80 op: STARTLINE (58)

    /** scanner.e:1105				val = val * 2 + d - 1*/
    // SubProg GetBinaryChar pc: 82 op: PLUS (11)
    if (IS_ATOM_INT(_val_26639) && IS_ATOM_INT(_val_26639)) {
        _14881 = _val_26639 + _val_26639;
        if ((object)((uintptr_t)_14881 + (uintptr_t)HIGH_BITS) >= 0){
            _14881 = NewDouble((eudouble)_14881);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26639)) {
            _14881 = NewDouble((eudouble)_val_26639 + DBL_PTR(_val_26639)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26639)) {
                _14881 = NewDouble(DBL_PTR(_val_26639)->dbl + (eudouble)_val_26639);
            }
            else
            _14881 = NewDouble(DBL_PTR(_val_26639)->dbl + DBL_PTR(_val_26639)->dbl);
        }
    }
    // SubProg GetBinaryChar pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_14881)) {
        _14882 = _14881 + _d_26640;
        if ((object)((uintptr_t)_14882 + (uintptr_t)HIGH_BITS) >= 0){
            _14882 = NewDouble((eudouble)_14882);
        }
    }
    else {
        _14882 = NewDouble(DBL_PTR(_14881)->dbl + (eudouble)_d_26640);
    }
    DeRef(_14881);
    _14881 = NOVALUE;
    // SubProg GetBinaryChar pc: 90 op: MINUS (10)
    DeRef(_val_26639);
    if (IS_ATOM_INT(_14882)) {
        _val_26639 = _14882 - 1;
        if ((object)((uintptr_t)_val_26639 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26639 = NewDouble((eudouble)_val_26639);
        }
    }
    else {
        _val_26639 = NewDouble(DBL_PTR(_14882)->dbl - (eudouble)1);
    }
    DeRef(_14882);
    _14882 = NOVALUE;
    // SubProg GetBinaryChar pc: 94 op: STARTLINE (58)

    /** scanner.e:1106				cnt += 1*/
    // SubProg GetBinaryChar pc: 96 op: PLUS1_I (117)
    _cnt_26644 = _cnt_26644 + 1;
    // SubProg GetBinaryChar pc: 100 op: NOP1 (159)
    // SubProg GetBinaryChar pc: 101 op: STARTLINE (58)

    /** scanner.e:1108		end while*/
    // SubProg GetBinaryChar pc: 103 op: ENDWHILE (22)
    goto L1; // [103] 24
    // SubProg GetBinaryChar pc: 105 op: NOP1 (159)
L4: // addr: 106 pc: 105 sub: 26636 op: 159
    // SubProg GetBinaryChar pc: 106 op: STARTLINE (58)

    /** scanner.e:1110		if cnt = 0 then*/
    // SubProg GetBinaryChar pc: 108 op: EQUALS_IFW_I (121)
    if (_cnt_26644 != 0)
    goto L6; // [108] 120
    // SubProg GetBinaryChar pc: 112 op: STARTLINE (58)

    /** scanner.e:1111			CompileErr(343)*/
    // SubProg GetBinaryChar pc: 114 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(343, _21958, 0);
    // SubProg GetBinaryChar pc: 119 op: NOP1 (159)
L6: // addr: 120 pc: 119 sub: 26636 op: 159
    // SubProg GetBinaryChar pc: 120 op: STARTLINE (58)

    /** scanner.e:1113		return val*/
    // SubProg GetBinaryChar pc: 122 op: RETURNF (28)

// Exiting block BLOCK: GetBinaryChar

// block var delim_26638

// block var d_26640

// block var vchars_26641
    DeRefi(_vchars_26641);

// block var cnt_26644
    return _val_26639;
    // SubProg GetBinaryChar pc: 126 op: BADRETURNF (43)
    ;
}


object _61EscapeChar(object _delim_26666)
{
    object _c_26667 = NOVALUE;
// skipping _14892  name type: 0
// skipping _14891  name type: 0
// skipping _14890  name type: 0
// skipping _14889  name type: 0
// skipping _14886  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg EscapeChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg EscapeChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1121		c = getch()*/
    // SubProg EscapeChar pc: 5 op: PROC (27)
    _0 = _c_26667;
    _c_26667 = _61getch();
    DeRef(_0);
    // SubProg EscapeChar pc: 8 op: STARTLINE (58)

    /** scanner.e:1122		switch c do*/
    // SubProg EscapeChar pc: 10 op: SWITCH_I (193)
    if (IS_SEQUENCE(_c_26667) ){
        goto L1; // [10] 135
    }
    if(!IS_ATOM_INT(_c_26667)){
        if( (DBL_PTR(_c_26667)->dbl != (eudouble) ((object) DBL_PTR(_c_26667)->dbl) ) ){
            goto L1; // [10] 135
        }
        _0 = (object) DBL_PTR(_c_26667)->dbl;
    }
    else {
        _0 = _c_26667;
    };
    switch ( _0 ){ 
        // SubProg EscapeChar pc: 15 op: STARTLINE (58)

        /** scanner.e:1123			case 'n' then*/
        // SubProg EscapeChar pc: 17 op: CASE (186)
        case 110:
        // SubProg EscapeChar pc: 19 op: STARTLINE (58)

        /** scanner.e:1124				c = 10 -- Newline*/
        // SubProg EscapeChar pc: 21 op: ASSIGN (18)
        DeRef(_c_26667);
        _c_26667 = 10;
        // SubProg EscapeChar pc: 24 op: ELSE (23)
        goto L2; // [24] 145
        // SubProg EscapeChar pc: 26 op: STARTLINE (58)

        /** scanner.e:1126			case 't' then*/
        // SubProg EscapeChar pc: 28 op: CASE (186)
        case 116:
        // SubProg EscapeChar pc: 30 op: STARTLINE (58)

        /** scanner.e:1127				c = 9 -- Tabulator*/
        // SubProg EscapeChar pc: 32 op: ASSIGN (18)
        DeRef(_c_26667);
        _c_26667 = 9;
        // SubProg EscapeChar pc: 35 op: ELSE (23)
        goto L2; // [35] 145
        // SubProg EscapeChar pc: 37 op: STARTLINE (58)

        /** scanner.e:1129			case '"', '\\', '\'' then*/
        // SubProg EscapeChar pc: 39 op: CASE (186)
        case 34:
        // SubProg EscapeChar pc: 41 op: CASE (186)
        case 92:
        // SubProg EscapeChar pc: 43 op: CASE (186)
        case 39:
        // SubProg EscapeChar pc: 45 op: STARTLINE (58)

        /** scanner.e:1134			case 'r' then*/
        // SubProg EscapeChar pc: 47 op: ELSE (23)
        goto L2; // [47] 145
        // SubProg EscapeChar pc: 49 op: CASE (186)
        case 114:
        // SubProg EscapeChar pc: 51 op: STARTLINE (58)

        /** scanner.e:1135				c = 13 -- Carriage Return*/
        // SubProg EscapeChar pc: 53 op: ASSIGN (18)
        DeRef(_c_26667);
        _c_26667 = 13;
        // SubProg EscapeChar pc: 56 op: ELSE (23)
        goto L2; // [56] 145
        // SubProg EscapeChar pc: 58 op: STARTLINE (58)

        /** scanner.e:1137			case '0' then*/
        // SubProg EscapeChar pc: 60 op: CASE (186)
        case 48:
        // SubProg EscapeChar pc: 62 op: STARTLINE (58)

        /** scanner.e:1138				c = 0 -- Null*/
        // SubProg EscapeChar pc: 64 op: ASSIGN (18)
        DeRef(_c_26667);
        _c_26667 = 0;
        // SubProg EscapeChar pc: 67 op: ELSE (23)
        goto L2; // [67] 145
        // SubProg EscapeChar pc: 69 op: STARTLINE (58)

        /** scanner.e:1140			case 'e', 'E' then*/
        // SubProg EscapeChar pc: 71 op: CASE (186)
        case 101:
        // SubProg EscapeChar pc: 73 op: CASE (186)
        case 69:
        // SubProg EscapeChar pc: 75 op: STARTLINE (58)

        /** scanner.e:1141				c = 27 -- escape char.*/
        // SubProg EscapeChar pc: 77 op: ASSIGN (18)
        DeRef(_c_26667);
        _c_26667 = 27;
        // SubProg EscapeChar pc: 80 op: ELSE (23)
        goto L2; // [80] 145
        // SubProg EscapeChar pc: 82 op: STARTLINE (58)

        /** scanner.e:1143			case 'x' then*/
        // SubProg EscapeChar pc: 84 op: CASE (186)
        case 120:
        // SubProg EscapeChar pc: 86 op: STARTLINE (58)

        /** scanner.e:1145				c = GetHexChar(2, 340)*/
        // SubProg EscapeChar pc: 88 op: PROC (27)
        _0 = _c_26667;
        _c_26667 = _61GetHexChar(2, 340);
        DeRef(_0);
        // SubProg EscapeChar pc: 93 op: ELSE (23)
        goto L2; // [93] 145
        // SubProg EscapeChar pc: 95 op: STARTLINE (58)

        /** scanner.e:1147			case 'u' then*/
        // SubProg EscapeChar pc: 97 op: CASE (186)
        case 117:
        // SubProg EscapeChar pc: 99 op: STARTLINE (58)

        /** scanner.e:1149				c = GetHexChar(4, 341)*/
        // SubProg EscapeChar pc: 101 op: PROC (27)
        _0 = _c_26667;
        _c_26667 = _61GetHexChar(4, 341);
        DeRef(_0);
        // SubProg EscapeChar pc: 106 op: ELSE (23)
        goto L2; // [106] 145
        // SubProg EscapeChar pc: 108 op: STARTLINE (58)

        /** scanner.e:1151			case 'U' then*/
        // SubProg EscapeChar pc: 110 op: CASE (186)
        case 85:
        // SubProg EscapeChar pc: 112 op: STARTLINE (58)

        /** scanner.e:1153				c = GetHexChar(8, 342)*/
        // SubProg EscapeChar pc: 114 op: PROC (27)
        _0 = _c_26667;
        _c_26667 = _61GetHexChar(8, 342);
        DeRef(_0);
        // SubProg EscapeChar pc: 119 op: ELSE (23)
        goto L2; // [119] 145
        // SubProg EscapeChar pc: 121 op: STARTLINE (58)

        /** scanner.e:1155			case 'b' then*/
        // SubProg EscapeChar pc: 123 op: CASE (186)
        case 98:
        // SubProg EscapeChar pc: 125 op: STARTLINE (58)

        /** scanner.e:1157				c = GetBinaryChar(delim)*/
        // SubProg EscapeChar pc: 127 op: PROC (27)
        _0 = _c_26667;
        _c_26667 = _61GetBinaryChar(_delim_26666);
        DeRef(_0);
        // SubProg EscapeChar pc: 131 op: ELSE (23)
        goto L2; // [131] 145
        // SubProg EscapeChar pc: 133 op: STARTLINE (58)

        /** scanner.e:1159			case else*/
        // SubProg EscapeChar pc: 135 op: CASE (186)
        default:
L1: // addr: 135 pc: 135 sub: 26664 op: 186
        // SubProg EscapeChar pc: 137 op: STARTLINE (58)

        /** scanner.e:1160				CompileErr(155)*/
        // SubProg EscapeChar pc: 139 op: PROC (27)
        RefDS(_21958);
        _49CompileErr(155, _21958, 0);
        // SubProg EscapeChar pc: 144 op: NOPSWITCH (187)
    ;}L2: // addr: 145 pc: 144 sub: 26664 op: 187
    // SubProg EscapeChar pc: 145 op: STARTLINE (58)

    /** scanner.e:1163		return c*/
    // SubProg EscapeChar pc: 147 op: RETURNF (28)

// Exiting block BLOCK: EscapeChar

// block var delim_26666
    return _c_26667;
    // SubProg EscapeChar pc: 151 op: BADRETURNF (43)
    ;
}


object _61my_sscanf(object _yytext_26689)
{
    object _e_sign_26690 = NOVALUE;
    object _ndigits_26691 = NOVALUE;
    object _e_mag_26692 = NOVALUE;
    object _mantissa_26693 = NOVALUE;
    object _c_26694 = NOVALUE;
    object _i_26695 = NOVALUE;
    object _dec_26696 = NOVALUE;
    object _frac_26728 = NOVALUE;
// skipping _14929  name type: 0
// skipping _14928  name type: 0
    object _14927 = NOVALUE; // 26740 14927
// skipping _14926  name type: 0
// skipping _14925  name type: 0
// skipping _14924  name type: 0
// skipping _14923  name type: 0
    object _14922 = NOVALUE; // 26735 14922
    object _14921 = NOVALUE; // 26734 14921
// skipping _14920  name type: 0
    object _14919 = NOVALUE; // 26732 14919
    object _14918 = NOVALUE; // 26731 14918
    object _14917 = NOVALUE; // 26730 14917
// skipping _14915  name type: 0
// skipping _14914  name type: 0
// skipping _14913  name type: 0
// skipping _14912  name type: 0
// skipping _14911  name type: 0
// skipping _14910  name type: 0
    object _14909 = NOVALUE; // 26719 14909
    object _14908 = NOVALUE; // 26718 14908
// skipping _14906  name type: 0
    object _14905 = NOVALUE; // 26715 14905
    object _14904 = NOVALUE; // 26714 14904
    object _14903 = NOVALUE; // 26713 14903
// skipping _14902  name type: 0
// skipping _14901  name type: 0
    object _14898 = NOVALUE; // 26707 14898
    object _14897 = NOVALUE; // 26704 14897
// skipping _14896  name type: 0
    object _14895 = NOVALUE; // 26702 14895
// skipping _14894  name type: 0
    object _14893 = NOVALUE; // 26698 14893
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg my_sscanf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg my_sscanf pc: 3 op: STARTLINE (58)

    /** scanner.e:1176		if length(yytext) < 2 then*/
    // SubProg my_sscanf pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26689)){
            _14893 = SEQ_PTR(_yytext_26689)->length;
    }
    else {
        _14893 = 1;
    }
    // SubProg my_sscanf pc: 8 op: LESS_IFW_I (119)
    if (_14893 >= 2)
    goto L1; // [8] 20
    // SubProg my_sscanf pc: 12 op: STARTLINE (58)

    /** scanner.e:1177			CompileErr(121)*/
    // SubProg my_sscanf pc: 14 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(121, _21958, 0);
    // SubProg my_sscanf pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 26687 op: 159
    // SubProg my_sscanf pc: 20 op: STARTLINE (58)

    /** scanner.e:1181		if find( 'e', yytext ) or find( 'E', yytext ) then*/
    // SubProg my_sscanf pc: 22 op: FIND_FROM (176)
    _14895 = find_from(101, _yytext_26689, 1);
    // SubProg my_sscanf pc: 27 op: SC1_OR_IF (147)
    if (_14895 != 0) {
        goto L2; // [27] 41
    }
    // SubProg my_sscanf pc: 31 op: FIND_FROM (176)
    _14897 = find_from(69, _yytext_26689, 1);
    // SubProg my_sscanf pc: 36 op: NOP1 (159)
    // SubProg my_sscanf pc: 37 op: IF (20)
    if (_14897 == 0)
    {
        _14897 = NOVALUE;
        goto L3; // [37] 57
    }
    else{
        _14897 = NOVALUE;
    }
    // SubProg my_sscanf pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 26687 op: 159
    // SubProg my_sscanf pc: 41 op: STARTLINE (58)

    /** scanner.e:1182			ifdef E32 then*/
    // SubProg my_sscanf pc: 43 op: STARTLINE (58)

    /** scanner.e:1183				return scientific_to_atom( yytext, DOUBLE )*/
    // SubProg my_sscanf pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg my_sscanf pc: 47 op: PROC (27)
    RefDS(_yytext_26689);
    _14898 = _27scientific_to_atom(_yytext_26689, 2);
    // SubProg my_sscanf pc: 52 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26689
    DeRefDS(_yytext_26689);

// block var ndigits_26691

// block var mantissa_26693
    DeRef(_mantissa_26693);

// block var c_26694

// block var i_26695

// block var dec_26696
    DeRef(_dec_26696);
    return _14898;
    // SubProg my_sscanf pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 26687 op: 159
    // SubProg my_sscanf pc: 57 op: STARTLINE (58)

    /** scanner.e:1190		mantissa = 0.0*/
    // SubProg my_sscanf pc: 59 op: ASSIGN (18)
    RefDS(_14900);
    DeRef(_mantissa_26693);
    _mantissa_26693 = _14900;
    // SubProg my_sscanf pc: 62 op: STARTLINE (58)

    /** scanner.e:1191		ndigits = 0*/
    // SubProg my_sscanf pc: 64 op: ASSIGN_I (113)
    _ndigits_26691 = 0;
    // SubProg my_sscanf pc: 67 op: STARTLINE (58)

    /** scanner.e:1195		yytext &= 0 -- end marker*/
    // SubProg my_sscanf pc: 69 op: CONCAT (15)
    Append(&_yytext_26689, _yytext_26689, 0);
    // SubProg my_sscanf pc: 73 op: STARTLINE (58)

    /** scanner.e:1196		c = yytext[1]*/
    // SubProg my_sscanf pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26689);
    _c_26694 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_c_26694))
    _c_26694 = (object)DBL_PTR(_c_26694)->dbl;
    // SubProg my_sscanf pc: 79 op: STARTLINE (58)

    /** scanner.e:1197		i = 2*/
    // SubProg my_sscanf pc: 81 op: ASSIGN_I (113)
    _i_26695 = 2;
    // SubProg my_sscanf pc: 84 op: STARTLINE (58)

    /** scanner.e:1198		while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 86 op: NOP2 (110)
    // SubProg my_sscanf pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 26687 op: 158
    // SubProg my_sscanf pc: 89 op: GREATEREQ (2)
    _14903 = (_c_26694 >= 48);
    // SubProg my_sscanf pc: 93 op: SC1_AND_IF (146)
    if (_14903 == 0) {
        goto L5; // [93] 142
    }
    // SubProg my_sscanf pc: 97 op: LESSEQ (5)
    _14905 = (_c_26694 <= 57);
    // SubProg my_sscanf pc: 101 op: NOP1 (159)
    // SubProg my_sscanf pc: 102 op: WHILE (47)
    if (_14905 == 0)
    {
        DeRef(_14905);
        _14905 = NOVALUE;
        goto L5; // [102] 142
    }
    else{
        DeRef(_14905);
        _14905 = NOVALUE;
    }
    // SubProg my_sscanf pc: 105 op: STARTLINE (58)

    /** scanner.e:1199			ndigits += 1*/
    // SubProg my_sscanf pc: 107 op: PLUS1_I (117)
    _ndigits_26691 = _ndigits_26691 + 1;
    // SubProg my_sscanf pc: 111 op: STARTLINE (58)

    /** scanner.e:1200			mantissa = mantissa * 10.0 + (c - '0')*/
    // SubProg my_sscanf pc: 113 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_26693)) {
        _14908 = NewDouble((eudouble)_mantissa_26693 * DBL_PTR(_14907)->dbl);
    }
    else {
        _14908 = NewDouble(DBL_PTR(_mantissa_26693)->dbl * DBL_PTR(_14907)->dbl);
    }
    // SubProg my_sscanf pc: 117 op: MINUS (10)
    _14909 = _c_26694 - 48;
    if ((object)((uintptr_t)_14909 +(uintptr_t) HIGH_BITS) >= 0){
        _14909 = NewDouble((eudouble)_14909);
    }
    // SubProg my_sscanf pc: 121 op: PLUS (11)
    DeRef(_mantissa_26693);
    if (IS_ATOM_INT(_14909)) {
        _mantissa_26693 = NewDouble(DBL_PTR(_14908)->dbl + (eudouble)_14909);
    }
    else
    _mantissa_26693 = NewDouble(DBL_PTR(_14908)->dbl + DBL_PTR(_14909)->dbl);
    DeRefDS(_14908);
    _14908 = NOVALUE;
    DeRef(_14909);
    _14909 = NOVALUE;
    // SubProg my_sscanf pc: 125 op: STARTLINE (58)

    /** scanner.e:1201			c = yytext[i]*/
    // SubProg my_sscanf pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26689);
    _c_26694 = (object)*(((s1_ptr)_2)->base + _i_26695);
    if (!IS_ATOM_INT(_c_26694))
    _c_26694 = (object)DBL_PTR(_c_26694)->dbl;
    // SubProg my_sscanf pc: 131 op: STARTLINE (58)

    /** scanner.e:1202			i += 1*/
    // SubProg my_sscanf pc: 133 op: PLUS1_I (117)
    _i_26695 = _i_26695 + 1;
    // SubProg my_sscanf pc: 137 op: STARTLINE (58)

    /** scanner.e:1203		end while*/
    // SubProg my_sscanf pc: 139 op: ENDWHILE (22)
    goto L4; // [139] 89
    // SubProg my_sscanf pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 26687 op: 159
    // SubProg my_sscanf pc: 142 op: STARTLINE (58)

    /** scanner.e:1205		if c = '.' then*/
    // SubProg my_sscanf pc: 144 op: EQUALS_IFW_I (121)
    if (_c_26694 != 46)
    goto L6; // [144] 245
    // SubProg my_sscanf pc: 148 op: STARTLINE (58)

    /** scanner.e:1207			c = yytext[i]*/
    // SubProg my_sscanf pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26689);
    _c_26694 = (object)*(((s1_ptr)_2)->base + _i_26695);
    if (!IS_ATOM_INT(_c_26694))
    _c_26694 = (object)DBL_PTR(_c_26694)->dbl;
    // SubProg my_sscanf pc: 154 op: STARTLINE (58)

    /** scanner.e:1208			i += 1*/
    // SubProg my_sscanf pc: 156 op: PLUS1_I (117)
    _i_26695 = _i_26695 + 1;
    // SubProg my_sscanf pc: 160 op: STARTLINE (58)

    /** scanner.e:1209			dec = 1.0*/
    // SubProg my_sscanf pc: 162 op: ASSIGN (18)
    RefDS(_14916);
    DeRef(_dec_26696);
    _dec_26696 = _14916;
    // SubProg my_sscanf pc: 165 op: STARTLINE (58)

    /** scanner.e:1210			atom frac = 0*/
    // SubProg my_sscanf pc: 167 op: ASSIGN (18)
    DeRef(_frac_26728);
    _frac_26728 = 0;
    // SubProg my_sscanf pc: 170 op: STARTLINE (58)

    /** scanner.e:1211			while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 172 op: NOP2 (110)
    // SubProg my_sscanf pc: 174 op: NOPWHILE (158)
L7: // addr: 175 pc: 174 sub: 26687 op: 158
    // SubProg my_sscanf pc: 175 op: GREATEREQ (2)
    _14917 = (_c_26694 >= 48);
    // SubProg my_sscanf pc: 179 op: SC1_AND_IF (146)
    if (_14917 == 0) {
        goto L8; // [179] 234
    }
    // SubProg my_sscanf pc: 183 op: LESSEQ (5)
    _14919 = (_c_26694 <= 57);
    // SubProg my_sscanf pc: 187 op: NOP1 (159)
    // SubProg my_sscanf pc: 188 op: WHILE (47)
    if (_14919 == 0)
    {
        DeRef(_14919);
        _14919 = NOVALUE;
        goto L8; // [188] 234
    }
    else{
        DeRef(_14919);
        _14919 = NOVALUE;
    }
    // SubProg my_sscanf pc: 191 op: STARTLINE (58)

    /** scanner.e:1212				ndigits += 1*/
    // SubProg my_sscanf pc: 193 op: PLUS1_I (117)
    _ndigits_26691 = _ndigits_26691 + 1;
    // SubProg my_sscanf pc: 197 op: STARTLINE (58)

    /** scanner.e:1213				frac = frac * 10 + (c - '0')*/
    // SubProg my_sscanf pc: 199 op: MULTIPLY (13)
    if (IS_ATOM_INT(_frac_26728)) {
        if (_frac_26728 == (short)_frac_26728){
            _14921 = _frac_26728 * 10;
        }
        else{
            _14921 = NewDouble(_frac_26728 * (eudouble)10);
        }
    }
    else {
        _14921 = NewDouble(DBL_PTR(_frac_26728)->dbl * (eudouble)10);
    }
    // SubProg my_sscanf pc: 203 op: MINUS (10)
    _14922 = _c_26694 - 48;
    if ((object)((uintptr_t)_14922 +(uintptr_t) HIGH_BITS) >= 0){
        _14922 = NewDouble((eudouble)_14922);
    }
    // SubProg my_sscanf pc: 207 op: PLUS (11)
    DeRef(_frac_26728);
    if (IS_ATOM_INT(_14921) && IS_ATOM_INT(_14922)) {
        _frac_26728 = _14921 + _14922;
        if ((object)((uintptr_t)_frac_26728 + (uintptr_t)HIGH_BITS) >= 0){
            _frac_26728 = NewDouble((eudouble)_frac_26728);
        }
    }
    else {
        if (IS_ATOM_INT(_14921)) {
            _frac_26728 = NewDouble((eudouble)_14921 + DBL_PTR(_14922)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14922)) {
                _frac_26728 = NewDouble(DBL_PTR(_14921)->dbl + (eudouble)_14922);
            }
            else
            _frac_26728 = NewDouble(DBL_PTR(_14921)->dbl + DBL_PTR(_14922)->dbl);
        }
    }
    DeRef(_14921);
    _14921 = NOVALUE;
    DeRef(_14922);
    _14922 = NOVALUE;
    // SubProg my_sscanf pc: 211 op: STARTLINE (58)

    /** scanner.e:1214				dec *= 10.0*/
    // SubProg my_sscanf pc: 213 op: MULTIPLY (13)
    _0 = _dec_26696;
    if (IS_ATOM_INT(_dec_26696)) {
        _dec_26696 = NewDouble((eudouble)_dec_26696 * DBL_PTR(_14907)->dbl);
    }
    else {
        _dec_26696 = NewDouble(DBL_PTR(_dec_26696)->dbl * DBL_PTR(_14907)->dbl);
    }
    DeRef(_0);
    // SubProg my_sscanf pc: 217 op: STARTLINE (58)

    /** scanner.e:1215				c = yytext[i]*/
    // SubProg my_sscanf pc: 219 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26689);
    _c_26694 = (object)*(((s1_ptr)_2)->base + _i_26695);
    if (!IS_ATOM_INT(_c_26694))
    _c_26694 = (object)DBL_PTR(_c_26694)->dbl;
    // SubProg my_sscanf pc: 223 op: STARTLINE (58)

    /** scanner.e:1216				i += 1*/
    // SubProg my_sscanf pc: 225 op: PLUS1_I (117)
    _i_26695 = _i_26695 + 1;
    // SubProg my_sscanf pc: 229 op: STARTLINE (58)

    /** scanner.e:1217			end while*/
    // SubProg my_sscanf pc: 231 op: ENDWHILE (22)
    goto L7; // [231] 175
    // SubProg my_sscanf pc: 233 op: NOP1 (159)
L8: // addr: 234 pc: 233 sub: 26687 op: 159
    // SubProg my_sscanf pc: 234 op: STARTLINE (58)

    /** scanner.e:1218			mantissa += frac / dec*/
    // SubProg my_sscanf pc: 236 op: DIVIDE (14)
    if (IS_ATOM_INT(_frac_26728) && IS_ATOM_INT(_dec_26696)) {
        _14927 = (_frac_26728 % _dec_26696) ? NewDouble((eudouble)_frac_26728 / _dec_26696) : (_frac_26728 / _dec_26696);
    }
    else {
        if (IS_ATOM_INT(_frac_26728)) {
            _14927 = NewDouble((eudouble)_frac_26728 / DBL_PTR(_dec_26696)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_26696)) {
                _14927 = NewDouble(DBL_PTR(_frac_26728)->dbl / (eudouble)_dec_26696);
            }
            else
            _14927 = NewDouble(DBL_PTR(_frac_26728)->dbl / DBL_PTR(_dec_26696)->dbl);
        }
    }
    // SubProg my_sscanf pc: 240 op: PLUS (11)
    _0 = _mantissa_26693;
    if (IS_ATOM_INT(_mantissa_26693) && IS_ATOM_INT(_14927)) {
        _mantissa_26693 = _mantissa_26693 + _14927;
        if ((object)((uintptr_t)_mantissa_26693 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_26693 = NewDouble((eudouble)_mantissa_26693);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_26693)) {
            _mantissa_26693 = NewDouble((eudouble)_mantissa_26693 + DBL_PTR(_14927)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14927)) {
                _mantissa_26693 = NewDouble(DBL_PTR(_mantissa_26693)->dbl + (eudouble)_14927);
            }
            else
            _mantissa_26693 = NewDouble(DBL_PTR(_mantissa_26693)->dbl + DBL_PTR(_14927)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_14927);
    _14927 = NOVALUE;
    // SubProg my_sscanf pc: 244 op: NOP1 (159)
L6: // addr: 245 pc: 244 sub: 26687 op: 159
    // SubProg my_sscanf pc: 245 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var frac_26728
    DeRef(_frac_26728);
    _frac_26728 = NOVALUE;
    // SubProg my_sscanf pc: 247 op: STARTLINE (58)

    /** scanner.e:1221		if ndigits = 0 then*/
    // SubProg my_sscanf pc: 249 op: EQUALS_IFW_I (121)
    if (_ndigits_26691 != 0)
    goto L9; // [249] 261
    // SubProg my_sscanf pc: 253 op: STARTLINE (58)

    /** scanner.e:1222			CompileErr(121)  -- no digits*/
    // SubProg my_sscanf pc: 255 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(121, _21958, 0);
    // SubProg my_sscanf pc: 260 op: NOP1 (159)
L9: // addr: 261 pc: 260 sub: 26687 op: 159
    // SubProg my_sscanf pc: 261 op: STARTLINE (58)

    /** scanner.e:1268		return mantissa*/
    // SubProg my_sscanf pc: 263 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26689
    DeRefDS(_yytext_26689);

// block var ndigits_26691

// block var c_26694

// block var i_26695

// block var dec_26696
    DeRef(_dec_26696);
    DeRef(_14917);
    _14917 = NOVALUE;
    DeRef(_14898);
    _14898 = NOVALUE;
    DeRef(_14903);
    _14903 = NOVALUE;
    return _mantissa_26693;
    // SubProg my_sscanf pc: 267 op: BADRETURNF (43)
    ;
}


void _61maybe_namespace()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg maybe_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:1273		might_be_namespace = 1*/
    // SubProg maybe_namespace pc: 3 op: ASSIGN_I (113)
    _61might_be_namespace_26745 = 1;
    // SubProg maybe_namespace pc: 6 op: STARTLINE (58)

    /** scanner.e:1274	end procedure*/
    // SubProg maybe_namespace pc: 8 op: RETURNP (29)

// Exiting block BLOCK: maybe_namespace
    return;
    // SubProg maybe_namespace pc: 11 op: BADRETURNF (43)
    ;
}


object _61ExtendedString(object _ech_26755)
{
    object _ch_26756 = NOVALUE;
    object _fch_26757 = NOVALUE;
    object _cline_26758 = NOVALUE;
    object _string_text_26759 = NOVALUE;
    object _trimming_26760 = NOVALUE;
    object _14980 = NOVALUE; // 26843 14980
    object _14979 = NOVALUE; // 26842 14979
// skipping _14978  name type: 0
    object _14977 = NOVALUE; // 26838 14977
    object _14976 = NOVALUE; // 26837 14976
    object _14975 = NOVALUE; // 26836 14975
    object _14974 = NOVALUE; // 26835 14974
    object _14973 = NOVALUE; // 26834 14973
    object _14972 = NOVALUE; // 26833 14972
    object _14971 = NOVALUE; // 26832 14971
    object _14970 = NOVALUE; // 26831 14970
// skipping _14969  name type: 0
    object _14968 = NOVALUE; // 26828 14968
    object _14967 = NOVALUE; // 26827 14967
    object _14966 = NOVALUE; // 26826 14966
    object _14965 = NOVALUE; // 26825 14965
    object _14964 = NOVALUE; // 26824 14964
    object _14963 = NOVALUE; // 26823 14963
// skipping _14962  name type: 0
// skipping _14961  name type: 0
    object _14960 = NOVALUE; // 26818 14960
    object _14959 = NOVALUE; // 26817 14959
    object _14958 = NOVALUE; // 26816 14958
// skipping _14957  name type: 0
    object _14956 = NOVALUE; // 26811 14956
    object _14955 = NOVALUE; // 26810 14955
    object _14954 = NOVALUE; // 26807 14954
    object _14953 = NOVALUE; // 26806 14953
// skipping _14952  name type: 0
// skipping _14951  name type: 0
    object _14950 = NOVALUE; // 26800 14950
// skipping _14949  name type: 0
// skipping _14948  name type: 0
// skipping _14947  name type: 0
// skipping _14946  name type: 0
// skipping _14945  name type: 0
// skipping _14944  name type: 0
// skipping _14943  name type: 0
// skipping _14942  name type: 0
// skipping _14941  name type: 0
// skipping _14940  name type: 0
// skipping _14939  name type: 0
// skipping _14938  name type: 0
// skipping _14937  name type: 0
// skipping _14936  name type: 0
    object _14935 = NOVALUE; // 26771 14935
// skipping _14934  name type: 0
    object _14933 = NOVALUE; // 26766 14933
// skipping _14932  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ExtendedString pc: 1 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 3 op: STARTLINE (58)

    /** scanner.e:1287		cline = line_number*/
    // SubProg ExtendedString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 7 op: ASSIGN (18)
    _cline_26758 = _5line_number_12478;
    // SubProg ExtendedString pc: 10 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 12 op: STARTLINE (58)

    /** scanner.e:1288		string_text = ""*/
    // SubProg ExtendedString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_string_text_26759);
    _string_text_26759 = _5;
    // SubProg ExtendedString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg ExtendedString pc: 19 op: STARTLINE (58)

    /** scanner.e:1289		trimming = 0*/
    // SubProg ExtendedString pc: 21 op: ASSIGN_I (113)
    _trimming_26760 = 0;
    // SubProg ExtendedString pc: 24 op: STARTLINE (58)

    /** scanner.e:1290		ch = getch()*/
    // SubProg ExtendedString pc: 26 op: PROC (27)
    _ch_26756 = _61getch();
    // SubProg ExtendedString pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26756)) {
        _1 = (object)(DBL_PTR(_ch_26756)->dbl);
        DeRefDS(_ch_26756);
        _ch_26756 = _1;
    }
    // SubProg ExtendedString pc: 31 op: STARTLINE (58)

    /** scanner.e:1291		if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48781)){
            _14933 = SEQ_PTR(_49ThisLine_48781)->length;
    }
    else {
        _14933 = 1;
    }
    // SubProg ExtendedString pc: 40 op: GREATER_IFW (107)
    if (_49bp_48785 <= _14933)
    goto L1; // [40] 101
    // SubProg ExtendedString pc: 44 op: STARTLINE (58)

    /** scanner.e:1293			read_line()*/
    // SubProg ExtendedString pc: 46 op: PROC (27)
    _61read_line();
    // SubProg ExtendedString pc: 48 op: STARTLINE (58)

    /** scanner.e:1294			while ThisLine[bp] = '_' do*/
    // SubProg ExtendedString pc: 50 op: NOP2 (110)
    // SubProg ExtendedString pc: 52 op: NOPWHILE (158)
L2: // addr: 53 pc: 52 sub: 26753 op: 158
    // SubProg ExtendedString pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48781);
    _14935 = (object)*(((s1_ptr)_2)->base + _49bp_48785);
    // SubProg ExtendedString pc: 61 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14935, 95)){
        _14935 = NOVALUE;
        goto L3; // [61] 86
    }
    _14935 = NOVALUE;
    // SubProg ExtendedString pc: 65 op: STARTLINE (58)

    /** scanner.e:1295				trimming += 1*/
    // SubProg ExtendedString pc: 67 op: PLUS1_I (117)
    _trimming_26760 = _trimming_26760 + 1;
    // SubProg ExtendedString pc: 71 op: STARTLINE (58)

    /** scanner.e:1296				bp += 1*/
    // SubProg ExtendedString pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 75 op: PLUS (11)
    _49bp_48785 = _49bp_48785 + 1;
    // SubProg ExtendedString pc: 81 op: STARTLINE (58)

    /** scanner.e:1297			end while*/
    // SubProg ExtendedString pc: 83 op: ENDWHILE (22)
    goto L2; // [83] 53
    // SubProg ExtendedString pc: 85 op: NOP1 (159)
L3: // addr: 86 pc: 85 sub: 26753 op: 159
    // SubProg ExtendedString pc: 86 op: STARTLINE (58)

    /** scanner.e:1298			if trimming > 0 then*/
    // SubProg ExtendedString pc: 88 op: GREATER_IFW_I (124)
    if (_trimming_26760 <= 0)
    goto L4; // [88] 100
    // SubProg ExtendedString pc: 92 op: STARTLINE (58)

    /** scanner.e:1299				ch = getch()*/
    // SubProg ExtendedString pc: 94 op: PROC (27)
    _ch_26756 = _61getch();
    // SubProg ExtendedString pc: 97 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26756)) {
        _1 = (object)(DBL_PTR(_ch_26756)->dbl);
        DeRefDS(_ch_26756);
        _ch_26756 = _1;
    }
    // SubProg ExtendedString pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 26753 op: 159
    // SubProg ExtendedString pc: 100 op: NOP1 (159)
L1: // addr: 101 pc: 100 sub: 26753 op: 159
    // SubProg ExtendedString pc: 101 op: STARTLINE (58)

    /** scanner.e:1303		while 1 do*/
    // SubProg ExtendedString pc: 103 op: NOP2 (110)
    // SubProg ExtendedString pc: 105 op: NOPWHILE (158)
L5: // addr: 106 pc: 105 sub: 26753 op: 158
    // SubProg ExtendedString pc: 106 op: STARTLINE (58)

    /** scanner.e:1304			if ch = END_OF_FILE_CHAR then*/
    // SubProg ExtendedString pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 110 op: EQUALS_IFW (104)
    if (_ch_26756 != 26)
    goto L6; // [110] 122
    // SubProg ExtendedString pc: 114 op: STARTLINE (58)

    /** scanner.e:1305				CompileErr(129, cline)*/
    // SubProg ExtendedString pc: 116 op: PROC (27)
    _49CompileErr(129, _cline_26758, 0);
    // SubProg ExtendedString pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 26753 op: 159
    // SubProg ExtendedString pc: 122 op: STARTLINE (58)

    /** scanner.e:1308			if ch = ech then*/
    // SubProg ExtendedString pc: 124 op: EQUALS_IFW_I (121)
    if (_ch_26756 != _ech_26755)
    goto L7; // [124] 180
    // SubProg ExtendedString pc: 128 op: STARTLINE (58)

    /** scanner.e:1309				if ech != '"' then*/
    // SubProg ExtendedString pc: 130 op: NOTEQ_IFW_I (122)
    if (_ech_26755 == 34)
    goto L8; // [130] 139
    // SubProg ExtendedString pc: 134 op: STARTLINE (58)

    /** scanner.e:1310					exit*/
    // SubProg ExtendedString pc: 136 op: EXIT (61)
    goto L9; // [136] 310
    // SubProg ExtendedString pc: 138 op: NOP1 (159)
L8: // addr: 139 pc: 138 sub: 26753 op: 159
    // SubProg ExtendedString pc: 139 op: STARTLINE (58)

    /** scanner.e:1312				fch = getch()*/
    // SubProg ExtendedString pc: 141 op: PROC (27)
    _fch_26757 = _61getch();
    // SubProg ExtendedString pc: 144 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26757)) {
        _1 = (object)(DBL_PTR(_fch_26757)->dbl);
        DeRefDS(_fch_26757);
        _fch_26757 = _1;
    }
    // SubProg ExtendedString pc: 146 op: STARTLINE (58)

    /** scanner.e:1313				if fch = '"' then*/
    // SubProg ExtendedString pc: 148 op: EQUALS_IFW_I (121)
    if (_fch_26757 != 34)
    goto LA; // [148] 175
    // SubProg ExtendedString pc: 152 op: STARTLINE (58)

    /** scanner.e:1314					fch = getch()*/
    // SubProg ExtendedString pc: 154 op: PROC (27)
    _fch_26757 = _61getch();
    // SubProg ExtendedString pc: 157 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26757)) {
        _1 = (object)(DBL_PTR(_fch_26757)->dbl);
        DeRefDS(_fch_26757);
        _fch_26757 = _1;
    }
    // SubProg ExtendedString pc: 159 op: STARTLINE (58)

    /** scanner.e:1315					if fch = '"' then*/
    // SubProg ExtendedString pc: 161 op: EQUALS_IFW_I (121)
    if (_fch_26757 != 34)
    goto LB; // [161] 170
    // SubProg ExtendedString pc: 165 op: STARTLINE (58)

    /** scanner.e:1316						exit*/
    // SubProg ExtendedString pc: 167 op: EXIT (61)
    goto L9; // [167] 310
    // SubProg ExtendedString pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 26753 op: 159
    // SubProg ExtendedString pc: 170 op: STARTLINE (58)

    /** scanner.e:1318					ungetch()*/
    // SubProg ExtendedString pc: 172 op: PROC (27)
    _61ungetch();
    // SubProg ExtendedString pc: 174 op: NOP1 (159)
LA: // addr: 175 pc: 174 sub: 26753 op: 159
    // SubProg ExtendedString pc: 175 op: STARTLINE (58)

    /** scanner.e:1320				ungetch()*/
    // SubProg ExtendedString pc: 177 op: PROC (27)
    _61ungetch();
    // SubProg ExtendedString pc: 179 op: NOP1 (159)
L7: // addr: 180 pc: 179 sub: 26753 op: 159
    // SubProg ExtendedString pc: 180 op: STARTLINE (58)

    /** scanner.e:1323			if ch != '\r' then*/
    // SubProg ExtendedString pc: 182 op: NOTEQ_IFW_I (122)
    if (_ch_26756 == 13)
    goto LC; // [182] 193
    // SubProg ExtendedString pc: 186 op: STARTLINE (58)

    /** scanner.e:1326				string_text &= ch*/
    // SubProg ExtendedString pc: 188 op: CONCAT (15)
    Append(&_string_text_26759, _string_text_26759, _ch_26756);
    // SubProg ExtendedString pc: 192 op: NOP1 (159)
LC: // addr: 193 pc: 192 sub: 26753 op: 159
    // SubProg ExtendedString pc: 193 op: STARTLINE (58)

    /** scanner.e:1329			if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 199 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48781)){
            _14950 = SEQ_PTR(_49ThisLine_48781)->length;
    }
    else {
        _14950 = 1;
    }
    // SubProg ExtendedString pc: 202 op: GREATER_IFW (107)
    if (_49bp_48785 <= _14950)
    goto LD; // [202] 298
    // SubProg ExtendedString pc: 206 op: STARTLINE (58)

    /** scanner.e:1330				read_line() -- sets bp to 1, btw.*/
    // SubProg ExtendedString pc: 208 op: PROC (27)
    _61read_line();
    // SubProg ExtendedString pc: 210 op: STARTLINE (58)

    /** scanner.e:1331				if trimming > 0 then*/
    // SubProg ExtendedString pc: 212 op: GREATER_IFW_I (124)
    if (_trimming_26760 <= 0)
    goto LE; // [212] 297
    // SubProg ExtendedString pc: 216 op: STARTLINE (58)

    /** scanner.e:1332					while bp <= trimming and bp <= length(ThisLine) do*/
    // SubProg ExtendedString pc: 218 op: NOP2 (110)
    // SubProg ExtendedString pc: 220 op: NOPWHILE (158)
LF: // addr: 221 pc: 220 sub: 26753 op: 158
    // SubProg ExtendedString pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 223 op: LESSEQ (5)
    _14953 = (_49bp_48785 <= _trimming_26760);
    // SubProg ExtendedString pc: 227 op: SC1_AND_IF (146)
    if (_14953 == 0) {
        goto L10; // [227] 296
    }
    // SubProg ExtendedString pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 235 op: LENGTH (42)
    if (IS_SEQUENCE(_49ThisLine_48781)){
            _14955 = SEQ_PTR(_49ThisLine_48781)->length;
    }
    else {
        _14955 = 1;
    }
    // SubProg ExtendedString pc: 238 op: LESSEQ (5)
    _14956 = (_49bp_48785 <= _14955);
    _14955 = NOVALUE;
    // SubProg ExtendedString pc: 242 op: NOP1 (159)
    // SubProg ExtendedString pc: 243 op: WHILE (47)
    if (_14956 == 0)
    {
        DeRef(_14956);
        _14956 = NOVALUE;
        goto L10; // [243] 296
    }
    else{
        DeRef(_14956);
        _14956 = NOVALUE;
    }
    // SubProg ExtendedString pc: 246 op: STARTLINE (58)

    /** scanner.e:1333						ch = ThisLine[bp]*/
    // SubProg ExtendedString pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_49ThisLine_48781);
    _ch_26756 = (object)*(((s1_ptr)_2)->base + _49bp_48785);
    if (!IS_ATOM_INT(_ch_26756)){
        _ch_26756 = (object)DBL_PTR(_ch_26756)->dbl;
    }
    // SubProg ExtendedString pc: 258 op: STARTLINE (58)

    /** scanner.e:1334						if ch != ' ' and ch != '\t' then*/
    // SubProg ExtendedString pc: 260 op: NOTEQ (4)
    _14958 = (_ch_26756 != 32);
    // SubProg ExtendedString pc: 264 op: SC1_AND_IF (146)
    if (_14958 == 0) {
        goto L11; // [264] 281
    }
    // SubProg ExtendedString pc: 268 op: NOTEQ (4)
    _14960 = (_ch_26756 != 9);
    // SubProg ExtendedString pc: 272 op: NOP1 (159)
    // SubProg ExtendedString pc: 273 op: IF (20)
    if (_14960 == 0)
    {
        DeRef(_14960);
        _14960 = NOVALUE;
        goto L11; // [273] 281
    }
    else{
        DeRef(_14960);
        _14960 = NOVALUE;
    }
    // SubProg ExtendedString pc: 276 op: STARTLINE (58)

    /** scanner.e:1335							exit*/
    // SubProg ExtendedString pc: 278 op: EXIT (61)
    goto L10; // [278] 296
    // SubProg ExtendedString pc: 280 op: NOP1 (159)
L11: // addr: 281 pc: 280 sub: 26753 op: 159
    // SubProg ExtendedString pc: 281 op: STARTLINE (58)

    /** scanner.e:1337						bp += 1*/
    // SubProg ExtendedString pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 285 op: PLUS (11)
    _49bp_48785 = _49bp_48785 + 1;
    // SubProg ExtendedString pc: 291 op: STARTLINE (58)

    /** scanner.e:1338					end while*/
    // SubProg ExtendedString pc: 293 op: ENDWHILE (22)
    goto LF; // [293] 221
    // SubProg ExtendedString pc: 295 op: NOP1 (159)
L10: // addr: 296 pc: 295 sub: 26753 op: 159
    // SubProg ExtendedString pc: 296 op: NOP1 (159)
LE: // addr: 297 pc: 296 sub: 26753 op: 159
    // SubProg ExtendedString pc: 297 op: NOP1 (159)
LD: // addr: 298 pc: 297 sub: 26753 op: 159
    // SubProg ExtendedString pc: 298 op: STARTLINE (58)

    /** scanner.e:1341			ch = getch()*/
    // SubProg ExtendedString pc: 300 op: PROC (27)
    _ch_26756 = _61getch();
    // SubProg ExtendedString pc: 303 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26756)) {
        _1 = (object)(DBL_PTR(_ch_26756)->dbl);
        DeRefDS(_ch_26756);
        _ch_26756 = _1;
    }
    // SubProg ExtendedString pc: 305 op: STARTLINE (58)

    /** scanner.e:1342		end while*/
    // SubProg ExtendedString pc: 307 op: ENDWHILE (22)
    goto L5; // [307] 106
    // SubProg ExtendedString pc: 309 op: NOP1 (159)
L9: // addr: 310 pc: 309 sub: 26753 op: 159
    // SubProg ExtendedString pc: 310 op: STARTLINE (58)

    /** scanner.e:1343		if length(string_text) > 0 and string_text[1] = '\n' then*/
    // SubProg ExtendedString pc: 312 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26759)){
            _14963 = SEQ_PTR(_string_text_26759)->length;
    }
    else {
        _14963 = 1;
    }
    // SubProg ExtendedString pc: 315 op: GREATER (6)
    _14964 = (_14963 > 0);
    _14963 = NOVALUE;
    // SubProg ExtendedString pc: 319 op: SC1_AND_IF (146)
    if (_14964 == 0) {
        goto L12; // [319] 389
    }
    // SubProg ExtendedString pc: 323 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26759);
    _14966 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ExtendedString pc: 327 op: EQUALS (3)
    _14967 = (_14966 == 10);
    _14966 = NOVALUE;
    // SubProg ExtendedString pc: 331 op: NOP1 (159)
    // SubProg ExtendedString pc: 332 op: IF (20)
    if (_14967 == 0)
    {
        DeRef(_14967);
        _14967 = NOVALUE;
        goto L12; // [332] 389
    }
    else{
        DeRef(_14967);
        _14967 = NOVALUE;
    }
    // SubProg ExtendedString pc: 335 op: STARTLINE (58)

    /** scanner.e:1344			string_text = string_text[2 .. $]*/
    // SubProg ExtendedString pc: 337 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26759)){
            _14968 = SEQ_PTR(_string_text_26759)->length;
    }
    else {
        _14968 = 1;
    }
    // SubProg ExtendedString pc: 340 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26759;
    RHS_Slice(_string_text_26759, 2, _14968);
    // SubProg ExtendedString pc: 345 op: STARTLINE (58)

    /** scanner.e:1345			if length(string_text) > 0 and string_text[$] = '\n' then*/
    // SubProg ExtendedString pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26759)){
            _14970 = SEQ_PTR(_string_text_26759)->length;
    }
    else {
        _14970 = 1;
    }
    // SubProg ExtendedString pc: 350 op: GREATER (6)
    _14971 = (_14970 > 0);
    _14970 = NOVALUE;
    // SubProg ExtendedString pc: 354 op: SC1_AND_IF (146)
    if (_14971 == 0) {
        goto L13; // [354] 388
    }
    // SubProg ExtendedString pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26759)){
            _14973 = SEQ_PTR(_string_text_26759)->length;
    }
    else {
        _14973 = 1;
    }
    // SubProg ExtendedString pc: 361 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26759);
    _14974 = (object)*(((s1_ptr)_2)->base + _14973);
    // SubProg ExtendedString pc: 365 op: EQUALS (3)
    _14975 = (_14974 == 10);
    _14974 = NOVALUE;
    // SubProg ExtendedString pc: 369 op: NOP1 (159)
    // SubProg ExtendedString pc: 370 op: IF (20)
    if (_14975 == 0)
    {
        DeRef(_14975);
        _14975 = NOVALUE;
        goto L13; // [370] 388
    }
    else{
        DeRef(_14975);
        _14975 = NOVALUE;
    }
    // SubProg ExtendedString pc: 373 op: STARTLINE (58)

    /** scanner.e:1346				string_text = string_text[1 .. $-1]*/
    // SubProg ExtendedString pc: 375 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26759)){
            _14976 = SEQ_PTR(_string_text_26759)->length;
    }
    else {
        _14976 = 1;
    }
    // SubProg ExtendedString pc: 378 op: MINUS (10)
    _14977 = _14976 - 1;
    _14976 = NOVALUE;
    // SubProg ExtendedString pc: 382 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26759;
    RHS_Slice(_string_text_26759, 1, _14977);
    // SubProg ExtendedString pc: 387 op: NOP1 (159)
L13: // addr: 388 pc: 387 sub: 26753 op: 159
    // SubProg ExtendedString pc: 388 op: NOP1 (159)
L12: // addr: 389 pc: 388 sub: 26753 op: 159
    // SubProg ExtendedString pc: 389 op: STARTLINE (58)

    /** scanner.e:1349		return {STRING, NewStringSym(string_text)}*/
    // SubProg ExtendedString pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 393 op: PROC (27)
    RefDS(_string_text_26759);
    _14979 = _53NewStringSym(_string_text_26759);
    // SubProg ExtendedString pc: 397 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _14979;
    _14980 = MAKE_SEQ(_1);
    _14979 = NOVALUE;
    // SubProg ExtendedString pc: 401 op: RETURNF (28)

// Exiting block BLOCK: ExtendedString

// block var ech_26755

// block var ch_26756

// block var fch_26757

// block var cline_26758

// block var string_text_26759
    DeRefDSi(_string_text_26759);

// block var trimming_26760
    DeRef(_14964);
    _14964 = NOVALUE;
    DeRef(_14971);
    _14971 = NOVALUE;
    DeRef(_14958);
    _14958 = NOVALUE;
    DeRef(_14953);
    _14953 = NOVALUE;
    DeRef(_14977);
    _14977 = NOVALUE;
    return _14980;
    // SubProg ExtendedString pc: 405 op: BADRETURNF (43)
    ;
}


object _61GetHexString(object _maxnibbles_26846)
{
    object _ch_26847 = NOVALUE;
    object _digit_26848 = NOVALUE;
    object _val_26849 = NOVALUE;
    object _cline_26850 = NOVALUE;
    object _nibble_26851 = NOVALUE;
    object _string_text_26852 = NOVALUE;
// skipping _15004  name type: 0
// skipping _15003  name type: 0
// skipping _15002  name type: 0
// skipping _15001  name type: 0
// skipping _15000  name type: 0
// skipping _14999  name type: 0
// skipping _14998  name type: 0
// skipping _14997  name type: 0
// skipping _14996  name type: 0
// skipping _14995  name type: 0
    object _14994 = NOVALUE; // 26879 14994
    object _14993 = NOVALUE; // 26878 14993
// skipping _14992  name type: 0
// skipping _14991  name type: 0
// skipping _14990  name type: 0
// skipping _14989  name type: 0
// skipping _14988  name type: 0
// skipping _14987  name type: 0
// skipping _14986  name type: 0
// skipping _14985  name type: 0
// skipping _14983  name type: 0
// skipping _14982  name type: 0
// skipping _14981  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexString pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 3 op: STARTLINE (58)

    /** scanner.e:1360		cline = line_number*/
    // SubProg GetHexString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 7 op: ASSIGN (18)
    _cline_26850 = _5line_number_12478;
    // SubProg GetHexString pc: 10 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 12 op: STARTLINE (58)

    /** scanner.e:1361		string_text = ""*/
    // SubProg GetHexString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26852);
    _string_text_26852 = _5;
    // SubProg GetHexString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg GetHexString pc: 19 op: STARTLINE (58)

    /** scanner.e:1362		nibble = 1*/
    // SubProg GetHexString pc: 21 op: ASSIGN_I (113)
    _nibble_26851 = 1;
    // SubProg GetHexString pc: 24 op: STARTLINE (58)

    /** scanner.e:1363		val = -1*/
    // SubProg GetHexString pc: 26 op: ASSIGN (18)
    DeRef(_val_26849);
    _val_26849 = -1;
    // SubProg GetHexString pc: 29 op: STARTLINE (58)

    /** scanner.e:1364		ch = getch()*/
    // SubProg GetHexString pc: 31 op: PROC (27)
    _ch_26847 = _61getch();
    // SubProg GetHexString pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26847)) {
        _1 = (object)(DBL_PTR(_ch_26847)->dbl);
        DeRefDS(_ch_26847);
        _ch_26847 = _1;
    }
    // SubProg GetHexString pc: 36 op: STARTLINE (58)

    /** scanner.e:1365		while 1 do*/
    // SubProg GetHexString pc: 38 op: NOP2 (110)
    // SubProg GetHexString pc: 40 op: NOPWHILE (158)
L1: // addr: 41 pc: 40 sub: 26844 op: 158
    // SubProg GetHexString pc: 41 op: STARTLINE (58)

    /** scanner.e:1366			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetHexString pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 45 op: EQUALS_IFW (104)
    if (_ch_26847 != 26)
    goto L2; // [45] 57
    // SubProg GetHexString pc: 49 op: STARTLINE (58)

    /** scanner.e:1367				CompileErr(129, cline)*/
    // SubProg GetHexString pc: 51 op: PROC (27)
    _49CompileErr(129, _cline_26850, 0);
    // SubProg GetHexString pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 26844 op: 159
    // SubProg GetHexString pc: 57 op: STARTLINE (58)

    /** scanner.e:1370			if ch = '"' then*/
    // SubProg GetHexString pc: 59 op: EQUALS_IFW_I (121)
    if (_ch_26847 != 34)
    goto L3; // [59] 68
    // SubProg GetHexString pc: 63 op: STARTLINE (58)

    /** scanner.e:1371				exit*/
    // SubProg GetHexString pc: 65 op: EXIT (61)
    goto L4; // [65] 224
    // SubProg GetHexString pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 26844 op: 159
    // SubProg GetHexString pc: 68 op: STARTLINE (58)

    /** scanner.e:1374			digit = find(ch, "0123456789ABCDEFabcdef_ \t\n\r")*/
    // SubProg GetHexString pc: 70 op: FIND_FROM (176)
    _digit_26848 = find_from(_ch_26847, _14984, 1);
    // SubProg GetHexString pc: 75 op: STARTLINE (58)

    /** scanner.e:1375			if digit = 0 then*/
    // SubProg GetHexString pc: 77 op: EQUALS_IFW_I (121)
    if (_digit_26848 != 0)
    goto L5; // [77] 89
    // SubProg GetHexString pc: 81 op: STARTLINE (58)

    /** scanner.e:1376				CompileErr(329)*/
    // SubProg GetHexString pc: 83 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(329, _21958, 0);
    // SubProg GetHexString pc: 88 op: NOP1 (159)
L5: // addr: 89 pc: 88 sub: 26844 op: 159
    // SubProg GetHexString pc: 89 op: STARTLINE (58)

    /** scanner.e:1378			if digit <= 23 then*/
    // SubProg GetHexString pc: 91 op: LESSEQ_IFW_I (123)
    if (_digit_26848 > 23)
    goto L6; // [91] 177
    // SubProg GetHexString pc: 95 op: STARTLINE (58)

    /** scanner.e:1379				if digit != 23 then*/
    // SubProg GetHexString pc: 97 op: NOTEQ_IFW_I (122)
    if (_digit_26848 == 23)
    goto L7; // [97] 212
    // SubProg GetHexString pc: 101 op: STARTLINE (58)

    /** scanner.e:1380					if digit > 16 then*/
    // SubProg GetHexString pc: 103 op: GREATER_IFW_I (124)
    if (_digit_26848 <= 16)
    goto L8; // [103] 114
    // SubProg GetHexString pc: 107 op: STARTLINE (58)

    /** scanner.e:1381						digit -= 6*/
    // SubProg GetHexString pc: 109 op: MINUS_I (116)
    _digit_26848 = _digit_26848 - 6;
    // SubProg GetHexString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26844 op: 159
    // SubProg GetHexString pc: 114 op: STARTLINE (58)

    /** scanner.e:1383					if nibble = 1 then*/
    // SubProg GetHexString pc: 116 op: EQUALS_IFW_I (121)
    if (_nibble_26851 != 1)
    goto L9; // [116] 129
    // SubProg GetHexString pc: 120 op: STARTLINE (58)

    /** scanner.e:1384						val = digit - 1*/
    // SubProg GetHexString pc: 122 op: MINUS (10)
    DeRef(_val_26849);
    _val_26849 = _digit_26848 - 1;
    if ((object)((uintptr_t)_val_26849 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26849 = NewDouble((eudouble)_val_26849);
    }
    // SubProg GetHexString pc: 126 op: ELSE (23)
    goto LA; // [126] 167
    // SubProg GetHexString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26844 op: 159
    // SubProg GetHexString pc: 129 op: STARTLINE (58)

    /** scanner.e:1386						val = val * 16 + digit - 1*/
    // SubProg GetHexString pc: 131 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26849)) {
        if (_val_26849 == (short)_val_26849){
            _14993 = _val_26849 * 16;
        }
        else{
            _14993 = NewDouble(_val_26849 * (eudouble)16);
        }
    }
    else {
        _14993 = NewDouble(DBL_PTR(_val_26849)->dbl * (eudouble)16);
    }
    // SubProg GetHexString pc: 135 op: PLUS (11)
    if (IS_ATOM_INT(_14993)) {
        _14994 = _14993 + _digit_26848;
        if ((object)((uintptr_t)_14994 + (uintptr_t)HIGH_BITS) >= 0){
            _14994 = NewDouble((eudouble)_14994);
        }
    }
    else {
        _14994 = NewDouble(DBL_PTR(_14993)->dbl + (eudouble)_digit_26848);
    }
    DeRef(_14993);
    _14993 = NOVALUE;
    // SubProg GetHexString pc: 139 op: MINUS (10)
    DeRef(_val_26849);
    if (IS_ATOM_INT(_14994)) {
        _val_26849 = _14994 - 1;
        if ((object)((uintptr_t)_val_26849 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26849 = NewDouble((eudouble)_val_26849);
        }
    }
    else {
        _val_26849 = NewDouble(DBL_PTR(_14994)->dbl - (eudouble)1);
    }
    DeRef(_14994);
    _14994 = NOVALUE;
    // SubProg GetHexString pc: 143 op: STARTLINE (58)

    /** scanner.e:1387						if nibble = maxnibbles then*/
    // SubProg GetHexString pc: 145 op: EQUALS_IFW_I (121)
    if (_nibble_26851 != _maxnibbles_26846)
    goto LB; // [145] 166
    // SubProg GetHexString pc: 149 op: STARTLINE (58)

    /** scanner.e:1388							string_text &= val*/
    // SubProg GetHexString pc: 151 op: CONCAT (15)
    Ref(_val_26849);
    Append(&_string_text_26852, _string_text_26852, _val_26849);
    // SubProg GetHexString pc: 155 op: STARTLINE (58)

    /** scanner.e:1389							val = -1*/
    // SubProg GetHexString pc: 157 op: ASSIGN (18)
    DeRef(_val_26849);
    _val_26849 = -1;
    // SubProg GetHexString pc: 160 op: STARTLINE (58)

    /** scanner.e:1390							nibble = 0*/
    // SubProg GetHexString pc: 162 op: ASSIGN_I (113)
    _nibble_26851 = 0;
    // SubProg GetHexString pc: 165 op: NOP1 (159)
LB: // addr: 166 pc: 165 sub: 26844 op: 159
    // SubProg GetHexString pc: 166 op: NOP1 (159)
LA: // addr: 167 pc: 166 sub: 26844 op: 159
    // SubProg GetHexString pc: 167 op: STARTLINE (58)

    /** scanner.e:1393					nibble += 1*/
    // SubProg GetHexString pc: 169 op: PLUS1_I (117)
    _nibble_26851 = _nibble_26851 + 1;
    // SubProg GetHexString pc: 173 op: NOP1 (159)
    // SubProg GetHexString pc: 174 op: ELSE (23)
    goto L7; // [174] 212
    // SubProg GetHexString pc: 176 op: NOP1 (159)
L6: // addr: 177 pc: 176 sub: 26844 op: 159
    // SubProg GetHexString pc: 177 op: STARTLINE (58)

    /** scanner.e:1396				if val >= 0 then*/
    // SubProg GetHexString pc: 179 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26849, 0)){
        goto LC; // [179] 195
    }
    // SubProg GetHexString pc: 183 op: STARTLINE (58)

    /** scanner.e:1398					string_text &= val*/
    // SubProg GetHexString pc: 185 op: CONCAT (15)
    Ref(_val_26849);
    Append(&_string_text_26852, _string_text_26852, _val_26849);
    // SubProg GetHexString pc: 189 op: STARTLINE (58)

    /** scanner.e:1399					val = -1*/
    // SubProg GetHexString pc: 191 op: ASSIGN (18)
    DeRef(_val_26849);
    _val_26849 = -1;
    // SubProg GetHexString pc: 194 op: NOP1 (159)
LC: // addr: 195 pc: 194 sub: 26844 op: 159
    // SubProg GetHexString pc: 195 op: STARTLINE (58)

    /** scanner.e:1401				nibble = 1*/
    // SubProg GetHexString pc: 197 op: ASSIGN_I (113)
    _nibble_26851 = 1;
    // SubProg GetHexString pc: 200 op: STARTLINE (58)

    /** scanner.e:1402				if ch = '\n' then*/
    // SubProg GetHexString pc: 202 op: EQUALS_IFW_I (121)
    if (_ch_26847 != 10)
    goto LD; // [202] 211
    // SubProg GetHexString pc: 206 op: STARTLINE (58)

    /** scanner.e:1403					read_line()*/
    // SubProg GetHexString pc: 208 op: PROC (27)
    _61read_line();
    // SubProg GetHexString pc: 210 op: NOP1 (159)
LD: // addr: 211 pc: 210 sub: 26844 op: 159
    // SubProg GetHexString pc: 211 op: NOP1 (159)
L7: // addr: 212 pc: 211 sub: 26844 op: 159
    // SubProg GetHexString pc: 212 op: STARTLINE (58)

    /** scanner.e:1406			ch = getch()*/
    // SubProg GetHexString pc: 214 op: PROC (27)
    _ch_26847 = _61getch();
    // SubProg GetHexString pc: 217 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26847)) {
        _1 = (object)(DBL_PTR(_ch_26847)->dbl);
        DeRefDS(_ch_26847);
        _ch_26847 = _1;
    }
    // SubProg GetHexString pc: 219 op: STARTLINE (58)

    /** scanner.e:1407		end while*/
    // SubProg GetHexString pc: 221 op: ENDWHILE (22)
    goto L1; // [221] 41
    // SubProg GetHexString pc: 223 op: NOP1 (159)
L4: // addr: 224 pc: 223 sub: 26844 op: 159
    // SubProg GetHexString pc: 224 op: STARTLINE (58)

    /** scanner.e:1409		if val >= 0 then	*/
    // SubProg GetHexString pc: 226 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26849, 0)){
        goto LE; // [226] 237
    }
    // SubProg GetHexString pc: 230 op: STARTLINE (58)

    /** scanner.e:1411			string_text &= val*/
    // SubProg GetHexString pc: 232 op: CONCAT (15)
    Ref(_val_26849);
    Append(&_string_text_26852, _string_text_26852, _val_26849);
    // SubProg GetHexString pc: 236 op: NOP1 (159)
LE: // addr: 237 pc: 236 sub: 26844 op: 159
    // SubProg GetHexString pc: 237 op: STARTLINE (58)

    /** scanner.e:1414		return string_text*/
    // SubProg GetHexString pc: 239 op: RETURNF (28)

// Exiting block BLOCK: GetHexString

// block var maxnibbles_26846

// block var ch_26847

// block var digit_26848

// block var val_26849
    DeRef(_val_26849);

// block var cline_26850

// block var nibble_26851
    return _string_text_26852;
    // SubProg GetHexString pc: 243 op: BADRETURNF (43)
    ;
}


object _61GetBitString()
{
    object _ch_26897 = NOVALUE;
    object _digit_26898 = NOVALUE;
    object _val_26899 = NOVALUE;
    object _cline_26900 = NOVALUE;
    object _bitcnt_26901 = NOVALUE;
    object _string_text_26902 = NOVALUE;
// skipping _15024  name type: 0
// skipping _15023  name type: 0
// skipping _15022  name type: 0
// skipping _15021  name type: 0
// skipping _15020  name type: 0
// skipping _15019  name type: 0
// skipping _15018  name type: 0
// skipping _15017  name type: 0
    object _15016 = NOVALUE; // 26926 15016
    object _15015 = NOVALUE; // 26925 15015
// skipping _15014  name type: 0
// skipping _15013  name type: 0
// skipping _15012  name type: 0
// skipping _15011  name type: 0
// skipping _15010  name type: 0
// skipping _15009  name type: 0
// skipping _15007  name type: 0
// skipping _15006  name type: 0
// skipping _15005  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBitString pc: 1 op: STARTLINE (58)

    /** scanner.e:1425		cline = line_number*/
    // SubProg GetBitString pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 5 op: ASSIGN (18)
    _cline_26900 = _5line_number_12478;
    // SubProg GetBitString pc: 8 op: INTEGER_CHECK (96)
    // SubProg GetBitString pc: 10 op: STARTLINE (58)

    /** scanner.e:1426		string_text = ""*/
    // SubProg GetBitString pc: 12 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26902);
    _string_text_26902 = _5;
    // SubProg GetBitString pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetBitString pc: 17 op: STARTLINE (58)

    /** scanner.e:1427		bitcnt = 1*/
    // SubProg GetBitString pc: 19 op: ASSIGN_I (113)
    _bitcnt_26901 = 1;
    // SubProg GetBitString pc: 22 op: STARTLINE (58)

    /** scanner.e:1428		val = -1*/
    // SubProg GetBitString pc: 24 op: ASSIGN (18)
    DeRef(_val_26899);
    _val_26899 = -1;
    // SubProg GetBitString pc: 27 op: STARTLINE (58)

    /** scanner.e:1429		ch = getch()*/
    // SubProg GetBitString pc: 29 op: PROC (27)
    _ch_26897 = _61getch();
    // SubProg GetBitString pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26897)) {
        _1 = (object)(DBL_PTR(_ch_26897)->dbl);
        DeRefDS(_ch_26897);
        _ch_26897 = _1;
    }
    // SubProg GetBitString pc: 34 op: STARTLINE (58)

    /** scanner.e:1430		while 1 do*/
    // SubProg GetBitString pc: 36 op: NOP2 (110)
    // SubProg GetBitString pc: 38 op: NOPWHILE (158)
L1: // addr: 39 pc: 38 sub: 26895 op: 158
    // SubProg GetBitString pc: 39 op: STARTLINE (58)

    /** scanner.e:1431			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetBitString pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 43 op: EQUALS_IFW (104)
    if (_ch_26897 != 26)
    goto L2; // [43] 55
    // SubProg GetBitString pc: 47 op: STARTLINE (58)

    /** scanner.e:1432				CompileErr(129, cline)*/
    // SubProg GetBitString pc: 49 op: PROC (27)
    _49CompileErr(129, _cline_26900, 0);
    // SubProg GetBitString pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 26895 op: 159
    // SubProg GetBitString pc: 55 op: STARTLINE (58)

    /** scanner.e:1435			if ch = '"' then*/
    // SubProg GetBitString pc: 57 op: EQUALS_IFW_I (121)
    if (_ch_26897 != 34)
    goto L3; // [57] 66
    // SubProg GetBitString pc: 61 op: STARTLINE (58)

    /** scanner.e:1436				exit*/
    // SubProg GetBitString pc: 63 op: EXIT (61)
    goto L4; // [63] 186
    // SubProg GetBitString pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 26895 op: 159
    // SubProg GetBitString pc: 66 op: STARTLINE (58)

    /** scanner.e:1439			digit = find(ch, "01_ \t\n\r")*/
    // SubProg GetBitString pc: 68 op: FIND_FROM (176)
    _digit_26898 = find_from(_ch_26897, _15008, 1);
    // SubProg GetBitString pc: 73 op: STARTLINE (58)

    /** scanner.e:1440			if digit = 0 then*/
    // SubProg GetBitString pc: 75 op: EQUALS_IFW_I (121)
    if (_digit_26898 != 0)
    goto L5; // [75] 87
    // SubProg GetBitString pc: 79 op: STARTLINE (58)

    /** scanner.e:1441				CompileErr(329)*/
    // SubProg GetBitString pc: 81 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(329, _21958, 0);
    // SubProg GetBitString pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 26895 op: 159
    // SubProg GetBitString pc: 87 op: STARTLINE (58)

    /** scanner.e:1443			if digit <= 3 then*/
    // SubProg GetBitString pc: 89 op: LESSEQ_IFW_I (123)
    if (_digit_26898 > 3)
    goto L6; // [89] 139
    // SubProg GetBitString pc: 93 op: STARTLINE (58)

    /** scanner.e:1444				if digit != 3 then*/
    // SubProg GetBitString pc: 95 op: NOTEQ_IFW_I (122)
    if (_digit_26898 == 3)
    goto L7; // [95] 174
    // SubProg GetBitString pc: 99 op: STARTLINE (58)

    /** scanner.e:1445					if bitcnt = 1 then*/
    // SubProg GetBitString pc: 101 op: EQUALS_IFW_I (121)
    if (_bitcnt_26901 != 1)
    goto L8; // [101] 114
    // SubProg GetBitString pc: 105 op: STARTLINE (58)

    /** scanner.e:1446						val = digit - 1*/
    // SubProg GetBitString pc: 107 op: MINUS (10)
    DeRef(_val_26899);
    _val_26899 = _digit_26898 - 1;
    if ((object)((uintptr_t)_val_26899 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26899 = NewDouble((eudouble)_val_26899);
    }
    // SubProg GetBitString pc: 111 op: ELSE (23)
    goto L9; // [111] 129
    // SubProg GetBitString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26895 op: 159
    // SubProg GetBitString pc: 114 op: STARTLINE (58)

    /** scanner.e:1448						val = val * 2 + digit - 1*/
    // SubProg GetBitString pc: 116 op: PLUS (11)
    if (IS_ATOM_INT(_val_26899) && IS_ATOM_INT(_val_26899)) {
        _15015 = _val_26899 + _val_26899;
        if ((object)((uintptr_t)_15015 + (uintptr_t)HIGH_BITS) >= 0){
            _15015 = NewDouble((eudouble)_15015);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26899)) {
            _15015 = NewDouble((eudouble)_val_26899 + DBL_PTR(_val_26899)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26899)) {
                _15015 = NewDouble(DBL_PTR(_val_26899)->dbl + (eudouble)_val_26899);
            }
            else
            _15015 = NewDouble(DBL_PTR(_val_26899)->dbl + DBL_PTR(_val_26899)->dbl);
        }
    }
    // SubProg GetBitString pc: 120 op: PLUS (11)
    if (IS_ATOM_INT(_15015)) {
        _15016 = _15015 + _digit_26898;
        if ((object)((uintptr_t)_15016 + (uintptr_t)HIGH_BITS) >= 0){
            _15016 = NewDouble((eudouble)_15016);
        }
    }
    else {
        _15016 = NewDouble(DBL_PTR(_15015)->dbl + (eudouble)_digit_26898);
    }
    DeRef(_15015);
    _15015 = NOVALUE;
    // SubProg GetBitString pc: 124 op: MINUS (10)
    DeRef(_val_26899);
    if (IS_ATOM_INT(_15016)) {
        _val_26899 = _15016 - 1;
        if ((object)((uintptr_t)_val_26899 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26899 = NewDouble((eudouble)_val_26899);
        }
    }
    else {
        _val_26899 = NewDouble(DBL_PTR(_15016)->dbl - (eudouble)1);
    }
    DeRef(_15016);
    _15016 = NOVALUE;
    // SubProg GetBitString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26895 op: 159
    // SubProg GetBitString pc: 129 op: STARTLINE (58)

    /** scanner.e:1450					bitcnt += 1*/
    // SubProg GetBitString pc: 131 op: PLUS1_I (117)
    _bitcnt_26901 = _bitcnt_26901 + 1;
    // SubProg GetBitString pc: 135 op: NOP1 (159)
    // SubProg GetBitString pc: 136 op: ELSE (23)
    goto L7; // [136] 174
    // SubProg GetBitString pc: 138 op: NOP1 (159)
L6: // addr: 139 pc: 138 sub: 26895 op: 159
    // SubProg GetBitString pc: 139 op: STARTLINE (58)

    /** scanner.e:1453				if val >= 0 then*/
    // SubProg GetBitString pc: 141 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26899, 0)){
        goto LA; // [141] 157
    }
    // SubProg GetBitString pc: 145 op: STARTLINE (58)

    /** scanner.e:1455					string_text &= val*/
    // SubProg GetBitString pc: 147 op: CONCAT (15)
    Ref(_val_26899);
    Append(&_string_text_26902, _string_text_26902, _val_26899);
    // SubProg GetBitString pc: 151 op: STARTLINE (58)

    /** scanner.e:1456					val = -1*/
    // SubProg GetBitString pc: 153 op: ASSIGN (18)
    DeRef(_val_26899);
    _val_26899 = -1;
    // SubProg GetBitString pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 26895 op: 159
    // SubProg GetBitString pc: 157 op: STARTLINE (58)

    /** scanner.e:1458				bitcnt = 1*/
    // SubProg GetBitString pc: 159 op: ASSIGN_I (113)
    _bitcnt_26901 = 1;
    // SubProg GetBitString pc: 162 op: STARTLINE (58)

    /** scanner.e:1459				if ch = '\n' then*/
    // SubProg GetBitString pc: 164 op: EQUALS_IFW_I (121)
    if (_ch_26897 != 10)
    goto LB; // [164] 173
    // SubProg GetBitString pc: 168 op: STARTLINE (58)

    /** scanner.e:1460					read_line()*/
    // SubProg GetBitString pc: 170 op: PROC (27)
    _61read_line();
    // SubProg GetBitString pc: 172 op: NOP1 (159)
LB: // addr: 173 pc: 172 sub: 26895 op: 159
    // SubProg GetBitString pc: 173 op: NOP1 (159)
L7: // addr: 174 pc: 173 sub: 26895 op: 159
    // SubProg GetBitString pc: 174 op: STARTLINE (58)

    /** scanner.e:1463			ch = getch()*/
    // SubProg GetBitString pc: 176 op: PROC (27)
    _ch_26897 = _61getch();
    // SubProg GetBitString pc: 179 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26897)) {
        _1 = (object)(DBL_PTR(_ch_26897)->dbl);
        DeRefDS(_ch_26897);
        _ch_26897 = _1;
    }
    // SubProg GetBitString pc: 181 op: STARTLINE (58)

    /** scanner.e:1464		end while*/
    // SubProg GetBitString pc: 183 op: ENDWHILE (22)
    goto L1; // [183] 39
    // SubProg GetBitString pc: 185 op: NOP1 (159)
L4: // addr: 186 pc: 185 sub: 26895 op: 159
    // SubProg GetBitString pc: 186 op: STARTLINE (58)

    /** scanner.e:1466		if val >= 0 then	*/
    // SubProg GetBitString pc: 188 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26899, 0)){
        goto LC; // [188] 199
    }
    // SubProg GetBitString pc: 192 op: STARTLINE (58)

    /** scanner.e:1468			string_text &= val*/
    // SubProg GetBitString pc: 194 op: CONCAT (15)
    Ref(_val_26899);
    Append(&_string_text_26902, _string_text_26902, _val_26899);
    // SubProg GetBitString pc: 198 op: NOP1 (159)
LC: // addr: 199 pc: 198 sub: 26895 op: 159
    // SubProg GetBitString pc: 199 op: STARTLINE (58)

    /** scanner.e:1471		return string_text*/
    // SubProg GetBitString pc: 201 op: RETURNF (28)

// Exiting block BLOCK: GetBitString

// block var ch_26897

// block var digit_26898

// block var val_26899
    DeRef(_val_26899);

// block var cline_26900

// block var bitcnt_26901
    return _string_text_26902;
    // SubProg GetBitString pc: 205 op: BADRETURNF (43)
    ;
}


object _61Scanner()
{
    object _fwd_inlined_set_qualified_fwd_at_441_27040 = NOVALUE;
    object _ch_26941 = NOVALUE;
    object _i_26942 = NOVALUE;
    object _sp_26943 = NOVALUE;
    object _prev_Nne_26944 = NOVALUE;
    object _pch_26945 = NOVALUE;
    object _cline_26946 = NOVALUE;
    object _yytext_26947 = NOVALUE;
    object _namespaces_26948 = NOVALUE;
    object _d_26949 = NOVALUE;
    object _tok_26951 = NOVALUE;
    object _is_int_26952 = NOVALUE;
    object _class_26953 = NOVALUE;
    object _name_26954 = NOVALUE;
    object _is_namespace_27013 = NOVALUE;
    object _basetype_27247 = NOVALUE;
    object _hdigit_27287 = NOVALUE;
    object _fch_27421 = NOVALUE;
    object _cnest_27601 = NOVALUE;
    object _ach_27630 = NOVALUE;
    object _31804 = NOVALUE; // 64017 31804
    object _31803 = NOVALUE; // 64016 31803
    object _31802 = NOVALUE; // 64015 31802
    object _31801 = NOVALUE; // 64014 31801
    object _31800 = NOVALUE; // 64013 31800
    object _31799 = NOVALUE; // 64012 31799
    object _31798 = NOVALUE; // 64011 31798
    object _15409 = NOVALUE; // 27722 15409
    object _15408 = NOVALUE; // 27719 15408
// skipping _15407  name type: 0
    object _15406 = NOVALUE; // 27715 15406
// skipping _15405  name type: 0
    object _15404 = NOVALUE; // 27711 15404
    object _15403 = NOVALUE; // 27710 15403
    object _15402 = NOVALUE; // 27709 15402
// skipping _15401  name type: 0
    object _15400 = NOVALUE; // 27704 15400
    object _15399 = NOVALUE; // 27703 15399
    object _15398 = NOVALUE; // 27701 15398
    object _15397 = NOVALUE; // 27700 15397
// skipping _15396  name type: 0
    object _15395 = NOVALUE; // 27695 15395
    object _15394 = NOVALUE; // 27692 15394
// skipping _15393  name type: 0
    object _15392 = NOVALUE; // 27689 15392
// skipping _15391  name type: 0
    object _15390 = NOVALUE; // 27684 15390
    object _15389 = NOVALUE; // 27681 15389
// skipping _15388  name type: 0
    object _15387 = NOVALUE; // 27678 15387
// skipping _15386  name type: 0
    object _15385 = NOVALUE; // 27673 15385
    object _15384 = NOVALUE; // 27670 15384
// skipping _15383  name type: 0
    object _15382 = NOVALUE; // 27667 15382
// skipping _15381  name type: 0
    object _15380 = NOVALUE; // 27662 15380
    object _15379 = NOVALUE; // 27661 15379
    object _15378 = NOVALUE; // 27657 15378
    object _15377 = NOVALUE; // 27656 15377
    object _15376 = NOVALUE; // 27653 15376
// skipping _15375  name type: 0
    object _15374 = NOVALUE; // 27648 15374
    object _15373 = NOVALUE; // 27646 15373
// skipping _15370  name type: 0
// skipping _15369  name type: 0
// skipping _15368  name type: 0
// skipping _15367  name type: 0
// skipping _15366  name type: 0
// skipping _15365  name type: 0
// skipping _15364  name type: 0
    object _15363 = NOVALUE; // 27626 15363
// skipping _15362  name type: 0
// skipping _15361  name type: 0
// skipping _15360  name type: 0
// skipping _15359  name type: 0
// skipping _15358  name type: 0
// skipping _15357  name type: 0
// skipping _15356  name type: 0
// skipping _15353  name type: 0
// skipping _15352  name type: 0
// skipping _15351  name type: 0
    object _15350 = NOVALUE; // 27597 15350
// skipping _15349  name type: 0
// skipping _15348  name type: 0
// skipping _15347  name type: 0
    object _15346 = NOVALUE; // 27590 15346
    object _15345 = NOVALUE; // 27588 15345
// skipping _15344  name type: 0
// skipping _15343  name type: 0
// skipping _15342  name type: 0
    object _15341 = NOVALUE; // 27581 15341
    object _15340 = NOVALUE; // 27580 15340
    object _15339 = NOVALUE; // 27576 15339
    object _15338 = NOVALUE; // 27575 15338
// skipping _15337  name type: 0
    object _15336 = NOVALUE; // 27568 15336
    object _15335 = NOVALUE; // 27567 15335
    object _15334 = NOVALUE; // 27564 15334
    object _15333 = NOVALUE; // 27562 15333
// skipping _15332  name type: 0
// skipping _15331  name type: 0
    object _15330 = NOVALUE; // 27556 15330
    object _15329 = NOVALUE; // 27555 15329
    object _15328 = NOVALUE; // 27554 15328
    object _15327 = NOVALUE; // 27553 15327
    object _15326 = NOVALUE; // 27552 15326
    object _15325 = NOVALUE; // 27551 15325
// skipping _15324  name type: 0
    object _15323 = NOVALUE; // 27548 15323
    object _15322 = NOVALUE; // 27547 15322
    object _15321 = NOVALUE; // 27546 15321
    object _15320 = NOVALUE; // 27545 15320
    object _15319 = NOVALUE; // 27544 15319
    object _15318 = NOVALUE; // 27543 15318
// skipping _15317  name type: 0
    object _15316 = NOVALUE; // 27540 15316
    object _15315 = NOVALUE; // 27539 15315
// skipping _15314  name type: 0
// skipping _15313  name type: 0
    object _15312 = NOVALUE; // 27534 15312
// skipping _15311  name type: 0
// skipping _15310  name type: 0
    object _15309 = NOVALUE; // 27527 15309
// skipping _15308  name type: 0
// skipping _15307  name type: 0
// skipping _15306  name type: 0
// skipping _15305  name type: 0
    object _15304 = NOVALUE; // 27508 15304
    object _15303 = NOVALUE; // 27507 15303
    object _15302 = NOVALUE; // 27506 15302
    object _15301 = NOVALUE; // 27505 15301
    object _15300 = NOVALUE; // 27504 15300
    object _15299 = NOVALUE; // 27503 15299
// skipping _15298  name type: 0
    object _15297 = NOVALUE; // 27499 15297
    object _15296 = NOVALUE; // 27498 15296
    object _15295 = NOVALUE; // 27497 15295
    object _15294 = NOVALUE; // 27496 15294
    object _15293 = NOVALUE; // 27495 15293
    object _15292 = NOVALUE; // 27494 15292
// skipping _15291  name type: 0
    object _15290 = NOVALUE; // 27490 15290
    object _15289 = NOVALUE; // 27489 15289
// skipping _15288  name type: 0
// skipping _15287  name type: 0
    object _15286 = NOVALUE; // 27484 15286
// skipping _15285  name type: 0
// skipping _15284  name type: 0
    object _15283 = NOVALUE; // 27480 15283
// skipping _15282  name type: 0
    object _15281 = NOVALUE; // 27474 15281
    object _15280 = NOVALUE; // 27472 15280
// skipping _15279  name type: 0
// skipping _15278  name type: 0
// skipping _15277  name type: 0
    object _15276 = NOVALUE; // 27465 15276
    object _15275 = NOVALUE; // 27462 15275
// skipping _15274  name type: 0
// skipping _15273  name type: 0
// skipping _15272  name type: 0
    object _15271 = NOVALUE; // 27454 15271
    object _15270 = NOVALUE; // 27453 15270
    object _15269 = NOVALUE; // 27449 15269
// skipping _15268  name type: 0
    object _15267 = NOVALUE; // 27447 15267
// skipping _15266  name type: 0
// skipping _15265  name type: 0
// skipping _15264  name type: 0
// skipping _15263  name type: 0
    object _15262 = NOVALUE; // 27438 15262
// skipping _15261  name type: 0
// skipping _15260  name type: 0
    object _15259 = NOVALUE; // 27433 15259
    object _15258 = NOVALUE; // 27432 15258
    object _15257 = NOVALUE; // 27431 15257
    object _15256 = NOVALUE; // 27428 15256
// skipping _15255  name type: 0
// skipping _15254  name type: 0
// skipping _15253  name type: 0
// skipping _15252  name type: 0
// skipping _15251  name type: 0
    object _15250 = NOVALUE; // 27417 15250
// skipping _15249  name type: 0
    object _15248 = NOVALUE; // 27412 15248
// skipping _15247  name type: 0
// skipping _15246  name type: 0
// skipping _15245  name type: 0
// skipping _15244  name type: 0
    object _15243 = NOVALUE; // 27400 15243
    object _15242 = NOVALUE; // 27399 15242
    object _15241 = NOVALUE; // 27395 15241
    object _15240 = NOVALUE; // 27394 15240
    object _15239 = NOVALUE; // 27391 15239
    object _15238 = NOVALUE; // 27389 15238
    object _15237 = NOVALUE; // 27386 15237
// skipping _15236  name type: 0
    object _15235 = NOVALUE; // 27383 15235
// skipping _15234  name type: 0
    object _15233 = NOVALUE; // 27379 15233
    object _15232 = NOVALUE; // 27378 15232
    object _15231 = NOVALUE; // 27374 15231
    object _15230 = NOVALUE; // 27373 15230
    object _15229 = NOVALUE; // 27370 15229
// skipping _15228  name type: 0
    object _15227 = NOVALUE; // 27366 15227
// skipping _15226  name type: 0
// skipping _15225  name type: 0
// skipping _15224  name type: 0
// skipping _15223  name type: 0
    object _15222 = NOVALUE; // 27358 15222
    object _15221 = NOVALUE; // 27357 15221
// skipping _15220  name type: 0
    object _15219 = NOVALUE; // 27353 15219
// skipping _15218  name type: 0
// skipping _15217  name type: 0
// skipping _15216  name type: 0
    object _15215 = NOVALUE; // 27347 15215
// skipping _15214  name type: 0
// skipping _15213  name type: 0
    object _15212 = NOVALUE; // 27341 15212
    object _15211 = NOVALUE; // 27339 15211
// skipping _15210  name type: 0
    object _15209 = NOVALUE; // 27337 15209
    object _15208 = NOVALUE; // 27336 15208
    object _15207 = NOVALUE; // 27335 15207
// skipping _15206  name type: 0
// skipping _15205  name type: 0
    object _15204 = NOVALUE; // 27330 15204
    object _15202 = NOVALUE; // 27328 15202
    object _15201 = NOVALUE; // 27327 15201
// skipping _15200  name type: 0
// skipping _15199  name type: 0
// skipping _15198  name type: 0
    object _15197 = NOVALUE; // 27319 15197
// skipping _15196  name type: 0
// skipping _15195  name type: 0
// skipping _15194  name type: 0
    object _15193 = NOVALUE; // 27313 15193
// skipping _15192  name type: 0
// skipping _15191  name type: 0
    object _15190 = NOVALUE; // 27307 15190
// skipping _15189  name type: 0
// skipping _15188  name type: 0
// skipping _15187  name type: 0
// skipping _15186  name type: 0
// skipping _15185  name type: 0
    object _15184 = NOVALUE; // 27295 15184
// skipping _15183  name type: 0
// skipping _15182  name type: 0
// skipping _15181  name type: 0
// skipping _15180  name type: 0
// skipping _15178  name type: 0
// skipping _15177  name type: 0
    object _15176 = NOVALUE; // 27282 15176
    object _15175 = NOVALUE; // 27281 15175
    object _15174 = NOVALUE; // 27280 15174
// skipping _15173  name type: 0
    object _15172 = NOVALUE; // 27276 15172
// skipping _15171  name type: 0
// skipping _15170  name type: 0
    object _15169 = NOVALUE; // 27271 15169
// skipping _15168  name type: 0
    object _15167 = NOVALUE; // 27269 15167
// skipping _15166  name type: 0
    object _15165 = NOVALUE; // 27266 15165
// skipping _15164  name type: 0
// skipping _15163  name type: 0
    object _15162 = NOVALUE; // 27261 15162
// skipping _15161  name type: 0
// skipping _15160  name type: 0
    object _15159 = NOVALUE; // 27255 15159
// skipping _15158  name type: 0
    object _15157 = NOVALUE; // 27252 15157
// skipping _15156  name type: 0
    object _15155 = NOVALUE; // 27246 15155
// skipping _15154  name type: 0
    object _15153 = NOVALUE; // 27243 15153
    object _15152 = NOVALUE; // 27240 15152
// skipping _15151  name type: 0
// skipping _15150  name type: 0
// skipping _15149  name type: 0
    object _15148 = NOVALUE; // 27227 15148
// skipping _15147  name type: 0
// skipping _15146  name type: 0
    object _15145 = NOVALUE; // 27222 15145
// skipping _15144  name type: 0
    object _15143 = NOVALUE; // 27217 15143
// skipping _15142  name type: 0
// skipping _15141  name type: 0
    object _15140 = NOVALUE; // 27209 15140
// skipping _15139  name type: 0
// skipping _15138  name type: 0
// skipping _15137  name type: 0
// skipping _15136  name type: 0
// skipping _15135  name type: 0
// skipping _15134  name type: 0
    object _15133 = NOVALUE; // 27188 15133
// skipping _15132  name type: 0
    object _15131 = NOVALUE; // 27183 15131
// skipping _15130  name type: 0
// skipping _15129  name type: 0
    object _15128 = NOVALUE; // 27175 15128
// skipping _15127  name type: 0
// skipping _15126  name type: 0
// skipping _15125  name type: 0
// skipping _15124  name type: 0
// skipping _15123  name type: 0
    object _15122 = NOVALUE; // 27155 15122
    object _15121 = NOVALUE; // 27153 15121
    object _15120 = NOVALUE; // 27151 15120
    object _15119 = NOVALUE; // 27150 15119
    object _15118 = NOVALUE; // 27147 15118
    object _15117 = NOVALUE; // 27146 15117
    object _15116 = NOVALUE; // 27145 15116
// skipping _15115  name type: 0
    object _15114 = NOVALUE; // 27138 15114
// skipping _15113  name type: 0
    object _15112 = NOVALUE; // 27131 15112
// skipping _15111  name type: 0
    object _15110 = NOVALUE; // 27124 15110
// skipping _15109  name type: 0
    object _15108 = NOVALUE; // 27117 15108
// skipping _15107  name type: 0
    object _15106 = NOVALUE; // 27113 15106
    object _15105 = NOVALUE; // 27111 15105
    object _15104 = NOVALUE; // 27110 15104
    object _15103 = NOVALUE; // 27105 15103
    object _15102 = NOVALUE; // 27104 15102
// skipping _15101  name type: 0
    object _15100 = NOVALUE; // 27099 15100
// skipping _15099  name type: 0
// skipping _15098  name type: 0
    object _15097 = NOVALUE; // 27091 15097
// skipping _15096  name type: 0
    object _15095 = NOVALUE; // 27087 15095
    object _15094 = NOVALUE; // 27085 15094
    object _15093 = NOVALUE; // 27084 15093
// skipping _15092  name type: 0
    object _15091 = NOVALUE; // 27077 15091
// skipping _15090  name type: 0
// skipping _15089  name type: 0
// skipping _15088  name type: 0
// skipping _15087  name type: 0
    object _15086 = NOVALUE; // 27062 15086
// skipping _15085  name type: 0
// skipping _15084  name type: 0
// skipping _15083  name type: 0
    object _15082 = NOVALUE; // 27056 15082
// skipping _15081  name type: 0
// skipping _15080  name type: 0
    object _15079 = NOVALUE; // 27052 15079
// skipping _15078  name type: 0
    object _15077 = NOVALUE; // 27050 15077
    object _15076 = NOVALUE; // 27048 15076
// skipping _15075  name type: 0
    object _15074 = NOVALUE; // 27045 15074
// skipping _15073  name type: 0
    object _15072 = NOVALUE; // 27043 15072
// skipping _15071  name type: 0
    object _15070 = NOVALUE; // 27038 15070
    object _15069 = NOVALUE; // 27036 15069
    object _15068 = NOVALUE; // 27035 15068
// skipping _15067  name type: 0
    object _15066 = NOVALUE; // 27030 15066
// skipping _15065  name type: 0
// skipping _15064  name type: 0
// skipping _15063  name type: 0
// skipping _15062  name type: 0
    object _15061 = NOVALUE; // 27018 15061
// skipping _15060  name type: 0
// skipping _15059  name type: 0
    object _15058 = NOVALUE; // 27011 15058
// skipping _15057  name type: 0
    object _15056 = NOVALUE; // 27009 15056
// skipping _15055  name type: 0
// skipping _15054  name type: 0
    object _15053 = NOVALUE; // 27005 15053
    object _15052 = NOVALUE; // 27003 15052
// skipping _15051  name type: 0
    object _15050 = NOVALUE; // 27000 15050
    object _15049 = NOVALUE; // 26998 15049
    object _15048 = NOVALUE; // 26997 15048
    object _15047 = NOVALUE; // 26996 15047
    object _15046 = NOVALUE; // 26992 15046
    object _15045 = NOVALUE; // 26991 15045
    object _15044 = NOVALUE; // 26990 15044
    object _15043 = NOVALUE; // 26986 15043
    object _15042 = NOVALUE; // 26985 15042
    object _15041 = NOVALUE; // 26984 15041
    object _15040 = NOVALUE; // 26980 15040
    object _15039 = NOVALUE; // 26979 15039
    object _15038 = NOVALUE; // 26978 15038
// skipping _15035  name type: 0
// skipping _15034  name type: 0
    object _15033 = NOVALUE; // 26968 15033
// skipping _15032  name type: 0
    object _15031 = NOVALUE; // 26966 15031
// skipping _15030  name type: 0
// skipping _15029  name type: 0
    object _15028 = NOVALUE; // 26961 15028
// skipping _15027  name type: 0
    object _15026 = NOVALUE; // 26959 15026
// skipping _15025  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg Scanner pc: 1 op: STARTLINE (58)

    /** scanner.e:1482		integer is_int, class*/
    // SubProg Scanner pc: 3 op: STARTLINE (58)

    /** scanner.e:1483		sequence name*/
    // SubProg Scanner pc: 5 op: STARTLINE (58)

    /** scanner.e:1485		while TRUE do*/
    // SubProg Scanner pc: 7 op: NOP2 (110)
    // SubProg Scanner pc: 9 op: NOPWHILE (158)
L1: // addr: 10 pc: 9 sub: 26939 op: 158
    // SubProg Scanner pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 12 op: WHILE (47)
    if (_6TRUE_365 == 0)
    {
        goto L2; // [12] 3793
    }
    else{
    }
    // SubProg Scanner pc: 15 op: STARTLINE (58)

    /** scanner.e:1486			ch = getch()*/
    // SubProg Scanner pc: 17 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 22 op: STARTLINE (58)

    /** scanner.e:1487			while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 24 op: NOP2 (110)
    // SubProg Scanner pc: 26 op: NOPWHILE (158)
L3: // addr: 27 pc: 26 sub: 26939 op: 158
    // SubProg Scanner pc: 27 op: EQUALS (3)
    _15026 = (_ch_26941 == 32);
    // SubProg Scanner pc: 31 op: SC1_OR_IF (147)
    if (_15026 != 0) {
        goto L4; // [31] 44
    }
    // SubProg Scanner pc: 35 op: EQUALS (3)
    _15028 = (_ch_26941 == 9);
    // SubProg Scanner pc: 39 op: NOP1 (159)
    // SubProg Scanner pc: 40 op: WHILE (47)
    if (_15028 == 0)
    {
        DeRef(_15028);
        _15028 = NOVALUE;
        goto L5; // [40] 56
    }
    else{
        DeRef(_15028);
        _15028 = NOVALUE;
    }
    // SubProg Scanner pc: 43 op: NOP1 (159)
L4: // addr: 44 pc: 43 sub: 26939 op: 159
    // SubProg Scanner pc: 44 op: STARTLINE (58)

    /** scanner.e:1488				ch = getch()*/
    // SubProg Scanner pc: 46 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 49 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 51 op: STARTLINE (58)

    /** scanner.e:1489			end while*/
    // SubProg Scanner pc: 53 op: ENDWHILE (22)
    goto L3; // [53] 27
    // SubProg Scanner pc: 55 op: NOP1 (159)
L5: // addr: 56 pc: 55 sub: 26939 op: 159
    // SubProg Scanner pc: 56 op: STARTLINE (58)

    /** scanner.e:1491			class = char_class[ch]*/
    // SubProg Scanner pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 60 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _class_26953 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 64 op: STARTLINE (58)

    /** scanner.e:1494			if class = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 68 op: EQUALS (3)
    _15031 = (_class_26953 == -2);
    // SubProg Scanner pc: 72 op: SC1_OR_IF (147)
    if (_15031 != 0) {
        goto L6; // [72] 85
    }
    // SubProg Scanner pc: 76 op: EQUALS (3)
    _15033 = (_ch_26941 == 95);
    // SubProg Scanner pc: 80 op: NOP1 (159)
    // SubProg Scanner pc: 81 op: IF (20)
    if (_15033 == 0)
    {
        DeRef(_15033);
        _15033 = NOVALUE;
        goto L7; // [81] 1282
    }
    else{
        DeRef(_15033);
        _15033 = NOVALUE;
    }
    // SubProg Scanner pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 26939 op: 159
    // SubProg Scanner pc: 85 op: STARTLINE (58)

    /** scanner.e:1495				sp = bp*/
    // SubProg Scanner pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 89 op: ASSIGN (18)
    _sp_26943 = _49bp_48785;
    // SubProg Scanner pc: 92 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 94 op: STARTLINE (58)

    /** scanner.e:1496				pch = ch*/
    // SubProg Scanner pc: 96 op: ASSIGN_I (113)
    _pch_26945 = _ch_26941;
    // SubProg Scanner pc: 99 op: STARTLINE (58)

    /** scanner.e:1497				ch = getch()*/
    // SubProg Scanner pc: 101 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 104 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 106 op: STARTLINE (58)

    /** scanner.e:1498				if ch = '"' then*/
    // SubProg Scanner pc: 108 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 34)
    goto L8; // [108] 222
    // SubProg Scanner pc: 112 op: STARTLINE (58)

    /** scanner.e:1499					switch pch do*/
    // SubProg Scanner pc: 114 op: SWITCH_I (193)
    _0 = _pch_26945;
    switch ( _0 ){ 
        // SubProg Scanner pc: 119 op: STARTLINE (58)

        /** scanner.e:1500						case 'x' then*/
        // SubProg Scanner pc: 121 op: CASE (186)
        case 120:
        // SubProg Scanner pc: 123 op: STARTLINE (58)

        /** scanner.e:1501							return {STRING, NewStringSym(GetHexString(2))}*/
        // SubProg Scanner pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 127 op: PROC (27)
        _15038 = _61GetHexString(2);
        // SubProg Scanner pc: 131 op: PROC (27)
        _15039 = _53NewStringSym(_15038);
        _15038 = NOVALUE;
        // SubProg Scanner pc: 135 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15039;
        _15040 = MAKE_SEQ(_1);
        _15039 = NOVALUE;
        // SubProg Scanner pc: 139 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
        DeRef(_yytext_26947);

// block var namespaces_26948
        DeRef(_namespaces_26948);

// block var d_26949
        DeRef(_d_26949);

// block var tok_26951
        DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
        DeRef(_name_26954);
        DeRef(_15031);
        _15031 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        return _15040;
        // SubProg Scanner pc: 143 op: ELSE (23)
        goto L9; // [143] 221
        // SubProg Scanner pc: 145 op: STARTLINE (58)

        /** scanner.e:1503						case 'u' then*/
        // SubProg Scanner pc: 147 op: CASE (186)
        case 117:
        // SubProg Scanner pc: 149 op: STARTLINE (58)

        /** scanner.e:1504							return {STRING, NewStringSym(GetHexString(4))}*/
        // SubProg Scanner pc: 151 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 153 op: PROC (27)
        _15041 = _61GetHexString(4);
        // SubProg Scanner pc: 157 op: PROC (27)
        _15042 = _53NewStringSym(_15041);
        _15041 = NOVALUE;
        // SubProg Scanner pc: 161 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15042;
        _15043 = MAKE_SEQ(_1);
        _15042 = NOVALUE;
        // SubProg Scanner pc: 165 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
        DeRef(_yytext_26947);

// block var namespaces_26948
        DeRef(_namespaces_26948);

// block var d_26949
        DeRef(_d_26949);

// block var tok_26951
        DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
        DeRef(_name_26954);
        DeRef(_15031);
        _15031 = NOVALUE;
        DeRef(_15040);
        _15040 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        return _15043;
        // SubProg Scanner pc: 169 op: ELSE (23)
        goto L9; // [169] 221
        // SubProg Scanner pc: 171 op: STARTLINE (58)

        /** scanner.e:1506						case 'U' then*/
        // SubProg Scanner pc: 173 op: CASE (186)
        case 85:
        // SubProg Scanner pc: 175 op: STARTLINE (58)

        /** scanner.e:1507							return {STRING, NewStringSym(GetHexString(8))}*/
        // SubProg Scanner pc: 177 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 179 op: PROC (27)
        _15044 = _61GetHexString(8);
        // SubProg Scanner pc: 183 op: PROC (27)
        _15045 = _53NewStringSym(_15044);
        _15044 = NOVALUE;
        // SubProg Scanner pc: 187 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15045;
        _15046 = MAKE_SEQ(_1);
        _15045 = NOVALUE;
        // SubProg Scanner pc: 191 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
        DeRef(_yytext_26947);

// block var namespaces_26948
        DeRef(_namespaces_26948);

// block var d_26949
        DeRef(_d_26949);

// block var tok_26951
        DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
        DeRef(_name_26954);
        DeRef(_15031);
        _15031 = NOVALUE;
        DeRef(_15040);
        _15040 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15043);
        _15043 = NOVALUE;
        return _15046;
        // SubProg Scanner pc: 195 op: ELSE (23)
        goto L9; // [195] 221
        // SubProg Scanner pc: 197 op: STARTLINE (58)

        /** scanner.e:1509						case 'b' then*/
        // SubProg Scanner pc: 199 op: CASE (186)
        case 98:
        // SubProg Scanner pc: 201 op: STARTLINE (58)

        /** scanner.e:1510							return {STRING, NewStringSym(GetBitString())}*/
        // SubProg Scanner pc: 203 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 205 op: PROC (27)
        _15047 = _61GetBitString();
        // SubProg Scanner pc: 208 op: PROC (27)
        _15048 = _53NewStringSym(_15047);
        _15047 = NOVALUE;
        // SubProg Scanner pc: 212 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15048;
        _15049 = MAKE_SEQ(_1);
        _15048 = NOVALUE;
        // SubProg Scanner pc: 216 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
        DeRef(_yytext_26947);

// block var namespaces_26948
        DeRef(_namespaces_26948);

// block var d_26949
        DeRef(_d_26949);

// block var tok_26951
        DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
        DeRef(_name_26954);
        DeRef(_15031);
        _15031 = NOVALUE;
        DeRef(_15040);
        _15040 = NOVALUE;
        DeRef(_15046);
        _15046 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15043);
        _15043 = NOVALUE;
        return _15049;
        // SubProg Scanner pc: 220 op: NOPSWITCH (187)
    ;}L9: // addr: 221 pc: 220 sub: 26939 op: 187
    // SubProg Scanner pc: 221 op: NOP1 (159)
L8: // addr: 222 pc: 221 sub: 26939 op: 159
    // SubProg Scanner pc: 222 op: STARTLINE (58)

    /** scanner.e:1515				while id_char[ch] do*/
    // SubProg Scanner pc: 224 op: NOP2 (110)
    // SubProg Scanner pc: 226 op: NOPWHILE (158)
LA: // addr: 227 pc: 226 sub: 26939 op: 158
    // SubProg Scanner pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25211);
    _15050 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 233 op: WHILE (47)
    if (_15050 == 0)
    {
        _15050 = NOVALUE;
        goto LB; // [233] 248
    }
    else{
        _15050 = NOVALUE;
    }
    // SubProg Scanner pc: 236 op: STARTLINE (58)

    /** scanner.e:1516					ch = getch()*/
    // SubProg Scanner pc: 238 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 241 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 243 op: STARTLINE (58)

    /** scanner.e:1517				end while*/
    // SubProg Scanner pc: 245 op: ENDWHILE (22)
    goto LA; // [245] 227
    // SubProg Scanner pc: 247 op: NOP1 (159)
LB: // addr: 248 pc: 247 sub: 26939 op: 159
    // SubProg Scanner pc: 248 op: STARTLINE (58)

    /** scanner.e:1518				yytext = ThisLine[sp-1..bp-2]*/
    // SubProg Scanner pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 252 op: MINUS (10)
    _15052 = _sp_26943 - 1;
    if ((object)((uintptr_t)_15052 +(uintptr_t) HIGH_BITS) >= 0){
        _15052 = NewDouble((eudouble)_15052);
    }
    // SubProg Scanner pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 258 op: MINUS (10)
    _15053 = _49bp_48785 - 2;
    // SubProg Scanner pc: 262 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_yytext_26947;
    RHS_Slice(_49ThisLine_48781, _15052, _15053);
    // SubProg Scanner pc: 267 op: STARTLINE (58)

    /** scanner.e:1519				ungetch()*/
    // SubProg Scanner pc: 269 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 271 op: STARTLINE (58)

    /** scanner.e:1521				ch = getch()*/
    // SubProg Scanner pc: 273 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 276 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 278 op: STARTLINE (58)

    /** scanner.e:1522				while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 280 op: NOP2 (110)
    // SubProg Scanner pc: 282 op: NOPWHILE (158)
LC: // addr: 283 pc: 282 sub: 26939 op: 158
    // SubProg Scanner pc: 283 op: EQUALS (3)
    _15056 = (_ch_26941 == 32);
    // SubProg Scanner pc: 287 op: SC1_OR_IF (147)
    if (_15056 != 0) {
        goto LD; // [287] 300
    }
    // SubProg Scanner pc: 291 op: EQUALS (3)
    _15058 = (_ch_26941 == 9);
    // SubProg Scanner pc: 295 op: NOP1 (159)
    // SubProg Scanner pc: 296 op: WHILE (47)
    if (_15058 == 0)
    {
        DeRef(_15058);
        _15058 = NOVALUE;
        goto LE; // [296] 312
    }
    else{
        DeRef(_15058);
        _15058 = NOVALUE;
    }
    // SubProg Scanner pc: 299 op: NOP1 (159)
LD: // addr: 300 pc: 299 sub: 26939 op: 159
    // SubProg Scanner pc: 300 op: STARTLINE (58)

    /** scanner.e:1523					ch = getch()*/
    // SubProg Scanner pc: 302 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 305 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 307 op: STARTLINE (58)

    /** scanner.e:1524				end while*/
    // SubProg Scanner pc: 309 op: ENDWHILE (22)
    goto LC; // [309] 283
    // SubProg Scanner pc: 311 op: NOP1 (159)
LE: // addr: 312 pc: 311 sub: 26939 op: 159
    // SubProg Scanner pc: 312 op: STARTLINE (58)

    /** scanner.e:1525				integer is_namespace*/
    // SubProg Scanner pc: 314 op: STARTLINE (58)

    /** scanner.e:1527				if might_be_namespace then*/
    // SubProg Scanner pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 318 op: IF (20)
    if (_61might_be_namespace_26745 == 0)
    {
        goto LF; // [318] 361
    }
    else{
    }
    // SubProg Scanner pc: 321 op: STARTLINE (58)

    /** scanner.e:1528					tok = keyfind(yytext, -1, , -1 )*/
    // SubProg Scanner pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 325 op: PROC (27)
    RefDS(_yytext_26947);
    _31804 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 329 op: PROC (27)
    RefDS(_yytext_26947);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, -1, _5current_file_no_12477, -1, _31804);
    DeRef(_0);
    _31804 = NOVALUE;
    // SubProg Scanner pc: 337 op: STARTLINE (58)

    /** scanner.e:1529					is_namespace = tok[T_ID] = NAMESPACE*/
    // SubProg Scanner pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 341 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15061 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 347 op: EQUALS (3)
    if (IS_ATOM_INT(_15061)) {
        _is_namespace_27013 = (_15061 == 523);
    }
    else {
        _is_namespace_27013 = binary_op(EQUALS, _15061, 523);
    }
    _15061 = NOVALUE;
    // SubProg Scanner pc: 351 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_namespace_27013)) {
        _1 = (object)(DBL_PTR(_is_namespace_27013)->dbl);
        DeRefDS(_is_namespace_27013);
        _is_namespace_27013 = _1;
    }
    // SubProg Scanner pc: 353 op: STARTLINE (58)

    /** scanner.e:1530					might_be_namespace = 0*/
    // SubProg Scanner pc: 355 op: ASSIGN_I (113)
    _61might_be_namespace_26745 = 0;
    // SubProg Scanner pc: 358 op: ELSE (23)
    goto L10; // [358] 384
    // SubProg Scanner pc: 360 op: NOP1 (159)
LF: // addr: 361 pc: 360 sub: 26939 op: 159
    // SubProg Scanner pc: 361 op: STARTLINE (58)

    /** scanner.e:1532					is_namespace = ch = ':'*/
    // SubProg Scanner pc: 363 op: EQUALS (3)
    _is_namespace_27013 = (_ch_26941 == 58);
    // SubProg Scanner pc: 367 op: STARTLINE (58)

    /** scanner.e:1533					tok = keyfind(yytext, -1, , is_namespace )*/
    // SubProg Scanner pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 371 op: PROC (27)
    RefDS(_yytext_26947);
    _31803 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 375 op: PROC (27)
    RefDS(_yytext_26947);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, -1, _5current_file_no_12477, _is_namespace_27013, _31803);
    DeRef(_0);
    _31803 = NOVALUE;
    // SubProg Scanner pc: 383 op: NOP1 (159)
L10: // addr: 384 pc: 383 sub: 26939 op: 159
    // SubProg Scanner pc: 384 op: STARTLINE (58)

    /** scanner.e:1537				if not is_namespace then*/
    // SubProg Scanner pc: 386 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 388 op: NOT_IFW (108)
    if (_is_namespace_27013 != 0)
    goto L11; // [388] 396
    // SubProg Scanner pc: 391 op: STARTLINE (58)

    /** scanner.e:1538					ungetch()*/
    // SubProg Scanner pc: 393 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 395 op: NOP1 (159)
L11: // addr: 396 pc: 395 sub: 26939 op: 159
    // SubProg Scanner pc: 396 op: STARTLINE (58)

    /** scanner.e:1541				if is_namespace then*/
    // SubProg Scanner pc: 398 op: IF (20)
    if (_is_namespace_27013 == 0)
    {
        goto L12; // [398] 1119
    }
    else{
    }
    // SubProg Scanner pc: 401 op: STARTLINE (58)

    /** scanner.e:1543					namespaces = yytext*/
    // SubProg Scanner pc: 403 op: ASSIGN (18)
    RefDS(_yytext_26947);
    DeRef(_namespaces_26948);
    _namespaces_26948 = _yytext_26947;
    // SubProg Scanner pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 408 op: STARTLINE (58)

    /** scanner.e:1546					if tok[T_ID] = NAMESPACE then -- known namespace*/
    // SubProg Scanner pc: 410 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 414 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15066 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 420 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15066, 523)){
        _15066 = NOVALUE;
        goto L13; // [420] 974
    }
    _15066 = NOVALUE;
    // SubProg Scanner pc: 424 op: STARTLINE (58)

    /** scanner.e:1547						set_qualified_fwd( SymTab[tok[T_SYM]][S_OBJ] )*/
    // SubProg Scanner pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15068 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 434 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_15068)){
        _15069 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15068)->dbl));
    }
    else{
        _15069 = (object)*(((s1_ptr)_2)->base + _15068);
    }
    // SubProg Scanner pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 440 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15069);
    _15070 = (object)*(((s1_ptr)_2)->base + 1);
    _15069 = NOVALUE;
    // SubProg Scanner pc: 444 op: ASSIGN (18)
    Ref(_15070);
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27040);
    _fwd_inlined_set_qualified_fwd_at_441_27040 = _15070;
    _15070 = NOVALUE;
    // SubProg Scanner pc: 447 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_inlined_set_qualified_fwd_at_441_27040)) {
        _1 = (object)(DBL_PTR(_fwd_inlined_set_qualified_fwd_at_441_27040)->dbl);
        DeRefDS(_fwd_inlined_set_qualified_fwd_at_441_27040);
        _fwd_inlined_set_qualified_fwd_at_441_27040 = _1;
    }
    // SubProg Scanner pc: 449 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 451 op: ASSIGN_I (113)
    _61qualified_fwd_25235 = _fwd_inlined_set_qualified_fwd_at_441_27040;
    // SubProg Scanner pc: 454 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 456 op: ELSE (23)
    goto L14; // [456] 459
    // SubProg Scanner pc: 458 op: NOP1 (159)
L14: // addr: 459 pc: 458 sub: 26939 op: 159
    // SubProg Scanner pc: 459 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_qualified_fwd from Scanner @ 441

// block var fwd_inlined_set_qualified_fwd_at_441_27040
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27040);
    _fwd_inlined_set_qualified_fwd_at_441_27040 = NOVALUE;
    // SubProg Scanner pc: 461 op: STARTLINE (58)

    /** scanner.e:1550						ch = getch()*/
    // SubProg Scanner pc: 463 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 466 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 468 op: STARTLINE (58)

    /** scanner.e:1551						while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 470 op: NOP2 (110)
    // SubProg Scanner pc: 472 op: NOPWHILE (158)
L15: // addr: 473 pc: 472 sub: 26939 op: 158
    // SubProg Scanner pc: 473 op: EQUALS (3)
    _15072 = (_ch_26941 == 32);
    // SubProg Scanner pc: 477 op: SC1_OR_IF (147)
    if (_15072 != 0) {
        goto L16; // [477] 490
    }
    // SubProg Scanner pc: 481 op: EQUALS (3)
    _15074 = (_ch_26941 == 9);
    // SubProg Scanner pc: 485 op: NOP1 (159)
    // SubProg Scanner pc: 486 op: WHILE (47)
    if (_15074 == 0)
    {
        DeRef(_15074);
        _15074 = NOVALUE;
        goto L17; // [486] 502
    }
    else{
        DeRef(_15074);
        _15074 = NOVALUE;
    }
    // SubProg Scanner pc: 489 op: NOP1 (159)
L16: // addr: 490 pc: 489 sub: 26939 op: 159
    // SubProg Scanner pc: 490 op: STARTLINE (58)

    /** scanner.e:1552							ch = getch()*/
    // SubProg Scanner pc: 492 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 495 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 497 op: STARTLINE (58)

    /** scanner.e:1553						end while*/
    // SubProg Scanner pc: 499 op: ENDWHILE (22)
    goto L15; // [499] 473
    // SubProg Scanner pc: 501 op: NOP1 (159)
L17: // addr: 502 pc: 501 sub: 26939 op: 159
    // SubProg Scanner pc: 502 op: STARTLINE (58)

    /** scanner.e:1554						yytext = ""*/
    // SubProg Scanner pc: 504 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26947);
    _yytext_26947 = _5;
    // SubProg Scanner pc: 507 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 509 op: STARTLINE (58)

    /** scanner.e:1555						if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 513 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15076 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 517 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 519 op: EQUALS (3)
    _15077 = (_15076 == -2);
    _15076 = NOVALUE;
    // SubProg Scanner pc: 523 op: SC1_OR_IF (147)
    if (_15077 != 0) {
        goto L18; // [523] 536
    }
    // SubProg Scanner pc: 527 op: EQUALS (3)
    _15079 = (_ch_26941 == 95);
    // SubProg Scanner pc: 531 op: NOP1 (159)
    // SubProg Scanner pc: 532 op: IF (20)
    if (_15079 == 0)
    {
        DeRef(_15079);
        _15079 = NOVALUE;
        goto L19; // [532] 589
    }
    else{
        DeRef(_15079);
        _15079 = NOVALUE;
    }
    // SubProg Scanner pc: 535 op: NOP1 (159)
L18: // addr: 536 pc: 535 sub: 26939 op: 159
    // SubProg Scanner pc: 536 op: STARTLINE (58)

    /** scanner.e:1556							yytext &= ch*/
    // SubProg Scanner pc: 538 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 542 op: STARTLINE (58)

    /** scanner.e:1557							ch = getch()*/
    // SubProg Scanner pc: 544 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 547 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 549 op: STARTLINE (58)

    /** scanner.e:1558							while id_char[ch] = TRUE do*/
    // SubProg Scanner pc: 551 op: NOP2 (110)
    // SubProg Scanner pc: 553 op: NOPWHILE (158)
L1A: // addr: 554 pc: 553 sub: 26939 op: 158
    // SubProg Scanner pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 556 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25211);
    _15082 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 562 op: EQUALS_IFW (104)
    if (_15082 != _6TRUE_365)
    goto L1B; // [562] 584
    // SubProg Scanner pc: 566 op: STARTLINE (58)

    /** scanner.e:1559								yytext &= ch*/
    // SubProg Scanner pc: 568 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 572 op: STARTLINE (58)

    /** scanner.e:1560								ch = getch()*/
    // SubProg Scanner pc: 574 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 577 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 579 op: STARTLINE (58)

    /** scanner.e:1561							end while*/
    // SubProg Scanner pc: 581 op: ENDWHILE (22)
    goto L1A; // [581] 554
    // SubProg Scanner pc: 583 op: NOP1 (159)
L1B: // addr: 584 pc: 583 sub: 26939 op: 159
    // SubProg Scanner pc: 584 op: STARTLINE (58)

    /** scanner.e:1562							ungetch()*/
    // SubProg Scanner pc: 586 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 588 op: NOP1 (159)
L19: // addr: 589 pc: 588 sub: 26939 op: 159
    // SubProg Scanner pc: 589 op: STARTLINE (58)

    /** scanner.e:1565						if length(yytext) = 0 then*/
    // SubProg Scanner pc: 591 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26947)){
            _15086 = SEQ_PTR(_yytext_26947)->length;
    }
    else {
        _15086 = 1;
    }
    // SubProg Scanner pc: 594 op: EQUALS_IFW_I (121)
    if (_15086 != 0)
    goto L1C; // [594] 606
    // SubProg Scanner pc: 598 op: STARTLINE (58)

    /** scanner.e:1566							CompileErr(32)*/
    // SubProg Scanner pc: 600 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(32, _21958, 0);
    // SubProg Scanner pc: 605 op: NOP1 (159)
L1C: // addr: 606 pc: 605 sub: 26939 op: 159
    // SubProg Scanner pc: 606 op: STARTLINE (58)

    /** scanner.e:1572					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 612 op: EQUALS_IFW (104)
    if (_5Parser_mode_12583 != 1)
    goto L1D; // [612] 773
    // SubProg Scanner pc: 616 op: STARTLINE (58)

    /** scanner.e:1573			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 618 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 620 op: APPEND (35)
    RefDS(_yytext_26947);
    Append(&_5Recorded_12584, _5Recorded_12584, _yytext_26947);
    // SubProg Scanner pc: 624 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 626 op: STARTLINE (58)

    /** scanner.e:1574			                Ns_recorded = append(Ns_recorded,namespaces)*/
    // SubProg Scanner pc: 628 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 630 op: APPEND (35)
    RefDS(_namespaces_26948);
    Append(&_5Ns_recorded_12585, _5Ns_recorded_12585, _namespaces_26948);
    // SubProg Scanner pc: 634 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 636 op: STARTLINE (58)

    /** scanner.e:1575			                Ns_recorded_sym &= tok[T_SYM]*/
    // SubProg Scanner pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 642 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15091 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 646 op: CONCAT (15)
    if (IS_SEQUENCE(_5Ns_recorded_sym_12587) && IS_ATOM(_15091)) {
        Ref(_15091);
        Append(&_5Ns_recorded_sym_12587, _5Ns_recorded_sym_12587, _15091);
    }
    else if (IS_ATOM(_5Ns_recorded_sym_12587) && IS_SEQUENCE(_15091)) {
    }
    else {
        Concat((object_ptr)&_5Ns_recorded_sym_12587, _5Ns_recorded_sym_12587, _15091);
    }
    _15091 = NOVALUE;
    // SubProg Scanner pc: 650 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 652 op: STARTLINE (58)

    /** scanner.e:1576			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 656 op: ASSIGN (18)
    _prev_Nne_26944 = _53No_new_entry_47523;
    // SubProg Scanner pc: 659 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 661 op: STARTLINE (58)

    /** scanner.e:1577							No_new_entry = 1*/
    // SubProg Scanner pc: 663 op: ASSIGN (18)
    _53No_new_entry_47523 = 1;
    // SubProg Scanner pc: 666 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 668 op: STARTLINE (58)

    /** scanner.e:1578							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 670 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 674 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15093 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_15093)){
        _15094 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15093)->dbl));
    }
    else{
        _15094 = (object)*(((s1_ptr)_2)->base + _15093);
    }
    // SubProg Scanner pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15094);
    _15095 = (object)*(((s1_ptr)_2)->base + 1);
    _15094 = NOVALUE;
    // SubProg Scanner pc: 688 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 690 op: PROC (27)
    RefDS(_yytext_26947);
    _31802 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 694 op: PROC (27)
    RefDS(_yytext_26947);
    Ref(_15095);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, _15095, _5current_file_no_12477, 0, _31802);
    DeRef(_0);
    _15095 = NOVALUE;
    _31802 = NOVALUE;
    // SubProg Scanner pc: 702 op: STARTLINE (58)

    /** scanner.e:1579							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 704 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 706 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15097 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 710 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 712 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15097, 509)){
        _15097 = NOVALUE;
        goto L1E; // [712] 729
    }
    _15097 = NOVALUE;
    // SubProg Scanner pc: 716 op: STARTLINE (58)

    /** scanner.e:1580								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 720 op: CONCAT (15)
    Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, 0);
    // SubProg Scanner pc: 724 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 726 op: ELSE (23)
    goto L1F; // [726] 746
    // SubProg Scanner pc: 728 op: NOP1 (159)
L1E: // addr: 729 pc: 728 sub: 26939 op: 159
    // SubProg Scanner pc: 729 op: STARTLINE (58)

    /** scanner.e:1582								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 731 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 735 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15100 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 739 op: CONCAT (15)
    if (IS_SEQUENCE(_5Recorded_sym_12586) && IS_ATOM(_15100)) {
        Ref(_15100);
        Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, _15100);
    }
    else if (IS_ATOM(_5Recorded_sym_12586) && IS_SEQUENCE(_15100)) {
    }
    else {
        Concat((object_ptr)&_5Recorded_sym_12586, _5Recorded_sym_12586, _15100);
    }
    _15100 = NOVALUE;
    // SubProg Scanner pc: 743 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 745 op: NOP1 (159)
L1F: // addr: 746 pc: 745 sub: 26939 op: 159
    // SubProg Scanner pc: 746 op: STARTLINE (58)

    /** scanner.e:1584			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 748 op: ASSIGN (18)
    _53No_new_entry_47523 = _prev_Nne_26944;
    // SubProg Scanner pc: 751 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 753 op: STARTLINE (58)

    /** scanner.e:1585			                return {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 759 op: LENGTH (42)
    if (IS_SEQUENCE(_5Recorded_12584)){
            _15102 = SEQ_PTR(_5Recorded_12584)->length;
    }
    else {
        _15102 = 1;
    }
    // SubProg Scanner pc: 762 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15102;
    _15103 = MAKE_SEQ(_1);
    _15102 = NOVALUE;
    // SubProg Scanner pc: 766 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_27013

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15082 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15103;
    // SubProg Scanner pc: 770 op: ELSE (23)
    goto L20; // [770] 915
    // SubProg Scanner pc: 772 op: NOP1 (159)
L1D: // addr: 773 pc: 772 sub: 26939 op: 159
    // SubProg Scanner pc: 773 op: STARTLINE (58)

    /** scanner.e:1587							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 779 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15104 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 783 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_15104)){
        _15105 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15104)->dbl));
    }
    else{
        _15105 = (object)*(((s1_ptr)_2)->base + _15104);
    }
    // SubProg Scanner pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 789 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15105);
    _15106 = (object)*(((s1_ptr)_2)->base + 1);
    _15105 = NOVALUE;
    // SubProg Scanner pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 795 op: PROC (27)
    RefDS(_yytext_26947);
    _31801 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 799 op: PROC (27)
    RefDS(_yytext_26947);
    Ref(_15106);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, _15106, _5current_file_no_12477, 0, _31801);
    DeRef(_0);
    _15106 = NOVALUE;
    _31801 = NOVALUE;
    // SubProg Scanner pc: 807 op: STARTLINE (58)

    /** scanner.e:1589							if tok[T_ID] = VARIABLE then*/
    // SubProg Scanner pc: 809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 811 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15108 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 817 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15108, -100)){
        _15108 = NOVALUE;
        goto L21; // [817] 834
    }
    _15108 = NOVALUE;
    // SubProg Scanner pc: 821 op: STARTLINE (58)

    /** scanner.e:1590								tok[T_ID] = QUALIFIED_VARIABLE*/
    // SubProg Scanner pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 827 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26951);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26951 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 512;
    DeRef(_1);
    // SubProg Scanner pc: 831 op: ELSE (23)
    goto L22; // [831] 914
    // SubProg Scanner pc: 833 op: NOP1 (159)
L21: // addr: 834 pc: 833 sub: 26939 op: 159
    // SubProg Scanner pc: 834 op: STARTLINE (58)

    /** scanner.e:1591							elsif tok[T_ID] = FUNC then*/
    // SubProg Scanner pc: 836 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 838 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15110 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 844 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15110, 501)){
        _15110 = NOVALUE;
        goto L23; // [844] 861
    }
    _15110 = NOVALUE;
    // SubProg Scanner pc: 848 op: STARTLINE (58)

    /** scanner.e:1592								tok[T_ID] = QUALIFIED_FUNC*/
    // SubProg Scanner pc: 850 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 852 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 854 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26951);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26951 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 520;
    DeRef(_1);
    // SubProg Scanner pc: 858 op: ELSE (23)
    goto L22; // [858] 914
    // SubProg Scanner pc: 860 op: NOP1 (159)
L23: // addr: 861 pc: 860 sub: 26939 op: 159
    // SubProg Scanner pc: 861 op: STARTLINE (58)

    /** scanner.e:1593							elsif tok[T_ID] = PROC then*/
    // SubProg Scanner pc: 863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 865 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15112 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 869 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 871 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15112, 27)){
        _15112 = NOVALUE;
        goto L24; // [871] 888
    }
    _15112 = NOVALUE;
    // SubProg Scanner pc: 875 op: STARTLINE (58)

    /** scanner.e:1594								tok[T_ID] = QUALIFIED_PROC*/
    // SubProg Scanner pc: 877 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 881 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26951);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26951 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 521;
    DeRef(_1);
    // SubProg Scanner pc: 885 op: ELSE (23)
    goto L22; // [885] 914
    // SubProg Scanner pc: 887 op: NOP1 (159)
L24: // addr: 888 pc: 887 sub: 26939 op: 159
    // SubProg Scanner pc: 888 op: STARTLINE (58)

    /** scanner.e:1595							elsif tok[T_ID] = TYPE then*/
    // SubProg Scanner pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 892 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15114 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 896 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 898 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15114, 504)){
        _15114 = NOVALUE;
        goto L25; // [898] 913
    }
    _15114 = NOVALUE;
    // SubProg Scanner pc: 902 op: STARTLINE (58)

    /** scanner.e:1596								tok[T_ID] = QUALIFIED_TYPE*/
    // SubProg Scanner pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 906 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 908 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26951);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26951 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 522;
    DeRef(_1);
    // SubProg Scanner pc: 912 op: NOP1 (159)
L25: // addr: 913 pc: 912 sub: 26939 op: 159
    // SubProg Scanner pc: 913 op: NOP1 (159)
L22: // addr: 914 pc: 913 sub: 26939 op: 159
    // SubProg Scanner pc: 914 op: NOP1 (159)
L20: // addr: 915 pc: 914 sub: 26939 op: 159
    // SubProg Scanner pc: 915 op: STARTLINE (58)

    /** scanner.e:1601						if atom( tok[T_SYM] ) and  SymTab[tok[T_SYM]][S_SCOPE] != SC_UNDEFINED then*/
    // SubProg Scanner pc: 917 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 919 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15116 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 923 op: IS_AN_ATOM (67)
    _15117 = IS_ATOM(_15116);
    _15116 = NOVALUE;
    // SubProg Scanner pc: 926 op: SC1_AND_IF (146)
    if (_15117 == 0) {
        goto L26; // [926] 1269
    }
    // SubProg Scanner pc: 930 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15119 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_15119)){
        _15120 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15119)->dbl));
    }
    else{
        _15120 = (object)*(((s1_ptr)_2)->base + _15119);
    }
    // SubProg Scanner pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15120);
    _15121 = (object)*(((s1_ptr)_2)->base + 4);
    _15120 = NOVALUE;
    // SubProg Scanner pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 950 op: NOTEQ (4)
    if (IS_ATOM_INT(_15121)) {
        _15122 = (_15121 != 9);
    }
    else {
        _15122 = binary_op(NOTEQ, _15121, 9);
    }
    _15121 = NOVALUE;
    // SubProg Scanner pc: 954 op: NOP1 (159)
    // SubProg Scanner pc: 955 op: IF (20)
    if (_15122 == 0) {
        DeRef(_15122);
        _15122 = NOVALUE;
        goto L26; // [955] 1269
    }
    else {
        if (!IS_ATOM_INT(_15122) && DBL_PTR(_15122)->dbl == 0.0){
            DeRef(_15122);
            _15122 = NOVALUE;
            goto L26; // [955] 1269
        }
        DeRef(_15122);
        _15122 = NOVALUE;
    }
    DeRef(_15122);
    _15122 = NOVALUE;
    // SubProg Scanner pc: 958 op: STARTLINE (58)

    /** scanner.e:1602							set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 960 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 962 op: ASSIGN_I (113)
    _61qualified_fwd_25235 = -1;
    // SubProg Scanner pc: 965 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 967 op: ELSE (23)
    goto L26; // [967] 1269
    // SubProg Scanner pc: 969 op: NOP1 (159)
    // SubProg Scanner pc: 970 op: NOP1 (159)
    // SubProg Scanner pc: 971 op: ELSE (23)
    goto L26; // [971] 1269
    // SubProg Scanner pc: 973 op: NOP1 (159)
L13: // addr: 974 pc: 973 sub: 26939 op: 159
    // SubProg Scanner pc: 974 op: STARTLINE (58)

    /** scanner.e:1606						ungetch()*/
    // SubProg Scanner pc: 976 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 978 op: STARTLINE (58)

    /** scanner.e:1607					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 980 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 982 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 984 op: EQUALS_IFW (104)
    if (_5Parser_mode_12583 != 1)
    goto L26; // [984] 1269
    // SubProg Scanner pc: 988 op: STARTLINE (58)

    /** scanner.e:1608			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 990 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 992 op: CONCAT (15)
    Append(&_5Ns_recorded_12585, _5Ns_recorded_12585, 0);
    // SubProg Scanner pc: 996 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 998 op: STARTLINE (58)

    /** scanner.e:1609			                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1000 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1002 op: CONCAT (15)
    Append(&_5Ns_recorded_sym_12587, _5Ns_recorded_sym_12587, 0);
    // SubProg Scanner pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1008 op: STARTLINE (58)

    /** scanner.e:1610			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 1010 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1012 op: APPEND (35)
    RefDS(_yytext_26947);
    Append(&_5Recorded_12584, _5Recorded_12584, _yytext_26947);
    // SubProg Scanner pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1018 op: STARTLINE (58)

    /** scanner.e:1611			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1022 op: ASSIGN (18)
    _prev_Nne_26944 = _53No_new_entry_47523;
    // SubProg Scanner pc: 1025 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1027 op: STARTLINE (58)

    /** scanner.e:1612							No_new_entry = 1*/
    // SubProg Scanner pc: 1029 op: ASSIGN (18)
    _53No_new_entry_47523 = 1;
    // SubProg Scanner pc: 1032 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1034 op: STARTLINE (58)

    /** scanner.e:1613							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1038 op: PROC (27)
    RefDS(_yytext_26947);
    _31800 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 1042 op: PROC (27)
    RefDS(_yytext_26947);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, -1, _5current_file_no_12477, 0, _31800);
    DeRef(_0);
    _31800 = NOVALUE;
    // SubProg Scanner pc: 1050 op: STARTLINE (58)

    /** scanner.e:1614							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1052 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1054 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15128 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1058 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1060 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15128, 509)){
        _15128 = NOVALUE;
        goto L27; // [1060] 1077
    }
    _15128 = NOVALUE;
    // SubProg Scanner pc: 1064 op: STARTLINE (58)

    /** scanner.e:1615								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1066 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1068 op: CONCAT (15)
    Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, 0);
    // SubProg Scanner pc: 1072 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1074 op: ELSE (23)
    goto L28; // [1074] 1094
    // SubProg Scanner pc: 1076 op: NOP1 (159)
L27: // addr: 1077 pc: 1076 sub: 26939 op: 159
    // SubProg Scanner pc: 1077 op: STARTLINE (58)

    /** scanner.e:1617								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1079 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1081 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1083 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15131 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1087 op: CONCAT (15)
    if (IS_SEQUENCE(_5Recorded_sym_12586) && IS_ATOM(_15131)) {
        Ref(_15131);
        Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, _15131);
    }
    else if (IS_ATOM(_5Recorded_sym_12586) && IS_SEQUENCE(_15131)) {
    }
    else {
        Concat((object_ptr)&_5Recorded_sym_12586, _5Recorded_sym_12586, _15131);
    }
    _15131 = NOVALUE;
    // SubProg Scanner pc: 1091 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1093 op: NOP1 (159)
L28: // addr: 1094 pc: 1093 sub: 26939 op: 159
    // SubProg Scanner pc: 1094 op: STARTLINE (58)

    /** scanner.e:1619			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1096 op: ASSIGN (18)
    _53No_new_entry_47523 = _prev_Nne_26944;
    // SubProg Scanner pc: 1099 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1101 op: STARTLINE (58)

    /** scanner.e:1620			                tok = {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 1103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1105 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1107 op: LENGTH (42)
    if (IS_SEQUENCE(_5Recorded_12584)){
            _15133 = SEQ_PTR(_5Recorded_12584)->length;
    }
    else {
        _15133 = 1;
    }
    // SubProg Scanner pc: 1110 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26951);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15133;
    _tok_26951 = MAKE_SEQ(_1);
    _15133 = NOVALUE;
    // SubProg Scanner pc: 1114 op: NOP1 (159)
    // SubProg Scanner pc: 1115 op: NOP1 (159)
    // SubProg Scanner pc: 1116 op: ELSE (23)
    goto L26; // [1116] 1269
    // SubProg Scanner pc: 1118 op: NOP1 (159)
L12: // addr: 1119 pc: 1118 sub: 26939 op: 159
    // SubProg Scanner pc: 1119 op: STARTLINE (58)

    /** scanner.e:1624					set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 1121 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 1123 op: ASSIGN_I (113)
    _61qualified_fwd_25235 = -1;
    // SubProg Scanner pc: 1126 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 1128 op: ELSE (23)
    goto L29; // [1128] 1131
    // SubProg Scanner pc: 1130 op: NOP1 (159)
L29: // addr: 1131 pc: 1130 sub: 26939 op: 159
    // SubProg Scanner pc: 1131 op: STARTLINE (58)

    /** scanner.e:1625				    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 1133 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1137 op: EQUALS_IFW (104)
    if (_5Parser_mode_12583 != 1)
    goto L2A; // [1137] 1268
    // SubProg Scanner pc: 1141 op: STARTLINE (58)

    /** scanner.e:1626		                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1145 op: CONCAT (15)
    Append(&_5Ns_recorded_sym_12587, _5Ns_recorded_sym_12587, 0);
    // SubProg Scanner pc: 1149 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1151 op: STARTLINE (58)

    /** scanner.e:1627							Recorded = append(Recorded, yytext)*/
    // SubProg Scanner pc: 1153 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1155 op: APPEND (35)
    RefDS(_yytext_26947);
    Append(&_5Recorded_12584, _5Recorded_12584, _yytext_26947);
    // SubProg Scanner pc: 1159 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1161 op: STARTLINE (58)

    /** scanner.e:1628			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1165 op: CONCAT (15)
    Append(&_5Ns_recorded_12585, _5Ns_recorded_12585, 0);
    // SubProg Scanner pc: 1169 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1171 op: STARTLINE (58)

    /** scanner.e:1629			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1173 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1175 op: ASSIGN (18)
    _prev_Nne_26944 = _53No_new_entry_47523;
    // SubProg Scanner pc: 1178 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1180 op: STARTLINE (58)

    /** scanner.e:1630							No_new_entry = 1*/
    // SubProg Scanner pc: 1182 op: ASSIGN (18)
    _53No_new_entry_47523 = 1;
    // SubProg Scanner pc: 1185 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1187 op: STARTLINE (58)

    /** scanner.e:1631							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1189 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1191 op: PROC (27)
    RefDS(_yytext_26947);
    _31799 = _53hashfn(_yytext_26947);
    // SubProg Scanner pc: 1195 op: PROC (27)
    RefDS(_yytext_26947);
    _0 = _tok_26951;
    _tok_26951 = _53keyfind(_yytext_26947, -1, _5current_file_no_12477, 0, _31799);
    DeRef(_0);
    _31799 = NOVALUE;
    // SubProg Scanner pc: 1203 op: STARTLINE (58)

    /** scanner.e:1632							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1205 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15140 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1213 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15140, 509)){
        _15140 = NOVALUE;
        goto L2B; // [1213] 1230
    }
    _15140 = NOVALUE;
    // SubProg Scanner pc: 1217 op: STARTLINE (58)

    /** scanner.e:1633								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1219 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1221 op: CONCAT (15)
    Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, 0);
    // SubProg Scanner pc: 1225 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1227 op: ELSE (23)
    goto L2C; // [1227] 1247
    // SubProg Scanner pc: 1229 op: NOP1 (159)
L2B: // addr: 1230 pc: 1229 sub: 26939 op: 159
    // SubProg Scanner pc: 1230 op: STARTLINE (58)

    /** scanner.e:1635								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1232 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1234 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1236 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26951);
    _15143 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1240 op: CONCAT (15)
    if (IS_SEQUENCE(_5Recorded_sym_12586) && IS_ATOM(_15143)) {
        Ref(_15143);
        Append(&_5Recorded_sym_12586, _5Recorded_sym_12586, _15143);
    }
    else if (IS_ATOM(_5Recorded_sym_12586) && IS_SEQUENCE(_15143)) {
    }
    else {
        Concat((object_ptr)&_5Recorded_sym_12586, _5Recorded_sym_12586, _15143);
    }
    _15143 = NOVALUE;
    // SubProg Scanner pc: 1244 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1246 op: NOP1 (159)
L2C: // addr: 1247 pc: 1246 sub: 26939 op: 159
    // SubProg Scanner pc: 1247 op: STARTLINE (58)

    /** scanner.e:1637			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1249 op: ASSIGN (18)
    _53No_new_entry_47523 = _prev_Nne_26944;
    // SubProg Scanner pc: 1252 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1254 op: STARTLINE (58)

    /** scanner.e:1638		                tok = {RECORDED, length(Recorded)}*/
    // SubProg Scanner pc: 1256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1258 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1260 op: LENGTH (42)
    if (IS_SEQUENCE(_5Recorded_12584)){
            _15145 = SEQ_PTR(_5Recorded_12584)->length;
    }
    else {
        _15145 = 1;
    }
    // SubProg Scanner pc: 1263 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26951);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15145;
    _tok_26951 = MAKE_SEQ(_1);
    _15145 = NOVALUE;
    // SubProg Scanner pc: 1267 op: NOP1 (159)
L2A: // addr: 1268 pc: 1267 sub: 26939 op: 159
    // SubProg Scanner pc: 1268 op: NOP1 (159)
L26: // addr: 1269 pc: 1268 sub: 26939 op: 159
    // SubProg Scanner pc: 1269 op: STARTLINE (58)

    /** scanner.e:1642				return tok*/
    // SubProg Scanner pc: 1271 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1273 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_27013

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15082 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _tok_26951;
    // SubProg Scanner pc: 1277 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var is_namespace_27013
    // SubProg Scanner pc: 1279 op: ELSE (23)
    goto L1; // [1279] 10
    // SubProg Scanner pc: 1281 op: NOP1 (159)
L7: // addr: 1282 pc: 1281 sub: 26939 op: 159
    // SubProg Scanner pc: 1282 op: STARTLINE (58)

    /** scanner.e:1644			elsif class < ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1284 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1286 op: LESS_IFW (102)
    if (_class_26953 >= -20)
    goto L2D; // [1286] 1303
    // SubProg Scanner pc: 1290 op: STARTLINE (58)

    /** scanner.e:1645				return {class, 0}  -- brackets, punctuation, eof, illegal char etc.*/
    // SubProg Scanner pc: 1292 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26953;
    ((intptr_t *)_2)[2] = 0;
    _15148 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1296 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15082 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15148;
    // SubProg Scanner pc: 1300 op: ELSE (23)
    goto L1; // [1300] 10
    // SubProg Scanner pc: 1302 op: NOP1 (159)
L2D: // addr: 1303 pc: 1302 sub: 26939 op: 159
    // SubProg Scanner pc: 1303 op: STARTLINE (58)

    /** scanner.e:1647			elsif class = ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1305 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1307 op: EQUALS_IFW (104)
    if (_class_26953 != -20)
    goto L2E; // [1307] 1321
    // SubProg Scanner pc: 1311 op: STARTLINE (58)

    /** scanner.e:1648				CompileErr(101)*/
    // SubProg Scanner pc: 1313 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(101, _21958, 0);
    // SubProg Scanner pc: 1318 op: ELSE (23)
    goto L1; // [1318] 10
    // SubProg Scanner pc: 1320 op: NOP1 (159)
L2E: // addr: 1321 pc: 1320 sub: 26939 op: 159
    // SubProg Scanner pc: 1321 op: STARTLINE (58)

    /** scanner.e:1650			elsif class = NEWLINE then*/
    // SubProg Scanner pc: 1323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1325 op: EQUALS_IFW (104)
    if (_class_26953 != -6)
    goto L2F; // [1325] 1351
    // SubProg Scanner pc: 1329 op: STARTLINE (58)

    /** scanner.e:1651				if start_include then*/
    // SubProg Scanner pc: 1331 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1333 op: IF (20)
    if (_61start_include_25203 == 0)
    {
        goto L30; // [1333] 1343
    }
    else{
    }
    // SubProg Scanner pc: 1336 op: STARTLINE (58)

    /** scanner.e:1652					IncludePush()*/
    // SubProg Scanner pc: 1338 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 1340 op: ELSE (23)
    goto L1; // [1340] 10
    // SubProg Scanner pc: 1342 op: NOP1 (159)
L30: // addr: 1343 pc: 1342 sub: 26939 op: 159
    // SubProg Scanner pc: 1343 op: STARTLINE (58)

    /** scanner.e:1654					read_line()*/
    // SubProg Scanner pc: 1345 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 1347 op: NOP1 (159)
    // SubProg Scanner pc: 1348 op: ELSE (23)
    goto L1; // [1348] 10
    // SubProg Scanner pc: 1350 op: NOP1 (159)
L2F: // addr: 1351 pc: 1350 sub: 26939 op: 159
    // SubProg Scanner pc: 1351 op: STARTLINE (58)

    /** scanner.e:1658			elsif class = EQUALS then*/
    // SubProg Scanner pc: 1353 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1355 op: EQUALS_IFW (104)
    if (_class_26953 != 3)
    goto L31; // [1355] 1372
    // SubProg Scanner pc: 1359 op: STARTLINE (58)

    /** scanner.e:1659				return {class, 0}*/
    // SubProg Scanner pc: 1361 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26953;
    ((intptr_t *)_2)[2] = 0;
    _15152 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1365 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15082 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15152;
    // SubProg Scanner pc: 1369 op: ELSE (23)
    goto L1; // [1369] 10
    // SubProg Scanner pc: 1371 op: NOP1 (159)
L31: // addr: 1372 pc: 1371 sub: 26939 op: 159
    // SubProg Scanner pc: 1372 op: STARTLINE (58)

    /** scanner.e:1661			elsif class = DOT or class = DIGIT then*/
    // SubProg Scanner pc: 1374 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1376 op: EQUALS (3)
    _15153 = (_class_26953 == -3);
    // SubProg Scanner pc: 1380 op: SC1_OR_IF (147)
    if (_15153 != 0) {
        goto L32; // [1380] 1395
    }
    // SubProg Scanner pc: 1384 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1386 op: EQUALS (3)
    _15155 = (_class_26953 == -7);
    // SubProg Scanner pc: 1390 op: NOP1 (159)
    // SubProg Scanner pc: 1391 op: IF (20)
    if (_15155 == 0)
    {
        DeRef(_15155);
        _15155 = NOVALUE;
        goto L33; // [1391] 2177
    }
    else{
        DeRef(_15155);
        _15155 = NOVALUE;
    }
    // SubProg Scanner pc: 1394 op: NOP1 (159)
L32: // addr: 1395 pc: 1394 sub: 26939 op: 159
    // SubProg Scanner pc: 1395 op: STARTLINE (58)

    /** scanner.e:1662				integer basetype*/
    // SubProg Scanner pc: 1397 op: STARTLINE (58)

    /** scanner.e:1663				if class = DOT then*/
    // SubProg Scanner pc: 1399 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1401 op: EQUALS_IFW (104)
    if (_class_26953 != -3)
    goto L34; // [1401] 1435
    // SubProg Scanner pc: 1405 op: STARTLINE (58)

    /** scanner.e:1664					if getch() = '.' then*/
    // SubProg Scanner pc: 1407 op: PROC (27)
    _15157 = _61getch();
    // SubProg Scanner pc: 1410 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15157, 46)){
        DeRef(_15157);
        _15157 = NOVALUE;
        goto L35; // [1410] 1429
    }
    DeRef(_15157);
    _15157 = NOVALUE;
    // SubProg Scanner pc: 1414 op: STARTLINE (58)

    /** scanner.e:1665						return {SLICE, 0}*/
    // SubProg Scanner pc: 1416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1418 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 513;
    ((intptr_t *)_2)[2] = 0;
    _15159 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1422 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27247

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15159;
    // SubProg Scanner pc: 1426 op: ELSE (23)
    goto L36; // [1426] 1434
    // SubProg Scanner pc: 1428 op: NOP1 (159)
L35: // addr: 1429 pc: 1428 sub: 26939 op: 159
    // SubProg Scanner pc: 1429 op: STARTLINE (58)

    /** scanner.e:1667						ungetch()*/
    // SubProg Scanner pc: 1431 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1433 op: NOP1 (159)
L36: // addr: 1434 pc: 1433 sub: 26939 op: 159
    // SubProg Scanner pc: 1434 op: NOP1 (159)
L34: // addr: 1435 pc: 1434 sub: 26939 op: 159
    // SubProg Scanner pc: 1435 op: STARTLINE (58)

    /** scanner.e:1671				yytext = {ch}*/
    // SubProg Scanner pc: 1437 op: RIGHT_BRACE_N (31)
    _0 = _yytext_26947;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26941;
    _yytext_26947 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg Scanner pc: 1441 op: STARTLINE (58)

    /** scanner.e:1672				is_int = (ch != '.')*/
    // SubProg Scanner pc: 1443 op: NOTEQ (4)
    _is_int_26952 = (_ch_26941 != 46);
    // SubProg Scanner pc: 1447 op: STARTLINE (58)

    /** scanner.e:1673				basetype = -1 -- default is decimal*/
    // SubProg Scanner pc: 1449 op: ASSIGN_I (113)
    _basetype_27247 = -1;
    // SubProg Scanner pc: 1452 op: STARTLINE (58)

    /** scanner.e:1674				while 1 with entry do*/
    // SubProg Scanner pc: 1454 op: ELSE (23)
    goto L37; // [1454] 1645
    // SubProg Scanner pc: 1456 op: NOPWHILE (158)
L38: // addr: 1457 pc: 1456 sub: 26939 op: 158
    // SubProg Scanner pc: 1457 op: STARTLINE (58)

    /** scanner.e:1675					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1459 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1461 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15162 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1465 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1467 op: EQUALS_IFW (104)
    if (_15162 != -7)
    goto L39; // [1467] 1480
    // SubProg Scanner pc: 1471 op: STARTLINE (58)

    /** scanner.e:1676						yytext &= ch*/
    // SubProg Scanner pc: 1473 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1477 op: ELSE (23)
    goto L3A; // [1477] 1642
    // SubProg Scanner pc: 1479 op: NOP1 (159)
L39: // addr: 1480 pc: 1479 sub: 26939 op: 159
    // SubProg Scanner pc: 1480 op: STARTLINE (58)

    /** scanner.e:1678					elsif equal(yytext, "0") then*/
    // SubProg Scanner pc: 1482 op: EQUAL (153)
    if (_yytext_26947 == _11957)
    _15165 = 1;
    else if (IS_ATOM_INT(_yytext_26947) && IS_ATOM_INT(_11957))
    _15165 = 0;
    else
    _15165 = (compare(_yytext_26947, _11957) == 0);
    // SubProg Scanner pc: 1486 op: IF (20)
    if (_15165 == 0)
    {
        _15165 = NOVALUE;
        goto L3B; // [1486] 1581
    }
    else{
        _15165 = NOVALUE;
    }
    // SubProg Scanner pc: 1489 op: STARTLINE (58)

    /** scanner.e:1679						basetype = find(ch, nbasecode)*/
    // SubProg Scanner pc: 1491 op: FIND_FROM (176)
    _basetype_27247 = find_from(_ch_26941, _61nbasecode_26749, 1);
    // SubProg Scanner pc: 1496 op: STARTLINE (58)

    /** scanner.e:1680						if basetype > length(nbase) then*/
    // SubProg Scanner pc: 1498 op: LENGTH (42)
    if (IS_SEQUENCE(_61nbase_26748)){
            _15167 = SEQ_PTR(_61nbase_26748)->length;
    }
    else {
        _15167 = 1;
    }
    // SubProg Scanner pc: 1501 op: GREATER_IFW_I (124)
    if (_basetype_27247 <= _15167)
    goto L3C; // [1501] 1515
    // SubProg Scanner pc: 1505 op: STARTLINE (58)

    /** scanner.e:1681							basetype -= length(nbase)*/
    // SubProg Scanner pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_61nbase_26748)){
            _15169 = SEQ_PTR(_61nbase_26748)->length;
    }
    else {
        _15169 = 1;
    }
    // SubProg Scanner pc: 1510 op: MINUS_I (116)
    _basetype_27247 = _basetype_27247 - _15169;
    _15169 = NOVALUE;
    // SubProg Scanner pc: 1514 op: NOP1 (159)
L3C: // addr: 1515 pc: 1514 sub: 26939 op: 159
    // SubProg Scanner pc: 1515 op: STARTLINE (58)

    /** scanner.e:1684						if basetype = 0 then*/
    // SubProg Scanner pc: 1517 op: EQUALS_IFW_I (121)
    if (_basetype_27247 != 0)
    goto L3D; // [1517] 1572
    // SubProg Scanner pc: 1521 op: STARTLINE (58)

    /** scanner.e:1685							if char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1525 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15172 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1529 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1531 op: EQUALS_IFW (104)
    if (_15172 != -2)
    goto L3E; // [1531] 1562
    // SubProg Scanner pc: 1535 op: STARTLINE (58)

    /** scanner.e:1686								if ch != 'e' and ch != 'E' then*/
    // SubProg Scanner pc: 1537 op: NOTEQ (4)
    _15174 = (_ch_26941 != 101);
    // SubProg Scanner pc: 1541 op: SC1_AND_IF (146)
    if (_15174 == 0) {
        goto L3F; // [1541] 1561
    }
    // SubProg Scanner pc: 1545 op: NOTEQ (4)
    _15176 = (_ch_26941 != 69);
    // SubProg Scanner pc: 1549 op: NOP1 (159)
    // SubProg Scanner pc: 1550 op: IF (20)
    if (_15176 == 0)
    {
        DeRef(_15176);
        _15176 = NOVALUE;
        goto L3F; // [1550] 1561
    }
    else{
        DeRef(_15176);
        _15176 = NOVALUE;
    }
    // SubProg Scanner pc: 1553 op: STARTLINE (58)

    /** scanner.e:1687									CompileErr(105, ch)*/
    // SubProg Scanner pc: 1555 op: PROC (27)
    _49CompileErr(105, _ch_26941, 0);
    // SubProg Scanner pc: 1560 op: NOP1 (159)
L3F: // addr: 1561 pc: 1560 sub: 26939 op: 159
    // SubProg Scanner pc: 1561 op: NOP1 (159)
L3E: // addr: 1562 pc: 1561 sub: 26939 op: 159
    // SubProg Scanner pc: 1562 op: STARTLINE (58)

    /** scanner.e:1691							basetype = -1 -- decimal*/
    // SubProg Scanner pc: 1564 op: ASSIGN_I (113)
    _basetype_27247 = -1;
    // SubProg Scanner pc: 1567 op: STARTLINE (58)

    /** scanner.e:1692							exit*/
    // SubProg Scanner pc: 1569 op: EXIT (61)
    goto L40; // [1569] 1657
    // SubProg Scanner pc: 1571 op: NOP1 (159)
L3D: // addr: 1572 pc: 1571 sub: 26939 op: 159
    // SubProg Scanner pc: 1572 op: STARTLINE (58)

    /** scanner.e:1694						yytext &= '0'*/
    // SubProg Scanner pc: 1574 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, 48);
    // SubProg Scanner pc: 1578 op: ELSE (23)
    goto L3A; // [1578] 1642
    // SubProg Scanner pc: 1580 op: NOP1 (159)
L3B: // addr: 1581 pc: 1580 sub: 26939 op: 159
    // SubProg Scanner pc: 1581 op: STARTLINE (58)

    /** scanner.e:1696					elsif basetype = 4 then -- hexadecimal*/
    // SubProg Scanner pc: 1583 op: EQUALS_IFW_I (121)
    if (_basetype_27247 != 4)
    goto L40; // [1583] 1657
    // SubProg Scanner pc: 1587 op: STARTLINE (58)

    /** scanner.e:1697						integer hdigit*/
    // SubProg Scanner pc: 1589 op: STARTLINE (58)

    /** scanner.e:1698						hdigit = find(ch, "ABCDEFabcdef")*/
    // SubProg Scanner pc: 1591 op: FIND_FROM (176)
    _hdigit_27287 = find_from(_ch_26941, _15179, 1);
    // SubProg Scanner pc: 1596 op: STARTLINE (58)

    /** scanner.e:1699						if hdigit = 0 then*/
    // SubProg Scanner pc: 1598 op: EQUALS_IFW_I (121)
    if (_hdigit_27287 != 0)
    goto L41; // [1598] 1609
    // SubProg Scanner pc: 1602 op: STARTLINE (58)

    /** scanner.e:1700							exit*/
    // SubProg Scanner pc: 1604 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27287
    // SubProg Scanner pc: 1606 op: EXIT (61)
    goto L40; // [1606] 1657
    // SubProg Scanner pc: 1608 op: NOP1 (159)
L41: // addr: 1609 pc: 1608 sub: 26939 op: 159
    // SubProg Scanner pc: 1609 op: STARTLINE (58)

    /** scanner.e:1702						if hdigit > 6 then*/
    // SubProg Scanner pc: 1611 op: GREATER_IFW_I (124)
    if (_hdigit_27287 <= 6)
    goto L42; // [1611] 1622
    // SubProg Scanner pc: 1615 op: STARTLINE (58)

    /** scanner.e:1703							hdigit -= 6*/
    // SubProg Scanner pc: 1617 op: MINUS_I (116)
    _hdigit_27287 = _hdigit_27287 - 6;
    // SubProg Scanner pc: 1621 op: NOP1 (159)
L42: // addr: 1622 pc: 1621 sub: 26939 op: 159
    // SubProg Scanner pc: 1622 op: STARTLINE (58)

    /** scanner.e:1705						yytext &= hexasc[hdigit]*/
    // SubProg Scanner pc: 1624 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61hexasc_26751);
    _15184 = (object)*(((s1_ptr)_2)->base + _hdigit_27287);
    // SubProg Scanner pc: 1628 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26947) && IS_ATOM(_15184)) {
        Ref(_15184);
        Append(&_yytext_26947, _yytext_26947, _15184);
    }
    else if (IS_ATOM(_yytext_26947) && IS_SEQUENCE(_15184)) {
    }
    else {
        Concat((object_ptr)&_yytext_26947, _yytext_26947, _15184);
    }
    _15184 = NOVALUE;
    // SubProg Scanner pc: 1632 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27287
    // SubProg Scanner pc: 1634 op: ELSE (23)
    goto L3A; // [1634] 1642
    // SubProg Scanner pc: 1636 op: NOP1 (159)
    // SubProg Scanner pc: 1637 op: STARTLINE (58)

    /** scanner.e:1708						exit*/
    // SubProg Scanner pc: 1639 op: EXIT (61)
    goto L40; // [1639] 1657
    // SubProg Scanner pc: 1641 op: NOP1 (159)
L3A: // addr: 1642 pc: 1641 sub: 26939 op: 159
    // SubProg Scanner pc: 1642 op: STARTLINE (58)

    /** scanner.e:1710				entry*/
    // SubProg Scanner pc: 1644 op: NOP1 (159)
L37: // addr: 1645 pc: 1644 sub: 26939 op: 159
    // SubProg Scanner pc: 1645 op: STARTLINE (58)

    /** scanner.e:1711					ch = getch()*/
    // SubProg Scanner pc: 1647 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1652 op: STARTLINE (58)

    /** scanner.e:1712				end while*/
    // SubProg Scanner pc: 1654 op: ENDWHILE (22)
    goto L38; // [1654] 1457
    // SubProg Scanner pc: 1656 op: NOP1 (159)
L40: // addr: 1657 pc: 1656 sub: 26939 op: 159
    // SubProg Scanner pc: 1657 op: STARTLINE (58)

    /** scanner.e:1714				if ch = '.' then*/
    // SubProg Scanner pc: 1659 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 46)
    goto L43; // [1659] 1794
    // SubProg Scanner pc: 1663 op: STARTLINE (58)

    /** scanner.e:1715					ch = getch()*/
    // SubProg Scanner pc: 1665 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1668 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1670 op: STARTLINE (58)

    /** scanner.e:1716					if ch = '.' then*/
    // SubProg Scanner pc: 1672 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 46)
    goto L44; // [1672] 1683
    // SubProg Scanner pc: 1676 op: STARTLINE (58)

    /** scanner.e:1718						ungetch()*/
    // SubProg Scanner pc: 1678 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1680 op: ELSE (23)
    goto L45; // [1680] 1793
    // SubProg Scanner pc: 1682 op: NOP1 (159)
L44: // addr: 1683 pc: 1682 sub: 26939 op: 159
    // SubProg Scanner pc: 1683 op: STARTLINE (58)

    /** scanner.e:1720						is_int = FALSE*/
    // SubProg Scanner pc: 1685 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1687 op: ASSIGN (18)
    _is_int_26952 = _6FALSE_363;
    // SubProg Scanner pc: 1690 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1692 op: STARTLINE (58)

    /** scanner.e:1721						if yytext[1] = '.' then*/
    // SubProg Scanner pc: 1694 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_yytext_26947);
    _15190 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1698 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15190, 46)){
        _15190 = NOVALUE;
        goto L46; // [1698] 1712
    }
    _15190 = NOVALUE;
    // SubProg Scanner pc: 1702 op: STARTLINE (58)

    /** scanner.e:1722							CompileErr(124)*/
    // SubProg Scanner pc: 1704 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(124, _21958, 0);
    // SubProg Scanner pc: 1709 op: ELSE (23)
    goto L47; // [1709] 1719
    // SubProg Scanner pc: 1711 op: NOP1 (159)
L46: // addr: 1712 pc: 1711 sub: 26939 op: 159
    // SubProg Scanner pc: 1712 op: STARTLINE (58)

    /** scanner.e:1724							yytext &= '.'*/
    // SubProg Scanner pc: 1714 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, 46);
    // SubProg Scanner pc: 1718 op: NOP1 (159)
L47: // addr: 1719 pc: 1718 sub: 26939 op: 159
    // SubProg Scanner pc: 1719 op: STARTLINE (58)

    /** scanner.e:1726						if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1721 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1723 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15193 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1727 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1729 op: EQUALS_IFW (104)
    if (_15193 != -7)
    goto L48; // [1729] 1784
    // SubProg Scanner pc: 1733 op: STARTLINE (58)

    /** scanner.e:1727							yytext &= ch*/
    // SubProg Scanner pc: 1735 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1739 op: STARTLINE (58)

    /** scanner.e:1728							ch = getch()*/
    // SubProg Scanner pc: 1741 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1744 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1746 op: STARTLINE (58)

    /** scanner.e:1729							while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1748 op: NOP2 (110)
    // SubProg Scanner pc: 1750 op: NOPWHILE (158)
L49: // addr: 1751 pc: 1750 sub: 26939 op: 158
    // SubProg Scanner pc: 1751 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1753 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15197 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1759 op: EQUALS_IFW (104)
    if (_15197 != -7)
    goto L4A; // [1759] 1792
    // SubProg Scanner pc: 1763 op: STARTLINE (58)

    /** scanner.e:1730								yytext &= ch*/
    // SubProg Scanner pc: 1765 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1769 op: STARTLINE (58)

    /** scanner.e:1731								ch = getch()*/
    // SubProg Scanner pc: 1771 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1774 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1776 op: STARTLINE (58)

    /** scanner.e:1732							end while*/
    // SubProg Scanner pc: 1778 op: ENDWHILE (22)
    goto L49; // [1778] 1751
    // SubProg Scanner pc: 1780 op: NOP1 (159)
    // SubProg Scanner pc: 1781 op: ELSE (23)
    goto L4A; // [1781] 1792
    // SubProg Scanner pc: 1783 op: NOP1 (159)
L48: // addr: 1784 pc: 1783 sub: 26939 op: 159
    // SubProg Scanner pc: 1784 op: STARTLINE (58)

    /** scanner.e:1734							CompileErr(94)*/
    // SubProg Scanner pc: 1786 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(94, _21958, 0);
    // SubProg Scanner pc: 1791 op: NOP1 (159)
L4A: // addr: 1792 pc: 1791 sub: 26939 op: 159
    // SubProg Scanner pc: 1792 op: NOP1 (159)
L45: // addr: 1793 pc: 1792 sub: 26939 op: 159
    // SubProg Scanner pc: 1793 op: NOP1 (159)
L43: // addr: 1794 pc: 1793 sub: 26939 op: 159
    // SubProg Scanner pc: 1794 op: STARTLINE (58)

    /** scanner.e:1739				if basetype = -1 and find(ch, "eE") then*/
    // SubProg Scanner pc: 1796 op: EQUALS (3)
    _15201 = (_basetype_27247 == -1);
    // SubProg Scanner pc: 1800 op: SC1_AND_IF (146)
    if (_15201 == 0) {
        goto L4B; // [1800] 1936
    }
    // SubProg Scanner pc: 1804 op: FIND_FROM (176)
    _15204 = find_from(_ch_26941, _15203, 1);
    // SubProg Scanner pc: 1809 op: NOP1 (159)
    // SubProg Scanner pc: 1810 op: IF (20)
    if (_15204 == 0)
    {
        _15204 = NOVALUE;
        goto L4B; // [1810] 1936
    }
    else{
        _15204 = NOVALUE;
    }
    // SubProg Scanner pc: 1813 op: STARTLINE (58)

    /** scanner.e:1740					is_int = FALSE*/
    // SubProg Scanner pc: 1815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1817 op: ASSIGN (18)
    _is_int_26952 = _6FALSE_363;
    // SubProg Scanner pc: 1820 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1822 op: STARTLINE (58)

    /** scanner.e:1741					yytext &= ch*/
    // SubProg Scanner pc: 1824 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1828 op: STARTLINE (58)

    /** scanner.e:1742					ch = getch()*/
    // SubProg Scanner pc: 1830 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1833 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1835 op: STARTLINE (58)

    /** scanner.e:1743					if ch = '-' or ch = '+' or char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1837 op: EQUALS (3)
    _15207 = (_ch_26941 == 45);
    // SubProg Scanner pc: 1841 op: SC1_OR (143)
    if (_15207 != 0) {
        _15208 = 1;
        goto L4C; // [1841] 1853
    }
    // SubProg Scanner pc: 1845 op: EQUALS (3)
    _15209 = (_ch_26941 == 43);
    // SubProg Scanner pc: 1849 op: SC2_OR (144)
    _15208 = (_15209 != 0);
    // SubProg Scanner pc: 1852 op: NOP1 (159)
L4C: // addr: 1853 pc: 1852 sub: 26939 op: 159
    // SubProg Scanner pc: 1853 op: SC1_OR_IF (147)
    if (_15208 != 0) {
        goto L4D; // [1853] 1874
    }
    // SubProg Scanner pc: 1857 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1859 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15211 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1865 op: EQUALS (3)
    _15212 = (_15211 == -7);
    _15211 = NOVALUE;
    // SubProg Scanner pc: 1869 op: NOP1 (159)
    // SubProg Scanner pc: 1870 op: IF (20)
    if (_15212 == 0)
    {
        DeRef(_15212);
        _15212 = NOVALUE;
        goto L4E; // [1870] 1883
    }
    else{
        DeRef(_15212);
        _15212 = NOVALUE;
    }
    // SubProg Scanner pc: 1873 op: NOP1 (159)
L4D: // addr: 1874 pc: 1873 sub: 26939 op: 159
    // SubProg Scanner pc: 1874 op: STARTLINE (58)

    /** scanner.e:1744						yytext &= ch*/
    // SubProg Scanner pc: 1876 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1880 op: ELSE (23)
    goto L4F; // [1880] 1891
    // SubProg Scanner pc: 1882 op: NOP1 (159)
L4E: // addr: 1883 pc: 1882 sub: 26939 op: 159
    // SubProg Scanner pc: 1883 op: STARTLINE (58)

    /** scanner.e:1746						CompileErr(86)*/
    // SubProg Scanner pc: 1885 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(86, _21958, 0);
    // SubProg Scanner pc: 1890 op: NOP1 (159)
L4F: // addr: 1891 pc: 1890 sub: 26939 op: 159
    // SubProg Scanner pc: 1891 op: STARTLINE (58)

    /** scanner.e:1748					ch = getch()*/
    // SubProg Scanner pc: 1893 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1896 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1898 op: STARTLINE (58)

    /** scanner.e:1749					while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1900 op: NOP2 (110)
    // SubProg Scanner pc: 1902 op: NOPWHILE (158)
L50: // addr: 1903 pc: 1902 sub: 26939 op: 158
    // SubProg Scanner pc: 1903 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1905 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15215 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1909 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1911 op: EQUALS_IFW (104)
    if (_15215 != -7)
    goto L51; // [1911] 1967
    // SubProg Scanner pc: 1915 op: STARTLINE (58)

    /** scanner.e:1750						yytext &= ch*/
    // SubProg Scanner pc: 1917 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 1921 op: STARTLINE (58)

    /** scanner.e:1751						ch = getch()*/
    // SubProg Scanner pc: 1923 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 1926 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 1928 op: STARTLINE (58)

    /** scanner.e:1752					end while*/
    // SubProg Scanner pc: 1930 op: ENDWHILE (22)
    goto L50; // [1930] 1903
    // SubProg Scanner pc: 1932 op: NOP1 (159)
    // SubProg Scanner pc: 1933 op: ELSE (23)
    goto L51; // [1933] 1967
    // SubProg Scanner pc: 1935 op: NOP1 (159)
L4B: // addr: 1936 pc: 1935 sub: 26939 op: 159
    // SubProg Scanner pc: 1936 op: STARTLINE (58)

    /** scanner.e:1753				elsif char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1938 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1940 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15219 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 1944 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1946 op: EQUALS_IFW (104)
    if (_15219 != -2)
    goto L52; // [1946] 1966
    // SubProg Scanner pc: 1950 op: STARTLINE (58)

    /** scanner.e:1754					CompileErr(127, {{ch}})*/
    // SubProg Scanner pc: 1952 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26941;
    _15221 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1956 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _15221;
    _15222 = MAKE_SEQ(_1);
    _15221 = NOVALUE;
    // SubProg Scanner pc: 1960 op: PROC (27)
    _49CompileErr(127, _15222, 0);
    _15222 = NOVALUE;
    // SubProg Scanner pc: 1965 op: NOP1 (159)
L52: // addr: 1966 pc: 1965 sub: 26939 op: 159
    // SubProg Scanner pc: 1966 op: NOP1 (159)
L51: // addr: 1967 pc: 1966 sub: 26939 op: 159
    // SubProg Scanner pc: 1967 op: STARTLINE (58)

    /** scanner.e:1757				ungetch()*/
    // SubProg Scanner pc: 1969 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 1971 op: STARTLINE (58)

    /** scanner.e:1759				while i != 0 with entry do*/
    // SubProg Scanner pc: 1973 op: ELSE (23)
    goto L53; // [1973] 1992
    // SubProg Scanner pc: 1975 op: NOPWHILE (158)
L54: // addr: 1976 pc: 1975 sub: 26939 op: 158
    // SubProg Scanner pc: 1976 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1978 op: NOTEQ_IFW_I (122)
    if (_i_26942 == 0)
    goto L55; // [1978] 2004
    // SubProg Scanner pc: 1982 op: STARTLINE (58)

    /** scanner.e:1760					yytext = remove( yytext, i )*/
    // SubProg Scanner pc: 1984 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_yytext_26947);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_26942)) ? _i_26942 : (object)(DBL_PTR(_i_26942)->dbl);
        int stop = (IS_ATOM_INT(_i_26942)) ? _i_26942 : (object)(DBL_PTR(_i_26942)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_yytext_26947), start, &_yytext_26947 );
            }
            else Tail(SEQ_PTR(_yytext_26947), stop+1, &_yytext_26947);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_yytext_26947), start, &_yytext_26947);
        }
        else {
            assign_slice_seq = &assign_space;
            _yytext_26947 = Remove_elements(start, stop, (SEQ_PTR(_yytext_26947)->ref == 1));
        }
    }
    // SubProg Scanner pc: 1989 op: STARTLINE (58)

    /** scanner.e:1761				  entry*/
    // SubProg Scanner pc: 1991 op: NOP1 (159)
L53: // addr: 1992 pc: 1991 sub: 26939 op: 159
    // SubProg Scanner pc: 1992 op: STARTLINE (58)

    /** scanner.e:1762				    i = find('_', yytext)*/
    // SubProg Scanner pc: 1994 op: FIND_FROM (176)
    _i_26942 = find_from(95, _yytext_26947, 1);
    // SubProg Scanner pc: 1999 op: STARTLINE (58)

    /** scanner.e:1763				end while*/
    // SubProg Scanner pc: 2001 op: ENDWHILE (22)
    goto L54; // [2001] 1976
    // SubProg Scanner pc: 2003 op: NOP1 (159)
L55: // addr: 2004 pc: 2003 sub: 26939 op: 159
    // SubProg Scanner pc: 2004 op: STARTLINE (58)

    /** scanner.e:1765				if is_int then*/
    // SubProg Scanner pc: 2006 op: IF (20)
    if (_is_int_26952 == 0)
    {
        goto L56; // [2006] 2078
    }
    else{
    }
    // SubProg Scanner pc: 2009 op: STARTLINE (58)

    /** scanner.e:1766					if basetype = -1 then*/
    // SubProg Scanner pc: 2011 op: EQUALS_IFW_I (121)
    if (_basetype_27247 != -1)
    goto L57; // [2011] 2021
    // SubProg Scanner pc: 2015 op: STARTLINE (58)

    /** scanner.e:1767						basetype = 3 -- decimal*/
    // SubProg Scanner pc: 2017 op: ASSIGN_I (113)
    _basetype_27247 = 3;
    // SubProg Scanner pc: 2020 op: NOP1 (159)
L57: // addr: 2021 pc: 2020 sub: 26939 op: 159
    // SubProg Scanner pc: 2021 op: STARTLINE (58)

    /** scanner.e:1769					d = MakeInt(yytext, nbase[basetype])*/
    // SubProg Scanner pc: 2023 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61nbase_26748);
    _15227 = (object)*(((s1_ptr)_2)->base + _basetype_27247);
    // SubProg Scanner pc: 2027 op: PROC (27)
    RefDS(_yytext_26947);
    Ref(_15227);
    _0 = _d_26949;
    _d_26949 = _61MakeInt(_yytext_26947, _15227);
    DeRef(_0);
    _15227 = NOVALUE;
    // SubProg Scanner pc: 2032 op: STARTLINE (58)

    /** scanner.e:1770					if is_integer(d) then*/
    // SubProg Scanner pc: 2034 op: PROC (27)
    Ref(_d_26949);
    _15229 = _5is_integer(_d_26949);
    // SubProg Scanner pc: 2038 op: IF (20)
    if (_15229 == 0) {
        DeRef(_15229);
        _15229 = NOVALUE;
        goto L58; // [2038] 2060
    }
    else {
        if (!IS_ATOM_INT(_15229) && DBL_PTR(_15229)->dbl == 0.0){
            DeRef(_15229);
            _15229 = NOVALUE;
            goto L58; // [2038] 2060
        }
        DeRef(_15229);
        _15229 = NOVALUE;
    }
    DeRef(_15229);
    _15229 = NOVALUE;
    // SubProg Scanner pc: 2041 op: STARTLINE (58)

    /** scanner.e:1771						return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 2043 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2045 op: PROC (27)
    Ref(_d_26949);
    _15230 = _53NewIntSym(_d_26949);
    // SubProg Scanner pc: 2049 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15230;
    _15231 = MAKE_SEQ(_1);
    _15230 = NOVALUE;
    // SubProg Scanner pc: 2053 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27247

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRefDS(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15231;
    // SubProg Scanner pc: 2057 op: ELSE (23)
    goto L59; // [2057] 2077
    // SubProg Scanner pc: 2059 op: NOP1 (159)
L58: // addr: 2060 pc: 2059 sub: 26939 op: 159
    // SubProg Scanner pc: 2060 op: STARTLINE (58)

    /** scanner.e:1773						return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2062 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2064 op: PROC (27)
    Ref(_d_26949);
    _15232 = _53NewDoubleSym(_d_26949);
    // SubProg Scanner pc: 2068 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15232;
    _15233 = MAKE_SEQ(_1);
    _15232 = NOVALUE;
    // SubProg Scanner pc: 2072 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27247

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15233;
    // SubProg Scanner pc: 2076 op: NOP1 (159)
L59: // addr: 2077 pc: 2076 sub: 26939 op: 159
    // SubProg Scanner pc: 2077 op: NOP1 (159)
L56: // addr: 2078 pc: 2077 sub: 26939 op: 159
    // SubProg Scanner pc: 2078 op: STARTLINE (58)

    /** scanner.e:1778				if basetype != -1 then*/
    // SubProg Scanner pc: 2080 op: NOTEQ_IFW_I (122)
    if (_basetype_27247 == -1)
    goto L5A; // [2080] 2096
    // SubProg Scanner pc: 2084 op: STARTLINE (58)

    /** scanner.e:1779					CompileErr(125, nbasecode[basetype])*/
    // SubProg Scanner pc: 2086 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61nbasecode_26749);
    _15235 = (object)*(((s1_ptr)_2)->base + _basetype_27247);
    // SubProg Scanner pc: 2090 op: PROC (27)
    Ref(_15235);
    _49CompileErr(125, _15235, 0);
    _15235 = NOVALUE;
    // SubProg Scanner pc: 2095 op: NOP1 (159)
L5A: // addr: 2096 pc: 2095 sub: 26939 op: 159
    // SubProg Scanner pc: 2096 op: STARTLINE (58)

    /** scanner.e:1783				d = my_sscanf(yytext)*/
    // SubProg Scanner pc: 2098 op: PROC (27)
    RefDS(_yytext_26947);
    _0 = _d_26949;
    _d_26949 = _61my_sscanf(_yytext_26947);
    DeRef(_0);
    // SubProg Scanner pc: 2102 op: STARTLINE (58)

    /** scanner.e:1784				if sequence(d) then*/
    // SubProg Scanner pc: 2104 op: IS_A_SEQUENCE (68)
    _15237 = IS_SEQUENCE(_d_26949);
    // SubProg Scanner pc: 2107 op: IF (20)
    if (_15237 == 0)
    {
        _15237 = NOVALUE;
        goto L5B; // [2107] 2120
    }
    else{
        _15237 = NOVALUE;
    }
    // SubProg Scanner pc: 2110 op: STARTLINE (58)

    /** scanner.e:1785					CompileErr(121)*/
    // SubProg Scanner pc: 2112 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(121, _21958, 0);
    // SubProg Scanner pc: 2117 op: ELSE (23)
    goto L5C; // [2117] 2172
    // SubProg Scanner pc: 2119 op: NOP1 (159)
L5B: // addr: 2120 pc: 2119 sub: 26939 op: 159
    // SubProg Scanner pc: 2120 op: STARTLINE (58)

    /** scanner.e:1786				elsif is_int and d <= MAXINT_DBL then*/
    // SubProg Scanner pc: 2122 op: SC1_AND_IF (146)
    if (_is_int_26952 == 0) {
        goto L5D; // [2122] 2155
    }
    // SubProg Scanner pc: 2126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2128 op: LESSEQ (5)
    if (IS_ATOM_INT(_d_26949)) {
        _15239 = (_d_26949 <= 1073741823);
    }
    else {
        _15239 = binary_op(LESSEQ, _d_26949, 1073741823);
    }
    // SubProg Scanner pc: 2132 op: NOP1 (159)
    // SubProg Scanner pc: 2133 op: IF (20)
    if (_15239 == 0) {
        DeRef(_15239);
        _15239 = NOVALUE;
        goto L5D; // [2133] 2155
    }
    else {
        if (!IS_ATOM_INT(_15239) && DBL_PTR(_15239)->dbl == 0.0){
            DeRef(_15239);
            _15239 = NOVALUE;
            goto L5D; // [2133] 2155
        }
        DeRef(_15239);
        _15239 = NOVALUE;
    }
    DeRef(_15239);
    _15239 = NOVALUE;
    // SubProg Scanner pc: 2136 op: STARTLINE (58)

    /** scanner.e:1787					return {ATOM, NewIntSym(d)}  -- 1 to 1.07 billion*/
    // SubProg Scanner pc: 2138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2140 op: PROC (27)
    Ref(_d_26949);
    _15240 = _53NewIntSym(_d_26949);
    // SubProg Scanner pc: 2144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15240;
    _15241 = MAKE_SEQ(_1);
    _15240 = NOVALUE;
    // SubProg Scanner pc: 2148 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27247

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15241;
    // SubProg Scanner pc: 2152 op: ELSE (23)
    goto L5C; // [2152] 2172
    // SubProg Scanner pc: 2154 op: NOP1 (159)
L5D: // addr: 2155 pc: 2154 sub: 26939 op: 159
    // SubProg Scanner pc: 2155 op: STARTLINE (58)

    /** scanner.e:1789					return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2157 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2159 op: PROC (27)
    Ref(_d_26949);
    _15242 = _53NewDoubleSym(_d_26949);
    // SubProg Scanner pc: 2163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15242;
    _15243 = MAKE_SEQ(_1);
    _15242 = NOVALUE;
    // SubProg Scanner pc: 2167 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27247

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15243;
    // SubProg Scanner pc: 2171 op: NOP1 (159)
L5C: // addr: 2172 pc: 2171 sub: 26939 op: 159
    // SubProg Scanner pc: 2172 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var basetype_27247
    // SubProg Scanner pc: 2174 op: ELSE (23)
    goto L1; // [2174] 10
    // SubProg Scanner pc: 2176 op: NOP1 (159)
L33: // addr: 2177 pc: 2176 sub: 26939 op: 159
    // SubProg Scanner pc: 2177 op: STARTLINE (58)

    /** scanner.e:1793			elsif class = MINUS then*/
    // SubProg Scanner pc: 2179 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2181 op: EQUALS_IFW (104)
    if (_class_26953 != 10)
    goto L5E; // [2181] 2267
    // SubProg Scanner pc: 2185 op: STARTLINE (58)

    /** scanner.e:1794				ch = getch()*/
    // SubProg Scanner pc: 2187 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2190 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2192 op: STARTLINE (58)

    /** scanner.e:1795				if ch = '-' then*/
    // SubProg Scanner pc: 2194 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 45)
    goto L5F; // [2194] 2220
    // SubProg Scanner pc: 2198 op: STARTLINE (58)

    /** scanner.e:1797					if start_include then*/
    // SubProg Scanner pc: 2200 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2202 op: IF (20)
    if (_61start_include_25203 == 0)
    {
        goto L60; // [2202] 2212
    }
    else{
    }
    // SubProg Scanner pc: 2205 op: STARTLINE (58)

    /** scanner.e:1798						IncludePush()*/
    // SubProg Scanner pc: 2207 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 2209 op: ELSE (23)
    goto L1; // [2209] 10
    // SubProg Scanner pc: 2211 op: NOP1 (159)
L60: // addr: 2212 pc: 2211 sub: 26939 op: 159
    // SubProg Scanner pc: 2212 op: STARTLINE (58)

    /** scanner.e:1800						read_line()*/
    // SubProg Scanner pc: 2214 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 2216 op: NOP1 (159)
    // SubProg Scanner pc: 2217 op: ELSE (23)
    goto L1; // [2217] 10
    // SubProg Scanner pc: 2219 op: NOP1 (159)
L5F: // addr: 2220 pc: 2219 sub: 26939 op: 159
    // SubProg Scanner pc: 2220 op: STARTLINE (58)

    /** scanner.e:1802				elsif ch = '=' then*/
    // SubProg Scanner pc: 2222 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 61)
    goto L61; // [2222] 2241
    // SubProg Scanner pc: 2226 op: STARTLINE (58)

    /** scanner.e:1803					return {MINUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2228 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2230 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 516;
    ((intptr_t *)_2)[2] = 0;
    _15248 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2234 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15248;
    // SubProg Scanner pc: 2238 op: ELSE (23)
    goto L1; // [2238] 10
    // SubProg Scanner pc: 2240 op: NOP1 (159)
L61: // addr: 2241 pc: 2240 sub: 26939 op: 159
    // SubProg Scanner pc: 2241 op: STARTLINE (58)

    /** scanner.e:1805					bp -= 1*/
    // SubProg Scanner pc: 2243 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2245 op: MINUS (10)
    _49bp_48785 = _49bp_48785 - 1;
    // SubProg Scanner pc: 2251 op: STARTLINE (58)

    /** scanner.e:1806					return {MINUS, 0}*/
    // SubProg Scanner pc: 2253 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2255 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 0;
    _15250 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2259 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15250;
    // SubProg Scanner pc: 2263 op: NOP1 (159)
    // SubProg Scanner pc: 2264 op: ELSE (23)
    goto L1; // [2264] 10
    // SubProg Scanner pc: 2266 op: NOP1 (159)
L5E: // addr: 2267 pc: 2266 sub: 26939 op: 159
    // SubProg Scanner pc: 2267 op: STARTLINE (58)

    /** scanner.e:1808			elsif class = DOUBLE_QUOTE then*/
    // SubProg Scanner pc: 2269 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2271 op: EQUALS_IFW (104)
    if (_class_26953 != -4)
    goto L62; // [2271] 2465
    // SubProg Scanner pc: 2275 op: STARTLINE (58)

    /** scanner.e:1809				integer fch*/
    // SubProg Scanner pc: 2277 op: STARTLINE (58)

    /** scanner.e:1810				ch = getch()*/
    // SubProg Scanner pc: 2279 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2282 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2284 op: STARTLINE (58)

    /** scanner.e:1811				if ch = '"' then*/
    // SubProg Scanner pc: 2286 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 34)
    goto L63; // [2286] 2322
    // SubProg Scanner pc: 2290 op: STARTLINE (58)

    /** scanner.e:1812					fch = getch()*/
    // SubProg Scanner pc: 2292 op: PROC (27)
    _fch_27421 = _61getch();
    // SubProg Scanner pc: 2295 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_27421)) {
        _1 = (object)(DBL_PTR(_fch_27421)->dbl);
        DeRefDS(_fch_27421);
        _fch_27421 = _1;
    }
    // SubProg Scanner pc: 2297 op: STARTLINE (58)

    /** scanner.e:1813					if fch = '"' then*/
    // SubProg Scanner pc: 2299 op: EQUALS_IFW_I (121)
    if (_fch_27421 != 34)
    goto L64; // [2299] 2316
    // SubProg Scanner pc: 2303 op: STARTLINE (58)

    /** scanner.e:1815						return ExtendedString( fch )*/
    // SubProg Scanner pc: 2305 op: PROC (27)
    _15256 = _61ExtendedString(_fch_27421);
    // SubProg Scanner pc: 2309 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27421

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15256;
    // SubProg Scanner pc: 2313 op: ELSE (23)
    goto L65; // [2313] 2321
    // SubProg Scanner pc: 2315 op: NOP1 (159)
L64: // addr: 2316 pc: 2315 sub: 26939 op: 159
    // SubProg Scanner pc: 2316 op: STARTLINE (58)

    /** scanner.e:1817						ungetch()*/
    // SubProg Scanner pc: 2318 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2320 op: NOP1 (159)
L65: // addr: 2321 pc: 2320 sub: 26939 op: 159
    // SubProg Scanner pc: 2321 op: NOP1 (159)
L63: // addr: 2322 pc: 2321 sub: 26939 op: 159
    // SubProg Scanner pc: 2322 op: STARTLINE (58)

    /** scanner.e:1820				yytext = ""*/
    // SubProg Scanner pc: 2324 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26947);
    _yytext_26947 = _5;
    // SubProg Scanner pc: 2327 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 2329 op: STARTLINE (58)

    /** scanner.e:1821				while ch != '\n' and ch != '\r' do -- can't be EOF*/
    // SubProg Scanner pc: 2331 op: NOP2 (110)
    // SubProg Scanner pc: 2333 op: NOPWHILE (158)
L66: // addr: 2334 pc: 2333 sub: 26939 op: 158
    // SubProg Scanner pc: 2334 op: NOTEQ (4)
    _15257 = (_ch_26941 != 10);
    // SubProg Scanner pc: 2338 op: SC1_AND_IF (146)
    if (_15257 == 0) {
        goto L67; // [2338] 2417
    }
    // SubProg Scanner pc: 2342 op: NOTEQ (4)
    _15259 = (_ch_26941 != 13);
    // SubProg Scanner pc: 2346 op: NOP1 (159)
    // SubProg Scanner pc: 2347 op: WHILE (47)
    if (_15259 == 0)
    {
        DeRef(_15259);
        _15259 = NOVALUE;
        goto L67; // [2347] 2417
    }
    else{
        DeRef(_15259);
        _15259 = NOVALUE;
    }
    // SubProg Scanner pc: 2350 op: STARTLINE (58)

    /** scanner.e:1822					if ch = '"' then*/
    // SubProg Scanner pc: 2352 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 34)
    goto L68; // [2352] 2363
    // SubProg Scanner pc: 2356 op: STARTLINE (58)

    /** scanner.e:1823						exit*/
    // SubProg Scanner pc: 2358 op: EXIT (61)
    goto L67; // [2358] 2417
    // SubProg Scanner pc: 2360 op: ELSE (23)
    goto L69; // [2360] 2405
    // SubProg Scanner pc: 2362 op: NOP1 (159)
L68: // addr: 2363 pc: 2362 sub: 26939 op: 159
    // SubProg Scanner pc: 2363 op: STARTLINE (58)

    /** scanner.e:1824					elsif ch = '\\' then*/
    // SubProg Scanner pc: 2365 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 92)
    goto L6A; // [2365] 2382
    // SubProg Scanner pc: 2369 op: STARTLINE (58)

    /** scanner.e:1825						yytext &= EscapeChar('"')*/
    // SubProg Scanner pc: 2371 op: PROC (27)
    _15262 = _61EscapeChar(34);
    // SubProg Scanner pc: 2375 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26947) && IS_ATOM(_15262)) {
        Ref(_15262);
        Append(&_yytext_26947, _yytext_26947, _15262);
    }
    else if (IS_ATOM(_yytext_26947) && IS_SEQUENCE(_15262)) {
    }
    else {
        Concat((object_ptr)&_yytext_26947, _yytext_26947, _15262);
    }
    DeRef(_15262);
    _15262 = NOVALUE;
    // SubProg Scanner pc: 2379 op: ELSE (23)
    goto L69; // [2379] 2405
    // SubProg Scanner pc: 2381 op: NOP1 (159)
L6A: // addr: 2382 pc: 2381 sub: 26939 op: 159
    // SubProg Scanner pc: 2382 op: STARTLINE (58)

    /** scanner.e:1826					elsif ch = '\t' then*/
    // SubProg Scanner pc: 2384 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 9)
    goto L6B; // [2384] 2398
    // SubProg Scanner pc: 2388 op: STARTLINE (58)

    /** scanner.e:1827						CompileErr(145)*/
    // SubProg Scanner pc: 2390 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(145, _21958, 0);
    // SubProg Scanner pc: 2395 op: ELSE (23)
    goto L69; // [2395] 2405
    // SubProg Scanner pc: 2397 op: NOP1 (159)
L6B: // addr: 2398 pc: 2397 sub: 26939 op: 159
    // SubProg Scanner pc: 2398 op: STARTLINE (58)

    /** scanner.e:1829						yytext &= ch*/
    // SubProg Scanner pc: 2400 op: CONCAT (15)
    Append(&_yytext_26947, _yytext_26947, _ch_26941);
    // SubProg Scanner pc: 2404 op: NOP1 (159)
L69: // addr: 2405 pc: 2404 sub: 26939 op: 159
    // SubProg Scanner pc: 2405 op: STARTLINE (58)

    /** scanner.e:1831					ch = getch()*/
    // SubProg Scanner pc: 2407 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2410 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2412 op: STARTLINE (58)

    /** scanner.e:1832				end while*/
    // SubProg Scanner pc: 2414 op: ENDWHILE (22)
    goto L66; // [2414] 2334
    // SubProg Scanner pc: 2416 op: NOP1 (159)
L67: // addr: 2417 pc: 2416 sub: 26939 op: 159
    // SubProg Scanner pc: 2417 op: STARTLINE (58)

    /** scanner.e:1833				if ch = '\n' or ch = '\r' then*/
    // SubProg Scanner pc: 2419 op: EQUALS (3)
    _15267 = (_ch_26941 == 10);
    // SubProg Scanner pc: 2423 op: SC1_OR_IF (147)
    if (_15267 != 0) {
        goto L6C; // [2423] 2436
    }
    // SubProg Scanner pc: 2427 op: EQUALS (3)
    _15269 = (_ch_26941 == 13);
    // SubProg Scanner pc: 2431 op: NOP1 (159)
    // SubProg Scanner pc: 2432 op: IF (20)
    if (_15269 == 0)
    {
        DeRef(_15269);
        _15269 = NOVALUE;
        goto L6D; // [2432] 2444
    }
    else{
        DeRef(_15269);
        _15269 = NOVALUE;
    }
    // SubProg Scanner pc: 2435 op: NOP1 (159)
L6C: // addr: 2436 pc: 2435 sub: 26939 op: 159
    // SubProg Scanner pc: 2436 op: STARTLINE (58)

    /** scanner.e:1834					CompileErr(67)*/
    // SubProg Scanner pc: 2438 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(67, _21958, 0);
    // SubProg Scanner pc: 2443 op: NOP1 (159)
L6D: // addr: 2444 pc: 2443 sub: 26939 op: 159
    // SubProg Scanner pc: 2444 op: STARTLINE (58)

    /** scanner.e:1836				return {STRING, NewStringSym(yytext)}*/
    // SubProg Scanner pc: 2446 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2448 op: PROC (27)
    RefDS(_yytext_26947);
    _15270 = _53NewStringSym(_yytext_26947);
    // SubProg Scanner pc: 2452 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _15270;
    _15271 = MAKE_SEQ(_1);
    _15270 = NOVALUE;
    // SubProg Scanner pc: 2456 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27421

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRefDS(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15271;
    // SubProg Scanner pc: 2460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fch_27421
    // SubProg Scanner pc: 2462 op: ELSE (23)
    goto L1; // [2462] 10
    // SubProg Scanner pc: 2464 op: NOP1 (159)
L62: // addr: 2465 pc: 2464 sub: 26939 op: 159
    // SubProg Scanner pc: 2465 op: STARTLINE (58)

    /** scanner.e:1838			elsif class = PLUS then*/
    // SubProg Scanner pc: 2467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2469 op: EQUALS_IFW (104)
    if (_class_26953 != 11)
    goto L6E; // [2469] 2521
    // SubProg Scanner pc: 2473 op: STARTLINE (58)

    /** scanner.e:1839				ch = getch()*/
    // SubProg Scanner pc: 2475 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2478 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2480 op: STARTLINE (58)

    /** scanner.e:1840				if ch = '=' then*/
    // SubProg Scanner pc: 2482 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 61)
    goto L6F; // [2482] 2501
    // SubProg Scanner pc: 2486 op: STARTLINE (58)

    /** scanner.e:1841					return {PLUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2488 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2490 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 515;
    ((intptr_t *)_2)[2] = 0;
    _15275 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2494 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15275;
    // SubProg Scanner pc: 2498 op: ELSE (23)
    goto L1; // [2498] 10
    // SubProg Scanner pc: 2500 op: NOP1 (159)
L6F: // addr: 2501 pc: 2500 sub: 26939 op: 159
    // SubProg Scanner pc: 2501 op: STARTLINE (58)

    /** scanner.e:1843					ungetch()*/
    // SubProg Scanner pc: 2503 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2505 op: STARTLINE (58)

    /** scanner.e:1844					return {PLUS, 0}*/
    // SubProg Scanner pc: 2507 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2509 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 11;
    ((intptr_t *)_2)[2] = 0;
    _15276 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2513 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15276;
    // SubProg Scanner pc: 2517 op: NOP1 (159)
    // SubProg Scanner pc: 2518 op: ELSE (23)
    goto L1; // [2518] 10
    // SubProg Scanner pc: 2520 op: NOP1 (159)
L6E: // addr: 2521 pc: 2520 sub: 26939 op: 159
    // SubProg Scanner pc: 2521 op: STARTLINE (58)

    /** scanner.e:1847			elsif class = res:CONCAT then*/
    // SubProg Scanner pc: 2523 op: EQUALS_IFW_I (121)
    if (_class_26953 != 15)
    goto L70; // [2523] 2573
    // SubProg Scanner pc: 2527 op: STARTLINE (58)

    /** scanner.e:1848				ch = getch()*/
    // SubProg Scanner pc: 2529 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2534 op: STARTLINE (58)

    /** scanner.e:1849				if ch = '=' then*/
    // SubProg Scanner pc: 2536 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 61)
    goto L71; // [2536] 2555
    // SubProg Scanner pc: 2540 op: STARTLINE (58)

    /** scanner.e:1850					return {CONCAT_EQUALS, 0}*/
    // SubProg Scanner pc: 2542 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2544 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 519;
    ((intptr_t *)_2)[2] = 0;
    _15280 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2548 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15280;
    // SubProg Scanner pc: 2552 op: ELSE (23)
    goto L1; // [2552] 10
    // SubProg Scanner pc: 2554 op: NOP1 (159)
L71: // addr: 2555 pc: 2554 sub: 26939 op: 159
    // SubProg Scanner pc: 2555 op: STARTLINE (58)

    /** scanner.e:1852					ungetch()*/
    // SubProg Scanner pc: 2557 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 2559 op: STARTLINE (58)

    /** scanner.e:1853					return {res:CONCAT, 0}*/
    // SubProg Scanner pc: 2561 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 15;
    ((intptr_t *)_2)[2] = 0;
    _15281 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2565 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15281;
    // SubProg Scanner pc: 2569 op: NOP1 (159)
    // SubProg Scanner pc: 2570 op: ELSE (23)
    goto L1; // [2570] 10
    // SubProg Scanner pc: 2572 op: NOP1 (159)
L70: // addr: 2573 pc: 2572 sub: 26939 op: 159
    // SubProg Scanner pc: 2573 op: STARTLINE (58)

    /** scanner.e:1856			elsif class = NUMBER_SIGN then*/
    // SubProg Scanner pc: 2575 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2577 op: EQUALS_IFW (104)
    if (_class_26953 != -11)
    goto L72; // [2577] 3104
    // SubProg Scanner pc: 2581 op: STARTLINE (58)

    /** scanner.e:1857				i = 0*/
    // SubProg Scanner pc: 2583 op: ASSIGN_I (113)
    _i_26942 = 0;
    // SubProg Scanner pc: 2586 op: STARTLINE (58)

    /** scanner.e:1858				is_int = -1*/
    // SubProg Scanner pc: 2588 op: ASSIGN_I (113)
    _is_int_26952 = -1;
    // SubProg Scanner pc: 2591 op: STARTLINE (58)

    /** scanner.e:1859				while i < MAXINT/32 do*/
    // SubProg Scanner pc: 2593 op: NOP2 (110)
    // SubProg Scanner pc: 2595 op: NOPWHILE (158)
L73: // addr: 2596 pc: 2595 sub: 26939 op: 158
    // SubProg Scanner pc: 2596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2598 op: DIVIDE (14)
    _15283 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2602 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _i_26942, _15283)){
        DeRef(_15283);
        _15283 = NOVALUE;
        goto L74; // [2602] 2772
    }
    DeRef(_15283);
    _15283 = NOVALUE;
    // SubProg Scanner pc: 2606 op: STARTLINE (58)

    /** scanner.e:1860					ch = getch()*/
    // SubProg Scanner pc: 2608 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2611 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2613 op: STARTLINE (58)

    /** scanner.e:1861					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2615 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2617 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15286 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 2621 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2623 op: EQUALS_IFW (104)
    if (_15286 != -7)
    goto L75; // [2623] 2662
    // SubProg Scanner pc: 2627 op: STARTLINE (58)

    /** scanner.e:1862						if ch != '_' then*/
    // SubProg Scanner pc: 2629 op: NOTEQ_IFW_I (122)
    if (_ch_26941 == 95)
    goto L73; // [2629] 2596
    // SubProg Scanner pc: 2633 op: STARTLINE (58)

    /** scanner.e:1863							i = i * 16 + ch - '0'*/
    // SubProg Scanner pc: 2635 op: MULTIPLY (13)
    if (_i_26942 == (short)_i_26942){
        _15289 = _i_26942 * 16;
    }
    else{
        _15289 = NewDouble(_i_26942 * (eudouble)16);
    }
    // SubProg Scanner pc: 2639 op: PLUS (11)
    if (IS_ATOM_INT(_15289)) {
        _15290 = _15289 + _ch_26941;
        if ((object)((uintptr_t)_15290 + (uintptr_t)HIGH_BITS) >= 0){
            _15290 = NewDouble((eudouble)_15290);
        }
    }
    else {
        _15290 = NewDouble(DBL_PTR(_15289)->dbl + (eudouble)_ch_26941);
    }
    DeRef(_15289);
    _15289 = NOVALUE;
    // SubProg Scanner pc: 2643 op: MINUS (10)
    if (IS_ATOM_INT(_15290)) {
        _i_26942 = _15290 - 48;
    }
    else {
        _i_26942 = NewDouble(DBL_PTR(_15290)->dbl - (eudouble)48);
    }
    DeRef(_15290);
    _15290 = NOVALUE;
    // SubProg Scanner pc: 2647 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26942)) {
        _1 = (object)(DBL_PTR(_i_26942)->dbl);
        DeRefDS(_i_26942);
        _i_26942 = _1;
    }
    // SubProg Scanner pc: 2649 op: STARTLINE (58)

    /** scanner.e:1864							is_int = TRUE*/
    // SubProg Scanner pc: 2651 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2653 op: ASSIGN (18)
    _is_int_26952 = _6TRUE_365;
    // SubProg Scanner pc: 2656 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2658 op: NOP1 (159)
    // SubProg Scanner pc: 2659 op: ELSE (23)
    goto L73; // [2659] 2596
    // SubProg Scanner pc: 2661 op: NOP1 (159)
L75: // addr: 2662 pc: 2661 sub: 26939 op: 159
    // SubProg Scanner pc: 2662 op: STARTLINE (58)

    /** scanner.e:1866					elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2664 op: GREATEREQ (2)
    _15292 = (_ch_26941 >= 65);
    // SubProg Scanner pc: 2668 op: SC1_AND_IF (146)
    if (_15292 == 0) {
        goto L76; // [2668] 2712
    }
    // SubProg Scanner pc: 2672 op: LESSEQ (5)
    _15294 = (_ch_26941 <= 70);
    // SubProg Scanner pc: 2676 op: NOP1 (159)
    // SubProg Scanner pc: 2677 op: IF (20)
    if (_15294 == 0)
    {
        DeRef(_15294);
        _15294 = NOVALUE;
        goto L76; // [2677] 2712
    }
    else{
        DeRef(_15294);
        _15294 = NOVALUE;
    }
    // SubProg Scanner pc: 2680 op: STARTLINE (58)

    /** scanner.e:1867						i = (i * 16) + ch - ('A'-10)*/
    // SubProg Scanner pc: 2682 op: MULTIPLY (13)
    if (_i_26942 == (short)_i_26942){
        _15295 = _i_26942 * 16;
    }
    else{
        _15295 = NewDouble(_i_26942 * (eudouble)16);
    }
    // SubProg Scanner pc: 2686 op: PLUS (11)
    if (IS_ATOM_INT(_15295)) {
        _15296 = _15295 + _ch_26941;
        if ((object)((uintptr_t)_15296 + (uintptr_t)HIGH_BITS) >= 0){
            _15296 = NewDouble((eudouble)_15296);
        }
    }
    else {
        _15296 = NewDouble(DBL_PTR(_15295)->dbl + (eudouble)_ch_26941);
    }
    DeRef(_15295);
    _15295 = NOVALUE;
    // SubProg Scanner pc: 2690 op: MINUS (10)
    _15297 = 55;
    // SubProg Scanner pc: 2694 op: MINUS (10)
    if (IS_ATOM_INT(_15296)) {
        _i_26942 = _15296 - 55;
    }
    else {
        _i_26942 = NewDouble(DBL_PTR(_15296)->dbl - (eudouble)55);
    }
    DeRef(_15296);
    _15296 = NOVALUE;
    _15297 = NOVALUE;
    // SubProg Scanner pc: 2698 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26942)) {
        _1 = (object)(DBL_PTR(_i_26942)->dbl);
        DeRefDS(_i_26942);
        _i_26942 = _1;
    }
    // SubProg Scanner pc: 2700 op: STARTLINE (58)

    /** scanner.e:1868						is_int = TRUE*/
    // SubProg Scanner pc: 2702 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2704 op: ASSIGN (18)
    _is_int_26952 = _6TRUE_365;
    // SubProg Scanner pc: 2707 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2709 op: ELSE (23)
    goto L73; // [2709] 2596
    // SubProg Scanner pc: 2711 op: NOP1 (159)
L76: // addr: 2712 pc: 2711 sub: 26939 op: 159
    // SubProg Scanner pc: 2712 op: STARTLINE (58)

    /** scanner.e:1869					elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2714 op: GREATEREQ (2)
    _15299 = (_ch_26941 >= 97);
    // SubProg Scanner pc: 2718 op: SC1_AND_IF (146)
    if (_15299 == 0) {
        goto L74; // [2718] 2772
    }
    // SubProg Scanner pc: 2722 op: LESSEQ (5)
    _15301 = (_ch_26941 <= 102);
    // SubProg Scanner pc: 2726 op: NOP1 (159)
    // SubProg Scanner pc: 2727 op: IF (20)
    if (_15301 == 0)
    {
        DeRef(_15301);
        _15301 = NOVALUE;
        goto L74; // [2727] 2772
    }
    else{
        DeRef(_15301);
        _15301 = NOVALUE;
    }
    // SubProg Scanner pc: 2730 op: STARTLINE (58)

    /** scanner.e:1870						i = (i * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2732 op: MULTIPLY (13)
    if (_i_26942 == (short)_i_26942){
        _15302 = _i_26942 * 16;
    }
    else{
        _15302 = NewDouble(_i_26942 * (eudouble)16);
    }
    // SubProg Scanner pc: 2736 op: PLUS (11)
    if (IS_ATOM_INT(_15302)) {
        _15303 = _15302 + _ch_26941;
        if ((object)((uintptr_t)_15303 + (uintptr_t)HIGH_BITS) >= 0){
            _15303 = NewDouble((eudouble)_15303);
        }
    }
    else {
        _15303 = NewDouble(DBL_PTR(_15302)->dbl + (eudouble)_ch_26941);
    }
    DeRef(_15302);
    _15302 = NOVALUE;
    // SubProg Scanner pc: 2740 op: MINUS (10)
    _15304 = 87;
    // SubProg Scanner pc: 2744 op: MINUS (10)
    if (IS_ATOM_INT(_15303)) {
        _i_26942 = _15303 - 87;
    }
    else {
        _i_26942 = NewDouble(DBL_PTR(_15303)->dbl - (eudouble)87);
    }
    DeRef(_15303);
    _15303 = NOVALUE;
    _15304 = NOVALUE;
    // SubProg Scanner pc: 2748 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26942)) {
        _1 = (object)(DBL_PTR(_i_26942)->dbl);
        DeRefDS(_i_26942);
        _i_26942 = _1;
    }
    // SubProg Scanner pc: 2750 op: STARTLINE (58)

    /** scanner.e:1871						is_int = TRUE*/
    // SubProg Scanner pc: 2752 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2754 op: ASSIGN (18)
    _is_int_26952 = _6TRUE_365;
    // SubProg Scanner pc: 2757 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2759 op: ELSE (23)
    goto L73; // [2759] 2596
    // SubProg Scanner pc: 2761 op: NOP1 (159)
    // SubProg Scanner pc: 2762 op: STARTLINE (58)

    /** scanner.e:1873						exit*/
    // SubProg Scanner pc: 2764 op: EXIT (61)
    goto L74; // [2764] 2772
    // SubProg Scanner pc: 2766 op: NOP1 (159)
    // SubProg Scanner pc: 2767 op: STARTLINE (58)

    /** scanner.e:1875				end while*/
    // SubProg Scanner pc: 2769 op: ENDWHILE (22)
    goto L73; // [2769] 2596
    // SubProg Scanner pc: 2771 op: NOP1 (159)
L74: // addr: 2772 pc: 2771 sub: 26939 op: 159
    // SubProg Scanner pc: 2772 op: STARTLINE (58)

    /** scanner.e:1877				if is_int = -1 then*/
    // SubProg Scanner pc: 2774 op: EQUALS_IFW_I (121)
    if (_is_int_26952 != -1)
    goto L77; // [2774] 2837
    // SubProg Scanner pc: 2778 op: STARTLINE (58)

    /** scanner.e:1878					if ch = '!' then*/
    // SubProg Scanner pc: 2780 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 33)
    goto L78; // [2780] 2826
    // SubProg Scanner pc: 2784 op: STARTLINE (58)

    /** scanner.e:1879						if line_number > 1 then*/
    // SubProg Scanner pc: 2786 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2788 op: GREATER_IFW (107)
    if (_5line_number_12478 <= 1)
    goto L79; // [2788] 2800
    // SubProg Scanner pc: 2792 op: STARTLINE (58)

    /** scanner.e:1880							CompileErr(161)*/
    // SubProg Scanner pc: 2794 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(161, _21958, 0);
    // SubProg Scanner pc: 2799 op: NOP1 (159)
L79: // addr: 2800 pc: 2799 sub: 26939 op: 159
    // SubProg Scanner pc: 2800 op: STARTLINE (58)

    /** scanner.e:1883						shebang = ThisLine*/
    // SubProg Scanner pc: 2802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2804 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_61shebang_25208);
    _61shebang_25208 = _49ThisLine_48781;
    // SubProg Scanner pc: 2807 op: STARTLINE (58)

    /** scanner.e:1884						if start_include then*/
    // SubProg Scanner pc: 2809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2811 op: IF (20)
    if (_61start_include_25203 == 0)
    {
        goto L7A; // [2811] 2819
    }
    else{
    }
    // SubProg Scanner pc: 2814 op: STARTLINE (58)

    /** scanner.e:1885							IncludePush()*/
    // SubProg Scanner pc: 2816 op: PROC (27)
    _61IncludePush();
    // SubProg Scanner pc: 2818 op: NOP1 (159)
L7A: // addr: 2819 pc: 2818 sub: 26939 op: 159
    // SubProg Scanner pc: 2819 op: STARTLINE (58)

    /** scanner.e:1887						read_line()*/
    // SubProg Scanner pc: 2821 op: PROC (27)
    _61read_line();
    // SubProg Scanner pc: 2823 op: ELSE (23)
    goto L1; // [2823] 10
    // SubProg Scanner pc: 2825 op: NOP1 (159)
L78: // addr: 2826 pc: 2825 sub: 26939 op: 159
    // SubProg Scanner pc: 2826 op: STARTLINE (58)

    /** scanner.e:1889						CompileErr(97)*/
    // SubProg Scanner pc: 2828 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(97, _21958, 0);
    // SubProg Scanner pc: 2833 op: NOP1 (159)
    // SubProg Scanner pc: 2834 op: ELSE (23)
    goto L1; // [2834] 10
    // SubProg Scanner pc: 2836 op: NOP1 (159)
L77: // addr: 2837 pc: 2836 sub: 26939 op: 159
    // SubProg Scanner pc: 2837 op: STARTLINE (58)

    /** scanner.e:1892					if i >= MAXINT/32 then*/
    // SubProg Scanner pc: 2839 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2841 op: DIVIDE (14)
    _15309 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2845 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _i_26942, _15309)){
        DeRef(_15309);
        _15309 = NOVALUE;
        goto L7B; // [2845] 3016
    }
    DeRef(_15309);
    _15309 = NOVALUE;
    // SubProg Scanner pc: 2849 op: STARTLINE (58)

    /** scanner.e:1893						d = i*/
    // SubProg Scanner pc: 2851 op: ASSIGN (18)
    DeRef(_d_26949);
    _d_26949 = _i_26942;
    // SubProg Scanner pc: 2854 op: STARTLINE (58)

    /** scanner.e:1894						is_int = FALSE*/
    // SubProg Scanner pc: 2856 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2858 op: ASSIGN (18)
    _is_int_26952 = _6FALSE_363;
    // SubProg Scanner pc: 2861 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2863 op: STARTLINE (58)

    /** scanner.e:1895						while TRUE do*/
    // SubProg Scanner pc: 2865 op: NOP2 (110)
    // SubProg Scanner pc: 2867 op: NOPWHILE (158)
L7C: // addr: 2868 pc: 2867 sub: 26939 op: 158
    // SubProg Scanner pc: 2868 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2870 op: WHILE (47)
    if (_6TRUE_365 == 0)
    {
        goto L7D; // [2870] 3015
    }
    else{
    }
    // SubProg Scanner pc: 2873 op: STARTLINE (58)

    /** scanner.e:1896							ch = getch()  -- eventually END_OF_FILE_CHAR or new-line*/
    // SubProg Scanner pc: 2875 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 2878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 2880 op: STARTLINE (58)

    /** scanner.e:1897							if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2882 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2884 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15312 = (object)*(((s1_ptr)_2)->base + _ch_26941);
    // SubProg Scanner pc: 2888 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2890 op: EQUALS_IFW (104)
    if (_15312 != -7)
    goto L7E; // [2890] 2918
    // SubProg Scanner pc: 2894 op: STARTLINE (58)

    /** scanner.e:1898								if ch != '_' then*/
    // SubProg Scanner pc: 2896 op: NOTEQ_IFW_I (122)
    if (_ch_26941 == 95)
    goto L7C; // [2896] 2868
    // SubProg Scanner pc: 2900 op: STARTLINE (58)

    /** scanner.e:1899									d = (d * 16) + ch - '0'*/
    // SubProg Scanner pc: 2902 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26949)) {
        if (_d_26949 == (short)_d_26949){
            _15315 = _d_26949 * 16;
        }
        else{
            _15315 = NewDouble(_d_26949 * (eudouble)16);
        }
    }
    else {
        _15315 = binary_op(MULTIPLY, _d_26949, 16);
    }
    // SubProg Scanner pc: 2906 op: PLUS (11)
    if (IS_ATOM_INT(_15315)) {
        _15316 = _15315 + _ch_26941;
        if ((object)((uintptr_t)_15316 + (uintptr_t)HIGH_BITS) >= 0){
            _15316 = NewDouble((eudouble)_15316);
        }
    }
    else {
        _15316 = binary_op(PLUS, _15315, _ch_26941);
    }
    DeRef(_15315);
    _15315 = NOVALUE;
    // SubProg Scanner pc: 2910 op: MINUS (10)
    DeRef(_d_26949);
    if (IS_ATOM_INT(_15316)) {
        _d_26949 = _15316 - 48;
        if ((object)((uintptr_t)_d_26949 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26949 = NewDouble((eudouble)_d_26949);
        }
    }
    else {
        _d_26949 = binary_op(MINUS, _15316, 48);
    }
    DeRef(_15316);
    _15316 = NOVALUE;
    // SubProg Scanner pc: 2914 op: NOP1 (159)
    // SubProg Scanner pc: 2915 op: ELSE (23)
    goto L7C; // [2915] 2868
    // SubProg Scanner pc: 2917 op: NOP1 (159)
L7E: // addr: 2918 pc: 2917 sub: 26939 op: 159
    // SubProg Scanner pc: 2918 op: STARTLINE (58)

    /** scanner.e:1901							elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2920 op: GREATEREQ (2)
    _15318 = (_ch_26941 >= 65);
    // SubProg Scanner pc: 2924 op: SC1_AND_IF (146)
    if (_15318 == 0) {
        goto L7F; // [2924] 2957
    }
    // SubProg Scanner pc: 2928 op: LESSEQ (5)
    _15320 = (_ch_26941 <= 70);
    // SubProg Scanner pc: 2932 op: NOP1 (159)
    // SubProg Scanner pc: 2933 op: IF (20)
    if (_15320 == 0)
    {
        DeRef(_15320);
        _15320 = NOVALUE;
        goto L7F; // [2933] 2957
    }
    else{
        DeRef(_15320);
        _15320 = NOVALUE;
    }
    // SubProg Scanner pc: 2936 op: STARTLINE (58)

    /** scanner.e:1902								d = (d * 16) + ch - ('A'- 10)*/
    // SubProg Scanner pc: 2938 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26949)) {
        if (_d_26949 == (short)_d_26949){
            _15321 = _d_26949 * 16;
        }
        else{
            _15321 = NewDouble(_d_26949 * (eudouble)16);
        }
    }
    else {
        _15321 = binary_op(MULTIPLY, _d_26949, 16);
    }
    // SubProg Scanner pc: 2942 op: PLUS (11)
    if (IS_ATOM_INT(_15321)) {
        _15322 = _15321 + _ch_26941;
        if ((object)((uintptr_t)_15322 + (uintptr_t)HIGH_BITS) >= 0){
            _15322 = NewDouble((eudouble)_15322);
        }
    }
    else {
        _15322 = binary_op(PLUS, _15321, _ch_26941);
    }
    DeRef(_15321);
    _15321 = NOVALUE;
    // SubProg Scanner pc: 2946 op: MINUS (10)
    _15323 = 55;
    // SubProg Scanner pc: 2950 op: MINUS (10)
    DeRef(_d_26949);
    if (IS_ATOM_INT(_15322)) {
        _d_26949 = _15322 - 55;
        if ((object)((uintptr_t)_d_26949 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26949 = NewDouble((eudouble)_d_26949);
        }
    }
    else {
        _d_26949 = binary_op(MINUS, _15322, 55);
    }
    DeRef(_15322);
    _15322 = NOVALUE;
    _15323 = NOVALUE;
    // SubProg Scanner pc: 2954 op: ELSE (23)
    goto L7C; // [2954] 2868
    // SubProg Scanner pc: 2956 op: NOP1 (159)
L7F: // addr: 2957 pc: 2956 sub: 26939 op: 159
    // SubProg Scanner pc: 2957 op: STARTLINE (58)

    /** scanner.e:1903							elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2959 op: GREATEREQ (2)
    _15325 = (_ch_26941 >= 97);
    // SubProg Scanner pc: 2963 op: SC1_AND_IF (146)
    if (_15325 == 0) {
        goto L80; // [2963] 2996
    }
    // SubProg Scanner pc: 2967 op: LESSEQ (5)
    _15327 = (_ch_26941 <= 102);
    // SubProg Scanner pc: 2971 op: NOP1 (159)
    // SubProg Scanner pc: 2972 op: IF (20)
    if (_15327 == 0)
    {
        DeRef(_15327);
        _15327 = NOVALUE;
        goto L80; // [2972] 2996
    }
    else{
        DeRef(_15327);
        _15327 = NOVALUE;
    }
    // SubProg Scanner pc: 2975 op: STARTLINE (58)

    /** scanner.e:1904								d = (d * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2977 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26949)) {
        if (_d_26949 == (short)_d_26949){
            _15328 = _d_26949 * 16;
        }
        else{
            _15328 = NewDouble(_d_26949 * (eudouble)16);
        }
    }
    else {
        _15328 = binary_op(MULTIPLY, _d_26949, 16);
    }
    // SubProg Scanner pc: 2981 op: PLUS (11)
    if (IS_ATOM_INT(_15328)) {
        _15329 = _15328 + _ch_26941;
        if ((object)((uintptr_t)_15329 + (uintptr_t)HIGH_BITS) >= 0){
            _15329 = NewDouble((eudouble)_15329);
        }
    }
    else {
        _15329 = binary_op(PLUS, _15328, _ch_26941);
    }
    DeRef(_15328);
    _15328 = NOVALUE;
    // SubProg Scanner pc: 2985 op: MINUS (10)
    _15330 = 87;
    // SubProg Scanner pc: 2989 op: MINUS (10)
    DeRef(_d_26949);
    if (IS_ATOM_INT(_15329)) {
        _d_26949 = _15329 - 87;
        if ((object)((uintptr_t)_d_26949 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26949 = NewDouble((eudouble)_d_26949);
        }
    }
    else {
        _d_26949 = binary_op(MINUS, _15329, 87);
    }
    DeRef(_15329);
    _15329 = NOVALUE;
    _15330 = NOVALUE;
    // SubProg Scanner pc: 2993 op: ELSE (23)
    goto L7C; // [2993] 2868
    // SubProg Scanner pc: 2995 op: NOP1 (159)
L80: // addr: 2996 pc: 2995 sub: 26939 op: 159
    // SubProg Scanner pc: 2996 op: STARTLINE (58)

    /** scanner.e:1905							elsif ch = '_' then*/
    // SubProg Scanner pc: 2998 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 95)
    goto L7D; // [2998] 3015
    // SubProg Scanner pc: 3002 op: ELSE (23)
    goto L7C; // [3002] 2868
    // SubProg Scanner pc: 3004 op: NOP1 (159)
    // SubProg Scanner pc: 3005 op: STARTLINE (58)

    /** scanner.e:1908								exit*/
    // SubProg Scanner pc: 3007 op: EXIT (61)
    goto L7D; // [3007] 3015
    // SubProg Scanner pc: 3009 op: NOP1 (159)
    // SubProg Scanner pc: 3010 op: STARTLINE (58)

    /** scanner.e:1910						end while*/
    // SubProg Scanner pc: 3012 op: ENDWHILE (22)
    goto L7C; // [3012] 2868
    // SubProg Scanner pc: 3014 op: NOP1 (159)
L7D: // addr: 3015 pc: 3014 sub: 26939 op: 159
    // SubProg Scanner pc: 3015 op: NOP1 (159)
L7B: // addr: 3016 pc: 3015 sub: 26939 op: 159
    // SubProg Scanner pc: 3016 op: STARTLINE (58)

    /** scanner.e:1913					ungetch()*/
    // SubProg Scanner pc: 3018 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3020 op: STARTLINE (58)

    /** scanner.e:1914					if is_int and is_integer(i) then*/
    // SubProg Scanner pc: 3022 op: SC1_AND_IF (146)
    if (_is_int_26952 == 0) {
        goto L81; // [3022] 3053
    }
    // SubProg Scanner pc: 3026 op: PROC (27)
    _15334 = _5is_integer(_i_26942);
    // SubProg Scanner pc: 3030 op: NOP1 (159)
    // SubProg Scanner pc: 3031 op: IF (20)
    if (_15334 == 0) {
        DeRef(_15334);
        _15334 = NOVALUE;
        goto L81; // [3031] 3053
    }
    else {
        if (!IS_ATOM_INT(_15334) && DBL_PTR(_15334)->dbl == 0.0){
            DeRef(_15334);
            _15334 = NOVALUE;
            goto L81; // [3031] 3053
        }
        DeRef(_15334);
        _15334 = NOVALUE;
    }
    DeRef(_15334);
    _15334 = NOVALUE;
    // SubProg Scanner pc: 3034 op: STARTLINE (58)

    /** scanner.e:1915						return {ATOM, NewIntSym(i)}*/
    // SubProg Scanner pc: 3036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3038 op: PROC (27)
    _15335 = _53NewIntSym(_i_26942);
    // SubProg Scanner pc: 3042 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15335;
    _15336 = MAKE_SEQ(_1);
    _15335 = NOVALUE;
    // SubProg Scanner pc: 3046 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15336;
    // SubProg Scanner pc: 3050 op: ELSE (23)
    goto L1; // [3050] 10
    // SubProg Scanner pc: 3052 op: NOP1 (159)
L81: // addr: 3053 pc: 3052 sub: 26939 op: 159
    // SubProg Scanner pc: 3053 op: STARTLINE (58)

    /** scanner.e:1917						if d <= MAXINT_DBL then            -- d is always >= 0*/
    // SubProg Scanner pc: 3055 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3057 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3059 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _d_26949, 1073741823)){
        goto L82; // [3059] 3082
    }
    // SubProg Scanner pc: 3063 op: STARTLINE (58)

    /** scanner.e:1918							return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 3065 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3067 op: PROC (27)
    Ref(_d_26949);
    _15338 = _53NewIntSym(_d_26949);
    // SubProg Scanner pc: 3071 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15338;
    _15339 = MAKE_SEQ(_1);
    _15338 = NOVALUE;
    // SubProg Scanner pc: 3075 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15339;
    // SubProg Scanner pc: 3079 op: ELSE (23)
    goto L1; // [3079] 10
    // SubProg Scanner pc: 3081 op: NOP1 (159)
L82: // addr: 3082 pc: 3081 sub: 26939 op: 159
    // SubProg Scanner pc: 3082 op: STARTLINE (58)

    /** scanner.e:1920							return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 3084 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3086 op: PROC (27)
    Ref(_d_26949);
    _15340 = _53NewDoubleSym(_d_26949);
    // SubProg Scanner pc: 3090 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15340;
    _15341 = MAKE_SEQ(_1);
    _15340 = NOVALUE;
    // SubProg Scanner pc: 3094 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15341;
    // SubProg Scanner pc: 3098 op: NOP1 (159)
    // SubProg Scanner pc: 3099 op: NOP1 (159)
    // SubProg Scanner pc: 3100 op: NOP1 (159)
    // SubProg Scanner pc: 3101 op: ELSE (23)
    goto L1; // [3101] 10
    // SubProg Scanner pc: 3103 op: NOP1 (159)
L72: // addr: 3104 pc: 3103 sub: 26939 op: 159
    // SubProg Scanner pc: 3104 op: STARTLINE (58)

    /** scanner.e:1925			elsif class = res:MULTIPLY then*/
    // SubProg Scanner pc: 3106 op: EQUALS_IFW_I (121)
    if (_class_26953 != 13)
    goto L83; // [3106] 3156
    // SubProg Scanner pc: 3110 op: STARTLINE (58)

    /** scanner.e:1926				ch = getch()*/
    // SubProg Scanner pc: 3112 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 3115 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 3117 op: STARTLINE (58)

    /** scanner.e:1927				if ch = '=' then*/
    // SubProg Scanner pc: 3119 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 61)
    goto L84; // [3119] 3138
    // SubProg Scanner pc: 3123 op: STARTLINE (58)

    /** scanner.e:1928					return {MULTIPLY_EQUALS, 0}*/
    // SubProg Scanner pc: 3125 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3127 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 517;
    ((intptr_t *)_2)[2] = 0;
    _15345 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3131 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15345;
    // SubProg Scanner pc: 3135 op: ELSE (23)
    goto L1; // [3135] 10
    // SubProg Scanner pc: 3137 op: NOP1 (159)
L84: // addr: 3138 pc: 3137 sub: 26939 op: 159
    // SubProg Scanner pc: 3138 op: STARTLINE (58)

    /** scanner.e:1930					ungetch()*/
    // SubProg Scanner pc: 3140 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3142 op: STARTLINE (58)

    /** scanner.e:1931					return {res:MULTIPLY, 0}*/
    // SubProg Scanner pc: 3144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 13;
    ((intptr_t *)_2)[2] = 0;
    _15346 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3148 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15346;
    // SubProg Scanner pc: 3152 op: NOP1 (159)
    // SubProg Scanner pc: 3153 op: ELSE (23)
    goto L1; // [3153] 10
    // SubProg Scanner pc: 3155 op: NOP1 (159)
L83: // addr: 3156 pc: 3155 sub: 26939 op: 159
    // SubProg Scanner pc: 3156 op: STARTLINE (58)

    /** scanner.e:1934			elsif class = res:DIVIDE then*/
    // SubProg Scanner pc: 3158 op: EQUALS_IFW_I (121)
    if (_class_26953 != 14)
    goto L85; // [3158] 3360
    // SubProg Scanner pc: 3162 op: STARTLINE (58)

    /** scanner.e:1935				ch = getch()*/
    // SubProg Scanner pc: 3164 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 3167 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 3169 op: STARTLINE (58)

    /** scanner.e:1936				if ch = '=' then*/
    // SubProg Scanner pc: 3171 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 61)
    goto L86; // [3171] 3190
    // SubProg Scanner pc: 3175 op: STARTLINE (58)

    /** scanner.e:1937					return {DIVIDE_EQUALS, 0}*/
    // SubProg Scanner pc: 3177 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3179 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 518;
    ((intptr_t *)_2)[2] = 0;
    _15350 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3183 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15350;
    // SubProg Scanner pc: 3187 op: ELSE (23)
    goto L1; // [3187] 10
    // SubProg Scanner pc: 3189 op: NOP1 (159)
L86: // addr: 3190 pc: 3189 sub: 26939 op: 159
    // SubProg Scanner pc: 3190 op: STARTLINE (58)

    /** scanner.e:1938				elsif ch = '*' then*/
    // SubProg Scanner pc: 3192 op: EQUALS_IFW_I (121)
    if (_ch_26941 != 42)
    goto L87; // [3192] 3342
    // SubProg Scanner pc: 3196 op: STARTLINE (58)

    /** scanner.e:1940					cline = line_number*/
    // SubProg Scanner pc: 3198 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3200 op: ASSIGN (18)
    _cline_26946 = _5line_number_12478;
    // SubProg Scanner pc: 3203 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 3205 op: STARTLINE (58)

    /** scanner.e:1941					integer cnest = 1*/
    // SubProg Scanner pc: 3207 op: ASSIGN_I (113)
    _cnest_27601 = 1;
    // SubProg Scanner pc: 3210 op: STARTLINE (58)

    /** scanner.e:1942					while cnest > 0 do*/
    // SubProg Scanner pc: 3212 op: NOP2 (110)
    // SubProg Scanner pc: 3214 op: NOPWHILE (158)
L88: // addr: 3215 pc: 3214 sub: 26939 op: 158
    // SubProg Scanner pc: 3215 op: GREATER_IFW_I (124)
    if (_cnest_27601 <= 0)
    goto L89; // [3215] 3323
    // SubProg Scanner pc: 3219 op: STARTLINE (58)

    /** scanner.e:1943						ch = getch()*/
    // SubProg Scanner pc: 3221 op: PROC (27)
    _ch_26941 = _61getch();
    // SubProg Scanner pc: 3224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26941)) {
        _1 = (object)(DBL_PTR(_ch_26941)->dbl);
        DeRefDS(_ch_26941);
        _ch_26941 = _1;
    }
    // SubProg Scanner pc: 3226 op: STARTLINE (58)

    /** scanner.e:1944						switch ch do*/
    // SubProg Scanner pc: 3228 op: SWITCH_I (193)
    _0 = _ch_26941;
    switch ( _0 ){ 
        // SubProg Scanner pc: 3233 op: STARTLINE (58)

        /** scanner.e:1945							case  END_OF_FILE_CHAR then*/
        // SubProg Scanner pc: 3235 op: CASE (186)
        case 26:
        // SubProg Scanner pc: 3237 op: STARTLINE (58)

        /** scanner.e:1946								exit*/
        // SubProg Scanner pc: 3239 op: EXIT (61)
        goto L89; // [3239] 3323
        // SubProg Scanner pc: 3241 op: ELSE (23)
        goto L88; // [3241] 3215
        // SubProg Scanner pc: 3243 op: STARTLINE (58)

        /** scanner.e:1948							case '\n' then*/
        // SubProg Scanner pc: 3245 op: CASE (186)
        case 10:
        // SubProg Scanner pc: 3247 op: STARTLINE (58)

        /** scanner.e:1949								read_line()*/
        // SubProg Scanner pc: 3249 op: PROC (27)
        _61read_line();
        // SubProg Scanner pc: 3251 op: ELSE (23)
        goto L88; // [3251] 3215
        // SubProg Scanner pc: 3253 op: STARTLINE (58)

        /** scanner.e:1951							case '*' then*/
        // SubProg Scanner pc: 3255 op: CASE (186)
        case 42:
        // SubProg Scanner pc: 3257 op: STARTLINE (58)

        /** scanner.e:1952								ch = getch()*/
        // SubProg Scanner pc: 3259 op: PROC (27)
        _ch_26941 = _61getch();
        // SubProg Scanner pc: 3262 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26941)) {
            _1 = (object)(DBL_PTR(_ch_26941)->dbl);
            DeRefDS(_ch_26941);
            _ch_26941 = _1;
        }
        // SubProg Scanner pc: 3264 op: STARTLINE (58)

        /** scanner.e:1953								if ch = '/' then*/
        // SubProg Scanner pc: 3266 op: EQUALS_IFW_I (121)
        if (_ch_26941 != 47)
        goto L8A; // [3266] 3279
        // SubProg Scanner pc: 3270 op: STARTLINE (58)

        /** scanner.e:1954									cnest -= 1*/
        // SubProg Scanner pc: 3272 op: MINUS_I (116)
        _cnest_27601 = _cnest_27601 - 1;
        // SubProg Scanner pc: 3276 op: ELSE (23)
        goto L88; // [3276] 3215
        // SubProg Scanner pc: 3278 op: NOP1 (159)
L8A: // addr: 3279 pc: 3278 sub: 26939 op: 159
        // SubProg Scanner pc: 3279 op: STARTLINE (58)

        /** scanner.e:1956									ungetch()*/
        // SubProg Scanner pc: 3281 op: PROC (27)
        _61ungetch();
        // SubProg Scanner pc: 3283 op: NOP1 (159)
        // SubProg Scanner pc: 3284 op: ELSE (23)
        goto L88; // [3284] 3215
        // SubProg Scanner pc: 3286 op: STARTLINE (58)

        /** scanner.e:1959							case '/' then*/
        // SubProg Scanner pc: 3288 op: CASE (186)
        case 47:
        // SubProg Scanner pc: 3290 op: STARTLINE (58)

        /** scanner.e:1960								ch = getch()*/
        // SubProg Scanner pc: 3292 op: PROC (27)
        _ch_26941 = _61getch();
        // SubProg Scanner pc: 3295 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26941)) {
            _1 = (object)(DBL_PTR(_ch_26941)->dbl);
            DeRefDS(_ch_26941);
            _ch_26941 = _1;
        }
        // SubProg Scanner pc: 3297 op: STARTLINE (58)

        /** scanner.e:1961								if ch = '*' then*/
        // SubProg Scanner pc: 3299 op: EQUALS_IFW_I (121)
        if (_ch_26941 != 42)
        goto L8B; // [3299] 3312
        // SubProg Scanner pc: 3303 op: STARTLINE (58)

        /** scanner.e:1962									cnest += 1*/
        // SubProg Scanner pc: 3305 op: PLUS1_I (117)
        _cnest_27601 = _cnest_27601 + 1;
        // SubProg Scanner pc: 3309 op: ELSE (23)
        goto L8C; // [3309] 3317
        // SubProg Scanner pc: 3311 op: NOP1 (159)
L8B: // addr: 3312 pc: 3311 sub: 26939 op: 159
        // SubProg Scanner pc: 3312 op: STARTLINE (58)

        /** scanner.e:1964									ungetch()*/
        // SubProg Scanner pc: 3314 op: PROC (27)
        _61ungetch();
        // SubProg Scanner pc: 3316 op: NOP1 (159)
L8C: // addr: 3317 pc: 3316 sub: 26939 op: 159
        // SubProg Scanner pc: 3317 op: NOPSWITCH (187)
    ;}    // SubProg Scanner pc: 3318 op: STARTLINE (58)

    /** scanner.e:1968					end while*/
    // SubProg Scanner pc: 3320 op: ENDWHILE (22)
    goto L88; // [3320] 3215
    // SubProg Scanner pc: 3322 op: NOP1 (159)
L89: // addr: 3323 pc: 3322 sub: 26939 op: 159
    // SubProg Scanner pc: 3323 op: STARTLINE (58)

    /** scanner.e:1970					if cnest > 0 then*/
    // SubProg Scanner pc: 3325 op: GREATER_IFW_I (124)
    if (_cnest_27601 <= 0)
    goto L8D; // [3325] 3337
    // SubProg Scanner pc: 3329 op: STARTLINE (58)

    /** scanner.e:1971						CompileErr(42, cline)*/
    // SubProg Scanner pc: 3331 op: PROC (27)
    _49CompileErr(42, _cline_26946, 0);
    // SubProg Scanner pc: 3336 op: NOP1 (159)
L8D: // addr: 3337 pc: 3336 sub: 26939 op: 159
    // SubProg Scanner pc: 3337 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cnest_27601
    // SubProg Scanner pc: 3339 op: ELSE (23)
    goto L1; // [3339] 10
    // SubProg Scanner pc: 3341 op: NOP1 (159)
L87: // addr: 3342 pc: 3341 sub: 26939 op: 159
    // SubProg Scanner pc: 3342 op: STARTLINE (58)

    /** scanner.e:1974					ungetch()*/
    // SubProg Scanner pc: 3344 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3346 op: STARTLINE (58)

    /** scanner.e:1975					return {res:DIVIDE, 0}*/
    // SubProg Scanner pc: 3348 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 14;
    ((intptr_t *)_2)[2] = 0;
    _15363 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3352 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15363;
    // SubProg Scanner pc: 3356 op: NOP1 (159)
    // SubProg Scanner pc: 3357 op: ELSE (23)
    goto L1; // [3357] 10
    // SubProg Scanner pc: 3359 op: NOP1 (159)
L85: // addr: 3360 pc: 3359 sub: 26939 op: 159
    // SubProg Scanner pc: 3360 op: STARTLINE (58)

    /** scanner.e:1977			elsif class = SINGLE_QUOTE then*/
    // SubProg Scanner pc: 3362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3364 op: EQUALS_IFW (104)
    if (_class_26953 != -5)
    goto L8E; // [3364] 3506
    // SubProg Scanner pc: 3368 op: STARTLINE (58)

    /** scanner.e:1978				atom ach = getch()*/
    // SubProg Scanner pc: 3370 op: PROC (27)
    _0 = _ach_27630;
    _ach_27630 = _61getch();
    DeRef(_0);
    // SubProg Scanner pc: 3373 op: STARTLINE (58)

    /** scanner.e:1979				if ach = '\\' then*/
    // SubProg Scanner pc: 3375 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27630, 92)){
        goto L8F; // [3375] 3388
    }
    // SubProg Scanner pc: 3379 op: STARTLINE (58)

    /** scanner.e:1980					ach = EscapeChar('\'')*/
    // SubProg Scanner pc: 3381 op: PROC (27)
    _0 = _ach_27630;
    _ach_27630 = _61EscapeChar(39);
    DeRef(_0);
    // SubProg Scanner pc: 3385 op: ELSE (23)
    goto L90; // [3385] 3439
    // SubProg Scanner pc: 3387 op: NOP1 (159)
L8F: // addr: 3388 pc: 3387 sub: 26939 op: 159
    // SubProg Scanner pc: 3388 op: STARTLINE (58)

    /** scanner.e:1981				elsif ach = '\t' then*/
    // SubProg Scanner pc: 3390 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27630, 9)){
        goto L91; // [3390] 3404
    }
    // SubProg Scanner pc: 3394 op: STARTLINE (58)

    /** scanner.e:1982					CompileErr(145)*/
    // SubProg Scanner pc: 3396 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(145, _21958, 0);
    // SubProg Scanner pc: 3401 op: ELSE (23)
    goto L90; // [3401] 3439
    // SubProg Scanner pc: 3403 op: NOP1 (159)
L91: // addr: 3404 pc: 3403 sub: 26939 op: 159
    // SubProg Scanner pc: 3404 op: STARTLINE (58)

    /** scanner.e:1983				elsif ach = '\'' then*/
    // SubProg Scanner pc: 3406 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27630, 39)){
        goto L92; // [3406] 3420
    }
    // SubProg Scanner pc: 3410 op: STARTLINE (58)

    /** scanner.e:1984					CompileErr(137)*/
    // SubProg Scanner pc: 3412 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(137, _21958, 0);
    // SubProg Scanner pc: 3417 op: ELSE (23)
    goto L90; // [3417] 3439
    // SubProg Scanner pc: 3419 op: NOP1 (159)
L92: // addr: 3420 pc: 3419 sub: 26939 op: 159
    // SubProg Scanner pc: 3420 op: STARTLINE (58)

    /** scanner.e:1985				elsif ach = '\n' then*/
    // SubProg Scanner pc: 3422 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27630, 10)){
        goto L93; // [3422] 3438
    }
    // SubProg Scanner pc: 3426 op: STARTLINE (58)

    /** scanner.e:1986					CompileErr(68, {"character", "end of line"})*/
    // SubProg Scanner pc: 3428 op: RIGHT_BRACE_2 (85)
    RefDS(_15372);
    RefDS(_15371);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15371;
    ((intptr_t *)_2)[2] = _15372;
    _15373 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3432 op: PROC (27)
    _49CompileErr(68, _15373, 0);
    _15373 = NOVALUE;
    // SubProg Scanner pc: 3437 op: NOP1 (159)
L93: // addr: 3438 pc: 3437 sub: 26939 op: 159
    // SubProg Scanner pc: 3438 op: NOP1 (159)
L90: // addr: 3439 pc: 3438 sub: 26939 op: 159
    // SubProg Scanner pc: 3439 op: STARTLINE (58)

    /** scanner.e:1988				if getch() != '\'' then*/
    // SubProg Scanner pc: 3441 op: PROC (27)
    _15374 = _61getch();
    // SubProg Scanner pc: 3444 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _15374, 39)){
        DeRef(_15374);
        _15374 = NOVALUE;
        goto L94; // [3444] 3456
    }
    DeRef(_15374);
    _15374 = NOVALUE;
    // SubProg Scanner pc: 3448 op: STARTLINE (58)

    /** scanner.e:1989					CompileErr(56)*/
    // SubProg Scanner pc: 3450 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(56, _21958, 0);
    // SubProg Scanner pc: 3455 op: NOP1 (159)
L94: // addr: 3456 pc: 3455 sub: 26939 op: 159
    // SubProg Scanner pc: 3456 op: STARTLINE (58)

    /** scanner.e:1991				if is_integer(ach) then*/
    // SubProg Scanner pc: 3458 op: PROC (27)
    Ref(_ach_27630);
    _15376 = _5is_integer(_ach_27630);
    // SubProg Scanner pc: 3462 op: IF (20)
    if (_15376 == 0) {
        DeRef(_15376);
        _15376 = NOVALUE;
        goto L95; // [3462] 3484
    }
    else {
        if (!IS_ATOM_INT(_15376) && DBL_PTR(_15376)->dbl == 0.0){
            DeRef(_15376);
            _15376 = NOVALUE;
            goto L95; // [3462] 3484
        }
        DeRef(_15376);
        _15376 = NOVALUE;
    }
    DeRef(_15376);
    _15376 = NOVALUE;
    // SubProg Scanner pc: 3465 op: STARTLINE (58)

    /** scanner.e:1992					return {ATOM, NewIntSym(ach)}*/
    // SubProg Scanner pc: 3467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3469 op: PROC (27)
    Ref(_ach_27630);
    _15377 = _53NewIntSym(_ach_27630);
    // SubProg Scanner pc: 3473 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15377;
    _15378 = MAKE_SEQ(_1);
    _15377 = NOVALUE;
    // SubProg Scanner pc: 3477 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27630
    DeRef(_ach_27630);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15378;
    // SubProg Scanner pc: 3481 op: ELSE (23)
    goto L96; // [3481] 3501
    // SubProg Scanner pc: 3483 op: NOP1 (159)
L95: // addr: 3484 pc: 3483 sub: 26939 op: 159
    // SubProg Scanner pc: 3484 op: STARTLINE (58)

    /** scanner.e:1994					return {ATOM, NewDoubleSym(ach)}*/
    // SubProg Scanner pc: 3486 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3488 op: PROC (27)
    Ref(_ach_27630);
    _15379 = _53NewDoubleSym(_ach_27630);
    // SubProg Scanner pc: 3492 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15379;
    _15380 = MAKE_SEQ(_1);
    _15379 = NOVALUE;
    // SubProg Scanner pc: 3496 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27630
    DeRef(_ach_27630);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15380;
    // SubProg Scanner pc: 3500 op: NOP1 (159)
L96: // addr: 3501 pc: 3500 sub: 26939 op: 159
    // SubProg Scanner pc: 3501 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ach_27630
    DeRef(_ach_27630);
    _ach_27630 = NOVALUE;
    // SubProg Scanner pc: 3503 op: ELSE (23)
    goto L1; // [3503] 10
    // SubProg Scanner pc: 3505 op: NOP1 (159)
L8E: // addr: 3506 pc: 3505 sub: 26939 op: 159
    // SubProg Scanner pc: 3506 op: STARTLINE (58)

    /** scanner.e:1997			elsif class = LESS then*/
    // SubProg Scanner pc: 3508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3510 op: EQUALS_IFW (104)
    if (_class_26953 != 1)
    goto L97; // [3510] 3558
    // SubProg Scanner pc: 3514 op: STARTLINE (58)

    /** scanner.e:1998				if getch() = '=' then*/
    // SubProg Scanner pc: 3516 op: PROC (27)
    _15382 = _61getch();
    // SubProg Scanner pc: 3519 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15382, 61)){
        DeRef(_15382);
        _15382 = NOVALUE;
        goto L98; // [3519] 3538
    }
    DeRef(_15382);
    _15382 = NOVALUE;
    // SubProg Scanner pc: 3523 op: STARTLINE (58)

    /** scanner.e:1999					return {LESSEQ, 0}*/
    // SubProg Scanner pc: 3525 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3527 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 5;
    ((intptr_t *)_2)[2] = 0;
    _15384 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3531 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15384;
    // SubProg Scanner pc: 3535 op: ELSE (23)
    goto L1; // [3535] 10
    // SubProg Scanner pc: 3537 op: NOP1 (159)
L98: // addr: 3538 pc: 3537 sub: 26939 op: 159
    // SubProg Scanner pc: 3538 op: STARTLINE (58)

    /** scanner.e:2001					ungetch()*/
    // SubProg Scanner pc: 3540 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3542 op: STARTLINE (58)

    /** scanner.e:2002					return {LESS, 0}*/
    // SubProg Scanner pc: 3544 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3546 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _15385 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3550 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15385;
    // SubProg Scanner pc: 3554 op: NOP1 (159)
    // SubProg Scanner pc: 3555 op: ELSE (23)
    goto L1; // [3555] 10
    // SubProg Scanner pc: 3557 op: NOP1 (159)
L97: // addr: 3558 pc: 3557 sub: 26939 op: 159
    // SubProg Scanner pc: 3558 op: STARTLINE (58)

    /** scanner.e:2005			elsif class = GREATER then*/
    // SubProg Scanner pc: 3560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3562 op: EQUALS_IFW (104)
    if (_class_26953 != 6)
    goto L99; // [3562] 3610
    // SubProg Scanner pc: 3566 op: STARTLINE (58)

    /** scanner.e:2006				if getch() = '=' then*/
    // SubProg Scanner pc: 3568 op: PROC (27)
    _15387 = _61getch();
    // SubProg Scanner pc: 3571 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15387, 61)){
        DeRef(_15387);
        _15387 = NOVALUE;
        goto L9A; // [3571] 3590
    }
    DeRef(_15387);
    _15387 = NOVALUE;
    // SubProg Scanner pc: 3575 op: STARTLINE (58)

    /** scanner.e:2007					return {GREATEREQ, 0}*/
    // SubProg Scanner pc: 3577 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3579 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = 0;
    _15389 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3583 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15389;
    // SubProg Scanner pc: 3587 op: ELSE (23)
    goto L1; // [3587] 10
    // SubProg Scanner pc: 3589 op: NOP1 (159)
L9A: // addr: 3590 pc: 3589 sub: 26939 op: 159
    // SubProg Scanner pc: 3590 op: STARTLINE (58)

    /** scanner.e:2009					ungetch()*/
    // SubProg Scanner pc: 3592 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3594 op: STARTLINE (58)

    /** scanner.e:2010					return {GREATER, 0}*/
    // SubProg Scanner pc: 3596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3598 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 6;
    ((intptr_t *)_2)[2] = 0;
    _15390 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3602 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15390;
    // SubProg Scanner pc: 3606 op: NOP1 (159)
    // SubProg Scanner pc: 3607 op: ELSE (23)
    goto L1; // [3607] 10
    // SubProg Scanner pc: 3609 op: NOP1 (159)
L99: // addr: 3610 pc: 3609 sub: 26939 op: 159
    // SubProg Scanner pc: 3610 op: STARTLINE (58)

    /** scanner.e:2013			elsif class = BANG then*/
    // SubProg Scanner pc: 3612 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3614 op: EQUALS_IFW (104)
    if (_class_26953 != -1)
    goto L9B; // [3614] 3662
    // SubProg Scanner pc: 3618 op: STARTLINE (58)

    /** scanner.e:2014				if getch() = '=' then*/
    // SubProg Scanner pc: 3620 op: PROC (27)
    _15392 = _61getch();
    // SubProg Scanner pc: 3623 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15392, 61)){
        DeRef(_15392);
        _15392 = NOVALUE;
        goto L9C; // [3623] 3642
    }
    DeRef(_15392);
    _15392 = NOVALUE;
    // SubProg Scanner pc: 3627 op: STARTLINE (58)

    /** scanner.e:2015					return {NOTEQ, 0}*/
    // SubProg Scanner pc: 3629 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3631 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = 0;
    _15394 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3635 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15394;
    // SubProg Scanner pc: 3639 op: ELSE (23)
    goto L1; // [3639] 10
    // SubProg Scanner pc: 3641 op: NOP1 (159)
L9C: // addr: 3642 pc: 3641 sub: 26939 op: 159
    // SubProg Scanner pc: 3642 op: STARTLINE (58)

    /** scanner.e:2017					ungetch()*/
    // SubProg Scanner pc: 3644 op: PROC (27)
    _61ungetch();
    // SubProg Scanner pc: 3646 op: STARTLINE (58)

    /** scanner.e:2018					return {BANG, 0}*/
    // SubProg Scanner pc: 3648 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3650 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _15395 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3654 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    DeRef(_15394);
    _15394 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15395;
    // SubProg Scanner pc: 3658 op: NOP1 (159)
    // SubProg Scanner pc: 3659 op: ELSE (23)
    goto L1; // [3659] 10
    // SubProg Scanner pc: 3661 op: NOP1 (159)
L9B: // addr: 3662 pc: 3661 sub: 26939 op: 159
    // SubProg Scanner pc: 3662 op: STARTLINE (58)

    /** scanner.e:2021			elsif class = KEYWORD then*/
    // SubProg Scanner pc: 3664 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3666 op: EQUALS_IFW (104)
    if (_class_26953 != -10)
    goto L9D; // [3666] 3699
    // SubProg Scanner pc: 3670 op: STARTLINE (58)

    /** scanner.e:2022				return {keylist[ch - KEYWORD_BASE][K_TOKEN], 0}*/
    // SubProg Scanner pc: 3672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3674 op: MINUS (10)
    _15397 = _ch_26941 - 128;
    // SubProg Scanner pc: 3678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_62keylist_22772);
    _15398 = (object)*(((s1_ptr)_2)->base + _15397);
    // SubProg Scanner pc: 3682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15398);
    _15399 = (object)*(((s1_ptr)_2)->base + 3);
    _15398 = NOVALUE;
    // SubProg Scanner pc: 3688 op: RIGHT_BRACE_2 (85)
    Ref(_15399);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15399;
    ((intptr_t *)_2)[2] = 0;
    _15400 = MAKE_SEQ(_1);
    _15399 = NOVALUE;
    // SubProg Scanner pc: 3692 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    DeRef(_15394);
    _15394 = NOVALUE;
    _15162 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15395);
    _15395 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    _15397 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15400;
    // SubProg Scanner pc: 3696 op: ELSE (23)
    goto L1; // [3696] 10
    // SubProg Scanner pc: 3698 op: NOP1 (159)
L9D: // addr: 3699 pc: 3698 sub: 26939 op: 159
    // SubProg Scanner pc: 3699 op: STARTLINE (58)

    /** scanner.e:2024			elsif class = BUILTIN then*/
    // SubProg Scanner pc: 3701 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3703 op: EQUALS_IFW (104)
    if (_class_26953 != -9)
    goto L9E; // [3703] 3756
    // SubProg Scanner pc: 3707 op: STARTLINE (58)

    /** scanner.e:2025				name = keylist[ch - BUILTIN_BASE + NUM_KEYWORDS][K_NAME]*/
    // SubProg Scanner pc: 3709 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3711 op: MINUS (10)
    _15402 = _ch_26941 - 170;
    if ((object)((uintptr_t)_15402 +(uintptr_t) HIGH_BITS) >= 0){
        _15402 = NewDouble((eudouble)_15402);
    }
    // SubProg Scanner pc: 3715 op: PLUS (11)
    if (IS_ATOM_INT(_15402)) {
        _15403 = _15402 + 24;
    }
    else {
        _15403 = NewDouble(DBL_PTR(_15402)->dbl + (eudouble)24);
    }
    DeRef(_15402);
    _15402 = NOVALUE;
    // SubProg Scanner pc: 3719 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_62keylist_22772);
    if (!IS_ATOM_INT(_15403)){
        _15404 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15403)->dbl));
    }
    else{
        _15404 = (object)*(((s1_ptr)_2)->base + _15403);
    }
    // SubProg Scanner pc: 3723 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3725 op: RHS_SUBS_CHECK (92)
    DeRef(_name_26954);
    _2 = (object)SEQ_PTR(_15404);
    _name_26954 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_name_26954);
    _15404 = NOVALUE;
    // SubProg Scanner pc: 3729 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 3731 op: STARTLINE (58)

    /** scanner.e:2026				return keyfind(name, -1)*/
    // SubProg Scanner pc: 3733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3735 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3737 op: PROC (27)
    RefDS(_name_26954);
    _31798 = _53hashfn(_name_26954);
    // SubProg Scanner pc: 3741 op: PROC (27)
    RefDS(_name_26954);
    _15406 = _53keyfind(_name_26954, -1, _5current_file_no_12477, 0, _31798);
    _31798 = NOVALUE;
    // SubProg Scanner pc: 3749 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRefDS(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    DeRef(_15394);
    _15394 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15403);
    _15403 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15400);
    _15400 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15395);
    _15395 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15397);
    _15397 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15406;
    // SubProg Scanner pc: 3753 op: ELSE (23)
    goto L1; // [3753] 10
    // SubProg Scanner pc: 3755 op: NOP1 (159)
L9E: // addr: 3756 pc: 3755 sub: 26939 op: 159
    // SubProg Scanner pc: 3756 op: STARTLINE (58)

    /** scanner.e:2028			elsif class = BACK_QUOTE then*/
    // SubProg Scanner pc: 3758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3760 op: EQUALS_IFW (104)
    if (_class_26953 != -12)
    goto L9F; // [3760] 3777
    // SubProg Scanner pc: 3764 op: STARTLINE (58)

    /** scanner.e:2029				return ExtendedString( '`' )*/
    // SubProg Scanner pc: 3766 op: PROC (27)
    _15408 = _61ExtendedString(96);
    // SubProg Scanner pc: 3770 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26941

// block var i_26942

// block var sp_26943

// block var prev_Nne_26944

// block var pch_26945

// block var cline_26946

// block var yytext_26947
    DeRef(_yytext_26947);

// block var namespaces_26948
    DeRef(_namespaces_26948);

// block var d_26949
    DeRef(_d_26949);

// block var tok_26951
    DeRef(_tok_26951);

// block var is_int_26952

// block var class_26953

// block var name_26954
    DeRef(_name_26954);
    DeRef(_15103);
    _15103 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    DeRef(_15031);
    _15031 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15119 = NOVALUE;
    DeRef(_15318);
    _15318 = NOVALUE;
    DeRef(_15257);
    _15257 = NOVALUE;
    DeRef(_15267);
    _15267 = NOVALUE;
    DeRef(_15040);
    _15040 = NOVALUE;
    DeRef(_15345);
    _15345 = NOVALUE;
    DeRef(_15056);
    _15056 = NOVALUE;
    DeRef(_15394);
    _15394 = NOVALUE;
    _15162 = NOVALUE;
    DeRef(_15403);
    _15403 = NOVALUE;
    _15286 = NOVALUE;
    DeRef(_15159);
    _15159 = NOVALUE;
    DeRef(_15241);
    _15241 = NOVALUE;
    DeRef(_15350);
    _15350 = NOVALUE;
    DeRef(_15336);
    _15336 = NOVALUE;
    DeRef(_15207);
    _15207 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15152);
    _15152 = NOVALUE;
    _15082 = NOVALUE;
    _15172 = NOVALUE;
    DeRef(_15406);
    _15406 = NOVALUE;
    DeRef(_15148);
    _15148 = NOVALUE;
    DeRef(_15201);
    _15201 = NOVALUE;
    DeRef(_15046);
    _15046 = NOVALUE;
    DeRef(_15053);
    _15053 = NOVALUE;
    DeRef(_15077);
    _15077 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15389);
    _15389 = NOVALUE;
    DeRef(_15339);
    _15339 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    _15312 = NOVALUE;
    DeRef(_15153);
    _15153 = NOVALUE;
    DeRef(_15281);
    _15281 = NOVALUE;
    DeRef(_15400);
    _15400 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15248);
    _15248 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15256);
    _15256 = NOVALUE;
    _15219 = NOVALUE;
    DeRef(_15380);
    _15380 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    _15104 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    DeRef(_15395);
    _15395 = NOVALUE;
    DeRef(_15299);
    _15299 = NOVALUE;
    DeRef(_15271);
    _15271 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15197 = NOVALUE;
    _15068 = NOVALUE;
    DeRef(_15276);
    _15276 = NOVALUE;
    _15093 = NOVALUE;
    DeRef(_15243);
    _15243 = NOVALUE;
    _15215 = NOVALUE;
    DeRef(_15292);
    _15292 = NOVALUE;
    DeRef(_15325);
    _15325 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15052);
    _15052 = NOVALUE;
    DeRef(_15043);
    _15043 = NOVALUE;
    DeRef(_15174);
    _15174 = NOVALUE;
    DeRef(_15280);
    _15280 = NOVALUE;
    DeRef(_15397);
    _15397 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15072);
    _15072 = NOVALUE;
    return _15408;
    // SubProg Scanner pc: 3774 op: ELSE (23)
    goto L1; // [3774] 10
    // SubProg Scanner pc: 3776 op: NOP1 (159)
L9F: // addr: 3777 pc: 3776 sub: 26939 op: 159
    // SubProg Scanner pc: 3777 op: STARTLINE (58)

    /** scanner.e:2032				InternalErr(268, {class})*/
    // SubProg Scanner pc: 3779 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _class_26953;
    _15409 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3783 op: PROC (27)
    _49InternalErr(268, _15409);
    _15409 = NOVALUE;
    // SubProg Scanner pc: 3787 op: NOP1 (159)
    // SubProg Scanner pc: 3788 op: STARTLINE (58)

    /** scanner.e:2035	   end while*/
    // SubProg Scanner pc: 3790 op: ENDWHILE (22)
    goto L1; // [3790] 10
    // SubProg Scanner pc: 3792 op: NOP1 (159)
L2: // addr: 3793 pc: 3792 sub: 26939 op: 159
    // SubProg Scanner pc: 3793 op: BADRETURNF (43)
    ;
}


void _61eu_namespace()
{
    object _eu_tok_27728 = NOVALUE;
    object _eu_ns_27730 = NOVALUE;
    object _31797 = NOVALUE; // 64010 31797
    object _31796 = NOVALUE; // 64009 31796
// skipping _15419  name type: 0
    object _15418 = NOVALUE; // 27742 15418
// skipping _15417  name type: 0
    object _15416 = NOVALUE; // 27738 15416
// skipping _15415  name type: 0
    object _15414 = NOVALUE; // 27735 15414
// skipping _15413  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg eu_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:2043		eu_tok = keyfind("eu", -1, , 1)*/
    // SubProg eu_namespace pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 5 op: ASSIGN (18)
    RefDS(_15412);
    _31796 = _15412;
    // SubProg eu_namespace pc: 8 op: PROC (27)
    _31797 = _53hashfn(_31796);
    _31796 = NOVALUE;
    // SubProg eu_namespace pc: 12 op: PROC (27)
    RefDS(_15412);
    _0 = _eu_tok_27728;
    _eu_tok_27728 = _53keyfind(_15412, -1, _5current_file_no_12477, 1, _31797);
    DeRef(_0);
    _31797 = NOVALUE;
    // SubProg eu_namespace pc: 20 op: STARTLINE (58)

    /** scanner.e:2046		eu_ns  = NameSpace_declaration(eu_tok[T_SYM])*/
    // SubProg eu_namespace pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eu_tok_27728);
    _15414 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg eu_namespace pc: 28 op: PROC (27)
    Ref(_15414);
    _eu_ns_27730 = _61NameSpace_declaration(_15414);
    _15414 = NOVALUE;
    // SubProg eu_namespace pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_eu_ns_27730)) {
        _1 = (object)(DBL_PTR(_eu_ns_27730)->dbl);
        DeRefDS(_eu_ns_27730);
        _eu_ns_27730 = _1;
    }
    // SubProg eu_namespace pc: 34 op: STARTLINE (58)

    /** scanner.e:2047		SymTab[eu_ns][S_OBJ] = 0*/
    // SubProg eu_namespace pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 38 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27730 + ((s1_ptr)_2)->base);
    // SubProg eu_namespace pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 45 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _15416 = NOVALUE;
    // SubProg eu_namespace pc: 49 op: STARTLINE (58)

    /** scanner.e:2048		SymTab[eu_ns][S_SCOPE] = SC_GLOBAL*/
    // SubProg eu_namespace pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 53 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27730 + ((s1_ptr)_2)->base);
    // SubProg eu_namespace pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 62 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    _15418 = NOVALUE;
    // SubProg eu_namespace pc: 66 op: STARTLINE (58)

    /** scanner.e:2049	end procedure*/
    // SubProg eu_namespace pc: 68 op: RETURNP (29)

// Exiting block BLOCK: eu_namespace

// block var eu_tok_27728
    DeRef(_eu_tok_27728);

// block var eu_ns_27730
    return;
    // SubProg eu_namespace pc: 71 op: BADRETURNF (43)
    ;
}


object _61StringToken(object _pDelims_27748)
{
    object _ch_27749 = NOVALUE;
    object _m_27750 = NOVALUE;
    object _gtext_27751 = NOVALUE;
    object _level_27782 = NOVALUE;
// skipping _15460  name type: 0
// skipping _15459  name type: 0
// skipping _15458  name type: 0
    object _15457 = NOVALUE; // 27812 15457
// skipping _15456  name type: 0
    object _15455 = NOVALUE; // 27810 15455
// skipping _15454  name type: 0
    object _15453 = NOVALUE; // 27807 15453
// skipping _15452  name type: 0
// skipping _15451  name type: 0
// skipping _15450  name type: 0
// skipping _15449  name type: 0
// skipping _15448  name type: 0
// skipping _15447  name type: 0
// skipping _15446  name type: 0
// skipping _15445  name type: 0
// skipping _15444  name type: 0
// skipping _15443  name type: 0
// skipping _15442  name type: 0
// skipping _15441  name type: 0
// skipping _15440  name type: 0
// skipping _15439  name type: 0
// skipping _15438  name type: 0
// skipping _15437  name type: 0
// skipping _15436  name type: 0
// skipping _15435  name type: 0
    object _15434 = NOVALUE; // 27773 15434
    object _15433 = NOVALUE; // 27772 15433
// skipping _15432  name type: 0
// skipping _15431  name type: 0
// skipping _15430  name type: 0
// skipping _15428  name type: 0
    object _15427 = NOVALUE; // 27762 15427
// skipping _15426  name type: 0
    object _15425 = NOVALUE; // 27759 15425
// skipping _15424  name type: 0
    object _15423 = NOVALUE; // 27756 15423
// skipping _15422  name type: 0
    object _15421 = NOVALUE; // 27754 15421
// skipping _15420  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg StringToken pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 3 op: STARTLINE (58)

    /** scanner.e:2060		ch = getch()*/
    // SubProg StringToken pc: 5 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 10 op: STARTLINE (58)

    /** scanner.e:2061		while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 12 op: NOP2 (110)
    // SubProg StringToken pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27746 op: 158
    // SubProg StringToken pc: 15 op: EQUALS (3)
    _15421 = (_ch_27749 == 32);
    // SubProg StringToken pc: 19 op: SC1_OR_IF (147)
    if (_15421 != 0) {
        goto L2; // [19] 32
    }
    // SubProg StringToken pc: 23 op: EQUALS (3)
    _15423 = (_ch_27749 == 9);
    // SubProg StringToken pc: 27 op: NOP1 (159)
    // SubProg StringToken pc: 28 op: WHILE (47)
    if (_15423 == 0)
    {
        DeRef(_15423);
        _15423 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15423);
        _15423 = NOVALUE;
    }
    // SubProg StringToken pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27746 op: 159
    // SubProg StringToken pc: 32 op: STARTLINE (58)

    /** scanner.e:2062			ch = getch()*/
    // SubProg StringToken pc: 34 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 39 op: STARTLINE (58)

    /** scanner.e:2063		end while*/
    // SubProg StringToken pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg StringToken pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27746 op: 159
    // SubProg StringToken pc: 44 op: STARTLINE (58)

    /** scanner.e:2065		pDelims &= {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}*/
    // SubProg StringToken pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 48 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15425 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 56 op: CONCAT (15)
    Concat((object_ptr)&_pDelims_27748, _pDelims_27748, _15425);
    DeRefDS(_15425);
    _15425 = NOVALUE;
    // SubProg StringToken pc: 60 op: STARTLINE (58)

    /** scanner.e:2066		gtext = ""*/
    // SubProg StringToken pc: 62 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_gtext_27751);
    _gtext_27751 = _5;
    // SubProg StringToken pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 67 op: STARTLINE (58)

    /** scanner.e:2067		while not find(ch,  pDelims) label "top" do*/
    // SubProg StringToken pc: 69 op: NOP2 (110)
    // SubProg StringToken pc: 71 op: NOPWHILE (158)
L4: // addr: 72 pc: 71 sub: 27746 op: 158
    // SubProg StringToken pc: 72 op: FIND_FROM (176)
    _15427 = find_from(_ch_27749, _pDelims_27748, 1);
    // SubProg StringToken pc: 77 op: NOT_IFW (108)
    if (_15427 != 0)
    goto L5; // [77] 391
    _15427 = NOVALUE;
    // SubProg StringToken pc: 80 op: STARTLINE (58)

    /** scanner.e:2068			if ch = '-' then*/
    // SubProg StringToken pc: 82 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 45)
    goto L6; // [82] 145
    // SubProg StringToken pc: 86 op: STARTLINE (58)

    /** scanner.e:2069				ch = getch()*/
    // SubProg StringToken pc: 88 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 93 op: STARTLINE (58)

    /** scanner.e:2070				if ch = '-' then*/
    // SubProg StringToken pc: 95 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 45)
    goto L7; // [95] 137
    // SubProg StringToken pc: 99 op: STARTLINE (58)

    /** scanner.e:2071					while not find(ch, {'\n', END_OF_FILE_CHAR}) do*/
    // SubProg StringToken pc: 101 op: NOP2 (110)
    // SubProg StringToken pc: 103 op: NOPWHILE (158)
L8: // addr: 104 pc: 103 sub: 27746 op: 158
    // SubProg StringToken pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 106 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 26;
    _15433 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 110 op: FIND_FROM (176)
    _15434 = find_from(_ch_27749, _15433, 1);
    DeRefDS(_15433);
    _15433 = NOVALUE;
    // SubProg StringToken pc: 115 op: NOT_IFW (108)
    if (_15434 != 0)
    goto L5; // [115] 391
    _15434 = NOVALUE;
    // SubProg StringToken pc: 118 op: STARTLINE (58)

    /** scanner.e:2072						ch = getch()*/
    // SubProg StringToken pc: 120 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 123 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 125 op: STARTLINE (58)

    /** scanner.e:2073					end while*/
    // SubProg StringToken pc: 127 op: ENDWHILE (22)
    goto L8; // [127] 104
    // SubProg StringToken pc: 129 op: NOP1 (159)
    // SubProg StringToken pc: 130 op: STARTLINE (58)

    /** scanner.e:2074					exit*/
    // SubProg StringToken pc: 132 op: EXIT (61)
    goto L5; // [132] 391
    // SubProg StringToken pc: 134 op: ELSE (23)
    goto L9; // [134] 373
    // SubProg StringToken pc: 136 op: NOP1 (159)
L7: // addr: 137 pc: 136 sub: 27746 op: 159
    // SubProg StringToken pc: 137 op: STARTLINE (58)

    /** scanner.e:2076					ungetch()*/
    // SubProg StringToken pc: 139 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 141 op: NOP1 (159)
    // SubProg StringToken pc: 142 op: ELSE (23)
    goto L9; // [142] 373
    // SubProg StringToken pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 27746 op: 159
    // SubProg StringToken pc: 145 op: STARTLINE (58)

    /** scanner.e:2078			elsif ch = '/' then*/
    // SubProg StringToken pc: 147 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 47)
    goto LA; // [147] 372
    // SubProg StringToken pc: 151 op: STARTLINE (58)

    /** scanner.e:2079				ch = getch()*/
    // SubProg StringToken pc: 153 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 156 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 158 op: STARTLINE (58)

    /** scanner.e:2080				if ch = '*' then*/
    // SubProg StringToken pc: 160 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 42)
    goto LB; // [160] 361
    // SubProg StringToken pc: 164 op: STARTLINE (58)

    /** scanner.e:2081					integer level = 1*/
    // SubProg StringToken pc: 166 op: ASSIGN_I (113)
    _level_27782 = 1;
    // SubProg StringToken pc: 169 op: STARTLINE (58)

    /** scanner.e:2082					while level > 0 do*/
    // SubProg StringToken pc: 171 op: NOP2 (110)
    // SubProg StringToken pc: 173 op: NOPWHILE (158)
LC: // addr: 174 pc: 173 sub: 27746 op: 158
    // SubProg StringToken pc: 174 op: GREATER_IFW_I (124)
    if (_level_27782 <= 0)
    goto LD; // [174] 293
    // SubProg StringToken pc: 178 op: STARTLINE (58)

    /** scanner.e:2083						ch = getch()*/
    // SubProg StringToken pc: 180 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 185 op: STARTLINE (58)

    /** scanner.e:2084						if ch = '/' then*/
    // SubProg StringToken pc: 187 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 47)
    goto LE; // [187] 221
    // SubProg StringToken pc: 191 op: STARTLINE (58)

    /** scanner.e:2085							ch = getch()*/
    // SubProg StringToken pc: 193 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 198 op: STARTLINE (58)

    /** scanner.e:2086							if ch = '*' then*/
    // SubProg StringToken pc: 200 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 42)
    goto LF; // [200] 213
    // SubProg StringToken pc: 204 op: STARTLINE (58)

    /** scanner.e:2087								level += 1*/
    // SubProg StringToken pc: 206 op: PLUS1_I (117)
    _level_27782 = _level_27782 + 1;
    // SubProg StringToken pc: 210 op: ELSE (23)
    goto LC; // [210] 174
    // SubProg StringToken pc: 212 op: NOP1 (159)
LF: // addr: 213 pc: 212 sub: 27746 op: 159
    // SubProg StringToken pc: 213 op: STARTLINE (58)

    /** scanner.e:2089								ungetch()*/
    // SubProg StringToken pc: 215 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 217 op: NOP1 (159)
    // SubProg StringToken pc: 218 op: ELSE (23)
    goto LC; // [218] 174
    // SubProg StringToken pc: 220 op: NOP1 (159)
LE: // addr: 221 pc: 220 sub: 27746 op: 159
    // SubProg StringToken pc: 221 op: STARTLINE (58)

    /** scanner.e:2091						elsif ch = '*' then*/
    // SubProg StringToken pc: 223 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 42)
    goto L10; // [223] 257
    // SubProg StringToken pc: 227 op: STARTLINE (58)

    /** scanner.e:2092							ch = getch()*/
    // SubProg StringToken pc: 229 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 232 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 234 op: STARTLINE (58)

    /** scanner.e:2093							if ch = '/' then*/
    // SubProg StringToken pc: 236 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 47)
    goto L11; // [236] 249
    // SubProg StringToken pc: 240 op: STARTLINE (58)

    /** scanner.e:2094								level -= 1*/
    // SubProg StringToken pc: 242 op: MINUS_I (116)
    _level_27782 = _level_27782 - 1;
    // SubProg StringToken pc: 246 op: ELSE (23)
    goto LC; // [246] 174
    // SubProg StringToken pc: 248 op: NOP1 (159)
L11: // addr: 249 pc: 248 sub: 27746 op: 159
    // SubProg StringToken pc: 249 op: STARTLINE (58)

    /** scanner.e:2096								ungetch()*/
    // SubProg StringToken pc: 251 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 253 op: NOP1 (159)
    // SubProg StringToken pc: 254 op: ELSE (23)
    goto LC; // [254] 174
    // SubProg StringToken pc: 256 op: NOP1 (159)
L10: // addr: 257 pc: 256 sub: 27746 op: 159
    // SubProg StringToken pc: 257 op: STARTLINE (58)

    /** scanner.e:2098						elsif ch = '\n' then*/
    // SubProg StringToken pc: 259 op: EQUALS_IFW_I (121)
    if (_ch_27749 != 10)
    goto L12; // [259] 270
    // SubProg StringToken pc: 263 op: STARTLINE (58)

    /** scanner.e:2099							read_line()*/
    // SubProg StringToken pc: 265 op: PROC (27)
    _61read_line();
    // SubProg StringToken pc: 267 op: ELSE (23)
    goto LC; // [267] 174
    // SubProg StringToken pc: 269 op: NOP1 (159)
L12: // addr: 270 pc: 269 sub: 27746 op: 159
    // SubProg StringToken pc: 270 op: STARTLINE (58)

    /** scanner.e:2100						elsif ch = END_OF_FILE_CHAR then*/
    // SubProg StringToken pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 274 op: EQUALS_IFW (104)
    if (_ch_27749 != 26)
    goto LC; // [274] 174
    // SubProg StringToken pc: 278 op: STARTLINE (58)

    /** scanner.e:2101							ungetch()*/
    // SubProg StringToken pc: 280 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 282 op: STARTLINE (58)

    /** scanner.e:2102							exit*/
    // SubProg StringToken pc: 284 op: EXIT (61)
    goto LD; // [284] 293
    // SubProg StringToken pc: 286 op: NOP1 (159)
    // SubProg StringToken pc: 287 op: NOP1 (159)
    // SubProg StringToken pc: 288 op: STARTLINE (58)

    /** scanner.e:2104					end while*/
    // SubProg StringToken pc: 290 op: ENDWHILE (22)
    goto LC; // [290] 174
    // SubProg StringToken pc: 292 op: NOP1 (159)
LD: // addr: 293 pc: 292 sub: 27746 op: 159
    // SubProg StringToken pc: 293 op: STARTLINE (58)

    /** scanner.e:2105					ch = getch()*/
    // SubProg StringToken pc: 295 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 298 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 300 op: STARTLINE (58)

    /** scanner.e:2106					if length(gtext) = 0 then*/
    // SubProg StringToken pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27751)){
            _15453 = SEQ_PTR(_gtext_27751)->length;
    }
    else {
        _15453 = 1;
    }
    // SubProg StringToken pc: 305 op: EQUALS_IFW_I (121)
    if (_15453 != 0)
    goto L13; // [305] 350
    // SubProg StringToken pc: 309 op: STARTLINE (58)

    /** scanner.e:2107						while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 311 op: NOP2 (110)
    // SubProg StringToken pc: 313 op: NOPWHILE (158)
L14: // addr: 314 pc: 313 sub: 27746 op: 158
    // SubProg StringToken pc: 314 op: EQUALS (3)
    _15455 = (_ch_27749 == 32);
    // SubProg StringToken pc: 318 op: SC1_OR_IF (147)
    if (_15455 != 0) {
        goto L15; // [318] 331
    }
    // SubProg StringToken pc: 322 op: EQUALS (3)
    _15457 = (_ch_27749 == 9);
    // SubProg StringToken pc: 326 op: NOP1 (159)
    // SubProg StringToken pc: 327 op: WHILE (47)
    if (_15457 == 0)
    {
        DeRef(_15457);
        _15457 = NOVALUE;
        goto L16; // [327] 343
    }
    else{
        DeRef(_15457);
        _15457 = NOVALUE;
    }
    // SubProg StringToken pc: 330 op: NOP1 (159)
L15: // addr: 331 pc: 330 sub: 27746 op: 159
    // SubProg StringToken pc: 331 op: STARTLINE (58)

    /** scanner.e:2108							ch = getch()*/
    // SubProg StringToken pc: 333 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 336 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 338 op: STARTLINE (58)

    /** scanner.e:2109						end while*/
    // SubProg StringToken pc: 340 op: ENDWHILE (22)
    goto L14; // [340] 314
    // SubProg StringToken pc: 342 op: NOP1 (159)
L16: // addr: 343 pc: 342 sub: 27746 op: 159
    // SubProg StringToken pc: 343 op: STARTLINE (58)

    /** scanner.e:2110						continue "top"*/
    // SubProg StringToken pc: 345 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27782
    // SubProg StringToken pc: 347 op: ELSE (23)
    goto L4; // [347] 72
    // SubProg StringToken pc: 349 op: NOP1 (159)
L13: // addr: 350 pc: 349 sub: 27746 op: 159
    // SubProg StringToken pc: 350 op: STARTLINE (58)

    /** scanner.e:2112					exit*/
    // SubProg StringToken pc: 352 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27782
    // SubProg StringToken pc: 354 op: EXIT (61)
    goto L5; // [354] 391
    // SubProg StringToken pc: 356 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27782
    // SubProg StringToken pc: 358 op: ELSE (23)
    goto L17; // [358] 371
    // SubProg StringToken pc: 360 op: NOP1 (159)
LB: // addr: 361 pc: 360 sub: 27746 op: 159
    // SubProg StringToken pc: 361 op: STARTLINE (58)

    /** scanner.e:2115					ungetch()*/
    // SubProg StringToken pc: 363 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 365 op: STARTLINE (58)

    /** scanner.e:2116					ch = '/'*/
    // SubProg StringToken pc: 367 op: ASSIGN_I (113)
    _ch_27749 = 47;
    // SubProg StringToken pc: 370 op: NOP1 (159)
L17: // addr: 371 pc: 370 sub: 27746 op: 159
    // SubProg StringToken pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 27746 op: 159
    // SubProg StringToken pc: 372 op: NOP1 (159)
L9: // addr: 373 pc: 372 sub: 27746 op: 159
    // SubProg StringToken pc: 373 op: STARTLINE (58)

    /** scanner.e:2119			gtext &= ch*/
    // SubProg StringToken pc: 375 op: CONCAT (15)
    Append(&_gtext_27751, _gtext_27751, _ch_27749);
    // SubProg StringToken pc: 379 op: STARTLINE (58)

    /** scanner.e:2120			ch = getch()*/
    // SubProg StringToken pc: 381 op: PROC (27)
    _ch_27749 = _61getch();
    // SubProg StringToken pc: 384 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27749)) {
        _1 = (object)(DBL_PTR(_ch_27749)->dbl);
        DeRefDS(_ch_27749);
        _ch_27749 = _1;
    }
    // SubProg StringToken pc: 386 op: STARTLINE (58)

    /** scanner.e:2121		end while*/
    // SubProg StringToken pc: 388 op: ENDWHILE (22)
    goto L4; // [388] 72
    // SubProg StringToken pc: 390 op: NOP1 (159)
L5: // addr: 391 pc: 390 sub: 27746 op: 159
    // SubProg StringToken pc: 391 op: STARTLINE (58)

    /** scanner.e:2123		ungetch() -- put back end-word token.*/
    // SubProg StringToken pc: 393 op: PROC (27)
    _61ungetch();
    // SubProg StringToken pc: 395 op: STARTLINE (58)

    /** scanner.e:2125		return gtext*/
    // SubProg StringToken pc: 397 op: RETURNF (28)

// Exiting block BLOCK: StringToken

// block var pDelims_27748
    DeRefDSi(_pDelims_27748);

// block var ch_27749
    DeRef(_15455);
    _15455 = NOVALUE;
    DeRef(_15421);
    _15421 = NOVALUE;
    return _gtext_27751;
    // SubProg StringToken pc: 401 op: BADRETURNF (43)
    ;
}


void _61IncludeScan(object _is_public_27819)
{
    object _ch_27820 = NOVALUE;
    object _gtext_27821 = NOVALUE;
    object _s_27823 = NOVALUE;
    object _31795 = NOVALUE; // 64008 31795
// skipping _15526  name type: 0
// skipping _15525  name type: 0
// skipping _15524  name type: 0
// skipping _15523  name type: 0
// skipping _15522  name type: 0
// skipping _15521  name type: 0
    object _15520 = NOVALUE; // 27920 15520
    object _15519 = NOVALUE; // 27919 15519
// skipping _15518  name type: 0
    object _15517 = NOVALUE; // 27909 15517
// skipping _15516  name type: 0
    object _15515 = NOVALUE; // 27905 15515
    object _15514 = NOVALUE; // 27903 15514
// skipping _15513  name type: 0
// skipping _15512  name type: 0
// skipping _15511  name type: 0
// skipping _15510  name type: 0
    object _15509 = NOVALUE; // 27894 15509
// skipping _15508  name type: 0
// skipping _15507  name type: 0
    object _15506 = NOVALUE; // 27890 15506
// skipping _15505  name type: 0
    object _15504 = NOVALUE; // 27888 15504
    object _15503 = NOVALUE; // 27886 15503
// skipping _15502  name type: 0
    object _15501 = NOVALUE; // 27883 15501
// skipping _15500  name type: 0
    object _15499 = NOVALUE; // 27881 15499
// skipping _15498  name type: 0
    object _15497 = NOVALUE; // 27878 15497
// skipping _15496  name type: 0
    object _15495 = NOVALUE; // 27876 15495
// skipping _15494  name type: 0
// skipping _15493  name type: 0
// skipping _15492  name type: 0
// skipping _15491  name type: 0
// skipping _15490  name type: 0
    object _15489 = NOVALUE; // 27867 15489
// skipping _15488  name type: 0
    object _15487 = NOVALUE; // 27865 15487
// skipping _15486  name type: 0
// skipping _15483  name type: 0
    object _15482 = NOVALUE; // 27857 15482
// skipping _15481  name type: 0
// skipping _15480  name type: 0
// skipping _15479  name type: 0
    object _15478 = NOVALUE; // 27852 15478
    object _15477 = NOVALUE; // 27851 15477
// skipping _15476  name type: 0
// skipping _15475  name type: 0
// skipping _15474  name type: 0
// skipping _15473  name type: 0
    object _15472 = NOVALUE; // 27840 15472
// skipping _15471  name type: 0
// skipping _15470  name type: 0
    object _15469 = NOVALUE; // 27836 15469
    object _15468 = NOVALUE; // 27835 15468
// skipping _15467  name type: 0
// skipping _15466  name type: 0
// skipping _15465  name type: 0
    object _15464 = NOVALUE; // 27828 15464
// skipping _15463  name type: 0
    object _15462 = NOVALUE; // 27826 15462
// skipping _15461  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg IncludeScan pc: 1 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 3 op: STARTLINE (58)

    /** scanner.e:2145		ch = getch()*/
    // SubProg IncludeScan pc: 5 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 10 op: STARTLINE (58)

    /** scanner.e:2146		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 12 op: NOP2 (110)
    // SubProg IncludeScan pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27817 op: 158
    // SubProg IncludeScan pc: 15 op: EQUALS (3)
    _15462 = (_ch_27820 == 32);
    // SubProg IncludeScan pc: 19 op: SC1_OR_IF (147)
    if (_15462 != 0) {
        goto L2; // [19] 32
    }
    // SubProg IncludeScan pc: 23 op: EQUALS (3)
    _15464 = (_ch_27820 == 9);
    // SubProg IncludeScan pc: 27 op: NOP1 (159)
    // SubProg IncludeScan pc: 28 op: WHILE (47)
    if (_15464 == 0)
    {
        DeRef(_15464);
        _15464 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15464);
        _15464 = NOVALUE;
    }
    // SubProg IncludeScan pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27817 op: 159
    // SubProg IncludeScan pc: 32 op: STARTLINE (58)

    /** scanner.e:2147			ch = getch()*/
    // SubProg IncludeScan pc: 34 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 39 op: STARTLINE (58)

    /** scanner.e:2148		end while*/
    // SubProg IncludeScan pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg IncludeScan pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27817 op: 159
    // SubProg IncludeScan pc: 44 op: STARTLINE (58)

    /** scanner.e:2151		gtext = ""*/
    // SubProg IncludeScan pc: 46 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_gtext_27821);
    _gtext_27821 = _5;
    // SubProg IncludeScan pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 51 op: STARTLINE (58)

    /** scanner.e:2153		if ch = '"' then*/
    // SubProg IncludeScan pc: 53 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 34)
    goto L4; // [53] 141
    // SubProg IncludeScan pc: 57 op: STARTLINE (58)

    /** scanner.e:2155			ch = getch()*/
    // SubProg IncludeScan pc: 59 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 62 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 64 op: STARTLINE (58)

    /** scanner.e:2156			while not find(ch, {'\n', '\r', '"', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 66 op: NOP2 (110)
    // SubProg IncludeScan pc: 68 op: NOPWHILE (158)
L5: // addr: 69 pc: 68 sub: 27817 op: 158
    // SubProg IncludeScan pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 34;
    ((intptr_t*)_2)[4] = 26;
    _15468 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 78 op: FIND_FROM (176)
    _15469 = find_from(_ch_27820, _15468, 1);
    DeRefDS(_15468);
    _15468 = NOVALUE;
    // SubProg IncludeScan pc: 83 op: NOT_IFW (108)
    if (_15469 != 0)
    goto L6; // [83] 124
    _15469 = NOVALUE;
    // SubProg IncludeScan pc: 86 op: STARTLINE (58)

    /** scanner.e:2157				if ch = '\\' then*/
    // SubProg IncludeScan pc: 88 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 92)
    goto L7; // [88] 105
    // SubProg IncludeScan pc: 92 op: STARTLINE (58)

    /** scanner.e:2158					gtext &= EscapeChar('"')*/
    // SubProg IncludeScan pc: 94 op: PROC (27)
    _15472 = _61EscapeChar(34);
    // SubProg IncludeScan pc: 98 op: CONCAT (15)
    if (IS_SEQUENCE(_gtext_27821) && IS_ATOM(_15472)) {
        Ref(_15472);
        Append(&_gtext_27821, _gtext_27821, _15472);
    }
    else if (IS_ATOM(_gtext_27821) && IS_SEQUENCE(_15472)) {
    }
    else {
        Concat((object_ptr)&_gtext_27821, _gtext_27821, _15472);
    }
    DeRef(_15472);
    _15472 = NOVALUE;
    // SubProg IncludeScan pc: 102 op: ELSE (23)
    goto L8; // [102] 112
    // SubProg IncludeScan pc: 104 op: NOP1 (159)
L7: // addr: 105 pc: 104 sub: 27817 op: 159
    // SubProg IncludeScan pc: 105 op: STARTLINE (58)

    /** scanner.e:2160					gtext &= ch*/
    // SubProg IncludeScan pc: 107 op: CONCAT (15)
    Append(&_gtext_27821, _gtext_27821, _ch_27820);
    // SubProg IncludeScan pc: 111 op: NOP1 (159)
L8: // addr: 112 pc: 111 sub: 27817 op: 159
    // SubProg IncludeScan pc: 112 op: STARTLINE (58)

    /** scanner.e:2162				ch = getch()*/
    // SubProg IncludeScan pc: 114 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 117 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 119 op: STARTLINE (58)

    /** scanner.e:2163			end while*/
    // SubProg IncludeScan pc: 121 op: ENDWHILE (22)
    goto L5; // [121] 69
    // SubProg IncludeScan pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 27817 op: 159
    // SubProg IncludeScan pc: 124 op: STARTLINE (58)

    /** scanner.e:2164			if ch != '"' then*/
    // SubProg IncludeScan pc: 126 op: NOTEQ_IFW_I (122)
    if (_ch_27820 == 34)
    goto L9; // [126] 187
    // SubProg IncludeScan pc: 130 op: STARTLINE (58)

    /** scanner.e:2165				CompileErr(115)*/
    // SubProg IncludeScan pc: 132 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(115, _21958, 0);
    // SubProg IncludeScan pc: 137 op: NOP1 (159)
    // SubProg IncludeScan pc: 138 op: ELSE (23)
    goto L9; // [138] 187
    // SubProg IncludeScan pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 27817 op: 159
    // SubProg IncludeScan pc: 141 op: STARTLINE (58)

    /** scanner.e:2169			while not find(ch, {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 143 op: NOP2 (110)
    // SubProg IncludeScan pc: 145 op: NOPWHILE (158)
LA: // addr: 146 pc: 145 sub: 27817 op: 158
    // SubProg IncludeScan pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 148 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15477 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 156 op: FIND_FROM (176)
    _15478 = find_from(_ch_27820, _15477, 1);
    DeRefDS(_15477);
    _15477 = NOVALUE;
    // SubProg IncludeScan pc: 161 op: NOT_IFW (108)
    if (_15478 != 0)
    goto LB; // [161] 182
    _15478 = NOVALUE;
    // SubProg IncludeScan pc: 164 op: STARTLINE (58)

    /** scanner.e:2170				gtext &= ch*/
    // SubProg IncludeScan pc: 166 op: CONCAT (15)
    Append(&_gtext_27821, _gtext_27821, _ch_27820);
    // SubProg IncludeScan pc: 170 op: STARTLINE (58)

    /** scanner.e:2171				ch = getch()*/
    // SubProg IncludeScan pc: 172 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 177 op: STARTLINE (58)

    /** scanner.e:2172			end while*/
    // SubProg IncludeScan pc: 179 op: ENDWHILE (22)
    goto LA; // [179] 146
    // SubProg IncludeScan pc: 181 op: NOP1 (159)
LB: // addr: 182 pc: 181 sub: 27817 op: 159
    // SubProg IncludeScan pc: 182 op: STARTLINE (58)

    /** scanner.e:2173			ungetch()*/
    // SubProg IncludeScan pc: 184 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 186 op: NOP1 (159)
L9: // addr: 187 pc: 186 sub: 27817 op: 159
    // SubProg IncludeScan pc: 187 op: STARTLINE (58)

    /** scanner.e:2176		if length(gtext) = 0 then*/
    // SubProg IncludeScan pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27821)){
            _15482 = SEQ_PTR(_gtext_27821)->length;
    }
    else {
        _15482 = 1;
    }
    // SubProg IncludeScan pc: 192 op: EQUALS_IFW_I (121)
    if (_15482 != 0)
    goto LC; // [192] 204
    // SubProg IncludeScan pc: 196 op: STARTLINE (58)

    /** scanner.e:2177			CompileErr(95)*/
    // SubProg IncludeScan pc: 198 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(95, _21958, 0);
    // SubProg IncludeScan pc: 203 op: NOP1 (159)
LC: // addr: 204 pc: 203 sub: 27817 op: 159
    // SubProg IncludeScan pc: 204 op: STARTLINE (58)

    /** scanner.e:2181		ifdef WINDOWS then*/
    // SubProg IncludeScan pc: 206 op: STARTLINE (58)

    /** scanner.e:2184			new_include_name = gtext*/
    // SubProg IncludeScan pc: 208 op: ASSIGN (18)
    RefDS(_gtext_27821);
    DeRef(_5new_include_name_12600);
    _5new_include_name_12600 = _gtext_27821;
    // SubProg IncludeScan pc: 211 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 213 op: STARTLINE (58)

    /** scanner.e:2188		ch = getch()*/
    // SubProg IncludeScan pc: 215 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 218 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 220 op: STARTLINE (58)

    /** scanner.e:2189		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 222 op: NOP2 (110)
    // SubProg IncludeScan pc: 224 op: NOPWHILE (158)
LD: // addr: 225 pc: 224 sub: 27817 op: 158
    // SubProg IncludeScan pc: 225 op: EQUALS (3)
    _15487 = (_ch_27820 == 32);
    // SubProg IncludeScan pc: 229 op: SC1_OR_IF (147)
    if (_15487 != 0) {
        goto LE; // [229] 242
    }
    // SubProg IncludeScan pc: 233 op: EQUALS (3)
    _15489 = (_ch_27820 == 9);
    // SubProg IncludeScan pc: 237 op: NOP1 (159)
    // SubProg IncludeScan pc: 238 op: WHILE (47)
    if (_15489 == 0)
    {
        DeRef(_15489);
        _15489 = NOVALUE;
        goto LF; // [238] 254
    }
    else{
        DeRef(_15489);
        _15489 = NOVALUE;
    }
    // SubProg IncludeScan pc: 241 op: NOP1 (159)
LE: // addr: 242 pc: 241 sub: 27817 op: 159
    // SubProg IncludeScan pc: 242 op: STARTLINE (58)

    /** scanner.e:2190			ch = getch()*/
    // SubProg IncludeScan pc: 244 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 247 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 249 op: STARTLINE (58)

    /** scanner.e:2191		end while*/
    // SubProg IncludeScan pc: 251 op: ENDWHILE (22)
    goto LD; // [251] 225
    // SubProg IncludeScan pc: 253 op: NOP1 (159)
LF: // addr: 254 pc: 253 sub: 27817 op: 159
    // SubProg IncludeScan pc: 254 op: STARTLINE (58)

    /** scanner.e:2193		new_include_space = 0*/
    // SubProg IncludeScan pc: 256 op: ASSIGN (18)
    _61new_include_space_25201 = 0;
    // SubProg IncludeScan pc: 259 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 261 op: STARTLINE (58)

    /** scanner.e:2195		if ch = 'a' then*/
    // SubProg IncludeScan pc: 263 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 97)
    goto L10; // [263] 520
    // SubProg IncludeScan pc: 267 op: STARTLINE (58)

    /** scanner.e:2197			ch = getch()*/
    // SubProg IncludeScan pc: 269 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 272 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 274 op: STARTLINE (58)

    /** scanner.e:2198			if ch = 's' then*/
    // SubProg IncludeScan pc: 276 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 115)
    goto L11; // [276] 509
    // SubProg IncludeScan pc: 280 op: STARTLINE (58)

    /** scanner.e:2199				ch = getch()*/
    // SubProg IncludeScan pc: 282 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 285 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 287 op: STARTLINE (58)

    /** scanner.e:2200				if ch = ' ' or ch = '\t' then*/
    // SubProg IncludeScan pc: 289 op: EQUALS (3)
    _15495 = (_ch_27820 == 32);
    // SubProg IncludeScan pc: 293 op: SC1_OR_IF (147)
    if (_15495 != 0) {
        goto L12; // [293] 306
    }
    // SubProg IncludeScan pc: 297 op: EQUALS (3)
    _15497 = (_ch_27820 == 9);
    // SubProg IncludeScan pc: 301 op: NOP1 (159)
    // SubProg IncludeScan pc: 302 op: IF (20)
    if (_15497 == 0)
    {
        DeRef(_15497);
        _15497 = NOVALUE;
        goto L13; // [302] 498
    }
    else{
        DeRef(_15497);
        _15497 = NOVALUE;
    }
    // SubProg IncludeScan pc: 305 op: NOP1 (159)
L12: // addr: 306 pc: 305 sub: 27817 op: 159
    // SubProg IncludeScan pc: 306 op: STARTLINE (58)

    /** scanner.e:2203					ch = getch()*/
    // SubProg IncludeScan pc: 308 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 311 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 313 op: STARTLINE (58)

    /** scanner.e:2204					while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 315 op: NOP2 (110)
    // SubProg IncludeScan pc: 317 op: NOPWHILE (158)
L14: // addr: 318 pc: 317 sub: 27817 op: 158
    // SubProg IncludeScan pc: 318 op: EQUALS (3)
    _15499 = (_ch_27820 == 32);
    // SubProg IncludeScan pc: 322 op: SC1_OR_IF (147)
    if (_15499 != 0) {
        goto L15; // [322] 335
    }
    // SubProg IncludeScan pc: 326 op: EQUALS (3)
    _15501 = (_ch_27820 == 9);
    // SubProg IncludeScan pc: 330 op: NOP1 (159)
    // SubProg IncludeScan pc: 331 op: WHILE (47)
    if (_15501 == 0)
    {
        DeRef(_15501);
        _15501 = NOVALUE;
        goto L16; // [331] 347
    }
    else{
        DeRef(_15501);
        _15501 = NOVALUE;
    }
    // SubProg IncludeScan pc: 334 op: NOP1 (159)
L15: // addr: 335 pc: 334 sub: 27817 op: 159
    // SubProg IncludeScan pc: 335 op: STARTLINE (58)

    /** scanner.e:2205						ch = getch()*/
    // SubProg IncludeScan pc: 337 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 340 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 342 op: STARTLINE (58)

    /** scanner.e:2206					end while*/
    // SubProg IncludeScan pc: 344 op: ENDWHILE (22)
    goto L14; // [344] 318
    // SubProg IncludeScan pc: 346 op: NOP1 (159)
L16: // addr: 347 pc: 346 sub: 27817 op: 159
    // SubProg IncludeScan pc: 347 op: STARTLINE (58)

    /** scanner.e:2209					if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg IncludeScan pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 351 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61char_class_25210);
    _15503 = (object)*(((s1_ptr)_2)->base + _ch_27820);
    // SubProg IncludeScan pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 357 op: EQUALS (3)
    _15504 = (_15503 == -2);
    _15503 = NOVALUE;
    // SubProg IncludeScan pc: 361 op: SC1_OR_IF (147)
    if (_15504 != 0) {
        goto L17; // [361] 374
    }
    // SubProg IncludeScan pc: 365 op: EQUALS (3)
    _15506 = (_ch_27820 == 95);
    // SubProg IncludeScan pc: 369 op: NOP1 (159)
    // SubProg IncludeScan pc: 370 op: IF (20)
    if (_15506 == 0)
    {
        DeRef(_15506);
        _15506 = NOVALUE;
        goto L18; // [370] 487
    }
    else{
        DeRef(_15506);
        _15506 = NOVALUE;
    }
    // SubProg IncludeScan pc: 373 op: NOP1 (159)
L17: // addr: 374 pc: 373 sub: 27817 op: 159
    // SubProg IncludeScan pc: 374 op: STARTLINE (58)

    /** scanner.e:2210						gtext = {ch}*/
    // SubProg IncludeScan pc: 376 op: RIGHT_BRACE_N (31)
    _0 = _gtext_27821;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_27820;
    _gtext_27821 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg IncludeScan pc: 380 op: STARTLINE (58)

    /** scanner.e:2211						ch = getch()*/
    // SubProg IncludeScan pc: 382 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 385 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 387 op: STARTLINE (58)

    /** scanner.e:2212						while id_char[ch] = TRUE do*/
    // SubProg IncludeScan pc: 389 op: NOP2 (110)
    // SubProg IncludeScan pc: 391 op: NOPWHILE (158)
L19: // addr: 392 pc: 391 sub: 27817 op: 158
    // SubProg IncludeScan pc: 392 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 394 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_61id_char_25211);
    _15509 = (object)*(((s1_ptr)_2)->base + _ch_27820);
    // SubProg IncludeScan pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 400 op: EQUALS_IFW (104)
    if (_15509 != _6TRUE_365)
    goto L1A; // [400] 422
    // SubProg IncludeScan pc: 404 op: STARTLINE (58)

    /** scanner.e:2213							gtext &= ch*/
    // SubProg IncludeScan pc: 406 op: CONCAT (15)
    Append(&_gtext_27821, _gtext_27821, _ch_27820);
    // SubProg IncludeScan pc: 410 op: STARTLINE (58)

    /** scanner.e:2214							ch = getch()*/
    // SubProg IncludeScan pc: 412 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 415 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 417 op: STARTLINE (58)

    /** scanner.e:2215						end while*/
    // SubProg IncludeScan pc: 419 op: ENDWHILE (22)
    goto L19; // [419] 392
    // SubProg IncludeScan pc: 421 op: NOP1 (159)
L1A: // addr: 422 pc: 421 sub: 27817 op: 159
    // SubProg IncludeScan pc: 422 op: STARTLINE (58)

    /** scanner.e:2217						ungetch()*/
    // SubProg IncludeScan pc: 424 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 426 op: STARTLINE (58)

    /** scanner.e:2218						s = keyfind(gtext, -1, , 1)*/
    // SubProg IncludeScan pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 430 op: PRIVATE_INIT_CHECK (30)
    // SubProg IncludeScan pc: 432 op: PROC (27)
    RefDS(_gtext_27821);
    _31795 = _53hashfn(_gtext_27821);
    // SubProg IncludeScan pc: 436 op: PROC (27)
    RefDS(_gtext_27821);
    _0 = _s_27823;
    _s_27823 = _53keyfind(_gtext_27821, -1, _5current_file_no_12477, 1, _31795);
    DeRef(_0);
    _31795 = NOVALUE;
    // SubProg IncludeScan pc: 444 op: STARTLINE (58)

    /** scanner.e:2219						if not find(s[T_ID], ID_TOKS) then*/
    // SubProg IncludeScan pc: 446 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 448 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27823);
    _15514 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg IncludeScan pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 454 op: FIND_FROM (176)
    _15515 = find_from(_15514, _29ID_TOKS_12086, 1);
    _15514 = NOVALUE;
    // SubProg IncludeScan pc: 459 op: NOT_IFW (108)
    if (_15515 != 0)
    goto L1B; // [459] 470
    _15515 = NOVALUE;
    // SubProg IncludeScan pc: 462 op: STARTLINE (58)

    /** scanner.e:2220							CompileErr(36)*/
    // SubProg IncludeScan pc: 464 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(36, _21958, 0);
    // SubProg IncludeScan pc: 469 op: NOP1 (159)
L1B: // addr: 470 pc: 469 sub: 27817 op: 159
    // SubProg IncludeScan pc: 470 op: STARTLINE (58)

    /** scanner.e:2222						new_include_space = NameSpace_declaration(s[T_SYM])*/
    // SubProg IncludeScan pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 474 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27823);
    _15517 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg IncludeScan pc: 478 op: PROC (27)
    Ref(_15517);
    _0 = _61NameSpace_declaration(_15517);
    _61new_include_space_25201 = _0;
    _15517 = NOVALUE;
    // SubProg IncludeScan pc: 482 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_61new_include_space_25201)) {
        _1 = (object)(DBL_PTR(_61new_include_space_25201)->dbl);
        DeRefDS(_61new_include_space_25201);
        _61new_include_space_25201 = _1;
    }
    // SubProg IncludeScan pc: 484 op: ELSE (23)
    goto L1C; // [484] 629
    // SubProg IncludeScan pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 27817 op: 159
    // SubProg IncludeScan pc: 487 op: STARTLINE (58)

    /** scanner.e:2224						CompileErr(113)*/
    // SubProg IncludeScan pc: 489 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(113, _21958, 0);
    // SubProg IncludeScan pc: 494 op: NOP1 (159)
    // SubProg IncludeScan pc: 495 op: ELSE (23)
    goto L1C; // [495] 629
    // SubProg IncludeScan pc: 497 op: NOP1 (159)
L13: // addr: 498 pc: 497 sub: 27817 op: 159
    // SubProg IncludeScan pc: 498 op: STARTLINE (58)

    /** scanner.e:2227					CompileErr(100)*/
    // SubProg IncludeScan pc: 500 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(100, _21958, 0);
    // SubProg IncludeScan pc: 505 op: NOP1 (159)
    // SubProg IncludeScan pc: 506 op: ELSE (23)
    goto L1C; // [506] 629
    // SubProg IncludeScan pc: 508 op: NOP1 (159)
L11: // addr: 509 pc: 508 sub: 27817 op: 159
    // SubProg IncludeScan pc: 509 op: STARTLINE (58)

    /** scanner.e:2230				CompileErr(100)*/
    // SubProg IncludeScan pc: 511 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(100, _21958, 0);
    // SubProg IncludeScan pc: 516 op: NOP1 (159)
    // SubProg IncludeScan pc: 517 op: ELSE (23)
    goto L1C; // [517] 629
    // SubProg IncludeScan pc: 519 op: NOP1 (159)
L10: // addr: 520 pc: 519 sub: 27817 op: 159
    // SubProg IncludeScan pc: 520 op: STARTLINE (58)

    /** scanner.e:2233		elsif find(ch, {'\n', '\r', END_OF_FILE_CHAR}) then*/
    // SubProg IncludeScan pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 524 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 26;
    _15519 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 530 op: FIND_FROM (176)
    _15520 = find_from(_ch_27820, _15519, 1);
    DeRefDS(_15519);
    _15519 = NOVALUE;
    // SubProg IncludeScan pc: 535 op: IF (20)
    if (_15520 == 0)
    {
        _15520 = NOVALUE;
        goto L1D; // [535] 545
    }
    else{
        _15520 = NOVALUE;
    }
    // SubProg IncludeScan pc: 538 op: STARTLINE (58)

    /** scanner.e:2234			ungetch()*/
    // SubProg IncludeScan pc: 540 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 542 op: ELSE (23)
    goto L1C; // [542] 629
    // SubProg IncludeScan pc: 544 op: NOP1 (159)
L1D: // addr: 545 pc: 544 sub: 27817 op: 159
    // SubProg IncludeScan pc: 545 op: STARTLINE (58)

    /** scanner.e:2236		elsif ch = '-' then*/
    // SubProg IncludeScan pc: 547 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 45)
    goto L1E; // [547] 583
    // SubProg IncludeScan pc: 551 op: STARTLINE (58)

    /** scanner.e:2237			ch = getch()*/
    // SubProg IncludeScan pc: 553 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 556 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 558 op: STARTLINE (58)

    /** scanner.e:2238			if ch != '-' then*/
    // SubProg IncludeScan pc: 560 op: NOTEQ_IFW_I (122)
    if (_ch_27820 == 45)
    goto L1F; // [560] 572
    // SubProg IncludeScan pc: 564 op: STARTLINE (58)

    /** scanner.e:2239				CompileErr(100)*/
    // SubProg IncludeScan pc: 566 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(100, _21958, 0);
    // SubProg IncludeScan pc: 571 op: NOP1 (159)
L1F: // addr: 572 pc: 571 sub: 27817 op: 159
    // SubProg IncludeScan pc: 572 op: STARTLINE (58)

    /** scanner.e:2241			ungetch()*/
    // SubProg IncludeScan pc: 574 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 576 op: STARTLINE (58)

    /** scanner.e:2242			ungetch()*/
    // SubProg IncludeScan pc: 578 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 580 op: ELSE (23)
    goto L1C; // [580] 629
    // SubProg IncludeScan pc: 582 op: NOP1 (159)
L1E: // addr: 583 pc: 582 sub: 27817 op: 159
    // SubProg IncludeScan pc: 583 op: STARTLINE (58)

    /** scanner.e:2244		elsif ch = '/' then*/
    // SubProg IncludeScan pc: 585 op: EQUALS_IFW_I (121)
    if (_ch_27820 != 47)
    goto L20; // [585] 621
    // SubProg IncludeScan pc: 589 op: STARTLINE (58)

    /** scanner.e:2245			ch = getch()*/
    // SubProg IncludeScan pc: 591 op: PROC (27)
    _ch_27820 = _61getch();
    // SubProg IncludeScan pc: 594 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27820)) {
        _1 = (object)(DBL_PTR(_ch_27820)->dbl);
        DeRefDS(_ch_27820);
        _ch_27820 = _1;
    }
    // SubProg IncludeScan pc: 596 op: STARTLINE (58)

    /** scanner.e:2246			if ch != '*' then*/
    // SubProg IncludeScan pc: 598 op: NOTEQ_IFW_I (122)
    if (_ch_27820 == 42)
    goto L21; // [598] 610
    // SubProg IncludeScan pc: 602 op: STARTLINE (58)

    /** scanner.e:2247				CompileErr(100)*/
    // SubProg IncludeScan pc: 604 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(100, _21958, 0);
    // SubProg IncludeScan pc: 609 op: NOP1 (159)
L21: // addr: 610 pc: 609 sub: 27817 op: 159
    // SubProg IncludeScan pc: 610 op: STARTLINE (58)

    /** scanner.e:2249			ungetch()*/
    // SubProg IncludeScan pc: 612 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 614 op: STARTLINE (58)

    /** scanner.e:2250			ungetch()*/
    // SubProg IncludeScan pc: 616 op: PROC (27)
    _61ungetch();
    // SubProg IncludeScan pc: 618 op: ELSE (23)
    goto L1C; // [618] 629
    // SubProg IncludeScan pc: 620 op: NOP1 (159)
L20: // addr: 621 pc: 620 sub: 27817 op: 159
    // SubProg IncludeScan pc: 621 op: STARTLINE (58)

    /** scanner.e:2253			CompileErr(100)*/
    // SubProg IncludeScan pc: 623 op: PROC (27)
    RefDS(_21958);
    _49CompileErr(100, _21958, 0);
    // SubProg IncludeScan pc: 628 op: NOP1 (159)
L1C: // addr: 629 pc: 628 sub: 27817 op: 159
    // SubProg IncludeScan pc: 629 op: STARTLINE (58)

    /** scanner.e:2256		start_include = TRUE -- let scanner know*/
    // SubProg IncludeScan pc: 631 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 633 op: ASSIGN (18)
    _61start_include_25203 = _6TRUE_365;
    // SubProg IncludeScan pc: 636 op: STARTLINE (58)

    /** scanner.e:2257		public_include = is_public*/
    // SubProg IncludeScan pc: 638 op: ASSIGN (18)
    _61public_include_25206 = _is_public_27819;
    // SubProg IncludeScan pc: 641 op: STARTLINE (58)

    /** scanner.e:2258	end procedure*/
    // SubProg IncludeScan pc: 643 op: RETURNP (29)

// Exiting block BLOCK: IncludeScan

// block var is_public_27819

// block var ch_27820

// block var gtext_27821
    DeRef(_gtext_27821);

// block var s_27823
    DeRef(_s_27823);
    DeRef(_15495);
    _15495 = NOVALUE;
    _15509 = NOVALUE;
    DeRef(_15504);
    _15504 = NOVALUE;
    DeRef(_15487);
    _15487 = NOVALUE;
    DeRef(_15462);
    _15462 = NOVALUE;
    DeRef(_15499);
    _15499 = NOVALUE;
    return;
    // SubProg IncludeScan pc: 646 op: BADRETURNF (43)
    ;
}


void _61main_file()
{
    object _15529 = NOVALUE; // 27943 15529
    object _15528 = NOVALUE; // 27941 15528
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg main_file pc: 1 op: STARTLINE (58)

    /** scanner.e:2271		if repl and top_level_block = -1 then*/
    // SubProg main_file pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg main_file pc: 5 op: SC1_AND_IF (146)
    if (0 == 0) {
        goto L1; // [5] 29
    }
    // SubProg main_file pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg main_file pc: 11 op: EQUALS (3)
    _15529 = (_64top_level_block_24773 == -1);
    // SubProg main_file pc: 15 op: NOP1 (159)
    // SubProg main_file pc: 16 op: IF (20)
    if (_15529 == 0)
    {
        DeRef(_15529);
        _15529 = NOVALUE;
        goto L1; // [16] 29
    }
    else{
        DeRef(_15529);
        _15529 = NOVALUE;
    }
    // SubProg main_file pc: 19 op: STARTLINE (58)

    /** scanner.e:2272			top_level_block = current_block*/
    // SubProg main_file pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg main_file pc: 23 op: ASSIGN (18)
    _64top_level_block_24773 = _64current_block_24772;
    // SubProg main_file pc: 26 op: INTEGER_CHECK (96)
    // SubProg main_file pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 27937 op: 159
    // SubProg main_file pc: 29 op: STARTLINE (58)

    /** scanner.e:2274		ifdef STDDEBUG then*/
    // SubProg main_file pc: 31 op: STARTLINE (58)

    /** scanner.e:2279			read_line()*/
    // SubProg main_file pc: 33 op: PROC (27)
    _61read_line();
    // SubProg main_file pc: 35 op: STARTLINE (58)

    /** scanner.e:2280			default_namespace( )*/
    // SubProg main_file pc: 37 op: PROC (27)
    _61default_namespace();
    // SubProg main_file pc: 39 op: STARTLINE (58)

    /** scanner.e:2282	end procedure*/
    // SubProg main_file pc: 41 op: RETURNP (29)

// Exiting block BLOCK: main_file
    return;
    // SubProg main_file pc: 44 op: BADRETURNF (43)
    ;
}


void _61cleanup_open_includes()
{
    object _15532 = NOVALUE; // 27952 15532
    object _15531 = NOVALUE; // 27951 15531
    object _15530 = NOVALUE; // 27950 15530
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cleanup_open_includes pc: 1 op: STARTLINE (58)

    /** scanner.e:2285		for i = 1 to length( IncludeStk ) do*/
    // SubProg cleanup_open_includes pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg cleanup_open_includes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_61IncludeStk_25212)){
            _15530 = SEQ_PTR(_61IncludeStk_25212)->length;
    }
    else {
        _15530 = 1;
    }
    // SubProg cleanup_open_includes pc: 8 op: FOR_I (125)
    {
        object _i_27949;
        _i_27949 = 1;
L1: // addr: 15 pc: 8 sub: 27946 op: 125
        if (_i_27949 > _15530){
            goto L2; // [8] 36
        }
        // SubProg cleanup_open_includes pc: 15 op: STARTLINE (58)

        /** scanner.e:2286			close( IncludeStk[i][FILE_PTR] )*/
        // SubProg cleanup_open_includes pc: 17 op: GLOBAL_INIT_CHECK (109)
        // SubProg cleanup_open_includes pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_61IncludeStk_25212);
        _15531 = (object)*(((s1_ptr)_2)->base + _i_27949);
        // SubProg cleanup_open_includes pc: 23 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_15531);
        _15532 = (object)*(((s1_ptr)_2)->base + 3);
        _15531 = NOVALUE;
        // SubProg cleanup_open_includes pc: 27 op: CLOSE (86)
        if (IS_ATOM_INT(_15532))
        EClose(_15532);
        else
        EClose((object)DBL_PTR(_15532)->dbl);
        _15532 = NOVALUE;
        // SubProg cleanup_open_includes pc: 29 op: STARTLINE (58)

        /** scanner.e:2287		end for*/
        // SubProg cleanup_open_includes pc: 31 op: ENDFOR_INT_UP1 (54)
        _i_27949 = _i_27949 + 1;
        goto L1; // [31] 15
L2: // addr: 36 pc: 31 sub: 27946 op: 54
        ;
    }
    // SubProg cleanup_open_includes pc: 36 op: STARTLINE (58)

    /** scanner.e:2288	end procedure*/
    // SubProg cleanup_open_includes pc: 38 op: RETURNP (29)

// Exiting block BLOCK: cleanup_open_includes
    return;
    // SubProg cleanup_open_includes pc: 41 op: BADRETURNF (43)
    ;
}



// 0xB68C79B4
