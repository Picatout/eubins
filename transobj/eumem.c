// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _30malloc(object _mem_struct_p_11320, object _cleanup_p_11321)
{
    object _temp__11322 = NOVALUE;
    object _6362 = NOVALUE; // 11336 6362
// skipping _6361  name type: 0
    object _6360 = NOVALUE; // 11333 6360
    object _6359 = NOVALUE; // 11331 6359
    object _6358 = NOVALUE; // 11330 6358
// skipping _6357  name type: 0
// skipping _6356  name type: 0
// skipping _6355  name type: 0
    object _6354 = NOVALUE; // 11324 6354
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg malloc pc: 1 op: INTEGER_CHECK (96)
    // SubProg malloc pc: 3 op: STARTLINE (58)

    /** eumem.e:51		if atom(mem_struct_p) then*/
    // SubProg malloc pc: 5 op: IS_AN_ATOM (67)
    _6354 = IS_ATOM(_mem_struct_p_11320);
    // SubProg malloc pc: 8 op: IF (20)
    if (_6354 == 0)
    {
        _6354 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _6354 = NOVALUE;
    }
    // SubProg malloc pc: 11 op: STARTLINE (58)

    /** eumem.e:52			mem_struct_p = repeat(0, mem_struct_p)*/
    // SubProg malloc pc: 13 op: REPEAT (32)
    _0 = _mem_struct_p_11320;
    _mem_struct_p_11320 = Repeat(0, _mem_struct_p_11320);
    DeRef(_0);
    // SubProg malloc pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 11318 op: 159
    // SubProg malloc pc: 18 op: STARTLINE (58)

    /** eumem.e:54		if ram_free_list = 0 then*/
    // SubProg malloc pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 22 op: EQUALS_IFW_I (121)
    if (_30ram_free_list_11316 != 0)
    goto L2; // [22] 72
    // SubProg malloc pc: 26 op: STARTLINE (58)

    /** eumem.e:55			ram_space = append(ram_space, mem_struct_p)*/
    // SubProg malloc pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 30 op: APPEND (35)
    Ref(_mem_struct_p_11320);
    Append(&_30ram_space_11312, _30ram_space_11312, _mem_struct_p_11320);
    // SubProg malloc pc: 34 op: STARTLINE (58)

    /** eumem.e:56			if cleanup_p then*/
    // SubProg malloc pc: 36 op: IF (20)
    if (_cleanup_p_11321 == 0)
    {
        goto L3; // [36] 59
    }
    else{
    }
    // SubProg malloc pc: 39 op: STARTLINE (58)

    /** eumem.e:57				return delete_routine( length(ram_space), free_rid )*/
    // SubProg malloc pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_30ram_space_11312)){
            _6358 = SEQ_PTR(_30ram_space_11312)->length;
    }
    else {
        _6358 = 1;
    }
    // SubProg malloc pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 48 op: DELETE_ROUTINE (204)
    _6359 = NewDouble( (eudouble) _6358 );
    _1 = (object) _00[_30free_rid_11317].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_30free_rid_11317].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _30free_rid_11317;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6359)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6359)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6359)) ){
        DeRefDS(_6359);
        _6359 = NewDouble( DBL_PTR(_6359)->dbl );
    }
    DBL_PTR(_6359)->cleanup = (cleanup_ptr)_1;
    _6358 = NOVALUE;
    // SubProg malloc pc: 52 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_11320
    DeRef(_mem_struct_p_11320);

// block var cleanup_p_11321

// block var temp__11322
    return _6359;
    // SubProg malloc pc: 56 op: ELSE (23)
    goto L4; // [56] 71
    // SubProg malloc pc: 58 op: NOP1 (159)
L3: // addr: 59 pc: 58 sub: 11318 op: 159
    // SubProg malloc pc: 59 op: STARTLINE (58)

    /** eumem.e:59				return length(ram_space)*/
    // SubProg malloc pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_30ram_space_11312)){
            _6360 = SEQ_PTR(_30ram_space_11312)->length;
    }
    else {
        _6360 = 1;
    }
    // SubProg malloc pc: 66 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_11320
    DeRef(_mem_struct_p_11320);

// block var cleanup_p_11321

// block var temp__11322
    DeRef(_6359);
    _6359 = NOVALUE;
    return _6360;
    // SubProg malloc pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 11318 op: 159
    // SubProg malloc pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 11318 op: 159
    // SubProg malloc pc: 72 op: STARTLINE (58)

    /** eumem.e:63		temp_ = ram_free_list*/
    // SubProg malloc pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 76 op: ASSIGN_I (113)
    _temp__11322 = _30ram_free_list_11316;
    // SubProg malloc pc: 79 op: STARTLINE (58)

    /** eumem.e:64		ram_free_list = ram_space[temp_]*/
    // SubProg malloc pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 83 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    _30ram_free_list_11316 = (object)*(((s1_ptr)_2)->base + _temp__11322);
    if (!IS_ATOM_INT(_30ram_free_list_11316))
    _30ram_free_list_11316 = (object)DBL_PTR(_30ram_free_list_11316)->dbl;
    // SubProg malloc pc: 87 op: STARTLINE (58)

    /** eumem.e:65		ram_space[temp_] = mem_struct_p*/
    // SubProg malloc pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 91 op: ASSIGN_SUBS (16)
    Ref(_mem_struct_p_11320);
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp__11322);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _mem_struct_p_11320;
    DeRef(_1);
    // SubProg malloc pc: 95 op: STARTLINE (58)

    /** eumem.e:67		if cleanup_p then*/
    // SubProg malloc pc: 97 op: IF (20)
    if (_cleanup_p_11321 == 0)
    {
        goto L5; // [97] 115
    }
    else{
    }
    // SubProg malloc pc: 100 op: STARTLINE (58)

    /** eumem.e:68			return delete_routine( temp_, free_rid )*/
    // SubProg malloc pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 104 op: DELETE_ROUTINE (204)
    _6362 = NewDouble( (eudouble) _temp__11322 );
    _1 = (object) _00[_30free_rid_11317].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_30free_rid_11317].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _30free_rid_11317;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6362)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6362)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6362)) ){
        DeRefDS(_6362);
        _6362 = NewDouble( DBL_PTR(_6362)->dbl );
    }
    DBL_PTR(_6362)->cleanup = (cleanup_ptr)_1;
    // SubProg malloc pc: 108 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_11320
    DeRef(_mem_struct_p_11320);

// block var cleanup_p_11321

// block var temp__11322
    DeRef(_6359);
    _6359 = NOVALUE;
    return _6362;
    // SubProg malloc pc: 112 op: ELSE (23)
    goto L6; // [112] 122
    // SubProg malloc pc: 114 op: NOP1 (159)
L5: // addr: 115 pc: 114 sub: 11318 op: 159
    // SubProg malloc pc: 115 op: STARTLINE (58)

    /** eumem.e:70			return temp_*/
    // SubProg malloc pc: 117 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_11320
    DeRef(_mem_struct_p_11320);

// block var cleanup_p_11321
    DeRef(_6359);
    _6359 = NOVALUE;
    DeRef(_6362);
    _6362 = NOVALUE;
    return _temp__11322;
    // SubProg malloc pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 11318 op: 159
    // SubProg malloc pc: 122 op: BADRETURNF (43)
    ;
}


void _30free(object _mem_p_11340)
{
// skipping _6367  name type: 0
// skipping _6366  name type: 0
    object _6365 = NOVALUE; // 11346 6365
// skipping _6364  name type: 0
    object _6363 = NOVALUE; // 11342 6363
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg free pc: 1 op: STARTLINE (58)

    /** eumem.e:95		if object( ram_space ) then*/
    // SubProg free pc: 3 op: IS_AN_OBJECT (40)
    if( NOVALUE == _30ram_space_11312 ){
        _6363 = 0;
    }
    else{
        _6363 = 3;
    }
    // SubProg free pc: 6 op: IF (20)
    if (_6363 == 0)
    {
        _6363 = NOVALUE;
        goto L1; // [6] 52
    }
    else{
        _6363 = NOVALUE;
    }
    // SubProg free pc: 9 op: STARTLINE (58)

    /** eumem.e:96			if mem_p < 1 then return end if*/
    // SubProg free pc: 11 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _mem_p_11340, 1)){
        goto L2; // [11] 19
    }
    // SubProg free pc: 15 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var mem_p_11340
    DeRef(_mem_p_11340);
    return;
    // SubProg free pc: 18 op: NOP1 (159)
L2: // addr: 19 pc: 18 sub: 11338 op: 159
    // SubProg free pc: 19 op: STARTLINE (58)

    /** eumem.e:97			if mem_p > length(ram_space) then return end if*/
    // SubProg free pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_30ram_space_11312)){
            _6365 = SEQ_PTR(_30ram_space_11312)->length;
    }
    else {
        _6365 = 1;
    }
    // SubProg free pc: 26 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _mem_p_11340, _6365)){
        _6365 = NOVALUE;
        goto L3; // [26] 34
    }
    _6365 = NOVALUE;
    // SubProg free pc: 30 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var mem_p_11340
    DeRef(_mem_p_11340);
    return;
    // SubProg free pc: 33 op: NOP1 (159)
L3: // addr: 34 pc: 33 sub: 11338 op: 159
    // SubProg free pc: 34 op: STARTLINE (58)

    /** eumem.e:99			ram_space[mem_p] = ram_free_list*/
    // SubProg free pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 40 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_mem_p_11340))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_mem_p_11340)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _mem_p_11340);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30ram_free_list_11316;
    DeRef(_1);
    // SubProg free pc: 44 op: STARTLINE (58)

    /** eumem.e:100			ram_free_list = floor(mem_p)*/
    // SubProg free pc: 46 op: FLOOR (83)
    if (IS_ATOM_INT(_mem_p_11340))
    _30ram_free_list_11316 = e_floor(_mem_p_11340);
    else
    _30ram_free_list_11316 = unary_op(FLOOR, _mem_p_11340);
    // SubProg free pc: 49 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_30ram_free_list_11316)) {
        _1 = (object)(DBL_PTR(_30ram_free_list_11316)->dbl);
        DeRefDS(_30ram_free_list_11316);
        _30ram_free_list_11316 = _1;
    }
    // SubProg free pc: 51 op: NOP1 (159)
L1: // addr: 52 pc: 51 sub: 11338 op: 159
    // SubProg free pc: 52 op: STARTLINE (58)

    /** eumem.e:102	end procedure*/
    // SubProg free pc: 54 op: RETURNP (29)

// Exiting block BLOCK: free

// block var mem_p_11340
    DeRef(_mem_p_11340);
    return;
    // SubProg free pc: 57 op: BADRETURNF (43)
    ;
}



// 0xED78102B
