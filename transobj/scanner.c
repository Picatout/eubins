// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _62set_qualified_fwd(object _fwd_25214)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_qualified_fwd pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_25214)) {
        _1 = (object)(DBL_PTR(_fwd_25214)->dbl);
        DeRefDS(_fwd_25214);
        _fwd_25214 = _1;
    }
    // SubProg set_qualified_fwd pc: 3 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg set_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _62qualified_fwd_25211 = _fwd_25214;
    // SubProg set_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg set_qualified_fwd pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_qualified_fwd

// block var fwd_25214
    return;
    // SubProg set_qualified_fwd pc: 13 op: BADRETURNF (43)
    ;
}


object _62get_qualified_fwd()
{
    object _fwd_25217 = NOVALUE;
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_qualified_fwd pc: 1 op: STARTLINE (58)

    /** scanner.e:108		integer fwd = qualified_fwd*/
    // SubProg get_qualified_fwd pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_qualified_fwd pc: 5 op: ASSIGN_I (113)
    _fwd_25217 = _62qualified_fwd_25211;
    // SubProg get_qualified_fwd pc: 8 op: STARTLINE (58)

    /** scanner.e:109		set_qualified_fwd( -1 )*/
    // SubProg get_qualified_fwd pc: 10 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg get_qualified_fwd pc: 12 op: ASSIGN_I (113)
    _62qualified_fwd_25211 = -1;
    // SubProg get_qualified_fwd pc: 15 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg get_qualified_fwd pc: 17 op: ELSE (23)
    goto L1; // [17] 20
    // SubProg get_qualified_fwd pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 25215 op: 159
    // SubProg get_qualified_fwd pc: 20 op: STARTLINE (58)

    /** scanner.e:110		return fwd*/
    // SubProg get_qualified_fwd pc: 22 op: RETURNF (28)

// Exiting block BLOCK: get_qualified_fwd
    return _fwd_25217;
    // SubProg get_qualified_fwd pc: 26 op: BADRETURNF (43)
    ;
}


void _62InitLex()
{
// skipping _14223  name type: 0
    object _14222 = NOVALUE; // 25271 14222
    object _14221 = NOVALUE; // 25270 14221
    object _14220 = NOVALUE; // 25267 14220
// skipping _14219  name type: 0
    object _14218 = NOVALUE; // 25233 14218
    object _14217 = NOVALUE; // 25232 14217
    object _14216 = NOVALUE; // 25230 14216
    object _14215 = NOVALUE; // 25229 14215
// skipping _14214  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg InitLex pc: 1 op: STARTLINE (58)

    /** scanner.e:117		gline_number = 0*/
    // SubProg InitLex pc: 3 op: ASSIGN (18)
    _36gline_number_16441 = 0;
    // SubProg InitLex pc: 6 op: INTEGER_CHECK (96)
    // SubProg InitLex pc: 8 op: STARTLINE (58)

    /** scanner.e:118		line_number = 0*/
    // SubProg InitLex pc: 10 op: ASSIGN (18)
    _36line_number_16437 = 0;
    // SubProg InitLex pc: 13 op: INTEGER_CHECK (96)
    // SubProg InitLex pc: 15 op: STARTLINE (58)

    /** scanner.e:119		IncludeStk = {}*/
    // SubProg InitLex pc: 17 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_62IncludeStk_25188);
    _62IncludeStk_25188 = _5;
    // SubProg InitLex pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg InitLex pc: 22 op: STARTLINE (58)

    /** scanner.e:120		char_class = repeat(ILLEGAL_CHAR, 255)  -- we screen out the 0 character*/
    // SubProg InitLex pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 26 op: REPEAT (32)
    DeRefi(_62char_class_25186);
    _62char_class_25186 = Repeat(-20, 255);
    // SubProg InitLex pc: 30 op: STARTLINE (58)

    /** scanner.e:122		char_class['0'..'9'] = DIGIT*/
    // SubProg InitLex pc: 32 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 36 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_62char_class_25186;
    AssignSlice(48, 57, -7);
    // SubProg InitLex pc: 41 op: STARTLINE (58)

    /** scanner.e:123		char_class['_']      = DIGIT*/
    // SubProg InitLex pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 47 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 95);
    *(intptr_t *)_2 = -7;
    // SubProg InitLex pc: 51 op: STARTLINE (58)

    /** scanner.e:124		char_class['a'..'z'] = LETTER*/
    // SubProg InitLex pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 57 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_62char_class_25186;
    AssignSlice(97, 122, -2);
    // SubProg InitLex pc: 62 op: STARTLINE (58)

    /** scanner.e:125		char_class['A'..'Z'] = LETTER*/
    // SubProg InitLex pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 68 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_62char_class_25186;
    AssignSlice(65, 90, -2);
    // SubProg InitLex pc: 73 op: STARTLINE (58)

    /** scanner.e:126		char_class[KEYWORD_BASE+1..KEYWORD_BASE+NUM_KEYWORDS] = KEYWORD*/
    // SubProg InitLex pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 77 op: PLUS1 (93)
    _14215 = 129;
    // SubProg InitLex pc: 81 op: PLUS (11)
    _14216 = 152;
    // SubProg InitLex pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 87 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_62char_class_25186;
    AssignSlice(129, 152, -10);
    _14215 = NOVALUE;
    _14216 = NOVALUE;
    // SubProg InitLex pc: 92 op: STARTLINE (58)

    /** scanner.e:127		char_class[BUILTIN_BASE+1..BUILTIN_BASE+NUM_BUILTINS] = BUILTIN*/
    // SubProg InitLex pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 96 op: PLUS1 (93)
    _14217 = 171;
    // SubProg InitLex pc: 100 op: PLUS (11)
    _14218 = 234;
    // SubProg InitLex pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 106 op: ASSIGN_SLICE (45)
    assign_slice_seq = (s1_ptr *)&_62char_class_25186;
    AssignSlice(171, 234, -9);
    _14217 = NOVALUE;
    _14218 = NOVALUE;
    // SubProg InitLex pc: 111 op: STARTLINE (58)

    /** scanner.e:129		char_class[' '] = BLANK*/
    // SubProg InitLex pc: 113 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 117 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = -8;
    // SubProg InitLex pc: 121 op: STARTLINE (58)

    /** scanner.e:130		char_class['\t'] = BLANK*/
    // SubProg InitLex pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 127 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    *(intptr_t *)_2 = -8;
    // SubProg InitLex pc: 131 op: STARTLINE (58)

    /** scanner.e:131		char_class['+'] = PLUS*/
    // SubProg InitLex pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 137 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 43);
    *(intptr_t *)_2 = 11;
    // SubProg InitLex pc: 141 op: STARTLINE (58)

    /** scanner.e:132		char_class['-'] = MINUS*/
    // SubProg InitLex pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 147 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 45);
    *(intptr_t *)_2 = 10;
    // SubProg InitLex pc: 151 op: STARTLINE (58)

    /** scanner.e:133		char_class['*'] = res:MULTIPLY*/
    // SubProg InitLex pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 155 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 42);
    *(intptr_t *)_2 = 13;
    // SubProg InitLex pc: 159 op: STARTLINE (58)

    /** scanner.e:134		char_class['/'] = res:DIVIDE*/
    // SubProg InitLex pc: 161 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 163 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 47);
    *(intptr_t *)_2 = 14;
    // SubProg InitLex pc: 167 op: STARTLINE (58)

    /** scanner.e:135		char_class['='] = EQUALS*/
    // SubProg InitLex pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 173 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 61);
    *(intptr_t *)_2 = 3;
    // SubProg InitLex pc: 177 op: STARTLINE (58)

    /** scanner.e:136		char_class['<'] = LESS*/
    // SubProg InitLex pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 183 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 60);
    *(intptr_t *)_2 = 1;
    // SubProg InitLex pc: 187 op: STARTLINE (58)

    /** scanner.e:137		char_class['>'] = GREATER*/
    // SubProg InitLex pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 193 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 62);
    *(intptr_t *)_2 = 6;
    // SubProg InitLex pc: 197 op: STARTLINE (58)

    /** scanner.e:138		char_class['\''] = SINGLE_QUOTE*/
    // SubProg InitLex pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 203 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 39);
    *(intptr_t *)_2 = -5;
    // SubProg InitLex pc: 207 op: STARTLINE (58)

    /** scanner.e:139		char_class['"'] = DOUBLE_QUOTE*/
    // SubProg InitLex pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 34);
    *(intptr_t *)_2 = -4;
    // SubProg InitLex pc: 217 op: STARTLINE (58)

    /** scanner.e:140		char_class['`'] = BACK_QUOTE*/
    // SubProg InitLex pc: 219 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 223 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 96);
    *(intptr_t *)_2 = -12;
    // SubProg InitLex pc: 227 op: STARTLINE (58)

    /** scanner.e:141		char_class['.'] = DOT*/
    // SubProg InitLex pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 233 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 46);
    *(intptr_t *)_2 = -3;
    // SubProg InitLex pc: 237 op: STARTLINE (58)

    /** scanner.e:142		char_class[':'] = COLON*/
    // SubProg InitLex pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 241 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 243 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 58);
    *(intptr_t *)_2 = -23;
    // SubProg InitLex pc: 247 op: STARTLINE (58)

    /** scanner.e:143		char_class['\r'] = NEWLINE*/
    // SubProg InitLex pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 253 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    *(intptr_t *)_2 = -6;
    // SubProg InitLex pc: 257 op: STARTLINE (58)

    /** scanner.e:144		char_class['\n'] = NEWLINE*/
    // SubProg InitLex pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 263 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    *(intptr_t *)_2 = -6;
    // SubProg InitLex pc: 267 op: STARTLINE (58)

    /** scanner.e:145		char_class['!'] = BANG*/
    // SubProg InitLex pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 273 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 33);
    *(intptr_t *)_2 = -1;
    // SubProg InitLex pc: 277 op: STARTLINE (58)

    /** scanner.e:146		char_class['{'] = LEFT_BRACE*/
    // SubProg InitLex pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 283 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 123);
    *(intptr_t *)_2 = -24;
    // SubProg InitLex pc: 287 op: STARTLINE (58)

    /** scanner.e:147		char_class['}'] = RIGHT_BRACE*/
    // SubProg InitLex pc: 289 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 293 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 125);
    *(intptr_t *)_2 = -25;
    // SubProg InitLex pc: 297 op: STARTLINE (58)

    /** scanner.e:148		char_class['('] = LEFT_ROUND*/
    // SubProg InitLex pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 303 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 40);
    *(intptr_t *)_2 = -26;
    // SubProg InitLex pc: 307 op: STARTLINE (58)

    /** scanner.e:149		char_class[')'] = RIGHT_ROUND*/
    // SubProg InitLex pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 311 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 313 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 41);
    *(intptr_t *)_2 = -27;
    // SubProg InitLex pc: 317 op: STARTLINE (58)

    /** scanner.e:150		char_class['['] = LEFT_SQUARE*/
    // SubProg InitLex pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 323 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 91);
    *(intptr_t *)_2 = -28;
    // SubProg InitLex pc: 327 op: STARTLINE (58)

    /** scanner.e:151		char_class[']'] = RIGHT_SQUARE*/
    // SubProg InitLex pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 331 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 333 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 93);
    *(intptr_t *)_2 = -29;
    // SubProg InitLex pc: 337 op: STARTLINE (58)

    /** scanner.e:152		char_class['$'] = DOLLAR*/
    // SubProg InitLex pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 343 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = -22;
    // SubProg InitLex pc: 347 op: STARTLINE (58)

    /** scanner.e:153		char_class[','] = COMMA*/
    // SubProg InitLex pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 351 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 353 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 44);
    *(intptr_t *)_2 = -30;
    // SubProg InitLex pc: 357 op: STARTLINE (58)

    /** scanner.e:154		char_class['&'] = res:CONCAT*/
    // SubProg InitLex pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 361 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 38);
    *(intptr_t *)_2 = 15;
    // SubProg InitLex pc: 365 op: STARTLINE (58)

    /** scanner.e:155		char_class['?'] = QUESTION_MARK*/
    // SubProg InitLex pc: 367 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 371 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 63);
    *(intptr_t *)_2 = -31;
    // SubProg InitLex pc: 375 op: STARTLINE (58)

    /** scanner.e:156		char_class['#'] = NUMBER_SIGN*/
    // SubProg InitLex pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 381 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 35);
    *(intptr_t *)_2 = -11;
    // SubProg InitLex pc: 385 op: STARTLINE (58)

    /** scanner.e:159		char_class[END_OF_FILE_CHAR] = END_OF_FILE*/
    // SubProg InitLex pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 389 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 393 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _2 = (object)(((s1_ptr)_2)->base + 26);
    *(intptr_t *)_2 = -21;
    // SubProg InitLex pc: 397 op: STARTLINE (58)

    /** scanner.e:162		id_char = repeat(FALSE, 255)*/
    // SubProg InitLex pc: 399 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitLex pc: 401 op: REPEAT (32)
    DeRefi(_62id_char_25187);
    _62id_char_25187 = Repeat(_13FALSE_450, 255);
    // SubProg InitLex pc: 405 op: STARTLINE (58)

    /** scanner.e:163		for i = 1 to 255 do*/
    // SubProg InitLex pc: 407 op: FOR_I (125)
    {
        object _i_25265;
        _i_25265 = 1;
L1: // addr: 414 pc: 407 sub: 25219 op: 125
        if (_i_25265 > 255){
            goto L2; // [407] 456
        }
        // SubProg InitLex pc: 414 op: STARTLINE (58)

        /** scanner.e:164			if find(char_class[i], {LETTER, DIGIT}) then*/
        // SubProg InitLex pc: 416 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 418 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_62char_class_25186);
        _14220 = (object)*(((s1_ptr)_2)->base + _i_25265);
        // SubProg InitLex pc: 422 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 424 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 426 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = -7;
        _14221 = MAKE_SEQ(_1);
        // SubProg InitLex pc: 430 op: FIND_FROM (176)
        _14222 = find_from(_14220, _14221, 1);
        _14220 = NOVALUE;
        DeRefDS(_14221);
        _14221 = NOVALUE;
        // SubProg InitLex pc: 435 op: IF (20)
        if (_14222 == 0)
        {
            _14222 = NOVALUE;
            goto L3; // [435] 449
        }
        else{
            _14222 = NOVALUE;
        }
        // SubProg InitLex pc: 438 op: STARTLINE (58)

        /** scanner.e:165				id_char[i] = TRUE*/
        // SubProg InitLex pc: 440 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitLex pc: 444 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_62id_char_25187);
        _2 = (object)(((s1_ptr)_2)->base + _i_25265);
        *(intptr_t *)_2 = _13TRUE_452;
        // SubProg InitLex pc: 448 op: NOP1 (159)
L3: // addr: 449 pc: 448 sub: 25219 op: 159
        // SubProg InitLex pc: 449 op: STARTLINE (58)

        /** scanner.e:167		end for*/
        // SubProg InitLex pc: 451 op: ENDFOR_INT_UP1 (54)
        _i_25265 = _i_25265 + 1;
        goto L1; // [451] 414
L2: // addr: 456 pc: 451 sub: 25219 op: 54
        ;
    }
    // SubProg InitLex pc: 456 op: STARTLINE (58)

    /** scanner.e:169		default_namespaces = {0}*/
    // SubProg InitLex pc: 458 op: RIGHT_BRACE_N (31)
    _0 = _62default_namespaces_25185;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _62default_namespaces_25185 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg InitLex pc: 462 op: STARTLINE (58)

    /** scanner.e:170	end procedure*/
    // SubProg InitLex pc: 464 op: RETURNP (29)

// Exiting block BLOCK: InitLex
    return;
    // SubProg InitLex pc: 467 op: BADRETURNF (43)
    ;
}


void _62ResetTP()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ResetTP pc: 1 op: STARTLINE (58)

    /** scanner.e:174		OpTrace = FALSE*/
    // SubProg ResetTP pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 5 op: ASSIGN (18)
    _36OpTrace_16505 = _13FALSE_450;
    // SubProg ResetTP pc: 8 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 10 op: STARTLINE (58)

    /** scanner.e:175		OpProfileStatement = FALSE*/
    // SubProg ResetTP pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 14 op: ASSIGN (18)
    _36OpProfileStatement_16507 = _13FALSE_450;
    // SubProg ResetTP pc: 17 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 19 op: STARTLINE (58)

    /** scanner.e:176		OpProfileTime = FALSE*/
    // SubProg ResetTP pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 23 op: ASSIGN (18)
    _36OpProfileTime_16508 = _13FALSE_450;
    // SubProg ResetTP pc: 26 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 28 op: STARTLINE (58)

    /** scanner.e:177		AnyStatementProfile = FALSE*/
    // SubProg ResetTP pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 32 op: ASSIGN (18)
    _37AnyStatementProfile_15428 = _13FALSE_450;
    // SubProg ResetTP pc: 35 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 37 op: STARTLINE (58)

    /** scanner.e:178		AnyTimeProfile = FALSE*/
    // SubProg ResetTP pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg ResetTP pc: 41 op: ASSIGN (18)
    _37AnyTimeProfile_15427 = _13FALSE_450;
    // SubProg ResetTP pc: 44 op: INTEGER_CHECK (96)
    // SubProg ResetTP pc: 46 op: STARTLINE (58)

    /** scanner.e:179	end procedure*/
    // SubProg ResetTP pc: 48 op: RETURNP (29)

// Exiting block BLOCK: ResetTP
    return;
    // SubProg ResetTP pc: 51 op: BADRETURNF (43)
    ;
}


object _62pack_source(object _src_25295)
{
    object _start_25296 = NOVALUE;
    object _14246 = NOVALUE; // 25326 14246
    object _14245 = NOVALUE; // 25325 14245
    object _14244 = NOVALUE; // 25324 14244
    object _14243 = NOVALUE; // 25323 14243
// skipping _14242  name type: 0
    object _14241 = NOVALUE; // 25320 14241
// skipping _14240  name type: 0
    object _14239 = NOVALUE; // 25318 14239
    object _14238 = NOVALUE; // 25317 14238
    object _14237 = NOVALUE; // 25316 14237
// skipping _14236  name type: 0
// skipping _14235  name type: 0
// skipping _14234  name type: 0
    object _14233 = NOVALUE; // 25308 14233
// skipping _14232  name type: 0
    object _14231 = NOVALUE; // 25305 14231
    object _14230 = NOVALUE; // 25304 14230
// skipping _14229  name type: 0
// skipping _14228  name type: 0
    object _14227 = NOVALUE; // 25300 14227
    object _14226 = NOVALUE; // 25298 14226
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pack_source pc: 1 op: STARTLINE (58)

    /** scanner.e:197		if equal(src, 0) then*/
    // SubProg pack_source pc: 3 op: EQUAL (153)
    if (_src_25295 == 0)
    _14226 = 1;
    else if (IS_ATOM_INT(_src_25295) && IS_ATOM_INT(0))
    _14226 = 0;
    else
    _14226 = (compare(_src_25295, 0) == 0);
    // SubProg pack_source pc: 7 op: IF (20)
    if (_14226 == 0)
    {
        _14226 = NOVALUE;
        goto L1; // [7] 17
    }
    else{
        _14226 = NOVALUE;
    }
    // SubProg pack_source pc: 10 op: STARTLINE (58)

    /** scanner.e:198			return 0*/
    // SubProg pack_source pc: 12 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25295
    DeRef(_src_25295);

// block var start_25296
    return 0;
    // SubProg pack_source pc: 16 op: NOP1 (159)
L1: // addr: 17 pc: 16 sub: 25293 op: 159
    // SubProg pack_source pc: 17 op: STARTLINE (58)

    /** scanner.e:201		if length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 19 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25295)){
            _14227 = SEQ_PTR(_src_25295)->length;
    }
    else {
        _14227 = 1;
    }
    // SubProg pack_source pc: 22 op: GREATEREQ_IFW_I (120)
    if (_14227 < 10000)
    goto L2; // [22] 34
    // SubProg pack_source pc: 26 op: STARTLINE (58)

    /** scanner.e:202			src = src[1..100] -- enough for trace or profile display*/
    // SubProg pack_source pc: 28 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_src_25295;
    RHS_Slice(_src_25295, 1, 100);
    // SubProg pack_source pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 25293 op: 159
    // SubProg pack_source pc: 34 op: STARTLINE (58)

    /** scanner.e:205		if current_source_next + length(src) >= SOURCE_CHUNK then*/
    // SubProg pack_source pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 38 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25295)){
            _14230 = SEQ_PTR(_src_25295)->length;
    }
    else {
        _14230 = 1;
    }
    // SubProg pack_source pc: 41 op: PLUS (11)
    _14231 = _62current_source_next_25291 + _14230;
    if ((object)((uintptr_t)_14231 + (uintptr_t)HIGH_BITS) >= 0){
        _14231 = NewDouble((eudouble)_14231);
    }
    _14230 = NOVALUE;
    // SubProg pack_source pc: 45 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _14231, 10000)){
        DeRef(_14231);
        _14231 = NOVALUE;
        goto L3; // [45] 94
    }
    DeRef(_14231);
    _14231 = NOVALUE;
    // SubProg pack_source pc: 49 op: STARTLINE (58)

    /** scanner.e:207			current_source = allocate(SOURCE_CHUNK + LINE_BUFLEN)*/
    // SubProg pack_source pc: 51 op: PLUS (11)
    _14233 = 10400;
    // SubProg pack_source pc: 55 op: PROC (27)
    _0 = _9allocate(10400, 0);
    DeRef(_62current_source_25290);
    _62current_source_25290 = _0;
    _14233 = NOVALUE;
    // SubProg pack_source pc: 60 op: STARTLINE (58)

    /** scanner.e:208			if current_source = 0 then*/
    // SubProg pack_source pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 64 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _62current_source_25290, 0)){
        goto L4; // [64] 76
    }
    // SubProg pack_source pc: 68 op: STARTLINE (58)

    /** scanner.e:209				CompileErr(123)*/
    // SubProg pack_source pc: 70 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(123, _21933, 0);
    // SubProg pack_source pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 25293 op: 159
    // SubProg pack_source pc: 76 op: STARTLINE (58)

    /** scanner.e:211			all_source = append(all_source, current_source)*/
    // SubProg pack_source pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 82 op: APPEND (35)
    Ref(_62current_source_25290);
    Append(&_37all_source_15429, _37all_source_15429, _62current_source_25290);
    // SubProg pack_source pc: 86 op: SEQUENCE_CHECK (97)
    // SubProg pack_source pc: 88 op: STARTLINE (58)

    /** scanner.e:213			current_source_next = 1*/
    // SubProg pack_source pc: 90 op: ASSIGN_I (113)
    _62current_source_next_25291 = 1;
    // SubProg pack_source pc: 93 op: NOP1 (159)
L3: // addr: 94 pc: 93 sub: 25293 op: 159
    // SubProg pack_source pc: 94 op: STARTLINE (58)

    /** scanner.e:216		start = current_source_next*/
    // SubProg pack_source pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 98 op: ASSIGN_I (113)
    _start_25296 = _62current_source_next_25291;
    // SubProg pack_source pc: 101 op: STARTLINE (58)

    /** scanner.e:217		poke(current_source+current_source_next, src)*/
    // SubProg pack_source pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 105 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 107 op: PLUS (11)
    if (IS_ATOM_INT(_62current_source_25290)) {
        _14237 = _62current_source_25290 + _62current_source_next_25291;
        if ((object)((uintptr_t)_14237 + (uintptr_t)HIGH_BITS) >= 0){
            _14237 = NewDouble((eudouble)_14237);
        }
    }
    else {
        _14237 = NewDouble(DBL_PTR(_62current_source_25290)->dbl + (eudouble)_62current_source_next_25291);
    }
    // SubProg pack_source pc: 111 op: POKE (128)
    if (IS_ATOM_INT(_14237)){
        poke_addr = (uint8_t *)_14237;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14237)->dbl);
    }
    if (IS_ATOM_INT(_src_25295)) {
        *poke_addr = (uint8_t)_src_25295;
    }
    else if (IS_ATOM(_src_25295)) {
        *poke_addr = (uint8_t)DBL_PTR(_src_25295)->dbl;
    }
    else {
        _1 = (object)SEQ_PTR(_src_25295);
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
    DeRef(_14237);
    _14237 = NOVALUE;
    // SubProg pack_source pc: 114 op: STARTLINE (58)

    /** scanner.e:218		current_source_next += length(src)-1*/
    // SubProg pack_source pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 118 op: LENGTH (42)
    if (IS_SEQUENCE(_src_25295)){
            _14238 = SEQ_PTR(_src_25295)->length;
    }
    else {
        _14238 = 1;
    }
    // SubProg pack_source pc: 121 op: MINUS (10)
    _14239 = _14238 - 1;
    _14238 = NOVALUE;
    // SubProg pack_source pc: 125 op: PLUS (11)
    _62current_source_next_25291 = _62current_source_next_25291 + _14239;
    _14239 = NOVALUE;
    // SubProg pack_source pc: 131 op: STARTLINE (58)

    /** scanner.e:219		poke(current_source+current_source_next, 0) -- overwrite \n*/
    // SubProg pack_source pc: 133 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 137 op: PLUS (11)
    if (IS_ATOM_INT(_62current_source_25290)) {
        _14241 = _62current_source_25290 + _62current_source_next_25291;
        if ((object)((uintptr_t)_14241 + (uintptr_t)HIGH_BITS) >= 0){
            _14241 = NewDouble((eudouble)_14241);
        }
    }
    else {
        _14241 = NewDouble(DBL_PTR(_62current_source_25290)->dbl + (eudouble)_62current_source_next_25291);
    }
    // SubProg pack_source pc: 141 op: POKE (128)
    if (IS_ATOM_INT(_14241)){
        poke_addr = (uint8_t *)_14241;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14241)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_14241);
    _14241 = NOVALUE;
    // SubProg pack_source pc: 144 op: STARTLINE (58)

    /** scanner.e:220		current_source_next += 1*/
    // SubProg pack_source pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 148 op: PLUS1_I (117)
    _62current_source_next_25291 = _62current_source_next_25291 + 1;
    // SubProg pack_source pc: 152 op: STARTLINE (58)

    /** scanner.e:221		return start + SOURCE_CHUNK * (length(all_source)-1)*/
    // SubProg pack_source pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg pack_source pc: 156 op: LENGTH (42)
    if (IS_SEQUENCE(_37all_source_15429)){
            _14243 = SEQ_PTR(_37all_source_15429)->length;
    }
    else {
        _14243 = 1;
    }
    // SubProg pack_source pc: 159 op: MINUS (10)
    _14244 = _14243 - 1;
    _14243 = NOVALUE;
    // SubProg pack_source pc: 163 op: MULTIPLY (13)
    if (_14244 <= INT15){
        _14245 = 10000 * _14244;
    }
    else{
        _14245 = NewDouble(10000 * (eudouble)_14244);
    }
    _14244 = NOVALUE;
    // SubProg pack_source pc: 167 op: PLUS (11)
    if (IS_ATOM_INT(_14245)) {
        _14246 = _start_25296 + _14245;
        if ((object)((uintptr_t)_14246 + (uintptr_t)HIGH_BITS) >= 0){
            _14246 = NewDouble((eudouble)_14246);
        }
    }
    else {
        _14246 = NewDouble((eudouble)_start_25296 + DBL_PTR(_14245)->dbl);
    }
    DeRef(_14245);
    _14245 = NOVALUE;
    // SubProg pack_source pc: 171 op: RETURNF (28)

// Exiting block BLOCK: pack_source

// block var src_25295
    DeRef(_src_25295);

// block var start_25296
    return _14246;
    // SubProg pack_source pc: 175 op: BADRETURNF (43)
    ;
}


object _62fetch_line(object _start_25329)
{
    object _line_25330 = NOVALUE;
    object _memdata_25331 = NOVALUE;
    object _c_25332 = NOVALUE;
    object _chunk_25333 = NOVALUE;
    object _p_25334 = NOVALUE;
    object _n_25335 = NOVALUE;
    object _m_25336 = NOVALUE;
// skipping _14272  name type: 0
    object _14271 = NOVALUE; // 25368 14271
    object _14270 = NOVALUE; // 25367 14270
// skipping _14269  name type: 0
    object _14268 = NOVALUE; // 25365 14268
// skipping _14267  name type: 0
    object _14266 = NOVALUE; // 25363 14266
// skipping _14265  name type: 0
// skipping _14264  name type: 0
// skipping _14263  name type: 0
// skipping _14262  name type: 0
// skipping _14261  name type: 0
    object _14260 = NOVALUE; // 25355 14260
// skipping _14259  name type: 0
    object _14258 = NOVALUE; // 25353 14258
// skipping _14257  name type: 0
// skipping _14256  name type: 0
// skipping _14255  name type: 0
    object _14254 = NOVALUE; // 25346 14254
// skipping _14253  name type: 0
    object _14252 = NOVALUE; // 25344 14252
// skipping _14251  name type: 0
// skipping _14250  name type: 0
    object _14249 = NOVALUE; // 25340 14249
// skipping _14248  name type: 0
// skipping _14247  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg fetch_line pc: 1 op: INTEGER_CHECK (96)
    // SubProg fetch_line pc: 3 op: STARTLINE (58)

    /** scanner.e:234		if start = 0 then*/
    // SubProg fetch_line pc: 5 op: EQUALS_IFW_I (121)
    if (_start_25329 != 0)
    goto L1; // [5] 16
    // SubProg fetch_line pc: 9 op: STARTLINE (58)

    /** scanner.e:235			return ""*/
    // SubProg fetch_line pc: 11 op: RETURNF (28)
    RefDS(_5);

// Exiting block BLOCK: fetch_line

// block var start_25329

// block var line_25330
    DeRef(_line_25330);

// block var memdata_25331
    DeRefi(_memdata_25331);

// block var c_25332

// block var chunk_25333

// block var p_25334
    DeRef(_p_25334);

// block var n_25335

// block var m_25336
    return _5;
    // SubProg fetch_line pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 25327 op: 159
    // SubProg fetch_line pc: 16 op: STARTLINE (58)

    /** scanner.e:237		line = repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 18 op: REPEAT (32)
    DeRef(_line_25330);
    _line_25330 = Repeat(0, 400);
    // SubProg fetch_line pc: 22 op: STARTLINE (58)

    /** scanner.e:238		n = 0*/
    // SubProg fetch_line pc: 24 op: ASSIGN_I (113)
    _n_25335 = 0;
    // SubProg fetch_line pc: 27 op: STARTLINE (58)

    /** scanner.e:239		chunk = 1+floor(start / SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 29 op: FLOOR_DIV (63)
    if (10000 > 0 && _start_25329 >= 0) {
        _14249 = _start_25329 / 10000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_start_25329 / (eudouble)10000);
        _14249 = (object)temp_dbl;
    }
    // SubProg fetch_line pc: 33 op: PLUS1_I (117)
    _chunk_25333 = _14249 + 1;
    _14249 = NOVALUE;
    // SubProg fetch_line pc: 37 op: STARTLINE (58)

    /** scanner.e:240		start = remainder(start, SOURCE_CHUNK)*/
    // SubProg fetch_line pc: 39 op: REMAINDER (71)
    _start_25329 = (_start_25329 % 10000);
    // SubProg fetch_line pc: 43 op: STARTLINE (58)

    /** scanner.e:241		p = all_source[chunk] + start*/
    // SubProg fetch_line pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37all_source_15429);
    _14252 = (object)*(((s1_ptr)_2)->base + _chunk_25333);
    // SubProg fetch_line pc: 51 op: PLUS (11)
    DeRef(_p_25334);
    if (IS_ATOM_INT(_14252)) {
        _p_25334 = _14252 + _start_25329;
        if ((object)((uintptr_t)_p_25334 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25334 = NewDouble((eudouble)_p_25334);
        }
    }
    else {
        _p_25334 = NewDouble(DBL_PTR(_14252)->dbl + (eudouble)_start_25329);
    }
    _14252 = NOVALUE;
    // SubProg fetch_line pc: 55 op: STARTLINE (58)

    /** scanner.e:242		memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 57 op: RIGHT_BRACE_2 (85)
    Ref(_p_25334);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25334;
    ((intptr_t *)_2)[2] = 400;
    _14254 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 61 op: PEEK (127)
    DeRefi(_memdata_25331);
    _1 = (object)SEQ_PTR(_14254);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25331 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14254);
    _14254 = NOVALUE;
    // SubProg fetch_line pc: 64 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 66 op: STARTLINE (58)

    /** scanner.e:243		p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 68 op: PLUS (11)
    _0 = _p_25334;
    if (IS_ATOM_INT(_p_25334)) {
        _p_25334 = _p_25334 + 400;
        if ((object)((uintptr_t)_p_25334 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25334 = NewDouble((eudouble)_p_25334);
        }
    }
    else {
        _p_25334 = NewDouble(DBL_PTR(_p_25334)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 72 op: STARTLINE (58)

    /** scanner.e:244		m = 0*/
    // SubProg fetch_line pc: 74 op: ASSIGN_I (113)
    _m_25336 = 0;
    // SubProg fetch_line pc: 77 op: STARTLINE (58)

    /** scanner.e:245		while TRUE do*/
    // SubProg fetch_line pc: 79 op: NOP2 (110)
    // SubProg fetch_line pc: 81 op: NOPWHILE (158)
L2: // addr: 82 pc: 81 sub: 25327 op: 158
    // SubProg fetch_line pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg fetch_line pc: 84 op: WHILE (47)
    if (_13TRUE_452 == 0)
    {
        goto L3; // [84] 179
    }
    else{
    }
    // SubProg fetch_line pc: 87 op: STARTLINE (58)

    /** scanner.e:246			m += 1*/
    // SubProg fetch_line pc: 89 op: PLUS1_I (117)
    _m_25336 = _m_25336 + 1;
    // SubProg fetch_line pc: 93 op: STARTLINE (58)

    /** scanner.e:247			if m > length(memdata) then*/
    // SubProg fetch_line pc: 95 op: LENGTH (42)
    if (IS_SEQUENCE(_memdata_25331)){
            _14258 = SEQ_PTR(_memdata_25331)->length;
    }
    else {
        _14258 = 1;
    }
    // SubProg fetch_line pc: 98 op: GREATER_IFW_I (124)
    if (_m_25336 <= _14258)
    goto L4; // [98] 125
    // SubProg fetch_line pc: 102 op: STARTLINE (58)

    /** scanner.e:248				memdata = peek({p, LINE_BUFLEN})*/
    // SubProg fetch_line pc: 104 op: RIGHT_BRACE_2 (85)
    Ref(_p_25334);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25334;
    ((intptr_t *)_2)[2] = 400;
    _14260 = MAKE_SEQ(_1);
    // SubProg fetch_line pc: 108 op: PEEK (127)
    DeRefDSi(_memdata_25331);
    _1 = (object)SEQ_PTR(_14260);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25331 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14260);
    _14260 = NOVALUE;
    // SubProg fetch_line pc: 111 op: SEQUENCE_CHECK (97)
    // SubProg fetch_line pc: 113 op: STARTLINE (58)

    /** scanner.e:249				p += LINE_BUFLEN*/
    // SubProg fetch_line pc: 115 op: PLUS (11)
    _0 = _p_25334;
    if (IS_ATOM_INT(_p_25334)) {
        _p_25334 = _p_25334 + 400;
        if ((object)((uintptr_t)_p_25334 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25334 = NewDouble((eudouble)_p_25334);
        }
    }
    else {
        _p_25334 = NewDouble(DBL_PTR(_p_25334)->dbl + (eudouble)400);
    }
    DeRef(_0);
    // SubProg fetch_line pc: 119 op: STARTLINE (58)

    /** scanner.e:250				m = 1*/
    // SubProg fetch_line pc: 121 op: ASSIGN_I (113)
    _m_25336 = 1;
    // SubProg fetch_line pc: 124 op: NOP1 (159)
L4: // addr: 125 pc: 124 sub: 25327 op: 159
    // SubProg fetch_line pc: 125 op: STARTLINE (58)

    /** scanner.e:252			c = memdata[m]*/
    // SubProg fetch_line pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_memdata_25331);
    _c_25332 = (object)*(((s1_ptr)_2)->base + _m_25336);
    // SubProg fetch_line pc: 131 op: STARTLINE (58)

    /** scanner.e:253			if c = 0 then*/
    // SubProg fetch_line pc: 133 op: EQUALS_IFW_I (121)
    if (_c_25332 != 0)
    goto L5; // [133] 142
    // SubProg fetch_line pc: 137 op: STARTLINE (58)

    /** scanner.e:254				exit*/
    // SubProg fetch_line pc: 139 op: EXIT (61)
    goto L3; // [139] 179
    // SubProg fetch_line pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 25327 op: 159
    // SubProg fetch_line pc: 142 op: STARTLINE (58)

    /** scanner.e:256			n += 1*/
    // SubProg fetch_line pc: 144 op: PLUS1_I (117)
    _n_25335 = _n_25335 + 1;
    // SubProg fetch_line pc: 148 op: STARTLINE (58)

    /** scanner.e:257			if n > length(line) then*/
    // SubProg fetch_line pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25330)){
            _14266 = SEQ_PTR(_line_25330)->length;
    }
    else {
        _14266 = 1;
    }
    // SubProg fetch_line pc: 153 op: GREATER_IFW_I (124)
    if (_n_25335 <= _14266)
    goto L6; // [153] 168
    // SubProg fetch_line pc: 157 op: STARTLINE (58)

    /** scanner.e:258				line &= repeat(0, LINE_BUFLEN)*/
    // SubProg fetch_line pc: 159 op: REPEAT (32)
    _14268 = Repeat(0, 400);
    // SubProg fetch_line pc: 163 op: CONCAT (15)
    Concat((object_ptr)&_line_25330, _line_25330, _14268);
    DeRefDS(_14268);
    _14268 = NOVALUE;
    // SubProg fetch_line pc: 167 op: NOP1 (159)
L6: // addr: 168 pc: 167 sub: 25327 op: 159
    // SubProg fetch_line pc: 168 op: STARTLINE (58)

    /** scanner.e:260			line[n] = c*/
    // SubProg fetch_line pc: 170 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_line_25330);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _line_25330 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_25335);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _c_25332;
    DeRef(_1);
    // SubProg fetch_line pc: 174 op: STARTLINE (58)

    /** scanner.e:261		end while*/
    // SubProg fetch_line pc: 176 op: ENDWHILE (22)
    goto L2; // [176] 82
    // SubProg fetch_line pc: 178 op: NOP1 (159)
L3: // addr: 179 pc: 178 sub: 25327 op: 159
    // SubProg fetch_line pc: 179 op: STARTLINE (58)

    /** scanner.e:262		line = remove( line, n+1, length( line ) )*/
    // SubProg fetch_line pc: 181 op: PLUS1 (93)
    _14270 = _n_25335 + 1;
    if (_14270 > MAXINT){
        _14270 = NewDouble((eudouble)_14270);
    }
    // SubProg fetch_line pc: 185 op: LENGTH (42)
    if (IS_SEQUENCE(_line_25330)){
            _14271 = SEQ_PTR(_line_25330)->length;
    }
    else {
        _14271 = 1;
    }
    // SubProg fetch_line pc: 188 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_line_25330);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14270)) ? _14270 : (object)(DBL_PTR(_14270)->dbl);
        int stop = (IS_ATOM_INT(_14271)) ? _14271 : (object)(DBL_PTR(_14271)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_line_25330), start, &_line_25330 );
            }
            else Tail(SEQ_PTR(_line_25330), stop+1, &_line_25330);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_line_25330), start, &_line_25330);
        }
        else {
            assign_slice_seq = &assign_space;
            _line_25330 = Remove_elements(start, stop, (SEQ_PTR(_line_25330)->ref == 1));
        }
    }
    DeRef(_14270);
    _14270 = NOVALUE;
    _14271 = NOVALUE;
    // SubProg fetch_line pc: 193 op: STARTLINE (58)

    /** scanner.e:263		return line*/
    // SubProg fetch_line pc: 195 op: RETURNF (28)

// Exiting block BLOCK: fetch_line

// block var start_25329

// block var memdata_25331
    DeRefi(_memdata_25331);

// block var c_25332

// block var chunk_25333

// block var p_25334
    DeRef(_p_25334);

// block var n_25335

// block var m_25336
    return _line_25330;
    // SubProg fetch_line pc: 199 op: BADRETURNF (43)
    ;
}


void _62AppendSourceLine()
{
    object _new_25372 = NOVALUE;
    object _old_25373 = NOVALUE;
    object _options_25374 = NOVALUE;
    object _src_25375 = NOVALUE;
// skipping _14313  name type: 0
    object _14312 = NOVALUE; // 25460 14312
// skipping _14311  name type: 0
// skipping _14310  name type: 0
// skipping _14309  name type: 0
    object _14308 = NOVALUE; // 25447 14308
// skipping _14307  name type: 0
    object _14306 = NOVALUE; // 25444 14306
    object _14305 = NOVALUE; // 25443 14305
// skipping _14304  name type: 0
// skipping _14303  name type: 0
    object _14302 = NOVALUE; // 25435 14302
    object _14301 = NOVALUE; // 25434 14301
    object _14300 = NOVALUE; // 25433 14300
    object _14299 = NOVALUE; // 25431 14299
    object _14298 = NOVALUE; // 25430 14298
    object _14297 = NOVALUE; // 25428 14297
    object _14296 = NOVALUE; // 25427 14296
    object _14295 = NOVALUE; // 25426 14295
    object _14294 = NOVALUE; // 25425 14294
    object _14293 = NOVALUE; // 25424 14293
    object _14292 = NOVALUE; // 25422 14292
    object _14291 = NOVALUE; // 25421 14291
    object _14290 = NOVALUE; // 25418 14290
    object _14289 = NOVALUE; // 25417 14289
    object _14288 = NOVALUE; // 25416 14288
    object _14287 = NOVALUE; // 25413 14287
    object _14286 = NOVALUE; // 25412 14286
    object _14285 = NOVALUE; // 25411 14285
// skipping _14284  name type: 0
    object _14283 = NOVALUE; // 25407 14283
    object _14282 = NOVALUE; // 25406 14282
    object _14281 = NOVALUE; // 25404 14281
// skipping _14280  name type: 0
    object _14279 = NOVALUE; // 25400 14279
// skipping _14278  name type: 0
// skipping _14277  name type: 0
// skipping _14276  name type: 0
// skipping _14275  name type: 0
    object _14274 = NOVALUE; // 25380 14274
    object _14273 = NOVALUE; // 25378 14273
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg AppendSourceLine pc: 1 op: STARTLINE (58)

    /** scanner.e:272		src = 0*/
    // SubProg AppendSourceLine pc: 3 op: ASSIGN (18)
    DeRef(_src_25375);
    _src_25375 = 0;
    // SubProg AppendSourceLine pc: 6 op: STARTLINE (58)

    /** scanner.e:273		options = 0*/
    // SubProg AppendSourceLine pc: 8 op: ASSIGN_I (113)
    _options_25374 = 0;
    // SubProg AppendSourceLine pc: 11 op: STARTLINE (58)

    /** scanner.e:275		if TRANSLATE or OpTrace or OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 15 op: SC1_OR (143)
    if (_36TRANSLATE_16061 != 0) {
        _14273 = 1;
        goto L1; // [15] 25
    }
    // SubProg AppendSourceLine pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 21 op: SC2_OR (144)
    _14273 = (_36OpTrace_16505 != 0);
    // SubProg AppendSourceLine pc: 24 op: NOP1 (159)
L1: // addr: 25 pc: 24 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 25 op: SC1_OR (143)
    if (_14273 != 0) {
        _14274 = 1;
        goto L2; // [25] 35
    }
    // SubProg AppendSourceLine pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 31 op: SC2_OR (144)
    _14274 = (_36OpProfileStatement_16507 != 0);
    // SubProg AppendSourceLine pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 35 op: SC1_OR_IF (147)
    if (_14274 != 0) {
        goto L3; // [35] 46
    }
    // SubProg AppendSourceLine pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 41 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 42 op: IF (20)
    if (_36OpProfileTime_16508 == 0)
    {
        goto L4; // [42] 136
    }
    else{
    }
    // SubProg AppendSourceLine pc: 45 op: NOP1 (159)
L3: // addr: 46 pc: 45 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 46 op: STARTLINE (58)

    /** scanner.e:277			src = ThisLine*/
    // SubProg AppendSourceLine pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 50 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_src_25375);
    _src_25375 = _50ThisLine_48707;
    // SubProg AppendSourceLine pc: 53 op: STARTLINE (58)

    /** scanner.e:279			if OpTrace then*/
    // SubProg AppendSourceLine pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 57 op: IF (20)
    if (_36OpTrace_16505 == 0)
    {
        goto L5; // [57] 70
    }
    else{
    }
    // SubProg AppendSourceLine pc: 60 op: STARTLINE (58)

    /** scanner.e:280				options = SOP_TRACE*/
    // SubProg AppendSourceLine pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 64 op: ASSIGN (18)
    _options_25374 = 1;
    // SubProg AppendSourceLine pc: 67 op: INTEGER_CHECK (96)
    // SubProg AppendSourceLine pc: 69 op: NOP1 (159)
L5: // addr: 70 pc: 69 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 70 op: STARTLINE (58)

    /** scanner.e:282			if OpProfileTime then*/
    // SubProg AppendSourceLine pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 74 op: IF (20)
    if (_36OpProfileTime_16508 == 0)
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
         tu = (uintptr_t)_options_25374 | (uintptr_t)2;
         _options_25374 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 85 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25374)) {
        _1 = (object)(DBL_PTR(_options_25374)->dbl);
        DeRefDS(_options_25374);
        _options_25374 = _1;
    }
    // SubProg AppendSourceLine pc: 87 op: NOP1 (159)
L6: // addr: 88 pc: 87 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 88 op: STARTLINE (58)

    /** scanner.e:285			if OpProfileStatement then*/
    // SubProg AppendSourceLine pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 92 op: IF (20)
    if (_36OpProfileStatement_16507 == 0)
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
         tu = (uintptr_t)_options_25374 | (uintptr_t)4;
         _options_25374 = MAKE_UINT(tu);
    }
    // SubProg AppendSourceLine pc: 103 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_options_25374)) {
        _1 = (object)(DBL_PTR(_options_25374)->dbl);
        DeRefDS(_options_25374);
        _options_25374 = _1;
    }
    // SubProg AppendSourceLine pc: 105 op: NOP1 (159)
L7: // addr: 106 pc: 105 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 106 op: STARTLINE (58)

    /** scanner.e:288			if OpProfileStatement or OpProfileTime then*/
    // SubProg AppendSourceLine pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 110 op: SC1_OR_IF (147)
    if (_36OpProfileStatement_16507 != 0) {
        goto L8; // [110] 121
    }
    // SubProg AppendSourceLine pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 116 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 117 op: IF (20)
    if (_36OpProfileTime_16508 == 0)
    {
        goto L9; // [117] 135
    }
    else{
    }
    // SubProg AppendSourceLine pc: 120 op: NOP1 (159)
L8: // addr: 121 pc: 120 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 121 op: STARTLINE (58)

    /** scanner.e:289				src = {0,0,0,0} & src*/
    // SubProg AppendSourceLine pc: 123 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _14279 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 130 op: CONCAT (15)
    if (IS_SEQUENCE(_14279) && IS_ATOM(_src_25375)) {
        Ref(_src_25375);
        Append(&_src_25375, _14279, _src_25375);
    }
    else if (IS_ATOM(_14279) && IS_SEQUENCE(_src_25375)) {
    }
    else {
        Concat((object_ptr)&_src_25375, _14279, _src_25375);
        DeRefDS(_14279);
        _14279 = NOVALUE;
    }
    DeRef(_14279);
    _14279 = NOVALUE;
    // SubProg AppendSourceLine pc: 134 op: NOP1 (159)
L9: // addr: 135 pc: 134 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 135 op: NOP1 (159)
L4: // addr: 136 pc: 135 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 136 op: STARTLINE (58)

    /** scanner.e:293		if length(slist) then*/
    // SubProg AppendSourceLine pc: 138 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 140 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14281 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14281 = 1;
    }
    // SubProg AppendSourceLine pc: 143 op: IF (20)
    if (_14281 == 0)
    {
        _14281 = NOVALUE;
        goto LA; // [143] 345
    }
    else{
        _14281 = NOVALUE;
    }
    // SubProg AppendSourceLine pc: 146 op: STARTLINE (58)

    /** scanner.e:294			old = slist[$-1]*/
    // SubProg AppendSourceLine pc: 148 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 150 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14282 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14282 = 1;
    }
    // SubProg AppendSourceLine pc: 153 op: MINUS (10)
    _14283 = _14282 - 1;
    _14282 = NOVALUE;
    // SubProg AppendSourceLine pc: 157 op: RHS_SUBS_CHECK (92)
    DeRef(_old_25373);
    _2 = (object)SEQ_PTR(_36slist_16526);
    _old_25373 = (object)*(((s1_ptr)_2)->base + _14283);
    Ref(_old_25373);
    // SubProg AppendSourceLine pc: 161 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 163 op: STARTLINE (58)

    /** scanner.e:296			if equal(src, old[SRC]) and*/
    // SubProg AppendSourceLine pc: 165 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 167 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25373);
    _14285 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg AppendSourceLine pc: 171 op: EQUAL (153)
    if (_src_25375 == _14285)
    _14286 = 1;
    else if (IS_ATOM_INT(_src_25375) && IS_ATOM_INT(_14285))
    _14286 = 0;
    else
    _14286 = (compare(_src_25375, _14285) == 0);
    _14285 = NOVALUE;
    // SubProg AppendSourceLine pc: 175 op: SC1_AND (141)
    if (_14286 == 0) {
        _14287 = 0;
        goto LB; // [175] 195
    }
    // SubProg AppendSourceLine pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 181 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 183 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25373);
    _14288 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg AppendSourceLine pc: 187 op: EQUALS (3)
    if (IS_ATOM_INT(_14288)) {
        _14289 = (_36current_file_no_16436 == _14288);
    }
    else {
        _14289 = binary_op(EQUALS, _36current_file_no_16436, _14288);
    }
    _14288 = NOVALUE;
    // SubProg AppendSourceLine pc: 191 op: SC2_AND (142)
    if (IS_ATOM_INT(_14289))
    _14287 = (_14289 != 0);
    else
    _14287 = DBL_PTR(_14289)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 194 op: NOP1 (159)
LB: // addr: 195 pc: 194 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 195 op: SC1_AND (141)
    if (_14287 == 0) {
        _14290 = 0;
        goto LC; // [195] 232
    }
    // SubProg AppendSourceLine pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 203 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25373);
    _14291 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg AppendSourceLine pc: 207 op: PLUS1 (93)
    if (IS_ATOM_INT(_14291)) {
        _14292 = _14291 + 1;
        if (_14292 > MAXINT){
            _14292 = NewDouble((eudouble)_14292);
        }
    }
    else
    _14292 = binary_op(PLUS, 1, _14291);
    _14291 = NOVALUE;
    // SubProg AppendSourceLine pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 213 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14293 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14293 = 1;
    }
    // SubProg AppendSourceLine pc: 216 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36slist_16526);
    _14294 = (object)*(((s1_ptr)_2)->base + _14293);
    // SubProg AppendSourceLine pc: 220 op: PLUS (11)
    if (IS_ATOM_INT(_14292) && IS_ATOM_INT(_14294)) {
        _14295 = _14292 + _14294;
        if ((object)((uintptr_t)_14295 + (uintptr_t)HIGH_BITS) >= 0){
            _14295 = NewDouble((eudouble)_14295);
        }
    }
    else {
        _14295 = binary_op(PLUS, _14292, _14294);
    }
    DeRef(_14292);
    _14292 = NOVALUE;
    _14294 = NOVALUE;
    // SubProg AppendSourceLine pc: 224 op: EQUALS (3)
    if (IS_ATOM_INT(_14295)) {
        _14296 = (_36line_number_16437 == _14295);
    }
    else {
        _14296 = binary_op(EQUALS, _36line_number_16437, _14295);
    }
    DeRef(_14295);
    _14295 = NOVALUE;
    // SubProg AppendSourceLine pc: 228 op: SC2_AND (142)
    if (IS_ATOM_INT(_14296))
    _14290 = (_14296 != 0);
    else
    _14290 = DBL_PTR(_14296)->dbl != 0.0;
    // SubProg AppendSourceLine pc: 231 op: NOP1 (159)
LC: // addr: 232 pc: 231 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 232 op: SC1_AND_IF (146)
    if (_14290 == 0) {
        goto LD; // [232] 272
    }
    // SubProg AppendSourceLine pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_25373);
    _14298 = (object)*(((s1_ptr)_2)->base + 4);
    // SubProg AppendSourceLine pc: 242 op: EQUALS (3)
    if (IS_ATOM_INT(_14298)) {
        _14299 = (_options_25374 == _14298);
    }
    else {
        _14299 = binary_op(EQUALS, _options_25374, _14298);
    }
    _14298 = NOVALUE;
    // SubProg AppendSourceLine pc: 246 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 247 op: IF (20)
    if (_14299 == 0) {
        DeRef(_14299);
        _14299 = NOVALUE;
        goto LD; // [247] 272
    }
    else {
        if (!IS_ATOM_INT(_14299) && DBL_PTR(_14299)->dbl == 0.0){
            DeRef(_14299);
            _14299 = NOVALUE;
            goto LD; // [247] 272
        }
        DeRef(_14299);
        _14299 = NOVALUE;
    }
    DeRef(_14299);
    _14299 = NOVALUE;
    // SubProg AppendSourceLine pc: 250 op: STARTLINE (58)

    /** scanner.e:302				slist[$] += 1*/
    // SubProg AppendSourceLine pc: 252 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 254 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14300 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14300 = 1;
    }
    // SubProg AppendSourceLine pc: 257 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_36slist_16526);
    _14301 = (object)*(((s1_ptr)_2)->base + _14300);
    // SubProg AppendSourceLine pc: 261 op: PLUS1 (93)
    if (IS_ATOM_INT(_14301)) {
        _14302 = _14301 + 1;
        if (_14302 > MAXINT){
            _14302 = NewDouble((eudouble)_14302);
        }
    }
    else
    _14302 = binary_op(PLUS, 1, _14301);
    _14301 = NOVALUE;
    // SubProg AppendSourceLine pc: 265 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_36slist_16526);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36slist_16526 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14300);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14302;
    if( _1 != _14302 ){
        DeRef(_1);
    }
    _14302 = NOVALUE;
    // SubProg AppendSourceLine pc: 269 op: ELSE (23)
    goto LE; // [269] 371
    // SubProg AppendSourceLine pc: 271 op: NOP1 (159)
LD: // addr: 272 pc: 271 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 272 op: STARTLINE (58)

    /** scanner.e:304				src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 274 op: PROC (27)
    Ref(_src_25375);
    _0 = _src_25375;
    _src_25375 = _62pack_source(_src_25375);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 278 op: STARTLINE (58)

    /** scanner.e:305				new = {src, line_number, current_file_no, options}*/
    // SubProg AppendSourceLine pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 284 op: RIGHT_BRACE_N (31)
    _0 = _new_25372;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25375);
    ((intptr_t*)_2)[1] = _src_25375;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    ((intptr_t*)_2)[3] = _36current_file_no_16436;
    ((intptr_t*)_2)[4] = _options_25374;
    _new_25372 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 291 op: STARTLINE (58)

    /** scanner.e:306				if slist[$] = 0 then*/
    // SubProg AppendSourceLine pc: 293 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 295 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14305 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14305 = 1;
    }
    // SubProg AppendSourceLine pc: 298 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36slist_16526);
    _14306 = (object)*(((s1_ptr)_2)->base + _14305);
    // SubProg AppendSourceLine pc: 302 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14306, 0)){
        _14306 = NOVALUE;
        goto LF; // [302] 320
    }
    _14306 = NOVALUE;
    // SubProg AppendSourceLine pc: 306 op: STARTLINE (58)

    /** scanner.e:307					slist[$] = new*/
    // SubProg AppendSourceLine pc: 308 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 310 op: LENGTH (42)
    if (IS_SEQUENCE(_36slist_16526)){
            _14308 = SEQ_PTR(_36slist_16526)->length;
    }
    else {
        _14308 = 1;
    }
    // SubProg AppendSourceLine pc: 313 op: ASSIGN_SUBS (16)
    RefDS(_new_25372);
    _2 = (object)SEQ_PTR(_36slist_16526);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36slist_16526 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14308);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_25372;
    DeRef(_1);
    // SubProg AppendSourceLine pc: 317 op: ELSE (23)
    goto L10; // [317] 331
    // SubProg AppendSourceLine pc: 319 op: NOP1 (159)
LF: // addr: 320 pc: 319 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 320 op: STARTLINE (58)

    /** scanner.e:309					slist = append(slist, new)*/
    // SubProg AppendSourceLine pc: 322 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 324 op: APPEND (35)
    RefDS(_new_25372);
    Append(&_36slist_16526, _36slist_16526, _new_25372);
    // SubProg AppendSourceLine pc: 328 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 330 op: NOP1 (159)
L10: // addr: 331 pc: 330 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 331 op: STARTLINE (58)

    /** scanner.e:311				slist = append(slist, 0)*/
    // SubProg AppendSourceLine pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 335 op: APPEND (35)
    Append(&_36slist_16526, _36slist_16526, 0);
    // SubProg AppendSourceLine pc: 339 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 341 op: NOP1 (159)
    // SubProg AppendSourceLine pc: 342 op: ELSE (23)
    goto LE; // [342] 371
    // SubProg AppendSourceLine pc: 344 op: NOP1 (159)
LA: // addr: 345 pc: 344 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 345 op: STARTLINE (58)

    /** scanner.e:314			src = pack_source(src)*/
    // SubProg AppendSourceLine pc: 347 op: PROC (27)
    Ref(_src_25375);
    _0 = _src_25375;
    _src_25375 = _62pack_source(_src_25375);
    DeRef(_0);
    // SubProg AppendSourceLine pc: 351 op: STARTLINE (58)

    /** scanner.e:315			slist = {{src, line_number, current_file_no, options}, 0}*/
    // SubProg AppendSourceLine pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg AppendSourceLine pc: 357 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25375);
    ((intptr_t*)_2)[1] = _src_25375;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    ((intptr_t*)_2)[3] = _36current_file_no_16436;
    ((intptr_t*)_2)[4] = _options_25374;
    _14312 = MAKE_SEQ(_1);
    // SubProg AppendSourceLine pc: 364 op: RIGHT_BRACE_2 (85)
    DeRef(_36slist_16526);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14312;
    ((intptr_t *)_2)[2] = 0;
    _36slist_16526 = MAKE_SEQ(_1);
    _14312 = NOVALUE;
    // SubProg AppendSourceLine pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg AppendSourceLine pc: 370 op: NOP1 (159)
LE: // addr: 371 pc: 370 sub: 25370 op: 159
    // SubProg AppendSourceLine pc: 371 op: STARTLINE (58)

    /** scanner.e:317	end procedure*/
    // SubProg AppendSourceLine pc: 373 op: RETURNP (29)

// Exiting block BLOCK: AppendSourceLine

// block var new_25372
    DeRef(_new_25372);

// block var old_25373
    DeRef(_old_25373);

// block var options_25374

// block var src_25375
    DeRef(_src_25375);
    DeRef(_14283);
    _14283 = NOVALUE;
    DeRef(_14289);
    _14289 = NOVALUE;
    DeRef(_14296);
    _14296 = NOVALUE;
    return;
    // SubProg AppendSourceLine pc: 376 op: BADRETURNF (43)
    ;
}


object _62s_expand(object _slist_25464)
{
    object _new_slist_25465 = NOVALUE;
// skipping _14327  name type: 0
    object _14326 = NOVALUE; // 25485 14326
    object _14325 = NOVALUE; // 25484 14325
    object _14324 = NOVALUE; // 25483 14324
    object _14323 = NOVALUE; // 25482 14323
// skipping _14322  name type: 0
    object _14321 = NOVALUE; // 25479 14321
    object _14320 = NOVALUE; // 25478 14320
    object _14319 = NOVALUE; // 25477 14319
// skipping _14318  name type: 0
    object _14317 = NOVALUE; // 25472 14317
    object _14316 = NOVALUE; // 25471 14316
    object _14315 = NOVALUE; // 25470 14315
    object _14314 = NOVALUE; // 25468 14314
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg s_expand pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 3 op: STARTLINE (58)

    /** scanner.e:323		new_slist = {}*/
    // SubProg s_expand pc: 5 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_new_slist_25465);
    _new_slist_25465 = _5;
    // SubProg s_expand pc: 8 op: SEQUENCE_CHECK (97)
    // SubProg s_expand pc: 10 op: STARTLINE (58)

    /** scanner.e:325		for i = 1 to length(slist) do*/
    // SubProg s_expand pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_slist_25464)){
            _14314 = SEQ_PTR(_slist_25464)->length;
    }
    else {
        _14314 = 1;
    }
    // SubProg s_expand pc: 15 op: FOR_I (125)
    {
        object _i_25467;
        _i_25467 = 1;
L1: // addr: 22 pc: 15 sub: 25462 op: 125
        if (_i_25467 > _14314){
            goto L2; // [15] 114
        }
        // SubProg s_expand pc: 22 op: STARTLINE (58)

        /** scanner.e:326			if sequence(slist[i]) then*/
        // SubProg s_expand pc: 24 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25464);
        _14315 = (object)*(((s1_ptr)_2)->base + _i_25467);
        // SubProg s_expand pc: 28 op: IS_A_SEQUENCE (68)
        _14316 = IS_SEQUENCE(_14315);
        _14315 = NOVALUE;
        // SubProg s_expand pc: 31 op: IF (20)
        if (_14316 == 0)
        {
            _14316 = NOVALUE;
            goto L3; // [31] 47
        }
        else{
            _14316 = NOVALUE;
        }
        // SubProg s_expand pc: 34 op: STARTLINE (58)

        /** scanner.e:327				new_slist = append(new_slist, slist[i])*/
        // SubProg s_expand pc: 36 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25464);
        _14317 = (object)*(((s1_ptr)_2)->base + _i_25467);
        // SubProg s_expand pc: 40 op: APPEND (35)
        Ref(_14317);
        Append(&_new_slist_25465, _new_slist_25465, _14317);
        _14317 = NOVALUE;
        // SubProg s_expand pc: 44 op: ELSE (23)
        goto L4; // [44] 107
        // SubProg s_expand pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 25462 op: 159
        // SubProg s_expand pc: 47 op: STARTLINE (58)

        /** scanner.e:329				for j = 1 to slist[i] do*/
        // SubProg s_expand pc: 49 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slist_25464);
        _14319 = (object)*(((s1_ptr)_2)->base + _i_25467);
        // SubProg s_expand pc: 53 op: FOR (21)
        {
            object _j_25476;
            _j_25476 = 1;
L5: // addr: 60 pc: 53 sub: 25462 op: 21
            if (binary_op_a(GREATER, _j_25476, _14319)){
                goto L6; // [53] 106
            }
            // SubProg s_expand pc: 60 op: STARTLINE (58)

            /** scanner.e:330					slist[i-1][LINE] += 1*/
            // SubProg s_expand pc: 62 op: MINUS (10)
            _14320 = _i_25467 - 1;
            // SubProg s_expand pc: 66 op: LHS_SUBS1 (161)
            _2 = (object)SEQ_PTR(_slist_25464);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _slist_25464 = MAKE_SEQ(_2);
            }
            _3 = (object)(_14320 + ((s1_ptr)_2)->base);
            // SubProg s_expand pc: 71 op: GLOBAL_INIT_CHECK (109)
            // SubProg s_expand pc: 73 op: PASSIGN_OP_SUBS (164)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            _14323 = (object)*(((s1_ptr)_2)->base + 2);
            _14321 = NOVALUE;
            // SubProg s_expand pc: 77 op: PLUS1 (93)
            if (IS_ATOM_INT(_14323)) {
                _14324 = _14323 + 1;
                if (_14324 > MAXINT){
                    _14324 = NewDouble((eudouble)_14324);
                }
            }
            else
            _14324 = binary_op(PLUS, 1, _14323);
            _14323 = NOVALUE;
            // SubProg s_expand pc: 81 op: PASSIGN_SUBS (162)
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 2);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _14324;
            if( _1 != _14324 ){
                DeRef(_1);
            }
            _14324 = NOVALUE;
            _14321 = NOVALUE;
            // SubProg s_expand pc: 85 op: STARTLINE (58)

            /** scanner.e:331					new_slist = append(new_slist, slist[i-1])*/
            // SubProg s_expand pc: 87 op: MINUS (10)
            _14325 = _i_25467 - 1;
            // SubProg s_expand pc: 91 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_slist_25464);
            _14326 = (object)*(((s1_ptr)_2)->base + _14325);
            // SubProg s_expand pc: 95 op: APPEND (35)
            Ref(_14326);
            Append(&_new_slist_25465, _new_slist_25465, _14326);
            _14326 = NOVALUE;
            // SubProg s_expand pc: 99 op: STARTLINE (58)

            /** scanner.e:332				end for*/
            // SubProg s_expand pc: 101 op: ENDFOR_INT_UP1 (54)
            _0 = _j_25476;
            if (IS_ATOM_INT(_j_25476)) {
                _j_25476 = _j_25476 + 1;
                if ((object)((uintptr_t)_j_25476 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_25476 = NewDouble((eudouble)_j_25476);
                }
            }
            else {
                _j_25476 = binary_op_a(PLUS, _j_25476, 1);
            }
            DeRef(_0);
            goto L5; // [101] 60
L6: // addr: 106 pc: 101 sub: 25462 op: 54
            ;
            DeRef(_j_25476);
        }
        // SubProg s_expand pc: 106 op: NOP1 (159)
L4: // addr: 107 pc: 106 sub: 25462 op: 159
        // SubProg s_expand pc: 107 op: STARTLINE (58)

        /** scanner.e:334		end for*/
        // SubProg s_expand pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_25467 = _i_25467 + 1;
        goto L1; // [109] 22
L2: // addr: 114 pc: 109 sub: 25462 op: 54
        ;
    }
    // SubProg s_expand pc: 114 op: STARTLINE (58)

    /** scanner.e:335		return new_slist*/
    // SubProg s_expand pc: 116 op: RETURNF (28)

// Exiting block BLOCK: s_expand

// block var slist_25464
    DeRefDS(_slist_25464);
    DeRef(_14320);
    _14320 = NOVALUE;
    _14319 = NOVALUE;
    DeRef(_14325);
    _14325 = NOVALUE;
    return _new_slist_25465;
    // SubProg s_expand pc: 120 op: BADRETURNF (43)
    ;
}


void _62set_dont_read(object _read_25491)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg set_dont_read pc: 1 op: INTEGER_CHECK (96)
    // SubProg set_dont_read pc: 3 op: STARTLINE (58)

    /** scanner.e:357		dont_read = read*/
    // SubProg set_dont_read pc: 5 op: ASSIGN_I (113)
    _62dont_read_25488 = _read_25491;
    // SubProg set_dont_read pc: 8 op: STARTLINE (58)

    /** scanner.e:358	end procedure*/
    // SubProg set_dont_read pc: 10 op: RETURNP (29)

// Exiting block BLOCK: set_dont_read

// block var read_25491
    return;
    // SubProg set_dont_read pc: 13 op: BADRETURNF (43)
    ;
}


void _62read_line()
{
    object _n_25497 = NOVALUE;
    object _14356 = NOVALUE; // 25565 14356
    object _14355 = NOVALUE; // 25563 14355
    object _14354 = NOVALUE; // 25562 14354
    object _14353 = NOVALUE; // 25559 14353
    object _14352 = NOVALUE; // 25558 14352
// skipping _14351  name type: 0
    object _14350 = NOVALUE; // 25552 14350
    object _14349 = NOVALUE; // 25549 14349
// skipping _14348  name type: 0
    object _14347 = NOVALUE; // 25546 14347
    object _14346 = NOVALUE; // 25542 14346
    object _14345 = NOVALUE; // 25539 14345
    object _14344 = NOVALUE; // 25538 14344
// skipping _14343  name type: 0
// skipping _14342  name type: 0
// skipping _14341  name type: 0
// skipping _14340  name type: 0
// skipping _14337  name type: 0
    object _14336 = NOVALUE; // 25519 14336
// skipping _14335  name type: 0
    object _14334 = NOVALUE; // 25514 14334
    object _14333 = NOVALUE; // 25511 14333
    object _14332 = NOVALUE; // 25509 14332
    object _14331 = NOVALUE; // 25506 14331
// skipping _14330  name type: 0
// skipping _14329  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg read_line pc: 1 op: STARTLINE (58)

    /** scanner.e:367		line_number += 1*/
    // SubProg read_line pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 5 op: PLUS (11)
    _36line_number_16437 = _36line_number_16437 + 1;
    // SubProg read_line pc: 11 op: STARTLINE (58)

    /** scanner.e:368		gline_number += 1*/
    // SubProg read_line pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 15 op: PLUS (11)
    _36gline_number_16441 = _36gline_number_16441 + 1;
    // SubProg read_line pc: 21 op: STARTLINE (58)

    /** scanner.e:370		if dont_read then*/
    // SubProg read_line pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 25 op: IF (20)
    if (_62dont_read_25488 == 0)
    {
        goto L1; // [25] 36
    }
    else{
    }
    // SubProg read_line pc: 28 op: STARTLINE (58)

    /** scanner.e:371			ThisLine = -1*/
    // SubProg read_line pc: 30 op: ASSIGN (18)
    DeRef(_50ThisLine_48707);
    _50ThisLine_48707 = -1;
    // SubProg read_line pc: 33 op: ELSE (23)
    goto L2; // [33] 216
    // SubProg read_line pc: 35 op: NOP1 (159)
L1: // addr: 36 pc: 35 sub: 25495 op: 159
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
    _14332 = (_36src_file_16557 == 5555);
    // SubProg read_line pc: 52 op: NOP1 (159)
    // SubProg read_line pc: 53 op: IF (20)
    if (_14332 == 0)
    {
        DeRef(_14332);
        _14332 = NOVALUE;
        goto L3; // [53] 144
    }
    else{
        DeRef(_14332);
        _14332 = NOVALUE;
    }
    // SubProg read_line pc: 56 op: STARTLINE (58)

    /** scanner.e:373			if repl_line_was_read and current_block = top_level_block then*/
    // SubProg read_line pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 60 op: SC1_AND_IF (146)
    if (_62repl_line_was_read_25492 == 0) {
        goto L4; // [60] 118
    }
    // SubProg read_line pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 68 op: EQUALS (3)
    _14334 = (_65current_block_24748 == _65top_level_block_24749);
    // SubProg read_line pc: 72 op: NOP1 (159)
    // SubProg read_line pc: 73 op: IF (20)
    if (_14334 == 0)
    {
        DeRef(_14334);
        _14334 = NOVALUE;
        goto L4; // [73] 118
    }
    else{
        DeRef(_14334);
        _14334 = NOVALUE;
    }
    // SubProg read_line pc: 76 op: STARTLINE (58)

    /** scanner.e:374				if repl_line_was_read > 1 then*/
    // SubProg read_line pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 80 op: GREATER_IFW_I (124)
    if (_62repl_line_was_read_25492 <= 1)
    goto L5; // [80] 110
    // SubProg read_line pc: 84 op: STARTLINE (58)

    /** scanner.e:375					if not match("end", ThisLine) then*/
    // SubProg read_line pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 88 op: MATCH_FROM (177)
    _14336 = e_match_from(_13109, _50ThisLine_48707, 1);
    // SubProg read_line pc: 93 op: NOT_IFW (108)
    if (_14336 != 0)
    goto L6; // [93] 109
    _14336 = NOVALUE;
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
L6: // addr: 109 pc: 108 sub: 25495 op: 159
    // SubProg read_line pc: 109 op: NOP1 (159)
L5: // addr: 110 pc: 109 sub: 25495 op: 159
    // SubProg read_line pc: 110 op: STARTLINE (58)

    /** scanner.e:379				ThisLine = -1*/
    // SubProg read_line pc: 112 op: ASSIGN (18)
    DeRef(_50ThisLine_48707);
    _50ThisLine_48707 = -1;
    // SubProg read_line pc: 115 op: ELSE (23)
    goto L2; // [115] 216
    // SubProg read_line pc: 117 op: NOP1 (159)
L4: // addr: 118 pc: 117 sub: 25495 op: 159
    // SubProg read_line pc: 118 op: STARTLINE (58)

    /** scanner.e:381				label "lol"*/
    // SubProg read_line pc: 120 op: GLABEL (189)
G7:
    // SubProg read_line pc: 122 op: STARTLINE (58)

    /** scanner.e:382				puts(1, "Enter line:\n")*/
    // SubProg read_line pc: 124 op: PUTS (44)
    EPuts(1, _14339); // DJP 
    // SubProg read_line pc: 127 op: STARTLINE (58)

    /** scanner.e:383				repl_line_was_read += 1*/
    // SubProg read_line pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 131 op: PLUS1_I (117)
    _62repl_line_was_read_25492 = _62repl_line_was_read_25492 + 1;
    // SubProg read_line pc: 135 op: STARTLINE (58)

    /** scanner.e:384				ThisLine = gets(0)*/
    // SubProg read_line pc: 137 op: GETS (17)
    DeRef(_50ThisLine_48707);
    _50ThisLine_48707 = EGets(0);
    // SubProg read_line pc: 140 op: NOP1 (159)
    // SubProg read_line pc: 141 op: ELSE (23)
    goto L2; // [141] 216
    // SubProg read_line pc: 143 op: NOP1 (159)
L3: // addr: 144 pc: 143 sub: 25495 op: 159
    // SubProg read_line pc: 144 op: STARTLINE (58)

    /** scanner.e:386		elsif src_file < 0 then*/
    // SubProg read_line pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 148 op: LESS_IFW (102)
    if (_36src_file_16557 >= 0)
    goto L8; // [148] 160
    // SubProg read_line pc: 152 op: STARTLINE (58)

    /** scanner.e:387			ThisLine = -1*/
    // SubProg read_line pc: 154 op: ASSIGN (18)
    DeRef(_50ThisLine_48707);
    _50ThisLine_48707 = -1;
    // SubProg read_line pc: 157 op: ELSE (23)
    goto L2; // [157] 216
    // SubProg read_line pc: 159 op: NOP1 (159)
L8: // addr: 160 pc: 159 sub: 25495 op: 159
    // SubProg read_line pc: 160 op: STARTLINE (58)

    /** scanner.e:389			ThisLine = gets(src_file)*/
    // SubProg read_line pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 164 op: GETS (17)
    DeRef(_50ThisLine_48707);
    _50ThisLine_48707 = EGets(_36src_file_16557);
    // SubProg read_line pc: 167 op: STARTLINE (58)

    /** scanner.e:390			if sequence(ThisLine) and ends( {13,10}, ThisLine ) then*/
    // SubProg read_line pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 171 op: IS_A_SEQUENCE (68)
    _14344 = IS_SEQUENCE(_50ThisLine_48707);
    // SubProg read_line pc: 174 op: SC1_AND_IF (146)
    if (_14344 == 0) {
        goto L9; // [174] 215
    }
    // SubProg read_line pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 180 op: PROC (27)
    RefDS(_12127);
    Ref(_50ThisLine_48707);
    _14346 = _19ends(_12127, _50ThisLine_48707);
    // SubProg read_line pc: 185 op: NOP1 (159)
    // SubProg read_line pc: 186 op: IF (20)
    if (_14346 == 0) {
        DeRef(_14346);
        _14346 = NOVALUE;
        goto L9; // [186] 215
    }
    else {
        if (!IS_ATOM_INT(_14346) && DBL_PTR(_14346)->dbl == 0.0){
            DeRef(_14346);
            _14346 = NOVALUE;
            goto L9; // [186] 215
        }
        DeRef(_14346);
        _14346 = NOVALUE;
    }
    DeRef(_14346);
    _14346 = NOVALUE;
    // SubProg read_line pc: 189 op: STARTLINE (58)

    /** scanner.e:391				ThisLine = remove(ThisLine, length(ThisLine))*/
    // SubProg read_line pc: 191 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_50ThisLine_48707)){
            _14347 = SEQ_PTR(_50ThisLine_48707)->length;
    }
    else {
        _14347 = 1;
    }
    // SubProg read_line pc: 198 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_50ThisLine_48707);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14347)) ? _14347 : (object)(DBL_PTR(_14347)->dbl);
        int stop = (IS_ATOM_INT(_14347)) ? _14347 : (object)(DBL_PTR(_14347)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_50ThisLine_48707), start, &_50ThisLine_48707 );
            }
            else Tail(SEQ_PTR(_50ThisLine_48707), stop+1, &_50ThisLine_48707);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_50ThisLine_48707), start, &_50ThisLine_48707);
        }
        else {
            assign_slice_seq = &assign_space;
            _50ThisLine_48707 = Remove_elements(start, stop, (SEQ_PTR(_50ThisLine_48707)->ref == 1));
        }
    }
    _14347 = NOVALUE;
    _14347 = NOVALUE;
    // SubProg read_line pc: 203 op: STARTLINE (58)

    /** scanner.e:392				ThisLine[$] = 10*/
    // SubProg read_line pc: 205 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 207 op: LENGTH (42)
    if (IS_SEQUENCE(_50ThisLine_48707)){
            _14349 = SEQ_PTR(_50ThisLine_48707)->length;
    }
    else {
        _14349 = 1;
    }
    // SubProg read_line pc: 210 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_50ThisLine_48707);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _50ThisLine_48707 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14349);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
    // SubProg read_line pc: 214 op: NOP1 (159)
L9: // addr: 215 pc: 214 sub: 25495 op: 159
    // SubProg read_line pc: 215 op: NOP1 (159)
L2: // addr: 216 pc: 215 sub: 25495 op: 159
    // SubProg read_line pc: 216 op: STARTLINE (58)

    /** scanner.e:395		if atom(ThisLine) then*/
    // SubProg read_line pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 220 op: IS_AN_ATOM (67)
    _14350 = IS_ATOM(_50ThisLine_48707);
    // SubProg read_line pc: 223 op: IF (20)
    if (_14350 == 0)
    {
        _14350 = NOVALUE;
        goto LA; // [223] 286
    }
    else{
        _14350 = NOVALUE;
    }
    // SubProg read_line pc: 226 op: STARTLINE (58)

    /** scanner.e:396			ThisLine = {END_OF_FILE_CHAR}*/
    // SubProg read_line pc: 228 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 230 op: RIGHT_BRACE_N (31)
    _0 = _50ThisLine_48707;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 26;
    _50ThisLine_48707 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg read_line pc: 234 op: STARTLINE (58)

    /** scanner.e:397			if src_file >= 0 and (src_file != repl_file or not repl) then*/
    // SubProg read_line pc: 236 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 238 op: GREATEREQ (2)
    _14352 = (_36src_file_16557 >= 0);
    // SubProg read_line pc: 242 op: SC1_AND_IF (146)
    if (_14352 == 0) {
        goto LB; // [242] 278
    }
    // SubProg read_line pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 250 op: NOTEQ (4)
    _14354 = (_36src_file_16557 != 5555);
    // SubProg read_line pc: 254 op: SC1_OR (143)
    if (_14354 != 0) {
        DeRef(_14355);
        _14355 = 1;
        goto LC; // [254] 267
    }
    // SubProg read_line pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 260 op: NOT (7)
    _14356 = (0 == 0);
    // SubProg read_line pc: 263 op: SC2_OR (144)
    _14355 = (_14356 != 0);
    // SubProg read_line pc: 266 op: NOP1 (159)
LC: // addr: 267 pc: 266 sub: 25495 op: 159
    // SubProg read_line pc: 267 op: NOP1 (159)
    // SubProg read_line pc: 268 op: IF (20)
    if (_14355 == 0)
    {
        _14355 = NOVALUE;
        goto LB; // [268] 278
    }
    else{
        _14355 = NOVALUE;
    }
    // SubProg read_line pc: 271 op: STARTLINE (58)

    /** scanner.e:398				close(src_file)*/
    // SubProg read_line pc: 273 op: GLOBAL_INIT_CHECK (109)
    // SubProg read_line pc: 275 op: CLOSE (86)
    EClose(_36src_file_16557);
    // SubProg read_line pc: 277 op: NOP1 (159)
LB: // addr: 278 pc: 277 sub: 25495 op: 159
    // SubProg read_line pc: 278 op: STARTLINE (58)

    /** scanner.e:400			src_file = -1*/
    // SubProg read_line pc: 280 op: ASSIGN (18)
    _36src_file_16557 = -1;
    // SubProg read_line pc: 283 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 285 op: NOP1 (159)
LA: // addr: 286 pc: 285 sub: 25495 op: 159
    // SubProg read_line pc: 286 op: STARTLINE (58)

    /** scanner.e:403		bp = 1*/
    // SubProg read_line pc: 288 op: ASSIGN (18)
    _50bp_48711 = 1;
    // SubProg read_line pc: 291 op: INTEGER_CHECK (96)
    // SubProg read_line pc: 293 op: STARTLINE (58)

    /** scanner.e:411		AppendSourceLine()*/
    // SubProg read_line pc: 295 op: PROC (27)
    _62AppendSourceLine();
    // SubProg read_line pc: 297 op: STARTLINE (58)

    /** scanner.e:412	end procedure*/
    // SubProg read_line pc: 299 op: RETURNP (29)

// Exiting block BLOCK: read_line
    DeRef(_14352);
    _14352 = NOVALUE;
    DeRef(_14356);
    _14356 = NOVALUE;
    DeRef(_14354);
    _14354 = NOVALUE;
    return;
    // SubProg read_line pc: 302 op: BADRETURNF (43)
    ;
}


object _62getch()
{
    object _c_25571 = NOVALUE;
// skipping _14358  name type: 0
// skipping _14357  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg getch pc: 1 op: STARTLINE (58)

    /** scanner.e:417		c = ThisLine[bp]*/
    // SubProg getch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_50ThisLine_48707);
    _c_25571 = (object)*(((s1_ptr)_2)->base + _50bp_48711);
    if (!IS_ATOM_INT(_c_25571)){
        _c_25571 = (object)DBL_PTR(_c_25571)->dbl;
    }
    // SubProg getch pc: 13 op: STARTLINE (58)

    /** scanner.e:418		bp += 1*/
    // SubProg getch pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg getch pc: 17 op: PLUS (11)
    _50bp_48711 = _50bp_48711 + 1;
    // SubProg getch pc: 23 op: STARTLINE (58)

    /** scanner.e:419		return c*/
    // SubProg getch pc: 25 op: RETURNF (28)

// Exiting block BLOCK: getch
    return _c_25571;
    // SubProg getch pc: 29 op: BADRETURNF (43)
    ;
}


void _62ungetch()
{
// skipping _14359  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ungetch pc: 1 op: STARTLINE (58)

    /** scanner.e:424		bp -= 1*/
    // SubProg ungetch pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg ungetch pc: 5 op: MINUS (10)
    _50bp_48711 = _50bp_48711 - 1;
    // SubProg ungetch pc: 11 op: STARTLINE (58)

    /** scanner.e:425	end procedure*/
    // SubProg ungetch pc: 13 op: RETURNP (29)

// Exiting block BLOCK: ungetch
    return;
    // SubProg ungetch pc: 16 op: BADRETURNF (43)
    ;
}


object _62get_file_path(object _s_25583)
{
    object _14365 = NOVALUE; // 25594 14365
    object _14363 = NOVALUE; // 25591 14363
    object _14362 = NOVALUE; // 25590 14362
    object _14361 = NOVALUE; // 25588 14361
    object _14360 = NOVALUE; // 25586 14360
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_file_path pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg get_file_path pc: 3 op: STARTLINE (58)

    /** scanner.e:429			for t=length(s) to 1 by -1 do*/
    // SubProg get_file_path pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_25583)){
            _14360 = SEQ_PTR(_s_25583)->length;
    }
    else {
        _14360 = 1;
    }
    // SubProg get_file_path pc: 8 op: FOR_I (125)
    {
        object _t_25585;
        _t_25585 = _14360;
L1: // addr: 15 pc: 8 sub: 25581 op: 125
        if (_t_25585 < 1){
            goto L2; // [8] 50
        }
        // SubProg get_file_path pc: 15 op: STARTLINE (58)

        /** scanner.e:430					if find(s[t],SLASH_CHARS) then*/
        // SubProg get_file_path pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_25583);
        _14361 = (object)*(((s1_ptr)_2)->base + _t_25585);
        // SubProg get_file_path pc: 21 op: GLOBAL_INIT_CHECK (109)
        // SubProg get_file_path pc: 23 op: FIND_FROM (176)
        _14362 = find_from(_14361, _41SLASH_CHARS_21230, 1);
        _14361 = NOVALUE;
        // SubProg get_file_path pc: 28 op: IF (20)
        if (_14362 == 0)
        {
            _14362 = NOVALUE;
            goto L3; // [28] 43
        }
        else{
            _14362 = NOVALUE;
        }
        // SubProg get_file_path pc: 31 op: STARTLINE (58)

        /** scanner.e:431							return s[1..t]*/
        // SubProg get_file_path pc: 33 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_14363;
        RHS_Slice(_s_25583, 1, _t_25585);
        // SubProg get_file_path pc: 38 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25583
        DeRefDS(_s_25583);
        return _14363;
        // SubProg get_file_path pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 25581 op: 159
        // SubProg get_file_path pc: 43 op: STARTLINE (58)

        /** scanner.e:433			end for*/
        // SubProg get_file_path pc: 45 op: ENDFOR_GENERAL (39)
        _t_25585 = _t_25585 + -1;
        goto L1; // [45] 15
L2: // addr: 50 pc: 45 sub: 25581 op: 39
        ;
    }
    // SubProg get_file_path pc: 50 op: STARTLINE (58)

    /** scanner.e:435			return "." & SLASH*/
    // SubProg get_file_path pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_file_path pc: 54 op: CONCAT (15)
    Append(&_14365, _14364, 47);
    // SubProg get_file_path pc: 58 op: RETURNF (28)

// Exiting block BLOCK: get_file_path

// block var s_25583
    DeRefDS(_s_25583);
    DeRef(_14363);
    _14363 = NOVALUE;
    return _14365;
    // SubProg get_file_path pc: 62 op: BADRETURNF (43)
    ;
}


object _62find_file(object _fname_25597)
{
    object _try_25598 = NOVALUE;
    object _full_path_25599 = NOVALUE;
    object _errbuff_25600 = NOVALUE;
    object _currdir_25601 = NOVALUE;
    object _conf_path_25602 = NOVALUE;
    object _scan_result_25603 = NOVALUE;
    object _inc_path_25604 = NOVALUE;
    object _mainpath_25623 = NOVALUE;
    object _31715 = NOVALUE; // 63923 31715
    object _31714 = NOVALUE; // 63922 31714
    object _14462 = NOVALUE; // 25773 14462
// skipping _14461  name type: 0
    object _14460 = NOVALUE; // 25769 14460
    object _14459 = NOVALUE; // 25768 14459
    object _14458 = NOVALUE; // 25767 14458
    object _14456 = NOVALUE; // 25765 14456
// skipping _14455  name type: 0
    object _14454 = NOVALUE; // 25761 14454
// skipping _14453  name type: 0
    object _14452 = NOVALUE; // 25758 14452
    object _14451 = NOVALUE; // 25757 14451
// skipping _14450  name type: 0
    object _14449 = NOVALUE; // 25753 14449
    object _14448 = NOVALUE; // 25752 14448
// skipping _14447  name type: 0
// skipping _14446  name type: 0
    object _14445 = NOVALUE; // 25747 14445
// skipping _14444  name type: 0
// skipping _14443  name type: 0
    object _14442 = NOVALUE; // 25742 14442
    object _14441 = NOVALUE; // 25741 14441
    object _14440 = NOVALUE; // 25740 14440
    object _14439 = NOVALUE; // 25739 14439
    object _14438 = NOVALUE; // 25737 14438
    object _14437 = NOVALUE; // 25736 14437
    object _14436 = NOVALUE; // 25735 14436
    object _14435 = NOVALUE; // 25733 14435
// skipping _14434  name type: 0
// skipping _14433  name type: 0
    object _14432 = NOVALUE; // 25726 14432
    object _14431 = NOVALUE; // 25724 14431
// skipping _14430  name type: 0
// skipping _14429  name type: 0
// skipping _14428  name type: 0
    object _14427 = NOVALUE; // 25719 14427
// skipping _14426  name type: 0
// skipping _14425  name type: 0
    object _14424 = NOVALUE; // 25714 14424
    object _14423 = NOVALUE; // 25713 14423
    object _14422 = NOVALUE; // 25712 14422
    object _14421 = NOVALUE; // 25711 14421
    object _14420 = NOVALUE; // 25709 14420
    object _14419 = NOVALUE; // 25708 14419
    object _14418 = NOVALUE; // 25707 14418
    object _14417 = NOVALUE; // 25705 14417
// skipping _14416  name type: 0
// skipping _14415  name type: 0
    object _14414 = NOVALUE; // 25698 14414
// skipping _14413  name type: 0
// skipping _14412  name type: 0
// skipping _14411  name type: 0
    object _14410 = NOVALUE; // 25692 14410
// skipping _14409  name type: 0
    object _14408 = NOVALUE; // 25687 14408
    object _14407 = NOVALUE; // 25686 14407
    object _14406 = NOVALUE; // 25684 14406
    object _14405 = NOVALUE; // 25682 14405
    object _14404 = NOVALUE; // 25681 14404
// skipping _14403  name type: 0
// skipping _14402  name type: 0
    object _14401 = NOVALUE; // 25675 14401
    object _14400 = NOVALUE; // 25674 14400
    object _14399 = NOVALUE; // 25673 14399
    object _14398 = NOVALUE; // 25672 14398
    object _14397 = NOVALUE; // 25670 14397
    object _14396 = NOVALUE; // 25669 14396
// skipping _14395  name type: 0
    object _14394 = NOVALUE; // 25666 14394
    object _14393 = NOVALUE; // 25664 14393
    object _14392 = NOVALUE; // 25663 14392
    object _14391 = NOVALUE; // 25662 14391
    object _14390 = NOVALUE; // 25660 14390
// skipping _14389  name type: 0
    object _14388 = NOVALUE; // 25654 14388
    object _14387 = NOVALUE; // 25652 14387
// skipping _14386  name type: 0
    object _14384 = NOVALUE; // 25647 14384
// skipping _14383  name type: 0
    object _14381 = NOVALUE; // 25642 14381
// skipping _14380  name type: 0
    object _14379 = NOVALUE; // 25637 14379
// skipping _14378  name type: 0
// skipping _14377  name type: 0
    object _14376 = NOVALUE; // 25631 14376
// skipping _14375  name type: 0
    object _14374 = NOVALUE; // 25628 14374
    object _14373 = NOVALUE; // 25622 14373
// skipping _14372  name type: 0
// skipping _14371  name type: 0
    object _14370 = NOVALUE; // 25617 14370
    object _14369 = NOVALUE; // 25614 14369
// skipping _14368  name type: 0
    object _14367 = NOVALUE; // 25610 14367
    object _14366 = NOVALUE; // 25607 14366
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg find_file pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 3 op: STARTLINE (58)

    /** scanner.e:449		if absolute_path(fname) then*/
    // SubProg find_file pc: 5 op: PROC (27)
    RefDS(_fname_25597);
    _14366 = _20absolute_path(_fname_25597);
    // SubProg find_file pc: 9 op: IF (20)
    if (_14366 == 0) {
        DeRef(_14366);
        _14366 = NOVALUE;
        goto L1; // [9] 42
    }
    else {
        if (!IS_ATOM_INT(_14366) && DBL_PTR(_14366)->dbl == 0.0){
            DeRef(_14366);
            _14366 = NOVALUE;
            goto L1; // [9] 42
        }
        DeRef(_14366);
        _14366 = NOVALUE;
    }
    DeRef(_14366);
    _14366 = NOVALUE;
    // SubProg find_file pc: 12 op: STARTLINE (58)

    /** scanner.e:451			if not file_exists(fname) then*/
    // SubProg find_file pc: 14 op: PROC (27)
    RefDS(_fname_25597);
    _14367 = _20file_exists(_fname_25597);
    // SubProg find_file pc: 18 op: NOT_IFW (108)
    if (IS_ATOM_INT(_14367)) {
        if (_14367 != 0){
            DeRef(_14367);
            _14367 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    else {
        if (DBL_PTR(_14367)->dbl != 0.0){
            DeRef(_14367);
            _14367 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    DeRef(_14367);
    _14367 = NOVALUE;
    // SubProg find_file pc: 21 op: STARTLINE (58)

    /** scanner.e:452				CompileErr(51, {new_include_name})*/
    // SubProg find_file pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 25 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_36new_include_name_16558);
    ((intptr_t*)_2)[1] = _36new_include_name_16558;
    _14369 = MAKE_SEQ(_1);
    // SubProg find_file pc: 29 op: PROC (27)
    _50CompileErr(51, _14369, 0);
    _14369 = NOVALUE;
    // SubProg find_file pc: 34 op: NOP1 (159)
L2: // addr: 35 pc: 34 sub: 25595 op: 159
    // SubProg find_file pc: 35 op: STARTLINE (58)

    /** scanner.e:455			return fname*/
    // SubProg find_file pc: 37 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var full_path_25599
    DeRef(_full_path_25599);

// block var errbuff_25600
    DeRef(_errbuff_25600);

// block var currdir_25601
    DeRef(_currdir_25601);

// block var conf_path_25602
    DeRef(_conf_path_25602);

// block var scan_result_25603
    DeRef(_scan_result_25603);

// block var inc_path_25604
    DeRef(_inc_path_25604);

// block var mainpath_25623
    DeRef(_mainpath_25623);
    return _fname_25597;
    // SubProg find_file pc: 41 op: NOP1 (159)
L1: // addr: 42 pc: 41 sub: 25595 op: 159
    // SubProg find_file pc: 42 op: STARTLINE (58)

    /** scanner.e:460		currdir = get_file_path( known_files[current_file_no] )*/
    // SubProg find_file pc: 44 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _14370 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg find_file pc: 52 op: PROC (27)
    Ref(_14370);
    _0 = _currdir_25601;
    _currdir_25601 = _62get_file_path(_14370);
    DeRef(_0);
    _14370 = NOVALUE;
    // SubProg find_file pc: 56 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 58 op: STARTLINE (58)

    /** scanner.e:461		full_path = currdir & fname*/
    // SubProg find_file pc: 60 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25599, _currdir_25601, _fname_25597);
    // SubProg find_file pc: 64 op: STARTLINE (58)

    /** scanner.e:462		if file_exists(full_path) then*/
    // SubProg find_file pc: 66 op: PROC (27)
    RefDS(_full_path_25599);
    _14373 = _20file_exists(_full_path_25599);
    // SubProg find_file pc: 70 op: IF (20)
    if (_14373 == 0) {
        DeRef(_14373);
        _14373 = NOVALUE;
        goto L3; // [70] 80
    }
    else {
        if (!IS_ATOM_INT(_14373) && DBL_PTR(_14373)->dbl == 0.0){
            DeRef(_14373);
            _14373 = NOVALUE;
            goto L3; // [70] 80
        }
        DeRef(_14373);
        _14373 = NOVALUE;
    }
    DeRef(_14373);
    _14373 = NOVALUE;
    // SubProg find_file pc: 73 op: STARTLINE (58)

    /** scanner.e:463			return full_path*/
    // SubProg find_file pc: 75 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25597
    DeRefDS(_fname_25597);

// block var errbuff_25600
    DeRef(_errbuff_25600);

// block var currdir_25601
    DeRefDS(_currdir_25601);

// block var conf_path_25602
    DeRef(_conf_path_25602);

// block var scan_result_25603
    DeRef(_scan_result_25603);

// block var inc_path_25604
    DeRef(_inc_path_25604);

// block var mainpath_25623
    DeRef(_mainpath_25623);
    return _full_path_25599;
    // SubProg find_file pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 25595 op: 159
    // SubProg find_file pc: 80 op: STARTLINE (58)

    /** scanner.e:467		sequence mainpath = main_path[1..rfind(SLASH, main_path)]*/
    // SubProg find_file pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 88 op: ASSIGN (18)
    RefDS(_36main_path_16556);
    DeRef(_31714);
    _31714 = _36main_path_16556;
    // SubProg find_file pc: 91 op: LENGTH (42)
    if (IS_SEQUENCE(_31714)){
            _31715 = SEQ_PTR(_31714)->length;
    }
    else {
        _31715 = 1;
    }
    _31714 = NOVALUE;
    // SubProg find_file pc: 94 op: PROC (27)
    RefDS(_36main_path_16556);
    _14374 = _19rfind(47, _36main_path_16556, _31715);
    _31715 = NOVALUE;
    // SubProg find_file pc: 100 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_mainpath_25623;
    RHS_Slice(_36main_path_16556, 1, _14374);
    // SubProg find_file pc: 105 op: STARTLINE (58)

    /** scanner.e:468		if not equal(mainpath, currdir) then*/
    // SubProg find_file pc: 107 op: EQUAL (153)
    if (_mainpath_25623 == _currdir_25601)
    _14376 = 1;
    else if (IS_ATOM_INT(_mainpath_25623) && IS_ATOM_INT(_currdir_25601))
    _14376 = 0;
    else
    _14376 = (compare(_mainpath_25623, _currdir_25601) == 0);
    // SubProg find_file pc: 111 op: NOT_IFW (108)
    if (_14376 != 0)
    goto L4; // [111] 139
    _14376 = NOVALUE;
    // SubProg find_file pc: 114 op: STARTLINE (58)

    /** scanner.e:469			full_path = mainpath & new_include_name*/
    // SubProg find_file pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 118 op: CONCAT (15)
    Concat((object_ptr)&_full_path_25599, _mainpath_25623, _36new_include_name_16558);
    // SubProg find_file pc: 122 op: STARTLINE (58)

    /** scanner.e:470			if file_exists(full_path) then*/
    // SubProg find_file pc: 124 op: PROC (27)
    RefDS(_full_path_25599);
    _14379 = _20file_exists(_full_path_25599);
    // SubProg find_file pc: 128 op: IF (20)
    if (_14379 == 0) {
        DeRef(_14379);
        _14379 = NOVALUE;
        goto L5; // [128] 138
    }
    else {
        if (!IS_ATOM_INT(_14379) && DBL_PTR(_14379)->dbl == 0.0){
            DeRef(_14379);
            _14379 = NOVALUE;
            goto L5; // [128] 138
        }
        DeRef(_14379);
        _14379 = NOVALUE;
    }
    DeRef(_14379);
    _14379 = NOVALUE;
    // SubProg find_file pc: 131 op: STARTLINE (58)

    /** scanner.e:471				return full_path*/
    // SubProg find_file pc: 133 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25597
    DeRefDS(_fname_25597);

// block var errbuff_25600
    DeRef(_errbuff_25600);

// block var currdir_25601
    DeRefDS(_currdir_25601);

// block var conf_path_25602
    DeRef(_conf_path_25602);

// block var scan_result_25603
    DeRef(_scan_result_25603);

// block var inc_path_25604
    DeRef(_inc_path_25604);

// block var mainpath_25623
    DeRefDS(_mainpath_25623);
    _31714 = NOVALUE;
    DeRef(_14374);
    _14374 = NOVALUE;
    return _full_path_25599;
    // SubProg find_file pc: 137 op: NOP1 (159)
L5: // addr: 138 pc: 137 sub: 25595 op: 159
    // SubProg find_file pc: 138 op: NOP1 (159)
L4: // addr: 139 pc: 138 sub: 25595 op: 159
    // SubProg find_file pc: 139 op: STARTLINE (58)

    /** scanner.e:475		scan_result = ConfPath(new_include_name)*/
    // SubProg find_file pc: 141 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 143 op: PROC (27)
    RefDS(_36new_include_name_16558);
    _0 = _scan_result_25603;
    _scan_result_25603 = _48ConfPath(_36new_include_name_16558);
    DeRef(_0);
    // SubProg find_file pc: 147 op: STARTLINE (58)

    /** scanner.e:477		if atom(scan_result) then*/
    // SubProg find_file pc: 149 op: IS_AN_ATOM (67)
    _14381 = IS_ATOM(_scan_result_25603);
    // SubProg find_file pc: 152 op: IF (20)
    if (_14381 == 0)
    {
        _14381 = NOVALUE;
        goto L6; // [152] 164
    }
    else{
        _14381 = NOVALUE;
    }
    // SubProg find_file pc: 155 op: STARTLINE (58)

    /** scanner.e:478			scan_result = ScanPath(fname,"EUINC",0)*/
    // SubProg find_file pc: 157 op: PROC (27)
    RefDS(_fname_25597);
    RefDS(_14382);
    _0 = _scan_result_25603;
    _scan_result_25603 = _48ScanPath(_fname_25597, _14382, 0);
    DeRef(_0);
    // SubProg find_file pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 25595 op: 159
    // SubProg find_file pc: 164 op: STARTLINE (58)

    /** scanner.e:481		if atom(scan_result) then*/
    // SubProg find_file pc: 166 op: IS_AN_ATOM (67)
    _14384 = IS_ATOM(_scan_result_25603);
    // SubProg find_file pc: 169 op: IF (20)
    if (_14384 == 0)
    {
        _14384 = NOVALUE;
        goto L7; // [169] 181
    }
    else{
        _14384 = NOVALUE;
    }
    // SubProg find_file pc: 172 op: STARTLINE (58)

    /** scanner.e:482			scan_result = ScanPath(fname, "EUDIR",1)*/
    // SubProg find_file pc: 174 op: PROC (27)
    RefDS(_fname_25597);
    RefDS(_14385);
    _0 = _scan_result_25603;
    _scan_result_25603 = _48ScanPath(_fname_25597, _14385, 1);
    DeRef(_0);
    // SubProg find_file pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 25595 op: 159
    // SubProg find_file pc: 181 op: STARTLINE (58)

    /** scanner.e:485		if atom(scan_result) then*/
    // SubProg find_file pc: 183 op: IS_AN_ATOM (67)
    _14387 = IS_ATOM(_scan_result_25603);
    // SubProg find_file pc: 186 op: IF (20)
    if (_14387 == 0)
    {
        _14387 = NOVALUE;
        goto L8; // [186] 223
    }
    else{
        _14387 = NOVALUE;
    }
    // SubProg find_file pc: 189 op: STARTLINE (58)

    /** scanner.e:487			full_path = get_eudir() & SLASH & "include" & SLASH & fname*/
    // SubProg find_file pc: 191 op: PROC (27)
    _14388 = _37get_eudir();
    // SubProg find_file pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 196 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 198 op: CONCAT_N (157)
    {
        object concat_list[5];

        concat_list[0] = _fname_25597;
        concat_list[1] = 47;
        concat_list[2] = _13147;
        concat_list[3] = 47;
        concat_list[4] = _14388;
        Concat_N((object_ptr)&_full_path_25599, concat_list, 5);
    }
    DeRef(_14388);
    _14388 = NOVALUE;
    // SubProg find_file pc: 206 op: STARTLINE (58)

    /** scanner.e:488			if file_exists(full_path) then*/
    // SubProg find_file pc: 208 op: PROC (27)
    RefDS(_full_path_25599);
    _14390 = _20file_exists(_full_path_25599);
    // SubProg find_file pc: 212 op: IF (20)
    if (_14390 == 0) {
        DeRef(_14390);
        _14390 = NOVALUE;
        goto L9; // [212] 222
    }
    else {
        if (!IS_ATOM_INT(_14390) && DBL_PTR(_14390)->dbl == 0.0){
            DeRef(_14390);
            _14390 = NOVALUE;
            goto L9; // [212] 222
        }
        DeRef(_14390);
        _14390 = NOVALUE;
    }
    DeRef(_14390);
    _14390 = NOVALUE;
    // SubProg find_file pc: 215 op: STARTLINE (58)

    /** scanner.e:489				return full_path*/
    // SubProg find_file pc: 217 op: RETURNF (28)

// Exiting block BLOCK: find_file

// block var fname_25597
    DeRefDS(_fname_25597);

// block var errbuff_25600
    DeRef(_errbuff_25600);

// block var currdir_25601
    DeRef(_currdir_25601);

// block var conf_path_25602
    DeRef(_conf_path_25602);

// block var scan_result_25603
    DeRef(_scan_result_25603);

// block var inc_path_25604
    DeRef(_inc_path_25604);

// block var mainpath_25623
    DeRef(_mainpath_25623);
    _31714 = NOVALUE;
    DeRef(_14374);
    _14374 = NOVALUE;
    return _full_path_25599;
    // SubProg find_file pc: 221 op: NOP1 (159)
L9: // addr: 222 pc: 221 sub: 25595 op: 159
    // SubProg find_file pc: 222 op: NOP1 (159)
L8: // addr: 223 pc: 222 sub: 25595 op: 159
    // SubProg find_file pc: 223 op: STARTLINE (58)

    /** scanner.e:493		if sequence(scan_result) then*/
    // SubProg find_file pc: 225 op: IS_A_SEQUENCE (68)
    _14391 = IS_SEQUENCE(_scan_result_25603);
    // SubProg find_file pc: 228 op: IF (20)
    if (_14391 == 0)
    {
        _14391 = NOVALUE;
        goto LA; // [228] 250
    }
    else{
        _14391 = NOVALUE;
    }
    // SubProg find_file pc: 231 op: STARTLINE (58)

    /** scanner.e:495			close(scan_result[2])*/
    // SubProg find_file pc: 233 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25603);
    _14392 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg find_file pc: 237 op: CLOSE (86)
    if (IS_ATOM_INT(_14392))
    EClose(_14392);
    else
    EClose((object)DBL_PTR(_14392)->dbl);
    _14392 = NOVALUE;
    // SubProg find_file pc: 239 op: STARTLINE (58)

    /** scanner.e:496			return scan_result[1]*/
    // SubProg find_file pc: 241 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_scan_result_25603);
    _14393 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg find_file pc: 245 op: RETURNF (28)
    Ref(_14393);

// Exiting block BLOCK: find_file

// block var fname_25597
    DeRefDS(_fname_25597);

// block var full_path_25599
    DeRef(_full_path_25599);

// block var errbuff_25600
    DeRef(_errbuff_25600);

// block var currdir_25601
    DeRef(_currdir_25601);

// block var conf_path_25602
    DeRef(_conf_path_25602);

// block var scan_result_25603
    DeRef(_scan_result_25603);

// block var inc_path_25604
    DeRef(_inc_path_25604);

// block var mainpath_25623
    DeRef(_mainpath_25623);
    _31714 = NOVALUE;
    DeRef(_14374);
    _14374 = NOVALUE;
    return _14393;
    // SubProg find_file pc: 249 op: NOP1 (159)
LA: // addr: 250 pc: 249 sub: 25595 op: 159
    // SubProg find_file pc: 250 op: STARTLINE (58)

    /** scanner.e:500		errbuff = ""*/
    // SubProg find_file pc: 252 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25600);
    _errbuff_25600 = _5;
    // SubProg find_file pc: 255 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 257 op: STARTLINE (58)

    /** scanner.e:501		full_path = {}*/
    // SubProg find_file pc: 259 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_full_path_25599);
    _full_path_25599 = _5;
    // SubProg find_file pc: 262 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 264 op: STARTLINE (58)

    /** scanner.e:502		if length(currdir) > 0 then*/
    // SubProg find_file pc: 266 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25601)){
            _14394 = SEQ_PTR(_currdir_25601)->length;
    }
    else {
        _14394 = 1;
    }
    // SubProg find_file pc: 269 op: GREATER_IFW_I (124)
    if (_14394 <= 0)
    goto LB; // [269] 321
    // SubProg find_file pc: 273 op: STARTLINE (58)

    /** scanner.e:503			if find(currdir[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 275 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25601)){
            _14396 = SEQ_PTR(_currdir_25601)->length;
    }
    else {
        _14396 = 1;
    }
    // SubProg find_file pc: 278 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_currdir_25601);
    _14397 = (object)*(((s1_ptr)_2)->base + _14396);
    // SubProg find_file pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 284 op: FIND_FROM (176)
    _14398 = find_from(_14397, _41SLASH_CHARS_21230, 1);
    _14397 = NOVALUE;
    // SubProg find_file pc: 289 op: IF (20)
    if (_14398 == 0)
    {
        _14398 = NOVALUE;
        goto LC; // [289] 313
    }
    else{
        _14398 = NOVALUE;
    }
    // SubProg find_file pc: 292 op: STARTLINE (58)

    /** scanner.e:504				full_path = append(full_path, currdir[1..$-1])*/
    // SubProg find_file pc: 294 op: LENGTH (42)
    if (IS_SEQUENCE(_currdir_25601)){
            _14399 = SEQ_PTR(_currdir_25601)->length;
    }
    else {
        _14399 = 1;
    }
    // SubProg find_file pc: 297 op: MINUS (10)
    _14400 = _14399 - 1;
    _14399 = NOVALUE;
    // SubProg find_file pc: 301 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_14401;
    RHS_Slice(_currdir_25601, 1, _14400);
    // SubProg find_file pc: 306 op: APPEND (35)
    RefDS(_14401);
    Append(&_full_path_25599, _full_path_25599, _14401);
    DeRefDS(_14401);
    _14401 = NOVALUE;
    // SubProg find_file pc: 310 op: ELSE (23)
    goto LD; // [310] 320
    // SubProg find_file pc: 312 op: NOP1 (159)
LC: // addr: 313 pc: 312 sub: 25595 op: 159
    // SubProg find_file pc: 313 op: STARTLINE (58)

    /** scanner.e:506				full_path = append(full_path, currdir)*/
    // SubProg find_file pc: 315 op: APPEND (35)
    RefDS(_currdir_25601);
    Append(&_full_path_25599, _full_path_25599, _currdir_25601);
    // SubProg find_file pc: 319 op: NOP1 (159)
LD: // addr: 320 pc: 319 sub: 25595 op: 159
    // SubProg find_file pc: 320 op: NOP1 (159)
LB: // addr: 321 pc: 320 sub: 25595 op: 159
    // SubProg find_file pc: 321 op: STARTLINE (58)

    /** scanner.e:511		if find(main_path[$], SLASH_CHARS) then*/
    // SubProg find_file pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 325 op: LENGTH (42)
    if (IS_SEQUENCE(_36main_path_16556)){
            _14404 = SEQ_PTR(_36main_path_16556)->length;
    }
    else {
        _14404 = 1;
    }
    // SubProg find_file pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_36main_path_16556);
    _14405 = (object)*(((s1_ptr)_2)->base + _14404);
    // SubProg find_file pc: 332 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 334 op: FIND_FROM (176)
    _14406 = find_from(_14405, _41SLASH_CHARS_21230, 1);
    _14405 = NOVALUE;
    // SubProg find_file pc: 339 op: IF (20)
    if (_14406 == 0)
    {
        _14406 = NOVALUE;
        goto LE; // [339] 361
    }
    else{
        _14406 = NOVALUE;
    }
    // SubProg find_file pc: 342 op: STARTLINE (58)

    /** scanner.e:512			errbuff = main_path[1..$-1]  -- looks better*/
    // SubProg find_file pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 346 op: LENGTH (42)
    if (IS_SEQUENCE(_36main_path_16556)){
            _14407 = SEQ_PTR(_36main_path_16556)->length;
    }
    else {
        _14407 = 1;
    }
    // SubProg find_file pc: 349 op: MINUS (10)
    _14408 = _14407 - 1;
    _14407 = NOVALUE;
    // SubProg find_file pc: 353 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_errbuff_25600;
    RHS_Slice(_36main_path_16556, 1, _14408);
    // SubProg find_file pc: 358 op: ELSE (23)
    goto LF; // [358] 371
    // SubProg find_file pc: 360 op: NOP1 (159)
LE: // addr: 361 pc: 360 sub: 25595 op: 159
    // SubProg find_file pc: 361 op: STARTLINE (58)

    /** scanner.e:514			errbuff = main_path*/
    // SubProg find_file pc: 363 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 365 op: ASSIGN (18)
    RefDS(_36main_path_16556);
    DeRef(_errbuff_25600);
    _errbuff_25600 = _36main_path_16556;
    // SubProg find_file pc: 368 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 370 op: NOP1 (159)
LF: // addr: 371 pc: 370 sub: 25595 op: 159
    // SubProg find_file pc: 371 op: STARTLINE (58)

    /** scanner.e:516		if not find(errbuff, full_path) then*/
    // SubProg find_file pc: 373 op: FIND_FROM (176)
    _14410 = find_from(_errbuff_25600, _full_path_25599, 1);
    // SubProg find_file pc: 378 op: NOT_IFW (108)
    if (_14410 != 0)
    goto L10; // [378] 388
    _14410 = NOVALUE;
    // SubProg find_file pc: 381 op: STARTLINE (58)

    /** scanner.e:517			full_path = append(full_path, errbuff)*/
    // SubProg find_file pc: 383 op: APPEND (35)
    RefDS(_errbuff_25600);
    Append(&_full_path_25599, _full_path_25599, _errbuff_25600);
    // SubProg find_file pc: 387 op: NOP1 (159)
L10: // addr: 388 pc: 387 sub: 25595 op: 159
    // SubProg find_file pc: 388 op: STARTLINE (58)

    /** scanner.e:520		conf_path = get_conf_dirs()*/
    // SubProg find_file pc: 390 op: PROC (27)
    _0 = _conf_path_25602;
    _conf_path_25602 = _48get_conf_dirs();
    DeRef(_0);
    // SubProg find_file pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 395 op: STARTLINE (58)

    /** scanner.e:521		if length(conf_path) > 0 then*/
    // SubProg find_file pc: 397 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25602)){
            _14414 = SEQ_PTR(_conf_path_25602)->length;
    }
    else {
        _14414 = 1;
    }
    // SubProg find_file pc: 400 op: GREATER_IFW_I (124)
    if (_14414 <= 0)
    goto L11; // [400] 507
    // SubProg find_file pc: 404 op: STARTLINE (58)

    /** scanner.e:522			conf_path = split(conf_path, PATHSEP)*/
    // SubProg find_file pc: 406 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 408 op: PROC (27)
    RefDS(_conf_path_25602);
    _0 = _conf_path_25602;
    _conf_path_25602 = _23split(_conf_path_25602, 58, 0, 0);
    DeRefDS(_0);
    // SubProg find_file pc: 415 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 417 op: STARTLINE (58)

    /** scanner.e:523			for i = 1 to length(conf_path) do*/
    // SubProg find_file pc: 419 op: LENGTH (42)
    if (IS_SEQUENCE(_conf_path_25602)){
            _14417 = SEQ_PTR(_conf_path_25602)->length;
    }
    else {
        _14417 = 1;
    }
    // SubProg find_file pc: 422 op: FOR_I (125)
    {
        object _i_25704;
        _i_25704 = 1;
L12: // addr: 429 pc: 422 sub: 25595 op: 125
        if (_i_25704 > _14417){
            goto L13; // [422] 506
        }
        // SubProg find_file pc: 429 op: STARTLINE (58)

        /** scanner.e:524				if find(conf_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 431 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25602);
        _14418 = (object)*(((s1_ptr)_2)->base + _i_25704);
        // SubProg find_file pc: 435 op: LENGTH (42)
        if (IS_SEQUENCE(_14418)){
                _14419 = SEQ_PTR(_14418)->length;
        }
        else {
            _14419 = 1;
        }
        // SubProg find_file pc: 438 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14418);
        _14420 = (object)*(((s1_ptr)_2)->base + _14419);
        _14418 = NOVALUE;
        // SubProg find_file pc: 442 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 444 op: FIND_FROM (176)
        _14421 = find_from(_14420, _41SLASH_CHARS_21230, 1);
        _14420 = NOVALUE;
        // SubProg find_file pc: 449 op: IF (20)
        if (_14421 == 0)
        {
            _14421 = NOVALUE;
            goto L14; // [449] 473
        }
        else{
            _14421 = NOVALUE;
        }
        // SubProg find_file pc: 452 op: STARTLINE (58)

        /** scanner.e:525					errbuff = conf_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 454 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_conf_path_25602);
        _14422 = (object)*(((s1_ptr)_2)->base + _i_25704);
        // SubProg find_file pc: 458 op: LENGTH (42)
        if (IS_SEQUENCE(_14422)){
                _14423 = SEQ_PTR(_14422)->length;
        }
        else {
            _14423 = 1;
        }
        // SubProg find_file pc: 461 op: MINUS (10)
        _14424 = _14423 - 1;
        _14423 = NOVALUE;
        // SubProg find_file pc: 465 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25600;
        RHS_Slice(_14422, 1, _14424);
        _14422 = NOVALUE;
        // SubProg find_file pc: 470 op: ELSE (23)
        goto L15; // [470] 482
        // SubProg find_file pc: 472 op: NOP1 (159)
L14: // addr: 473 pc: 472 sub: 25595 op: 159
        // SubProg find_file pc: 473 op: STARTLINE (58)

        /** scanner.e:527					errbuff = conf_path[i]*/
        // SubProg find_file pc: 475 op: RHS_SUBS (25)
        DeRef(_errbuff_25600);
        _2 = (object)SEQ_PTR(_conf_path_25602);
        _errbuff_25600 = (object)*(((s1_ptr)_2)->base + _i_25704);
        Ref(_errbuff_25600);
        // SubProg find_file pc: 479 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 481 op: NOP1 (159)
L15: // addr: 482 pc: 481 sub: 25595 op: 159
        // SubProg find_file pc: 482 op: STARTLINE (58)

        /** scanner.e:529				if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 484 op: FIND_FROM (176)
        _14427 = find_from(_errbuff_25600, _full_path_25599, 1);
        // SubProg find_file pc: 489 op: NOT_IFW (108)
        if (_14427 != 0)
        goto L16; // [489] 499
        _14427 = NOVALUE;
        // SubProg find_file pc: 492 op: STARTLINE (58)

        /** scanner.e:530					full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 494 op: APPEND (35)
        RefDS(_errbuff_25600);
        Append(&_full_path_25599, _full_path_25599, _errbuff_25600);
        // SubProg find_file pc: 498 op: NOP1 (159)
L16: // addr: 499 pc: 498 sub: 25595 op: 159
        // SubProg find_file pc: 499 op: STARTLINE (58)

        /** scanner.e:532			end for*/
        // SubProg find_file pc: 501 op: ENDFOR_INT_UP1 (54)
        _i_25704 = _i_25704 + 1;
        goto L12; // [501] 429
L13: // addr: 506 pc: 501 sub: 25595 op: 54
        ;
    }
    // SubProg find_file pc: 506 op: NOP1 (159)
L11: // addr: 507 pc: 506 sub: 25595 op: 159
    // SubProg find_file pc: 507 op: STARTLINE (58)

    /** scanner.e:535		inc_path = getenv("EUINC")*/
    // SubProg find_file pc: 509 op: GETENV (91)
    DeRef(_inc_path_25604);
    _inc_path_25604 = EGetEnv(_14382);
    // SubProg find_file pc: 512 op: STARTLINE (58)

    /** scanner.e:536		if sequence(inc_path) then*/
    // SubProg find_file pc: 514 op: IS_A_SEQUENCE (68)
    _14431 = IS_SEQUENCE(_inc_path_25604);
    // SubProg find_file pc: 517 op: IF (20)
    if (_14431 == 0)
    {
        _14431 = NOVALUE;
        goto L17; // [517] 631
    }
    else{
        _14431 = NOVALUE;
    }
    // SubProg find_file pc: 520 op: STARTLINE (58)

    /** scanner.e:537			if length(inc_path) > 0 then*/
    // SubProg find_file pc: 522 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25604)){
            _14432 = SEQ_PTR(_inc_path_25604)->length;
    }
    else {
        _14432 = 1;
    }
    // SubProg find_file pc: 525 op: GREATER_IFW_I (124)
    if (_14432 <= 0)
    goto L18; // [525] 630
    // SubProg find_file pc: 529 op: STARTLINE (58)

    /** scanner.e:538				inc_path = split(inc_path, PATHSEP)*/
    // SubProg find_file pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 533 op: PROC (27)
    Ref(_inc_path_25604);
    _0 = _inc_path_25604;
    _inc_path_25604 = _23split(_inc_path_25604, 58, 0, 0);
    DeRefi(_0);
    // SubProg find_file pc: 540 op: STARTLINE (58)

    /** scanner.e:539				for i = 1 to length(inc_path) do*/
    // SubProg find_file pc: 542 op: LENGTH (42)
    if (IS_SEQUENCE(_inc_path_25604)){
            _14435 = SEQ_PTR(_inc_path_25604)->length;
    }
    else {
        _14435 = 1;
    }
    // SubProg find_file pc: 545 op: FOR_I (125)
    {
        object _i_25732;
        _i_25732 = 1;
L19: // addr: 552 pc: 545 sub: 25595 op: 125
        if (_i_25732 > _14435){
            goto L1A; // [545] 629
        }
        // SubProg find_file pc: 552 op: STARTLINE (58)

        /** scanner.e:540					if find(inc_path[i][$], SLASH_CHARS) then*/
        // SubProg find_file pc: 554 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25604);
        _14436 = (object)*(((s1_ptr)_2)->base + _i_25732);
        // SubProg find_file pc: 558 op: LENGTH (42)
        if (IS_SEQUENCE(_14436)){
                _14437 = SEQ_PTR(_14436)->length;
        }
        else {
            _14437 = 1;
        }
        // SubProg find_file pc: 561 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14436);
        _14438 = (object)*(((s1_ptr)_2)->base + _14437);
        _14436 = NOVALUE;
        // SubProg find_file pc: 565 op: GLOBAL_INIT_CHECK (109)
        // SubProg find_file pc: 567 op: FIND_FROM (176)
        _14439 = find_from(_14438, _41SLASH_CHARS_21230, 1);
        _14438 = NOVALUE;
        // SubProg find_file pc: 572 op: IF (20)
        if (_14439 == 0)
        {
            _14439 = NOVALUE;
            goto L1B; // [572] 596
        }
        else{
            _14439 = NOVALUE;
        }
        // SubProg find_file pc: 575 op: STARTLINE (58)

        /** scanner.e:541						errbuff = inc_path[i][1..$-1]  -- looks better*/
        // SubProg find_file pc: 577 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_inc_path_25604);
        _14440 = (object)*(((s1_ptr)_2)->base + _i_25732);
        // SubProg find_file pc: 581 op: LENGTH (42)
        if (IS_SEQUENCE(_14440)){
                _14441 = SEQ_PTR(_14440)->length;
        }
        else {
            _14441 = 1;
        }
        // SubProg find_file pc: 584 op: MINUS (10)
        _14442 = _14441 - 1;
        _14441 = NOVALUE;
        // SubProg find_file pc: 588 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_errbuff_25600;
        RHS_Slice(_14440, 1, _14442);
        _14440 = NOVALUE;
        // SubProg find_file pc: 593 op: ELSE (23)
        goto L1C; // [593] 605
        // SubProg find_file pc: 595 op: NOP1 (159)
L1B: // addr: 596 pc: 595 sub: 25595 op: 159
        // SubProg find_file pc: 596 op: STARTLINE (58)

        /** scanner.e:543						errbuff = inc_path[i]*/
        // SubProg find_file pc: 598 op: RHS_SUBS_CHECK (92)
        DeRef(_errbuff_25600);
        _2 = (object)SEQ_PTR(_inc_path_25604);
        _errbuff_25600 = (object)*(((s1_ptr)_2)->base + _i_25732);
        Ref(_errbuff_25600);
        // SubProg find_file pc: 602 op: SEQUENCE_CHECK (97)
        // SubProg find_file pc: 604 op: NOP1 (159)
L1C: // addr: 605 pc: 604 sub: 25595 op: 159
        // SubProg find_file pc: 605 op: STARTLINE (58)

        /** scanner.e:545					if not find(errbuff, full_path) then*/
        // SubProg find_file pc: 607 op: FIND_FROM (176)
        _14445 = find_from(_errbuff_25600, _full_path_25599, 1);
        // SubProg find_file pc: 612 op: NOT_IFW (108)
        if (_14445 != 0)
        goto L1D; // [612] 622
        _14445 = NOVALUE;
        // SubProg find_file pc: 615 op: STARTLINE (58)

        /** scanner.e:546						full_path = append(full_path, errbuff)*/
        // SubProg find_file pc: 617 op: APPEND (35)
        RefDS(_errbuff_25600);
        Append(&_full_path_25599, _full_path_25599, _errbuff_25600);
        // SubProg find_file pc: 621 op: NOP1 (159)
L1D: // addr: 622 pc: 621 sub: 25595 op: 159
        // SubProg find_file pc: 622 op: STARTLINE (58)

        /** scanner.e:548				end for*/
        // SubProg find_file pc: 624 op: ENDFOR_INT_UP1 (54)
        _i_25732 = _i_25732 + 1;
        goto L19; // [624] 552
L1A: // addr: 629 pc: 624 sub: 25595 op: 54
        ;
    }
    // SubProg find_file pc: 629 op: NOP1 (159)
L18: // addr: 630 pc: 629 sub: 25595 op: 159
    // SubProg find_file pc: 630 op: NOP1 (159)
L17: // addr: 631 pc: 630 sub: 25595 op: 159
    // SubProg find_file pc: 631 op: STARTLINE (58)

    /** scanner.e:552		if length(get_eudir()) > 0 then*/
    // SubProg find_file pc: 633 op: PROC (27)
    _14448 = _37get_eudir();
    // SubProg find_file pc: 636 op: LENGTH (42)
    if (IS_SEQUENCE(_14448)){
            _14449 = SEQ_PTR(_14448)->length;
    }
    else {
        _14449 = 1;
    }
    DeRef(_14448);
    _14448 = NOVALUE;
    // SubProg find_file pc: 639 op: GREATER_IFW_I (124)
    if (_14449 <= 0)
    goto L1E; // [639] 667
    // SubProg find_file pc: 643 op: STARTLINE (58)

    /** scanner.e:553			if not find(get_eudir(), full_path) then*/
    // SubProg find_file pc: 645 op: PROC (27)
    _14451 = _37get_eudir();
    // SubProg find_file pc: 648 op: FIND_FROM (176)
    _14452 = find_from(_14451, _full_path_25599, 1);
    DeRef(_14451);
    _14451 = NOVALUE;
    // SubProg find_file pc: 653 op: NOT_IFW (108)
    if (_14452 != 0)
    goto L1F; // [653] 666
    _14452 = NOVALUE;
    // SubProg find_file pc: 656 op: STARTLINE (58)

    /** scanner.e:554				full_path = append(full_path, get_eudir())*/
    // SubProg find_file pc: 658 op: PROC (27)
    _14454 = _37get_eudir();
    // SubProg find_file pc: 661 op: APPEND (35)
    Ref(_14454);
    Append(&_full_path_25599, _full_path_25599, _14454);
    DeRef(_14454);
    _14454 = NOVALUE;
    // SubProg find_file pc: 665 op: NOP1 (159)
L1F: // addr: 666 pc: 665 sub: 25595 op: 159
    // SubProg find_file pc: 666 op: NOP1 (159)
L1E: // addr: 667 pc: 666 sub: 25595 op: 159
    // SubProg find_file pc: 667 op: STARTLINE (58)

    /** scanner.e:558		errbuff = ""*/
    // SubProg find_file pc: 669 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_errbuff_25600);
    _errbuff_25600 = _5;
    // SubProg find_file pc: 672 op: SEQUENCE_CHECK (97)
    // SubProg find_file pc: 674 op: STARTLINE (58)

    /** scanner.e:559		for i = 1 to length(full_path) do*/
    // SubProg find_file pc: 676 op: LENGTH (42)
    if (IS_SEQUENCE(_full_path_25599)){
            _14456 = SEQ_PTR(_full_path_25599)->length;
    }
    else {
        _14456 = 1;
    }
    // SubProg find_file pc: 679 op: FOR_I (125)
    {
        object _i_25764;
        _i_25764 = 1;
L20: // addr: 686 pc: 679 sub: 25595 op: 125
        if (_i_25764 > _14456){
            goto L21; // [679] 711
        }
        // SubProg find_file pc: 686 op: STARTLINE (58)

        /** scanner.e:560			errbuff &= sprintf("\t%s\n", {full_path[i]})*/
        // SubProg find_file pc: 688 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_full_path_25599);
        _14458 = (object)*(((s1_ptr)_2)->base + _i_25764);
        // SubProg find_file pc: 692 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_14458);
        ((intptr_t*)_2)[1] = _14458;
        _14459 = MAKE_SEQ(_1);
        _14458 = NOVALUE;
        // SubProg find_file pc: 696 op: SPRINTF (53)
        _14460 = EPrintf(-9999999, _14457, _14459);
        DeRefDS(_14459);
        _14459 = NOVALUE;
        // SubProg find_file pc: 700 op: CONCAT (15)
        Concat((object_ptr)&_errbuff_25600, _errbuff_25600, _14460);
        DeRefDS(_14460);
        _14460 = NOVALUE;
        // SubProg find_file pc: 704 op: STARTLINE (58)

        /** scanner.e:561		end for*/
        // SubProg find_file pc: 706 op: ENDFOR_INT_UP1 (54)
        _i_25764 = _i_25764 + 1;
        goto L20; // [706] 686
L21: // addr: 711 pc: 706 sub: 25595 op: 54
        ;
    }
    // SubProg find_file pc: 711 op: STARTLINE (58)

    /** scanner.e:563		CompileErr(52, {new_include_name, errbuff})*/
    // SubProg find_file pc: 713 op: GLOBAL_INIT_CHECK (109)
    // SubProg find_file pc: 715 op: RIGHT_BRACE_2 (85)
    RefDS(_errbuff_25600);
    RefDS(_36new_include_name_16558);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _36new_include_name_16558;
    ((intptr_t *)_2)[2] = _errbuff_25600;
    _14462 = MAKE_SEQ(_1);
    // SubProg find_file pc: 719 op: PROC (27)
    _50CompileErr(52, _14462, 0);
    _14462 = NOVALUE;
    // SubProg find_file pc: 724 op: BADRETURNF (43)
    ;
}


object _62path_open()
{
    object _fh_25776 = NOVALUE;
// skipping _14465  name type: 0
// skipping _14464  name type: 0
// skipping _14463  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg path_open pc: 1 op: STARTLINE (58)

    /** scanner.e:569		new_include_name = find_file(new_include_name)*/
    // SubProg path_open pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 5 op: PROC (27)
    RefDS(_36new_include_name_16558);
    _0 = _62find_file(_36new_include_name_16558);
    DeRefDS(_36new_include_name_16558);
    _36new_include_name_16558 = _0;
    // SubProg path_open pc: 9 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 11 op: STARTLINE (58)

    /** scanner.e:570		new_include_name = maybe_preprocess(new_include_name)*/
    // SubProg path_open pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 15 op: PROC (27)
    RefDS(_36new_include_name_16558);
    _0 = _64maybe_preprocess(_36new_include_name_16558);
    DeRefDS(_36new_include_name_16558);
    _36new_include_name_16558 = _0;
    // SubProg path_open pc: 19 op: SEQUENCE_CHECK (97)
    // SubProg path_open pc: 21 op: STARTLINE (58)

    /** scanner.e:572		fh = open_locked(new_include_name)*/
    // SubProg path_open pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg path_open pc: 25 op: PROC (27)
    RefDS(_36new_include_name_16558);
    _fh_25776 = _37open_locked(_36new_include_name_16558);
    // SubProg path_open pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fh_25776)) {
        _1 = (object)(DBL_PTR(_fh_25776)->dbl);
        DeRefDS(_fh_25776);
        _fh_25776 = _1;
    }
    // SubProg path_open pc: 31 op: STARTLINE (58)

    /** scanner.e:573		return fh*/
    // SubProg path_open pc: 33 op: RETURNF (28)

// Exiting block BLOCK: path_open
    return _fh_25776;
    // SubProg path_open pc: 37 op: BADRETURNF (43)
    ;
}


object _62NameSpace_declaration(object _sym_25800)
{
    object _h_25801 = NOVALUE;
// skipping _14486  name type: 0
// skipping _14485  name type: 0
    object _14484 = NOVALUE; // 25839 14484
// skipping _14483  name type: 0
    object _14482 = NOVALUE; // 25834 14482
// skipping _14481  name type: 0
    object _14480 = NOVALUE; // 25829 14480
// skipping _14479  name type: 0
    object _14478 = NOVALUE; // 25825 14478
    object _14477 = NOVALUE; // 25822 14477
    object _14476 = NOVALUE; // 25820 14476
// skipping _14475  name type: 0
    object _14474 = NOVALUE; // 25815 14474
    object _14473 = NOVALUE; // 25813 14473
    object _14472 = NOVALUE; // 25812 14472
    object _14471 = NOVALUE; // 25807 14471
    object _14470 = NOVALUE; // 25805 14470
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NameSpace_declaration pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25800)) {
        _1 = (object)(DBL_PTR(_sym_25800)->dbl);
        DeRefDS(_sym_25800);
        _sym_25800 = _1;
    }
    // SubProg NameSpace_declaration pc: 3 op: STARTLINE (58)

    /** scanner.e:594		DefinedYet(sym)*/
    // SubProg NameSpace_declaration pc: 5 op: PROC (27)
    _54DefinedYet(_sym_25800);
    // SubProg NameSpace_declaration pc: 8 op: STARTLINE (58)

    /** scanner.e:595		if find(SymTab[sym][S_SCOPE], {SC_GLOBAL, SC_PUBLIC, SC_EXPORT, SC_PREDEF}) then*/
    // SubProg NameSpace_declaration pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 12 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _14470 = (object)*(((s1_ptr)_2)->base + _sym_25800);
    // SubProg NameSpace_declaration pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14470);
    _14471 = (object)*(((s1_ptr)_2)->base + 4);
    _14470 = NOVALUE;
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
    _14472 = MAKE_SEQ(_1);
    // SubProg NameSpace_declaration pc: 37 op: FIND_FROM (176)
    _14473 = find_from(_14471, _14472, 1);
    _14471 = NOVALUE;
    DeRefDS(_14472);
    _14472 = NOVALUE;
    // SubProg NameSpace_declaration pc: 42 op: IF (20)
    if (_14473 == 0)
    {
        _14473 = NOVALUE;
        goto L1; // [42] 104
    }
    else{
        _14473 = NOVALUE;
    }
    // SubProg NameSpace_declaration pc: 45 op: STARTLINE (58)

    /** scanner.e:597			h = SymTab[sym][S_HASHVAL]*/
    // SubProg NameSpace_declaration pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 49 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _14474 = (object)*(((s1_ptr)_2)->base + _sym_25800);
    // SubProg NameSpace_declaration pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 55 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14474);
    _h_25801 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_25801)){
        _h_25801 = (object)DBL_PTR(_h_25801)->dbl;
    }
    _14474 = NOVALUE;
    // SubProg NameSpace_declaration pc: 61 op: STARTLINE (58)

    /** scanner.e:599			sym = NewEntry(SymTab[sym][S_NAME], 0, 0, VARIABLE, h, buckets[h], 0)*/
    // SubProg NameSpace_declaration pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _14476 = (object)*(((s1_ptr)_2)->base + _sym_25800);
    // SubProg NameSpace_declaration pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14476);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _14477 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _14477 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _14476 = NOVALUE;
    // SubProg NameSpace_declaration pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _14478 = (object)*(((s1_ptr)_2)->base + _h_25801);
    // SubProg NameSpace_declaration pc: 83 op: PROC (27)
    Ref(_14477);
    Ref(_14478);
    _sym_25800 = _54NewEntry(_14477, 0, 0, -100, _h_25801, _14478, 0);
    _14477 = NOVALUE;
    _14478 = NOVALUE;
    // SubProg NameSpace_declaration pc: 93 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25800)) {
        _1 = (object)(DBL_PTR(_sym_25800)->dbl);
        DeRefDS(_sym_25800);
        _sym_25800 = _1;
    }
    // SubProg NameSpace_declaration pc: 95 op: STARTLINE (58)

    /** scanner.e:600			buckets[h] = sym*/
    // SubProg NameSpace_declaration pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _2 = (object)(((s1_ptr)_2)->base + _h_25801);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_25800;
    DeRef(_1);
    // SubProg NameSpace_declaration pc: 103 op: NOP1 (159)
L1: // addr: 104 pc: 103 sub: 25797 op: 159
    // SubProg NameSpace_declaration pc: 104 op: STARTLINE (58)

    /** scanner.e:602		SymTab[sym][S_SCOPE] = SC_LOCAL*/
    // SubProg NameSpace_declaration pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 108 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25800 + ((s1_ptr)_2)->base);
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
    _14480 = NOVALUE;
    // SubProg NameSpace_declaration pc: 121 op: STARTLINE (58)

    /** scanner.e:603		SymTab[sym][S_MODE] = M_CONSTANT*/
    // SubProg NameSpace_declaration pc: 123 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 125 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25800 + ((s1_ptr)_2)->base);
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
    _14482 = NOVALUE;
    // SubProg NameSpace_declaration pc: 138 op: STARTLINE (58)

    /** scanner.e:604		SymTab[sym][S_TOKEN] = NAMESPACE -- [S_OBJ] will get the file number referred-to*/
    // SubProg NameSpace_declaration pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 142 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25800 + ((s1_ptr)_2)->base);
    // SubProg NameSpace_declaration pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 151 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_TOKEN_16096))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 523;
    DeRef(_1);
    _14484 = NOVALUE;
    // SubProg NameSpace_declaration pc: 155 op: STARTLINE (58)

    /** scanner.e:605		if TRANSLATE then*/
    // SubProg NameSpace_declaration pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 159 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L2; // [159] 173
    }
    else{
    }
    // SubProg NameSpace_declaration pc: 162 op: STARTLINE (58)

    /** scanner.e:606			num_routines += 1 -- order of ns declaration relative to routines*/
    // SubProg NameSpace_declaration pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NameSpace_declaration pc: 166 op: PLUS (11)
    _36num_routines_16445 = _36num_routines_16445 + 1;
    // SubProg NameSpace_declaration pc: 172 op: NOP1 (159)
L2: // addr: 173 pc: 172 sub: 25797 op: 159
    // SubProg NameSpace_declaration pc: 173 op: STARTLINE (58)

    /** scanner.e:609		return sym*/
    // SubProg NameSpace_declaration pc: 175 op: RETURNF (28)

// Exiting block BLOCK: NameSpace_declaration

// block var h_25801
    return _sym_25800;
    // SubProg NameSpace_declaration pc: 179 op: BADRETURNF (43)
    ;
}


void _62default_namespace()
{
    object _tok_25851 = NOVALUE;
    object _sym_25853 = NOVALUE;
    object _14508 = NOVALUE; // 25898 14508
    object _14507 = NOVALUE; // 25896 14507
// skipping _14506  name type: 0
    object _14505 = NOVALUE; // 25890 14505
// skipping _14504  name type: 0
    object _14503 = NOVALUE; // 25885 14503
// skipping _14502  name type: 0
// skipping _14501  name type: 0
    object _14500 = NOVALUE; // 25879 14500
// skipping _14499  name type: 0
// skipping _14498  name type: 0
    object _14497 = NOVALUE; // 25872 14497
// skipping _14496  name type: 0
    object _14495 = NOVALUE; // 25868 14495
    object _14493 = NOVALUE; // 25866 14493
    object _14492 = NOVALUE; // 25864 14492
    object _14491 = NOVALUE; // 25863 14491
    object _14490 = NOVALUE; // 25860 14490
    object _14489 = NOVALUE; // 25859 14489
    object _14488 = NOVALUE; // 25857 14488
// skipping _14487  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg default_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:618		tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 5 op: CALL_FUNC (137)
    _0 = (object)_00[_62scanner_rid_25847].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25851);
    _tok_25851 = _1;
    // SubProg default_namespace pc: 9 op: STARTLINE (58)

    /** scanner.e:619		if tok[T_ID] = VARIABLE and equal( SymTab[tok[T_SYM]][S_NAME], "namespace" ) then*/
    // SubProg default_namespace pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25851);
    _14488 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 19 op: EQUALS (3)
    if (IS_ATOM_INT(_14488)) {
        _14489 = (_14488 == -100);
    }
    else {
        _14489 = binary_op(EQUALS, _14488, -100);
    }
    _14488 = NOVALUE;
    // SubProg default_namespace pc: 23 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_14489)) {
        if (_14489 == 0) {
            goto L1; // [23] 177
        }
    }
    else {
        if (DBL_PTR(_14489)->dbl == 0.0) {
            goto L1; // [23] 177
        }
    }
    // SubProg default_namespace pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 29 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 31 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25851);
    _14491 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg default_namespace pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_14491)){
        _14492 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14491)->dbl));
    }
    else{
        _14492 = (object)*(((s1_ptr)_2)->base + _14491);
    }
    // SubProg default_namespace pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14492);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _14493 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _14493 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _14492 = NOVALUE;
    // SubProg default_namespace pc: 45 op: EQUAL (153)
    if (_14493 == _14494)
    _14495 = 1;
    else if (IS_ATOM_INT(_14493) && IS_ATOM_INT(_14494))
    _14495 = 0;
    else
    _14495 = (compare(_14493, _14494) == 0);
    _14493 = NOVALUE;
    // SubProg default_namespace pc: 49 op: NOP1 (159)
    // SubProg default_namespace pc: 50 op: IF (20)
    if (_14495 == 0)
    {
        _14495 = NOVALUE;
        goto L1; // [50] 177
    }
    else{
        _14495 = NOVALUE;
    }
    // SubProg default_namespace pc: 53 op: STARTLINE (58)

    /** scanner.e:621			tok = call_func( scanner_rid, {} )*/
    // SubProg default_namespace pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 57 op: CALL_FUNC (137)
    _0 = (object)_00[_62scanner_rid_25847].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25851);
    _tok_25851 = _1;
    // SubProg default_namespace pc: 61 op: STARTLINE (58)

    /** scanner.e:622			if tok[T_ID] != VARIABLE then*/
    // SubProg default_namespace pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25851);
    _14497 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg default_namespace pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 71 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _14497, -100)){
        _14497 = NOVALUE;
        goto L2; // [71] 83
    }
    _14497 = NOVALUE;
    // SubProg default_namespace pc: 75 op: STARTLINE (58)

    /** scanner.e:623				CompileErr(114)*/
    // SubProg default_namespace pc: 77 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(114, _21933, 0);
    // SubProg default_namespace pc: 82 op: NOP1 (159)
L2: // addr: 83 pc: 82 sub: 25848 op: 159
    // SubProg default_namespace pc: 83 op: STARTLINE (58)

    /** scanner.e:626			sym = tok[T_SYM]*/
    // SubProg default_namespace pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 87 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_25851);
    _sym_25853 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_25853)){
        _sym_25853 = (object)DBL_PTR(_sym_25853)->dbl;
    }
    // SubProg default_namespace pc: 93 op: STARTLINE (58)

    /** scanner.e:628			SymTab[sym][S_FILE_NO] = current_file_no*/
    // SubProg default_namespace pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 97 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25853 + ((s1_ptr)_2)->base);
    // SubProg default_namespace pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 106 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_FILE_NO_16087))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36current_file_no_16436;
    DeRef(_1);
    _14500 = NOVALUE;
    // SubProg default_namespace pc: 110 op: STARTLINE (58)

    /** scanner.e:629			sym  = NameSpace_declaration( sym )*/
    // SubProg default_namespace pc: 112 op: PROC (27)
    _sym_25853 = _62NameSpace_declaration(_sym_25853);
    // SubProg default_namespace pc: 116 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_25853)) {
        _1 = (object)(DBL_PTR(_sym_25853)->dbl);
        DeRefDS(_sym_25853);
        _sym_25853 = _1;
    }
    // SubProg default_namespace pc: 118 op: STARTLINE (58)

    /** scanner.e:630			SymTab[sym][S_OBJ] = current_file_no*/
    // SubProg default_namespace pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 122 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25853 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _36current_file_no_16436;
    DeRef(_1);
    _14503 = NOVALUE;
    // SubProg default_namespace pc: 135 op: STARTLINE (58)

    /** scanner.e:631			SymTab[sym][S_SCOPE] = SC_PUBLIC*/
    // SubProg default_namespace pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 139 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25853 + ((s1_ptr)_2)->base);
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
    _14505 = NOVALUE;
    // SubProg default_namespace pc: 152 op: STARTLINE (58)

    /** scanner.e:633			default_namespaces[current_file_no] = SymTab[sym][S_NAME]*/
    // SubProg default_namespace pc: 154 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 158 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 160 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _14507 = (object)*(((s1_ptr)_2)->base + _sym_25853);
    // SubProg default_namespace pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg default_namespace pc: 166 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14507);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _14508 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _14508 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _14507 = NOVALUE;
    // SubProg default_namespace pc: 170 op: ASSIGN_SUBS (16)
    Ref(_14508);
    _2 = (object)SEQ_PTR(_62default_namespaces_25185);
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14508;
    if( _1 != _14508 ){
        DeRef(_1);
    }
    _14508 = NOVALUE;
    // SubProg default_namespace pc: 174 op: ELSE (23)
    goto L3; // [174] 185
    // SubProg default_namespace pc: 176 op: NOP1 (159)
L1: // addr: 177 pc: 176 sub: 25848 op: 159
    // SubProg default_namespace pc: 177 op: STARTLINE (58)

    /** scanner.e:637			bp = 1*/
    // SubProg default_namespace pc: 179 op: ASSIGN (18)
    _50bp_48711 = 1;
    // SubProg default_namespace pc: 182 op: INTEGER_CHECK (96)
    // SubProg default_namespace pc: 184 op: NOP1 (159)
L3: // addr: 185 pc: 184 sub: 25848 op: 159
    // SubProg default_namespace pc: 185 op: STARTLINE (58)

    /** scanner.e:640	end procedure*/
    // SubProg default_namespace pc: 187 op: RETURNP (29)

// Exiting block BLOCK: default_namespace

// block var tok_25851
    DeRef(_tok_25851);

// block var sym_25853
    DeRef(_14489);
    _14489 = NOVALUE;
    _14491 = NOVALUE;
    return;
    // SubProg default_namespace pc: 190 op: BADRETURNF (43)
    ;
}


void _62add_exports(object _from_file_25903, object _to_file_25904)
{
    object _exports_25905 = NOVALUE;
    object _direct_25906 = NOVALUE;
    object _14528 = NOVALUE; // 25935 14528
    object _14527 = NOVALUE; // 25934 14527
    object _14526 = NOVALUE; // 25933 14526
    object _14525 = NOVALUE; // 25932 14525
    object _14524 = NOVALUE; // 25929 14524
// skipping _14523  name type: 0
    object _14522 = NOVALUE; // 25927 14522
// skipping _14521  name type: 0
    object _14520 = NOVALUE; // 25924 14520
    object _14519 = NOVALUE; // 25923 14519
// skipping _14518  name type: 0
    object _14517 = NOVALUE; // 25921 14517
    object _14516 = NOVALUE; // 25920 14516
    object _14515 = NOVALUE; // 25919 14515
// skipping _14514  name type: 0
    object _14513 = NOVALUE; // 25916 14513
    object _14512 = NOVALUE; // 25915 14512
    object _14511 = NOVALUE; // 25913 14511
// skipping _14510  name type: 0
// skipping _14509  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_exports pc: 5 op: STARTLINE (58)

    /** scanner.e:645		direct = file_include[to_file]*/
    // SubProg add_exports pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 9 op: RHS_SUBS_CHECK (92)
    DeRef(_direct_25906);
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _direct_25906 = (object)*(((s1_ptr)_2)->base + _to_file_25904);
    Ref(_direct_25906);
    // SubProg add_exports pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 15 op: STARTLINE (58)

    /** scanner.e:646		exports = file_public[from_file]*/
    // SubProg add_exports pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 19 op: RHS_SUBS_CHECK (92)
    DeRef(_exports_25905);
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _exports_25905 = (object)*(((s1_ptr)_2)->base + _from_file_25903);
    Ref(_exports_25905);
    // SubProg add_exports pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg add_exports pc: 25 op: STARTLINE (58)

    /** scanner.e:647		for i = 1 to length(exports) do*/
    // SubProg add_exports pc: 27 op: LENGTH (42)
    if (IS_SEQUENCE(_exports_25905)){
            _14511 = SEQ_PTR(_exports_25905)->length;
    }
    else {
        _14511 = 1;
    }
    // SubProg add_exports pc: 30 op: FOR_I (125)
    {
        object _i_25912;
        _i_25912 = 1;
L1: // addr: 37 pc: 30 sub: 25901 op: 125
        if (_i_25912 > _14511){
            goto L2; // [30] 127
        }
        // SubProg add_exports pc: 37 op: STARTLINE (58)

        /** scanner.e:648			if not find( exports[i], direct ) then*/
        // SubProg add_exports pc: 39 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25905);
        _14512 = (object)*(((s1_ptr)_2)->base + _i_25912);
        // SubProg add_exports pc: 43 op: FIND_FROM (176)
        _14513 = find_from(_14512, _direct_25906, 1);
        _14512 = NOVALUE;
        // SubProg add_exports pc: 48 op: NOT_IFW (108)
        if (_14513 != 0)
        goto L3; // [48] 120
        _14513 = NOVALUE;
        // SubProg add_exports pc: 51 op: STARTLINE (58)

        /** scanner.e:649				if not find( -exports[i], direct ) then*/
        // SubProg add_exports pc: 53 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25905);
        _14515 = (object)*(((s1_ptr)_2)->base + _i_25912);
        // SubProg add_exports pc: 57 op: UMINUS (12)
        if (IS_ATOM_INT(_14515)) {
            if ((uintptr_t)_14515 == (uintptr_t)HIGH_BITS){
                _14516 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14516 = - _14515;
            }
        }
        else {
            _14516 = unary_op(UMINUS, _14515);
        }
        _14515 = NOVALUE;
        // SubProg add_exports pc: 60 op: FIND_FROM (176)
        _14517 = find_from(_14516, _direct_25906, 1);
        DeRef(_14516);
        _14516 = NOVALUE;
        // SubProg add_exports pc: 65 op: NOT_IFW (108)
        if (_14517 != 0)
        goto L4; // [65] 82
        _14517 = NOVALUE;
        // SubProg add_exports pc: 68 op: STARTLINE (58)

        /** scanner.e:650					direct &= -exports[i]*/
        // SubProg add_exports pc: 70 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25905);
        _14519 = (object)*(((s1_ptr)_2)->base + _i_25912);
        // SubProg add_exports pc: 74 op: UMINUS (12)
        if (IS_ATOM_INT(_14519)) {
            if ((uintptr_t)_14519 == (uintptr_t)HIGH_BITS){
                _14520 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14520 = - _14519;
            }
        }
        else {
            _14520 = unary_op(UMINUS, _14519);
        }
        _14519 = NOVALUE;
        // SubProg add_exports pc: 77 op: CONCAT (15)
        if (IS_SEQUENCE(_direct_25906) && IS_ATOM(_14520)) {
            Ref(_14520);
            Append(&_direct_25906, _direct_25906, _14520);
        }
        else if (IS_ATOM(_direct_25906) && IS_SEQUENCE(_14520)) {
        }
        else {
            Concat((object_ptr)&_direct_25906, _direct_25906, _14520);
        }
        DeRef(_14520);
        _14520 = NOVALUE;
        // SubProg add_exports pc: 81 op: NOP1 (159)
L4: // addr: 82 pc: 81 sub: 25901 op: 159
        // SubProg add_exports pc: 82 op: STARTLINE (58)

        /** scanner.e:654				include_matrix[to_file][exports[i]] = or_bits( PUBLIC_INCLUDE, include_matrix[to_file][exports[i]] )*/
        // SubProg add_exports pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 86 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37include_matrix_15412 = MAKE_SEQ(_2);
        }
        _3 = (object)(_to_file_25904 + ((s1_ptr)_2)->base);
        // SubProg add_exports pc: 91 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25905);
        _14524 = (object)*(((s1_ptr)_2)->base + _i_25912);
        // SubProg add_exports pc: 95 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_exports pc: 99 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _14525 = (object)*(((s1_ptr)_2)->base + _to_file_25904);
        // SubProg add_exports pc: 103 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_exports_25905);
        _14526 = (object)*(((s1_ptr)_2)->base + _i_25912);
        // SubProg add_exports pc: 107 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14525);
        if (!IS_ATOM_INT(_14526)){
            _14527 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14526)->dbl));
        }
        else{
            _14527 = (object)*(((s1_ptr)_2)->base + _14526);
        }
        _14525 = NOVALUE;
        // SubProg add_exports pc: 111 op: OR_BITS (24)
        if (IS_ATOM_INT(_14527)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14527;
                 _14528 = MAKE_UINT(tu);
            }
        }
        else {
            _14528 = binary_op(OR_BITS, 4, _14527);
        }
        _14527 = NOVALUE;
        // SubProg add_exports pc: 115 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14524))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14524)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _14524);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14528;
        if( _1 != _14528 ){
            DeRef(_1);
        }
        _14528 = NOVALUE;
        _14522 = NOVALUE;
        // SubProg add_exports pc: 119 op: NOP1 (159)
L3: // addr: 120 pc: 119 sub: 25901 op: 159
        // SubProg add_exports pc: 120 op: STARTLINE (58)

        /** scanner.e:656		end for*/
        // SubProg add_exports pc: 122 op: ENDFOR_INT_UP1 (54)
        _i_25912 = _i_25912 + 1;
        goto L1; // [122] 37
L2: // addr: 127 pc: 122 sub: 25901 op: 54
        ;
    }
    // SubProg add_exports pc: 127 op: STARTLINE (58)

    /** scanner.e:657		file_include[to_file] = direct*/
    // SubProg add_exports pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_exports pc: 131 op: ASSIGN_SUBS (16)
    RefDS(_direct_25906);
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _2 = (object)(((s1_ptr)_2)->base + _to_file_25904);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _direct_25906;
    DeRef(_1);
    // SubProg add_exports pc: 135 op: STARTLINE (58)

    /** scanner.e:658	end procedure*/
    // SubProg add_exports pc: 137 op: RETURNP (29)

// Exiting block BLOCK: add_exports

// block var from_file_25903

// block var to_file_25904

// block var exports_25905
    DeRef(_exports_25905);

// block var direct_25906
    DeRefDS(_direct_25906);
    _14524 = NOVALUE;
    _14526 = NOVALUE;
    return;
    // SubProg add_exports pc: 140 op: BADRETURNF (43)
    ;
}


void _62patch_exports(object _for_file_25939)
{
    object _export_len_25940 = NOVALUE;
// skipping _14540  name type: 0
    object _14539 = NOVALUE; // 25960 14539
    object _14538 = NOVALUE; // 25959 14538
// skipping _14537  name type: 0
    object _14536 = NOVALUE; // 25955 14536
    object _14535 = NOVALUE; // 25953 14535
    object _14534 = NOVALUE; // 25952 14534
    object _14533 = NOVALUE; // 25950 14533
// skipping _14532  name type: 0
    object _14531 = NOVALUE; // 25948 14531
    object _14530 = NOVALUE; // 25947 14530
    object _14529 = NOVALUE; // 25944 14529
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg patch_exports pc: 1 op: INTEGER_CHECK (96)
    // SubProg patch_exports pc: 3 op: STARTLINE (58)

    /** scanner.e:663		for i = 1 to length(file_include) do*/
    // SubProg patch_exports pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg patch_exports pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14529 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14529 = 1;
    }
    // SubProg patch_exports pc: 10 op: FOR_I (125)
    {
        object _i_25942;
        _i_25942 = 1;
L1: // addr: 17 pc: 10 sub: 25937 op: 125
        if (_i_25942 > _14529){
            goto L2; // [10] 99
        }
        // SubProg patch_exports pc: 17 op: STARTLINE (58)

        /** scanner.e:664			if find( for_file, file_include[i] ) or find( -for_file, file_include[i] ) then*/
        // SubProg patch_exports pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_15410);
        _14530 = (object)*(((s1_ptr)_2)->base + _i_25942);
        // SubProg patch_exports pc: 25 op: FIND_FROM (176)
        _14531 = find_from(_for_file_25939, _14530, 1);
        _14530 = NOVALUE;
        // SubProg patch_exports pc: 30 op: SC1_OR_IF (147)
        if (_14531 != 0) {
            goto L3; // [30] 53
        }
        // SubProg patch_exports pc: 34 op: UMINUS (12)
        if ((uintptr_t)_for_file_25939 == (uintptr_t)HIGH_BITS){
            _14533 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _14533 = - _for_file_25939;
        }
        // SubProg patch_exports pc: 37 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 39 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_15410);
        _14534 = (object)*(((s1_ptr)_2)->base + _i_25942);
        // SubProg patch_exports pc: 43 op: FIND_FROM (176)
        _14535 = find_from(_14533, _14534, 1);
        DeRef(_14533);
        _14533 = NOVALUE;
        _14534 = NOVALUE;
        // SubProg patch_exports pc: 48 op: NOP1 (159)
        // SubProg patch_exports pc: 49 op: IF (20)
        if (_14535 == 0)
        {
            _14535 = NOVALUE;
            goto L4; // [49] 92
        }
        else{
            _14535 = NOVALUE;
        }
        // SubProg patch_exports pc: 52 op: NOP1 (159)
L3: // addr: 53 pc: 52 sub: 25937 op: 159
        // SubProg patch_exports pc: 53 op: STARTLINE (58)

        /** scanner.e:665				export_len = length( file_include[i] )*/
        // SubProg patch_exports pc: 55 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 57 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_15410);
        _14536 = (object)*(((s1_ptr)_2)->base + _i_25942);
        // SubProg patch_exports pc: 61 op: LENGTH (42)
        if (IS_SEQUENCE(_14536)){
                _export_len_25940 = SEQ_PTR(_14536)->length;
        }
        else {
            _export_len_25940 = 1;
        }
        _14536 = NOVALUE;
        // SubProg patch_exports pc: 64 op: STARTLINE (58)

        /** scanner.e:666				add_exports( for_file, i )*/
        // SubProg patch_exports pc: 66 op: PROC (27)
        _62add_exports(_for_file_25939, _i_25942);
        // SubProg patch_exports pc: 70 op: STARTLINE (58)

        /** scanner.e:667				if length( file_include[i] ) != export_len then*/
        // SubProg patch_exports pc: 72 op: GLOBAL_INIT_CHECK (109)
        // SubProg patch_exports pc: 74 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_15410);
        _14538 = (object)*(((s1_ptr)_2)->base + _i_25942);
        // SubProg patch_exports pc: 78 op: LENGTH (42)
        if (IS_SEQUENCE(_14538)){
                _14539 = SEQ_PTR(_14538)->length;
        }
        else {
            _14539 = 1;
        }
        _14538 = NOVALUE;
        // SubProg patch_exports pc: 81 op: NOTEQ_IFW_I (122)
        if (_14539 == _export_len_25940)
        goto L5; // [81] 91
        // SubProg patch_exports pc: 85 op: STARTLINE (58)

        /** scanner.e:669					patch_exports( i )*/
        // SubProg patch_exports pc: 87 op: PROC (27)
        _62patch_exports(_i_25942);
        // SubProg patch_exports pc: 90 op: NOP1 (159)
L5: // addr: 91 pc: 90 sub: 25937 op: 159
        // SubProg patch_exports pc: 91 op: NOP1 (159)
L4: // addr: 92 pc: 91 sub: 25937 op: 159
        // SubProg patch_exports pc: 92 op: STARTLINE (58)

        /** scanner.e:672		end for*/
        // SubProg patch_exports pc: 94 op: ENDFOR_INT_UP1 (54)
        _i_25942 = _i_25942 + 1;
        goto L1; // [94] 17
L2: // addr: 99 pc: 94 sub: 25937 op: 54
        ;
    }
    // SubProg patch_exports pc: 99 op: STARTLINE (58)

    /** scanner.e:673	end procedure*/
    // SubProg patch_exports pc: 101 op: RETURNP (29)

// Exiting block BLOCK: patch_exports

// block var for_file_25939

// block var export_len_25940
    _14538 = NOVALUE;
    _14536 = NOVALUE;
    return;
    // SubProg patch_exports pc: 104 op: BADRETURNF (43)
    ;
}


void _62update_include_matrix(object _included_file_25964, object _from_file_25965)
{
    object _add_public_25975 = NOVALUE;
    object _px_25993 = NOVALUE;
    object _indirect_26052 = NOVALUE;
    object _mask_26055 = NOVALUE;
    object _ix_26066 = NOVALUE;
    object _indirect_file_26070 = NOVALUE;
// skipping _14617  name type: 0
// skipping _14616  name type: 0
    object _14615 = NOVALUE; // 26093 14615
    object _14614 = NOVALUE; // 26092 14614
// skipping _14613  name type: 0
    object _14612 = NOVALUE; // 26089 14612
    object _14611 = NOVALUE; // 26088 14611
    object _14610 = NOVALUE; // 26087 14610
    object _14609 = NOVALUE; // 26084 14609
    object _14608 = NOVALUE; // 26083 14608
    object _14607 = NOVALUE; // 26079 14607
    object _14606 = NOVALUE; // 26078 14606
    object _14605 = NOVALUE; // 26075 14605
    object _14604 = NOVALUE; // 26074 14604
// skipping _14603  name type: 0
// skipping _14602  name type: 0
    object _14601 = NOVALUE; // 26068 14601
// skipping _14600  name type: 0
    object _14599 = NOVALUE; // 26064 14599
    object _14598 = NOVALUE; // 26062 14598
    object _14597 = NOVALUE; // 26061 14597
// skipping _14596  name type: 0
    object _14595 = NOVALUE; // 26057 14595
// skipping _14594  name type: 0
    object _14593 = NOVALUE; // 26051 14593
    object _14592 = NOVALUE; // 26050 14592
// skipping _14591  name type: 0
    object _14590 = NOVALUE; // 26046 14590
    object _14589 = NOVALUE; // 26045 14589
    object _14588 = NOVALUE; // 26044 14588
    object _14587 = NOVALUE; // 26043 14587
    object _14586 = NOVALUE; // 26042 14586
// skipping _14585  name type: 0
    object _14584 = NOVALUE; // 26037 14584
    object _14583 = NOVALUE; // 26036 14583
    object _14582 = NOVALUE; // 26035 14582
    object _14581 = NOVALUE; // 26032 14581
    object _14580 = NOVALUE; // 26031 14580
    object _14579 = NOVALUE; // 26030 14579
// skipping _14578  name type: 0
    object _14577 = NOVALUE; // 26025 14577
    object _14576 = NOVALUE; // 26024 14576
    object _14575 = NOVALUE; // 26023 14575
// skipping _14574  name type: 0
    object _14573 = NOVALUE; // 26020 14573
    object _14572 = NOVALUE; // 26019 14572
    object _14571 = NOVALUE; // 26018 14571
    object _14570 = NOVALUE; // 26017 14570
    object _14569 = NOVALUE; // 26014 14569
    object _14568 = NOVALUE; // 26013 14568
    object _14567 = NOVALUE; // 26012 14567
    object _14566 = NOVALUE; // 26008 14566
    object _14565 = NOVALUE; // 26007 14565
    object _14564 = NOVALUE; // 26006 14564
    object _14563 = NOVALUE; // 26005 14563
// skipping _14562  name type: 0
    object _14561 = NOVALUE; // 26001 14561
    object _14560 = NOVALUE; // 26000 14560
// skipping _14559  name type: 0
    object _14558 = NOVALUE; // 25997 14558
// skipping _14557  name type: 0
    object _14556 = NOVALUE; // 25994 14556
// skipping _14555  name type: 0
    object _14554 = NOVALUE; // 25990 14554
    object _14553 = NOVALUE; // 25989 14553
    object _14552 = NOVALUE; // 25988 14552
    object _14551 = NOVALUE; // 25987 14551
// skipping _14550  name type: 0
    object _14549 = NOVALUE; // 25983 14549
    object _14548 = NOVALUE; // 25982 14548
    object _14547 = NOVALUE; // 25980 14547
// skipping _14546  name type: 0
    object _14545 = NOVALUE; // 25973 14545
    object _14544 = NOVALUE; // 25972 14544
    object _14543 = NOVALUE; // 25971 14543
// skipping _14542  name type: 0
    object _14541 = NOVALUE; // 25967 14541
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg update_include_matrix pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 3 op: INTEGER_CHECK (96)
    // SubProg update_include_matrix pc: 5 op: STARTLINE (58)

    /** scanner.e:684		include_matrix[from_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[from_file][included_file] )*/
    // SubProg update_include_matrix pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 9 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    _3 = (object)(_from_file_25965 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14543 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    // SubProg update_include_matrix pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14543);
    _14544 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
    _14543 = NOVALUE;
    // SubProg update_include_matrix pc: 26 op: OR_BITS (24)
    if (IS_ATOM_INT(_14544)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14544;
             _14545 = MAKE_UINT(tu);
        }
    }
    else {
        _14545 = binary_op(OR_BITS, 2, _14544);
    }
    _14544 = NOVALUE;
    // SubProg update_include_matrix pc: 30 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25964);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14545;
    if( _1 != _14545 ){
        DeRef(_1);
    }
    _14545 = NOVALUE;
    _14541 = NOVALUE;
    // SubProg update_include_matrix pc: 34 op: STARTLINE (58)

    /** scanner.e:686		if public_include then*/
    // SubProg update_include_matrix pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 38 op: IF (20)
    if (_62public_include_25182 == 0)
    {
        goto L1; // [38] 339
    }
    else{
    }
    // SubProg update_include_matrix pc: 41 op: STARTLINE (58)

    /** scanner.e:689			sequence add_public = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_25975);
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _add_public_25975 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    Ref(_add_public_25975);
    // SubProg update_include_matrix pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 51 op: STARTLINE (58)

    /** scanner.e:690			for i = 1 to length( add_public ) do*/
    // SubProg update_include_matrix pc: 53 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25975)){
            _14547 = SEQ_PTR(_add_public_25975)->length;
    }
    else {
        _14547 = 1;
    }
    // SubProg update_include_matrix pc: 56 op: FOR_I (125)
    {
        object _i_25979;
        _i_25979 = 1;
L2: // addr: 63 pc: 56 sub: 25962 op: 125
        if (_i_25979 > _14547){
            goto L3; // [56] 107
        }
        // SubProg update_include_matrix pc: 63 op: STARTLINE (58)

        /** scanner.e:692				include_matrix[add_public[i]][included_file] =*/
        // SubProg update_include_matrix pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 67 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14548 = (object)*(((s1_ptr)_2)->base + _i_25979);
        // SubProg update_include_matrix pc: 71 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37include_matrix_15412 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14548))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14548)->dbl));
        else
        _3 = (object)(_14548 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 76 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 78 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14551 = (object)*(((s1_ptr)_2)->base + _i_25979);
        // SubProg update_include_matrix pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!IS_ATOM_INT(_14551)){
            _14552 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14551)->dbl));
        }
        else{
            _14552 = (object)*(((s1_ptr)_2)->base + _14551);
        }
        // SubProg update_include_matrix pc: 88 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14552);
        _14553 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
        _14552 = NOVALUE;
        // SubProg update_include_matrix pc: 92 op: OR_BITS (24)
        if (IS_ATOM_INT(_14553)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14553;
                 _14554 = MAKE_UINT(tu);
            }
        }
        else {
            _14554 = binary_op(OR_BITS, 4, _14553);
        }
        _14553 = NOVALUE;
        // SubProg update_include_matrix pc: 96 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25964);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14554;
        if( _1 != _14554 ){
            DeRef(_1);
        }
        _14554 = NOVALUE;
        _14549 = NOVALUE;
        // SubProg update_include_matrix pc: 100 op: STARTLINE (58)

        /** scanner.e:695			end for*/
        // SubProg update_include_matrix pc: 102 op: ENDFOR_INT_UP1 (54)
        _i_25979 = _i_25979 + 1;
        goto L2; // [102] 63
L3: // addr: 107 pc: 102 sub: 25962 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 107 op: STARTLINE (58)

    /** scanner.e:698			add_public = file_public_by[from_file]*/
    // SubProg update_include_matrix pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 111 op: RHS_SUBS_CHECK (92)
    DeRef(_add_public_25975);
    _2 = (object)SEQ_PTR(_37file_public_by_15420);
    _add_public_25975 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    Ref(_add_public_25975);
    // SubProg update_include_matrix pc: 115 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 117 op: STARTLINE (58)

    /** scanner.e:699			integer px = length( add_public ) + 1*/
    // SubProg update_include_matrix pc: 119 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25975)){
            _14556 = SEQ_PTR(_add_public_25975)->length;
    }
    else {
        _14556 = 1;
    }
    // SubProg update_include_matrix pc: 122 op: PLUS1_I (117)
    _px_25993 = _14556 + 1;
    _14556 = NOVALUE;
    // SubProg update_include_matrix pc: 126 op: STARTLINE (58)

    /** scanner.e:700			while px <= length( add_public ) do*/
    // SubProg update_include_matrix pc: 128 op: NOP2 (110)
    // SubProg update_include_matrix pc: 130 op: NOPWHILE (158)
L4: // addr: 131 pc: 130 sub: 25962 op: 158
    // SubProg update_include_matrix pc: 131 op: LENGTH (42)
    if (IS_SEQUENCE(_add_public_25975)){
            _14558 = SEQ_PTR(_add_public_25975)->length;
    }
    else {
        _14558 = 1;
    }
    // SubProg update_include_matrix pc: 134 op: LESSEQ_IFW_I (123)
    if (_px_25993 > _14558)
    goto L5; // [134] 338
    // SubProg update_include_matrix pc: 138 op: STARTLINE (58)

    /** scanner.e:701				include_matrix[add_public[px]][included_file] =*/
    // SubProg update_include_matrix pc: 140 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 142 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25975);
    _14560 = (object)*(((s1_ptr)_2)->base + _px_25993);
    // SubProg update_include_matrix pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14560))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14560)->dbl));
    else
    _3 = (object)(_14560 + ((s1_ptr)_2)->base);
    // SubProg update_include_matrix pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 153 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 155 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25975);
    _14563 = (object)*(((s1_ptr)_2)->base + _px_25993);
    // SubProg update_include_matrix pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!IS_ATOM_INT(_14563)){
        _14564 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14563)->dbl));
    }
    else{
        _14564 = (object)*(((s1_ptr)_2)->base + _14563);
    }
    // SubProg update_include_matrix pc: 163 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14564);
    _14565 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
    _14564 = NOVALUE;
    // SubProg update_include_matrix pc: 167 op: OR_BITS (24)
    if (IS_ATOM_INT(_14565)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14565;
             _14566 = MAKE_UINT(tu);
        }
    }
    else {
        _14566 = binary_op(OR_BITS, 4, _14565);
    }
    _14565 = NOVALUE;
    // SubProg update_include_matrix pc: 171 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25964);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14566;
    if( _1 != _14566 ){
        DeRef(_1);
    }
    _14566 = NOVALUE;
    _14561 = NOVALUE;
    // SubProg update_include_matrix pc: 175 op: STARTLINE (58)

    /** scanner.e:704				for i = 1 to length( file_public_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 179 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25975);
    _14567 = (object)*(((s1_ptr)_2)->base + _px_25993);
    // SubProg update_include_matrix pc: 183 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_public_by_15420);
    if (!IS_ATOM_INT(_14567)){
        _14568 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14567)->dbl));
    }
    else{
        _14568 = (object)*(((s1_ptr)_2)->base + _14567);
    }
    // SubProg update_include_matrix pc: 187 op: LENGTH (42)
    if (IS_SEQUENCE(_14568)){
            _14569 = SEQ_PTR(_14568)->length;
    }
    else {
        _14569 = 1;
    }
    _14568 = NOVALUE;
    // SubProg update_include_matrix pc: 190 op: FOR_I (125)
    {
        object _i_26010;
        _i_26010 = 1;
L6: // addr: 197 pc: 190 sub: 25962 op: 125
        if (_i_26010 > _14569){
            goto L7; // [190] 249
        }
        // SubProg update_include_matrix pc: 197 op: STARTLINE (58)

        /** scanner.e:705					if not find( file_public[add_public[px]][i], add_public ) then*/
        // SubProg update_include_matrix pc: 199 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 201 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14570 = (object)*(((s1_ptr)_2)->base + _px_25993);
        // SubProg update_include_matrix pc: 205 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_public_15416);
        if (!IS_ATOM_INT(_14570)){
            _14571 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14570)->dbl));
        }
        else{
            _14571 = (object)*(((s1_ptr)_2)->base + _14570);
        }
        // SubProg update_include_matrix pc: 209 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14571);
        _14572 = (object)*(((s1_ptr)_2)->base + _i_26010);
        _14571 = NOVALUE;
        // SubProg update_include_matrix pc: 213 op: FIND_FROM (176)
        _14573 = find_from(_14572, _add_public_25975, 1);
        _14572 = NOVALUE;
        // SubProg update_include_matrix pc: 218 op: NOT_IFW (108)
        if (_14573 != 0)
        goto L8; // [218] 242
        _14573 = NOVALUE;
        // SubProg update_include_matrix pc: 221 op: STARTLINE (58)

        /** scanner.e:706						add_public &= file_public[add_public[px]][i]*/
        // SubProg update_include_matrix pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 225 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14575 = (object)*(((s1_ptr)_2)->base + _px_25993);
        // SubProg update_include_matrix pc: 229 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_public_15416);
        if (!IS_ATOM_INT(_14575)){
            _14576 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14575)->dbl));
        }
        else{
            _14576 = (object)*(((s1_ptr)_2)->base + _14575);
        }
        // SubProg update_include_matrix pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14576);
        _14577 = (object)*(((s1_ptr)_2)->base + _i_26010);
        _14576 = NOVALUE;
        // SubProg update_include_matrix pc: 237 op: CONCAT (15)
        if (IS_SEQUENCE(_add_public_25975) && IS_ATOM(_14577)) {
            Ref(_14577);
            Append(&_add_public_25975, _add_public_25975, _14577);
        }
        else if (IS_ATOM(_add_public_25975) && IS_SEQUENCE(_14577)) {
        }
        else {
            Concat((object_ptr)&_add_public_25975, _add_public_25975, _14577);
        }
        _14577 = NOVALUE;
        // SubProg update_include_matrix pc: 241 op: NOP1 (159)
L8: // addr: 242 pc: 241 sub: 25962 op: 159
        // SubProg update_include_matrix pc: 242 op: STARTLINE (58)

        /** scanner.e:708				end for*/
        // SubProg update_include_matrix pc: 244 op: ENDFOR_INT_UP1 (54)
        _i_26010 = _i_26010 + 1;
        goto L6; // [244] 197
L7: // addr: 249 pc: 244 sub: 25962 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 249 op: STARTLINE (58)

    /** scanner.e:710				for i = 1 to length( file_include_by[add_public[px]] ) do*/
    // SubProg update_include_matrix pc: 251 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 253 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_add_public_25975);
    _14579 = (object)*(((s1_ptr)_2)->base + _px_25993);
    // SubProg update_include_matrix pc: 257 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    if (!IS_ATOM_INT(_14579)){
        _14580 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14579)->dbl));
    }
    else{
        _14580 = (object)*(((s1_ptr)_2)->base + _14579);
    }
    // SubProg update_include_matrix pc: 261 op: LENGTH (42)
    if (IS_SEQUENCE(_14580)){
            _14581 = SEQ_PTR(_14580)->length;
    }
    else {
        _14581 = 1;
    }
    _14580 = NOVALUE;
    // SubProg update_include_matrix pc: 264 op: FOR_I (125)
    {
        object _i_26028;
        _i_26028 = 1;
L9: // addr: 271 pc: 264 sub: 25962 op: 125
        if (_i_26028 > _14581){
            goto LA; // [264] 327
        }
        // SubProg update_include_matrix pc: 271 op: STARTLINE (58)

        /** scanner.e:711					include_matrix[file_include_by[add_public[px]]][included_file] =*/
        // SubProg update_include_matrix pc: 273 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 275 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 277 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14582 = (object)*(((s1_ptr)_2)->base + _px_25993);
        // SubProg update_include_matrix pc: 281 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_by_15418);
        if (!IS_ATOM_INT(_14582)){
            _14583 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14582)->dbl));
        }
        else{
            _14583 = (object)*(((s1_ptr)_2)->base + _14582);
        }
        // SubProg update_include_matrix pc: 285 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37include_matrix_15412 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14583))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14583)->dbl));
        else
        _3 = (object)(_14583 + ((s1_ptr)_2)->base);
        // SubProg update_include_matrix pc: 290 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 294 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 296 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_add_public_25975);
        _14586 = (object)*(((s1_ptr)_2)->base + _px_25993);
        // SubProg update_include_matrix pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_by_15418);
        if (!IS_ATOM_INT(_14586)){
            _14587 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14586)->dbl));
        }
        else{
            _14587 = (object)*(((s1_ptr)_2)->base + _14586);
        }
        // SubProg update_include_matrix pc: 304 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!IS_ATOM_INT(_14587)){
            _14588 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14587)->dbl));
        }
        else{
            _14588 = (object)*(((s1_ptr)_2)->base + _14587);
        }
        // SubProg update_include_matrix pc: 308 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14588);
        _14589 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
        _14588 = NOVALUE;
        // SubProg update_include_matrix pc: 312 op: OR_BITS (24)
        if (IS_ATOM_INT(_14589)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14589;
                 _14590 = MAKE_UINT(tu);
            }
        }
        else {
            _14590 = binary_op(OR_BITS, 4, _14589);
        }
        _14589 = NOVALUE;
        // SubProg update_include_matrix pc: 316 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25964);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14590;
        if( _1 != _14590 ){
            DeRef(_1);
        }
        _14590 = NOVALUE;
        _14584 = NOVALUE;
        // SubProg update_include_matrix pc: 320 op: STARTLINE (58)

        /** scanner.e:713				end for*/
        // SubProg update_include_matrix pc: 322 op: ENDFOR_INT_UP1 (54)
        _i_26028 = _i_26028 + 1;
        goto L9; // [322] 271
LA: // addr: 327 pc: 322 sub: 25962 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 327 op: STARTLINE (58)

    /** scanner.e:715				px += 1*/
    // SubProg update_include_matrix pc: 329 op: PLUS1_I (117)
    _px_25993 = _px_25993 + 1;
    // SubProg update_include_matrix pc: 333 op: STARTLINE (58)

    /** scanner.e:716			end while*/
    // SubProg update_include_matrix pc: 335 op: ENDWHILE (22)
    goto L4; // [335] 131
    // SubProg update_include_matrix pc: 337 op: NOP1 (159)
L5: // addr: 338 pc: 337 sub: 25962 op: 159
    // SubProg update_include_matrix pc: 338 op: NOP1 (159)
L1: // addr: 339 pc: 338 sub: 25962 op: 159
    // SubProg update_include_matrix pc: 339 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var add_public_25975
    DeRef(_add_public_25975);
    _add_public_25975 = NOVALUE;

// block var px_25993
    // SubProg update_include_matrix pc: 341 op: STARTLINE (58)

    /** scanner.e:721		if indirect_include[from_file][included_file] then*/
    // SubProg update_include_matrix pc: 343 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 345 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37indirect_include_15414);
    _14592 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    // SubProg update_include_matrix pc: 349 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14592);
    _14593 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
    _14592 = NOVALUE;
    // SubProg update_include_matrix pc: 353 op: IF (20)
    if (_14593 == 0) {
        _14593 = NOVALUE;
        goto LB; // [353] 545
    }
    else {
        if (!IS_ATOM_INT(_14593) && DBL_PTR(_14593)->dbl == 0.0){
            _14593 = NOVALUE;
            goto LB; // [353] 545
        }
        _14593 = NOVALUE;
    }
    _14593 = NOVALUE;
    // SubProg update_include_matrix pc: 356 op: STARTLINE (58)

    /** scanner.e:723			sequence indirect = file_include_by[from_file]*/
    // SubProg update_include_matrix pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 360 op: RHS_SUBS_CHECK (92)
    DeRef(_indirect_26052);
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _indirect_26052 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    Ref(_indirect_26052);
    // SubProg update_include_matrix pc: 364 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 366 op: STARTLINE (58)

    /** scanner.e:725			sequence mask = include_matrix[included_file] != 0*/
    // SubProg update_include_matrix pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14595 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
    // SubProg update_include_matrix pc: 374 op: NOTEQ (4)
    DeRef(_mask_26055);
    if (IS_ATOM_INT(_14595)) {
        _mask_26055 = (_14595 != 0);
    }
    else {
        _mask_26055 = binary_op(NOTEQ, _14595, 0);
    }
    _14595 = NOVALUE;
    // SubProg update_include_matrix pc: 378 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 380 op: STARTLINE (58)

    /** scanner.e:726			include_matrix[from_file] = or_bits( include_matrix[from_file], mask )*/
    // SubProg update_include_matrix pc: 382 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 384 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 386 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14597 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    // SubProg update_include_matrix pc: 390 op: OR_BITS (24)
    _14598 = binary_op(OR_BITS, _14597, _mask_26055);
    _14597 = NOVALUE;
    // SubProg update_include_matrix pc: 394 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _2 = (object)(((s1_ptr)_2)->base + _from_file_25965);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14598;
    if( _1 != _14598 ){
        DeRef(_1);
    }
    _14598 = NOVALUE;
    // SubProg update_include_matrix pc: 398 op: STARTLINE (58)

    /** scanner.e:727			mask = include_matrix[from_file] != 0*/
    // SubProg update_include_matrix pc: 400 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 402 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14599 = (object)*(((s1_ptr)_2)->base + _from_file_25965);
    // SubProg update_include_matrix pc: 406 op: NOTEQ (4)
    DeRefDS(_mask_26055);
    if (IS_ATOM_INT(_14599)) {
        _mask_26055 = (_14599 != 0);
    }
    else {
        _mask_26055 = binary_op(NOTEQ, _14599, 0);
    }
    _14599 = NOVALUE;
    // SubProg update_include_matrix pc: 410 op: SEQUENCE_CHECK (97)
    // SubProg update_include_matrix pc: 412 op: STARTLINE (58)

    /** scanner.e:728			integer ix = 1*/
    // SubProg update_include_matrix pc: 414 op: ASSIGN_I (113)
    _ix_26066 = 1;
    // SubProg update_include_matrix pc: 417 op: STARTLINE (58)

    /** scanner.e:729			while ix <= length(indirect) do*/
    // SubProg update_include_matrix pc: 419 op: NOP2 (110)
    // SubProg update_include_matrix pc: 421 op: NOPWHILE (158)
LC: // addr: 422 pc: 421 sub: 25962 op: 158
    // SubProg update_include_matrix pc: 422 op: LENGTH (42)
    if (IS_SEQUENCE(_indirect_26052)){
            _14601 = SEQ_PTR(_indirect_26052)->length;
    }
    else {
        _14601 = 1;
    }
    // SubProg update_include_matrix pc: 425 op: LESSEQ_IFW_I (123)
    if (_ix_26066 > _14601)
    goto LD; // [425] 544
    // SubProg update_include_matrix pc: 429 op: STARTLINE (58)

    /** scanner.e:730				integer indirect_file = indirect[ix]*/
    // SubProg update_include_matrix pc: 431 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_indirect_26052);
    _indirect_file_26070 = (object)*(((s1_ptr)_2)->base + _ix_26066);
    if (!IS_ATOM_INT(_indirect_file_26070))
    _indirect_file_26070 = (object)DBL_PTR(_indirect_file_26070)->dbl;
    // SubProg update_include_matrix pc: 435 op: STARTLINE (58)

    /** scanner.e:731				if indirect_include[indirect_file][included_file] then*/
    // SubProg update_include_matrix pc: 437 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 439 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37indirect_include_15414);
    _14604 = (object)*(((s1_ptr)_2)->base + _indirect_file_26070);
    // SubProg update_include_matrix pc: 443 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14604);
    _14605 = (object)*(((s1_ptr)_2)->base + _included_file_25964);
    _14604 = NOVALUE;
    // SubProg update_include_matrix pc: 447 op: IF (20)
    if (_14605 == 0) {
        _14605 = NOVALUE;
        goto LE; // [447] 531
    }
    else {
        if (!IS_ATOM_INT(_14605) && DBL_PTR(_14605)->dbl == 0.0){
            _14605 = NOVALUE;
            goto LE; // [447] 531
        }
        _14605 = NOVALUE;
    }
    _14605 = NOVALUE;
    // SubProg update_include_matrix pc: 450 op: STARTLINE (58)

    /** scanner.e:732					include_matrix[indirect_file] =*/
    // SubProg update_include_matrix pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 454 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 456 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14606 = (object)*(((s1_ptr)_2)->base + _indirect_file_26070);
    // SubProg update_include_matrix pc: 460 op: OR_BITS (24)
    _14607 = binary_op(OR_BITS, _mask_26055, _14606);
    _14606 = NOVALUE;
    // SubProg update_include_matrix pc: 464 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _2 = (object)(((s1_ptr)_2)->base + _indirect_file_26070);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14607;
    if( _1 != _14607 ){
        DeRef(_1);
    }
    _14607 = NOVALUE;
    // SubProg update_include_matrix pc: 468 op: STARTLINE (58)

    /** scanner.e:734					for i = 1 to length( file_include_by[indirect_file] ) do*/
    // SubProg update_include_matrix pc: 470 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 472 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _14608 = (object)*(((s1_ptr)_2)->base + _indirect_file_26070);
    // SubProg update_include_matrix pc: 476 op: LENGTH (42)
    if (IS_SEQUENCE(_14608)){
            _14609 = SEQ_PTR(_14608)->length;
    }
    else {
        _14609 = 1;
    }
    _14608 = NOVALUE;
    // SubProg update_include_matrix pc: 479 op: FOR_I (125)
    {
        object _i_26081;
        _i_26081 = 1;
LF: // addr: 486 pc: 479 sub: 25962 op: 125
        if (_i_26081 > _14609){
            goto L10; // [479] 530
        }
        // SubProg update_include_matrix pc: 486 op: STARTLINE (58)

        /** scanner.e:736						if not find( file_include_by[indirect_file][i], indirect ) then*/
        // SubProg update_include_matrix pc: 488 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 490 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_by_15418);
        _14610 = (object)*(((s1_ptr)_2)->base + _indirect_file_26070);
        // SubProg update_include_matrix pc: 494 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14610);
        _14611 = (object)*(((s1_ptr)_2)->base + _i_26081);
        _14610 = NOVALUE;
        // SubProg update_include_matrix pc: 498 op: FIND_FROM (176)
        _14612 = find_from(_14611, _indirect_26052, 1);
        _14611 = NOVALUE;
        // SubProg update_include_matrix pc: 503 op: NOT_IFW (108)
        if (_14612 != 0)
        goto L11; // [503] 523
        _14612 = NOVALUE;
        // SubProg update_include_matrix pc: 506 op: STARTLINE (58)

        /** scanner.e:737							indirect &= file_include_by[indirect_file][i]*/
        // SubProg update_include_matrix pc: 508 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_matrix pc: 510 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_by_15418);
        _14614 = (object)*(((s1_ptr)_2)->base + _indirect_file_26070);
        // SubProg update_include_matrix pc: 514 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14614);
        _14615 = (object)*(((s1_ptr)_2)->base + _i_26081);
        _14614 = NOVALUE;
        // SubProg update_include_matrix pc: 518 op: CONCAT (15)
        if (IS_SEQUENCE(_indirect_26052) && IS_ATOM(_14615)) {
            Ref(_14615);
            Append(&_indirect_26052, _indirect_26052, _14615);
        }
        else if (IS_ATOM(_indirect_26052) && IS_SEQUENCE(_14615)) {
        }
        else {
            Concat((object_ptr)&_indirect_26052, _indirect_26052, _14615);
        }
        _14615 = NOVALUE;
        // SubProg update_include_matrix pc: 522 op: NOP1 (159)
L11: // addr: 523 pc: 522 sub: 25962 op: 159
        // SubProg update_include_matrix pc: 523 op: STARTLINE (58)

        /** scanner.e:740					end for*/
        // SubProg update_include_matrix pc: 525 op: ENDFOR_INT_UP1 (54)
        _i_26081 = _i_26081 + 1;
        goto LF; // [525] 486
L10: // addr: 530 pc: 525 sub: 25962 op: 54
        ;
    }
    // SubProg update_include_matrix pc: 530 op: NOP1 (159)
LE: // addr: 531 pc: 530 sub: 25962 op: 159
    // SubProg update_include_matrix pc: 531 op: STARTLINE (58)

    /** scanner.e:742				ix += 1*/
    // SubProg update_include_matrix pc: 533 op: PLUS1_I (117)
    _ix_26066 = _ix_26066 + 1;
    // SubProg update_include_matrix pc: 537 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var indirect_file_26070
    // SubProg update_include_matrix pc: 539 op: STARTLINE (58)

    /** scanner.e:743			end while*/
    // SubProg update_include_matrix pc: 541 op: ENDWHILE (22)
    goto LC; // [541] 422
    // SubProg update_include_matrix pc: 543 op: NOP1 (159)
LD: // addr: 544 pc: 543 sub: 25962 op: 159
    // SubProg update_include_matrix pc: 544 op: NOP1 (159)
LB: // addr: 545 pc: 544 sub: 25962 op: 159
    // SubProg update_include_matrix pc: 545 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var indirect_26052
    DeRef(_indirect_26052);
    _indirect_26052 = NOVALUE;

// block var mask_26055
    DeRef(_mask_26055);
    _mask_26055 = NOVALUE;

// block var ix_26066
    // SubProg update_include_matrix pc: 547 op: STARTLINE (58)

    /** scanner.e:746		public_include = FALSE*/
    // SubProg update_include_matrix pc: 549 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_matrix pc: 551 op: ASSIGN (18)
    _62public_include_25182 = _13FALSE_450;
    // SubProg update_include_matrix pc: 554 op: STARTLINE (58)

    /** scanner.e:747	end procedure*/
    // SubProg update_include_matrix pc: 556 op: RETURNP (29)

// Exiting block BLOCK: update_include_matrix

// block var included_file_25964

// block var from_file_25965
    _14548 = NOVALUE;
    _14586 = NOVALUE;
    _14575 = NOVALUE;
    _14608 = NOVALUE;
    _14587 = NOVALUE;
    _14560 = NOVALUE;
    _14567 = NOVALUE;
    _14580 = NOVALUE;
    _14568 = NOVALUE;
    _14563 = NOVALUE;
    _14551 = NOVALUE;
    _14579 = NOVALUE;
    _14582 = NOVALUE;
    _14570 = NOVALUE;
    _14583 = NOVALUE;
    return;
    // SubProg update_include_matrix pc: 559 op: BADRETURNF (43)
    ;
}


void _62add_include_by(object _by_file_26099, object _included_file_26100, object _is_public_26101)
{
    object _14662 = NOVALUE; // 26179 14662
    object _14661 = NOVALUE; // 26178 14661
    object _14660 = NOVALUE; // 26177 14660
// skipping _14659  name type: 0
    object _14658 = NOVALUE; // 26173 14658
    object _14657 = NOVALUE; // 26170 14657
    object _14656 = NOVALUE; // 26169 14656
    object _14655 = NOVALUE; // 26168 14655
// skipping _14654  name type: 0
    object _14653 = NOVALUE; // 26164 14653
    object _14652 = NOVALUE; // 26162 14652
    object _14651 = NOVALUE; // 26161 14651
    object _14650 = NOVALUE; // 26160 14650
    object _14649 = NOVALUE; // 26156 14649
    object _14648 = NOVALUE; // 26155 14648
    object _14647 = NOVALUE; // 26151 14647
    object _14646 = NOVALUE; // 26150 14646
// skipping _14645  name type: 0
    object _14644 = NOVALUE; // 26147 14644
    object _14643 = NOVALUE; // 26146 14643
    object _14642 = NOVALUE; // 26143 14642
    object _14641 = NOVALUE; // 26142 14641
// skipping _14640  name type: 0
    object _14639 = NOVALUE; // 26139 14639
    object _14638 = NOVALUE; // 26138 14638
    object _14637 = NOVALUE; // 26134 14637
    object _14636 = NOVALUE; // 26133 14636
// skipping _14635  name type: 0
    object _14634 = NOVALUE; // 26130 14634
    object _14633 = NOVALUE; // 26129 14633
    object _14632 = NOVALUE; // 26126 14632
    object _14631 = NOVALUE; // 26125 14631
// skipping _14630  name type: 0
    object _14629 = NOVALUE; // 26122 14629
    object _14628 = NOVALUE; // 26121 14628
    object _14627 = NOVALUE; // 26118 14627
    object _14626 = NOVALUE; // 26117 14626
    object _14625 = NOVALUE; // 26116 14625
// skipping _14624  name type: 0
    object _14623 = NOVALUE; // 26112 14623
    object _14622 = NOVALUE; // 26109 14622
    object _14621 = NOVALUE; // 26108 14621
    object _14620 = NOVALUE; // 26107 14620
// skipping _14619  name type: 0
    object _14618 = NOVALUE; // 26103 14618
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_include_by pc: 1 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 3 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 5 op: INTEGER_CHECK (96)
    // SubProg add_include_by pc: 7 op: STARTLINE (58)

    /** scanner.e:750		include_matrix[by_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 9 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 11 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26099 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 16 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14620 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14620);
    _14621 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    _14620 = NOVALUE;
    // SubProg add_include_by pc: 28 op: OR_BITS (24)
    if (IS_ATOM_INT(_14621)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14621;
             _14622 = MAKE_UINT(tu);
        }
    }
    else {
        _14622 = binary_op(OR_BITS, 2, _14621);
    }
    _14621 = NOVALUE;
    // SubProg add_include_by pc: 32 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26100);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14622;
    if( _1 != _14622 ){
        DeRef(_1);
    }
    _14622 = NOVALUE;
    _14618 = NOVALUE;
    // SubProg add_include_by pc: 36 op: STARTLINE (58)

    /** scanner.e:751		if is_public then*/
    // SubProg add_include_by pc: 38 op: IF (20)
    if (_is_public_26101 == 0)
    {
        goto L1; // [38] 71
    }
    else{
    }
    // SubProg add_include_by pc: 41 op: STARTLINE (58)

    /** scanner.e:752			include_matrix[by_file][included_file] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][included_file] )*/
    // SubProg add_include_by pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 45 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26099 + ((s1_ptr)_2)->base);
    // SubProg add_include_by pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14625 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_14625);
    _14626 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    _14625 = NOVALUE;
    // SubProg add_include_by pc: 62 op: OR_BITS (24)
    if (IS_ATOM_INT(_14626)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14626;
             _14627 = MAKE_UINT(tu);
        }
    }
    else {
        _14627 = binary_op(OR_BITS, 4, _14626);
    }
    _14626 = NOVALUE;
    // SubProg add_include_by pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26100);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14627;
    if( _1 != _14627 ){
        DeRef(_1);
    }
    _14627 = NOVALUE;
    _14623 = NOVALUE;
    // SubProg add_include_by pc: 70 op: NOP1 (159)
L1: // addr: 71 pc: 70 sub: 26097 op: 159
    // SubProg add_include_by pc: 71 op: STARTLINE (58)

    /** scanner.e:754		if not find( by_file, file_include_by[included_file] ) then*/
    // SubProg add_include_by pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 75 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _14628 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    // SubProg add_include_by pc: 79 op: FIND_FROM (176)
    _14629 = find_from(_by_file_26099, _14628, 1);
    _14628 = NOVALUE;
    // SubProg add_include_by pc: 84 op: NOT_IFW (108)
    if (_14629 != 0)
    goto L2; // [84] 104
    _14629 = NOVALUE;
    // SubProg add_include_by pc: 87 op: STARTLINE (58)

    /** scanner.e:755			file_include_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 91 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _14631 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    // SubProg add_include_by pc: 95 op: CONCAT (15)
    if (IS_SEQUENCE(_14631) && IS_ATOM(_by_file_26099)) {
        Append(&_14632, _14631, _by_file_26099);
    }
    else if (IS_ATOM(_14631) && IS_SEQUENCE(_by_file_26099)) {
    }
    else {
        Concat((object_ptr)&_14632, _14631, _by_file_26099);
        _14631 = NOVALUE;
    }
    _14631 = NOVALUE;
    // SubProg add_include_by pc: 99 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_by_15418);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26100);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14632;
    if( _1 != _14632 ){
        DeRef(_1);
    }
    _14632 = NOVALUE;
    // SubProg add_include_by pc: 103 op: NOP1 (159)
L2: // addr: 104 pc: 103 sub: 26097 op: 159
    // SubProg add_include_by pc: 104 op: STARTLINE (58)

    /** scanner.e:758		if not find( included_file, file_include[by_file] ) then*/
    // SubProg add_include_by pc: 106 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 108 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14633 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 112 op: FIND_FROM (176)
    _14634 = find_from(_included_file_26100, _14633, 1);
    _14633 = NOVALUE;
    // SubProg add_include_by pc: 117 op: NOT_IFW (108)
    if (_14634 != 0)
    goto L3; // [117] 137
    _14634 = NOVALUE;
    // SubProg add_include_by pc: 120 op: STARTLINE (58)

    /** scanner.e:759			file_include[by_file] &= included_file*/
    // SubProg add_include_by pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 124 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14636 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 128 op: CONCAT (15)
    if (IS_SEQUENCE(_14636) && IS_ATOM(_included_file_26100)) {
        Append(&_14637, _14636, _included_file_26100);
    }
    else if (IS_ATOM(_14636) && IS_SEQUENCE(_included_file_26100)) {
    }
    else {
        Concat((object_ptr)&_14637, _14636, _included_file_26100);
        _14636 = NOVALUE;
    }
    _14636 = NOVALUE;
    // SubProg add_include_by pc: 132 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26099);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14637;
    if( _1 != _14637 ){
        DeRef(_1);
    }
    _14637 = NOVALUE;
    // SubProg add_include_by pc: 136 op: NOP1 (159)
L3: // addr: 137 pc: 136 sub: 26097 op: 159
    // SubProg add_include_by pc: 137 op: STARTLINE (58)

    /** scanner.e:762		if is_public then*/
    // SubProg add_include_by pc: 139 op: IF (20)
    if (_is_public_26101 == 0)
    {
        goto L4; // [139] 209
    }
    else{
    }
    // SubProg add_include_by pc: 142 op: STARTLINE (58)

    /** scanner.e:763			if not find( by_file, file_public_by[included_file] ) then*/
    // SubProg add_include_by pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 146 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_public_by_15420);
    _14638 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    // SubProg add_include_by pc: 150 op: FIND_FROM (176)
    _14639 = find_from(_by_file_26099, _14638, 1);
    _14638 = NOVALUE;
    // SubProg add_include_by pc: 155 op: NOT_IFW (108)
    if (_14639 != 0)
    goto L5; // [155] 175
    _14639 = NOVALUE;
    // SubProg add_include_by pc: 158 op: STARTLINE (58)

    /** scanner.e:764				file_public_by[included_file] &= by_file*/
    // SubProg add_include_by pc: 160 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 162 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_public_by_15420);
    _14641 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    // SubProg add_include_by pc: 166 op: CONCAT (15)
    if (IS_SEQUENCE(_14641) && IS_ATOM(_by_file_26099)) {
        Append(&_14642, _14641, _by_file_26099);
    }
    else if (IS_ATOM(_14641) && IS_SEQUENCE(_by_file_26099)) {
    }
    else {
        Concat((object_ptr)&_14642, _14641, _by_file_26099);
        _14641 = NOVALUE;
    }
    _14641 = NOVALUE;
    // SubProg add_include_by pc: 170 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_public_by_15420);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26100);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14642;
    if( _1 != _14642 ){
        DeRef(_1);
    }
    _14642 = NOVALUE;
    // SubProg add_include_by pc: 174 op: NOP1 (159)
L5: // addr: 175 pc: 174 sub: 26097 op: 159
    // SubProg add_include_by pc: 175 op: STARTLINE (58)

    /** scanner.e:767			if not find( included_file, file_public[by_file] ) then*/
    // SubProg add_include_by pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 179 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _14643 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 183 op: FIND_FROM (176)
    _14644 = find_from(_included_file_26100, _14643, 1);
    _14643 = NOVALUE;
    // SubProg add_include_by pc: 188 op: NOT_IFW (108)
    if (_14644 != 0)
    goto L6; // [188] 208
    _14644 = NOVALUE;
    // SubProg add_include_by pc: 191 op: STARTLINE (58)

    /** scanner.e:768				file_public[by_file] &= included_file*/
    // SubProg add_include_by pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 195 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _14646 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
    // SubProg add_include_by pc: 199 op: CONCAT (15)
    if (IS_SEQUENCE(_14646) && IS_ATOM(_included_file_26100)) {
        Append(&_14647, _14646, _included_file_26100);
    }
    else if (IS_ATOM(_14646) && IS_SEQUENCE(_included_file_26100)) {
    }
    else {
        Concat((object_ptr)&_14647, _14646, _included_file_26100);
        _14646 = NOVALUE;
    }
    _14646 = NOVALUE;
    // SubProg add_include_by pc: 203 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26099);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14647;
    if( _1 != _14647 ){
        DeRef(_1);
    }
    _14647 = NOVALUE;
    // SubProg add_include_by pc: 207 op: NOP1 (159)
L6: // addr: 208 pc: 207 sub: 26097 op: 159
    // SubProg add_include_by pc: 208 op: NOP1 (159)
L4: // addr: 209 pc: 208 sub: 26097 op: 159
    // SubProg add_include_by pc: 209 op: STARTLINE (58)

    /** scanner.e:772		for propagate = 1 to length( include_matrix[included_file] ) do*/
    // SubProg add_include_by pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_include_by pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _14648 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
    // SubProg add_include_by pc: 217 op: LENGTH (42)
    if (IS_SEQUENCE(_14648)){
            _14649 = SEQ_PTR(_14648)->length;
    }
    else {
        _14649 = 1;
    }
    _14648 = NOVALUE;
    // SubProg add_include_by pc: 220 op: FOR_I (125)
    {
        object _propagate_26153;
        _propagate_26153 = 1;
L7: // addr: 227 pc: 220 sub: 26097 op: 125
        if (_propagate_26153 > _14649){
            goto L8; // [220] 320
        }
        // SubProg add_include_by pc: 227 op: STARTLINE (58)

        /** scanner.e:773			if and_bits( PUBLIC_INCLUDE, include_matrix[included_file][propagate] ) then*/
        // SubProg add_include_by pc: 229 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 231 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 233 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _14650 = (object)*(((s1_ptr)_2)->base + _included_file_26100);
        // SubProg add_include_by pc: 237 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14650);
        _14651 = (object)*(((s1_ptr)_2)->base + _propagate_26153);
        _14650 = NOVALUE;
        // SubProg add_include_by pc: 241 op: AND_BITS (56)
        if (IS_ATOM_INT(_14651)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 & (uintptr_t)_14651;
                 _14652 = MAKE_UINT(tu);
            }
        }
        else {
            _14652 = binary_op(AND_BITS, 4, _14651);
        }
        _14651 = NOVALUE;
        // SubProg add_include_by pc: 245 op: IF (20)
        if (_14652 == 0) {
            DeRef(_14652);
            _14652 = NOVALUE;
            goto L9; // [245] 313
        }
        else {
            if (!IS_ATOM_INT(_14652) && DBL_PTR(_14652)->dbl == 0.0){
                DeRef(_14652);
                _14652 = NOVALUE;
                goto L9; // [245] 313
            }
            DeRef(_14652);
            _14652 = NOVALUE;
        }
        DeRef(_14652);
        _14652 = NOVALUE;
        // SubProg add_include_by pc: 248 op: STARTLINE (58)

        /** scanner.e:774				include_matrix[by_file][propagate] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 250 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 252 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37include_matrix_15412 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26099 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 259 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 261 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _14655 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
        // SubProg add_include_by pc: 265 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14655);
        _14656 = (object)*(((s1_ptr)_2)->base + _propagate_26153);
        _14655 = NOVALUE;
        // SubProg add_include_by pc: 269 op: OR_BITS (24)
        if (IS_ATOM_INT(_14656)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 | (uintptr_t)_14656;
                 _14657 = MAKE_UINT(tu);
            }
        }
        else {
            _14657 = binary_op(OR_BITS, 2, _14656);
        }
        _14656 = NOVALUE;
        // SubProg add_include_by pc: 273 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26153);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14657;
        if( _1 != _14657 ){
            DeRef(_1);
        }
        _14657 = NOVALUE;
        _14653 = NOVALUE;
        // SubProg add_include_by pc: 277 op: STARTLINE (58)

        /** scanner.e:775				if is_public then*/
        // SubProg add_include_by pc: 279 op: IF (20)
        if (_is_public_26101 == 0)
        {
            goto LA; // [279] 312
        }
        else{
        }
        // SubProg add_include_by pc: 282 op: STARTLINE (58)

        /** scanner.e:776					include_matrix[by_file][propagate] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][propagate] )*/
        // SubProg add_include_by pc: 284 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 286 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37include_matrix_15412 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26099 + ((s1_ptr)_2)->base);
        // SubProg add_include_by pc: 291 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 293 op: GLOBAL_INIT_CHECK (109)
        // SubProg add_include_by pc: 295 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _14660 = (object)*(((s1_ptr)_2)->base + _by_file_26099);
        // SubProg add_include_by pc: 299 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_14660);
        _14661 = (object)*(((s1_ptr)_2)->base + _propagate_26153);
        _14660 = NOVALUE;
        // SubProg add_include_by pc: 303 op: OR_BITS (24)
        if (IS_ATOM_INT(_14661)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14661;
                 _14662 = MAKE_UINT(tu);
            }
        }
        else {
            _14662 = binary_op(OR_BITS, 4, _14661);
        }
        _14661 = NOVALUE;
        // SubProg add_include_by pc: 307 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26153);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14662;
        if( _1 != _14662 ){
            DeRef(_1);
        }
        _14662 = NOVALUE;
        _14658 = NOVALUE;
        // SubProg add_include_by pc: 311 op: NOP1 (159)
LA: // addr: 312 pc: 311 sub: 26097 op: 159
        // SubProg add_include_by pc: 312 op: NOP1 (159)
L9: // addr: 313 pc: 312 sub: 26097 op: 159
        // SubProg add_include_by pc: 313 op: STARTLINE (58)

        /** scanner.e:779		end for*/
        // SubProg add_include_by pc: 315 op: ENDFOR_INT_UP1 (54)
        _propagate_26153 = _propagate_26153 + 1;
        goto L7; // [315] 227
L8: // addr: 320 pc: 315 sub: 26097 op: 54
        ;
    }
    // SubProg add_include_by pc: 320 op: STARTLINE (58)

    /** scanner.e:780	end procedure*/
    // SubProg add_include_by pc: 322 op: RETURNP (29)

// Exiting block BLOCK: add_include_by

// block var by_file_26099

// block var included_file_26100

// block var is_public_26101
    _14648 = NOVALUE;
    return;
    // SubProg add_include_by pc: 325 op: BADRETURNF (43)
    ;
}


void _62IncludePush()
{
    object _new_file_handle_26182 = NOVALUE;
    object _old_file_no_26183 = NOVALUE;
    object _new_hash_26184 = NOVALUE;
    object _idx_26185 = NOVALUE;
// skipping _14750  name type: 0
    object _14749 = NOVALUE; // 26401 14749
// skipping _14748  name type: 0
// skipping _14747  name type: 0
    object _14746 = NOVALUE; // 26391 14746
// skipping _14745  name type: 0
    object _14744 = NOVALUE; // 26388 14744
    object _14743 = NOVALUE; // 26387 14743
    object _14742 = NOVALUE; // 26385 14742
// skipping _14741  name type: 0
    object _14740 = NOVALUE; // 26380 14740
    object _14739 = NOVALUE; // 26379 14739
// skipping _14738  name type: 0
// skipping _14737  name type: 0
// skipping _14736  name type: 0
// skipping _14735  name type: 0
    object _14733 = NOVALUE; // 26358 14733
    object _14732 = NOVALUE; // 26357 14732
    object _14731 = NOVALUE; // 26356 14731
    object _14730 = NOVALUE; // 26351 14730
    object _14729 = NOVALUE; // 26348 14729
    object _14728 = NOVALUE; // 26347 14728
    object _14727 = NOVALUE; // 26346 14727
// skipping _14726  name type: 0
// skipping _14725  name type: 0
    object _14724 = NOVALUE; // 26334 14724
// skipping _14723  name type: 0
    object _14722 = NOVALUE; // 26332 14722
// skipping _14721  name type: 0
    object _14720 = NOVALUE; // 26328 14720
    object _14719 = NOVALUE; // 26327 14719
    object _14718 = NOVALUE; // 26322 14718
// skipping _14717  name type: 0
    object _14716 = NOVALUE; // 26320 14716
    object _14715 = NOVALUE; // 26316 14715
// skipping _14714  name type: 0
    object _14713 = NOVALUE; // 26314 14713
    object _14712 = NOVALUE; // 26313 14712
// skipping _14711  name type: 0
    object _14710 = NOVALUE; // 26310 14710
    object _14709 = NOVALUE; // 26309 14709
    object _14708 = NOVALUE; // 26305 14708
    object _14707 = NOVALUE; // 26304 14707
    object _14706 = NOVALUE; // 26303 14706
    object _14705 = NOVALUE; // 26302 14705
    object _14704 = NOVALUE; // 26299 14704
// skipping _14703  name type: 0
// skipping _14702  name type: 0
// skipping _14701  name type: 0
    object _14700 = NOVALUE; // 26288 14700
// skipping _14699  name type: 0
    object _14698 = NOVALUE; // 26263 14698
    object _14697 = NOVALUE; // 26261 14697
    object _14696 = NOVALUE; // 26260 14696
    object _14695 = NOVALUE; // 26257 14695
    object _14694 = NOVALUE; // 26256 14694
    object _14693 = NOVALUE; // 26254 14693
    object _14692 = NOVALUE; // 26253 14692
    object _14691 = NOVALUE; // 26252 14691
    object _14690 = NOVALUE; // 26251 14690
// skipping _14689  name type: 0
    object _14688 = NOVALUE; // 26242 14688
    object _14687 = NOVALUE; // 26238 14687
    object _14686 = NOVALUE; // 26237 14686
// skipping _14685  name type: 0
    object _14684 = NOVALUE; // 26233 14684
    object _14683 = NOVALUE; // 26232 14683
    object _14682 = NOVALUE; // 26226 14682
    object _14681 = NOVALUE; // 26225 14681
// skipping _14680  name type: 0
    object _14679 = NOVALUE; // 26221 14679
    object _14678 = NOVALUE; // 26220 14678
    object _14677 = NOVALUE; // 26216 14677
    object _14676 = NOVALUE; // 26215 14676
    object _14675 = NOVALUE; // 26212 14675
// skipping _14674  name type: 0
    object _14673 = NOVALUE; // 26210 14673
    object _14672 = NOVALUE; // 26207 14672
    object _14671 = NOVALUE; // 26206 14671
    object _14670 = NOVALUE; // 26203 14670
// skipping _14669  name type: 0
    object _14668 = NOVALUE; // 26199 14668
// skipping _14667  name type: 0
// skipping _14666  name type: 0
// skipping _14665  name type: 0
    object _14664 = NOVALUE; // 26191 14664
// skipping _14663  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePush pc: 1 op: STARTLINE (58)

    /** scanner.e:788		start_include = FALSE*/
    // SubProg IncludePush pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 5 op: ASSIGN (18)
    _62start_include_25179 = _13FALSE_450;
    // SubProg IncludePush pc: 8 op: STARTLINE (58)

    /** scanner.e:790		new_file_handle = path_open() -- sets new_include_name to full path*/
    // SubProg IncludePush pc: 10 op: PROC (27)
    _new_file_handle_26182 = _62path_open();
    // SubProg IncludePush pc: 13 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_file_handle_26182)) {
        _1 = (object)(DBL_PTR(_new_file_handle_26182)->dbl);
        DeRefDS(_new_file_handle_26182);
        _new_file_handle_26182 = _1;
    }
    // SubProg IncludePush pc: 15 op: STARTLINE (58)

    /** scanner.e:792		new_hash = hash(canonical_path(new_include_name,,CORRECT), stdhash:HSIEH32)*/
    // SubProg IncludePush pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 21 op: PROC (27)
    RefDS(_36new_include_name_16558);
    _14664 = _20canonical_path(_36new_include_name_16558, 0, 2);
    // SubProg IncludePush pc: 27 op: HASH (194)
    DeRef(_new_hash_26184);
    _new_hash_26184 = calc_hash(_14664, -5);
    DeRef(_14664);
    _14664 = NOVALUE;
    // SubProg IncludePush pc: 31 op: STARTLINE (58)

    /** scanner.e:794		idx = find(new_hash, known_files_hash)*/
    // SubProg IncludePush pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 35 op: FIND_FROM (176)
    _idx_26185 = find_from(_new_hash_26184, _37known_files_hash_15407, 1);
    // SubProg IncludePush pc: 40 op: STARTLINE (58)

    /** scanner.e:795		if idx then*/
    // SubProg IncludePush pc: 42 op: IF (20)
    if (_idx_26185 == 0)
    {
        goto L1; // [42] 335
    }
    else{
    }
    // SubProg IncludePush pc: 45 op: STARTLINE (58)

    /** scanner.e:797			if new_include_space != 0 then*/
    // SubProg IncludePush pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 49 op: NOTEQ_IFW (105)
    if (_62new_include_space_25177 == 0)
    goto L2; // [49] 71
    // SubProg IncludePush pc: 53 op: STARTLINE (58)

    /** scanner.e:798				SymTab[new_include_space][S_OBJ] = idx -- but note any namespace*/
    // SubProg IncludePush pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 59 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_62new_include_space_25177 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 66 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26185;
    DeRef(_1);
    _14668 = NOVALUE;
    // SubProg IncludePush pc: 70 op: NOP1 (159)
L2: // addr: 71 pc: 70 sub: 26180 op: 159
    // SubProg IncludePush pc: 71 op: STARTLINE (58)

    /** scanner.e:801			close(new_file_handle)*/
    // SubProg IncludePush pc: 73 op: CLOSE (86)
    EClose(_new_file_handle_26182);
    // SubProg IncludePush pc: 75 op: STARTLINE (58)

    /** scanner.e:803			if find( -idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 77 op: UMINUS (12)
    if ((uintptr_t)_idx_26185 == (uintptr_t)HIGH_BITS){
        _14670 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14670 = - _idx_26185;
    }
    // SubProg IncludePush pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 84 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14671 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 88 op: FIND_FROM (176)
    _14672 = find_from(_14670, _14671, 1);
    DeRef(_14670);
    _14670 = NOVALUE;
    _14671 = NOVALUE;
    // SubProg IncludePush pc: 93 op: IF (20)
    if (_14672 == 0)
    {
        _14672 = NOVALUE;
        goto L3; // [93] 130
    }
    else{
        _14672 = NOVALUE;
    }
    // SubProg IncludePush pc: 96 op: STARTLINE (58)

    /** scanner.e:805				file_include[current_file_no][ find( -idx, file_include[current_file_no] ) ] = idx*/
    // SubProg IncludePush pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 102 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37file_include_15410 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36current_file_no_16436 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 107 op: UMINUS (12)
    if ((uintptr_t)_idx_26185 == (uintptr_t)HIGH_BITS){
        _14675 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14675 = - _idx_26185;
    }
    // SubProg IncludePush pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 114 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14676 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 118 op: FIND_FROM (176)
    _14677 = find_from(_14675, _14676, 1);
    DeRef(_14675);
    _14675 = NOVALUE;
    _14676 = NOVALUE;
    // SubProg IncludePush pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14677);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26185;
    DeRef(_1);
    _14673 = NOVALUE;
    // SubProg IncludePush pc: 127 op: ELSE (23)
    goto L4; // [127] 228
    // SubProg IncludePush pc: 129 op: NOP1 (159)
L3: // addr: 130 pc: 129 sub: 26180 op: 159
    // SubProg IncludePush pc: 130 op: STARTLINE (58)

    /** scanner.e:809			elsif not find( idx, file_include[current_file_no] ) then*/
    // SubProg IncludePush pc: 132 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 136 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14678 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 140 op: FIND_FROM (176)
    _14679 = find_from(_idx_26185, _14678, 1);
    _14678 = NOVALUE;
    // SubProg IncludePush pc: 145 op: NOT_IFW (108)
    if (_14679 != 0)
    goto L5; // [145] 227
    _14679 = NOVALUE;
    // SubProg IncludePush pc: 148 op: STARTLINE (58)

    /** scanner.e:811				file_include[current_file_no] &= idx*/
    // SubProg IncludePush pc: 150 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 154 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14681 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 158 op: CONCAT (15)
    if (IS_SEQUENCE(_14681) && IS_ATOM(_idx_26185)) {
        Append(&_14682, _14681, _idx_26185);
    }
    else if (IS_ATOM(_14681) && IS_SEQUENCE(_idx_26185)) {
    }
    else {
        Concat((object_ptr)&_14682, _14681, _idx_26185);
        _14681 = NOVALUE;
    }
    _14681 = NOVALUE;
    // SubProg IncludePush pc: 162 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14682;
    if( _1 != _14682 ){
        DeRef(_1);
    }
    _14682 = NOVALUE;
    // SubProg IncludePush pc: 166 op: STARTLINE (58)

    /** scanner.e:814				add_exports( idx, current_file_no )*/
    // SubProg IncludePush pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 170 op: PROC (27)
    _62add_exports(_idx_26185, _36current_file_no_16436);
    // SubProg IncludePush pc: 174 op: STARTLINE (58)

    /** scanner.e:816				if public_include then*/
    // SubProg IncludePush pc: 176 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 178 op: IF (20)
    if (_62public_include_25182 == 0)
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
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _14683 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 191 op: FIND_FROM (176)
    _14684 = find_from(_idx_26185, _14683, 1);
    _14683 = NOVALUE;
    // SubProg IncludePush pc: 196 op: NOT_IFW (108)
    if (_14684 != 0)
    goto L7; // [196] 225
    _14684 = NOVALUE;
    // SubProg IncludePush pc: 199 op: STARTLINE (58)

    /** scanner.e:819						file_public[current_file_no] &= idx*/
    // SubProg IncludePush pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 203 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 205 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _14686 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 209 op: CONCAT (15)
    if (IS_SEQUENCE(_14686) && IS_ATOM(_idx_26185)) {
        Append(&_14687, _14686, _idx_26185);
    }
    else if (IS_ATOM(_14686) && IS_SEQUENCE(_idx_26185)) {
    }
    else {
        Concat((object_ptr)&_14687, _14686, _idx_26185);
        _14686 = NOVALUE;
    }
    _14686 = NOVALUE;
    // SubProg IncludePush pc: 213 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14687;
    if( _1 != _14687 ){
        DeRef(_1);
    }
    _14687 = NOVALUE;
    // SubProg IncludePush pc: 217 op: STARTLINE (58)

    /** scanner.e:820						patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 219 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 221 op: PROC (27)
    _62patch_exports(_36current_file_no_16436);
    // SubProg IncludePush pc: 224 op: NOP1 (159)
L7: // addr: 225 pc: 224 sub: 26180 op: 159
    // SubProg IncludePush pc: 225 op: NOP1 (159)
L6: // addr: 226 pc: 225 sub: 26180 op: 159
    // SubProg IncludePush pc: 226 op: NOP1 (159)
L5: // addr: 227 pc: 226 sub: 26180 op: 159
    // SubProg IncludePush pc: 227 op: NOP1 (159)
L4: // addr: 228 pc: 227 sub: 26180 op: 159
    // SubProg IncludePush pc: 228 op: STARTLINE (58)

    /** scanner.e:825			indirect_include[current_file_no][idx] = OpIndirectInclude*/
    // SubProg IncludePush pc: 230 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 234 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37indirect_include_15414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37indirect_include_15414 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36current_file_no_16436 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 239 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 241 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _idx_26185);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36OpIndirectInclude_16511;
    DeRef(_1);
    _14688 = NOVALUE;
    // SubProg IncludePush pc: 245 op: STARTLINE (58)

    /** scanner.e:826			add_include_by( current_file_no, idx, public_include )*/
    // SubProg IncludePush pc: 247 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 249 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 251 op: PROC (27)
    _62add_include_by(_36current_file_no_16436, _idx_26185, _62public_include_25182);
    // SubProg IncludePush pc: 256 op: STARTLINE (58)

    /** scanner.e:827			update_include_matrix( idx, current_file_no )*/
    // SubProg IncludePush pc: 258 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 260 op: PROC (27)
    _62update_include_matrix(_idx_26185, _36current_file_no_16436);
    // SubProg IncludePush pc: 264 op: STARTLINE (58)

    /** scanner.e:828			public_include = FALSE*/
    // SubProg IncludePush pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 268 op: ASSIGN (18)
    _62public_include_25182 = _13FALSE_450;
    // SubProg IncludePush pc: 271 op: STARTLINE (58)

    /** scanner.e:829			read_line() -- we can't return without reading a line first*/
    // SubProg IncludePush pc: 273 op: PROC (27)
    _62read_line();
    // SubProg IncludePush pc: 275 op: STARTLINE (58)

    /** scanner.e:830			if not find( idx, file_include_depend[current_file_no] ) and not finished_files[idx] then*/
    // SubProg IncludePush pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 281 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37file_include_depend_15409);
    _14690 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 285 op: FIND_FROM (176)
    _14691 = find_from(_idx_26185, _14690, 1);
    _14690 = NOVALUE;
    // SubProg IncludePush pc: 290 op: NOT (7)
    _14692 = (_14691 == 0);
    _14691 = NOVALUE;
    // SubProg IncludePush pc: 293 op: SC1_AND_IF (146)
    if (_14692 == 0) {
        goto L8; // [293] 329
    }
    // SubProg IncludePush pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 299 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37finished_files_15408);
    _14694 = (object)*(((s1_ptr)_2)->base + _idx_26185);
    // SubProg IncludePush pc: 303 op: NOT (7)
    _14695 = (_14694 == 0);
    _14694 = NOVALUE;
    // SubProg IncludePush pc: 306 op: NOP1 (159)
    // SubProg IncludePush pc: 307 op: IF (20)
    if (_14695 == 0)
    {
        DeRef(_14695);
        _14695 = NOVALUE;
        goto L8; // [307] 329
    }
    else{
        DeRef(_14695);
        _14695 = NOVALUE;
    }
    // SubProg IncludePush pc: 310 op: STARTLINE (58)

    /** scanner.e:831				file_include_depend[current_file_no] &= idx*/
    // SubProg IncludePush pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 314 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 316 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_depend_15409);
    _14696 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 320 op: CONCAT (15)
    if (IS_SEQUENCE(_14696) && IS_ATOM(_idx_26185)) {
        Append(&_14697, _14696, _idx_26185);
    }
    else if (IS_ATOM(_14696) && IS_SEQUENCE(_idx_26185)) {
    }
    else {
        Concat((object_ptr)&_14697, _14696, _idx_26185);
        _14696 = NOVALUE;
    }
    _14696 = NOVALUE;
    // SubProg IncludePush pc: 324 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_depend_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37file_include_depend_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14697;
    if( _1 != _14697 ){
        DeRef(_1);
    }
    _14697 = NOVALUE;
    // SubProg IncludePush pc: 328 op: NOP1 (159)
L8: // addr: 329 pc: 328 sub: 26180 op: 159
    // SubProg IncludePush pc: 329 op: STARTLINE (58)

    /** scanner.e:833			return -- ignore it*/
    // SubProg IncludePush pc: 331 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26182

// block var old_file_no_26183

// block var new_hash_26184
    DeRef(_new_hash_26184);

// block var idx_26185
    DeRef(_14692);
    _14692 = NOVALUE;
    return;
    // SubProg IncludePush pc: 334 op: NOP1 (159)
L1: // addr: 335 pc: 334 sub: 26180 op: 159
    // SubProg IncludePush pc: 335 op: STARTLINE (58)

    /** scanner.e:836		if length(IncludeStk) >= INCLUDE_LIMIT then*/
    // SubProg IncludePush pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 339 op: LENGTH (42)
    if (IS_SEQUENCE(_62IncludeStk_25188)){
            _14698 = SEQ_PTR(_62IncludeStk_25188)->length;
    }
    else {
        _14698 = 1;
    }
    // SubProg IncludePush pc: 342 op: GREATEREQ_IFW_I (120)
    if (_14698 < 30)
    goto L9; // [342] 354
    // SubProg IncludePush pc: 346 op: STARTLINE (58)

    /** scanner.e:837			CompileErr(104)*/
    // SubProg IncludePush pc: 348 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(104, _21933, 0);
    // SubProg IncludePush pc: 353 op: NOP1 (159)
L9: // addr: 354 pc: 353 sub: 26180 op: 159
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
    ((intptr_t*)_2)[1] = _36current_file_no_16436;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    ((intptr_t*)_2)[3] = _36src_file_16557;
    ((intptr_t*)_2)[4] = _36file_start_sym_16442;
    ((intptr_t*)_2)[5] = _36OpWarning_16503;
    ((intptr_t*)_2)[6] = _36OpTrace_16505;
    ((intptr_t*)_2)[7] = _36OpTypeCheck_16506;
    ((intptr_t*)_2)[8] = _36OpProfileTime_16508;
    ((intptr_t*)_2)[9] = _36OpProfileStatement_16507;
    RefDS(_36OpDefines_16509);
    ((intptr_t*)_2)[10] = _36OpDefines_16509;
    ((intptr_t*)_2)[11] = _36prev_OpWarning_16504;
    ((intptr_t*)_2)[12] = _36OpInline_16510;
    ((intptr_t*)_2)[13] = _36OpIndirectInclude_16511;
    ((intptr_t*)_2)[14] = _36putback_fwd_line_number_16439;
    Ref(_50putback_ForwardLine_48709);
    ((intptr_t*)_2)[15] = _50putback_ForwardLine_48709;
    ((intptr_t*)_2)[16] = _50putback_forward_bp_48713;
    ((intptr_t*)_2)[17] = _36last_fwd_line_number_16440;
    Ref(_50last_ForwardLine_48710);
    ((intptr_t*)_2)[18] = _50last_ForwardLine_48710;
    ((intptr_t*)_2)[19] = _50last_forward_bp_48714;
    Ref(_50ThisLine_48707);
    ((intptr_t*)_2)[20] = _50ThisLine_48707;
    ((intptr_t*)_2)[21] = _36fwd_line_number_16438;
    ((intptr_t*)_2)[22] = _50forward_bp_48712;
    _14700 = MAKE_SEQ(_1);
    // SubProg IncludePush pc: 427 op: APPEND (35)
    RefDS(_14700);
    Append(&_62IncludeStk_25188, _62IncludeStk_25188, _14700);
    DeRefDS(_14700);
    _14700 = NOVALUE;
    // SubProg IncludePush pc: 431 op: STARTLINE (58)

    /** scanner.e:864		file_include = append( file_include, {} )*/
    // SubProg IncludePush pc: 433 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 435 op: APPEND (35)
    RefDS(_5);
    Append(&_37file_include_15410, _37file_include_15410, _5);
    // SubProg IncludePush pc: 439 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 441 op: STARTLINE (58)

    /** scanner.e:865		file_include_by = append( file_include_by, {} )*/
    // SubProg IncludePush pc: 443 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 445 op: APPEND (35)
    RefDS(_5);
    Append(&_37file_include_by_15418, _37file_include_by_15418, _5);
    // SubProg IncludePush pc: 449 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 451 op: STARTLINE (58)

    /** scanner.e:866		for i = 1 to length( include_matrix) do*/
    // SubProg IncludePush pc: 453 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 455 op: LENGTH (42)
    if (IS_SEQUENCE(_37include_matrix_15412)){
            _14704 = SEQ_PTR(_37include_matrix_15412)->length;
    }
    else {
        _14704 = 1;
    }
    // SubProg IncludePush pc: 458 op: FOR_I (125)
    {
        object _i_26297;
        _i_26297 = 1;
LA: // addr: 465 pc: 458 sub: 26180 op: 125
        if (_i_26297 > _14704){
            goto LB; // [458] 504
        }
        // SubProg IncludePush pc: 465 op: STARTLINE (58)

        /** scanner.e:867			include_matrix[i]   &= 0*/
        // SubProg IncludePush pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 469 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _14705 = (object)*(((s1_ptr)_2)->base + _i_26297);
        // SubProg IncludePush pc: 473 op: CONCAT (15)
        if (IS_SEQUENCE(_14705) && IS_ATOM(0)) {
            Append(&_14706, _14705, 0);
        }
        else if (IS_ATOM(_14705) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14706, _14705, 0);
            _14705 = NOVALUE;
        }
        _14705 = NOVALUE;
        // SubProg IncludePush pc: 477 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _2 = (object)(((s1_ptr)_2)->base + _i_26297);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14706;
        if( _1 != _14706 ){
            DeRef(_1);
        }
        _14706 = NOVALUE;
        // SubProg IncludePush pc: 481 op: STARTLINE (58)

        /** scanner.e:868			indirect_include[i] &= 0*/
        // SubProg IncludePush pc: 483 op: GLOBAL_INIT_CHECK (109)
        // SubProg IncludePush pc: 485 op: ASSIGN_OP_SUBS (149)
        _2 = (object)SEQ_PTR(_37indirect_include_15414);
        _14707 = (object)*(((s1_ptr)_2)->base + _i_26297);
        // SubProg IncludePush pc: 489 op: CONCAT (15)
        if (IS_SEQUENCE(_14707) && IS_ATOM(0)) {
            Append(&_14708, _14707, 0);
        }
        else if (IS_ATOM(_14707) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14708, _14707, 0);
            _14707 = NOVALUE;
        }
        _14707 = NOVALUE;
        // SubProg IncludePush pc: 493 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_37indirect_include_15414);
        _2 = (object)(((s1_ptr)_2)->base + _i_26297);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14708;
        if( _1 != _14708 ){
            DeRef(_1);
        }
        _14708 = NOVALUE;
        // SubProg IncludePush pc: 497 op: STARTLINE (58)

        /** scanner.e:869		end for*/
        // SubProg IncludePush pc: 499 op: ENDFOR_INT_UP1 (54)
        _i_26297 = _i_26297 + 1;
        goto LA; // [499] 465
LB: // addr: 504 pc: 499 sub: 26180 op: 54
        ;
    }
    // SubProg IncludePush pc: 504 op: STARTLINE (58)

    /** scanner.e:870		include_matrix = append( include_matrix, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 506 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 508 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 510 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14709 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14709 = 1;
    }
    // SubProg IncludePush pc: 513 op: REPEAT (32)
    _14710 = Repeat(0, _14709);
    _14709 = NOVALUE;
    // SubProg IncludePush pc: 517 op: APPEND (35)
    RefDS(_14710);
    Append(&_37include_matrix_15412, _37include_matrix_15412, _14710);
    DeRefDS(_14710);
    _14710 = NOVALUE;
    // SubProg IncludePush pc: 521 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 523 op: STARTLINE (58)

    /** scanner.e:871		include_matrix[$][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 525 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 527 op: LENGTH (42)
    if (IS_SEQUENCE(_37include_matrix_15412)){
            _14712 = SEQ_PTR(_37include_matrix_15412)->length;
    }
    else {
        _14712 = 1;
    }
    // SubProg IncludePush pc: 530 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14712 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 535 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14715 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14715 = 1;
    }
    _14713 = NOVALUE;
    // SubProg IncludePush pc: 538 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 540 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14715);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14713 = NOVALUE;
    // SubProg IncludePush pc: 544 op: STARTLINE (58)

    /** scanner.e:872		include_matrix[current_file_no][$] = DIRECT_INCLUDE*/
    // SubProg IncludePush pc: 546 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 550 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37include_matrix_15412 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36current_file_no_16436 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 555 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14718 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14718 = 1;
    }
    _14716 = NOVALUE;
    // SubProg IncludePush pc: 558 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 560 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14718);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14716 = NOVALUE;
    // SubProg IncludePush pc: 564 op: STARTLINE (58)

    /** scanner.e:874		indirect_include = append( indirect_include, repeat( 0, length( file_include ) ) )*/
    // SubProg IncludePush pc: 566 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 568 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 570 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14719 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14719 = 1;
    }
    // SubProg IncludePush pc: 573 op: REPEAT (32)
    _14720 = Repeat(0, _14719);
    _14719 = NOVALUE;
    // SubProg IncludePush pc: 577 op: APPEND (35)
    RefDS(_14720);
    Append(&_37indirect_include_15414, _37indirect_include_15414, _14720);
    DeRefDS(_14720);
    _14720 = NOVALUE;
    // SubProg IncludePush pc: 581 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 583 op: STARTLINE (58)

    /** scanner.e:875		indirect_include[current_file_no][$] = OpIndirectInclude*/
    // SubProg IncludePush pc: 585 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 587 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 589 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37indirect_include_15414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37indirect_include_15414 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36current_file_no_16436 + ((s1_ptr)_2)->base);
    // SubProg IncludePush pc: 594 op: PLENGTH (160)
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14724 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14724 = 1;
    }
    _14722 = NOVALUE;
    // SubProg IncludePush pc: 597 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 599 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14724);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36OpIndirectInclude_16511;
    DeRef(_1);
    _14722 = NOVALUE;
    // SubProg IncludePush pc: 603 op: STARTLINE (58)

    /** scanner.e:876		OpIndirectInclude = 1*/
    // SubProg IncludePush pc: 605 op: ASSIGN (18)
    _36OpIndirectInclude_16511 = 1;
    // SubProg IncludePush pc: 608 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 610 op: STARTLINE (58)

    /** scanner.e:878		file_public  = append( file_public, {} )*/
    // SubProg IncludePush pc: 612 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 614 op: APPEND (35)
    RefDS(_5);
    Append(&_37file_public_15416, _37file_public_15416, _5);
    // SubProg IncludePush pc: 618 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 620 op: STARTLINE (58)

    /** scanner.e:879		file_public_by = append( file_public_by, {} )*/
    // SubProg IncludePush pc: 622 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 624 op: APPEND (35)
    RefDS(_5);
    Append(&_37file_public_by_15420, _37file_public_by_15420, _5);
    // SubProg IncludePush pc: 628 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 630 op: STARTLINE (58)

    /** scanner.e:880		file_include[current_file_no] &= length( file_include )*/
    // SubProg IncludePush pc: 632 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 634 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 636 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 638 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14727 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14727 = 1;
    }
    // SubProg IncludePush pc: 641 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _14728 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 645 op: CONCAT (15)
    if (IS_SEQUENCE(_14728) && IS_ATOM(_14727)) {
        Append(&_14729, _14728, _14727);
    }
    else if (IS_ATOM(_14728) && IS_SEQUENCE(_14727)) {
    }
    else {
        Concat((object_ptr)&_14729, _14728, _14727);
        _14728 = NOVALUE;
    }
    _14728 = NOVALUE;
    _14727 = NOVALUE;
    // SubProg IncludePush pc: 649 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_15410);
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14729;
    if( _1 != _14729 ){
        DeRef(_1);
    }
    _14729 = NOVALUE;
    // SubProg IncludePush pc: 653 op: STARTLINE (58)

    /** scanner.e:881		add_include_by( current_file_no, length(file_include), public_include )*/
    // SubProg IncludePush pc: 655 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 657 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 659 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14730 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14730 = 1;
    }
    // SubProg IncludePush pc: 662 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 664 op: PROC (27)
    _62add_include_by(_36current_file_no_16436, _14730, _62public_include_25182);
    _14730 = NOVALUE;
    // SubProg IncludePush pc: 669 op: STARTLINE (58)

    /** scanner.e:882		if public_include then*/
    // SubProg IncludePush pc: 671 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 673 op: IF (20)
    if (_62public_include_25182 == 0)
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
    if (IS_SEQUENCE(_37file_public_15416)){
            _14731 = SEQ_PTR(_37file_public_15416)->length;
    }
    else {
        _14731 = 1;
    }
    // SubProg IncludePush pc: 687 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _14732 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 691 op: CONCAT (15)
    if (IS_SEQUENCE(_14732) && IS_ATOM(_14731)) {
        Append(&_14733, _14732, _14731);
    }
    else if (IS_ATOM(_14732) && IS_SEQUENCE(_14731)) {
    }
    else {
        Concat((object_ptr)&_14733, _14732, _14731);
        _14732 = NOVALUE;
    }
    _14732 = NOVALUE;
    _14731 = NOVALUE;
    // SubProg IncludePush pc: 695 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_public_15416);
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14733;
    if( _1 != _14733 ){
        DeRef(_1);
    }
    _14733 = NOVALUE;
    // SubProg IncludePush pc: 699 op: STARTLINE (58)

    /** scanner.e:884			patch_exports( current_file_no )*/
    // SubProg IncludePush pc: 701 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 703 op: PROC (27)
    _62patch_exports(_36current_file_no_16436);
    // SubProg IncludePush pc: 706 op: NOP1 (159)
LC: // addr: 707 pc: 706 sub: 26180 op: 159
    // SubProg IncludePush pc: 707 op: STARTLINE (58)

    /** scanner.e:887	ifdef STDDEBUG then*/
    // SubProg IncludePush pc: 709 op: STARTLINE (58)

    /** scanner.e:893		src_file = new_file_handle*/
    // SubProg IncludePush pc: 711 op: ASSIGN (18)
    _36src_file_16557 = _new_file_handle_26182;
    // SubProg IncludePush pc: 714 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 716 op: STARTLINE (58)

    /** scanner.e:894		file_start_sym = last_sym*/
    // SubProg IncludePush pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 720 op: ASSIGN (18)
    _36file_start_sym_16442 = _54last_sym_46264;
    // SubProg IncludePush pc: 723 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 725 op: STARTLINE (58)

    /** scanner.e:895		if current_file_no >= MAX_FILE then*/
    // SubProg IncludePush pc: 727 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 729 op: GREATEREQ_IFW (103)
    if (_36current_file_no_16436 < 256)
    goto LD; // [729] 741
    // SubProg IncludePush pc: 733 op: STARTLINE (58)

    /** scanner.e:896			CompileErr(126)*/
    // SubProg IncludePush pc: 735 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(126, _21933, 0);
    // SubProg IncludePush pc: 740 op: NOP1 (159)
LD: // addr: 741 pc: 740 sub: 26180 op: 159
    // SubProg IncludePush pc: 741 op: STARTLINE (58)

    /** scanner.e:898		known_files = append(known_files, new_include_name)*/
    // SubProg IncludePush pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 745 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 747 op: APPEND (35)
    RefDS(_36new_include_name_16558);
    Append(&_37known_files_15406, _37known_files_15406, _36new_include_name_16558);
    // SubProg IncludePush pc: 751 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 753 op: STARTLINE (58)

    /** scanner.e:899		known_files_hash &= new_hash*/
    // SubProg IncludePush pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 757 op: CONCAT (15)
    Ref(_new_hash_26184);
    Append(&_37known_files_hash_15407, _37known_files_hash_15407, _new_hash_26184);
    // SubProg IncludePush pc: 761 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 763 op: STARTLINE (58)

    /** scanner.e:900		finished_files &= 0*/
    // SubProg IncludePush pc: 765 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 767 op: CONCAT (15)
    Append(&_37finished_files_15408, _37finished_files_15408, 0);
    // SubProg IncludePush pc: 771 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 773 op: STARTLINE (58)

    /** scanner.e:901		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    // SubProg IncludePush pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 779 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _14739 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _14739 = 1;
    }
    // SubProg IncludePush pc: 782 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _14739;
    _14740 = MAKE_SEQ(_1);
    _14739 = NOVALUE;
    // SubProg IncludePush pc: 786 op: APPEND (35)
    RefDS(_14740);
    Append(&_37file_include_depend_15409, _37file_include_depend_15409, _14740);
    DeRefDS(_14740);
    _14740 = NOVALUE;
    // SubProg IncludePush pc: 790 op: SEQUENCE_CHECK (97)
    // SubProg IncludePush pc: 792 op: STARTLINE (58)

    /** scanner.e:902		file_include_depend[current_file_no] &= length( known_files )*/
    // SubProg IncludePush pc: 794 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 796 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 798 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 800 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _14742 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _14742 = 1;
    }
    // SubProg IncludePush pc: 803 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_37file_include_depend_15409);
    _14743 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg IncludePush pc: 807 op: CONCAT (15)
    if (IS_SEQUENCE(_14743) && IS_ATOM(_14742)) {
        Append(&_14744, _14743, _14742);
    }
    else if (IS_ATOM(_14743) && IS_SEQUENCE(_14742)) {
    }
    else {
        Concat((object_ptr)&_14744, _14743, _14742);
        _14743 = NOVALUE;
    }
    _14743 = NOVALUE;
    _14742 = NOVALUE;
    // SubProg IncludePush pc: 811 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_37file_include_depend_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37file_include_depend_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _36current_file_no_16436);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14744;
    if( _1 != _14744 ){
        DeRef(_1);
    }
    _14744 = NOVALUE;
    // SubProg IncludePush pc: 815 op: STARTLINE (58)

    /** scanner.e:903		check_coverage()*/
    // SubProg IncludePush pc: 817 op: PROC (27)
    _51check_coverage();
    // SubProg IncludePush pc: 819 op: STARTLINE (58)

    /** scanner.e:904		default_namespaces &= 0*/
    // SubProg IncludePush pc: 821 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 823 op: CONCAT (15)
    Append(&_62default_namespaces_25185, _62default_namespaces_25185, 0);
    // SubProg IncludePush pc: 827 op: STARTLINE (58)

    /** scanner.e:906		update_include_matrix( length( file_include ), current_file_no )*/
    // SubProg IncludePush pc: 829 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 831 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_15410)){
            _14746 = SEQ_PTR(_37file_include_15410)->length;
    }
    else {
        _14746 = 1;
    }
    // SubProg IncludePush pc: 834 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 836 op: PROC (27)
    _62update_include_matrix(_14746, _36current_file_no_16436);
    _14746 = NOVALUE;
    // SubProg IncludePush pc: 840 op: STARTLINE (58)

    /** scanner.e:907		old_file_no = current_file_no*/
    // SubProg IncludePush pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 844 op: ASSIGN (18)
    _old_file_no_26183 = _36current_file_no_16436;
    // SubProg IncludePush pc: 847 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 849 op: STARTLINE (58)

    /** scanner.e:908		current_file_no = length(known_files)*/
    // SubProg IncludePush pc: 851 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 853 op: LENGTH (42)
    if (IS_SEQUENCE(_37known_files_15406)){
            _36current_file_no_16436 = SEQ_PTR(_37known_files_15406)->length;
    }
    else {
        _36current_file_no_16436 = 1;
    }
    // SubProg IncludePush pc: 856 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 858 op: STARTLINE (58)

    /** scanner.e:909		line_number = 0*/
    // SubProg IncludePush pc: 860 op: ASSIGN (18)
    _36line_number_16437 = 0;
    // SubProg IncludePush pc: 863 op: INTEGER_CHECK (96)
    // SubProg IncludePush pc: 865 op: STARTLINE (58)

    /** scanner.e:910		read_line()*/
    // SubProg IncludePush pc: 867 op: PROC (27)
    _62read_line();
    // SubProg IncludePush pc: 869 op: STARTLINE (58)

    /** scanner.e:912		if new_include_space != 0 then*/
    // SubProg IncludePush pc: 871 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 873 op: NOTEQ_IFW (105)
    if (_62new_include_space_25177 == 0)
    goto LE; // [873] 897
    // SubProg IncludePush pc: 877 op: STARTLINE (58)

    /** scanner.e:913			SymTab[new_include_space][S_OBJ] = current_file_no*/
    // SubProg IncludePush pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 881 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePush pc: 883 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_62new_include_space_25177 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _36current_file_no_16436;
    DeRef(_1);
    _14749 = NOVALUE;
    // SubProg IncludePush pc: 896 op: NOP1 (159)
LE: // addr: 897 pc: 896 sub: 26180 op: 159
    // SubProg IncludePush pc: 897 op: STARTLINE (58)

    /** scanner.e:915		default_namespace( )*/
    // SubProg IncludePush pc: 899 op: PROC (27)
    _62default_namespace();
    // SubProg IncludePush pc: 901 op: STARTLINE (58)

    /** scanner.e:916	end procedure*/
    // SubProg IncludePush pc: 903 op: RETURNP (29)

// Exiting block BLOCK: IncludePush

// block var new_file_handle_26182

// block var old_file_no_26183

// block var new_hash_26184
    DeRef(_new_hash_26184);

// block var idx_26185
    DeRef(_14692);
    _14692 = NOVALUE;
    return;
    // SubProg IncludePush pc: 906 op: BADRETURNF (43)
    ;
}


void _62update_include_completion(object _file_no_26407)
{
    object _fx_26416 = NOVALUE;
// skipping _14761  name type: 0
// skipping _14760  name type: 0
    object _14759 = NOVALUE; // 26428 14759
    object _14758 = NOVALUE; // 26427 14758
    object _14757 = NOVALUE; // 26424 14757
    object _14756 = NOVALUE; // 26423 14756
// skipping _14755  name type: 0
    object _14754 = NOVALUE; // 26418 14754
    object _14753 = NOVALUE; // 26415 14753
    object _14752 = NOVALUE; // 26414 14752
    object _14751 = NOVALUE; // 26411 14751
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg update_include_completion pc: 1 op: INTEGER_CHECK (96)
    // SubProg update_include_completion pc: 3 op: STARTLINE (58)

    /** scanner.e:919		for i = 1 to length( file_include_depend ) do*/
    // SubProg update_include_completion pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg update_include_completion pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_37file_include_depend_15409)){
            _14751 = SEQ_PTR(_37file_include_depend_15409)->length;
    }
    else {
        _14751 = 1;
    }
    // SubProg update_include_completion pc: 10 op: FOR_I (125)
    {
        object _i_26409;
        _i_26409 = 1;
L1: // addr: 17 pc: 10 sub: 26405 op: 125
        if (_i_26409 > _14751){
            goto L2; // [10] 114
        }
        // SubProg update_include_completion pc: 17 op: STARTLINE (58)

        /** scanner.e:920			if length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 19 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 21 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_depend_15409);
        _14752 = (object)*(((s1_ptr)_2)->base + _i_26409);
        // SubProg update_include_completion pc: 25 op: LENGTH (42)
        if (IS_SEQUENCE(_14752)){
                _14753 = SEQ_PTR(_14752)->length;
        }
        else {
            _14753 = 1;
        }
        _14752 = NOVALUE;
        // SubProg update_include_completion pc: 28 op: IF (20)
        if (_14753 == 0)
        {
            _14753 = NOVALUE;
            goto L3; // [28] 105
        }
        else{
            _14753 = NOVALUE;
        }
        // SubProg update_include_completion pc: 31 op: STARTLINE (58)

        /** scanner.e:921				integer fx = find( file_no, file_include_depend[i] )*/
        // SubProg update_include_completion pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_depend_15409);
        _14754 = (object)*(((s1_ptr)_2)->base + _i_26409);
        // SubProg update_include_completion pc: 39 op: FIND_FROM (176)
        _fx_26416 = find_from(_file_no_26407, _14754, 1);
        _14754 = NOVALUE;
        // SubProg update_include_completion pc: 44 op: STARTLINE (58)

        /** scanner.e:922				if fx then*/
        // SubProg update_include_completion pc: 46 op: IF (20)
        if (_fx_26416 == 0)
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
        _2 = (object)SEQ_PTR(_37file_include_depend_15409);
        _14756 = (object)*(((s1_ptr)_2)->base + _i_26409);
        // SubProg update_include_completion pc: 59 op: REMOVE (200)
        {
            s1_ptr assign_space = SEQ_PTR(_14756);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_26416)) ? _fx_26416 : (object)(DBL_PTR(_fx_26416)->dbl);
            int stop = (IS_ATOM_INT(_fx_26416)) ? _fx_26416 : (object)(DBL_PTR(_fx_26416)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
                RefDS(_14756);
                DeRef(_14757);
                _14757 = _14756;
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_14756), start, &_14757 );
                }
                else Tail(SEQ_PTR(_14756), stop+1, &_14757);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_14756), start, &_14757);
            }
            else {
                assign_slice_seq = &assign_space;
                _1 = Remove_elements(start, stop, 0);
                DeRef(_14757);
                _14757 = _1;
            }
        }
        _14756 = NOVALUE;
        // SubProg update_include_completion pc: 64 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_37file_include_depend_15409);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37file_include_depend_15409 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26409);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14757;
        if( _1 != _14757 ){
            DeRef(_1);
        }
        _14757 = NOVALUE;
        // SubProg update_include_completion pc: 68 op: STARTLINE (58)

        /** scanner.e:924					if not length( file_include_depend[i] ) then*/
        // SubProg update_include_completion pc: 70 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 72 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37file_include_depend_15409);
        _14758 = (object)*(((s1_ptr)_2)->base + _i_26409);
        // SubProg update_include_completion pc: 76 op: LENGTH (42)
        if (IS_SEQUENCE(_14758)){
                _14759 = SEQ_PTR(_14758)->length;
        }
        else {
            _14759 = 1;
        }
        _14758 = NOVALUE;
        // SubProg update_include_completion pc: 79 op: NOT_IFW (108)
        if (_14759 != 0)
        goto L5; // [79] 103
        _14759 = NOVALUE;
        // SubProg update_include_completion pc: 82 op: STARTLINE (58)

        /** scanner.e:925						finished_files[i] = 1*/
        // SubProg update_include_completion pc: 84 op: GLOBAL_INIT_CHECK (109)
        // SubProg update_include_completion pc: 86 op: ASSIGN_SUBS_I (118)
        _2 = (object)SEQ_PTR(_37finished_files_15408);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37finished_files_15408 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26409);
        *(intptr_t *)_2 = 1;
        // SubProg update_include_completion pc: 90 op: STARTLINE (58)

        /** scanner.e:926						if i != file_no then*/
        // SubProg update_include_completion pc: 92 op: NOTEQ_IFW_I (122)
        if (_i_26409 == _file_no_26407)
        goto L6; // [92] 102
        // SubProg update_include_completion pc: 96 op: STARTLINE (58)

        /** scanner.e:927							update_include_completion( i )*/
        // SubProg update_include_completion pc: 98 op: PROC (27)
        _62update_include_completion(_i_26409);
        // SubProg update_include_completion pc: 101 op: NOP1 (159)
L6: // addr: 102 pc: 101 sub: 26405 op: 159
        // SubProg update_include_completion pc: 102 op: NOP1 (159)
L5: // addr: 103 pc: 102 sub: 26405 op: 159
        // SubProg update_include_completion pc: 103 op: NOP1 (159)
L4: // addr: 104 pc: 103 sub: 26405 op: 159
        // SubProg update_include_completion pc: 104 op: NOP1 (159)
L3: // addr: 105 pc: 104 sub: 26405 op: 159
        // SubProg update_include_completion pc: 105 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fx_26416
        // SubProg update_include_completion pc: 107 op: STARTLINE (58)

        /** scanner.e:932		end for*/
        // SubProg update_include_completion pc: 109 op: ENDFOR_INT_UP1 (54)
        _i_26409 = _i_26409 + 1;
        goto L1; // [109] 17
L2: // addr: 114 pc: 109 sub: 26405 op: 54
        ;
    }
    // SubProg update_include_completion pc: 114 op: STARTLINE (58)

    /** scanner.e:933	end procedure*/
    // SubProg update_include_completion pc: 116 op: RETURNP (29)

// Exiting block BLOCK: update_include_completion

// block var file_no_26407
    _14752 = NOVALUE;
    _14758 = NOVALUE;
    return;
    // SubProg update_include_completion pc: 119 op: BADRETURNF (43)
    ;
}


object _62IncludePop()
{
    object _top_26447 = NOVALUE;
// skipping _14791  name type: 0
    object _14790 = NOVALUE; // 26505 14790
// skipping _14789  name type: 0
    object _14788 = NOVALUE; // 26501 14788
    object _14787 = NOVALUE; // 26500 14787
// skipping _14786  name type: 0
// skipping _14785  name type: 0
// skipping _14784  name type: 0
// skipping _14783  name type: 0
// skipping _14782  name type: 0
// skipping _14781  name type: 0
// skipping _14780  name type: 0
// skipping _14779  name type: 0
// skipping _14778  name type: 0
// skipping _14777  name type: 0
// skipping _14776  name type: 0
// skipping _14775  name type: 0
// skipping _14774  name type: 0
// skipping _14773  name type: 0
// skipping _14772  name type: 0
// skipping _14771  name type: 0
// skipping _14770  name type: 0
// skipping _14769  name type: 0
// skipping _14768  name type: 0
// skipping _14767  name type: 0
// skipping _14766  name type: 0
    object _14765 = NOVALUE; // 26448 14765
// skipping _14764  name type: 0
    object _14763 = NOVALUE; // 26444 14763
// skipping _14762  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg IncludePop pc: 1 op: STARTLINE (58)

    /** scanner.e:940		update_include_completion( current_file_no )*/
    // SubProg IncludePop pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 5 op: PROC (27)
    _62update_include_completion(_36current_file_no_16436);
    // SubProg IncludePop pc: 8 op: STARTLINE (58)

    /** scanner.e:941		Resolve_forward_references()*/
    // SubProg IncludePop pc: 10 op: PROC (27)
    _39Resolve_forward_references(0);
    // SubProg IncludePop pc: 13 op: STARTLINE (58)

    /** scanner.e:942		HideLocals()*/
    // SubProg IncludePop pc: 15 op: PROC (27)
    _54HideLocals();
    // SubProg IncludePop pc: 17 op: STARTLINE (58)

    /** scanner.e:944		if src_file >= 0 then*/
    // SubProg IncludePop pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 21 op: GREATEREQ_IFW (103)
    if (_36src_file_16557 < 0)
    goto L1; // [21] 39
    // SubProg IncludePop pc: 25 op: STARTLINE (58)

    /** scanner.e:945			close(src_file)*/
    // SubProg IncludePop pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 29 op: CLOSE (86)
    EClose(_36src_file_16557);
    // SubProg IncludePop pc: 31 op: STARTLINE (58)

    /** scanner.e:946			src_file = -1*/
    // SubProg IncludePop pc: 33 op: ASSIGN (18)
    _36src_file_16557 = -1;
    // SubProg IncludePop pc: 36 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 38 op: NOP1 (159)
L1: // addr: 39 pc: 38 sub: 26433 op: 159
    // SubProg IncludePop pc: 39 op: STARTLINE (58)

    /** scanner.e:949		if length(IncludeStk) = 0 then*/
    // SubProg IncludePop pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_62IncludeStk_25188)){
            _14763 = SEQ_PTR(_62IncludeStk_25188)->length;
    }
    else {
        _14763 = 1;
    }
    // SubProg IncludePop pc: 46 op: EQUALS_IFW_I (121)
    if (_14763 != 0)
    goto L2; // [46] 59
    // SubProg IncludePop pc: 50 op: STARTLINE (58)

    /** scanner.e:950			return FALSE  -- the end*/
    // SubProg IncludePop pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 54 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26447
    DeRef(_top_26447);
    return _13FALSE_450;
    // SubProg IncludePop pc: 58 op: NOP1 (159)
L2: // addr: 59 pc: 58 sub: 26433 op: 159
    // SubProg IncludePop pc: 59 op: STARTLINE (58)

    /** scanner.e:953		sequence top = IncludeStk[$]*/
    // SubProg IncludePop pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_62IncludeStk_25188)){
            _14765 = SEQ_PTR(_62IncludeStk_25188)->length;
    }
    else {
        _14765 = 1;
    }
    // SubProg IncludePop pc: 66 op: RHS_SUBS (25)
    DeRef(_top_26447);
    _2 = (object)SEQ_PTR(_62IncludeStk_25188);
    _top_26447 = (object)*(((s1_ptr)_2)->base + _14765);
    RefDS(_top_26447);
    // SubProg IncludePop pc: 70 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 72 op: STARTLINE (58)

    /** scanner.e:955		current_file_no    = top[FILE_NO]*/
    // SubProg IncludePop pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36current_file_no_16436 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_36current_file_no_16436)){
        _36current_file_no_16436 = (object)DBL_PTR(_36current_file_no_16436)->dbl;
    }
    // SubProg IncludePop pc: 80 op: STARTLINE (58)

    /** scanner.e:956		line_number        = top[LINE_NO]*/
    // SubProg IncludePop pc: 82 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36line_number_16437 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_36line_number_16437)){
        _36line_number_16437 = (object)DBL_PTR(_36line_number_16437)->dbl;
    }
    // SubProg IncludePop pc: 88 op: STARTLINE (58)

    /** scanner.e:957		src_file           = top[FILE_PTR]*/
    // SubProg IncludePop pc: 90 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36src_file_16557 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_36src_file_16557)){
        _36src_file_16557 = (object)DBL_PTR(_36src_file_16557)->dbl;
    }
    // SubProg IncludePop pc: 96 op: STARTLINE (58)

    /** scanner.e:958		file_start_sym     = top[FILE_START_SYM]*/
    // SubProg IncludePop pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36file_start_sym_16442 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_36file_start_sym_16442)){
        _36file_start_sym_16442 = (object)DBL_PTR(_36file_start_sym_16442)->dbl;
    }
    // SubProg IncludePop pc: 104 op: STARTLINE (58)

    /** scanner.e:959		OpWarning          = top[OP_WARNING]*/
    // SubProg IncludePop pc: 106 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpWarning_16503 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_36OpWarning_16503)){
        _36OpWarning_16503 = (object)DBL_PTR(_36OpWarning_16503)->dbl;
    }
    // SubProg IncludePop pc: 112 op: STARTLINE (58)

    /** scanner.e:960		OpTrace            = top[OP_TRACE]*/
    // SubProg IncludePop pc: 114 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpTrace_16505 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_36OpTrace_16505)){
        _36OpTrace_16505 = (object)DBL_PTR(_36OpTrace_16505)->dbl;
    }
    // SubProg IncludePop pc: 120 op: STARTLINE (58)

    /** scanner.e:961		OpTypeCheck        = top[OP_TYPE_CHECK]*/
    // SubProg IncludePop pc: 122 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpTypeCheck_16506 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_36OpTypeCheck_16506)){
        _36OpTypeCheck_16506 = (object)DBL_PTR(_36OpTypeCheck_16506)->dbl;
    }
    // SubProg IncludePop pc: 128 op: STARTLINE (58)

    /** scanner.e:962		OpProfileTime      = top[OP_PROFILE_TIME]*/
    // SubProg IncludePop pc: 130 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpProfileTime_16508 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_36OpProfileTime_16508)){
        _36OpProfileTime_16508 = (object)DBL_PTR(_36OpProfileTime_16508)->dbl;
    }
    // SubProg IncludePop pc: 136 op: STARTLINE (58)

    /** scanner.e:963		OpProfileStatement = top[OP_PROFILE_STATEMENT]*/
    // SubProg IncludePop pc: 138 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpProfileStatement_16507 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_36OpProfileStatement_16507)){
        _36OpProfileStatement_16507 = (object)DBL_PTR(_36OpProfileStatement_16507)->dbl;
    }
    // SubProg IncludePop pc: 144 op: STARTLINE (58)

    /** scanner.e:964		OpDefines          = top[OP_DEFINES]*/
    // SubProg IncludePop pc: 146 op: RHS_SUBS (25)
    DeRef(_36OpDefines_16509);
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpDefines_16509 = (object)*(((s1_ptr)_2)->base + 10);
    Ref(_36OpDefines_16509);
    // SubProg IncludePop pc: 150 op: SEQUENCE_CHECK (97)
    // SubProg IncludePop pc: 152 op: STARTLINE (58)

    /** scanner.e:965		prev_OpWarning     = top[PREV_OP_WARNING]*/
    // SubProg IncludePop pc: 154 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36prev_OpWarning_16504 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_36prev_OpWarning_16504)){
        _36prev_OpWarning_16504 = (object)DBL_PTR(_36prev_OpWarning_16504)->dbl;
    }
    // SubProg IncludePop pc: 160 op: STARTLINE (58)

    /** scanner.e:966		OpInline           = top[OP_INLINE]*/
    // SubProg IncludePop pc: 162 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpInline_16510 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_36OpInline_16510)){
        _36OpInline_16510 = (object)DBL_PTR(_36OpInline_16510)->dbl;
    }
    // SubProg IncludePop pc: 168 op: STARTLINE (58)

    /** scanner.e:967		OpIndirectInclude  = top[OP_INDIRECT_INCLUDE]*/
    // SubProg IncludePop pc: 170 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36OpIndirectInclude_16511 = (object)*(((s1_ptr)_2)->base + 13);
    if (!IS_ATOM_INT(_36OpIndirectInclude_16511)){
        _36OpIndirectInclude_16511 = (object)DBL_PTR(_36OpIndirectInclude_16511)->dbl;
    }
    // SubProg IncludePop pc: 176 op: STARTLINE (58)

    /** scanner.e:968		putback_fwd_line_number = line_number -- top[PUTBACK_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 178 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 180 op: ASSIGN (18)
    _36putback_fwd_line_number_16439 = _36line_number_16437;
    // SubProg IncludePop pc: 183 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 185 op: STARTLINE (58)

    /** scanner.e:969		putback_ForwardLine = top[PUTBACK_FORWARDLINE]*/
    // SubProg IncludePop pc: 187 op: RHS_SUBS (25)
    DeRef(_50putback_ForwardLine_48709);
    _2 = (object)SEQ_PTR(_top_26447);
    _50putback_ForwardLine_48709 = (object)*(((s1_ptr)_2)->base + 15);
    Ref(_50putback_ForwardLine_48709);
    // SubProg IncludePop pc: 191 op: STARTLINE (58)

    /** scanner.e:970		putback_forward_bp = top[PUTBACK_FORWARD_BP]*/
    // SubProg IncludePop pc: 193 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _50putback_forward_bp_48713 = (object)*(((s1_ptr)_2)->base + 16);
    if (!IS_ATOM_INT(_50putback_forward_bp_48713)){
        _50putback_forward_bp_48713 = (object)DBL_PTR(_50putback_forward_bp_48713)->dbl;
    }
    // SubProg IncludePop pc: 199 op: STARTLINE (58)

    /** scanner.e:971		last_fwd_line_number = top[LAST_FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 201 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _36last_fwd_line_number_16440 = (object)*(((s1_ptr)_2)->base + 17);
    if (!IS_ATOM_INT(_36last_fwd_line_number_16440)){
        _36last_fwd_line_number_16440 = (object)DBL_PTR(_36last_fwd_line_number_16440)->dbl;
    }
    // SubProg IncludePop pc: 207 op: STARTLINE (58)

    /** scanner.e:972		last_ForwardLine = top[LAST_FORWARDLINE]*/
    // SubProg IncludePop pc: 209 op: RHS_SUBS (25)
    DeRef(_50last_ForwardLine_48710);
    _2 = (object)SEQ_PTR(_top_26447);
    _50last_ForwardLine_48710 = (object)*(((s1_ptr)_2)->base + 18);
    Ref(_50last_ForwardLine_48710);
    // SubProg IncludePop pc: 213 op: STARTLINE (58)

    /** scanner.e:973		last_forward_bp = top[LAST_FORWARD_BP]*/
    // SubProg IncludePop pc: 215 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _50last_forward_bp_48714 = (object)*(((s1_ptr)_2)->base + 19);
    if (!IS_ATOM_INT(_50last_forward_bp_48714)){
        _50last_forward_bp_48714 = (object)DBL_PTR(_50last_forward_bp_48714)->dbl;
    }
    // SubProg IncludePop pc: 221 op: STARTLINE (58)

    /** scanner.e:974		ThisLine = top[THISLINE]*/
    // SubProg IncludePop pc: 223 op: RHS_SUBS (25)
    DeRef(_50ThisLine_48707);
    _2 = (object)SEQ_PTR(_top_26447);
    _50ThisLine_48707 = (object)*(((s1_ptr)_2)->base + 20);
    Ref(_50ThisLine_48707);
    // SubProg IncludePop pc: 227 op: STARTLINE (58)

    /** scanner.e:976		fwd_line_number = line_number --top[FWD_LINE_NUMBER]*/
    // SubProg IncludePop pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 231 op: ASSIGN (18)
    _36fwd_line_number_16438 = _36line_number_16437;
    // SubProg IncludePop pc: 234 op: INTEGER_CHECK (96)
    // SubProg IncludePop pc: 236 op: STARTLINE (58)

    /** scanner.e:977		forward_bp = top[FORWARD_BP]*/
    // SubProg IncludePop pc: 238 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_top_26447);
    _50forward_bp_48712 = (object)*(((s1_ptr)_2)->base + 22);
    if (!IS_ATOM_INT(_50forward_bp_48712)){
        _50forward_bp_48712 = (object)DBL_PTR(_50forward_bp_48712)->dbl;
    }
    // SubProg IncludePop pc: 244 op: STARTLINE (58)

    /** scanner.e:978		ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 248 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_50ForwardLine_48708);
    _50ForwardLine_48708 = _50ThisLine_48707;
    // SubProg IncludePop pc: 251 op: STARTLINE (58)

    /** scanner.e:980		putback_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 255 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_50putback_ForwardLine_48709);
    _50putback_ForwardLine_48709 = _50ThisLine_48707;
    // SubProg IncludePop pc: 258 op: STARTLINE (58)

    /** scanner.e:981		last_ForwardLine = ThisLine*/
    // SubProg IncludePop pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 262 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_50last_ForwardLine_48710);
    _50last_ForwardLine_48710 = _50ThisLine_48707;
    // SubProg IncludePop pc: 265 op: STARTLINE (58)

    /** scanner.e:983		IncludeStk = IncludeStk[1..$-1]*/
    // SubProg IncludePop pc: 267 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 269 op: LENGTH (42)
    if (IS_SEQUENCE(_62IncludeStk_25188)){
            _14787 = SEQ_PTR(_62IncludeStk_25188)->length;
    }
    else {
        _14787 = 1;
    }
    // SubProg IncludePop pc: 272 op: MINUS (10)
    _14788 = _14787 - 1;
    _14787 = NOVALUE;
    // SubProg IncludePop pc: 276 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_62IncludeStk_25188;
    RHS_Slice(_62IncludeStk_25188, 1, _14788);
    // SubProg IncludePop pc: 281 op: STARTLINE (58)

    /** scanner.e:984		SymTab[TopLevelSub][S_CODE] = Code*/
    // SubProg IncludePop pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 285 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 287 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36TopLevelSub_16443 + ((s1_ptr)_2)->base);
    // SubProg IncludePop pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 296 op: PASSIGN_SUBS (162)
    RefDS(_36Code_16524);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_CODE_16103))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_CODE_16103);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36Code_16524;
    DeRef(_1);
    _14790 = NOVALUE;
    // SubProg IncludePop pc: 300 op: STARTLINE (58)

    /** scanner.e:987		return TRUE*/
    // SubProg IncludePop pc: 302 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludePop pc: 304 op: RETURNF (28)

// Exiting block BLOCK: IncludePop

// block var top_26447
    DeRefDS(_top_26447);
    _14788 = NOVALUE;
    return _13TRUE_452;
    // SubProg IncludePop pc: 308 op: BADRETURNF (43)
    ;
}


object _62MakeInt(object _text_26548, object _nBase_26549)
{
    object _num_26550 = NOVALUE;
    object _fnum_26551 = NOVALUE;
    object _digit_26552 = NOVALUE;
    object _maxchk_26553 = NOVALUE;
// skipping _14842  name type: 0
// skipping _14841  name type: 0
    object _14840 = NOVALUE; // 26585 14840
// skipping _14839  name type: 0
    object _14838 = NOVALUE; // 26582 14838
// skipping _14837  name type: 0
    object _14836 = NOVALUE; // 26579 14836
// skipping _14835  name type: 0
// skipping _14834  name type: 0
    object _14833 = NOVALUE; // 26574 14833
    object _14832 = NOVALUE; // 26573 14832
    object _14831 = NOVALUE; // 26571 14831
// skipping _14830  name type: 0
    object _14829 = NOVALUE; // 26569 14829
// skipping _14828  name type: 0
    object _14827 = NOVALUE; // 26566 14827
    object _14826 = NOVALUE; // 26565 14826
    object _14825 = NOVALUE; // 26561 14825
// skipping _14824  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg MakeInt pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg MakeInt pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_nBase_26549)) {
        _1 = (object)(DBL_PTR(_nBase_26549)->dbl);
        DeRefDS(_nBase_26549);
        _nBase_26549 = _1;
    }
    // SubProg MakeInt pc: 5 op: STARTLINE (58)

    /** scanner.e:1018		switch nBase do*/
    // SubProg MakeInt pc: 7 op: SWITCH_I (193)
    _0 = _nBase_26549;
    switch ( _0 ){ 
        // SubProg MakeInt pc: 12 op: STARTLINE (58)

        /** scanner.e:1019			case 2 then*/
        // SubProg MakeInt pc: 14 op: CASE (186)
        case 2:
        // SubProg MakeInt pc: 16 op: STARTLINE (58)

        /** scanner.e:1020				maxchk = MAXCHK2*/
        // SubProg MakeInt pc: 18 op: ASSIGN_I (113)
        _maxchk_26553 = 536870911;
        // SubProg MakeInt pc: 21 op: ELSE (23)
        goto L1; // [21] 82
        // SubProg MakeInt pc: 23 op: STARTLINE (58)

        /** scanner.e:1022			case 8 then*/
        // SubProg MakeInt pc: 25 op: CASE (186)
        case 8:
        // SubProg MakeInt pc: 27 op: STARTLINE (58)

        /** scanner.e:1023				maxchk = MAXCHK8*/
        // SubProg MakeInt pc: 29 op: ASSIGN_I (113)
        _maxchk_26553 = 134217727;
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
        _num_26550 = find_from(_text_26548, _62common_int_text_26523, 1);
        // SubProg MakeInt pc: 47 op: STARTLINE (58)

        /** scanner.e:1028				if num then*/
        // SubProg MakeInt pc: 49 op: IF (20)
        if (_num_26550 == 0)
        {
            goto L2; // [49] 65
        }
        else{
        }
        // SubProg MakeInt pc: 52 op: STARTLINE (58)

        /** scanner.e:1029					return common_ints[num]*/
        // SubProg MakeInt pc: 54 op: GLOBAL_INIT_CHECK (109)
        // SubProg MakeInt pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62common_ints_26543);
        _14825 = (object)*(((s1_ptr)_2)->base + _num_26550);
        // SubProg MakeInt pc: 60 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26548
        DeRefDS(_text_26548);

// block var nBase_26549

// block var num_26550

// block var fnum_26551
        DeRef(_fnum_26551);

// block var digit_26552

// block var maxchk_26553
        return _14825;
        // SubProg MakeInt pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 26546 op: 159
        // SubProg MakeInt pc: 65 op: STARTLINE (58)

        /** scanner.e:1032				maxchk = MAXCHK10*/
        // SubProg MakeInt pc: 67 op: ASSIGN_I (113)
        _maxchk_26553 = 107374181;
        // SubProg MakeInt pc: 70 op: ELSE (23)
        goto L1; // [70] 82
        // SubProg MakeInt pc: 72 op: STARTLINE (58)

        /** scanner.e:1034			case 16 then*/
        // SubProg MakeInt pc: 74 op: CASE (186)
        case 16:
        // SubProg MakeInt pc: 76 op: STARTLINE (58)

        /** scanner.e:1035				maxchk = MAXCHK16*/
        // SubProg MakeInt pc: 78 op: ASSIGN_I (113)
        _maxchk_26553 = 67108863;
        // SubProg MakeInt pc: 81 op: NOPSWITCH (187)
    ;}L1: // addr: 82 pc: 81 sub: 26546 op: 187
    // SubProg MakeInt pc: 82 op: STARTLINE (58)

    /** scanner.e:1039		num = 0*/
    // SubProg MakeInt pc: 84 op: ASSIGN_I (113)
    _num_26550 = 0;
    // SubProg MakeInt pc: 87 op: STARTLINE (58)

    /** scanner.e:1040		fnum = 0*/
    // SubProg MakeInt pc: 89 op: ASSIGN (18)
    DeRef(_fnum_26551);
    _fnum_26551 = 0;
    // SubProg MakeInt pc: 92 op: STARTLINE (58)

    /** scanner.e:1041		for i = 1 to length(text) do*/
    // SubProg MakeInt pc: 94 op: LENGTH (42)
    if (IS_SEQUENCE(_text_26548)){
            _14826 = SEQ_PTR(_text_26548)->length;
    }
    else {
        _14826 = 1;
    }
    // SubProg MakeInt pc: 97 op: FOR_I (125)
    {
        object _i_26564;
        _i_26564 = 1;
L3: // addr: 104 pc: 97 sub: 26546 op: 125
        if (_i_26564 > _14826){
            goto L4; // [97] 212
        }
        // SubProg MakeInt pc: 104 op: STARTLINE (58)

        /** scanner.e:1042			digit = (text[i] - '0')*/
        // SubProg MakeInt pc: 106 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26548);
        _14827 = (object)*(((s1_ptr)_2)->base + _i_26564);
        // SubProg MakeInt pc: 110 op: MINUS (10)
        if (IS_ATOM_INT(_14827)) {
            _digit_26552 = _14827 - 48;
        }
        else {
            _digit_26552 = binary_op(MINUS, _14827, 48);
        }
        _14827 = NOVALUE;
        // SubProg MakeInt pc: 114 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_digit_26552)) {
            _1 = (object)(DBL_PTR(_digit_26552)->dbl);
            DeRefDS(_digit_26552);
            _digit_26552 = _1;
        }
        // SubProg MakeInt pc: 116 op: STARTLINE (58)

        /** scanner.e:1043			if digit >= nBase or digit < 0 then*/
        // SubProg MakeInt pc: 118 op: GREATEREQ (2)
        _14829 = (_digit_26552 >= _nBase_26549);
        // SubProg MakeInt pc: 122 op: SC1_OR_IF (147)
        if (_14829 != 0) {
            goto L5; // [122] 135
        }
        // SubProg MakeInt pc: 126 op: LESS (1)
        _14831 = (_digit_26552 < 0);
        // SubProg MakeInt pc: 130 op: NOP1 (159)
        // SubProg MakeInt pc: 131 op: IF (20)
        if (_14831 == 0)
        {
            DeRef(_14831);
            _14831 = NOVALUE;
            goto L6; // [131] 151
        }
        else{
            DeRef(_14831);
            _14831 = NOVALUE;
        }
        // SubProg MakeInt pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 26546 op: 159
        // SubProg MakeInt pc: 135 op: STARTLINE (58)

        /** scanner.e:1044				CompileErr(62, {text[i],i})*/
        // SubProg MakeInt pc: 137 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_text_26548);
        _14832 = (object)*(((s1_ptr)_2)->base + _i_26564);
        // SubProg MakeInt pc: 141 op: RIGHT_BRACE_2 (85)
        Ref(_14832);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _14832;
        ((intptr_t *)_2)[2] = _i_26564;
        _14833 = MAKE_SEQ(_1);
        _14832 = NOVALUE;
        // SubProg MakeInt pc: 145 op: PROC (27)
        _50CompileErr(62, _14833, 0);
        _14833 = NOVALUE;
        // SubProg MakeInt pc: 150 op: NOP1 (159)
L6: // addr: 151 pc: 150 sub: 26546 op: 159
        // SubProg MakeInt pc: 151 op: STARTLINE (58)

        /** scanner.e:1046			if fnum = 0 then*/
        // SubProg MakeInt pc: 153 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _fnum_26551, 0)){
            goto L7; // [153] 194
        }
        // SubProg MakeInt pc: 157 op: STARTLINE (58)

        /** scanner.e:1047				if num <= maxchk then*/
        // SubProg MakeInt pc: 159 op: PRIVATE_INIT_CHECK (30)
        // SubProg MakeInt pc: 161 op: LESSEQ_IFW_I (123)
        if (_num_26550 > _maxchk_26553)
        goto L8; // [161] 180
        // SubProg MakeInt pc: 165 op: STARTLINE (58)

        /** scanner.e:1048					num = num * nBase + digit*/
        // SubProg MakeInt pc: 167 op: MULTIPLY (13)
        if (_num_26550 == (short)_num_26550 && _nBase_26549 <= INT15 && _nBase_26549 >= -INT15){
            _14836 = _num_26550 * _nBase_26549;
        }
        else{
            _14836 = NewDouble(_num_26550 * (eudouble)_nBase_26549);
        }
        // SubProg MakeInt pc: 171 op: PLUS (11)
        if (IS_ATOM_INT(_14836)) {
            _num_26550 = _14836 + _digit_26552;
        }
        else {
            _num_26550 = NewDouble(DBL_PTR(_14836)->dbl + (eudouble)_digit_26552);
        }
        DeRef(_14836);
        _14836 = NOVALUE;
        // SubProg MakeInt pc: 175 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_num_26550)) {
            _1 = (object)(DBL_PTR(_num_26550)->dbl);
            DeRefDS(_num_26550);
            _num_26550 = _1;
        }
        // SubProg MakeInt pc: 177 op: ELSE (23)
        goto L9; // [177] 205
        // SubProg MakeInt pc: 179 op: NOP1 (159)
L8: // addr: 180 pc: 179 sub: 26546 op: 159
        // SubProg MakeInt pc: 180 op: STARTLINE (58)

        /** scanner.e:1050					fnum = num * nBase + digit*/
        // SubProg MakeInt pc: 182 op: MULTIPLY (13)
        if (_num_26550 == (short)_num_26550 && _nBase_26549 <= INT15 && _nBase_26549 >= -INT15){
            _14838 = _num_26550 * _nBase_26549;
        }
        else{
            _14838 = NewDouble(_num_26550 * (eudouble)_nBase_26549);
        }
        // SubProg MakeInt pc: 186 op: PLUS (11)
        DeRef(_fnum_26551);
        if (IS_ATOM_INT(_14838)) {
            _fnum_26551 = _14838 + _digit_26552;
            if ((object)((uintptr_t)_fnum_26551 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26551 = NewDouble((eudouble)_fnum_26551);
            }
        }
        else {
            _fnum_26551 = NewDouble(DBL_PTR(_14838)->dbl + (eudouble)_digit_26552);
        }
        DeRef(_14838);
        _14838 = NOVALUE;
        // SubProg MakeInt pc: 190 op: NOP1 (159)
        // SubProg MakeInt pc: 191 op: ELSE (23)
        goto L9; // [191] 205
        // SubProg MakeInt pc: 193 op: NOP1 (159)
L7: // addr: 194 pc: 193 sub: 26546 op: 159
        // SubProg MakeInt pc: 194 op: STARTLINE (58)

        /** scanner.e:1053				fnum = fnum * nBase + digit*/
        // SubProg MakeInt pc: 196 op: MULTIPLY (13)
        if (IS_ATOM_INT(_fnum_26551)) {
            if (_fnum_26551 == (short)_fnum_26551 && _nBase_26549 <= INT15 && _nBase_26549 >= -INT15){
                _14840 = _fnum_26551 * _nBase_26549;
            }
            else{
                _14840 = NewDouble(_fnum_26551 * (eudouble)_nBase_26549);
            }
        }
        else {
            _14840 = NewDouble(DBL_PTR(_fnum_26551)->dbl * (eudouble)_nBase_26549);
        }
        // SubProg MakeInt pc: 200 op: PLUS (11)
        DeRef(_fnum_26551);
        if (IS_ATOM_INT(_14840)) {
            _fnum_26551 = _14840 + _digit_26552;
            if ((object)((uintptr_t)_fnum_26551 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26551 = NewDouble((eudouble)_fnum_26551);
            }
        }
        else {
            _fnum_26551 = NewDouble(DBL_PTR(_14840)->dbl + (eudouble)_digit_26552);
        }
        DeRef(_14840);
        _14840 = NOVALUE;
        // SubProg MakeInt pc: 204 op: NOP1 (159)
L9: // addr: 205 pc: 204 sub: 26546 op: 159
        // SubProg MakeInt pc: 205 op: STARTLINE (58)

        /** scanner.e:1055		end for*/
        // SubProg MakeInt pc: 207 op: ENDFOR_INT_UP1 (54)
        _i_26564 = _i_26564 + 1;
        goto L3; // [207] 104
L4: // addr: 212 pc: 207 sub: 26546 op: 54
        ;
    }
    // SubProg MakeInt pc: 212 op: STARTLINE (58)

    /** scanner.e:1057		if fnum = 0 then*/
    // SubProg MakeInt pc: 214 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _fnum_26551, 0)){
        goto LA; // [214] 227
    }
    // SubProg MakeInt pc: 218 op: STARTLINE (58)

    /** scanner.e:1058			return num*/
    // SubProg MakeInt pc: 220 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26548
    DeRefDS(_text_26548);

// block var nBase_26549

// block var fnum_26551
    DeRef(_fnum_26551);

// block var digit_26552

// block var maxchk_26553
    _14825 = NOVALUE;
    DeRef(_14829);
    _14829 = NOVALUE;
    return _num_26550;
    // SubProg MakeInt pc: 224 op: ELSE (23)
    goto LB; // [224] 234
    // SubProg MakeInt pc: 226 op: NOP1 (159)
LA: // addr: 227 pc: 226 sub: 26546 op: 159
    // SubProg MakeInt pc: 227 op: STARTLINE (58)

    /** scanner.e:1060			return fnum*/
    // SubProg MakeInt pc: 229 op: RETURNF (28)

// Exiting block BLOCK: MakeInt

// block var text_26548
    DeRefDS(_text_26548);

// block var nBase_26549

// block var num_26550

// block var digit_26552

// block var maxchk_26553
    _14825 = NOVALUE;
    DeRef(_14829);
    _14829 = NOVALUE;
    return _fnum_26551;
    // SubProg MakeInt pc: 233 op: NOP1 (159)
LB: // addr: 234 pc: 233 sub: 26546 op: 159
    // SubProg MakeInt pc: 234 op: BADRETURNF (43)
    ;
}


object _62GetHexChar(object _cnt_26592, object _errno_26593)
{
    object _val_26594 = NOVALUE;
    object _d_26595 = NOVALUE;
// skipping _14854  name type: 0
// skipping _14853  name type: 0
// skipping _14852  name type: 0
// skipping _14851  name type: 0
    object _14850 = NOVALUE; // 26607 14850
    object _14849 = NOVALUE; // 26606 14849
// skipping _14848  name type: 0
// skipping _14847  name type: 0
// skipping _14846  name type: 0
    object _14844 = NOVALUE; // 26598 14844
// skipping _14843  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 3 op: INTEGER_CHECK (96)
    // SubProg GetHexChar pc: 5 op: STARTLINE (58)

    /** scanner.e:1067		val = 0*/
    // SubProg GetHexChar pc: 7 op: ASSIGN (18)
    DeRef(_val_26594);
    _val_26594 = 0;
    // SubProg GetHexChar pc: 10 op: STARTLINE (58)

    /** scanner.e:1069		while cnt > 0 do*/
    // SubProg GetHexChar pc: 12 op: NOP2 (110)
    // SubProg GetHexChar pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 26590 op: 158
    // SubProg GetHexChar pc: 15 op: GREATER_IFW_I (124)
    if (_cnt_26592 <= 0)
    goto L2; // [15] 88
    // SubProg GetHexChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1070			d = find(getch(), "0123456789ABCDEFabcdef_")*/
    // SubProg GetHexChar pc: 21 op: PROC (27)
    _14844 = _62getch();
    // SubProg GetHexChar pc: 24 op: FIND_FROM (176)
    _d_26595 = find_from(_14844, _14845, 1);
    DeRef(_14844);
    _14844 = NOVALUE;
    // SubProg GetHexChar pc: 29 op: STARTLINE (58)

    /** scanner.e:1071			if d = 0 then*/
    // SubProg GetHexChar pc: 31 op: EQUALS_IFW_I (121)
    if (_d_26595 != 0)
    goto L3; // [31] 43
    // SubProg GetHexChar pc: 35 op: STARTLINE (58)

    /** scanner.e:1072				CompileErr( errno )*/
    // SubProg GetHexChar pc: 37 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(_errno_26593, _21933, 0);
    // SubProg GetHexChar pc: 42 op: NOP1 (159)
L3: // addr: 43 pc: 42 sub: 26590 op: 159
    // SubProg GetHexChar pc: 43 op: STARTLINE (58)

    /** scanner.e:1074			if d != 23 then*/
    // SubProg GetHexChar pc: 45 op: NOTEQ_IFW_I (122)
    if (_d_26595 == 23)
    goto L1; // [45] 15
    // SubProg GetHexChar pc: 49 op: STARTLINE (58)

    /** scanner.e:1075				val = val * 16 + d - 1*/
    // SubProg GetHexChar pc: 51 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26594)) {
        if (_val_26594 == (short)_val_26594){
            _14849 = _val_26594 * 16;
        }
        else{
            _14849 = NewDouble(_val_26594 * (eudouble)16);
        }
    }
    else {
        _14849 = NewDouble(DBL_PTR(_val_26594)->dbl * (eudouble)16);
    }
    // SubProg GetHexChar pc: 55 op: PLUS (11)
    if (IS_ATOM_INT(_14849)) {
        _14850 = _14849 + _d_26595;
        if ((object)((uintptr_t)_14850 + (uintptr_t)HIGH_BITS) >= 0){
            _14850 = NewDouble((eudouble)_14850);
        }
    }
    else {
        _14850 = NewDouble(DBL_PTR(_14849)->dbl + (eudouble)_d_26595);
    }
    DeRef(_14849);
    _14849 = NOVALUE;
    // SubProg GetHexChar pc: 59 op: MINUS (10)
    DeRef(_val_26594);
    if (IS_ATOM_INT(_14850)) {
        _val_26594 = _14850 - 1;
        if ((object)((uintptr_t)_val_26594 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26594 = NewDouble((eudouble)_val_26594);
        }
    }
    else {
        _val_26594 = NewDouble(DBL_PTR(_14850)->dbl - (eudouble)1);
    }
    DeRef(_14850);
    _14850 = NOVALUE;
    // SubProg GetHexChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1076				if d > 16 then*/
    // SubProg GetHexChar pc: 65 op: GREATER_IFW_I (124)
    if (_d_26595 <= 16)
    goto L4; // [65] 76
    // SubProg GetHexChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1077					val -= 6*/
    // SubProg GetHexChar pc: 71 op: MINUS (10)
    _0 = _val_26594;
    if (IS_ATOM_INT(_val_26594)) {
        _val_26594 = _val_26594 - 6;
        if ((object)((uintptr_t)_val_26594 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26594 = NewDouble((eudouble)_val_26594);
        }
    }
    else {
        _val_26594 = NewDouble(DBL_PTR(_val_26594)->dbl - (eudouble)6);
    }
    DeRef(_0);
    // SubProg GetHexChar pc: 75 op: NOP1 (159)
L4: // addr: 76 pc: 75 sub: 26590 op: 159
    // SubProg GetHexChar pc: 76 op: STARTLINE (58)

    /** scanner.e:1079				cnt -= 1*/
    // SubProg GetHexChar pc: 78 op: MINUS_I (116)
    _cnt_26592 = _cnt_26592 - 1;
    // SubProg GetHexChar pc: 82 op: NOP1 (159)
    // SubProg GetHexChar pc: 83 op: STARTLINE (58)

    /** scanner.e:1081		end while*/
    // SubProg GetHexChar pc: 85 op: ENDWHILE (22)
    goto L1; // [85] 15
    // SubProg GetHexChar pc: 87 op: NOP1 (159)
L2: // addr: 88 pc: 87 sub: 26590 op: 159
    // SubProg GetHexChar pc: 88 op: STARTLINE (58)

    /** scanner.e:1083		return val*/
    // SubProg GetHexChar pc: 90 op: RETURNF (28)

// Exiting block BLOCK: GetHexChar

// block var cnt_26592

// block var errno_26593

// block var d_26595
    return _val_26594;
    // SubProg GetHexChar pc: 94 op: BADRETURNF (43)
    ;
}


object _62GetBinaryChar(object _delim_26615)
{
    object _val_26616 = NOVALUE;
    object _d_26617 = NOVALUE;
    object _vchars_26618 = NOVALUE;
    object _cnt_26621 = NOVALUE;
// skipping _14867  name type: 0
// skipping _14866  name type: 0
// skipping _14865  name type: 0
    object _14864 = NOVALUE; // 26635 14864
    object _14863 = NOVALUE; // 26634 14863
// skipping _14862  name type: 0
// skipping _14861  name type: 0
// skipping _14860  name type: 0
// skipping _14859  name type: 0
// skipping _14858  name type: 0
    object _14857 = NOVALUE; // 26623 14857
// skipping _14856  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBinaryChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetBinaryChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1089		sequence vchars = "01_ " & delim*/
    // SubProg GetBinaryChar pc: 5 op: CONCAT (15)
    Append(&_vchars_26618, _14855, _delim_26615);
    // SubProg GetBinaryChar pc: 9 op: STARTLINE (58)

    /** scanner.e:1090		integer cnt = 0*/
    // SubProg GetBinaryChar pc: 11 op: ASSIGN_I (113)
    _cnt_26621 = 0;
    // SubProg GetBinaryChar pc: 14 op: STARTLINE (58)

    /** scanner.e:1091		val = 0*/
    // SubProg GetBinaryChar pc: 16 op: ASSIGN (18)
    DeRef(_val_26616);
    _val_26616 = 0;
    // SubProg GetBinaryChar pc: 19 op: STARTLINE (58)

    /** scanner.e:1092		while 1 do*/
    // SubProg GetBinaryChar pc: 21 op: NOP2 (110)
    // SubProg GetBinaryChar pc: 23 op: NOPWHILE (158)
L1: // addr: 24 pc: 23 sub: 26613 op: 158
    // SubProg GetBinaryChar pc: 24 op: STARTLINE (58)

    /** scanner.e:1093			d = find(getch(), vchars)*/
    // SubProg GetBinaryChar pc: 26 op: PROC (27)
    _14857 = _62getch();
    // SubProg GetBinaryChar pc: 29 op: FIND_FROM (176)
    _d_26617 = find_from(_14857, _vchars_26618, 1);
    DeRef(_14857);
    _14857 = NOVALUE;
    // SubProg GetBinaryChar pc: 34 op: STARTLINE (58)

    /** scanner.e:1094			if d = 0 then*/
    // SubProg GetBinaryChar pc: 36 op: EQUALS_IFW_I (121)
    if (_d_26617 != 0)
    goto L2; // [36] 48
    // SubProg GetBinaryChar pc: 40 op: STARTLINE (58)

    /** scanner.e:1095				CompileErr( 343 )*/
    // SubProg GetBinaryChar pc: 42 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(343, _21933, 0);
    // SubProg GetBinaryChar pc: 47 op: NOP1 (159)
L2: // addr: 48 pc: 47 sub: 26613 op: 159
    // SubProg GetBinaryChar pc: 48 op: STARTLINE (58)

    /** scanner.e:1097			if d = 5 then*/
    // SubProg GetBinaryChar pc: 50 op: EQUALS_IFW_I (121)
    if (_d_26617 != 5)
    goto L3; // [50] 63
    // SubProg GetBinaryChar pc: 54 op: STARTLINE (58)

    /** scanner.e:1098				ungetch()*/
    // SubProg GetBinaryChar pc: 56 op: PROC (27)
    _62ungetch();
    // SubProg GetBinaryChar pc: 58 op: STARTLINE (58)

    /** scanner.e:1099				exit*/
    // SubProg GetBinaryChar pc: 60 op: EXIT (61)
    goto L4; // [60] 106
    // SubProg GetBinaryChar pc: 62 op: NOP1 (159)
L3: // addr: 63 pc: 62 sub: 26613 op: 159
    // SubProg GetBinaryChar pc: 63 op: STARTLINE (58)

    /** scanner.e:1101			if d = 4 then*/
    // SubProg GetBinaryChar pc: 65 op: EQUALS_IFW_I (121)
    if (_d_26617 != 4)
    goto L5; // [65] 74
    // SubProg GetBinaryChar pc: 69 op: STARTLINE (58)

    /** scanner.e:1102				exit*/
    // SubProg GetBinaryChar pc: 71 op: EXIT (61)
    goto L4; // [71] 106
    // SubProg GetBinaryChar pc: 73 op: NOP1 (159)
L5: // addr: 74 pc: 73 sub: 26613 op: 159
    // SubProg GetBinaryChar pc: 74 op: STARTLINE (58)

    /** scanner.e:1104			if d != 3 then*/
    // SubProg GetBinaryChar pc: 76 op: NOTEQ_IFW_I (122)
    if (_d_26617 == 3)
    goto L1; // [76] 24
    // SubProg GetBinaryChar pc: 80 op: STARTLINE (58)

    /** scanner.e:1105				val = val * 2 + d - 1*/
    // SubProg GetBinaryChar pc: 82 op: PLUS (11)
    if (IS_ATOM_INT(_val_26616) && IS_ATOM_INT(_val_26616)) {
        _14863 = _val_26616 + _val_26616;
        if ((object)((uintptr_t)_14863 + (uintptr_t)HIGH_BITS) >= 0){
            _14863 = NewDouble((eudouble)_14863);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26616)) {
            _14863 = NewDouble((eudouble)_val_26616 + DBL_PTR(_val_26616)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26616)) {
                _14863 = NewDouble(DBL_PTR(_val_26616)->dbl + (eudouble)_val_26616);
            }
            else
            _14863 = NewDouble(DBL_PTR(_val_26616)->dbl + DBL_PTR(_val_26616)->dbl);
        }
    }
    // SubProg GetBinaryChar pc: 86 op: PLUS (11)
    if (IS_ATOM_INT(_14863)) {
        _14864 = _14863 + _d_26617;
        if ((object)((uintptr_t)_14864 + (uintptr_t)HIGH_BITS) >= 0){
            _14864 = NewDouble((eudouble)_14864);
        }
    }
    else {
        _14864 = NewDouble(DBL_PTR(_14863)->dbl + (eudouble)_d_26617);
    }
    DeRef(_14863);
    _14863 = NOVALUE;
    // SubProg GetBinaryChar pc: 90 op: MINUS (10)
    DeRef(_val_26616);
    if (IS_ATOM_INT(_14864)) {
        _val_26616 = _14864 - 1;
        if ((object)((uintptr_t)_val_26616 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26616 = NewDouble((eudouble)_val_26616);
        }
    }
    else {
        _val_26616 = NewDouble(DBL_PTR(_14864)->dbl - (eudouble)1);
    }
    DeRef(_14864);
    _14864 = NOVALUE;
    // SubProg GetBinaryChar pc: 94 op: STARTLINE (58)

    /** scanner.e:1106				cnt += 1*/
    // SubProg GetBinaryChar pc: 96 op: PLUS1_I (117)
    _cnt_26621 = _cnt_26621 + 1;
    // SubProg GetBinaryChar pc: 100 op: NOP1 (159)
    // SubProg GetBinaryChar pc: 101 op: STARTLINE (58)

    /** scanner.e:1108		end while*/
    // SubProg GetBinaryChar pc: 103 op: ENDWHILE (22)
    goto L1; // [103] 24
    // SubProg GetBinaryChar pc: 105 op: NOP1 (159)
L4: // addr: 106 pc: 105 sub: 26613 op: 159
    // SubProg GetBinaryChar pc: 106 op: STARTLINE (58)

    /** scanner.e:1110		if cnt = 0 then*/
    // SubProg GetBinaryChar pc: 108 op: EQUALS_IFW_I (121)
    if (_cnt_26621 != 0)
    goto L6; // [108] 120
    // SubProg GetBinaryChar pc: 112 op: STARTLINE (58)

    /** scanner.e:1111			CompileErr(343)*/
    // SubProg GetBinaryChar pc: 114 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(343, _21933, 0);
    // SubProg GetBinaryChar pc: 119 op: NOP1 (159)
L6: // addr: 120 pc: 119 sub: 26613 op: 159
    // SubProg GetBinaryChar pc: 120 op: STARTLINE (58)

    /** scanner.e:1113		return val*/
    // SubProg GetBinaryChar pc: 122 op: RETURNF (28)

// Exiting block BLOCK: GetBinaryChar

// block var delim_26615

// block var d_26617

// block var vchars_26618
    DeRefi(_vchars_26618);

// block var cnt_26621
    return _val_26616;
    // SubProg GetBinaryChar pc: 126 op: BADRETURNF (43)
    ;
}


object _62EscapeChar(object _delim_26643)
{
    object _c_26644 = NOVALUE;
// skipping _14874  name type: 0
// skipping _14873  name type: 0
// skipping _14872  name type: 0
// skipping _14871  name type: 0
// skipping _14868  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg EscapeChar pc: 1 op: INTEGER_CHECK (96)
    // SubProg EscapeChar pc: 3 op: STARTLINE (58)

    /** scanner.e:1121		c = getch()*/
    // SubProg EscapeChar pc: 5 op: PROC (27)
    _0 = _c_26644;
    _c_26644 = _62getch();
    DeRef(_0);
    // SubProg EscapeChar pc: 8 op: STARTLINE (58)

    /** scanner.e:1122		switch c do*/
    // SubProg EscapeChar pc: 10 op: SWITCH_I (193)
    if (IS_SEQUENCE(_c_26644) ){
        goto L1; // [10] 135
    }
    if(!IS_ATOM_INT(_c_26644)){
        if( (DBL_PTR(_c_26644)->dbl != (eudouble) ((object) DBL_PTR(_c_26644)->dbl) ) ){
            goto L1; // [10] 135
        }
        _0 = (object) DBL_PTR(_c_26644)->dbl;
    }
    else {
        _0 = _c_26644;
    };
    switch ( _0 ){ 
        // SubProg EscapeChar pc: 15 op: STARTLINE (58)

        /** scanner.e:1123			case 'n' then*/
        // SubProg EscapeChar pc: 17 op: CASE (186)
        case 110:
        // SubProg EscapeChar pc: 19 op: STARTLINE (58)

        /** scanner.e:1124				c = 10 -- Newline*/
        // SubProg EscapeChar pc: 21 op: ASSIGN (18)
        DeRef(_c_26644);
        _c_26644 = 10;
        // SubProg EscapeChar pc: 24 op: ELSE (23)
        goto L2; // [24] 145
        // SubProg EscapeChar pc: 26 op: STARTLINE (58)

        /** scanner.e:1126			case 't' then*/
        // SubProg EscapeChar pc: 28 op: CASE (186)
        case 116:
        // SubProg EscapeChar pc: 30 op: STARTLINE (58)

        /** scanner.e:1127				c = 9 -- Tabulator*/
        // SubProg EscapeChar pc: 32 op: ASSIGN (18)
        DeRef(_c_26644);
        _c_26644 = 9;
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
        DeRef(_c_26644);
        _c_26644 = 13;
        // SubProg EscapeChar pc: 56 op: ELSE (23)
        goto L2; // [56] 145
        // SubProg EscapeChar pc: 58 op: STARTLINE (58)

        /** scanner.e:1137			case '0' then*/
        // SubProg EscapeChar pc: 60 op: CASE (186)
        case 48:
        // SubProg EscapeChar pc: 62 op: STARTLINE (58)

        /** scanner.e:1138				c = 0 -- Null*/
        // SubProg EscapeChar pc: 64 op: ASSIGN (18)
        DeRef(_c_26644);
        _c_26644 = 0;
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
        DeRef(_c_26644);
        _c_26644 = 27;
        // SubProg EscapeChar pc: 80 op: ELSE (23)
        goto L2; // [80] 145
        // SubProg EscapeChar pc: 82 op: STARTLINE (58)

        /** scanner.e:1143			case 'x' then*/
        // SubProg EscapeChar pc: 84 op: CASE (186)
        case 120:
        // SubProg EscapeChar pc: 86 op: STARTLINE (58)

        /** scanner.e:1145				c = GetHexChar(2, 340)*/
        // SubProg EscapeChar pc: 88 op: PROC (27)
        _0 = _c_26644;
        _c_26644 = _62GetHexChar(2, 340);
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
        _0 = _c_26644;
        _c_26644 = _62GetHexChar(4, 341);
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
        _0 = _c_26644;
        _c_26644 = _62GetHexChar(8, 342);
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
        _0 = _c_26644;
        _c_26644 = _62GetBinaryChar(_delim_26643);
        DeRef(_0);
        // SubProg EscapeChar pc: 131 op: ELSE (23)
        goto L2; // [131] 145
        // SubProg EscapeChar pc: 133 op: STARTLINE (58)

        /** scanner.e:1159			case else*/
        // SubProg EscapeChar pc: 135 op: CASE (186)
        default:
L1: // addr: 135 pc: 135 sub: 26641 op: 186
        // SubProg EscapeChar pc: 137 op: STARTLINE (58)

        /** scanner.e:1160				CompileErr(155)*/
        // SubProg EscapeChar pc: 139 op: PROC (27)
        RefDS(_21933);
        _50CompileErr(155, _21933, 0);
        // SubProg EscapeChar pc: 144 op: NOPSWITCH (187)
    ;}L2: // addr: 145 pc: 144 sub: 26641 op: 187
    // SubProg EscapeChar pc: 145 op: STARTLINE (58)

    /** scanner.e:1163		return c*/
    // SubProg EscapeChar pc: 147 op: RETURNF (28)

// Exiting block BLOCK: EscapeChar

// block var delim_26643
    return _c_26644;
    // SubProg EscapeChar pc: 151 op: BADRETURNF (43)
    ;
}


object _62my_sscanf(object _yytext_26667)
{
    object _e_sign_26668 = NOVALUE;
    object _ndigits_26669 = NOVALUE;
    object _e_mag_26670 = NOVALUE;
    object _mantissa_26671 = NOVALUE;
    object _c_26672 = NOVALUE;
    object _i_26673 = NOVALUE;
    object _dec_26674 = NOVALUE;
    object _frac_26706 = NOVALUE;
// skipping _14912  name type: 0
// skipping _14911  name type: 0
    object _14910 = NOVALUE; // 26718 14910
// skipping _14909  name type: 0
// skipping _14908  name type: 0
// skipping _14907  name type: 0
// skipping _14906  name type: 0
    object _14905 = NOVALUE; // 26713 14905
    object _14904 = NOVALUE; // 26712 14904
// skipping _14903  name type: 0
    object _14902 = NOVALUE; // 26710 14902
    object _14901 = NOVALUE; // 26709 14901
    object _14900 = NOVALUE; // 26708 14900
// skipping _14898  name type: 0
// skipping _14897  name type: 0
// skipping _14896  name type: 0
// skipping _14895  name type: 0
// skipping _14894  name type: 0
// skipping _14893  name type: 0
    object _14892 = NOVALUE; // 26697 14892
    object _14891 = NOVALUE; // 26696 14891
// skipping _14889  name type: 0
    object _14888 = NOVALUE; // 26693 14888
    object _14887 = NOVALUE; // 26692 14887
    object _14886 = NOVALUE; // 26691 14886
// skipping _14885  name type: 0
// skipping _14884  name type: 0
    object _14881 = NOVALUE; // 26685 14881
    object _14880 = NOVALUE; // 26682 14880
// skipping _14879  name type: 0
    object _14878 = NOVALUE; // 26680 14878
// skipping _14877  name type: 0
    object _14876 = NOVALUE; // 26676 14876
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg my_sscanf pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg my_sscanf pc: 3 op: STARTLINE (58)

    /** scanner.e:1176		if length(yytext) < 2 then*/
    // SubProg my_sscanf pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26667)){
            _14876 = SEQ_PTR(_yytext_26667)->length;
    }
    else {
        _14876 = 1;
    }
    // SubProg my_sscanf pc: 8 op: LESS_IFW_I (119)
    if (_14876 >= 2)
    goto L1; // [8] 20
    // SubProg my_sscanf pc: 12 op: STARTLINE (58)

    /** scanner.e:1177			CompileErr(121)*/
    // SubProg my_sscanf pc: 14 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(121, _21933, 0);
    // SubProg my_sscanf pc: 19 op: NOP1 (159)
L1: // addr: 20 pc: 19 sub: 26665 op: 159
    // SubProg my_sscanf pc: 20 op: STARTLINE (58)

    /** scanner.e:1181		if find( 'e', yytext ) or find( 'E', yytext ) then*/
    // SubProg my_sscanf pc: 22 op: FIND_FROM (176)
    _14878 = find_from(101, _yytext_26667, 1);
    // SubProg my_sscanf pc: 27 op: SC1_OR_IF (147)
    if (_14878 != 0) {
        goto L2; // [27] 41
    }
    // SubProg my_sscanf pc: 31 op: FIND_FROM (176)
    _14880 = find_from(69, _yytext_26667, 1);
    // SubProg my_sscanf pc: 36 op: NOP1 (159)
    // SubProg my_sscanf pc: 37 op: IF (20)
    if (_14880 == 0)
    {
        _14880 = NOVALUE;
        goto L3; // [37] 57
    }
    else{
        _14880 = NOVALUE;
    }
    // SubProg my_sscanf pc: 40 op: NOP1 (159)
L2: // addr: 41 pc: 40 sub: 26665 op: 159
    // SubProg my_sscanf pc: 41 op: STARTLINE (58)

    /** scanner.e:1182			ifdef E32 then*/
    // SubProg my_sscanf pc: 43 op: STARTLINE (58)

    /** scanner.e:1183				return scientific_to_atom( yytext, DOUBLE )*/
    // SubProg my_sscanf pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg my_sscanf pc: 47 op: PROC (27)
    RefDS(_yytext_26667);
    _14881 = _28scientific_to_atom(_yytext_26667, 2);
    // SubProg my_sscanf pc: 52 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26667
    DeRefDS(_yytext_26667);

// block var ndigits_26669

// block var mantissa_26671
    DeRef(_mantissa_26671);

// block var c_26672

// block var i_26673

// block var dec_26674
    DeRef(_dec_26674);
    return _14881;
    // SubProg my_sscanf pc: 56 op: NOP1 (159)
L3: // addr: 57 pc: 56 sub: 26665 op: 159
    // SubProg my_sscanf pc: 57 op: STARTLINE (58)

    /** scanner.e:1190		mantissa = 0.0*/
    // SubProg my_sscanf pc: 59 op: ASSIGN (18)
    RefDS(_14883);
    DeRef(_mantissa_26671);
    _mantissa_26671 = _14883;
    // SubProg my_sscanf pc: 62 op: STARTLINE (58)

    /** scanner.e:1191		ndigits = 0*/
    // SubProg my_sscanf pc: 64 op: ASSIGN_I (113)
    _ndigits_26669 = 0;
    // SubProg my_sscanf pc: 67 op: STARTLINE (58)

    /** scanner.e:1195		yytext &= 0 -- end marker*/
    // SubProg my_sscanf pc: 69 op: CONCAT (15)
    Append(&_yytext_26667, _yytext_26667, 0);
    // SubProg my_sscanf pc: 73 op: STARTLINE (58)

    /** scanner.e:1196		c = yytext[1]*/
    // SubProg my_sscanf pc: 75 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26667);
    _c_26672 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_c_26672))
    _c_26672 = (object)DBL_PTR(_c_26672)->dbl;
    // SubProg my_sscanf pc: 79 op: STARTLINE (58)

    /** scanner.e:1197		i = 2*/
    // SubProg my_sscanf pc: 81 op: ASSIGN_I (113)
    _i_26673 = 2;
    // SubProg my_sscanf pc: 84 op: STARTLINE (58)

    /** scanner.e:1198		while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 86 op: NOP2 (110)
    // SubProg my_sscanf pc: 88 op: NOPWHILE (158)
L4: // addr: 89 pc: 88 sub: 26665 op: 158
    // SubProg my_sscanf pc: 89 op: GREATEREQ (2)
    _14886 = (_c_26672 >= 48);
    // SubProg my_sscanf pc: 93 op: SC1_AND_IF (146)
    if (_14886 == 0) {
        goto L5; // [93] 142
    }
    // SubProg my_sscanf pc: 97 op: LESSEQ (5)
    _14888 = (_c_26672 <= 57);
    // SubProg my_sscanf pc: 101 op: NOP1 (159)
    // SubProg my_sscanf pc: 102 op: WHILE (47)
    if (_14888 == 0)
    {
        DeRef(_14888);
        _14888 = NOVALUE;
        goto L5; // [102] 142
    }
    else{
        DeRef(_14888);
        _14888 = NOVALUE;
    }
    // SubProg my_sscanf pc: 105 op: STARTLINE (58)

    /** scanner.e:1199			ndigits += 1*/
    // SubProg my_sscanf pc: 107 op: PLUS1_I (117)
    _ndigits_26669 = _ndigits_26669 + 1;
    // SubProg my_sscanf pc: 111 op: STARTLINE (58)

    /** scanner.e:1200			mantissa = mantissa * 10.0 + (c - '0')*/
    // SubProg my_sscanf pc: 113 op: MULTIPLY (13)
    if (IS_ATOM_INT(_mantissa_26671)) {
        _14891 = NewDouble((eudouble)_mantissa_26671 * DBL_PTR(_14890)->dbl);
    }
    else {
        _14891 = NewDouble(DBL_PTR(_mantissa_26671)->dbl * DBL_PTR(_14890)->dbl);
    }
    // SubProg my_sscanf pc: 117 op: MINUS (10)
    _14892 = _c_26672 - 48;
    if ((object)((uintptr_t)_14892 +(uintptr_t) HIGH_BITS) >= 0){
        _14892 = NewDouble((eudouble)_14892);
    }
    // SubProg my_sscanf pc: 121 op: PLUS (11)
    DeRef(_mantissa_26671);
    if (IS_ATOM_INT(_14892)) {
        _mantissa_26671 = NewDouble(DBL_PTR(_14891)->dbl + (eudouble)_14892);
    }
    else
    _mantissa_26671 = NewDouble(DBL_PTR(_14891)->dbl + DBL_PTR(_14892)->dbl);
    DeRefDS(_14891);
    _14891 = NOVALUE;
    DeRef(_14892);
    _14892 = NOVALUE;
    // SubProg my_sscanf pc: 125 op: STARTLINE (58)

    /** scanner.e:1201			c = yytext[i]*/
    // SubProg my_sscanf pc: 127 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26667);
    _c_26672 = (object)*(((s1_ptr)_2)->base + _i_26673);
    if (!IS_ATOM_INT(_c_26672))
    _c_26672 = (object)DBL_PTR(_c_26672)->dbl;
    // SubProg my_sscanf pc: 131 op: STARTLINE (58)

    /** scanner.e:1202			i += 1*/
    // SubProg my_sscanf pc: 133 op: PLUS1_I (117)
    _i_26673 = _i_26673 + 1;
    // SubProg my_sscanf pc: 137 op: STARTLINE (58)

    /** scanner.e:1203		end while*/
    // SubProg my_sscanf pc: 139 op: ENDWHILE (22)
    goto L4; // [139] 89
    // SubProg my_sscanf pc: 141 op: NOP1 (159)
L5: // addr: 142 pc: 141 sub: 26665 op: 159
    // SubProg my_sscanf pc: 142 op: STARTLINE (58)

    /** scanner.e:1205		if c = '.' then*/
    // SubProg my_sscanf pc: 144 op: EQUALS_IFW_I (121)
    if (_c_26672 != 46)
    goto L6; // [144] 245
    // SubProg my_sscanf pc: 148 op: STARTLINE (58)

    /** scanner.e:1207			c = yytext[i]*/
    // SubProg my_sscanf pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26667);
    _c_26672 = (object)*(((s1_ptr)_2)->base + _i_26673);
    if (!IS_ATOM_INT(_c_26672))
    _c_26672 = (object)DBL_PTR(_c_26672)->dbl;
    // SubProg my_sscanf pc: 154 op: STARTLINE (58)

    /** scanner.e:1208			i += 1*/
    // SubProg my_sscanf pc: 156 op: PLUS1_I (117)
    _i_26673 = _i_26673 + 1;
    // SubProg my_sscanf pc: 160 op: STARTLINE (58)

    /** scanner.e:1209			dec = 1.0*/
    // SubProg my_sscanf pc: 162 op: ASSIGN (18)
    RefDS(_14899);
    DeRef(_dec_26674);
    _dec_26674 = _14899;
    // SubProg my_sscanf pc: 165 op: STARTLINE (58)

    /** scanner.e:1210			atom frac = 0*/
    // SubProg my_sscanf pc: 167 op: ASSIGN (18)
    DeRef(_frac_26706);
    _frac_26706 = 0;
    // SubProg my_sscanf pc: 170 op: STARTLINE (58)

    /** scanner.e:1211			while c >= '0' and c <= '9' do*/
    // SubProg my_sscanf pc: 172 op: NOP2 (110)
    // SubProg my_sscanf pc: 174 op: NOPWHILE (158)
L7: // addr: 175 pc: 174 sub: 26665 op: 158
    // SubProg my_sscanf pc: 175 op: GREATEREQ (2)
    _14900 = (_c_26672 >= 48);
    // SubProg my_sscanf pc: 179 op: SC1_AND_IF (146)
    if (_14900 == 0) {
        goto L8; // [179] 234
    }
    // SubProg my_sscanf pc: 183 op: LESSEQ (5)
    _14902 = (_c_26672 <= 57);
    // SubProg my_sscanf pc: 187 op: NOP1 (159)
    // SubProg my_sscanf pc: 188 op: WHILE (47)
    if (_14902 == 0)
    {
        DeRef(_14902);
        _14902 = NOVALUE;
        goto L8; // [188] 234
    }
    else{
        DeRef(_14902);
        _14902 = NOVALUE;
    }
    // SubProg my_sscanf pc: 191 op: STARTLINE (58)

    /** scanner.e:1212				ndigits += 1*/
    // SubProg my_sscanf pc: 193 op: PLUS1_I (117)
    _ndigits_26669 = _ndigits_26669 + 1;
    // SubProg my_sscanf pc: 197 op: STARTLINE (58)

    /** scanner.e:1213				frac = frac * 10 + (c - '0')*/
    // SubProg my_sscanf pc: 199 op: MULTIPLY (13)
    if (IS_ATOM_INT(_frac_26706)) {
        if (_frac_26706 == (short)_frac_26706){
            _14904 = _frac_26706 * 10;
        }
        else{
            _14904 = NewDouble(_frac_26706 * (eudouble)10);
        }
    }
    else {
        _14904 = NewDouble(DBL_PTR(_frac_26706)->dbl * (eudouble)10);
    }
    // SubProg my_sscanf pc: 203 op: MINUS (10)
    _14905 = _c_26672 - 48;
    if ((object)((uintptr_t)_14905 +(uintptr_t) HIGH_BITS) >= 0){
        _14905 = NewDouble((eudouble)_14905);
    }
    // SubProg my_sscanf pc: 207 op: PLUS (11)
    DeRef(_frac_26706);
    if (IS_ATOM_INT(_14904) && IS_ATOM_INT(_14905)) {
        _frac_26706 = _14904 + _14905;
        if ((object)((uintptr_t)_frac_26706 + (uintptr_t)HIGH_BITS) >= 0){
            _frac_26706 = NewDouble((eudouble)_frac_26706);
        }
    }
    else {
        if (IS_ATOM_INT(_14904)) {
            _frac_26706 = NewDouble((eudouble)_14904 + DBL_PTR(_14905)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14905)) {
                _frac_26706 = NewDouble(DBL_PTR(_14904)->dbl + (eudouble)_14905);
            }
            else
            _frac_26706 = NewDouble(DBL_PTR(_14904)->dbl + DBL_PTR(_14905)->dbl);
        }
    }
    DeRef(_14904);
    _14904 = NOVALUE;
    DeRef(_14905);
    _14905 = NOVALUE;
    // SubProg my_sscanf pc: 211 op: STARTLINE (58)

    /** scanner.e:1214				dec *= 10.0*/
    // SubProg my_sscanf pc: 213 op: MULTIPLY (13)
    _0 = _dec_26674;
    if (IS_ATOM_INT(_dec_26674)) {
        _dec_26674 = NewDouble((eudouble)_dec_26674 * DBL_PTR(_14890)->dbl);
    }
    else {
        _dec_26674 = NewDouble(DBL_PTR(_dec_26674)->dbl * DBL_PTR(_14890)->dbl);
    }
    DeRef(_0);
    // SubProg my_sscanf pc: 217 op: STARTLINE (58)

    /** scanner.e:1215				c = yytext[i]*/
    // SubProg my_sscanf pc: 219 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_yytext_26667);
    _c_26672 = (object)*(((s1_ptr)_2)->base + _i_26673);
    if (!IS_ATOM_INT(_c_26672))
    _c_26672 = (object)DBL_PTR(_c_26672)->dbl;
    // SubProg my_sscanf pc: 223 op: STARTLINE (58)

    /** scanner.e:1216				i += 1*/
    // SubProg my_sscanf pc: 225 op: PLUS1_I (117)
    _i_26673 = _i_26673 + 1;
    // SubProg my_sscanf pc: 229 op: STARTLINE (58)

    /** scanner.e:1217			end while*/
    // SubProg my_sscanf pc: 231 op: ENDWHILE (22)
    goto L7; // [231] 175
    // SubProg my_sscanf pc: 233 op: NOP1 (159)
L8: // addr: 234 pc: 233 sub: 26665 op: 159
    // SubProg my_sscanf pc: 234 op: STARTLINE (58)

    /** scanner.e:1218			mantissa += frac / dec*/
    // SubProg my_sscanf pc: 236 op: DIVIDE (14)
    if (IS_ATOM_INT(_frac_26706) && IS_ATOM_INT(_dec_26674)) {
        _14910 = (_frac_26706 % _dec_26674) ? NewDouble((eudouble)_frac_26706 / _dec_26674) : (_frac_26706 / _dec_26674);
    }
    else {
        if (IS_ATOM_INT(_frac_26706)) {
            _14910 = NewDouble((eudouble)_frac_26706 / DBL_PTR(_dec_26674)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_26674)) {
                _14910 = NewDouble(DBL_PTR(_frac_26706)->dbl / (eudouble)_dec_26674);
            }
            else
            _14910 = NewDouble(DBL_PTR(_frac_26706)->dbl / DBL_PTR(_dec_26674)->dbl);
        }
    }
    // SubProg my_sscanf pc: 240 op: PLUS (11)
    _0 = _mantissa_26671;
    if (IS_ATOM_INT(_mantissa_26671) && IS_ATOM_INT(_14910)) {
        _mantissa_26671 = _mantissa_26671 + _14910;
        if ((object)((uintptr_t)_mantissa_26671 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_26671 = NewDouble((eudouble)_mantissa_26671);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_26671)) {
            _mantissa_26671 = NewDouble((eudouble)_mantissa_26671 + DBL_PTR(_14910)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14910)) {
                _mantissa_26671 = NewDouble(DBL_PTR(_mantissa_26671)->dbl + (eudouble)_14910);
            }
            else
            _mantissa_26671 = NewDouble(DBL_PTR(_mantissa_26671)->dbl + DBL_PTR(_14910)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_14910);
    _14910 = NOVALUE;
    // SubProg my_sscanf pc: 244 op: NOP1 (159)
L6: // addr: 245 pc: 244 sub: 26665 op: 159
    // SubProg my_sscanf pc: 245 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var frac_26706
    DeRef(_frac_26706);
    _frac_26706 = NOVALUE;
    // SubProg my_sscanf pc: 247 op: STARTLINE (58)

    /** scanner.e:1221		if ndigits = 0 then*/
    // SubProg my_sscanf pc: 249 op: EQUALS_IFW_I (121)
    if (_ndigits_26669 != 0)
    goto L9; // [249] 261
    // SubProg my_sscanf pc: 253 op: STARTLINE (58)

    /** scanner.e:1222			CompileErr(121)  -- no digits*/
    // SubProg my_sscanf pc: 255 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(121, _21933, 0);
    // SubProg my_sscanf pc: 260 op: NOP1 (159)
L9: // addr: 261 pc: 260 sub: 26665 op: 159
    // SubProg my_sscanf pc: 261 op: STARTLINE (58)

    /** scanner.e:1268		return mantissa*/
    // SubProg my_sscanf pc: 263 op: RETURNF (28)

// Exiting block BLOCK: my_sscanf

// block var yytext_26667
    DeRefDS(_yytext_26667);

// block var ndigits_26669

// block var c_26672

// block var i_26673

// block var dec_26674
    DeRef(_dec_26674);
    DeRef(_14900);
    _14900 = NOVALUE;
    DeRef(_14881);
    _14881 = NOVALUE;
    DeRef(_14886);
    _14886 = NOVALUE;
    return _mantissa_26671;
    // SubProg my_sscanf pc: 267 op: BADRETURNF (43)
    ;
}


void _62maybe_namespace()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg maybe_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:1273		might_be_namespace = 1*/
    // SubProg maybe_namespace pc: 3 op: ASSIGN_I (113)
    _62might_be_namespace_26723 = 1;
    // SubProg maybe_namespace pc: 6 op: STARTLINE (58)

    /** scanner.e:1274	end procedure*/
    // SubProg maybe_namespace pc: 8 op: RETURNP (29)

// Exiting block BLOCK: maybe_namespace
    return;
    // SubProg maybe_namespace pc: 11 op: BADRETURNF (43)
    ;
}


object _62ExtendedString(object _ech_26733)
{
    object _ch_26734 = NOVALUE;
    object _fch_26735 = NOVALUE;
    object _cline_26736 = NOVALUE;
    object _string_text_26737 = NOVALUE;
    object _trimming_26738 = NOVALUE;
    object _14963 = NOVALUE; // 26821 14963
    object _14962 = NOVALUE; // 26820 14962
// skipping _14961  name type: 0
    object _14960 = NOVALUE; // 26816 14960
    object _14959 = NOVALUE; // 26815 14959
    object _14958 = NOVALUE; // 26814 14958
    object _14957 = NOVALUE; // 26813 14957
    object _14956 = NOVALUE; // 26812 14956
    object _14955 = NOVALUE; // 26811 14955
    object _14954 = NOVALUE; // 26810 14954
    object _14953 = NOVALUE; // 26809 14953
// skipping _14952  name type: 0
    object _14951 = NOVALUE; // 26806 14951
    object _14950 = NOVALUE; // 26805 14950
    object _14949 = NOVALUE; // 26804 14949
    object _14948 = NOVALUE; // 26803 14948
    object _14947 = NOVALUE; // 26802 14947
    object _14946 = NOVALUE; // 26801 14946
// skipping _14945  name type: 0
// skipping _14944  name type: 0
    object _14943 = NOVALUE; // 26796 14943
    object _14942 = NOVALUE; // 26795 14942
    object _14941 = NOVALUE; // 26794 14941
// skipping _14940  name type: 0
    object _14939 = NOVALUE; // 26789 14939
    object _14938 = NOVALUE; // 26788 14938
    object _14937 = NOVALUE; // 26785 14937
    object _14936 = NOVALUE; // 26784 14936
// skipping _14935  name type: 0
// skipping _14934  name type: 0
    object _14933 = NOVALUE; // 26778 14933
// skipping _14932  name type: 0
// skipping _14931  name type: 0
// skipping _14930  name type: 0
// skipping _14929  name type: 0
// skipping _14928  name type: 0
// skipping _14927  name type: 0
// skipping _14926  name type: 0
// skipping _14925  name type: 0
// skipping _14924  name type: 0
// skipping _14923  name type: 0
// skipping _14922  name type: 0
// skipping _14921  name type: 0
// skipping _14920  name type: 0
// skipping _14919  name type: 0
    object _14918 = NOVALUE; // 26749 14918
// skipping _14917  name type: 0
    object _14916 = NOVALUE; // 26744 14916
// skipping _14915  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg ExtendedString pc: 1 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 3 op: STARTLINE (58)

    /** scanner.e:1287		cline = line_number*/
    // SubProg ExtendedString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 7 op: ASSIGN (18)
    _cline_26736 = _36line_number_16437;
    // SubProg ExtendedString pc: 10 op: INTEGER_CHECK (96)
    // SubProg ExtendedString pc: 12 op: STARTLINE (58)

    /** scanner.e:1288		string_text = ""*/
    // SubProg ExtendedString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_string_text_26737);
    _string_text_26737 = _5;
    // SubProg ExtendedString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg ExtendedString pc: 19 op: STARTLINE (58)

    /** scanner.e:1289		trimming = 0*/
    // SubProg ExtendedString pc: 21 op: ASSIGN_I (113)
    _trimming_26738 = 0;
    // SubProg ExtendedString pc: 24 op: STARTLINE (58)

    /** scanner.e:1290		ch = getch()*/
    // SubProg ExtendedString pc: 26 op: PROC (27)
    _ch_26734 = _62getch();
    // SubProg ExtendedString pc: 29 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26734)) {
        _1 = (object)(DBL_PTR(_ch_26734)->dbl);
        DeRefDS(_ch_26734);
        _ch_26734 = _1;
    }
    // SubProg ExtendedString pc: 31 op: STARTLINE (58)

    /** scanner.e:1291		if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 37 op: LENGTH (42)
    if (IS_SEQUENCE(_50ThisLine_48707)){
            _14916 = SEQ_PTR(_50ThisLine_48707)->length;
    }
    else {
        _14916 = 1;
    }
    // SubProg ExtendedString pc: 40 op: GREATER_IFW (107)
    if (_50bp_48711 <= _14916)
    goto L1; // [40] 101
    // SubProg ExtendedString pc: 44 op: STARTLINE (58)

    /** scanner.e:1293			read_line()*/
    // SubProg ExtendedString pc: 46 op: PROC (27)
    _62read_line();
    // SubProg ExtendedString pc: 48 op: STARTLINE (58)

    /** scanner.e:1294			while ThisLine[bp] = '_' do*/
    // SubProg ExtendedString pc: 50 op: NOP2 (110)
    // SubProg ExtendedString pc: 52 op: NOPWHILE (158)
L2: // addr: 53 pc: 52 sub: 26731 op: 158
    // SubProg ExtendedString pc: 53 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_50ThisLine_48707);
    _14918 = (object)*(((s1_ptr)_2)->base + _50bp_48711);
    // SubProg ExtendedString pc: 61 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _14918, 95)){
        _14918 = NOVALUE;
        goto L3; // [61] 86
    }
    _14918 = NOVALUE;
    // SubProg ExtendedString pc: 65 op: STARTLINE (58)

    /** scanner.e:1295				trimming += 1*/
    // SubProg ExtendedString pc: 67 op: PLUS1_I (117)
    _trimming_26738 = _trimming_26738 + 1;
    // SubProg ExtendedString pc: 71 op: STARTLINE (58)

    /** scanner.e:1296				bp += 1*/
    // SubProg ExtendedString pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 75 op: PLUS (11)
    _50bp_48711 = _50bp_48711 + 1;
    // SubProg ExtendedString pc: 81 op: STARTLINE (58)

    /** scanner.e:1297			end while*/
    // SubProg ExtendedString pc: 83 op: ENDWHILE (22)
    goto L2; // [83] 53
    // SubProg ExtendedString pc: 85 op: NOP1 (159)
L3: // addr: 86 pc: 85 sub: 26731 op: 159
    // SubProg ExtendedString pc: 86 op: STARTLINE (58)

    /** scanner.e:1298			if trimming > 0 then*/
    // SubProg ExtendedString pc: 88 op: GREATER_IFW_I (124)
    if (_trimming_26738 <= 0)
    goto L4; // [88] 100
    // SubProg ExtendedString pc: 92 op: STARTLINE (58)

    /** scanner.e:1299				ch = getch()*/
    // SubProg ExtendedString pc: 94 op: PROC (27)
    _ch_26734 = _62getch();
    // SubProg ExtendedString pc: 97 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26734)) {
        _1 = (object)(DBL_PTR(_ch_26734)->dbl);
        DeRefDS(_ch_26734);
        _ch_26734 = _1;
    }
    // SubProg ExtendedString pc: 99 op: NOP1 (159)
L4: // addr: 100 pc: 99 sub: 26731 op: 159
    // SubProg ExtendedString pc: 100 op: NOP1 (159)
L1: // addr: 101 pc: 100 sub: 26731 op: 159
    // SubProg ExtendedString pc: 101 op: STARTLINE (58)

    /** scanner.e:1303		while 1 do*/
    // SubProg ExtendedString pc: 103 op: NOP2 (110)
    // SubProg ExtendedString pc: 105 op: NOPWHILE (158)
L5: // addr: 106 pc: 105 sub: 26731 op: 158
    // SubProg ExtendedString pc: 106 op: STARTLINE (58)

    /** scanner.e:1304			if ch = END_OF_FILE_CHAR then*/
    // SubProg ExtendedString pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 110 op: EQUALS_IFW (104)
    if (_ch_26734 != 26)
    goto L6; // [110] 122
    // SubProg ExtendedString pc: 114 op: STARTLINE (58)

    /** scanner.e:1305				CompileErr(129, cline)*/
    // SubProg ExtendedString pc: 116 op: PROC (27)
    _50CompileErr(129, _cline_26736, 0);
    // SubProg ExtendedString pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 26731 op: 159
    // SubProg ExtendedString pc: 122 op: STARTLINE (58)

    /** scanner.e:1308			if ch = ech then*/
    // SubProg ExtendedString pc: 124 op: EQUALS_IFW_I (121)
    if (_ch_26734 != _ech_26733)
    goto L7; // [124] 180
    // SubProg ExtendedString pc: 128 op: STARTLINE (58)

    /** scanner.e:1309				if ech != '"' then*/
    // SubProg ExtendedString pc: 130 op: NOTEQ_IFW_I (122)
    if (_ech_26733 == 34)
    goto L8; // [130] 139
    // SubProg ExtendedString pc: 134 op: STARTLINE (58)

    /** scanner.e:1310					exit*/
    // SubProg ExtendedString pc: 136 op: EXIT (61)
    goto L9; // [136] 310
    // SubProg ExtendedString pc: 138 op: NOP1 (159)
L8: // addr: 139 pc: 138 sub: 26731 op: 159
    // SubProg ExtendedString pc: 139 op: STARTLINE (58)

    /** scanner.e:1312				fch = getch()*/
    // SubProg ExtendedString pc: 141 op: PROC (27)
    _fch_26735 = _62getch();
    // SubProg ExtendedString pc: 144 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26735)) {
        _1 = (object)(DBL_PTR(_fch_26735)->dbl);
        DeRefDS(_fch_26735);
        _fch_26735 = _1;
    }
    // SubProg ExtendedString pc: 146 op: STARTLINE (58)

    /** scanner.e:1313				if fch = '"' then*/
    // SubProg ExtendedString pc: 148 op: EQUALS_IFW_I (121)
    if (_fch_26735 != 34)
    goto LA; // [148] 175
    // SubProg ExtendedString pc: 152 op: STARTLINE (58)

    /** scanner.e:1314					fch = getch()*/
    // SubProg ExtendedString pc: 154 op: PROC (27)
    _fch_26735 = _62getch();
    // SubProg ExtendedString pc: 157 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_26735)) {
        _1 = (object)(DBL_PTR(_fch_26735)->dbl);
        DeRefDS(_fch_26735);
        _fch_26735 = _1;
    }
    // SubProg ExtendedString pc: 159 op: STARTLINE (58)

    /** scanner.e:1315					if fch = '"' then*/
    // SubProg ExtendedString pc: 161 op: EQUALS_IFW_I (121)
    if (_fch_26735 != 34)
    goto LB; // [161] 170
    // SubProg ExtendedString pc: 165 op: STARTLINE (58)

    /** scanner.e:1316						exit*/
    // SubProg ExtendedString pc: 167 op: EXIT (61)
    goto L9; // [167] 310
    // SubProg ExtendedString pc: 169 op: NOP1 (159)
LB: // addr: 170 pc: 169 sub: 26731 op: 159
    // SubProg ExtendedString pc: 170 op: STARTLINE (58)

    /** scanner.e:1318					ungetch()*/
    // SubProg ExtendedString pc: 172 op: PROC (27)
    _62ungetch();
    // SubProg ExtendedString pc: 174 op: NOP1 (159)
LA: // addr: 175 pc: 174 sub: 26731 op: 159
    // SubProg ExtendedString pc: 175 op: STARTLINE (58)

    /** scanner.e:1320				ungetch()*/
    // SubProg ExtendedString pc: 177 op: PROC (27)
    _62ungetch();
    // SubProg ExtendedString pc: 179 op: NOP1 (159)
L7: // addr: 180 pc: 179 sub: 26731 op: 159
    // SubProg ExtendedString pc: 180 op: STARTLINE (58)

    /** scanner.e:1323			if ch != '\r' then*/
    // SubProg ExtendedString pc: 182 op: NOTEQ_IFW_I (122)
    if (_ch_26734 == 13)
    goto LC; // [182] 193
    // SubProg ExtendedString pc: 186 op: STARTLINE (58)

    /** scanner.e:1326				string_text &= ch*/
    // SubProg ExtendedString pc: 188 op: CONCAT (15)
    Append(&_string_text_26737, _string_text_26737, _ch_26734);
    // SubProg ExtendedString pc: 192 op: NOP1 (159)
LC: // addr: 193 pc: 192 sub: 26731 op: 159
    // SubProg ExtendedString pc: 193 op: STARTLINE (58)

    /** scanner.e:1329			if bp > length(ThisLine) then*/
    // SubProg ExtendedString pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 199 op: LENGTH (42)
    if (IS_SEQUENCE(_50ThisLine_48707)){
            _14933 = SEQ_PTR(_50ThisLine_48707)->length;
    }
    else {
        _14933 = 1;
    }
    // SubProg ExtendedString pc: 202 op: GREATER_IFW (107)
    if (_50bp_48711 <= _14933)
    goto LD; // [202] 298
    // SubProg ExtendedString pc: 206 op: STARTLINE (58)

    /** scanner.e:1330				read_line() -- sets bp to 1, btw.*/
    // SubProg ExtendedString pc: 208 op: PROC (27)
    _62read_line();
    // SubProg ExtendedString pc: 210 op: STARTLINE (58)

    /** scanner.e:1331				if trimming > 0 then*/
    // SubProg ExtendedString pc: 212 op: GREATER_IFW_I (124)
    if (_trimming_26738 <= 0)
    goto LE; // [212] 297
    // SubProg ExtendedString pc: 216 op: STARTLINE (58)

    /** scanner.e:1332					while bp <= trimming and bp <= length(ThisLine) do*/
    // SubProg ExtendedString pc: 218 op: NOP2 (110)
    // SubProg ExtendedString pc: 220 op: NOPWHILE (158)
LF: // addr: 221 pc: 220 sub: 26731 op: 158
    // SubProg ExtendedString pc: 221 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 223 op: LESSEQ (5)
    _14936 = (_50bp_48711 <= _trimming_26738);
    // SubProg ExtendedString pc: 227 op: SC1_AND_IF (146)
    if (_14936 == 0) {
        goto L10; // [227] 296
    }
    // SubProg ExtendedString pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 235 op: LENGTH (42)
    if (IS_SEQUENCE(_50ThisLine_48707)){
            _14938 = SEQ_PTR(_50ThisLine_48707)->length;
    }
    else {
        _14938 = 1;
    }
    // SubProg ExtendedString pc: 238 op: LESSEQ (5)
    _14939 = (_50bp_48711 <= _14938);
    _14938 = NOVALUE;
    // SubProg ExtendedString pc: 242 op: NOP1 (159)
    // SubProg ExtendedString pc: 243 op: WHILE (47)
    if (_14939 == 0)
    {
        DeRef(_14939);
        _14939 = NOVALUE;
        goto L10; // [243] 296
    }
    else{
        DeRef(_14939);
        _14939 = NOVALUE;
    }
    // SubProg ExtendedString pc: 246 op: STARTLINE (58)

    /** scanner.e:1333						ch = ThisLine[bp]*/
    // SubProg ExtendedString pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_50ThisLine_48707);
    _ch_26734 = (object)*(((s1_ptr)_2)->base + _50bp_48711);
    if (!IS_ATOM_INT(_ch_26734)){
        _ch_26734 = (object)DBL_PTR(_ch_26734)->dbl;
    }
    // SubProg ExtendedString pc: 258 op: STARTLINE (58)

    /** scanner.e:1334						if ch != ' ' and ch != '\t' then*/
    // SubProg ExtendedString pc: 260 op: NOTEQ (4)
    _14941 = (_ch_26734 != 32);
    // SubProg ExtendedString pc: 264 op: SC1_AND_IF (146)
    if (_14941 == 0) {
        goto L11; // [264] 281
    }
    // SubProg ExtendedString pc: 268 op: NOTEQ (4)
    _14943 = (_ch_26734 != 9);
    // SubProg ExtendedString pc: 272 op: NOP1 (159)
    // SubProg ExtendedString pc: 273 op: IF (20)
    if (_14943 == 0)
    {
        DeRef(_14943);
        _14943 = NOVALUE;
        goto L11; // [273] 281
    }
    else{
        DeRef(_14943);
        _14943 = NOVALUE;
    }
    // SubProg ExtendedString pc: 276 op: STARTLINE (58)

    /** scanner.e:1335							exit*/
    // SubProg ExtendedString pc: 278 op: EXIT (61)
    goto L10; // [278] 296
    // SubProg ExtendedString pc: 280 op: NOP1 (159)
L11: // addr: 281 pc: 280 sub: 26731 op: 159
    // SubProg ExtendedString pc: 281 op: STARTLINE (58)

    /** scanner.e:1337						bp += 1*/
    // SubProg ExtendedString pc: 283 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 285 op: PLUS (11)
    _50bp_48711 = _50bp_48711 + 1;
    // SubProg ExtendedString pc: 291 op: STARTLINE (58)

    /** scanner.e:1338					end while*/
    // SubProg ExtendedString pc: 293 op: ENDWHILE (22)
    goto LF; // [293] 221
    // SubProg ExtendedString pc: 295 op: NOP1 (159)
L10: // addr: 296 pc: 295 sub: 26731 op: 159
    // SubProg ExtendedString pc: 296 op: NOP1 (159)
LE: // addr: 297 pc: 296 sub: 26731 op: 159
    // SubProg ExtendedString pc: 297 op: NOP1 (159)
LD: // addr: 298 pc: 297 sub: 26731 op: 159
    // SubProg ExtendedString pc: 298 op: STARTLINE (58)

    /** scanner.e:1341			ch = getch()*/
    // SubProg ExtendedString pc: 300 op: PROC (27)
    _ch_26734 = _62getch();
    // SubProg ExtendedString pc: 303 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26734)) {
        _1 = (object)(DBL_PTR(_ch_26734)->dbl);
        DeRefDS(_ch_26734);
        _ch_26734 = _1;
    }
    // SubProg ExtendedString pc: 305 op: STARTLINE (58)

    /** scanner.e:1342		end while*/
    // SubProg ExtendedString pc: 307 op: ENDWHILE (22)
    goto L5; // [307] 106
    // SubProg ExtendedString pc: 309 op: NOP1 (159)
L9: // addr: 310 pc: 309 sub: 26731 op: 159
    // SubProg ExtendedString pc: 310 op: STARTLINE (58)

    /** scanner.e:1343		if length(string_text) > 0 and string_text[1] = '\n' then*/
    // SubProg ExtendedString pc: 312 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26737)){
            _14946 = SEQ_PTR(_string_text_26737)->length;
    }
    else {
        _14946 = 1;
    }
    // SubProg ExtendedString pc: 315 op: GREATER (6)
    _14947 = (_14946 > 0);
    _14946 = NOVALUE;
    // SubProg ExtendedString pc: 319 op: SC1_AND_IF (146)
    if (_14947 == 0) {
        goto L12; // [319] 389
    }
    // SubProg ExtendedString pc: 323 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26737);
    _14949 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg ExtendedString pc: 327 op: EQUALS (3)
    _14950 = (_14949 == 10);
    _14949 = NOVALUE;
    // SubProg ExtendedString pc: 331 op: NOP1 (159)
    // SubProg ExtendedString pc: 332 op: IF (20)
    if (_14950 == 0)
    {
        DeRef(_14950);
        _14950 = NOVALUE;
        goto L12; // [332] 389
    }
    else{
        DeRef(_14950);
        _14950 = NOVALUE;
    }
    // SubProg ExtendedString pc: 335 op: STARTLINE (58)

    /** scanner.e:1344			string_text = string_text[2 .. $]*/
    // SubProg ExtendedString pc: 337 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26737)){
            _14951 = SEQ_PTR(_string_text_26737)->length;
    }
    else {
        _14951 = 1;
    }
    // SubProg ExtendedString pc: 340 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26737;
    RHS_Slice(_string_text_26737, 2, _14951);
    // SubProg ExtendedString pc: 345 op: STARTLINE (58)

    /** scanner.e:1345			if length(string_text) > 0 and string_text[$] = '\n' then*/
    // SubProg ExtendedString pc: 347 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26737)){
            _14953 = SEQ_PTR(_string_text_26737)->length;
    }
    else {
        _14953 = 1;
    }
    // SubProg ExtendedString pc: 350 op: GREATER (6)
    _14954 = (_14953 > 0);
    _14953 = NOVALUE;
    // SubProg ExtendedString pc: 354 op: SC1_AND_IF (146)
    if (_14954 == 0) {
        goto L13; // [354] 388
    }
    // SubProg ExtendedString pc: 358 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26737)){
            _14956 = SEQ_PTR(_string_text_26737)->length;
    }
    else {
        _14956 = 1;
    }
    // SubProg ExtendedString pc: 361 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_string_text_26737);
    _14957 = (object)*(((s1_ptr)_2)->base + _14956);
    // SubProg ExtendedString pc: 365 op: EQUALS (3)
    _14958 = (_14957 == 10);
    _14957 = NOVALUE;
    // SubProg ExtendedString pc: 369 op: NOP1 (159)
    // SubProg ExtendedString pc: 370 op: IF (20)
    if (_14958 == 0)
    {
        DeRef(_14958);
        _14958 = NOVALUE;
        goto L13; // [370] 388
    }
    else{
        DeRef(_14958);
        _14958 = NOVALUE;
    }
    // SubProg ExtendedString pc: 373 op: STARTLINE (58)

    /** scanner.e:1346				string_text = string_text[1 .. $-1]*/
    // SubProg ExtendedString pc: 375 op: LENGTH (42)
    if (IS_SEQUENCE(_string_text_26737)){
            _14959 = SEQ_PTR(_string_text_26737)->length;
    }
    else {
        _14959 = 1;
    }
    // SubProg ExtendedString pc: 378 op: MINUS (10)
    _14960 = _14959 - 1;
    _14959 = NOVALUE;
    // SubProg ExtendedString pc: 382 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_string_text_26737;
    RHS_Slice(_string_text_26737, 1, _14960);
    // SubProg ExtendedString pc: 387 op: NOP1 (159)
L13: // addr: 388 pc: 387 sub: 26731 op: 159
    // SubProg ExtendedString pc: 388 op: NOP1 (159)
L12: // addr: 389 pc: 388 sub: 26731 op: 159
    // SubProg ExtendedString pc: 389 op: STARTLINE (58)

    /** scanner.e:1349		return {STRING, NewStringSym(string_text)}*/
    // SubProg ExtendedString pc: 391 op: GLOBAL_INIT_CHECK (109)
    // SubProg ExtendedString pc: 393 op: PROC (27)
    RefDS(_string_text_26737);
    _14962 = _54NewStringSym(_string_text_26737);
    // SubProg ExtendedString pc: 397 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _14962;
    _14963 = MAKE_SEQ(_1);
    _14962 = NOVALUE;
    // SubProg ExtendedString pc: 401 op: RETURNF (28)

// Exiting block BLOCK: ExtendedString

// block var ech_26733

// block var ch_26734

// block var fch_26735

// block var cline_26736

// block var string_text_26737
    DeRefDSi(_string_text_26737);

// block var trimming_26738
    DeRef(_14936);
    _14936 = NOVALUE;
    DeRef(_14954);
    _14954 = NOVALUE;
    DeRef(_14960);
    _14960 = NOVALUE;
    DeRef(_14941);
    _14941 = NOVALUE;
    DeRef(_14947);
    _14947 = NOVALUE;
    return _14963;
    // SubProg ExtendedString pc: 405 op: BADRETURNF (43)
    ;
}


object _62GetHexString(object _maxnibbles_26824)
{
    object _ch_26825 = NOVALUE;
    object _digit_26826 = NOVALUE;
    object _val_26827 = NOVALUE;
    object _cline_26828 = NOVALUE;
    object _nibble_26829 = NOVALUE;
    object _string_text_26830 = NOVALUE;
// skipping _14987  name type: 0
// skipping _14986  name type: 0
// skipping _14985  name type: 0
// skipping _14984  name type: 0
// skipping _14983  name type: 0
// skipping _14982  name type: 0
// skipping _14981  name type: 0
// skipping _14980  name type: 0
// skipping _14979  name type: 0
// skipping _14978  name type: 0
    object _14977 = NOVALUE; // 26857 14977
    object _14976 = NOVALUE; // 26856 14976
// skipping _14975  name type: 0
// skipping _14974  name type: 0
// skipping _14973  name type: 0
// skipping _14972  name type: 0
// skipping _14971  name type: 0
// skipping _14970  name type: 0
// skipping _14969  name type: 0
// skipping _14968  name type: 0
// skipping _14966  name type: 0
// skipping _14965  name type: 0
// skipping _14964  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetHexString pc: 1 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 3 op: STARTLINE (58)

    /** scanner.e:1360		cline = line_number*/
    // SubProg GetHexString pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 7 op: ASSIGN (18)
    _cline_26828 = _36line_number_16437;
    // SubProg GetHexString pc: 10 op: INTEGER_CHECK (96)
    // SubProg GetHexString pc: 12 op: STARTLINE (58)

    /** scanner.e:1361		string_text = ""*/
    // SubProg GetHexString pc: 14 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26830);
    _string_text_26830 = _5;
    // SubProg GetHexString pc: 17 op: SEQUENCE_CHECK (97)
    // SubProg GetHexString pc: 19 op: STARTLINE (58)

    /** scanner.e:1362		nibble = 1*/
    // SubProg GetHexString pc: 21 op: ASSIGN_I (113)
    _nibble_26829 = 1;
    // SubProg GetHexString pc: 24 op: STARTLINE (58)

    /** scanner.e:1363		val = -1*/
    // SubProg GetHexString pc: 26 op: ASSIGN (18)
    DeRef(_val_26827);
    _val_26827 = -1;
    // SubProg GetHexString pc: 29 op: STARTLINE (58)

    /** scanner.e:1364		ch = getch()*/
    // SubProg GetHexString pc: 31 op: PROC (27)
    _ch_26825 = _62getch();
    // SubProg GetHexString pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26825)) {
        _1 = (object)(DBL_PTR(_ch_26825)->dbl);
        DeRefDS(_ch_26825);
        _ch_26825 = _1;
    }
    // SubProg GetHexString pc: 36 op: STARTLINE (58)

    /** scanner.e:1365		while 1 do*/
    // SubProg GetHexString pc: 38 op: NOP2 (110)
    // SubProg GetHexString pc: 40 op: NOPWHILE (158)
L1: // addr: 41 pc: 40 sub: 26822 op: 158
    // SubProg GetHexString pc: 41 op: STARTLINE (58)

    /** scanner.e:1366			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetHexString pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetHexString pc: 45 op: EQUALS_IFW (104)
    if (_ch_26825 != 26)
    goto L2; // [45] 57
    // SubProg GetHexString pc: 49 op: STARTLINE (58)

    /** scanner.e:1367				CompileErr(129, cline)*/
    // SubProg GetHexString pc: 51 op: PROC (27)
    _50CompileErr(129, _cline_26828, 0);
    // SubProg GetHexString pc: 56 op: NOP1 (159)
L2: // addr: 57 pc: 56 sub: 26822 op: 159
    // SubProg GetHexString pc: 57 op: STARTLINE (58)

    /** scanner.e:1370			if ch = '"' then*/
    // SubProg GetHexString pc: 59 op: EQUALS_IFW_I (121)
    if (_ch_26825 != 34)
    goto L3; // [59] 68
    // SubProg GetHexString pc: 63 op: STARTLINE (58)

    /** scanner.e:1371				exit*/
    // SubProg GetHexString pc: 65 op: EXIT (61)
    goto L4; // [65] 224
    // SubProg GetHexString pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 26822 op: 159
    // SubProg GetHexString pc: 68 op: STARTLINE (58)

    /** scanner.e:1374			digit = find(ch, "0123456789ABCDEFabcdef_ \t\n\r")*/
    // SubProg GetHexString pc: 70 op: FIND_FROM (176)
    _digit_26826 = find_from(_ch_26825, _14967, 1);
    // SubProg GetHexString pc: 75 op: STARTLINE (58)

    /** scanner.e:1375			if digit = 0 then*/
    // SubProg GetHexString pc: 77 op: EQUALS_IFW_I (121)
    if (_digit_26826 != 0)
    goto L5; // [77] 89
    // SubProg GetHexString pc: 81 op: STARTLINE (58)

    /** scanner.e:1376				CompileErr(329)*/
    // SubProg GetHexString pc: 83 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(329, _21933, 0);
    // SubProg GetHexString pc: 88 op: NOP1 (159)
L5: // addr: 89 pc: 88 sub: 26822 op: 159
    // SubProg GetHexString pc: 89 op: STARTLINE (58)

    /** scanner.e:1378			if digit <= 23 then*/
    // SubProg GetHexString pc: 91 op: LESSEQ_IFW_I (123)
    if (_digit_26826 > 23)
    goto L6; // [91] 177
    // SubProg GetHexString pc: 95 op: STARTLINE (58)

    /** scanner.e:1379				if digit != 23 then*/
    // SubProg GetHexString pc: 97 op: NOTEQ_IFW_I (122)
    if (_digit_26826 == 23)
    goto L7; // [97] 212
    // SubProg GetHexString pc: 101 op: STARTLINE (58)

    /** scanner.e:1380					if digit > 16 then*/
    // SubProg GetHexString pc: 103 op: GREATER_IFW_I (124)
    if (_digit_26826 <= 16)
    goto L8; // [103] 114
    // SubProg GetHexString pc: 107 op: STARTLINE (58)

    /** scanner.e:1381						digit -= 6*/
    // SubProg GetHexString pc: 109 op: MINUS_I (116)
    _digit_26826 = _digit_26826 - 6;
    // SubProg GetHexString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26822 op: 159
    // SubProg GetHexString pc: 114 op: STARTLINE (58)

    /** scanner.e:1383					if nibble = 1 then*/
    // SubProg GetHexString pc: 116 op: EQUALS_IFW_I (121)
    if (_nibble_26829 != 1)
    goto L9; // [116] 129
    // SubProg GetHexString pc: 120 op: STARTLINE (58)

    /** scanner.e:1384						val = digit - 1*/
    // SubProg GetHexString pc: 122 op: MINUS (10)
    DeRef(_val_26827);
    _val_26827 = _digit_26826 - 1;
    if ((object)((uintptr_t)_val_26827 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26827 = NewDouble((eudouble)_val_26827);
    }
    // SubProg GetHexString pc: 126 op: ELSE (23)
    goto LA; // [126] 167
    // SubProg GetHexString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26822 op: 159
    // SubProg GetHexString pc: 129 op: STARTLINE (58)

    /** scanner.e:1386						val = val * 16 + digit - 1*/
    // SubProg GetHexString pc: 131 op: MULTIPLY (13)
    if (IS_ATOM_INT(_val_26827)) {
        if (_val_26827 == (short)_val_26827){
            _14976 = _val_26827 * 16;
        }
        else{
            _14976 = NewDouble(_val_26827 * (eudouble)16);
        }
    }
    else {
        _14976 = NewDouble(DBL_PTR(_val_26827)->dbl * (eudouble)16);
    }
    // SubProg GetHexString pc: 135 op: PLUS (11)
    if (IS_ATOM_INT(_14976)) {
        _14977 = _14976 + _digit_26826;
        if ((object)((uintptr_t)_14977 + (uintptr_t)HIGH_BITS) >= 0){
            _14977 = NewDouble((eudouble)_14977);
        }
    }
    else {
        _14977 = NewDouble(DBL_PTR(_14976)->dbl + (eudouble)_digit_26826);
    }
    DeRef(_14976);
    _14976 = NOVALUE;
    // SubProg GetHexString pc: 139 op: MINUS (10)
    DeRef(_val_26827);
    if (IS_ATOM_INT(_14977)) {
        _val_26827 = _14977 - 1;
        if ((object)((uintptr_t)_val_26827 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26827 = NewDouble((eudouble)_val_26827);
        }
    }
    else {
        _val_26827 = NewDouble(DBL_PTR(_14977)->dbl - (eudouble)1);
    }
    DeRef(_14977);
    _14977 = NOVALUE;
    // SubProg GetHexString pc: 143 op: STARTLINE (58)

    /** scanner.e:1387						if nibble = maxnibbles then*/
    // SubProg GetHexString pc: 145 op: EQUALS_IFW_I (121)
    if (_nibble_26829 != _maxnibbles_26824)
    goto LB; // [145] 166
    // SubProg GetHexString pc: 149 op: STARTLINE (58)

    /** scanner.e:1388							string_text &= val*/
    // SubProg GetHexString pc: 151 op: CONCAT (15)
    Ref(_val_26827);
    Append(&_string_text_26830, _string_text_26830, _val_26827);
    // SubProg GetHexString pc: 155 op: STARTLINE (58)

    /** scanner.e:1389							val = -1*/
    // SubProg GetHexString pc: 157 op: ASSIGN (18)
    DeRef(_val_26827);
    _val_26827 = -1;
    // SubProg GetHexString pc: 160 op: STARTLINE (58)

    /** scanner.e:1390							nibble = 0*/
    // SubProg GetHexString pc: 162 op: ASSIGN_I (113)
    _nibble_26829 = 0;
    // SubProg GetHexString pc: 165 op: NOP1 (159)
LB: // addr: 166 pc: 165 sub: 26822 op: 159
    // SubProg GetHexString pc: 166 op: NOP1 (159)
LA: // addr: 167 pc: 166 sub: 26822 op: 159
    // SubProg GetHexString pc: 167 op: STARTLINE (58)

    /** scanner.e:1393					nibble += 1*/
    // SubProg GetHexString pc: 169 op: PLUS1_I (117)
    _nibble_26829 = _nibble_26829 + 1;
    // SubProg GetHexString pc: 173 op: NOP1 (159)
    // SubProg GetHexString pc: 174 op: ELSE (23)
    goto L7; // [174] 212
    // SubProg GetHexString pc: 176 op: NOP1 (159)
L6: // addr: 177 pc: 176 sub: 26822 op: 159
    // SubProg GetHexString pc: 177 op: STARTLINE (58)

    /** scanner.e:1396				if val >= 0 then*/
    // SubProg GetHexString pc: 179 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26827, 0)){
        goto LC; // [179] 195
    }
    // SubProg GetHexString pc: 183 op: STARTLINE (58)

    /** scanner.e:1398					string_text &= val*/
    // SubProg GetHexString pc: 185 op: CONCAT (15)
    Ref(_val_26827);
    Append(&_string_text_26830, _string_text_26830, _val_26827);
    // SubProg GetHexString pc: 189 op: STARTLINE (58)

    /** scanner.e:1399					val = -1*/
    // SubProg GetHexString pc: 191 op: ASSIGN (18)
    DeRef(_val_26827);
    _val_26827 = -1;
    // SubProg GetHexString pc: 194 op: NOP1 (159)
LC: // addr: 195 pc: 194 sub: 26822 op: 159
    // SubProg GetHexString pc: 195 op: STARTLINE (58)

    /** scanner.e:1401				nibble = 1*/
    // SubProg GetHexString pc: 197 op: ASSIGN_I (113)
    _nibble_26829 = 1;
    // SubProg GetHexString pc: 200 op: STARTLINE (58)

    /** scanner.e:1402				if ch = '\n' then*/
    // SubProg GetHexString pc: 202 op: EQUALS_IFW_I (121)
    if (_ch_26825 != 10)
    goto LD; // [202] 211
    // SubProg GetHexString pc: 206 op: STARTLINE (58)

    /** scanner.e:1403					read_line()*/
    // SubProg GetHexString pc: 208 op: PROC (27)
    _62read_line();
    // SubProg GetHexString pc: 210 op: NOP1 (159)
LD: // addr: 211 pc: 210 sub: 26822 op: 159
    // SubProg GetHexString pc: 211 op: NOP1 (159)
L7: // addr: 212 pc: 211 sub: 26822 op: 159
    // SubProg GetHexString pc: 212 op: STARTLINE (58)

    /** scanner.e:1406			ch = getch()*/
    // SubProg GetHexString pc: 214 op: PROC (27)
    _ch_26825 = _62getch();
    // SubProg GetHexString pc: 217 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26825)) {
        _1 = (object)(DBL_PTR(_ch_26825)->dbl);
        DeRefDS(_ch_26825);
        _ch_26825 = _1;
    }
    // SubProg GetHexString pc: 219 op: STARTLINE (58)

    /** scanner.e:1407		end while*/
    // SubProg GetHexString pc: 221 op: ENDWHILE (22)
    goto L1; // [221] 41
    // SubProg GetHexString pc: 223 op: NOP1 (159)
L4: // addr: 224 pc: 223 sub: 26822 op: 159
    // SubProg GetHexString pc: 224 op: STARTLINE (58)

    /** scanner.e:1409		if val >= 0 then	*/
    // SubProg GetHexString pc: 226 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26827, 0)){
        goto LE; // [226] 237
    }
    // SubProg GetHexString pc: 230 op: STARTLINE (58)

    /** scanner.e:1411			string_text &= val*/
    // SubProg GetHexString pc: 232 op: CONCAT (15)
    Ref(_val_26827);
    Append(&_string_text_26830, _string_text_26830, _val_26827);
    // SubProg GetHexString pc: 236 op: NOP1 (159)
LE: // addr: 237 pc: 236 sub: 26822 op: 159
    // SubProg GetHexString pc: 237 op: STARTLINE (58)

    /** scanner.e:1414		return string_text*/
    // SubProg GetHexString pc: 239 op: RETURNF (28)

// Exiting block BLOCK: GetHexString

// block var maxnibbles_26824

// block var ch_26825

// block var digit_26826

// block var val_26827
    DeRef(_val_26827);

// block var cline_26828

// block var nibble_26829
    return _string_text_26830;
    // SubProg GetHexString pc: 243 op: BADRETURNF (43)
    ;
}


object _62GetBitString()
{
    object _ch_26875 = NOVALUE;
    object _digit_26876 = NOVALUE;
    object _val_26877 = NOVALUE;
    object _cline_26878 = NOVALUE;
    object _bitcnt_26879 = NOVALUE;
    object _string_text_26880 = NOVALUE;
// skipping _15007  name type: 0
// skipping _15006  name type: 0
// skipping _15005  name type: 0
// skipping _15004  name type: 0
// skipping _15003  name type: 0
// skipping _15002  name type: 0
// skipping _15001  name type: 0
// skipping _15000  name type: 0
    object _14999 = NOVALUE; // 26904 14999
    object _14998 = NOVALUE; // 26903 14998
// skipping _14997  name type: 0
// skipping _14996  name type: 0
// skipping _14995  name type: 0
// skipping _14994  name type: 0
// skipping _14993  name type: 0
// skipping _14992  name type: 0
// skipping _14990  name type: 0
// skipping _14989  name type: 0
// skipping _14988  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg GetBitString pc: 1 op: STARTLINE (58)

    /** scanner.e:1425		cline = line_number*/
    // SubProg GetBitString pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 5 op: ASSIGN (18)
    _cline_26878 = _36line_number_16437;
    // SubProg GetBitString pc: 8 op: INTEGER_CHECK (96)
    // SubProg GetBitString pc: 10 op: STARTLINE (58)

    /** scanner.e:1426		string_text = ""*/
    // SubProg GetBitString pc: 12 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_string_text_26880);
    _string_text_26880 = _5;
    // SubProg GetBitString pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg GetBitString pc: 17 op: STARTLINE (58)

    /** scanner.e:1427		bitcnt = 1*/
    // SubProg GetBitString pc: 19 op: ASSIGN_I (113)
    _bitcnt_26879 = 1;
    // SubProg GetBitString pc: 22 op: STARTLINE (58)

    /** scanner.e:1428		val = -1*/
    // SubProg GetBitString pc: 24 op: ASSIGN (18)
    DeRef(_val_26877);
    _val_26877 = -1;
    // SubProg GetBitString pc: 27 op: STARTLINE (58)

    /** scanner.e:1429		ch = getch()*/
    // SubProg GetBitString pc: 29 op: PROC (27)
    _ch_26875 = _62getch();
    // SubProg GetBitString pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26875)) {
        _1 = (object)(DBL_PTR(_ch_26875)->dbl);
        DeRefDS(_ch_26875);
        _ch_26875 = _1;
    }
    // SubProg GetBitString pc: 34 op: STARTLINE (58)

    /** scanner.e:1430		while 1 do*/
    // SubProg GetBitString pc: 36 op: NOP2 (110)
    // SubProg GetBitString pc: 38 op: NOPWHILE (158)
L1: // addr: 39 pc: 38 sub: 26873 op: 158
    // SubProg GetBitString pc: 39 op: STARTLINE (58)

    /** scanner.e:1431			if ch = END_OF_FILE_CHAR then*/
    // SubProg GetBitString pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg GetBitString pc: 43 op: EQUALS_IFW (104)
    if (_ch_26875 != 26)
    goto L2; // [43] 55
    // SubProg GetBitString pc: 47 op: STARTLINE (58)

    /** scanner.e:1432				CompileErr(129, cline)*/
    // SubProg GetBitString pc: 49 op: PROC (27)
    _50CompileErr(129, _cline_26878, 0);
    // SubProg GetBitString pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 26873 op: 159
    // SubProg GetBitString pc: 55 op: STARTLINE (58)

    /** scanner.e:1435			if ch = '"' then*/
    // SubProg GetBitString pc: 57 op: EQUALS_IFW_I (121)
    if (_ch_26875 != 34)
    goto L3; // [57] 66
    // SubProg GetBitString pc: 61 op: STARTLINE (58)

    /** scanner.e:1436				exit*/
    // SubProg GetBitString pc: 63 op: EXIT (61)
    goto L4; // [63] 186
    // SubProg GetBitString pc: 65 op: NOP1 (159)
L3: // addr: 66 pc: 65 sub: 26873 op: 159
    // SubProg GetBitString pc: 66 op: STARTLINE (58)

    /** scanner.e:1439			digit = find(ch, "01_ \t\n\r")*/
    // SubProg GetBitString pc: 68 op: FIND_FROM (176)
    _digit_26876 = find_from(_ch_26875, _14991, 1);
    // SubProg GetBitString pc: 73 op: STARTLINE (58)

    /** scanner.e:1440			if digit = 0 then*/
    // SubProg GetBitString pc: 75 op: EQUALS_IFW_I (121)
    if (_digit_26876 != 0)
    goto L5; // [75] 87
    // SubProg GetBitString pc: 79 op: STARTLINE (58)

    /** scanner.e:1441				CompileErr(329)*/
    // SubProg GetBitString pc: 81 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(329, _21933, 0);
    // SubProg GetBitString pc: 86 op: NOP1 (159)
L5: // addr: 87 pc: 86 sub: 26873 op: 159
    // SubProg GetBitString pc: 87 op: STARTLINE (58)

    /** scanner.e:1443			if digit <= 3 then*/
    // SubProg GetBitString pc: 89 op: LESSEQ_IFW_I (123)
    if (_digit_26876 > 3)
    goto L6; // [89] 139
    // SubProg GetBitString pc: 93 op: STARTLINE (58)

    /** scanner.e:1444				if digit != 3 then*/
    // SubProg GetBitString pc: 95 op: NOTEQ_IFW_I (122)
    if (_digit_26876 == 3)
    goto L7; // [95] 174
    // SubProg GetBitString pc: 99 op: STARTLINE (58)

    /** scanner.e:1445					if bitcnt = 1 then*/
    // SubProg GetBitString pc: 101 op: EQUALS_IFW_I (121)
    if (_bitcnt_26879 != 1)
    goto L8; // [101] 114
    // SubProg GetBitString pc: 105 op: STARTLINE (58)

    /** scanner.e:1446						val = digit - 1*/
    // SubProg GetBitString pc: 107 op: MINUS (10)
    DeRef(_val_26877);
    _val_26877 = _digit_26876 - 1;
    if ((object)((uintptr_t)_val_26877 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26877 = NewDouble((eudouble)_val_26877);
    }
    // SubProg GetBitString pc: 111 op: ELSE (23)
    goto L9; // [111] 129
    // SubProg GetBitString pc: 113 op: NOP1 (159)
L8: // addr: 114 pc: 113 sub: 26873 op: 159
    // SubProg GetBitString pc: 114 op: STARTLINE (58)

    /** scanner.e:1448						val = val * 2 + digit - 1*/
    // SubProg GetBitString pc: 116 op: PLUS (11)
    if (IS_ATOM_INT(_val_26877) && IS_ATOM_INT(_val_26877)) {
        _14998 = _val_26877 + _val_26877;
        if ((object)((uintptr_t)_14998 + (uintptr_t)HIGH_BITS) >= 0){
            _14998 = NewDouble((eudouble)_14998);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26877)) {
            _14998 = NewDouble((eudouble)_val_26877 + DBL_PTR(_val_26877)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26877)) {
                _14998 = NewDouble(DBL_PTR(_val_26877)->dbl + (eudouble)_val_26877);
            }
            else
            _14998 = NewDouble(DBL_PTR(_val_26877)->dbl + DBL_PTR(_val_26877)->dbl);
        }
    }
    // SubProg GetBitString pc: 120 op: PLUS (11)
    if (IS_ATOM_INT(_14998)) {
        _14999 = _14998 + _digit_26876;
        if ((object)((uintptr_t)_14999 + (uintptr_t)HIGH_BITS) >= 0){
            _14999 = NewDouble((eudouble)_14999);
        }
    }
    else {
        _14999 = NewDouble(DBL_PTR(_14998)->dbl + (eudouble)_digit_26876);
    }
    DeRef(_14998);
    _14998 = NOVALUE;
    // SubProg GetBitString pc: 124 op: MINUS (10)
    DeRef(_val_26877);
    if (IS_ATOM_INT(_14999)) {
        _val_26877 = _14999 - 1;
        if ((object)((uintptr_t)_val_26877 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26877 = NewDouble((eudouble)_val_26877);
        }
    }
    else {
        _val_26877 = NewDouble(DBL_PTR(_14999)->dbl - (eudouble)1);
    }
    DeRef(_14999);
    _14999 = NOVALUE;
    // SubProg GetBitString pc: 128 op: NOP1 (159)
L9: // addr: 129 pc: 128 sub: 26873 op: 159
    // SubProg GetBitString pc: 129 op: STARTLINE (58)

    /** scanner.e:1450					bitcnt += 1*/
    // SubProg GetBitString pc: 131 op: PLUS1_I (117)
    _bitcnt_26879 = _bitcnt_26879 + 1;
    // SubProg GetBitString pc: 135 op: NOP1 (159)
    // SubProg GetBitString pc: 136 op: ELSE (23)
    goto L7; // [136] 174
    // SubProg GetBitString pc: 138 op: NOP1 (159)
L6: // addr: 139 pc: 138 sub: 26873 op: 159
    // SubProg GetBitString pc: 139 op: STARTLINE (58)

    /** scanner.e:1453				if val >= 0 then*/
    // SubProg GetBitString pc: 141 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26877, 0)){
        goto LA; // [141] 157
    }
    // SubProg GetBitString pc: 145 op: STARTLINE (58)

    /** scanner.e:1455					string_text &= val*/
    // SubProg GetBitString pc: 147 op: CONCAT (15)
    Ref(_val_26877);
    Append(&_string_text_26880, _string_text_26880, _val_26877);
    // SubProg GetBitString pc: 151 op: STARTLINE (58)

    /** scanner.e:1456					val = -1*/
    // SubProg GetBitString pc: 153 op: ASSIGN (18)
    DeRef(_val_26877);
    _val_26877 = -1;
    // SubProg GetBitString pc: 156 op: NOP1 (159)
LA: // addr: 157 pc: 156 sub: 26873 op: 159
    // SubProg GetBitString pc: 157 op: STARTLINE (58)

    /** scanner.e:1458				bitcnt = 1*/
    // SubProg GetBitString pc: 159 op: ASSIGN_I (113)
    _bitcnt_26879 = 1;
    // SubProg GetBitString pc: 162 op: STARTLINE (58)

    /** scanner.e:1459				if ch = '\n' then*/
    // SubProg GetBitString pc: 164 op: EQUALS_IFW_I (121)
    if (_ch_26875 != 10)
    goto LB; // [164] 173
    // SubProg GetBitString pc: 168 op: STARTLINE (58)

    /** scanner.e:1460					read_line()*/
    // SubProg GetBitString pc: 170 op: PROC (27)
    _62read_line();
    // SubProg GetBitString pc: 172 op: NOP1 (159)
LB: // addr: 173 pc: 172 sub: 26873 op: 159
    // SubProg GetBitString pc: 173 op: NOP1 (159)
L7: // addr: 174 pc: 173 sub: 26873 op: 159
    // SubProg GetBitString pc: 174 op: STARTLINE (58)

    /** scanner.e:1463			ch = getch()*/
    // SubProg GetBitString pc: 176 op: PROC (27)
    _ch_26875 = _62getch();
    // SubProg GetBitString pc: 179 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26875)) {
        _1 = (object)(DBL_PTR(_ch_26875)->dbl);
        DeRefDS(_ch_26875);
        _ch_26875 = _1;
    }
    // SubProg GetBitString pc: 181 op: STARTLINE (58)

    /** scanner.e:1464		end while*/
    // SubProg GetBitString pc: 183 op: ENDWHILE (22)
    goto L1; // [183] 39
    // SubProg GetBitString pc: 185 op: NOP1 (159)
L4: // addr: 186 pc: 185 sub: 26873 op: 159
    // SubProg GetBitString pc: 186 op: STARTLINE (58)

    /** scanner.e:1466		if val >= 0 then	*/
    // SubProg GetBitString pc: 188 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _val_26877, 0)){
        goto LC; // [188] 199
    }
    // SubProg GetBitString pc: 192 op: STARTLINE (58)

    /** scanner.e:1468			string_text &= val*/
    // SubProg GetBitString pc: 194 op: CONCAT (15)
    Ref(_val_26877);
    Append(&_string_text_26880, _string_text_26880, _val_26877);
    // SubProg GetBitString pc: 198 op: NOP1 (159)
LC: // addr: 199 pc: 198 sub: 26873 op: 159
    // SubProg GetBitString pc: 199 op: STARTLINE (58)

    /** scanner.e:1471		return string_text*/
    // SubProg GetBitString pc: 201 op: RETURNF (28)

// Exiting block BLOCK: GetBitString

// block var ch_26875

// block var digit_26876

// block var val_26877
    DeRef(_val_26877);

// block var cline_26878

// block var bitcnt_26879
    return _string_text_26880;
    // SubProg GetBitString pc: 205 op: BADRETURNF (43)
    ;
}


object _62Scanner()
{
    object _fwd_inlined_set_qualified_fwd_at_441_27018 = NOVALUE;
    object _ch_26919 = NOVALUE;
    object _i_26920 = NOVALUE;
    object _sp_26921 = NOVALUE;
    object _prev_Nne_26922 = NOVALUE;
    object _pch_26923 = NOVALUE;
    object _cline_26924 = NOVALUE;
    object _yytext_26925 = NOVALUE;
    object _namespaces_26926 = NOVALUE;
    object _d_26927 = NOVALUE;
    object _tok_26929 = NOVALUE;
    object _is_int_26930 = NOVALUE;
    object _class_26931 = NOVALUE;
    object _name_26932 = NOVALUE;
    object _is_namespace_26991 = NOVALUE;
    object _basetype_27225 = NOVALUE;
    object _hdigit_27265 = NOVALUE;
    object _fch_27399 = NOVALUE;
    object _cnest_27579 = NOVALUE;
    object _ach_27608 = NOVALUE;
    object _31713 = NOVALUE; // 63921 31713
    object _31712 = NOVALUE; // 63920 31712
    object _31711 = NOVALUE; // 63919 31711
    object _31710 = NOVALUE; // 63918 31710
    object _31709 = NOVALUE; // 63917 31709
    object _31708 = NOVALUE; // 63916 31708
    object _31707 = NOVALUE; // 63915 31707
    object _15393 = NOVALUE; // 27701 15393
    object _15392 = NOVALUE; // 27698 15392
// skipping _15391  name type: 0
    object _15390 = NOVALUE; // 27694 15390
// skipping _15389  name type: 0
    object _15388 = NOVALUE; // 27690 15388
    object _15387 = NOVALUE; // 27689 15387
    object _15386 = NOVALUE; // 27688 15386
// skipping _15385  name type: 0
    object _15384 = NOVALUE; // 27683 15384
    object _15383 = NOVALUE; // 27682 15383
    object _15382 = NOVALUE; // 27680 15382
    object _15381 = NOVALUE; // 27679 15381
// skipping _15380  name type: 0
    object _15379 = NOVALUE; // 27674 15379
    object _15378 = NOVALUE; // 27671 15378
// skipping _15377  name type: 0
    object _15376 = NOVALUE; // 27668 15376
// skipping _15375  name type: 0
    object _15374 = NOVALUE; // 27663 15374
    object _15373 = NOVALUE; // 27660 15373
// skipping _15372  name type: 0
    object _15371 = NOVALUE; // 27657 15371
// skipping _15370  name type: 0
    object _15369 = NOVALUE; // 27652 15369
    object _15368 = NOVALUE; // 27649 15368
// skipping _15367  name type: 0
    object _15366 = NOVALUE; // 27646 15366
// skipping _15365  name type: 0
    object _15364 = NOVALUE; // 27641 15364
    object _15363 = NOVALUE; // 27640 15363
    object _15362 = NOVALUE; // 27636 15362
    object _15361 = NOVALUE; // 27635 15361
    object _15360 = NOVALUE; // 27632 15360
// skipping _15359  name type: 0
    object _15358 = NOVALUE; // 27627 15358
    object _15357 = NOVALUE; // 27625 15357
// skipping _15354  name type: 0
// skipping _15352  name type: 0
// skipping _15351  name type: 0
// skipping _15350  name type: 0
// skipping _15349  name type: 0
// skipping _15348  name type: 0
// skipping _15347  name type: 0
    object _15346 = NOVALUE; // 27604 15346
// skipping _15345  name type: 0
// skipping _15344  name type: 0
// skipping _15343  name type: 0
// skipping _15342  name type: 0
// skipping _15341  name type: 0
// skipping _15340  name type: 0
// skipping _15339  name type: 0
// skipping _15336  name type: 0
// skipping _15335  name type: 0
// skipping _15334  name type: 0
    object _15333 = NOVALUE; // 27575 15333
// skipping _15332  name type: 0
// skipping _15331  name type: 0
// skipping _15330  name type: 0
    object _15329 = NOVALUE; // 27568 15329
    object _15328 = NOVALUE; // 27566 15328
// skipping _15327  name type: 0
// skipping _15326  name type: 0
// skipping _15325  name type: 0
    object _15324 = NOVALUE; // 27559 15324
    object _15323 = NOVALUE; // 27558 15323
    object _15322 = NOVALUE; // 27554 15322
    object _15321 = NOVALUE; // 27553 15321
// skipping _15320  name type: 0
    object _15319 = NOVALUE; // 27546 15319
    object _15318 = NOVALUE; // 27545 15318
    object _15317 = NOVALUE; // 27542 15317
    object _15316 = NOVALUE; // 27540 15316
// skipping _15315  name type: 0
// skipping _15314  name type: 0
    object _15313 = NOVALUE; // 27534 15313
    object _15312 = NOVALUE; // 27533 15312
    object _15311 = NOVALUE; // 27532 15311
    object _15310 = NOVALUE; // 27531 15310
    object _15309 = NOVALUE; // 27530 15309
    object _15308 = NOVALUE; // 27529 15308
// skipping _15307  name type: 0
    object _15306 = NOVALUE; // 27526 15306
    object _15305 = NOVALUE; // 27525 15305
    object _15304 = NOVALUE; // 27524 15304
    object _15303 = NOVALUE; // 27523 15303
    object _15302 = NOVALUE; // 27522 15302
    object _15301 = NOVALUE; // 27521 15301
// skipping _15300  name type: 0
    object _15299 = NOVALUE; // 27518 15299
    object _15298 = NOVALUE; // 27517 15298
// skipping _15297  name type: 0
// skipping _15296  name type: 0
    object _15295 = NOVALUE; // 27512 15295
// skipping _15294  name type: 0
// skipping _15293  name type: 0
    object _15292 = NOVALUE; // 27505 15292
// skipping _15291  name type: 0
// skipping _15290  name type: 0
// skipping _15289  name type: 0
// skipping _15288  name type: 0
    object _15287 = NOVALUE; // 27486 15287
    object _15286 = NOVALUE; // 27485 15286
    object _15285 = NOVALUE; // 27484 15285
    object _15284 = NOVALUE; // 27483 15284
    object _15283 = NOVALUE; // 27482 15283
    object _15282 = NOVALUE; // 27481 15282
// skipping _15281  name type: 0
    object _15280 = NOVALUE; // 27477 15280
    object _15279 = NOVALUE; // 27476 15279
    object _15278 = NOVALUE; // 27475 15278
    object _15277 = NOVALUE; // 27474 15277
    object _15276 = NOVALUE; // 27473 15276
    object _15275 = NOVALUE; // 27472 15275
// skipping _15274  name type: 0
    object _15273 = NOVALUE; // 27468 15273
    object _15272 = NOVALUE; // 27467 15272
// skipping _15271  name type: 0
// skipping _15270  name type: 0
    object _15269 = NOVALUE; // 27462 15269
// skipping _15268  name type: 0
// skipping _15267  name type: 0
    object _15266 = NOVALUE; // 27458 15266
// skipping _15265  name type: 0
    object _15264 = NOVALUE; // 27452 15264
    object _15263 = NOVALUE; // 27450 15263
// skipping _15262  name type: 0
// skipping _15261  name type: 0
// skipping _15260  name type: 0
    object _15259 = NOVALUE; // 27443 15259
    object _15258 = NOVALUE; // 27440 15258
// skipping _15257  name type: 0
// skipping _15256  name type: 0
// skipping _15255  name type: 0
    object _15254 = NOVALUE; // 27432 15254
    object _15253 = NOVALUE; // 27431 15253
    object _15252 = NOVALUE; // 27427 15252
// skipping _15251  name type: 0
    object _15250 = NOVALUE; // 27425 15250
// skipping _15249  name type: 0
// skipping _15248  name type: 0
// skipping _15247  name type: 0
// skipping _15246  name type: 0
    object _15245 = NOVALUE; // 27416 15245
// skipping _15244  name type: 0
// skipping _15243  name type: 0
    object _15242 = NOVALUE; // 27411 15242
    object _15241 = NOVALUE; // 27410 15241
    object _15240 = NOVALUE; // 27409 15240
    object _15239 = NOVALUE; // 27406 15239
// skipping _15238  name type: 0
// skipping _15237  name type: 0
// skipping _15236  name type: 0
// skipping _15235  name type: 0
// skipping _15234  name type: 0
    object _15233 = NOVALUE; // 27395 15233
// skipping _15232  name type: 0
    object _15231 = NOVALUE; // 27390 15231
// skipping _15230  name type: 0
// skipping _15229  name type: 0
// skipping _15228  name type: 0
// skipping _15227  name type: 0
    object _15226 = NOVALUE; // 27378 15226
    object _15225 = NOVALUE; // 27377 15225
    object _15224 = NOVALUE; // 27373 15224
    object _15223 = NOVALUE; // 27372 15223
    object _15222 = NOVALUE; // 27369 15222
    object _15221 = NOVALUE; // 27367 15221
    object _15220 = NOVALUE; // 27364 15220
// skipping _15219  name type: 0
    object _15218 = NOVALUE; // 27361 15218
// skipping _15217  name type: 0
    object _15216 = NOVALUE; // 27357 15216
    object _15215 = NOVALUE; // 27356 15215
    object _15214 = NOVALUE; // 27352 15214
    object _15213 = NOVALUE; // 27351 15213
    object _15212 = NOVALUE; // 27348 15212
// skipping _15211  name type: 0
    object _15210 = NOVALUE; // 27344 15210
// skipping _15209  name type: 0
// skipping _15208  name type: 0
// skipping _15207  name type: 0
// skipping _15206  name type: 0
    object _15205 = NOVALUE; // 27336 15205
    object _15204 = NOVALUE; // 27335 15204
// skipping _15203  name type: 0
    object _15202 = NOVALUE; // 27331 15202
// skipping _15201  name type: 0
// skipping _15200  name type: 0
// skipping _15199  name type: 0
    object _15198 = NOVALUE; // 27325 15198
// skipping _15197  name type: 0
// skipping _15196  name type: 0
    object _15195 = NOVALUE; // 27319 15195
    object _15194 = NOVALUE; // 27317 15194
// skipping _15193  name type: 0
    object _15192 = NOVALUE; // 27315 15192
    object _15191 = NOVALUE; // 27314 15191
    object _15190 = NOVALUE; // 27313 15190
// skipping _15189  name type: 0
// skipping _15188  name type: 0
    object _15187 = NOVALUE; // 27308 15187
    object _15185 = NOVALUE; // 27306 15185
    object _15184 = NOVALUE; // 27305 15184
// skipping _15183  name type: 0
// skipping _15182  name type: 0
// skipping _15181  name type: 0
    object _15180 = NOVALUE; // 27297 15180
// skipping _15179  name type: 0
// skipping _15178  name type: 0
// skipping _15177  name type: 0
    object _15176 = NOVALUE; // 27291 15176
// skipping _15175  name type: 0
// skipping _15174  name type: 0
    object _15173 = NOVALUE; // 27285 15173
// skipping _15172  name type: 0
// skipping _15171  name type: 0
// skipping _15170  name type: 0
// skipping _15169  name type: 0
// skipping _15168  name type: 0
    object _15167 = NOVALUE; // 27273 15167
// skipping _15166  name type: 0
// skipping _15165  name type: 0
// skipping _15164  name type: 0
// skipping _15163  name type: 0
// skipping _15161  name type: 0
// skipping _15160  name type: 0
    object _15159 = NOVALUE; // 27260 15159
    object _15158 = NOVALUE; // 27259 15158
    object _15157 = NOVALUE; // 27258 15157
// skipping _15156  name type: 0
    object _15155 = NOVALUE; // 27254 15155
// skipping _15154  name type: 0
// skipping _15153  name type: 0
    object _15152 = NOVALUE; // 27249 15152
// skipping _15151  name type: 0
    object _15150 = NOVALUE; // 27247 15150
// skipping _15149  name type: 0
    object _15148 = NOVALUE; // 27244 15148
// skipping _15147  name type: 0
// skipping _15146  name type: 0
    object _15145 = NOVALUE; // 27239 15145
// skipping _15144  name type: 0
// skipping _15143  name type: 0
    object _15142 = NOVALUE; // 27233 15142
// skipping _15141  name type: 0
    object _15140 = NOVALUE; // 27230 15140
// skipping _15139  name type: 0
    object _15138 = NOVALUE; // 27224 15138
// skipping _15137  name type: 0
    object _15136 = NOVALUE; // 27221 15136
    object _15135 = NOVALUE; // 27218 15135
// skipping _15134  name type: 0
// skipping _15133  name type: 0
// skipping _15132  name type: 0
    object _15131 = NOVALUE; // 27205 15131
// skipping _15130  name type: 0
// skipping _15129  name type: 0
    object _15128 = NOVALUE; // 27200 15128
// skipping _15127  name type: 0
    object _15126 = NOVALUE; // 27195 15126
// skipping _15125  name type: 0
// skipping _15124  name type: 0
    object _15123 = NOVALUE; // 27187 15123
// skipping _15122  name type: 0
// skipping _15121  name type: 0
// skipping _15120  name type: 0
// skipping _15119  name type: 0
// skipping _15118  name type: 0
// skipping _15117  name type: 0
    object _15116 = NOVALUE; // 27166 15116
// skipping _15115  name type: 0
    object _15114 = NOVALUE; // 27161 15114
// skipping _15113  name type: 0
// skipping _15112  name type: 0
    object _15111 = NOVALUE; // 27153 15111
// skipping _15110  name type: 0
// skipping _15109  name type: 0
// skipping _15108  name type: 0
// skipping _15107  name type: 0
// skipping _15106  name type: 0
    object _15105 = NOVALUE; // 27133 15105
    object _15104 = NOVALUE; // 27131 15104
    object _15103 = NOVALUE; // 27129 15103
    object _15102 = NOVALUE; // 27128 15102
    object _15101 = NOVALUE; // 27125 15101
    object _15100 = NOVALUE; // 27124 15100
    object _15099 = NOVALUE; // 27123 15099
// skipping _15098  name type: 0
    object _15097 = NOVALUE; // 27116 15097
// skipping _15096  name type: 0
    object _15095 = NOVALUE; // 27109 15095
// skipping _15094  name type: 0
    object _15093 = NOVALUE; // 27102 15093
// skipping _15092  name type: 0
    object _15091 = NOVALUE; // 27095 15091
// skipping _15090  name type: 0
    object _15089 = NOVALUE; // 27091 15089
    object _15088 = NOVALUE; // 27089 15088
    object _15087 = NOVALUE; // 27088 15087
    object _15086 = NOVALUE; // 27083 15086
    object _15085 = NOVALUE; // 27082 15085
// skipping _15084  name type: 0
    object _15083 = NOVALUE; // 27077 15083
// skipping _15082  name type: 0
// skipping _15081  name type: 0
    object _15080 = NOVALUE; // 27069 15080
// skipping _15079  name type: 0
    object _15078 = NOVALUE; // 27065 15078
    object _15077 = NOVALUE; // 27063 15077
    object _15076 = NOVALUE; // 27062 15076
// skipping _15075  name type: 0
    object _15074 = NOVALUE; // 27055 15074
// skipping _15073  name type: 0
// skipping _15072  name type: 0
// skipping _15071  name type: 0
// skipping _15070  name type: 0
    object _15069 = NOVALUE; // 27040 15069
// skipping _15068  name type: 0
// skipping _15067  name type: 0
// skipping _15066  name type: 0
    object _15065 = NOVALUE; // 27034 15065
// skipping _15064  name type: 0
// skipping _15063  name type: 0
    object _15062 = NOVALUE; // 27030 15062
// skipping _15061  name type: 0
    object _15060 = NOVALUE; // 27028 15060
    object _15059 = NOVALUE; // 27026 15059
// skipping _15058  name type: 0
    object _15057 = NOVALUE; // 27023 15057
// skipping _15056  name type: 0
    object _15055 = NOVALUE; // 27021 15055
// skipping _15054  name type: 0
    object _15053 = NOVALUE; // 27016 15053
    object _15052 = NOVALUE; // 27014 15052
    object _15051 = NOVALUE; // 27013 15051
// skipping _15050  name type: 0
    object _15049 = NOVALUE; // 27008 15049
// skipping _15048  name type: 0
// skipping _15047  name type: 0
// skipping _15046  name type: 0
// skipping _15045  name type: 0
    object _15044 = NOVALUE; // 26996 15044
// skipping _15043  name type: 0
// skipping _15042  name type: 0
    object _15041 = NOVALUE; // 26989 15041
// skipping _15040  name type: 0
    object _15039 = NOVALUE; // 26987 15039
// skipping _15038  name type: 0
// skipping _15037  name type: 0
    object _15036 = NOVALUE; // 26983 15036
    object _15035 = NOVALUE; // 26981 15035
// skipping _15034  name type: 0
    object _15033 = NOVALUE; // 26978 15033
    object _15032 = NOVALUE; // 26976 15032
    object _15031 = NOVALUE; // 26975 15031
    object _15030 = NOVALUE; // 26974 15030
    object _15029 = NOVALUE; // 26970 15029
    object _15028 = NOVALUE; // 26969 15028
    object _15027 = NOVALUE; // 26968 15027
    object _15026 = NOVALUE; // 26964 15026
    object _15025 = NOVALUE; // 26963 15025
    object _15024 = NOVALUE; // 26962 15024
    object _15023 = NOVALUE; // 26958 15023
    object _15022 = NOVALUE; // 26957 15022
    object _15021 = NOVALUE; // 26956 15021
// skipping _15018  name type: 0
// skipping _15017  name type: 0
    object _15016 = NOVALUE; // 26946 15016
// skipping _15015  name type: 0
    object _15014 = NOVALUE; // 26944 15014
// skipping _15013  name type: 0
// skipping _15012  name type: 0
    object _15011 = NOVALUE; // 26939 15011
// skipping _15010  name type: 0
    object _15009 = NOVALUE; // 26937 15009
// skipping _15008  name type: 0
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
L1: // addr: 10 pc: 9 sub: 26917 op: 158
    // SubProg Scanner pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 12 op: WHILE (47)
    if (_13TRUE_452 == 0)
    {
        goto L2; // [12] 3793
    }
    else{
    }
    // SubProg Scanner pc: 15 op: STARTLINE (58)

    /** scanner.e:1486			ch = getch()*/
    // SubProg Scanner pc: 17 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 20 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 22 op: STARTLINE (58)

    /** scanner.e:1487			while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 24 op: NOP2 (110)
    // SubProg Scanner pc: 26 op: NOPWHILE (158)
L3: // addr: 27 pc: 26 sub: 26917 op: 158
    // SubProg Scanner pc: 27 op: EQUALS (3)
    _15009 = (_ch_26919 == 32);
    // SubProg Scanner pc: 31 op: SC1_OR_IF (147)
    if (_15009 != 0) {
        goto L4; // [31] 44
    }
    // SubProg Scanner pc: 35 op: EQUALS (3)
    _15011 = (_ch_26919 == 9);
    // SubProg Scanner pc: 39 op: NOP1 (159)
    // SubProg Scanner pc: 40 op: WHILE (47)
    if (_15011 == 0)
    {
        DeRef(_15011);
        _15011 = NOVALUE;
        goto L5; // [40] 56
    }
    else{
        DeRef(_15011);
        _15011 = NOVALUE;
    }
    // SubProg Scanner pc: 43 op: NOP1 (159)
L4: // addr: 44 pc: 43 sub: 26917 op: 159
    // SubProg Scanner pc: 44 op: STARTLINE (58)

    /** scanner.e:1488				ch = getch()*/
    // SubProg Scanner pc: 46 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 49 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 51 op: STARTLINE (58)

    /** scanner.e:1489			end while*/
    // SubProg Scanner pc: 53 op: ENDWHILE (22)
    goto L3; // [53] 27
    // SubProg Scanner pc: 55 op: NOP1 (159)
L5: // addr: 56 pc: 55 sub: 26917 op: 159
    // SubProg Scanner pc: 56 op: STARTLINE (58)

    /** scanner.e:1491			class = char_class[ch]*/
    // SubProg Scanner pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 60 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _class_26931 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 64 op: STARTLINE (58)

    /** scanner.e:1494			if class = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 66 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 68 op: EQUALS (3)
    _15014 = (_class_26931 == -2);
    // SubProg Scanner pc: 72 op: SC1_OR_IF (147)
    if (_15014 != 0) {
        goto L6; // [72] 85
    }
    // SubProg Scanner pc: 76 op: EQUALS (3)
    _15016 = (_ch_26919 == 95);
    // SubProg Scanner pc: 80 op: NOP1 (159)
    // SubProg Scanner pc: 81 op: IF (20)
    if (_15016 == 0)
    {
        DeRef(_15016);
        _15016 = NOVALUE;
        goto L7; // [81] 1282
    }
    else{
        DeRef(_15016);
        _15016 = NOVALUE;
    }
    // SubProg Scanner pc: 84 op: NOP1 (159)
L6: // addr: 85 pc: 84 sub: 26917 op: 159
    // SubProg Scanner pc: 85 op: STARTLINE (58)

    /** scanner.e:1495				sp = bp*/
    // SubProg Scanner pc: 87 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 89 op: ASSIGN (18)
    _sp_26921 = _50bp_48711;
    // SubProg Scanner pc: 92 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 94 op: STARTLINE (58)

    /** scanner.e:1496				pch = ch*/
    // SubProg Scanner pc: 96 op: ASSIGN_I (113)
    _pch_26923 = _ch_26919;
    // SubProg Scanner pc: 99 op: STARTLINE (58)

    /** scanner.e:1497				ch = getch()*/
    // SubProg Scanner pc: 101 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 104 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 106 op: STARTLINE (58)

    /** scanner.e:1498				if ch = '"' then*/
    // SubProg Scanner pc: 108 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 34)
    goto L8; // [108] 222
    // SubProg Scanner pc: 112 op: STARTLINE (58)

    /** scanner.e:1499					switch pch do*/
    // SubProg Scanner pc: 114 op: SWITCH_I (193)
    _0 = _pch_26923;
    switch ( _0 ){ 
        // SubProg Scanner pc: 119 op: STARTLINE (58)

        /** scanner.e:1500						case 'x' then*/
        // SubProg Scanner pc: 121 op: CASE (186)
        case 120:
        // SubProg Scanner pc: 123 op: STARTLINE (58)

        /** scanner.e:1501							return {STRING, NewStringSym(GetHexString(2))}*/
        // SubProg Scanner pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg Scanner pc: 127 op: PROC (27)
        _15021 = _62GetHexString(2);
        // SubProg Scanner pc: 131 op: PROC (27)
        _15022 = _54NewStringSym(_15021);
        _15021 = NOVALUE;
        // SubProg Scanner pc: 135 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15022;
        _15023 = MAKE_SEQ(_1);
        _15022 = NOVALUE;
        // SubProg Scanner pc: 139 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
        DeRef(_yytext_26925);

// block var namespaces_26926
        DeRef(_namespaces_26926);

// block var d_26927
        DeRef(_d_26927);

// block var tok_26929
        DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
        DeRef(_name_26932);
        DeRef(_15014);
        _15014 = NOVALUE;
        DeRef(_15009);
        _15009 = NOVALUE;
        return _15023;
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
        _15024 = _62GetHexString(4);
        // SubProg Scanner pc: 157 op: PROC (27)
        _15025 = _54NewStringSym(_15024);
        _15024 = NOVALUE;
        // SubProg Scanner pc: 161 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15025;
        _15026 = MAKE_SEQ(_1);
        _15025 = NOVALUE;
        // SubProg Scanner pc: 165 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
        DeRef(_yytext_26925);

// block var namespaces_26926
        DeRef(_namespaces_26926);

// block var d_26927
        DeRef(_d_26927);

// block var tok_26929
        DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
        DeRef(_name_26932);
        DeRef(_15014);
        _15014 = NOVALUE;
        DeRef(_15009);
        _15009 = NOVALUE;
        DeRef(_15023);
        _15023 = NOVALUE;
        return _15026;
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
        _15027 = _62GetHexString(8);
        // SubProg Scanner pc: 183 op: PROC (27)
        _15028 = _54NewStringSym(_15027);
        _15027 = NOVALUE;
        // SubProg Scanner pc: 187 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15028;
        _15029 = MAKE_SEQ(_1);
        _15028 = NOVALUE;
        // SubProg Scanner pc: 191 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
        DeRef(_yytext_26925);

// block var namespaces_26926
        DeRef(_namespaces_26926);

// block var d_26927
        DeRef(_d_26927);

// block var tok_26929
        DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
        DeRef(_name_26932);
        DeRef(_15014);
        _15014 = NOVALUE;
        DeRef(_15009);
        _15009 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15023);
        _15023 = NOVALUE;
        return _15029;
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
        _15030 = _62GetBitString();
        // SubProg Scanner pc: 208 op: PROC (27)
        _15031 = _54NewStringSym(_15030);
        _15030 = NOVALUE;
        // SubProg Scanner pc: 212 op: RIGHT_BRACE_2 (85)
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15031;
        _15032 = MAKE_SEQ(_1);
        _15031 = NOVALUE;
        // SubProg Scanner pc: 216 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
        DeRef(_yytext_26925);

// block var namespaces_26926
        DeRef(_namespaces_26926);

// block var d_26927
        DeRef(_d_26927);

// block var tok_26929
        DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
        DeRef(_name_26932);
        DeRef(_15029);
        _15029 = NOVALUE;
        DeRef(_15014);
        _15014 = NOVALUE;
        DeRef(_15009);
        _15009 = NOVALUE;
        DeRef(_15026);
        _15026 = NOVALUE;
        DeRef(_15023);
        _15023 = NOVALUE;
        return _15032;
        // SubProg Scanner pc: 220 op: NOPSWITCH (187)
    ;}L9: // addr: 221 pc: 220 sub: 26917 op: 187
    // SubProg Scanner pc: 221 op: NOP1 (159)
L8: // addr: 222 pc: 221 sub: 26917 op: 159
    // SubProg Scanner pc: 222 op: STARTLINE (58)

    /** scanner.e:1515				while id_char[ch] do*/
    // SubProg Scanner pc: 224 op: NOP2 (110)
    // SubProg Scanner pc: 226 op: NOPWHILE (158)
LA: // addr: 227 pc: 226 sub: 26917 op: 158
    // SubProg Scanner pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 229 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62id_char_25187);
    _15033 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 233 op: WHILE (47)
    if (_15033 == 0)
    {
        _15033 = NOVALUE;
        goto LB; // [233] 248
    }
    else{
        _15033 = NOVALUE;
    }
    // SubProg Scanner pc: 236 op: STARTLINE (58)

    /** scanner.e:1516					ch = getch()*/
    // SubProg Scanner pc: 238 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 241 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 243 op: STARTLINE (58)

    /** scanner.e:1517				end while*/
    // SubProg Scanner pc: 245 op: ENDWHILE (22)
    goto LA; // [245] 227
    // SubProg Scanner pc: 247 op: NOP1 (159)
LB: // addr: 248 pc: 247 sub: 26917 op: 159
    // SubProg Scanner pc: 248 op: STARTLINE (58)

    /** scanner.e:1518				yytext = ThisLine[sp-1..bp-2]*/
    // SubProg Scanner pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 252 op: MINUS (10)
    _15035 = _sp_26921 - 1;
    if ((object)((uintptr_t)_15035 +(uintptr_t) HIGH_BITS) >= 0){
        _15035 = NewDouble((eudouble)_15035);
    }
    // SubProg Scanner pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 258 op: MINUS (10)
    _15036 = _50bp_48711 - 2;
    // SubProg Scanner pc: 262 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_yytext_26925;
    RHS_Slice(_50ThisLine_48707, _15035, _15036);
    // SubProg Scanner pc: 267 op: STARTLINE (58)

    /** scanner.e:1519				ungetch()*/
    // SubProg Scanner pc: 269 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 271 op: STARTLINE (58)

    /** scanner.e:1521				ch = getch()*/
    // SubProg Scanner pc: 273 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 276 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 278 op: STARTLINE (58)

    /** scanner.e:1522				while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 280 op: NOP2 (110)
    // SubProg Scanner pc: 282 op: NOPWHILE (158)
LC: // addr: 283 pc: 282 sub: 26917 op: 158
    // SubProg Scanner pc: 283 op: EQUALS (3)
    _15039 = (_ch_26919 == 32);
    // SubProg Scanner pc: 287 op: SC1_OR_IF (147)
    if (_15039 != 0) {
        goto LD; // [287] 300
    }
    // SubProg Scanner pc: 291 op: EQUALS (3)
    _15041 = (_ch_26919 == 9);
    // SubProg Scanner pc: 295 op: NOP1 (159)
    // SubProg Scanner pc: 296 op: WHILE (47)
    if (_15041 == 0)
    {
        DeRef(_15041);
        _15041 = NOVALUE;
        goto LE; // [296] 312
    }
    else{
        DeRef(_15041);
        _15041 = NOVALUE;
    }
    // SubProg Scanner pc: 299 op: NOP1 (159)
LD: // addr: 300 pc: 299 sub: 26917 op: 159
    // SubProg Scanner pc: 300 op: STARTLINE (58)

    /** scanner.e:1523					ch = getch()*/
    // SubProg Scanner pc: 302 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 305 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 307 op: STARTLINE (58)

    /** scanner.e:1524				end while*/
    // SubProg Scanner pc: 309 op: ENDWHILE (22)
    goto LC; // [309] 283
    // SubProg Scanner pc: 311 op: NOP1 (159)
LE: // addr: 312 pc: 311 sub: 26917 op: 159
    // SubProg Scanner pc: 312 op: STARTLINE (58)

    /** scanner.e:1525				integer is_namespace*/
    // SubProg Scanner pc: 314 op: STARTLINE (58)

    /** scanner.e:1527				if might_be_namespace then*/
    // SubProg Scanner pc: 316 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 318 op: IF (20)
    if (_62might_be_namespace_26723 == 0)
    {
        goto LF; // [318] 361
    }
    else{
    }
    // SubProg Scanner pc: 321 op: STARTLINE (58)

    /** scanner.e:1528					tok = keyfind(yytext, -1, , -1 )*/
    // SubProg Scanner pc: 323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 325 op: PROC (27)
    RefDS(_yytext_26925);
    _31713 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 329 op: PROC (27)
    RefDS(_yytext_26925);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, -1, _36current_file_no_16436, -1, _31713);
    DeRef(_0);
    _31713 = NOVALUE;
    // SubProg Scanner pc: 337 op: STARTLINE (58)

    /** scanner.e:1529					is_namespace = tok[T_ID] = NAMESPACE*/
    // SubProg Scanner pc: 339 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 341 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15044 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 347 op: EQUALS (3)
    if (IS_ATOM_INT(_15044)) {
        _is_namespace_26991 = (_15044 == 523);
    }
    else {
        _is_namespace_26991 = binary_op(EQUALS, _15044, 523);
    }
    _15044 = NOVALUE;
    // SubProg Scanner pc: 351 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_is_namespace_26991)) {
        _1 = (object)(DBL_PTR(_is_namespace_26991)->dbl);
        DeRefDS(_is_namespace_26991);
        _is_namespace_26991 = _1;
    }
    // SubProg Scanner pc: 353 op: STARTLINE (58)

    /** scanner.e:1530					might_be_namespace = 0*/
    // SubProg Scanner pc: 355 op: ASSIGN_I (113)
    _62might_be_namespace_26723 = 0;
    // SubProg Scanner pc: 358 op: ELSE (23)
    goto L10; // [358] 384
    // SubProg Scanner pc: 360 op: NOP1 (159)
LF: // addr: 361 pc: 360 sub: 26917 op: 159
    // SubProg Scanner pc: 361 op: STARTLINE (58)

    /** scanner.e:1532					is_namespace = ch = ':'*/
    // SubProg Scanner pc: 363 op: EQUALS (3)
    _is_namespace_26991 = (_ch_26919 == 58);
    // SubProg Scanner pc: 367 op: STARTLINE (58)

    /** scanner.e:1533					tok = keyfind(yytext, -1, , is_namespace )*/
    // SubProg Scanner pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 371 op: PROC (27)
    RefDS(_yytext_26925);
    _31712 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 375 op: PROC (27)
    RefDS(_yytext_26925);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, -1, _36current_file_no_16436, _is_namespace_26991, _31712);
    DeRef(_0);
    _31712 = NOVALUE;
    // SubProg Scanner pc: 383 op: NOP1 (159)
L10: // addr: 384 pc: 383 sub: 26917 op: 159
    // SubProg Scanner pc: 384 op: STARTLINE (58)

    /** scanner.e:1537				if not is_namespace then*/
    // SubProg Scanner pc: 386 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 388 op: NOT_IFW (108)
    if (_is_namespace_26991 != 0)
    goto L11; // [388] 396
    // SubProg Scanner pc: 391 op: STARTLINE (58)

    /** scanner.e:1538					ungetch()*/
    // SubProg Scanner pc: 393 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 395 op: NOP1 (159)
L11: // addr: 396 pc: 395 sub: 26917 op: 159
    // SubProg Scanner pc: 396 op: STARTLINE (58)

    /** scanner.e:1541				if is_namespace then*/
    // SubProg Scanner pc: 398 op: IF (20)
    if (_is_namespace_26991 == 0)
    {
        goto L12; // [398] 1119
    }
    else{
    }
    // SubProg Scanner pc: 401 op: STARTLINE (58)

    /** scanner.e:1543					namespaces = yytext*/
    // SubProg Scanner pc: 403 op: ASSIGN (18)
    RefDS(_yytext_26925);
    DeRef(_namespaces_26926);
    _namespaces_26926 = _yytext_26925;
    // SubProg Scanner pc: 406 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 408 op: STARTLINE (58)

    /** scanner.e:1546					if tok[T_ID] = NAMESPACE then -- known namespace*/
    // SubProg Scanner pc: 410 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 412 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 414 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15049 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 418 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 420 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15049, 523)){
        _15049 = NOVALUE;
        goto L13; // [420] 974
    }
    _15049 = NOVALUE;
    // SubProg Scanner pc: 424 op: STARTLINE (58)

    /** scanner.e:1547						set_qualified_fwd( SymTab[tok[T_SYM]][S_OBJ] )*/
    // SubProg Scanner pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15051 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 434 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_15051)){
        _15052 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15051)->dbl));
    }
    else{
        _15052 = (object)*(((s1_ptr)_2)->base + _15051);
    }
    // SubProg Scanner pc: 438 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 440 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15052);
    _15053 = (object)*(((s1_ptr)_2)->base + 1);
    _15052 = NOVALUE;
    // SubProg Scanner pc: 444 op: ASSIGN (18)
    Ref(_15053);
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27018);
    _fwd_inlined_set_qualified_fwd_at_441_27018 = _15053;
    _15053 = NOVALUE;
    // SubProg Scanner pc: 447 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fwd_inlined_set_qualified_fwd_at_441_27018)) {
        _1 = (object)(DBL_PTR(_fwd_inlined_set_qualified_fwd_at_441_27018)->dbl);
        DeRefDS(_fwd_inlined_set_qualified_fwd_at_441_27018);
        _fwd_inlined_set_qualified_fwd_at_441_27018 = _1;
    }
    // SubProg Scanner pc: 449 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 451 op: ASSIGN_I (113)
    _62qualified_fwd_25211 = _fwd_inlined_set_qualified_fwd_at_441_27018;
    // SubProg Scanner pc: 454 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 456 op: ELSE (23)
    goto L14; // [456] 459
    // SubProg Scanner pc: 458 op: NOP1 (159)
L14: // addr: 459 pc: 458 sub: 26917 op: 159
    // SubProg Scanner pc: 459 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-set_qualified_fwd from Scanner @ 441

// block var fwd_inlined_set_qualified_fwd_at_441_27018
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27018);
    _fwd_inlined_set_qualified_fwd_at_441_27018 = NOVALUE;
    // SubProg Scanner pc: 461 op: STARTLINE (58)

    /** scanner.e:1550						ch = getch()*/
    // SubProg Scanner pc: 463 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 466 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 468 op: STARTLINE (58)

    /** scanner.e:1551						while ch = ' ' or ch = '\t' do*/
    // SubProg Scanner pc: 470 op: NOP2 (110)
    // SubProg Scanner pc: 472 op: NOPWHILE (158)
L15: // addr: 473 pc: 472 sub: 26917 op: 158
    // SubProg Scanner pc: 473 op: EQUALS (3)
    _15055 = (_ch_26919 == 32);
    // SubProg Scanner pc: 477 op: SC1_OR_IF (147)
    if (_15055 != 0) {
        goto L16; // [477] 490
    }
    // SubProg Scanner pc: 481 op: EQUALS (3)
    _15057 = (_ch_26919 == 9);
    // SubProg Scanner pc: 485 op: NOP1 (159)
    // SubProg Scanner pc: 486 op: WHILE (47)
    if (_15057 == 0)
    {
        DeRef(_15057);
        _15057 = NOVALUE;
        goto L17; // [486] 502
    }
    else{
        DeRef(_15057);
        _15057 = NOVALUE;
    }
    // SubProg Scanner pc: 489 op: NOP1 (159)
L16: // addr: 490 pc: 489 sub: 26917 op: 159
    // SubProg Scanner pc: 490 op: STARTLINE (58)

    /** scanner.e:1552							ch = getch()*/
    // SubProg Scanner pc: 492 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 495 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 497 op: STARTLINE (58)

    /** scanner.e:1553						end while*/
    // SubProg Scanner pc: 499 op: ENDWHILE (22)
    goto L15; // [499] 473
    // SubProg Scanner pc: 501 op: NOP1 (159)
L17: // addr: 502 pc: 501 sub: 26917 op: 159
    // SubProg Scanner pc: 502 op: STARTLINE (58)

    /** scanner.e:1554						yytext = ""*/
    // SubProg Scanner pc: 504 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26925);
    _yytext_26925 = _5;
    // SubProg Scanner pc: 507 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 509 op: STARTLINE (58)

    /** scanner.e:1555						if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg Scanner pc: 511 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 513 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15059 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 517 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 519 op: EQUALS (3)
    _15060 = (_15059 == -2);
    _15059 = NOVALUE;
    // SubProg Scanner pc: 523 op: SC1_OR_IF (147)
    if (_15060 != 0) {
        goto L18; // [523] 536
    }
    // SubProg Scanner pc: 527 op: EQUALS (3)
    _15062 = (_ch_26919 == 95);
    // SubProg Scanner pc: 531 op: NOP1 (159)
    // SubProg Scanner pc: 532 op: IF (20)
    if (_15062 == 0)
    {
        DeRef(_15062);
        _15062 = NOVALUE;
        goto L19; // [532] 589
    }
    else{
        DeRef(_15062);
        _15062 = NOVALUE;
    }
    // SubProg Scanner pc: 535 op: NOP1 (159)
L18: // addr: 536 pc: 535 sub: 26917 op: 159
    // SubProg Scanner pc: 536 op: STARTLINE (58)

    /** scanner.e:1556							yytext &= ch*/
    // SubProg Scanner pc: 538 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 542 op: STARTLINE (58)

    /** scanner.e:1557							ch = getch()*/
    // SubProg Scanner pc: 544 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 547 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 549 op: STARTLINE (58)

    /** scanner.e:1558							while id_char[ch] = TRUE do*/
    // SubProg Scanner pc: 551 op: NOP2 (110)
    // SubProg Scanner pc: 553 op: NOPWHILE (158)
L1A: // addr: 554 pc: 553 sub: 26917 op: 158
    // SubProg Scanner pc: 554 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 556 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62id_char_25187);
    _15065 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 562 op: EQUALS_IFW (104)
    if (_15065 != _13TRUE_452)
    goto L1B; // [562] 584
    // SubProg Scanner pc: 566 op: STARTLINE (58)

    /** scanner.e:1559								yytext &= ch*/
    // SubProg Scanner pc: 568 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 572 op: STARTLINE (58)

    /** scanner.e:1560								ch = getch()*/
    // SubProg Scanner pc: 574 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 577 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 579 op: STARTLINE (58)

    /** scanner.e:1561							end while*/
    // SubProg Scanner pc: 581 op: ENDWHILE (22)
    goto L1A; // [581] 554
    // SubProg Scanner pc: 583 op: NOP1 (159)
L1B: // addr: 584 pc: 583 sub: 26917 op: 159
    // SubProg Scanner pc: 584 op: STARTLINE (58)

    /** scanner.e:1562							ungetch()*/
    // SubProg Scanner pc: 586 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 588 op: NOP1 (159)
L19: // addr: 589 pc: 588 sub: 26917 op: 159
    // SubProg Scanner pc: 589 op: STARTLINE (58)

    /** scanner.e:1565						if length(yytext) = 0 then*/
    // SubProg Scanner pc: 591 op: LENGTH (42)
    if (IS_SEQUENCE(_yytext_26925)){
            _15069 = SEQ_PTR(_yytext_26925)->length;
    }
    else {
        _15069 = 1;
    }
    // SubProg Scanner pc: 594 op: EQUALS_IFW_I (121)
    if (_15069 != 0)
    goto L1C; // [594] 606
    // SubProg Scanner pc: 598 op: STARTLINE (58)

    /** scanner.e:1566							CompileErr(32)*/
    // SubProg Scanner pc: 600 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(32, _21933, 0);
    // SubProg Scanner pc: 605 op: NOP1 (159)
L1C: // addr: 606 pc: 605 sub: 26917 op: 159
    // SubProg Scanner pc: 606 op: STARTLINE (58)

    /** scanner.e:1572					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 608 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 610 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 612 op: EQUALS_IFW (104)
    if (_36Parser_mode_16541 != 1)
    goto L1D; // [612] 773
    // SubProg Scanner pc: 616 op: STARTLINE (58)

    /** scanner.e:1573			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 618 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 620 op: APPEND (35)
    RefDS(_yytext_26925);
    Append(&_36Recorded_16542, _36Recorded_16542, _yytext_26925);
    // SubProg Scanner pc: 624 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 626 op: STARTLINE (58)

    /** scanner.e:1574			                Ns_recorded = append(Ns_recorded,namespaces)*/
    // SubProg Scanner pc: 628 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 630 op: APPEND (35)
    RefDS(_namespaces_26926);
    Append(&_36Ns_recorded_16543, _36Ns_recorded_16543, _namespaces_26926);
    // SubProg Scanner pc: 634 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 636 op: STARTLINE (58)

    /** scanner.e:1575			                Ns_recorded_sym &= tok[T_SYM]*/
    // SubProg Scanner pc: 638 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 640 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 642 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15074 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 646 op: CONCAT (15)
    if (IS_SEQUENCE(_36Ns_recorded_sym_16545) && IS_ATOM(_15074)) {
        Ref(_15074);
        Append(&_36Ns_recorded_sym_16545, _36Ns_recorded_sym_16545, _15074);
    }
    else if (IS_ATOM(_36Ns_recorded_sym_16545) && IS_SEQUENCE(_15074)) {
    }
    else {
        Concat((object_ptr)&_36Ns_recorded_sym_16545, _36Ns_recorded_sym_16545, _15074);
    }
    _15074 = NOVALUE;
    // SubProg Scanner pc: 650 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 652 op: STARTLINE (58)

    /** scanner.e:1576			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 654 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 656 op: ASSIGN (18)
    _prev_Nne_26922 = _54No_new_entry_47452;
    // SubProg Scanner pc: 659 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 661 op: STARTLINE (58)

    /** scanner.e:1577							No_new_entry = 1*/
    // SubProg Scanner pc: 663 op: ASSIGN (18)
    _54No_new_entry_47452 = 1;
    // SubProg Scanner pc: 666 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 668 op: STARTLINE (58)

    /** scanner.e:1578							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 670 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 674 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15076 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_15076)){
        _15077 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15076)->dbl));
    }
    else{
        _15077 = (object)*(((s1_ptr)_2)->base + _15076);
    }
    // SubProg Scanner pc: 682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15077);
    _15078 = (object)*(((s1_ptr)_2)->base + 1);
    _15077 = NOVALUE;
    // SubProg Scanner pc: 688 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 690 op: PROC (27)
    RefDS(_yytext_26925);
    _31711 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 694 op: PROC (27)
    RefDS(_yytext_26925);
    Ref(_15078);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, _15078, _36current_file_no_16436, 0, _31711);
    DeRef(_0);
    _15078 = NOVALUE;
    _31711 = NOVALUE;
    // SubProg Scanner pc: 702 op: STARTLINE (58)

    /** scanner.e:1579							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 704 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 706 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15080 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 710 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 712 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15080, 509)){
        _15080 = NOVALUE;
        goto L1E; // [712] 729
    }
    _15080 = NOVALUE;
    // SubProg Scanner pc: 716 op: STARTLINE (58)

    /** scanner.e:1580								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 720 op: CONCAT (15)
    Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, 0);
    // SubProg Scanner pc: 724 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 726 op: ELSE (23)
    goto L1F; // [726] 746
    // SubProg Scanner pc: 728 op: NOP1 (159)
L1E: // addr: 729 pc: 728 sub: 26917 op: 159
    // SubProg Scanner pc: 729 op: STARTLINE (58)

    /** scanner.e:1582								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 731 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 735 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15083 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 739 op: CONCAT (15)
    if (IS_SEQUENCE(_36Recorded_sym_16544) && IS_ATOM(_15083)) {
        Ref(_15083);
        Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, _15083);
    }
    else if (IS_ATOM(_36Recorded_sym_16544) && IS_SEQUENCE(_15083)) {
    }
    else {
        Concat((object_ptr)&_36Recorded_sym_16544, _36Recorded_sym_16544, _15083);
    }
    _15083 = NOVALUE;
    // SubProg Scanner pc: 743 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 745 op: NOP1 (159)
L1F: // addr: 746 pc: 745 sub: 26917 op: 159
    // SubProg Scanner pc: 746 op: STARTLINE (58)

    /** scanner.e:1584			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 748 op: ASSIGN (18)
    _54No_new_entry_47452 = _prev_Nne_26922;
    // SubProg Scanner pc: 751 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 753 op: STARTLINE (58)

    /** scanner.e:1585			                return {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 755 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 759 op: LENGTH (42)
    if (IS_SEQUENCE(_36Recorded_16542)){
            _15085 = SEQ_PTR(_36Recorded_16542)->length;
    }
    else {
        _15085 = 1;
    }
    // SubProg Scanner pc: 762 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15085;
    _15086 = MAKE_SEQ(_1);
    _15085 = NOVALUE;
    // SubProg Scanner pc: 766 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_26991

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15086;
    // SubProg Scanner pc: 770 op: ELSE (23)
    goto L20; // [770] 915
    // SubProg Scanner pc: 772 op: NOP1 (159)
L1D: // addr: 773 pc: 772 sub: 26917 op: 159
    // SubProg Scanner pc: 773 op: STARTLINE (58)

    /** scanner.e:1587							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    // SubProg Scanner pc: 775 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 777 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 779 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15087 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 783 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_15087)){
        _15088 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15087)->dbl));
    }
    else{
        _15088 = (object)*(((s1_ptr)_2)->base + _15087);
    }
    // SubProg Scanner pc: 787 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 789 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15088);
    _15089 = (object)*(((s1_ptr)_2)->base + 1);
    _15088 = NOVALUE;
    // SubProg Scanner pc: 793 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 795 op: PROC (27)
    RefDS(_yytext_26925);
    _31710 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 799 op: PROC (27)
    RefDS(_yytext_26925);
    Ref(_15089);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, _15089, _36current_file_no_16436, 0, _31710);
    DeRef(_0);
    _15089 = NOVALUE;
    _31710 = NOVALUE;
    // SubProg Scanner pc: 807 op: STARTLINE (58)

    /** scanner.e:1589							if tok[T_ID] = VARIABLE then*/
    // SubProg Scanner pc: 809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 811 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15091 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 817 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15091, -100)){
        _15091 = NOVALUE;
        goto L21; // [817] 834
    }
    _15091 = NOVALUE;
    // SubProg Scanner pc: 821 op: STARTLINE (58)

    /** scanner.e:1590								tok[T_ID] = QUALIFIED_VARIABLE*/
    // SubProg Scanner pc: 823 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 825 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 827 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26929);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26929 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 512;
    DeRef(_1);
    // SubProg Scanner pc: 831 op: ELSE (23)
    goto L22; // [831] 914
    // SubProg Scanner pc: 833 op: NOP1 (159)
L21: // addr: 834 pc: 833 sub: 26917 op: 159
    // SubProg Scanner pc: 834 op: STARTLINE (58)

    /** scanner.e:1591							elsif tok[T_ID] = FUNC then*/
    // SubProg Scanner pc: 836 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 838 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15093 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 842 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 844 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15093, 501)){
        _15093 = NOVALUE;
        goto L23; // [844] 861
    }
    _15093 = NOVALUE;
    // SubProg Scanner pc: 848 op: STARTLINE (58)

    /** scanner.e:1592								tok[T_ID] = QUALIFIED_FUNC*/
    // SubProg Scanner pc: 850 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 852 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 854 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26929);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26929 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 520;
    DeRef(_1);
    // SubProg Scanner pc: 858 op: ELSE (23)
    goto L22; // [858] 914
    // SubProg Scanner pc: 860 op: NOP1 (159)
L23: // addr: 861 pc: 860 sub: 26917 op: 159
    // SubProg Scanner pc: 861 op: STARTLINE (58)

    /** scanner.e:1593							elsif tok[T_ID] = PROC then*/
    // SubProg Scanner pc: 863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 865 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15095 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 869 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 871 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15095, 27)){
        _15095 = NOVALUE;
        goto L24; // [871] 888
    }
    _15095 = NOVALUE;
    // SubProg Scanner pc: 875 op: STARTLINE (58)

    /** scanner.e:1594								tok[T_ID] = QUALIFIED_PROC*/
    // SubProg Scanner pc: 877 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 879 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 881 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26929);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26929 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 521;
    DeRef(_1);
    // SubProg Scanner pc: 885 op: ELSE (23)
    goto L22; // [885] 914
    // SubProg Scanner pc: 887 op: NOP1 (159)
L24: // addr: 888 pc: 887 sub: 26917 op: 159
    // SubProg Scanner pc: 888 op: STARTLINE (58)

    /** scanner.e:1595							elsif tok[T_ID] = TYPE then*/
    // SubProg Scanner pc: 890 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 892 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15097 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 896 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 898 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15097, 504)){
        _15097 = NOVALUE;
        goto L25; // [898] 913
    }
    _15097 = NOVALUE;
    // SubProg Scanner pc: 902 op: STARTLINE (58)

    /** scanner.e:1596								tok[T_ID] = QUALIFIED_TYPE*/
    // SubProg Scanner pc: 904 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 906 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 908 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_tok_26929);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26929 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 522;
    DeRef(_1);
    // SubProg Scanner pc: 912 op: NOP1 (159)
L25: // addr: 913 pc: 912 sub: 26917 op: 159
    // SubProg Scanner pc: 913 op: NOP1 (159)
L22: // addr: 914 pc: 913 sub: 26917 op: 159
    // SubProg Scanner pc: 914 op: NOP1 (159)
L20: // addr: 915 pc: 914 sub: 26917 op: 159
    // SubProg Scanner pc: 915 op: STARTLINE (58)

    /** scanner.e:1601						if atom( tok[T_SYM] ) and  SymTab[tok[T_SYM]][S_SCOPE] != SC_UNDEFINED then*/
    // SubProg Scanner pc: 917 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 919 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15099 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 923 op: IS_AN_ATOM (67)
    _15100 = IS_ATOM(_15099);
    _15099 = NOVALUE;
    // SubProg Scanner pc: 926 op: SC1_AND_IF (146)
    if (_15100 == 0) {
        goto L26; // [926] 1269
    }
    // SubProg Scanner pc: 930 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 932 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 934 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15102 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 938 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_15102)){
        _15103 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15102)->dbl));
    }
    else{
        _15103 = (object)*(((s1_ptr)_2)->base + _15102);
    }
    // SubProg Scanner pc: 942 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 944 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15103);
    _15104 = (object)*(((s1_ptr)_2)->base + 4);
    _15103 = NOVALUE;
    // SubProg Scanner pc: 948 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 950 op: NOTEQ (4)
    if (IS_ATOM_INT(_15104)) {
        _15105 = (_15104 != 9);
    }
    else {
        _15105 = binary_op(NOTEQ, _15104, 9);
    }
    _15104 = NOVALUE;
    // SubProg Scanner pc: 954 op: NOP1 (159)
    // SubProg Scanner pc: 955 op: IF (20)
    if (_15105 == 0) {
        DeRef(_15105);
        _15105 = NOVALUE;
        goto L26; // [955] 1269
    }
    else {
        if (!IS_ATOM_INT(_15105) && DBL_PTR(_15105)->dbl == 0.0){
            DeRef(_15105);
            _15105 = NOVALUE;
            goto L26; // [955] 1269
        }
        DeRef(_15105);
        _15105 = NOVALUE;
    }
    DeRef(_15105);
    _15105 = NOVALUE;
    // SubProg Scanner pc: 958 op: STARTLINE (58)

    /** scanner.e:1602							set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 960 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 962 op: ASSIGN_I (113)
    _62qualified_fwd_25211 = -1;
    // SubProg Scanner pc: 965 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 967 op: ELSE (23)
    goto L26; // [967] 1269
    // SubProg Scanner pc: 969 op: NOP1 (159)
    // SubProg Scanner pc: 970 op: NOP1 (159)
    // SubProg Scanner pc: 971 op: ELSE (23)
    goto L26; // [971] 1269
    // SubProg Scanner pc: 973 op: NOP1 (159)
L13: // addr: 974 pc: 973 sub: 26917 op: 159
    // SubProg Scanner pc: 974 op: STARTLINE (58)

    /** scanner.e:1606						ungetch()*/
    // SubProg Scanner pc: 976 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 978 op: STARTLINE (58)

    /** scanner.e:1607					    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 980 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 982 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 984 op: EQUALS_IFW (104)
    if (_36Parser_mode_16541 != 1)
    goto L26; // [984] 1269
    // SubProg Scanner pc: 988 op: STARTLINE (58)

    /** scanner.e:1608			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 990 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 992 op: CONCAT (15)
    Append(&_36Ns_recorded_16543, _36Ns_recorded_16543, 0);
    // SubProg Scanner pc: 996 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 998 op: STARTLINE (58)

    /** scanner.e:1609			                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1000 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1002 op: CONCAT (15)
    Append(&_36Ns_recorded_sym_16545, _36Ns_recorded_sym_16545, 0);
    // SubProg Scanner pc: 1006 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1008 op: STARTLINE (58)

    /** scanner.e:1610			                Recorded = append(Recorded,yytext)*/
    // SubProg Scanner pc: 1010 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1012 op: APPEND (35)
    RefDS(_yytext_26925);
    Append(&_36Recorded_16542, _36Recorded_16542, _yytext_26925);
    // SubProg Scanner pc: 1016 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1018 op: STARTLINE (58)

    /** scanner.e:1611			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1022 op: ASSIGN (18)
    _prev_Nne_26922 = _54No_new_entry_47452;
    // SubProg Scanner pc: 1025 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1027 op: STARTLINE (58)

    /** scanner.e:1612							No_new_entry = 1*/
    // SubProg Scanner pc: 1029 op: ASSIGN (18)
    _54No_new_entry_47452 = 1;
    // SubProg Scanner pc: 1032 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1034 op: STARTLINE (58)

    /** scanner.e:1613							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1038 op: PROC (27)
    RefDS(_yytext_26925);
    _31709 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 1042 op: PROC (27)
    RefDS(_yytext_26925);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, -1, _36current_file_no_16436, 0, _31709);
    DeRef(_0);
    _31709 = NOVALUE;
    // SubProg Scanner pc: 1050 op: STARTLINE (58)

    /** scanner.e:1614							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1052 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1054 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15111 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1058 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1060 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15111, 509)){
        _15111 = NOVALUE;
        goto L27; // [1060] 1077
    }
    _15111 = NOVALUE;
    // SubProg Scanner pc: 1064 op: STARTLINE (58)

    /** scanner.e:1615								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1066 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1068 op: CONCAT (15)
    Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, 0);
    // SubProg Scanner pc: 1072 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1074 op: ELSE (23)
    goto L28; // [1074] 1094
    // SubProg Scanner pc: 1076 op: NOP1 (159)
L27: // addr: 1077 pc: 1076 sub: 26917 op: 159
    // SubProg Scanner pc: 1077 op: STARTLINE (58)

    /** scanner.e:1617								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1079 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1081 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1083 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15114 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1087 op: CONCAT (15)
    if (IS_SEQUENCE(_36Recorded_sym_16544) && IS_ATOM(_15114)) {
        Ref(_15114);
        Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, _15114);
    }
    else if (IS_ATOM(_36Recorded_sym_16544) && IS_SEQUENCE(_15114)) {
    }
    else {
        Concat((object_ptr)&_36Recorded_sym_16544, _36Recorded_sym_16544, _15114);
    }
    _15114 = NOVALUE;
    // SubProg Scanner pc: 1091 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1093 op: NOP1 (159)
L28: // addr: 1094 pc: 1093 sub: 26917 op: 159
    // SubProg Scanner pc: 1094 op: STARTLINE (58)

    /** scanner.e:1619			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1096 op: ASSIGN (18)
    _54No_new_entry_47452 = _prev_Nne_26922;
    // SubProg Scanner pc: 1099 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1101 op: STARTLINE (58)

    /** scanner.e:1620			                tok = {RECORDED,length(Recorded)}*/
    // SubProg Scanner pc: 1103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1105 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1107 op: LENGTH (42)
    if (IS_SEQUENCE(_36Recorded_16542)){
            _15116 = SEQ_PTR(_36Recorded_16542)->length;
    }
    else {
        _15116 = 1;
    }
    // SubProg Scanner pc: 1110 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15116;
    _tok_26929 = MAKE_SEQ(_1);
    _15116 = NOVALUE;
    // SubProg Scanner pc: 1114 op: NOP1 (159)
    // SubProg Scanner pc: 1115 op: NOP1 (159)
    // SubProg Scanner pc: 1116 op: ELSE (23)
    goto L26; // [1116] 1269
    // SubProg Scanner pc: 1118 op: NOP1 (159)
L12: // addr: 1119 pc: 1118 sub: 26917 op: 159
    // SubProg Scanner pc: 1119 op: STARTLINE (58)

    /** scanner.e:1624					set_qualified_fwd( -1 )*/
    // SubProg Scanner pc: 1121 op: STARTLINE (58)

    /** scanner.e:104		qualified_fwd = fwd*/
    // SubProg Scanner pc: 1123 op: ASSIGN_I (113)
    _62qualified_fwd_25211 = -1;
    // SubProg Scanner pc: 1126 op: STARTLINE (58)

    /** scanner.e:105	end procedure*/
    // SubProg Scanner pc: 1128 op: ELSE (23)
    goto L29; // [1128] 1131
    // SubProg Scanner pc: 1130 op: NOP1 (159)
L29: // addr: 1131 pc: 1130 sub: 26917 op: 159
    // SubProg Scanner pc: 1131 op: STARTLINE (58)

    /** scanner.e:1625				    if Parser_mode = PAM_RECORD then*/
    // SubProg Scanner pc: 1133 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1135 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1137 op: EQUALS_IFW (104)
    if (_36Parser_mode_16541 != 1)
    goto L2A; // [1137] 1268
    // SubProg Scanner pc: 1141 op: STARTLINE (58)

    /** scanner.e:1626		                Ns_recorded_sym &= 0*/
    // SubProg Scanner pc: 1143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1145 op: CONCAT (15)
    Append(&_36Ns_recorded_sym_16545, _36Ns_recorded_sym_16545, 0);
    // SubProg Scanner pc: 1149 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1151 op: STARTLINE (58)

    /** scanner.e:1627							Recorded = append(Recorded, yytext)*/
    // SubProg Scanner pc: 1153 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1155 op: APPEND (35)
    RefDS(_yytext_26925);
    Append(&_36Recorded_16542, _36Recorded_16542, _yytext_26925);
    // SubProg Scanner pc: 1159 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1161 op: STARTLINE (58)

    /** scanner.e:1628			                Ns_recorded &= 0*/
    // SubProg Scanner pc: 1163 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1165 op: CONCAT (15)
    Append(&_36Ns_recorded_16543, _36Ns_recorded_16543, 0);
    // SubProg Scanner pc: 1169 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1171 op: STARTLINE (58)

    /** scanner.e:1629			                prev_Nne = No_new_entry*/
    // SubProg Scanner pc: 1173 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1175 op: ASSIGN (18)
    _prev_Nne_26922 = _54No_new_entry_47452;
    // SubProg Scanner pc: 1178 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1180 op: STARTLINE (58)

    /** scanner.e:1630							No_new_entry = 1*/
    // SubProg Scanner pc: 1182 op: ASSIGN (18)
    _54No_new_entry_47452 = 1;
    // SubProg Scanner pc: 1185 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1187 op: STARTLINE (58)

    /** scanner.e:1631							tok = keyfind(yytext, -1)*/
    // SubProg Scanner pc: 1189 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1191 op: PROC (27)
    RefDS(_yytext_26925);
    _31708 = _54hashfn(_yytext_26925);
    // SubProg Scanner pc: 1195 op: PROC (27)
    RefDS(_yytext_26925);
    _0 = _tok_26929;
    _tok_26929 = _54keyfind(_yytext_26925, -1, _36current_file_no_16436, 0, _31708);
    DeRef(_0);
    _31708 = NOVALUE;
    // SubProg Scanner pc: 1203 op: STARTLINE (58)

    /** scanner.e:1632							if tok[T_ID] = IGNORED then*/
    // SubProg Scanner pc: 1205 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1207 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15123 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1211 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1213 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15123, 509)){
        _15123 = NOVALUE;
        goto L2B; // [1213] 1230
    }
    _15123 = NOVALUE;
    // SubProg Scanner pc: 1217 op: STARTLINE (58)

    /** scanner.e:1633								Recorded_sym &= 0 -- must resolve on call site*/
    // SubProg Scanner pc: 1219 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1221 op: CONCAT (15)
    Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, 0);
    // SubProg Scanner pc: 1225 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1227 op: ELSE (23)
    goto L2C; // [1227] 1247
    // SubProg Scanner pc: 1229 op: NOP1 (159)
L2B: // addr: 1230 pc: 1229 sub: 26917 op: 159
    // SubProg Scanner pc: 1230 op: STARTLINE (58)

    /** scanner.e:1635								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    // SubProg Scanner pc: 1232 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1234 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1236 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_26929);
    _15126 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg Scanner pc: 1240 op: CONCAT (15)
    if (IS_SEQUENCE(_36Recorded_sym_16544) && IS_ATOM(_15126)) {
        Ref(_15126);
        Append(&_36Recorded_sym_16544, _36Recorded_sym_16544, _15126);
    }
    else if (IS_ATOM(_36Recorded_sym_16544) && IS_SEQUENCE(_15126)) {
    }
    else {
        Concat((object_ptr)&_36Recorded_sym_16544, _36Recorded_sym_16544, _15126);
    }
    _15126 = NOVALUE;
    // SubProg Scanner pc: 1244 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 1246 op: NOP1 (159)
L2C: // addr: 1247 pc: 1246 sub: 26917 op: 159
    // SubProg Scanner pc: 1247 op: STARTLINE (58)

    /** scanner.e:1637			                No_new_entry = prev_Nne*/
    // SubProg Scanner pc: 1249 op: ASSIGN (18)
    _54No_new_entry_47452 = _prev_Nne_26922;
    // SubProg Scanner pc: 1252 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1254 op: STARTLINE (58)

    /** scanner.e:1638		                tok = {RECORDED, length(Recorded)}*/
    // SubProg Scanner pc: 1256 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1258 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1260 op: LENGTH (42)
    if (IS_SEQUENCE(_36Recorded_16542)){
            _15128 = SEQ_PTR(_36Recorded_16542)->length;
    }
    else {
        _15128 = 1;
    }
    // SubProg Scanner pc: 1263 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15128;
    _tok_26929 = MAKE_SEQ(_1);
    _15128 = NOVALUE;
    // SubProg Scanner pc: 1267 op: NOP1 (159)
L2A: // addr: 1268 pc: 1267 sub: 26917 op: 159
    // SubProg Scanner pc: 1268 op: NOP1 (159)
L26: // addr: 1269 pc: 1268 sub: 26917 op: 159
    // SubProg Scanner pc: 1269 op: STARTLINE (58)

    /** scanner.e:1642				return tok*/
    // SubProg Scanner pc: 1271 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1273 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var is_namespace_26991

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _tok_26929;
    // SubProg Scanner pc: 1277 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var is_namespace_26991
    // SubProg Scanner pc: 1279 op: ELSE (23)
    goto L1; // [1279] 10
    // SubProg Scanner pc: 1281 op: NOP1 (159)
L7: // addr: 1282 pc: 1281 sub: 26917 op: 159
    // SubProg Scanner pc: 1282 op: STARTLINE (58)

    /** scanner.e:1644			elsif class < ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1284 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1286 op: LESS_IFW (102)
    if (_class_26931 >= -20)
    goto L2D; // [1286] 1303
    // SubProg Scanner pc: 1290 op: STARTLINE (58)

    /** scanner.e:1645				return {class, 0}  -- brackets, punctuation, eof, illegal char etc.*/
    // SubProg Scanner pc: 1292 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26931;
    ((intptr_t *)_2)[2] = 0;
    _15131 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1296 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15131;
    // SubProg Scanner pc: 1300 op: ELSE (23)
    goto L1; // [1300] 10
    // SubProg Scanner pc: 1302 op: NOP1 (159)
L2D: // addr: 1303 pc: 1302 sub: 26917 op: 159
    // SubProg Scanner pc: 1303 op: STARTLINE (58)

    /** scanner.e:1647			elsif class = ILLEGAL_CHAR then*/
    // SubProg Scanner pc: 1305 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1307 op: EQUALS_IFW (104)
    if (_class_26931 != -20)
    goto L2E; // [1307] 1321
    // SubProg Scanner pc: 1311 op: STARTLINE (58)

    /** scanner.e:1648				CompileErr(101)*/
    // SubProg Scanner pc: 1313 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(101, _21933, 0);
    // SubProg Scanner pc: 1318 op: ELSE (23)
    goto L1; // [1318] 10
    // SubProg Scanner pc: 1320 op: NOP1 (159)
L2E: // addr: 1321 pc: 1320 sub: 26917 op: 159
    // SubProg Scanner pc: 1321 op: STARTLINE (58)

    /** scanner.e:1650			elsif class = NEWLINE then*/
    // SubProg Scanner pc: 1323 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1325 op: EQUALS_IFW (104)
    if (_class_26931 != -6)
    goto L2F; // [1325] 1351
    // SubProg Scanner pc: 1329 op: STARTLINE (58)

    /** scanner.e:1651				if start_include then*/
    // SubProg Scanner pc: 1331 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1333 op: IF (20)
    if (_62start_include_25179 == 0)
    {
        goto L30; // [1333] 1343
    }
    else{
    }
    // SubProg Scanner pc: 1336 op: STARTLINE (58)

    /** scanner.e:1652					IncludePush()*/
    // SubProg Scanner pc: 1338 op: PROC (27)
    _62IncludePush();
    // SubProg Scanner pc: 1340 op: ELSE (23)
    goto L1; // [1340] 10
    // SubProg Scanner pc: 1342 op: NOP1 (159)
L30: // addr: 1343 pc: 1342 sub: 26917 op: 159
    // SubProg Scanner pc: 1343 op: STARTLINE (58)

    /** scanner.e:1654					read_line()*/
    // SubProg Scanner pc: 1345 op: PROC (27)
    _62read_line();
    // SubProg Scanner pc: 1347 op: NOP1 (159)
    // SubProg Scanner pc: 1348 op: ELSE (23)
    goto L1; // [1348] 10
    // SubProg Scanner pc: 1350 op: NOP1 (159)
L2F: // addr: 1351 pc: 1350 sub: 26917 op: 159
    // SubProg Scanner pc: 1351 op: STARTLINE (58)

    /** scanner.e:1658			elsif class = EQUALS then*/
    // SubProg Scanner pc: 1353 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1355 op: EQUALS_IFW (104)
    if (_class_26931 != 3)
    goto L31; // [1355] 1372
    // SubProg Scanner pc: 1359 op: STARTLINE (58)

    /** scanner.e:1659				return {class, 0}*/
    // SubProg Scanner pc: 1361 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26931;
    ((intptr_t *)_2)[2] = 0;
    _15135 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1365 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15135;
    // SubProg Scanner pc: 1369 op: ELSE (23)
    goto L1; // [1369] 10
    // SubProg Scanner pc: 1371 op: NOP1 (159)
L31: // addr: 1372 pc: 1371 sub: 26917 op: 159
    // SubProg Scanner pc: 1372 op: STARTLINE (58)

    /** scanner.e:1661			elsif class = DOT or class = DIGIT then*/
    // SubProg Scanner pc: 1374 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1376 op: EQUALS (3)
    _15136 = (_class_26931 == -3);
    // SubProg Scanner pc: 1380 op: SC1_OR_IF (147)
    if (_15136 != 0) {
        goto L32; // [1380] 1395
    }
    // SubProg Scanner pc: 1384 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1386 op: EQUALS (3)
    _15138 = (_class_26931 == -7);
    // SubProg Scanner pc: 1390 op: NOP1 (159)
    // SubProg Scanner pc: 1391 op: IF (20)
    if (_15138 == 0)
    {
        DeRef(_15138);
        _15138 = NOVALUE;
        goto L33; // [1391] 2177
    }
    else{
        DeRef(_15138);
        _15138 = NOVALUE;
    }
    // SubProg Scanner pc: 1394 op: NOP1 (159)
L32: // addr: 1395 pc: 1394 sub: 26917 op: 159
    // SubProg Scanner pc: 1395 op: STARTLINE (58)

    /** scanner.e:1662				integer basetype*/
    // SubProg Scanner pc: 1397 op: STARTLINE (58)

    /** scanner.e:1663				if class = DOT then*/
    // SubProg Scanner pc: 1399 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1401 op: EQUALS_IFW (104)
    if (_class_26931 != -3)
    goto L34; // [1401] 1435
    // SubProg Scanner pc: 1405 op: STARTLINE (58)

    /** scanner.e:1664					if getch() = '.' then*/
    // SubProg Scanner pc: 1407 op: PROC (27)
    _15140 = _62getch();
    // SubProg Scanner pc: 1410 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15140, 46)){
        DeRef(_15140);
        _15140 = NOVALUE;
        goto L35; // [1410] 1429
    }
    DeRef(_15140);
    _15140 = NOVALUE;
    // SubProg Scanner pc: 1414 op: STARTLINE (58)

    /** scanner.e:1665						return {SLICE, 0}*/
    // SubProg Scanner pc: 1416 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1418 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 513;
    ((intptr_t *)_2)[2] = 0;
    _15142 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1422 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27225

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15142;
    // SubProg Scanner pc: 1426 op: ELSE (23)
    goto L36; // [1426] 1434
    // SubProg Scanner pc: 1428 op: NOP1 (159)
L35: // addr: 1429 pc: 1428 sub: 26917 op: 159
    // SubProg Scanner pc: 1429 op: STARTLINE (58)

    /** scanner.e:1667						ungetch()*/
    // SubProg Scanner pc: 1431 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 1433 op: NOP1 (159)
L36: // addr: 1434 pc: 1433 sub: 26917 op: 159
    // SubProg Scanner pc: 1434 op: NOP1 (159)
L34: // addr: 1435 pc: 1434 sub: 26917 op: 159
    // SubProg Scanner pc: 1435 op: STARTLINE (58)

    /** scanner.e:1671				yytext = {ch}*/
    // SubProg Scanner pc: 1437 op: RIGHT_BRACE_N (31)
    _0 = _yytext_26925;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26919;
    _yytext_26925 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg Scanner pc: 1441 op: STARTLINE (58)

    /** scanner.e:1672				is_int = (ch != '.')*/
    // SubProg Scanner pc: 1443 op: NOTEQ (4)
    _is_int_26930 = (_ch_26919 != 46);
    // SubProg Scanner pc: 1447 op: STARTLINE (58)

    /** scanner.e:1673				basetype = -1 -- default is decimal*/
    // SubProg Scanner pc: 1449 op: ASSIGN_I (113)
    _basetype_27225 = -1;
    // SubProg Scanner pc: 1452 op: STARTLINE (58)

    /** scanner.e:1674				while 1 with entry do*/
    // SubProg Scanner pc: 1454 op: ELSE (23)
    goto L37; // [1454] 1645
    // SubProg Scanner pc: 1456 op: NOPWHILE (158)
L38: // addr: 1457 pc: 1456 sub: 26917 op: 158
    // SubProg Scanner pc: 1457 op: STARTLINE (58)

    /** scanner.e:1675					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1459 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1461 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15145 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1465 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1467 op: EQUALS_IFW (104)
    if (_15145 != -7)
    goto L39; // [1467] 1480
    // SubProg Scanner pc: 1471 op: STARTLINE (58)

    /** scanner.e:1676						yytext &= ch*/
    // SubProg Scanner pc: 1473 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1477 op: ELSE (23)
    goto L3A; // [1477] 1642
    // SubProg Scanner pc: 1479 op: NOP1 (159)
L39: // addr: 1480 pc: 1479 sub: 26917 op: 159
    // SubProg Scanner pc: 1480 op: STARTLINE (58)

    /** scanner.e:1678					elsif equal(yytext, "0") then*/
    // SubProg Scanner pc: 1482 op: EQUAL (153)
    if (_yytext_26925 == _14801)
    _15148 = 1;
    else if (IS_ATOM_INT(_yytext_26925) && IS_ATOM_INT(_14801))
    _15148 = 0;
    else
    _15148 = (compare(_yytext_26925, _14801) == 0);
    // SubProg Scanner pc: 1486 op: IF (20)
    if (_15148 == 0)
    {
        _15148 = NOVALUE;
        goto L3B; // [1486] 1581
    }
    else{
        _15148 = NOVALUE;
    }
    // SubProg Scanner pc: 1489 op: STARTLINE (58)

    /** scanner.e:1679						basetype = find(ch, nbasecode)*/
    // SubProg Scanner pc: 1491 op: FIND_FROM (176)
    _basetype_27225 = find_from(_ch_26919, _62nbasecode_26727, 1);
    // SubProg Scanner pc: 1496 op: STARTLINE (58)

    /** scanner.e:1680						if basetype > length(nbase) then*/
    // SubProg Scanner pc: 1498 op: LENGTH (42)
    if (IS_SEQUENCE(_62nbase_26726)){
            _15150 = SEQ_PTR(_62nbase_26726)->length;
    }
    else {
        _15150 = 1;
    }
    // SubProg Scanner pc: 1501 op: GREATER_IFW_I (124)
    if (_basetype_27225 <= _15150)
    goto L3C; // [1501] 1515
    // SubProg Scanner pc: 1505 op: STARTLINE (58)

    /** scanner.e:1681							basetype -= length(nbase)*/
    // SubProg Scanner pc: 1507 op: LENGTH (42)
    if (IS_SEQUENCE(_62nbase_26726)){
            _15152 = SEQ_PTR(_62nbase_26726)->length;
    }
    else {
        _15152 = 1;
    }
    // SubProg Scanner pc: 1510 op: MINUS_I (116)
    _basetype_27225 = _basetype_27225 - _15152;
    _15152 = NOVALUE;
    // SubProg Scanner pc: 1514 op: NOP1 (159)
L3C: // addr: 1515 pc: 1514 sub: 26917 op: 159
    // SubProg Scanner pc: 1515 op: STARTLINE (58)

    /** scanner.e:1684						if basetype = 0 then*/
    // SubProg Scanner pc: 1517 op: EQUALS_IFW_I (121)
    if (_basetype_27225 != 0)
    goto L3D; // [1517] 1572
    // SubProg Scanner pc: 1521 op: STARTLINE (58)

    /** scanner.e:1685							if char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1523 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1525 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15155 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1529 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1531 op: EQUALS_IFW (104)
    if (_15155 != -2)
    goto L3E; // [1531] 1562
    // SubProg Scanner pc: 1535 op: STARTLINE (58)

    /** scanner.e:1686								if ch != 'e' and ch != 'E' then*/
    // SubProg Scanner pc: 1537 op: NOTEQ (4)
    _15157 = (_ch_26919 != 101);
    // SubProg Scanner pc: 1541 op: SC1_AND_IF (146)
    if (_15157 == 0) {
        goto L3F; // [1541] 1561
    }
    // SubProg Scanner pc: 1545 op: NOTEQ (4)
    _15159 = (_ch_26919 != 69);
    // SubProg Scanner pc: 1549 op: NOP1 (159)
    // SubProg Scanner pc: 1550 op: IF (20)
    if (_15159 == 0)
    {
        DeRef(_15159);
        _15159 = NOVALUE;
        goto L3F; // [1550] 1561
    }
    else{
        DeRef(_15159);
        _15159 = NOVALUE;
    }
    // SubProg Scanner pc: 1553 op: STARTLINE (58)

    /** scanner.e:1687									CompileErr(105, ch)*/
    // SubProg Scanner pc: 1555 op: PROC (27)
    _50CompileErr(105, _ch_26919, 0);
    // SubProg Scanner pc: 1560 op: NOP1 (159)
L3F: // addr: 1561 pc: 1560 sub: 26917 op: 159
    // SubProg Scanner pc: 1561 op: NOP1 (159)
L3E: // addr: 1562 pc: 1561 sub: 26917 op: 159
    // SubProg Scanner pc: 1562 op: STARTLINE (58)

    /** scanner.e:1691							basetype = -1 -- decimal*/
    // SubProg Scanner pc: 1564 op: ASSIGN_I (113)
    _basetype_27225 = -1;
    // SubProg Scanner pc: 1567 op: STARTLINE (58)

    /** scanner.e:1692							exit*/
    // SubProg Scanner pc: 1569 op: EXIT (61)
    goto L40; // [1569] 1657
    // SubProg Scanner pc: 1571 op: NOP1 (159)
L3D: // addr: 1572 pc: 1571 sub: 26917 op: 159
    // SubProg Scanner pc: 1572 op: STARTLINE (58)

    /** scanner.e:1694						yytext &= '0'*/
    // SubProg Scanner pc: 1574 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, 48);
    // SubProg Scanner pc: 1578 op: ELSE (23)
    goto L3A; // [1578] 1642
    // SubProg Scanner pc: 1580 op: NOP1 (159)
L3B: // addr: 1581 pc: 1580 sub: 26917 op: 159
    // SubProg Scanner pc: 1581 op: STARTLINE (58)

    /** scanner.e:1696					elsif basetype = 4 then -- hexadecimal*/
    // SubProg Scanner pc: 1583 op: EQUALS_IFW_I (121)
    if (_basetype_27225 != 4)
    goto L40; // [1583] 1657
    // SubProg Scanner pc: 1587 op: STARTLINE (58)

    /** scanner.e:1697						integer hdigit*/
    // SubProg Scanner pc: 1589 op: STARTLINE (58)

    /** scanner.e:1698						hdigit = find(ch, "ABCDEFabcdef")*/
    // SubProg Scanner pc: 1591 op: FIND_FROM (176)
    _hdigit_27265 = find_from(_ch_26919, _15162, 1);
    // SubProg Scanner pc: 1596 op: STARTLINE (58)

    /** scanner.e:1699						if hdigit = 0 then*/
    // SubProg Scanner pc: 1598 op: EQUALS_IFW_I (121)
    if (_hdigit_27265 != 0)
    goto L41; // [1598] 1609
    // SubProg Scanner pc: 1602 op: STARTLINE (58)

    /** scanner.e:1700							exit*/
    // SubProg Scanner pc: 1604 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27265
    // SubProg Scanner pc: 1606 op: EXIT (61)
    goto L40; // [1606] 1657
    // SubProg Scanner pc: 1608 op: NOP1 (159)
L41: // addr: 1609 pc: 1608 sub: 26917 op: 159
    // SubProg Scanner pc: 1609 op: STARTLINE (58)

    /** scanner.e:1702						if hdigit > 6 then*/
    // SubProg Scanner pc: 1611 op: GREATER_IFW_I (124)
    if (_hdigit_27265 <= 6)
    goto L42; // [1611] 1622
    // SubProg Scanner pc: 1615 op: STARTLINE (58)

    /** scanner.e:1703							hdigit -= 6*/
    // SubProg Scanner pc: 1617 op: MINUS_I (116)
    _hdigit_27265 = _hdigit_27265 - 6;
    // SubProg Scanner pc: 1621 op: NOP1 (159)
L42: // addr: 1622 pc: 1621 sub: 26917 op: 159
    // SubProg Scanner pc: 1622 op: STARTLINE (58)

    /** scanner.e:1705						yytext &= hexasc[hdigit]*/
    // SubProg Scanner pc: 1624 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62hexasc_26729);
    _15167 = (object)*(((s1_ptr)_2)->base + _hdigit_27265);
    // SubProg Scanner pc: 1628 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26925) && IS_ATOM(_15167)) {
        Ref(_15167);
        Append(&_yytext_26925, _yytext_26925, _15167);
    }
    else if (IS_ATOM(_yytext_26925) && IS_SEQUENCE(_15167)) {
    }
    else {
        Concat((object_ptr)&_yytext_26925, _yytext_26925, _15167);
    }
    _15167 = NOVALUE;
    // SubProg Scanner pc: 1632 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var hdigit_27265
    // SubProg Scanner pc: 1634 op: ELSE (23)
    goto L3A; // [1634] 1642
    // SubProg Scanner pc: 1636 op: NOP1 (159)
    // SubProg Scanner pc: 1637 op: STARTLINE (58)

    /** scanner.e:1708						exit*/
    // SubProg Scanner pc: 1639 op: EXIT (61)
    goto L40; // [1639] 1657
    // SubProg Scanner pc: 1641 op: NOP1 (159)
L3A: // addr: 1642 pc: 1641 sub: 26917 op: 159
    // SubProg Scanner pc: 1642 op: STARTLINE (58)

    /** scanner.e:1710				entry*/
    // SubProg Scanner pc: 1644 op: NOP1 (159)
L37: // addr: 1645 pc: 1644 sub: 26917 op: 159
    // SubProg Scanner pc: 1645 op: STARTLINE (58)

    /** scanner.e:1711					ch = getch()*/
    // SubProg Scanner pc: 1647 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1650 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1652 op: STARTLINE (58)

    /** scanner.e:1712				end while*/
    // SubProg Scanner pc: 1654 op: ENDWHILE (22)
    goto L38; // [1654] 1457
    // SubProg Scanner pc: 1656 op: NOP1 (159)
L40: // addr: 1657 pc: 1656 sub: 26917 op: 159
    // SubProg Scanner pc: 1657 op: STARTLINE (58)

    /** scanner.e:1714				if ch = '.' then*/
    // SubProg Scanner pc: 1659 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 46)
    goto L43; // [1659] 1794
    // SubProg Scanner pc: 1663 op: STARTLINE (58)

    /** scanner.e:1715					ch = getch()*/
    // SubProg Scanner pc: 1665 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1668 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1670 op: STARTLINE (58)

    /** scanner.e:1716					if ch = '.' then*/
    // SubProg Scanner pc: 1672 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 46)
    goto L44; // [1672] 1683
    // SubProg Scanner pc: 1676 op: STARTLINE (58)

    /** scanner.e:1718						ungetch()*/
    // SubProg Scanner pc: 1678 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 1680 op: ELSE (23)
    goto L45; // [1680] 1793
    // SubProg Scanner pc: 1682 op: NOP1 (159)
L44: // addr: 1683 pc: 1682 sub: 26917 op: 159
    // SubProg Scanner pc: 1683 op: STARTLINE (58)

    /** scanner.e:1720						is_int = FALSE*/
    // SubProg Scanner pc: 1685 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1687 op: ASSIGN (18)
    _is_int_26930 = _13FALSE_450;
    // SubProg Scanner pc: 1690 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1692 op: STARTLINE (58)

    /** scanner.e:1721						if yytext[1] = '.' then*/
    // SubProg Scanner pc: 1694 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_yytext_26925);
    _15173 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg Scanner pc: 1698 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15173, 46)){
        _15173 = NOVALUE;
        goto L46; // [1698] 1712
    }
    _15173 = NOVALUE;
    // SubProg Scanner pc: 1702 op: STARTLINE (58)

    /** scanner.e:1722							CompileErr(124)*/
    // SubProg Scanner pc: 1704 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(124, _21933, 0);
    // SubProg Scanner pc: 1709 op: ELSE (23)
    goto L47; // [1709] 1719
    // SubProg Scanner pc: 1711 op: NOP1 (159)
L46: // addr: 1712 pc: 1711 sub: 26917 op: 159
    // SubProg Scanner pc: 1712 op: STARTLINE (58)

    /** scanner.e:1724							yytext &= '.'*/
    // SubProg Scanner pc: 1714 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, 46);
    // SubProg Scanner pc: 1718 op: NOP1 (159)
L47: // addr: 1719 pc: 1718 sub: 26917 op: 159
    // SubProg Scanner pc: 1719 op: STARTLINE (58)

    /** scanner.e:1726						if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1721 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1723 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15176 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1727 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1729 op: EQUALS_IFW (104)
    if (_15176 != -7)
    goto L48; // [1729] 1784
    // SubProg Scanner pc: 1733 op: STARTLINE (58)

    /** scanner.e:1727							yytext &= ch*/
    // SubProg Scanner pc: 1735 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1739 op: STARTLINE (58)

    /** scanner.e:1728							ch = getch()*/
    // SubProg Scanner pc: 1741 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1744 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1746 op: STARTLINE (58)

    /** scanner.e:1729							while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1748 op: NOP2 (110)
    // SubProg Scanner pc: 1750 op: NOPWHILE (158)
L49: // addr: 1751 pc: 1750 sub: 26917 op: 158
    // SubProg Scanner pc: 1751 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1753 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15180 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1759 op: EQUALS_IFW (104)
    if (_15180 != -7)
    goto L4A; // [1759] 1792
    // SubProg Scanner pc: 1763 op: STARTLINE (58)

    /** scanner.e:1730								yytext &= ch*/
    // SubProg Scanner pc: 1765 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1769 op: STARTLINE (58)

    /** scanner.e:1731								ch = getch()*/
    // SubProg Scanner pc: 1771 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1774 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1776 op: STARTLINE (58)

    /** scanner.e:1732							end while*/
    // SubProg Scanner pc: 1778 op: ENDWHILE (22)
    goto L49; // [1778] 1751
    // SubProg Scanner pc: 1780 op: NOP1 (159)
    // SubProg Scanner pc: 1781 op: ELSE (23)
    goto L4A; // [1781] 1792
    // SubProg Scanner pc: 1783 op: NOP1 (159)
L48: // addr: 1784 pc: 1783 sub: 26917 op: 159
    // SubProg Scanner pc: 1784 op: STARTLINE (58)

    /** scanner.e:1734							CompileErr(94)*/
    // SubProg Scanner pc: 1786 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(94, _21933, 0);
    // SubProg Scanner pc: 1791 op: NOP1 (159)
L4A: // addr: 1792 pc: 1791 sub: 26917 op: 159
    // SubProg Scanner pc: 1792 op: NOP1 (159)
L45: // addr: 1793 pc: 1792 sub: 26917 op: 159
    // SubProg Scanner pc: 1793 op: NOP1 (159)
L43: // addr: 1794 pc: 1793 sub: 26917 op: 159
    // SubProg Scanner pc: 1794 op: STARTLINE (58)

    /** scanner.e:1739				if basetype = -1 and find(ch, "eE") then*/
    // SubProg Scanner pc: 1796 op: EQUALS (3)
    _15184 = (_basetype_27225 == -1);
    // SubProg Scanner pc: 1800 op: SC1_AND_IF (146)
    if (_15184 == 0) {
        goto L4B; // [1800] 1936
    }
    // SubProg Scanner pc: 1804 op: FIND_FROM (176)
    _15187 = find_from(_ch_26919, _15186, 1);
    // SubProg Scanner pc: 1809 op: NOP1 (159)
    // SubProg Scanner pc: 1810 op: IF (20)
    if (_15187 == 0)
    {
        _15187 = NOVALUE;
        goto L4B; // [1810] 1936
    }
    else{
        _15187 = NOVALUE;
    }
    // SubProg Scanner pc: 1813 op: STARTLINE (58)

    /** scanner.e:1740					is_int = FALSE*/
    // SubProg Scanner pc: 1815 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1817 op: ASSIGN (18)
    _is_int_26930 = _13FALSE_450;
    // SubProg Scanner pc: 1820 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 1822 op: STARTLINE (58)

    /** scanner.e:1741					yytext &= ch*/
    // SubProg Scanner pc: 1824 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1828 op: STARTLINE (58)

    /** scanner.e:1742					ch = getch()*/
    // SubProg Scanner pc: 1830 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1833 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1835 op: STARTLINE (58)

    /** scanner.e:1743					if ch = '-' or ch = '+' or char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 1837 op: EQUALS (3)
    _15190 = (_ch_26919 == 45);
    // SubProg Scanner pc: 1841 op: SC1_OR (143)
    if (_15190 != 0) {
        _15191 = 1;
        goto L4C; // [1841] 1853
    }
    // SubProg Scanner pc: 1845 op: EQUALS (3)
    _15192 = (_ch_26919 == 43);
    // SubProg Scanner pc: 1849 op: SC2_OR (144)
    _15191 = (_15192 != 0);
    // SubProg Scanner pc: 1852 op: NOP1 (159)
L4C: // addr: 1853 pc: 1852 sub: 26917 op: 159
    // SubProg Scanner pc: 1853 op: SC1_OR_IF (147)
    if (_15191 != 0) {
        goto L4D; // [1853] 1874
    }
    // SubProg Scanner pc: 1857 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1859 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15194 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1863 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1865 op: EQUALS (3)
    _15195 = (_15194 == -7);
    _15194 = NOVALUE;
    // SubProg Scanner pc: 1869 op: NOP1 (159)
    // SubProg Scanner pc: 1870 op: IF (20)
    if (_15195 == 0)
    {
        DeRef(_15195);
        _15195 = NOVALUE;
        goto L4E; // [1870] 1883
    }
    else{
        DeRef(_15195);
        _15195 = NOVALUE;
    }
    // SubProg Scanner pc: 1873 op: NOP1 (159)
L4D: // addr: 1874 pc: 1873 sub: 26917 op: 159
    // SubProg Scanner pc: 1874 op: STARTLINE (58)

    /** scanner.e:1744						yytext &= ch*/
    // SubProg Scanner pc: 1876 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1880 op: ELSE (23)
    goto L4F; // [1880] 1891
    // SubProg Scanner pc: 1882 op: NOP1 (159)
L4E: // addr: 1883 pc: 1882 sub: 26917 op: 159
    // SubProg Scanner pc: 1883 op: STARTLINE (58)

    /** scanner.e:1746						CompileErr(86)*/
    // SubProg Scanner pc: 1885 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(86, _21933, 0);
    // SubProg Scanner pc: 1890 op: NOP1 (159)
L4F: // addr: 1891 pc: 1890 sub: 26917 op: 159
    // SubProg Scanner pc: 1891 op: STARTLINE (58)

    /** scanner.e:1748					ch = getch()*/
    // SubProg Scanner pc: 1893 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1896 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1898 op: STARTLINE (58)

    /** scanner.e:1749					while char_class[ch] = DIGIT do*/
    // SubProg Scanner pc: 1900 op: NOP2 (110)
    // SubProg Scanner pc: 1902 op: NOPWHILE (158)
L50: // addr: 1903 pc: 1902 sub: 26917 op: 158
    // SubProg Scanner pc: 1903 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1905 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15198 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1909 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1911 op: EQUALS_IFW (104)
    if (_15198 != -7)
    goto L51; // [1911] 1967
    // SubProg Scanner pc: 1915 op: STARTLINE (58)

    /** scanner.e:1750						yytext &= ch*/
    // SubProg Scanner pc: 1917 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 1921 op: STARTLINE (58)

    /** scanner.e:1751						ch = getch()*/
    // SubProg Scanner pc: 1923 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 1926 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 1928 op: STARTLINE (58)

    /** scanner.e:1752					end while*/
    // SubProg Scanner pc: 1930 op: ENDWHILE (22)
    goto L50; // [1930] 1903
    // SubProg Scanner pc: 1932 op: NOP1 (159)
    // SubProg Scanner pc: 1933 op: ELSE (23)
    goto L51; // [1933] 1967
    // SubProg Scanner pc: 1935 op: NOP1 (159)
L4B: // addr: 1936 pc: 1935 sub: 26917 op: 159
    // SubProg Scanner pc: 1936 op: STARTLINE (58)

    /** scanner.e:1753				elsif char_class[ch] = LETTER then*/
    // SubProg Scanner pc: 1938 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1940 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15202 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 1944 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 1946 op: EQUALS_IFW (104)
    if (_15202 != -2)
    goto L52; // [1946] 1966
    // SubProg Scanner pc: 1950 op: STARTLINE (58)

    /** scanner.e:1754					CompileErr(127, {{ch}})*/
    // SubProg Scanner pc: 1952 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26919;
    _15204 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 1956 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _15204;
    _15205 = MAKE_SEQ(_1);
    _15204 = NOVALUE;
    // SubProg Scanner pc: 1960 op: PROC (27)
    _50CompileErr(127, _15205, 0);
    _15205 = NOVALUE;
    // SubProg Scanner pc: 1965 op: NOP1 (159)
L52: // addr: 1966 pc: 1965 sub: 26917 op: 159
    // SubProg Scanner pc: 1966 op: NOP1 (159)
L51: // addr: 1967 pc: 1966 sub: 26917 op: 159
    // SubProg Scanner pc: 1967 op: STARTLINE (58)

    /** scanner.e:1757				ungetch()*/
    // SubProg Scanner pc: 1969 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 1971 op: STARTLINE (58)

    /** scanner.e:1759				while i != 0 with entry do*/
    // SubProg Scanner pc: 1973 op: ELSE (23)
    goto L53; // [1973] 1992
    // SubProg Scanner pc: 1975 op: NOPWHILE (158)
L54: // addr: 1976 pc: 1975 sub: 26917 op: 158
    // SubProg Scanner pc: 1976 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 1978 op: NOTEQ_IFW_I (122)
    if (_i_26920 == 0)
    goto L55; // [1978] 2004
    // SubProg Scanner pc: 1982 op: STARTLINE (58)

    /** scanner.e:1760					yytext = remove( yytext, i )*/
    // SubProg Scanner pc: 1984 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_yytext_26925);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_26920)) ? _i_26920 : (object)(DBL_PTR(_i_26920)->dbl);
        int stop = (IS_ATOM_INT(_i_26920)) ? _i_26920 : (object)(DBL_PTR(_i_26920)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_yytext_26925), start, &_yytext_26925 );
            }
            else Tail(SEQ_PTR(_yytext_26925), stop+1, &_yytext_26925);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_yytext_26925), start, &_yytext_26925);
        }
        else {
            assign_slice_seq = &assign_space;
            _yytext_26925 = Remove_elements(start, stop, (SEQ_PTR(_yytext_26925)->ref == 1));
        }
    }
    // SubProg Scanner pc: 1989 op: STARTLINE (58)

    /** scanner.e:1761				  entry*/
    // SubProg Scanner pc: 1991 op: NOP1 (159)
L53: // addr: 1992 pc: 1991 sub: 26917 op: 159
    // SubProg Scanner pc: 1992 op: STARTLINE (58)

    /** scanner.e:1762				    i = find('_', yytext)*/
    // SubProg Scanner pc: 1994 op: FIND_FROM (176)
    _i_26920 = find_from(95, _yytext_26925, 1);
    // SubProg Scanner pc: 1999 op: STARTLINE (58)

    /** scanner.e:1763				end while*/
    // SubProg Scanner pc: 2001 op: ENDWHILE (22)
    goto L54; // [2001] 1976
    // SubProg Scanner pc: 2003 op: NOP1 (159)
L55: // addr: 2004 pc: 2003 sub: 26917 op: 159
    // SubProg Scanner pc: 2004 op: STARTLINE (58)

    /** scanner.e:1765				if is_int then*/
    // SubProg Scanner pc: 2006 op: IF (20)
    if (_is_int_26930 == 0)
    {
        goto L56; // [2006] 2078
    }
    else{
    }
    // SubProg Scanner pc: 2009 op: STARTLINE (58)

    /** scanner.e:1766					if basetype = -1 then*/
    // SubProg Scanner pc: 2011 op: EQUALS_IFW_I (121)
    if (_basetype_27225 != -1)
    goto L57; // [2011] 2021
    // SubProg Scanner pc: 2015 op: STARTLINE (58)

    /** scanner.e:1767						basetype = 3 -- decimal*/
    // SubProg Scanner pc: 2017 op: ASSIGN_I (113)
    _basetype_27225 = 3;
    // SubProg Scanner pc: 2020 op: NOP1 (159)
L57: // addr: 2021 pc: 2020 sub: 26917 op: 159
    // SubProg Scanner pc: 2021 op: STARTLINE (58)

    /** scanner.e:1769					d = MakeInt(yytext, nbase[basetype])*/
    // SubProg Scanner pc: 2023 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62nbase_26726);
    _15210 = (object)*(((s1_ptr)_2)->base + _basetype_27225);
    // SubProg Scanner pc: 2027 op: PROC (27)
    RefDS(_yytext_26925);
    Ref(_15210);
    _0 = _d_26927;
    _d_26927 = _62MakeInt(_yytext_26925, _15210);
    DeRef(_0);
    _15210 = NOVALUE;
    // SubProg Scanner pc: 2032 op: STARTLINE (58)

    /** scanner.e:1770					if is_integer(d) then*/
    // SubProg Scanner pc: 2034 op: PROC (27)
    Ref(_d_26927);
    _15212 = _36is_integer(_d_26927);
    // SubProg Scanner pc: 2038 op: IF (20)
    if (_15212 == 0) {
        DeRef(_15212);
        _15212 = NOVALUE;
        goto L58; // [2038] 2060
    }
    else {
        if (!IS_ATOM_INT(_15212) && DBL_PTR(_15212)->dbl == 0.0){
            DeRef(_15212);
            _15212 = NOVALUE;
            goto L58; // [2038] 2060
        }
        DeRef(_15212);
        _15212 = NOVALUE;
    }
    DeRef(_15212);
    _15212 = NOVALUE;
    // SubProg Scanner pc: 2041 op: STARTLINE (58)

    /** scanner.e:1771						return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 2043 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2045 op: PROC (27)
    Ref(_d_26927);
    _15213 = _54NewIntSym(_d_26927);
    // SubProg Scanner pc: 2049 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15213;
    _15214 = MAKE_SEQ(_1);
    _15213 = NOVALUE;
    // SubProg Scanner pc: 2053 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27225

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRefDS(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15214;
    // SubProg Scanner pc: 2057 op: ELSE (23)
    goto L59; // [2057] 2077
    // SubProg Scanner pc: 2059 op: NOP1 (159)
L58: // addr: 2060 pc: 2059 sub: 26917 op: 159
    // SubProg Scanner pc: 2060 op: STARTLINE (58)

    /** scanner.e:1773						return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2062 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2064 op: PROC (27)
    Ref(_d_26927);
    _15215 = _54NewDoubleSym(_d_26927);
    // SubProg Scanner pc: 2068 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15215;
    _15216 = MAKE_SEQ(_1);
    _15215 = NOVALUE;
    // SubProg Scanner pc: 2072 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27225

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15216;
    // SubProg Scanner pc: 2076 op: NOP1 (159)
L59: // addr: 2077 pc: 2076 sub: 26917 op: 159
    // SubProg Scanner pc: 2077 op: NOP1 (159)
L56: // addr: 2078 pc: 2077 sub: 26917 op: 159
    // SubProg Scanner pc: 2078 op: STARTLINE (58)

    /** scanner.e:1778				if basetype != -1 then*/
    // SubProg Scanner pc: 2080 op: NOTEQ_IFW_I (122)
    if (_basetype_27225 == -1)
    goto L5A; // [2080] 2096
    // SubProg Scanner pc: 2084 op: STARTLINE (58)

    /** scanner.e:1779					CompileErr(125, nbasecode[basetype])*/
    // SubProg Scanner pc: 2086 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62nbasecode_26727);
    _15218 = (object)*(((s1_ptr)_2)->base + _basetype_27225);
    // SubProg Scanner pc: 2090 op: PROC (27)
    Ref(_15218);
    _50CompileErr(125, _15218, 0);
    _15218 = NOVALUE;
    // SubProg Scanner pc: 2095 op: NOP1 (159)
L5A: // addr: 2096 pc: 2095 sub: 26917 op: 159
    // SubProg Scanner pc: 2096 op: STARTLINE (58)

    /** scanner.e:1783				d = my_sscanf(yytext)*/
    // SubProg Scanner pc: 2098 op: PROC (27)
    RefDS(_yytext_26925);
    _0 = _d_26927;
    _d_26927 = _62my_sscanf(_yytext_26925);
    DeRef(_0);
    // SubProg Scanner pc: 2102 op: STARTLINE (58)

    /** scanner.e:1784				if sequence(d) then*/
    // SubProg Scanner pc: 2104 op: IS_A_SEQUENCE (68)
    _15220 = IS_SEQUENCE(_d_26927);
    // SubProg Scanner pc: 2107 op: IF (20)
    if (_15220 == 0)
    {
        _15220 = NOVALUE;
        goto L5B; // [2107] 2120
    }
    else{
        _15220 = NOVALUE;
    }
    // SubProg Scanner pc: 2110 op: STARTLINE (58)

    /** scanner.e:1785					CompileErr(121)*/
    // SubProg Scanner pc: 2112 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(121, _21933, 0);
    // SubProg Scanner pc: 2117 op: ELSE (23)
    goto L5C; // [2117] 2172
    // SubProg Scanner pc: 2119 op: NOP1 (159)
L5B: // addr: 2120 pc: 2119 sub: 26917 op: 159
    // SubProg Scanner pc: 2120 op: STARTLINE (58)

    /** scanner.e:1786				elsif is_int and d <= MAXINT_DBL then*/
    // SubProg Scanner pc: 2122 op: SC1_AND_IF (146)
    if (_is_int_26930 == 0) {
        goto L5D; // [2122] 2155
    }
    // SubProg Scanner pc: 2126 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2128 op: LESSEQ (5)
    if (IS_ATOM_INT(_d_26927)) {
        _15222 = (_d_26927 <= 1073741823);
    }
    else {
        _15222 = binary_op(LESSEQ, _d_26927, 1073741823);
    }
    // SubProg Scanner pc: 2132 op: NOP1 (159)
    // SubProg Scanner pc: 2133 op: IF (20)
    if (_15222 == 0) {
        DeRef(_15222);
        _15222 = NOVALUE;
        goto L5D; // [2133] 2155
    }
    else {
        if (!IS_ATOM_INT(_15222) && DBL_PTR(_15222)->dbl == 0.0){
            DeRef(_15222);
            _15222 = NOVALUE;
            goto L5D; // [2133] 2155
        }
        DeRef(_15222);
        _15222 = NOVALUE;
    }
    DeRef(_15222);
    _15222 = NOVALUE;
    // SubProg Scanner pc: 2136 op: STARTLINE (58)

    /** scanner.e:1787					return {ATOM, NewIntSym(d)}  -- 1 to 1.07 billion*/
    // SubProg Scanner pc: 2138 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2140 op: PROC (27)
    Ref(_d_26927);
    _15223 = _54NewIntSym(_d_26927);
    // SubProg Scanner pc: 2144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15223;
    _15224 = MAKE_SEQ(_1);
    _15223 = NOVALUE;
    // SubProg Scanner pc: 2148 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27225

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    return _15224;
    // SubProg Scanner pc: 2152 op: ELSE (23)
    goto L5C; // [2152] 2172
    // SubProg Scanner pc: 2154 op: NOP1 (159)
L5D: // addr: 2155 pc: 2154 sub: 26917 op: 159
    // SubProg Scanner pc: 2155 op: STARTLINE (58)

    /** scanner.e:1789					return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 2157 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2159 op: PROC (27)
    Ref(_d_26927);
    _15225 = _54NewDoubleSym(_d_26927);
    // SubProg Scanner pc: 2163 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15225;
    _15226 = MAKE_SEQ(_1);
    _15225 = NOVALUE;
    // SubProg Scanner pc: 2167 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var basetype_27225

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15226;
    // SubProg Scanner pc: 2171 op: NOP1 (159)
L5C: // addr: 2172 pc: 2171 sub: 26917 op: 159
    // SubProg Scanner pc: 2172 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var basetype_27225
    // SubProg Scanner pc: 2174 op: ELSE (23)
    goto L1; // [2174] 10
    // SubProg Scanner pc: 2176 op: NOP1 (159)
L33: // addr: 2177 pc: 2176 sub: 26917 op: 159
    // SubProg Scanner pc: 2177 op: STARTLINE (58)

    /** scanner.e:1793			elsif class = MINUS then*/
    // SubProg Scanner pc: 2179 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2181 op: EQUALS_IFW (104)
    if (_class_26931 != 10)
    goto L5E; // [2181] 2267
    // SubProg Scanner pc: 2185 op: STARTLINE (58)

    /** scanner.e:1794				ch = getch()*/
    // SubProg Scanner pc: 2187 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2190 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2192 op: STARTLINE (58)

    /** scanner.e:1795				if ch = '-' then*/
    // SubProg Scanner pc: 2194 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 45)
    goto L5F; // [2194] 2220
    // SubProg Scanner pc: 2198 op: STARTLINE (58)

    /** scanner.e:1797					if start_include then*/
    // SubProg Scanner pc: 2200 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2202 op: IF (20)
    if (_62start_include_25179 == 0)
    {
        goto L60; // [2202] 2212
    }
    else{
    }
    // SubProg Scanner pc: 2205 op: STARTLINE (58)

    /** scanner.e:1798						IncludePush()*/
    // SubProg Scanner pc: 2207 op: PROC (27)
    _62IncludePush();
    // SubProg Scanner pc: 2209 op: ELSE (23)
    goto L1; // [2209] 10
    // SubProg Scanner pc: 2211 op: NOP1 (159)
L60: // addr: 2212 pc: 2211 sub: 26917 op: 159
    // SubProg Scanner pc: 2212 op: STARTLINE (58)

    /** scanner.e:1800						read_line()*/
    // SubProg Scanner pc: 2214 op: PROC (27)
    _62read_line();
    // SubProg Scanner pc: 2216 op: NOP1 (159)
    // SubProg Scanner pc: 2217 op: ELSE (23)
    goto L1; // [2217] 10
    // SubProg Scanner pc: 2219 op: NOP1 (159)
L5F: // addr: 2220 pc: 2219 sub: 26917 op: 159
    // SubProg Scanner pc: 2220 op: STARTLINE (58)

    /** scanner.e:1802				elsif ch = '=' then*/
    // SubProg Scanner pc: 2222 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 61)
    goto L61; // [2222] 2241
    // SubProg Scanner pc: 2226 op: STARTLINE (58)

    /** scanner.e:1803					return {MINUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2228 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2230 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 516;
    ((intptr_t *)_2)[2] = 0;
    _15231 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2234 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15231;
    // SubProg Scanner pc: 2238 op: ELSE (23)
    goto L1; // [2238] 10
    // SubProg Scanner pc: 2240 op: NOP1 (159)
L61: // addr: 2241 pc: 2240 sub: 26917 op: 159
    // SubProg Scanner pc: 2241 op: STARTLINE (58)

    /** scanner.e:1805					bp -= 1*/
    // SubProg Scanner pc: 2243 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2245 op: MINUS (10)
    _50bp_48711 = _50bp_48711 - 1;
    // SubProg Scanner pc: 2251 op: STARTLINE (58)

    /** scanner.e:1806					return {MINUS, 0}*/
    // SubProg Scanner pc: 2253 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2255 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 0;
    _15233 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2259 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15233;
    // SubProg Scanner pc: 2263 op: NOP1 (159)
    // SubProg Scanner pc: 2264 op: ELSE (23)
    goto L1; // [2264] 10
    // SubProg Scanner pc: 2266 op: NOP1 (159)
L5E: // addr: 2267 pc: 2266 sub: 26917 op: 159
    // SubProg Scanner pc: 2267 op: STARTLINE (58)

    /** scanner.e:1808			elsif class = DOUBLE_QUOTE then*/
    // SubProg Scanner pc: 2269 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2271 op: EQUALS_IFW (104)
    if (_class_26931 != -4)
    goto L62; // [2271] 2465
    // SubProg Scanner pc: 2275 op: STARTLINE (58)

    /** scanner.e:1809				integer fch*/
    // SubProg Scanner pc: 2277 op: STARTLINE (58)

    /** scanner.e:1810				ch = getch()*/
    // SubProg Scanner pc: 2279 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2282 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2284 op: STARTLINE (58)

    /** scanner.e:1811				if ch = '"' then*/
    // SubProg Scanner pc: 2286 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 34)
    goto L63; // [2286] 2322
    // SubProg Scanner pc: 2290 op: STARTLINE (58)

    /** scanner.e:1812					fch = getch()*/
    // SubProg Scanner pc: 2292 op: PROC (27)
    _fch_27399 = _62getch();
    // SubProg Scanner pc: 2295 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_fch_27399)) {
        _1 = (object)(DBL_PTR(_fch_27399)->dbl);
        DeRefDS(_fch_27399);
        _fch_27399 = _1;
    }
    // SubProg Scanner pc: 2297 op: STARTLINE (58)

    /** scanner.e:1813					if fch = '"' then*/
    // SubProg Scanner pc: 2299 op: EQUALS_IFW_I (121)
    if (_fch_27399 != 34)
    goto L64; // [2299] 2316
    // SubProg Scanner pc: 2303 op: STARTLINE (58)

    /** scanner.e:1815						return ExtendedString( fch )*/
    // SubProg Scanner pc: 2305 op: PROC (27)
    _15239 = _62ExtendedString(_fch_27399);
    // SubProg Scanner pc: 2309 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27399

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15239;
    // SubProg Scanner pc: 2313 op: ELSE (23)
    goto L65; // [2313] 2321
    // SubProg Scanner pc: 2315 op: NOP1 (159)
L64: // addr: 2316 pc: 2315 sub: 26917 op: 159
    // SubProg Scanner pc: 2316 op: STARTLINE (58)

    /** scanner.e:1817						ungetch()*/
    // SubProg Scanner pc: 2318 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 2320 op: NOP1 (159)
L65: // addr: 2321 pc: 2320 sub: 26917 op: 159
    // SubProg Scanner pc: 2321 op: NOP1 (159)
L63: // addr: 2322 pc: 2321 sub: 26917 op: 159
    // SubProg Scanner pc: 2322 op: STARTLINE (58)

    /** scanner.e:1820				yytext = ""*/
    // SubProg Scanner pc: 2324 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_yytext_26925);
    _yytext_26925 = _5;
    // SubProg Scanner pc: 2327 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 2329 op: STARTLINE (58)

    /** scanner.e:1821				while ch != '\n' and ch != '\r' do -- can't be EOF*/
    // SubProg Scanner pc: 2331 op: NOP2 (110)
    // SubProg Scanner pc: 2333 op: NOPWHILE (158)
L66: // addr: 2334 pc: 2333 sub: 26917 op: 158
    // SubProg Scanner pc: 2334 op: NOTEQ (4)
    _15240 = (_ch_26919 != 10);
    // SubProg Scanner pc: 2338 op: SC1_AND_IF (146)
    if (_15240 == 0) {
        goto L67; // [2338] 2417
    }
    // SubProg Scanner pc: 2342 op: NOTEQ (4)
    _15242 = (_ch_26919 != 13);
    // SubProg Scanner pc: 2346 op: NOP1 (159)
    // SubProg Scanner pc: 2347 op: WHILE (47)
    if (_15242 == 0)
    {
        DeRef(_15242);
        _15242 = NOVALUE;
        goto L67; // [2347] 2417
    }
    else{
        DeRef(_15242);
        _15242 = NOVALUE;
    }
    // SubProg Scanner pc: 2350 op: STARTLINE (58)

    /** scanner.e:1822					if ch = '"' then*/
    // SubProg Scanner pc: 2352 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 34)
    goto L68; // [2352] 2363
    // SubProg Scanner pc: 2356 op: STARTLINE (58)

    /** scanner.e:1823						exit*/
    // SubProg Scanner pc: 2358 op: EXIT (61)
    goto L67; // [2358] 2417
    // SubProg Scanner pc: 2360 op: ELSE (23)
    goto L69; // [2360] 2405
    // SubProg Scanner pc: 2362 op: NOP1 (159)
L68: // addr: 2363 pc: 2362 sub: 26917 op: 159
    // SubProg Scanner pc: 2363 op: STARTLINE (58)

    /** scanner.e:1824					elsif ch = '\\' then*/
    // SubProg Scanner pc: 2365 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 92)
    goto L6A; // [2365] 2382
    // SubProg Scanner pc: 2369 op: STARTLINE (58)

    /** scanner.e:1825						yytext &= EscapeChar('"')*/
    // SubProg Scanner pc: 2371 op: PROC (27)
    _15245 = _62EscapeChar(34);
    // SubProg Scanner pc: 2375 op: CONCAT (15)
    if (IS_SEQUENCE(_yytext_26925) && IS_ATOM(_15245)) {
        Ref(_15245);
        Append(&_yytext_26925, _yytext_26925, _15245);
    }
    else if (IS_ATOM(_yytext_26925) && IS_SEQUENCE(_15245)) {
    }
    else {
        Concat((object_ptr)&_yytext_26925, _yytext_26925, _15245);
    }
    DeRef(_15245);
    _15245 = NOVALUE;
    // SubProg Scanner pc: 2379 op: ELSE (23)
    goto L69; // [2379] 2405
    // SubProg Scanner pc: 2381 op: NOP1 (159)
L6A: // addr: 2382 pc: 2381 sub: 26917 op: 159
    // SubProg Scanner pc: 2382 op: STARTLINE (58)

    /** scanner.e:1826					elsif ch = '\t' then*/
    // SubProg Scanner pc: 2384 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 9)
    goto L6B; // [2384] 2398
    // SubProg Scanner pc: 2388 op: STARTLINE (58)

    /** scanner.e:1827						CompileErr(145)*/
    // SubProg Scanner pc: 2390 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(145, _21933, 0);
    // SubProg Scanner pc: 2395 op: ELSE (23)
    goto L69; // [2395] 2405
    // SubProg Scanner pc: 2397 op: NOP1 (159)
L6B: // addr: 2398 pc: 2397 sub: 26917 op: 159
    // SubProg Scanner pc: 2398 op: STARTLINE (58)

    /** scanner.e:1829						yytext &= ch*/
    // SubProg Scanner pc: 2400 op: CONCAT (15)
    Append(&_yytext_26925, _yytext_26925, _ch_26919);
    // SubProg Scanner pc: 2404 op: NOP1 (159)
L69: // addr: 2405 pc: 2404 sub: 26917 op: 159
    // SubProg Scanner pc: 2405 op: STARTLINE (58)

    /** scanner.e:1831					ch = getch()*/
    // SubProg Scanner pc: 2407 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2410 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2412 op: STARTLINE (58)

    /** scanner.e:1832				end while*/
    // SubProg Scanner pc: 2414 op: ENDWHILE (22)
    goto L66; // [2414] 2334
    // SubProg Scanner pc: 2416 op: NOP1 (159)
L67: // addr: 2417 pc: 2416 sub: 26917 op: 159
    // SubProg Scanner pc: 2417 op: STARTLINE (58)

    /** scanner.e:1833				if ch = '\n' or ch = '\r' then*/
    // SubProg Scanner pc: 2419 op: EQUALS (3)
    _15250 = (_ch_26919 == 10);
    // SubProg Scanner pc: 2423 op: SC1_OR_IF (147)
    if (_15250 != 0) {
        goto L6C; // [2423] 2436
    }
    // SubProg Scanner pc: 2427 op: EQUALS (3)
    _15252 = (_ch_26919 == 13);
    // SubProg Scanner pc: 2431 op: NOP1 (159)
    // SubProg Scanner pc: 2432 op: IF (20)
    if (_15252 == 0)
    {
        DeRef(_15252);
        _15252 = NOVALUE;
        goto L6D; // [2432] 2444
    }
    else{
        DeRef(_15252);
        _15252 = NOVALUE;
    }
    // SubProg Scanner pc: 2435 op: NOP1 (159)
L6C: // addr: 2436 pc: 2435 sub: 26917 op: 159
    // SubProg Scanner pc: 2436 op: STARTLINE (58)

    /** scanner.e:1834					CompileErr(67)*/
    // SubProg Scanner pc: 2438 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(67, _21933, 0);
    // SubProg Scanner pc: 2443 op: NOP1 (159)
L6D: // addr: 2444 pc: 2443 sub: 26917 op: 159
    // SubProg Scanner pc: 2444 op: STARTLINE (58)

    /** scanner.e:1836				return {STRING, NewStringSym(yytext)}*/
    // SubProg Scanner pc: 2446 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2448 op: PROC (27)
    RefDS(_yytext_26925);
    _15253 = _54NewStringSym(_yytext_26925);
    // SubProg Scanner pc: 2452 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _15253;
    _15254 = MAKE_SEQ(_1);
    _15253 = NOVALUE;
    // SubProg Scanner pc: 2456 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var fch_27399

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRefDS(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15254;
    // SubProg Scanner pc: 2460 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var fch_27399
    // SubProg Scanner pc: 2462 op: ELSE (23)
    goto L1; // [2462] 10
    // SubProg Scanner pc: 2464 op: NOP1 (159)
L62: // addr: 2465 pc: 2464 sub: 26917 op: 159
    // SubProg Scanner pc: 2465 op: STARTLINE (58)

    /** scanner.e:1838			elsif class = PLUS then*/
    // SubProg Scanner pc: 2467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2469 op: EQUALS_IFW (104)
    if (_class_26931 != 11)
    goto L6E; // [2469] 2521
    // SubProg Scanner pc: 2473 op: STARTLINE (58)

    /** scanner.e:1839				ch = getch()*/
    // SubProg Scanner pc: 2475 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2478 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2480 op: STARTLINE (58)

    /** scanner.e:1840				if ch = '=' then*/
    // SubProg Scanner pc: 2482 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 61)
    goto L6F; // [2482] 2501
    // SubProg Scanner pc: 2486 op: STARTLINE (58)

    /** scanner.e:1841					return {PLUS_EQUALS, 0}*/
    // SubProg Scanner pc: 2488 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2490 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 515;
    ((intptr_t *)_2)[2] = 0;
    _15258 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2494 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15258;
    // SubProg Scanner pc: 2498 op: ELSE (23)
    goto L1; // [2498] 10
    // SubProg Scanner pc: 2500 op: NOP1 (159)
L6F: // addr: 2501 pc: 2500 sub: 26917 op: 159
    // SubProg Scanner pc: 2501 op: STARTLINE (58)

    /** scanner.e:1843					ungetch()*/
    // SubProg Scanner pc: 2503 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 2505 op: STARTLINE (58)

    /** scanner.e:1844					return {PLUS, 0}*/
    // SubProg Scanner pc: 2507 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2509 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 11;
    ((intptr_t *)_2)[2] = 0;
    _15259 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2513 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15259;
    // SubProg Scanner pc: 2517 op: NOP1 (159)
    // SubProg Scanner pc: 2518 op: ELSE (23)
    goto L1; // [2518] 10
    // SubProg Scanner pc: 2520 op: NOP1 (159)
L6E: // addr: 2521 pc: 2520 sub: 26917 op: 159
    // SubProg Scanner pc: 2521 op: STARTLINE (58)

    /** scanner.e:1847			elsif class = res:CONCAT then*/
    // SubProg Scanner pc: 2523 op: EQUALS_IFW_I (121)
    if (_class_26931 != 15)
    goto L70; // [2523] 2573
    // SubProg Scanner pc: 2527 op: STARTLINE (58)

    /** scanner.e:1848				ch = getch()*/
    // SubProg Scanner pc: 2529 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2532 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2534 op: STARTLINE (58)

    /** scanner.e:1849				if ch = '=' then*/
    // SubProg Scanner pc: 2536 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 61)
    goto L71; // [2536] 2555
    // SubProg Scanner pc: 2540 op: STARTLINE (58)

    /** scanner.e:1850					return {CONCAT_EQUALS, 0}*/
    // SubProg Scanner pc: 2542 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2544 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 519;
    ((intptr_t *)_2)[2] = 0;
    _15263 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2548 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15263;
    // SubProg Scanner pc: 2552 op: ELSE (23)
    goto L1; // [2552] 10
    // SubProg Scanner pc: 2554 op: NOP1 (159)
L71: // addr: 2555 pc: 2554 sub: 26917 op: 159
    // SubProg Scanner pc: 2555 op: STARTLINE (58)

    /** scanner.e:1852					ungetch()*/
    // SubProg Scanner pc: 2557 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 2559 op: STARTLINE (58)

    /** scanner.e:1853					return {res:CONCAT, 0}*/
    // SubProg Scanner pc: 2561 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 15;
    ((intptr_t *)_2)[2] = 0;
    _15264 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 2565 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15264;
    // SubProg Scanner pc: 2569 op: NOP1 (159)
    // SubProg Scanner pc: 2570 op: ELSE (23)
    goto L1; // [2570] 10
    // SubProg Scanner pc: 2572 op: NOP1 (159)
L70: // addr: 2573 pc: 2572 sub: 26917 op: 159
    // SubProg Scanner pc: 2573 op: STARTLINE (58)

    /** scanner.e:1856			elsif class = NUMBER_SIGN then*/
    // SubProg Scanner pc: 2575 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2577 op: EQUALS_IFW (104)
    if (_class_26931 != -11)
    goto L72; // [2577] 3104
    // SubProg Scanner pc: 2581 op: STARTLINE (58)

    /** scanner.e:1857				i = 0*/
    // SubProg Scanner pc: 2583 op: ASSIGN_I (113)
    _i_26920 = 0;
    // SubProg Scanner pc: 2586 op: STARTLINE (58)

    /** scanner.e:1858				is_int = -1*/
    // SubProg Scanner pc: 2588 op: ASSIGN_I (113)
    _is_int_26930 = -1;
    // SubProg Scanner pc: 2591 op: STARTLINE (58)

    /** scanner.e:1859				while i < MAXINT/32 do*/
    // SubProg Scanner pc: 2593 op: NOP2 (110)
    // SubProg Scanner pc: 2595 op: NOPWHILE (158)
L73: // addr: 2596 pc: 2595 sub: 26917 op: 158
    // SubProg Scanner pc: 2596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2598 op: DIVIDE (14)
    _15266 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2602 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _i_26920, _15266)){
        DeRef(_15266);
        _15266 = NOVALUE;
        goto L74; // [2602] 2772
    }
    DeRef(_15266);
    _15266 = NOVALUE;
    // SubProg Scanner pc: 2606 op: STARTLINE (58)

    /** scanner.e:1860					ch = getch()*/
    // SubProg Scanner pc: 2608 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2611 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2613 op: STARTLINE (58)

    /** scanner.e:1861					if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2615 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2617 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15269 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 2621 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2623 op: EQUALS_IFW (104)
    if (_15269 != -7)
    goto L75; // [2623] 2662
    // SubProg Scanner pc: 2627 op: STARTLINE (58)

    /** scanner.e:1862						if ch != '_' then*/
    // SubProg Scanner pc: 2629 op: NOTEQ_IFW_I (122)
    if (_ch_26919 == 95)
    goto L73; // [2629] 2596
    // SubProg Scanner pc: 2633 op: STARTLINE (58)

    /** scanner.e:1863							i = i * 16 + ch - '0'*/
    // SubProg Scanner pc: 2635 op: MULTIPLY (13)
    if (_i_26920 == (short)_i_26920){
        _15272 = _i_26920 * 16;
    }
    else{
        _15272 = NewDouble(_i_26920 * (eudouble)16);
    }
    // SubProg Scanner pc: 2639 op: PLUS (11)
    if (IS_ATOM_INT(_15272)) {
        _15273 = _15272 + _ch_26919;
        if ((object)((uintptr_t)_15273 + (uintptr_t)HIGH_BITS) >= 0){
            _15273 = NewDouble((eudouble)_15273);
        }
    }
    else {
        _15273 = NewDouble(DBL_PTR(_15272)->dbl + (eudouble)_ch_26919);
    }
    DeRef(_15272);
    _15272 = NOVALUE;
    // SubProg Scanner pc: 2643 op: MINUS (10)
    if (IS_ATOM_INT(_15273)) {
        _i_26920 = _15273 - 48;
    }
    else {
        _i_26920 = NewDouble(DBL_PTR(_15273)->dbl - (eudouble)48);
    }
    DeRef(_15273);
    _15273 = NOVALUE;
    // SubProg Scanner pc: 2647 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26920)) {
        _1 = (object)(DBL_PTR(_i_26920)->dbl);
        DeRefDS(_i_26920);
        _i_26920 = _1;
    }
    // SubProg Scanner pc: 2649 op: STARTLINE (58)

    /** scanner.e:1864							is_int = TRUE*/
    // SubProg Scanner pc: 2651 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2653 op: ASSIGN (18)
    _is_int_26930 = _13TRUE_452;
    // SubProg Scanner pc: 2656 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2658 op: NOP1 (159)
    // SubProg Scanner pc: 2659 op: ELSE (23)
    goto L73; // [2659] 2596
    // SubProg Scanner pc: 2661 op: NOP1 (159)
L75: // addr: 2662 pc: 2661 sub: 26917 op: 159
    // SubProg Scanner pc: 2662 op: STARTLINE (58)

    /** scanner.e:1866					elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2664 op: GREATEREQ (2)
    _15275 = (_ch_26919 >= 65);
    // SubProg Scanner pc: 2668 op: SC1_AND_IF (146)
    if (_15275 == 0) {
        goto L76; // [2668] 2712
    }
    // SubProg Scanner pc: 2672 op: LESSEQ (5)
    _15277 = (_ch_26919 <= 70);
    // SubProg Scanner pc: 2676 op: NOP1 (159)
    // SubProg Scanner pc: 2677 op: IF (20)
    if (_15277 == 0)
    {
        DeRef(_15277);
        _15277 = NOVALUE;
        goto L76; // [2677] 2712
    }
    else{
        DeRef(_15277);
        _15277 = NOVALUE;
    }
    // SubProg Scanner pc: 2680 op: STARTLINE (58)

    /** scanner.e:1867						i = (i * 16) + ch - ('A'-10)*/
    // SubProg Scanner pc: 2682 op: MULTIPLY (13)
    if (_i_26920 == (short)_i_26920){
        _15278 = _i_26920 * 16;
    }
    else{
        _15278 = NewDouble(_i_26920 * (eudouble)16);
    }
    // SubProg Scanner pc: 2686 op: PLUS (11)
    if (IS_ATOM_INT(_15278)) {
        _15279 = _15278 + _ch_26919;
        if ((object)((uintptr_t)_15279 + (uintptr_t)HIGH_BITS) >= 0){
            _15279 = NewDouble((eudouble)_15279);
        }
    }
    else {
        _15279 = NewDouble(DBL_PTR(_15278)->dbl + (eudouble)_ch_26919);
    }
    DeRef(_15278);
    _15278 = NOVALUE;
    // SubProg Scanner pc: 2690 op: MINUS (10)
    _15280 = 55;
    // SubProg Scanner pc: 2694 op: MINUS (10)
    if (IS_ATOM_INT(_15279)) {
        _i_26920 = _15279 - 55;
    }
    else {
        _i_26920 = NewDouble(DBL_PTR(_15279)->dbl - (eudouble)55);
    }
    DeRef(_15279);
    _15279 = NOVALUE;
    _15280 = NOVALUE;
    // SubProg Scanner pc: 2698 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26920)) {
        _1 = (object)(DBL_PTR(_i_26920)->dbl);
        DeRefDS(_i_26920);
        _i_26920 = _1;
    }
    // SubProg Scanner pc: 2700 op: STARTLINE (58)

    /** scanner.e:1868						is_int = TRUE*/
    // SubProg Scanner pc: 2702 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2704 op: ASSIGN (18)
    _is_int_26930 = _13TRUE_452;
    // SubProg Scanner pc: 2707 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2709 op: ELSE (23)
    goto L73; // [2709] 2596
    // SubProg Scanner pc: 2711 op: NOP1 (159)
L76: // addr: 2712 pc: 2711 sub: 26917 op: 159
    // SubProg Scanner pc: 2712 op: STARTLINE (58)

    /** scanner.e:1869					elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2714 op: GREATEREQ (2)
    _15282 = (_ch_26919 >= 97);
    // SubProg Scanner pc: 2718 op: SC1_AND_IF (146)
    if (_15282 == 0) {
        goto L74; // [2718] 2772
    }
    // SubProg Scanner pc: 2722 op: LESSEQ (5)
    _15284 = (_ch_26919 <= 102);
    // SubProg Scanner pc: 2726 op: NOP1 (159)
    // SubProg Scanner pc: 2727 op: IF (20)
    if (_15284 == 0)
    {
        DeRef(_15284);
        _15284 = NOVALUE;
        goto L74; // [2727] 2772
    }
    else{
        DeRef(_15284);
        _15284 = NOVALUE;
    }
    // SubProg Scanner pc: 2730 op: STARTLINE (58)

    /** scanner.e:1870						i = (i * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2732 op: MULTIPLY (13)
    if (_i_26920 == (short)_i_26920){
        _15285 = _i_26920 * 16;
    }
    else{
        _15285 = NewDouble(_i_26920 * (eudouble)16);
    }
    // SubProg Scanner pc: 2736 op: PLUS (11)
    if (IS_ATOM_INT(_15285)) {
        _15286 = _15285 + _ch_26919;
        if ((object)((uintptr_t)_15286 + (uintptr_t)HIGH_BITS) >= 0){
            _15286 = NewDouble((eudouble)_15286);
        }
    }
    else {
        _15286 = NewDouble(DBL_PTR(_15285)->dbl + (eudouble)_ch_26919);
    }
    DeRef(_15285);
    _15285 = NOVALUE;
    // SubProg Scanner pc: 2740 op: MINUS (10)
    _15287 = 87;
    // SubProg Scanner pc: 2744 op: MINUS (10)
    if (IS_ATOM_INT(_15286)) {
        _i_26920 = _15286 - 87;
    }
    else {
        _i_26920 = NewDouble(DBL_PTR(_15286)->dbl - (eudouble)87);
    }
    DeRef(_15286);
    _15286 = NOVALUE;
    _15287 = NOVALUE;
    // SubProg Scanner pc: 2748 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_i_26920)) {
        _1 = (object)(DBL_PTR(_i_26920)->dbl);
        DeRefDS(_i_26920);
        _i_26920 = _1;
    }
    // SubProg Scanner pc: 2750 op: STARTLINE (58)

    /** scanner.e:1871						is_int = TRUE*/
    // SubProg Scanner pc: 2752 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2754 op: ASSIGN (18)
    _is_int_26930 = _13TRUE_452;
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
L74: // addr: 2772 pc: 2771 sub: 26917 op: 159
    // SubProg Scanner pc: 2772 op: STARTLINE (58)

    /** scanner.e:1877				if is_int = -1 then*/
    // SubProg Scanner pc: 2774 op: EQUALS_IFW_I (121)
    if (_is_int_26930 != -1)
    goto L77; // [2774] 2837
    // SubProg Scanner pc: 2778 op: STARTLINE (58)

    /** scanner.e:1878					if ch = '!' then*/
    // SubProg Scanner pc: 2780 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 33)
    goto L78; // [2780] 2826
    // SubProg Scanner pc: 2784 op: STARTLINE (58)

    /** scanner.e:1879						if line_number > 1 then*/
    // SubProg Scanner pc: 2786 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2788 op: GREATER_IFW (107)
    if (_36line_number_16437 <= 1)
    goto L79; // [2788] 2800
    // SubProg Scanner pc: 2792 op: STARTLINE (58)

    /** scanner.e:1880							CompileErr(161)*/
    // SubProg Scanner pc: 2794 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(161, _21933, 0);
    // SubProg Scanner pc: 2799 op: NOP1 (159)
L79: // addr: 2800 pc: 2799 sub: 26917 op: 159
    // SubProg Scanner pc: 2800 op: STARTLINE (58)

    /** scanner.e:1883						shebang = ThisLine*/
    // SubProg Scanner pc: 2802 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2804 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_62shebang_25184);
    _62shebang_25184 = _50ThisLine_48707;
    // SubProg Scanner pc: 2807 op: STARTLINE (58)

    /** scanner.e:1884						if start_include then*/
    // SubProg Scanner pc: 2809 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2811 op: IF (20)
    if (_62start_include_25179 == 0)
    {
        goto L7A; // [2811] 2819
    }
    else{
    }
    // SubProg Scanner pc: 2814 op: STARTLINE (58)

    /** scanner.e:1885							IncludePush()*/
    // SubProg Scanner pc: 2816 op: PROC (27)
    _62IncludePush();
    // SubProg Scanner pc: 2818 op: NOP1 (159)
L7A: // addr: 2819 pc: 2818 sub: 26917 op: 159
    // SubProg Scanner pc: 2819 op: STARTLINE (58)

    /** scanner.e:1887						read_line()*/
    // SubProg Scanner pc: 2821 op: PROC (27)
    _62read_line();
    // SubProg Scanner pc: 2823 op: ELSE (23)
    goto L1; // [2823] 10
    // SubProg Scanner pc: 2825 op: NOP1 (159)
L78: // addr: 2826 pc: 2825 sub: 26917 op: 159
    // SubProg Scanner pc: 2826 op: STARTLINE (58)

    /** scanner.e:1889						CompileErr(97)*/
    // SubProg Scanner pc: 2828 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(97, _21933, 0);
    // SubProg Scanner pc: 2833 op: NOP1 (159)
    // SubProg Scanner pc: 2834 op: ELSE (23)
    goto L1; // [2834] 10
    // SubProg Scanner pc: 2836 op: NOP1 (159)
L77: // addr: 2837 pc: 2836 sub: 26917 op: 159
    // SubProg Scanner pc: 2837 op: STARTLINE (58)

    /** scanner.e:1892					if i >= MAXINT/32 then*/
    // SubProg Scanner pc: 2839 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2841 op: DIVIDE (14)
    _15292 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    // SubProg Scanner pc: 2845 op: GREATEREQ_IFW (103)
    if (binary_op_a(LESS, _i_26920, _15292)){
        DeRef(_15292);
        _15292 = NOVALUE;
        goto L7B; // [2845] 3016
    }
    DeRef(_15292);
    _15292 = NOVALUE;
    // SubProg Scanner pc: 2849 op: STARTLINE (58)

    /** scanner.e:1893						d = i*/
    // SubProg Scanner pc: 2851 op: ASSIGN (18)
    DeRef(_d_26927);
    _d_26927 = _i_26920;
    // SubProg Scanner pc: 2854 op: STARTLINE (58)

    /** scanner.e:1894						is_int = FALSE*/
    // SubProg Scanner pc: 2856 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2858 op: ASSIGN (18)
    _is_int_26930 = _13FALSE_450;
    // SubProg Scanner pc: 2861 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 2863 op: STARTLINE (58)

    /** scanner.e:1895						while TRUE do*/
    // SubProg Scanner pc: 2865 op: NOP2 (110)
    // SubProg Scanner pc: 2867 op: NOPWHILE (158)
L7C: // addr: 2868 pc: 2867 sub: 26917 op: 158
    // SubProg Scanner pc: 2868 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2870 op: WHILE (47)
    if (_13TRUE_452 == 0)
    {
        goto L7D; // [2870] 3015
    }
    else{
    }
    // SubProg Scanner pc: 2873 op: STARTLINE (58)

    /** scanner.e:1896							ch = getch()  -- eventually END_OF_FILE_CHAR or new-line*/
    // SubProg Scanner pc: 2875 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 2878 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 2880 op: STARTLINE (58)

    /** scanner.e:1897							if char_class[ch] = DIGIT then*/
    // SubProg Scanner pc: 2882 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2884 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15295 = (object)*(((s1_ptr)_2)->base + _ch_26919);
    // SubProg Scanner pc: 2888 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 2890 op: EQUALS_IFW (104)
    if (_15295 != -7)
    goto L7E; // [2890] 2918
    // SubProg Scanner pc: 2894 op: STARTLINE (58)

    /** scanner.e:1898								if ch != '_' then*/
    // SubProg Scanner pc: 2896 op: NOTEQ_IFW_I (122)
    if (_ch_26919 == 95)
    goto L7C; // [2896] 2868
    // SubProg Scanner pc: 2900 op: STARTLINE (58)

    /** scanner.e:1899									d = (d * 16) + ch - '0'*/
    // SubProg Scanner pc: 2902 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26927)) {
        if (_d_26927 == (short)_d_26927){
            _15298 = _d_26927 * 16;
        }
        else{
            _15298 = NewDouble(_d_26927 * (eudouble)16);
        }
    }
    else {
        _15298 = binary_op(MULTIPLY, _d_26927, 16);
    }
    // SubProg Scanner pc: 2906 op: PLUS (11)
    if (IS_ATOM_INT(_15298)) {
        _15299 = _15298 + _ch_26919;
        if ((object)((uintptr_t)_15299 + (uintptr_t)HIGH_BITS) >= 0){
            _15299 = NewDouble((eudouble)_15299);
        }
    }
    else {
        _15299 = binary_op(PLUS, _15298, _ch_26919);
    }
    DeRef(_15298);
    _15298 = NOVALUE;
    // SubProg Scanner pc: 2910 op: MINUS (10)
    DeRef(_d_26927);
    if (IS_ATOM_INT(_15299)) {
        _d_26927 = _15299 - 48;
        if ((object)((uintptr_t)_d_26927 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26927 = NewDouble((eudouble)_d_26927);
        }
    }
    else {
        _d_26927 = binary_op(MINUS, _15299, 48);
    }
    DeRef(_15299);
    _15299 = NOVALUE;
    // SubProg Scanner pc: 2914 op: NOP1 (159)
    // SubProg Scanner pc: 2915 op: ELSE (23)
    goto L7C; // [2915] 2868
    // SubProg Scanner pc: 2917 op: NOP1 (159)
L7E: // addr: 2918 pc: 2917 sub: 26917 op: 159
    // SubProg Scanner pc: 2918 op: STARTLINE (58)

    /** scanner.e:1901							elsif ch >= 'A' and ch <= 'F' then*/
    // SubProg Scanner pc: 2920 op: GREATEREQ (2)
    _15301 = (_ch_26919 >= 65);
    // SubProg Scanner pc: 2924 op: SC1_AND_IF (146)
    if (_15301 == 0) {
        goto L7F; // [2924] 2957
    }
    // SubProg Scanner pc: 2928 op: LESSEQ (5)
    _15303 = (_ch_26919 <= 70);
    // SubProg Scanner pc: 2932 op: NOP1 (159)
    // SubProg Scanner pc: 2933 op: IF (20)
    if (_15303 == 0)
    {
        DeRef(_15303);
        _15303 = NOVALUE;
        goto L7F; // [2933] 2957
    }
    else{
        DeRef(_15303);
        _15303 = NOVALUE;
    }
    // SubProg Scanner pc: 2936 op: STARTLINE (58)

    /** scanner.e:1902								d = (d * 16) + ch - ('A'- 10)*/
    // SubProg Scanner pc: 2938 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26927)) {
        if (_d_26927 == (short)_d_26927){
            _15304 = _d_26927 * 16;
        }
        else{
            _15304 = NewDouble(_d_26927 * (eudouble)16);
        }
    }
    else {
        _15304 = binary_op(MULTIPLY, _d_26927, 16);
    }
    // SubProg Scanner pc: 2942 op: PLUS (11)
    if (IS_ATOM_INT(_15304)) {
        _15305 = _15304 + _ch_26919;
        if ((object)((uintptr_t)_15305 + (uintptr_t)HIGH_BITS) >= 0){
            _15305 = NewDouble((eudouble)_15305);
        }
    }
    else {
        _15305 = binary_op(PLUS, _15304, _ch_26919);
    }
    DeRef(_15304);
    _15304 = NOVALUE;
    // SubProg Scanner pc: 2946 op: MINUS (10)
    _15306 = 55;
    // SubProg Scanner pc: 2950 op: MINUS (10)
    DeRef(_d_26927);
    if (IS_ATOM_INT(_15305)) {
        _d_26927 = _15305 - 55;
        if ((object)((uintptr_t)_d_26927 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26927 = NewDouble((eudouble)_d_26927);
        }
    }
    else {
        _d_26927 = binary_op(MINUS, _15305, 55);
    }
    DeRef(_15305);
    _15305 = NOVALUE;
    _15306 = NOVALUE;
    // SubProg Scanner pc: 2954 op: ELSE (23)
    goto L7C; // [2954] 2868
    // SubProg Scanner pc: 2956 op: NOP1 (159)
L7F: // addr: 2957 pc: 2956 sub: 26917 op: 159
    // SubProg Scanner pc: 2957 op: STARTLINE (58)

    /** scanner.e:1903							elsif ch >= 'a' and ch <= 'f' then*/
    // SubProg Scanner pc: 2959 op: GREATEREQ (2)
    _15308 = (_ch_26919 >= 97);
    // SubProg Scanner pc: 2963 op: SC1_AND_IF (146)
    if (_15308 == 0) {
        goto L80; // [2963] 2996
    }
    // SubProg Scanner pc: 2967 op: LESSEQ (5)
    _15310 = (_ch_26919 <= 102);
    // SubProg Scanner pc: 2971 op: NOP1 (159)
    // SubProg Scanner pc: 2972 op: IF (20)
    if (_15310 == 0)
    {
        DeRef(_15310);
        _15310 = NOVALUE;
        goto L80; // [2972] 2996
    }
    else{
        DeRef(_15310);
        _15310 = NOVALUE;
    }
    // SubProg Scanner pc: 2975 op: STARTLINE (58)

    /** scanner.e:1904								d = (d * 16) + ch - ('a'-10)*/
    // SubProg Scanner pc: 2977 op: MULTIPLY (13)
    if (IS_ATOM_INT(_d_26927)) {
        if (_d_26927 == (short)_d_26927){
            _15311 = _d_26927 * 16;
        }
        else{
            _15311 = NewDouble(_d_26927 * (eudouble)16);
        }
    }
    else {
        _15311 = binary_op(MULTIPLY, _d_26927, 16);
    }
    // SubProg Scanner pc: 2981 op: PLUS (11)
    if (IS_ATOM_INT(_15311)) {
        _15312 = _15311 + _ch_26919;
        if ((object)((uintptr_t)_15312 + (uintptr_t)HIGH_BITS) >= 0){
            _15312 = NewDouble((eudouble)_15312);
        }
    }
    else {
        _15312 = binary_op(PLUS, _15311, _ch_26919);
    }
    DeRef(_15311);
    _15311 = NOVALUE;
    // SubProg Scanner pc: 2985 op: MINUS (10)
    _15313 = 87;
    // SubProg Scanner pc: 2989 op: MINUS (10)
    DeRef(_d_26927);
    if (IS_ATOM_INT(_15312)) {
        _d_26927 = _15312 - 87;
        if ((object)((uintptr_t)_d_26927 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26927 = NewDouble((eudouble)_d_26927);
        }
    }
    else {
        _d_26927 = binary_op(MINUS, _15312, 87);
    }
    DeRef(_15312);
    _15312 = NOVALUE;
    _15313 = NOVALUE;
    // SubProg Scanner pc: 2993 op: ELSE (23)
    goto L7C; // [2993] 2868
    // SubProg Scanner pc: 2995 op: NOP1 (159)
L80: // addr: 2996 pc: 2995 sub: 26917 op: 159
    // SubProg Scanner pc: 2996 op: STARTLINE (58)

    /** scanner.e:1905							elsif ch = '_' then*/
    // SubProg Scanner pc: 2998 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 95)
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
L7D: // addr: 3015 pc: 3014 sub: 26917 op: 159
    // SubProg Scanner pc: 3015 op: NOP1 (159)
L7B: // addr: 3016 pc: 3015 sub: 26917 op: 159
    // SubProg Scanner pc: 3016 op: STARTLINE (58)

    /** scanner.e:1913					ungetch()*/
    // SubProg Scanner pc: 3018 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3020 op: STARTLINE (58)

    /** scanner.e:1914					if is_int and is_integer(i) then*/
    // SubProg Scanner pc: 3022 op: SC1_AND_IF (146)
    if (_is_int_26930 == 0) {
        goto L81; // [3022] 3053
    }
    // SubProg Scanner pc: 3026 op: PROC (27)
    _15317 = _36is_integer(_i_26920);
    // SubProg Scanner pc: 3030 op: NOP1 (159)
    // SubProg Scanner pc: 3031 op: IF (20)
    if (_15317 == 0) {
        DeRef(_15317);
        _15317 = NOVALUE;
        goto L81; // [3031] 3053
    }
    else {
        if (!IS_ATOM_INT(_15317) && DBL_PTR(_15317)->dbl == 0.0){
            DeRef(_15317);
            _15317 = NOVALUE;
            goto L81; // [3031] 3053
        }
        DeRef(_15317);
        _15317 = NOVALUE;
    }
    DeRef(_15317);
    _15317 = NOVALUE;
    // SubProg Scanner pc: 3034 op: STARTLINE (58)

    /** scanner.e:1915						return {ATOM, NewIntSym(i)}*/
    // SubProg Scanner pc: 3036 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3038 op: PROC (27)
    _15318 = _54NewIntSym(_i_26920);
    // SubProg Scanner pc: 3042 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15318;
    _15319 = MAKE_SEQ(_1);
    _15318 = NOVALUE;
    // SubProg Scanner pc: 3046 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15319;
    // SubProg Scanner pc: 3050 op: ELSE (23)
    goto L1; // [3050] 10
    // SubProg Scanner pc: 3052 op: NOP1 (159)
L81: // addr: 3053 pc: 3052 sub: 26917 op: 159
    // SubProg Scanner pc: 3053 op: STARTLINE (58)

    /** scanner.e:1917						if d <= MAXINT_DBL then            -- d is always >= 0*/
    // SubProg Scanner pc: 3055 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3057 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3059 op: LESSEQ_IFW (106)
    if (binary_op_a(GREATER, _d_26927, 1073741823)){
        goto L82; // [3059] 3082
    }
    // SubProg Scanner pc: 3063 op: STARTLINE (58)

    /** scanner.e:1918							return {ATOM, NewIntSym(d)}*/
    // SubProg Scanner pc: 3065 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3067 op: PROC (27)
    Ref(_d_26927);
    _15321 = _54NewIntSym(_d_26927);
    // SubProg Scanner pc: 3071 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15321;
    _15322 = MAKE_SEQ(_1);
    _15321 = NOVALUE;
    // SubProg Scanner pc: 3075 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15322;
    // SubProg Scanner pc: 3079 op: ELSE (23)
    goto L1; // [3079] 10
    // SubProg Scanner pc: 3081 op: NOP1 (159)
L82: // addr: 3082 pc: 3081 sub: 26917 op: 159
    // SubProg Scanner pc: 3082 op: STARTLINE (58)

    /** scanner.e:1920							return {ATOM, NewDoubleSym(d)}*/
    // SubProg Scanner pc: 3084 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3086 op: PROC (27)
    Ref(_d_26927);
    _15323 = _54NewDoubleSym(_d_26927);
    // SubProg Scanner pc: 3090 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15323;
    _15324 = MAKE_SEQ(_1);
    _15323 = NOVALUE;
    // SubProg Scanner pc: 3094 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15324;
    // SubProg Scanner pc: 3098 op: NOP1 (159)
    // SubProg Scanner pc: 3099 op: NOP1 (159)
    // SubProg Scanner pc: 3100 op: NOP1 (159)
    // SubProg Scanner pc: 3101 op: ELSE (23)
    goto L1; // [3101] 10
    // SubProg Scanner pc: 3103 op: NOP1 (159)
L72: // addr: 3104 pc: 3103 sub: 26917 op: 159
    // SubProg Scanner pc: 3104 op: STARTLINE (58)

    /** scanner.e:1925			elsif class = res:MULTIPLY then*/
    // SubProg Scanner pc: 3106 op: EQUALS_IFW_I (121)
    if (_class_26931 != 13)
    goto L83; // [3106] 3156
    // SubProg Scanner pc: 3110 op: STARTLINE (58)

    /** scanner.e:1926				ch = getch()*/
    // SubProg Scanner pc: 3112 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 3115 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 3117 op: STARTLINE (58)

    /** scanner.e:1927				if ch = '=' then*/
    // SubProg Scanner pc: 3119 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 61)
    goto L84; // [3119] 3138
    // SubProg Scanner pc: 3123 op: STARTLINE (58)

    /** scanner.e:1928					return {MULTIPLY_EQUALS, 0}*/
    // SubProg Scanner pc: 3125 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3127 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 517;
    ((intptr_t *)_2)[2] = 0;
    _15328 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3131 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15328;
    // SubProg Scanner pc: 3135 op: ELSE (23)
    goto L1; // [3135] 10
    // SubProg Scanner pc: 3137 op: NOP1 (159)
L84: // addr: 3138 pc: 3137 sub: 26917 op: 159
    // SubProg Scanner pc: 3138 op: STARTLINE (58)

    /** scanner.e:1930					ungetch()*/
    // SubProg Scanner pc: 3140 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3142 op: STARTLINE (58)

    /** scanner.e:1931					return {res:MULTIPLY, 0}*/
    // SubProg Scanner pc: 3144 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 13;
    ((intptr_t *)_2)[2] = 0;
    _15329 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3148 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15329;
    // SubProg Scanner pc: 3152 op: NOP1 (159)
    // SubProg Scanner pc: 3153 op: ELSE (23)
    goto L1; // [3153] 10
    // SubProg Scanner pc: 3155 op: NOP1 (159)
L83: // addr: 3156 pc: 3155 sub: 26917 op: 159
    // SubProg Scanner pc: 3156 op: STARTLINE (58)

    /** scanner.e:1934			elsif class = res:DIVIDE then*/
    // SubProg Scanner pc: 3158 op: EQUALS_IFW_I (121)
    if (_class_26931 != 14)
    goto L85; // [3158] 3360
    // SubProg Scanner pc: 3162 op: STARTLINE (58)

    /** scanner.e:1935				ch = getch()*/
    // SubProg Scanner pc: 3164 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 3167 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 3169 op: STARTLINE (58)

    /** scanner.e:1936				if ch = '=' then*/
    // SubProg Scanner pc: 3171 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 61)
    goto L86; // [3171] 3190
    // SubProg Scanner pc: 3175 op: STARTLINE (58)

    /** scanner.e:1937					return {DIVIDE_EQUALS, 0}*/
    // SubProg Scanner pc: 3177 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3179 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 518;
    ((intptr_t *)_2)[2] = 0;
    _15333 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3183 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15333;
    // SubProg Scanner pc: 3187 op: ELSE (23)
    goto L1; // [3187] 10
    // SubProg Scanner pc: 3189 op: NOP1 (159)
L86: // addr: 3190 pc: 3189 sub: 26917 op: 159
    // SubProg Scanner pc: 3190 op: STARTLINE (58)

    /** scanner.e:1938				elsif ch = '*' then*/
    // SubProg Scanner pc: 3192 op: EQUALS_IFW_I (121)
    if (_ch_26919 != 42)
    goto L87; // [3192] 3342
    // SubProg Scanner pc: 3196 op: STARTLINE (58)

    /** scanner.e:1940					cline = line_number*/
    // SubProg Scanner pc: 3198 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3200 op: ASSIGN (18)
    _cline_26924 = _36line_number_16437;
    // SubProg Scanner pc: 3203 op: INTEGER_CHECK (96)
    // SubProg Scanner pc: 3205 op: STARTLINE (58)

    /** scanner.e:1941					integer cnest = 1*/
    // SubProg Scanner pc: 3207 op: ASSIGN_I (113)
    _cnest_27579 = 1;
    // SubProg Scanner pc: 3210 op: STARTLINE (58)

    /** scanner.e:1942					while cnest > 0 do*/
    // SubProg Scanner pc: 3212 op: NOP2 (110)
    // SubProg Scanner pc: 3214 op: NOPWHILE (158)
L88: // addr: 3215 pc: 3214 sub: 26917 op: 158
    // SubProg Scanner pc: 3215 op: GREATER_IFW_I (124)
    if (_cnest_27579 <= 0)
    goto L89; // [3215] 3323
    // SubProg Scanner pc: 3219 op: STARTLINE (58)

    /** scanner.e:1943						ch = getch()*/
    // SubProg Scanner pc: 3221 op: PROC (27)
    _ch_26919 = _62getch();
    // SubProg Scanner pc: 3224 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_26919)) {
        _1 = (object)(DBL_PTR(_ch_26919)->dbl);
        DeRefDS(_ch_26919);
        _ch_26919 = _1;
    }
    // SubProg Scanner pc: 3226 op: STARTLINE (58)

    /** scanner.e:1944						switch ch do*/
    // SubProg Scanner pc: 3228 op: SWITCH_I (193)
    _0 = _ch_26919;
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
        _62read_line();
        // SubProg Scanner pc: 3251 op: ELSE (23)
        goto L88; // [3251] 3215
        // SubProg Scanner pc: 3253 op: STARTLINE (58)

        /** scanner.e:1951							case '*' then*/
        // SubProg Scanner pc: 3255 op: CASE (186)
        case 42:
        // SubProg Scanner pc: 3257 op: STARTLINE (58)

        /** scanner.e:1952								ch = getch()*/
        // SubProg Scanner pc: 3259 op: PROC (27)
        _ch_26919 = _62getch();
        // SubProg Scanner pc: 3262 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26919)) {
            _1 = (object)(DBL_PTR(_ch_26919)->dbl);
            DeRefDS(_ch_26919);
            _ch_26919 = _1;
        }
        // SubProg Scanner pc: 3264 op: STARTLINE (58)

        /** scanner.e:1953								if ch = '/' then*/
        // SubProg Scanner pc: 3266 op: EQUALS_IFW_I (121)
        if (_ch_26919 != 47)
        goto L8A; // [3266] 3279
        // SubProg Scanner pc: 3270 op: STARTLINE (58)

        /** scanner.e:1954									cnest -= 1*/
        // SubProg Scanner pc: 3272 op: MINUS_I (116)
        _cnest_27579 = _cnest_27579 - 1;
        // SubProg Scanner pc: 3276 op: ELSE (23)
        goto L88; // [3276] 3215
        // SubProg Scanner pc: 3278 op: NOP1 (159)
L8A: // addr: 3279 pc: 3278 sub: 26917 op: 159
        // SubProg Scanner pc: 3279 op: STARTLINE (58)

        /** scanner.e:1956									ungetch()*/
        // SubProg Scanner pc: 3281 op: PROC (27)
        _62ungetch();
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
        _ch_26919 = _62getch();
        // SubProg Scanner pc: 3295 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_ch_26919)) {
            _1 = (object)(DBL_PTR(_ch_26919)->dbl);
            DeRefDS(_ch_26919);
            _ch_26919 = _1;
        }
        // SubProg Scanner pc: 3297 op: STARTLINE (58)

        /** scanner.e:1961								if ch = '*' then*/
        // SubProg Scanner pc: 3299 op: EQUALS_IFW_I (121)
        if (_ch_26919 != 42)
        goto L8B; // [3299] 3312
        // SubProg Scanner pc: 3303 op: STARTLINE (58)

        /** scanner.e:1962									cnest += 1*/
        // SubProg Scanner pc: 3305 op: PLUS1_I (117)
        _cnest_27579 = _cnest_27579 + 1;
        // SubProg Scanner pc: 3309 op: ELSE (23)
        goto L8C; // [3309] 3317
        // SubProg Scanner pc: 3311 op: NOP1 (159)
L8B: // addr: 3312 pc: 3311 sub: 26917 op: 159
        // SubProg Scanner pc: 3312 op: STARTLINE (58)

        /** scanner.e:1964									ungetch()*/
        // SubProg Scanner pc: 3314 op: PROC (27)
        _62ungetch();
        // SubProg Scanner pc: 3316 op: NOP1 (159)
L8C: // addr: 3317 pc: 3316 sub: 26917 op: 159
        // SubProg Scanner pc: 3317 op: NOPSWITCH (187)
    ;}    // SubProg Scanner pc: 3318 op: STARTLINE (58)

    /** scanner.e:1968					end while*/
    // SubProg Scanner pc: 3320 op: ENDWHILE (22)
    goto L88; // [3320] 3215
    // SubProg Scanner pc: 3322 op: NOP1 (159)
L89: // addr: 3323 pc: 3322 sub: 26917 op: 159
    // SubProg Scanner pc: 3323 op: STARTLINE (58)

    /** scanner.e:1970					if cnest > 0 then*/
    // SubProg Scanner pc: 3325 op: GREATER_IFW_I (124)
    if (_cnest_27579 <= 0)
    goto L8D; // [3325] 3337
    // SubProg Scanner pc: 3329 op: STARTLINE (58)

    /** scanner.e:1971						CompileErr(42, cline)*/
    // SubProg Scanner pc: 3331 op: PROC (27)
    _50CompileErr(42, _cline_26924, 0);
    // SubProg Scanner pc: 3336 op: NOP1 (159)
L8D: // addr: 3337 pc: 3336 sub: 26917 op: 159
    // SubProg Scanner pc: 3337 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var cnest_27579
    // SubProg Scanner pc: 3339 op: ELSE (23)
    goto L1; // [3339] 10
    // SubProg Scanner pc: 3341 op: NOP1 (159)
L87: // addr: 3342 pc: 3341 sub: 26917 op: 159
    // SubProg Scanner pc: 3342 op: STARTLINE (58)

    /** scanner.e:1974					ungetch()*/
    // SubProg Scanner pc: 3344 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3346 op: STARTLINE (58)

    /** scanner.e:1975					return {res:DIVIDE, 0}*/
    // SubProg Scanner pc: 3348 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 14;
    ((intptr_t *)_2)[2] = 0;
    _15346 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3352 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15346;
    // SubProg Scanner pc: 3356 op: NOP1 (159)
    // SubProg Scanner pc: 3357 op: ELSE (23)
    goto L1; // [3357] 10
    // SubProg Scanner pc: 3359 op: NOP1 (159)
L85: // addr: 3360 pc: 3359 sub: 26917 op: 159
    // SubProg Scanner pc: 3360 op: STARTLINE (58)

    /** scanner.e:1977			elsif class = SINGLE_QUOTE then*/
    // SubProg Scanner pc: 3362 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3364 op: EQUALS_IFW (104)
    if (_class_26931 != -5)
    goto L8E; // [3364] 3506
    // SubProg Scanner pc: 3368 op: STARTLINE (58)

    /** scanner.e:1978				atom ach = getch()*/
    // SubProg Scanner pc: 3370 op: PROC (27)
    _0 = _ach_27608;
    _ach_27608 = _62getch();
    DeRef(_0);
    // SubProg Scanner pc: 3373 op: STARTLINE (58)

    /** scanner.e:1979				if ach = '\\' then*/
    // SubProg Scanner pc: 3375 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27608, 92)){
        goto L8F; // [3375] 3388
    }
    // SubProg Scanner pc: 3379 op: STARTLINE (58)

    /** scanner.e:1980					ach = EscapeChar('\'')*/
    // SubProg Scanner pc: 3381 op: PROC (27)
    _0 = _ach_27608;
    _ach_27608 = _62EscapeChar(39);
    DeRef(_0);
    // SubProg Scanner pc: 3385 op: ELSE (23)
    goto L90; // [3385] 3439
    // SubProg Scanner pc: 3387 op: NOP1 (159)
L8F: // addr: 3388 pc: 3387 sub: 26917 op: 159
    // SubProg Scanner pc: 3388 op: STARTLINE (58)

    /** scanner.e:1981				elsif ach = '\t' then*/
    // SubProg Scanner pc: 3390 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27608, 9)){
        goto L91; // [3390] 3404
    }
    // SubProg Scanner pc: 3394 op: STARTLINE (58)

    /** scanner.e:1982					CompileErr(145)*/
    // SubProg Scanner pc: 3396 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(145, _21933, 0);
    // SubProg Scanner pc: 3401 op: ELSE (23)
    goto L90; // [3401] 3439
    // SubProg Scanner pc: 3403 op: NOP1 (159)
L91: // addr: 3404 pc: 3403 sub: 26917 op: 159
    // SubProg Scanner pc: 3404 op: STARTLINE (58)

    /** scanner.e:1983				elsif ach = '\'' then*/
    // SubProg Scanner pc: 3406 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27608, 39)){
        goto L92; // [3406] 3420
    }
    // SubProg Scanner pc: 3410 op: STARTLINE (58)

    /** scanner.e:1984					CompileErr(137)*/
    // SubProg Scanner pc: 3412 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(137, _21933, 0);
    // SubProg Scanner pc: 3417 op: ELSE (23)
    goto L90; // [3417] 3439
    // SubProg Scanner pc: 3419 op: NOP1 (159)
L92: // addr: 3420 pc: 3419 sub: 26917 op: 159
    // SubProg Scanner pc: 3420 op: STARTLINE (58)

    /** scanner.e:1985				elsif ach = '\n' then*/
    // SubProg Scanner pc: 3422 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _ach_27608, 10)){
        goto L93; // [3422] 3438
    }
    // SubProg Scanner pc: 3426 op: STARTLINE (58)

    /** scanner.e:1986					CompileErr(68, {"character", "end of line"})*/
    // SubProg Scanner pc: 3428 op: RIGHT_BRACE_2 (85)
    RefDS(_15356);
    RefDS(_15355);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15355;
    ((intptr_t *)_2)[2] = _15356;
    _15357 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3432 op: PROC (27)
    _50CompileErr(68, _15357, 0);
    _15357 = NOVALUE;
    // SubProg Scanner pc: 3437 op: NOP1 (159)
L93: // addr: 3438 pc: 3437 sub: 26917 op: 159
    // SubProg Scanner pc: 3438 op: NOP1 (159)
L90: // addr: 3439 pc: 3438 sub: 26917 op: 159
    // SubProg Scanner pc: 3439 op: STARTLINE (58)

    /** scanner.e:1988				if getch() != '\'' then*/
    // SubProg Scanner pc: 3441 op: PROC (27)
    _15358 = _62getch();
    // SubProg Scanner pc: 3444 op: NOTEQ_IFW (105)
    if (binary_op_a(EQUALS, _15358, 39)){
        DeRef(_15358);
        _15358 = NOVALUE;
        goto L94; // [3444] 3456
    }
    DeRef(_15358);
    _15358 = NOVALUE;
    // SubProg Scanner pc: 3448 op: STARTLINE (58)

    /** scanner.e:1989					CompileErr(56)*/
    // SubProg Scanner pc: 3450 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(56, _21933, 0);
    // SubProg Scanner pc: 3455 op: NOP1 (159)
L94: // addr: 3456 pc: 3455 sub: 26917 op: 159
    // SubProg Scanner pc: 3456 op: STARTLINE (58)

    /** scanner.e:1991				if is_integer(ach) then*/
    // SubProg Scanner pc: 3458 op: PROC (27)
    Ref(_ach_27608);
    _15360 = _36is_integer(_ach_27608);
    // SubProg Scanner pc: 3462 op: IF (20)
    if (_15360 == 0) {
        DeRef(_15360);
        _15360 = NOVALUE;
        goto L95; // [3462] 3484
    }
    else {
        if (!IS_ATOM_INT(_15360) && DBL_PTR(_15360)->dbl == 0.0){
            DeRef(_15360);
            _15360 = NOVALUE;
            goto L95; // [3462] 3484
        }
        DeRef(_15360);
        _15360 = NOVALUE;
    }
    DeRef(_15360);
    _15360 = NOVALUE;
    // SubProg Scanner pc: 3465 op: STARTLINE (58)

    /** scanner.e:1992					return {ATOM, NewIntSym(ach)}*/
    // SubProg Scanner pc: 3467 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3469 op: PROC (27)
    Ref(_ach_27608);
    _15361 = _54NewIntSym(_ach_27608);
    // SubProg Scanner pc: 3473 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15361;
    _15362 = MAKE_SEQ(_1);
    _15361 = NOVALUE;
    // SubProg Scanner pc: 3477 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27608
    DeRef(_ach_27608);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15362;
    // SubProg Scanner pc: 3481 op: ELSE (23)
    goto L96; // [3481] 3501
    // SubProg Scanner pc: 3483 op: NOP1 (159)
L95: // addr: 3484 pc: 3483 sub: 26917 op: 159
    // SubProg Scanner pc: 3484 op: STARTLINE (58)

    /** scanner.e:1994					return {ATOM, NewDoubleSym(ach)}*/
    // SubProg Scanner pc: 3486 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3488 op: PROC (27)
    Ref(_ach_27608);
    _15363 = _54NewDoubleSym(_ach_27608);
    // SubProg Scanner pc: 3492 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15363;
    _15364 = MAKE_SEQ(_1);
    _15363 = NOVALUE;
    // SubProg Scanner pc: 3496 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var ach_27608
    DeRef(_ach_27608);

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15364;
    // SubProg Scanner pc: 3500 op: NOP1 (159)
L96: // addr: 3501 pc: 3500 sub: 26917 op: 159
    // SubProg Scanner pc: 3501 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var ach_27608
    DeRef(_ach_27608);
    _ach_27608 = NOVALUE;
    // SubProg Scanner pc: 3503 op: ELSE (23)
    goto L1; // [3503] 10
    // SubProg Scanner pc: 3505 op: NOP1 (159)
L8E: // addr: 3506 pc: 3505 sub: 26917 op: 159
    // SubProg Scanner pc: 3506 op: STARTLINE (58)

    /** scanner.e:1997			elsif class = LESS then*/
    // SubProg Scanner pc: 3508 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3510 op: EQUALS_IFW (104)
    if (_class_26931 != 1)
    goto L97; // [3510] 3558
    // SubProg Scanner pc: 3514 op: STARTLINE (58)

    /** scanner.e:1998				if getch() = '=' then*/
    // SubProg Scanner pc: 3516 op: PROC (27)
    _15366 = _62getch();
    // SubProg Scanner pc: 3519 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15366, 61)){
        DeRef(_15366);
        _15366 = NOVALUE;
        goto L98; // [3519] 3538
    }
    DeRef(_15366);
    _15366 = NOVALUE;
    // SubProg Scanner pc: 3523 op: STARTLINE (58)

    /** scanner.e:1999					return {LESSEQ, 0}*/
    // SubProg Scanner pc: 3525 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3527 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 5;
    ((intptr_t *)_2)[2] = 0;
    _15368 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3531 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15368;
    // SubProg Scanner pc: 3535 op: ELSE (23)
    goto L1; // [3535] 10
    // SubProg Scanner pc: 3537 op: NOP1 (159)
L98: // addr: 3538 pc: 3537 sub: 26917 op: 159
    // SubProg Scanner pc: 3538 op: STARTLINE (58)

    /** scanner.e:2001					ungetch()*/
    // SubProg Scanner pc: 3540 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3542 op: STARTLINE (58)

    /** scanner.e:2002					return {LESS, 0}*/
    // SubProg Scanner pc: 3544 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3546 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _15369 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3550 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15369;
    // SubProg Scanner pc: 3554 op: NOP1 (159)
    // SubProg Scanner pc: 3555 op: ELSE (23)
    goto L1; // [3555] 10
    // SubProg Scanner pc: 3557 op: NOP1 (159)
L97: // addr: 3558 pc: 3557 sub: 26917 op: 159
    // SubProg Scanner pc: 3558 op: STARTLINE (58)

    /** scanner.e:2005			elsif class = GREATER then*/
    // SubProg Scanner pc: 3560 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3562 op: EQUALS_IFW (104)
    if (_class_26931 != 6)
    goto L99; // [3562] 3610
    // SubProg Scanner pc: 3566 op: STARTLINE (58)

    /** scanner.e:2006				if getch() = '=' then*/
    // SubProg Scanner pc: 3568 op: PROC (27)
    _15371 = _62getch();
    // SubProg Scanner pc: 3571 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15371, 61)){
        DeRef(_15371);
        _15371 = NOVALUE;
        goto L9A; // [3571] 3590
    }
    DeRef(_15371);
    _15371 = NOVALUE;
    // SubProg Scanner pc: 3575 op: STARTLINE (58)

    /** scanner.e:2007					return {GREATEREQ, 0}*/
    // SubProg Scanner pc: 3577 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3579 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = 0;
    _15373 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3583 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15373;
    // SubProg Scanner pc: 3587 op: ELSE (23)
    goto L1; // [3587] 10
    // SubProg Scanner pc: 3589 op: NOP1 (159)
L9A: // addr: 3590 pc: 3589 sub: 26917 op: 159
    // SubProg Scanner pc: 3590 op: STARTLINE (58)

    /** scanner.e:2009					ungetch()*/
    // SubProg Scanner pc: 3592 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3594 op: STARTLINE (58)

    /** scanner.e:2010					return {GREATER, 0}*/
    // SubProg Scanner pc: 3596 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3598 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 6;
    ((intptr_t *)_2)[2] = 0;
    _15374 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3602 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15374;
    // SubProg Scanner pc: 3606 op: NOP1 (159)
    // SubProg Scanner pc: 3607 op: ELSE (23)
    goto L1; // [3607] 10
    // SubProg Scanner pc: 3609 op: NOP1 (159)
L99: // addr: 3610 pc: 3609 sub: 26917 op: 159
    // SubProg Scanner pc: 3610 op: STARTLINE (58)

    /** scanner.e:2013			elsif class = BANG then*/
    // SubProg Scanner pc: 3612 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3614 op: EQUALS_IFW (104)
    if (_class_26931 != -1)
    goto L9B; // [3614] 3662
    // SubProg Scanner pc: 3618 op: STARTLINE (58)

    /** scanner.e:2014				if getch() = '=' then*/
    // SubProg Scanner pc: 3620 op: PROC (27)
    _15376 = _62getch();
    // SubProg Scanner pc: 3623 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _15376, 61)){
        DeRef(_15376);
        _15376 = NOVALUE;
        goto L9C; // [3623] 3642
    }
    DeRef(_15376);
    _15376 = NOVALUE;
    // SubProg Scanner pc: 3627 op: STARTLINE (58)

    /** scanner.e:2015					return {NOTEQ, 0}*/
    // SubProg Scanner pc: 3629 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3631 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = 0;
    _15378 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3635 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15378;
    // SubProg Scanner pc: 3639 op: ELSE (23)
    goto L1; // [3639] 10
    // SubProg Scanner pc: 3641 op: NOP1 (159)
L9C: // addr: 3642 pc: 3641 sub: 26917 op: 159
    // SubProg Scanner pc: 3642 op: STARTLINE (58)

    /** scanner.e:2017					ungetch()*/
    // SubProg Scanner pc: 3644 op: PROC (27)
    _62ungetch();
    // SubProg Scanner pc: 3646 op: STARTLINE (58)

    /** scanner.e:2018					return {BANG, 0}*/
    // SubProg Scanner pc: 3648 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3650 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _15379 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3654 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    return _15379;
    // SubProg Scanner pc: 3658 op: NOP1 (159)
    // SubProg Scanner pc: 3659 op: ELSE (23)
    goto L1; // [3659] 10
    // SubProg Scanner pc: 3661 op: NOP1 (159)
L9B: // addr: 3662 pc: 3661 sub: 26917 op: 159
    // SubProg Scanner pc: 3662 op: STARTLINE (58)

    /** scanner.e:2021			elsif class = KEYWORD then*/
    // SubProg Scanner pc: 3664 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3666 op: EQUALS_IFW (104)
    if (_class_26931 != -10)
    goto L9D; // [3666] 3699
    // SubProg Scanner pc: 3670 op: STARTLINE (58)

    /** scanner.e:2022				return {keylist[ch - KEYWORD_BASE][K_TOKEN], 0}*/
    // SubProg Scanner pc: 3672 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3674 op: MINUS (10)
    _15381 = _ch_26919 - 128;
    // SubProg Scanner pc: 3678 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_63keylist_22748);
    _15382 = (object)*(((s1_ptr)_2)->base + _15381);
    // SubProg Scanner pc: 3682 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3684 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_15382);
    _15383 = (object)*(((s1_ptr)_2)->base + 3);
    _15382 = NOVALUE;
    // SubProg Scanner pc: 3688 op: RIGHT_BRACE_2 (85)
    Ref(_15383);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15383;
    ((intptr_t *)_2)[2] = 0;
    _15384 = MAKE_SEQ(_1);
    _15383 = NOVALUE;
    // SubProg Scanner pc: 3692 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15379);
    _15379 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    _15381 = NOVALUE;
    return _15384;
    // SubProg Scanner pc: 3696 op: ELSE (23)
    goto L1; // [3696] 10
    // SubProg Scanner pc: 3698 op: NOP1 (159)
L9D: // addr: 3699 pc: 3698 sub: 26917 op: 159
    // SubProg Scanner pc: 3699 op: STARTLINE (58)

    /** scanner.e:2024			elsif class = BUILTIN then*/
    // SubProg Scanner pc: 3701 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3703 op: EQUALS_IFW (104)
    if (_class_26931 != -9)
    goto L9E; // [3703] 3756
    // SubProg Scanner pc: 3707 op: STARTLINE (58)

    /** scanner.e:2025				name = keylist[ch - BUILTIN_BASE + NUM_KEYWORDS][K_NAME]*/
    // SubProg Scanner pc: 3709 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3711 op: MINUS (10)
    _15386 = _ch_26919 - 170;
    if ((object)((uintptr_t)_15386 +(uintptr_t) HIGH_BITS) >= 0){
        _15386 = NewDouble((eudouble)_15386);
    }
    // SubProg Scanner pc: 3715 op: PLUS (11)
    if (IS_ATOM_INT(_15386)) {
        _15387 = _15386 + 24;
    }
    else {
        _15387 = NewDouble(DBL_PTR(_15386)->dbl + (eudouble)24);
    }
    DeRef(_15386);
    _15386 = NOVALUE;
    // SubProg Scanner pc: 3719 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_63keylist_22748);
    if (!IS_ATOM_INT(_15387)){
        _15388 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15387)->dbl));
    }
    else{
        _15388 = (object)*(((s1_ptr)_2)->base + _15387);
    }
    // SubProg Scanner pc: 3723 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3725 op: RHS_SUBS_CHECK (92)
    DeRef(_name_26932);
    _2 = (object)SEQ_PTR(_15388);
    _name_26932 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_name_26932);
    _15388 = NOVALUE;
    // SubProg Scanner pc: 3729 op: SEQUENCE_CHECK (97)
    // SubProg Scanner pc: 3731 op: STARTLINE (58)

    /** scanner.e:2026				return keyfind(name, -1)*/
    // SubProg Scanner pc: 3733 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3735 op: PRIVATE_INIT_CHECK (30)
    // SubProg Scanner pc: 3737 op: PROC (27)
    RefDS(_name_26932);
    _31707 = _54hashfn(_name_26932);
    // SubProg Scanner pc: 3741 op: PROC (27)
    RefDS(_name_26932);
    _15390 = _54keyfind(_name_26932, -1, _36current_file_no_16436, 0, _31707);
    _31707 = NOVALUE;
    // SubProg Scanner pc: 3749 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRefDS(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15379);
    _15379 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15387);
    _15387 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    return _15390;
    // SubProg Scanner pc: 3753 op: ELSE (23)
    goto L1; // [3753] 10
    // SubProg Scanner pc: 3755 op: NOP1 (159)
L9E: // addr: 3756 pc: 3755 sub: 26917 op: 159
    // SubProg Scanner pc: 3756 op: STARTLINE (58)

    /** scanner.e:2028			elsif class = BACK_QUOTE then*/
    // SubProg Scanner pc: 3758 op: GLOBAL_INIT_CHECK (109)
    // SubProg Scanner pc: 3760 op: EQUALS_IFW (104)
    if (_class_26931 != -12)
    goto L9F; // [3760] 3777
    // SubProg Scanner pc: 3764 op: STARTLINE (58)

    /** scanner.e:2029				return ExtendedString( '`' )*/
    // SubProg Scanner pc: 3766 op: PROC (27)
    _15392 = _62ExtendedString(96);
    // SubProg Scanner pc: 3770 op: RETURNF (28)

// Exiting block BLOCK: Scanner

// block var ch_26919

// block var i_26920

// block var sp_26921

// block var prev_Nne_26922

// block var pch_26923

// block var cline_26924

// block var yytext_26925
    DeRef(_yytext_26925);

// block var namespaces_26926
    DeRef(_namespaces_26926);

// block var d_26927
    DeRef(_d_26927);

// block var tok_26929
    DeRef(_tok_26929);

// block var is_int_26930

// block var class_26931

// block var name_26932
    DeRef(_name_26932);
    DeRef(_15029);
    _15029 = NOVALUE;
    _15087 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15035);
    _15035 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15322);
    _15322 = NOVALUE;
    _15155 = NOVALUE;
    _15051 = NOVALUE;
    DeRef(_15036);
    _15036 = NOVALUE;
    DeRef(_15264);
    _15264 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15039);
    _15039 = NOVALUE;
    DeRef(_15231);
    _15231 = NOVALUE;
    _15180 = NOVALUE;
    DeRef(_15060);
    _15060 = NOVALUE;
    DeRef(_15239);
    _15239 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    _15295 = NOVALUE;
    DeRef(_15233);
    _15233 = NOVALUE;
    DeRef(_15362);
    _15362 = NOVALUE;
    DeRef(_15329);
    _15329 = NOVALUE;
    _15269 = NOVALUE;
    _15176 = NOVALUE;
    DeRef(_15135);
    _15135 = NOVALUE;
    DeRef(_15346);
    _15346 = NOVALUE;
    DeRef(_15157);
    _15157 = NOVALUE;
    DeRef(_15055);
    _15055 = NOVALUE;
    DeRef(_15192);
    _15192 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    DeRef(_15184);
    _15184 = NOVALUE;
    DeRef(_15379);
    _15379 = NOVALUE;
    DeRef(_15214);
    _15214 = NOVALUE;
    DeRef(_15216);
    _15216 = NOVALUE;
    DeRef(_15131);
    _15131 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    DeRef(_15240);
    _15240 = NOVALUE;
    DeRef(_15390);
    _15390 = NOVALUE;
    DeRef(_15190);
    _15190 = NOVALUE;
    DeRef(_15086);
    _15086 = NOVALUE;
    _15198 = NOVALUE;
    DeRef(_15282);
    _15282 = NOVALUE;
    DeRef(_15032);
    _15032 = NOVALUE;
    DeRef(_15142);
    _15142 = NOVALUE;
    DeRef(_15014);
    _15014 = NOVALUE;
    DeRef(_15333);
    _15333 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    _15145 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    _15102 = NOVALUE;
    DeRef(_15250);
    _15250 = NOVALUE;
    DeRef(_15009);
    _15009 = NOVALUE;
    DeRef(_15384);
    _15384 = NOVALUE;
    _15202 = NOVALUE;
    _15065 = NOVALUE;
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15308);
    _15308 = NOVALUE;
    DeRef(_15301);
    _15301 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15378);
    _15378 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    DeRef(_15387);
    _15387 = NOVALUE;
    DeRef(_15263);
    _15263 = NOVALUE;
    DeRef(_15275);
    _15275 = NOVALUE;
    _15076 = NOVALUE;
    DeRef(_15224);
    _15224 = NOVALUE;
    DeRef(_15381);
    _15381 = NOVALUE;
    return _15392;
    // SubProg Scanner pc: 3774 op: ELSE (23)
    goto L1; // [3774] 10
    // SubProg Scanner pc: 3776 op: NOP1 (159)
L9F: // addr: 3777 pc: 3776 sub: 26917 op: 159
    // SubProg Scanner pc: 3777 op: STARTLINE (58)

    /** scanner.e:2032				InternalErr(268, {class})*/
    // SubProg Scanner pc: 3779 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _class_26931;
    _15393 = MAKE_SEQ(_1);
    // SubProg Scanner pc: 3783 op: PROC (27)
    _50InternalErr(268, _15393);
    _15393 = NOVALUE;
    // SubProg Scanner pc: 3787 op: NOP1 (159)
    // SubProg Scanner pc: 3788 op: STARTLINE (58)

    /** scanner.e:2035	   end while*/
    // SubProg Scanner pc: 3790 op: ENDWHILE (22)
    goto L1; // [3790] 10
    // SubProg Scanner pc: 3792 op: NOP1 (159)
L2: // addr: 3793 pc: 3792 sub: 26917 op: 159
    // SubProg Scanner pc: 3793 op: BADRETURNF (43)
    ;
}


void _62eu_namespace()
{
    object _eu_tok_27707 = NOVALUE;
    object _eu_ns_27709 = NOVALUE;
    object _31706 = NOVALUE; // 63914 31706
    object _31705 = NOVALUE; // 63913 31705
// skipping _15403  name type: 0
    object _15402 = NOVALUE; // 27721 15402
// skipping _15401  name type: 0
    object _15400 = NOVALUE; // 27717 15400
// skipping _15399  name type: 0
    object _15398 = NOVALUE; // 27714 15398
// skipping _15397  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg eu_namespace pc: 1 op: STARTLINE (58)

    /** scanner.e:2043		eu_tok = keyfind("eu", -1, , 1)*/
    // SubProg eu_namespace pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 5 op: ASSIGN (18)
    RefDS(_15396);
    _31705 = _15396;
    // SubProg eu_namespace pc: 8 op: PROC (27)
    _31706 = _54hashfn(_31705);
    _31705 = NOVALUE;
    // SubProg eu_namespace pc: 12 op: PROC (27)
    RefDS(_15396);
    _0 = _eu_tok_27707;
    _eu_tok_27707 = _54keyfind(_15396, -1, _36current_file_no_16436, 1, _31706);
    DeRef(_0);
    _31706 = NOVALUE;
    // SubProg eu_namespace pc: 20 op: STARTLINE (58)

    /** scanner.e:2046		eu_ns  = NameSpace_declaration(eu_tok[T_SYM])*/
    // SubProg eu_namespace pc: 22 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 24 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_eu_tok_27707);
    _15398 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg eu_namespace pc: 28 op: PROC (27)
    Ref(_15398);
    _eu_ns_27709 = _62NameSpace_declaration(_15398);
    _15398 = NOVALUE;
    // SubProg eu_namespace pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_eu_ns_27709)) {
        _1 = (object)(DBL_PTR(_eu_ns_27709)->dbl);
        DeRefDS(_eu_ns_27709);
        _eu_ns_27709 = _1;
    }
    // SubProg eu_namespace pc: 34 op: STARTLINE (58)

    /** scanner.e:2047		SymTab[eu_ns][S_OBJ] = 0*/
    // SubProg eu_namespace pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 38 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27709 + ((s1_ptr)_2)->base);
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
    _15400 = NOVALUE;
    // SubProg eu_namespace pc: 49 op: STARTLINE (58)

    /** scanner.e:2048		SymTab[eu_ns][S_SCOPE] = SC_GLOBAL*/
    // SubProg eu_namespace pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg eu_namespace pc: 53 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27709 + ((s1_ptr)_2)->base);
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
    _15402 = NOVALUE;
    // SubProg eu_namespace pc: 66 op: STARTLINE (58)

    /** scanner.e:2049	end procedure*/
    // SubProg eu_namespace pc: 68 op: RETURNP (29)

// Exiting block BLOCK: eu_namespace

// block var eu_tok_27707
    DeRef(_eu_tok_27707);

// block var eu_ns_27709
    return;
    // SubProg eu_namespace pc: 71 op: BADRETURNF (43)
    ;
}


object _62StringToken(object _pDelims_27727)
{
    object _ch_27728 = NOVALUE;
    object _m_27729 = NOVALUE;
    object _gtext_27730 = NOVALUE;
    object _level_27761 = NOVALUE;
// skipping _15444  name type: 0
// skipping _15443  name type: 0
// skipping _15442  name type: 0
    object _15441 = NOVALUE; // 27791 15441
// skipping _15440  name type: 0
    object _15439 = NOVALUE; // 27789 15439
// skipping _15438  name type: 0
    object _15437 = NOVALUE; // 27786 15437
// skipping _15436  name type: 0
// skipping _15435  name type: 0
// skipping _15434  name type: 0
// skipping _15433  name type: 0
// skipping _15432  name type: 0
// skipping _15431  name type: 0
// skipping _15430  name type: 0
// skipping _15429  name type: 0
// skipping _15428  name type: 0
// skipping _15427  name type: 0
// skipping _15426  name type: 0
// skipping _15425  name type: 0
// skipping _15424  name type: 0
// skipping _15423  name type: 0
// skipping _15422  name type: 0
// skipping _15421  name type: 0
// skipping _15420  name type: 0
// skipping _15419  name type: 0
    object _15418 = NOVALUE; // 27752 15418
    object _15417 = NOVALUE; // 27751 15417
// skipping _15416  name type: 0
// skipping _15415  name type: 0
// skipping _15414  name type: 0
// skipping _15412  name type: 0
    object _15411 = NOVALUE; // 27741 15411
// skipping _15410  name type: 0
    object _15409 = NOVALUE; // 27738 15409
// skipping _15408  name type: 0
    object _15407 = NOVALUE; // 27735 15407
// skipping _15406  name type: 0
    object _15405 = NOVALUE; // 27733 15405
// skipping _15404  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg StringToken pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 3 op: STARTLINE (58)

    /** scanner.e:2060		ch = getch()*/
    // SubProg StringToken pc: 5 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 10 op: STARTLINE (58)

    /** scanner.e:2061		while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 12 op: NOP2 (110)
    // SubProg StringToken pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27725 op: 158
    // SubProg StringToken pc: 15 op: EQUALS (3)
    _15405 = (_ch_27728 == 32);
    // SubProg StringToken pc: 19 op: SC1_OR_IF (147)
    if (_15405 != 0) {
        goto L2; // [19] 32
    }
    // SubProg StringToken pc: 23 op: EQUALS (3)
    _15407 = (_ch_27728 == 9);
    // SubProg StringToken pc: 27 op: NOP1 (159)
    // SubProg StringToken pc: 28 op: WHILE (47)
    if (_15407 == 0)
    {
        DeRef(_15407);
        _15407 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15407);
        _15407 = NOVALUE;
    }
    // SubProg StringToken pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27725 op: 159
    // SubProg StringToken pc: 32 op: STARTLINE (58)

    /** scanner.e:2062			ch = getch()*/
    // SubProg StringToken pc: 34 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 39 op: STARTLINE (58)

    /** scanner.e:2063		end while*/
    // SubProg StringToken pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg StringToken pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27725 op: 159
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
    _15409 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 56 op: CONCAT (15)
    Concat((object_ptr)&_pDelims_27727, _pDelims_27727, _15409);
    DeRefDS(_15409);
    _15409 = NOVALUE;
    // SubProg StringToken pc: 60 op: STARTLINE (58)

    /** scanner.e:2066		gtext = ""*/
    // SubProg StringToken pc: 62 op: ASSIGN (18)
    RefDS(_5);
    DeRefi(_gtext_27730);
    _gtext_27730 = _5;
    // SubProg StringToken pc: 65 op: SEQUENCE_CHECK (97)
    // SubProg StringToken pc: 67 op: STARTLINE (58)

    /** scanner.e:2067		while not find(ch,  pDelims) label "top" do*/
    // SubProg StringToken pc: 69 op: NOP2 (110)
    // SubProg StringToken pc: 71 op: NOPWHILE (158)
L4: // addr: 72 pc: 71 sub: 27725 op: 158
    // SubProg StringToken pc: 72 op: FIND_FROM (176)
    _15411 = find_from(_ch_27728, _pDelims_27727, 1);
    // SubProg StringToken pc: 77 op: NOT_IFW (108)
    if (_15411 != 0)
    goto L5; // [77] 391
    _15411 = NOVALUE;
    // SubProg StringToken pc: 80 op: STARTLINE (58)

    /** scanner.e:2068			if ch = '-' then*/
    // SubProg StringToken pc: 82 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 45)
    goto L6; // [82] 145
    // SubProg StringToken pc: 86 op: STARTLINE (58)

    /** scanner.e:2069				ch = getch()*/
    // SubProg StringToken pc: 88 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 91 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 93 op: STARTLINE (58)

    /** scanner.e:2070				if ch = '-' then*/
    // SubProg StringToken pc: 95 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 45)
    goto L7; // [95] 137
    // SubProg StringToken pc: 99 op: STARTLINE (58)

    /** scanner.e:2071					while not find(ch, {'\n', END_OF_FILE_CHAR}) do*/
    // SubProg StringToken pc: 101 op: NOP2 (110)
    // SubProg StringToken pc: 103 op: NOPWHILE (158)
L8: // addr: 104 pc: 103 sub: 27725 op: 158
    // SubProg StringToken pc: 104 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 106 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 26;
    _15417 = MAKE_SEQ(_1);
    // SubProg StringToken pc: 110 op: FIND_FROM (176)
    _15418 = find_from(_ch_27728, _15417, 1);
    DeRefDS(_15417);
    _15417 = NOVALUE;
    // SubProg StringToken pc: 115 op: NOT_IFW (108)
    if (_15418 != 0)
    goto L5; // [115] 391
    _15418 = NOVALUE;
    // SubProg StringToken pc: 118 op: STARTLINE (58)

    /** scanner.e:2072						ch = getch()*/
    // SubProg StringToken pc: 120 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 123 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
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
L7: // addr: 137 pc: 136 sub: 27725 op: 159
    // SubProg StringToken pc: 137 op: STARTLINE (58)

    /** scanner.e:2076					ungetch()*/
    // SubProg StringToken pc: 139 op: PROC (27)
    _62ungetch();
    // SubProg StringToken pc: 141 op: NOP1 (159)
    // SubProg StringToken pc: 142 op: ELSE (23)
    goto L9; // [142] 373
    // SubProg StringToken pc: 144 op: NOP1 (159)
L6: // addr: 145 pc: 144 sub: 27725 op: 159
    // SubProg StringToken pc: 145 op: STARTLINE (58)

    /** scanner.e:2078			elsif ch = '/' then*/
    // SubProg StringToken pc: 147 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 47)
    goto LA; // [147] 372
    // SubProg StringToken pc: 151 op: STARTLINE (58)

    /** scanner.e:2079				ch = getch()*/
    // SubProg StringToken pc: 153 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 156 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 158 op: STARTLINE (58)

    /** scanner.e:2080				if ch = '*' then*/
    // SubProg StringToken pc: 160 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 42)
    goto LB; // [160] 361
    // SubProg StringToken pc: 164 op: STARTLINE (58)

    /** scanner.e:2081					integer level = 1*/
    // SubProg StringToken pc: 166 op: ASSIGN_I (113)
    _level_27761 = 1;
    // SubProg StringToken pc: 169 op: STARTLINE (58)

    /** scanner.e:2082					while level > 0 do*/
    // SubProg StringToken pc: 171 op: NOP2 (110)
    // SubProg StringToken pc: 173 op: NOPWHILE (158)
LC: // addr: 174 pc: 173 sub: 27725 op: 158
    // SubProg StringToken pc: 174 op: GREATER_IFW_I (124)
    if (_level_27761 <= 0)
    goto LD; // [174] 293
    // SubProg StringToken pc: 178 op: STARTLINE (58)

    /** scanner.e:2083						ch = getch()*/
    // SubProg StringToken pc: 180 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 183 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 185 op: STARTLINE (58)

    /** scanner.e:2084						if ch = '/' then*/
    // SubProg StringToken pc: 187 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 47)
    goto LE; // [187] 221
    // SubProg StringToken pc: 191 op: STARTLINE (58)

    /** scanner.e:2085							ch = getch()*/
    // SubProg StringToken pc: 193 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 196 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 198 op: STARTLINE (58)

    /** scanner.e:2086							if ch = '*' then*/
    // SubProg StringToken pc: 200 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 42)
    goto LF; // [200] 213
    // SubProg StringToken pc: 204 op: STARTLINE (58)

    /** scanner.e:2087								level += 1*/
    // SubProg StringToken pc: 206 op: PLUS1_I (117)
    _level_27761 = _level_27761 + 1;
    // SubProg StringToken pc: 210 op: ELSE (23)
    goto LC; // [210] 174
    // SubProg StringToken pc: 212 op: NOP1 (159)
LF: // addr: 213 pc: 212 sub: 27725 op: 159
    // SubProg StringToken pc: 213 op: STARTLINE (58)

    /** scanner.e:2089								ungetch()*/
    // SubProg StringToken pc: 215 op: PROC (27)
    _62ungetch();
    // SubProg StringToken pc: 217 op: NOP1 (159)
    // SubProg StringToken pc: 218 op: ELSE (23)
    goto LC; // [218] 174
    // SubProg StringToken pc: 220 op: NOP1 (159)
LE: // addr: 221 pc: 220 sub: 27725 op: 159
    // SubProg StringToken pc: 221 op: STARTLINE (58)

    /** scanner.e:2091						elsif ch = '*' then*/
    // SubProg StringToken pc: 223 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 42)
    goto L10; // [223] 257
    // SubProg StringToken pc: 227 op: STARTLINE (58)

    /** scanner.e:2092							ch = getch()*/
    // SubProg StringToken pc: 229 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 232 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 234 op: STARTLINE (58)

    /** scanner.e:2093							if ch = '/' then*/
    // SubProg StringToken pc: 236 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 47)
    goto L11; // [236] 249
    // SubProg StringToken pc: 240 op: STARTLINE (58)

    /** scanner.e:2094								level -= 1*/
    // SubProg StringToken pc: 242 op: MINUS_I (116)
    _level_27761 = _level_27761 - 1;
    // SubProg StringToken pc: 246 op: ELSE (23)
    goto LC; // [246] 174
    // SubProg StringToken pc: 248 op: NOP1 (159)
L11: // addr: 249 pc: 248 sub: 27725 op: 159
    // SubProg StringToken pc: 249 op: STARTLINE (58)

    /** scanner.e:2096								ungetch()*/
    // SubProg StringToken pc: 251 op: PROC (27)
    _62ungetch();
    // SubProg StringToken pc: 253 op: NOP1 (159)
    // SubProg StringToken pc: 254 op: ELSE (23)
    goto LC; // [254] 174
    // SubProg StringToken pc: 256 op: NOP1 (159)
L10: // addr: 257 pc: 256 sub: 27725 op: 159
    // SubProg StringToken pc: 257 op: STARTLINE (58)

    /** scanner.e:2098						elsif ch = '\n' then*/
    // SubProg StringToken pc: 259 op: EQUALS_IFW_I (121)
    if (_ch_27728 != 10)
    goto L12; // [259] 270
    // SubProg StringToken pc: 263 op: STARTLINE (58)

    /** scanner.e:2099							read_line()*/
    // SubProg StringToken pc: 265 op: PROC (27)
    _62read_line();
    // SubProg StringToken pc: 267 op: ELSE (23)
    goto LC; // [267] 174
    // SubProg StringToken pc: 269 op: NOP1 (159)
L12: // addr: 270 pc: 269 sub: 27725 op: 159
    // SubProg StringToken pc: 270 op: STARTLINE (58)

    /** scanner.e:2100						elsif ch = END_OF_FILE_CHAR then*/
    // SubProg StringToken pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg StringToken pc: 274 op: EQUALS_IFW (104)
    if (_ch_27728 != 26)
    goto LC; // [274] 174
    // SubProg StringToken pc: 278 op: STARTLINE (58)

    /** scanner.e:2101							ungetch()*/
    // SubProg StringToken pc: 280 op: PROC (27)
    _62ungetch();
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
LD: // addr: 293 pc: 292 sub: 27725 op: 159
    // SubProg StringToken pc: 293 op: STARTLINE (58)

    /** scanner.e:2105					ch = getch()*/
    // SubProg StringToken pc: 295 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 298 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 300 op: STARTLINE (58)

    /** scanner.e:2106					if length(gtext) = 0 then*/
    // SubProg StringToken pc: 302 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27730)){
            _15437 = SEQ_PTR(_gtext_27730)->length;
    }
    else {
        _15437 = 1;
    }
    // SubProg StringToken pc: 305 op: EQUALS_IFW_I (121)
    if (_15437 != 0)
    goto L13; // [305] 350
    // SubProg StringToken pc: 309 op: STARTLINE (58)

    /** scanner.e:2107						while ch = ' ' or ch = '\t' do*/
    // SubProg StringToken pc: 311 op: NOP2 (110)
    // SubProg StringToken pc: 313 op: NOPWHILE (158)
L14: // addr: 314 pc: 313 sub: 27725 op: 158
    // SubProg StringToken pc: 314 op: EQUALS (3)
    _15439 = (_ch_27728 == 32);
    // SubProg StringToken pc: 318 op: SC1_OR_IF (147)
    if (_15439 != 0) {
        goto L15; // [318] 331
    }
    // SubProg StringToken pc: 322 op: EQUALS (3)
    _15441 = (_ch_27728 == 9);
    // SubProg StringToken pc: 326 op: NOP1 (159)
    // SubProg StringToken pc: 327 op: WHILE (47)
    if (_15441 == 0)
    {
        DeRef(_15441);
        _15441 = NOVALUE;
        goto L16; // [327] 343
    }
    else{
        DeRef(_15441);
        _15441 = NOVALUE;
    }
    // SubProg StringToken pc: 330 op: NOP1 (159)
L15: // addr: 331 pc: 330 sub: 27725 op: 159
    // SubProg StringToken pc: 331 op: STARTLINE (58)

    /** scanner.e:2108							ch = getch()*/
    // SubProg StringToken pc: 333 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 336 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 338 op: STARTLINE (58)

    /** scanner.e:2109						end while*/
    // SubProg StringToken pc: 340 op: ENDWHILE (22)
    goto L14; // [340] 314
    // SubProg StringToken pc: 342 op: NOP1 (159)
L16: // addr: 343 pc: 342 sub: 27725 op: 159
    // SubProg StringToken pc: 343 op: STARTLINE (58)

    /** scanner.e:2110						continue "top"*/
    // SubProg StringToken pc: 345 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27761
    // SubProg StringToken pc: 347 op: ELSE (23)
    goto L4; // [347] 72
    // SubProg StringToken pc: 349 op: NOP1 (159)
L13: // addr: 350 pc: 349 sub: 27725 op: 159
    // SubProg StringToken pc: 350 op: STARTLINE (58)

    /** scanner.e:2112					exit*/
    // SubProg StringToken pc: 352 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27761
    // SubProg StringToken pc: 354 op: EXIT (61)
    goto L5; // [354] 391
    // SubProg StringToken pc: 356 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var level_27761
    // SubProg StringToken pc: 358 op: ELSE (23)
    goto L17; // [358] 371
    // SubProg StringToken pc: 360 op: NOP1 (159)
LB: // addr: 361 pc: 360 sub: 27725 op: 159
    // SubProg StringToken pc: 361 op: STARTLINE (58)

    /** scanner.e:2115					ungetch()*/
    // SubProg StringToken pc: 363 op: PROC (27)
    _62ungetch();
    // SubProg StringToken pc: 365 op: STARTLINE (58)

    /** scanner.e:2116					ch = '/'*/
    // SubProg StringToken pc: 367 op: ASSIGN_I (113)
    _ch_27728 = 47;
    // SubProg StringToken pc: 370 op: NOP1 (159)
L17: // addr: 371 pc: 370 sub: 27725 op: 159
    // SubProg StringToken pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 27725 op: 159
    // SubProg StringToken pc: 372 op: NOP1 (159)
L9: // addr: 373 pc: 372 sub: 27725 op: 159
    // SubProg StringToken pc: 373 op: STARTLINE (58)

    /** scanner.e:2119			gtext &= ch*/
    // SubProg StringToken pc: 375 op: CONCAT (15)
    Append(&_gtext_27730, _gtext_27730, _ch_27728);
    // SubProg StringToken pc: 379 op: STARTLINE (58)

    /** scanner.e:2120			ch = getch()*/
    // SubProg StringToken pc: 381 op: PROC (27)
    _ch_27728 = _62getch();
    // SubProg StringToken pc: 384 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27728)) {
        _1 = (object)(DBL_PTR(_ch_27728)->dbl);
        DeRefDS(_ch_27728);
        _ch_27728 = _1;
    }
    // SubProg StringToken pc: 386 op: STARTLINE (58)

    /** scanner.e:2121		end while*/
    // SubProg StringToken pc: 388 op: ENDWHILE (22)
    goto L4; // [388] 72
    // SubProg StringToken pc: 390 op: NOP1 (159)
L5: // addr: 391 pc: 390 sub: 27725 op: 159
    // SubProg StringToken pc: 391 op: STARTLINE (58)

    /** scanner.e:2123		ungetch() -- put back end-word token.*/
    // SubProg StringToken pc: 393 op: PROC (27)
    _62ungetch();
    // SubProg StringToken pc: 395 op: STARTLINE (58)

    /** scanner.e:2125		return gtext*/
    // SubProg StringToken pc: 397 op: RETURNF (28)

// Exiting block BLOCK: StringToken

// block var pDelims_27727
    DeRefDSi(_pDelims_27727);

// block var ch_27728
    DeRef(_15405);
    _15405 = NOVALUE;
    DeRef(_15439);
    _15439 = NOVALUE;
    return _gtext_27730;
    // SubProg StringToken pc: 401 op: BADRETURNF (43)
    ;
}


void _62IncludeScan(object _is_public_27798)
{
    object _ch_27799 = NOVALUE;
    object _gtext_27800 = NOVALUE;
    object _s_27802 = NOVALUE;
    object _31704 = NOVALUE; // 63912 31704
// skipping _15510  name type: 0
// skipping _15509  name type: 0
// skipping _15508  name type: 0
// skipping _15507  name type: 0
// skipping _15506  name type: 0
// skipping _15505  name type: 0
    object _15504 = NOVALUE; // 27899 15504
    object _15503 = NOVALUE; // 27898 15503
// skipping _15502  name type: 0
    object _15501 = NOVALUE; // 27888 15501
// skipping _15500  name type: 0
    object _15499 = NOVALUE; // 27884 15499
    object _15498 = NOVALUE; // 27882 15498
// skipping _15497  name type: 0
// skipping _15496  name type: 0
// skipping _15495  name type: 0
// skipping _15494  name type: 0
    object _15493 = NOVALUE; // 27873 15493
// skipping _15492  name type: 0
// skipping _15491  name type: 0
    object _15490 = NOVALUE; // 27869 15490
// skipping _15489  name type: 0
    object _15488 = NOVALUE; // 27867 15488
    object _15487 = NOVALUE; // 27865 15487
// skipping _15486  name type: 0
    object _15485 = NOVALUE; // 27862 15485
// skipping _15484  name type: 0
    object _15483 = NOVALUE; // 27860 15483
// skipping _15482  name type: 0
    object _15481 = NOVALUE; // 27857 15481
// skipping _15480  name type: 0
    object _15479 = NOVALUE; // 27855 15479
// skipping _15478  name type: 0
// skipping _15477  name type: 0
// skipping _15476  name type: 0
// skipping _15475  name type: 0
// skipping _15474  name type: 0
    object _15473 = NOVALUE; // 27846 15473
// skipping _15472  name type: 0
    object _15471 = NOVALUE; // 27844 15471
// skipping _15470  name type: 0
// skipping _15467  name type: 0
    object _15466 = NOVALUE; // 27836 15466
// skipping _15465  name type: 0
// skipping _15464  name type: 0
// skipping _15463  name type: 0
    object _15462 = NOVALUE; // 27831 15462
    object _15461 = NOVALUE; // 27830 15461
// skipping _15460  name type: 0
// skipping _15459  name type: 0
// skipping _15458  name type: 0
// skipping _15457  name type: 0
    object _15456 = NOVALUE; // 27819 15456
// skipping _15455  name type: 0
// skipping _15454  name type: 0
    object _15453 = NOVALUE; // 27815 15453
    object _15452 = NOVALUE; // 27814 15452
// skipping _15451  name type: 0
// skipping _15450  name type: 0
// skipping _15449  name type: 0
    object _15448 = NOVALUE; // 27807 15448
// skipping _15447  name type: 0
    object _15446 = NOVALUE; // 27805 15446
// skipping _15445  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg IncludeScan pc: 1 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 3 op: STARTLINE (58)

    /** scanner.e:2145		ch = getch()*/
    // SubProg IncludeScan pc: 5 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 8 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 10 op: STARTLINE (58)

    /** scanner.e:2146		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 12 op: NOP2 (110)
    // SubProg IncludeScan pc: 14 op: NOPWHILE (158)
L1: // addr: 15 pc: 14 sub: 27796 op: 158
    // SubProg IncludeScan pc: 15 op: EQUALS (3)
    _15446 = (_ch_27799 == 32);
    // SubProg IncludeScan pc: 19 op: SC1_OR_IF (147)
    if (_15446 != 0) {
        goto L2; // [19] 32
    }
    // SubProg IncludeScan pc: 23 op: EQUALS (3)
    _15448 = (_ch_27799 == 9);
    // SubProg IncludeScan pc: 27 op: NOP1 (159)
    // SubProg IncludeScan pc: 28 op: WHILE (47)
    if (_15448 == 0)
    {
        DeRef(_15448);
        _15448 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15448);
        _15448 = NOVALUE;
    }
    // SubProg IncludeScan pc: 31 op: NOP1 (159)
L2: // addr: 32 pc: 31 sub: 27796 op: 159
    // SubProg IncludeScan pc: 32 op: STARTLINE (58)

    /** scanner.e:2147			ch = getch()*/
    // SubProg IncludeScan pc: 34 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 37 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 39 op: STARTLINE (58)

    /** scanner.e:2148		end while*/
    // SubProg IncludeScan pc: 41 op: ENDWHILE (22)
    goto L1; // [41] 15
    // SubProg IncludeScan pc: 43 op: NOP1 (159)
L3: // addr: 44 pc: 43 sub: 27796 op: 159
    // SubProg IncludeScan pc: 44 op: STARTLINE (58)

    /** scanner.e:2151		gtext = ""*/
    // SubProg IncludeScan pc: 46 op: ASSIGN (18)
    RefDS(_5);
    DeRef(_gtext_27800);
    _gtext_27800 = _5;
    // SubProg IncludeScan pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 51 op: STARTLINE (58)

    /** scanner.e:2153		if ch = '"' then*/
    // SubProg IncludeScan pc: 53 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 34)
    goto L4; // [53] 141
    // SubProg IncludeScan pc: 57 op: STARTLINE (58)

    /** scanner.e:2155			ch = getch()*/
    // SubProg IncludeScan pc: 59 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 62 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 64 op: STARTLINE (58)

    /** scanner.e:2156			while not find(ch, {'\n', '\r', '"', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 66 op: NOP2 (110)
    // SubProg IncludeScan pc: 68 op: NOPWHILE (158)
L5: // addr: 69 pc: 68 sub: 27796 op: 158
    // SubProg IncludeScan pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 34;
    ((intptr_t*)_2)[4] = 26;
    _15452 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 78 op: FIND_FROM (176)
    _15453 = find_from(_ch_27799, _15452, 1);
    DeRefDS(_15452);
    _15452 = NOVALUE;
    // SubProg IncludeScan pc: 83 op: NOT_IFW (108)
    if (_15453 != 0)
    goto L6; // [83] 124
    _15453 = NOVALUE;
    // SubProg IncludeScan pc: 86 op: STARTLINE (58)

    /** scanner.e:2157				if ch = '\\' then*/
    // SubProg IncludeScan pc: 88 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 92)
    goto L7; // [88] 105
    // SubProg IncludeScan pc: 92 op: STARTLINE (58)

    /** scanner.e:2158					gtext &= EscapeChar('"')*/
    // SubProg IncludeScan pc: 94 op: PROC (27)
    _15456 = _62EscapeChar(34);
    // SubProg IncludeScan pc: 98 op: CONCAT (15)
    if (IS_SEQUENCE(_gtext_27800) && IS_ATOM(_15456)) {
        Ref(_15456);
        Append(&_gtext_27800, _gtext_27800, _15456);
    }
    else if (IS_ATOM(_gtext_27800) && IS_SEQUENCE(_15456)) {
    }
    else {
        Concat((object_ptr)&_gtext_27800, _gtext_27800, _15456);
    }
    DeRef(_15456);
    _15456 = NOVALUE;
    // SubProg IncludeScan pc: 102 op: ELSE (23)
    goto L8; // [102] 112
    // SubProg IncludeScan pc: 104 op: NOP1 (159)
L7: // addr: 105 pc: 104 sub: 27796 op: 159
    // SubProg IncludeScan pc: 105 op: STARTLINE (58)

    /** scanner.e:2160					gtext &= ch*/
    // SubProg IncludeScan pc: 107 op: CONCAT (15)
    Append(&_gtext_27800, _gtext_27800, _ch_27799);
    // SubProg IncludeScan pc: 111 op: NOP1 (159)
L8: // addr: 112 pc: 111 sub: 27796 op: 159
    // SubProg IncludeScan pc: 112 op: STARTLINE (58)

    /** scanner.e:2162				ch = getch()*/
    // SubProg IncludeScan pc: 114 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 117 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 119 op: STARTLINE (58)

    /** scanner.e:2163			end while*/
    // SubProg IncludeScan pc: 121 op: ENDWHILE (22)
    goto L5; // [121] 69
    // SubProg IncludeScan pc: 123 op: NOP1 (159)
L6: // addr: 124 pc: 123 sub: 27796 op: 159
    // SubProg IncludeScan pc: 124 op: STARTLINE (58)

    /** scanner.e:2164			if ch != '"' then*/
    // SubProg IncludeScan pc: 126 op: NOTEQ_IFW_I (122)
    if (_ch_27799 == 34)
    goto L9; // [126] 187
    // SubProg IncludeScan pc: 130 op: STARTLINE (58)

    /** scanner.e:2165				CompileErr(115)*/
    // SubProg IncludeScan pc: 132 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(115, _21933, 0);
    // SubProg IncludeScan pc: 137 op: NOP1 (159)
    // SubProg IncludeScan pc: 138 op: ELSE (23)
    goto L9; // [138] 187
    // SubProg IncludeScan pc: 140 op: NOP1 (159)
L4: // addr: 141 pc: 140 sub: 27796 op: 159
    // SubProg IncludeScan pc: 141 op: STARTLINE (58)

    /** scanner.e:2169			while not find(ch, {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}) do*/
    // SubProg IncludeScan pc: 143 op: NOP2 (110)
    // SubProg IncludeScan pc: 145 op: NOPWHILE (158)
LA: // addr: 146 pc: 145 sub: 27796 op: 158
    // SubProg IncludeScan pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 148 op: RIGHT_BRACE_N (31)
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15461 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 156 op: FIND_FROM (176)
    _15462 = find_from(_ch_27799, _15461, 1);
    DeRefDS(_15461);
    _15461 = NOVALUE;
    // SubProg IncludeScan pc: 161 op: NOT_IFW (108)
    if (_15462 != 0)
    goto LB; // [161] 182
    _15462 = NOVALUE;
    // SubProg IncludeScan pc: 164 op: STARTLINE (58)

    /** scanner.e:2170				gtext &= ch*/
    // SubProg IncludeScan pc: 166 op: CONCAT (15)
    Append(&_gtext_27800, _gtext_27800, _ch_27799);
    // SubProg IncludeScan pc: 170 op: STARTLINE (58)

    /** scanner.e:2171				ch = getch()*/
    // SubProg IncludeScan pc: 172 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 177 op: STARTLINE (58)

    /** scanner.e:2172			end while*/
    // SubProg IncludeScan pc: 179 op: ENDWHILE (22)
    goto LA; // [179] 146
    // SubProg IncludeScan pc: 181 op: NOP1 (159)
LB: // addr: 182 pc: 181 sub: 27796 op: 159
    // SubProg IncludeScan pc: 182 op: STARTLINE (58)

    /** scanner.e:2173			ungetch()*/
    // SubProg IncludeScan pc: 184 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 186 op: NOP1 (159)
L9: // addr: 187 pc: 186 sub: 27796 op: 159
    // SubProg IncludeScan pc: 187 op: STARTLINE (58)

    /** scanner.e:2176		if length(gtext) = 0 then*/
    // SubProg IncludeScan pc: 189 op: LENGTH (42)
    if (IS_SEQUENCE(_gtext_27800)){
            _15466 = SEQ_PTR(_gtext_27800)->length;
    }
    else {
        _15466 = 1;
    }
    // SubProg IncludeScan pc: 192 op: EQUALS_IFW_I (121)
    if (_15466 != 0)
    goto LC; // [192] 204
    // SubProg IncludeScan pc: 196 op: STARTLINE (58)

    /** scanner.e:2177			CompileErr(95)*/
    // SubProg IncludeScan pc: 198 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(95, _21933, 0);
    // SubProg IncludeScan pc: 203 op: NOP1 (159)
LC: // addr: 204 pc: 203 sub: 27796 op: 159
    // SubProg IncludeScan pc: 204 op: STARTLINE (58)

    /** scanner.e:2181		ifdef WINDOWS then*/
    // SubProg IncludeScan pc: 206 op: STARTLINE (58)

    /** scanner.e:2184			new_include_name = gtext*/
    // SubProg IncludeScan pc: 208 op: ASSIGN (18)
    RefDS(_gtext_27800);
    DeRef(_36new_include_name_16558);
    _36new_include_name_16558 = _gtext_27800;
    // SubProg IncludeScan pc: 211 op: SEQUENCE_CHECK (97)
    // SubProg IncludeScan pc: 213 op: STARTLINE (58)

    /** scanner.e:2188		ch = getch()*/
    // SubProg IncludeScan pc: 215 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 218 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 220 op: STARTLINE (58)

    /** scanner.e:2189		while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 222 op: NOP2 (110)
    // SubProg IncludeScan pc: 224 op: NOPWHILE (158)
LD: // addr: 225 pc: 224 sub: 27796 op: 158
    // SubProg IncludeScan pc: 225 op: EQUALS (3)
    _15471 = (_ch_27799 == 32);
    // SubProg IncludeScan pc: 229 op: SC1_OR_IF (147)
    if (_15471 != 0) {
        goto LE; // [229] 242
    }
    // SubProg IncludeScan pc: 233 op: EQUALS (3)
    _15473 = (_ch_27799 == 9);
    // SubProg IncludeScan pc: 237 op: NOP1 (159)
    // SubProg IncludeScan pc: 238 op: WHILE (47)
    if (_15473 == 0)
    {
        DeRef(_15473);
        _15473 = NOVALUE;
        goto LF; // [238] 254
    }
    else{
        DeRef(_15473);
        _15473 = NOVALUE;
    }
    // SubProg IncludeScan pc: 241 op: NOP1 (159)
LE: // addr: 242 pc: 241 sub: 27796 op: 159
    // SubProg IncludeScan pc: 242 op: STARTLINE (58)

    /** scanner.e:2190			ch = getch()*/
    // SubProg IncludeScan pc: 244 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 247 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 249 op: STARTLINE (58)

    /** scanner.e:2191		end while*/
    // SubProg IncludeScan pc: 251 op: ENDWHILE (22)
    goto LD; // [251] 225
    // SubProg IncludeScan pc: 253 op: NOP1 (159)
LF: // addr: 254 pc: 253 sub: 27796 op: 159
    // SubProg IncludeScan pc: 254 op: STARTLINE (58)

    /** scanner.e:2193		new_include_space = 0*/
    // SubProg IncludeScan pc: 256 op: ASSIGN (18)
    _62new_include_space_25177 = 0;
    // SubProg IncludeScan pc: 259 op: INTEGER_CHECK (96)
    // SubProg IncludeScan pc: 261 op: STARTLINE (58)

    /** scanner.e:2195		if ch = 'a' then*/
    // SubProg IncludeScan pc: 263 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 97)
    goto L10; // [263] 520
    // SubProg IncludeScan pc: 267 op: STARTLINE (58)

    /** scanner.e:2197			ch = getch()*/
    // SubProg IncludeScan pc: 269 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 272 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 274 op: STARTLINE (58)

    /** scanner.e:2198			if ch = 's' then*/
    // SubProg IncludeScan pc: 276 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 115)
    goto L11; // [276] 509
    // SubProg IncludeScan pc: 280 op: STARTLINE (58)

    /** scanner.e:2199				ch = getch()*/
    // SubProg IncludeScan pc: 282 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 285 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 287 op: STARTLINE (58)

    /** scanner.e:2200				if ch = ' ' or ch = '\t' then*/
    // SubProg IncludeScan pc: 289 op: EQUALS (3)
    _15479 = (_ch_27799 == 32);
    // SubProg IncludeScan pc: 293 op: SC1_OR_IF (147)
    if (_15479 != 0) {
        goto L12; // [293] 306
    }
    // SubProg IncludeScan pc: 297 op: EQUALS (3)
    _15481 = (_ch_27799 == 9);
    // SubProg IncludeScan pc: 301 op: NOP1 (159)
    // SubProg IncludeScan pc: 302 op: IF (20)
    if (_15481 == 0)
    {
        DeRef(_15481);
        _15481 = NOVALUE;
        goto L13; // [302] 498
    }
    else{
        DeRef(_15481);
        _15481 = NOVALUE;
    }
    // SubProg IncludeScan pc: 305 op: NOP1 (159)
L12: // addr: 306 pc: 305 sub: 27796 op: 159
    // SubProg IncludeScan pc: 306 op: STARTLINE (58)

    /** scanner.e:2203					ch = getch()*/
    // SubProg IncludeScan pc: 308 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 311 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 313 op: STARTLINE (58)

    /** scanner.e:2204					while ch = ' ' or ch = '\t' do*/
    // SubProg IncludeScan pc: 315 op: NOP2 (110)
    // SubProg IncludeScan pc: 317 op: NOPWHILE (158)
L14: // addr: 318 pc: 317 sub: 27796 op: 158
    // SubProg IncludeScan pc: 318 op: EQUALS (3)
    _15483 = (_ch_27799 == 32);
    // SubProg IncludeScan pc: 322 op: SC1_OR_IF (147)
    if (_15483 != 0) {
        goto L15; // [322] 335
    }
    // SubProg IncludeScan pc: 326 op: EQUALS (3)
    _15485 = (_ch_27799 == 9);
    // SubProg IncludeScan pc: 330 op: NOP1 (159)
    // SubProg IncludeScan pc: 331 op: WHILE (47)
    if (_15485 == 0)
    {
        DeRef(_15485);
        _15485 = NOVALUE;
        goto L16; // [331] 347
    }
    else{
        DeRef(_15485);
        _15485 = NOVALUE;
    }
    // SubProg IncludeScan pc: 334 op: NOP1 (159)
L15: // addr: 335 pc: 334 sub: 27796 op: 159
    // SubProg IncludeScan pc: 335 op: STARTLINE (58)

    /** scanner.e:2205						ch = getch()*/
    // SubProg IncludeScan pc: 337 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 340 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 342 op: STARTLINE (58)

    /** scanner.e:2206					end while*/
    // SubProg IncludeScan pc: 344 op: ENDWHILE (22)
    goto L14; // [344] 318
    // SubProg IncludeScan pc: 346 op: NOP1 (159)
L16: // addr: 347 pc: 346 sub: 27796 op: 159
    // SubProg IncludeScan pc: 347 op: STARTLINE (58)

    /** scanner.e:2209					if char_class[ch] = LETTER or ch = '_' then*/
    // SubProg IncludeScan pc: 349 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 351 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62char_class_25186);
    _15487 = (object)*(((s1_ptr)_2)->base + _ch_27799);
    // SubProg IncludeScan pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 357 op: EQUALS (3)
    _15488 = (_15487 == -2);
    _15487 = NOVALUE;
    // SubProg IncludeScan pc: 361 op: SC1_OR_IF (147)
    if (_15488 != 0) {
        goto L17; // [361] 374
    }
    // SubProg IncludeScan pc: 365 op: EQUALS (3)
    _15490 = (_ch_27799 == 95);
    // SubProg IncludeScan pc: 369 op: NOP1 (159)
    // SubProg IncludeScan pc: 370 op: IF (20)
    if (_15490 == 0)
    {
        DeRef(_15490);
        _15490 = NOVALUE;
        goto L18; // [370] 487
    }
    else{
        DeRef(_15490);
        _15490 = NOVALUE;
    }
    // SubProg IncludeScan pc: 373 op: NOP1 (159)
L17: // addr: 374 pc: 373 sub: 27796 op: 159
    // SubProg IncludeScan pc: 374 op: STARTLINE (58)

    /** scanner.e:2210						gtext = {ch}*/
    // SubProg IncludeScan pc: 376 op: RIGHT_BRACE_N (31)
    _0 = _gtext_27800;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_27799;
    _gtext_27800 = MAKE_SEQ(_1);
    DeRef(_0);
    // SubProg IncludeScan pc: 380 op: STARTLINE (58)

    /** scanner.e:2211						ch = getch()*/
    // SubProg IncludeScan pc: 382 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 385 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 387 op: STARTLINE (58)

    /** scanner.e:2212						while id_char[ch] = TRUE do*/
    // SubProg IncludeScan pc: 389 op: NOP2 (110)
    // SubProg IncludeScan pc: 391 op: NOPWHILE (158)
L19: // addr: 392 pc: 391 sub: 27796 op: 158
    // SubProg IncludeScan pc: 392 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 394 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_62id_char_25187);
    _15493 = (object)*(((s1_ptr)_2)->base + _ch_27799);
    // SubProg IncludeScan pc: 398 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 400 op: EQUALS_IFW (104)
    if (_15493 != _13TRUE_452)
    goto L1A; // [400] 422
    // SubProg IncludeScan pc: 404 op: STARTLINE (58)

    /** scanner.e:2213							gtext &= ch*/
    // SubProg IncludeScan pc: 406 op: CONCAT (15)
    Append(&_gtext_27800, _gtext_27800, _ch_27799);
    // SubProg IncludeScan pc: 410 op: STARTLINE (58)

    /** scanner.e:2214							ch = getch()*/
    // SubProg IncludeScan pc: 412 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 415 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 417 op: STARTLINE (58)

    /** scanner.e:2215						end while*/
    // SubProg IncludeScan pc: 419 op: ENDWHILE (22)
    goto L19; // [419] 392
    // SubProg IncludeScan pc: 421 op: NOP1 (159)
L1A: // addr: 422 pc: 421 sub: 27796 op: 159
    // SubProg IncludeScan pc: 422 op: STARTLINE (58)

    /** scanner.e:2217						ungetch()*/
    // SubProg IncludeScan pc: 424 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 426 op: STARTLINE (58)

    /** scanner.e:2218						s = keyfind(gtext, -1, , 1)*/
    // SubProg IncludeScan pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 430 op: PRIVATE_INIT_CHECK (30)
    // SubProg IncludeScan pc: 432 op: PROC (27)
    RefDS(_gtext_27800);
    _31704 = _54hashfn(_gtext_27800);
    // SubProg IncludeScan pc: 436 op: PROC (27)
    RefDS(_gtext_27800);
    _0 = _s_27802;
    _s_27802 = _54keyfind(_gtext_27800, -1, _36current_file_no_16436, 1, _31704);
    DeRef(_0);
    _31704 = NOVALUE;
    // SubProg IncludeScan pc: 444 op: STARTLINE (58)

    /** scanner.e:2219						if not find(s[T_ID], ID_TOKS) then*/
    // SubProg IncludeScan pc: 446 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 448 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27802);
    _15498 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg IncludeScan pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 454 op: FIND_FROM (176)
    _15499 = find_from(_15498, _38ID_TOKS_16050, 1);
    _15498 = NOVALUE;
    // SubProg IncludeScan pc: 459 op: NOT_IFW (108)
    if (_15499 != 0)
    goto L1B; // [459] 470
    _15499 = NOVALUE;
    // SubProg IncludeScan pc: 462 op: STARTLINE (58)

    /** scanner.e:2220							CompileErr(36)*/
    // SubProg IncludeScan pc: 464 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(36, _21933, 0);
    // SubProg IncludeScan pc: 469 op: NOP1 (159)
L1B: // addr: 470 pc: 469 sub: 27796 op: 159
    // SubProg IncludeScan pc: 470 op: STARTLINE (58)

    /** scanner.e:2222						new_include_space = NameSpace_declaration(s[T_SYM])*/
    // SubProg IncludeScan pc: 472 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 474 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_s_27802);
    _15501 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg IncludeScan pc: 478 op: PROC (27)
    Ref(_15501);
    _0 = _62NameSpace_declaration(_15501);
    _62new_include_space_25177 = _0;
    _15501 = NOVALUE;
    // SubProg IncludeScan pc: 482 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_62new_include_space_25177)) {
        _1 = (object)(DBL_PTR(_62new_include_space_25177)->dbl);
        DeRefDS(_62new_include_space_25177);
        _62new_include_space_25177 = _1;
    }
    // SubProg IncludeScan pc: 484 op: ELSE (23)
    goto L1C; // [484] 629
    // SubProg IncludeScan pc: 486 op: NOP1 (159)
L18: // addr: 487 pc: 486 sub: 27796 op: 159
    // SubProg IncludeScan pc: 487 op: STARTLINE (58)

    /** scanner.e:2224						CompileErr(113)*/
    // SubProg IncludeScan pc: 489 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(113, _21933, 0);
    // SubProg IncludeScan pc: 494 op: NOP1 (159)
    // SubProg IncludeScan pc: 495 op: ELSE (23)
    goto L1C; // [495] 629
    // SubProg IncludeScan pc: 497 op: NOP1 (159)
L13: // addr: 498 pc: 497 sub: 27796 op: 159
    // SubProg IncludeScan pc: 498 op: STARTLINE (58)

    /** scanner.e:2227					CompileErr(100)*/
    // SubProg IncludeScan pc: 500 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(100, _21933, 0);
    // SubProg IncludeScan pc: 505 op: NOP1 (159)
    // SubProg IncludeScan pc: 506 op: ELSE (23)
    goto L1C; // [506] 629
    // SubProg IncludeScan pc: 508 op: NOP1 (159)
L11: // addr: 509 pc: 508 sub: 27796 op: 159
    // SubProg IncludeScan pc: 509 op: STARTLINE (58)

    /** scanner.e:2230				CompileErr(100)*/
    // SubProg IncludeScan pc: 511 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(100, _21933, 0);
    // SubProg IncludeScan pc: 516 op: NOP1 (159)
    // SubProg IncludeScan pc: 517 op: ELSE (23)
    goto L1C; // [517] 629
    // SubProg IncludeScan pc: 519 op: NOP1 (159)
L10: // addr: 520 pc: 519 sub: 27796 op: 159
    // SubProg IncludeScan pc: 520 op: STARTLINE (58)

    /** scanner.e:2233		elsif find(ch, {'\n', '\r', END_OF_FILE_CHAR}) then*/
    // SubProg IncludeScan pc: 522 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 524 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 26;
    _15503 = MAKE_SEQ(_1);
    // SubProg IncludeScan pc: 530 op: FIND_FROM (176)
    _15504 = find_from(_ch_27799, _15503, 1);
    DeRefDS(_15503);
    _15503 = NOVALUE;
    // SubProg IncludeScan pc: 535 op: IF (20)
    if (_15504 == 0)
    {
        _15504 = NOVALUE;
        goto L1D; // [535] 545
    }
    else{
        _15504 = NOVALUE;
    }
    // SubProg IncludeScan pc: 538 op: STARTLINE (58)

    /** scanner.e:2234			ungetch()*/
    // SubProg IncludeScan pc: 540 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 542 op: ELSE (23)
    goto L1C; // [542] 629
    // SubProg IncludeScan pc: 544 op: NOP1 (159)
L1D: // addr: 545 pc: 544 sub: 27796 op: 159
    // SubProg IncludeScan pc: 545 op: STARTLINE (58)

    /** scanner.e:2236		elsif ch = '-' then*/
    // SubProg IncludeScan pc: 547 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 45)
    goto L1E; // [547] 583
    // SubProg IncludeScan pc: 551 op: STARTLINE (58)

    /** scanner.e:2237			ch = getch()*/
    // SubProg IncludeScan pc: 553 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 556 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 558 op: STARTLINE (58)

    /** scanner.e:2238			if ch != '-' then*/
    // SubProg IncludeScan pc: 560 op: NOTEQ_IFW_I (122)
    if (_ch_27799 == 45)
    goto L1F; // [560] 572
    // SubProg IncludeScan pc: 564 op: STARTLINE (58)

    /** scanner.e:2239				CompileErr(100)*/
    // SubProg IncludeScan pc: 566 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(100, _21933, 0);
    // SubProg IncludeScan pc: 571 op: NOP1 (159)
L1F: // addr: 572 pc: 571 sub: 27796 op: 159
    // SubProg IncludeScan pc: 572 op: STARTLINE (58)

    /** scanner.e:2241			ungetch()*/
    // SubProg IncludeScan pc: 574 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 576 op: STARTLINE (58)

    /** scanner.e:2242			ungetch()*/
    // SubProg IncludeScan pc: 578 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 580 op: ELSE (23)
    goto L1C; // [580] 629
    // SubProg IncludeScan pc: 582 op: NOP1 (159)
L1E: // addr: 583 pc: 582 sub: 27796 op: 159
    // SubProg IncludeScan pc: 583 op: STARTLINE (58)

    /** scanner.e:2244		elsif ch = '/' then*/
    // SubProg IncludeScan pc: 585 op: EQUALS_IFW_I (121)
    if (_ch_27799 != 47)
    goto L20; // [585] 621
    // SubProg IncludeScan pc: 589 op: STARTLINE (58)

    /** scanner.e:2245			ch = getch()*/
    // SubProg IncludeScan pc: 591 op: PROC (27)
    _ch_27799 = _62getch();
    // SubProg IncludeScan pc: 594 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_ch_27799)) {
        _1 = (object)(DBL_PTR(_ch_27799)->dbl);
        DeRefDS(_ch_27799);
        _ch_27799 = _1;
    }
    // SubProg IncludeScan pc: 596 op: STARTLINE (58)

    /** scanner.e:2246			if ch != '*' then*/
    // SubProg IncludeScan pc: 598 op: NOTEQ_IFW_I (122)
    if (_ch_27799 == 42)
    goto L21; // [598] 610
    // SubProg IncludeScan pc: 602 op: STARTLINE (58)

    /** scanner.e:2247				CompileErr(100)*/
    // SubProg IncludeScan pc: 604 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(100, _21933, 0);
    // SubProg IncludeScan pc: 609 op: NOP1 (159)
L21: // addr: 610 pc: 609 sub: 27796 op: 159
    // SubProg IncludeScan pc: 610 op: STARTLINE (58)

    /** scanner.e:2249			ungetch()*/
    // SubProg IncludeScan pc: 612 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 614 op: STARTLINE (58)

    /** scanner.e:2250			ungetch()*/
    // SubProg IncludeScan pc: 616 op: PROC (27)
    _62ungetch();
    // SubProg IncludeScan pc: 618 op: ELSE (23)
    goto L1C; // [618] 629
    // SubProg IncludeScan pc: 620 op: NOP1 (159)
L20: // addr: 621 pc: 620 sub: 27796 op: 159
    // SubProg IncludeScan pc: 621 op: STARTLINE (58)

    /** scanner.e:2253			CompileErr(100)*/
    // SubProg IncludeScan pc: 623 op: PROC (27)
    RefDS(_21933);
    _50CompileErr(100, _21933, 0);
    // SubProg IncludeScan pc: 628 op: NOP1 (159)
L1C: // addr: 629 pc: 628 sub: 27796 op: 159
    // SubProg IncludeScan pc: 629 op: STARTLINE (58)

    /** scanner.e:2256		start_include = TRUE -- let scanner know*/
    // SubProg IncludeScan pc: 631 op: GLOBAL_INIT_CHECK (109)
    // SubProg IncludeScan pc: 633 op: ASSIGN (18)
    _62start_include_25179 = _13TRUE_452;
    // SubProg IncludeScan pc: 636 op: STARTLINE (58)

    /** scanner.e:2257		public_include = is_public*/
    // SubProg IncludeScan pc: 638 op: ASSIGN (18)
    _62public_include_25182 = _is_public_27798;
    // SubProg IncludeScan pc: 641 op: STARTLINE (58)

    /** scanner.e:2258	end procedure*/
    // SubProg IncludeScan pc: 643 op: RETURNP (29)

// Exiting block BLOCK: IncludeScan

// block var is_public_27798

// block var ch_27799

// block var gtext_27800
    DeRef(_gtext_27800);

// block var s_27802
    DeRef(_s_27802);
    DeRef(_15446);
    _15446 = NOVALUE;
    DeRef(_15488);
    _15488 = NOVALUE;
    DeRef(_15483);
    _15483 = NOVALUE;
    DeRef(_15479);
    _15479 = NOVALUE;
    _15493 = NOVALUE;
    DeRef(_15471);
    _15471 = NOVALUE;
    return;
    // SubProg IncludeScan pc: 646 op: BADRETURNF (43)
    ;
}


void _62main_file()
{
    object _15513 = NOVALUE; // 27922 15513
    object _15512 = NOVALUE; // 27920 15512
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
    _15513 = (_65top_level_block_24749 == -1);
    // SubProg main_file pc: 15 op: NOP1 (159)
    // SubProg main_file pc: 16 op: IF (20)
    if (_15513 == 0)
    {
        DeRef(_15513);
        _15513 = NOVALUE;
        goto L1; // [16] 29
    }
    else{
        DeRef(_15513);
        _15513 = NOVALUE;
    }
    // SubProg main_file pc: 19 op: STARTLINE (58)

    /** scanner.e:2272			top_level_block = current_block*/
    // SubProg main_file pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg main_file pc: 23 op: ASSIGN (18)
    _65top_level_block_24749 = _65current_block_24748;
    // SubProg main_file pc: 26 op: INTEGER_CHECK (96)
    // SubProg main_file pc: 28 op: NOP1 (159)
L1: // addr: 29 pc: 28 sub: 27916 op: 159
    // SubProg main_file pc: 29 op: STARTLINE (58)

    /** scanner.e:2274		ifdef STDDEBUG then*/
    // SubProg main_file pc: 31 op: STARTLINE (58)

    /** scanner.e:2279			read_line()*/
    // SubProg main_file pc: 33 op: PROC (27)
    _62read_line();
    // SubProg main_file pc: 35 op: STARTLINE (58)

    /** scanner.e:2280			default_namespace( )*/
    // SubProg main_file pc: 37 op: PROC (27)
    _62default_namespace();
    // SubProg main_file pc: 39 op: STARTLINE (58)

    /** scanner.e:2282	end procedure*/
    // SubProg main_file pc: 41 op: RETURNP (29)

// Exiting block BLOCK: main_file
    return;
    // SubProg main_file pc: 44 op: BADRETURNF (43)
    ;
}


void _62cleanup_open_includes()
{
    object _15516 = NOVALUE; // 27931 15516
    object _15515 = NOVALUE; // 27930 15515
    object _15514 = NOVALUE; // 27929 15514
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg cleanup_open_includes pc: 1 op: STARTLINE (58)

    /** scanner.e:2285		for i = 1 to length( IncludeStk ) do*/
    // SubProg cleanup_open_includes pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg cleanup_open_includes pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_62IncludeStk_25188)){
            _15514 = SEQ_PTR(_62IncludeStk_25188)->length;
    }
    else {
        _15514 = 1;
    }
    // SubProg cleanup_open_includes pc: 8 op: FOR_I (125)
    {
        object _i_27928;
        _i_27928 = 1;
L1: // addr: 15 pc: 8 sub: 27925 op: 125
        if (_i_27928 > _15514){
            goto L2; // [8] 36
        }
        // SubProg cleanup_open_includes pc: 15 op: STARTLINE (58)

        /** scanner.e:2286			close( IncludeStk[i][FILE_PTR] )*/
        // SubProg cleanup_open_includes pc: 17 op: GLOBAL_INIT_CHECK (109)
        // SubProg cleanup_open_includes pc: 19 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_62IncludeStk_25188);
        _15515 = (object)*(((s1_ptr)_2)->base + _i_27928);
        // SubProg cleanup_open_includes pc: 23 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_15515);
        _15516 = (object)*(((s1_ptr)_2)->base + 3);
        _15515 = NOVALUE;
        // SubProg cleanup_open_includes pc: 27 op: CLOSE (86)
        if (IS_ATOM_INT(_15516))
        EClose(_15516);
        else
        EClose((object)DBL_PTR(_15516)->dbl);
        _15516 = NOVALUE;
        // SubProg cleanup_open_includes pc: 29 op: STARTLINE (58)

        /** scanner.e:2287		end for*/
        // SubProg cleanup_open_includes pc: 31 op: ENDFOR_INT_UP1 (54)
        _i_27928 = _i_27928 + 1;
        goto L1; // [31] 15
L2: // addr: 36 pc: 31 sub: 27925 op: 54
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



// 0x0E7FE473
