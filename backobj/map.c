// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _28map(object _m_12291)
{
// skipping _6883  name type: 0
    object _6882 = NOVALUE; // 12317 6882
    object _6881 = NOVALUE; // 12316 6881
    object _6880 = NOVALUE; // 12315 6880
// skipping _6879  name type: 0
    object _6878 = NOVALUE; // 12312 6878
    object _6877 = NOVALUE; // 12311 6877
    object _6876 = NOVALUE; // 12310 6876
// skipping _6875  name type: 0
    object _6874 = NOVALUE; // 12307 6874
    object _6873 = NOVALUE; // 12306 6873
    object _6872 = NOVALUE; // 12305 6872
// skipping _6871  name type: 0
    object _6870 = NOVALUE; // 12302 6870
    object _6869 = NOVALUE; // 12301 6869
// skipping _6868  name type: 0
// skipping _6867  name type: 0
    object _6866 = NOVALUE; // 12296 6866
// skipping _6865  name type: 0
    object _6864 = NOVALUE; // 12293 6864
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg map pc: 1 op: STARTLINE (58)

    /** map.e:126		if not atom( m ) then*/
    // SubProg map pc: 3 op: IS_AN_ATOM (67)
    _6864 = IS_ATOM(_m_12291);
    // SubProg map pc: 6 op: NOT_IFW (108)
    if (_6864 != 0)
    goto L1; // [6] 16
    _6864 = NOVALUE;
    // SubProg map pc: 9 op: STARTLINE (58)

    /** map.e:127			return 0*/
    // SubProg map pc: 11 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    return 0;
    // SubProg map pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12289 op: 159
    // SubProg map pc: 16 op: STARTLINE (58)

    /** map.e:129		if length( eumem:ram_space ) < m then*/
    // SubProg map pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_29ram_space_11382)){
            _6866 = SEQ_PTR(_29ram_space_11382)->length;
    }
    else {
        _6866 = 1;
    }
    // SubProg map pc: 23 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _6866, _m_12291)){
        _6866 = NOVALUE;
        goto L2; // [23] 34
    }
    _6866 = NOVALUE;
    // SubProg map pc: 27 op: STARTLINE (58)

    /** map.e:130			return 0*/
    // SubProg map pc: 29 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    return 0;
    // SubProg map pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 12289 op: 159
    // SubProg map pc: 34 op: STARTLINE (58)

    /** map.e:132		if m < 1 then*/
    // SubProg map pc: 36 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _m_12291, 1)){
        goto L3; // [36] 47
    }
    // SubProg map pc: 40 op: STARTLINE (58)

    /** map.e:133			return 0*/
    // SubProg map pc: 42 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    return 0;
    // SubProg map pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 12289 op: 159
    // SubProg map pc: 47 op: STARTLINE (58)

    /** map.e:135		if length( eumem:ram_space[m] ) != MAP_MAX then*/
    // SubProg map pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_m_12291)){
        _6869 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12291)->dbl));
    }
    else{
        _6869 = (object)*(((s1_ptr)_2)->base + _m_12291);
    }
    // SubProg map pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_6869)){
            _6870 = SEQ_PTR(_6869)->length;
    }
    else {
        _6870 = 1;
    }
    _6869 = NOVALUE;
    // SubProg map pc: 58 op: NOTEQ_IFW_I (122)
    if (_6870 == 3)
    goto L4; // [58] 69
    // SubProg map pc: 62 op: STARTLINE (58)

    /** map.e:136			return 0*/
    // SubProg map pc: 64 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    _6869 = NOVALUE;
    return 0;
    // SubProg map pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 12289 op: 159
    // SubProg map pc: 69 op: STARTLINE (58)

    /** map.e:138		if not atom( eumem:ram_space[m][MAP_SIZE] ) then*/
    // SubProg map pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_m_12291)){
        _6872 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12291)->dbl));
    }
    else{
        _6872 = (object)*(((s1_ptr)_2)->base + _m_12291);
    }
    // SubProg map pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6872);
    _6873 = (object)*(((s1_ptr)_2)->base + 1);
    _6872 = NOVALUE;
    // SubProg map pc: 81 op: IS_AN_ATOM (67)
    _6874 = IS_ATOM(_6873);
    _6873 = NOVALUE;
    // SubProg map pc: 84 op: NOT_IFW (108)
    if (_6874 != 0)
    goto L5; // [84] 94
    _6874 = NOVALUE;
    // SubProg map pc: 87 op: STARTLINE (58)

    /** map.e:139			return 0*/
    // SubProg map pc: 89 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    _6869 = NOVALUE;
    return 0;
    // SubProg map pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 12289 op: 159
    // SubProg map pc: 94 op: STARTLINE (58)

    /** map.e:141		if not sequence( eumem:ram_space[m][MAP_SLOTS] ) then*/
    // SubProg map pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_m_12291)){
        _6876 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12291)->dbl));
    }
    else{
        _6876 = (object)*(((s1_ptr)_2)->base + _m_12291);
    }
    // SubProg map pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6876);
    _6877 = (object)*(((s1_ptr)_2)->base + 2);
    _6876 = NOVALUE;
    // SubProg map pc: 106 op: IS_A_SEQUENCE (68)
    _6878 = IS_SEQUENCE(_6877);
    _6877 = NOVALUE;
    // SubProg map pc: 109 op: NOT_IFW (108)
    if (_6878 != 0)
    goto L6; // [109] 119
    _6878 = NOVALUE;
    // SubProg map pc: 112 op: STARTLINE (58)

    /** map.e:142			return 0*/
    // SubProg map pc: 114 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    _6869 = NOVALUE;
    return 0;
    // SubProg map pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 12289 op: 159
    // SubProg map pc: 119 op: STARTLINE (58)

    /** map.e:144		if not atom( eumem:ram_space[m][MAP_MAX] ) then*/
    // SubProg map pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_m_12291)){
        _6880 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12291)->dbl));
    }
    else{
        _6880 = (object)*(((s1_ptr)_2)->base + _m_12291);
    }
    // SubProg map pc: 127 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6880);
    _6881 = (object)*(((s1_ptr)_2)->base + 3);
    _6880 = NOVALUE;
    // SubProg map pc: 131 op: IS_AN_ATOM (67)
    _6882 = IS_ATOM(_6881);
    _6881 = NOVALUE;
    // SubProg map pc: 134 op: NOT_IFW (108)
    if (_6882 != 0)
    goto L7; // [134] 144
    _6882 = NOVALUE;
    // SubProg map pc: 137 op: STARTLINE (58)

    /** map.e:145			return 0*/
    // SubProg map pc: 139 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    _6869 = NOVALUE;
    return 0;
    // SubProg map pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 12289 op: 159
    // SubProg map pc: 144 op: STARTLINE (58)

    /** map.e:147		return 1*/
    // SubProg map pc: 146 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12291
    DeRef(_m_12291);
    _6869 = NOVALUE;
    return 1;
    // SubProg map pc: 150 op: BADRETURNF (43)
    ;
}


object _28new_map_seq(object _size_12322)
{
    object _slots_12323 = NOVALUE;
    object _6893 = NOVALUE; // 12336 6893
    object _6892 = NOVALUE; // 12335 6892
    object _6891 = NOVALUE; // 12334 6891
    object _6890 = NOVALUE; // 12333 6890
// skipping _6889  name type: 0
// skipping _6888  name type: 0
// skipping _6887  name type: 0
    object _6886 = NOVALUE; // 12328 6886
// skipping _6885  name type: 0
// skipping _6884  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_map_seq pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_map_seq pc: 3 op: STARTLINE (58)

    /** map.e:155		integer slots = DEFAULT_SIZE * 2*/
    // SubProg new_map_seq pc: 5 op: PLUS_I (115)
    _slots_12323 = 16;
    // SubProg new_map_seq pc: 9 op: STARTLINE (58)

    /** map.e:156		if size <= DEFAULT_SIZE then*/
    // SubProg new_map_seq pc: 11 op: LESSEQ_IFW_I (123)
    if (_size_12322 > 8)
    goto L1; // [11] 23
    // SubProg new_map_seq pc: 15 op: STARTLINE (58)

    /** map.e:157			size = DEFAULT_SIZE*/
    // SubProg new_map_seq pc: 17 op: ASSIGN_I (113)
    _size_12322 = 8;
    // SubProg new_map_seq pc: 20 op: ELSE (23)
    goto L2; // [20] 55
    // SubProg new_map_seq pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 12320 op: 159
    // SubProg new_map_seq pc: 23 op: STARTLINE (58)

    /** map.e:159			size = floor( size * 1.5 )*/
    // SubProg new_map_seq pc: 25 op: MULTIPLY (13)
    _6886 = NewDouble((eudouble)_size_12322 * DBL_PTR(_3782)->dbl);
    // SubProg new_map_seq pc: 29 op: FLOOR (83)
    _size_12322 = unary_op(FLOOR, _6886);
    DeRefDS(_6886);
    _6886 = NOVALUE;
    // SubProg new_map_seq pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_12322)) {
        _1 = (object)(DBL_PTR(_size_12322)->dbl);
        DeRefDS(_size_12322);
        _size_12322 = _1;
    }
    // SubProg new_map_seq pc: 34 op: STARTLINE (58)

    /** map.e:160			while slots < size do*/
    // SubProg new_map_seq pc: 36 op: NOP2 (110)
    // SubProg new_map_seq pc: 38 op: NOPWHILE (158)
L3: // addr: 39 pc: 38 sub: 12320 op: 158
    // SubProg new_map_seq pc: 39 op: LESS_IFW_I (119)
    if (_slots_12323 >= _size_12322)
    goto L4; // [39] 54
    // SubProg new_map_seq pc: 43 op: STARTLINE (58)

    /** map.e:162				slots *= 2*/
    // SubProg new_map_seq pc: 45 op: PLUS_I (115)
    _slots_12323 = _slots_12323 + _slots_12323;
    // SubProg new_map_seq pc: 49 op: STARTLINE (58)

    /** map.e:163			end while*/
    // SubProg new_map_seq pc: 51 op: ENDWHILE (22)
    goto L3; // [51] 39
    // SubProg new_map_seq pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 12320 op: 159
    // SubProg new_map_seq pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 12320 op: 159
    // SubProg new_map_seq pc: 55 op: STARTLINE (58)

    /** map.e:165		return { 0, repeat( EMPTY_SLOT, slots ), floor( size * 2/3 ) }*/
    // SubProg new_map_seq pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_map_seq pc: 59 op: REPEAT (32)
    _6890 = Repeat(_28EMPTY_SLOT_12279, _slots_12323);
    // SubProg new_map_seq pc: 63 op: PLUS (11)
    _6891 = _size_12322 + _size_12322;
    if ((object)((uintptr_t)_6891 + (uintptr_t)HIGH_BITS) >= 0){
        _6891 = NewDouble((eudouble)_6891);
    }
    // SubProg new_map_seq pc: 67 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_6891)) {
        if (3 > 0 && _6891 >= 0) {
            _6892 = _6891 / 3;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_6891 / (eudouble)3);
            if (_6891 != MININT)
            _6892 = (object)temp_dbl;
            else
            _6892 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _6891, 3);
        _6892 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    DeRef(_6891);
    _6891 = NOVALUE;
    // SubProg new_map_seq pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = _6890;
    ((intptr_t*)_2)[3] = _6892;
    _6893 = MAKE_SEQ(_1);
    _6892 = NOVALUE;
    _6890 = NOVALUE;
    // SubProg new_map_seq pc: 77 op: RETURNF (28)

// Exiting block BLOCK: new_map_seq

// block var size_12322

// block var slots_12323
    return _6893;
    // SubProg new_map_seq pc: 81 op: BADRETURNF (43)
    ;
}


object _28new(object _initial_size_p_12360)
{
    object _6900 = NOVALUE; // 12362 6900
    object _6899 = NOVALUE; // 12361 6899
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new pc: 1 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_initial_size_p_12360)) {
        _1 = (object)(DBL_PTR(_initial_size_p_12360)->dbl);
        DeRefDS(_initial_size_p_12360);
        _initial_size_p_12360 = _1;
    }
    // SubProg new pc: 3 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new pc: 5 op: PROC (27)
    _6899 = _28new_map_seq(_initial_size_p_12360);
    // SubProg new pc: 9 op: PROC (27)
    _6900 = _29malloc(_6899, 1);
    _6899 = NOVALUE;
    // SubProg new pc: 14 op: RETURNF (28)

// Exiting block BLOCK: new

// block var initial_size_p_12360
    return _6900;
    // SubProg new pc: 18 op: BADRETURNF (43)
    ;
}


object _28lookup(object _key_12365, object _hashval_12366, object _slots_12368)
{
    object _mask_12369 = NOVALUE;
    object _index_12372 = NOVALUE;
    object _index_hash_12375 = NOVALUE;
    object _slot_12376 = NOVALUE;
    object _perturb_12377 = NOVALUE;
    object _this_hash_12378 = NOVALUE;
    object _this_key_12379 = NOVALUE;
    object _looks_12380 = NOVALUE;
    object _removed_slot_12381 = NOVALUE;
// skipping _6925  name type: 0
// skipping _6924  name type: 0
// skipping _6923  name type: 0
// skipping _6922  name type: 0
    object _6921 = NOVALUE; // 12400 6921
// skipping _6920  name type: 0
// skipping _6919  name type: 0
// skipping _6918  name type: 0
// skipping _6917  name type: 0
// skipping _6916  name type: 0
// skipping _6915  name type: 0
// skipping _6914  name type: 0
// skipping _6913  name type: 0
// skipping _6912  name type: 0
// skipping _6911  name type: 0
// skipping _6910  name type: 0
    object _6909 = NOVALUE; // 12386 6909
    object _6908 = NOVALUE; // 12385 6908
    object _6907 = NOVALUE; // 12384 6907
    object _6906 = NOVALUE; // 12383 6906
// skipping _6905  name type: 0
    object _6904 = NOVALUE; // 12373 6904
// skipping _6903  name type: 0
    object _6902 = NOVALUE; // 12370 6902
// skipping _6901  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookup pc: 1 op: INTEGER_CHECK (96)
    // SubProg lookup pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 5 op: STARTLINE (58)

    /** map.e:275		integer mask = length( slots ) - 1*/
    // SubProg lookup pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12368)){
            _6902 = SEQ_PTR(_slots_12368)->length;
    }
    else {
        _6902 = 1;
    }
    // SubProg lookup pc: 10 op: MINUS_I (116)
    _mask_12369 = _6902 - 1;
    _6902 = NOVALUE;
    // SubProg lookup pc: 14 op: STARTLINE (58)

    /** map.e:276		integer index = and_bits( hashval, mask ) + 1*/
    // SubProg lookup pc: 16 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_hashval_12366 & (uintptr_t)_mask_12369;
         _6904 = MAKE_UINT(tu);
    }
    // SubProg lookup pc: 20 op: PLUS1_I (117)
    if (IS_ATOM_INT(_6904)) {
        _index_12372 = _6904 + 1;
    }
    else
    { // coercing _index_12372 to an integer 1
        _index_12372 = 1+(object)(DBL_PTR(_6904)->dbl);
        if( !IS_ATOM_INT(_index_12372) ){
            _index_12372 = (object)DBL_PTR(_index_12372)->dbl;
        }
    }
    DeRef(_6904);
    _6904 = NOVALUE;
    // SubProg lookup pc: 24 op: STARTLINE (58)

    /** map.e:277		ifdef BITS64 then*/
    // SubProg lookup pc: 26 op: STARTLINE (58)

    /** map.e:280			atom index_hash = index*/
    // SubProg lookup pc: 28 op: ASSIGN (18)
    DeRef(_index_hash_12375);
    _index_hash_12375 = _index_12372;
    // SubProg lookup pc: 31 op: STARTLINE (58)

    /** map.e:282		sequence slot*/
    // SubProg lookup pc: 33 op: STARTLINE (58)

    /** map.e:284		integer perturb = hashval*/
    // SubProg lookup pc: 35 op: ASSIGN_I (113)
    _perturb_12377 = _hashval_12366;
    // SubProg lookup pc: 38 op: STARTLINE (58)

    /** map.e:285		integer this_hash*/
    // SubProg lookup pc: 40 op: STARTLINE (58)

    /** map.e:286		object this_key*/
    // SubProg lookup pc: 42 op: STARTLINE (58)

    /** map.e:287		integer looks = 0*/
    // SubProg lookup pc: 44 op: ASSIGN_I (113)
    _looks_12380 = 0;
    // SubProg lookup pc: 47 op: STARTLINE (58)

    /** map.e:288		integer removed_slot = 0*/
    // SubProg lookup pc: 49 op: ASSIGN_I (113)
    _removed_slot_12381 = 0;
    // SubProg lookup pc: 52 op: STARTLINE (58)

    /** map.e:289		while this_hash != hashval or not equal( this_key, key ) with entry do*/
    // SubProg lookup pc: 54 op: ELSE (23)
    goto L1; // [54] 140
    // SubProg lookup pc: 56 op: NOPWHILE (158)
L2: // addr: 57 pc: 56 sub: 12363 op: 158
    // SubProg lookup pc: 57 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 59 op: NOTEQ (4)
    _6906 = (_this_hash_12378 != _hashval_12366);
    // SubProg lookup pc: 63 op: SC1_OR (143)
    if (_6906 != 0) {
        DeRef(_6907);
        _6907 = 1;
        goto L3; // [63] 80
    }
    // SubProg lookup pc: 67 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 69 op: EQUAL (153)
    if (_this_key_12379 == _key_12365)
    _6908 = 1;
    else if (IS_ATOM_INT(_this_key_12379) && IS_ATOM_INT(_key_12365))
    _6908 = 0;
    else
    _6908 = (compare(_this_key_12379, _key_12365) == 0);
    // SubProg lookup pc: 73 op: NOT (7)
    _6909 = (_6908 == 0);
    _6908 = NOVALUE;
    // SubProg lookup pc: 76 op: SC2_OR (144)
    _6907 = (_6909 != 0);
    // SubProg lookup pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 12363 op: 159
    // SubProg lookup pc: 80 op: WHILE (47)
    if (_6907 == 0)
    {
        _6907 = NOVALUE;
        goto L4; // [80] 217
    }
    else{
        _6907 = NOVALUE;
    }
    // SubProg lookup pc: 83 op: STARTLINE (58)

    /** map.e:290			index_hash *= 4*/
    // SubProg lookup pc: 85 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 87 op: MULTIPLY (13)
    _0 = _index_hash_12375;
    if (IS_ATOM_INT(_index_hash_12375)) {
        if (_index_hash_12375 == (short)_index_hash_12375){
            _index_hash_12375 = _index_hash_12375 * 4;
        }
        else{
            _index_hash_12375 = NewDouble(_index_hash_12375 * (eudouble)4);
        }
    }
    else {
        _index_hash_12375 = NewDouble(DBL_PTR(_index_hash_12375)->dbl * (eudouble)4);
    }
    DeRef(_0);
    // SubProg lookup pc: 91 op: STARTLINE (58)

    /** map.e:291			index_hash += index*/
    // SubProg lookup pc: 93 op: PLUS (11)
    _0 = _index_hash_12375;
    if (IS_ATOM_INT(_index_hash_12375)) {
        _index_hash_12375 = _index_hash_12375 + _index_12372;
        if ((object)((uintptr_t)_index_hash_12375 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12375 = NewDouble((eudouble)_index_hash_12375);
        }
    }
    else {
        _index_hash_12375 = NewDouble(DBL_PTR(_index_hash_12375)->dbl + (eudouble)_index_12372);
    }
    DeRef(_0);
    // SubProg lookup pc: 97 op: STARTLINE (58)

    /** map.e:292			index_hash += perturb*/
    // SubProg lookup pc: 99 op: PLUS (11)
    _0 = _index_hash_12375;
    if (IS_ATOM_INT(_index_hash_12375)) {
        _index_hash_12375 = _index_hash_12375 + _perturb_12377;
        if ((object)((uintptr_t)_index_hash_12375 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12375 = NewDouble((eudouble)_index_hash_12375);
        }
    }
    else {
        _index_hash_12375 = NewDouble(DBL_PTR(_index_hash_12375)->dbl + (eudouble)_perturb_12377);
    }
    DeRef(_0);
    // SubProg lookup pc: 103 op: STARTLINE (58)

    /** map.e:293			index_hash += 1*/
    // SubProg lookup pc: 105 op: PLUS1 (93)
    _0 = _index_hash_12375;
    if (IS_ATOM_INT(_index_hash_12375)) {
        _index_hash_12375 = _index_hash_12375 + 1;
        if (_index_hash_12375 > MAXINT){
            _index_hash_12375 = NewDouble((eudouble)_index_hash_12375);
        }
    }
    else
    _index_hash_12375 = binary_op(PLUS, 1, _index_hash_12375);
    DeRef(_0);
    // SubProg lookup pc: 109 op: STARTLINE (58)

    /** map.e:294			index_hash = and_bits( 0xffff_ffff, index_hash )*/
    // SubProg lookup pc: 111 op: AND_BITS (56)
    _0 = _index_hash_12375;
    if (IS_ATOM_INT(_index_hash_12375)) {
        temp_d.dbl = (eudouble)_index_hash_12375;
        _index_hash_12375 = Dand_bits(DBL_PTR(_406), &temp_d);
    }
    else
    _index_hash_12375 = Dand_bits(DBL_PTR(_406), DBL_PTR(_index_hash_12375));
    DeRef(_0);
    // SubProg lookup pc: 115 op: STARTLINE (58)

    /** map.e:295			index = and_bits( mask, index_hash )*/
    // SubProg lookup pc: 117 op: AND_BITS (56)
    if (IS_ATOM_INT(_index_hash_12375)) {
        {uintptr_t tu;
             tu = (uintptr_t)_mask_12369 & (uintptr_t)_index_hash_12375;
             _index_12372 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_mask_12369;
        _index_12372 = Dand_bits(&temp_d, DBL_PTR(_index_hash_12375));
    }
    // SubProg lookup pc: 121 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12372)) {
        _1 = (object)(DBL_PTR(_index_12372)->dbl);
        DeRefDS(_index_12372);
        _index_12372 = _1;
    }
    // SubProg lookup pc: 123 op: STARTLINE (58)

    /** map.e:296			index += 1*/
    // SubProg lookup pc: 125 op: PLUS1_I (117)
    _index_12372 = _index_12372 + 1;
    // SubProg lookup pc: 129 op: STARTLINE (58)

    /** map.e:297			perturb = floor( perturb / 32 )*/
    // SubProg lookup pc: 131 op: FLOOR_DIV (63)
    if (32 > 0 && _perturb_12377 >= 0) {
        _perturb_12377 = _perturb_12377 / 32;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_perturb_12377 / (eudouble)32);
        _perturb_12377 = (object)temp_dbl;
    }
    // SubProg lookup pc: 137 op: STARTLINE (58)

    /** map.e:298		entry*/
    // SubProg lookup pc: 139 op: NOP1 (159)
L1: // addr: 140 pc: 139 sub: 12363 op: 159
    // SubProg lookup pc: 140 op: STARTLINE (58)

    /** map.e:299			slot = slots[index]*/
    // SubProg lookup pc: 142 op: RHS_SUBS (25)
    DeRef(_slot_12376);
    _2 = (object)SEQ_PTR(_slots_12368);
    _slot_12376 = (object)*(((s1_ptr)_2)->base + _index_12372);
    Ref(_slot_12376);
    // SubProg lookup pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 148 op: STARTLINE (58)

    /** map.e:300			this_hash = slot[SLOT_HASH]*/
    // SubProg lookup pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_slot_12376);
    _this_hash_12378 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_this_hash_12378))
    _this_hash_12378 = (object)DBL_PTR(_this_hash_12378)->dbl;
    // SubProg lookup pc: 154 op: STARTLINE (58)

    /** map.e:301			if this_hash = EMPTY then*/
    // SubProg lookup pc: 156 op: EQUALS_IFW_I (121)
    if (_this_hash_12378 != -2)
    goto L5; // [156] 169
    // SubProg lookup pc: 160 op: STARTLINE (58)

    /** map.e:302				return index*/
    // SubProg lookup pc: 162 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12365
    DeRef(_key_12365);

// block var hashval_12366

// block var slots_12368
    DeRefDS(_slots_12368);

// block var mask_12369

// block var index_hash_12375
    DeRef(_index_hash_12375);

// block var slot_12376
    DeRefDS(_slot_12376);

// block var perturb_12377

// block var this_hash_12378

// block var this_key_12379
    DeRef(_this_key_12379);

// block var looks_12380

// block var removed_slot_12381
    DeRef(_6906);
    _6906 = NOVALUE;
    DeRef(_6909);
    _6909 = NOVALUE;
    return _index_12372;
    // SubProg lookup pc: 166 op: ELSE (23)
    goto L6; // [166] 200
    // SubProg lookup pc: 168 op: NOP1 (159)
L5: // addr: 169 pc: 168 sub: 12363 op: 159
    // SubProg lookup pc: 169 op: STARTLINE (58)

    /** map.e:303			elsif looks > length( slots ) then*/
    // SubProg lookup pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12368)){
            _6921 = SEQ_PTR(_slots_12368)->length;
    }
    else {
        _6921 = 1;
    }
    // SubProg lookup pc: 174 op: GREATER_IFW_I (124)
    if (_looks_12380 <= _6921)
    goto L7; // [174] 187
    // SubProg lookup pc: 178 op: STARTLINE (58)

    /** map.e:304				return removed_slot*/
    // SubProg lookup pc: 180 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12365
    DeRef(_key_12365);

// block var hashval_12366

// block var slots_12368
    DeRefDS(_slots_12368);

// block var mask_12369

// block var index_12372

// block var index_hash_12375
    DeRef(_index_hash_12375);

// block var slot_12376
    DeRef(_slot_12376);

// block var perturb_12377

// block var this_hash_12378

// block var this_key_12379
    DeRef(_this_key_12379);

// block var looks_12380
    DeRef(_6906);
    _6906 = NOVALUE;
    DeRef(_6909);
    _6909 = NOVALUE;
    return _removed_slot_12381;
    // SubProg lookup pc: 184 op: ELSE (23)
    goto L6; // [184] 200
    // SubProg lookup pc: 186 op: NOP1 (159)
L7: // addr: 187 pc: 186 sub: 12363 op: 159
    // SubProg lookup pc: 187 op: STARTLINE (58)

    /** map.e:305			elsif this_hash = REMOVED then*/
    // SubProg lookup pc: 189 op: EQUALS_IFW_I (121)
    if (_this_hash_12378 != -1)
    goto L8; // [189] 199
    // SubProg lookup pc: 193 op: STARTLINE (58)

    /** map.e:306				removed_slot = index*/
    // SubProg lookup pc: 195 op: ASSIGN_I (113)
    _removed_slot_12381 = _index_12372;
    // SubProg lookup pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 12363 op: 159
    // SubProg lookup pc: 199 op: NOP1 (159)
L6: // addr: 200 pc: 199 sub: 12363 op: 159
    // SubProg lookup pc: 200 op: STARTLINE (58)

    /** map.e:308			this_key = slot[SLOT_KEY]*/
    // SubProg lookup pc: 202 op: RHS_SUBS (25)
    DeRef(_this_key_12379);
    _2 = (object)SEQ_PTR(_slot_12376);
    _this_key_12379 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_this_key_12379);
    // SubProg lookup pc: 206 op: STARTLINE (58)

    /** map.e:309			looks += 1*/
    // SubProg lookup pc: 208 op: PLUS1_I (117)
    _looks_12380 = _looks_12380 + 1;
    // SubProg lookup pc: 212 op: STARTLINE (58)

    /** map.e:310		end while*/
    // SubProg lookup pc: 214 op: ENDWHILE (22)
    goto L2; // [214] 57
    // SubProg lookup pc: 216 op: NOP1 (159)
L4: // addr: 217 pc: 216 sub: 12363 op: 159
    // SubProg lookup pc: 217 op: STARTLINE (58)

    /** map.e:311		return index*/
    // SubProg lookup pc: 219 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12365
    DeRef(_key_12365);

// block var hashval_12366

// block var slots_12368
    DeRefDS(_slots_12368);

// block var mask_12369

// block var index_hash_12375
    DeRef(_index_hash_12375);

// block var slot_12376
    DeRef(_slot_12376);

// block var perturb_12377

// block var this_hash_12378

// block var this_key_12379
    DeRef(_this_key_12379);

// block var looks_12380

// block var removed_slot_12381
    DeRef(_6906);
    _6906 = NOVALUE;
    DeRef(_6909);
    _6909 = NOVALUE;
    return _index_12372;
    // SubProg lookup pc: 223 op: BADRETURNF (43)
    ;
}


object _28rehash_seq(object _old_map_12408, object _size_12409)
{
    object _old_size_12410 = NOVALUE;
    object _index_12412 = NOVALUE;
    object _new_map_12425 = NOVALUE;
    object _slots_12427 = NOVALUE;
    object _old_slots_12430 = NOVALUE;
    object _old_slot_12435 = NOVALUE;
    object _old_hash_12437 = NOVALUE;
// skipping _6943  name type: 0
    object _6942 = NOVALUE; // 12441 6942
// skipping _6941  name type: 0
// skipping _6940  name type: 0
// skipping _6939  name type: 0
    object _6938 = NOVALUE; // 12434 6938
// skipping _6937  name type: 0
    object _6936 = NOVALUE; // 12429 6936
// skipping _6935  name type: 0
// skipping _6934  name type: 0
// skipping _6933  name type: 0
// skipping _6932  name type: 0
// skipping _6931  name type: 0
// skipping _6930  name type: 0
// skipping _6929  name type: 0
// skipping _6927  name type: 0
// skipping _6926  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rehash_seq pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 3 op: INTEGER_CHECK (96)
    // SubProg rehash_seq pc: 5 op: STARTLINE (58)

    /** map.e:316		integer old_size = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_old_map_12408);
    _old_size_12410 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_size_12410))
    _old_size_12410 = (object)DBL_PTR(_old_size_12410)->dbl;
    // SubProg rehash_seq pc: 11 op: STARTLINE (58)

    /** map.e:319		if size = 0 then*/
    // SubProg rehash_seq pc: 13 op: EQUALS_IFW_I (121)
    // SubProg rehash_seq pc: 17 op: STARTLINE (58)

    /** map.e:320			if old_size > 50_000 then*/
    // SubProg rehash_seq pc: 19 op: GREATER_IFW_I (124)
    if (_old_size_12410 <= 50000)
    goto L1; // [19] 32
    // SubProg rehash_seq pc: 23 op: STARTLINE (58)

    /** map.e:321				size = old_size * 2*/
    // SubProg rehash_seq pc: 25 op: PLUS_I (115)
    _size_12409 = _old_size_12410 + _old_size_12410;
    // SubProg rehash_seq pc: 29 op: ELSE (23)
    goto L2; // [29] 69
    // SubProg rehash_seq pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 12406 op: 159
    // SubProg rehash_seq pc: 32 op: STARTLINE (58)

    /** map.e:323				size = old_size * 4*/
    // SubProg rehash_seq pc: 34 op: MULTIPLY (13)
    _size_12409 = _old_size_12410 * 4;
    // SubProg rehash_seq pc: 40 op: NOP1 (159)
    // SubProg rehash_seq pc: 41 op: ELSE (23)
    goto L2; // [41] 69
    // SubProg rehash_seq pc: 43 op: NOP1 (159)
    // SubProg rehash_seq pc: 44 op: STARTLINE (58)

    /** map.e:325		elsif size < old_size then*/
    // SubProg rehash_seq pc: 46 op: LESS_IFW_I (119)
    if (_size_12409 >= _old_size_12410)
    goto L3; // [46] 68
    // SubProg rehash_seq pc: 50 op: STARTLINE (58)

    /** map.e:326			size = old_size*/
    // SubProg rehash_seq pc: 52 op: ASSIGN_I (113)
    _size_12409 = _old_size_12410;
    // SubProg rehash_seq pc: 55 op: STARTLINE (58)

    /** map.e:327			if size < DEFAULT_SIZE then*/
    // SubProg rehash_seq pc: 57 op: LESS_IFW_I (119)
    if (_size_12409 >= 8)
    goto L4; // [57] 67
    // SubProg rehash_seq pc: 61 op: STARTLINE (58)

    /** map.e:328				size = DEFAULT_SIZE*/
    // SubProg rehash_seq pc: 63 op: ASSIGN_I (113)
    _size_12409 = 8;
    // SubProg rehash_seq pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 12406 op: 159
    // SubProg rehash_seq pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 12406 op: 159
    // SubProg rehash_seq pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 12406 op: 159
    // SubProg rehash_seq pc: 69 op: STARTLINE (58)

    /** map.e:332		sequence new_map = new_map_seq( size )*/
    // SubProg rehash_seq pc: 71 op: PROC (27)
    _0 = _new_map_12425;
    _new_map_12425 = _28new_map_seq(_size_12409);
    DeRef(_0);
    // SubProg rehash_seq pc: 75 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 77 op: STARTLINE (58)

    /** map.e:333		sequence slots = new_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 79 op: RHS_SUBS (25)
    DeRef(_slots_12427);
    _2 = (object)SEQ_PTR(_new_map_12425);
    _slots_12427 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12427);
    // SubProg rehash_seq pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 85 op: STARTLINE (58)

    /** map.e:334		new_map[MAP_SLOTS] = 0*/
    // SubProg rehash_seq pc: 87 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_map_12425);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12425 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg rehash_seq pc: 91 op: STARTLINE (58)

    /** map.e:335		new_map[MAP_SIZE] = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_map_12408);
    _6936 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg rehash_seq pc: 97 op: ASSIGN_SUBS (16)
    Ref(_6936);
    _2 = (object)SEQ_PTR(_new_map_12425);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12425 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6936;
    if( _1 != _6936 ){
        DeRef(_1);
    }
    _6936 = NOVALUE;
    // SubProg rehash_seq pc: 101 op: STARTLINE (58)

    /** map.e:337		sequence old_slots = old_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 103 op: RHS_SUBS (25)
    DeRef(_old_slots_12430);
    _2 = (object)SEQ_PTR(_old_map_12408);
    _old_slots_12430 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_old_slots_12430);
    // SubProg rehash_seq pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 109 op: STARTLINE (58)

    /** map.e:338		for i = 1 to length( old_slots ) do*/
    // SubProg rehash_seq pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_old_slots_12430)){
            _6938 = SEQ_PTR(_old_slots_12430)->length;
    }
    else {
        _6938 = 1;
    }
    // SubProg rehash_seq pc: 114 op: FOR_I (125)
    {
        object _i_12433;
        _i_12433 = 1;
L5: // addr: 121 pc: 114 sub: 12406 op: 125
        if (_i_12433 > _6938){
            goto L6; // [114] 171
        }
        // SubProg rehash_seq pc: 121 op: STARTLINE (58)

        /** map.e:339			sequence old_slot = old_slots[i]*/
        // SubProg rehash_seq pc: 123 op: RHS_SUBS (25)
        DeRef(_old_slot_12435);
        _2 = (object)SEQ_PTR(_old_slots_12430);
        _old_slot_12435 = (object)*(((s1_ptr)_2)->base + _i_12433);
        Ref(_old_slot_12435);
        // SubProg rehash_seq pc: 127 op: SEQUENCE_CHECK (97)
        // SubProg rehash_seq pc: 129 op: STARTLINE (58)

        /** map.e:340			integer old_hash = old_slot[SLOT_HASH]*/
        // SubProg rehash_seq pc: 131 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_old_slot_12435);
        _old_hash_12437 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_old_hash_12437))
        _old_hash_12437 = (object)DBL_PTR(_old_hash_12437)->dbl;
        // SubProg rehash_seq pc: 135 op: STARTLINE (58)

        /** map.e:341			if old_hash != -1 then*/
        // SubProg rehash_seq pc: 137 op: NOTEQ_IFW_I (122)
        if (_old_hash_12437 == -1)
        goto L7; // [137] 162
        // SubProg rehash_seq pc: 141 op: STARTLINE (58)

        /** map.e:342				index = lookup( old_slot[SLOT_KEY], old_hash, slots )*/
        // SubProg rehash_seq pc: 143 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_old_slot_12435);
        _6942 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg rehash_seq pc: 147 op: PROC (27)
        Ref(_6942);
        RefDS(_slots_12427);
        _index_12412 = _28lookup(_6942, _old_hash_12437, _slots_12427);
        _6942 = NOVALUE;
        // SubProg rehash_seq pc: 153 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_index_12412)) {
            _1 = (object)(DBL_PTR(_index_12412)->dbl);
            DeRefDS(_index_12412);
            _index_12412 = _1;
        }
        // SubProg rehash_seq pc: 155 op: STARTLINE (58)

        /** map.e:343				slots[index] = old_slot*/
        // SubProg rehash_seq pc: 157 op: ASSIGN_SUBS (16)
        RefDS(_old_slot_12435);
        _2 = (object)SEQ_PTR(_slots_12427);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12427 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12412);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _old_slot_12435;
        DeRef(_1);
        // SubProg rehash_seq pc: 161 op: NOP1 (159)
L7: // addr: 162 pc: 161 sub: 12406 op: 159
        // SubProg rehash_seq pc: 162 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var old_slot_12435
        DeRef(_old_slot_12435);
        _old_slot_12435 = NOVALUE;

// block var old_hash_12437
        // SubProg rehash_seq pc: 164 op: STARTLINE (58)

        /** map.e:345		end for*/
        // SubProg rehash_seq pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_12433 = _i_12433 + 1;
        goto L5; // [166] 121
L6: // addr: 171 pc: 166 sub: 12406 op: 54
        ;
    }
    // SubProg rehash_seq pc: 171 op: STARTLINE (58)

    /** map.e:346		new_map[MAP_SLOTS] = slots*/
    // SubProg rehash_seq pc: 173 op: ASSIGN_SUBS (16)
    RefDS(_slots_12427);
    _2 = (object)SEQ_PTR(_new_map_12425);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12425 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12427;
    DeRef(_1);
    // SubProg rehash_seq pc: 177 op: STARTLINE (58)

    /** map.e:347		return new_map*/
    // SubProg rehash_seq pc: 179 op: RETURNF (28)

// Exiting block BLOCK: rehash_seq

// block var old_map_12408
    DeRefDS(_old_map_12408);

// block var size_12409

// block var old_size_12410

// block var index_12412

// block var slots_12427
    DeRefDS(_slots_12427);

// block var old_slots_12430
    DeRef(_old_slots_12430);
    return _new_map_12425;
    // SubProg rehash_seq pc: 183 op: BADRETURNF (43)
    ;
}


object _28new_extra(object _the_map_p_12445, object _initial_size_p_12446)
{
    object _new_1__tmp_at22_12452 = NOVALUE;
    object _new_inlined_new_at_22_12451 = NOVALUE;
    object _6944 = NOVALUE; // 12448 6944
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_extra pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_extra pc: 3 op: STARTLINE (58)

    /** map.e:376		if map(the_map_p) then*/
    // SubProg new_extra pc: 5 op: PROC (27)
    Ref(_the_map_p_12445);
    _6944 = _28map(_the_map_p_12445);
    // SubProg new_extra pc: 9 op: IF (20)
    if (_6944 == 0) {
        DeRef(_6944);
        _6944 = NOVALUE;
        goto L1; // [9] 21
    }
    else {
        if (!IS_ATOM_INT(_6944) && DBL_PTR(_6944)->dbl == 0.0){
            DeRef(_6944);
            _6944 = NOVALUE;
            goto L1; // [9] 21
        }
        DeRef(_6944);
        _6944 = NOVALUE;
    }
    DeRef(_6944);
    _6944 = NOVALUE;
    // SubProg new_extra pc: 12 op: STARTLINE (58)

    /** map.e:377			return the_map_p*/
    // SubProg new_extra pc: 14 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var initial_size_p_12446
    return _the_map_p_12445;
    // SubProg new_extra pc: 18 op: ELSE (23)
    goto L2; // [18] 42
    // SubProg new_extra pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 12443 op: 159
    // SubProg new_extra pc: 21 op: STARTLINE (58)

    /** map.e:379			return new(initial_size_p)*/
    // SubProg new_extra pc: 23 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_extra pc: 25 op: PROC (27)
    _0 = _new_1__tmp_at22_12452;
    _new_1__tmp_at22_12452 = _28new_map_seq(_initial_size_p_12446);
    DeRef(_0);
    // SubProg new_extra pc: 29 op: PROC (27)
    Ref(_new_1__tmp_at22_12452);
    _0 = _new_inlined_new_at_22_12451;
    _new_inlined_new_at_22_12451 = _29malloc(_new_1__tmp_at22_12452, 1);
    DeRef(_0);
    // SubProg new_extra pc: 34 op: NOP1 (159)
    // SubProg new_extra pc: 35 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_extra @ 22

// block var new_1__tmp_at22_12452
    DeRef(_new_1__tmp_at22_12452);
    _new_1__tmp_at22_12452 = NOVALUE;
    // SubProg new_extra pc: 37 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var the_map_p_12445
    DeRef(_the_map_p_12445);

// block var initial_size_p_12446
    return _new_inlined_new_at_22_12451;
    // SubProg new_extra pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 12443 op: 159
    // SubProg new_extra pc: 42 op: BADRETURNF (43)
    ;
}


object _28has(object _the_map_p_12487, object _key_12488)
{
    object _hashval_12489 = NOVALUE;
    object _hash_inlined_hash_at_2_12491 = NOVALUE;
    object _slots_12492 = NOVALUE;
    object _index_12495 = NOVALUE;
    object _6964 = NOVALUE; // 12499 6964
    object _6963 = NOVALUE; // 12498 6963
    object _6962 = NOVALUE; // 12497 6962
// skipping _6961  name type: 0
// skipping _6960  name type: 0
    object _6959 = NOVALUE; // 12493 6959
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has pc: 1 op: STARTLINE (58)

    /** map.e:464		integer hashval = hash( key )*/
    // SubProg has pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg has pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 7 op: HASH (194)
    _hashval_12489 = calc_hash(_key_12488, -6);
    // SubProg has pc: 11 op: NOP1 (159)
    // SubProg has pc: 12 op: STARTLINE (58)

    /** map.e:465		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg has pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12487)){
        _6959 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12487)->dbl));
    }
    else{
        _6959 = (object)*(((s1_ptr)_2)->base + _the_map_p_12487);
    }
    // SubProg has pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12492);
    _2 = (object)SEQ_PTR(_6959);
    _slots_12492 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12492);
    _6959 = NOVALUE;
    // SubProg has pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg has pc: 26 op: STARTLINE (58)

    /** map.e:466		integer index = lookup( key, hashval, slots )*/
    // SubProg has pc: 28 op: PROC (27)
    Ref(_key_12488);
    RefDS(_slots_12492);
    _index_12495 = _28lookup(_key_12488, _hashval_12489, _slots_12492);
    // SubProg has pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12495)) {
        _1 = (object)(DBL_PTR(_index_12495)->dbl);
        DeRefDS(_index_12495);
        _index_12495 = _1;
    }
    // SubProg has pc: 36 op: STARTLINE (58)

    /** map.e:468		return hashval = slots[index][SLOT_HASH]*/
    // SubProg has pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12492);
    _6962 = (object)*(((s1_ptr)_2)->base + _index_12495);
    // SubProg has pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6962);
    _6963 = (object)*(((s1_ptr)_2)->base + 1);
    _6962 = NOVALUE;
    // SubProg has pc: 46 op: EQUALS (3)
    if (IS_ATOM_INT(_6963)) {
        _6964 = (_hashval_12489 == _6963);
    }
    else {
        _6964 = binary_op(EQUALS, _hashval_12489, _6963);
    }
    _6963 = NOVALUE;
    // SubProg has pc: 50 op: RETURNF (28)

// Exiting block BLOCK: has

// block var the_map_p_12487
    DeRef(_the_map_p_12487);

// block var key_12488
    DeRef(_key_12488);

// block var hashval_12489

// block var slots_12492
    DeRefDS(_slots_12492);

// block var index_12495
    return _6964;
    // SubProg has pc: 54 op: BADRETURNF (43)
    ;
}


object _28get(object _the_map_p_12502, object _key_12503, object _default_12504)
{
    object _hashval_12505 = NOVALUE;
    object _hash_inlined_hash_at_2_12507 = NOVALUE;
    object _slots_12508 = NOVALUE;
    object _index_12511 = NOVALUE;
    object _slot_12513 = NOVALUE;
    object _6971 = NOVALUE; // 12518 6971
// skipping _6970  name type: 0
    object _6969 = NOVALUE; // 12516 6969
// skipping _6968  name type: 0
// skipping _6967  name type: 0
// skipping _6966  name type: 0
    object _6965 = NOVALUE; // 12509 6965
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get pc: 1 op: STARTLINE (58)

    /** map.e:505		integer hashval = hash( key )*/
    // SubProg get pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg get pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 7 op: HASH (194)
    _hashval_12505 = calc_hash(_key_12503, -6);
    // SubProg get pc: 11 op: NOP1 (159)
    // SubProg get pc: 12 op: STARTLINE (58)

    /** map.e:506		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg get pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12502)){
        _6965 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12502)->dbl));
    }
    else{
        _6965 = (object)*(((s1_ptr)_2)->base + _the_map_p_12502);
    }
    // SubProg get pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12508);
    _2 = (object)SEQ_PTR(_6965);
    _slots_12508 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12508);
    _6965 = NOVALUE;
    // SubProg get pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 26 op: STARTLINE (58)

    /** map.e:507		integer index = lookup( key, hashval, slots )*/
    // SubProg get pc: 28 op: PROC (27)
    Ref(_key_12503);
    RefDS(_slots_12508);
    _index_12511 = _28lookup(_key_12503, _hashval_12505, _slots_12508);
    // SubProg get pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12511)) {
        _1 = (object)(DBL_PTR(_index_12511)->dbl);
        DeRefDS(_index_12511);
        _index_12511 = _1;
    }
    // SubProg get pc: 36 op: STARTLINE (58)

    /** map.e:508		sequence slot = slots[index]*/
    // SubProg get pc: 38 op: RHS_SUBS (25)
    DeRef(_slot_12513);
    _2 = (object)SEQ_PTR(_slots_12508);
    _slot_12513 = (object)*(((s1_ptr)_2)->base + _index_12511);
    Ref(_slot_12513);
    // SubProg get pc: 42 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 44 op: STARTLINE (58)

    /** map.e:509		if hashval = slot[SLOT_HASH] then*/
    // SubProg get pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_12513);
    _6969 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg get pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_12505, _6969)){
        _6969 = NOVALUE;
        goto L1; // [50] 65
    }
    _6969 = NOVALUE;
    // SubProg get pc: 54 op: STARTLINE (58)

    /** map.e:510			return slot[SLOT_VALUE]*/
    // SubProg get pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_12513);
    _6971 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg get pc: 60 op: RETURNF (28)
    Ref(_6971);

// Exiting block BLOCK: get

// block var the_map_p_12502
    DeRef(_the_map_p_12502);

// block var key_12503
    DeRef(_key_12503);

// block var default_12504
    DeRef(_default_12504);

// block var hashval_12505

// block var slots_12508
    DeRefDS(_slots_12508);

// block var index_12511

// block var slot_12513
    DeRefDS(_slot_12513);
    return _6971;
    // SubProg get pc: 64 op: NOP1 (159)
L1: // addr: 65 pc: 64 sub: 12500 op: 159
    // SubProg get pc: 65 op: STARTLINE (58)

    /** map.e:512		return default*/
    // SubProg get pc: 67 op: RETURNF (28)

// Exiting block BLOCK: get

// block var the_map_p_12502
    DeRef(_the_map_p_12502);

// block var key_12503
    DeRef(_key_12503);

// block var hashval_12505

// block var slots_12508
    DeRef(_slots_12508);

// block var index_12511

// block var slot_12513
    DeRef(_slot_12513);
    _6971 = NOVALUE;
    return _default_12504;
    // SubProg get pc: 71 op: BADRETURNF (43)
    ;
}


void _28put(object _the_map_p_12541, object _key_12542, object _val_12543, object _op_12544, object _deprecated_12545)
{
    object _hashval_12546 = NOVALUE;
    object _hash_inlined_hash_at_2_12548 = NOVALUE;
    object _the_map_seq_12549 = NOVALUE;
    object _slots_12551 = NOVALUE;
    object _index_12553 = NOVALUE;
    object _old_hash_12555 = NOVALUE;
    object _msg_inlined_crash_at_288_12598 = NOVALUE;
    object _msg_inlined_crash_at_348_12608 = NOVALUE;
    object _msg_inlined_crash_at_535_12640 = NOVALUE;
    object _7038 = NOVALUE; // 12636 7038
// skipping _7037  name type: 0
    object _7036 = NOVALUE; // 12632 7036
    object _7035 = NOVALUE; // 12631 7035
    object _7034 = NOVALUE; // 12630 7034
    object _7033 = NOVALUE; // 12629 7033
    object _7032 = NOVALUE; // 12627 7032
// skipping _7031  name type: 0
    object _7030 = NOVALUE; // 12623 7030
    object _7029 = NOVALUE; // 12622 7029
    object _7028 = NOVALUE; // 12621 7028
    object _7027 = NOVALUE; // 12620 7027
    object _7026 = NOVALUE; // 12618 7026
    object _7025 = NOVALUE; // 12617 7025
// skipping _7024  name type: 0
    object _7023 = NOVALUE; // 12613 7023
    object _7022 = NOVALUE; // 12612 7022
    object _7021 = NOVALUE; // 12611 7021
    object _7020 = NOVALUE; // 12610 7020
// skipping _7019  name type: 0
    object _7018 = NOVALUE; // 12603 7018
    object _7017 = NOVALUE; // 12602 7017
    object _7016 = NOVALUE; // 12601 7016
    object _7015 = NOVALUE; // 12600 7015
// skipping _7013  name type: 0
    object _7012 = NOVALUE; // 12592 7012
    object _7011 = NOVALUE; // 12591 7011
    object _7010 = NOVALUE; // 12590 7010
    object _7009 = NOVALUE; // 12589 7009
    object _7008 = NOVALUE; // 12587 7008
// skipping _7007  name type: 0
    object _7006 = NOVALUE; // 12583 7006
    object _7005 = NOVALUE; // 12582 7005
    object _7004 = NOVALUE; // 12581 7004
    object _7003 = NOVALUE; // 12580 7003
    object _7002 = NOVALUE; // 12578 7002
// skipping _7001  name type: 0
    object _7000 = NOVALUE; // 12574 7000
    object _6997 = NOVALUE; // 12570 6997
    object _6996 = NOVALUE; // 12569 6996
// skipping _6995  name type: 0
    object _6994 = NOVALUE; // 12567 6994
// skipping _6993  name type: 0
// skipping _6992  name type: 0
// skipping _6991  name type: 0
// skipping _6990  name type: 0
    object _6989 = NOVALUE; // 12562 6989
    object _6988 = NOVALUE; // 12561 6988
// skipping _6987  name type: 0
// skipping _6986  name type: 0
    object _6985 = NOVALUE; // 12556 6985
// skipping _6984  name type: 0
// skipping _6983  name type: 0
// skipping _6982  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg put pc: 1 op: STARTLINE (58)

    /** map.e:579		integer hashval = hash( key )*/
    // SubProg put pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg put pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 7 op: HASH (194)
    _hashval_12546 = calc_hash(_key_12542, -6);
    // SubProg put pc: 11 op: NOP1 (159)
    // SubProg put pc: 12 op: STARTLINE (58)

    /** map.e:580		sequence the_map_seq = eumem:ram_space[the_map_p]*/
    // SubProg put pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 16 op: RHS_SUBS (25)
    DeRef(_the_map_seq_12549);
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12541)){
        _the_map_seq_12549 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12541)->dbl));
    }
    else{
        _the_map_seq_12549 = (object)*(((s1_ptr)_2)->base + _the_map_p_12541);
    }
    Ref(_the_map_seq_12549);
    // SubProg put pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 22 op: STARTLINE (58)

    /** map.e:581		eumem:ram_space[the_map_p] = 0*/
    // SubProg put pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12541))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12541)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12541);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 30 op: STARTLINE (58)

    /** map.e:582		sequence slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 32 op: RHS_SUBS (25)
    DeRef(_slots_12551);
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    _slots_12551 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12551);
    // SubProg put pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 38 op: STARTLINE (58)

    /** map.e:584		integer index = lookup( key, hashval, slots )*/
    // SubProg put pc: 40 op: PROC (27)
    Ref(_key_12542);
    RefDS(_slots_12551);
    _index_12553 = _28lookup(_key_12542, _hashval_12546, _slots_12551);
    // SubProg put pc: 46 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12553)) {
        _1 = (object)(DBL_PTR(_index_12553)->dbl);
        DeRefDS(_index_12553);
        _index_12553 = _1;
    }
    // SubProg put pc: 48 op: STARTLINE (58)

    /** map.e:585		integer old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12551);
    _6985 = (object)*(((s1_ptr)_2)->base + _index_12553);
    // SubProg put pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6985);
    _old_hash_12555 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12555)){
        _old_hash_12555 = (object)DBL_PTR(_old_hash_12555)->dbl;
    }
    _6985 = NOVALUE;
    // SubProg put pc: 60 op: STARTLINE (58)

    /** map.e:587		if old_hash < 0 then*/
    // SubProg put pc: 62 op: LESS_IFW_I (119)
    if (_old_hash_12555 >= 0)
    goto L1; // [62] 142
    // SubProg put pc: 66 op: STARTLINE (58)

    /** map.e:589			if the_map_seq[MAP_SIZE] > the_map_seq[MAP_MAX] then*/
    // SubProg put pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    _6988 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    _6989 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg put pc: 76 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _6988, _6989)){
        _6988 = NOVALUE;
        _6989 = NOVALUE;
        goto L2; // [76] 127
    }
    _6988 = NOVALUE;
    _6989 = NOVALUE;
    // SubProg put pc: 80 op: STARTLINE (58)

    /** map.e:590				slots = {}*/
    // SubProg put pc: 82 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_12551);
    _slots_12551 = _5;
    // SubProg put pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 87 op: STARTLINE (58)

    /** map.e:591				the_map_seq = rehash_seq( the_map_seq )*/
    // SubProg put pc: 89 op: PROC (27)
    RefDS(_the_map_seq_12549);
    _0 = _the_map_seq_12549;
    _the_map_seq_12549 = _28rehash_seq(_the_map_seq_12549, 0);
    DeRefDS(_0);
    // SubProg put pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 96 op: STARTLINE (58)

    /** map.e:592				slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 98 op: RHS_SUBS (25)
    DeRefDS(_slots_12551);
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    _slots_12551 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12551);
    // SubProg put pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 104 op: STARTLINE (58)

    /** map.e:593				index = lookup( key, hashval, slots )*/
    // SubProg put pc: 106 op: PROC (27)
    Ref(_key_12542);
    RefDS(_slots_12551);
    _index_12553 = _28lookup(_key_12542, _hashval_12546, _slots_12551);
    // SubProg put pc: 112 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12553)) {
        _1 = (object)(DBL_PTR(_index_12553)->dbl);
        DeRefDS(_index_12553);
        _index_12553 = _1;
    }
    // SubProg put pc: 114 op: STARTLINE (58)

    /** map.e:594				old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12551);
    _6994 = (object)*(((s1_ptr)_2)->base + _index_12553);
    // SubProg put pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6994);
    _old_hash_12555 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12555)){
        _old_hash_12555 = (object)DBL_PTR(_old_hash_12555)->dbl;
    }
    _6994 = NOVALUE;
    // SubProg put pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 12539 op: 159
    // SubProg put pc: 127 op: STARTLINE (58)

    /** map.e:596			the_map_seq[MAP_SIZE] += 1*/
    // SubProg put pc: 129 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    _6996 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 133 op: PLUS1 (93)
    if (IS_ATOM_INT(_6996)) {
        _6997 = _6996 + 1;
        if (_6997 > MAXINT){
            _6997 = NewDouble((eudouble)_6997);
        }
    }
    else
    _6997 = binary_op(PLUS, 1, _6996);
    _6996 = NOVALUE;
    // SubProg put pc: 137 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12549 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6997;
    if( _1 != _6997 ){
        DeRef(_1);
    }
    _6997 = NOVALUE;
    // SubProg put pc: 141 op: NOP1 (159)
L1: // addr: 142 pc: 141 sub: 12539 op: 159
    // SubProg put pc: 142 op: STARTLINE (58)

    /** map.e:599		the_map_seq[MAP_SLOTS] = 0*/
    // SubProg put pc: 144 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12549 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 148 op: STARTLINE (58)

    /** map.e:601		switch op do*/
    // SubProg put pc: 150 op: SWITCH_I (193)
    if (IS_SEQUENCE(_op_12544) ){
        goto L3; // [150] 532
    }
    if(!IS_ATOM_INT(_op_12544)){
        if( (DBL_PTR(_op_12544)->dbl != (eudouble) ((object) DBL_PTR(_op_12544)->dbl) ) ){
            goto L3; // [150] 532
        }
        _0 = (object) DBL_PTR(_op_12544)->dbl;
    }
    else {
        _0 = _op_12544;
    };
    switch ( _0 ){ 
        // SubProg put pc: 155 op: STARTLINE (58)

        /** map.e:602			case PUT then*/
        // SubProg put pc: 157 op: CASE (186)
        case 1:
        // SubProg put pc: 159 op: STARTLINE (58)

        /** map.e:603				slots[index] = { hashval, key, val }*/
        // SubProg put pc: 161 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        Ref(_val_12543);
        ((intptr_t*)_2)[3] = _val_12543;
        _7000 = MAKE_SEQ(_1);
        // SubProg put pc: 167 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7000;
        if( _1 != _7000 ){
            DeRef(_1);
        }
        _7000 = NOVALUE;
        // SubProg put pc: 171 op: ELSE (23)
        goto L4; // [171] 555
        // SubProg put pc: 173 op: STARTLINE (58)

        /** map.e:604			case ADD then*/
        // SubProg put pc: 175 op: CASE (186)
        case 2:
        // SubProg put pc: 177 op: STARTLINE (58)

        /** map.e:605				if old_hash < 0 then*/
        // SubProg put pc: 179 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto L5; // [179] 198
        // SubProg put pc: 183 op: STARTLINE (58)

        /** map.e:606					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 185 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        Ref(_val_12543);
        ((intptr_t*)_2)[3] = _val_12543;
        _7002 = MAKE_SEQ(_1);
        // SubProg put pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7002;
        if( _1 != _7002 ){
            DeRef(_1);
        }
        _7002 = NOVALUE;
        // SubProg put pc: 195 op: ELSE (23)
        goto L4; // [195] 555
        // SubProg put pc: 197 op: NOP1 (159)
L5: // addr: 198 pc: 197 sub: 12539 op: 159
        // SubProg put pc: 198 op: STARTLINE (58)

        /** map.e:608					slots[index] = { hashval, key, val + slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 200 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7003 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 204 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7003);
        _7004 = (object)*(((s1_ptr)_2)->base + 3);
        _7003 = NOVALUE;
        // SubProg put pc: 208 op: PLUS (11)
        if (IS_ATOM_INT(_val_12543) && IS_ATOM_INT(_7004)) {
            _7005 = _val_12543 + _7004;
            if ((object)((uintptr_t)_7005 + (uintptr_t)HIGH_BITS) >= 0){
                _7005 = NewDouble((eudouble)_7005);
            }
        }
        else {
            _7005 = binary_op(PLUS, _val_12543, _7004);
        }
        _7004 = NOVALUE;
        // SubProg put pc: 212 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7005;
        _7006 = MAKE_SEQ(_1);
        _7005 = NOVALUE;
        // SubProg put pc: 218 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7006;
        if( _1 != _7006 ){
            DeRef(_1);
        }
        _7006 = NOVALUE;
        // SubProg put pc: 222 op: NOP1 (159)
        // SubProg put pc: 223 op: ELSE (23)
        goto L4; // [223] 555
        // SubProg put pc: 225 op: STARTLINE (58)

        /** map.e:610			case SUBTRACT then*/
        // SubProg put pc: 227 op: CASE (186)
        case 3:
        // SubProg put pc: 229 op: STARTLINE (58)

        /** map.e:611				if old_hash < 0 then*/
        // SubProg put pc: 231 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto L6; // [231] 250
        // SubProg put pc: 235 op: STARTLINE (58)

        /** map.e:612					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 237 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        Ref(_val_12543);
        ((intptr_t*)_2)[3] = _val_12543;
        _7008 = MAKE_SEQ(_1);
        // SubProg put pc: 243 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7008;
        if( _1 != _7008 ){
            DeRef(_1);
        }
        _7008 = NOVALUE;
        // SubProg put pc: 247 op: ELSE (23)
        goto L4; // [247] 555
        // SubProg put pc: 249 op: NOP1 (159)
L6: // addr: 250 pc: 249 sub: 12539 op: 159
        // SubProg put pc: 250 op: STARTLINE (58)

        /** map.e:614					slots[index] = { hashval, key, slots[index][SLOT_VALUE] - val }*/
        // SubProg put pc: 252 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7009 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 256 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7009);
        _7010 = (object)*(((s1_ptr)_2)->base + 3);
        _7009 = NOVALUE;
        // SubProg put pc: 260 op: MINUS (10)
        if (IS_ATOM_INT(_7010) && IS_ATOM_INT(_val_12543)) {
            _7011 = _7010 - _val_12543;
            if ((object)((uintptr_t)_7011 +(uintptr_t) HIGH_BITS) >= 0){
                _7011 = NewDouble((eudouble)_7011);
            }
        }
        else {
            _7011 = binary_op(MINUS, _7010, _val_12543);
        }
        _7010 = NOVALUE;
        // SubProg put pc: 264 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7011;
        _7012 = MAKE_SEQ(_1);
        _7011 = NOVALUE;
        // SubProg put pc: 270 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7012;
        if( _1 != _7012 ){
            DeRef(_1);
        }
        _7012 = NOVALUE;
        // SubProg put pc: 274 op: NOP1 (159)
        // SubProg put pc: 275 op: ELSE (23)
        goto L4; // [275] 555
        // SubProg put pc: 277 op: STARTLINE (58)

        /** map.e:617			case MULTIPLY then*/
        // SubProg put pc: 279 op: CASE (186)
        case 4:
        // SubProg put pc: 281 op: STARTLINE (58)

        /** map.e:618				if old_hash < 0 then*/
        // SubProg put pc: 283 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto L7; // [283] 310
        // SubProg put pc: 287 op: STARTLINE (58)

        /** map.e:619					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 289 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 291 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_288_12598);
        _msg_inlined_crash_at_288_12598 = EPrintf(-9999999, _7014, _5);
        // SubProg put pc: 295 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 297 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_288_12598);
        // SubProg put pc: 300 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 302 op: ELSE (23)
        goto L8; // [302] 305
        // SubProg put pc: 304 op: NOP1 (159)
L8: // addr: 305 pc: 304 sub: 12539 op: 159
        // SubProg put pc: 305 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 288

// block var msg_inlined_crash_at_288_12598
        DeRefi(_msg_inlined_crash_at_288_12598);
        _msg_inlined_crash_at_288_12598 = NOVALUE;
        // SubProg put pc: 307 op: ELSE (23)
        goto L4; // [307] 555
        // SubProg put pc: 309 op: NOP1 (159)
L7: // addr: 310 pc: 309 sub: 12539 op: 159
        // SubProg put pc: 310 op: STARTLINE (58)

        /** map.e:621					slots[index] = { hashval, key, val * slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 312 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7015 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 316 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7015);
        _7016 = (object)*(((s1_ptr)_2)->base + 3);
        _7015 = NOVALUE;
        // SubProg put pc: 320 op: MULTIPLY (13)
        if (IS_ATOM_INT(_val_12543) && IS_ATOM_INT(_7016)) {
            if (_val_12543 == (short)_val_12543 && _7016 <= INT15 && _7016 >= -INT15){
                _7017 = _val_12543 * _7016;
            }
            else{
                _7017 = NewDouble(_val_12543 * (eudouble)_7016);
            }
        }
        else {
            _7017 = binary_op(MULTIPLY, _val_12543, _7016);
        }
        _7016 = NOVALUE;
        // SubProg put pc: 324 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7017;
        _7018 = MAKE_SEQ(_1);
        _7017 = NOVALUE;
        // SubProg put pc: 330 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7018;
        if( _1 != _7018 ){
            DeRef(_1);
        }
        _7018 = NOVALUE;
        // SubProg put pc: 334 op: NOP1 (159)
        // SubProg put pc: 335 op: ELSE (23)
        goto L4; // [335] 555
        // SubProg put pc: 337 op: STARTLINE (58)

        /** map.e:624			case DIVIDE then*/
        // SubProg put pc: 339 op: CASE (186)
        case 5:
        // SubProg put pc: 341 op: STARTLINE (58)

        /** map.e:625				if old_hash < 0 then*/
        // SubProg put pc: 343 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto L9; // [343] 370
        // SubProg put pc: 347 op: STARTLINE (58)

        /** map.e:626					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 349 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 351 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_348_12608);
        _msg_inlined_crash_at_348_12608 = EPrintf(-9999999, _7014, _5);
        // SubProg put pc: 355 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 357 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_348_12608);
        // SubProg put pc: 360 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 362 op: ELSE (23)
        goto LA; // [362] 365
        // SubProg put pc: 364 op: NOP1 (159)
LA: // addr: 365 pc: 364 sub: 12539 op: 159
        // SubProg put pc: 365 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 348

// block var msg_inlined_crash_at_348_12608
        DeRefi(_msg_inlined_crash_at_348_12608);
        _msg_inlined_crash_at_348_12608 = NOVALUE;
        // SubProg put pc: 367 op: ELSE (23)
        goto L4; // [367] 555
        // SubProg put pc: 369 op: NOP1 (159)
L9: // addr: 370 pc: 369 sub: 12539 op: 159
        // SubProg put pc: 370 op: STARTLINE (58)

        /** map.e:628					slots[index] = { hashval, key, slots[index][SLOT_VALUE] / val }*/
        // SubProg put pc: 372 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7020 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7020);
        _7021 = (object)*(((s1_ptr)_2)->base + 3);
        _7020 = NOVALUE;
        // SubProg put pc: 380 op: DIVIDE (14)
        if (IS_ATOM_INT(_7021) && IS_ATOM_INT(_val_12543)) {
            _7022 = (_7021 % _val_12543) ? NewDouble((eudouble)_7021 / _val_12543) : (_7021 / _val_12543);
        }
        else {
            _7022 = binary_op(DIVIDE, _7021, _val_12543);
        }
        _7021 = NOVALUE;
        // SubProg put pc: 384 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7022;
        _7023 = MAKE_SEQ(_1);
        _7022 = NOVALUE;
        // SubProg put pc: 390 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7023;
        if( _1 != _7023 ){
            DeRef(_1);
        }
        _7023 = NOVALUE;
        // SubProg put pc: 394 op: NOP1 (159)
        // SubProg put pc: 395 op: ELSE (23)
        goto L4; // [395] 555
        // SubProg put pc: 397 op: STARTLINE (58)

        /** map.e:631			case APPEND then*/
        // SubProg put pc: 399 op: CASE (186)
        case 6:
        // SubProg put pc: 401 op: STARTLINE (58)

        /** map.e:632				if old_hash < 0 then*/
        // SubProg put pc: 403 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto LB; // [403] 426
        // SubProg put pc: 407 op: STARTLINE (58)

        /** map.e:633					slots[index] = { hashval, key, {val} }*/
        // SubProg put pc: 409 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_val_12543);
        ((intptr_t*)_2)[1] = _val_12543;
        _7025 = MAKE_SEQ(_1);
        // SubProg put pc: 413 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7025;
        _7026 = MAKE_SEQ(_1);
        _7025 = NOVALUE;
        // SubProg put pc: 419 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7026;
        if( _1 != _7026 ){
            DeRef(_1);
        }
        _7026 = NOVALUE;
        // SubProg put pc: 423 op: ELSE (23)
        goto L4; // [423] 555
        // SubProg put pc: 425 op: NOP1 (159)
LB: // addr: 426 pc: 425 sub: 12539 op: 159
        // SubProg put pc: 426 op: STARTLINE (58)

        /** map.e:635					slots[index] = { hashval, key, append( slots[index][SLOT_VALUE], val ) }*/
        // SubProg put pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7027 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7027);
        _7028 = (object)*(((s1_ptr)_2)->base + 3);
        _7027 = NOVALUE;
        // SubProg put pc: 436 op: APPEND (35)
        Ref(_val_12543);
        Append(&_7029, _7028, _val_12543);
        _7028 = NOVALUE;
        // SubProg put pc: 440 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7029;
        _7030 = MAKE_SEQ(_1);
        _7029 = NOVALUE;
        // SubProg put pc: 446 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7030;
        if( _1 != _7030 ){
            DeRef(_1);
        }
        _7030 = NOVALUE;
        // SubProg put pc: 450 op: NOP1 (159)
        // SubProg put pc: 451 op: ELSE (23)
        goto L4; // [451] 555
        // SubProg put pc: 453 op: STARTLINE (58)

        /** map.e:638			case CONCAT then*/
        // SubProg put pc: 455 op: CASE (186)
        case 7:
        // SubProg put pc: 457 op: STARTLINE (58)

        /** map.e:639				if old_hash < 0 then*/
        // SubProg put pc: 459 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto LC; // [459] 478
        // SubProg put pc: 463 op: STARTLINE (58)

        /** map.e:640					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 465 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        Ref(_val_12543);
        ((intptr_t*)_2)[3] = _val_12543;
        _7032 = MAKE_SEQ(_1);
        // SubProg put pc: 471 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7032;
        if( _1 != _7032 ){
            DeRef(_1);
        }
        _7032 = NOVALUE;
        // SubProg put pc: 475 op: ELSE (23)
        goto L4; // [475] 555
        // SubProg put pc: 477 op: NOP1 (159)
LC: // addr: 478 pc: 477 sub: 12539 op: 159
        // SubProg put pc: 478 op: STARTLINE (58)

        /** map.e:642					slots[index] = { hashval, key, slots[index][SLOT_VALUE] & val }*/
        // SubProg put pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12551);
        _7033 = (object)*(((s1_ptr)_2)->base + _index_12553);
        // SubProg put pc: 484 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7033);
        _7034 = (object)*(((s1_ptr)_2)->base + 3);
        _7033 = NOVALUE;
        // SubProg put pc: 488 op: CONCAT (15)
        if (IS_SEQUENCE(_7034) && IS_ATOM(_val_12543)) {
            Ref(_val_12543);
            Append(&_7035, _7034, _val_12543);
        }
        else if (IS_ATOM(_7034) && IS_SEQUENCE(_val_12543)) {
            Ref(_7034);
            Prepend(&_7035, _val_12543, _7034);
        }
        else {
            Concat((object_ptr)&_7035, _7034, _val_12543);
            _7034 = NOVALUE;
        }
        _7034 = NOVALUE;
        // SubProg put pc: 492 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        ((intptr_t*)_2)[3] = _7035;
        _7036 = MAKE_SEQ(_1);
        _7035 = NOVALUE;
        // SubProg put pc: 498 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7036;
        if( _1 != _7036 ){
            DeRef(_1);
        }
        _7036 = NOVALUE;
        // SubProg put pc: 502 op: NOP1 (159)
        // SubProg put pc: 503 op: ELSE (23)
        goto L4; // [503] 555
        // SubProg put pc: 505 op: STARTLINE (58)

        /** map.e:645			case LEAVE then*/
        // SubProg put pc: 507 op: CASE (186)
        case 8:
        // SubProg put pc: 509 op: STARTLINE (58)

        /** map.e:646				if old_hash < 0 then*/
        // SubProg put pc: 511 op: LESS_IFW_I (119)
        if (_old_hash_12555 >= 0)
        goto L4; // [511] 555
        // SubProg put pc: 515 op: STARTLINE (58)

        /** map.e:647					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 517 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12546;
        Ref(_key_12542);
        ((intptr_t*)_2)[2] = _key_12542;
        Ref(_val_12543);
        ((intptr_t*)_2)[3] = _val_12543;
        _7038 = MAKE_SEQ(_1);
        // SubProg put pc: 523 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12551);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12551 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12553);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7038;
        if( _1 != _7038 ){
            DeRef(_1);
        }
        _7038 = NOVALUE;
        // SubProg put pc: 527 op: NOP1 (159)
        // SubProg put pc: 528 op: ELSE (23)
        goto L4; // [528] 555
        // SubProg put pc: 530 op: STARTLINE (58)

        /** map.e:649			case else*/
        // SubProg put pc: 532 op: CASE (186)
        default:
L3: // addr: 532 pc: 532 sub: 12539 op: 186
        // SubProg put pc: 534 op: STARTLINE (58)

        /** map.e:650				error:crash("Unknown operation given to map.e:put()")*/
        // SubProg put pc: 536 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 538 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_535_12640);
        _msg_inlined_crash_at_535_12640 = EPrintf(-9999999, _7039, _5);
        // SubProg put pc: 542 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 544 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_535_12640);
        // SubProg put pc: 547 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 549 op: ELSE (23)
        goto LD; // [549] 552
        // SubProg put pc: 551 op: NOP1 (159)
LD: // addr: 552 pc: 551 sub: 12539 op: 159
        // SubProg put pc: 552 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 535

// block var msg_inlined_crash_at_535_12640
        DeRefi(_msg_inlined_crash_at_535_12640);
        _msg_inlined_crash_at_535_12640 = NOVALUE;
        // SubProg put pc: 554 op: NOPSWITCH (187)
    ;}L4: // addr: 555 pc: 554 sub: 12539 op: 187
    // SubProg put pc: 555 op: STARTLINE (58)

    /** map.e:654		the_map_seq[MAP_SLOTS] = slots*/
    // SubProg put pc: 557 op: ASSIGN_SUBS (16)
    RefDS(_slots_12551);
    _2 = (object)SEQ_PTR(_the_map_seq_12549);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12549 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12551;
    DeRef(_1);
    // SubProg put pc: 561 op: STARTLINE (58)

    /** map.e:655		eumem:ram_space[the_map_p] = the_map_seq*/
    // SubProg put pc: 563 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 565 op: ASSIGN_SUBS (16)
    RefDS(_the_map_seq_12549);
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12541))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12541)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12541);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _the_map_seq_12549;
    DeRef(_1);
    // SubProg put pc: 569 op: STARTLINE (58)

    /** map.e:656	end procedure*/
    // SubProg put pc: 571 op: RETURNP (29)

// Exiting block BLOCK: put

// block var the_map_p_12541
    DeRef(_the_map_p_12541);

// block var key_12542
    DeRef(_key_12542);

// block var val_12543
    DeRef(_val_12543);

// block var op_12544
    DeRef(_op_12544);

// block var hashval_12546

// block var the_map_seq_12549
    DeRefDS(_the_map_seq_12549);

// block var slots_12551
    DeRefDS(_slots_12551);

// block var index_12553

// block var old_hash_12555
    return;
    // SubProg put pc: 574 op: BADRETURNF (43)
    ;
}


void _28nested_put(object _the_map_p_12643, object _the_keys_p_12644, object _the_value_p_12645, object _operation_p_12646, object _deprecated_trigger_p_12647)
{
    object _temp_map__12648 = NOVALUE;
    object _7050 = NOVALUE; // 12661 7050
    object _7049 = NOVALUE; // 12660 7049
    object _7048 = NOVALUE; // 12659 7048
    object _7047 = NOVALUE; // 12658 7047
    object _7046 = NOVALUE; // 12657 7046
// skipping _7045  name type: 0
    object _7044 = NOVALUE; // 12655 7044
    object _7043 = NOVALUE; // 12654 7043
    object _7042 = NOVALUE; // 12652 7042
// skipping _7041  name type: 0
    object _7040 = NOVALUE; // 12650 7040
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg nested_put pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg nested_put pc: 3 op: INTEGER_CHECK (96)
    // SubProg nested_put pc: 5 op: STARTLINE (58)

    /** map.e:701		if length( the_keys_p ) = 1 then*/
    // SubProg nested_put pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_12644)){
            _7040 = SEQ_PTR(_the_keys_p_12644)->length;
    }
    else {
        _7040 = 1;
    }
    // SubProg nested_put pc: 10 op: EQUALS_IFW_I (121)
    if (_7040 != 1)
    goto L1; // [10] 30
    // SubProg nested_put pc: 14 op: STARTLINE (58)

    /** map.e:702			put( the_map_p, the_keys_p[1], the_value_p, operation_p )*/
    // SubProg nested_put pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12644);
    _7042 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 20 op: PROC (27)
    Ref(_the_map_p_12643);
    Ref(_7042);
    Ref(_the_value_p_12645);
    _28put(_the_map_p_12643, _7042, _the_value_p_12645, _operation_p_12646, 0);
    _7042 = NOVALUE;
    // SubProg nested_put pc: 27 op: ELSE (23)
    goto L2; // [27] 84
    // SubProg nested_put pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 12641 op: 159
    // SubProg nested_put pc: 30 op: STARTLINE (58)

    /** map.e:704			temp_map_ = new_extra( get( the_map_p, the_keys_p[1] ) )*/
    // SubProg nested_put pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12644);
    _7043 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 36 op: PROC (27)
    Ref(_the_map_p_12643);
    Ref(_7043);
    _7044 = _28get(_the_map_p_12643, _7043, 0);
    _7043 = NOVALUE;
    // SubProg nested_put pc: 42 op: PROC (27)
    _0 = _temp_map__12648;
    _temp_map__12648 = _28new_extra(_7044, 8);
    DeRef(_0);
    _7044 = NOVALUE;
    // SubProg nested_put pc: 47 op: STARTLINE (58)

    /** map.e:705			nested_put( temp_map_, the_keys_p[2..$], the_value_p, operation_p )*/
    // SubProg nested_put pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_12644)){
            _7046 = SEQ_PTR(_the_keys_p_12644)->length;
    }
    else {
        _7046 = 1;
    }
    // SubProg nested_put pc: 52 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_7047;
    RHS_Slice(_the_keys_p_12644, 2, _7046);
    // SubProg nested_put pc: 57 op: ASSIGN (18)
    Ref(_the_value_p_12645);
    DeRef(_7048);
    _7048 = _the_value_p_12645;
    // SubProg nested_put pc: 60 op: ASSIGN (18)
    DeRef(_7049);
    _7049 = _operation_p_12646;
    // SubProg nested_put pc: 63 op: PROC (27)
    Ref(_temp_map__12648);
    _28nested_put(_temp_map__12648, _7047, _7048, _7049, 0);
    _7047 = NOVALUE;
    _7048 = NOVALUE;
    _7049 = NOVALUE;
    // SubProg nested_put pc: 70 op: STARTLINE (58)

    /** map.e:706			put( the_map_p, the_keys_p[1], temp_map_, PUT )*/
    // SubProg nested_put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12644);
    _7050 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 76 op: PROC (27)
    Ref(_the_map_p_12643);
    Ref(_7050);
    Ref(_temp_map__12648);
    _28put(_the_map_p_12643, _7050, _temp_map__12648, 1, 0);
    _7050 = NOVALUE;
    // SubProg nested_put pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 12641 op: 159
    // SubProg nested_put pc: 84 op: STARTLINE (58)

    /** map.e:708	end procedure*/
    // SubProg nested_put pc: 86 op: RETURNP (29)

// Exiting block BLOCK: nested_put

// block var the_map_p_12643
    DeRef(_the_map_p_12643);

// block var the_keys_p_12644
    DeRefDS(_the_keys_p_12644);

// block var the_value_p_12645
    DeRef(_the_value_p_12645);

// block var operation_p_12646

// block var temp_map__12648
    DeRef(_temp_map__12648);
    return;
    // SubProg nested_put pc: 89 op: BADRETURNF (43)
    ;
}


void _28remove(object _the_map_p_12664, object _key_12665)
{
    object _hashval_12666 = NOVALUE;
    object _hash_inlined_hash_at_2_12668 = NOVALUE;
    object _slots_12669 = NOVALUE;
    object _index_12672 = NOVALUE;
    object _7062 = NOVALUE; // 12683 7062
    object _7061 = NOVALUE; // 12682 7061
// skipping _7060  name type: 0
    object _7059 = NOVALUE; // 12680 7059
// skipping _7058  name type: 0
    object _7057 = NOVALUE; // 12678 7057
// skipping _7056  name type: 0
    object _7055 = NOVALUE; // 12676 7055
    object _7054 = NOVALUE; // 12675 7054
// skipping _7053  name type: 0
// skipping _7052  name type: 0
    object _7051 = NOVALUE; // 12670 7051
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove pc: 1 op: STARTLINE (58)

    /** map.e:735		integer hashval = hash( key )*/
    // SubProg remove pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg remove pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 7 op: HASH (194)
    _hashval_12666 = calc_hash(_key_12665, -6);
    // SubProg remove pc: 11 op: NOP1 (159)
    // SubProg remove pc: 12 op: STARTLINE (58)

    /** map.e:736		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg remove pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12664)){
        _7051 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12664)->dbl));
    }
    else{
        _7051 = (object)*(((s1_ptr)_2)->base + _the_map_p_12664);
    }
    // SubProg remove pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12669);
    _2 = (object)SEQ_PTR(_7051);
    _slots_12669 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12669);
    _7051 = NOVALUE;
    // SubProg remove pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 26 op: STARTLINE (58)

    /** map.e:738		integer index = lookup( key, hashval, slots )*/
    // SubProg remove pc: 28 op: PROC (27)
    Ref(_key_12665);
    RefDS(_slots_12669);
    _index_12672 = _28lookup(_key_12665, _hashval_12666, _slots_12669);
    // SubProg remove pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12672)) {
        _1 = (object)(DBL_PTR(_index_12672)->dbl);
        DeRefDS(_index_12672);
        _index_12672 = _1;
    }
    // SubProg remove pc: 36 op: STARTLINE (58)

    /** map.e:739		if hashval = slots[index][SLOT_HASH] then*/
    // SubProg remove pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12669);
    _7054 = (object)*(((s1_ptr)_2)->base + _index_12672);
    // SubProg remove pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7054);
    _7055 = (object)*(((s1_ptr)_2)->base + 1);
    _7054 = NOVALUE;
    // SubProg remove pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_12666, _7055)){
        _7055 = NOVALUE;
        goto L1; // [46] 99
    }
    _7055 = NOVALUE;
    // SubProg remove pc: 50 op: STARTLINE (58)

    /** map.e:740			slots = {}*/
    // SubProg remove pc: 52 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_12669);
    _slots_12669 = _5;
    // SubProg remove pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 57 op: STARTLINE (58)

    /** map.e:741			eumem:ram_space[the_map_p][MAP_SLOTS][index] = REMOVED_SLOT*/
    // SubProg remove pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 61 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12664))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12664)->dbl));
    else
    _3 = (object)(_the_map_p_12664 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 66 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(2 + ((s1_ptr)_2)->base);
    _7057 = NOVALUE;
    // SubProg remove pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 73 op: PASSIGN_SUBS (162)
    RefDS(_28REMOVED_SLOT_12281);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_12672);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _28REMOVED_SLOT_12281;
    DeRef(_1);
    _7057 = NOVALUE;
    // SubProg remove pc: 77 op: STARTLINE (58)

    /** map.e:742			eumem:ram_space[the_map_p][MAP_SIZE] -= 1*/
    // SubProg remove pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 81 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12664))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12664)->dbl));
    else
    _3 = (object)(_the_map_p_12664 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 86 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _7061 = (object)*(((s1_ptr)_2)->base + 1);
    _7059 = NOVALUE;
    // SubProg remove pc: 90 op: MINUS (10)
    if (IS_ATOM_INT(_7061)) {
        _7062 = _7061 - 1;
        if ((object)((uintptr_t)_7062 +(uintptr_t) HIGH_BITS) >= 0){
            _7062 = NewDouble((eudouble)_7062);
        }
    }
    else {
        _7062 = binary_op(MINUS, _7061, 1);
    }
    _7061 = NOVALUE;
    // SubProg remove pc: 94 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7062;
    if( _1 != _7062 ){
        DeRef(_1);
    }
    _7062 = NOVALUE;
    _7059 = NOVALUE;
    // SubProg remove pc: 98 op: NOP1 (159)
L1: // addr: 99 pc: 98 sub: 12662 op: 159
    // SubProg remove pc: 99 op: STARTLINE (58)

    /** map.e:744	end procedure*/
    // SubProg remove pc: 101 op: RETURNP (29)

// Exiting block BLOCK: remove

// block var the_map_p_12664
    DeRef(_the_map_p_12664);

// block var key_12665
    DeRef(_key_12665);

// block var hashval_12666

// block var slots_12669
    DeRef(_slots_12669);

// block var index_12672
    return;
    // SubProg remove pc: 104 op: BADRETURNF (43)
    ;
}


void _28clear(object _the_map_p_12686)
{
// skipping _7070  name type: 0
    object _7069 = NOVALUE; // 12693 7069
    object _7068 = NOVALUE; // 12692 7068
    object _7067 = NOVALUE; // 12691 7067
    object _7066 = NOVALUE; // 12690 7066
    object _7065 = NOVALUE; // 12689 7065
// skipping _7064  name type: 0
    object _7063 = NOVALUE; // 12687 7063
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg clear pc: 1 op: STARTLINE (58)

    /** map.e:773		eumem:ram_space[the_map_p][MAP_SLOTS] = repeat( EMPTY_SLOT, length( eumem:ram_space[the_map_p][MAP_SLOTS] ) )*/
    // SubProg clear pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 5 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12686))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12686)->dbl));
    else
    _3 = (object)(_the_map_p_12686 + ((s1_ptr)_2)->base);
    // SubProg clear pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12686)){
        _7065 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12686)->dbl));
    }
    else{
        _7065 = (object)*(((s1_ptr)_2)->base + _the_map_p_12686);
    }
    // SubProg clear pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7065);
    _7066 = (object)*(((s1_ptr)_2)->base + 2);
    _7065 = NOVALUE;
    // SubProg clear pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_7066)){
            _7067 = SEQ_PTR(_7066)->length;
    }
    else {
        _7067 = 1;
    }
    _7066 = NOVALUE;
    // SubProg clear pc: 25 op: REPEAT (32)
    _7068 = Repeat(_28EMPTY_SLOT_12279, _7067);
    _7067 = NOVALUE;
    // SubProg clear pc: 29 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7068;
    if( _1 != _7068 ){
        DeRef(_1);
    }
    _7068 = NOVALUE;
    _7063 = NOVALUE;
    // SubProg clear pc: 33 op: STARTLINE (58)

    /** map.e:774		eumem:ram_space[the_map_p][MAP_SIZE]  = 0*/
    // SubProg clear pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 37 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _29ram_space_11382 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12686))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12686)->dbl));
    else
    _3 = (object)(_the_map_p_12686 + ((s1_ptr)_2)->base);
    // SubProg clear pc: 42 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _7069 = NOVALUE;
    // SubProg clear pc: 46 op: STARTLINE (58)

    /** map.e:775	end procedure*/
    // SubProg clear pc: 48 op: RETURNP (29)

// Exiting block BLOCK: clear

// block var the_map_p_12686
    DeRef(_the_map_p_12686);
    _7066 = NOVALUE;
    return;
    // SubProg clear pc: 51 op: BADRETURNF (43)
    ;
}


object _28keys(object _the_map_p_12741, object _sorted_result_12742)
{
    object _slots_12743 = NOVALUE;
    object _keys_12746 = NOVALUE;
    object _kx_12750 = NOVALUE;
    object _7100 = NOVALUE; // 12765 7100
// skipping _7099  name type: 0
    object _7098 = NOVALUE; // 12762 7098
    object _7097 = NOVALUE; // 12760 7097
    object _7096 = NOVALUE; // 12759 7096
// skipping _7095  name type: 0
// skipping _7094  name type: 0
    object _7093 = NOVALUE; // 12756 7093
    object _7092 = NOVALUE; // 12755 7092
    object _7091 = NOVALUE; // 12753 7091
// skipping _7090  name type: 0
    object _7089 = NOVALUE; // 12748 7089
    object _7088 = NOVALUE; // 12747 7088
// skipping _7087  name type: 0
    object _7086 = NOVALUE; // 12744 7086
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg keys pc: 1 op: INTEGER_CHECK (96)
    // SubProg keys pc: 3 op: STARTLINE (58)

    /** map.e:903		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg keys pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12741)){
        _7086 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12741)->dbl));
    }
    else{
        _7086 = (object)*(((s1_ptr)_2)->base + _the_map_p_12741);
    }
    // SubProg keys pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12743);
    _2 = (object)SEQ_PTR(_7086);
    _slots_12743 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12743);
    _7086 = NOVALUE;
    // SubProg keys pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg keys pc: 17 op: STARTLINE (58)

    /** map.e:904		sequence keys = repeat( 0, eumem:ram_space[the_map_p][MAP_SIZE] )*/
    // SubProg keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_p_12741)){
        _7088 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12741)->dbl));
    }
    else{
        _7088 = (object)*(((s1_ptr)_2)->base + _the_map_p_12741);
    }
    // SubProg keys pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7088);
    _7089 = (object)*(((s1_ptr)_2)->base + 1);
    _7088 = NOVALUE;
    // SubProg keys pc: 29 op: REPEAT (32)
    DeRef(_keys_12746);
    _keys_12746 = Repeat(0, _7089);
    _7089 = NOVALUE;
    // SubProg keys pc: 33 op: STARTLINE (58)

    /** map.e:905		integer kx = 0*/
    // SubProg keys pc: 35 op: ASSIGN_I (113)
    _kx_12750 = 0;
    // SubProg keys pc: 38 op: STARTLINE (58)

    /** map.e:906		for i = 1 to length( slots ) do*/
    // SubProg keys pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12743)){
            _7091 = SEQ_PTR(_slots_12743)->length;
    }
    else {
        _7091 = 1;
    }
    // SubProg keys pc: 43 op: FOR_I (125)
    {
        object _i_12752;
        _i_12752 = 1;
L1: // addr: 50 pc: 43 sub: 12739 op: 125
        if (_i_12752 > _7091){
            goto L2; // [43] 106
        }
        // SubProg keys pc: 50 op: STARTLINE (58)

        /** map.e:907			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg keys pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12743);
        _7092 = (object)*(((s1_ptr)_2)->base + _i_12752);
        // SubProg keys pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7092);
        _7093 = (object)*(((s1_ptr)_2)->base + 1);
        _7092 = NOVALUE;
        // SubProg keys pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _7093, 0)){
            _7093 = NOVALUE;
            goto L3; // [60] 99
        }
        _7093 = NOVALUE;
        // SubProg keys pc: 64 op: STARTLINE (58)

        /** map.e:908				kx += 1*/
        // SubProg keys pc: 66 op: PLUS1_I (117)
        _kx_12750 = _kx_12750 + 1;
        // SubProg keys pc: 70 op: STARTLINE (58)

        /** map.e:909				keys[kx] = slots[i][SLOT_KEY]*/
        // SubProg keys pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12743);
        _7096 = (object)*(((s1_ptr)_2)->base + _i_12752);
        // SubProg keys pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7096);
        _7097 = (object)*(((s1_ptr)_2)->base + 2);
        _7096 = NOVALUE;
        // SubProg keys pc: 80 op: ASSIGN_SUBS (16)
        Ref(_7097);
        _2 = (object)SEQ_PTR(_keys_12746);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _keys_12746 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _kx_12750);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7097;
        if( _1 != _7097 ){
            DeRef(_1);
        }
        _7097 = NOVALUE;
        // SubProg keys pc: 84 op: STARTLINE (58)

        /** map.e:910				if kx = length( keys ) then*/
        // SubProg keys pc: 86 op: LENGTH (42)
        if (IS_SEQUENCE(_keys_12746)){
                _7098 = SEQ_PTR(_keys_12746)->length;
        }
        else {
            _7098 = 1;
        }
        // SubProg keys pc: 89 op: EQUALS_IFW_I (121)
        if (_kx_12750 != _7098)
        goto L4; // [89] 98
        // SubProg keys pc: 93 op: STARTLINE (58)

        /** map.e:911					exit*/
        // SubProg keys pc: 95 op: EXIT (61)
        goto L2; // [95] 106
        // SubProg keys pc: 97 op: NOP1 (159)
L4: // addr: 98 pc: 97 sub: 12739 op: 159
        // SubProg keys pc: 98 op: NOP1 (159)
L3: // addr: 99 pc: 98 sub: 12739 op: 159
        // SubProg keys pc: 99 op: STARTLINE (58)

        /** map.e:914		end for*/
        // SubProg keys pc: 101 op: ENDFOR_INT_UP1 (54)
        _i_12752 = _i_12752 + 1;
        goto L1; // [101] 50
L2: // addr: 106 pc: 101 sub: 12739 op: 54
        ;
    }
    // SubProg keys pc: 106 op: STARTLINE (58)

    /** map.e:915		if sorted_result then*/
    // SubProg keys pc: 108 op: IF (20)
    if (_sorted_result_12742 == 0)
    {
        goto L5; // [108] 123
    }
    else{
    }
    // SubProg keys pc: 111 op: STARTLINE (58)

    /** map.e:916			return stdsort:sort( keys )*/
    // SubProg keys pc: 113 op: PROC (27)
    RefDS(_keys_12746);
    _7100 = _24sort(_keys_12746, 1);
    // SubProg keys pc: 118 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_12741
    DeRef(_the_map_p_12741);

// block var sorted_result_12742

// block var slots_12743
    DeRef(_slots_12743);

// block var keys_12746
    DeRefDS(_keys_12746);

// block var kx_12750
    return _7100;
    // SubProg keys pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 12739 op: 159
    // SubProg keys pc: 123 op: STARTLINE (58)

    /** map.e:918		return keys*/
    // SubProg keys pc: 125 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_12741
    DeRef(_the_map_p_12741);

// block var sorted_result_12742

// block var slots_12743
    DeRef(_slots_12743);

// block var kx_12750
    DeRef(_7100);
    _7100 = NOVALUE;
    return _keys_12746;
    // SubProg keys pc: 129 op: BADRETURNF (43)
    ;
}


object _28pairs(object _the_map_12817, object _sorted_result_12818)
{
    object _slots_12819 = NOVALUE;
    object _pairs_12822 = NOVALUE;
    object _px_12826 = NOVALUE;
    object _7150 = NOVALUE; // 12844 7150
// skipping _7149  name type: 0
    object _7148 = NOVALUE; // 12841 7148
    object _7147 = NOVALUE; // 12839 7147
    object _7146 = NOVALUE; // 12838 7146
    object _7145 = NOVALUE; // 12837 7145
    object _7144 = NOVALUE; // 12836 7144
    object _7143 = NOVALUE; // 12835 7143
// skipping _7142  name type: 0
// skipping _7141  name type: 0
    object _7140 = NOVALUE; // 12832 7140
    object _7139 = NOVALUE; // 12831 7139
    object _7138 = NOVALUE; // 12829 7138
// skipping _7137  name type: 0
    object _7136 = NOVALUE; // 12824 7136
    object _7135 = NOVALUE; // 12823 7135
// skipping _7134  name type: 0
    object _7133 = NOVALUE; // 12820 7133
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pairs pc: 1 op: INTEGER_CHECK (96)
    // SubProg pairs pc: 3 op: STARTLINE (58)

    /** map.e:1047		sequence slots = eumem:ram_space[the_map][MAP_SLOTS]*/
    // SubProg pairs pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_12817)){
        _7133 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12817)->dbl));
    }
    else{
        _7133 = (object)*(((s1_ptr)_2)->base + _the_map_12817);
    }
    // SubProg pairs pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12819);
    _2 = (object)SEQ_PTR(_7133);
    _slots_12819 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12819);
    _7133 = NOVALUE;
    // SubProg pairs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg pairs pc: 17 op: STARTLINE (58)

    /** map.e:1048		sequence pairs = repeat( 0, eumem:ram_space[the_map][MAP_SIZE] )*/
    // SubProg pairs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_29ram_space_11382);
    if (!IS_ATOM_INT(_the_map_12817)){
        _7135 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12817)->dbl));
    }
    else{
        _7135 = (object)*(((s1_ptr)_2)->base + _the_map_12817);
    }
    // SubProg pairs pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7135);
    _7136 = (object)*(((s1_ptr)_2)->base + 1);
    _7135 = NOVALUE;
    // SubProg pairs pc: 29 op: REPEAT (32)
    DeRef(_pairs_12822);
    _pairs_12822 = Repeat(0, _7136);
    _7136 = NOVALUE;
    // SubProg pairs pc: 33 op: STARTLINE (58)

    /** map.e:1049		integer px = 0*/
    // SubProg pairs pc: 35 op: ASSIGN_I (113)
    _px_12826 = 0;
    // SubProg pairs pc: 38 op: STARTLINE (58)

    /** map.e:1050		for i = 1 to length( slots ) do*/
    // SubProg pairs pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12819)){
            _7138 = SEQ_PTR(_slots_12819)->length;
    }
    else {
        _7138 = 1;
    }
    // SubProg pairs pc: 43 op: FOR_I (125)
    {
        object _i_12828;
        _i_12828 = 1;
L1: // addr: 50 pc: 43 sub: 12815 op: 125
        if (_i_12828 > _7138){
            goto L2; // [43] 118
        }
        // SubProg pairs pc: 50 op: STARTLINE (58)

        /** map.e:1051			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg pairs pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12819);
        _7139 = (object)*(((s1_ptr)_2)->base + _i_12828);
        // SubProg pairs pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7139);
        _7140 = (object)*(((s1_ptr)_2)->base + 1);
        _7139 = NOVALUE;
        // SubProg pairs pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _7140, 0)){
            _7140 = NOVALUE;
            goto L3; // [60] 111
        }
        _7140 = NOVALUE;
        // SubProg pairs pc: 64 op: STARTLINE (58)

        /** map.e:1052				px += 1*/
        // SubProg pairs pc: 66 op: PLUS1_I (117)
        _px_12826 = _px_12826 + 1;
        // SubProg pairs pc: 70 op: STARTLINE (58)

        /** map.e:1053				pairs[px] = { slots[i][SLOT_KEY], slots[i][SLOT_VALUE] }*/
        // SubProg pairs pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12819);
        _7143 = (object)*(((s1_ptr)_2)->base + _i_12828);
        // SubProg pairs pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7143);
        _7144 = (object)*(((s1_ptr)_2)->base + 2);
        _7143 = NOVALUE;
        // SubProg pairs pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12819);
        _7145 = (object)*(((s1_ptr)_2)->base + _i_12828);
        // SubProg pairs pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7145);
        _7146 = (object)*(((s1_ptr)_2)->base + 3);
        _7145 = NOVALUE;
        // SubProg pairs pc: 88 op: RIGHT_BRACE_2 (85)
        Ref(_7146);
        Ref(_7144);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _7144;
        ((intptr_t *)_2)[2] = _7146;
        _7147 = MAKE_SEQ(_1);
        _7146 = NOVALUE;
        _7144 = NOVALUE;
        // SubProg pairs pc: 92 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pairs_12822);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pairs_12822 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _px_12826);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7147;
        if( _1 != _7147 ){
            DeRef(_1);
        }
        _7147 = NOVALUE;
        // SubProg pairs pc: 96 op: STARTLINE (58)

        /** map.e:1054				if px = length( pairs ) then*/
        // SubProg pairs pc: 98 op: LENGTH (42)
        if (IS_SEQUENCE(_pairs_12822)){
                _7148 = SEQ_PTR(_pairs_12822)->length;
        }
        else {
            _7148 = 1;
        }
        // SubProg pairs pc: 101 op: EQUALS_IFW_I (121)
        if (_px_12826 != _7148)
        goto L4; // [101] 110
        // SubProg pairs pc: 105 op: STARTLINE (58)

        /** map.e:1055					exit*/
        // SubProg pairs pc: 107 op: EXIT (61)
        goto L2; // [107] 118
        // SubProg pairs pc: 109 op: NOP1 (159)
L4: // addr: 110 pc: 109 sub: 12815 op: 159
        // SubProg pairs pc: 110 op: NOP1 (159)
L3: // addr: 111 pc: 110 sub: 12815 op: 159
        // SubProg pairs pc: 111 op: STARTLINE (58)

        /** map.e:1058		end for*/
        // SubProg pairs pc: 113 op: ENDFOR_INT_UP1 (54)
        _i_12828 = _i_12828 + 1;
        goto L1; // [113] 50
L2: // addr: 118 pc: 113 sub: 12815 op: 54
        ;
    }
    // SubProg pairs pc: 118 op: STARTLINE (58)

    /** map.e:1059		if sorted_result then*/
    // SubProg pairs pc: 120 op: IF (20)
    if (_sorted_result_12818 == 0)
    {
        goto L5; // [120] 135
    }
    else{
    }
    // SubProg pairs pc: 123 op: STARTLINE (58)

    /** map.e:1060			return stdsort:sort( pairs )*/
    // SubProg pairs pc: 125 op: PROC (27)
    RefDS(_pairs_12822);
    _7150 = _24sort(_pairs_12822, 1);
    // SubProg pairs pc: 130 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_12817
    DeRef(_the_map_12817);

// block var sorted_result_12818

// block var slots_12819
    DeRef(_slots_12819);

// block var pairs_12822
    DeRefDS(_pairs_12822);

// block var px_12826
    return _7150;
    // SubProg pairs pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 12815 op: 159
    // SubProg pairs pc: 135 op: STARTLINE (58)

    /** map.e:1062		return pairs*/
    // SubProg pairs pc: 137 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_12817
    DeRef(_the_map_12817);

// block var sorted_result_12818

// block var slots_12819
    DeRef(_slots_12819);

// block var px_12826
    DeRef(_7150);
    _7150 = NOVALUE;
    return _pairs_12822;
    // SubProg pairs pc: 141 op: BADRETURNF (43)
    ;
}



// 0x6FB32C56
