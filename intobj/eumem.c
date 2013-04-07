// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _34malloc(object _mem_struct_p_12760, object _cleanup_p_12761)
{
    object _temp__12762 = NOVALUE;
    object _6980 = NOVALUE; // 12776 6980
// skipping _6979  name type: 0
    object _6978 = NOVALUE; // 12773 6978
    object _6977 = NOVALUE; // 12771 6977
    object _6976 = NOVALUE; // 12770 6976
// skipping _6975  name type: 0
// skipping _6974  name type: 0
// skipping _6973  name type: 0
    object _6972 = NOVALUE; // 12764 6972
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg malloc pc: 1 op: INTEGER_CHECK (96)
    // SubProg malloc pc: 3 op: STARTLINE (58)

    /** eumem.e:51		if atom(mem_struct_p) then*/
    // SubProg malloc pc: 5 op: IS_AN_ATOM (67)
    _6972 = IS_ATOM(_mem_struct_p_12760);
    // SubProg malloc pc: 8 op: IF (20)
    if (_6972 == 0)
    {
        _6972 = NOVALUE;
        goto L1; // [8] 18
    }
    else{
        _6972 = NOVALUE;
    }
    // SubProg malloc pc: 11 op: STARTLINE (58)

    /** eumem.e:52			mem_struct_p = repeat(0, mem_struct_p)*/
    // SubProg malloc pc: 13 op: REPEAT (32)
    _0 = _mem_struct_p_12760;
    _mem_struct_p_12760 = Repeat(0, _mem_struct_p_12760);
    DeRef(_0);
    // SubProg malloc pc: 17 op: NOP1 (159)
L1: // addr: 18 pc: 17 sub: 12758 op: 159
    // SubProg malloc pc: 18 op: STARTLINE (58)

    /** eumem.e:54		if ram_free_list = 0 then*/
    // SubProg malloc pc: 20 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 22 op: EQUALS_IFW_I (121)
    if (_34ram_free_list_12756 != 0)
    goto L2; // [22] 72
    // SubProg malloc pc: 26 op: STARTLINE (58)

    /** eumem.e:55			ram_space = append(ram_space, mem_struct_p)*/
    // SubProg malloc pc: 28 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 30 op: APPEND (35)
    Ref(_mem_struct_p_12760);
    Append(&_34ram_space_12752, _34ram_space_12752, _mem_struct_p_12760);
    // SubProg malloc pc: 34 op: STARTLINE (58)

    /** eumem.e:56			if cleanup_p then*/
    // SubProg malloc pc: 36 op: IF (20)
    if (_cleanup_p_12761 == 0)
    {
        goto L3; // [36] 59
    }
    else{
    }
    // SubProg malloc pc: 39 op: STARTLINE (58)

    /** eumem.e:57				return delete_routine( length(ram_space), free_rid )*/
    // SubProg malloc pc: 41 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 43 op: LENGTH (42)
    if (IS_SEQUENCE(_34ram_space_12752)){
            _6976 = SEQ_PTR(_34ram_space_12752)->length;
    }
    else {
        _6976 = 1;
    }
    // SubProg malloc pc: 46 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 48 op: DELETE_ROUTINE (204)
    _6977 = NewDouble( (eudouble) _6976 );
    _1 = (object) _00[_34free_rid_12757].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_34free_rid_12757].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _34free_rid_12757;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6977)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6977)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6977)) ){
        DeRefDS(_6977);
        _6977 = NewDouble( DBL_PTR(_6977)->dbl );
    }
    DBL_PTR(_6977)->cleanup = (cleanup_ptr)_1;
    _6976 = NOVALUE;
    // SubProg malloc pc: 52 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_12760
    DeRef(_mem_struct_p_12760);

// block var cleanup_p_12761

// block var temp__12762
    return _6977;
    // SubProg malloc pc: 56 op: ELSE (23)
    goto L4; // [56] 71
    // SubProg malloc pc: 58 op: NOP1 (159)
L3: // addr: 59 pc: 58 sub: 12758 op: 159
    // SubProg malloc pc: 59 op: STARTLINE (58)

    /** eumem.e:59				return length(ram_space)*/
    // SubProg malloc pc: 61 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 63 op: LENGTH (42)
    if (IS_SEQUENCE(_34ram_space_12752)){
            _6978 = SEQ_PTR(_34ram_space_12752)->length;
    }
    else {
        _6978 = 1;
    }
    // SubProg malloc pc: 66 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_12760
    DeRef(_mem_struct_p_12760);

// block var cleanup_p_12761

// block var temp__12762
    DeRef(_6977);
    _6977 = NOVALUE;
    return _6978;
    // SubProg malloc pc: 70 op: NOP1 (159)
L4: // addr: 71 pc: 70 sub: 12758 op: 159
    // SubProg malloc pc: 71 op: NOP1 (159)
L2: // addr: 72 pc: 71 sub: 12758 op: 159
    // SubProg malloc pc: 72 op: STARTLINE (58)

    /** eumem.e:63		temp_ = ram_free_list*/
    // SubProg malloc pc: 74 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 76 op: ASSIGN_I (113)
    _temp__12762 = _34ram_free_list_12756;
    // SubProg malloc pc: 79 op: STARTLINE (58)

    /** eumem.e:64		ram_free_list = ram_space[temp_]*/
    // SubProg malloc pc: 81 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 83 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    _34ram_free_list_12756 = (object)*(((s1_ptr)_2)->base + _temp__12762);
    if (!IS_ATOM_INT(_34ram_free_list_12756))
    _34ram_free_list_12756 = (object)DBL_PTR(_34ram_free_list_12756)->dbl;
    // SubProg malloc pc: 87 op: STARTLINE (58)

    /** eumem.e:65		ram_space[temp_] = mem_struct_p*/
    // SubProg malloc pc: 89 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 91 op: ASSIGN_SUBS (16)
    Ref(_mem_struct_p_12760);
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _temp__12762);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _mem_struct_p_12760;
    DeRef(_1);
    // SubProg malloc pc: 95 op: STARTLINE (58)

    /** eumem.e:67		if cleanup_p then*/
    // SubProg malloc pc: 97 op: IF (20)
    if (_cleanup_p_12761 == 0)
    {
        goto L5; // [97] 115
    }
    else{
    }
    // SubProg malloc pc: 100 op: STARTLINE (58)

    /** eumem.e:68			return delete_routine( temp_, free_rid )*/
    // SubProg malloc pc: 102 op: GLOBAL_INIT_CHECK (109)
    // SubProg malloc pc: 104 op: DELETE_ROUTINE (204)
    _6980 = NewDouble( (eudouble) _temp__12762 );
    _1 = (object) _00[_34free_rid_12757].cleanup;
    if( _1 == 0 ){
        _1 = (object) TransAlloc( sizeof(struct cleanup) );
        _00[_34free_rid_12757].cleanup = (cleanup_ptr)_1;
    }
    ((cleanup_ptr)_1)->type = CLEAN_UDT_RT;
    ((cleanup_ptr)_1)->func.rid = _34free_rid_12757;
    ((cleanup_ptr)_1)->next = 0;
    if(DBL_PTR(_6980)->cleanup != 0 ){
        _1 = (object) ChainDeleteRoutine( (cleanup_ptr)_1, DBL_PTR(_6980)->cleanup );
    }
    else if( !UNIQUE(DBL_PTR(_6980)) ){
        DeRefDS(_6980);
        _6980 = NewDouble( DBL_PTR(_6980)->dbl );
    }
    DBL_PTR(_6980)->cleanup = (cleanup_ptr)_1;
    // SubProg malloc pc: 108 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_12760
    DeRef(_mem_struct_p_12760);

// block var cleanup_p_12761

// block var temp__12762
    DeRef(_6977);
    _6977 = NOVALUE;
    return _6980;
    // SubProg malloc pc: 112 op: ELSE (23)
    goto L6; // [112] 122
    // SubProg malloc pc: 114 op: NOP1 (159)
L5: // addr: 115 pc: 114 sub: 12758 op: 159
    // SubProg malloc pc: 115 op: STARTLINE (58)

    /** eumem.e:70			return temp_*/
    // SubProg malloc pc: 117 op: RETURNF (28)

// Exiting block BLOCK: malloc

// block var mem_struct_p_12760
    DeRef(_mem_struct_p_12760);

// block var cleanup_p_12761
    DeRef(_6980);
    _6980 = NOVALUE;
    DeRef(_6977);
    _6977 = NOVALUE;
    return _temp__12762;
    // SubProg malloc pc: 121 op: NOP1 (159)
L6: // addr: 122 pc: 121 sub: 12758 op: 159
    // SubProg malloc pc: 122 op: BADRETURNF (43)
    ;
}


void _34free(object _mem_p_12780)
{
// skipping _6985  name type: 0
// skipping _6984  name type: 0
    object _6983 = NOVALUE; // 12786 6983
// skipping _6982  name type: 0
    object _6981 = NOVALUE; // 12782 6981
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg free pc: 1 op: STARTLINE (58)

    /** eumem.e:95		if object( ram_space ) then*/
    // SubProg free pc: 3 op: IS_AN_OBJECT (40)
    if( NOVALUE == _34ram_space_12752 ){
        _6981 = 0;
    }
    else{
        _6981 = 3;
    }
    // SubProg free pc: 6 op: IF (20)
    if (_6981 == 0)
    {
        _6981 = NOVALUE;
        goto L1; // [6] 52
    }
    else{
        _6981 = NOVALUE;
    }
    // SubProg free pc: 9 op: STARTLINE (58)

    /** eumem.e:96			if mem_p < 1 then return end if*/
    // SubProg free pc: 11 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _mem_p_12780, 1)){
        goto L2; // [11] 19
    }
    // SubProg free pc: 15 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var mem_p_12780
    DeRef(_mem_p_12780);
    return;
    // SubProg free pc: 18 op: NOP1 (159)
L2: // addr: 19 pc: 18 sub: 12778 op: 159
    // SubProg free pc: 19 op: STARTLINE (58)

    /** eumem.e:97			if mem_p > length(ram_space) then return end if*/
    // SubProg free pc: 21 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 23 op: LENGTH (42)
    if (IS_SEQUENCE(_34ram_space_12752)){
            _6983 = SEQ_PTR(_34ram_space_12752)->length;
    }
    else {
        _6983 = 1;
    }
    // SubProg free pc: 26 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _mem_p_12780, _6983)){
        _6983 = NOVALUE;
        goto L3; // [26] 34
    }
    _6983 = NOVALUE;
    // SubProg free pc: 30 op: RETURNP (29)

// Exiting block BLOCK: IF-

// Exiting block BLOCK: IF-

// Exiting block BLOCK: free

// block var mem_p_12780
    DeRef(_mem_p_12780);
    return;
    // SubProg free pc: 33 op: NOP1 (159)
L3: // addr: 34 pc: 33 sub: 12778 op: 159
    // SubProg free pc: 34 op: STARTLINE (58)

    /** eumem.e:99			ram_space[mem_p] = ram_free_list*/
    // SubProg free pc: 36 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 38 op: GLOBAL_INIT_CHECK (109)
    // SubProg free pc: 40 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_34ram_space_12752);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _34ram_space_12752 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_mem_p_12780))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_mem_p_12780)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _mem_p_12780);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _34ram_free_list_12756;
    DeRef(_1);
    // SubProg free pc: 44 op: STARTLINE (58)

    /** eumem.e:100			ram_free_list = floor(mem_p)*/
    // SubProg free pc: 46 op: FLOOR (83)
    if (IS_ATOM_INT(_mem_p_12780))
    _34ram_free_list_12756 = e_floor(_mem_p_12780);
    else
    _34ram_free_list_12756 = unary_op(FLOOR, _mem_p_12780);
    // SubProg free pc: 49 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_34ram_free_list_12756)) {
        _1 = (object)(DBL_PTR(_34ram_free_list_12756)->dbl);
        DeRefDS(_34ram_free_list_12756);
        _34ram_free_list_12756 = _1;
    }
    // SubProg free pc: 51 op: NOP1 (159)
L1: // addr: 52 pc: 51 sub: 12778 op: 159
    // SubProg free pc: 52 op: STARTLINE (58)

    /** eumem.e:102	end procedure*/
    // SubProg free pc: 54 op: RETURNP (29)

// Exiting block BLOCK: free

// block var mem_p_12780
    DeRef(_mem_p_12780);
    return;
    // SubProg free pc: 57 op: BADRETURNF (43)
    ;
}



// 0x2C2B846E
