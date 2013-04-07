// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _53hashfn(object _name_46272)
{
    object _len_46273 = NOVALUE;
    object _val_46274 = NOVALUE;
    object _int_46275 = NOVALUE;
    object _24236 = NOVALUE; // 46300 24236
    object _24235 = NOVALUE; // 46299 24235
// skipping _24234  name type: 0
// skipping _24233  name type: 0
    object _24232 = NOVALUE; // 46296 24232
    object _24231 = NOVALUE; // 46295 24231
// skipping _24230  name type: 0
// skipping _24229  name type: 0
// skipping _24228  name type: 0
// skipping _24227  name type: 0
// skipping _24226  name type: 0
// skipping _24225  name type: 0
// skipping _24224  name type: 0
// skipping _24223  name type: 0
// skipping _24222  name type: 0
// skipping _24221  name type: 0
    object _24220 = NOVALUE; // 46282 24220
// skipping _24219  name type: 0
// skipping _24218  name type: 0
// skipping _24217  name type: 0
    object _24216 = NOVALUE; // 46278 24216
// skipping _24215  name type: 0
// skipping _24214  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hashfn pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg hashfn pc: 3 op: STARTLINE (58)

    /** symtab.e:49		len = length(name)*/
    // SubProg hashfn pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46272)){
            _len_46273 = SEQ_PTR(_name_46272)->length;
    }
    else {
        _len_46273 = 1;
    }
    // SubProg hashfn pc: 8 op: STARTLINE (58)

    /** symtab.e:51		val = name[1]*/
    // SubProg hashfn pc: 10 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46272);
    _val_46274 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_val_46274))
    _val_46274 = (object)DBL_PTR(_val_46274)->dbl;
    // SubProg hashfn pc: 14 op: STARTLINE (58)

    /** symtab.e:52		int = name[$]*/
    // SubProg hashfn pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46272)){
            _24216 = SEQ_PTR(_name_46272)->length;
    }
    else {
        _24216 = 1;
    }
    // SubProg hashfn pc: 19 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46272);
    _int_46275 = (object)*(((s1_ptr)_2)->base + _24216);
    if (!IS_ATOM_INT(_int_46275))
    _int_46275 = (object)DBL_PTR(_int_46275)->dbl;
    // SubProg hashfn pc: 23 op: STARTLINE (58)

    /** symtab.e:53		int *= 256*/
    // SubProg hashfn pc: 25 op: MULTIPLY (13)
    _int_46275 = _int_46275 * 256;
    // SubProg hashfn pc: 31 op: STARTLINE (58)

    /** symtab.e:54		val *= 2*/
    // SubProg hashfn pc: 33 op: PLUS_I (115)
    _val_46274 = _val_46274 + _val_46274;
    // SubProg hashfn pc: 37 op: STARTLINE (58)

    /** symtab.e:55		val += int + len*/
    // SubProg hashfn pc: 39 op: PLUS (11)
    _24220 = _int_46275 + _len_46273;
    if ((object)((uintptr_t)_24220 + (uintptr_t)HIGH_BITS) >= 0){
        _24220 = NewDouble((eudouble)_24220);
    }
    // SubProg hashfn pc: 43 op: PLUS (11)
    if (IS_ATOM_INT(_24220)) {
        _val_46274 = _val_46274 + _24220;
    }
    else {
        _val_46274 = NewDouble((eudouble)_val_46274 + DBL_PTR(_24220)->dbl);
    }
    DeRef(_24220);
    _24220 = NOVALUE;
    // SubProg hashfn pc: 47 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_46274)) {
        _1 = (object)(DBL_PTR(_val_46274)->dbl);
        DeRefDS(_val_46274);
        _val_46274 = _1;
    }
    // SubProg hashfn pc: 49 op: STARTLINE (58)

    /** symtab.e:57		if len = 3 then*/
    // SubProg hashfn pc: 51 op: EQUALS_IFW_I (121)
    if (_len_46273 != 3)
    goto L1; // [51] 78
    // SubProg hashfn pc: 55 op: STARTLINE (58)

    /** symtab.e:58			val *= 32*/
    // SubProg hashfn pc: 57 op: MULTIPLY (13)
    _val_46274 = _val_46274 * 32;
    // SubProg hashfn pc: 63 op: STARTLINE (58)

    /** symtab.e:59			int = name[2]*/
    // SubProg hashfn pc: 65 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46272);
    _int_46275 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46275))
    _int_46275 = (object)DBL_PTR(_int_46275)->dbl;
    // SubProg hashfn pc: 69 op: STARTLINE (58)

    /** symtab.e:60			val += int*/
    // SubProg hashfn pc: 71 op: PLUS_I (115)
    _val_46274 = _val_46274 + _int_46275;
    // SubProg hashfn pc: 75 op: ELSE (23)
    goto L2; // [75] 133
    // SubProg hashfn pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 46270 op: 159
    // SubProg hashfn pc: 78 op: STARTLINE (58)

    /** symtab.e:61		elsif len > 3 then*/
    // SubProg hashfn pc: 80 op: GREATER_IFW_I (124)
    if (_len_46273 <= 3)
    goto L3; // [80] 132
    // SubProg hashfn pc: 84 op: STARTLINE (58)

    /** symtab.e:62			val *= 32*/
    // SubProg hashfn pc: 86 op: MULTIPLY (13)
    _val_46274 = _val_46274 * 32;
    // SubProg hashfn pc: 92 op: STARTLINE (58)

    /** symtab.e:63			int = name[2]*/
    // SubProg hashfn pc: 94 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46272);
    _int_46275 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46275))
    _int_46275 = (object)DBL_PTR(_int_46275)->dbl;
    // SubProg hashfn pc: 98 op: STARTLINE (58)

    /** symtab.e:64			val += int*/
    // SubProg hashfn pc: 100 op: PLUS_I (115)
    _val_46274 = _val_46274 + _int_46275;
    // SubProg hashfn pc: 104 op: STARTLINE (58)

    /** symtab.e:66			val *= 32*/
    // SubProg hashfn pc: 106 op: MULTIPLY (13)
    _val_46274 = _val_46274 * 32;
    // SubProg hashfn pc: 112 op: STARTLINE (58)

    /** symtab.e:67			int = name[$-1]*/
    // SubProg hashfn pc: 114 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46272)){
            _24231 = SEQ_PTR(_name_46272)->length;
    }
    else {
        _24231 = 1;
    }
    // SubProg hashfn pc: 117 op: MINUS (10)
    _24232 = _24231 - 1;
    _24231 = NOVALUE;
    // SubProg hashfn pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46272);
    _int_46275 = (object)*(((s1_ptr)_2)->base + _24232);
    if (!IS_ATOM_INT(_int_46275))
    _int_46275 = (object)DBL_PTR(_int_46275)->dbl;
    // SubProg hashfn pc: 125 op: STARTLINE (58)

    /** symtab.e:68			val += int*/
    // SubProg hashfn pc: 127 op: PLUS_I (115)
    _val_46274 = _val_46274 + _int_46275;
    // SubProg hashfn pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 46270 op: 159
    // SubProg hashfn pc: 132 op: NOP1 (159)
L2: // addr: 133 pc: 132 sub: 46270 op: 159
    // SubProg hashfn pc: 133 op: STARTLINE (58)

    /** symtab.e:70		return remainder(val, NBUCKETS) + 1*/
    // SubProg hashfn pc: 135 op: REMAINDER (71)
    _24235 = (_val_46274 % 2003);
    // SubProg hashfn pc: 139 op: PLUS1 (93)
    _24236 = _24235 + 1;
    _24235 = NOVALUE;
    // SubProg hashfn pc: 143 op: RETURNF (28)

// Exiting block BLOCK: hashfn

// block var name_46272
    DeRefDS(_name_46272);

// block var len_46273

// block var val_46274

// block var int_46275
    DeRef(_24232);
    _24232 = NOVALUE;
    return _24236;
    // SubProg hashfn pc: 147 op: BADRETURNF (43)
    ;
}


void _53remove_symbol(object _sym_46304)
{
    object _hash_46305 = NOVALUE;
    object _st_ptr_46306 = NOVALUE;
    object _24251 = NOVALUE; // 46335 24251
    object _24250 = NOVALUE; // 46333 24250
// skipping _24249  name type: 0
    object _24248 = NOVALUE; // 46329 24248
    object _24247 = NOVALUE; // 46326 24247
    object _24246 = NOVALUE; // 46324 24246
// skipping _24245  name type: 0
    object _24244 = NOVALUE; // 46321 24244
// skipping _24243  name type: 0
    object _24242 = NOVALUE; // 46316 24242
    object _24241 = NOVALUE; // 46314 24241
    object _24240 = NOVALUE; // 46313 24240
// skipping _24239  name type: 0
// skipping _24238  name type: 0
    object _24237 = NOVALUE; // 46308 24237
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg remove_symbol pc: 3 op: STARTLINE (58)

    /** symtab.e:79		hash = SymTab[sym][S_HASHVAL]*/
    // SubProg remove_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24237 = (object)*(((s1_ptr)_2)->base + _sym_46304);
    // SubProg remove_symbol pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24237);
    _hash_46305 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hash_46305)){
        _hash_46305 = (object)DBL_PTR(_hash_46305)->dbl;
    }
    _24237 = NOVALUE;
    // SubProg remove_symbol pc: 19 op: STARTLINE (58)

    /** symtab.e:80		st_ptr = buckets[hash]*/
    // SubProg remove_symbol pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _st_ptr_46306 = (object)*(((s1_ptr)_2)->base + _hash_46305);
    if (!IS_ATOM_INT(_st_ptr_46306))
    _st_ptr_46306 = (object)DBL_PTR(_st_ptr_46306)->dbl;
    // SubProg remove_symbol pc: 27 op: STARTLINE (58)

    /** symtab.e:82		while st_ptr and st_ptr != sym do*/
    // SubProg remove_symbol pc: 29 op: NOP2 (110)
    // SubProg remove_symbol pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 46301 op: 158
    // SubProg remove_symbol pc: 32 op: SC1_AND_IF (146)
    if (_st_ptr_46306 == 0) {
        goto L2; // [32] 65
    }
    // SubProg remove_symbol pc: 36 op: NOTEQ (4)
    _24241 = (_st_ptr_46306 != _sym_46304);
    // SubProg remove_symbol pc: 40 op: NOP1 (159)
    // SubProg remove_symbol pc: 41 op: WHILE (47)
    if (_24241 == 0)
    {
        DeRef(_24241);
        _24241 = NOVALUE;
        goto L2; // [41] 65
    }
    else{
        DeRef(_24241);
        _24241 = NOVALUE;
    }
    // SubProg remove_symbol pc: 44 op: STARTLINE (58)

    /** symtab.e:83			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24242 = (object)*(((s1_ptr)_2)->base + _st_ptr_46306);
    // SubProg remove_symbol pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24242);
    _st_ptr_46306 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_46306)){
        _st_ptr_46306 = (object)DBL_PTR(_st_ptr_46306)->dbl;
    }
    _24242 = NOVALUE;
    // SubProg remove_symbol pc: 60 op: STARTLINE (58)

    /** symtab.e:84		end while*/
    // SubProg remove_symbol pc: 62 op: ENDWHILE (22)
    goto L1; // [62] 32
    // SubProg remove_symbol pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 46301 op: 159
    // SubProg remove_symbol pc: 65 op: STARTLINE (58)

    /** symtab.e:86		if st_ptr then*/
    // SubProg remove_symbol pc: 67 op: IF (20)
    if (_st_ptr_46306 == 0)
    {
        goto L3; // [67] 134
    }
    else{
    }
    // SubProg remove_symbol pc: 70 op: STARTLINE (58)

    /** symtab.e:87			if st_ptr = buckets[hash] then*/
    // SubProg remove_symbol pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _24244 = (object)*(((s1_ptr)_2)->base + _hash_46305);
    // SubProg remove_symbol pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _st_ptr_46306, _24244)){
        _24244 = NOVALUE;
        goto L4; // [78] 105
    }
    _24244 = NOVALUE;
    // SubProg remove_symbol pc: 82 op: STARTLINE (58)

    /** symtab.e:89				buckets[hash] = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 88 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24246 = (object)*(((s1_ptr)_2)->base + _st_ptr_46306);
    // SubProg remove_symbol pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24246);
    _24247 = (object)*(((s1_ptr)_2)->base + 9);
    _24246 = NOVALUE;
    // SubProg remove_symbol pc: 98 op: ASSIGN_SUBS (16)
    Ref(_24247);
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _2 = (object)(((s1_ptr)_2)->base + _hash_46305);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24247;
    if( _1 != _24247 ){
        DeRef(_1);
    }
    _24247 = NOVALUE;
    // SubProg remove_symbol pc: 102 op: ELSE (23)
    goto L5; // [102] 133
    // SubProg remove_symbol pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 46301 op: 159
    // SubProg remove_symbol pc: 105 op: STARTLINE (58)

    /** symtab.e:92				SymTab[st_ptr][S_SAMEHASH] = SymTab[sym][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_st_ptr_46306 + ((s1_ptr)_2)->base);
    // SubProg remove_symbol pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24250 = (object)*(((s1_ptr)_2)->base + _sym_46304);
    // SubProg remove_symbol pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 124 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24250);
    _24251 = (object)*(((s1_ptr)_2)->base + 9);
    _24250 = NOVALUE;
    // SubProg remove_symbol pc: 128 op: PASSIGN_SUBS (162)
    Ref(_24251);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24251;
    if( _1 != _24251 ){
        DeRef(_1);
    }
    _24251 = NOVALUE;
    _24248 = NOVALUE;
    // SubProg remove_symbol pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46301 op: 159
    // SubProg remove_symbol pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 46301 op: 159
    // SubProg remove_symbol pc: 134 op: STARTLINE (58)

    /** symtab.e:95	end procedure*/
    // SubProg remove_symbol pc: 136 op: RETURNP (29)

// Exiting block BLOCK: remove_symbol

// block var sym_46304

// block var hash_46305

// block var st_ptr_46306
    return;
    // SubProg remove_symbol pc: 139 op: BADRETURNF (43)
    ;
}


object _53NewBasicEntry(object _name_46338, object _varnum_46339, object _scope_46340, object _token_46341, object _hashval_46342, object _samehash_46344, object _type_sym_46346)
{
    object _new_46347 = NOVALUE;
    object _24260 = NOVALUE; // 46423 24260
// skipping _24259  name type: 0
    object _24258 = NOVALUE; // 46410 24258
    object _24257 = NOVALUE; // 46405 24257
    object _24256 = NOVALUE; // 46396 24256
    object _24255 = NOVALUE; // 46391 24255
    object _24254 = NOVALUE; // 46386 24254
// skipping _24253  name type: 0
// skipping _24252  name type: 0
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
    if (_34TRANSLATE_14813 == 0)
    {
        goto L1; // [19] 33
    }
    else{
    }
    // SubProg NewBasicEntry pc: 22 op: STARTLINE (58)

    /** symtab.e:106			new = repeat(0, SIZEOF_ROUTINE_ENTRY)*/
    // SubProg NewBasicEntry pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 26 op: REPEAT (32)
    DeRef(_new_46347);
    _new_46347 = Repeat(0, _34SIZEOF_ROUTINE_ENTRY_14970);
    // SubProg NewBasicEntry pc: 30 op: ELSE (23)
    goto L2; // [30] 42
    // SubProg NewBasicEntry pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 46336 op: 159
    // SubProg NewBasicEntry pc: 33 op: STARTLINE (58)

    /** symtab.e:108			new = repeat(0, SIZEOF_VAR_ENTRY)*/
    // SubProg NewBasicEntry pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 37 op: REPEAT (32)
    DeRef(_new_46347);
    _new_46347 = Repeat(0, _34SIZEOF_VAR_ENTRY_14973);
    // SubProg NewBasicEntry pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 46336 op: 159
    // SubProg NewBasicEntry pc: 42 op: STARTLINE (58)

    /** symtab.e:111		new[S_NEXT] = 0*/
    // SubProg NewBasicEntry pc: 44 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewBasicEntry pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 48 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 52 op: STARTLINE (58)

    /** symtab.e:112		new[S_NAME] = name*/
    // SubProg NewBasicEntry pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 56 op: ASSIGN_SUBS (16)
    RefDS(_name_46338);
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_NAME_14843))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_NAME_14843);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _name_46338;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 60 op: STARTLINE (58)

    /** symtab.e:113		new[S_SCOPE] = scope*/
    // SubProg NewBasicEntry pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 64 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_46340;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 68 op: STARTLINE (58)

    /** symtab.e:114		new[S_MODE] = M_NORMAL*/
    // SubProg NewBasicEntry pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 74 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_FILE_NO_14839))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34current_file_no_15188;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 98 op: STARTLINE (58)

    /** symtab.e:118		if TRANSLATE then*/
    // SubProg NewBasicEntry pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 102 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34NOVALUE_15043;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 195 op: STARTLINE (58)

    /** symtab.e:132			new[S_ARG_MIN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 201 op: UMINUS (12)
    if (IS_ATOM_INT(_34NOVALUE_15043)) {
        if ((uintptr_t)_34NOVALUE_15043 == (uintptr_t)HIGH_BITS){
            _24254 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24254 = - _34NOVALUE_15043;
        }
    }
    else {
        _24254 = unary_op(UMINUS, _34NOVALUE_15043);
    }
    // SubProg NewBasicEntry pc: 204 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24254;
    if( _1 != _24254 ){
        DeRef(_1);
    }
    _24254 = NOVALUE;
    // SubProg NewBasicEntry pc: 208 op: STARTLINE (58)

    /** symtab.e:134			new[S_ARG_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 214 op: ASSIGN_SUBS (16)
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34NOVALUE_15043;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 218 op: STARTLINE (58)

    /** symtab.e:135			new[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 224 op: UMINUS (12)
    if (IS_ATOM_INT(_34NOVALUE_15043)) {
        if ((uintptr_t)_34NOVALUE_15043 == (uintptr_t)HIGH_BITS){
            _24255 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24255 = - _34NOVALUE_15043;
        }
    }
    else {
        _24255 = unary_op(UMINUS, _34NOVALUE_15043);
    }
    // SubProg NewBasicEntry pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24255;
    if( _1 != _24255 ){
        DeRef(_1);
    }
    _24255 = NOVALUE;
    // SubProg NewBasicEntry pc: 231 op: STARTLINE (58)

    /** symtab.e:137			new[S_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 237 op: ASSIGN_SUBS (16)
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34NOVALUE_15043;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 241 op: STARTLINE (58)

    /** symtab.e:138			new[S_SEQ_LEN_NEW] = -NOVALUE -- no idea yet*/
    // SubProg NewBasicEntry pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 245 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 247 op: UMINUS (12)
    if (IS_ATOM_INT(_34NOVALUE_15043)) {
        if ((uintptr_t)_34NOVALUE_15043 == (uintptr_t)HIGH_BITS){
            _24256 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24256 = - _34NOVALUE_15043;
        }
    }
    else {
        _24256 = unary_op(UMINUS, _34NOVALUE_15043);
    }
    // SubProg NewBasicEntry pc: 250 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24256;
    if( _1 != _24256 ){
        DeRef(_1);
    }
    _24256 = NOVALUE;
    // SubProg NewBasicEntry pc: 254 op: STARTLINE (58)

    /** symtab.e:140			new[S_NREFS] = 0*/
    // SubProg NewBasicEntry pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 35);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _8TRUE_444;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 272 op: STARTLINE (58)

    /** symtab.e:142			new[S_RI_TARGET] = 0*/
    // SubProg NewBasicEntry pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 276 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    if (IS_ATOM_INT(_34NOVALUE_15043)) {
        if ((uintptr_t)_34NOVALUE_15043 == (uintptr_t)HIGH_BITS){
            _24257 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24257 = - _34NOVALUE_15043;
        }
    }
    else {
        _24257 = unary_op(UMINUS, _34NOVALUE_15043);
    }
    // SubProg NewBasicEntry pc: 299 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24257;
    if( _1 != _24257 ){
        DeRef(_1);
    }
    _24257 = NOVALUE;
    // SubProg NewBasicEntry pc: 303 op: STARTLINE (58)

    /** symtab.e:147			new[S_OBJ_MAX] = MAXINT*/
    // SubProg NewBasicEntry pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 309 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
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
    if (IS_ATOM_INT(_34NOVALUE_15043)) {
        if ((uintptr_t)_34NOVALUE_15043 == (uintptr_t)HIGH_BITS){
            _24258 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24258 = - _34NOVALUE_15043;
        }
    }
    else {
        _24258 = unary_op(UMINUS, _34NOVALUE_15043);
    }
    // SubProg NewBasicEntry pc: 322 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24258;
    if( _1 != _24258 ){
        DeRef(_1);
    }
    _24258 = NOVALUE;
    // SubProg NewBasicEntry pc: 326 op: NOP1 (159)
L3: // addr: 327 pc: 326 sub: 46336 op: 159
    // SubProg NewBasicEntry pc: 327 op: STARTLINE (58)

    /** symtab.e:151		new[S_TOKEN] = token*/
    // SubProg NewBasicEntry pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 331 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_TOKEN_14848))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _token_46341;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 335 op: STARTLINE (58)

    /** symtab.e:152		new[S_VARNUM] = varnum*/
    // SubProg NewBasicEntry pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 339 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _varnum_46339;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 343 op: STARTLINE (58)

    /** symtab.e:153		new[S_INITLEVEL] = -1*/
    // SubProg NewBasicEntry pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 347 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 351 op: STARTLINE (58)

    /** symtab.e:154		new[S_VTYPE] = type_sym*/
    // SubProg NewBasicEntry pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 355 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_sym_46346;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 359 op: STARTLINE (58)

    /** symtab.e:156		new[S_HASHVAL] = hashval*/
    // SubProg NewBasicEntry pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 363 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_46342;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 367 op: STARTLINE (58)

    /** symtab.e:157		new[S_SAMEHASH] = samehash*/
    // SubProg NewBasicEntry pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 371 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _samehash_46344;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 375 op: STARTLINE (58)

    /** symtab.e:159		new[S_OBJ] = NOVALUE -- important*/
    // SubProg NewBasicEntry pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 381 op: ASSIGN_SUBS (16)
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(_new_46347);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46347 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34NOVALUE_15043;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 385 op: STARTLINE (58)

    /** symtab.e:162		SymTab = append(SymTab, new)*/
    // SubProg NewBasicEntry pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 389 op: APPEND (35)
    RefDS(_new_46347);
    Append(&_35SymTab_14156, _35SymTab_14156, _new_46347);
    // SubProg NewBasicEntry pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg NewBasicEntry pc: 395 op: STARTLINE (58)

    /** symtab.e:164		return length(SymTab)*/
    // SubProg NewBasicEntry pc: 397 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _24260 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _24260 = 1;
    }
    // SubProg NewBasicEntry pc: 402 op: RETURNF (28)

// Exiting block BLOCK: NewBasicEntry

// block var name_46338
    DeRefDS(_name_46338);

// block var varnum_46339

// block var scope_46340

// block var token_46341

// block var hashval_46342

// block var samehash_46344

// block var type_sym_46346

// block var new_46347
    DeRefDS(_new_46347);
    return _24260;
    // SubProg NewBasicEntry pc: 406 op: BADRETURNF (43)
    ;
}


object _53NewEntry(object _name_46426, object _varnum_46427, object _scope_46428, object _token_46429, object _hashval_46430, object _samehash_46432, object _type_sym_46434)
{
    object _new_46436 = NOVALUE;
// skipping _24264  name type: 0
// skipping _24263  name type: 0
    object _24262 = NOVALUE; // 46440 24262
// skipping _24261  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewEntry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewEntry pc: 3 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 5 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 7 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 9 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_samehash_46432)) {
        _1 = (object)(DBL_PTR(_samehash_46432)->dbl);
        DeRefDS(_samehash_46432);
        _samehash_46432 = _1;
    }
    // SubProg NewEntry pc: 13 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 15 op: STARTLINE (58)

    /** symtab.e:171		symtab_index new = NewBasicEntry( name, varnum, scope, token, hashval, samehash, type_sym )*/
    // SubProg NewEntry pc: 17 op: PROC (27)
    RefDS(_name_46426);
    _new_46436 = _53NewBasicEntry(_name_46426, _varnum_46427, _scope_46428, _token_46429, _hashval_46430, _samehash_46432, _type_sym_46434);
    // SubProg NewEntry pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_46436)) {
        _1 = (object)(DBL_PTR(_new_46436)->dbl);
        DeRefDS(_new_46436);
        _new_46436 = _1;
    }
    // SubProg NewEntry pc: 29 op: STARTLINE (58)

    /** symtab.e:174		if last_sym then*/
    // SubProg NewEntry pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 33 op: IF (20)
    if (_53last_sym_46266 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_53last_sym_46266 + ((s1_ptr)_2)->base);
    // SubProg NewEntry pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 49 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_46436;
    DeRef(_1);
    _24262 = NOVALUE;
    // SubProg NewEntry pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 46424 op: 159
    // SubProg NewEntry pc: 54 op: STARTLINE (58)

    /** symtab.e:177		last_sym = new*/
    // SubProg NewEntry pc: 56 op: ASSIGN (18)
    _53last_sym_46266 = _new_46436;
    // SubProg NewEntry pc: 59 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 61 op: STARTLINE (58)

    /** symtab.e:178		if type_sym < 0 then*/
    // SubProg NewEntry pc: 63 op: LESS_IFW (102)
    if (_type_sym_46434 >= 0)
    goto L2; // [63] 76
    // SubProg NewEntry pc: 67 op: STARTLINE (58)

    /** symtab.e:179			register_forward_type( last_sym, type_sym )*/
    // SubProg NewEntry pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 71 op: PROC (27)
    _37register_forward_type(_53last_sym_46266, _type_sym_46434);
    // SubProg NewEntry pc: 75 op: NOP1 (159)
L2: // addr: 76 pc: 75 sub: 46424 op: 159
    // SubProg NewEntry pc: 76 op: STARTLINE (58)

    /** symtab.e:181		return last_sym*/
    // SubProg NewEntry pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 80 op: RETURNF (28)

// Exiting block BLOCK: NewEntry

// block var name_46426
    DeRefDS(_name_46426);

// block var varnum_46427

// block var scope_46428

// block var token_46429

// block var hashval_46430

// block var samehash_46432

// block var type_sym_46434

// block var new_46436
    return _53last_sym_46266;
    // SubProg NewEntry pc: 84 op: BADRETURNF (43)
    ;
}


object _53tmp_alloc()
{
    object _new_entry_46451 = NOVALUE;
    object _24276 = NOVALUE; // 46489 24276
// skipping _24275  name type: 0
    object _24274 = NOVALUE; // 46484 24274
// skipping _24273  name type: 0
// skipping _24272  name type: 0
    object _24271 = NOVALUE; // 46476 24271
// skipping _24270  name type: 0
    object _24268 = NOVALUE; // 46471 24268
    object _24267 = NOVALUE; // 46470 24267
// skipping _24266  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tmp_alloc pc: 1 op: STARTLINE (58)

    /** symtab.e:188		sequence new_entry = repeat( 0, SIZEOF_TEMP_ENTRY )*/
    // SubProg tmp_alloc pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 5 op: REPEAT (32)
    DeRef(_new_entry_46451);
    _new_entry_46451 = Repeat(0, _34SIZEOF_TEMP_ENTRY_14979);
    // SubProg tmp_alloc pc: 9 op: STARTLINE (58)

    /** symtab.e:192		new_entry[S_USAGE] = T_UNKNOWN*/
    // SubProg tmp_alloc pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    *(intptr_t *)_2 = 4;
    // SubProg tmp_alloc pc: 19 op: STARTLINE (58)

    /** symtab.e:194		if TRANSLATE then*/
    // SubProg tmp_alloc pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 23 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
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
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = 16;
    // SubProg tmp_alloc pc: 36 op: STARTLINE (58)

    /** symtab.e:196			new_entry[S_OBJ_MIN] = MININT*/
    // SubProg tmp_alloc pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 42 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    *(intptr_t *)_2 = -1073741824;
    // SubProg tmp_alloc pc: 46 op: STARTLINE (58)

    /** symtab.e:197			new_entry[S_OBJ_MAX] = MAXINT*/
    // SubProg tmp_alloc pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 52 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    *(intptr_t *)_2 = 1073741823;
    // SubProg tmp_alloc pc: 56 op: STARTLINE (58)

    /** symtab.e:198			new_entry[S_SEQ_LEN] = NOVALUE*/
    // SubProg tmp_alloc pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 62 op: ASSIGN_SUBS (16)
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = _34NOVALUE_15043;
    // SubProg tmp_alloc pc: 66 op: STARTLINE (58)

    /** symtab.e:199			new_entry[S_SEQ_ELEM] = TYPE_OBJECT  -- other fields set later*/
    // SubProg tmp_alloc pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 72 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg tmp_alloc pc: 76 op: STARTLINE (58)

    /** symtab.e:200			if length(temp_name_type)+1 = 8087 then*/
    // SubProg tmp_alloc pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_34temp_name_type_15270)){
            _24267 = SEQ_PTR(_34temp_name_type_15270)->length;
    }
    else {
        _24267 = 1;
    }
    // SubProg tmp_alloc pc: 83 op: PLUS1 (93)
    _24268 = _24267 + 1;
    _24267 = NOVALUE;
    // SubProg tmp_alloc pc: 87 op: EQUALS_IFW (104)
    if (_24268 != 8087)
    goto L2; // [87] 106
    // SubProg tmp_alloc pc: 91 op: STARTLINE (58)

    /** symtab.e:202				temp_name_type = append(temp_name_type, {0, 0})*/
    // SubProg tmp_alloc pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 95 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _24271 = MAKE_SEQ(_1);
    // SubProg tmp_alloc pc: 99 op: APPEND (35)
    RefDS(_24271);
    Append(&_34temp_name_type_15270, _34temp_name_type_15270, _24271);
    DeRefDS(_24271);
    _24271 = NOVALUE;
    // SubProg tmp_alloc pc: 103 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 105 op: NOP1 (159)
L2: // addr: 106 pc: 105 sub: 46449 op: 159
    // SubProg tmp_alloc pc: 106 op: STARTLINE (58)

    /** symtab.e:204			temp_name_type = append(temp_name_type, TYPES_OBNL)*/
    // SubProg tmp_alloc pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 112 op: APPEND (35)
    RefDS(_54TYPES_OBNL_46098);
    Append(&_34temp_name_type_15270, _34temp_name_type_15270, _54TYPES_OBNL_46098);
    // SubProg tmp_alloc pc: 116 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 118 op: STARTLINE (58)

    /** symtab.e:205			new_entry[S_TEMP_NAME] = length(temp_name_type)*/
    // SubProg tmp_alloc pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_34temp_name_type_15270)){
            _24274 = SEQ_PTR(_34temp_name_type_15270)->length;
    }
    else {
        _24274 = 1;
    }
    // SubProg tmp_alloc pc: 127 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_entry_46451);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46451 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24274;
    if( _1 != _24274 ){
        DeRef(_1);
    }
    _24274 = NOVALUE;
    // SubProg tmp_alloc pc: 131 op: NOP1 (159)
L1: // addr: 132 pc: 131 sub: 46449 op: 159
    // SubProg tmp_alloc pc: 132 op: STARTLINE (58)

    /** symtab.e:208		SymTab = append(SymTab, new_entry )*/
    // SubProg tmp_alloc pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 136 op: APPEND (35)
    RefDS(_new_entry_46451);
    Append(&_35SymTab_14156, _35SymTab_14156, _new_entry_46451);
    // SubProg tmp_alloc pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 142 op: STARTLINE (58)

    /** symtab.e:210		return length( SymTab )*/
    // SubProg tmp_alloc pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_35SymTab_14156)){
            _24276 = SEQ_PTR(_35SymTab_14156)->length;
    }
    else {
        _24276 = 1;
    }
    // SubProg tmp_alloc pc: 149 op: RETURNF (28)

// Exiting block BLOCK: tmp_alloc

// block var new_entry_46451
    DeRefDS(_new_entry_46451);
    DeRef(_24268);
    _24268 = NOVALUE;
    return _24276;
    // SubProg tmp_alloc pc: 153 op: BADRETURNF (43)
    ;
}


void _53DefinedYet(object _sym_46520)
{
    object _24296 = NOVALUE; // 46544 24296
    object _24295 = NOVALUE; // 46543 24295
    object _24294 = NOVALUE; // 46541 24294
// skipping _24293  name type: 0
    object _24292 = NOVALUE; // 46536 24292
    object _24291 = NOVALUE; // 46534 24291
// skipping _24290  name type: 0
    object _24289 = NOVALUE; // 46530 24289
    object _24288 = NOVALUE; // 46529 24288
    object _24287 = NOVALUE; // 46525 24287
    object _24286 = NOVALUE; // 46523 24286
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DefinedYet pc: 1 op: INTEGER_CHECK (96)
    // SubProg DefinedYet pc: 3 op: STARTLINE (58)

    /** symtab.e:230		if not find(SymTab[sym][S_SCOPE],*/
    // SubProg DefinedYet pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24286 = (object)*(((s1_ptr)_2)->base + _sym_46520);
    // SubProg DefinedYet pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24286);
    _24287 = (object)*(((s1_ptr)_2)->base + 4);
    _24286 = NOVALUE;
    // SubProg DefinedYet pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 23 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 9;
    ((intptr_t*)_2)[2] = 10;
    ((intptr_t*)_2)[3] = 7;
    _24288 = MAKE_SEQ(_1);
    // SubProg DefinedYet pc: 29 op: FIND_FROM (176)
    _24289 = find_from(_24287, _24288, 1);
    _24287 = NOVALUE;
    DeRefDS(_24288);
    _24288 = NOVALUE;
    // SubProg DefinedYet pc: 34 op: NOT_IFW (108)
    if (_24289 != 0)
    goto L1; // [34] 82
    _24289 = NOVALUE;
    // SubProg DefinedYet pc: 37 op: STARTLINE (58)

    /** symtab.e:232			if SymTab[sym][S_FILE_NO] = current_file_no then*/
    // SubProg DefinedYet pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24291 = (object)*(((s1_ptr)_2)->base + _sym_46520);
    // SubProg DefinedYet pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24291);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24292 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24292 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24291 = NOVALUE;
    // SubProg DefinedYet pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 53 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24292, _34current_file_no_15188)){
        _24292 = NOVALUE;
        goto L2; // [53] 81
    }
    _24292 = NOVALUE;
    // SubProg DefinedYet pc: 57 op: STARTLINE (58)

    /** symtab.e:233				CompileErr(31, {SymTab[sym][S_NAME]})*/
    // SubProg DefinedYet pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24294 = (object)*(((s1_ptr)_2)->base + _sym_46520);
    // SubProg DefinedYet pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24294);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24295 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24295 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24294 = NOVALUE;
    // SubProg DefinedYet pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24295);
    ((intptr_t*)_2)[1] = _24295;
    _24296 = MAKE_SEQ(_1);
    _24295 = NOVALUE;
    // SubProg DefinedYet pc: 75 op: PROC (27)
    _49CompileErr(31, _24296, 0);
    _24296 = NOVALUE;
    // SubProg DefinedYet pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 46517 op: 159
    // SubProg DefinedYet pc: 81 op: NOP1 (159)
L1: // addr: 82 pc: 81 sub: 46517 op: 159
    // SubProg DefinedYet pc: 82 op: STARTLINE (58)

    /** symtab.e:236	end procedure*/
    // SubProg DefinedYet pc: 84 op: RETURNP (29)

// Exiting block BLOCK: DefinedYet

// block var sym_46520
    return;
    // SubProg DefinedYet pc: 87 op: BADRETURNF (43)
    ;
}


object _53name_ext(object _s_46547)
{
    object _24303 = NOVALUE; // 46557 24303
    object _24302 = NOVALUE; // 46556 24302
    object _24301 = NOVALUE; // 46555 24301
    object _24300 = NOVALUE; // 46554 24300
    object _24298 = NOVALUE; // 46552 24298
    object _24297 = NOVALUE; // 46550 24297
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg name_ext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg name_ext pc: 3 op: STARTLINE (58)

    /** symtab.e:241		for i = length(s) to 1 by -1 do*/
    // SubProg name_ext pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46547)){
            _24297 = SEQ_PTR(_s_46547)->length;
    }
    else {
        _24297 = 1;
    }
    // SubProg name_ext pc: 8 op: FOR_I (125)
    {
        object _i_46549;
        _i_46549 = _24297;
L1: // addr: 15 pc: 8 sub: 46545 op: 125
        if (_i_46549 < 1){
            goto L2; // [8] 55
        }
        // SubProg name_ext pc: 15 op: STARTLINE (58)

        /** symtab.e:242			if find(s[i], "/\\:") then*/
        // SubProg name_ext pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_46547);
        _24298 = (object)*(((s1_ptr)_2)->base + _i_46549);
        // SubProg name_ext pc: 21 op: FIND_FROM (176)
        _24300 = find_from(_24298, _24299, 1);
        _24298 = NOVALUE;
        // SubProg name_ext pc: 26 op: IF (20)
        if (_24300 == 0)
        {
            _24300 = NOVALUE;
            goto L3; // [26] 48
        }
        else{
            _24300 = NOVALUE;
        }
        // SubProg name_ext pc: 29 op: STARTLINE (58)

        /** symtab.e:243				return s[i+1 .. $]*/
        // SubProg name_ext pc: 31 op: PLUS1 (93)
        _24301 = _i_46549 + 1;
        // SubProg name_ext pc: 35 op: LENGTH (42)
        if (IS_SEQUENCE(_s_46547)){
                _24302 = SEQ_PTR(_s_46547)->length;
        }
        else {
            _24302 = 1;
        }
        // SubProg name_ext pc: 38 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_24303;
        RHS_Slice(_s_46547, _24301, _24302);
        // SubProg name_ext pc: 43 op: RETURNF (28)

// Exiting block BLOCK: name_ext

// block var s_46547
        DeRefDS(_s_46547);
        _24301 = NOVALUE;
        return _24303;
        // SubProg name_ext pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 46545 op: 159
        // SubProg name_ext pc: 48 op: STARTLINE (58)

        /** symtab.e:245		end for*/
        // SubProg name_ext pc: 50 op: ENDFOR_GENERAL (39)
        _i_46549 = _i_46549 + -1;
        goto L1; // [50] 15
L2: // addr: 55 pc: 50 sub: 46545 op: 39
        ;
    }
    // SubProg name_ext pc: 55 op: STARTLINE (58)

    /** symtab.e:247		return s*/
    // SubProg name_ext pc: 57 op: RETURNF (28)

// Exiting block BLOCK: name_ext
    DeRef(_24301);
    _24301 = NOVALUE;
    DeRef(_24303);
    _24303 = NOVALUE;
    return _s_46547;
    // SubProg name_ext pc: 61 op: BADRETURNF (43)
    ;
}


object _53NewStringSym(object _s_46566)
{
    object _p_46568 = NOVALUE;
    object _tp_46569 = NOVALUE;
    object _prev_46570 = NOVALUE;
    object _search_count_46571 = NOVALUE;
// skipping _24348  name type: 0
    object _24347 = NOVALUE; // 46659 24347
// skipping _24346  name type: 0
    object _24345 = NOVALUE; // 46654 24345
    object _24344 = NOVALUE; // 46651 24344
    object _24343 = NOVALUE; // 46649 24343
    object _24341 = NOVALUE; // 46645 24341
    object _24340 = NOVALUE; // 46643 24340
// skipping _24338  name type: 0
    object _24337 = NOVALUE; // 46636 24337
// skipping _24336  name type: 0
    object _24335 = NOVALUE; // 46630 24335
// skipping _24334  name type: 0
    object _24333 = NOVALUE; // 46627 24333
    object _24332 = NOVALUE; // 46625 24332
    object _24331 = NOVALUE; // 46622 24331
// skipping _24330  name type: 0
    object _24329 = NOVALUE; // 46619 24329
// skipping _24328  name type: 0
    object _24327 = NOVALUE; // 46614 24327
// skipping _24326  name type: 0
    object _24325 = NOVALUE; // 46609 24325
// skipping _24324  name type: 0
    object _24323 = NOVALUE; // 46603 24323
// skipping _24322  name type: 0
// skipping _24321  name type: 0
    object _24320 = NOVALUE; // 46598 24320
// skipping _24319  name type: 0
    object _24318 = NOVALUE; // 46594 24318
    object _24317 = NOVALUE; // 46592 24317
    object _24316 = NOVALUE; // 46590 24316
// skipping _24315  name type: 0
    object _24314 = NOVALUE; // 46586 24314
// skipping _24313  name type: 0
    object _24312 = NOVALUE; // 46582 24312
    object _24311 = NOVALUE; // 46581 24311
    object _24310 = NOVALUE; // 46579 24310
// skipping _24309  name type: 0
// skipping _24308  name type: 0
// skipping _24307  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewStringSym pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewStringSym pc: 3 op: STARTLINE (58)

    /** symtab.e:255		integer search_count*/
    // SubProg NewStringSym pc: 5 op: STARTLINE (58)

    /** symtab.e:258		tp = literal_init*/
    // SubProg NewStringSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 9 op: ASSIGN (18)
    _tp_46569 = _53literal_init_46265;
    // SubProg NewStringSym pc: 12 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 14 op: STARTLINE (58)

    /** symtab.e:259		prev = 0*/
    // SubProg NewStringSym pc: 16 op: ASSIGN (18)
    _prev_46570 = 0;
    // SubProg NewStringSym pc: 19 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 21 op: STARTLINE (58)

    /** symtab.e:260		search_count = 0*/
    // SubProg NewStringSym pc: 23 op: ASSIGN_I (113)
    _search_count_46571 = 0;
    // SubProg NewStringSym pc: 26 op: STARTLINE (58)

    /** symtab.e:261		while tp != 0 do*/
    // SubProg NewStringSym pc: 28 op: NOP2 (110)
    // SubProg NewStringSym pc: 30 op: NOPWHILE (158)
L1: // addr: 31 pc: 30 sub: 46564 op: 158
    // SubProg NewStringSym pc: 31 op: NOTEQ_IFW (105)
    if (_tp_46569 == 0)
    goto L2; // [31] 170
    // SubProg NewStringSym pc: 35 op: STARTLINE (58)

    /** symtab.e:262			search_count += 1*/
    // SubProg NewStringSym pc: 37 op: PLUS1_I (117)
    _search_count_46571 = _search_count_46571 + 1;
    // SubProg NewStringSym pc: 41 op: STARTLINE (58)

    /** symtab.e:263			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewStringSym pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 45 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46571, _53SEARCH_LIMIT_46558)){
        goto L3; // [45] 54
    }
    // SubProg NewStringSym pc: 49 op: STARTLINE (58)

    /** symtab.e:264				exit*/
    // SubProg NewStringSym pc: 51 op: EXIT (61)
    goto L2; // [51] 170
    // SubProg NewStringSym pc: 53 op: NOP1 (159)
L3: // addr: 54 pc: 53 sub: 46564 op: 159
    // SubProg NewStringSym pc: 54 op: STARTLINE (58)

    /** symtab.e:266			if equal(s, SymTab[tp][S_OBJ]) then*/
    // SubProg NewStringSym pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24310 = (object)*(((s1_ptr)_2)->base + _tp_46569);
    // SubProg NewStringSym pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24310);
    _24311 = (object)*(((s1_ptr)_2)->base + 1);
    _24310 = NOVALUE;
    // SubProg NewStringSym pc: 68 op: EQUAL (153)
    if (_s_46566 == _24311)
    _24312 = 1;
    else if (IS_ATOM_INT(_s_46566) && IS_ATOM_INT(_24311))
    _24312 = 0;
    else
    _24312 = (compare(_s_46566, _24311) == 0);
    _24311 = NOVALUE;
    // SubProg NewStringSym pc: 72 op: IF (20)
    if (_24312 == 0)
    {
        _24312 = NOVALUE;
        goto L4; // [72] 142
    }
    else{
        _24312 = NOVALUE;
    }
    // SubProg NewStringSym pc: 75 op: STARTLINE (58)

    /** symtab.e:268				if tp != literal_init then*/
    // SubProg NewStringSym pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 79 op: NOTEQ_IFW (105)
    if (_tp_46569 == _53literal_init_46265)
    goto L5; // [79] 135
    // SubProg NewStringSym pc: 83 op: STARTLINE (58)

    /** symtab.e:269					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 87 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46570 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24316 = (object)*(((s1_ptr)_2)->base + _tp_46569);
    // SubProg NewStringSym pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24316);
    _24317 = (object)*(((s1_ptr)_2)->base + 2);
    _24316 = NOVALUE;
    // SubProg NewStringSym pc: 106 op: PASSIGN_SUBS (162)
    Ref(_24317);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24317;
    if( _1 != _24317 ){
        DeRef(_1);
    }
    _24317 = NOVALUE;
    _24314 = NOVALUE;
    // SubProg NewStringSym pc: 110 op: STARTLINE (58)

    /** symtab.e:270					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 114 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46569 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _53literal_init_46265;
    DeRef(_1);
    _24318 = NOVALUE;
    // SubProg NewStringSym pc: 127 op: STARTLINE (58)

    /** symtab.e:271					literal_init = tp*/
    // SubProg NewStringSym pc: 129 op: ASSIGN (18)
    _53literal_init_46265 = _tp_46569;
    // SubProg NewStringSym pc: 132 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 46564 op: 159
    // SubProg NewStringSym pc: 135 op: STARTLINE (58)

    /** symtab.e:273				return tp*/
    // SubProg NewStringSym pc: 137 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46566
    DeRefDS(_s_46566);

// block var p_46568

// block var prev_46570

// block var search_count_46571
    return _tp_46569;
    // SubProg NewStringSym pc: 141 op: NOP1 (159)
L4: // addr: 142 pc: 141 sub: 46564 op: 159
    // SubProg NewStringSym pc: 142 op: STARTLINE (58)

    /** symtab.e:275			prev = tp*/
    // SubProg NewStringSym pc: 144 op: ASSIGN (18)
    _prev_46570 = _tp_46569;
    // SubProg NewStringSym pc: 147 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 149 op: STARTLINE (58)

    /** symtab.e:276			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24320 = (object)*(((s1_ptr)_2)->base + _tp_46569);
    // SubProg NewStringSym pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24320);
    _tp_46569 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46569)){
        _tp_46569 = (object)DBL_PTR(_tp_46569)->dbl;
    }
    _24320 = NOVALUE;
    // SubProg NewStringSym pc: 165 op: STARTLINE (58)

    /** symtab.e:277		end while*/
    // SubProg NewStringSym pc: 167 op: ENDWHILE (22)
    goto L1; // [167] 31
    // SubProg NewStringSym pc: 169 op: NOP1 (159)
L2: // addr: 170 pc: 169 sub: 46564 op: 159
    // SubProg NewStringSym pc: 170 op: STARTLINE (58)

    /** symtab.e:279		p = tmp_alloc()*/
    // SubProg NewStringSym pc: 172 op: PROC (27)
    _p_46568 = _53tmp_alloc();
    // SubProg NewStringSym pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46568)) {
        _1 = (object)(DBL_PTR(_p_46568)->dbl);
        DeRefDS(_p_46568);
        _p_46568 = _1;
    }
    // SubProg NewStringSym pc: 177 op: STARTLINE (58)

    /** symtab.e:280		SymTab[p][S_OBJ] = s*/
    // SubProg NewStringSym pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 181 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 188 op: PASSIGN_SUBS (162)
    RefDS(_s_46566);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_46566;
    DeRef(_1);
    _24323 = NOVALUE;
    // SubProg NewStringSym pc: 192 op: STARTLINE (58)

    /** symtab.e:282		if TRANSLATE then*/
    // SubProg NewStringSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 196 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L6; // [196] 346
    }
    else{
    }
    // SubProg NewStringSym pc: 199 op: STARTLINE (58)

    /** symtab.e:283			SymTab[p][S_MODE] = M_TEMP    -- override CONSTANT for compile*/
    // SubProg NewStringSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 203 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    _24325 = NOVALUE;
    // SubProg NewStringSym pc: 216 op: STARTLINE (58)

    /** symtab.e:284			SymTab[p][S_GTYPE] = TYPE_SEQUENCE*/
    // SubProg NewStringSym pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 220 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    _24327 = NOVALUE;
    // SubProg NewStringSym pc: 233 op: STARTLINE (58)

    /** symtab.e:285			SymTab[p][S_SEQ_LEN] = length(s)*/
    // SubProg NewStringSym pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 237 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 244 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46566)){
            _24331 = SEQ_PTR(_s_46566)->length;
    }
    else {
        _24331 = 1;
    }
    // SubProg NewStringSym pc: 247 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24331;
    if( _1 != _24331 ){
        DeRef(_1);
    }
    _24331 = NOVALUE;
    _24329 = NOVALUE;
    // SubProg NewStringSym pc: 251 op: STARTLINE (58)

    /** symtab.e:286			if SymTab[p][S_SEQ_LEN] > 0 then*/
    // SubProg NewStringSym pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24332 = (object)*(((s1_ptr)_2)->base + _p_46568);
    // SubProg NewStringSym pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24332);
    _24333 = (object)*(((s1_ptr)_2)->base + 32);
    _24332 = NOVALUE;
    // SubProg NewStringSym pc: 265 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24333, 0)){
        _24333 = NOVALUE;
        goto L7; // [265] 289
    }
    _24333 = NOVALUE;
    // SubProg NewStringSym pc: 269 op: STARTLINE (58)

    /** symtab.e:287				SymTab[p][S_SEQ_ELEM] = TYPE_INTEGER*/
    // SubProg NewStringSym pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 273 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    _24335 = NOVALUE;
    // SubProg NewStringSym pc: 286 op: ELSE (23)
    goto L8; // [286] 307
    // SubProg NewStringSym pc: 288 op: NOP1 (159)
L7: // addr: 289 pc: 288 sub: 46564 op: 159
    // SubProg NewStringSym pc: 289 op: STARTLINE (58)

    /** symtab.e:289				SymTab[p][S_SEQ_ELEM] = TYPE_NULL*/
    // SubProg NewStringSym pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 293 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    _24337 = NOVALUE;
    // SubProg NewStringSym pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 46564 op: 159
    // SubProg NewStringSym pc: 307 op: STARTLINE (58)

    /** symtab.e:291			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 311 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24340 = (object)*(((s1_ptr)_2)->base + _p_46568);
    // SubProg NewStringSym pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 317 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24340);
    _24341 = (object)*(((s1_ptr)_2)->base + 34);
    _24340 = NOVALUE;
    // SubProg NewStringSym pc: 321 op: PROC (27)
    RefDS(_24339);
    Ref(_24341);
    _54c_printf(_24339, _24341);
    _24341 = NOVALUE;
    // SubProg NewStringSym pc: 325 op: STARTLINE (58)

    /** symtab.e:292			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 329 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24343 = (object)*(((s1_ptr)_2)->base + _p_46568);
    // SubProg NewStringSym pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 335 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24343);
    _24344 = (object)*(((s1_ptr)_2)->base + 34);
    _24343 = NOVALUE;
    // SubProg NewStringSym pc: 339 op: PROC (27)
    RefDS(_24342);
    Ref(_24344);
    _54c_hprintf(_24342, _24344);
    _24344 = NOVALUE;
    // SubProg NewStringSym pc: 343 op: ELSE (23)
    goto L9; // [343] 364
    // SubProg NewStringSym pc: 345 op: NOP1 (159)
L6: // addr: 346 pc: 345 sub: 46564 op: 159
    // SubProg NewStringSym pc: 346 op: STARTLINE (58)

    /** symtab.e:295			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewStringSym pc: 348 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 350 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    _24345 = NOVALUE;
    // SubProg NewStringSym pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 46564 op: 159
    // SubProg NewStringSym pc: 364 op: STARTLINE (58)

    /** symtab.e:299		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46568 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _53literal_init_46265;
    DeRef(_1);
    _24347 = NOVALUE;
    // SubProg NewStringSym pc: 381 op: STARTLINE (58)

    /** symtab.e:300		literal_init = p*/
    // SubProg NewStringSym pc: 383 op: ASSIGN (18)
    _53literal_init_46265 = _p_46568;
    // SubProg NewStringSym pc: 386 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 388 op: STARTLINE (58)

    /** symtab.e:301		return p*/
    // SubProg NewStringSym pc: 390 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46566
    DeRefDS(_s_46566);

// block var tp_46569

// block var prev_46570

// block var search_count_46571
    return _p_46568;
    // SubProg NewStringSym pc: 394 op: BADRETURNF (43)
    ;
}


object _53NewIntSym(object _int_val_46664)
{
    object _p_46666 = NOVALUE;
    object _x_46667 = NOVALUE;
// skipping _24372  name type: 0
    object _24371 = NOVALUE; // 46712 24371
// skipping _24370  name type: 0
    object _24369 = NOVALUE; // 46710 24369
// skipping _24368  name type: 0
// skipping _24367  name type: 0
// skipping _24366  name type: 0
    object _24365 = NOVALUE; // 46703 24365
// skipping _24364  name type: 0
    object _24363 = NOVALUE; // 46699 24363
// skipping _24362  name type: 0
    object _24361 = NOVALUE; // 46695 24361
// skipping _24360  name type: 0
    object _24359 = NOVALUE; // 46689 24359
// skipping _24358  name type: 0
    object _24357 = NOVALUE; // 46684 24357
// skipping _24356  name type: 0
    object _24355 = NOVALUE; // 46680 24355
// skipping _24353  name type: 0
// skipping _24352  name type: 0
// skipping _24351  name type: 0
// skipping _24350  name type: 0
// skipping _24349  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewIntSym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_val_46664)) {
        _1 = (object)(DBL_PTR(_int_val_46664)->dbl);
        DeRefDS(_int_val_46664);
        _int_val_46664 = _1;
    }
    // SubProg NewIntSym pc: 3 op: STARTLINE (58)

    /** symtab.e:308		integer x*/
    // SubProg NewIntSym pc: 5 op: STARTLINE (58)

    /** symtab.e:310		x = find(int_val, lastintval)*/
    // SubProg NewIntSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 9 op: FIND_FROM (176)
    _x_46667 = find_from(_int_val_46664, _53lastintval_46267, 1);
    // SubProg NewIntSym pc: 14 op: STARTLINE (58)

    /** symtab.e:311		if x then*/
    // SubProg NewIntSym pc: 16 op: IF (20)
    if (_x_46667 == 0)
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
    _2 = (object)SEQ_PTR(_53lastintsym_46268);
    _24355 = (object)*(((s1_ptr)_2)->base + _x_46667);
    // SubProg NewIntSym pc: 70 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46664

// block var p_46666

// block var x_46667
    return _24355;
    // SubProg NewIntSym pc: 74 op: ELSE (23)
    goto L2; // [74] 227
    // SubProg NewIntSym pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 46662 op: 159
    // SubProg NewIntSym pc: 77 op: STARTLINE (58)

    /** symtab.e:320			label "lolol"*/
    // SubProg NewIntSym pc: 79 op: GLABEL (189)
G3:
    // SubProg NewIntSym pc: 81 op: STARTLINE (58)

    /** symtab.e:321			p = tmp_alloc()*/
    // SubProg NewIntSym pc: 83 op: PROC (27)
    _p_46666 = _53tmp_alloc();
    // SubProg NewIntSym pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46666)) {
        _1 = (object)(DBL_PTR(_p_46666)->dbl);
        DeRefDS(_p_46666);
        _p_46666 = _1;
    }
    // SubProg NewIntSym pc: 88 op: STARTLINE (58)

    /** symtab.e:322			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewIntSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46666 + ((s1_ptr)_2)->base);
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
    _24357 = NOVALUE;
    // SubProg NewIntSym pc: 105 op: STARTLINE (58)

    /** symtab.e:323			SymTab[p][S_OBJ] = int_val*/
    // SubProg NewIntSym pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46666 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 116 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46664;
    DeRef(_1);
    _24359 = NOVALUE;
    // SubProg NewIntSym pc: 120 op: STARTLINE (58)

    /** symtab.e:325			if TRANSLATE then*/
    // SubProg NewIntSym pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 124 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L4; // [124] 175
    }
    else{
    }
    // SubProg NewIntSym pc: 127 op: STARTLINE (58)

    /** symtab.e:326				SymTab[p][S_OBJ_MIN] = int_val*/
    // SubProg NewIntSym pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46666 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 138 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46664;
    DeRef(_1);
    _24361 = NOVALUE;
    // SubProg NewIntSym pc: 142 op: STARTLINE (58)

    /** symtab.e:327				SymTab[p][S_OBJ_MAX] = int_val*/
    // SubProg NewIntSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46666 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 153 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46664;
    DeRef(_1);
    _24363 = NOVALUE;
    // SubProg NewIntSym pc: 157 op: STARTLINE (58)

    /** symtab.e:328				SymTab[p][S_GTYPE] = TYPE_INTEGER*/
    // SubProg NewIntSym pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 161 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46666 + ((s1_ptr)_2)->base);
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
    _24365 = NOVALUE;
    // SubProg NewIntSym pc: 174 op: NOP1 (159)
L4: // addr: 175 pc: 174 sub: 46662 op: 159
    // SubProg NewIntSym pc: 175 op: STARTLINE (58)

    /** symtab.e:331			lastintval = prepend(lastintval, int_val)*/
    // SubProg NewIntSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 179 op: PREPEND (57)
    Prepend(&_53lastintval_46267, _53lastintval_46267, _int_val_46664);
    // SubProg NewIntSym pc: 183 op: STARTLINE (58)

    /** symtab.e:332			lastintsym = prepend(lastintsym, p)*/
    // SubProg NewIntSym pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 187 op: PREPEND (57)
    Prepend(&_53lastintsym_46268, _53lastintsym_46268, _p_46666);
    // SubProg NewIntSym pc: 191 op: STARTLINE (58)

    /** symtab.e:333			if length(lastintval) > SEARCH_LIMIT then*/
    // SubProg NewIntSym pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_53lastintval_46267)){
            _24369 = SEQ_PTR(_53lastintval_46267)->length;
    }
    else {
        _24369 = 1;
    }
    // SubProg NewIntSym pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 200 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24369, _53SEARCH_LIMIT_46558)){
        _24369 = NOVALUE;
        goto L5; // [200] 220
    }
    _24369 = NOVALUE;
    // SubProg NewIntSym pc: 204 op: STARTLINE (58)

    /** symtab.e:334				lastintval = lastintval[1..floor(SEARCH_LIMIT/2)]*/
    // SubProg NewIntSym pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 210 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_53SEARCH_LIMIT_46558)) {
        _24371 = _53SEARCH_LIMIT_46558 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _53SEARCH_LIMIT_46558, 2);
        _24371 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg NewIntSym pc: 214 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_53lastintval_46267;
    RHS_Slice(_53lastintval_46267, 1, _24371);
    // SubProg NewIntSym pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 46662 op: 159
    // SubProg NewIntSym pc: 220 op: STARTLINE (58)

    /** symtab.e:336			return p*/
    // SubProg NewIntSym pc: 222 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46664

// block var x_46667
    DeRef(_24371);
    _24371 = NOVALUE;
    _24355 = NOVALUE;
    return _p_46666;
    // SubProg NewIntSym pc: 226 op: NOP1 (159)
L2: // addr: 227 pc: 226 sub: 46662 op: 159
    // SubProg NewIntSym pc: 227 op: BADRETURNF (43)
    ;
}


object _53NewDoubleSym(object _d_46716)
{
    object _p_46718 = NOVALUE;
    object _tp_46719 = NOVALUE;
    object _prev_46720 = NOVALUE;
    object _search_count_46721 = NOVALUE;
// skipping _24402  name type: 0
    object _24401 = NOVALUE; // 46784 24401
    object _24400 = NOVALUE; // 46782 24400
    object _24399 = NOVALUE; // 46780 24399
    object _24398 = NOVALUE; // 46777 24398
    object _24397 = NOVALUE; // 46775 24397
// skipping _24396  name type: 0
    object _24395 = NOVALUE; // 46769 24395
// skipping _24394  name type: 0
    object _24393 = NOVALUE; // 46764 24393
// skipping _24392  name type: 0
    object _24391 = NOVALUE; // 46758 24391
// skipping _24390  name type: 0
    object _24389 = NOVALUE; // 46753 24389
// skipping _24388  name type: 0
// skipping _24387  name type: 0
    object _24386 = NOVALUE; // 46748 24386
// skipping _24385  name type: 0
    object _24384 = NOVALUE; // 46744 24384
    object _24383 = NOVALUE; // 46742 24383
    object _24382 = NOVALUE; // 46740 24382
// skipping _24381  name type: 0
    object _24380 = NOVALUE; // 46736 24380
// skipping _24379  name type: 0
    object _24378 = NOVALUE; // 46732 24378
    object _24377 = NOVALUE; // 46731 24377
    object _24376 = NOVALUE; // 46729 24376
// skipping _24375  name type: 0
// skipping _24374  name type: 0
// skipping _24373  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewDoubleSym pc: 1 op: STARTLINE (58)

    /** symtab.e:343		integer search_count*/
    // SubProg NewDoubleSym pc: 3 op: STARTLINE (58)

    /** symtab.e:346		tp = literal_init*/
    // SubProg NewDoubleSym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 7 op: ASSIGN (18)
    _tp_46719 = _53literal_init_46265;
    // SubProg NewDoubleSym pc: 10 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 12 op: STARTLINE (58)

    /** symtab.e:347		prev = 0*/
    // SubProg NewDoubleSym pc: 14 op: ASSIGN (18)
    _prev_46720 = 0;
    // SubProg NewDoubleSym pc: 17 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 19 op: STARTLINE (58)

    /** symtab.e:348		search_count = 0*/
    // SubProg NewDoubleSym pc: 21 op: ASSIGN_I (113)
    _search_count_46721 = 0;
    // SubProg NewDoubleSym pc: 24 op: STARTLINE (58)

    /** symtab.e:349		while tp != 0 do*/
    // SubProg NewDoubleSym pc: 26 op: NOP2 (110)
    // SubProg NewDoubleSym pc: 28 op: NOPWHILE (158)
L1: // addr: 29 pc: 28 sub: 46714 op: 158
    // SubProg NewDoubleSym pc: 29 op: NOTEQ_IFW (105)
    if (_tp_46719 == 0)
    goto L2; // [29] 168
    // SubProg NewDoubleSym pc: 33 op: STARTLINE (58)

    /** symtab.e:350			search_count += 1*/
    // SubProg NewDoubleSym pc: 35 op: PLUS1_I (117)
    _search_count_46721 = _search_count_46721 + 1;
    // SubProg NewDoubleSym pc: 39 op: STARTLINE (58)

    /** symtab.e:351			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewDoubleSym pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 43 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46721, _53SEARCH_LIMIT_46558)){
        goto L3; // [43] 52
    }
    // SubProg NewDoubleSym pc: 47 op: STARTLINE (58)

    /** symtab.e:352				exit*/
    // SubProg NewDoubleSym pc: 49 op: EXIT (61)
    goto L2; // [49] 168
    // SubProg NewDoubleSym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 46714 op: 159
    // SubProg NewDoubleSym pc: 52 op: STARTLINE (58)

    /** symtab.e:354			if equal(d, SymTab[tp][S_OBJ]) then*/
    // SubProg NewDoubleSym pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24376 = (object)*(((s1_ptr)_2)->base + _tp_46719);
    // SubProg NewDoubleSym pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24376);
    _24377 = (object)*(((s1_ptr)_2)->base + 1);
    _24376 = NOVALUE;
    // SubProg NewDoubleSym pc: 66 op: EQUAL (153)
    if (_d_46716 == _24377)
    _24378 = 1;
    else if (IS_ATOM_INT(_d_46716) && IS_ATOM_INT(_24377))
    _24378 = 0;
    else
    _24378 = (compare(_d_46716, _24377) == 0);
    _24377 = NOVALUE;
    // SubProg NewDoubleSym pc: 70 op: IF (20)
    if (_24378 == 0)
    {
        _24378 = NOVALUE;
        goto L4; // [70] 140
    }
    else{
        _24378 = NOVALUE;
    }
    // SubProg NewDoubleSym pc: 73 op: STARTLINE (58)

    /** symtab.e:356				if tp != literal_init then*/
    // SubProg NewDoubleSym pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 77 op: NOTEQ_IFW (105)
    if (_tp_46719 == _53literal_init_46265)
    goto L5; // [77] 133
    // SubProg NewDoubleSym pc: 81 op: STARTLINE (58)

    /** symtab.e:358					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46720 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24382 = (object)*(((s1_ptr)_2)->base + _tp_46719);
    // SubProg NewDoubleSym pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 100 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24382);
    _24383 = (object)*(((s1_ptr)_2)->base + 2);
    _24382 = NOVALUE;
    // SubProg NewDoubleSym pc: 104 op: PASSIGN_SUBS (162)
    Ref(_24383);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24383;
    if( _1 != _24383 ){
        DeRef(_1);
    }
    _24383 = NOVALUE;
    _24380 = NOVALUE;
    // SubProg NewDoubleSym pc: 108 op: STARTLINE (58)

    /** symtab.e:359					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 112 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46719 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _53literal_init_46265;
    DeRef(_1);
    _24384 = NOVALUE;
    // SubProg NewDoubleSym pc: 125 op: STARTLINE (58)

    /** symtab.e:360					literal_init = tp*/
    // SubProg NewDoubleSym pc: 127 op: ASSIGN (18)
    _53literal_init_46265 = _tp_46719;
    // SubProg NewDoubleSym pc: 130 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46714 op: 159
    // SubProg NewDoubleSym pc: 133 op: STARTLINE (58)

    /** symtab.e:362				return tp*/
    // SubProg NewDoubleSym pc: 135 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46716
    DeRef(_d_46716);

// block var p_46718

// block var prev_46720

// block var search_count_46721
    return _tp_46719;
    // SubProg NewDoubleSym pc: 139 op: NOP1 (159)
L4: // addr: 140 pc: 139 sub: 46714 op: 159
    // SubProg NewDoubleSym pc: 140 op: STARTLINE (58)

    /** symtab.e:364			prev = tp*/
    // SubProg NewDoubleSym pc: 142 op: ASSIGN (18)
    _prev_46720 = _tp_46719;
    // SubProg NewDoubleSym pc: 145 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 147 op: STARTLINE (58)

    /** symtab.e:365			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24386 = (object)*(((s1_ptr)_2)->base + _tp_46719);
    // SubProg NewDoubleSym pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24386);
    _tp_46719 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46719)){
        _tp_46719 = (object)DBL_PTR(_tp_46719)->dbl;
    }
    _24386 = NOVALUE;
    // SubProg NewDoubleSym pc: 163 op: STARTLINE (58)

    /** symtab.e:366		end while*/
    // SubProg NewDoubleSym pc: 165 op: ENDWHILE (22)
    goto L1; // [165] 29
    // SubProg NewDoubleSym pc: 167 op: NOP1 (159)
L2: // addr: 168 pc: 167 sub: 46714 op: 159
    // SubProg NewDoubleSym pc: 168 op: STARTLINE (58)

    /** symtab.e:368		p = tmp_alloc()*/
    // SubProg NewDoubleSym pc: 170 op: PROC (27)
    _p_46718 = _53tmp_alloc();
    // SubProg NewDoubleSym pc: 173 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46718)) {
        _1 = (object)(DBL_PTR(_p_46718)->dbl);
        DeRefDS(_p_46718);
        _p_46718 = _1;
    }
    // SubProg NewDoubleSym pc: 175 op: STARTLINE (58)

    /** symtab.e:369		SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewDoubleSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 179 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46718 + ((s1_ptr)_2)->base);
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
    _24389 = NOVALUE;
    // SubProg NewDoubleSym pc: 192 op: STARTLINE (58)

    /** symtab.e:370		SymTab[p][S_OBJ] = d*/
    // SubProg NewDoubleSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 196 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46718 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 203 op: PASSIGN_SUBS (162)
    Ref(_d_46716);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _d_46716;
    DeRef(_1);
    _24391 = NOVALUE;
    // SubProg NewDoubleSym pc: 207 op: STARTLINE (58)

    /** symtab.e:372		if TRANSLATE then*/
    // SubProg NewDoubleSym pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 211 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L6; // [211] 285
    }
    else{
    }
    // SubProg NewDoubleSym pc: 214 op: STARTLINE (58)

    /** symtab.e:373			SymTab[p][S_MODE] = M_TEMP  -- override CONSTANT for compile*/
    // SubProg NewDoubleSym pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 218 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46718 + ((s1_ptr)_2)->base);
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
    _24393 = NOVALUE;
    // SubProg NewDoubleSym pc: 231 op: STARTLINE (58)

    /** symtab.e:374			SymTab[p][S_GTYPE] = TYPE_DOUBLE*/
    // SubProg NewDoubleSym pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 235 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46718 + ((s1_ptr)_2)->base);
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
    _24395 = NOVALUE;
    // SubProg NewDoubleSym pc: 248 op: STARTLINE (58)

    /** symtab.e:375			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24397 = (object)*(((s1_ptr)_2)->base + _p_46718);
    // SubProg NewDoubleSym pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24397);
    _24398 = (object)*(((s1_ptr)_2)->base + 34);
    _24397 = NOVALUE;
    // SubProg NewDoubleSym pc: 262 op: PROC (27)
    RefDS(_24339);
    Ref(_24398);
    _54c_printf(_24339, _24398);
    _24398 = NOVALUE;
    // SubProg NewDoubleSym pc: 266 op: STARTLINE (58)

    /** symtab.e:376			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 270 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24399 = (object)*(((s1_ptr)_2)->base + _p_46718);
    // SubProg NewDoubleSym pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 276 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24399);
    _24400 = (object)*(((s1_ptr)_2)->base + 34);
    _24399 = NOVALUE;
    // SubProg NewDoubleSym pc: 280 op: PROC (27)
    RefDS(_24342);
    Ref(_24400);
    _54c_hprintf(_24342, _24400);
    _24400 = NOVALUE;
    // SubProg NewDoubleSym pc: 284 op: NOP1 (159)
L6: // addr: 285 pc: 284 sub: 46714 op: 159
    // SubProg NewDoubleSym pc: 285 op: STARTLINE (58)

    /** symtab.e:379		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 289 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46718 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _53literal_init_46265;
    DeRef(_1);
    _24401 = NOVALUE;
    // SubProg NewDoubleSym pc: 302 op: STARTLINE (58)

    /** symtab.e:380		literal_init = p*/
    // SubProg NewDoubleSym pc: 304 op: ASSIGN (18)
    _53literal_init_46265 = _p_46718;
    // SubProg NewDoubleSym pc: 307 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 309 op: STARTLINE (58)

    /** symtab.e:381		return p*/
    // SubProg NewDoubleSym pc: 311 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46716
    DeRef(_d_46716);

// block var tp_46719

// block var prev_46720

// block var search_count_46721
    return _p_46718;
    // SubProg NewDoubleSym pc: 315 op: BADRETURNF (43)
    ;
}


object _53NewTempSym(object _inlining_46790)
{
    object _p_46792 = NOVALUE;
    object _q_46793 = NOVALUE;
// skipping _24451  name type: 0
    object _24450 = NOVALUE; // 46903 24450
// skipping _24449  name type: 0
    object _24448 = NOVALUE; // 46898 24448
// skipping _24447  name type: 0
    object _24446 = NOVALUE; // 46893 24446
// skipping _24445  name type: 0
    object _24444 = NOVALUE; // 46888 24444
// skipping _24443  name type: 0
    object _24442 = NOVALUE; // 46883 24442
// skipping _24441  name type: 0
    object _24440 = NOVALUE; // 46877 24440
    object _24439 = NOVALUE; // 46874 24439
    object _24438 = NOVALUE; // 46872 24438
// skipping _24437  name type: 0
    object _24436 = NOVALUE; // 46867 24436
    object _24435 = NOVALUE; // 46865 24435
    object _24434 = NOVALUE; // 46863 24434
// skipping _24433  name type: 0
    object _24432 = NOVALUE; // 46859 24432
// skipping _24431  name type: 0
    object _24430 = NOVALUE; // 46854 24430
// skipping _24429  name type: 0
// skipping _24428  name type: 0
    object _24427 = NOVALUE; // 46848 24427
    object _24426 = NOVALUE; // 46844 24426
    object _24425 = NOVALUE; // 46843 24425
// skipping _24424  name type: 0
    object _24423 = NOVALUE; // 46840 24423
// skipping _24422  name type: 0
    object _24421 = NOVALUE; // 46834 24421
    object _24420 = NOVALUE; // 46831 24420
    object _24419 = NOVALUE; // 46829 24419
// skipping _24418  name type: 0
    object _24417 = NOVALUE; // 46824 24417
// skipping _24416  name type: 0
    object _24415 = NOVALUE; // 46819 24415
// skipping _24414  name type: 0
// skipping _24413  name type: 0
// skipping _24412  name type: 0
// skipping _24411  name type: 0
    object _24410 = NOVALUE; // 46810 24410
    object _24409 = NOVALUE; // 46808 24409
    object _24408 = NOVALUE; // 46806 24408
    object _24407 = NOVALUE; // 46804 24407
    object _24406 = NOVALUE; // 46802 24406
    object _24405 = NOVALUE; // 46801 24405
// skipping _24404  name type: 0
    object _24403 = NOVALUE; // 46797 24403
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewTempSym pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 3 op: STARTLINE (58)

    /** symtab.e:392		if inlining then*/
    // SubProg NewTempSym pc: 5 op: IF (20)
    if (_inlining_46790 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24403 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg NewTempSym pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24403);
    if (!IS_ATOM_INT(_34S_TEMPS_14888)){
        _p_46792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
    }
    else{
        _p_46792 = (object)*(((s1_ptr)_2)->base + _34S_TEMPS_14888);
    }
    if (!IS_ATOM_INT(_p_46792)){
        _p_46792 = (object)DBL_PTR(_p_46792)->dbl;
    }
    _24403 = NOVALUE;
    // SubProg NewTempSym pc: 26 op: STARTLINE (58)

    /** symtab.e:394			while p != 0 and SymTab[p][S_SCOPE] != FREE do*/
    // SubProg NewTempSym pc: 28 op: NOP2 (110)
    // SubProg NewTempSym pc: 30 op: NOPWHILE (158)
L2: // addr: 31 pc: 30 sub: 46788 op: 158
    // SubProg NewTempSym pc: 31 op: NOTEQ (4)
    _24405 = (_p_46792 != 0);
    // SubProg NewTempSym pc: 35 op: SC1_AND_IF (146)
    if (_24405 == 0) {
        goto L3; // [35] 93
    }
    // SubProg NewTempSym pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24407 = (object)*(((s1_ptr)_2)->base + _p_46792);
    // SubProg NewTempSym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24407);
    _24408 = (object)*(((s1_ptr)_2)->base + 4);
    _24407 = NOVALUE;
    // SubProg NewTempSym pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_24408)) {
        _24409 = (_24408 != 0);
    }
    else {
        _24409 = binary_op(NOTEQ, _24408, 0);
    }
    _24408 = NOVALUE;
    // SubProg NewTempSym pc: 57 op: NOP1 (159)
    // SubProg NewTempSym pc: 58 op: WHILE (47)
    if (_24409 <= 0) {
        if (_24409 == 0) {
            DeRef(_24409);
            _24409 = NOVALUE;
            goto L3; // [58] 93
        }
        else {
            if (!IS_ATOM_INT(_24409) && DBL_PTR(_24409)->dbl == 0.0){
                DeRef(_24409);
                _24409 = NOVALUE;
                goto L3; // [58] 93
            }
            DeRef(_24409);
            _24409 = NOVALUE;
        }
    }
    DeRef(_24409);
    _24409 = NOVALUE;
    // SubProg NewTempSym pc: 61 op: STARTLINE (58)

    /** symtab.e:395				p = SymTab[p][S_NEXT]*/
    // SubProg NewTempSym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24410 = (object)*(((s1_ptr)_2)->base + _p_46792);
    // SubProg NewTempSym pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24410);
    _p_46792 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_46792)){
        _p_46792 = (object)DBL_PTR(_p_46792)->dbl;
    }
    _24410 = NOVALUE;
    // SubProg NewTempSym pc: 77 op: STARTLINE (58)

    /** symtab.e:396			end while*/
    // SubProg NewTempSym pc: 79 op: ENDWHILE (22)
    goto L2; // [79] 31
    // SubProg NewTempSym pc: 81 op: NOP1 (159)
    // SubProg NewTempSym pc: 82 op: ELSE (23)
    goto L3; // [82] 93
    // SubProg NewTempSym pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 46788 op: 159
    // SubProg NewTempSym pc: 85 op: STARTLINE (58)

    /** symtab.e:398			p = 0*/
    // SubProg NewTempSym pc: 87 op: ASSIGN (18)
    _p_46792 = 0;
    // SubProg NewTempSym pc: 90 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 46788 op: 159
    // SubProg NewTempSym pc: 93 op: STARTLINE (58)

    /** symtab.e:401		if p = 0 then*/
    // SubProg NewTempSym pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewTempSym pc: 97 op: EQUALS_IFW (104)
    if (_p_46792 != 0)
    goto L4; // [97] 213
    // SubProg NewTempSym pc: 101 op: STARTLINE (58)

    /** symtab.e:403			temps_allocated += 1*/
    // SubProg NewTempSym pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 105 op: PLUS1_I (117)
    _53temps_allocated_46787 = _53temps_allocated_46787 + 1;
    // SubProg NewTempSym pc: 109 op: STARTLINE (58)

    /** symtab.e:404			p = tmp_alloc()*/
    // SubProg NewTempSym pc: 111 op: PROC (27)
    _p_46792 = _53tmp_alloc();
    // SubProg NewTempSym pc: 114 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46792)) {
        _1 = (object)(DBL_PTR(_p_46792)->dbl);
        DeRefDS(_p_46792);
        _p_46792 = _1;
    }
    // SubProg NewTempSym pc: 116 op: STARTLINE (58)

    /** symtab.e:405			SymTab[p][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24415 = NOVALUE;
    // SubProg NewTempSym pc: 133 op: STARTLINE (58)

    /** symtab.e:406			SymTab[p][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 137 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24419 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg NewTempSym pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24419);
    if (!IS_ATOM_INT(_34S_TEMPS_14888)){
        _24420 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
    }
    else{
        _24420 = (object)*(((s1_ptr)_2)->base + _34S_TEMPS_14888);
    }
    _24419 = NOVALUE;
    // SubProg NewTempSym pc: 158 op: PASSIGN_SUBS (162)
    Ref(_24420);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24420;
    if( _1 != _24420 ){
        DeRef(_1);
    }
    _24420 = NOVALUE;
    _24417 = NOVALUE;
    // SubProg NewTempSym pc: 162 op: STARTLINE (58)

    /** symtab.e:407			SymTab[CurrentSub][S_TEMPS] = p*/
    // SubProg NewTempSym pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 168 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34CurrentSub_15196 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 175 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_TEMPS_14888))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_TEMPS_14888);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_46792;
    DeRef(_1);
    _24421 = NOVALUE;
    // SubProg NewTempSym pc: 179 op: STARTLINE (58)

    /** symtab.e:409			if inlining then*/
    // SubProg NewTempSym pc: 181 op: IF (20)
    if (_inlining_46790 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34CurrentSub_15196 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 197 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903)){
        _24425 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    }
    else{
        _24425 = (object)*(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    }
    _24423 = NOVALUE;
    // SubProg NewTempSym pc: 201 op: PLUS1 (93)
    if (IS_ATOM_INT(_24425)) {
        _24426 = _24425 + 1;
        if (_24426 > MAXINT){
            _24426 = NewDouble((eudouble)_24426);
        }
    }
    else
    _24426 = binary_op(PLUS, 1, _24425);
    _24425 = NOVALUE;
    // SubProg NewTempSym pc: 205 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_STACK_SPACE_14903))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_STACK_SPACE_14903)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_STACK_SPACE_14903);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24426;
    if( _1 != _24426 ){
        DeRef(_1);
    }
    _24426 = NOVALUE;
    _24423 = NOVALUE;
    // SubProg NewTempSym pc: 209 op: NOP1 (159)
    // SubProg NewTempSym pc: 210 op: ELSE (23)
    goto L5; // [210] 343
    // SubProg NewTempSym pc: 212 op: NOP1 (159)
L4: // addr: 213 pc: 212 sub: 46788 op: 159
    // SubProg NewTempSym pc: 213 op: STARTLINE (58)

    /** symtab.e:413		elsif TRANSLATE then*/
    // SubProg NewTempSym pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 217 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L6; // [217] 342
    }
    else{
    }
    // SubProg NewTempSym pc: 220 op: STARTLINE (58)

    /** symtab.e:418			SymTab[p][S_SCOPE] = DELETED*/
    // SubProg NewTempSym pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24427 = NOVALUE;
    // SubProg NewTempSym pc: 237 op: STARTLINE (58)

    /** symtab.e:420			q = tmp_alloc()*/
    // SubProg NewTempSym pc: 239 op: PROC (27)
    _q_46793 = _53tmp_alloc();
    // SubProg NewTempSym pc: 242 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_q_46793)) {
        _1 = (object)(DBL_PTR(_q_46793)->dbl);
        DeRefDS(_q_46793);
        _q_46793 = _1;
    }
    // SubProg NewTempSym pc: 244 op: STARTLINE (58)

    /** symtab.e:421			SymTab[q][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 248 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46793 + ((s1_ptr)_2)->base);
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
    _24430 = NOVALUE;
    // SubProg NewTempSym pc: 261 op: STARTLINE (58)

    /** symtab.e:422			SymTab[q][S_TEMP_NAME] = SymTab[p][S_TEMP_NAME]*/
    // SubProg NewTempSym pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 265 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46793 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24434 = (object)*(((s1_ptr)_2)->base + _p_46792);
    // SubProg NewTempSym pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 280 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24434);
    _24435 = (object)*(((s1_ptr)_2)->base + 34);
    _24434 = NOVALUE;
    // SubProg NewTempSym pc: 284 op: PASSIGN_SUBS (162)
    Ref(_24435);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24435;
    if( _1 != _24435 ){
        DeRef(_1);
    }
    _24435 = NOVALUE;
    _24432 = NOVALUE;
    // SubProg NewTempSym pc: 288 op: STARTLINE (58)

    /** symtab.e:423			SymTab[q][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 292 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46793 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 303 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24438 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg NewTempSym pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 309 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24438);
    if (!IS_ATOM_INT(_34S_TEMPS_14888)){
        _24439 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
    }
    else{
        _24439 = (object)*(((s1_ptr)_2)->base + _34S_TEMPS_14888);
    }
    _24438 = NOVALUE;
    // SubProg NewTempSym pc: 313 op: PASSIGN_SUBS (162)
    Ref(_24439);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24439;
    if( _1 != _24439 ){
        DeRef(_1);
    }
    _24439 = NOVALUE;
    _24436 = NOVALUE;
    // SubProg NewTempSym pc: 317 op: STARTLINE (58)

    /** symtab.e:424			SymTab[CurrentSub][S_TEMPS] = q*/
    // SubProg NewTempSym pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 323 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34CurrentSub_15196 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 328 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 330 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_TEMPS_14888))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TEMPS_14888)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_TEMPS_14888);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _q_46793;
    DeRef(_1);
    _24440 = NOVALUE;
    // SubProg NewTempSym pc: 334 op: STARTLINE (58)

    /** symtab.e:425			p = q*/
    // SubProg NewTempSym pc: 336 op: ASSIGN (18)
    _p_46792 = _q_46793;
    // SubProg NewTempSym pc: 339 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 341 op: NOP1 (159)
L6: // addr: 342 pc: 341 sub: 46788 op: 159
    // SubProg NewTempSym pc: 342 op: NOP1 (159)
L5: // addr: 343 pc: 342 sub: 46788 op: 159
    // SubProg NewTempSym pc: 343 op: STARTLINE (58)

    /** symtab.e:428		if TRANSLATE then*/
    // SubProg NewTempSym pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 347 op: IF (20)
    if (_34TRANSLATE_14813 == 0)
    {
        goto L7; // [347] 385
    }
    else{
    }
    // SubProg NewTempSym pc: 350 op: STARTLINE (58)

    /** symtab.e:429			SymTab[p][S_GTYPE] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 354 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24442 = NOVALUE;
    // SubProg NewTempSym pc: 367 op: STARTLINE (58)

    /** symtab.e:430			SymTab[p][S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 371 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24444 = NOVALUE;
    // SubProg NewTempSym pc: 384 op: NOP1 (159)
L7: // addr: 385 pc: 384 sub: 46788 op: 159
    // SubProg NewTempSym pc: 385 op: STARTLINE (58)

    /** symtab.e:433		SymTab[p][S_OBJ] = NOVALUE*/
    // SubProg NewTempSym pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 394 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 398 op: PASSIGN_SUBS (162)
    Ref(_34NOVALUE_15043);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34NOVALUE_15043;
    DeRef(_1);
    _24446 = NOVALUE;
    // SubProg NewTempSym pc: 402 op: STARTLINE (58)

    /** symtab.e:434		SymTab[p][S_USAGE] = T_UNKNOWN*/
    // SubProg NewTempSym pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 406 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24448 = NOVALUE;
    // SubProg NewTempSym pc: 419 op: STARTLINE (58)

    /** symtab.e:435		SymTab[p][S_SCOPE] = IN_USE*/
    // SubProg NewTempSym pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 423 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46792 + ((s1_ptr)_2)->base);
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
    _24450 = NOVALUE;
    // SubProg NewTempSym pc: 436 op: STARTLINE (58)

    /** symtab.e:437		return p*/
    // SubProg NewTempSym pc: 438 op: RETURNF (28)

// Exiting block BLOCK: NewTempSym

// block var inlining_46790

// block var q_46793
    DeRef(_24405);
    _24405 = NOVALUE;
    return _p_46792;
    // SubProg NewTempSym pc: 442 op: BADRETURNF (43)
    ;
}


void _53add_ref(object _tok_47143)
{
    object _s_47145 = NOVALUE;
    object _24581 = NOVALUE; // 47171 24581
    object _24580 = NOVALUE; // 47170 24580
// skipping _24579  name type: 0
    object _24578 = NOVALUE; // 47167 24578
    object _24577 = NOVALUE; // 47165 24577
    object _24576 = NOVALUE; // 47164 24576
// skipping _24575  name type: 0
    object _24574 = NOVALUE; // 47160 24574
    object _24573 = NOVALUE; // 47158 24573
    object _24572 = NOVALUE; // 47157 24572
    object _24571 = NOVALUE; // 47156 24571
    object _24570 = NOVALUE; // 47154 24570
    object _24569 = NOVALUE; // 47151 24569
    object _24568 = NOVALUE; // 47150 24568
// skipping _24567  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_ref pc: 1 op: STARTLINE (58)

    /** symtab.e:538		s = tok[T_SYM]*/
    // SubProg add_ref pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47143);
    _s_47145 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_47145)){
        _s_47145 = (object)DBL_PTR(_s_47145)->dbl;
    }
    // SubProg add_ref pc: 11 op: STARTLINE (58)

    /** symtab.e:539		if s != CurrentSub and -- ignore self-ref's*/
    // SubProg add_ref pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 15 op: NOTEQ (4)
    _24568 = (_s_47145 != _34CurrentSub_15196);
    // SubProg add_ref pc: 19 op: SC1_AND_IF (146)
    if (_24568 == 0) {
        goto L1; // [19] 98
    }
    // SubProg add_ref pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24570 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg add_ref pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24570);
    _24571 = (object)*(((s1_ptr)_2)->base + 24);
    _24570 = NOVALUE;
    // SubProg add_ref pc: 37 op: FIND_FROM (176)
    _24572 = find_from(_s_47145, _24571, 1);
    _24571 = NOVALUE;
    // SubProg add_ref pc: 42 op: NOT (7)
    _24573 = (_24572 == 0);
    _24572 = NOVALUE;
    // SubProg add_ref pc: 45 op: NOP1 (159)
    // SubProg add_ref pc: 46 op: IF (20)
    if (_24573 == 0)
    {
        DeRef(_24573);
        _24573 = NOVALUE;
        goto L1; // [46] 98
    }
    else{
        DeRef(_24573);
        _24573 = NOVALUE;
    }
    // SubProg add_ref pc: 49 op: STARTLINE (58)

    /** symtab.e:542			SymTab[s][S_NREFS] += 1*/
    // SubProg add_ref pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 53 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47145 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 60 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24576 = (object)*(((s1_ptr)_2)->base + 12);
    _24574 = NOVALUE;
    // SubProg add_ref pc: 64 op: PLUS1 (93)
    if (IS_ATOM_INT(_24576)) {
        _24577 = _24576 + 1;
        if (_24577 > MAXINT){
            _24577 = NewDouble((eudouble)_24577);
        }
    }
    else
    _24577 = binary_op(PLUS, 1, _24576);
    _24576 = NOVALUE;
    // SubProg add_ref pc: 68 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24577;
    if( _1 != _24577 ){
        DeRef(_1);
    }
    _24577 = NOVALUE;
    _24574 = NOVALUE;
    // SubProg add_ref pc: 72 op: STARTLINE (58)

    /** symtab.e:543			SymTab[CurrentSub][S_REFLIST] &= s*/
    // SubProg add_ref pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_34CurrentSub_15196 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 85 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24580 = (object)*(((s1_ptr)_2)->base + 24);
    _24578 = NOVALUE;
    // SubProg add_ref pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_24580) && IS_ATOM(_s_47145)) {
        Append(&_24581, _24580, _s_47145);
    }
    else if (IS_ATOM(_24580) && IS_SEQUENCE(_s_47145)) {
    }
    else {
        Concat((object_ptr)&_24581, _24580, _s_47145);
        _24580 = NOVALUE;
    }
    _24580 = NOVALUE;
    // SubProg add_ref pc: 93 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24581;
    if( _1 != _24581 ){
        DeRef(_1);
    }
    _24581 = NOVALUE;
    _24578 = NOVALUE;
    // SubProg add_ref pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 47140 op: 159
    // SubProg add_ref pc: 98 op: STARTLINE (58)

    /** symtab.e:545	end procedure*/
    // SubProg add_ref pc: 100 op: RETURNP (29)

// Exiting block BLOCK: add_ref

// block var tok_47143
    DeRef(_tok_47143);

// block var s_47145
    DeRef(_24568);
    _24568 = NOVALUE;
    return;
    // SubProg add_ref pc: 103 op: BADRETURNF (43)
    ;
}


void _53mark_all(object _attribute_47175)
{
    object _p_47178 = NOVALUE;
    object _sym_file_47185 = NOVALUE;
    object _scope_47202 = NOVALUE;
// skipping _24614  name type: 0
    object _24613 = NOVALUE; // 47241 24613
    object _24612 = NOVALUE; // 47239 24612
    object _24611 = NOVALUE; // 47238 24611
// skipping _24610  name type: 0
    object _24609 = NOVALUE; // 47236 24609
// skipping _24608  name type: 0
    object _24607 = NOVALUE; // 47231 24607
    object _24606 = NOVALUE; // 47230 24606
    object _24605 = NOVALUE; // 47229 24605
    object _24604 = NOVALUE; // 47222 24604
    object _24603 = NOVALUE; // 47221 24603
// skipping _24602  name type: 0
    object _24601 = NOVALUE; // 47219 24601
    object _24600 = NOVALUE; // 47217 24600
    object _24599 = NOVALUE; // 47216 24599
    object _24598 = NOVALUE; // 47215 24598
// skipping _24595  name type: 0
    object _24594 = NOVALUE; // 47204 24594
    object _24593 = NOVALUE; // 47200 24593
    object _24592 = NOVALUE; // 47199 24592
// skipping _24591  name type: 0
    object _24590 = NOVALUE; // 47197 24590
    object _24589 = NOVALUE; // 47195 24589
// skipping _24588  name type: 0
    object _24587 = NOVALUE; // 47192 24587
// skipping _24586  name type: 0
    object _24585 = NOVALUE; // 47187 24585
// skipping _24584  name type: 0
// skipping _24583  name type: 0
    object _24582 = NOVALUE; // 47180 24582
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg mark_all pc: 1 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 3 op: STARTLINE (58)

    /** symtab.e:550		if just_mark_everything_from then*/
    // SubProg mark_all pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 7 op: IF (20)
    if (_53just_mark_everything_from_47172 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24582 = (object)*(((s1_ptr)_2)->base + _53just_mark_everything_from_47172);
    // SubProg mark_all pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24582);
    _p_47178 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47178)){
        _p_47178 = (object)DBL_PTR(_p_47178)->dbl;
    }
    _24582 = NOVALUE;
    // SubProg mark_all pc: 28 op: STARTLINE (58)

    /** symtab.e:552			while p != 0 do*/
    // SubProg mark_all pc: 30 op: NOP2 (110)
    // SubProg mark_all pc: 32 op: NOPWHILE (158)
L2: // addr: 33 pc: 32 sub: 47173 op: 158
    // SubProg mark_all pc: 33 op: NOTEQ_IFW (105)
    if (_p_47178 == 0)
    goto L3; // [33] 269
    // SubProg mark_all pc: 37 op: STARTLINE (58)

    /** symtab.e:553				integer sym_file = SymTab[p][S_FILE_NO]*/
    // SubProg mark_all pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24585 = (object)*(((s1_ptr)_2)->base + _p_47178);
    // SubProg mark_all pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24585);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _sym_file_47185 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _sym_file_47185 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_sym_file_47185)){
        _sym_file_47185 = (object)DBL_PTR(_sym_file_47185)->dbl;
    }
    _24585 = NOVALUE;
    // SubProg mark_all pc: 53 op: STARTLINE (58)

    /** symtab.e:554				just_mark_everything_from = p*/
    // SubProg mark_all pc: 55 op: ASSIGN (18)
    _53just_mark_everything_from_47172 = _p_47178;
    // SubProg mark_all pc: 58 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 60 op: STARTLINE (58)

    /** symtab.e:555				if sym_file = current_file_no or map:has( recheck_routines, sym_file ) then*/
    // SubProg mark_all pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 64 op: EQUALS (3)
    _24587 = (_sym_file_47185 == _34current_file_no_15188);
    // SubProg mark_all pc: 68 op: SC1_OR_IF (147)
    if (_24587 != 0) {
        goto L4; // [68] 84
    }
    // SubProg mark_all pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 74 op: PROC (27)
    Ref(_53recheck_routines_47245);
    _24589 = _28has(_53recheck_routines_47245, _sym_file_47185);
    // SubProg mark_all pc: 79 op: NOP1 (159)
    // SubProg mark_all pc: 80 op: IF (20)
    if (_24589 == 0) {
        DeRef(_24589);
        _24589 = NOVALUE;
        goto L5; // [80] 108
    }
    else {
        if (!IS_ATOM_INT(_24589) && DBL_PTR(_24589)->dbl == 0.0){
            DeRef(_24589);
            _24589 = NOVALUE;
            goto L5; // [80] 108
        }
        DeRef(_24589);
        _24589 = NOVALUE;
    }
    DeRef(_24589);
    _24589 = NOVALUE;
    // SubProg mark_all pc: 83 op: NOP1 (159)
L4: // addr: 84 pc: 83 sub: 47173 op: 159
    // SubProg mark_all pc: 84 op: STARTLINE (58)

    /** symtab.e:556					SymTab[p][attribute] += 1*/
    // SubProg mark_all pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 88 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_47178 + ((s1_ptr)_2)->base);
    // SubProg mark_all pc: 93 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24592 = (object)*(((s1_ptr)_2)->base + _attribute_47175);
    _24590 = NOVALUE;
    // SubProg mark_all pc: 97 op: PLUS1 (93)
    if (IS_ATOM_INT(_24592)) {
        _24593 = _24592 + 1;
        if (_24593 > MAXINT){
            _24593 = NewDouble((eudouble)_24593);
        }
    }
    else
    _24593 = binary_op(PLUS, 1, _24592);
    _24592 = NOVALUE;
    // SubProg mark_all pc: 101 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47175);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24593;
    if( _1 != _24593 ){
        DeRef(_1);
    }
    _24593 = NOVALUE;
    _24590 = NOVALUE;
    // SubProg mark_all pc: 105 op: ELSE (23)
    goto L6; // [105] 246
    // SubProg mark_all pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 47173 op: 159
    // SubProg mark_all pc: 108 op: STARTLINE (58)

    /** symtab.e:558					integer scope = SymTab[p][S_SCOPE]*/
    // SubProg mark_all pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24594 = (object)*(((s1_ptr)_2)->base + _p_47178);
    // SubProg mark_all pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24594);
    _scope_47202 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47202)){
        _scope_47202 = (object)DBL_PTR(_scope_47202)->dbl;
    }
    _24594 = NOVALUE;
    // SubProg mark_all pc: 124 op: STARTLINE (58)

    /** symtab.e:559					switch scope with fallthru do*/
    // SubProg mark_all pc: 126 op: SWITCH_I (193)
    _0 = _scope_47202;
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
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24598 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
        // SubProg mark_all pc: 147 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24598);
        _24599 = (object)*(((s1_ptr)_2)->base + _sym_file_47185);
        _24598 = NOVALUE;
        // SubProg mark_all pc: 151 op: AND_BITS (56)
        if (IS_ATOM_INT(_24599)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24599;
                 _24600 = MAKE_UINT(tu);
            }
        }
        else {
            _24600 = binary_op(AND_BITS, 6, _24599);
        }
        _24599 = NOVALUE;
        // SubProg mark_all pc: 155 op: IF (20)
        if (_24600 == 0) {
            DeRef(_24600);
            _24600 = NOVALUE;
            goto L7; // [155] 243
        }
        else {
            if (!IS_ATOM_INT(_24600) && DBL_PTR(_24600)->dbl == 0.0){
                DeRef(_24600);
                _24600 = NOVALUE;
                goto L7; // [155] 243
            }
            DeRef(_24600);
            _24600 = NOVALUE;
        }
        DeRef(_24600);
        _24600 = NOVALUE;
        // SubProg mark_all pc: 158 op: STARTLINE (58)

        /** symtab.e:562								SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 160 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 162 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47178 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 167 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24603 = (object)*(((s1_ptr)_2)->base + _attribute_47175);
        _24601 = NOVALUE;
        // SubProg mark_all pc: 171 op: PLUS1 (93)
        if (IS_ATOM_INT(_24603)) {
            _24604 = _24603 + 1;
            if (_24604 > MAXINT){
                _24604 = NewDouble((eudouble)_24604);
            }
        }
        else
        _24604 = binary_op(PLUS, 1, _24603);
        _24603 = NOVALUE;
        // SubProg mark_all pc: 175 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47175);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24604;
        if( _1 != _24604 ){
            DeRef(_1);
        }
        _24604 = NOVALUE;
        _24601 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24605 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
        // SubProg mark_all pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24605);
        _24606 = (object)*(((s1_ptr)_2)->base + _sym_file_47185);
        _24605 = NOVALUE;
        // SubProg mark_all pc: 204 op: AND_BITS (56)
        if (IS_ATOM_INT(_24606)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24606;
                 _24607 = MAKE_UINT(tu);
            }
        }
        else {
            _24607 = binary_op(AND_BITS, 2, _24606);
        }
        _24606 = NOVALUE;
        // SubProg mark_all pc: 208 op: NOT_IFW (108)
        if (IS_ATOM_INT(_24607)) {
            if (_24607 != 0){
                DeRef(_24607);
                _24607 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        else {
            if (DBL_PTR(_24607)->dbl != 0.0){
                DeRef(_24607);
                _24607 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        DeRef(_24607);
        _24607 = NOVALUE;
        // SubProg mark_all pc: 211 op: STARTLINE (58)

        /** symtab.e:567								break*/
        // SubProg mark_all pc: 213 op: ELSE (23)
        goto L9; // [213] 217
        // SubProg mark_all pc: 215 op: NOP1 (159)
L8: // addr: 216 pc: 215 sub: 47173 op: 159
        // SubProg mark_all pc: 216 op: NOP1 (159)
L9: // addr: 217 pc: 216 sub: 47173 op: 159
        // SubProg mark_all pc: 217 op: STARTLINE (58)

        /** symtab.e:570						case SC_GLOBAL then*/
        // SubProg mark_all pc: 219 op: CASE (186)
        case 6:
        // SubProg mark_all pc: 221 op: STARTLINE (58)

        /** symtab.e:571							SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 225 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _35SymTab_14156 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47178 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 230 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24611 = (object)*(((s1_ptr)_2)->base + _attribute_47175);
        _24609 = NOVALUE;
        // SubProg mark_all pc: 234 op: PLUS1 (93)
        if (IS_ATOM_INT(_24611)) {
            _24612 = _24611 + 1;
            if (_24612 > MAXINT){
                _24612 = NewDouble((eudouble)_24612);
            }
        }
        else
        _24612 = binary_op(PLUS, 1, _24611);
        _24611 = NOVALUE;
        // SubProg mark_all pc: 238 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47175);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24612;
        if( _1 != _24612 ){
            DeRef(_1);
        }
        _24612 = NOVALUE;
        _24609 = NOVALUE;
        // SubProg mark_all pc: 242 op: NOPSWITCH (187)
    ;}L7: // addr: 243 pc: 242 sub: 47173 op: 187
    // SubProg mark_all pc: 243 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var scope_47202
    // SubProg mark_all pc: 245 op: NOP1 (159)
L6: // addr: 246 pc: 245 sub: 47173 op: 159
    // SubProg mark_all pc: 246 op: STARTLINE (58)

    /** symtab.e:575				p = SymTab[p][S_NEXT]*/
    // SubProg mark_all pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24613 = (object)*(((s1_ptr)_2)->base + _p_47178);
    // SubProg mark_all pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 256 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24613);
    _p_47178 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47178)){
        _p_47178 = (object)DBL_PTR(_p_47178)->dbl;
    }
    _24613 = NOVALUE;
    // SubProg mark_all pc: 262 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var sym_file_47185
    // SubProg mark_all pc: 264 op: STARTLINE (58)

    /** symtab.e:576			end while*/
    // SubProg mark_all pc: 266 op: ENDWHILE (22)
    goto L2; // [266] 33
    // SubProg mark_all pc: 268 op: NOP1 (159)
L3: // addr: 269 pc: 268 sub: 47173 op: 159
    // SubProg mark_all pc: 269 op: NOP1 (159)
L1: // addr: 270 pc: 269 sub: 47173 op: 159
    // SubProg mark_all pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var p_47178
    // SubProg mark_all pc: 272 op: STARTLINE (58)

    /** symtab.e:578	end procedure*/
    // SubProg mark_all pc: 274 op: RETURNP (29)

// Exiting block BLOCK: mark_all

// block var attribute_47175
    DeRef(_24587);
    _24587 = NOVALUE;
    return;
    // SubProg mark_all pc: 277 op: BADRETURNF (43)
    ;
}


void _53mark_rechecks(object _file_no_47251)
{
    object _recheck_targets_47254 = NOVALUE;
    object _remaining_47258 = NOVALUE;
    object _marked_47262 = NOVALUE;
// skipping _24623  name type: 0
// skipping _24622  name type: 0
// skipping _24621  name type: 0
    object _24620 = NOVALUE; // 47272 24620
// skipping _24619  name type: 0
    object _24618 = NOVALUE; // 47266 24618
    object _24617 = NOVALUE; // 47261 24617
    object _24616 = NOVALUE; // 47257 24616
// skipping _24615  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg mark_rechecks pc: 1 op: INTEGER_CHECK (96)
    // SubProg mark_rechecks pc: 3 op: STARTLINE (58)

    /** symtab.e:584		sequence recheck_targets = map:get( recheck_routines, file_no, {} )*/
    // SubProg mark_rechecks pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 7 op: PROC (27)
    Ref(_53recheck_routines_47245);
    RefDS(_21936);
    _0 = _recheck_targets_47254;
    _recheck_targets_47254 = _28get(_53recheck_routines_47245, _file_no_47251, _21936);
    DeRef(_0);
    // SubProg mark_rechecks pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 15 op: STARTLINE (58)

    /** symtab.e:585		if length( recheck_targets ) then*/
    // SubProg mark_rechecks pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47254)){
            _24616 = SEQ_PTR(_recheck_targets_47254)->length;
    }
    else {
        _24616 = 1;
    }
    // SubProg mark_rechecks pc: 20 op: IF (20)
    if (_24616 == 0)
    {
        _24616 = NOVALUE;
        goto L1; // [20] 129
    }
    else{
        _24616 = NOVALUE;
    }
    // SubProg mark_rechecks pc: 23 op: STARTLINE (58)

    /** symtab.e:586			sequence remaining = {}*/
    // SubProg mark_rechecks pc: 25 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_remaining_47258);
    _remaining_47258 = _21936;
    // SubProg mark_rechecks pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 30 op: STARTLINE (58)

    /** symtab.e:587			for i = length( recheck_targets ) to 1 by -1 do*/
    // SubProg mark_rechecks pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47254)){
            _24617 = SEQ_PTR(_recheck_targets_47254)->length;
    }
    else {
        _24617 = 1;
    }
    // SubProg mark_rechecks pc: 35 op: FOR_I (125)
    {
        object _i_47260;
        _i_47260 = _24617;
L2: // addr: 42 pc: 35 sub: 47249 op: 125
        if (_i_47260 < 1){
            goto L3; // [35] 117
        }
        // SubProg mark_rechecks pc: 42 op: STARTLINE (58)

        /** symtab.e:588				integer marked = 0*/
        // SubProg mark_rechecks pc: 44 op: ASSIGN_I (113)
        _marked_47262 = 0;
        // SubProg mark_rechecks pc: 47 op: STARTLINE (58)

        /** symtab.e:589				if TRANSLATE then*/
        // SubProg mark_rechecks pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 51 op: IF (20)
        if (_34TRANSLATE_14813 == 0)
        {
            goto L4; // [51] 72
        }
        else{
        }
        // SubProg mark_rechecks pc: 54 op: STARTLINE (58)

        /** symtab.e:590					marked = MarkTargets( recheck_targets[i], S_RI_TARGET )*/
        // SubProg mark_rechecks pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47254);
        _24618 = (object)*(((s1_ptr)_2)->base + _i_47260);
        // SubProg mark_rechecks pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 62 op: PROC (27)
        Ref(_24618);
        _marked_47262 = _53MarkTargets(_24618, 53);
        _24618 = NOVALUE;
        // SubProg mark_rechecks pc: 67 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47262)) {
            _1 = (object)(DBL_PTR(_marked_47262)->dbl);
            DeRefDS(_marked_47262);
            _marked_47262 = _1;
        }
        // SubProg mark_rechecks pc: 69 op: ELSE (23)
        goto L5; // [69] 96
        // SubProg mark_rechecks pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 47249 op: 159
        // SubProg mark_rechecks pc: 72 op: STARTLINE (58)

        /** symtab.e:591				elsif BIND then*/
        // SubProg mark_rechecks pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 76 op: IF (20)
        if (_34BIND_14816 == 0)
        {
            goto L6; // [76] 95
        }
        else{
        }
        // SubProg mark_rechecks pc: 79 op: STARTLINE (58)

        /** symtab.e:592					marked = MarkTargets( recheck_targets[i], S_NREFS )*/
        // SubProg mark_rechecks pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47254);
        _24620 = (object)*(((s1_ptr)_2)->base + _i_47260);
        // SubProg mark_rechecks pc: 85 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 87 op: PROC (27)
        Ref(_24620);
        _marked_47262 = _53MarkTargets(_24620, 12);
        _24620 = NOVALUE;
        // SubProg mark_rechecks pc: 92 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47262)) {
            _1 = (object)(DBL_PTR(_marked_47262)->dbl);
            DeRefDS(_marked_47262);
            _marked_47262 = _1;
        }
        // SubProg mark_rechecks pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 47249 op: 159
        // SubProg mark_rechecks pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 47249 op: 159
        // SubProg mark_rechecks pc: 96 op: STARTLINE (58)

        /** symtab.e:594				if not marked then*/
        // SubProg mark_rechecks pc: 98 op: NOT_IFW (108)
        if (_marked_47262 != 0)
        goto L7; // [98] 108
        // SubProg mark_rechecks pc: 101 op: STARTLINE (58)

        /** symtab.e:595					remaining &= file_no*/
        // SubProg mark_rechecks pc: 103 op: CONCAT (15)
        Append(&_remaining_47258, _remaining_47258, _file_no_47251);
        // SubProg mark_rechecks pc: 107 op: NOP1 (159)
L7: // addr: 108 pc: 107 sub: 47249 op: 159
        // SubProg mark_rechecks pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var marked_47262
        // SubProg mark_rechecks pc: 110 op: STARTLINE (58)

        /** symtab.e:597			end for*/
        // SubProg mark_rechecks pc: 112 op: ENDFOR_GENERAL (39)
        _i_47260 = _i_47260 + -1;
        goto L2; // [112] 42
L3: // addr: 117 pc: 112 sub: 47249 op: 39
        ;
    }
    // SubProg mark_rechecks pc: 117 op: STARTLINE (58)

    /** symtab.e:598			map:put( recheck_routines, file_no, recheck_targets )*/
    // SubProg mark_rechecks pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 121 op: PROC (27)
    Ref(_53recheck_routines_47245);
    RefDS(_recheck_targets_47254);
    _28put(_53recheck_routines_47245, _file_no_47251, _recheck_targets_47254, 1, 0);
    // SubProg mark_rechecks pc: 128 op: NOP1 (159)
L1: // addr: 129 pc: 128 sub: 47249 op: 159
    // SubProg mark_rechecks pc: 129 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var remaining_47258
    DeRefi(_remaining_47258);
    _remaining_47258 = NOVALUE;
    // SubProg mark_rechecks pc: 131 op: STARTLINE (58)

    /** symtab.e:600	end procedure*/
    // SubProg mark_rechecks pc: 133 op: RETURNP (29)

// Exiting block BLOCK: mark_rechecks

// block var file_no_47251

// block var recheck_targets_47254
    DeRef(_recheck_targets_47254);
    return;
    // SubProg mark_rechecks pc: 136 op: BADRETURNF (43)
    ;
}


object _53is_routine(object _sym_47300)
{
    object _tok_47301 = NOVALUE;
// skipping _24627  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_routine pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_routine pc: 3 op: STARTLINE (58)

    /** symtab.e:618		integer tok = sym_token( sym )*/
    // SubProg is_routine pc: 5 op: PROC (27)
    _tok_47301 = _53sym_token(_sym_47300);
    // SubProg is_routine pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tok_47301)) {
        _1 = (object)(DBL_PTR(_tok_47301)->dbl);
        DeRefDS(_tok_47301);
        _tok_47301 = _1;
    }
    // SubProg is_routine pc: 11 op: STARTLINE (58)

    /** symtab.e:619		switch tok do*/
    // SubProg is_routine pc: 13 op: SWITCH_I (193)
    _0 = _tok_47301;
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

// block var sym_47300

// block var tok_47301
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

// block var sym_47300

// block var tok_47301
        return 0;
        // SubProg is_routine pc: 44 op: NOPSWITCH (187)
    ;}L1: // addr: 45 pc: 44 sub: 47297 op: 187
    // SubProg is_routine pc: 45 op: BADRETURNF (43)
    ;
}


object _53is_visible(object _sym_47314, object _from_file_47315)
{
    object _scope_47316 = NOVALUE;
    object _sym_file_47319 = NOVALUE;
    object _visible_mask_47324 = NOVALUE;
    object _24638 = NOVALUE; // 47340 24638
    object _24637 = NOVALUE; // 47339 24637
    object _24636 = NOVALUE; // 47338 24636
    object _24635 = NOVALUE; // 47336 24635
// skipping _24632  name type: 0
    object _24631 = NOVALUE; // 47321 24631
// skipping _24630  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_visible pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 3 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 5 op: STARTLINE (58)

    /** symtab.e:628		integer scope = sym_scope( sym )*/
    // SubProg is_visible pc: 7 op: PROC (27)
    _scope_47316 = _53sym_scope(_sym_47314);
    // SubProg is_visible pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_scope_47316)) {
        _1 = (object)(DBL_PTR(_scope_47316)->dbl);
        DeRefDS(_scope_47316);
        _scope_47316 = _1;
    }
    // SubProg is_visible pc: 13 op: STARTLINE (58)

    /** symtab.e:629		integer sym_file = SymTab[sym][S_FILE_NO]*/
    // SubProg is_visible pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24631 = (object)*(((s1_ptr)_2)->base + _sym_47314);
    // SubProg is_visible pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24631);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _sym_file_47319 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _sym_file_47319 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_sym_file_47319)){
        _sym_file_47319 = (object)DBL_PTR(_sym_file_47319)->dbl;
    }
    _24631 = NOVALUE;
    // SubProg is_visible pc: 29 op: STARTLINE (58)

    /** symtab.e:631		switch scope do*/
    // SubProg is_visible pc: 31 op: SWITCH_I (193)
    _0 = _scope_47316;
    switch ( _0 ){ 
        // SubProg is_visible pc: 36 op: STARTLINE (58)

        /** symtab.e:632			case SC_PUBLIC then*/
        // SubProg is_visible pc: 38 op: CASE (186)
        case 13:
        // SubProg is_visible pc: 40 op: STARTLINE (58)

        /** symtab.e:633				visible_mask = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg is_visible pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg is_visible pc: 44 op: ASSIGN (18)
        _visible_mask_47324 = 6;
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
        _visible_mask_47324 = 2;
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

// block var sym_47314

// block var from_file_47315

// block var scope_47316

// block var sym_file_47319

// block var visible_mask_47324
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
        _24635 = (_from_file_47315 == _sym_file_47319);
        // SubProg is_visible pc: 88 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47314

// block var from_file_47315

// block var scope_47316

// block var sym_file_47319

// block var visible_mask_47324
        return _24635;
        // SubProg is_visible pc: 92 op: NOPSWITCH (187)
    ;}L1: // addr: 93 pc: 92 sub: 47311 op: 187
    // SubProg is_visible pc: 93 op: STARTLINE (58)

    /** symtab.e:641		return and_bits( visible_mask, include_matrix[from_file][sym_file] )*/
    // SubProg is_visible pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg is_visible pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 99 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _24636 = (object)*(((s1_ptr)_2)->base + _from_file_47315);
    // SubProg is_visible pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24636);
    _24637 = (object)*(((s1_ptr)_2)->base + _sym_file_47319);
    _24636 = NOVALUE;
    // SubProg is_visible pc: 107 op: AND_BITS (56)
    if (IS_ATOM_INT(_24637)) {
        {uintptr_t tu;
             tu = (uintptr_t)_visible_mask_47324 & (uintptr_t)_24637;
             _24638 = MAKE_UINT(tu);
        }
    }
    else {
        _24638 = binary_op(AND_BITS, _visible_mask_47324, _24637);
    }
    _24637 = NOVALUE;
    // SubProg is_visible pc: 111 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47314

// block var from_file_47315

// block var scope_47316

// block var sym_file_47319

// block var visible_mask_47324
    DeRef(_24635);
    _24635 = NOVALUE;
    return _24638;
    // SubProg is_visible pc: 115 op: BADRETURNF (43)
    ;
}


object _53MarkTargets(object _s_47344, object _attribute_47345)
{
    object _p_47347 = NOVALUE;
    object _sname_47348 = NOVALUE;
    object _string_47349 = NOVALUE;
    object _colon_47350 = NOVALUE;
    object _h_47351 = NOVALUE;
    object _scope_47352 = NOVALUE;
    object _found_47373 = NOVALUE;
// skipping _24689  name type: 0
// skipping _24688  name type: 0
// skipping _24687  name type: 0
    object _24686 = NOVALUE; // 47433 24686
// skipping _24685  name type: 0
    object _24684 = NOVALUE; // 47430 24684
    object _24683 = NOVALUE; // 47428 24683
    object _24682 = NOVALUE; // 47424 24682
    object _24681 = NOVALUE; // 47423 24681
// skipping _24680  name type: 0
    object _24679 = NOVALUE; // 47421 24679
    object _24678 = NOVALUE; // 47419 24678
    object _24677 = NOVALUE; // 47417 24677
    object _24676 = NOVALUE; // 47416 24676
    object _24675 = NOVALUE; // 47414 24675
// skipping _24674  name type: 0
    object _24673 = NOVALUE; // 47407 24673
    object _24672 = NOVALUE; // 47406 24672
    object _24671 = NOVALUE; // 47404 24671
// skipping _24670  name type: 0
    object _24669 = NOVALUE; // 47399 24669
// skipping _24668  name type: 0
    object _24667 = NOVALUE; // 47397 24667
// skipping _24666  name type: 0
    object _24665 = NOVALUE; // 47394 24665
    object _24664 = NOVALUE; // 47393 24664
    object _24663 = NOVALUE; // 47392 24663
    object _24662 = NOVALUE; // 47391 24662
// skipping _24661  name type: 0
    object _24660 = NOVALUE; // 47389 24660
    object _24659 = NOVALUE; // 47388 24659
    object _24658 = NOVALUE; // 47387 24658
    object _24657 = NOVALUE; // 47386 24657
// skipping _24656  name type: 0
    object _24655 = NOVALUE; // 47383 24655
    object _24654 = NOVALUE; // 47382 24654
// skipping _24653  name type: 0
// skipping _24652  name type: 0
// skipping _24651  name type: 0
    object _24650 = NOVALUE; // 47375 24650
    object _24649 = NOVALUE; // 47372 24649
    object _24648 = NOVALUE; // 47371 24648
    object _24647 = NOVALUE; // 47369 24647
    object _24646 = NOVALUE; // 47367 24646
    object _24645 = NOVALUE; // 47366 24645
    object _24644 = NOVALUE; // 47364 24644
    object _24643 = NOVALUE; // 47362 24643
    object _24642 = NOVALUE; // 47360 24642
    object _24641 = NOVALUE; // 47359 24641
    object _24640 = NOVALUE; // 47357 24640
    object _24639 = NOVALUE; // 47355 24639
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg MarkTargets pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47344)) {
        _1 = (object)(DBL_PTR(_s_47344)->dbl);
        DeRefDS(_s_47344);
        _s_47344 = _1;
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24639 = (object)*(((s1_ptr)_2)->base + _s_47344);
    // SubProg MarkTargets pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24639);
    _24640 = (object)*(((s1_ptr)_2)->base + 3);
    _24639 = NOVALUE;
    // SubProg MarkTargets pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 29 op: EQUALS (3)
    if (IS_ATOM_INT(_24640)) {
        _24641 = (_24640 == 3);
    }
    else {
        _24641 = binary_op(EQUALS, _24640, 3);
    }
    _24640 = NOVALUE;
    // SubProg MarkTargets pc: 33 op: SC1_OR (143)
    if (IS_ATOM_INT(_24641)) {
        if (_24641 != 0) {
            _24642 = 1;
            goto L1; // [33] 59
        }
    }
    else {
        if (DBL_PTR(_24641)->dbl != 0.0) {
            _24642 = 1;
            goto L1; // [33] 59
        }
    }
    // SubProg MarkTargets pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24643 = (object)*(((s1_ptr)_2)->base + _s_47344);
    // SubProg MarkTargets pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24643);
    _24644 = (object)*(((s1_ptr)_2)->base + 3);
    _24643 = NOVALUE;
    // SubProg MarkTargets pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 51 op: EQUALS (3)
    if (IS_ATOM_INT(_24644)) {
        _24645 = (_24644 == 2);
    }
    else {
        _24645 = binary_op(EQUALS, _24644, 2);
    }
    _24644 = NOVALUE;
    // SubProg MarkTargets pc: 55 op: SC2_OR (144)
    DeRef(_24642);
    if (IS_ATOM_INT(_24645))
    _24642 = (_24645 != 0);
    else
    _24642 = DBL_PTR(_24645)->dbl != 0.0;
    // SubProg MarkTargets pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 47341 op: 159
    // SubProg MarkTargets pc: 59 op: SC1_AND_IF (146)
    if (_24642 == 0) {
        goto L2; // [59] 411
    }
    // SubProg MarkTargets pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24647 = (object)*(((s1_ptr)_2)->base + _s_47344);
    // SubProg MarkTargets pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24647);
    _24648 = (object)*(((s1_ptr)_2)->base + 1);
    _24647 = NOVALUE;
    // SubProg MarkTargets pc: 75 op: IS_A_SEQUENCE (68)
    _24649 = IS_SEQUENCE(_24648);
    _24648 = NOVALUE;
    // SubProg MarkTargets pc: 78 op: NOP1 (159)
    // SubProg MarkTargets pc: 79 op: IF (20)
    if (_24649 == 0)
    {
        _24649 = NOVALUE;
        goto L2; // [79] 411
    }
    else{
        _24649 = NOVALUE;
    }
    // SubProg MarkTargets pc: 82 op: STARTLINE (58)

    /** symtab.e:658			integer found = 0*/
    // SubProg MarkTargets pc: 84 op: ASSIGN_I (113)
    _found_47373 = 0;
    // SubProg MarkTargets pc: 87 op: STARTLINE (58)

    /** symtab.e:660			string = SymTab[s][S_OBJ]*/
    // SubProg MarkTargets pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24650 = (object)*(((s1_ptr)_2)->base + _s_47344);
    // SubProg MarkTargets pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 97 op: RHS_SUBS_CHECK (92)
    DeRef(_string_47349);
    _2 = (object)SEQ_PTR(_24650);
    _string_47349 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_string_47349);
    _24650 = NOVALUE;
    // SubProg MarkTargets pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 103 op: STARTLINE (58)

    /** symtab.e:661			colon = find(':', string)*/
    // SubProg MarkTargets pc: 105 op: FIND_FROM (176)
    _colon_47350 = find_from(58, _string_47349, 1);
    // SubProg MarkTargets pc: 110 op: STARTLINE (58)

    /** symtab.e:662			if colon = 0 then*/
    // SubProg MarkTargets pc: 112 op: EQUALS_IFW_I (121)
    if (_colon_47350 != 0)
    goto L3; // [112] 126
    // SubProg MarkTargets pc: 116 op: STARTLINE (58)

    /** symtab.e:663				sname = string*/
    // SubProg MarkTargets pc: 118 op: ASSIGN (18)
    RefDS(_string_47349);
    DeRef(_sname_47348);
    _sname_47348 = _string_47349;
    // SubProg MarkTargets pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 123 op: ELSE (23)
    goto L4; // [123] 200
    // SubProg MarkTargets pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 47341 op: 159
    // SubProg MarkTargets pc: 126 op: STARTLINE (58)

    /** symtab.e:665				sname = string[colon+1..$]  -- ignore namespace part*/
    // SubProg MarkTargets pc: 128 op: PLUS1 (93)
    _24654 = _colon_47350 + 1;
    if (_24654 > MAXINT){
        _24654 = NewDouble((eudouble)_24654);
    }
    // SubProg MarkTargets pc: 132 op: LENGTH (42)
    if (IS_SEQUENCE(_string_47349)){
            _24655 = SEQ_PTR(_string_47349)->length;
    }
    else {
        _24655 = 1;
    }
    // SubProg MarkTargets pc: 135 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_sname_47348;
    RHS_Slice(_string_47349, _24654, _24655);
    // SubProg MarkTargets pc: 140 op: STARTLINE (58)

    /** symtab.e:666				while length(sname) and sname[1] = ' ' or sname[1] = '\t' do*/
    // SubProg MarkTargets pc: 142 op: NOP2 (110)
    // SubProg MarkTargets pc: 144 op: NOPWHILE (158)
L5: // addr: 145 pc: 144 sub: 47341 op: 158
    // SubProg MarkTargets pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47348)){
            _24657 = SEQ_PTR(_sname_47348)->length;
    }
    else {
        _24657 = 1;
    }
    // SubProg MarkTargets pc: 148 op: SC1_AND (141)
    if (_24657 == 0) {
        _24658 = 0;
        goto L6; // [148] 164
    }
    // SubProg MarkTargets pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47348);
    _24659 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 156 op: EQUALS (3)
    if (IS_ATOM_INT(_24659)) {
        _24660 = (_24659 == 32);
    }
    else {
        _24660 = binary_op(EQUALS, _24659, 32);
    }
    _24659 = NOVALUE;
    // SubProg MarkTargets pc: 160 op: SC2_AND (142)
    if (IS_ATOM_INT(_24660))
    _24658 = (_24660 != 0);
    else
    _24658 = DBL_PTR(_24660)->dbl != 0.0;
    // SubProg MarkTargets pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 47341 op: 159
    // SubProg MarkTargets pc: 164 op: SC1_OR_IF (147)
    if (_24658 != 0) {
        goto L7; // [164] 181
    }
    // SubProg MarkTargets pc: 168 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47348);
    _24662 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 172 op: EQUALS (3)
    if (IS_ATOM_INT(_24662)) {
        _24663 = (_24662 == 9);
    }
    else {
        _24663 = binary_op(EQUALS, _24662, 9);
    }
    _24662 = NOVALUE;
    // SubProg MarkTargets pc: 176 op: NOP1 (159)
    // SubProg MarkTargets pc: 177 op: WHILE (47)
    if (_24663 <= 0) {
        if (_24663 == 0) {
            DeRef(_24663);
            _24663 = NOVALUE;
            goto L8; // [177] 199
        }
        else {
            if (!IS_ATOM_INT(_24663) && DBL_PTR(_24663)->dbl == 0.0){
                DeRef(_24663);
                _24663 = NOVALUE;
                goto L8; // [177] 199
            }
            DeRef(_24663);
            _24663 = NOVALUE;
        }
    }
    DeRef(_24663);
    _24663 = NOVALUE;
    // SubProg MarkTargets pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 47341 op: 159
    // SubProg MarkTargets pc: 181 op: STARTLINE (58)

    /** symtab.e:667					sname = tail( sname, length( sname ) -1 )*/
    // SubProg MarkTargets pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47348)){
            _24664 = SEQ_PTR(_sname_47348)->length;
    }
    else {
        _24664 = 1;
    }
    // SubProg MarkTargets pc: 186 op: MINUS (10)
    _24665 = _24664 - 1;
    _24664 = NOVALUE;
    // SubProg MarkTargets pc: 190 op: TAIL (199)
    {
        int len = SEQ_PTR(_sname_47348)->length;
        int size = (IS_ATOM_INT(_24665)) ? _24665 : (object)(DBL_PTR(_24665)->dbl);
        if (size <= 0) {
            DeRef(_sname_47348);
            _sname_47348 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_sname_47348);
            DeRef(_sname_47348);
            _sname_47348 = _sname_47348;
        }
        else Tail(SEQ_PTR(_sname_47348), len-size+1, &_sname_47348);
    }
    _24665 = NOVALUE;
    // SubProg MarkTargets pc: 194 op: STARTLINE (58)

    /** symtab.e:668				end while*/
    // SubProg MarkTargets pc: 196 op: ENDWHILE (22)
    goto L5; // [196] 145
    // SubProg MarkTargets pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 47341 op: 159
    // SubProg MarkTargets pc: 199 op: NOP1 (159)
L4: // addr: 200 pc: 199 sub: 47341 op: 159
    // SubProg MarkTargets pc: 200 op: STARTLINE (58)

    /** symtab.e:671			if length(sname) = 0 then*/
    // SubProg MarkTargets pc: 202 op: PRIVATE_INIT_CHECK (30)
    // SubProg MarkTargets pc: 204 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47348)){
            _24667 = SEQ_PTR(_sname_47348)->length;
    }
    else {
        _24667 = 1;
    }
    // SubProg MarkTargets pc: 207 op: EQUALS_IFW_I (121)
    if (_24667 != 0)
    goto L9; // [207] 218
    // SubProg MarkTargets pc: 211 op: STARTLINE (58)

    /** symtab.e:672				return 1*/
    // SubProg MarkTargets pc: 213 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var found_47373

// Exiting block BLOCK: MarkTargets

// block var s_47344

// block var attribute_47345

// block var sname_47348
    DeRefDS(_sname_47348);

// block var string_47349
    DeRef(_string_47349);

// block var colon_47350

// block var h_47351
    DeRef(_24654);
    _24654 = NOVALUE;
    DeRef(_24641);
    _24641 = NOVALUE;
    DeRef(_24645);
    _24645 = NOVALUE;
    DeRef(_24660);
    _24660 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 217 op: NOP1 (159)
L9: // addr: 218 pc: 217 sub: 47341 op: 159
    // SubProg MarkTargets pc: 218 op: STARTLINE (58)

    /** symtab.e:674			h = buckets[hashfn(sname)]*/
    // SubProg MarkTargets pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 222 op: PROC (27)
    RefDS(_sname_47348);
    _24669 = _53hashfn(_sname_47348);
    // SubProg MarkTargets pc: 226 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    if (!IS_ATOM_INT(_24669)){
        _h_47351 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24669)->dbl));
    }
    else{
        _h_47351 = (object)*(((s1_ptr)_2)->base + _24669);
    }
    if (!IS_ATOM_INT(_h_47351))
    _h_47351 = (object)DBL_PTR(_h_47351)->dbl;
    // SubProg MarkTargets pc: 230 op: STARTLINE (58)

    /** symtab.e:675			while h do*/
    // SubProg MarkTargets pc: 232 op: NOP2 (110)
    // SubProg MarkTargets pc: 234 op: NOPWHILE (158)
LA: // addr: 235 pc: 234 sub: 47341 op: 158
    // SubProg MarkTargets pc: 235 op: WHILE (47)
    if (_h_47351 == 0)
    {
        goto LB; // [235] 381
    }
    else{
    }
    // SubProg MarkTargets pc: 238 op: STARTLINE (58)

    /** symtab.e:676				if equal(sname, SymTab[h][S_NAME]) then*/
    // SubProg MarkTargets pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24671 = (object)*(((s1_ptr)_2)->base + _h_47351);
    // SubProg MarkTargets pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24671);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24672 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24672 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24671 = NOVALUE;
    // SubProg MarkTargets pc: 252 op: EQUAL (153)
    if (_sname_47348 == _24672)
    _24673 = 1;
    else if (IS_ATOM_INT(_sname_47348) && IS_ATOM_INT(_24672))
    _24673 = 0;
    else
    _24673 = (compare(_sname_47348, _24672) == 0);
    _24672 = NOVALUE;
    // SubProg MarkTargets pc: 256 op: IF (20)
    if (_24673 == 0)
    {
        _24673 = NOVALUE;
        goto LC; // [256] 360
    }
    else{
        _24673 = NOVALUE;
    }
    // SubProg MarkTargets pc: 259 op: STARTLINE (58)

    /** symtab.e:677					if attribute = S_NREFS then*/
    // SubProg MarkTargets pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 263 op: EQUALS_IFW (104)
    if (_attribute_47345 != 12)
    goto LD; // [263] 289
    // SubProg MarkTargets pc: 267 op: STARTLINE (58)

    /** symtab.e:678						if BIND then*/
    // SubProg MarkTargets pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 271 op: IF (20)
    if (_34BIND_14816 == 0)
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
    ((intptr_t *)_2)[2] = _h_47351;
    _24675 = MAKE_SEQ(_1);
    // SubProg MarkTargets pc: 282 op: PROC (27)
    _53add_ref(_24675);
    _24675 = NOVALUE;
    // SubProg MarkTargets pc: 285 op: NOP1 (159)
    // SubProg MarkTargets pc: 286 op: ELSE (23)
    goto LE; // [286] 359
    // SubProg MarkTargets pc: 288 op: NOP1 (159)
LD: // addr: 289 pc: 288 sub: 47341 op: 159
    // SubProg MarkTargets pc: 289 op: STARTLINE (58)

    /** symtab.e:681					elsif is_routine( h ) and is_visible( h, current_file_no ) then*/
    // SubProg MarkTargets pc: 291 op: PROC (27)
    _24676 = _53is_routine(_h_47351);
    // SubProg MarkTargets pc: 295 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24676)) {
        if (_24676 == 0) {
            goto LF; // [295] 358
        }
    }
    else {
        if (DBL_PTR(_24676)->dbl == 0.0) {
            goto LF; // [295] 358
        }
    }
    // SubProg MarkTargets pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 301 op: PROC (27)
    _24678 = _53is_visible(_h_47351, _34current_file_no_15188);
    // SubProg MarkTargets pc: 306 op: NOP1 (159)
    // SubProg MarkTargets pc: 307 op: IF (20)
    if (_24678 == 0) {
        DeRef(_24678);
        _24678 = NOVALUE;
        goto LF; // [307] 358
    }
    else {
        if (!IS_ATOM_INT(_24678) && DBL_PTR(_24678)->dbl == 0.0){
            DeRef(_24678);
            _24678 = NOVALUE;
            goto LF; // [307] 358
        }
        DeRef(_24678);
        _24678 = NOVALUE;
    }
    DeRef(_24678);
    _24678 = NOVALUE;
    // SubProg MarkTargets pc: 310 op: STARTLINE (58)

    /** symtab.e:682						SymTab[h][attribute] += 1*/
    // SubProg MarkTargets pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 314 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_h_47351 + ((s1_ptr)_2)->base);
    // SubProg MarkTargets pc: 319 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24681 = (object)*(((s1_ptr)_2)->base + _attribute_47345);
    _24679 = NOVALUE;
    // SubProg MarkTargets pc: 323 op: PLUS1 (93)
    if (IS_ATOM_INT(_24681)) {
        _24682 = _24681 + 1;
        if (_24682 > MAXINT){
            _24682 = NewDouble((eudouble)_24682);
        }
    }
    else
    _24682 = binary_op(PLUS, 1, _24681);
    _24681 = NOVALUE;
    // SubProg MarkTargets pc: 327 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47345);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24682;
    if( _1 != _24682 ){
        DeRef(_1);
    }
    _24682 = NOVALUE;
    _24679 = NOVALUE;
    // SubProg MarkTargets pc: 331 op: STARTLINE (58)

    /** symtab.e:683						if current_file_no = SymTab[h][S_FILE_NO] then*/
    // SubProg MarkTargets pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24683 = (object)*(((s1_ptr)_2)->base + _h_47351);
    // SubProg MarkTargets pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24683);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24684 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24684 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24683 = NOVALUE;
    // SubProg MarkTargets pc: 347 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _34current_file_no_15188, _24684)){
        _24684 = NOVALUE;
        goto L10; // [347] 357
    }
    _24684 = NOVALUE;
    // SubProg MarkTargets pc: 351 op: STARTLINE (58)

    /** symtab.e:684							found = 1*/
    // SubProg MarkTargets pc: 353 op: ASSIGN_I (113)
    _found_47373 = 1;
    // SubProg MarkTargets pc: 356 op: NOP1 (159)
L10: // addr: 357 pc: 356 sub: 47341 op: 159
    // SubProg MarkTargets pc: 357 op: NOP1 (159)
LF: // addr: 358 pc: 357 sub: 47341 op: 159
    // SubProg MarkTargets pc: 358 op: NOP1 (159)
LE: // addr: 359 pc: 358 sub: 47341 op: 159
    // SubProg MarkTargets pc: 359 op: NOP1 (159)
LC: // addr: 360 pc: 359 sub: 47341 op: 159
    // SubProg MarkTargets pc: 360 op: STARTLINE (58)

    /** symtab.e:688				h = SymTab[h][S_SAMEHASH]*/
    // SubProg MarkTargets pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 364 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24686 = (object)*(((s1_ptr)_2)->base + _h_47351);
    // SubProg MarkTargets pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24686);
    _h_47351 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_h_47351)){
        _h_47351 = (object)DBL_PTR(_h_47351)->dbl;
    }
    _24686 = NOVALUE;
    // SubProg MarkTargets pc: 376 op: STARTLINE (58)

    /** symtab.e:689			end while*/
    // SubProg MarkTargets pc: 378 op: ENDWHILE (22)
    goto LA; // [378] 235
    // SubProg MarkTargets pc: 380 op: NOP1 (159)
LB: // addr: 381 pc: 380 sub: 47341 op: 159
    // SubProg MarkTargets pc: 381 op: STARTLINE (58)

    /** symtab.e:691			if not found then*/
    // SubProg MarkTargets pc: 383 op: NOT_IFW (108)
    if (_found_47373 != 0)
    goto L11; // [383] 400
    // SubProg MarkTargets pc: 386 op: STARTLINE (58)

    /** symtab.e:692				map:put( recheck_routines, current_file_no, s, map:APPEND )*/
    // SubProg MarkTargets pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 392 op: PROC (27)
    Ref(_53recheck_routines_47245);
    _28put(_53recheck_routines_47245, _34current_file_no_15188, _s_47344, 6, 0);
    // SubProg MarkTargets pc: 399 op: NOP1 (159)
L11: // addr: 400 pc: 399 sub: 47341 op: 159
    // SubProg MarkTargets pc: 400 op: STARTLINE (58)

    /** symtab.e:694			return found*/
    // SubProg MarkTargets pc: 402 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: MarkTargets

// block var s_47344

// block var attribute_47345

// block var sname_47348
    DeRef(_sname_47348);

// block var string_47349
    DeRef(_string_47349);

// block var colon_47350

// block var h_47351
    DeRef(_24676);
    _24676 = NOVALUE;
    DeRef(_24654);
    _24654 = NOVALUE;
    DeRef(_24641);
    _24641 = NOVALUE;
    DeRef(_24669);
    _24669 = NOVALUE;
    DeRef(_24645);
    _24645 = NOVALUE;
    DeRef(_24660);
    _24660 = NOVALUE;
    return _found_47373;
    // SubProg MarkTargets pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var found_47373
    // SubProg MarkTargets pc: 408 op: ELSE (23)
    goto L12; // [408] 440
    // SubProg MarkTargets pc: 410 op: NOP1 (159)
L2: // addr: 411 pc: 410 sub: 47341 op: 159
    // SubProg MarkTargets pc: 411 op: STARTLINE (58)

    /** symtab.e:696			if not just_mark_everything_from then*/
    // SubProg MarkTargets pc: 413 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 415 op: NOT_IFW (108)
    if (_53just_mark_everything_from_47172 != 0)
    goto L13; // [415] 428
    // SubProg MarkTargets pc: 418 op: STARTLINE (58)

    /** symtab.e:697				just_mark_everything_from = TopLevelSub*/
    // SubProg MarkTargets pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 422 op: ASSIGN (18)
    _53just_mark_everything_from_47172 = _34TopLevelSub_15195;
    // SubProg MarkTargets pc: 425 op: INTEGER_CHECK (96)
    // SubProg MarkTargets pc: 427 op: NOP1 (159)
L13: // addr: 428 pc: 427 sub: 47341 op: 159
    // SubProg MarkTargets pc: 428 op: STARTLINE (58)

    /** symtab.e:699			mark_all( attribute )*/
    // SubProg MarkTargets pc: 430 op: PROC (27)
    _53mark_all(_attribute_47345);
    // SubProg MarkTargets pc: 433 op: STARTLINE (58)

    /** symtab.e:700			return 1*/
    // SubProg MarkTargets pc: 435 op: RETURNF (28)

// Exiting block BLOCK: MarkTargets

// block var s_47344

// block var attribute_47345

// block var sname_47348
    DeRef(_sname_47348);

// block var string_47349
    DeRef(_string_47349);

// block var colon_47350

// block var h_47351
    DeRef(_24676);
    _24676 = NOVALUE;
    DeRef(_24654);
    _24654 = NOVALUE;
    DeRef(_24641);
    _24641 = NOVALUE;
    DeRef(_24669);
    _24669 = NOVALUE;
    DeRef(_24645);
    _24645 = NOVALUE;
    DeRef(_24660);
    _24660 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 439 op: NOP1 (159)
L12: // addr: 440 pc: 439 sub: 47341 op: 159
    // SubProg MarkTargets pc: 440 op: BADRETURNF (43)
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
    return 0;
    // SubProg get_resolve_unincluded_globals pc: 9 op: BADRETURNF (43)
    ;
}


object _53keyfind(object _word_47457, object _file_no_47458, object _scanning_file_47459, object _namespace_ok_47462, object _hashval_47463)
{
    object _msg_47465 = NOVALUE;
    object _b_name_47466 = NOVALUE;
    object _scope_47467 = NOVALUE;
    object _defined_47468 = NOVALUE;
    object _ix_47469 = NOVALUE;
    object _st_ptr_47471 = NOVALUE;
    object _st_builtin_47472 = NOVALUE;
    object _tok_47474 = NOVALUE;
    object _gtok_47475 = NOVALUE;
    object _any_symbol_47478 = NOVALUE;
    object _tok_file_47646 = NOVALUE;
    object _good_47653 = NOVALUE;
    object _include_type_47663 = NOVALUE;
    object _msg_file_47719 = NOVALUE;
// skipping _24882  name type: 0
    object _24881 = NOVALUE; // 47861 24881
    object _24880 = NOVALUE; // 47860 24880
// skipping _24879  name type: 0
    object _24878 = NOVALUE; // 47855 24878
// skipping _24877  name type: 0
    object _24876 = NOVALUE; // 47852 24876
    object _24875 = NOVALUE; // 47851 24875
    object _24874 = NOVALUE; // 47848 24874
    object _24873 = NOVALUE; // 47844 24873
    object _24872 = NOVALUE; // 47841 24872
// skipping _24871  name type: 0
    object _24870 = NOVALUE; // 47823 24870
// skipping _24869  name type: 0
    object _24868 = NOVALUE; // 47820 24868
    object _24867 = NOVALUE; // 47819 24867
    object _24866 = NOVALUE; // 47818 24866
    object _24865 = NOVALUE; // 47817 24865
    object _24864 = NOVALUE; // 47815 24864
    object _24863 = NOVALUE; // 47814 24863
    object _24862 = NOVALUE; // 47809 24862
    object _24861 = NOVALUE; // 47808 24861
// skipping _24860  name type: 0
    object _24859 = NOVALUE; // 47803 24859
    object _24858 = NOVALUE; // 47802 24858
    object _24857 = NOVALUE; // 47800 24857
    object _24856 = NOVALUE; // 47799 24856
    object _24855 = NOVALUE; // 47796 24855
    object _24854 = NOVALUE; // 47795 24854
    object _24853 = NOVALUE; // 47794 24853
    object _24852 = NOVALUE; // 47793 24852
    object _24851 = NOVALUE; // 47791 24851
    object _24850 = NOVALUE; // 47790 24850
    object _24849 = NOVALUE; // 47787 24849
    object _24848 = NOVALUE; // 47786 24848
    object _24847 = NOVALUE; // 47785 24847
    object _24846 = NOVALUE; // 47781 24846
    object _24845 = NOVALUE; // 47780 24845
    object _24844 = NOVALUE; // 47779 24844
    object _24843 = NOVALUE; // 47778 24843
// skipping _24842  name type: 0
    object _24841 = NOVALUE; // 47775 24841
    object _24840 = NOVALUE; // 47773 24840
// skipping _24839  name type: 0
// skipping _24838  name type: 0
    object _24837 = NOVALUE; // 47769 24837
// skipping _24836  name type: 0
// skipping _24835  name type: 0
// skipping _24834  name type: 0
    object _24833 = NOVALUE; // 47763 24833
// skipping _24832  name type: 0
    object _24831 = NOVALUE; // 47760 24831
    object _24830 = NOVALUE; // 47758 24830
    object _24829 = NOVALUE; // 47757 24829
    object _24828 = NOVALUE; // 47756 24828
    object _24827 = NOVALUE; // 47755 24827
// skipping _24826  name type: 0
    object _24825 = NOVALUE; // 47750 24825
    object _24824 = NOVALUE; // 47748 24824
    object _24823 = NOVALUE; // 47746 24823
    object _24822 = NOVALUE; // 47745 24822
// skipping _24821  name type: 0
    object _24820 = NOVALUE; // 47740 24820
// skipping _24818  name type: 0
    object _24817 = NOVALUE; // 47737 24817
    object _24816 = NOVALUE; // 47735 24816
    object _24815 = NOVALUE; // 47734 24815
    object _24814 = NOVALUE; // 47731 24814
// skipping _24813  name type: 0
    object _24812 = NOVALUE; // 47726 24812
// skipping _24811  name type: 0
// skipping _24810  name type: 0
    object _24809 = NOVALUE; // 47721 24809
    object _24808 = NOVALUE; // 47718 24808
    object _24807 = NOVALUE; // 47717 24807
    object _24806 = NOVALUE; // 47716 24806
    object _24805 = NOVALUE; // 47714 24805
    object _24804 = NOVALUE; // 47712 24804
    object _24803 = NOVALUE; // 47711 24803
// skipping _24802  name type: 0
// skipping _24801  name type: 0
    object _24800 = NOVALUE; // 47704 24800
    object _24799 = NOVALUE; // 47702 24799
// skipping _24798  name type: 0
    object _24797 = NOVALUE; // 47699 24797
// skipping _24796  name type: 0
    object _24795 = NOVALUE; // 47695 24795
// skipping _24794  name type: 0
    object _24793 = NOVALUE; // 47692 24793
    object _24792 = NOVALUE; // 47691 24792
    object _24791 = NOVALUE; // 47690 24791
// skipping _24790  name type: 0
// skipping _24789  name type: 0
// skipping _24788  name type: 0
    object _24787 = NOVALUE; // 47681 24787
    object _24786 = NOVALUE; // 47680 24786
// skipping _24785  name type: 0
// skipping _24782  name type: 0
    object _24781 = NOVALUE; // 47659 24781
// skipping _24780  name type: 0
    object _24779 = NOVALUE; // 47656 24779
// skipping _24778  name type: 0
    object _24777 = NOVALUE; // 47650 24777
    object _24776 = NOVALUE; // 47649 24776
// skipping _24775  name type: 0
// skipping _24774  name type: 0
// skipping _24773  name type: 0
    object _24772 = NOVALUE; // 47635 24772
    object _24771 = NOVALUE; // 47634 24771
// skipping _24770  name type: 0
    object _24769 = NOVALUE; // 47624 24769
    object _24768 = NOVALUE; // 47622 24768
// skipping _24767  name type: 0
    object _24766 = NOVALUE; // 47616 24766
    object _24765 = NOVALUE; // 47615 24765
    object _24764 = NOVALUE; // 47614 24764
    object _24763 = NOVALUE; // 47612 24763
    object _24762 = NOVALUE; // 47610 24762
// skipping _24761  name type: 0
    object _24760 = NOVALUE; // 47607 24760
    object _24759 = NOVALUE; // 47606 24759
    object _24758 = NOVALUE; // 47605 24758
    object _24757 = NOVALUE; // 47603 24757
    object _24756 = NOVALUE; // 47601 24756
    object _24755 = NOVALUE; // 47598 24755
    object _24754 = NOVALUE; // 47597 24754
    object _24753 = NOVALUE; // 47595 24753
    object _24752 = NOVALUE; // 47594 24752
    object _24751 = NOVALUE; // 47593 24751
    object _24750 = NOVALUE; // 47592 24750
    object _24749 = NOVALUE; // 47590 24749
    object _24748 = NOVALUE; // 47588 24748
    object _24747 = NOVALUE; // 47585 24747
    object _24746 = NOVALUE; // 47584 24746
    object _24745 = NOVALUE; // 47582 24745
    object _24744 = NOVALUE; // 47581 24744
    object _24743 = NOVALUE; // 47579 24743
    object _24742 = NOVALUE; // 47577 24742
    object _24741 = NOVALUE; // 47575 24741
    object _24740 = NOVALUE; // 47574 24740
    object _24739 = NOVALUE; // 47573 24739
// skipping _24738  name type: 0
    object _24737 = NOVALUE; // 47567 24737
    object _24736 = NOVALUE; // 47565 24736
// skipping _24735  name type: 0
    object _24734 = NOVALUE; // 47558 24734
    object _24733 = NOVALUE; // 47557 24733
    object _24732 = NOVALUE; // 47556 24732
    object _24731 = NOVALUE; // 47554 24731
    object _24730 = NOVALUE; // 47552 24730
// skipping _24729  name type: 0
    object _24728 = NOVALUE; // 47549 24728
    object _24727 = NOVALUE; // 47547 24727
    object _24726 = NOVALUE; // 47545 24726
// skipping _24725  name type: 0
    object _24724 = NOVALUE; // 47542 24724
    object _24723 = NOVALUE; // 47541 24723
    object _24722 = NOVALUE; // 47539 24722
    object _24721 = NOVALUE; // 47537 24721
    object _24720 = NOVALUE; // 47535 24720
    object _24719 = NOVALUE; // 47534 24719
    object _24718 = NOVALUE; // 47532 24718
// skipping _24717  name type: 0
    object _24716 = NOVALUE; // 47527 24716
    object _24715 = NOVALUE; // 47525 24715
// skipping _24714  name type: 0
// skipping _24711  name type: 0
    object _24710 = NOVALUE; // 47511 24710
// skipping _24709  name type: 0
// skipping _24708  name type: 0
    object _24707 = NOVALUE; // 47506 24707
    object _24706 = NOVALUE; // 47504 24706
    object _24705 = NOVALUE; // 47502 24705
    object _24704 = NOVALUE; // 47501 24704
    object _24703 = NOVALUE; // 47499 24703
    object _24702 = NOVALUE; // 47497 24702
    object _24701 = NOVALUE; // 47495 24701
    object _24700 = NOVALUE; // 47494 24700
    object _24699 = NOVALUE; // 47493 24699
    object _24698 = NOVALUE; // 47492 24698
    object _24697 = NOVALUE; // 47490 24697
    object _24696 = NOVALUE; // 47488 24696
    object _24695 = NOVALUE; // 47487 24695
    object _24694 = NOVALUE; // 47485 24694
    object _24693 = NOVALUE; // 47483 24693
// skipping _24692  name type: 0
// skipping _24691  name type: 0
// skipping _24690  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg keyfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_file_no_47458)) {
        _1 = (object)(DBL_PTR(_file_no_47458)->dbl);
        DeRefDS(_file_no_47458);
        _file_no_47458 = _1;
    }
    // SubProg keyfind pc: 5 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 7 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hashval_47463)) {
        _1 = (object)(DBL_PTR(_hashval_47463)->dbl);
        DeRefDS(_hashval_47463);
        _hashval_47463 = _1;
    }
    // SubProg keyfind pc: 11 op: STARTLINE (58)

    /** symtab.e:750		dup_globals = {}*/
    // SubProg keyfind pc: 13 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_53dup_globals_47443);
    _53dup_globals_47443 = _21936;
    // SubProg keyfind pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 18 op: STARTLINE (58)

    /** symtab.e:751		dup_overrides = {}*/
    // SubProg keyfind pc: 20 op: ASSIGN (18)
    RefDS(_21936);
    DeRefi(_53dup_overrides_47444);
    _53dup_overrides_47444 = _21936;
    // SubProg keyfind pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 25 op: STARTLINE (58)

    /** symtab.e:752		in_include_path = {}*/
    // SubProg keyfind pc: 27 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_53in_include_path_47445);
    _53in_include_path_47445 = _21936;
    // SubProg keyfind pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 32 op: STARTLINE (58)

    /** symtab.e:753		symbol_resolution_warning = ""*/
    // SubProg keyfind pc: 34 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_34symbol_resolution_warning_15289);
    _34symbol_resolution_warning_15289 = _21936;
    // SubProg keyfind pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 39 op: STARTLINE (58)

    /** symtab.e:754		st_builtin = 0*/
    // SubProg keyfind pc: 41 op: ASSIGN (18)
    _st_builtin_47472 = 0;
    // SubProg keyfind pc: 44 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 46 op: STARTLINE (58)

    /** symtab.e:756		ifdef EUDIS then*/
    // SubProg keyfind pc: 48 op: STARTLINE (58)

    /** symtab.e:759		st_ptr = buckets[hashval]*/
    // SubProg keyfind pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _st_ptr_47471 = (object)*(((s1_ptr)_2)->base + _hashval_47463);
    if (!IS_ATOM_INT(_st_ptr_47471)){
        _st_ptr_47471 = (object)DBL_PTR(_st_ptr_47471)->dbl;
    }
    // SubProg keyfind pc: 58 op: STARTLINE (58)

    /** symtab.e:760		integer any_symbol = namespace_ok = -1*/
    // SubProg keyfind pc: 60 op: EQUALS (3)
    _any_symbol_47478 = (_namespace_ok_47462 == -1);
    // SubProg keyfind pc: 64 op: STARTLINE (58)

    /** symtab.e:761		while st_ptr do*/
    // SubProg keyfind pc: 66 op: NOP2 (110)
    // SubProg keyfind pc: 68 op: NOPWHILE (158)
L1: // addr: 69 pc: 68 sub: 47455 op: 158
    // SubProg keyfind pc: 69 op: WHILE (47)
    if (_st_ptr_47471 == 0)
    {
        goto L2; // [69] 1033
    }
    else{
    }
    // SubProg keyfind pc: 72 op: STARTLINE (58)

    /** symtab.e:762			if SymTab[st_ptr][S_SCOPE] != SC_UNDEFINED */
    // SubProg keyfind pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24693 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24693);
    _24694 = (object)*(((s1_ptr)_2)->base + 4);
    _24693 = NOVALUE;
    // SubProg keyfind pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 88 op: NOTEQ (4)
    if (IS_ATOM_INT(_24694)) {
        _24695 = (_24694 != 9);
    }
    else {
        _24695 = binary_op(NOTEQ, _24694, 9);
    }
    _24694 = NOVALUE;
    // SubProg keyfind pc: 92 op: SC1_AND (141)
    if (IS_ATOM_INT(_24695)) {
        if (_24695 == 0) {
            DeRef(_24696);
            _24696 = 0;
            goto L3; // [92] 116
        }
    }
    else {
        if (DBL_PTR(_24695)->dbl == 0.0) {
            DeRef(_24696);
            _24696 = 0;
            goto L3; // [92] 116
        }
    }
    // SubProg keyfind pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24697 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24697);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24698 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24698 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24697 = NOVALUE;
    // SubProg keyfind pc: 108 op: EQUAL (153)
    if (_word_47457 == _24698)
    _24699 = 1;
    else if (IS_ATOM_INT(_word_47457) && IS_ATOM_INT(_24698))
    _24699 = 0;
    else
    _24699 = (compare(_word_47457, _24698) == 0);
    _24698 = NOVALUE;
    // SubProg keyfind pc: 112 op: SC2_AND (142)
    DeRef(_24696);
    _24696 = (_24699 != 0);
    // SubProg keyfind pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 47455 op: 159
    // SubProg keyfind pc: 116 op: SC1_AND_IF (146)
    if (_24696 == 0) {
        goto L4; // [116] 1012
    }
    // SubProg keyfind pc: 120 op: SC1_OR (143)
    if (_any_symbol_47478 != 0) {
        DeRef(_24701);
        _24701 = 1;
        goto L5; // [120] 150
    }
    // SubProg keyfind pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24702 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24702);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24703 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24703 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24702 = NOVALUE;
    // SubProg keyfind pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 138 op: EQUALS (3)
    if (IS_ATOM_INT(_24703)) {
        _24704 = (_24703 == 523);
    }
    else {
        _24704 = binary_op(EQUALS, _24703, 523);
    }
    _24703 = NOVALUE;
    // SubProg keyfind pc: 142 op: EQUALS (3)
    if (IS_ATOM_INT(_24704)) {
        _24705 = (_namespace_ok_47462 == _24704);
    }
    else {
        _24705 = binary_op(EQUALS, _namespace_ok_47462, _24704);
    }
    DeRef(_24704);
    _24704 = NOVALUE;
    // SubProg keyfind pc: 146 op: SC2_OR (144)
    if (IS_ATOM_INT(_24705))
    _24701 = (_24705 != 0);
    else
    _24701 = DBL_PTR(_24705)->dbl != 0.0;
    // SubProg keyfind pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 47455 op: 159
    // SubProg keyfind pc: 150 op: NOP1 (159)
    // SubProg keyfind pc: 151 op: IF (20)
    if (_24701 == 0)
    {
        _24701 = NOVALUE;
        goto L4; // [151] 1012
    }
    else{
        _24701 = NOVALUE;
    }
    // SubProg keyfind pc: 154 op: STARTLINE (58)

    /** symtab.e:767				tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 158 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24706 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24706);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24707 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24707 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24706 = NOVALUE;
    // SubProg keyfind pc: 168 op: RIGHT_BRACE_2 (85)
    Ref(_24707);
    DeRef(_tok_47474);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24707;
    ((intptr_t *)_2)[2] = _st_ptr_47471;
    _tok_47474 = MAKE_SEQ(_1);
    _24707 = NOVALUE;
    // SubProg keyfind pc: 172 op: STARTLINE (58)

    /** symtab.e:769				if file_no = -1 then*/
    // SubProg keyfind pc: 174 op: EQUALS_IFW_I (121)
    if (_file_no_47458 != -1)
    goto L6; // [174] 714
    // SubProg keyfind pc: 178 op: STARTLINE (58)

    /** symtab.e:774					scope = SymTab[st_ptr][S_SCOPE]*/
    // SubProg keyfind pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 182 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24710 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 188 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24710);
    _scope_47467 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47467)){
        _scope_47467 = (object)DBL_PTR(_scope_47467)->dbl;
    }
    _24710 = NOVALUE;
    // SubProg keyfind pc: 194 op: STARTLINE (58)

    /** symtab.e:776					switch scope with fallthru do*/
    // SubProg keyfind pc: 196 op: SWITCH_I (193)
    _0 = _scope_47467;
    switch ( _0 ){ 
        // SubProg keyfind pc: 201 op: STARTLINE (58)

        /** symtab.e:777					case SC_OVERRIDE then*/
        // SubProg keyfind pc: 203 op: CASE (186)
        case 12:
        // SubProg keyfind pc: 205 op: STARTLINE (58)

        /** symtab.e:778						dup_overrides &= st_ptr*/
        // SubProg keyfind pc: 207 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 209 op: CONCAT (15)
        Append(&_53dup_overrides_47444, _53dup_overrides_47444, _st_ptr_47471);
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
        _st_builtin_47472 = _st_ptr_47471;
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
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24715 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 246 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24715);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24716 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24716 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24715 = NOVALUE;
        // SubProg keyfind pc: 250 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47459, _24716)){
            _24716 = NOVALUE;
            goto L8; // [250] 274
        }
        _24716 = NOVALUE;
        // SubProg keyfind pc: 254 op: STARTLINE (58)

        /** symtab.e:788							if BIND then*/
        // SubProg keyfind pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 258 op: IF (20)
        if (_34BIND_14816 == 0)
        {
            goto L9; // [258] 267
        }
        else{
        }
        // SubProg keyfind pc: 261 op: STARTLINE (58)

        /** symtab.e:789								add_ref(tok)*/
        // SubProg keyfind pc: 263 op: PROC (27)
        Ref(_tok_47474);
        _53add_ref(_tok_47474);
        // SubProg keyfind pc: 266 op: NOP1 (159)
L9: // addr: 267 pc: 266 sub: 47455 op: 159
        // SubProg keyfind pc: 267 op: STARTLINE (58)

        /** symtab.e:792							return tok*/
        // SubProg keyfind pc: 269 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
        DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
        DeRef(_msg_47465);

// block var b_name_47466
        DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
        DeRef(_gtok_47475);

// block var any_symbol_47478
        DeRef(_24705);
        _24705 = NOVALUE;
        DeRef(_24695);
        _24695 = NOVALUE;
        return _tok_47474;
        // SubProg keyfind pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 47455 op: 159
        // SubProg keyfind pc: 274 op: STARTLINE (58)

        /** symtab.e:796						if Resolve_unincluded_globals */
        // SubProg keyfind pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 278 op: SC1_OR (143)
        if (0 != 0) {
            _24718 = 1;
            goto LA; // [278] 322
        }
        // SubProg keyfind pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35finished_files_14159);
        _24719 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 288 op: SC1_AND (141)
        if (_24719 == 0) {
            _24720 = 0;
            goto LB; // [288] 318
        }
        // SubProg keyfind pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 294 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24721 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24722 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 304 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 306 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24722);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24723 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24723 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24722 = NOVALUE;
        // SubProg keyfind pc: 310 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24721);
        if (!IS_ATOM_INT(_24723)){
            _24724 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24723)->dbl));
        }
        else{
            _24724 = (object)*(((s1_ptr)_2)->base + _24723);
        }
        _24721 = NOVALUE;
        // SubProg keyfind pc: 314 op: SC2_AND (142)
        if (IS_ATOM_INT(_24724))
        _24720 = (_24724 != 0);
        else
        _24720 = DBL_PTR(_24724)->dbl != 0.0;
        // SubProg keyfind pc: 317 op: NOP1 (159)
LB: // addr: 318 pc: 317 sub: 47455 op: 159
        // SubProg keyfind pc: 318 op: SC2_OR (144)
        _24718 = (_24720 != 0);
        // SubProg keyfind pc: 321 op: NOP1 (159)
LA: // addr: 322 pc: 321 sub: 47455 op: 159
        // SubProg keyfind pc: 322 op: SC1_OR_IF (147)
        if (_24718 != 0) {
            goto LC; // [322] 349
        }
        // SubProg keyfind pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24726 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 334 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24726);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _24727 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _24727 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        _24726 = NOVALUE;
        // SubProg keyfind pc: 338 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 340 op: EQUALS (3)
        if (IS_ATOM_INT(_24727)) {
            _24728 = (_24727 == 523);
        }
        else {
            _24728 = binary_op(EQUALS, _24727, 523);
        }
        _24727 = NOVALUE;
        // SubProg keyfind pc: 344 op: NOP1 (159)
        // SubProg keyfind pc: 345 op: IF (20)
        if (_24728 == 0) {
            DeRef(_24728);
            _24728 = NOVALUE;
            goto L7; // [345] 1011
        }
        else {
            if (!IS_ATOM_INT(_24728) && DBL_PTR(_24728)->dbl == 0.0){
                DeRef(_24728);
                _24728 = NOVALUE;
                goto L7; // [345] 1011
            }
            DeRef(_24728);
            _24728 = NOVALUE;
        }
        DeRef(_24728);
        _24728 = NOVALUE;
        // SubProg keyfind pc: 348 op: NOP1 (159)
LC: // addr: 349 pc: 348 sub: 47455 op: 159
        // SubProg keyfind pc: 349 op: STARTLINE (58)

        /** symtab.e:800							gtok = tok*/
        // SubProg keyfind pc: 351 op: ASSIGN (18)
        Ref(_tok_47474);
        DeRef(_gtok_47475);
        _gtok_47475 = _tok_47474;
        // SubProg keyfind pc: 354 op: STARTLINE (58)

        /** symtab.e:801							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 356 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 358 op: CONCAT (15)
        Append(&_53dup_globals_47443, _53dup_globals_47443, _st_ptr_47471);
        // SubProg keyfind pc: 362 op: STARTLINE (58)

        /** symtab.e:802							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0*/
        // SubProg keyfind pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 366 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 368 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24730 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 374 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24731 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 378 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 380 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24731);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24732 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24732 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24731 = NOVALUE;
        // SubProg keyfind pc: 384 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24730);
        if (!IS_ATOM_INT(_24732)){
            _24733 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24732)->dbl));
        }
        else{
            _24733 = (object)*(((s1_ptr)_2)->base + _24732);
        }
        _24730 = NOVALUE;
        // SubProg keyfind pc: 388 op: NOTEQ (4)
        if (IS_ATOM_INT(_24733)) {
            _24734 = (_24733 != 0);
        }
        else {
            _24734 = binary_op(NOTEQ, _24733, 0);
        }
        _24733 = NOVALUE;
        // SubProg keyfind pc: 392 op: CONCAT (15)
        if (IS_SEQUENCE(_53in_include_path_47445) && IS_ATOM(_24734)) {
            Ref(_24734);
            Append(&_53in_include_path_47445, _53in_include_path_47445, _24734);
        }
        else if (IS_ATOM(_53in_include_path_47445) && IS_SEQUENCE(_24734)) {
        }
        else {
            Concat((object_ptr)&_53in_include_path_47445, _53in_include_path_47445, _24734);
        }
        DeRef(_24734);
        _24734 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24736 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24736);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24737 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24737 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24736 = NOVALUE;
        // SubProg keyfind pc: 421 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47459, _24737)){
            _24737 = NOVALUE;
            goto LD; // [421] 445
        }
        _24737 = NOVALUE;
        // SubProg keyfind pc: 425 op: STARTLINE (58)

        /** symtab.e:811							if BIND then*/
        // SubProg keyfind pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 429 op: IF (20)
        if (_34BIND_14816 == 0)
        {
            goto LE; // [429] 438
        }
        else{
        }
        // SubProg keyfind pc: 432 op: STARTLINE (58)

        /** symtab.e:812								add_ref(tok)*/
        // SubProg keyfind pc: 434 op: PROC (27)
        Ref(_tok_47474);
        _53add_ref(_tok_47474);
        // SubProg keyfind pc: 437 op: NOP1 (159)
LE: // addr: 438 pc: 437 sub: 47455 op: 159
        // SubProg keyfind pc: 438 op: STARTLINE (58)

        /** symtab.e:815							return tok*/
        // SubProg keyfind pc: 440 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
        DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
        DeRef(_msg_47465);

// block var b_name_47466
        DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
        DeRef(_gtok_47475);

// block var any_symbol_47478
        DeRef(_24705);
        _24705 = NOVALUE;
        _24723 = NOVALUE;
        _24732 = NOVALUE;
        _24724 = NOVALUE;
        _24719 = NOVALUE;
        DeRef(_24695);
        _24695 = NOVALUE;
        return _tok_47474;
        // SubProg keyfind pc: 444 op: NOP1 (159)
LD: // addr: 445 pc: 444 sub: 47455 op: 159
        // SubProg keyfind pc: 445 op: STARTLINE (58)

        /** symtab.e:818						if (finished_files[scanning_file] -- everything this file needs has been read in*/
        // SubProg keyfind pc: 447 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 449 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35finished_files_14159);
        _24739 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 453 op: SC1_OR (143)
        if (_24739 != 0) {
            _24740 = 1;
            goto LF; // [453] 487
        }
        // SubProg keyfind pc: 457 op: SC1_AND (141)
        if (_namespace_ok_47462 == 0) {
            _24741 = 0;
            goto L10; // [457] 483
        }
        // SubProg keyfind pc: 461 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 463 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24742 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 469 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24742);
        if (!IS_ATOM_INT(_34S_TOKEN_14848)){
            _24743 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
        }
        else{
            _24743 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
        }
        _24742 = NOVALUE;
        // SubProg keyfind pc: 473 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 475 op: EQUALS (3)
        if (IS_ATOM_INT(_24743)) {
            _24744 = (_24743 == 523);
        }
        else {
            _24744 = binary_op(EQUALS, _24743, 523);
        }
        _24743 = NOVALUE;
        // SubProg keyfind pc: 479 op: SC2_AND (142)
        if (IS_ATOM_INT(_24744))
        _24741 = (_24744 != 0);
        else
        _24741 = DBL_PTR(_24744)->dbl != 0.0;
        // SubProg keyfind pc: 482 op: NOP1 (159)
L10: // addr: 483 pc: 482 sub: 47455 op: 159
        // SubProg keyfind pc: 483 op: SC2_OR (144)
        _24740 = (_24741 != 0);
        // SubProg keyfind pc: 486 op: NOP1 (159)
LF: // addr: 487 pc: 486 sub: 47455 op: 159
        // SubProg keyfind pc: 487 op: SC1_AND_IF (146)
        if (_24740 == 0) {
            goto L7; // [487] 1011
        }
        // SubProg keyfind pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 493 op: EQUALS (3)
        _24746 = (_scope_47467 == 13);
        // SubProg keyfind pc: 497 op: SC1_AND (141)
        if (_24746 == 0) {
            _24747 = 0;
            goto L11; // [497] 533
        }
        // SubProg keyfind pc: 501 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 505 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24748 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 509 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 511 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24749 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 515 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 517 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24749);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24750 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24750 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24749 = NOVALUE;
        // SubProg keyfind pc: 521 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24748);
        if (!IS_ATOM_INT(_24750)){
            _24751 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24750)->dbl));
        }
        else{
            _24751 = (object)*(((s1_ptr)_2)->base + _24750);
        }
        _24748 = NOVALUE;
        // SubProg keyfind pc: 525 op: AND_BITS (56)
        if (IS_ATOM_INT(_24751)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24751;
                 _24752 = MAKE_UINT(tu);
            }
        }
        else {
            _24752 = binary_op(AND_BITS, 6, _24751);
        }
        _24751 = NOVALUE;
        // SubProg keyfind pc: 529 op: SC2_AND (142)
        if (IS_ATOM_INT(_24752))
        _24747 = (_24752 != 0);
        else
        _24747 = DBL_PTR(_24752)->dbl != 0.0;
        // SubProg keyfind pc: 532 op: NOP1 (159)
L11: // addr: 533 pc: 532 sub: 47455 op: 159
        // SubProg keyfind pc: 533 op: SC1_OR (143)
        if (_24747 != 0) {
            DeRef(_24753);
            _24753 = 1;
            goto L12; // [533] 583
        }
        // SubProg keyfind pc: 537 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 539 op: EQUALS (3)
        _24754 = (_scope_47467 == 11);
        // SubProg keyfind pc: 543 op: SC1_AND (141)
        if (_24754 == 0) {
            _24755 = 0;
            goto L13; // [543] 579
        }
        // SubProg keyfind pc: 547 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 549 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 551 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24756 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 555 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 557 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24757 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 561 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 563 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24757);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24758 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24758 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24757 = NOVALUE;
        // SubProg keyfind pc: 567 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24756);
        if (!IS_ATOM_INT(_24758)){
            _24759 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24758)->dbl));
        }
        else{
            _24759 = (object)*(((s1_ptr)_2)->base + _24758);
        }
        _24756 = NOVALUE;
        // SubProg keyfind pc: 571 op: AND_BITS (56)
        if (IS_ATOM_INT(_24759)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24759;
                 _24760 = MAKE_UINT(tu);
            }
        }
        else {
            _24760 = binary_op(AND_BITS, 2, _24759);
        }
        _24759 = NOVALUE;
        // SubProg keyfind pc: 575 op: SC2_AND (142)
        if (IS_ATOM_INT(_24760))
        _24755 = (_24760 != 0);
        else
        _24755 = DBL_PTR(_24760)->dbl != 0.0;
        // SubProg keyfind pc: 578 op: NOP1 (159)
L13: // addr: 579 pc: 578 sub: 47455 op: 159
        // SubProg keyfind pc: 579 op: SC2_OR (144)
        DeRef(_24753);
        _24753 = (_24755 != 0);
        // SubProg keyfind pc: 582 op: NOP1 (159)
L12: // addr: 583 pc: 582 sub: 47455 op: 159
        // SubProg keyfind pc: 583 op: NOP1 (159)
        // SubProg keyfind pc: 584 op: IF (20)
        if (_24753 == 0)
        {
            _24753 = NOVALUE;
            goto L7; // [584] 1011
        }
        else{
            _24753 = NOVALUE;
        }
        // SubProg keyfind pc: 587 op: STARTLINE (58)

        /** symtab.e:826							gtok = tok*/
        // SubProg keyfind pc: 589 op: ASSIGN (18)
        Ref(_tok_47474);
        DeRef(_gtok_47475);
        _gtok_47475 = _tok_47474;
        // SubProg keyfind pc: 592 op: STARTLINE (58)

        /** symtab.e:827							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 594 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 596 op: CONCAT (15)
        Append(&_53dup_globals_47443, _53dup_globals_47443, _st_ptr_47471);
        // SubProg keyfind pc: 600 op: STARTLINE (58)

        /** symtab.e:828							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0 --symbol_in_include_path( st_ptr, scanning_file, {} )*/
        // SubProg keyfind pc: 602 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 604 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 606 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35include_matrix_14163);
        _24762 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
        // SubProg keyfind pc: 610 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 612 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24763 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 616 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 618 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24763);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24764 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24764 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24763 = NOVALUE;
        // SubProg keyfind pc: 622 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24762);
        if (!IS_ATOM_INT(_24764)){
            _24765 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24764)->dbl));
        }
        else{
            _24765 = (object)*(((s1_ptr)_2)->base + _24764);
        }
        _24762 = NOVALUE;
        // SubProg keyfind pc: 626 op: NOTEQ (4)
        if (IS_ATOM_INT(_24765)) {
            _24766 = (_24765 != 0);
        }
        else {
            _24766 = binary_op(NOTEQ, _24765, 0);
        }
        _24765 = NOVALUE;
        // SubProg keyfind pc: 630 op: CONCAT (15)
        if (IS_SEQUENCE(_53in_include_path_47445) && IS_ATOM(_24766)) {
            Ref(_24766);
            Append(&_53in_include_path_47445, _53in_include_path_47445, _24766);
        }
        else if (IS_ATOM(_53in_include_path_47445) && IS_SEQUENCE(_24766)) {
        }
        else {
            Concat((object_ptr)&_53in_include_path_47445, _53in_include_path_47445, _24766);
        }
        DeRef(_24766);
        _24766 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24768 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
        // SubProg keyfind pc: 653 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 655 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24768);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24769 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24769 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24768 = NOVALUE;
        // SubProg keyfind pc: 659 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47459, _24769)){
            _24769 = NOVALUE;
            goto L7; // [659] 1011
        }
        _24769 = NOVALUE;
        // SubProg keyfind pc: 663 op: STARTLINE (58)

        /** symtab.e:857							if BIND then*/
        // SubProg keyfind pc: 665 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 667 op: IF (20)
        if (_34BIND_14816 == 0)
        {
            goto L14; // [667] 676
        }
        else{
        }
        // SubProg keyfind pc: 670 op: STARTLINE (58)

        /** symtab.e:858								add_ref(tok)*/
        // SubProg keyfind pc: 672 op: PROC (27)
        Ref(_tok_47474);
        _53add_ref(_tok_47474);
        // SubProg keyfind pc: 675 op: NOP1 (159)
L14: // addr: 676 pc: 675 sub: 47455 op: 159
        // SubProg keyfind pc: 676 op: STARTLINE (58)

        /** symtab.e:861							return tok*/
        // SubProg keyfind pc: 678 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
        DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
        DeRef(_msg_47465);

// block var b_name_47466
        DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
        DeRef(_gtok_47475);

// block var any_symbol_47478
        _24758 = NOVALUE;
        DeRef(_24705);
        _24705 = NOVALUE;
        DeRef(_24754);
        _24754 = NOVALUE;
        _24723 = NOVALUE;
        _24732 = NOVALUE;
        DeRef(_24760);
        _24760 = NOVALUE;
        _24750 = NOVALUE;
        _24764 = NOVALUE;
        _24739 = NOVALUE;
        _24724 = NOVALUE;
        DeRef(_24744);
        _24744 = NOVALUE;
        _24719 = NOVALUE;
        DeRef(_24752);
        _24752 = NOVALUE;
        DeRef(_24746);
        _24746 = NOVALUE;
        DeRef(_24695);
        _24695 = NOVALUE;
        return _tok_47474;
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
        if (_34BIND_14816 == 0)
        {
            goto L15; // [695] 704
        }
        else{
        }
        // SubProg keyfind pc: 698 op: STARTLINE (58)

        /** symtab.e:867							add_ref(tok)*/
        // SubProg keyfind pc: 700 op: PROC (27)
        Ref(_tok_47474);
        _53add_ref(_tok_47474);
        // SubProg keyfind pc: 703 op: NOP1 (159)
L15: // addr: 704 pc: 703 sub: 47455 op: 159
        // SubProg keyfind pc: 704 op: STARTLINE (58)

        /** symtab.e:870						return tok -- keyword, private*/
        // SubProg keyfind pc: 706 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
        DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
        DeRef(_msg_47465);

// block var b_name_47466
        DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
        DeRef(_gtok_47475);

// block var any_symbol_47478
        _24758 = NOVALUE;
        DeRef(_24705);
        _24705 = NOVALUE;
        DeRef(_24754);
        _24754 = NOVALUE;
        _24723 = NOVALUE;
        _24732 = NOVALUE;
        DeRef(_24760);
        _24760 = NOVALUE;
        _24750 = NOVALUE;
        _24764 = NOVALUE;
        _24739 = NOVALUE;
        _24724 = NOVALUE;
        DeRef(_24744);
        _24744 = NOVALUE;
        _24719 = NOVALUE;
        DeRef(_24752);
        _24752 = NOVALUE;
        DeRef(_24746);
        _24746 = NOVALUE;
        DeRef(_24695);
        _24695 = NOVALUE;
        return _tok_47474;
        // SubProg keyfind pc: 710 op: NOPSWITCH (187)
    ;}    // SubProg keyfind pc: 711 op: ELSE (23)
    goto L7; // [711] 1011
    // SubProg keyfind pc: 713 op: NOP1 (159)
L6: // addr: 714 pc: 713 sub: 47455 op: 159
    // SubProg keyfind pc: 714 op: STARTLINE (58)

    /** symtab.e:877					scope = SymTab[tok[T_SYM]][S_SCOPE]*/
    // SubProg keyfind pc: 716 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 720 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47474);
    _24771 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 724 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_24771)){
        _24772 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24771)->dbl));
    }
    else{
        _24772 = (object)*(((s1_ptr)_2)->base + _24771);
    }
    // SubProg keyfind pc: 728 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 730 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24772);
    _scope_47467 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47467)){
        _scope_47467 = (object)DBL_PTR(_scope_47467)->dbl;
    }
    _24772 = NOVALUE;
    // SubProg keyfind pc: 736 op: STARTLINE (58)

    /** symtab.e:878					if not file_no then*/
    // SubProg keyfind pc: 738 op: NOT_IFW (108)
    if (_file_no_47458 != 0)
    goto L16; // [738] 772
    // SubProg keyfind pc: 741 op: STARTLINE (58)

    /** symtab.e:880						if scope = SC_PREDEF then*/
    // SubProg keyfind pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 745 op: EQUALS_IFW (104)
    if (_scope_47467 != 7)
    goto L17; // [745] 1010
    // SubProg keyfind pc: 749 op: STARTLINE (58)

    /** symtab.e:881							if BIND then*/
    // SubProg keyfind pc: 751 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 753 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L18; // [753] 762
    }
    else{
    }
    // SubProg keyfind pc: 756 op: STARTLINE (58)

    /** symtab.e:882								add_ref( tok )*/
    // SubProg keyfind pc: 758 op: PROC (27)
    Ref(_tok_47474);
    _53add_ref(_tok_47474);
    // SubProg keyfind pc: 761 op: NOP1 (159)
L18: // addr: 762 pc: 761 sub: 47455 op: 159
    // SubProg keyfind pc: 762 op: STARTLINE (58)

    /** symtab.e:884							return tok*/
    // SubProg keyfind pc: 764 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    return _tok_47474;
    // SubProg keyfind pc: 768 op: NOP1 (159)
    // SubProg keyfind pc: 769 op: ELSE (23)
    goto L17; // [769] 1010
    // SubProg keyfind pc: 771 op: NOP1 (159)
L16: // addr: 772 pc: 771 sub: 47455 op: 159
    // SubProg keyfind pc: 772 op: STARTLINE (58)

    /** symtab.e:887						integer tok_file = SymTab[tok[T_SYM]][S_FILE_NO]*/
    // SubProg keyfind pc: 774 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 778 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47474);
    _24776 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 782 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_24776)){
        _24777 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24776)->dbl));
    }
    else{
        _24777 = (object)*(((s1_ptr)_2)->base + _24776);
    }
    // SubProg keyfind pc: 786 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 788 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24777);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _tok_file_47646 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _tok_file_47646 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    if (!IS_ATOM_INT(_tok_file_47646)){
        _tok_file_47646 = (object)DBL_PTR(_tok_file_47646)->dbl;
    }
    _24777 = NOVALUE;
    // SubProg keyfind pc: 794 op: STARTLINE (58)

    /** symtab.e:888						integer good = 0*/
    // SubProg keyfind pc: 796 op: ASSIGN_I (113)
    _good_47653 = 0;
    // SubProg keyfind pc: 799 op: STARTLINE (58)

    /** symtab.e:889						if scope = SC_PRIVATE or scope = SC_PREDEF then*/
    // SubProg keyfind pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 803 op: EQUALS (3)
    _24779 = (_scope_47467 == 3);
    // SubProg keyfind pc: 807 op: SC1_OR_IF (147)
    if (_24779 != 0) {
        goto L19; // [807] 940
    }
    // SubProg keyfind pc: 811 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 813 op: EQUALS (3)
    _24781 = (_scope_47467 == 7);
    // SubProg keyfind pc: 817 op: NOP1 (159)
    // SubProg keyfind pc: 818 op: IF (20)
    if (_24781 == 0)
    {
        DeRef(_24781);
        _24781 = NOVALUE;
        goto L1A; // [818] 825
    }
    else{
        DeRef(_24781);
        _24781 = NOVALUE;
    }
    // SubProg keyfind pc: 821 op: NOP1 (159)
    // SubProg keyfind pc: 822 op: ELSE (23)
    goto L19; // [822] 940
    // SubProg keyfind pc: 824 op: NOP1 (159)
L1A: // addr: 825 pc: 824 sub: 47455 op: 159
    // SubProg keyfind pc: 825 op: STARTLINE (58)

    /** symtab.e:892						elsif file_no = tok_file then*/
    // SubProg keyfind pc: 827 op: EQUALS_IFW_I (121)
    if (_file_no_47458 != _tok_file_47646)
    goto L1B; // [827] 839
    // SubProg keyfind pc: 831 op: STARTLINE (58)

    /** symtab.e:893							good = 1*/
    // SubProg keyfind pc: 833 op: ASSIGN_I (113)
    _good_47653 = 1;
    // SubProg keyfind pc: 836 op: ELSE (23)
    goto L19; // [836] 940
    // SubProg keyfind pc: 838 op: NOP1 (159)
L1B: // addr: 839 pc: 838 sub: 47455 op: 159
    // SubProg keyfind pc: 839 op: STARTLINE (58)

    /** symtab.e:896							integer include_type = 0*/
    // SubProg keyfind pc: 841 op: ASSIGN_I (113)
    _include_type_47663 = 0;
    // SubProg keyfind pc: 844 op: STARTLINE (58)

    /** symtab.e:897							switch scope do*/
    // SubProg keyfind pc: 846 op: SWITCH_I (193)
    _0 = _scope_47467;
    switch ( _0 ){ 
        // SubProg keyfind pc: 851 op: STARTLINE (58)

        /** symtab.e:898								case SC_GLOBAL then*/
        // SubProg keyfind pc: 853 op: CASE (186)
        case 6:
        // SubProg keyfind pc: 855 op: STARTLINE (58)

        /** symtab.e:899									if Resolve_unincluded_globals then*/
        // SubProg keyfind pc: 857 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 859 op: IF (20)
        // SubProg keyfind pc: 874 op: STARTLINE (58)

        /** symtab.e:902										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 876 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 878 op: ASSIGN (18)
        _include_type_47663 = 6;
        // SubProg keyfind pc: 881 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 883 op: NOP1 (159)
        // SubProg keyfind pc: 884 op: ELSE (23)
        goto L1C; // [884] 919
        // SubProg keyfind pc: 886 op: STARTLINE (58)

        /** symtab.e:905								case SC_PUBLIC then*/
        // SubProg keyfind pc: 888 op: CASE (186)
        case 13:
        // SubProg keyfind pc: 890 op: STARTLINE (58)

        /** symtab.e:907									if tok_file != file_no then*/
        // SubProg keyfind pc: 892 op: NOTEQ_IFW_I (122)
        if (_tok_file_47646 == _file_no_47458)
        goto L1D; // [892] 908
        // SubProg keyfind pc: 896 op: STARTLINE (58)

        /** symtab.e:908										include_type = PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 898 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 900 op: ASSIGN (18)
        _include_type_47663 = 4;
        // SubProg keyfind pc: 903 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 905 op: ELSE (23)
        goto L1E; // [905] 918
        // SubProg keyfind pc: 907 op: NOP1 (159)
L1D: // addr: 908 pc: 907 sub: 47455 op: 159
        // SubProg keyfind pc: 908 op: STARTLINE (58)

        /** symtab.e:910										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 910 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 912 op: ASSIGN (18)
        _include_type_47663 = 6;
        // SubProg keyfind pc: 915 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 917 op: NOP1 (159)
L1E: // addr: 918 pc: 917 sub: 47455 op: 159
        // SubProg keyfind pc: 918 op: NOPSWITCH (187)
    ;}L1C: // addr: 919 pc: 918 sub: 47455 op: 187
    // SubProg keyfind pc: 919 op: STARTLINE (58)

    /** symtab.e:914							good = and_bits( include_type, include_matrix[file_no][tok_file] )*/
    // SubProg keyfind pc: 921 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 923 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _24786 = (object)*(((s1_ptr)_2)->base + _file_no_47458);
    // SubProg keyfind pc: 927 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24786);
    _24787 = (object)*(((s1_ptr)_2)->base + _tok_file_47646);
    _24786 = NOVALUE;
    // SubProg keyfind pc: 931 op: AND_BITS (56)
    if (IS_ATOM_INT(_24787)) {
        {uintptr_t tu;
             tu = (uintptr_t)_include_type_47663 & (uintptr_t)_24787;
             _good_47653 = MAKE_UINT(tu);
        }
    }
    else {
        _good_47653 = binary_op(AND_BITS, _include_type_47663, _24787);
    }
    _24787 = NOVALUE;
    // SubProg keyfind pc: 935 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_good_47653)) {
        _1 = (object)(DBL_PTR(_good_47653)->dbl);
        DeRefDS(_good_47653);
        _good_47653 = _1;
    }
    // SubProg keyfind pc: 937 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var include_type_47663
    // SubProg keyfind pc: 939 op: NOP1 (159)
L19: // addr: 940 pc: 939 sub: 47455 op: 159
    // SubProg keyfind pc: 940 op: STARTLINE (58)

    /** symtab.e:917						if good then*/
    // SubProg keyfind pc: 942 op: IF (20)
    if (_good_47653 == 0)
    {
        goto L1F; // [942] 1007
    }
    else{
    }
    // SubProg keyfind pc: 945 op: STARTLINE (58)

    /** symtab.e:919							if file_no = tok_file then*/
    // SubProg keyfind pc: 947 op: EQUALS_IFW_I (121)
    if (_file_no_47458 != _tok_file_47646)
    goto L20; // [947] 971
    // SubProg keyfind pc: 951 op: STARTLINE (58)

    /** symtab.e:920								if BIND then*/
    // SubProg keyfind pc: 953 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 955 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L21; // [955] 964
    }
    else{
    }
    // SubProg keyfind pc: 958 op: STARTLINE (58)

    /** symtab.e:921									add_ref(tok)*/
    // SubProg keyfind pc: 960 op: PROC (27)
    Ref(_tok_47474);
    _53add_ref(_tok_47474);
    // SubProg keyfind pc: 963 op: NOP1 (159)
L21: // addr: 964 pc: 963 sub: 47455 op: 159
    // SubProg keyfind pc: 964 op: STARTLINE (58)

    /** symtab.e:923								return tok*/
    // SubProg keyfind pc: 966 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var tok_file_47646

// block var good_47653

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _tok_47474;
    // SubProg keyfind pc: 970 op: NOP1 (159)
L20: // addr: 971 pc: 970 sub: 47455 op: 159
    // SubProg keyfind pc: 971 op: STARTLINE (58)

    /** symtab.e:926							gtok = tok*/
    // SubProg keyfind pc: 973 op: ASSIGN (18)
    Ref(_tok_47474);
    DeRef(_gtok_47475);
    _gtok_47475 = _tok_47474;
    // SubProg keyfind pc: 976 op: STARTLINE (58)

    /** symtab.e:927							dup_globals &= st_ptr*/
    // SubProg keyfind pc: 978 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 980 op: CONCAT (15)
    Append(&_53dup_globals_47443, _53dup_globals_47443, _st_ptr_47471);
    // SubProg keyfind pc: 984 op: STARTLINE (58)

    /** symtab.e:928							in_include_path &= include_matrix[scanning_file][tok_file] != 0*/
    // SubProg keyfind pc: 986 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 988 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 990 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35include_matrix_14163);
    _24791 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
    // SubProg keyfind pc: 994 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24791);
    _24792 = (object)*(((s1_ptr)_2)->base + _tok_file_47646);
    _24791 = NOVALUE;
    // SubProg keyfind pc: 998 op: NOTEQ (4)
    if (IS_ATOM_INT(_24792)) {
        _24793 = (_24792 != 0);
    }
    else {
        _24793 = binary_op(NOTEQ, _24792, 0);
    }
    _24792 = NOVALUE;
    // SubProg keyfind pc: 1002 op: CONCAT (15)
    if (IS_SEQUENCE(_53in_include_path_47445) && IS_ATOM(_24793)) {
        Ref(_24793);
        Append(&_53in_include_path_47445, _53in_include_path_47445, _24793);
    }
    else if (IS_ATOM(_53in_include_path_47445) && IS_SEQUENCE(_24793)) {
    }
    else {
        Concat((object_ptr)&_53in_include_path_47445, _53in_include_path_47445, _24793);
    }
    DeRef(_24793);
    _24793 = NOVALUE;
    // SubProg keyfind pc: 1006 op: NOP1 (159)
L1F: // addr: 1007 pc: 1006 sub: 47455 op: 159
    // SubProg keyfind pc: 1007 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_file_47646

// block var good_47653
    // SubProg keyfind pc: 1009 op: NOP1 (159)
L17: // addr: 1010 pc: 1009 sub: 47455 op: 159
    // SubProg keyfind pc: 1010 op: NOP1 (159)
L7: // addr: 1011 pc: 1010 sub: 47455 op: 159
    // SubProg keyfind pc: 1011 op: NOP1 (159)
L4: // addr: 1012 pc: 1011 sub: 47455 op: 159
    // SubProg keyfind pc: 1012 op: STARTLINE (58)

    /** symtab.e:936			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg keyfind pc: 1014 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1016 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24795 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1022 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24795);
    _st_ptr_47471 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_47471)){
        _st_ptr_47471 = (object)DBL_PTR(_st_ptr_47471)->dbl;
    }
    _24795 = NOVALUE;
    // SubProg keyfind pc: 1028 op: STARTLINE (58)

    /** symtab.e:937		end while*/
    // SubProg keyfind pc: 1030 op: ENDWHILE (22)
    goto L1; // [1030] 69
    // SubProg keyfind pc: 1032 op: NOP1 (159)
L2: // addr: 1033 pc: 1032 sub: 47455 op: 159
    // SubProg keyfind pc: 1033 op: STARTLINE (58)

    /** symtab.e:939		if length(dup_overrides) then*/
    // SubProg keyfind pc: 1035 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1037 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_overrides_47444)){
            _24797 = SEQ_PTR(_53dup_overrides_47444)->length;
    }
    else {
        _24797 = 1;
    }
    // SubProg keyfind pc: 1040 op: IF (20)
    if (_24797 == 0)
    {
        _24797 = NOVALUE;
        goto L22; // [1040] 1093
    }
    else{
        _24797 = NOVALUE;
    }
    // SubProg keyfind pc: 1043 op: STARTLINE (58)

    /** symtab.e:940			st_ptr = dup_overrides[1]*/
    // SubProg keyfind pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1047 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53dup_overrides_47444);
    _st_ptr_47471 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1053 op: STARTLINE (58)

    /** symtab.e:941			tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1055 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1057 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24799 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 1061 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1063 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24799);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24800 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24800 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24799 = NOVALUE;
    // SubProg keyfind pc: 1067 op: RIGHT_BRACE_2 (85)
    Ref(_24800);
    DeRef(_tok_47474);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24800;
    ((intptr_t *)_2)[2] = _st_ptr_47471;
    _tok_47474 = MAKE_SEQ(_1);
    _24800 = NOVALUE;
    // SubProg keyfind pc: 1071 op: STARTLINE (58)

    /** symtab.e:944				if BIND then*/
    // SubProg keyfind pc: 1073 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1075 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L23; // [1075] 1084
    }
    else{
    }
    // SubProg keyfind pc: 1078 op: STARTLINE (58)

    /** symtab.e:945					add_ref(tok)*/
    // SubProg keyfind pc: 1080 op: PROC (27)
    RefDS(_tok_47474);
    _53add_ref(_tok_47474);
    // SubProg keyfind pc: 1083 op: NOP1 (159)
L23: // addr: 1084 pc: 1083 sub: 47455 op: 159
    // SubProg keyfind pc: 1084 op: STARTLINE (58)

    /** symtab.e:948				return tok*/
    // SubProg keyfind pc: 1086 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _tok_47474;
    // SubProg keyfind pc: 1090 op: ELSE (23)
    goto L24; // [1090] 1320
    // SubProg keyfind pc: 1092 op: NOP1 (159)
L22: // addr: 1093 pc: 1092 sub: 47455 op: 159
    // SubProg keyfind pc: 1093 op: STARTLINE (58)

    /** symtab.e:951		elsif st_builtin != 0 then*/
    // SubProg keyfind pc: 1095 op: NOTEQ_IFW (105)
    if (_st_builtin_47472 == 0)
    goto L25; // [1095] 1319
    // SubProg keyfind pc: 1099 op: STARTLINE (58)

    /** symtab.e:952			if length(dup_globals) and find(SymTab[st_builtin][S_NAME], builtin_warnings) = 0 then*/
    // SubProg keyfind pc: 1101 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1103 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24803 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24803 = 1;
    }
    // SubProg keyfind pc: 1106 op: SC1_AND_IF (146)
    if (_24803 == 0) {
        goto L26; // [1106] 1279
    }
    // SubProg keyfind pc: 1110 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24805 = (object)*(((s1_ptr)_2)->base + _st_builtin_47472);
    // SubProg keyfind pc: 1116 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24805);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24806 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24806 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24805 = NOVALUE;
    // SubProg keyfind pc: 1122 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1124 op: FIND_FROM (176)
    _24807 = find_from(_24806, _53builtin_warnings_47447, 1);
    _24806 = NOVALUE;
    // SubProg keyfind pc: 1129 op: EQUALS (3)
    _24808 = (_24807 == 0);
    _24807 = NOVALUE;
    // SubProg keyfind pc: 1133 op: NOP1 (159)
    // SubProg keyfind pc: 1134 op: IF (20)
    if (_24808 == 0)
    {
        DeRef(_24808);
        _24808 = NOVALUE;
        goto L26; // [1134] 1279
    }
    else{
        DeRef(_24808);
        _24808 = NOVALUE;
    }
    // SubProg keyfind pc: 1137 op: STARTLINE (58)

    /** symtab.e:953				sequence msg_file */
    // SubProg keyfind pc: 1139 op: STARTLINE (58)

    /** symtab.e:955				b_name = SymTab[st_builtin][S_NAME]*/
    // SubProg keyfind pc: 1141 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1143 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24809 = (object)*(((s1_ptr)_2)->base + _st_builtin_47472);
    // SubProg keyfind pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1149 op: RHS_SUBS_CHECK (92)
    DeRef(_b_name_47466);
    _2 = (object)SEQ_PTR(_24809);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _b_name_47466 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _b_name_47466 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    Ref(_b_name_47466);
    _24809 = NOVALUE;
    // SubProg keyfind pc: 1153 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1155 op: STARTLINE (58)

    /** symtab.e:956				builtin_warnings = append(builtin_warnings, b_name)*/
    // SubProg keyfind pc: 1157 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1159 op: APPEND (35)
    RefDS(_b_name_47466);
    Append(&_53builtin_warnings_47447, _53builtin_warnings_47447, _b_name_47466);
    // SubProg keyfind pc: 1163 op: STARTLINE (58)

    /** symtab.e:958				if length(dup_globals) > 1 then*/
    // SubProg keyfind pc: 1165 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1167 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24812 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24812 = 1;
    }
    // SubProg keyfind pc: 1170 op: GREATER_IFW_I (124)
    if (_24812 <= 1)
    goto L27; // [1170] 1184
    // SubProg keyfind pc: 1174 op: STARTLINE (58)

    /** symtab.e:959					msg = "\n"*/
    // SubProg keyfind pc: 1176 op: ASSIGN (18)
    RefDS(_22131);
    DeRef(_msg_47465);
    _msg_47465 = _22131;
    // SubProg keyfind pc: 1179 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1181 op: ELSE (23)
    goto L28; // [1181] 1192
    // SubProg keyfind pc: 1183 op: NOP1 (159)
L27: // addr: 1184 pc: 1183 sub: 47455 op: 159
    // SubProg keyfind pc: 1184 op: STARTLINE (58)

    /** symtab.e:961					msg = ""*/
    // SubProg keyfind pc: 1186 op: ASSIGN (18)
    RefDS(_21936);
    DeRef(_msg_47465);
    _msg_47465 = _21936;
    // SubProg keyfind pc: 1189 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1191 op: NOP1 (159)
L28: // addr: 1192 pc: 1191 sub: 47455 op: 159
    // SubProg keyfind pc: 1192 op: STARTLINE (58)

    /** symtab.e:964				for i = 1 to length(dup_globals) do*/
    // SubProg keyfind pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1196 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24814 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24814 = 1;
    }
    // SubProg keyfind pc: 1199 op: FOR_I (125)
    {
        object _i_47730;
        _i_47730 = 1;
L29: // addr: 1206 pc: 1199 sub: 47455 op: 125
        if (_i_47730 > _24814){
            goto L2A; // [1199] 1255
        }
        // SubProg keyfind pc: 1206 op: STARTLINE (58)

        /** symtab.e:965					msg_file = known_files[SymTab[dup_globals[i]][S_FILE_NO]]*/
        // SubProg keyfind pc: 1208 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1210 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1212 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_53dup_globals_47443);
        _24815 = (object)*(((s1_ptr)_2)->base + _i_47730);
        // SubProg keyfind pc: 1218 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        if (!IS_ATOM_INT(_24815)){
            _24816 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24815)->dbl));
        }
        else{
            _24816 = (object)*(((s1_ptr)_2)->base + _24815);
        }
        // SubProg keyfind pc: 1222 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24816);
        if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
            _24817 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
        }
        else{
            _24817 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
        }
        _24816 = NOVALUE;
        // SubProg keyfind pc: 1228 op: RHS_SUBS_CHECK (92)
        DeRef(_msg_file_47719);
        _2 = (object)SEQ_PTR(_35known_files_14157);
        if (!IS_ATOM_INT(_24817)){
            _msg_file_47719 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24817)->dbl));
        }
        else{
            _msg_file_47719 = (object)*(((s1_ptr)_2)->base + _24817);
        }
        Ref(_msg_file_47719);
        // SubProg keyfind pc: 1232 op: SEQUENCE_CHECK (97)
        // SubProg keyfind pc: 1234 op: STARTLINE (58)

        /** symtab.e:966					msg &= "    " & msg_file & "\n"*/
        // SubProg keyfind pc: 1236 op: PRIVATE_INIT_CHECK (30)
        // SubProg keyfind pc: 1238 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _22131;
            concat_list[1] = _msg_file_47719;
            concat_list[2] = _24819;
            Concat_N((object_ptr)&_24820, concat_list, 3);
        }
        // SubProg keyfind pc: 1244 op: CONCAT (15)
        Concat((object_ptr)&_msg_47465, _msg_47465, _24820);
        DeRefDS(_24820);
        _24820 = NOVALUE;
        // SubProg keyfind pc: 1248 op: STARTLINE (58)

        /** symtab.e:967				end for*/
        // SubProg keyfind pc: 1250 op: ENDFOR_INT_UP1 (54)
        _i_47730 = _i_47730 + 1;
        goto L29; // [1250] 1206
L2A: // addr: 1255 pc: 1250 sub: 47455 op: 54
        ;
    }
    // SubProg keyfind pc: 1255 op: STARTLINE (58)

    /** symtab.e:969				Warning(234, builtin_chosen_warning_flag, {b_name, known_files[scanning_file], msg})*/
    // SubProg keyfind pc: 1257 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1259 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _24822 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
    // SubProg keyfind pc: 1265 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1267 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_b_name_47466);
    ((intptr_t*)_2)[1] = _b_name_47466;
    Ref(_24822);
    ((intptr_t*)_2)[2] = _24822;
    RefDS(_msg_47465);
    ((intptr_t*)_2)[3] = _msg_47465;
    _24823 = MAKE_SEQ(_1);
    _24822 = NOVALUE;
    // SubProg keyfind pc: 1273 op: PROC (27)
    _49Warning(234, 8, _24823);
    _24823 = NOVALUE;
    // SubProg keyfind pc: 1278 op: NOP1 (159)
L26: // addr: 1279 pc: 1278 sub: 47455 op: 159
    // SubProg keyfind pc: 1279 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_file_47719
    DeRef(_msg_file_47719);
    _msg_file_47719 = NOVALUE;
    // SubProg keyfind pc: 1281 op: STARTLINE (58)

    /** symtab.e:972			tok = {SymTab[st_builtin][S_TOKEN], st_builtin}*/
    // SubProg keyfind pc: 1283 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1285 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24824 = (object)*(((s1_ptr)_2)->base + _st_builtin_47472);
    // SubProg keyfind pc: 1289 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1291 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24824);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24825 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24825 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24824 = NOVALUE;
    // SubProg keyfind pc: 1295 op: RIGHT_BRACE_2 (85)
    Ref(_24825);
    DeRef(_tok_47474);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24825;
    ((intptr_t *)_2)[2] = _st_builtin_47472;
    _tok_47474 = MAKE_SEQ(_1);
    _24825 = NOVALUE;
    // SubProg keyfind pc: 1299 op: STARTLINE (58)

    /** symtab.e:974			if BIND then*/
    // SubProg keyfind pc: 1301 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1303 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L2B; // [1303] 1312
    }
    else{
    }
    // SubProg keyfind pc: 1306 op: STARTLINE (58)

    /** symtab.e:975				add_ref(tok)*/
    // SubProg keyfind pc: 1308 op: PROC (27)
    RefDS(_tok_47474);
    _53add_ref(_tok_47474);
    // SubProg keyfind pc: 1311 op: NOP1 (159)
L2B: // addr: 1312 pc: 1311 sub: 47455 op: 159
    // SubProg keyfind pc: 1312 op: STARTLINE (58)

    /** symtab.e:978			return tok*/
    // SubProg keyfind pc: 1314 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24817 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24815 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _tok_47474;
    // SubProg keyfind pc: 1318 op: NOP1 (159)
L25: // addr: 1319 pc: 1318 sub: 47455 op: 159
    // SubProg keyfind pc: 1319 op: NOP1 (159)
L24: // addr: 1320 pc: 1319 sub: 47455 op: 159
    // SubProg keyfind pc: 1320 op: STARTLINE (58)

    /** symtab.e:981	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1322 op: STARTLINE (58)

    /** symtab.e:996		if length(dup_globals) > 1 and find( 1, in_include_path ) then*/
    // SubProg keyfind pc: 1324 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1326 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24827 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24827 = 1;
    }
    // SubProg keyfind pc: 1329 op: GREATER (6)
    _24828 = (_24827 > 1);
    _24827 = NOVALUE;
    // SubProg keyfind pc: 1333 op: SC1_AND_IF (146)
    if (_24828 == 0) {
        goto L2C; // [1333] 1452
    }
    // SubProg keyfind pc: 1337 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1339 op: FIND_FROM (176)
    _24830 = find_from(1, _53in_include_path_47445, 1);
    // SubProg keyfind pc: 1344 op: NOP1 (159)
    // SubProg keyfind pc: 1345 op: IF (20)
    if (_24830 == 0)
    {
        _24830 = NOVALUE;
        goto L2C; // [1345] 1452
    }
    else{
        _24830 = NOVALUE;
    }
    // SubProg keyfind pc: 1348 op: STARTLINE (58)

    /** symtab.e:998			ix = 1*/
    // SubProg keyfind pc: 1350 op: ASSIGN_I (113)
    _ix_47469 = 1;
    // SubProg keyfind pc: 1353 op: STARTLINE (58)

    /** symtab.e:999			while ix <= length(dup_globals) do*/
    // SubProg keyfind pc: 1355 op: NOP2 (110)
    // SubProg keyfind pc: 1357 op: NOPWHILE (158)
L2D: // addr: 1358 pc: 1357 sub: 47455 op: 158
    // SubProg keyfind pc: 1358 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1360 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24831 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24831 = 1;
    }
    // SubProg keyfind pc: 1363 op: LESSEQ_IFW_I (123)
    if (_ix_47469 > _24831)
    goto L2E; // [1363] 1411
    // SubProg keyfind pc: 1367 op: STARTLINE (58)

    /** symtab.e:1000				if in_include_path[ix] then*/
    // SubProg keyfind pc: 1369 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1371 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53in_include_path_47445);
    _24833 = (object)*(((s1_ptr)_2)->base + _ix_47469);
    // SubProg keyfind pc: 1375 op: IF (20)
    if (_24833 == 0) {
        _24833 = NOVALUE;
        goto L2F; // [1375] 1387
    }
    else {
        if (!IS_ATOM_INT(_24833) && DBL_PTR(_24833)->dbl == 0.0){
            _24833 = NOVALUE;
            goto L2F; // [1375] 1387
        }
        _24833 = NOVALUE;
    }
    _24833 = NOVALUE;
    // SubProg keyfind pc: 1378 op: STARTLINE (58)

    /** symtab.e:1001					ix += 1*/
    // SubProg keyfind pc: 1380 op: PLUS1_I (117)
    _ix_47469 = _ix_47469 + 1;
    // SubProg keyfind pc: 1384 op: ELSE (23)
    goto L2D; // [1384] 1358
    // SubProg keyfind pc: 1386 op: NOP1 (159)
L2F: // addr: 1387 pc: 1386 sub: 47455 op: 159
    // SubProg keyfind pc: 1387 op: STARTLINE (58)

    /** symtab.e:1003					dup_globals     = remove( dup_globals, ix )*/
    // SubProg keyfind pc: 1389 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1391 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_53dup_globals_47443);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47469)) ? _ix_47469 : (object)(DBL_PTR(_ix_47469)->dbl);
        int stop = (IS_ATOM_INT(_ix_47469)) ? _ix_47469 : (object)(DBL_PTR(_ix_47469)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_53dup_globals_47443), start, &_53dup_globals_47443 );
            }
            else Tail(SEQ_PTR(_53dup_globals_47443), stop+1, &_53dup_globals_47443);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_53dup_globals_47443), start, &_53dup_globals_47443);
        }
        else {
            assign_slice_seq = &assign_space;
            _53dup_globals_47443 = Remove_elements(start, stop, (SEQ_PTR(_53dup_globals_47443)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1396 op: STARTLINE (58)

    /** symtab.e:1004					in_include_path = remove( in_include_path, ix )*/
    // SubProg keyfind pc: 1398 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1400 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_53in_include_path_47445);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47469)) ? _ix_47469 : (object)(DBL_PTR(_ix_47469)->dbl);
        int stop = (IS_ATOM_INT(_ix_47469)) ? _ix_47469 : (object)(DBL_PTR(_ix_47469)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_53in_include_path_47445), start, &_53in_include_path_47445 );
            }
            else Tail(SEQ_PTR(_53in_include_path_47445), stop+1, &_53in_include_path_47445);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_53in_include_path_47445), start, &_53in_include_path_47445);
        }
        else {
            assign_slice_seq = &assign_space;
            _53in_include_path_47445 = Remove_elements(start, stop, (SEQ_PTR(_53in_include_path_47445)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1405 op: NOP1 (159)
    // SubProg keyfind pc: 1406 op: STARTLINE (58)

    /** symtab.e:1006			end while*/
    // SubProg keyfind pc: 1408 op: ENDWHILE (22)
    goto L2D; // [1408] 1358
    // SubProg keyfind pc: 1410 op: NOP1 (159)
L2E: // addr: 1411 pc: 1410 sub: 47455 op: 159
    // SubProg keyfind pc: 1411 op: STARTLINE (58)

    /** symtab.e:1008			if length(dup_globals) = 1 then*/
    // SubProg keyfind pc: 1413 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1415 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24837 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24837 = 1;
    }
    // SubProg keyfind pc: 1418 op: EQUALS_IFW_I (121)
    if (_24837 != 1)
    goto L30; // [1418] 1451
    // SubProg keyfind pc: 1422 op: STARTLINE (58)

    /** symtab.e:1009					st_ptr = dup_globals[1]*/
    // SubProg keyfind pc: 1424 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1426 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53dup_globals_47443);
    _st_ptr_47471 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_st_ptr_47471)){
        _st_ptr_47471 = (object)DBL_PTR(_st_ptr_47471)->dbl;
    }
    // SubProg keyfind pc: 1432 op: STARTLINE (58)

    /** symtab.e:1010					gtok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1434 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24840 = (object)*(((s1_ptr)_2)->base + _st_ptr_47471);
    // SubProg keyfind pc: 1440 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1442 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24840);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24841 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24841 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24840 = NOVALUE;
    // SubProg keyfind pc: 1446 op: RIGHT_BRACE_2 (85)
    Ref(_24841);
    DeRef(_gtok_47475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24841;
    ((intptr_t *)_2)[2] = _st_ptr_47471;
    _gtok_47475 = MAKE_SEQ(_1);
    _24841 = NOVALUE;
    // SubProg keyfind pc: 1450 op: NOP1 (159)
L30: // addr: 1451 pc: 1450 sub: 47455 op: 159
    // SubProg keyfind pc: 1451 op: NOP1 (159)
L2C: // addr: 1452 pc: 1451 sub: 47455 op: 159
    // SubProg keyfind pc: 1452 op: STARTLINE (58)

    /** symtab.e:1014	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1454 op: STARTLINE (58)

    /** symtab.e:1023		if length(dup_globals) = 1 and st_builtin = 0 then*/
    // SubProg keyfind pc: 1456 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1458 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24843 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24843 = 1;
    }
    // SubProg keyfind pc: 1461 op: EQUALS (3)
    _24844 = (_24843 == 1);
    _24843 = NOVALUE;
    // SubProg keyfind pc: 1465 op: SC1_AND_IF (146)
    if (_24844 == 0) {
        goto L31; // [1465] 1642
    }
    // SubProg keyfind pc: 1469 op: EQUALS (3)
    _24846 = (_st_builtin_47472 == 0);
    // SubProg keyfind pc: 1473 op: NOP1 (159)
    // SubProg keyfind pc: 1474 op: IF (20)
    if (_24846 == 0)
    {
        DeRef(_24846);
        _24846 = NOVALUE;
        goto L31; // [1474] 1642
    }
    else{
        DeRef(_24846);
        _24846 = NOVALUE;
    }
    // SubProg keyfind pc: 1477 op: STARTLINE (58)

    /** symtab.e:1026			if BIND then*/
    // SubProg keyfind pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1481 op: IF (20)
    if (_34BIND_14816 == 0)
    {
        goto L32; // [1481] 1492
    }
    else{
    }
    // SubProg keyfind pc: 1484 op: STARTLINE (58)

    /** symtab.e:1027				add_ref(gtok)*/
    // SubProg keyfind pc: 1486 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1488 op: PROC (27)
    Ref(_gtok_47475);
    _53add_ref(_gtok_47475);
    // SubProg keyfind pc: 1491 op: NOP1 (159)
L32: // addr: 1492 pc: 1491 sub: 47455 op: 159
    // SubProg keyfind pc: 1492 op: STARTLINE (58)

    /** symtab.e:1029			if not in_include_path[1] and*/
    // SubProg keyfind pc: 1494 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1496 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53in_include_path_47445);
    _24847 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1500 op: NOT (7)
    if (IS_ATOM_INT(_24847)) {
        _24848 = (_24847 == 0);
    }
    else {
        _24848 = unary_op(NOT, _24847);
    }
    _24847 = NOVALUE;
    // SubProg keyfind pc: 1503 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24848)) {
        if (_24848 == 0) {
            goto L33; // [1503] 1635
        }
    }
    else {
        if (DBL_PTR(_24848)->dbl == 0.0) {
            goto L33; // [1503] 1635
        }
    }
    // SubProg keyfind pc: 1507 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1509 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1511 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1513 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47475);
    _24850 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1517 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_24850)){
        _24851 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24850)->dbl));
    }
    else{
        _24851 = (object)*(((s1_ptr)_2)->base + _24850);
    }
    // SubProg keyfind pc: 1521 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1523 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24851);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24852 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24852 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24851 = NOVALUE;
    // SubProg keyfind pc: 1527 op: RIGHT_BRACE_2 (85)
    Ref(_24852);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47459;
    ((intptr_t *)_2)[2] = _24852;
    _24853 = MAKE_SEQ(_1);
    _24852 = NOVALUE;
    // SubProg keyfind pc: 1531 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1533 op: FIND_FROM (176)
    _24854 = find_from(_24853, _53include_warnings_47446, 1);
    DeRefDS(_24853);
    _24853 = NOVALUE;
    // SubProg keyfind pc: 1538 op: NOT (7)
    _24855 = (_24854 == 0);
    _24854 = NOVALUE;
    // SubProg keyfind pc: 1541 op: NOP1 (159)
    // SubProg keyfind pc: 1542 op: IF (20)
    if (_24855 == 0)
    {
        DeRef(_24855);
        _24855 = NOVALUE;
        goto L33; // [1542] 1635
    }
    else{
        DeRef(_24855);
        _24855 = NOVALUE;
    }
    // SubProg keyfind pc: 1545 op: STARTLINE (58)

    /** symtab.e:1032				include_warnings = prepend( include_warnings,*/
    // SubProg keyfind pc: 1547 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1549 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1551 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1553 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47475);
    _24856 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1557 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_24856)){
        _24857 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24856)->dbl));
    }
    else{
        _24857 = (object)*(((s1_ptr)_2)->base + _24856);
    }
    // SubProg keyfind pc: 1561 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24857);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24858 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24858 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24857 = NOVALUE;
    // SubProg keyfind pc: 1567 op: RIGHT_BRACE_2 (85)
    Ref(_24858);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47459;
    ((intptr_t *)_2)[2] = _24858;
    _24859 = MAKE_SEQ(_1);
    _24858 = NOVALUE;
    // SubProg keyfind pc: 1571 op: PREPEND (57)
    RefDS(_24859);
    Prepend(&_53include_warnings_47446, _53include_warnings_47446, _24859);
    DeRefDS(_24859);
    _24859 = NOVALUE;
    // SubProg keyfind pc: 1575 op: STARTLINE (58)

    /** symtab.e:1034	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1577 op: STARTLINE (58)

    /** symtab.e:1040					symbol_resolution_warning = GetMsgText(233,0,*/
    // SubProg keyfind pc: 1579 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1581 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _24861 = (object)*(((s1_ptr)_2)->base + _scanning_file_47459);
    // SubProg keyfind pc: 1585 op: PROC (27)
    Ref(_24861);
    _24862 = _53name_ext(_24861);
    _24861 = NOVALUE;
    // SubProg keyfind pc: 1589 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1591 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1593 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1595 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1597 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47475);
    _24863 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1601 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!IS_ATOM_INT(_24863)){
        _24864 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24863)->dbl));
    }
    else{
        _24864 = (object)*(((s1_ptr)_2)->base + _24863);
    }
    // SubProg keyfind pc: 1605 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1607 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24864);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24865 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24865 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24864 = NOVALUE;
    // SubProg keyfind pc: 1611 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    if (!IS_ATOM_INT(_24865)){
        _24866 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24865)->dbl));
    }
    else{
        _24866 = (object)*(((s1_ptr)_2)->base + _24865);
    }
    // SubProg keyfind pc: 1615 op: PROC (27)
    Ref(_24866);
    _24867 = _53name_ext(_24866);
    _24866 = NOVALUE;
    // SubProg keyfind pc: 1619 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24862;
    ((intptr_t*)_2)[2] = _34line_number_15189;
    RefDS(_word_47457);
    ((intptr_t*)_2)[3] = _word_47457;
    ((intptr_t*)_2)[4] = _24867;
    _24868 = MAKE_SEQ(_1);
    _24867 = NOVALUE;
    _24862 = NOVALUE;
    // SubProg keyfind pc: 1626 op: PROC (27)
    _0 = _40GetMsgText(233, 0, _24868);
    DeRef(_34symbol_resolution_warning_15289);
    _34symbol_resolution_warning_15289 = _0;
    _24868 = NOVALUE;
    // SubProg keyfind pc: 1632 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1634 op: NOP1 (159)
L33: // addr: 1635 pc: 1634 sub: 47455 op: 159
    // SubProg keyfind pc: 1635 op: STARTLINE (58)

    /** symtab.e:1047			return gtok*/
    // SubProg keyfind pc: 1637 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var tok_47474
    DeRef(_tok_47474);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    DeRef(_24844);
    _24844 = NOVALUE;
    DeRef(_24848);
    _24848 = NOVALUE;
    _24856 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24863 = NOVALUE;
    _24850 = NOVALUE;
    _24817 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24828);
    _24828 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24815 = NOVALUE;
    _24865 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _gtok_47475;
    // SubProg keyfind pc: 1641 op: NOP1 (159)
L31: // addr: 1642 pc: 1641 sub: 47455 op: 159
    // SubProg keyfind pc: 1642 op: STARTLINE (58)

    /** symtab.e:1051		if length(dup_globals) = 0 then*/
    // SubProg keyfind pc: 1644 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1646 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24870 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24870 = 1;
    }
    // SubProg keyfind pc: 1649 op: EQUALS_IFW_I (121)
    if (_24870 != 0)
    goto L34; // [1649] 1723
    // SubProg keyfind pc: 1653 op: STARTLINE (58)

    /** symtab.e:1052			defined = SC_UNDEFINED*/
    // SubProg keyfind pc: 1655 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1657 op: ASSIGN (18)
    _defined_47468 = 9;
    // SubProg keyfind pc: 1660 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1662 op: STARTLINE (58)

    /** symtab.e:1054			if fwd_line_number then*/
    // SubProg keyfind pc: 1664 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1666 op: IF (20)
    if (_34fwd_line_number_15190 == 0)
    {
        goto L35; // [1666] 1695
    }
    else{
    }
    // SubProg keyfind pc: 1669 op: STARTLINE (58)

    /** symtab.e:1055				last_ForwardLine     = ForwardLine*/
    // SubProg keyfind pc: 1671 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1673 op: ASSIGN (18)
    Ref(_49ForwardLine_48710);
    DeRef(_49last_ForwardLine_48712);
    _49last_ForwardLine_48712 = _49ForwardLine_48710;
    // SubProg keyfind pc: 1676 op: STARTLINE (58)

    /** symtab.e:1056				last_forward_bp      = forward_bp*/
    // SubProg keyfind pc: 1678 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1680 op: ASSIGN (18)
    _49last_forward_bp_48716 = _49forward_bp_48714;
    // SubProg keyfind pc: 1683 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1685 op: STARTLINE (58)

    /** symtab.e:1057				last_fwd_line_number = fwd_line_number*/
    // SubProg keyfind pc: 1687 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1689 op: ASSIGN (18)
    _34last_fwd_line_number_15192 = _34fwd_line_number_15190;
    // SubProg keyfind pc: 1692 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1694 op: NOP1 (159)
L35: // addr: 1695 pc: 1694 sub: 47455 op: 159
    // SubProg keyfind pc: 1695 op: STARTLINE (58)

    /** symtab.e:1060			ForwardLine = ThisLine*/
    // SubProg keyfind pc: 1697 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1699 op: ASSIGN (18)
    Ref(_49ThisLine_48709);
    DeRef(_49ForwardLine_48710);
    _49ForwardLine_48710 = _49ThisLine_48709;
    // SubProg keyfind pc: 1702 op: STARTLINE (58)

    /** symtab.e:1061			forward_bp = bp*/
    // SubProg keyfind pc: 1704 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1706 op: ASSIGN (18)
    _49forward_bp_48714 = _49bp_48713;
    // SubProg keyfind pc: 1709 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1711 op: STARTLINE (58)

    /** symtab.e:1062			fwd_line_number = line_number*/
    // SubProg keyfind pc: 1713 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1715 op: ASSIGN (18)
    _34fwd_line_number_15190 = _34line_number_15189;
    // SubProg keyfind pc: 1718 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1720 op: ELSE (23)
    goto L36; // [1720] 1766
    // SubProg keyfind pc: 1722 op: NOP1 (159)
L34: // addr: 1723 pc: 1722 sub: 47455 op: 159
    // SubProg keyfind pc: 1723 op: STARTLINE (58)

    /** symtab.e:1064		elsif length(dup_globals) then*/
    // SubProg keyfind pc: 1725 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1727 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_globals_47443)){
            _24872 = SEQ_PTR(_53dup_globals_47443)->length;
    }
    else {
        _24872 = 1;
    }
    // SubProg keyfind pc: 1730 op: IF (20)
    if (_24872 == 0)
    {
        _24872 = NOVALUE;
        goto L37; // [1730] 1745
    }
    else{
        _24872 = NOVALUE;
    }
    // SubProg keyfind pc: 1733 op: STARTLINE (58)

    /** symtab.e:1065			defined = SC_MULTIPLY_DEFINED*/
    // SubProg keyfind pc: 1735 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1737 op: ASSIGN (18)
    _defined_47468 = 10;
    // SubProg keyfind pc: 1740 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1742 op: ELSE (23)
    goto L36; // [1742] 1766
    // SubProg keyfind pc: 1744 op: NOP1 (159)
L37: // addr: 1745 pc: 1744 sub: 47455 op: 159
    // SubProg keyfind pc: 1745 op: STARTLINE (58)

    /** symtab.e:1066		elsif length(dup_overrides) then*/
    // SubProg keyfind pc: 1747 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1749 op: LENGTH (42)
    if (IS_SEQUENCE(_53dup_overrides_47444)){
            _24873 = SEQ_PTR(_53dup_overrides_47444)->length;
    }
    else {
        _24873 = 1;
    }
    // SubProg keyfind pc: 1752 op: IF (20)
    if (_24873 == 0)
    {
        _24873 = NOVALUE;
        goto L38; // [1752] 1765
    }
    else{
        _24873 = NOVALUE;
    }
    // SubProg keyfind pc: 1755 op: STARTLINE (58)

    /** symtab.e:1067			defined = SC_OVERRIDE*/
    // SubProg keyfind pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1759 op: ASSIGN (18)
    _defined_47468 = 12;
    // SubProg keyfind pc: 1762 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1764 op: NOP1 (159)
L38: // addr: 1765 pc: 1764 sub: 47455 op: 159
    // SubProg keyfind pc: 1765 op: NOP1 (159)
L36: // addr: 1766 pc: 1765 sub: 47455 op: 159
    // SubProg keyfind pc: 1766 op: STARTLINE (58)

    /** symtab.e:1070		if No_new_entry then*/
    // SubProg keyfind pc: 1768 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1770 op: IF (20)
    if (_53No_new_entry_47454 == 0)
    {
        goto L39; // [1770] 1793
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
    RefDS(_word_47457);
    ((intptr_t*)_2)[2] = _word_47457;
    ((intptr_t*)_2)[3] = _defined_47468;
    RefDS(_53dup_globals_47443);
    ((intptr_t*)_2)[4] = _53dup_globals_47443;
    _24874 = MAKE_SEQ(_1);
    // SubProg keyfind pc: 1788 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var tok_47474
    DeRef(_tok_47474);

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    DeRef(_24844);
    _24844 = NOVALUE;
    DeRef(_24848);
    _24848 = NOVALUE;
    _24856 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24863 = NOVALUE;
    _24850 = NOVALUE;
    _24817 = NOVALUE;
    _24750 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24828);
    _24828 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24815 = NOVALUE;
    _24865 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _24874;
    // SubProg keyfind pc: 1792 op: NOP1 (159)
L39: // addr: 1793 pc: 1792 sub: 47455 op: 159
    // SubProg keyfind pc: 1793 op: STARTLINE (58)

    /** symtab.e:1074		tok = {VARIABLE, NewEntry(word, 0, defined,*/
    // SubProg keyfind pc: 1795 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1797 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1799 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1803 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _24875 = (object)*(((s1_ptr)_2)->base + _hashval_47463);
    // SubProg keyfind pc: 1807 op: PROC (27)
    RefDS(_word_47457);
    Ref(_24875);
    _24876 = _53NewEntry(_word_47457, 0, _defined_47468, -100, _hashval_47463, _24875, 0);
    _24875 = NOVALUE;
    // SubProg keyfind pc: 1817 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_47474);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _24876;
    _tok_47474 = MAKE_SEQ(_1);
    _24876 = NOVALUE;
    // SubProg keyfind pc: 1821 op: STARTLINE (58)

    /** symtab.e:1076		buckets[hashval] = tok[T_SYM]*/
    // SubProg keyfind pc: 1823 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1825 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47474);
    _24878 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1831 op: ASSIGN_SUBS (16)
    Ref(_24878);
    _2 = (object)SEQ_PTR(_53buckets_46253);
    _2 = (object)(((s1_ptr)_2)->base + _hashval_47463);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24878;
    if( _1 != _24878 ){
        DeRef(_1);
    }
    _24878 = NOVALUE;
    // SubProg keyfind pc: 1835 op: STARTLINE (58)

    /** symtab.e:1078		if file_no != -1 then*/
    // SubProg keyfind pc: 1837 op: NOTEQ_IFW_I (122)
    if (_file_no_47458 == -1)
    goto L3A; // [1837] 1863
    // SubProg keyfind pc: 1841 op: STARTLINE (58)

    /** symtab.e:1079			SymTab[tok[T_SYM]][S_FILE_NO] = file_no*/
    // SubProg keyfind pc: 1843 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1845 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1847 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47474);
    _24880 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1851 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_24880))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24880)->dbl));
    else
    _3 = (object)(_24880 + ((s1_ptr)_2)->base);
    // SubProg keyfind pc: 1856 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1858 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_34S_FILE_NO_14839))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _file_no_47458;
    DeRef(_1);
    _24881 = NOVALUE;
    // SubProg keyfind pc: 1862 op: NOP1 (159)
L3A: // addr: 1863 pc: 1862 sub: 47455 op: 159
    // SubProg keyfind pc: 1863 op: STARTLINE (58)

    /** symtab.e:1081		return tok  -- no ref on newly declared symbol*/
    // SubProg keyfind pc: 1865 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47457
    DeRefDS(_word_47457);

// block var file_no_47458

// block var scanning_file_47459

// block var namespace_ok_47462

// block var hashval_47463

// block var msg_47465
    DeRef(_msg_47465);

// block var b_name_47466
    DeRef(_b_name_47466);

// block var scope_47467

// block var defined_47468

// block var ix_47469

// block var st_ptr_47471

// block var st_builtin_47472

// block var gtok_47475
    DeRef(_gtok_47475);

// block var any_symbol_47478
    _24758 = NOVALUE;
    DeRef(_24705);
    _24705 = NOVALUE;
    DeRef(_24754);
    _24754 = NOVALUE;
    _24723 = NOVALUE;
    DeRef(_24844);
    _24844 = NOVALUE;
    DeRef(_24848);
    _24848 = NOVALUE;
    _24856 = NOVALUE;
    _24732 = NOVALUE;
    DeRef(_24760);
    _24760 = NOVALUE;
    _24863 = NOVALUE;
    _24850 = NOVALUE;
    _24817 = NOVALUE;
    _24750 = NOVALUE;
    DeRef(_24874);
    _24874 = NOVALUE;
    _24764 = NOVALUE;
    _24739 = NOVALUE;
    _24776 = NOVALUE;
    _24724 = NOVALUE;
    _24771 = NOVALUE;
    DeRef(_24828);
    _24828 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    _24815 = NOVALUE;
    _24865 = NOVALUE;
    _24719 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    _24880 = NOVALUE;
    DeRef(_24695);
    _24695 = NOVALUE;
    DeRef(_24779);
    _24779 = NOVALUE;
    return _tok_47474;
    // SubProg keyfind pc: 1869 op: BADRETURNF (43)
    ;
}


void _53Hide(object _s_47867)
{
    object _prev_47869 = NOVALUE;
    object _p_47870 = NOVALUE;
// skipping _24902  name type: 0
    object _24901 = NOVALUE; // 47906 24901
    object _24900 = NOVALUE; // 47904 24900
    object _24899 = NOVALUE; // 47902 24899
// skipping _24898  name type: 0
    object _24897 = NOVALUE; // 47898 24897
    object _24896 = NOVALUE; // 47895 24896
    object _24895 = NOVALUE; // 47893 24895
    object _24894 = NOVALUE; // 47891 24894
    object _24893 = NOVALUE; // 47889 24893
// skipping _24892  name type: 0
// skipping _24891  name type: 0
// skipping _24890  name type: 0
    object _24889 = NOVALUE; // 47881 24889
    object _24888 = NOVALUE; // 47879 24888
    object _24887 = NOVALUE; // 47878 24887
    object _24886 = NOVALUE; // 47877 24886
// skipping _24885  name type: 0
    object _24884 = NOVALUE; // 47874 24884
    object _24883 = NOVALUE; // 47872 24883
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Hide pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47867)) {
        _1 = (object)(DBL_PTR(_s_47867)->dbl);
        DeRefDS(_s_47867);
        _s_47867 = _1;
    }
    // SubProg Hide pc: 3 op: STARTLINE (58)

    /** symtab.e:1090		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Hide pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24883 = (object)*(((s1_ptr)_2)->base + _s_47867);
    // SubProg Hide pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24883);
    _24884 = (object)*(((s1_ptr)_2)->base + 11);
    _24883 = NOVALUE;
    // SubProg Hide pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    if (!IS_ATOM_INT(_24884)){
        _p_47870 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24884)->dbl));
    }
    else{
        _p_47870 = (object)*(((s1_ptr)_2)->base + _24884);
    }
    if (!IS_ATOM_INT(_p_47870)){
        _p_47870 = (object)DBL_PTR(_p_47870)->dbl;
    }
    // SubProg Hide pc: 25 op: STARTLINE (58)

    /** symtab.e:1091		prev = 0*/
    // SubProg Hide pc: 27 op: ASSIGN (18)
    _prev_47869 = 0;
    // SubProg Hide pc: 30 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 32 op: STARTLINE (58)

    /** symtab.e:1093		while p != s and p != 0 do*/
    // SubProg Hide pc: 34 op: NOP2 (110)
    // SubProg Hide pc: 36 op: NOPWHILE (158)
L1: // addr: 37 pc: 36 sub: 47864 op: 158
    // SubProg Hide pc: 37 op: NOTEQ (4)
    _24886 = (_p_47870 != _s_47867);
    // SubProg Hide pc: 41 op: SC1_AND_IF (146)
    if (_24886 == 0) {
        goto L2; // [41] 81
    }
    // SubProg Hide pc: 45 op: NOTEQ (4)
    _24888 = (_p_47870 != 0);
    // SubProg Hide pc: 49 op: NOP1 (159)
    // SubProg Hide pc: 50 op: WHILE (47)
    if (_24888 == 0)
    {
        DeRef(_24888);
        _24888 = NOVALUE;
        goto L2; // [50] 81
    }
    else{
        DeRef(_24888);
        _24888 = NOVALUE;
    }
    // SubProg Hide pc: 53 op: STARTLINE (58)

    /** symtab.e:1094			prev = p*/
    // SubProg Hide pc: 55 op: ASSIGN (18)
    _prev_47869 = _p_47870;
    // SubProg Hide pc: 58 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 60 op: STARTLINE (58)

    /** symtab.e:1095			p = SymTab[p][S_SAMEHASH]*/
    // SubProg Hide pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24889 = (object)*(((s1_ptr)_2)->base + _p_47870);
    // SubProg Hide pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24889);
    _p_47870 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_p_47870)){
        _p_47870 = (object)DBL_PTR(_p_47870)->dbl;
    }
    _24889 = NOVALUE;
    // SubProg Hide pc: 76 op: STARTLINE (58)

    /** symtab.e:1096		end while*/
    // SubProg Hide pc: 78 op: ENDWHILE (22)
    goto L1; // [78] 37
    // SubProg Hide pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 47864 op: 159
    // SubProg Hide pc: 81 op: STARTLINE (58)

    /** symtab.e:1098		if p = 0 then*/
    // SubProg Hide pc: 83 op: EQUALS_IFW (104)
    if (_p_47870 != 0)
    goto L3; // [83] 93
    // SubProg Hide pc: 87 op: STARTLINE (58)

    /** symtab.e:1099			return -- already hidden*/
    // SubProg Hide pc: 89 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Hide

// block var s_47867

// block var prev_47869

// block var p_47870
    DeRef(_24886);
    _24886 = NOVALUE;
    _24884 = NOVALUE;
    return;
    // SubProg Hide pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 47864 op: 159
    // SubProg Hide pc: 93 op: STARTLINE (58)

    /** symtab.e:1101		if prev = 0 then*/
    // SubProg Hide pc: 95 op: EQUALS_IFW (104)
    if (_prev_47869 != 0)
    goto L4; // [95] 134
    // SubProg Hide pc: 99 op: STARTLINE (58)

    /** symtab.e:1102			buckets[SymTab[s][S_HASHVAL]] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24893 = (object)*(((s1_ptr)_2)->base + _s_47867);
    // SubProg Hide pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 111 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24893);
    _24894 = (object)*(((s1_ptr)_2)->base + 11);
    _24893 = NOVALUE;
    // SubProg Hide pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 117 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24895 = (object)*(((s1_ptr)_2)->base + _s_47867);
    // SubProg Hide pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24895);
    _24896 = (object)*(((s1_ptr)_2)->base + 9);
    _24895 = NOVALUE;
    // SubProg Hide pc: 127 op: ASSIGN_SUBS (16)
    Ref(_24896);
    _2 = (object)SEQ_PTR(_53buckets_46253);
    if (!IS_ATOM_INT(_24894))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24894)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24894);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24896;
    if( _1 != _24896 ){
        DeRef(_1);
    }
    _24896 = NOVALUE;
    // SubProg Hide pc: 131 op: ELSE (23)
    goto L5; // [131] 162
    // SubProg Hide pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 47864 op: 159
    // SubProg Hide pc: 134 op: STARTLINE (58)

    /** symtab.e:1104			SymTab[prev][S_SAMEHASH] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 138 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_47869 + ((s1_ptr)_2)->base);
    // SubProg Hide pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24899 = (object)*(((s1_ptr)_2)->base + _s_47867);
    // SubProg Hide pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24899);
    _24900 = (object)*(((s1_ptr)_2)->base + 9);
    _24899 = NOVALUE;
    // SubProg Hide pc: 157 op: PASSIGN_SUBS (162)
    Ref(_24900);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24900;
    if( _1 != _24900 ){
        DeRef(_1);
    }
    _24900 = NOVALUE;
    _24897 = NOVALUE;
    // SubProg Hide pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 47864 op: 159
    // SubProg Hide pc: 162 op: STARTLINE (58)

    /** symtab.e:1106		SymTab[s][S_SAMEHASH] = 0*/
    // SubProg Hide pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 166 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47867 + ((s1_ptr)_2)->base);
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
    _24901 = NOVALUE;
    // SubProg Hide pc: 177 op: STARTLINE (58)

    /** symtab.e:1107	end procedure*/
    // SubProg Hide pc: 179 op: RETURNP (29)

// Exiting block BLOCK: Hide

// block var s_47867

// block var prev_47869

// block var p_47870
    DeRef(_24886);
    _24886 = NOVALUE;
    _24884 = NOVALUE;
    _24894 = NOVALUE;
    return;
    // SubProg Hide pc: 182 op: BADRETURNF (43)
    ;
}


void _53Show(object _s_47912)
{
    object _p_47914 = NOVALUE;
    object _24913 = NOVALUE; // 47934 24913
    object _24912 = NOVALUE; // 47932 24912
// skipping _24911  name type: 0
    object _24910 = NOVALUE; // 47928 24910
    object _24909 = NOVALUE; // 47926 24909
// skipping _24908  name type: 0
    object _24907 = NOVALUE; // 47924 24907
    object _24906 = NOVALUE; // 47922 24906
// skipping _24905  name type: 0
    object _24904 = NOVALUE; // 47918 24904
    object _24903 = NOVALUE; // 47916 24903
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Show pc: 1 op: INTEGER_CHECK (96)
    // SubProg Show pc: 3 op: STARTLINE (58)

    /** symtab.e:1114		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Show pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24903 = (object)*(((s1_ptr)_2)->base + _s_47912);
    // SubProg Show pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24903);
    _24904 = (object)*(((s1_ptr)_2)->base + 11);
    _24903 = NOVALUE;
    // SubProg Show pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    if (!IS_ATOM_INT(_24904)){
        _p_47914 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24904)->dbl));
    }
    else{
        _p_47914 = (object)*(((s1_ptr)_2)->base + _24904);
    }
    if (!IS_ATOM_INT(_p_47914)){
        _p_47914 = (object)DBL_PTR(_p_47914)->dbl;
    }
    // SubProg Show pc: 25 op: STARTLINE (58)

    /** symtab.e:1116		if SymTab[s][S_SAMEHASH] or p = s then*/
    // SubProg Show pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24906 = (object)*(((s1_ptr)_2)->base + _s_47912);
    // SubProg Show pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24906);
    _24907 = (object)*(((s1_ptr)_2)->base + 9);
    _24906 = NOVALUE;
    // SubProg Show pc: 39 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24907)) {
        if (_24907 != 0) {
            goto L1; // [39] 52
        }
    }
    else {
        if (DBL_PTR(_24907)->dbl != 0.0) {
            goto L1; // [39] 52
        }
    }
    // SubProg Show pc: 43 op: EQUALS (3)
    _24909 = (_p_47914 == _s_47912);
    // SubProg Show pc: 47 op: NOP1 (159)
    // SubProg Show pc: 48 op: IF (20)
    if (_24909 == 0)
    {
        DeRef(_24909);
        _24909 = NOVALUE;
        goto L2; // [48] 58
    }
    else{
        DeRef(_24909);
        _24909 = NOVALUE;
    }
    // SubProg Show pc: 51 op: NOP1 (159)
L1: // addr: 52 pc: 51 sub: 47909 op: 159
    // SubProg Show pc: 52 op: STARTLINE (58)

    /** symtab.e:1118			return*/
    // SubProg Show pc: 54 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Show

// block var s_47912

// block var p_47914
    _24904 = NOVALUE;
    _24907 = NOVALUE;
    return;
    // SubProg Show pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 47909 op: 159
    // SubProg Show pc: 58 op: STARTLINE (58)

    /** symtab.e:1121		SymTab[s][S_SAMEHASH] = p*/
    // SubProg Show pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 62 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _35SymTab_14156 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47912 + ((s1_ptr)_2)->base);
    // SubProg Show pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 69 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_47914;
    DeRef(_1);
    _24910 = NOVALUE;
    // SubProg Show pc: 73 op: STARTLINE (58)

    /** symtab.e:1122		buckets[SymTab[s][S_HASHVAL]] = s*/
    // SubProg Show pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24912 = (object)*(((s1_ptr)_2)->base + _s_47912);
    // SubProg Show pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24912);
    _24913 = (object)*(((s1_ptr)_2)->base + 11);
    _24912 = NOVALUE;
    // SubProg Show pc: 89 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_53buckets_46253);
    if (!IS_ATOM_INT(_24913))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24913)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24913);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_47912;
    DeRef(_1);
    // SubProg Show pc: 93 op: STARTLINE (58)

    /** symtab.e:1124	end procedure*/
    // SubProg Show pc: 95 op: RETURNP (29)

// Exiting block BLOCK: Show

// block var s_47912

// block var p_47914
    _24904 = NOVALUE;
    _24913 = NOVALUE;
    _24907 = NOVALUE;
    return;
    // SubProg Show pc: 98 op: BADRETURNF (43)
    ;
}


void _53hide_params(object _s_47938)
{
    object _param_47940 = NOVALUE;
// skipping _24917  name type: 0
    object _24916 = NOVALUE; // 47948 24916
    object _24915 = NOVALUE; // 47946 24915
    object _24914 = NOVALUE; // 47944 24914
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hide_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1127		symtab_index param = s*/
    // SubProg hide_params pc: 5 op: ASSIGN (18)
    _param_47940 = _s_47938;
    // SubProg hide_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1128		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg hide_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24914 = (object)*(((s1_ptr)_2)->base + _s_47938);
    // SubProg hide_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24914);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _24915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _24915 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _24914 = NOVALUE;
    // SubProg hide_params pc: 24 op: FOR (21)
    {
        object _i_47942;
        _i_47942 = 1;
L1: // addr: 31 pc: 24 sub: 47935 op: 21
        if (binary_op_a(GREATER, _i_47942, _24915)){
            goto L2; // [24] 59
        }
        // SubProg hide_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1129			param = SymTab[s][S_NEXT]*/
        // SubProg hide_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24916 = (object)*(((s1_ptr)_2)->base + _s_47938);
        // SubProg hide_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24916);
        _param_47940 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47940)){
            _param_47940 = (object)DBL_PTR(_param_47940)->dbl;
        }
        _24916 = NOVALUE;
        // SubProg hide_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1130			Hide( param )*/
        // SubProg hide_params pc: 49 op: PROC (27)
        _53Hide(_param_47940);
        // SubProg hide_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1131		end for*/
        // SubProg hide_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_47942;
        if (IS_ATOM_INT(_i_47942)) {
            _i_47942 = _i_47942 + 1;
            if ((object)((uintptr_t)_i_47942 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47942 = NewDouble((eudouble)_i_47942);
            }
        }
        else {
            _i_47942 = binary_op_a(PLUS, _i_47942, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 47935 op: 54
        ;
        DeRef(_i_47942);
    }
    // SubProg hide_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1132	end procedure*/
    // SubProg hide_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: hide_params

// block var s_47938

// block var param_47940
    _24915 = NOVALUE;
    return;
    // SubProg hide_params pc: 64 op: BADRETURNF (43)
    ;
}


void _53show_params(object _s_47954)
{
    object _param_47956 = NOVALUE;
// skipping _24921  name type: 0
    object _24920 = NOVALUE; // 47964 24920
    object _24919 = NOVALUE; // 47962 24919
    object _24918 = NOVALUE; // 47960 24918
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1135		symtab_index param = s*/
    // SubProg show_params pc: 5 op: ASSIGN (18)
    _param_47956 = _s_47954;
    // SubProg show_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1136		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg show_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24918 = (object)*(((s1_ptr)_2)->base + _s_47954);
    // SubProg show_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24918);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _24919 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _24919 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _24918 = NOVALUE;
    // SubProg show_params pc: 24 op: FOR (21)
    {
        object _i_47958;
        _i_47958 = 1;
L1: // addr: 31 pc: 24 sub: 47951 op: 21
        if (binary_op_a(GREATER, _i_47958, _24919)){
            goto L2; // [24] 59
        }
        // SubProg show_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1137			param = SymTab[s][S_NEXT]*/
        // SubProg show_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24920 = (object)*(((s1_ptr)_2)->base + _s_47954);
        // SubProg show_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24920);
        _param_47956 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47956)){
            _param_47956 = (object)DBL_PTR(_param_47956)->dbl;
        }
        _24920 = NOVALUE;
        // SubProg show_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1138			Show( param )*/
        // SubProg show_params pc: 49 op: PROC (27)
        _53Show(_param_47956);
        // SubProg show_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1139		end for*/
        // SubProg show_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_47958;
        if (IS_ATOM_INT(_i_47958)) {
            _i_47958 = _i_47958 + 1;
            if ((object)((uintptr_t)_i_47958 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47958 = NewDouble((eudouble)_i_47958);
            }
        }
        else {
            _i_47958 = binary_op_a(PLUS, _i_47958, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 47951 op: 54
        ;
        DeRef(_i_47958);
    }
    // SubProg show_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1140	end procedure*/
    // SubProg show_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: show_params

// block var s_47954

// block var param_47956
    _24919 = NOVALUE;
    return;
    // SubProg show_params pc: 64 op: BADRETURNF (43)
    ;
}


void _53LintCheck(object _s_47970)
{
    object _warn_level_47971 = NOVALUE;
    object _file_47972 = NOVALUE;
    object _vscope_47973 = NOVALUE;
    object _vname_47974 = NOVALUE;
    object _vusage_47975 = NOVALUE;
    object _24981 = NOVALUE; // 48137 24981
    object _24980 = NOVALUE; // 48136 24980
    object _24979 = NOVALUE; // 48134 24979
    object _24978 = NOVALUE; // 48128 24978
    object _24977 = NOVALUE; // 48127 24977
    object _24976 = NOVALUE; // 48125 24976
// skipping _24975  name type: 0
    object _24974 = NOVALUE; // 48115 24974
    object _24973 = NOVALUE; // 48114 24973
    object _24972 = NOVALUE; // 48112 24972
    object _24971 = NOVALUE; // 48106 24971
    object _24970 = NOVALUE; // 48105 24970
    object _24969 = NOVALUE; // 48103 24969
// skipping _24968  name type: 0
// skipping _24967  name type: 0
    object _24966 = NOVALUE; // 48093 24966
    object _24965 = NOVALUE; // 48091 24965
    object _24964 = NOVALUE; // 48088 24964
    object _24963 = NOVALUE; // 48086 24963
    object _24962 = NOVALUE; // 48082 24962
    object _24961 = NOVALUE; // 48078 24961
// skipping _24960  name type: 0
    object _24959 = NOVALUE; // 48073 24959
// skipping _24958  name type: 0
    object _24957 = NOVALUE; // 48068 24957
    object _24956 = NOVALUE; // 48066 24956
// skipping _24955  name type: 0
    object _24954 = NOVALUE; // 48062 24954
    object _24953 = NOVALUE; // 48060 24953
// skipping _24952  name type: 0
    object _24951 = NOVALUE; // 48052 24951
    object _24950 = NOVALUE; // 48051 24950
    object _24949 = NOVALUE; // 48049 24949
    object _24948 = NOVALUE; // 48043 24948
// skipping _24947  name type: 0
    object _24946 = NOVALUE; // 48039 24946
    object _24945 = NOVALUE; // 48037 24945
// skipping _24944  name type: 0
// skipping _24943  name type: 0
// skipping _24942  name type: 0
    object _24941 = NOVALUE; // 48027 24941
// skipping _24940  name type: 0
// skipping _24939  name type: 0
    object _24938 = NOVALUE; // 48018 24938
    object _24937 = NOVALUE; // 48016 24937
    object _24936 = NOVALUE; // 48013 24936
    object _24935 = NOVALUE; // 48011 24935
// skipping _24934  name type: 0
// skipping _24933  name type: 0
    object _24932 = NOVALUE; // 48001 24932
    object _24931 = NOVALUE; // 47999 24931
// skipping _24930  name type: 0
// skipping _24927  name type: 0
    object _24926 = NOVALUE; // 47985 24926
// skipping _24925  name type: 0
    object _24924 = NOVALUE; // 47981 24924
// skipping _24923  name type: 0
    object _24922 = NOVALUE; // 47977 24922
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg LintCheck pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47970)) {
        _1 = (object)(DBL_PTR(_s_47970)->dbl);
        DeRefDS(_s_47970);
        _s_47970 = _1;
    }
    // SubProg LintCheck pc: 3 op: STARTLINE (58)

    /** symtab.e:1150		vusage = SymTab[s][S_USAGE]*/
    // SubProg LintCheck pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24922 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24922);
    _vusage_47975 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_vusage_47975)){
        _vusage_47975 = (object)DBL_PTR(_vusage_47975)->dbl;
    }
    _24922 = NOVALUE;
    // SubProg LintCheck pc: 19 op: STARTLINE (58)

    /** symtab.e:1151		vscope = SymTab[s][S_SCOPE]*/
    // SubProg LintCheck pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24924 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24924);
    _vscope_47973 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_vscope_47973)){
        _vscope_47973 = (object)DBL_PTR(_vscope_47973)->dbl;
    }
    _24924 = NOVALUE;
    // SubProg LintCheck pc: 35 op: STARTLINE (58)

    /** symtab.e:1152		vname = SymTab[s][S_NAME]*/
    // SubProg LintCheck pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24926 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_vname_47974);
    _2 = (object)SEQ_PTR(_24926);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _vname_47974 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _vname_47974 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    Ref(_vname_47974);
    _24926 = NOVALUE;
    // SubProg LintCheck pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 51 op: STARTLINE (58)

    /** symtab.e:1154		switch vusage do*/
    // SubProg LintCheck pc: 53 op: SWITCH_I (193)
    _0 = _vusage_47975;
    switch ( _0 ){ 
        // SubProg LintCheck pc: 58 op: STARTLINE (58)

        /** symtab.e:1156			case U_UNUSED then*/
        // SubProg LintCheck pc: 60 op: CASE (186)
        case 0:
        // SubProg LintCheck pc: 62 op: STARTLINE (58)

        /** symtab.e:1157				warn_level = 1*/
        // SubProg LintCheck pc: 64 op: ASSIGN_I (113)
        _warn_level_47971 = 1;
        // SubProg LintCheck pc: 67 op: ELSE (23)
        goto L1; // [67] 193
        // SubProg LintCheck pc: 69 op: STARTLINE (58)

        /** symtab.e:1159			case U_WRITTEN then -- Set but never read*/
        // SubProg LintCheck pc: 71 op: CASE (186)
        case 2:
        // SubProg LintCheck pc: 73 op: STARTLINE (58)

        /** symtab.e:1160				warn_level = 2*/
        // SubProg LintCheck pc: 75 op: ASSIGN_I (113)
        _warn_level_47971 = 2;
        // SubProg LintCheck pc: 78 op: STARTLINE (58)

        /** symtab.e:1162				if vscope > SC_LOCAL then*/
        // SubProg LintCheck pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 82 op: GREATER_IFW (107)
        if (_vscope_47973 <= 5)
        goto L2; // [82] 94
        // SubProg LintCheck pc: 86 op: STARTLINE (58)

        /** symtab.e:1164					warn_level = 0 */
        // SubProg LintCheck pc: 88 op: ASSIGN_I (113)
        _warn_level_47971 = 0;
        // SubProg LintCheck pc: 91 op: ELSE (23)
        goto L1; // [91] 193
        // SubProg LintCheck pc: 93 op: NOP1 (159)
L2: // addr: 94 pc: 93 sub: 47967 op: 159
        // SubProg LintCheck pc: 94 op: STARTLINE (58)

        /** symtab.e:1166				elsif SymTab[s][S_MODE] = M_CONSTANT then*/
        // SubProg LintCheck pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24931 = (object)*(((s1_ptr)_2)->base + _s_47970);
        // SubProg LintCheck pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24931);
        _24932 = (object)*(((s1_ptr)_2)->base + 3);
        _24931 = NOVALUE;
        // SubProg LintCheck pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 110 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24932, 2)){
            _24932 = NOVALUE;
            goto L1; // [110] 193
        }
        _24932 = NOVALUE;
        // SubProg LintCheck pc: 114 op: STARTLINE (58)

        /** symtab.e:1167					if not Strict_is_on then*/
        // SubProg LintCheck pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 118 op: NOT_IFW (108)
        if (_34Strict_is_on_15253 != 0)
        goto L1; // [118] 193
        // SubProg LintCheck pc: 121 op: STARTLINE (58)

        /** symtab.e:1170						warn_level = 0 */
        // SubProg LintCheck pc: 123 op: ASSIGN_I (113)
        _warn_level_47971 = 0;
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
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24935 = (object)*(((s1_ptr)_2)->base + _s_47970);
        // SubProg LintCheck pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24935);
        _24936 = (object)*(((s1_ptr)_2)->base + 16);
        _24935 = NOVALUE;
        // SubProg LintCheck pc: 149 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 151 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_35SymTab_14156);
        _24937 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
        // SubProg LintCheck pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24937);
        if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
            _24938 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
        }
        else{
            _24938 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
        }
        _24937 = NOVALUE;
        // SubProg LintCheck pc: 163 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _24936, _24938)){
            _24936 = NOVALUE;
            _24938 = NOVALUE;
            goto L3; // [163] 175
        }
        _24936 = NOVALUE;
        _24938 = NOVALUE;
        // SubProg LintCheck pc: 167 op: STARTLINE (58)

        /** symtab.e:1176			    	warn_level = 3*/
        // SubProg LintCheck pc: 169 op: ASSIGN_I (113)
        _warn_level_47971 = 3;
        // SubProg LintCheck pc: 172 op: ELSE (23)
        goto L1; // [172] 193
        // SubProg LintCheck pc: 174 op: NOP1 (159)
L3: // addr: 175 pc: 174 sub: 47967 op: 159
        // SubProg LintCheck pc: 175 op: STARTLINE (58)

        /** symtab.e:1179			    	warn_level = 0*/
        // SubProg LintCheck pc: 177 op: ASSIGN_I (113)
        _warn_level_47971 = 0;
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
        _warn_level_47971 = 0;
        // SubProg LintCheck pc: 192 op: NOPSWITCH (187)
    ;}L1: // addr: 193 pc: 192 sub: 47967 op: 187
    // SubProg LintCheck pc: 193 op: STARTLINE (58)

    /** symtab.e:1186		if warn_level = 0 then*/
    // SubProg LintCheck pc: 195 op: PRIVATE_INIT_CHECK (30)
    // SubProg LintCheck pc: 197 op: EQUALS_IFW_I (121)
    if (_warn_level_47971 != 0)
    goto L4; // [197] 207
    // SubProg LintCheck pc: 201 op: STARTLINE (58)

    /** symtab.e:1187			return*/
    // SubProg LintCheck pc: 203 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: LintCheck

// block var s_47970

// block var warn_level_47971

// block var file_47972
    DeRef(_file_47972);

// block var vscope_47973

// block var vname_47974
    DeRef(_vname_47974);

// block var vusage_47975
    return;
    // SubProg LintCheck pc: 206 op: NOP1 (159)
L4: // addr: 207 pc: 206 sub: 47967 op: 159
    // SubProg LintCheck pc: 207 op: STARTLINE (58)

    /** symtab.e:1191		file = abbreviate_path(known_files[current_file_no])*/
    // SubProg LintCheck pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35known_files_14157);
    _24941 = (object)*(((s1_ptr)_2)->base + _34current_file_no_15188);
    // SubProg LintCheck pc: 217 op: PROC (27)
    Ref(_24941);
    RefDS(_21936);
    _0 = _file_47972;
    _file_47972 = _18abbreviate_path(_24941, _21936);
    DeRef(_0);
    _24941 = NOVALUE;
    // SubProg LintCheck pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 224 op: STARTLINE (58)

    /** symtab.e:1192		if warn_level = 3 then*/
    // SubProg LintCheck pc: 226 op: EQUALS_IFW_I (121)
    if (_warn_level_47971 != 3)
    goto L5; // [226] 308
    // SubProg LintCheck pc: 230 op: STARTLINE (58)

    /** symtab.e:1193			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 234 op: EQUALS_IFW (104)
    if (_vscope_47973 != 5)
    goto L6; // [234] 275
    // SubProg LintCheck pc: 238 op: STARTLINE (58)

    /** symtab.e:1194				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 244 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24945 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24945);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24946 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24946 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24945 = NOVALUE;
    // SubProg LintCheck pc: 254 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _34current_file_no_15188, _24946)){
        _24946 = NOVALUE;
        goto L7; // [254] 602
    }
    _24946 = NOVALUE;
    // SubProg LintCheck pc: 258 op: STARTLINE (58)

    /** symtab.e:1195					Warning(226, no_value_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47974);
    RefDS(_file_47972);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47972;
    ((intptr_t *)_2)[2] = _vname_47974;
    _24948 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 266 op: PROC (27)
    _49Warning(226, 32, _24948);
    _24948 = NOVALUE;
    // SubProg LintCheck pc: 271 op: NOP1 (159)
    // SubProg LintCheck pc: 272 op: ELSE (23)
    goto L7; // [272] 602
    // SubProg LintCheck pc: 274 op: NOP1 (159)
L6: // addr: 275 pc: 274 sub: 47967 op: 159
    // SubProg LintCheck pc: 275 op: STARTLINE (58)

    /** symtab.e:1198				Warning(227, no_value_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24949 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 289 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24949);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24950 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24950 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24949 = NOVALUE;
    // SubProg LintCheck pc: 293 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47972);
    ((intptr_t*)_2)[1] = _file_47972;
    RefDS(_vname_47974);
    ((intptr_t*)_2)[2] = _vname_47974;
    Ref(_24950);
    ((intptr_t*)_2)[3] = _24950;
    _24951 = MAKE_SEQ(_1);
    _24950 = NOVALUE;
    // SubProg LintCheck pc: 299 op: PROC (27)
    _49Warning(227, 32, _24951);
    _24951 = NOVALUE;
    // SubProg LintCheck pc: 304 op: NOP1 (159)
    // SubProg LintCheck pc: 305 op: ELSE (23)
    goto L7; // [305] 602
    // SubProg LintCheck pc: 307 op: NOP1 (159)
L5: // addr: 308 pc: 307 sub: 47967 op: 159
    // SubProg LintCheck pc: 308 op: STARTLINE (58)

    /** symtab.e:1201			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 310 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 312 op: EQUALS_IFW (104)
    if (_vscope_47973 != 5)
    goto L8; // [312] 412
    // SubProg LintCheck pc: 316 op: STARTLINE (58)

    /** symtab.e:1202				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 322 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24953 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24953);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24954 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24954 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24953 = NOVALUE;
    // SubProg LintCheck pc: 332 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _34current_file_no_15188, _24954)){
        _24954 = NOVALUE;
        goto L9; // [332] 601
    }
    _24954 = NOVALUE;
    // SubProg LintCheck pc: 336 op: STARTLINE (58)

    /** symtab.e:1203					if SymTab[s][S_MODE] = M_CONSTANT then*/
    // SubProg LintCheck pc: 338 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 340 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24956 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 346 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24956);
    _24957 = (object)*(((s1_ptr)_2)->base + 3);
    _24956 = NOVALUE;
    // SubProg LintCheck pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 352 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24957, 2)){
        _24957 = NOVALUE;
        goto LA; // [352] 372
    }
    _24957 = NOVALUE;
    // SubProg LintCheck pc: 356 op: STARTLINE (58)

    /** symtab.e:1204						Warning(228, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 360 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47974);
    RefDS(_file_47972);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47972;
    ((intptr_t *)_2)[2] = _vname_47974;
    _24959 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 364 op: PROC (27)
    _49Warning(228, 16, _24959);
    _24959 = NOVALUE;
    // SubProg LintCheck pc: 369 op: ELSE (23)
    goto L9; // [369] 601
    // SubProg LintCheck pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 47967 op: 159
    // SubProg LintCheck pc: 372 op: STARTLINE (58)

    /** symtab.e:1206					elsif warn_level = 1 then*/
    // SubProg LintCheck pc: 374 op: EQUALS_IFW_I (121)
    if (_warn_level_47971 != 1)
    goto LB; // [374] 394
    // SubProg LintCheck pc: 378 op: STARTLINE (58)

    /** symtab.e:1207						Warning(229, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 382 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47974);
    RefDS(_file_47972);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47972;
    ((intptr_t *)_2)[2] = _vname_47974;
    _24961 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 386 op: PROC (27)
    _49Warning(229, 16, _24961);
    _24961 = NOVALUE;
    // SubProg LintCheck pc: 391 op: ELSE (23)
    goto L9; // [391] 601
    // SubProg LintCheck pc: 393 op: NOP1 (159)
LB: // addr: 394 pc: 393 sub: 47967 op: 159
    // SubProg LintCheck pc: 394 op: STARTLINE (58)

    /** symtab.e:1210						Warning(320, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 398 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47974);
    RefDS(_file_47972);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47972;
    ((intptr_t *)_2)[2] = _vname_47974;
    _24962 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 402 op: PROC (27)
    _49Warning(320, 16, _24962);
    _24962 = NOVALUE;
    // SubProg LintCheck pc: 407 op: NOP1 (159)
    // SubProg LintCheck pc: 408 op: NOP1 (159)
    // SubProg LintCheck pc: 409 op: ELSE (23)
    goto L9; // [409] 601
    // SubProg LintCheck pc: 411 op: NOP1 (159)
L8: // addr: 412 pc: 411 sub: 47967 op: 159
    // SubProg LintCheck pc: 412 op: STARTLINE (58)

    /** symtab.e:1214				if SymTab[s][S_VARNUM] < SymTab[CurrentSub][S_NUM_ARGS] then*/
    // SubProg LintCheck pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 416 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24963 = (object)*(((s1_ptr)_2)->base + _s_47970);
    // SubProg LintCheck pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 422 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24963);
    _24964 = (object)*(((s1_ptr)_2)->base + 16);
    _24963 = NOVALUE;
    // SubProg LintCheck pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24965 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 434 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24965);
    if (!IS_ATOM_INT(_34S_NUM_ARGS_14894)){
        _24966 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NUM_ARGS_14894)->dbl));
    }
    else{
        _24966 = (object)*(((s1_ptr)_2)->base + _34S_NUM_ARGS_14894);
    }
    _24965 = NOVALUE;
    // SubProg LintCheck pc: 440 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _24964, _24966)){
        _24964 = NOVALUE;
        _24966 = NOVALUE;
        goto LC; // [440] 523
    }
    _24964 = NOVALUE;
    _24966 = NOVALUE;
    // SubProg LintCheck pc: 444 op: STARTLINE (58)

    /** symtab.e:1216					if warn_level = 1 then*/
    // SubProg LintCheck pc: 446 op: EQUALS_IFW_I (121)
    if (_warn_level_47971 != 1)
    goto LD; // [446] 490
    // SubProg LintCheck pc: 450 op: STARTLINE (58)

    /** symtab.e:1217						if Strict_is_on then*/
    // SubProg LintCheck pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 454 op: IF (20)
    if (_34Strict_is_on_15253 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24969 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 469 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 471 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24969);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24970 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24970 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24969 = NOVALUE;
    // SubProg LintCheck pc: 475 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47972);
    ((intptr_t*)_2)[1] = _file_47972;
    RefDS(_vname_47974);
    ((intptr_t*)_2)[2] = _vname_47974;
    Ref(_24970);
    ((intptr_t*)_2)[3] = _24970;
    _24971 = MAKE_SEQ(_1);
    _24970 = NOVALUE;
    // SubProg LintCheck pc: 481 op: PROC (27)
    _49Warning(230, 16, _24971);
    _24971 = NOVALUE;
    // SubProg LintCheck pc: 486 op: NOP1 (159)
    // SubProg LintCheck pc: 487 op: ELSE (23)
    goto LE; // [487] 600
    // SubProg LintCheck pc: 489 op: NOP1 (159)
LD: // addr: 490 pc: 489 sub: 47967 op: 159
    // SubProg LintCheck pc: 490 op: STARTLINE (58)

    /** symtab.e:1222						Warning(321, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 494 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 496 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 498 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24972 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 502 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 504 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24972);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24973 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24973 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24972 = NOVALUE;
    // SubProg LintCheck pc: 508 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47972);
    ((intptr_t*)_2)[1] = _file_47972;
    RefDS(_vname_47974);
    ((intptr_t*)_2)[2] = _vname_47974;
    Ref(_24973);
    ((intptr_t*)_2)[3] = _24973;
    _24974 = MAKE_SEQ(_1);
    _24973 = NOVALUE;
    // SubProg LintCheck pc: 514 op: PROC (27)
    _49Warning(321, 16, _24974);
    _24974 = NOVALUE;
    // SubProg LintCheck pc: 519 op: NOP1 (159)
    // SubProg LintCheck pc: 520 op: ELSE (23)
    goto LE; // [520] 600
    // SubProg LintCheck pc: 522 op: NOP1 (159)
LC: // addr: 523 pc: 522 sub: 47967 op: 159
    // SubProg LintCheck pc: 523 op: STARTLINE (58)

    /** symtab.e:1226					if warn_level = 1 then*/
    // SubProg LintCheck pc: 525 op: EQUALS_IFW_I (121)
    if (_warn_level_47971 != 1)
    goto LF; // [525] 569
    // SubProg LintCheck pc: 529 op: STARTLINE (58)

    /** symtab.e:1227						if Strict_is_on then*/
    // SubProg LintCheck pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 533 op: IF (20)
    if (_34Strict_is_on_15253 == 0)
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
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24976 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 550 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24976);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24977 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24977 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24976 = NOVALUE;
    // SubProg LintCheck pc: 554 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47972);
    ((intptr_t*)_2)[1] = _file_47972;
    RefDS(_vname_47974);
    ((intptr_t*)_2)[2] = _vname_47974;
    Ref(_24977);
    ((intptr_t*)_2)[3] = _24977;
    _24978 = MAKE_SEQ(_1);
    _24977 = NOVALUE;
    // SubProg LintCheck pc: 560 op: PROC (27)
    _49Warning(231, 16, _24978);
    _24978 = NOVALUE;
    // SubProg LintCheck pc: 565 op: NOP1 (159)
    // SubProg LintCheck pc: 566 op: ELSE (23)
    goto L10; // [566] 599
    // SubProg LintCheck pc: 568 op: NOP1 (159)
LF: // addr: 569 pc: 568 sub: 47967 op: 159
    // SubProg LintCheck pc: 569 op: STARTLINE (58)

    /** symtab.e:1232						Warning(322, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 571 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 577 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24979 = (object)*(((s1_ptr)_2)->base + _34CurrentSub_15196);
    // SubProg LintCheck pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 583 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24979);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24980 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24980 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24979 = NOVALUE;
    // SubProg LintCheck pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47972);
    ((intptr_t*)_2)[1] = _file_47972;
    RefDS(_vname_47974);
    ((intptr_t*)_2)[2] = _vname_47974;
    Ref(_24980);
    ((intptr_t*)_2)[3] = _24980;
    _24981 = MAKE_SEQ(_1);
    _24980 = NOVALUE;
    // SubProg LintCheck pc: 593 op: PROC (27)
    _49Warning(322, 16, _24981);
    _24981 = NOVALUE;
    // SubProg LintCheck pc: 598 op: NOP1 (159)
L10: // addr: 599 pc: 598 sub: 47967 op: 159
    // SubProg LintCheck pc: 599 op: NOP1 (159)
LE: // addr: 600 pc: 599 sub: 47967 op: 159
    // SubProg LintCheck pc: 600 op: NOP1 (159)
L9: // addr: 601 pc: 600 sub: 47967 op: 159
    // SubProg LintCheck pc: 601 op: NOP1 (159)
L7: // addr: 602 pc: 601 sub: 47967 op: 159
    // SubProg LintCheck pc: 602 op: STARTLINE (58)

    /** symtab.e:1238	end procedure*/
    // SubProg LintCheck pc: 604 op: RETURNP (29)

// Exiting block BLOCK: LintCheck

// block var s_47970

// block var warn_level_47971

// block var file_47972
    DeRef(_file_47972);

// block var vscope_47973

// block var vname_47974
    DeRef(_vname_47974);

// block var vusage_47975
    return;
    // SubProg LintCheck pc: 607 op: BADRETURNF (43)
    ;
}


void _53HideLocals()
{
    object _s_48141 = NOVALUE;
// skipping _24995  name type: 0
    object _24994 = NOVALUE; // 48174 24994
// skipping _24993  name type: 0
    object _24992 = NOVALUE; // 48170 24992
    object _24991 = NOVALUE; // 48168 24991
    object _24990 = NOVALUE; // 48163 24990
    object _24989 = NOVALUE; // 48162 24989
    object _24988 = NOVALUE; // 48158 24988
    object _24987 = NOVALUE; // 48156 24987
    object _24986 = NOVALUE; // 48154 24986
    object _24985 = NOVALUE; // 48152 24985
    object _24984 = NOVALUE; // 48151 24984
    object _24983 = NOVALUE; // 48149 24983
    object _24982 = NOVALUE; // 48147 24982
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg HideLocals pc: 1 op: STARTLINE (58)

    /** symtab.e:1244		mark_rechecks()*/
    // SubProg HideLocals pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 5 op: PROC (27)
    _53mark_rechecks(_34current_file_no_15188);
    // SubProg HideLocals pc: 8 op: STARTLINE (58)

    /** symtab.e:1245		s = file_start_sym*/
    // SubProg HideLocals pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 12 op: ASSIGN (18)
    _s_48141 = _34file_start_sym_15194;
    // SubProg HideLocals pc: 15 op: INTEGER_CHECK (96)
    // SubProg HideLocals pc: 17 op: STARTLINE (58)

    /** symtab.e:1246		while s do*/
    // SubProg HideLocals pc: 19 op: NOP2 (110)
    // SubProg HideLocals pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 48138 op: 158
    // SubProg HideLocals pc: 22 op: WHILE (47)
    if (_s_48141 == 0)
    {
        goto L2; // [22] 148
    }
    else{
    }
    // SubProg HideLocals pc: 25 op: STARTLINE (58)

    /** symtab.e:1247			if SymTab[s][S_SCOPE] = SC_LOCAL and*/
    // SubProg HideLocals pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24982 = (object)*(((s1_ptr)_2)->base + _s_48141);
    // SubProg HideLocals pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24982);
    _24983 = (object)*(((s1_ptr)_2)->base + 4);
    _24982 = NOVALUE;
    // SubProg HideLocals pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_24983)) {
        _24984 = (_24983 == 5);
    }
    else {
        _24984 = binary_op(EQUALS, _24983, 5);
    }
    _24983 = NOVALUE;
    // SubProg HideLocals pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24984)) {
        if (_24984 == 0) {
            goto L3; // [45] 127
        }
    }
    else {
        if (DBL_PTR(_24984)->dbl == 0.0) {
            goto L3; // [45] 127
        }
    }
    // SubProg HideLocals pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24986 = (object)*(((s1_ptr)_2)->base + _s_48141);
    // SubProg HideLocals pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24986);
    if (!IS_ATOM_INT(_34S_FILE_NO_14839)){
        _24987 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_FILE_NO_14839)->dbl));
    }
    else{
        _24987 = (object)*(((s1_ptr)_2)->base + _34S_FILE_NO_14839);
    }
    _24986 = NOVALUE;
    // SubProg HideLocals pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 63 op: EQUALS (3)
    if (IS_ATOM_INT(_24987)) {
        _24988 = (_24987 == _34current_file_no_15188);
    }
    else {
        _24988 = binary_op(EQUALS, _24987, _34current_file_no_15188);
    }
    _24987 = NOVALUE;
    // SubProg HideLocals pc: 67 op: NOP1 (159)
    // SubProg HideLocals pc: 68 op: IF (20)
    if (_24988 == 0) {
        DeRef(_24988);
        _24988 = NOVALUE;
        goto L3; // [68] 127
    }
    else {
        if (!IS_ATOM_INT(_24988) && DBL_PTR(_24988)->dbl == 0.0){
            DeRef(_24988);
            _24988 = NOVALUE;
            goto L3; // [68] 127
        }
        DeRef(_24988);
        _24988 = NOVALUE;
    }
    DeRef(_24988);
    _24988 = NOVALUE;
    // SubProg HideLocals pc: 71 op: STARTLINE (58)

    /** symtab.e:1249			   	if current_block = top_level_block and repl then*/
    // SubProg HideLocals pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 77 op: EQUALS (3)
    _24989 = (_64current_block_24751 == -1);
    // SubProg HideLocals pc: 81 op: SC1_AND_IF (146)
    if (_24989 == 0) {
        goto L4; // [81] 94
    }
    // SubProg HideLocals pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 87 op: NOP1 (159)
    // SubProg HideLocals pc: 88 op: IF (20)
    goto L4; // [88] 94
    // SubProg HideLocals pc: 91 op: ELSE (23)
    goto L5; // [91] 100
    // SubProg HideLocals pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 48138 op: 159
    // SubProg HideLocals pc: 94 op: STARTLINE (58)

    /** symtab.e:1251				Hide(s)*/
    // SubProg HideLocals pc: 96 op: PROC (27)
    _53Hide(_s_48141);
    // SubProg HideLocals pc: 99 op: NOP1 (159)
L5: // addr: 100 pc: 99 sub: 48138 op: 159
    // SubProg HideLocals pc: 100 op: STARTLINE (58)

    /** symtab.e:1253				if SymTab[s][S_TOKEN] = VARIABLE then*/
    // SubProg HideLocals pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24991 = (object)*(((s1_ptr)_2)->base + _s_48141);
    // SubProg HideLocals pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 110 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24991);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24992 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24992 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24991 = NOVALUE;
    // SubProg HideLocals pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 116 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24992, -100)){
        _24992 = NOVALUE;
        goto L6; // [116] 126
    }
    _24992 = NOVALUE;
    // SubProg HideLocals pc: 120 op: STARTLINE (58)

    /** symtab.e:1254					LintCheck(s)*/
    // SubProg HideLocals pc: 122 op: PROC (27)
    _53LintCheck(_s_48141);
    // SubProg HideLocals pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 48138 op: 159
    // SubProg HideLocals pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 48138 op: 159
    // SubProg HideLocals pc: 127 op: STARTLINE (58)

    /** symtab.e:1257			s = SymTab[s][S_NEXT]*/
    // SubProg HideLocals pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24994 = (object)*(((s1_ptr)_2)->base + _s_48141);
    // SubProg HideLocals pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 137 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24994);
    _s_48141 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_48141)){
        _s_48141 = (object)DBL_PTR(_s_48141)->dbl;
    }
    _24994 = NOVALUE;
    // SubProg HideLocals pc: 143 op: STARTLINE (58)

    /** symtab.e:1258		end while*/
    // SubProg HideLocals pc: 145 op: ENDWHILE (22)
    goto L1; // [145] 22
    // SubProg HideLocals pc: 147 op: NOP1 (159)
L2: // addr: 148 pc: 147 sub: 48138 op: 159
    // SubProg HideLocals pc: 148 op: STARTLINE (58)

    /** symtab.e:1259	end procedure*/
    // SubProg HideLocals pc: 150 op: RETURNP (29)

// Exiting block BLOCK: HideLocals

// block var s_48141
    DeRef(_24989);
    _24989 = NOVALUE;
    DeRef(_24984);
    _24984 = NOVALUE;
    return;
    // SubProg HideLocals pc: 153 op: BADRETURNF (43)
    ;
}


object _53sym_name(object _sym_48180)
{
    object _24997 = NOVALUE; // 48184 24997
    object _24996 = NOVALUE; // 48182 24996
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48180)) {
        _1 = (object)(DBL_PTR(_sym_48180)->dbl);
        DeRefDS(_sym_48180);
        _sym_48180 = _1;
    }
    // SubProg sym_name pc: 3 op: STARTLINE (58)

    /** symtab.e:1262		return SymTab[sym][S_NAME]*/
    // SubProg sym_name pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24996 = (object)*(((s1_ptr)_2)->base + _sym_48180);
    // SubProg sym_name pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24996);
    if (!IS_ATOM_INT(_34S_NAME_14843)){
        _24997 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NAME_14843)->dbl));
    }
    else{
        _24997 = (object)*(((s1_ptr)_2)->base + _34S_NAME_14843);
    }
    _24996 = NOVALUE;
    // SubProg sym_name pc: 17 op: RETURNF (28)
    Ref(_24997);

// Exiting block BLOCK: sym_name

// block var sym_48180
    return _24997;
    // SubProg sym_name pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_token(object _sym_48188)
{
    object _24999 = NOVALUE; // 48192 24999
    object _24998 = NOVALUE; // 48190 24998
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_token pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48188)) {
        _1 = (object)(DBL_PTR(_sym_48188)->dbl);
        DeRefDS(_sym_48188);
        _sym_48188 = _1;
    }
    // SubProg sym_token pc: 3 op: STARTLINE (58)

    /** symtab.e:1266		return SymTab[sym][S_TOKEN]*/
    // SubProg sym_token pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _24998 = (object)*(((s1_ptr)_2)->base + _sym_48188);
    // SubProg sym_token pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24998);
    if (!IS_ATOM_INT(_34S_TOKEN_14848)){
        _24999 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_TOKEN_14848)->dbl));
    }
    else{
        _24999 = (object)*(((s1_ptr)_2)->base + _34S_TOKEN_14848);
    }
    _24998 = NOVALUE;
    // SubProg sym_token pc: 17 op: RETURNF (28)
    Ref(_24999);

// Exiting block BLOCK: sym_token

// block var sym_48188
    return _24999;
    // SubProg sym_token pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_scope(object _sym_48196)
{
    object _25001 = NOVALUE; // 48200 25001
    object _25000 = NOVALUE; // 48198 25000
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_scope pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48196)) {
        _1 = (object)(DBL_PTR(_sym_48196)->dbl);
        DeRefDS(_sym_48196);
        _sym_48196 = _1;
    }
    // SubProg sym_scope pc: 3 op: STARTLINE (58)

    /** symtab.e:1270		return SymTab[sym][S_SCOPE]*/
    // SubProg sym_scope pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25000 = (object)*(((s1_ptr)_2)->base + _sym_48196);
    // SubProg sym_scope pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25000);
    _25001 = (object)*(((s1_ptr)_2)->base + 4);
    _25000 = NOVALUE;
    // SubProg sym_scope pc: 17 op: RETURNF (28)
    Ref(_25001);

// Exiting block BLOCK: sym_scope

// block var sym_48196
    return _25001;
    // SubProg sym_scope pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_mode(object _sym_48204)
{
    object _25003 = NOVALUE; // 48208 25003
    object _25002 = NOVALUE; // 48206 25002
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_mode pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48204)) {
        _1 = (object)(DBL_PTR(_sym_48204)->dbl);
        DeRefDS(_sym_48204);
        _sym_48204 = _1;
    }
    // SubProg sym_mode pc: 3 op: STARTLINE (58)

    /** symtab.e:1274		return SymTab[sym][S_MODE]*/
    // SubProg sym_mode pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25002 = (object)*(((s1_ptr)_2)->base + _sym_48204);
    // SubProg sym_mode pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25002);
    _25003 = (object)*(((s1_ptr)_2)->base + 3);
    _25002 = NOVALUE;
    // SubProg sym_mode pc: 17 op: RETURNF (28)
    Ref(_25003);

// Exiting block BLOCK: sym_mode

// block var sym_48204
    return _25003;
    // SubProg sym_mode pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_obj(object _sym_48212)
{
    object _25005 = NOVALUE; // 48216 25005
    object _25004 = NOVALUE; // 48214 25004
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_obj pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48212)) {
        _1 = (object)(DBL_PTR(_sym_48212)->dbl);
        DeRefDS(_sym_48212);
        _sym_48212 = _1;
    }
    // SubProg sym_obj pc: 3 op: STARTLINE (58)

    /** symtab.e:1278		return SymTab[sym][S_OBJ]*/
    // SubProg sym_obj pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25004 = (object)*(((s1_ptr)_2)->base + _sym_48212);
    // SubProg sym_obj pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25004);
    _25005 = (object)*(((s1_ptr)_2)->base + 1);
    _25004 = NOVALUE;
    // SubProg sym_obj pc: 17 op: RETURNF (28)
    Ref(_25005);

// Exiting block BLOCK: sym_obj

// block var sym_48212
    return _25005;
    // SubProg sym_obj pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_next(object _sym_48220)
{
    object _25007 = NOVALUE; // 48224 25007
    object _25006 = NOVALUE; // 48222 25006
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next pc: 3 op: STARTLINE (58)

    /** symtab.e:1282		return SymTab[sym][S_NEXT]*/
    // SubProg sym_next pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25006 = (object)*(((s1_ptr)_2)->base + _sym_48220);
    // SubProg sym_next pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25006);
    _25007 = (object)*(((s1_ptr)_2)->base + 2);
    _25006 = NOVALUE;
    // SubProg sym_next pc: 17 op: RETURNF (28)
    Ref(_25007);

// Exiting block BLOCK: sym_next

// block var sym_48220
    return _25007;
    // SubProg sym_next pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_block(object _sym_48228)
{
    object _25009 = NOVALUE; // 48232 25009
    object _25008 = NOVALUE; // 48230 25008
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1286		return SymTab[sym][S_BLOCK]*/
    // SubProg sym_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25008 = (object)*(((s1_ptr)_2)->base + _sym_48228);
    // SubProg sym_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25008);
    if (!IS_ATOM_INT(_34S_BLOCK_14863)){
        _25009 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_BLOCK_14863)->dbl));
    }
    else{
        _25009 = (object)*(((s1_ptr)_2)->base + _34S_BLOCK_14863);
    }
    _25008 = NOVALUE;
    // SubProg sym_block pc: 17 op: RETURNF (28)
    Ref(_25009);

// Exiting block BLOCK: sym_block

// block var sym_48228
    return _25009;
    // SubProg sym_block pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_next_in_block(object _sym_48236)
{
    object _25011 = NOVALUE; // 48240 25011
    object _25010 = NOVALUE; // 48238 25010
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next_in_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next_in_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1290		return SymTab[sym][S_NEXT_IN_BLOCK]*/
    // SubProg sym_next_in_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25010 = (object)*(((s1_ptr)_2)->base + _sym_48236);
    // SubProg sym_next_in_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25010);
    if (!IS_ATOM_INT(_34S_NEXT_IN_BLOCK_14835)){
        _25011 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_34S_NEXT_IN_BLOCK_14835)->dbl));
    }
    else{
        _25011 = (object)*(((s1_ptr)_2)->base + _34S_NEXT_IN_BLOCK_14835);
    }
    _25010 = NOVALUE;
    // SubProg sym_next_in_block pc: 17 op: RETURNF (28)
    Ref(_25011);

// Exiting block BLOCK: sym_next_in_block

// block var sym_48236
    return _25011;
    // SubProg sym_next_in_block pc: 21 op: BADRETURNF (43)
    ;
}


object _53sym_usage(object _sym_48244)
{
    object _25013 = NOVALUE; // 48248 25013
    object _25012 = NOVALUE; // 48246 25012
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_usage pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_usage pc: 3 op: STARTLINE (58)

    /** symtab.e:1294		return SymTab[sym][S_USAGE]*/
    // SubProg sym_usage pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_35SymTab_14156);
    _25012 = (object)*(((s1_ptr)_2)->base + _sym_48244);
    // SubProg sym_usage pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25012);
    _25013 = (object)*(((s1_ptr)_2)->base + 5);
    _25012 = NOVALUE;
    // SubProg sym_usage pc: 17 op: RETURNF (28)
    Ref(_25013);

// Exiting block BLOCK: sym_usage

// block var sym_48244
    return _25013;
    // SubProg sym_usage pc: 21 op: BADRETURNF (43)
    ;
}



// 0xDDD1D963
