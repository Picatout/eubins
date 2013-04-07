// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _31malloc(object _mem_struct_p_11469, object _cleanup_p_11470)
{
    object _temp__11471 = NOVALUE;
    object _6437 = NOVALUE;
    object _6435 = NOVALUE;
    object _6434 = NOVALUE;
    object _6433 = NOVALUE;
    object _6429 = NOVALUE;
    object _0, _1, _2;
    

    /** eumem.e:51		if atom(mem_struct_p) then*/
    _6429 = IS_ATOM(_mem_struct_p_11469);
    if (_6429 == 0)
    {
        _6429 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _6429 = NOVALUE;
    }

    /** eumem.e:52			mem_struct_p = repeat(0, mem_struct_p)*/
    _0 = _mem_struct_p_11469;
    _mem_struct_p_11469 = Repeat(0, _mem_struct_p_11469);
    DeRef(_0);
L1: 

    /** eumem.e:54		if ram_free_list = 0 then*/
    if (_31ram_free_list_11465 != 0)
    goto L2; // [22] 72

    /** eumem.e:55			ram_space = append(ram_space, mem_struct_p)*/
    Ref(_mem_struct_p_11469);
    Append(&_31ram_space_11461, _31ram_space_11461, _mem_struct_p_11469);

    /** eumem.e:56			if cleanup_p then*/
    if (_cleanup_p_11470 == 0)
    {
        goto L3; // [36] 59
    }
    else{
    }

    /** eumem.e:57				return delete_routine( length(ram_space), free_rid )*/
    if (IS_SEQUENCE(_31ram_space_11461)){
            _6433 = SEQ_PTR(_31ram_space_11461)->length;
    }
    else {
        _6433 = 1;
    }
    _6434 = NewDouble( (eudouble) _6433 );
    _1 = (object) _00[_31free_rid_11466].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_31free_rid_11466].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _31free_rid_11466;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6434)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6434)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6434)) ){
        DeRefDS(_6434);
        _6434 = NewDouble( DBL_PTR(_6434)->dbl );
    }
    DBL_PTR(_6434)->cleanup = (cleanup_ptr)_1;
    _6433 = NOVALUE;
    DeRef(_mem_struct_p_11469);
    return _6434;
    goto L4; // [56] 71
L3: 

    /** eumem.e:59				return length(ram_space)*/
    if (IS_SEQUENCE(_31ram_space_11461)){
            _6435 = SEQ_PTR(_31ram_space_11461)->length;
    }
    else {
        _6435 = 1;
    }
    DeRef(_mem_struct_p_11469);
    DeRef(_6434);
    _6434 = NOVALUE;
    return _6435;
L4: 
L2: 

    /** eumem.e:63		temp_ = ram_free_list*/
    _temp__11471 = _31ram_free_list_11465;

    /** eumem.e:64		ram_free_list = ram_space[temp_]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    _31ram_free_list_11465 = (object)*(((s1_ptr)_2)->base + _temp__11471);
    if (!IS_ATOM_INT(_31ram_free_list_11465))
    _31ram_free_list_11465 = (object)DBL_PTR(_31ram_free_list_11465)->dbl;

    /** eumem.e:65		ram_space[temp_] = mem_struct_p*/
    Ref(_mem_struct_p_11469);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp__11471);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _mem_struct_p_11469;
    DeRef(_1);

    /** eumem.e:67		if cleanup_p then*/
    if (_cleanup_p_11470 == 0)
    {
        goto L5; // [97] 115
    }
    else{
    }

    /** eumem.e:68			return delete_routine( temp_, free_rid )*/
    _6437 = NewDouble( (eudouble) _temp__11471 );
    _1 = (object) _00[_31free_rid_11466].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_31free_rid_11466].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _31free_rid_11466;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6437)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6437)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6437)) ){
        DeRefDS(_6437);
        _6437 = NewDouble( DBL_PTR(_6437)->dbl );
    }
    DBL_PTR(_6437)->cleanup = (cleanup_ptr)_1;
    DeRef(_mem_struct_p_11469);
    DeRef(_6434);
    _6434 = NOVALUE;
    return _6437;
    goto L6; // [112] 122
L5: 

    /** eumem.e:70			return temp_*/
    DeRef(_mem_struct_p_11469);
    DeRef(_6437);
    _6437 = NOVALUE;
    DeRef(_6434);
    _6434 = NOVALUE;
    return _temp__11471;
L6: 
    ;
}


void _31free(object _mem_p_11489)
{
    object _6440 = NOVALUE;
    object _6438 = NOVALUE;
    object _0, _1, _2;
    

    /** eumem.e:95		if object( ram_space ) then*/
    if( NOVALUE == _31ram_space_11461 ){
        _6438 = 0;
    }
    else{
        _6438 = 3;
    }
    if (_6438 == 0)
    {
        _6438 = NOVALUE;
        goto L1; // [6] 52
    }
    else{
        _6438 = NOVALUE;
    }

    /** eumem.e:96			if mem_p < 1 then return end if*/
    if (binary_op_a(GREATEREQ, _mem_p_11489, 1)){
        goto L2; // [11] 19
    }
    DeRef(_mem_p_11489);
    return;
L2: 

    /** eumem.e:97			if mem_p > length(ram_space) then return end if*/
    if (IS_SEQUENCE(_31ram_space_11461)){
            _6440 = SEQ_PTR(_31ram_space_11461)->length;
    }
    else {
        _6440 = 1;
    }
    if (binary_op_a(LESSEQ, _mem_p_11489, _6440)){
        _6440 = NOVALUE;
        goto L3; // [26] 34
    }
    _6440 = NOVALUE;
    DeRef(_mem_p_11489);
    return;
L3: 

    /** eumem.e:99			ram_space[mem_p] = ram_free_list*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_mem_p_11489))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_mem_p_11489)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _mem_p_11489);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _31ram_free_list_11465;
    DeRef(_1);

    /** eumem.e:100			ram_free_list = floor(mem_p)*/
    if (IS_ATOM_INT(_mem_p_11489))
    _31ram_free_list_11465 = e_floor(_mem_p_11489);
    else
    _31ram_free_list_11465 = unary_op(FLOOR, _mem_p_11489);
    if (!IS_ATOM_INT(_31ram_free_list_11465)) {
        _1 = (object)(DBL_PTR(_31ram_free_list_11465)->dbl);
        DeRefDS(_31ram_free_list_11465);
        _31ram_free_list_11465 = _1;
    }
L1: 

    /** eumem.e:102	end procedure*/
    DeRef(_mem_p_11489);
    return;
    ;
}



// 0xE1F3DC78
