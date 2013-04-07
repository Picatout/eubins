// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

void _63set_qualified_fwd(object _fwd_25216)
{
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_fwd_25216)) {
        _1 = (object)(DBL_PTR(_fwd_25216)->dbl);
        DeRefDS(_fwd_25216);
        _fwd_25216 = _1;
    }

    /** scanner.e:104		qualified_fwd = fwd*/
    _63qualified_fwd_25213 = _fwd_25216;

    /** scanner.e:105	end procedure*/
    return;
    ;
}


object _63get_qualified_fwd()
{
    object _fwd_25219 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:108		integer fwd = qualified_fwd*/
    _fwd_25219 = _63qualified_fwd_25213;

    /** scanner.e:109		set_qualified_fwd( -1 )*/

    /** scanner.e:104		qualified_fwd = fwd*/
    _63qualified_fwd_25213 = -1;

    /** scanner.e:105	end procedure*/
    goto L1; // [17] 20
L1: 

    /** scanner.e:110		return fwd*/
    return _fwd_25219;
    ;
}


void _63InitLex()
{
    object _14216 = NOVALUE;
    object _14215 = NOVALUE;
    object _14214 = NOVALUE;
    object _14212 = NOVALUE;
    object _14211 = NOVALUE;
    object _14210 = NOVALUE;
    object _14209 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:117		gline_number = 0*/
    _39gline_number_16820 = 0;

    /** scanner.e:118		line_number = 0*/
    _39line_number_16816 = 0;

    /** scanner.e:119		IncludeStk = {}*/
    RefDS(_5);
    DeRef(_63IncludeStk_25190);
    _63IncludeStk_25190 = _5;

    /** scanner.e:120		char_class = repeat(ILLEGAL_CHAR, 255)  -- we screen out the 0 character*/
    DeRefi(_63char_class_25188);
    _63char_class_25188 = Repeat(-20, 255);

    /** scanner.e:122		char_class['0'..'9'] = DIGIT*/
    assign_slice_seq = (s1_ptr *)&_63char_class_25188;
    AssignSlice(48, 57, -7);

    /** scanner.e:123		char_class['_']      = DIGIT*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 95);
    *(intptr_t *)_2 = -7;

    /** scanner.e:124		char_class['a'..'z'] = LETTER*/
    assign_slice_seq = (s1_ptr *)&_63char_class_25188;
    AssignSlice(97, 122, -2);

    /** scanner.e:125		char_class['A'..'Z'] = LETTER*/
    assign_slice_seq = (s1_ptr *)&_63char_class_25188;
    AssignSlice(65, 90, -2);

    /** scanner.e:126		char_class[KEYWORD_BASE+1..KEYWORD_BASE+NUM_KEYWORDS] = KEYWORD*/
    _14209 = 129;
    _14210 = 152;
    assign_slice_seq = (s1_ptr *)&_63char_class_25188;
    AssignSlice(129, 152, -10);
    _14209 = NOVALUE;
    _14210 = NOVALUE;

    /** scanner.e:127		char_class[BUILTIN_BASE+1..BUILTIN_BASE+NUM_BUILTINS] = BUILTIN*/
    _14211 = 171;
    _14212 = 234;
    assign_slice_seq = (s1_ptr *)&_63char_class_25188;
    AssignSlice(171, 234, -9);
    _14211 = NOVALUE;
    _14212 = NOVALUE;

    /** scanner.e:129		char_class[' '] = BLANK*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = -8;

    /** scanner.e:130		char_class['\t'] = BLANK*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 9);
    *(intptr_t *)_2 = -8;

    /** scanner.e:131		char_class['+'] = PLUS*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 43);
    *(intptr_t *)_2 = 11;

    /** scanner.e:132		char_class['-'] = MINUS*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 45);
    *(intptr_t *)_2 = 10;

    /** scanner.e:133		char_class['*'] = res:MULTIPLY*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 42);
    *(intptr_t *)_2 = 13;

    /** scanner.e:134		char_class['/'] = res:DIVIDE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 47);
    *(intptr_t *)_2 = 14;

    /** scanner.e:135		char_class['='] = EQUALS*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 61);
    *(intptr_t *)_2 = 3;

    /** scanner.e:136		char_class['<'] = LESS*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 60);
    *(intptr_t *)_2 = 1;

    /** scanner.e:137		char_class['>'] = GREATER*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 62);
    *(intptr_t *)_2 = 6;

    /** scanner.e:138		char_class['\''] = SINGLE_QUOTE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 39);
    *(intptr_t *)_2 = -5;

    /** scanner.e:139		char_class['"'] = DOUBLE_QUOTE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 34);
    *(intptr_t *)_2 = -4;

    /** scanner.e:140		char_class['`'] = BACK_QUOTE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 96);
    *(intptr_t *)_2 = -12;

    /** scanner.e:141		char_class['.'] = DOT*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 46);
    *(intptr_t *)_2 = -3;

    /** scanner.e:142		char_class[':'] = COLON*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 58);
    *(intptr_t *)_2 = -23;

    /** scanner.e:143		char_class['\r'] = NEWLINE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 13);
    *(intptr_t *)_2 = -6;

    /** scanner.e:144		char_class['\n'] = NEWLINE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 10);
    *(intptr_t *)_2 = -6;

    /** scanner.e:145		char_class['!'] = BANG*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 33);
    *(intptr_t *)_2 = -1;

    /** scanner.e:146		char_class['{'] = LEFT_BRACE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 123);
    *(intptr_t *)_2 = -24;

    /** scanner.e:147		char_class['}'] = RIGHT_BRACE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 125);
    *(intptr_t *)_2 = -25;

    /** scanner.e:148		char_class['('] = LEFT_ROUND*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 40);
    *(intptr_t *)_2 = -26;

    /** scanner.e:149		char_class[')'] = RIGHT_ROUND*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 41);
    *(intptr_t *)_2 = -27;

    /** scanner.e:150		char_class['['] = LEFT_SQUARE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 91);
    *(intptr_t *)_2 = -28;

    /** scanner.e:151		char_class[']'] = RIGHT_SQUARE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 93);
    *(intptr_t *)_2 = -29;

    /** scanner.e:152		char_class['$'] = DOLLAR*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = -22;

    /** scanner.e:153		char_class[','] = COMMA*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 44);
    *(intptr_t *)_2 = -30;

    /** scanner.e:154		char_class['&'] = res:CONCAT*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 38);
    *(intptr_t *)_2 = 15;

    /** scanner.e:155		char_class['?'] = QUESTION_MARK*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 63);
    *(intptr_t *)_2 = -31;

    /** scanner.e:156		char_class['#'] = NUMBER_SIGN*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 35);
    *(intptr_t *)_2 = -11;

    /** scanner.e:159		char_class[END_OF_FILE_CHAR] = END_OF_FILE*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _2 = (object)(((s1_ptr)_2)->base + 26);
    *(intptr_t *)_2 = -21;

    /** scanner.e:162		id_char = repeat(FALSE, 255)*/
    DeRefi(_63id_char_25189);
    _63id_char_25189 = Repeat(_9FALSE_442, 255);

    /** scanner.e:163		for i = 1 to 255 do*/
    {
        object _i_25267;
        _i_25267 = 1;
L1: 
        if (_i_25267 > 255){
            goto L2; // [407] 456
        }

        /** scanner.e:164			if find(char_class[i], {LETTER, DIGIT}) then*/
        _2 = (object)SEQ_PTR(_63char_class_25188);
        _14214 = (object)*(((s1_ptr)_2)->base + _i_25267);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = -2;
        ((intptr_t *)_2)[2] = -7;
        _14215 = MAKE_SEQ(_1);
        _14216 = find_from(_14214, _14215, 1);
        _14214 = NOVALUE;
        DeRefDS(_14215);
        _14215 = NOVALUE;
        if (_14216 == 0)
        {
            _14216 = NOVALUE;
            goto L3; // [435] 449
        }
        else{
            _14216 = NOVALUE;
        }

        /** scanner.e:165				id_char[i] = TRUE*/
        _2 = (object)SEQ_PTR(_63id_char_25189);
        _2 = (object)(((s1_ptr)_2)->base + _i_25267);
        *(intptr_t *)_2 = _9TRUE_444;
L3: 

        /** scanner.e:167		end for*/
        _i_25267 = _i_25267 + 1;
        goto L1; // [451] 414
L2: 
        ;
    }

    /** scanner.e:169		default_namespaces = {0}*/
    _0 = _63default_namespaces_25187;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    _63default_namespaces_25187 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scanner.e:170	end procedure*/
    return;
    ;
}


void _63ResetTP()
{
    object _0, _1, _2;
    

    /** scanner.e:174		OpTrace = FALSE*/
    _39OpTrace_16884 = _9FALSE_442;

    /** scanner.e:175		OpProfileStatement = FALSE*/
    _39OpProfileStatement_16886 = _9FALSE_442;

    /** scanner.e:176		OpProfileTime = FALSE*/
    _39OpProfileTime_16887 = _9FALSE_442;

    /** scanner.e:177		AnyStatementProfile = FALSE*/
    _36AnyStatementProfile_15427 = _9FALSE_442;

    /** scanner.e:178		AnyTimeProfile = FALSE*/
    _36AnyTimeProfile_15426 = _9FALSE_442;

    /** scanner.e:179	end procedure*/
    return;
    ;
}


object _63pack_source(object _src_25297)
{
    object _start_25298 = NOVALUE;
    object _14240 = NOVALUE;
    object _14239 = NOVALUE;
    object _14238 = NOVALUE;
    object _14237 = NOVALUE;
    object _14235 = NOVALUE;
    object _14233 = NOVALUE;
    object _14232 = NOVALUE;
    object _14231 = NOVALUE;
    object _14227 = NOVALUE;
    object _14225 = NOVALUE;
    object _14224 = NOVALUE;
    object _14221 = NOVALUE;
    object _14220 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:197		if equal(src, 0) then*/
    if (_src_25297 == 0)
    _14220 = 1;
    else if (IS_ATOM_INT(_src_25297) && IS_ATOM_INT(0))
    _14220 = 0;
    else
    _14220 = (compare(_src_25297, 0) == 0);
    if (_14220 == 0)
    {
        _14220 = NOVALUE;
        goto L1; // [7] 17
    }
    else{
        _14220 = NOVALUE;
    }

    /** scanner.e:198			return 0*/
    DeRef(_src_25297);
    return 0;
L1: 

    /** scanner.e:201		if length(src) >= SOURCE_CHUNK then*/
    if (IS_SEQUENCE(_src_25297)){
            _14221 = SEQ_PTR(_src_25297)->length;
    }
    else {
        _14221 = 1;
    }
    if (_14221 < 10000)
    goto L2; // [22] 34

    /** scanner.e:202			src = src[1..100] -- enough for trace or profile display*/
    rhs_slice_target = (object_ptr)&_src_25297;
    RHS_Slice(_src_25297, 1, 100);
L2: 

    /** scanner.e:205		if current_source_next + length(src) >= SOURCE_CHUNK then*/
    if (IS_SEQUENCE(_src_25297)){
            _14224 = SEQ_PTR(_src_25297)->length;
    }
    else {
        _14224 = 1;
    }
    _14225 = _63current_source_next_25293 + _14224;
    if ((object)((uintptr_t)_14225 + (uintptr_t)HIGH_BITS) >= 0){
        _14225 = NewDouble((eudouble)_14225);
    }
    _14224 = NOVALUE;
    if (binary_op_a(LESS, _14225, 10000)){
        DeRef(_14225);
        _14225 = NOVALUE;
        goto L3; // [45] 94
    }
    DeRef(_14225);
    _14225 = NOVALUE;

    /** scanner.e:207			current_source = allocate(SOURCE_CHUNK + LINE_BUFLEN)*/
    _14227 = 10400;
    _0 = _4allocate(10400, 0);
    DeRef(_63current_source_25292);
    _63current_source_25292 = _0;
    _14227 = NOVALUE;

    /** scanner.e:208			if current_source = 0 then*/
    if (binary_op_a(NOTEQ, _63current_source_25292, 0)){
        goto L4; // [64] 76
    }

    /** scanner.e:209				CompileErr(123)*/
    RefDS(_21928);
    _52CompileErr(123, _21928, 0);
L4: 

    /** scanner.e:211			all_source = append(all_source, current_source)*/
    Ref(_63current_source_25292);
    Append(&_36all_source_15428, _36all_source_15428, _63current_source_25292);

    /** scanner.e:213			current_source_next = 1*/
    _63current_source_next_25293 = 1;
L3: 

    /** scanner.e:216		start = current_source_next*/
    _start_25298 = _63current_source_next_25293;

    /** scanner.e:217		poke(current_source+current_source_next, src)*/
    if (IS_ATOM_INT(_63current_source_25292)) {
        _14231 = _63current_source_25292 + _63current_source_next_25293;
        if ((object)((uintptr_t)_14231 + (uintptr_t)HIGH_BITS) >= 0){
            _14231 = NewDouble((eudouble)_14231);
        }
    }
    else {
        _14231 = NewDouble(DBL_PTR(_63current_source_25292)->dbl + (eudouble)_63current_source_next_25293);
    }
    if (IS_ATOM_INT(_14231)){
        poke_addr = (uint8_t *)_14231;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14231)->dbl);
    }
    if (IS_ATOM_INT(_src_25297)) {
        *poke_addr = (uint8_t)_src_25297;
    }
    else if (IS_ATOM(_src_25297)) {
        *poke_addr = (uint8_t)DBL_PTR(_src_25297)->dbl;
    }
    else {
        _1 = (object)SEQ_PTR(_src_25297);
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
    DeRef(_14231);
    _14231 = NOVALUE;

    /** scanner.e:218		current_source_next += length(src)-1*/
    if (IS_SEQUENCE(_src_25297)){
            _14232 = SEQ_PTR(_src_25297)->length;
    }
    else {
        _14232 = 1;
    }
    _14233 = _14232 - 1;
    _14232 = NOVALUE;
    _63current_source_next_25293 = _63current_source_next_25293 + _14233;
    _14233 = NOVALUE;

    /** scanner.e:219		poke(current_source+current_source_next, 0) -- overwrite \n*/
    if (IS_ATOM_INT(_63current_source_25292)) {
        _14235 = _63current_source_25292 + _63current_source_next_25293;
        if ((object)((uintptr_t)_14235 + (uintptr_t)HIGH_BITS) >= 0){
            _14235 = NewDouble((eudouble)_14235);
        }
    }
    else {
        _14235 = NewDouble(DBL_PTR(_63current_source_25292)->dbl + (eudouble)_63current_source_next_25293);
    }
    if (IS_ATOM_INT(_14235)){
        poke_addr = (uint8_t *)_14235;
    }
    else {
        poke_addr = (uint8_t *)(uintptr_t)(DBL_PTR(_14235)->dbl);
    }
    *poke_addr = (uint8_t)0;
    DeRef(_14235);
    _14235 = NOVALUE;

    /** scanner.e:220		current_source_next += 1*/
    _63current_source_next_25293 = _63current_source_next_25293 + 1;

    /** scanner.e:221		return start + SOURCE_CHUNK * (length(all_source)-1)*/
    if (IS_SEQUENCE(_36all_source_15428)){
            _14237 = SEQ_PTR(_36all_source_15428)->length;
    }
    else {
        _14237 = 1;
    }
    _14238 = _14237 - 1;
    _14237 = NOVALUE;
    if (_14238 <= INT15){
        _14239 = 10000 * _14238;
    }
    else{
        _14239 = NewDouble(10000 * (eudouble)_14238);
    }
    _14238 = NOVALUE;
    if (IS_ATOM_INT(_14239)) {
        _14240 = _start_25298 + _14239;
        if ((object)((uintptr_t)_14240 + (uintptr_t)HIGH_BITS) >= 0){
            _14240 = NewDouble((eudouble)_14240);
        }
    }
    else {
        _14240 = NewDouble((eudouble)_start_25298 + DBL_PTR(_14239)->dbl);
    }
    DeRef(_14239);
    _14239 = NOVALUE;
    DeRef(_src_25297);
    return _14240;
    ;
}


object _63fetch_line(object _start_25331)
{
    object _line_25332 = NOVALUE;
    object _memdata_25333 = NOVALUE;
    object _c_25334 = NOVALUE;
    object _chunk_25335 = NOVALUE;
    object _p_25336 = NOVALUE;
    object _n_25337 = NOVALUE;
    object _m_25338 = NOVALUE;
    object _14265 = NOVALUE;
    object _14264 = NOVALUE;
    object _14262 = NOVALUE;
    object _14260 = NOVALUE;
    object _14254 = NOVALUE;
    object _14252 = NOVALUE;
    object _14248 = NOVALUE;
    object _14246 = NOVALUE;
    object _14243 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:234		if start = 0 then*/
    if (_start_25331 != 0)
    goto L1; // [5] 16

    /** scanner.e:235			return ""*/
    RefDS(_5);
    DeRef(_line_25332);
    DeRefi(_memdata_25333);
    DeRef(_p_25336);
    return _5;
L1: 

    /** scanner.e:237		line = repeat(0, LINE_BUFLEN)*/
    DeRef(_line_25332);
    _line_25332 = Repeat(0, 400);

    /** scanner.e:238		n = 0*/
    _n_25337 = 0;

    /** scanner.e:239		chunk = 1+floor(start / SOURCE_CHUNK)*/
    if (10000 > 0 && _start_25331 >= 0) {
        _14243 = _start_25331 / 10000;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_start_25331 / (eudouble)10000);
        _14243 = (object)temp_dbl;
    }
    _chunk_25335 = _14243 + 1;
    _14243 = NOVALUE;

    /** scanner.e:240		start = remainder(start, SOURCE_CHUNK)*/
    _start_25331 = (_start_25331 % 10000);

    /** scanner.e:241		p = all_source[chunk] + start*/
    _2 = (object)SEQ_PTR(_36all_source_15428);
    _14246 = (object)*(((s1_ptr)_2)->base + _chunk_25335);
    DeRef(_p_25336);
    if (IS_ATOM_INT(_14246)) {
        _p_25336 = _14246 + _start_25331;
        if ((object)((uintptr_t)_p_25336 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25336 = NewDouble((eudouble)_p_25336);
        }
    }
    else {
        _p_25336 = NewDouble(DBL_PTR(_14246)->dbl + (eudouble)_start_25331);
    }
    _14246 = NOVALUE;

    /** scanner.e:242		memdata = peek({p, LINE_BUFLEN})*/
    Ref(_p_25336);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25336;
    ((intptr_t *)_2)[2] = 400;
    _14248 = MAKE_SEQ(_1);
    DeRefi(_memdata_25333);
    _1 = (object)SEQ_PTR(_14248);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25333 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14248);
    _14248 = NOVALUE;

    /** scanner.e:243		p += LINE_BUFLEN*/
    _0 = _p_25336;
    if (IS_ATOM_INT(_p_25336)) {
        _p_25336 = _p_25336 + 400;
        if ((object)((uintptr_t)_p_25336 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25336 = NewDouble((eudouble)_p_25336);
        }
    }
    else {
        _p_25336 = NewDouble(DBL_PTR(_p_25336)->dbl + (eudouble)400);
    }
    DeRef(_0);

    /** scanner.e:244		m = 0*/
    _m_25338 = 0;

    /** scanner.e:245		while TRUE do*/
L2: 
    if (_9TRUE_444 == 0)
    {
        goto L3; // [84] 179
    }
    else{
    }

    /** scanner.e:246			m += 1*/
    _m_25338 = _m_25338 + 1;

    /** scanner.e:247			if m > length(memdata) then*/
    if (IS_SEQUENCE(_memdata_25333)){
            _14252 = SEQ_PTR(_memdata_25333)->length;
    }
    else {
        _14252 = 1;
    }
    if (_m_25338 <= _14252)
    goto L4; // [98] 125

    /** scanner.e:248				memdata = peek({p, LINE_BUFLEN})*/
    Ref(_p_25336);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _p_25336;
    ((intptr_t *)_2)[2] = 400;
    _14254 = MAKE_SEQ(_1);
    DeRefDSi(_memdata_25333);
    _1 = (object)SEQ_PTR(_14254);
    peek_addr = (uint8_t *)get_pos_int("peek", *(((s1_ptr)_1)->base+1));
    _2 = get_pos_int("peek", *(((s1_ptr)_1)->base+2));
    pokeptr_addr = (uintptr_t *)NewS1(_2);
    _memdata_25333 = MAKE_SEQ(pokeptr_addr);
    pokeptr_addr = (uintptr_t *)((s1_ptr)pokeptr_addr)->base;
    while (--_2 >= 0) {
        pokeptr_addr++;
        *pokeptr_addr = (object)*peek_addr++;
    }
    DeRefDS(_14254);
    _14254 = NOVALUE;

    /** scanner.e:249				p += LINE_BUFLEN*/
    _0 = _p_25336;
    if (IS_ATOM_INT(_p_25336)) {
        _p_25336 = _p_25336 + 400;
        if ((object)((uintptr_t)_p_25336 + (uintptr_t)HIGH_BITS) >= 0){
            _p_25336 = NewDouble((eudouble)_p_25336);
        }
    }
    else {
        _p_25336 = NewDouble(DBL_PTR(_p_25336)->dbl + (eudouble)400);
    }
    DeRef(_0);

    /** scanner.e:250				m = 1*/
    _m_25338 = 1;
L4: 

    /** scanner.e:252			c = memdata[m]*/
    _2 = (object)SEQ_PTR(_memdata_25333);
    _c_25334 = (object)*(((s1_ptr)_2)->base + _m_25338);

    /** scanner.e:253			if c = 0 then*/
    if (_c_25334 != 0)
    goto L5; // [133] 142

    /** scanner.e:254				exit*/
    goto L3; // [139] 179
L5: 

    /** scanner.e:256			n += 1*/
    _n_25337 = _n_25337 + 1;

    /** scanner.e:257			if n > length(line) then*/
    if (IS_SEQUENCE(_line_25332)){
            _14260 = SEQ_PTR(_line_25332)->length;
    }
    else {
        _14260 = 1;
    }
    if (_n_25337 <= _14260)
    goto L6; // [153] 168

    /** scanner.e:258				line &= repeat(0, LINE_BUFLEN)*/
    _14262 = Repeat(0, 400);
    Concat((object_ptr)&_line_25332, _line_25332, _14262);
    DeRefDS(_14262);
    _14262 = NOVALUE;
L6: 

    /** scanner.e:260			line[n] = c*/
    _2 = (object)SEQ_PTR(_line_25332);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _line_25332 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _n_25337);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _c_25334;
    DeRef(_1);

    /** scanner.e:261		end while*/
    goto L2; // [176] 82
L3: 

    /** scanner.e:262		line = remove( line, n+1, length( line ) )*/
    _14264 = _n_25337 + 1;
    if (_14264 > MAXINT){
        _14264 = NewDouble((eudouble)_14264);
    }
    if (IS_SEQUENCE(_line_25332)){
            _14265 = SEQ_PTR(_line_25332)->length;
    }
    else {
        _14265 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_line_25332);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14264)) ? _14264 : (object)(DBL_PTR(_14264)->dbl);
        int stop = (IS_ATOM_INT(_14265)) ? _14265 : (object)(DBL_PTR(_14265)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_line_25332), start, &_line_25332 );
            }
            else Tail(SEQ_PTR(_line_25332), stop+1, &_line_25332);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_line_25332), start, &_line_25332);
        }
        else {
            assign_slice_seq = &assign_space;
            _line_25332 = Remove_elements(start, stop, (SEQ_PTR(_line_25332)->ref == 1));
        }
    }
    DeRef(_14264);
    _14264 = NOVALUE;
    _14265 = NOVALUE;

    /** scanner.e:263		return line*/
    DeRefi(_memdata_25333);
    DeRef(_p_25336);
    return _line_25332;
    ;
}


void _63AppendSourceLine()
{
    object _new_25374 = NOVALUE;
    object _old_25375 = NOVALUE;
    object _options_25376 = NOVALUE;
    object _src_25377 = NOVALUE;
    object _14306 = NOVALUE;
    object _14302 = NOVALUE;
    object _14300 = NOVALUE;
    object _14299 = NOVALUE;
    object _14296 = NOVALUE;
    object _14295 = NOVALUE;
    object _14294 = NOVALUE;
    object _14293 = NOVALUE;
    object _14292 = NOVALUE;
    object _14291 = NOVALUE;
    object _14290 = NOVALUE;
    object _14289 = NOVALUE;
    object _14288 = NOVALUE;
    object _14287 = NOVALUE;
    object _14286 = NOVALUE;
    object _14285 = NOVALUE;
    object _14284 = NOVALUE;
    object _14283 = NOVALUE;
    object _14282 = NOVALUE;
    object _14281 = NOVALUE;
    object _14280 = NOVALUE;
    object _14279 = NOVALUE;
    object _14277 = NOVALUE;
    object _14276 = NOVALUE;
    object _14275 = NOVALUE;
    object _14273 = NOVALUE;
    object _14268 = NOVALUE;
    object _14267 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:272		src = 0*/
    DeRef(_src_25377);
    _src_25377 = 0;

    /** scanner.e:273		options = 0*/
    _options_25376 = 0;

    /** scanner.e:275		if TRANSLATE or OpTrace or OpProfileStatement or OpProfileTime then*/
    if (_39TRANSLATE_16440 != 0) {
        _14267 = 1;
        goto L1; // [15] 25
    }
    _14267 = (_39OpTrace_16884 != 0);
L1: 
    if (_14267 != 0) {
        _14268 = 1;
        goto L2; // [25] 35
    }
    _14268 = (_39OpProfileStatement_16886 != 0);
L2: 
    if (_14268 != 0) {
        goto L3; // [35] 46
    }
    if (_39OpProfileTime_16887 == 0)
    {
        goto L4; // [42] 136
    }
    else{
    }
L3: 

    /** scanner.e:277			src = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_src_25377);
    _src_25377 = _52ThisLine_48710;

    /** scanner.e:279			if OpTrace then*/
    if (_39OpTrace_16884 == 0)
    {
        goto L5; // [57] 70
    }
    else{
    }

    /** scanner.e:280				options = SOP_TRACE*/
    _options_25376 = 1;
L5: 

    /** scanner.e:282			if OpProfileTime then*/
    if (_39OpProfileTime_16887 == 0)
    {
        goto L6; // [74] 88
    }
    else{
    }

    /** scanner.e:283				options = or_bits(options, SOP_PROFILE_TIME)*/
    {uintptr_t tu;
         tu = (uintptr_t)_options_25376 | (uintptr_t)2;
         _options_25376 = MAKE_UINT(tu);
    }
    if (!IS_ATOM_INT(_options_25376)) {
        _1 = (object)(DBL_PTR(_options_25376)->dbl);
        DeRefDS(_options_25376);
        _options_25376 = _1;
    }
L6: 

    /** scanner.e:285			if OpProfileStatement then*/
    if (_39OpProfileStatement_16886 == 0)
    {
        goto L7; // [92] 106
    }
    else{
    }

    /** scanner.e:286				options = or_bits(options, SOP_PROFILE_STATEMENT)*/
    {uintptr_t tu;
         tu = (uintptr_t)_options_25376 | (uintptr_t)4;
         _options_25376 = MAKE_UINT(tu);
    }
    if (!IS_ATOM_INT(_options_25376)) {
        _1 = (object)(DBL_PTR(_options_25376)->dbl);
        DeRefDS(_options_25376);
        _options_25376 = _1;
    }
L7: 

    /** scanner.e:288			if OpProfileStatement or OpProfileTime then*/
    if (_39OpProfileStatement_16886 != 0) {
        goto L8; // [110] 121
    }
    if (_39OpProfileTime_16887 == 0)
    {
        goto L9; // [117] 135
    }
    else{
    }
L8: 

    /** scanner.e:289				src = {0,0,0,0} & src*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = 0;
    ((intptr_t*)_2)[3] = 0;
    ((intptr_t*)_2)[4] = 0;
    _14273 = MAKE_SEQ(_1);
    if (IS_SEQUENCE(_14273) && IS_ATOM(_src_25377)) {
        Ref(_src_25377);
        Append(&_src_25377, _14273, _src_25377);
    }
    else if (IS_ATOM(_14273) && IS_SEQUENCE(_src_25377)) {
    }
    else {
        Concat((object_ptr)&_src_25377, _14273, _src_25377);
        DeRefDS(_14273);
        _14273 = NOVALUE;
    }
    DeRef(_14273);
    _14273 = NOVALUE;
L9: 
L4: 

    /** scanner.e:293		if length(slist) then*/
    if (IS_SEQUENCE(_39slist_16905)){
            _14275 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14275 = 1;
    }
    if (_14275 == 0)
    {
        _14275 = NOVALUE;
        goto LA; // [143] 345
    }
    else{
        _14275 = NOVALUE;
    }

    /** scanner.e:294			old = slist[$-1]*/
    if (IS_SEQUENCE(_39slist_16905)){
            _14276 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14276 = 1;
    }
    _14277 = _14276 - 1;
    _14276 = NOVALUE;
    DeRef(_old_25375);
    _2 = (object)SEQ_PTR(_39slist_16905);
    _old_25375 = (object)*(((s1_ptr)_2)->base + _14277);
    Ref(_old_25375);

    /** scanner.e:296			if equal(src, old[SRC]) and*/
    _2 = (object)SEQ_PTR(_old_25375);
    _14279 = (object)*(((s1_ptr)_2)->base + 1);
    if (_src_25377 == _14279)
    _14280 = 1;
    else if (IS_ATOM_INT(_src_25377) && IS_ATOM_INT(_14279))
    _14280 = 0;
    else
    _14280 = (compare(_src_25377, _14279) == 0);
    _14279 = NOVALUE;
    if (_14280 == 0) {
        _14281 = 0;
        goto LB; // [175] 195
    }
    _2 = (object)SEQ_PTR(_old_25375);
    _14282 = (object)*(((s1_ptr)_2)->base + 3);
    if (IS_ATOM_INT(_14282)) {
        _14283 = (_39current_file_no_16815 == _14282);
    }
    else {
        _14283 = binary_op(EQUALS, _39current_file_no_16815, _14282);
    }
    _14282 = NOVALUE;
    if (IS_ATOM_INT(_14283))
    _14281 = (_14283 != 0);
    else
    _14281 = DBL_PTR(_14283)->dbl != 0.0;
LB: 
    if (_14281 == 0) {
        _14284 = 0;
        goto LC; // [195] 232
    }
    _2 = (object)SEQ_PTR(_old_25375);
    _14285 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_14285)) {
        _14286 = _14285 + 1;
        if (_14286 > MAXINT){
            _14286 = NewDouble((eudouble)_14286);
        }
    }
    else
    _14286 = binary_op(PLUS, 1, _14285);
    _14285 = NOVALUE;
    if (IS_SEQUENCE(_39slist_16905)){
            _14287 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14287 = 1;
    }
    _2 = (object)SEQ_PTR(_39slist_16905);
    _14288 = (object)*(((s1_ptr)_2)->base + _14287);
    if (IS_ATOM_INT(_14286) && IS_ATOM_INT(_14288)) {
        _14289 = _14286 + _14288;
        if ((object)((uintptr_t)_14289 + (uintptr_t)HIGH_BITS) >= 0){
            _14289 = NewDouble((eudouble)_14289);
        }
    }
    else {
        _14289 = binary_op(PLUS, _14286, _14288);
    }
    DeRef(_14286);
    _14286 = NOVALUE;
    _14288 = NOVALUE;
    if (IS_ATOM_INT(_14289)) {
        _14290 = (_39line_number_16816 == _14289);
    }
    else {
        _14290 = binary_op(EQUALS, _39line_number_16816, _14289);
    }
    DeRef(_14289);
    _14289 = NOVALUE;
    if (IS_ATOM_INT(_14290))
    _14284 = (_14290 != 0);
    else
    _14284 = DBL_PTR(_14290)->dbl != 0.0;
LC: 
    if (_14284 == 0) {
        goto LD; // [232] 272
    }
    _2 = (object)SEQ_PTR(_old_25375);
    _14292 = (object)*(((s1_ptr)_2)->base + 4);
    if (IS_ATOM_INT(_14292)) {
        _14293 = (_options_25376 == _14292);
    }
    else {
        _14293 = binary_op(EQUALS, _options_25376, _14292);
    }
    _14292 = NOVALUE;
    if (_14293 == 0) {
        DeRef(_14293);
        _14293 = NOVALUE;
        goto LD; // [247] 272
    }
    else {
        if (!IS_ATOM_INT(_14293) && DBL_PTR(_14293)->dbl == 0.0){
            DeRef(_14293);
            _14293 = NOVALUE;
            goto LD; // [247] 272
        }
        DeRef(_14293);
        _14293 = NOVALUE;
    }
    DeRef(_14293);
    _14293 = NOVALUE;

    /** scanner.e:302				slist[$] += 1*/
    if (IS_SEQUENCE(_39slist_16905)){
            _14294 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14294 = 1;
    }
    _2 = (object)SEQ_PTR(_39slist_16905);
    _14295 = (object)*(((s1_ptr)_2)->base + _14294);
    if (IS_ATOM_INT(_14295)) {
        _14296 = _14295 + 1;
        if (_14296 > MAXINT){
            _14296 = NewDouble((eudouble)_14296);
        }
    }
    else
    _14296 = binary_op(PLUS, 1, _14295);
    _14295 = NOVALUE;
    _2 = (object)SEQ_PTR(_39slist_16905);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39slist_16905 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14294);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14296;
    if( _1 != _14296 ){
        DeRef(_1);
    }
    _14296 = NOVALUE;
    goto LE; // [269] 371
LD: 

    /** scanner.e:304				src = pack_source(src)*/
    Ref(_src_25377);
    _0 = _src_25377;
    _src_25377 = _63pack_source(_src_25377);
    DeRef(_0);

    /** scanner.e:305				new = {src, line_number, current_file_no, options}*/
    _0 = _new_25374;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25377);
    ((intptr_t*)_2)[1] = _src_25377;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    ((intptr_t*)_2)[3] = _39current_file_no_16815;
    ((intptr_t*)_2)[4] = _options_25376;
    _new_25374 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scanner.e:306				if slist[$] = 0 then*/
    if (IS_SEQUENCE(_39slist_16905)){
            _14299 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14299 = 1;
    }
    _2 = (object)SEQ_PTR(_39slist_16905);
    _14300 = (object)*(((s1_ptr)_2)->base + _14299);
    if (binary_op_a(NOTEQ, _14300, 0)){
        _14300 = NOVALUE;
        goto LF; // [302] 320
    }
    _14300 = NOVALUE;

    /** scanner.e:307					slist[$] = new*/
    if (IS_SEQUENCE(_39slist_16905)){
            _14302 = SEQ_PTR(_39slist_16905)->length;
    }
    else {
        _14302 = 1;
    }
    RefDS(_new_25374);
    _2 = (object)SEQ_PTR(_39slist_16905);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _39slist_16905 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14302);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_25374;
    DeRef(_1);
    goto L10; // [317] 331
LF: 

    /** scanner.e:309					slist = append(slist, new)*/
    RefDS(_new_25374);
    Append(&_39slist_16905, _39slist_16905, _new_25374);
L10: 

    /** scanner.e:311				slist = append(slist, 0)*/
    Append(&_39slist_16905, _39slist_16905, 0);
    goto LE; // [342] 371
LA: 

    /** scanner.e:314			src = pack_source(src)*/
    Ref(_src_25377);
    _0 = _src_25377;
    _src_25377 = _63pack_source(_src_25377);
    DeRef(_0);

    /** scanner.e:315			slist = {{src, line_number, current_file_no, options}, 0}*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_src_25377);
    ((intptr_t*)_2)[1] = _src_25377;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    ((intptr_t*)_2)[3] = _39current_file_no_16815;
    ((intptr_t*)_2)[4] = _options_25376;
    _14306 = MAKE_SEQ(_1);
    DeRef(_39slist_16905);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _14306;
    ((intptr_t *)_2)[2] = 0;
    _39slist_16905 = MAKE_SEQ(_1);
    _14306 = NOVALUE;
LE: 

    /** scanner.e:317	end procedure*/
    DeRef(_new_25374);
    DeRef(_old_25375);
    DeRef(_src_25377);
    DeRef(_14283);
    _14283 = NOVALUE;
    DeRef(_14290);
    _14290 = NOVALUE;
    DeRef(_14277);
    _14277 = NOVALUE;
    return;
    ;
}


object _63s_expand(object _slist_25466)
{
    object _new_slist_25467 = NOVALUE;
    object _14320 = NOVALUE;
    object _14319 = NOVALUE;
    object _14318 = NOVALUE;
    object _14317 = NOVALUE;
    object _14315 = NOVALUE;
    object _14314 = NOVALUE;
    object _14313 = NOVALUE;
    object _14311 = NOVALUE;
    object _14310 = NOVALUE;
    object _14309 = NOVALUE;
    object _14308 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:323		new_slist = {}*/
    RefDS(_5);
    DeRef(_new_slist_25467);
    _new_slist_25467 = _5;

    /** scanner.e:325		for i = 1 to length(slist) do*/
    if (IS_SEQUENCE(_slist_25466)){
            _14308 = SEQ_PTR(_slist_25466)->length;
    }
    else {
        _14308 = 1;
    }
    {
        object _i_25469;
        _i_25469 = 1;
L1: 
        if (_i_25469 > _14308){
            goto L2; // [15] 114
        }

        /** scanner.e:326			if sequence(slist[i]) then*/
        _2 = (object)SEQ_PTR(_slist_25466);
        _14309 = (object)*(((s1_ptr)_2)->base + _i_25469);
        _14310 = IS_SEQUENCE(_14309);
        _14309 = NOVALUE;
        if (_14310 == 0)
        {
            _14310 = NOVALUE;
            goto L3; // [31] 47
        }
        else{
            _14310 = NOVALUE;
        }

        /** scanner.e:327				new_slist = append(new_slist, slist[i])*/
        _2 = (object)SEQ_PTR(_slist_25466);
        _14311 = (object)*(((s1_ptr)_2)->base + _i_25469);
        Ref(_14311);
        Append(&_new_slist_25467, _new_slist_25467, _14311);
        _14311 = NOVALUE;
        goto L4; // [44] 107
L3: 

        /** scanner.e:329				for j = 1 to slist[i] do*/
        _2 = (object)SEQ_PTR(_slist_25466);
        _14313 = (object)*(((s1_ptr)_2)->base + _i_25469);
        {
            object _j_25478;
            _j_25478 = 1;
L5: 
            if (binary_op_a(GREATER, _j_25478, _14313)){
                goto L6; // [53] 106
            }

            /** scanner.e:330					slist[i-1][LINE] += 1*/
            _14314 = _i_25469 - 1;
            _2 = (object)SEQ_PTR(_slist_25466);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _slist_25466 = MAKE_SEQ(_2);
            }
            _3 = (object)(_14314 + ((s1_ptr)_2)->base);
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            _14317 = (object)*(((s1_ptr)_2)->base + 2);
            _14315 = NOVALUE;
            if (IS_ATOM_INT(_14317)) {
                _14318 = _14317 + 1;
                if (_14318 > MAXINT){
                    _14318 = NewDouble((eudouble)_14318);
                }
            }
            else
            _14318 = binary_op(PLUS, 1, _14317);
            _14317 = NOVALUE;
            _2 = (object)SEQ_PTR(*(intptr_t *)_3);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                *(intptr_t *)_3 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + 2);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _14318;
            if( _1 != _14318 ){
                DeRef(_1);
            }
            _14318 = NOVALUE;
            _14315 = NOVALUE;

            /** scanner.e:331					new_slist = append(new_slist, slist[i-1])*/
            _14319 = _i_25469 - 1;
            _2 = (object)SEQ_PTR(_slist_25466);
            _14320 = (object)*(((s1_ptr)_2)->base + _14319);
            Ref(_14320);
            Append(&_new_slist_25467, _new_slist_25467, _14320);
            _14320 = NOVALUE;

            /** scanner.e:332				end for*/
            _0 = _j_25478;
            if (IS_ATOM_INT(_j_25478)) {
                _j_25478 = _j_25478 + 1;
                if ((object)((uintptr_t)_j_25478 +(uintptr_t) HIGH_BITS) >= 0){
                    _j_25478 = NewDouble((eudouble)_j_25478);
                }
            }
            else {
                _j_25478 = binary_op_a(PLUS, _j_25478, 1);
            }
            DeRef(_0);
            goto L5; // [101] 60
L6: 
            ;
            DeRef(_j_25478);
        }
L4: 

        /** scanner.e:334		end for*/
        _i_25469 = _i_25469 + 1;
        goto L1; // [109] 22
L2: 
        ;
    }

    /** scanner.e:335		return new_slist*/
    DeRefDS(_slist_25466);
    _14313 = NOVALUE;
    DeRef(_14319);
    _14319 = NOVALUE;
    DeRef(_14314);
    _14314 = NOVALUE;
    return _new_slist_25467;
    ;
}


void _63set_dont_read(object _read_25493)
{
    object _0, _1, _2;
    

    /** scanner.e:357		dont_read = read*/
    _63dont_read_25490 = _read_25493;

    /** scanner.e:358	end procedure*/
    return;
    ;
}


void _63read_line()
{
    object _n_25499 = NOVALUE;
    object _14350 = NOVALUE;
    object _14349 = NOVALUE;
    object _14348 = NOVALUE;
    object _14347 = NOVALUE;
    object _14346 = NOVALUE;
    object _14344 = NOVALUE;
    object _14343 = NOVALUE;
    object _14341 = NOVALUE;
    object _14340 = NOVALUE;
    object _14339 = NOVALUE;
    object _14338 = NOVALUE;
    object _14330 = NOVALUE;
    object _14328 = NOVALUE;
    object _14327 = NOVALUE;
    object _14326 = NOVALUE;
    object _14325 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:367		line_number += 1*/
    _39line_number_16816 = _39line_number_16816 + 1;

    /** scanner.e:368		gline_number += 1*/
    _39gline_number_16820 = _39gline_number_16820 + 1;

    /** scanner.e:370		if dont_read then*/
    if (_63dont_read_25490 == 0)
    {
        goto L1; // [25] 36
    }
    else{
    }

    /** scanner.e:371			ThisLine = -1*/
    DeRef(_52ThisLine_48710);
    _52ThisLine_48710 = -1;
    goto L2; // [33] 216
L1: 

    /** scanner.e:372		elsif repl and src_file = repl_file then*/
    if (0 == 0) {
        goto L3; // [40] 144
    }
    _14326 = (_39src_file_16936 == 5555);
    if (_14326 == 0)
    {
        DeRef(_14326);
        _14326 = NOVALUE;
        goto L3; // [53] 144
    }
    else{
        DeRef(_14326);
        _14326 = NOVALUE;
    }

    /** scanner.e:373			if repl_line_was_read and current_block = top_level_block then*/
    if (_63repl_line_was_read_25494 == 0) {
        goto L4; // [60] 118
    }
    _14328 = (_66current_block_24750 == _66top_level_block_24751);
    if (_14328 == 0)
    {
        DeRef(_14328);
        _14328 = NOVALUE;
        goto L4; // [73] 118
    }
    else{
        DeRef(_14328);
        _14328 = NOVALUE;
    }

    /** scanner.e:374				if repl_line_was_read > 1 then*/
    if (_63repl_line_was_read_25494 <= 1)
    goto L5; // [80] 110

    /** scanner.e:375					if not match("end", ThisLine) then*/
    _14330 = e_match_from(_13103, _52ThisLine_48710, 1);
    if (_14330 != 0)
    goto L6; // [93] 109
    _14330 = NOVALUE;

    /** scanner.e:376						goto "lol"*/
    goto G7;
L6: 
L5: 

    /** scanner.e:379				ThisLine = -1*/
    DeRef(_52ThisLine_48710);
    _52ThisLine_48710 = -1;
    goto L2; // [115] 216
L4: 

    /** scanner.e:381				label "lol"*/
G7:

    /** scanner.e:382				puts(1, "Enter line:\n")*/
    EPuts(1, _14333); // DJP 

    /** scanner.e:383				repl_line_was_read += 1*/
    _63repl_line_was_read_25494 = _63repl_line_was_read_25494 + 1;

    /** scanner.e:384				ThisLine = gets(0)*/
    DeRef(_52ThisLine_48710);
    _52ThisLine_48710 = EGets(0);
    goto L2; // [141] 216
L3: 

    /** scanner.e:386		elsif src_file < 0 then*/
    if (_39src_file_16936 >= 0)
    goto L8; // [148] 160

    /** scanner.e:387			ThisLine = -1*/
    DeRef(_52ThisLine_48710);
    _52ThisLine_48710 = -1;
    goto L2; // [157] 216
L8: 

    /** scanner.e:389			ThisLine = gets(src_file)*/
    DeRef(_52ThisLine_48710);
    _52ThisLine_48710 = EGets(_39src_file_16936);

    /** scanner.e:390			if sequence(ThisLine) and ends( {13,10}, ThisLine ) then*/
    _14338 = IS_SEQUENCE(_52ThisLine_48710);
    if (_14338 == 0) {
        goto L9; // [174] 215
    }
    RefDS(_12362);
    Ref(_52ThisLine_48710);
    _14340 = _15ends(_12362, _52ThisLine_48710);
    if (_14340 == 0) {
        DeRef(_14340);
        _14340 = NOVALUE;
        goto L9; // [186] 215
    }
    else {
        if (!IS_ATOM_INT(_14340) && DBL_PTR(_14340)->dbl == 0.0){
            DeRef(_14340);
            _14340 = NOVALUE;
            goto L9; // [186] 215
        }
        DeRef(_14340);
        _14340 = NOVALUE;
    }
    DeRef(_14340);
    _14340 = NOVALUE;

    /** scanner.e:391				ThisLine = remove(ThisLine, length(ThisLine))*/
    if (IS_SEQUENCE(_52ThisLine_48710)){
            _14341 = SEQ_PTR(_52ThisLine_48710)->length;
    }
    else {
        _14341 = 1;
    }
    {
        s1_ptr assign_space = SEQ_PTR(_52ThisLine_48710);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_14341)) ? _14341 : (object)(DBL_PTR(_14341)->dbl);
        int stop = (IS_ATOM_INT(_14341)) ? _14341 : (object)(DBL_PTR(_14341)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_52ThisLine_48710), start, &_52ThisLine_48710 );
            }
            else Tail(SEQ_PTR(_52ThisLine_48710), stop+1, &_52ThisLine_48710);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_52ThisLine_48710), start, &_52ThisLine_48710);
        }
        else {
            assign_slice_seq = &assign_space;
            _52ThisLine_48710 = Remove_elements(start, stop, (SEQ_PTR(_52ThisLine_48710)->ref == 1));
        }
    }
    _14341 = NOVALUE;
    _14341 = NOVALUE;

    /** scanner.e:392				ThisLine[$] = 10*/
    if (IS_SEQUENCE(_52ThisLine_48710)){
            _14343 = SEQ_PTR(_52ThisLine_48710)->length;
    }
    else {
        _14343 = 1;
    }
    _2 = (object)SEQ_PTR(_52ThisLine_48710);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _52ThisLine_48710 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14343);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 10;
    DeRef(_1);
L9: 
L2: 

    /** scanner.e:395		if atom(ThisLine) then*/
    _14344 = IS_ATOM(_52ThisLine_48710);
    if (_14344 == 0)
    {
        _14344 = NOVALUE;
        goto LA; // [223] 286
    }
    else{
        _14344 = NOVALUE;
    }

    /** scanner.e:396			ThisLine = {END_OF_FILE_CHAR}*/
    _0 = _52ThisLine_48710;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 26;
    _52ThisLine_48710 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scanner.e:397			if src_file >= 0 and (src_file != repl_file or not repl) then*/
    _14346 = (_39src_file_16936 >= 0);
    if (_14346 == 0) {
        goto LB; // [242] 278
    }
    _14348 = (_39src_file_16936 != 5555);
    if (_14348 != 0) {
        DeRef(_14349);
        _14349 = 1;
        goto LC; // [254] 267
    }
    _14350 = (0 == 0);
    _14349 = (_14350 != 0);
LC: 
    if (_14349 == 0)
    {
        _14349 = NOVALUE;
        goto LB; // [268] 278
    }
    else{
        _14349 = NOVALUE;
    }

    /** scanner.e:398				close(src_file)*/
    EClose(_39src_file_16936);
LB: 

    /** scanner.e:400			src_file = -1*/
    _39src_file_16936 = -1;
LA: 

    /** scanner.e:403		bp = 1*/
    _52bp_48714 = 1;

    /** scanner.e:411		AppendSourceLine()*/
    _63AppendSourceLine();

    /** scanner.e:412	end procedure*/
    DeRef(_14346);
    _14346 = NOVALUE;
    DeRef(_14350);
    _14350 = NOVALUE;
    DeRef(_14348);
    _14348 = NOVALUE;
    return;
    ;
}


object _63getch()
{
    object _c_25573 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:417		c = ThisLine[bp]*/
    _2 = (object)SEQ_PTR(_52ThisLine_48710);
    _c_25573 = (object)*(((s1_ptr)_2)->base + _52bp_48714);
    if (!IS_ATOM_INT(_c_25573)){
        _c_25573 = (object)DBL_PTR(_c_25573)->dbl;
    }

    /** scanner.e:418		bp += 1*/
    _52bp_48714 = _52bp_48714 + 1;

    /** scanner.e:419		return c*/
    return _c_25573;
    ;
}


void _63ungetch()
{
    object _0, _1, _2;
    

    /** scanner.e:424		bp -= 1*/
    _52bp_48714 = _52bp_48714 - 1;

    /** scanner.e:425	end procedure*/
    return;
    ;
}


object _63get_file_path(object _s_25585)
{
    object _14359 = NOVALUE;
    object _14357 = NOVALUE;
    object _14356 = NOVALUE;
    object _14355 = NOVALUE;
    object _14354 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:429			for t=length(s) to 1 by -1 do*/
    if (IS_SEQUENCE(_s_25585)){
            _14354 = SEQ_PTR(_s_25585)->length;
    }
    else {
        _14354 = 1;
    }
    {
        object _t_25587;
        _t_25587 = _14354;
L1: 
        if (_t_25587 < 1){
            goto L2; // [8] 50
        }

        /** scanner.e:430					if find(s[t],SLASH_CHARS) then*/
        _2 = (object)SEQ_PTR(_s_25585);
        _14355 = (object)*(((s1_ptr)_2)->base + _t_25587);
        _14356 = find_from(_14355, _43SLASH_CHARS_21608, 1);
        _14355 = NOVALUE;
        if (_14356 == 0)
        {
            _14356 = NOVALUE;
            goto L3; // [28] 43
        }
        else{
            _14356 = NOVALUE;
        }

        /** scanner.e:431							return s[1..t]*/
        rhs_slice_target = (object_ptr)&_14357;
        RHS_Slice(_s_25585, 1, _t_25587);
        DeRefDS(_s_25585);
        return _14357;
L3: 

        /** scanner.e:433			end for*/
        _t_25587 = _t_25587 + -1;
        goto L1; // [45] 15
L2: 
        ;
    }

    /** scanner.e:435			return "." & SLASH*/
    Append(&_14359, _14358, 47);
    DeRefDS(_s_25585);
    DeRef(_14357);
    _14357 = NOVALUE;
    return _14359;
    ;
}


object _63find_file(object _fname_25599)
{
    object _try_25600 = NOVALUE;
    object _full_path_25601 = NOVALUE;
    object _errbuff_25602 = NOVALUE;
    object _currdir_25603 = NOVALUE;
    object _conf_path_25604 = NOVALUE;
    object _scan_result_25605 = NOVALUE;
    object _inc_path_25606 = NOVALUE;
    object _mainpath_25625 = NOVALUE;
    object _31710 = NOVALUE;
    object _31709 = NOVALUE;
    object _14456 = NOVALUE;
    object _14454 = NOVALUE;
    object _14453 = NOVALUE;
    object _14452 = NOVALUE;
    object _14450 = NOVALUE;
    object _14448 = NOVALUE;
    object _14446 = NOVALUE;
    object _14445 = NOVALUE;
    object _14443 = NOVALUE;
    object _14442 = NOVALUE;
    object _14439 = NOVALUE;
    object _14436 = NOVALUE;
    object _14435 = NOVALUE;
    object _14434 = NOVALUE;
    object _14433 = NOVALUE;
    object _14432 = NOVALUE;
    object _14431 = NOVALUE;
    object _14430 = NOVALUE;
    object _14429 = NOVALUE;
    object _14426 = NOVALUE;
    object _14425 = NOVALUE;
    object _14421 = NOVALUE;
    object _14418 = NOVALUE;
    object _14417 = NOVALUE;
    object _14416 = NOVALUE;
    object _14415 = NOVALUE;
    object _14414 = NOVALUE;
    object _14413 = NOVALUE;
    object _14412 = NOVALUE;
    object _14411 = NOVALUE;
    object _14408 = NOVALUE;
    object _14404 = NOVALUE;
    object _14402 = NOVALUE;
    object _14401 = NOVALUE;
    object _14400 = NOVALUE;
    object _14399 = NOVALUE;
    object _14398 = NOVALUE;
    object _14395 = NOVALUE;
    object _14394 = NOVALUE;
    object _14393 = NOVALUE;
    object _14392 = NOVALUE;
    object _14391 = NOVALUE;
    object _14390 = NOVALUE;
    object _14388 = NOVALUE;
    object _14387 = NOVALUE;
    object _14386 = NOVALUE;
    object _14385 = NOVALUE;
    object _14384 = NOVALUE;
    object _14382 = NOVALUE;
    object _14381 = NOVALUE;
    object _14378 = NOVALUE;
    object _14375 = NOVALUE;
    object _14373 = NOVALUE;
    object _14370 = NOVALUE;
    object _14368 = NOVALUE;
    object _14367 = NOVALUE;
    object _14364 = NOVALUE;
    object _14363 = NOVALUE;
    object _14361 = NOVALUE;
    object _14360 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:449		if absolute_path(fname) then*/
    RefDS(_fname_25599);
    _14360 = _16absolute_path(_fname_25599);
    if (_14360 == 0) {
        DeRef(_14360);
        _14360 = NOVALUE;
        goto L1; // [9] 42
    }
    else {
        if (!IS_ATOM_INT(_14360) && DBL_PTR(_14360)->dbl == 0.0){
            DeRef(_14360);
            _14360 = NOVALUE;
            goto L1; // [9] 42
        }
        DeRef(_14360);
        _14360 = NOVALUE;
    }
    DeRef(_14360);
    _14360 = NOVALUE;

    /** scanner.e:451			if not file_exists(fname) then*/
    RefDS(_fname_25599);
    _14361 = _16file_exists(_fname_25599);
    if (IS_ATOM_INT(_14361)) {
        if (_14361 != 0){
            DeRef(_14361);
            _14361 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    else {
        if (DBL_PTR(_14361)->dbl != 0.0){
            DeRef(_14361);
            _14361 = NOVALUE;
            goto L2; // [18] 35
        }
    }
    DeRef(_14361);
    _14361 = NOVALUE;

    /** scanner.e:452				CompileErr(51, {new_include_name})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_39new_include_name_16937);
    ((intptr_t*)_2)[1] = _39new_include_name_16937;
    _14363 = MAKE_SEQ(_1);
    _52CompileErr(51, _14363, 0);
    _14363 = NOVALUE;
L2: 

    /** scanner.e:455			return fname*/
    DeRef(_full_path_25601);
    DeRef(_errbuff_25602);
    DeRef(_currdir_25603);
    DeRef(_conf_path_25604);
    DeRef(_scan_result_25605);
    DeRef(_inc_path_25606);
    DeRef(_mainpath_25625);
    return _fname_25599;
L1: 

    /** scanner.e:460		currdir = get_file_path( known_files[current_file_no] )*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _14364 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_14364);
    _0 = _currdir_25603;
    _currdir_25603 = _63get_file_path(_14364);
    DeRef(_0);
    _14364 = NOVALUE;

    /** scanner.e:461		full_path = currdir & fname*/
    Concat((object_ptr)&_full_path_25601, _currdir_25603, _fname_25599);

    /** scanner.e:462		if file_exists(full_path) then*/
    RefDS(_full_path_25601);
    _14367 = _16file_exists(_full_path_25601);
    if (_14367 == 0) {
        DeRef(_14367);
        _14367 = NOVALUE;
        goto L3; // [70] 80
    }
    else {
        if (!IS_ATOM_INT(_14367) && DBL_PTR(_14367)->dbl == 0.0){
            DeRef(_14367);
            _14367 = NOVALUE;
            goto L3; // [70] 80
        }
        DeRef(_14367);
        _14367 = NOVALUE;
    }
    DeRef(_14367);
    _14367 = NOVALUE;

    /** scanner.e:463			return full_path*/
    DeRefDS(_fname_25599);
    DeRef(_errbuff_25602);
    DeRefDS(_currdir_25603);
    DeRef(_conf_path_25604);
    DeRef(_scan_result_25605);
    DeRef(_inc_path_25606);
    DeRef(_mainpath_25625);
    return _full_path_25601;
L3: 

    /** scanner.e:467		sequence mainpath = main_path[1..rfind(SLASH, main_path)]*/
    RefDS(_39main_path_16935);
    DeRef(_31709);
    _31709 = _39main_path_16935;
    if (IS_SEQUENCE(_31709)){
            _31710 = SEQ_PTR(_31709)->length;
    }
    else {
        _31710 = 1;
    }
    _31709 = NOVALUE;
    RefDS(_39main_path_16935);
    _14368 = _15rfind(47, _39main_path_16935, _31710);
    _31710 = NOVALUE;
    rhs_slice_target = (object_ptr)&_mainpath_25625;
    RHS_Slice(_39main_path_16935, 1, _14368);

    /** scanner.e:468		if not equal(mainpath, currdir) then*/
    if (_mainpath_25625 == _currdir_25603)
    _14370 = 1;
    else if (IS_ATOM_INT(_mainpath_25625) && IS_ATOM_INT(_currdir_25603))
    _14370 = 0;
    else
    _14370 = (compare(_mainpath_25625, _currdir_25603) == 0);
    if (_14370 != 0)
    goto L4; // [111] 139
    _14370 = NOVALUE;

    /** scanner.e:469			full_path = mainpath & new_include_name*/
    Concat((object_ptr)&_full_path_25601, _mainpath_25625, _39new_include_name_16937);

    /** scanner.e:470			if file_exists(full_path) then*/
    RefDS(_full_path_25601);
    _14373 = _16file_exists(_full_path_25601);
    if (_14373 == 0) {
        DeRef(_14373);
        _14373 = NOVALUE;
        goto L5; // [128] 138
    }
    else {
        if (!IS_ATOM_INT(_14373) && DBL_PTR(_14373)->dbl == 0.0){
            DeRef(_14373);
            _14373 = NOVALUE;
            goto L5; // [128] 138
        }
        DeRef(_14373);
        _14373 = NOVALUE;
    }
    DeRef(_14373);
    _14373 = NOVALUE;

    /** scanner.e:471				return full_path*/
    DeRefDS(_fname_25599);
    DeRef(_errbuff_25602);
    DeRefDS(_currdir_25603);
    DeRef(_conf_path_25604);
    DeRef(_scan_result_25605);
    DeRef(_inc_path_25606);
    DeRefDS(_mainpath_25625);
    _31709 = NOVALUE;
    DeRef(_14368);
    _14368 = NOVALUE;
    return _full_path_25601;
L5: 
L4: 

    /** scanner.e:475		scan_result = ConfPath(new_include_name)*/
    RefDS(_39new_include_name_16937);
    _0 = _scan_result_25605;
    _scan_result_25605 = _50ConfPath(_39new_include_name_16937);
    DeRef(_0);

    /** scanner.e:477		if atom(scan_result) then*/
    _14375 = IS_ATOM(_scan_result_25605);
    if (_14375 == 0)
    {
        _14375 = NOVALUE;
        goto L6; // [152] 164
    }
    else{
        _14375 = NOVALUE;
    }

    /** scanner.e:478			scan_result = ScanPath(fname,"EUINC",0)*/
    RefDS(_fname_25599);
    RefDS(_14376);
    _0 = _scan_result_25605;
    _scan_result_25605 = _50ScanPath(_fname_25599, _14376, 0);
    DeRef(_0);
L6: 

    /** scanner.e:481		if atom(scan_result) then*/
    _14378 = IS_ATOM(_scan_result_25605);
    if (_14378 == 0)
    {
        _14378 = NOVALUE;
        goto L7; // [169] 181
    }
    else{
        _14378 = NOVALUE;
    }

    /** scanner.e:482			scan_result = ScanPath(fname, "EUDIR",1)*/
    RefDS(_fname_25599);
    RefDS(_14379);
    _0 = _scan_result_25605;
    _scan_result_25605 = _50ScanPath(_fname_25599, _14379, 1);
    DeRef(_0);
L7: 

    /** scanner.e:485		if atom(scan_result) then*/
    _14381 = IS_ATOM(_scan_result_25605);
    if (_14381 == 0)
    {
        _14381 = NOVALUE;
        goto L8; // [186] 223
    }
    else{
        _14381 = NOVALUE;
    }

    /** scanner.e:487			full_path = get_eudir() & SLASH & "include" & SLASH & fname*/
    _14382 = _36get_eudir();
    {
        object concat_list[5];

        concat_list[0] = _fname_25599;
        concat_list[1] = 47;
        concat_list[2] = _13141;
        concat_list[3] = 47;
        concat_list[4] = _14382;
        Concat_N((object_ptr)&_full_path_25601, concat_list, 5);
    }
    DeRef(_14382);
    _14382 = NOVALUE;

    /** scanner.e:488			if file_exists(full_path) then*/
    RefDS(_full_path_25601);
    _14384 = _16file_exists(_full_path_25601);
    if (_14384 == 0) {
        DeRef(_14384);
        _14384 = NOVALUE;
        goto L9; // [212] 222
    }
    else {
        if (!IS_ATOM_INT(_14384) && DBL_PTR(_14384)->dbl == 0.0){
            DeRef(_14384);
            _14384 = NOVALUE;
            goto L9; // [212] 222
        }
        DeRef(_14384);
        _14384 = NOVALUE;
    }
    DeRef(_14384);
    _14384 = NOVALUE;

    /** scanner.e:489				return full_path*/
    DeRefDS(_fname_25599);
    DeRef(_errbuff_25602);
    DeRef(_currdir_25603);
    DeRef(_conf_path_25604);
    DeRef(_scan_result_25605);
    DeRef(_inc_path_25606);
    DeRef(_mainpath_25625);
    _31709 = NOVALUE;
    DeRef(_14368);
    _14368 = NOVALUE;
    return _full_path_25601;
L9: 
L8: 

    /** scanner.e:493		if sequence(scan_result) then*/
    _14385 = IS_SEQUENCE(_scan_result_25605);
    if (_14385 == 0)
    {
        _14385 = NOVALUE;
        goto LA; // [228] 250
    }
    else{
        _14385 = NOVALUE;
    }

    /** scanner.e:495			close(scan_result[2])*/
    _2 = (object)SEQ_PTR(_scan_result_25605);
    _14386 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_ATOM_INT(_14386))
    EClose(_14386);
    else
    EClose((object)DBL_PTR(_14386)->dbl);
    _14386 = NOVALUE;

    /** scanner.e:496			return scan_result[1]*/
    _2 = (object)SEQ_PTR(_scan_result_25605);
    _14387 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_14387);
    DeRefDS(_fname_25599);
    DeRef(_full_path_25601);
    DeRef(_errbuff_25602);
    DeRef(_currdir_25603);
    DeRef(_conf_path_25604);
    DeRef(_scan_result_25605);
    DeRef(_inc_path_25606);
    DeRef(_mainpath_25625);
    _31709 = NOVALUE;
    DeRef(_14368);
    _14368 = NOVALUE;
    return _14387;
LA: 

    /** scanner.e:500		errbuff = ""*/
    RefDS(_5);
    DeRef(_errbuff_25602);
    _errbuff_25602 = _5;

    /** scanner.e:501		full_path = {}*/
    RefDS(_5);
    DeRef(_full_path_25601);
    _full_path_25601 = _5;

    /** scanner.e:502		if length(currdir) > 0 then*/
    if (IS_SEQUENCE(_currdir_25603)){
            _14388 = SEQ_PTR(_currdir_25603)->length;
    }
    else {
        _14388 = 1;
    }
    if (_14388 <= 0)
    goto LB; // [269] 321

    /** scanner.e:503			if find(currdir[$], SLASH_CHARS) then*/
    if (IS_SEQUENCE(_currdir_25603)){
            _14390 = SEQ_PTR(_currdir_25603)->length;
    }
    else {
        _14390 = 1;
    }
    _2 = (object)SEQ_PTR(_currdir_25603);
    _14391 = (object)*(((s1_ptr)_2)->base + _14390);
    _14392 = find_from(_14391, _43SLASH_CHARS_21608, 1);
    _14391 = NOVALUE;
    if (_14392 == 0)
    {
        _14392 = NOVALUE;
        goto LC; // [289] 313
    }
    else{
        _14392 = NOVALUE;
    }

    /** scanner.e:504				full_path = append(full_path, currdir[1..$-1])*/
    if (IS_SEQUENCE(_currdir_25603)){
            _14393 = SEQ_PTR(_currdir_25603)->length;
    }
    else {
        _14393 = 1;
    }
    _14394 = _14393 - 1;
    _14393 = NOVALUE;
    rhs_slice_target = (object_ptr)&_14395;
    RHS_Slice(_currdir_25603, 1, _14394);
    RefDS(_14395);
    Append(&_full_path_25601, _full_path_25601, _14395);
    DeRefDS(_14395);
    _14395 = NOVALUE;
    goto LD; // [310] 320
LC: 

    /** scanner.e:506				full_path = append(full_path, currdir)*/
    RefDS(_currdir_25603);
    Append(&_full_path_25601, _full_path_25601, _currdir_25603);
LD: 
LB: 

    /** scanner.e:511		if find(main_path[$], SLASH_CHARS) then*/
    if (IS_SEQUENCE(_39main_path_16935)){
            _14398 = SEQ_PTR(_39main_path_16935)->length;
    }
    else {
        _14398 = 1;
    }
    _2 = (object)SEQ_PTR(_39main_path_16935);
    _14399 = (object)*(((s1_ptr)_2)->base + _14398);
    _14400 = find_from(_14399, _43SLASH_CHARS_21608, 1);
    _14399 = NOVALUE;
    if (_14400 == 0)
    {
        _14400 = NOVALUE;
        goto LE; // [339] 361
    }
    else{
        _14400 = NOVALUE;
    }

    /** scanner.e:512			errbuff = main_path[1..$-1]  -- looks better*/
    if (IS_SEQUENCE(_39main_path_16935)){
            _14401 = SEQ_PTR(_39main_path_16935)->length;
    }
    else {
        _14401 = 1;
    }
    _14402 = _14401 - 1;
    _14401 = NOVALUE;
    rhs_slice_target = (object_ptr)&_errbuff_25602;
    RHS_Slice(_39main_path_16935, 1, _14402);
    goto LF; // [358] 371
LE: 

    /** scanner.e:514			errbuff = main_path*/
    RefDS(_39main_path_16935);
    DeRef(_errbuff_25602);
    _errbuff_25602 = _39main_path_16935;
LF: 

    /** scanner.e:516		if not find(errbuff, full_path) then*/
    _14404 = find_from(_errbuff_25602, _full_path_25601, 1);
    if (_14404 != 0)
    goto L10; // [378] 388
    _14404 = NOVALUE;

    /** scanner.e:517			full_path = append(full_path, errbuff)*/
    RefDS(_errbuff_25602);
    Append(&_full_path_25601, _full_path_25601, _errbuff_25602);
L10: 

    /** scanner.e:520		conf_path = get_conf_dirs()*/
    _0 = _conf_path_25604;
    _conf_path_25604 = _50get_conf_dirs();
    DeRef(_0);

    /** scanner.e:521		if length(conf_path) > 0 then*/
    if (IS_SEQUENCE(_conf_path_25604)){
            _14408 = SEQ_PTR(_conf_path_25604)->length;
    }
    else {
        _14408 = 1;
    }
    if (_14408 <= 0)
    goto L11; // [400] 507

    /** scanner.e:522			conf_path = split(conf_path, PATHSEP)*/
    RefDS(_conf_path_25604);
    _0 = _conf_path_25604;
    _conf_path_25604 = _22split(_conf_path_25604, 58, 0, 0);
    DeRefDS(_0);

    /** scanner.e:523			for i = 1 to length(conf_path) do*/
    if (IS_SEQUENCE(_conf_path_25604)){
            _14411 = SEQ_PTR(_conf_path_25604)->length;
    }
    else {
        _14411 = 1;
    }
    {
        object _i_25706;
        _i_25706 = 1;
L12: 
        if (_i_25706 > _14411){
            goto L13; // [422] 506
        }

        /** scanner.e:524				if find(conf_path[i][$], SLASH_CHARS) then*/
        _2 = (object)SEQ_PTR(_conf_path_25604);
        _14412 = (object)*(((s1_ptr)_2)->base + _i_25706);
        if (IS_SEQUENCE(_14412)){
                _14413 = SEQ_PTR(_14412)->length;
        }
        else {
            _14413 = 1;
        }
        _2 = (object)SEQ_PTR(_14412);
        _14414 = (object)*(((s1_ptr)_2)->base + _14413);
        _14412 = NOVALUE;
        _14415 = find_from(_14414, _43SLASH_CHARS_21608, 1);
        _14414 = NOVALUE;
        if (_14415 == 0)
        {
            _14415 = NOVALUE;
            goto L14; // [449] 473
        }
        else{
            _14415 = NOVALUE;
        }

        /** scanner.e:525					errbuff = conf_path[i][1..$-1]  -- looks better*/
        _2 = (object)SEQ_PTR(_conf_path_25604);
        _14416 = (object)*(((s1_ptr)_2)->base + _i_25706);
        if (IS_SEQUENCE(_14416)){
                _14417 = SEQ_PTR(_14416)->length;
        }
        else {
            _14417 = 1;
        }
        _14418 = _14417 - 1;
        _14417 = NOVALUE;
        rhs_slice_target = (object_ptr)&_errbuff_25602;
        RHS_Slice(_14416, 1, _14418);
        _14416 = NOVALUE;
        goto L15; // [470] 482
L14: 

        /** scanner.e:527					errbuff = conf_path[i]*/
        DeRef(_errbuff_25602);
        _2 = (object)SEQ_PTR(_conf_path_25604);
        _errbuff_25602 = (object)*(((s1_ptr)_2)->base + _i_25706);
        Ref(_errbuff_25602);
L15: 

        /** scanner.e:529				if not find(errbuff, full_path) then*/
        _14421 = find_from(_errbuff_25602, _full_path_25601, 1);
        if (_14421 != 0)
        goto L16; // [489] 499
        _14421 = NOVALUE;

        /** scanner.e:530					full_path = append(full_path, errbuff)*/
        RefDS(_errbuff_25602);
        Append(&_full_path_25601, _full_path_25601, _errbuff_25602);
L16: 

        /** scanner.e:532			end for*/
        _i_25706 = _i_25706 + 1;
        goto L12; // [501] 429
L13: 
        ;
    }
L11: 

    /** scanner.e:535		inc_path = getenv("EUINC")*/
    DeRef(_inc_path_25606);
    _inc_path_25606 = EGetEnv(_14376);

    /** scanner.e:536		if sequence(inc_path) then*/
    _14425 = IS_SEQUENCE(_inc_path_25606);
    if (_14425 == 0)
    {
        _14425 = NOVALUE;
        goto L17; // [517] 631
    }
    else{
        _14425 = NOVALUE;
    }

    /** scanner.e:537			if length(inc_path) > 0 then*/
    if (IS_SEQUENCE(_inc_path_25606)){
            _14426 = SEQ_PTR(_inc_path_25606)->length;
    }
    else {
        _14426 = 1;
    }
    if (_14426 <= 0)
    goto L18; // [525] 630

    /** scanner.e:538				inc_path = split(inc_path, PATHSEP)*/
    Ref(_inc_path_25606);
    _0 = _inc_path_25606;
    _inc_path_25606 = _22split(_inc_path_25606, 58, 0, 0);
    DeRefi(_0);

    /** scanner.e:539				for i = 1 to length(inc_path) do*/
    if (IS_SEQUENCE(_inc_path_25606)){
            _14429 = SEQ_PTR(_inc_path_25606)->length;
    }
    else {
        _14429 = 1;
    }
    {
        object _i_25734;
        _i_25734 = 1;
L19: 
        if (_i_25734 > _14429){
            goto L1A; // [545] 629
        }

        /** scanner.e:540					if find(inc_path[i][$], SLASH_CHARS) then*/
        _2 = (object)SEQ_PTR(_inc_path_25606);
        _14430 = (object)*(((s1_ptr)_2)->base + _i_25734);
        if (IS_SEQUENCE(_14430)){
                _14431 = SEQ_PTR(_14430)->length;
        }
        else {
            _14431 = 1;
        }
        _2 = (object)SEQ_PTR(_14430);
        _14432 = (object)*(((s1_ptr)_2)->base + _14431);
        _14430 = NOVALUE;
        _14433 = find_from(_14432, _43SLASH_CHARS_21608, 1);
        _14432 = NOVALUE;
        if (_14433 == 0)
        {
            _14433 = NOVALUE;
            goto L1B; // [572] 596
        }
        else{
            _14433 = NOVALUE;
        }

        /** scanner.e:541						errbuff = inc_path[i][1..$-1]  -- looks better*/
        _2 = (object)SEQ_PTR(_inc_path_25606);
        _14434 = (object)*(((s1_ptr)_2)->base + _i_25734);
        if (IS_SEQUENCE(_14434)){
                _14435 = SEQ_PTR(_14434)->length;
        }
        else {
            _14435 = 1;
        }
        _14436 = _14435 - 1;
        _14435 = NOVALUE;
        rhs_slice_target = (object_ptr)&_errbuff_25602;
        RHS_Slice(_14434, 1, _14436);
        _14434 = NOVALUE;
        goto L1C; // [593] 605
L1B: 

        /** scanner.e:543						errbuff = inc_path[i]*/
        DeRef(_errbuff_25602);
        _2 = (object)SEQ_PTR(_inc_path_25606);
        _errbuff_25602 = (object)*(((s1_ptr)_2)->base + _i_25734);
        Ref(_errbuff_25602);
L1C: 

        /** scanner.e:545					if not find(errbuff, full_path) then*/
        _14439 = find_from(_errbuff_25602, _full_path_25601, 1);
        if (_14439 != 0)
        goto L1D; // [612] 622
        _14439 = NOVALUE;

        /** scanner.e:546						full_path = append(full_path, errbuff)*/
        RefDS(_errbuff_25602);
        Append(&_full_path_25601, _full_path_25601, _errbuff_25602);
L1D: 

        /** scanner.e:548				end for*/
        _i_25734 = _i_25734 + 1;
        goto L19; // [624] 552
L1A: 
        ;
    }
L18: 
L17: 

    /** scanner.e:552		if length(get_eudir()) > 0 then*/
    _14442 = _36get_eudir();
    if (IS_SEQUENCE(_14442)){
            _14443 = SEQ_PTR(_14442)->length;
    }
    else {
        _14443 = 1;
    }
    DeRef(_14442);
    _14442 = NOVALUE;
    if (_14443 <= 0)
    goto L1E; // [639] 667

    /** scanner.e:553			if not find(get_eudir(), full_path) then*/
    _14445 = _36get_eudir();
    _14446 = find_from(_14445, _full_path_25601, 1);
    DeRef(_14445);
    _14445 = NOVALUE;
    if (_14446 != 0)
    goto L1F; // [653] 666
    _14446 = NOVALUE;

    /** scanner.e:554				full_path = append(full_path, get_eudir())*/
    _14448 = _36get_eudir();
    Ref(_14448);
    Append(&_full_path_25601, _full_path_25601, _14448);
    DeRef(_14448);
    _14448 = NOVALUE;
L1F: 
L1E: 

    /** scanner.e:558		errbuff = ""*/
    RefDS(_5);
    DeRef(_errbuff_25602);
    _errbuff_25602 = _5;

    /** scanner.e:559		for i = 1 to length(full_path) do*/
    if (IS_SEQUENCE(_full_path_25601)){
            _14450 = SEQ_PTR(_full_path_25601)->length;
    }
    else {
        _14450 = 1;
    }
    {
        object _i_25766;
        _i_25766 = 1;
L20: 
        if (_i_25766 > _14450){
            goto L21; // [679] 711
        }

        /** scanner.e:560			errbuff &= sprintf("\t%s\n", {full_path[i]})*/
        _2 = (object)SEQ_PTR(_full_path_25601);
        _14452 = (object)*(((s1_ptr)_2)->base + _i_25766);
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_14452);
        ((intptr_t*)_2)[1] = _14452;
        _14453 = MAKE_SEQ(_1);
        _14452 = NOVALUE;
        _14454 = EPrintf(-9999999, _14451, _14453);
        DeRefDS(_14453);
        _14453 = NOVALUE;
        Concat((object_ptr)&_errbuff_25602, _errbuff_25602, _14454);
        DeRefDS(_14454);
        _14454 = NOVALUE;

        /** scanner.e:561		end for*/
        _i_25766 = _i_25766 + 1;
        goto L20; // [706] 686
L21: 
        ;
    }

    /** scanner.e:563		CompileErr(52, {new_include_name, errbuff})*/
    RefDS(_errbuff_25602);
    RefDS(_39new_include_name_16937);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _39new_include_name_16937;
    ((intptr_t *)_2)[2] = _errbuff_25602;
    _14456 = MAKE_SEQ(_1);
    _52CompileErr(52, _14456, 0);
    _14456 = NOVALUE;
    ;
}


object _63path_open()
{
    object _fh_25778 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:569		new_include_name = find_file(new_include_name)*/
    RefDS(_39new_include_name_16937);
    _0 = _63find_file(_39new_include_name_16937);
    DeRefDS(_39new_include_name_16937);
    _39new_include_name_16937 = _0;

    /** scanner.e:570		new_include_name = maybe_preprocess(new_include_name)*/
    RefDS(_39new_include_name_16937);
    _0 = _65maybe_preprocess(_39new_include_name_16937);
    DeRefDS(_39new_include_name_16937);
    _39new_include_name_16937 = _0;

    /** scanner.e:572		fh = open_locked(new_include_name)*/
    RefDS(_39new_include_name_16937);
    _fh_25778 = _36open_locked(_39new_include_name_16937);
    if (!IS_ATOM_INT(_fh_25778)) {
        _1 = (object)(DBL_PTR(_fh_25778)->dbl);
        DeRefDS(_fh_25778);
        _fh_25778 = _1;
    }

    /** scanner.e:573		return fh*/
    return _fh_25778;
    ;
}


object _63NameSpace_declaration(object _sym_25802)
{
    object _h_25803 = NOVALUE;
    object _14478 = NOVALUE;
    object _14476 = NOVALUE;
    object _14474 = NOVALUE;
    object _14472 = NOVALUE;
    object _14471 = NOVALUE;
    object _14470 = NOVALUE;
    object _14468 = NOVALUE;
    object _14467 = NOVALUE;
    object _14466 = NOVALUE;
    object _14465 = NOVALUE;
    object _14464 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_sym_25802)) {
        _1 = (object)(DBL_PTR(_sym_25802)->dbl);
        DeRefDS(_sym_25802);
        _sym_25802 = _1;
    }

    /** scanner.e:594		DefinedYet(sym)*/
    _56DefinedYet(_sym_25802);

    /** scanner.e:595		if find(SymTab[sym][S_SCOPE], {SC_GLOBAL, SC_PUBLIC, SC_EXPORT, SC_PREDEF}) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _14464 = (object)*(((s1_ptr)_2)->base + _sym_25802);
    _2 = (object)SEQ_PTR(_14464);
    _14465 = (object)*(((s1_ptr)_2)->base + 4);
    _14464 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 6;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 11;
    ((intptr_t*)_2)[4] = 7;
    _14466 = MAKE_SEQ(_1);
    _14467 = find_from(_14465, _14466, 1);
    _14465 = NOVALUE;
    DeRefDS(_14466);
    _14466 = NOVALUE;
    if (_14467 == 0)
    {
        _14467 = NOVALUE;
        goto L1; // [42] 104
    }
    else{
        _14467 = NOVALUE;
    }

    /** scanner.e:597			h = SymTab[sym][S_HASHVAL]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _14468 = (object)*(((s1_ptr)_2)->base + _sym_25802);
    _2 = (object)SEQ_PTR(_14468);
    _h_25803 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_h_25803)){
        _h_25803 = (object)DBL_PTR(_h_25803)->dbl;
    }
    _14468 = NOVALUE;

    /** scanner.e:599			sym = NewEntry(SymTab[sym][S_NAME], 0, 0, VARIABLE, h, buckets[h], 0)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _14470 = (object)*(((s1_ptr)_2)->base + _sym_25802);
    _2 = (object)SEQ_PTR(_14470);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _14471 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _14471 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _14470 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _14472 = (object)*(((s1_ptr)_2)->base + _h_25803);
    Ref(_14471);
    Ref(_14472);
    _sym_25802 = _56NewEntry(_14471, 0, 0, -100, _h_25803, _14472, 0);
    _14471 = NOVALUE;
    _14472 = NOVALUE;
    if (!IS_ATOM_INT(_sym_25802)) {
        _1 = (object)(DBL_PTR(_sym_25802)->dbl);
        DeRefDS(_sym_25802);
        _sym_25802 = _1;
    }

    /** scanner.e:600			buckets[h] = sym*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _2 = (object)(((s1_ptr)_2)->base + _h_25803);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _sym_25802;
    DeRef(_1);
L1: 

    /** scanner.e:602		SymTab[sym][S_SCOPE] = SC_LOCAL*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25802 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 5;
    DeRef(_1);
    _14474 = NOVALUE;

    /** scanner.e:603		SymTab[sym][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25802 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14476 = NOVALUE;

    /** scanner.e:604		SymTab[sym][S_TOKEN] = NAMESPACE -- [S_OBJ] will get the file number referred-to*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25802 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TOKEN_16475))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 523;
    DeRef(_1);
    _14478 = NOVALUE;

    /** scanner.e:605		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [159] 173
    }
    else{
    }

    /** scanner.e:606			num_routines += 1 -- order of ns declaration relative to routines*/
    _39num_routines_16824 = _39num_routines_16824 + 1;
L2: 

    /** scanner.e:609		return sym*/
    return _sym_25802;
    ;
}


void _63default_namespace()
{
    object _tok_25853 = NOVALUE;
    object _sym_25855 = NOVALUE;
    object _14502 = NOVALUE;
    object _14501 = NOVALUE;
    object _14499 = NOVALUE;
    object _14497 = NOVALUE;
    object _14494 = NOVALUE;
    object _14491 = NOVALUE;
    object _14489 = NOVALUE;
    object _14487 = NOVALUE;
    object _14486 = NOVALUE;
    object _14485 = NOVALUE;
    object _14484 = NOVALUE;
    object _14483 = NOVALUE;
    object _14482 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:618		tok = call_func( scanner_rid, {} )*/
    _0 = (object)_00[_63scanner_rid_25849].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25853);
    _tok_25853 = _1;

    /** scanner.e:619		if tok[T_ID] = VARIABLE and equal( SymTab[tok[T_SYM]][S_NAME], "namespace" ) then*/
    _2 = (object)SEQ_PTR(_tok_25853);
    _14482 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_14482)) {
        _14483 = (_14482 == -100);
    }
    else {
        _14483 = binary_op(EQUALS, _14482, -100);
    }
    _14482 = NOVALUE;
    if (IS_ATOM_INT(_14483)) {
        if (_14483 == 0) {
            goto L1; // [23] 177
        }
    }
    else {
        if (DBL_PTR(_14483)->dbl == 0.0) {
            goto L1; // [23] 177
        }
    }
    _2 = (object)SEQ_PTR(_tok_25853);
    _14485 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_14485)){
        _14486 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14485)->dbl));
    }
    else{
        _14486 = (object)*(((s1_ptr)_2)->base + _14485);
    }
    _2 = (object)SEQ_PTR(_14486);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _14487 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _14487 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _14486 = NOVALUE;
    if (_14487 == _14488)
    _14489 = 1;
    else if (IS_ATOM_INT(_14487) && IS_ATOM_INT(_14488))
    _14489 = 0;
    else
    _14489 = (compare(_14487, _14488) == 0);
    _14487 = NOVALUE;
    if (_14489 == 0)
    {
        _14489 = NOVALUE;
        goto L1; // [50] 177
    }
    else{
        _14489 = NOVALUE;
    }

    /** scanner.e:621			tok = call_func( scanner_rid, {} )*/
    _0 = (object)_00[_63scanner_rid_25849].addr;
    _1 = (*(intptr_t (*)())_0)(
                         );
    DeRef(_tok_25853);
    _tok_25853 = _1;

    /** scanner.e:622			if tok[T_ID] != VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_25853);
    _14491 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(EQUALS, _14491, -100)){
        _14491 = NOVALUE;
        goto L2; // [71] 83
    }
    _14491 = NOVALUE;

    /** scanner.e:623				CompileErr(114)*/
    RefDS(_21928);
    _52CompileErr(114, _21928, 0);
L2: 

    /** scanner.e:626			sym = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_25853);
    _sym_25855 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_sym_25855)){
        _sym_25855 = (object)DBL_PTR(_sym_25855)->dbl;
    }

    /** scanner.e:628			SymTab[sym][S_FILE_NO] = current_file_no*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25855 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FILE_NO_16466))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);
    _14494 = NOVALUE;

    /** scanner.e:629			sym  = NameSpace_declaration( sym )*/
    _sym_25855 = _63NameSpace_declaration(_sym_25855);
    if (!IS_ATOM_INT(_sym_25855)) {
        _1 = (object)(DBL_PTR(_sym_25855)->dbl);
        DeRefDS(_sym_25855);
        _sym_25855 = _1;
    }

    /** scanner.e:630			SymTab[sym][S_OBJ] = current_file_no*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25855 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);
    _14497 = NOVALUE;

    /** scanner.e:631			SymTab[sym][S_SCOPE] = SC_PUBLIC*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_sym_25855 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 13;
    DeRef(_1);
    _14499 = NOVALUE;

    /** scanner.e:633			default_namespaces[current_file_no] = SymTab[sym][S_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _14501 = (object)*(((s1_ptr)_2)->base + _sym_25855);
    _2 = (object)SEQ_PTR(_14501);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _14502 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _14502 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _14501 = NOVALUE;
    Ref(_14502);
    _2 = (object)SEQ_PTR(_63default_namespaces_25187);
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14502;
    if( _1 != _14502 ){
        DeRef(_1);
    }
    _14502 = NOVALUE;
    goto L3; // [174] 185
L1: 

    /** scanner.e:637			bp = 1*/
    _52bp_48714 = 1;
L3: 

    /** scanner.e:640	end procedure*/
    DeRef(_tok_25853);
    _14485 = NOVALUE;
    DeRef(_14483);
    _14483 = NOVALUE;
    return;
    ;
}


void _63add_exports(object _from_file_25905, object _to_file_25906)
{
    object _exports_25907 = NOVALUE;
    object _direct_25908 = NOVALUE;
    object _14522 = NOVALUE;
    object _14521 = NOVALUE;
    object _14520 = NOVALUE;
    object _14519 = NOVALUE;
    object _14518 = NOVALUE;
    object _14516 = NOVALUE;
    object _14514 = NOVALUE;
    object _14513 = NOVALUE;
    object _14511 = NOVALUE;
    object _14510 = NOVALUE;
    object _14509 = NOVALUE;
    object _14507 = NOVALUE;
    object _14506 = NOVALUE;
    object _14505 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:645		direct = file_include[to_file]*/
    DeRef(_direct_25908);
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _direct_25908 = (object)*(((s1_ptr)_2)->base + _to_file_25906);
    Ref(_direct_25908);

    /** scanner.e:646		exports = file_public[from_file]*/
    DeRef(_exports_25907);
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _exports_25907 = (object)*(((s1_ptr)_2)->base + _from_file_25905);
    Ref(_exports_25907);

    /** scanner.e:647		for i = 1 to length(exports) do*/
    if (IS_SEQUENCE(_exports_25907)){
            _14505 = SEQ_PTR(_exports_25907)->length;
    }
    else {
        _14505 = 1;
    }
    {
        object _i_25914;
        _i_25914 = 1;
L1: 
        if (_i_25914 > _14505){
            goto L2; // [30] 127
        }

        /** scanner.e:648			if not find( exports[i], direct ) then*/
        _2 = (object)SEQ_PTR(_exports_25907);
        _14506 = (object)*(((s1_ptr)_2)->base + _i_25914);
        _14507 = find_from(_14506, _direct_25908, 1);
        _14506 = NOVALUE;
        if (_14507 != 0)
        goto L3; // [48] 120
        _14507 = NOVALUE;

        /** scanner.e:649				if not find( -exports[i], direct ) then*/
        _2 = (object)SEQ_PTR(_exports_25907);
        _14509 = (object)*(((s1_ptr)_2)->base + _i_25914);
        if (IS_ATOM_INT(_14509)) {
            if ((uintptr_t)_14509 == (uintptr_t)HIGH_BITS){
                _14510 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14510 = - _14509;
            }
        }
        else {
            _14510 = unary_op(UMINUS, _14509);
        }
        _14509 = NOVALUE;
        _14511 = find_from(_14510, _direct_25908, 1);
        DeRef(_14510);
        _14510 = NOVALUE;
        if (_14511 != 0)
        goto L4; // [65] 82
        _14511 = NOVALUE;

        /** scanner.e:650					direct &= -exports[i]*/
        _2 = (object)SEQ_PTR(_exports_25907);
        _14513 = (object)*(((s1_ptr)_2)->base + _i_25914);
        if (IS_ATOM_INT(_14513)) {
            if ((uintptr_t)_14513 == (uintptr_t)HIGH_BITS){
                _14514 = (object)NewDouble((eudouble) -HIGH_BITS);
            }
            else{
                _14514 = - _14513;
            }
        }
        else {
            _14514 = unary_op(UMINUS, _14513);
        }
        _14513 = NOVALUE;
        if (IS_SEQUENCE(_direct_25908) && IS_ATOM(_14514)) {
            Ref(_14514);
            Append(&_direct_25908, _direct_25908, _14514);
        }
        else if (IS_ATOM(_direct_25908) && IS_SEQUENCE(_14514)) {
        }
        else {
            Concat((object_ptr)&_direct_25908, _direct_25908, _14514);
        }
        DeRef(_14514);
        _14514 = NOVALUE;
L4: 

        /** scanner.e:654				include_matrix[to_file][exports[i]] = or_bits( PUBLIC_INCLUDE, include_matrix[to_file][exports[i]] )*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        _3 = (object)(_to_file_25906 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_exports_25907);
        _14518 = (object)*(((s1_ptr)_2)->base + _i_25914);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _14519 = (object)*(((s1_ptr)_2)->base + _to_file_25906);
        _2 = (object)SEQ_PTR(_exports_25907);
        _14520 = (object)*(((s1_ptr)_2)->base + _i_25914);
        _2 = (object)SEQ_PTR(_14519);
        if (!IS_ATOM_INT(_14520)){
            _14521 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14520)->dbl));
        }
        else{
            _14521 = (object)*(((s1_ptr)_2)->base + _14520);
        }
        _14519 = NOVALUE;
        if (IS_ATOM_INT(_14521)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14521;
                 _14522 = MAKE_UINT(tu);
            }
        }
        else {
            _14522 = binary_op(OR_BITS, 4, _14521);
        }
        _14521 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14518))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14518)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _14518);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14522;
        if( _1 != _14522 ){
            DeRef(_1);
        }
        _14522 = NOVALUE;
        _14516 = NOVALUE;
L3: 

        /** scanner.e:656		end for*/
        _i_25914 = _i_25914 + 1;
        goto L1; // [122] 37
L2: 
        ;
    }

    /** scanner.e:657		file_include[to_file] = direct*/
    RefDS(_direct_25908);
    _2 = (object)SEQ_PTR(_36file_include_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _to_file_25906);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _direct_25908;
    DeRef(_1);

    /** scanner.e:658	end procedure*/
    DeRef(_exports_25907);
    DeRefDS(_direct_25908);
    _14520 = NOVALUE;
    _14518 = NOVALUE;
    return;
    ;
}


void _63patch_exports(object _for_file_25941)
{
    object _export_len_25942 = NOVALUE;
    object _14533 = NOVALUE;
    object _14532 = NOVALUE;
    object _14530 = NOVALUE;
    object _14529 = NOVALUE;
    object _14528 = NOVALUE;
    object _14527 = NOVALUE;
    object _14525 = NOVALUE;
    object _14524 = NOVALUE;
    object _14523 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:663		for i = 1 to length(file_include) do*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14523 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14523 = 1;
    }
    {
        object _i_25944;
        _i_25944 = 1;
L1: 
        if (_i_25944 > _14523){
            goto L2; // [10] 99
        }

        /** scanner.e:664			if find( for_file, file_include[i] ) or find( -for_file, file_include[i] ) then*/
        _2 = (object)SEQ_PTR(_36file_include_15409);
        _14524 = (object)*(((s1_ptr)_2)->base + _i_25944);
        _14525 = find_from(_for_file_25941, _14524, 1);
        _14524 = NOVALUE;
        if (_14525 != 0) {
            goto L3; // [30] 53
        }
        if ((uintptr_t)_for_file_25941 == (uintptr_t)HIGH_BITS){
            _14527 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _14527 = - _for_file_25941;
        }
        _2 = (object)SEQ_PTR(_36file_include_15409);
        _14528 = (object)*(((s1_ptr)_2)->base + _i_25944);
        _14529 = find_from(_14527, _14528, 1);
        DeRef(_14527);
        _14527 = NOVALUE;
        _14528 = NOVALUE;
        if (_14529 == 0)
        {
            _14529 = NOVALUE;
            goto L4; // [49] 92
        }
        else{
            _14529 = NOVALUE;
        }
L3: 

        /** scanner.e:665				export_len = length( file_include[i] )*/
        _2 = (object)SEQ_PTR(_36file_include_15409);
        _14530 = (object)*(((s1_ptr)_2)->base + _i_25944);
        if (IS_SEQUENCE(_14530)){
                _export_len_25942 = SEQ_PTR(_14530)->length;
        }
        else {
            _export_len_25942 = 1;
        }
        _14530 = NOVALUE;

        /** scanner.e:666				add_exports( for_file, i )*/
        _63add_exports(_for_file_25941, _i_25944);

        /** scanner.e:667				if length( file_include[i] ) != export_len then*/
        _2 = (object)SEQ_PTR(_36file_include_15409);
        _14532 = (object)*(((s1_ptr)_2)->base + _i_25944);
        if (IS_SEQUENCE(_14532)){
                _14533 = SEQ_PTR(_14532)->length;
        }
        else {
            _14533 = 1;
        }
        _14532 = NOVALUE;
        if (_14533 == _export_len_25942)
        goto L5; // [81] 91

        /** scanner.e:669					patch_exports( i )*/
        _63patch_exports(_i_25944);
L5: 
L4: 

        /** scanner.e:672		end for*/
        _i_25944 = _i_25944 + 1;
        goto L1; // [94] 17
L2: 
        ;
    }

    /** scanner.e:673	end procedure*/
    _14532 = NOVALUE;
    _14530 = NOVALUE;
    return;
    ;
}


void _63update_include_matrix(object _included_file_25966, object _from_file_25967)
{
    object _add_public_25977 = NOVALUE;
    object _px_25995 = NOVALUE;
    object _indirect_26054 = NOVALUE;
    object _mask_26057 = NOVALUE;
    object _ix_26068 = NOVALUE;
    object _indirect_file_26072 = NOVALUE;
    object _14609 = NOVALUE;
    object _14608 = NOVALUE;
    object _14606 = NOVALUE;
    object _14605 = NOVALUE;
    object _14604 = NOVALUE;
    object _14603 = NOVALUE;
    object _14602 = NOVALUE;
    object _14601 = NOVALUE;
    object _14600 = NOVALUE;
    object _14599 = NOVALUE;
    object _14598 = NOVALUE;
    object _14595 = NOVALUE;
    object _14593 = NOVALUE;
    object _14592 = NOVALUE;
    object _14591 = NOVALUE;
    object _14589 = NOVALUE;
    object _14587 = NOVALUE;
    object _14586 = NOVALUE;
    object _14584 = NOVALUE;
    object _14583 = NOVALUE;
    object _14582 = NOVALUE;
    object _14581 = NOVALUE;
    object _14580 = NOVALUE;
    object _14578 = NOVALUE;
    object _14577 = NOVALUE;
    object _14576 = NOVALUE;
    object _14575 = NOVALUE;
    object _14574 = NOVALUE;
    object _14573 = NOVALUE;
    object _14571 = NOVALUE;
    object _14570 = NOVALUE;
    object _14569 = NOVALUE;
    object _14567 = NOVALUE;
    object _14566 = NOVALUE;
    object _14565 = NOVALUE;
    object _14564 = NOVALUE;
    object _14563 = NOVALUE;
    object _14562 = NOVALUE;
    object _14561 = NOVALUE;
    object _14560 = NOVALUE;
    object _14559 = NOVALUE;
    object _14558 = NOVALUE;
    object _14557 = NOVALUE;
    object _14555 = NOVALUE;
    object _14554 = NOVALUE;
    object _14552 = NOVALUE;
    object _14550 = NOVALUE;
    object _14548 = NOVALUE;
    object _14547 = NOVALUE;
    object _14546 = NOVALUE;
    object _14545 = NOVALUE;
    object _14543 = NOVALUE;
    object _14542 = NOVALUE;
    object _14541 = NOVALUE;
    object _14539 = NOVALUE;
    object _14538 = NOVALUE;
    object _14537 = NOVALUE;
    object _14535 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:684		include_matrix[from_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[from_file][included_file] )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _3 = (object)(_from_file_25967 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14537 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    _2 = (object)SEQ_PTR(_14537);
    _14538 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
    _14537 = NOVALUE;
    if (IS_ATOM_INT(_14538)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14538;
             _14539 = MAKE_UINT(tu);
        }
    }
    else {
        _14539 = binary_op(OR_BITS, 2, _14538);
    }
    _14538 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25966);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14539;
    if( _1 != _14539 ){
        DeRef(_1);
    }
    _14539 = NOVALUE;
    _14535 = NOVALUE;

    /** scanner.e:686		if public_include then*/
    if (_63public_include_25184 == 0)
    {
        goto L1; // [38] 339
    }
    else{
    }

    /** scanner.e:689			sequence add_public = file_include_by[from_file]*/
    DeRef(_add_public_25977);
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _add_public_25977 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    Ref(_add_public_25977);

    /** scanner.e:690			for i = 1 to length( add_public ) do*/
    if (IS_SEQUENCE(_add_public_25977)){
            _14541 = SEQ_PTR(_add_public_25977)->length;
    }
    else {
        _14541 = 1;
    }
    {
        object _i_25981;
        _i_25981 = 1;
L2: 
        if (_i_25981 > _14541){
            goto L3; // [56] 107
        }

        /** scanner.e:692				include_matrix[add_public[i]][included_file] =*/
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14542 = (object)*(((s1_ptr)_2)->base + _i_25981);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14542))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14542)->dbl));
        else
        _3 = (object)(_14542 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14545 = (object)*(((s1_ptr)_2)->base + _i_25981);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!IS_ATOM_INT(_14545)){
            _14546 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14545)->dbl));
        }
        else{
            _14546 = (object)*(((s1_ptr)_2)->base + _14545);
        }
        _2 = (object)SEQ_PTR(_14546);
        _14547 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
        _14546 = NOVALUE;
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
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25966);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14548;
        if( _1 != _14548 ){
            DeRef(_1);
        }
        _14548 = NOVALUE;
        _14543 = NOVALUE;

        /** scanner.e:695			end for*/
        _i_25981 = _i_25981 + 1;
        goto L2; // [102] 63
L3: 
        ;
    }

    /** scanner.e:698			add_public = file_public_by[from_file]*/
    DeRef(_add_public_25977);
    _2 = (object)SEQ_PTR(_36file_public_by_15419);
    _add_public_25977 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    Ref(_add_public_25977);

    /** scanner.e:699			integer px = length( add_public ) + 1*/
    if (IS_SEQUENCE(_add_public_25977)){
            _14550 = SEQ_PTR(_add_public_25977)->length;
    }
    else {
        _14550 = 1;
    }
    _px_25995 = _14550 + 1;
    _14550 = NOVALUE;

    /** scanner.e:700			while px <= length( add_public ) do*/
L4: 
    if (IS_SEQUENCE(_add_public_25977)){
            _14552 = SEQ_PTR(_add_public_25977)->length;
    }
    else {
        _14552 = 1;
    }
    if (_px_25995 > _14552)
    goto L5; // [134] 338

    /** scanner.e:701				include_matrix[add_public[px]][included_file] =*/
    _2 = (object)SEQ_PTR(_add_public_25977);
    _14554 = (object)*(((s1_ptr)_2)->base + _px_25995);
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_14554))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14554)->dbl));
    else
    _3 = (object)(_14554 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_add_public_25977);
    _14557 = (object)*(((s1_ptr)_2)->base + _px_25995);
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!IS_ATOM_INT(_14557)){
        _14558 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14557)->dbl));
    }
    else{
        _14558 = (object)*(((s1_ptr)_2)->base + _14557);
    }
    _2 = (object)SEQ_PTR(_14558);
    _14559 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
    _14558 = NOVALUE;
    if (IS_ATOM_INT(_14559)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14559;
             _14560 = MAKE_UINT(tu);
        }
    }
    else {
        _14560 = binary_op(OR_BITS, 4, _14559);
    }
    _14559 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_25966);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14560;
    if( _1 != _14560 ){
        DeRef(_1);
    }
    _14560 = NOVALUE;
    _14555 = NOVALUE;

    /** scanner.e:704				for i = 1 to length( file_public_by[add_public[px]] ) do*/
    _2 = (object)SEQ_PTR(_add_public_25977);
    _14561 = (object)*(((s1_ptr)_2)->base + _px_25995);
    _2 = (object)SEQ_PTR(_36file_public_by_15419);
    if (!IS_ATOM_INT(_14561)){
        _14562 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14561)->dbl));
    }
    else{
        _14562 = (object)*(((s1_ptr)_2)->base + _14561);
    }
    if (IS_SEQUENCE(_14562)){
            _14563 = SEQ_PTR(_14562)->length;
    }
    else {
        _14563 = 1;
    }
    _14562 = NOVALUE;
    {
        object _i_26012;
        _i_26012 = 1;
L6: 
        if (_i_26012 > _14563){
            goto L7; // [190] 249
        }

        /** scanner.e:705					if not find( file_public[add_public[px]][i], add_public ) then*/
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14564 = (object)*(((s1_ptr)_2)->base + _px_25995);
        _2 = (object)SEQ_PTR(_36file_public_15415);
        if (!IS_ATOM_INT(_14564)){
            _14565 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14564)->dbl));
        }
        else{
            _14565 = (object)*(((s1_ptr)_2)->base + _14564);
        }
        _2 = (object)SEQ_PTR(_14565);
        _14566 = (object)*(((s1_ptr)_2)->base + _i_26012);
        _14565 = NOVALUE;
        _14567 = find_from(_14566, _add_public_25977, 1);
        _14566 = NOVALUE;
        if (_14567 != 0)
        goto L8; // [218] 242
        _14567 = NOVALUE;

        /** scanner.e:706						add_public &= file_public[add_public[px]][i]*/
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14569 = (object)*(((s1_ptr)_2)->base + _px_25995);
        _2 = (object)SEQ_PTR(_36file_public_15415);
        if (!IS_ATOM_INT(_14569)){
            _14570 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14569)->dbl));
        }
        else{
            _14570 = (object)*(((s1_ptr)_2)->base + _14569);
        }
        _2 = (object)SEQ_PTR(_14570);
        _14571 = (object)*(((s1_ptr)_2)->base + _i_26012);
        _14570 = NOVALUE;
        if (IS_SEQUENCE(_add_public_25977) && IS_ATOM(_14571)) {
            Ref(_14571);
            Append(&_add_public_25977, _add_public_25977, _14571);
        }
        else if (IS_ATOM(_add_public_25977) && IS_SEQUENCE(_14571)) {
        }
        else {
            Concat((object_ptr)&_add_public_25977, _add_public_25977, _14571);
        }
        _14571 = NOVALUE;
L8: 

        /** scanner.e:708				end for*/
        _i_26012 = _i_26012 + 1;
        goto L6; // [244] 197
L7: 
        ;
    }

    /** scanner.e:710				for i = 1 to length( file_include_by[add_public[px]] ) do*/
    _2 = (object)SEQ_PTR(_add_public_25977);
    _14573 = (object)*(((s1_ptr)_2)->base + _px_25995);
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    if (!IS_ATOM_INT(_14573)){
        _14574 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14573)->dbl));
    }
    else{
        _14574 = (object)*(((s1_ptr)_2)->base + _14573);
    }
    if (IS_SEQUENCE(_14574)){
            _14575 = SEQ_PTR(_14574)->length;
    }
    else {
        _14575 = 1;
    }
    _14574 = NOVALUE;
    {
        object _i_26030;
        _i_26030 = 1;
L9: 
        if (_i_26030 > _14575){
            goto LA; // [264] 327
        }

        /** scanner.e:711					include_matrix[file_include_by[add_public[px]]][included_file] =*/
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14576 = (object)*(((s1_ptr)_2)->base + _px_25995);
        _2 = (object)SEQ_PTR(_36file_include_by_15417);
        if (!IS_ATOM_INT(_14576)){
            _14577 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14576)->dbl));
        }
        else{
            _14577 = (object)*(((s1_ptr)_2)->base + _14576);
        }
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_14577))
        _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_14577)->dbl));
        else
        _3 = (object)(_14577 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_add_public_25977);
        _14580 = (object)*(((s1_ptr)_2)->base + _px_25995);
        _2 = (object)SEQ_PTR(_36file_include_by_15417);
        if (!IS_ATOM_INT(_14580)){
            _14581 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14580)->dbl));
        }
        else{
            _14581 = (object)*(((s1_ptr)_2)->base + _14580);
        }
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!IS_ATOM_INT(_14581)){
            _14582 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_14581)->dbl));
        }
        else{
            _14582 = (object)*(((s1_ptr)_2)->base + _14581);
        }
        _2 = (object)SEQ_PTR(_14582);
        _14583 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
        _14582 = NOVALUE;
        if (IS_ATOM_INT(_14583)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14583;
                 _14584 = MAKE_UINT(tu);
            }
        }
        else {
            _14584 = binary_op(OR_BITS, 4, _14583);
        }
        _14583 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _included_file_25966);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14584;
        if( _1 != _14584 ){
            DeRef(_1);
        }
        _14584 = NOVALUE;
        _14578 = NOVALUE;

        /** scanner.e:713				end for*/
        _i_26030 = _i_26030 + 1;
        goto L9; // [322] 271
LA: 
        ;
    }

    /** scanner.e:715				px += 1*/
    _px_25995 = _px_25995 + 1;

    /** scanner.e:716			end while*/
    goto L4; // [335] 131
L5: 
L1: 
    DeRef(_add_public_25977);
    _add_public_25977 = NOVALUE;

    /** scanner.e:721		if indirect_include[from_file][included_file] then*/
    _2 = (object)SEQ_PTR(_36indirect_include_15413);
    _14586 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    _2 = (object)SEQ_PTR(_14586);
    _14587 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
    _14586 = NOVALUE;
    if (_14587 == 0) {
        _14587 = NOVALUE;
        goto LB; // [353] 545
    }
    else {
        if (!IS_ATOM_INT(_14587) && DBL_PTR(_14587)->dbl == 0.0){
            _14587 = NOVALUE;
            goto LB; // [353] 545
        }
        _14587 = NOVALUE;
    }
    _14587 = NOVALUE;

    /** scanner.e:723			sequence indirect = file_include_by[from_file]*/
    DeRef(_indirect_26054);
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _indirect_26054 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    Ref(_indirect_26054);

    /** scanner.e:725			sequence mask = include_matrix[included_file] != 0*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14589 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
    DeRef(_mask_26057);
    if (IS_ATOM_INT(_14589)) {
        _mask_26057 = (_14589 != 0);
    }
    else {
        _mask_26057 = binary_op(NOTEQ, _14589, 0);
    }
    _14589 = NOVALUE;

    /** scanner.e:726			include_matrix[from_file] = or_bits( include_matrix[from_file], mask )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14591 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    _14592 = binary_op(OR_BITS, _14591, _mask_26057);
    _14591 = NOVALUE;
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _from_file_25967);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14592;
    if( _1 != _14592 ){
        DeRef(_1);
    }
    _14592 = NOVALUE;

    /** scanner.e:727			mask = include_matrix[from_file] != 0*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14593 = (object)*(((s1_ptr)_2)->base + _from_file_25967);
    DeRefDS(_mask_26057);
    if (IS_ATOM_INT(_14593)) {
        _mask_26057 = (_14593 != 0);
    }
    else {
        _mask_26057 = binary_op(NOTEQ, _14593, 0);
    }
    _14593 = NOVALUE;

    /** scanner.e:728			integer ix = 1*/
    _ix_26068 = 1;

    /** scanner.e:729			while ix <= length(indirect) do*/
LC: 
    if (IS_SEQUENCE(_indirect_26054)){
            _14595 = SEQ_PTR(_indirect_26054)->length;
    }
    else {
        _14595 = 1;
    }
    if (_ix_26068 > _14595)
    goto LD; // [425] 544

    /** scanner.e:730				integer indirect_file = indirect[ix]*/
    _2 = (object)SEQ_PTR(_indirect_26054);
    _indirect_file_26072 = (object)*(((s1_ptr)_2)->base + _ix_26068);
    if (!IS_ATOM_INT(_indirect_file_26072))
    _indirect_file_26072 = (object)DBL_PTR(_indirect_file_26072)->dbl;

    /** scanner.e:731				if indirect_include[indirect_file][included_file] then*/
    _2 = (object)SEQ_PTR(_36indirect_include_15413);
    _14598 = (object)*(((s1_ptr)_2)->base + _indirect_file_26072);
    _2 = (object)SEQ_PTR(_14598);
    _14599 = (object)*(((s1_ptr)_2)->base + _included_file_25966);
    _14598 = NOVALUE;
    if (_14599 == 0) {
        _14599 = NOVALUE;
        goto LE; // [447] 531
    }
    else {
        if (!IS_ATOM_INT(_14599) && DBL_PTR(_14599)->dbl == 0.0){
            _14599 = NOVALUE;
            goto LE; // [447] 531
        }
        _14599 = NOVALUE;
    }
    _14599 = NOVALUE;

    /** scanner.e:732					include_matrix[indirect_file] =*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14600 = (object)*(((s1_ptr)_2)->base + _indirect_file_26072);
    _14601 = binary_op(OR_BITS, _mask_26057, _14600);
    _14600 = NOVALUE;
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _indirect_file_26072);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14601;
    if( _1 != _14601 ){
        DeRef(_1);
    }
    _14601 = NOVALUE;

    /** scanner.e:734					for i = 1 to length( file_include_by[indirect_file] ) do*/
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _14602 = (object)*(((s1_ptr)_2)->base + _indirect_file_26072);
    if (IS_SEQUENCE(_14602)){
            _14603 = SEQ_PTR(_14602)->length;
    }
    else {
        _14603 = 1;
    }
    _14602 = NOVALUE;
    {
        object _i_26083;
        _i_26083 = 1;
LF: 
        if (_i_26083 > _14603){
            goto L10; // [479] 530
        }

        /** scanner.e:736						if not find( file_include_by[indirect_file][i], indirect ) then*/
        _2 = (object)SEQ_PTR(_36file_include_by_15417);
        _14604 = (object)*(((s1_ptr)_2)->base + _indirect_file_26072);
        _2 = (object)SEQ_PTR(_14604);
        _14605 = (object)*(((s1_ptr)_2)->base + _i_26083);
        _14604 = NOVALUE;
        _14606 = find_from(_14605, _indirect_26054, 1);
        _14605 = NOVALUE;
        if (_14606 != 0)
        goto L11; // [503] 523
        _14606 = NOVALUE;

        /** scanner.e:737							indirect &= file_include_by[indirect_file][i]*/
        _2 = (object)SEQ_PTR(_36file_include_by_15417);
        _14608 = (object)*(((s1_ptr)_2)->base + _indirect_file_26072);
        _2 = (object)SEQ_PTR(_14608);
        _14609 = (object)*(((s1_ptr)_2)->base + _i_26083);
        _14608 = NOVALUE;
        if (IS_SEQUENCE(_indirect_26054) && IS_ATOM(_14609)) {
            Ref(_14609);
            Append(&_indirect_26054, _indirect_26054, _14609);
        }
        else if (IS_ATOM(_indirect_26054) && IS_SEQUENCE(_14609)) {
        }
        else {
            Concat((object_ptr)&_indirect_26054, _indirect_26054, _14609);
        }
        _14609 = NOVALUE;
L11: 

        /** scanner.e:740					end for*/
        _i_26083 = _i_26083 + 1;
        goto LF; // [525] 486
L10: 
        ;
    }
LE: 

    /** scanner.e:742				ix += 1*/
    _ix_26068 = _ix_26068 + 1;

    /** scanner.e:743			end while*/
    goto LC; // [541] 422
LD: 
LB: 
    DeRef(_indirect_26054);
    _indirect_26054 = NOVALUE;
    DeRef(_mask_26057);
    _mask_26057 = NOVALUE;

    /** scanner.e:746		public_include = FALSE*/
    _63public_include_25184 = _9FALSE_442;

    /** scanner.e:747	end procedure*/
    _14573 = NOVALUE;
    _14554 = NOVALUE;
    _14561 = NOVALUE;
    _14545 = NOVALUE;
    _14557 = NOVALUE;
    _14542 = NOVALUE;
    _14569 = NOVALUE;
    _14580 = NOVALUE;
    _14576 = NOVALUE;
    _14562 = NOVALUE;
    _14564 = NOVALUE;
    _14602 = NOVALUE;
    _14581 = NOVALUE;
    _14577 = NOVALUE;
    _14574 = NOVALUE;
    return;
    ;
}


void _63add_include_by(object _by_file_26101, object _included_file_26102, object _is_public_26103)
{
    object _14656 = NOVALUE;
    object _14655 = NOVALUE;
    object _14654 = NOVALUE;
    object _14652 = NOVALUE;
    object _14651 = NOVALUE;
    object _14650 = NOVALUE;
    object _14649 = NOVALUE;
    object _14647 = NOVALUE;
    object _14646 = NOVALUE;
    object _14645 = NOVALUE;
    object _14644 = NOVALUE;
    object _14643 = NOVALUE;
    object _14642 = NOVALUE;
    object _14641 = NOVALUE;
    object _14640 = NOVALUE;
    object _14638 = NOVALUE;
    object _14637 = NOVALUE;
    object _14636 = NOVALUE;
    object _14635 = NOVALUE;
    object _14633 = NOVALUE;
    object _14632 = NOVALUE;
    object _14631 = NOVALUE;
    object _14630 = NOVALUE;
    object _14628 = NOVALUE;
    object _14627 = NOVALUE;
    object _14626 = NOVALUE;
    object _14625 = NOVALUE;
    object _14623 = NOVALUE;
    object _14622 = NOVALUE;
    object _14621 = NOVALUE;
    object _14620 = NOVALUE;
    object _14619 = NOVALUE;
    object _14617 = NOVALUE;
    object _14616 = NOVALUE;
    object _14615 = NOVALUE;
    object _14614 = NOVALUE;
    object _14612 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:750		include_matrix[by_file][included_file] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][included_file] )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26101 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14614 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    _2 = (object)SEQ_PTR(_14614);
    _14615 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    _14614 = NOVALUE;
    if (IS_ATOM_INT(_14615)) {
        {uintptr_t tu;
             tu = (uintptr_t)2 | (uintptr_t)_14615;
             _14616 = MAKE_UINT(tu);
        }
    }
    else {
        _14616 = binary_op(OR_BITS, 2, _14615);
    }
    _14615 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26102);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14616;
    if( _1 != _14616 ){
        DeRef(_1);
    }
    _14616 = NOVALUE;
    _14612 = NOVALUE;

    /** scanner.e:751		if is_public then*/
    if (_is_public_26103 == 0)
    {
        goto L1; // [38] 71
    }
    else{
    }

    /** scanner.e:752			include_matrix[by_file][included_file] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][included_file] )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _3 = (object)(_by_file_26101 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14619 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    _2 = (object)SEQ_PTR(_14619);
    _14620 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    _14619 = NOVALUE;
    if (IS_ATOM_INT(_14620)) {
        {uintptr_t tu;
             tu = (uintptr_t)4 | (uintptr_t)_14620;
             _14621 = MAKE_UINT(tu);
        }
    }
    else {
        _14621 = binary_op(OR_BITS, 4, _14620);
    }
    _14620 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26102);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14621;
    if( _1 != _14621 ){
        DeRef(_1);
    }
    _14621 = NOVALUE;
    _14617 = NOVALUE;
L1: 

    /** scanner.e:754		if not find( by_file, file_include_by[included_file] ) then*/
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _14622 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    _14623 = find_from(_by_file_26101, _14622, 1);
    _14622 = NOVALUE;
    if (_14623 != 0)
    goto L2; // [84] 104
    _14623 = NOVALUE;

    /** scanner.e:755			file_include_by[included_file] &= by_file*/
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _14625 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    if (IS_SEQUENCE(_14625) && IS_ATOM(_by_file_26101)) {
        Append(&_14626, _14625, _by_file_26101);
    }
    else if (IS_ATOM(_14625) && IS_SEQUENCE(_by_file_26101)) {
    }
    else {
        Concat((object_ptr)&_14626, _14625, _by_file_26101);
        _14625 = NOVALUE;
    }
    _14625 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_by_15417);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26102);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14626;
    if( _1 != _14626 ){
        DeRef(_1);
    }
    _14626 = NOVALUE;
L2: 

    /** scanner.e:758		if not find( included_file, file_include[by_file] ) then*/
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14627 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    _14628 = find_from(_included_file_26102, _14627, 1);
    _14627 = NOVALUE;
    if (_14628 != 0)
    goto L3; // [117] 137
    _14628 = NOVALUE;

    /** scanner.e:759			file_include[by_file] &= included_file*/
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14630 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    if (IS_SEQUENCE(_14630) && IS_ATOM(_included_file_26102)) {
        Append(&_14631, _14630, _included_file_26102);
    }
    else if (IS_ATOM(_14630) && IS_SEQUENCE(_included_file_26102)) {
    }
    else {
        Concat((object_ptr)&_14631, _14630, _included_file_26102);
        _14630 = NOVALUE;
    }
    _14630 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26101);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14631;
    if( _1 != _14631 ){
        DeRef(_1);
    }
    _14631 = NOVALUE;
L3: 

    /** scanner.e:762		if is_public then*/
    if (_is_public_26103 == 0)
    {
        goto L4; // [139] 209
    }
    else{
    }

    /** scanner.e:763			if not find( by_file, file_public_by[included_file] ) then*/
    _2 = (object)SEQ_PTR(_36file_public_by_15419);
    _14632 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    _14633 = find_from(_by_file_26101, _14632, 1);
    _14632 = NOVALUE;
    if (_14633 != 0)
    goto L5; // [155] 175
    _14633 = NOVALUE;

    /** scanner.e:764				file_public_by[included_file] &= by_file*/
    _2 = (object)SEQ_PTR(_36file_public_by_15419);
    _14635 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    if (IS_SEQUENCE(_14635) && IS_ATOM(_by_file_26101)) {
        Append(&_14636, _14635, _by_file_26101);
    }
    else if (IS_ATOM(_14635) && IS_SEQUENCE(_by_file_26101)) {
    }
    else {
        Concat((object_ptr)&_14636, _14635, _by_file_26101);
        _14635 = NOVALUE;
    }
    _14635 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_public_by_15419);
    _2 = (object)(((s1_ptr)_2)->base + _included_file_26102);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14636;
    if( _1 != _14636 ){
        DeRef(_1);
    }
    _14636 = NOVALUE;
L5: 

    /** scanner.e:767			if not find( included_file, file_public[by_file] ) then*/
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _14637 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    _14638 = find_from(_included_file_26102, _14637, 1);
    _14637 = NOVALUE;
    if (_14638 != 0)
    goto L6; // [188] 208
    _14638 = NOVALUE;

    /** scanner.e:768				file_public[by_file] &= included_file*/
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _14640 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
    if (IS_SEQUENCE(_14640) && IS_ATOM(_included_file_26102)) {
        Append(&_14641, _14640, _included_file_26102);
    }
    else if (IS_ATOM(_14640) && IS_SEQUENCE(_included_file_26102)) {
    }
    else {
        Concat((object_ptr)&_14641, _14640, _included_file_26102);
        _14640 = NOVALUE;
    }
    _14640 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _2 = (object)(((s1_ptr)_2)->base + _by_file_26101);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14641;
    if( _1 != _14641 ){
        DeRef(_1);
    }
    _14641 = NOVALUE;
L6: 
L4: 

    /** scanner.e:772		for propagate = 1 to length( include_matrix[included_file] ) do*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _14642 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
    if (IS_SEQUENCE(_14642)){
            _14643 = SEQ_PTR(_14642)->length;
    }
    else {
        _14643 = 1;
    }
    _14642 = NOVALUE;
    {
        object _propagate_26155;
        _propagate_26155 = 1;
L7: 
        if (_propagate_26155 > _14643){
            goto L8; // [220] 320
        }

        /** scanner.e:773			if and_bits( PUBLIC_INCLUDE, include_matrix[included_file][propagate] ) then*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _14644 = (object)*(((s1_ptr)_2)->base + _included_file_26102);
        _2 = (object)SEQ_PTR(_14644);
        _14645 = (object)*(((s1_ptr)_2)->base + _propagate_26155);
        _14644 = NOVALUE;
        if (IS_ATOM_INT(_14645)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 & (uintptr_t)_14645;
                 _14646 = MAKE_UINT(tu);
            }
        }
        else {
            _14646 = binary_op(AND_BITS, 4, _14645);
        }
        _14645 = NOVALUE;
        if (_14646 == 0) {
            DeRef(_14646);
            _14646 = NOVALUE;
            goto L9; // [245] 313
        }
        else {
            if (!IS_ATOM_INT(_14646) && DBL_PTR(_14646)->dbl == 0.0){
                DeRef(_14646);
                _14646 = NOVALUE;
                goto L9; // [245] 313
            }
            DeRef(_14646);
            _14646 = NOVALUE;
        }
        DeRef(_14646);
        _14646 = NOVALUE;

        /** scanner.e:774				include_matrix[by_file][propagate] = or_bits( DIRECT_INCLUDE, include_matrix[by_file][propagate] )*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26101 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _14649 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
        _2 = (object)SEQ_PTR(_14649);
        _14650 = (object)*(((s1_ptr)_2)->base + _propagate_26155);
        _14649 = NOVALUE;
        if (IS_ATOM_INT(_14650)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 | (uintptr_t)_14650;
                 _14651 = MAKE_UINT(tu);
            }
        }
        else {
            _14651 = binary_op(OR_BITS, 2, _14650);
        }
        _14650 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26155);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14651;
        if( _1 != _14651 ){
            DeRef(_1);
        }
        _14651 = NOVALUE;
        _14647 = NOVALUE;

        /** scanner.e:775				if is_public then*/
        if (_is_public_26103 == 0)
        {
            goto LA; // [279] 312
        }
        else{
        }

        /** scanner.e:776					include_matrix[by_file][propagate] = or_bits( PUBLIC_INCLUDE, include_matrix[by_file][propagate] )*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        _3 = (object)(_by_file_26101 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _14654 = (object)*(((s1_ptr)_2)->base + _by_file_26101);
        _2 = (object)SEQ_PTR(_14654);
        _14655 = (object)*(((s1_ptr)_2)->base + _propagate_26155);
        _14654 = NOVALUE;
        if (IS_ATOM_INT(_14655)) {
            {uintptr_t tu;
                 tu = (uintptr_t)4 | (uintptr_t)_14655;
                 _14656 = MAKE_UINT(tu);
            }
        }
        else {
            _14656 = binary_op(OR_BITS, 4, _14655);
        }
        _14655 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _propagate_26155);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14656;
        if( _1 != _14656 ){
            DeRef(_1);
        }
        _14656 = NOVALUE;
        _14652 = NOVALUE;
LA: 
L9: 

        /** scanner.e:779		end for*/
        _propagate_26155 = _propagate_26155 + 1;
        goto L7; // [315] 227
L8: 
        ;
    }

    /** scanner.e:780	end procedure*/
    _14642 = NOVALUE;
    return;
    ;
}


void _63IncludePush()
{
    object _new_file_handle_26184 = NOVALUE;
    object _old_file_no_26185 = NOVALUE;
    object _new_hash_26186 = NOVALUE;
    object _idx_26187 = NOVALUE;
    object _14743 = NOVALUE;
    object _14740 = NOVALUE;
    object _14738 = NOVALUE;
    object _14737 = NOVALUE;
    object _14736 = NOVALUE;
    object _14734 = NOVALUE;
    object _14733 = NOVALUE;
    object _14727 = NOVALUE;
    object _14726 = NOVALUE;
    object _14725 = NOVALUE;
    object _14724 = NOVALUE;
    object _14723 = NOVALUE;
    object _14722 = NOVALUE;
    object _14721 = NOVALUE;
    object _14718 = NOVALUE;
    object _14716 = NOVALUE;
    object _14714 = NOVALUE;
    object _14713 = NOVALUE;
    object _14712 = NOVALUE;
    object _14710 = NOVALUE;
    object _14709 = NOVALUE;
    object _14707 = NOVALUE;
    object _14706 = NOVALUE;
    object _14704 = NOVALUE;
    object _14703 = NOVALUE;
    object _14702 = NOVALUE;
    object _14701 = NOVALUE;
    object _14700 = NOVALUE;
    object _14699 = NOVALUE;
    object _14698 = NOVALUE;
    object _14694 = NOVALUE;
    object _14692 = NOVALUE;
    object _14691 = NOVALUE;
    object _14690 = NOVALUE;
    object _14689 = NOVALUE;
    object _14688 = NOVALUE;
    object _14687 = NOVALUE;
    object _14686 = NOVALUE;
    object _14685 = NOVALUE;
    object _14684 = NOVALUE;
    object _14682 = NOVALUE;
    object _14681 = NOVALUE;
    object _14680 = NOVALUE;
    object _14678 = NOVALUE;
    object _14677 = NOVALUE;
    object _14676 = NOVALUE;
    object _14675 = NOVALUE;
    object _14673 = NOVALUE;
    object _14672 = NOVALUE;
    object _14671 = NOVALUE;
    object _14670 = NOVALUE;
    object _14669 = NOVALUE;
    object _14667 = NOVALUE;
    object _14666 = NOVALUE;
    object _14665 = NOVALUE;
    object _14664 = NOVALUE;
    object _14662 = NOVALUE;
    object _14658 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:788		start_include = FALSE*/
    _63start_include_25181 = _9FALSE_442;

    /** scanner.e:790		new_file_handle = path_open() -- sets new_include_name to full path*/
    _new_file_handle_26184 = _63path_open();
    if (!IS_ATOM_INT(_new_file_handle_26184)) {
        _1 = (object)(DBL_PTR(_new_file_handle_26184)->dbl);
        DeRefDS(_new_file_handle_26184);
        _new_file_handle_26184 = _1;
    }

    /** scanner.e:792		new_hash = hash(canonical_path(new_include_name,,CORRECT), stdhash:HSIEH32)*/
    RefDS(_39new_include_name_16937);
    _14658 = _16canonical_path(_39new_include_name_16937, 0, 2);
    DeRef(_new_hash_26186);
    _new_hash_26186 = calc_hash(_14658, -5);
    DeRef(_14658);
    _14658 = NOVALUE;

    /** scanner.e:794		idx = find(new_hash, known_files_hash)*/
    _idx_26187 = find_from(_new_hash_26186, _36known_files_hash_15406, 1);

    /** scanner.e:795		if idx then*/
    if (_idx_26187 == 0)
    {
        goto L1; // [42] 335
    }
    else{
    }

    /** scanner.e:797			if new_include_space != 0 then*/
    if (_63new_include_space_25179 == 0)
    goto L2; // [49] 71

    /** scanner.e:798				SymTab[new_include_space][S_OBJ] = idx -- but note any namespace*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_63new_include_space_25179 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26187;
    DeRef(_1);
    _14662 = NOVALUE;
L2: 

    /** scanner.e:801			close(new_file_handle)*/
    EClose(_new_file_handle_26184);

    /** scanner.e:803			if find( -idx, file_include[current_file_no] ) then*/
    if ((uintptr_t)_idx_26187 == (uintptr_t)HIGH_BITS){
        _14664 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14664 = - _idx_26187;
    }
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14665 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _14666 = find_from(_14664, _14665, 1);
    DeRef(_14664);
    _14664 = NOVALUE;
    _14665 = NOVALUE;
    if (_14666 == 0)
    {
        _14666 = NOVALUE;
        goto L3; // [93] 130
    }
    else{
        _14666 = NOVALUE;
    }

    /** scanner.e:805				file_include[current_file_no][ find( -idx, file_include[current_file_no] ) ] = idx*/
    _2 = (object)SEQ_PTR(_36file_include_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_15409 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39current_file_no_16815 + ((s1_ptr)_2)->base);
    if ((uintptr_t)_idx_26187 == (uintptr_t)HIGH_BITS){
        _14669 = (object)NewDouble((eudouble) -HIGH_BITS);
    }
    else{
        _14669 = - _idx_26187;
    }
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14670 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _14671 = find_from(_14669, _14670, 1);
    DeRef(_14669);
    _14669 = NOVALUE;
    _14670 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14671);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _idx_26187;
    DeRef(_1);
    _14667 = NOVALUE;
    goto L4; // [127] 228
L3: 

    /** scanner.e:809			elsif not find( idx, file_include[current_file_no] ) then*/
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14672 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _14673 = find_from(_idx_26187, _14672, 1);
    _14672 = NOVALUE;
    if (_14673 != 0)
    goto L5; // [145] 227
    _14673 = NOVALUE;

    /** scanner.e:811				file_include[current_file_no] &= idx*/
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14675 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14675) && IS_ATOM(_idx_26187)) {
        Append(&_14676, _14675, _idx_26187);
    }
    else if (IS_ATOM(_14675) && IS_SEQUENCE(_idx_26187)) {
    }
    else {
        Concat((object_ptr)&_14676, _14675, _idx_26187);
        _14675 = NOVALUE;
    }
    _14675 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14676;
    if( _1 != _14676 ){
        DeRef(_1);
    }
    _14676 = NOVALUE;

    /** scanner.e:814				add_exports( idx, current_file_no )*/
    _63add_exports(_idx_26187, _39current_file_no_16815);

    /** scanner.e:816				if public_include then*/
    if (_63public_include_25184 == 0)
    {
        goto L6; // [178] 226
    }
    else{
    }

    /** scanner.e:818					if not find( idx, file_public[current_file_no] ) then*/
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _14677 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _14678 = find_from(_idx_26187, _14677, 1);
    _14677 = NOVALUE;
    if (_14678 != 0)
    goto L7; // [196] 225
    _14678 = NOVALUE;

    /** scanner.e:819						file_public[current_file_no] &= idx*/
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _14680 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14680) && IS_ATOM(_idx_26187)) {
        Append(&_14681, _14680, _idx_26187);
    }
    else if (IS_ATOM(_14680) && IS_SEQUENCE(_idx_26187)) {
    }
    else {
        Concat((object_ptr)&_14681, _14680, _idx_26187);
        _14680 = NOVALUE;
    }
    _14680 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14681;
    if( _1 != _14681 ){
        DeRef(_1);
    }
    _14681 = NOVALUE;

    /** scanner.e:820						patch_exports( current_file_no )*/
    _63patch_exports(_39current_file_no_16815);
L7: 
L6: 
L5: 
L4: 

    /** scanner.e:825			indirect_include[current_file_no][idx] = OpIndirectInclude*/
    _2 = (object)SEQ_PTR(_36indirect_include_15413);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36indirect_include_15413 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39current_file_no_16815 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _idx_26187);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39OpIndirectInclude_16890;
    DeRef(_1);
    _14682 = NOVALUE;

    /** scanner.e:826			add_include_by( current_file_no, idx, public_include )*/
    _63add_include_by(_39current_file_no_16815, _idx_26187, _63public_include_25184);

    /** scanner.e:827			update_include_matrix( idx, current_file_no )*/
    _63update_include_matrix(_idx_26187, _39current_file_no_16815);

    /** scanner.e:828			public_include = FALSE*/
    _63public_include_25184 = _9FALSE_442;

    /** scanner.e:829			read_line() -- we can't return without reading a line first*/
    _63read_line();

    /** scanner.e:830			if not find( idx, file_include_depend[current_file_no] ) and not finished_files[idx] then*/
    _2 = (object)SEQ_PTR(_36file_include_depend_15408);
    _14684 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    _14685 = find_from(_idx_26187, _14684, 1);
    _14684 = NOVALUE;
    _14686 = (_14685 == 0);
    _14685 = NOVALUE;
    if (_14686 == 0) {
        goto L8; // [293] 329
    }
    _2 = (object)SEQ_PTR(_36finished_files_15407);
    _14688 = (object)*(((s1_ptr)_2)->base + _idx_26187);
    _14689 = (_14688 == 0);
    _14688 = NOVALUE;
    if (_14689 == 0)
    {
        DeRef(_14689);
        _14689 = NOVALUE;
        goto L8; // [307] 329
    }
    else{
        DeRef(_14689);
        _14689 = NOVALUE;
    }

    /** scanner.e:831				file_include_depend[current_file_no] &= idx*/
    _2 = (object)SEQ_PTR(_36file_include_depend_15408);
    _14690 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14690) && IS_ATOM(_idx_26187)) {
        Append(&_14691, _14690, _idx_26187);
    }
    else if (IS_ATOM(_14690) && IS_SEQUENCE(_idx_26187)) {
    }
    else {
        Concat((object_ptr)&_14691, _14690, _idx_26187);
        _14690 = NOVALUE;
    }
    _14690 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_depend_15408);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_depend_15408 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14691;
    if( _1 != _14691 ){
        DeRef(_1);
    }
    _14691 = NOVALUE;
L8: 

    /** scanner.e:833			return -- ignore it*/
    DeRef(_new_hash_26186);
    DeRef(_14686);
    _14686 = NOVALUE;
    return;
L1: 

    /** scanner.e:836		if length(IncludeStk) >= INCLUDE_LIMIT then*/
    if (IS_SEQUENCE(_63IncludeStk_25190)){
            _14692 = SEQ_PTR(_63IncludeStk_25190)->length;
    }
    else {
        _14692 = 1;
    }
    if (_14692 < 30)
    goto L9; // [342] 354

    /** scanner.e:837			CompileErr(104)*/
    RefDS(_21928);
    _52CompileErr(104, _21928, 0);
L9: 

    /** scanner.e:840		IncludeStk = append(IncludeStk,*/
    _1 = NewS1(22);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _39current_file_no_16815;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    ((intptr_t*)_2)[3] = _39src_file_16936;
    ((intptr_t*)_2)[4] = _39file_start_sym_16821;
    ((intptr_t*)_2)[5] = _39OpWarning_16882;
    ((intptr_t*)_2)[6] = _39OpTrace_16884;
    ((intptr_t*)_2)[7] = _39OpTypeCheck_16885;
    ((intptr_t*)_2)[8] = _39OpProfileTime_16887;
    ((intptr_t*)_2)[9] = _39OpProfileStatement_16886;
    RefDS(_39OpDefines_16888);
    ((intptr_t*)_2)[10] = _39OpDefines_16888;
    ((intptr_t*)_2)[11] = _39prev_OpWarning_16883;
    ((intptr_t*)_2)[12] = _39OpInline_16889;
    ((intptr_t*)_2)[13] = _39OpIndirectInclude_16890;
    ((intptr_t*)_2)[14] = _39putback_fwd_line_number_16818;
    Ref(_52putback_ForwardLine_48712);
    ((intptr_t*)_2)[15] = _52putback_ForwardLine_48712;
    ((intptr_t*)_2)[16] = _52putback_forward_bp_48716;
    ((intptr_t*)_2)[17] = _39last_fwd_line_number_16819;
    Ref(_52last_ForwardLine_48713);
    ((intptr_t*)_2)[18] = _52last_ForwardLine_48713;
    ((intptr_t*)_2)[19] = _52last_forward_bp_48717;
    Ref(_52ThisLine_48710);
    ((intptr_t*)_2)[20] = _52ThisLine_48710;
    ((intptr_t*)_2)[21] = _39fwd_line_number_16817;
    ((intptr_t*)_2)[22] = _52forward_bp_48715;
    _14694 = MAKE_SEQ(_1);
    RefDS(_14694);
    Append(&_63IncludeStk_25190, _63IncludeStk_25190, _14694);
    DeRefDS(_14694);
    _14694 = NOVALUE;

    /** scanner.e:864		file_include = append( file_include, {} )*/
    RefDS(_5);
    Append(&_36file_include_15409, _36file_include_15409, _5);

    /** scanner.e:865		file_include_by = append( file_include_by, {} )*/
    RefDS(_5);
    Append(&_36file_include_by_15417, _36file_include_by_15417, _5);

    /** scanner.e:866		for i = 1 to length( include_matrix) do*/
    if (IS_SEQUENCE(_36include_matrix_15411)){
            _14698 = SEQ_PTR(_36include_matrix_15411)->length;
    }
    else {
        _14698 = 1;
    }
    {
        object _i_26299;
        _i_26299 = 1;
LA: 
        if (_i_26299 > _14698){
            goto LB; // [458] 504
        }

        /** scanner.e:867			include_matrix[i]   &= 0*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _14699 = (object)*(((s1_ptr)_2)->base + _i_26299);
        if (IS_SEQUENCE(_14699) && IS_ATOM(0)) {
            Append(&_14700, _14699, 0);
        }
        else if (IS_ATOM(_14699) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14700, _14699, 0);
            _14699 = NOVALUE;
        }
        _14699 = NOVALUE;
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36include_matrix_15411 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26299);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14700;
        if( _1 != _14700 ){
            DeRef(_1);
        }
        _14700 = NOVALUE;

        /** scanner.e:868			indirect_include[i] &= 0*/
        _2 = (object)SEQ_PTR(_36indirect_include_15413);
        _14701 = (object)*(((s1_ptr)_2)->base + _i_26299);
        if (IS_SEQUENCE(_14701) && IS_ATOM(0)) {
            Append(&_14702, _14701, 0);
        }
        else if (IS_ATOM(_14701) && IS_SEQUENCE(0)) {
        }
        else {
            Concat((object_ptr)&_14702, _14701, 0);
            _14701 = NOVALUE;
        }
        _14701 = NOVALUE;
        _2 = (object)SEQ_PTR(_36indirect_include_15413);
        _2 = (object)(((s1_ptr)_2)->base + _i_26299);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14702;
        if( _1 != _14702 ){
            DeRef(_1);
        }
        _14702 = NOVALUE;

        /** scanner.e:869		end for*/
        _i_26299 = _i_26299 + 1;
        goto LA; // [499] 465
LB: 
        ;
    }

    /** scanner.e:870		include_matrix = append( include_matrix, repeat( 0, length( file_include ) ) )*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14703 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14703 = 1;
    }
    _14704 = Repeat(0, _14703);
    _14703 = NOVALUE;
    RefDS(_14704);
    Append(&_36include_matrix_15411, _36include_matrix_15411, _14704);
    DeRefDS(_14704);
    _14704 = NOVALUE;

    /** scanner.e:871		include_matrix[$][$] = DIRECT_INCLUDE*/
    if (IS_SEQUENCE(_36include_matrix_15411)){
            _14706 = SEQ_PTR(_36include_matrix_15411)->length;
    }
    else {
        _14706 = 1;
    }
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _3 = (object)(_14706 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14709 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14709 = 1;
    }
    _14707 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14709);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14707 = NOVALUE;

    /** scanner.e:872		include_matrix[current_file_no][$] = DIRECT_INCLUDE*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36include_matrix_15411 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39current_file_no_16815 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14712 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14712 = 1;
    }
    _14710 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14712);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _14710 = NOVALUE;

    /** scanner.e:874		indirect_include = append( indirect_include, repeat( 0, length( file_include ) ) )*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14713 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14713 = 1;
    }
    _14714 = Repeat(0, _14713);
    _14713 = NOVALUE;
    RefDS(_14714);
    Append(&_36indirect_include_15413, _36indirect_include_15413, _14714);
    DeRefDS(_14714);
    _14714 = NOVALUE;

    /** scanner.e:875		indirect_include[current_file_no][$] = OpIndirectInclude*/
    _2 = (object)SEQ_PTR(_36indirect_include_15413);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36indirect_include_15413 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39current_file_no_16815 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(*(object_ptr)_3)){
            _14718 = SEQ_PTR(*(object_ptr)_3)->length;
    }
    else {
        _14718 = 1;
    }
    _14716 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _14718);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39OpIndirectInclude_16890;
    DeRef(_1);
    _14716 = NOVALUE;

    /** scanner.e:876		OpIndirectInclude = 1*/
    _39OpIndirectInclude_16890 = 1;

    /** scanner.e:878		file_public  = append( file_public, {} )*/
    RefDS(_5);
    Append(&_36file_public_15415, _36file_public_15415, _5);

    /** scanner.e:879		file_public_by = append( file_public_by, {} )*/
    RefDS(_5);
    Append(&_36file_public_by_15419, _36file_public_by_15419, _5);

    /** scanner.e:880		file_include[current_file_no] &= length( file_include )*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14721 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14721 = 1;
    }
    _2 = (object)SEQ_PTR(_36file_include_15409);
    _14722 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14722) && IS_ATOM(_14721)) {
        Append(&_14723, _14722, _14721);
    }
    else if (IS_ATOM(_14722) && IS_SEQUENCE(_14721)) {
    }
    else {
        Concat((object_ptr)&_14723, _14722, _14721);
        _14722 = NOVALUE;
    }
    _14722 = NOVALUE;
    _14721 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_15409);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_15409 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14723;
    if( _1 != _14723 ){
        DeRef(_1);
    }
    _14723 = NOVALUE;

    /** scanner.e:881		add_include_by( current_file_no, length(file_include), public_include )*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14724 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14724 = 1;
    }
    _63add_include_by(_39current_file_no_16815, _14724, _63public_include_25184);
    _14724 = NOVALUE;

    /** scanner.e:882		if public_include then*/
    if (_63public_include_25184 == 0)
    {
        goto LC; // [673] 707
    }
    else{
    }

    /** scanner.e:883			file_public[current_file_no] &= length( file_public )*/
    if (IS_SEQUENCE(_36file_public_15415)){
            _14725 = SEQ_PTR(_36file_public_15415)->length;
    }
    else {
        _14725 = 1;
    }
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _14726 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14726) && IS_ATOM(_14725)) {
        Append(&_14727, _14726, _14725);
    }
    else if (IS_ATOM(_14726) && IS_SEQUENCE(_14725)) {
    }
    else {
        Concat((object_ptr)&_14727, _14726, _14725);
        _14726 = NOVALUE;
    }
    _14726 = NOVALUE;
    _14725 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_public_15415);
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14727;
    if( _1 != _14727 ){
        DeRef(_1);
    }
    _14727 = NOVALUE;

    /** scanner.e:884			patch_exports( current_file_no )*/
    _63patch_exports(_39current_file_no_16815);
LC: 

    /** scanner.e:887	ifdef STDDEBUG then*/

    /** scanner.e:893		src_file = new_file_handle*/
    _39src_file_16936 = _new_file_handle_26184;

    /** scanner.e:894		file_start_sym = last_sym*/
    _39file_start_sym_16821 = _56last_sym_46267;

    /** scanner.e:895		if current_file_no >= MAX_FILE then*/
    if (_39current_file_no_16815 < 256)
    goto LD; // [729] 741

    /** scanner.e:896			CompileErr(126)*/
    RefDS(_21928);
    _52CompileErr(126, _21928, 0);
LD: 

    /** scanner.e:898		known_files = append(known_files, new_include_name)*/
    RefDS(_39new_include_name_16937);
    Append(&_36known_files_15405, _36known_files_15405, _39new_include_name_16937);

    /** scanner.e:899		known_files_hash &= new_hash*/
    Ref(_new_hash_26186);
    Append(&_36known_files_hash_15406, _36known_files_hash_15406, _new_hash_26186);

    /** scanner.e:900		finished_files &= 0*/
    Append(&_36finished_files_15407, _36finished_files_15407, 0);

    /** scanner.e:901		file_include_depend = append( file_include_depend, { length( known_files ) } )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _14733 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _14733 = 1;
    }
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _14733;
    _14734 = MAKE_SEQ(_1);
    _14733 = NOVALUE;
    RefDS(_14734);
    Append(&_36file_include_depend_15408, _36file_include_depend_15408, _14734);
    DeRefDS(_14734);
    _14734 = NOVALUE;

    /** scanner.e:902		file_include_depend[current_file_no] &= length( known_files )*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _14736 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _14736 = 1;
    }
    _2 = (object)SEQ_PTR(_36file_include_depend_15408);
    _14737 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    if (IS_SEQUENCE(_14737) && IS_ATOM(_14736)) {
        Append(&_14738, _14737, _14736);
    }
    else if (IS_ATOM(_14737) && IS_SEQUENCE(_14736)) {
    }
    else {
        Concat((object_ptr)&_14738, _14737, _14736);
        _14737 = NOVALUE;
    }
    _14737 = NOVALUE;
    _14736 = NOVALUE;
    _2 = (object)SEQ_PTR(_36file_include_depend_15408);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36file_include_depend_15408 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _39current_file_no_16815);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _14738;
    if( _1 != _14738 ){
        DeRef(_1);
    }
    _14738 = NOVALUE;

    /** scanner.e:903		check_coverage()*/
    _53check_coverage();

    /** scanner.e:904		default_namespaces &= 0*/
    Append(&_63default_namespaces_25187, _63default_namespaces_25187, 0);

    /** scanner.e:906		update_include_matrix( length( file_include ), current_file_no )*/
    if (IS_SEQUENCE(_36file_include_15409)){
            _14740 = SEQ_PTR(_36file_include_15409)->length;
    }
    else {
        _14740 = 1;
    }
    _63update_include_matrix(_14740, _39current_file_no_16815);
    _14740 = NOVALUE;

    /** scanner.e:907		old_file_no = current_file_no*/
    _old_file_no_26185 = _39current_file_no_16815;

    /** scanner.e:908		current_file_no = length(known_files)*/
    if (IS_SEQUENCE(_36known_files_15405)){
            _39current_file_no_16815 = SEQ_PTR(_36known_files_15405)->length;
    }
    else {
        _39current_file_no_16815 = 1;
    }

    /** scanner.e:909		line_number = 0*/
    _39line_number_16816 = 0;

    /** scanner.e:910		read_line()*/
    _63read_line();

    /** scanner.e:912		if new_include_space != 0 then*/
    if (_63new_include_space_25179 == 0)
    goto LE; // [873] 897

    /** scanner.e:913			SymTab[new_include_space][S_OBJ] = current_file_no*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_63new_include_space_25179 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);
    _14743 = NOVALUE;
LE: 

    /** scanner.e:915		default_namespace( )*/
    _63default_namespace();

    /** scanner.e:916	end procedure*/
    DeRef(_new_hash_26186);
    DeRef(_14686);
    _14686 = NOVALUE;
    return;
    ;
}


void _63update_include_completion(object _file_no_26409)
{
    object _fx_26418 = NOVALUE;
    object _14753 = NOVALUE;
    object _14752 = NOVALUE;
    object _14751 = NOVALUE;
    object _14750 = NOVALUE;
    object _14748 = NOVALUE;
    object _14747 = NOVALUE;
    object _14746 = NOVALUE;
    object _14745 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:919		for i = 1 to length( file_include_depend ) do*/
    if (IS_SEQUENCE(_36file_include_depend_15408)){
            _14745 = SEQ_PTR(_36file_include_depend_15408)->length;
    }
    else {
        _14745 = 1;
    }
    {
        object _i_26411;
        _i_26411 = 1;
L1: 
        if (_i_26411 > _14745){
            goto L2; // [10] 114
        }

        /** scanner.e:920			if length( file_include_depend[i] ) then*/
        _2 = (object)SEQ_PTR(_36file_include_depend_15408);
        _14746 = (object)*(((s1_ptr)_2)->base + _i_26411);
        if (IS_SEQUENCE(_14746)){
                _14747 = SEQ_PTR(_14746)->length;
        }
        else {
            _14747 = 1;
        }
        _14746 = NOVALUE;
        if (_14747 == 0)
        {
            _14747 = NOVALUE;
            goto L3; // [28] 105
        }
        else{
            _14747 = NOVALUE;
        }

        /** scanner.e:921				integer fx = find( file_no, file_include_depend[i] )*/
        _2 = (object)SEQ_PTR(_36file_include_depend_15408);
        _14748 = (object)*(((s1_ptr)_2)->base + _i_26411);
        _fx_26418 = find_from(_file_no_26409, _14748, 1);
        _14748 = NOVALUE;

        /** scanner.e:922				if fx then*/
        if (_fx_26418 == 0)
        {
            goto L4; // [46] 104
        }
        else{
        }

        /** scanner.e:923					file_include_depend[i] = remove( file_include_depend[i], fx )*/
        _2 = (object)SEQ_PTR(_36file_include_depend_15408);
        _14750 = (object)*(((s1_ptr)_2)->base + _i_26411);
        {
            s1_ptr assign_space = SEQ_PTR(_14750);
            int len = assign_space->length;
            int start = (IS_ATOM_INT(_fx_26418)) ? _fx_26418 : (object)(DBL_PTR(_fx_26418)->dbl);
            int stop = (IS_ATOM_INT(_fx_26418)) ? _fx_26418 : (object)(DBL_PTR(_fx_26418)->dbl);
            if (stop > len){
                stop = len;
            }
            if (start > len || start > stop || stop<0) {
                RefDS(_14750);
                DeRef(_14751);
                _14751 = _14750;
            }
            else if (start < 2) {
                if (stop >= len) {
                    Head( SEQ_PTR(_14750), start, &_14751 );
                }
                else Tail(SEQ_PTR(_14750), stop+1, &_14751);
            }
            else if (stop >= len){
                Head(SEQ_PTR(_14750), start, &_14751);
            }
            else {
                assign_slice_seq = &assign_space;
                _1 = Remove_elements(start, stop, 0);
                DeRef(_14751);
                _14751 = _1;
            }
        }
        _14750 = NOVALUE;
        _2 = (object)SEQ_PTR(_36file_include_depend_15408);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36file_include_depend_15408 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26411);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _14751;
        if( _1 != _14751 ){
            DeRef(_1);
        }
        _14751 = NOVALUE;

        /** scanner.e:924					if not length( file_include_depend[i] ) then*/
        _2 = (object)SEQ_PTR(_36file_include_depend_15408);
        _14752 = (object)*(((s1_ptr)_2)->base + _i_26411);
        if (IS_SEQUENCE(_14752)){
                _14753 = SEQ_PTR(_14752)->length;
        }
        else {
            _14753 = 1;
        }
        _14752 = NOVALUE;
        if (_14753 != 0)
        goto L5; // [79] 103
        _14753 = NOVALUE;

        /** scanner.e:925						finished_files[i] = 1*/
        _2 = (object)SEQ_PTR(_36finished_files_15407);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36finished_files_15407 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _i_26411);
        *(intptr_t *)_2 = 1;

        /** scanner.e:926						if i != file_no then*/
        if (_i_26411 == _file_no_26409)
        goto L6; // [92] 102

        /** scanner.e:927							update_include_completion( i )*/
        _63update_include_completion(_i_26411);
L6: 
L5: 
L4: 
L3: 

        /** scanner.e:932		end for*/
        _i_26411 = _i_26411 + 1;
        goto L1; // [109] 17
L2: 
        ;
    }

    /** scanner.e:933	end procedure*/
    _14752 = NOVALUE;
    _14746 = NOVALUE;
    return;
    ;
}


object _63IncludePop()
{
    object _top_26449 = NOVALUE;
    object _14784 = NOVALUE;
    object _14782 = NOVALUE;
    object _14781 = NOVALUE;
    object _14759 = NOVALUE;
    object _14757 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:940		update_include_completion( current_file_no )*/
    _63update_include_completion(_39current_file_no_16815);

    /** scanner.e:941		Resolve_forward_references()*/
    _41Resolve_forward_references(0);

    /** scanner.e:942		HideLocals()*/
    _56HideLocals();

    /** scanner.e:944		if src_file >= 0 then*/
    if (_39src_file_16936 < 0)
    goto L1; // [21] 39

    /** scanner.e:945			close(src_file)*/
    EClose(_39src_file_16936);

    /** scanner.e:946			src_file = -1*/
    _39src_file_16936 = -1;
L1: 

    /** scanner.e:949		if length(IncludeStk) = 0 then*/
    if (IS_SEQUENCE(_63IncludeStk_25190)){
            _14757 = SEQ_PTR(_63IncludeStk_25190)->length;
    }
    else {
        _14757 = 1;
    }
    if (_14757 != 0)
    goto L2; // [46] 59

    /** scanner.e:950			return FALSE  -- the end*/
    DeRef(_top_26449);
    return _9FALSE_442;
L2: 

    /** scanner.e:953		sequence top = IncludeStk[$]*/
    if (IS_SEQUENCE(_63IncludeStk_25190)){
            _14759 = SEQ_PTR(_63IncludeStk_25190)->length;
    }
    else {
        _14759 = 1;
    }
    DeRef(_top_26449);
    _2 = (object)SEQ_PTR(_63IncludeStk_25190);
    _top_26449 = (object)*(((s1_ptr)_2)->base + _14759);
    RefDS(_top_26449);

    /** scanner.e:955		current_file_no    = top[FILE_NO]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39current_file_no_16815 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_39current_file_no_16815)){
        _39current_file_no_16815 = (object)DBL_PTR(_39current_file_no_16815)->dbl;
    }

    /** scanner.e:956		line_number        = top[LINE_NO]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39line_number_16816 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_39line_number_16816)){
        _39line_number_16816 = (object)DBL_PTR(_39line_number_16816)->dbl;
    }

    /** scanner.e:957		src_file           = top[FILE_PTR]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39src_file_16936 = (object)*(((s1_ptr)_2)->base + 3);
    if (!IS_ATOM_INT(_39src_file_16936)){
        _39src_file_16936 = (object)DBL_PTR(_39src_file_16936)->dbl;
    }

    /** scanner.e:958		file_start_sym     = top[FILE_START_SYM]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39file_start_sym_16821 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_39file_start_sym_16821)){
        _39file_start_sym_16821 = (object)DBL_PTR(_39file_start_sym_16821)->dbl;
    }

    /** scanner.e:959		OpWarning          = top[OP_WARNING]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpWarning_16882 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_39OpWarning_16882)){
        _39OpWarning_16882 = (object)DBL_PTR(_39OpWarning_16882)->dbl;
    }

    /** scanner.e:960		OpTrace            = top[OP_TRACE]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpTrace_16884 = (object)*(((s1_ptr)_2)->base + 6);
    if (!IS_ATOM_INT(_39OpTrace_16884)){
        _39OpTrace_16884 = (object)DBL_PTR(_39OpTrace_16884)->dbl;
    }

    /** scanner.e:961		OpTypeCheck        = top[OP_TYPE_CHECK]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpTypeCheck_16885 = (object)*(((s1_ptr)_2)->base + 7);
    if (!IS_ATOM_INT(_39OpTypeCheck_16885)){
        _39OpTypeCheck_16885 = (object)DBL_PTR(_39OpTypeCheck_16885)->dbl;
    }

    /** scanner.e:962		OpProfileTime      = top[OP_PROFILE_TIME]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpProfileTime_16887 = (object)*(((s1_ptr)_2)->base + 8);
    if (!IS_ATOM_INT(_39OpProfileTime_16887)){
        _39OpProfileTime_16887 = (object)DBL_PTR(_39OpProfileTime_16887)->dbl;
    }

    /** scanner.e:963		OpProfileStatement = top[OP_PROFILE_STATEMENT]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpProfileStatement_16886 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_39OpProfileStatement_16886)){
        _39OpProfileStatement_16886 = (object)DBL_PTR(_39OpProfileStatement_16886)->dbl;
    }

    /** scanner.e:964		OpDefines          = top[OP_DEFINES]*/
    DeRef(_39OpDefines_16888);
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpDefines_16888 = (object)*(((s1_ptr)_2)->base + 10);
    Ref(_39OpDefines_16888);

    /** scanner.e:965		prev_OpWarning     = top[PREV_OP_WARNING]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39prev_OpWarning_16883 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_39prev_OpWarning_16883)){
        _39prev_OpWarning_16883 = (object)DBL_PTR(_39prev_OpWarning_16883)->dbl;
    }

    /** scanner.e:966		OpInline           = top[OP_INLINE]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpInline_16889 = (object)*(((s1_ptr)_2)->base + 12);
    if (!IS_ATOM_INT(_39OpInline_16889)){
        _39OpInline_16889 = (object)DBL_PTR(_39OpInline_16889)->dbl;
    }

    /** scanner.e:967		OpIndirectInclude  = top[OP_INDIRECT_INCLUDE]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39OpIndirectInclude_16890 = (object)*(((s1_ptr)_2)->base + 13);
    if (!IS_ATOM_INT(_39OpIndirectInclude_16890)){
        _39OpIndirectInclude_16890 = (object)DBL_PTR(_39OpIndirectInclude_16890)->dbl;
    }

    /** scanner.e:968		putback_fwd_line_number = line_number -- top[PUTBACK_FWD_LINE_NUMBER]*/
    _39putback_fwd_line_number_16818 = _39line_number_16816;

    /** scanner.e:969		putback_ForwardLine = top[PUTBACK_FORWARDLINE]*/
    DeRef(_52putback_ForwardLine_48712);
    _2 = (object)SEQ_PTR(_top_26449);
    _52putback_ForwardLine_48712 = (object)*(((s1_ptr)_2)->base + 15);
    Ref(_52putback_ForwardLine_48712);

    /** scanner.e:970		putback_forward_bp = top[PUTBACK_FORWARD_BP]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _52putback_forward_bp_48716 = (object)*(((s1_ptr)_2)->base + 16);
    if (!IS_ATOM_INT(_52putback_forward_bp_48716)){
        _52putback_forward_bp_48716 = (object)DBL_PTR(_52putback_forward_bp_48716)->dbl;
    }

    /** scanner.e:971		last_fwd_line_number = top[LAST_FWD_LINE_NUMBER]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _39last_fwd_line_number_16819 = (object)*(((s1_ptr)_2)->base + 17);
    if (!IS_ATOM_INT(_39last_fwd_line_number_16819)){
        _39last_fwd_line_number_16819 = (object)DBL_PTR(_39last_fwd_line_number_16819)->dbl;
    }

    /** scanner.e:972		last_ForwardLine = top[LAST_FORWARDLINE]*/
    DeRef(_52last_ForwardLine_48713);
    _2 = (object)SEQ_PTR(_top_26449);
    _52last_ForwardLine_48713 = (object)*(((s1_ptr)_2)->base + 18);
    Ref(_52last_ForwardLine_48713);

    /** scanner.e:973		last_forward_bp = top[LAST_FORWARD_BP]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _52last_forward_bp_48717 = (object)*(((s1_ptr)_2)->base + 19);
    if (!IS_ATOM_INT(_52last_forward_bp_48717)){
        _52last_forward_bp_48717 = (object)DBL_PTR(_52last_forward_bp_48717)->dbl;
    }

    /** scanner.e:974		ThisLine = top[THISLINE]*/
    DeRef(_52ThisLine_48710);
    _2 = (object)SEQ_PTR(_top_26449);
    _52ThisLine_48710 = (object)*(((s1_ptr)_2)->base + 20);
    Ref(_52ThisLine_48710);

    /** scanner.e:976		fwd_line_number = line_number --top[FWD_LINE_NUMBER]*/
    _39fwd_line_number_16817 = _39line_number_16816;

    /** scanner.e:977		forward_bp = top[FORWARD_BP]*/
    _2 = (object)SEQ_PTR(_top_26449);
    _52forward_bp_48715 = (object)*(((s1_ptr)_2)->base + 22);
    if (!IS_ATOM_INT(_52forward_bp_48715)){
        _52forward_bp_48715 = (object)DBL_PTR(_52forward_bp_48715)->dbl;
    }

    /** scanner.e:978		ForwardLine = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52ForwardLine_48711);
    _52ForwardLine_48711 = _52ThisLine_48710;

    /** scanner.e:980		putback_ForwardLine = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52putback_ForwardLine_48712);
    _52putback_ForwardLine_48712 = _52ThisLine_48710;

    /** scanner.e:981		last_ForwardLine = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52last_ForwardLine_48713);
    _52last_ForwardLine_48713 = _52ThisLine_48710;

    /** scanner.e:983		IncludeStk = IncludeStk[1..$-1]*/
    if (IS_SEQUENCE(_63IncludeStk_25190)){
            _14781 = SEQ_PTR(_63IncludeStk_25190)->length;
    }
    else {
        _14781 = 1;
    }
    _14782 = _14781 - 1;
    _14781 = NOVALUE;
    rhs_slice_target = (object_ptr)&_63IncludeStk_25190;
    RHS_Slice(_63IncludeStk_25190, 1, _14782);

    /** scanner.e:984		SymTab[TopLevelSub][S_CODE] = Code*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39TopLevelSub_16822 + ((s1_ptr)_2)->base);
    RefDS(_39Code_16903);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_CODE_16482))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_CODE_16482);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39Code_16903;
    DeRef(_1);
    _14784 = NOVALUE;

    /** scanner.e:987		return TRUE*/
    DeRefDS(_top_26449);
    _14782 = NOVALUE;
    return _9TRUE_444;
    ;
}


object _63MakeInt(object _text_26550, object _nBase_26551)
{
    object _num_26552 = NOVALUE;
    object _fnum_26553 = NOVALUE;
    object _digit_26554 = NOVALUE;
    object _maxchk_26555 = NOVALUE;
    object _14834 = NOVALUE;
    object _14832 = NOVALUE;
    object _14830 = NOVALUE;
    object _14827 = NOVALUE;
    object _14826 = NOVALUE;
    object _14825 = NOVALUE;
    object _14823 = NOVALUE;
    object _14821 = NOVALUE;
    object _14820 = NOVALUE;
    object _14819 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_nBase_26551)) {
        _1 = (object)(DBL_PTR(_nBase_26551)->dbl);
        DeRefDS(_nBase_26551);
        _nBase_26551 = _1;
    }

    /** scanner.e:1018		switch nBase do*/
    _0 = _nBase_26551;
    switch ( _0 ){ 

        /** scanner.e:1019			case 2 then*/
        case 2:

        /** scanner.e:1020				maxchk = MAXCHK2*/
        _maxchk_26555 = 536870911;
        goto L1; // [21] 82

        /** scanner.e:1022			case 8 then*/
        case 8:

        /** scanner.e:1023				maxchk = MAXCHK8*/
        _maxchk_26555 = 134217727;
        goto L1; // [32] 82

        /** scanner.e:1025			case 10 then*/
        case 10:

        /** scanner.e:1027				num = find(text, common_int_text)*/
        _num_26552 = find_from(_text_26550, _63common_int_text_26525, 1);

        /** scanner.e:1028				if num then*/
        if (_num_26552 == 0)
        {
            goto L2; // [49] 65
        }
        else{
        }

        /** scanner.e:1029					return common_ints[num]*/
        _2 = (object)SEQ_PTR(_63common_ints_26545);
        _14819 = (object)*(((s1_ptr)_2)->base + _num_26552);
        DeRefDS(_text_26550);
        DeRef(_fnum_26553);
        return _14819;
L2: 

        /** scanner.e:1032				maxchk = MAXCHK10*/
        _maxchk_26555 = 107374181;
        goto L1; // [70] 82

        /** scanner.e:1034			case 16 then*/
        case 16:

        /** scanner.e:1035				maxchk = MAXCHK16*/
        _maxchk_26555 = 67108863;
    ;}L1: 

    /** scanner.e:1039		num = 0*/
    _num_26552 = 0;

    /** scanner.e:1040		fnum = 0*/
    DeRef(_fnum_26553);
    _fnum_26553 = 0;

    /** scanner.e:1041		for i = 1 to length(text) do*/
    if (IS_SEQUENCE(_text_26550)){
            _14820 = SEQ_PTR(_text_26550)->length;
    }
    else {
        _14820 = 1;
    }
    {
        object _i_26566;
        _i_26566 = 1;
L3: 
        if (_i_26566 > _14820){
            goto L4; // [97] 212
        }

        /** scanner.e:1042			digit = (text[i] - '0')*/
        _2 = (object)SEQ_PTR(_text_26550);
        _14821 = (object)*(((s1_ptr)_2)->base + _i_26566);
        if (IS_ATOM_INT(_14821)) {
            _digit_26554 = _14821 - 48;
        }
        else {
            _digit_26554 = binary_op(MINUS, _14821, 48);
        }
        _14821 = NOVALUE;
        if (!IS_ATOM_INT(_digit_26554)) {
            _1 = (object)(DBL_PTR(_digit_26554)->dbl);
            DeRefDS(_digit_26554);
            _digit_26554 = _1;
        }

        /** scanner.e:1043			if digit >= nBase or digit < 0 then*/
        _14823 = (_digit_26554 >= _nBase_26551);
        if (_14823 != 0) {
            goto L5; // [122] 135
        }
        _14825 = (_digit_26554 < 0);
        if (_14825 == 0)
        {
            DeRef(_14825);
            _14825 = NOVALUE;
            goto L6; // [131] 151
        }
        else{
            DeRef(_14825);
            _14825 = NOVALUE;
        }
L5: 

        /** scanner.e:1044				CompileErr(62, {text[i],i})*/
        _2 = (object)SEQ_PTR(_text_26550);
        _14826 = (object)*(((s1_ptr)_2)->base + _i_26566);
        Ref(_14826);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _14826;
        ((intptr_t *)_2)[2] = _i_26566;
        _14827 = MAKE_SEQ(_1);
        _14826 = NOVALUE;
        _52CompileErr(62, _14827, 0);
        _14827 = NOVALUE;
L6: 

        /** scanner.e:1046			if fnum = 0 then*/
        if (binary_op_a(NOTEQ, _fnum_26553, 0)){
            goto L7; // [153] 194
        }

        /** scanner.e:1047				if num <= maxchk then*/
        if (_num_26552 > _maxchk_26555)
        goto L8; // [161] 180

        /** scanner.e:1048					num = num * nBase + digit*/
        if (_num_26552 == (short)_num_26552 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
            _14830 = _num_26552 * _nBase_26551;
        }
        else{
            _14830 = NewDouble(_num_26552 * (eudouble)_nBase_26551);
        }
        if (IS_ATOM_INT(_14830)) {
            _num_26552 = _14830 + _digit_26554;
        }
        else {
            _num_26552 = NewDouble(DBL_PTR(_14830)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14830);
        _14830 = NOVALUE;
        if (!IS_ATOM_INT(_num_26552)) {
            _1 = (object)(DBL_PTR(_num_26552)->dbl);
            DeRefDS(_num_26552);
            _num_26552 = _1;
        }
        goto L9; // [177] 205
L8: 

        /** scanner.e:1050					fnum = num * nBase + digit*/
        if (_num_26552 == (short)_num_26552 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
            _14832 = _num_26552 * _nBase_26551;
        }
        else{
            _14832 = NewDouble(_num_26552 * (eudouble)_nBase_26551);
        }
        DeRef(_fnum_26553);
        if (IS_ATOM_INT(_14832)) {
            _fnum_26553 = _14832 + _digit_26554;
            if ((object)((uintptr_t)_fnum_26553 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26553 = NewDouble((eudouble)_fnum_26553);
            }
        }
        else {
            _fnum_26553 = NewDouble(DBL_PTR(_14832)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14832);
        _14832 = NOVALUE;
        goto L9; // [191] 205
L7: 

        /** scanner.e:1053				fnum = fnum * nBase + digit*/
        if (IS_ATOM_INT(_fnum_26553)) {
            if (_fnum_26553 == (short)_fnum_26553 && _nBase_26551 <= INT15 && _nBase_26551 >= -INT15){
                _14834 = _fnum_26553 * _nBase_26551;
            }
            else{
                _14834 = NewDouble(_fnum_26553 * (eudouble)_nBase_26551);
            }
        }
        else {
            _14834 = NewDouble(DBL_PTR(_fnum_26553)->dbl * (eudouble)_nBase_26551);
        }
        DeRef(_fnum_26553);
        if (IS_ATOM_INT(_14834)) {
            _fnum_26553 = _14834 + _digit_26554;
            if ((object)((uintptr_t)_fnum_26553 + (uintptr_t)HIGH_BITS) >= 0){
                _fnum_26553 = NewDouble((eudouble)_fnum_26553);
            }
        }
        else {
            _fnum_26553 = NewDouble(DBL_PTR(_14834)->dbl + (eudouble)_digit_26554);
        }
        DeRef(_14834);
        _14834 = NOVALUE;
L9: 

        /** scanner.e:1055		end for*/
        _i_26566 = _i_26566 + 1;
        goto L3; // [207] 104
L4: 
        ;
    }

    /** scanner.e:1057		if fnum = 0 then*/
    if (binary_op_a(NOTEQ, _fnum_26553, 0)){
        goto LA; // [214] 227
    }

    /** scanner.e:1058			return num*/
    DeRefDS(_text_26550);
    DeRef(_fnum_26553);
    DeRef(_14823);
    _14823 = NOVALUE;
    _14819 = NOVALUE;
    return _num_26552;
    goto LB; // [224] 234
LA: 

    /** scanner.e:1060			return fnum*/
    DeRefDS(_text_26550);
    DeRef(_14823);
    _14823 = NOVALUE;
    _14819 = NOVALUE;
    return _fnum_26553;
LB: 
    ;
}


object _63GetHexChar(object _cnt_26594, object _errno_26595)
{
    object _val_26596 = NOVALUE;
    object _d_26597 = NOVALUE;
    object _14844 = NOVALUE;
    object _14843 = NOVALUE;
    object _14838 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1067		val = 0*/
    DeRef(_val_26596);
    _val_26596 = 0;

    /** scanner.e:1069		while cnt > 0 do*/
L1: 
    if (_cnt_26594 <= 0)
    goto L2; // [15] 88

    /** scanner.e:1070			d = find(getch(), "0123456789ABCDEFabcdef_")*/
    _14838 = _63getch();
    _d_26597 = find_from(_14838, _14839, 1);
    DeRef(_14838);
    _14838 = NOVALUE;

    /** scanner.e:1071			if d = 0 then*/
    if (_d_26597 != 0)
    goto L3; // [31] 43

    /** scanner.e:1072				CompileErr( errno )*/
    RefDS(_21928);
    _52CompileErr(_errno_26595, _21928, 0);
L3: 

    /** scanner.e:1074			if d != 23 then*/
    if (_d_26597 == 23)
    goto L1; // [45] 15

    /** scanner.e:1075				val = val * 16 + d - 1*/
    if (IS_ATOM_INT(_val_26596)) {
        if (_val_26596 == (short)_val_26596){
            _14843 = _val_26596 * 16;
        }
        else{
            _14843 = NewDouble(_val_26596 * (eudouble)16);
        }
    }
    else {
        _14843 = NewDouble(DBL_PTR(_val_26596)->dbl * (eudouble)16);
    }
    if (IS_ATOM_INT(_14843)) {
        _14844 = _14843 + _d_26597;
        if ((object)((uintptr_t)_14844 + (uintptr_t)HIGH_BITS) >= 0){
            _14844 = NewDouble((eudouble)_14844);
        }
    }
    else {
        _14844 = NewDouble(DBL_PTR(_14843)->dbl + (eudouble)_d_26597);
    }
    DeRef(_14843);
    _14843 = NOVALUE;
    DeRef(_val_26596);
    if (IS_ATOM_INT(_14844)) {
        _val_26596 = _14844 - 1;
        if ((object)((uintptr_t)_val_26596 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26596 = NewDouble((eudouble)_val_26596);
        }
    }
    else {
        _val_26596 = NewDouble(DBL_PTR(_14844)->dbl - (eudouble)1);
    }
    DeRef(_14844);
    _14844 = NOVALUE;

    /** scanner.e:1076				if d > 16 then*/
    if (_d_26597 <= 16)
    goto L4; // [65] 76

    /** scanner.e:1077					val -= 6*/
    _0 = _val_26596;
    if (IS_ATOM_INT(_val_26596)) {
        _val_26596 = _val_26596 - 6;
        if ((object)((uintptr_t)_val_26596 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26596 = NewDouble((eudouble)_val_26596);
        }
    }
    else {
        _val_26596 = NewDouble(DBL_PTR(_val_26596)->dbl - (eudouble)6);
    }
    DeRef(_0);
L4: 

    /** scanner.e:1079				cnt -= 1*/
    _cnt_26594 = _cnt_26594 - 1;

    /** scanner.e:1081		end while*/
    goto L1; // [85] 15
L2: 

    /** scanner.e:1083		return val*/
    return _val_26596;
    ;
}


object _63GetBinaryChar(object _delim_26617)
{
    object _val_26618 = NOVALUE;
    object _d_26619 = NOVALUE;
    object _vchars_26620 = NOVALUE;
    object _cnt_26623 = NOVALUE;
    object _14858 = NOVALUE;
    object _14857 = NOVALUE;
    object _14851 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1089		sequence vchars = "01_ " & delim*/
    Append(&_vchars_26620, _14849, _delim_26617);

    /** scanner.e:1090		integer cnt = 0*/
    _cnt_26623 = 0;

    /** scanner.e:1091		val = 0*/
    DeRef(_val_26618);
    _val_26618 = 0;

    /** scanner.e:1092		while 1 do*/
L1: 

    /** scanner.e:1093			d = find(getch(), vchars)*/
    _14851 = _63getch();
    _d_26619 = find_from(_14851, _vchars_26620, 1);
    DeRef(_14851);
    _14851 = NOVALUE;

    /** scanner.e:1094			if d = 0 then*/
    if (_d_26619 != 0)
    goto L2; // [36] 48

    /** scanner.e:1095				CompileErr( 343 )*/
    RefDS(_21928);
    _52CompileErr(343, _21928, 0);
L2: 

    /** scanner.e:1097			if d = 5 then*/
    if (_d_26619 != 5)
    goto L3; // [50] 63

    /** scanner.e:1098				ungetch()*/
    _63ungetch();

    /** scanner.e:1099				exit*/
    goto L4; // [60] 106
L3: 

    /** scanner.e:1101			if d = 4 then*/
    if (_d_26619 != 4)
    goto L5; // [65] 74

    /** scanner.e:1102				exit*/
    goto L4; // [71] 106
L5: 

    /** scanner.e:1104			if d != 3 then*/
    if (_d_26619 == 3)
    goto L1; // [76] 24

    /** scanner.e:1105				val = val * 2 + d - 1*/
    if (IS_ATOM_INT(_val_26618) && IS_ATOM_INT(_val_26618)) {
        _14857 = _val_26618 + _val_26618;
        if ((object)((uintptr_t)_14857 + (uintptr_t)HIGH_BITS) >= 0){
            _14857 = NewDouble((eudouble)_14857);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26618)) {
            _14857 = NewDouble((eudouble)_val_26618 + DBL_PTR(_val_26618)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26618)) {
                _14857 = NewDouble(DBL_PTR(_val_26618)->dbl + (eudouble)_val_26618);
            }
            else
            _14857 = NewDouble(DBL_PTR(_val_26618)->dbl + DBL_PTR(_val_26618)->dbl);
        }
    }
    if (IS_ATOM_INT(_14857)) {
        _14858 = _14857 + _d_26619;
        if ((object)((uintptr_t)_14858 + (uintptr_t)HIGH_BITS) >= 0){
            _14858 = NewDouble((eudouble)_14858);
        }
    }
    else {
        _14858 = NewDouble(DBL_PTR(_14857)->dbl + (eudouble)_d_26619);
    }
    DeRef(_14857);
    _14857 = NOVALUE;
    DeRef(_val_26618);
    if (IS_ATOM_INT(_14858)) {
        _val_26618 = _14858 - 1;
        if ((object)((uintptr_t)_val_26618 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26618 = NewDouble((eudouble)_val_26618);
        }
    }
    else {
        _val_26618 = NewDouble(DBL_PTR(_14858)->dbl - (eudouble)1);
    }
    DeRef(_14858);
    _14858 = NOVALUE;

    /** scanner.e:1106				cnt += 1*/
    _cnt_26623 = _cnt_26623 + 1;

    /** scanner.e:1108		end while*/
    goto L1; // [103] 24
L4: 

    /** scanner.e:1110		if cnt = 0 then*/
    if (_cnt_26623 != 0)
    goto L6; // [108] 120

    /** scanner.e:1111			CompileErr(343)*/
    RefDS(_21928);
    _52CompileErr(343, _21928, 0);
L6: 

    /** scanner.e:1113		return val*/
    DeRefi(_vchars_26620);
    return _val_26618;
    ;
}


object _63EscapeChar(object _delim_26645)
{
    object _c_26646 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1121		c = getch()*/
    _0 = _c_26646;
    _c_26646 = _63getch();
    DeRef(_0);

    /** scanner.e:1122		switch c do*/
    if (IS_SEQUENCE(_c_26646) ){
        goto L1; // [10] 135
    }
    if(!IS_ATOM_INT(_c_26646)){
        if( (DBL_PTR(_c_26646)->dbl != (eudouble) ((object) DBL_PTR(_c_26646)->dbl) ) ){
            goto L1; // [10] 135
        }
        _0 = (object) DBL_PTR(_c_26646)->dbl;
    }
    else {
        _0 = _c_26646;
    };
    switch ( _0 ){ 

        /** scanner.e:1123			case 'n' then*/
        case 110:

        /** scanner.e:1124				c = 10 -- Newline*/
        DeRef(_c_26646);
        _c_26646 = 10;
        goto L2; // [24] 145

        /** scanner.e:1126			case 't' then*/
        case 116:

        /** scanner.e:1127				c = 9 -- Tabulator*/
        DeRef(_c_26646);
        _c_26646 = 9;
        goto L2; // [35] 145

        /** scanner.e:1129			case '"', '\\', '\'' then*/
        case 34:
        case 92:
        case 39:

        /** scanner.e:1134			case 'r' then*/
        goto L2; // [47] 145
        case 114:

        /** scanner.e:1135				c = 13 -- Carriage Return*/
        DeRef(_c_26646);
        _c_26646 = 13;
        goto L2; // [56] 145

        /** scanner.e:1137			case '0' then*/
        case 48:

        /** scanner.e:1138				c = 0 -- Null*/
        DeRef(_c_26646);
        _c_26646 = 0;
        goto L2; // [67] 145

        /** scanner.e:1140			case 'e', 'E' then*/
        case 101:
        case 69:

        /** scanner.e:1141				c = 27 -- escape char.*/
        DeRef(_c_26646);
        _c_26646 = 27;
        goto L2; // [80] 145

        /** scanner.e:1143			case 'x' then*/
        case 120:

        /** scanner.e:1145				c = GetHexChar(2, 340)*/
        _0 = _c_26646;
        _c_26646 = _63GetHexChar(2, 340);
        DeRef(_0);
        goto L2; // [93] 145

        /** scanner.e:1147			case 'u' then*/
        case 117:

        /** scanner.e:1149				c = GetHexChar(4, 341)*/
        _0 = _c_26646;
        _c_26646 = _63GetHexChar(4, 341);
        DeRef(_0);
        goto L2; // [106] 145

        /** scanner.e:1151			case 'U' then*/
        case 85:

        /** scanner.e:1153				c = GetHexChar(8, 342)*/
        _0 = _c_26646;
        _c_26646 = _63GetHexChar(8, 342);
        DeRef(_0);
        goto L2; // [119] 145

        /** scanner.e:1155			case 'b' then*/
        case 98:

        /** scanner.e:1157				c = GetBinaryChar(delim)*/
        _0 = _c_26646;
        _c_26646 = _63GetBinaryChar(_delim_26645);
        DeRef(_0);
        goto L2; // [131] 145

        /** scanner.e:1159			case else*/
        default:
L1: 

        /** scanner.e:1160				CompileErr(155)*/
        RefDS(_21928);
        _52CompileErr(155, _21928, 0);
    ;}L2: 

    /** scanner.e:1163		return c*/
    return _c_26646;
    ;
}


object _63my_sscanf(object _yytext_26669)
{
    object _e_sign_26670 = NOVALUE;
    object _ndigits_26671 = NOVALUE;
    object _e_mag_26672 = NOVALUE;
    object _mantissa_26673 = NOVALUE;
    object _c_26674 = NOVALUE;
    object _i_26675 = NOVALUE;
    object _dec_26676 = NOVALUE;
    object _frac_26708 = NOVALUE;
    object _14904 = NOVALUE;
    object _14899 = NOVALUE;
    object _14898 = NOVALUE;
    object _14896 = NOVALUE;
    object _14895 = NOVALUE;
    object _14894 = NOVALUE;
    object _14886 = NOVALUE;
    object _14885 = NOVALUE;
    object _14882 = NOVALUE;
    object _14881 = NOVALUE;
    object _14880 = NOVALUE;
    object _14875 = NOVALUE;
    object _14874 = NOVALUE;
    object _14872 = NOVALUE;
    object _14870 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1176		if length(yytext) < 2 then*/
    if (IS_SEQUENCE(_yytext_26669)){
            _14870 = SEQ_PTR(_yytext_26669)->length;
    }
    else {
        _14870 = 1;
    }
    if (_14870 >= 2)
    goto L1; // [8] 20

    /** scanner.e:1177			CompileErr(121)*/
    RefDS(_21928);
    _52CompileErr(121, _21928, 0);
L1: 

    /** scanner.e:1181		if find( 'e', yytext ) or find( 'E', yytext ) then*/
    _14872 = find_from(101, _yytext_26669, 1);
    if (_14872 != 0) {
        goto L2; // [27] 41
    }
    _14874 = find_from(69, _yytext_26669, 1);
    if (_14874 == 0)
    {
        _14874 = NOVALUE;
        goto L3; // [37] 57
    }
    else{
        _14874 = NOVALUE;
    }
L2: 

    /** scanner.e:1182			ifdef E32 then*/

    /** scanner.e:1183				return scientific_to_atom( yytext, DOUBLE )*/
    RefDS(_yytext_26669);
    _14875 = _20scientific_to_atom(_yytext_26669, 2);
    DeRefDS(_yytext_26669);
    DeRef(_mantissa_26673);
    DeRef(_dec_26676);
    return _14875;
L3: 

    /** scanner.e:1190		mantissa = 0.0*/
    RefDS(_14877);
    DeRef(_mantissa_26673);
    _mantissa_26673 = _14877;

    /** scanner.e:1191		ndigits = 0*/
    _ndigits_26671 = 0;

    /** scanner.e:1195		yytext &= 0 -- end marker*/
    Append(&_yytext_26669, _yytext_26669, 0);

    /** scanner.e:1196		c = yytext[1]*/
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;

    /** scanner.e:1197		i = 2*/
    _i_26675 = 2;

    /** scanner.e:1198		while c >= '0' and c <= '9' do*/
L4: 
    _14880 = (_c_26674 >= 48);
    if (_14880 == 0) {
        goto L5; // [93] 142
    }
    _14882 = (_c_26674 <= 57);
    if (_14882 == 0)
    {
        DeRef(_14882);
        _14882 = NOVALUE;
        goto L5; // [102] 142
    }
    else{
        DeRef(_14882);
        _14882 = NOVALUE;
    }

    /** scanner.e:1199			ndigits += 1*/
    _ndigits_26671 = _ndigits_26671 + 1;

    /** scanner.e:1200			mantissa = mantissa * 10.0 + (c - '0')*/
    if (IS_ATOM_INT(_mantissa_26673)) {
        _14885 = NewDouble((eudouble)_mantissa_26673 * DBL_PTR(_14884)->dbl);
    }
    else {
        _14885 = NewDouble(DBL_PTR(_mantissa_26673)->dbl * DBL_PTR(_14884)->dbl);
    }
    _14886 = _c_26674 - 48;
    if ((object)((uintptr_t)_14886 +(uintptr_t) HIGH_BITS) >= 0){
        _14886 = NewDouble((eudouble)_14886);
    }
    DeRef(_mantissa_26673);
    if (IS_ATOM_INT(_14886)) {
        _mantissa_26673 = NewDouble(DBL_PTR(_14885)->dbl + (eudouble)_14886);
    }
    else
    _mantissa_26673 = NewDouble(DBL_PTR(_14885)->dbl + DBL_PTR(_14886)->dbl);
    DeRefDS(_14885);
    _14885 = NOVALUE;
    DeRef(_14886);
    _14886 = NOVALUE;

    /** scanner.e:1201			c = yytext[i]*/
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;

    /** scanner.e:1202			i += 1*/
    _i_26675 = _i_26675 + 1;

    /** scanner.e:1203		end while*/
    goto L4; // [139] 89
L5: 

    /** scanner.e:1205		if c = '.' then*/
    if (_c_26674 != 46)
    goto L6; // [144] 245

    /** scanner.e:1207			c = yytext[i]*/
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;

    /** scanner.e:1208			i += 1*/
    _i_26675 = _i_26675 + 1;

    /** scanner.e:1209			dec = 1.0*/
    RefDS(_14893);
    DeRef(_dec_26676);
    _dec_26676 = _14893;

    /** scanner.e:1210			atom frac = 0*/
    DeRef(_frac_26708);
    _frac_26708 = 0;

    /** scanner.e:1211			while c >= '0' and c <= '9' do*/
L7: 
    _14894 = (_c_26674 >= 48);
    if (_14894 == 0) {
        goto L8; // [179] 234
    }
    _14896 = (_c_26674 <= 57);
    if (_14896 == 0)
    {
        DeRef(_14896);
        _14896 = NOVALUE;
        goto L8; // [188] 234
    }
    else{
        DeRef(_14896);
        _14896 = NOVALUE;
    }

    /** scanner.e:1212				ndigits += 1*/
    _ndigits_26671 = _ndigits_26671 + 1;

    /** scanner.e:1213				frac = frac * 10 + (c - '0')*/
    if (IS_ATOM_INT(_frac_26708)) {
        if (_frac_26708 == (short)_frac_26708){
            _14898 = _frac_26708 * 10;
        }
        else{
            _14898 = NewDouble(_frac_26708 * (eudouble)10);
        }
    }
    else {
        _14898 = NewDouble(DBL_PTR(_frac_26708)->dbl * (eudouble)10);
    }
    _14899 = _c_26674 - 48;
    if ((object)((uintptr_t)_14899 +(uintptr_t) HIGH_BITS) >= 0){
        _14899 = NewDouble((eudouble)_14899);
    }
    DeRef(_frac_26708);
    if (IS_ATOM_INT(_14898) && IS_ATOM_INT(_14899)) {
        _frac_26708 = _14898 + _14899;
        if ((object)((uintptr_t)_frac_26708 + (uintptr_t)HIGH_BITS) >= 0){
            _frac_26708 = NewDouble((eudouble)_frac_26708);
        }
    }
    else {
        if (IS_ATOM_INT(_14898)) {
            _frac_26708 = NewDouble((eudouble)_14898 + DBL_PTR(_14899)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14899)) {
                _frac_26708 = NewDouble(DBL_PTR(_14898)->dbl + (eudouble)_14899);
            }
            else
            _frac_26708 = NewDouble(DBL_PTR(_14898)->dbl + DBL_PTR(_14899)->dbl);
        }
    }
    DeRef(_14898);
    _14898 = NOVALUE;
    DeRef(_14899);
    _14899 = NOVALUE;

    /** scanner.e:1214				dec *= 10.0*/
    _0 = _dec_26676;
    if (IS_ATOM_INT(_dec_26676)) {
        _dec_26676 = NewDouble((eudouble)_dec_26676 * DBL_PTR(_14884)->dbl);
    }
    else {
        _dec_26676 = NewDouble(DBL_PTR(_dec_26676)->dbl * DBL_PTR(_14884)->dbl);
    }
    DeRef(_0);

    /** scanner.e:1215				c = yytext[i]*/
    _2 = (object)SEQ_PTR(_yytext_26669);
    _c_26674 = (object)*(((s1_ptr)_2)->base + _i_26675);
    if (!IS_ATOM_INT(_c_26674))
    _c_26674 = (object)DBL_PTR(_c_26674)->dbl;

    /** scanner.e:1216				i += 1*/
    _i_26675 = _i_26675 + 1;

    /** scanner.e:1217			end while*/
    goto L7; // [231] 175
L8: 

    /** scanner.e:1218			mantissa += frac / dec*/
    if (IS_ATOM_INT(_frac_26708) && IS_ATOM_INT(_dec_26676)) {
        _14904 = (_frac_26708 % _dec_26676) ? NewDouble((eudouble)_frac_26708 / _dec_26676) : (_frac_26708 / _dec_26676);
    }
    else {
        if (IS_ATOM_INT(_frac_26708)) {
            _14904 = NewDouble((eudouble)_frac_26708 / DBL_PTR(_dec_26676)->dbl);
        }
        else {
            if (IS_ATOM_INT(_dec_26676)) {
                _14904 = NewDouble(DBL_PTR(_frac_26708)->dbl / (eudouble)_dec_26676);
            }
            else
            _14904 = NewDouble(DBL_PTR(_frac_26708)->dbl / DBL_PTR(_dec_26676)->dbl);
        }
    }
    _0 = _mantissa_26673;
    if (IS_ATOM_INT(_mantissa_26673) && IS_ATOM_INT(_14904)) {
        _mantissa_26673 = _mantissa_26673 + _14904;
        if ((object)((uintptr_t)_mantissa_26673 + (uintptr_t)HIGH_BITS) >= 0){
            _mantissa_26673 = NewDouble((eudouble)_mantissa_26673);
        }
    }
    else {
        if (IS_ATOM_INT(_mantissa_26673)) {
            _mantissa_26673 = NewDouble((eudouble)_mantissa_26673 + DBL_PTR(_14904)->dbl);
        }
        else {
            if (IS_ATOM_INT(_14904)) {
                _mantissa_26673 = NewDouble(DBL_PTR(_mantissa_26673)->dbl + (eudouble)_14904);
            }
            else
            _mantissa_26673 = NewDouble(DBL_PTR(_mantissa_26673)->dbl + DBL_PTR(_14904)->dbl);
        }
    }
    DeRef(_0);
    DeRef(_14904);
    _14904 = NOVALUE;
L6: 
    DeRef(_frac_26708);
    _frac_26708 = NOVALUE;

    /** scanner.e:1221		if ndigits = 0 then*/
    if (_ndigits_26671 != 0)
    goto L9; // [249] 261

    /** scanner.e:1222			CompileErr(121)  -- no digits*/
    RefDS(_21928);
    _52CompileErr(121, _21928, 0);
L9: 

    /** scanner.e:1268		return mantissa*/
    DeRefDS(_yytext_26669);
    DeRef(_dec_26676);
    DeRef(_14875);
    _14875 = NOVALUE;
    DeRef(_14894);
    _14894 = NOVALUE;
    DeRef(_14880);
    _14880 = NOVALUE;
    return _mantissa_26673;
    ;
}


void _63maybe_namespace()
{
    object _0, _1, _2;
    

    /** scanner.e:1273		might_be_namespace = 1*/
    _63might_be_namespace_26725 = 1;

    /** scanner.e:1274	end procedure*/
    return;
    ;
}


object _63ExtendedString(object _ech_26735)
{
    object _ch_26736 = NOVALUE;
    object _fch_26737 = NOVALUE;
    object _cline_26738 = NOVALUE;
    object _string_text_26739 = NOVALUE;
    object _trimming_26740 = NOVALUE;
    object _14957 = NOVALUE;
    object _14956 = NOVALUE;
    object _14954 = NOVALUE;
    object _14953 = NOVALUE;
    object _14952 = NOVALUE;
    object _14951 = NOVALUE;
    object _14950 = NOVALUE;
    object _14949 = NOVALUE;
    object _14948 = NOVALUE;
    object _14947 = NOVALUE;
    object _14945 = NOVALUE;
    object _14944 = NOVALUE;
    object _14943 = NOVALUE;
    object _14942 = NOVALUE;
    object _14941 = NOVALUE;
    object _14940 = NOVALUE;
    object _14937 = NOVALUE;
    object _14936 = NOVALUE;
    object _14935 = NOVALUE;
    object _14933 = NOVALUE;
    object _14932 = NOVALUE;
    object _14931 = NOVALUE;
    object _14930 = NOVALUE;
    object _14927 = NOVALUE;
    object _14912 = NOVALUE;
    object _14910 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1287		cline = line_number*/
    _cline_26738 = _39line_number_16816;

    /** scanner.e:1288		string_text = ""*/
    RefDS(_5);
    DeRefi(_string_text_26739);
    _string_text_26739 = _5;

    /** scanner.e:1289		trimming = 0*/
    _trimming_26740 = 0;

    /** scanner.e:1290		ch = getch()*/
    _ch_26736 = _63getch();
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }

    /** scanner.e:1291		if bp > length(ThisLine) then*/
    if (IS_SEQUENCE(_52ThisLine_48710)){
            _14910 = SEQ_PTR(_52ThisLine_48710)->length;
    }
    else {
        _14910 = 1;
    }
    if (_52bp_48714 <= _14910)
    goto L1; // [40] 101

    /** scanner.e:1293			read_line()*/
    _63read_line();

    /** scanner.e:1294			while ThisLine[bp] = '_' do*/
L2: 
    _2 = (object)SEQ_PTR(_52ThisLine_48710);
    _14912 = (object)*(((s1_ptr)_2)->base + _52bp_48714);
    if (binary_op_a(NOTEQ, _14912, 95)){
        _14912 = NOVALUE;
        goto L3; // [61] 86
    }
    _14912 = NOVALUE;

    /** scanner.e:1295				trimming += 1*/
    _trimming_26740 = _trimming_26740 + 1;

    /** scanner.e:1296				bp += 1*/
    _52bp_48714 = _52bp_48714 + 1;

    /** scanner.e:1297			end while*/
    goto L2; // [83] 53
L3: 

    /** scanner.e:1298			if trimming > 0 then*/
    if (_trimming_26740 <= 0)
    goto L4; // [88] 100

    /** scanner.e:1299				ch = getch()*/
    _ch_26736 = _63getch();
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }
L4: 
L1: 

    /** scanner.e:1303		while 1 do*/
L5: 

    /** scanner.e:1304			if ch = END_OF_FILE_CHAR then*/
    if (_ch_26736 != 26)
    goto L6; // [110] 122

    /** scanner.e:1305				CompileErr(129, cline)*/
    _52CompileErr(129, _cline_26738, 0);
L6: 

    /** scanner.e:1308			if ch = ech then*/
    if (_ch_26736 != _ech_26735)
    goto L7; // [124] 180

    /** scanner.e:1309				if ech != '"' then*/
    if (_ech_26735 == 34)
    goto L8; // [130] 139

    /** scanner.e:1310					exit*/
    goto L9; // [136] 310
L8: 

    /** scanner.e:1312				fch = getch()*/
    _fch_26737 = _63getch();
    if (!IS_ATOM_INT(_fch_26737)) {
        _1 = (object)(DBL_PTR(_fch_26737)->dbl);
        DeRefDS(_fch_26737);
        _fch_26737 = _1;
    }

    /** scanner.e:1313				if fch = '"' then*/
    if (_fch_26737 != 34)
    goto LA; // [148] 175

    /** scanner.e:1314					fch = getch()*/
    _fch_26737 = _63getch();
    if (!IS_ATOM_INT(_fch_26737)) {
        _1 = (object)(DBL_PTR(_fch_26737)->dbl);
        DeRefDS(_fch_26737);
        _fch_26737 = _1;
    }

    /** scanner.e:1315					if fch = '"' then*/
    if (_fch_26737 != 34)
    goto LB; // [161] 170

    /** scanner.e:1316						exit*/
    goto L9; // [167] 310
LB: 

    /** scanner.e:1318					ungetch()*/
    _63ungetch();
LA: 

    /** scanner.e:1320				ungetch()*/
    _63ungetch();
L7: 

    /** scanner.e:1323			if ch != '\r' then*/
    if (_ch_26736 == 13)
    goto LC; // [182] 193

    /** scanner.e:1326				string_text &= ch*/
    Append(&_string_text_26739, _string_text_26739, _ch_26736);
LC: 

    /** scanner.e:1329			if bp > length(ThisLine) then*/
    if (IS_SEQUENCE(_52ThisLine_48710)){
            _14927 = SEQ_PTR(_52ThisLine_48710)->length;
    }
    else {
        _14927 = 1;
    }
    if (_52bp_48714 <= _14927)
    goto LD; // [202] 298

    /** scanner.e:1330				read_line() -- sets bp to 1, btw.*/
    _63read_line();

    /** scanner.e:1331				if trimming > 0 then*/
    if (_trimming_26740 <= 0)
    goto LE; // [212] 297

    /** scanner.e:1332					while bp <= trimming and bp <= length(ThisLine) do*/
LF: 
    _14930 = (_52bp_48714 <= _trimming_26740);
    if (_14930 == 0) {
        goto L10; // [227] 296
    }
    if (IS_SEQUENCE(_52ThisLine_48710)){
            _14932 = SEQ_PTR(_52ThisLine_48710)->length;
    }
    else {
        _14932 = 1;
    }
    _14933 = (_52bp_48714 <= _14932);
    _14932 = NOVALUE;
    if (_14933 == 0)
    {
        DeRef(_14933);
        _14933 = NOVALUE;
        goto L10; // [243] 296
    }
    else{
        DeRef(_14933);
        _14933 = NOVALUE;
    }

    /** scanner.e:1333						ch = ThisLine[bp]*/
    _2 = (object)SEQ_PTR(_52ThisLine_48710);
    _ch_26736 = (object)*(((s1_ptr)_2)->base + _52bp_48714);
    if (!IS_ATOM_INT(_ch_26736)){
        _ch_26736 = (object)DBL_PTR(_ch_26736)->dbl;
    }

    /** scanner.e:1334						if ch != ' ' and ch != '\t' then*/
    _14935 = (_ch_26736 != 32);
    if (_14935 == 0) {
        goto L11; // [264] 281
    }
    _14937 = (_ch_26736 != 9);
    if (_14937 == 0)
    {
        DeRef(_14937);
        _14937 = NOVALUE;
        goto L11; // [273] 281
    }
    else{
        DeRef(_14937);
        _14937 = NOVALUE;
    }

    /** scanner.e:1335							exit*/
    goto L10; // [278] 296
L11: 

    /** scanner.e:1337						bp += 1*/
    _52bp_48714 = _52bp_48714 + 1;

    /** scanner.e:1338					end while*/
    goto LF; // [293] 221
L10: 
LE: 
LD: 

    /** scanner.e:1341			ch = getch()*/
    _ch_26736 = _63getch();
    if (!IS_ATOM_INT(_ch_26736)) {
        _1 = (object)(DBL_PTR(_ch_26736)->dbl);
        DeRefDS(_ch_26736);
        _ch_26736 = _1;
    }

    /** scanner.e:1342		end while*/
    goto L5; // [307] 106
L9: 

    /** scanner.e:1343		if length(string_text) > 0 and string_text[1] = '\n' then*/
    if (IS_SEQUENCE(_string_text_26739)){
            _14940 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14940 = 1;
    }
    _14941 = (_14940 > 0);
    _14940 = NOVALUE;
    if (_14941 == 0) {
        goto L12; // [319] 389
    }
    _2 = (object)SEQ_PTR(_string_text_26739);
    _14943 = (object)*(((s1_ptr)_2)->base + 1);
    _14944 = (_14943 == 10);
    _14943 = NOVALUE;
    if (_14944 == 0)
    {
        DeRef(_14944);
        _14944 = NOVALUE;
        goto L12; // [332] 389
    }
    else{
        DeRef(_14944);
        _14944 = NOVALUE;
    }

    /** scanner.e:1344			string_text = string_text[2 .. $]*/
    if (IS_SEQUENCE(_string_text_26739)){
            _14945 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14945 = 1;
    }
    rhs_slice_target = (object_ptr)&_string_text_26739;
    RHS_Slice(_string_text_26739, 2, _14945);

    /** scanner.e:1345			if length(string_text) > 0 and string_text[$] = '\n' then*/
    if (IS_SEQUENCE(_string_text_26739)){
            _14947 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14947 = 1;
    }
    _14948 = (_14947 > 0);
    _14947 = NOVALUE;
    if (_14948 == 0) {
        goto L13; // [354] 388
    }
    if (IS_SEQUENCE(_string_text_26739)){
            _14950 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14950 = 1;
    }
    _2 = (object)SEQ_PTR(_string_text_26739);
    _14951 = (object)*(((s1_ptr)_2)->base + _14950);
    _14952 = (_14951 == 10);
    _14951 = NOVALUE;
    if (_14952 == 0)
    {
        DeRef(_14952);
        _14952 = NOVALUE;
        goto L13; // [370] 388
    }
    else{
        DeRef(_14952);
        _14952 = NOVALUE;
    }

    /** scanner.e:1346				string_text = string_text[1 .. $-1]*/
    if (IS_SEQUENCE(_string_text_26739)){
            _14953 = SEQ_PTR(_string_text_26739)->length;
    }
    else {
        _14953 = 1;
    }
    _14954 = _14953 - 1;
    _14953 = NOVALUE;
    rhs_slice_target = (object_ptr)&_string_text_26739;
    RHS_Slice(_string_text_26739, 1, _14954);
L13: 
L12: 

    /** scanner.e:1349		return {STRING, NewStringSym(string_text)}*/
    RefDS(_string_text_26739);
    _14956 = _56NewStringSym(_string_text_26739);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _14956;
    _14957 = MAKE_SEQ(_1);
    _14956 = NOVALUE;
    DeRefDSi(_string_text_26739);
    DeRef(_14930);
    _14930 = NOVALUE;
    DeRef(_14935);
    _14935 = NOVALUE;
    DeRef(_14941);
    _14941 = NOVALUE;
    DeRef(_14954);
    _14954 = NOVALUE;
    DeRef(_14948);
    _14948 = NOVALUE;
    return _14957;
    ;
}


object _63GetHexString(object _maxnibbles_26826)
{
    object _ch_26827 = NOVALUE;
    object _digit_26828 = NOVALUE;
    object _val_26829 = NOVALUE;
    object _cline_26830 = NOVALUE;
    object _nibble_26831 = NOVALUE;
    object _string_text_26832 = NOVALUE;
    object _14971 = NOVALUE;
    object _14970 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1360		cline = line_number*/
    _cline_26830 = _39line_number_16816;

    /** scanner.e:1361		string_text = ""*/
    RefDS(_5);
    DeRef(_string_text_26832);
    _string_text_26832 = _5;

    /** scanner.e:1362		nibble = 1*/
    _nibble_26831 = 1;

    /** scanner.e:1363		val = -1*/
    DeRef(_val_26829);
    _val_26829 = -1;

    /** scanner.e:1364		ch = getch()*/
    _ch_26827 = _63getch();
    if (!IS_ATOM_INT(_ch_26827)) {
        _1 = (object)(DBL_PTR(_ch_26827)->dbl);
        DeRefDS(_ch_26827);
        _ch_26827 = _1;
    }

    /** scanner.e:1365		while 1 do*/
L1: 

    /** scanner.e:1366			if ch = END_OF_FILE_CHAR then*/
    if (_ch_26827 != 26)
    goto L2; // [45] 57

    /** scanner.e:1367				CompileErr(129, cline)*/
    _52CompileErr(129, _cline_26830, 0);
L2: 

    /** scanner.e:1370			if ch = '"' then*/
    if (_ch_26827 != 34)
    goto L3; // [59] 68

    /** scanner.e:1371				exit*/
    goto L4; // [65] 224
L3: 

    /** scanner.e:1374			digit = find(ch, "0123456789ABCDEFabcdef_ \t\n\r")*/
    _digit_26828 = find_from(_ch_26827, _14961, 1);

    /** scanner.e:1375			if digit = 0 then*/
    if (_digit_26828 != 0)
    goto L5; // [77] 89

    /** scanner.e:1376				CompileErr(329)*/
    RefDS(_21928);
    _52CompileErr(329, _21928, 0);
L5: 

    /** scanner.e:1378			if digit <= 23 then*/
    if (_digit_26828 > 23)
    goto L6; // [91] 177

    /** scanner.e:1379				if digit != 23 then*/
    if (_digit_26828 == 23)
    goto L7; // [97] 212

    /** scanner.e:1380					if digit > 16 then*/
    if (_digit_26828 <= 16)
    goto L8; // [103] 114

    /** scanner.e:1381						digit -= 6*/
    _digit_26828 = _digit_26828 - 6;
L8: 

    /** scanner.e:1383					if nibble = 1 then*/
    if (_nibble_26831 != 1)
    goto L9; // [116] 129

    /** scanner.e:1384						val = digit - 1*/
    DeRef(_val_26829);
    _val_26829 = _digit_26828 - 1;
    if ((object)((uintptr_t)_val_26829 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26829 = NewDouble((eudouble)_val_26829);
    }
    goto LA; // [126] 167
L9: 

    /** scanner.e:1386						val = val * 16 + digit - 1*/
    if (IS_ATOM_INT(_val_26829)) {
        if (_val_26829 == (short)_val_26829){
            _14970 = _val_26829 * 16;
        }
        else{
            _14970 = NewDouble(_val_26829 * (eudouble)16);
        }
    }
    else {
        _14970 = NewDouble(DBL_PTR(_val_26829)->dbl * (eudouble)16);
    }
    if (IS_ATOM_INT(_14970)) {
        _14971 = _14970 + _digit_26828;
        if ((object)((uintptr_t)_14971 + (uintptr_t)HIGH_BITS) >= 0){
            _14971 = NewDouble((eudouble)_14971);
        }
    }
    else {
        _14971 = NewDouble(DBL_PTR(_14970)->dbl + (eudouble)_digit_26828);
    }
    DeRef(_14970);
    _14970 = NOVALUE;
    DeRef(_val_26829);
    if (IS_ATOM_INT(_14971)) {
        _val_26829 = _14971 - 1;
        if ((object)((uintptr_t)_val_26829 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26829 = NewDouble((eudouble)_val_26829);
        }
    }
    else {
        _val_26829 = NewDouble(DBL_PTR(_14971)->dbl - (eudouble)1);
    }
    DeRef(_14971);
    _14971 = NOVALUE;

    /** scanner.e:1387						if nibble = maxnibbles then*/
    if (_nibble_26831 != _maxnibbles_26826)
    goto LB; // [145] 166

    /** scanner.e:1388							string_text &= val*/
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);

    /** scanner.e:1389							val = -1*/
    DeRef(_val_26829);
    _val_26829 = -1;

    /** scanner.e:1390							nibble = 0*/
    _nibble_26831 = 0;
LB: 
LA: 

    /** scanner.e:1393					nibble += 1*/
    _nibble_26831 = _nibble_26831 + 1;
    goto L7; // [174] 212
L6: 

    /** scanner.e:1396				if val >= 0 then*/
    if (binary_op_a(LESS, _val_26829, 0)){
        goto LC; // [179] 195
    }

    /** scanner.e:1398					string_text &= val*/
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);

    /** scanner.e:1399					val = -1*/
    DeRef(_val_26829);
    _val_26829 = -1;
LC: 

    /** scanner.e:1401				nibble = 1*/
    _nibble_26831 = 1;

    /** scanner.e:1402				if ch = '\n' then*/
    if (_ch_26827 != 10)
    goto LD; // [202] 211

    /** scanner.e:1403					read_line()*/
    _63read_line();
LD: 
L7: 

    /** scanner.e:1406			ch = getch()*/
    _ch_26827 = _63getch();
    if (!IS_ATOM_INT(_ch_26827)) {
        _1 = (object)(DBL_PTR(_ch_26827)->dbl);
        DeRefDS(_ch_26827);
        _ch_26827 = _1;
    }

    /** scanner.e:1407		end while*/
    goto L1; // [221] 41
L4: 

    /** scanner.e:1409		if val >= 0 then	*/
    if (binary_op_a(LESS, _val_26829, 0)){
        goto LE; // [226] 237
    }

    /** scanner.e:1411			string_text &= val*/
    Ref(_val_26829);
    Append(&_string_text_26832, _string_text_26832, _val_26829);
LE: 

    /** scanner.e:1414		return string_text*/
    DeRef(_val_26829);
    return _string_text_26832;
    ;
}


object _63GetBitString()
{
    object _ch_26877 = NOVALUE;
    object _digit_26878 = NOVALUE;
    object _val_26879 = NOVALUE;
    object _cline_26880 = NOVALUE;
    object _bitcnt_26881 = NOVALUE;
    object _string_text_26882 = NOVALUE;
    object _14993 = NOVALUE;
    object _14992 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1425		cline = line_number*/
    _cline_26880 = _39line_number_16816;

    /** scanner.e:1426		string_text = ""*/
    RefDS(_5);
    DeRef(_string_text_26882);
    _string_text_26882 = _5;

    /** scanner.e:1427		bitcnt = 1*/
    _bitcnt_26881 = 1;

    /** scanner.e:1428		val = -1*/
    DeRef(_val_26879);
    _val_26879 = -1;

    /** scanner.e:1429		ch = getch()*/
    _ch_26877 = _63getch();
    if (!IS_ATOM_INT(_ch_26877)) {
        _1 = (object)(DBL_PTR(_ch_26877)->dbl);
        DeRefDS(_ch_26877);
        _ch_26877 = _1;
    }

    /** scanner.e:1430		while 1 do*/
L1: 

    /** scanner.e:1431			if ch = END_OF_FILE_CHAR then*/
    if (_ch_26877 != 26)
    goto L2; // [43] 55

    /** scanner.e:1432				CompileErr(129, cline)*/
    _52CompileErr(129, _cline_26880, 0);
L2: 

    /** scanner.e:1435			if ch = '"' then*/
    if (_ch_26877 != 34)
    goto L3; // [57] 66

    /** scanner.e:1436				exit*/
    goto L4; // [63] 186
L3: 

    /** scanner.e:1439			digit = find(ch, "01_ \t\n\r")*/
    _digit_26878 = find_from(_ch_26877, _14985, 1);

    /** scanner.e:1440			if digit = 0 then*/
    if (_digit_26878 != 0)
    goto L5; // [75] 87

    /** scanner.e:1441				CompileErr(329)*/
    RefDS(_21928);
    _52CompileErr(329, _21928, 0);
L5: 

    /** scanner.e:1443			if digit <= 3 then*/
    if (_digit_26878 > 3)
    goto L6; // [89] 139

    /** scanner.e:1444				if digit != 3 then*/
    if (_digit_26878 == 3)
    goto L7; // [95] 174

    /** scanner.e:1445					if bitcnt = 1 then*/
    if (_bitcnt_26881 != 1)
    goto L8; // [101] 114

    /** scanner.e:1446						val = digit - 1*/
    DeRef(_val_26879);
    _val_26879 = _digit_26878 - 1;
    if ((object)((uintptr_t)_val_26879 +(uintptr_t) HIGH_BITS) >= 0){
        _val_26879 = NewDouble((eudouble)_val_26879);
    }
    goto L9; // [111] 129
L8: 

    /** scanner.e:1448						val = val * 2 + digit - 1*/
    if (IS_ATOM_INT(_val_26879) && IS_ATOM_INT(_val_26879)) {
        _14992 = _val_26879 + _val_26879;
        if ((object)((uintptr_t)_14992 + (uintptr_t)HIGH_BITS) >= 0){
            _14992 = NewDouble((eudouble)_14992);
        }
    }
    else {
        if (IS_ATOM_INT(_val_26879)) {
            _14992 = NewDouble((eudouble)_val_26879 + DBL_PTR(_val_26879)->dbl);
        }
        else {
            if (IS_ATOM_INT(_val_26879)) {
                _14992 = NewDouble(DBL_PTR(_val_26879)->dbl + (eudouble)_val_26879);
            }
            else
            _14992 = NewDouble(DBL_PTR(_val_26879)->dbl + DBL_PTR(_val_26879)->dbl);
        }
    }
    if (IS_ATOM_INT(_14992)) {
        _14993 = _14992 + _digit_26878;
        if ((object)((uintptr_t)_14993 + (uintptr_t)HIGH_BITS) >= 0){
            _14993 = NewDouble((eudouble)_14993);
        }
    }
    else {
        _14993 = NewDouble(DBL_PTR(_14992)->dbl + (eudouble)_digit_26878);
    }
    DeRef(_14992);
    _14992 = NOVALUE;
    DeRef(_val_26879);
    if (IS_ATOM_INT(_14993)) {
        _val_26879 = _14993 - 1;
        if ((object)((uintptr_t)_val_26879 +(uintptr_t) HIGH_BITS) >= 0){
            _val_26879 = NewDouble((eudouble)_val_26879);
        }
    }
    else {
        _val_26879 = NewDouble(DBL_PTR(_14993)->dbl - (eudouble)1);
    }
    DeRef(_14993);
    _14993 = NOVALUE;
L9: 

    /** scanner.e:1450					bitcnt += 1*/
    _bitcnt_26881 = _bitcnt_26881 + 1;
    goto L7; // [136] 174
L6: 

    /** scanner.e:1453				if val >= 0 then*/
    if (binary_op_a(LESS, _val_26879, 0)){
        goto LA; // [141] 157
    }

    /** scanner.e:1455					string_text &= val*/
    Ref(_val_26879);
    Append(&_string_text_26882, _string_text_26882, _val_26879);

    /** scanner.e:1456					val = -1*/
    DeRef(_val_26879);
    _val_26879 = -1;
LA: 

    /** scanner.e:1458				bitcnt = 1*/
    _bitcnt_26881 = 1;

    /** scanner.e:1459				if ch = '\n' then*/
    if (_ch_26877 != 10)
    goto LB; // [164] 173

    /** scanner.e:1460					read_line()*/
    _63read_line();
LB: 
L7: 

    /** scanner.e:1463			ch = getch()*/
    _ch_26877 = _63getch();
    if (!IS_ATOM_INT(_ch_26877)) {
        _1 = (object)(DBL_PTR(_ch_26877)->dbl);
        DeRefDS(_ch_26877);
        _ch_26877 = _1;
    }

    /** scanner.e:1464		end while*/
    goto L1; // [183] 39
L4: 

    /** scanner.e:1466		if val >= 0 then	*/
    if (binary_op_a(LESS, _val_26879, 0)){
        goto LC; // [188] 199
    }

    /** scanner.e:1468			string_text &= val*/
    Ref(_val_26879);
    Append(&_string_text_26882, _string_text_26882, _val_26879);
LC: 

    /** scanner.e:1471		return string_text*/
    DeRef(_val_26879);
    return _string_text_26882;
    ;
}


object _63Scanner()
{
    object _fwd_inlined_set_qualified_fwd_at_441_27020 = NOVALUE;
    object _ch_26921 = NOVALUE;
    object _i_26922 = NOVALUE;
    object _sp_26923 = NOVALUE;
    object _prev_Nne_26924 = NOVALUE;
    object _pch_26925 = NOVALUE;
    object _cline_26926 = NOVALUE;
    object _yytext_26927 = NOVALUE;
    object _namespaces_26928 = NOVALUE;
    object _d_26929 = NOVALUE;
    object _tok_26931 = NOVALUE;
    object _is_int_26932 = NOVALUE;
    object _class_26933 = NOVALUE;
    object _name_26934 = NOVALUE;
    object _is_namespace_26993 = NOVALUE;
    object _basetype_27227 = NOVALUE;
    object _hdigit_27267 = NOVALUE;
    object _fch_27402 = NOVALUE;
    object _cnest_27582 = NOVALUE;
    object _ach_27611 = NOVALUE;
    object _31708 = NOVALUE;
    object _31707 = NOVALUE;
    object _31706 = NOVALUE;
    object _31705 = NOVALUE;
    object _31704 = NOVALUE;
    object _31703 = NOVALUE;
    object _31702 = NOVALUE;
    object _15388 = NOVALUE;
    object _15387 = NOVALUE;
    object _15385 = NOVALUE;
    object _15383 = NOVALUE;
    object _15382 = NOVALUE;
    object _15381 = NOVALUE;
    object _15379 = NOVALUE;
    object _15378 = NOVALUE;
    object _15377 = NOVALUE;
    object _15376 = NOVALUE;
    object _15374 = NOVALUE;
    object _15373 = NOVALUE;
    object _15371 = NOVALUE;
    object _15369 = NOVALUE;
    object _15368 = NOVALUE;
    object _15366 = NOVALUE;
    object _15364 = NOVALUE;
    object _15363 = NOVALUE;
    object _15361 = NOVALUE;
    object _15359 = NOVALUE;
    object _15358 = NOVALUE;
    object _15357 = NOVALUE;
    object _15356 = NOVALUE;
    object _15355 = NOVALUE;
    object _15353 = NOVALUE;
    object _15352 = NOVALUE;
    object _15341 = NOVALUE;
    object _15328 = NOVALUE;
    object _15324 = NOVALUE;
    object _15323 = NOVALUE;
    object _15319 = NOVALUE;
    object _15318 = NOVALUE;
    object _15317 = NOVALUE;
    object _15316 = NOVALUE;
    object _15314 = NOVALUE;
    object _15313 = NOVALUE;
    object _15312 = NOVALUE;
    object _15311 = NOVALUE;
    object _15308 = NOVALUE;
    object _15307 = NOVALUE;
    object _15306 = NOVALUE;
    object _15305 = NOVALUE;
    object _15304 = NOVALUE;
    object _15303 = NOVALUE;
    object _15301 = NOVALUE;
    object _15300 = NOVALUE;
    object _15299 = NOVALUE;
    object _15298 = NOVALUE;
    object _15297 = NOVALUE;
    object _15296 = NOVALUE;
    object _15294 = NOVALUE;
    object _15293 = NOVALUE;
    object _15290 = NOVALUE;
    object _15287 = NOVALUE;
    object _15282 = NOVALUE;
    object _15281 = NOVALUE;
    object _15280 = NOVALUE;
    object _15279 = NOVALUE;
    object _15278 = NOVALUE;
    object _15277 = NOVALUE;
    object _15275 = NOVALUE;
    object _15274 = NOVALUE;
    object _15273 = NOVALUE;
    object _15272 = NOVALUE;
    object _15271 = NOVALUE;
    object _15270 = NOVALUE;
    object _15268 = NOVALUE;
    object _15267 = NOVALUE;
    object _15264 = NOVALUE;
    object _15261 = NOVALUE;
    object _15259 = NOVALUE;
    object _15258 = NOVALUE;
    object _15254 = NOVALUE;
    object _15253 = NOVALUE;
    object _15249 = NOVALUE;
    object _15248 = NOVALUE;
    object _15247 = NOVALUE;
    object _15245 = NOVALUE;
    object _15240 = NOVALUE;
    object _15237 = NOVALUE;
    object _15236 = NOVALUE;
    object _15235 = NOVALUE;
    object _15234 = NOVALUE;
    object _15228 = NOVALUE;
    object _15226 = NOVALUE;
    object _15221 = NOVALUE;
    object _15220 = NOVALUE;
    object _15219 = NOVALUE;
    object _15218 = NOVALUE;
    object _15217 = NOVALUE;
    object _15216 = NOVALUE;
    object _15215 = NOVALUE;
    object _15213 = NOVALUE;
    object _15211 = NOVALUE;
    object _15210 = NOVALUE;
    object _15209 = NOVALUE;
    object _15208 = NOVALUE;
    object _15207 = NOVALUE;
    object _15205 = NOVALUE;
    object _15200 = NOVALUE;
    object _15199 = NOVALUE;
    object _15197 = NOVALUE;
    object _15193 = NOVALUE;
    object _15190 = NOVALUE;
    object _15189 = NOVALUE;
    object _15187 = NOVALUE;
    object _15186 = NOVALUE;
    object _15185 = NOVALUE;
    object _15182 = NOVALUE;
    object _15180 = NOVALUE;
    object _15179 = NOVALUE;
    object _15174 = NOVALUE;
    object _15170 = NOVALUE;
    object _15167 = NOVALUE;
    object _15161 = NOVALUE;
    object _15153 = NOVALUE;
    object _15152 = NOVALUE;
    object _15151 = NOVALUE;
    object _15149 = NOVALUE;
    object _15146 = NOVALUE;
    object _15144 = NOVALUE;
    object _15142 = NOVALUE;
    object _15139 = NOVALUE;
    object _15136 = NOVALUE;
    object _15134 = NOVALUE;
    object _15132 = NOVALUE;
    object _15130 = NOVALUE;
    object _15129 = NOVALUE;
    object _15125 = NOVALUE;
    object _15122 = NOVALUE;
    object _15120 = NOVALUE;
    object _15117 = NOVALUE;
    object _15110 = NOVALUE;
    object _15108 = NOVALUE;
    object _15105 = NOVALUE;
    object _15099 = NOVALUE;
    object _15098 = NOVALUE;
    object _15097 = NOVALUE;
    object _15096 = NOVALUE;
    object _15095 = NOVALUE;
    object _15094 = NOVALUE;
    object _15093 = NOVALUE;
    object _15091 = NOVALUE;
    object _15089 = NOVALUE;
    object _15087 = NOVALUE;
    object _15085 = NOVALUE;
    object _15083 = NOVALUE;
    object _15082 = NOVALUE;
    object _15081 = NOVALUE;
    object _15080 = NOVALUE;
    object _15079 = NOVALUE;
    object _15077 = NOVALUE;
    object _15074 = NOVALUE;
    object _15072 = NOVALUE;
    object _15071 = NOVALUE;
    object _15070 = NOVALUE;
    object _15068 = NOVALUE;
    object _15063 = NOVALUE;
    object _15059 = NOVALUE;
    object _15056 = NOVALUE;
    object _15054 = NOVALUE;
    object _15053 = NOVALUE;
    object _15051 = NOVALUE;
    object _15049 = NOVALUE;
    object _15047 = NOVALUE;
    object _15046 = NOVALUE;
    object _15045 = NOVALUE;
    object _15043 = NOVALUE;
    object _15038 = NOVALUE;
    object _15035 = NOVALUE;
    object _15033 = NOVALUE;
    object _15030 = NOVALUE;
    object _15029 = NOVALUE;
    object _15027 = NOVALUE;
    object _15026 = NOVALUE;
    object _15025 = NOVALUE;
    object _15024 = NOVALUE;
    object _15023 = NOVALUE;
    object _15022 = NOVALUE;
    object _15021 = NOVALUE;
    object _15020 = NOVALUE;
    object _15019 = NOVALUE;
    object _15018 = NOVALUE;
    object _15017 = NOVALUE;
    object _15016 = NOVALUE;
    object _15015 = NOVALUE;
    object _15010 = NOVALUE;
    object _15008 = NOVALUE;
    object _15005 = NOVALUE;
    object _15003 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:1482		integer is_int, class*/

    /** scanner.e:1483		sequence name*/

    /** scanner.e:1485		while TRUE do*/
L1: 
    if (_9TRUE_444 == 0)
    {
        goto L2; // [12] 3793
    }
    else{
    }

    /** scanner.e:1486			ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1487			while ch = ' ' or ch = '\t' do*/
L3: 
    _15003 = (_ch_26921 == 32);
    if (_15003 != 0) {
        goto L4; // [31] 44
    }
    _15005 = (_ch_26921 == 9);
    if (_15005 == 0)
    {
        DeRef(_15005);
        _15005 = NOVALUE;
        goto L5; // [40] 56
    }
    else{
        DeRef(_15005);
        _15005 = NOVALUE;
    }
L4: 

    /** scanner.e:1488				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1489			end while*/
    goto L3; // [53] 27
L5: 

    /** scanner.e:1491			class = char_class[ch]*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _class_26933 = (object)*(((s1_ptr)_2)->base + _ch_26921);

    /** scanner.e:1494			if class = LETTER or ch = '_' then*/
    _15008 = (_class_26933 == -2);
    if (_15008 != 0) {
        goto L6; // [72] 85
    }
    _15010 = (_ch_26921 == 95);
    if (_15010 == 0)
    {
        DeRef(_15010);
        _15010 = NOVALUE;
        goto L7; // [81] 1282
    }
    else{
        DeRef(_15010);
        _15010 = NOVALUE;
    }
L6: 

    /** scanner.e:1495				sp = bp*/
    _sp_26923 = _52bp_48714;

    /** scanner.e:1496				pch = ch*/
    _pch_26925 = _ch_26921;

    /** scanner.e:1497				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1498				if ch = '"' then*/
    if (_ch_26921 != 34)
    goto L8; // [108] 222

    /** scanner.e:1499					switch pch do*/
    _0 = _pch_26925;
    switch ( _0 ){ 

        /** scanner.e:1500						case 'x' then*/
        case 120:

        /** scanner.e:1501							return {STRING, NewStringSym(GetHexString(2))}*/
        _15015 = _63GetHexString(2);
        _15016 = _56NewStringSym(_15015);
        _15015 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15016;
        _15017 = MAKE_SEQ(_1);
        _15016 = NOVALUE;
        DeRef(_yytext_26927);
        DeRef(_namespaces_26928);
        DeRef(_d_26929);
        DeRef(_tok_26931);
        DeRef(_name_26934);
        DeRef(_15008);
        _15008 = NOVALUE;
        DeRef(_15003);
        _15003 = NOVALUE;
        return _15017;
        goto L9; // [143] 221

        /** scanner.e:1503						case 'u' then*/
        case 117:

        /** scanner.e:1504							return {STRING, NewStringSym(GetHexString(4))}*/
        _15018 = _63GetHexString(4);
        _15019 = _56NewStringSym(_15018);
        _15018 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15019;
        _15020 = MAKE_SEQ(_1);
        _15019 = NOVALUE;
        DeRef(_yytext_26927);
        DeRef(_namespaces_26928);
        DeRef(_d_26929);
        DeRef(_tok_26931);
        DeRef(_name_26934);
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15008);
        _15008 = NOVALUE;
        DeRef(_15003);
        _15003 = NOVALUE;
        return _15020;
        goto L9; // [169] 221

        /** scanner.e:1506						case 'U' then*/
        case 85:

        /** scanner.e:1507							return {STRING, NewStringSym(GetHexString(8))}*/
        _15021 = _63GetHexString(8);
        _15022 = _56NewStringSym(_15021);
        _15021 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15022;
        _15023 = MAKE_SEQ(_1);
        _15022 = NOVALUE;
        DeRef(_yytext_26927);
        DeRef(_namespaces_26928);
        DeRef(_d_26929);
        DeRef(_tok_26931);
        DeRef(_name_26934);
        DeRef(_15020);
        _15020 = NOVALUE;
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15008);
        _15008 = NOVALUE;
        DeRef(_15003);
        _15003 = NOVALUE;
        return _15023;
        goto L9; // [195] 221

        /** scanner.e:1509						case 'b' then*/
        case 98:

        /** scanner.e:1510							return {STRING, NewStringSym(GetBitString())}*/
        _15024 = _63GetBitString();
        _15025 = _56NewStringSym(_15024);
        _15024 = NOVALUE;
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = 503;
        ((intptr_t *)_2)[2] = _15025;
        _15026 = MAKE_SEQ(_1);
        _15025 = NOVALUE;
        DeRef(_yytext_26927);
        DeRef(_namespaces_26928);
        DeRef(_d_26929);
        DeRef(_tok_26931);
        DeRef(_name_26934);
        DeRef(_15020);
        _15020 = NOVALUE;
        DeRef(_15023);
        _15023 = NOVALUE;
        DeRef(_15017);
        _15017 = NOVALUE;
        DeRef(_15008);
        _15008 = NOVALUE;
        DeRef(_15003);
        _15003 = NOVALUE;
        return _15026;
    ;}L9: 
L8: 

    /** scanner.e:1515				while id_char[ch] do*/
LA: 
    _2 = (object)SEQ_PTR(_63id_char_25189);
    _15027 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15027 == 0)
    {
        _15027 = NOVALUE;
        goto LB; // [233] 248
    }
    else{
        _15027 = NOVALUE;
    }

    /** scanner.e:1516					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1517				end while*/
    goto LA; // [245] 227
LB: 

    /** scanner.e:1518				yytext = ThisLine[sp-1..bp-2]*/
    _15029 = _sp_26923 - 1;
    if ((object)((uintptr_t)_15029 +(uintptr_t) HIGH_BITS) >= 0){
        _15029 = NewDouble((eudouble)_15029);
    }
    _15030 = _52bp_48714 - 2;
    rhs_slice_target = (object_ptr)&_yytext_26927;
    RHS_Slice(_52ThisLine_48710, _15029, _15030);

    /** scanner.e:1519				ungetch()*/
    _63ungetch();

    /** scanner.e:1521				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1522				while ch = ' ' or ch = '\t' do*/
LC: 
    _15033 = (_ch_26921 == 32);
    if (_15033 != 0) {
        goto LD; // [287] 300
    }
    _15035 = (_ch_26921 == 9);
    if (_15035 == 0)
    {
        DeRef(_15035);
        _15035 = NOVALUE;
        goto LE; // [296] 312
    }
    else{
        DeRef(_15035);
        _15035 = NOVALUE;
    }
LD: 

    /** scanner.e:1523					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1524				end while*/
    goto LC; // [309] 283
LE: 

    /** scanner.e:1525				integer is_namespace*/

    /** scanner.e:1527				if might_be_namespace then*/
    if (_63might_be_namespace_26725 == 0)
    {
        goto LF; // [318] 361
    }
    else{
    }

    /** scanner.e:1528					tok = keyfind(yytext, -1, , -1 )*/
    RefDS(_yytext_26927);
    _31708 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, -1, _39current_file_no_16815, -1, _31708);
    DeRef(_0);
    _31708 = NOVALUE;

    /** scanner.e:1529					is_namespace = tok[T_ID] = NAMESPACE*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15038 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_15038)) {
        _is_namespace_26993 = (_15038 == 523);
    }
    else {
        _is_namespace_26993 = binary_op(EQUALS, _15038, 523);
    }
    _15038 = NOVALUE;
    if (!IS_ATOM_INT(_is_namespace_26993)) {
        _1 = (object)(DBL_PTR(_is_namespace_26993)->dbl);
        DeRefDS(_is_namespace_26993);
        _is_namespace_26993 = _1;
    }

    /** scanner.e:1530					might_be_namespace = 0*/
    _63might_be_namespace_26725 = 0;
    goto L10; // [358] 384
LF: 

    /** scanner.e:1532					is_namespace = ch = ':'*/
    _is_namespace_26993 = (_ch_26921 == 58);

    /** scanner.e:1533					tok = keyfind(yytext, -1, , is_namespace )*/
    RefDS(_yytext_26927);
    _31707 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, -1, _39current_file_no_16815, _is_namespace_26993, _31707);
    DeRef(_0);
    _31707 = NOVALUE;
L10: 

    /** scanner.e:1537				if not is_namespace then*/
    if (_is_namespace_26993 != 0)
    goto L11; // [388] 396

    /** scanner.e:1538					ungetch()*/
    _63ungetch();
L11: 

    /** scanner.e:1541				if is_namespace then*/
    if (_is_namespace_26993 == 0)
    {
        goto L12; // [398] 1119
    }
    else{
    }

    /** scanner.e:1543					namespaces = yytext*/
    RefDS(_yytext_26927);
    DeRef(_namespaces_26928);
    _namespaces_26928 = _yytext_26927;

    /** scanner.e:1546					if tok[T_ID] = NAMESPACE then -- known namespace*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15043 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15043, 523)){
        _15043 = NOVALUE;
        goto L13; // [420] 974
    }
    _15043 = NOVALUE;

    /** scanner.e:1547						set_qualified_fwd( SymTab[tok[T_SYM]][S_OBJ] )*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15045 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_15045)){
        _15046 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15045)->dbl));
    }
    else{
        _15046 = (object)*(((s1_ptr)_2)->base + _15045);
    }
    _2 = (object)SEQ_PTR(_15046);
    _15047 = (object)*(((s1_ptr)_2)->base + 1);
    _15046 = NOVALUE;
    Ref(_15047);
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27020);
    _fwd_inlined_set_qualified_fwd_at_441_27020 = _15047;
    _15047 = NOVALUE;
    if (!IS_ATOM_INT(_fwd_inlined_set_qualified_fwd_at_441_27020)) {
        _1 = (object)(DBL_PTR(_fwd_inlined_set_qualified_fwd_at_441_27020)->dbl);
        DeRefDS(_fwd_inlined_set_qualified_fwd_at_441_27020);
        _fwd_inlined_set_qualified_fwd_at_441_27020 = _1;
    }

    /** scanner.e:104		qualified_fwd = fwd*/
    _63qualified_fwd_25213 = _fwd_inlined_set_qualified_fwd_at_441_27020;

    /** scanner.e:105	end procedure*/
    goto L14; // [456] 459
L14: 
    DeRef(_fwd_inlined_set_qualified_fwd_at_441_27020);
    _fwd_inlined_set_qualified_fwd_at_441_27020 = NOVALUE;

    /** scanner.e:1550						ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1551						while ch = ' ' or ch = '\t' do*/
L15: 
    _15049 = (_ch_26921 == 32);
    if (_15049 != 0) {
        goto L16; // [477] 490
    }
    _15051 = (_ch_26921 == 9);
    if (_15051 == 0)
    {
        DeRef(_15051);
        _15051 = NOVALUE;
        goto L17; // [486] 502
    }
    else{
        DeRef(_15051);
        _15051 = NOVALUE;
    }
L16: 

    /** scanner.e:1552							ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1553						end while*/
    goto L15; // [499] 473
L17: 

    /** scanner.e:1554						yytext = ""*/
    RefDS(_5);
    DeRef(_yytext_26927);
    _yytext_26927 = _5;

    /** scanner.e:1555						if char_class[ch] = LETTER or ch = '_' then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15053 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    _15054 = (_15053 == -2);
    _15053 = NOVALUE;
    if (_15054 != 0) {
        goto L18; // [523] 536
    }
    _15056 = (_ch_26921 == 95);
    if (_15056 == 0)
    {
        DeRef(_15056);
        _15056 = NOVALUE;
        goto L19; // [532] 589
    }
    else{
        DeRef(_15056);
        _15056 = NOVALUE;
    }
L18: 

    /** scanner.e:1556							yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1557							ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1558							while id_char[ch] = TRUE do*/
L1A: 
    _2 = (object)SEQ_PTR(_63id_char_25189);
    _15059 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15059 != _9TRUE_444)
    goto L1B; // [562] 584

    /** scanner.e:1559								yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1560								ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1561							end while*/
    goto L1A; // [581] 554
L1B: 

    /** scanner.e:1562							ungetch()*/
    _63ungetch();
L19: 

    /** scanner.e:1565						if length(yytext) = 0 then*/
    if (IS_SEQUENCE(_yytext_26927)){
            _15063 = SEQ_PTR(_yytext_26927)->length;
    }
    else {
        _15063 = 1;
    }
    if (_15063 != 0)
    goto L1C; // [594] 606

    /** scanner.e:1566							CompileErr(32)*/
    RefDS(_21928);
    _52CompileErr(32, _21928, 0);
L1C: 

    /** scanner.e:1572					    if Parser_mode = PAM_RECORD then*/
    if (_39Parser_mode_16920 != 1)
    goto L1D; // [612] 773

    /** scanner.e:1573			                Recorded = append(Recorded,yytext)*/
    RefDS(_yytext_26927);
    Append(&_39Recorded_16921, _39Recorded_16921, _yytext_26927);

    /** scanner.e:1574			                Ns_recorded = append(Ns_recorded,namespaces)*/
    RefDS(_namespaces_26928);
    Append(&_39Ns_recorded_16922, _39Ns_recorded_16922, _namespaces_26928);

    /** scanner.e:1575			                Ns_recorded_sym &= tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15068 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_39Ns_recorded_sym_16924) && IS_ATOM(_15068)) {
        Ref(_15068);
        Append(&_39Ns_recorded_sym_16924, _39Ns_recorded_sym_16924, _15068);
    }
    else if (IS_ATOM(_39Ns_recorded_sym_16924) && IS_SEQUENCE(_15068)) {
    }
    else {
        Concat((object_ptr)&_39Ns_recorded_sym_16924, _39Ns_recorded_sym_16924, _15068);
    }
    _15068 = NOVALUE;

    /** scanner.e:1576			                prev_Nne = No_new_entry*/
    _prev_Nne_26924 = _56No_new_entry_47455;

    /** scanner.e:1577							No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** scanner.e:1578							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15070 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_15070)){
        _15071 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15070)->dbl));
    }
    else{
        _15071 = (object)*(((s1_ptr)_2)->base + _15070);
    }
    _2 = (object)SEQ_PTR(_15071);
    _15072 = (object)*(((s1_ptr)_2)->base + 1);
    _15071 = NOVALUE;
    RefDS(_yytext_26927);
    _31706 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    Ref(_15072);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, _15072, _39current_file_no_16815, 0, _31706);
    DeRef(_0);
    _15072 = NOVALUE;
    _31706 = NOVALUE;

    /** scanner.e:1579							if tok[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15074 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15074, 509)){
        _15074 = NOVALUE;
        goto L1E; // [712] 729
    }
    _15074 = NOVALUE;

    /** scanner.e:1580								Recorded_sym &= 0 -- must resolve on call site*/
    Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, 0);
    goto L1F; // [726] 746
L1E: 

    /** scanner.e:1582								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15077 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_39Recorded_sym_16923) && IS_ATOM(_15077)) {
        Ref(_15077);
        Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, _15077);
    }
    else if (IS_ATOM(_39Recorded_sym_16923) && IS_SEQUENCE(_15077)) {
    }
    else {
        Concat((object_ptr)&_39Recorded_sym_16923, _39Recorded_sym_16923, _15077);
    }
    _15077 = NOVALUE;
L1F: 

    /** scanner.e:1584			                No_new_entry = prev_Nne*/
    _56No_new_entry_47455 = _prev_Nne_26924;

    /** scanner.e:1585			                return {RECORDED,length(Recorded)}*/
    if (IS_SEQUENCE(_39Recorded_16921)){
            _15079 = SEQ_PTR(_39Recorded_16921)->length;
    }
    else {
        _15079 = 1;
    }
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15079;
    _15080 = MAKE_SEQ(_1);
    _15079 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    return _15080;
    goto L20; // [770] 915
L1D: 

    /** scanner.e:1587							tok = keyfind(yytext, SymTab[tok[T_SYM]][S_OBJ])*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15081 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_15081)){
        _15082 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15081)->dbl));
    }
    else{
        _15082 = (object)*(((s1_ptr)_2)->base + _15081);
    }
    _2 = (object)SEQ_PTR(_15082);
    _15083 = (object)*(((s1_ptr)_2)->base + 1);
    _15082 = NOVALUE;
    RefDS(_yytext_26927);
    _31705 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    Ref(_15083);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, _15083, _39current_file_no_16815, 0, _31705);
    DeRef(_0);
    _15083 = NOVALUE;
    _31705 = NOVALUE;

    /** scanner.e:1589							if tok[T_ID] = VARIABLE then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15085 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15085, -100)){
        _15085 = NOVALUE;
        goto L21; // [817] 834
    }
    _15085 = NOVALUE;

    /** scanner.e:1590								tok[T_ID] = QUALIFIED_VARIABLE*/
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 512;
    DeRef(_1);
    goto L22; // [831] 914
L21: 

    /** scanner.e:1591							elsif tok[T_ID] = FUNC then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15087 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15087, 501)){
        _15087 = NOVALUE;
        goto L23; // [844] 861
    }
    _15087 = NOVALUE;

    /** scanner.e:1592								tok[T_ID] = QUALIFIED_FUNC*/
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 520;
    DeRef(_1);
    goto L22; // [858] 914
L23: 

    /** scanner.e:1593							elsif tok[T_ID] = PROC then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15089 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15089, 27)){
        _15089 = NOVALUE;
        goto L24; // [871] 888
    }
    _15089 = NOVALUE;

    /** scanner.e:1594								tok[T_ID] = QUALIFIED_PROC*/
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 521;
    DeRef(_1);
    goto L22; // [885] 914
L24: 

    /** scanner.e:1595							elsif tok[T_ID] = TYPE then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15091 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15091, 504)){
        _15091 = NOVALUE;
        goto L25; // [898] 913
    }
    _15091 = NOVALUE;

    /** scanner.e:1596								tok[T_ID] = QUALIFIED_TYPE*/
    _2 = (object)SEQ_PTR(_tok_26931);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _tok_26931 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 522;
    DeRef(_1);
L25: 
L22: 
L20: 

    /** scanner.e:1601						if atom( tok[T_SYM] ) and  SymTab[tok[T_SYM]][S_SCOPE] != SC_UNDEFINED then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15093 = (object)*(((s1_ptr)_2)->base + 2);
    _15094 = IS_ATOM(_15093);
    _15093 = NOVALUE;
    if (_15094 == 0) {
        goto L26; // [926] 1269
    }
    _2 = (object)SEQ_PTR(_tok_26931);
    _15096 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_15096)){
        _15097 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15096)->dbl));
    }
    else{
        _15097 = (object)*(((s1_ptr)_2)->base + _15096);
    }
    _2 = (object)SEQ_PTR(_15097);
    _15098 = (object)*(((s1_ptr)_2)->base + 4);
    _15097 = NOVALUE;
    if (IS_ATOM_INT(_15098)) {
        _15099 = (_15098 != 9);
    }
    else {
        _15099 = binary_op(NOTEQ, _15098, 9);
    }
    _15098 = NOVALUE;
    if (_15099 == 0) {
        DeRef(_15099);
        _15099 = NOVALUE;
        goto L26; // [955] 1269
    }
    else {
        if (!IS_ATOM_INT(_15099) && DBL_PTR(_15099)->dbl == 0.0){
            DeRef(_15099);
            _15099 = NOVALUE;
            goto L26; // [955] 1269
        }
        DeRef(_15099);
        _15099 = NOVALUE;
    }
    DeRef(_15099);
    _15099 = NOVALUE;

    /** scanner.e:1602							set_qualified_fwd( -1 )*/

    /** scanner.e:104		qualified_fwd = fwd*/
    _63qualified_fwd_25213 = -1;

    /** scanner.e:105	end procedure*/
    goto L26; // [967] 1269
    goto L26; // [971] 1269
L13: 

    /** scanner.e:1606						ungetch()*/
    _63ungetch();

    /** scanner.e:1607					    if Parser_mode = PAM_RECORD then*/
    if (_39Parser_mode_16920 != 1)
    goto L26; // [984] 1269

    /** scanner.e:1608			                Ns_recorded &= 0*/
    Append(&_39Ns_recorded_16922, _39Ns_recorded_16922, 0);

    /** scanner.e:1609			                Ns_recorded_sym &= 0*/
    Append(&_39Ns_recorded_sym_16924, _39Ns_recorded_sym_16924, 0);

    /** scanner.e:1610			                Recorded = append(Recorded,yytext)*/
    RefDS(_yytext_26927);
    Append(&_39Recorded_16921, _39Recorded_16921, _yytext_26927);

    /** scanner.e:1611			                prev_Nne = No_new_entry*/
    _prev_Nne_26924 = _56No_new_entry_47455;

    /** scanner.e:1612							No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** scanner.e:1613							tok = keyfind(yytext, -1)*/
    RefDS(_yytext_26927);
    _31704 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, -1, _39current_file_no_16815, 0, _31704);
    DeRef(_0);
    _31704 = NOVALUE;

    /** scanner.e:1614							if tok[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15105 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15105, 509)){
        _15105 = NOVALUE;
        goto L27; // [1060] 1077
    }
    _15105 = NOVALUE;

    /** scanner.e:1615								Recorded_sym &= 0 -- must resolve on call site*/
    Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, 0);
    goto L28; // [1074] 1094
L27: 

    /** scanner.e:1617								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15108 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_39Recorded_sym_16923) && IS_ATOM(_15108)) {
        Ref(_15108);
        Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, _15108);
    }
    else if (IS_ATOM(_39Recorded_sym_16923) && IS_SEQUENCE(_15108)) {
    }
    else {
        Concat((object_ptr)&_39Recorded_sym_16923, _39Recorded_sym_16923, _15108);
    }
    _15108 = NOVALUE;
L28: 

    /** scanner.e:1619			                No_new_entry = prev_Nne*/
    _56No_new_entry_47455 = _prev_Nne_26924;

    /** scanner.e:1620			                tok = {RECORDED,length(Recorded)}*/
    if (IS_SEQUENCE(_39Recorded_16921)){
            _15110 = SEQ_PTR(_39Recorded_16921)->length;
    }
    else {
        _15110 = 1;
    }
    DeRef(_tok_26931);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15110;
    _tok_26931 = MAKE_SEQ(_1);
    _15110 = NOVALUE;
    goto L26; // [1116] 1269
L12: 

    /** scanner.e:1624					set_qualified_fwd( -1 )*/

    /** scanner.e:104		qualified_fwd = fwd*/
    _63qualified_fwd_25213 = -1;

    /** scanner.e:105	end procedure*/
    goto L29; // [1128] 1131
L29: 

    /** scanner.e:1625				    if Parser_mode = PAM_RECORD then*/
    if (_39Parser_mode_16920 != 1)
    goto L2A; // [1137] 1268

    /** scanner.e:1626		                Ns_recorded_sym &= 0*/
    Append(&_39Ns_recorded_sym_16924, _39Ns_recorded_sym_16924, 0);

    /** scanner.e:1627							Recorded = append(Recorded, yytext)*/
    RefDS(_yytext_26927);
    Append(&_39Recorded_16921, _39Recorded_16921, _yytext_26927);

    /** scanner.e:1628			                Ns_recorded &= 0*/
    Append(&_39Ns_recorded_16922, _39Ns_recorded_16922, 0);

    /** scanner.e:1629			                prev_Nne = No_new_entry*/
    _prev_Nne_26924 = _56No_new_entry_47455;

    /** scanner.e:1630							No_new_entry = 1*/
    _56No_new_entry_47455 = 1;

    /** scanner.e:1631							tok = keyfind(yytext, -1)*/
    RefDS(_yytext_26927);
    _31703 = _56hashfn(_yytext_26927);
    RefDS(_yytext_26927);
    _0 = _tok_26931;
    _tok_26931 = _56keyfind(_yytext_26927, -1, _39current_file_no_16815, 0, _31703);
    DeRef(_0);
    _31703 = NOVALUE;

    /** scanner.e:1632							if tok[T_ID] = IGNORED then*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15117 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15117, 509)){
        _15117 = NOVALUE;
        goto L2B; // [1213] 1230
    }
    _15117 = NOVALUE;

    /** scanner.e:1633								Recorded_sym &= 0 -- must resolve on call site*/
    Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, 0);
    goto L2C; // [1227] 1247
L2B: 

    /** scanner.e:1635								Recorded_sym &= tok[T_SYM] -- fallback when symbol is undefined on call site*/
    _2 = (object)SEQ_PTR(_tok_26931);
    _15120 = (object)*(((s1_ptr)_2)->base + 2);
    if (IS_SEQUENCE(_39Recorded_sym_16923) && IS_ATOM(_15120)) {
        Ref(_15120);
        Append(&_39Recorded_sym_16923, _39Recorded_sym_16923, _15120);
    }
    else if (IS_ATOM(_39Recorded_sym_16923) && IS_SEQUENCE(_15120)) {
    }
    else {
        Concat((object_ptr)&_39Recorded_sym_16923, _39Recorded_sym_16923, _15120);
    }
    _15120 = NOVALUE;
L2C: 

    /** scanner.e:1637			                No_new_entry = prev_Nne*/
    _56No_new_entry_47455 = _prev_Nne_26924;

    /** scanner.e:1638		                tok = {RECORDED, length(Recorded)}*/
    if (IS_SEQUENCE(_39Recorded_16921)){
            _15122 = SEQ_PTR(_39Recorded_16921)->length;
    }
    else {
        _15122 = 1;
    }
    DeRef(_tok_26931);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 508;
    ((intptr_t *)_2)[2] = _15122;
    _tok_26931 = MAKE_SEQ(_1);
    _15122 = NOVALUE;
L2A: 
L26: 

    /** scanner.e:1642				return tok*/
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    _15081 = NOVALUE;
    return _tok_26931;
    goto L1; // [1279] 10
L7: 

    /** scanner.e:1644			elsif class < ILLEGAL_CHAR then*/
    if (_class_26933 >= -20)
    goto L2D; // [1286] 1303

    /** scanner.e:1645				return {class, 0}  -- brackets, punctuation, eof, illegal char etc.*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26933;
    ((intptr_t *)_2)[2] = 0;
    _15125 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    _15081 = NOVALUE;
    return _15125;
    goto L1; // [1300] 10
L2D: 

    /** scanner.e:1647			elsif class = ILLEGAL_CHAR then*/
    if (_class_26933 != -20)
    goto L2E; // [1307] 1321

    /** scanner.e:1648				CompileErr(101)*/
    RefDS(_21928);
    _52CompileErr(101, _21928, 0);
    goto L1; // [1318] 10
L2E: 

    /** scanner.e:1650			elsif class = NEWLINE then*/
    if (_class_26933 != -6)
    goto L2F; // [1325] 1351

    /** scanner.e:1651				if start_include then*/
    if (_63start_include_25181 == 0)
    {
        goto L30; // [1333] 1343
    }
    else{
    }

    /** scanner.e:1652					IncludePush()*/
    _63IncludePush();
    goto L1; // [1340] 10
L30: 

    /** scanner.e:1654					read_line()*/
    _63read_line();
    goto L1; // [1348] 10
L2F: 

    /** scanner.e:1658			elsif class = EQUALS then*/
    if (_class_26933 != 3)
    goto L31; // [1355] 1372

    /** scanner.e:1659				return {class, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _class_26933;
    ((intptr_t *)_2)[2] = 0;
    _15129 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    _15081 = NOVALUE;
    return _15129;
    goto L1; // [1369] 10
L31: 

    /** scanner.e:1661			elsif class = DOT or class = DIGIT then*/
    _15130 = (_class_26933 == -3);
    if (_15130 != 0) {
        goto L32; // [1380] 1395
    }
    _15132 = (_class_26933 == -7);
    if (_15132 == 0)
    {
        DeRef(_15132);
        _15132 = NOVALUE;
        goto L33; // [1391] 2177
    }
    else{
        DeRef(_15132);
        _15132 = NOVALUE;
    }
L32: 

    /** scanner.e:1662				integer basetype*/

    /** scanner.e:1663				if class = DOT then*/
    if (_class_26933 != -3)
    goto L34; // [1401] 1435

    /** scanner.e:1664					if getch() = '.' then*/
    _15134 = _63getch();
    if (binary_op_a(NOTEQ, _15134, 46)){
        DeRef(_15134);
        _15134 = NOVALUE;
        goto L35; // [1410] 1429
    }
    DeRef(_15134);
    _15134 = NOVALUE;

    /** scanner.e:1665						return {SLICE, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 513;
    ((intptr_t *)_2)[2] = 0;
    _15136 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    _15081 = NOVALUE;
    return _15136;
    goto L36; // [1426] 1434
L35: 

    /** scanner.e:1667						ungetch()*/
    _63ungetch();
L36: 
L34: 

    /** scanner.e:1671				yytext = {ch}*/
    _0 = _yytext_26927;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26921;
    _yytext_26927 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scanner.e:1672				is_int = (ch != '.')*/
    _is_int_26932 = (_ch_26921 != 46);

    /** scanner.e:1673				basetype = -1 -- default is decimal*/
    _basetype_27227 = -1;

    /** scanner.e:1674				while 1 with entry do*/
    goto L37; // [1454] 1645
L38: 

    /** scanner.e:1675					if char_class[ch] = DIGIT then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15139 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15139 != -7)
    goto L39; // [1467] 1480

    /** scanner.e:1676						yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    goto L3A; // [1477] 1642
L39: 

    /** scanner.e:1678					elsif equal(yytext, "0") then*/
    if (_yytext_26927 == _14795)
    _15142 = 1;
    else if (IS_ATOM_INT(_yytext_26927) && IS_ATOM_INT(_14795))
    _15142 = 0;
    else
    _15142 = (compare(_yytext_26927, _14795) == 0);
    if (_15142 == 0)
    {
        _15142 = NOVALUE;
        goto L3B; // [1486] 1581
    }
    else{
        _15142 = NOVALUE;
    }

    /** scanner.e:1679						basetype = find(ch, nbasecode)*/
    _basetype_27227 = find_from(_ch_26921, _63nbasecode_26729, 1);

    /** scanner.e:1680						if basetype > length(nbase) then*/
    if (IS_SEQUENCE(_63nbase_26728)){
            _15144 = SEQ_PTR(_63nbase_26728)->length;
    }
    else {
        _15144 = 1;
    }
    if (_basetype_27227 <= _15144)
    goto L3C; // [1501] 1515

    /** scanner.e:1681							basetype -= length(nbase)*/
    if (IS_SEQUENCE(_63nbase_26728)){
            _15146 = SEQ_PTR(_63nbase_26728)->length;
    }
    else {
        _15146 = 1;
    }
    _basetype_27227 = _basetype_27227 - _15146;
    _15146 = NOVALUE;
L3C: 

    /** scanner.e:1684						if basetype = 0 then*/
    if (_basetype_27227 != 0)
    goto L3D; // [1517] 1572

    /** scanner.e:1685							if char_class[ch] = LETTER then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15149 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15149 != -2)
    goto L3E; // [1531] 1562

    /** scanner.e:1686								if ch != 'e' and ch != 'E' then*/
    _15151 = (_ch_26921 != 101);
    if (_15151 == 0) {
        goto L3F; // [1541] 1561
    }
    _15153 = (_ch_26921 != 69);
    if (_15153 == 0)
    {
        DeRef(_15153);
        _15153 = NOVALUE;
        goto L3F; // [1550] 1561
    }
    else{
        DeRef(_15153);
        _15153 = NOVALUE;
    }

    /** scanner.e:1687									CompileErr(105, ch)*/
    _52CompileErr(105, _ch_26921, 0);
L3F: 
L3E: 

    /** scanner.e:1691							basetype = -1 -- decimal*/
    _basetype_27227 = -1;

    /** scanner.e:1692							exit*/
    goto L40; // [1569] 1657
L3D: 

    /** scanner.e:1694						yytext &= '0'*/
    Append(&_yytext_26927, _yytext_26927, 48);
    goto L3A; // [1578] 1642
L3B: 

    /** scanner.e:1696					elsif basetype = 4 then -- hexadecimal*/
    if (_basetype_27227 != 4)
    goto L40; // [1583] 1657

    /** scanner.e:1697						integer hdigit*/

    /** scanner.e:1698						hdigit = find(ch, "ABCDEFabcdef")*/
    _hdigit_27267 = find_from(_ch_26921, _15156, 1);

    /** scanner.e:1699						if hdigit = 0 then*/
    if (_hdigit_27267 != 0)
    goto L41; // [1598] 1609

    /** scanner.e:1700							exit*/
    goto L40; // [1606] 1657
L41: 

    /** scanner.e:1702						if hdigit > 6 then*/
    if (_hdigit_27267 <= 6)
    goto L42; // [1611] 1622

    /** scanner.e:1703							hdigit -= 6*/
    _hdigit_27267 = _hdigit_27267 - 6;
L42: 

    /** scanner.e:1705						yytext &= hexasc[hdigit]*/
    _2 = (object)SEQ_PTR(_63hexasc_26731);
    _15161 = (object)*(((s1_ptr)_2)->base + _hdigit_27267);
    if (IS_SEQUENCE(_yytext_26927) && IS_ATOM(_15161)) {
        Ref(_15161);
        Append(&_yytext_26927, _yytext_26927, _15161);
    }
    else if (IS_ATOM(_yytext_26927) && IS_SEQUENCE(_15161)) {
    }
    else {
        Concat((object_ptr)&_yytext_26927, _yytext_26927, _15161);
    }
    _15161 = NOVALUE;
    goto L3A; // [1634] 1642

    /** scanner.e:1708						exit*/
    goto L40; // [1639] 1657
L3A: 

    /** scanner.e:1710				entry*/
L37: 

    /** scanner.e:1711					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1712				end while*/
    goto L38; // [1654] 1457
L40: 

    /** scanner.e:1714				if ch = '.' then*/
    if (_ch_26921 != 46)
    goto L43; // [1659] 1794

    /** scanner.e:1715					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1716					if ch = '.' then*/
    if (_ch_26921 != 46)
    goto L44; // [1672] 1683

    /** scanner.e:1718						ungetch()*/
    _63ungetch();
    goto L45; // [1680] 1793
L44: 

    /** scanner.e:1720						is_int = FALSE*/
    _is_int_26932 = _9FALSE_442;

    /** scanner.e:1721						if yytext[1] = '.' then*/
    _2 = (object)SEQ_PTR(_yytext_26927);
    _15167 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _15167, 46)){
        _15167 = NOVALUE;
        goto L46; // [1698] 1712
    }
    _15167 = NOVALUE;

    /** scanner.e:1722							CompileErr(124)*/
    RefDS(_21928);
    _52CompileErr(124, _21928, 0);
    goto L47; // [1709] 1719
L46: 

    /** scanner.e:1724							yytext &= '.'*/
    Append(&_yytext_26927, _yytext_26927, 46);
L47: 

    /** scanner.e:1726						if char_class[ch] = DIGIT then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15170 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15170 != -7)
    goto L48; // [1729] 1784

    /** scanner.e:1727							yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1728							ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1729							while char_class[ch] = DIGIT do*/
L49: 
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15174 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15174 != -7)
    goto L4A; // [1759] 1792

    /** scanner.e:1730								yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1731								ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1732							end while*/
    goto L49; // [1778] 1751
    goto L4A; // [1781] 1792
L48: 

    /** scanner.e:1734							CompileErr(94)*/
    RefDS(_21928);
    _52CompileErr(94, _21928, 0);
L4A: 
L45: 
L43: 

    /** scanner.e:1739				if basetype = -1 and find(ch, "eE") then*/
    _15179 = (_basetype_27227 == -1);
    if (_15179 == 0) {
        goto L4B; // [1800] 1936
    }
    _15182 = find_from(_ch_26921, _15181, 1);
    if (_15182 == 0)
    {
        _15182 = NOVALUE;
        goto L4B; // [1810] 1936
    }
    else{
        _15182 = NOVALUE;
    }

    /** scanner.e:1740					is_int = FALSE*/
    _is_int_26932 = _9FALSE_442;

    /** scanner.e:1741					yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1742					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1743					if ch = '-' or ch = '+' or char_class[ch] = DIGIT then*/
    _15185 = (_ch_26921 == 45);
    if (_15185 != 0) {
        _15186 = 1;
        goto L4C; // [1841] 1853
    }
    _15187 = (_ch_26921 == 43);
    _15186 = (_15187 != 0);
L4C: 
    if (_15186 != 0) {
        goto L4D; // [1853] 1874
    }
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15189 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    _15190 = (_15189 == -7);
    _15189 = NOVALUE;
    if (_15190 == 0)
    {
        DeRef(_15190);
        _15190 = NOVALUE;
        goto L4E; // [1870] 1883
    }
    else{
        DeRef(_15190);
        _15190 = NOVALUE;
    }
L4D: 

    /** scanner.e:1744						yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
    goto L4F; // [1880] 1891
L4E: 

    /** scanner.e:1746						CompileErr(86)*/
    RefDS(_21928);
    _52CompileErr(86, _21928, 0);
L4F: 

    /** scanner.e:1748					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1749					while char_class[ch] = DIGIT do*/
L50: 
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15193 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15193 != -7)
    goto L51; // [1911] 1967

    /** scanner.e:1750						yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);

    /** scanner.e:1751						ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1752					end while*/
    goto L50; // [1930] 1903
    goto L51; // [1933] 1967
L4B: 

    /** scanner.e:1753				elsif char_class[ch] = LETTER then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15197 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15197 != -2)
    goto L52; // [1946] 1966

    /** scanner.e:1754					CompileErr(127, {{ch}})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_26921;
    _15199 = MAKE_SEQ(_1);
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _15199;
    _15200 = MAKE_SEQ(_1);
    _15199 = NOVALUE;
    _52CompileErr(127, _15200, 0);
    _15200 = NOVALUE;
L52: 
L51: 

    /** scanner.e:1757				ungetch()*/
    _63ungetch();

    /** scanner.e:1759				while i != 0 with entry do*/
    goto L53; // [1973] 1992
L54: 
    if (_i_26922 == 0)
    goto L55; // [1978] 2004

    /** scanner.e:1760					yytext = remove( yytext, i )*/
    {
        s1_ptr assign_space = SEQ_PTR(_yytext_26927);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_i_26922)) ? _i_26922 : (object)(DBL_PTR(_i_26922)->dbl);
        int stop = (IS_ATOM_INT(_i_26922)) ? _i_26922 : (object)(DBL_PTR(_i_26922)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_yytext_26927), start, &_yytext_26927 );
            }
            else Tail(SEQ_PTR(_yytext_26927), stop+1, &_yytext_26927);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_yytext_26927), start, &_yytext_26927);
        }
        else {
            assign_slice_seq = &assign_space;
            _yytext_26927 = Remove_elements(start, stop, (SEQ_PTR(_yytext_26927)->ref == 1));
        }
    }

    /** scanner.e:1761				  entry*/
L53: 

    /** scanner.e:1762				    i = find('_', yytext)*/
    _i_26922 = find_from(95, _yytext_26927, 1);

    /** scanner.e:1763				end while*/
    goto L54; // [2001] 1976
L55: 

    /** scanner.e:1765				if is_int then*/
    if (_is_int_26932 == 0)
    {
        goto L56; // [2006] 2078
    }
    else{
    }

    /** scanner.e:1766					if basetype = -1 then*/
    if (_basetype_27227 != -1)
    goto L57; // [2011] 2021

    /** scanner.e:1767						basetype = 3 -- decimal*/
    _basetype_27227 = 3;
L57: 

    /** scanner.e:1769					d = MakeInt(yytext, nbase[basetype])*/
    _2 = (object)SEQ_PTR(_63nbase_26728);
    _15205 = (object)*(((s1_ptr)_2)->base + _basetype_27227);
    RefDS(_yytext_26927);
    Ref(_15205);
    _0 = _d_26929;
    _d_26929 = _63MakeInt(_yytext_26927, _15205);
    DeRef(_0);
    _15205 = NOVALUE;

    /** scanner.e:1770					if is_integer(d) then*/
    Ref(_d_26929);
    _15207 = _39is_integer(_d_26929);
    if (_15207 == 0) {
        DeRef(_15207);
        _15207 = NOVALUE;
        goto L58; // [2038] 2060
    }
    else {
        if (!IS_ATOM_INT(_15207) && DBL_PTR(_15207)->dbl == 0.0){
            DeRef(_15207);
            _15207 = NOVALUE;
            goto L58; // [2038] 2060
        }
        DeRef(_15207);
        _15207 = NOVALUE;
    }
    DeRef(_15207);
    _15207 = NOVALUE;

    /** scanner.e:1771						return {ATOM, NewIntSym(d)}*/
    Ref(_d_26929);
    _15208 = _56NewIntSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15208;
    _15209 = MAKE_SEQ(_1);
    _15208 = NOVALUE;
    DeRefDS(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15209;
    goto L59; // [2057] 2077
L58: 

    /** scanner.e:1773						return {ATOM, NewDoubleSym(d)}*/
    Ref(_d_26929);
    _15210 = _56NewDoubleSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15210;
    _15211 = MAKE_SEQ(_1);
    _15210 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15211;
L59: 
L56: 

    /** scanner.e:1778				if basetype != -1 then*/
    if (_basetype_27227 == -1)
    goto L5A; // [2080] 2096

    /** scanner.e:1779					CompileErr(125, nbasecode[basetype])*/
    _2 = (object)SEQ_PTR(_63nbasecode_26729);
    _15213 = (object)*(((s1_ptr)_2)->base + _basetype_27227);
    Ref(_15213);
    _52CompileErr(125, _15213, 0);
    _15213 = NOVALUE;
L5A: 

    /** scanner.e:1783				d = my_sscanf(yytext)*/
    RefDS(_yytext_26927);
    _0 = _d_26929;
    _d_26929 = _63my_sscanf(_yytext_26927);
    DeRef(_0);

    /** scanner.e:1784				if sequence(d) then*/
    _15215 = IS_SEQUENCE(_d_26929);
    if (_15215 == 0)
    {
        _15215 = NOVALUE;
        goto L5B; // [2107] 2120
    }
    else{
        _15215 = NOVALUE;
    }

    /** scanner.e:1785					CompileErr(121)*/
    RefDS(_21928);
    _52CompileErr(121, _21928, 0);
    goto L5C; // [2117] 2172
L5B: 

    /** scanner.e:1786				elsif is_int and d <= MAXINT_DBL then*/
    if (_is_int_26932 == 0) {
        goto L5D; // [2122] 2155
    }
    if (IS_ATOM_INT(_d_26929)) {
        _15217 = (_d_26929 <= 1073741823);
    }
    else {
        _15217 = binary_op(LESSEQ, _d_26929, 1073741823);
    }
    if (_15217 == 0) {
        DeRef(_15217);
        _15217 = NOVALUE;
        goto L5D; // [2133] 2155
    }
    else {
        if (!IS_ATOM_INT(_15217) && DBL_PTR(_15217)->dbl == 0.0){
            DeRef(_15217);
            _15217 = NOVALUE;
            goto L5D; // [2133] 2155
        }
        DeRef(_15217);
        _15217 = NOVALUE;
    }
    DeRef(_15217);
    _15217 = NOVALUE;

    /** scanner.e:1787					return {ATOM, NewIntSym(d)}  -- 1 to 1.07 billion*/
    Ref(_d_26929);
    _15218 = _56NewIntSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15218;
    _15219 = MAKE_SEQ(_1);
    _15218 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15219;
    goto L5C; // [2152] 2172
L5D: 

    /** scanner.e:1789					return {ATOM, NewDoubleSym(d)}*/
    Ref(_d_26929);
    _15220 = _56NewDoubleSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15220;
    _15221 = MAKE_SEQ(_1);
    _15220 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15221;
L5C: 
    goto L1; // [2174] 10
L33: 

    /** scanner.e:1793			elsif class = MINUS then*/
    if (_class_26933 != 10)
    goto L5E; // [2181] 2267

    /** scanner.e:1794				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1795				if ch = '-' then*/
    if (_ch_26921 != 45)
    goto L5F; // [2194] 2220

    /** scanner.e:1797					if start_include then*/
    if (_63start_include_25181 == 0)
    {
        goto L60; // [2202] 2212
    }
    else{
    }

    /** scanner.e:1798						IncludePush()*/
    _63IncludePush();
    goto L1; // [2209] 10
L60: 

    /** scanner.e:1800						read_line()*/
    _63read_line();
    goto L1; // [2217] 10
L5F: 

    /** scanner.e:1802				elsif ch = '=' then*/
    if (_ch_26921 != 61)
    goto L61; // [2222] 2241

    /** scanner.e:1803					return {MINUS_EQUALS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 516;
    ((intptr_t *)_2)[2] = 0;
    _15226 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15226;
    goto L1; // [2238] 10
L61: 

    /** scanner.e:1805					bp -= 1*/
    _52bp_48714 = _52bp_48714 - 1;

    /** scanner.e:1806					return {MINUS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 0;
    _15228 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    _15096 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15228;
    goto L1; // [2264] 10
L5E: 

    /** scanner.e:1808			elsif class = DOUBLE_QUOTE then*/
    if (_class_26933 != -4)
    goto L62; // [2271] 2465

    /** scanner.e:1809				integer fch*/

    /** scanner.e:1810				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1811				if ch = '"' then*/
    if (_ch_26921 != 34)
    goto L63; // [2286] 2322

    /** scanner.e:1812					fch = getch()*/
    _fch_27402 = _63getch();
    if (!IS_ATOM_INT(_fch_27402)) {
        _1 = (object)(DBL_PTR(_fch_27402)->dbl);
        DeRefDS(_fch_27402);
        _fch_27402 = _1;
    }

    /** scanner.e:1813					if fch = '"' then*/
    if (_fch_27402 != 34)
    goto L64; // [2299] 2316

    /** scanner.e:1815						return ExtendedString( fch )*/
    _15234 = _63ExtendedString(_fch_27402);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15234;
    goto L65; // [2313] 2321
L64: 

    /** scanner.e:1817						ungetch()*/
    _63ungetch();
L65: 
L63: 

    /** scanner.e:1820				yytext = ""*/
    RefDS(_5);
    DeRef(_yytext_26927);
    _yytext_26927 = _5;

    /** scanner.e:1821				while ch != '\n' and ch != '\r' do -- can't be EOF*/
L66: 
    _15235 = (_ch_26921 != 10);
    if (_15235 == 0) {
        goto L67; // [2338] 2417
    }
    _15237 = (_ch_26921 != 13);
    if (_15237 == 0)
    {
        DeRef(_15237);
        _15237 = NOVALUE;
        goto L67; // [2347] 2417
    }
    else{
        DeRef(_15237);
        _15237 = NOVALUE;
    }

    /** scanner.e:1822					if ch = '"' then*/
    if (_ch_26921 != 34)
    goto L68; // [2352] 2363

    /** scanner.e:1823						exit*/
    goto L67; // [2358] 2417
    goto L69; // [2360] 2405
L68: 

    /** scanner.e:1824					elsif ch = '\\' then*/
    if (_ch_26921 != 92)
    goto L6A; // [2365] 2382

    /** scanner.e:1825						yytext &= EscapeChar('"')*/
    _15240 = _63EscapeChar(34);
    if (IS_SEQUENCE(_yytext_26927) && IS_ATOM(_15240)) {
        Ref(_15240);
        Append(&_yytext_26927, _yytext_26927, _15240);
    }
    else if (IS_ATOM(_yytext_26927) && IS_SEQUENCE(_15240)) {
    }
    else {
        Concat((object_ptr)&_yytext_26927, _yytext_26927, _15240);
    }
    DeRef(_15240);
    _15240 = NOVALUE;
    goto L69; // [2379] 2405
L6A: 

    /** scanner.e:1826					elsif ch = '\t' then*/
    if (_ch_26921 != 9)
    goto L6B; // [2384] 2398

    /** scanner.e:1827						CompileErr(145)*/
    RefDS(_21928);
    _52CompileErr(145, _21928, 0);
    goto L69; // [2395] 2405
L6B: 

    /** scanner.e:1829						yytext &= ch*/
    Append(&_yytext_26927, _yytext_26927, _ch_26921);
L69: 

    /** scanner.e:1831					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1832				end while*/
    goto L66; // [2414] 2334
L67: 

    /** scanner.e:1833				if ch = '\n' or ch = '\r' then*/
    _15245 = (_ch_26921 == 10);
    if (_15245 != 0) {
        goto L6C; // [2423] 2436
    }
    _15247 = (_ch_26921 == 13);
    if (_15247 == 0)
    {
        DeRef(_15247);
        _15247 = NOVALUE;
        goto L6D; // [2432] 2444
    }
    else{
        DeRef(_15247);
        _15247 = NOVALUE;
    }
L6C: 

    /** scanner.e:1834					CompileErr(67)*/
    RefDS(_21928);
    _52CompileErr(67, _21928, 0);
L6D: 

    /** scanner.e:1836				return {STRING, NewStringSym(yytext)}*/
    RefDS(_yytext_26927);
    _15248 = _56NewStringSym(_yytext_26927);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 503;
    ((intptr_t *)_2)[2] = _15248;
    _15249 = MAKE_SEQ(_1);
    _15248 = NOVALUE;
    DeRefDS(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15249;
    goto L1; // [2462] 10
L62: 

    /** scanner.e:1838			elsif class = PLUS then*/
    if (_class_26933 != 11)
    goto L6E; // [2469] 2521

    /** scanner.e:1839				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1840				if ch = '=' then*/
    if (_ch_26921 != 61)
    goto L6F; // [2482] 2501

    /** scanner.e:1841					return {PLUS_EQUALS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 515;
    ((intptr_t *)_2)[2] = 0;
    _15253 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15253;
    goto L1; // [2498] 10
L6F: 

    /** scanner.e:1843					ungetch()*/
    _63ungetch();

    /** scanner.e:1844					return {PLUS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 11;
    ((intptr_t *)_2)[2] = 0;
    _15254 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15254;
    goto L1; // [2518] 10
L6E: 

    /** scanner.e:1847			elsif class = res:CONCAT then*/
    if (_class_26933 != 15)
    goto L70; // [2523] 2573

    /** scanner.e:1848				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1849				if ch = '=' then*/
    if (_ch_26921 != 61)
    goto L71; // [2536] 2555

    /** scanner.e:1850					return {CONCAT_EQUALS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 519;
    ((intptr_t *)_2)[2] = 0;
    _15258 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15258;
    goto L1; // [2552] 10
L71: 

    /** scanner.e:1852					ungetch()*/
    _63ungetch();

    /** scanner.e:1853					return {res:CONCAT, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 15;
    ((intptr_t *)_2)[2] = 0;
    _15259 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15259;
    goto L1; // [2570] 10
L70: 

    /** scanner.e:1856			elsif class = NUMBER_SIGN then*/
    if (_class_26933 != -11)
    goto L72; // [2577] 3104

    /** scanner.e:1857				i = 0*/
    _i_26922 = 0;

    /** scanner.e:1858				is_int = -1*/
    _is_int_26932 = -1;

    /** scanner.e:1859				while i < MAXINT/32 do*/
L73: 
    _15261 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    if (binary_op_a(GREATEREQ, _i_26922, _15261)){
        DeRef(_15261);
        _15261 = NOVALUE;
        goto L74; // [2602] 2772
    }
    DeRef(_15261);
    _15261 = NOVALUE;

    /** scanner.e:1860					ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1861					if char_class[ch] = DIGIT then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15264 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15264 != -7)
    goto L75; // [2623] 2662

    /** scanner.e:1862						if ch != '_' then*/
    if (_ch_26921 == 95)
    goto L73; // [2629] 2596

    /** scanner.e:1863							i = i * 16 + ch - '0'*/
    if (_i_26922 == (short)_i_26922){
        _15267 = _i_26922 * 16;
    }
    else{
        _15267 = NewDouble(_i_26922 * (eudouble)16);
    }
    if (IS_ATOM_INT(_15267)) {
        _15268 = _15267 + _ch_26921;
        if ((object)((uintptr_t)_15268 + (uintptr_t)HIGH_BITS) >= 0){
            _15268 = NewDouble((eudouble)_15268);
        }
    }
    else {
        _15268 = NewDouble(DBL_PTR(_15267)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15267);
    _15267 = NOVALUE;
    if (IS_ATOM_INT(_15268)) {
        _i_26922 = _15268 - 48;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15268)->dbl - (eudouble)48);
    }
    DeRef(_15268);
    _15268 = NOVALUE;
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }

    /** scanner.e:1864							is_int = TRUE*/
    _is_int_26932 = _9TRUE_444;
    goto L73; // [2659] 2596
L75: 

    /** scanner.e:1866					elsif ch >= 'A' and ch <= 'F' then*/
    _15270 = (_ch_26921 >= 65);
    if (_15270 == 0) {
        goto L76; // [2668] 2712
    }
    _15272 = (_ch_26921 <= 70);
    if (_15272 == 0)
    {
        DeRef(_15272);
        _15272 = NOVALUE;
        goto L76; // [2677] 2712
    }
    else{
        DeRef(_15272);
        _15272 = NOVALUE;
    }

    /** scanner.e:1867						i = (i * 16) + ch - ('A'-10)*/
    if (_i_26922 == (short)_i_26922){
        _15273 = _i_26922 * 16;
    }
    else{
        _15273 = NewDouble(_i_26922 * (eudouble)16);
    }
    if (IS_ATOM_INT(_15273)) {
        _15274 = _15273 + _ch_26921;
        if ((object)((uintptr_t)_15274 + (uintptr_t)HIGH_BITS) >= 0){
            _15274 = NewDouble((eudouble)_15274);
        }
    }
    else {
        _15274 = NewDouble(DBL_PTR(_15273)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15273);
    _15273 = NOVALUE;
    _15275 = 55;
    if (IS_ATOM_INT(_15274)) {
        _i_26922 = _15274 - 55;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15274)->dbl - (eudouble)55);
    }
    DeRef(_15274);
    _15274 = NOVALUE;
    _15275 = NOVALUE;
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }

    /** scanner.e:1868						is_int = TRUE*/
    _is_int_26932 = _9TRUE_444;
    goto L73; // [2709] 2596
L76: 

    /** scanner.e:1869					elsif ch >= 'a' and ch <= 'f' then*/
    _15277 = (_ch_26921 >= 97);
    if (_15277 == 0) {
        goto L74; // [2718] 2772
    }
    _15279 = (_ch_26921 <= 102);
    if (_15279 == 0)
    {
        DeRef(_15279);
        _15279 = NOVALUE;
        goto L74; // [2727] 2772
    }
    else{
        DeRef(_15279);
        _15279 = NOVALUE;
    }

    /** scanner.e:1870						i = (i * 16) + ch - ('a'-10)*/
    if (_i_26922 == (short)_i_26922){
        _15280 = _i_26922 * 16;
    }
    else{
        _15280 = NewDouble(_i_26922 * (eudouble)16);
    }
    if (IS_ATOM_INT(_15280)) {
        _15281 = _15280 + _ch_26921;
        if ((object)((uintptr_t)_15281 + (uintptr_t)HIGH_BITS) >= 0){
            _15281 = NewDouble((eudouble)_15281);
        }
    }
    else {
        _15281 = NewDouble(DBL_PTR(_15280)->dbl + (eudouble)_ch_26921);
    }
    DeRef(_15280);
    _15280 = NOVALUE;
    _15282 = 87;
    if (IS_ATOM_INT(_15281)) {
        _i_26922 = _15281 - 87;
    }
    else {
        _i_26922 = NewDouble(DBL_PTR(_15281)->dbl - (eudouble)87);
    }
    DeRef(_15281);
    _15281 = NOVALUE;
    _15282 = NOVALUE;
    if (!IS_ATOM_INT(_i_26922)) {
        _1 = (object)(DBL_PTR(_i_26922)->dbl);
        DeRefDS(_i_26922);
        _i_26922 = _1;
    }

    /** scanner.e:1871						is_int = TRUE*/
    _is_int_26932 = _9TRUE_444;
    goto L73; // [2759] 2596

    /** scanner.e:1873						exit*/
    goto L74; // [2764] 2772

    /** scanner.e:1875				end while*/
    goto L73; // [2769] 2596
L74: 

    /** scanner.e:1877				if is_int = -1 then*/
    if (_is_int_26932 != -1)
    goto L77; // [2774] 2837

    /** scanner.e:1878					if ch = '!' then*/
    if (_ch_26921 != 33)
    goto L78; // [2780] 2826

    /** scanner.e:1879						if line_number > 1 then*/
    if (_39line_number_16816 <= 1)
    goto L79; // [2788] 2800

    /** scanner.e:1880							CompileErr(161)*/
    RefDS(_21928);
    _52CompileErr(161, _21928, 0);
L79: 

    /** scanner.e:1883						shebang = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_63shebang_25186);
    _63shebang_25186 = _52ThisLine_48710;

    /** scanner.e:1884						if start_include then*/
    if (_63start_include_25181 == 0)
    {
        goto L7A; // [2811] 2819
    }
    else{
    }

    /** scanner.e:1885							IncludePush()*/
    _63IncludePush();
L7A: 

    /** scanner.e:1887						read_line()*/
    _63read_line();
    goto L1; // [2823] 10
L78: 

    /** scanner.e:1889						CompileErr(97)*/
    RefDS(_21928);
    _52CompileErr(97, _21928, 0);
    goto L1; // [2834] 10
L77: 

    /** scanner.e:1892					if i >= MAXINT/32 then*/
    _15287 = (1073741823 % 32) ? NewDouble((eudouble)1073741823 / 32) : (1073741823 / 32);
    if (binary_op_a(LESS, _i_26922, _15287)){
        DeRef(_15287);
        _15287 = NOVALUE;
        goto L7B; // [2845] 3016
    }
    DeRef(_15287);
    _15287 = NOVALUE;

    /** scanner.e:1893						d = i*/
    DeRef(_d_26929);
    _d_26929 = _i_26922;

    /** scanner.e:1894						is_int = FALSE*/
    _is_int_26932 = _9FALSE_442;

    /** scanner.e:1895						while TRUE do*/
L7C: 
    if (_9TRUE_444 == 0)
    {
        goto L7D; // [2870] 3015
    }
    else{
    }

    /** scanner.e:1896							ch = getch()  -- eventually END_OF_FILE_CHAR or new-line*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1897							if char_class[ch] = DIGIT then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15290 = (object)*(((s1_ptr)_2)->base + _ch_26921);
    if (_15290 != -7)
    goto L7E; // [2890] 2918

    /** scanner.e:1898								if ch != '_' then*/
    if (_ch_26921 == 95)
    goto L7C; // [2896] 2868

    /** scanner.e:1899									d = (d * 16) + ch - '0'*/
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15293 = _d_26929 * 16;
        }
        else{
            _15293 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15293 = binary_op(MULTIPLY, _d_26929, 16);
    }
    if (IS_ATOM_INT(_15293)) {
        _15294 = _15293 + _ch_26921;
        if ((object)((uintptr_t)_15294 + (uintptr_t)HIGH_BITS) >= 0){
            _15294 = NewDouble((eudouble)_15294);
        }
    }
    else {
        _15294 = binary_op(PLUS, _15293, _ch_26921);
    }
    DeRef(_15293);
    _15293 = NOVALUE;
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15294)) {
        _d_26929 = _15294 - 48;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15294, 48);
    }
    DeRef(_15294);
    _15294 = NOVALUE;
    goto L7C; // [2915] 2868
L7E: 

    /** scanner.e:1901							elsif ch >= 'A' and ch <= 'F' then*/
    _15296 = (_ch_26921 >= 65);
    if (_15296 == 0) {
        goto L7F; // [2924] 2957
    }
    _15298 = (_ch_26921 <= 70);
    if (_15298 == 0)
    {
        DeRef(_15298);
        _15298 = NOVALUE;
        goto L7F; // [2933] 2957
    }
    else{
        DeRef(_15298);
        _15298 = NOVALUE;
    }

    /** scanner.e:1902								d = (d * 16) + ch - ('A'- 10)*/
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15299 = _d_26929 * 16;
        }
        else{
            _15299 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15299 = binary_op(MULTIPLY, _d_26929, 16);
    }
    if (IS_ATOM_INT(_15299)) {
        _15300 = _15299 + _ch_26921;
        if ((object)((uintptr_t)_15300 + (uintptr_t)HIGH_BITS) >= 0){
            _15300 = NewDouble((eudouble)_15300);
        }
    }
    else {
        _15300 = binary_op(PLUS, _15299, _ch_26921);
    }
    DeRef(_15299);
    _15299 = NOVALUE;
    _15301 = 55;
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15300)) {
        _d_26929 = _15300 - 55;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15300, 55);
    }
    DeRef(_15300);
    _15300 = NOVALUE;
    _15301 = NOVALUE;
    goto L7C; // [2954] 2868
L7F: 

    /** scanner.e:1903							elsif ch >= 'a' and ch <= 'f' then*/
    _15303 = (_ch_26921 >= 97);
    if (_15303 == 0) {
        goto L80; // [2963] 2996
    }
    _15305 = (_ch_26921 <= 102);
    if (_15305 == 0)
    {
        DeRef(_15305);
        _15305 = NOVALUE;
        goto L80; // [2972] 2996
    }
    else{
        DeRef(_15305);
        _15305 = NOVALUE;
    }

    /** scanner.e:1904								d = (d * 16) + ch - ('a'-10)*/
    if (IS_ATOM_INT(_d_26929)) {
        if (_d_26929 == (short)_d_26929){
            _15306 = _d_26929 * 16;
        }
        else{
            _15306 = NewDouble(_d_26929 * (eudouble)16);
        }
    }
    else {
        _15306 = binary_op(MULTIPLY, _d_26929, 16);
    }
    if (IS_ATOM_INT(_15306)) {
        _15307 = _15306 + _ch_26921;
        if ((object)((uintptr_t)_15307 + (uintptr_t)HIGH_BITS) >= 0){
            _15307 = NewDouble((eudouble)_15307);
        }
    }
    else {
        _15307 = binary_op(PLUS, _15306, _ch_26921);
    }
    DeRef(_15306);
    _15306 = NOVALUE;
    _15308 = 87;
    DeRef(_d_26929);
    if (IS_ATOM_INT(_15307)) {
        _d_26929 = _15307 - 87;
        if ((object)((uintptr_t)_d_26929 +(uintptr_t) HIGH_BITS) >= 0){
            _d_26929 = NewDouble((eudouble)_d_26929);
        }
    }
    else {
        _d_26929 = binary_op(MINUS, _15307, 87);
    }
    DeRef(_15307);
    _15307 = NOVALUE;
    _15308 = NOVALUE;
    goto L7C; // [2993] 2868
L80: 

    /** scanner.e:1905							elsif ch = '_' then*/
    if (_ch_26921 != 95)
    goto L7D; // [2998] 3015
    goto L7C; // [3002] 2868

    /** scanner.e:1908								exit*/
    goto L7D; // [3007] 3015

    /** scanner.e:1910						end while*/
    goto L7C; // [3012] 2868
L7D: 
L7B: 

    /** scanner.e:1913					ungetch()*/
    _63ungetch();

    /** scanner.e:1914					if is_int and is_integer(i) then*/
    if (_is_int_26932 == 0) {
        goto L81; // [3022] 3053
    }
    _15312 = _39is_integer(_i_26922);
    if (_15312 == 0) {
        DeRef(_15312);
        _15312 = NOVALUE;
        goto L81; // [3031] 3053
    }
    else {
        if (!IS_ATOM_INT(_15312) && DBL_PTR(_15312)->dbl == 0.0){
            DeRef(_15312);
            _15312 = NOVALUE;
            goto L81; // [3031] 3053
        }
        DeRef(_15312);
        _15312 = NOVALUE;
    }
    DeRef(_15312);
    _15312 = NOVALUE;

    /** scanner.e:1915						return {ATOM, NewIntSym(i)}*/
    _15313 = _56NewIntSym(_i_26922);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15313;
    _15314 = MAKE_SEQ(_1);
    _15313 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15314;
    goto L1; // [3050] 10
L81: 

    /** scanner.e:1917						if d <= MAXINT_DBL then            -- d is always >= 0*/
    if (binary_op_a(GREATER, _d_26929, 1073741823)){
        goto L82; // [3059] 3082
    }

    /** scanner.e:1918							return {ATOM, NewIntSym(d)}*/
    Ref(_d_26929);
    _15316 = _56NewIntSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15316;
    _15317 = MAKE_SEQ(_1);
    _15316 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15317;
    goto L1; // [3079] 10
L82: 

    /** scanner.e:1920							return {ATOM, NewDoubleSym(d)}*/
    Ref(_d_26929);
    _15318 = _56NewDoubleSym(_d_26929);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15318;
    _15319 = MAKE_SEQ(_1);
    _15318 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15319;
    goto L1; // [3101] 10
L72: 

    /** scanner.e:1925			elsif class = res:MULTIPLY then*/
    if (_class_26933 != 13)
    goto L83; // [3106] 3156

    /** scanner.e:1926				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1927				if ch = '=' then*/
    if (_ch_26921 != 61)
    goto L84; // [3119] 3138

    /** scanner.e:1928					return {MULTIPLY_EQUALS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 517;
    ((intptr_t *)_2)[2] = 0;
    _15323 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15323;
    goto L1; // [3135] 10
L84: 

    /** scanner.e:1930					ungetch()*/
    _63ungetch();

    /** scanner.e:1931					return {res:MULTIPLY, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 13;
    ((intptr_t *)_2)[2] = 0;
    _15324 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15324;
    goto L1; // [3153] 10
L83: 

    /** scanner.e:1934			elsif class = res:DIVIDE then*/
    if (_class_26933 != 14)
    goto L85; // [3158] 3360

    /** scanner.e:1935				ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1936				if ch = '=' then*/
    if (_ch_26921 != 61)
    goto L86; // [3171] 3190

    /** scanner.e:1937					return {DIVIDE_EQUALS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 518;
    ((intptr_t *)_2)[2] = 0;
    _15328 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15328;
    goto L1; // [3187] 10
L86: 

    /** scanner.e:1938				elsif ch = '*' then*/
    if (_ch_26921 != 42)
    goto L87; // [3192] 3342

    /** scanner.e:1940					cline = line_number*/
    _cline_26926 = _39line_number_16816;

    /** scanner.e:1941					integer cnest = 1*/
    _cnest_27582 = 1;

    /** scanner.e:1942					while cnest > 0 do*/
L88: 
    if (_cnest_27582 <= 0)
    goto L89; // [3215] 3323

    /** scanner.e:1943						ch = getch()*/
    _ch_26921 = _63getch();
    if (!IS_ATOM_INT(_ch_26921)) {
        _1 = (object)(DBL_PTR(_ch_26921)->dbl);
        DeRefDS(_ch_26921);
        _ch_26921 = _1;
    }

    /** scanner.e:1944						switch ch do*/
    _0 = _ch_26921;
    switch ( _0 ){ 

        /** scanner.e:1945							case  END_OF_FILE_CHAR then*/
        case 26:

        /** scanner.e:1946								exit*/
        goto L89; // [3239] 3323
        goto L88; // [3241] 3215

        /** scanner.e:1948							case '\n' then*/
        case 10:

        /** scanner.e:1949								read_line()*/
        _63read_line();
        goto L88; // [3251] 3215

        /** scanner.e:1951							case '*' then*/
        case 42:

        /** scanner.e:1952								ch = getch()*/
        _ch_26921 = _63getch();
        if (!IS_ATOM_INT(_ch_26921)) {
            _1 = (object)(DBL_PTR(_ch_26921)->dbl);
            DeRefDS(_ch_26921);
            _ch_26921 = _1;
        }

        /** scanner.e:1953								if ch = '/' then*/
        if (_ch_26921 != 47)
        goto L8A; // [3266] 3279

        /** scanner.e:1954									cnest -= 1*/
        _cnest_27582 = _cnest_27582 - 1;
        goto L88; // [3276] 3215
L8A: 

        /** scanner.e:1956									ungetch()*/
        _63ungetch();
        goto L88; // [3284] 3215

        /** scanner.e:1959							case '/' then*/
        case 47:

        /** scanner.e:1960								ch = getch()*/
        _ch_26921 = _63getch();
        if (!IS_ATOM_INT(_ch_26921)) {
            _1 = (object)(DBL_PTR(_ch_26921)->dbl);
            DeRefDS(_ch_26921);
            _ch_26921 = _1;
        }

        /** scanner.e:1961								if ch = '*' then*/
        if (_ch_26921 != 42)
        goto L8B; // [3299] 3312

        /** scanner.e:1962									cnest += 1*/
        _cnest_27582 = _cnest_27582 + 1;
        goto L8C; // [3309] 3317
L8B: 

        /** scanner.e:1964									ungetch()*/
        _63ungetch();
L8C: 
    ;}
    /** scanner.e:1968					end while*/
    goto L88; // [3320] 3215
L89: 

    /** scanner.e:1970					if cnest > 0 then*/
    if (_cnest_27582 <= 0)
    goto L8D; // [3325] 3337

    /** scanner.e:1971						CompileErr(42, cline)*/
    _52CompileErr(42, _cline_26926, 0);
L8D: 
    goto L1; // [3339] 10
L87: 

    /** scanner.e:1974					ungetch()*/
    _63ungetch();

    /** scanner.e:1975					return {res:DIVIDE, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 14;
    ((intptr_t *)_2)[2] = 0;
    _15341 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    _15081 = NOVALUE;
    return _15341;
    goto L1; // [3357] 10
L85: 

    /** scanner.e:1977			elsif class = SINGLE_QUOTE then*/
    if (_class_26933 != -5)
    goto L8E; // [3364] 3506

    /** scanner.e:1978				atom ach = getch()*/
    _0 = _ach_27611;
    _ach_27611 = _63getch();
    DeRef(_0);

    /** scanner.e:1979				if ach = '\\' then*/
    if (binary_op_a(NOTEQ, _ach_27611, 92)){
        goto L8F; // [3375] 3388
    }

    /** scanner.e:1980					ach = EscapeChar('\'')*/
    _0 = _ach_27611;
    _ach_27611 = _63EscapeChar(39);
    DeRef(_0);
    goto L90; // [3385] 3439
L8F: 

    /** scanner.e:1981				elsif ach = '\t' then*/
    if (binary_op_a(NOTEQ, _ach_27611, 9)){
        goto L91; // [3390] 3404
    }

    /** scanner.e:1982					CompileErr(145)*/
    RefDS(_21928);
    _52CompileErr(145, _21928, 0);
    goto L90; // [3401] 3439
L91: 

    /** scanner.e:1983				elsif ach = '\'' then*/
    if (binary_op_a(NOTEQ, _ach_27611, 39)){
        goto L92; // [3406] 3420
    }

    /** scanner.e:1984					CompileErr(137)*/
    RefDS(_21928);
    _52CompileErr(137, _21928, 0);
    goto L90; // [3417] 3439
L92: 

    /** scanner.e:1985				elsif ach = '\n' then*/
    if (binary_op_a(NOTEQ, _ach_27611, 10)){
        goto L93; // [3422] 3438
    }

    /** scanner.e:1986					CompileErr(68, {"character", "end of line"})*/
    RefDS(_15351);
    RefDS(_15350);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15350;
    ((intptr_t *)_2)[2] = _15351;
    _15352 = MAKE_SEQ(_1);
    _52CompileErr(68, _15352, 0);
    _15352 = NOVALUE;
L93: 
L90: 

    /** scanner.e:1988				if getch() != '\'' then*/
    _15353 = _63getch();
    if (binary_op_a(EQUALS, _15353, 39)){
        DeRef(_15353);
        _15353 = NOVALUE;
        goto L94; // [3444] 3456
    }
    DeRef(_15353);
    _15353 = NOVALUE;

    /** scanner.e:1989					CompileErr(56)*/
    RefDS(_21928);
    _52CompileErr(56, _21928, 0);
L94: 

    /** scanner.e:1991				if is_integer(ach) then*/
    Ref(_ach_27611);
    _15355 = _39is_integer(_ach_27611);
    if (_15355 == 0) {
        DeRef(_15355);
        _15355 = NOVALUE;
        goto L95; // [3462] 3484
    }
    else {
        if (!IS_ATOM_INT(_15355) && DBL_PTR(_15355)->dbl == 0.0){
            DeRef(_15355);
            _15355 = NOVALUE;
            goto L95; // [3462] 3484
        }
        DeRef(_15355);
        _15355 = NOVALUE;
    }
    DeRef(_15355);
    _15355 = NOVALUE;

    /** scanner.e:1992					return {ATOM, NewIntSym(ach)}*/
    Ref(_ach_27611);
    _15356 = _56NewIntSym(_ach_27611);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15356;
    _15357 = MAKE_SEQ(_1);
    _15356 = NOVALUE;
    DeRef(_ach_27611);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15357;
    goto L96; // [3481] 3501
L95: 

    /** scanner.e:1994					return {ATOM, NewDoubleSym(ach)}*/
    Ref(_ach_27611);
    _15358 = _56NewDoubleSym(_ach_27611);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 502;
    ((intptr_t *)_2)[2] = _15358;
    _15359 = MAKE_SEQ(_1);
    _15358 = NOVALUE;
    DeRef(_ach_27611);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15359;
L96: 
    DeRef(_ach_27611);
    _ach_27611 = NOVALUE;
    goto L1; // [3503] 10
L8E: 

    /** scanner.e:1997			elsif class = LESS then*/
    if (_class_26933 != 1)
    goto L97; // [3510] 3558

    /** scanner.e:1998				if getch() = '=' then*/
    _15361 = _63getch();
    if (binary_op_a(NOTEQ, _15361, 61)){
        DeRef(_15361);
        _15361 = NOVALUE;
        goto L98; // [3519] 3538
    }
    DeRef(_15361);
    _15361 = NOVALUE;

    /** scanner.e:1999					return {LESSEQ, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 5;
    ((intptr_t *)_2)[2] = 0;
    _15363 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15363;
    goto L1; // [3535] 10
L98: 

    /** scanner.e:2001					ungetch()*/
    _63ungetch();

    /** scanner.e:2002					return {LESS, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 1;
    ((intptr_t *)_2)[2] = 0;
    _15364 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15364;
    goto L1; // [3555] 10
L97: 

    /** scanner.e:2005			elsif class = GREATER then*/
    if (_class_26933 != 6)
    goto L99; // [3562] 3610

    /** scanner.e:2006				if getch() = '=' then*/
    _15366 = _63getch();
    if (binary_op_a(NOTEQ, _15366, 61)){
        DeRef(_15366);
        _15366 = NOVALUE;
        goto L9A; // [3571] 3590
    }
    DeRef(_15366);
    _15366 = NOVALUE;

    /** scanner.e:2007					return {GREATEREQ, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 2;
    ((intptr_t *)_2)[2] = 0;
    _15368 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15368;
    goto L1; // [3587] 10
L9A: 

    /** scanner.e:2009					ungetch()*/
    _63ungetch();

    /** scanner.e:2010					return {GREATER, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 6;
    ((intptr_t *)_2)[2] = 0;
    _15369 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15369;
    goto L1; // [3607] 10
L99: 

    /** scanner.e:2013			elsif class = BANG then*/
    if (_class_26933 != -1)
    goto L9B; // [3614] 3662

    /** scanner.e:2014				if getch() = '=' then*/
    _15371 = _63getch();
    if (binary_op_a(NOTEQ, _15371, 61)){
        DeRef(_15371);
        _15371 = NOVALUE;
        goto L9C; // [3623] 3642
    }
    DeRef(_15371);
    _15371 = NOVALUE;

    /** scanner.e:2015					return {NOTEQ, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 4;
    ((intptr_t *)_2)[2] = 0;
    _15373 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15373;
    goto L1; // [3639] 10
L9C: 

    /** scanner.e:2017					ungetch()*/
    _63ungetch();

    /** scanner.e:2018					return {BANG, 0}*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -1;
    ((intptr_t *)_2)[2] = 0;
    _15374 = MAKE_SEQ(_1);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15374;
    goto L1; // [3659] 10
L9B: 

    /** scanner.e:2021			elsif class = KEYWORD then*/
    if (_class_26933 != -10)
    goto L9D; // [3666] 3699

    /** scanner.e:2022				return {keylist[ch - KEYWORD_BASE][K_TOKEN], 0}*/
    _15376 = _ch_26921 - 128;
    _2 = (object)SEQ_PTR(_64keylist_22750);
    _15377 = (object)*(((s1_ptr)_2)->base + _15376);
    _2 = (object)SEQ_PTR(_15377);
    _15378 = (object)*(((s1_ptr)_2)->base + 3);
    _15377 = NOVALUE;
    Ref(_15378);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _15378;
    ((intptr_t *)_2)[2] = 0;
    _15379 = MAKE_SEQ(_1);
    _15378 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    _15376 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15379;
    goto L1; // [3696] 10
L9D: 

    /** scanner.e:2024			elsif class = BUILTIN then*/
    if (_class_26933 != -9)
    goto L9E; // [3703] 3756

    /** scanner.e:2025				name = keylist[ch - BUILTIN_BASE + NUM_KEYWORDS][K_NAME]*/
    _15381 = _ch_26921 - 170;
    if ((object)((uintptr_t)_15381 +(uintptr_t) HIGH_BITS) >= 0){
        _15381 = NewDouble((eudouble)_15381);
    }
    if (IS_ATOM_INT(_15381)) {
        _15382 = _15381 + 24;
    }
    else {
        _15382 = NewDouble(DBL_PTR(_15381)->dbl + (eudouble)24);
    }
    DeRef(_15381);
    _15381 = NOVALUE;
    _2 = (object)SEQ_PTR(_64keylist_22750);
    if (!IS_ATOM_INT(_15382)){
        _15383 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_15382)->dbl));
    }
    else{
        _15383 = (object)*(((s1_ptr)_2)->base + _15382);
    }
    DeRef(_name_26934);
    _2 = (object)SEQ_PTR(_15383);
    _name_26934 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_name_26934);
    _15383 = NOVALUE;

    /** scanner.e:2026				return keyfind(name, -1)*/
    RefDS(_name_26934);
    _31702 = _56hashfn(_name_26934);
    RefDS(_name_26934);
    _15385 = _56keyfind(_name_26934, -1, _39current_file_no_16815, 0, _31702);
    _31702 = NOVALUE;
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRefDS(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15382);
    _15382 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15379);
    _15379 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15385;
    goto L1; // [3753] 10
L9E: 

    /** scanner.e:2028			elsif class = BACK_QUOTE then*/
    if (_class_26933 != -12)
    goto L9F; // [3760] 3777

    /** scanner.e:2029				return ExtendedString( '`' )*/
    _15387 = _63ExtendedString(96);
    DeRef(_yytext_26927);
    DeRef(_namespaces_26928);
    DeRef(_d_26929);
    DeRef(_tok_26931);
    DeRef(_name_26934);
    DeRef(_15026);
    _15026 = NOVALUE;
    DeRef(_15187);
    _15187 = NOVALUE;
    _15070 = NOVALUE;
    DeRef(_15020);
    _15020 = NOVALUE;
    DeRef(_15270);
    _15270 = NOVALUE;
    _15149 = NOVALUE;
    DeRef(_15363);
    _15363 = NOVALUE;
    DeRef(_15209);
    _15209 = NOVALUE;
    DeRef(_15029);
    _15029 = NOVALUE;
    DeRef(_15221);
    _15221 = NOVALUE;
    DeRef(_15136);
    _15136 = NOVALUE;
    DeRef(_15385);
    _15385 = NOVALUE;
    DeRef(_15382);
    _15382 = NOVALUE;
    DeRef(_15277);
    _15277 = NOVALUE;
    DeRef(_15254);
    _15254 = NOVALUE;
    DeRef(_15129);
    _15129 = NOVALUE;
    _15045 = NOVALUE;
    DeRef(_15033);
    _15033 = NOVALUE;
    _15197 = NOVALUE;
    DeRef(_15049);
    _15049 = NOVALUE;
    DeRef(_15314);
    _15314 = NOVALUE;
    _15139 = NOVALUE;
    _15290 = NOVALUE;
    DeRef(_15219);
    _15219 = NOVALUE;
    _15174 = NOVALUE;
    DeRef(_15369);
    _15369 = NOVALUE;
    DeRef(_15373);
    _15373 = NOVALUE;
    DeRef(_15253);
    _15253 = NOVALUE;
    DeRef(_15023);
    _15023 = NOVALUE;
    DeRef(_15125);
    _15125 = NOVALUE;
    DeRef(_15030);
    _15030 = NOVALUE;
    DeRef(_15234);
    _15234 = NOVALUE;
    DeRef(_15258);
    _15258 = NOVALUE;
    DeRef(_15296);
    _15296 = NOVALUE;
    DeRef(_15017);
    _15017 = NOVALUE;
    _15264 = NOVALUE;
    DeRef(_15328);
    _15328 = NOVALUE;
    DeRef(_15359);
    _15359 = NOVALUE;
    DeRef(_15303);
    _15303 = NOVALUE;
    DeRef(_15324);
    _15324 = NOVALUE;
    DeRef(_15226);
    _15226 = NOVALUE;
    DeRef(_15151);
    _15151 = NOVALUE;
    DeRef(_15235);
    _15235 = NOVALUE;
    DeRef(_15008);
    _15008 = NOVALUE;
    DeRef(_15003);
    _15003 = NOVALUE;
    DeRef(_15323);
    _15323 = NOVALUE;
    DeRef(_15211);
    _15211 = NOVALUE;
    DeRef(_15245);
    _15245 = NOVALUE;
    DeRef(_15368);
    _15368 = NOVALUE;
    _15096 = NOVALUE;
    DeRef(_15228);
    _15228 = NOVALUE;
    _15170 = NOVALUE;
    DeRef(_15364);
    _15364 = NOVALUE;
    DeRef(_15379);
    _15379 = NOVALUE;
    DeRef(_15374);
    _15374 = NOVALUE;
    DeRef(_15080);
    _15080 = NOVALUE;
    DeRef(_15259);
    _15259 = NOVALUE;
    _15059 = NOVALUE;
    DeRef(_15376);
    _15376 = NOVALUE;
    DeRef(_15130);
    _15130 = NOVALUE;
    DeRef(_15319);
    _15319 = NOVALUE;
    _15193 = NOVALUE;
    DeRef(_15185);
    _15185 = NOVALUE;
    DeRef(_15054);
    _15054 = NOVALUE;
    DeRef(_15317);
    _15317 = NOVALUE;
    DeRef(_15357);
    _15357 = NOVALUE;
    DeRef(_15249);
    _15249 = NOVALUE;
    DeRef(_15179);
    _15179 = NOVALUE;
    DeRef(_15341);
    _15341 = NOVALUE;
    _15081 = NOVALUE;
    return _15387;
    goto L1; // [3774] 10
L9F: 

    /** scanner.e:2032				InternalErr(268, {class})*/
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _class_26933;
    _15388 = MAKE_SEQ(_1);
    _52InternalErr(268, _15388);
    _15388 = NOVALUE;

    /** scanner.e:2035	   end while*/
    goto L1; // [3790] 10
L2: 
    ;
}


void _63eu_namespace()
{
    object _eu_tok_27710 = NOVALUE;
    object _eu_ns_27712 = NOVALUE;
    object _31701 = NOVALUE;
    object _31700 = NOVALUE;
    object _15397 = NOVALUE;
    object _15395 = NOVALUE;
    object _15393 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** scanner.e:2043		eu_tok = keyfind("eu", -1, , 1)*/
    RefDS(_15391);
    _31700 = _15391;
    _31701 = _56hashfn(_31700);
    _31700 = NOVALUE;
    RefDS(_15391);
    _0 = _eu_tok_27710;
    _eu_tok_27710 = _56keyfind(_15391, -1, _39current_file_no_16815, 1, _31701);
    DeRef(_0);
    _31701 = NOVALUE;

    /** scanner.e:2046		eu_ns  = NameSpace_declaration(eu_tok[T_SYM])*/
    _2 = (object)SEQ_PTR(_eu_tok_27710);
    _15393 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_15393);
    _eu_ns_27712 = _63NameSpace_declaration(_15393);
    _15393 = NOVALUE;
    if (!IS_ATOM_INT(_eu_ns_27712)) {
        _1 = (object)(DBL_PTR(_eu_ns_27712)->dbl);
        DeRefDS(_eu_ns_27712);
        _eu_ns_27712 = _1;
    }

    /** scanner.e:2047		SymTab[eu_ns][S_OBJ] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27712 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _15395 = NOVALUE;

    /** scanner.e:2048		SymTab[eu_ns][S_SCOPE] = SC_GLOBAL*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_eu_ns_27712 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 6;
    DeRef(_1);
    _15397 = NOVALUE;

    /** scanner.e:2049	end procedure*/
    DeRef(_eu_tok_27710);
    return;
    ;
}


object _63StringToken(object _pDelims_27730)
{
    object _ch_27731 = NOVALUE;
    object _m_27732 = NOVALUE;
    object _gtext_27733 = NOVALUE;
    object _level_27764 = NOVALUE;
    object _15436 = NOVALUE;
    object _15434 = NOVALUE;
    object _15432 = NOVALUE;
    object _15413 = NOVALUE;
    object _15412 = NOVALUE;
    object _15406 = NOVALUE;
    object _15404 = NOVALUE;
    object _15402 = NOVALUE;
    object _15400 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:2060		ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2061		while ch = ' ' or ch = '\t' do*/
L1: 
    _15400 = (_ch_27731 == 32);
    if (_15400 != 0) {
        goto L2; // [19] 32
    }
    _15402 = (_ch_27731 == 9);
    if (_15402 == 0)
    {
        DeRef(_15402);
        _15402 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15402);
        _15402 = NOVALUE;
    }
L2: 

    /** scanner.e:2062			ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2063		end while*/
    goto L1; // [41] 15
L3: 

    /** scanner.e:2065		pDelims &= {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}*/
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15404 = MAKE_SEQ(_1);
    Concat((object_ptr)&_pDelims_27730, _pDelims_27730, _15404);
    DeRefDS(_15404);
    _15404 = NOVALUE;

    /** scanner.e:2066		gtext = ""*/
    RefDS(_5);
    DeRefi(_gtext_27733);
    _gtext_27733 = _5;

    /** scanner.e:2067		while not find(ch,  pDelims) label "top" do*/
L4: 
    _15406 = find_from(_ch_27731, _pDelims_27730, 1);
    if (_15406 != 0)
    goto L5; // [77] 391
    _15406 = NOVALUE;

    /** scanner.e:2068			if ch = '-' then*/
    if (_ch_27731 != 45)
    goto L6; // [82] 145

    /** scanner.e:2069				ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2070				if ch = '-' then*/
    if (_ch_27731 != 45)
    goto L7; // [95] 137

    /** scanner.e:2071					while not find(ch, {'\n', END_OF_FILE_CHAR}) do*/
L8: 
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 10;
    ((intptr_t *)_2)[2] = 26;
    _15412 = MAKE_SEQ(_1);
    _15413 = find_from(_ch_27731, _15412, 1);
    DeRefDS(_15412);
    _15412 = NOVALUE;
    if (_15413 != 0)
    goto L5; // [115] 391
    _15413 = NOVALUE;

    /** scanner.e:2072						ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2073					end while*/
    goto L8; // [127] 104

    /** scanner.e:2074					exit*/
    goto L5; // [132] 391
    goto L9; // [134] 373
L7: 

    /** scanner.e:2076					ungetch()*/
    _63ungetch();
    goto L9; // [142] 373
L6: 

    /** scanner.e:2078			elsif ch = '/' then*/
    if (_ch_27731 != 47)
    goto LA; // [147] 372

    /** scanner.e:2079				ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2080				if ch = '*' then*/
    if (_ch_27731 != 42)
    goto LB; // [160] 361

    /** scanner.e:2081					integer level = 1*/
    _level_27764 = 1;

    /** scanner.e:2082					while level > 0 do*/
LC: 
    if (_level_27764 <= 0)
    goto LD; // [174] 293

    /** scanner.e:2083						ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2084						if ch = '/' then*/
    if (_ch_27731 != 47)
    goto LE; // [187] 221

    /** scanner.e:2085							ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2086							if ch = '*' then*/
    if (_ch_27731 != 42)
    goto LF; // [200] 213

    /** scanner.e:2087								level += 1*/
    _level_27764 = _level_27764 + 1;
    goto LC; // [210] 174
LF: 

    /** scanner.e:2089								ungetch()*/
    _63ungetch();
    goto LC; // [218] 174
LE: 

    /** scanner.e:2091						elsif ch = '*' then*/
    if (_ch_27731 != 42)
    goto L10; // [223] 257

    /** scanner.e:2092							ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2093							if ch = '/' then*/
    if (_ch_27731 != 47)
    goto L11; // [236] 249

    /** scanner.e:2094								level -= 1*/
    _level_27764 = _level_27764 - 1;
    goto LC; // [246] 174
L11: 

    /** scanner.e:2096								ungetch()*/
    _63ungetch();
    goto LC; // [254] 174
L10: 

    /** scanner.e:2098						elsif ch = '\n' then*/
    if (_ch_27731 != 10)
    goto L12; // [259] 270

    /** scanner.e:2099							read_line()*/
    _63read_line();
    goto LC; // [267] 174
L12: 

    /** scanner.e:2100						elsif ch = END_OF_FILE_CHAR then*/
    if (_ch_27731 != 26)
    goto LC; // [274] 174

    /** scanner.e:2101							ungetch()*/
    _63ungetch();

    /** scanner.e:2102							exit*/
    goto LD; // [284] 293

    /** scanner.e:2104					end while*/
    goto LC; // [290] 174
LD: 

    /** scanner.e:2105					ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2106					if length(gtext) = 0 then*/
    if (IS_SEQUENCE(_gtext_27733)){
            _15432 = SEQ_PTR(_gtext_27733)->length;
    }
    else {
        _15432 = 1;
    }
    if (_15432 != 0)
    goto L13; // [305] 350

    /** scanner.e:2107						while ch = ' ' or ch = '\t' do*/
L14: 
    _15434 = (_ch_27731 == 32);
    if (_15434 != 0) {
        goto L15; // [318] 331
    }
    _15436 = (_ch_27731 == 9);
    if (_15436 == 0)
    {
        DeRef(_15436);
        _15436 = NOVALUE;
        goto L16; // [327] 343
    }
    else{
        DeRef(_15436);
        _15436 = NOVALUE;
    }
L15: 

    /** scanner.e:2108							ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2109						end while*/
    goto L14; // [340] 314
L16: 

    /** scanner.e:2110						continue "top"*/
    goto L4; // [347] 72
L13: 

    /** scanner.e:2112					exit*/
    goto L5; // [354] 391
    goto L17; // [358] 371
LB: 

    /** scanner.e:2115					ungetch()*/
    _63ungetch();

    /** scanner.e:2116					ch = '/'*/
    _ch_27731 = 47;
L17: 
LA: 
L9: 

    /** scanner.e:2119			gtext &= ch*/
    Append(&_gtext_27733, _gtext_27733, _ch_27731);

    /** scanner.e:2120			ch = getch()*/
    _ch_27731 = _63getch();
    if (!IS_ATOM_INT(_ch_27731)) {
        _1 = (object)(DBL_PTR(_ch_27731)->dbl);
        DeRefDS(_ch_27731);
        _ch_27731 = _1;
    }

    /** scanner.e:2121		end while*/
    goto L4; // [388] 72
L5: 

    /** scanner.e:2123		ungetch() -- put back end-word token.*/
    _63ungetch();

    /** scanner.e:2125		return gtext*/
    DeRefDSi(_pDelims_27730);
    DeRef(_15400);
    _15400 = NOVALUE;
    DeRef(_15434);
    _15434 = NOVALUE;
    return _gtext_27733;
    ;
}


void _63IncludeScan(object _is_public_27801)
{
    object _ch_27802 = NOVALUE;
    object _gtext_27803 = NOVALUE;
    object _s_27805 = NOVALUE;
    object _31699 = NOVALUE;
    object _15499 = NOVALUE;
    object _15498 = NOVALUE;
    object _15496 = NOVALUE;
    object _15494 = NOVALUE;
    object _15493 = NOVALUE;
    object _15488 = NOVALUE;
    object _15485 = NOVALUE;
    object _15483 = NOVALUE;
    object _15482 = NOVALUE;
    object _15480 = NOVALUE;
    object _15478 = NOVALUE;
    object _15476 = NOVALUE;
    object _15474 = NOVALUE;
    object _15468 = NOVALUE;
    object _15466 = NOVALUE;
    object _15461 = NOVALUE;
    object _15457 = NOVALUE;
    object _15456 = NOVALUE;
    object _15451 = NOVALUE;
    object _15448 = NOVALUE;
    object _15447 = NOVALUE;
    object _15443 = NOVALUE;
    object _15441 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:2145		ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2146		while ch = ' ' or ch = '\t' do*/
L1: 
    _15441 = (_ch_27802 == 32);
    if (_15441 != 0) {
        goto L2; // [19] 32
    }
    _15443 = (_ch_27802 == 9);
    if (_15443 == 0)
    {
        DeRef(_15443);
        _15443 = NOVALUE;
        goto L3; // [28] 44
    }
    else{
        DeRef(_15443);
        _15443 = NOVALUE;
    }
L2: 

    /** scanner.e:2147			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2148		end while*/
    goto L1; // [41] 15
L3: 

    /** scanner.e:2151		gtext = ""*/
    RefDS(_5);
    DeRef(_gtext_27803);
    _gtext_27803 = _5;

    /** scanner.e:2153		if ch = '"' then*/
    if (_ch_27802 != 34)
    goto L4; // [53] 141

    /** scanner.e:2155			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2156			while not find(ch, {'\n', '\r', '"', END_OF_FILE_CHAR}) do*/
L5: 
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 34;
    ((intptr_t*)_2)[4] = 26;
    _15447 = MAKE_SEQ(_1);
    _15448 = find_from(_ch_27802, _15447, 1);
    DeRefDS(_15447);
    _15447 = NOVALUE;
    if (_15448 != 0)
    goto L6; // [83] 124
    _15448 = NOVALUE;

    /** scanner.e:2157				if ch = '\\' then*/
    if (_ch_27802 != 92)
    goto L7; // [88] 105

    /** scanner.e:2158					gtext &= EscapeChar('"')*/
    _15451 = _63EscapeChar(34);
    if (IS_SEQUENCE(_gtext_27803) && IS_ATOM(_15451)) {
        Ref(_15451);
        Append(&_gtext_27803, _gtext_27803, _15451);
    }
    else if (IS_ATOM(_gtext_27803) && IS_SEQUENCE(_15451)) {
    }
    else {
        Concat((object_ptr)&_gtext_27803, _gtext_27803, _15451);
    }
    DeRef(_15451);
    _15451 = NOVALUE;
    goto L8; // [102] 112
L7: 

    /** scanner.e:2160					gtext &= ch*/
    Append(&_gtext_27803, _gtext_27803, _ch_27802);
L8: 

    /** scanner.e:2162				ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2163			end while*/
    goto L5; // [121] 69
L6: 

    /** scanner.e:2164			if ch != '"' then*/
    if (_ch_27802 == 34)
    goto L9; // [126] 187

    /** scanner.e:2165				CompileErr(115)*/
    RefDS(_21928);
    _52CompileErr(115, _21928, 0);
    goto L9; // [138] 187
L4: 

    /** scanner.e:2169			while not find(ch, {' ', '\t', '\n', '\r', END_OF_FILE_CHAR}) do*/
LA: 
    _1 = NewS1(5);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 32;
    ((intptr_t*)_2)[2] = 9;
    ((intptr_t*)_2)[3] = 10;
    ((intptr_t*)_2)[4] = 13;
    ((intptr_t*)_2)[5] = 26;
    _15456 = MAKE_SEQ(_1);
    _15457 = find_from(_ch_27802, _15456, 1);
    DeRefDS(_15456);
    _15456 = NOVALUE;
    if (_15457 != 0)
    goto LB; // [161] 182
    _15457 = NOVALUE;

    /** scanner.e:2170				gtext &= ch*/
    Append(&_gtext_27803, _gtext_27803, _ch_27802);

    /** scanner.e:2171				ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2172			end while*/
    goto LA; // [179] 146
LB: 

    /** scanner.e:2173			ungetch()*/
    _63ungetch();
L9: 

    /** scanner.e:2176		if length(gtext) = 0 then*/
    if (IS_SEQUENCE(_gtext_27803)){
            _15461 = SEQ_PTR(_gtext_27803)->length;
    }
    else {
        _15461 = 1;
    }
    if (_15461 != 0)
    goto LC; // [192] 204

    /** scanner.e:2177			CompileErr(95)*/
    RefDS(_21928);
    _52CompileErr(95, _21928, 0);
LC: 

    /** scanner.e:2181		ifdef WINDOWS then*/

    /** scanner.e:2184			new_include_name = gtext*/
    RefDS(_gtext_27803);
    DeRef(_39new_include_name_16937);
    _39new_include_name_16937 = _gtext_27803;

    /** scanner.e:2188		ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2189		while ch = ' ' or ch = '\t' do*/
LD: 
    _15466 = (_ch_27802 == 32);
    if (_15466 != 0) {
        goto LE; // [229] 242
    }
    _15468 = (_ch_27802 == 9);
    if (_15468 == 0)
    {
        DeRef(_15468);
        _15468 = NOVALUE;
        goto LF; // [238] 254
    }
    else{
        DeRef(_15468);
        _15468 = NOVALUE;
    }
LE: 

    /** scanner.e:2190			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2191		end while*/
    goto LD; // [251] 225
LF: 

    /** scanner.e:2193		new_include_space = 0*/
    _63new_include_space_25179 = 0;

    /** scanner.e:2195		if ch = 'a' then*/
    if (_ch_27802 != 97)
    goto L10; // [263] 520

    /** scanner.e:2197			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2198			if ch = 's' then*/
    if (_ch_27802 != 115)
    goto L11; // [276] 509

    /** scanner.e:2199				ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2200				if ch = ' ' or ch = '\t' then*/
    _15474 = (_ch_27802 == 32);
    if (_15474 != 0) {
        goto L12; // [293] 306
    }
    _15476 = (_ch_27802 == 9);
    if (_15476 == 0)
    {
        DeRef(_15476);
        _15476 = NOVALUE;
        goto L13; // [302] 498
    }
    else{
        DeRef(_15476);
        _15476 = NOVALUE;
    }
L12: 

    /** scanner.e:2203					ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2204					while ch = ' ' or ch = '\t' do*/
L14: 
    _15478 = (_ch_27802 == 32);
    if (_15478 != 0) {
        goto L15; // [322] 335
    }
    _15480 = (_ch_27802 == 9);
    if (_15480 == 0)
    {
        DeRef(_15480);
        _15480 = NOVALUE;
        goto L16; // [331] 347
    }
    else{
        DeRef(_15480);
        _15480 = NOVALUE;
    }
L15: 

    /** scanner.e:2205						ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2206					end while*/
    goto L14; // [344] 318
L16: 

    /** scanner.e:2209					if char_class[ch] = LETTER or ch = '_' then*/
    _2 = (object)SEQ_PTR(_63char_class_25188);
    _15482 = (object)*(((s1_ptr)_2)->base + _ch_27802);
    _15483 = (_15482 == -2);
    _15482 = NOVALUE;
    if (_15483 != 0) {
        goto L17; // [361] 374
    }
    _15485 = (_ch_27802 == 95);
    if (_15485 == 0)
    {
        DeRef(_15485);
        _15485 = NOVALUE;
        goto L18; // [370] 487
    }
    else{
        DeRef(_15485);
        _15485 = NOVALUE;
    }
L17: 

    /** scanner.e:2210						gtext = {ch}*/
    _0 = _gtext_27803;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _ch_27802;
    _gtext_27803 = MAKE_SEQ(_1);
    DeRef(_0);

    /** scanner.e:2211						ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2212						while id_char[ch] = TRUE do*/
L19: 
    _2 = (object)SEQ_PTR(_63id_char_25189);
    _15488 = (object)*(((s1_ptr)_2)->base + _ch_27802);
    if (_15488 != _9TRUE_444)
    goto L1A; // [400] 422

    /** scanner.e:2213							gtext &= ch*/
    Append(&_gtext_27803, _gtext_27803, _ch_27802);

    /** scanner.e:2214							ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2215						end while*/
    goto L19; // [419] 392
L1A: 

    /** scanner.e:2217						ungetch()*/
    _63ungetch();

    /** scanner.e:2218						s = keyfind(gtext, -1, , 1)*/
    RefDS(_gtext_27803);
    _31699 = _56hashfn(_gtext_27803);
    RefDS(_gtext_27803);
    _0 = _s_27805;
    _s_27805 = _56keyfind(_gtext_27803, -1, _39current_file_no_16815, 1, _31699);
    DeRef(_0);
    _31699 = NOVALUE;

    /** scanner.e:2219						if not find(s[T_ID], ID_TOKS) then*/
    _2 = (object)SEQ_PTR(_s_27805);
    _15493 = (object)*(((s1_ptr)_2)->base + 1);
    _15494 = find_from(_15493, _40ID_TOKS_16429, 1);
    _15493 = NOVALUE;
    if (_15494 != 0)
    goto L1B; // [459] 470
    _15494 = NOVALUE;

    /** scanner.e:2220							CompileErr(36)*/
    RefDS(_21928);
    _52CompileErr(36, _21928, 0);
L1B: 

    /** scanner.e:2222						new_include_space = NameSpace_declaration(s[T_SYM])*/
    _2 = (object)SEQ_PTR(_s_27805);
    _15496 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_15496);
    _0 = _63NameSpace_declaration(_15496);
    _63new_include_space_25179 = _0;
    _15496 = NOVALUE;
    if (!IS_ATOM_INT(_63new_include_space_25179)) {
        _1 = (object)(DBL_PTR(_63new_include_space_25179)->dbl);
        DeRefDS(_63new_include_space_25179);
        _63new_include_space_25179 = _1;
    }
    goto L1C; // [484] 629
L18: 

    /** scanner.e:2224						CompileErr(113)*/
    RefDS(_21928);
    _52CompileErr(113, _21928, 0);
    goto L1C; // [495] 629
L13: 

    /** scanner.e:2227					CompileErr(100)*/
    RefDS(_21928);
    _52CompileErr(100, _21928, 0);
    goto L1C; // [506] 629
L11: 

    /** scanner.e:2230				CompileErr(100)*/
    RefDS(_21928);
    _52CompileErr(100, _21928, 0);
    goto L1C; // [517] 629
L10: 

    /** scanner.e:2233		elsif find(ch, {'\n', '\r', END_OF_FILE_CHAR}) then*/
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 10;
    ((intptr_t*)_2)[2] = 13;
    ((intptr_t*)_2)[3] = 26;
    _15498 = MAKE_SEQ(_1);
    _15499 = find_from(_ch_27802, _15498, 1);
    DeRefDS(_15498);
    _15498 = NOVALUE;
    if (_15499 == 0)
    {
        _15499 = NOVALUE;
        goto L1D; // [535] 545
    }
    else{
        _15499 = NOVALUE;
    }

    /** scanner.e:2234			ungetch()*/
    _63ungetch();
    goto L1C; // [542] 629
L1D: 

    /** scanner.e:2236		elsif ch = '-' then*/
    if (_ch_27802 != 45)
    goto L1E; // [547] 583

    /** scanner.e:2237			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2238			if ch != '-' then*/
    if (_ch_27802 == 45)
    goto L1F; // [560] 572

    /** scanner.e:2239				CompileErr(100)*/
    RefDS(_21928);
    _52CompileErr(100, _21928, 0);
L1F: 

    /** scanner.e:2241			ungetch()*/
    _63ungetch();

    /** scanner.e:2242			ungetch()*/
    _63ungetch();
    goto L1C; // [580] 629
L1E: 

    /** scanner.e:2244		elsif ch = '/' then*/
    if (_ch_27802 != 47)
    goto L20; // [585] 621

    /** scanner.e:2245			ch = getch()*/
    _ch_27802 = _63getch();
    if (!IS_ATOM_INT(_ch_27802)) {
        _1 = (object)(DBL_PTR(_ch_27802)->dbl);
        DeRefDS(_ch_27802);
        _ch_27802 = _1;
    }

    /** scanner.e:2246			if ch != '*' then*/
    if (_ch_27802 == 42)
    goto L21; // [598] 610

    /** scanner.e:2247				CompileErr(100)*/
    RefDS(_21928);
    _52CompileErr(100, _21928, 0);
L21: 

    /** scanner.e:2249			ungetch()*/
    _63ungetch();

    /** scanner.e:2250			ungetch()*/
    _63ungetch();
    goto L1C; // [618] 629
L20: 

    /** scanner.e:2253			CompileErr(100)*/
    RefDS(_21928);
    _52CompileErr(100, _21928, 0);
L1C: 

    /** scanner.e:2256		start_include = TRUE -- let scanner know*/
    _63start_include_25181 = _9TRUE_444;

    /** scanner.e:2257		public_include = is_public*/
    _63public_include_25184 = _is_public_27801;

    /** scanner.e:2258	end procedure*/
    DeRef(_gtext_27803);
    DeRef(_s_27805);
    _15488 = NOVALUE;
    DeRef(_15474);
    _15474 = NOVALUE;
    DeRef(_15483);
    _15483 = NOVALUE;
    DeRef(_15466);
    _15466 = NOVALUE;
    DeRef(_15441);
    _15441 = NOVALUE;
    DeRef(_15478);
    _15478 = NOVALUE;
    return;
    ;
}


void _63main_file()
{
    object _15508 = NOVALUE;
    object _15507 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:2271		if repl and top_level_block = -1 then*/
    if (0 == 0) {
        goto L1; // [5] 29
    }
    _15508 = (_66top_level_block_24751 == -1);
    if (_15508 == 0)
    {
        DeRef(_15508);
        _15508 = NOVALUE;
        goto L1; // [16] 29
    }
    else{
        DeRef(_15508);
        _15508 = NOVALUE;
    }

    /** scanner.e:2272			top_level_block = current_block*/
    _66top_level_block_24751 = _66current_block_24750;
L1: 

    /** scanner.e:2274		ifdef STDDEBUG then*/

    /** scanner.e:2279			read_line()*/
    _63read_line();

    /** scanner.e:2280			default_namespace( )*/
    _63default_namespace();

    /** scanner.e:2282	end procedure*/
    return;
    ;
}


void _63cleanup_open_includes()
{
    object _15511 = NOVALUE;
    object _15510 = NOVALUE;
    object _15509 = NOVALUE;
    object _0, _1, _2;
    

    /** scanner.e:2285		for i = 1 to length( IncludeStk ) do*/
    if (IS_SEQUENCE(_63IncludeStk_25190)){
            _15509 = SEQ_PTR(_63IncludeStk_25190)->length;
    }
    else {
        _15509 = 1;
    }
    {
        object _i_27931;
        _i_27931 = 1;
L1: 
        if (_i_27931 > _15509){
            goto L2; // [8] 36
        }

        /** scanner.e:2286			close( IncludeStk[i][FILE_PTR] )*/
        _2 = (object)SEQ_PTR(_63IncludeStk_25190);
        _15510 = (object)*(((s1_ptr)_2)->base + _i_27931);
        _2 = (object)SEQ_PTR(_15510);
        _15511 = (object)*(((s1_ptr)_2)->base + 3);
        _15510 = NOVALUE;
        if (IS_ATOM_INT(_15511))
        EClose(_15511);
        else
        EClose((object)DBL_PTR(_15511)->dbl);
        _15511 = NOVALUE;

        /** scanner.e:2287		end for*/
        _i_27931 = _i_27931 + 1;
        goto L1; // [31] 15
L2: 
        ;
    }

    /** scanner.e:2288	end procedure*/
    return;
    ;
}



// 0xC63EDC6E
