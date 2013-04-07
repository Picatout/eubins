// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _56hashfn(object _name_46273)
{
    object _len_46274 = NOVALUE;
    object _val_46275 = NOVALUE;
    object _int_46276 = NOVALUE;
    object _24228 = NOVALUE;
    object _24227 = NOVALUE;
    object _24224 = NOVALUE;
    object _24223 = NOVALUE;
    object _24212 = NOVALUE;
    object _24208 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:49		len = length(name)*/
    if (IS_SEQUENCE(_name_46273)){
            _len_46274 = SEQ_PTR(_name_46273)->length;
    }
    else {
        _len_46274 = 1;
    }

    /** symtab.e:51		val = name[1]*/
    _2 = (object)SEQ_PTR(_name_46273);
    _val_46275 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_val_46275))
    _val_46275 = (object)DBL_PTR(_val_46275)->dbl;

    /** symtab.e:52		int = name[$]*/
    if (IS_SEQUENCE(_name_46273)){
            _24208 = SEQ_PTR(_name_46273)->length;
    }
    else {
        _24208 = 1;
    }
    _2 = (object)SEQ_PTR(_name_46273);
    _int_46276 = (object)*(((s1_ptr)_2)->base + _24208);
    if (!IS_ATOM_INT(_int_46276))
    _int_46276 = (object)DBL_PTR(_int_46276)->dbl;

    /** symtab.e:53		int *= 256*/
    _int_46276 = _int_46276 * 256;

    /** symtab.e:54		val *= 2*/
    _val_46275 = _val_46275 + _val_46275;

    /** symtab.e:55		val += int + len*/
    _24212 = _int_46276 + _len_46274;
    if ((object)((uintptr_t)_24212 + (uintptr_t)HIGH_BITS) >= 0){
        _24212 = NewDouble((eudouble)_24212);
    }
    if (IS_ATOM_INT(_24212)) {
        _val_46275 = _val_46275 + _24212;
    }
    else {
        _val_46275 = NewDouble((eudouble)_val_46275 + DBL_PTR(_24212)->dbl);
    }
    DeRef(_24212);
    _24212 = NOVALUE;
    if (!IS_ATOM_INT(_val_46275)) {
        _1 = (object)(DBL_PTR(_val_46275)->dbl);
        DeRefDS(_val_46275);
        _val_46275 = _1;
    }

    /** symtab.e:57		if len = 3 then*/
    if (_len_46274 != 3)
    goto L1; // [51] 78

    /** symtab.e:58			val *= 32*/
    _val_46275 = _val_46275 * 32;

    /** symtab.e:59			int = name[2]*/
    _2 = (object)SEQ_PTR(_name_46273);
    _int_46276 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46276))
    _int_46276 = (object)DBL_PTR(_int_46276)->dbl;

    /** symtab.e:60			val += int*/
    _val_46275 = _val_46275 + _int_46276;
    goto L2; // [75] 133
L1: 

    /** symtab.e:61		elsif len > 3 then*/
    if (_len_46274 <= 3)
    goto L3; // [80] 132

    /** symtab.e:62			val *= 32*/
    _val_46275 = _val_46275 * 32;

    /** symtab.e:63			int = name[2]*/
    _2 = (object)SEQ_PTR(_name_46273);
    _int_46276 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_int_46276))
    _int_46276 = (object)DBL_PTR(_int_46276)->dbl;

    /** symtab.e:64			val += int*/
    _val_46275 = _val_46275 + _int_46276;

    /** symtab.e:66			val *= 32*/
    _val_46275 = _val_46275 * 32;

    /** symtab.e:67			int = name[$-1]*/
    if (IS_SEQUENCE(_name_46273)){
            _24223 = SEQ_PTR(_name_46273)->length;
    }
    else {
        _24223 = 1;
    }
    _24224 = _24223 - 1;
    _24223 = NOVALUE;
    _2 = (object)SEQ_PTR(_name_46273);
    _int_46276 = (object)*(((s1_ptr)_2)->base + _24224);
    if (!IS_ATOM_INT(_int_46276))
    _int_46276 = (object)DBL_PTR(_int_46276)->dbl;

    /** symtab.e:68			val += int*/
    _val_46275 = _val_46275 + _int_46276;
L3: 
L2: 

    /** symtab.e:70		return remainder(val, NBUCKETS) + 1*/
    _24227 = (_val_46275 % 2003);
    _24228 = _24227 + 1;
    _24227 = NOVALUE;
    DeRefDS(_name_46273);
    DeRef(_24224);
    _24224 = NOVALUE;
    return _24228;
    ;
}


void _56remove_symbol(object _sym_46305)
{
    object _hash_46306 = NOVALUE;
    object _st_ptr_46307 = NOVALUE;
    object _24243 = NOVALUE;
    object _24242 = NOVALUE;
    object _24240 = NOVALUE;
    object _24239 = NOVALUE;
    object _24238 = NOVALUE;
    object _24236 = NOVALUE;
    object _24234 = NOVALUE;
    object _24233 = NOVALUE;
    object _24232 = NOVALUE;
    object _24229 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:79		hash = SymTab[sym][S_HASHVAL]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24229 = (object)*(((s1_ptr)_2)->base + _sym_46305);
    _2 = (object)SEQ_PTR(_24229);
    _hash_46306 = (object)*(((s1_ptr)_2)->base + 11);
    if (!IS_ATOM_INT(_hash_46306)){
        _hash_46306 = (object)DBL_PTR(_hash_46306)->dbl;
    }
    _24229 = NOVALUE;

    /** symtab.e:80		st_ptr = buckets[hash]*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _st_ptr_46307 = (object)*(((s1_ptr)_2)->base + _hash_46306);
    if (!IS_ATOM_INT(_st_ptr_46307))
    _st_ptr_46307 = (object)DBL_PTR(_st_ptr_46307)->dbl;

    /** symtab.e:82		while st_ptr and st_ptr != sym do*/
L1: 
    if (_st_ptr_46307 == 0) {
        goto L2; // [32] 65
    }
    _24233 = (_st_ptr_46307 != _sym_46305);
    if (_24233 == 0)
    {
        DeRef(_24233);
        _24233 = NOVALUE;
        goto L2; // [41] 65
    }
    else{
        DeRef(_24233);
        _24233 = NOVALUE;
    }

    /** symtab.e:83			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24234 = (object)*(((s1_ptr)_2)->base + _st_ptr_46307);
    _2 = (object)SEQ_PTR(_24234);
    _st_ptr_46307 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_46307)){
        _st_ptr_46307 = (object)DBL_PTR(_st_ptr_46307)->dbl;
    }
    _24234 = NOVALUE;

    /** symtab.e:84		end while*/
    goto L1; // [62] 32
L2: 

    /** symtab.e:86		if st_ptr then*/
    if (_st_ptr_46307 == 0)
    {
        goto L3; // [67] 134
    }
    else{
    }

    /** symtab.e:87			if st_ptr = buckets[hash] then*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _24236 = (object)*(((s1_ptr)_2)->base + _hash_46306);
    if (binary_op_a(NOTEQ, _st_ptr_46307, _24236)){
        _24236 = NOVALUE;
        goto L4; // [78] 105
    }
    _24236 = NOVALUE;

    /** symtab.e:89				buckets[hash] = SymTab[st_ptr][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24238 = (object)*(((s1_ptr)_2)->base + _st_ptr_46307);
    _2 = (object)SEQ_PTR(_24238);
    _24239 = (object)*(((s1_ptr)_2)->base + 9);
    _24238 = NOVALUE;
    Ref(_24239);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _2 = (object)(((s1_ptr)_2)->base + _hash_46306);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24239;
    if( _1 != _24239 ){
        DeRef(_1);
    }
    _24239 = NOVALUE;
    goto L5; // [102] 133
L4: 

    /** symtab.e:92				SymTab[st_ptr][S_SAMEHASH] = SymTab[sym][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_st_ptr_46307 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24242 = (object)*(((s1_ptr)_2)->base + _sym_46305);
    _2 = (object)SEQ_PTR(_24242);
    _24243 = (object)*(((s1_ptr)_2)->base + 9);
    _24242 = NOVALUE;
    Ref(_24243);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24243;
    if( _1 != _24243 ){
        DeRef(_1);
    }
    _24243 = NOVALUE;
    _24240 = NOVALUE;
L5: 
L3: 

    /** symtab.e:95	end procedure*/
    return;
    ;
}


object _56NewBasicEntry(object _name_46339, object _varnum_46340, object _scope_46341, object _token_46342, object _hashval_46343, object _samehash_46345, object _type_sym_46347)
{
    object _new_46348 = NOVALUE;
    object _24252 = NOVALUE;
    object _24250 = NOVALUE;
    object _24249 = NOVALUE;
    object _24248 = NOVALUE;
    object _24247 = NOVALUE;
    object _24246 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:105		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [19] 33
    }
    else{
    }

    /** symtab.e:106			new = repeat(0, SIZEOF_ROUTINE_ENTRY)*/
    DeRef(_new_46348);
    _new_46348 = Repeat(0, _39SIZEOF_ROUTINE_ENTRY_16597);
    goto L2; // [30] 42
L1: 

    /** symtab.e:108			new = repeat(0, SIZEOF_VAR_ENTRY)*/
    DeRef(_new_46348);
    _new_46348 = Repeat(0, _39SIZEOF_VAR_ENTRY_16600);
L2: 

    /** symtab.e:111		new[S_NEXT] = 0*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:112		new[S_NAME] = name*/
    RefDS(_name_46339);
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_NAME_16470))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_NAME_16470);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _name_46339;
    DeRef(_1);

    /** symtab.e:113		new[S_SCOPE] = scope*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _scope_46341;
    DeRef(_1);

    /** symtab.e:114		new[S_MODE] = M_NORMAL*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);

    /** symtab.e:115		new[S_USAGE] = U_UNUSED*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:116		new[S_FILE_NO] = current_file_no*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_FILE_NO_16466))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39current_file_no_16815;
    DeRef(_1);

    /** symtab.e:118		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L3; // [102] 327
    }
    else{
    }

    /** symtab.e:120			new[S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);

    /** symtab.e:121			new[S_GTYPE_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 38);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:123			new[S_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);

    /** symtab.e:124			new[S_SEQ_ELEM_NEW] = TYPE_NULL -- starting point for ORing*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 40);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:126			new[S_ARG_TYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 43);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);

    /** symtab.e:127			new[S_ARG_TYPE_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 44);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:128			new[S_ARG_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 45);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);

    /** symtab.e:129			new[S_ARG_SEQ_ELEM_NEW] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 46);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:131			new[S_ARG_MIN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 47);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** symtab.e:132			new[S_ARG_MIN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _24246 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24246 = - _39NOVALUE_16670;
        }
    }
    else {
        _24246 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 49);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24246;
    if( _1 != _24246 ){
        DeRef(_1);
    }
    _24246 = NOVALUE;

    /** symtab.e:134			new[S_ARG_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 51);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** symtab.e:135			new[S_ARG_SEQ_LEN_NEW] = -NOVALUE*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _24247 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24247 = - _39NOVALUE_16670;
        }
    }
    else {
        _24247 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 52);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24247;
    if( _1 != _24247 ){
        DeRef(_1);
    }
    _24247 = NOVALUE;

    /** symtab.e:137			new[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** symtab.e:138			new[S_SEQ_LEN_NEW] = -NOVALUE -- no idea yet*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _24248 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24248 = - _39NOVALUE_16670;
        }
    }
    else {
        _24248 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 39);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24248;
    if( _1 != _24248 ){
        DeRef(_1);
    }
    _24248 = NOVALUE;

    /** symtab.e:140			new[S_NREFS] = 0*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:141			new[S_ONE_REF] = TRUE          -- assume TRUE until we find otherwise*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 35);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _9TRUE_444;
    DeRef(_1);

    /** symtab.e:142			new[S_RI_TARGET] = 0*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 53);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** symtab.e:144			new[S_OBJ_MIN] = MININT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1073741824;
    DeRef(_1);

    /** symtab.e:145			new[S_OBJ_MIN_NEW] = -NOVALUE -- no idea yet*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _24249 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24249 = - _39NOVALUE_16670;
        }
    }
    else {
        _24249 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 41);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24249;
    if( _1 != _24249 ){
        DeRef(_1);
    }
    _24249 = NOVALUE;

    /** symtab.e:147			new[S_OBJ_MAX] = MAXINT*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1073741823;
    DeRef(_1);

    /** symtab.e:148			new[S_OBJ_MAX_NEW] = -NOVALUE -- missing from C code? (not needed)*/
    if (IS_ATOM_INT(_39NOVALUE_16670)) {
        if ((uintptr_t)_39NOVALUE_16670 == (uintptr_t)HIGH_BITS){
            _24250 = (object)NewDouble((eudouble) -HIGH_BITS);
        }
        else{
            _24250 = - _39NOVALUE_16670;
        }
    }
    else {
        _24250 = unary_op(UMINUS, _39NOVALUE_16670);
    }
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 42);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24250;
    if( _1 != _24250 ){
        DeRef(_1);
    }
    _24250 = NOVALUE;
L3: 

    /** symtab.e:151		new[S_TOKEN] = token*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TOKEN_16475))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _token_46342;
    DeRef(_1);

    /** symtab.e:152		new[S_VARNUM] = varnum*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 16);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _varnum_46340;
    DeRef(_1);

    /** symtab.e:153		new[S_INITLEVEL] = -1*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 14);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = -1;
    DeRef(_1);

    /** symtab.e:154		new[S_VTYPE] = type_sym*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 15);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _type_sym_46347;
    DeRef(_1);

    /** symtab.e:156		new[S_HASHVAL] = hashval*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 11);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _hashval_46343;
    DeRef(_1);

    /** symtab.e:157		new[S_SAMEHASH] = samehash*/
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _samehash_46345;
    DeRef(_1);

    /** symtab.e:159		new[S_OBJ] = NOVALUE -- important*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_new_46348);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_46348 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);

    /** symtab.e:162		SymTab = append(SymTab, new)*/
    RefDS(_new_46348);
    Append(&_36SymTab_15404, _36SymTab_15404, _new_46348);

    /** symtab.e:164		return length(SymTab)*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _24252 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _24252 = 1;
    }
    DeRefDS(_name_46339);
    DeRefDS(_new_46348);
    return _24252;
    ;
}


object _56NewEntry(object _name_46427, object _varnum_46428, object _scope_46429, object _token_46430, object _hashval_46431, object _samehash_46433, object _type_sym_46435)
{
    object _new_46437 = NOVALUE;
    object _24254 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_scope_46429)) {
        _1 = (object)(DBL_PTR(_scope_46429)->dbl);
        DeRefDS(_scope_46429);
        _scope_46429 = _1;
    }
    if (!IS_ATOM_INT(_token_46430)) {
        _1 = (object)(DBL_PTR(_token_46430)->dbl);
        DeRefDS(_token_46430);
        _token_46430 = _1;
    }
    if (!IS_ATOM_INT(_samehash_46433)) {
        _1 = (object)(DBL_PTR(_samehash_46433)->dbl);
        DeRefDS(_samehash_46433);
        _samehash_46433 = _1;
    }

    /** symtab.e:171		symtab_index new = NewBasicEntry( name, varnum, scope, token, hashval, samehash, type_sym )*/
    RefDS(_name_46427);
    _new_46437 = _56NewBasicEntry(_name_46427, _varnum_46428, _scope_46429, _token_46430, _hashval_46431, _samehash_46433, _type_sym_46435);
    if (!IS_ATOM_INT(_new_46437)) {
        _1 = (object)(DBL_PTR(_new_46437)->dbl);
        DeRefDS(_new_46437);
        _new_46437 = _1;
    }

    /** symtab.e:174		if last_sym then*/
    if (_56last_sym_46267 == 0)
    {
        goto L1; // [33] 54
    }
    else{
    }

    /** symtab.e:175			SymTab[last_sym][S_NEXT] = new*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_56last_sym_46267 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _new_46437;
    DeRef(_1);
    _24254 = NOVALUE;
L1: 

    /** symtab.e:177		last_sym = new*/
    _56last_sym_46267 = _new_46437;

    /** symtab.e:178		if type_sym < 0 then*/
    if (_type_sym_46435 >= 0)
    goto L2; // [63] 76

    /** symtab.e:179			register_forward_type( last_sym, type_sym )*/
    _41register_forward_type(_56last_sym_46267, _type_sym_46435);
L2: 

    /** symtab.e:181		return last_sym*/
    DeRefDS(_name_46427);
    return _56last_sym_46267;
    ;
}


object _56tmp_alloc()
{
    object _new_entry_46452 = NOVALUE;
    object _24268 = NOVALUE;
    object _24266 = NOVALUE;
    object _24263 = NOVALUE;
    object _24260 = NOVALUE;
    object _24259 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:188		sequence new_entry = repeat( 0, SIZEOF_TEMP_ENTRY )*/
    DeRef(_new_entry_46452);
    _new_entry_46452 = Repeat(0, _39SIZEOF_TEMP_ENTRY_16606);

    /** symtab.e:192		new_entry[S_USAGE] = T_UNKNOWN*/
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    *(intptr_t *)_2 = 4;

    /** symtab.e:194		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L1; // [23] 132
    }
    else{
    }

    /** symtab.e:195			new_entry[S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    *(intptr_t *)_2 = 16;

    /** symtab.e:196			new_entry[S_OBJ_MIN] = MININT*/
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    *(intptr_t *)_2 = -1073741824;

    /** symtab.e:197			new_entry[S_OBJ_MAX] = MAXINT*/
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    *(intptr_t *)_2 = 1073741823;

    /** symtab.e:198			new_entry[S_SEQ_LEN] = NOVALUE*/
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    *(intptr_t *)_2 = _39NOVALUE_16670;

    /** symtab.e:199			new_entry[S_SEQ_ELEM] = TYPE_OBJECT  -- other fields set later*/
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);

    /** symtab.e:200			if length(temp_name_type)+1 = 8087 then*/
    if (IS_SEQUENCE(_39temp_name_type_16897)){
            _24259 = SEQ_PTR(_39temp_name_type_16897)->length;
    }
    else {
        _24259 = 1;
    }
    _24260 = _24259 + 1;
    _24259 = NOVALUE;
    if (_24260 != 8087)
    goto L2; // [87] 106

    /** symtab.e:202				temp_name_type = append(temp_name_type, {0, 0})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 0;
    ((intptr_t *)_2)[2] = 0;
    _24263 = MAKE_SEQ(_1);
    RefDS(_24263);
    Append(&_39temp_name_type_16897, _39temp_name_type_16897, _24263);
    DeRefDS(_24263);
    _24263 = NOVALUE;
L2: 

    /** symtab.e:204			temp_name_type = append(temp_name_type, TYPES_OBNL)*/
    RefDS(_57TYPES_OBNL_46099);
    Append(&_39temp_name_type_16897, _39temp_name_type_16897, _57TYPES_OBNL_46099);

    /** symtab.e:205			new_entry[S_TEMP_NAME] = length(temp_name_type)*/
    if (IS_SEQUENCE(_39temp_name_type_16897)){
            _24266 = SEQ_PTR(_39temp_name_type_16897)->length;
    }
    else {
        _24266 = 1;
    }
    _2 = (object)SEQ_PTR(_new_entry_46452);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_entry_46452 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24266;
    if( _1 != _24266 ){
        DeRef(_1);
    }
    _24266 = NOVALUE;
L1: 

    /** symtab.e:208		SymTab = append(SymTab, new_entry )*/
    RefDS(_new_entry_46452);
    Append(&_36SymTab_15404, _36SymTab_15404, _new_entry_46452);

    /** symtab.e:210		return length( SymTab )*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _24268 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _24268 = 1;
    }
    DeRefDS(_new_entry_46452);
    DeRef(_24260);
    _24260 = NOVALUE;
    return _24268;
    ;
}


void _56DefinedYet(object _sym_46521)
{
    object _24288 = NOVALUE;
    object _24287 = NOVALUE;
    object _24286 = NOVALUE;
    object _24284 = NOVALUE;
    object _24283 = NOVALUE;
    object _24281 = NOVALUE;
    object _24280 = NOVALUE;
    object _24279 = NOVALUE;
    object _24278 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:230		if not find(SymTab[sym][S_SCOPE],*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24278 = (object)*(((s1_ptr)_2)->base + _sym_46521);
    _2 = (object)SEQ_PTR(_24278);
    _24279 = (object)*(((s1_ptr)_2)->base + 4);
    _24278 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 9;
    ((intptr_t*)_2)[2] = 10;
    ((intptr_t*)_2)[3] = 7;
    _24280 = MAKE_SEQ(_1);
    _24281 = find_from(_24279, _24280, 1);
    _24279 = NOVALUE;
    DeRefDS(_24280);
    _24280 = NOVALUE;
    if (_24281 != 0)
    goto L1; // [34] 82
    _24281 = NOVALUE;

    /** symtab.e:232			if SymTab[sym][S_FILE_NO] = current_file_no then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24283 = (object)*(((s1_ptr)_2)->base + _sym_46521);
    _2 = (object)SEQ_PTR(_24283);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24284 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24284 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24283 = NOVALUE;
    if (binary_op_a(NOTEQ, _24284, _39current_file_no_16815)){
        _24284 = NOVALUE;
        goto L2; // [53] 81
    }
    _24284 = NOVALUE;

    /** symtab.e:233				CompileErr(31, {SymTab[sym][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24286 = (object)*(((s1_ptr)_2)->base + _sym_46521);
    _2 = (object)SEQ_PTR(_24286);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24287 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24287 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24286 = NOVALUE;
    _1 = NewS1(1);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_24287);
    ((intptr_t*)_2)[1] = _24287;
    _24288 = MAKE_SEQ(_1);
    _24287 = NOVALUE;
    _52CompileErr(31, _24288, 0);
    _24288 = NOVALUE;
L2: 
L1: 

    /** symtab.e:236	end procedure*/
    return;
    ;
}


object _56name_ext(object _s_46548)
{
    object _24295 = NOVALUE;
    object _24294 = NOVALUE;
    object _24293 = NOVALUE;
    object _24292 = NOVALUE;
    object _24290 = NOVALUE;
    object _24289 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:241		for i = length(s) to 1 by -1 do*/
    if (IS_SEQUENCE(_s_46548)){
            _24289 = SEQ_PTR(_s_46548)->length;
    }
    else {
        _24289 = 1;
    }
    {
        object _i_46550;
        _i_46550 = _24289;
L1: 
        if (_i_46550 < 1){
            goto L2; // [8] 55
        }

        /** symtab.e:242			if find(s[i], "/\\:") then*/
        _2 = (object)SEQ_PTR(_s_46548);
        _24290 = (object)*(((s1_ptr)_2)->base + _i_46550);
        _24292 = find_from(_24290, _24291, 1);
        _24290 = NOVALUE;
        if (_24292 == 0)
        {
            _24292 = NOVALUE;
            goto L3; // [26] 48
        }
        else{
            _24292 = NOVALUE;
        }

        /** symtab.e:243				return s[i+1 .. $]*/
        _24293 = _i_46550 + 1;
        if (IS_SEQUENCE(_s_46548)){
                _24294 = SEQ_PTR(_s_46548)->length;
        }
        else {
            _24294 = 1;
        }
        rhs_slice_target = (object_ptr)&_24295;
        RHS_Slice(_s_46548, _24293, _24294);
        DeRefDS(_s_46548);
        _24293 = NOVALUE;
        return _24295;
L3: 

        /** symtab.e:245		end for*/
        _i_46550 = _i_46550 + -1;
        goto L1; // [50] 15
L2: 
        ;
    }

    /** symtab.e:247		return s*/
    DeRef(_24295);
    _24295 = NOVALUE;
    DeRef(_24293);
    _24293 = NOVALUE;
    return _s_46548;
    ;
}


object _56NewStringSym(object _s_46567)
{
    object _p_46569 = NOVALUE;
    object _tp_46570 = NOVALUE;
    object _prev_46571 = NOVALUE;
    object _search_count_46572 = NOVALUE;
    object _24339 = NOVALUE;
    object _24337 = NOVALUE;
    object _24336 = NOVALUE;
    object _24335 = NOVALUE;
    object _24333 = NOVALUE;
    object _24332 = NOVALUE;
    object _24329 = NOVALUE;
    object _24327 = NOVALUE;
    object _24325 = NOVALUE;
    object _24324 = NOVALUE;
    object _24323 = NOVALUE;
    object _24321 = NOVALUE;
    object _24319 = NOVALUE;
    object _24317 = NOVALUE;
    object _24315 = NOVALUE;
    object _24312 = NOVALUE;
    object _24310 = NOVALUE;
    object _24309 = NOVALUE;
    object _24308 = NOVALUE;
    object _24306 = NOVALUE;
    object _24304 = NOVALUE;
    object _24303 = NOVALUE;
    object _24302 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:255		integer search_count*/

    /** symtab.e:258		tp = literal_init*/
    _tp_46570 = _56literal_init_46266;

    /** symtab.e:259		prev = 0*/
    _prev_46571 = 0;

    /** symtab.e:260		search_count = 0*/
    _search_count_46572 = 0;

    /** symtab.e:261		while tp != 0 do*/
L1: 
    if (_tp_46570 == 0)
    goto L2; // [31] 170

    /** symtab.e:262			search_count += 1*/
    _search_count_46572 = _search_count_46572 + 1;

    /** symtab.e:263			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    if (binary_op_a(LESSEQ, _search_count_46572, _56SEARCH_LIMIT_46559)){
        goto L3; // [45] 54
    }

    /** symtab.e:264				exit*/
    goto L2; // [51] 170
L3: 

    /** symtab.e:266			if equal(s, SymTab[tp][S_OBJ]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24302 = (object)*(((s1_ptr)_2)->base + _tp_46570);
    _2 = (object)SEQ_PTR(_24302);
    _24303 = (object)*(((s1_ptr)_2)->base + 1);
    _24302 = NOVALUE;
    if (_s_46567 == _24303)
    _24304 = 1;
    else if (IS_ATOM_INT(_s_46567) && IS_ATOM_INT(_24303))
    _24304 = 0;
    else
    _24304 = (compare(_s_46567, _24303) == 0);
    _24303 = NOVALUE;
    if (_24304 == 0)
    {
        _24304 = NOVALUE;
        goto L4; // [72] 142
    }
    else{
        _24304 = NOVALUE;
    }

    /** symtab.e:268				if tp != literal_init then*/
    if (_tp_46570 == _56literal_init_46266)
    goto L5; // [79] 135

    /** symtab.e:269					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46571 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24308 = (object)*(((s1_ptr)_2)->base + _tp_46570);
    _2 = (object)SEQ_PTR(_24308);
    _24309 = (object)*(((s1_ptr)_2)->base + 2);
    _24308 = NOVALUE;
    Ref(_24309);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24309;
    if( _1 != _24309 ){
        DeRef(_1);
    }
    _24309 = NOVALUE;
    _24306 = NOVALUE;

    /** symtab.e:270					SymTab[tp][S_NEXT] = literal_init*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46570 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56literal_init_46266;
    DeRef(_1);
    _24310 = NOVALUE;

    /** symtab.e:271					literal_init = tp*/
    _56literal_init_46266 = _tp_46570;
L5: 

    /** symtab.e:273				return tp*/
    DeRefDS(_s_46567);
    return _tp_46570;
L4: 

    /** symtab.e:275			prev = tp*/
    _prev_46571 = _tp_46570;

    /** symtab.e:276			tp = SymTab[tp][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24312 = (object)*(((s1_ptr)_2)->base + _tp_46570);
    _2 = (object)SEQ_PTR(_24312);
    _tp_46570 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46570)){
        _tp_46570 = (object)DBL_PTR(_tp_46570)->dbl;
    }
    _24312 = NOVALUE;

    /** symtab.e:277		end while*/
    goto L1; // [167] 31
L2: 

    /** symtab.e:279		p = tmp_alloc()*/
    _p_46569 = _56tmp_alloc();
    if (!IS_ATOM_INT(_p_46569)) {
        _1 = (object)(DBL_PTR(_p_46569)->dbl);
        DeRefDS(_p_46569);
        _p_46569 = _1;
    }

    /** symtab.e:280		SymTab[p][S_OBJ] = s*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    RefDS(_s_46567);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_46567;
    DeRef(_1);
    _24315 = NOVALUE;

    /** symtab.e:282		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [196] 346
    }
    else{
    }

    /** symtab.e:283			SymTab[p][S_MODE] = M_TEMP    -- override CONSTANT for compile*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24317 = NOVALUE;

    /** symtab.e:284			SymTab[p][S_GTYPE] = TYPE_SEQUENCE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 8;
    DeRef(_1);
    _24319 = NOVALUE;

    /** symtab.e:285			SymTab[p][S_SEQ_LEN] = length(s)*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    if (IS_SEQUENCE(_s_46567)){
            _24323 = SEQ_PTR(_s_46567)->length;
    }
    else {
        _24323 = 1;
    }
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 32);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24323;
    if( _1 != _24323 ){
        DeRef(_1);
    }
    _24323 = NOVALUE;
    _24321 = NOVALUE;

    /** symtab.e:286			if SymTab[p][S_SEQ_LEN] > 0 then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24324 = (object)*(((s1_ptr)_2)->base + _p_46569);
    _2 = (object)SEQ_PTR(_24324);
    _24325 = (object)*(((s1_ptr)_2)->base + 32);
    _24324 = NOVALUE;
    if (binary_op_a(LESSEQ, _24325, 0)){
        _24325 = NOVALUE;
        goto L7; // [265] 289
    }
    _24325 = NOVALUE;

    /** symtab.e:287				SymTab[p][S_SEQ_ELEM] = TYPE_INTEGER*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24327 = NOVALUE;
    goto L8; // [286] 307
L7: 

    /** symtab.e:289				SymTab[p][S_SEQ_ELEM] = TYPE_NULL*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _24329 = NOVALUE;
L8: 

    /** symtab.e:291			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24332 = (object)*(((s1_ptr)_2)->base + _p_46569);
    _2 = (object)SEQ_PTR(_24332);
    _24333 = (object)*(((s1_ptr)_2)->base + 34);
    _24332 = NOVALUE;
    RefDS(_24331);
    Ref(_24333);
    _57c_printf(_24331, _24333);
    _24333 = NOVALUE;

    /** symtab.e:292			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24335 = (object)*(((s1_ptr)_2)->base + _p_46569);
    _2 = (object)SEQ_PTR(_24335);
    _24336 = (object)*(((s1_ptr)_2)->base + 34);
    _24335 = NOVALUE;
    RefDS(_24334);
    Ref(_24336);
    _57c_hprintf(_24334, _24336);
    _24336 = NOVALUE;
    goto L9; // [343] 364
L6: 

    /** symtab.e:295			SymTab[p][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24337 = NOVALUE;
L9: 

    /** symtab.e:299		SymTab[p][S_NEXT] = literal_init*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46569 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56literal_init_46266;
    DeRef(_1);
    _24339 = NOVALUE;

    /** symtab.e:300		literal_init = p*/
    _56literal_init_46266 = _p_46569;

    /** symtab.e:301		return p*/
    DeRefDS(_s_46567);
    return _p_46569;
    ;
}


object _56NewIntSym(object _int_val_46665)
{
    object _p_46667 = NOVALUE;
    object _x_46668 = NOVALUE;
    object _24363 = NOVALUE;
    object _24361 = NOVALUE;
    object _24357 = NOVALUE;
    object _24355 = NOVALUE;
    object _24353 = NOVALUE;
    object _24351 = NOVALUE;
    object _24349 = NOVALUE;
    object _24347 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_int_val_46665)) {
        _1 = (object)(DBL_PTR(_int_val_46665)->dbl);
        DeRefDS(_int_val_46665);
        _int_val_46665 = _1;
    }

    /** symtab.e:308		integer x*/

    /** symtab.e:310		x = find(int_val, lastintval)*/
    _x_46668 = find_from(_int_val_46665, _56lastintval_46268, 1);

    /** symtab.e:311		if x then*/
    if (_x_46668 == 0)
    {
        goto L1; // [16] 77
    }
    else{
    }

    /** symtab.e:312			if repl then*/

    /** symtab.e:317			return lastintsym[x]  -- saves space, helps Translator reduce code size*/
    _2 = (object)SEQ_PTR(_56lastintsym_46269);
    _24347 = (object)*(((s1_ptr)_2)->base + _x_46668);
    return _24347;
    goto L2; // [74] 227
L1: 

    /** symtab.e:320			label "lolol"*/
G3:

    /** symtab.e:321			p = tmp_alloc()*/
    _p_46667 = _56tmp_alloc();
    if (!IS_ATOM_INT(_p_46667)) {
        _1 = (object)(DBL_PTR(_p_46667)->dbl);
        DeRefDS(_p_46667);
        _p_46667 = _1;
    }

    /** symtab.e:322			SymTab[p][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46667 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24349 = NOVALUE;

    /** symtab.e:323			SymTab[p][S_OBJ] = int_val*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46667 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46665;
    DeRef(_1);
    _24351 = NOVALUE;

    /** symtab.e:325			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L4; // [124] 175
    }
    else{
    }

    /** symtab.e:326				SymTab[p][S_OBJ_MIN] = int_val*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46667 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 30);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46665;
    DeRef(_1);
    _24353 = NOVALUE;

    /** symtab.e:327				SymTab[p][S_OBJ_MAX] = int_val*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46667 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 31);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _int_val_46665;
    DeRef(_1);
    _24355 = NOVALUE;

    /** symtab.e:328				SymTab[p][S_GTYPE] = TYPE_INTEGER*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46667 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24357 = NOVALUE;
L4: 

    /** symtab.e:331			lastintval = prepend(lastintval, int_val)*/
    Prepend(&_56lastintval_46268, _56lastintval_46268, _int_val_46665);

    /** symtab.e:332			lastintsym = prepend(lastintsym, p)*/
    Prepend(&_56lastintsym_46269, _56lastintsym_46269, _p_46667);

    /** symtab.e:333			if length(lastintval) > SEARCH_LIMIT then*/
    if (IS_SEQUENCE(_56lastintval_46268)){
            _24361 = SEQ_PTR(_56lastintval_46268)->length;
    }
    else {
        _24361 = 1;
    }
    if (binary_op_a(LESSEQ, _24361, _56SEARCH_LIMIT_46559)){
        _24361 = NOVALUE;
        goto L5; // [200] 220
    }
    _24361 = NOVALUE;

    /** symtab.e:334				lastintval = lastintval[1..floor(SEARCH_LIMIT/2)]*/
    if (IS_ATOM_INT(_56SEARCH_LIMIT_46559)) {
        _24363 = _56SEARCH_LIMIT_46559 >> 1;
    }
    else {
        _1 = binary_op(DIVIDE, _56SEARCH_LIMIT_46559, 2);
        _24363 = unary_op(FLOOR, _1);
        DeRef(_1);
    }
    rhs_slice_target = (object_ptr)&_56lastintval_46268;
    RHS_Slice(_56lastintval_46268, 1, _24363);
L5: 

    /** symtab.e:336			return p*/
    _24347 = NOVALUE;
    DeRef(_24363);
    _24363 = NOVALUE;
    return _p_46667;
L2: 
    ;
}


object _56NewDoubleSym(object _d_46717)
{
    object _p_46719 = NOVALUE;
    object _tp_46720 = NOVALUE;
    object _prev_46721 = NOVALUE;
    object _search_count_46722 = NOVALUE;
    object _24393 = NOVALUE;
    object _24392 = NOVALUE;
    object _24391 = NOVALUE;
    object _24390 = NOVALUE;
    object _24389 = NOVALUE;
    object _24387 = NOVALUE;
    object _24385 = NOVALUE;
    object _24383 = NOVALUE;
    object _24381 = NOVALUE;
    object _24378 = NOVALUE;
    object _24376 = NOVALUE;
    object _24375 = NOVALUE;
    object _24374 = NOVALUE;
    object _24372 = NOVALUE;
    object _24370 = NOVALUE;
    object _24369 = NOVALUE;
    object _24368 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:343		integer search_count*/

    /** symtab.e:346		tp = literal_init*/
    _tp_46720 = _56literal_init_46266;

    /** symtab.e:347		prev = 0*/
    _prev_46721 = 0;

    /** symtab.e:348		search_count = 0*/
    _search_count_46722 = 0;

    /** symtab.e:349		while tp != 0 do*/
L1: 
    if (_tp_46720 == 0)
    goto L2; // [29] 168

    /** symtab.e:350			search_count += 1*/
    _search_count_46722 = _search_count_46722 + 1;

    /** symtab.e:351			if search_count > SEARCH_LIMIT then  -- avoid n-squared algorithm*/
    if (binary_op_a(LESSEQ, _search_count_46722, _56SEARCH_LIMIT_46559)){
        goto L3; // [43] 52
    }

    /** symtab.e:352				exit*/
    goto L2; // [49] 168
L3: 

    /** symtab.e:354			if equal(d, SymTab[tp][S_OBJ]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24368 = (object)*(((s1_ptr)_2)->base + _tp_46720);
    _2 = (object)SEQ_PTR(_24368);
    _24369 = (object)*(((s1_ptr)_2)->base + 1);
    _24368 = NOVALUE;
    if (_d_46717 == _24369)
    _24370 = 1;
    else if (IS_ATOM_INT(_d_46717) && IS_ATOM_INT(_24369))
    _24370 = 0;
    else
    _24370 = (compare(_d_46717, _24369) == 0);
    _24369 = NOVALUE;
    if (_24370 == 0)
    {
        _24370 = NOVALUE;
        goto L4; // [70] 140
    }
    else{
        _24370 = NOVALUE;
    }

    /** symtab.e:356				if tp != literal_init then*/
    if (_tp_46720 == _56literal_init_46266)
    goto L5; // [77] 133

    /** symtab.e:358					SymTab[prev][S_NEXT] = SymTab[tp][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_46721 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24374 = (object)*(((s1_ptr)_2)->base + _tp_46720);
    _2 = (object)SEQ_PTR(_24374);
    _24375 = (object)*(((s1_ptr)_2)->base + 2);
    _24374 = NOVALUE;
    Ref(_24375);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24375;
    if( _1 != _24375 ){
        DeRef(_1);
    }
    _24375 = NOVALUE;
    _24372 = NOVALUE;

    /** symtab.e:359					SymTab[tp][S_NEXT] = literal_init*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_tp_46720 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56literal_init_46266;
    DeRef(_1);
    _24376 = NOVALUE;

    /** symtab.e:360					literal_init = tp*/
    _56literal_init_46266 = _tp_46720;
L5: 

    /** symtab.e:362				return tp*/
    DeRef(_d_46717);
    return _tp_46720;
L4: 

    /** symtab.e:364			prev = tp*/
    _prev_46721 = _tp_46720;

    /** symtab.e:365			tp = SymTab[tp][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24378 = (object)*(((s1_ptr)_2)->base + _tp_46720);
    _2 = (object)SEQ_PTR(_24378);
    _tp_46720 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_tp_46720)){
        _tp_46720 = (object)DBL_PTR(_tp_46720)->dbl;
    }
    _24378 = NOVALUE;

    /** symtab.e:366		end while*/
    goto L1; // [165] 29
L2: 

    /** symtab.e:368		p = tmp_alloc()*/
    _p_46719 = _56tmp_alloc();
    if (!IS_ATOM_INT(_p_46719)) {
        _1 = (object)(DBL_PTR(_p_46719)->dbl);
        DeRefDS(_p_46719);
        _p_46719 = _1;
    }

    /** symtab.e:369		SymTab[p][S_MODE] = M_CONSTANT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46719 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24381 = NOVALUE;

    /** symtab.e:370		SymTab[p][S_OBJ] = d*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46719 + ((s1_ptr)_2)->base);
    Ref(_d_46717);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _d_46717;
    DeRef(_1);
    _24383 = NOVALUE;

    /** symtab.e:372		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [211] 285
    }
    else{
    }

    /** symtab.e:373			SymTab[p][S_MODE] = M_TEMP  -- override CONSTANT for compile*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46719 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24385 = NOVALUE;

    /** symtab.e:374			SymTab[p][S_GTYPE] = TYPE_DOUBLE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46719 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24387 = NOVALUE;

    /** symtab.e:375			c_printf("object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24389 = (object)*(((s1_ptr)_2)->base + _p_46719);
    _2 = (object)SEQ_PTR(_24389);
    _24390 = (object)*(((s1_ptr)_2)->base + 34);
    _24389 = NOVALUE;
    RefDS(_24331);
    Ref(_24390);
    _57c_printf(_24331, _24390);
    _24390 = NOVALUE;

    /** symtab.e:376			c_hprintf("extern object _%d;\n", SymTab[p][S_TEMP_NAME])*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24391 = (object)*(((s1_ptr)_2)->base + _p_46719);
    _2 = (object)SEQ_PTR(_24391);
    _24392 = (object)*(((s1_ptr)_2)->base + 34);
    _24391 = NOVALUE;
    RefDS(_24334);
    Ref(_24392);
    _57c_hprintf(_24334, _24392);
    _24392 = NOVALUE;
L6: 

    /** symtab.e:379		SymTab[p][S_NEXT] = literal_init*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46719 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _56literal_init_46266;
    DeRef(_1);
    _24393 = NOVALUE;

    /** symtab.e:380		literal_init = p*/
    _56literal_init_46266 = _p_46719;

    /** symtab.e:381		return p*/
    DeRef(_d_46717);
    return _p_46719;
    ;
}


object _56NewTempSym(object _inlining_46791)
{
    object _p_46793 = NOVALUE;
    object _q_46794 = NOVALUE;
    object _24442 = NOVALUE;
    object _24440 = NOVALUE;
    object _24438 = NOVALUE;
    object _24436 = NOVALUE;
    object _24434 = NOVALUE;
    object _24432 = NOVALUE;
    object _24431 = NOVALUE;
    object _24430 = NOVALUE;
    object _24428 = NOVALUE;
    object _24427 = NOVALUE;
    object _24426 = NOVALUE;
    object _24424 = NOVALUE;
    object _24422 = NOVALUE;
    object _24419 = NOVALUE;
    object _24418 = NOVALUE;
    object _24417 = NOVALUE;
    object _24415 = NOVALUE;
    object _24413 = NOVALUE;
    object _24412 = NOVALUE;
    object _24411 = NOVALUE;
    object _24409 = NOVALUE;
    object _24407 = NOVALUE;
    object _24402 = NOVALUE;
    object _24401 = NOVALUE;
    object _24400 = NOVALUE;
    object _24399 = NOVALUE;
    object _24398 = NOVALUE;
    object _24397 = NOVALUE;
    object _24395 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:392		if inlining then*/
    if (_inlining_46791 == 0)
    {
        goto L1; // [5] 85
    }
    else{
    }

    /** symtab.e:393			p = SymTab[CurrentSub][S_TEMPS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24395 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24395);
    if (!IS_ATOM_INT(_39S_TEMPS_16515)){
        _p_46793 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    }
    else{
        _p_46793 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    }
    if (!IS_ATOM_INT(_p_46793)){
        _p_46793 = (object)DBL_PTR(_p_46793)->dbl;
    }
    _24395 = NOVALUE;

    /** symtab.e:394			while p != 0 and SymTab[p][S_SCOPE] != FREE do*/
L2: 
    _24397 = (_p_46793 != 0);
    if (_24397 == 0) {
        goto L3; // [35] 93
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24399 = (object)*(((s1_ptr)_2)->base + _p_46793);
    _2 = (object)SEQ_PTR(_24399);
    _24400 = (object)*(((s1_ptr)_2)->base + 4);
    _24399 = NOVALUE;
    if (IS_ATOM_INT(_24400)) {
        _24401 = (_24400 != 0);
    }
    else {
        _24401 = binary_op(NOTEQ, _24400, 0);
    }
    _24400 = NOVALUE;
    if (_24401 <= 0) {
        if (_24401 == 0) {
            DeRef(_24401);
            _24401 = NOVALUE;
            goto L3; // [58] 93
        }
        else {
            if (!IS_ATOM_INT(_24401) && DBL_PTR(_24401)->dbl == 0.0){
                DeRef(_24401);
                _24401 = NOVALUE;
                goto L3; // [58] 93
            }
            DeRef(_24401);
            _24401 = NOVALUE;
        }
    }
    DeRef(_24401);
    _24401 = NOVALUE;

    /** symtab.e:395				p = SymTab[p][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24402 = (object)*(((s1_ptr)_2)->base + _p_46793);
    _2 = (object)SEQ_PTR(_24402);
    _p_46793 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_46793)){
        _p_46793 = (object)DBL_PTR(_p_46793)->dbl;
    }
    _24402 = NOVALUE;

    /** symtab.e:396			end while*/
    goto L2; // [79] 31
    goto L3; // [82] 93
L1: 

    /** symtab.e:398			p = 0*/
    _p_46793 = 0;
L3: 

    /** symtab.e:401		if p = 0 then*/
    if (_p_46793 != 0)
    goto L4; // [97] 213

    /** symtab.e:403			temps_allocated += 1*/
    _56temps_allocated_46788 = _56temps_allocated_46788 + 1;

    /** symtab.e:404			p = tmp_alloc()*/
    _p_46793 = _56tmp_alloc();
    if (!IS_ATOM_INT(_p_46793)) {
        _1 = (object)(DBL_PTR(_p_46793)->dbl);
        DeRefDS(_p_46793);
        _p_46793 = _1;
    }

    /** symtab.e:405			SymTab[p][S_MODE] = M_TEMP*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24407 = NOVALUE;

    /** symtab.e:406			SymTab[p][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24411 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24411);
    if (!IS_ATOM_INT(_39S_TEMPS_16515)){
        _24412 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    }
    else{
        _24412 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    }
    _24411 = NOVALUE;
    Ref(_24412);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24412;
    if( _1 != _24412 ){
        DeRef(_1);
    }
    _24412 = NOVALUE;
    _24409 = NOVALUE;

    /** symtab.e:407			SymTab[CurrentSub][S_TEMPS] = p*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TEMPS_16515))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_46793;
    DeRef(_1);
    _24413 = NOVALUE;

    /** symtab.e:409			if inlining then*/
    if (_inlining_46791 == 0)
    {
        goto L5; // [181] 343
    }
    else{
    }

    /** symtab.e:410				SymTab[CurrentSub][S_STACK_SPACE] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530)){
        _24417 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    }
    else{
        _24417 = (object)*(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    }
    _24415 = NOVALUE;
    if (IS_ATOM_INT(_24417)) {
        _24418 = _24417 + 1;
        if (_24418 > MAXINT){
            _24418 = NewDouble((eudouble)_24418);
        }
    }
    else
    _24418 = binary_op(PLUS, 1, _24417);
    _24417 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_STACK_SPACE_16530))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_STACK_SPACE_16530)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_STACK_SPACE_16530);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24418;
    if( _1 != _24418 ){
        DeRef(_1);
    }
    _24418 = NOVALUE;
    _24415 = NOVALUE;
    goto L5; // [210] 343
L4: 

    /** symtab.e:413		elsif TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L6; // [217] 342
    }
    else{
    }

    /** symtab.e:418			SymTab[p][S_SCOPE] = DELETED*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 2;
    DeRef(_1);
    _24419 = NOVALUE;

    /** symtab.e:420			q = tmp_alloc()*/
    _q_46794 = _56tmp_alloc();
    if (!IS_ATOM_INT(_q_46794)) {
        _1 = (object)(DBL_PTR(_q_46794)->dbl);
        DeRefDS(_q_46794);
        _q_46794 = _1;
    }

    /** symtab.e:421			SymTab[q][S_MODE] = M_TEMP*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46794 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 3);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 3;
    DeRef(_1);
    _24422 = NOVALUE;

    /** symtab.e:422			SymTab[q][S_TEMP_NAME] = SymTab[p][S_TEMP_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46794 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24426 = (object)*(((s1_ptr)_2)->base + _p_46793);
    _2 = (object)SEQ_PTR(_24426);
    _24427 = (object)*(((s1_ptr)_2)->base + 34);
    _24426 = NOVALUE;
    Ref(_24427);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 34);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24427;
    if( _1 != _24427 ){
        DeRef(_1);
    }
    _24427 = NOVALUE;
    _24424 = NOVALUE;

    /** symtab.e:423			SymTab[q][S_NEXT] = SymTab[CurrentSub][S_TEMPS]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_q_46794 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24430 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24430);
    if (!IS_ATOM_INT(_39S_TEMPS_16515)){
        _24431 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    }
    else{
        _24431 = (object)*(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    }
    _24430 = NOVALUE;
    Ref(_24431);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24431;
    if( _1 != _24431 ){
        DeRef(_1);
    }
    _24431 = NOVALUE;
    _24428 = NOVALUE;

    /** symtab.e:424			SymTab[CurrentSub][S_TEMPS] = q*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_39S_TEMPS_16515))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TEMPS_16515)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _39S_TEMPS_16515);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _q_46794;
    DeRef(_1);
    _24432 = NOVALUE;

    /** symtab.e:425			p = q*/
    _p_46793 = _q_46794;
L6: 
L5: 

    /** symtab.e:428		if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L7; // [347] 385
    }
    else{
    }

    /** symtab.e:429			SymTab[p][S_GTYPE] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 36);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _24434 = NOVALUE;

    /** symtab.e:430			SymTab[p][S_SEQ_ELEM] = TYPE_OBJECT*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 33);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 16;
    DeRef(_1);
    _24436 = NOVALUE;
L7: 

    /** symtab.e:433		SymTab[p][S_OBJ] = NOVALUE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    Ref(_39NOVALUE_16670);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _39NOVALUE_16670;
    DeRef(_1);
    _24438 = NOVALUE;

    /** symtab.e:434		SymTab[p][S_USAGE] = T_UNKNOWN*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 5);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 4;
    DeRef(_1);
    _24440 = NOVALUE;

    /** symtab.e:435		SymTab[p][S_SCOPE] = IN_USE*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_46793 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 4);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 1;
    DeRef(_1);
    _24442 = NOVALUE;

    /** symtab.e:437		return p*/
    DeRef(_24397);
    _24397 = NOVALUE;
    return _p_46793;
    ;
}


void _56InitSymTab()
{
    object _hashval_46910 = NOVALUE;
    object _len_46911 = NOVALUE;
    object _s_46913 = NOVALUE;
    object _st_index_46914 = NOVALUE;
    object _kname_46915 = NOVALUE;
    object _fixups_46916 = NOVALUE;
    object _si_47055 = NOVALUE;
    object _sj_47056 = NOVALUE;
    object _25028 = NOVALUE;
    object _25027 = NOVALUE;
    object _24557 = NOVALUE;
    object _24556 = NOVALUE;
    object _24555 = NOVALUE;
    object _24554 = NOVALUE;
    object _24553 = NOVALUE;
    object _24551 = NOVALUE;
    object _24550 = NOVALUE;
    object _24549 = NOVALUE;
    object _24548 = NOVALUE;
    object _24546 = NOVALUE;
    object _24544 = NOVALUE;
    object _24542 = NOVALUE;
    object _24541 = NOVALUE;
    object _24539 = NOVALUE;
    object _24537 = NOVALUE;
    object _24535 = NOVALUE;
    object _24534 = NOVALUE;
    object _24532 = NOVALUE;
    object _24531 = NOVALUE;
    object _24530 = NOVALUE;
    object _24529 = NOVALUE;
    object _24528 = NOVALUE;
    object _24525 = NOVALUE;
    object _24524 = NOVALUE;
    object _24523 = NOVALUE;
    object _24521 = NOVALUE;
    object _24520 = NOVALUE;
    object _24519 = NOVALUE;
    object _24517 = NOVALUE;
    object _24516 = NOVALUE;
    object _24515 = NOVALUE;
    object _24512 = NOVALUE;
    object _24510 = NOVALUE;
    object _24508 = NOVALUE;
    object _24507 = NOVALUE;
    object _24504 = NOVALUE;
    object _24503 = NOVALUE;
    object _24501 = NOVALUE;
    object _24499 = NOVALUE;
    object _24497 = NOVALUE;
    object _24495 = NOVALUE;
    object _24494 = NOVALUE;
    object _24493 = NOVALUE;
    object _24490 = NOVALUE;
    object _24489 = NOVALUE;
    object _24487 = NOVALUE;
    object _24486 = NOVALUE;
    object _24484 = NOVALUE;
    object _24483 = NOVALUE;
    object _24482 = NOVALUE;
    object _24480 = NOVALUE;
    object _24478 = NOVALUE;
    object _24477 = NOVALUE;
    object _24475 = NOVALUE;
    object _24474 = NOVALUE;
    object _24473 = NOVALUE;
    object _24471 = NOVALUE;
    object _24470 = NOVALUE;
    object _24469 = NOVALUE;
    object _24467 = NOVALUE;
    object _24466 = NOVALUE;
    object _24465 = NOVALUE;
    object _24463 = NOVALUE;
    object _24462 = NOVALUE;
    object _24461 = NOVALUE;
    object _24460 = NOVALUE;
    object _24459 = NOVALUE;
    object _24458 = NOVALUE;
    object _24457 = NOVALUE;
    object _24456 = NOVALUE;
    object _24455 = NOVALUE;
    object _24454 = NOVALUE;
    object _24452 = NOVALUE;
    object _24451 = NOVALUE;
    object _24450 = NOVALUE;
    object _24449 = NOVALUE;
    object _24445 = NOVALUE;
    object _24444 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:445		sequence kname, fixups = {}*/
    RefDS(_21928);
    DeRefi(_fixups_46916);
    _fixups_46916 = _21928;

    /** symtab.e:447		for k = 1 to length(keylist) do*/
    if (IS_SEQUENCE(_64keylist_22750)){
            _24444 = SEQ_PTR(_64keylist_22750)->length;
    }
    else {
        _24444 = 1;
    }
    {
        object _k_46918;
        _k_46918 = 1;
L1: 
        if (_k_46918 > _24444){
            goto L2; // [15] 560
        }

        /** symtab.e:448			kname = keylist[k][K_NAME]*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24445 = (object)*(((s1_ptr)_2)->base + _k_46918);
        DeRef(_kname_46915);
        _2 = (object)SEQ_PTR(_24445);
        _kname_46915 = (object)*(((s1_ptr)_2)->base + 1);
        Ref(_kname_46915);
        _24445 = NOVALUE;

        /** symtab.e:449			len = length(kname)*/
        if (IS_SEQUENCE(_kname_46915)){
                _len_46911 = SEQ_PTR(_kname_46915)->length;
        }
        else {
            _len_46911 = 1;
        }

        /** symtab.e:450			hashval = hashfn(kname)*/
        RefDS(_kname_46915);
        _hashval_46910 = _56hashfn(_kname_46915);
        if (!IS_ATOM_INT(_hashval_46910)) {
            _1 = (object)(DBL_PTR(_hashval_46910)->dbl);
            DeRefDS(_hashval_46910);
            _hashval_46910 = _1;
        }

        /** symtab.e:451			st_index = NewEntry(kname,*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24449 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24449);
        _24450 = (object)*(((s1_ptr)_2)->base + 2);
        _24449 = NOVALUE;
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24451 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24451);
        _24452 = (object)*(((s1_ptr)_2)->base + 3);
        _24451 = NOVALUE;
        RefDS(_kname_46915);
        Ref(_24450);
        Ref(_24452);
        _st_index_46914 = _56NewEntry(_kname_46915, 0, _24450, _24452, _hashval_46910, 0, 0);
        _24450 = NOVALUE;
        _24452 = NOVALUE;
        if (!IS_ATOM_INT(_st_index_46914)) {
            _1 = (object)(DBL_PTR(_st_index_46914)->dbl);
            DeRefDS(_st_index_46914);
            _st_index_46914 = _1;
        }

        /** symtab.e:456			if find(keylist[k][K_TOKEN], RTN_TOKS) then*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24454 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24454);
        _24455 = (object)*(((s1_ptr)_2)->base + 3);
        _24454 = NOVALUE;
        _24456 = find_from(_24455, _40RTN_TOKS_16423, 1);
        _24455 = NOVALUE;
        if (_24456 == 0)
        {
            _24456 = NOVALUE;
            goto L3; // [110] 325
        }
        else{
            _24456 = NOVALUE;
        }

        /** symtab.e:457				SymTab[st_index] = SymTab[st_index] &*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24457 = (object)*(((s1_ptr)_2)->base + _st_index_46914);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24458 = (object)*(((s1_ptr)_2)->base + _st_index_46914);
        if (IS_SEQUENCE(_24458)){
                _24459 = SEQ_PTR(_24458)->length;
        }
        else {
            _24459 = 1;
        }
        _24458 = NOVALUE;
        _24460 = _39SIZEOF_ROUTINE_ENTRY_16597 - _24459;
        _24459 = NOVALUE;
        _24461 = Repeat(0, _24460);
        _24460 = NOVALUE;
        if (IS_SEQUENCE(_24457) && IS_ATOM(_24461)) {
        }
        else if (IS_ATOM(_24457) && IS_SEQUENCE(_24461)) {
            Ref(_24457);
            Prepend(&_24462, _24461, _24457);
        }
        else {
            Concat((object_ptr)&_24462, _24457, _24461);
            _24457 = NOVALUE;
        }
        _24457 = NOVALUE;
        DeRefDS(_24461);
        _24461 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _st_index_46914);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24462;
        if( _1 != _24462 ){
            DeRef(_1);
        }
        _24462 = NOVALUE;

        /** symtab.e:460				SymTab[st_index][S_NUM_ARGS] = keylist[k][K_NUM_ARGS]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24465 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24465);
        _24466 = (object)*(((s1_ptr)_2)->base + 5);
        _24465 = NOVALUE;
        Ref(_24466);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521))
        _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        else
        _2 = (object)(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24466;
        if( _1 != _24466 ){
            DeRef(_1);
        }
        _24466 = NOVALUE;
        _24463 = NOVALUE;

        /** symtab.e:461				SymTab[st_index][S_OPCODE] = keylist[k][K_OPCODE]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24469 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24469);
        _24470 = (object)*(((s1_ptr)_2)->base + 4);
        _24469 = NOVALUE;
        Ref(_24470);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 21);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24470;
        if( _1 != _24470 ){
            DeRef(_1);
        }
        _24470 = NOVALUE;
        _24467 = NOVALUE;

        /** symtab.e:462				SymTab[st_index][S_EFFECT] = keylist[k][K_EFFECT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24473 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24473);
        _24474 = (object)*(((s1_ptr)_2)->base + 6);
        _24473 = NOVALUE;
        Ref(_24474);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 23);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24474;
        if( _1 != _24474 ){
            DeRef(_1);
        }
        _24474 = NOVALUE;
        _24471 = NOVALUE;

        /** symtab.e:463				SymTab[st_index][S_REFLIST] = {}*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        RefDS(_21928);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 24);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _21928;
        DeRef(_1);
        _24475 = NOVALUE;

        /** symtab.e:464				if length(keylist[k]) > K_EFFECT then*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24477 = (object)*(((s1_ptr)_2)->base + _k_46918);
        if (IS_SEQUENCE(_24477)){
                _24478 = SEQ_PTR(_24477)->length;
        }
        else {
            _24478 = 1;
        }
        _24477 = NOVALUE;
        if (_24478 <= 6)
        goto L4; // [259] 324

        /** symtab.e:465				    SymTab[st_index][S_CODE] = keylist[k][K_CODE]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24482 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24482);
        _24483 = (object)*(((s1_ptr)_2)->base + 7);
        _24482 = NOVALUE;
        Ref(_24483);
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
        *(intptr_t *)_2 = _24483;
        if( _1 != _24483 ){
            DeRef(_1);
        }
        _24483 = NOVALUE;
        _24480 = NOVALUE;

        /** symtab.e:466				    SymTab[st_index][S_DEF_ARGS] = keylist[k][K_DEF_ARGS]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24486 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24486);
        _24487 = (object)*(((s1_ptr)_2)->base + 8);
        _24486 = NOVALUE;
        Ref(_24487);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 28);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24487;
        if( _1 != _24487 ){
            DeRef(_1);
        }
        _24487 = NOVALUE;
        _24484 = NOVALUE;

        /** symtab.e:467				    fixups &= st_index*/
        Append(&_fixups_46916, _fixups_46916, _st_index_46914);
L4: 
L3: 

        /** symtab.e:470			if keylist[k][K_TOKEN] = PROC then*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24489 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24489);
        _24490 = (object)*(((s1_ptr)_2)->base + 3);
        _24489 = NOVALUE;
        if (binary_op_a(NOTEQ, _24490, 27)){
            _24490 = NOVALUE;
            goto L5; // [341] 365
        }
        _24490 = NOVALUE;

        /** symtab.e:471				if equal(kname, "<TopLevel>") then*/
        if (_kname_46915 == _24492)
        _24493 = 1;
        else if (IS_ATOM_INT(_kname_46915) && IS_ATOM_INT(_24492))
        _24493 = 0;
        else
        _24493 = (compare(_kname_46915, _24492) == 0);
        if (_24493 == 0)
        {
            _24493 = NOVALUE;
            goto L6; // [351] 462
        }
        else{
            _24493 = NOVALUE;
        }

        /** symtab.e:472					TopLevelSub = st_index*/
        _39TopLevelSub_16822 = _st_index_46914;
        goto L6; // [362] 462
L5: 

        /** symtab.e:474			elsif keylist[k][K_TOKEN] = TYPE then*/
        _2 = (object)SEQ_PTR(_64keylist_22750);
        _24494 = (object)*(((s1_ptr)_2)->base + _k_46918);
        _2 = (object)SEQ_PTR(_24494);
        _24495 = (object)*(((s1_ptr)_2)->base + 3);
        _24494 = NOVALUE;
        if (binary_op_a(NOTEQ, _24495, 504)){
            _24495 = NOVALUE;
            goto L7; // [381] 461
        }
        _24495 = NOVALUE;

        /** symtab.e:475				if equal(kname, "object") then*/
        if (_kname_46915 == _22890)
        _24497 = 1;
        else if (IS_ATOM_INT(_kname_46915) && IS_ATOM_INT(_22890))
        _24497 = 0;
        else
        _24497 = (compare(_kname_46915, _22890) == 0);
        if (_24497 == 0)
        {
            _24497 = NOVALUE;
            goto L8; // [391] 404
        }
        else{
            _24497 = NOVALUE;
        }

        /** symtab.e:476					object_type = st_index*/
        _56object_type_46258 = _st_index_46914;
        goto L9; // [401] 460
L8: 

        /** symtab.e:477				elsif equal(kname, "atom") then*/
        if (_kname_46915 == _24498)
        _24499 = 1;
        else if (IS_ATOM_INT(_kname_46915) && IS_ATOM_INT(_24498))
        _24499 = 0;
        else
        _24499 = (compare(_kname_46915, _24498) == 0);
        if (_24499 == 0)
        {
            _24499 = NOVALUE;
            goto LA; // [410] 423
        }
        else{
            _24499 = NOVALUE;
        }

        /** symtab.e:478					atom_type = st_index*/
        _56atom_type_46260 = _st_index_46914;
        goto L9; // [420] 460
LA: 

        /** symtab.e:479				elsif equal(kname, "integer") then*/
        if (_kname_46915 == _24500)
        _24501 = 1;
        else if (IS_ATOM_INT(_kname_46915) && IS_ATOM_INT(_24500))
        _24501 = 0;
        else
        _24501 = (compare(_kname_46915, _24500) == 0);
        if (_24501 == 0)
        {
            _24501 = NOVALUE;
            goto LB; // [429] 442
        }
        else{
            _24501 = NOVALUE;
        }

        /** symtab.e:480					integer_type = st_index*/
        _56integer_type_46264 = _st_index_46914;
        goto L9; // [439] 460
LB: 

        /** symtab.e:481				elsif equal(kname, "sequence") then*/
        if (_kname_46915 == _24502)
        _24503 = 1;
        else if (IS_ATOM_INT(_kname_46915) && IS_ATOM_INT(_24502))
        _24503 = 0;
        else
        _24503 = (compare(_kname_46915, _24502) == 0);
        if (_24503 == 0)
        {
            _24503 = NOVALUE;
            goto LC; // [448] 459
        }
        else{
            _24503 = NOVALUE;
        }

        /** symtab.e:482					sequence_type = st_index*/
        _56sequence_type_46262 = _st_index_46914;
LC: 
L9: 
L7: 
L6: 

        /** symtab.e:485			if buckets[hashval] = 0 then*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _24504 = (object)*(((s1_ptr)_2)->base + _hashval_46910);
        if (binary_op_a(NOTEQ, _24504, 0)){
            _24504 = NOVALUE;
            goto LD; // [470] 485
        }
        _24504 = NOVALUE;

        /** symtab.e:486				buckets[hashval] = st_index*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _2 = (object)(((s1_ptr)_2)->base + _hashval_46910);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46914;
        DeRef(_1);
        goto LE; // [482] 553
LD: 

        /** symtab.e:488				s = buckets[hashval]*/
        _2 = (object)SEQ_PTR(_56buckets_46254);
        _s_46913 = (object)*(((s1_ptr)_2)->base + _hashval_46910);
        if (!IS_ATOM_INT(_s_46913)){
            _s_46913 = (object)DBL_PTR(_s_46913)->dbl;
        }

        /** symtab.e:489				while SymTab[s][S_SAMEHASH] != 0 do*/
LF: 
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24507 = (object)*(((s1_ptr)_2)->base + _s_46913);
        _2 = (object)SEQ_PTR(_24507);
        _24508 = (object)*(((s1_ptr)_2)->base + 9);
        _24507 = NOVALUE;
        if (binary_op_a(EQUALS, _24508, 0)){
            _24508 = NOVALUE;
            goto L10; // [512] 537
        }
        _24508 = NOVALUE;

        /** symtab.e:490					s = SymTab[s][S_SAMEHASH]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24510 = (object)*(((s1_ptr)_2)->base + _s_46913);
        _2 = (object)SEQ_PTR(_24510);
        _s_46913 = (object)*(((s1_ptr)_2)->base + 9);
        if (!IS_ATOM_INT(_s_46913)){
            _s_46913 = (object)DBL_PTR(_s_46913)->dbl;
        }
        _24510 = NOVALUE;

        /** symtab.e:491				end while*/
        goto LF; // [534] 500
L10: 

        /** symtab.e:492				SymTab[s][S_SAMEHASH] = st_index*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_s_46913 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + 9);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _st_index_46914;
        DeRef(_1);
        _24512 = NOVALUE;
LE: 

        /** symtab.e:494		end for*/
        _k_46918 = _k_46918 + 1;
        goto L1; // [555] 22
L2: 
        ;
    }

    /** symtab.e:495		file_start_sym = length(SymTab)*/
    if (IS_SEQUENCE(_36SymTab_15404)){
            _39file_start_sym_16821 = SEQ_PTR(_36SymTab_15404)->length;
    }
    else {
        _39file_start_sym_16821 = 1;
    }

    /** symtab.e:497		sequence si, sj*/

    /** symtab.e:498		CurrentSub = TopLevelSub*/
    _39CurrentSub_16823 = _39TopLevelSub_16822;

    /** symtab.e:499		for i=1 to length(fixups) do*/
    if (IS_SEQUENCE(_fixups_46916)){
            _24515 = SEQ_PTR(_fixups_46916)->length;
    }
    else {
        _24515 = 1;
    }
    {
        object _i_47060;
        _i_47060 = 1;
L11: 
        if (_i_47060 > _24515){
            goto L12; // [585] 946
        }

        /** symtab.e:500		    si = SymTab[fixups[i]][S_CODE] -- seq of either 0's or sequences of tokens*/
        _2 = (object)SEQ_PTR(_fixups_46916);
        _24516 = (object)*(((s1_ptr)_2)->base + _i_47060);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24517 = (object)*(((s1_ptr)_2)->base + _24516);
        DeRef(_si_47055);
        _2 = (object)SEQ_PTR(_24517);
        if (!IS_ATOM_INT(_39S_CODE_16482)){
            _si_47055 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_CODE_16482)->dbl));
        }
        else{
            _si_47055 = (object)*(((s1_ptr)_2)->base + _39S_CODE_16482);
        }
        Ref(_si_47055);
        _24517 = NOVALUE;

        /** symtab.e:501		    for j=1 to length(si) do*/
        if (IS_SEQUENCE(_si_47055)){
                _24519 = SEQ_PTR(_si_47055)->length;
        }
        else {
            _24519 = 1;
        }
        {
            object _j_47068;
            _j_47068 = 1;
L13: 
            if (_j_47068 > _24519){
                goto L14; // [617] 920
            }

            /** symtab.e:502		        if sequence(si[j]) then*/
            _2 = (object)SEQ_PTR(_si_47055);
            _24520 = (object)*(((s1_ptr)_2)->base + _j_47068);
            _24521 = IS_SEQUENCE(_24520);
            _24520 = NOVALUE;
            if (_24521 == 0)
            {
                _24521 = NOVALUE;
                goto L15; // [633] 913
            }
            else{
                _24521 = NOVALUE;
            }

            /** symtab.e:503		            sj = si[j] -- a sequence of tokens*/
            DeRef(_sj_47056);
            _2 = (object)SEQ_PTR(_si_47055);
            _sj_47056 = (object)*(((s1_ptr)_2)->base + _j_47068);
            Ref(_sj_47056);

            /** symtab.e:504					for ij=1 to length(sj) do*/
            if (IS_SEQUENCE(_sj_47056)){
                    _24523 = SEQ_PTR(_sj_47056)->length;
            }
            else {
                _24523 = 1;
            }
            {
                object _ij_47075;
                _ij_47075 = 1;
L16: 
                if (_ij_47075 > _24523){
                    goto L17; // [649] 906
                }

                /** symtab.e:505		                switch sj[ij][T_ID] with fallthru do*/
                _2 = (object)SEQ_PTR(_sj_47056);
                _24524 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                _2 = (object)SEQ_PTR(_24524);
                _24525 = (object)*(((s1_ptr)_2)->base + 1);
                _24524 = NOVALUE;
                if (IS_SEQUENCE(_24525) ){
                    goto L18; // [668] 899
                }
                if(!IS_ATOM_INT(_24525)){
                    if( (DBL_PTR(_24525)->dbl != (eudouble) ((object) DBL_PTR(_24525)->dbl) ) ){
                        goto L18; // [668] 899
                    }
                    _0 = (object) DBL_PTR(_24525)->dbl;
                }
                else {
                    _0 = _24525;
                };
                _24525 = NOVALUE;
                switch ( _0 ){ 

                    /** symtab.e:506		                    case ATOM then -- must create a lasting temp*/
                    case 502:

                    /** symtab.e:507		                    	if is_integer(sj[ij][T_SYM]) then*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    _24528 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                    _2 = (object)SEQ_PTR(_24528);
                    _24529 = (object)*(((s1_ptr)_2)->base + 2);
                    _24528 = NOVALUE;
                    Ref(_24529);
                    _24530 = _39is_integer(_24529);
                    _24529 = NOVALUE;
                    if (_24530 == 0) {
                        DeRef(_24530);
                        _24530 = NOVALUE;
                        goto L19; // [693] 717
                    }
                    else {
                        if (!IS_ATOM_INT(_24530) && DBL_PTR(_24530)->dbl == 0.0){
                            DeRef(_24530);
                            _24530 = NOVALUE;
                            goto L19; // [693] 717
                        }
                        DeRef(_24530);
                        _24530 = NOVALUE;
                    }
                    DeRef(_24530);
                    _24530 = NOVALUE;

                    /** symtab.e:508									st_index = NewIntSym(sj[ij][T_SYM])*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    _24531 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                    _2 = (object)SEQ_PTR(_24531);
                    _24532 = (object)*(((s1_ptr)_2)->base + 2);
                    _24531 = NOVALUE;
                    Ref(_24532);
                    _st_index_46914 = _56NewIntSym(_24532);
                    _24532 = NOVALUE;
                    if (!IS_ATOM_INT(_st_index_46914)) {
                        _1 = (object)(DBL_PTR(_st_index_46914)->dbl);
                        DeRefDS(_st_index_46914);
                        _st_index_46914 = _1;
                    }
                    goto L1A; // [714] 736
L19: 

                    /** symtab.e:510									st_index = NewDoubleSym(sj[ij][T_SYM])*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    _24534 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                    _2 = (object)SEQ_PTR(_24534);
                    _24535 = (object)*(((s1_ptr)_2)->base + 2);
                    _24534 = NOVALUE;
                    Ref(_24535);
                    _st_index_46914 = _56NewDoubleSym(_24535);
                    _24535 = NOVALUE;
                    if (!IS_ATOM_INT(_st_index_46914)) {
                        _1 = (object)(DBL_PTR(_st_index_46914)->dbl);
                        DeRefDS(_st_index_46914);
                        _st_index_46914 = _1;
                    }
L1A: 

                    /** symtab.e:512								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    _2 = (object)SEQ_PTR(_36SymTab_15404);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _36SymTab_15404 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 4);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = 1;
                    DeRef(_1);
                    _24537 = NOVALUE;

                    /** symtab.e:513								sj[ij][T_SYM] = st_index*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47056 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47075 + ((s1_ptr)_2)->base);
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46914;
                    DeRef(_1);
                    _24539 = NOVALUE;

                    /** symtab.e:514								break*/
                    goto L18; // [770] 899

                    /** symtab.e:515							case STRING then -- same*/
                    case 503:

                    /** symtab.e:516		                    	st_index = NewStringSym(sj[ij][T_SYM])*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    _24541 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                    _2 = (object)SEQ_PTR(_24541);
                    _24542 = (object)*(((s1_ptr)_2)->base + 2);
                    _24541 = NOVALUE;
                    Ref(_24542);
                    _st_index_46914 = _56NewStringSym(_24542);
                    _24542 = NOVALUE;
                    if (!IS_ATOM_INT(_st_index_46914)) {
                        _1 = (object)(DBL_PTR(_st_index_46914)->dbl);
                        DeRefDS(_st_index_46914);
                        _st_index_46914 = _1;
                    }

                    /** symtab.e:517								SymTab[st_index][S_SCOPE] = IN_USE -- TempKeep()*/
                    _2 = (object)SEQ_PTR(_36SymTab_15404);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _36SymTab_15404 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_st_index_46914 + ((s1_ptr)_2)->base);
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 4);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = 1;
                    DeRef(_1);
                    _24544 = NOVALUE;

                    /** symtab.e:518								sj[ij][T_SYM] = st_index*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47056 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47075 + ((s1_ptr)_2)->base);
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _st_index_46914;
                    DeRef(_1);
                    _24546 = NOVALUE;

                    /** symtab.e:519								break*/
                    goto L18; // [826] 899

                    /** symtab.e:520							case BUILT_IN then -- name of a builtin in econd field*/
                    case 511:

                    /** symtab.e:521	                            sj[ij] = keyfind(sj[ij][T_SYM],-1)*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    _24548 = (object)*(((s1_ptr)_2)->base + _ij_47075);
                    _2 = (object)SEQ_PTR(_24548);
                    _24549 = (object)*(((s1_ptr)_2)->base + 2);
                    _24548 = NOVALUE;
                    Ref(_24549);
                    DeRef(_25027);
                    _25027 = _24549;
                    _25028 = _56hashfn(_25027);
                    _25027 = NOVALUE;
                    Ref(_24549);
                    _24550 = _56keyfind(_24549, -1, _39current_file_no_16815, 0, _25028);
                    _24549 = NOVALUE;
                    _25028 = NOVALUE;
                    _2 = (object)SEQ_PTR(_sj_47056);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47056 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + _ij_47075);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24550;
                    if( _1 != _24550 ){
                        DeRef(_1);
                    }
                    _24550 = NOVALUE;

                    /** symtab.e:522								break*/
                    goto L18; // [867] 899

                    /** symtab.e:523							case DEF_PARAM then*/
                    case 510:

                    /** symtab.e:524								sj[ij][T_SYM] &= fixups[i]*/
                    _2 = (object)SEQ_PTR(_sj_47056);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        _sj_47056 = MAKE_SEQ(_2);
                    }
                    _3 = (object)(_ij_47075 + ((s1_ptr)_2)->base);
                    _2 = (object)SEQ_PTR(_fixups_46916);
                    _24553 = (object)*(((s1_ptr)_2)->base + _i_47060);
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    _24554 = (object)*(((s1_ptr)_2)->base + 2);
                    _24551 = NOVALUE;
                    if (IS_SEQUENCE(_24554) && IS_ATOM(_24553)) {
                        Append(&_24555, _24554, _24553);
                    }
                    else if (IS_ATOM(_24554) && IS_SEQUENCE(_24553)) {
                    }
                    else {
                        Concat((object_ptr)&_24555, _24554, _24553);
                        _24554 = NOVALUE;
                    }
                    _24554 = NOVALUE;
                    _24553 = NOVALUE;
                    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
                    if (!UNIQUE(_2)) {
                        _2 = (object)SequenceCopy((s1_ptr)_2);
                        *(intptr_t *)_3 = MAKE_SEQ(_2);
                    }
                    _2 = (object)(((s1_ptr)_2)->base + 2);
                    _1 = *(intptr_t *)_2;
                    *(intptr_t *)_2 = _24555;
                    if( _1 != _24555 ){
                        DeRef(_1);
                    }
                    _24555 = NOVALUE;
                    _24551 = NOVALUE;
                ;}L18: 

                /** symtab.e:526					end for*/
                _ij_47075 = _ij_47075 + 1;
                goto L16; // [901] 656
L17: 
                ;
            }

            /** symtab.e:527					si[j] = sj*/
            RefDS(_sj_47056);
            _2 = (object)SEQ_PTR(_si_47055);
            if (!UNIQUE(_2)) {
                _2 = (object)SequenceCopy((s1_ptr)_2);
                _si_47055 = MAKE_SEQ(_2);
            }
            _2 = (object)(((s1_ptr)_2)->base + _j_47068);
            _1 = *(intptr_t *)_2;
            *(intptr_t *)_2 = _sj_47056;
            DeRef(_1);
L15: 

            /** symtab.e:529			end for*/
            _j_47068 = _j_47068 + 1;
            goto L13; // [915] 624
L14: 
            ;
        }

        /** symtab.e:530			SymTab[fixups[i]][S_CODE] = si*/
        _2 = (object)SEQ_PTR(_fixups_46916);
        _24556 = (object)*(((s1_ptr)_2)->base + _i_47060);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_24556 + ((s1_ptr)_2)->base);
        RefDS(_si_47055);
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
        *(intptr_t *)_2 = _si_47055;
        DeRef(_1);
        _24557 = NOVALUE;

        /** symtab.e:531		end for*/
        _i_47060 = _i_47060 + 1;
        goto L11; // [941] 592
L12: 
        ;
    }

    /** symtab.e:532	end procedure*/
    DeRef(_kname_46915);
    DeRefi(_fixups_46916);
    DeRef(_si_47055);
    DeRef(_sj_47056);
    _24556 = NOVALUE;
    _24458 = NOVALUE;
    _24477 = NOVALUE;
    _24516 = NOVALUE;
    return;
    ;
}


void _56add_ref(object _tok_47144)
{
    object _s_47146 = NOVALUE;
    object _24573 = NOVALUE;
    object _24572 = NOVALUE;
    object _24570 = NOVALUE;
    object _24569 = NOVALUE;
    object _24568 = NOVALUE;
    object _24566 = NOVALUE;
    object _24565 = NOVALUE;
    object _24564 = NOVALUE;
    object _24563 = NOVALUE;
    object _24562 = NOVALUE;
    object _24561 = NOVALUE;
    object _24560 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:538		s = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_47144);
    _s_47146 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_47146)){
        _s_47146 = (object)DBL_PTR(_s_47146)->dbl;
    }

    /** symtab.e:539		if s != CurrentSub and -- ignore self-ref's*/
    _24560 = (_s_47146 != _39CurrentSub_16823);
    if (_24560 == 0) {
        goto L1; // [19] 98
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24562 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24562);
    _24563 = (object)*(((s1_ptr)_2)->base + 24);
    _24562 = NOVALUE;
    _24564 = find_from(_s_47146, _24563, 1);
    _24563 = NOVALUE;
    _24565 = (_24564 == 0);
    _24564 = NOVALUE;
    if (_24565 == 0)
    {
        DeRef(_24565);
        _24565 = NOVALUE;
        goto L1; // [46] 98
    }
    else{
        DeRef(_24565);
        _24565 = NOVALUE;
    }

    /** symtab.e:542			SymTab[s][S_NREFS] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47146 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24568 = (object)*(((s1_ptr)_2)->base + 12);
    _24566 = NOVALUE;
    if (IS_ATOM_INT(_24568)) {
        _24569 = _24568 + 1;
        if (_24569 > MAXINT){
            _24569 = NewDouble((eudouble)_24569);
        }
    }
    else
    _24569 = binary_op(PLUS, 1, _24568);
    _24568 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 12);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24569;
    if( _1 != _24569 ){
        DeRef(_1);
    }
    _24569 = NOVALUE;
    _24566 = NOVALUE;

    /** symtab.e:543			SymTab[CurrentSub][S_REFLIST] &= s*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_39CurrentSub_16823 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24572 = (object)*(((s1_ptr)_2)->base + 24);
    _24570 = NOVALUE;
    if (IS_SEQUENCE(_24572) && IS_ATOM(_s_47146)) {
        Append(&_24573, _24572, _s_47146);
    }
    else if (IS_ATOM(_24572) && IS_SEQUENCE(_s_47146)) {
    }
    else {
        Concat((object_ptr)&_24573, _24572, _s_47146);
        _24572 = NOVALUE;
    }
    _24572 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 24);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24573;
    if( _1 != _24573 ){
        DeRef(_1);
    }
    _24573 = NOVALUE;
    _24570 = NOVALUE;
L1: 

    /** symtab.e:545	end procedure*/
    DeRef(_tok_47144);
    DeRef(_24560);
    _24560 = NOVALUE;
    return;
    ;
}


void _56mark_all(object _attribute_47176)
{
    object _p_47179 = NOVALUE;
    object _sym_file_47186 = NOVALUE;
    object _scope_47203 = NOVALUE;
    object _24605 = NOVALUE;
    object _24604 = NOVALUE;
    object _24603 = NOVALUE;
    object _24601 = NOVALUE;
    object _24599 = NOVALUE;
    object _24598 = NOVALUE;
    object _24597 = NOVALUE;
    object _24596 = NOVALUE;
    object _24595 = NOVALUE;
    object _24593 = NOVALUE;
    object _24592 = NOVALUE;
    object _24591 = NOVALUE;
    object _24590 = NOVALUE;
    object _24586 = NOVALUE;
    object _24585 = NOVALUE;
    object _24584 = NOVALUE;
    object _24582 = NOVALUE;
    object _24581 = NOVALUE;
    object _24579 = NOVALUE;
    object _24577 = NOVALUE;
    object _24574 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:550		if just_mark_everything_from then*/
    if (_56just_mark_everything_from_47173 == 0)
    {
        goto L1; // [7] 270
    }
    else{
    }

    /** symtab.e:551			symtab_pointer p = SymTab[just_mark_everything_from][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24574 = (object)*(((s1_ptr)_2)->base + _56just_mark_everything_from_47173);
    _2 = (object)SEQ_PTR(_24574);
    _p_47179 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47179)){
        _p_47179 = (object)DBL_PTR(_p_47179)->dbl;
    }
    _24574 = NOVALUE;

    /** symtab.e:552			while p != 0 do*/
L2: 
    if (_p_47179 == 0)
    goto L3; // [33] 269

    /** symtab.e:553				integer sym_file = SymTab[p][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24577 = (object)*(((s1_ptr)_2)->base + _p_47179);
    _2 = (object)SEQ_PTR(_24577);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _sym_file_47186 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _sym_file_47186 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_sym_file_47186)){
        _sym_file_47186 = (object)DBL_PTR(_sym_file_47186)->dbl;
    }
    _24577 = NOVALUE;

    /** symtab.e:554				just_mark_everything_from = p*/
    _56just_mark_everything_from_47173 = _p_47179;

    /** symtab.e:555				if sym_file = current_file_no or map:has( recheck_routines, sym_file ) then*/
    _24579 = (_sym_file_47186 == _39current_file_no_16815);
    if (_24579 != 0) {
        goto L4; // [68] 84
    }
    Ref(_56recheck_routines_47246);
    _24581 = _30has(_56recheck_routines_47246, _sym_file_47186);
    if (_24581 == 0) {
        DeRef(_24581);
        _24581 = NOVALUE;
        goto L5; // [80] 108
    }
    else {
        if (!IS_ATOM_INT(_24581) && DBL_PTR(_24581)->dbl == 0.0){
            DeRef(_24581);
            _24581 = NOVALUE;
            goto L5; // [80] 108
        }
        DeRef(_24581);
        _24581 = NOVALUE;
    }
    DeRef(_24581);
    _24581 = NOVALUE;
L4: 

    /** symtab.e:556					SymTab[p][attribute] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_p_47179 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24584 = (object)*(((s1_ptr)_2)->base + _attribute_47176);
    _24582 = NOVALUE;
    if (IS_ATOM_INT(_24584)) {
        _24585 = _24584 + 1;
        if (_24585 > MAXINT){
            _24585 = NewDouble((eudouble)_24585);
        }
    }
    else
    _24585 = binary_op(PLUS, 1, _24584);
    _24584 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47176);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24585;
    if( _1 != _24585 ){
        DeRef(_1);
    }
    _24585 = NOVALUE;
    _24582 = NOVALUE;
    goto L6; // [105] 246
L5: 

    /** symtab.e:558					integer scope = SymTab[p][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24586 = (object)*(((s1_ptr)_2)->base + _p_47179);
    _2 = (object)SEQ_PTR(_24586);
    _scope_47203 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47203)){
        _scope_47203 = (object)DBL_PTR(_scope_47203)->dbl;
    }
    _24586 = NOVALUE;

    /** symtab.e:559					switch scope with fallthru do*/
    _0 = _scope_47203;
    switch ( _0 ){ 

        /** symtab.e:560						case SC_PUBLIC then*/
        case 13:

        /** symtab.e:561							if and_bits( DIRECT_OR_PUBLIC_INCLUDE, include_matrix[current_file_no][sym_file] ) then*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24590 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
        _2 = (object)SEQ_PTR(_24590);
        _24591 = (object)*(((s1_ptr)_2)->base + _sym_file_47186);
        _24590 = NOVALUE;
        if (IS_ATOM_INT(_24591)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24591;
                 _24592 = MAKE_UINT(tu);
            }
        }
        else {
            _24592 = binary_op(AND_BITS, 6, _24591);
        }
        _24591 = NOVALUE;
        if (_24592 == 0) {
            DeRef(_24592);
            _24592 = NOVALUE;
            goto L7; // [155] 243
        }
        else {
            if (!IS_ATOM_INT(_24592) && DBL_PTR(_24592)->dbl == 0.0){
                DeRef(_24592);
                _24592 = NOVALUE;
                goto L7; // [155] 243
            }
            DeRef(_24592);
            _24592 = NOVALUE;
        }
        DeRef(_24592);
        _24592 = NOVALUE;

        /** symtab.e:562								SymTab[p][attribute] += 1*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47179 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24595 = (object)*(((s1_ptr)_2)->base + _attribute_47176);
        _24593 = NOVALUE;
        if (IS_ATOM_INT(_24595)) {
            _24596 = _24595 + 1;
            if (_24596 > MAXINT){
                _24596 = NewDouble((eudouble)_24596);
            }
        }
        else
        _24596 = binary_op(PLUS, 1, _24595);
        _24595 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47176);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24596;
        if( _1 != _24596 ){
            DeRef(_1);
        }
        _24596 = NOVALUE;
        _24593 = NOVALUE;

        /** symtab.e:564							break*/
        goto L7; // [182] 243

        /** symtab.e:565						case SC_EXPORT then*/
        case 11:

        /** symtab.e:566							if not and_bits( DIRECT_INCLUDE, include_matrix[current_file_no][sym_file] ) then*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24597 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
        _2 = (object)SEQ_PTR(_24597);
        _24598 = (object)*(((s1_ptr)_2)->base + _sym_file_47186);
        _24597 = NOVALUE;
        if (IS_ATOM_INT(_24598)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24598;
                 _24599 = MAKE_UINT(tu);
            }
        }
        else {
            _24599 = binary_op(AND_BITS, 2, _24598);
        }
        _24598 = NOVALUE;
        if (IS_ATOM_INT(_24599)) {
            if (_24599 != 0){
                DeRef(_24599);
                _24599 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        else {
            if (DBL_PTR(_24599)->dbl != 0.0){
                DeRef(_24599);
                _24599 = NOVALUE;
                goto L8; // [208] 216
            }
        }
        DeRef(_24599);
        _24599 = NOVALUE;

        /** symtab.e:567								break*/
        goto L9; // [213] 217
L8: 
L9: 

        /** symtab.e:570						case SC_GLOBAL then*/
        case 6:

        /** symtab.e:571							SymTab[p][attribute] += 1*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _36SymTab_15404 = MAKE_SEQ(_2);
        }
        _3 = (object)(_p_47179 + ((s1_ptr)_2)->base);
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        _24603 = (object)*(((s1_ptr)_2)->base + _attribute_47176);
        _24601 = NOVALUE;
        if (IS_ATOM_INT(_24603)) {
            _24604 = _24603 + 1;
            if (_24604 > MAXINT){
                _24604 = NewDouble((eudouble)_24604);
            }
        }
        else
        _24604 = binary_op(PLUS, 1, _24603);
        _24603 = NOVALUE;
        _2 = (object)SEQ_PTR(*(intptr_t *)_3);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            *(intptr_t *)_3 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _attribute_47176);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _24604;
        if( _1 != _24604 ){
            DeRef(_1);
        }
        _24604 = NOVALUE;
        _24601 = NOVALUE;
    ;}L7: 
L6: 

    /** symtab.e:575				p = SymTab[p][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24605 = (object)*(((s1_ptr)_2)->base + _p_47179);
    _2 = (object)SEQ_PTR(_24605);
    _p_47179 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_p_47179)){
        _p_47179 = (object)DBL_PTR(_p_47179)->dbl;
    }
    _24605 = NOVALUE;

    /** symtab.e:576			end while*/
    goto L2; // [266] 33
L3: 
L1: 

    /** symtab.e:578	end procedure*/
    DeRef(_24579);
    _24579 = NOVALUE;
    return;
    ;
}


void _56mark_rechecks(object _file_no_47252)
{
    object _recheck_targets_47255 = NOVALUE;
    object _remaining_47259 = NOVALUE;
    object _marked_47263 = NOVALUE;
    object _24612 = NOVALUE;
    object _24610 = NOVALUE;
    object _24609 = NOVALUE;
    object _24608 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_file_no_47252)) {
        _1 = (object)(DBL_PTR(_file_no_47252)->dbl);
        DeRefDS(_file_no_47252);
        _file_no_47252 = _1;
    }

    /** symtab.e:584		sequence recheck_targets = map:get( recheck_routines, file_no, {} )*/
    Ref(_56recheck_routines_47246);
    RefDS(_21928);
    _0 = _recheck_targets_47255;
    _recheck_targets_47255 = _30get(_56recheck_routines_47246, _file_no_47252, _21928);
    DeRef(_0);

    /** symtab.e:585		if length( recheck_targets ) then*/
    if (IS_SEQUENCE(_recheck_targets_47255)){
            _24608 = SEQ_PTR(_recheck_targets_47255)->length;
    }
    else {
        _24608 = 1;
    }
    if (_24608 == 0)
    {
        _24608 = NOVALUE;
        goto L1; // [20] 129
    }
    else{
        _24608 = NOVALUE;
    }

    /** symtab.e:586			sequence remaining = {}*/
    RefDS(_21928);
    DeRefi(_remaining_47259);
    _remaining_47259 = _21928;

    /** symtab.e:587			for i = length( recheck_targets ) to 1 by -1 do*/
    if (IS_SEQUENCE(_recheck_targets_47255)){
            _24609 = SEQ_PTR(_recheck_targets_47255)->length;
    }
    else {
        _24609 = 1;
    }
    {
        object _i_47261;
        _i_47261 = _24609;
L2: 
        if (_i_47261 < 1){
            goto L3; // [35] 117
        }

        /** symtab.e:588				integer marked = 0*/
        _marked_47263 = 0;

        /** symtab.e:589				if TRANSLATE then*/
        if (_39TRANSLATE_16440 == 0)
        {
            goto L4; // [51] 72
        }
        else{
        }

        /** symtab.e:590					marked = MarkTargets( recheck_targets[i], S_RI_TARGET )*/
        _2 = (object)SEQ_PTR(_recheck_targets_47255);
        _24610 = (object)*(((s1_ptr)_2)->base + _i_47261);
        Ref(_24610);
        _marked_47263 = _56MarkTargets(_24610, 53);
        _24610 = NOVALUE;
        if (!IS_ATOM_INT(_marked_47263)) {
            _1 = (object)(DBL_PTR(_marked_47263)->dbl);
            DeRefDS(_marked_47263);
            _marked_47263 = _1;
        }
        goto L5; // [69] 96
L4: 

        /** symtab.e:591				elsif BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto L6; // [76] 95
        }
        else{
        }

        /** symtab.e:592					marked = MarkTargets( recheck_targets[i], S_NREFS )*/
        _2 = (object)SEQ_PTR(_recheck_targets_47255);
        _24612 = (object)*(((s1_ptr)_2)->base + _i_47261);
        Ref(_24612);
        _marked_47263 = _56MarkTargets(_24612, 12);
        _24612 = NOVALUE;
        if (!IS_ATOM_INT(_marked_47263)) {
            _1 = (object)(DBL_PTR(_marked_47263)->dbl);
            DeRefDS(_marked_47263);
            _marked_47263 = _1;
        }
L6: 
L5: 

        /** symtab.e:594				if not marked then*/
        if (_marked_47263 != 0)
        goto L7; // [98] 108

        /** symtab.e:595					remaining &= file_no*/
        Append(&_remaining_47259, _remaining_47259, _file_no_47252);
L7: 

        /** symtab.e:597			end for*/
        _i_47261 = _i_47261 + -1;
        goto L2; // [112] 42
L3: 
        ;
    }

    /** symtab.e:598			map:put( recheck_routines, file_no, recheck_targets )*/
    Ref(_56recheck_routines_47246);
    RefDS(_recheck_targets_47255);
    _30put(_56recheck_routines_47246, _file_no_47252, _recheck_targets_47255, 1, 0);
L1: 
    DeRefi(_remaining_47259);
    _remaining_47259 = NOVALUE;

    /** symtab.e:600	end procedure*/
    DeRef(_recheck_targets_47255);
    return;
    ;
}


void _56mark_final_targets()
{
    object _size_1__tmp_at47_47291 = NOVALUE;
    object _size_inlined_size_at_47_47290 = NOVALUE;
    object _recheck_files_47292 = NOVALUE;
    object _24618 = NOVALUE;
    object _24617 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:603		if just_mark_everything_from then*/
    if (_56just_mark_everything_from_47173 == 0)
    {
        goto L1; // [5] 44
    }
    else{
    }

    /** symtab.e:604			if TRANSLATE then*/
    if (_39TRANSLATE_16440 == 0)
    {
        goto L2; // [12] 25
    }
    else{
    }

    /** symtab.e:605				mark_all( S_RI_TARGET )*/
    _56mark_all(53);
    goto L3; // [22] 109
L2: 

    /** symtab.e:606			elsif BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L3; // [29] 109
    }
    else{
    }

    /** symtab.e:607				mark_all( S_NREFS )*/
    _56mark_all(12);
    goto L3; // [41] 109
L1: 

    /** symtab.e:609		elsif map:size( recheck_routines ) then*/

    /** map.e:802		return eumem:ram_space[the_map_p][MAP_SIZE]*/
    DeRef(_size_1__tmp_at47_47291);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_56recheck_routines_47246)){
        _size_1__tmp_at47_47291 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_56recheck_routines_47246)->dbl));
    }
    else{
        _size_1__tmp_at47_47291 = (object)*(((s1_ptr)_2)->base + _56recheck_routines_47246);
    }
    Ref(_size_1__tmp_at47_47291);
    DeRef(_size_inlined_size_at_47_47290);
    _2 = (object)SEQ_PTR(_size_1__tmp_at47_47291);
    _size_inlined_size_at_47_47290 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_size_inlined_size_at_47_47290);
    DeRef(_size_1__tmp_at47_47291);
    _size_1__tmp_at47_47291 = NOVALUE;
    if (_size_inlined_size_at_47_47290 == 0) {
        goto L4; // [63] 106
    }
    else {
        if (!IS_ATOM_INT(_size_inlined_size_at_47_47290) && DBL_PTR(_size_inlined_size_at_47_47290)->dbl == 0.0){
            goto L4; // [63] 106
        }
    }

    /** symtab.e:610			sequence recheck_files = map:keys( recheck_routines )*/
    Ref(_56recheck_routines_47246);
    _0 = _recheck_files_47292;
    _recheck_files_47292 = _30keys(_56recheck_routines_47246, 0);
    DeRef(_0);

    /** symtab.e:611			for i = 1 to length( recheck_files ) do*/
    if (IS_SEQUENCE(_recheck_files_47292)){
            _24617 = SEQ_PTR(_recheck_files_47292)->length;
    }
    else {
        _24617 = 1;
    }
    {
        object _i_47295;
        _i_47295 = 1;
L5: 
        if (_i_47295 > _24617){
            goto L6; // [82] 105
        }

        /** symtab.e:612				mark_rechecks( recheck_files[i] )*/
        _2 = (object)SEQ_PTR(_recheck_files_47292);
        _24618 = (object)*(((s1_ptr)_2)->base + _i_47295);
        Ref(_24618);
        _56mark_rechecks(_24618);
        _24618 = NOVALUE;

        /** symtab.e:613			end for*/
        _i_47295 = _i_47295 + 1;
        goto L5; // [100] 89
L6: 
        ;
    }
L4: 
    DeRef(_recheck_files_47292);
    _recheck_files_47292 = NOVALUE;
L3: 

    /** symtab.e:615	end procedure*/
    return;
    ;
}


object _56is_routine(object _sym_47301)
{
    object _tok_47302 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:618		integer tok = sym_token( sym )*/
    _tok_47302 = _56sym_token(_sym_47301);
    if (!IS_ATOM_INT(_tok_47302)) {
        _1 = (object)(DBL_PTR(_tok_47302)->dbl);
        DeRefDS(_tok_47302);
        _tok_47302 = _1;
    }

    /** symtab.e:619		switch tok do*/
    _0 = _tok_47302;
    switch ( _0 ){ 

        /** symtab.e:620			case FUNC, PROC, TYPE then*/
        case 501:
        case 27:
        case 504:

        /** symtab.e:621				return 1*/
        return 1;
        goto L1; // [32] 45

        /** symtab.e:622			case else*/
        default:

        /** symtab.e:623				return 0*/
        return 0;
    ;}L1: 
    ;
}


object _56is_visible(object _sym_47315, object _from_file_47316)
{
    object _scope_47317 = NOVALUE;
    object _sym_file_47320 = NOVALUE;
    object _visible_mask_47325 = NOVALUE;
    object _24630 = NOVALUE;
    object _24629 = NOVALUE;
    object _24628 = NOVALUE;
    object _24627 = NOVALUE;
    object _24623 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:628		integer scope = sym_scope( sym )*/
    _scope_47317 = _56sym_scope(_sym_47315);
    if (!IS_ATOM_INT(_scope_47317)) {
        _1 = (object)(DBL_PTR(_scope_47317)->dbl);
        DeRefDS(_scope_47317);
        _scope_47317 = _1;
    }

    /** symtab.e:629		integer sym_file = SymTab[sym][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24623 = (object)*(((s1_ptr)_2)->base + _sym_47315);
    _2 = (object)SEQ_PTR(_24623);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _sym_file_47320 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _sym_file_47320 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_sym_file_47320)){
        _sym_file_47320 = (object)DBL_PTR(_sym_file_47320)->dbl;
    }
    _24623 = NOVALUE;

    /** symtab.e:631		switch scope do*/
    _0 = _scope_47317;
    switch ( _0 ){ 

        /** symtab.e:632			case SC_PUBLIC then*/
        case 13:

        /** symtab.e:633				visible_mask = DIRECT_OR_PUBLIC_INCLUDE*/
        _visible_mask_47325 = 6;
        goto L1; // [49] 93

        /** symtab.e:634			case SC_EXPORT then*/
        case 11:

        /** symtab.e:635				visible_mask = DIRECT_INCLUDE*/
        _visible_mask_47325 = 2;
        goto L1; // [64] 93

        /** symtab.e:636			case SC_GLOBAL then*/
        case 6:

        /** symtab.e:637				return 1*/
        return 1;
        goto L1; // [76] 93

        /** symtab.e:638			case else*/
        default:

        /** symtab.e:639				return from_file = sym_file*/
        _24627 = (_from_file_47316 == _sym_file_47320);
        return _24627;
    ;}L1: 

    /** symtab.e:641		return and_bits( visible_mask, include_matrix[from_file][sym_file] )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _24628 = (object)*(((s1_ptr)_2)->base + _from_file_47316);
    _2 = (object)SEQ_PTR(_24628);
    _24629 = (object)*(((s1_ptr)_2)->base + _sym_file_47320);
    _24628 = NOVALUE;
    if (IS_ATOM_INT(_24629)) {
        {uintptr_t tu;
             tu = (uintptr_t)_visible_mask_47325 & (uintptr_t)_24629;
             _24630 = MAKE_UINT(tu);
        }
    }
    else {
        _24630 = binary_op(AND_BITS, _visible_mask_47325, _24629);
    }
    _24629 = NOVALUE;
    DeRef(_24627);
    _24627 = NOVALUE;
    return _24630;
    ;
}


object _56MarkTargets(object _s_47345, object _attribute_47346)
{
    object _p_47348 = NOVALUE;
    object _sname_47349 = NOVALUE;
    object _string_47350 = NOVALUE;
    object _colon_47351 = NOVALUE;
    object _h_47352 = NOVALUE;
    object _scope_47353 = NOVALUE;
    object _found_47374 = NOVALUE;
    object _24678 = NOVALUE;
    object _24676 = NOVALUE;
    object _24675 = NOVALUE;
    object _24674 = NOVALUE;
    object _24673 = NOVALUE;
    object _24671 = NOVALUE;
    object _24670 = NOVALUE;
    object _24669 = NOVALUE;
    object _24668 = NOVALUE;
    object _24667 = NOVALUE;
    object _24665 = NOVALUE;
    object _24664 = NOVALUE;
    object _24663 = NOVALUE;
    object _24661 = NOVALUE;
    object _24659 = NOVALUE;
    object _24657 = NOVALUE;
    object _24656 = NOVALUE;
    object _24655 = NOVALUE;
    object _24654 = NOVALUE;
    object _24652 = NOVALUE;
    object _24651 = NOVALUE;
    object _24650 = NOVALUE;
    object _24649 = NOVALUE;
    object _24647 = NOVALUE;
    object _24646 = NOVALUE;
    object _24642 = NOVALUE;
    object _24641 = NOVALUE;
    object _24640 = NOVALUE;
    object _24639 = NOVALUE;
    object _24638 = NOVALUE;
    object _24637 = NOVALUE;
    object _24636 = NOVALUE;
    object _24635 = NOVALUE;
    object _24634 = NOVALUE;
    object _24633 = NOVALUE;
    object _24632 = NOVALUE;
    object _24631 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_s_47345)) {
        _1 = (object)(DBL_PTR(_s_47345)->dbl);
        DeRefDS(_s_47345);
        _s_47345 = _1;
    }

    /** symtab.e:648		sequence sname*/

    /** symtab.e:649		sequence string*/

    /** symtab.e:650		integer colon, h*/

    /** symtab.e:651		integer scope*/

    /** symtab.e:653		if (SymTab[s][S_MODE] = M_TEMP or*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24631 = (object)*(((s1_ptr)_2)->base + _s_47345);
    _2 = (object)SEQ_PTR(_24631);
    _24632 = (object)*(((s1_ptr)_2)->base + 3);
    _24631 = NOVALUE;
    if (IS_ATOM_INT(_24632)) {
        _24633 = (_24632 == 3);
    }
    else {
        _24633 = binary_op(EQUALS, _24632, 3);
    }
    _24632 = NOVALUE;
    if (IS_ATOM_INT(_24633)) {
        if (_24633 != 0) {
            _24634 = 1;
            goto L1; // [33] 59
        }
    }
    else {
        if (DBL_PTR(_24633)->dbl != 0.0) {
            _24634 = 1;
            goto L1; // [33] 59
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24635 = (object)*(((s1_ptr)_2)->base + _s_47345);
    _2 = (object)SEQ_PTR(_24635);
    _24636 = (object)*(((s1_ptr)_2)->base + 3);
    _24635 = NOVALUE;
    if (IS_ATOM_INT(_24636)) {
        _24637 = (_24636 == 2);
    }
    else {
        _24637 = binary_op(EQUALS, _24636, 2);
    }
    _24636 = NOVALUE;
    DeRef(_24634);
    if (IS_ATOM_INT(_24637))
    _24634 = (_24637 != 0);
    else
    _24634 = DBL_PTR(_24637)->dbl != 0.0;
L1: 
    if (_24634 == 0) {
        goto L2; // [59] 411
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24639 = (object)*(((s1_ptr)_2)->base + _s_47345);
    _2 = (object)SEQ_PTR(_24639);
    _24640 = (object)*(((s1_ptr)_2)->base + 1);
    _24639 = NOVALUE;
    _24641 = IS_SEQUENCE(_24640);
    _24640 = NOVALUE;
    if (_24641 == 0)
    {
        _24641 = NOVALUE;
        goto L2; // [79] 411
    }
    else{
        _24641 = NOVALUE;
    }

    /** symtab.e:658			integer found = 0*/
    _found_47374 = 0;

    /** symtab.e:660			string = SymTab[s][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24642 = (object)*(((s1_ptr)_2)->base + _s_47345);
    DeRef(_string_47350);
    _2 = (object)SEQ_PTR(_24642);
    _string_47350 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_string_47350);
    _24642 = NOVALUE;

    /** symtab.e:661			colon = find(':', string)*/
    _colon_47351 = find_from(58, _string_47350, 1);

    /** symtab.e:662			if colon = 0 then*/
    if (_colon_47351 != 0)
    goto L3; // [112] 126

    /** symtab.e:663				sname = string*/
    RefDS(_string_47350);
    DeRef(_sname_47349);
    _sname_47349 = _string_47350;
    goto L4; // [123] 200
L3: 

    /** symtab.e:665				sname = string[colon+1..$]  -- ignore namespace part*/
    _24646 = _colon_47351 + 1;
    if (_24646 > MAXINT){
        _24646 = NewDouble((eudouble)_24646);
    }
    if (IS_SEQUENCE(_string_47350)){
            _24647 = SEQ_PTR(_string_47350)->length;
    }
    else {
        _24647 = 1;
    }
    rhs_slice_target = (object_ptr)&_sname_47349;
    RHS_Slice(_string_47350, _24646, _24647);

    /** symtab.e:666				while length(sname) and sname[1] = ' ' or sname[1] = '\t' do*/
L5: 
    if (IS_SEQUENCE(_sname_47349)){
            _24649 = SEQ_PTR(_sname_47349)->length;
    }
    else {
        _24649 = 1;
    }
    if (_24649 == 0) {
        _24650 = 0;
        goto L6; // [148] 164
    }
    _2 = (object)SEQ_PTR(_sname_47349);
    _24651 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_24651)) {
        _24652 = (_24651 == 32);
    }
    else {
        _24652 = binary_op(EQUALS, _24651, 32);
    }
    _24651 = NOVALUE;
    if (IS_ATOM_INT(_24652))
    _24650 = (_24652 != 0);
    else
    _24650 = DBL_PTR(_24652)->dbl != 0.0;
L6: 
    if (_24650 != 0) {
        goto L7; // [164] 181
    }
    _2 = (object)SEQ_PTR(_sname_47349);
    _24654 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_24654)) {
        _24655 = (_24654 == 9);
    }
    else {
        _24655 = binary_op(EQUALS, _24654, 9);
    }
    _24654 = NOVALUE;
    if (_24655 <= 0) {
        if (_24655 == 0) {
            DeRef(_24655);
            _24655 = NOVALUE;
            goto L8; // [177] 199
        }
        else {
            if (!IS_ATOM_INT(_24655) && DBL_PTR(_24655)->dbl == 0.0){
                DeRef(_24655);
                _24655 = NOVALUE;
                goto L8; // [177] 199
            }
            DeRef(_24655);
            _24655 = NOVALUE;
        }
    }
    DeRef(_24655);
    _24655 = NOVALUE;
L7: 

    /** symtab.e:667					sname = tail( sname, length( sname ) -1 )*/
    if (IS_SEQUENCE(_sname_47349)){
            _24656 = SEQ_PTR(_sname_47349)->length;
    }
    else {
        _24656 = 1;
    }
    _24657 = _24656 - 1;
    _24656 = NOVALUE;
    {
        int len = SEQ_PTR(_sname_47349)->length;
        int size = (IS_ATOM_INT(_24657)) ? _24657 : (object)(DBL_PTR(_24657)->dbl);
        if (size <= 0) {
            DeRef(_sname_47349);
            _sname_47349 = MAKE_SEQ(NewS1(0));
        }
        else if (len <= size) {
            RefDS(_sname_47349);
            DeRef(_sname_47349);
            _sname_47349 = _sname_47349;
        }
        else Tail(SEQ_PTR(_sname_47349), len-size+1, &_sname_47349);
    }
    _24657 = NOVALUE;

    /** symtab.e:668				end while*/
    goto L5; // [196] 145
L8: 
L4: 

    /** symtab.e:671			if length(sname) = 0 then*/
    if (IS_SEQUENCE(_sname_47349)){
            _24659 = SEQ_PTR(_sname_47349)->length;
    }
    else {
        _24659 = 1;
    }
    if (_24659 != 0)
    goto L9; // [207] 218

    /** symtab.e:672				return 1*/
    DeRefDS(_sname_47349);
    DeRef(_string_47350);
    DeRef(_24633);
    _24633 = NOVALUE;
    DeRef(_24637);
    _24637 = NOVALUE;
    DeRef(_24652);
    _24652 = NOVALUE;
    DeRef(_24646);
    _24646 = NOVALUE;
    return 1;
L9: 

    /** symtab.e:674			h = buckets[hashfn(sname)]*/
    RefDS(_sname_47349);
    _24661 = _56hashfn(_sname_47349);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_24661)){
        _h_47352 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24661)->dbl));
    }
    else{
        _h_47352 = (object)*(((s1_ptr)_2)->base + _24661);
    }
    if (!IS_ATOM_INT(_h_47352))
    _h_47352 = (object)DBL_PTR(_h_47352)->dbl;

    /** symtab.e:675			while h do*/
LA: 
    if (_h_47352 == 0)
    {
        goto LB; // [235] 381
    }
    else{
    }

    /** symtab.e:676				if equal(sname, SymTab[h][S_NAME]) then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24663 = (object)*(((s1_ptr)_2)->base + _h_47352);
    _2 = (object)SEQ_PTR(_24663);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24664 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24664 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24663 = NOVALUE;
    if (_sname_47349 == _24664)
    _24665 = 1;
    else if (IS_ATOM_INT(_sname_47349) && IS_ATOM_INT(_24664))
    _24665 = 0;
    else
    _24665 = (compare(_sname_47349, _24664) == 0);
    _24664 = NOVALUE;
    if (_24665 == 0)
    {
        _24665 = NOVALUE;
        goto LC; // [256] 360
    }
    else{
        _24665 = NOVALUE;
    }

    /** symtab.e:677					if attribute = S_NREFS then*/
    if (_attribute_47346 != 12)
    goto LD; // [263] 289

    /** symtab.e:678						if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto LE; // [271] 359
    }
    else{
    }

    /** symtab.e:679							add_ref({PROC, h})*/
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = 27;
    ((intptr_t *)_2)[2] = _h_47352;
    _24667 = MAKE_SEQ(_1);
    _56add_ref(_24667);
    _24667 = NOVALUE;
    goto LE; // [286] 359
LD: 

    /** symtab.e:681					elsif is_routine( h ) and is_visible( h, current_file_no ) then*/
    _24668 = _56is_routine(_h_47352);
    if (IS_ATOM_INT(_24668)) {
        if (_24668 == 0) {
            goto LF; // [295] 358
        }
    }
    else {
        if (DBL_PTR(_24668)->dbl == 0.0) {
            goto LF; // [295] 358
        }
    }
    _24670 = _56is_visible(_h_47352, _39current_file_no_16815);
    if (_24670 == 0) {
        DeRef(_24670);
        _24670 = NOVALUE;
        goto LF; // [307] 358
    }
    else {
        if (!IS_ATOM_INT(_24670) && DBL_PTR(_24670)->dbl == 0.0){
            DeRef(_24670);
            _24670 = NOVALUE;
            goto LF; // [307] 358
        }
        DeRef(_24670);
        _24670 = NOVALUE;
    }
    DeRef(_24670);
    _24670 = NOVALUE;

    /** symtab.e:682						SymTab[h][attribute] += 1*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_h_47352 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _24673 = (object)*(((s1_ptr)_2)->base + _attribute_47346);
    _24671 = NOVALUE;
    if (IS_ATOM_INT(_24673)) {
        _24674 = _24673 + 1;
        if (_24674 > MAXINT){
            _24674 = NewDouble((eudouble)_24674);
        }
    }
    else
    _24674 = binary_op(PLUS, 1, _24673);
    _24673 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _attribute_47346);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24674;
    if( _1 != _24674 ){
        DeRef(_1);
    }
    _24674 = NOVALUE;
    _24671 = NOVALUE;

    /** symtab.e:683						if current_file_no = SymTab[h][S_FILE_NO] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24675 = (object)*(((s1_ptr)_2)->base + _h_47352);
    _2 = (object)SEQ_PTR(_24675);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24676 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24676 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24675 = NOVALUE;
    if (binary_op_a(NOTEQ, _39current_file_no_16815, _24676)){
        _24676 = NOVALUE;
        goto L10; // [347] 357
    }
    _24676 = NOVALUE;

    /** symtab.e:684							found = 1*/
    _found_47374 = 1;
L10: 
LF: 
LE: 
LC: 

    /** symtab.e:688				h = SymTab[h][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24678 = (object)*(((s1_ptr)_2)->base + _h_47352);
    _2 = (object)SEQ_PTR(_24678);
    _h_47352 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_h_47352)){
        _h_47352 = (object)DBL_PTR(_h_47352)->dbl;
    }
    _24678 = NOVALUE;

    /** symtab.e:689			end while*/
    goto LA; // [378] 235
LB: 

    /** symtab.e:691			if not found then*/
    if (_found_47374 != 0)
    goto L11; // [383] 400

    /** symtab.e:692				map:put( recheck_routines, current_file_no, s, map:APPEND )*/
    Ref(_56recheck_routines_47246);
    _30put(_56recheck_routines_47246, _39current_file_no_16815, _s_47345, 6, 0);
L11: 

    /** symtab.e:694			return found*/
    DeRef(_sname_47349);
    DeRef(_string_47350);
    DeRef(_24668);
    _24668 = NOVALUE;
    DeRef(_24633);
    _24633 = NOVALUE;
    DeRef(_24637);
    _24637 = NOVALUE;
    DeRef(_24661);
    _24661 = NOVALUE;
    DeRef(_24652);
    _24652 = NOVALUE;
    DeRef(_24646);
    _24646 = NOVALUE;
    return _found_47374;
    goto L12; // [408] 440
L2: 

    /** symtab.e:696			if not just_mark_everything_from then*/
    if (_56just_mark_everything_from_47173 != 0)
    goto L13; // [415] 428

    /** symtab.e:697				just_mark_everything_from = TopLevelSub*/
    _56just_mark_everything_from_47173 = _39TopLevelSub_16822;
L13: 

    /** symtab.e:699			mark_all( attribute )*/
    _56mark_all(_attribute_47346);

    /** symtab.e:700			return 1*/
    DeRef(_sname_47349);
    DeRef(_string_47350);
    DeRef(_24668);
    _24668 = NOVALUE;
    DeRef(_24633);
    _24633 = NOVALUE;
    DeRef(_24637);
    _24637 = NOVALUE;
    DeRef(_24661);
    _24661 = NOVALUE;
    DeRef(_24652);
    _24652 = NOVALUE;
    DeRef(_24646);
    _24646 = NOVALUE;
    return 1;
L12: 
    ;
}


void _56resolve_unincluded_globals(object _ok_47452)
{
    object _0, _1, _2;
    

    /** symtab.e:724		Resolve_unincluded_globals = ok*/
    _56Resolve_unincluded_globals_47449 = 1;

    /** symtab.e:725	end procedure*/
    return;
    ;
}


object _56get_resolve_unincluded_globals()
{
    object _0, _1, _2;
    

    /** symtab.e:728		return Resolve_unincluded_globals*/
    return _56Resolve_unincluded_globals_47449;
    ;
}


object _56keyfind(object _word_47458, object _file_no_47459, object _scanning_file_47460, object _namespace_ok_47463, object _hashval_47464)
{
    object _msg_47466 = NOVALUE;
    object _b_name_47467 = NOVALUE;
    object _scope_47468 = NOVALUE;
    object _defined_47469 = NOVALUE;
    object _ix_47470 = NOVALUE;
    object _st_ptr_47472 = NOVALUE;
    object _st_builtin_47473 = NOVALUE;
    object _tok_47475 = NOVALUE;
    object _gtok_47476 = NOVALUE;
    object _any_symbol_47479 = NOVALUE;
    object _tok_file_47647 = NOVALUE;
    object _good_47654 = NOVALUE;
    object _include_type_47664 = NOVALUE;
    object _msg_file_47720 = NOVALUE;
    object _24873 = NOVALUE;
    object _24872 = NOVALUE;
    object _24870 = NOVALUE;
    object _24868 = NOVALUE;
    object _24867 = NOVALUE;
    object _24866 = NOVALUE;
    object _24865 = NOVALUE;
    object _24864 = NOVALUE;
    object _24862 = NOVALUE;
    object _24860 = NOVALUE;
    object _24859 = NOVALUE;
    object _24858 = NOVALUE;
    object _24857 = NOVALUE;
    object _24856 = NOVALUE;
    object _24855 = NOVALUE;
    object _24854 = NOVALUE;
    object _24853 = NOVALUE;
    object _24851 = NOVALUE;
    object _24850 = NOVALUE;
    object _24849 = NOVALUE;
    object _24848 = NOVALUE;
    object _24847 = NOVALUE;
    object _24846 = NOVALUE;
    object _24845 = NOVALUE;
    object _24844 = NOVALUE;
    object _24843 = NOVALUE;
    object _24842 = NOVALUE;
    object _24841 = NOVALUE;
    object _24840 = NOVALUE;
    object _24839 = NOVALUE;
    object _24838 = NOVALUE;
    object _24837 = NOVALUE;
    object _24836 = NOVALUE;
    object _24835 = NOVALUE;
    object _24833 = NOVALUE;
    object _24832 = NOVALUE;
    object _24829 = NOVALUE;
    object _24825 = NOVALUE;
    object _24823 = NOVALUE;
    object _24822 = NOVALUE;
    object _24821 = NOVALUE;
    object _24820 = NOVALUE;
    object _24819 = NOVALUE;
    object _24817 = NOVALUE;
    object _24816 = NOVALUE;
    object _24815 = NOVALUE;
    object _24814 = NOVALUE;
    object _24812 = NOVALUE;
    object _24809 = NOVALUE;
    object _24808 = NOVALUE;
    object _24807 = NOVALUE;
    object _24806 = NOVALUE;
    object _24804 = NOVALUE;
    object _24801 = NOVALUE;
    object _24800 = NOVALUE;
    object _24799 = NOVALUE;
    object _24798 = NOVALUE;
    object _24797 = NOVALUE;
    object _24796 = NOVALUE;
    object _24795 = NOVALUE;
    object _24792 = NOVALUE;
    object _24791 = NOVALUE;
    object _24789 = NOVALUE;
    object _24787 = NOVALUE;
    object _24785 = NOVALUE;
    object _24784 = NOVALUE;
    object _24783 = NOVALUE;
    object _24779 = NOVALUE;
    object _24778 = NOVALUE;
    object _24773 = NOVALUE;
    object _24771 = NOVALUE;
    object _24769 = NOVALUE;
    object _24768 = NOVALUE;
    object _24764 = NOVALUE;
    object _24763 = NOVALUE;
    object _24761 = NOVALUE;
    object _24760 = NOVALUE;
    object _24758 = NOVALUE;
    object _24757 = NOVALUE;
    object _24756 = NOVALUE;
    object _24755 = NOVALUE;
    object _24754 = NOVALUE;
    object _24752 = NOVALUE;
    object _24751 = NOVALUE;
    object _24750 = NOVALUE;
    object _24749 = NOVALUE;
    object _24748 = NOVALUE;
    object _24747 = NOVALUE;
    object _24746 = NOVALUE;
    object _24745 = NOVALUE;
    object _24744 = NOVALUE;
    object _24743 = NOVALUE;
    object _24742 = NOVALUE;
    object _24741 = NOVALUE;
    object _24740 = NOVALUE;
    object _24739 = NOVALUE;
    object _24738 = NOVALUE;
    object _24737 = NOVALUE;
    object _24736 = NOVALUE;
    object _24735 = NOVALUE;
    object _24734 = NOVALUE;
    object _24733 = NOVALUE;
    object _24732 = NOVALUE;
    object _24731 = NOVALUE;
    object _24729 = NOVALUE;
    object _24728 = NOVALUE;
    object _24726 = NOVALUE;
    object _24725 = NOVALUE;
    object _24724 = NOVALUE;
    object _24723 = NOVALUE;
    object _24722 = NOVALUE;
    object _24720 = NOVALUE;
    object _24719 = NOVALUE;
    object _24718 = NOVALUE;
    object _24716 = NOVALUE;
    object _24715 = NOVALUE;
    object _24714 = NOVALUE;
    object _24713 = NOVALUE;
    object _24712 = NOVALUE;
    object _24711 = NOVALUE;
    object _24710 = NOVALUE;
    object _24708 = NOVALUE;
    object _24707 = NOVALUE;
    object _24702 = NOVALUE;
    object _24699 = NOVALUE;
    object _24698 = NOVALUE;
    object _24697 = NOVALUE;
    object _24696 = NOVALUE;
    object _24695 = NOVALUE;
    object _24694 = NOVALUE;
    object _24693 = NOVALUE;
    object _24692 = NOVALUE;
    object _24691 = NOVALUE;
    object _24690 = NOVALUE;
    object _24689 = NOVALUE;
    object _24688 = NOVALUE;
    object _24687 = NOVALUE;
    object _24686 = NOVALUE;
    object _24685 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_file_no_47459)) {
        _1 = (object)(DBL_PTR(_file_no_47459)->dbl);
        DeRefDS(_file_no_47459);
        _file_no_47459 = _1;
    }
    if (!IS_ATOM_INT(_hashval_47464)) {
        _1 = (object)(DBL_PTR(_hashval_47464)->dbl);
        DeRefDS(_hashval_47464);
        _hashval_47464 = _1;
    }

    /** symtab.e:750		dup_globals = {}*/
    RefDS(_21928);
    DeRef(_56dup_globals_47444);
    _56dup_globals_47444 = _21928;

    /** symtab.e:751		dup_overrides = {}*/
    RefDS(_21928);
    DeRefi(_56dup_overrides_47445);
    _56dup_overrides_47445 = _21928;

    /** symtab.e:752		in_include_path = {}*/
    RefDS(_21928);
    DeRef(_56in_include_path_47446);
    _56in_include_path_47446 = _21928;

    /** symtab.e:753		symbol_resolution_warning = ""*/
    RefDS(_21928);
    DeRef(_39symbol_resolution_warning_16916);
    _39symbol_resolution_warning_16916 = _21928;

    /** symtab.e:754		st_builtin = 0*/
    _st_builtin_47473 = 0;

    /** symtab.e:756		ifdef EUDIS then*/

    /** symtab.e:759		st_ptr = buckets[hashval]*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _st_ptr_47472 = (object)*(((s1_ptr)_2)->base + _hashval_47464);
    if (!IS_ATOM_INT(_st_ptr_47472)){
        _st_ptr_47472 = (object)DBL_PTR(_st_ptr_47472)->dbl;
    }

    /** symtab.e:760		integer any_symbol = namespace_ok = -1*/
    _any_symbol_47479 = (_namespace_ok_47463 == -1);

    /** symtab.e:761		while st_ptr do*/
L1: 
    if (_st_ptr_47472 == 0)
    {
        goto L2; // [69] 1033
    }
    else{
    }

    /** symtab.e:762			if SymTab[st_ptr][S_SCOPE] != SC_UNDEFINED */
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24685 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24685);
    _24686 = (object)*(((s1_ptr)_2)->base + 4);
    _24685 = NOVALUE;
    if (IS_ATOM_INT(_24686)) {
        _24687 = (_24686 != 9);
    }
    else {
        _24687 = binary_op(NOTEQ, _24686, 9);
    }
    _24686 = NOVALUE;
    if (IS_ATOM_INT(_24687)) {
        if (_24687 == 0) {
            DeRef(_24688);
            _24688 = 0;
            goto L3; // [92] 116
        }
    }
    else {
        if (DBL_PTR(_24687)->dbl == 0.0) {
            DeRef(_24688);
            _24688 = 0;
            goto L3; // [92] 116
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24689 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24689);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24690 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24690 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24689 = NOVALUE;
    if (_word_47458 == _24690)
    _24691 = 1;
    else if (IS_ATOM_INT(_word_47458) && IS_ATOM_INT(_24690))
    _24691 = 0;
    else
    _24691 = (compare(_word_47458, _24690) == 0);
    _24690 = NOVALUE;
    DeRef(_24688);
    _24688 = (_24691 != 0);
L3: 
    if (_24688 == 0) {
        goto L4; // [116] 1012
    }
    if (_any_symbol_47479 != 0) {
        DeRef(_24693);
        _24693 = 1;
        goto L5; // [120] 150
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24694 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24694);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24695 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24695 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24694 = NOVALUE;
    if (IS_ATOM_INT(_24695)) {
        _24696 = (_24695 == 523);
    }
    else {
        _24696 = binary_op(EQUALS, _24695, 523);
    }
    _24695 = NOVALUE;
    if (IS_ATOM_INT(_24696)) {
        _24697 = (_namespace_ok_47463 == _24696);
    }
    else {
        _24697 = binary_op(EQUALS, _namespace_ok_47463, _24696);
    }
    DeRef(_24696);
    _24696 = NOVALUE;
    if (IS_ATOM_INT(_24697))
    _24693 = (_24697 != 0);
    else
    _24693 = DBL_PTR(_24697)->dbl != 0.0;
L5: 
    if (_24693 == 0)
    {
        _24693 = NOVALUE;
        goto L4; // [151] 1012
    }
    else{
        _24693 = NOVALUE;
    }

    /** symtab.e:767				tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24698 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24698);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24699 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24699 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24698 = NOVALUE;
    Ref(_24699);
    DeRef(_tok_47475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24699;
    ((intptr_t *)_2)[2] = _st_ptr_47472;
    _tok_47475 = MAKE_SEQ(_1);
    _24699 = NOVALUE;

    /** symtab.e:769				if file_no = -1 then*/
    if (_file_no_47459 != -1)
    goto L6; // [174] 714

    /** symtab.e:774					scope = SymTab[st_ptr][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24702 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24702);
    _scope_47468 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47468)){
        _scope_47468 = (object)DBL_PTR(_scope_47468)->dbl;
    }
    _24702 = NOVALUE;

    /** symtab.e:776					switch scope with fallthru do*/
    _0 = _scope_47468;
    switch ( _0 ){ 

        /** symtab.e:777					case SC_OVERRIDE then*/
        case 12:

        /** symtab.e:778						dup_overrides &= st_ptr*/
        Append(&_56dup_overrides_47445, _56dup_overrides_47445, _st_ptr_47472);

        /** symtab.e:779						break*/
        goto L7; // [215] 1011

        /** symtab.e:781					case SC_PREDEF then*/
        case 7:

        /** symtab.e:782						st_builtin = st_ptr*/
        _st_builtin_47473 = _st_ptr_47472;

        /** symtab.e:783						break*/
        goto L7; // [230] 1011

        /** symtab.e:784					case SC_GLOBAL then*/
        case 6:

        /** symtab.e:785						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24707 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24707);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24708 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24708 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24707 = NOVALUE;
        if (binary_op_a(NOTEQ, _scanning_file_47460, _24708)){
            _24708 = NOVALUE;
            goto L8; // [250] 274
        }
        _24708 = NOVALUE;

        /** symtab.e:788							if BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto L9; // [258] 267
        }
        else{
        }

        /** symtab.e:789								add_ref(tok)*/
        Ref(_tok_47475);
        _56add_ref(_tok_47475);
L9: 

        /** symtab.e:792							return tok*/
        DeRefDS(_word_47458);
        DeRef(_msg_47466);
        DeRef(_b_name_47467);
        DeRef(_gtok_47476);
        DeRef(_24687);
        _24687 = NOVALUE;
        DeRef(_24697);
        _24697 = NOVALUE;
        return _tok_47475;
L8: 

        /** symtab.e:796						if Resolve_unincluded_globals */
        if (_56Resolve_unincluded_globals_47449 != 0) {
            _24710 = 1;
            goto LA; // [278] 322
        }
        _2 = (object)SEQ_PTR(_36finished_files_15407);
        _24711 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        if (_24711 == 0) {
            _24712 = 0;
            goto LB; // [288] 318
        }
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24713 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24714 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24714);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24715 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24715 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24714 = NOVALUE;
        _2 = (object)SEQ_PTR(_24713);
        if (!IS_ATOM_INT(_24715)){
            _24716 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24715)->dbl));
        }
        else{
            _24716 = (object)*(((s1_ptr)_2)->base + _24715);
        }
        _24713 = NOVALUE;
        if (IS_ATOM_INT(_24716))
        _24712 = (_24716 != 0);
        else
        _24712 = DBL_PTR(_24716)->dbl != 0.0;
LB: 
        _24710 = (_24712 != 0);
LA: 
        if (_24710 != 0) {
            goto LC; // [322] 349
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24718 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24718);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _24719 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _24719 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _24718 = NOVALUE;
        if (IS_ATOM_INT(_24719)) {
            _24720 = (_24719 == 523);
        }
        else {
            _24720 = binary_op(EQUALS, _24719, 523);
        }
        _24719 = NOVALUE;
        if (_24720 == 0) {
            DeRef(_24720);
            _24720 = NOVALUE;
            goto L7; // [345] 1011
        }
        else {
            if (!IS_ATOM_INT(_24720) && DBL_PTR(_24720)->dbl == 0.0){
                DeRef(_24720);
                _24720 = NOVALUE;
                goto L7; // [345] 1011
            }
            DeRef(_24720);
            _24720 = NOVALUE;
        }
        DeRef(_24720);
        _24720 = NOVALUE;
LC: 

        /** symtab.e:800							gtok = tok*/
        Ref(_tok_47475);
        DeRef(_gtok_47476);
        _gtok_47476 = _tok_47475;

        /** symtab.e:801							dup_globals &= st_ptr*/
        Append(&_56dup_globals_47444, _56dup_globals_47444, _st_ptr_47472);

        /** symtab.e:802							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24722 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24723 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24723);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24724 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24724 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24723 = NOVALUE;
        _2 = (object)SEQ_PTR(_24722);
        if (!IS_ATOM_INT(_24724)){
            _24725 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24724)->dbl));
        }
        else{
            _24725 = (object)*(((s1_ptr)_2)->base + _24724);
        }
        _24722 = NOVALUE;
        if (IS_ATOM_INT(_24725)) {
            _24726 = (_24725 != 0);
        }
        else {
            _24726 = binary_op(NOTEQ, _24725, 0);
        }
        _24725 = NOVALUE;
        if (IS_SEQUENCE(_56in_include_path_47446) && IS_ATOM(_24726)) {
            Ref(_24726);
            Append(&_56in_include_path_47446, _56in_include_path_47446, _24726);
        }
        else if (IS_ATOM(_56in_include_path_47446) && IS_SEQUENCE(_24726)) {
        }
        else {
            Concat((object_ptr)&_56in_include_path_47446, _56in_include_path_47446, _24726);
        }
        DeRef(_24726);
        _24726 = NOVALUE;

        /** symtab.e:804						break*/
        goto L7; // [399] 1011

        /** symtab.e:807					case SC_PUBLIC, SC_EXPORT then*/
        case 13:
        case 11:

        /** symtab.e:809						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24728 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24728);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24729 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24729 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24728 = NOVALUE;
        if (binary_op_a(NOTEQ, _scanning_file_47460, _24729)){
            _24729 = NOVALUE;
            goto LD; // [421] 445
        }
        _24729 = NOVALUE;

        /** symtab.e:811							if BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto LE; // [429] 438
        }
        else{
        }

        /** symtab.e:812								add_ref(tok)*/
        Ref(_tok_47475);
        _56add_ref(_tok_47475);
LE: 

        /** symtab.e:815							return tok*/
        DeRefDS(_word_47458);
        DeRef(_msg_47466);
        DeRef(_b_name_47467);
        DeRef(_gtok_47476);
        DeRef(_24687);
        _24687 = NOVALUE;
        DeRef(_24697);
        _24697 = NOVALUE;
        _24715 = NOVALUE;
        _24716 = NOVALUE;
        _24724 = NOVALUE;
        _24711 = NOVALUE;
        return _tok_47475;
LD: 

        /** symtab.e:818						if (finished_files[scanning_file] -- everything this file needs has been read in*/
        _2 = (object)SEQ_PTR(_36finished_files_15407);
        _24731 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        if (_24731 != 0) {
            _24732 = 1;
            goto LF; // [453] 487
        }
        if (_namespace_ok_47463 == 0) {
            _24733 = 0;
            goto L10; // [457] 483
        }
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24734 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24734);
        if (!IS_ATOM_INT(_39S_TOKEN_16475)){
            _24735 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
        }
        else{
            _24735 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
        }
        _24734 = NOVALUE;
        if (IS_ATOM_INT(_24735)) {
            _24736 = (_24735 == 523);
        }
        else {
            _24736 = binary_op(EQUALS, _24735, 523);
        }
        _24735 = NOVALUE;
        if (IS_ATOM_INT(_24736))
        _24733 = (_24736 != 0);
        else
        _24733 = DBL_PTR(_24736)->dbl != 0.0;
L10: 
        _24732 = (_24733 != 0);
LF: 
        if (_24732 == 0) {
            goto L7; // [487] 1011
        }
        _24738 = (_scope_47468 == 13);
        if (_24738 == 0) {
            _24739 = 0;
            goto L11; // [497] 533
        }
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24740 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24741 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24741);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24742 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24742 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24741 = NOVALUE;
        _2 = (object)SEQ_PTR(_24740);
        if (!IS_ATOM_INT(_24742)){
            _24743 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24742)->dbl));
        }
        else{
            _24743 = (object)*(((s1_ptr)_2)->base + _24742);
        }
        _24740 = NOVALUE;
        if (IS_ATOM_INT(_24743)) {
            {uintptr_t tu;
                 tu = (uintptr_t)6 & (uintptr_t)_24743;
                 _24744 = MAKE_UINT(tu);
            }
        }
        else {
            _24744 = binary_op(AND_BITS, 6, _24743);
        }
        _24743 = NOVALUE;
        if (IS_ATOM_INT(_24744))
        _24739 = (_24744 != 0);
        else
        _24739 = DBL_PTR(_24744)->dbl != 0.0;
L11: 
        if (_24739 != 0) {
            DeRef(_24745);
            _24745 = 1;
            goto L12; // [533] 583
        }
        _24746 = (_scope_47468 == 11);
        if (_24746 == 0) {
            _24747 = 0;
            goto L13; // [543] 579
        }
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24748 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24749 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24749);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24750 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24750 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24749 = NOVALUE;
        _2 = (object)SEQ_PTR(_24748);
        if (!IS_ATOM_INT(_24750)){
            _24751 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24750)->dbl));
        }
        else{
            _24751 = (object)*(((s1_ptr)_2)->base + _24750);
        }
        _24748 = NOVALUE;
        if (IS_ATOM_INT(_24751)) {
            {uintptr_t tu;
                 tu = (uintptr_t)2 & (uintptr_t)_24751;
                 _24752 = MAKE_UINT(tu);
            }
        }
        else {
            _24752 = binary_op(AND_BITS, 2, _24751);
        }
        _24751 = NOVALUE;
        if (IS_ATOM_INT(_24752))
        _24747 = (_24752 != 0);
        else
        _24747 = DBL_PTR(_24752)->dbl != 0.0;
L13: 
        DeRef(_24745);
        _24745 = (_24747 != 0);
L12: 
        if (_24745 == 0)
        {
            _24745 = NOVALUE;
            goto L7; // [584] 1011
        }
        else{
            _24745 = NOVALUE;
        }

        /** symtab.e:826							gtok = tok*/
        Ref(_tok_47475);
        DeRef(_gtok_47476);
        _gtok_47476 = _tok_47475;

        /** symtab.e:827							dup_globals &= st_ptr*/
        Append(&_56dup_globals_47444, _56dup_globals_47444, _st_ptr_47472);

        /** symtab.e:828							in_include_path &= include_matrix[scanning_file][SymTab[st_ptr][S_FILE_NO]] != 0 --symbol_in_include_path( st_ptr, scanning_file, {} )*/
        _2 = (object)SEQ_PTR(_36include_matrix_15411);
        _24754 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24755 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24755);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24756 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24756 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24755 = NOVALUE;
        _2 = (object)SEQ_PTR(_24754);
        if (!IS_ATOM_INT(_24756)){
            _24757 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24756)->dbl));
        }
        else{
            _24757 = (object)*(((s1_ptr)_2)->base + _24756);
        }
        _24754 = NOVALUE;
        if (IS_ATOM_INT(_24757)) {
            _24758 = (_24757 != 0);
        }
        else {
            _24758 = binary_op(NOTEQ, _24757, 0);
        }
        _24757 = NOVALUE;
        if (IS_SEQUENCE(_56in_include_path_47446) && IS_ATOM(_24758)) {
            Ref(_24758);
            Append(&_56in_include_path_47446, _56in_include_path_47446, _24758);
        }
        else if (IS_ATOM(_56in_include_path_47446) && IS_SEQUENCE(_24758)) {
        }
        else {
            Concat((object_ptr)&_56in_include_path_47446, _56in_include_path_47446, _24758);
        }
        DeRef(_24758);
        _24758 = NOVALUE;

        /** symtab.e:831	ifdef STDDEBUG then*/

        /** symtab.e:852						break*/
        goto L7; // [639] 1011

        /** symtab.e:853					case SC_LOCAL then*/
        case 5:

        /** symtab.e:854						if scanning_file = SymTab[st_ptr][S_FILE_NO] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24760 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
        _2 = (object)SEQ_PTR(_24760);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24761 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24761 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24760 = NOVALUE;
        if (binary_op_a(NOTEQ, _scanning_file_47460, _24761)){
            _24761 = NOVALUE;
            goto L7; // [659] 1011
        }
        _24761 = NOVALUE;

        /** symtab.e:857							if BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto L14; // [667] 676
        }
        else{
        }

        /** symtab.e:858								add_ref(tok)*/
        Ref(_tok_47475);
        _56add_ref(_tok_47475);
L14: 

        /** symtab.e:861							return tok*/
        DeRefDS(_word_47458);
        DeRef(_msg_47466);
        DeRef(_b_name_47467);
        DeRef(_gtok_47476);
        DeRef(_24687);
        _24687 = NOVALUE;
        DeRef(_24736);
        _24736 = NOVALUE;
        DeRef(_24697);
        _24697 = NOVALUE;
        DeRef(_24752);
        _24752 = NOVALUE;
        _24731 = NOVALUE;
        _24715 = NOVALUE;
        DeRef(_24738);
        _24738 = NOVALUE;
        DeRef(_24744);
        _24744 = NOVALUE;
        DeRef(_24746);
        _24746 = NOVALUE;
        _24742 = NOVALUE;
        _24716 = NOVALUE;
        _24724 = NOVALUE;
        _24711 = NOVALUE;
        _24750 = NOVALUE;
        _24756 = NOVALUE;
        return _tok_47475;

        /** symtab.e:863						break*/
        goto L7; // [685] 1011

        /** symtab.e:864					case else*/
        default:

        /** symtab.e:866						if BIND then*/
        if (_39BIND_16443 == 0)
        {
            goto L15; // [695] 704
        }
        else{
        }

        /** symtab.e:867							add_ref(tok)*/
        Ref(_tok_47475);
        _56add_ref(_tok_47475);
L15: 

        /** symtab.e:870						return tok -- keyword, private*/
        DeRefDS(_word_47458);
        DeRef(_msg_47466);
        DeRef(_b_name_47467);
        DeRef(_gtok_47476);
        DeRef(_24687);
        _24687 = NOVALUE;
        DeRef(_24736);
        _24736 = NOVALUE;
        DeRef(_24697);
        _24697 = NOVALUE;
        DeRef(_24752);
        _24752 = NOVALUE;
        _24731 = NOVALUE;
        _24715 = NOVALUE;
        DeRef(_24738);
        _24738 = NOVALUE;
        DeRef(_24744);
        _24744 = NOVALUE;
        DeRef(_24746);
        _24746 = NOVALUE;
        _24742 = NOVALUE;
        _24716 = NOVALUE;
        _24724 = NOVALUE;
        _24711 = NOVALUE;
        _24750 = NOVALUE;
        _24756 = NOVALUE;
        return _tok_47475;
    ;}    goto L7; // [711] 1011
L6: 

    /** symtab.e:877					scope = SymTab[tok[T_SYM]][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_tok_47475);
    _24763 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_24763)){
        _24764 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24763)->dbl));
    }
    else{
        _24764 = (object)*(((s1_ptr)_2)->base + _24763);
    }
    _2 = (object)SEQ_PTR(_24764);
    _scope_47468 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_scope_47468)){
        _scope_47468 = (object)DBL_PTR(_scope_47468)->dbl;
    }
    _24764 = NOVALUE;

    /** symtab.e:878					if not file_no then*/
    if (_file_no_47459 != 0)
    goto L16; // [738] 772

    /** symtab.e:880						if scope = SC_PREDEF then*/
    if (_scope_47468 != 7)
    goto L17; // [745] 1010

    /** symtab.e:881							if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L18; // [753] 762
    }
    else{
    }

    /** symtab.e:882								add_ref( tok )*/
    Ref(_tok_47475);
    _56add_ref(_tok_47475);
L18: 

    /** symtab.e:884							return tok*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24715 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24756 = NOVALUE;
    return _tok_47475;
    goto L17; // [769] 1010
L16: 

    /** symtab.e:887						integer tok_file = SymTab[tok[T_SYM]][S_FILE_NO]*/
    _2 = (object)SEQ_PTR(_tok_47475);
    _24768 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_24768)){
        _24769 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24768)->dbl));
    }
    else{
        _24769 = (object)*(((s1_ptr)_2)->base + _24768);
    }
    _2 = (object)SEQ_PTR(_24769);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _tok_file_47647 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _tok_file_47647 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    if (!IS_ATOM_INT(_tok_file_47647)){
        _tok_file_47647 = (object)DBL_PTR(_tok_file_47647)->dbl;
    }
    _24769 = NOVALUE;

    /** symtab.e:888						integer good = 0*/
    _good_47654 = 0;

    /** symtab.e:889						if scope = SC_PRIVATE or scope = SC_PREDEF then*/
    _24771 = (_scope_47468 == 3);
    if (_24771 != 0) {
        goto L19; // [807] 940
    }
    _24773 = (_scope_47468 == 7);
    if (_24773 == 0)
    {
        DeRef(_24773);
        _24773 = NOVALUE;
        goto L1A; // [818] 825
    }
    else{
        DeRef(_24773);
        _24773 = NOVALUE;
    }
    goto L19; // [822] 940
L1A: 

    /** symtab.e:892						elsif file_no = tok_file then*/
    if (_file_no_47459 != _tok_file_47647)
    goto L1B; // [827] 839

    /** symtab.e:893							good = 1*/
    _good_47654 = 1;
    goto L19; // [836] 940
L1B: 

    /** symtab.e:896							integer include_type = 0*/
    _include_type_47664 = 0;

    /** symtab.e:897							switch scope do*/
    _0 = _scope_47468;
    switch ( _0 ){ 

        /** symtab.e:898								case SC_GLOBAL then*/
        case 6:

        /** symtab.e:899									if Resolve_unincluded_globals then*/
        if (_56Resolve_unincluded_globals_47449 == 0)
        {
            goto L1C; // [859] 874
        }
        else{
        }

        /** symtab.e:900										include_type = ANY_INCLUDE*/
        _include_type_47664 = 7;
        goto L1D; // [871] 919
L1C: 

        /** symtab.e:902										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        _include_type_47664 = 6;
        goto L1D; // [884] 919

        /** symtab.e:905								case SC_PUBLIC then*/
        case 13:

        /** symtab.e:907									if tok_file != file_no then*/
        if (_tok_file_47647 == _file_no_47459)
        goto L1E; // [892] 908

        /** symtab.e:908										include_type = PUBLIC_INCLUDE*/
        _include_type_47664 = 4;
        goto L1F; // [905] 918
L1E: 

        /** symtab.e:910										include_type = DIRECT_OR_PUBLIC_INCLUDE*/
        _include_type_47664 = 6;
L1F: 
    ;}L1D: 

    /** symtab.e:914							good = and_bits( include_type, include_matrix[file_no][tok_file] )*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _24778 = (object)*(((s1_ptr)_2)->base + _file_no_47459);
    _2 = (object)SEQ_PTR(_24778);
    _24779 = (object)*(((s1_ptr)_2)->base + _tok_file_47647);
    _24778 = NOVALUE;
    if (IS_ATOM_INT(_24779)) {
        {uintptr_t tu;
             tu = (uintptr_t)_include_type_47664 & (uintptr_t)_24779;
             _good_47654 = MAKE_UINT(tu);
        }
    }
    else {
        _good_47654 = binary_op(AND_BITS, _include_type_47664, _24779);
    }
    _24779 = NOVALUE;
    if (!IS_ATOM_INT(_good_47654)) {
        _1 = (object)(DBL_PTR(_good_47654)->dbl);
        DeRefDS(_good_47654);
        _good_47654 = _1;
    }
L19: 

    /** symtab.e:917						if good then*/
    if (_good_47654 == 0)
    {
        goto L20; // [942] 1007
    }
    else{
    }

    /** symtab.e:919							if file_no = tok_file then*/
    if (_file_no_47459 != _tok_file_47647)
    goto L21; // [947] 971

    /** symtab.e:920								if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L22; // [955] 964
    }
    else{
    }

    /** symtab.e:921									add_ref(tok)*/
    Ref(_tok_47475);
    _56add_ref(_tok_47475);
L22: 

    /** symtab.e:923								return tok*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24715 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24756 = NOVALUE;
    return _tok_47475;
L21: 

    /** symtab.e:926							gtok = tok*/
    Ref(_tok_47475);
    DeRef(_gtok_47476);
    _gtok_47476 = _tok_47475;

    /** symtab.e:927							dup_globals &= st_ptr*/
    Append(&_56dup_globals_47444, _56dup_globals_47444, _st_ptr_47472);

    /** symtab.e:928							in_include_path &= include_matrix[scanning_file][tok_file] != 0*/
    _2 = (object)SEQ_PTR(_36include_matrix_15411);
    _24783 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
    _2 = (object)SEQ_PTR(_24783);
    _24784 = (object)*(((s1_ptr)_2)->base + _tok_file_47647);
    _24783 = NOVALUE;
    if (IS_ATOM_INT(_24784)) {
        _24785 = (_24784 != 0);
    }
    else {
        _24785 = binary_op(NOTEQ, _24784, 0);
    }
    _24784 = NOVALUE;
    if (IS_SEQUENCE(_56in_include_path_47446) && IS_ATOM(_24785)) {
        Ref(_24785);
        Append(&_56in_include_path_47446, _56in_include_path_47446, _24785);
    }
    else if (IS_ATOM(_56in_include_path_47446) && IS_SEQUENCE(_24785)) {
    }
    else {
        Concat((object_ptr)&_56in_include_path_47446, _56in_include_path_47446, _24785);
    }
    DeRef(_24785);
    _24785 = NOVALUE;
L20: 
L17: 
L7: 
L4: 

    /** symtab.e:936			st_ptr = SymTab[st_ptr][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24787 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24787);
    _st_ptr_47472 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_st_ptr_47472)){
        _st_ptr_47472 = (object)DBL_PTR(_st_ptr_47472)->dbl;
    }
    _24787 = NOVALUE;

    /** symtab.e:937		end while*/
    goto L1; // [1030] 69
L2: 

    /** symtab.e:939		if length(dup_overrides) then*/
    if (IS_SEQUENCE(_56dup_overrides_47445)){
            _24789 = SEQ_PTR(_56dup_overrides_47445)->length;
    }
    else {
        _24789 = 1;
    }
    if (_24789 == 0)
    {
        _24789 = NOVALUE;
        goto L23; // [1040] 1093
    }
    else{
        _24789 = NOVALUE;
    }

    /** symtab.e:940			st_ptr = dup_overrides[1]*/
    _2 = (object)SEQ_PTR(_56dup_overrides_47445);
    _st_ptr_47472 = (object)*(((s1_ptr)_2)->base + 1);

    /** symtab.e:941			tok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24791 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24791);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24792 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24792 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24791 = NOVALUE;
    Ref(_24792);
    DeRef(_tok_47475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24792;
    ((intptr_t *)_2)[2] = _st_ptr_47472;
    _tok_47475 = MAKE_SEQ(_1);
    _24792 = NOVALUE;

    /** symtab.e:944				if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L24; // [1075] 1084
    }
    else{
    }

    /** symtab.e:945					add_ref(tok)*/
    RefDS(_tok_47475);
    _56add_ref(_tok_47475);
L24: 

    /** symtab.e:948				return tok*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    _24768 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24715 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24756 = NOVALUE;
    return _tok_47475;
    goto L25; // [1090] 1320
L23: 

    /** symtab.e:951		elsif st_builtin != 0 then*/
    if (_st_builtin_47473 == 0)
    goto L26; // [1095] 1319

    /** symtab.e:952			if length(dup_globals) and find(SymTab[st_builtin][S_NAME], builtin_warnings) = 0 then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24795 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24795 = 1;
    }
    if (_24795 == 0) {
        goto L27; // [1106] 1279
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24797 = (object)*(((s1_ptr)_2)->base + _st_builtin_47473);
    _2 = (object)SEQ_PTR(_24797);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24798 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24798 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24797 = NOVALUE;
    _24799 = find_from(_24798, _56builtin_warnings_47448, 1);
    _24798 = NOVALUE;
    _24800 = (_24799 == 0);
    _24799 = NOVALUE;
    if (_24800 == 0)
    {
        DeRef(_24800);
        _24800 = NOVALUE;
        goto L27; // [1134] 1279
    }
    else{
        DeRef(_24800);
        _24800 = NOVALUE;
    }

    /** symtab.e:953				sequence msg_file */

    /** symtab.e:955				b_name = SymTab[st_builtin][S_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24801 = (object)*(((s1_ptr)_2)->base + _st_builtin_47473);
    DeRef(_b_name_47467);
    _2 = (object)SEQ_PTR(_24801);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _b_name_47467 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _b_name_47467 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_b_name_47467);
    _24801 = NOVALUE;

    /** symtab.e:956				builtin_warnings = append(builtin_warnings, b_name)*/
    RefDS(_b_name_47467);
    Append(&_56builtin_warnings_47448, _56builtin_warnings_47448, _b_name_47467);

    /** symtab.e:958				if length(dup_globals) > 1 then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24804 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24804 = 1;
    }
    if (_24804 <= 1)
    goto L28; // [1170] 1184

    /** symtab.e:959					msg = "\n"*/
    RefDS(_22123);
    DeRef(_msg_47466);
    _msg_47466 = _22123;
    goto L29; // [1181] 1192
L28: 

    /** symtab.e:961					msg = ""*/
    RefDS(_21928);
    DeRef(_msg_47466);
    _msg_47466 = _21928;
L29: 

    /** symtab.e:964				for i = 1 to length(dup_globals) do*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24806 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24806 = 1;
    }
    {
        object _i_47731;
        _i_47731 = 1;
L2A: 
        if (_i_47731 > _24806){
            goto L2B; // [1199] 1255
        }

        /** symtab.e:965					msg_file = known_files[SymTab[dup_globals[i]][S_FILE_NO]]*/
        _2 = (object)SEQ_PTR(_56dup_globals_47444);
        _24807 = (object)*(((s1_ptr)_2)->base + _i_47731);
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        if (!IS_ATOM_INT(_24807)){
            _24808 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24807)->dbl));
        }
        else{
            _24808 = (object)*(((s1_ptr)_2)->base + _24807);
        }
        _2 = (object)SEQ_PTR(_24808);
        if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
            _24809 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
        }
        else{
            _24809 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
        }
        _24808 = NOVALUE;
        DeRef(_msg_file_47720);
        _2 = (object)SEQ_PTR(_36known_files_15405);
        if (!IS_ATOM_INT(_24809)){
            _msg_file_47720 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24809)->dbl));
        }
        else{
            _msg_file_47720 = (object)*(((s1_ptr)_2)->base + _24809);
        }
        Ref(_msg_file_47720);

        /** symtab.e:966					msg &= "    " & msg_file & "\n"*/
        {
            object concat_list[3];

            concat_list[0] = _22123;
            concat_list[1] = _msg_file_47720;
            concat_list[2] = _24811;
            Concat_N((object_ptr)&_24812, concat_list, 3);
        }
        Concat((object_ptr)&_msg_47466, _msg_47466, _24812);
        DeRefDS(_24812);
        _24812 = NOVALUE;

        /** symtab.e:967				end for*/
        _i_47731 = _i_47731 + 1;
        goto L2A; // [1250] 1206
L2B: 
        ;
    }

    /** symtab.e:969				Warning(234, builtin_chosen_warning_flag, {b_name, known_files[scanning_file], msg})*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _24814 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_b_name_47467);
    ((intptr_t*)_2)[1] = _b_name_47467;
    Ref(_24814);
    ((intptr_t*)_2)[2] = _24814;
    RefDS(_msg_47466);
    ((intptr_t*)_2)[3] = _msg_47466;
    _24815 = MAKE_SEQ(_1);
    _24814 = NOVALUE;
    _52Warning(234, 8, _24815);
    _24815 = NOVALUE;
L27: 
    DeRef(_msg_file_47720);
    _msg_file_47720 = NOVALUE;

    /** symtab.e:972			tok = {SymTab[st_builtin][S_TOKEN], st_builtin}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24816 = (object)*(((s1_ptr)_2)->base + _st_builtin_47473);
    _2 = (object)SEQ_PTR(_24816);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24817 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24817 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24816 = NOVALUE;
    Ref(_24817);
    DeRef(_tok_47475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24817;
    ((intptr_t *)_2)[2] = _st_builtin_47473;
    _tok_47475 = MAKE_SEQ(_1);
    _24817 = NOVALUE;

    /** symtab.e:974			if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L2C; // [1303] 1312
    }
    else{
    }

    /** symtab.e:975				add_ref(tok)*/
    RefDS(_tok_47475);
    _56add_ref(_tok_47475);
L2C: 

    /** symtab.e:978			return tok*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    _24768 = NOVALUE;
    _24807 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24715 = NOVALUE;
    _24809 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24756 = NOVALUE;
    return _tok_47475;
L26: 
L25: 

    /** symtab.e:981	ifdef STDDEBUG then*/

    /** symtab.e:996		if length(dup_globals) > 1 and find( 1, in_include_path ) then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24819 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24819 = 1;
    }
    _24820 = (_24819 > 1);
    _24819 = NOVALUE;
    if (_24820 == 0) {
        goto L2D; // [1333] 1452
    }
    _24822 = find_from(1, _56in_include_path_47446, 1);
    if (_24822 == 0)
    {
        _24822 = NOVALUE;
        goto L2D; // [1345] 1452
    }
    else{
        _24822 = NOVALUE;
    }

    /** symtab.e:998			ix = 1*/
    _ix_47470 = 1;

    /** symtab.e:999			while ix <= length(dup_globals) do*/
L2E: 
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24823 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24823 = 1;
    }
    if (_ix_47470 > _24823)
    goto L2F; // [1363] 1411

    /** symtab.e:1000				if in_include_path[ix] then*/
    _2 = (object)SEQ_PTR(_56in_include_path_47446);
    _24825 = (object)*(((s1_ptr)_2)->base + _ix_47470);
    if (_24825 == 0) {
        _24825 = NOVALUE;
        goto L30; // [1375] 1387
    }
    else {
        if (!IS_ATOM_INT(_24825) && DBL_PTR(_24825)->dbl == 0.0){
            _24825 = NOVALUE;
            goto L30; // [1375] 1387
        }
        _24825 = NOVALUE;
    }
    _24825 = NOVALUE;

    /** symtab.e:1001					ix += 1*/
    _ix_47470 = _ix_47470 + 1;
    goto L2E; // [1384] 1358
L30: 

    /** symtab.e:1003					dup_globals     = remove( dup_globals, ix )*/
    {
        s1_ptr assign_space = SEQ_PTR(_56dup_globals_47444);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47470)) ? _ix_47470 : (object)(DBL_PTR(_ix_47470)->dbl);
        int stop = (IS_ATOM_INT(_ix_47470)) ? _ix_47470 : (object)(DBL_PTR(_ix_47470)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_56dup_globals_47444), start, &_56dup_globals_47444 );
            }
            else Tail(SEQ_PTR(_56dup_globals_47444), stop+1, &_56dup_globals_47444);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_56dup_globals_47444), start, &_56dup_globals_47444);
        }
        else {
            assign_slice_seq = &assign_space;
            _56dup_globals_47444 = Remove_elements(start, stop, (SEQ_PTR(_56dup_globals_47444)->ref == 1));
        }
    }

    /** symtab.e:1004					in_include_path = remove( in_include_path, ix )*/
    {
        s1_ptr assign_space = SEQ_PTR(_56in_include_path_47446);
        int len = assign_space->length;
        int start = (IS_ATOM_INT(_ix_47470)) ? _ix_47470 : (object)(DBL_PTR(_ix_47470)->dbl);
        int stop = (IS_ATOM_INT(_ix_47470)) ? _ix_47470 : (object)(DBL_PTR(_ix_47470)->dbl);
        if (stop > len){
            stop = len;
        }
        if (start > len || start > stop || stop<0) {
        }
        else if (start < 2) {
            if (stop >= len) {
                Head( SEQ_PTR(_56in_include_path_47446), start, &_56in_include_path_47446 );
            }
            else Tail(SEQ_PTR(_56in_include_path_47446), stop+1, &_56in_include_path_47446);
        }
        else if (stop >= len){
            Head(SEQ_PTR(_56in_include_path_47446), start, &_56in_include_path_47446);
        }
        else {
            assign_slice_seq = &assign_space;
            _56in_include_path_47446 = Remove_elements(start, stop, (SEQ_PTR(_56in_include_path_47446)->ref == 1));
        }
    }

    /** symtab.e:1006			end while*/
    goto L2E; // [1408] 1358
L2F: 

    /** symtab.e:1008			if length(dup_globals) = 1 then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24829 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24829 = 1;
    }
    if (_24829 != 1)
    goto L31; // [1418] 1451

    /** symtab.e:1009					st_ptr = dup_globals[1]*/
    _2 = (object)SEQ_PTR(_56dup_globals_47444);
    _st_ptr_47472 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_st_ptr_47472)){
        _st_ptr_47472 = (object)DBL_PTR(_st_ptr_47472)->dbl;
    }

    /** symtab.e:1010					gtok = {SymTab[st_ptr][S_TOKEN], st_ptr}*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24832 = (object)*(((s1_ptr)_2)->base + _st_ptr_47472);
    _2 = (object)SEQ_PTR(_24832);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24833 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24833 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24832 = NOVALUE;
    Ref(_24833);
    DeRef(_gtok_47476);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _24833;
    ((intptr_t *)_2)[2] = _st_ptr_47472;
    _gtok_47476 = MAKE_SEQ(_1);
    _24833 = NOVALUE;
L31: 
L2D: 

    /** symtab.e:1014	ifdef STDDEBUG then*/

    /** symtab.e:1023		if length(dup_globals) = 1 and st_builtin = 0 then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24835 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24835 = 1;
    }
    _24836 = (_24835 == 1);
    _24835 = NOVALUE;
    if (_24836 == 0) {
        goto L32; // [1465] 1642
    }
    _24838 = (_st_builtin_47473 == 0);
    if (_24838 == 0)
    {
        DeRef(_24838);
        _24838 = NOVALUE;
        goto L32; // [1474] 1642
    }
    else{
        DeRef(_24838);
        _24838 = NOVALUE;
    }

    /** symtab.e:1026			if BIND then*/
    if (_39BIND_16443 == 0)
    {
        goto L33; // [1481] 1492
    }
    else{
    }

    /** symtab.e:1027				add_ref(gtok)*/
    Ref(_gtok_47476);
    _56add_ref(_gtok_47476);
L33: 

    /** symtab.e:1029			if not in_include_path[1] and*/
    _2 = (object)SEQ_PTR(_56in_include_path_47446);
    _24839 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_24839)) {
        _24840 = (_24839 == 0);
    }
    else {
        _24840 = unary_op(NOT, _24839);
    }
    _24839 = NOVALUE;
    if (IS_ATOM_INT(_24840)) {
        if (_24840 == 0) {
            goto L34; // [1503] 1635
        }
    }
    else {
        if (DBL_PTR(_24840)->dbl == 0.0) {
            goto L34; // [1503] 1635
        }
    }
    _2 = (object)SEQ_PTR(_gtok_47476);
    _24842 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_24842)){
        _24843 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24842)->dbl));
    }
    else{
        _24843 = (object)*(((s1_ptr)_2)->base + _24842);
    }
    _2 = (object)SEQ_PTR(_24843);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24844 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24844 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24843 = NOVALUE;
    Ref(_24844);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47460;
    ((intptr_t *)_2)[2] = _24844;
    _24845 = MAKE_SEQ(_1);
    _24844 = NOVALUE;
    _24846 = find_from(_24845, _56include_warnings_47447, 1);
    DeRefDS(_24845);
    _24845 = NOVALUE;
    _24847 = (_24846 == 0);
    _24846 = NOVALUE;
    if (_24847 == 0)
    {
        DeRef(_24847);
        _24847 = NOVALUE;
        goto L34; // [1542] 1635
    }
    else{
        DeRef(_24847);
        _24847 = NOVALUE;
    }

    /** symtab.e:1032				include_warnings = prepend( include_warnings,*/
    _2 = (object)SEQ_PTR(_gtok_47476);
    _24848 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_24848)){
        _24849 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24848)->dbl));
    }
    else{
        _24849 = (object)*(((s1_ptr)_2)->base + _24848);
    }
    _2 = (object)SEQ_PTR(_24849);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24850 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24850 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24849 = NOVALUE;
    Ref(_24850);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _scanning_file_47460;
    ((intptr_t *)_2)[2] = _24850;
    _24851 = MAKE_SEQ(_1);
    _24850 = NOVALUE;
    RefDS(_24851);
    Prepend(&_56include_warnings_47447, _56include_warnings_47447, _24851);
    DeRefDS(_24851);
    _24851 = NOVALUE;

    /** symtab.e:1034	ifdef STDDEBUG then*/

    /** symtab.e:1040					symbol_resolution_warning = GetMsgText(233,0,*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _24853 = (object)*(((s1_ptr)_2)->base + _scanning_file_47460);
    Ref(_24853);
    _24854 = _56name_ext(_24853);
    _24853 = NOVALUE;
    _2 = (object)SEQ_PTR(_gtok_47476);
    _24855 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!IS_ATOM_INT(_24855)){
        _24856 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24855)->dbl));
    }
    else{
        _24856 = (object)*(((s1_ptr)_2)->base + _24855);
    }
    _2 = (object)SEQ_PTR(_24856);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24857 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24857 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24856 = NOVALUE;
    _2 = (object)SEQ_PTR(_36known_files_15405);
    if (!IS_ATOM_INT(_24857)){
        _24858 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24857)->dbl));
    }
    else{
        _24858 = (object)*(((s1_ptr)_2)->base + _24857);
    }
    Ref(_24858);
    _24859 = _56name_ext(_24858);
    _24858 = NOVALUE;
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = _24854;
    ((intptr_t*)_2)[2] = _39line_number_16816;
    RefDS(_word_47458);
    ((intptr_t*)_2)[3] = _word_47458;
    ((intptr_t*)_2)[4] = _24859;
    _24860 = MAKE_SEQ(_1);
    _24859 = NOVALUE;
    _24854 = NOVALUE;
    _0 = _44GetMsgText(233, 0, _24860);
    DeRef(_39symbol_resolution_warning_16916);
    _39symbol_resolution_warning_16916 = _0;
    _24860 = NOVALUE;
L34: 

    /** symtab.e:1047			return gtok*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_tok_47475);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    DeRef(_24836);
    _24836 = NOVALUE;
    _24768 = NOVALUE;
    _24807 = NOVALUE;
    _24848 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24857 = NOVALUE;
    _24715 = NOVALUE;
    _24809 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    _24842 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24840);
    _24840 = NOVALUE;
    DeRef(_24820);
    _24820 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24855 = NOVALUE;
    _24756 = NOVALUE;
    return _gtok_47476;
L32: 

    /** symtab.e:1051		if length(dup_globals) = 0 then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24862 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24862 = 1;
    }
    if (_24862 != 0)
    goto L35; // [1649] 1723

    /** symtab.e:1052			defined = SC_UNDEFINED*/
    _defined_47469 = 9;

    /** symtab.e:1054			if fwd_line_number then*/
    if (_39fwd_line_number_16817 == 0)
    {
        goto L36; // [1666] 1695
    }
    else{
    }

    /** symtab.e:1055				last_ForwardLine     = ForwardLine*/
    Ref(_52ForwardLine_48711);
    DeRef(_52last_ForwardLine_48713);
    _52last_ForwardLine_48713 = _52ForwardLine_48711;

    /** symtab.e:1056				last_forward_bp      = forward_bp*/
    _52last_forward_bp_48717 = _52forward_bp_48715;

    /** symtab.e:1057				last_fwd_line_number = fwd_line_number*/
    _39last_fwd_line_number_16819 = _39fwd_line_number_16817;
L36: 

    /** symtab.e:1060			ForwardLine = ThisLine*/
    Ref(_52ThisLine_48710);
    DeRef(_52ForwardLine_48711);
    _52ForwardLine_48711 = _52ThisLine_48710;

    /** symtab.e:1061			forward_bp = bp*/
    _52forward_bp_48715 = _52bp_48714;

    /** symtab.e:1062			fwd_line_number = line_number*/
    _39fwd_line_number_16817 = _39line_number_16816;
    goto L37; // [1720] 1766
L35: 

    /** symtab.e:1064		elsif length(dup_globals) then*/
    if (IS_SEQUENCE(_56dup_globals_47444)){
            _24864 = SEQ_PTR(_56dup_globals_47444)->length;
    }
    else {
        _24864 = 1;
    }
    if (_24864 == 0)
    {
        _24864 = NOVALUE;
        goto L38; // [1730] 1745
    }
    else{
        _24864 = NOVALUE;
    }

    /** symtab.e:1065			defined = SC_MULTIPLY_DEFINED*/
    _defined_47469 = 10;
    goto L37; // [1742] 1766
L38: 

    /** symtab.e:1066		elsif length(dup_overrides) then*/
    if (IS_SEQUENCE(_56dup_overrides_47445)){
            _24865 = SEQ_PTR(_56dup_overrides_47445)->length;
    }
    else {
        _24865 = 1;
    }
    if (_24865 == 0)
    {
        _24865 = NOVALUE;
        goto L39; // [1752] 1765
    }
    else{
        _24865 = NOVALUE;
    }

    /** symtab.e:1067			defined = SC_OVERRIDE*/
    _defined_47469 = 12;
L39: 
L37: 

    /** symtab.e:1070		if No_new_entry then*/
    if (_56No_new_entry_47455 == 0)
    {
        goto L3A; // [1770] 1793
    }
    else{
    }

    /** symtab.e:1071			return {IGNORED,word,defined,dup_globals}*/
    _1 = NewS1(4);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 509;
    RefDS(_word_47458);
    ((intptr_t*)_2)[2] = _word_47458;
    ((intptr_t*)_2)[3] = _defined_47469;
    RefDS(_56dup_globals_47444);
    ((intptr_t*)_2)[4] = _56dup_globals_47444;
    _24866 = MAKE_SEQ(_1);
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_tok_47475);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    DeRef(_24836);
    _24836 = NOVALUE;
    _24768 = NOVALUE;
    _24807 = NOVALUE;
    _24848 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24857 = NOVALUE;
    _24715 = NOVALUE;
    _24809 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    _24842 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24840);
    _24840 = NOVALUE;
    DeRef(_24820);
    _24820 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24855 = NOVALUE;
    _24756 = NOVALUE;
    return _24866;
L3A: 

    /** symtab.e:1074		tok = {VARIABLE, NewEntry(word, 0, defined,*/
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _24867 = (object)*(((s1_ptr)_2)->base + _hashval_47464);
    RefDS(_word_47458);
    Ref(_24867);
    _24868 = _56NewEntry(_word_47458, 0, _defined_47469, -100, _hashval_47464, _24867, 0);
    _24867 = NOVALUE;
    DeRef(_tok_47475);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = -100;
    ((intptr_t *)_2)[2] = _24868;
    _tok_47475 = MAKE_SEQ(_1);
    _24868 = NOVALUE;

    /** symtab.e:1076		buckets[hashval] = tok[T_SYM]*/
    _2 = (object)SEQ_PTR(_tok_47475);
    _24870 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_24870);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    _2 = (object)(((s1_ptr)_2)->base + _hashval_47464);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24870;
    if( _1 != _24870 ){
        DeRef(_1);
    }
    _24870 = NOVALUE;

    /** symtab.e:1078		if file_no != -1 then*/
    if (_file_no_47459 == -1)
    goto L3B; // [1837] 1863

    /** symtab.e:1079			SymTab[tok[T_SYM]][S_FILE_NO] = file_no*/
    _2 = (object)SEQ_PTR(_tok_47475);
    _24872 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_24872))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24872)->dbl));
    else
    _3 = (object)(_24872 + ((s1_ptr)_2)->base);
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
    *(intptr_t *)_2 = _file_no_47459;
    DeRef(_1);
    _24873 = NOVALUE;
L3B: 

    /** symtab.e:1081		return tok  -- no ref on newly declared symbol*/
    DeRefDS(_word_47458);
    DeRef(_msg_47466);
    DeRef(_b_name_47467);
    DeRef(_gtok_47476);
    DeRef(_24687);
    _24687 = NOVALUE;
    _24763 = NOVALUE;
    DeRef(_24736);
    _24736 = NOVALUE;
    DeRef(_24771);
    _24771 = NOVALUE;
    DeRef(_24866);
    _24866 = NOVALUE;
    _24872 = NOVALUE;
    DeRef(_24836);
    _24836 = NOVALUE;
    _24768 = NOVALUE;
    _24807 = NOVALUE;
    _24848 = NOVALUE;
    DeRef(_24697);
    _24697 = NOVALUE;
    DeRef(_24752);
    _24752 = NOVALUE;
    _24731 = NOVALUE;
    _24857 = NOVALUE;
    _24715 = NOVALUE;
    _24809 = NOVALUE;
    DeRef(_24738);
    _24738 = NOVALUE;
    _24842 = NOVALUE;
    DeRef(_24744);
    _24744 = NOVALUE;
    DeRef(_24746);
    _24746 = NOVALUE;
    DeRef(_24840);
    _24840 = NOVALUE;
    DeRef(_24820);
    _24820 = NOVALUE;
    _24742 = NOVALUE;
    _24716 = NOVALUE;
    _24724 = NOVALUE;
    _24711 = NOVALUE;
    _24750 = NOVALUE;
    _24855 = NOVALUE;
    _24756 = NOVALUE;
    return _tok_47475;
    ;
}


void _56Hide(object _s_47868)
{
    object _prev_47870 = NOVALUE;
    object _p_47871 = NOVALUE;
    object _24893 = NOVALUE;
    object _24892 = NOVALUE;
    object _24891 = NOVALUE;
    object _24889 = NOVALUE;
    object _24888 = NOVALUE;
    object _24887 = NOVALUE;
    object _24886 = NOVALUE;
    object _24885 = NOVALUE;
    object _24881 = NOVALUE;
    object _24880 = NOVALUE;
    object _24879 = NOVALUE;
    object _24878 = NOVALUE;
    object _24876 = NOVALUE;
    object _24875 = NOVALUE;
    object _0, _1, _2, _3;
    
    if (!IS_ATOM_INT(_s_47868)) {
        _1 = (object)(DBL_PTR(_s_47868)->dbl);
        DeRefDS(_s_47868);
        _s_47868 = _1;
    }

    /** symtab.e:1090		p = buckets[SymTab[s][S_HASHVAL]]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24875 = (object)*(((s1_ptr)_2)->base + _s_47868);
    _2 = (object)SEQ_PTR(_24875);
    _24876 = (object)*(((s1_ptr)_2)->base + 11);
    _24875 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_24876)){
        _p_47871 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24876)->dbl));
    }
    else{
        _p_47871 = (object)*(((s1_ptr)_2)->base + _24876);
    }
    if (!IS_ATOM_INT(_p_47871)){
        _p_47871 = (object)DBL_PTR(_p_47871)->dbl;
    }

    /** symtab.e:1091		prev = 0*/
    _prev_47870 = 0;

    /** symtab.e:1093		while p != s and p != 0 do*/
L1: 
    _24878 = (_p_47871 != _s_47868);
    if (_24878 == 0) {
        goto L2; // [41] 81
    }
    _24880 = (_p_47871 != 0);
    if (_24880 == 0)
    {
        DeRef(_24880);
        _24880 = NOVALUE;
        goto L2; // [50] 81
    }
    else{
        DeRef(_24880);
        _24880 = NOVALUE;
    }

    /** symtab.e:1094			prev = p*/
    _prev_47870 = _p_47871;

    /** symtab.e:1095			p = SymTab[p][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24881 = (object)*(((s1_ptr)_2)->base + _p_47871);
    _2 = (object)SEQ_PTR(_24881);
    _p_47871 = (object)*(((s1_ptr)_2)->base + 9);
    if (!IS_ATOM_INT(_p_47871)){
        _p_47871 = (object)DBL_PTR(_p_47871)->dbl;
    }
    _24881 = NOVALUE;

    /** symtab.e:1096		end while*/
    goto L1; // [78] 37
L2: 

    /** symtab.e:1098		if p = 0 then*/
    if (_p_47871 != 0)
    goto L3; // [83] 93

    /** symtab.e:1099			return -- already hidden*/
    _24876 = NOVALUE;
    DeRef(_24878);
    _24878 = NOVALUE;
    return;
L3: 

    /** symtab.e:1101		if prev = 0 then*/
    if (_prev_47870 != 0)
    goto L4; // [95] 134

    /** symtab.e:1102			buckets[SymTab[s][S_HASHVAL]] = SymTab[s][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24885 = (object)*(((s1_ptr)_2)->base + _s_47868);
    _2 = (object)SEQ_PTR(_24885);
    _24886 = (object)*(((s1_ptr)_2)->base + 11);
    _24885 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24887 = (object)*(((s1_ptr)_2)->base + _s_47868);
    _2 = (object)SEQ_PTR(_24887);
    _24888 = (object)*(((s1_ptr)_2)->base + 9);
    _24887 = NOVALUE;
    Ref(_24888);
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_24886))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24886)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24886);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24888;
    if( _1 != _24888 ){
        DeRef(_1);
    }
    _24888 = NOVALUE;
    goto L5; // [131] 162
L4: 

    /** symtab.e:1104			SymTab[prev][S_SAMEHASH] = SymTab[s][S_SAMEHASH]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_prev_47870 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24891 = (object)*(((s1_ptr)_2)->base + _s_47868);
    _2 = (object)SEQ_PTR(_24891);
    _24892 = (object)*(((s1_ptr)_2)->base + 9);
    _24891 = NOVALUE;
    Ref(_24892);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _24892;
    if( _1 != _24892 ){
        DeRef(_1);
    }
    _24892 = NOVALUE;
    _24889 = NOVALUE;
L5: 

    /** symtab.e:1106		SymTab[s][S_SAMEHASH] = 0*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47868 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _24893 = NOVALUE;

    /** symtab.e:1107	end procedure*/
    _24876 = NOVALUE;
    _24886 = NOVALUE;
    DeRef(_24878);
    _24878 = NOVALUE;
    return;
    ;
}


void _56Show(object _s_47913)
{
    object _p_47915 = NOVALUE;
    object _24905 = NOVALUE;
    object _24904 = NOVALUE;
    object _24902 = NOVALUE;
    object _24901 = NOVALUE;
    object _24899 = NOVALUE;
    object _24898 = NOVALUE;
    object _24896 = NOVALUE;
    object _24895 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** symtab.e:1114		p = buckets[SymTab[s][S_HASHVAL]]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24895 = (object)*(((s1_ptr)_2)->base + _s_47913);
    _2 = (object)SEQ_PTR(_24895);
    _24896 = (object)*(((s1_ptr)_2)->base + 11);
    _24895 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_24896)){
        _p_47915 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_24896)->dbl));
    }
    else{
        _p_47915 = (object)*(((s1_ptr)_2)->base + _24896);
    }
    if (!IS_ATOM_INT(_p_47915)){
        _p_47915 = (object)DBL_PTR(_p_47915)->dbl;
    }

    /** symtab.e:1116		if SymTab[s][S_SAMEHASH] or p = s then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24898 = (object)*(((s1_ptr)_2)->base + _s_47913);
    _2 = (object)SEQ_PTR(_24898);
    _24899 = (object)*(((s1_ptr)_2)->base + 9);
    _24898 = NOVALUE;
    if (IS_ATOM_INT(_24899)) {
        if (_24899 != 0) {
            goto L1; // [39] 52
        }
    }
    else {
        if (DBL_PTR(_24899)->dbl != 0.0) {
            goto L1; // [39] 52
        }
    }
    _24901 = (_p_47915 == _s_47913);
    if (_24901 == 0)
    {
        DeRef(_24901);
        _24901 = NOVALUE;
        goto L2; // [48] 58
    }
    else{
        DeRef(_24901);
        _24901 = NOVALUE;
    }
L1: 

    /** symtab.e:1118			return*/
    _24896 = NOVALUE;
    _24899 = NOVALUE;
    return;
L2: 

    /** symtab.e:1121		SymTab[s][S_SAMEHASH] = p*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _36SymTab_15404 = MAKE_SEQ(_2);
    }
    _3 = (object)(_s_47913 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 9);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _p_47915;
    DeRef(_1);
    _24902 = NOVALUE;

    /** symtab.e:1122		buckets[SymTab[s][S_HASHVAL]] = s*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24904 = (object)*(((s1_ptr)_2)->base + _s_47913);
    _2 = (object)SEQ_PTR(_24904);
    _24905 = (object)*(((s1_ptr)_2)->base + 11);
    _24904 = NOVALUE;
    _2 = (object)SEQ_PTR(_56buckets_46254);
    if (!IS_ATOM_INT(_24905))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_24905)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _24905);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _s_47913;
    DeRef(_1);

    /** symtab.e:1124	end procedure*/
    _24896 = NOVALUE;
    _24899 = NOVALUE;
    _24905 = NOVALUE;
    return;
    ;
}


void _56hide_params(object _s_47939)
{
    object _param_47941 = NOVALUE;
    object _24908 = NOVALUE;
    object _24907 = NOVALUE;
    object _24906 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1127		symtab_index param = s*/
    _param_47941 = _s_47939;

    /** symtab.e:1128		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24906 = (object)*(((s1_ptr)_2)->base + _s_47939);
    _2 = (object)SEQ_PTR(_24906);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _24907 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _24907 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _24906 = NOVALUE;
    {
        object _i_47943;
        _i_47943 = 1;
L1: 
        if (binary_op_a(GREATER, _i_47943, _24907)){
            goto L2; // [24] 59
        }

        /** symtab.e:1129			param = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24908 = (object)*(((s1_ptr)_2)->base + _s_47939);
        _2 = (object)SEQ_PTR(_24908);
        _param_47941 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47941)){
            _param_47941 = (object)DBL_PTR(_param_47941)->dbl;
        }
        _24908 = NOVALUE;

        /** symtab.e:1130			Hide( param )*/
        _56Hide(_param_47941);

        /** symtab.e:1131		end for*/
        _0 = _i_47943;
        if (IS_ATOM_INT(_i_47943)) {
            _i_47943 = _i_47943 + 1;
            if ((object)((uintptr_t)_i_47943 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47943 = NewDouble((eudouble)_i_47943);
            }
        }
        else {
            _i_47943 = binary_op_a(PLUS, _i_47943, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: 
        ;
        DeRef(_i_47943);
    }

    /** symtab.e:1132	end procedure*/
    _24907 = NOVALUE;
    return;
    ;
}


void _56show_params(object _s_47955)
{
    object _param_47957 = NOVALUE;
    object _24912 = NOVALUE;
    object _24911 = NOVALUE;
    object _24910 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1135		symtab_index param = s*/
    _param_47957 = _s_47955;

    /** symtab.e:1136		for i = 1 to SymTab[s][S_NUM_ARGS] do*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24910 = (object)*(((s1_ptr)_2)->base + _s_47955);
    _2 = (object)SEQ_PTR(_24910);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _24911 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _24911 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _24910 = NOVALUE;
    {
        object _i_47959;
        _i_47959 = 1;
L1: 
        if (binary_op_a(GREATER, _i_47959, _24911)){
            goto L2; // [24] 59
        }

        /** symtab.e:1137			param = SymTab[s][S_NEXT]*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24912 = (object)*(((s1_ptr)_2)->base + _s_47955);
        _2 = (object)SEQ_PTR(_24912);
        _param_47957 = (object)*(((s1_ptr)_2)->base + 2);
        if (!IS_ATOM_INT(_param_47957)){
            _param_47957 = (object)DBL_PTR(_param_47957)->dbl;
        }
        _24912 = NOVALUE;

        /** symtab.e:1138			Show( param )*/
        _56Show(_param_47957);

        /** symtab.e:1139		end for*/
        _0 = _i_47959;
        if (IS_ATOM_INT(_i_47959)) {
            _i_47959 = _i_47959 + 1;
            if ((object)((uintptr_t)_i_47959 +(uintptr_t) HIGH_BITS) >= 0){
                _i_47959 = NewDouble((eudouble)_i_47959);
            }
        }
        else {
            _i_47959 = binary_op_a(PLUS, _i_47959, 1);
        }
        DeRef(_0);
        goto L1; // [54] 31
L2: 
        ;
        DeRef(_i_47959);
    }

    /** symtab.e:1140	end procedure*/
    _24911 = NOVALUE;
    return;
    ;
}


void _56LintCheck(object _s_47971)
{
    object _warn_level_47972 = NOVALUE;
    object _file_47973 = NOVALUE;
    object _vscope_47974 = NOVALUE;
    object _vname_47975 = NOVALUE;
    object _vusage_47976 = NOVALUE;
    object _24973 = NOVALUE;
    object _24972 = NOVALUE;
    object _24971 = NOVALUE;
    object _24970 = NOVALUE;
    object _24969 = NOVALUE;
    object _24968 = NOVALUE;
    object _24966 = NOVALUE;
    object _24965 = NOVALUE;
    object _24964 = NOVALUE;
    object _24963 = NOVALUE;
    object _24962 = NOVALUE;
    object _24961 = NOVALUE;
    object _24958 = NOVALUE;
    object _24957 = NOVALUE;
    object _24956 = NOVALUE;
    object _24955 = NOVALUE;
    object _24954 = NOVALUE;
    object _24953 = NOVALUE;
    object _24951 = NOVALUE;
    object _24949 = NOVALUE;
    object _24948 = NOVALUE;
    object _24946 = NOVALUE;
    object _24945 = NOVALUE;
    object _24943 = NOVALUE;
    object _24942 = NOVALUE;
    object _24941 = NOVALUE;
    object _24940 = NOVALUE;
    object _24938 = NOVALUE;
    object _24937 = NOVALUE;
    object _24933 = NOVALUE;
    object _24930 = NOVALUE;
    object _24929 = NOVALUE;
    object _24928 = NOVALUE;
    object _24927 = NOVALUE;
    object _24924 = NOVALUE;
    object _24923 = NOVALUE;
    object _24918 = NOVALUE;
    object _24916 = NOVALUE;
    object _24914 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_s_47971)) {
        _1 = (object)(DBL_PTR(_s_47971)->dbl);
        DeRefDS(_s_47971);
        _s_47971 = _1;
    }

    /** symtab.e:1150		vusage = SymTab[s][S_USAGE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24914 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24914);
    _vusage_47976 = (object)*(((s1_ptr)_2)->base + 5);
    if (!IS_ATOM_INT(_vusage_47976)){
        _vusage_47976 = (object)DBL_PTR(_vusage_47976)->dbl;
    }
    _24914 = NOVALUE;

    /** symtab.e:1151		vscope = SymTab[s][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24916 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24916);
    _vscope_47974 = (object)*(((s1_ptr)_2)->base + 4);
    if (!IS_ATOM_INT(_vscope_47974)){
        _vscope_47974 = (object)DBL_PTR(_vscope_47974)->dbl;
    }
    _24916 = NOVALUE;

    /** symtab.e:1152		vname = SymTab[s][S_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24918 = (object)*(((s1_ptr)_2)->base + _s_47971);
    DeRef(_vname_47975);
    _2 = (object)SEQ_PTR(_24918);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _vname_47975 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _vname_47975 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    Ref(_vname_47975);
    _24918 = NOVALUE;

    /** symtab.e:1154		switch vusage do*/
    _0 = _vusage_47976;
    switch ( _0 ){ 

        /** symtab.e:1156			case U_UNUSED then*/
        case 0:

        /** symtab.e:1157				warn_level = 1*/
        _warn_level_47972 = 1;
        goto L1; // [67] 193

        /** symtab.e:1159			case U_WRITTEN then -- Set but never read*/
        case 2:

        /** symtab.e:1160				warn_level = 2*/
        _warn_level_47972 = 2;

        /** symtab.e:1162				if vscope > SC_LOCAL then*/
        if (_vscope_47974 <= 5)
        goto L2; // [82] 94

        /** symtab.e:1164					warn_level = 0 */
        _warn_level_47972 = 0;
        goto L1; // [91] 193
L2: 

        /** symtab.e:1166				elsif SymTab[s][S_MODE] = M_CONSTANT then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24923 = (object)*(((s1_ptr)_2)->base + _s_47971);
        _2 = (object)SEQ_PTR(_24923);
        _24924 = (object)*(((s1_ptr)_2)->base + 3);
        _24923 = NOVALUE;
        if (binary_op_a(NOTEQ, _24924, 2)){
            _24924 = NOVALUE;
            goto L1; // [110] 193
        }
        _24924 = NOVALUE;

        /** symtab.e:1167					if not Strict_is_on then*/
        if (_39Strict_is_on_16880 != 0)
        goto L1; // [118] 193

        /** symtab.e:1170						warn_level = 0 */
        _warn_level_47972 = 0;
        goto L1; // [129] 193

        /** symtab.e:1174			case U_READ then -- Read but never set*/
        case 1:

        /** symtab.e:1175				if SymTab[s][S_VARNUM] >= SymTab[CurrentSub][S_NUM_ARGS] then*/
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24927 = (object)*(((s1_ptr)_2)->base + _s_47971);
        _2 = (object)SEQ_PTR(_24927);
        _24928 = (object)*(((s1_ptr)_2)->base + 16);
        _24927 = NOVALUE;
        _2 = (object)SEQ_PTR(_36SymTab_15404);
        _24929 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
        _2 = (object)SEQ_PTR(_24929);
        if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
            _24930 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
        }
        else{
            _24930 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
        }
        _24929 = NOVALUE;
        if (binary_op_a(LESS, _24928, _24930)){
            _24928 = NOVALUE;
            _24930 = NOVALUE;
            goto L3; // [163] 175
        }
        _24928 = NOVALUE;
        _24930 = NOVALUE;

        /** symtab.e:1176			    	warn_level = 3*/
        _warn_level_47972 = 3;
        goto L1; // [172] 193
L3: 

        /** symtab.e:1179			    	warn_level = 0*/
        _warn_level_47972 = 0;
        goto L1; // [181] 193

        /** symtab.e:1182		    case else*/
        default:

        /** symtab.e:1183		    	warn_level = 0*/
        _warn_level_47972 = 0;
    ;}L1: 

    /** symtab.e:1186		if warn_level = 0 then*/
    if (_warn_level_47972 != 0)
    goto L4; // [197] 207

    /** symtab.e:1187			return*/
    DeRef(_file_47973);
    DeRef(_vname_47975);
    return;
L4: 

    /** symtab.e:1191		file = abbreviate_path(known_files[current_file_no])*/
    _2 = (object)SEQ_PTR(_36known_files_15405);
    _24933 = (object)*(((s1_ptr)_2)->base + _39current_file_no_16815);
    Ref(_24933);
    RefDS(_21928);
    _0 = _file_47973;
    _file_47973 = _16abbreviate_path(_24933, _21928);
    DeRef(_0);
    _24933 = NOVALUE;

    /** symtab.e:1192		if warn_level = 3 then*/
    if (_warn_level_47972 != 3)
    goto L5; // [226] 308

    /** symtab.e:1193			if vscope = SC_LOCAL then*/
    if (_vscope_47974 != 5)
    goto L6; // [234] 275

    /** symtab.e:1194				if current_file_no = SymTab[s][S_FILE_NO] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24937 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24937);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24938 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24938 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24937 = NOVALUE;
    if (binary_op_a(NOTEQ, _39current_file_no_16815, _24938)){
        _24938 = NOVALUE;
        goto L7; // [254] 602
    }
    _24938 = NOVALUE;

    /** symtab.e:1195					Warning(226, no_value_warning_flag, {file,  vname})*/
    RefDS(_vname_47975);
    RefDS(_file_47973);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47973;
    ((intptr_t *)_2)[2] = _vname_47975;
    _24940 = MAKE_SEQ(_1);
    _52Warning(226, 32, _24940);
    _24940 = NOVALUE;
    goto L7; // [272] 602
L6: 

    /** symtab.e:1198				Warning(227, no_value_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24941 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24941);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24942 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24942 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24941 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47973);
    ((intptr_t*)_2)[1] = _file_47973;
    RefDS(_vname_47975);
    ((intptr_t*)_2)[2] = _vname_47975;
    Ref(_24942);
    ((intptr_t*)_2)[3] = _24942;
    _24943 = MAKE_SEQ(_1);
    _24942 = NOVALUE;
    _52Warning(227, 32, _24943);
    _24943 = NOVALUE;
    goto L7; // [305] 602
L5: 

    /** symtab.e:1201			if vscope = SC_LOCAL then*/
    if (_vscope_47974 != 5)
    goto L8; // [312] 412

    /** symtab.e:1202				if current_file_no = SymTab[s][S_FILE_NO] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24945 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24945);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24946 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24946 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24945 = NOVALUE;
    if (binary_op_a(NOTEQ, _39current_file_no_16815, _24946)){
        _24946 = NOVALUE;
        goto L9; // [332] 601
    }
    _24946 = NOVALUE;

    /** symtab.e:1203					if SymTab[s][S_MODE] = M_CONSTANT then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24948 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24948);
    _24949 = (object)*(((s1_ptr)_2)->base + 3);
    _24948 = NOVALUE;
    if (binary_op_a(NOTEQ, _24949, 2)){
        _24949 = NOVALUE;
        goto LA; // [352] 372
    }
    _24949 = NOVALUE;

    /** symtab.e:1204						Warning(228, not_used_warning_flag, {file,  vname})*/
    RefDS(_vname_47975);
    RefDS(_file_47973);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47973;
    ((intptr_t *)_2)[2] = _vname_47975;
    _24951 = MAKE_SEQ(_1);
    _52Warning(228, 16, _24951);
    _24951 = NOVALUE;
    goto L9; // [369] 601
LA: 

    /** symtab.e:1206					elsif warn_level = 1 then*/
    if (_warn_level_47972 != 1)
    goto LB; // [374] 394

    /** symtab.e:1207						Warning(229, not_used_warning_flag, {file,  vname})*/
    RefDS(_vname_47975);
    RefDS(_file_47973);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47973;
    ((intptr_t *)_2)[2] = _vname_47975;
    _24953 = MAKE_SEQ(_1);
    _52Warning(229, 16, _24953);
    _24953 = NOVALUE;
    goto L9; // [391] 601
LB: 

    /** symtab.e:1210						Warning(320, not_used_warning_flag, {file,  vname})*/
    RefDS(_vname_47975);
    RefDS(_file_47973);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _file_47973;
    ((intptr_t *)_2)[2] = _vname_47975;
    _24954 = MAKE_SEQ(_1);
    _52Warning(320, 16, _24954);
    _24954 = NOVALUE;
    goto L9; // [409] 601
L8: 

    /** symtab.e:1214				if SymTab[s][S_VARNUM] < SymTab[CurrentSub][S_NUM_ARGS] then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24955 = (object)*(((s1_ptr)_2)->base + _s_47971);
    _2 = (object)SEQ_PTR(_24955);
    _24956 = (object)*(((s1_ptr)_2)->base + 16);
    _24955 = NOVALUE;
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24957 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24957);
    if (!IS_ATOM_INT(_39S_NUM_ARGS_16521)){
        _24958 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NUM_ARGS_16521)->dbl));
    }
    else{
        _24958 = (object)*(((s1_ptr)_2)->base + _39S_NUM_ARGS_16521);
    }
    _24957 = NOVALUE;
    if (binary_op_a(GREATEREQ, _24956, _24958)){
        _24956 = NOVALUE;
        _24958 = NOVALUE;
        goto LC; // [440] 523
    }
    _24956 = NOVALUE;
    _24958 = NOVALUE;

    /** symtab.e:1216					if warn_level = 1 then*/
    if (_warn_level_47972 != 1)
    goto LD; // [446] 490

    /** symtab.e:1217						if Strict_is_on then*/
    if (_39Strict_is_on_16880 == 0)
    {
        goto LE; // [454] 600
    }
    else{
    }

    /** symtab.e:1219							Warning(230, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24961 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24961);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24962 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24962 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24961 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47973);
    ((intptr_t*)_2)[1] = _file_47973;
    RefDS(_vname_47975);
    ((intptr_t*)_2)[2] = _vname_47975;
    Ref(_24962);
    ((intptr_t*)_2)[3] = _24962;
    _24963 = MAKE_SEQ(_1);
    _24962 = NOVALUE;
    _52Warning(230, 16, _24963);
    _24963 = NOVALUE;
    goto LE; // [487] 600
LD: 

    /** symtab.e:1222						Warning(321, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24964 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24964);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24965 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24965 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24964 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47973);
    ((intptr_t*)_2)[1] = _file_47973;
    RefDS(_vname_47975);
    ((intptr_t*)_2)[2] = _vname_47975;
    Ref(_24965);
    ((intptr_t*)_2)[3] = _24965;
    _24966 = MAKE_SEQ(_1);
    _24965 = NOVALUE;
    _52Warning(321, 16, _24966);
    _24966 = NOVALUE;
    goto LE; // [520] 600
LC: 

    /** symtab.e:1226					if warn_level = 1 then*/
    if (_warn_level_47972 != 1)
    goto LF; // [525] 569

    /** symtab.e:1227						if Strict_is_on then*/
    if (_39Strict_is_on_16880 == 0)
    {
        goto L10; // [533] 599
    }
    else{
    }

    /** symtab.e:1229							Warning(231, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24968 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24968);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24969 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24969 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24968 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47973);
    ((intptr_t*)_2)[1] = _file_47973;
    RefDS(_vname_47975);
    ((intptr_t*)_2)[2] = _vname_47975;
    Ref(_24969);
    ((intptr_t*)_2)[3] = _24969;
    _24970 = MAKE_SEQ(_1);
    _24969 = NOVALUE;
    _52Warning(231, 16, _24970);
    _24970 = NOVALUE;
    goto L10; // [566] 599
LF: 

    /** symtab.e:1232						Warning(322, not_used_warning_flag, {file,  vname, SymTab[CurrentSub][S_NAME]})*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24971 = (object)*(((s1_ptr)_2)->base + _39CurrentSub_16823);
    _2 = (object)SEQ_PTR(_24971);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24972 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24972 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24971 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    RefDS(_file_47973);
    ((intptr_t*)_2)[1] = _file_47973;
    RefDS(_vname_47975);
    ((intptr_t*)_2)[2] = _vname_47975;
    Ref(_24972);
    ((intptr_t*)_2)[3] = _24972;
    _24973 = MAKE_SEQ(_1);
    _24972 = NOVALUE;
    _52Warning(322, 16, _24973);
    _24973 = NOVALUE;
L10: 
LE: 
L9: 
L7: 

    /** symtab.e:1238	end procedure*/
    DeRef(_file_47973);
    DeRef(_vname_47975);
    return;
    ;
}


void _56HideLocals()
{
    object _s_48142 = NOVALUE;
    object _24986 = NOVALUE;
    object _24984 = NOVALUE;
    object _24983 = NOVALUE;
    object _24982 = NOVALUE;
    object _24981 = NOVALUE;
    object _24980 = NOVALUE;
    object _24979 = NOVALUE;
    object _24978 = NOVALUE;
    object _24977 = NOVALUE;
    object _24976 = NOVALUE;
    object _24975 = NOVALUE;
    object _24974 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1244		mark_rechecks()*/
    _56mark_rechecks(_39current_file_no_16815);

    /** symtab.e:1245		s = file_start_sym*/
    _s_48142 = _39file_start_sym_16821;

    /** symtab.e:1246		while s do*/
L1: 
    if (_s_48142 == 0)
    {
        goto L2; // [22] 148
    }
    else{
    }

    /** symtab.e:1247			if SymTab[s][S_SCOPE] = SC_LOCAL and*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24974 = (object)*(((s1_ptr)_2)->base + _s_48142);
    _2 = (object)SEQ_PTR(_24974);
    _24975 = (object)*(((s1_ptr)_2)->base + 4);
    _24974 = NOVALUE;
    if (IS_ATOM_INT(_24975)) {
        _24976 = (_24975 == 5);
    }
    else {
        _24976 = binary_op(EQUALS, _24975, 5);
    }
    _24975 = NOVALUE;
    if (IS_ATOM_INT(_24976)) {
        if (_24976 == 0) {
            goto L3; // [45] 127
        }
    }
    else {
        if (DBL_PTR(_24976)->dbl == 0.0) {
            goto L3; // [45] 127
        }
    }
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24978 = (object)*(((s1_ptr)_2)->base + _s_48142);
    _2 = (object)SEQ_PTR(_24978);
    if (!IS_ATOM_INT(_39S_FILE_NO_16466)){
        _24979 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_FILE_NO_16466)->dbl));
    }
    else{
        _24979 = (object)*(((s1_ptr)_2)->base + _39S_FILE_NO_16466);
    }
    _24978 = NOVALUE;
    if (IS_ATOM_INT(_24979)) {
        _24980 = (_24979 == _39current_file_no_16815);
    }
    else {
        _24980 = binary_op(EQUALS, _24979, _39current_file_no_16815);
    }
    _24979 = NOVALUE;
    if (_24980 == 0) {
        DeRef(_24980);
        _24980 = NOVALUE;
        goto L3; // [68] 127
    }
    else {
        if (!IS_ATOM_INT(_24980) && DBL_PTR(_24980)->dbl == 0.0){
            DeRef(_24980);
            _24980 = NOVALUE;
            goto L3; // [68] 127
        }
        DeRef(_24980);
        _24980 = NOVALUE;
    }
    DeRef(_24980);
    _24980 = NOVALUE;

    /** symtab.e:1249			   	if current_block = top_level_block and repl then*/
    _24981 = (_66current_block_24750 == _66top_level_block_24751);
    if (_24981 == 0) {
        goto L4; // [81] 94
    }
    goto L4; // [88] 94
    goto L5; // [91] 100
L4: 

    /** symtab.e:1251				Hide(s)*/
    _56Hide(_s_48142);
L5: 

    /** symtab.e:1253				if SymTab[s][S_TOKEN] = VARIABLE then*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24983 = (object)*(((s1_ptr)_2)->base + _s_48142);
    _2 = (object)SEQ_PTR(_24983);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24984 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24984 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24983 = NOVALUE;
    if (binary_op_a(NOTEQ, _24984, -100)){
        _24984 = NOVALUE;
        goto L6; // [116] 126
    }
    _24984 = NOVALUE;

    /** symtab.e:1254					LintCheck(s)*/
    _56LintCheck(_s_48142);
L6: 
L3: 

    /** symtab.e:1257			s = SymTab[s][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24986 = (object)*(((s1_ptr)_2)->base + _s_48142);
    _2 = (object)SEQ_PTR(_24986);
    _s_48142 = (object)*(((s1_ptr)_2)->base + 2);
    if (!IS_ATOM_INT(_s_48142)){
        _s_48142 = (object)DBL_PTR(_s_48142)->dbl;
    }
    _24986 = NOVALUE;

    /** symtab.e:1258		end while*/
    goto L1; // [145] 22
L2: 

    /** symtab.e:1259	end procedure*/
    DeRef(_24981);
    _24981 = NOVALUE;
    DeRef(_24976);
    _24976 = NOVALUE;
    return;
    ;
}


object _56sym_name(object _sym_48181)
{
    object _24989 = NOVALUE;
    object _24988 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_48181)) {
        _1 = (object)(DBL_PTR(_sym_48181)->dbl);
        DeRefDS(_sym_48181);
        _sym_48181 = _1;
    }

    /** symtab.e:1262		return SymTab[sym][S_NAME]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24988 = (object)*(((s1_ptr)_2)->base + _sym_48181);
    _2 = (object)SEQ_PTR(_24988);
    if (!IS_ATOM_INT(_39S_NAME_16470)){
        _24989 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NAME_16470)->dbl));
    }
    else{
        _24989 = (object)*(((s1_ptr)_2)->base + _39S_NAME_16470);
    }
    _24988 = NOVALUE;
    Ref(_24989);
    return _24989;
    ;
}


object _56sym_token(object _sym_48189)
{
    object _24991 = NOVALUE;
    object _24990 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_48189)) {
        _1 = (object)(DBL_PTR(_sym_48189)->dbl);
        DeRefDS(_sym_48189);
        _sym_48189 = _1;
    }

    /** symtab.e:1266		return SymTab[sym][S_TOKEN]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24990 = (object)*(((s1_ptr)_2)->base + _sym_48189);
    _2 = (object)SEQ_PTR(_24990);
    if (!IS_ATOM_INT(_39S_TOKEN_16475)){
        _24991 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_TOKEN_16475)->dbl));
    }
    else{
        _24991 = (object)*(((s1_ptr)_2)->base + _39S_TOKEN_16475);
    }
    _24990 = NOVALUE;
    Ref(_24991);
    return _24991;
    ;
}


object _56sym_scope(object _sym_48197)
{
    object _24993 = NOVALUE;
    object _24992 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_48197)) {
        _1 = (object)(DBL_PTR(_sym_48197)->dbl);
        DeRefDS(_sym_48197);
        _sym_48197 = _1;
    }

    /** symtab.e:1270		return SymTab[sym][S_SCOPE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24992 = (object)*(((s1_ptr)_2)->base + _sym_48197);
    _2 = (object)SEQ_PTR(_24992);
    _24993 = (object)*(((s1_ptr)_2)->base + 4);
    _24992 = NOVALUE;
    Ref(_24993);
    return _24993;
    ;
}


object _56sym_mode(object _sym_48205)
{
    object _24995 = NOVALUE;
    object _24994 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_48205)) {
        _1 = (object)(DBL_PTR(_sym_48205)->dbl);
        DeRefDS(_sym_48205);
        _sym_48205 = _1;
    }

    /** symtab.e:1274		return SymTab[sym][S_MODE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24994 = (object)*(((s1_ptr)_2)->base + _sym_48205);
    _2 = (object)SEQ_PTR(_24994);
    _24995 = (object)*(((s1_ptr)_2)->base + 3);
    _24994 = NOVALUE;
    Ref(_24995);
    return _24995;
    ;
}


object _56sym_obj(object _sym_48213)
{
    object _24997 = NOVALUE;
    object _24996 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_sym_48213)) {
        _1 = (object)(DBL_PTR(_sym_48213)->dbl);
        DeRefDS(_sym_48213);
        _sym_48213 = _1;
    }

    /** symtab.e:1278		return SymTab[sym][S_OBJ]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24996 = (object)*(((s1_ptr)_2)->base + _sym_48213);
    _2 = (object)SEQ_PTR(_24996);
    _24997 = (object)*(((s1_ptr)_2)->base + 1);
    _24996 = NOVALUE;
    Ref(_24997);
    return _24997;
    ;
}


object _56sym_next(object _sym_48221)
{
    object _24999 = NOVALUE;
    object _24998 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1282		return SymTab[sym][S_NEXT]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _24998 = (object)*(((s1_ptr)_2)->base + _sym_48221);
    _2 = (object)SEQ_PTR(_24998);
    _24999 = (object)*(((s1_ptr)_2)->base + 2);
    _24998 = NOVALUE;
    Ref(_24999);
    return _24999;
    ;
}


object _56sym_block(object _sym_48229)
{
    object _25001 = NOVALUE;
    object _25000 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1286		return SymTab[sym][S_BLOCK]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _25000 = (object)*(((s1_ptr)_2)->base + _sym_48229);
    _2 = (object)SEQ_PTR(_25000);
    if (!IS_ATOM_INT(_39S_BLOCK_16490)){
        _25001 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_BLOCK_16490)->dbl));
    }
    else{
        _25001 = (object)*(((s1_ptr)_2)->base + _39S_BLOCK_16490);
    }
    _25000 = NOVALUE;
    Ref(_25001);
    return _25001;
    ;
}


object _56sym_next_in_block(object _sym_48237)
{
    object _25003 = NOVALUE;
    object _25002 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1290		return SymTab[sym][S_NEXT_IN_BLOCK]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _25002 = (object)*(((s1_ptr)_2)->base + _sym_48237);
    _2 = (object)SEQ_PTR(_25002);
    if (!IS_ATOM_INT(_39S_NEXT_IN_BLOCK_16462)){
        _25003 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_39S_NEXT_IN_BLOCK_16462)->dbl));
    }
    else{
        _25003 = (object)*(((s1_ptr)_2)->base + _39S_NEXT_IN_BLOCK_16462);
    }
    _25002 = NOVALUE;
    Ref(_25003);
    return _25003;
    ;
}


object _56sym_usage(object _sym_48245)
{
    object _25005 = NOVALUE;
    object _25004 = NOVALUE;
    object _0, _1, _2;
    

    /** symtab.e:1294		return SymTab[sym][S_USAGE]*/
    _2 = (object)SEQ_PTR(_36SymTab_15404);
    _25004 = (object)*(((s1_ptr)_2)->base + _sym_48245);
    _2 = (object)SEQ_PTR(_25004);
    _25005 = (object)*(((s1_ptr)_2)->base + 5);
    _25004 = NOVALUE;
    Ref(_25005);
    return _25005;
    ;
}



// 0x153267A7
