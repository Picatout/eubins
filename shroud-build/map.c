// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _30map(object _m_12223)
{
    object _6842 = NOVALUE;
    object _6841 = NOVALUE;
    object _6840 = NOVALUE;
    object _6838 = NOVALUE;
    object _6837 = NOVALUE;
    object _6836 = NOVALUE;
    object _6834 = NOVALUE;
    object _6833 = NOVALUE;
    object _6832 = NOVALUE;
    object _6830 = NOVALUE;
    object _6829 = NOVALUE;
    object _6826 = NOVALUE;
    object _6824 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:126		if not atom( m ) then*/
    _6824 = IS_ATOM(_m_12223);
    if (_6824 != 0)
    goto L1; // [6] 16
    _6824 = NOVALUE;

    /** map.e:127			return 0*/
    DeRef(_m_12223);
    return 0;
L1: 

    /** map.e:129		if length( eumem:ram_space ) < m then*/
    if (IS_SEQUENCE(_31ram_space_11461)){
            _6826 = SEQ_PTR(_31ram_space_11461)->length;
    }
    else {
        _6826 = 1;
    }
    if (binary_op_a(GREATEREQ, _6826, _m_12223)){
        _6826 = NOVALUE;
        goto L2; // [23] 34
    }
    _6826 = NOVALUE;

    /** map.e:130			return 0*/
    DeRef(_m_12223);
    return 0;
L2: 

    /** map.e:132		if m < 1 then*/
    if (binary_op_a(GREATEREQ, _m_12223, 1)){
        goto L3; // [36] 47
    }

    /** map.e:133			return 0*/
    DeRef(_m_12223);
    return 0;
L3: 

    /** map.e:135		if length( eumem:ram_space[m] ) != MAP_MAX then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_m_12223)){
        _6829 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12223)->dbl));
    }
    else{
        _6829 = (object)*(((s1_ptr)_2)->base + _m_12223);
    }
    if (IS_SEQUENCE(_6829)){
            _6830 = SEQ_PTR(_6829)->length;
    }
    else {
        _6830 = 1;
    }
    _6829 = NOVALUE;
    if (_6830 == 3)
    goto L4; // [58] 69

    /** map.e:136			return 0*/
    DeRef(_m_12223);
    _6829 = NOVALUE;
    return 0;
L4: 

    /** map.e:138		if not atom( eumem:ram_space[m][MAP_SIZE] ) then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_m_12223)){
        _6832 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12223)->dbl));
    }
    else{
        _6832 = (object)*(((s1_ptr)_2)->base + _m_12223);
    }
    _2 = (object)SEQ_PTR(_6832);
    _6833 = (object)*(((s1_ptr)_2)->base + 1);
    _6832 = NOVALUE;
    _6834 = IS_ATOM(_6833);
    _6833 = NOVALUE;
    if (_6834 != 0)
    goto L5; // [84] 94
    _6834 = NOVALUE;

    /** map.e:139			return 0*/
    DeRef(_m_12223);
    _6829 = NOVALUE;
    return 0;
L5: 

    /** map.e:141		if not sequence( eumem:ram_space[m][MAP_SLOTS] ) then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_m_12223)){
        _6836 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12223)->dbl));
    }
    else{
        _6836 = (object)*(((s1_ptr)_2)->base + _m_12223);
    }
    _2 = (object)SEQ_PTR(_6836);
    _6837 = (object)*(((s1_ptr)_2)->base + 2);
    _6836 = NOVALUE;
    _6838 = IS_SEQUENCE(_6837);
    _6837 = NOVALUE;
    if (_6838 != 0)
    goto L6; // [109] 119
    _6838 = NOVALUE;

    /** map.e:142			return 0*/
    DeRef(_m_12223);
    _6829 = NOVALUE;
    return 0;
L6: 

    /** map.e:144		if not atom( eumem:ram_space[m][MAP_MAX] ) then*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_m_12223)){
        _6840 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_m_12223)->dbl));
    }
    else{
        _6840 = (object)*(((s1_ptr)_2)->base + _m_12223);
    }
    _2 = (object)SEQ_PTR(_6840);
    _6841 = (object)*(((s1_ptr)_2)->base + 3);
    _6840 = NOVALUE;
    _6842 = IS_ATOM(_6841);
    _6841 = NOVALUE;
    if (_6842 != 0)
    goto L7; // [134] 144
    _6842 = NOVALUE;

    /** map.e:145			return 0*/
    DeRef(_m_12223);
    _6829 = NOVALUE;
    return 0;
L7: 

    /** map.e:147		return 1*/
    DeRef(_m_12223);
    _6829 = NOVALUE;
    return 1;
    ;
}


object _30new_map_seq(object _size_12254)
{
    object _slots_12255 = NOVALUE;
    object _6853 = NOVALUE;
    object _6852 = NOVALUE;
    object _6851 = NOVALUE;
    object _6850 = NOVALUE;
    object _6846 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:155		integer slots = DEFAULT_SIZE * 2*/
    _slots_12255 = 16;

    /** map.e:156		if size <= DEFAULT_SIZE then*/
    if (_size_12254 > 8)
    goto L1; // [11] 23

    /** map.e:157			size = DEFAULT_SIZE*/
    _size_12254 = 8;
    goto L2; // [20] 55
L1: 

    /** map.e:159			size = floor( size * 1.5 )*/
    _6846 = NewDouble((eudouble)_size_12254 * DBL_PTR(_3906)->dbl);
    _size_12254 = unary_op(FLOOR, _6846);
    DeRefDS(_6846);
    _6846 = NOVALUE;
    if (!IS_ATOM_INT(_size_12254)) {
        _1 = (object)(DBL_PTR(_size_12254)->dbl);
        DeRefDS(_size_12254);
        _size_12254 = _1;
    }

    /** map.e:160			while slots < size do*/
L3: 
    if (_slots_12255 >= _size_12254)
    goto L4; // [39] 54

    /** map.e:162				slots *= 2*/
    _slots_12255 = _slots_12255 + _slots_12255;

    /** map.e:163			end while*/
    goto L3; // [51] 39
L4: 
L2: 

    /** map.e:165		return { 0, repeat( EMPTY_SLOT, slots ), floor( size * 2/3 ) }*/
    _6850 = Repeat(_30EMPTY_SLOT_12211, _slots_12255);
    _6851 = _size_12254 + _size_12254;
    if ((object)((uintptr_t)_6851 + (uintptr_t)HIGH_BITS) >= 0){
        _6851 = NewDouble((eudouble)_6851);
    }
    if (IS_ATOM_INT(_6851)) {
        if (3 > 0 && _6851 >= 0) {
            _6852 = _6851 / 3;
        }
        else {
            temp_dbl = EUFLOOR((eudouble)_6851 / (eudouble)3);
            if (_6851 != MININT)
            _6852 = (object)temp_dbl;
            else
            _6852 = NewDouble(temp_dbl);
        }
    }
    else {
        _2 = binary_op(DIVIDE, _6851, 3);
        _6852 = unary_op(FLOOR, _2);
        DeRef(_2);
    }
    DeRef(_6851);
    _6851 = NOVALUE;
    _1 = NewS1(3);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t*)_2)[1] = 0;
    ((intptr_t*)_2)[2] = _6850;
    ((intptr_t*)_2)[3] = _6852;
    _6853 = MAKE_SEQ(_1);
    _6852 = NOVALUE;
    _6850 = NOVALUE;
    return _6853;
    ;
}


object _30new(object _initial_size_p_12292)
{
    object _6860 = NOVALUE;
    object _6859 = NOVALUE;
    object _0, _1, _2;
    
    if (!IS_ATOM_INT(_initial_size_p_12292)) {
        _1 = (object)(DBL_PTR(_initial_size_p_12292)->dbl);
        DeRefDS(_initial_size_p_12292);
        _initial_size_p_12292 = _1;
    }

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _6859 = _30new_map_seq(_initial_size_p_12292);
    _6860 = _31malloc(_6859, 1);
    _6859 = NOVALUE;
    return _6860;
    ;
}


object _30lookup(object _key_12297, object _hashval_12298, object _slots_12300)
{
    object _mask_12301 = NOVALUE;
    object _index_12304 = NOVALUE;
    object _index_hash_12307 = NOVALUE;
    object _slot_12308 = NOVALUE;
    object _perturb_12309 = NOVALUE;
    object _this_hash_12310 = NOVALUE;
    object _this_key_12311 = NOVALUE;
    object _looks_12312 = NOVALUE;
    object _removed_slot_12313 = NOVALUE;
    object _6881 = NOVALUE;
    object _6869 = NOVALUE;
    object _6868 = NOVALUE;
    object _6867 = NOVALUE;
    object _6866 = NOVALUE;
    object _6864 = NOVALUE;
    object _6862 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:275		integer mask = length( slots ) - 1*/
    if (IS_SEQUENCE(_slots_12300)){
            _6862 = SEQ_PTR(_slots_12300)->length;
    }
    else {
        _6862 = 1;
    }
    _mask_12301 = _6862 - 1;
    _6862 = NOVALUE;

    /** map.e:276		integer index = and_bits( hashval, mask ) + 1*/
    {uintptr_t tu;
         tu = (uintptr_t)_hashval_12298 & (uintptr_t)_mask_12301;
         _6864 = MAKE_UINT(tu);
    }
    if (IS_ATOM_INT(_6864)) {
        _index_12304 = _6864 + 1;
    }
    else
    { // coercing _index_12304 to an integer 1
        _index_12304 = 1+(object)(DBL_PTR(_6864)->dbl);
        if( !IS_ATOM_INT(_index_12304) ){
            _index_12304 = (object)DBL_PTR(_index_12304)->dbl;
        }
    }
    DeRef(_6864);
    _6864 = NOVALUE;

    /** map.e:277		ifdef BITS64 then*/

    /** map.e:280			atom index_hash = index*/
    DeRef(_index_hash_12307);
    _index_hash_12307 = _index_12304;

    /** map.e:282		sequence slot*/

    /** map.e:284		integer perturb = hashval*/
    _perturb_12309 = _hashval_12298;

    /** map.e:285		integer this_hash*/

    /** map.e:286		object this_key*/

    /** map.e:287		integer looks = 0*/
    _looks_12312 = 0;

    /** map.e:288		integer removed_slot = 0*/
    _removed_slot_12313 = 0;

    /** map.e:289		while this_hash != hashval or not equal( this_key, key ) with entry do*/
    goto L1; // [54] 140
L2: 
    _6866 = (_this_hash_12310 != _hashval_12298);
    if (_6866 != 0) {
        DeRef(_6867);
        _6867 = 1;
        goto L3; // [63] 80
    }
    if (_this_key_12311 == _key_12297)
    _6868 = 1;
    else if (IS_ATOM_INT(_this_key_12311) && IS_ATOM_INT(_key_12297))
    _6868 = 0;
    else
    _6868 = (compare(_this_key_12311, _key_12297) == 0);
    _6869 = (_6868 == 0);
    _6868 = NOVALUE;
    _6867 = (_6869 != 0);
L3: 
    if (_6867 == 0)
    {
        _6867 = NOVALUE;
        goto L4; // [80] 217
    }
    else{
        _6867 = NOVALUE;
    }

    /** map.e:290			index_hash *= 4*/
    _0 = _index_hash_12307;
    if (IS_ATOM_INT(_index_hash_12307)) {
        if (_index_hash_12307 == (short)_index_hash_12307){
            _index_hash_12307 = _index_hash_12307 * 4;
        }
        else{
            _index_hash_12307 = NewDouble(_index_hash_12307 * (eudouble)4);
        }
    }
    else {
        _index_hash_12307 = NewDouble(DBL_PTR(_index_hash_12307)->dbl * (eudouble)4);
    }
    DeRef(_0);

    /** map.e:291			index_hash += index*/
    _0 = _index_hash_12307;
    if (IS_ATOM_INT(_index_hash_12307)) {
        _index_hash_12307 = _index_hash_12307 + _index_12304;
        if ((object)((uintptr_t)_index_hash_12307 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12307 = NewDouble((eudouble)_index_hash_12307);
        }
    }
    else {
        _index_hash_12307 = NewDouble(DBL_PTR(_index_hash_12307)->dbl + (eudouble)_index_12304);
    }
    DeRef(_0);

    /** map.e:292			index_hash += perturb*/
    _0 = _index_hash_12307;
    if (IS_ATOM_INT(_index_hash_12307)) {
        _index_hash_12307 = _index_hash_12307 + _perturb_12309;
        if ((object)((uintptr_t)_index_hash_12307 + (uintptr_t)HIGH_BITS) >= 0){
            _index_hash_12307 = NewDouble((eudouble)_index_hash_12307);
        }
    }
    else {
        _index_hash_12307 = NewDouble(DBL_PTR(_index_hash_12307)->dbl + (eudouble)_perturb_12309);
    }
    DeRef(_0);

    /** map.e:293			index_hash += 1*/
    _0 = _index_hash_12307;
    if (IS_ATOM_INT(_index_hash_12307)) {
        _index_hash_12307 = _index_hash_12307 + 1;
        if (_index_hash_12307 > MAXINT){
            _index_hash_12307 = NewDouble((eudouble)_index_hash_12307);
        }
    }
    else
    _index_hash_12307 = binary_op(PLUS, 1, _index_hash_12307);
    DeRef(_0);

    /** map.e:294			index_hash = and_bits( 0xffff_ffff, index_hash )*/
    _0 = _index_hash_12307;
    if (IS_ATOM_INT(_index_hash_12307)) {
        temp_d.dbl = (eudouble)_index_hash_12307;
        _index_hash_12307 = Dand_bits(DBL_PTR(_406), &temp_d);
    }
    else
    _index_hash_12307 = Dand_bits(DBL_PTR(_406), DBL_PTR(_index_hash_12307));
    DeRef(_0);

    /** map.e:295			index = and_bits( mask, index_hash )*/
    if (IS_ATOM_INT(_index_hash_12307)) {
        {uintptr_t tu;
             tu = (uintptr_t)_mask_12301 & (uintptr_t)_index_hash_12307;
             _index_12304 = MAKE_UINT(tu);
        }
    }
    else {
        temp_d.dbl = (eudouble)_mask_12301;
        _index_12304 = Dand_bits(&temp_d, DBL_PTR(_index_hash_12307));
    }
    if (!IS_ATOM_INT(_index_12304)) {
        _1 = (object)(DBL_PTR(_index_12304)->dbl);
        DeRefDS(_index_12304);
        _index_12304 = _1;
    }

    /** map.e:296			index += 1*/
    _index_12304 = _index_12304 + 1;

    /** map.e:297			perturb = floor( perturb / 32 )*/
    if (32 > 0 && _perturb_12309 >= 0) {
        _perturb_12309 = _perturb_12309 / 32;
    }
    else {
        temp_dbl = EUFLOOR((eudouble)_perturb_12309 / (eudouble)32);
        _perturb_12309 = (object)temp_dbl;
    }

    /** map.e:298		entry*/
L1: 

    /** map.e:299			slot = slots[index]*/
    DeRef(_slot_12308);
    _2 = (object)SEQ_PTR(_slots_12300);
    _slot_12308 = (object)*(((s1_ptr)_2)->base + _index_12304);
    Ref(_slot_12308);

    /** map.e:300			this_hash = slot[SLOT_HASH]*/
    _2 = (object)SEQ_PTR(_slot_12308);
    _this_hash_12310 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_this_hash_12310))
    _this_hash_12310 = (object)DBL_PTR(_this_hash_12310)->dbl;

    /** map.e:301			if this_hash = EMPTY then*/
    if (_this_hash_12310 != -2)
    goto L5; // [156] 169

    /** map.e:302				return index*/
    DeRef(_key_12297);
    DeRefDS(_slots_12300);
    DeRef(_index_hash_12307);
    DeRefDS(_slot_12308);
    DeRef(_this_key_12311);
    DeRef(_6866);
    _6866 = NOVALUE;
    DeRef(_6869);
    _6869 = NOVALUE;
    return _index_12304;
    goto L6; // [166] 200
L5: 

    /** map.e:303			elsif looks > length( slots ) then*/
    if (IS_SEQUENCE(_slots_12300)){
            _6881 = SEQ_PTR(_slots_12300)->length;
    }
    else {
        _6881 = 1;
    }
    if (_looks_12312 <= _6881)
    goto L7; // [174] 187

    /** map.e:304				return removed_slot*/
    DeRef(_key_12297);
    DeRefDS(_slots_12300);
    DeRef(_index_hash_12307);
    DeRef(_slot_12308);
    DeRef(_this_key_12311);
    DeRef(_6866);
    _6866 = NOVALUE;
    DeRef(_6869);
    _6869 = NOVALUE;
    return _removed_slot_12313;
    goto L6; // [184] 200
L7: 

    /** map.e:305			elsif this_hash = REMOVED then*/
    if (_this_hash_12310 != -1)
    goto L8; // [189] 199

    /** map.e:306				removed_slot = index*/
    _removed_slot_12313 = _index_12304;
L8: 
L6: 

    /** map.e:308			this_key = slot[SLOT_KEY]*/
    DeRef(_this_key_12311);
    _2 = (object)SEQ_PTR(_slot_12308);
    _this_key_12311 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_this_key_12311);

    /** map.e:309			looks += 1*/
    _looks_12312 = _looks_12312 + 1;

    /** map.e:310		end while*/
    goto L2; // [214] 57
L4: 

    /** map.e:311		return index*/
    DeRef(_key_12297);
    DeRefDS(_slots_12300);
    DeRef(_index_hash_12307);
    DeRef(_slot_12308);
    DeRef(_this_key_12311);
    DeRef(_6866);
    _6866 = NOVALUE;
    DeRef(_6869);
    _6869 = NOVALUE;
    return _index_12304;
    ;
}


object _30rehash_seq(object _old_map_12340, object _size_12341)
{
    object _old_size_12342 = NOVALUE;
    object _index_12344 = NOVALUE;
    object _new_map_12357 = NOVALUE;
    object _slots_12359 = NOVALUE;
    object _old_slots_12362 = NOVALUE;
    object _old_slot_12367 = NOVALUE;
    object _old_hash_12369 = NOVALUE;
    object _6902 = NOVALUE;
    object _6898 = NOVALUE;
    object _6896 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:316		integer old_size = old_map[MAP_SIZE]*/
    _2 = (object)SEQ_PTR(_old_map_12340);
    _old_size_12342 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_size_12342))
    _old_size_12342 = (object)DBL_PTR(_old_size_12342)->dbl;

    /** map.e:319		if size = 0 then*/

    /** map.e:320			if old_size > 50_000 then*/
    if (_old_size_12342 <= 50000)
    goto L1; // [19] 32

    /** map.e:321				size = old_size * 2*/
    _size_12341 = _old_size_12342 + _old_size_12342;
    goto L2; // [29] 69
L1: 

    /** map.e:323				size = old_size * 4*/
    _size_12341 = _old_size_12342 * 4;
    goto L2; // [41] 69

    /** map.e:325		elsif size < old_size then*/
    if (_size_12341 >= _old_size_12342)
    goto L3; // [46] 68

    /** map.e:326			size = old_size*/
    _size_12341 = _old_size_12342;

    /** map.e:327			if size < DEFAULT_SIZE then*/
    if (_size_12341 >= 8)
    goto L4; // [57] 67

    /** map.e:328				size = DEFAULT_SIZE*/
    _size_12341 = 8;
L4: 
L3: 
L2: 

    /** map.e:332		sequence new_map = new_map_seq( size )*/
    _0 = _new_map_12357;
    _new_map_12357 = _30new_map_seq(_size_12341);
    DeRef(_0);

    /** map.e:333		sequence slots = new_map[MAP_SLOTS]*/
    DeRef(_slots_12359);
    _2 = (object)SEQ_PTR(_new_map_12357);
    _slots_12359 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12359);

    /** map.e:334		new_map[MAP_SLOTS] = 0*/
    _2 = (object)SEQ_PTR(_new_map_12357);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12357 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** map.e:335		new_map[MAP_SIZE] = old_map[MAP_SIZE]*/
    _2 = (object)SEQ_PTR(_old_map_12340);
    _6896 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_6896);
    _2 = (object)SEQ_PTR(_new_map_12357);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12357 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6896;
    if( _1 != _6896 ){
        DeRef(_1);
    }
    _6896 = NOVALUE;

    /** map.e:337		sequence old_slots = old_map[MAP_SLOTS]*/
    DeRef(_old_slots_12362);
    _2 = (object)SEQ_PTR(_old_map_12340);
    _old_slots_12362 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_old_slots_12362);

    /** map.e:338		for i = 1 to length( old_slots ) do*/
    if (IS_SEQUENCE(_old_slots_12362)){
            _6898 = SEQ_PTR(_old_slots_12362)->length;
    }
    else {
        _6898 = 1;
    }
    {
        object _i_12365;
        _i_12365 = 1;
L5: 
        if (_i_12365 > _6898){
            goto L6; // [114] 171
        }

        /** map.e:339			sequence old_slot = old_slots[i]*/
        DeRef(_old_slot_12367);
        _2 = (object)SEQ_PTR(_old_slots_12362);
        _old_slot_12367 = (object)*(((s1_ptr)_2)->base + _i_12365);
        Ref(_old_slot_12367);

        /** map.e:340			integer old_hash = old_slot[SLOT_HASH]*/
        _2 = (object)SEQ_PTR(_old_slot_12367);
        _old_hash_12369 = (object)*(((s1_ptr)_2)->base + 1);
        if (!IS_ATOM_INT(_old_hash_12369))
        _old_hash_12369 = (object)DBL_PTR(_old_hash_12369)->dbl;

        /** map.e:341			if old_hash != -1 then*/
        if (_old_hash_12369 == -1)
        goto L7; // [137] 162

        /** map.e:342				index = lookup( old_slot[SLOT_KEY], old_hash, slots )*/
        _2 = (object)SEQ_PTR(_old_slot_12367);
        _6902 = (object)*(((s1_ptr)_2)->base + 2);
        Ref(_6902);
        RefDS(_slots_12359);
        _index_12344 = _30lookup(_6902, _old_hash_12369, _slots_12359);
        _6902 = NOVALUE;
        if (!IS_ATOM_INT(_index_12344)) {
            _1 = (object)(DBL_PTR(_index_12344)->dbl);
            DeRefDS(_index_12344);
            _index_12344 = _1;
        }

        /** map.e:343				slots[index] = old_slot*/
        RefDS(_old_slot_12367);
        _2 = (object)SEQ_PTR(_slots_12359);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12359 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12344);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _old_slot_12367;
        DeRef(_1);
L7: 
        DeRef(_old_slot_12367);
        _old_slot_12367 = NOVALUE;

        /** map.e:345		end for*/
        _i_12365 = _i_12365 + 1;
        goto L5; // [166] 121
L6: 
        ;
    }

    /** map.e:346		new_map[MAP_SLOTS] = slots*/
    RefDS(_slots_12359);
    _2 = (object)SEQ_PTR(_new_map_12357);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _new_map_12357 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12359;
    DeRef(_1);

    /** map.e:347		return new_map*/
    DeRefDS(_old_map_12340);
    DeRefDS(_slots_12359);
    DeRef(_old_slots_12362);
    return _new_map_12357;
    ;
}


object _30new_extra(object _the_map_p_12377, object _initial_size_p_12378)
{
    object _new_1__tmp_at22_12384 = NOVALUE;
    object _new_inlined_new_at_22_12383 = NOVALUE;
    object _6904 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:376		if map(the_map_p) then*/
    Ref(_the_map_p_12377);
    _6904 = _30map(_the_map_p_12377);
    if (_6904 == 0) {
        DeRef(_6904);
        _6904 = NOVALUE;
        goto L1; // [9] 21
    }
    else {
        if (!IS_ATOM_INT(_6904) && DBL_PTR(_6904)->dbl == 0.0){
            DeRef(_6904);
            _6904 = NOVALUE;
            goto L1; // [9] 21
        }
        DeRef(_6904);
        _6904 = NOVALUE;
    }
    DeRef(_6904);
    _6904 = NOVALUE;

    /** map.e:377			return the_map_p*/
    return _the_map_p_12377;
    goto L2; // [18] 42
L1: 

    /** map.e:379			return new(initial_size_p)*/

    /** map.e:271		return eumem:malloc( new_map_seq( initial_size_p ) )*/
    _0 = _new_1__tmp_at22_12384;
    _new_1__tmp_at22_12384 = _30new_map_seq(_initial_size_p_12378);
    DeRef(_0);
    Ref(_new_1__tmp_at22_12384);
    _0 = _new_inlined_new_at_22_12383;
    _new_inlined_new_at_22_12383 = _31malloc(_new_1__tmp_at22_12384, 1);
    DeRef(_0);
    DeRef(_new_1__tmp_at22_12384);
    _new_1__tmp_at22_12384 = NOVALUE;
    DeRef(_the_map_p_12377);
    return _new_inlined_new_at_22_12383;
L2: 
    ;
}


object _30has(object _the_map_p_12419, object _key_12420)
{
    object _hashval_12421 = NOVALUE;
    object _hash_inlined_hash_at_2_12423 = NOVALUE;
    object _slots_12424 = NOVALUE;
    object _index_12427 = NOVALUE;
    object _6924 = NOVALUE;
    object _6923 = NOVALUE;
    object _6922 = NOVALUE;
    object _6919 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:464		integer hashval = hash( key )*/

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    _hashval_12421 = calc_hash(_key_12420, -6);

    /** map.e:465		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12419)){
        _6919 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12419)->dbl));
    }
    else{
        _6919 = (object)*(((s1_ptr)_2)->base + _the_map_p_12419);
    }
    DeRef(_slots_12424);
    _2 = (object)SEQ_PTR(_6919);
    _slots_12424 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12424);
    _6919 = NOVALUE;

    /** map.e:466		integer index = lookup( key, hashval, slots )*/
    Ref(_key_12420);
    RefDS(_slots_12424);
    _index_12427 = _30lookup(_key_12420, _hashval_12421, _slots_12424);
    if (!IS_ATOM_INT(_index_12427)) {
        _1 = (object)(DBL_PTR(_index_12427)->dbl);
        DeRefDS(_index_12427);
        _index_12427 = _1;
    }

    /** map.e:468		return hashval = slots[index][SLOT_HASH]*/
    _2 = (object)SEQ_PTR(_slots_12424);
    _6922 = (object)*(((s1_ptr)_2)->base + _index_12427);
    _2 = (object)SEQ_PTR(_6922);
    _6923 = (object)*(((s1_ptr)_2)->base + 1);
    _6922 = NOVALUE;
    if (IS_ATOM_INT(_6923)) {
        _6924 = (_hashval_12421 == _6923);
    }
    else {
        _6924 = binary_op(EQUALS, _hashval_12421, _6923);
    }
    _6923 = NOVALUE;
    DeRef(_the_map_p_12419);
    DeRef(_key_12420);
    DeRefDS(_slots_12424);
    return _6924;
    ;
}


object _30get(object _the_map_p_12434, object _key_12435, object _default_12436)
{
    object _hashval_12437 = NOVALUE;
    object _hash_inlined_hash_at_2_12439 = NOVALUE;
    object _slots_12440 = NOVALUE;
    object _index_12443 = NOVALUE;
    object _slot_12445 = NOVALUE;
    object _6931 = NOVALUE;
    object _6929 = NOVALUE;
    object _6925 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:505		integer hashval = hash( key )*/

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    _hashval_12437 = calc_hash(_key_12435, -6);

    /** map.e:506		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12434)){
        _6925 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12434)->dbl));
    }
    else{
        _6925 = (object)*(((s1_ptr)_2)->base + _the_map_p_12434);
    }
    DeRef(_slots_12440);
    _2 = (object)SEQ_PTR(_6925);
    _slots_12440 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12440);
    _6925 = NOVALUE;

    /** map.e:507		integer index = lookup( key, hashval, slots )*/
    Ref(_key_12435);
    RefDS(_slots_12440);
    _index_12443 = _30lookup(_key_12435, _hashval_12437, _slots_12440);
    if (!IS_ATOM_INT(_index_12443)) {
        _1 = (object)(DBL_PTR(_index_12443)->dbl);
        DeRefDS(_index_12443);
        _index_12443 = _1;
    }

    /** map.e:508		sequence slot = slots[index]*/
    DeRef(_slot_12445);
    _2 = (object)SEQ_PTR(_slots_12440);
    _slot_12445 = (object)*(((s1_ptr)_2)->base + _index_12443);
    Ref(_slot_12445);

    /** map.e:509		if hashval = slot[SLOT_HASH] then*/
    _2 = (object)SEQ_PTR(_slot_12445);
    _6929 = (object)*(((s1_ptr)_2)->base + 1);
    if (binary_op_a(NOTEQ, _hashval_12437, _6929)){
        _6929 = NOVALUE;
        goto L1; // [50] 65
    }
    _6929 = NOVALUE;

    /** map.e:510			return slot[SLOT_VALUE]*/
    _2 = (object)SEQ_PTR(_slot_12445);
    _6931 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_6931);
    DeRef(_the_map_p_12434);
    DeRef(_key_12435);
    DeRef(_default_12436);
    DeRefDS(_slots_12440);
    DeRefDS(_slot_12445);
    return _6931;
L1: 

    /** map.e:512		return default*/
    DeRef(_the_map_p_12434);
    DeRef(_key_12435);
    DeRef(_slots_12440);
    DeRef(_slot_12445);
    _6931 = NOVALUE;
    return _default_12436;
    ;
}


void _30put(object _the_map_p_12473, object _key_12474, object _val_12475, object _op_12476, object _deprecated_12477)
{
    object _hashval_12478 = NOVALUE;
    object _hash_inlined_hash_at_2_12480 = NOVALUE;
    object _the_map_seq_12481 = NOVALUE;
    object _slots_12483 = NOVALUE;
    object _index_12485 = NOVALUE;
    object _old_hash_12487 = NOVALUE;
    object _msg_inlined_crash_at_288_12530 = NOVALUE;
    object _msg_inlined_crash_at_348_12540 = NOVALUE;
    object _msg_inlined_crash_at_535_12572 = NOVALUE;
    object _6998 = NOVALUE;
    object _6996 = NOVALUE;
    object _6995 = NOVALUE;
    object _6994 = NOVALUE;
    object _6993 = NOVALUE;
    object _6992 = NOVALUE;
    object _6990 = NOVALUE;
    object _6989 = NOVALUE;
    object _6988 = NOVALUE;
    object _6987 = NOVALUE;
    object _6986 = NOVALUE;
    object _6985 = NOVALUE;
    object _6983 = NOVALUE;
    object _6982 = NOVALUE;
    object _6981 = NOVALUE;
    object _6980 = NOVALUE;
    object _6978 = NOVALUE;
    object _6977 = NOVALUE;
    object _6976 = NOVALUE;
    object _6975 = NOVALUE;
    object _6972 = NOVALUE;
    object _6971 = NOVALUE;
    object _6970 = NOVALUE;
    object _6969 = NOVALUE;
    object _6968 = NOVALUE;
    object _6966 = NOVALUE;
    object _6965 = NOVALUE;
    object _6964 = NOVALUE;
    object _6963 = NOVALUE;
    object _6962 = NOVALUE;
    object _6960 = NOVALUE;
    object _6957 = NOVALUE;
    object _6956 = NOVALUE;
    object _6954 = NOVALUE;
    object _6949 = NOVALUE;
    object _6948 = NOVALUE;
    object _6945 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:579		integer hashval = hash( key )*/

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    _hashval_12478 = calc_hash(_key_12474, -6);

    /** map.e:580		sequence the_map_seq = eumem:ram_space[the_map_p]*/
    DeRef(_the_map_seq_12481);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12473)){
        _the_map_seq_12481 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12473)->dbl));
    }
    else{
        _the_map_seq_12481 = (object)*(((s1_ptr)_2)->base + _the_map_p_12473);
    }
    Ref(_the_map_seq_12481);

    /** map.e:581		eumem:ram_space[the_map_p] = 0*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12473))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12473)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12473);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** map.e:582		sequence slots = the_map_seq[MAP_SLOTS]*/
    DeRef(_slots_12483);
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    _slots_12483 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12483);

    /** map.e:584		integer index = lookup( key, hashval, slots )*/
    Ref(_key_12474);
    RefDS(_slots_12483);
    _index_12485 = _30lookup(_key_12474, _hashval_12478, _slots_12483);
    if (!IS_ATOM_INT(_index_12485)) {
        _1 = (object)(DBL_PTR(_index_12485)->dbl);
        DeRefDS(_index_12485);
        _index_12485 = _1;
    }

    /** map.e:585		integer old_hash = slots[index][SLOT_HASH]*/
    _2 = (object)SEQ_PTR(_slots_12483);
    _6945 = (object)*(((s1_ptr)_2)->base + _index_12485);
    _2 = (object)SEQ_PTR(_6945);
    _old_hash_12487 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12487)){
        _old_hash_12487 = (object)DBL_PTR(_old_hash_12487)->dbl;
    }
    _6945 = NOVALUE;

    /** map.e:587		if old_hash < 0 then*/
    if (_old_hash_12487 >= 0)
    goto L1; // [62] 142

    /** map.e:589			if the_map_seq[MAP_SIZE] > the_map_seq[MAP_MAX] then*/
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    _6948 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    _6949 = (object)*(((s1_ptr)_2)->base + 3);
    if (binary_op_a(LESSEQ, _6948, _6949)){
        _6948 = NOVALUE;
        _6949 = NOVALUE;
        goto L2; // [76] 127
    }
    _6948 = NOVALUE;
    _6949 = NOVALUE;

    /** map.e:590				slots = {}*/
    RefDS(_5);
    DeRefDS(_slots_12483);
    _slots_12483 = _5;

    /** map.e:591				the_map_seq = rehash_seq( the_map_seq )*/
    RefDS(_the_map_seq_12481);
    _0 = _the_map_seq_12481;
    _the_map_seq_12481 = _30rehash_seq(_the_map_seq_12481, 0);
    DeRefDS(_0);

    /** map.e:592				slots = the_map_seq[MAP_SLOTS]*/
    DeRefDS(_slots_12483);
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    _slots_12483 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12483);

    /** map.e:593				index = lookup( key, hashval, slots )*/
    Ref(_key_12474);
    RefDS(_slots_12483);
    _index_12485 = _30lookup(_key_12474, _hashval_12478, _slots_12483);
    if (!IS_ATOM_INT(_index_12485)) {
        _1 = (object)(DBL_PTR(_index_12485)->dbl);
        DeRefDS(_index_12485);
        _index_12485 = _1;
    }

    /** map.e:594				old_hash = slots[index][SLOT_HASH]*/
    _2 = (object)SEQ_PTR(_slots_12483);
    _6954 = (object)*(((s1_ptr)_2)->base + _index_12485);
    _2 = (object)SEQ_PTR(_6954);
    _old_hash_12487 = (object)*(((s1_ptr)_2)->base + 1);
    if (!IS_ATOM_INT(_old_hash_12487)){
        _old_hash_12487 = (object)DBL_PTR(_old_hash_12487)->dbl;
    }
    _6954 = NOVALUE;
L2: 

    /** map.e:596			the_map_seq[MAP_SIZE] += 1*/
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    _6956 = (object)*(((s1_ptr)_2)->base + 1);
    if (IS_ATOM_INT(_6956)) {
        _6957 = _6956 + 1;
        if (_6957 > MAXINT){
            _6957 = NewDouble((eudouble)_6957);
        }
    }
    else
    _6957 = binary_op(PLUS, 1, _6956);
    _6956 = NOVALUE;
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12481 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _6957;
    if( _1 != _6957 ){
        DeRef(_1);
    }
    _6957 = NOVALUE;
L1: 

    /** map.e:599		the_map_seq[MAP_SLOTS] = 0*/
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12481 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);

    /** map.e:601		switch op do*/
    if (IS_SEQUENCE(_op_12476) ){
        goto L3; // [150] 532
    }
    if(!IS_ATOM_INT(_op_12476)){
        if( (DBL_PTR(_op_12476)->dbl != (eudouble) ((object) DBL_PTR(_op_12476)->dbl) ) ){
            goto L3; // [150] 532
        }
        _0 = (object) DBL_PTR(_op_12476)->dbl;
    }
    else {
        _0 = _op_12476;
    };
    switch ( _0 ){ 

        /** map.e:602			case PUT then*/
        case 1:

        /** map.e:603				slots[index] = { hashval, key, val }*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        Ref(_val_12475);
        ((intptr_t*)_2)[3] = _val_12475;
        _6960 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6960;
        if( _1 != _6960 ){
            DeRef(_1);
        }
        _6960 = NOVALUE;
        goto L4; // [171] 555

        /** map.e:604			case ADD then*/
        case 2:

        /** map.e:605				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto L5; // [179] 198

        /** map.e:606					slots[index] = { hashval, key, val }*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        Ref(_val_12475);
        ((intptr_t*)_2)[3] = _val_12475;
        _6962 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6962;
        if( _1 != _6962 ){
            DeRef(_1);
        }
        _6962 = NOVALUE;
        goto L4; // [195] 555
L5: 

        /** map.e:608					slots[index] = { hashval, key, val + slots[index][SLOT_VALUE] }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6963 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6963);
        _6964 = (object)*(((s1_ptr)_2)->base + 3);
        _6963 = NOVALUE;
        if (IS_ATOM_INT(_val_12475) && IS_ATOM_INT(_6964)) {
            _6965 = _val_12475 + _6964;
            if ((object)((uintptr_t)_6965 + (uintptr_t)HIGH_BITS) >= 0){
                _6965 = NewDouble((eudouble)_6965);
            }
        }
        else {
            _6965 = binary_op(PLUS, _val_12475, _6964);
        }
        _6964 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6965;
        _6966 = MAKE_SEQ(_1);
        _6965 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6966;
        if( _1 != _6966 ){
            DeRef(_1);
        }
        _6966 = NOVALUE;
        goto L4; // [223] 555

        /** map.e:610			case SUBTRACT then*/
        case 3:

        /** map.e:611				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto L6; // [231] 250

        /** map.e:612					slots[index] = { hashval, key, val }*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        Ref(_val_12475);
        ((intptr_t*)_2)[3] = _val_12475;
        _6968 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6968;
        if( _1 != _6968 ){
            DeRef(_1);
        }
        _6968 = NOVALUE;
        goto L4; // [247] 555
L6: 

        /** map.e:614					slots[index] = { hashval, key, slots[index][SLOT_VALUE] - val }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6969 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6969);
        _6970 = (object)*(((s1_ptr)_2)->base + 3);
        _6969 = NOVALUE;
        if (IS_ATOM_INT(_6970) && IS_ATOM_INT(_val_12475)) {
            _6971 = _6970 - _val_12475;
            if ((object)((uintptr_t)_6971 +(uintptr_t) HIGH_BITS) >= 0){
                _6971 = NewDouble((eudouble)_6971);
            }
        }
        else {
            _6971 = binary_op(MINUS, _6970, _val_12475);
        }
        _6970 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6971;
        _6972 = MAKE_SEQ(_1);
        _6971 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6972;
        if( _1 != _6972 ){
            DeRef(_1);
        }
        _6972 = NOVALUE;
        goto L4; // [275] 555

        /** map.e:617			case MULTIPLY then*/
        case 4:

        /** map.e:618				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto L7; // [283] 310

        /** map.e:619					error:crash("Inappropriate initial operation given to map.e:put()")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_288_12530);
        _msg_inlined_crash_at_288_12530 = EPrintf(-9999999, _6974, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_288_12530);

        /** error.e:53	end procedure*/
        goto L8; // [302] 305
L8: 
        DeRefi(_msg_inlined_crash_at_288_12530);
        _msg_inlined_crash_at_288_12530 = NOVALUE;
        goto L4; // [307] 555
L7: 

        /** map.e:621					slots[index] = { hashval, key, val * slots[index][SLOT_VALUE] }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6975 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6975);
        _6976 = (object)*(((s1_ptr)_2)->base + 3);
        _6975 = NOVALUE;
        if (IS_ATOM_INT(_val_12475) && IS_ATOM_INT(_6976)) {
            if (_val_12475 == (short)_val_12475 && _6976 <= INT15 && _6976 >= -INT15){
                _6977 = _val_12475 * _6976;
            }
            else{
                _6977 = NewDouble(_val_12475 * (eudouble)_6976);
            }
        }
        else {
            _6977 = binary_op(MULTIPLY, _val_12475, _6976);
        }
        _6976 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6977;
        _6978 = MAKE_SEQ(_1);
        _6977 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6978;
        if( _1 != _6978 ){
            DeRef(_1);
        }
        _6978 = NOVALUE;
        goto L4; // [335] 555

        /** map.e:624			case DIVIDE then*/
        case 5:

        /** map.e:625				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto L9; // [343] 370

        /** map.e:626					error:crash("Inappropriate initial operation given to map.e:put()")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_348_12540);
        _msg_inlined_crash_at_348_12540 = EPrintf(-9999999, _6974, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_348_12540);

        /** error.e:53	end procedure*/
        goto LA; // [362] 365
LA: 
        DeRefi(_msg_inlined_crash_at_348_12540);
        _msg_inlined_crash_at_348_12540 = NOVALUE;
        goto L4; // [367] 555
L9: 

        /** map.e:628					slots[index] = { hashval, key, slots[index][SLOT_VALUE] / val }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6980 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6980);
        _6981 = (object)*(((s1_ptr)_2)->base + 3);
        _6980 = NOVALUE;
        if (IS_ATOM_INT(_6981) && IS_ATOM_INT(_val_12475)) {
            _6982 = (_6981 % _val_12475) ? NewDouble((eudouble)_6981 / _val_12475) : (_6981 / _val_12475);
        }
        else {
            _6982 = binary_op(DIVIDE, _6981, _val_12475);
        }
        _6981 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6982;
        _6983 = MAKE_SEQ(_1);
        _6982 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6983;
        if( _1 != _6983 ){
            DeRef(_1);
        }
        _6983 = NOVALUE;
        goto L4; // [395] 555

        /** map.e:631			case APPEND then*/
        case 6:

        /** map.e:632				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto LB; // [403] 426

        /** map.e:633					slots[index] = { hashval, key, {val} }*/
        _1 = NewS1(1);
        _2 = (object)((s1_ptr)_1)->base;
        Ref(_val_12475);
        ((intptr_t*)_2)[1] = _val_12475;
        _6985 = MAKE_SEQ(_1);
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6985;
        _6986 = MAKE_SEQ(_1);
        _6985 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6986;
        if( _1 != _6986 ){
            DeRef(_1);
        }
        _6986 = NOVALUE;
        goto L4; // [423] 555
LB: 

        /** map.e:635					slots[index] = { hashval, key, append( slots[index][SLOT_VALUE], val ) }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6987 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6987);
        _6988 = (object)*(((s1_ptr)_2)->base + 3);
        _6987 = NOVALUE;
        Ref(_val_12475);
        Append(&_6989, _6988, _val_12475);
        _6988 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6989;
        _6990 = MAKE_SEQ(_1);
        _6989 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6990;
        if( _1 != _6990 ){
            DeRef(_1);
        }
        _6990 = NOVALUE;
        goto L4; // [451] 555

        /** map.e:638			case CONCAT then*/
        case 7:

        /** map.e:639				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto LC; // [459] 478

        /** map.e:640					slots[index] = { hashval, key, val }*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        Ref(_val_12475);
        ((intptr_t*)_2)[3] = _val_12475;
        _6992 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6992;
        if( _1 != _6992 ){
            DeRef(_1);
        }
        _6992 = NOVALUE;
        goto L4; // [475] 555
LC: 

        /** map.e:642					slots[index] = { hashval, key, slots[index][SLOT_VALUE] & val }*/
        _2 = (object)SEQ_PTR(_slots_12483);
        _6993 = (object)*(((s1_ptr)_2)->base + _index_12485);
        _2 = (object)SEQ_PTR(_6993);
        _6994 = (object)*(((s1_ptr)_2)->base + 3);
        _6993 = NOVALUE;
        if (IS_SEQUENCE(_6994) && IS_ATOM(_val_12475)) {
            Ref(_val_12475);
            Append(&_6995, _6994, _val_12475);
        }
        else if (IS_ATOM(_6994) && IS_SEQUENCE(_val_12475)) {
            Ref(_6994);
            Prepend(&_6995, _val_12475, _6994);
        }
        else {
            Concat((object_ptr)&_6995, _6994, _val_12475);
            _6994 = NOVALUE;
        }
        _6994 = NOVALUE;
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        ((intptr_t*)_2)[3] = _6995;
        _6996 = MAKE_SEQ(_1);
        _6995 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6996;
        if( _1 != _6996 ){
            DeRef(_1);
        }
        _6996 = NOVALUE;
        goto L4; // [503] 555

        /** map.e:645			case LEAVE then*/
        case 8:

        /** map.e:646				if old_hash < 0 then*/
        if (_old_hash_12487 >= 0)
        goto L4; // [511] 555

        /** map.e:647					slots[index] = { hashval, key, val }*/
        _1 = NewS1(3);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t*)_2)[1] = _hashval_12478;
        Ref(_key_12474);
        ((intptr_t*)_2)[2] = _key_12474;
        Ref(_val_12475);
        ((intptr_t*)_2)[3] = _val_12475;
        _6998 = MAKE_SEQ(_1);
        _2 = (object)SEQ_PTR(_slots_12483);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _slots_12483 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _index_12485);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _6998;
        if( _1 != _6998 ){
            DeRef(_1);
        }
        _6998 = NOVALUE;
        goto L4; // [528] 555

        /** map.e:649			case else*/
        default:
L3: 

        /** map.e:650				error:crash("Unknown operation given to map.e:put()")*/

        /** error.e:51		msg = sprintf(fmt, data)*/
        DeRefi(_msg_inlined_crash_at_535_12572);
        _msg_inlined_crash_at_535_12572 = EPrintf(-9999999, _6999, _5);

        /** error.e:52		machine_proc(M_CRASH, msg)*/
        machine(67, _msg_inlined_crash_at_535_12572);

        /** error.e:53	end procedure*/
        goto LD; // [549] 552
LD: 
        DeRefi(_msg_inlined_crash_at_535_12572);
        _msg_inlined_crash_at_535_12572 = NOVALUE;
    ;}L4: 

    /** map.e:654		the_map_seq[MAP_SLOTS] = slots*/
    RefDS(_slots_12483);
    _2 = (object)SEQ_PTR(_the_map_seq_12481);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _the_map_seq_12481 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _slots_12483;
    DeRef(_1);

    /** map.e:655		eumem:ram_space[the_map_p] = the_map_seq*/
    RefDS(_the_map_seq_12481);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12473))
    _2 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12473)->dbl));
    else
    _2 = (object)(((s1_ptr)_2)->base + _the_map_p_12473);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _the_map_seq_12481;
    DeRef(_1);

    /** map.e:656	end procedure*/
    DeRef(_the_map_p_12473);
    DeRef(_key_12474);
    DeRef(_val_12475);
    DeRef(_op_12476);
    DeRefDS(_the_map_seq_12481);
    DeRefDS(_slots_12483);
    return;
    ;
}


void _30nested_put(object _the_map_p_12575, object _the_keys_p_12576, object _the_value_p_12577, object _operation_p_12578, object _deprecated_trigger_p_12579)
{
    object _temp_map__12580 = NOVALUE;
    object _7010 = NOVALUE;
    object _7009 = NOVALUE;
    object _7008 = NOVALUE;
    object _7007 = NOVALUE;
    object _7006 = NOVALUE;
    object _7004 = NOVALUE;
    object _7003 = NOVALUE;
    object _7002 = NOVALUE;
    object _7000 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:701		if length( the_keys_p ) = 1 then*/
    if (IS_SEQUENCE(_the_keys_p_12576)){
            _7000 = SEQ_PTR(_the_keys_p_12576)->length;
    }
    else {
        _7000 = 1;
    }
    if (_7000 != 1)
    goto L1; // [10] 30

    /** map.e:702			put( the_map_p, the_keys_p[1], the_value_p, operation_p )*/
    _2 = (object)SEQ_PTR(_the_keys_p_12576);
    _7002 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_the_map_p_12575);
    Ref(_7002);
    Ref(_the_value_p_12577);
    _30put(_the_map_p_12575, _7002, _the_value_p_12577, _operation_p_12578, 0);
    _7002 = NOVALUE;
    goto L2; // [27] 84
L1: 

    /** map.e:704			temp_map_ = new_extra( get( the_map_p, the_keys_p[1] ) )*/
    _2 = (object)SEQ_PTR(_the_keys_p_12576);
    _7003 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_the_map_p_12575);
    Ref(_7003);
    _7004 = _30get(_the_map_p_12575, _7003, 0);
    _7003 = NOVALUE;
    _0 = _temp_map__12580;
    _temp_map__12580 = _30new_extra(_7004, 8);
    DeRef(_0);
    _7004 = NOVALUE;

    /** map.e:705			nested_put( temp_map_, the_keys_p[2..$], the_value_p, operation_p )*/
    if (IS_SEQUENCE(_the_keys_p_12576)){
            _7006 = SEQ_PTR(_the_keys_p_12576)->length;
    }
    else {
        _7006 = 1;
    }
    rhs_slice_target = (object_ptr)&_7007;
    RHS_Slice(_the_keys_p_12576, 2, _7006);
    Ref(_the_value_p_12577);
    DeRef(_7008);
    _7008 = _the_value_p_12577;
    DeRef(_7009);
    _7009 = _operation_p_12578;
    Ref(_temp_map__12580);
    _30nested_put(_temp_map__12580, _7007, _7008, _7009, 0);
    _7007 = NOVALUE;
    _7008 = NOVALUE;
    _7009 = NOVALUE;

    /** map.e:706			put( the_map_p, the_keys_p[1], temp_map_, PUT )*/
    _2 = (object)SEQ_PTR(_the_keys_p_12576);
    _7010 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_the_map_p_12575);
    Ref(_7010);
    Ref(_temp_map__12580);
    _30put(_the_map_p_12575, _7010, _temp_map__12580, 1, 0);
    _7010 = NOVALUE;
L2: 

    /** map.e:708	end procedure*/
    DeRef(_the_map_p_12575);
    DeRefDS(_the_keys_p_12576);
    DeRef(_the_value_p_12577);
    DeRef(_temp_map__12580);
    return;
    ;
}


void _30remove(object _the_map_p_12596, object _key_12597)
{
    object _hashval_12598 = NOVALUE;
    object _hash_inlined_hash_at_2_12600 = NOVALUE;
    object _slots_12601 = NOVALUE;
    object _index_12604 = NOVALUE;
    object _7022 = NOVALUE;
    object _7021 = NOVALUE;
    object _7019 = NOVALUE;
    object _7017 = NOVALUE;
    object _7015 = NOVALUE;
    object _7014 = NOVALUE;
    object _7011 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** map.e:735		integer hashval = hash( key )*/

    /** map.e:107		return eu:hash( x, DEFAULT_HASH )*/
    _hashval_12598 = calc_hash(_key_12597, -6);

    /** map.e:736		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12596)){
        _7011 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12596)->dbl));
    }
    else{
        _7011 = (object)*(((s1_ptr)_2)->base + _the_map_p_12596);
    }
    DeRef(_slots_12601);
    _2 = (object)SEQ_PTR(_7011);
    _slots_12601 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12601);
    _7011 = NOVALUE;

    /** map.e:738		integer index = lookup( key, hashval, slots )*/
    Ref(_key_12597);
    RefDS(_slots_12601);
    _index_12604 = _30lookup(_key_12597, _hashval_12598, _slots_12601);
    if (!IS_ATOM_INT(_index_12604)) {
        _1 = (object)(DBL_PTR(_index_12604)->dbl);
        DeRefDS(_index_12604);
        _index_12604 = _1;
    }

    /** map.e:739		if hashval = slots[index][SLOT_HASH] then*/
    _2 = (object)SEQ_PTR(_slots_12601);
    _7014 = (object)*(((s1_ptr)_2)->base + _index_12604);
    _2 = (object)SEQ_PTR(_7014);
    _7015 = (object)*(((s1_ptr)_2)->base + 1);
    _7014 = NOVALUE;
    if (binary_op_a(NOTEQ, _hashval_12598, _7015)){
        _7015 = NOVALUE;
        goto L1; // [46] 99
    }
    _7015 = NOVALUE;

    /** map.e:740			slots = {}*/
    RefDS(_5);
    DeRefDS(_slots_12601);
    _slots_12601 = _5;

    /** map.e:741			eumem:ram_space[the_map_p][MAP_SLOTS][index] = REMOVED_SLOT*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12596))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12596)->dbl));
    else
    _3 = (object)(_the_map_p_12596 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(object_ptr)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(object_ptr)_3 = MAKE_SEQ(_2);
    }
    _3 = (object)(2 + ((s1_ptr)_2)->base);
    _7017 = NOVALUE;
    RefDS(_30REMOVED_SLOT_12213);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + _index_12604);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _30REMOVED_SLOT_12213;
    DeRef(_1);
    _7017 = NOVALUE;

    /** map.e:742			eumem:ram_space[the_map_p][MAP_SIZE] -= 1*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12596))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12596)->dbl));
    else
    _3 = (object)(_the_map_p_12596 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    _7021 = (object)*(((s1_ptr)_2)->base + 1);
    _7019 = NOVALUE;
    if (IS_ATOM_INT(_7021)) {
        _7022 = _7021 - 1;
        if ((object)((uintptr_t)_7022 +(uintptr_t) HIGH_BITS) >= 0){
            _7022 = NewDouble((eudouble)_7022);
        }
    }
    else {
        _7022 = binary_op(MINUS, _7021, 1);
    }
    _7021 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7022;
    if( _1 != _7022 ){
        DeRef(_1);
    }
    _7022 = NOVALUE;
    _7019 = NOVALUE;
L1: 

    /** map.e:744	end procedure*/
    DeRef(_the_map_p_12596);
    DeRef(_key_12597);
    DeRef(_slots_12601);
    return;
    ;
}


void _30clear(object _the_map_p_12618)
{
    object _7029 = NOVALUE;
    object _7028 = NOVALUE;
    object _7027 = NOVALUE;
    object _7026 = NOVALUE;
    object _7025 = NOVALUE;
    object _7023 = NOVALUE;
    object _0, _1, _2, _3;
    

    /** map.e:773		eumem:ram_space[the_map_p][MAP_SLOTS] = repeat( EMPTY_SLOT, length( eumem:ram_space[the_map_p][MAP_SLOTS] ) )*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12618))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12618)->dbl));
    else
    _3 = (object)(_the_map_p_12618 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12618)){
        _7025 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12618)->dbl));
    }
    else{
        _7025 = (object)*(((s1_ptr)_2)->base + _the_map_p_12618);
    }
    _2 = (object)SEQ_PTR(_7025);
    _7026 = (object)*(((s1_ptr)_2)->base + 2);
    _7025 = NOVALUE;
    if (IS_SEQUENCE(_7026)){
            _7027 = SEQ_PTR(_7026)->length;
    }
    else {
        _7027 = 1;
    }
    _7026 = NOVALUE;
    _7028 = Repeat(_30EMPTY_SLOT_12211, _7027);
    _7027 = NOVALUE;
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 2);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = _7028;
    if( _1 != _7028 ){
        DeRef(_1);
    }
    _7028 = NOVALUE;
    _7023 = NOVALUE;

    /** map.e:774		eumem:ram_space[the_map_p][MAP_SIZE]  = 0*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        _31ram_space_11461 = MAKE_SEQ(_2);
    }
    if (!IS_ATOM_INT(_the_map_p_12618))
    _3 = (object)(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12618)->dbl));
    else
    _3 = (object)(_the_map_p_12618 + ((s1_ptr)_2)->base);
    _2 = (object)SEQ_PTR(*(intptr_t *)_3);
    if (!UNIQUE(_2)) {
        _2 = (object)SequenceCopy((s1_ptr)_2);
        *(intptr_t *)_3 = MAKE_SEQ(_2);
    }
    _2 = (object)(((s1_ptr)_2)->base + 1);
    _1 = *(intptr_t *)_2;
    *(intptr_t *)_2 = 0;
    DeRef(_1);
    _7029 = NOVALUE;

    /** map.e:775	end procedure*/
    DeRef(_the_map_p_12618);
    _7026 = NOVALUE;
    return;
    ;
}


object _30keys(object _the_map_p_12673, object _sorted_result_12674)
{
    object _slots_12675 = NOVALUE;
    object _keys_12678 = NOVALUE;
    object _kx_12682 = NOVALUE;
    object _7060 = NOVALUE;
    object _7058 = NOVALUE;
    object _7057 = NOVALUE;
    object _7056 = NOVALUE;
    object _7053 = NOVALUE;
    object _7052 = NOVALUE;
    object _7051 = NOVALUE;
    object _7049 = NOVALUE;
    object _7048 = NOVALUE;
    object _7046 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:903		sequence slots = eumem:ram_space[the_map_p][MAP_SLOTS]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12673)){
        _7046 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12673)->dbl));
    }
    else{
        _7046 = (object)*(((s1_ptr)_2)->base + _the_map_p_12673);
    }
    DeRef(_slots_12675);
    _2 = (object)SEQ_PTR(_7046);
    _slots_12675 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12675);
    _7046 = NOVALUE;

    /** map.e:904		sequence keys = repeat( 0, eumem:ram_space[the_map_p][MAP_SIZE] )*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_p_12673)){
        _7048 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_p_12673)->dbl));
    }
    else{
        _7048 = (object)*(((s1_ptr)_2)->base + _the_map_p_12673);
    }
    _2 = (object)SEQ_PTR(_7048);
    _7049 = (object)*(((s1_ptr)_2)->base + 1);
    _7048 = NOVALUE;
    DeRef(_keys_12678);
    _keys_12678 = Repeat(0, _7049);
    _7049 = NOVALUE;

    /** map.e:905		integer kx = 0*/
    _kx_12682 = 0;

    /** map.e:906		for i = 1 to length( slots ) do*/
    if (IS_SEQUENCE(_slots_12675)){
            _7051 = SEQ_PTR(_slots_12675)->length;
    }
    else {
        _7051 = 1;
    }
    {
        object _i_12684;
        _i_12684 = 1;
L1: 
        if (_i_12684 > _7051){
            goto L2; // [43] 106
        }

        /** map.e:907			if slots[i][SLOT_HASH] >= 0 then*/
        _2 = (object)SEQ_PTR(_slots_12675);
        _7052 = (object)*(((s1_ptr)_2)->base + _i_12684);
        _2 = (object)SEQ_PTR(_7052);
        _7053 = (object)*(((s1_ptr)_2)->base + 1);
        _7052 = NOVALUE;
        if (binary_op_a(LESS, _7053, 0)){
            _7053 = NOVALUE;
            goto L3; // [60] 99
        }
        _7053 = NOVALUE;

        /** map.e:908				kx += 1*/
        _kx_12682 = _kx_12682 + 1;

        /** map.e:909				keys[kx] = slots[i][SLOT_KEY]*/
        _2 = (object)SEQ_PTR(_slots_12675);
        _7056 = (object)*(((s1_ptr)_2)->base + _i_12684);
        _2 = (object)SEQ_PTR(_7056);
        _7057 = (object)*(((s1_ptr)_2)->base + 2);
        _7056 = NOVALUE;
        Ref(_7057);
        _2 = (object)SEQ_PTR(_keys_12678);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _keys_12678 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _kx_12682);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7057;
        if( _1 != _7057 ){
            DeRef(_1);
        }
        _7057 = NOVALUE;

        /** map.e:910				if kx = length( keys ) then*/
        if (IS_SEQUENCE(_keys_12678)){
                _7058 = SEQ_PTR(_keys_12678)->length;
        }
        else {
            _7058 = 1;
        }
        if (_kx_12682 != _7058)
        goto L4; // [89] 98

        /** map.e:911					exit*/
        goto L2; // [95] 106
L4: 
L3: 

        /** map.e:914		end for*/
        _i_12684 = _i_12684 + 1;
        goto L1; // [101] 50
L2: 
        ;
    }

    /** map.e:915		if sorted_result then*/
    if (_sorted_result_12674 == 0)
    {
        goto L5; // [108] 123
    }
    else{
    }

    /** map.e:916			return stdsort:sort( keys )*/
    RefDS(_keys_12678);
    _7060 = _23sort(_keys_12678, 1);
    DeRef(_the_map_p_12673);
    DeRef(_slots_12675);
    DeRefDS(_keys_12678);
    return _7060;
L5: 

    /** map.e:918		return keys*/
    DeRef(_the_map_p_12673);
    DeRef(_slots_12675);
    DeRef(_7060);
    _7060 = NOVALUE;
    return _keys_12678;
    ;
}


object _30pairs(object _the_map_12749, object _sorted_result_12750)
{
    object _slots_12751 = NOVALUE;
    object _pairs_12754 = NOVALUE;
    object _px_12758 = NOVALUE;
    object _7110 = NOVALUE;
    object _7108 = NOVALUE;
    object _7107 = NOVALUE;
    object _7106 = NOVALUE;
    object _7105 = NOVALUE;
    object _7104 = NOVALUE;
    object _7103 = NOVALUE;
    object _7100 = NOVALUE;
    object _7099 = NOVALUE;
    object _7098 = NOVALUE;
    object _7096 = NOVALUE;
    object _7095 = NOVALUE;
    object _7093 = NOVALUE;
    object _0, _1, _2;
    

    /** map.e:1047		sequence slots = eumem:ram_space[the_map][MAP_SLOTS]*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_12749)){
        _7093 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12749)->dbl));
    }
    else{
        _7093 = (object)*(((s1_ptr)_2)->base + _the_map_12749);
    }
    DeRef(_slots_12751);
    _2 = (object)SEQ_PTR(_7093);
    _slots_12751 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_slots_12751);
    _7093 = NOVALUE;

    /** map.e:1048		sequence pairs = repeat( 0, eumem:ram_space[the_map][MAP_SIZE] )*/
    _2 = (object)SEQ_PTR(_31ram_space_11461);
    if (!IS_ATOM_INT(_the_map_12749)){
        _7095 = (object)*(((s1_ptr)_2)->base + (object)(DBL_PTR(_the_map_12749)->dbl));
    }
    else{
        _7095 = (object)*(((s1_ptr)_2)->base + _the_map_12749);
    }
    _2 = (object)SEQ_PTR(_7095);
    _7096 = (object)*(((s1_ptr)_2)->base + 1);
    _7095 = NOVALUE;
    DeRef(_pairs_12754);
    _pairs_12754 = Repeat(0, _7096);
    _7096 = NOVALUE;

    /** map.e:1049		integer px = 0*/
    _px_12758 = 0;

    /** map.e:1050		for i = 1 to length( slots ) do*/
    if (IS_SEQUENCE(_slots_12751)){
            _7098 = SEQ_PTR(_slots_12751)->length;
    }
    else {
        _7098 = 1;
    }
    {
        object _i_12760;
        _i_12760 = 1;
L1: 
        if (_i_12760 > _7098){
            goto L2; // [43] 118
        }

        /** map.e:1051			if slots[i][SLOT_HASH] >= 0 then*/
        _2 = (object)SEQ_PTR(_slots_12751);
        _7099 = (object)*(((s1_ptr)_2)->base + _i_12760);
        _2 = (object)SEQ_PTR(_7099);
        _7100 = (object)*(((s1_ptr)_2)->base + 1);
        _7099 = NOVALUE;
        if (binary_op_a(LESS, _7100, 0)){
            _7100 = NOVALUE;
            goto L3; // [60] 111
        }
        _7100 = NOVALUE;

        /** map.e:1052				px += 1*/
        _px_12758 = _px_12758 + 1;

        /** map.e:1053				pairs[px] = { slots[i][SLOT_KEY], slots[i][SLOT_VALUE] }*/
        _2 = (object)SEQ_PTR(_slots_12751);
        _7103 = (object)*(((s1_ptr)_2)->base + _i_12760);
        _2 = (object)SEQ_PTR(_7103);
        _7104 = (object)*(((s1_ptr)_2)->base + 2);
        _7103 = NOVALUE;
        _2 = (object)SEQ_PTR(_slots_12751);
        _7105 = (object)*(((s1_ptr)_2)->base + _i_12760);
        _2 = (object)SEQ_PTR(_7105);
        _7106 = (object)*(((s1_ptr)_2)->base + 3);
        _7105 = NOVALUE;
        Ref(_7106);
        Ref(_7104);
        _1 = NewS1(2);
        _2 = (object)((s1_ptr)_1)->base;
        ((intptr_t *)_2)[1] = _7104;
        ((intptr_t *)_2)[2] = _7106;
        _7107 = MAKE_SEQ(_1);
        _7106 = NOVALUE;
        _7104 = NOVALUE;
        _2 = (object)SEQ_PTR(_pairs_12754);
        if (!UNIQUE(_2)) {
            _2 = (object)SequenceCopy((s1_ptr)_2);
            _pairs_12754 = MAKE_SEQ(_2);
        }
        _2 = (object)(((s1_ptr)_2)->base + _px_12758);
        _1 = *(intptr_t *)_2;
        *(intptr_t *)_2 = _7107;
        if( _1 != _7107 ){
            DeRef(_1);
        }
        _7107 = NOVALUE;

        /** map.e:1054				if px = length( pairs ) then*/
        if (IS_SEQUENCE(_pairs_12754)){
                _7108 = SEQ_PTR(_pairs_12754)->length;
        }
        else {
            _7108 = 1;
        }
        if (_px_12758 != _7108)
        goto L4; // [101] 110

        /** map.e:1055					exit*/
        goto L2; // [107] 118
L4: 
L3: 

        /** map.e:1058		end for*/
        _i_12760 = _i_12760 + 1;
        goto L1; // [113] 50
L2: 
        ;
    }

    /** map.e:1059		if sorted_result then*/
    if (_sorted_result_12750 == 0)
    {
        goto L5; // [120] 135
    }
    else{
    }

    /** map.e:1060			return stdsort:sort( pairs )*/
    RefDS(_pairs_12754);
    _7110 = _23sort(_pairs_12754, 1);
    DeRef(_the_map_12749);
    DeRef(_slots_12751);
    DeRefDS(_pairs_12754);
    return _7110;
L5: 

    /** map.e:1062		return pairs*/
    DeRef(_the_map_12749);
    DeRef(_slots_12751);
    DeRef(_7110);
    _7110 = NOVALUE;
    return _pairs_12754;
    ;
}



// 0x8E4A8E26
