// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _54hashfn(object _name_46270)
{
    object _len_46271 = NOVALUE;
    object _val_46272 = NOVALUE;
    object _int_46273 = NOVALUE;
    object _24233 = NOVALUE; // 46298 24233
    object _24232 = NOVALUE; // 46297 24232
// skipping _24231  name type: 0
// skipping _24230  name type: 0
    object _24229 = NOVALUE; // 46294 24229
    object _24228 = NOVALUE; // 46293 24228
// skipping _24227  name type: 0
// skipping _24226  name type: 0
// skipping _24225  name type: 0
// skipping _24224  name type: 0
// skipping _24223  name type: 0
// skipping _24222  name type: 0
// skipping _24221  name type: 0
// skipping _24220  name type: 0
// skipping _24219  name type: 0
// skipping _24218  name type: 0
    object _24217 = NOVALUE; // 46280 24217
// skipping _24216  name type: 0
// skipping _24215  name type: 0
// skipping _24214  name type: 0
    object _24213 = NOVALUE; // 46276 24213
// skipping _24212  name type: 0
// skipping _24211  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hashfn pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg hashfn pc: 3 op: STARTLINE (58)

    /** symtab.e:49		len = length(name)*/
    // SubProg hashfn pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46270)){
            _len_46271 = SEQ_PTR(_name_46270)->length;
    }
    else {
        _len_46271 = 1;
    }
    // SubProg hashfn pc: 8 op: STARTLINE (58)

    /** symtab.e:51		val = name[1]*/
    // SubProg hashfn pc: 10 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46270);
    _val_46272 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_val_46272))
    _val_46272 = (object)DBL_PTR(_val_46272)->dbl;
    // SubProg hashfn pc: 14 op: STARTLINE (58)

    /** symtab.e:52		int = name[$]*/
    // SubProg hashfn pc: 16 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46270)){
            _24213 = SEQ_PTR(_name_46270)->length;
    }
    else {
        _24213 = 1;
    }
    // SubProg hashfn pc: 19 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46270);
    _int_46273 = (object)*(((s1_ptr)_2)->base + _24213);
    if (!IS_ATOM_INT(_int_46273))
    _int_46273 = (object)DBL_PTR(_int_46273)->dbl;
    // SubProg hashfn pc: 23 op: STARTLINE (58)

    /** symtab.e:53		int *= 256*/
    // SubProg hashfn pc: 25 op: MULTIPLY (13)
    _int_46273 = _int_46273 * 256;
    // SubProg hashfn pc: 31 op: STARTLINE (58)

    /** symtab.e:54		val *= 2*/
    // SubProg hashfn pc: 33 op: PLUS_I (115)
    _val_46272 = _val_46272 + _val_46272;
    // SubProg hashfn pc: 37 op: STARTLINE (58)

    /** symtab.e:55		val += int + len*/
    // SubProg hashfn pc: 39 op: PLUS (11)
    _24217 = _int_46273 + _len_46271;
    if ((object)((uintptr_t)_24217 + (uintptr_t)HIGH_BITS) >= 0){
        _24217 = NewDouble((eudouble)_24217);
    }
    // SubProg hashfn pc: 43 op: PLUS (11)
    if (IS_ATOM_INT(_24217)) {
        _val_46272 = _val_46272 + _24217;
    }
    else {
        _val_46272 = NewDouble((eudouble)_val_46272 + DBL_PTR(_24217)->dbl);
    }
    DeRef(_24217);
    _24217 = NOVALUE;
    // SubProg hashfn pc: 47 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_val_46272)) {
        _1 = (object)(DBL_PTR(_val_46272)->dbl);
        DeRefDS(_val_46272);
        _val_46272 = _1;
    }
    // SubProg hashfn pc: 49 op: STARTLINE (58)

    /** symtab.e:57		if len = 3 then*/
    // SubProg hashfn pc: 51 op: EQUALS_IFW_I (121)
    if (_len_46271 != 3)
    goto L1; // [51] 78
    // SubProg hashfn pc: 55 op: STARTLINE (58)

    /** symtab.e:58			val *= 32*/
    // SubProg hashfn pc: 57 op: MULTIPLY (13)
    _val_46272 = _val_46272 * 32;
    // SubProg hashfn pc: 63 op: STARTLINE (58)

    /** symtab.e:59			int = name[2]*/
    // SubProg hashfn pc: 65 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46270);
    _int_46273 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46273))
    _int_46273 = (object)DBL_PTR(_int_46273)->dbl;
    // SubProg hashfn pc: 69 op: STARTLINE (58)

    /** symtab.e:60			val += int*/
    // SubProg hashfn pc: 71 op: PLUS_I (115)
    _val_46272 = _val_46272 + _int_46273;
    // SubProg hashfn pc: 75 op: ELSE (23)
    goto L2; // [75] 133
    // SubProg hashfn pc: 77 op: NOP1 (159)
L1: // addr: 78 pc: 77 sub: 46268 op: 159
    // SubProg hashfn pc: 78 op: STARTLINE (58)

    /** symtab.e:61		elsif len > 3 then*/
    // SubProg hashfn pc: 80 op: GREATER_IFW_I (124)
    if (_len_46271 <= 3)
    goto L3; // [80] 132
    // SubProg hashfn pc: 84 op: STARTLINE (58)

    /** symtab.e:62			val *= 32*/
    // SubProg hashfn pc: 86 op: MULTIPLY (13)
    _val_46272 = _val_46272 * 32;
    // SubProg hashfn pc: 92 op: STARTLINE (58)

    /** symtab.e:63			int = name[2]*/
    // SubProg hashfn pc: 94 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46270);
    _int_46273 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46273))
    _int_46273 = (object)DBL_PTR(_int_46273)->dbl;
    // SubProg hashfn pc: 98 op: STARTLINE (58)

    /** symtab.e:64			val += int*/
    // SubProg hashfn pc: 100 op: PLUS_I (115)
    _val_46272 = _val_46272 + _int_46273;
    // SubProg hashfn pc: 104 op: STARTLINE (58)

    /** symtab.e:66			val *= 32*/
    // SubProg hashfn pc: 106 op: MULTIPLY (13)
    _val_46272 = _val_46272 * 32;
    // SubProg hashfn pc: 112 op: STARTLINE (58)

    /** symtab.e:67			int = name[$-1]*/
    // SubProg hashfn pc: 114 op: LENGTH (42)
    if (IS_SEQUENCE(_name_46270)){
            _24228 = SEQ_PTR(_name_46270)->length;
    }
    else {
        _24228 = 1;
    }
    // SubProg hashfn pc: 117 op: MINUS (10)
    _24229 = _24228 - 1;
    _24228 = NOVALUE;
    // SubProg hashfn pc: 121 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_name_46270);
    _int_46273 = (object)*(((s1_ptr)_2)->base + _24229);
    if (!IS_ATOM_INT(_int_46273))
    _int_46273 = (object)DBL_PTR(_int_46273)->dbl;
    // SubProg hashfn pc: 125 op: STARTLINE (58)

    /** symtab.e:68			val += int*/
    // SubProg hashfn pc: 127 op: PLUS_I (115)
    _val_46272 = _val_46272 + _int_46273;
    // SubProg hashfn pc: 131 op: NOP1 (159)
L3: // addr: 132 pc: 131 sub: 46268 op: 159
    // SubProg hashfn pc: 132 op: NOP1 (159)
L2: // addr: 133 pc: 132 sub: 46268 op: 159
    // SubProg hashfn pc: 133 op: STARTLINE (58)

    /** symtab.e:70		return remainder(val, NBUCKETS) + 1*/
    // SubProg hashfn pc: 135 op: REMAINDER (71)
    _24232 = (_val_46272 % 2003);
    // SubProg hashfn pc: 139 op: PLUS1 (93)
    _24233 = _24232 + 1;
    _24232 = NOVALUE;
    // SubProg hashfn pc: 143 op: RETURNF (28)

// Exiting block BLOCK: hashfn

// block var name_46270
    DeRefDS(_name_46270);

// block var len_46271

// block var val_46272

// block var int_46273
    DeRef(_24229);
    _24229 = NOVALUE;
    return _24233;
    // SubProg hashfn pc: 147 op: BADRETURNF (43)
    ;
}


void _54remove_symbol(object _sym_46302)
{
    object _hash_46303 = NOVALUE;
    object _st_ptr_46304 = NOVALUE;
    object _24248 = NOVALUE; // 46333 24248
    object _24247 = NOVALUE; // 46331 24247
// skipping _24246  name type: 0
    object _24245 = NOVALUE; // 46327 24245
    object _24244 = NOVALUE; // 46324 24244
    object _24243 = NOVALUE; // 46322 24243
// skipping _24242  name type: 0
    object _24241 = NOVALUE; // 46319 24241
// skipping _24240  name type: 0
    object _24239 = NOVALUE; // 46314 24239
    object _24238 = NOVALUE; // 46312 24238
    object _24237 = NOVALUE; // 46311 24237
// skipping _24236  name type: 0
// skipping _24235  name type: 0
    object _24234 = NOVALUE; // 46306 24234
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove_symbol pc: 1 op: INTEGER_CHECK (96)
    // SubProg remove_symbol pc: 3 op: STARTLINE (58)

    /** symtab.e:79		hash = SymTab[sym][S_HASHVAL]*/
    // SubProg remove_symbol pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24234 = (object)*(((s1_ptr)_2)->base + _sym_46302);
    // SubProg remove_symbol pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24234);
    _hash_46303 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hash_46303)){
        _hash_46303 = (object)DBL_PTR(_hash_46303)->dbl;
    }
    _24234 = NOVALUE;
    // SubProg remove_symbol pc: 19 op: STARTLINE (58)

    /** symtab.e:80		st_ptr = buckets[hash]*/
    // SubProg remove_symbol pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 23 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _st_ptr_46304 = (object)*(((s1_ptr)_2)->base + _hash_46303);
    if (!IS_ATOM_INT(_st_ptr_46304))
    _st_ptr_46304 = (object)DBL_PTR(_st_ptr_46304)->dbl;
    // SubProg remove_symbol pc: 27 op: STARTLINE (58)

    /** symtab.e:82		while st_ptr and st_ptr != sym do*/
    // SubProg remove_symbol pc: 29 op: NOP2 (110)
    // SubProg remove_symbol pc: 31 op: NOPWHILE (158)
L1: // addr: 32 pc: 31 sub: 46299 op: 158
    // SubProg remove_symbol pc: 32 op: SC1_AND_IF (146)
    if (_st_ptr_46304 == 0) {
        goto L2; // [32] 65
    }
    // SubProg remove_symbol pc: 36 op: NOTEQ (4)
    _24238 = (_st_ptr_46304 != _sym_46302);
    // SubProg remove_symbol pc: 40 op: NOP1 (159)
    // SubProg remove_symbol pc: 41 op: WHILE (47)
    if (_24238 == 0)
    {
        DeRef(_24238);
        _24238 = NOVALUE;
        goto L2; // [41] 65
    }
    else{
        DeRef(_24238);
        _24238 = NOVALUE;
    }
    // SubProg remove_symbol pc: 44 op: STARTLINE (58)

    /** symtab.e:83			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 48 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24239 = (object)*(((s1_ptr)_2)->base + _st_ptr_46304);
    // SubProg remove_symbol pc: 52 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24239);
    _st_ptr_46304 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_46304)){
        _st_ptr_46304 = (object)DBL_PTR(_st_ptr_46304)->dbl;
    }
    _24239 = NOVALUE;
    // SubProg remove_symbol pc: 60 op: STARTLINE (58)

    /** symtab.e:84		end while*/
    // SubProg remove_symbol pc: 62 op: ENDWHILE (22)
    goto L1; // [62] 32
    // SubProg remove_symbol pc: 64 op: NOP1 (159)
L2: // addr: 65 pc: 64 sub: 46299 op: 159
    // SubProg remove_symbol pc: 65 op: STARTLINE (58)

    /** symtab.e:86		if st_ptr then*/
    // SubProg remove_symbol pc: 67 op: IF (20)
    if (_st_ptr_46304 == 0)
    {
        goto L3; // [67] 134
    }
    else{
    }
    // SubProg remove_symbol pc: 70 op: STARTLINE (58)

    /** symtab.e:87			if st_ptr = buckets[hash] then*/
    // SubProg remove_symbol pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 74 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _24241 = (object)*(((s1_ptr)_2)->base + _hash_46303);
    // SubProg remove_symbol pc: 78 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _st_ptr_46304, _24241)){
        _24241 = NOVALUE;
        goto L4; // [78] 105
    }
    _24241 = NOVALUE;
    // SubProg remove_symbol pc: 82 op: STARTLINE (58)

    /** symtab.e:89				buckets[hash] = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 84 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 88 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24243 = (object)*(((s1_ptr)_2)->base + _st_ptr_46304);
    // SubProg remove_symbol pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24243);
    _24244 = (object)*(((s1_ptr)_2)->base + 9);
    _24243 = NOVALUE;
    // SubProg remove_symbol pc: 98 op: ASSIGN_SUBS (16)
    Ref(_24244);
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _2 = (object)(((s1_ptr)_2)->base + _hash_46303);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24244;
    if( _1 != _24244 ){
        DeRef(_1);
    }
    _24244 = NOVALUE;
    // SubProg remove_symbol pc: 102 op: ELSE (23)
    goto L5; // [102] 133
    // SubProg remove_symbol pc: 104 op: NOP1 (159)
L4: // addr: 105 pc: 104 sub: 46299 op: 159
    // SubProg remove_symbol pc: 105 op: STARTLINE (58)

    /** symtab.e:92				SymTab[st_ptr][S_SAMEHASH] = SymTab[sym][S_SAMEHASH]*/
    // SubProg remove_symbol pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_st_ptr_46304 + ((s1_ptr)_2)->base);
    // SubProg remove_symbol pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24247 = (object)*(((s1_ptr)_2)->base + _sym_46302);
    // SubProg remove_symbol pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove_symbol pc: 124 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24247);
    _24248 = (object)*(((s1_ptr)_2)->base + 9);
    _24247 = NOVALUE;
    // SubProg remove_symbol pc: 128 op: PASSIGN_SUBS (162)
    Ref(_24248);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24248;
    if( _1 != _24248 ){
        DeRef(_1);
    }
    _24248 = NOVALUE;
    _24245 = NOVALUE;
    // SubProg remove_symbol pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46299 op: 159
    // SubProg remove_symbol pc: 133 op: NOP1 (159)
L3: // addr: 134 pc: 133 sub: 46299 op: 159
    // SubProg remove_symbol pc: 134 op: STARTLINE (58)

    /** symtab.e:95	end procedure*/
    // SubProg remove_symbol pc: 136 op: RETURNP (29)

// Exiting block BLOCK: remove_symbol

// block var sym_46302

// block var hash_46303

// block var st_ptr_46304
    return;
    // SubProg remove_symbol pc: 139 op: BADRETURNF (43)
    ;
}


object _54NewBasicEntry(object _name_46336, object _varnum_46337, object _scope_46338, object _token_46339, object _hashval_46340, object _samehash_46342, object _type_sym_46344)
{
    object _new_46345 = NOVALUE;
    object _24257 = NOVALUE; // 46421 24257
// skipping _24256  name type: 0
    object _24255 = NOVALUE; // 46408 24255
    object _24254 = NOVALUE; // 46403 24254
    object _24253 = NOVALUE; // 46394 24253
    object _24252 = NOVALUE; // 46389 24252
    object _24251 = NOVALUE; // 46384 24251
// skipping _24250  name type: 0
// skipping _24249  name type: 0
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
    if (_36TRANSLATE_16061 == 0)
    {
        goto L1; // [19] 33
    }
    else{
    }
    // SubProg NewBasicEntry pc: 22 op: STARTLINE (58)

    /** symtab.e:106			new = repeat(0, SIZEOF_ROUTINE_ENTRY)*/
    // SubProg NewBasicEntry pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 26 op: REPEAT (32)
    DeRef(_new_46345);
    _new_46345 = Repeat(0, _36SIZEOF_ROUTINE_ENTRY_16218);
    // SubProg NewBasicEntry pc: 30 op: ELSE (23)
    goto L2; // [30] 42
    // SubProg NewBasicEntry pc: 32 op: NOP1 (159)
L1: // addr: 33 pc: 32 sub: 46334 op: 159
    // SubProg NewBasicEntry pc: 33 op: STARTLINE (58)

    /** symtab.e:108			new = repeat(0, SIZEOF_VAR_ENTRY)*/
    // SubProg NewBasicEntry pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 37 op: REPEAT (32)
    DeRef(_new_46345);
    _new_46345 = Repeat(0, _36SIZEOF_VAR_ENTRY_16221);
    // SubProg NewBasicEntry pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 46334 op: 159
    // SubProg NewBasicEntry pc: 42 op: STARTLINE (58)

    /** symtab.e:111		new[S_NEXT] = 0*/
    // SubProg NewBasicEntry pc: 44 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewBasicEntry pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 48 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 52 op: STARTLINE (58)

    /** symtab.e:112		new[S_NAME] = name*/
    // SubProg NewBasicEntry pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 56 op: ASSIGN_SUBS (16)
    RefDS(_name_46336);
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_NAME_16091))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_NAME_16091);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _name_46336;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 60 op: STARTLINE (58)

    /** symtab.e:113		new[S_SCOPE] = scope*/
    // SubProg NewBasicEntry pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 64 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_46338;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 68 op: STARTLINE (58)

    /** symtab.e:114		new[S_MODE] = M_NORMAL*/
    // SubProg NewBasicEntry pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 74 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_FILE_NO_16087))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36current_file_no_16436;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 98 op: STARTLINE (58)

    /** symtab.e:118		if TRANSLATE then*/
    // SubProg NewBasicEntry pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 102 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 195 op: STARTLINE (58)

    /** symtab.e:132			new[S_ARG_MIN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 197 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 199 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 201 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _24251 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24251 = - _36NOVALUE_16291;
        }
    }
    else {
        _24251 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg NewBasicEntry pc: 204 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24251;
    if( _1 != _24251 ){
        DeRef(_1);
    }
    _24251 = NOVALUE;
    // SubProg NewBasicEntry pc: 208 op: STARTLINE (58)

    /** symtab.e:134			new[S_ARG_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 210 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 212 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 214 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 218 op: STARTLINE (58)

    /** symtab.e:135			new[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    // SubProg NewBasicEntry pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 224 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _24252 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24252 = - _36NOVALUE_16291;
        }
    }
    else {
        _24252 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg NewBasicEntry pc: 227 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24252;
    if( _1 != _24252 ){
        DeRef(_1);
    }
    _24252 = NOVALUE;
    // SubProg NewBasicEntry pc: 231 op: STARTLINE (58)

    /** symtab.e:137			new[S_SEQ_LEN] = NOVALUE*/
    // SubProg NewBasicEntry pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 237 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 241 op: STARTLINE (58)

    /** symtab.e:138			new[S_SEQ_LEN_NEW] = -NOVALUE -- no idea yet*/
    // SubProg NewBasicEntry pc: 243 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 245 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 247 op: UMINUS (12)
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _24253 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24253 = - _36NOVALUE_16291;
        }
    }
    else {
        _24253 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg NewBasicEntry pc: 250 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24253;
    if( _1 != _24253 ){
        DeRef(_1);
    }
    _24253 = NOVALUE;
    // SubProg NewBasicEntry pc: 254 op: STARTLINE (58)

    /** symtab.e:140			new[S_NREFS] = 0*/
    // SubProg NewBasicEntry pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 258 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 35);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _13TRUE_452;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 272 op: STARTLINE (58)

    /** symtab.e:142			new[S_RI_TARGET] = 0*/
    // SubProg NewBasicEntry pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 276 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _24254 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24254 = - _36NOVALUE_16291;
        }
    }
    else {
        _24254 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg NewBasicEntry pc: 299 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24254;
    if( _1 != _24254 ){
        DeRef(_1);
    }
    _24254 = NOVALUE;
    // SubProg NewBasicEntry pc: 303 op: STARTLINE (58)

    /** symtab.e:147			new[S_OBJ_MAX] = MAXINT*/
    // SubProg NewBasicEntry pc: 305 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 309 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
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
    if (IS_ATOM_INT(_36NOVALUE_16291)) {
        if ((uintptr_t)_36NOVALUE_16291 == (uintptr_t)HIGH_BITS){
            _24255 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24255 = - _36NOVALUE_16291;
        }
    }
    else {
        _24255 = unary_op(UMINUS, _36NOVALUE_16291);
    }
    // SubProg NewBasicEntry pc: 322 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24255;
    if( _1 != _24255 ){
        DeRef(_1);
    }
    _24255 = NOVALUE;
    // SubProg NewBasicEntry pc: 326 op: NOP1 (159)
L3: // addr: 327 pc: 326 sub: 46334 op: 159
    // SubProg NewBasicEntry pc: 327 op: STARTLINE (58)

    /** symtab.e:151		new[S_TOKEN] = token*/
    // SubProg NewBasicEntry pc: 329 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 331 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_TOKEN_16096))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _token_46339;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 335 op: STARTLINE (58)

    /** symtab.e:152		new[S_VARNUM] = varnum*/
    // SubProg NewBasicEntry pc: 337 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 339 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _varnum_46337;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 343 op: STARTLINE (58)

    /** symtab.e:153		new[S_INITLEVEL] = -1*/
    // SubProg NewBasicEntry pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 347 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 351 op: STARTLINE (58)

    /** symtab.e:154		new[S_VTYPE] = type_sym*/
    // SubProg NewBasicEntry pc: 353 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 355 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_sym_46344;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 359 op: STARTLINE (58)

    /** symtab.e:156		new[S_HASHVAL] = hashval*/
    // SubProg NewBasicEntry pc: 361 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 363 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_46340;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 367 op: STARTLINE (58)

    /** symtab.e:157		new[S_SAMEHASH] = samehash*/
    // SubProg NewBasicEntry pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 371 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _samehash_46342;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 375 op: STARTLINE (58)

    /** symtab.e:159		new[S_OBJ] = NOVALUE -- important*/
    // SubProg NewBasicEntry pc: 377 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 379 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 381 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_new_46345);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46345 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    // SubProg NewBasicEntry pc: 385 op: STARTLINE (58)

    /** symtab.e:162		SymTab = append(SymTab, new)*/
    // SubProg NewBasicEntry pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 389 op: APPEND (35)
    RefDS(_new_46345);
    Append(&_37SymTab_15405, _37SymTab_15405, _new_46345);
    // SubProg NewBasicEntry pc: 393 op: SEQUENCE_CHECK (97)
    // SubProg NewBasicEntry pc: 395 op: STARTLINE (58)

    /** symtab.e:164		return length(SymTab)*/
    // SubProg NewBasicEntry pc: 397 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewBasicEntry pc: 399 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _24257 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _24257 = 1;
    }
    // SubProg NewBasicEntry pc: 402 op: RETURNF (28)

// Exiting block BLOCK: NewBasicEntry

// block var name_46336
    DeRefDS(_name_46336);

// block var varnum_46337

// block var scope_46338

// block var token_46339

// block var hashval_46340

// block var samehash_46342

// block var type_sym_46344

// block var new_46345
    DeRefDS(_new_46345);
    return _24257;
    // SubProg NewBasicEntry pc: 406 op: BADRETURNF (43)
    ;
}


object _54NewEntry(object _name_46424, object _varnum_46425, object _scope_46426, object _token_46427, object _hashval_46428, object _samehash_46430, object _type_sym_46432)
{
    object _new_46434 = NOVALUE;
// skipping _24261  name type: 0
// skipping _24260  name type: 0
    object _24259 = NOVALUE; // 46438 24259
// skipping _24258  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewEntry pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewEntry pc: 3 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 5 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_scope_46426)) {
        _1 = (object)(DBL_PTR(_scope_46426)->dbl);
        DeRefDS(_scope_46426);
        _scope_46426 = _1;
    }
    // SubProg NewEntry pc: 7 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_token_46427)) {
        _1 = (object)(DBL_PTR(_token_46427)->dbl);
        DeRefDS(_token_46427);
        _token_46427 = _1;
    }
    // SubProg NewEntry pc: 9 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_samehash_46430)) {
        _1 = (object)(DBL_PTR(_samehash_46430)->dbl);
        DeRefDS(_samehash_46430);
        _samehash_46430 = _1;
    }
    // SubProg NewEntry pc: 13 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 15 op: STARTLINE (58)

    /** symtab.e:171		symtab_index new = NewBasicEntry( name, varnum, scope, token, hashval, samehash, type_sym )*/
    // SubProg NewEntry pc: 17 op: PROC (27)
    RefDS(_name_46424);
    _new_46434 = _54NewBasicEntry(_name_46424, _varnum_46425, _scope_46426, _token_46427, _hashval_46428, _samehash_46430, _type_sym_46432);
    // SubProg NewEntry pc: 27 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_new_46434)) {
        _1 = (object)(DBL_PTR(_new_46434)->dbl);
        DeRefDS(_new_46434);
        _new_46434 = _1;
    }
    // SubProg NewEntry pc: 29 op: STARTLINE (58)

    /** symtab.e:174		if last_sym then*/
    // SubProg NewEntry pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 33 op: IF (20)
    if (_54last_sym_46264 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_54last_sym_46264 + ((s1_ptr)_2)->base);
    // SubProg NewEntry pc: 47 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 49 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_46434;
    DeRef(_1);
    _24259 = NOVALUE;
    // SubProg NewEntry pc: 53 op: NOP1 (159)
L1: // addr: 54 pc: 53 sub: 46422 op: 159
    // SubProg NewEntry pc: 54 op: STARTLINE (58)

    /** symtab.e:177		last_sym = new*/
    // SubProg NewEntry pc: 56 op: ASSIGN (18)
    _54last_sym_46264 = _new_46434;
    // SubProg NewEntry pc: 59 op: INTEGER_CHECK (96)
    // SubProg NewEntry pc: 61 op: STARTLINE (58)

    /** symtab.e:178		if type_sym < 0 then*/
    // SubProg NewEntry pc: 63 op: LESS_IFW (102)
    if (_type_sym_46432 >= 0)
    goto L2; // [63] 76
    // SubProg NewEntry pc: 67 op: STARTLINE (58)

    /** symtab.e:179			register_forward_type( last_sym, type_sym )*/
    // SubProg NewEntry pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 71 op: PROC (27)
    _39register_forward_type(_54last_sym_46264, _type_sym_46432);
    // SubProg NewEntry pc: 75 op: NOP1 (159)
L2: // addr: 76 pc: 75 sub: 46422 op: 159
    // SubProg NewEntry pc: 76 op: STARTLINE (58)

    /** symtab.e:181		return last_sym*/
    // SubProg NewEntry pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewEntry pc: 80 op: RETURNF (28)

// Exiting block BLOCK: NewEntry

// block var name_46424
    DeRefDS(_name_46424);

// block var varnum_46425

// block var scope_46426

// block var token_46427

// block var hashval_46428

// block var samehash_46430

// block var type_sym_46432

// block var new_46434
    return _54last_sym_46264;
    // SubProg NewEntry pc: 84 op: BADRETURNF (43)
    ;
}


object _54tmp_alloc()
{
    object _new_entry_46449 = NOVALUE;
    object _24273 = NOVALUE; // 46487 24273
// skipping _24272  name type: 0
    object _24271 = NOVALUE; // 46482 24271
// skipping _24270  name type: 0
// skipping _24269  name type: 0
    object _24268 = NOVALUE; // 46474 24268
// skipping _24267  name type: 0
    object _24265 = NOVALUE; // 46469 24265
    object _24264 = NOVALUE; // 46468 24264
// skipping _24263  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg tmp_alloc pc: 1 op: STARTLINE (58)

    /** symtab.e:188		sequence new_entry = repeat( 0, SIZEOF_TEMP_ENTRY )*/
    // SubProg tmp_alloc pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 5 op: REPEAT (32)
    DeRef(_new_entry_46449);
    _new_entry_46449 = Repeat(0, _36SIZEOF_TEMP_ENTRY_16227);
    // SubProg tmp_alloc pc: 9 op: STARTLINE (58)

    /** symtab.e:192		new_entry[S_USAGE] = T_UNKNOWN*/
    // SubProg tmp_alloc pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 15 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    *(intptr_t *)_2 = 4;
    // SubProg tmp_alloc pc: 19 op: STARTLINE (58)

    /** symtab.e:194		if TRANSLATE then*/
    // SubProg tmp_alloc pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 23 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
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
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = 16;
    // SubProg tmp_alloc pc: 36 op: STARTLINE (58)

    /** symtab.e:196			new_entry[S_OBJ_MIN] = MININT*/
    // SubProg tmp_alloc pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 40 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 42 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    *(intptr_t *)_2 = -1073741824;
    // SubProg tmp_alloc pc: 46 op: STARTLINE (58)

    /** symtab.e:197			new_entry[S_OBJ_MAX] = MAXINT*/
    // SubProg tmp_alloc pc: 48 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 52 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    *(intptr_t *)_2 = 1073741823;
    // SubProg tmp_alloc pc: 56 op: STARTLINE (58)

    /** symtab.e:198			new_entry[S_SEQ_LEN] = NOVALUE*/
    // SubProg tmp_alloc pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 62 op: ASSIGN_SUBS (16)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = _36NOVALUE_16291;
    // SubProg tmp_alloc pc: 66 op: STARTLINE (58)

    /** symtab.e:199			new_entry[S_SEQ_ELEM] = TYPE_OBJECT  -- other fields set later*/
    // SubProg tmp_alloc pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 70 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 72 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    // SubProg tmp_alloc pc: 76 op: STARTLINE (58)

    /** symtab.e:200			if length(temp_name_type)+1 = 8087 then*/
    // SubProg tmp_alloc pc: 78 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 80 op: LENGTH (42)
    if (IS_SEQUENCE(_36temp_name_type_16518)){
            _24264 = SEQ_PTR(_36temp_name_type_16518)->length;
    }
    else {
        _24264 = 1;
    }
    // SubProg tmp_alloc pc: 83 op: PLUS1 (93)
    _24265 = _24264 + 1;
    _24264 = NOVALUE;
    // SubProg tmp_alloc pc: 87 op: EQUALS_IFW (104)
    if (_24265 != 8087)
    goto L2; // [87] 106
    // SubProg tmp_alloc pc: 91 op: STARTLINE (58)

    /** symtab.e:202				temp_name_type = append(temp_name_type, {0, 0})*/
    // SubProg tmp_alloc pc: 93 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 95 op: RIGHT_BRACE_2 (85)
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _24268 = MAKE_SEQ(_1);
    // SubProg tmp_alloc pc: 99 op: APPEND (35)
    RefDS(_24268);
    Append(&_36temp_name_type_16518, _36temp_name_type_16518, _24268);
    DeRefDS(_24268);
    _24268 = NOVALUE;
    // SubProg tmp_alloc pc: 103 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 105 op: NOP1 (159)
L2: // addr: 106 pc: 105 sub: 46447 op: 159
    // SubProg tmp_alloc pc: 106 op: STARTLINE (58)

    /** symtab.e:204			temp_name_type = append(temp_name_type, TYPES_OBNL)*/
    // SubProg tmp_alloc pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 112 op: APPEND (35)
    RefDS(_55TYPES_OBNL_46096);
    Append(&_36temp_name_type_16518, _36temp_name_type_16518, _55TYPES_OBNL_46096);
    // SubProg tmp_alloc pc: 116 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 118 op: STARTLINE (58)

    /** symtab.e:205			new_entry[S_TEMP_NAME] = length(temp_name_type)*/
    // SubProg tmp_alloc pc: 120 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 124 op: LENGTH (42)
    if (IS_SEQUENCE(_36temp_name_type_16518)){
            _24271 = SEQ_PTR(_36temp_name_type_16518)->length;
    }
    else {
        _24271 = 1;
    }
    // SubProg tmp_alloc pc: 127 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_entry_46449);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46449 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24271;
    if( _1 != _24271 ){
        DeRef(_1);
    }
    _24271 = NOVALUE;
    // SubProg tmp_alloc pc: 131 op: NOP1 (159)
L1: // addr: 132 pc: 131 sub: 46447 op: 159
    // SubProg tmp_alloc pc: 132 op: STARTLINE (58)

    /** symtab.e:208		SymTab = append(SymTab, new_entry )*/
    // SubProg tmp_alloc pc: 134 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 136 op: APPEND (35)
    RefDS(_new_entry_46449);
    Append(&_37SymTab_15405, _37SymTab_15405, _new_entry_46449);
    // SubProg tmp_alloc pc: 140 op: SEQUENCE_CHECK (97)
    // SubProg tmp_alloc pc: 142 op: STARTLINE (58)

    /** symtab.e:210		return length( SymTab )*/
    // SubProg tmp_alloc pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg tmp_alloc pc: 146 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _24273 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _24273 = 1;
    }
    // SubProg tmp_alloc pc: 149 op: RETURNF (28)

// Exiting block BLOCK: tmp_alloc

// block var new_entry_46449
    DeRefDS(_new_entry_46449);
    DeRef(_24265);
    _24265 = NOVALUE;
    return _24273;
    // SubProg tmp_alloc pc: 153 op: BADRETURNF (43)
    ;
}


void _54DefinedYet(object _sym_46518)
{
    object _24293 = NOVALUE; // 46542 24293
    object _24292 = NOVALUE; // 46541 24292
    object _24291 = NOVALUE; // 46539 24291
// skipping _24290  name type: 0
    object _24289 = NOVALUE; // 46534 24289
    object _24288 = NOVALUE; // 46532 24288
// skipping _24287  name type: 0
    object _24286 = NOVALUE; // 46528 24286
    object _24285 = NOVALUE; // 46527 24285
    object _24284 = NOVALUE; // 46523 24284
    object _24283 = NOVALUE; // 46521 24283
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg DefinedYet pc: 1 op: INTEGER_CHECK (96)
    // SubProg DefinedYet pc: 3 op: STARTLINE (58)

    /** symtab.e:230		if not find(SymTab[sym][S_SCOPE],*/
    // SubProg DefinedYet pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24283 = (object)*(((s1_ptr)_2)->base + _sym_46518);
    // SubProg DefinedYet pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24283);
    _24284 = (object)*(((s1_ptr)_2)->base + 4);
    _24283 = NOVALUE;
    // SubProg DefinedYet pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 23 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 9;
    ((intptr_t*)_2)[2] = 10;
    ((intptr_t*)_2)[3] = 7;
    _24285 = MAKE_SEQ(_1);
    // SubProg DefinedYet pc: 29 op: FIND_FROM (176)
    _24286 = find_from(_24284, _24285, 1);
    _24284 = NOVALUE;
    DeRefDS(_24285);
    _24285 = NOVALUE;
    // SubProg DefinedYet pc: 34 op: NOT_IFW (108)
    if (_24286 != 0)
    goto L1; // [34] 82
    _24286 = NOVALUE;
    // SubProg DefinedYet pc: 37 op: STARTLINE (58)

    /** symtab.e:232			if SymTab[sym][S_FILE_NO] = current_file_no then*/
    // SubProg DefinedYet pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24288 = (object)*(((s1_ptr)_2)->base + _sym_46518);
    // SubProg DefinedYet pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24288);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24289 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24289 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24288 = NOVALUE;
    // SubProg DefinedYet pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 53 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24289, _36current_file_no_16436)){
        _24289 = NOVALUE;
        goto L2; // [53] 81
    }
    _24289 = NOVALUE;
    // SubProg DefinedYet pc: 57 op: STARTLINE (58)

    /** symtab.e:233				CompileErr(31, {SymTab[sym][S_NAME]})*/
    // SubProg DefinedYet pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 61 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24291 = (object)*(((s1_ptr)_2)->base + _sym_46518);
    // SubProg DefinedYet pc: 65 op: GLOBAL_INIT_CHECK (109)
    // SubProg DefinedYet pc: 67 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24291);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24292 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24292 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24291 = NOVALUE;
    // SubProg DefinedYet pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24292);
    ((intptr_t*)_2)[1] = _24292;
    _24293 = MAKE_SEQ(_1);
    _24292 = NOVALUE;
    // SubProg DefinedYet pc: 75 op: PROC (27)
    _50CompileErr(31, _24293, 0);
    _24293 = NOVALUE;
    // SubProg DefinedYet pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 46515 op: 159
    // SubProg DefinedYet pc: 81 op: NOP1 (159)
L1: // addr: 82 pc: 81 sub: 46515 op: 159
    // SubProg DefinedYet pc: 82 op: STARTLINE (58)

    /** symtab.e:236	end procedure*/
    // SubProg DefinedYet pc: 84 op: RETURNP (29)

// Exiting block BLOCK: DefinedYet

// block var sym_46518
    return;
    // SubProg DefinedYet pc: 87 op: BADRETURNF (43)
    ;
}


object _54name_ext(object _s_46545)
{
    object _24300 = NOVALUE; // 46555 24300
    object _24299 = NOVALUE; // 46554 24299
    object _24298 = NOVALUE; // 46553 24298
    object _24297 = NOVALUE; // 46552 24297
    object _24295 = NOVALUE; // 46550 24295
    object _24294 = NOVALUE; // 46548 24294
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg name_ext pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg name_ext pc: 3 op: STARTLINE (58)

    /** symtab.e:241		for i = length(s) to 1 by -1 do*/
    // SubProg name_ext pc: 5 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46545)){
            _24294 = SEQ_PTR(_s_46545)->length;
    }
    else {
        _24294 = 1;
    }
    // SubProg name_ext pc: 8 op: FOR_I (125)
    {
        object _i_46547;
        _i_46547 = _24294;
L1: // addr: 15 pc: 8 sub: 46543 op: 125
        if (_i_46547 < 1){
            goto L2; // [8] 55
        }
        // SubProg name_ext pc: 15 op: STARTLINE (58)

        /** symtab.e:242			if find(s[i], "/\\:") then*/
        // SubProg name_ext pc: 17 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_s_46545);
        _24295 = (object)*(((s1_ptr)_2)->base + _i_46547);
        // SubProg name_ext pc: 21 op: FIND_FROM (176)
        _24297 = find_from(_24295, _24296, 1);
        _24295 = NOVALUE;
        // SubProg name_ext pc: 26 op: IF (20)
        if (_24297 == 0)
        {
            _24297 = NOVALUE;
            goto L3; // [26] 48
        }
        else{
            _24297 = NOVALUE;
        }
        // SubProg name_ext pc: 29 op: STARTLINE (58)

        /** symtab.e:243				return s[i+1 .. $]*/
        // SubProg name_ext pc: 31 op: PLUS1 (93)
        _24298 = _i_46547 + 1;
        // SubProg name_ext pc: 35 op: LENGTH (42)
        if (IS_SEQUENCE(_s_46545)){
                _24299 = SEQ_PTR(_s_46545)->length;
        }
        else {
            _24299 = 1;
        }
        // SubProg name_ext pc: 38 op: RHS_SLICE (46)
        rhs_slice_target = (object_ptr)&_24300;
        RHS_Slice(_s_46545, _24298, _24299);
        // SubProg name_ext pc: 43 op: RETURNF (28)

// Exiting block BLOCK: name_ext

// block var s_46545
        DeRefDS(_s_46545);
        _24298 = NOVALUE;
        return _24300;
        // SubProg name_ext pc: 47 op: NOP1 (159)
L3: // addr: 48 pc: 47 sub: 46543 op: 159
        // SubProg name_ext pc: 48 op: STARTLINE (58)

        /** symtab.e:245		end for*/
        // SubProg name_ext pc: 50 op: ENDFOR_GENERAL (39)
        _i_46547 = _i_46547 + -1;
        goto L1; // [50] 15
L2: // addr: 55 pc: 50 sub: 46543 op: 39
        ;
    }
    // SubProg name_ext pc: 55 op: STARTLINE (58)

    /** symtab.e:247		return s*/
    // SubProg name_ext pc: 57 op: RETURNF (28)

// Exiting block BLOCK: name_ext
    DeRef(_24298);
    _24298 = NOVALUE;
    DeRef(_24300);
    _24300 = NOVALUE;
    return _s_46545;
    // SubProg name_ext pc: 61 op: BADRETURNF (43)
    ;
}


object _54NewStringSym(object _s_46564)
{
    object _p_46566 = NOVALUE;
    object _tp_46567 = NOVALUE;
    object _prev_46568 = NOVALUE;
    object _search_count_46569 = NOVALUE;
// skipping _24345  name type: 0
    object _24344 = NOVALUE; // 46657 24344
// skipping _24343  name type: 0
    object _24342 = NOVALUE; // 46652 24342
    object _24341 = NOVALUE; // 46649 24341
    object _24340 = NOVALUE; // 46647 24340
    object _24338 = NOVALUE; // 46643 24338
    object _24337 = NOVALUE; // 46641 24337
// skipping _24335  name type: 0
    object _24334 = NOVALUE; // 46634 24334
// skipping _24333  name type: 0
    object _24332 = NOVALUE; // 46628 24332
// skipping _24331  name type: 0
    object _24330 = NOVALUE; // 46625 24330
    object _24329 = NOVALUE; // 46623 24329
    object _24328 = NOVALUE; // 46620 24328
// skipping _24327  name type: 0
    object _24326 = NOVALUE; // 46617 24326
// skipping _24325  name type: 0
    object _24324 = NOVALUE; // 46612 24324
// skipping _24323  name type: 0
    object _24322 = NOVALUE; // 46607 24322
// skipping _24321  name type: 0
    object _24320 = NOVALUE; // 46601 24320
// skipping _24319  name type: 0
// skipping _24318  name type: 0
    object _24317 = NOVALUE; // 46596 24317
// skipping _24316  name type: 0
    object _24315 = NOVALUE; // 46592 24315
    object _24314 = NOVALUE; // 46590 24314
    object _24313 = NOVALUE; // 46588 24313
// skipping _24312  name type: 0
    object _24311 = NOVALUE; // 46584 24311
// skipping _24310  name type: 0
    object _24309 = NOVALUE; // 46580 24309
    object _24308 = NOVALUE; // 46579 24308
    object _24307 = NOVALUE; // 46577 24307
// skipping _24306  name type: 0
// skipping _24305  name type: 0
// skipping _24304  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewStringSym pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg NewStringSym pc: 3 op: STARTLINE (58)

    /** symtab.e:255		integer search_count*/
    // SubProg NewStringSym pc: 5 op: STARTLINE (58)

    /** symtab.e:258		tp = literal_init*/
    // SubProg NewStringSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 9 op: ASSIGN (18)
    _tp_46567 = _54literal_init_46263;
    // SubProg NewStringSym pc: 12 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 14 op: STARTLINE (58)

    /** symtab.e:259		prev = 0*/
    // SubProg NewStringSym pc: 16 op: ASSIGN (18)
    _prev_46568 = 0;
    // SubProg NewStringSym pc: 19 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 21 op: STARTLINE (58)

    /** symtab.e:260		search_count = 0*/
    // SubProg NewStringSym pc: 23 op: ASSIGN_I (113)
    _search_count_46569 = 0;
    // SubProg NewStringSym pc: 26 op: STARTLINE (58)

    /** symtab.e:261		while tp != 0 do*/
    // SubProg NewStringSym pc: 28 op: NOP2 (110)
    // SubProg NewStringSym pc: 30 op: NOPWHILE (158)
L1: // addr: 31 pc: 30 sub: 46562 op: 158
    // SubProg NewStringSym pc: 31 op: NOTEQ_IFW (105)
    if (_tp_46567 == 0)
    goto L2; // [31] 170
    // SubProg NewStringSym pc: 35 op: STARTLINE (58)

    /** symtab.e:262			search_count += 1*/
    // SubProg NewStringSym pc: 37 op: PLUS1_I (117)
    _search_count_46569 = _search_count_46569 + 1;
    // SubProg NewStringSym pc: 41 op: STARTLINE (58)

    /** symtab.e:263			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewStringSym pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 45 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46569, _54SEARCH_LIMIT_46556)){
        goto L3; // [45] 54
    }
    // SubProg NewStringSym pc: 49 op: STARTLINE (58)

    /** symtab.e:264				exit*/
    // SubProg NewStringSym pc: 51 op: EXIT (61)
    goto L2; // [51] 170
    // SubProg NewStringSym pc: 53 op: NOP1 (159)
L3: // addr: 54 pc: 53 sub: 46562 op: 159
    // SubProg NewStringSym pc: 54 op: STARTLINE (58)

    /** symtab.e:266			if equal(s, SymTab[tp][S_OBJ]) then*/
    // SubProg NewStringSym pc: 56 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 58 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24307 = (object)*(((s1_ptr)_2)->base + _tp_46567);
    // SubProg NewStringSym pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24307);
    _24308 = (object)*(((s1_ptr)_2)->base + 1);
    _24307 = NOVALUE;
    // SubProg NewStringSym pc: 68 op: EQUAL (153)
    if (_s_46564 == _24308)
    _24309 = 1;
    else if (IS_ATOM_INT(_s_46564) && IS_ATOM_INT(_24308))
    _24309 = 0;
    else
    _24309 = (compare(_s_46564, _24308) == 0);
    _24308 = NOVALUE;
    // SubProg NewStringSym pc: 72 op: IF (20)
    if (_24309 == 0)
    {
        _24309 = NOVALUE;
        goto L4; // [72] 142
    }
    else{
        _24309 = NOVALUE;
    }
    // SubProg NewStringSym pc: 75 op: STARTLINE (58)

    /** symtab.e:268				if tp != literal_init then*/
    // SubProg NewStringSym pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 79 op: NOTEQ_IFW (105)
    if (_tp_46567 == _54literal_init_46263)
    goto L5; // [79] 135
    // SubProg NewStringSym pc: 83 op: STARTLINE (58)

    /** symtab.e:269					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 87 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46568 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 94 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 96 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24313 = (object)*(((s1_ptr)_2)->base + _tp_46567);
    // SubProg NewStringSym pc: 100 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24313);
    _24314 = (object)*(((s1_ptr)_2)->base + 2);
    _24313 = NOVALUE;
    // SubProg NewStringSym pc: 106 op: PASSIGN_SUBS (162)
    Ref(_24314);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24314;
    if( _1 != _24314 ){
        DeRef(_1);
    }
    _24314 = NOVALUE;
    _24311 = NOVALUE;
    // SubProg NewStringSym pc: 110 op: STARTLINE (58)

    /** symtab.e:270					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 112 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 114 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46567 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _54literal_init_46263;
    DeRef(_1);
    _24315 = NOVALUE;
    // SubProg NewStringSym pc: 127 op: STARTLINE (58)

    /** symtab.e:271					literal_init = tp*/
    // SubProg NewStringSym pc: 129 op: ASSIGN (18)
    _54literal_init_46263 = _tp_46567;
    // SubProg NewStringSym pc: 132 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 46562 op: 159
    // SubProg NewStringSym pc: 135 op: STARTLINE (58)

    /** symtab.e:273				return tp*/
    // SubProg NewStringSym pc: 137 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46564
    DeRefDS(_s_46564);

// block var p_46566

// block var prev_46568

// block var search_count_46569
    return _tp_46567;
    // SubProg NewStringSym pc: 141 op: NOP1 (159)
L4: // addr: 142 pc: 141 sub: 46562 op: 159
    // SubProg NewStringSym pc: 142 op: STARTLINE (58)

    /** symtab.e:275			prev = tp*/
    // SubProg NewStringSym pc: 144 op: ASSIGN (18)
    _prev_46568 = _tp_46567;
    // SubProg NewStringSym pc: 147 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 149 op: STARTLINE (58)

    /** symtab.e:276			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewStringSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24317 = (object)*(((s1_ptr)_2)->base + _tp_46567);
    // SubProg NewStringSym pc: 157 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 159 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24317);
    _tp_46567 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46567)){
        _tp_46567 = (object)DBL_PTR(_tp_46567)->dbl;
    }
    _24317 = NOVALUE;
    // SubProg NewStringSym pc: 165 op: STARTLINE (58)

    /** symtab.e:277		end while*/
    // SubProg NewStringSym pc: 167 op: ENDWHILE (22)
    goto L1; // [167] 31
    // SubProg NewStringSym pc: 169 op: NOP1 (159)
L2: // addr: 170 pc: 169 sub: 46562 op: 159
    // SubProg NewStringSym pc: 170 op: STARTLINE (58)

    /** symtab.e:279		p = tmp_alloc()*/
    // SubProg NewStringSym pc: 172 op: PROC (27)
    _p_46566 = _54tmp_alloc();
    // SubProg NewStringSym pc: 175 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46566)) {
        _1 = (object)(DBL_PTR(_p_46566)->dbl);
        DeRefDS(_p_46566);
        _p_46566 = _1;
    }
    // SubProg NewStringSym pc: 177 op: STARTLINE (58)

    /** symtab.e:280		SymTab[p][S_OBJ] = s*/
    // SubProg NewStringSym pc: 179 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 181 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 188 op: PASSIGN_SUBS (162)
    RefDS(_s_46564);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_46564;
    DeRef(_1);
    _24320 = NOVALUE;
    // SubProg NewStringSym pc: 192 op: STARTLINE (58)

    /** symtab.e:282		if TRANSLATE then*/
    // SubProg NewStringSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 196 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L6; // [196] 346
    }
    else{
    }
    // SubProg NewStringSym pc: 199 op: STARTLINE (58)

    /** symtab.e:283			SymTab[p][S_MODE] = M_TEMP    -- override CONSTANT for compile*/
    // SubProg NewStringSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 203 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    _24322 = NOVALUE;
    // SubProg NewStringSym pc: 216 op: STARTLINE (58)

    /** symtab.e:284			SymTab[p][S_GTYPE] = TYPE_SEQUENCE*/
    // SubProg NewStringSym pc: 218 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 220 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    _24324 = NOVALUE;
    // SubProg NewStringSym pc: 233 op: STARTLINE (58)

    /** symtab.e:285			SymTab[p][S_SEQ_LEN] = length(s)*/
    // SubProg NewStringSym pc: 235 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 237 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
    // SubProg NewStringSym pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 244 op: LENGTH (42)
    if (IS_SEQUENCE(_s_46564)){
            _24328 = SEQ_PTR(_s_46564)->length;
    }
    else {
        _24328 = 1;
    }
    // SubProg NewStringSym pc: 247 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24328;
    if( _1 != _24328 ){
        DeRef(_1);
    }
    _24328 = NOVALUE;
    _24326 = NOVALUE;
    // SubProg NewStringSym pc: 251 op: STARTLINE (58)

    /** symtab.e:286			if SymTab[p][S_SEQ_LEN] > 0 then*/
    // SubProg NewStringSym pc: 253 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 255 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24329 = (object)*(((s1_ptr)_2)->base + _p_46566);
    // SubProg NewStringSym pc: 259 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24329);
    _24330 = (object)*(((s1_ptr)_2)->base + 32);
    _24329 = NOVALUE;
    // SubProg NewStringSym pc: 265 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24330, 0)){
        _24330 = NOVALUE;
        goto L7; // [265] 289
    }
    _24330 = NOVALUE;
    // SubProg NewStringSym pc: 269 op: STARTLINE (58)

    /** symtab.e:287				SymTab[p][S_SEQ_ELEM] = TYPE_INTEGER*/
    // SubProg NewStringSym pc: 271 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 273 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    _24332 = NOVALUE;
    // SubProg NewStringSym pc: 286 op: ELSE (23)
    goto L8; // [286] 307
    // SubProg NewStringSym pc: 288 op: NOP1 (159)
L7: // addr: 289 pc: 288 sub: 46562 op: 159
    // SubProg NewStringSym pc: 289 op: STARTLINE (58)

    /** symtab.e:289				SymTab[p][S_SEQ_ELEM] = TYPE_NULL*/
    // SubProg NewStringSym pc: 291 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 293 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    _24334 = NOVALUE;
    // SubProg NewStringSym pc: 306 op: NOP1 (159)
L8: // addr: 307 pc: 306 sub: 46562 op: 159
    // SubProg NewStringSym pc: 307 op: STARTLINE (58)

    /** symtab.e:291			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 309 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 311 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24337 = (object)*(((s1_ptr)_2)->base + _p_46566);
    // SubProg NewStringSym pc: 315 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 317 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24337);
    _24338 = (object)*(((s1_ptr)_2)->base + 34);
    _24337 = NOVALUE;
    // SubProg NewStringSym pc: 321 op: PROC (27)
    RefDS(_24336);
    Ref(_24338);
    _55c_printf(_24336, _24338);
    _24338 = NOVALUE;
    // SubProg NewStringSym pc: 325 op: STARTLINE (58)

    /** symtab.e:292			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewStringSym pc: 327 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 329 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24340 = (object)*(((s1_ptr)_2)->base + _p_46566);
    // SubProg NewStringSym pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 335 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24340);
    _24341 = (object)*(((s1_ptr)_2)->base + 34);
    _24340 = NOVALUE;
    // SubProg NewStringSym pc: 339 op: PROC (27)
    RefDS(_24339);
    Ref(_24341);
    _55c_hprintf(_24339, _24341);
    _24341 = NOVALUE;
    // SubProg NewStringSym pc: 343 op: ELSE (23)
    goto L9; // [343] 364
    // SubProg NewStringSym pc: 345 op: NOP1 (159)
L6: // addr: 346 pc: 345 sub: 46562 op: 159
    // SubProg NewStringSym pc: 346 op: STARTLINE (58)

    /** symtab.e:295			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewStringSym pc: 348 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 350 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    _24342 = NOVALUE;
    // SubProg NewStringSym pc: 363 op: NOP1 (159)
L9: // addr: 364 pc: 363 sub: 46562 op: 159
    // SubProg NewStringSym pc: 364 op: STARTLINE (58)

    /** symtab.e:299		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewStringSym pc: 366 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewStringSym pc: 368 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46566 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _54literal_init_46263;
    DeRef(_1);
    _24344 = NOVALUE;
    // SubProg NewStringSym pc: 381 op: STARTLINE (58)

    /** symtab.e:300		literal_init = p*/
    // SubProg NewStringSym pc: 383 op: ASSIGN (18)
    _54literal_init_46263 = _p_46566;
    // SubProg NewStringSym pc: 386 op: INTEGER_CHECK (96)
    // SubProg NewStringSym pc: 388 op: STARTLINE (58)

    /** symtab.e:301		return p*/
    // SubProg NewStringSym pc: 390 op: RETURNF (28)

// Exiting block BLOCK: NewStringSym

// block var s_46564
    DeRefDS(_s_46564);

// block var tp_46567

// block var prev_46568

// block var search_count_46569
    return _p_46566;
    // SubProg NewStringSym pc: 394 op: BADRETURNF (43)
    ;
}


object _54NewIntSym(object _int_val_46662)
{
    object _p_46664 = NOVALUE;
    object _x_46665 = NOVALUE;
// skipping _24369  name type: 0
    object _24368 = NOVALUE; // 46710 24368
// skipping _24367  name type: 0
    object _24366 = NOVALUE; // 46708 24366
// skipping _24365  name type: 0
// skipping _24364  name type: 0
// skipping _24363  name type: 0
    object _24362 = NOVALUE; // 46701 24362
// skipping _24361  name type: 0
    object _24360 = NOVALUE; // 46697 24360
// skipping _24359  name type: 0
    object _24358 = NOVALUE; // 46693 24358
// skipping _24357  name type: 0
    object _24356 = NOVALUE; // 46687 24356
// skipping _24355  name type: 0
    object _24354 = NOVALUE; // 46682 24354
// skipping _24353  name type: 0
    object _24352 = NOVALUE; // 46678 24352
// skipping _24350  name type: 0
// skipping _24349  name type: 0
// skipping _24348  name type: 0
// skipping _24347  name type: 0
// skipping _24346  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewIntSym pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_int_val_46662)) {
        _1 = (object)(DBL_PTR(_int_val_46662)->dbl);
        DeRefDS(_int_val_46662);
        _int_val_46662 = _1;
    }
    // SubProg NewIntSym pc: 3 op: STARTLINE (58)

    /** symtab.e:308		integer x*/
    // SubProg NewIntSym pc: 5 op: STARTLINE (58)

    /** symtab.e:310		x = find(int_val, lastintval)*/
    // SubProg NewIntSym pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 9 op: FIND_FROM (176)
    _x_46665 = find_from(_int_val_46662, _54lastintval_46265, 1);
    // SubProg NewIntSym pc: 14 op: STARTLINE (58)

    /** symtab.e:311		if x then*/
    // SubProg NewIntSym pc: 16 op: IF (20)
    if (_x_46665 == 0)
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
    _2 = (object)SEQ_PTR(_54lastintsym_46266);
    _24352 = (object)*(((s1_ptr)_2)->base + _x_46665);
    // SubProg NewIntSym pc: 70 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46662

// block var p_46664

// block var x_46665
    return _24352;
    // SubProg NewIntSym pc: 74 op: ELSE (23)
    goto L2; // [74] 227
    // SubProg NewIntSym pc: 76 op: NOP1 (159)
L1: // addr: 77 pc: 76 sub: 46660 op: 159
    // SubProg NewIntSym pc: 77 op: STARTLINE (58)

    /** symtab.e:320			label "lolol"*/
    // SubProg NewIntSym pc: 79 op: GLABEL (189)
G3:
    // SubProg NewIntSym pc: 81 op: STARTLINE (58)

    /** symtab.e:321			p = tmp_alloc()*/
    // SubProg NewIntSym pc: 83 op: PROC (27)
    _p_46664 = _54tmp_alloc();
    // SubProg NewIntSym pc: 86 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46664)) {
        _1 = (object)(DBL_PTR(_p_46664)->dbl);
        DeRefDS(_p_46664);
        _p_46664 = _1;
    }
    // SubProg NewIntSym pc: 88 op: STARTLINE (58)

    /** symtab.e:322			SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewIntSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 92 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46664 + ((s1_ptr)_2)->base);
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
    _24354 = NOVALUE;
    // SubProg NewIntSym pc: 105 op: STARTLINE (58)

    /** symtab.e:323			SymTab[p][S_OBJ] = int_val*/
    // SubProg NewIntSym pc: 107 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 109 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46664 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 116 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46662;
    DeRef(_1);
    _24356 = NOVALUE;
    // SubProg NewIntSym pc: 120 op: STARTLINE (58)

    /** symtab.e:325			if TRANSLATE then*/
    // SubProg NewIntSym pc: 122 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 124 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L4; // [124] 175
    }
    else{
    }
    // SubProg NewIntSym pc: 127 op: STARTLINE (58)

    /** symtab.e:326				SymTab[p][S_OBJ_MIN] = int_val*/
    // SubProg NewIntSym pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 131 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46664 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 138 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46662;
    DeRef(_1);
    _24358 = NOVALUE;
    // SubProg NewIntSym pc: 142 op: STARTLINE (58)

    /** symtab.e:327				SymTab[p][S_OBJ_MAX] = int_val*/
    // SubProg NewIntSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 146 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46664 + ((s1_ptr)_2)->base);
    // SubProg NewIntSym pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 153 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46662;
    DeRef(_1);
    _24360 = NOVALUE;
    // SubProg NewIntSym pc: 157 op: STARTLINE (58)

    /** symtab.e:328				SymTab[p][S_GTYPE] = TYPE_INTEGER*/
    // SubProg NewIntSym pc: 159 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 161 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46664 + ((s1_ptr)_2)->base);
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
    _24362 = NOVALUE;
    // SubProg NewIntSym pc: 174 op: NOP1 (159)
L4: // addr: 175 pc: 174 sub: 46660 op: 159
    // SubProg NewIntSym pc: 175 op: STARTLINE (58)

    /** symtab.e:331			lastintval = prepend(lastintval, int_val)*/
    // SubProg NewIntSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 179 op: PREPEND (57)
    Prepend(&_54lastintval_46265, _54lastintval_46265, _int_val_46662);
    // SubProg NewIntSym pc: 183 op: STARTLINE (58)

    /** symtab.e:332			lastintsym = prepend(lastintsym, p)*/
    // SubProg NewIntSym pc: 185 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 187 op: PREPEND (57)
    Prepend(&_54lastintsym_46266, _54lastintsym_46266, _p_46664);
    // SubProg NewIntSym pc: 191 op: STARTLINE (58)

    /** symtab.e:333			if length(lastintval) > SEARCH_LIMIT then*/
    // SubProg NewIntSym pc: 193 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 195 op: LENGTH (42)
    if (IS_SEQUENCE(_54lastintval_46265)){
            _24366 = SEQ_PTR(_54lastintval_46265)->length;
    }
    else {
        _24366 = 1;
    }
    // SubProg NewIntSym pc: 198 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 200 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _24366, _54SEARCH_LIMIT_46556)){
        _24366 = NOVALUE;
        goto L5; // [200] 220
    }
    _24366 = NOVALUE;
    // SubProg NewIntSym pc: 204 op: STARTLINE (58)

    /** symtab.e:334				lastintval = lastintval[1..floor(SEARCH_LIMIT/2)]*/
    // SubProg NewIntSym pc: 206 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 208 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewIntSym pc: 210 op: FLOOR_DIV2 (66)
    if (IS_ATOM_INT(_54SEARCH_LIMIT_46556)) {
        _24368 = _54SEARCH_LIMIT_46556 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _54SEARCH_LIMIT_46556, 2);
        _24368 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    // SubProg NewIntSym pc: 214 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_54lastintval_46265;
    RHS_Slice(_54lastintval_46265, 1, _24368);
    // SubProg NewIntSym pc: 219 op: NOP1 (159)
L5: // addr: 220 pc: 219 sub: 46660 op: 159
    // SubProg NewIntSym pc: 220 op: STARTLINE (58)

    /** symtab.e:336			return p*/
    // SubProg NewIntSym pc: 222 op: RETURNF (28)

// Exiting block BLOCK: NewIntSym

// block var int_val_46662

// block var x_46665
    DeRef(_24368);
    _24368 = NOVALUE;
    _24352 = NOVALUE;
    return _p_46664;
    // SubProg NewIntSym pc: 226 op: NOP1 (159)
L2: // addr: 227 pc: 226 sub: 46660 op: 159
    // SubProg NewIntSym pc: 227 op: BADRETURNF (43)
    ;
}


object _54NewDoubleSym(object _d_46714)
{
    object _p_46716 = NOVALUE;
    object _tp_46717 = NOVALUE;
    object _prev_46718 = NOVALUE;
    object _search_count_46719 = NOVALUE;
// skipping _24399  name type: 0
    object _24398 = NOVALUE; // 46782 24398
    object _24397 = NOVALUE; // 46780 24397
    object _24396 = NOVALUE; // 46778 24396
    object _24395 = NOVALUE; // 46775 24395
    object _24394 = NOVALUE; // 46773 24394
// skipping _24393  name type: 0
    object _24392 = NOVALUE; // 46767 24392
// skipping _24391  name type: 0
    object _24390 = NOVALUE; // 46762 24390
// skipping _24389  name type: 0
    object _24388 = NOVALUE; // 46756 24388
// skipping _24387  name type: 0
    object _24386 = NOVALUE; // 46751 24386
// skipping _24385  name type: 0
// skipping _24384  name type: 0
    object _24383 = NOVALUE; // 46746 24383
// skipping _24382  name type: 0
    object _24381 = NOVALUE; // 46742 24381
    object _24380 = NOVALUE; // 46740 24380
    object _24379 = NOVALUE; // 46738 24379
// skipping _24378  name type: 0
    object _24377 = NOVALUE; // 46734 24377
// skipping _24376  name type: 0
    object _24375 = NOVALUE; // 46730 24375
    object _24374 = NOVALUE; // 46729 24374
    object _24373 = NOVALUE; // 46727 24373
// skipping _24372  name type: 0
// skipping _24371  name type: 0
// skipping _24370  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewDoubleSym pc: 1 op: STARTLINE (58)

    /** symtab.e:343		integer search_count*/
    // SubProg NewDoubleSym pc: 3 op: STARTLINE (58)

    /** symtab.e:346		tp = literal_init*/
    // SubProg NewDoubleSym pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 7 op: ASSIGN (18)
    _tp_46717 = _54literal_init_46263;
    // SubProg NewDoubleSym pc: 10 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 12 op: STARTLINE (58)

    /** symtab.e:347		prev = 0*/
    // SubProg NewDoubleSym pc: 14 op: ASSIGN (18)
    _prev_46718 = 0;
    // SubProg NewDoubleSym pc: 17 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 19 op: STARTLINE (58)

    /** symtab.e:348		search_count = 0*/
    // SubProg NewDoubleSym pc: 21 op: ASSIGN_I (113)
    _search_count_46719 = 0;
    // SubProg NewDoubleSym pc: 24 op: STARTLINE (58)

    /** symtab.e:349		while tp != 0 do*/
    // SubProg NewDoubleSym pc: 26 op: NOP2 (110)
    // SubProg NewDoubleSym pc: 28 op: NOPWHILE (158)
L1: // addr: 29 pc: 28 sub: 46712 op: 158
    // SubProg NewDoubleSym pc: 29 op: NOTEQ_IFW (105)
    if (_tp_46717 == 0)
    goto L2; // [29] 168
    // SubProg NewDoubleSym pc: 33 op: STARTLINE (58)

    /** symtab.e:350			search_count += 1*/
    // SubProg NewDoubleSym pc: 35 op: PLUS1_I (117)
    _search_count_46719 = _search_count_46719 + 1;
    // SubProg NewDoubleSym pc: 39 op: STARTLINE (58)

    /** symtab.e:351			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    // SubProg NewDoubleSym pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 43 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _search_count_46719, _54SEARCH_LIMIT_46556)){
        goto L3; // [43] 52
    }
    // SubProg NewDoubleSym pc: 47 op: STARTLINE (58)

    /** symtab.e:352				exit*/
    // SubProg NewDoubleSym pc: 49 op: EXIT (61)
    goto L2; // [49] 168
    // SubProg NewDoubleSym pc: 51 op: NOP1 (159)
L3: // addr: 52 pc: 51 sub: 46712 op: 159
    // SubProg NewDoubleSym pc: 52 op: STARTLINE (58)

    /** symtab.e:354			if equal(d, SymTab[tp][S_OBJ]) then*/
    // SubProg NewDoubleSym pc: 54 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 56 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24373 = (object)*(((s1_ptr)_2)->base + _tp_46717);
    // SubProg NewDoubleSym pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 62 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24373);
    _24374 = (object)*(((s1_ptr)_2)->base + 1);
    _24373 = NOVALUE;
    // SubProg NewDoubleSym pc: 66 op: EQUAL (153)
    if (_d_46714 == _24374)
    _24375 = 1;
    else if (IS_ATOM_INT(_d_46714) && IS_ATOM_INT(_24374))
    _24375 = 0;
    else
    _24375 = (compare(_d_46714, _24374) == 0);
    _24374 = NOVALUE;
    // SubProg NewDoubleSym pc: 70 op: IF (20)
    if (_24375 == 0)
    {
        _24375 = NOVALUE;
        goto L4; // [70] 140
    }
    else{
        _24375 = NOVALUE;
    }
    // SubProg NewDoubleSym pc: 73 op: STARTLINE (58)

    /** symtab.e:356				if tp != literal_init then*/
    // SubProg NewDoubleSym pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 77 op: NOTEQ_IFW (105)
    if (_tp_46717 == _54literal_init_46263)
    goto L5; // [77] 133
    // SubProg NewDoubleSym pc: 81 op: STARTLINE (58)

    /** symtab.e:358					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 85 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46718 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 90 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 92 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 94 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24379 = (object)*(((s1_ptr)_2)->base + _tp_46717);
    // SubProg NewDoubleSym pc: 98 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 100 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24379);
    _24380 = (object)*(((s1_ptr)_2)->base + 2);
    _24379 = NOVALUE;
    // SubProg NewDoubleSym pc: 104 op: PASSIGN_SUBS (162)
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
    // SubProg NewDoubleSym pc: 108 op: STARTLINE (58)

    /** symtab.e:359					SymTab[tp][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 112 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46717 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _54literal_init_46263;
    DeRef(_1);
    _24381 = NOVALUE;
    // SubProg NewDoubleSym pc: 125 op: STARTLINE (58)

    /** symtab.e:360					literal_init = tp*/
    // SubProg NewDoubleSym pc: 127 op: ASSIGN (18)
    _54literal_init_46263 = _tp_46717;
    // SubProg NewDoubleSym pc: 130 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 132 op: NOP1 (159)
L5: // addr: 133 pc: 132 sub: 46712 op: 159
    // SubProg NewDoubleSym pc: 133 op: STARTLINE (58)

    /** symtab.e:362				return tp*/
    // SubProg NewDoubleSym pc: 135 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46714
    DeRef(_d_46714);

// block var p_46716

// block var prev_46718

// block var search_count_46719
    return _tp_46717;
    // SubProg NewDoubleSym pc: 139 op: NOP1 (159)
L4: // addr: 140 pc: 139 sub: 46712 op: 159
    // SubProg NewDoubleSym pc: 140 op: STARTLINE (58)

    /** symtab.e:364			prev = tp*/
    // SubProg NewDoubleSym pc: 142 op: ASSIGN (18)
    _prev_46718 = _tp_46717;
    // SubProg NewDoubleSym pc: 145 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 147 op: STARTLINE (58)

    /** symtab.e:365			tp = SymTab[tp][S_NEXT]*/
    // SubProg NewDoubleSym pc: 149 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 151 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24383 = (object)*(((s1_ptr)_2)->base + _tp_46717);
    // SubProg NewDoubleSym pc: 155 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 157 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24383);
    _tp_46717 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46717)){
        _tp_46717 = (object)DBL_PTR(_tp_46717)->dbl;
    }
    _24383 = NOVALUE;
    // SubProg NewDoubleSym pc: 163 op: STARTLINE (58)

    /** symtab.e:366		end while*/
    // SubProg NewDoubleSym pc: 165 op: ENDWHILE (22)
    goto L1; // [165] 29
    // SubProg NewDoubleSym pc: 167 op: NOP1 (159)
L2: // addr: 168 pc: 167 sub: 46712 op: 159
    // SubProg NewDoubleSym pc: 168 op: STARTLINE (58)

    /** symtab.e:368		p = tmp_alloc()*/
    // SubProg NewDoubleSym pc: 170 op: PROC (27)
    _p_46716 = _54tmp_alloc();
    // SubProg NewDoubleSym pc: 173 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46716)) {
        _1 = (object)(DBL_PTR(_p_46716)->dbl);
        DeRefDS(_p_46716);
        _p_46716 = _1;
    }
    // SubProg NewDoubleSym pc: 175 op: STARTLINE (58)

    /** symtab.e:369		SymTab[p][S_MODE] = M_CONSTANT*/
    // SubProg NewDoubleSym pc: 177 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 179 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46716 + ((s1_ptr)_2)->base);
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
    _24386 = NOVALUE;
    // SubProg NewDoubleSym pc: 192 op: STARTLINE (58)

    /** symtab.e:370		SymTab[p][S_OBJ] = d*/
    // SubProg NewDoubleSym pc: 194 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 196 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46716 + ((s1_ptr)_2)->base);
    // SubProg NewDoubleSym pc: 201 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 203 op: PASSIGN_SUBS (162)
    Ref(_d_46714);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _d_46714;
    DeRef(_1);
    _24388 = NOVALUE;
    // SubProg NewDoubleSym pc: 207 op: STARTLINE (58)

    /** symtab.e:372		if TRANSLATE then*/
    // SubProg NewDoubleSym pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 211 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L6; // [211] 285
    }
    else{
    }
    // SubProg NewDoubleSym pc: 214 op: STARTLINE (58)

    /** symtab.e:373			SymTab[p][S_MODE] = M_TEMP  -- override CONSTANT for compile*/
    // SubProg NewDoubleSym pc: 216 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 218 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46716 + ((s1_ptr)_2)->base);
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
    _24390 = NOVALUE;
    // SubProg NewDoubleSym pc: 231 op: STARTLINE (58)

    /** symtab.e:374			SymTab[p][S_GTYPE] = TYPE_DOUBLE*/
    // SubProg NewDoubleSym pc: 233 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 235 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46716 + ((s1_ptr)_2)->base);
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
    _24392 = NOVALUE;
    // SubProg NewDoubleSym pc: 248 op: STARTLINE (58)

    /** symtab.e:375			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 250 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 252 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24394 = (object)*(((s1_ptr)_2)->base + _p_46716);
    // SubProg NewDoubleSym pc: 256 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 258 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24394);
    _24395 = (object)*(((s1_ptr)_2)->base + 34);
    _24394 = NOVALUE;
    // SubProg NewDoubleSym pc: 262 op: PROC (27)
    RefDS(_24336);
    Ref(_24395);
    _55c_printf(_24336, _24395);
    _24395 = NOVALUE;
    // SubProg NewDoubleSym pc: 266 op: STARTLINE (58)

    /** symtab.e:376			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    // SubProg NewDoubleSym pc: 268 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 270 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24396 = (object)*(((s1_ptr)_2)->base + _p_46716);
    // SubProg NewDoubleSym pc: 274 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 276 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24396);
    _24397 = (object)*(((s1_ptr)_2)->base + 34);
    _24396 = NOVALUE;
    // SubProg NewDoubleSym pc: 280 op: PROC (27)
    RefDS(_24339);
    Ref(_24397);
    _55c_hprintf(_24339, _24397);
    _24397 = NOVALUE;
    // SubProg NewDoubleSym pc: 284 op: NOP1 (159)
L6: // addr: 285 pc: 284 sub: 46712 op: 159
    // SubProg NewDoubleSym pc: 285 op: STARTLINE (58)

    /** symtab.e:379		SymTab[p][S_NEXT] = literal_init*/
    // SubProg NewDoubleSym pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewDoubleSym pc: 289 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46716 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _54literal_init_46263;
    DeRef(_1);
    _24398 = NOVALUE;
    // SubProg NewDoubleSym pc: 302 op: STARTLINE (58)

    /** symtab.e:380		literal_init = p*/
    // SubProg NewDoubleSym pc: 304 op: ASSIGN (18)
    _54literal_init_46263 = _p_46716;
    // SubProg NewDoubleSym pc: 307 op: INTEGER_CHECK (96)
    // SubProg NewDoubleSym pc: 309 op: STARTLINE (58)

    /** symtab.e:381		return p*/
    // SubProg NewDoubleSym pc: 311 op: RETURNF (28)

// Exiting block BLOCK: NewDoubleSym

// block var d_46714
    DeRef(_d_46714);

// block var tp_46717

// block var prev_46718

// block var search_count_46719
    return _p_46716;
    // SubProg NewDoubleSym pc: 315 op: BADRETURNF (43)
    ;
}


object _54NewTempSym(object _inlining_46788)
{
    object _p_46790 = NOVALUE;
    object _q_46791 = NOVALUE;
// skipping _24448  name type: 0
    object _24447 = NOVALUE; // 46901 24447
// skipping _24446  name type: 0
    object _24445 = NOVALUE; // 46896 24445
// skipping _24444  name type: 0
    object _24443 = NOVALUE; // 46891 24443
// skipping _24442  name type: 0
    object _24441 = NOVALUE; // 46886 24441
// skipping _24440  name type: 0
    object _24439 = NOVALUE; // 46881 24439
// skipping _24438  name type: 0
    object _24437 = NOVALUE; // 46875 24437
    object _24436 = NOVALUE; // 46872 24436
    object _24435 = NOVALUE; // 46870 24435
// skipping _24434  name type: 0
    object _24433 = NOVALUE; // 46865 24433
    object _24432 = NOVALUE; // 46863 24432
    object _24431 = NOVALUE; // 46861 24431
// skipping _24430  name type: 0
    object _24429 = NOVALUE; // 46857 24429
// skipping _24428  name type: 0
    object _24427 = NOVALUE; // 46852 24427
// skipping _24426  name type: 0
// skipping _24425  name type: 0
    object _24424 = NOVALUE; // 46846 24424
    object _24423 = NOVALUE; // 46842 24423
    object _24422 = NOVALUE; // 46841 24422
// skipping _24421  name type: 0
    object _24420 = NOVALUE; // 46838 24420
// skipping _24419  name type: 0
    object _24418 = NOVALUE; // 46832 24418
    object _24417 = NOVALUE; // 46829 24417
    object _24416 = NOVALUE; // 46827 24416
// skipping _24415  name type: 0
    object _24414 = NOVALUE; // 46822 24414
// skipping _24413  name type: 0
    object _24412 = NOVALUE; // 46817 24412
// skipping _24411  name type: 0
// skipping _24410  name type: 0
// skipping _24409  name type: 0
// skipping _24408  name type: 0
    object _24407 = NOVALUE; // 46808 24407
    object _24406 = NOVALUE; // 46806 24406
    object _24405 = NOVALUE; // 46804 24405
    object _24404 = NOVALUE; // 46802 24404
    object _24403 = NOVALUE; // 46800 24403
    object _24402 = NOVALUE; // 46799 24402
// skipping _24401  name type: 0
    object _24400 = NOVALUE; // 46795 24400
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg NewTempSym pc: 1 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 3 op: STARTLINE (58)

    /** symtab.e:392		if inlining then*/
    // SubProg NewTempSym pc: 5 op: IF (20)
    if (_inlining_46788 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24400 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg NewTempSym pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24400);
    if (!IS_ATOM_INT(_36S_TEMPS_16136)){
        _p_46790 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
    }
    else{
        _p_46790 = (object)*(((s1_ptr)_2)->base + _36S_TEMPS_16136);
    }
    if (!IS_ATOM_INT(_p_46790)){
        _p_46790 = (object)DBL_PTR(_p_46790)->dbl;
    }
    _24400 = NOVALUE;
    // SubProg NewTempSym pc: 26 op: STARTLINE (58)

    /** symtab.e:394			while p != 0 and SymTab[p][S_SCOPE] != FREE do*/
    // SubProg NewTempSym pc: 28 op: NOP2 (110)
    // SubProg NewTempSym pc: 30 op: NOPWHILE (158)
L2: // addr: 31 pc: 30 sub: 46786 op: 158
    // SubProg NewTempSym pc: 31 op: NOTEQ (4)
    _24402 = (_p_46790 != 0);
    // SubProg NewTempSym pc: 35 op: SC1_AND_IF (146)
    if (_24402 == 0) {
        goto L3; // [35] 93
    }
    // SubProg NewTempSym pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24404 = (object)*(((s1_ptr)_2)->base + _p_46790);
    // SubProg NewTempSym pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24404);
    _24405 = (object)*(((s1_ptr)_2)->base + 4);
    _24404 = NOVALUE;
    // SubProg NewTempSym pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 53 op: NOTEQ (4)
    if (IS_ATOM_INT(_24405)) {
        _24406 = (_24405 != 0);
    }
    else {
        _24406 = binary_op(NOTEQ, _24405, 0);
    }
    _24405 = NOVALUE;
    // SubProg NewTempSym pc: 57 op: NOP1 (159)
    // SubProg NewTempSym pc: 58 op: WHILE (47)
    if (_24406 <= 0) {
        if (_24406 == 0) {
            DeRef(_24406);
            _24406 = NOVALUE;
            goto L3; // [58] 93
        }
        else {
            if (!IS_ATOM_INT(_24406) && DBL_PTR(_24406)->dbl == 0.0){
                DeRef(_24406);
                _24406 = NOVALUE;
                goto L3; // [58] 93
            }
            DeRef(_24406);
            _24406 = NOVALUE;
        }
    }
    DeRef(_24406);
    _24406 = NOVALUE;
    // SubProg NewTempSym pc: 61 op: STARTLINE (58)

    /** symtab.e:395				p = SymTab[p][S_NEXT]*/
    // SubProg NewTempSym pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24407 = (object)*(((s1_ptr)_2)->base + _p_46790);
    // SubProg NewTempSym pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24407);
    _p_46790 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_46790)){
        _p_46790 = (object)DBL_PTR(_p_46790)->dbl;
    }
    _24407 = NOVALUE;
    // SubProg NewTempSym pc: 77 op: STARTLINE (58)

    /** symtab.e:396			end while*/
    // SubProg NewTempSym pc: 79 op: ENDWHILE (22)
    goto L2; // [79] 31
    // SubProg NewTempSym pc: 81 op: NOP1 (159)
    // SubProg NewTempSym pc: 82 op: ELSE (23)
    goto L3; // [82] 93
    // SubProg NewTempSym pc: 84 op: NOP1 (159)
L1: // addr: 85 pc: 84 sub: 46786 op: 159
    // SubProg NewTempSym pc: 85 op: STARTLINE (58)

    /** symtab.e:398			p = 0*/
    // SubProg NewTempSym pc: 87 op: ASSIGN (18)
    _p_46790 = 0;
    // SubProg NewTempSym pc: 90 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 46786 op: 159
    // SubProg NewTempSym pc: 93 op: STARTLINE (58)

    /** symtab.e:401		if p = 0 then*/
    // SubProg NewTempSym pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg NewTempSym pc: 97 op: EQUALS_IFW (104)
    if (_p_46790 != 0)
    goto L4; // [97] 213
    // SubProg NewTempSym pc: 101 op: STARTLINE (58)

    /** symtab.e:403			temps_allocated += 1*/
    // SubProg NewTempSym pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 105 op: PLUS1_I (117)
    _54temps_allocated_46785 = _54temps_allocated_46785 + 1;
    // SubProg NewTempSym pc: 109 op: STARTLINE (58)

    /** symtab.e:404			p = tmp_alloc()*/
    // SubProg NewTempSym pc: 111 op: PROC (27)
    _p_46790 = _54tmp_alloc();
    // SubProg NewTempSym pc: 114 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_p_46790)) {
        _1 = (object)(DBL_PTR(_p_46790)->dbl);
        DeRefDS(_p_46790);
        _p_46790 = _1;
    }
    // SubProg NewTempSym pc: 116 op: STARTLINE (58)

    /** symtab.e:405			SymTab[p][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 118 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 120 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24412 = NOVALUE;
    // SubProg NewTempSym pc: 133 op: STARTLINE (58)

    /** symtab.e:406			SymTab[p][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 137 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 142 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 144 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 146 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 148 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24416 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg NewTempSym pc: 152 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 154 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24416);
    if (!IS_ATOM_INT(_36S_TEMPS_16136)){
        _24417 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
    }
    else{
        _24417 = (object)*(((s1_ptr)_2)->base + _36S_TEMPS_16136);
    }
    _24416 = NOVALUE;
    // SubProg NewTempSym pc: 158 op: PASSIGN_SUBS (162)
    Ref(_24417);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24417;
    if( _1 != _24417 ){
        DeRef(_1);
    }
    _24417 = NOVALUE;
    _24414 = NOVALUE;
    // SubProg NewTempSym pc: 162 op: STARTLINE (58)

    /** symtab.e:407			SymTab[CurrentSub][S_TEMPS] = p*/
    // SubProg NewTempSym pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 166 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 168 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36CurrentSub_16444 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 173 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 175 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_TEMPS_16136))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_TEMPS_16136);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_46790;
    DeRef(_1);
    _24418 = NOVALUE;
    // SubProg NewTempSym pc: 179 op: STARTLINE (58)

    /** symtab.e:409			if inlining then*/
    // SubProg NewTempSym pc: 181 op: IF (20)
    if (_inlining_46788 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36CurrentSub_16444 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 195 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 197 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151)){
        _24422 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    }
    else{
        _24422 = (object)*(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    }
    _24420 = NOVALUE;
    // SubProg NewTempSym pc: 201 op: PLUS1 (93)
    if (IS_ATOM_INT(_24422)) {
        _24423 = _24422 + 1;
        if (_24423 > MAXINT){
            _24423 = NewDouble((eudouble)_24423);
        }
    }
    else
    _24423 = binary_op(PLUS, 1, _24422);
    _24422 = NOVALUE;
    // SubProg NewTempSym pc: 205 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_STACK_SPACE_16151))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_STACK_SPACE_16151)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_STACK_SPACE_16151);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24423;
    if( _1 != _24423 ){
        DeRef(_1);
    }
    _24423 = NOVALUE;
    _24420 = NOVALUE;
    // SubProg NewTempSym pc: 209 op: NOP1 (159)
    // SubProg NewTempSym pc: 210 op: ELSE (23)
    goto L5; // [210] 343
    // SubProg NewTempSym pc: 212 op: NOP1 (159)
L4: // addr: 213 pc: 212 sub: 46786 op: 159
    // SubProg NewTempSym pc: 213 op: STARTLINE (58)

    /** symtab.e:413		elsif TRANSLATE then*/
    // SubProg NewTempSym pc: 215 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 217 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L6; // [217] 342
    }
    else{
    }
    // SubProg NewTempSym pc: 220 op: STARTLINE (58)

    /** symtab.e:418			SymTab[p][S_SCOPE] = DELETED*/
    // SubProg NewTempSym pc: 222 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 224 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24424 = NOVALUE;
    // SubProg NewTempSym pc: 237 op: STARTLINE (58)

    /** symtab.e:420			q = tmp_alloc()*/
    // SubProg NewTempSym pc: 239 op: PROC (27)
    _q_46791 = _54tmp_alloc();
    // SubProg NewTempSym pc: 242 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_q_46791)) {
        _1 = (object)(DBL_PTR(_q_46791)->dbl);
        DeRefDS(_q_46791);
        _q_46791 = _1;
    }
    // SubProg NewTempSym pc: 244 op: STARTLINE (58)

    /** symtab.e:421			SymTab[q][S_MODE] = M_TEMP*/
    // SubProg NewTempSym pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 248 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46791 + ((s1_ptr)_2)->base);
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
    _24427 = NOVALUE;
    // SubProg NewTempSym pc: 261 op: STARTLINE (58)

    /** symtab.e:422			SymTab[q][S_TEMP_NAME] = SymTab[p][S_TEMP_NAME]*/
    // SubProg NewTempSym pc: 263 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 265 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46791 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 270 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 272 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 274 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24431 = (object)*(((s1_ptr)_2)->base + _p_46790);
    // SubProg NewTempSym pc: 278 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 280 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24431);
    _24432 = (object)*(((s1_ptr)_2)->base + 34);
    _24431 = NOVALUE;
    // SubProg NewTempSym pc: 284 op: PASSIGN_SUBS (162)
    Ref(_24432);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24432;
    if( _1 != _24432 ){
        DeRef(_1);
    }
    _24432 = NOVALUE;
    _24429 = NOVALUE;
    // SubProg NewTempSym pc: 288 op: STARTLINE (58)

    /** symtab.e:423			SymTab[q][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    // SubProg NewTempSym pc: 290 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 292 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46791 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 297 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 301 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 303 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24435 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg NewTempSym pc: 307 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 309 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24435);
    if (!IS_ATOM_INT(_36S_TEMPS_16136)){
        _24436 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
    }
    else{
        _24436 = (object)*(((s1_ptr)_2)->base + _36S_TEMPS_16136);
    }
    _24435 = NOVALUE;
    // SubProg NewTempSym pc: 313 op: PASSIGN_SUBS (162)
    Ref(_24436);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24436;
    if( _1 != _24436 ){
        DeRef(_1);
    }
    _24436 = NOVALUE;
    _24433 = NOVALUE;
    // SubProg NewTempSym pc: 317 op: STARTLINE (58)

    /** symtab.e:424			SymTab[CurrentSub][S_TEMPS] = q*/
    // SubProg NewTempSym pc: 319 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 321 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 323 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36CurrentSub_16444 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 328 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 330 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_36S_TEMPS_16136))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TEMPS_16136)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _36S_TEMPS_16136);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _q_46791;
    DeRef(_1);
    _24437 = NOVALUE;
    // SubProg NewTempSym pc: 334 op: STARTLINE (58)

    /** symtab.e:425			p = q*/
    // SubProg NewTempSym pc: 336 op: ASSIGN (18)
    _p_46790 = _q_46791;
    // SubProg NewTempSym pc: 339 op: INTEGER_CHECK (96)
    // SubProg NewTempSym pc: 341 op: NOP1 (159)
L6: // addr: 342 pc: 341 sub: 46786 op: 159
    // SubProg NewTempSym pc: 342 op: NOP1 (159)
L5: // addr: 343 pc: 342 sub: 46786 op: 159
    // SubProg NewTempSym pc: 343 op: STARTLINE (58)

    /** symtab.e:428		if TRANSLATE then*/
    // SubProg NewTempSym pc: 345 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 347 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L7; // [347] 385
    }
    else{
    }
    // SubProg NewTempSym pc: 350 op: STARTLINE (58)

    /** symtab.e:429			SymTab[p][S_GTYPE] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 352 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 354 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24439 = NOVALUE;
    // SubProg NewTempSym pc: 367 op: STARTLINE (58)

    /** symtab.e:430			SymTab[p][S_SEQ_ELEM] = TYPE_OBJECT*/
    // SubProg NewTempSym pc: 369 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 371 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24441 = NOVALUE;
    // SubProg NewTempSym pc: 384 op: NOP1 (159)
L7: // addr: 385 pc: 384 sub: 46786 op: 159
    // SubProg NewTempSym pc: 385 op: STARTLINE (58)

    /** symtab.e:433		SymTab[p][S_OBJ] = NOVALUE*/
    // SubProg NewTempSym pc: 387 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 389 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
    // SubProg NewTempSym pc: 394 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 398 op: PASSIGN_SUBS (162)
    Ref(_36NOVALUE_16291);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _36NOVALUE_16291;
    DeRef(_1);
    _24443 = NOVALUE;
    // SubProg NewTempSym pc: 402 op: STARTLINE (58)

    /** symtab.e:434		SymTab[p][S_USAGE] = T_UNKNOWN*/
    // SubProg NewTempSym pc: 404 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 406 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24445 = NOVALUE;
    // SubProg NewTempSym pc: 419 op: STARTLINE (58)

    /** symtab.e:435		SymTab[p][S_SCOPE] = IN_USE*/
    // SubProg NewTempSym pc: 421 op: GLOBAL_INIT_CHECK (109)
    // SubProg NewTempSym pc: 423 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46790 + ((s1_ptr)_2)->base);
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
    _24447 = NOVALUE;
    // SubProg NewTempSym pc: 436 op: STARTLINE (58)

    /** symtab.e:437		return p*/
    // SubProg NewTempSym pc: 438 op: RETURNF (28)

// Exiting block BLOCK: NewTempSym

// block var inlining_46788

// block var q_46791
    DeRef(_24402);
    _24402 = NOVALUE;
    return _p_46790;
    // SubProg NewTempSym pc: 442 op: BADRETURNF (43)
    ;
}


void _54InitSymTab()
{
    object _hashval_46907 = NOVALUE;
    object _len_46908 = NOVALUE;
    object _s_46910 = NOVALUE;
    object _st_index_46911 = NOVALUE;
    object _kname_46912 = NOVALUE;
    object _fixups_46913 = NOVALUE;
    object _si_47052 = NOVALUE;
    object _sj_47053 = NOVALUE;
    object _25033 = NOVALUE; // 48295 25033
    object _25032 = NOVALUE; // 48294 25032
// skipping _24563  name type: 0
    object _24562 = NOVALUE; // 47135 24562
    object _24561 = NOVALUE; // 47134 24561
    object _24560 = NOVALUE; // 47132 24560
    object _24559 = NOVALUE; // 47131 24559
    object _24558 = NOVALUE; // 47130 24558
// skipping _24557  name type: 0
    object _24556 = NOVALUE; // 47127 24556
    object _24555 = NOVALUE; // 47124 24555
    object _24554 = NOVALUE; // 47123 24554
    object _24553 = NOVALUE; // 47121 24553
// skipping _24552  name type: 0
    object _24551 = NOVALUE; // 47115 24551
// skipping _24550  name type: 0
    object _24549 = NOVALUE; // 47111 24549
// skipping _24548  name type: 0
    object _24547 = NOVALUE; // 47108 24547
    object _24546 = NOVALUE; // 47106 24546
// skipping _24545  name type: 0
    object _24544 = NOVALUE; // 47101 24544
// skipping _24543  name type: 0
    object _24542 = NOVALUE; // 47097 24542
// skipping _24541  name type: 0
    object _24540 = NOVALUE; // 47094 24540
    object _24539 = NOVALUE; // 47092 24539
// skipping _24538  name type: 0
    object _24537 = NOVALUE; // 47089 24537
    object _24536 = NOVALUE; // 47087 24536
    object _24535 = NOVALUE; // 47086 24535
    object _24534 = NOVALUE; // 47085 24534
    object _24533 = NOVALUE; // 47083 24533
    object _24530 = NOVALUE; // 47076 24530
    object _24529 = NOVALUE; // 47074 24529
    object _24528 = NOVALUE; // 47073 24528
// skipping _24527  name type: 0
    object _24526 = NOVALUE; // 47069 24526
    object _24525 = NOVALUE; // 47068 24525
    object _24524 = NOVALUE; // 47066 24524
// skipping _24523  name type: 0
    object _24522 = NOVALUE; // 47061 24522
    object _24521 = NOVALUE; // 47060 24521
    object _24520 = NOVALUE; // 47058 24520
// skipping _24519  name type: 0
// skipping _24518  name type: 0
    object _24517 = NOVALUE; // 47046 24517
// skipping _24516  name type: 0
    object _24515 = NOVALUE; // 47042 24515
// skipping _24514  name type: 0
    object _24513 = NOVALUE; // 47039 24513
    object _24512 = NOVALUE; // 47037 24512
// skipping _24511  name type: 0
// skipping _24510  name type: 0
    object _24509 = NOVALUE; // 47031 24509
    object _24508 = NOVALUE; // 47029 24508
    object _24506 = NOVALUE; // 47026 24506
    object _24504 = NOVALUE; // 47023 24504
    object _24502 = NOVALUE; // 47020 24502
// skipping _24501  name type: 0
    object _24500 = NOVALUE; // 47016 24500
    object _24499 = NOVALUE; // 47014 24499
    object _24498 = NOVALUE; // 47010 24498
// skipping _24496  name type: 0
    object _24495 = NOVALUE; // 47005 24495
    object _24494 = NOVALUE; // 47003 24494
// skipping _24493  name type: 0
    object _24492 = NOVALUE; // 46999 24492
    object _24491 = NOVALUE; // 46997 24491
// skipping _24490  name type: 0
    object _24489 = NOVALUE; // 46993 24489
    object _24488 = NOVALUE; // 46991 24488
    object _24487 = NOVALUE; // 46989 24487
// skipping _24486  name type: 0
    object _24485 = NOVALUE; // 46985 24485
// skipping _24484  name type: 0
    object _24483 = NOVALUE; // 46981 24483
    object _24482 = NOVALUE; // 46980 24482
// skipping _24481  name type: 0
    object _24480 = NOVALUE; // 46975 24480
    object _24479 = NOVALUE; // 46973 24479
    object _24478 = NOVALUE; // 46971 24478
// skipping _24477  name type: 0
    object _24476 = NOVALUE; // 46967 24476
    object _24475 = NOVALUE; // 46965 24475
    object _24474 = NOVALUE; // 46963 24474
// skipping _24473  name type: 0
    object _24472 = NOVALUE; // 46959 24472
    object _24471 = NOVALUE; // 46957 24471
    object _24470 = NOVALUE; // 46955 24470
// skipping _24469  name type: 0
    object _24468 = NOVALUE; // 46951 24468
    object _24467 = NOVALUE; // 46950 24467
    object _24466 = NOVALUE; // 46948 24466
    object _24465 = NOVALUE; // 46947 24465
    object _24464 = NOVALUE; // 46946 24464
    object _24463 = NOVALUE; // 46945 24463
    object _24462 = NOVALUE; // 46942 24462
    object _24461 = NOVALUE; // 46939 24461
    object _24460 = NOVALUE; // 46937 24460
    object _24459 = NOVALUE; // 46935 24459
// skipping _24458  name type: 0
    object _24457 = NOVALUE; // 46931 24457
    object _24456 = NOVALUE; // 46929 24456
    object _24455 = NOVALUE; // 46927 24455
    object _24454 = NOVALUE; // 46925 24454
// skipping _24453  name type: 0
// skipping _24452  name type: 0
// skipping _24451  name type: 0
    object _24450 = NOVALUE; // 46919 24450
    object _24449 = NOVALUE; // 46917 24449
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg InitSymTab pc: 1 op: STARTLINE (58)

    /** symtab.e:445		sequence kname, fixups = {}*/
    // SubProg InitSymTab pc: 3 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_fixups_46913);
    _fixups_46913 = _21933;
    // SubProg InitSymTab pc: 6 op: SEQUENCE_CHECK (97)
    // SubProg InitSymTab pc: 8 op: STARTLINE (58)

    /** symtab.e:447		for k = 1 to length(keylist) do*/
    // SubProg InitSymTab pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 12 op: LENGTH (42)
    if (IS_SEQUENCE(_63keylist_22748)){
            _24449 = SEQ_PTR(_63keylist_22748)->length;
    }
    else {
        _24449 = 1;
    }
    // SubProg InitSymTab pc: 15 op: FOR_I (125)
    {
        object _k_46915;
        _k_46915 = 1;
L1: // addr: 22 pc: 15 sub: 46905 op: 125
        if (_k_46915 > _24449){
            goto L2; // [15] 560
        }
        // SubProg InitSymTab pc: 22 op: STARTLINE (58)

        /** symtab.e:448			kname = keylist[k][K_NAME]*/
        // SubProg InitSymTab pc: 24 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 26 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24450 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 30 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 32 op: RHS_SUBS_CHECK (92)
        DeRef(_kname_46912);
        _2 = (object)SEQ_PTR(_24450);
        _kname_46912 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_kname_46912);
        _24450 = NOVALUE;
        // SubProg InitSymTab pc: 36 op: SEQUENCE_CHECK (97)
        // SubProg InitSymTab pc: 38 op: STARTLINE (58)

        /** symtab.e:449			len = length(kname)*/
        // SubProg InitSymTab pc: 40 op: LENGTH (42)
        if (IS_SEQUENCE(_kname_46912)){
                _len_46908 = SEQ_PTR(_kname_46912)->length;
        }
        else {
            _len_46908 = 1;
        }
        // SubProg InitSymTab pc: 43 op: STARTLINE (58)

        /** symtab.e:450			hashval = hashfn(kname)*/
        // SubProg InitSymTab pc: 45 op: PROC (27)
        RefDS(_kname_46912);
        _hashval_46907 = _54hashfn(_kname_46912);
        // SubProg InitSymTab pc: 49 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_hashval_46907)) {
            _1 = (object)(DBL_PTR(_hashval_46907)->dbl);
            DeRefDS(_hashval_46907);
            _hashval_46907 = _1;
        }
        // SubProg InitSymTab pc: 51 op: STARTLINE (58)

        /** symtab.e:451			st_index = NewEntry(kname,*/
        // SubProg InitSymTab pc: 53 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 55 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24454 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 59 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 61 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24454);
        _24455 = (object)*(((s1_ptr)_2)->base + 2);
        _24454 = NOVALUE;
        // SubProg InitSymTab pc: 65 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 67 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24456 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 71 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 73 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24456);
        _24457 = (object)*(((s1_ptr)_2)->base + 3);
        _24456 = NOVALUE;
        // SubProg InitSymTab pc: 77 op: PROC (27)
        RefDS(_kname_46912);
        Ref(_24455);
        Ref(_24457);
        _st_index_46911 = _54NewEntry(_kname_46912, 0, _24455, _24457, _hashval_46907, 0, 0);
        _24455 = NOVALUE;
        _24457 = NOVALUE;
        // SubProg InitSymTab pc: 87 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_st_index_46911)) {
            _1 = (object)(DBL_PTR(_st_index_46911)->dbl);
            DeRefDS(_st_index_46911);
            _st_index_46911 = _1;
        }
        // SubProg InitSymTab pc: 89 op: STARTLINE (58)

        /** symtab.e:456			if find(keylist[k][K_TOKEN], RTN_TOKS) then*/
        // SubProg InitSymTab pc: 91 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 93 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24459 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 97 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 99 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24459);
        _24460 = (object)*(((s1_ptr)_2)->base + 3);
        _24459 = NOVALUE;
        // SubProg InitSymTab pc: 103 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 105 op: FIND_FROM (176)
        _24461 = find_from(_24460, _38RTN_TOKS_16044, 1);
        _24460 = NOVALUE;
        // SubProg InitSymTab pc: 110 op: IF (20)
        if (_24461 == 0)
        {
            _24461 = NOVALUE;
            goto L3; // [110] 325
        }
        else{
            _24461 = NOVALUE;
        }
        // SubProg InitSymTab pc: 113 op: STARTLINE (58)

        /** symtab.e:457				SymTab[st_index] = SymTab[st_index] &*/
        // SubProg InitSymTab pc: 115 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 117 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 119 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24462 = (object)*(((s1_ptr)_2)->base + _st_index_46911);
        // SubProg InitSymTab pc: 123 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 125 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 127 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24463 = (object)*(((s1_ptr)_2)->base + _st_index_46911);
        // SubProg InitSymTab pc: 131 op: LENGTH (42)
        if (IS_SEQUENCE(_24463)){
                _24464 = SEQ_PTR(_24463)->length;
        }
        else {
            _24464 = 1;
        }
        _24463 = NOVALUE;
        // SubProg InitSymTab pc: 134 op: MINUS (10)
        _24465 = _36SIZEOF_ROUTINE_ENTRY_16218 - _24464;
        _24464 = NOVALUE;
        // SubProg InitSymTab pc: 138 op: REPEAT (32)
        _24466 = Repeat(0, _24465);
        _24465 = NOVALUE;
        // SubProg InitSymTab pc: 142 op: CONCAT (15)
        if (IS_SEQUENCE(_24462) && IS_ATOM(_24466)) {
        }
        else if (IS_ATOM(_24462) && IS_SEQUENCE(_24466)) {
            Ref(_24462);
            Prepend(&_24467, _24466, _24462);
        }
        else {
            Concat((object_ptr)&_24467, _24462, _24466);
            _24462 = NOVALUE;
        }
        _24462 = NOVALUE;
        DeRefDS(_24466);
        _24466 = NOVALUE;
        // SubProg InitSymTab pc: 146 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _st_index_46911);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24467;
        if( _1 != _24467 ){
            DeRef(_1);
        }
        _24467 = NOVALUE;
        // SubProg InitSymTab pc: 150 op: STARTLINE (58)

        /** symtab.e:460				SymTab[st_index][S_NUM_ARGS] = keylist[k][K_NUM_ARGS]*/
        // SubProg InitSymTab pc: 152 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 154 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 159 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 161 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 163 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24470 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 167 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 169 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24470);
        _24471 = (object)*(((s1_ptr)_2)->base + 5);
        _24470 = NOVALUE;
        // SubProg InitSymTab pc: 173 op: PASSIGN_SUBS (162)
        Ref(_24471);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_36S_NUM_ARGS_16142))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24471;
        if( _1 != _24471 ){
            DeRef(_1);
        }
        _24471 = NOVALUE;
        _24468 = NOVALUE;
        // SubProg InitSymTab pc: 177 op: STARTLINE (58)

        /** symtab.e:461				SymTab[st_index][S_OPCODE] = keylist[k][K_OPCODE]*/
        // SubProg InitSymTab pc: 179 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 181 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 186 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 188 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 190 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24474 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 194 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 196 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24474);
        _24475 = (object)*(((s1_ptr)_2)->base + 4);
        _24474 = NOVALUE;
        // SubProg InitSymTab pc: 200 op: PASSIGN_SUBS (162)
        Ref(_24475);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 21);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24475;
        if( _1 != _24475 ){
            DeRef(_1);
        }
        _24475 = NOVALUE;
        _24472 = NOVALUE;
        // SubProg InitSymTab pc: 204 op: STARTLINE (58)

        /** symtab.e:462				SymTab[st_index][S_EFFECT] = keylist[k][K_EFFECT]*/
        // SubProg InitSymTab pc: 206 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 208 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 213 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 215 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 217 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24478 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 221 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 223 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24478);
        _24479 = (object)*(((s1_ptr)_2)->base + 6);
        _24478 = NOVALUE;
        // SubProg InitSymTab pc: 227 op: PASSIGN_SUBS (162)
        Ref(_24479);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 23);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24479;
        if( _1 != _24479 ){
            DeRef(_1);
        }
        _24479 = NOVALUE;
        _24476 = NOVALUE;
        // SubProg InitSymTab pc: 231 op: STARTLINE (58)

        /** symtab.e:463				SymTab[st_index][S_REFLIST] = {}*/
        // SubProg InitSymTab pc: 233 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 235 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 240 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 242 op: PASSIGN_SUBS (162)
        RefDS(_21933);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 24);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _21933;
        DeRef(_1);
        _24480 = NOVALUE;
        // SubProg InitSymTab pc: 246 op: STARTLINE (58)

        /** symtab.e:464				if length(keylist[k]) > K_EFFECT then*/
        // SubProg InitSymTab pc: 248 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 250 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24482 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 254 op: LENGTH (42)
        if (IS_SEQUENCE(_24482)){
                _24483 = SEQ_PTR(_24482)->length;
        }
        else {
            _24483 = 1;
        }
        _24482 = NOVALUE;
        // SubProg InitSymTab pc: 257 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 259 op: GREATER_IFW (107)
        if (_24483 <= 6)
        goto L4; // [259] 324
        // SubProg InitSymTab pc: 263 op: STARTLINE (58)

        /** symtab.e:465				    SymTab[st_index][S_CODE] = keylist[k][K_CODE]*/
        // SubProg InitSymTab pc: 265 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 267 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 272 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 274 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 276 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24487 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 280 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 282 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24487);
        _24488 = (object)*(((s1_ptr)_2)->base + 7);
        _24487 = NOVALUE;
        // SubProg InitSymTab pc: 286 op: PASSIGN_SUBS (162)
        Ref(_24488);
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
        *(intptr_t *)_2 = _24488;
        if( _1 != _24488 ){
            DeRef(_1);
        }
        _24488 = NOVALUE;
        _24485 = NOVALUE;
        // SubProg InitSymTab pc: 290 op: STARTLINE (58)

        /** symtab.e:466				    SymTab[st_index][S_DEF_ARGS] = keylist[k][K_DEF_ARGS]*/
        // SubProg InitSymTab pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 294 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 299 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 301 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 303 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24491 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 307 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 309 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24491);
        _24492 = (object)*(((s1_ptr)_2)->base + 8);
        _24491 = NOVALUE;
        // SubProg InitSymTab pc: 313 op: PASSIGN_SUBS (162)
        Ref(_24492);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 28);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24492;
        if( _1 != _24492 ){
            DeRef(_1);
        }
        _24492 = NOVALUE;
        _24489 = NOVALUE;
        // SubProg InitSymTab pc: 317 op: STARTLINE (58)

        /** symtab.e:467				    fixups &= st_index*/
        // SubProg InitSymTab pc: 319 op: CONCAT (15)
        Append(&_fixups_46913, _fixups_46913, _st_index_46911);
        // SubProg InitSymTab pc: 323 op: NOP1 (159)
L4: // addr: 324 pc: 323 sub: 46905 op: 159
        // SubProg InitSymTab pc: 324 op: NOP1 (159)
L3: // addr: 325 pc: 324 sub: 46905 op: 159
        // SubProg InitSymTab pc: 325 op: STARTLINE (58)

        /** symtab.e:470			if keylist[k][K_TOKEN] = PROC then*/
        // SubProg InitSymTab pc: 327 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 329 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24494 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 333 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 335 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24494);
        _24495 = (object)*(((s1_ptr)_2)->base + 3);
        _24494 = NOVALUE;
        // SubProg InitSymTab pc: 339 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 341 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24495, 27)){
            _24495 = NOVALUE;
            goto L5; // [341] 365
        }
        _24495 = NOVALUE;
        // SubProg InitSymTab pc: 345 op: STARTLINE (58)

        /** symtab.e:471				if equal(kname, "<TopLevel>") then*/
        // SubProg InitSymTab pc: 347 op: EQUAL (153)
        if (_kname_46912 == _24497)
        _24498 = 1;
        else if (IS_ATOM_INT(_kname_46912) && IS_ATOM_INT(_24497))
        _24498 = 0;
        else
        _24498 = (compare(_kname_46912, _24497) == 0);
        // SubProg InitSymTab pc: 351 op: IF (20)
        if (_24498 == 0)
        {
            _24498 = NOVALUE;
            goto L6; // [351] 462
        }
        else{
            _24498 = NOVALUE;
        }
        // SubProg InitSymTab pc: 354 op: STARTLINE (58)

        /** symtab.e:472					TopLevelSub = st_index*/
        // SubProg InitSymTab pc: 356 op: ASSIGN (18)
        _36TopLevelSub_16443 = _st_index_46911;
        // SubProg InitSymTab pc: 359 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 361 op: NOP1 (159)
        // SubProg InitSymTab pc: 362 op: ELSE (23)
        goto L6; // [362] 462
        // SubProg InitSymTab pc: 364 op: NOP1 (159)
L5: // addr: 365 pc: 364 sub: 46905 op: 159
        // SubProg InitSymTab pc: 365 op: STARTLINE (58)

        /** symtab.e:474			elsif keylist[k][K_TOKEN] = TYPE then*/
        // SubProg InitSymTab pc: 367 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 369 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_63keylist_22748);
        _24499 = (object)*(((s1_ptr)_2)->base + _k_46915);
        // SubProg InitSymTab pc: 373 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 375 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24499);
        _24500 = (object)*(((s1_ptr)_2)->base + 3);
        _24499 = NOVALUE;
        // SubProg InitSymTab pc: 379 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 381 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24500, 504)){
            _24500 = NOVALUE;
            goto L7; // [381] 461
        }
        _24500 = NOVALUE;
        // SubProg InitSymTab pc: 385 op: STARTLINE (58)

        /** symtab.e:475				if equal(kname, "object") then*/
        // SubProg InitSymTab pc: 387 op: EQUAL (153)
        if (_kname_46912 == _22895)
        _24502 = 1;
        else if (IS_ATOM_INT(_kname_46912) && IS_ATOM_INT(_22895))
        _24502 = 0;
        else
        _24502 = (compare(_kname_46912, _22895) == 0);
        // SubProg InitSymTab pc: 391 op: IF (20)
        if (_24502 == 0)
        {
            _24502 = NOVALUE;
            goto L8; // [391] 404
        }
        else{
            _24502 = NOVALUE;
        }
        // SubProg InitSymTab pc: 394 op: STARTLINE (58)

        /** symtab.e:476					object_type = st_index*/
        // SubProg InitSymTab pc: 396 op: ASSIGN (18)
        _54object_type_46255 = _st_index_46911;
        // SubProg InitSymTab pc: 399 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 401 op: ELSE (23)
        goto L9; // [401] 460
        // SubProg InitSymTab pc: 403 op: NOP1 (159)
L8: // addr: 404 pc: 403 sub: 46905 op: 159
        // SubProg InitSymTab pc: 404 op: STARTLINE (58)

        /** symtab.e:477				elsif equal(kname, "atom") then*/
        // SubProg InitSymTab pc: 406 op: EQUAL (153)
        if (_kname_46912 == _24503)
        _24504 = 1;
        else if (IS_ATOM_INT(_kname_46912) && IS_ATOM_INT(_24503))
        _24504 = 0;
        else
        _24504 = (compare(_kname_46912, _24503) == 0);
        // SubProg InitSymTab pc: 410 op: IF (20)
        if (_24504 == 0)
        {
            _24504 = NOVALUE;
            goto LA; // [410] 423
        }
        else{
            _24504 = NOVALUE;
        }
        // SubProg InitSymTab pc: 413 op: STARTLINE (58)

        /** symtab.e:478					atom_type = st_index*/
        // SubProg InitSymTab pc: 415 op: ASSIGN (18)
        _54atom_type_46257 = _st_index_46911;
        // SubProg InitSymTab pc: 418 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 420 op: ELSE (23)
        goto L9; // [420] 460
        // SubProg InitSymTab pc: 422 op: NOP1 (159)
LA: // addr: 423 pc: 422 sub: 46905 op: 159
        // SubProg InitSymTab pc: 423 op: STARTLINE (58)

        /** symtab.e:479				elsif equal(kname, "integer") then*/
        // SubProg InitSymTab pc: 425 op: EQUAL (153)
        if (_kname_46912 == _24505)
        _24506 = 1;
        else if (IS_ATOM_INT(_kname_46912) && IS_ATOM_INT(_24505))
        _24506 = 0;
        else
        _24506 = (compare(_kname_46912, _24505) == 0);
        // SubProg InitSymTab pc: 429 op: IF (20)
        if (_24506 == 0)
        {
            _24506 = NOVALUE;
            goto LB; // [429] 442
        }
        else{
            _24506 = NOVALUE;
        }
        // SubProg InitSymTab pc: 432 op: STARTLINE (58)

        /** symtab.e:480					integer_type = st_index*/
        // SubProg InitSymTab pc: 434 op: ASSIGN (18)
        _54integer_type_46261 = _st_index_46911;
        // SubProg InitSymTab pc: 437 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 439 op: ELSE (23)
        goto L9; // [439] 460
        // SubProg InitSymTab pc: 441 op: NOP1 (159)
LB: // addr: 442 pc: 441 sub: 46905 op: 159
        // SubProg InitSymTab pc: 442 op: STARTLINE (58)

        /** symtab.e:481				elsif equal(kname, "sequence") then*/
        // SubProg InitSymTab pc: 444 op: EQUAL (153)
        if (_kname_46912 == _24507)
        _24508 = 1;
        else if (IS_ATOM_INT(_kname_46912) && IS_ATOM_INT(_24507))
        _24508 = 0;
        else
        _24508 = (compare(_kname_46912, _24507) == 0);
        // SubProg InitSymTab pc: 448 op: IF (20)
        if (_24508 == 0)
        {
            _24508 = NOVALUE;
            goto LC; // [448] 459
        }
        else{
            _24508 = NOVALUE;
        }
        // SubProg InitSymTab pc: 451 op: STARTLINE (58)

        /** symtab.e:482					sequence_type = st_index*/
        // SubProg InitSymTab pc: 453 op: ASSIGN (18)
        _54sequence_type_46259 = _st_index_46911;
        // SubProg InitSymTab pc: 456 op: INTEGER_CHECK (96)
        // SubProg InitSymTab pc: 458 op: NOP1 (159)
LC: // addr: 459 pc: 458 sub: 46905 op: 159
        // SubProg InitSymTab pc: 459 op: NOP1 (159)
L9: // addr: 460 pc: 459 sub: 46905 op: 159
        // SubProg InitSymTab pc: 460 op: NOP1 (159)
L7: // addr: 461 pc: 460 sub: 46905 op: 159
        // SubProg InitSymTab pc: 461 op: NOP1 (159)
L6: // addr: 462 pc: 461 sub: 46905 op: 159
        // SubProg InitSymTab pc: 462 op: STARTLINE (58)

        /** symtab.e:485			if buckets[hashval] = 0 then*/
        // SubProg InitSymTab pc: 464 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 466 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_54buckets_46251);
        _24509 = (object)*(((s1_ptr)_2)->base + _hashval_46907);
        // SubProg InitSymTab pc: 470 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24509, 0)){
            _24509 = NOVALUE;
            goto LD; // [470] 485
        }
        _24509 = NOVALUE;
        // SubProg InitSymTab pc: 474 op: STARTLINE (58)

        /** symtab.e:486				buckets[hashval] = st_index*/
        // SubProg InitSymTab pc: 476 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 478 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_54buckets_46251);
        _2 = (object)(((s1_ptr)_2)->base + _hashval_46907);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46911;
        DeRef(_1);
        // SubProg InitSymTab pc: 482 op: ELSE (23)
        goto LE; // [482] 553
        // SubProg InitSymTab pc: 484 op: NOP1 (159)
LD: // addr: 485 pc: 484 sub: 46905 op: 159
        // SubProg InitSymTab pc: 485 op: STARTLINE (58)

        /** symtab.e:488				s = buckets[hashval]*/
        // SubProg InitSymTab pc: 487 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 489 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_54buckets_46251);
        _s_46910 = (object)*(((s1_ptr)_2)->base + _hashval_46907);
        if (!IS_ATOM_INT(_s_46910)){
            _s_46910 = (object)DBL_PTR(_s_46910)->dbl;
        }
        // SubProg InitSymTab pc: 495 op: STARTLINE (58)

        /** symtab.e:489				while SymTab[s][S_SAMEHASH] != 0 do*/
        // SubProg InitSymTab pc: 497 op: NOP2 (110)
        // SubProg InitSymTab pc: 499 op: NOPWHILE (158)
LF: // addr: 500 pc: 499 sub: 46905 op: 158
        // SubProg InitSymTab pc: 500 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 502 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24512 = (object)*(((s1_ptr)_2)->base + _s_46910);
        // SubProg InitSymTab pc: 506 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 508 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24512);
        _24513 = (object)*(((s1_ptr)_2)->base + 9);
        _24512 = NOVALUE;
        // SubProg InitSymTab pc: 512 op: NOTEQ_IFW (105)
        if (binary_op_a(EQUALS, _24513, 0)){
            _24513 = NOVALUE;
            goto L10; // [512] 537
        }
        _24513 = NOVALUE;
        // SubProg InitSymTab pc: 516 op: STARTLINE (58)

        /** symtab.e:490					s = SymTab[s][S_SAMEHASH]*/
        // SubProg InitSymTab pc: 518 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 520 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24515 = (object)*(((s1_ptr)_2)->base + _s_46910);
        // SubProg InitSymTab pc: 524 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 526 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24515);
        _s_46910 = (object)*(((s1_ptr)_2)->base + 9);
        if (!IS_ATOM_INT(_s_46910)){
            _s_46910 = (object)DBL_PTR(_s_46910)->dbl;
        }
        _24515 = NOVALUE;
        // SubProg InitSymTab pc: 532 op: STARTLINE (58)

        /** symtab.e:491				end while*/
        // SubProg InitSymTab pc: 534 op: ENDWHILE (22)
        goto LF; // [534] 500
        // SubProg InitSymTab pc: 536 op: NOP1 (159)
L10: // addr: 537 pc: 536 sub: 46905 op: 159
        // SubProg InitSymTab pc: 537 op: STARTLINE (58)

        /** symtab.e:492				SymTab[s][S_SAMEHASH] = st_index*/
        // SubProg InitSymTab pc: 539 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 541 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_46910 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 546 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 548 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 9);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46911;
        DeRef(_1);
        _24517 = NOVALUE;
        // SubProg InitSymTab pc: 552 op: NOP1 (159)
LE: // addr: 553 pc: 552 sub: 46905 op: 159
        // SubProg InitSymTab pc: 553 op: STARTLINE (58)

        /** symtab.e:494		end for*/
        // SubProg InitSymTab pc: 555 op: ENDFOR_INT_UP1 (54)
        _k_46915 = _k_46915 + 1;
        goto L1; // [555] 22
L2: // addr: 560 pc: 555 sub: 46905 op: 54
        ;
    }
    // SubProg InitSymTab pc: 560 op: STARTLINE (58)

    /** symtab.e:495		file_start_sym = length(SymTab)*/
    // SubProg InitSymTab pc: 562 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 564 op: LENGTH (42)
    if (IS_SEQUENCE(_37SymTab_15405)){
            _36file_start_sym_16442 = SEQ_PTR(_37SymTab_15405)->length;
    }
    else {
        _36file_start_sym_16442 = 1;
    }
    // SubProg InitSymTab pc: 567 op: INTEGER_CHECK (96)
    // SubProg InitSymTab pc: 569 op: STARTLINE (58)

    /** symtab.e:497		sequence si, sj*/
    // SubProg InitSymTab pc: 571 op: STARTLINE (58)

    /** symtab.e:498		CurrentSub = TopLevelSub*/
    // SubProg InitSymTab pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg InitSymTab pc: 575 op: ASSIGN (18)
    _36CurrentSub_16444 = _36TopLevelSub_16443;
    // SubProg InitSymTab pc: 578 op: INTEGER_CHECK (96)
    // SubProg InitSymTab pc: 580 op: STARTLINE (58)

    /** symtab.e:499		for i=1 to length(fixups) do*/
    // SubProg InitSymTab pc: 582 op: LENGTH (42)
    if (IS_SEQUENCE(_fixups_46913)){
            _24520 = SEQ_PTR(_fixups_46913)->length;
    }
    else {
        _24520 = 1;
    }
    // SubProg InitSymTab pc: 585 op: FOR_I (125)
    {
        object _i_47057;
        _i_47057 = 1;
L11: // addr: 592 pc: 585 sub: 46905 op: 125
        if (_i_47057 > _24520){
            goto L12; // [585] 946
        }
        // SubProg InitSymTab pc: 592 op: STARTLINE (58)

        /** symtab.e:500		    si = SymTab[fixups[i]][S_CODE] -- seq of either 0's or sequences of tokens*/
        // SubProg InitSymTab pc: 594 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 596 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fixups_46913);
        _24521 = (object)*(((s1_ptr)_2)->base + _i_47057);
        // SubProg InitSymTab pc: 600 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24522 = (object)*(((s1_ptr)_2)->base + _24521);
        // SubProg InitSymTab pc: 604 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 606 op: RHS_SUBS_CHECK (92)
        DeRef(_si_47052);
        _2 = (object)SEQ_PTR(_24522);
        if (!IS_ATOM_INT(_36S_CODE_16103)){
            _si_47052 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_CODE_16103)->dbl));
        }
        else{
            _si_47052 = (object)*(((s1_ptr)_2)->base + _36S_CODE_16103);
        }
        Ref(_si_47052);
        _24522 = NOVALUE;
        // SubProg InitSymTab pc: 610 op: SEQUENCE_CHECK (97)
        // SubProg InitSymTab pc: 612 op: STARTLINE (58)

        /** symtab.e:501		    for j=1 to length(si) do*/
        // SubProg InitSymTab pc: 614 op: LENGTH (42)
        if (IS_SEQUENCE(_si_47052)){
                _24524 = SEQ_PTR(_si_47052)->length;
        }
        else {
            _24524 = 1;
        }
        // SubProg InitSymTab pc: 617 op: FOR_I (125)
        {
            object _j_47065;
            _j_47065 = 1;
L13: // addr: 624 pc: 617 sub: 46905 op: 125
            if (_j_47065 > _24524){
                goto L14; // [617] 920
            }
            // SubProg InitSymTab pc: 624 op: STARTLINE (58)

            /** symtab.e:502		        if sequence(si[j]) then*/
            // SubProg InitSymTab pc: 626 op: RHS_SUBS (25)
            _2 = (object)SEQ_PTR(_si_47052);
            _24525 = (object)*(((s1_ptr)_2)->base + _j_47065);
            // SubProg InitSymTab pc: 630 op: IS_A_SEQUENCE (68)
            _24526 = IS_SEQUENCE(_24525);
            _24525 = NOVALUE;
            // SubProg InitSymTab pc: 633 op: IF (20)
            if (_24526 == 0)
            {
                _24526 = NOVALUE;
                goto L15; // [633] 913
            }
            else{
                _24526 = NOVALUE;
            }
            // SubProg InitSymTab pc: 636 op: STARTLINE (58)

            /** symtab.e:503		            sj = si[j] -- a sequence of tokens*/
            // SubProg InitSymTab pc: 638 op: RHS_SUBS (25)
            DeRef(_sj_47053);
            _2 = (object)SEQ_PTR(_si_47052);
            _sj_47053 = (object)*(((s1_ptr)_2)->base + _j_47065);
            Ref(_sj_47053);
            // SubProg InitSymTab pc: 642 op: SEQUENCE_CHECK (97)
            // SubProg InitSymTab pc: 644 op: STARTLINE (58)

            /** symtab.e:504					for ij=1 to length(sj) do*/
            // SubProg InitSymTab pc: 646 op: LENGTH (42)
            if (IS_SEQUENCE(_sj_47053)){
                    _24528 = SEQ_PTR(_sj_47053)->length;
            }
            else {
                _24528 = 1;
            }
            // SubProg InitSymTab pc: 649 op: FOR_I (125)
            {
                object _ij_47072;
                _ij_47072 = 1;
L16: // addr: 656 pc: 649 sub: 46905 op: 125
                if (_ij_47072 > _24528){
                    goto L17; // [649] 906
                }
                // SubProg InitSymTab pc: 656 op: STARTLINE (58)

                /** symtab.e:505		                switch sj[ij][T_ID] with fallthru do*/
                // SubProg InitSymTab pc: 658 op: RHS_SUBS (25)
                _2 = (object)SEQ_PTR(_sj_47053);
                _24529 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                // SubProg InitSymTab pc: 662 op: GLOBAL_INIT_CHECK (109)
                // SubProg InitSymTab pc: 664 op: RHS_SUBS_CHECK (92)
                _2 = (object)SEQ_PTR(_24529);
                _24530 = (object)*(((s1_ptr)_2)->base + 1);
                _24529 = NOVALUE;
                // SubProg InitSymTab pc: 668 op: SWITCH_I (193)
                if (IS_SEQUENCE(_24530) ){
                    goto L18; // [668] 899
                }
                if(!IS_ATOM_INT(_24530)){
                    if( (DBL_PTR(_24530)->dbl != (eudouble) ((object) DBL_PTR(_24530)->dbl) ) ){
                        goto L18; // [668] 899
                    }
                    _0 = (object) DBL_PTR(_24530)->dbl;
                }
                else {
                    _0 = _24530;
                };
                _24530 = NOVALUE;
                switch ( _0 ){ 
                    // SubProg InitSymTab pc: 673 op: STARTLINE (58)

                    /** symtab.e:506		                    case ATOM then -- must create a lasting temp*/
                    // SubProg InitSymTab pc: 675 op: CASE (186)
                    case 502:
                    // SubProg InitSymTab pc: 677 op: STARTLINE (58)

                    /** symtab.e:507		                    	if is_integer(sj[ij][T_SYM]) then*/
                    // SubProg InitSymTab pc: 679 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    _24533 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                    // SubProg InitSymTab pc: 683 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 685 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24533);
                    _24534 = (object)*(((s1_ptr)_2)->base + 2);
                    _24533 = NOVALUE;
                    // SubProg InitSymTab pc: 689 op: PROC (27)
                    Ref(_24534);
                    _24535 = _36is_integer(_24534);
                    _24534 = NOVALUE;
                    // SubProg InitSymTab pc: 693 op: IF (20)
                    if (_24535 == 0) {
                        DeRef(_24535);
                        _24535 = NOVALUE;
                        goto L19; // [693] 717
                    }
                    else {
                        if (!IS_ATOM_INT(_24535) && DBL_PTR(_24535)->dbl == 0.0){
                            DeRef(_24535);
                            _24535 = NOVALUE;
                            goto L19; // [693] 717
                        }
                        DeRef(_24535);
                        _24535 = NOVALUE;
                    }
                    DeRef(_24535);
                    _24535 = NOVALUE;
                    // SubProg InitSymTab pc: 696 op: STARTLINE (58)

                    /** symtab.e:508									st_index = NewIntSym(sj[ij][T_SYM])*/
                    // SubProg InitSymTab pc: 698 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    _24536 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                    // SubProg InitSymTab pc: 702 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 704 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24536);
                    _24537 = (object)*(((s1_ptr)_2)->base + 2);
                    _24536 = NOVALUE;
                    // SubProg InitSymTab pc: 708 op: PROC (27)
                    Ref(_24537);
                    _st_index_46911 = _54NewIntSym(_24537);
                    _24537 = NOVALUE;
                    // SubProg InitSymTab pc: 712 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46911)) {
                        _1 = (object)(DBL_PTR(_st_index_46911)->dbl);
                        DeRefDS(_st_index_46911);
                        _st_index_46911 = _1;
                    }
                    // SubProg InitSymTab pc: 714 op: ELSE (23)
                    goto L1A; // [714] 736
                    // SubProg InitSymTab pc: 716 op: NOP1 (159)
L19: // addr: 717 pc: 716 sub: 46905 op: 159
                    // SubProg InitSymTab pc: 717 op: STARTLINE (58)

                    /** symtab.e:510									st_index = NewDoubleSym(sj[ij][T_SYM])*/
                    // SubProg InitSymTab pc: 719 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    _24539 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                    // SubProg InitSymTab pc: 723 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 725 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24539);
                    _24540 = (object)*(((s1_ptr)_2)->base + 2);
                    _24539 = NOVALUE;
                    // SubProg InitSymTab pc: 729 op: PROC (27)
                    Ref(_24540);
                    _st_index_46911 = _54NewDoubleSym(_24540);
                    _24540 = NOVALUE;
                    // SubProg InitSymTab pc: 733 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46911)) {
                        _1 = (object)(DBL_PTR(_st_index_46911)->dbl);
                        DeRefDS(_st_index_46911);
                        _st_index_46911 = _1;
                    }
                    // SubProg InitSymTab pc: 735 op: NOP1 (159)
L1A: // addr: 736 pc: 735 sub: 46905 op: 159
                    // SubProg InitSymTab pc: 736 op: STARTLINE (58)

                    /** symtab.e:512								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    // SubProg InitSymTab pc: 738 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 740 op: PRIVATE_INIT_CHECK (30)
                    // SubProg InitSymTab pc: 742 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_37SymTab_15405);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _37SymTab_15405 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
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
                    _24542 = NOVALUE;
                    // SubProg InitSymTab pc: 755 op: STARTLINE (58)

                    /** symtab.e:513								sj[ij][T_SYM] = st_index*/
                    // SubProg InitSymTab pc: 757 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47053 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47072 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 762 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 764 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46911;
                    DeRef(_1);
                    _24544 = NOVALUE;
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
                    _2 = (object)SEQ_PTR(_sj_47053);
                    _24546 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                    // SubProg InitSymTab pc: 782 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 784 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24546);
                    _24547 = (object)*(((s1_ptr)_2)->base + 2);
                    _24546 = NOVALUE;
                    // SubProg InitSymTab pc: 788 op: PROC (27)
                    Ref(_24547);
                    _st_index_46911 = _54NewStringSym(_24547);
                    _24547 = NOVALUE;
                    // SubProg InitSymTab pc: 792 op: INTEGER_CHECK (96)
                    if (!IS_ATOM_INT(_st_index_46911)) {
                        _1 = (object)(DBL_PTR(_st_index_46911)->dbl);
                        DeRefDS(_st_index_46911);
                        _st_index_46911 = _1;
                    }
                    // SubProg InitSymTab pc: 794 op: STARTLINE (58)

                    /** symtab.e:517								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    // SubProg InitSymTab pc: 796 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 798 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_37SymTab_15405);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _37SymTab_15405 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46911 + ((s1_ptr)_2)->base);
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
                    _24549 = NOVALUE;
                    // SubProg InitSymTab pc: 811 op: STARTLINE (58)

                    /** symtab.e:518								sj[ij][T_SYM] = st_index*/
                    // SubProg InitSymTab pc: 813 op: LHS_SUBS1 (161)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47053 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47072 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 818 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 820 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46911;
                    DeRef(_1);
                    _24551 = NOVALUE;
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
                    _2 = (object)SEQ_PTR(_sj_47053);
                    _24553 = (object)*(((s1_ptr)_2)->base + _ij_47072);
                    // SubProg InitSymTab pc: 838 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 840 op: RHS_SUBS_CHECK (92)
                    _2 = (object)SEQ_PTR(_24553);
                    _24554 = (object)*(((s1_ptr)_2)->base + 2);
                    _24553 = NOVALUE;
                    // SubProg InitSymTab pc: 844 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 846 op: ASSIGN (18)
                    Ref(_24554);
                    DeRef(_25032);
                    _25032 = _24554;
                    // SubProg InitSymTab pc: 849 op: PROC (27)
                    _25033 = _54hashfn(_25032);
                    _25032 = NOVALUE;
                    // SubProg InitSymTab pc: 853 op: PROC (27)
                    Ref(_24554);
                    _24555 = _54keyfind(_24554, -1, _36current_file_no_16436, 0, _25033);
                    _24554 = NOVALUE;
                    _25033 = NOVALUE;
                    // SubProg InitSymTab pc: 861 op: ASSIGN_SUBS (16)
                    _2 = (object)SEQ_PTR(_sj_47053);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47053 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + _ij_47072);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24555;
                    if( _1 != _24555 ){
                        DeRef(_1);
                    }
                    _24555 = NOVALUE;
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
                    _2 = (object)SEQ_PTR(_sj_47053);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47053 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47072 + ((s1_ptr)_2)->base);
                    // SubProg InitSymTab pc: 880 op: GLOBAL_INIT_CHECK (109)
                    // SubProg InitSymTab pc: 882 op: RHS_SUBS (25)
                    _2 = (object)SEQ_PTR(_fixups_46913);
                    _24558 = (object)*(((s1_ptr)_2)->base + _i_47057);
                    // SubProg InitSymTab pc: 886 op: PASSIGN_OP_SUBS (164)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    _24559 = (object)*(((s1_ptr)_2)->base + 2);
                    _24556 = NOVALUE;
                    // SubProg InitSymTab pc: 890 op: CONCAT (15)
                    if (IS_SEQUENCE(_24559) && IS_ATOM(_24558)) {
                        Append(&_24560, _24559, _24558);
                    }
                    else if (IS_ATOM(_24559) && IS_SEQUENCE(_24558)) {
                    }
                    else {
                        Concat((object_ptr)&_24560, _24559, _24558);
                        _24559 = NOVALUE;
                    }
                    _24559 = NOVALUE;
                    _24558 = NOVALUE;
                    // SubProg InitSymTab pc: 894 op: PASSIGN_SUBS (162)
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24560;
                    if( _1 != _24560 ){
                        DeRef(_1);
                    }
                    _24560 = NOVALUE;
                    _24556 = NOVALUE;
                    // SubProg InitSymTab pc: 898 op: NOPSWITCH (187)
                ;}L18: // addr: 899 pc: 898 sub: 46905 op: 187
                // SubProg InitSymTab pc: 899 op: STARTLINE (58)

                /** symtab.e:526					end for*/
                // SubProg InitSymTab pc: 901 op: ENDFOR_INT_UP1 (54)
                _ij_47072 = _ij_47072 + 1;
                goto L16; // [901] 656
L17: // addr: 906 pc: 901 sub: 46905 op: 54
                ;
            }
            // SubProg InitSymTab pc: 906 op: STARTLINE (58)

            /** symtab.e:527					si[j] = sj*/
            // SubProg InitSymTab pc: 908 op: ASSIGN_SUBS (16)
            RefDS(_sj_47053);
            _2 = (object)SEQ_PTR(_si_47052);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _si_47052 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_47065);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _sj_47053;
            DeRef(_1);
            // SubProg InitSymTab pc: 912 op: NOP1 (159)
L15: // addr: 913 pc: 912 sub: 46905 op: 159
            // SubProg InitSymTab pc: 913 op: STARTLINE (58)

            /** symtab.e:529			end for*/
            // SubProg InitSymTab pc: 915 op: ENDFOR_INT_UP1 (54)
            _j_47065 = _j_47065 + 1;
            goto L13; // [915] 624
L14: // addr: 920 pc: 915 sub: 46905 op: 54
            ;
        }
        // SubProg InitSymTab pc: 920 op: STARTLINE (58)

        /** symtab.e:530			SymTab[fixups[i]][S_CODE] = si*/
        // SubProg InitSymTab pc: 922 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 924 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_fixups_46913);
        _24561 = (object)*(((s1_ptr)_2)->base + _i_47057);
        // SubProg InitSymTab pc: 928 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_24561 + ((s1_ptr)_2)->base);
        // SubProg InitSymTab pc: 933 op: GLOBAL_INIT_CHECK (109)
        // SubProg InitSymTab pc: 935 op: PASSIGN_SUBS (162)
        RefDS(_si_47052);
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
        *(intptr_t *)_2 = _si_47052;
        DeRef(_1);
        _24562 = NOVALUE;
        // SubProg InitSymTab pc: 939 op: STARTLINE (58)

        /** symtab.e:531		end for*/
        // SubProg InitSymTab pc: 941 op: ENDFOR_INT_UP1 (54)
        _i_47057 = _i_47057 + 1;
        goto L11; // [941] 592
L12: // addr: 946 pc: 941 sub: 46905 op: 54
        ;
    }
    // SubProg InitSymTab pc: 946 op: STARTLINE (58)

    /** symtab.e:532	end procedure*/
    // SubProg InitSymTab pc: 948 op: RETURNP (29)

// Exiting block BLOCK: InitSymTab

// block var hashval_46907

// block var len_46908

// block var s_46910

// block var st_index_46911

// block var kname_46912
    DeRef(_kname_46912);

// block var fixups_46913
    DeRefi(_fixups_46913);

// block var si_47052
    DeRef(_si_47052);

// block var sj_47053
    DeRef(_sj_47053);
    _24521 = NOVALUE;
    _24463 = NOVALUE;
    _24482 = NOVALUE;
    _24561 = NOVALUE;
    return;
    // SubProg InitSymTab pc: 951 op: BADRETURNF (43)
    ;
}


void _54add_ref(object _tok_47141)
{
    object _s_47143 = NOVALUE;
    object _24578 = NOVALUE; // 47169 24578
    object _24577 = NOVALUE; // 47168 24577
// skipping _24576  name type: 0
    object _24575 = NOVALUE; // 47165 24575
    object _24574 = NOVALUE; // 47163 24574
    object _24573 = NOVALUE; // 47162 24573
// skipping _24572  name type: 0
    object _24571 = NOVALUE; // 47158 24571
    object _24570 = NOVALUE; // 47156 24570
    object _24569 = NOVALUE; // 47155 24569
    object _24568 = NOVALUE; // 47154 24568
    object _24567 = NOVALUE; // 47152 24567
    object _24566 = NOVALUE; // 47149 24566
    object _24565 = NOVALUE; // 47148 24565
// skipping _24564  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg add_ref pc: 1 op: STARTLINE (58)

    /** symtab.e:538		s = tok[T_SYM]*/
    // SubProg add_ref pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 5 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47141);
    _s_47143 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_47143)){
        _s_47143 = (object)DBL_PTR(_s_47143)->dbl;
    }
    // SubProg add_ref pc: 11 op: STARTLINE (58)

    /** symtab.e:539		if s != CurrentSub and -- ignore self-ref's*/
    // SubProg add_ref pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 15 op: NOTEQ (4)
    _24565 = (_s_47143 != _36CurrentSub_16444);
    // SubProg add_ref pc: 19 op: SC1_AND_IF (146)
    if (_24565 == 0) {
        goto L1; // [19] 98
    }
    // SubProg add_ref pc: 23 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 25 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 27 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24567 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg add_ref pc: 31 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 33 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24567);
    _24568 = (object)*(((s1_ptr)_2)->base + 24);
    _24567 = NOVALUE;
    // SubProg add_ref pc: 37 op: FIND_FROM (176)
    _24569 = find_from(_s_47143, _24568, 1);
    _24568 = NOVALUE;
    // SubProg add_ref pc: 42 op: NOT (7)
    _24570 = (_24569 == 0);
    _24569 = NOVALUE;
    // SubProg add_ref pc: 45 op: NOP1 (159)
    // SubProg add_ref pc: 46 op: IF (20)
    if (_24570 == 0)
    {
        DeRef(_24570);
        _24570 = NOVALUE;
        goto L1; // [46] 98
    }
    else{
        DeRef(_24570);
        _24570 = NOVALUE;
    }
    // SubProg add_ref pc: 49 op: STARTLINE (58)

    /** symtab.e:542			SymTab[s][S_NREFS] += 1*/
    // SubProg add_ref pc: 51 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 53 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47143 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 58 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 60 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24573 = (object)*(((s1_ptr)_2)->base + 12);
    _24571 = NOVALUE;
    // SubProg add_ref pc: 64 op: PLUS1 (93)
    if (IS_ATOM_INT(_24573)) {
        _24574 = _24573 + 1;
        if (_24574 > MAXINT){
            _24574 = NewDouble((eudouble)_24574);
        }
    }
    else
    _24574 = binary_op(PLUS, 1, _24573);
    _24573 = NOVALUE;
    // SubProg add_ref pc: 68 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24574;
    if( _1 != _24574 ){
        DeRef(_1);
    }
    _24574 = NOVALUE;
    _24571 = NOVALUE;
    // SubProg add_ref pc: 72 op: STARTLINE (58)

    /** symtab.e:543			SymTab[CurrentSub][S_REFLIST] &= s*/
    // SubProg add_ref pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 76 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 78 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_36CurrentSub_16444 + ((s1_ptr)_2)->base);
    // SubProg add_ref pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg add_ref pc: 85 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24577 = (object)*(((s1_ptr)_2)->base + 24);
    _24575 = NOVALUE;
    // SubProg add_ref pc: 89 op: CONCAT (15)
    if (IS_SEQUENCE(_24577) && IS_ATOM(_s_47143)) {
        Append(&_24578, _24577, _s_47143);
    }
    else if (IS_ATOM(_24577) && IS_SEQUENCE(_s_47143)) {
    }
    else {
        Concat((object_ptr)&_24578, _24577, _s_47143);
        _24577 = NOVALUE;
    }
    _24577 = NOVALUE;
    // SubProg add_ref pc: 93 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24578;
    if( _1 != _24578 ){
        DeRef(_1);
    }
    _24578 = NOVALUE;
    _24575 = NOVALUE;
    // SubProg add_ref pc: 97 op: NOP1 (159)
L1: // addr: 98 pc: 97 sub: 47138 op: 159
    // SubProg add_ref pc: 98 op: STARTLINE (58)

    /** symtab.e:545	end procedure*/
    // SubProg add_ref pc: 100 op: RETURNP (29)

// Exiting block BLOCK: add_ref

// block var tok_47141
    DeRef(_tok_47141);

// block var s_47143
    DeRef(_24565);
    _24565 = NOVALUE;
    return;
    // SubProg add_ref pc: 103 op: BADRETURNF (43)
    ;
}


void _54mark_all(object _attribute_47173)
{
    object _p_47176 = NOVALUE;
    object _sym_file_47183 = NOVALUE;
    object _scope_47200 = NOVALUE;
// skipping _24611  name type: 0
    object _24610 = NOVALUE; // 47239 24610
    object _24609 = NOVALUE; // 47237 24609
    object _24608 = NOVALUE; // 47236 24608
// skipping _24607  name type: 0
    object _24606 = NOVALUE; // 47234 24606
// skipping _24605  name type: 0
    object _24604 = NOVALUE; // 47229 24604
    object _24603 = NOVALUE; // 47228 24603
    object _24602 = NOVALUE; // 47227 24602
    object _24601 = NOVALUE; // 47220 24601
    object _24600 = NOVALUE; // 47219 24600
// skipping _24599  name type: 0
    object _24598 = NOVALUE; // 47217 24598
    object _24597 = NOVALUE; // 47215 24597
    object _24596 = NOVALUE; // 47214 24596
    object _24595 = NOVALUE; // 47213 24595
// skipping _24592  name type: 0
    object _24591 = NOVALUE; // 47202 24591
    object _24590 = NOVALUE; // 47198 24590
    object _24589 = NOVALUE; // 47197 24589
// skipping _24588  name type: 0
    object _24587 = NOVALUE; // 47195 24587
    object _24586 = NOVALUE; // 47193 24586
// skipping _24585  name type: 0
    object _24584 = NOVALUE; // 47190 24584
// skipping _24583  name type: 0
    object _24582 = NOVALUE; // 47185 24582
// skipping _24581  name type: 0
// skipping _24580  name type: 0
    object _24579 = NOVALUE; // 47178 24579
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg mark_all pc: 1 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 3 op: STARTLINE (58)

    /** symtab.e:550		if just_mark_everything_from then*/
    // SubProg mark_all pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 7 op: IF (20)
    if (_54just_mark_everything_from_47170 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24579 = (object)*(((s1_ptr)_2)->base + _54just_mark_everything_from_47170);
    // SubProg mark_all pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 22 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24579);
    _p_47176 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47176)){
        _p_47176 = (object)DBL_PTR(_p_47176)->dbl;
    }
    _24579 = NOVALUE;
    // SubProg mark_all pc: 28 op: STARTLINE (58)

    /** symtab.e:552			while p != 0 do*/
    // SubProg mark_all pc: 30 op: NOP2 (110)
    // SubProg mark_all pc: 32 op: NOPWHILE (158)
L2: // addr: 33 pc: 32 sub: 47171 op: 158
    // SubProg mark_all pc: 33 op: NOTEQ_IFW (105)
    if (_p_47176 == 0)
    goto L3; // [33] 269
    // SubProg mark_all pc: 37 op: STARTLINE (58)

    /** symtab.e:553				integer sym_file = SymTab[p][S_FILE_NO]*/
    // SubProg mark_all pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 41 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24582 = (object)*(((s1_ptr)_2)->base + _p_47176);
    // SubProg mark_all pc: 45 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 47 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24582);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _sym_file_47183 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _sym_file_47183 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_sym_file_47183)){
        _sym_file_47183 = (object)DBL_PTR(_sym_file_47183)->dbl;
    }
    _24582 = NOVALUE;
    // SubProg mark_all pc: 53 op: STARTLINE (58)

    /** symtab.e:554				just_mark_everything_from = p*/
    // SubProg mark_all pc: 55 op: ASSIGN (18)
    _54just_mark_everything_from_47170 = _p_47176;
    // SubProg mark_all pc: 58 op: INTEGER_CHECK (96)
    // SubProg mark_all pc: 60 op: STARTLINE (58)

    /** symtab.e:555				if sym_file = current_file_no or map:has( recheck_routines, sym_file ) then*/
    // SubProg mark_all pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 64 op: EQUALS (3)
    _24584 = (_sym_file_47183 == _36current_file_no_16436);
    // SubProg mark_all pc: 68 op: SC1_OR_IF (147)
    if (_24584 != 0) {
        goto L4; // [68] 84
    }
    // SubProg mark_all pc: 72 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 74 op: PROC (27)
    Ref(_54recheck_routines_47243);
    _24586 = _29has(_54recheck_routines_47243, _sym_file_47183);
    // SubProg mark_all pc: 79 op: NOP1 (159)
    // SubProg mark_all pc: 80 op: IF (20)
    if (_24586 == 0) {
        DeRef(_24586);
        _24586 = NOVALUE;
        goto L5; // [80] 108
    }
    else {
        if (!IS_ATOM_INT(_24586) && DBL_PTR(_24586)->dbl == 0.0){
            DeRef(_24586);
            _24586 = NOVALUE;
            goto L5; // [80] 108
        }
        DeRef(_24586);
        _24586 = NOVALUE;
    }
    DeRef(_24586);
    _24586 = NOVALUE;
    // SubProg mark_all pc: 83 op: NOP1 (159)
L4: // addr: 84 pc: 83 sub: 47171 op: 159
    // SubProg mark_all pc: 84 op: STARTLINE (58)

    /** symtab.e:556					SymTab[p][attribute] += 1*/
    // SubProg mark_all pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 88 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_47176 + ((s1_ptr)_2)->base);
    // SubProg mark_all pc: 93 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24589 = (object)*(((s1_ptr)_2)->base + _attribute_47173);
    _24587 = NOVALUE;
    // SubProg mark_all pc: 97 op: PLUS1 (93)
    if (IS_ATOM_INT(_24589)) {
        _24590 = _24589 + 1;
        if (_24590 > MAXINT){
            _24590 = NewDouble((eudouble)_24590);
        }
    }
    else
    _24590 = binary_op(PLUS, 1, _24589);
    _24589 = NOVALUE;
    // SubProg mark_all pc: 101 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47173);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24590;
    if( _1 != _24590 ){
        DeRef(_1);
    }
    _24590 = NOVALUE;
    _24587 = NOVALUE;
    // SubProg mark_all pc: 105 op: ELSE (23)
    goto L6; // [105] 246
    // SubProg mark_all pc: 107 op: NOP1 (159)
L5: // addr: 108 pc: 107 sub: 47171 op: 159
    // SubProg mark_all pc: 108 op: STARTLINE (58)

    /** symtab.e:558					integer scope = SymTab[p][S_SCOPE]*/
    // SubProg mark_all pc: 110 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24591 = (object)*(((s1_ptr)_2)->base + _p_47176);
    // SubProg mark_all pc: 116 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24591);
    _scope_47200 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47200)){
        _scope_47200 = (object)DBL_PTR(_scope_47200)->dbl;
    }
    _24591 = NOVALUE;
    // SubProg mark_all pc: 124 op: STARTLINE (58)

    /** symtab.e:559					switch scope with fallthru do*/
    // SubProg mark_all pc: 126 op: SWITCH_I (193)
    _0 = _scope_47200;
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
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24595 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
        // SubProg mark_all pc: 147 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24595);
        _24596 = (object)*(((s1_ptr)_2)->base + _sym_file_47183);
        _24595 = NOVALUE;
        // SubProg mark_all pc: 151 op: AND_BITS (56)
        if (IS_ATOM_INT(_24596)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24596;
                 _24597 = MAKE_UINT(tu);
            }
        }
        else {
            _24597 = binary_op(AND_BITS, 6, _24596);
        }
        _24596 = NOVALUE;
        // SubProg mark_all pc: 155 op: IF (20)
        if (_24597 == 0) {
            DeRef(_24597);
            _24597 = NOVALUE;
            goto L7; // [155] 243
        }
        else {
            if (!IS_ATOM_INT(_24597) && DBL_PTR(_24597)->dbl == 0.0){
                DeRef(_24597);
                _24597 = NOVALUE;
                goto L7; // [155] 243
            }
            DeRef(_24597);
            _24597 = NOVALUE;
        }
        DeRef(_24597);
        _24597 = NOVALUE;
        // SubProg mark_all pc: 158 op: STARTLINE (58)

        /** symtab.e:562								SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 160 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 162 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47176 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 167 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24600 = (object)*(((s1_ptr)_2)->base + _attribute_47173);
        _24598 = NOVALUE;
        // SubProg mark_all pc: 171 op: PLUS1 (93)
        if (IS_ATOM_INT(_24600)) {
            _24601 = _24600 + 1;
            if (_24601 > MAXINT){
                _24601 = NewDouble((eudouble)_24601);
            }
        }
        else
        _24601 = binary_op(PLUS, 1, _24600);
        _24600 = NOVALUE;
        // SubProg mark_all pc: 175 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47173);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24601;
        if( _1 != _24601 ){
            DeRef(_1);
        }
        _24601 = NOVALUE;
        _24598 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24602 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
        // SubProg mark_all pc: 200 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24602);
        _24603 = (object)*(((s1_ptr)_2)->base + _sym_file_47183);
        _24602 = NOVALUE;
        // SubProg mark_all pc: 204 op: AND_BITS (56)
        if (IS_ATOM_INT(_24603)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24603;
                 _24604 = MAKE_UINT(tu);
            }
        }
        else {
            _24604 = binary_op(AND_BITS, 2, _24603);
        }
        _24603 = NOVALUE;
        // SubProg mark_all pc: 208 op: NOT_IFW (108)
        if (IS_ATOM_INT(_24604)) {
            if (_24604 != 0){
                DeRef(_24604);
                _24604 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        else {
            if (DBL_PTR(_24604)->dbl != 0.0){
                DeRef(_24604);
                _24604 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        DeRef(_24604);
        _24604 = NOVALUE;
        // SubProg mark_all pc: 211 op: STARTLINE (58)

        /** symtab.e:567								break*/
        // SubProg mark_all pc: 213 op: ELSE (23)
        goto L9; // [213] 217
        // SubProg mark_all pc: 215 op: NOP1 (159)
L8: // addr: 216 pc: 215 sub: 47171 op: 159
        // SubProg mark_all pc: 216 op: NOP1 (159)
L9: // addr: 217 pc: 216 sub: 47171 op: 159
        // SubProg mark_all pc: 217 op: STARTLINE (58)

        /** symtab.e:570						case SC_GLOBAL then*/
        // SubProg mark_all pc: 219 op: CASE (186)
        case 6:
        // SubProg mark_all pc: 221 op: STARTLINE (58)

        /** symtab.e:571							SymTab[p][attribute] += 1*/
        // SubProg mark_all pc: 223 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_all pc: 225 op: LHS_SUBS1 (161)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _37SymTab_15405 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47176 + ((s1_ptr)_2)->base);
        // SubProg mark_all pc: 230 op: PASSIGN_OP_SUBS (164)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24608 = (object)*(((s1_ptr)_2)->base + _attribute_47173);
        _24606 = NOVALUE;
        // SubProg mark_all pc: 234 op: PLUS1 (93)
        if (IS_ATOM_INT(_24608)) {
            _24609 = _24608 + 1;
            if (_24609 > MAXINT){
                _24609 = NewDouble((eudouble)_24609);
            }
        }
        else
        _24609 = binary_op(PLUS, 1, _24608);
        _24608 = NOVALUE;
        // SubProg mark_all pc: 238 op: PASSIGN_SUBS (162)
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47173);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24609;
        if( _1 != _24609 ){
            DeRef(_1);
        }
        _24609 = NOVALUE;
        _24606 = NOVALUE;
        // SubProg mark_all pc: 242 op: NOPSWITCH (187)
    ;}L7: // addr: 243 pc: 242 sub: 47171 op: 187
    // SubProg mark_all pc: 243 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var scope_47200
    // SubProg mark_all pc: 245 op: NOP1 (159)
L6: // addr: 246 pc: 245 sub: 47171 op: 159
    // SubProg mark_all pc: 246 op: STARTLINE (58)

    /** symtab.e:575				p = SymTab[p][S_NEXT]*/
    // SubProg mark_all pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24610 = (object)*(((s1_ptr)_2)->base + _p_47176);
    // SubProg mark_all pc: 254 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_all pc: 256 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24610);
    _p_47176 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47176)){
        _p_47176 = (object)DBL_PTR(_p_47176)->dbl;
    }
    _24610 = NOVALUE;
    // SubProg mark_all pc: 262 op: EXIT_BLOCK (206)

// Exiting block BLOCK: WHILE-

// block var sym_file_47183
    // SubProg mark_all pc: 264 op: STARTLINE (58)

    /** symtab.e:576			end while*/
    // SubProg mark_all pc: 266 op: ENDWHILE (22)
    goto L2; // [266] 33
    // SubProg mark_all pc: 268 op: NOP1 (159)
L3: // addr: 269 pc: 268 sub: 47171 op: 159
    // SubProg mark_all pc: 269 op: NOP1 (159)
L1: // addr: 270 pc: 269 sub: 47171 op: 159
    // SubProg mark_all pc: 270 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var p_47176
    // SubProg mark_all pc: 272 op: STARTLINE (58)

    /** symtab.e:578	end procedure*/
    // SubProg mark_all pc: 274 op: RETURNP (29)

// Exiting block BLOCK: mark_all

// block var attribute_47173
    DeRef(_24584);
    _24584 = NOVALUE;
    return;
    // SubProg mark_all pc: 277 op: BADRETURNF (43)
    ;
}


void _54mark_rechecks(object _file_no_47249)
{
    object _recheck_targets_47252 = NOVALUE;
    object _remaining_47256 = NOVALUE;
    object _marked_47260 = NOVALUE;
// skipping _24620  name type: 0
// skipping _24619  name type: 0
// skipping _24618  name type: 0
    object _24617 = NOVALUE; // 47270 24617
// skipping _24616  name type: 0
    object _24615 = NOVALUE; // 47264 24615
    object _24614 = NOVALUE; // 47259 24614
    object _24613 = NOVALUE; // 47255 24613
// skipping _24612  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg mark_rechecks pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_file_no_47249)) {
        _1 = (object)(DBL_PTR(_file_no_47249)->dbl);
        DeRefDS(_file_no_47249);
        _file_no_47249 = _1;
    }
    // SubProg mark_rechecks pc: 3 op: STARTLINE (58)

    /** symtab.e:584		sequence recheck_targets = map:get( recheck_routines, file_no, {} )*/
    // SubProg mark_rechecks pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 7 op: PROC (27)
    Ref(_54recheck_routines_47243);
    RefDS(_21933);
    _0 = _recheck_targets_47252;
    _recheck_targets_47252 = _29get(_54recheck_routines_47243, _file_no_47249, _21933);
    DeRef(_0);
    // SubProg mark_rechecks pc: 13 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 15 op: STARTLINE (58)

    /** symtab.e:585		if length( recheck_targets ) then*/
    // SubProg mark_rechecks pc: 17 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47252)){
            _24613 = SEQ_PTR(_recheck_targets_47252)->length;
    }
    else {
        _24613 = 1;
    }
    // SubProg mark_rechecks pc: 20 op: IF (20)
    if (_24613 == 0)
    {
        _24613 = NOVALUE;
        goto L1; // [20] 129
    }
    else{
        _24613 = NOVALUE;
    }
    // SubProg mark_rechecks pc: 23 op: STARTLINE (58)

    /** symtab.e:586			sequence remaining = {}*/
    // SubProg mark_rechecks pc: 25 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_remaining_47256);
    _remaining_47256 = _21933;
    // SubProg mark_rechecks pc: 28 op: SEQUENCE_CHECK (97)
    // SubProg mark_rechecks pc: 30 op: STARTLINE (58)

    /** symtab.e:587			for i = length( recheck_targets ) to 1 by -1 do*/
    // SubProg mark_rechecks pc: 32 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_targets_47252)){
            _24614 = SEQ_PTR(_recheck_targets_47252)->length;
    }
    else {
        _24614 = 1;
    }
    // SubProg mark_rechecks pc: 35 op: FOR_I (125)
    {
        object _i_47258;
        _i_47258 = _24614;
L2: // addr: 42 pc: 35 sub: 47247 op: 125
        if (_i_47258 < 1){
            goto L3; // [35] 117
        }
        // SubProg mark_rechecks pc: 42 op: STARTLINE (58)

        /** symtab.e:588				integer marked = 0*/
        // SubProg mark_rechecks pc: 44 op: ASSIGN_I (113)
        _marked_47260 = 0;
        // SubProg mark_rechecks pc: 47 op: STARTLINE (58)

        /** symtab.e:589				if TRANSLATE then*/
        // SubProg mark_rechecks pc: 49 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 51 op: IF (20)
        if (_36TRANSLATE_16061 == 0)
        {
            goto L4; // [51] 72
        }
        else{
        }
        // SubProg mark_rechecks pc: 54 op: STARTLINE (58)

        /** symtab.e:590					marked = MarkTargets( recheck_targets[i], S_RI_TARGET )*/
        // SubProg mark_rechecks pc: 56 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47252);
        _24615 = (object)*(((s1_ptr)_2)->base + _i_47258);
        // SubProg mark_rechecks pc: 60 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 62 op: PROC (27)
        Ref(_24615);
        _marked_47260 = _54MarkTargets(_24615, 53);
        _24615 = NOVALUE;
        // SubProg mark_rechecks pc: 67 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47260)) {
            _1 = (object)(DBL_PTR(_marked_47260)->dbl);
            DeRefDS(_marked_47260);
            _marked_47260 = _1;
        }
        // SubProg mark_rechecks pc: 69 op: ELSE (23)
        goto L5; // [69] 96
        // SubProg mark_rechecks pc: 71 op: NOP1 (159)
L4: // addr: 72 pc: 71 sub: 47247 op: 159
        // SubProg mark_rechecks pc: 72 op: STARTLINE (58)

        /** symtab.e:591				elsif BIND then*/
        // SubProg mark_rechecks pc: 74 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 76 op: IF (20)
        if (_36BIND_16064 == 0)
        {
            goto L6; // [76] 95
        }
        else{
        }
        // SubProg mark_rechecks pc: 79 op: STARTLINE (58)

        /** symtab.e:592					marked = MarkTargets( recheck_targets[i], S_NREFS )*/
        // SubProg mark_rechecks pc: 81 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_targets_47252);
        _24617 = (object)*(((s1_ptr)_2)->base + _i_47258);
        // SubProg mark_rechecks pc: 85 op: GLOBAL_INIT_CHECK (109)
        // SubProg mark_rechecks pc: 87 op: PROC (27)
        Ref(_24617);
        _marked_47260 = _54MarkTargets(_24617, 12);
        _24617 = NOVALUE;
        // SubProg mark_rechecks pc: 92 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_marked_47260)) {
            _1 = (object)(DBL_PTR(_marked_47260)->dbl);
            DeRefDS(_marked_47260);
            _marked_47260 = _1;
        }
        // SubProg mark_rechecks pc: 94 op: NOP1 (159)
L6: // addr: 95 pc: 94 sub: 47247 op: 159
        // SubProg mark_rechecks pc: 95 op: NOP1 (159)
L5: // addr: 96 pc: 95 sub: 47247 op: 159
        // SubProg mark_rechecks pc: 96 op: STARTLINE (58)

        /** symtab.e:594				if not marked then*/
        // SubProg mark_rechecks pc: 98 op: NOT_IFW (108)
        if (_marked_47260 != 0)
        goto L7; // [98] 108
        // SubProg mark_rechecks pc: 101 op: STARTLINE (58)

        /** symtab.e:595					remaining &= file_no*/
        // SubProg mark_rechecks pc: 103 op: CONCAT (15)
        Append(&_remaining_47256, _remaining_47256, _file_no_47249);
        // SubProg mark_rechecks pc: 107 op: NOP1 (159)
L7: // addr: 108 pc: 107 sub: 47247 op: 159
        // SubProg mark_rechecks pc: 108 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var marked_47260
        // SubProg mark_rechecks pc: 110 op: STARTLINE (58)

        /** symtab.e:597			end for*/
        // SubProg mark_rechecks pc: 112 op: ENDFOR_GENERAL (39)
        _i_47258 = _i_47258 + -1;
        goto L2; // [112] 42
L3: // addr: 117 pc: 112 sub: 47247 op: 39
        ;
    }
    // SubProg mark_rechecks pc: 117 op: STARTLINE (58)

    /** symtab.e:598			map:put( recheck_routines, file_no, recheck_targets )*/
    // SubProg mark_rechecks pc: 119 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_rechecks pc: 121 op: PROC (27)
    Ref(_54recheck_routines_47243);
    RefDS(_recheck_targets_47252);
    _29put(_54recheck_routines_47243, _file_no_47249, _recheck_targets_47252, 1, 0);
    // SubProg mark_rechecks pc: 128 op: NOP1 (159)
L1: // addr: 129 pc: 128 sub: 47247 op: 159
    // SubProg mark_rechecks pc: 129 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var remaining_47256
    DeRefi(_remaining_47256);
    _remaining_47256 = NOVALUE;
    // SubProg mark_rechecks pc: 131 op: STARTLINE (58)

    /** symtab.e:600	end procedure*/
    // SubProg mark_rechecks pc: 133 op: RETURNP (29)

// Exiting block BLOCK: mark_rechecks

// block var file_no_47249

// block var recheck_targets_47252
    DeRef(_recheck_targets_47252);
    return;
    // SubProg mark_rechecks pc: 136 op: BADRETURNF (43)
    ;
}


void _54mark_final_targets()
{
    object _size_1__tmp_at47_47288 = NOVALUE;
    object _size_inlined_size_at_47_47287 = NOVALUE;
    object _recheck_files_47289 = NOVALUE;
    object _24623 = NOVALUE; // 47294 24623
    object _24622 = NOVALUE; // 47293 24622
// skipping _24621  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg mark_final_targets pc: 1 op: STARTLINE (58)

    /** symtab.e:603		if just_mark_everything_from then*/
    // SubProg mark_final_targets pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 5 op: IF (20)
    if (_54just_mark_everything_from_47170 == 0)
    {
        goto L1; // [5] 44
    }
    else{
    }
    // SubProg mark_final_targets pc: 8 op: STARTLINE (58)

    /** symtab.e:604			if TRANSLATE then*/
    // SubProg mark_final_targets pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 12 op: IF (20)
    if (_36TRANSLATE_16061 == 0)
    {
        goto L2; // [12] 25
    }
    else{
    }
    // SubProg mark_final_targets pc: 15 op: STARTLINE (58)

    /** symtab.e:605				mark_all( S_RI_TARGET )*/
    // SubProg mark_final_targets pc: 17 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 19 op: PROC (27)
    _54mark_all(53);
    // SubProg mark_final_targets pc: 22 op: ELSE (23)
    goto L3; // [22] 109
    // SubProg mark_final_targets pc: 24 op: NOP1 (159)
L2: // addr: 25 pc: 24 sub: 47276 op: 159
    // SubProg mark_final_targets pc: 25 op: STARTLINE (58)

    /** symtab.e:606			elsif BIND then*/
    // SubProg mark_final_targets pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 29 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L3; // [29] 109
    }
    else{
    }
    // SubProg mark_final_targets pc: 32 op: STARTLINE (58)

    /** symtab.e:607				mark_all( S_NREFS )*/
    // SubProg mark_final_targets pc: 34 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 36 op: PROC (27)
    _54mark_all(12);
    // SubProg mark_final_targets pc: 39 op: NOP1 (159)
    // SubProg mark_final_targets pc: 40 op: NOP1 (159)
    // SubProg mark_final_targets pc: 41 op: ELSE (23)
    goto L3; // [41] 109
    // SubProg mark_final_targets pc: 43 op: NOP1 (159)
L1: // addr: 44 pc: 43 sub: 47276 op: 159
    // SubProg mark_final_targets pc: 44 op: STARTLINE (58)

    /** symtab.e:609		elsif map:size( recheck_routines ) then*/
    // SubProg mark_final_targets pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 48 op: STARTLINE (58)

    /** map.e:802		return eumem:ram_space[the_map_p][MAP_SIZE]*/
    // SubProg mark_final_targets pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 52 op: RHS_SUBS (25)
    DeRef(_size_1__tmp_at47_47288);
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_54recheck_routines_47243)){
        _size_1__tmp_at47_47288 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_54recheck_routines_47243)->dbl));
    }
    else{
        _size_1__tmp_at47_47288 = (object)*(((s1_ptr)_2)->base + _54recheck_routines_47243);
    }
    Ref(_size_1__tmp_at47_47288);
    // SubProg mark_final_targets pc: 56 op: RHS_SUBS_CHECK (92)
    DeRef(_size_inlined_size_at_47_47287);
    _2 = (object)SEQ_PTR(_size_1__tmp_at47_47288);
    _size_inlined_size_at_47_47287 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_size_inlined_size_at_47_47287);
    // SubProg mark_final_targets pc: 60 op: NOP1 (159)
    // SubProg mark_final_targets pc: 61 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-size from mark_final_targets @ 47

// block var size_1__tmp_at47_47288
    DeRef(_size_1__tmp_at47_47288);
    _size_1__tmp_at47_47288 = NOVALUE;
    // SubProg mark_final_targets pc: 63 op: IF (20)
    if (_size_inlined_size_at_47_47287 == 0) {
        goto L4; // [63] 106
    }
    else {
        if (!IS_ATOM_INT(_size_inlined_size_at_47_47287) && DBL_PTR(_size_inlined_size_at_47_47287)->dbl == 0.0){
            goto L4; // [63] 106
        }
    }
    // SubProg mark_final_targets pc: 66 op: STARTLINE (58)

    /** symtab.e:610			sequence recheck_files = map:keys( recheck_routines )*/
    // SubProg mark_final_targets pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg mark_final_targets pc: 70 op: PROC (27)
    Ref(_54recheck_routines_47243);
    _0 = _recheck_files_47289;
    _recheck_files_47289 = _29keys(_54recheck_routines_47243, 0);
    DeRef(_0);
    // SubProg mark_final_targets pc: 75 op: SEQUENCE_CHECK (97)
    // SubProg mark_final_targets pc: 77 op: STARTLINE (58)

    /** symtab.e:611			for i = 1 to length( recheck_files ) do*/
    // SubProg mark_final_targets pc: 79 op: LENGTH (42)
    if (IS_SEQUENCE(_recheck_files_47289)){
            _24622 = SEQ_PTR(_recheck_files_47289)->length;
    }
    else {
        _24622 = 1;
    }
    // SubProg mark_final_targets pc: 82 op: FOR_I (125)
    {
        object _i_47292;
        _i_47292 = 1;
L5: // addr: 89 pc: 82 sub: 47276 op: 125
        if (_i_47292 > _24622){
            goto L6; // [82] 105
        }
        // SubProg mark_final_targets pc: 89 op: STARTLINE (58)

        /** symtab.e:612				mark_rechecks( recheck_files[i] )*/
        // SubProg mark_final_targets pc: 91 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_recheck_files_47289);
        _24623 = (object)*(((s1_ptr)_2)->base + _i_47292);
        // SubProg mark_final_targets pc: 95 op: PROC (27)
        Ref(_24623);
        _54mark_rechecks(_24623);
        _24623 = NOVALUE;
        // SubProg mark_final_targets pc: 98 op: STARTLINE (58)

        /** symtab.e:613			end for*/
        // SubProg mark_final_targets pc: 100 op: ENDFOR_INT_UP1 (54)
        _i_47292 = _i_47292 + 1;
        goto L5; // [100] 89
L6: // addr: 105 pc: 100 sub: 47276 op: 54
        ;
    }
    // SubProg mark_final_targets pc: 105 op: NOP1 (159)
L4: // addr: 106 pc: 105 sub: 47276 op: 159
    // SubProg mark_final_targets pc: 106 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var recheck_files_47289
    DeRef(_recheck_files_47289);
    _recheck_files_47289 = NOVALUE;
    // SubProg mark_final_targets pc: 108 op: NOP1 (159)
L3: // addr: 109 pc: 108 sub: 47276 op: 159
    // SubProg mark_final_targets pc: 109 op: STARTLINE (58)

    /** symtab.e:615	end procedure*/
    // SubProg mark_final_targets pc: 111 op: RETURNP (29)

// Exiting block BLOCK: mark_final_targets
    return;
    // SubProg mark_final_targets pc: 114 op: BADRETURNF (43)
    ;
}


object _54is_routine(object _sym_47298)
{
    object _tok_47299 = NOVALUE;
// skipping _24624  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_routine pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_routine pc: 3 op: STARTLINE (58)

    /** symtab.e:618		integer tok = sym_token( sym )*/
    // SubProg is_routine pc: 5 op: PROC (27)
    _tok_47299 = _54sym_token(_sym_47298);
    // SubProg is_routine pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_tok_47299)) {
        _1 = (object)(DBL_PTR(_tok_47299)->dbl);
        DeRefDS(_tok_47299);
        _tok_47299 = _1;
    }
    // SubProg is_routine pc: 11 op: STARTLINE (58)

    /** symtab.e:619		switch tok do*/
    // SubProg is_routine pc: 13 op: SWITCH_I (193)
    _0 = _tok_47299;
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

// block var sym_47298

// block var tok_47299
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

// block var sym_47298

// block var tok_47299
        return 0;
        // SubProg is_routine pc: 44 op: NOPSWITCH (187)
    ;}L1: // addr: 45 pc: 44 sub: 47295 op: 187
    // SubProg is_routine pc: 45 op: BADRETURNF (43)
    ;
}


object _54is_visible(object _sym_47312, object _from_file_47313)
{
    object _scope_47314 = NOVALUE;
    object _sym_file_47317 = NOVALUE;
    object _visible_mask_47322 = NOVALUE;
    object _24635 = NOVALUE; // 47338 24635
    object _24634 = NOVALUE; // 47337 24634
    object _24633 = NOVALUE; // 47336 24633
    object _24632 = NOVALUE; // 47334 24632
// skipping _24629  name type: 0
    object _24628 = NOVALUE; // 47319 24628
// skipping _24627  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg is_visible pc: 1 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 3 op: INTEGER_CHECK (96)
    // SubProg is_visible pc: 5 op: STARTLINE (58)

    /** symtab.e:628		integer scope = sym_scope( sym )*/
    // SubProg is_visible pc: 7 op: PROC (27)
    _scope_47314 = _54sym_scope(_sym_47312);
    // SubProg is_visible pc: 11 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_scope_47314)) {
        _1 = (object)(DBL_PTR(_scope_47314)->dbl);
        DeRefDS(_scope_47314);
        _scope_47314 = _1;
    }
    // SubProg is_visible pc: 13 op: STARTLINE (58)

    /** symtab.e:629		integer sym_file = SymTab[sym][S_FILE_NO]*/
    // SubProg is_visible pc: 15 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 17 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24628 = (object)*(((s1_ptr)_2)->base + _sym_47312);
    // SubProg is_visible pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24628);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _sym_file_47317 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _sym_file_47317 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_sym_file_47317)){
        _sym_file_47317 = (object)DBL_PTR(_sym_file_47317)->dbl;
    }
    _24628 = NOVALUE;
    // SubProg is_visible pc: 29 op: STARTLINE (58)

    /** symtab.e:631		switch scope do*/
    // SubProg is_visible pc: 31 op: SWITCH_I (193)
    _0 = _scope_47314;
    switch ( _0 ){ 
        // SubProg is_visible pc: 36 op: STARTLINE (58)

        /** symtab.e:632			case SC_PUBLIC then*/
        // SubProg is_visible pc: 38 op: CASE (186)
        case 13:
        // SubProg is_visible pc: 40 op: STARTLINE (58)

        /** symtab.e:633				visible_mask = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg is_visible pc: 42 op: GLOBAL_INIT_CHECK (109)
        // SubProg is_visible pc: 44 op: ASSIGN (18)
        _visible_mask_47322 = 6;
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
        _visible_mask_47322 = 2;
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

// block var sym_47312

// block var from_file_47313

// block var scope_47314

// block var sym_file_47317

// block var visible_mask_47322
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
        _24632 = (_from_file_47313 == _sym_file_47317);
        // SubProg is_visible pc: 88 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47312

// block var from_file_47313

// block var scope_47314

// block var sym_file_47317

// block var visible_mask_47322
        return _24632;
        // SubProg is_visible pc: 92 op: NOPSWITCH (187)
    ;}L1: // addr: 93 pc: 92 sub: 47309 op: 187
    // SubProg is_visible pc: 93 op: STARTLINE (58)

    /** symtab.e:641		return and_bits( visible_mask, include_matrix[from_file][sym_file] )*/
    // SubProg is_visible pc: 95 op: PRIVATE_INIT_CHECK (30)
    // SubProg is_visible pc: 97 op: GLOBAL_INIT_CHECK (109)
    // SubProg is_visible pc: 99 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _24633 = (object)*(((s1_ptr)_2)->base + _from_file_47313);
    // SubProg is_visible pc: 103 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24633);
    _24634 = (object)*(((s1_ptr)_2)->base + _sym_file_47317);
    _24633 = NOVALUE;
    // SubProg is_visible pc: 107 op: AND_BITS (56)
    if (IS_ATOM_INT(_24634)) {
        {uintptr_t tu;
             tu = (uintptr_t)_visible_mask_47322 & (uintptr_t)_24634;
             _24635 = MAKE_UINT(tu);
        }
    }
    else {
        _24635 = binary_op(AND_BITS, _visible_mask_47322, _24634);
    }
    _24634 = NOVALUE;
    // SubProg is_visible pc: 111 op: RETURNF (28)

// Exiting block BLOCK: is_visible

// block var sym_47312

// block var from_file_47313

// block var scope_47314

// block var sym_file_47317

// block var visible_mask_47322
    DeRef(_24632);
    _24632 = NOVALUE;
    return _24635;
    // SubProg is_visible pc: 115 op: BADRETURNF (43)
    ;
}


object _54MarkTargets(object _s_47342, object _attribute_47343)
{
    object _p_47345 = NOVALUE;
    object _sname_47346 = NOVALUE;
    object _string_47347 = NOVALUE;
    object _colon_47348 = NOVALUE;
    object _h_47349 = NOVALUE;
    object _scope_47350 = NOVALUE;
    object _found_47371 = NOVALUE;
// skipping _24686  name type: 0
// skipping _24685  name type: 0
// skipping _24684  name type: 0
    object _24683 = NOVALUE; // 47431 24683
// skipping _24682  name type: 0
    object _24681 = NOVALUE; // 47428 24681
    object _24680 = NOVALUE; // 47426 24680
    object _24679 = NOVALUE; // 47422 24679
    object _24678 = NOVALUE; // 47421 24678
// skipping _24677  name type: 0
    object _24676 = NOVALUE; // 47419 24676
    object _24675 = NOVALUE; // 47417 24675
    object _24674 = NOVALUE; // 47415 24674
    object _24673 = NOVALUE; // 47414 24673
    object _24672 = NOVALUE; // 47412 24672
// skipping _24671  name type: 0
    object _24670 = NOVALUE; // 47405 24670
    object _24669 = NOVALUE; // 47404 24669
    object _24668 = NOVALUE; // 47402 24668
// skipping _24667  name type: 0
    object _24666 = NOVALUE; // 47397 24666
// skipping _24665  name type: 0
    object _24664 = NOVALUE; // 47395 24664
// skipping _24663  name type: 0
    object _24662 = NOVALUE; // 47392 24662
    object _24661 = NOVALUE; // 47391 24661
    object _24660 = NOVALUE; // 47390 24660
    object _24659 = NOVALUE; // 47389 24659
// skipping _24658  name type: 0
    object _24657 = NOVALUE; // 47387 24657
    object _24656 = NOVALUE; // 47386 24656
    object _24655 = NOVALUE; // 47385 24655
    object _24654 = NOVALUE; // 47384 24654
// skipping _24653  name type: 0
    object _24652 = NOVALUE; // 47381 24652
    object _24651 = NOVALUE; // 47380 24651
// skipping _24650  name type: 0
// skipping _24649  name type: 0
// skipping _24648  name type: 0
    object _24647 = NOVALUE; // 47373 24647
    object _24646 = NOVALUE; // 47370 24646
    object _24645 = NOVALUE; // 47369 24645
    object _24644 = NOVALUE; // 47367 24644
    object _24643 = NOVALUE; // 47365 24643
    object _24642 = NOVALUE; // 47364 24642
    object _24641 = NOVALUE; // 47362 24641
    object _24640 = NOVALUE; // 47360 24640
    object _24639 = NOVALUE; // 47358 24639
    object _24638 = NOVALUE; // 47357 24638
    object _24637 = NOVALUE; // 47355 24637
    object _24636 = NOVALUE; // 47353 24636
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg MarkTargets pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47342)) {
        _1 = (object)(DBL_PTR(_s_47342)->dbl);
        DeRefDS(_s_47342);
        _s_47342 = _1;
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24636 = (object)*(((s1_ptr)_2)->base + _s_47342);
    // SubProg MarkTargets pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24636);
    _24637 = (object)*(((s1_ptr)_2)->base + 3);
    _24636 = NOVALUE;
    // SubProg MarkTargets pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 29 op: EQUALS (3)
    if (IS_ATOM_INT(_24637)) {
        _24638 = (_24637 == 3);
    }
    else {
        _24638 = binary_op(EQUALS, _24637, 3);
    }
    _24637 = NOVALUE;
    // SubProg MarkTargets pc: 33 op: SC1_OR (143)
    if (IS_ATOM_INT(_24638)) {
        if (_24638 != 0) {
            _24639 = 1;
            goto L1; // [33] 59
        }
    }
    else {
        if (DBL_PTR(_24638)->dbl != 0.0) {
            _24639 = 1;
            goto L1; // [33] 59
        }
    }
    // SubProg MarkTargets pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24640 = (object)*(((s1_ptr)_2)->base + _s_47342);
    // SubProg MarkTargets pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 45 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24640);
    _24641 = (object)*(((s1_ptr)_2)->base + 3);
    _24640 = NOVALUE;
    // SubProg MarkTargets pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 51 op: EQUALS (3)
    if (IS_ATOM_INT(_24641)) {
        _24642 = (_24641 == 2);
    }
    else {
        _24642 = binary_op(EQUALS, _24641, 2);
    }
    _24641 = NOVALUE;
    // SubProg MarkTargets pc: 55 op: SC2_OR (144)
    DeRef(_24639);
    if (IS_ATOM_INT(_24642))
    _24639 = (_24642 != 0);
    else
    _24639 = DBL_PTR(_24642)->dbl != 0.0;
    // SubProg MarkTargets pc: 58 op: NOP1 (159)
L1: // addr: 59 pc: 58 sub: 47339 op: 159
    // SubProg MarkTargets pc: 59 op: SC1_AND_IF (146)
    if (_24639 == 0) {
        goto L2; // [59] 411
    }
    // SubProg MarkTargets pc: 63 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 65 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24644 = (object)*(((s1_ptr)_2)->base + _s_47342);
    // SubProg MarkTargets pc: 69 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 71 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24644);
    _24645 = (object)*(((s1_ptr)_2)->base + 1);
    _24644 = NOVALUE;
    // SubProg MarkTargets pc: 75 op: IS_A_SEQUENCE (68)
    _24646 = IS_SEQUENCE(_24645);
    _24645 = NOVALUE;
    // SubProg MarkTargets pc: 78 op: NOP1 (159)
    // SubProg MarkTargets pc: 79 op: IF (20)
    if (_24646 == 0)
    {
        _24646 = NOVALUE;
        goto L2; // [79] 411
    }
    else{
        _24646 = NOVALUE;
    }
    // SubProg MarkTargets pc: 82 op: STARTLINE (58)

    /** symtab.e:658			integer found = 0*/
    // SubProg MarkTargets pc: 84 op: ASSIGN_I (113)
    _found_47371 = 0;
    // SubProg MarkTargets pc: 87 op: STARTLINE (58)

    /** symtab.e:660			string = SymTab[s][S_OBJ]*/
    // SubProg MarkTargets pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 91 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24647 = (object)*(((s1_ptr)_2)->base + _s_47342);
    // SubProg MarkTargets pc: 95 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 97 op: RHS_SUBS_CHECK (92)
    DeRef(_string_47347);
    _2 = (object)SEQ_PTR(_24647);
    _string_47347 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_string_47347);
    _24647 = NOVALUE;
    // SubProg MarkTargets pc: 101 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 103 op: STARTLINE (58)

    /** symtab.e:661			colon = find(':', string)*/
    // SubProg MarkTargets pc: 105 op: FIND_FROM (176)
    _colon_47348 = find_from(58, _string_47347, 1);
    // SubProg MarkTargets pc: 110 op: STARTLINE (58)

    /** symtab.e:662			if colon = 0 then*/
    // SubProg MarkTargets pc: 112 op: EQUALS_IFW_I (121)
    if (_colon_47348 != 0)
    goto L3; // [112] 126
    // SubProg MarkTargets pc: 116 op: STARTLINE (58)

    /** symtab.e:663				sname = string*/
    // SubProg MarkTargets pc: 118 op: ASSIGN (18)
    RefDS(_string_47347);
    DeRef(_sname_47346);
    _sname_47346 = _string_47347;
    // SubProg MarkTargets pc: 121 op: SEQUENCE_CHECK (97)
    // SubProg MarkTargets pc: 123 op: ELSE (23)
    goto L4; // [123] 200
    // SubProg MarkTargets pc: 125 op: NOP1 (159)
L3: // addr: 126 pc: 125 sub: 47339 op: 159
    // SubProg MarkTargets pc: 126 op: STARTLINE (58)

    /** symtab.e:665				sname = string[colon+1..$]  -- ignore namespace part*/
    // SubProg MarkTargets pc: 128 op: PLUS1 (93)
    _24651 = _colon_47348 + 1;
    if (_24651 > MAXINT){
        _24651 = NewDouble((eudouble)_24651);
    }
    // SubProg MarkTargets pc: 132 op: LENGTH (42)
    if (IS_SEQUENCE(_string_47347)){
            _24652 = SEQ_PTR(_string_47347)->length;
    }
    else {
        _24652 = 1;
    }
    // SubProg MarkTargets pc: 135 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_sname_47346;
    RHS_Slice(_string_47347, _24651, _24652);
    // SubProg MarkTargets pc: 140 op: STARTLINE (58)

    /** symtab.e:666				while length(sname) and sname[1] = ' ' or sname[1] = '\t' do*/
    // SubProg MarkTargets pc: 142 op: NOP2 (110)
    // SubProg MarkTargets pc: 144 op: NOPWHILE (158)
L5: // addr: 145 pc: 144 sub: 47339 op: 158
    // SubProg MarkTargets pc: 145 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47346)){
            _24654 = SEQ_PTR(_sname_47346)->length;
    }
    else {
        _24654 = 1;
    }
    // SubProg MarkTargets pc: 148 op: SC1_AND (141)
    if (_24654 == 0) {
        _24655 = 0;
        goto L6; // [148] 164
    }
    // SubProg MarkTargets pc: 152 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47346);
    _24656 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 156 op: EQUALS (3)
    if (IS_ATOM_INT(_24656)) {
        _24657 = (_24656 == 32);
    }
    else {
        _24657 = binary_op(EQUALS, _24656, 32);
    }
    _24656 = NOVALUE;
    // SubProg MarkTargets pc: 160 op: SC2_AND (142)
    if (IS_ATOM_INT(_24657))
    _24655 = (_24657 != 0);
    else
    _24655 = DBL_PTR(_24657)->dbl != 0.0;
    // SubProg MarkTargets pc: 163 op: NOP1 (159)
L6: // addr: 164 pc: 163 sub: 47339 op: 159
    // SubProg MarkTargets pc: 164 op: SC1_OR_IF (147)
    if (_24655 != 0) {
        goto L7; // [164] 181
    }
    // SubProg MarkTargets pc: 168 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_sname_47346);
    _24659 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg MarkTargets pc: 172 op: EQUALS (3)
    if (IS_ATOM_INT(_24659)) {
        _24660 = (_24659 == 9);
    }
    else {
        _24660 = binary_op(EQUALS, _24659, 9);
    }
    _24659 = NOVALUE;
    // SubProg MarkTargets pc: 176 op: NOP1 (159)
    // SubProg MarkTargets pc: 177 op: WHILE (47)
    if (_24660 <= 0) {
        if (_24660 == 0) {
            DeRef(_24660);
            _24660 = NOVALUE;
            goto L8; // [177] 199
        }
        else {
            if (!IS_ATOM_INT(_24660) && DBL_PTR(_24660)->dbl == 0.0){
                DeRef(_24660);
                _24660 = NOVALUE;
                goto L8; // [177] 199
            }
            DeRef(_24660);
            _24660 = NOVALUE;
        }
    }
    DeRef(_24660);
    _24660 = NOVALUE;
    // SubProg MarkTargets pc: 180 op: NOP1 (159)
L7: // addr: 181 pc: 180 sub: 47339 op: 159
    // SubProg MarkTargets pc: 181 op: STARTLINE (58)

    /** symtab.e:667					sname = tail( sname, length( sname ) -1 )*/
    // SubProg MarkTargets pc: 183 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47346)){
            _24661 = SEQ_PTR(_sname_47346)->length;
    }
    else {
        _24661 = 1;
    }
    // SubProg MarkTargets pc: 186 op: MINUS (10)
    _24662 = _24661 - 1;
    _24661 = NOVALUE;
    // SubProg MarkTargets pc: 190 op: TAIL (199)
    {
        int len = SEQ_PTR(_sname_47346)->length;
        int size = (IS_ATOM_INT(_24662)) ? _24662 : (object)(DBL_PTR(_24662)->dbl);
        if (size <= 0) {
            DeRef(_sname_47346);
            _sname_47346 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_sname_47346);
            DeRef(_sname_47346);
            _sname_47346 = _sname_47346;
        }
        else Tail(SEQ_PTR(_sname_47346), len-size+1, &_sname_47346);
    }
    _24662 = NOVALUE;
    // SubProg MarkTargets pc: 194 op: STARTLINE (58)

    /** symtab.e:668				end while*/
    // SubProg MarkTargets pc: 196 op: ENDWHILE (22)
    goto L5; // [196] 145
    // SubProg MarkTargets pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 47339 op: 159
    // SubProg MarkTargets pc: 199 op: NOP1 (159)
L4: // addr: 200 pc: 199 sub: 47339 op: 159
    // SubProg MarkTargets pc: 200 op: STARTLINE (58)

    /** symtab.e:671			if length(sname) = 0 then*/
    // SubProg MarkTargets pc: 202 op: PRIVATE_INIT_CHECK (30)
    // SubProg MarkTargets pc: 204 op: LENGTH (42)
    if (IS_SEQUENCE(_sname_47346)){
            _24664 = SEQ_PTR(_sname_47346)->length;
    }
    else {
        _24664 = 1;
    }
    // SubProg MarkTargets pc: 207 op: EQUALS_IFW_I (121)
    if (_24664 != 0)
    goto L9; // [207] 218
    // SubProg MarkTargets pc: 211 op: STARTLINE (58)

    /** symtab.e:672				return 1*/
    // SubProg MarkTargets pc: 213 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var found_47371

// Exiting block BLOCK: MarkTargets

// block var s_47342

// block var attribute_47343

// block var sname_47346
    DeRefDS(_sname_47346);

// block var string_47347
    DeRef(_string_47347);

// block var colon_47348

// block var h_47349
    DeRef(_24651);
    _24651 = NOVALUE;
    DeRef(_24642);
    _24642 = NOVALUE;
    DeRef(_24638);
    _24638 = NOVALUE;
    DeRef(_24657);
    _24657 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 217 op: NOP1 (159)
L9: // addr: 218 pc: 217 sub: 47339 op: 159
    // SubProg MarkTargets pc: 218 op: STARTLINE (58)

    /** symtab.e:674			h = buckets[hashfn(sname)]*/
    // SubProg MarkTargets pc: 220 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 222 op: PROC (27)
    RefDS(_sname_47346);
    _24666 = _54hashfn(_sname_47346);
    // SubProg MarkTargets pc: 226 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    if (!IS_ATOM_INT(_24666)){
        _h_47349 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24666)->dbl));
    }
    else{
        _h_47349 = (object)*(((s1_ptr)_2)->base + _24666);
    }
    if (!IS_ATOM_INT(_h_47349))
    _h_47349 = (object)DBL_PTR(_h_47349)->dbl;
    // SubProg MarkTargets pc: 230 op: STARTLINE (58)

    /** symtab.e:675			while h do*/
    // SubProg MarkTargets pc: 232 op: NOP2 (110)
    // SubProg MarkTargets pc: 234 op: NOPWHILE (158)
LA: // addr: 235 pc: 234 sub: 47339 op: 158
    // SubProg MarkTargets pc: 235 op: WHILE (47)
    if (_h_47349 == 0)
    {
        goto LB; // [235] 381
    }
    else{
    }
    // SubProg MarkTargets pc: 238 op: STARTLINE (58)

    /** symtab.e:676				if equal(sname, SymTab[h][S_NAME]) then*/
    // SubProg MarkTargets pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 242 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24668 = (object)*(((s1_ptr)_2)->base + _h_47349);
    // SubProg MarkTargets pc: 246 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 248 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24668);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24669 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24669 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24668 = NOVALUE;
    // SubProg MarkTargets pc: 252 op: EQUAL (153)
    if (_sname_47346 == _24669)
    _24670 = 1;
    else if (IS_ATOM_INT(_sname_47346) && IS_ATOM_INT(_24669))
    _24670 = 0;
    else
    _24670 = (compare(_sname_47346, _24669) == 0);
    _24669 = NOVALUE;
    // SubProg MarkTargets pc: 256 op: IF (20)
    if (_24670 == 0)
    {
        _24670 = NOVALUE;
        goto LC; // [256] 360
    }
    else{
        _24670 = NOVALUE;
    }
    // SubProg MarkTargets pc: 259 op: STARTLINE (58)

    /** symtab.e:677					if attribute = S_NREFS then*/
    // SubProg MarkTargets pc: 261 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 263 op: EQUALS_IFW (104)
    if (_attribute_47343 != 12)
    goto LD; // [263] 289
    // SubProg MarkTargets pc: 267 op: STARTLINE (58)

    /** symtab.e:678						if BIND then*/
    // SubProg MarkTargets pc: 269 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 271 op: IF (20)
    if (_36BIND_16064 == 0)
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
    ((intptr_t *)_2)[2] = _h_47349;
    _24672 = MAKE_SEQ(_1);
    // SubProg MarkTargets pc: 282 op: PROC (27)
    _54add_ref(_24672);
    _24672 = NOVALUE;
    // SubProg MarkTargets pc: 285 op: NOP1 (159)
    // SubProg MarkTargets pc: 286 op: ELSE (23)
    goto LE; // [286] 359
    // SubProg MarkTargets pc: 288 op: NOP1 (159)
LD: // addr: 289 pc: 288 sub: 47339 op: 159
    // SubProg MarkTargets pc: 289 op: STARTLINE (58)

    /** symtab.e:681					elsif is_routine( h ) and is_visible( h, current_file_no ) then*/
    // SubProg MarkTargets pc: 291 op: PROC (27)
    _24673 = _54is_routine(_h_47349);
    // SubProg MarkTargets pc: 295 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24673)) {
        if (_24673 == 0) {
            goto LF; // [295] 358
        }
    }
    else {
        if (DBL_PTR(_24673)->dbl == 0.0) {
            goto LF; // [295] 358
        }
    }
    // SubProg MarkTargets pc: 299 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 301 op: PROC (27)
    _24675 = _54is_visible(_h_47349, _36current_file_no_16436);
    // SubProg MarkTargets pc: 306 op: NOP1 (159)
    // SubProg MarkTargets pc: 307 op: IF (20)
    if (_24675 == 0) {
        DeRef(_24675);
        _24675 = NOVALUE;
        goto LF; // [307] 358
    }
    else {
        if (!IS_ATOM_INT(_24675) && DBL_PTR(_24675)->dbl == 0.0){
            DeRef(_24675);
            _24675 = NOVALUE;
            goto LF; // [307] 358
        }
        DeRef(_24675);
        _24675 = NOVALUE;
    }
    DeRef(_24675);
    _24675 = NOVALUE;
    // SubProg MarkTargets pc: 310 op: STARTLINE (58)

    /** symtab.e:682						SymTab[h][attribute] += 1*/
    // SubProg MarkTargets pc: 312 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 314 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_h_47349 + ((s1_ptr)_2)->base);
    // SubProg MarkTargets pc: 319 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24678 = (object)*(((s1_ptr)_2)->base + _attribute_47343);
    _24676 = NOVALUE;
    // SubProg MarkTargets pc: 323 op: PLUS1 (93)
    if (IS_ATOM_INT(_24678)) {
        _24679 = _24678 + 1;
        if (_24679 > MAXINT){
            _24679 = NewDouble((eudouble)_24679);
        }
    }
    else
    _24679 = binary_op(PLUS, 1, _24678);
    _24678 = NOVALUE;
    // SubProg MarkTargets pc: 327 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47343);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24679;
    if( _1 != _24679 ){
        DeRef(_1);
    }
    _24679 = NOVALUE;
    _24676 = NOVALUE;
    // SubProg MarkTargets pc: 331 op: STARTLINE (58)

    /** symtab.e:683						if current_file_no = SymTab[h][S_FILE_NO] then*/
    // SubProg MarkTargets pc: 333 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 335 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 337 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24680 = (object)*(((s1_ptr)_2)->base + _h_47349);
    // SubProg MarkTargets pc: 341 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 343 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24680);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24681 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24681 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24680 = NOVALUE;
    // SubProg MarkTargets pc: 347 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _36current_file_no_16436, _24681)){
        _24681 = NOVALUE;
        goto L10; // [347] 357
    }
    _24681 = NOVALUE;
    // SubProg MarkTargets pc: 351 op: STARTLINE (58)

    /** symtab.e:684							found = 1*/
    // SubProg MarkTargets pc: 353 op: ASSIGN_I (113)
    _found_47371 = 1;
    // SubProg MarkTargets pc: 356 op: NOP1 (159)
L10: // addr: 357 pc: 356 sub: 47339 op: 159
    // SubProg MarkTargets pc: 357 op: NOP1 (159)
LF: // addr: 358 pc: 357 sub: 47339 op: 159
    // SubProg MarkTargets pc: 358 op: NOP1 (159)
LE: // addr: 359 pc: 358 sub: 47339 op: 159
    // SubProg MarkTargets pc: 359 op: NOP1 (159)
LC: // addr: 360 pc: 359 sub: 47339 op: 159
    // SubProg MarkTargets pc: 360 op: STARTLINE (58)

    /** symtab.e:688				h = SymTab[h][S_SAMEHASH]*/
    // SubProg MarkTargets pc: 362 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 364 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24683 = (object)*(((s1_ptr)_2)->base + _h_47349);
    // SubProg MarkTargets pc: 368 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 370 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24683);
    _h_47349 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_h_47349)){
        _h_47349 = (object)DBL_PTR(_h_47349)->dbl;
    }
    _24683 = NOVALUE;
    // SubProg MarkTargets pc: 376 op: STARTLINE (58)

    /** symtab.e:689			end while*/
    // SubProg MarkTargets pc: 378 op: ENDWHILE (22)
    goto LA; // [378] 235
    // SubProg MarkTargets pc: 380 op: NOP1 (159)
LB: // addr: 381 pc: 380 sub: 47339 op: 159
    // SubProg MarkTargets pc: 381 op: STARTLINE (58)

    /** symtab.e:691			if not found then*/
    // SubProg MarkTargets pc: 383 op: NOT_IFW (108)
    if (_found_47371 != 0)
    goto L11; // [383] 400
    // SubProg MarkTargets pc: 386 op: STARTLINE (58)

    /** symtab.e:692				map:put( recheck_routines, current_file_no, s, map:APPEND )*/
    // SubProg MarkTargets pc: 388 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 390 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 392 op: PROC (27)
    Ref(_54recheck_routines_47243);
    _29put(_54recheck_routines_47243, _36current_file_no_16436, _s_47342, 6, 0);
    // SubProg MarkTargets pc: 399 op: NOP1 (159)
L11: // addr: 400 pc: 399 sub: 47339 op: 159
    // SubProg MarkTargets pc: 400 op: STARTLINE (58)

    /** symtab.e:694			return found*/
    // SubProg MarkTargets pc: 402 op: RETURNF (28)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: MarkTargets

// block var s_47342

// block var attribute_47343

// block var sname_47346
    DeRef(_sname_47346);

// block var string_47347
    DeRef(_string_47347);

// block var colon_47348

// block var h_47349
    DeRef(_24651);
    _24651 = NOVALUE;
    DeRef(_24642);
    _24642 = NOVALUE;
    DeRef(_24666);
    _24666 = NOVALUE;
    DeRef(_24638);
    _24638 = NOVALUE;
    DeRef(_24657);
    _24657 = NOVALUE;
    DeRef(_24673);
    _24673 = NOVALUE;
    return _found_47371;
    // SubProg MarkTargets pc: 406 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var found_47371
    // SubProg MarkTargets pc: 408 op: ELSE (23)
    goto L12; // [408] 440
    // SubProg MarkTargets pc: 410 op: NOP1 (159)
L2: // addr: 411 pc: 410 sub: 47339 op: 159
    // SubProg MarkTargets pc: 411 op: STARTLINE (58)

    /** symtab.e:696			if not just_mark_everything_from then*/
    // SubProg MarkTargets pc: 413 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 415 op: NOT_IFW (108)
    if (_54just_mark_everything_from_47170 != 0)
    goto L13; // [415] 428
    // SubProg MarkTargets pc: 418 op: STARTLINE (58)

    /** symtab.e:697				just_mark_everything_from = TopLevelSub*/
    // SubProg MarkTargets pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg MarkTargets pc: 422 op: ASSIGN (18)
    _54just_mark_everything_from_47170 = _36TopLevelSub_16443;
    // SubProg MarkTargets pc: 425 op: INTEGER_CHECK (96)
    // SubProg MarkTargets pc: 427 op: NOP1 (159)
L13: // addr: 428 pc: 427 sub: 47339 op: 159
    // SubProg MarkTargets pc: 428 op: STARTLINE (58)

    /** symtab.e:699			mark_all( attribute )*/
    // SubProg MarkTargets pc: 430 op: PROC (27)
    _54mark_all(_attribute_47343);
    // SubProg MarkTargets pc: 433 op: STARTLINE (58)

    /** symtab.e:700			return 1*/
    // SubProg MarkTargets pc: 435 op: RETURNF (28)

// Exiting block BLOCK: MarkTargets

// block var s_47342

// block var attribute_47343

// block var sname_47346
    DeRef(_sname_47346);

// block var string_47347
    DeRef(_string_47347);

// block var colon_47348

// block var h_47349
    DeRef(_24651);
    _24651 = NOVALUE;
    DeRef(_24642);
    _24642 = NOVALUE;
    DeRef(_24666);
    _24666 = NOVALUE;
    DeRef(_24638);
    _24638 = NOVALUE;
    DeRef(_24657);
    _24657 = NOVALUE;
    DeRef(_24673);
    _24673 = NOVALUE;
    return 1;
    // SubProg MarkTargets pc: 439 op: NOP1 (159)
L12: // addr: 440 pc: 439 sub: 47339 op: 159
    // SubProg MarkTargets pc: 440 op: BADRETURNF (43)
    ;
}


void _54resolve_unincluded_globals(object _ok_47449)
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg resolve_unincluded_globals pc: 1 op: INTEGER_CHECK (96)
    // SubProg resolve_unincluded_globals pc: 3 op: STARTLINE (58)

    /** symtab.e:724		Resolve_unincluded_globals = ok*/
    // SubProg resolve_unincluded_globals pc: 5 op: ASSIGN_I (113)
    _54Resolve_unincluded_globals_47446 = 1;
    // SubProg resolve_unincluded_globals pc: 8 op: STARTLINE (58)

    /** symtab.e:725	end procedure*/
    // SubProg resolve_unincluded_globals pc: 10 op: RETURNP (29)

// Exiting block BLOCK: resolve_unincluded_globals

// block var ok_47449
    return;
    // SubProg resolve_unincluded_globals pc: 13 op: BADRETURNF (43)
    ;
}


object _54get_resolve_unincluded_globals()
{
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get_resolve_unincluded_globals pc: 1 op: STARTLINE (58)

    /** symtab.e:728		return Resolve_unincluded_globals*/
    // SubProg get_resolve_unincluded_globals pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg get_resolve_unincluded_globals pc: 5 op: RETURNF (28)

// Exiting block BLOCK: get_resolve_unincluded_globals
    return _54Resolve_unincluded_globals_47446;
    // SubProg get_resolve_unincluded_globals pc: 9 op: BADRETURNF (43)
    ;
}


object _54keyfind(object _word_47455, object _file_no_47456, object _scanning_file_47457, object _namespace_ok_47460, object _hashval_47461)
{
    object _msg_47463 = NOVALUE;
    object _b_name_47464 = NOVALUE;
    object _scope_47465 = NOVALUE;
    object _defined_47466 = NOVALUE;
    object _ix_47467 = NOVALUE;
    object _st_ptr_47469 = NOVALUE;
    object _st_builtin_47470 = NOVALUE;
    object _tok_47472 = NOVALUE;
    object _gtok_47473 = NOVALUE;
    object _any_symbol_47476 = NOVALUE;
    object _tok_file_47644 = NOVALUE;
    object _good_47651 = NOVALUE;
    object _include_type_47661 = NOVALUE;
    object _msg_file_47717 = NOVALUE;
// skipping _24879  name type: 0
    object _24878 = NOVALUE; // 47859 24878
    object _24877 = NOVALUE; // 47858 24877
// skipping _24876  name type: 0
    object _24875 = NOVALUE; // 47853 24875
// skipping _24874  name type: 0
    object _24873 = NOVALUE; // 47850 24873
    object _24872 = NOVALUE; // 47849 24872
    object _24871 = NOVALUE; // 47846 24871
    object _24870 = NOVALUE; // 47842 24870
    object _24869 = NOVALUE; // 47839 24869
// skipping _24868  name type: 0
    object _24867 = NOVALUE; // 47821 24867
// skipping _24866  name type: 0
    object _24865 = NOVALUE; // 47818 24865
    object _24864 = NOVALUE; // 47817 24864
    object _24863 = NOVALUE; // 47816 24863
    object _24862 = NOVALUE; // 47815 24862
    object _24861 = NOVALUE; // 47813 24861
    object _24860 = NOVALUE; // 47812 24860
    object _24859 = NOVALUE; // 47807 24859
    object _24858 = NOVALUE; // 47806 24858
// skipping _24857  name type: 0
    object _24856 = NOVALUE; // 47801 24856
    object _24855 = NOVALUE; // 47800 24855
    object _24854 = NOVALUE; // 47798 24854
    object _24853 = NOVALUE; // 47797 24853
    object _24852 = NOVALUE; // 47794 24852
    object _24851 = NOVALUE; // 47793 24851
    object _24850 = NOVALUE; // 47792 24850
    object _24849 = NOVALUE; // 47791 24849
    object _24848 = NOVALUE; // 47789 24848
    object _24847 = NOVALUE; // 47788 24847
    object _24846 = NOVALUE; // 47785 24846
    object _24845 = NOVALUE; // 47784 24845
    object _24844 = NOVALUE; // 47783 24844
    object _24843 = NOVALUE; // 47779 24843
    object _24842 = NOVALUE; // 47778 24842
    object _24841 = NOVALUE; // 47777 24841
    object _24840 = NOVALUE; // 47776 24840
// skipping _24839  name type: 0
    object _24838 = NOVALUE; // 47773 24838
    object _24837 = NOVALUE; // 47771 24837
// skipping _24836  name type: 0
// skipping _24835  name type: 0
    object _24834 = NOVALUE; // 47767 24834
// skipping _24833  name type: 0
// skipping _24832  name type: 0
// skipping _24831  name type: 0
    object _24830 = NOVALUE; // 47761 24830
// skipping _24829  name type: 0
    object _24828 = NOVALUE; // 47758 24828
    object _24827 = NOVALUE; // 47756 24827
    object _24826 = NOVALUE; // 47755 24826
    object _24825 = NOVALUE; // 47754 24825
    object _24824 = NOVALUE; // 47753 24824
// skipping _24823  name type: 0
    object _24822 = NOVALUE; // 47748 24822
    object _24821 = NOVALUE; // 47746 24821
    object _24820 = NOVALUE; // 47744 24820
    object _24819 = NOVALUE; // 47743 24819
// skipping _24818  name type: 0
    object _24817 = NOVALUE; // 47738 24817
// skipping _24815  name type: 0
    object _24814 = NOVALUE; // 47735 24814
    object _24813 = NOVALUE; // 47733 24813
    object _24812 = NOVALUE; // 47732 24812
    object _24811 = NOVALUE; // 47729 24811
// skipping _24810  name type: 0
    object _24809 = NOVALUE; // 47724 24809
// skipping _24808  name type: 0
// skipping _24807  name type: 0
    object _24806 = NOVALUE; // 47719 24806
    object _24805 = NOVALUE; // 47716 24805
    object _24804 = NOVALUE; // 47715 24804
    object _24803 = NOVALUE; // 47714 24803
    object _24802 = NOVALUE; // 47712 24802
    object _24801 = NOVALUE; // 47710 24801
    object _24800 = NOVALUE; // 47709 24800
// skipping _24799  name type: 0
// skipping _24798  name type: 0
    object _24797 = NOVALUE; // 47702 24797
    object _24796 = NOVALUE; // 47700 24796
// skipping _24795  name type: 0
    object _24794 = NOVALUE; // 47697 24794
// skipping _24793  name type: 0
    object _24792 = NOVALUE; // 47693 24792
// skipping _24791  name type: 0
    object _24790 = NOVALUE; // 47690 24790
    object _24789 = NOVALUE; // 47689 24789
    object _24788 = NOVALUE; // 47688 24788
// skipping _24787  name type: 0
// skipping _24786  name type: 0
// skipping _24785  name type: 0
    object _24784 = NOVALUE; // 47679 24784
    object _24783 = NOVALUE; // 47678 24783
// skipping _24782  name type: 0
// skipping _24779  name type: 0
    object _24778 = NOVALUE; // 47657 24778
// skipping _24777  name type: 0
    object _24776 = NOVALUE; // 47654 24776
// skipping _24775  name type: 0
    object _24774 = NOVALUE; // 47648 24774
    object _24773 = NOVALUE; // 47647 24773
// skipping _24772  name type: 0
// skipping _24771  name type: 0
// skipping _24770  name type: 0
    object _24769 = NOVALUE; // 47633 24769
    object _24768 = NOVALUE; // 47632 24768
// skipping _24767  name type: 0
    object _24766 = NOVALUE; // 47622 24766
    object _24765 = NOVALUE; // 47620 24765
// skipping _24764  name type: 0
    object _24763 = NOVALUE; // 47614 24763
    object _24762 = NOVALUE; // 47613 24762
    object _24761 = NOVALUE; // 47612 24761
    object _24760 = NOVALUE; // 47610 24760
    object _24759 = NOVALUE; // 47608 24759
// skipping _24758  name type: 0
    object _24757 = NOVALUE; // 47605 24757
    object _24756 = NOVALUE; // 47604 24756
    object _24755 = NOVALUE; // 47603 24755
    object _24754 = NOVALUE; // 47601 24754
    object _24753 = NOVALUE; // 47599 24753
    object _24752 = NOVALUE; // 47596 24752
    object _24751 = NOVALUE; // 47595 24751
    object _24750 = NOVALUE; // 47593 24750
    object _24749 = NOVALUE; // 47592 24749
    object _24748 = NOVALUE; // 47591 24748
    object _24747 = NOVALUE; // 47590 24747
    object _24746 = NOVALUE; // 47588 24746
    object _24745 = NOVALUE; // 47586 24745
    object _24744 = NOVALUE; // 47583 24744
    object _24743 = NOVALUE; // 47582 24743
    object _24742 = NOVALUE; // 47580 24742
    object _24741 = NOVALUE; // 47579 24741
    object _24740 = NOVALUE; // 47577 24740
    object _24739 = NOVALUE; // 47575 24739
    object _24738 = NOVALUE; // 47573 24738
    object _24737 = NOVALUE; // 47572 24737
    object _24736 = NOVALUE; // 47571 24736
// skipping _24735  name type: 0
    object _24734 = NOVALUE; // 47565 24734
    object _24733 = NOVALUE; // 47563 24733
// skipping _24732  name type: 0
    object _24731 = NOVALUE; // 47556 24731
    object _24730 = NOVALUE; // 47555 24730
    object _24729 = NOVALUE; // 47554 24729
    object _24728 = NOVALUE; // 47552 24728
    object _24727 = NOVALUE; // 47550 24727
// skipping _24726  name type: 0
    object _24725 = NOVALUE; // 47547 24725
    object _24724 = NOVALUE; // 47545 24724
    object _24723 = NOVALUE; // 47543 24723
// skipping _24722  name type: 0
    object _24721 = NOVALUE; // 47540 24721
    object _24720 = NOVALUE; // 47539 24720
    object _24719 = NOVALUE; // 47537 24719
    object _24718 = NOVALUE; // 47535 24718
    object _24717 = NOVALUE; // 47533 24717
    object _24716 = NOVALUE; // 47532 24716
    object _24715 = NOVALUE; // 47530 24715
// skipping _24714  name type: 0
    object _24713 = NOVALUE; // 47525 24713
    object _24712 = NOVALUE; // 47523 24712
// skipping _24711  name type: 0
// skipping _24708  name type: 0
    object _24707 = NOVALUE; // 47509 24707
// skipping _24706  name type: 0
// skipping _24705  name type: 0
    object _24704 = NOVALUE; // 47504 24704
    object _24703 = NOVALUE; // 47502 24703
    object _24702 = NOVALUE; // 47500 24702
    object _24701 = NOVALUE; // 47499 24701
    object _24700 = NOVALUE; // 47497 24700
    object _24699 = NOVALUE; // 47495 24699
    object _24698 = NOVALUE; // 47493 24698
    object _24697 = NOVALUE; // 47492 24697
    object _24696 = NOVALUE; // 47491 24696
    object _24695 = NOVALUE; // 47490 24695
    object _24694 = NOVALUE; // 47488 24694
    object _24693 = NOVALUE; // 47486 24693
    object _24692 = NOVALUE; // 47485 24692
    object _24691 = NOVALUE; // 47483 24691
    object _24690 = NOVALUE; // 47481 24690
// skipping _24689  name type: 0
// skipping _24688  name type: 0
// skipping _24687  name type: 0
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg keyfind pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 3 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_file_no_47456)) {
        _1 = (object)(DBL_PTR(_file_no_47456)->dbl);
        DeRefDS(_file_no_47456);
        _file_no_47456 = _1;
    }
    // SubProg keyfind pc: 5 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 7 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 9 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_hashval_47461)) {
        _1 = (object)(DBL_PTR(_hashval_47461)->dbl);
        DeRefDS(_hashval_47461);
        _hashval_47461 = _1;
    }
    // SubProg keyfind pc: 11 op: STARTLINE (58)

    /** symtab.e:750		dup_globals = {}*/
    // SubProg keyfind pc: 13 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_54dup_globals_47441);
    _54dup_globals_47441 = _21933;
    // SubProg keyfind pc: 16 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 18 op: STARTLINE (58)

    /** symtab.e:751		dup_overrides = {}*/
    // SubProg keyfind pc: 20 op: ASSIGN (18)
    RefDS(_21933);
    DeRefi(_54dup_overrides_47442);
    _54dup_overrides_47442 = _21933;
    // SubProg keyfind pc: 23 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 25 op: STARTLINE (58)

    /** symtab.e:752		in_include_path = {}*/
    // SubProg keyfind pc: 27 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_54in_include_path_47443);
    _54in_include_path_47443 = _21933;
    // SubProg keyfind pc: 30 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 32 op: STARTLINE (58)

    /** symtab.e:753		symbol_resolution_warning = ""*/
    // SubProg keyfind pc: 34 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_36symbol_resolution_warning_16537);
    _36symbol_resolution_warning_16537 = _21933;
    // SubProg keyfind pc: 37 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 39 op: STARTLINE (58)

    /** symtab.e:754		st_builtin = 0*/
    // SubProg keyfind pc: 41 op: ASSIGN (18)
    _st_builtin_47470 = 0;
    // SubProg keyfind pc: 44 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 46 op: STARTLINE (58)

    /** symtab.e:756		ifdef EUDIS then*/
    // SubProg keyfind pc: 48 op: STARTLINE (58)

    /** symtab.e:759		st_ptr = buckets[hashval]*/
    // SubProg keyfind pc: 50 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 52 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _st_ptr_47469 = (object)*(((s1_ptr)_2)->base + _hashval_47461);
    if (!IS_ATOM_INT(_st_ptr_47469)){
        _st_ptr_47469 = (object)DBL_PTR(_st_ptr_47469)->dbl;
    }
    // SubProg keyfind pc: 58 op: STARTLINE (58)

    /** symtab.e:760		integer any_symbol = namespace_ok = -1*/
    // SubProg keyfind pc: 60 op: EQUALS (3)
    _any_symbol_47476 = (_namespace_ok_47460 == -1);
    // SubProg keyfind pc: 64 op: STARTLINE (58)

    /** symtab.e:761		while st_ptr do*/
    // SubProg keyfind pc: 66 op: NOP2 (110)
    // SubProg keyfind pc: 68 op: NOPWHILE (158)
L1: // addr: 69 pc: 68 sub: 47453 op: 158
    // SubProg keyfind pc: 69 op: WHILE (47)
    if (_st_ptr_47469 == 0)
    {
        goto L2; // [69] 1033
    }
    else{
    }
    // SubProg keyfind pc: 72 op: STARTLINE (58)

    /** symtab.e:762			if SymTab[st_ptr][S_SCOPE] != SC_UNDEFINED */
    // SubProg keyfind pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 76 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24690 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 80 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 82 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24690);
    _24691 = (object)*(((s1_ptr)_2)->base + 4);
    _24690 = NOVALUE;
    // SubProg keyfind pc: 86 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 88 op: NOTEQ (4)
    if (IS_ATOM_INT(_24691)) {
        _24692 = (_24691 != 9);
    }
    else {
        _24692 = binary_op(NOTEQ, _24691, 9);
    }
    _24691 = NOVALUE;
    // SubProg keyfind pc: 92 op: SC1_AND (141)
    if (IS_ATOM_INT(_24692)) {
        if (_24692 == 0) {
            DeRef(_24693);
            _24693 = 0;
            goto L3; // [92] 116
        }
    }
    else {
        if (DBL_PTR(_24692)->dbl == 0.0) {
            DeRef(_24693);
            _24693 = 0;
            goto L3; // [92] 116
        }
    }
    // SubProg keyfind pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 98 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24694 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24694);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24695 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24695 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24694 = NOVALUE;
    // SubProg keyfind pc: 108 op: EQUAL (153)
    if (_word_47455 == _24695)
    _24696 = 1;
    else if (IS_ATOM_INT(_word_47455) && IS_ATOM_INT(_24695))
    _24696 = 0;
    else
    _24696 = (compare(_word_47455, _24695) == 0);
    _24695 = NOVALUE;
    // SubProg keyfind pc: 112 op: SC2_AND (142)
    DeRef(_24693);
    _24693 = (_24696 != 0);
    // SubProg keyfind pc: 115 op: NOP1 (159)
L3: // addr: 116 pc: 115 sub: 47453 op: 159
    // SubProg keyfind pc: 116 op: SC1_AND_IF (146)
    if (_24693 == 0) {
        goto L4; // [116] 1012
    }
    // SubProg keyfind pc: 120 op: SC1_OR (143)
    if (_any_symbol_47476 != 0) {
        DeRef(_24698);
        _24698 = 1;
        goto L5; // [120] 150
    }
    // SubProg keyfind pc: 124 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 126 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24699 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 130 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 132 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24699);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24700 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24700 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24699 = NOVALUE;
    // SubProg keyfind pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 138 op: EQUALS (3)
    if (IS_ATOM_INT(_24700)) {
        _24701 = (_24700 == 523);
    }
    else {
        _24701 = binary_op(EQUALS, _24700, 523);
    }
    _24700 = NOVALUE;
    // SubProg keyfind pc: 142 op: EQUALS (3)
    if (IS_ATOM_INT(_24701)) {
        _24702 = (_namespace_ok_47460 == _24701);
    }
    else {
        _24702 = binary_op(EQUALS, _namespace_ok_47460, _24701);
    }
    DeRef(_24701);
    _24701 = NOVALUE;
    // SubProg keyfind pc: 146 op: SC2_OR (144)
    if (IS_ATOM_INT(_24702))
    _24698 = (_24702 != 0);
    else
    _24698 = DBL_PTR(_24702)->dbl != 0.0;
    // SubProg keyfind pc: 149 op: NOP1 (159)
L5: // addr: 150 pc: 149 sub: 47453 op: 159
    // SubProg keyfind pc: 150 op: NOP1 (159)
    // SubProg keyfind pc: 151 op: IF (20)
    if (_24698 == 0)
    {
        _24698 = NOVALUE;
        goto L4; // [151] 1012
    }
    else{
        _24698 = NOVALUE;
    }
    // SubProg keyfind pc: 154 op: STARTLINE (58)

    /** symtab.e:767				tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 156 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 158 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24703 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 162 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 164 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24703);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24704 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24704 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24703 = NOVALUE;
    // SubProg keyfind pc: 168 op: RIGHT_BRACE_2 (85)
    Ref(_24704);
    DeRef(_tok_47472);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24704;
    ((intptr_t *)_2)[2] = _st_ptr_47469;
    _tok_47472 = MAKE_SEQ(_1);
    _24704 = NOVALUE;
    // SubProg keyfind pc: 172 op: STARTLINE (58)

    /** symtab.e:769				if file_no = -1 then*/
    // SubProg keyfind pc: 174 op: EQUALS_IFW_I (121)
    if (_file_no_47456 != -1)
    goto L6; // [174] 714
    // SubProg keyfind pc: 178 op: STARTLINE (58)

    /** symtab.e:774					scope = SymTab[st_ptr][S_SCOPE]*/
    // SubProg keyfind pc: 180 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 182 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24707 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 186 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 188 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24707);
    _scope_47465 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47465)){
        _scope_47465 = (object)DBL_PTR(_scope_47465)->dbl;
    }
    _24707 = NOVALUE;
    // SubProg keyfind pc: 194 op: STARTLINE (58)

    /** symtab.e:776					switch scope with fallthru do*/
    // SubProg keyfind pc: 196 op: SWITCH_I (193)
    _0 = _scope_47465;
    switch ( _0 ){ 
        // SubProg keyfind pc: 201 op: STARTLINE (58)

        /** symtab.e:777					case SC_OVERRIDE then*/
        // SubProg keyfind pc: 203 op: CASE (186)
        case 12:
        // SubProg keyfind pc: 205 op: STARTLINE (58)

        /** symtab.e:778						dup_overrides &= st_ptr*/
        // SubProg keyfind pc: 207 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 209 op: CONCAT (15)
        Append(&_54dup_overrides_47442, _54dup_overrides_47442, _st_ptr_47469);
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
        _st_builtin_47470 = _st_ptr_47469;
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
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24712 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 244 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 246 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24712);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24713 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24713 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24712 = NOVALUE;
        // SubProg keyfind pc: 250 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47457, _24713)){
            _24713 = NOVALUE;
            goto L8; // [250] 274
        }
        _24713 = NOVALUE;
        // SubProg keyfind pc: 254 op: STARTLINE (58)

        /** symtab.e:788							if BIND then*/
        // SubProg keyfind pc: 256 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 258 op: IF (20)
        if (_36BIND_16064 == 0)
        {
            goto L9; // [258] 267
        }
        else{
        }
        // SubProg keyfind pc: 261 op: STARTLINE (58)

        /** symtab.e:789								add_ref(tok)*/
        // SubProg keyfind pc: 263 op: PROC (27)
        Ref(_tok_47472);
        _54add_ref(_tok_47472);
        // SubProg keyfind pc: 266 op: NOP1 (159)
L9: // addr: 267 pc: 266 sub: 47453 op: 159
        // SubProg keyfind pc: 267 op: STARTLINE (58)

        /** symtab.e:792							return tok*/
        // SubProg keyfind pc: 269 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
        DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
        DeRef(_msg_47463);

// block var b_name_47464
        DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
        DeRef(_gtok_47473);

// block var any_symbol_47476
        DeRef(_24692);
        _24692 = NOVALUE;
        DeRef(_24702);
        _24702 = NOVALUE;
        return _tok_47472;
        // SubProg keyfind pc: 273 op: NOP1 (159)
L8: // addr: 274 pc: 273 sub: 47453 op: 159
        // SubProg keyfind pc: 274 op: STARTLINE (58)

        /** symtab.e:796						if Resolve_unincluded_globals */
        // SubProg keyfind pc: 276 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 278 op: SC1_OR (143)
        if (_54Resolve_unincluded_globals_47446 != 0) {
            _24715 = 1;
            goto LA; // [278] 322
        }
        // SubProg keyfind pc: 282 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 284 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37finished_files_15408);
        _24716 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 288 op: SC1_AND (141)
        if (_24716 == 0) {
            _24717 = 0;
            goto LB; // [288] 318
        }
        // SubProg keyfind pc: 292 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 294 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24718 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 298 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 300 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24719 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 304 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 306 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24719);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24720 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24720 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24719 = NOVALUE;
        // SubProg keyfind pc: 310 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24718);
        if (!IS_ATOM_INT(_24720)){
            _24721 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24720)->dbl));
        }
        else{
            _24721 = (object)*(((s1_ptr)_2)->base + _24720);
        }
        _24718 = NOVALUE;
        // SubProg keyfind pc: 314 op: SC2_AND (142)
        if (IS_ATOM_INT(_24721))
        _24717 = (_24721 != 0);
        else
        _24717 = DBL_PTR(_24721)->dbl != 0.0;
        // SubProg keyfind pc: 317 op: NOP1 (159)
LB: // addr: 318 pc: 317 sub: 47453 op: 159
        // SubProg keyfind pc: 318 op: SC2_OR (144)
        _24715 = (_24717 != 0);
        // SubProg keyfind pc: 321 op: NOP1 (159)
LA: // addr: 322 pc: 321 sub: 47453 op: 159
        // SubProg keyfind pc: 322 op: SC1_OR_IF (147)
        if (_24715 != 0) {
            goto LC; // [322] 349
        }
        // SubProg keyfind pc: 326 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 328 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24723 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 332 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 334 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24723);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _24724 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _24724 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _24723 = NOVALUE;
        // SubProg keyfind pc: 338 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 340 op: EQUALS (3)
        if (IS_ATOM_INT(_24724)) {
            _24725 = (_24724 == 523);
        }
        else {
            _24725 = binary_op(EQUALS, _24724, 523);
        }
        _24724 = NOVALUE;
        // SubProg keyfind pc: 344 op: NOP1 (159)
        // SubProg keyfind pc: 345 op: IF (20)
        if (_24725 == 0) {
            DeRef(_24725);
            _24725 = NOVALUE;
            goto L7; // [345] 1011
        }
        else {
            if (!IS_ATOM_INT(_24725) && DBL_PTR(_24725)->dbl == 0.0){
                DeRef(_24725);
                _24725 = NOVALUE;
                goto L7; // [345] 1011
            }
            DeRef(_24725);
            _24725 = NOVALUE;
        }
        DeRef(_24725);
        _24725 = NOVALUE;
        // SubProg keyfind pc: 348 op: NOP1 (159)
LC: // addr: 349 pc: 348 sub: 47453 op: 159
        // SubProg keyfind pc: 349 op: STARTLINE (58)

        /** symtab.e:800							gtok = tok*/
        // SubProg keyfind pc: 351 op: ASSIGN (18)
        Ref(_tok_47472);
        DeRef(_gtok_47473);
        _gtok_47473 = _tok_47472;
        // SubProg keyfind pc: 354 op: STARTLINE (58)

        /** symtab.e:801							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 356 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 358 op: CONCAT (15)
        Append(&_54dup_globals_47441, _54dup_globals_47441, _st_ptr_47469);
        // SubProg keyfind pc: 362 op: STARTLINE (58)

        /** symtab.e:802							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0*/
        // SubProg keyfind pc: 364 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 366 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 368 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24727 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 372 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 374 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24728 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 378 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 380 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24728);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24729 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24729 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24728 = NOVALUE;
        // SubProg keyfind pc: 384 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24727);
        if (!IS_ATOM_INT(_24729)){
            _24730 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24729)->dbl));
        }
        else{
            _24730 = (object)*(((s1_ptr)_2)->base + _24729);
        }
        _24727 = NOVALUE;
        // SubProg keyfind pc: 388 op: NOTEQ (4)
        if (IS_ATOM_INT(_24730)) {
            _24731 = (_24730 != 0);
        }
        else {
            _24731 = binary_op(NOTEQ, _24730, 0);
        }
        _24730 = NOVALUE;
        // SubProg keyfind pc: 392 op: CONCAT (15)
        if (IS_SEQUENCE(_54in_include_path_47443) && IS_ATOM(_24731)) {
            Ref(_24731);
            Append(&_54in_include_path_47443, _54in_include_path_47443, _24731);
        }
        else if (IS_ATOM(_54in_include_path_47443) && IS_SEQUENCE(_24731)) {
        }
        else {
            Concat((object_ptr)&_54in_include_path_47443, _54in_include_path_47443, _24731);
        }
        DeRef(_24731);
        _24731 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24733 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 415 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 417 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24733);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24734 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24734 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24733 = NOVALUE;
        // SubProg keyfind pc: 421 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47457, _24734)){
            _24734 = NOVALUE;
            goto LD; // [421] 445
        }
        _24734 = NOVALUE;
        // SubProg keyfind pc: 425 op: STARTLINE (58)

        /** symtab.e:811							if BIND then*/
        // SubProg keyfind pc: 427 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 429 op: IF (20)
        if (_36BIND_16064 == 0)
        {
            goto LE; // [429] 438
        }
        else{
        }
        // SubProg keyfind pc: 432 op: STARTLINE (58)

        /** symtab.e:812								add_ref(tok)*/
        // SubProg keyfind pc: 434 op: PROC (27)
        Ref(_tok_47472);
        _54add_ref(_tok_47472);
        // SubProg keyfind pc: 437 op: NOP1 (159)
LE: // addr: 438 pc: 437 sub: 47453 op: 159
        // SubProg keyfind pc: 438 op: STARTLINE (58)

        /** symtab.e:815							return tok*/
        // SubProg keyfind pc: 440 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
        DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
        DeRef(_msg_47463);

// block var b_name_47464
        DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
        DeRef(_gtok_47473);

// block var any_symbol_47476
        _24716 = NOVALUE;
        DeRef(_24692);
        _24692 = NOVALUE;
        _24720 = NOVALUE;
        DeRef(_24702);
        _24702 = NOVALUE;
        _24729 = NOVALUE;
        _24721 = NOVALUE;
        return _tok_47472;
        // SubProg keyfind pc: 444 op: NOP1 (159)
LD: // addr: 445 pc: 444 sub: 47453 op: 159
        // SubProg keyfind pc: 445 op: STARTLINE (58)

        /** symtab.e:818						if (finished_files[scanning_file] -- everything this file needs has been read in*/
        // SubProg keyfind pc: 447 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 449 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37finished_files_15408);
        _24736 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 453 op: SC1_OR (143)
        if (_24736 != 0) {
            _24737 = 1;
            goto LF; // [453] 487
        }
        // SubProg keyfind pc: 457 op: SC1_AND (141)
        if (_namespace_ok_47460 == 0) {
            _24738 = 0;
            goto L10; // [457] 483
        }
        // SubProg keyfind pc: 461 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 463 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24739 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 467 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 469 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24739);
        if (!IS_ATOM_INT(_36S_TOKEN_16096)){
            _24740 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
        }
        else{
            _24740 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
        }
        _24739 = NOVALUE;
        // SubProg keyfind pc: 473 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 475 op: EQUALS (3)
        if (IS_ATOM_INT(_24740)) {
            _24741 = (_24740 == 523);
        }
        else {
            _24741 = binary_op(EQUALS, _24740, 523);
        }
        _24740 = NOVALUE;
        // SubProg keyfind pc: 479 op: SC2_AND (142)
        if (IS_ATOM_INT(_24741))
        _24738 = (_24741 != 0);
        else
        _24738 = DBL_PTR(_24741)->dbl != 0.0;
        // SubProg keyfind pc: 482 op: NOP1 (159)
L10: // addr: 483 pc: 482 sub: 47453 op: 159
        // SubProg keyfind pc: 483 op: SC2_OR (144)
        _24737 = (_24738 != 0);
        // SubProg keyfind pc: 486 op: NOP1 (159)
LF: // addr: 487 pc: 486 sub: 47453 op: 159
        // SubProg keyfind pc: 487 op: SC1_AND_IF (146)
        if (_24737 == 0) {
            goto L7; // [487] 1011
        }
        // SubProg keyfind pc: 491 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 493 op: EQUALS (3)
        _24743 = (_scope_47465 == 13);
        // SubProg keyfind pc: 497 op: SC1_AND (141)
        if (_24743 == 0) {
            _24744 = 0;
            goto L11; // [497] 533
        }
        // SubProg keyfind pc: 501 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 503 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 505 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24745 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 509 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 511 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24746 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 515 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 517 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24746);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24747 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24747 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24746 = NOVALUE;
        // SubProg keyfind pc: 521 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24745);
        if (!IS_ATOM_INT(_24747)){
            _24748 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24747)->dbl));
        }
        else{
            _24748 = (object)*(((s1_ptr)_2)->base + _24747);
        }
        _24745 = NOVALUE;
        // SubProg keyfind pc: 525 op: AND_BITS (56)
        if (IS_ATOM_INT(_24748)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24748;
                 _24749 = MAKE_UINT(tu);
            }
        }
        else {
            _24749 = binary_op(AND_BITS, 6, _24748);
        }
        _24748 = NOVALUE;
        // SubProg keyfind pc: 529 op: SC2_AND (142)
        if (IS_ATOM_INT(_24749))
        _24744 = (_24749 != 0);
        else
        _24744 = DBL_PTR(_24749)->dbl != 0.0;
        // SubProg keyfind pc: 532 op: NOP1 (159)
L11: // addr: 533 pc: 532 sub: 47453 op: 159
        // SubProg keyfind pc: 533 op: SC1_OR (143)
        if (_24744 != 0) {
            DeRef(_24750);
            _24750 = 1;
            goto L12; // [533] 583
        }
        // SubProg keyfind pc: 537 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 539 op: EQUALS (3)
        _24751 = (_scope_47465 == 11);
        // SubProg keyfind pc: 543 op: SC1_AND (141)
        if (_24751 == 0) {
            _24752 = 0;
            goto L13; // [543] 579
        }
        // SubProg keyfind pc: 547 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 549 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 551 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24753 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 555 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 557 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24754 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 561 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 563 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24754);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24755 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24755 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24754 = NOVALUE;
        // SubProg keyfind pc: 567 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24753);
        if (!IS_ATOM_INT(_24755)){
            _24756 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24755)->dbl));
        }
        else{
            _24756 = (object)*(((s1_ptr)_2)->base + _24755);
        }
        _24753 = NOVALUE;
        // SubProg keyfind pc: 571 op: AND_BITS (56)
        if (IS_ATOM_INT(_24756)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24756;
                 _24757 = MAKE_UINT(tu);
            }
        }
        else {
            _24757 = binary_op(AND_BITS, 2, _24756);
        }
        _24756 = NOVALUE;
        // SubProg keyfind pc: 575 op: SC2_AND (142)
        if (IS_ATOM_INT(_24757))
        _24752 = (_24757 != 0);
        else
        _24752 = DBL_PTR(_24757)->dbl != 0.0;
        // SubProg keyfind pc: 578 op: NOP1 (159)
L13: // addr: 579 pc: 578 sub: 47453 op: 159
        // SubProg keyfind pc: 579 op: SC2_OR (144)
        DeRef(_24750);
        _24750 = (_24752 != 0);
        // SubProg keyfind pc: 582 op: NOP1 (159)
L12: // addr: 583 pc: 582 sub: 47453 op: 159
        // SubProg keyfind pc: 583 op: NOP1 (159)
        // SubProg keyfind pc: 584 op: IF (20)
        if (_24750 == 0)
        {
            _24750 = NOVALUE;
            goto L7; // [584] 1011
        }
        else{
            _24750 = NOVALUE;
        }
        // SubProg keyfind pc: 587 op: STARTLINE (58)

        /** symtab.e:826							gtok = tok*/
        // SubProg keyfind pc: 589 op: ASSIGN (18)
        Ref(_tok_47472);
        DeRef(_gtok_47473);
        _gtok_47473 = _tok_47472;
        // SubProg keyfind pc: 592 op: STARTLINE (58)

        /** symtab.e:827							dup_globals &= st_ptr*/
        // SubProg keyfind pc: 594 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 596 op: CONCAT (15)
        Append(&_54dup_globals_47441, _54dup_globals_47441, _st_ptr_47469);
        // SubProg keyfind pc: 600 op: STARTLINE (58)

        /** symtab.e:828							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0 --symbol_in_include_path( st_ptr, scanning_file, {} )*/
        // SubProg keyfind pc: 602 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 604 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 606 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37include_matrix_15412);
        _24759 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
        // SubProg keyfind pc: 610 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 612 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24760 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 616 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 618 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24760);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24761 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24761 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24760 = NOVALUE;
        // SubProg keyfind pc: 622 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24759);
        if (!IS_ATOM_INT(_24761)){
            _24762 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24761)->dbl));
        }
        else{
            _24762 = (object)*(((s1_ptr)_2)->base + _24761);
        }
        _24759 = NOVALUE;
        // SubProg keyfind pc: 626 op: NOTEQ (4)
        if (IS_ATOM_INT(_24762)) {
            _24763 = (_24762 != 0);
        }
        else {
            _24763 = binary_op(NOTEQ, _24762, 0);
        }
        _24762 = NOVALUE;
        // SubProg keyfind pc: 630 op: CONCAT (15)
        if (IS_SEQUENCE(_54in_include_path_47443) && IS_ATOM(_24763)) {
            Ref(_24763);
            Append(&_54in_include_path_47443, _54in_include_path_47443, _24763);
        }
        else if (IS_ATOM(_54in_include_path_47443) && IS_SEQUENCE(_24763)) {
        }
        else {
            Concat((object_ptr)&_54in_include_path_47443, _54in_include_path_47443, _24763);
        }
        DeRef(_24763);
        _24763 = NOVALUE;
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
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24765 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
        // SubProg keyfind pc: 653 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 655 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24765);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24766 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24766 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24765 = NOVALUE;
        // SubProg keyfind pc: 659 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _scanning_file_47457, _24766)){
            _24766 = NOVALUE;
            goto L7; // [659] 1011
        }
        _24766 = NOVALUE;
        // SubProg keyfind pc: 663 op: STARTLINE (58)

        /** symtab.e:857							if BIND then*/
        // SubProg keyfind pc: 665 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 667 op: IF (20)
        if (_36BIND_16064 == 0)
        {
            goto L14; // [667] 676
        }
        else{
        }
        // SubProg keyfind pc: 670 op: STARTLINE (58)

        /** symtab.e:858								add_ref(tok)*/
        // SubProg keyfind pc: 672 op: PROC (27)
        Ref(_tok_47472);
        _54add_ref(_tok_47472);
        // SubProg keyfind pc: 675 op: NOP1 (159)
L14: // addr: 676 pc: 675 sub: 47453 op: 159
        // SubProg keyfind pc: 676 op: STARTLINE (58)

        /** symtab.e:861							return tok*/
        // SubProg keyfind pc: 678 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
        DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
        DeRef(_msg_47463);

// block var b_name_47464
        DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
        DeRef(_gtok_47473);

// block var any_symbol_47476
        DeRef(_24757);
        _24757 = NOVALUE;
        _24736 = NOVALUE;
        DeRef(_24743);
        _24743 = NOVALUE;
        _24747 = NOVALUE;
        DeRef(_24749);
        _24749 = NOVALUE;
        _24716 = NOVALUE;
        DeRef(_24741);
        _24741 = NOVALUE;
        DeRef(_24692);
        _24692 = NOVALUE;
        _24755 = NOVALUE;
        _24720 = NOVALUE;
        DeRef(_24702);
        _24702 = NOVALUE;
        DeRef(_24751);
        _24751 = NOVALUE;
        _24729 = NOVALUE;
        _24721 = NOVALUE;
        _24761 = NOVALUE;
        return _tok_47472;
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
        if (_36BIND_16064 == 0)
        {
            goto L15; // [695] 704
        }
        else{
        }
        // SubProg keyfind pc: 698 op: STARTLINE (58)

        /** symtab.e:867							add_ref(tok)*/
        // SubProg keyfind pc: 700 op: PROC (27)
        Ref(_tok_47472);
        _54add_ref(_tok_47472);
        // SubProg keyfind pc: 703 op: NOP1 (159)
L15: // addr: 704 pc: 703 sub: 47453 op: 159
        // SubProg keyfind pc: 704 op: STARTLINE (58)

        /** symtab.e:870						return tok -- keyword, private*/
        // SubProg keyfind pc: 706 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
        DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
        DeRef(_msg_47463);

// block var b_name_47464
        DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
        DeRef(_gtok_47473);

// block var any_symbol_47476
        DeRef(_24757);
        _24757 = NOVALUE;
        _24736 = NOVALUE;
        DeRef(_24743);
        _24743 = NOVALUE;
        _24747 = NOVALUE;
        DeRef(_24749);
        _24749 = NOVALUE;
        _24716 = NOVALUE;
        DeRef(_24741);
        _24741 = NOVALUE;
        DeRef(_24692);
        _24692 = NOVALUE;
        _24755 = NOVALUE;
        _24720 = NOVALUE;
        DeRef(_24702);
        _24702 = NOVALUE;
        DeRef(_24751);
        _24751 = NOVALUE;
        _24729 = NOVALUE;
        _24721 = NOVALUE;
        _24761 = NOVALUE;
        return _tok_47472;
        // SubProg keyfind pc: 710 op: NOPSWITCH (187)
    ;}    // SubProg keyfind pc: 711 op: ELSE (23)
    goto L7; // [711] 1011
    // SubProg keyfind pc: 713 op: NOP1 (159)
L6: // addr: 714 pc: 713 sub: 47453 op: 159
    // SubProg keyfind pc: 714 op: STARTLINE (58)

    /** symtab.e:877					scope = SymTab[tok[T_SYM]][S_SCOPE]*/
    // SubProg keyfind pc: 716 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 718 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 720 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47472);
    _24768 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 724 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_24768)){
        _24769 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24768)->dbl));
    }
    else{
        _24769 = (object)*(((s1_ptr)_2)->base + _24768);
    }
    // SubProg keyfind pc: 728 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 730 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24769);
    _scope_47465 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47465)){
        _scope_47465 = (object)DBL_PTR(_scope_47465)->dbl;
    }
    _24769 = NOVALUE;
    // SubProg keyfind pc: 736 op: STARTLINE (58)

    /** symtab.e:878					if not file_no then*/
    // SubProg keyfind pc: 738 op: NOT_IFW (108)
    if (_file_no_47456 != 0)
    goto L16; // [738] 772
    // SubProg keyfind pc: 741 op: STARTLINE (58)

    /** symtab.e:880						if scope = SC_PREDEF then*/
    // SubProg keyfind pc: 743 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 745 op: EQUALS_IFW (104)
    if (_scope_47465 != 7)
    goto L17; // [745] 1010
    // SubProg keyfind pc: 749 op: STARTLINE (58)

    /** symtab.e:881							if BIND then*/
    // SubProg keyfind pc: 751 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 753 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L18; // [753] 762
    }
    else{
    }
    // SubProg keyfind pc: 756 op: STARTLINE (58)

    /** symtab.e:882								add_ref( tok )*/
    // SubProg keyfind pc: 758 op: PROC (27)
    Ref(_tok_47472);
    _54add_ref(_tok_47472);
    // SubProg keyfind pc: 761 op: NOP1 (159)
L18: // addr: 762 pc: 761 sub: 47453 op: 159
    // SubProg keyfind pc: 762 op: STARTLINE (58)

    /** symtab.e:884							return tok*/
    // SubProg keyfind pc: 764 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24747 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    return _tok_47472;
    // SubProg keyfind pc: 768 op: NOP1 (159)
    // SubProg keyfind pc: 769 op: ELSE (23)
    goto L17; // [769] 1010
    // SubProg keyfind pc: 771 op: NOP1 (159)
L16: // addr: 772 pc: 771 sub: 47453 op: 159
    // SubProg keyfind pc: 772 op: STARTLINE (58)

    /** symtab.e:887						integer tok_file = SymTab[tok[T_SYM]][S_FILE_NO]*/
    // SubProg keyfind pc: 774 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 776 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 778 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47472);
    _24773 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 782 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_24773)){
        _24774 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24773)->dbl));
    }
    else{
        _24774 = (object)*(((s1_ptr)_2)->base + _24773);
    }
    // SubProg keyfind pc: 786 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 788 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24774);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _tok_file_47644 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _tok_file_47644 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    if (!IS_ATOM_INT(_tok_file_47644)){
        _tok_file_47644 = (object)DBL_PTR(_tok_file_47644)->dbl;
    }
    _24774 = NOVALUE;
    // SubProg keyfind pc: 794 op: STARTLINE (58)

    /** symtab.e:888						integer good = 0*/
    // SubProg keyfind pc: 796 op: ASSIGN_I (113)
    _good_47651 = 0;
    // SubProg keyfind pc: 799 op: STARTLINE (58)

    /** symtab.e:889						if scope = SC_PRIVATE or scope = SC_PREDEF then*/
    // SubProg keyfind pc: 801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 803 op: EQUALS (3)
    _24776 = (_scope_47465 == 3);
    // SubProg keyfind pc: 807 op: SC1_OR_IF (147)
    if (_24776 != 0) {
        goto L19; // [807] 940
    }
    // SubProg keyfind pc: 811 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 813 op: EQUALS (3)
    _24778 = (_scope_47465 == 7);
    // SubProg keyfind pc: 817 op: NOP1 (159)
    // SubProg keyfind pc: 818 op: IF (20)
    if (_24778 == 0)
    {
        DeRef(_24778);
        _24778 = NOVALUE;
        goto L1A; // [818] 825
    }
    else{
        DeRef(_24778);
        _24778 = NOVALUE;
    }
    // SubProg keyfind pc: 821 op: NOP1 (159)
    // SubProg keyfind pc: 822 op: ELSE (23)
    goto L19; // [822] 940
    // SubProg keyfind pc: 824 op: NOP1 (159)
L1A: // addr: 825 pc: 824 sub: 47453 op: 159
    // SubProg keyfind pc: 825 op: STARTLINE (58)

    /** symtab.e:892						elsif file_no = tok_file then*/
    // SubProg keyfind pc: 827 op: EQUALS_IFW_I (121)
    if (_file_no_47456 != _tok_file_47644)
    goto L1B; // [827] 839
    // SubProg keyfind pc: 831 op: STARTLINE (58)

    /** symtab.e:893							good = 1*/
    // SubProg keyfind pc: 833 op: ASSIGN_I (113)
    _good_47651 = 1;
    // SubProg keyfind pc: 836 op: ELSE (23)
    goto L19; // [836] 940
    // SubProg keyfind pc: 838 op: NOP1 (159)
L1B: // addr: 839 pc: 838 sub: 47453 op: 159
    // SubProg keyfind pc: 839 op: STARTLINE (58)

    /** symtab.e:896							integer include_type = 0*/
    // SubProg keyfind pc: 841 op: ASSIGN_I (113)
    _include_type_47661 = 0;
    // SubProg keyfind pc: 844 op: STARTLINE (58)

    /** symtab.e:897							switch scope do*/
    // SubProg keyfind pc: 846 op: SWITCH_I (193)
    _0 = _scope_47465;
    switch ( _0 ){ 
        // SubProg keyfind pc: 851 op: STARTLINE (58)

        /** symtab.e:898								case SC_GLOBAL then*/
        // SubProg keyfind pc: 853 op: CASE (186)
        case 6:
        // SubProg keyfind pc: 855 op: STARTLINE (58)

        /** symtab.e:899									if Resolve_unincluded_globals then*/
        // SubProg keyfind pc: 857 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 859 op: IF (20)
        if (_54Resolve_unincluded_globals_47446 == 0)
        {
            goto L1C; // [859] 874
        }
        else{
        }
        // SubProg keyfind pc: 862 op: STARTLINE (58)

        /** symtab.e:900										include_type = ANY_INCLUDE*/
        // SubProg keyfind pc: 864 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 866 op: ASSIGN (18)
        _include_type_47661 = 7;
        // SubProg keyfind pc: 869 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 871 op: ELSE (23)
        goto L1D; // [871] 919
        // SubProg keyfind pc: 873 op: NOP1 (159)
L1C: // addr: 874 pc: 873 sub: 47453 op: 159
        // SubProg keyfind pc: 874 op: STARTLINE (58)

        /** symtab.e:902										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 876 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 878 op: ASSIGN (18)
        _include_type_47661 = 6;
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
        if (_tok_file_47644 == _file_no_47456)
        goto L1E; // [892] 908
        // SubProg keyfind pc: 896 op: STARTLINE (58)

        /** symtab.e:908										include_type = PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 898 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 900 op: ASSIGN (18)
        _include_type_47661 = 4;
        // SubProg keyfind pc: 903 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 905 op: ELSE (23)
        goto L1F; // [905] 918
        // SubProg keyfind pc: 907 op: NOP1 (159)
L1E: // addr: 908 pc: 907 sub: 47453 op: 159
        // SubProg keyfind pc: 908 op: STARTLINE (58)

        /** symtab.e:910										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        // SubProg keyfind pc: 910 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 912 op: ASSIGN (18)
        _include_type_47661 = 6;
        // SubProg keyfind pc: 915 op: INTEGER_CHECK (96)
        // SubProg keyfind pc: 917 op: NOP1 (159)
L1F: // addr: 918 pc: 917 sub: 47453 op: 159
        // SubProg keyfind pc: 918 op: NOPSWITCH (187)
    ;}L1D: // addr: 919 pc: 918 sub: 47453 op: 187
    // SubProg keyfind pc: 919 op: STARTLINE (58)

    /** symtab.e:914							good = and_bits( include_type, include_matrix[file_no][tok_file] )*/
    // SubProg keyfind pc: 921 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 923 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _24783 = (object)*(((s1_ptr)_2)->base + _file_no_47456);
    // SubProg keyfind pc: 927 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24783);
    _24784 = (object)*(((s1_ptr)_2)->base + _tok_file_47644);
    _24783 = NOVALUE;
    // SubProg keyfind pc: 931 op: AND_BITS (56)
    if (IS_ATOM_INT(_24784)) {
        {uintptr_t tu;
             tu = (uintptr_t)_include_type_47661 & (uintptr_t)_24784;
             _good_47651 = MAKE_UINT(tu);
        }
    }
    else {
        _good_47651 = binary_op(AND_BITS, _include_type_47661, _24784);
    }
    _24784 = NOVALUE;
    // SubProg keyfind pc: 935 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_good_47651)) {
        _1 = (object)(DBL_PTR(_good_47651)->dbl);
        DeRefDS(_good_47651);
        _good_47651 = _1;
    }
    // SubProg keyfind pc: 937 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var include_type_47661
    // SubProg keyfind pc: 939 op: NOP1 (159)
L19: // addr: 940 pc: 939 sub: 47453 op: 159
    // SubProg keyfind pc: 940 op: STARTLINE (58)

    /** symtab.e:917						if good then*/
    // SubProg keyfind pc: 942 op: IF (20)
    if (_good_47651 == 0)
    {
        goto L20; // [942] 1007
    }
    else{
    }
    // SubProg keyfind pc: 945 op: STARTLINE (58)

    /** symtab.e:919							if file_no = tok_file then*/
    // SubProg keyfind pc: 947 op: EQUALS_IFW_I (121)
    if (_file_no_47456 != _tok_file_47644)
    goto L21; // [947] 971
    // SubProg keyfind pc: 951 op: STARTLINE (58)

    /** symtab.e:920								if BIND then*/
    // SubProg keyfind pc: 953 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 955 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L22; // [955] 964
    }
    else{
    }
    // SubProg keyfind pc: 958 op: STARTLINE (58)

    /** symtab.e:921									add_ref(tok)*/
    // SubProg keyfind pc: 960 op: PROC (27)
    Ref(_tok_47472);
    _54add_ref(_tok_47472);
    // SubProg keyfind pc: 963 op: NOP1 (159)
L22: // addr: 964 pc: 963 sub: 47453 op: 159
    // SubProg keyfind pc: 964 op: STARTLINE (58)

    /** symtab.e:923								return tok*/
    // SubProg keyfind pc: 966 op: RETURNF (28)

// Exiting block BLOCK: IF-

// block var tok_file_47644

// block var good_47651

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: WHILE-

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24747 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    _24773 = NOVALUE;
    return _tok_47472;
    // SubProg keyfind pc: 970 op: NOP1 (159)
L21: // addr: 971 pc: 970 sub: 47453 op: 159
    // SubProg keyfind pc: 971 op: STARTLINE (58)

    /** symtab.e:926							gtok = tok*/
    // SubProg keyfind pc: 973 op: ASSIGN (18)
    Ref(_tok_47472);
    DeRef(_gtok_47473);
    _gtok_47473 = _tok_47472;
    // SubProg keyfind pc: 976 op: STARTLINE (58)

    /** symtab.e:927							dup_globals &= st_ptr*/
    // SubProg keyfind pc: 978 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 980 op: CONCAT (15)
    Append(&_54dup_globals_47441, _54dup_globals_47441, _st_ptr_47469);
    // SubProg keyfind pc: 984 op: STARTLINE (58)

    /** symtab.e:928							in_include_path &= include_matrix[scanning_file][tok_file] != 0*/
    // SubProg keyfind pc: 986 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 988 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 990 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37include_matrix_15412);
    _24788 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
    // SubProg keyfind pc: 994 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24788);
    _24789 = (object)*(((s1_ptr)_2)->base + _tok_file_47644);
    _24788 = NOVALUE;
    // SubProg keyfind pc: 998 op: NOTEQ (4)
    if (IS_ATOM_INT(_24789)) {
        _24790 = (_24789 != 0);
    }
    else {
        _24790 = binary_op(NOTEQ, _24789, 0);
    }
    _24789 = NOVALUE;
    // SubProg keyfind pc: 1002 op: CONCAT (15)
    if (IS_SEQUENCE(_54in_include_path_47443) && IS_ATOM(_24790)) {
        Ref(_24790);
        Append(&_54in_include_path_47443, _54in_include_path_47443, _24790);
    }
    else if (IS_ATOM(_54in_include_path_47443) && IS_SEQUENCE(_24790)) {
    }
    else {
        Concat((object_ptr)&_54in_include_path_47443, _54in_include_path_47443, _24790);
    }
    DeRef(_24790);
    _24790 = NOVALUE;
    // SubProg keyfind pc: 1006 op: NOP1 (159)
L20: // addr: 1007 pc: 1006 sub: 47453 op: 159
    // SubProg keyfind pc: 1007 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var tok_file_47644

// block var good_47651
    // SubProg keyfind pc: 1009 op: NOP1 (159)
L17: // addr: 1010 pc: 1009 sub: 47453 op: 159
    // SubProg keyfind pc: 1010 op: NOP1 (159)
L7: // addr: 1011 pc: 1010 sub: 47453 op: 159
    // SubProg keyfind pc: 1011 op: NOP1 (159)
L4: // addr: 1012 pc: 1011 sub: 47453 op: 159
    // SubProg keyfind pc: 1012 op: STARTLINE (58)

    /** symtab.e:936			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    // SubProg keyfind pc: 1014 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1016 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24792 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 1020 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1022 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24792);
    _st_ptr_47469 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_47469)){
        _st_ptr_47469 = (object)DBL_PTR(_st_ptr_47469)->dbl;
    }
    _24792 = NOVALUE;
    // SubProg keyfind pc: 1028 op: STARTLINE (58)

    /** symtab.e:937		end while*/
    // SubProg keyfind pc: 1030 op: ENDWHILE (22)
    goto L1; // [1030] 69
    // SubProg keyfind pc: 1032 op: NOP1 (159)
L2: // addr: 1033 pc: 1032 sub: 47453 op: 159
    // SubProg keyfind pc: 1033 op: STARTLINE (58)

    /** symtab.e:939		if length(dup_overrides) then*/
    // SubProg keyfind pc: 1035 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1037 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_overrides_47442)){
            _24794 = SEQ_PTR(_54dup_overrides_47442)->length;
    }
    else {
        _24794 = 1;
    }
    // SubProg keyfind pc: 1040 op: IF (20)
    if (_24794 == 0)
    {
        _24794 = NOVALUE;
        goto L23; // [1040] 1093
    }
    else{
        _24794 = NOVALUE;
    }
    // SubProg keyfind pc: 1043 op: STARTLINE (58)

    /** symtab.e:940			st_ptr = dup_overrides[1]*/
    // SubProg keyfind pc: 1045 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1047 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54dup_overrides_47442);
    _st_ptr_47469 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1053 op: STARTLINE (58)

    /** symtab.e:941			tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1055 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1057 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24796 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 1061 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1063 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24796);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24797 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24797 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24796 = NOVALUE;
    // SubProg keyfind pc: 1067 op: RIGHT_BRACE_2 (85)
    Ref(_24797);
    DeRef(_tok_47472);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24797;
    ((intptr_t *)_2)[2] = _st_ptr_47469;
    _tok_47472 = MAKE_SEQ(_1);
    _24797 = NOVALUE;
    // SubProg keyfind pc: 1071 op: STARTLINE (58)

    /** symtab.e:944				if BIND then*/
    // SubProg keyfind pc: 1073 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1075 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L24; // [1075] 1084
    }
    else{
    }
    // SubProg keyfind pc: 1078 op: STARTLINE (58)

    /** symtab.e:945					add_ref(tok)*/
    // SubProg keyfind pc: 1080 op: PROC (27)
    RefDS(_tok_47472);
    _54add_ref(_tok_47472);
    // SubProg keyfind pc: 1083 op: NOP1 (159)
L24: // addr: 1084 pc: 1083 sub: 47453 op: 159
    // SubProg keyfind pc: 1084 op: STARTLINE (58)

    /** symtab.e:948				return tok*/
    // SubProg keyfind pc: 1086 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24747 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    _24773 = NOVALUE;
    return _tok_47472;
    // SubProg keyfind pc: 1090 op: ELSE (23)
    goto L25; // [1090] 1320
    // SubProg keyfind pc: 1092 op: NOP1 (159)
L23: // addr: 1093 pc: 1092 sub: 47453 op: 159
    // SubProg keyfind pc: 1093 op: STARTLINE (58)

    /** symtab.e:951		elsif st_builtin != 0 then*/
    // SubProg keyfind pc: 1095 op: NOTEQ_IFW (105)
    if (_st_builtin_47470 == 0)
    goto L26; // [1095] 1319
    // SubProg keyfind pc: 1099 op: STARTLINE (58)

    /** symtab.e:952			if length(dup_globals) and find(SymTab[st_builtin][S_NAME], builtin_warnings) = 0 then*/
    // SubProg keyfind pc: 1101 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1103 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24800 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24800 = 1;
    }
    // SubProg keyfind pc: 1106 op: SC1_AND_IF (146)
    if (_24800 == 0) {
        goto L27; // [1106] 1279
    }
    // SubProg keyfind pc: 1110 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1112 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24802 = (object)*(((s1_ptr)_2)->base + _st_builtin_47470);
    // SubProg keyfind pc: 1116 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1118 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24802);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24803 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24803 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24802 = NOVALUE;
    // SubProg keyfind pc: 1122 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1124 op: FIND_FROM (176)
    _24804 = find_from(_24803, _54builtin_warnings_47445, 1);
    _24803 = NOVALUE;
    // SubProg keyfind pc: 1129 op: EQUALS (3)
    _24805 = (_24804 == 0);
    _24804 = NOVALUE;
    // SubProg keyfind pc: 1133 op: NOP1 (159)
    // SubProg keyfind pc: 1134 op: IF (20)
    if (_24805 == 0)
    {
        DeRef(_24805);
        _24805 = NOVALUE;
        goto L27; // [1134] 1279
    }
    else{
        DeRef(_24805);
        _24805 = NOVALUE;
    }
    // SubProg keyfind pc: 1137 op: STARTLINE (58)

    /** symtab.e:953				sequence msg_file */
    // SubProg keyfind pc: 1139 op: STARTLINE (58)

    /** symtab.e:955				b_name = SymTab[st_builtin][S_NAME]*/
    // SubProg keyfind pc: 1141 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1143 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24806 = (object)*(((s1_ptr)_2)->base + _st_builtin_47470);
    // SubProg keyfind pc: 1147 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1149 op: RHS_SUBS_CHECK (92)
    DeRef(_b_name_47464);
    _2 = (object)SEQ_PTR(_24806);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _b_name_47464 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _b_name_47464 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    Ref(_b_name_47464);
    _24806 = NOVALUE;
    // SubProg keyfind pc: 1153 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1155 op: STARTLINE (58)

    /** symtab.e:956				builtin_warnings = append(builtin_warnings, b_name)*/
    // SubProg keyfind pc: 1157 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1159 op: APPEND (35)
    RefDS(_b_name_47464);
    Append(&_54builtin_warnings_47445, _54builtin_warnings_47445, _b_name_47464);
    // SubProg keyfind pc: 1163 op: STARTLINE (58)

    /** symtab.e:958				if length(dup_globals) > 1 then*/
    // SubProg keyfind pc: 1165 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1167 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24809 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24809 = 1;
    }
    // SubProg keyfind pc: 1170 op: GREATER_IFW_I (124)
    if (_24809 <= 1)
    goto L28; // [1170] 1184
    // SubProg keyfind pc: 1174 op: STARTLINE (58)

    /** symtab.e:959					msg = "\n"*/
    // SubProg keyfind pc: 1176 op: ASSIGN (18)
    RefDS(_22128);
    DeRef(_msg_47463);
    _msg_47463 = _22128;
    // SubProg keyfind pc: 1179 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1181 op: ELSE (23)
    goto L29; // [1181] 1192
    // SubProg keyfind pc: 1183 op: NOP1 (159)
L28: // addr: 1184 pc: 1183 sub: 47453 op: 159
    // SubProg keyfind pc: 1184 op: STARTLINE (58)

    /** symtab.e:961					msg = ""*/
    // SubProg keyfind pc: 1186 op: ASSIGN (18)
    RefDS(_21933);
    DeRef(_msg_47463);
    _msg_47463 = _21933;
    // SubProg keyfind pc: 1189 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1191 op: NOP1 (159)
L29: // addr: 1192 pc: 1191 sub: 47453 op: 159
    // SubProg keyfind pc: 1192 op: STARTLINE (58)

    /** symtab.e:964				for i = 1 to length(dup_globals) do*/
    // SubProg keyfind pc: 1194 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1196 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24811 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24811 = 1;
    }
    // SubProg keyfind pc: 1199 op: FOR_I (125)
    {
        object _i_47728;
        _i_47728 = 1;
L2A: // addr: 1206 pc: 1199 sub: 47453 op: 125
        if (_i_47728 > _24811){
            goto L2B; // [1199] 1255
        }
        // SubProg keyfind pc: 1206 op: STARTLINE (58)

        /** symtab.e:965					msg_file = known_files[SymTab[dup_globals[i]][S_FILE_NO]]*/
        // SubProg keyfind pc: 1208 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1210 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1212 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1214 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_54dup_globals_47441);
        _24812 = (object)*(((s1_ptr)_2)->base + _i_47728);
        // SubProg keyfind pc: 1218 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        if (!IS_ATOM_INT(_24812)){
            _24813 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24812)->dbl));
        }
        else{
            _24813 = (object)*(((s1_ptr)_2)->base + _24812);
        }
        // SubProg keyfind pc: 1222 op: GLOBAL_INIT_CHECK (109)
        // SubProg keyfind pc: 1224 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24813);
        if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
            _24814 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
        }
        else{
            _24814 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
        }
        _24813 = NOVALUE;
        // SubProg keyfind pc: 1228 op: RHS_SUBS_CHECK (92)
        DeRef(_msg_file_47717);
        _2 = (object)SEQ_PTR(_37known_files_15406);
        if (!IS_ATOM_INT(_24814)){
            _msg_file_47717 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24814)->dbl));
        }
        else{
            _msg_file_47717 = (object)*(((s1_ptr)_2)->base + _24814);
        }
        Ref(_msg_file_47717);
        // SubProg keyfind pc: 1232 op: SEQUENCE_CHECK (97)
        // SubProg keyfind pc: 1234 op: STARTLINE (58)

        /** symtab.e:966					msg &= "    " & msg_file & "\n"*/
        // SubProg keyfind pc: 1236 op: PRIVATE_INIT_CHECK (30)
        // SubProg keyfind pc: 1238 op: CONCAT_N (157)
        {
            object concat_list[3];

            concat_list[0] = _22128;
            concat_list[1] = _msg_file_47717;
            concat_list[2] = _24816;
            Concat_N((object_ptr)&_24817, concat_list, 3);
        }
        // SubProg keyfind pc: 1244 op: CONCAT (15)
        Concat((object_ptr)&_msg_47463, _msg_47463, _24817);
        DeRefDS(_24817);
        _24817 = NOVALUE;
        // SubProg keyfind pc: 1248 op: STARTLINE (58)

        /** symtab.e:967				end for*/
        // SubProg keyfind pc: 1250 op: ENDFOR_INT_UP1 (54)
        _i_47728 = _i_47728 + 1;
        goto L2A; // [1250] 1206
L2B: // addr: 1255 pc: 1250 sub: 47453 op: 54
        ;
    }
    // SubProg keyfind pc: 1255 op: STARTLINE (58)

    /** symtab.e:969				Warning(234, builtin_chosen_warning_flag, {b_name, known_files[scanning_file], msg})*/
    // SubProg keyfind pc: 1257 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1259 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1261 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _24819 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
    // SubProg keyfind pc: 1265 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1267 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_b_name_47464);
    ((intptr_t*)_2)[1] = _b_name_47464;
    Ref(_24819);
    ((intptr_t*)_2)[2] = _24819;
    RefDS(_msg_47463);
    ((intptr_t*)_2)[3] = _msg_47463;
    _24820 = MAKE_SEQ(_1);
    _24819 = NOVALUE;
    // SubProg keyfind pc: 1273 op: PROC (27)
    _50Warning(234, 8, _24820);
    _24820 = NOVALUE;
    // SubProg keyfind pc: 1278 op: NOP1 (159)
L27: // addr: 1279 pc: 1278 sub: 47453 op: 159
    // SubProg keyfind pc: 1279 op: EXIT_BLOCK (206)

// Exiting block BLOCK: IF-

// block var msg_file_47717
    DeRef(_msg_file_47717);
    _msg_file_47717 = NOVALUE;
    // SubProg keyfind pc: 1281 op: STARTLINE (58)

    /** symtab.e:972			tok = {SymTab[st_builtin][S_TOKEN], st_builtin}*/
    // SubProg keyfind pc: 1283 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1285 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24821 = (object)*(((s1_ptr)_2)->base + _st_builtin_47470);
    // SubProg keyfind pc: 1289 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1291 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24821);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24822 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24822 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24821 = NOVALUE;
    // SubProg keyfind pc: 1295 op: RIGHT_BRACE_2 (85)
    Ref(_24822);
    DeRef(_tok_47472);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24822;
    ((intptr_t *)_2)[2] = _st_builtin_47470;
    _tok_47472 = MAKE_SEQ(_1);
    _24822 = NOVALUE;
    // SubProg keyfind pc: 1299 op: STARTLINE (58)

    /** symtab.e:974			if BIND then*/
    // SubProg keyfind pc: 1301 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1303 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L2C; // [1303] 1312
    }
    else{
    }
    // SubProg keyfind pc: 1306 op: STARTLINE (58)

    /** symtab.e:975				add_ref(tok)*/
    // SubProg keyfind pc: 1308 op: PROC (27)
    RefDS(_tok_47472);
    _54add_ref(_tok_47472);
    // SubProg keyfind pc: 1311 op: NOP1 (159)
L2C: // addr: 1312 pc: 1311 sub: 47453 op: 159
    // SubProg keyfind pc: 1312 op: STARTLINE (58)

    /** symtab.e:978			return tok*/
    // SubProg keyfind pc: 1314 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24747 = NOVALUE;
    _24814 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    _24812 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    _24773 = NOVALUE;
    return _tok_47472;
    // SubProg keyfind pc: 1318 op: NOP1 (159)
L26: // addr: 1319 pc: 1318 sub: 47453 op: 159
    // SubProg keyfind pc: 1319 op: NOP1 (159)
L25: // addr: 1320 pc: 1319 sub: 47453 op: 159
    // SubProg keyfind pc: 1320 op: STARTLINE (58)

    /** symtab.e:981	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1322 op: STARTLINE (58)

    /** symtab.e:996		if length(dup_globals) > 1 and find( 1, in_include_path ) then*/
    // SubProg keyfind pc: 1324 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1326 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24824 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24824 = 1;
    }
    // SubProg keyfind pc: 1329 op: GREATER (6)
    _24825 = (_24824 > 1);
    _24824 = NOVALUE;
    // SubProg keyfind pc: 1333 op: SC1_AND_IF (146)
    if (_24825 == 0) {
        goto L2D; // [1333] 1452
    }
    // SubProg keyfind pc: 1337 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1339 op: FIND_FROM (176)
    _24827 = find_from(1, _54in_include_path_47443, 1);
    // SubProg keyfind pc: 1344 op: NOP1 (159)
    // SubProg keyfind pc: 1345 op: IF (20)
    if (_24827 == 0)
    {
        _24827 = NOVALUE;
        goto L2D; // [1345] 1452
    }
    else{
        _24827 = NOVALUE;
    }
    // SubProg keyfind pc: 1348 op: STARTLINE (58)

    /** symtab.e:998			ix = 1*/
    // SubProg keyfind pc: 1350 op: ASSIGN_I (113)
    _ix_47467 = 1;
    // SubProg keyfind pc: 1353 op: STARTLINE (58)

    /** symtab.e:999			while ix <= length(dup_globals) do*/
    // SubProg keyfind pc: 1355 op: NOP2 (110)
    // SubProg keyfind pc: 1357 op: NOPWHILE (158)
L2E: // addr: 1358 pc: 1357 sub: 47453 op: 158
    // SubProg keyfind pc: 1358 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1360 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24828 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24828 = 1;
    }
    // SubProg keyfind pc: 1363 op: LESSEQ_IFW_I (123)
    if (_ix_47467 > _24828)
    goto L2F; // [1363] 1411
    // SubProg keyfind pc: 1367 op: STARTLINE (58)

    /** symtab.e:1000				if in_include_path[ix] then*/
    // SubProg keyfind pc: 1369 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1371 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54in_include_path_47443);
    _24830 = (object)*(((s1_ptr)_2)->base + _ix_47467);
    // SubProg keyfind pc: 1375 op: IF (20)
    if (_24830 == 0) {
        _24830 = NOVALUE;
        goto L30; // [1375] 1387
    }
    else {
        if (!IS_ATOM_INT(_24830) && DBL_PTR(_24830)->dbl == 0.0){
            _24830 = NOVALUE;
            goto L30; // [1375] 1387
        }
        _24830 = NOVALUE;
    }
    _24830 = NOVALUE;
    // SubProg keyfind pc: 1378 op: STARTLINE (58)

    /** symtab.e:1001					ix += 1*/
    // SubProg keyfind pc: 1380 op: PLUS1_I (117)
    _ix_47467 = _ix_47467 + 1;
    // SubProg keyfind pc: 1384 op: ELSE (23)
    goto L2E; // [1384] 1358
    // SubProg keyfind pc: 1386 op: NOP1 (159)
L30: // addr: 1387 pc: 1386 sub: 47453 op: 159
    // SubProg keyfind pc: 1387 op: STARTLINE (58)

    /** symtab.e:1003					dup_globals     = remove( dup_globals, ix )*/
    // SubProg keyfind pc: 1389 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1391 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_54dup_globals_47441);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47467)) ? _ix_47467 : (object)(DBL_PTR(_ix_47467)->dbl);
        int stop = (IS_ATOM_INT(_ix_47467)) ? _ix_47467 : (object)(DBL_PTR(_ix_47467)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_54dup_globals_47441), start, &_54dup_globals_47441 );
            }
            else Tail(SEQ_PTR(_54dup_globals_47441), stop+1, &_54dup_globals_47441);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_54dup_globals_47441), start, &_54dup_globals_47441);
        }
        else {
            assign_slice_seq = &assign_space;
            _54dup_globals_47441 = Remove_elements(start, stop, (SEQ_PTR(_54dup_globals_47441)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1396 op: STARTLINE (58)

    /** symtab.e:1004					in_include_path = remove( in_include_path, ix )*/
    // SubProg keyfind pc: 1398 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1400 op: REMOVE (200)
    {
        s1_ptr assign_space = SEQ_PTR(_54in_include_path_47443);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47467)) ? _ix_47467 : (object)(DBL_PTR(_ix_47467)->dbl);
        int stop = (IS_ATOM_INT(_ix_47467)) ? _ix_47467 : (object)(DBL_PTR(_ix_47467)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_54in_include_path_47443), start, &_54in_include_path_47443 );
            }
            else Tail(SEQ_PTR(_54in_include_path_47443), stop+1, &_54in_include_path_47443);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_54in_include_path_47443), start, &_54in_include_path_47443);
        }
        else {
            assign_slice_seq = &assign_space;
            _54in_include_path_47443 = Remove_elements(start, stop, (SEQ_PTR(_54in_include_path_47443)->ref == 1));
        }
    }
    // SubProg keyfind pc: 1405 op: NOP1 (159)
    // SubProg keyfind pc: 1406 op: STARTLINE (58)

    /** symtab.e:1006			end while*/
    // SubProg keyfind pc: 1408 op: ENDWHILE (22)
    goto L2E; // [1408] 1358
    // SubProg keyfind pc: 1410 op: NOP1 (159)
L2F: // addr: 1411 pc: 1410 sub: 47453 op: 159
    // SubProg keyfind pc: 1411 op: STARTLINE (58)

    /** symtab.e:1008			if length(dup_globals) = 1 then*/
    // SubProg keyfind pc: 1413 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1415 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24834 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24834 = 1;
    }
    // SubProg keyfind pc: 1418 op: EQUALS_IFW_I (121)
    if (_24834 != 1)
    goto L31; // [1418] 1451
    // SubProg keyfind pc: 1422 op: STARTLINE (58)

    /** symtab.e:1009					st_ptr = dup_globals[1]*/
    // SubProg keyfind pc: 1424 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1426 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54dup_globals_47441);
    _st_ptr_47469 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_st_ptr_47469)){
        _st_ptr_47469 = (object)DBL_PTR(_st_ptr_47469)->dbl;
    }
    // SubProg keyfind pc: 1432 op: STARTLINE (58)

    /** symtab.e:1010					gtok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    // SubProg keyfind pc: 1434 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24837 = (object)*(((s1_ptr)_2)->base + _st_ptr_47469);
    // SubProg keyfind pc: 1440 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1442 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24837);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24838 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24838 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24837 = NOVALUE;
    // SubProg keyfind pc: 1446 op: RIGHT_BRACE_2 (85)
    Ref(_24838);
    DeRef(_gtok_47473);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24838;
    ((intptr_t *)_2)[2] = _st_ptr_47469;
    _gtok_47473 = MAKE_SEQ(_1);
    _24838 = NOVALUE;
    // SubProg keyfind pc: 1450 op: NOP1 (159)
L31: // addr: 1451 pc: 1450 sub: 47453 op: 159
    // SubProg keyfind pc: 1451 op: NOP1 (159)
L2D: // addr: 1452 pc: 1451 sub: 47453 op: 159
    // SubProg keyfind pc: 1452 op: STARTLINE (58)

    /** symtab.e:1014	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1454 op: STARTLINE (58)

    /** symtab.e:1023		if length(dup_globals) = 1 and st_builtin = 0 then*/
    // SubProg keyfind pc: 1456 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1458 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24840 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24840 = 1;
    }
    // SubProg keyfind pc: 1461 op: EQUALS (3)
    _24841 = (_24840 == 1);
    _24840 = NOVALUE;
    // SubProg keyfind pc: 1465 op: SC1_AND_IF (146)
    if (_24841 == 0) {
        goto L32; // [1465] 1642
    }
    // SubProg keyfind pc: 1469 op: EQUALS (3)
    _24843 = (_st_builtin_47470 == 0);
    // SubProg keyfind pc: 1473 op: NOP1 (159)
    // SubProg keyfind pc: 1474 op: IF (20)
    if (_24843 == 0)
    {
        DeRef(_24843);
        _24843 = NOVALUE;
        goto L32; // [1474] 1642
    }
    else{
        DeRef(_24843);
        _24843 = NOVALUE;
    }
    // SubProg keyfind pc: 1477 op: STARTLINE (58)

    /** symtab.e:1026			if BIND then*/
    // SubProg keyfind pc: 1479 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1481 op: IF (20)
    if (_36BIND_16064 == 0)
    {
        goto L33; // [1481] 1492
    }
    else{
    }
    // SubProg keyfind pc: 1484 op: STARTLINE (58)

    /** symtab.e:1027				add_ref(gtok)*/
    // SubProg keyfind pc: 1486 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1488 op: PROC (27)
    Ref(_gtok_47473);
    _54add_ref(_gtok_47473);
    // SubProg keyfind pc: 1491 op: NOP1 (159)
L33: // addr: 1492 pc: 1491 sub: 47453 op: 159
    // SubProg keyfind pc: 1492 op: STARTLINE (58)

    /** symtab.e:1029			if not in_include_path[1] and*/
    // SubProg keyfind pc: 1494 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1496 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54in_include_path_47443);
    _24844 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg keyfind pc: 1500 op: NOT (7)
    if (IS_ATOM_INT(_24844)) {
        _24845 = (_24844 == 0);
    }
    else {
        _24845 = unary_op(NOT, _24844);
    }
    _24844 = NOVALUE;
    // SubProg keyfind pc: 1503 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24845)) {
        if (_24845 == 0) {
            goto L34; // [1503] 1635
        }
    }
    else {
        if (DBL_PTR(_24845)->dbl == 0.0) {
            goto L34; // [1503] 1635
        }
    }
    // SubProg keyfind pc: 1507 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1509 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1511 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1513 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47473);
    _24847 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1517 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_24847)){
        _24848 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24847)->dbl));
    }
    else{
        _24848 = (object)*(((s1_ptr)_2)->base + _24847);
    }
    // SubProg keyfind pc: 1521 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1523 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24848);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24849 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24849 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24848 = NOVALUE;
    // SubProg keyfind pc: 1527 op: RIGHT_BRACE_2 (85)
    Ref(_24849);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47457;
    ((intptr_t *)_2)[2] = _24849;
    _24850 = MAKE_SEQ(_1);
    _24849 = NOVALUE;
    // SubProg keyfind pc: 1531 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1533 op: FIND_FROM (176)
    _24851 = find_from(_24850, _54include_warnings_47444, 1);
    DeRefDS(_24850);
    _24850 = NOVALUE;
    // SubProg keyfind pc: 1538 op: NOT (7)
    _24852 = (_24851 == 0);
    _24851 = NOVALUE;
    // SubProg keyfind pc: 1541 op: NOP1 (159)
    // SubProg keyfind pc: 1542 op: IF (20)
    if (_24852 == 0)
    {
        DeRef(_24852);
        _24852 = NOVALUE;
        goto L34; // [1542] 1635
    }
    else{
        DeRef(_24852);
        _24852 = NOVALUE;
    }
    // SubProg keyfind pc: 1545 op: STARTLINE (58)

    /** symtab.e:1032				include_warnings = prepend( include_warnings,*/
    // SubProg keyfind pc: 1547 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1549 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1551 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1553 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47473);
    _24853 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1557 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_24853)){
        _24854 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24853)->dbl));
    }
    else{
        _24854 = (object)*(((s1_ptr)_2)->base + _24853);
    }
    // SubProg keyfind pc: 1561 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1563 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24854);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24855 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24855 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24854 = NOVALUE;
    // SubProg keyfind pc: 1567 op: RIGHT_BRACE_2 (85)
    Ref(_24855);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47457;
    ((intptr_t *)_2)[2] = _24855;
    _24856 = MAKE_SEQ(_1);
    _24855 = NOVALUE;
    // SubProg keyfind pc: 1571 op: PREPEND (57)
    RefDS(_24856);
    Prepend(&_54include_warnings_47444, _54include_warnings_47444, _24856);
    DeRefDS(_24856);
    _24856 = NOVALUE;
    // SubProg keyfind pc: 1575 op: STARTLINE (58)

    /** symtab.e:1034	ifdef STDDEBUG then*/
    // SubProg keyfind pc: 1577 op: STARTLINE (58)

    /** symtab.e:1040					symbol_resolution_warning = GetMsgText(233,0,*/
    // SubProg keyfind pc: 1579 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1581 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _24858 = (object)*(((s1_ptr)_2)->base + _scanning_file_47457);
    // SubProg keyfind pc: 1585 op: PROC (27)
    Ref(_24858);
    _24859 = _54name_ext(_24858);
    _24858 = NOVALUE;
    // SubProg keyfind pc: 1589 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1591 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1593 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1595 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1597 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_gtok_47473);
    _24860 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1601 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!IS_ATOM_INT(_24860)){
        _24861 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24860)->dbl));
    }
    else{
        _24861 = (object)*(((s1_ptr)_2)->base + _24860);
    }
    // SubProg keyfind pc: 1605 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1607 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24861);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24862 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24862 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24861 = NOVALUE;
    // SubProg keyfind pc: 1611 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    if (!IS_ATOM_INT(_24862)){
        _24863 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24862)->dbl));
    }
    else{
        _24863 = (object)*(((s1_ptr)_2)->base + _24862);
    }
    // SubProg keyfind pc: 1615 op: PROC (27)
    Ref(_24863);
    _24864 = _54name_ext(_24863);
    _24863 = NOVALUE;
    // SubProg keyfind pc: 1619 op: RIGHT_BRACE_N (31)
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24859;
    ((intptr_t*)_2)[2] = _36line_number_16437;
    RefDS(_word_47455);
    ((intptr_t*)_2)[3] = _word_47455;
    ((intptr_t*)_2)[4] = _24864;
    _24865 = MAKE_SEQ(_1);
    _24864 = NOVALUE;
    _24859 = NOVALUE;
    // SubProg keyfind pc: 1626 op: PROC (27)
    _0 = _42GetMsgText(233, 0, _24865);
    DeRef(_36symbol_resolution_warning_16537);
    _36symbol_resolution_warning_16537 = _0;
    _24865 = NOVALUE;
    // SubProg keyfind pc: 1632 op: SEQUENCE_CHECK (97)
    // SubProg keyfind pc: 1634 op: NOP1 (159)
L34: // addr: 1635 pc: 1634 sub: 47453 op: 159
    // SubProg keyfind pc: 1635 op: STARTLINE (58)

    /** symtab.e:1047			return gtok*/
    // SubProg keyfind pc: 1637 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var tok_47472
    DeRef(_tok_47472);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    _24847 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24853 = NOVALUE;
    _24747 = NOVALUE;
    _24814 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24841);
    _24841 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    _24860 = NOVALUE;
    _24812 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    DeRef(_24845);
    _24845 = NOVALUE;
    _24862 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    DeRef(_24825);
    _24825 = NOVALUE;
    _24773 = NOVALUE;
    return _gtok_47473;
    // SubProg keyfind pc: 1641 op: NOP1 (159)
L32: // addr: 1642 pc: 1641 sub: 47453 op: 159
    // SubProg keyfind pc: 1642 op: STARTLINE (58)

    /** symtab.e:1051		if length(dup_globals) = 0 then*/
    // SubProg keyfind pc: 1644 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1646 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24867 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24867 = 1;
    }
    // SubProg keyfind pc: 1649 op: EQUALS_IFW_I (121)
    if (_24867 != 0)
    goto L35; // [1649] 1723
    // SubProg keyfind pc: 1653 op: STARTLINE (58)

    /** symtab.e:1052			defined = SC_UNDEFINED*/
    // SubProg keyfind pc: 1655 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1657 op: ASSIGN (18)
    _defined_47466 = 9;
    // SubProg keyfind pc: 1660 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1662 op: STARTLINE (58)

    /** symtab.e:1054			if fwd_line_number then*/
    // SubProg keyfind pc: 1664 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1666 op: IF (20)
    if (_36fwd_line_number_16438 == 0)
    {
        goto L36; // [1666] 1695
    }
    else{
    }
    // SubProg keyfind pc: 1669 op: STARTLINE (58)

    /** symtab.e:1055				last_ForwardLine     = ForwardLine*/
    // SubProg keyfind pc: 1671 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1673 op: ASSIGN (18)
    Ref(_50ForwardLine_48708);
    DeRef(_50last_ForwardLine_48710);
    _50last_ForwardLine_48710 = _50ForwardLine_48708;
    // SubProg keyfind pc: 1676 op: STARTLINE (58)

    /** symtab.e:1056				last_forward_bp      = forward_bp*/
    // SubProg keyfind pc: 1678 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1680 op: ASSIGN (18)
    _50last_forward_bp_48714 = _50forward_bp_48712;
    // SubProg keyfind pc: 1683 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1685 op: STARTLINE (58)

    /** symtab.e:1057				last_fwd_line_number = fwd_line_number*/
    // SubProg keyfind pc: 1687 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1689 op: ASSIGN (18)
    _36last_fwd_line_number_16440 = _36fwd_line_number_16438;
    // SubProg keyfind pc: 1692 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1694 op: NOP1 (159)
L36: // addr: 1695 pc: 1694 sub: 47453 op: 159
    // SubProg keyfind pc: 1695 op: STARTLINE (58)

    /** symtab.e:1060			ForwardLine = ThisLine*/
    // SubProg keyfind pc: 1697 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1699 op: ASSIGN (18)
    Ref(_50ThisLine_48707);
    DeRef(_50ForwardLine_48708);
    _50ForwardLine_48708 = _50ThisLine_48707;
    // SubProg keyfind pc: 1702 op: STARTLINE (58)

    /** symtab.e:1061			forward_bp = bp*/
    // SubProg keyfind pc: 1704 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1706 op: ASSIGN (18)
    _50forward_bp_48712 = _50bp_48711;
    // SubProg keyfind pc: 1709 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1711 op: STARTLINE (58)

    /** symtab.e:1062			fwd_line_number = line_number*/
    // SubProg keyfind pc: 1713 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1715 op: ASSIGN (18)
    _36fwd_line_number_16438 = _36line_number_16437;
    // SubProg keyfind pc: 1718 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1720 op: ELSE (23)
    goto L37; // [1720] 1766
    // SubProg keyfind pc: 1722 op: NOP1 (159)
L35: // addr: 1723 pc: 1722 sub: 47453 op: 159
    // SubProg keyfind pc: 1723 op: STARTLINE (58)

    /** symtab.e:1064		elsif length(dup_globals) then*/
    // SubProg keyfind pc: 1725 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1727 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_globals_47441)){
            _24869 = SEQ_PTR(_54dup_globals_47441)->length;
    }
    else {
        _24869 = 1;
    }
    // SubProg keyfind pc: 1730 op: IF (20)
    if (_24869 == 0)
    {
        _24869 = NOVALUE;
        goto L38; // [1730] 1745
    }
    else{
        _24869 = NOVALUE;
    }
    // SubProg keyfind pc: 1733 op: STARTLINE (58)

    /** symtab.e:1065			defined = SC_MULTIPLY_DEFINED*/
    // SubProg keyfind pc: 1735 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1737 op: ASSIGN (18)
    _defined_47466 = 10;
    // SubProg keyfind pc: 1740 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1742 op: ELSE (23)
    goto L37; // [1742] 1766
    // SubProg keyfind pc: 1744 op: NOP1 (159)
L38: // addr: 1745 pc: 1744 sub: 47453 op: 159
    // SubProg keyfind pc: 1745 op: STARTLINE (58)

    /** symtab.e:1066		elsif length(dup_overrides) then*/
    // SubProg keyfind pc: 1747 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1749 op: LENGTH (42)
    if (IS_SEQUENCE(_54dup_overrides_47442)){
            _24870 = SEQ_PTR(_54dup_overrides_47442)->length;
    }
    else {
        _24870 = 1;
    }
    // SubProg keyfind pc: 1752 op: IF (20)
    if (_24870 == 0)
    {
        _24870 = NOVALUE;
        goto L39; // [1752] 1765
    }
    else{
        _24870 = NOVALUE;
    }
    // SubProg keyfind pc: 1755 op: STARTLINE (58)

    /** symtab.e:1067			defined = SC_OVERRIDE*/
    // SubProg keyfind pc: 1757 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1759 op: ASSIGN (18)
    _defined_47466 = 12;
    // SubProg keyfind pc: 1762 op: INTEGER_CHECK (96)
    // SubProg keyfind pc: 1764 op: NOP1 (159)
L39: // addr: 1765 pc: 1764 sub: 47453 op: 159
    // SubProg keyfind pc: 1765 op: NOP1 (159)
L37: // addr: 1766 pc: 1765 sub: 47453 op: 159
    // SubProg keyfind pc: 1766 op: STARTLINE (58)

    /** symtab.e:1070		if No_new_entry then*/
    // SubProg keyfind pc: 1768 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1770 op: IF (20)
    if (_54No_new_entry_47452 == 0)
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
    RefDS(_word_47455);
    ((intptr_t*)_2)[2] = _word_47455;
    ((intptr_t*)_2)[3] = _defined_47466;
    RefDS(_54dup_globals_47441);
    ((intptr_t*)_2)[4] = _54dup_globals_47441;
    _24871 = MAKE_SEQ(_1);
    // SubProg keyfind pc: 1788 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var tok_47472
    DeRef(_tok_47472);

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    _24847 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24853 = NOVALUE;
    _24747 = NOVALUE;
    _24814 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24841);
    _24841 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    _24860 = NOVALUE;
    _24812 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    DeRef(_24845);
    _24845 = NOVALUE;
    _24862 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    DeRef(_24825);
    _24825 = NOVALUE;
    _24773 = NOVALUE;
    return _24871;
    // SubProg keyfind pc: 1792 op: NOP1 (159)
L3A: // addr: 1793 pc: 1792 sub: 47453 op: 159
    // SubProg keyfind pc: 1793 op: STARTLINE (58)

    /** symtab.e:1074		tok = {VARIABLE, NewEntry(word, 0, defined,*/
    // SubProg keyfind pc: 1795 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1797 op: PRIVATE_INIT_CHECK (30)
    // SubProg keyfind pc: 1799 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1801 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1803 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _24872 = (object)*(((s1_ptr)_2)->base + _hashval_47461);
    // SubProg keyfind pc: 1807 op: PROC (27)
    RefDS(_word_47455);
    Ref(_24872);
    _24873 = _54NewEntry(_word_47455, 0, _defined_47466, -100, _hashval_47461, _24872, 0);
    _24872 = NOVALUE;
    // SubProg keyfind pc: 1817 op: RIGHT_BRACE_2 (85)
    DeRef(_tok_47472);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _24873;
    _tok_47472 = MAKE_SEQ(_1);
    _24873 = NOVALUE;
    // SubProg keyfind pc: 1821 op: STARTLINE (58)

    /** symtab.e:1076		buckets[hashval] = tok[T_SYM]*/
    // SubProg keyfind pc: 1823 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1825 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1827 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47472);
    _24875 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1831 op: ASSIGN_SUBS (16)
    Ref(_24875);
    _2 = (object)SEQ_PTR(_54buckets_46251);
    _2 = (object)(((s1_ptr)_2)->base + _hashval_47461);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24875;
    if( _1 != _24875 ){
        DeRef(_1);
    }
    _24875 = NOVALUE;
    // SubProg keyfind pc: 1835 op: STARTLINE (58)

    /** symtab.e:1078		if file_no != -1 then*/
    // SubProg keyfind pc: 1837 op: NOTEQ_IFW_I (122)
    if (_file_no_47456 == -1)
    goto L3B; // [1837] 1863
    // SubProg keyfind pc: 1841 op: STARTLINE (58)

    /** symtab.e:1079			SymTab[tok[T_SYM]][S_FILE_NO] = file_no*/
    // SubProg keyfind pc: 1843 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1845 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1847 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_tok_47472);
    _24877 = (object)*(((s1_ptr)_2)->base + 2);
    // SubProg keyfind pc: 1851 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_24877))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24877)->dbl));
    else
    _3 = (object)(_24877 + ((s1_ptr)_2)->base);
    // SubProg keyfind pc: 1856 op: GLOBAL_INIT_CHECK (109)
    // SubProg keyfind pc: 1858 op: PASSIGN_SUBS (162)
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
    *(intptr_t *)_2 = _file_no_47456;
    DeRef(_1);
    _24878 = NOVALUE;
    // SubProg keyfind pc: 1862 op: NOP1 (159)
L3B: // addr: 1863 pc: 1862 sub: 47453 op: 159
    // SubProg keyfind pc: 1863 op: STARTLINE (58)

    /** symtab.e:1081		return tok  -- no ref on newly declared symbol*/
    // SubProg keyfind pc: 1865 op: RETURNF (28)

// Exiting block BLOCK: keyfind

// block var word_47455
    DeRefDS(_word_47455);

// block var file_no_47456

// block var scanning_file_47457

// block var namespace_ok_47460

// block var hashval_47461

// block var msg_47463
    DeRef(_msg_47463);

// block var b_name_47464
    DeRef(_b_name_47464);

// block var scope_47465

// block var defined_47466

// block var ix_47467

// block var st_ptr_47469

// block var st_builtin_47470

// block var gtok_47473
    DeRef(_gtok_47473);

// block var any_symbol_47476
    DeRef(_24757);
    _24757 = NOVALUE;
    _24736 = NOVALUE;
    _24847 = NOVALUE;
    DeRef(_24743);
    _24743 = NOVALUE;
    _24853 = NOVALUE;
    _24747 = NOVALUE;
    _24814 = NOVALUE;
    _24877 = NOVALUE;
    DeRef(_24749);
    _24749 = NOVALUE;
    DeRef(_24871);
    _24871 = NOVALUE;
    _24716 = NOVALUE;
    DeRef(_24841);
    _24841 = NOVALUE;
    DeRef(_24741);
    _24741 = NOVALUE;
    DeRef(_24692);
    _24692 = NOVALUE;
    _24755 = NOVALUE;
    _24720 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24702);
    _24702 = NOVALUE;
    DeRef(_24751);
    _24751 = NOVALUE;
    _24860 = NOVALUE;
    _24812 = NOVALUE;
    DeRef(_24776);
    _24776 = NOVALUE;
    DeRef(_24845);
    _24845 = NOVALUE;
    _24862 = NOVALUE;
    _24729 = NOVALUE;
    _24721 = NOVALUE;
    _24761 = NOVALUE;
    DeRef(_24825);
    _24825 = NOVALUE;
    _24773 = NOVALUE;
    return _tok_47472;
    // SubProg keyfind pc: 1869 op: BADRETURNF (43)
    ;
}


void _54Hide(object _s_47865)
{
    object _prev_47867 = NOVALUE;
    object _p_47868 = NOVALUE;
// skipping _24899  name type: 0
    object _24898 = NOVALUE; // 47904 24898
    object _24897 = NOVALUE; // 47902 24897
    object _24896 = NOVALUE; // 47900 24896
// skipping _24895  name type: 0
    object _24894 = NOVALUE; // 47896 24894
    object _24893 = NOVALUE; // 47893 24893
    object _24892 = NOVALUE; // 47891 24892
    object _24891 = NOVALUE; // 47889 24891
    object _24890 = NOVALUE; // 47887 24890
// skipping _24889  name type: 0
// skipping _24888  name type: 0
// skipping _24887  name type: 0
    object _24886 = NOVALUE; // 47879 24886
    object _24885 = NOVALUE; // 47877 24885
    object _24884 = NOVALUE; // 47876 24884
    object _24883 = NOVALUE; // 47875 24883
// skipping _24882  name type: 0
    object _24881 = NOVALUE; // 47872 24881
    object _24880 = NOVALUE; // 47870 24880
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Hide pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47865)) {
        _1 = (object)(DBL_PTR(_s_47865)->dbl);
        DeRefDS(_s_47865);
        _s_47865 = _1;
    }
    // SubProg Hide pc: 3 op: STARTLINE (58)

    /** symtab.e:1090		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Hide pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24880 = (object)*(((s1_ptr)_2)->base + _s_47865);
    // SubProg Hide pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24880);
    _24881 = (object)*(((s1_ptr)_2)->base + 11);
    _24880 = NOVALUE;
    // SubProg Hide pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    if (!IS_ATOM_INT(_24881)){
        _p_47868 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24881)->dbl));
    }
    else{
        _p_47868 = (object)*(((s1_ptr)_2)->base + _24881);
    }
    if (!IS_ATOM_INT(_p_47868)){
        _p_47868 = (object)DBL_PTR(_p_47868)->dbl;
    }
    // SubProg Hide pc: 25 op: STARTLINE (58)

    /** symtab.e:1091		prev = 0*/
    // SubProg Hide pc: 27 op: ASSIGN (18)
    _prev_47867 = 0;
    // SubProg Hide pc: 30 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 32 op: STARTLINE (58)

    /** symtab.e:1093		while p != s and p != 0 do*/
    // SubProg Hide pc: 34 op: NOP2 (110)
    // SubProg Hide pc: 36 op: NOPWHILE (158)
L1: // addr: 37 pc: 36 sub: 47862 op: 158
    // SubProg Hide pc: 37 op: NOTEQ (4)
    _24883 = (_p_47868 != _s_47865);
    // SubProg Hide pc: 41 op: SC1_AND_IF (146)
    if (_24883 == 0) {
        goto L2; // [41] 81
    }
    // SubProg Hide pc: 45 op: NOTEQ (4)
    _24885 = (_p_47868 != 0);
    // SubProg Hide pc: 49 op: NOP1 (159)
    // SubProg Hide pc: 50 op: WHILE (47)
    if (_24885 == 0)
    {
        DeRef(_24885);
        _24885 = NOVALUE;
        goto L2; // [50] 81
    }
    else{
        DeRef(_24885);
        _24885 = NOVALUE;
    }
    // SubProg Hide pc: 53 op: STARTLINE (58)

    /** symtab.e:1094			prev = p*/
    // SubProg Hide pc: 55 op: ASSIGN (18)
    _prev_47867 = _p_47868;
    // SubProg Hide pc: 58 op: INTEGER_CHECK (96)
    // SubProg Hide pc: 60 op: STARTLINE (58)

    /** symtab.e:1095			p = SymTab[p][S_SAMEHASH]*/
    // SubProg Hide pc: 62 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 64 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24886 = (object)*(((s1_ptr)_2)->base + _p_47868);
    // SubProg Hide pc: 68 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 70 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24886);
    _p_47868 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_p_47868)){
        _p_47868 = (object)DBL_PTR(_p_47868)->dbl;
    }
    _24886 = NOVALUE;
    // SubProg Hide pc: 76 op: STARTLINE (58)

    /** symtab.e:1096		end while*/
    // SubProg Hide pc: 78 op: ENDWHILE (22)
    goto L1; // [78] 37
    // SubProg Hide pc: 80 op: NOP1 (159)
L2: // addr: 81 pc: 80 sub: 47862 op: 159
    // SubProg Hide pc: 81 op: STARTLINE (58)

    /** symtab.e:1098		if p = 0 then*/
    // SubProg Hide pc: 83 op: EQUALS_IFW (104)
    if (_p_47868 != 0)
    goto L3; // [83] 93
    // SubProg Hide pc: 87 op: STARTLINE (58)

    /** symtab.e:1099			return -- already hidden*/
    // SubProg Hide pc: 89 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Hide

// block var s_47865

// block var prev_47867

// block var p_47868
    _24881 = NOVALUE;
    DeRef(_24883);
    _24883 = NOVALUE;
    return;
    // SubProg Hide pc: 92 op: NOP1 (159)
L3: // addr: 93 pc: 92 sub: 47862 op: 159
    // SubProg Hide pc: 93 op: STARTLINE (58)

    /** symtab.e:1101		if prev = 0 then*/
    // SubProg Hide pc: 95 op: EQUALS_IFW (104)
    if (_prev_47867 != 0)
    goto L4; // [95] 134
    // SubProg Hide pc: 99 op: STARTLINE (58)

    /** symtab.e:1102			buckets[SymTab[s][S_HASHVAL]] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 101 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 103 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 105 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24890 = (object)*(((s1_ptr)_2)->base + _s_47865);
    // SubProg Hide pc: 109 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 111 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24890);
    _24891 = (object)*(((s1_ptr)_2)->base + 11);
    _24890 = NOVALUE;
    // SubProg Hide pc: 115 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 117 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24892 = (object)*(((s1_ptr)_2)->base + _s_47865);
    // SubProg Hide pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 123 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24892);
    _24893 = (object)*(((s1_ptr)_2)->base + 9);
    _24892 = NOVALUE;
    // SubProg Hide pc: 127 op: ASSIGN_SUBS (16)
    Ref(_24893);
    _2 = (object)SEQ_PTR(_54buckets_46251);
    if (!IS_ATOM_INT(_24891))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24891)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24891);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24893;
    if( _1 != _24893 ){
        DeRef(_1);
    }
    _24893 = NOVALUE;
    // SubProg Hide pc: 131 op: ELSE (23)
    goto L5; // [131] 162
    // SubProg Hide pc: 133 op: NOP1 (159)
L4: // addr: 134 pc: 133 sub: 47862 op: 159
    // SubProg Hide pc: 134 op: STARTLINE (58)

    /** symtab.e:1104			SymTab[prev][S_SAMEHASH] = SymTab[s][S_SAMEHASH]*/
    // SubProg Hide pc: 136 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 138 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_47867 + ((s1_ptr)_2)->base);
    // SubProg Hide pc: 143 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 145 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 147 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24896 = (object)*(((s1_ptr)_2)->base + _s_47865);
    // SubProg Hide pc: 151 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 153 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24896);
    _24897 = (object)*(((s1_ptr)_2)->base + 9);
    _24896 = NOVALUE;
    // SubProg Hide pc: 157 op: PASSIGN_SUBS (162)
    Ref(_24897);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24897;
    if( _1 != _24897 ){
        DeRef(_1);
    }
    _24897 = NOVALUE;
    _24894 = NOVALUE;
    // SubProg Hide pc: 161 op: NOP1 (159)
L5: // addr: 162 pc: 161 sub: 47862 op: 159
    // SubProg Hide pc: 162 op: STARTLINE (58)

    /** symtab.e:1106		SymTab[s][S_SAMEHASH] = 0*/
    // SubProg Hide pc: 164 op: GLOBAL_INIT_CHECK (109)
    // SubProg Hide pc: 166 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47865 + ((s1_ptr)_2)->base);
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
    _24898 = NOVALUE;
    // SubProg Hide pc: 177 op: STARTLINE (58)

    /** symtab.e:1107	end procedure*/
    // SubProg Hide pc: 179 op: RETURNP (29)

// Exiting block BLOCK: Hide

// block var s_47865

// block var prev_47867

// block var p_47868
    _24881 = NOVALUE;
    _24891 = NOVALUE;
    DeRef(_24883);
    _24883 = NOVALUE;
    return;
    // SubProg Hide pc: 182 op: BADRETURNF (43)
    ;
}


void _54Show(object _s_47910)
{
    object _p_47912 = NOVALUE;
    object _24910 = NOVALUE; // 47932 24910
    object _24909 = NOVALUE; // 47930 24909
// skipping _24908  name type: 0
    object _24907 = NOVALUE; // 47926 24907
    object _24906 = NOVALUE; // 47924 24906
// skipping _24905  name type: 0
    object _24904 = NOVALUE; // 47922 24904
    object _24903 = NOVALUE; // 47920 24903
// skipping _24902  name type: 0
    object _24901 = NOVALUE; // 47916 24901
    object _24900 = NOVALUE; // 47914 24900
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg Show pc: 1 op: INTEGER_CHECK (96)
    // SubProg Show pc: 3 op: STARTLINE (58)

    /** symtab.e:1114		p = buckets[SymTab[s][S_HASHVAL]]*/
    // SubProg Show pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 7 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 9 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24900 = (object)*(((s1_ptr)_2)->base + _s_47910);
    // SubProg Show pc: 13 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 15 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24900);
    _24901 = (object)*(((s1_ptr)_2)->base + 11);
    _24900 = NOVALUE;
    // SubProg Show pc: 19 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    if (!IS_ATOM_INT(_24901)){
        _p_47912 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24901)->dbl));
    }
    else{
        _p_47912 = (object)*(((s1_ptr)_2)->base + _24901);
    }
    if (!IS_ATOM_INT(_p_47912)){
        _p_47912 = (object)DBL_PTR(_p_47912)->dbl;
    }
    // SubProg Show pc: 25 op: STARTLINE (58)

    /** symtab.e:1116		if SymTab[s][S_SAMEHASH] or p = s then*/
    // SubProg Show pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24903 = (object)*(((s1_ptr)_2)->base + _s_47910);
    // SubProg Show pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24903);
    _24904 = (object)*(((s1_ptr)_2)->base + 9);
    _24903 = NOVALUE;
    // SubProg Show pc: 39 op: SC1_OR_IF (147)
    if (IS_ATOM_INT(_24904)) {
        if (_24904 != 0) {
            goto L1; // [39] 52
        }
    }
    else {
        if (DBL_PTR(_24904)->dbl != 0.0) {
            goto L1; // [39] 52
        }
    }
    // SubProg Show pc: 43 op: EQUALS (3)
    _24906 = (_p_47912 == _s_47910);
    // SubProg Show pc: 47 op: NOP1 (159)
    // SubProg Show pc: 48 op: IF (20)
    if (_24906 == 0)
    {
        DeRef(_24906);
        _24906 = NOVALUE;
        goto L2; // [48] 58
    }
    else{
        DeRef(_24906);
        _24906 = NOVALUE;
    }
    // SubProg Show pc: 51 op: NOP1 (159)
L1: // addr: 52 pc: 51 sub: 47907 op: 159
    // SubProg Show pc: 52 op: STARTLINE (58)

    /** symtab.e:1118			return*/
    // SubProg Show pc: 54 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: Show

// block var s_47910

// block var p_47912
    _24901 = NOVALUE;
    _24904 = NOVALUE;
    return;
    // SubProg Show pc: 57 op: NOP1 (159)
L2: // addr: 58 pc: 57 sub: 47907 op: 159
    // SubProg Show pc: 58 op: STARTLINE (58)

    /** symtab.e:1121		SymTab[s][S_SAMEHASH] = p*/
    // SubProg Show pc: 60 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 62 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _37SymTab_15405 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47910 + ((s1_ptr)_2)->base);
    // SubProg Show pc: 67 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 69 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_47912;
    DeRef(_1);
    _24907 = NOVALUE;
    // SubProg Show pc: 73 op: STARTLINE (58)

    /** symtab.e:1122		buckets[SymTab[s][S_HASHVAL]] = s*/
    // SubProg Show pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 77 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 79 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24909 = (object)*(((s1_ptr)_2)->base + _s_47910);
    // SubProg Show pc: 83 op: GLOBAL_INIT_CHECK (109)
    // SubProg Show pc: 85 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24909);
    _24910 = (object)*(((s1_ptr)_2)->base + 11);
    _24909 = NOVALUE;
    // SubProg Show pc: 89 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_54buckets_46251);
    if (!IS_ATOM_INT(_24910))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24910)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24910);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_47910;
    DeRef(_1);
    // SubProg Show pc: 93 op: STARTLINE (58)

    /** symtab.e:1124	end procedure*/
    // SubProg Show pc: 95 op: RETURNP (29)

// Exiting block BLOCK: Show

// block var s_47910

// block var p_47912
    _24901 = NOVALUE;
    _24904 = NOVALUE;
    _24910 = NOVALUE;
    return;
    // SubProg Show pc: 98 op: BADRETURNF (43)
    ;
}


void _54hide_params(object _s_47936)
{
    object _param_47938 = NOVALUE;
// skipping _24914  name type: 0
    object _24913 = NOVALUE; // 47946 24913
    object _24912 = NOVALUE; // 47944 24912
    object _24911 = NOVALUE; // 47942 24911
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg hide_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1127		symtab_index param = s*/
    // SubProg hide_params pc: 5 op: ASSIGN (18)
    _param_47938 = _s_47936;
    // SubProg hide_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg hide_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1128		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg hide_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24911 = (object)*(((s1_ptr)_2)->base + _s_47936);
    // SubProg hide_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg hide_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24911);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _24912 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _24912 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _24911 = NOVALUE;
    // SubProg hide_params pc: 24 op: FOR (21)
    {
        object _i_47940;
        _i_47940 = 1;
L1: // addr: 31 pc: 24 sub: 47933 op: 21
        if (binary_op_a(GREATER, _i_47940, _24912)){
            goto L2; // [24] 59
        }
        // SubProg hide_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1129			param = SymTab[s][S_NEXT]*/
        // SubProg hide_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24913 = (object)*(((s1_ptr)_2)->base + _s_47936);
        // SubProg hide_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg hide_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24913);
        _param_47938 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47938)){
            _param_47938 = (object)DBL_PTR(_param_47938)->dbl;
        }
        _24913 = NOVALUE;
        // SubProg hide_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1130			Hide( param )*/
        // SubProg hide_params pc: 49 op: PROC (27)
        _54Hide(_param_47938);
        // SubProg hide_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1131		end for*/
        // SubProg hide_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_47940;
        if (IS_ATOM_INT(_i_47940)) {
            _i_47940 = _i_47940 + 1;
            if ((object)((uintptr_t)_i_47940 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47940 = NewDouble((eudouble)_i_47940);
            }
        }
        else {
            _i_47940 = binary_op_a(PLUS, _i_47940, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 47933 op: 54
        ;
        DeRef(_i_47940);
    }
    // SubProg hide_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1132	end procedure*/
    // SubProg hide_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: hide_params

// block var s_47936

// block var param_47938
    _24912 = NOVALUE;
    return;
    // SubProg hide_params pc: 64 op: BADRETURNF (43)
    ;
}


void _54show_params(object _s_47952)
{
    object _param_47954 = NOVALUE;
// skipping _24918  name type: 0
    object _24917 = NOVALUE; // 47962 24917
    object _24916 = NOVALUE; // 47960 24916
    object _24915 = NOVALUE; // 47958 24915
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg show_params pc: 1 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 3 op: STARTLINE (58)

    /** symtab.e:1135		symtab_index param = s*/
    // SubProg show_params pc: 5 op: ASSIGN (18)
    _param_47954 = _s_47952;
    // SubProg show_params pc: 8 op: INTEGER_CHECK (96)
    // SubProg show_params pc: 10 op: STARTLINE (58)

    /** symtab.e:1136		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    // SubProg show_params pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 14 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24915 = (object)*(((s1_ptr)_2)->base + _s_47952);
    // SubProg show_params pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg show_params pc: 20 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24915);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _24916 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _24916 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _24915 = NOVALUE;
    // SubProg show_params pc: 24 op: FOR (21)
    {
        object _i_47956;
        _i_47956 = 1;
L1: // addr: 31 pc: 24 sub: 47949 op: 21
        if (binary_op_a(GREATER, _i_47956, _24916)){
            goto L2; // [24] 59
        }
        // SubProg show_params pc: 31 op: STARTLINE (58)

        /** symtab.e:1137			param = SymTab[s][S_NEXT]*/
        // SubProg show_params pc: 33 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 35 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24917 = (object)*(((s1_ptr)_2)->base + _s_47952);
        // SubProg show_params pc: 39 op: GLOBAL_INIT_CHECK (109)
        // SubProg show_params pc: 41 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24917);
        _param_47954 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47954)){
            _param_47954 = (object)DBL_PTR(_param_47954)->dbl;
        }
        _24917 = NOVALUE;
        // SubProg show_params pc: 47 op: STARTLINE (58)

        /** symtab.e:1138			Show( param )*/
        // SubProg show_params pc: 49 op: PROC (27)
        _54Show(_param_47954);
        // SubProg show_params pc: 52 op: STARTLINE (58)

        /** symtab.e:1139		end for*/
        // SubProg show_params pc: 54 op: ENDFOR_INT_UP1 (54)
        _0 = _i_47956;
        if (IS_ATOM_INT(_i_47956)) {
            _i_47956 = _i_47956 + 1;
            if ((object)((uintptr_t)_i_47956 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47956 = NewDouble((eudouble)_i_47956);
            }
        }
        else {
            _i_47956 = binary_op_a(PLUS, _i_47956, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: // addr: 59 pc: 54 sub: 47949 op: 54
        ;
        DeRef(_i_47956);
    }
    // SubProg show_params pc: 59 op: STARTLINE (58)

    /** symtab.e:1140	end procedure*/
    // SubProg show_params pc: 61 op: RETURNP (29)

// Exiting block BLOCK: show_params

// block var s_47952

// block var param_47954
    _24916 = NOVALUE;
    return;
    // SubProg show_params pc: 64 op: BADRETURNF (43)
    ;
}


void _54LintCheck(object _s_47968)
{
    object _warn_level_47969 = NOVALUE;
    object _file_47970 = NOVALUE;
    object _vscope_47971 = NOVALUE;
    object _vname_47972 = NOVALUE;
    object _vusage_47973 = NOVALUE;
    object _24978 = NOVALUE; // 48135 24978
    object _24977 = NOVALUE; // 48134 24977
    object _24976 = NOVALUE; // 48132 24976
    object _24975 = NOVALUE; // 48126 24975
    object _24974 = NOVALUE; // 48125 24974
    object _24973 = NOVALUE; // 48123 24973
// skipping _24972  name type: 0
    object _24971 = NOVALUE; // 48113 24971
    object _24970 = NOVALUE; // 48112 24970
    object _24969 = NOVALUE; // 48110 24969
    object _24968 = NOVALUE; // 48104 24968
    object _24967 = NOVALUE; // 48103 24967
    object _24966 = NOVALUE; // 48101 24966
// skipping _24965  name type: 0
// skipping _24964  name type: 0
    object _24963 = NOVALUE; // 48091 24963
    object _24962 = NOVALUE; // 48089 24962
    object _24961 = NOVALUE; // 48086 24961
    object _24960 = NOVALUE; // 48084 24960
    object _24959 = NOVALUE; // 48080 24959
    object _24958 = NOVALUE; // 48076 24958
// skipping _24957  name type: 0
    object _24956 = NOVALUE; // 48071 24956
// skipping _24955  name type: 0
    object _24954 = NOVALUE; // 48066 24954
    object _24953 = NOVALUE; // 48064 24953
// skipping _24952  name type: 0
    object _24951 = NOVALUE; // 48060 24951
    object _24950 = NOVALUE; // 48058 24950
// skipping _24949  name type: 0
    object _24948 = NOVALUE; // 48050 24948
    object _24947 = NOVALUE; // 48049 24947
    object _24946 = NOVALUE; // 48047 24946
    object _24945 = NOVALUE; // 48041 24945
// skipping _24944  name type: 0
    object _24943 = NOVALUE; // 48037 24943
    object _24942 = NOVALUE; // 48035 24942
// skipping _24941  name type: 0
// skipping _24940  name type: 0
// skipping _24939  name type: 0
    object _24938 = NOVALUE; // 48025 24938
// skipping _24937  name type: 0
// skipping _24936  name type: 0
    object _24935 = NOVALUE; // 48016 24935
    object _24934 = NOVALUE; // 48014 24934
    object _24933 = NOVALUE; // 48011 24933
    object _24932 = NOVALUE; // 48009 24932
// skipping _24931  name type: 0
// skipping _24930  name type: 0
    object _24929 = NOVALUE; // 47999 24929
    object _24928 = NOVALUE; // 47997 24928
// skipping _24927  name type: 0
// skipping _24924  name type: 0
    object _24923 = NOVALUE; // 47983 24923
// skipping _24922  name type: 0
    object _24921 = NOVALUE; // 47979 24921
// skipping _24920  name type: 0
    object _24919 = NOVALUE; // 47975 24919
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg LintCheck pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_s_47968)) {
        _1 = (object)(DBL_PTR(_s_47968)->dbl);
        DeRefDS(_s_47968);
        _s_47968 = _1;
    }
    // SubProg LintCheck pc: 3 op: STARTLINE (58)

    /** symtab.e:1150		vusage = SymTab[s][S_USAGE]*/
    // SubProg LintCheck pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24919 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24919);
    _vusage_47973 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_vusage_47973)){
        _vusage_47973 = (object)DBL_PTR(_vusage_47973)->dbl;
    }
    _24919 = NOVALUE;
    // SubProg LintCheck pc: 19 op: STARTLINE (58)

    /** symtab.e:1151		vscope = SymTab[s][S_SCOPE]*/
    // SubProg LintCheck pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 23 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24921 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24921);
    _vscope_47971 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_vscope_47971)){
        _vscope_47971 = (object)DBL_PTR(_vscope_47971)->dbl;
    }
    _24921 = NOVALUE;
    // SubProg LintCheck pc: 35 op: STARTLINE (58)

    /** symtab.e:1152		vname = SymTab[s][S_NAME]*/
    // SubProg LintCheck pc: 37 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 39 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24923 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 43 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 45 op: RHS_SUBS_CHECK (92)
    DeRef(_vname_47972);
    _2 = (object)SEQ_PTR(_24923);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _vname_47972 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _vname_47972 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    Ref(_vname_47972);
    _24923 = NOVALUE;
    // SubProg LintCheck pc: 49 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 51 op: STARTLINE (58)

    /** symtab.e:1154		switch vusage do*/
    // SubProg LintCheck pc: 53 op: SWITCH_I (193)
    _0 = _vusage_47973;
    switch ( _0 ){ 
        // SubProg LintCheck pc: 58 op: STARTLINE (58)

        /** symtab.e:1156			case U_UNUSED then*/
        // SubProg LintCheck pc: 60 op: CASE (186)
        case 0:
        // SubProg LintCheck pc: 62 op: STARTLINE (58)

        /** symtab.e:1157				warn_level = 1*/
        // SubProg LintCheck pc: 64 op: ASSIGN_I (113)
        _warn_level_47969 = 1;
        // SubProg LintCheck pc: 67 op: ELSE (23)
        goto L1; // [67] 193
        // SubProg LintCheck pc: 69 op: STARTLINE (58)

        /** symtab.e:1159			case U_WRITTEN then -- Set but never read*/
        // SubProg LintCheck pc: 71 op: CASE (186)
        case 2:
        // SubProg LintCheck pc: 73 op: STARTLINE (58)

        /** symtab.e:1160				warn_level = 2*/
        // SubProg LintCheck pc: 75 op: ASSIGN_I (113)
        _warn_level_47969 = 2;
        // SubProg LintCheck pc: 78 op: STARTLINE (58)

        /** symtab.e:1162				if vscope > SC_LOCAL then*/
        // SubProg LintCheck pc: 80 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 82 op: GREATER_IFW (107)
        if (_vscope_47971 <= 5)
        goto L2; // [82] 94
        // SubProg LintCheck pc: 86 op: STARTLINE (58)

        /** symtab.e:1164					warn_level = 0 */
        // SubProg LintCheck pc: 88 op: ASSIGN_I (113)
        _warn_level_47969 = 0;
        // SubProg LintCheck pc: 91 op: ELSE (23)
        goto L1; // [91] 193
        // SubProg LintCheck pc: 93 op: NOP1 (159)
L2: // addr: 94 pc: 93 sub: 47965 op: 159
        // SubProg LintCheck pc: 94 op: STARTLINE (58)

        /** symtab.e:1166				elsif SymTab[s][S_MODE] = M_CONSTANT then*/
        // SubProg LintCheck pc: 96 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 98 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24928 = (object)*(((s1_ptr)_2)->base + _s_47968);
        // SubProg LintCheck pc: 102 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 104 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24928);
        _24929 = (object)*(((s1_ptr)_2)->base + 3);
        _24928 = NOVALUE;
        // SubProg LintCheck pc: 108 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 110 op: EQUALS_IFW (104)
        if (binary_op_a(NOTEQ, _24929, 2)){
            _24929 = NOVALUE;
            goto L1; // [110] 193
        }
        _24929 = NOVALUE;
        // SubProg LintCheck pc: 114 op: STARTLINE (58)

        /** symtab.e:1167					if not Strict_is_on then*/
        // SubProg LintCheck pc: 116 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 118 op: NOT_IFW (108)
        if (_36Strict_is_on_16501 != 0)
        goto L1; // [118] 193
        // SubProg LintCheck pc: 121 op: STARTLINE (58)

        /** symtab.e:1170						warn_level = 0 */
        // SubProg LintCheck pc: 123 op: ASSIGN_I (113)
        _warn_level_47969 = 0;
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
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24932 = (object)*(((s1_ptr)_2)->base + _s_47968);
        // SubProg LintCheck pc: 143 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 145 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24932);
        _24933 = (object)*(((s1_ptr)_2)->base + 16);
        _24932 = NOVALUE;
        // SubProg LintCheck pc: 149 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 151 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 153 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_37SymTab_15405);
        _24934 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
        // SubProg LintCheck pc: 157 op: GLOBAL_INIT_CHECK (109)
        // SubProg LintCheck pc: 159 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_24934);
        if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
            _24935 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
        }
        else{
            _24935 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
        }
        _24934 = NOVALUE;
        // SubProg LintCheck pc: 163 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _24933, _24935)){
            _24933 = NOVALUE;
            _24935 = NOVALUE;
            goto L3; // [163] 175
        }
        _24933 = NOVALUE;
        _24935 = NOVALUE;
        // SubProg LintCheck pc: 167 op: STARTLINE (58)

        /** symtab.e:1176			    	warn_level = 3*/
        // SubProg LintCheck pc: 169 op: ASSIGN_I (113)
        _warn_level_47969 = 3;
        // SubProg LintCheck pc: 172 op: ELSE (23)
        goto L1; // [172] 193
        // SubProg LintCheck pc: 174 op: NOP1 (159)
L3: // addr: 175 pc: 174 sub: 47965 op: 159
        // SubProg LintCheck pc: 175 op: STARTLINE (58)

        /** symtab.e:1179			    	warn_level = 0*/
        // SubProg LintCheck pc: 177 op: ASSIGN_I (113)
        _warn_level_47969 = 0;
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
        _warn_level_47969 = 0;
        // SubProg LintCheck pc: 192 op: NOPSWITCH (187)
    ;}L1: // addr: 193 pc: 192 sub: 47965 op: 187
    // SubProg LintCheck pc: 193 op: STARTLINE (58)

    /** symtab.e:1186		if warn_level = 0 then*/
    // SubProg LintCheck pc: 195 op: PRIVATE_INIT_CHECK (30)
    // SubProg LintCheck pc: 197 op: EQUALS_IFW_I (121)
    if (_warn_level_47969 != 0)
    goto L4; // [197] 207
    // SubProg LintCheck pc: 201 op: STARTLINE (58)

    /** symtab.e:1187			return*/
    // SubProg LintCheck pc: 203 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: LintCheck

// block var s_47968

// block var warn_level_47969

// block var file_47970
    DeRef(_file_47970);

// block var vscope_47971

// block var vname_47972
    DeRef(_vname_47972);

// block var vusage_47973
    return;
    // SubProg LintCheck pc: 206 op: NOP1 (159)
L4: // addr: 207 pc: 206 sub: 47965 op: 159
    // SubProg LintCheck pc: 207 op: STARTLINE (58)

    /** symtab.e:1191		file = abbreviate_path(known_files[current_file_no])*/
    // SubProg LintCheck pc: 209 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 211 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 213 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37known_files_15406);
    _24938 = (object)*(((s1_ptr)_2)->base + _36current_file_no_16436);
    // SubProg LintCheck pc: 217 op: PROC (27)
    Ref(_24938);
    RefDS(_21933);
    _0 = _file_47970;
    _file_47970 = _20abbreviate_path(_24938, _21933);
    DeRef(_0);
    _24938 = NOVALUE;
    // SubProg LintCheck pc: 222 op: SEQUENCE_CHECK (97)
    // SubProg LintCheck pc: 224 op: STARTLINE (58)

    /** symtab.e:1192		if warn_level = 3 then*/
    // SubProg LintCheck pc: 226 op: EQUALS_IFW_I (121)
    if (_warn_level_47969 != 3)
    goto L5; // [226] 308
    // SubProg LintCheck pc: 230 op: STARTLINE (58)

    /** symtab.e:1193			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 232 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 234 op: EQUALS_IFW (104)
    if (_vscope_47971 != 5)
    goto L6; // [234] 275
    // SubProg LintCheck pc: 238 op: STARTLINE (58)

    /** symtab.e:1194				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 240 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 242 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 244 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24942 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 248 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 250 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24942);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24943 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24943 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24942 = NOVALUE;
    // SubProg LintCheck pc: 254 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _36current_file_no_16436, _24943)){
        _24943 = NOVALUE;
        goto L7; // [254] 602
    }
    _24943 = NOVALUE;
    // SubProg LintCheck pc: 258 op: STARTLINE (58)

    /** symtab.e:1195					Warning(226, no_value_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 260 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 262 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47972);
    RefDS(_file_47970);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47970;
    ((intptr_t *)_2)[2] = _vname_47972;
    _24945 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 266 op: PROC (27)
    _50Warning(226, 32, _24945);
    _24945 = NOVALUE;
    // SubProg LintCheck pc: 271 op: NOP1 (159)
    // SubProg LintCheck pc: 272 op: ELSE (23)
    goto L7; // [272] 602
    // SubProg LintCheck pc: 274 op: NOP1 (159)
L6: // addr: 275 pc: 274 sub: 47965 op: 159
    // SubProg LintCheck pc: 275 op: STARTLINE (58)

    /** symtab.e:1198				Warning(227, no_value_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 277 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 279 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 281 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 283 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24946 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 287 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 289 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24946);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24947 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24947 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24946 = NOVALUE;
    // SubProg LintCheck pc: 293 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47970);
    ((intptr_t*)_2)[1] = _file_47970;
    RefDS(_vname_47972);
    ((intptr_t*)_2)[2] = _vname_47972;
    Ref(_24947);
    ((intptr_t*)_2)[3] = _24947;
    _24948 = MAKE_SEQ(_1);
    _24947 = NOVALUE;
    // SubProg LintCheck pc: 299 op: PROC (27)
    _50Warning(227, 32, _24948);
    _24948 = NOVALUE;
    // SubProg LintCheck pc: 304 op: NOP1 (159)
    // SubProg LintCheck pc: 305 op: ELSE (23)
    goto L7; // [305] 602
    // SubProg LintCheck pc: 307 op: NOP1 (159)
L5: // addr: 308 pc: 307 sub: 47965 op: 159
    // SubProg LintCheck pc: 308 op: STARTLINE (58)

    /** symtab.e:1201			if vscope = SC_LOCAL then*/
    // SubProg LintCheck pc: 310 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 312 op: EQUALS_IFW (104)
    if (_vscope_47971 != 5)
    goto L8; // [312] 412
    // SubProg LintCheck pc: 316 op: STARTLINE (58)

    /** symtab.e:1202				if current_file_no = SymTab[s][S_FILE_NO] then*/
    // SubProg LintCheck pc: 318 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 320 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 322 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24950 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 326 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 328 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24950);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24951 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24951 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24950 = NOVALUE;
    // SubProg LintCheck pc: 332 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _36current_file_no_16436, _24951)){
        _24951 = NOVALUE;
        goto L9; // [332] 601
    }
    _24951 = NOVALUE;
    // SubProg LintCheck pc: 336 op: STARTLINE (58)

    /** symtab.e:1203					if SymTab[s][S_MODE] = M_CONSTANT then*/
    // SubProg LintCheck pc: 338 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 340 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24953 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 344 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 346 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24953);
    _24954 = (object)*(((s1_ptr)_2)->base + 3);
    _24953 = NOVALUE;
    // SubProg LintCheck pc: 350 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 352 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24954, 2)){
        _24954 = NOVALUE;
        goto LA; // [352] 372
    }
    _24954 = NOVALUE;
    // SubProg LintCheck pc: 356 op: STARTLINE (58)

    /** symtab.e:1204						Warning(228, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 358 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 360 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47972);
    RefDS(_file_47970);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47970;
    ((intptr_t *)_2)[2] = _vname_47972;
    _24956 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 364 op: PROC (27)
    _50Warning(228, 16, _24956);
    _24956 = NOVALUE;
    // SubProg LintCheck pc: 369 op: ELSE (23)
    goto L9; // [369] 601
    // SubProg LintCheck pc: 371 op: NOP1 (159)
LA: // addr: 372 pc: 371 sub: 47965 op: 159
    // SubProg LintCheck pc: 372 op: STARTLINE (58)

    /** symtab.e:1206					elsif warn_level = 1 then*/
    // SubProg LintCheck pc: 374 op: EQUALS_IFW_I (121)
    if (_warn_level_47969 != 1)
    goto LB; // [374] 394
    // SubProg LintCheck pc: 378 op: STARTLINE (58)

    /** symtab.e:1207						Warning(229, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 380 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 382 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47972);
    RefDS(_file_47970);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47970;
    ((intptr_t *)_2)[2] = _vname_47972;
    _24958 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 386 op: PROC (27)
    _50Warning(229, 16, _24958);
    _24958 = NOVALUE;
    // SubProg LintCheck pc: 391 op: ELSE (23)
    goto L9; // [391] 601
    // SubProg LintCheck pc: 393 op: NOP1 (159)
LB: // addr: 394 pc: 393 sub: 47965 op: 159
    // SubProg LintCheck pc: 394 op: STARTLINE (58)

    /** symtab.e:1210						Warning(320, not_used_warning_flag, {file,  vname})*/
    // SubProg LintCheck pc: 396 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 398 op: RIGHT_BRACE_2 (85)
    RefDS(_vname_47972);
    RefDS(_file_47970);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47970;
    ((intptr_t *)_2)[2] = _vname_47972;
    _24959 = MAKE_SEQ(_1);
    // SubProg LintCheck pc: 402 op: PROC (27)
    _50Warning(320, 16, _24959);
    _24959 = NOVALUE;
    // SubProg LintCheck pc: 407 op: NOP1 (159)
    // SubProg LintCheck pc: 408 op: NOP1 (159)
    // SubProg LintCheck pc: 409 op: ELSE (23)
    goto L9; // [409] 601
    // SubProg LintCheck pc: 411 op: NOP1 (159)
L8: // addr: 412 pc: 411 sub: 47965 op: 159
    // SubProg LintCheck pc: 412 op: STARTLINE (58)

    /** symtab.e:1214				if SymTab[s][S_VARNUM] < SymTab[CurrentSub][S_NUM_ARGS] then*/
    // SubProg LintCheck pc: 414 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 416 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24960 = (object)*(((s1_ptr)_2)->base + _s_47968);
    // SubProg LintCheck pc: 420 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 422 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24960);
    _24961 = (object)*(((s1_ptr)_2)->base + 16);
    _24960 = NOVALUE;
    // SubProg LintCheck pc: 426 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 428 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 430 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24962 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 434 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 436 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24962);
    if (!IS_ATOM_INT(_36S_NUM_ARGS_16142)){
        _24963 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NUM_ARGS_16142)->dbl));
    }
    else{
        _24963 = (object)*(((s1_ptr)_2)->base + _36S_NUM_ARGS_16142);
    }
    _24962 = NOVALUE;
    // SubProg LintCheck pc: 440 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _24961, _24963)){
        _24961 = NOVALUE;
        _24963 = NOVALUE;
        goto LC; // [440] 523
    }
    _24961 = NOVALUE;
    _24963 = NOVALUE;
    // SubProg LintCheck pc: 444 op: STARTLINE (58)

    /** symtab.e:1216					if warn_level = 1 then*/
    // SubProg LintCheck pc: 446 op: EQUALS_IFW_I (121)
    if (_warn_level_47969 != 1)
    goto LD; // [446] 490
    // SubProg LintCheck pc: 450 op: STARTLINE (58)

    /** symtab.e:1217						if Strict_is_on then*/
    // SubProg LintCheck pc: 452 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 454 op: IF (20)
    if (_36Strict_is_on_16501 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24966 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 469 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 471 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24966);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24967 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24967 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24966 = NOVALUE;
    // SubProg LintCheck pc: 475 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47970);
    ((intptr_t*)_2)[1] = _file_47970;
    RefDS(_vname_47972);
    ((intptr_t*)_2)[2] = _vname_47972;
    Ref(_24967);
    ((intptr_t*)_2)[3] = _24967;
    _24968 = MAKE_SEQ(_1);
    _24967 = NOVALUE;
    // SubProg LintCheck pc: 481 op: PROC (27)
    _50Warning(230, 16, _24968);
    _24968 = NOVALUE;
    // SubProg LintCheck pc: 486 op: NOP1 (159)
    // SubProg LintCheck pc: 487 op: ELSE (23)
    goto LE; // [487] 600
    // SubProg LintCheck pc: 489 op: NOP1 (159)
LD: // addr: 490 pc: 489 sub: 47965 op: 159
    // SubProg LintCheck pc: 490 op: STARTLINE (58)

    /** symtab.e:1222						Warning(321, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 492 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 494 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 496 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 498 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24969 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 502 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 504 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24969);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24970 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24970 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24969 = NOVALUE;
    // SubProg LintCheck pc: 508 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47970);
    ((intptr_t*)_2)[1] = _file_47970;
    RefDS(_vname_47972);
    ((intptr_t*)_2)[2] = _vname_47972;
    Ref(_24970);
    ((intptr_t*)_2)[3] = _24970;
    _24971 = MAKE_SEQ(_1);
    _24970 = NOVALUE;
    // SubProg LintCheck pc: 514 op: PROC (27)
    _50Warning(321, 16, _24971);
    _24971 = NOVALUE;
    // SubProg LintCheck pc: 519 op: NOP1 (159)
    // SubProg LintCheck pc: 520 op: ELSE (23)
    goto LE; // [520] 600
    // SubProg LintCheck pc: 522 op: NOP1 (159)
LC: // addr: 523 pc: 522 sub: 47965 op: 159
    // SubProg LintCheck pc: 523 op: STARTLINE (58)

    /** symtab.e:1226					if warn_level = 1 then*/
    // SubProg LintCheck pc: 525 op: EQUALS_IFW_I (121)
    if (_warn_level_47969 != 1)
    goto LF; // [525] 569
    // SubProg LintCheck pc: 529 op: STARTLINE (58)

    /** symtab.e:1227						if Strict_is_on then*/
    // SubProg LintCheck pc: 531 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 533 op: IF (20)
    if (_36Strict_is_on_16501 == 0)
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
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24973 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 548 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 550 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24973);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24974 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24974 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24973 = NOVALUE;
    // SubProg LintCheck pc: 554 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47970);
    ((intptr_t*)_2)[1] = _file_47970;
    RefDS(_vname_47972);
    ((intptr_t*)_2)[2] = _vname_47972;
    Ref(_24974);
    ((intptr_t*)_2)[3] = _24974;
    _24975 = MAKE_SEQ(_1);
    _24974 = NOVALUE;
    // SubProg LintCheck pc: 560 op: PROC (27)
    _50Warning(231, 16, _24975);
    _24975 = NOVALUE;
    // SubProg LintCheck pc: 565 op: NOP1 (159)
    // SubProg LintCheck pc: 566 op: ELSE (23)
    goto L10; // [566] 599
    // SubProg LintCheck pc: 568 op: NOP1 (159)
LF: // addr: 569 pc: 568 sub: 47965 op: 159
    // SubProg LintCheck pc: 569 op: STARTLINE (58)

    /** symtab.e:1232						Warning(322, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    // SubProg LintCheck pc: 571 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 573 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 575 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 577 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24976 = (object)*(((s1_ptr)_2)->base + _36CurrentSub_16444);
    // SubProg LintCheck pc: 581 op: GLOBAL_INIT_CHECK (109)
    // SubProg LintCheck pc: 583 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24976);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24977 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24977 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24976 = NOVALUE;
    // SubProg LintCheck pc: 587 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47970);
    ((intptr_t*)_2)[1] = _file_47970;
    RefDS(_vname_47972);
    ((intptr_t*)_2)[2] = _vname_47972;
    Ref(_24977);
    ((intptr_t*)_2)[3] = _24977;
    _24978 = MAKE_SEQ(_1);
    _24977 = NOVALUE;
    // SubProg LintCheck pc: 593 op: PROC (27)
    _50Warning(322, 16, _24978);
    _24978 = NOVALUE;
    // SubProg LintCheck pc: 598 op: NOP1 (159)
L10: // addr: 599 pc: 598 sub: 47965 op: 159
    // SubProg LintCheck pc: 599 op: NOP1 (159)
LE: // addr: 600 pc: 599 sub: 47965 op: 159
    // SubProg LintCheck pc: 600 op: NOP1 (159)
L9: // addr: 601 pc: 600 sub: 47965 op: 159
    // SubProg LintCheck pc: 601 op: NOP1 (159)
L7: // addr: 602 pc: 601 sub: 47965 op: 159
    // SubProg LintCheck pc: 602 op: STARTLINE (58)

    /** symtab.e:1238	end procedure*/
    // SubProg LintCheck pc: 604 op: RETURNP (29)

// Exiting block BLOCK: LintCheck

// block var s_47968

// block var warn_level_47969

// block var file_47970
    DeRef(_file_47970);

// block var vscope_47971

// block var vname_47972
    DeRef(_vname_47972);

// block var vusage_47973
    return;
    // SubProg LintCheck pc: 607 op: BADRETURNF (43)
    ;
}


void _54HideLocals()
{
    object _s_48139 = NOVALUE;
// skipping _24992  name type: 0
    object _24991 = NOVALUE; // 48172 24991
// skipping _24990  name type: 0
    object _24989 = NOVALUE; // 48168 24989
    object _24988 = NOVALUE; // 48166 24988
    object _24987 = NOVALUE; // 48161 24987
    object _24986 = NOVALUE; // 48160 24986
    object _24985 = NOVALUE; // 48156 24985
    object _24984 = NOVALUE; // 48154 24984
    object _24983 = NOVALUE; // 48152 24983
    object _24982 = NOVALUE; // 48150 24982
    object _24981 = NOVALUE; // 48149 24981
    object _24980 = NOVALUE; // 48147 24980
    object _24979 = NOVALUE; // 48145 24979
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg HideLocals pc: 1 op: STARTLINE (58)

    /** symtab.e:1244		mark_rechecks()*/
    // SubProg HideLocals pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 5 op: PROC (27)
    _54mark_rechecks(_36current_file_no_16436);
    // SubProg HideLocals pc: 8 op: STARTLINE (58)

    /** symtab.e:1245		s = file_start_sym*/
    // SubProg HideLocals pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 12 op: ASSIGN (18)
    _s_48139 = _36file_start_sym_16442;
    // SubProg HideLocals pc: 15 op: INTEGER_CHECK (96)
    // SubProg HideLocals pc: 17 op: STARTLINE (58)

    /** symtab.e:1246		while s do*/
    // SubProg HideLocals pc: 19 op: NOP2 (110)
    // SubProg HideLocals pc: 21 op: NOPWHILE (158)
L1: // addr: 22 pc: 21 sub: 48136 op: 158
    // SubProg HideLocals pc: 22 op: WHILE (47)
    if (_s_48139 == 0)
    {
        goto L2; // [22] 148
    }
    else{
    }
    // SubProg HideLocals pc: 25 op: STARTLINE (58)

    /** symtab.e:1247			if SymTab[s][S_SCOPE] = SC_LOCAL and*/
    // SubProg HideLocals pc: 27 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 29 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24979 = (object)*(((s1_ptr)_2)->base + _s_48139);
    // SubProg HideLocals pc: 33 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 35 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24979);
    _24980 = (object)*(((s1_ptr)_2)->base + 4);
    _24979 = NOVALUE;
    // SubProg HideLocals pc: 39 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 41 op: EQUALS (3)
    if (IS_ATOM_INT(_24980)) {
        _24981 = (_24980 == 5);
    }
    else {
        _24981 = binary_op(EQUALS, _24980, 5);
    }
    _24980 = NOVALUE;
    // SubProg HideLocals pc: 45 op: SC1_AND_IF (146)
    if (IS_ATOM_INT(_24981)) {
        if (_24981 == 0) {
            goto L3; // [45] 127
        }
    }
    else {
        if (DBL_PTR(_24981)->dbl == 0.0) {
            goto L3; // [45] 127
        }
    }
    // SubProg HideLocals pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 51 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24983 = (object)*(((s1_ptr)_2)->base + _s_48139);
    // SubProg HideLocals pc: 55 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 57 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24983);
    if (!IS_ATOM_INT(_36S_FILE_NO_16087)){
        _24984 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_FILE_NO_16087)->dbl));
    }
    else{
        _24984 = (object)*(((s1_ptr)_2)->base + _36S_FILE_NO_16087);
    }
    _24983 = NOVALUE;
    // SubProg HideLocals pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 63 op: EQUALS (3)
    if (IS_ATOM_INT(_24984)) {
        _24985 = (_24984 == _36current_file_no_16436);
    }
    else {
        _24985 = binary_op(EQUALS, _24984, _36current_file_no_16436);
    }
    _24984 = NOVALUE;
    // SubProg HideLocals pc: 67 op: NOP1 (159)
    // SubProg HideLocals pc: 68 op: IF (20)
    if (_24985 == 0) {
        DeRef(_24985);
        _24985 = NOVALUE;
        goto L3; // [68] 127
    }
    else {
        if (!IS_ATOM_INT(_24985) && DBL_PTR(_24985)->dbl == 0.0){
            DeRef(_24985);
            _24985 = NOVALUE;
            goto L3; // [68] 127
        }
        DeRef(_24985);
        _24985 = NOVALUE;
    }
    DeRef(_24985);
    _24985 = NOVALUE;
    // SubProg HideLocals pc: 71 op: STARTLINE (58)

    /** symtab.e:1249			   	if current_block = top_level_block and repl then*/
    // SubProg HideLocals pc: 73 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 75 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 77 op: EQUALS (3)
    _24986 = (_65current_block_24748 == _65top_level_block_24749);
    // SubProg HideLocals pc: 81 op: SC1_AND_IF (146)
    if (_24986 == 0) {
        goto L4; // [81] 94
    }
    // SubProg HideLocals pc: 85 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 87 op: NOP1 (159)
    // SubProg HideLocals pc: 88 op: IF (20)
    goto L4; // [88] 94
    // SubProg HideLocals pc: 91 op: ELSE (23)
    goto L5; // [91] 100
    // SubProg HideLocals pc: 93 op: NOP1 (159)
L4: // addr: 94 pc: 93 sub: 48136 op: 159
    // SubProg HideLocals pc: 94 op: STARTLINE (58)

    /** symtab.e:1251				Hide(s)*/
    // SubProg HideLocals pc: 96 op: PROC (27)
    _54Hide(_s_48139);
    // SubProg HideLocals pc: 99 op: NOP1 (159)
L5: // addr: 100 pc: 99 sub: 48136 op: 159
    // SubProg HideLocals pc: 100 op: STARTLINE (58)

    /** symtab.e:1253				if SymTab[s][S_TOKEN] = VARIABLE then*/
    // SubProg HideLocals pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 104 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24988 = (object)*(((s1_ptr)_2)->base + _s_48139);
    // SubProg HideLocals pc: 108 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 110 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24988);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24989 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24989 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24988 = NOVALUE;
    // SubProg HideLocals pc: 114 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 116 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _24989, -100)){
        _24989 = NOVALUE;
        goto L6; // [116] 126
    }
    _24989 = NOVALUE;
    // SubProg HideLocals pc: 120 op: STARTLINE (58)

    /** symtab.e:1254					LintCheck(s)*/
    // SubProg HideLocals pc: 122 op: PROC (27)
    _54LintCheck(_s_48139);
    // SubProg HideLocals pc: 125 op: NOP1 (159)
L6: // addr: 126 pc: 125 sub: 48136 op: 159
    // SubProg HideLocals pc: 126 op: NOP1 (159)
L3: // addr: 127 pc: 126 sub: 48136 op: 159
    // SubProg HideLocals pc: 127 op: STARTLINE (58)

    /** symtab.e:1257			s = SymTab[s][S_NEXT]*/
    // SubProg HideLocals pc: 129 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 131 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24991 = (object)*(((s1_ptr)_2)->base + _s_48139);
    // SubProg HideLocals pc: 135 op: GLOBAL_INIT_CHECK (109)
    // SubProg HideLocals pc: 137 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24991);
    _s_48139 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_48139)){
        _s_48139 = (object)DBL_PTR(_s_48139)->dbl;
    }
    _24991 = NOVALUE;
    // SubProg HideLocals pc: 143 op: STARTLINE (58)

    /** symtab.e:1258		end while*/
    // SubProg HideLocals pc: 145 op: ENDWHILE (22)
    goto L1; // [145] 22
    // SubProg HideLocals pc: 147 op: NOP1 (159)
L2: // addr: 148 pc: 147 sub: 48136 op: 159
    // SubProg HideLocals pc: 148 op: STARTLINE (58)

    /** symtab.e:1259	end procedure*/
    // SubProg HideLocals pc: 150 op: RETURNP (29)

// Exiting block BLOCK: HideLocals

// block var s_48139
    DeRef(_24986);
    _24986 = NOVALUE;
    DeRef(_24981);
    _24981 = NOVALUE;
    return;
    // SubProg HideLocals pc: 153 op: BADRETURNF (43)
    ;
}


object _54sym_name(object _sym_48178)
{
    object _24994 = NOVALUE; // 48182 24994
    object _24993 = NOVALUE; // 48180 24993
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_name pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48178)) {
        _1 = (object)(DBL_PTR(_sym_48178)->dbl);
        DeRefDS(_sym_48178);
        _sym_48178 = _1;
    }
    // SubProg sym_name pc: 3 op: STARTLINE (58)

    /** symtab.e:1262		return SymTab[sym][S_NAME]*/
    // SubProg sym_name pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24993 = (object)*(((s1_ptr)_2)->base + _sym_48178);
    // SubProg sym_name pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_name pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24993);
    if (!IS_ATOM_INT(_36S_NAME_16091)){
        _24994 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NAME_16091)->dbl));
    }
    else{
        _24994 = (object)*(((s1_ptr)_2)->base + _36S_NAME_16091);
    }
    _24993 = NOVALUE;
    // SubProg sym_name pc: 17 op: RETURNF (28)
    Ref(_24994);

// Exiting block BLOCK: sym_name

// block var sym_48178
    return _24994;
    // SubProg sym_name pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_token(object _sym_48186)
{
    object _24996 = NOVALUE; // 48190 24996
    object _24995 = NOVALUE; // 48188 24995
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_token pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48186)) {
        _1 = (object)(DBL_PTR(_sym_48186)->dbl);
        DeRefDS(_sym_48186);
        _sym_48186 = _1;
    }
    // SubProg sym_token pc: 3 op: STARTLINE (58)

    /** symtab.e:1266		return SymTab[sym][S_TOKEN]*/
    // SubProg sym_token pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24995 = (object)*(((s1_ptr)_2)->base + _sym_48186);
    // SubProg sym_token pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_token pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24995);
    if (!IS_ATOM_INT(_36S_TOKEN_16096)){
        _24996 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_TOKEN_16096)->dbl));
    }
    else{
        _24996 = (object)*(((s1_ptr)_2)->base + _36S_TOKEN_16096);
    }
    _24995 = NOVALUE;
    // SubProg sym_token pc: 17 op: RETURNF (28)
    Ref(_24996);

// Exiting block BLOCK: sym_token

// block var sym_48186
    return _24996;
    // SubProg sym_token pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_scope(object _sym_48194)
{
    object _24998 = NOVALUE; // 48198 24998
    object _24997 = NOVALUE; // 48196 24997
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_scope pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48194)) {
        _1 = (object)(DBL_PTR(_sym_48194)->dbl);
        DeRefDS(_sym_48194);
        _sym_48194 = _1;
    }
    // SubProg sym_scope pc: 3 op: STARTLINE (58)

    /** symtab.e:1270		return SymTab[sym][S_SCOPE]*/
    // SubProg sym_scope pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24997 = (object)*(((s1_ptr)_2)->base + _sym_48194);
    // SubProg sym_scope pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_scope pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24997);
    _24998 = (object)*(((s1_ptr)_2)->base + 4);
    _24997 = NOVALUE;
    // SubProg sym_scope pc: 17 op: RETURNF (28)
    Ref(_24998);

// Exiting block BLOCK: sym_scope

// block var sym_48194
    return _24998;
    // SubProg sym_scope pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_mode(object _sym_48202)
{
    object _25000 = NOVALUE; // 48206 25000
    object _24999 = NOVALUE; // 48204 24999
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_mode pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48202)) {
        _1 = (object)(DBL_PTR(_sym_48202)->dbl);
        DeRefDS(_sym_48202);
        _sym_48202 = _1;
    }
    // SubProg sym_mode pc: 3 op: STARTLINE (58)

    /** symtab.e:1274		return SymTab[sym][S_MODE]*/
    // SubProg sym_mode pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _24999 = (object)*(((s1_ptr)_2)->base + _sym_48202);
    // SubProg sym_mode pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_mode pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_24999);
    _25000 = (object)*(((s1_ptr)_2)->base + 3);
    _24999 = NOVALUE;
    // SubProg sym_mode pc: 17 op: RETURNF (28)
    Ref(_25000);

// Exiting block BLOCK: sym_mode

// block var sym_48202
    return _25000;
    // SubProg sym_mode pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_obj(object _sym_48210)
{
    object _25002 = NOVALUE; // 48214 25002
    object _25001 = NOVALUE; // 48212 25001
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_obj pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_sym_48210)) {
        _1 = (object)(DBL_PTR(_sym_48210)->dbl);
        DeRefDS(_sym_48210);
        _sym_48210 = _1;
    }
    // SubProg sym_obj pc: 3 op: STARTLINE (58)

    /** symtab.e:1278		return SymTab[sym][S_OBJ]*/
    // SubProg sym_obj pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25001 = (object)*(((s1_ptr)_2)->base + _sym_48210);
    // SubProg sym_obj pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_obj pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25001);
    _25002 = (object)*(((s1_ptr)_2)->base + 1);
    _25001 = NOVALUE;
    // SubProg sym_obj pc: 17 op: RETURNF (28)
    Ref(_25002);

// Exiting block BLOCK: sym_obj

// block var sym_48210
    return _25002;
    // SubProg sym_obj pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_next(object _sym_48218)
{
    object _25004 = NOVALUE; // 48222 25004
    object _25003 = NOVALUE; // 48220 25003
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next pc: 3 op: STARTLINE (58)

    /** symtab.e:1282		return SymTab[sym][S_NEXT]*/
    // SubProg sym_next pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25003 = (object)*(((s1_ptr)_2)->base + _sym_48218);
    // SubProg sym_next pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25003);
    _25004 = (object)*(((s1_ptr)_2)->base + 2);
    _25003 = NOVALUE;
    // SubProg sym_next pc: 17 op: RETURNF (28)
    Ref(_25004);

// Exiting block BLOCK: sym_next

// block var sym_48218
    return _25004;
    // SubProg sym_next pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_block(object _sym_48226)
{
    object _25006 = NOVALUE; // 48230 25006
    object _25005 = NOVALUE; // 48228 25005
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1286		return SymTab[sym][S_BLOCK]*/
    // SubProg sym_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25005 = (object)*(((s1_ptr)_2)->base + _sym_48226);
    // SubProg sym_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25005);
    if (!IS_ATOM_INT(_36S_BLOCK_16111)){
        _25006 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_BLOCK_16111)->dbl));
    }
    else{
        _25006 = (object)*(((s1_ptr)_2)->base + _36S_BLOCK_16111);
    }
    _25005 = NOVALUE;
    // SubProg sym_block pc: 17 op: RETURNF (28)
    Ref(_25006);

// Exiting block BLOCK: sym_block

// block var sym_48226
    return _25006;
    // SubProg sym_block pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_next_in_block(object _sym_48234)
{
    object _25008 = NOVALUE; // 48238 25008
    object _25007 = NOVALUE; // 48236 25007
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_next_in_block pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_next_in_block pc: 3 op: STARTLINE (58)

    /** symtab.e:1290		return SymTab[sym][S_NEXT_IN_BLOCK]*/
    // SubProg sym_next_in_block pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25007 = (object)*(((s1_ptr)_2)->base + _sym_48234);
    // SubProg sym_next_in_block pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_next_in_block pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25007);
    if (!IS_ATOM_INT(_36S_NEXT_IN_BLOCK_16083)){
        _25008 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_36S_NEXT_IN_BLOCK_16083)->dbl));
    }
    else{
        _25008 = (object)*(((s1_ptr)_2)->base + _36S_NEXT_IN_BLOCK_16083);
    }
    _25007 = NOVALUE;
    // SubProg sym_next_in_block pc: 17 op: RETURNF (28)
    Ref(_25008);

// Exiting block BLOCK: sym_next_in_block

// block var sym_48234
    return _25008;
    // SubProg sym_next_in_block pc: 21 op: BADRETURNF (43)
    ;
}


object _54sym_usage(object _sym_48242)
{
    object _25010 = NOVALUE; // 48246 25010
    object _25009 = NOVALUE; // 48244 25009
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg sym_usage pc: 1 op: INTEGER_CHECK (96)
    // SubProg sym_usage pc: 3 op: STARTLINE (58)

    /** symtab.e:1294		return SymTab[sym][S_USAGE]*/
    // SubProg sym_usage pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 7 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_37SymTab_15405);
    _25009 = (object)*(((s1_ptr)_2)->base + _sym_48242);
    // SubProg sym_usage pc: 11 op: GLOBAL_INIT_CHECK (109)
    // SubProg sym_usage pc: 13 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_25009);
    _25010 = (object)*(((s1_ptr)_2)->base + 5);
    _25009 = NOVALUE;
    // SubProg sym_usage pc: 17 op: RETURNF (28)
    Ref(_25010);

// Exiting block BLOCK: sym_usage

// block var sym_48242
    return _25010;
    // SubProg sym_usage pc: 21 op: BADRETURNF (43)
    ;
}



// 0x93BB150F
