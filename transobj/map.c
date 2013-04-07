// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _29map(object _m_12222)
{
// skipping _6849  name type: 0
    object _6848 = NOVALUE; // 12248 6848
    object _6847 = NOVALUE; // 12247 6847
    object _6846 = NOVALUE; // 12246 6846
// skipping _6845  name type: 0
    object _6844 = NOVALUE; // 12243 6844
    object _6843 = NOVALUE; // 12242 6843
    object _6842 = NOVALUE; // 12241 6842
// skipping _6841  name type: 0
    object _6840 = NOVALUE; // 12238 6840
    object _6839 = NOVALUE; // 12237 6839
    object _6838 = NOVALUE; // 12236 6838
// skipping _6837  name type: 0
    object _6836 = NOVALUE; // 12233 6836
    object _6835 = NOVALUE; // 12232 6835
// skipping _6834  name type: 0
// skipping _6833  name type: 0
    object _6832 = NOVALUE; // 12227 6832
// skipping _6831  name type: 0
    object _6830 = NOVALUE; // 12224 6830
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg map pc: 1 op: STARTLINE (58)

    /** map.e:126		if not atom( m ) then*/
    // SubProg map pc: 3 op: IS_AN_ATOM (67)
    _6830 = IS_ATOM(_m_12222);
    // SubProg map pc: 6 op: NOT_IFW (108)
    if (_6830 != 0)
    goto L1; // [6] 16
    _6830 = NOVALUE;
    // SubProg map pc: 9 op: STARTLINE (58)

    /** map.e:127			return 0*/
    // SubProg map pc: 11 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    return 0;
    // SubProg map pc: 15 op: NOP1 (159)
L1: // addr: 16 pc: 15 sub: 12220 op: 159
    // SubProg map pc: 16 op: STARTLINE (58)

    /** map.e:129		if length( eumem:ram_space ) < m then*/
    // SubProg map pc: 18 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 20 op: LENGTH (42)
    if (IS_SEQUENCE(_30ram_space_11312)){
            _6832 = SEQ_PTR(_30ram_space_11312)->length;
    }
    else {
        _6832 = 1;
    }
    // SubProg map pc: 23 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _6832, _m_12222)){
        _6832 = NOVALUE;
        goto L2; // [23] 34
    }
    _6832 = NOVALUE;
    // SubProg map pc: 27 op: STARTLINE (58)

    /** map.e:130			return 0*/
    // SubProg map pc: 29 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    return 0;
    // SubProg map pc: 33 op: NOP1 (159)
L2: // addr: 34 pc: 33 sub: 12220 op: 159
    // SubProg map pc: 34 op: STARTLINE (58)

    /** map.e:132		if m < 1 then*/
    // SubProg map pc: 36 op: LESS_IFW (102)
    if (binary_op_a(GREATEREQ, _m_12222, 1)){
        goto L3; // [36] 47
    }
    // SubProg map pc: 40 op: STARTLINE (58)

    /** map.e:133			return 0*/
    // SubProg map pc: 42 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    return 0;
    // SubProg map pc: 46 op: NOP1 (159)
L3: // addr: 47 pc: 46 sub: 12220 op: 159
    // SubProg map pc: 47 op: STARTLINE (58)

    /** map.e:135		if length( eumem:ram_space[m] ) != MAP_MAX then*/
    // SubProg map pc: 49 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 51 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_m_12222)){
        _6835 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12222)->dbl));
    }
    else{
        _6835 = (object)*(((s1_ptr)_2)->base + _m_12222);
    }
    // SubProg map pc: 55 op: LENGTH (42)
    if (IS_SEQUENCE(_6835)){
            _6836 = SEQ_PTR(_6835)->length;
    }
    else {
        _6836 = 1;
    }
    _6835 = NOVALUE;
    // SubProg map pc: 58 op: NOTEQ_IFW_I (122)
    if (_6836 == 3)
    goto L4; // [58] 69
    // SubProg map pc: 62 op: STARTLINE (58)

    /** map.e:136			return 0*/
    // SubProg map pc: 64 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    _6835 = NOVALUE;
    return 0;
    // SubProg map pc: 68 op: NOP1 (159)
L4: // addr: 69 pc: 68 sub: 12220 op: 159
    // SubProg map pc: 69 op: STARTLINE (58)

    /** map.e:138		if not atom( eumem:ram_space[m][MAP_SIZE] ) then*/
    // SubProg map pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 73 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_m_12222)){
        _6838 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12222)->dbl));
    }
    else{
        _6838 = (object)*(((s1_ptr)_2)->base + _m_12222);
    }
    // SubProg map pc: 77 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6838);
    _6839 = (object)*(((s1_ptr)_2)->base + 1);
    _6838 = NOVALUE;
    // SubProg map pc: 81 op: IS_AN_ATOM (67)
    _6840 = IS_ATOM(_6839);
    _6839 = NOVALUE;
    // SubProg map pc: 84 op: NOT_IFW (108)
    if (_6840 != 0)
    goto L5; // [84] 94
    _6840 = NOVALUE;
    // SubProg map pc: 87 op: STARTLINE (58)

    /** map.e:139			return 0*/
    // SubProg map pc: 89 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    _6835 = NOVALUE;
    return 0;
    // SubProg map pc: 93 op: NOP1 (159)
L5: // addr: 94 pc: 93 sub: 12220 op: 159
    // SubProg map pc: 94 op: STARTLINE (58)

    /** map.e:141		if not sequence( eumem:ram_space[m][MAP_SLOTS] ) then*/
    // SubProg map pc: 96 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 98 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_m_12222)){
        _6842 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12222)->dbl));
    }
    else{
        _6842 = (object)*(((s1_ptr)_2)->base + _m_12222);
    }
    // SubProg map pc: 102 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6842);
    _6843 = (object)*(((s1_ptr)_2)->base + 2);
    _6842 = NOVALUE;
    // SubProg map pc: 106 op: IS_A_SEQUENCE (68)
    _6844 = IS_SEQUENCE(_6843);
    _6843 = NOVALUE;
    // SubProg map pc: 109 op: NOT_IFW (108)
    if (_6844 != 0)
    goto L6; // [109] 119
    _6844 = NOVALUE;
    // SubProg map pc: 112 op: STARTLINE (58)

    /** map.e:142			return 0*/
    // SubProg map pc: 114 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    _6835 = NOVALUE;
    return 0;
    // SubProg map pc: 118 op: NOP1 (159)
L6: // addr: 119 pc: 118 sub: 12220 op: 159
    // SubProg map pc: 119 op: STARTLINE (58)

    /** map.e:144		if not atom( eumem:ram_space[m][MAP_MAX] ) then*/
    // SubProg map pc: 121 op: GLOBAL_INIT_CHECK (109)
    // SubProg map pc: 123 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_m_12222)){
        _6846 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12222)->dbl));
    }
    else{
        _6846 = (object)*(((s1_ptr)_2)->base + _m_12222);
    }
    // SubProg map pc: 127 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6846);
    _6847 = (object)*(((s1_ptr)_2)->base + 3);
    _6846 = NOVALUE;
    // SubProg map pc: 131 op: IS_AN_ATOM (67)
    _6848 = IS_ATOM(_6847);
    _6847 = NOVALUE;
    // SubProg map pc: 134 op: NOT_IFW (108)
    if (_6848 != 0)
    goto L7; // [134] 144
    _6848 = NOVALUE;
    // SubProg map pc: 137 op: STARTLINE (58)

    /** map.e:145			return 0*/
    // SubProg map pc: 139 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    _6835 = NOVALUE;
    return 0;
    // SubProg map pc: 143 op: NOP1 (159)
L7: // addr: 144 pc: 143 sub: 12220 op: 159
    // SubProg map pc: 144 op: STARTLINE (58)

    /** map.e:147		return 1*/
    // SubProg map pc: 146 op: RETURNF (28)

// Exiting block BLOCK: map

// block var m_12222
    DeRef(_m_12222);
    _6835 = NOVALUE;
    return 1;
    // SubProg map pc: 150 op: BADRETURNF (43)
    ;
}


object _29new_map_seq(object _size_12253)
{
    object _slots_12254 = NOVALUE;
    object _6859 = NOVALUE; // 12267 6859
    object _6858 = NOVALUE; // 12266 6858
    object _6857 = NOVALUE; // 12265 6857
    object _6856 = NOVALUE; // 12264 6856
// skipping _6855  name type: 0
// skipping _6854  name type: 0
// skipping _6853  name type: 0
    object _6852 = NOVALUE; // 12259 6852
// skipping _6851  name type: 0
// skipping _6850  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_map_seq pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_map_seq pc: 3 op: STARTLINE (58)

    /** map.e:155		integer slots = DEFAULT_SIZE * 2*/
    // SubProg new_map_seq pc: 5 op: PLUS_I (115)
    _slots_12254 = 16;
    // SubProg new_map_seq pc: 9 op: STARTLINE (58)

    /** map.e:156		if size <= DEFAULT_SIZE then*/
    // SubProg new_map_seq pc: 11 op: LESSEQ_IFW_I (123)
    if (_size_12253 > 8)
    goto L1; // [11] 23
    // SubProg new_map_seq pc: 15 op: STARTLINE (58)

    /** map.e:157			size = DEFAULT_SIZE*/
    // SubProg new_map_seq pc: 17 op: ASSIGN_I (113)
    _size_12253 = 8;
    // SubProg new_map_seq pc: 20 op: ELSE (23)
    goto L2; // [20] 55
    // SubProg new_map_seq pc: 22 op: NOP1 (159)
L1: // addr: 23 pc: 22 sub: 12251 op: 159
    // SubProg new_map_seq pc: 23 op: STARTLINE (58)

    /** map.e:159			size = floor( size * 1.5 )*/
    // SubProg new_map_seq pc: 25 op: MULTIPLY (13)
    _6852 = NewDouble((eudouble)_size_12253 * DBL_PTR(_3084)->dbl);
    // SubProg new_map_seq pc: 29 op: FLOOR (83)
    _size_12253 = unary_op(FLOOR, _6852);
    DeRefDS(_6852);
    _6852 = NOVALUE;
    // SubProg new_map_seq pc: 32 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_size_12253)) {
        _1 = (object)(DBL_PTR(_size_12253)->dbl);
        DeRefDS(_size_12253);
        _size_12253 = _1;
    }
    // SubProg new_map_seq pc: 34 op: STARTLINE (58)

    /** map.e:160			while slots < size do*/
    // SubProg new_map_seq pc: 36 op: NOP2 (110)
    // SubProg new_map_seq pc: 38 op: NOPWHILE (158)
L3: // addr: 39 pc: 38 sub: 12251 op: 158
    // SubProg new_map_seq pc: 39 op: LESS_IFW_I (119)
    if (_slots_12254 >= _size_12253)
    goto L4; // [39] 54
    // SubProg new_map_seq pc: 43 op: STARTLINE (58)

    /** map.e:162				slots *= 2*/
    // SubProg new_map_seq pc: 45 op: PLUS_I (115)
    _slots_12254 = _slots_12254 + _slots_12254;
    // SubProg new_map_seq pc: 49 op: STARTLINE (58)

    /** map.e:163			end while*/
    // SubProg new_map_seq pc: 51 op: ENDWHILE (22)
    goto L3; // [51] 39
    // SubProg new_map_seq pc: 53 op: NOP1 (159)
L4: // addr: 54 pc: 53 sub: 12251 op: 159
    // SubProg new_map_seq pc: 54 op: NOP1 (159)
L2: // addr: 55 pc: 54 sub: 12251 op: 159
    // SubProg new_map_seq pc: 55 op: STARTLINE (58)

    /** map.e:165		return { 0, repeat( EMPTY_SLOT, slots ), floor( size * 2/3 ) }*/
    // SubProg new_map_seq pc: 57 op: GLOBAL_INIT_CHECK (109)
    // SubProg new_map_seq pc: 59 op: REPEAT (32)
    _6856 = Repeat(_29EMPTY_SLOT_12210, _slots_12254);
    // SubProg new_map_seq pc: 63 op: PLUS (11)
    _6857 = _size_12253 + _size_12253;
    if ((object)((uintptr_t)_6857 + (uintptr_t)HIGH_BITS) >= 0){
        _6857 = NewDouble((eudouble)_6857);
    }
    // SubProg new_map_seq pc: 67 op: FLOOR_DIV (63)
    if (IS_ATOM_INT(_6857)) {
        if (3 > 0 && _6857 >= 0) {
            _6858 = _6857 / 3;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_6857 / (eudouble)3);
            if (_6857 != MININT)
            _6858 = (object)temp_dbl;
            else
            _6858 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _6857, 3);
        _6858 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    DeRef(_6857);
    _6857 = NOVALUE;
    // SubProg new_map_seq pc: 71 op: RIGHT_BRACE_N (31)
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = _6856;
    ((intptr_t*)_2)[3] = _6858;
    _6859 = MAKE_SEQ(_1);
    _6858 = NOVALUE;
    _6856 = NOVALUE;
    // SubProg new_map_seq pc: 77 op: RETURNF (28)

// Exiting block BLOCK: new_map_seq

// block var size_12253

// block var slots_12254
    return _6859;
    // SubProg new_map_seq pc: 81 op: BADRETURNF (43)
    ;
}


object _29lookup(object _key_12296, object _hashval_12297, object _slots_12299)
{
    object _mask_12300 = NOVALUE;
    object _index_12303 = NOVALUE;
    object _index_hash_12306 = NOVALUE;
    object _slot_12307 = NOVALUE;
    object _perturb_12308 = NOVALUE;
    object _this_hash_12309 = NOVALUE;
    object _this_key_12310 = NOVALUE;
    object _looks_12311 = NOVALUE;
    object _removed_slot_12312 = NOVALUE;
// skipping _6891  name type: 0
// skipping _6890  name type: 0
// skipping _6889  name type: 0
// skipping _6888  name type: 0
    object _6887 = NOVALUE; // 12331 6887
// skipping _6886  name type: 0
// skipping _6885  name type: 0
// skipping _6884  name type: 0
// skipping _6883  name type: 0
// skipping _6882  name type: 0
// skipping _6881  name type: 0
// skipping _6880  name type: 0
// skipping _6879  name type: 0
// skipping _6878  name type: 0
// skipping _6877  name type: 0
// skipping _6876  name type: 0
    object _6875 = NOVALUE; // 12317 6875
    object _6874 = NOVALUE; // 12316 6874
    object _6873 = NOVALUE; // 12315 6873
    object _6872 = NOVALUE; // 12314 6872
// skipping _6871  name type: 0
    object _6870 = NOVALUE; // 12304 6870
// skipping _6869  name type: 0
    object _6868 = NOVALUE; // 12301 6868
// skipping _6867  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg lookup pc: 1 op: INTEGER_CHECK (96)
    // SubProg lookup pc: 3 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 5 op: STARTLINE (58)

    /** map.e:275		integer mask = length( slots ) - 1*/
    // SubProg lookup pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12299)){
            _6868 = SEQ_PTR(_slots_12299)->length;
    }
    else {
        _6868 = 1;
    }
    // SubProg lookup pc: 10 op: MINUS_I (116)
    _mask_12300 = _6868 - 1;
    _6868 = NOVALUE;
    // SubProg lookup pc: 14 op: STARTLINE (58)

    /** map.e:276		integer index = and_bits( hashval, mask ) + 1*/
    // SubProg lookup pc: 16 op: AND_BITS (56)
    {uintptr_t tu;
         tu = (uintptr_t)_hashval_12297 & (uintptr_t)_mask_12300;
         _6870 = MAKE_UINT(tu);
    }
    // SubProg lookup pc: 20 op: PLUS1_I (117)
    if (IS_ATOM_INT(_6870)) {
        _index_12303 = _6870 + 1;
    }
    else
    { // coercing _index_12303 to an integer 1
        _index_12303 = 1+(object)(DBL_PTR(_6870)->dbl);
        if( !IS_ATOM_INT(_index_12303) ){
            _index_12303 = (object)DBL_PTR(_index_12303)->dbl;
        }
    }
    DeRef(_6870);
    _6870 = NOVALUE;
    // SubProg lookup pc: 24 op: STARTLINE (58)

    /** map.e:277		ifdef BITS64 then*/
    // SubProg lookup pc: 26 op: STARTLINE (58)

    /** map.e:280			atom index_hash = index*/
    // SubProg lookup pc: 28 op: ASSIGN (18)
    DeRef(_index_hash_12306);
    _index_hash_12306 = _index_12303;
    // SubProg lookup pc: 31 op: STARTLINE (58)

    /** map.e:282		sequence slot*/
    // SubProg lookup pc: 33 op: STARTLINE (58)

    /** map.e:284		integer perturb = hashval*/
    // SubProg lookup pc: 35 op: ASSIGN_I (113)
    _perturb_12308 = _hashval_12297;
    // SubProg lookup pc: 38 op: STARTLINE (58)

    /** map.e:285		integer this_hash*/
    // SubProg lookup pc: 40 op: STARTLINE (58)

    /** map.e:286		object this_key*/
    // SubProg lookup pc: 42 op: STARTLINE (58)

    /** map.e:287		integer looks = 0*/
    // SubProg lookup pc: 44 op: ASSIGN_I (113)
    _looks_12311 = 0;
    // SubProg lookup pc: 47 op: STARTLINE (58)

    /** map.e:288		integer removed_slot = 0*/
    // SubProg lookup pc: 49 op: ASSIGN_I (113)
    _removed_slot_12312 = 0;
    // SubProg lookup pc: 52 op: STARTLINE (58)

    /** map.e:289		while this_hash != hashval or not equal( this_key, key ) with entry do*/
    // SubProg lookup pc: 54 op: ELSE (23)
    goto L1; // [54] 140
    // SubProg lookup pc: 56 op: NOPWHILE (158)
L2: // addr: 57 pc: 56 sub: 12294 op: 158
    // SubProg lookup pc: 57 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 59 op: NOTEQ (4)
    _6872 = (_this_hash_12309 != _hashval_12297);
    // SubProg lookup pc: 63 op: SC1_OR (143)
    if (_6872 != 0) {
        DeRef(_6873);
        _6873 = 1;
        goto L3; // [63] 80
    }
    // SubProg lookup pc: 67 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 69 op: EQUAL (153)
    if (_this_key_12310 == _key_12296)
    _6874 = 1;
    else if (IS_ATOM_INT(_this_key_12310) && IS_ATOM_INT(_key_12296))
    _6874 = 0;
    else
    _6874 = (compare(_this_key_12310, _key_12296) == 0);
    // SubProg lookup pc: 73 op: NOT (7)
    _6875 = (_6874 == 0);
    _6874 = NOVALUE;
    // SubProg lookup pc: 76 op: SC2_OR (144)
    _6873 = (_6875 != 0);
    // SubProg lookup pc: 79 op: NOP1 (159)
L3: // addr: 80 pc: 79 sub: 12294 op: 159
    // SubProg lookup pc: 80 op: WHILE (47)
    if (_6873 == 0)
    {
        _6873 = NOVALUE;
        goto L4; // [80] 217
    }
    else{
        _6873 = NOVALUE;
    }
    // SubProg lookup pc: 83 op: STARTLINE (58)

    /** map.e:290			index_hash *= 4*/
    // SubProg lookup pc: 85 op: PRIVATE_INIT_CHECK (30)
    // SubProg lookup pc: 87 op: MULTIPLY (13)
    _0 = _index_hash_12306;
    if (IS_ATOM_INT(_index_hash_12306)) {
        if (_index_hash_12306 == (short)_index_hash_12306){
            _index_hash_12306 = _index_hash_12306 * 4;
        }
        else{
            _index_hash_12306 = NewDouble(_index_hash_12306 * (eudouble)4);
        }
    }
    else {
        _index_hash_12306 = NewDouble(DBL_PTR(_index_hash_12306)->dbl * (eudouble)4);
    }
    DeRef(_0);
    // SubProg lookup pc: 91 op: STARTLINE (58)

    /** map.e:291			index_hash += index*/
    // SubProg lookup pc: 93 op: PLUS (11)
    _0 = _index_hash_12306;
    if (IS_ATOM_INT(_index_hash_12306)) {
        _index_hash_12306 = _index_hash_12306 + _index_12303;
        if ((object)((uintptr_t)_index_hash_12306 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12306 = NewDouble((eudouble)_index_hash_12306);
        }
    }
    else {
        _index_hash_12306 = NewDouble(DBL_PTR(_index_hash_12306)->dbl + (eudouble)_index_12303);
    }
    DeRef(_0);
    // SubProg lookup pc: 97 op: STARTLINE (58)

    /** map.e:292			index_hash += perturb*/
    // SubProg lookup pc: 99 op: PLUS (11)
    _0 = _index_hash_12306;
    if (IS_ATOM_INT(_index_hash_12306)) {
        _index_hash_12306 = _index_hash_12306 + _perturb_12308;
        if ((object)((uintptr_t)_index_hash_12306 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12306 = NewDouble((eudouble)_index_hash_12306);
        }
    }
    else {
        _index_hash_12306 = NewDouble(DBL_PTR(_index_hash_12306)->dbl + (eudouble)_perturb_12308);
    }
    DeRef(_0);
    // SubProg lookup pc: 103 op: STARTLINE (58)

    /** map.e:293			index_hash += 1*/
    // SubProg lookup pc: 105 op: PLUS1 (93)
    _0 = _index_hash_12306;
    if (IS_ATOM_INT(_index_hash_12306)) {
        _index_hash_12306 = _index_hash_12306 + 1;
        if (_index_hash_12306 > MAXINT){
            _index_hash_12306 = NewDouble((eudouble)_index_hash_12306);
        }
    }
    else
    _index_hash_12306 = binary_op(PLUS, 1, _index_hash_12306);
    DeRef(_0);
    // SubProg lookup pc: 109 op: STARTLINE (58)

    /** map.e:294			index_hash = and_bits( 0xffff_ffff, index_hash )*/
    // SubProg lookup pc: 111 op: AND_BITS (56)
    _0 = _index_hash_12306;
    if (IS_ATOM_INT(_index_hash_12306)) {
        temp_d.dbl = (eudouble)_index_hash_12306;
        _index_hash_12306 = Dand_bits(DBL_PTR(_406), &temp_d);
    }
    else
    _index_hash_12306 = Dand_bits(DBL_PTR(_406), DBL_PTR(_index_hash_12306));
    DeRef(_0);
    // SubProg lookup pc: 115 op: STARTLINE (58)

    /** map.e:295			index = and_bits( mask, index_hash )*/
    // SubProg lookup pc: 117 op: AND_BITS (56)
    if (IS_ATOM_INT(_index_hash_12306)) {
        {uintptr_t tu;
             tu = (uintptr_t)_mask_12300 & (uintptr_t)_index_hash_12306;
             _index_12303 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_mask_12300;
        _index_12303 = Dand_bits(&temp_d, DBL_PTR(_index_hash_12306));
    }
    // SubProg lookup pc: 121 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12303)) {
        _1 = (object)(DBL_PTR(_index_12303)->dbl);
        DeRefDS(_index_12303);
        _index_12303 = _1;
    }
    // SubProg lookup pc: 123 op: STARTLINE (58)

    /** map.e:296			index += 1*/
    // SubProg lookup pc: 125 op: PLUS1_I (117)
    _index_12303 = _index_12303 + 1;
    // SubProg lookup pc: 129 op: STARTLINE (58)

    /** map.e:297			perturb = floor( perturb / 32 )*/
    // SubProg lookup pc: 131 op: FLOOR_DIV (63)
    if (32 > 0 && _perturb_12308 >= 0) {
        _perturb_12308 = _perturb_12308 / 32;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_perturb_12308 / (eudouble)32);
        _perturb_12308 = (object)temp_dbl;
    }
    // SubProg lookup pc: 137 op: STARTLINE (58)

    /** map.e:298		entry*/
    // SubProg lookup pc: 139 op: NOP1 (159)
L1: // addr: 140 pc: 139 sub: 12294 op: 159
    // SubProg lookup pc: 140 op: STARTLINE (58)

    /** map.e:299			slot = slots[index]*/
    // SubProg lookup pc: 142 op: RHS_SUBS (25)
    DeRef(_slot_12307);
    _2 = (object)SEQ_PTR(_slots_12299);
    _slot_12307 = (object)*(((s1_ptr)_2)->base + _index_12303);
    Ref(_slot_12307);
    // SubProg lookup pc: 146 op: SEQUENCE_CHECK (97)
    // SubProg lookup pc: 148 op: STARTLINE (58)

    /** map.e:300			this_hash = slot[SLOT_HASH]*/
    // SubProg lookup pc: 150 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_slot_12307);
    _this_hash_12309 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_this_hash_12309))
    _this_hash_12309 = (object)DBL_PTR(_this_hash_12309)->dbl;
    // SubProg lookup pc: 154 op: STARTLINE (58)

    /** map.e:301			if this_hash = EMPTY then*/
    // SubProg lookup pc: 156 op: EQUALS_IFW_I (121)
    if (_this_hash_12309 != -2)
    goto L5; // [156] 169
    // SubProg lookup pc: 160 op: STARTLINE (58)

    /** map.e:302				return index*/
    // SubProg lookup pc: 162 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12296
    DeRef(_key_12296);

// block var hashval_12297

// block var slots_12299
    DeRefDS(_slots_12299);

// block var mask_12300

// block var index_hash_12306
    DeRef(_index_hash_12306);

// block var slot_12307
    DeRefDS(_slot_12307);

// block var perturb_12308

// block var this_hash_12309

// block var this_key_12310
    DeRef(_this_key_12310);

// block var looks_12311

// block var removed_slot_12312
    DeRef(_6872);
    _6872 = NOVALUE;
    DeRef(_6875);
    _6875 = NOVALUE;
    return _index_12303;
    // SubProg lookup pc: 166 op: ELSE (23)
    goto L6; // [166] 200
    // SubProg lookup pc: 168 op: NOP1 (159)
L5: // addr: 169 pc: 168 sub: 12294 op: 159
    // SubProg lookup pc: 169 op: STARTLINE (58)

    /** map.e:303			elsif looks > length( slots ) then*/
    // SubProg lookup pc: 171 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12299)){
            _6887 = SEQ_PTR(_slots_12299)->length;
    }
    else {
        _6887 = 1;
    }
    // SubProg lookup pc: 174 op: GREATER_IFW_I (124)
    if (_looks_12311 <= _6887)
    goto L7; // [174] 187
    // SubProg lookup pc: 178 op: STARTLINE (58)

    /** map.e:304				return removed_slot*/
    // SubProg lookup pc: 180 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12296
    DeRef(_key_12296);

// block var hashval_12297

// block var slots_12299
    DeRefDS(_slots_12299);

// block var mask_12300

// block var index_12303

// block var index_hash_12306
    DeRef(_index_hash_12306);

// block var slot_12307
    DeRef(_slot_12307);

// block var perturb_12308

// block var this_hash_12309

// block var this_key_12310
    DeRef(_this_key_12310);

// block var looks_12311
    DeRef(_6872);
    _6872 = NOVALUE;
    DeRef(_6875);
    _6875 = NOVALUE;
    return _removed_slot_12312;
    // SubProg lookup pc: 184 op: ELSE (23)
    goto L6; // [184] 200
    // SubProg lookup pc: 186 op: NOP1 (159)
L7: // addr: 187 pc: 186 sub: 12294 op: 159
    // SubProg lookup pc: 187 op: STARTLINE (58)

    /** map.e:305			elsif this_hash = REMOVED then*/
    // SubProg lookup pc: 189 op: EQUALS_IFW_I (121)
    if (_this_hash_12309 != -1)
    goto L8; // [189] 199
    // SubProg lookup pc: 193 op: STARTLINE (58)

    /** map.e:306				removed_slot = index*/
    // SubProg lookup pc: 195 op: ASSIGN_I (113)
    _removed_slot_12312 = _index_12303;
    // SubProg lookup pc: 198 op: NOP1 (159)
L8: // addr: 199 pc: 198 sub: 12294 op: 159
    // SubProg lookup pc: 199 op: NOP1 (159)
L6: // addr: 200 pc: 199 sub: 12294 op: 159
    // SubProg lookup pc: 200 op: STARTLINE (58)

    /** map.e:308			this_key = slot[SLOT_KEY]*/
    // SubProg lookup pc: 202 op: RHS_SUBS (25)
    DeRef(_this_key_12310);
    _2 = (object)SEQ_PTR(_slot_12307);
    _this_key_12310 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_this_key_12310);
    // SubProg lookup pc: 206 op: STARTLINE (58)

    /** map.e:309			looks += 1*/
    // SubProg lookup pc: 208 op: PLUS1_I (117)
    _looks_12311 = _looks_12311 + 1;
    // SubProg lookup pc: 212 op: STARTLINE (58)

    /** map.e:310		end while*/
    // SubProg lookup pc: 214 op: ENDWHILE (22)
    goto L2; // [214] 57
    // SubProg lookup pc: 216 op: NOP1 (159)
L4: // addr: 217 pc: 216 sub: 12294 op: 159
    // SubProg lookup pc: 217 op: STARTLINE (58)

    /** map.e:311		return index*/
    // SubProg lookup pc: 219 op: RETURNF (28)

// Exiting block BLOCK: lookup

// block var key_12296
    DeRef(_key_12296);

// block var hashval_12297

// block var slots_12299
    DeRefDS(_slots_12299);

// block var mask_12300

// block var index_hash_12306
    DeRef(_index_hash_12306);

// block var slot_12307
    DeRef(_slot_12307);

// block var perturb_12308

// block var this_hash_12309

// block var this_key_12310
    DeRef(_this_key_12310);

// block var looks_12311

// block var removed_slot_12312
    DeRef(_6872);
    _6872 = NOVALUE;
    DeRef(_6875);
    _6875 = NOVALUE;
    return _index_12303;
    // SubProg lookup pc: 223 op: BADRETURNF (43)
    ;
}


object _29rehash_seq(object _old_map_12339, object _size_12340)
{
    object _old_size_12341 = NOVALUE;
    object _index_12343 = NOVALUE;
    object _new_map_12356 = NOVALUE;
    object _slots_12358 = NOVALUE;
    object _old_slots_12361 = NOVALUE;
    object _old_slot_12366 = NOVALUE;
    object _old_hash_12368 = NOVALUE;
// skipping _6909  name type: 0
    object _6908 = NOVALUE; // 12372 6908
// skipping _6907  name type: 0
// skipping _6906  name type: 0
// skipping _6905  name type: 0
    object _6904 = NOVALUE; // 12365 6904
// skipping _6903  name type: 0
    object _6902 = NOVALUE; // 12360 6902
// skipping _6901  name type: 0
// skipping _6900  name type: 0
// skipping _6899  name type: 0
// skipping _6898  name type: 0
// skipping _6897  name type: 0
// skipping _6896  name type: 0
// skipping _6895  name type: 0
// skipping _6893  name type: 0
// skipping _6892  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg rehash_seq pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 3 op: INTEGER_CHECK (96)
    // SubProg rehash_seq pc: 5 op: STARTLINE (58)

    /** map.e:316		integer old_size = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 7 op: RHS_SUBS_I (114)
    _2 = (object)SEQ_PTR(_old_map_12339);
    _old_size_12341 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_size_12341))
    _old_size_12341 = (object)DBL_PTR(_old_size_12341)->dbl;
    // SubProg rehash_seq pc: 11 op: STARTLINE (58)

    /** map.e:319		if size = 0 then*/
    // SubProg rehash_seq pc: 13 op: EQUALS_IFW_I (121)
    // SubProg rehash_seq pc: 17 op: STARTLINE (58)

    /** map.e:320			if old_size > 50_000 then*/
    // SubProg rehash_seq pc: 19 op: GREATER_IFW_I (124)
    if (_old_size_12341 <= 50000)
    goto L1; // [19] 32
    // SubProg rehash_seq pc: 23 op: STARTLINE (58)

    /** map.e:321				size = old_size * 2*/
    // SubProg rehash_seq pc: 25 op: PLUS_I (115)
    _size_12340 = _old_size_12341 + _old_size_12341;
    // SubProg rehash_seq pc: 29 op: ELSE (23)
    goto L2; // [29] 69
    // SubProg rehash_seq pc: 31 op: NOP1 (159)
L1: // addr: 32 pc: 31 sub: 12337 op: 159
    // SubProg rehash_seq pc: 32 op: STARTLINE (58)

    /** map.e:323				size = old_size * 4*/
    // SubProg rehash_seq pc: 34 op: MULTIPLY (13)
    _size_12340 = _old_size_12341 * 4;
    // SubProg rehash_seq pc: 40 op: NOP1 (159)
    // SubProg rehash_seq pc: 41 op: ELSE (23)
    goto L2; // [41] 69
    // SubProg rehash_seq pc: 43 op: NOP1 (159)
    // SubProg rehash_seq pc: 44 op: STARTLINE (58)

    /** map.e:325		elsif size < old_size then*/
    // SubProg rehash_seq pc: 46 op: LESS_IFW_I (119)
    if (_size_12340 >= _old_size_12341)
    goto L3; // [46] 68
    // SubProg rehash_seq pc: 50 op: STARTLINE (58)

    /** map.e:326			size = old_size*/
    // SubProg rehash_seq pc: 52 op: ASSIGN_I (113)
    _size_12340 = _old_size_12341;
    // SubProg rehash_seq pc: 55 op: STARTLINE (58)

    /** map.e:327			if size < DEFAULT_SIZE then*/
    // SubProg rehash_seq pc: 57 op: LESS_IFW_I (119)
    if (_size_12340 >= 8)
    goto L4; // [57] 67
    // SubProg rehash_seq pc: 61 op: STARTLINE (58)

    /** map.e:328				size = DEFAULT_SIZE*/
    // SubProg rehash_seq pc: 63 op: ASSIGN_I (113)
    _size_12340 = 8;
    // SubProg rehash_seq pc: 66 op: NOP1 (159)
L4: // addr: 67 pc: 66 sub: 12337 op: 159
    // SubProg rehash_seq pc: 67 op: NOP1 (159)
L3: // addr: 68 pc: 67 sub: 12337 op: 159
    // SubProg rehash_seq pc: 68 op: NOP1 (159)
L2: // addr: 69 pc: 68 sub: 12337 op: 159
    // SubProg rehash_seq pc: 69 op: STARTLINE (58)

    /** map.e:332		sequence new_map = new_map_seq( size )*/
    // SubProg rehash_seq pc: 71 op: PROC (27)
    _0 = _new_map_12356;
    _new_map_12356 = _29new_map_seq(_size_12340);
    DeRef(_0);
    // SubProg rehash_seq pc: 75 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 77 op: STARTLINE (58)

    /** map.e:333		sequence slots = new_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 79 op: RHS_SUBS (25)
    DeRef(_slots_12358);
    _2 = (object)SEQ_PTR(_new_map_12356);
    _slots_12358 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12358);
    // SubProg rehash_seq pc: 83 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 85 op: STARTLINE (58)

    /** map.e:334		new_map[MAP_SLOTS] = 0*/
    // SubProg rehash_seq pc: 87 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_new_map_12356);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12356 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg rehash_seq pc: 91 op: STARTLINE (58)

    /** map.e:335		new_map[MAP_SIZE] = old_map[MAP_SIZE]*/
    // SubProg rehash_seq pc: 93 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_old_map_12339);
    _6902 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg rehash_seq pc: 97 op: ASSIGN_SUBS (16)
    Ref(_6902);
    _2 = (object)SEQ_PTR(_new_map_12356);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12356 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6902;
    if( _1 != _6902 ){
        DeRef(_1);
    }
    _6902 = NOVALUE;
    // SubProg rehash_seq pc: 101 op: STARTLINE (58)

    /** map.e:337		sequence old_slots = old_map[MAP_SLOTS]*/
    // SubProg rehash_seq pc: 103 op: RHS_SUBS (25)
    DeRef(_old_slots_12361);
    _2 = (object)SEQ_PTR(_old_map_12339);
    _old_slots_12361 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_old_slots_12361);
    // SubProg rehash_seq pc: 107 op: SEQUENCE_CHECK (97)
    // SubProg rehash_seq pc: 109 op: STARTLINE (58)

    /** map.e:338		for i = 1 to length( old_slots ) do*/
    // SubProg rehash_seq pc: 111 op: LENGTH (42)
    if (IS_SEQUENCE(_old_slots_12361)){
            _6904 = SEQ_PTR(_old_slots_12361)->length;
    }
    else {
        _6904 = 1;
    }
    // SubProg rehash_seq pc: 114 op: FOR_I (125)
    {
        object _i_12364;
        _i_12364 = 1;
L5: // addr: 121 pc: 114 sub: 12337 op: 125
        if (_i_12364 > _6904){
            goto L6; // [114] 171
        }
        // SubProg rehash_seq pc: 121 op: STARTLINE (58)

        /** map.e:339			sequence old_slot = old_slots[i]*/
        // SubProg rehash_seq pc: 123 op: RHS_SUBS (25)
        DeRef(_old_slot_12366);
        _2 = (object)SEQ_PTR(_old_slots_12361);
        _old_slot_12366 = (object)*(((s1_ptr)_2)->base + _i_12364);
        Ref(_old_slot_12366);
        // SubProg rehash_seq pc: 127 op: SEQUENCE_CHECK (97)
        // SubProg rehash_seq pc: 129 op: STARTLINE (58)

        /** map.e:340			integer old_hash = old_slot[SLOT_HASH]*/
        // SubProg rehash_seq pc: 131 op: RHS_SUBS_I (114)
        _2 = (object)SEQ_PTR(_old_slot_12366);
        _old_hash_12368 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_old_hash_12368))
        _old_hash_12368 = (object)DBL_PTR(_old_hash_12368)->dbl;
        // SubProg rehash_seq pc: 135 op: STARTLINE (58)

        /** map.e:341			if old_hash != -1 then*/
        // SubProg rehash_seq pc: 137 op: NOTEQ_IFW_I (122)
        if (_old_hash_12368 == -1)
        goto L7; // [137] 162
        // SubProg rehash_seq pc: 141 op: STARTLINE (58)

        /** map.e:342				index = lookup( old_slot[SLOT_KEY], old_hash, slots )*/
        // SubProg rehash_seq pc: 143 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_old_slot_12366);
        _6908 = (object)*(((s1_ptr)_2)->base + 2);
        // SubProg rehash_seq pc: 147 op: PROC (27)
        Ref(_6908);
        RefDS(_slots_12358);
        _index_12343 = _29lookup(_6908, _old_hash_12368, _slots_12358);
        _6908 = NOVALUE;
        // SubProg rehash_seq pc: 153 op: INTEGER_CHECK (96)
        if (!IS_ATOM_INT(_index_12343)) {
            _1 = (object)(DBL_PTR(_index_12343)->dbl);
            DeRefDS(_index_12343);
            _index_12343 = _1;
        }
        // SubProg rehash_seq pc: 155 op: STARTLINE (58)

        /** map.e:343				slots[index] = old_slot*/
        // SubProg rehash_seq pc: 157 op: ASSIGN_SUBS (16)
        RefDS(_old_slot_12366);
        _2 = (object)SEQ_PTR(_slots_12358);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12358 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12343);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _old_slot_12366;
        DeRef(_1);
        // SubProg rehash_seq pc: 161 op: NOP1 (159)
L7: // addr: 162 pc: 161 sub: 12337 op: 159
        // SubProg rehash_seq pc: 162 op: EXIT_BLOCK (206)

// Exiting block BLOCK: FOR-

// block var old_slot_12366
        DeRef(_old_slot_12366);
        _old_slot_12366 = NOVALUE;

// block var old_hash_12368
        // SubProg rehash_seq pc: 164 op: STARTLINE (58)

        /** map.e:345		end for*/
        // SubProg rehash_seq pc: 166 op: ENDFOR_INT_UP1 (54)
        _i_12364 = _i_12364 + 1;
        goto L5; // [166] 121
L6: // addr: 171 pc: 166 sub: 12337 op: 54
        ;
    }
    // SubProg rehash_seq pc: 171 op: STARTLINE (58)

    /** map.e:346		new_map[MAP_SLOTS] = slots*/
    // SubProg rehash_seq pc: 173 op: ASSIGN_SUBS (16)
    RefDS(_slots_12358);
    _2 = (object)SEQ_PTR(_new_map_12356);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12356 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12358;
    DeRef(_1);
    // SubProg rehash_seq pc: 177 op: STARTLINE (58)

    /** map.e:347		return new_map*/
    // SubProg rehash_seq pc: 179 op: RETURNF (28)

// Exiting block BLOCK: rehash_seq

// block var old_map_12339
    DeRefDS(_old_map_12339);

// block var size_12340

// block var old_size_12341

// block var index_12343

// block var slots_12358
    DeRefDS(_slots_12358);

// block var old_slots_12361
    DeRef(_old_slots_12361);
    return _new_map_12356;
    // SubProg rehash_seq pc: 183 op: BADRETURNF (43)
    ;
}


object _29new_extra(object _the_map_p_12376, object _initial_size_p_12377)
{
    object _new_1__tmp_at22_12383 = NOVALUE;
    object _new_inlined_new_at_22_12382 = NOVALUE;
    object _6910 = NOVALUE; // 12379 6910
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg new_extra pc: 1 op: INTEGER_CHECK (96)
    // SubProg new_extra pc: 3 op: STARTLINE (58)

    /** map.e:376		if map(the_map_p) then*/
    // SubProg new_extra pc: 5 op: PROC (27)
    Ref(_the_map_p_12376);
    _6910 = _29map(_the_map_p_12376);
    // SubProg new_extra pc: 9 op: IF (20)
    if (_6910 == 0) {
        DeRef(_6910);
        _6910 = NOVALUE;
        goto L1; // [9] 21
    }
    else {
        if (!IS_ATOM_INT(_6910) && DBL_PTR(_6910)->dbl == 0.0){
            DeRef(_6910);
            _6910 = NOVALUE;
            goto L1; // [9] 21
        }
        DeRef(_6910);
        _6910 = NOVALUE;
    }
    DeRef(_6910);
    _6910 = NOVALUE;
    // SubProg new_extra pc: 12 op: STARTLINE (58)

    /** map.e:377			return the_map_p*/
    // SubProg new_extra pc: 14 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var initial_size_p_12377
    return _the_map_p_12376;
    // SubProg new_extra pc: 18 op: ELSE (23)
    goto L2; // [18] 42
    // SubProg new_extra pc: 20 op: NOP1 (159)
L1: // addr: 21 pc: 20 sub: 12374 op: 159
    // SubProg new_extra pc: 21 op: STARTLINE (58)

    /** map.e:379			return new(initial_size_p)*/
    // SubProg new_extra pc: 23 op: STARTLINE (58)

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    // SubProg new_extra pc: 25 op: PROC (27)
    _0 = _new_1__tmp_at22_12383;
    _new_1__tmp_at22_12383 = _29new_map_seq(_initial_size_p_12377);
    DeRef(_0);
    // SubProg new_extra pc: 29 op: PROC (27)
    Ref(_new_1__tmp_at22_12383);
    _0 = _new_inlined_new_at_22_12382;
    _new_inlined_new_at_22_12382 = _30malloc(_new_1__tmp_at22_12383, 1);
    DeRef(_0);
    // SubProg new_extra pc: 34 op: NOP1 (159)
    // SubProg new_extra pc: 35 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-new from new_extra @ 22

// block var new_1__tmp_at22_12383
    DeRef(_new_1__tmp_at22_12383);
    _new_1__tmp_at22_12383 = NOVALUE;
    // SubProg new_extra pc: 37 op: RETURNF (28)

// Exiting block BLOCK: new_extra

// block var the_map_p_12376
    DeRef(_the_map_p_12376);

// block var initial_size_p_12377
    return _new_inlined_new_at_22_12382;
    // SubProg new_extra pc: 41 op: NOP1 (159)
L2: // addr: 42 pc: 41 sub: 12374 op: 159
    // SubProg new_extra pc: 42 op: BADRETURNF (43)
    ;
}


object _29has(object _the_map_p_12418, object _key_12419)
{
    object _hashval_12420 = NOVALUE;
    object _hash_inlined_hash_at_2_12422 = NOVALUE;
    object _slots_12423 = NOVALUE;
    object _index_12426 = NOVALUE;
    object _6930 = NOVALUE; // 12430 6930
    object _6929 = NOVALUE; // 12429 6929
    object _6928 = NOVALUE; // 12428 6928
// skipping _6927  name type: 0
// skipping _6926  name type: 0
    object _6925 = NOVALUE; // 12424 6925
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg has pc: 1 op: STARTLINE (58)

    /** map.e:464		integer hashval = hash( key )*/
    // SubProg has pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg has pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 7 op: HASH (194)
    _hashval_12420 = calc_hash(_key_12419, -6);
    // SubProg has pc: 11 op: NOP1 (159)
    // SubProg has pc: 12 op: STARTLINE (58)

    /** map.e:465		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg has pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg has pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12418)){
        _6925 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12418)->dbl));
    }
    else{
        _6925 = (object)*(((s1_ptr)_2)->base + _the_map_p_12418);
    }
    // SubProg has pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12423);
    _2 = (object)SEQ_PTR(_6925);
    _slots_12423 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12423);
    _6925 = NOVALUE;
    // SubProg has pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg has pc: 26 op: STARTLINE (58)

    /** map.e:466		integer index = lookup( key, hashval, slots )*/
    // SubProg has pc: 28 op: PROC (27)
    Ref(_key_12419);
    RefDS(_slots_12423);
    _index_12426 = _29lookup(_key_12419, _hashval_12420, _slots_12423);
    // SubProg has pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12426)) {
        _1 = (object)(DBL_PTR(_index_12426)->dbl);
        DeRefDS(_index_12426);
        _index_12426 = _1;
    }
    // SubProg has pc: 36 op: STARTLINE (58)

    /** map.e:468		return hashval = slots[index][SLOT_HASH]*/
    // SubProg has pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12423);
    _6928 = (object)*(((s1_ptr)_2)->base + _index_12426);
    // SubProg has pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6928);
    _6929 = (object)*(((s1_ptr)_2)->base + 1);
    _6928 = NOVALUE;
    // SubProg has pc: 46 op: EQUALS (3)
    if (IS_ATOM_INT(_6929)) {
        _6930 = (_hashval_12420 == _6929);
    }
    else {
        _6930 = binary_op(EQUALS, _hashval_12420, _6929);
    }
    _6929 = NOVALUE;
    // SubProg has pc: 50 op: RETURNF (28)

// Exiting block BLOCK: has

// block var the_map_p_12418
    DeRef(_the_map_p_12418);

// block var key_12419
    DeRef(_key_12419);

// block var hashval_12420

// block var slots_12423
    DeRefDS(_slots_12423);

// block var index_12426
    return _6930;
    // SubProg has pc: 54 op: BADRETURNF (43)
    ;
}


object _29get(object _the_map_p_12433, object _key_12434, object _default_12435)
{
    object _hashval_12436 = NOVALUE;
    object _hash_inlined_hash_at_2_12438 = NOVALUE;
    object _slots_12439 = NOVALUE;
    object _index_12442 = NOVALUE;
    object _slot_12444 = NOVALUE;
    object _6937 = NOVALUE; // 12449 6937
// skipping _6936  name type: 0
    object _6935 = NOVALUE; // 12447 6935
// skipping _6934  name type: 0
// skipping _6933  name type: 0
// skipping _6932  name type: 0
    object _6931 = NOVALUE; // 12440 6931
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg get pc: 1 op: STARTLINE (58)

    /** map.e:505		integer hashval = hash( key )*/
    // SubProg get pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg get pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 7 op: HASH (194)
    _hashval_12436 = calc_hash(_key_12434, -6);
    // SubProg get pc: 11 op: NOP1 (159)
    // SubProg get pc: 12 op: STARTLINE (58)

    /** map.e:506		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg get pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg get pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12433)){
        _6931 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12433)->dbl));
    }
    else{
        _6931 = (object)*(((s1_ptr)_2)->base + _the_map_p_12433);
    }
    // SubProg get pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12439);
    _2 = (object)SEQ_PTR(_6931);
    _slots_12439 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12439);
    _6931 = NOVALUE;
    // SubProg get pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 26 op: STARTLINE (58)

    /** map.e:507		integer index = lookup( key, hashval, slots )*/
    // SubProg get pc: 28 op: PROC (27)
    Ref(_key_12434);
    RefDS(_slots_12439);
    _index_12442 = _29lookup(_key_12434, _hashval_12436, _slots_12439);
    // SubProg get pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12442)) {
        _1 = (object)(DBL_PTR(_index_12442)->dbl);
        DeRefDS(_index_12442);
        _index_12442 = _1;
    }
    // SubProg get pc: 36 op: STARTLINE (58)

    /** map.e:508		sequence slot = slots[index]*/
    // SubProg get pc: 38 op: RHS_SUBS (25)
    DeRef(_slot_12444);
    _2 = (object)SEQ_PTR(_slots_12439);
    _slot_12444 = (object)*(((s1_ptr)_2)->base + _index_12442);
    Ref(_slot_12444);
    // SubProg get pc: 42 op: SEQUENCE_CHECK (97)
    // SubProg get pc: 44 op: STARTLINE (58)

    /** map.e:509		if hashval = slot[SLOT_HASH] then*/
    // SubProg get pc: 46 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_12444);
    _6935 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg get pc: 50 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_12436, _6935)){
        _6935 = NOVALUE;
        goto L1; // [50] 65
    }
    _6935 = NOVALUE;
    // SubProg get pc: 54 op: STARTLINE (58)

    /** map.e:510			return slot[SLOT_VALUE]*/
    // SubProg get pc: 56 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slot_12444);
    _6937 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg get pc: 60 op: RETURNF (28)
    Ref(_6937);

// Exiting block BLOCK: get

// block var the_map_p_12433
    DeRef(_the_map_p_12433);

// block var key_12434
    DeRef(_key_12434);

// block var default_12435
    DeRef(_default_12435);

// block var hashval_12436

// block var slots_12439
    DeRefDS(_slots_12439);

// block var index_12442

// block var slot_12444
    DeRefDS(_slot_12444);
    return _6937;
    // SubProg get pc: 64 op: NOP1 (159)
L1: // addr: 65 pc: 64 sub: 12431 op: 159
    // SubProg get pc: 65 op: STARTLINE (58)

    /** map.e:512		return default*/
    // SubProg get pc: 67 op: RETURNF (28)

// Exiting block BLOCK: get

// block var the_map_p_12433
    DeRef(_the_map_p_12433);

// block var key_12434
    DeRef(_key_12434);

// block var hashval_12436

// block var slots_12439
    DeRef(_slots_12439);

// block var index_12442

// block var slot_12444
    DeRef(_slot_12444);
    _6937 = NOVALUE;
    return _default_12435;
    // SubProg get pc: 71 op: BADRETURNF (43)
    ;
}


void _29put(object _the_map_p_12472, object _key_12473, object _val_12474, object _op_12475, object _deprecated_12476)
{
    object _hashval_12477 = NOVALUE;
    object _hash_inlined_hash_at_2_12479 = NOVALUE;
    object _the_map_seq_12480 = NOVALUE;
    object _slots_12482 = NOVALUE;
    object _index_12484 = NOVALUE;
    object _old_hash_12486 = NOVALUE;
    object _msg_inlined_crash_at_288_12529 = NOVALUE;
    object _msg_inlined_crash_at_348_12539 = NOVALUE;
    object _msg_inlined_crash_at_535_12571 = NOVALUE;
    object _7004 = NOVALUE; // 12567 7004
// skipping _7003  name type: 0
    object _7002 = NOVALUE; // 12563 7002
    object _7001 = NOVALUE; // 12562 7001
    object _7000 = NOVALUE; // 12561 7000
    object _6999 = NOVALUE; // 12560 6999
    object _6998 = NOVALUE; // 12558 6998
// skipping _6997  name type: 0
    object _6996 = NOVALUE; // 12554 6996
    object _6995 = NOVALUE; // 12553 6995
    object _6994 = NOVALUE; // 12552 6994
    object _6993 = NOVALUE; // 12551 6993
    object _6992 = NOVALUE; // 12549 6992
    object _6991 = NOVALUE; // 12548 6991
// skipping _6990  name type: 0
    object _6989 = NOVALUE; // 12544 6989
    object _6988 = NOVALUE; // 12543 6988
    object _6987 = NOVALUE; // 12542 6987
    object _6986 = NOVALUE; // 12541 6986
// skipping _6985  name type: 0
    object _6984 = NOVALUE; // 12534 6984
    object _6983 = NOVALUE; // 12533 6983
    object _6982 = NOVALUE; // 12532 6982
    object _6981 = NOVALUE; // 12531 6981
// skipping _6979  name type: 0
    object _6978 = NOVALUE; // 12523 6978
    object _6977 = NOVALUE; // 12522 6977
    object _6976 = NOVALUE; // 12521 6976
    object _6975 = NOVALUE; // 12520 6975
    object _6974 = NOVALUE; // 12518 6974
// skipping _6973  name type: 0
    object _6972 = NOVALUE; // 12514 6972
    object _6971 = NOVALUE; // 12513 6971
    object _6970 = NOVALUE; // 12512 6970
    object _6969 = NOVALUE; // 12511 6969
    object _6968 = NOVALUE; // 12509 6968
// skipping _6967  name type: 0
    object _6966 = NOVALUE; // 12505 6966
    object _6963 = NOVALUE; // 12501 6963
    object _6962 = NOVALUE; // 12500 6962
// skipping _6961  name type: 0
    object _6960 = NOVALUE; // 12498 6960
// skipping _6959  name type: 0
// skipping _6958  name type: 0
// skipping _6957  name type: 0
// skipping _6956  name type: 0
    object _6955 = NOVALUE; // 12493 6955
    object _6954 = NOVALUE; // 12492 6954
// skipping _6953  name type: 0
// skipping _6952  name type: 0
    object _6951 = NOVALUE; // 12487 6951
// skipping _6950  name type: 0
// skipping _6949  name type: 0
// skipping _6948  name type: 0
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg put pc: 1 op: STARTLINE (58)

    /** map.e:579		integer hashval = hash( key )*/
    // SubProg put pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg put pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 7 op: HASH (194)
    _hashval_12477 = calc_hash(_key_12473, -6);
    // SubProg put pc: 11 op: NOP1 (159)
    // SubProg put pc: 12 op: STARTLINE (58)

    /** map.e:580		sequence the_map_seq = eumem:ram_space[the_map_p]*/
    // SubProg put pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 16 op: RHS_SUBS (25)
    DeRef(_the_map_seq_12480);
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12472)){
        _the_map_seq_12480 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12472)->dbl));
    }
    else{
        _the_map_seq_12480 = (object)*(((s1_ptr)_2)->base + _the_map_p_12472);
    }
    Ref(_the_map_seq_12480);
    // SubProg put pc: 20 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 22 op: STARTLINE (58)

    /** map.e:581		eumem:ram_space[the_map_p] = 0*/
    // SubProg put pc: 24 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 26 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12472))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12472)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12472);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 30 op: STARTLINE (58)

    /** map.e:582		sequence slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 32 op: RHS_SUBS (25)
    DeRef(_slots_12482);
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    _slots_12482 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12482);
    // SubProg put pc: 36 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 38 op: STARTLINE (58)

    /** map.e:584		integer index = lookup( key, hashval, slots )*/
    // SubProg put pc: 40 op: PROC (27)
    Ref(_key_12473);
    RefDS(_slots_12482);
    _index_12484 = _29lookup(_key_12473, _hashval_12477, _slots_12482);
    // SubProg put pc: 46 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12484)) {
        _1 = (object)(DBL_PTR(_index_12484)->dbl);
        DeRefDS(_index_12484);
        _index_12484 = _1;
    }
    // SubProg put pc: 48 op: STARTLINE (58)

    /** map.e:585		integer old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 50 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12482);
    _6951 = (object)*(((s1_ptr)_2)->base + _index_12484);
    // SubProg put pc: 54 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6951);
    _old_hash_12486 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12486)){
        _old_hash_12486 = (object)DBL_PTR(_old_hash_12486)->dbl;
    }
    _6951 = NOVALUE;
    // SubProg put pc: 60 op: STARTLINE (58)

    /** map.e:587		if old_hash < 0 then*/
    // SubProg put pc: 62 op: LESS_IFW_I (119)
    if (_old_hash_12486 >= 0)
    goto L1; // [62] 142
    // SubProg put pc: 66 op: STARTLINE (58)

    /** map.e:589			if the_map_seq[MAP_SIZE] > the_map_seq[MAP_MAX] then*/
    // SubProg put pc: 68 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    _6954 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    _6955 = (object)*(((s1_ptr)_2)->base + 3);
    // SubProg put pc: 76 op: GREATER_IFW (107)
    if (binary_op_a(LESSEQ, _6954, _6955)){
        _6954 = NOVALUE;
        _6955 = NOVALUE;
        goto L2; // [76] 127
    }
    _6954 = NOVALUE;
    _6955 = NOVALUE;
    // SubProg put pc: 80 op: STARTLINE (58)

    /** map.e:590				slots = {}*/
    // SubProg put pc: 82 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_12482);
    _slots_12482 = _5;
    // SubProg put pc: 85 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 87 op: STARTLINE (58)

    /** map.e:591				the_map_seq = rehash_seq( the_map_seq )*/
    // SubProg put pc: 89 op: PROC (27)
    RefDS(_the_map_seq_12480);
    _0 = _the_map_seq_12480;
    _the_map_seq_12480 = _29rehash_seq(_the_map_seq_12480, 0);
    DeRefDS(_0);
    // SubProg put pc: 94 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 96 op: STARTLINE (58)

    /** map.e:592				slots = the_map_seq[MAP_SLOTS]*/
    // SubProg put pc: 98 op: RHS_SUBS (25)
    DeRefDS(_slots_12482);
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    _slots_12482 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12482);
    // SubProg put pc: 102 op: SEQUENCE_CHECK (97)
    // SubProg put pc: 104 op: STARTLINE (58)

    /** map.e:593				index = lookup( key, hashval, slots )*/
    // SubProg put pc: 106 op: PROC (27)
    Ref(_key_12473);
    RefDS(_slots_12482);
    _index_12484 = _29lookup(_key_12473, _hashval_12477, _slots_12482);
    // SubProg put pc: 112 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12484)) {
        _1 = (object)(DBL_PTR(_index_12484)->dbl);
        DeRefDS(_index_12484);
        _index_12484 = _1;
    }
    // SubProg put pc: 114 op: STARTLINE (58)

    /** map.e:594				old_hash = slots[index][SLOT_HASH]*/
    // SubProg put pc: 116 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12482);
    _6960 = (object)*(((s1_ptr)_2)->base + _index_12484);
    // SubProg put pc: 120 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_6960);
    _old_hash_12486 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12486)){
        _old_hash_12486 = (object)DBL_PTR(_old_hash_12486)->dbl;
    }
    _6960 = NOVALUE;
    // SubProg put pc: 126 op: NOP1 (159)
L2: // addr: 127 pc: 126 sub: 12470 op: 159
    // SubProg put pc: 127 op: STARTLINE (58)

    /** map.e:596			the_map_seq[MAP_SIZE] += 1*/
    // SubProg put pc: 129 op: ASSIGN_OP_SUBS (149)
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    _6962 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg put pc: 133 op: PLUS1 (93)
    if (IS_ATOM_INT(_6962)) {
        _6963 = _6962 + 1;
        if (_6963 > MAXINT){
            _6963 = NewDouble((eudouble)_6963);
        }
    }
    else
    _6963 = binary_op(PLUS, 1, _6962);
    _6962 = NOVALUE;
    // SubProg put pc: 137 op: ASSIGN_SUBS (16)
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12480 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6963;
    if( _1 != _6963 ){
        DeRef(_1);
    }
    _6963 = NOVALUE;
    // SubProg put pc: 141 op: NOP1 (159)
L1: // addr: 142 pc: 141 sub: 12470 op: 159
    // SubProg put pc: 142 op: STARTLINE (58)

    /** map.e:599		the_map_seq[MAP_SLOTS] = 0*/
    // SubProg put pc: 144 op: ASSIGN_SUBS_I (118)
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12480 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    // SubProg put pc: 148 op: STARTLINE (58)

    /** map.e:601		switch op do*/
    // SubProg put pc: 150 op: SWITCH_I (193)
    _0 = _op_12475;
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
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        Ref(_val_12474);
        ((intptr_t*)_2)[3] = _val_12474;
        _6966 = MAKE_SEQ(_1);
        // SubProg put pc: 167 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6966;
        if( _1 != _6966 ){
            DeRef(_1);
        }
        _6966 = NOVALUE;
        // SubProg put pc: 171 op: ELSE (23)
        goto L3; // [171] 555
        // SubProg put pc: 173 op: STARTLINE (58)

        /** map.e:604			case ADD then*/
        // SubProg put pc: 175 op: CASE (186)
        case 2:
        // SubProg put pc: 177 op: STARTLINE (58)

        /** map.e:605				if old_hash < 0 then*/
        // SubProg put pc: 179 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto L4; // [179] 198
        // SubProg put pc: 183 op: STARTLINE (58)

        /** map.e:606					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 185 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        Ref(_val_12474);
        ((intptr_t*)_2)[3] = _val_12474;
        _6968 = MAKE_SEQ(_1);
        // SubProg put pc: 191 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6968;
        if( _1 != _6968 ){
            DeRef(_1);
        }
        _6968 = NOVALUE;
        // SubProg put pc: 195 op: ELSE (23)
        goto L3; // [195] 555
        // SubProg put pc: 197 op: NOP1 (159)
L4: // addr: 198 pc: 197 sub: 12470 op: 159
        // SubProg put pc: 198 op: STARTLINE (58)

        /** map.e:608					slots[index] = { hashval, key, val + slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 200 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6969 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 204 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6969);
        _6970 = (object)*(((s1_ptr)_2)->base + 3);
        _6969 = NOVALUE;
        // SubProg put pc: 208 op: PLUS (11)
        if (IS_ATOM_INT(_val_12474) && IS_ATOM_INT(_6970)) {
            _6971 = _val_12474 + _6970;
            if ((object)((uintptr_t)_6971 + (uintptr_t)HIGH_BITS) >= 0){
                _6971 = NewDouble((eudouble)_6971);
            }
        }
        else {
            _6971 = binary_op(PLUS, _val_12474, _6970);
        }
        _6970 = NOVALUE;
        // SubProg put pc: 212 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6971;
        _6972 = MAKE_SEQ(_1);
        _6971 = NOVALUE;
        // SubProg put pc: 218 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6972;
        if( _1 != _6972 ){
            DeRef(_1);
        }
        _6972 = NOVALUE;
        // SubProg put pc: 222 op: NOP1 (159)
        // SubProg put pc: 223 op: ELSE (23)
        goto L3; // [223] 555
        // SubProg put pc: 225 op: STARTLINE (58)

        /** map.e:610			case SUBTRACT then*/
        // SubProg put pc: 227 op: CASE (186)
        case 3:
        // SubProg put pc: 229 op: STARTLINE (58)

        /** map.e:611				if old_hash < 0 then*/
        // SubProg put pc: 231 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto L5; // [231] 250
        // SubProg put pc: 235 op: STARTLINE (58)

        /** map.e:612					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 237 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        Ref(_val_12474);
        ((intptr_t*)_2)[3] = _val_12474;
        _6974 = MAKE_SEQ(_1);
        // SubProg put pc: 243 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6974;
        if( _1 != _6974 ){
            DeRef(_1);
        }
        _6974 = NOVALUE;
        // SubProg put pc: 247 op: ELSE (23)
        goto L3; // [247] 555
        // SubProg put pc: 249 op: NOP1 (159)
L5: // addr: 250 pc: 249 sub: 12470 op: 159
        // SubProg put pc: 250 op: STARTLINE (58)

        /** map.e:614					slots[index] = { hashval, key, slots[index][SLOT_VALUE] - val }*/
        // SubProg put pc: 252 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6975 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 256 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6975);
        _6976 = (object)*(((s1_ptr)_2)->base + 3);
        _6975 = NOVALUE;
        // SubProg put pc: 260 op: MINUS (10)
        if (IS_ATOM_INT(_6976) && IS_ATOM_INT(_val_12474)) {
            _6977 = _6976 - _val_12474;
            if ((object)((uintptr_t)_6977 +(uintptr_t) HIGH_BITS) >= 0){
                _6977 = NewDouble((eudouble)_6977);
            }
        }
        else {
            _6977 = binary_op(MINUS, _6976, _val_12474);
        }
        _6976 = NOVALUE;
        // SubProg put pc: 264 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6977;
        _6978 = MAKE_SEQ(_1);
        _6977 = NOVALUE;
        // SubProg put pc: 270 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6978;
        if( _1 != _6978 ){
            DeRef(_1);
        }
        _6978 = NOVALUE;
        // SubProg put pc: 274 op: NOP1 (159)
        // SubProg put pc: 275 op: ELSE (23)
        goto L3; // [275] 555
        // SubProg put pc: 277 op: STARTLINE (58)

        /** map.e:617			case MULTIPLY then*/
        // SubProg put pc: 279 op: CASE (186)
        case 4:
        // SubProg put pc: 281 op: STARTLINE (58)

        /** map.e:618				if old_hash < 0 then*/
        // SubProg put pc: 283 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto L6; // [283] 310
        // SubProg put pc: 287 op: STARTLINE (58)

        /** map.e:619					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 289 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 291 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_288_12529);
        _msg_inlined_crash_at_288_12529 = EPrintf(-9999999, _6980, _5);
        // SubProg put pc: 295 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 297 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_288_12529);
        // SubProg put pc: 300 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 302 op: ELSE (23)
        goto L7; // [302] 305
        // SubProg put pc: 304 op: NOP1 (159)
L7: // addr: 305 pc: 304 sub: 12470 op: 159
        // SubProg put pc: 305 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 288

// block var msg_inlined_crash_at_288_12529
        DeRefi(_msg_inlined_crash_at_288_12529);
        _msg_inlined_crash_at_288_12529 = NOVALUE;
        // SubProg put pc: 307 op: ELSE (23)
        goto L3; // [307] 555
        // SubProg put pc: 309 op: NOP1 (159)
L6: // addr: 310 pc: 309 sub: 12470 op: 159
        // SubProg put pc: 310 op: STARTLINE (58)

        /** map.e:621					slots[index] = { hashval, key, val * slots[index][SLOT_VALUE] }*/
        // SubProg put pc: 312 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6981 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 316 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6981);
        _6982 = (object)*(((s1_ptr)_2)->base + 3);
        _6981 = NOVALUE;
        // SubProg put pc: 320 op: MULTIPLY (13)
        if (IS_ATOM_INT(_val_12474) && IS_ATOM_INT(_6982)) {
            if (_val_12474 == (short)_val_12474 && _6982 <= INT15 && _6982 >= -INT15){
                _6983 = _val_12474 * _6982;
            }
            else{
                _6983 = NewDouble(_val_12474 * (eudouble)_6982);
            }
        }
        else {
            _6983 = binary_op(MULTIPLY, _val_12474, _6982);
        }
        _6982 = NOVALUE;
        // SubProg put pc: 324 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6983;
        _6984 = MAKE_SEQ(_1);
        _6983 = NOVALUE;
        // SubProg put pc: 330 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6984;
        if( _1 != _6984 ){
            DeRef(_1);
        }
        _6984 = NOVALUE;
        // SubProg put pc: 334 op: NOP1 (159)
        // SubProg put pc: 335 op: ELSE (23)
        goto L3; // [335] 555
        // SubProg put pc: 337 op: STARTLINE (58)

        /** map.e:624			case DIVIDE then*/
        // SubProg put pc: 339 op: CASE (186)
        case 5:
        // SubProg put pc: 341 op: STARTLINE (58)

        /** map.e:625				if old_hash < 0 then*/
        // SubProg put pc: 343 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto L8; // [343] 370
        // SubProg put pc: 347 op: STARTLINE (58)

        /** map.e:626					error:crash("Inappropriate initial operation given to map.e:put()")*/
        // SubProg put pc: 349 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 351 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_348_12539);
        _msg_inlined_crash_at_348_12539 = EPrintf(-9999999, _6980, _5);
        // SubProg put pc: 355 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 357 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_348_12539);
        // SubProg put pc: 360 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 362 op: ELSE (23)
        goto L9; // [362] 365
        // SubProg put pc: 364 op: NOP1 (159)
L9: // addr: 365 pc: 364 sub: 12470 op: 159
        // SubProg put pc: 365 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 348

// block var msg_inlined_crash_at_348_12539
        DeRefi(_msg_inlined_crash_at_348_12539);
        _msg_inlined_crash_at_348_12539 = NOVALUE;
        // SubProg put pc: 367 op: ELSE (23)
        goto L3; // [367] 555
        // SubProg put pc: 369 op: NOP1 (159)
L8: // addr: 370 pc: 369 sub: 12470 op: 159
        // SubProg put pc: 370 op: STARTLINE (58)

        /** map.e:628					slots[index] = { hashval, key, slots[index][SLOT_VALUE] / val }*/
        // SubProg put pc: 372 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6986 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 376 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6986);
        _6987 = (object)*(((s1_ptr)_2)->base + 3);
        _6986 = NOVALUE;
        // SubProg put pc: 380 op: DIVIDE (14)
        if (IS_ATOM_INT(_6987) && IS_ATOM_INT(_val_12474)) {
            _6988 = (_6987 % _val_12474) ? NewDouble((eudouble)_6987 / _val_12474) : (_6987 / _val_12474);
        }
        else {
            _6988 = binary_op(DIVIDE, _6987, _val_12474);
        }
        _6987 = NOVALUE;
        // SubProg put pc: 384 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6988;
        _6989 = MAKE_SEQ(_1);
        _6988 = NOVALUE;
        // SubProg put pc: 390 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6989;
        if( _1 != _6989 ){
            DeRef(_1);
        }
        _6989 = NOVALUE;
        // SubProg put pc: 394 op: NOP1 (159)
        // SubProg put pc: 395 op: ELSE (23)
        goto L3; // [395] 555
        // SubProg put pc: 397 op: STARTLINE (58)

        /** map.e:631			case APPEND then*/
        // SubProg put pc: 399 op: CASE (186)
        case 6:
        // SubProg put pc: 401 op: STARTLINE (58)

        /** map.e:632				if old_hash < 0 then*/
        // SubProg put pc: 403 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto LA; // [403] 426
        // SubProg put pc: 407 op: STARTLINE (58)

        /** map.e:633					slots[index] = { hashval, key, {val} }*/
        // SubProg put pc: 409 op: RIGHT_BRACE_N (31)
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_val_12474);
        ((intptr_t*)_2)[1] = _val_12474;
        _6991 = MAKE_SEQ(_1);
        // SubProg put pc: 413 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6991;
        _6992 = MAKE_SEQ(_1);
        _6991 = NOVALUE;
        // SubProg put pc: 419 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6992;
        if( _1 != _6992 ){
            DeRef(_1);
        }
        _6992 = NOVALUE;
        // SubProg put pc: 423 op: ELSE (23)
        goto L3; // [423] 555
        // SubProg put pc: 425 op: NOP1 (159)
LA: // addr: 426 pc: 425 sub: 12470 op: 159
        // SubProg put pc: 426 op: STARTLINE (58)

        /** map.e:635					slots[index] = { hashval, key, append( slots[index][SLOT_VALUE], val ) }*/
        // SubProg put pc: 428 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6993 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 432 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6993);
        _6994 = (object)*(((s1_ptr)_2)->base + 3);
        _6993 = NOVALUE;
        // SubProg put pc: 436 op: APPEND (35)
        Ref(_val_12474);
        Append(&_6995, _6994, _val_12474);
        _6994 = NOVALUE;
        // SubProg put pc: 440 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _6995;
        _6996 = MAKE_SEQ(_1);
        _6995 = NOVALUE;
        // SubProg put pc: 446 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6996;
        if( _1 != _6996 ){
            DeRef(_1);
        }
        _6996 = NOVALUE;
        // SubProg put pc: 450 op: NOP1 (159)
        // SubProg put pc: 451 op: ELSE (23)
        goto L3; // [451] 555
        // SubProg put pc: 453 op: STARTLINE (58)

        /** map.e:638			case CONCAT then*/
        // SubProg put pc: 455 op: CASE (186)
        case 7:
        // SubProg put pc: 457 op: STARTLINE (58)

        /** map.e:639				if old_hash < 0 then*/
        // SubProg put pc: 459 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto LB; // [459] 478
        // SubProg put pc: 463 op: STARTLINE (58)

        /** map.e:640					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 465 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        Ref(_val_12474);
        ((intptr_t*)_2)[3] = _val_12474;
        _6998 = MAKE_SEQ(_1);
        // SubProg put pc: 471 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6998;
        if( _1 != _6998 ){
            DeRef(_1);
        }
        _6998 = NOVALUE;
        // SubProg put pc: 475 op: ELSE (23)
        goto L3; // [475] 555
        // SubProg put pc: 477 op: NOP1 (159)
LB: // addr: 478 pc: 477 sub: 12470 op: 159
        // SubProg put pc: 478 op: STARTLINE (58)

        /** map.e:642					slots[index] = { hashval, key, slots[index][SLOT_VALUE] & val }*/
        // SubProg put pc: 480 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12482);
        _6999 = (object)*(((s1_ptr)_2)->base + _index_12484);
        // SubProg put pc: 484 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_6999);
        _7000 = (object)*(((s1_ptr)_2)->base + 3);
        _6999 = NOVALUE;
        // SubProg put pc: 488 op: CONCAT (15)
        if (IS_SEQUENCE(_7000) && IS_ATOM(_val_12474)) {
            Ref(_val_12474);
            Append(&_7001, _7000, _val_12474);
        }
        else if (IS_ATOM(_7000) && IS_SEQUENCE(_val_12474)) {
            Ref(_7000);
            Prepend(&_7001, _val_12474, _7000);
        }
        else {
            Concat((object_ptr)&_7001, _7000, _val_12474);
            _7000 = NOVALUE;
        }
        _7000 = NOVALUE;
        // SubProg put pc: 492 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        ((intptr_t*)_2)[3] = _7001;
        _7002 = MAKE_SEQ(_1);
        _7001 = NOVALUE;
        // SubProg put pc: 498 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7002;
        if( _1 != _7002 ){
            DeRef(_1);
        }
        _7002 = NOVALUE;
        // SubProg put pc: 502 op: NOP1 (159)
        // SubProg put pc: 503 op: ELSE (23)
        goto L3; // [503] 555
        // SubProg put pc: 505 op: STARTLINE (58)

        /** map.e:645			case LEAVE then*/
        // SubProg put pc: 507 op: CASE (186)
        case 8:
        // SubProg put pc: 509 op: STARTLINE (58)

        /** map.e:646				if old_hash < 0 then*/
        // SubProg put pc: 511 op: LESS_IFW_I (119)
        if (_old_hash_12486 >= 0)
        goto L3; // [511] 555
        // SubProg put pc: 515 op: STARTLINE (58)

        /** map.e:647					slots[index] = { hashval, key, val }*/
        // SubProg put pc: 517 op: RIGHT_BRACE_N (31)
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12477;
        Ref(_key_12473);
        ((intptr_t*)_2)[2] = _key_12473;
        Ref(_val_12474);
        ((intptr_t*)_2)[3] = _val_12474;
        _7004 = MAKE_SEQ(_1);
        // SubProg put pc: 523 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_slots_12482);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12482 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12484);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7004;
        if( _1 != _7004 ){
            DeRef(_1);
        }
        _7004 = NOVALUE;
        // SubProg put pc: 527 op: NOP1 (159)
        // SubProg put pc: 528 op: ELSE (23)
        goto L3; // [528] 555
        // SubProg put pc: 530 op: STARTLINE (58)

        /** map.e:649			case else*/
        // SubProg put pc: 532 op: CASE (186)
        default:
        // SubProg put pc: 534 op: STARTLINE (58)

        /** map.e:650				error:crash("Unknown operation given to map.e:put()")*/
        // SubProg put pc: 536 op: STARTLINE (58)

        /** error.e:51		msg = sprintf(fmt, data)*/
        // SubProg put pc: 538 op: SPRINTF (53)
        DeRefi(_msg_inlined_crash_at_535_12571);
        _msg_inlined_crash_at_535_12571 = EPrintf(-9999999, _7005, _5);
        // SubProg put pc: 542 op: STARTLINE (58)

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        // SubProg put pc: 544 op: MACHINE_PROC (112)
        machine(67, _msg_inlined_crash_at_535_12571);
        // SubProg put pc: 547 op: STARTLINE (58)

        /** error.e:53	end procedure*/
        // SubProg put pc: 549 op: ELSE (23)
        goto LC; // [549] 552
        // SubProg put pc: 551 op: NOP1 (159)
LC: // addr: 552 pc: 551 sub: 12470 op: 159
        // SubProg put pc: 552 op: EXIT_BLOCK (206)

// Exiting block BLOCK: EXIT_BLOCK-Inline-crash from put @ 535

// block var msg_inlined_crash_at_535_12571
        DeRefi(_msg_inlined_crash_at_535_12571);
        _msg_inlined_crash_at_535_12571 = NOVALUE;
        // SubProg put pc: 554 op: NOPSWITCH (187)
    ;}L3: // addr: 555 pc: 554 sub: 12470 op: 187
    // SubProg put pc: 555 op: STARTLINE (58)

    /** map.e:654		the_map_seq[MAP_SLOTS] = slots*/
    // SubProg put pc: 557 op: ASSIGN_SUBS (16)
    RefDS(_slots_12482);
    _2 = (object)SEQ_PTR(_the_map_seq_12480);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12480 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12482;
    DeRef(_1);
    // SubProg put pc: 561 op: STARTLINE (58)

    /** map.e:655		eumem:ram_space[the_map_p] = the_map_seq*/
    // SubProg put pc: 563 op: GLOBAL_INIT_CHECK (109)
    // SubProg put pc: 565 op: ASSIGN_SUBS (16)
    RefDS(_the_map_seq_12480);
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12472))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12472)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12472);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _the_map_seq_12480;
    DeRef(_1);
    // SubProg put pc: 569 op: STARTLINE (58)

    /** map.e:656	end procedure*/
    // SubProg put pc: 571 op: RETURNP (29)

// Exiting block BLOCK: put

// block var the_map_p_12472
    DeRef(_the_map_p_12472);

// block var key_12473
    DeRef(_key_12473);

// block var val_12474
    DeRef(_val_12474);

// block var op_12475

// block var hashval_12477

// block var the_map_seq_12480
    DeRefDS(_the_map_seq_12480);

// block var slots_12482
    DeRefDS(_slots_12482);

// block var index_12484

// block var old_hash_12486
    return;
    // SubProg put pc: 574 op: BADRETURNF (43)
    ;
}


void _29nested_put(object _the_map_p_12574, object _the_keys_p_12575, object _the_value_p_12576, object _operation_p_12577, object _deprecated_trigger_p_12578)
{
    object _temp_map__12579 = NOVALUE;
    object _7016 = NOVALUE; // 12592 7016
    object _7015 = NOVALUE; // 12591 7015
    object _7014 = NOVALUE; // 12590 7014
    object _7013 = NOVALUE; // 12589 7013
    object _7012 = NOVALUE; // 12588 7012
// skipping _7011  name type: 0
    object _7010 = NOVALUE; // 12586 7010
    object _7009 = NOVALUE; // 12585 7009
    object _7008 = NOVALUE; // 12583 7008
// skipping _7007  name type: 0
    object _7006 = NOVALUE; // 12581 7006
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg nested_put pc: 1 op: SEQUENCE_CHECK (97)
    // SubProg nested_put pc: 3 op: INTEGER_CHECK (96)
    // SubProg nested_put pc: 5 op: STARTLINE (58)

    /** map.e:701		if length( the_keys_p ) = 1 then*/
    // SubProg nested_put pc: 7 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_12575)){
            _7006 = SEQ_PTR(_the_keys_p_12575)->length;
    }
    else {
        _7006 = 1;
    }
    // SubProg nested_put pc: 10 op: EQUALS_IFW_I (121)
    if (_7006 != 1)
    goto L1; // [10] 30
    // SubProg nested_put pc: 14 op: STARTLINE (58)

    /** map.e:702			put( the_map_p, the_keys_p[1], the_value_p, operation_p )*/
    // SubProg nested_put pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12575);
    _7008 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 20 op: PROC (27)
    Ref(_the_map_p_12574);
    Ref(_7008);
    Ref(_the_value_p_12576);
    _29put(_the_map_p_12574, _7008, _the_value_p_12576, _operation_p_12577, 0);
    _7008 = NOVALUE;
    // SubProg nested_put pc: 27 op: ELSE (23)
    goto L2; // [27] 84
    // SubProg nested_put pc: 29 op: NOP1 (159)
L1: // addr: 30 pc: 29 sub: 12572 op: 159
    // SubProg nested_put pc: 30 op: STARTLINE (58)

    /** map.e:704			temp_map_ = new_extra( get( the_map_p, the_keys_p[1] ) )*/
    // SubProg nested_put pc: 32 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12575);
    _7009 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 36 op: PROC (27)
    Ref(_the_map_p_12574);
    Ref(_7009);
    _7010 = _29get(_the_map_p_12574, _7009, 0);
    _7009 = NOVALUE;
    // SubProg nested_put pc: 42 op: PROC (27)
    _0 = _temp_map__12579;
    _temp_map__12579 = _29new_extra(_7010, 8);
    DeRef(_0);
    _7010 = NOVALUE;
    // SubProg nested_put pc: 47 op: STARTLINE (58)

    /** map.e:705			nested_put( temp_map_, the_keys_p[2..$], the_value_p, operation_p )*/
    // SubProg nested_put pc: 49 op: LENGTH (42)
    if (IS_SEQUENCE(_the_keys_p_12575)){
            _7012 = SEQ_PTR(_the_keys_p_12575)->length;
    }
    else {
        _7012 = 1;
    }
    // SubProg nested_put pc: 52 op: RHS_SLICE (46)
    rhs_slice_target = (object_ptr)&_7013;
    RHS_Slice(_the_keys_p_12575, 2, _7012);
    // SubProg nested_put pc: 57 op: ASSIGN (18)
    Ref(_the_value_p_12576);
    DeRef(_7014);
    _7014 = _the_value_p_12576;
    // SubProg nested_put pc: 60 op: ASSIGN (18)
    DeRef(_7015);
    _7015 = _operation_p_12577;
    // SubProg nested_put pc: 63 op: PROC (27)
    Ref(_temp_map__12579);
    _29nested_put(_temp_map__12579, _7013, _7014, _7015, 0);
    _7013 = NOVALUE;
    _7014 = NOVALUE;
    _7015 = NOVALUE;
    // SubProg nested_put pc: 70 op: STARTLINE (58)

    /** map.e:706			put( the_map_p, the_keys_p[1], temp_map_, PUT )*/
    // SubProg nested_put pc: 72 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_the_keys_p_12575);
    _7016 = (object)*(((s1_ptr)_2)->base + 1);
    // SubProg nested_put pc: 76 op: PROC (27)
    Ref(_the_map_p_12574);
    Ref(_7016);
    Ref(_temp_map__12579);
    _29put(_the_map_p_12574, _7016, _temp_map__12579, 1, 0);
    _7016 = NOVALUE;
    // SubProg nested_put pc: 83 op: NOP1 (159)
L2: // addr: 84 pc: 83 sub: 12572 op: 159
    // SubProg nested_put pc: 84 op: STARTLINE (58)

    /** map.e:708	end procedure*/
    // SubProg nested_put pc: 86 op: RETURNP (29)

// Exiting block BLOCK: nested_put

// block var the_map_p_12574
    DeRef(_the_map_p_12574);

// block var the_keys_p_12575
    DeRefDS(_the_keys_p_12575);

// block var the_value_p_12576
    DeRef(_the_value_p_12576);

// block var operation_p_12577

// block var temp_map__12579
    DeRef(_temp_map__12579);
    return;
    // SubProg nested_put pc: 89 op: BADRETURNF (43)
    ;
}


void _29remove(object _the_map_p_12595, object _key_12596)
{
    object _hashval_12597 = NOVALUE;
    object _hash_inlined_hash_at_2_12599 = NOVALUE;
    object _slots_12600 = NOVALUE;
    object _index_12603 = NOVALUE;
    object _7028 = NOVALUE; // 12614 7028
    object _7027 = NOVALUE; // 12613 7027
// skipping _7026  name type: 0
    object _7025 = NOVALUE; // 12611 7025
// skipping _7024  name type: 0
    object _7023 = NOVALUE; // 12609 7023
// skipping _7022  name type: 0
    object _7021 = NOVALUE; // 12607 7021
    object _7020 = NOVALUE; // 12606 7020
// skipping _7019  name type: 0
// skipping _7018  name type: 0
    object _7017 = NOVALUE; // 12601 7017
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg remove pc: 1 op: STARTLINE (58)

    /** map.e:735		integer hashval = hash( key )*/
    // SubProg remove pc: 3 op: STARTLINE (58)

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    // SubProg remove pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 7 op: HASH (194)
    _hashval_12597 = calc_hash(_key_12596, -6);
    // SubProg remove pc: 11 op: NOP1 (159)
    // SubProg remove pc: 12 op: STARTLINE (58)

    /** map.e:736		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg remove pc: 14 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 16 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12595)){
        _7017 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12595)->dbl));
    }
    else{
        _7017 = (object)*(((s1_ptr)_2)->base + _the_map_p_12595);
    }
    // SubProg remove pc: 20 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12600);
    _2 = (object)SEQ_PTR(_7017);
    _slots_12600 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12600);
    _7017 = NOVALUE;
    // SubProg remove pc: 24 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 26 op: STARTLINE (58)

    /** map.e:738		integer index = lookup( key, hashval, slots )*/
    // SubProg remove pc: 28 op: PROC (27)
    Ref(_key_12596);
    RefDS(_slots_12600);
    _index_12603 = _29lookup(_key_12596, _hashval_12597, _slots_12600);
    // SubProg remove pc: 34 op: INTEGER_CHECK (96)
    if (!IS_ATOM_INT(_index_12603)) {
        _1 = (object)(DBL_PTR(_index_12603)->dbl);
        DeRefDS(_index_12603);
        _index_12603 = _1;
    }
    // SubProg remove pc: 36 op: STARTLINE (58)

    /** map.e:739		if hashval = slots[index][SLOT_HASH] then*/
    // SubProg remove pc: 38 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_slots_12600);
    _7020 = (object)*(((s1_ptr)_2)->base + _index_12603);
    // SubProg remove pc: 42 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7020);
    _7021 = (object)*(((s1_ptr)_2)->base + 1);
    _7020 = NOVALUE;
    // SubProg remove pc: 46 op: EQUALS_IFW (104)
    if (binary_op_a(NOTEQ, _hashval_12597, _7021)){
        _7021 = NOVALUE;
        goto L1; // [46] 99
    }
    _7021 = NOVALUE;
    // SubProg remove pc: 50 op: STARTLINE (58)

    /** map.e:740			slots = {}*/
    // SubProg remove pc: 52 op: ASSIGN (18)
    RefDS(_5);
    DeRefDS(_slots_12600);
    _slots_12600 = _5;
    // SubProg remove pc: 55 op: SEQUENCE_CHECK (97)
    // SubProg remove pc: 57 op: STARTLINE (58)

    /** map.e:741			eumem:ram_space[the_map_p][MAP_SLOTS][index] = REMOVED_SLOT*/
    // SubProg remove pc: 59 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 61 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12595))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12595)->dbl));
    else
    _3 = (object)(_the_map_p_12595 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 66 op: LHS_SUBS (95)
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(2 + ((s1_ptr)_2)->base);
    _7023 = NOVALUE;
    // SubProg remove pc: 71 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 73 op: PASSIGN_SUBS (162)
    RefDS(_29REMOVED_SLOT_12212);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_12603);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _29REMOVED_SLOT_12212;
    DeRef(_1);
    _7023 = NOVALUE;
    // SubProg remove pc: 77 op: STARTLINE (58)

    /** map.e:742			eumem:ram_space[the_map_p][MAP_SIZE] -= 1*/
    // SubProg remove pc: 79 op: GLOBAL_INIT_CHECK (109)
    // SubProg remove pc: 81 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12595))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12595)->dbl));
    else
    _3 = (object)(_the_map_p_12595 + ((s1_ptr)_2)->base);
    // SubProg remove pc: 86 op: PASSIGN_OP_SUBS (164)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _7027 = (object)*(((s1_ptr)_2)->base + 1);
    _7025 = NOVALUE;
    // SubProg remove pc: 90 op: MINUS (10)
    if (IS_ATOM_INT(_7027)) {
        _7028 = _7027 - 1;
        if ((object)((uintptr_t)_7028 +(uintptr_t) HIGH_BITS) >= 0){
            _7028 = NewDouble((eudouble)_7028);
        }
    }
    else {
        _7028 = binary_op(MINUS, _7027, 1);
    }
    _7027 = NOVALUE;
    // SubProg remove pc: 94 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7028;
    if( _1 != _7028 ){
        DeRef(_1);
    }
    _7028 = NOVALUE;
    _7025 = NOVALUE;
    // SubProg remove pc: 98 op: NOP1 (159)
L1: // addr: 99 pc: 98 sub: 12593 op: 159
    // SubProg remove pc: 99 op: STARTLINE (58)

    /** map.e:744	end procedure*/
    // SubProg remove pc: 101 op: RETURNP (29)

// Exiting block BLOCK: remove

// block var the_map_p_12595
    DeRef(_the_map_p_12595);

// block var key_12596
    DeRef(_key_12596);

// block var hashval_12597

// block var slots_12600
    DeRef(_slots_12600);

// block var index_12603
    return;
    // SubProg remove pc: 104 op: BADRETURNF (43)
    ;
}


void _29clear(object _the_map_p_12617)
{
// skipping _7036  name type: 0
    object _7035 = NOVALUE; // 12624 7035
    object _7034 = NOVALUE; // 12623 7034
    object _7033 = NOVALUE; // 12622 7033
    object _7032 = NOVALUE; // 12621 7032
    object _7031 = NOVALUE; // 12620 7031
// skipping _7030  name type: 0
    object _7029 = NOVALUE; // 12618 7029
    object _0, _1, _2, _3;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0; else _3 = 1;
    // SubProg clear pc: 1 op: STARTLINE (58)

    /** map.e:773		eumem:ram_space[the_map_p][MAP_SLOTS] = repeat( EMPTY_SLOT, length( eumem:ram_space[the_map_p][MAP_SLOTS] ) )*/
    // SubProg clear pc: 3 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 5 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12617))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12617)->dbl));
    else
    _3 = (object)(_the_map_p_12617 + ((s1_ptr)_2)->base);
    // SubProg clear pc: 10 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 12 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 14 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12617)){
        _7031 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12617)->dbl));
    }
    else{
        _7031 = (object)*(((s1_ptr)_2)->base + _the_map_p_12617);
    }
    // SubProg clear pc: 18 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7031);
    _7032 = (object)*(((s1_ptr)_2)->base + 2);
    _7031 = NOVALUE;
    // SubProg clear pc: 22 op: LENGTH (42)
    if (IS_SEQUENCE(_7032)){
            _7033 = SEQ_PTR(_7032)->length;
    }
    else {
        _7033 = 1;
    }
    _7032 = NOVALUE;
    // SubProg clear pc: 25 op: REPEAT (32)
    _7034 = Repeat(_29EMPTY_SLOT_12210, _7033);
    _7033 = NOVALUE;
    // SubProg clear pc: 29 op: PASSIGN_SUBS (162)
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7034;
    if( _1 != _7034 ){
        DeRef(_1);
    }
    _7034 = NOVALUE;
    _7029 = NOVALUE;
    // SubProg clear pc: 33 op: STARTLINE (58)

    /** map.e:774		eumem:ram_space[the_map_p][MAP_SIZE]  = 0*/
    // SubProg clear pc: 35 op: GLOBAL_INIT_CHECK (109)
    // SubProg clear pc: 37 op: LHS_SUBS1 (161)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _30ram_space_11312 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12617))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12617)->dbl));
    else
    _3 = (object)(_the_map_p_12617 + ((s1_ptr)_2)->base);
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
    _7035 = NOVALUE;
    // SubProg clear pc: 46 op: STARTLINE (58)

    /** map.e:775	end procedure*/
    // SubProg clear pc: 48 op: RETURNP (29)

// Exiting block BLOCK: clear

// block var the_map_p_12617
    DeRef(_the_map_p_12617);
    _7032 = NOVALUE;
    return;
    // SubProg clear pc: 51 op: BADRETURNF (43)
    ;
}


object _29keys(object _the_map_p_12672, object _sorted_result_12673)
{
    object _slots_12674 = NOVALUE;
    object _keys_12677 = NOVALUE;
    object _kx_12681 = NOVALUE;
    object _7066 = NOVALUE; // 12696 7066
// skipping _7065  name type: 0
    object _7064 = NOVALUE; // 12693 7064
    object _7063 = NOVALUE; // 12691 7063
    object _7062 = NOVALUE; // 12690 7062
// skipping _7061  name type: 0
// skipping _7060  name type: 0
    object _7059 = NOVALUE; // 12687 7059
    object _7058 = NOVALUE; // 12686 7058
    object _7057 = NOVALUE; // 12684 7057
// skipping _7056  name type: 0
    object _7055 = NOVALUE; // 12679 7055
    object _7054 = NOVALUE; // 12678 7054
// skipping _7053  name type: 0
    object _7052 = NOVALUE; // 12675 7052
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg keys pc: 1 op: INTEGER_CHECK (96)
    // SubProg keys pc: 3 op: STARTLINE (58)

    /** map.e:903		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    // SubProg keys pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12672)){
        _7052 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12672)->dbl));
    }
    else{
        _7052 = (object)*(((s1_ptr)_2)->base + _the_map_p_12672);
    }
    // SubProg keys pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12674);
    _2 = (object)SEQ_PTR(_7052);
    _slots_12674 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12674);
    _7052 = NOVALUE;
    // SubProg keys pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg keys pc: 17 op: STARTLINE (58)

    /** map.e:904		sequence keys = repeat( 0, eumem:ram_space[the_map_p][MAP_SIZE] )*/
    // SubProg keys pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg keys pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_p_12672)){
        _7054 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12672)->dbl));
    }
    else{
        _7054 = (object)*(((s1_ptr)_2)->base + _the_map_p_12672);
    }
    // SubProg keys pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7054);
    _7055 = (object)*(((s1_ptr)_2)->base + 1);
    _7054 = NOVALUE;
    // SubProg keys pc: 29 op: REPEAT (32)
    DeRef(_keys_12677);
    _keys_12677 = Repeat(0, _7055);
    _7055 = NOVALUE;
    // SubProg keys pc: 33 op: STARTLINE (58)

    /** map.e:905		integer kx = 0*/
    // SubProg keys pc: 35 op: ASSIGN_I (113)
    _kx_12681 = 0;
    // SubProg keys pc: 38 op: STARTLINE (58)

    /** map.e:906		for i = 1 to length( slots ) do*/
    // SubProg keys pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12674)){
            _7057 = SEQ_PTR(_slots_12674)->length;
    }
    else {
        _7057 = 1;
    }
    // SubProg keys pc: 43 op: FOR_I (125)
    {
        object _i_12683;
        _i_12683 = 1;
L1: // addr: 50 pc: 43 sub: 12670 op: 125
        if (_i_12683 > _7057){
            goto L2; // [43] 106
        }
        // SubProg keys pc: 50 op: STARTLINE (58)

        /** map.e:907			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg keys pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12674);
        _7058 = (object)*(((s1_ptr)_2)->base + _i_12683);
        // SubProg keys pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7058);
        _7059 = (object)*(((s1_ptr)_2)->base + 1);
        _7058 = NOVALUE;
        // SubProg keys pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _7059, 0)){
            _7059 = NOVALUE;
            goto L3; // [60] 99
        }
        _7059 = NOVALUE;
        // SubProg keys pc: 64 op: STARTLINE (58)

        /** map.e:908				kx += 1*/
        // SubProg keys pc: 66 op: PLUS1_I (117)
        _kx_12681 = _kx_12681 + 1;
        // SubProg keys pc: 70 op: STARTLINE (58)

        /** map.e:909				keys[kx] = slots[i][SLOT_KEY]*/
        // SubProg keys pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12674);
        _7062 = (object)*(((s1_ptr)_2)->base + _i_12683);
        // SubProg keys pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7062);
        _7063 = (object)*(((s1_ptr)_2)->base + 2);
        _7062 = NOVALUE;
        // SubProg keys pc: 80 op: ASSIGN_SUBS (16)
        Ref(_7063);
        _2 = (object)SEQ_PTR(_keys_12677);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _keys_12677 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _kx_12681);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7063;
        if( _1 != _7063 ){
            DeRef(_1);
        }
        _7063 = NOVALUE;
        // SubProg keys pc: 84 op: STARTLINE (58)

        /** map.e:910				if kx = length( keys ) then*/
        // SubProg keys pc: 86 op: LENGTH (42)
        if (IS_SEQUENCE(_keys_12677)){
                _7064 = SEQ_PTR(_keys_12677)->length;
        }
        else {
            _7064 = 1;
        }
        // SubProg keys pc: 89 op: EQUALS_IFW_I (121)
        if (_kx_12681 != _7064)
        goto L4; // [89] 98
        // SubProg keys pc: 93 op: STARTLINE (58)

        /** map.e:911					exit*/
        // SubProg keys pc: 95 op: EXIT (61)
        goto L2; // [95] 106
        // SubProg keys pc: 97 op: NOP1 (159)
L4: // addr: 98 pc: 97 sub: 12670 op: 159
        // SubProg keys pc: 98 op: NOP1 (159)
L3: // addr: 99 pc: 98 sub: 12670 op: 159
        // SubProg keys pc: 99 op: STARTLINE (58)

        /** map.e:914		end for*/
        // SubProg keys pc: 101 op: ENDFOR_INT_UP1 (54)
        _i_12683 = _i_12683 + 1;
        goto L1; // [101] 50
L2: // addr: 106 pc: 101 sub: 12670 op: 54
        ;
    }
    // SubProg keys pc: 106 op: STARTLINE (58)

    /** map.e:915		if sorted_result then*/
    // SubProg keys pc: 108 op: IF (20)
    if (_sorted_result_12673 == 0)
    {
        goto L5; // [108] 123
    }
    else{
    }
    // SubProg keys pc: 111 op: STARTLINE (58)

    /** map.e:916			return stdsort:sort( keys )*/
    // SubProg keys pc: 113 op: PROC (27)
    RefDS(_keys_12677);
    _7066 = _24sort(_keys_12677, 1);
    // SubProg keys pc: 118 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_12672
    DeRef(_the_map_p_12672);

// block var sorted_result_12673

// block var slots_12674
    DeRef(_slots_12674);

// block var keys_12677
    DeRefDS(_keys_12677);

// block var kx_12681
    return _7066;
    // SubProg keys pc: 122 op: NOP1 (159)
L5: // addr: 123 pc: 122 sub: 12670 op: 159
    // SubProg keys pc: 123 op: STARTLINE (58)

    /** map.e:918		return keys*/
    // SubProg keys pc: 125 op: RETURNF (28)

// Exiting block BLOCK: keys

// block var the_map_p_12672
    DeRef(_the_map_p_12672);

// block var sorted_result_12673

// block var slots_12674
    DeRef(_slots_12674);

// block var kx_12681
    DeRef(_7066);
    _7066 = NOVALUE;
    return _keys_12677;
    // SubProg keys pc: 129 op: BADRETURNF (43)
    ;
}


object _29pairs(object _the_map_12748, object _sorted_result_12749)
{
    object _slots_12750 = NOVALUE;
    object _pairs_12753 = NOVALUE;
    object _px_12757 = NOVALUE;
    object _7116 = NOVALUE; // 12775 7116
// skipping _7115  name type: 0
    object _7114 = NOVALUE; // 12772 7114
    object _7113 = NOVALUE; // 12770 7113
    object _7112 = NOVALUE; // 12769 7112
    object _7111 = NOVALUE; // 12768 7111
    object _7110 = NOVALUE; // 12767 7110
    object _7109 = NOVALUE; // 12766 7109
// skipping _7108  name type: 0
// skipping _7107  name type: 0
    object _7106 = NOVALUE; // 12763 7106
    object _7105 = NOVALUE; // 12762 7105
    object _7104 = NOVALUE; // 12760 7104
// skipping _7103  name type: 0
    object _7102 = NOVALUE; // 12755 7102
    object _7101 = NOVALUE; // 12754 7101
// skipping _7100  name type: 0
    object _7099 = NOVALUE; // 12751 7099
    object _0, _1, _2;
    
    _0 = 0; _1 = 1; if( _1 ) _2 = 0;
    // SubProg pairs pc: 1 op: INTEGER_CHECK (96)
    // SubProg pairs pc: 3 op: STARTLINE (58)

    /** map.e:1047		sequence slots = eumem:ram_space[the_map][MAP_SLOTS]*/
    // SubProg pairs pc: 5 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 7 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_12748)){
        _7099 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12748)->dbl));
    }
    else{
        _7099 = (object)*(((s1_ptr)_2)->base + _the_map_12748);
    }
    // SubProg pairs pc: 11 op: RHS_SUBS_CHECK (92)
    DeRef(_slots_12750);
    _2 = (object)SEQ_PTR(_7099);
    _slots_12750 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12750);
    _7099 = NOVALUE;
    // SubProg pairs pc: 15 op: SEQUENCE_CHECK (97)
    // SubProg pairs pc: 17 op: STARTLINE (58)

    /** map.e:1048		sequence pairs = repeat( 0, eumem:ram_space[the_map][MAP_SIZE] )*/
    // SubProg pairs pc: 19 op: GLOBAL_INIT_CHECK (109)
    // SubProg pairs pc: 21 op: RHS_SUBS (25)
    _2 = (object)SEQ_PTR(_30ram_space_11312);
    if (!IS_ATOM_INT(_the_map_12748)){
        _7101 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12748)->dbl));
    }
    else{
        _7101 = (object)*(((s1_ptr)_2)->base + _the_map_12748);
    }
    // SubProg pairs pc: 25 op: RHS_SUBS_CHECK (92)
    _2 = (object)SEQ_PTR(_7101);
    _7102 = (object)*(((s1_ptr)_2)->base + 1);
    _7101 = NOVALUE;
    // SubProg pairs pc: 29 op: REPEAT (32)
    DeRef(_pairs_12753);
    _pairs_12753 = Repeat(0, _7102);
    _7102 = NOVALUE;
    // SubProg pairs pc: 33 op: STARTLINE (58)

    /** map.e:1049		integer px = 0*/
    // SubProg pairs pc: 35 op: ASSIGN_I (113)
    _px_12757 = 0;
    // SubProg pairs pc: 38 op: STARTLINE (58)

    /** map.e:1050		for i = 1 to length( slots ) do*/
    // SubProg pairs pc: 40 op: LENGTH (42)
    if (IS_SEQUENCE(_slots_12750)){
            _7104 = SEQ_PTR(_slots_12750)->length;
    }
    else {
        _7104 = 1;
    }
    // SubProg pairs pc: 43 op: FOR_I (125)
    {
        object _i_12759;
        _i_12759 = 1;
L1: // addr: 50 pc: 43 sub: 12746 op: 125
        if (_i_12759 > _7104){
            goto L2; // [43] 118
        }
        // SubProg pairs pc: 50 op: STARTLINE (58)

        /** map.e:1051			if slots[i][SLOT_HASH] >= 0 then*/
        // SubProg pairs pc: 52 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12750);
        _7105 = (object)*(((s1_ptr)_2)->base + _i_12759);
        // SubProg pairs pc: 56 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7105);
        _7106 = (object)*(((s1_ptr)_2)->base + 1);
        _7105 = NOVALUE;
        // SubProg pairs pc: 60 op: GREATEREQ_IFW (103)
        if (binary_op_a(LESS, _7106, 0)){
            _7106 = NOVALUE;
            goto L3; // [60] 111
        }
        _7106 = NOVALUE;
        // SubProg pairs pc: 64 op: STARTLINE (58)

        /** map.e:1052				px += 1*/
        // SubProg pairs pc: 66 op: PLUS1_I (117)
        _px_12757 = _px_12757 + 1;
        // SubProg pairs pc: 70 op: STARTLINE (58)

        /** map.e:1053				pairs[px] = { slots[i][SLOT_KEY], slots[i][SLOT_VALUE] }*/
        // SubProg pairs pc: 72 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12750);
        _7109 = (object)*(((s1_ptr)_2)->base + _i_12759);
        // SubProg pairs pc: 76 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7109);
        _7110 = (object)*(((s1_ptr)_2)->base + 2);
        _7109 = NOVALUE;
        // SubProg pairs pc: 80 op: RHS_SUBS (25)
        _2 = (object)SEQ_PTR(_slots_12750);
        _7111 = (object)*(((s1_ptr)_2)->base + _i_12759);
        // SubProg pairs pc: 84 op: RHS_SUBS_CHECK (92)
        _2 = (object)SEQ_PTR(_7111);
        _7112 = (object)*(((s1_ptr)_2)->base + 3);
        _7111 = NOVALUE;
        // SubProg pairs pc: 88 op: RIGHT_BRACE_2 (85)
        Ref(_7112);
        Ref(_7110);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _7110;
        ((intptr_t *)_2)[2] = _7112;
        _7113 = MAKE_SEQ(_1);
        _7112 = NOVALUE;
        _7110 = NOVALUE;
        // SubProg pairs pc: 92 op: ASSIGN_SUBS (16)
        _2 = (object)SEQ_PTR(_pairs_12753);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pairs_12753 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _px_12757);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7113;
        if( _1 != _7113 ){
            DeRef(_1);
        }
        _7113 = NOVALUE;
        // SubProg pairs pc: 96 op: STARTLINE (58)

        /** map.e:1054				if px = length( pairs ) then*/
        // SubProg pairs pc: 98 op: LENGTH (42)
        if (IS_SEQUENCE(_pairs_12753)){
                _7114 = SEQ_PTR(_pairs_12753)->length;
        }
        else {
            _7114 = 1;
        }
        // SubProg pairs pc: 101 op: EQUALS_IFW_I (121)
        if (_px_12757 != _7114)
        goto L4; // [101] 110
        // SubProg pairs pc: 105 op: STARTLINE (58)

        /** map.e:1055					exit*/
        // SubProg pairs pc: 107 op: EXIT (61)
        goto L2; // [107] 118
        // SubProg pairs pc: 109 op: NOP1 (159)
L4: // addr: 110 pc: 109 sub: 12746 op: 159
        // SubProg pairs pc: 110 op: NOP1 (159)
L3: // addr: 111 pc: 110 sub: 12746 op: 159
        // SubProg pairs pc: 111 op: STARTLINE (58)

        /** map.e:1058		end for*/
        // SubProg pairs pc: 113 op: ENDFOR_INT_UP1 (54)
        _i_12759 = _i_12759 + 1;
        goto L1; // [113] 50
L2: // addr: 118 pc: 113 sub: 12746 op: 54
        ;
    }
    // SubProg pairs pc: 118 op: STARTLINE (58)

    /** map.e:1059		if sorted_result then*/
    // SubProg pairs pc: 120 op: IF (20)
    if (_sorted_result_12749 == 0)
    {
        goto L5; // [120] 135
    }
    else{
    }
    // SubProg pairs pc: 123 op: STARTLINE (58)

    /** map.e:1060			return stdsort:sort( pairs )*/
    // SubProg pairs pc: 125 op: PROC (27)
    RefDS(_pairs_12753);
    _7116 = _24sort(_pairs_12753, 1);
    // SubProg pairs pc: 130 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_12748
    DeRef(_the_map_12748);

// block var sorted_result_12749

// block var slots_12750
    DeRef(_slots_12750);

// block var pairs_12753
    DeRefDS(_pairs_12753);

// block var px_12757
    return _7116;
    // SubProg pairs pc: 134 op: NOP1 (159)
L5: // addr: 135 pc: 134 sub: 12746 op: 159
    // SubProg pairs pc: 135 op: STARTLINE (58)

    /** map.e:1062		return pairs*/
    // SubProg pairs pc: 137 op: RETURNF (28)

// Exiting block BLOCK: pairs

// block var the_map_12748
    DeRef(_the_map_12748);

// block var sorted_result_12749

// block var slots_12750
    DeRef(_slots_12750);

// block var px_12757
    DeRef(_7116);
    _7116 = NOVALUE;
    return _pairs_12753;
    // SubProg pairs pc: 141 op: BADRETURNF (43)
    ;
}



// 0x3C3F797C
