// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _53hashfn(object _name_46339)
{
    object _len_46340 = NOVALUE;
    object _val_46341 = NOVALUE;
    object _int_46342 = NOVALUE;
    object _24297 = NOVALUE; // 46367 24297
    object _24296 = NOVALUE; // 46366 24296
// skipping _24295  name type: 0
// skipping _24294  name type: 0
    object _24293 = NOVALUE; // 46363 24293
    object _24292 = NOVALUE; // 46362 24292
// skipping _24291  name type: 0
// skipping _24290  name type: 0
// skipping _24289  name type: 0
// skipping _24288  name type: 0
// skipping _24287  name type: 0
// skipping _24286  name type: 0
// skipping _24285  name type: 0
// skipping _24284  name type: 0
// skipping _24283  name type: 0
// skipping _24282  name type: 0
    object _24281 = NOVALUE; // 46349 24281
// skipping _24280  name type: 0
// skipping _24279  name type: 0
// skipping _24278  name type: 0
    object _24277 = NOVALUE; // 46345 24277
// skipping _24276  name type: 0
// skipping _24275  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hashfn pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg hashfn pc: 3 op: STARTLINE (58)

    /** symtab.e:49		len = length(name)*/
    // SubProg hashfn pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46339)){
            _len_46340 = SEQ_PTR(_name_46339)->length;
    }
    else {
        _len_46340 = 1;
    }
    // SubProg hashfn pc: 8 op: STARTLINE (58)

    /** symtab.e:51		val = name[1]*/
    // SubProg hashfn pc: 10 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46339);
    _val_46341 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_val_46341))
    _val_46341 = (object)DBL_PTR(_val_46341)->dbl;
    // SubProg hashfn pc: 14 op: STARTLINE (58)

    /** symtab.e:52		int = name[$]*/
    // SubProg hashfn pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46339)){
            _24277 = SEQ_PTR(_name_46339)->length;
    }
    else {
        _24277 = 1;
    }
    // SubProg hashfn pc: 19 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46339);
    _int_46342 = (object)*(((s1_ptr)_2)->base + _24277);
    if (!IS_ATOM_INT(_int_46342))
    _int_46342 = (object)DBL_PTR(_int_46342)->dbl;
    // SubProg hashfn pc: 23 op: STARTLINE (58)

    /** symtab.e:53		int *= 256*/
    // SubProg hashfn pc: 25 op: MULTIPLY (13)
    _int_46342 = _int_46342 * 256;
    // SubProg hashfn pc: 31 op: STARTLINE (58)

    /** symtab.e:54		val *= 2*/
    // SubProg hashfn pc: 33 op: PLUS_I (115)
    _val_46341 = _val_46341 + _val_46341;
    // SubProg hashfn pc: 37 op: STARTLINE (58)

    /** symtab.e:55		val += int + len*/
    // SubProg hashfn pc: 39 op: PLUS (11)
    _24281 = _int_46342 + _len_46340;
    if ((object)((uintptr_t)_24281 + (uintptr_t)HIGH_BITS) >= 0){
        _24281 = NewDouble((eudouble)_24281);
    }
    // SubProg hashfn pc: 43 op: PLUS (11)
    if (IS_ATOM_INT(_24281)) {
        _val_46341 = _val_46341 + _24281;
    }
    else {
        _val_46341 = NewDouble((eudouble)_val_46341 + DBL_PTR(_24281)->dbl);
    }
    DeRef(_24281);
    _24281 = NOVALUE;
    // SubProg hashfn pc: 47 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_46341)) {
        _1 = (object)(DBL_PTR(_val_46341)->dbl);
        DeRefDS(_val_46341);
        _val_46341 = _1;
    }
    // SubProg hashfn pc: 49 op: STARTLINE (58)

    /** symtab.e:57		if len = 3 then*/
    // SubProg hashfn pc: 51 op: EQUALS_IFW_I (121)
    if (_len_46340 != 3)
    goto L1; // [51] 78
    // SubProg hashfn pc: 55 op: STARTLINE (58)

    /** symtab.e:58			val *= 32*/
    // SubProg hashfn pc: 57 op: MULTIPLY (13)
    _val_46341 = _val_46341 * 32;
    // SubProg hashfn pc: 63 op: STARTLINE (58)

    /** symtab.e:59			int = name[2]*/
    // SubProg hashfn pc: 65 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46339);
    _int_46342 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46342))
    _int_46342 = (object)DBL_PTR(_int_46342)->dbl;
    // SubProg hashfn pc: 69 op: STARTLINE (58)

    /** symtab.e:60			val += int*/
    // SubProg hashfn pc: 71 op: PLUS_I (115)
    _val_46341 = _val_46341 + _int_46342;
    // SubProg hashfn pc: 75 op: ELSE (23)
    goto L2; // [75] 133
    // SubProg hashfn pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 46337 op: 159
    // SubProg hashfn pc: 78 op: STARTLINE (58)

    /** symtab.e:61		elsif len > 3 then*/
    // SubProg hashfn pc: 80 op: GREATER_IFW_I (124)
    if (_len_46340 <= 3)
    goto L3; // [80] 132
    // SubProg hashfn pc: 84 op: STARTLINE (58)

    /** symtab.e:62			val *= 32*/
    // SubProg hashfn pc: 86 op: MULTIPLY (13)
    _val_46341 = _val_46341 * 32;
    // SubProg hashfn pc: 92 op: STARTLINE (58)

    /** symtab.e:63			int = name[2]*/
    // SubProg hashfn pc: 94 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46339);
    _int_46342 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46342))
    _int_46342 = (object)DBL_PTR(_int_46342)->dbl;
    // SubProg hashfn pc: 98 op: STARTLINE (58)

    /** symtab.e:64			val += int*/
    // SubProg hashfn pc: 100 op: PLUS_I (115)
    _val_46341 = _val_46341 + _int_46342;
    // SubProg hashfn pc: 104 op: STARTLINE (58)

    /** symtab.e:66			val *= 32*/
    // SubProg hashfn pc: 106 op: MULTIPLY (13)
    _val_46341 = _val_46341 * 32;
    // SubProg hashfn pc: 112 op: STARTLINE (58)

    /** symtab.e:67			int = name[$-1]*/
    // SubProg hashfn pc: 114 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46339)){
            _24292 = SEQ_PTR(_name_46339)->length;
    }
    else {
        _24292 = 1;
    }
    // SubProg hashfn pc: 117 op: MINUS (10)
    _24293 = _24292 - 1;
    _24292 = NOVALUE;
    // SubProg hashfn pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46339);
    _int_46342 = (object)*(((s1_ptr)_2)->base + _24293);
    if (!IS_ATOM_INT(_int_46342))
    _int_46342 = (object)DBL_PTR(_int_46342)->dbl;
    // SubProg hashfn pc: 125 op: STARTLINE (58)

    /** symtab.e:68			val += int*/
    // SubProg hashfn pc: 127 op: PLUS_I (115)
    _val_46341 = _val_46341 + _int_46342;
    // SubProg hashfn pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 46337 op: 159
    // SubProg hashfn pc: 132 op: NOP1 (159)
L2: // addr: 133 pc: 132 sub: 46337 op: 159
    // SubProg hashfn pc: 133 op: STARTLINE (58)

    /** symtab.e:70		return remainder(val, NBUCKETS) + 1*/
    // SubProg hashfn pc: 135 op: REMAINDER (71)
    _24296 = (_val_46341 % 2003);
    // SubProg hashfn pc: 139 op: PLUS1 (93)
    _24297 = _24296 + 1;
    _24296 = NOVALUE;
    // SubProg hashfn pc: 143 op: RETURNF (28)

// Exiting block BLOCK: hashfn

// block var name_46339
    DeRefDS(_name_46339);

// block var len_46340

// block var val_46341

// block var int_46342
    DeRef(_24293);
    _24293 = NOVALUE;
    return _24297;
    // SubProg hashfn pc: 147 op: BADRETURNF (43)
    ;
}


void _53remove_symbol(object _sym_46371)
{
    object _hash_46372 = NOVALUE;
    object _st_ptr_46373 = NOVALUE;
    object _24312 = NOVALUE; // 46402 24312
    object _24311 = NOVALUE; // 46400 24311
// skipping _24310  name type: 0
    object _24309 = NOVALUE; // 46396 24309
    object _24308 = NOVALUE; // 46393 24308
    object _24307 = NOVALUE; // 46391 24307
// skipping _24306  name type: 0
    object _24305 = NOVALUE; // 46388 24305
// skipping _24304  name type: 0
    object _24303 = NOVALUE; // 46383 24303
    object _24302 = NOVALUE; // 46381 24302
    object _24301 = NOVALUE; // 46380 24301
// skipping _24300  name type: 0
// skipping _24299  name type: 0
    object _24298 = NOVALUE; // 46375 24298
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg remove_symbol pc: 3 op: STARTLINE (58)

    /** symtab.e:79		hash = SymTab[sym][S_HASHVAL]*/
    // SubProg remove_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24298 = (object)*(((s1_ptr)_2)->base + _sym_46371);
    // SubProg remove_symbol pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24298);
    _hash_46372 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hash_46372)){
        _hash_46372 = (object)DBL_PTR(_hash_46372)->dbl;
    }
    _24298 = NOVALUE;
    // SubProg remove_symbol pc: 19 op: STARTLINE (58)

    /** symtab.e:80		st_ptr = buckets[hash]*/
    // SubProg remove_symbol pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _st_ptr_46373 = (object)*(((s1_ptr)_2)->base + _hash_46372);
    if (!IS_ATOM_INT(_st_ptr_46373))
    _st_ptr_46373 = (object)DBL_PTR(_st_ptr_46373)->dbl;
    // SubProg remove_symbol pc: 27 op: STARTLINE (58)

    /** symtab.e:82		while st_ptr and st_ptr != sym do*/
    // SubProg remove_symbol pc: 29 op: NOP2 (110)
    // SubProg remove_symbol pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 46368 op: 158
    // SubProg remove_symbol pc: 32 op: SC1_AND_IF (146)
    if (_st_ptr_46373 == 0) {
        goto L2; // [32] 65
    }
    // SubProg remove_symbol pc: 36 op: NOTEQ (4)
    _24302 = (_st_ptr_46373 != _sym_46371);
    // SubProg remove_symbol pc: 40 op: NOP1 (159)
    // SubProg remove_symbol pc: 41 op: WHILE (47)
    if (_24302 == 0)
    {
        DeRef(_24302);
        _24302 = NOVALUE;
        goto L2; // [41] 65
    }
    else{
        DeRef(_24302);
        _24302 = NOVALUE;
    }
    // SubProg remove_symbol pc: 44 op: STARTLINE (58)

    /** symtab.e:83			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24303 = (object)*(((s1_ptr)_2)->base + _st_ptr_46373);
    // SubProg remove_symbol pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24303);
    _st_ptr_46373 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_46373)){
        _st_ptr_46373 = (object)DBL_PTR(_st_ptr_46373)->dbl;
    }
    _24303 = NOVALUE;
    // SubProg remove_symbol pc: 60 op: STARTLINE (58)

    /** symtab.e:84		end while*/
    // SubProg remove_symbol pc: 62 op: ENDWHILE (22)
    goto L1; // [62] 32
    // SubProg remove_symbol pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 46368 op: 159
    // SubProg remove_symbol pc: 65 op: STARTLINE (58)

    /** symtab.e:86		if st_ptr then*/
    // SubProg remove_symbol pc: 67 op: IF (20)
    if (_st_ptr_46373 == 0)
    {
        goto L3; // [67] 134
    }
    else{
    }
    // SubProg remove_symbol pc: 70 op: STARTLINE (58)

    /** symtab.e:87			if st_ptr = buckets[hash] then*/
    // SubProg remove_symbol pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _24305 = (object)*(((s1_ptr)_2)->base + _hash_46372);
    // SubProg remove_symbol pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _st_ptr_46373, _24305)){
        _24305 = NOVALUE;
        goto L4; // [78] 105
    }
    _24305 = NOVALUE;
    // SubProg remove_symbol pc: 82 op: STARTLINE (58)

    /** symtab.e:89				buckets[hash] = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 88 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24307 = (object)*(((s1_ptr)_2)->base + _st_ptr_46373);
    // SubProg remove_symbol pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24307);
    _24308 = (object)*(((s1_ptr)_2)->base + 9);
    _24307 = NOVALUE;
    // SubProg remove_symbol pc: 98 op: ASSIGN_SUBS (16)
    Ref(_24308);
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _2 = (object)(((s1_ptr)_2)->base + _hash_46372);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24308;
    if( _1 != _24308 ){
        DeRef(_1);
    }
    _24308 = NOVALUE;
    // SubProg remove_symbol pc: 102 op: ELSE (23)
    goto L5; // [102] 133
    // SubProg remove_symbol pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 46368 op: 159
    // SubProg remove_symbol pc: 105 op: STARTLINE (58)

    /** symtab.e:92				SymTab[st_ptr][S_SAMEHASH] = SymTab[sym][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_st_ptr_46373 + ((s1_ptr)_2)->base);
    // SubProg remove_symbol pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24311 = (object)*(((s1_ptr)_2)->base + _sym_46371);
    // SubProg remove_symbol pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 124 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24311);
    _24312 = (object)*(((s1_ptr)_2)->base + 9);
    _24311 = NOVALUE;
    // SubProg remove_symbol pc: 128 op: PASSIGN_SUBS (162)
    Ref(_24312);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24312;
    if( _1 != _24312 ){
        DeRef(_1);
    }
    _24312 = NOVALUE;
    _24309 = NOVALUE;
    // SubProg remove_symbol pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46368 op: 159
    // SubProg remove_symbol pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 46368 op: 159
    // SubProg remove_symbol pc: 134 op: STARTLINE (58)

    /** symtab.e:95	end procedure*/
    // SubProg remove_symbol pc: 136 op: RETURNP (29)

// Exiting block BLOCK: remove_symbol

// block var sym_46371

// block var hash_46372

// block var st_ptr_46373
    return;
    // SubProg remove_symbol pc: 139 op: BADRETURNF (43)
    ;
}


object _53NewBasicEntry(object _name_46405, object _varnum_46406, object _scope_46407, object _token_46408, object _hashval_46409, object _samehash_46411, object _type_sym_46413)
{
    object _new_46414 = NOVALUE;
    object _24321 = NOVALUE; // 46490 24321
// skipping _24320  name type: 0
    object _24319 = NOVALUE; // 46477 24319
    object _24318 = NOVALUE; // 46472 24318
    object _24317 = NOVALUE; // 46463 24317
    object _24316 = NOVALUE; // 46458 24316
    object _24315 = NOVALUE; // 46453 24315
// skipping _24314  name type: 0
// skipping _24313  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg NewBasicEntry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewBasicEntry pc: 3 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 5 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 7 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 9 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 11 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 13 op: INTEGER_CHECK (96)
    // SubProg NewBasicEntry pc: 15 op: STARTLINE (58)

    /** symtab.e:105		if TRANSLATE then*/
    // SubProg NewBasicEntry pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 19 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L1; // [19] 33
    }
    else{
    }
    // SubProg NewBasicEntry pc: 22 op: STARTLINE (58)

    /** symtab.e:106			new = repeat(0, SIZEOF_ROUTINE_ENTRY)*/
    // SubProg NewBasicEntry pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 26 op: REPEAT (32)
    DeRef(_new_46414);
    _new_46414 = Repeat(0, _5SIZEOF_ROUTINE_ENTRY_12258);
    // SubProg NewBasicEntry pc: 30 op: ELSE (23)
    goto L2; // [30] 42
    // SubProg NewBasicEntry pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 46403 op: 159
    // SubProg NewBasicEntry pc: 33 op: STARTLINE (58)

    /** symtab.e:108			new = repeat(0, SIZEOF_VAR_ENTRY)*/
    // SubProg NewBasicEntry pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 37 op: REPEAT (32)
    DeRef(_new_46414);
    _new_46414 = Repeat(0, _5SIZEOF_VAR_ENTRY_12261);
    // SubProg NewBasicEntry pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 46403 op: 159
    // SubProg NewBasicEntry pc: 42 op: STARTLINE (58)

    /** symtab.e:111		new[S_NEXT] = 0*/
    // SubProg NewBasicEntry pc: 44 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewBasicEntry pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 48 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 52 op: STARTLINE (58)

    /** symtab.e:112		new[S_NAME] = name*/
    // SubProg NewBasicEntry pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 56 op: ASSIGN_SUBS (16)
    RefDS(_name_46405);
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_NAME_12132))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_NAME_12132);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _name_46405;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 60 op: STARTLINE (58)

    /** symtab.e:113		new[S_SCOPE] = scope*/
    // SubProg NewBasicEntry pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 64 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_46407;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 68 op: STARTLINE (58)

    /** symtab.e:114		new[S_MODE] = M_NORMAL*/
    // SubProg NewBasicEntry pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 74 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 78 op: STARTLINE (58)

    /** symtab.e:115		new[S_USAGE] = U_UNUSED*/
    // SubProg NewBasicEntry pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 82 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 84 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 88 op: STARTLINE (58)

    /** symtab.e:116		new[S_FILE_NO] = current_file_no*/
    // SubProg NewBasicEntry pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 94 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_FILE_NO_12128))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5current_file_no_12477;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 98 op: STARTLINE (58)

    /** symtab.e:118		if TRANSLATE then*/
    // SubProg NewBasicEntry pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 102 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L3; // [102] 327
    }
    else{
    }
    // SubProg NewBasicEntry pc: 105 op: STARTLINE (58)

    /** symtab.e:120			new[S_GTYPE] = TYPE_OBJECT*/
    // SubProg NewBasicEntry pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 111 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 115 op: STARTLINE (58)

    /** symtab.e:121			new[S_GTYPE_NEW] = TYPE_NULL*/
    // SubProg NewBasicEntry pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 121 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 125 op: STARTLINE (58)

    /** symtab.e:123			new[S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg NewBasicEntry pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 131 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 135 op: STARTLINE (58)

    /** symtab.e:124			new[S_SEQ_ELEM_NEW] = TYPE_NULL -- starting point for ORing*/
    // SubProg NewBasicEntry pc: 137 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 139 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 141 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 145 op: STARTLINE (58)

    /** symtab.e:126			new[S_ARG_TYPE] = TYPE_OBJECT*/
    // SubProg NewBasicEntry pc: 147 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 151 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 155 op: STARTLINE (58)

    /** symtab.e:127			new[S_ARG_TYPE_NEW] = TYPE_NULL*/
    // SubProg NewBasicEntry pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 161 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 44);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 165 op: STARTLINE (58)

    /** symtab.e:128			new[S_ARG_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg NewBasicEntry pc: 167 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 169 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 171 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 175 op: STARTLINE (58)

    /** symtab.e:129			new[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL*/
    // SubProg NewBasicEntry pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 181 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 46);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 185 op: STARTLINE (58)

    /** symtab.e:131			new[S_ARG_MIN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 187 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 189 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 191 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 195 op: STARTLINE (58)

    /** symtab.e:132			new[S_ARG_MIN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 201 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _24315 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24315 = - _5NOVALUE_12331;
        }
    }
    else {
        _24315 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg NewBasicEntry pc: 204 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24315;
    if( _1 != _24315 ){
        DeRef(_1);
    }
    _24315 = NOVALUE;
    // SubProg NewBasicEntry pc: 208 op: STARTLINE (58)

    /** symtab.e:134			new[S_ARG_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 214 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 218 op: STARTLINE (58)

    /** symtab.e:135			new[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 224 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _24316 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24316 = - _5NOVALUE_12331;
        }
    }
    else {
        _24316 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg NewBasicEntry pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24316;
    if( _1 != _24316 ){
        DeRef(_1);
    }
    _24316 = NOVALUE;
    // SubProg NewBasicEntry pc: 231 op: STARTLINE (58)

    /** symtab.e:137			new[S_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 237 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 241 op: STARTLINE (58)

    /** symtab.e:138			new[S_SEQ_LEN_NEW] = -NOVALUE -- no idea yet*/
    // SubProg NewBasicEntry pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 245 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 247 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _24317 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24317 = - _5NOVALUE_12331;
        }
    }
    else {
        _24317 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg NewBasicEntry pc: 250 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24317;
    if( _1 != _24317 ){
        DeRef(_1);
    }
    _24317 = NOVALUE;
    // SubProg NewBasicEntry pc: 254 op: STARTLINE (58)

    /** symtab.e:140			new[S_NREFS] = 0*/
    // SubProg NewBasicEntry pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 262 op: STARTLINE (58)

    /** symtab.e:141			new[S_ONE_REF] = TRUE          -- assume TRUE until we find otherwise*/
    // SubProg NewBasicEntry pc: 264 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 266 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 268 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 35);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6TRUE_365;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 272 op: STARTLINE (58)

    /** symtab.e:142			new[S_RI_TARGET] = 0*/
    // SubProg NewBasicEntry pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 276 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 53);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 280 op: STARTLINE (58)

    /** symtab.e:144			new[S_OBJ_MIN] = MININT*/
    // SubProg NewBasicEntry pc: 282 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 284 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 286 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 290 op: STARTLINE (58)

    /** symtab.e:145			new[S_OBJ_MIN_NEW] = -NOVALUE -- no idea yet*/
    // SubProg NewBasicEntry pc: 292 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 296 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _24318 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24318 = - _5NOVALUE_12331;
        }
    }
    else {
        _24318 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg NewBasicEntry pc: 299 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24318;
    if( _1 != _24318 ){
        DeRef(_1);
    }
    _24318 = NOVALUE;
    // SubProg NewBasicEntry pc: 303 op: STARTLINE (58)

    /** symtab.e:147			new[S_OBJ_MAX] = MAXINT*/
    // SubProg NewBasicEntry pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 309 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 313 op: STARTLINE (58)

    /** symtab.e:148			new[S_OBJ_MAX_NEW] = -NOVALUE -- missing from C code? (not needed)*/
    // SubProg NewBasicEntry pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 317 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 319 op: UMINUS (12)
    if (IS_ATOM_INT(_5NOVALUE_12331)) {
        if ((uintptr_t)_5NOVALUE_12331 == (uintptr_t)HIGH_BITS){
            _24319 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24319 = - _5NOVALUE_12331;
        }
    }
    else {
        _24319 = unary_op(UMINUS, _5NOVALUE_12331);
    }
    // SubProg NewBasicEntry pc: 322 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24319;
    if( _1 != _24319 ){
        DeRef(_1);
    }
    _24319 = NOVALUE;
    // SubProg NewBasicEntry pc: 326 op: NOP1 (159)
L3: // addr: 327 pc: 326 sub: 46403 op: 159
    // SubProg NewBasicEntry pc: 327 op: STARTLINE (58)

    /** symtab.e:151		new[S_TOKEN] = token*/
    // SubProg NewBasicEntry pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 331 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_TOKEN_12137))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _token_46408;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 335 op: STARTLINE (58)

    /** symtab.e:152		new[S_VARNUM] = varnum*/
    // SubProg NewBasicEntry pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 339 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _varnum_46406;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 343 op: STARTLINE (58)

    /** symtab.e:153		new[S_INITLEVEL] = -1*/
    // SubProg NewBasicEntry pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 347 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 351 op: STARTLINE (58)

    /** symtab.e:154		new[S_VTYPE] = type_sym*/
    // SubProg NewBasicEntry pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 355 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_sym_46413;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 359 op: STARTLINE (58)

    /** symtab.e:156		new[S_HASHVAL] = hashval*/
    // SubProg NewBasicEntry pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 363 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_46409;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 367 op: STARTLINE (58)

    /** symtab.e:157		new[S_SAMEHASH] = samehash*/
    // SubProg NewBasicEntry pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 371 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _samehash_46411;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 375 op: STARTLINE (58)

    /** symtab.e:159		new[S_OBJ] = NOVALUE -- important*/
    // SubProg NewBasicEntry pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 381 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_new_46414);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46414 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 385 op: STARTLINE (58)

    /** symtab.e:162		SymTab = append(SymTab, new)*/
    // SubProg NewBasicEntry pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 389 op: APPEND (35)
    RefDS(_new_46414);
    Append(&_7SymTab_11389, _7SymTab_11389, _new_46414);
    // SubProg NewBasicEntry pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg NewBasicEntry pc: 395 op: STARTLINE (58)

    /** symtab.e:164		return length(SymTab)*/
    // SubProg NewBasicEntry pc: 397 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _24321 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _24321 = 1;
    }
    // SubProg NewBasicEntry pc: 402 op: RETURNF (28)

// Exiting block BLOCK: NewBasicEntry

// block var name_46405
    DeRefDS(_name_46405);

// block var varnum_46406

// block var scope_46407

// block var token_46408

// block var hashval_46409

// block var samehash_46411

// block var type_sym_46413

// block var new_46414
    DeRefDS(_new_46414);
    return _24321;
    // SubProg NewBasicEntry pc: 406 op: BADRETURNF (43)
    ;
}


object _53NewEntry(object _name_46493, object _varnum_46494, object _scope_46495, object _token_46496, object _hashval_46497, object _samehash_46499, object _type_sym_46501)
{
    object _new_46503 = NOVALUE;
// skipping _24325  name type: 0
// skipping _24324  name type: 0
    object _24323 = NOVALUE; // 46507 24323
// skipping _24322  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewEntry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewEntry pc: 3 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_scope_46495)) {
        _1 = (object)(DBL_PTR(_scope_46495)->dbl);
        DeRefDS(_scope_46495);
        _scope_46495 = _1;
    }
    // SubProg NewEntry pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_token_46496)) {
        _1 = (object)(DBL_PTR(_token_46496)->dbl);
        DeRefDS(_token_46496);
        _token_46496 = _1;
    }
    // SubProg NewEntry pc: 9 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_samehash_46499)) {
        _1 = (object)(DBL_PTR(_samehash_46499)->dbl);
        DeRefDS(_samehash_46499);
        _samehash_46499 = _1;
    }
    // SubProg NewEntry pc: 13 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 15 op: STARTLINE (58)

    /** symtab.e:171		symtab_index new = NewBasicEntry( name, varnum, scope, token, hashval, samehash, type_sym )*/
    // SubProg NewEntry pc: 17 op: PROC (27)
    RefDS(_name_46493);
    _new_46503 = _53NewBasicEntry(_name_46493, _varnum_46494, _scope_46495, _token_46496, _hashval_46497, _samehash_46499, _type_sym_46501);
    // SubProg NewEntry pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_46503)) {
        _1 = (object)(DBL_PTR(_new_46503)->dbl);
        DeRefDS(_new_46503);
        _new_46503 = _1;
    }
    // SubProg NewEntry pc: 29 op: STARTLINE (58)

    /** symtab.e:174		if last_sym then*/
    // SubProg NewEntry pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 33 op: IF (20)
    if (_53last_sym_46333 == 0)
    {
        goto L1; // [33] 54
    }
    else{
    }
    // SubProg NewEntry pc: 36 op: STARTLINE (58)

    /** symtab.e:175			SymTab[last_sym][S_NEXT] = new*/
    // SubProg NewEntry pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 42 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_53last_sym_46333 + ((s1_ptr)_2)->base);
    // SubProg NewEntry pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 49 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_46503;
    DeRef(_1);
    _24323 = NOVALUE;
    // SubProg NewEntry pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 46491 op: 159
    // SubProg NewEntry pc: 54 op: STARTLINE (58)

    /** symtab.e:177		last_sym = new*/
    // SubProg NewEntry pc: 56 op: ASSIGN (18)
    _53last_sym_46333 = _new_46503;
    // SubProg NewEntry pc: 59 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 61 op: STARTLINE (58)

    /** symtab.e:178		if type_sym < 0 then*/
    // SubProg NewEntry pc: 63 op: LESS_IFW (102)
    if (_type_sym_46501 >= 0)
    goto L2; // [63] 76
    // SubProg NewEntry pc: 67 op: STARTLINE (58)

    /** symtab.e:179			register_forward_type( last_sym, type_sym )*/
    // SubProg NewEntry pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 71 op: PROC (27)
    _30register_forward_type(_53last_sym_46333, _type_sym_46501);
    // SubProg NewEntry pc: 75 op: NOP1 (159)
L2: // addr: 76 pc: 75 sub: 46491 op: 159
    // SubProg NewEntry pc: 76 op: STARTLINE (58)

    /** symtab.e:181		return last_sym*/
    // SubProg NewEntry pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 80 op: RETURNF (28)

// Exiting block BLOCK: NewEntry

// block var name_46493
    DeRefDS(_name_46493);

// block var varnum_46494

// block var scope_46495

// block var token_46496

// block var hashval_46497

// block var samehash_46499

// block var type_sym_46501

// block var new_46503
    return _53last_sym_46333;
    // SubProg NewEntry pc: 84 op: BADRETURNF (43)
    ;
}


object _53tmp_alloc()
{
    object _new_entry_46518 = NOVALUE;
    object _24337 = NOVALUE; // 46556 24337
// skipping _24336  name type: 0
    object _24335 = NOVALUE; // 46551 24335
// skipping _24334  name type: 0
// skipping _24333  name type: 0
    object _24332 = NOVALUE; // 46543 24332
// skipping _24331  name type: 0
    object _24329 = NOVALUE; // 46538 24329
    object _24328 = NOVALUE; // 46537 24328
// skipping _24327  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tmp_alloc pc: 1 op: STARTLINE (58)

    /** symtab.e:188		sequence new_entry = repeat( 0, SIZEOF_TEMP_ENTRY )*/
    // SubProg tmp_alloc pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 5 op: REPEAT (32)
    DeRef(_new_entry_46518);
    _new_entry_46518 = Repeat(0, _5SIZEOF_TEMP_ENTRY_12267);
    // SubProg tmp_alloc pc: 9 op: STARTLINE (58)

    /** symtab.e:192		new_entry[S_USAGE] = T_UNKNOWN*/
    // SubProg tmp_alloc pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    *(intptr_t *)_2 = 4;
    // SubProg tmp_alloc pc: 19 op: STARTLINE (58)

    /** symtab.e:194		if TRANSLATE then*/
    // SubProg tmp_alloc pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 23 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L1; // [23] 132
    }
    else{
    }
    // SubProg tmp_alloc pc: 26 op: STARTLINE (58)

    /** symtab.e:195			new_entry[S_GTYPE] = TYPE_OBJECT*/
    // SubProg tmp_alloc pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 30 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 32 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = 16;
    // SubProg tmp_alloc pc: 36 op: STARTLINE (58)

    /** symtab.e:196			new_entry[S_OBJ_MIN] = MININT*/
    // SubProg tmp_alloc pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 42 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    *(intptr_t *)_2 = -1073741824;
    // SubProg tmp_alloc pc: 46 op: STARTLINE (58)

    /** symtab.e:197			new_entry[S_OBJ_MAX] = MAXINT*/
    // SubProg tmp_alloc pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 52 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    *(intptr_t *)_2 = 1073741823;
    // SubProg tmp_alloc pc: 56 op: STARTLINE (58)

    /** symtab.e:198			new_entry[S_SEQ_LEN] = NOVALUE*/
    // SubProg tmp_alloc pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 62 op: ASSIGN_SUBS (16)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = _5NOVALUE_12331;
    // SubProg tmp_alloc pc: 66 op: STARTLINE (58)

    /** symtab.e:199			new_entry[S_SEQ_ELEM] = TYPE_OBJECT  -- other fields set later*/
    // SubProg tmp_alloc pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 72 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg tmp_alloc pc: 76 op: STARTLINE (58)

    /** symtab.e:200			if length(temp_name_type)+1 = 8087 then*/
    // SubProg tmp_alloc pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_5temp_name_type_12560)){
            _24328 = SEQ_PTR(_5temp_name_type_12560)->length;
    }
    else {
        _24328 = 1;
    }
    // SubProg tmp_alloc pc: 83 op: PLUS1 (93)
    _24329 = _24328 + 1;
    _24328 = NOVALUE;
    // SubProg tmp_alloc pc: 87 op: EQUALS_IFW (104)
    if (_24329 != 8087)
    goto L2; // [87] 106
    // SubProg tmp_alloc pc: 91 op: STARTLINE (58)

    /** symtab.e:202				temp_name_type = append(temp_name_type, {0, 0})*/
    // SubProg tmp_alloc pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 95 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _24332 = MAKE_SEQ(_1);
    // SubProg tmp_alloc pc: 99 op: APPEND (35)
    RefDS(_24332);
    Append(&_5temp_name_type_12560, _5temp_name_type_12560, _24332);
    DeRefDS(_24332);
    _24332 = NOVALUE;
    // SubProg tmp_alloc pc: 103 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 105 op: NOP1 (159)
L2: // addr: 106 pc: 105 sub: 46516 op: 159
    // SubProg tmp_alloc pc: 106 op: STARTLINE (58)

    /** symtab.e:204			temp_name_type = append(temp_name_type, TYPES_OBNL)*/
    // SubProg tmp_alloc pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 112 op: APPEND (35)
    RefDS(_54TYPES_OBNL_46158);
    Append(&_5temp_name_type_12560, _5temp_name_type_12560, _54TYPES_OBNL_46158);
    // SubProg tmp_alloc pc: 116 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 118 op: STARTLINE (58)

    /** symtab.e:205			new_entry[S_TEMP_NAME] = length(temp_name_type)*/
    // SubProg tmp_alloc pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_5temp_name_type_12560)){
            _24335 = SEQ_PTR(_5temp_name_type_12560)->length;
    }
    else {
        _24335 = 1;
    }
    // SubProg tmp_alloc pc: 127 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_entry_46518);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46518 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24335;
    if( _1 != _24335 ){
        DeRef(_1);
    }
    _24335 = NOVALUE;
    // SubProg tmp_alloc pc: 131 op: NOP1 (159)
L1: // addr: 132 pc: 131 sub: 46516 op: 159
    // SubProg tmp_alloc pc: 132 op: STARTLINE (58)

    /** symtab.e:208		SymTab = append(SymTab, new_entry )*/
    // SubProg tmp_alloc pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 136 op: APPEND (35)
    RefDS(_new_entry_46518);
    Append(&_7SymTab_11389, _7SymTab_11389, _new_entry_46518);
    // SubProg tmp_alloc pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 142 op: STARTLINE (58)

    /** symtab.e:210		return length( SymTab )*/
    // SubProg tmp_alloc pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _24337 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _24337 = 1;
    }
    // SubProg tmp_alloc pc: 149 op: RETURNF (28)

// Exiting block BLOCK: tmp_alloc

// block var new_entry_46518
    DeRefDS(_new_entry_46518);
    DeRef(_24329);
    _24329 = NOVALUE;
    return _24337;
    // SubProg tmp_alloc pc: 153 op: BADRETURNF (43)
    ;
}


void _53DefinedYet(object _sym_46587)
{
    object _24358 = NOVALUE; // 46612 24358
    object _24357 = NOVALUE; // 46611 24357
    object _24356 = NOVALUE; // 46609 24356
// skipping _24354  name type: 0
    object _24353 = NOVALUE; // 46603 24353
    object _24352 = NOVALUE; // 46601 24352
// skipping _24351  name type: 0
    object _24350 = NOVALUE; // 46597 24350
    object _24349 = NOVALUE; // 46596 24349
    object _24348 = NOVALUE; // 46592 24348
    object _24347 = NOVALUE; // 46590 24347
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DefinedYet pc: 1 op: INTEGER_CHECK (96)
    // SubProg DefinedYet pc: 3 op: STARTLINE (58)

    /** symtab.e:230		if not find(SymTab[sym][S_SCOPE],*/
    // SubProg DefinedYet pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24347 = (object)*(((s1_ptr)_2)->base + _sym_46587);
    // SubProg DefinedYet pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24347);
    _24348 = (object)*(((s1_ptr)_2)->base + 4);
    _24347 = NOVALUE;
    // SubProg DefinedYet pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 23 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 9;
    ((intptr_t*)_2)[2] = 10;
    ((intptr_t*)_2)[3] = 7;
    _24349 = MAKE_SEQ(_1);
    // SubProg DefinedYet pc: 29 op: FIND_FROM (176)
    _24350 = find_from(_24348, _24349, 1);
    _24348 = NOVALUE;
    DeRefDS(_24349);
    _24349 = NOVALUE;
    // SubProg DefinedYet pc: 34 op: NOT_IFW (108)
    if (_24350 != 0)
    goto L1; // [34] 82
    _24350 = NOVALUE;
    // SubProg DefinedYet pc: 37 op: STARTLINE (58)

    /** symtab.e:232			if SymTab[sym][S_FILE_NO] = current_file_no then*/
    // SubProg DefinedYet pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24352 = (object)*(((s1_ptr)_2)->base + _sym_46587);
    // SubProg DefinedYet pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24352);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _24353 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _24353 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _24352 = NOVALUE;
    // SubProg DefinedYet pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 53 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24353, _5current_file_no_12477)){
        _24353 = NOVALUE;
        goto L2; // [53] 81
    }
    _24353 = NOVALUE;
    // SubProg DefinedYet pc: 57 op: STARTLINE (58)

    /** symtab.e:233				CompileErr(31, {SymTab[sym][S_NAME]})*/
    // SubProg DefinedYet pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24356 = (object)*(((s1_ptr)_2)->base + _sym_46587);
    // SubProg DefinedYet pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24356);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _24357 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _24357 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _24356 = NOVALUE;
    // SubProg DefinedYet pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24357);
    ((intptr_t*)_2)[1] = _24357;
    _24358 = MAKE_SEQ(_1);
    _24357 = NOVALUE;
    // SubProg DefinedYet pc: 75 op: PROC (27)
    _49CompileErr(31, _24358, 0);
    _24358 = NOVALUE;
    // SubProg DefinedYet pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 46584 op: 159
    // SubProg DefinedYet pc: 81 op: NOP1 (159)
L1: // addr: 82 pc: 81 sub: 46584 op: 159
    // SubProg DefinedYet pc: 82 op: STARTLINE (58)

    /** symtab.e:236	end procedure*/
    // SubProg DefinedYet pc: 84 op: RETURNP (29)

// Exiting block BLOCK: DefinedYet

// block var sym_46587
    return;
    // SubProg DefinedYet pc: 87 op: BADRETURNF (43)
    ;
}


object _53name_ext(object _s_46615)
{
    object _24365 = NOVALUE; // 46625 24365
    object _24364 = NOVALUE; // 46624 24364
    object _24363 = NOVALUE; // 46623 24363
    object _24362 = NOVALUE; // 46622 24362
    object _24360 = NOVALUE; // 46620 24360
    object _24359 = NOVALUE; // 46618 24359
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg name_ext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg name_ext pc: 3 op: STARTLINE (58)

    /** symtab.e:241		for i = length(s) to 1 by -1 do*/
    // SubProg name_ext pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46615)){
            _24359 = SEQ_PTR(_s_46615)->length;
    }
    else {
        _24359 = 1;
    }
    // SubProg name_ext pc: 8 op: FOR_I (125)
    {
        object _i_46617;
        _i_46617 = _24359;
L1: // addr: 15 pc: 8 sub: 46613 op: 125
        if (_i_46617 < 1){
            goto L2; // [8] 55
        }
        // SubProg name_ext pc: 15 op: STARTLINE (58)

        /** symtab.e:242			if find(s[i], "/\\:") then*/
        // SubProg name_ext pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_46615);
        _24360 = (object)*(((s1_ptr)_2)->base + _i_46617);
        // SubProg name_ext pc: 21 op: FIND_FROM (176)
        _24362 = find_from(_24360, _24361, 1);
        _24360 = NOVALUE;
        // SubProg name_ext pc: 26 op: IF (20)
        if (_24362 == 0)
        {
            _24362 = NOVALUE;
            goto L3; // [26] 48
        }
        else{
            _24362 = NOVALUE;
        }
        // SubProg name_ext pc: 29 op: STARTLINE (58)

        /** symtab.e:243				return s[i+1 .. $]*/
        // SubProg name_ext pc: 31 op: PLUS1 (93)
        _24363 = _i_46617 + 1;
        // SubProg name_ext pc: 35 op: LENGTH (42)
        if (IS_SEQUENCE(_s_46615)){
                _24364 = SEQ_PTR(_s_46615)->length;
        }
        else {
            _24364 = 1;
        }
        // SubProg name_ext pc: 38 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_24365;
        RHS_Slice(_s_46615, _24363, _24364);
        // SubProg name_ext pc: 43 op: RETURNF (28)

// Exiting block BLOCK: name_ext

// block var s_46615
        DeRefDS(_s_46615);
        _24363 = NOVALUE;
        return _24365;
        // SubProg name_ext pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 46613 op: 159
        // SubProg name_ext pc: 48 op: STARTLINE (58)

        /** symtab.e:245		end for*/
        // SubProg name_ext pc: 50 op: ENDFOR_GENERAL (39)
        _i_46617 = _i_46617 + -1;
        goto L1; // [50] 15
L2: // addr: 55 pc: 50 sub: 46613 op: 39
        ;
    }
    // SubProg name_ext pc: 55 op: STARTLINE (58)

    /** symtab.e:247		return s*/
    // SubProg name_ext pc: 57 op: RETURNF (28)

// Exiting block BLOCK: name_ext
    DeRef(_24363);
    _24363 = NOVALUE;
    DeRef(_24365);
    _24365 = NOVALUE;
    return _s_46615;
    // SubProg name_ext pc: 61 op: BADRETURNF (43)
    ;
}


object _53NewStringSym(object _s_46635)
{
    object _p_46637 = NOVALUE;
    object _tp_46638 = NOVALUE;
    object _prev_46639 = NOVALUE;
    object _search_count_46640 = NOVALUE;
// skipping _24411  name type: 0
    object _24410 = NOVALUE; // 46728 24410
// skipping _24409  name type: 0
    object _24408 = NOVALUE; // 46723 24408
    object _24407 = NOVALUE; // 46720 24407
    object _24406 = NOVALUE; // 46718 24406
    object _24404 = NOVALUE; // 46714 24404
    object _24403 = NOVALUE; // 46712 24403
// skipping _24401  name type: 0
    object _24400 = NOVALUE; // 46705 24400
// skipping _24399  name type: 0
    object _24398 = NOVALUE; // 46699 24398
// skipping _24397  name type: 0
    object _24396 = NOVALUE; // 46696 24396
    object _24395 = NOVALUE; // 46694 24395
    object _24394 = NOVALUE; // 46691 24394
// skipping _24393  name type: 0
    object _24392 = NOVALUE; // 46688 24392
// skipping _24391  name type: 0
    object _24390 = NOVALUE; // 46683 24390
// skipping _24389  name type: 0
    object _24388 = NOVALUE; // 46678 24388
// skipping _24387  name type: 0
    object _24386 = NOVALUE; // 46672 24386
// skipping _24385  name type: 0
// skipping _24384  name type: 0
    object _24383 = NOVALUE; // 46667 24383
// skipping _24382  name type: 0
    object _24381 = NOVALUE; // 46663 24381
    object _24380 = NOVALUE; // 46661 24380
    object _24379 = NOVALUE; // 46659 24379
// skipping _24378  name type: 0
    object _24377 = NOVALUE; // 46655 24377
// skipping _24376  name type: 0
    object _24375 = NOVALUE; // 46651 24375
    object _24374 = NOVALUE; // 46650 24374
    object _24373 = NOVALUE; // 46648 24373
// skipping _24372  name type: 0
// skipping _24371  name type: 0
// skipping _24370  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewStringSym pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewStringSym pc: 3 op: STARTLINE (58)

    /** symtab.e:255		integer search_count*/
    // SubProg NewStringSym pc: 5 op: STARTLINE (58)

    /** symtab.e:258		tp = literal_init*/
    // SubProg NewStringSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 9 op: ASSIGN (18)
    _tp_46638 = _53literal_init_46332;
    // SubProg NewStringSym pc: 12 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 14 op: STARTLINE (58)

    /** symtab.e:259		prev = 0*/
    // SubProg NewStringSym pc: 16 op: ASSIGN (18)
    _prev_46639 = 0;
    // SubProg NewStringSym pc: 19 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 21 op: STARTLINE (58)

    /** symtab.e:260		search_count = 0*/
    // SubProg NewStringSym pc: 23 op: ASSIGN_I (113)
    _search_count_46640 = 0;
    // SubProg NewStringSym pc: 26 op: STARTLINE (58)

    /** symtab.e:261		while tp != 0 do*/
    // SubProg NewStringSym pc: 28 op: NOP2 (110)
    // SubProg NewStringSym pc: 30 op: NOPWHILE (158)
L1: // addr: 31 pc: 30 sub: 46633 op: 158
    // SubProg NewStringSym pc: 31 op: NOTEQ_IFW (105)
    if (_tp_46638 == 0)
    goto L2; // [31] 170
    // SubProg NewStringSym pc: 35 op: STARTLINE (58)

    /** symtab.e:262			search_count += 1*/
    // SubProg NewStringSym pc: 37 op: PLUS1_I (117)
    _search_count_46640 = _search_count_46640 + 1;
    // SubProg NewStringSym pc: 41 op: STARTLINE (58)

    /** symtab.e:263			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewStringSym pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 45 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46640, _53SEARCH_LIMIT_46626)){
        goto L3; // [45] 54
    }
    // SubProg NewStringSym pc: 49 op: STARTLINE (58)

    /** symtab.e:264				exit*/
    // SubProg NewStringSym pc: 51 op: EXIT (61)
    goto L2; // [51] 170
    // SubProg NewStringSym pc: 53 op: NOP1 (159)
L3: // addr: 54 pc: 53 sub: 46633 op: 159
    // SubProg NewStringSym pc: 54 op: STARTLINE (58)

    /** symtab.e:266			if equal(s, SymTab[tp][S_OBJ]) then*/
    // SubProg NewStringSym pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24373 = (object)*(((s1_ptr)_2)->base + _tp_46638);
    // SubProg NewStringSym pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24373);
    _24374 = (object)*(((s1_ptr)_2)->base + 1);
    _24373 = NOVALUE;
    // SubProg NewStringSym pc: 68 op: EQUAL (153)
    if (_s_46635 == _24374)
    _24375 = 1;
    else if (IS_ATOM_INT(_s_46635) && IS_ATOM_INT(_24374))
    _24375 = 0;
    else
    _24375 = (compare(_s_46635, _24374) == 0);
    _24374 = NOVALUE;
    // SubProg NewStringSym pc: 72 op: IF (20)
    if (_24375 == 0)
    {
        _24375 = NOVALUE;
        goto L4; // [72] 142
    }
    else{
        _24375 = NOVALUE;
    }
    // SubProg NewStringSym pc: 75 op: STARTLINE (58)

    /** symtab.e:268				if tp != literal_init then*/
    // SubProg NewStringSym pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 79 op: NOTEQ_IFW (105)
    if (_tp_46638 == _53literal_init_46332)
    goto L5; // [79] 135
    // SubProg NewStringSym pc: 83 op: STARTLINE (58)

    /** symtab.e:269					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 87 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46639 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24379 = (object)*(((s1_ptr)_2)->base + _tp_46638);
    // SubProg NewStringSym pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24379);
    _24380 = (object)*(((s1_ptr)_2)->base + 2);
    _24379 = NOVALUE;
    // SubProg NewStringSym pc: 106 op: PASSIGN_SUBS (162)
    Ref(_24380);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24380;
    if( _1 != _24380 ){
        DeRef(_1);
    }
    _24380 = NOVALUE;
    _24377 = NOVALUE;
    // SubProg NewStringSym pc: 110 op: STARTLINE (58)

    /** symtab.e:270					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 114 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46638 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 123 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _53literal_init_46332;
    DeRef(_1);
    _24381 = NOVALUE;
    // SubProg NewStringSym pc: 127 op: STARTLINE (58)

    /** symtab.e:271					literal_init = tp*/
    // SubProg NewStringSym pc: 129 op: ASSIGN (18)
    _53literal_init_46332 = _tp_46638;
    // SubProg NewStringSym pc: 132 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 46633 op: 159
    // SubProg NewStringSym pc: 135 op: STARTLINE (58)

    /** symtab.e:273				return tp*/
    // SubProg NewStringSym pc: 137 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46635
    DeRefDS(_s_46635);

// block var p_46637

// block var prev_46639

// block var search_count_46640
    return _tp_46638;
    // SubProg NewStringSym pc: 141 op: NOP1 (159)
L4: // addr: 142 pc: 141 sub: 46633 op: 159
    // SubProg NewStringSym pc: 142 op: STARTLINE (58)

    /** symtab.e:275			prev = tp*/
    // SubProg NewStringSym pc: 144 op: ASSIGN (18)
    _prev_46639 = _tp_46638;
    // SubProg NewStringSym pc: 147 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 149 op: STARTLINE (58)

    /** symtab.e:276			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24383 = (object)*(((s1_ptr)_2)->base + _tp_46638);
    // SubProg NewStringSym pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24383);
    _tp_46638 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46638)){
        _tp_46638 = (object)DBL_PTR(_tp_46638)->dbl;
    }
    _24383 = NOVALUE;
    // SubProg NewStringSym pc: 165 op: STARTLINE (58)

    /** symtab.e:277		end while*/
    // SubProg NewStringSym pc: 167 op: ENDWHILE (22)
    goto L1; // [167] 31
    // SubProg NewStringSym pc: 169 op: NOP1 (159)
L2: // addr: 170 pc: 169 sub: 46633 op: 159
    // SubProg NewStringSym pc: 170 op: STARTLINE (58)

    /** symtab.e:279		p = tmp_alloc()*/
    // SubProg NewStringSym pc: 172 op: PROC (27)
    _p_46637 = _53tmp_alloc();
    // SubProg NewStringSym pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46637)) {
        _1 = (object)(DBL_PTR(_p_46637)->dbl);
        DeRefDS(_p_46637);
        _p_46637 = _1;
    }
    // SubProg NewStringSym pc: 177 op: STARTLINE (58)

    /** symtab.e:280		SymTab[p][S_OBJ] = s*/
    // SubProg NewStringSym pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 181 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 188 op: PASSIGN_SUBS (162)
    RefDS(_s_46635);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_46635;
    DeRef(_1);
    _24386 = NOVALUE;
    // SubProg NewStringSym pc: 192 op: STARTLINE (58)

    /** symtab.e:282		if TRANSLATE then*/
    // SubProg NewStringSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 196 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L6; // [196] 346
    }
    else{
    }
    // SubProg NewStringSym pc: 199 op: STARTLINE (58)

    /** symtab.e:283			SymTab[p][S_MODE] = M_TEMP    -- override CONSTANT for compile*/
    // SubProg NewStringSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 203 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 212 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24388 = NOVALUE;
    // SubProg NewStringSym pc: 216 op: STARTLINE (58)

    /** symtab.e:284			SymTab[p][S_GTYPE] = TYPE_SEQUENCE*/
    // SubProg NewStringSym pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 220 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 227 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 229 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    _24390 = NOVALUE;
    // SubProg NewStringSym pc: 233 op: STARTLINE (58)

    /** symtab.e:285			SymTab[p][S_SEQ_LEN] = length(s)*/
    // SubProg NewStringSym pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 237 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 244 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46635)){
            _24394 = SEQ_PTR(_s_46635)->length;
    }
    else {
        _24394 = 1;
    }
    // SubProg NewStringSym pc: 247 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24394;
    if( _1 != _24394 ){
        DeRef(_1);
    }
    _24394 = NOVALUE;
    _24392 = NOVALUE;
    // SubProg NewStringSym pc: 251 op: STARTLINE (58)

    /** symtab.e:286			if SymTab[p][S_SEQ_LEN] > 0 then*/
    // SubProg NewStringSym pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24395 = (object)*(((s1_ptr)_2)->base + _p_46637);
    // SubProg NewStringSym pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24395);
    _24396 = (object)*(((s1_ptr)_2)->base + 32);
    _24395 = NOVALUE;
    // SubProg NewStringSym pc: 265 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24396, 0)){
        _24396 = NOVALUE;
        goto L7; // [265] 289
    }
    _24396 = NOVALUE;
    // SubProg NewStringSym pc: 269 op: STARTLINE (58)

    /** symtab.e:287				SymTab[p][S_SEQ_ELEM] = TYPE_INTEGER*/
    // SubProg NewStringSym pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 273 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 280 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 282 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24398 = NOVALUE;
    // SubProg NewStringSym pc: 286 op: ELSE (23)
    goto L8; // [286] 307
    // SubProg NewStringSym pc: 288 op: NOP1 (159)
L7: // addr: 289 pc: 288 sub: 46633 op: 159
    // SubProg NewStringSym pc: 289 op: STARTLINE (58)

    /** symtab.e:289				SymTab[p][S_SEQ_ELEM] = TYPE_NULL*/
    // SubProg NewStringSym pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 293 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 298 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 300 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 302 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _24400 = NOVALUE;
    // SubProg NewStringSym pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 46633 op: 159
    // SubProg NewStringSym pc: 307 op: STARTLINE (58)

    /** symtab.e:291			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 311 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24403 = (object)*(((s1_ptr)_2)->base + _p_46637);
    // SubProg NewStringSym pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 317 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24403);
    _24404 = (object)*(((s1_ptr)_2)->base + 34);
    _24403 = NOVALUE;
    // SubProg NewStringSym pc: 321 op: PROC (27)
    RefDS(_24402);
    Ref(_24404);
    _54c_printf(_24402, _24404);
    _24404 = NOVALUE;
    // SubProg NewStringSym pc: 325 op: STARTLINE (58)

    /** symtab.e:292			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 329 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24406 = (object)*(((s1_ptr)_2)->base + _p_46637);
    // SubProg NewStringSym pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 335 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24406);
    _24407 = (object)*(((s1_ptr)_2)->base + 34);
    _24406 = NOVALUE;
    // SubProg NewStringSym pc: 339 op: PROC (27)
    RefDS(_24405);
    Ref(_24407);
    _54c_hprintf(_24405, _24407);
    _24407 = NOVALUE;
    // SubProg NewStringSym pc: 343 op: ELSE (23)
    goto L9; // [343] 364
    // SubProg NewStringSym pc: 345 op: NOP1 (159)
L6: // addr: 346 pc: 345 sub: 46633 op: 159
    // SubProg NewStringSym pc: 346 op: STARTLINE (58)

    /** symtab.e:295			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewStringSym pc: 348 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 350 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 355 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 357 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 359 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24408 = NOVALUE;
    // SubProg NewStringSym pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 46633 op: 159
    // SubProg NewStringSym pc: 364 op: STARTLINE (58)

    /** symtab.e:299		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46637 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 373 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 375 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 377 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _53literal_init_46332;
    DeRef(_1);
    _24410 = NOVALUE;
    // SubProg NewStringSym pc: 381 op: STARTLINE (58)

    /** symtab.e:300		literal_init = p*/
    // SubProg NewStringSym pc: 383 op: ASSIGN (18)
    _53literal_init_46332 = _p_46637;
    // SubProg NewStringSym pc: 386 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 388 op: STARTLINE (58)

    /** symtab.e:301		return p*/
    // SubProg NewStringSym pc: 390 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46635
    DeRefDS(_s_46635);

// block var tp_46638

// block var prev_46639

// block var search_count_46640
    return _p_46637;
    // SubProg NewStringSym pc: 394 op: BADRETURNF (43)
    ;
}


object _53NewIntSym(object _int_val_46733)
{
    object _p_46735 = NOVALUE;
    object _x_46736 = NOVALUE;
// skipping _24435  name type: 0
    object _24434 = NOVALUE; // 46781 24434
// skipping _24433  name type: 0
    object _24432 = NOVALUE; // 46779 24432
// skipping _24431  name type: 0
// skipping _24430  name type: 0
// skipping _24429  name type: 0
    object _24428 = NOVALUE; // 46772 24428
// skipping _24427  name type: 0
    object _24426 = NOVALUE; // 46768 24426
// skipping _24425  name type: 0
    object _24424 = NOVALUE; // 46764 24424
// skipping _24423  name type: 0
    object _24422 = NOVALUE; // 46758 24422
// skipping _24421  name type: 0
    object _24420 = NOVALUE; // 46753 24420
// skipping _24419  name type: 0
    object _24418 = NOVALUE; // 46749 24418
// skipping _24416  name type: 0
// skipping _24415  name type: 0
// skipping _24414  name type: 0
// skipping _24413  name type: 0
// skipping _24412  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewIntSym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_val_46733)) {
        _1 = (object)(DBL_PTR(_int_val_46733)->dbl);
        DeRefDS(_int_val_46733);
        _int_val_46733 = _1;
    }
    // SubProg NewIntSym pc: 3 op: STARTLINE (58)

    /** symtab.e:308		integer x*/
    // SubProg NewIntSym pc: 5 op: STARTLINE (58)

    /** symtab.e:310		x = find(int_val, lastintval)*/
    // SubProg NewIntSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 9 op: FIND_FROM (176)
    _x_46736 = find_from(_int_val_46733, _53lastintval_46334, 1);
    // SubProg NewIntSym pc: 14 op: STARTLINE (58)

    /** symtab.e:311		if x then*/
    // SubProg NewIntSym pc: 16 op: IF (20)
    if (_x_46736 == 0)
    {
        goto L1; // [16] 77
    }
    else{
    }
    // SubProg NewIntSym pc: 19 op: STARTLINE (58)

    /** symtab.e:312			if repl then*/
    // SubProg NewIntSym pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 23 op: IF (20)
    // SubProg NewIntSym pc: 62 op: STARTLINE (58)

    /** symtab.e:317			return lastintsym[x]  -- saves space, helps Translator reduce code size*/
    // SubProg NewIntSym pc: 64 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 66 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53lastintsym_46335);
    _24418 = (object)*(((s1_ptr)_2)->base + _x_46736);
    // SubProg NewIntSym pc: 70 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46733

// block var p_46735

// block var x_46736
    return _24418;
    // SubProg NewIntSym pc: 74 op: ELSE (23)
    goto L2; // [74] 227
    // SubProg NewIntSym pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 46731 op: 159
    // SubProg NewIntSym pc: 77 op: STARTLINE (58)

    /** symtab.e:320			label "lolol"*/
    // SubProg NewIntSym pc: 79 op: GLABEL (189)
G3:
    // SubProg NewIntSym pc: 81 op: STARTLINE (58)

    /** symtab.e:321			p = tmp_alloc()*/
    // SubProg NewIntSym pc: 83 op: PROC (27)
    _p_46735 = _53tmp_alloc();
    // SubProg NewIntSym pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46735)) {
        _1 = (object)(DBL_PTR(_p_46735)->dbl);
        DeRefDS(_p_46735);
        _p_46735 = _1;
    }
    // SubProg NewIntSym pc: 88 op: STARTLINE (58)

    /** symtab.e:322			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewIntSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46735 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 99 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 101 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24420 = NOVALUE;
    // SubProg NewIntSym pc: 105 op: STARTLINE (58)

    /** symtab.e:323			SymTab[p][S_OBJ] = int_val*/
    // SubProg NewIntSym pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46735 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 116 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46733;
    DeRef(_1);
    _24422 = NOVALUE;
    // SubProg NewIntSym pc: 120 op: STARTLINE (58)

    /** symtab.e:325			if TRANSLATE then*/
    // SubProg NewIntSym pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 124 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L4; // [124] 175
    }
    else{
    }
    // SubProg NewIntSym pc: 127 op: STARTLINE (58)

    /** symtab.e:326				SymTab[p][S_OBJ_MIN] = int_val*/
    // SubProg NewIntSym pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46735 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 138 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46733;
    DeRef(_1);
    _24424 = NOVALUE;
    // SubProg NewIntSym pc: 142 op: STARTLINE (58)

    /** symtab.e:327				SymTab[p][S_OBJ_MAX] = int_val*/
    // SubProg NewIntSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46735 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 153 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46733;
    DeRef(_1);
    _24426 = NOVALUE;
    // SubProg NewIntSym pc: 157 op: STARTLINE (58)

    /** symtab.e:328				SymTab[p][S_GTYPE] = TYPE_INTEGER*/
    // SubProg NewIntSym pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 161 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46735 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 168 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 170 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24428 = NOVALUE;
    // SubProg NewIntSym pc: 174 op: NOP1 (159)
L4: // addr: 175 pc: 174 sub: 46731 op: 159
    // SubProg NewIntSym pc: 175 op: STARTLINE (58)

    /** symtab.e:331			lastintval = prepend(lastintval, int_val)*/
    // SubProg NewIntSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 179 op: PREPEND (57)
    Prepend(&_53lastintval_46334, _53lastintval_46334, _int_val_46733);
    // SubProg NewIntSym pc: 183 op: STARTLINE (58)

    /** symtab.e:332			lastintsym = prepend(lastintsym, p)*/
    // SubProg NewIntSym pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 187 op: PREPEND (57)
    Prepend(&_53lastintsym_46335, _53lastintsym_46335, _p_46735);
    // SubProg NewIntSym pc: 191 op: STARTLINE (58)

    /** symtab.e:333			if length(lastintval) > SEARCH_LIMIT then*/
    // SubProg NewIntSym pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_53lastintval_46334)){
            _24432 = SEQ_PTR(_53lastintval_46334)->length;
    }
    else {
        _24432 = 1;
    }
    // SubProg NewIntSym pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 200 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24432, _53SEARCH_LIMIT_46626)){
        _24432 = NOVALUE;
        goto L5; // [200] 220
    }
    _24432 = NOVALUE;
    // SubProg NewIntSym pc: 204 op: STARTLINE (58)

    /** symtab.e:334				lastintval = lastintval[1..floor(SEARCH_LIMIT/2)]*/
    // SubProg NewIntSym pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 210 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_53SEARCH_LIMIT_46626)) {
        _24434 = _53SEARCH_LIMIT_46626 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _53SEARCH_LIMIT_46626, 2);
        _24434 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg NewIntSym pc: 214 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_53lastintval_46334;
    RHS_Slice(_53lastintval_46334, 1, _24434);
    // SubProg NewIntSym pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 46731 op: 159
    // SubProg NewIntSym pc: 220 op: STARTLINE (58)

    /** symtab.e:336			return p*/
    // SubProg NewIntSym pc: 222 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46733

// block var x_46736
    DeRef(_24434);
    _24434 = NOVALUE;
    _24418 = NOVALUE;
    return _p_46735;
    // SubProg NewIntSym pc: 226 op: NOP1 (159)
L2: // addr: 227 pc: 226 sub: 46731 op: 159
    // SubProg NewIntSym pc: 227 op: BADRETURNF (43)
    ;
}


object _53NewDoubleSym(object _d_46785)
{
    object _p_46787 = NOVALUE;
    object _tp_46788 = NOVALUE;
    object _prev_46789 = NOVALUE;
    object _search_count_46790 = NOVALUE;
// skipping _24465  name type: 0
    object _24464 = NOVALUE; // 46853 24464
    object _24463 = NOVALUE; // 46851 24463
    object _24462 = NOVALUE; // 46849 24462
    object _24461 = NOVALUE; // 46846 24461
    object _24460 = NOVALUE; // 46844 24460
// skipping _24459  name type: 0
    object _24458 = NOVALUE; // 46838 24458
// skipping _24457  name type: 0
    object _24456 = NOVALUE; // 46833 24456
// skipping _24455  name type: 0
    object _24454 = NOVALUE; // 46827 24454
// skipping _24453  name type: 0
    object _24452 = NOVALUE; // 46822 24452
// skipping _24451  name type: 0
// skipping _24450  name type: 0
    object _24449 = NOVALUE; // 46817 24449
// skipping _24448  name type: 0
    object _24447 = NOVALUE; // 46813 24447
    object _24446 = NOVALUE; // 46811 24446
    object _24445 = NOVALUE; // 46809 24445
// skipping _24444  name type: 0
    object _24443 = NOVALUE; // 46805 24443
// skipping _24442  name type: 0
    object _24441 = NOVALUE; // 46801 24441
    object _24440 = NOVALUE; // 46800 24440
    object _24439 = NOVALUE; // 46798 24439
// skipping _24438  name type: 0
// skipping _24437  name type: 0
// skipping _24436  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewDoubleSym pc: 1 op: STARTLINE (58)

    /** symtab.e:343		integer search_count*/
    // SubProg NewDoubleSym pc: 3 op: STARTLINE (58)

    /** symtab.e:346		tp = literal_init*/
    // SubProg NewDoubleSym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 7 op: ASSIGN (18)
    _tp_46788 = _53literal_init_46332;
    // SubProg NewDoubleSym pc: 10 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 12 op: STARTLINE (58)

    /** symtab.e:347		prev = 0*/
    // SubProg NewDoubleSym pc: 14 op: ASSIGN (18)
    _prev_46789 = 0;
    // SubProg NewDoubleSym pc: 17 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 19 op: STARTLINE (58)

    /** symtab.e:348		search_count = 0*/
    // SubProg NewDoubleSym pc: 21 op: ASSIGN_I (113)
    _search_count_46790 = 0;
    // SubProg NewDoubleSym pc: 24 op: STARTLINE (58)

    /** symtab.e:349		while tp != 0 do*/
    // SubProg NewDoubleSym pc: 26 op: NOP2 (110)
    // SubProg NewDoubleSym pc: 28 op: NOPWHILE (158)
L1: // addr: 29 pc: 28 sub: 46783 op: 158
    // SubProg NewDoubleSym pc: 29 op: NOTEQ_IFW (105)
    if (_tp_46788 == 0)
    goto L2; // [29] 168
    // SubProg NewDoubleSym pc: 33 op: STARTLINE (58)

    /** symtab.e:350			search_count += 1*/
    // SubProg NewDoubleSym pc: 35 op: PLUS1_I (117)
    _search_count_46790 = _search_count_46790 + 1;
    // SubProg NewDoubleSym pc: 39 op: STARTLINE (58)

    /** symtab.e:351			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewDoubleSym pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 43 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46790, _53SEARCH_LIMIT_46626)){
        goto L3; // [43] 52
    }
    // SubProg NewDoubleSym pc: 47 op: STARTLINE (58)

    /** symtab.e:352				exit*/
    // SubProg NewDoubleSym pc: 49 op: EXIT (61)
    goto L2; // [49] 168
    // SubProg NewDoubleSym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 46783 op: 159
    // SubProg NewDoubleSym pc: 52 op: STARTLINE (58)

    /** symtab.e:354			if equal(d, SymTab[tp][S_OBJ]) then*/
    // SubProg NewDoubleSym pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24439 = (object)*(((s1_ptr)_2)->base + _tp_46788);
    // SubProg NewDoubleSym pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24439);
    _24440 = (object)*(((s1_ptr)_2)->base + 1);
    _24439 = NOVALUE;
    // SubProg NewDoubleSym pc: 66 op: EQUAL (153)
    if (_d_46785 == _24440)
    _24441 = 1;
    else if (IS_ATOM_INT(_d_46785) && IS_ATOM_INT(_24440))
    _24441 = 0;
    else
    _24441 = (compare(_d_46785, _24440) == 0);
    _24440 = NOVALUE;
    // SubProg NewDoubleSym pc: 70 op: IF (20)
    if (_24441 == 0)
    {
        _24441 = NOVALUE;
        goto L4; // [70] 140
    }
    else{
        _24441 = NOVALUE;
    }
    // SubProg NewDoubleSym pc: 73 op: STARTLINE (58)

    /** symtab.e:356				if tp != literal_init then*/
    // SubProg NewDoubleSym pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 77 op: NOTEQ_IFW (105)
    if (_tp_46788 == _53literal_init_46332)
    goto L5; // [77] 133
    // SubProg NewDoubleSym pc: 81 op: STARTLINE (58)

    /** symtab.e:358					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46789 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24445 = (object)*(((s1_ptr)_2)->base + _tp_46788);
    // SubProg NewDoubleSym pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 100 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24445);
    _24446 = (object)*(((s1_ptr)_2)->base + 2);
    _24445 = NOVALUE;
    // SubProg NewDoubleSym pc: 104 op: PASSIGN_SUBS (162)
    Ref(_24446);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24446;
    if( _1 != _24446 ){
        DeRef(_1);
    }
    _24446 = NOVALUE;
    _24443 = NOVALUE;
    // SubProg NewDoubleSym pc: 108 op: STARTLINE (58)

    /** symtab.e:359					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 112 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46788 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 117 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 121 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _53literal_init_46332;
    DeRef(_1);
    _24447 = NOVALUE;
    // SubProg NewDoubleSym pc: 125 op: STARTLINE (58)

    /** symtab.e:360					literal_init = tp*/
    // SubProg NewDoubleSym pc: 127 op: ASSIGN (18)
    _53literal_init_46332 = _tp_46788;
    // SubProg NewDoubleSym pc: 130 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46783 op: 159
    // SubProg NewDoubleSym pc: 133 op: STARTLINE (58)

    /** symtab.e:362				return tp*/
    // SubProg NewDoubleSym pc: 135 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46785
    DeRef(_d_46785);

// block var p_46787

// block var prev_46789

// block var search_count_46790
    return _tp_46788;
    // SubProg NewDoubleSym pc: 139 op: NOP1 (159)
L4: // addr: 140 pc: 139 sub: 46783 op: 159
    // SubProg NewDoubleSym pc: 140 op: STARTLINE (58)

    /** symtab.e:364			prev = tp*/
    // SubProg NewDoubleSym pc: 142 op: ASSIGN (18)
    _prev_46789 = _tp_46788;
    // SubProg NewDoubleSym pc: 145 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 147 op: STARTLINE (58)

    /** symtab.e:365			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24449 = (object)*(((s1_ptr)_2)->base + _tp_46788);
    // SubProg NewDoubleSym pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24449);
    _tp_46788 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46788)){
        _tp_46788 = (object)DBL_PTR(_tp_46788)->dbl;
    }
    _24449 = NOVALUE;
    // SubProg NewDoubleSym pc: 163 op: STARTLINE (58)

    /** symtab.e:366		end while*/
    // SubProg NewDoubleSym pc: 165 op: ENDWHILE (22)
    goto L1; // [165] 29
    // SubProg NewDoubleSym pc: 167 op: NOP1 (159)
L2: // addr: 168 pc: 167 sub: 46783 op: 159
    // SubProg NewDoubleSym pc: 168 op: STARTLINE (58)

    /** symtab.e:368		p = tmp_alloc()*/
    // SubProg NewDoubleSym pc: 170 op: PROC (27)
    _p_46787 = _53tmp_alloc();
    // SubProg NewDoubleSym pc: 173 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46787)) {
        _1 = (object)(DBL_PTR(_p_46787)->dbl);
        DeRefDS(_p_46787);
        _p_46787 = _1;
    }
    // SubProg NewDoubleSym pc: 175 op: STARTLINE (58)

    /** symtab.e:369		SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewDoubleSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 179 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46787 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 184 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 188 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24452 = NOVALUE;
    // SubProg NewDoubleSym pc: 192 op: STARTLINE (58)

    /** symtab.e:370		SymTab[p][S_OBJ] = d*/
    // SubProg NewDoubleSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 196 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46787 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 203 op: PASSIGN_SUBS (162)
    Ref(_d_46785);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _d_46785;
    DeRef(_1);
    _24454 = NOVALUE;
    // SubProg NewDoubleSym pc: 207 op: STARTLINE (58)

    /** symtab.e:372		if TRANSLATE then*/
    // SubProg NewDoubleSym pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 211 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L6; // [211] 285
    }
    else{
    }
    // SubProg NewDoubleSym pc: 214 op: STARTLINE (58)

    /** symtab.e:373			SymTab[p][S_MODE] = M_TEMP  -- override CONSTANT for compile*/
    // SubProg NewDoubleSym pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 218 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46787 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 223 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 225 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 227 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24456 = NOVALUE;
    // SubProg NewDoubleSym pc: 231 op: STARTLINE (58)

    /** symtab.e:374			SymTab[p][S_GTYPE] = TYPE_DOUBLE*/
    // SubProg NewDoubleSym pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 235 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46787 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 244 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24458 = NOVALUE;
    // SubProg NewDoubleSym pc: 248 op: STARTLINE (58)

    /** symtab.e:375			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24460 = (object)*(((s1_ptr)_2)->base + _p_46787);
    // SubProg NewDoubleSym pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24460);
    _24461 = (object)*(((s1_ptr)_2)->base + 34);
    _24460 = NOVALUE;
    // SubProg NewDoubleSym pc: 262 op: PROC (27)
    RefDS(_24402);
    Ref(_24461);
    _54c_printf(_24402, _24461);
    _24461 = NOVALUE;
    // SubProg NewDoubleSym pc: 266 op: STARTLINE (58)

    /** symtab.e:376			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 270 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24462 = (object)*(((s1_ptr)_2)->base + _p_46787);
    // SubProg NewDoubleSym pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 276 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24462);
    _24463 = (object)*(((s1_ptr)_2)->base + 34);
    _24462 = NOVALUE;
    // SubProg NewDoubleSym pc: 280 op: PROC (27)
    RefDS(_24405);
    Ref(_24463);
    _54c_hprintf(_24405, _24463);
    _24463 = NOVALUE;
    // SubProg NewDoubleSym pc: 284 op: NOP1 (159)
L6: // addr: 285 pc: 284 sub: 46783 op: 159
    // SubProg NewDoubleSym pc: 285 op: STARTLINE (58)

    /** symtab.e:379		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 289 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46787 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 294 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 296 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 298 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _53literal_init_46332;
    DeRef(_1);
    _24464 = NOVALUE;
    // SubProg NewDoubleSym pc: 302 op: STARTLINE (58)

    /** symtab.e:380		literal_init = p*/
    // SubProg NewDoubleSym pc: 304 op: ASSIGN (18)
    _53literal_init_46332 = _p_46787;
    // SubProg NewDoubleSym pc: 307 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 309 op: STARTLINE (58)

    /** symtab.e:381		return p*/
    // SubProg NewDoubleSym pc: 311 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46785
    DeRef(_d_46785);

// block var tp_46788

// block var prev_46789

// block var search_count_46790
    return _p_46787;
    // SubProg NewDoubleSym pc: 315 op: BADRETURNF (43)
    ;
}


object _53NewTempSym(object _inlining_46859)
{
    object _p_46861 = NOVALUE;
    object _q_46862 = NOVALUE;
// skipping _24514  name type: 0
    object _24513 = NOVALUE; // 46972 24513
// skipping _24512  name type: 0
    object _24511 = NOVALUE; // 46967 24511
// skipping _24510  name type: 0
    object _24509 = NOVALUE; // 46962 24509
// skipping _24508  name type: 0
    object _24507 = NOVALUE; // 46957 24507
// skipping _24506  name type: 0
    object _24505 = NOVALUE; // 46952 24505
// skipping _24504  name type: 0
    object _24503 = NOVALUE; // 46946 24503
    object _24502 = NOVALUE; // 46943 24502
    object _24501 = NOVALUE; // 46941 24501
// skipping _24500  name type: 0
    object _24499 = NOVALUE; // 46936 24499
    object _24498 = NOVALUE; // 46934 24498
    object _24497 = NOVALUE; // 46932 24497
// skipping _24496  name type: 0
    object _24495 = NOVALUE; // 46928 24495
// skipping _24494  name type: 0
    object _24493 = NOVALUE; // 46923 24493
// skipping _24492  name type: 0
// skipping _24491  name type: 0
    object _24490 = NOVALUE; // 46917 24490
    object _24489 = NOVALUE; // 46913 24489
    object _24488 = NOVALUE; // 46912 24488
// skipping _24487  name type: 0
    object _24486 = NOVALUE; // 46909 24486
// skipping _24485  name type: 0
    object _24484 = NOVALUE; // 46903 24484
    object _24483 = NOVALUE; // 46900 24483
    object _24482 = NOVALUE; // 46898 24482
// skipping _24481  name type: 0
    object _24480 = NOVALUE; // 46893 24480
// skipping _24479  name type: 0
    object _24478 = NOVALUE; // 46888 24478
// skipping _24477  name type: 0
// skipping _24476  name type: 0
// skipping _24475  name type: 0
// skipping _24474  name type: 0
    object _24473 = NOVALUE; // 46879 24473
    object _24472 = NOVALUE; // 46877 24472
    object _24471 = NOVALUE; // 46875 24471
    object _24470 = NOVALUE; // 46873 24470
    object _24469 = NOVALUE; // 46871 24469
    object _24468 = NOVALUE; // 46870 24468
// skipping _24467  name type: 0
    object _24466 = NOVALUE; // 46866 24466
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewTempSym pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 3 op: STARTLINE (58)

    /** symtab.e:392		if inlining then*/
    // SubProg NewTempSym pc: 5 op: IF (20)
    if (_inlining_46859 == 0)
    {
        goto L1; // [5] 85
    }
    else{
    }
    // SubProg NewTempSym pc: 8 op: STARTLINE (58)

    /** symtab.e:393			p = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24466 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg NewTempSym pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24466);
    if (!IS_ATOM_INT(_5S_TEMPS_12177)){
        _p_46861 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
    }
    else{
        _p_46861 = (object)*(((s1_ptr)_2)->base + _5S_TEMPS_12177);
    }
    if (!IS_ATOM_INT(_p_46861)){
        _p_46861 = (object)DBL_PTR(_p_46861)->dbl;
    }
    _24466 = NOVALUE;
    // SubProg NewTempSym pc: 26 op: STARTLINE (58)

    /** symtab.e:394			while p != 0 and SymTab[p][S_SCOPE] != FREE do*/
    // SubProg NewTempSym pc: 28 op: NOP2 (110)
    // SubProg NewTempSym pc: 30 op: NOPWHILE (158)
L2: // addr: 31 pc: 30 sub: 46857 op: 158
    // SubProg NewTempSym pc: 31 op: NOTEQ (4)
    _24468 = (_p_46861 != 0);
    // SubProg NewTempSym pc: 35 op: SC1_AND_IF (146)
    if (_24468 == 0) {
        goto L3; // [35] 93
    }
    // SubProg NewTempSym pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24470 = (object)*(((s1_ptr)_2)->base + _p_46861);
    // SubProg NewTempSym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24470);
    _24471 = (object)*(((s1_ptr)_2)->base + 4);
    _24470 = NOVALUE;
    // SubProg NewTempSym pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_24471)) {
        _24472 = (_24471 != 0);
    }
    else {
        _24472 = binary_op(NOTEQ, _24471, 0);
    }
    _24471 = NOVALUE;
    // SubProg NewTempSym pc: 57 op: NOP1 (159)
    // SubProg NewTempSym pc: 58 op: WHILE (47)
    if (_24472 <= 0) {
        if (_24472 == 0) {
            DeRef(_24472);
            _24472 = NOVALUE;
            goto L3; // [58] 93
        }
        else {
            if (!IS_ATOM_INT(_24472) && DBL_PTR(_24472)->dbl == 0.0){
                DeRef(_24472);
                _24472 = NOVALUE;
                goto L3; // [58] 93
            }
            DeRef(_24472);
            _24472 = NOVALUE;
        }
    }
    DeRef(_24472);
    _24472 = NOVALUE;
    // SubProg NewTempSym pc: 61 op: STARTLINE (58)

    /** symtab.e:395				p = SymTab[p][S_NEXT]*/
    // SubProg NewTempSym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24473 = (object)*(((s1_ptr)_2)->base + _p_46861);
    // SubProg NewTempSym pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24473);
    _p_46861 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_46861)){
        _p_46861 = (object)DBL_PTR(_p_46861)->dbl;
    }
    _24473 = NOVALUE;
    // SubProg NewTempSym pc: 77 op: STARTLINE (58)

    /** symtab.e:396			end while*/
    // SubProg NewTempSym pc: 79 op: ENDWHILE (22)
    goto L2; // [79] 31
    // SubProg NewTempSym pc: 81 op: NOP1 (159)
    // SubProg NewTempSym pc: 82 op: ELSE (23)
    goto L3; // [82] 93
    // SubProg NewTempSym pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 46857 op: 159
    // SubProg NewTempSym pc: 85 op: STARTLINE (58)

    /** symtab.e:398			p = 0*/
    // SubProg NewTempSym pc: 87 op: ASSIGN (18)
    _p_46861 = 0;
    // SubProg NewTempSym pc: 90 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 46857 op: 159
    // SubProg NewTempSym pc: 93 op: STARTLINE (58)

    /** symtab.e:401		if p = 0 then*/
    // SubProg NewTempSym pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewTempSym pc: 97 op: EQUALS_IFW (104)
    if (_p_46861 != 0)
    goto L4; // [97] 213
    // SubProg NewTempSym pc: 101 op: STARTLINE (58)

    /** symtab.e:403			temps_allocated += 1*/
    // SubProg NewTempSym pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 105 op: PLUS1_I (117)
    _53temps_allocated_46856 = _53temps_allocated_46856 + 1;
    // SubProg NewTempSym pc: 109 op: STARTLINE (58)

    /** symtab.e:404			p = tmp_alloc()*/
    // SubProg NewTempSym pc: 111 op: PROC (27)
    _p_46861 = _53tmp_alloc();
    // SubProg NewTempSym pc: 114 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46861)) {
        _1 = (object)(DBL_PTR(_p_46861)->dbl);
        DeRefDS(_p_46861);
        _p_46861 = _1;
    }
    // SubProg NewTempSym pc: 116 op: STARTLINE (58)

    /** symtab.e:405			SymTab[p][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 125 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 127 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 129 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24478 = NOVALUE;
    // SubProg NewTempSym pc: 133 op: STARTLINE (58)

    /** symtab.e:406			SymTab[p][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 137 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24482 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg NewTempSym pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24482);
    if (!IS_ATOM_INT(_5S_TEMPS_12177)){
        _24483 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
    }
    else{
        _24483 = (object)*(((s1_ptr)_2)->base + _5S_TEMPS_12177);
    }
    _24482 = NOVALUE;
    // SubProg NewTempSym pc: 158 op: PASSIGN_SUBS (162)
    Ref(_24483);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24483;
    if( _1 != _24483 ){
        DeRef(_1);
    }
    _24483 = NOVALUE;
    _24480 = NOVALUE;
    // SubProg NewTempSym pc: 162 op: STARTLINE (58)

    /** symtab.e:407			SymTab[CurrentSub][S_TEMPS] = p*/
    // SubProg NewTempSym pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 168 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5CurrentSub_12485 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 175 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_TEMPS_12177))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_TEMPS_12177);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_46861;
    DeRef(_1);
    _24484 = NOVALUE;
    // SubProg NewTempSym pc: 179 op: STARTLINE (58)

    /** symtab.e:409			if inlining then*/
    // SubProg NewTempSym pc: 181 op: IF (20)
    if (_inlining_46859 == 0)
    {
        goto L5; // [181] 343
    }
    else{
    }
    // SubProg NewTempSym pc: 184 op: STARTLINE (58)

    /** symtab.e:410				SymTab[CurrentSub][S_STACK_SPACE] += 1*/
    // SubProg NewTempSym pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 188 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 190 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5CurrentSub_12485 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 197 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192)){
        _24488 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    }
    else{
        _24488 = (object)*(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    }
    _24486 = NOVALUE;
    // SubProg NewTempSym pc: 201 op: PLUS1 (93)
    if (IS_ATOM_INT(_24488)) {
        _24489 = _24488 + 1;
        if (_24489 > MAXINT){
            _24489 = NewDouble((eudouble)_24489);
        }
    }
    else
    _24489 = binary_op(PLUS, 1, _24488);
    _24488 = NOVALUE;
    // SubProg NewTempSym pc: 205 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_STACK_SPACE_12192))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_STACK_SPACE_12192)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_STACK_SPACE_12192);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24489;
    if( _1 != _24489 ){
        DeRef(_1);
    }
    _24489 = NOVALUE;
    _24486 = NOVALUE;
    // SubProg NewTempSym pc: 209 op: NOP1 (159)
    // SubProg NewTempSym pc: 210 op: ELSE (23)
    goto L5; // [210] 343
    // SubProg NewTempSym pc: 212 op: NOP1 (159)
L4: // addr: 213 pc: 212 sub: 46857 op: 159
    // SubProg NewTempSym pc: 213 op: STARTLINE (58)

    /** symtab.e:413		elsif TRANSLATE then*/
    // SubProg NewTempSym pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 217 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L6; // [217] 342
    }
    else{
    }
    // SubProg NewTempSym pc: 220 op: STARTLINE (58)

    /** symtab.e:418			SymTab[p][S_SCOPE] = DELETED*/
    // SubProg NewTempSym pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 229 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 231 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 233 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24490 = NOVALUE;
    // SubProg NewTempSym pc: 237 op: STARTLINE (58)

    /** symtab.e:420			q = tmp_alloc()*/
    // SubProg NewTempSym pc: 239 op: PROC (27)
    _q_46862 = _53tmp_alloc();
    // SubProg NewTempSym pc: 242 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_q_46862)) {
        _1 = (object)(DBL_PTR(_q_46862)->dbl);
        DeRefDS(_q_46862);
        _q_46862 = _1;
    }
    // SubProg NewTempSym pc: 244 op: STARTLINE (58)

    /** symtab.e:421			SymTab[q][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 248 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46862 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 255 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 257 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24493 = NOVALUE;
    // SubProg NewTempSym pc: 261 op: STARTLINE (58)

    /** symtab.e:422			SymTab[q][S_TEMP_NAME] = SymTab[p][S_TEMP_NAME]*/
    // SubProg NewTempSym pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 265 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46862 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24497 = (object)*(((s1_ptr)_2)->base + _p_46861);
    // SubProg NewTempSym pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 280 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24497);
    _24498 = (object)*(((s1_ptr)_2)->base + 34);
    _24497 = NOVALUE;
    // SubProg NewTempSym pc: 284 op: PASSIGN_SUBS (162)
    Ref(_24498);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24498;
    if( _1 != _24498 ){
        DeRef(_1);
    }
    _24498 = NOVALUE;
    _24495 = NOVALUE;
    // SubProg NewTempSym pc: 288 op: STARTLINE (58)

    /** symtab.e:423			SymTab[q][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 292 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46862 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 303 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24501 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg NewTempSym pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 309 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24501);
    if (!IS_ATOM_INT(_5S_TEMPS_12177)){
        _24502 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
    }
    else{
        _24502 = (object)*(((s1_ptr)_2)->base + _5S_TEMPS_12177);
    }
    _24501 = NOVALUE;
    // SubProg NewTempSym pc: 313 op: PASSIGN_SUBS (162)
    Ref(_24502);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24502;
    if( _1 != _24502 ){
        DeRef(_1);
    }
    _24502 = NOVALUE;
    _24499 = NOVALUE;
    // SubProg NewTempSym pc: 317 op: STARTLINE (58)

    /** symtab.e:424			SymTab[CurrentSub][S_TEMPS] = q*/
    // SubProg NewTempSym pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 323 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5CurrentSub_12485 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 328 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 330 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_5S_TEMPS_12177))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TEMPS_12177)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _5S_TEMPS_12177);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _q_46862;
    DeRef(_1);
    _24503 = NOVALUE;
    // SubProg NewTempSym pc: 334 op: STARTLINE (58)

    /** symtab.e:425			p = q*/
    // SubProg NewTempSym pc: 336 op: ASSIGN (18)
    _p_46861 = _q_46862;
    // SubProg NewTempSym pc: 339 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 341 op: NOP1 (159)
L6: // addr: 342 pc: 341 sub: 46857 op: 159
    // SubProg NewTempSym pc: 342 op: NOP1 (159)
L5: // addr: 343 pc: 342 sub: 46857 op: 159
    // SubProg NewTempSym pc: 343 op: STARTLINE (58)

    /** symtab.e:428		if TRANSLATE then*/
    // SubProg NewTempSym pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 347 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L7; // [347] 385
    }
    else{
    }
    // SubProg NewTempSym pc: 350 op: STARTLINE (58)

    /** symtab.e:429			SymTab[p][S_GTYPE] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 354 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 359 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 363 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _24505 = NOVALUE;
    // SubProg NewTempSym pc: 367 op: STARTLINE (58)

    /** symtab.e:430			SymTab[p][S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 371 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 376 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 378 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 380 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _24507 = NOVALUE;
    // SubProg NewTempSym pc: 384 op: NOP1 (159)
L7: // addr: 385 pc: 384 sub: 46857 op: 159
    // SubProg NewTempSym pc: 385 op: STARTLINE (58)

    /** symtab.e:433		SymTab[p][S_OBJ] = NOVALUE*/
    // SubProg NewTempSym pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 394 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 398 op: PASSIGN_SUBS (162)
    Ref(_5NOVALUE_12331);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _5NOVALUE_12331;
    DeRef(_1);
    _24509 = NOVALUE;
    // SubProg NewTempSym pc: 402 op: STARTLINE (58)

    /** symtab.e:434		SymTab[p][S_USAGE] = T_UNKNOWN*/
    // SubProg NewTempSym pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 406 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 411 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 413 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 415 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _24511 = NOVALUE;
    // SubProg NewTempSym pc: 419 op: STARTLINE (58)

    /** symtab.e:435		SymTab[p][S_SCOPE] = IN_USE*/
    // SubProg NewTempSym pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 423 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46861 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 430 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 432 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24513 = NOVALUE;
    // SubProg NewTempSym pc: 436 op: STARTLINE (58)

    /** symtab.e:437		return p*/
    // SubProg NewTempSym pc: 438 op: RETURNF (28)

// Exiting block BLOCK: NewTempSym

// block var inlining_46859

// block var q_46862
    DeRef(_24468);
    _24468 = NOVALUE;
    return _p_46861;
    // SubProg NewTempSym pc: 442 op: BADRETURNF (43)
    ;
}


void _53InitSymTab()
{
    object _hashval_46978 = NOVALUE;
    object _len_46979 = NOVALUE;
    object _s_46981 = NOVALUE;
    object _st_index_46982 = NOVALUE;
    object _kname_46983 = NOVALUE;
    object _fixups_46984 = NOVALUE;
    object _si_47123 = NOVALUE;
    object _sj_47124 = NOVALUE;
    object _25099 = NOVALUE; // 48366 25099
    object _25098 = NOVALUE; // 48365 25098
// skipping _24629  name type: 0
    object _24628 = NOVALUE; // 47206 24628
    object _24627 = NOVALUE; // 47205 24627
    object _24626 = NOVALUE; // 47203 24626
    object _24625 = NOVALUE; // 47202 24625
    object _24624 = NOVALUE; // 47201 24624
// skipping _24623  name type: 0
    object _24622 = NOVALUE; // 47198 24622
    object _24621 = NOVALUE; // 47195 24621
    object _24620 = NOVALUE; // 47194 24620
    object _24619 = NOVALUE; // 47192 24619
// skipping _24618  name type: 0
    object _24617 = NOVALUE; // 47186 24617
// skipping _24616  name type: 0
    object _24615 = NOVALUE; // 47182 24615
// skipping _24614  name type: 0
    object _24613 = NOVALUE; // 47179 24613
    object _24612 = NOVALUE; // 47177 24612
// skipping _24611  name type: 0
    object _24610 = NOVALUE; // 47172 24610
// skipping _24609  name type: 0
    object _24608 = NOVALUE; // 47168 24608
// skipping _24607  name type: 0
    object _24606 = NOVALUE; // 47165 24606
    object _24605 = NOVALUE; // 47163 24605
// skipping _24604  name type: 0
    object _24603 = NOVALUE; // 47160 24603
    object _24602 = NOVALUE; // 47158 24602
    object _24601 = NOVALUE; // 47157 24601
    object _24600 = NOVALUE; // 47156 24600
    object _24599 = NOVALUE; // 47154 24599
    object _24596 = NOVALUE; // 47147 24596
    object _24595 = NOVALUE; // 47145 24595
    object _24594 = NOVALUE; // 47144 24594
// skipping _24593  name type: 0
    object _24592 = NOVALUE; // 47140 24592
    object _24591 = NOVALUE; // 47139 24591
    object _24590 = NOVALUE; // 47137 24590
// skipping _24589  name type: 0
    object _24588 = NOVALUE; // 47132 24588
    object _24587 = NOVALUE; // 47131 24587
    object _24586 = NOVALUE; // 47129 24586
// skipping _24585  name type: 0
// skipping _24584  name type: 0
    object _24583 = NOVALUE; // 47117 24583
// skipping _24582  name type: 0
    object _24581 = NOVALUE; // 47113 24581
// skipping _24580  name type: 0
    object _24579 = NOVALUE; // 47110 24579
    object _24578 = NOVALUE; // 47108 24578
// skipping _24577  name type: 0
// skipping _24576  name type: 0
    object _24575 = NOVALUE; // 47102 24575
    object _24574 = NOVALUE; // 47100 24574
    object _24572 = NOVALUE; // 47097 24572
    object _24570 = NOVALUE; // 47094 24570
    object _24568 = NOVALUE; // 47091 24568
// skipping _24567  name type: 0
    object _24566 = NOVALUE; // 47087 24566
    object _24565 = NOVALUE; // 47085 24565
    object _24564 = NOVALUE; // 47081 24564
// skipping _24562  name type: 0
    object _24561 = NOVALUE; // 47076 24561
    object _24560 = NOVALUE; // 47074 24560
// skipping _24559  name type: 0
    object _24558 = NOVALUE; // 47070 24558
    object _24557 = NOVALUE; // 47068 24557
// skipping _24556  name type: 0
    object _24555 = NOVALUE; // 47064 24555
    object _24554 = NOVALUE; // 47062 24554
    object _24553 = NOVALUE; // 47060 24553
// skipping _24552  name type: 0
    object _24551 = NOVALUE; // 47056 24551
// skipping _24550  name type: 0
    object _24549 = NOVALUE; // 47052 24549
    object _24548 = NOVALUE; // 47051 24548
// skipping _24547  name type: 0
    object _24546 = NOVALUE; // 47046 24546
    object _24545 = NOVALUE; // 47044 24545
    object _24544 = NOVALUE; // 47042 24544
// skipping _24543  name type: 0
    object _24542 = NOVALUE; // 47038 24542
    object _24541 = NOVALUE; // 47036 24541
    object _24540 = NOVALUE; // 47034 24540
// skipping _24539  name type: 0
    object _24538 = NOVALUE; // 47030 24538
    object _24537 = NOVALUE; // 47028 24537
    object _24536 = NOVALUE; // 47026 24536
// skipping _24535  name type: 0
    object _24534 = NOVALUE; // 47022 24534
    object _24533 = NOVALUE; // 47021 24533
    object _24532 = NOVALUE; // 47019 24532
    object _24531 = NOVALUE; // 47018 24531
    object _24530 = NOVALUE; // 47017 24530
    object _24529 = NOVALUE; // 47016 24529
    object _24528 = NOVALUE; // 47013 24528
    object _24527 = NOVALUE; // 47010 24527
    object _24526 = NOVALUE; // 47008 24526
    object _24525 = NOVALUE; // 47006 24525
// skipping _24524  name type: 0
    object _24523 = NOVALUE; // 47002 24523
    object _24522 = NOVALUE; // 47000 24522
    object _24521 = NOVALUE; // 46998 24521
    object _24520 = NOVALUE; // 46996 24520
// skipping _24519  name type: 0
// skipping _24518  name type: 0
// skipping _24517  name type: 0
    object _24516 = NOVALUE; // 46990 24516
    object _24515 = NOVALUE; // 46988 24515
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg InitSymTab pc: 1 op: STARTLINE (58)

    /** symtab.e:445		sequence kname, fixups = {}*/
    // SubProg InitSymTab pc: 3 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_fixups_46984);
    _fixups_46984 = _21958;
    // SubProg InitSymTab pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg InitSymTab pc: 8 op: STARTLINE (58)

    /** symtab.e:447		for k = 1 to length(keylist) do*/
    // SubProg InitSymTab pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_62keylist_22772)){
            _24515 = SEQ_PTR(_62keylist_22772)->length;
    }
    else {
        _24515 = 1;
    }
    // SubProg InitSymTab pc: 15 op: FOR_I (125)
    {
        object _k_46986;
        _k_46986 = 1;
L1: // addr: 22 pc: 15 sub: 46976 op: 125
        if (_k_46986 > _24515){
            goto L2; // [15] 560
        }
        // SubProg InitSymTab pc: 22 op: STARTLINE (58)

        /** symtab.e:448			kname = keylist[k][K_NAME]*/
        // SubProg InitSymTab pc: 24 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 26 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24516 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 30 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 32 op: RHS_SUBS_CHECK (92)
        DeRef(_kname_46983);
        _2 = (object)SEQ_PTR(_24516);
        _kname_46983 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_kname_46983);
        _24516 = NOVALUE;
        // SubProg InitSymTab pc: 36 op: SEQUENCE_CHECK (97)
        // SubProg InitSymTab pc: 38 op: STARTLINE (58)

        /** symtab.e:449			len = length(kname)*/
        // SubProg InitSymTab pc: 40 op: LENGTH (42)
        if (IS_SEQUENCE(_kname_46983)){
                _len_46979 = SEQ_PTR(_kname_46983)->length;
        }
        else {
            _len_46979 = 1;
        }
        // SubProg InitSymTab pc: 43 op: STARTLINE (58)

        /** symtab.e:450			hashval = hashfn(kname)*/
        // SubProg InitSymTab pc: 45 op: PROC (27)
        RefDS(_kname_46983);
        _hashval_46978 = _53hashfn(_kname_46983);
        // SubProg InitSymTab pc: 49 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_hashval_46978)) {
            _1 = (object)(DBL_PTR(_hashval_46978)->dbl);
            DeRefDS(_hashval_46978);
            _hashval_46978 = _1;
        }
        // SubProg InitSymTab pc: 51 op: STARTLINE (58)

        /** symtab.e:451			st_index = NewEntry(kname,*/
        // SubProg InitSymTab pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24520 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 61 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24520);
        _24521 = (object)*(((s1_ptr)_2)->base + 2);
        _24520 = NOVALUE;
        // SubProg InitSymTab pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24522 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 73 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24522);
        _24523 = (object)*(((s1_ptr)_2)->base + 3);
        _24522 = NOVALUE;
        // SubProg InitSymTab pc: 77 op: PROC (27)
        RefDS(_kname_46983);
        Ref(_24521);
        Ref(_24523);
        _st_index_46982 = _53NewEntry(_kname_46983, 0, _24521, _24523, _hashval_46978, 0, 0);
        _24521 = NOVALUE;
        _24523 = NOVALUE;
        // SubProg InitSymTab pc: 87 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_st_index_46982)) {
            _1 = (object)(DBL_PTR(_st_index_46982)->dbl);
            DeRefDS(_st_index_46982);
            _st_index_46982 = _1;
        }
        // SubProg InitSymTab pc: 89 op: STARTLINE (58)

        /** symtab.e:456			if find(keylist[k][K_TOKEN], RTN_TOKS) then*/
        // SubProg InitSymTab pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24525 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 99 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24525);
        _24526 = (object)*(((s1_ptr)_2)->base + 3);
        _24525 = NOVALUE;
        // SubProg InitSymTab pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 105 op: FIND_FROM (176)
        _24527 = find_from(_24526, _29RTN_TOKS_12080, 1);
        _24526 = NOVALUE;
        // SubProg InitSymTab pc: 110 op: IF (20)
        if (_24527 == 0)
        {
            _24527 = NOVALUE;
            goto L3; // [110] 325
        }
        else{
            _24527 = NOVALUE;
        }
        // SubProg InitSymTab pc: 113 op: STARTLINE (58)

        /** symtab.e:457				SymTab[st_index] = SymTab[st_index] &*/
        // SubProg InitSymTab pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 117 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 119 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24528 = (object)*(((s1_ptr)_2)->base + _st_index_46982);
        // SubProg InitSymTab pc: 123 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 127 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24529 = (object)*(((s1_ptr)_2)->base + _st_index_46982);
        // SubProg InitSymTab pc: 131 op: LENGTH (42)
        if (IS_SEQUENCE(_24529)){
                _24530 = SEQ_PTR(_24529)->length;
        }
        else {
            _24530 = 1;
        }
        _24529 = NOVALUE;
        // SubProg InitSymTab pc: 134 op: MINUS (10)
        _24531 = _5SIZEOF_ROUTINE_ENTRY_12258 - _24530;
        _24530 = NOVALUE;
        // SubProg InitSymTab pc: 138 op: REPEAT (32)
        _24532 = Repeat(0, _24531);
        _24531 = NOVALUE;
        // SubProg InitSymTab pc: 142 op: CONCAT (15)
        if (IS_SEQUENCE(_24528) && IS_ATOM(_24532)) {
        }
        else if (IS_ATOM(_24528) && IS_SEQUENCE(_24532)) {
            Ref(_24528);
            Prepend(&_24533, _24532, _24528);
        }
        else {
            Concat((object_ptr)&_24533, _24528, _24532);
            _24528 = NOVALUE;
        }
        _24528 = NOVALUE;
        DeRefDS(_24532);
        _24532 = NOVALUE;
        // SubProg InitSymTab pc: 146 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _st_index_46982);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24533;
        if( _1 != _24533 ){
            DeRef(_1);
        }
        _24533 = NOVALUE;
        // SubProg InitSymTab pc: 150 op: STARTLINE (58)

        /** symtab.e:460				SymTab[st_index][S_NUM_ARGS] = keylist[k][K_NUM_ARGS]*/
        // SubProg InitSymTab pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 154 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 159 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 161 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 163 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24536 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 169 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24536);
        _24537 = (object)*(((s1_ptr)_2)->base + 5);
        _24536 = NOVALUE;
        // SubProg InitSymTab pc: 173 op: PASSIGN_SUBS (162)
        Ref(_24537);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_5S_NUM_ARGS_12183))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24537;
        if( _1 != _24537 ){
            DeRef(_1);
        }
        _24537 = NOVALUE;
        _24534 = NOVALUE;
        // SubProg InitSymTab pc: 177 op: STARTLINE (58)

        /** symtab.e:461				SymTab[st_index][S_OPCODE] = keylist[k][K_OPCODE]*/
        // SubProg InitSymTab pc: 179 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 181 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 186 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 188 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 190 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24540 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 196 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24540);
        _24541 = (object)*(((s1_ptr)_2)->base + 4);
        _24540 = NOVALUE;
        // SubProg InitSymTab pc: 200 op: PASSIGN_SUBS (162)
        Ref(_24541);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 21);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24541;
        if( _1 != _24541 ){
            DeRef(_1);
        }
        _24541 = NOVALUE;
        _24538 = NOVALUE;
        // SubProg InitSymTab pc: 204 op: STARTLINE (58)

        /** symtab.e:462				SymTab[st_index][S_EFFECT] = keylist[k][K_EFFECT]*/
        // SubProg InitSymTab pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 208 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 215 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 217 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24544 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 221 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 223 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24544);
        _24545 = (object)*(((s1_ptr)_2)->base + 6);
        _24544 = NOVALUE;
        // SubProg InitSymTab pc: 227 op: PASSIGN_SUBS (162)
        Ref(_24545);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 23);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24545;
        if( _1 != _24545 ){
            DeRef(_1);
        }
        _24545 = NOVALUE;
        _24542 = NOVALUE;
        // SubProg InitSymTab pc: 231 op: STARTLINE (58)

        /** symtab.e:463				SymTab[st_index][S_REFLIST] = {}*/
        // SubProg InitSymTab pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 235 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 240 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 242 op: PASSIGN_SUBS (162)
        RefDS(_21958);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 24);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _21958;
        DeRef(_1);
        _24546 = NOVALUE;
        // SubProg InitSymTab pc: 246 op: STARTLINE (58)

        /** symtab.e:464				if length(keylist[k]) > K_EFFECT then*/
        // SubProg InitSymTab pc: 248 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 250 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24548 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 254 op: LENGTH (42)
        if (IS_SEQUENCE(_24548)){
                _24549 = SEQ_PTR(_24548)->length;
        }
        else {
            _24549 = 1;
        }
        _24548 = NOVALUE;
        // SubProg InitSymTab pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 259 op: GREATER_IFW (107)
        if (_24549 <= 6)
        goto L4; // [259] 324
        // SubProg InitSymTab pc: 263 op: STARTLINE (58)

        /** symtab.e:465				    SymTab[st_index][S_CODE] = keylist[k][K_CODE]*/
        // SubProg InitSymTab pc: 265 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 267 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 272 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 274 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 276 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24553 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 282 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24553);
        _24554 = (object)*(((s1_ptr)_2)->base + 7);
        _24553 = NOVALUE;
        // SubProg InitSymTab pc: 286 op: PASSIGN_SUBS (162)
        Ref(_24554);
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
        *(intptr_t *)_2 = _24554;
        if( _1 != _24554 ){
            DeRef(_1);
        }
        _24554 = NOVALUE;
        _24551 = NOVALUE;
        // SubProg InitSymTab pc: 290 op: STARTLINE (58)

        /** symtab.e:466				    SymTab[st_index][S_DEF_ARGS] = keylist[k][K_DEF_ARGS]*/
        // SubProg InitSymTab pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 294 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 299 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 301 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 303 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24557 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 307 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24557);
        _24558 = (object)*(((s1_ptr)_2)->base + 8);
        _24557 = NOVALUE;
        // SubProg InitSymTab pc: 313 op: PASSIGN_SUBS (162)
        Ref(_24558);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 28);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24558;
        if( _1 != _24558 ){
            DeRef(_1);
        }
        _24558 = NOVALUE;
        _24555 = NOVALUE;
        // SubProg InitSymTab pc: 317 op: STARTLINE (58)

        /** symtab.e:467				    fixups &= st_index*/
        // SubProg InitSymTab pc: 319 op: CONCAT (15)
        Append(&_fixups_46984, _fixups_46984, _st_index_46982);
        // SubProg InitSymTab pc: 323 op: NOP1 (159)
L4: // addr: 324 pc: 323 sub: 46976 op: 159
        // SubProg InitSymTab pc: 324 op: NOP1 (159)
L3: // addr: 325 pc: 324 sub: 46976 op: 159
        // SubProg InitSymTab pc: 325 op: STARTLINE (58)

        /** symtab.e:470			if keylist[k][K_TOKEN] = PROC then*/
        // SubProg InitSymTab pc: 327 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 329 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24560 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 333 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 335 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24560);
        _24561 = (object)*(((s1_ptr)_2)->base + 3);
        _24560 = NOVALUE;
        // SubProg InitSymTab pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 341 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24561, 27)){
            _24561 = NOVALUE;
            goto L5; // [341] 365
        }
        _24561 = NOVALUE;
        // SubProg InitSymTab pc: 345 op: STARTLINE (58)

        /** symtab.e:471				if equal(kname, "<TopLevel>") then*/
        // SubProg InitSymTab pc: 347 op: EQUAL (153)
        if (_kname_46983 == _24563)
        _24564 = 1;
        else if (IS_ATOM_INT(_kname_46983) && IS_ATOM_INT(_24563))
        _24564 = 0;
        else
        _24564 = (compare(_kname_46983, _24563) == 0);
        // SubProg InitSymTab pc: 351 op: IF (20)
        if (_24564 == 0)
        {
            _24564 = NOVALUE;
            goto L6; // [351] 462
        }
        else{
            _24564 = NOVALUE;
        }
        // SubProg InitSymTab pc: 354 op: STARTLINE (58)

        /** symtab.e:472					TopLevelSub = st_index*/
        // SubProg InitSymTab pc: 356 op: ASSIGN (18)
        _5TopLevelSub_12484 = _st_index_46982;
        // SubProg InitSymTab pc: 359 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 361 op: NOP1 (159)
        // SubProg InitSymTab pc: 362 op: ELSE (23)
        goto L6; // [362] 462
        // SubProg InitSymTab pc: 364 op: NOP1 (159)
L5: // addr: 365 pc: 364 sub: 46976 op: 159
        // SubProg InitSymTab pc: 365 op: STARTLINE (58)

        /** symtab.e:474			elsif keylist[k][K_TOKEN] = TYPE then*/
        // SubProg InitSymTab pc: 367 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_62keylist_22772);
        _24565 = (object)*(((s1_ptr)_2)->base + _k_46986);
        // SubProg InitSymTab pc: 373 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 375 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24565);
        _24566 = (object)*(((s1_ptr)_2)->base + 3);
        _24565 = NOVALUE;
        // SubProg InitSymTab pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 381 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24566, 504)){
            _24566 = NOVALUE;
            goto L7; // [381] 461
        }
        _24566 = NOVALUE;
        // SubProg InitSymTab pc: 385 op: STARTLINE (58)

        /** symtab.e:475				if equal(kname, "object") then*/
        // SubProg InitSymTab pc: 387 op: EQUAL (153)
        if (_kname_46983 == _22939)
        _24568 = 1;
        else if (IS_ATOM_INT(_kname_46983) && IS_ATOM_INT(_22939))
        _24568 = 0;
        else
        _24568 = (compare(_kname_46983, _22939) == 0);
        // SubProg InitSymTab pc: 391 op: IF (20)
        if (_24568 == 0)
        {
            _24568 = NOVALUE;
            goto L8; // [391] 404
        }
        else{
            _24568 = NOVALUE;
        }
        // SubProg InitSymTab pc: 394 op: STARTLINE (58)

        /** symtab.e:476					object_type = st_index*/
        // SubProg InitSymTab pc: 396 op: ASSIGN (18)
        _53object_type_46324 = _st_index_46982;
        // SubProg InitSymTab pc: 399 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 401 op: ELSE (23)
        goto L9; // [401] 460
        // SubProg InitSymTab pc: 403 op: NOP1 (159)
L8: // addr: 404 pc: 403 sub: 46976 op: 159
        // SubProg InitSymTab pc: 404 op: STARTLINE (58)

        /** symtab.e:477				elsif equal(kname, "atom") then*/
        // SubProg InitSymTab pc: 406 op: EQUAL (153)
        if (_kname_46983 == _24569)
        _24570 = 1;
        else if (IS_ATOM_INT(_kname_46983) && IS_ATOM_INT(_24569))
        _24570 = 0;
        else
        _24570 = (compare(_kname_46983, _24569) == 0);
        // SubProg InitSymTab pc: 410 op: IF (20)
        if (_24570 == 0)
        {
            _24570 = NOVALUE;
            goto LA; // [410] 423
        }
        else{
            _24570 = NOVALUE;
        }
        // SubProg InitSymTab pc: 413 op: STARTLINE (58)

        /** symtab.e:478					atom_type = st_index*/
        // SubProg InitSymTab pc: 415 op: ASSIGN (18)
        _53atom_type_46326 = _st_index_46982;
        // SubProg InitSymTab pc: 418 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 420 op: ELSE (23)
        goto L9; // [420] 460
        // SubProg InitSymTab pc: 422 op: NOP1 (159)
LA: // addr: 423 pc: 422 sub: 46976 op: 159
        // SubProg InitSymTab pc: 423 op: STARTLINE (58)

        /** symtab.e:479				elsif equal(kname, "integer") then*/
        // SubProg InitSymTab pc: 425 op: EQUAL (153)
        if (_kname_46983 == _24571)
        _24572 = 1;
        else if (IS_ATOM_INT(_kname_46983) && IS_ATOM_INT(_24571))
        _24572 = 0;
        else
        _24572 = (compare(_kname_46983, _24571) == 0);
        // SubProg InitSymTab pc: 429 op: IF (20)
        if (_24572 == 0)
        {
            _24572 = NOVALUE;
            goto LB; // [429] 442
        }
        else{
            _24572 = NOVALUE;
        }
        // SubProg InitSymTab pc: 432 op: STARTLINE (58)

        /** symtab.e:480					integer_type = st_index*/
        // SubProg InitSymTab pc: 434 op: ASSIGN (18)
        _53integer_type_46330 = _st_index_46982;
        // SubProg InitSymTab pc: 437 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 439 op: ELSE (23)
        goto L9; // [439] 460
        // SubProg InitSymTab pc: 441 op: NOP1 (159)
LB: // addr: 442 pc: 441 sub: 46976 op: 159
        // SubProg InitSymTab pc: 442 op: STARTLINE (58)

        /** symtab.e:481				elsif equal(kname, "sequence") then*/
        // SubProg InitSymTab pc: 444 op: EQUAL (153)
        if (_kname_46983 == _24573)
        _24574 = 1;
        else if (IS_ATOM_INT(_kname_46983) && IS_ATOM_INT(_24573))
        _24574 = 0;
        else
        _24574 = (compare(_kname_46983, _24573) == 0);
        // SubProg InitSymTab pc: 448 op: IF (20)
        if (_24574 == 0)
        {
            _24574 = NOVALUE;
            goto LC; // [448] 459
        }
        else{
            _24574 = NOVALUE;
        }
        // SubProg InitSymTab pc: 451 op: STARTLINE (58)

        /** symtab.e:482					sequence_type = st_index*/
        // SubProg InitSymTab pc: 453 op: ASSIGN (18)
        _53sequence_type_46328 = _st_index_46982;
        // SubProg InitSymTab pc: 456 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 458 op: NOP1 (159)
LC: // addr: 459 pc: 458 sub: 46976 op: 159
        // SubProg InitSymTab pc: 459 op: NOP1 (159)
L9: // addr: 460 pc: 459 sub: 46976 op: 159
        // SubProg InitSymTab pc: 460 op: NOP1 (159)
L7: // addr: 461 pc: 460 sub: 46976 op: 159
        // SubProg InitSymTab pc: 461 op: NOP1 (159)
L6: // addr: 462 pc: 461 sub: 46976 op: 159
        // SubProg InitSymTab pc: 462 op: STARTLINE (58)

        /** symtab.e:485			if buckets[hashval] = 0 then*/
        // SubProg InitSymTab pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 466 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_53buckets_46320);
        _24575 = (object)*(((s1_ptr)_2)->base + _hashval_46978);
        // SubProg InitSymTab pc: 470 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24575, 0)){
            _24575 = NOVALUE;
            goto LD; // [470] 485
        }
        _24575 = NOVALUE;
        // SubProg InitSymTab pc: 474 op: STARTLINE (58)

        /** symtab.e:486				buckets[hashval] = st_index*/
        // SubProg InitSymTab pc: 476 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 478 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_53buckets_46320);
        _2 = (object)(((s1_ptr)_2)->base + _hashval_46978);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46982;
        DeRef(_1);
        // SubProg InitSymTab pc: 482 op: ELSE (23)
        goto LE; // [482] 553
        // SubProg InitSymTab pc: 484 op: NOP1 (159)
LD: // addr: 485 pc: 484 sub: 46976 op: 159
        // SubProg InitSymTab pc: 485 op: STARTLINE (58)

        /** symtab.e:488				s = buckets[hashval]*/
        // SubProg InitSymTab pc: 487 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 489 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_53buckets_46320);
        _s_46981 = (object)*(((s1_ptr)_2)->base + _hashval_46978);
        if (!IS_ATOM_INT(_s_46981)){
            _s_46981 = (object)DBL_PTR(_s_46981)->dbl;
        }
        // SubProg InitSymTab pc: 495 op: STARTLINE (58)

        /** symtab.e:489				while SymTab[s][S_SAMEHASH] != 0 do*/
        // SubProg InitSymTab pc: 497 op: NOP2 (110)
        // SubProg InitSymTab pc: 499 op: NOPWHILE (158)
LF: // addr: 500 pc: 499 sub: 46976 op: 158
        // SubProg InitSymTab pc: 500 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 502 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24578 = (object)*(((s1_ptr)_2)->base + _s_46981);
        // SubProg InitSymTab pc: 506 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 508 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24578);
        _24579 = (object)*(((s1_ptr)_2)->base + 9);
        _24578 = NOVALUE;
        // SubProg InitSymTab pc: 512 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _24579, 0)){
            _24579 = NOVALUE;
            goto L10; // [512] 537
        }
        _24579 = NOVALUE;
        // SubProg InitSymTab pc: 516 op: STARTLINE (58)

        /** symtab.e:490					s = SymTab[s][S_SAMEHASH]*/
        // SubProg InitSymTab pc: 518 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 520 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24581 = (object)*(((s1_ptr)_2)->base + _s_46981);
        // SubProg InitSymTab pc: 524 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 526 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24581);
        _s_46981 = (object)*(((s1_ptr)_2)->base + 9);
        if (!IS_ATOM_INT(_s_46981)){
            _s_46981 = (object)DBL_PTR(_s_46981)->dbl;
        }
        _24581 = NOVALUE;
        // SubProg InitSymTab pc: 532 op: STARTLINE (58)

        /** symtab.e:491				end while*/
        // SubProg InitSymTab pc: 534 op: ENDWHILE (22)
        goto LF; // [534] 500
        // SubProg InitSymTab pc: 536 op: NOP1 (159)
L10: // addr: 537 pc: 536 sub: 46976 op: 159
        // SubProg InitSymTab pc: 537 op: STARTLINE (58)

        /** symtab.e:492				SymTab[s][S_SAMEHASH] = st_index*/
        // SubProg InitSymTab pc: 539 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 541 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_46981 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 546 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 548 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 9);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46982;
        DeRef(_1);
        _24583 = NOVALUE;
        // SubProg InitSymTab pc: 552 op: NOP1 (159)
LE: // addr: 553 pc: 552 sub: 46976 op: 159
        // SubProg InitSymTab pc: 553 op: STARTLINE (58)

        /** symtab.e:494		end for*/
        // SubProg InitSymTab pc: 555 op: ENDFOR_INT_UP1 (54)
        _k_46986 = _k_46986 + 1;
        goto L1; // [555] 22
L2: // addr: 560 pc: 555 sub: 46976 op: 54
        ;
    }
    // SubProg InitSymTab pc: 560 op: STARTLINE (58)

    /** symtab.e:495		file_start_sym = length(SymTab)*/
    // SubProg InitSymTab pc: 562 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 564 op: LENGTH (42)
    if (IS_SEQUENCE(_7SymTab_11389)){
            _5file_start_sym_12483 = SEQ_PTR(_7SymTab_11389)->length;
    }
    else {
        _5file_start_sym_12483 = 1;
    }
    // SubProg InitSymTab pc: 567 op: INTEGER_CHECK (96)
    // SubProg InitSymTab pc: 569 op: STARTLINE (58)

    /** symtab.e:497		sequence si, sj*/
    // SubProg InitSymTab pc: 571 op: STARTLINE (58)

    /** symtab.e:498		CurrentSub = TopLevelSub*/
    // SubProg InitSymTab pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 575 op: ASSIGN (18)
    _5CurrentSub_12485 = _5TopLevelSub_12484;
    // SubProg InitSymTab pc: 578 op: INTEGER_CHECK (96)
    // SubProg InitSymTab pc: 580 op: STARTLINE (58)

    /** symtab.e:499		for i=1 to length(fixups) do*/
    // SubProg InitSymTab pc: 582 op: LENGTH (42)
    if (IS_SEQUENCE(_fixups_46984)){
            _24586 = SEQ_PTR(_fixups_46984)->length;
    }
    else {
        _24586 = 1;
    }
    // SubProg InitSymTab pc: 585 op: FOR_I (125)
    {
        object _i_47128;
        _i_47128 = 1;
L11: // addr: 592 pc: 585 sub: 46976 op: 125
        if (_i_47128 > _24586){
            goto L12; // [585] 946
        }
        // SubProg InitSymTab pc: 592 op: STARTLINE (58)

        /** symtab.e:500		    si = SymTab[fixups[i]][S_CODE] -- seq of either 0's or sequences of tokens*/
        // SubProg InitSymTab pc: 594 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 596 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fixups_46984);
        _24587 = (object)*(((s1_ptr)_2)->base + _i_47128);
        // SubProg InitSymTab pc: 600 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24588 = (object)*(((s1_ptr)_2)->base + _24587);
        // SubProg InitSymTab pc: 604 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 606 op: RHS_SUBS_CHECK (92)
        DeRef(_si_47123);
        _2 = (object)SEQ_PTR(_24588);
        if (!IS_ATOM_INT(_5S_CODE_12144)){
            _si_47123 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_CODE_12144)->dbl));
        }
        else{
            _si_47123 = (object)*(((s1_ptr)_2)->base + _5S_CODE_12144);
        }
        Ref(_si_47123);
        _24588 = NOVALUE;
        // SubProg InitSymTab pc: 610 op: SEQUENCE_CHECK (97)
        // SubProg InitSymTab pc: 612 op: STARTLINE (58)

        /** symtab.e:501		    for j=1 to length(si) do*/
        // SubProg InitSymTab pc: 614 op: LENGTH (42)
        if (IS_SEQUENCE(_si_47123)){
                _24590 = SEQ_PTR(_si_47123)->length;
        }
        else {
            _24590 = 1;
        }
        // SubProg InitSymTab pc: 617 op: FOR_I (125)
        {
            object _j_47136;
            _j_47136 = 1;
L13: // addr: 624 pc: 617 sub: 46976 op: 125
            if (_j_47136 > _24590){
                goto L14; // [617] 920
            }
            // SubProg InitSymTab pc: 624 op: STARTLINE (58)

            /** symtab.e:502		        if sequence(si[j]) then*/
            // SubProg InitSymTab pc: 626 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_si_47123);
            _24591 = (object)*(((s1_ptr)_2)->base + _j_47136);
            // SubProg InitSymTab pc: 630 op: IS_A_SEQUENCE (68)
            _24592 = IS_SEQUENCE(_24591);
            _24591 = NOVALUE;
            // SubProg InitSymTab pc: 633 op: IF (20)
            if (_24592 == 0)
            {
                _24592 = NOVALUE;
                goto L15; // [633] 913
            }
            else{
                _24592 = NOVALUE;
            }
            // SubProg InitSymTab pc: 636 op: STARTLINE (58)

            /** symtab.e:503		            sj = si[j] -- a sequence of tokens*/
            // SubProg InitSymTab pc: 638 op: RHS_SUBS (25)
            DeRef(_sj_47124);
            _2 = (object)SEQ_PTR(_si_47123);
            _sj_47124 = (object)*(((s1_ptr)_2)->base + _j_47136);
            Ref(_sj_47124);
            // SubProg InitSymTab pc: 642 op: SEQUENCE_CHECK (97)
            // SubProg InitSymTab pc: 644 op: STARTLINE (58)

            /** symtab.e:504					for ij=1 to length(sj) do*/
            // SubProg InitSymTab pc: 646 op: LENGTH (42)
            if (IS_SEQUENCE(_sj_47124)){
                    _24594 = SEQ_PTR(_sj_47124)->length;
            }
            else {
                _24594 = 1;
            }
            // SubProg InitSymTab pc: 649 op: FOR_I (125)
            {
                object _ij_47143;
                _ij_47143 = 1;
L16: // addr: 656 pc: 649 sub: 46976 op: 125
                if (_ij_47143 > _24594){
                    goto L17; // [649] 906
                }
                // SubProg InitSymTab pc: 656 op: STARTLINE (58)

                /** symtab.e:505		                switch sj[ij][T_ID] with fallthru do*/
                // SubProg InitSymTab pc: 658 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_sj_47124);
                _24595 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                // SubProg InitSymTab pc: 662 op: GLOBAL_INIT_CHECK (109)
                // SubProg InitSymTab pc: 664 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_24595);
                _24596 = (object)*(((s1_ptr)_2)->base + 1);
                _24595 = NOVALUE;
                // SubProg InitSymTab pc: 668 op: SWITCH_I (193)
                if (IS_SEQUENCE(_24596) ){
                    goto L18; // [668] 899
                }
                if(!IS_ATOM_INT(_24596)){
                    if( (DBL_PTR(_24596)->dbl != (eudouble) ((object) DBL_PTR(_24596)->dbl) ) ){
                        goto L18; // [668] 899
                    }
                    _0 = (object) DBL_PTR(_24596)->dbl;
                }
                else {
                    _0 = _24596;
                };
                _24596 = NOVALUE;
                switch ( _0 ){ 
                    // SubProg InitSymTab pc: 673 op: STARTLINE (58)

                    /** symtab.e:506		                    case ATOM then -- must create a lasting temp*/
                    // SubProg InitSymTab pc: 675 op: CASE (186)
                    case 502:
                    // SubProg InitSymTab pc: 677 op: STARTLINE (58)

                    /** symtab.e:507		                    	if is_integer(sj[ij][T_SYM]) then*/
                    // SubProg InitSymTab pc: 679 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    _24599 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                    // SubProg InitSymTab pc: 683 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 685 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24599);
                    _24600 = (object)*(((s1_ptr)_2)->base + 2);
                    _24599 = NOVALUE;
                    // SubProg InitSymTab pc: 689 op: PROC (27)
                    Ref(_24600);
                    _24601 = _5is_integer(_24600);
                    _24600 = NOVALUE;
                    // SubProg InitSymTab pc: 693 op: IF (20)
                    if (_24601 == 0) {
                        DeRef(_24601);
                        _24601 = NOVALUE;
                        goto L19; // [693] 717
                    }
                    else {
                        if (!IS_ATOM_INT(_24601) && DBL_PTR(_24601)->dbl == 0.0){
                            DeRef(_24601);
                            _24601 = NOVALUE;
                            goto L19; // [693] 717
                        }
                        DeRef(_24601);
                        _24601 = NOVALUE;
                    }
                    DeRef(_24601);
                    _24601 = NOVALUE;
                    // SubProg InitSymTab pc: 696 op: STARTLINE (58)

                    /** symtab.e:508									st_index = NewIntSym(sj[ij][T_SYM])*/
                    // SubProg InitSymTab pc: 698 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    _24602 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                    // SubProg InitSymTab pc: 702 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 704 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24602);
                    _24603 = (object)*(((s1_ptr)_2)->base + 2);
                    _24602 = NOVALUE;
                    // SubProg InitSymTab pc: 708 op: PROC (27)
                    Ref(_24603);
                    _st_index_46982 = _53NewIntSym(_24603);
                    _24603 = NOVALUE;
                    // SubProg InitSymTab pc: 712 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46982)) {
                        _1 = (object)(DBL_PTR(_st_index_46982)->dbl);
                        DeRefDS(_st_index_46982);
                        _st_index_46982 = _1;
                    }
                    // SubProg InitSymTab pc: 714 op: ELSE (23)
                    goto L1A; // [714] 736
                    // SubProg InitSymTab pc: 716 op: NOP1 (159)
L19: // addr: 717 pc: 716 sub: 46976 op: 159
                    // SubProg InitSymTab pc: 717 op: STARTLINE (58)

                    /** symtab.e:510									st_index = NewDoubleSym(sj[ij][T_SYM])*/
                    // SubProg InitSymTab pc: 719 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    _24605 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                    // SubProg InitSymTab pc: 723 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 725 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24605);
                    _24606 = (object)*(((s1_ptr)_2)->base + 2);
                    _24605 = NOVALUE;
                    // SubProg InitSymTab pc: 729 op: PROC (27)
                    Ref(_24606);
                    _st_index_46982 = _53NewDoubleSym(_24606);
                    _24606 = NOVALUE;
                    // SubProg InitSymTab pc: 733 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46982)) {
                        _1 = (object)(DBL_PTR(_st_index_46982)->dbl);
                        DeRefDS(_st_index_46982);
                        _st_index_46982 = _1;
                    }
                    // SubProg InitSymTab pc: 735 op: NOP1 (159)
L1A: // addr: 736 pc: 735 sub: 46976 op: 159
                    // SubProg InitSymTab pc: 736 op: STARTLINE (58)

                    /** symtab.e:512								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    // SubProg InitSymTab pc: 738 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 740 op: PRIVATE_INIT_CHECK (30)
                    // SubProg InitSymTab pc: 742 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_7SymTab_11389);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _7SymTab_11389 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 747 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 749 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 751 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 4);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = 1;
                    DeRef(_1);
                    _24608 = NOVALUE;
                    // SubProg InitSymTab pc: 755 op: STARTLINE (58)

                    /** symtab.e:513								sj[ij][T_SYM] = st_index*/
                    // SubProg InitSymTab pc: 757 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47124 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47143 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 762 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 764 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46982;
                    DeRef(_1);
                    _24610 = NOVALUE;
                    // SubProg InitSymTab pc: 768 op: STARTLINE (58)

                    /** symtab.e:514								break*/
                    // SubProg InitSymTab pc: 770 op: ELSE (23)
                    goto L18; // [770] 899
                    // SubProg InitSymTab pc: 772 op: STARTLINE (58)

                    /** symtab.e:515							case STRING then -- same*/
                    // SubProg InitSymTab pc: 774 op: CASE (186)
                    case 503:
                    // SubProg InitSymTab pc: 776 op: STARTLINE (58)

                    /** symtab.e:516		                    	st_index = NewStringSym(sj[ij][T_SYM])*/
                    // SubProg InitSymTab pc: 778 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    _24612 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                    // SubProg InitSymTab pc: 782 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 784 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24612);
                    _24613 = (object)*(((s1_ptr)_2)->base + 2);
                    _24612 = NOVALUE;
                    // SubProg InitSymTab pc: 788 op: PROC (27)
                    Ref(_24613);
                    _st_index_46982 = _53NewStringSym(_24613);
                    _24613 = NOVALUE;
                    // SubProg InitSymTab pc: 792 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46982)) {
                        _1 = (object)(DBL_PTR(_st_index_46982)->dbl);
                        DeRefDS(_st_index_46982);
                        _st_index_46982 = _1;
                    }
                    // SubProg InitSymTab pc: 794 op: STARTLINE (58)

                    /** symtab.e:517								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    // SubProg InitSymTab pc: 796 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 798 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_7SymTab_11389);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _7SymTab_11389 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46982 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 803 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 805 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 807 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 4);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = 1;
                    DeRef(_1);
                    _24615 = NOVALUE;
                    // SubProg InitSymTab pc: 811 op: STARTLINE (58)

                    /** symtab.e:518								sj[ij][T_SYM] = st_index*/
                    // SubProg InitSymTab pc: 813 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47124 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47143 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 818 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 820 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46982;
                    DeRef(_1);
                    _24617 = NOVALUE;
                    // SubProg InitSymTab pc: 824 op: STARTLINE (58)

                    /** symtab.e:519								break*/
                    // SubProg InitSymTab pc: 826 op: ELSE (23)
                    goto L18; // [826] 899
                    // SubProg InitSymTab pc: 828 op: STARTLINE (58)

                    /** symtab.e:520							case BUILT_IN then -- name of a builtin in econd field*/
                    // SubProg InitSymTab pc: 830 op: CASE (186)
                    case 511:
                    // SubProg InitSymTab pc: 832 op: STARTLINE (58)

                    /** symtab.e:521	                            sj[ij] = keyfind(sj[ij][T_SYM],-1)*/
                    // SubProg InitSymTab pc: 834 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    _24619 = (object)*(((s1_ptr)_2)->base + _ij_47143);
                    // SubProg InitSymTab pc: 838 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 840 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24619);
                    _24620 = (object)*(((s1_ptr)_2)->base + 2);
                    _24619 = NOVALUE;
                    // SubProg InitSymTab pc: 844 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 846 op: ASSIGN (18)
                    Ref(_24620);
                    DeRef(_25098);
                    _25098 = _24620;
                    // SubProg InitSymTab pc: 849 op: PROC (27)
                    _25099 = _53hashfn(_25098);
                    _25098 = NOVALUE;
                    // SubProg InitSymTab pc: 853 op: PROC (27)
                    Ref(_24620);
                    _24621 = _53keyfind(_24620, -1, _5current_file_no_12477, 0, _25099);
                    _24620 = NOVALUE;
                    _25099 = NOVALUE;
                    // SubProg InitSymTab pc: 861 op: ASSIGN_SUBS (16)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47124 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + _ij_47143);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24621;
                    if( _1 != _24621 ){
                        DeRef(_1);
                    }
                    _24621 = NOVALUE;
                    // SubProg InitSymTab pc: 865 op: STARTLINE (58)

                    /** symtab.e:522								break*/
                    // SubProg InitSymTab pc: 867 op: ELSE (23)
                    goto L18; // [867] 899
                    // SubProg InitSymTab pc: 869 op: STARTLINE (58)

                    /** symtab.e:523							case DEF_PARAM then*/
                    // SubProg InitSymTab pc: 871 op: CASE (186)
                    case 510:
                    // SubProg InitSymTab pc: 873 op: STARTLINE (58)

                    /** symtab.e:524								sj[ij][T_SYM] &= fixups[i]*/
                    // SubProg InitSymTab pc: 875 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_sj_47124);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47124 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47143 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 880 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 882 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_fixups_46984);
                    _24624 = (object)*(((s1_ptr)_2)->base + _i_47128);
                    // SubProg InitSymTab pc: 886 op: PASSIGN_OP_SUBS (164)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    _24625 = (object)*(((s1_ptr)_2)->base + 2);
                    _24622 = NOVALUE;
                    // SubProg InitSymTab pc: 890 op: CONCAT (15)
                    if (IS_SEQUENCE(_24625) && IS_ATOM(_24624)) {
                        Append(&_24626, _24625, _24624);
                    }
                    else if (IS_ATOM(_24625) && IS_SEQUENCE(_24624)) {
                    }
                    else {
                        Concat((object_ptr)&_24626, _24625, _24624);
                        _24625 = NOVALUE;
                    }
                    _24625 = NOVALUE;
                    _24624 = NOVALUE;
                    // SubProg InitSymTab pc: 894 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24626;
                    if( _1 != _24626 ){
                        DeRef(_1);
                    }
                    _24626 = NOVALUE;
                    _24622 = NOVALUE;
                    // SubProg InitSymTab pc: 898 op: NOPSWITCH (187)
                ;}L18: // addr: 899 pc: 898 sub: 46976 op: 187
                // SubProg InitSymTab pc: 899 op: STARTLINE (58)

                /** symtab.e:526					end for*/
                // SubProg InitSymTab pc: 901 op: ENDFOR_INT_UP1 (54)
                _ij_47143 = _ij_47143 + 1;
                goto L16; // [901] 656
L17: // addr: 906 pc: 901 sub: 46976 op: 54
                ;
            }
            // SubProg InitSymTab pc: 906 op: STARTLINE (58)

            /** symtab.e:527					si[j] = sj*/
            // SubProg InitSymTab pc: 908 op: ASSIGN_SUBS (16)
            RefDS(_sj_47124);
            _2 = (object)SEQ_PTR(_si_47123);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _si_47123 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_47136);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _sj_47124;
            DeRef(_1);
            // SubProg InitSymTab pc: 912 op: NOP1 (159)
L15: // addr: 913 pc: 912 sub: 46976 op: 159
            // SubProg InitSymTab pc: 913 op: STARTLINE (58)

            /** symtab.e:529			end for*/
            // SubProg InitSymTab pc: 915 op: ENDFOR_INT_UP1 (54)
            _j_47136 = _j_47136 + 1;
            goto L13; // [915] 624
L14: // addr: 920 pc: 915 sub: 46976 op: 54
            ;
        }
        // SubProg InitSymTab pc: 920 op: STARTLINE (58)

        /** symtab.e:530			SymTab[fixups[i]][S_CODE] = si*/
        // SubProg InitSymTab pc: 922 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 924 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fixups_46984);
        _24627 = (object)*(((s1_ptr)_2)->base + _i_47128);
        // SubProg InitSymTab pc: 928 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_24627 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 933 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 935 op: PASSIGN_SUBS (162)
        RefDS(_si_47123);
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
        *(intptr_t *)_2 = _si_47123;
        DeRef(_1);
        _24628 = NOVALUE;
        // SubProg InitSymTab pc: 939 op: STARTLINE (58)

        /** symtab.e:531		end for*/
        // SubProg InitSymTab pc: 941 op: ENDFOR_INT_UP1 (54)
        _i_47128 = _i_47128 + 1;
        goto L11; // [941] 592
L12: // addr: 946 pc: 941 sub: 46976 op: 54
        ;
    }
    // SubProg InitSymTab pc: 946 op: STARTLINE (58)

    /** symtab.e:532	end procedure*/
    // SubProg InitSymTab pc: 948 op: RETURNP (29)

// Exiting block BLOCK: InitSymTab

// block var hashval_46978

// block var len_46979

// block var s_46981

// block var st_index_46982

// block var kname_46983
    DeRef(_kname_46983);

// block var fixups_46984
    DeRefi(_fixups_46984);

// block var si_47123
    DeRef(_si_47123);

// block var sj_47124
    DeRef(_sj_47124);
    _24529 = NOVALUE;
    _24548 = NOVALUE;
    _24587 = NOVALUE;
    _24627 = NOVALUE;
    return;
    // SubProg InitSymTab pc: 951 op: BADRETURNF (43)
    ;
}


void _53add_ref(object _tok_47212)
{
    object _s_47214 = NOVALUE;
    object _24644 = NOVALUE; // 47240 24644
    object _24643 = NOVALUE; // 47239 24643
// skipping _24642  name type: 0
    object _24641 = NOVALUE; // 47236 24641
    object _24640 = NOVALUE; // 47234 24640
    object _24639 = NOVALUE; // 47233 24639
// skipping _24638  name type: 0
    object _24637 = NOVALUE; // 47229 24637
    object _24636 = NOVALUE; // 47227 24636
    object _24635 = NOVALUE; // 47226 24635
    object _24634 = NOVALUE; // 47225 24634
    object _24633 = NOVALUE; // 47223 24633
    object _24632 = NOVALUE; // 47220 24632
    object _24631 = NOVALUE; // 47219 24631
// skipping _24630  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_ref pc: 1 op: STARTLINE (58)

    /** symtab.e:538		s = tok[T_SYM]*/
    // SubProg add_ref pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47212);
    _s_47214 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_47214)){
        _s_47214 = (object)DBL_PTR(_s_47214)->dbl;
    }
    // SubProg add_ref pc: 11 op: STARTLINE (58)

    /** symtab.e:539		if s != CurrentSub and -- ignore self-ref's*/
    // SubProg add_ref pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 15 op: NOTEQ (4)
    _24631 = (_s_47214 != _5CurrentSub_12485);
    // SubProg add_ref pc: 19 op: SC1_AND_IF (146)
    if (_24631 == 0) {
        goto L1; // [19] 98
    }
    // SubProg add_ref pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24633 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg add_ref pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24633);
    _24634 = (object)*(((s1_ptr)_2)->base + 24);
    _24633 = NOVALUE;
    // SubProg add_ref pc: 37 op: FIND_FROM (176)
    _24635 = find_from(_s_47214, _24634, 1);
    _24634 = NOVALUE;
    // SubProg add_ref pc: 42 op: NOT (7)
    _24636 = (_24635 == 0);
    _24635 = NOVALUE;
    // SubProg add_ref pc: 45 op: NOP1 (159)
    // SubProg add_ref pc: 46 op: IF (20)
    if (_24636 == 0)
    {
        DeRef(_24636);
        _24636 = NOVALUE;
        goto L1; // [46] 98
    }
    else{
        DeRef(_24636);
        _24636 = NOVALUE;
    }
    // SubProg add_ref pc: 49 op: STARTLINE (58)

    /** symtab.e:542			SymTab[s][S_NREFS] += 1*/
    // SubProg add_ref pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 53 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47214 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 60 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24639 = (object)*(((s1_ptr)_2)->base + 12);
    _24637 = NOVALUE;
    // SubProg add_ref pc: 64 op: PLUS1 (93)
    if (IS_ATOM_INT(_24639)) {
        _24640 = _24639 + 1;
        if (_24640 > MAXINT){
            _24640 = NewDouble((eudouble)_24640);
        }
    }
    else
    _24640 = binary_op(PLUS, 1, _24639);
    _24639 = NOVALUE;
    // SubProg add_ref pc: 68 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24640;
    if( _1 != _24640 ){
        DeRef(_1);
    }
    _24640 = NOVALUE;
    _24637 = NOVALUE;
    // SubProg add_ref pc: 72 op: STARTLINE (58)

    /** symtab.e:543			SymTab[CurrentSub][S_REFLIST] &= s*/
    // SubProg add_ref pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_5CurrentSub_12485 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 85 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24643 = (object)*(((s1_ptr)_2)->base + 24);
    _24641 = NOVALUE;
    // SubProg add_ref pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_24643) && IS_ATOM(_s_47214)) {
        Append(&_24644, _24643, _s_47214);
    }
    else if (IS_ATOM(_24643) && IS_SEQUENCE(_s_47214)) {
    }
    else {
        Concat((object_ptr)&_24644, _24643, _s_47214);
        _24643 = NOVALUE;
    }
    _24643 = NOVALUE;
    // SubProg add_ref pc: 93 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24644;
    if( _1 != _24644 ){
        DeRef(_1);
    }
    _24644 = NOVALUE;
    _24641 = NOVALUE;
    // SubProg add_ref pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 47209 op: 159
    // SubProg add_ref pc: 98 op: STARTLINE (58)

    /** symtab.e:545	end procedure*/
    // SubProg add_ref pc: 100 op: RETURNP (29)

// Exiting block BLOCK: add_ref

// block var tok_47212
    DeRef(_tok_47212);

// block var s_47214
    DeRef(_24631);
    _24631 = NOVALUE;
    return;
    // SubProg add_ref pc: 103 op: BADRETURNF (43)
    ;
}


void _53mark_all(object _attribute_47244)
{
    object _p_47247 = NOVALUE;
    object _sym_file_47254 = NOVALUE;
    object _scope_47271 = NOVALUE;
// skipping _24677  name type: 0
    object _24676 = NOVALUE; // 47310 24676
    object _24675 = NOVALUE; // 47308 24675
    object _24674 = NOVALUE; // 47307 24674
// skipping _24673  name type: 0
    object _24672 = NOVALUE; // 47305 24672
// skipping _24671  name type: 0
    object _24670 = NOVALUE; // 47300 24670
    object _24669 = NOVALUE; // 47299 24669
    object _24668 = NOVALUE; // 47298 24668
    object _24667 = NOVALUE; // 47291 24667
    object _24666 = NOVALUE; // 47290 24666
// skipping _24665  name type: 0
    object _24664 = NOVALUE; // 47288 24664
    object _24663 = NOVALUE; // 47286 24663
    object _24662 = NOVALUE; // 47285 24662
    object _24661 = NOVALUE; // 47284 24661
// skipping _24658  name type: 0
    object _24657 = NOVALUE; // 47273 24657
    object _24656 = NOVALUE; // 47269 24656
    object _24655 = NOVALUE; // 47268 24655
// skipping _24654  name type: 0
    object _24653 = NOVALUE; // 47266 24653
    object _24652 = NOVALUE; // 47264 24652
// skipping _24651  name type: 0
    object _24650 = NOVALUE; // 47261 24650
// skipping _24649  name type: 0
    object _24648 = NOVALUE; // 47256 24648
// skipping _24647  name type: 0
// skipping _24646  name type: 0
    object _24645 = NOVALUE; // 47249 24645
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg mark_all pc: 1 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 3 op: STARTLINE (58)

    /** symtab.e:550		if just_mark_everything_from then*/
    // SubProg mark_all pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 7 op: IF (20)
    if (_53just_mark_everything_from_47241 == 0)
    {
        goto L1; // [7] 270
    }
    else{
    }
    // SubProg mark_all pc: 10 op: STARTLINE (58)

    /** symtab.e:551			symtab_pointer p = SymTab[just_mark_everything_from][S_NEXT]*/
    // SubProg mark_all pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 16 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24645 = (object)*(((s1_ptr)_2)->base + _53just_mark_everything_from_47241);
    // SubProg mark_all pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24645);
    _p_47247 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47247)){
        _p_47247 = (object)DBL_PTR(_p_47247)->dbl;
    }
    _24645 = NOVALUE;
    // SubProg mark_all pc: 28 op: STARTLINE (58)

    /** symtab.e:552			while p != 0 do*/
    // SubProg mark_all pc: 30 op: NOP2 (110)
    // SubProg mark_all pc: 32 op: NOPWHILE (158)
L2: // addr: 33 pc: 32 sub: 47242 op: 158
    // SubProg mark_all pc: 33 op: NOTEQ_IFW (105)
    if (_p_47247 == 0)
    goto L3; // [33] 269
    // SubProg mark_all pc: 37 op: STARTLINE (58)

    /** symtab.e:553				integer sym_file = SymTab[p][S_FILE_NO]*/
    // SubProg mark_all pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24648 = (object)*(((s1_ptr)_2)->base + _p_47247);
    // SubProg mark_all pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24648);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _sym_file_47254 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _sym_file_47254 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_sym_file_47254)){
        _sym_file_47254 = (object)DBL_PTR(_sym_file_47254)->dbl;
    }
    _24648 = NOVALUE;
    // SubProg mark_all pc: 53 op: STARTLINE (58)

    /** symtab.e:554				just_mark_everything_from = p*/
    // SubProg mark_all pc: 55 op: ASSIGN (18)
    _53just_mark_everything_from_47241 = _p_47247;
    // SubProg mark_all pc: 58 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 60 op: STARTLINE (58)

    /** symtab.e:555				if sym_file = current_file_no or map:has( recheck_routines, sym_file ) then*/
    // SubProg mark_all pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 64 op: EQUALS (3)
    _24650 = (_sym_file_47254 == _5current_file_no_12477);
    // SubProg mark_all pc: 68 op: SC1_OR_IF (147)
    if (_24650 != 0) {
        goto L4; // [68] 84
    }
    // SubProg mark_all pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 74 op: PROC (27)
    Ref(_53recheck_routines_47314);
    _24652 = _33has(_53recheck_routines_47314, _sym_file_47254);
    // SubProg mark_all pc: 79 op: NOP1 (159)
    // SubProg mark_all pc: 80 op: IF (20)
    if (_24652 == 0) {
        DeRef(_24652);
        _24652 = NOVALUE;
        goto L5; // [80] 108
    }
    else {
        if (!IS_ATOM_INT(_24652) && DBL_PTR(_24652)->dbl == 0.0){
            DeRef(_24652);
            _24652 = NOVALUE;
            goto L5; // [80] 108
        }
        DeRef(_24652);
        _24652 = NOVALUE;
    }
    DeRef(_24652);
    _24652 = NOVALUE;
    // SubProg mark_all pc: 83 op: NOP1 (159)
L4: // addr: 84 pc: 83 sub: 47242 op: 159
    // SubProg mark_all pc: 84 op: STARTLINE (58)

    /** symtab.e:556					SymTab[p][attribute] += 1*/
    // SubProg mark_all pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 88 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_47247 + ((s1_ptr)_2)->base);
    // SubProg mark_all pc: 93 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24655 = (object)*(((s1_ptr)_2)->base + _attribute_47244);
    _24653 = NOVALUE;
    // SubProg mark_all pc: 97 op: PLUS1 (93)
    if (IS_ATOM_INT(_24655)) {
        _24656 = _24655 + 1;
        if (_24656 > MAXINT){
            _24656 = NewDouble((eudouble)_24656);
        }
    }
    else
    _24656 = binary_op(PLUS, 1, _24655);
    _24655 = NOVALUE;
    // SubProg mark_all pc: 101 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47244);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24656;
    if( _1 != _24656 ){
        DeRef(_1);
    }
    _24656 = NOVALUE;
    _24653 = NOVALUE;
    // SubProg mark_all pc: 105 op: ELSE (23)
    goto L6; // [105] 246
    // SubProg mark_all pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 47242 op: 159
    // SubProg mark_all pc: 108 op: STARTLINE (58)

    /** symtab.e:558					integer scope = SymTab[p][S_SCOPE]*/
    // SubProg mark_all pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24657 = (object)*(((s1_ptr)_2)->base + _p_47247);
    // SubProg mark_all pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24657);
    _scope_47271 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47271)){
        _scope_47271 = (object)DBL_PTR(_scope_47271)->dbl;
    }
    _24657 = NOVALUE;
    // SubProg mark_all pc: 124 op: STARTLINE (58)

    /** symtab.e:559					switch scope with fallthru do*/
    // SubProg mark_all pc: 126 op: SWITCH_I (193)
    _0 = _scope_47271;
    switch ( _0 ){ 
        // SubProg mark_all pc: 131 op: STARTLINE (58)

        /** symtab.e:560						case SC_PUBLIC then*/
        // SubProg mark_all pc: 133 op: CASE (186)
        case 13:
        // SubProg mark_all pc: 135 op: STARTLINE (58)

        /** symtab.e:561							if and_bits( DIRECT_OR_PUBLIC_INCLUDE, include_matrix[current_file_no][sym_file] ) then*/
        // SubProg mark_all pc: 137 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 139 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 141 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 143 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24661 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
        // SubProg mark_all pc: 147 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24661);
        _24662 = (object)*(((s1_ptr)_2)->base + _sym_file_47254);
        _24661 = NOVALUE;
        // SubProg mark_all pc: 151 op: AND_BITS (56)
        if (IS_ATOM_INT(_24662)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24662;
                 _24663 = MAKE_UINT(tu);
            }
        }
        else {
            _24663 = binary_op(AND_BITS, 6, _24662);
        }
        _24662 = NOVALUE;
        // SubProg mark_all pc: 155 op: IF (20)
        if (_24663 == 0) {
            DeRef(_24663);
            _24663 = NOVALUE;
            goto L7; // [155] 243
        }
        else {
            if (!IS_ATOM_INT(_24663) && DBL_PTR(_24663)->dbl == 0.0){
                DeRef(_24663);
                _24663 = NOVALUE;
                goto L7; // [155] 243
            }
            DeRef(_24663);
            _24663 = NOVALUE;
        }
        DeRef(_24663);
        _24663 = NOVALUE;
        // SubProg mark_all pc: 158 op: STARTLINE (58)

        /** symtab.e:562								SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 160 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 162 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47247 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 167 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24666 = (object)*(((s1_ptr)_2)->base + _attribute_47244);
        _24664 = NOVALUE;
        // SubProg mark_all pc: 171 op: PLUS1 (93)
        if (IS_ATOM_INT(_24666)) {
            _24667 = _24666 + 1;
            if (_24667 > MAXINT){
                _24667 = NewDouble((eudouble)_24667);
            }
        }
        else
        _24667 = binary_op(PLUS, 1, _24666);
        _24666 = NOVALUE;
        // SubProg mark_all pc: 175 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47244);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24667;
        if( _1 != _24667 ){
            DeRef(_1);
        }
        _24667 = NOVALUE;
        _24664 = NOVALUE;
        // SubProg mark_all pc: 179 op: NOP1 (159)
        // SubProg mark_all pc: 180 op: STARTLINE (58)

        /** symtab.e:564							break*/
        // SubProg mark_all pc: 182 op: ELSE (23)
        goto L7; // [182] 243
        // SubProg mark_all pc: 184 op: STARTLINE (58)

        /** symtab.e:565						case SC_EXPORT then*/
        // SubProg mark_all pc: 186 op: CASE (186)
        case 11:
        // SubProg mark_all pc: 188 op: STARTLINE (58)

        /** symtab.e:566							if not and_bits( DIRECT_INCLUDE, include_matrix[current_file_no][sym_file] ) then*/
        // SubProg mark_all pc: 190 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 192 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 196 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24668 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
        // SubProg mark_all pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24668);
        _24669 = (object)*(((s1_ptr)_2)->base + _sym_file_47254);
        _24668 = NOVALUE;
        // SubProg mark_all pc: 204 op: AND_BITS (56)
        if (IS_ATOM_INT(_24669)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24669;
                 _24670 = MAKE_UINT(tu);
            }
        }
        else {
            _24670 = binary_op(AND_BITS, 2, _24669);
        }
        _24669 = NOVALUE;
        // SubProg mark_all pc: 208 op: NOT_IFW (108)
        if (IS_ATOM_INT(_24670)) {
            if (_24670 != 0){
                DeRef(_24670);
                _24670 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        else {
            if (DBL_PTR(_24670)->dbl != 0.0){
                DeRef(_24670);
                _24670 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        DeRef(_24670);
        _24670 = NOVALUE;
        // SubProg mark_all pc: 211 op: STARTLINE (58)

        /** symtab.e:567								break*/
        // SubProg mark_all pc: 213 op: ELSE (23)
        goto L9; // [213] 217
        // SubProg mark_all pc: 215 op: NOP1 (159)
L8: // addr: 216 pc: 215 sub: 47242 op: 159
        // SubProg mark_all pc: 216 op: NOP1 (159)
L9: // addr: 217 pc: 216 sub: 47242 op: 159
        // SubProg mark_all pc: 217 op: STARTLINE (58)

        /** symtab.e:570						case SC_GLOBAL then*/
        // SubProg mark_all pc: 219 op: CASE (186)
        case 6:
        // SubProg mark_all pc: 221 op: STARTLINE (58)

        /** symtab.e:571							SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 225 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _7SymTab_11389 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47247 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 230 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24674 = (object)*(((s1_ptr)_2)->base + _attribute_47244);
        _24672 = NOVALUE;
        // SubProg mark_all pc: 234 op: PLUS1 (93)
        if (IS_ATOM_INT(_24674)) {
            _24675 = _24674 + 1;
            if (_24675 > MAXINT){
                _24675 = NewDouble((eudouble)_24675);
            }
        }
        else
        _24675 = binary_op(PLUS, 1, _24674);
        _24674 = NOVALUE;
        // SubProg mark_all pc: 238 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47244);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24675;
        if( _1 != _24675 ){
            DeRef(_1);
        }
        _24675 = NOVALUE;
        _24672 = NOVALUE;
        // SubProg mark_all pc: 242 op: NOPSWITCH (187)
    ;}L7: // addr: 243 pc: 242 sub: 47242 op: 187
    // SubProg mark_all pc: 243 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var scope_47271
    // SubProg mark_all pc: 245 op: NOP1 (159)
L6: // addr: 246 pc: 245 sub: 47242 op: 159
    // SubProg mark_all pc: 246 op: STARTLINE (58)

    /** symtab.e:575				p = SymTab[p][S_NEXT]*/
    // SubProg mark_all pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24676 = (object)*(((s1_ptr)_2)->base + _p_47247);
    // SubProg mark_all pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 256 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24676);
    _p_47247 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47247)){
        _p_47247 = (object)DBL_PTR(_p_47247)->dbl;
    }
    _24676 = NOVALUE;
    // SubProg mark_all pc: 262 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var sym_file_47254
    // SubProg mark_all pc: 264 op: STARTLINE (58)

    /** symtab.e:576			end while*/
    // SubProg mark_all pc: 266 op: ENDWHILE (22)
    goto L2; // [266] 33
    // SubProg mark_all pc: 268 op: NOP1 (159)
L3: // addr: 269 pc: 268 sub: 47242 op: 159
    // SubProg mark_all pc: 269 op: NOP1 (159)
L1: // addr: 270 pc: 269 sub: 47242 op: 159
    // SubProg mark_all pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var p_47247
    // SubProg mark_all pc: 272 op: STARTLINE (58)

    /** symtab.e:578	end procedure*/
    // SubProg mark_all pc: 274 op: RETURNP (29)

// Exiting block BLOCK: mark_all

// block var attribute_47244
    DeRef(_24650);
    _24650 = NOVALUE;
    return;
    // SubProg mark_all pc: 277 op: BADRETURNF (43)
    ;
}


void _53mark_rechecks(object _file_no_47320)
{
    object _recheck_targets_47323 = NOVALUE;
    object _remaining_47327 = NOVALUE;
    object _marked_47331 = NOVALUE;
// skipping _24686  name type: 0
// skipping _24685  name type: 0
// skipping _24684  name type: 0
    object _24683 = NOVALUE; // 47341 24683
// skipping _24682  name type: 0
    object _24681 = NOVALUE; // 47335 24681
    object _24680 = NOVALUE; // 47330 24680
    object _24679 = NOVALUE; // 47326 24679
// skipping _24678  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg mark_rechecks pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_file_no_47320)) {
        _1 = (object)(DBL_PTR(_file_no_47320)->dbl);
        DeRefDS(_file_no_47320);
        _file_no_47320 = _1;
    }
    // SubProg mark_rechecks pc: 3 op: STARTLINE (58)

    /** symtab.e:584		sequence recheck_targets = map:get( recheck_routines, file_no, {} )*/
    // SubProg mark_rechecks pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 7 op: PROC (27)
    Ref(_53recheck_routines_47314);
    RefDS(_21958);
    _0 = _recheck_targets_47323;
    _recheck_targets_47323 = _33get(_53recheck_routines_47314, _file_no_47320, _21958);
    DeRef(_0);
    // SubProg mark_rechecks pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 15 op: STARTLINE (58)

    /** symtab.e:585		if length( recheck_targets ) then*/
    // SubProg mark_rechecks pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47323)){
            _24679 = SEQ_PTR(_recheck_targets_47323)->length;
    }
    else {
        _24679 = 1;
    }
    // SubProg mark_rechecks pc: 20 op: IF (20)
    if (_24679 == 0)
    {
        _24679 = NOVALUE;
        goto L1; // [20] 129
    }
    else{
        _24679 = NOVALUE;
    }
    // SubProg mark_rechecks pc: 23 op: STARTLINE (58)

    /** symtab.e:586			sequence remaining = {}*/
    // SubProg mark_rechecks pc: 25 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_remaining_47327);
    _remaining_47327 = _21958;
    // SubProg mark_rechecks pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 30 op: STARTLINE (58)

    /** symtab.e:587			for i = length( recheck_targets ) to 1 by -1 do*/
    // SubProg mark_rechecks pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47323)){
            _24680 = SEQ_PTR(_recheck_targets_47323)->length;
    }
    else {
        _24680 = 1;
    }
    // SubProg mark_rechecks pc: 35 op: FOR_I (125)
    {
        object _i_47329;
        _i_47329 = _24680;
L2: // addr: 42 pc: 35 sub: 47318 op: 125
        if (_i_47329 < 1){
            goto L3; // [35] 117
        }
        // SubProg mark_rechecks pc: 42 op: STARTLINE (58)

        /** symtab.e:588				integer marked = 0*/
        // SubProg mark_rechecks pc: 44 op: ASSIGN_I (113)
        _marked_47331 = 0;
        // SubProg mark_rechecks pc: 47 op: STARTLINE (58)

        /** symtab.e:589				if TRANSLATE then*/
        // SubProg mark_rechecks pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 51 op: IF (20)
        if (_5TRANSLATE_12097 == 0)
        {
            goto L4; // [51] 72
        }
        else{
        }
        // SubProg mark_rechecks pc: 54 op: STARTLINE (58)

        /** symtab.e:590					marked = MarkTargets( recheck_targets[i], S_RI_TARGET )*/
        // SubProg mark_rechecks pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47323);
        _24681 = (object)*(((s1_ptr)_2)->base + _i_47329);
        // SubProg mark_rechecks pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 62 op: PROC (27)
        Ref(_24681);
        _marked_47331 = _53MarkTargets(_24681, 53);
        _24681 = NOVALUE;
        // SubProg mark_rechecks pc: 67 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47331)) {
            _1 = (object)(DBL_PTR(_marked_47331)->dbl);
            DeRefDS(_marked_47331);
            _marked_47331 = _1;
        }
        // SubProg mark_rechecks pc: 69 op: ELSE (23)
        goto L5; // [69] 96
        // SubProg mark_rechecks pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 47318 op: 159
        // SubProg mark_rechecks pc: 72 op: STARTLINE (58)

        /** symtab.e:591				elsif BIND then*/
        // SubProg mark_rechecks pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 76 op: IF (20)
        if (_5BIND_12100 == 0)
        {
            goto L6; // [76] 95
        }
        else{
        }
        // SubProg mark_rechecks pc: 79 op: STARTLINE (58)

        /** symtab.e:592					marked = MarkTargets( recheck_targets[i], S_NREFS )*/
        // SubProg mark_rechecks pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47323);
        _24683 = (object)*(((s1_ptr)_2)->base + _i_47329);
        // SubProg mark_rechecks pc: 85 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 87 op: PROC (27)
        Ref(_24683);
        _marked_47331 = _53MarkTargets(_24683, 12);
        _24683 = NOVALUE;
        // SubProg mark_rechecks pc: 92 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47331)) {
            _1 = (object)(DBL_PTR(_marked_47331)->dbl);
            DeRefDS(_marked_47331);
            _marked_47331 = _1;
        }
        // SubProg mark_rechecks pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 47318 op: 159
        // SubProg mark_rechecks pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 47318 op: 159
        // SubProg mark_rechecks pc: 96 op: STARTLINE (58)

        /** symtab.e:594				if not marked then*/
        // SubProg mark_rechecks pc: 98 op: NOT_IFW (108)
        if (_marked_47331 != 0)
        goto L7; // [98] 108
        // SubProg mark_rechecks pc: 101 op: STARTLINE (58)

        /** symtab.e:595					remaining &= file_no*/
        // SubProg mark_rechecks pc: 103 op: CONCAT (15)
        Append(&_remaining_47327, _remaining_47327, _file_no_47320);
        // SubProg mark_rechecks pc: 107 op: NOP1 (159)
L7: // addr: 108 pc: 107 sub: 47318 op: 159
        // SubProg mark_rechecks pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var marked_47331
        // SubProg mark_rechecks pc: 110 op: STARTLINE (58)

        /** symtab.e:597			end for*/
        // SubProg mark_rechecks pc: 112 op: ENDFOR_GENERAL (39)
        _i_47329 = _i_47329 + -1;
        goto L2; // [112] 42
L3: // addr: 117 pc: 112 sub: 47318 op: 39
        ;
    }
    // SubProg mark_rechecks pc: 117 op: STARTLINE (58)

    /** symtab.e:598			map:put( recheck_routines, file_no, recheck_targets )*/
    // SubProg mark_rechecks pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 121 op: PROC (27)
    Ref(_53recheck_routines_47314);
    RefDS(_recheck_targets_47323);
    _33put(_53recheck_routines_47314, _file_no_47320, _recheck_targets_47323, 1, 0);
    // SubProg mark_rechecks pc: 128 op: NOP1 (159)
L1: // addr: 129 pc: 128 sub: 47318 op: 159
    // SubProg mark_rechecks pc: 129 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var remaining_47327
    DeRefi(_remaining_47327);
    _remaining_47327 = NOVALUE;
    // SubProg mark_rechecks pc: 131 op: STARTLINE (58)

    /** symtab.e:600	end procedure*/
    // SubProg mark_rechecks pc: 133 op: RETURNP (29)

// Exiting block BLOCK: mark_rechecks

// block var file_no_47320

// block var recheck_targets_47323
    DeRef(_recheck_targets_47323);
    return;
    // SubProg mark_rechecks pc: 136 op: BADRETURNF (43)
    ;
}


void _53mark_final_targets()
{
    object _size_1__tmp_at47_47359 = NOVALUE;
    object _size_inlined_size_at_47_47358 = NOVALUE;
    object _recheck_files_47360 = NOVALUE;
    object _24689 = NOVALUE; // 47365 24689
    object _24688 = NOVALUE; // 47364 24688
// skipping _24687  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg mark_final_targets pc: 1 op: STARTLINE (58)

    /** symtab.e:603		if just_mark_everything_from then*/
    // SubProg mark_final_targets pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 5 op: IF (20)
    if (_53just_mark_everything_from_47241 == 0)
    {
        goto L1; // [5] 44
    }
    else{
    }
    // SubProg mark_final_targets pc: 8 op: STARTLINE (58)

    /** symtab.e:604			if TRANSLATE then*/
    // SubProg mark_final_targets pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 12 op: IF (20)
    if (_5TRANSLATE_12097 == 0)
    {
        goto L2; // [12] 25
    }
    else{
    }
    // SubProg mark_final_targets pc: 15 op: STARTLINE (58)

    /** symtab.e:605				mark_all( S_RI_TARGET )*/
    // SubProg mark_final_targets pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 19 op: PROC (27)
    _53mark_all(53);
    // SubProg mark_final_targets pc: 22 op: ELSE (23)
    goto L3; // [22] 109
    // SubProg mark_final_targets pc: 24 op: NOP1 (159)
L2: // addr: 25 pc: 24 sub: 47347 op: 159
    // SubProg mark_final_targets pc: 25 op: STARTLINE (58)

    /** symtab.e:606			elsif BIND then*/
    // SubProg mark_final_targets pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 29 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L3; // [29] 109
    }
    else{
    }
    // SubProg mark_final_targets pc: 32 op: STARTLINE (58)

    /** symtab.e:607				mark_all( S_NREFS )*/
    // SubProg mark_final_targets pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 36 op: PROC (27)
    _53mark_all(12);
    // SubProg mark_final_targets pc: 39 op: NOP1 (159)
    // SubProg mark_final_targets pc: 40 op: NOP1 (159)
    // SubProg mark_final_targets pc: 41 op: ELSE (23)
    goto L3; // [41] 109
    // SubProg mark_final_targets pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 47347 op: 159
    // SubProg mark_final_targets pc: 44 op: STARTLINE (58)

    /** symtab.e:609		elsif map:size( recheck_routines ) then*/
    // SubProg mark_final_targets pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 48 op: STARTLINE (58)

    /** map.e:802		return eumem:ram_space[the_map_p][MAP_SIZE]*/
    // SubProg mark_final_targets pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 52 op: RHS_SUBS (25)
    DeRef(_size_1__tmp_at47_47359);
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!IS_ATOM_INT(_53recheck_routines_47314)){
        _size_1__tmp_at47_47359 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_53recheck_routines_47314)->dbl));
    }
    else{
        _size_1__tmp_at47_47359 = (object)*(((s1_ptr)_2)->base + _53recheck_routines_47314);
    }
    Ref(_size_1__tmp_at47_47359);
    // SubProg mark_final_targets pc: 56 op: RHS_SUBS_CHECK (92)
    DeRef(_size_inlined_size_at_47_47358);
    _2 = (object)SEQ_PTR(_size_1__tmp_at47_47359);
    _size_inlined_size_at_47_47358 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_size_inlined_size_at_47_47358);
    // SubProg mark_final_targets pc: 60 op: NOP1 (159)
    // SubProg mark_final_targets pc: 61 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-size from mark_final_targets @ 47

// block var size_1__tmp_at47_47359
    DeRef(_size_1__tmp_at47_47359);
    _size_1__tmp_at47_47359 = NOVALUE;
    // SubProg mark_final_targets pc: 63 op: IF (20)
    if (_size_inlined_size_at_47_47358 == 0) {
        goto L4; // [63] 106
    }
    else {
        if (!IS_ATOM_INT(_size_inlined_size_at_47_47358) && DBL_PTR(_size_inlined_size_at_47_47358)->dbl == 0.0){
            goto L4; // [63] 106
        }
    }
    // SubProg mark_final_targets pc: 66 op: STARTLINE (58)

    /** symtab.e:610			sequence recheck_files = map:keys( recheck_routines )*/
    // SubProg mark_final_targets pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 70 op: PROC (27)
    Ref(_53recheck_routines_47314);
    _0 = _recheck_files_47360;
    _recheck_files_47360 = _33keys(_53recheck_routines_47314, 0);
    DeRef(_0);
    // SubProg mark_final_targets pc: 75 op: SEQUENCE_CHECK (97)
    // SubProg mark_final_targets pc: 77 op: STARTLINE (58)

    /** symtab.e:611			for i = 1 to length( recheck_files ) do*/
    // SubProg mark_final_targets pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_files_47360)){
            _24688 = SEQ_PTR(_recheck_files_47360)->length;
    }
    else {
        _24688 = 1;
    }
    // SubProg mark_final_targets pc: 82 op: FOR_I (125)
    {
        object _i_47363;
        _i_47363 = 1;
L5: // addr: 89 pc: 82 sub: 47347 op: 125
        if (_i_47363 > _24688){
            goto L6; // [82] 105
        }
        // SubProg mark_final_targets pc: 89 op: STARTLINE (58)

        /** symtab.e:612				mark_rechecks( recheck_files[i] )*/
        // SubProg mark_final_targets pc: 91 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_files_47360);
        _24689 = (object)*(((s1_ptr)_2)->base + _i_47363);
        // SubProg mark_final_targets pc: 95 op: PROC (27)
        Ref(_24689);
        _53mark_rechecks(_24689);
        _24689 = NOVALUE;
        // SubProg mark_final_targets pc: 98 op: STARTLINE (58)

        /** symtab.e:613			end for*/
        // SubProg mark_final_targets pc: 100 op: ENDFOR_INT_UP1 (54)
        _i_47363 = _i_47363 + 1;
        goto L5; // [100] 89
L6: // addr: 105 pc: 100 sub: 47347 op: 54
        ;
    }
    // SubProg mark_final_targets pc: 105 op: NOP1 (159)
L4: // addr: 106 pc: 105 sub: 47347 op: 159
    // SubProg mark_final_targets pc: 106 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var recheck_files_47360
    DeRef(_recheck_files_47360);
    _recheck_files_47360 = NOVALUE;
    // SubProg mark_final_targets pc: 108 op: NOP1 (159)
L3: // addr: 109 pc: 108 sub: 47347 op: 159
    // SubProg mark_final_targets pc: 109 op: STARTLINE (58)

    /** symtab.e:615	end procedure*/
    // SubProg mark_final_targets pc: 111 op: RETURNP (29)

// Exiting block BLOCK: mark_final_targets
    return;
    // SubProg mark_final_targets pc: 114 op: BADRETURNF (43)
    ;
}


object _53is_routine(object _sym_47369)
{
    object _tok_47370 = NOVALUE;
// skipping _24690  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_routine pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_routine pc: 3 op: STARTLINE (58)

    /** symtab.e:618		integer tok = sym_token( sym )*/
    // SubProg is_routine pc: 5 op: PROC (27)
    _tok_47370 = _53sym_token(_sym_47369);
    // SubProg is_routine pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tok_47370)) {
        _1 = (object)(DBL_PTR(_tok_47370)->dbl);
        DeRefDS(_tok_47370);
        _tok_47370 = _1;
    }
    // SubProg is_routine pc: 11 op: STARTLINE (58)

    /** symtab.e:619		switch tok do*/
    // SubProg is_routine pc: 13 op: SWITCH_I (193)
    _0 = _tok_47370;
    switch ( _0 ){ 
        // SubProg is_routine pc: 18 op: STARTLINE (58)

        /** symtab.e:620			case FUNC, PROC, TYPE then*/
        // SubProg is_routine pc: 20 op: CASE (186)
        case 501:
        // SubProg is_routine pc: 22 op: CASE (186)
        case 27:
        // SubProg is_routine pc: 24 op: CASE (186)
        case 504:
        // SubProg is_routine pc: 26 op: STARTLINE (58)

        /** symtab.e:621				return 1*/
        // SubProg is_routine pc: 28 op: RETURNF (28)

// Exiting block BLOCK: is_routine

// block var sym_47369

// block var tok_47370
        return 1;
        // SubProg is_routine pc: 32 op: ELSE (23)
        goto L1; // [32] 45
        // SubProg is_routine pc: 34 op: STARTLINE (58)

        /** symtab.e:622			case else*/
        // SubProg is_routine pc: 36 op: CASE (186)
        default:
        // SubProg is_routine pc: 38 op: STARTLINE (58)

        /** symtab.e:623				return 0*/
        // SubProg is_routine pc: 40 op: RETURNF (28)

// Exiting block BLOCK: is_routine

// block var sym_47369

// block var tok_47370
        return 0;
        // SubProg is_routine pc: 44 op: NOPSWITCH (187)
    ;}L1: // addr: 45 pc: 44 sub: 47366 op: 187
    // SubProg is_routine pc: 45 op: BADRETURNF (43)
    ;
}


object _53is_visible(object _sym_47383, object _from_file_47384)
{
    object _scope_47385 = NOVALUE;
    object _sym_file_47388 = NOVALUE;
    object _visible_mask_47393 = NOVALUE;
    object _24701 = NOVALUE; // 47409 24701
    object _24700 = NOVALUE; // 47408 24700
    object _24699 = NOVALUE; // 47407 24699
    object _24698 = NOVALUE; // 47405 24698
// skipping _24695  name type: 0
    object _24694 = NOVALUE; // 47390 24694
// skipping _24693  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_visible pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 3 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 5 op: STARTLINE (58)

    /** symtab.e:628		integer scope = sym_scope( sym )*/
    // SubProg is_visible pc: 7 op: PROC (27)
    _scope_47385 = _53sym_scope(_sym_47383);
    // SubProg is_visible pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_scope_47385)) {
        _1 = (object)(DBL_PTR(_scope_47385)->dbl);
        DeRefDS(_scope_47385);
        _scope_47385 = _1;
    }
    // SubProg is_visible pc: 13 op: STARTLINE (58)

    /** symtab.e:629		integer sym_file = SymTab[sym][S_FILE_NO]*/
    // SubProg is_visible pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24694 = (object)*(((s1_ptr)_2)->base + _sym_47383);
    // SubProg is_visible pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24694);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _sym_file_47388 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _sym_file_47388 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_sym_file_47388)){
        _sym_file_47388 = (object)DBL_PTR(_sym_file_47388)->dbl;
    }
    _24694 = NOVALUE;
    // SubProg is_visible pc: 29 op: STARTLINE (58)

    /** symtab.e:631		switch scope do*/
    // SubProg is_visible pc: 31 op: SWITCH_I (193)
    _0 = _scope_47385;
    switch ( _0 ){ 
        // SubProg is_visible pc: 36 op: STARTLINE (58)

        /** symtab.e:632			case SC_PUBLIC then*/
        // SubProg is_visible pc: 38 op: CASE (186)
        case 13:
        // SubProg is_visible pc: 40 op: STARTLINE (58)

        /** symtab.e:633				visible_mask = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg is_visible pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg is_visible pc: 44 op: ASSIGN (18)
        _visible_mask_47393 = 6;
        // SubProg is_visible pc: 47 op: INTEGER_CHECK (96)
        // SubProg is_visible pc: 49 op: ELSE (23)
        goto L1; // [49] 93
        // SubProg is_visible pc: 51 op: STARTLINE (58)

        /** symtab.e:634			case SC_EXPORT then*/
        // SubProg is_visible pc: 53 op: CASE (186)
        case 11:
        // SubProg is_visible pc: 55 op: STARTLINE (58)

        /** symtab.e:635				visible_mask = DIRECT_INCLUDE*/
        // SubProg is_visible pc: 57 op: GLOBAL_INIT_CHECK (109)
        // SubProg is_visible pc: 59 op: ASSIGN (18)
        _visible_mask_47393 = 2;
        // SubProg is_visible pc: 62 op: INTEGER_CHECK (96)
        // SubProg is_visible pc: 64 op: ELSE (23)
        goto L1; // [64] 93
        // SubProg is_visible pc: 66 op: STARTLINE (58)

        /** symtab.e:636			case SC_GLOBAL then*/
        // SubProg is_visible pc: 68 op: CASE (186)
        case 6:
        // SubProg is_visible pc: 70 op: STARTLINE (58)

        /** symtab.e:637				return 1*/
        // SubProg is_visible pc: 72 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47383

// block var from_file_47384

// block var scope_47385

// block var sym_file_47388

// block var visible_mask_47393
        return 1;
        // SubProg is_visible pc: 76 op: ELSE (23)
        goto L1; // [76] 93
        // SubProg is_visible pc: 78 op: STARTLINE (58)

        /** symtab.e:638			case else*/
        // SubProg is_visible pc: 80 op: CASE (186)
        default:
        // SubProg is_visible pc: 82 op: STARTLINE (58)

        /** symtab.e:639				return from_file = sym_file*/
        // SubProg is_visible pc: 84 op: EQUALS (3)
        _24698 = (_from_file_47384 == _sym_file_47388);
        // SubProg is_visible pc: 88 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47383

// block var from_file_47384

// block var scope_47385

// block var sym_file_47388

// block var visible_mask_47393
        return _24698;
        // SubProg is_visible pc: 92 op: NOPSWITCH (187)
    ;}L1: // addr: 93 pc: 92 sub: 47380 op: 187
    // SubProg is_visible pc: 93 op: STARTLINE (58)

    /** symtab.e:641		return and_bits( visible_mask, include_matrix[from_file][sym_file] )*/
    // SubProg is_visible pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg is_visible pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 99 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _24699 = (object)*(((s1_ptr)_2)->base + _from_file_47384);
    // SubProg is_visible pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24699);
    _24700 = (object)*(((s1_ptr)_2)->base + _sym_file_47388);
    _24699 = NOVALUE;
    // SubProg is_visible pc: 107 op: AND_BITS (56)
    if (IS_ATOM_INT(_24700)) {
        {uintptr_t tu;
             tu = (uintptr_t)_visible_mask_47393 & (uintptr_t)_24700;
             _24701 = MAKE_UINT(tu);
        }
    }
    else {
        _24701 = binary_op(AND_BITS, _visible_mask_47393, _24700);
    }
    _24700 = NOVALUE;
    // SubProg is_visible pc: 111 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47383

// block var from_file_47384

// block var scope_47385

// block var sym_file_47388

// block var visible_mask_47393
    DeRef(_24698);
    _24698 = NOVALUE;
    return _24701;
    // SubProg is_visible pc: 115 op: BADRETURNF (43)
    ;
}


object _53MarkTargets(object _s_47413, object _attribute_47414)
{
    object _p_47416 = NOVALUE;
    object _sname_47417 = NOVALUE;
    object _string_47418 = NOVALUE;
    object _colon_47419 = NOVALUE;
    object _h_47420 = NOVALUE;
    object _scope_47421 = NOVALUE;
    object _found_47442 = NOVALUE;
// skipping _24752  name type: 0
// skipping _24751  name type: 0
// skipping _24750  name type: 0
    object _24749 = NOVALUE; // 47502 24749
// skipping _24748  name type: 0
    object _24747 = NOVALUE; // 47499 24747
    object _24746 = NOVALUE; // 47497 24746
    object _24745 = NOVALUE; // 47493 24745
    object _24744 = NOVALUE; // 47492 24744
// skipping _24743  name type: 0
    object _24742 = NOVALUE; // 47490 24742
    object _24741 = NOVALUE; // 47488 24741
    object _24740 = NOVALUE; // 47486 24740
    object _24739 = NOVALUE; // 47485 24739
    object _24738 = NOVALUE; // 47483 24738
// skipping _24737  name type: 0
    object _24736 = NOVALUE; // 47476 24736
    object _24735 = NOVALUE; // 47475 24735
    object _24734 = NOVALUE; // 47473 24734
// skipping _24733  name type: 0
    object _24732 = NOVALUE; // 47468 24732
// skipping _24731  name type: 0
    object _24730 = NOVALUE; // 47466 24730
// skipping _24729  name type: 0
    object _24728 = NOVALUE; // 47463 24728
    object _24727 = NOVALUE; // 47462 24727
    object _24726 = NOVALUE; // 47461 24726
    object _24725 = NOVALUE; // 47460 24725
// skipping _24724  name type: 0
    object _24723 = NOVALUE; // 47458 24723
    object _24722 = NOVALUE; // 47457 24722
    object _24721 = NOVALUE; // 47456 24721
    object _24720 = NOVALUE; // 47455 24720
// skipping _24719  name type: 0
    object _24718 = NOVALUE; // 47452 24718
    object _24717 = NOVALUE; // 47451 24717
// skipping _24716  name type: 0
// skipping _24715  name type: 0
// skipping _24714  name type: 0
    object _24713 = NOVALUE; // 47444 24713
    object _24712 = NOVALUE; // 47441 24712
    object _24711 = NOVALUE; // 47440 24711
    object _24710 = NOVALUE; // 47438 24710
    object _24709 = NOVALUE; // 47436 24709
    object _24708 = NOVALUE; // 47435 24708
    object _24707 = NOVALUE; // 47433 24707
    object _24706 = NOVALUE; // 47431 24706
    object _24705 = NOVALUE; // 47429 24705
    object _24704 = NOVALUE; // 47428 24704
    object _24703 = NOVALUE; // 47426 24703
    object _24702 = NOVALUE; // 47424 24702
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg MarkTargets pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47413)) {
        _1 = (object)(DBL_PTR(_s_47413)->dbl);
        DeRefDS(_s_47413);
        _s_47413 = _1;
    }
    // SubProg MarkTargets pc: 3 op: INTEGER_CHECK (96)
    // SubProg MarkTargets pc: 5 op: STARTLINE (58)

    /** symtab.e:648		sequence sname*/
    // SubProg MarkTargets pc: 7 op: STARTLINE (58)

    /** symtab.e:649		sequence string*/
    // SubProg MarkTargets pc: 9 op: STARTLINE (58)

    /** symtab.e:650		integer colon, h*/
    // SubProg MarkTargets pc: 11 op: STARTLINE (58)

    /** symtab.e:651		integer scope*/
    // SubProg MarkTargets pc: 13 op: STARTLINE (58)

    /** symtab.e:653		if (SymTab[s][S_MODE] = M_TEMP or*/
    // SubProg MarkTargets pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24702 = (object)*(((s1_ptr)_2)->base + _s_47413);
    // SubProg MarkTargets pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24702);
    _24703 = (object)*(((s1_ptr)_2)->base + 3);
    _24702 = NOVALUE;
    // SubProg MarkTargets pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 29 op: EQUALS (3)
    if (IS_ATOM_INT(_24703)) {
        _24704 = (_24703 == 3);
    }
    else {
        _24704 = binary_op(EQUALS, _24703, 3);
    }
    _24703 = NOVALUE;
    // SubProg MarkTargets pc: 33 op: SC1_OR (143)
    if (IS_ATOM_INT(_24704)) {
        if (_24704 != 0) {
            _24705 = 1;
            goto L1; // [33] 59
        }
    }
    else {
        if (DBL_PTR(_24704)->dbl != 0.0) {
            _24705 = 1;
            goto L1; // [33] 59
        }
    }
    // SubProg MarkTargets pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24706 = (object)*(((s1_ptr)_2)->base + _s_47413);
    // SubProg MarkTargets pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24706);
    _24707 = (object)*(((s1_ptr)_2)->base + 3);
    _24706 = NOVALUE;
    // SubProg MarkTargets pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 51 op: EQUALS (3)
    if (IS_ATOM_INT(_24707)) {
        _24708 = (_24707 == 2);
    }
    else {
        _24708 = binary_op(EQUALS, _24707, 2);
    }
    _24707 = NOVALUE;
    // SubProg MarkTargets pc: 55 op: SC2_OR (144)
    DeRef(_24705);
    if (IS_ATOM_INT(_24708))
    _24705 = (_24708 != 0);
    else
    _24705 = DBL_PTR(_24708)->dbl != 0.0;
    // SubProg MarkTargets pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 47410 op: 159
    // SubProg MarkTargets pc: 59 op: SC1_AND_IF (146)
    if (_24705 == 0) {
        goto L2; // [59] 411
    }
    // SubProg MarkTargets pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24710 = (object)*(((s1_ptr)_2)->base + _s_47413);
    // SubProg MarkTargets pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24710);
    _24711 = (object)*(((s1_ptr)_2)->base + 1);
    _24710 = NOVALUE;
    // SubProg MarkTargets pc: 75 op: IS_A_SEQUENCE (68)
    _24712 = IS_SEQUENCE(_24711);
    _24711 = NOVALUE;
    // SubProg MarkTargets pc: 78 op: NOP1 (159)
    // SubProg MarkTargets pc: 79 op: IF (20)
    if (_24712 == 0)
    {
        _24712 = NOVALUE;
        goto L2; // [79] 411
    }
    else{
        _24712 = NOVALUE;
    }
    // SubProg MarkTargets pc: 82 op: STARTLINE (58)

    /** symtab.e:658			integer found = 0*/
    // SubProg MarkTargets pc: 84 op: ASSIGN_I (113)
    _found_47442 = 0;
    // SubProg MarkTargets pc: 87 op: STARTLINE (58)

    /** symtab.e:660			string = SymTab[s][S_OBJ]*/
    // SubProg MarkTargets pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24713 = (object)*(((s1_ptr)_2)->base + _s_47413);
    // SubProg MarkTargets pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 97 op: RHS_SUBS_CHECK (92)
    DeRef(_string_47418);
    _2 = (object)SEQ_PTR(_24713);
    _string_47418 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_string_47418);
    _24713 = NOVALUE;
    // SubProg MarkTargets pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 103 op: STARTLINE (58)

    /** symtab.e:661			colon = find(':', string)*/
    // SubProg MarkTargets pc: 105 op: FIND_FROM (176)
    _colon_47419 = find_from(58, _string_47418, 1);
    // SubProg MarkTargets pc: 110 op: STARTLINE (58)

    /** symtab.e:662			if colon = 0 then*/
    // SubProg MarkTargets pc: 112 op: EQUALS_IFW_I (121)
    if (_colon_47419 != 0)
    goto L3; // [112] 126
    // SubProg MarkTargets pc: 116 op: STARTLINE (58)

    /** symtab.e:663				sname = string*/
    // SubProg MarkTargets pc: 118 op: ASSIGN (18)
    RefDS(_string_47418);
    DeRef(_sname_47417);
    _sname_47417 = _string_47418;
    // SubProg MarkTargets pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 123 op: ELSE (23)
    goto L4; // [123] 200
    // SubProg MarkTargets pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 47410 op: 159
    // SubProg MarkTargets pc: 126 op: STARTLINE (58)

    /** symtab.e:665				sname = string[colon+1..$]  -- ignore namespace part*/
    // SubProg MarkTargets pc: 128 op: PLUS1 (93)
    _24717 = _colon_47419 + 1;
    if (_24717 > MAXINT){
        _24717 = NewDouble((eudouble)_24717);
    }
    // SubProg MarkTargets pc: 132 op: LENGTH (42)
    if (IS_SEQUENCE(_string_47418)){
            _24718 = SEQ_PTR(_string_47418)->length;
    }
    else {
        _24718 = 1;
    }
    // SubProg MarkTargets pc: 135 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_sname_47417;
    RHS_Slice(_string_47418, _24717, _24718);
    // SubProg MarkTargets pc: 140 op: STARTLINE (58)

    /** symtab.e:666				while length(sname) and sname[1] = ' ' or sname[1] = '\t' do*/
    // SubProg MarkTargets pc: 142 op: NOP2 (110)
    // SubProg MarkTargets pc: 144 op: NOPWHILE (158)
L5: // addr: 145 pc: 144 sub: 47410 op: 158
    // SubProg MarkTargets pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47417)){
            _24720 = SEQ_PTR(_sname_47417)->length;
    }
    else {
        _24720 = 1;
    }
    // SubProg MarkTargets pc: 148 op: SC1_AND (141)
    if (_24720 == 0) {
        _24721 = 0;
        goto L6; // [148] 164
    }
    // SubProg MarkTargets pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47417);
    _24722 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 156 op: EQUALS (3)
    if (IS_ATOM_INT(_24722)) {
        _24723 = (_24722 == 32);
    }
    else {
        _24723 = binary_op(EQUALS, _24722, 32);
    }
    _24722 = NOVALUE;
    // SubProg MarkTargets pc: 160 op: SC2_AND (142)
    if (IS_ATOM_INT(_24723))
    _24721 = (_24723 != 0);
    else
    _24721 = DBL_PTR(_24723)->dbl != 0.0;
    // SubProg MarkTargets pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 47410 op: 159
    // SubProg MarkTargets pc: 164 op: SC1_OR_IF (147)
    if (_24721 != 0) {
        goto L7; // [164] 181
    }
    // SubProg MarkTargets pc: 168 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47417);
    _24725 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 172 op: EQUALS (3)
    if (IS_ATOM_INT(_24725)) {
        _24726 = (_24725 == 9);
    }
    else {
        _24726 = binary_op(EQUALS, _24725, 9);
    }
    _24725 = NOVALUE;
    // SubProg MarkTargets pc: 176 op: NOP1 (159)
    // SubProg MarkTargets pc: 177 op: WHILE (47)
    if (_24726 <= 0) {
        if (_24726 == 0) {
            DeRef(_24726);
            _24726 = NOVALUE;
            goto L8; // [177] 199
        }
        else {
            if (!IS_ATOM_INT(_24726) && DBL_PTR(_24726)->dbl == 0.0){
                DeRef(_24726);
                _24726 = NOVALUE;
                goto L8; // [177] 199
            }
            DeRef(_24726);
            _24726 = NOVALUE;
        }
    }
    DeRef(_24726);
    _24726 = NOVALUE;
    // SubProg MarkTargets pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 47410 op: 159
    // SubProg MarkTargets pc: 181 op: STARTLINE (58)

    /** symtab.e:667					sname = tail( sname, length( sname ) -1 )*/
    // SubProg MarkTargets pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47417)){
            _24727 = SEQ_PTR(_sname_47417)->length;
    }
    else {
        _24727 = 1;
    }
    // SubProg MarkTargets pc: 186 op: MINUS (10)
    _24728 = _24727 - 1;
    _24727 = NOVALUE;
    // SubProg MarkTargets pc: 190 op: TAIL (199)
    {
        int len = SEQ_PTR(_sname_47417)->length;
        int size = (IS_ATOM_INT(_24728)) ? _24728 : (object)(DBL_PTR(_24728)->dbl);
        if (size <= 0) {
            DeRef(_sname_47417);
            _sname_47417 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_sname_47417);
            DeRef(_sname_47417);
            _sname_47417 = _sname_47417;
        }
        else Tail(SEQ_PTR(_sname_47417), len-size+1, &_sname_47417);
    }
    _24728 = NOVALUE;
    // SubProg MarkTargets pc: 194 op: STARTLINE (58)

    /** symtab.e:668				end while*/
    // SubProg MarkTargets pc: 196 op: ENDWHILE (22)
    goto L5; // [196] 145
    // SubProg MarkTargets pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 47410 op: 159
    // SubProg MarkTargets pc: 199 op: NOP1 (159)
L4: // addr: 200 pc: 199 sub: 47410 op: 159
    // SubProg MarkTargets pc: 200 op: STARTLINE (58)

    /** symtab.e:671			if length(sname) = 0 then*/
    // SubProg MarkTargets pc: 202 op: PRIVATE_INIT_CHECK (30)
    // SubProg MarkTargets pc: 204 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47417)){
            _24730 = SEQ_PTR(_sname_47417)->length;
    }
    else {
        _24730 = 1;
    }
    // SubProg MarkTargets pc: 207 op: EQUALS_IFW_I (121)
    if (_24730 != 0)
    goto L9; // [207] 218
    // SubProg MarkTargets pc: 211 op: STARTLINE (58)

    /** symtab.e:672				return 1*/
    // SubProg MarkTargets pc: 213 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var found_47442

// Exiting block BLOCK: MarkTargets

// block var s_47413

// block var attribute_47414

// block var sname_47417
    DeRefDS(_sname_47417);

// block var string_47418
    DeRef(_string_47418);

// block var colon_47419

// block var h_47420
    DeRef(_24708);
    _24708 = NOVALUE;
    DeRef(_24717);
    _24717 = NOVALUE;
    DeRef(_24704);
    _24704 = NOVALUE;
    DeRef(_24723);
    _24723 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 217 op: NOP1 (159)
L9: // addr: 218 pc: 217 sub: 47410 op: 159
    // SubProg MarkTargets pc: 218 op: STARTLINE (58)

    /** symtab.e:674			h = buckets[hashfn(sname)]*/
    // SubProg MarkTargets pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 222 op: PROC (27)
    RefDS(_sname_47417);
    _24732 = _53hashfn(_sname_47417);
    // SubProg MarkTargets pc: 226 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    if (!IS_ATOM_INT(_24732)){
        _h_47420 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24732)->dbl));
    }
    else{
        _h_47420 = (object)*(((s1_ptr)_2)->base + _24732);
    }
    if (!IS_ATOM_INT(_h_47420))
    _h_47420 = (object)DBL_PTR(_h_47420)->dbl;
    // SubProg MarkTargets pc: 230 op: STARTLINE (58)

    /** symtab.e:675			while h do*/
    // SubProg MarkTargets pc: 232 op: NOP2 (110)
    // SubProg MarkTargets pc: 234 op: NOPWHILE (158)
LA: // addr: 235 pc: 234 sub: 47410 op: 158
    // SubProg MarkTargets pc: 235 op: WHILE (47)
    if (_h_47420 == 0)
    {
        goto LB; // [235] 381
    }
    else{
    }
    // SubProg MarkTargets pc: 238 op: STARTLINE (58)

    /** symtab.e:676				if equal(sname, SymTab[h][S_NAME]) then*/
    // SubProg MarkTargets pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24734 = (object)*(((s1_ptr)_2)->base + _h_47420);
    // SubProg MarkTargets pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24734);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _24735 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _24735 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _24734 = NOVALUE;
    // SubProg MarkTargets pc: 252 op: EQUAL (153)
    if (_sname_47417 == _24735)
    _24736 = 1;
    else if (IS_ATOM_INT(_sname_47417) && IS_ATOM_INT(_24735))
    _24736 = 0;
    else
    _24736 = (compare(_sname_47417, _24735) == 0);
    _24735 = NOVALUE;
    // SubProg MarkTargets pc: 256 op: IF (20)
    if (_24736 == 0)
    {
        _24736 = NOVALUE;
        goto LC; // [256] 360
    }
    else{
        _24736 = NOVALUE;
    }
    // SubProg MarkTargets pc: 259 op: STARTLINE (58)

    /** symtab.e:677					if attribute = S_NREFS then*/
    // SubProg MarkTargets pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 263 op: EQUALS_IFW (104)
    if (_attribute_47414 != 12)
    goto LD; // [263] 289
    // SubProg MarkTargets pc: 267 op: STARTLINE (58)

    /** symtab.e:678						if BIND then*/
    // SubProg MarkTargets pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 271 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto LE; // [271] 359
    }
    else{
    }
    // SubProg MarkTargets pc: 274 op: STARTLINE (58)

    /** symtab.e:679							add_ref({PROC, h})*/
    // SubProg MarkTargets pc: 276 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 278 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 27;
    ((intptr_t *)_2)[2] = _h_47420;
    _24738 = MAKE_SEQ(_1);
    // SubProg MarkTargets pc: 282 op: PROC (27)
    _53add_ref(_24738);
    _24738 = NOVALUE;
    // SubProg MarkTargets pc: 285 op: NOP1 (159)
    // SubProg MarkTargets pc: 286 op: ELSE (23)
    goto LE; // [286] 359
    // SubProg MarkTargets pc: 288 op: NOP1 (159)
LD: // addr: 289 pc: 288 sub: 47410 op: 159
    // SubProg MarkTargets pc: 289 op: STARTLINE (58)

    /** symtab.e:681					elsif is_routine( h ) and is_visible( h, current_file_no ) then*/
    // SubProg MarkTargets pc: 291 op: PROC (27)
    _24739 = _53is_routine(_h_47420);
    // SubProg MarkTargets pc: 295 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24739)) {
        if (_24739 == 0) {
            goto LF; // [295] 358
        }
    }
    else {
        if (DBL_PTR(_24739)->dbl == 0.0) {
            goto LF; // [295] 358
        }
    }
    // SubProg MarkTargets pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 301 op: PROC (27)
    _24741 = _53is_visible(_h_47420, _5current_file_no_12477);
    // SubProg MarkTargets pc: 306 op: NOP1 (159)
    // SubProg MarkTargets pc: 307 op: IF (20)
    if (_24741 == 0) {
        DeRef(_24741);
        _24741 = NOVALUE;
        goto LF; // [307] 358
    }
    else {
        if (!IS_ATOM_INT(_24741) && DBL_PTR(_24741)->dbl == 0.0){
            DeRef(_24741);
            _24741 = NOVALUE;
            goto LF; // [307] 358
        }
        DeRef(_24741);
        _24741 = NOVALUE;
    }
    DeRef(_24741);
    _24741 = NOVALUE;
    // SubProg MarkTargets pc: 310 op: STARTLINE (58)

    /** symtab.e:682						SymTab[h][attribute] += 1*/
    // SubProg MarkTargets pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 314 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_h_47420 + ((s1_ptr)_2)->base);
    // SubProg MarkTargets pc: 319 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24744 = (object)*(((s1_ptr)_2)->base + _attribute_47414);
    _24742 = NOVALUE;
    // SubProg MarkTargets pc: 323 op: PLUS1 (93)
    if (IS_ATOM_INT(_24744)) {
        _24745 = _24744 + 1;
        if (_24745 > MAXINT){
            _24745 = NewDouble((eudouble)_24745);
        }
    }
    else
    _24745 = binary_op(PLUS, 1, _24744);
    _24744 = NOVALUE;
    // SubProg MarkTargets pc: 327 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47414);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24745;
    if( _1 != _24745 ){
        DeRef(_1);
    }
    _24745 = NOVALUE;
    _24742 = NOVALUE;
    // SubProg MarkTargets pc: 331 op: STARTLINE (58)

    /** symtab.e:683						if current_file_no = SymTab[h][S_FILE_NO] then*/
    // SubProg MarkTargets pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24746 = (object)*(((s1_ptr)_2)->base + _h_47420);
    // SubProg MarkTargets pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24746);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _24747 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _24747 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _24746 = NOVALUE;
    // SubProg MarkTargets pc: 347 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5current_file_no_12477, _24747)){
        _24747 = NOVALUE;
        goto L10; // [347] 357
    }
    _24747 = NOVALUE;
    // SubProg MarkTargets pc: 351 op: STARTLINE (58)

    /** symtab.e:684							found = 1*/
    // SubProg MarkTargets pc: 353 op: ASSIGN_I (113)
    _found_47442 = 1;
    // SubProg MarkTargets pc: 356 op: NOP1 (159)
L10: // addr: 357 pc: 356 sub: 47410 op: 159
    // SubProg MarkTargets pc: 357 op: NOP1 (159)
LF: // addr: 358 pc: 357 sub: 47410 op: 159
    // SubProg MarkTargets pc: 358 op: NOP1 (159)
LE: // addr: 359 pc: 358 sub: 47410 op: 159
    // SubProg MarkTargets pc: 359 op: NOP1 (159)
LC: // addr: 360 pc: 359 sub: 47410 op: 159
    // SubProg MarkTargets pc: 360 op: STARTLINE (58)

    /** symtab.e:688				h = SymTab[h][S_SAMEHASH]*/
    // SubProg MarkTargets pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 364 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24749 = (object)*(((s1_ptr)_2)->base + _h_47420);
    // SubProg MarkTargets pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24749);
    _h_47420 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_h_47420)){
        _h_47420 = (object)DBL_PTR(_h_47420)->dbl;
    }
    _24749 = NOVALUE;
    // SubProg MarkTargets pc: 376 op: STARTLINE (58)

    /** symtab.e:689			end while*/
    // SubProg MarkTargets pc: 378 op: ENDWHILE (22)
    goto LA; // [378] 235
    // SubProg MarkTargets pc: 380 op: NOP1 (159)
LB: // addr: 381 pc: 380 sub: 47410 op: 159
    // SubProg MarkTargets pc: 381 op: STARTLINE (58)

    /** symtab.e:691			if not found then*/
    // SubProg MarkTargets pc: 383 op: NOT_IFW (108)
    if (_found_47442 != 0)
    goto L11; // [383] 400
    // SubProg MarkTargets pc: 386 op: STARTLINE (58)

    /** symtab.e:692				map:put( recheck_routines, current_file_no, s, map:APPEND )*/
    // SubProg MarkTargets pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 392 op: PROC (27)
    Ref(_53recheck_routines_47314);
    _33put(_53recheck_routines_47314, _5current_file_no_12477, _s_47413, 6, 0);
    // SubProg MarkTargets pc: 399 op: NOP1 (159)
L11: // addr: 400 pc: 399 sub: 47410 op: 159
    // SubProg MarkTargets pc: 400 op: STARTLINE (58)

    /** symtab.e:694			return found*/
    // SubProg MarkTargets pc: 402 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: MarkTargets

// block var s_47413

// block var attribute_47414

// block var sname_47417
    DeRef(_sname_47417);

// block var string_47418
    DeRef(_string_47418);

// block var colon_47419

// block var h_47420
    DeRef(_24739);
    _24739 = NOVALUE;
    DeRef(_24708);
    _24708 = NOVALUE;
    DeRef(_24717);
    _24717 = NOVALUE;
    DeRef(_24732);
    _24732 = NOVALUE;
    DeRef(_24704);
    _24704 = NOVALUE;
    DeRef(_24723);
    _24723 = NOVALUE;
    return _found_47442;
    // SubProg MarkTargets pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var found_47442
    // SubProg MarkTargets pc: 408 op: ELSE (23)
    goto L12; // [408] 440
    // SubProg MarkTargets pc: 410 op: NOP1 (159)
L2: // addr: 411 pc: 410 sub: 47410 op: 159
    // SubProg MarkTargets pc: 411 op: STARTLINE (58)

    /** symtab.e:696			if not just_mark_everything_from then*/
    // SubProg MarkTargets pc: 413 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 415 op: NOT_IFW (108)
    if (_53just_mark_everything_from_47241 != 0)
    goto L13; // [415] 428
    // SubProg MarkTargets pc: 418 op: STARTLINE (58)

    /** symtab.e:697				just_mark_everything_from = TopLevelSub*/
    // SubProg MarkTargets pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 422 op: ASSIGN (18)
    _53just_mark_everything_from_47241 = _5TopLevelSub_12484;
    // SubProg MarkTargets pc: 425 op: INTEGER_CHECK (96)
    // SubProg MarkTargets pc: 427 op: NOP1 (159)
L13: // addr: 428 pc: 427 sub: 47410 op: 159
    // SubProg MarkTargets pc: 428 op: STARTLINE (58)

    /** symtab.e:699			mark_all( attribute )*/
    // SubProg MarkTargets pc: 430 op: PROC (27)
    _53mark_all(_attribute_47414);
    // SubProg MarkTargets pc: 433 op: STARTLINE (58)

    /** symtab.e:700			return 1*/
    // SubProg MarkTargets pc: 435 op: RETURNF (28)

// Exiting block BLOCK: MarkTargets

// block var s_47413

// block var attribute_47414

// block var sname_47417
    DeRef(_sname_47417);

// block var string_47418
    DeRef(_string_47418);

// block var colon_47419

// block var h_47420
    DeRef(_24739);
    _24739 = NOVALUE;
    DeRef(_24708);
    _24708 = NOVALUE;
    DeRef(_24717);
    _24717 = NOVALUE;
    DeRef(_24732);
    _24732 = NOVALUE;
    DeRef(_24704);
    _24704 = NOVALUE;
    DeRef(_24723);
    _24723 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 439 op: NOP1 (159)
L12: // addr: 440 pc: 439 sub: 47410 op: 159
    // SubProg MarkTargets pc: 440 op: BADRETURNF (43)
    ;
}


void _53resolve_unincluded_globals(object _ok_47520)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg resolve_unincluded_globals pc: 1 op: INTEGER_CHECK (96)
    // SubProg resolve_unincluded_globals pc: 3 op: STARTLINE (58)

    /** symtab.e:724		Resolve_unincluded_globals = ok*/
    // SubProg resolve_unincluded_globals pc: 5 op: ASSIGN_I (113)
    _53Resolve_unincluded_globals_47517 = 1;
    // SubProg resolve_unincluded_globals pc: 8 op: STARTLINE (58)

    /** symtab.e:725	end procedure*/
    // SubProg resolve_unincluded_globals pc: 10 op: RETURNP (29)

// Exiting block BLOCK: resolve_unincluded_globals

// block var ok_47520
    return;
    // SubProg resolve_unincluded_globals pc: 13 op: BADRETURNF (43)
    ;
}


object _53get_resolve_unincluded_globals()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_resolve_unincluded_globals pc: 1 op: STARTLINE (58)

    /** symtab.e:728		return Resolve_unincluded_globals*/
    // SubProg get_resolve_unincluded_globals pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_resolve_unincluded_globals pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_resolve_unincluded_globals
    return _53Resolve_unincluded_globals_47517;
    // SubProg get_resolve_unincluded_globals pc: 9 op: BADRETURNF (43)
    ;
}


object _53keyfind(object _word_47526, object _file_no_47527, object _scanning_file_47528, object _namespace_ok_47531, object _hashval_47532)
{
    object _msg_47534 = NOVALUE;
    object _b_name_47535 = NOVALUE;
    object _scope_47536 = NOVALUE;
    object _defined_47537 = NOVALUE;
    object _ix_47538 = NOVALUE;
    object _st_ptr_47540 = NOVALUE;
    object _st_builtin_47541 = NOVALUE;
    object _tok_47543 = NOVALUE;
    object _gtok_47544 = NOVALUE;
    object _any_symbol_47547 = NOVALUE;
    object _tok_file_47715 = NOVALUE;
    object _good_47722 = NOVALUE;
    object _include_type_47732 = NOVALUE;
    object _msg_file_47788 = NOVALUE;
// skipping _24945  name type: 0
    object _24944 = NOVALUE; // 47930 24944
    object _24943 = NOVALUE; // 47929 24943
// skipping _24942  name type: 0
    object _24941 = NOVALUE; // 47924 24941
// skipping _24940  name type: 0
    object _24939 = NOVALUE; // 47921 24939
    object _24938 = NOVALUE; // 47920 24938
    object _24937 = NOVALUE; // 47917 24937
    object _24936 = NOVALUE; // 47913 24936
    object _24935 = NOVALUE; // 47910 24935
// skipping _24934  name type: 0
    object _24933 = NOVALUE; // 47892 24933
// skipping _24932  name type: 0
    object _24931 = NOVALUE; // 47889 24931
    object _24930 = NOVALUE; // 47888 24930
    object _24929 = NOVALUE; // 47887 24929
    object _24928 = NOVALUE; // 47886 24928
    object _24927 = NOVALUE; // 47884 24927
    object _24926 = NOVALUE; // 47883 24926
    object _24925 = NOVALUE; // 47878 24925
    object _24924 = NOVALUE; // 47877 24924
// skipping _24923  name type: 0
    object _24922 = NOVALUE; // 47872 24922
    object _24921 = NOVALUE; // 47871 24921
    object _24920 = NOVALUE; // 47869 24920
    object _24919 = NOVALUE; // 47868 24919
    object _24918 = NOVALUE; // 47865 24918
    object _24917 = NOVALUE; // 47864 24917
    object _24916 = NOVALUE; // 47863 24916
    object _24915 = NOVALUE; // 47862 24915
    object _24914 = NOVALUE; // 47860 24914
    object _24913 = NOVALUE; // 47859 24913
    object _24912 = NOVALUE; // 47856 24912
    object _24911 = NOVALUE; // 47855 24911
    object _24910 = NOVALUE; // 47854 24910
    object _24909 = NOVALUE; // 47850 24909
    object _24908 = NOVALUE; // 47849 24908
    object _24907 = NOVALUE; // 47848 24907
    object _24906 = NOVALUE; // 47847 24906
// skipping _24905  name type: 0
    object _24904 = NOVALUE; // 47844 24904
    object _24903 = NOVALUE; // 47842 24903
// skipping _24902  name type: 0
// skipping _24901  name type: 0
    object _24900 = NOVALUE; // 47838 24900
// skipping _24899  name type: 0
// skipping _24898  name type: 0
// skipping _24897  name type: 0
    object _24896 = NOVALUE; // 47832 24896
// skipping _24895  name type: 0
    object _24894 = NOVALUE; // 47829 24894
    object _24893 = NOVALUE; // 47827 24893
    object _24892 = NOVALUE; // 47826 24892
    object _24891 = NOVALUE; // 47825 24891
    object _24890 = NOVALUE; // 47824 24890
// skipping _24889  name type: 0
    object _24888 = NOVALUE; // 47819 24888
    object _24887 = NOVALUE; // 47817 24887
    object _24886 = NOVALUE; // 47815 24886
    object _24885 = NOVALUE; // 47814 24885
// skipping _24884  name type: 0
    object _24883 = NOVALUE; // 47809 24883
// skipping _24881  name type: 0
    object _24880 = NOVALUE; // 47806 24880
    object _24879 = NOVALUE; // 47804 24879
    object _24878 = NOVALUE; // 47803 24878
    object _24877 = NOVALUE; // 47800 24877
// skipping _24876  name type: 0
    object _24875 = NOVALUE; // 47795 24875
// skipping _24874  name type: 0
// skipping _24873  name type: 0
    object _24872 = NOVALUE; // 47790 24872
    object _24871 = NOVALUE; // 47787 24871
    object _24870 = NOVALUE; // 47786 24870
    object _24869 = NOVALUE; // 47785 24869
    object _24868 = NOVALUE; // 47783 24868
    object _24867 = NOVALUE; // 47781 24867
    object _24866 = NOVALUE; // 47780 24866
// skipping _24865  name type: 0
// skipping _24864  name type: 0
    object _24863 = NOVALUE; // 47773 24863
    object _24862 = NOVALUE; // 47771 24862
// skipping _24861  name type: 0
    object _24860 = NOVALUE; // 47768 24860
// skipping _24859  name type: 0
    object _24858 = NOVALUE; // 47764 24858
// skipping _24857  name type: 0
    object _24856 = NOVALUE; // 47761 24856
    object _24855 = NOVALUE; // 47760 24855
    object _24854 = NOVALUE; // 47759 24854
// skipping _24853  name type: 0
// skipping _24852  name type: 0
// skipping _24851  name type: 0
    object _24850 = NOVALUE; // 47750 24850
    object _24849 = NOVALUE; // 47749 24849
// skipping _24848  name type: 0
// skipping _24845  name type: 0
    object _24844 = NOVALUE; // 47728 24844
// skipping _24843  name type: 0
    object _24842 = NOVALUE; // 47725 24842
// skipping _24841  name type: 0
    object _24840 = NOVALUE; // 47719 24840
    object _24839 = NOVALUE; // 47718 24839
// skipping _24838  name type: 0
// skipping _24837  name type: 0
// skipping _24836  name type: 0
    object _24835 = NOVALUE; // 47704 24835
    object _24834 = NOVALUE; // 47703 24834
// skipping _24833  name type: 0
    object _24832 = NOVALUE; // 47693 24832
    object _24831 = NOVALUE; // 47691 24831
// skipping _24830  name type: 0
    object _24829 = NOVALUE; // 47685 24829
    object _24828 = NOVALUE; // 47684 24828
    object _24827 = NOVALUE; // 47683 24827
    object _24826 = NOVALUE; // 47681 24826
    object _24825 = NOVALUE; // 47679 24825
// skipping _24824  name type: 0
    object _24823 = NOVALUE; // 47676 24823
    object _24822 = NOVALUE; // 47675 24822
    object _24821 = NOVALUE; // 47674 24821
    object _24820 = NOVALUE; // 47672 24820
    object _24819 = NOVALUE; // 47670 24819
    object _24818 = NOVALUE; // 47667 24818
    object _24817 = NOVALUE; // 47666 24817
    object _24816 = NOVALUE; // 47664 24816
    object _24815 = NOVALUE; // 47663 24815
    object _24814 = NOVALUE; // 47662 24814
    object _24813 = NOVALUE; // 47661 24813
    object _24812 = NOVALUE; // 47659 24812
    object _24811 = NOVALUE; // 47657 24811
    object _24810 = NOVALUE; // 47654 24810
    object _24809 = NOVALUE; // 47653 24809
    object _24808 = NOVALUE; // 47651 24808
    object _24807 = NOVALUE; // 47650 24807
    object _24806 = NOVALUE; // 47648 24806
    object _24805 = NOVALUE; // 47646 24805
    object _24804 = NOVALUE; // 47644 24804
    object _24803 = NOVALUE; // 47643 24803
    object _24802 = NOVALUE; // 47642 24802
// skipping _24801  name type: 0
    object _24800 = NOVALUE; // 47636 24800
    object _24799 = NOVALUE; // 47634 24799
// skipping _24798  name type: 0
    object _24797 = NOVALUE; // 47627 24797
    object _24796 = NOVALUE; // 47626 24796
    object _24795 = NOVALUE; // 47625 24795
    object _24794 = NOVALUE; // 47623 24794
    object _24793 = NOVALUE; // 47621 24793
// skipping _24792  name type: 0
    object _24791 = NOVALUE; // 47618 24791
    object _24790 = NOVALUE; // 47616 24790
    object _24789 = NOVALUE; // 47614 24789
// skipping _24788  name type: 0
    object _24787 = NOVALUE; // 47611 24787
    object _24786 = NOVALUE; // 47610 24786
    object _24785 = NOVALUE; // 47608 24785
    object _24784 = NOVALUE; // 47606 24784
    object _24783 = NOVALUE; // 47604 24783
    object _24782 = NOVALUE; // 47603 24782
    object _24781 = NOVALUE; // 47601 24781
// skipping _24780  name type: 0
    object _24779 = NOVALUE; // 47596 24779
    object _24778 = NOVALUE; // 47594 24778
// skipping _24777  name type: 0
// skipping _24774  name type: 0
    object _24773 = NOVALUE; // 47580 24773
// skipping _24772  name type: 0
// skipping _24771  name type: 0
    object _24770 = NOVALUE; // 47575 24770
    object _24769 = NOVALUE; // 47573 24769
    object _24768 = NOVALUE; // 47571 24768
    object _24767 = NOVALUE; // 47570 24767
    object _24766 = NOVALUE; // 47568 24766
    object _24765 = NOVALUE; // 47566 24765
    object _24764 = NOVALUE; // 47564 24764
    object _24763 = NOVALUE; // 47563 24763
    object _24762 = NOVALUE; // 47562 24762
    object _24761 = NOVALUE; // 47561 24761
    object _24760 = NOVALUE; // 47559 24760
    object _24759 = NOVALUE; // 47557 24759
    object _24758 = NOVALUE; // 47556 24758
    object _24757 = NOVALUE; // 47554 24757
    object _24756 = NOVALUE; // 47552 24756
// skipping _24755  name type: 0
// skipping _24754  name type: 0
// skipping _24753  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg keyfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_file_no_47527)) {
        _1 = (object)(DBL_PTR(_file_no_47527)->dbl);
        DeRefDS(_file_no_47527);
        _file_no_47527 = _1;
    }
    // SubProg keyfind pc: 5 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 7 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hashval_47532)) {
        _1 = (object)(DBL_PTR(_hashval_47532)->dbl);
        DeRefDS(_hashval_47532);
        _hashval_47532 = _1;
    }
    // SubProg keyfind pc: 11 op: STARTLINE (58)

    /** symtab.e:750		dup_globals = {}*/
    // SubProg keyfind pc: 13 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_53dup_globals_47512);
    _53dup_globals_47512 = _21958;
    // SubProg keyfind pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 18 op: STARTLINE (58)

    /** symtab.e:751		dup_overrides = {}*/
    // SubProg keyfind pc: 20 op: ASSIGN (18)
    RefDS(_21958);
    DeRefi(_53dup_overrides_47513);
    _53dup_overrides_47513 = _21958;
    // SubProg keyfind pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 25 op: STARTLINE (58)

    /** symtab.e:752		in_include_path = {}*/
    // SubProg keyfind pc: 27 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_53in_include_path_47514);
    _53in_include_path_47514 = _21958;
    // SubProg keyfind pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 32 op: STARTLINE (58)

    /** symtab.e:753		symbol_resolution_warning = ""*/
    // SubProg keyfind pc: 34 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_5symbol_resolution_warning_12579);
    _5symbol_resolution_warning_12579 = _21958;
    // SubProg keyfind pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 39 op: STARTLINE (58)

    /** symtab.e:754		st_builtin = 0*/
    // SubProg keyfind pc: 41 op: ASSIGN (18)
    _st_builtin_47541 = 0;
    // SubProg keyfind pc: 44 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 46 op: STARTLINE (58)

    /** symtab.e:756		ifdef EUDIS then*/
    // SubProg keyfind pc: 48 op: STARTLINE (58)

    /** symtab.e:759		st_ptr = buckets[hashval]*/
    // SubProg keyfind pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _st_ptr_47540 = (object)*(((s1_ptr)_2)->base + _hashval_47532);
    if (!IS_ATOM_INT(_st_ptr_47540)){
        _st_ptr_47540 = (object)DBL_PTR(_st_ptr_47540)->dbl;
    }
    // SubProg keyfind pc: 58 op: STARTLINE (58)

    /** symtab.e:760		integer any_symbol = namespace_ok = -1*/
    // SubProg keyfind pc: 60 op: EQUALS (3)
    _any_symbol_47547 = (_namespace_ok_47531 == -1);
    // SubProg keyfind pc: 64 op: STARTLINE (58)

    /** symtab.e:761		while st_ptr do*/
    // SubProg keyfind pc: 66 op: NOP2 (110)
    // SubProg keyfind pc: 68 op: NOPWHILE (158)
L1: // addr: 69 pc: 68 sub: 47524 op: 158
    // SubProg keyfind pc: 69 op: WHILE (47)
    if (_st_ptr_47540 == 0)
    {
        goto L2; // [69] 1033
    }
    else{
    }
    // SubProg keyfind pc: 72 op: STARTLINE (58)

    /** symtab.e:762			if SymTab[st_ptr][S_SCOPE] != SC_UNDEFINED */
    // SubProg keyfind pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24756 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24756);
    _24757 = (object)*(((s1_ptr)_2)->base + 4);
    _24756 = NOVALUE;
    // SubProg keyfind pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 88 op: NOTEQ (4)
    if (IS_ATOM_INT(_24757)) {
        _24758 = (_24757 != 9);
    }
    else {
        _24758 = binary_op(NOTEQ, _24757, 9);
    }
    _24757 = NOVALUE;
    // SubProg keyfind pc: 92 op: SC1_AND (141)
    if (IS_ATOM_INT(_24758)) {
        if (_24758 == 0) {
            DeRef(_24759);
            _24759 = 0;
            goto L3; // [92] 116
        }
    }
    else {
        if (DBL_PTR(_24758)->dbl == 0.0) {
            DeRef(_24759);
            _24759 = 0;
            goto L3; // [92] 116
        }
    }
    // SubProg keyfind pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24760 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24760);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _24761 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _24761 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _24760 = NOVALUE;
    // SubProg keyfind pc: 108 op: EQUAL (153)
    if (_word_47526 == _24761)
    _24762 = 1;
    else if (IS_ATOM_INT(_word_47526) && IS_ATOM_INT(_24761))
    _24762 = 0;
    else
    _24762 = (compare(_word_47526, _24761) == 0);
    _24761 = NOVALUE;
    // SubProg keyfind pc: 112 op: SC2_AND (142)
    DeRef(_24759);
    _24759 = (_24762 != 0);
    // SubProg keyfind pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 47524 op: 159
    // SubProg keyfind pc: 116 op: SC1_AND_IF (146)
    if (_24759 == 0) {
        goto L4; // [116] 1012
    }
    // SubProg keyfind pc: 120 op: SC1_OR (143)
    if (_any_symbol_47547 != 0) {
        DeRef(_24764);
        _24764 = 1;
        goto L5; // [120] 150
    }
    // SubProg keyfind pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24765 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24765);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _24766 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _24766 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _24765 = NOVALUE;
    // SubProg keyfind pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 138 op: EQUALS (3)
    if (IS_ATOM_INT(_24766)) {
        _24767 = (_24766 == 523);
    }
    else {
        _24767 = binary_op(EQUALS, _24766, 523);
    }
    _24766 = NOVALUE;
    // SubProg keyfind pc: 142 op: EQUALS (3)
    if (IS_ATOM_INT(_24767)) {
        _24768 = (_namespace_ok_47531 == _24767);
    }
    else {
        _24768 = binary_op(EQUALS, _namespace_ok_47531, _24767);
    }
    DeRef(_24767);
    _24767 = NOVALUE;
    // SubProg keyfind pc: 146 op: SC2_OR (144)
    if (IS_ATOM_INT(_24768))
    _24764 = (_24768 != 0);
    else
    _24764 = DBL_PTR(_24768)->dbl != 0.0;
    // SubProg keyfind pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 47524 op: 159
    // SubProg keyfind pc: 150 op: NOP1 (159)
    // SubProg keyfind pc: 151 op: IF (20)
    if (_24764 == 0)
    {
        _24764 = NOVALUE;
        goto L4; // [151] 1012
    }
    else{
        _24764 = NOVALUE;
    }
    // SubProg keyfind pc: 154 op: STARTLINE (58)

    /** symtab.e:767				tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 158 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24769 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24769);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _24770 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _24770 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _24769 = NOVALUE;
    // SubProg keyfind pc: 168 op: RIGHT_BRACE_2 (85)
    Ref(_24770);
    DeRef(_tok_47543);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24770;
    ((intptr_t *)_2)[2] = _st_ptr_47540;
    _tok_47543 = MAKE_SEQ(_1);
    _24770 = NOVALUE;
    // SubProg keyfind pc: 172 op: STARTLINE (58)

    /** symtab.e:769				if file_no = -1 then*/
    // SubProg keyfind pc: 174 op: EQUALS_IFW_I (121)
    if (_file_no_47527 != -1)
    goto L6; // [174] 714
    // SubProg keyfind pc: 178 op: STARTLINE (58)

    /** symtab.e:774					scope = SymTab[st_ptr][S_SCOPE]*/
    // SubProg keyfind pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 182 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24773 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 188 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24773);
    _scope_47536 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47536)){
        _scope_47536 = (object)DBL_PTR(_scope_47536)->dbl;
    }
    _24773 = NOVALUE;
    // SubProg keyfind pc: 194 op: STARTLINE (58)

    /** symtab.e:776					switch scope with fallthru do*/
    // SubProg keyfind pc: 196 op: SWITCH_I (193)
    _0 = _scope_47536;
    switch ( _0 ){ 
        // SubProg keyfind pc: 201 op: STARTLINE (58)

        /** symtab.e:777					case SC_OVERRIDE then*/
        // SubProg keyfind pc: 203 op: CASE (186)
        case 12:
        // SubProg keyfind pc: 205 op: STARTLINE (58)

        /** symtab.e:778						dup_overrides &= st_ptr*/
        // SubProg keyfind pc: 207 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 209 op: CONCAT (15)
        Append(&_53dup_overrides_47513, _53dup_overrides_47513, _st_ptr_47540);
        // SubProg keyfind pc: 213 op: STARTLINE (58)

        /** symtab.e:779						break*/
        // SubProg keyfind pc: 215 op: ELSE (23)
        goto L7; // [215] 1011
        // SubProg keyfind pc: 217 op: STARTLINE (58)

        /** symtab.e:781					case SC_PREDEF then*/
        // SubProg keyfind pc: 219 op: CASE (186)
        case 7:
        // SubProg keyfind pc: 221 op: STARTLINE (58)

        /** symtab.e:782						st_builtin = st_ptr*/
        // SubProg keyfind pc: 223 op: ASSIGN (18)
        _st_builtin_47541 = _st_ptr_47540;
        // SubProg keyfind pc: 226 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 228 op: STARTLINE (58)

        /** symtab.e:783						break*/
        // SubProg keyfind pc: 230 op: ELSE (23)
        goto L7; // [230] 1011
        // SubProg keyfind pc: 232 op: STARTLINE (58)

        /** symtab.e:784					case SC_GLOBAL then*/
        // SubProg keyfind pc: 234 op: CASE (186)
        case 6:
        // SubProg keyfind pc: 236 op: STARTLINE (58)

        /** symtab.e:785						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        // SubProg keyfind pc: 238 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 240 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24778 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 246 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24778);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24779 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24779 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24778 = NOVALUE;
        // SubProg keyfind pc: 250 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47528, _24779)){
            _24779 = NOVALUE;
            goto L8; // [250] 274
        }
        _24779 = NOVALUE;
        // SubProg keyfind pc: 254 op: STARTLINE (58)

        /** symtab.e:788							if BIND then*/
        // SubProg keyfind pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 258 op: IF (20)
        if (_5BIND_12100 == 0)
        {
            goto L9; // [258] 267
        }
        else{
        }
        // SubProg keyfind pc: 261 op: STARTLINE (58)

        /** symtab.e:789								add_ref(tok)*/
        // SubProg keyfind pc: 263 op: PROC (27)
        Ref(_tok_47543);
        _53add_ref(_tok_47543);
        // SubProg keyfind pc: 266 op: NOP1 (159)
L9: // addr: 267 pc: 266 sub: 47524 op: 159
        // SubProg keyfind pc: 267 op: STARTLINE (58)

        /** symtab.e:792							return tok*/
        // SubProg keyfind pc: 269 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
        DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
        DeRef(_msg_47534);

// block var b_name_47535
        DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
        DeRef(_gtok_47544);

// block var any_symbol_47547
        DeRef(_24768);
        _24768 = NOVALUE;
        DeRef(_24758);
        _24758 = NOVALUE;
        return _tok_47543;
        // SubProg keyfind pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 47524 op: 159
        // SubProg keyfind pc: 274 op: STARTLINE (58)

        /** symtab.e:796						if Resolve_unincluded_globals */
        // SubProg keyfind pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 278 op: SC1_OR (143)
        if (_53Resolve_unincluded_globals_47517 != 0) {
            _24781 = 1;
            goto LA; // [278] 322
        }
        // SubProg keyfind pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7finished_files_11392);
        _24782 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 288 op: SC1_AND (141)
        if (_24782 == 0) {
            _24783 = 0;
            goto LB; // [288] 318
        }
        // SubProg keyfind pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 294 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24784 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24785 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 304 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 306 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24785);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24786 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24786 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24785 = NOVALUE;
        // SubProg keyfind pc: 310 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24784);
        if (!IS_ATOM_INT(_24786)){
            _24787 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24786)->dbl));
        }
        else{
            _24787 = (object)*(((s1_ptr)_2)->base + _24786);
        }
        _24784 = NOVALUE;
        // SubProg keyfind pc: 314 op: SC2_AND (142)
        if (IS_ATOM_INT(_24787))
        _24783 = (_24787 != 0);
        else
        _24783 = DBL_PTR(_24787)->dbl != 0.0;
        // SubProg keyfind pc: 317 op: NOP1 (159)
LB: // addr: 318 pc: 317 sub: 47524 op: 159
        // SubProg keyfind pc: 318 op: SC2_OR (144)
        _24781 = (_24783 != 0);
        // SubProg keyfind pc: 321 op: NOP1 (159)
LA: // addr: 322 pc: 321 sub: 47524 op: 159
        // SubProg keyfind pc: 322 op: SC1_OR_IF (147)
        if (_24781 != 0) {
            goto LC; // [322] 349
        }
        // SubProg keyfind pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24789 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 334 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24789);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _24790 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _24790 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        _24789 = NOVALUE;
        // SubProg keyfind pc: 338 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 340 op: EQUALS (3)
        if (IS_ATOM_INT(_24790)) {
            _24791 = (_24790 == 523);
        }
        else {
            _24791 = binary_op(EQUALS, _24790, 523);
        }
        _24790 = NOVALUE;
        // SubProg keyfind pc: 344 op: NOP1 (159)
        // SubProg keyfind pc: 345 op: IF (20)
        if (_24791 == 0) {
            DeRef(_24791);
            _24791 = NOVALUE;
            goto L7; // [345] 1011
        }
        else {
            if (!IS_ATOM_INT(_24791) && DBL_PTR(_24791)->dbl == 0.0){
                DeRef(_24791);
                _24791 = NOVALUE;
                goto L7; // [345] 1011
            }
            DeRef(_24791);
            _24791 = NOVALUE;
        }
        DeRef(_24791);
        _24791 = NOVALUE;
        // SubProg keyfind pc: 348 op: NOP1 (159)
LC: // addr: 349 pc: 348 sub: 47524 op: 159
        // SubProg keyfind pc: 349 op: STARTLINE (58)

        /** symtab.e:800							gtok = tok*/
        // SubProg keyfind pc: 351 op: ASSIGN (18)
        Ref(_tok_47543);
        DeRef(_gtok_47544);
        _gtok_47544 = _tok_47543;
        // SubProg keyfind pc: 354 op: STARTLINE (58)

        /** symtab.e:801							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 356 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 358 op: CONCAT (15)
        Append(&_53dup_globals_47512, _53dup_globals_47512, _st_ptr_47540);
        // SubProg keyfind pc: 362 op: STARTLINE (58)

        /** symtab.e:802							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0*/
        // SubProg keyfind pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 366 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 368 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24793 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 374 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24794 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 378 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 380 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24794);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24795 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24795 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24794 = NOVALUE;
        // SubProg keyfind pc: 384 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24793);
        if (!IS_ATOM_INT(_24795)){
            _24796 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24795)->dbl));
        }
        else{
            _24796 = (object)*(((s1_ptr)_2)->base + _24795);
        }
        _24793 = NOVALUE;
        // SubProg keyfind pc: 388 op: NOTEQ (4)
        if (IS_ATOM_INT(_24796)) {
            _24797 = (_24796 != 0);
        }
        else {
            _24797 = binary_op(NOTEQ, _24796, 0);
        }
        _24796 = NOVALUE;
        // SubProg keyfind pc: 392 op: CONCAT (15)
        if (IS_SEQUENCE(_53in_include_path_47514) && IS_ATOM(_24797)) {
            Ref(_24797);
            Append(&_53in_include_path_47514, _53in_include_path_47514, _24797);
        }
        else if (IS_ATOM(_53in_include_path_47514) && IS_SEQUENCE(_24797)) {
        }
        else {
            Concat((object_ptr)&_53in_include_path_47514, _53in_include_path_47514, _24797);
        }
        DeRef(_24797);
        _24797 = NOVALUE;
        // SubProg keyfind pc: 396 op: NOP1 (159)
        // SubProg keyfind pc: 397 op: STARTLINE (58)

        /** symtab.e:804						break*/
        // SubProg keyfind pc: 399 op: ELSE (23)
        goto L7; // [399] 1011
        // SubProg keyfind pc: 401 op: STARTLINE (58)

        /** symtab.e:807					case SC_PUBLIC, SC_EXPORT then*/
        // SubProg keyfind pc: 403 op: CASE (186)
        case 13:
        // SubProg keyfind pc: 405 op: CASE (186)
        case 11:
        // SubProg keyfind pc: 407 op: STARTLINE (58)

        /** symtab.e:809						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        // SubProg keyfind pc: 409 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 411 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24799 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24799);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24800 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24800 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24799 = NOVALUE;
        // SubProg keyfind pc: 421 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47528, _24800)){
            _24800 = NOVALUE;
            goto LD; // [421] 445
        }
        _24800 = NOVALUE;
        // SubProg keyfind pc: 425 op: STARTLINE (58)

        /** symtab.e:811							if BIND then*/
        // SubProg keyfind pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 429 op: IF (20)
        if (_5BIND_12100 == 0)
        {
            goto LE; // [429] 438
        }
        else{
        }
        // SubProg keyfind pc: 432 op: STARTLINE (58)

        /** symtab.e:812								add_ref(tok)*/
        // SubProg keyfind pc: 434 op: PROC (27)
        Ref(_tok_47543);
        _53add_ref(_tok_47543);
        // SubProg keyfind pc: 437 op: NOP1 (159)
LE: // addr: 438 pc: 437 sub: 47524 op: 159
        // SubProg keyfind pc: 438 op: STARTLINE (58)

        /** symtab.e:815							return tok*/
        // SubProg keyfind pc: 440 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
        DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
        DeRef(_msg_47534);

// block var b_name_47535
        DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
        DeRef(_gtok_47544);

// block var any_symbol_47547
        DeRef(_24768);
        _24768 = NOVALUE;
        DeRef(_24758);
        _24758 = NOVALUE;
        _24782 = NOVALUE;
        _24795 = NOVALUE;
        _24786 = NOVALUE;
        _24787 = NOVALUE;
        return _tok_47543;
        // SubProg keyfind pc: 444 op: NOP1 (159)
LD: // addr: 445 pc: 444 sub: 47524 op: 159
        // SubProg keyfind pc: 445 op: STARTLINE (58)

        /** symtab.e:818						if (finished_files[scanning_file] -- everything this file needs has been read in*/
        // SubProg keyfind pc: 447 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 449 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7finished_files_11392);
        _24802 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 453 op: SC1_OR (143)
        if (_24802 != 0) {
            _24803 = 1;
            goto LF; // [453] 487
        }
        // SubProg keyfind pc: 457 op: SC1_AND (141)
        if (_namespace_ok_47531 == 0) {
            _24804 = 0;
            goto L10; // [457] 483
        }
        // SubProg keyfind pc: 461 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 463 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24805 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 469 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24805);
        if (!IS_ATOM_INT(_5S_TOKEN_12137)){
            _24806 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
        }
        else{
            _24806 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
        }
        _24805 = NOVALUE;
        // SubProg keyfind pc: 473 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 475 op: EQUALS (3)
        if (IS_ATOM_INT(_24806)) {
            _24807 = (_24806 == 523);
        }
        else {
            _24807 = binary_op(EQUALS, _24806, 523);
        }
        _24806 = NOVALUE;
        // SubProg keyfind pc: 479 op: SC2_AND (142)
        if (IS_ATOM_INT(_24807))
        _24804 = (_24807 != 0);
        else
        _24804 = DBL_PTR(_24807)->dbl != 0.0;
        // SubProg keyfind pc: 482 op: NOP1 (159)
L10: // addr: 483 pc: 482 sub: 47524 op: 159
        // SubProg keyfind pc: 483 op: SC2_OR (144)
        _24803 = (_24804 != 0);
        // SubProg keyfind pc: 486 op: NOP1 (159)
LF: // addr: 487 pc: 486 sub: 47524 op: 159
        // SubProg keyfind pc: 487 op: SC1_AND_IF (146)
        if (_24803 == 0) {
            goto L7; // [487] 1011
        }
        // SubProg keyfind pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 493 op: EQUALS (3)
        _24809 = (_scope_47536 == 13);
        // SubProg keyfind pc: 497 op: SC1_AND (141)
        if (_24809 == 0) {
            _24810 = 0;
            goto L11; // [497] 533
        }
        // SubProg keyfind pc: 501 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 505 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24811 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 509 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 511 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24812 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 515 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 517 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24812);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24813 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24813 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24812 = NOVALUE;
        // SubProg keyfind pc: 521 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24811);
        if (!IS_ATOM_INT(_24813)){
            _24814 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24813)->dbl));
        }
        else{
            _24814 = (object)*(((s1_ptr)_2)->base + _24813);
        }
        _24811 = NOVALUE;
        // SubProg keyfind pc: 525 op: AND_BITS (56)
        if (IS_ATOM_INT(_24814)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24814;
                 _24815 = MAKE_UINT(tu);
            }
        }
        else {
            _24815 = binary_op(AND_BITS, 6, _24814);
        }
        _24814 = NOVALUE;
        // SubProg keyfind pc: 529 op: SC2_AND (142)
        if (IS_ATOM_INT(_24815))
        _24810 = (_24815 != 0);
        else
        _24810 = DBL_PTR(_24815)->dbl != 0.0;
        // SubProg keyfind pc: 532 op: NOP1 (159)
L11: // addr: 533 pc: 532 sub: 47524 op: 159
        // SubProg keyfind pc: 533 op: SC1_OR (143)
        if (_24810 != 0) {
            DeRef(_24816);
            _24816 = 1;
            goto L12; // [533] 583
        }
        // SubProg keyfind pc: 537 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 539 op: EQUALS (3)
        _24817 = (_scope_47536 == 11);
        // SubProg keyfind pc: 543 op: SC1_AND (141)
        if (_24817 == 0) {
            _24818 = 0;
            goto L13; // [543] 579
        }
        // SubProg keyfind pc: 547 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 549 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 551 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24819 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 555 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 557 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24820 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 561 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 563 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24820);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24821 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24821 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24820 = NOVALUE;
        // SubProg keyfind pc: 567 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24819);
        if (!IS_ATOM_INT(_24821)){
            _24822 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24821)->dbl));
        }
        else{
            _24822 = (object)*(((s1_ptr)_2)->base + _24821);
        }
        _24819 = NOVALUE;
        // SubProg keyfind pc: 571 op: AND_BITS (56)
        if (IS_ATOM_INT(_24822)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24822;
                 _24823 = MAKE_UINT(tu);
            }
        }
        else {
            _24823 = binary_op(AND_BITS, 2, _24822);
        }
        _24822 = NOVALUE;
        // SubProg keyfind pc: 575 op: SC2_AND (142)
        if (IS_ATOM_INT(_24823))
        _24818 = (_24823 != 0);
        else
        _24818 = DBL_PTR(_24823)->dbl != 0.0;
        // SubProg keyfind pc: 578 op: NOP1 (159)
L13: // addr: 579 pc: 578 sub: 47524 op: 159
        // SubProg keyfind pc: 579 op: SC2_OR (144)
        DeRef(_24816);
        _24816 = (_24818 != 0);
        // SubProg keyfind pc: 582 op: NOP1 (159)
L12: // addr: 583 pc: 582 sub: 47524 op: 159
        // SubProg keyfind pc: 583 op: NOP1 (159)
        // SubProg keyfind pc: 584 op: IF (20)
        if (_24816 == 0)
        {
            _24816 = NOVALUE;
            goto L7; // [584] 1011
        }
        else{
            _24816 = NOVALUE;
        }
        // SubProg keyfind pc: 587 op: STARTLINE (58)

        /** symtab.e:826							gtok = tok*/
        // SubProg keyfind pc: 589 op: ASSIGN (18)
        Ref(_tok_47543);
        DeRef(_gtok_47544);
        _gtok_47544 = _tok_47543;
        // SubProg keyfind pc: 592 op: STARTLINE (58)

        /** symtab.e:827							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 594 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 596 op: CONCAT (15)
        Append(&_53dup_globals_47512, _53dup_globals_47512, _st_ptr_47540);
        // SubProg keyfind pc: 600 op: STARTLINE (58)

        /** symtab.e:828							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0 --symbol_in_include_path( st_ptr, scanning_file, {} )*/
        // SubProg keyfind pc: 602 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 604 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 606 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7include_matrix_11396);
        _24825 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
        // SubProg keyfind pc: 610 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 612 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24826 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 616 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 618 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24826);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24827 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24827 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24826 = NOVALUE;
        // SubProg keyfind pc: 622 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24825);
        if (!IS_ATOM_INT(_24827)){
            _24828 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24827)->dbl));
        }
        else{
            _24828 = (object)*(((s1_ptr)_2)->base + _24827);
        }
        _24825 = NOVALUE;
        // SubProg keyfind pc: 626 op: NOTEQ (4)
        if (IS_ATOM_INT(_24828)) {
            _24829 = (_24828 != 0);
        }
        else {
            _24829 = binary_op(NOTEQ, _24828, 0);
        }
        _24828 = NOVALUE;
        // SubProg keyfind pc: 630 op: CONCAT (15)
        if (IS_SEQUENCE(_53in_include_path_47514) && IS_ATOM(_24829)) {
            Ref(_24829);
            Append(&_53in_include_path_47514, _53in_include_path_47514, _24829);
        }
        else if (IS_ATOM(_53in_include_path_47514) && IS_SEQUENCE(_24829)) {
        }
        else {
            Concat((object_ptr)&_53in_include_path_47514, _53in_include_path_47514, _24829);
        }
        DeRef(_24829);
        _24829 = NOVALUE;
        // SubProg keyfind pc: 634 op: NOP1 (159)
        // SubProg keyfind pc: 635 op: STARTLINE (58)

        /** symtab.e:831	ifdef STDDEBUG then*/
        // SubProg keyfind pc: 637 op: STARTLINE (58)

        /** symtab.e:852						break*/
        // SubProg keyfind pc: 639 op: ELSE (23)
        goto L7; // [639] 1011
        // SubProg keyfind pc: 641 op: STARTLINE (58)

        /** symtab.e:853					case SC_LOCAL then*/
        // SubProg keyfind pc: 643 op: CASE (186)
        case 5:
        // SubProg keyfind pc: 645 op: STARTLINE (58)

        /** symtab.e:854						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        // SubProg keyfind pc: 647 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 649 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24831 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
        // SubProg keyfind pc: 653 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 655 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24831);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24832 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24832 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24831 = NOVALUE;
        // SubProg keyfind pc: 659 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47528, _24832)){
            _24832 = NOVALUE;
            goto L7; // [659] 1011
        }
        _24832 = NOVALUE;
        // SubProg keyfind pc: 663 op: STARTLINE (58)

        /** symtab.e:857							if BIND then*/
        // SubProg keyfind pc: 665 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 667 op: IF (20)
        if (_5BIND_12100 == 0)
        {
            goto L14; // [667] 676
        }
        else{
        }
        // SubProg keyfind pc: 670 op: STARTLINE (58)

        /** symtab.e:858								add_ref(tok)*/
        // SubProg keyfind pc: 672 op: PROC (27)
        Ref(_tok_47543);
        _53add_ref(_tok_47543);
        // SubProg keyfind pc: 675 op: NOP1 (159)
L14: // addr: 676 pc: 675 sub: 47524 op: 159
        // SubProg keyfind pc: 676 op: STARTLINE (58)

        /** symtab.e:861							return tok*/
        // SubProg keyfind pc: 678 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
        DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
        DeRef(_msg_47534);

// block var b_name_47535
        DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
        DeRef(_gtok_47544);

// block var any_symbol_47547
        DeRef(_24768);
        _24768 = NOVALUE;
        _24827 = NOVALUE;
        DeRef(_24758);
        _24758 = NOVALUE;
        DeRef(_24807);
        _24807 = NOVALUE;
        DeRef(_24823);
        _24823 = NOVALUE;
        DeRef(_24817);
        _24817 = NOVALUE;
        _24821 = NOVALUE;
        DeRef(_24815);
        _24815 = NOVALUE;
        _24782 = NOVALUE;
        DeRef(_24809);
        _24809 = NOVALUE;
        _24795 = NOVALUE;
        _24786 = NOVALUE;
        _24787 = NOVALUE;
        _24802 = NOVALUE;
        _24813 = NOVALUE;
        return _tok_47543;
        // SubProg keyfind pc: 682 op: NOP1 (159)
        // SubProg keyfind pc: 683 op: STARTLINE (58)

        /** symtab.e:863						break*/
        // SubProg keyfind pc: 685 op: ELSE (23)
        goto L7; // [685] 1011
        // SubProg keyfind pc: 687 op: STARTLINE (58)

        /** symtab.e:864					case else*/
        // SubProg keyfind pc: 689 op: CASE (186)
        default:
        // SubProg keyfind pc: 691 op: STARTLINE (58)

        /** symtab.e:866						if BIND then*/
        // SubProg keyfind pc: 693 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 695 op: IF (20)
        if (_5BIND_12100 == 0)
        {
            goto L15; // [695] 704
        }
        else{
        }
        // SubProg keyfind pc: 698 op: STARTLINE (58)

        /** symtab.e:867							add_ref(tok)*/
        // SubProg keyfind pc: 700 op: PROC (27)
        Ref(_tok_47543);
        _53add_ref(_tok_47543);
        // SubProg keyfind pc: 703 op: NOP1 (159)
L15: // addr: 704 pc: 703 sub: 47524 op: 159
        // SubProg keyfind pc: 704 op: STARTLINE (58)

        /** symtab.e:870						return tok -- keyword, private*/
        // SubProg keyfind pc: 706 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
        DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
        DeRef(_msg_47534);

// block var b_name_47535
        DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
        DeRef(_gtok_47544);

// block var any_symbol_47547
        DeRef(_24768);
        _24768 = NOVALUE;
        _24827 = NOVALUE;
        DeRef(_24758);
        _24758 = NOVALUE;
        DeRef(_24807);
        _24807 = NOVALUE;
        DeRef(_24823);
        _24823 = NOVALUE;
        DeRef(_24817);
        _24817 = NOVALUE;
        _24821 = NOVALUE;
        DeRef(_24815);
        _24815 = NOVALUE;
        _24782 = NOVALUE;
        DeRef(_24809);
        _24809 = NOVALUE;
        _24795 = NOVALUE;
        _24786 = NOVALUE;
        _24787 = NOVALUE;
        _24802 = NOVALUE;
        _24813 = NOVALUE;
        return _tok_47543;
        // SubProg keyfind pc: 710 op: NOPSWITCH (187)
    ;}    // SubProg keyfind pc: 711 op: ELSE (23)
    goto L7; // [711] 1011
    // SubProg keyfind pc: 713 op: NOP1 (159)
L6: // addr: 714 pc: 713 sub: 47524 op: 159
    // SubProg keyfind pc: 714 op: STARTLINE (58)

    /** symtab.e:877					scope = SymTab[tok[T_SYM]][S_SCOPE]*/
    // SubProg keyfind pc: 716 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 720 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47543);
    _24834 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 724 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_24834)){
        _24835 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24834)->dbl));
    }
    else{
        _24835 = (object)*(((s1_ptr)_2)->base + _24834);
    }
    // SubProg keyfind pc: 728 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 730 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24835);
    _scope_47536 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47536)){
        _scope_47536 = (object)DBL_PTR(_scope_47536)->dbl;
    }
    _24835 = NOVALUE;
    // SubProg keyfind pc: 736 op: STARTLINE (58)

    /** symtab.e:878					if not file_no then*/
    // SubProg keyfind pc: 738 op: NOT_IFW (108)
    if (_file_no_47527 != 0)
    goto L16; // [738] 772
    // SubProg keyfind pc: 741 op: STARTLINE (58)

    /** symtab.e:880						if scope = SC_PREDEF then*/
    // SubProg keyfind pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 745 op: EQUALS_IFW (104)
    if (_scope_47536 != 7)
    goto L17; // [745] 1010
    // SubProg keyfind pc: 749 op: STARTLINE (58)

    /** symtab.e:881							if BIND then*/
    // SubProg keyfind pc: 751 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 753 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L18; // [753] 762
    }
    else{
    }
    // SubProg keyfind pc: 756 op: STARTLINE (58)

    /** symtab.e:882								add_ref( tok )*/
    // SubProg keyfind pc: 758 op: PROC (27)
    Ref(_tok_47543);
    _53add_ref(_tok_47543);
    // SubProg keyfind pc: 761 op: NOP1 (159)
L18: // addr: 762 pc: 761 sub: 47524 op: 159
    // SubProg keyfind pc: 762 op: STARTLINE (58)

    /** symtab.e:884							return tok*/
    // SubProg keyfind pc: 764 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    _24795 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24802 = NOVALUE;
    _24813 = NOVALUE;
    return _tok_47543;
    // SubProg keyfind pc: 768 op: NOP1 (159)
    // SubProg keyfind pc: 769 op: ELSE (23)
    goto L17; // [769] 1010
    // SubProg keyfind pc: 771 op: NOP1 (159)
L16: // addr: 772 pc: 771 sub: 47524 op: 159
    // SubProg keyfind pc: 772 op: STARTLINE (58)

    /** symtab.e:887						integer tok_file = SymTab[tok[T_SYM]][S_FILE_NO]*/
    // SubProg keyfind pc: 774 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 778 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47543);
    _24839 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 782 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_24839)){
        _24840 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24839)->dbl));
    }
    else{
        _24840 = (object)*(((s1_ptr)_2)->base + _24839);
    }
    // SubProg keyfind pc: 786 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 788 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24840);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _tok_file_47715 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _tok_file_47715 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    if (!IS_ATOM_INT(_tok_file_47715)){
        _tok_file_47715 = (object)DBL_PTR(_tok_file_47715)->dbl;
    }
    _24840 = NOVALUE;
    // SubProg keyfind pc: 794 op: STARTLINE (58)

    /** symtab.e:888						integer good = 0*/
    // SubProg keyfind pc: 796 op: ASSIGN_I (113)
    _good_47722 = 0;
    // SubProg keyfind pc: 799 op: STARTLINE (58)

    /** symtab.e:889						if scope = SC_PRIVATE or scope = SC_PREDEF then*/
    // SubProg keyfind pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 803 op: EQUALS (3)
    _24842 = (_scope_47536 == 3);
    // SubProg keyfind pc: 807 op: SC1_OR_IF (147)
    if (_24842 != 0) {
        goto L19; // [807] 940
    }
    // SubProg keyfind pc: 811 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 813 op: EQUALS (3)
    _24844 = (_scope_47536 == 7);
    // SubProg keyfind pc: 817 op: NOP1 (159)
    // SubProg keyfind pc: 818 op: IF (20)
    if (_24844 == 0)
    {
        DeRef(_24844);
        _24844 = NOVALUE;
        goto L1A; // [818] 825
    }
    else{
        DeRef(_24844);
        _24844 = NOVALUE;
    }
    // SubProg keyfind pc: 821 op: NOP1 (159)
    // SubProg keyfind pc: 822 op: ELSE (23)
    goto L19; // [822] 940
    // SubProg keyfind pc: 824 op: NOP1 (159)
L1A: // addr: 825 pc: 824 sub: 47524 op: 159
    // SubProg keyfind pc: 825 op: STARTLINE (58)

    /** symtab.e:892						elsif file_no = tok_file then*/
    // SubProg keyfind pc: 827 op: EQUALS_IFW_I (121)
    if (_file_no_47527 != _tok_file_47715)
    goto L1B; // [827] 839
    // SubProg keyfind pc: 831 op: STARTLINE (58)

    /** symtab.e:893							good = 1*/
    // SubProg keyfind pc: 833 op: ASSIGN_I (113)
    _good_47722 = 1;
    // SubProg keyfind pc: 836 op: ELSE (23)
    goto L19; // [836] 940
    // SubProg keyfind pc: 838 op: NOP1 (159)
L1B: // addr: 839 pc: 838 sub: 47524 op: 159
    // SubProg keyfind pc: 839 op: STARTLINE (58)

    /** symtab.e:896							integer include_type = 0*/
    // SubProg keyfind pc: 841 op: ASSIGN_I (113)
    _include_type_47732 = 0;
    // SubProg keyfind pc: 844 op: STARTLINE (58)

    /** symtab.e:897							switch scope do*/
    // SubProg keyfind pc: 846 op: SWITCH_I (193)
    _0 = _scope_47536;
    switch ( _0 ){ 
        // SubProg keyfind pc: 851 op: STARTLINE (58)

        /** symtab.e:898								case SC_GLOBAL then*/
        // SubProg keyfind pc: 853 op: CASE (186)
        case 6:
        // SubProg keyfind pc: 855 op: STARTLINE (58)

        /** symtab.e:899									if Resolve_unincluded_globals then*/
        // SubProg keyfind pc: 857 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 859 op: IF (20)
        if (_53Resolve_unincluded_globals_47517 == 0)
        {
            goto L1C; // [859] 874
        }
        else{
        }
        // SubProg keyfind pc: 862 op: STARTLINE (58)

        /** symtab.e:900										include_type = ANY_INCLUDE*/
        // SubProg keyfind pc: 864 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 866 op: ASSIGN (18)
        _include_type_47732 = 7;
        // SubProg keyfind pc: 869 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 871 op: ELSE (23)
        goto L1D; // [871] 919
        // SubProg keyfind pc: 873 op: NOP1 (159)
L1C: // addr: 874 pc: 873 sub: 47524 op: 159
        // SubProg keyfind pc: 874 op: STARTLINE (58)

        /** symtab.e:902										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 876 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 878 op: ASSIGN (18)
        _include_type_47732 = 6;
        // SubProg keyfind pc: 881 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 883 op: NOP1 (159)
        // SubProg keyfind pc: 884 op: ELSE (23)
        goto L1D; // [884] 919
        // SubProg keyfind pc: 886 op: STARTLINE (58)

        /** symtab.e:905								case SC_PUBLIC then*/
        // SubProg keyfind pc: 888 op: CASE (186)
        case 13:
        // SubProg keyfind pc: 890 op: STARTLINE (58)

        /** symtab.e:907									if tok_file != file_no then*/
        // SubProg keyfind pc: 892 op: NOTEQ_IFW_I (122)
        if (_tok_file_47715 == _file_no_47527)
        goto L1E; // [892] 908
        // SubProg keyfind pc: 896 op: STARTLINE (58)

        /** symtab.e:908										include_type = PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 898 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 900 op: ASSIGN (18)
        _include_type_47732 = 4;
        // SubProg keyfind pc: 903 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 905 op: ELSE (23)
        goto L1F; // [905] 918
        // SubProg keyfind pc: 907 op: NOP1 (159)
L1E: // addr: 908 pc: 907 sub: 47524 op: 159
        // SubProg keyfind pc: 908 op: STARTLINE (58)

        /** symtab.e:910										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 910 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 912 op: ASSIGN (18)
        _include_type_47732 = 6;
        // SubProg keyfind pc: 915 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 917 op: NOP1 (159)
L1F: // addr: 918 pc: 917 sub: 47524 op: 159
        // SubProg keyfind pc: 918 op: NOPSWITCH (187)
    ;}L1D: // addr: 919 pc: 918 sub: 47524 op: 187
    // SubProg keyfind pc: 919 op: STARTLINE (58)

    /** symtab.e:914							good = and_bits( include_type, include_matrix[file_no][tok_file] )*/
    // SubProg keyfind pc: 921 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 923 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _24849 = (object)*(((s1_ptr)_2)->base + _file_no_47527);
    // SubProg keyfind pc: 927 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24849);
    _24850 = (object)*(((s1_ptr)_2)->base + _tok_file_47715);
    _24849 = NOVALUE;
    // SubProg keyfind pc: 931 op: AND_BITS (56)
    if (IS_ATOM_INT(_24850)) {
        {uintptr_t tu;
             tu = (uintptr_t)_include_type_47732 & (uintptr_t)_24850;
             _good_47722 = MAKE_UINT(tu);
        }
    }
    else {
        _good_47722 = binary_op(AND_BITS, _include_type_47732, _24850);
    }
    _24850 = NOVALUE;
    // SubProg keyfind pc: 935 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_good_47722)) {
        _1 = (object)(DBL_PTR(_good_47722)->dbl);
        DeRefDS(_good_47722);
        _good_47722 = _1;
    }
    // SubProg keyfind pc: 937 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var include_type_47732
    // SubProg keyfind pc: 939 op: NOP1 (159)
L19: // addr: 940 pc: 939 sub: 47524 op: 159
    // SubProg keyfind pc: 940 op: STARTLINE (58)

    /** symtab.e:917						if good then*/
    // SubProg keyfind pc: 942 op: IF (20)
    if (_good_47722 == 0)
    {
        goto L20; // [942] 1007
    }
    else{
    }
    // SubProg keyfind pc: 945 op: STARTLINE (58)

    /** symtab.e:919							if file_no = tok_file then*/
    // SubProg keyfind pc: 947 op: EQUALS_IFW_I (121)
    if (_file_no_47527 != _tok_file_47715)
    goto L21; // [947] 971
    // SubProg keyfind pc: 951 op: STARTLINE (58)

    /** symtab.e:920								if BIND then*/
    // SubProg keyfind pc: 953 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 955 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L22; // [955] 964
    }
    else{
    }
    // SubProg keyfind pc: 958 op: STARTLINE (58)

    /** symtab.e:921									add_ref(tok)*/
    // SubProg keyfind pc: 960 op: PROC (27)
    Ref(_tok_47543);
    _53add_ref(_tok_47543);
    // SubProg keyfind pc: 963 op: NOP1 (159)
L22: // addr: 964 pc: 963 sub: 47524 op: 159
    // SubProg keyfind pc: 964 op: STARTLINE (58)

    /** symtab.e:923								return tok*/
    // SubProg keyfind pc: 966 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var tok_file_47715

// block var good_47722

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    _24795 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    return _tok_47543;
    // SubProg keyfind pc: 970 op: NOP1 (159)
L21: // addr: 971 pc: 970 sub: 47524 op: 159
    // SubProg keyfind pc: 971 op: STARTLINE (58)

    /** symtab.e:926							gtok = tok*/
    // SubProg keyfind pc: 973 op: ASSIGN (18)
    Ref(_tok_47543);
    DeRef(_gtok_47544);
    _gtok_47544 = _tok_47543;
    // SubProg keyfind pc: 976 op: STARTLINE (58)

    /** symtab.e:927							dup_globals &= st_ptr*/
    // SubProg keyfind pc: 978 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 980 op: CONCAT (15)
    Append(&_53dup_globals_47512, _53dup_globals_47512, _st_ptr_47540);
    // SubProg keyfind pc: 984 op: STARTLINE (58)

    /** symtab.e:928							in_include_path &= include_matrix[scanning_file][tok_file] != 0*/
    // SubProg keyfind pc: 986 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 988 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 990 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7include_matrix_11396);
    _24854 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
    // SubProg keyfind pc: 994 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24854);
    _24855 = (object)*(((s1_ptr)_2)->base + _tok_file_47715);
    _24854 = NOVALUE;
    // SubProg keyfind pc: 998 op: NOTEQ (4)
    if (IS_ATOM_INT(_24855)) {
        _24856 = (_24855 != 0);
    }
    else {
        _24856 = binary_op(NOTEQ, _24855, 0);
    }
    _24855 = NOVALUE;
    // SubProg keyfind pc: 1002 op: CONCAT (15)
    if (IS_SEQUENCE(_53in_include_path_47514) && IS_ATOM(_24856)) {
        Ref(_24856);
        Append(&_53in_include_path_47514, _53in_include_path_47514, _24856);
    }
    else if (IS_ATOM(_53in_include_path_47514) && IS_SEQUENCE(_24856)) {
    }
    else {
        Concat((object_ptr)&_53in_include_path_47514, _53in_include_path_47514, _24856);
    }
    DeRef(_24856);
    _24856 = NOVALUE;
    // SubProg keyfind pc: 1006 op: NOP1 (159)
L20: // addr: 1007 pc: 1006 sub: 47524 op: 159
    // SubProg keyfind pc: 1007 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_file_47715

// block var good_47722
    // SubProg keyfind pc: 1009 op: NOP1 (159)
L17: // addr: 1010 pc: 1009 sub: 47524 op: 159
    // SubProg keyfind pc: 1010 op: NOP1 (159)
L7: // addr: 1011 pc: 1010 sub: 47524 op: 159
    // SubProg keyfind pc: 1011 op: NOP1 (159)
L4: // addr: 1012 pc: 1011 sub: 47524 op: 159
    // SubProg keyfind pc: 1012 op: STARTLINE (58)

    /** symtab.e:936			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg keyfind pc: 1014 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1016 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24858 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1022 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24858);
    _st_ptr_47540 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_47540)){
        _st_ptr_47540 = (object)DBL_PTR(_st_ptr_47540)->dbl;
    }
    _24858 = NOVALUE;
    // SubProg keyfind pc: 1028 op: STARTLINE (58)

    /** symtab.e:937		end while*/
    // SubProg keyfind pc: 1030 op: ENDWHILE (22)
    goto L1; // [1030] 69
    // SubProg keyfind pc: 1032 op: NOP1 (159)
L2: // addr: 1033 pc: 1032 sub: 47524 op: 159
    // SubProg keyfind pc: 1033 op: STARTLINE (58)

    /** symtab.e:939		if length(dup_overrides) then*/
    // SubProg keyfind pc: 1035 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1037 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_overrides_47513)){
            _24860 = SEQ_PTR(_53dup_overrides_47513)->length;
    }
    else {
        _24860 = 1;
    }
    // SubProg keyfind pc: 1040 op: IF (20)
    if (_24860 == 0)
    {
        _24860 = NOVALUE;
        goto L23; // [1040] 1093
    }
    else{
        _24860 = NOVALUE;
    }
    // SubProg keyfind pc: 1043 op: STARTLINE (58)

    /** symtab.e:940			st_ptr = dup_overrides[1]*/
    // SubProg keyfind pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1047 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53dup_overrides_47513);
    _st_ptr_47540 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1053 op: STARTLINE (58)

    /** symtab.e:941			tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1055 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1057 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24862 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 1061 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1063 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24862);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _24863 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _24863 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _24862 = NOVALUE;
    // SubProg keyfind pc: 1067 op: RIGHT_BRACE_2 (85)
    Ref(_24863);
    DeRef(_tok_47543);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24863;
    ((intptr_t *)_2)[2] = _st_ptr_47540;
    _tok_47543 = MAKE_SEQ(_1);
    _24863 = NOVALUE;
    // SubProg keyfind pc: 1071 op: STARTLINE (58)

    /** symtab.e:944				if BIND then*/
    // SubProg keyfind pc: 1073 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1075 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L24; // [1075] 1084
    }
    else{
    }
    // SubProg keyfind pc: 1078 op: STARTLINE (58)

    /** symtab.e:945					add_ref(tok)*/
    // SubProg keyfind pc: 1080 op: PROC (27)
    RefDS(_tok_47543);
    _53add_ref(_tok_47543);
    // SubProg keyfind pc: 1083 op: NOP1 (159)
L24: // addr: 1084 pc: 1083 sub: 47524 op: 159
    // SubProg keyfind pc: 1084 op: STARTLINE (58)

    /** symtab.e:948				return tok*/
    // SubProg keyfind pc: 1086 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    _24795 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    return _tok_47543;
    // SubProg keyfind pc: 1090 op: ELSE (23)
    goto L25; // [1090] 1320
    // SubProg keyfind pc: 1092 op: NOP1 (159)
L23: // addr: 1093 pc: 1092 sub: 47524 op: 159
    // SubProg keyfind pc: 1093 op: STARTLINE (58)

    /** symtab.e:951		elsif st_builtin != 0 then*/
    // SubProg keyfind pc: 1095 op: NOTEQ_IFW (105)
    if (_st_builtin_47541 == 0)
    goto L26; // [1095] 1319
    // SubProg keyfind pc: 1099 op: STARTLINE (58)

    /** symtab.e:952			if length(dup_globals) and find(SymTab[st_builtin][S_NAME], builtin_warnings) = 0 then*/
    // SubProg keyfind pc: 1101 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1103 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24866 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24866 = 1;
    }
    // SubProg keyfind pc: 1106 op: SC1_AND_IF (146)
    if (_24866 == 0) {
        goto L27; // [1106] 1279
    }
    // SubProg keyfind pc: 1110 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24868 = (object)*(((s1_ptr)_2)->base + _st_builtin_47541);
    // SubProg keyfind pc: 1116 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24868);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _24869 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _24869 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _24868 = NOVALUE;
    // SubProg keyfind pc: 1122 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1124 op: FIND_FROM (176)
    _24870 = find_from(_24869, _53builtin_warnings_47516, 1);
    _24869 = NOVALUE;
    // SubProg keyfind pc: 1129 op: EQUALS (3)
    _24871 = (_24870 == 0);
    _24870 = NOVALUE;
    // SubProg keyfind pc: 1133 op: NOP1 (159)
    // SubProg keyfind pc: 1134 op: IF (20)
    if (_24871 == 0)
    {
        DeRef(_24871);
        _24871 = NOVALUE;
        goto L27; // [1134] 1279
    }
    else{
        DeRef(_24871);
        _24871 = NOVALUE;
    }
    // SubProg keyfind pc: 1137 op: STARTLINE (58)

    /** symtab.e:953				sequence msg_file */
    // SubProg keyfind pc: 1139 op: STARTLINE (58)

    /** symtab.e:955				b_name = SymTab[st_builtin][S_NAME]*/
    // SubProg keyfind pc: 1141 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1143 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24872 = (object)*(((s1_ptr)_2)->base + _st_builtin_47541);
    // SubProg keyfind pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1149 op: RHS_SUBS_CHECK (92)
    DeRef(_b_name_47535);
    _2 = (object)SEQ_PTR(_24872);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _b_name_47535 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _b_name_47535 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    Ref(_b_name_47535);
    _24872 = NOVALUE;
    // SubProg keyfind pc: 1153 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1155 op: STARTLINE (58)

    /** symtab.e:956				builtin_warnings = append(builtin_warnings, b_name)*/
    // SubProg keyfind pc: 1157 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1159 op: APPEND (35)
    RefDS(_b_name_47535);
    Append(&_53builtin_warnings_47516, _53builtin_warnings_47516, _b_name_47535);
    // SubProg keyfind pc: 1163 op: STARTLINE (58)

    /** symtab.e:958				if length(dup_globals) > 1 then*/
    // SubProg keyfind pc: 1165 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1167 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24875 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24875 = 1;
    }
    // SubProg keyfind pc: 1170 op: GREATER_IFW_I (124)
    if (_24875 <= 1)
    goto L28; // [1170] 1184
    // SubProg keyfind pc: 1174 op: STARTLINE (58)

    /** symtab.e:959					msg = "\n"*/
    // SubProg keyfind pc: 1176 op: ASSIGN (18)
    RefDS(_22165);
    DeRef(_msg_47534);
    _msg_47534 = _22165;
    // SubProg keyfind pc: 1179 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1181 op: ELSE (23)
    goto L29; // [1181] 1192
    // SubProg keyfind pc: 1183 op: NOP1 (159)
L28: // addr: 1184 pc: 1183 sub: 47524 op: 159
    // SubProg keyfind pc: 1184 op: STARTLINE (58)

    /** symtab.e:961					msg = ""*/
    // SubProg keyfind pc: 1186 op: ASSIGN (18)
    RefDS(_21958);
    DeRef(_msg_47534);
    _msg_47534 = _21958;
    // SubProg keyfind pc: 1189 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1191 op: NOP1 (159)
L29: // addr: 1192 pc: 1191 sub: 47524 op: 159
    // SubProg keyfind pc: 1192 op: STARTLINE (58)

    /** symtab.e:964				for i = 1 to length(dup_globals) do*/
    // SubProg keyfind pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1196 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24877 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24877 = 1;
    }
    // SubProg keyfind pc: 1199 op: FOR_I (125)
    {
        object _i_47799;
        _i_47799 = 1;
L2A: // addr: 1206 pc: 1199 sub: 47524 op: 125
        if (_i_47799 > _24877){
            goto L2B; // [1199] 1255
        }
        // SubProg keyfind pc: 1206 op: STARTLINE (58)

        /** symtab.e:965					msg_file = known_files[SymTab[dup_globals[i]][S_FILE_NO]]*/
        // SubProg keyfind pc: 1208 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1210 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1212 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_53dup_globals_47512);
        _24878 = (object)*(((s1_ptr)_2)->base + _i_47799);
        // SubProg keyfind pc: 1218 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        if (!IS_ATOM_INT(_24878)){
            _24879 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24878)->dbl));
        }
        else{
            _24879 = (object)*(((s1_ptr)_2)->base + _24878);
        }
        // SubProg keyfind pc: 1222 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24879);
        if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
            _24880 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
        }
        else{
            _24880 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
        }
        _24879 = NOVALUE;
        // SubProg keyfind pc: 1228 op: RHS_SUBS_CHECK (92)
        DeRef(_msg_file_47788);
        _2 = (object)SEQ_PTR(_7known_files_11390);
        if (!IS_ATOM_INT(_24880)){
            _msg_file_47788 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24880)->dbl));
        }
        else{
            _msg_file_47788 = (object)*(((s1_ptr)_2)->base + _24880);
        }
        Ref(_msg_file_47788);
        // SubProg keyfind pc: 1232 op: SEQUENCE_CHECK (97)
        // SubProg keyfind pc: 1234 op: STARTLINE (58)

        /** symtab.e:966					msg &= "    " & msg_file & "\n"*/
        // SubProg keyfind pc: 1236 op: PRIVATE_INIT_CHECK (30)
        // SubProg keyfind pc: 1238 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _22165;
            concat_list[1] = _msg_file_47788;
            concat_list[2] = _24882;
            Concat_N((object_ptr)&_24883, concat_list, 3);
        }
        // SubProg keyfind pc: 1244 op: CONCAT (15)
        Concat((object_ptr)&_msg_47534, _msg_47534, _24883);
        DeRefDS(_24883);
        _24883 = NOVALUE;
        // SubProg keyfind pc: 1248 op: STARTLINE (58)

        /** symtab.e:967				end for*/
        // SubProg keyfind pc: 1250 op: ENDFOR_INT_UP1 (54)
        _i_47799 = _i_47799 + 1;
        goto L2A; // [1250] 1206
L2B: // addr: 1255 pc: 1250 sub: 47524 op: 54
        ;
    }
    // SubProg keyfind pc: 1255 op: STARTLINE (58)

    /** symtab.e:969				Warning(234, builtin_chosen_warning_flag, {b_name, known_files[scanning_file], msg})*/
    // SubProg keyfind pc: 1257 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1259 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _24885 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
    // SubProg keyfind pc: 1265 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1267 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_b_name_47535);
    ((intptr_t*)_2)[1] = _b_name_47535;
    Ref(_24885);
    ((intptr_t*)_2)[2] = _24885;
    RefDS(_msg_47534);
    ((intptr_t*)_2)[3] = _msg_47534;
    _24886 = MAKE_SEQ(_1);
    _24885 = NOVALUE;
    // SubProg keyfind pc: 1273 op: PROC (27)
    _49Warning(234, 8, _24886);
    _24886 = NOVALUE;
    // SubProg keyfind pc: 1278 op: NOP1 (159)
L27: // addr: 1279 pc: 1278 sub: 47524 op: 159
    // SubProg keyfind pc: 1279 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_file_47788
    DeRef(_msg_file_47788);
    _msg_file_47788 = NOVALUE;
    // SubProg keyfind pc: 1281 op: STARTLINE (58)

    /** symtab.e:972			tok = {SymTab[st_builtin][S_TOKEN], st_builtin}*/
    // SubProg keyfind pc: 1283 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1285 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24887 = (object)*(((s1_ptr)_2)->base + _st_builtin_47541);
    // SubProg keyfind pc: 1289 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1291 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24887);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _24888 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _24888 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _24887 = NOVALUE;
    // SubProg keyfind pc: 1295 op: RIGHT_BRACE_2 (85)
    Ref(_24888);
    DeRef(_tok_47543);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24888;
    ((intptr_t *)_2)[2] = _st_builtin_47541;
    _tok_47543 = MAKE_SEQ(_1);
    _24888 = NOVALUE;
    // SubProg keyfind pc: 1299 op: STARTLINE (58)

    /** symtab.e:974			if BIND then*/
    // SubProg keyfind pc: 1301 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1303 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L2C; // [1303] 1312
    }
    else{
    }
    // SubProg keyfind pc: 1306 op: STARTLINE (58)

    /** symtab.e:975				add_ref(tok)*/
    // SubProg keyfind pc: 1308 op: PROC (27)
    RefDS(_tok_47543);
    _53add_ref(_tok_47543);
    // SubProg keyfind pc: 1311 op: NOP1 (159)
L2C: // addr: 1312 pc: 1311 sub: 47524 op: 159
    // SubProg keyfind pc: 1312 op: STARTLINE (58)

    /** symtab.e:978			return tok*/
    // SubProg keyfind pc: 1314 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    _24878 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    _24795 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24880 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    return _tok_47543;
    // SubProg keyfind pc: 1318 op: NOP1 (159)
L26: // addr: 1319 pc: 1318 sub: 47524 op: 159
    // SubProg keyfind pc: 1319 op: NOP1 (159)
L25: // addr: 1320 pc: 1319 sub: 47524 op: 159
    // SubProg keyfind pc: 1320 op: STARTLINE (58)

    /** symtab.e:981	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1322 op: STARTLINE (58)

    /** symtab.e:996		if length(dup_globals) > 1 and find( 1, in_include_path ) then*/
    // SubProg keyfind pc: 1324 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1326 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24890 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24890 = 1;
    }
    // SubProg keyfind pc: 1329 op: GREATER (6)
    _24891 = (_24890 > 1);
    _24890 = NOVALUE;
    // SubProg keyfind pc: 1333 op: SC1_AND_IF (146)
    if (_24891 == 0) {
        goto L2D; // [1333] 1452
    }
    // SubProg keyfind pc: 1337 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1339 op: FIND_FROM (176)
    _24893 = find_from(1, _53in_include_path_47514, 1);
    // SubProg keyfind pc: 1344 op: NOP1 (159)
    // SubProg keyfind pc: 1345 op: IF (20)
    if (_24893 == 0)
    {
        _24893 = NOVALUE;
        goto L2D; // [1345] 1452
    }
    else{
        _24893 = NOVALUE;
    }
    // SubProg keyfind pc: 1348 op: STARTLINE (58)

    /** symtab.e:998			ix = 1*/
    // SubProg keyfind pc: 1350 op: ASSIGN_I (113)
    _ix_47538 = 1;
    // SubProg keyfind pc: 1353 op: STARTLINE (58)

    /** symtab.e:999			while ix <= length(dup_globals) do*/
    // SubProg keyfind pc: 1355 op: NOP2 (110)
    // SubProg keyfind pc: 1357 op: NOPWHILE (158)
L2E: // addr: 1358 pc: 1357 sub: 47524 op: 158
    // SubProg keyfind pc: 1358 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1360 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24894 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24894 = 1;
    }
    // SubProg keyfind pc: 1363 op: LESSEQ_IFW_I (123)
    if (_ix_47538 > _24894)
    goto L2F; // [1363] 1411
    // SubProg keyfind pc: 1367 op: STARTLINE (58)

    /** symtab.e:1000				if in_include_path[ix] then*/
    // SubProg keyfind pc: 1369 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1371 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53in_include_path_47514);
    _24896 = (object)*(((s1_ptr)_2)->base + _ix_47538);
    // SubProg keyfind pc: 1375 op: IF (20)
    if (_24896 == 0) {
        _24896 = NOVALUE;
        goto L30; // [1375] 1387
    }
    else {
        if (!IS_ATOM_INT(_24896) && DBL_PTR(_24896)->dbl == 0.0){
            _24896 = NOVALUE;
            goto L30; // [1375] 1387
        }
        _24896 = NOVALUE;
    }
    _24896 = NOVALUE;
    // SubProg keyfind pc: 1378 op: STARTLINE (58)

    /** symtab.e:1001					ix += 1*/
    // SubProg keyfind pc: 1380 op: PLUS1_I (117)
    _ix_47538 = _ix_47538 + 1;
    // SubProg keyfind pc: 1384 op: ELSE (23)
    goto L2E; // [1384] 1358
    // SubProg keyfind pc: 1386 op: NOP1 (159)
L30: // addr: 1387 pc: 1386 sub: 47524 op: 159
    // SubProg keyfind pc: 1387 op: STARTLINE (58)

    /** symtab.e:1003					dup_globals     = remove( dup_globals, ix )*/
    // SubProg keyfind pc: 1389 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1391 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_53dup_globals_47512);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47538)) ? _ix_47538 : (object)(DBL_PTR(_ix_47538)->dbl);
        int stop = (IS_ATOM_INT(_ix_47538)) ? _ix_47538 : (object)(DBL_PTR(_ix_47538)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_53dup_globals_47512), start, &_53dup_globals_47512 );
            }
            else Tail(SEQ_PTR(_53dup_globals_47512), stop+1, &_53dup_globals_47512);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_53dup_globals_47512), start, &_53dup_globals_47512);
        }
        else {
            assign_slice_seq = &assign_space;
            _53dup_globals_47512 = Remove_elements(start, stop, (SEQ_PTR(_53dup_globals_47512)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1396 op: STARTLINE (58)

    /** symtab.e:1004					in_include_path = remove( in_include_path, ix )*/
    // SubProg keyfind pc: 1398 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1400 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_53in_include_path_47514);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47538)) ? _ix_47538 : (object)(DBL_PTR(_ix_47538)->dbl);
        int stop = (IS_ATOM_INT(_ix_47538)) ? _ix_47538 : (object)(DBL_PTR(_ix_47538)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_53in_include_path_47514), start, &_53in_include_path_47514 );
            }
            else Tail(SEQ_PTR(_53in_include_path_47514), stop+1, &_53in_include_path_47514);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_53in_include_path_47514), start, &_53in_include_path_47514);
        }
        else {
            assign_slice_seq = &assign_space;
            _53in_include_path_47514 = Remove_elements(start, stop, (SEQ_PTR(_53in_include_path_47514)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1405 op: NOP1 (159)
    // SubProg keyfind pc: 1406 op: STARTLINE (58)

    /** symtab.e:1006			end while*/
    // SubProg keyfind pc: 1408 op: ENDWHILE (22)
    goto L2E; // [1408] 1358
    // SubProg keyfind pc: 1410 op: NOP1 (159)
L2F: // addr: 1411 pc: 1410 sub: 47524 op: 159
    // SubProg keyfind pc: 1411 op: STARTLINE (58)

    /** symtab.e:1008			if length(dup_globals) = 1 then*/
    // SubProg keyfind pc: 1413 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1415 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24900 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24900 = 1;
    }
    // SubProg keyfind pc: 1418 op: EQUALS_IFW_I (121)
    if (_24900 != 1)
    goto L31; // [1418] 1451
    // SubProg keyfind pc: 1422 op: STARTLINE (58)

    /** symtab.e:1009					st_ptr = dup_globals[1]*/
    // SubProg keyfind pc: 1424 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1426 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53dup_globals_47512);
    _st_ptr_47540 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_st_ptr_47540)){
        _st_ptr_47540 = (object)DBL_PTR(_st_ptr_47540)->dbl;
    }
    // SubProg keyfind pc: 1432 op: STARTLINE (58)

    /** symtab.e:1010					gtok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1434 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24903 = (object)*(((s1_ptr)_2)->base + _st_ptr_47540);
    // SubProg keyfind pc: 1440 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1442 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24903);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _24904 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _24904 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _24903 = NOVALUE;
    // SubProg keyfind pc: 1446 op: RIGHT_BRACE_2 (85)
    Ref(_24904);
    DeRef(_gtok_47544);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24904;
    ((intptr_t *)_2)[2] = _st_ptr_47540;
    _gtok_47544 = MAKE_SEQ(_1);
    _24904 = NOVALUE;
    // SubProg keyfind pc: 1450 op: NOP1 (159)
L31: // addr: 1451 pc: 1450 sub: 47524 op: 159
    // SubProg keyfind pc: 1451 op: NOP1 (159)
L2D: // addr: 1452 pc: 1451 sub: 47524 op: 159
    // SubProg keyfind pc: 1452 op: STARTLINE (58)

    /** symtab.e:1014	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1454 op: STARTLINE (58)

    /** symtab.e:1023		if length(dup_globals) = 1 and st_builtin = 0 then*/
    // SubProg keyfind pc: 1456 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1458 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24906 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24906 = 1;
    }
    // SubProg keyfind pc: 1461 op: EQUALS (3)
    _24907 = (_24906 == 1);
    _24906 = NOVALUE;
    // SubProg keyfind pc: 1465 op: SC1_AND_IF (146)
    if (_24907 == 0) {
        goto L32; // [1465] 1642
    }
    // SubProg keyfind pc: 1469 op: EQUALS (3)
    _24909 = (_st_builtin_47541 == 0);
    // SubProg keyfind pc: 1473 op: NOP1 (159)
    // SubProg keyfind pc: 1474 op: IF (20)
    if (_24909 == 0)
    {
        DeRef(_24909);
        _24909 = NOVALUE;
        goto L32; // [1474] 1642
    }
    else{
        DeRef(_24909);
        _24909 = NOVALUE;
    }
    // SubProg keyfind pc: 1477 op: STARTLINE (58)

    /** symtab.e:1026			if BIND then*/
    // SubProg keyfind pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1481 op: IF (20)
    if (_5BIND_12100 == 0)
    {
        goto L33; // [1481] 1492
    }
    else{
    }
    // SubProg keyfind pc: 1484 op: STARTLINE (58)

    /** symtab.e:1027				add_ref(gtok)*/
    // SubProg keyfind pc: 1486 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1488 op: PROC (27)
    Ref(_gtok_47544);
    _53add_ref(_gtok_47544);
    // SubProg keyfind pc: 1491 op: NOP1 (159)
L33: // addr: 1492 pc: 1491 sub: 47524 op: 159
    // SubProg keyfind pc: 1492 op: STARTLINE (58)

    /** symtab.e:1029			if not in_include_path[1] and*/
    // SubProg keyfind pc: 1494 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1496 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53in_include_path_47514);
    _24910 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1500 op: NOT (7)
    if (IS_ATOM_INT(_24910)) {
        _24911 = (_24910 == 0);
    }
    else {
        _24911 = unary_op(NOT, _24910);
    }
    _24910 = NOVALUE;
    // SubProg keyfind pc: 1503 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24911)) {
        if (_24911 == 0) {
            goto L34; // [1503] 1635
        }
    }
    else {
        if (DBL_PTR(_24911)->dbl == 0.0) {
            goto L34; // [1503] 1635
        }
    }
    // SubProg keyfind pc: 1507 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1509 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1511 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1513 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47544);
    _24913 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1517 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_24913)){
        _24914 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24913)->dbl));
    }
    else{
        _24914 = (object)*(((s1_ptr)_2)->base + _24913);
    }
    // SubProg keyfind pc: 1521 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1523 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24914);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _24915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _24915 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _24914 = NOVALUE;
    // SubProg keyfind pc: 1527 op: RIGHT_BRACE_2 (85)
    Ref(_24915);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47528;
    ((intptr_t *)_2)[2] = _24915;
    _24916 = MAKE_SEQ(_1);
    _24915 = NOVALUE;
    // SubProg keyfind pc: 1531 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1533 op: FIND_FROM (176)
    _24917 = find_from(_24916, _53include_warnings_47515, 1);
    DeRefDS(_24916);
    _24916 = NOVALUE;
    // SubProg keyfind pc: 1538 op: NOT (7)
    _24918 = (_24917 == 0);
    _24917 = NOVALUE;
    // SubProg keyfind pc: 1541 op: NOP1 (159)
    // SubProg keyfind pc: 1542 op: IF (20)
    if (_24918 == 0)
    {
        DeRef(_24918);
        _24918 = NOVALUE;
        goto L34; // [1542] 1635
    }
    else{
        DeRef(_24918);
        _24918 = NOVALUE;
    }
    // SubProg keyfind pc: 1545 op: STARTLINE (58)

    /** symtab.e:1032				include_warnings = prepend( include_warnings,*/
    // SubProg keyfind pc: 1547 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1549 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1551 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1553 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47544);
    _24919 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1557 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_24919)){
        _24920 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24919)->dbl));
    }
    else{
        _24920 = (object)*(((s1_ptr)_2)->base + _24919);
    }
    // SubProg keyfind pc: 1561 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24920);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _24921 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _24921 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _24920 = NOVALUE;
    // SubProg keyfind pc: 1567 op: RIGHT_BRACE_2 (85)
    Ref(_24921);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47528;
    ((intptr_t *)_2)[2] = _24921;
    _24922 = MAKE_SEQ(_1);
    _24921 = NOVALUE;
    // SubProg keyfind pc: 1571 op: PREPEND (57)
    RefDS(_24922);
    Prepend(&_53include_warnings_47515, _53include_warnings_47515, _24922);
    DeRefDS(_24922);
    _24922 = NOVALUE;
    // SubProg keyfind pc: 1575 op: STARTLINE (58)

    /** symtab.e:1034	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1577 op: STARTLINE (58)

    /** symtab.e:1040					symbol_resolution_warning = GetMsgText(233,0,*/
    // SubProg keyfind pc: 1579 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1581 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _24924 = (object)*(((s1_ptr)_2)->base + _scanning_file_47528);
    // SubProg keyfind pc: 1585 op: PROC (27)
    Ref(_24924);
    _24925 = _53name_ext(_24924);
    _24924 = NOVALUE;
    // SubProg keyfind pc: 1589 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1591 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1593 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1595 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1597 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47544);
    _24926 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1601 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!IS_ATOM_INT(_24926)){
        _24927 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24926)->dbl));
    }
    else{
        _24927 = (object)*(((s1_ptr)_2)->base + _24926);
    }
    // SubProg keyfind pc: 1605 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1607 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24927);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _24928 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _24928 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _24927 = NOVALUE;
    // SubProg keyfind pc: 1611 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    if (!IS_ATOM_INT(_24928)){
        _24929 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24928)->dbl));
    }
    else{
        _24929 = (object)*(((s1_ptr)_2)->base + _24928);
    }
    // SubProg keyfind pc: 1615 op: PROC (27)
    Ref(_24929);
    _24930 = _53name_ext(_24929);
    _24929 = NOVALUE;
    // SubProg keyfind pc: 1619 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24925;
    ((intptr_t*)_2)[2] = _5line_number_12478;
    RefDS(_word_47526);
    ((intptr_t*)_2)[3] = _word_47526;
    ((intptr_t*)_2)[4] = _24930;
    _24931 = MAKE_SEQ(_1);
    _24930 = NOVALUE;
    _24925 = NOVALUE;
    // SubProg keyfind pc: 1626 op: PROC (27)
    _0 = _40GetMsgText(233, 0, _24931);
    DeRef(_5symbol_resolution_warning_12579);
    _5symbol_resolution_warning_12579 = _0;
    _24931 = NOVALUE;
    // SubProg keyfind pc: 1632 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1634 op: NOP1 (159)
L34: // addr: 1635 pc: 1634 sub: 47524 op: 159
    // SubProg keyfind pc: 1635 op: STARTLINE (58)

    /** symtab.e:1047			return gtok*/
    // SubProg keyfind pc: 1637 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var tok_47543
    DeRef(_tok_47543);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    _24878 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    DeRef(_24891);
    _24891 = NOVALUE;
    DeRef(_24907);
    _24907 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    _24928 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    DeRef(_24911);
    _24911 = NOVALUE;
    _24926 = NOVALUE;
    _24795 = NOVALUE;
    _24913 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24880 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    _24919 = NOVALUE;
    return _gtok_47544;
    // SubProg keyfind pc: 1641 op: NOP1 (159)
L32: // addr: 1642 pc: 1641 sub: 47524 op: 159
    // SubProg keyfind pc: 1642 op: STARTLINE (58)

    /** symtab.e:1051		if length(dup_globals) = 0 then*/
    // SubProg keyfind pc: 1644 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1646 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24933 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24933 = 1;
    }
    // SubProg keyfind pc: 1649 op: EQUALS_IFW_I (121)
    if (_24933 != 0)
    goto L35; // [1649] 1723
    // SubProg keyfind pc: 1653 op: STARTLINE (58)

    /** symtab.e:1052			defined = SC_UNDEFINED*/
    // SubProg keyfind pc: 1655 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1657 op: ASSIGN (18)
    _defined_47537 = 9;
    // SubProg keyfind pc: 1660 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1662 op: STARTLINE (58)

    /** symtab.e:1054			if fwd_line_number then*/
    // SubProg keyfind pc: 1664 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1666 op: IF (20)
    if (_5fwd_line_number_12479 == 0)
    {
        goto L36; // [1666] 1695
    }
    else{
    }
    // SubProg keyfind pc: 1669 op: STARTLINE (58)

    /** symtab.e:1055				last_ForwardLine     = ForwardLine*/
    // SubProg keyfind pc: 1671 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1673 op: ASSIGN (18)
    Ref(_49ForwardLine_48782);
    DeRef(_49last_ForwardLine_48784);
    _49last_ForwardLine_48784 = _49ForwardLine_48782;
    // SubProg keyfind pc: 1676 op: STARTLINE (58)

    /** symtab.e:1056				last_forward_bp      = forward_bp*/
    // SubProg keyfind pc: 1678 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1680 op: ASSIGN (18)
    _49last_forward_bp_48788 = _49forward_bp_48786;
    // SubProg keyfind pc: 1683 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1685 op: STARTLINE (58)

    /** symtab.e:1057				last_fwd_line_number = fwd_line_number*/
    // SubProg keyfind pc: 1687 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1689 op: ASSIGN (18)
    _5last_fwd_line_number_12481 = _5fwd_line_number_12479;
    // SubProg keyfind pc: 1692 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1694 op: NOP1 (159)
L36: // addr: 1695 pc: 1694 sub: 47524 op: 159
    // SubProg keyfind pc: 1695 op: STARTLINE (58)

    /** symtab.e:1060			ForwardLine = ThisLine*/
    // SubProg keyfind pc: 1697 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1699 op: ASSIGN (18)
    Ref(_49ThisLine_48781);
    DeRef(_49ForwardLine_48782);
    _49ForwardLine_48782 = _49ThisLine_48781;
    // SubProg keyfind pc: 1702 op: STARTLINE (58)

    /** symtab.e:1061			forward_bp = bp*/
    // SubProg keyfind pc: 1704 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1706 op: ASSIGN (18)
    _49forward_bp_48786 = _49bp_48785;
    // SubProg keyfind pc: 1709 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1711 op: STARTLINE (58)

    /** symtab.e:1062			fwd_line_number = line_number*/
    // SubProg keyfind pc: 1713 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1715 op: ASSIGN (18)
    _5fwd_line_number_12479 = _5line_number_12478;
    // SubProg keyfind pc: 1718 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1720 op: ELSE (23)
    goto L37; // [1720] 1766
    // SubProg keyfind pc: 1722 op: NOP1 (159)
L35: // addr: 1723 pc: 1722 sub: 47524 op: 159
    // SubProg keyfind pc: 1723 op: STARTLINE (58)

    /** symtab.e:1064		elsif length(dup_globals) then*/
    // SubProg keyfind pc: 1725 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1727 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47512)){
            _24935 = SEQ_PTR(_53dup_globals_47512)->length;
    }
    else {
        _24935 = 1;
    }
    // SubProg keyfind pc: 1730 op: IF (20)
    if (_24935 == 0)
    {
        _24935 = NOVALUE;
        goto L38; // [1730] 1745
    }
    else{
        _24935 = NOVALUE;
    }
    // SubProg keyfind pc: 1733 op: STARTLINE (58)

    /** symtab.e:1065			defined = SC_MULTIPLY_DEFINED*/
    // SubProg keyfind pc: 1735 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1737 op: ASSIGN (18)
    _defined_47537 = 10;
    // SubProg keyfind pc: 1740 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1742 op: ELSE (23)
    goto L37; // [1742] 1766
    // SubProg keyfind pc: 1744 op: NOP1 (159)
L38: // addr: 1745 pc: 1744 sub: 47524 op: 159
    // SubProg keyfind pc: 1745 op: STARTLINE (58)

    /** symtab.e:1066		elsif length(dup_overrides) then*/
    // SubProg keyfind pc: 1747 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1749 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_overrides_47513)){
            _24936 = SEQ_PTR(_53dup_overrides_47513)->length;
    }
    else {
        _24936 = 1;
    }
    // SubProg keyfind pc: 1752 op: IF (20)
    if (_24936 == 0)
    {
        _24936 = NOVALUE;
        goto L39; // [1752] 1765
    }
    else{
        _24936 = NOVALUE;
    }
    // SubProg keyfind pc: 1755 op: STARTLINE (58)

    /** symtab.e:1067			defined = SC_OVERRIDE*/
    // SubProg keyfind pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1759 op: ASSIGN (18)
    _defined_47537 = 12;
    // SubProg keyfind pc: 1762 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1764 op: NOP1 (159)
L39: // addr: 1765 pc: 1764 sub: 47524 op: 159
    // SubProg keyfind pc: 1765 op: NOP1 (159)
L37: // addr: 1766 pc: 1765 sub: 47524 op: 159
    // SubProg keyfind pc: 1766 op: STARTLINE (58)

    /** symtab.e:1070		if No_new_entry then*/
    // SubProg keyfind pc: 1768 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1770 op: IF (20)
    if (_53No_new_entry_47523 == 0)
    {
        goto L3A; // [1770] 1793
    }
    else{
    }
    // SubProg keyfind pc: 1773 op: STARTLINE (58)

    /** symtab.e:1071			return {IGNORED,word,defined,dup_globals}*/
    // SubProg keyfind pc: 1775 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1777 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1779 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1781 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 509;
    RefDS(_word_47526);
    ((intptr_t*)_2)[2] = _word_47526;
    ((intptr_t*)_2)[3] = _defined_47537;
    RefDS(_53dup_globals_47512);
    ((intptr_t*)_2)[4] = _53dup_globals_47512;
    _24937 = MAKE_SEQ(_1);
    // SubProg keyfind pc: 1788 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var tok_47543
    DeRef(_tok_47543);

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    _24878 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    DeRef(_24891);
    _24891 = NOVALUE;
    DeRef(_24907);
    _24907 = NOVALUE;
    _24821 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    _24928 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    DeRef(_24911);
    _24911 = NOVALUE;
    _24926 = NOVALUE;
    _24795 = NOVALUE;
    _24913 = NOVALUE;
    _24786 = NOVALUE;
    _24787 = NOVALUE;
    _24880 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    _24919 = NOVALUE;
    return _24937;
    // SubProg keyfind pc: 1792 op: NOP1 (159)
L3A: // addr: 1793 pc: 1792 sub: 47524 op: 159
    // SubProg keyfind pc: 1793 op: STARTLINE (58)

    /** symtab.e:1074		tok = {VARIABLE, NewEntry(word, 0, defined,*/
    // SubProg keyfind pc: 1795 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1797 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1799 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1803 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _24938 = (object)*(((s1_ptr)_2)->base + _hashval_47532);
    // SubProg keyfind pc: 1807 op: PROC (27)
    RefDS(_word_47526);
    Ref(_24938);
    _24939 = _53NewEntry(_word_47526, 0, _defined_47537, -100, _hashval_47532, _24938, 0);
    _24938 = NOVALUE;
    // SubProg keyfind pc: 1817 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_47543);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _24939;
    _tok_47543 = MAKE_SEQ(_1);
    _24939 = NOVALUE;
    // SubProg keyfind pc: 1821 op: STARTLINE (58)

    /** symtab.e:1076		buckets[hashval] = tok[T_SYM]*/
    // SubProg keyfind pc: 1823 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1825 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47543);
    _24941 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1831 op: ASSIGN_SUBS (16)
    Ref(_24941);
    _2 = (object)SEQ_PTR(_53buckets_46320);
    _2 = (object)(((s1_ptr)_2)->base + _hashval_47532);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24941;
    if( _1 != _24941 ){
        DeRef(_1);
    }
    _24941 = NOVALUE;
    // SubProg keyfind pc: 1835 op: STARTLINE (58)

    /** symtab.e:1078		if file_no != -1 then*/
    // SubProg keyfind pc: 1837 op: NOTEQ_IFW_I (122)
    if (_file_no_47527 == -1)
    goto L3B; // [1837] 1863
    // SubProg keyfind pc: 1841 op: STARTLINE (58)

    /** symtab.e:1079			SymTab[tok[T_SYM]][S_FILE_NO] = file_no*/
    // SubProg keyfind pc: 1843 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1845 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1847 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47543);
    _24943 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1851 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_24943))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24943)->dbl));
    else
    _3 = (object)(_24943 + ((s1_ptr)_2)->base);
    // SubProg keyfind pc: 1856 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1858 op: PASSIGN_SUBS (162)
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
    *(intptr_t *)_2 = _file_no_47527;
    DeRef(_1);
    _24944 = NOVALUE;
    // SubProg keyfind pc: 1862 op: NOP1 (159)
L3B: // addr: 1863 pc: 1862 sub: 47524 op: 159
    // SubProg keyfind pc: 1863 op: STARTLINE (58)

    /** symtab.e:1081		return tok  -- no ref on newly declared symbol*/
    // SubProg keyfind pc: 1865 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47526
    DeRefDS(_word_47526);

// block var file_no_47527

// block var scanning_file_47528

// block var namespace_ok_47531

// block var hashval_47532

// block var msg_47534
    DeRef(_msg_47534);

// block var b_name_47535
    DeRef(_b_name_47535);

// block var scope_47536

// block var defined_47537

// block var ix_47538

// block var st_ptr_47540

// block var st_builtin_47541

// block var gtok_47544
    DeRef(_gtok_47544);

// block var any_symbol_47547
    DeRef(_24768);
    _24768 = NOVALUE;
    _24827 = NOVALUE;
    DeRef(_24758);
    _24758 = NOVALUE;
    DeRef(_24807);
    _24807 = NOVALUE;
    _24878 = NOVALUE;
    DeRef(_24823);
    _24823 = NOVALUE;
    DeRef(_24817);
    _24817 = NOVALUE;
    DeRef(_24891);
    _24891 = NOVALUE;
    DeRef(_24907);
    _24907 = NOVALUE;
    _24821 = NOVALUE;
    _24943 = NOVALUE;
    _24834 = NOVALUE;
    DeRef(_24815);
    _24815 = NOVALUE;
    _24782 = NOVALUE;
    _24928 = NOVALUE;
    DeRef(_24809);
    _24809 = NOVALUE;
    DeRef(_24911);
    _24911 = NOVALUE;
    _24926 = NOVALUE;
    _24795 = NOVALUE;
    _24913 = NOVALUE;
    _24786 = NOVALUE;
    DeRef(_24937);
    _24937 = NOVALUE;
    _24787 = NOVALUE;
    _24880 = NOVALUE;
    _24802 = NOVALUE;
    DeRef(_24842);
    _24842 = NOVALUE;
    _24813 = NOVALUE;
    _24839 = NOVALUE;
    _24919 = NOVALUE;
    return _tok_47543;
    // SubProg keyfind pc: 1869 op: BADRETURNF (43)
    ;
}


void _53Hide(object _s_47936)
{
    object _prev_47938 = NOVALUE;
    object _p_47939 = NOVALUE;
// skipping _24965  name type: 0
    object _24964 = NOVALUE; // 47975 24964
    object _24963 = NOVALUE; // 47973 24963
    object _24962 = NOVALUE; // 47971 24962
// skipping _24961  name type: 0
    object _24960 = NOVALUE; // 47967 24960
    object _24959 = NOVALUE; // 47964 24959
    object _24958 = NOVALUE; // 47962 24958
    object _24957 = NOVALUE; // 47960 24957
    object _24956 = NOVALUE; // 47958 24956
// skipping _24955  name type: 0
// skipping _24954  name type: 0
// skipping _24953  name type: 0
    object _24952 = NOVALUE; // 47950 24952
    object _24951 = NOVALUE; // 47948 24951
    object _24950 = NOVALUE; // 47947 24950
    object _24949 = NOVALUE; // 47946 24949
// skipping _24948  name type: 0
    object _24947 = NOVALUE; // 47943 24947
    object _24946 = NOVALUE; // 47941 24946
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Hide pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47936)) {
        _1 = (object)(DBL_PTR(_s_47936)->dbl);
        DeRefDS(_s_47936);
        _s_47936 = _1;
    }
    // SubProg Hide pc: 3 op: STARTLINE (58)

    /** symtab.e:1090		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Hide pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24946 = (object)*(((s1_ptr)_2)->base + _s_47936);
    // SubProg Hide pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24946);
    _24947 = (object)*(((s1_ptr)_2)->base + 11);
    _24946 = NOVALUE;
    // SubProg Hide pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    if (!IS_ATOM_INT(_24947)){
        _p_47939 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24947)->dbl));
    }
    else{
        _p_47939 = (object)*(((s1_ptr)_2)->base + _24947);
    }
    if (!IS_ATOM_INT(_p_47939)){
        _p_47939 = (object)DBL_PTR(_p_47939)->dbl;
    }
    // SubProg Hide pc: 25 op: STARTLINE (58)

    /** symtab.e:1091		prev = 0*/
    // SubProg Hide pc: 27 op: ASSIGN (18)
    _prev_47938 = 0;
    // SubProg Hide pc: 30 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 32 op: STARTLINE (58)

    /** symtab.e:1093		while p != s and p != 0 do*/
    // SubProg Hide pc: 34 op: NOP2 (110)
    // SubProg Hide pc: 36 op: NOPWHILE (158)
L1: // addr: 37 pc: 36 sub: 47933 op: 158
    // SubProg Hide pc: 37 op: NOTEQ (4)
    _24949 = (_p_47939 != _s_47936);
    // SubProg Hide pc: 41 op: SC1_AND_IF (146)
    if (_24949 == 0) {
        goto L2; // [41] 81
    }
    // SubProg Hide pc: 45 op: NOTEQ (4)
    _24951 = (_p_47939 != 0);
    // SubProg Hide pc: 49 op: NOP1 (159)
    // SubProg Hide pc: 50 op: WHILE (47)
    if (_24951 == 0)
    {
        DeRef(_24951);
        _24951 = NOVALUE;
        goto L2; // [50] 81
    }
    else{
        DeRef(_24951);
        _24951 = NOVALUE;
    }
    // SubProg Hide pc: 53 op: STARTLINE (58)

    /** symtab.e:1094			prev = p*/
    // SubProg Hide pc: 55 op: ASSIGN (18)
    _prev_47938 = _p_47939;
    // SubProg Hide pc: 58 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 60 op: STARTLINE (58)

    /** symtab.e:1095			p = SymTab[p][S_SAMEHASH]*/
    // SubProg Hide pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24952 = (object)*(((s1_ptr)_2)->base + _p_47939);
    // SubProg Hide pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24952);
    _p_47939 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_p_47939)){
        _p_47939 = (object)DBL_PTR(_p_47939)->dbl;
    }
    _24952 = NOVALUE;
    // SubProg Hide pc: 76 op: STARTLINE (58)

    /** symtab.e:1096		end while*/
    // SubProg Hide pc: 78 op: ENDWHILE (22)
    goto L1; // [78] 37
    // SubProg Hide pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 47933 op: 159
    // SubProg Hide pc: 81 op: STARTLINE (58)

    /** symtab.e:1098		if p = 0 then*/
    // SubProg Hide pc: 83 op: EQUALS_IFW (104)
    if (_p_47939 != 0)
    goto L3; // [83] 93
    // SubProg Hide pc: 87 op: STARTLINE (58)

    /** symtab.e:1099			return -- already hidden*/
    // SubProg Hide pc: 89 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Hide

// block var s_47936

// block var prev_47938

// block var p_47939
    _24947 = NOVALUE;
    DeRef(_24949);
    _24949 = NOVALUE;
    return;
    // SubProg Hide pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 47933 op: 159
    // SubProg Hide pc: 93 op: STARTLINE (58)

    /** symtab.e:1101		if prev = 0 then*/
    // SubProg Hide pc: 95 op: EQUALS_IFW (104)
    if (_prev_47938 != 0)
    goto L4; // [95] 134
    // SubProg Hide pc: 99 op: STARTLINE (58)

    /** symtab.e:1102			buckets[SymTab[s][S_HASHVAL]] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24956 = (object)*(((s1_ptr)_2)->base + _s_47936);
    // SubProg Hide pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 111 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24956);
    _24957 = (object)*(((s1_ptr)_2)->base + 11);
    _24956 = NOVALUE;
    // SubProg Hide pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 117 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24958 = (object)*(((s1_ptr)_2)->base + _s_47936);
    // SubProg Hide pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24958);
    _24959 = (object)*(((s1_ptr)_2)->base + 9);
    _24958 = NOVALUE;
    // SubProg Hide pc: 127 op: ASSIGN_SUBS (16)
    Ref(_24959);
    _2 = (object)SEQ_PTR(_53buckets_46320);
    if (!IS_ATOM_INT(_24957))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24957)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24957);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24959;
    if( _1 != _24959 ){
        DeRef(_1);
    }
    _24959 = NOVALUE;
    // SubProg Hide pc: 131 op: ELSE (23)
    goto L5; // [131] 162
    // SubProg Hide pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 47933 op: 159
    // SubProg Hide pc: 134 op: STARTLINE (58)

    /** symtab.e:1104			SymTab[prev][S_SAMEHASH] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 138 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_47938 + ((s1_ptr)_2)->base);
    // SubProg Hide pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24962 = (object)*(((s1_ptr)_2)->base + _s_47936);
    // SubProg Hide pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24962);
    _24963 = (object)*(((s1_ptr)_2)->base + 9);
    _24962 = NOVALUE;
    // SubProg Hide pc: 157 op: PASSIGN_SUBS (162)
    Ref(_24963);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24963;
    if( _1 != _24963 ){
        DeRef(_1);
    }
    _24963 = NOVALUE;
    _24960 = NOVALUE;
    // SubProg Hide pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 47933 op: 159
    // SubProg Hide pc: 162 op: STARTLINE (58)

    /** symtab.e:1106		SymTab[s][S_SAMEHASH] = 0*/
    // SubProg Hide pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 166 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47936 + ((s1_ptr)_2)->base);
    // SubProg Hide pc: 171 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 173 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _24964 = NOVALUE;
    // SubProg Hide pc: 177 op: STARTLINE (58)

    /** symtab.e:1107	end procedure*/
    // SubProg Hide pc: 179 op: RETURNP (29)

// Exiting block BLOCK: Hide

// block var s_47936

// block var prev_47938

// block var p_47939
    _24947 = NOVALUE;
    DeRef(_24949);
    _24949 = NOVALUE;
    _24957 = NOVALUE;
    return;
    // SubProg Hide pc: 182 op: BADRETURNF (43)
    ;
}


void _53Show(object _s_47981)
{
    object _p_47983 = NOVALUE;
    object _24976 = NOVALUE; // 48003 24976
    object _24975 = NOVALUE; // 48001 24975
// skipping _24974  name type: 0
    object _24973 = NOVALUE; // 47997 24973
    object _24972 = NOVALUE; // 47995 24972
// skipping _24971  name type: 0
    object _24970 = NOVALUE; // 47993 24970
    object _24969 = NOVALUE; // 47991 24969
// skipping _24968  name type: 0
    object _24967 = NOVALUE; // 47987 24967
    object _24966 = NOVALUE; // 47985 24966
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Show pc: 1 op: INTEGER_CHECK (96)
    // SubProg Show pc: 3 op: STARTLINE (58)

    /** symtab.e:1114		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Show pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24966 = (object)*(((s1_ptr)_2)->base + _s_47981);
    // SubProg Show pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24966);
    _24967 = (object)*(((s1_ptr)_2)->base + 11);
    _24966 = NOVALUE;
    // SubProg Show pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    if (!IS_ATOM_INT(_24967)){
        _p_47983 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24967)->dbl));
    }
    else{
        _p_47983 = (object)*(((s1_ptr)_2)->base + _24967);
    }
    if (!IS_ATOM_INT(_p_47983)){
        _p_47983 = (object)DBL_PTR(_p_47983)->dbl;
    }
    // SubProg Show pc: 25 op: STARTLINE (58)

    /** symtab.e:1116		if SymTab[s][S_SAMEHASH] or p = s then*/
    // SubProg Show pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24969 = (object)*(((s1_ptr)_2)->base + _s_47981);
    // SubProg Show pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24969);
    _24970 = (object)*(((s1_ptr)_2)->base + 9);
    _24969 = NOVALUE;
    // SubProg Show pc: 39 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24970)) {
        if (_24970 != 0) {
            goto L1; // [39] 52
        }
    }
    else {
        if (DBL_PTR(_24970)->dbl != 0.0) {
            goto L1; // [39] 52
        }
    }
    // SubProg Show pc: 43 op: EQUALS (3)
    _24972 = (_p_47983 == _s_47981);
    // SubProg Show pc: 47 op: NOP1 (159)
    // SubProg Show pc: 48 op: IF (20)
    if (_24972 == 0)
    {
        DeRef(_24972);
        _24972 = NOVALUE;
        goto L2; // [48] 58
    }
    else{
        DeRef(_24972);
        _24972 = NOVALUE;
    }
    // SubProg Show pc: 51 op: NOP1 (159)
L1: // addr: 52 pc: 51 sub: 47978 op: 159
    // SubProg Show pc: 52 op: STARTLINE (58)

    /** symtab.e:1118			return*/
    // SubProg Show pc: 54 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Show

// block var s_47981

// block var p_47983
    _24970 = NOVALUE;
    _24967 = NOVALUE;
    return;
    // SubProg Show pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 47978 op: 159
    // SubProg Show pc: 58 op: STARTLINE (58)

    /** symtab.e:1121		SymTab[s][S_SAMEHASH] = p*/
    // SubProg Show pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 62 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _7SymTab_11389 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47981 + ((s1_ptr)_2)->base);
    // SubProg Show pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 69 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_47983;
    DeRef(_1);
    _24973 = NOVALUE;
    // SubProg Show pc: 73 op: STARTLINE (58)

    /** symtab.e:1122		buckets[SymTab[s][S_HASHVAL]] = s*/
    // SubProg Show pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24975 = (object)*(((s1_ptr)_2)->base + _s_47981);
    // SubProg Show pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24975);
    _24976 = (object)*(((s1_ptr)_2)->base + 11);
    _24975 = NOVALUE;
    // SubProg Show pc: 89 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_53buckets_46320);
    if (!IS_ATOM_INT(_24976))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24976)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24976);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_47981;
    DeRef(_1);
    // SubProg Show pc: 93 op: STARTLINE (58)

    /** symtab.e:1124	end procedure*/
    // SubProg Show pc: 95 op: RETURNP (29)

// Exiting block BLOCK: Show

// block var s_47981

// block var p_47983
    _24976 = NOVALUE;
    _24970 = NOVALUE;
    _24967 = NOVALUE;
    return;
    // SubProg Show pc: 98 op: BADRETURNF (43)
    ;
}


void _53hide_params(object _s_48007)
{
    object _param_48009 = NOVALUE;
// skipping _24980  name type: 0
    object _24979 = NOVALUE; // 48017 24979
    object _24978 = NOVALUE; // 48015 24978
    object _24977 = NOVALUE; // 48013 24977
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hide_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1127		symtab_index param = s*/
    // SubProg hide_params pc: 5 op: ASSIGN (18)
    _param_48009 = _s_48007;
    // SubProg hide_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1128		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg hide_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24977 = (object)*(((s1_ptr)_2)->base + _s_48007);
    // SubProg hide_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24977);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _24978 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _24978 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _24977 = NOVALUE;
    // SubProg hide_params pc: 24 op: FOR (21)
    {
        object _i_48011;
        _i_48011 = 1;
L1: // addr: 31 pc: 24 sub: 48004 op: 21
        if (binary_op_a(GREATER, _i_48011, _24978)){
            goto L2; // [24] 59
        }
        // SubProg hide_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1129			param = SymTab[s][S_NEXT]*/
        // SubProg hide_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24979 = (object)*(((s1_ptr)_2)->base + _s_48007);
        // SubProg hide_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24979);
        _param_48009 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_48009)){
            _param_48009 = (object)DBL_PTR(_param_48009)->dbl;
        }
        _24979 = NOVALUE;
        // SubProg hide_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1130			Hide( param )*/
        // SubProg hide_params pc: 49 op: PROC (27)
        _53Hide(_param_48009);
        // SubProg hide_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1131		end for*/
        // SubProg hide_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_48011;
        if (IS_ATOM_INT(_i_48011)) {
            _i_48011 = _i_48011 + 1;
            if ((object)((uintptr_t)_i_48011 +(uintptr_t) HIGH_BITS) >= 0){
                _i_48011 = NewDouble((eudouble)_i_48011);
            }
        }
        else {
            _i_48011 = binary_op_a(PLUS, _i_48011, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 48004 op: 54
        ;
        DeRef(_i_48011);
    }
    // SubProg hide_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1132	end procedure*/
    // SubProg hide_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: hide_params

// block var s_48007

// block var param_48009
    _24978 = NOVALUE;
    return;
    // SubProg hide_params pc: 64 op: BADRETURNF (43)
    ;
}


void _53show_params(object _s_48023)
{
    object _param_48025 = NOVALUE;
// skipping _24984  name type: 0
    object _24983 = NOVALUE; // 48033 24983
    object _24982 = NOVALUE; // 48031 24982
    object _24981 = NOVALUE; // 48029 24981
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1135		symtab_index param = s*/
    // SubProg show_params pc: 5 op: ASSIGN (18)
    _param_48025 = _s_48023;
    // SubProg show_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1136		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg show_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24981 = (object)*(((s1_ptr)_2)->base + _s_48023);
    // SubProg show_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24981);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _24982 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _24982 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _24981 = NOVALUE;
    // SubProg show_params pc: 24 op: FOR (21)
    {
        object _i_48027;
        _i_48027 = 1;
L1: // addr: 31 pc: 24 sub: 48020 op: 21
        if (binary_op_a(GREATER, _i_48027, _24982)){
            goto L2; // [24] 59
        }
        // SubProg show_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1137			param = SymTab[s][S_NEXT]*/
        // SubProg show_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24983 = (object)*(((s1_ptr)_2)->base + _s_48023);
        // SubProg show_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24983);
        _param_48025 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_48025)){
            _param_48025 = (object)DBL_PTR(_param_48025)->dbl;
        }
        _24983 = NOVALUE;
        // SubProg show_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1138			Show( param )*/
        // SubProg show_params pc: 49 op: PROC (27)
        _53Show(_param_48025);
        // SubProg show_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1139		end for*/
        // SubProg show_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_48027;
        if (IS_ATOM_INT(_i_48027)) {
            _i_48027 = _i_48027 + 1;
            if ((object)((uintptr_t)_i_48027 +(uintptr_t) HIGH_BITS) >= 0){
                _i_48027 = NewDouble((eudouble)_i_48027);
            }
        }
        else {
            _i_48027 = binary_op_a(PLUS, _i_48027, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 48020 op: 54
        ;
        DeRef(_i_48027);
    }
    // SubProg show_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1140	end procedure*/
    // SubProg show_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: show_params

// block var s_48023

// block var param_48025
    _24982 = NOVALUE;
    return;
    // SubProg show_params pc: 64 op: BADRETURNF (43)
    ;
}


void _53LintCheck(object _s_48039)
{
    object _warn_level_48040 = NOVALUE;
    object _file_48041 = NOVALUE;
    object _vscope_48042 = NOVALUE;
    object _vname_48043 = NOVALUE;
    object _vusage_48044 = NOVALUE;
    object _25044 = NOVALUE; // 48206 25044
    object _25043 = NOVALUE; // 48205 25043
    object _25042 = NOVALUE; // 48203 25042
    object _25041 = NOVALUE; // 48197 25041
    object _25040 = NOVALUE; // 48196 25040
    object _25039 = NOVALUE; // 48194 25039
// skipping _25038  name type: 0
    object _25037 = NOVALUE; // 48184 25037
    object _25036 = NOVALUE; // 48183 25036
    object _25035 = NOVALUE; // 48181 25035
    object _25034 = NOVALUE; // 48175 25034
    object _25033 = NOVALUE; // 48174 25033
    object _25032 = NOVALUE; // 48172 25032
// skipping _25031  name type: 0
// skipping _25030  name type: 0
    object _25029 = NOVALUE; // 48162 25029
    object _25028 = NOVALUE; // 48160 25028
    object _25027 = NOVALUE; // 48157 25027
    object _25026 = NOVALUE; // 48155 25026
    object _25025 = NOVALUE; // 48151 25025
    object _25024 = NOVALUE; // 48147 25024
// skipping _25023  name type: 0
    object _25022 = NOVALUE; // 48142 25022
// skipping _25021  name type: 0
    object _25020 = NOVALUE; // 48137 25020
    object _25019 = NOVALUE; // 48135 25019
// skipping _25018  name type: 0
    object _25017 = NOVALUE; // 48131 25017
    object _25016 = NOVALUE; // 48129 25016
// skipping _25015  name type: 0
    object _25014 = NOVALUE; // 48121 25014
    object _25013 = NOVALUE; // 48120 25013
    object _25012 = NOVALUE; // 48118 25012
    object _25011 = NOVALUE; // 48112 25011
// skipping _25010  name type: 0
    object _25009 = NOVALUE; // 48108 25009
    object _25008 = NOVALUE; // 48106 25008
// skipping _25007  name type: 0
// skipping _25006  name type: 0
// skipping _25005  name type: 0
    object _25004 = NOVALUE; // 48096 25004
// skipping _25003  name type: 0
// skipping _25002  name type: 0
    object _25001 = NOVALUE; // 48087 25001
    object _25000 = NOVALUE; // 48085 25000
    object _24999 = NOVALUE; // 48082 24999
    object _24998 = NOVALUE; // 48080 24998
// skipping _24997  name type: 0
// skipping _24996  name type: 0
    object _24995 = NOVALUE; // 48070 24995
    object _24994 = NOVALUE; // 48068 24994
// skipping _24993  name type: 0
// skipping _24990  name type: 0
    object _24989 = NOVALUE; // 48054 24989
// skipping _24988  name type: 0
    object _24987 = NOVALUE; // 48050 24987
// skipping _24986  name type: 0
    object _24985 = NOVALUE; // 48046 24985
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg LintCheck pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_48039)) {
        _1 = (object)(DBL_PTR(_s_48039)->dbl);
        DeRefDS(_s_48039);
        _s_48039 = _1;
    }
    // SubProg LintCheck pc: 3 op: STARTLINE (58)

    /** symtab.e:1150		vusage = SymTab[s][S_USAGE]*/
    // SubProg LintCheck pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24985 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24985);
    _vusage_48044 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_vusage_48044)){
        _vusage_48044 = (object)DBL_PTR(_vusage_48044)->dbl;
    }
    _24985 = NOVALUE;
    // SubProg LintCheck pc: 19 op: STARTLINE (58)

    /** symtab.e:1151		vscope = SymTab[s][S_SCOPE]*/
    // SubProg LintCheck pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24987 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24987);
    _vscope_48042 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_vscope_48042)){
        _vscope_48042 = (object)DBL_PTR(_vscope_48042)->dbl;
    }
    _24987 = NOVALUE;
    // SubProg LintCheck pc: 35 op: STARTLINE (58)

    /** symtab.e:1152		vname = SymTab[s][S_NAME]*/
    // SubProg LintCheck pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _24989 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_vname_48043);
    _2 = (object)SEQ_PTR(_24989);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _vname_48043 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _vname_48043 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    Ref(_vname_48043);
    _24989 = NOVALUE;
    // SubProg LintCheck pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 51 op: STARTLINE (58)

    /** symtab.e:1154		switch vusage do*/
    // SubProg LintCheck pc: 53 op: SWITCH_I (193)
    _0 = _vusage_48044;
    switch ( _0 ){ 
        // SubProg LintCheck pc: 58 op: STARTLINE (58)

        /** symtab.e:1156			case U_UNUSED then*/
        // SubProg LintCheck pc: 60 op: CASE (186)
        case 0:
        // SubProg LintCheck pc: 62 op: STARTLINE (58)

        /** symtab.e:1157				warn_level = 1*/
        // SubProg LintCheck pc: 64 op: ASSIGN_I (113)
        _warn_level_48040 = 1;
        // SubProg LintCheck pc: 67 op: ELSE (23)
        goto L1; // [67] 193
        // SubProg LintCheck pc: 69 op: STARTLINE (58)

        /** symtab.e:1159			case U_WRITTEN then -- Set but never read*/
        // SubProg LintCheck pc: 71 op: CASE (186)
        case 2:
        // SubProg LintCheck pc: 73 op: STARTLINE (58)

        /** symtab.e:1160				warn_level = 2*/
        // SubProg LintCheck pc: 75 op: ASSIGN_I (113)
        _warn_level_48040 = 2;
        // SubProg LintCheck pc: 78 op: STARTLINE (58)

        /** symtab.e:1162				if vscope > SC_LOCAL then*/
        // SubProg LintCheck pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 82 op: GREATER_IFW (107)
        if (_vscope_48042 <= 5)
        goto L2; // [82] 94
        // SubProg LintCheck pc: 86 op: STARTLINE (58)

        /** symtab.e:1164					warn_level = 0 */
        // SubProg LintCheck pc: 88 op: ASSIGN_I (113)
        _warn_level_48040 = 0;
        // SubProg LintCheck pc: 91 op: ELSE (23)
        goto L1; // [91] 193
        // SubProg LintCheck pc: 93 op: NOP1 (159)
L2: // addr: 94 pc: 93 sub: 48036 op: 159
        // SubProg LintCheck pc: 94 op: STARTLINE (58)

        /** symtab.e:1166				elsif SymTab[s][S_MODE] = M_CONSTANT then*/
        // SubProg LintCheck pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24994 = (object)*(((s1_ptr)_2)->base + _s_48039);
        // SubProg LintCheck pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24994);
        _24995 = (object)*(((s1_ptr)_2)->base + 3);
        _24994 = NOVALUE;
        // SubProg LintCheck pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 110 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24995, 2)){
            _24995 = NOVALUE;
            goto L1; // [110] 193
        }
        _24995 = NOVALUE;
        // SubProg LintCheck pc: 114 op: STARTLINE (58)

        /** symtab.e:1167					if not Strict_is_on then*/
        // SubProg LintCheck pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 118 op: NOT_IFW (108)
        if (_5Strict_is_on_12543 != 0)
        goto L1; // [118] 193
        // SubProg LintCheck pc: 121 op: STARTLINE (58)

        /** symtab.e:1170						warn_level = 0 */
        // SubProg LintCheck pc: 123 op: ASSIGN_I (113)
        _warn_level_48040 = 0;
        // SubProg LintCheck pc: 126 op: NOP1 (159)
        // SubProg LintCheck pc: 127 op: NOP1 (159)
        // SubProg LintCheck pc: 128 op: NOP1 (159)
        // SubProg LintCheck pc: 129 op: ELSE (23)
        goto L1; // [129] 193
        // SubProg LintCheck pc: 131 op: STARTLINE (58)

        /** symtab.e:1174			case U_READ then -- Read but never set*/
        // SubProg LintCheck pc: 133 op: CASE (186)
        case 1:
        // SubProg LintCheck pc: 135 op: STARTLINE (58)

        /** symtab.e:1175				if SymTab[s][S_VARNUM] >= SymTab[CurrentSub][S_NUM_ARGS] then*/
        // SubProg LintCheck pc: 137 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 139 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _24998 = (object)*(((s1_ptr)_2)->base + _s_48039);
        // SubProg LintCheck pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24998);
        _24999 = (object)*(((s1_ptr)_2)->base + 16);
        _24998 = NOVALUE;
        // SubProg LintCheck pc: 149 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 151 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7SymTab_11389);
        _25000 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
        // SubProg LintCheck pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_25000);
        if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
            _25001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
        }
        else{
            _25001 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
        }
        _25000 = NOVALUE;
        // SubProg LintCheck pc: 163 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _24999, _25001)){
            _24999 = NOVALUE;
            _25001 = NOVALUE;
            goto L3; // [163] 175
        }
        _24999 = NOVALUE;
        _25001 = NOVALUE;
        // SubProg LintCheck pc: 167 op: STARTLINE (58)

        /** symtab.e:1176			    	warn_level = 3*/
        // SubProg LintCheck pc: 169 op: ASSIGN_I (113)
        _warn_level_48040 = 3;
        // SubProg LintCheck pc: 172 op: ELSE (23)
        goto L1; // [172] 193
        // SubProg LintCheck pc: 174 op: NOP1 (159)
L3: // addr: 175 pc: 174 sub: 48036 op: 159
        // SubProg LintCheck pc: 175 op: STARTLINE (58)

        /** symtab.e:1179			    	warn_level = 0*/
        // SubProg LintCheck pc: 177 op: ASSIGN_I (113)
        _warn_level_48040 = 0;
        // SubProg LintCheck pc: 180 op: NOP1 (159)
        // SubProg LintCheck pc: 181 op: ELSE (23)
        goto L1; // [181] 193
        // SubProg LintCheck pc: 183 op: STARTLINE (58)

        /** symtab.e:1182		    case else*/
        // SubProg LintCheck pc: 185 op: CASE (186)
        default:
        // SubProg LintCheck pc: 187 op: STARTLINE (58)

        /** symtab.e:1183		    	warn_level = 0*/
        // SubProg LintCheck pc: 189 op: ASSIGN_I (113)
        _warn_level_48040 = 0;
        // SubProg LintCheck pc: 192 op: NOPSWITCH (187)
    ;}L1: // addr: 193 pc: 192 sub: 48036 op: 187
    // SubProg LintCheck pc: 193 op: STARTLINE (58)

    /** symtab.e:1186		if warn_level = 0 then*/
    // SubProg LintCheck pc: 195 op: PRIVATE_INIT_CHECK (30)
    // SubProg LintCheck pc: 197 op: EQUALS_IFW_I (121)
    if (_warn_level_48040 != 0)
    goto L4; // [197] 207
    // SubProg LintCheck pc: 201 op: STARTLINE (58)

    /** symtab.e:1187			return*/
    // SubProg LintCheck pc: 203 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: LintCheck

// block var s_48039

// block var warn_level_48040

// block var file_48041
    DeRef(_file_48041);

// block var vscope_48042

// block var vname_48043
    DeRef(_vname_48043);

// block var vusage_48044
    return;
    // SubProg LintCheck pc: 206 op: NOP1 (159)
L4: // addr: 207 pc: 206 sub: 48036 op: 159
    // SubProg LintCheck pc: 207 op: STARTLINE (58)

    /** symtab.e:1191		file = abbreviate_path(known_files[current_file_no])*/
    // SubProg LintCheck pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7known_files_11390);
    _25004 = (object)*(((s1_ptr)_2)->base + _5current_file_no_12477);
    // SubProg LintCheck pc: 217 op: PROC (27)
    Ref(_25004);
    RefDS(_21958);
    _0 = _file_48041;
    _file_48041 = _16abbreviate_path(_25004, _21958);
    DeRef(_0);
    _25004 = NOVALUE;
    // SubProg LintCheck pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 224 op: STARTLINE (58)

    /** symtab.e:1192		if warn_level = 3 then*/
    // SubProg LintCheck pc: 226 op: EQUALS_IFW_I (121)
    if (_warn_level_48040 != 3)
    goto L5; // [226] 308
    // SubProg LintCheck pc: 230 op: STARTLINE (58)

    /** symtab.e:1193			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 234 op: EQUALS_IFW (104)
    if (_vscope_48042 != 5)
    goto L6; // [234] 275
    // SubProg LintCheck pc: 238 op: STARTLINE (58)

    /** symtab.e:1194				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 244 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25008 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25008);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _25009 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _25009 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _25008 = NOVALUE;
    // SubProg LintCheck pc: 254 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5current_file_no_12477, _25009)){
        _25009 = NOVALUE;
        goto L7; // [254] 602
    }
    _25009 = NOVALUE;
    // SubProg LintCheck pc: 258 op: STARTLINE (58)

    /** symtab.e:1195					Warning(226, no_value_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_48043);
    RefDS(_file_48041);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_48041;
    ((intptr_t *)_2)[2] = _vname_48043;
    _25011 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 266 op: PROC (27)
    _49Warning(226, 32, _25011);
    _25011 = NOVALUE;
    // SubProg LintCheck pc: 271 op: NOP1 (159)
    // SubProg LintCheck pc: 272 op: ELSE (23)
    goto L7; // [272] 602
    // SubProg LintCheck pc: 274 op: NOP1 (159)
L6: // addr: 275 pc: 274 sub: 48036 op: 159
    // SubProg LintCheck pc: 275 op: STARTLINE (58)

    /** symtab.e:1198				Warning(227, no_value_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25012 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 289 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25012);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25013 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25013 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25012 = NOVALUE;
    // SubProg LintCheck pc: 293 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_48041);
    ((intptr_t*)_2)[1] = _file_48041;
    RefDS(_vname_48043);
    ((intptr_t*)_2)[2] = _vname_48043;
    Ref(_25013);
    ((intptr_t*)_2)[3] = _25013;
    _25014 = MAKE_SEQ(_1);
    _25013 = NOVALUE;
    // SubProg LintCheck pc: 299 op: PROC (27)
    _49Warning(227, 32, _25014);
    _25014 = NOVALUE;
    // SubProg LintCheck pc: 304 op: NOP1 (159)
    // SubProg LintCheck pc: 305 op: ELSE (23)
    goto L7; // [305] 602
    // SubProg LintCheck pc: 307 op: NOP1 (159)
L5: // addr: 308 pc: 307 sub: 48036 op: 159
    // SubProg LintCheck pc: 308 op: STARTLINE (58)

    /** symtab.e:1201			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 310 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 312 op: EQUALS_IFW (104)
    if (_vscope_48042 != 5)
    goto L8; // [312] 412
    // SubProg LintCheck pc: 316 op: STARTLINE (58)

    /** symtab.e:1202				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 322 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25016 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25016);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _25017 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _25017 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _25016 = NOVALUE;
    // SubProg LintCheck pc: 332 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _5current_file_no_12477, _25017)){
        _25017 = NOVALUE;
        goto L9; // [332] 601
    }
    _25017 = NOVALUE;
    // SubProg LintCheck pc: 336 op: STARTLINE (58)

    /** symtab.e:1203					if SymTab[s][S_MODE] = M_CONSTANT then*/
    // SubProg LintCheck pc: 338 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 340 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25019 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 346 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25019);
    _25020 = (object)*(((s1_ptr)_2)->base + 3);
    _25019 = NOVALUE;
    // SubProg LintCheck pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 352 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25020, 2)){
        _25020 = NOVALUE;
        goto LA; // [352] 372
    }
    _25020 = NOVALUE;
    // SubProg LintCheck pc: 356 op: STARTLINE (58)

    /** symtab.e:1204						Warning(228, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 360 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_48043);
    RefDS(_file_48041);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_48041;
    ((intptr_t *)_2)[2] = _vname_48043;
    _25022 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 364 op: PROC (27)
    _49Warning(228, 16, _25022);
    _25022 = NOVALUE;
    // SubProg LintCheck pc: 369 op: ELSE (23)
    goto L9; // [369] 601
    // SubProg LintCheck pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 48036 op: 159
    // SubProg LintCheck pc: 372 op: STARTLINE (58)

    /** symtab.e:1206					elsif warn_level = 1 then*/
    // SubProg LintCheck pc: 374 op: EQUALS_IFW_I (121)
    if (_warn_level_48040 != 1)
    goto LB; // [374] 394
    // SubProg LintCheck pc: 378 op: STARTLINE (58)

    /** symtab.e:1207						Warning(229, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 382 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_48043);
    RefDS(_file_48041);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_48041;
    ((intptr_t *)_2)[2] = _vname_48043;
    _25024 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 386 op: PROC (27)
    _49Warning(229, 16, _25024);
    _25024 = NOVALUE;
    // SubProg LintCheck pc: 391 op: ELSE (23)
    goto L9; // [391] 601
    // SubProg LintCheck pc: 393 op: NOP1 (159)
LB: // addr: 394 pc: 393 sub: 48036 op: 159
    // SubProg LintCheck pc: 394 op: STARTLINE (58)

    /** symtab.e:1210						Warning(320, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 398 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_48043);
    RefDS(_file_48041);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_48041;
    ((intptr_t *)_2)[2] = _vname_48043;
    _25025 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 402 op: PROC (27)
    _49Warning(320, 16, _25025);
    _25025 = NOVALUE;
    // SubProg LintCheck pc: 407 op: NOP1 (159)
    // SubProg LintCheck pc: 408 op: NOP1 (159)
    // SubProg LintCheck pc: 409 op: ELSE (23)
    goto L9; // [409] 601
    // SubProg LintCheck pc: 411 op: NOP1 (159)
L8: // addr: 412 pc: 411 sub: 48036 op: 159
    // SubProg LintCheck pc: 412 op: STARTLINE (58)

    /** symtab.e:1214				if SymTab[s][S_VARNUM] < SymTab[CurrentSub][S_NUM_ARGS] then*/
    // SubProg LintCheck pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 416 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25026 = (object)*(((s1_ptr)_2)->base + _s_48039);
    // SubProg LintCheck pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 422 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25026);
    _25027 = (object)*(((s1_ptr)_2)->base + 16);
    _25026 = NOVALUE;
    // SubProg LintCheck pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25028 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 434 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25028);
    if (!IS_ATOM_INT(_5S_NUM_ARGS_12183)){
        _25029 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NUM_ARGS_12183)->dbl));
    }
    else{
        _25029 = (object)*(((s1_ptr)_2)->base + _5S_NUM_ARGS_12183);
    }
    _25028 = NOVALUE;
    // SubProg LintCheck pc: 440 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _25027, _25029)){
        _25027 = NOVALUE;
        _25029 = NOVALUE;
        goto LC; // [440] 523
    }
    _25027 = NOVALUE;
    _25029 = NOVALUE;
    // SubProg LintCheck pc: 444 op: STARTLINE (58)

    /** symtab.e:1216					if warn_level = 1 then*/
    // SubProg LintCheck pc: 446 op: EQUALS_IFW_I (121)
    if (_warn_level_48040 != 1)
    goto LD; // [446] 490
    // SubProg LintCheck pc: 450 op: STARTLINE (58)

    /** symtab.e:1217						if Strict_is_on then*/
    // SubProg LintCheck pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 454 op: IF (20)
    if (_5Strict_is_on_12543 == 0)
    {
        goto LE; // [454] 600
    }
    else{
    }
    // SubProg LintCheck pc: 457 op: STARTLINE (58)

    /** symtab.e:1219							Warning(230, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 459 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 461 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 463 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 465 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25032 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 469 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 471 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25032);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25033 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25033 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25032 = NOVALUE;
    // SubProg LintCheck pc: 475 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_48041);
    ((intptr_t*)_2)[1] = _file_48041;
    RefDS(_vname_48043);
    ((intptr_t*)_2)[2] = _vname_48043;
    Ref(_25033);
    ((intptr_t*)_2)[3] = _25033;
    _25034 = MAKE_SEQ(_1);
    _25033 = NOVALUE;
    // SubProg LintCheck pc: 481 op: PROC (27)
    _49Warning(230, 16, _25034);
    _25034 = NOVALUE;
    // SubProg LintCheck pc: 486 op: NOP1 (159)
    // SubProg LintCheck pc: 487 op: ELSE (23)
    goto LE; // [487] 600
    // SubProg LintCheck pc: 489 op: NOP1 (159)
LD: // addr: 490 pc: 489 sub: 48036 op: 159
    // SubProg LintCheck pc: 490 op: STARTLINE (58)

    /** symtab.e:1222						Warning(321, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 494 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 496 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 498 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25035 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 502 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 504 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25035);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25036 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25036 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25035 = NOVALUE;
    // SubProg LintCheck pc: 508 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_48041);
    ((intptr_t*)_2)[1] = _file_48041;
    RefDS(_vname_48043);
    ((intptr_t*)_2)[2] = _vname_48043;
    Ref(_25036);
    ((intptr_t*)_2)[3] = _25036;
    _25037 = MAKE_SEQ(_1);
    _25036 = NOVALUE;
    // SubProg LintCheck pc: 514 op: PROC (27)
    _49Warning(321, 16, _25037);
    _25037 = NOVALUE;
    // SubProg LintCheck pc: 519 op: NOP1 (159)
    // SubProg LintCheck pc: 520 op: ELSE (23)
    goto LE; // [520] 600
    // SubProg LintCheck pc: 522 op: NOP1 (159)
LC: // addr: 523 pc: 522 sub: 48036 op: 159
    // SubProg LintCheck pc: 523 op: STARTLINE (58)

    /** symtab.e:1226					if warn_level = 1 then*/
    // SubProg LintCheck pc: 525 op: EQUALS_IFW_I (121)
    if (_warn_level_48040 != 1)
    goto LF; // [525] 569
    // SubProg LintCheck pc: 529 op: STARTLINE (58)

    /** symtab.e:1227						if Strict_is_on then*/
    // SubProg LintCheck pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 533 op: IF (20)
    if (_5Strict_is_on_12543 == 0)
    {
        goto L10; // [533] 599
    }
    else{
    }
    // SubProg LintCheck pc: 536 op: STARTLINE (58)

    /** symtab.e:1229							Warning(231, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 538 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 540 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 542 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 544 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25039 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 550 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25039);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25040 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25040 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25039 = NOVALUE;
    // SubProg LintCheck pc: 554 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_48041);
    ((intptr_t*)_2)[1] = _file_48041;
    RefDS(_vname_48043);
    ((intptr_t*)_2)[2] = _vname_48043;
    Ref(_25040);
    ((intptr_t*)_2)[3] = _25040;
    _25041 = MAKE_SEQ(_1);
    _25040 = NOVALUE;
    // SubProg LintCheck pc: 560 op: PROC (27)
    _49Warning(231, 16, _25041);
    _25041 = NOVALUE;
    // SubProg LintCheck pc: 565 op: NOP1 (159)
    // SubProg LintCheck pc: 566 op: ELSE (23)
    goto L10; // [566] 599
    // SubProg LintCheck pc: 568 op: NOP1 (159)
LF: // addr: 569 pc: 568 sub: 48036 op: 159
    // SubProg LintCheck pc: 569 op: STARTLINE (58)

    /** symtab.e:1232						Warning(322, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 571 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 577 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25042 = (object)*(((s1_ptr)_2)->base + _5CurrentSub_12485);
    // SubProg LintCheck pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 583 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25042);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25043 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25043 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25042 = NOVALUE;
    // SubProg LintCheck pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_48041);
    ((intptr_t*)_2)[1] = _file_48041;
    RefDS(_vname_48043);
    ((intptr_t*)_2)[2] = _vname_48043;
    Ref(_25043);
    ((intptr_t*)_2)[3] = _25043;
    _25044 = MAKE_SEQ(_1);
    _25043 = NOVALUE;
    // SubProg LintCheck pc: 593 op: PROC (27)
    _49Warning(322, 16, _25044);
    _25044 = NOVALUE;
    // SubProg LintCheck pc: 598 op: NOP1 (159)
L10: // addr: 599 pc: 598 sub: 48036 op: 159
    // SubProg LintCheck pc: 599 op: NOP1 (159)
LE: // addr: 600 pc: 599 sub: 48036 op: 159
    // SubProg LintCheck pc: 600 op: NOP1 (159)
L9: // addr: 601 pc: 600 sub: 48036 op: 159
    // SubProg LintCheck pc: 601 op: NOP1 (159)
L7: // addr: 602 pc: 601 sub: 48036 op: 159
    // SubProg LintCheck pc: 602 op: STARTLINE (58)

    /** symtab.e:1238	end procedure*/
    // SubProg LintCheck pc: 604 op: RETURNP (29)

// Exiting block BLOCK: LintCheck

// block var s_48039

// block var warn_level_48040

// block var file_48041
    DeRef(_file_48041);

// block var vscope_48042

// block var vname_48043
    DeRef(_vname_48043);

// block var vusage_48044
    return;
    // SubProg LintCheck pc: 607 op: BADRETURNF (43)
    ;
}


void _53HideLocals()
{
    object _s_48210 = NOVALUE;
// skipping _25058  name type: 0
    object _25057 = NOVALUE; // 48243 25057
// skipping _25056  name type: 0
    object _25055 = NOVALUE; // 48239 25055
    object _25054 = NOVALUE; // 48237 25054
    object _25053 = NOVALUE; // 48232 25053
    object _25052 = NOVALUE; // 48231 25052
    object _25051 = NOVALUE; // 48227 25051
    object _25050 = NOVALUE; // 48225 25050
    object _25049 = NOVALUE; // 48223 25049
    object _25048 = NOVALUE; // 48221 25048
    object _25047 = NOVALUE; // 48220 25047
    object _25046 = NOVALUE; // 48218 25046
    object _25045 = NOVALUE; // 48216 25045
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg HideLocals pc: 1 op: STARTLINE (58)

    /** symtab.e:1244		mark_rechecks()*/
    // SubProg HideLocals pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 5 op: PROC (27)
    _53mark_rechecks(_5current_file_no_12477);
    // SubProg HideLocals pc: 8 op: STARTLINE (58)

    /** symtab.e:1245		s = file_start_sym*/
    // SubProg HideLocals pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 12 op: ASSIGN (18)
    _s_48210 = _5file_start_sym_12483;
    // SubProg HideLocals pc: 15 op: INTEGER_CHECK (96)
    // SubProg HideLocals pc: 17 op: STARTLINE (58)

    /** symtab.e:1246		while s do*/
    // SubProg HideLocals pc: 19 op: NOP2 (110)
    // SubProg HideLocals pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 48207 op: 158
    // SubProg HideLocals pc: 22 op: WHILE (47)
    if (_s_48210 == 0)
    {
        goto L2; // [22] 148
    }
    else{
    }
    // SubProg HideLocals pc: 25 op: STARTLINE (58)

    /** symtab.e:1247			if SymTab[s][S_SCOPE] = SC_LOCAL and*/
    // SubProg HideLocals pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25045 = (object)*(((s1_ptr)_2)->base + _s_48210);
    // SubProg HideLocals pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25045);
    _25046 = (object)*(((s1_ptr)_2)->base + 4);
    _25045 = NOVALUE;
    // SubProg HideLocals pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_25046)) {
        _25047 = (_25046 == 5);
    }
    else {
        _25047 = binary_op(EQUALS, _25046, 5);
    }
    _25046 = NOVALUE;
    // SubProg HideLocals pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_25047)) {
        if (_25047 == 0) {
            goto L3; // [45] 127
        }
    }
    else {
        if (DBL_PTR(_25047)->dbl == 0.0) {
            goto L3; // [45] 127
        }
    }
    // SubProg HideLocals pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25049 = (object)*(((s1_ptr)_2)->base + _s_48210);
    // SubProg HideLocals pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25049);
    if (!IS_ATOM_INT(_5S_FILE_NO_12128)){
        _25050 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_FILE_NO_12128)->dbl));
    }
    else{
        _25050 = (object)*(((s1_ptr)_2)->base + _5S_FILE_NO_12128);
    }
    _25049 = NOVALUE;
    // SubProg HideLocals pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 63 op: EQUALS (3)
    if (IS_ATOM_INT(_25050)) {
        _25051 = (_25050 == _5current_file_no_12477);
    }
    else {
        _25051 = binary_op(EQUALS, _25050, _5current_file_no_12477);
    }
    _25050 = NOVALUE;
    // SubProg HideLocals pc: 67 op: NOP1 (159)
    // SubProg HideLocals pc: 68 op: IF (20)
    if (_25051 == 0) {
        DeRef(_25051);
        _25051 = NOVALUE;
        goto L3; // [68] 127
    }
    else {
        if (!IS_ATOM_INT(_25051) && DBL_PTR(_25051)->dbl == 0.0){
            DeRef(_25051);
            _25051 = NOVALUE;
            goto L3; // [68] 127
        }
        DeRef(_25051);
        _25051 = NOVALUE;
    }
    DeRef(_25051);
    _25051 = NOVALUE;
    // SubProg HideLocals pc: 71 op: STARTLINE (58)

    /** symtab.e:1249			   	if current_block = top_level_block and repl then*/
    // SubProg HideLocals pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 77 op: EQUALS (3)
    _25052 = (_64current_block_24772 == _64top_level_block_24773);
    // SubProg HideLocals pc: 81 op: SC1_AND_IF (146)
    if (_25052 == 0) {
        goto L4; // [81] 94
    }
    // SubProg HideLocals pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 87 op: NOP1 (159)
    // SubProg HideLocals pc: 88 op: IF (20)
    goto L4; // [88] 94
    // SubProg HideLocals pc: 91 op: ELSE (23)
    goto L5; // [91] 100
    // SubProg HideLocals pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 48207 op: 159
    // SubProg HideLocals pc: 94 op: STARTLINE (58)

    /** symtab.e:1251				Hide(s)*/
    // SubProg HideLocals pc: 96 op: PROC (27)
    _53Hide(_s_48210);
    // SubProg HideLocals pc: 99 op: NOP1 (159)
L5: // addr: 100 pc: 99 sub: 48207 op: 159
    // SubProg HideLocals pc: 100 op: STARTLINE (58)

    /** symtab.e:1253				if SymTab[s][S_TOKEN] = VARIABLE then*/
    // SubProg HideLocals pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25054 = (object)*(((s1_ptr)_2)->base + _s_48210);
    // SubProg HideLocals pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 110 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25054);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _25055 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _25055 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _25054 = NOVALUE;
    // SubProg HideLocals pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 116 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _25055, -100)){
        _25055 = NOVALUE;
        goto L6; // [116] 126
    }
    _25055 = NOVALUE;
    // SubProg HideLocals pc: 120 op: STARTLINE (58)

    /** symtab.e:1254					LintCheck(s)*/
    // SubProg HideLocals pc: 122 op: PROC (27)
    _53LintCheck(_s_48210);
    // SubProg HideLocals pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 48207 op: 159
    // SubProg HideLocals pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 48207 op: 159
    // SubProg HideLocals pc: 127 op: STARTLINE (58)

    /** symtab.e:1257			s = SymTab[s][S_NEXT]*/
    // SubProg HideLocals pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25057 = (object)*(((s1_ptr)_2)->base + _s_48210);
    // SubProg HideLocals pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 137 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25057);
    _s_48210 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_48210)){
        _s_48210 = (object)DBL_PTR(_s_48210)->dbl;
    }
    _25057 = NOVALUE;
    // SubProg HideLocals pc: 143 op: STARTLINE (58)

    /** symtab.e:1258		end while*/
    // SubProg HideLocals pc: 145 op: ENDWHILE (22)
    goto L1; // [145] 22
    // SubProg HideLocals pc: 147 op: NOP1 (159)
L2: // addr: 148 pc: 147 sub: 48207 op: 159
    // SubProg HideLocals pc: 148 op: STARTLINE (58)

    /** symtab.e:1259	end procedure*/
    // SubProg HideLocals pc: 150 op: RETURNP (29)

// Exiting block BLOCK: HideLocals

// block var s_48210
    DeRef(_25047);
    _25047 = NOVALUE;
    DeRef(_25052);
    _25052 = NOVALUE;
    return;
    // SubProg HideLocals pc: 153 op: BADRETURNF (43)
    ;
}


object _53sym_name(object _sym_48249)
{
    object _25060 = NOVALUE; // 48253 25060
    object _25059 = NOVALUE; // 48251 25059
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48249)) {
        _1 = (object)(DBL_PTR(_sym_48249)->dbl);
        DeRefDS(_sym_48249);
        _sym_48249 = _1;
    }
    // SubProg sym_name pc: 3 op: STARTLINE (58)

    /** symtab.e:1262		return SymTab[sym][S_NAME]*/
    // SubProg sym_name pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25059 = (object)*(((s1_ptr)_2)->base + _sym_48249);
    // SubProg sym_name pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25059);
    if (!IS_ATOM_INT(_5S_NAME_12132)){
        _25060 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NAME_12132)->dbl));
    }
    else{
        _25060 = (object)*(((s1_ptr)_2)->base + _5S_NAME_12132);
    }
    _25059 = NOVALUE;
    // SubProg sym_name pc: 17 op: RETURNF (28)
    Ref(_25060);

// Exiting block BLOCK: sym_name

// block var sym_48249
    return _25060;
    // SubProg sym_name pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_token(object _sym_48257)
{
    object _25062 = NOVALUE; // 48261 25062
    object _25061 = NOVALUE; // 48259 25061
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_token pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48257)) {
        _1 = (object)(DBL_PTR(_sym_48257)->dbl);
        DeRefDS(_sym_48257);
        _sym_48257 = _1;
    }
    // SubProg sym_token pc: 3 op: STARTLINE (58)

    /** symtab.e:1266		return SymTab[sym][S_TOKEN]*/
    // SubProg sym_token pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25061 = (object)*(((s1_ptr)_2)->base + _sym_48257);
    // SubProg sym_token pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25061);
    if (!IS_ATOM_INT(_5S_TOKEN_12137)){
        _25062 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_TOKEN_12137)->dbl));
    }
    else{
        _25062 = (object)*(((s1_ptr)_2)->base + _5S_TOKEN_12137);
    }
    _25061 = NOVALUE;
    // SubProg sym_token pc: 17 op: RETURNF (28)
    Ref(_25062);

// Exiting block BLOCK: sym_token

// block var sym_48257
    return _25062;
    // SubProg sym_token pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_scope(object _sym_48265)
{
    object _25064 = NOVALUE; // 48269 25064
    object _25063 = NOVALUE; // 48267 25063
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_scope pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48265)) {
        _1 = (object)(DBL_PTR(_sym_48265)->dbl);
        DeRefDS(_sym_48265);
        _sym_48265 = _1;
    }
    // SubProg sym_scope pc: 3 op: STARTLINE (58)

    /** symtab.e:1270		return SymTab[sym][S_SCOPE]*/
    // SubProg sym_scope pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25063 = (object)*(((s1_ptr)_2)->base + _sym_48265);
    // SubProg sym_scope pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25063);
    _25064 = (object)*(((s1_ptr)_2)->base + 4);
    _25063 = NOVALUE;
    // SubProg sym_scope pc: 17 op: RETURNF (28)
    Ref(_25064);

// Exiting block BLOCK: sym_scope

// block var sym_48265
    return _25064;
    // SubProg sym_scope pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_mode(object _sym_48273)
{
    object _25066 = NOVALUE; // 48277 25066
    object _25065 = NOVALUE; // 48275 25065
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_mode pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48273)) {
        _1 = (object)(DBL_PTR(_sym_48273)->dbl);
        DeRefDS(_sym_48273);
        _sym_48273 = _1;
    }
    // SubProg sym_mode pc: 3 op: STARTLINE (58)

    /** symtab.e:1274		return SymTab[sym][S_MODE]*/
    // SubProg sym_mode pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25065 = (object)*(((s1_ptr)_2)->base + _sym_48273);
    // SubProg sym_mode pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25065);
    _25066 = (object)*(((s1_ptr)_2)->base + 3);
    _25065 = NOVALUE;
    // SubProg sym_mode pc: 17 op: RETURNF (28)
    Ref(_25066);

// Exiting block BLOCK: sym_mode

// block var sym_48273
    return _25066;
    // SubProg sym_mode pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_obj(object _sym_48281)
{
    object _25068 = NOVALUE; // 48285 25068
    object _25067 = NOVALUE; // 48283 25067
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_obj pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48281)) {
        _1 = (object)(DBL_PTR(_sym_48281)->dbl);
        DeRefDS(_sym_48281);
        _sym_48281 = _1;
    }
    // SubProg sym_obj pc: 3 op: STARTLINE (58)

    /** symtab.e:1278		return SymTab[sym][S_OBJ]*/
    // SubProg sym_obj pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25067 = (object)*(((s1_ptr)_2)->base + _sym_48281);
    // SubProg sym_obj pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25067);
    _25068 = (object)*(((s1_ptr)_2)->base + 1);
    _25067 = NOVALUE;
    // SubProg sym_obj pc: 17 op: RETURNF (28)
    Ref(_25068);

// Exiting block BLOCK: sym_obj

// block var sym_48281
    return _25068;
    // SubProg sym_obj pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_next(object _sym_48289)
{
    object _25070 = NOVALUE; // 48293 25070
    object _25069 = NOVALUE; // 48291 25069
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next pc: 3 op: STARTLINE (58)

    /** symtab.e:1282		return SymTab[sym][S_NEXT]*/
    // SubProg sym_next pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25069 = (object)*(((s1_ptr)_2)->base + _sym_48289);
    // SubProg sym_next pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25069);
    _25070 = (object)*(((s1_ptr)_2)->base + 2);
    _25069 = NOVALUE;
    // SubProg sym_next pc: 17 op: RETURNF (28)
    Ref(_25070);

// Exiting block BLOCK: sym_next

// block var sym_48289
    return _25070;
    // SubProg sym_next pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_block(object _sym_48297)
{
    object _25072 = NOVALUE; // 48301 25072
    object _25071 = NOVALUE; // 48299 25071
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1286		return SymTab[sym][S_BLOCK]*/
    // SubProg sym_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25071 = (object)*(((s1_ptr)_2)->base + _sym_48297);
    // SubProg sym_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25071);
    if (!IS_ATOM_INT(_5S_BLOCK_12152)){
        _25072 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_BLOCK_12152)->dbl));
    }
    else{
        _25072 = (object)*(((s1_ptr)_2)->base + _5S_BLOCK_12152);
    }
    _25071 = NOVALUE;
    // SubProg sym_block pc: 17 op: RETURNF (28)
    Ref(_25072);

// Exiting block BLOCK: sym_block

// block var sym_48297
    return _25072;
    // SubProg sym_block pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_next_in_block(object _sym_48305)
{
    object _25074 = NOVALUE; // 48309 25074
    object _25073 = NOVALUE; // 48307 25073
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next_in_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next_in_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1290		return SymTab[sym][S_NEXT_IN_BLOCK]*/
    // SubProg sym_next_in_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25073 = (object)*(((s1_ptr)_2)->base + _sym_48305);
    // SubProg sym_next_in_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25073);
    if (!IS_ATOM_INT(_5S_NEXT_IN_BLOCK_12124)){
        _25074 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_5S_NEXT_IN_BLOCK_12124)->dbl));
    }
    else{
        _25074 = (object)*(((s1_ptr)_2)->base + _5S_NEXT_IN_BLOCK_12124);
    }
    _25073 = NOVALUE;
    // SubProg sym_next_in_block pc: 17 op: RETURNF (28)
    Ref(_25074);

// Exiting block BLOCK: sym_next_in_block

// block var sym_48305
    return _25074;
    // SubProg sym_next_in_block pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_usage(object _sym_48313)
{
    object _25076 = NOVALUE; // 48317 25076
    object _25075 = NOVALUE; // 48315 25075
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_usage pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_usage pc: 3 op: STARTLINE (58)

    /** symtab.e:1294		return SymTab[sym][S_USAGE]*/
    // SubProg sym_usage pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7SymTab_11389);
    _25075 = (object)*(((s1_ptr)_2)->base + _sym_48313);
    // SubProg sym_usage pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25075);
    _25076 = (object)*(((s1_ptr)_2)->base + 5);
    _25075 = NOVALUE;
    // SubProg sym_usage pc: 17 op: RETURNF (28)
    Ref(_25076);

// Exiting block BLOCK: sym_usage

// block var sym_48313
    return _25076;
    // SubProg sym_usage pc: 21 op: BADRETURNF (43)
    ;
}



// 0xE8EFC980
