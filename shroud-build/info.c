// Euphoria To C version 4.0.4  (11a49820121f, 2012-04-02)
#include "include/euphoria.h"
#include "main-.h"

object _27arch_bits()
{
    object _6364 = NOVALUE;
    object _6363 = NOVALUE;
    object _6362 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:72		return sprintf( "%d-bit", 8 * sizeof( C_POINTER ) )*/
    _6362 = eu_sizeof( 50331649 );
    if (_6362 <= INT15){
        _6363 = 8 * _6362;
    }
    else{
        _6363 = NewDouble(8 * (eudouble)_6362);
    }
    _6362 = NOVALUE;
    _6364 = EPrintf(-9999999, _6361, _6363);
    DeRef(_6363);
    _6363 = NOVALUE;
    return _6364;
    ;
}


object _27version_major()
{
    object _6373 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:100		return version_info[MAJ_VER]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6373 = (object)*(((s1_ptr)_2)->base + 1);
    Ref(_6373);
    return _6373;
    ;
}


object _27version_minor()
{
    object _6374 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:112		return version_info[MIN_VER]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6374 = (object)*(((s1_ptr)_2)->base + 2);
    Ref(_6374);
    return _6374;
    ;
}


object _27version_patch()
{
    object _6375 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:124		return version_info[PAT_VER]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6375 = (object)*(((s1_ptr)_2)->base + 3);
    Ref(_6375);
    return _6375;
    ;
}


object _27version_node(object _full_11362)
{
    object _6382 = NOVALUE;
    object _6381 = NOVALUE;
    object _6380 = NOVALUE;
    object _6379 = NOVALUE;
    object _6378 = NOVALUE;
    object _6377 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:141		if full or length(version_info[NODE]) < 12 then*/
    if (0 != 0) {
        goto L1; // [5] 27
    }
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6377 = (object)*(((s1_ptr)_2)->base + 5);
    if (IS_SEQUENCE(_6377)){
            _6378 = SEQ_PTR(_6377)->length;
    }
    else {
        _6378 = 1;
    }
    _6377 = NOVALUE;
    _6379 = (_6378 < 12);
    _6378 = NOVALUE;
    if (_6379 == 0)
    {
        DeRef(_6379);
        _6379 = NOVALUE;
        goto L2; // [23] 40
    }
    else{
        DeRef(_6379);
        _6379 = NOVALUE;
    }
L1: 

    /** info.e:142			return version_info[NODE]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6380 = (object)*(((s1_ptr)_2)->base + 5);
    Ref(_6380);
    _6377 = NOVALUE;
    return _6380;
L2: 

    /** info.e:145		return version_info[NODE][1..12]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6381 = (object)*(((s1_ptr)_2)->base + 5);
    rhs_slice_target = (object_ptr)&_6382;
    RHS_Slice(_6381, 1, 12);
    _6381 = NOVALUE;
    _6377 = NOVALUE;
    _6380 = NOVALUE;
    return _6382;
    ;
}


object _27version_date(object _full_11376)
{
    object _6391 = NOVALUE;
    object _6390 = NOVALUE;
    object _6389 = NOVALUE;
    object _6388 = NOVALUE;
    object _6387 = NOVALUE;
    object _6386 = NOVALUE;
    object _6384 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:181		if full or is_developmental or length(version_info[REVISION_DATE]) < 10 then*/
    if (_full_11376 != 0) {
        _6384 = 1;
        goto L1; // [5] 15
    }
    _6384 = (_27is_developmental_11319 != 0);
L1: 
    if (_6384 != 0) {
        goto L2; // [15] 37
    }
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6386 = (object)*(((s1_ptr)_2)->base + 7);
    if (IS_SEQUENCE(_6386)){
            _6387 = SEQ_PTR(_6386)->length;
    }
    else {
        _6387 = 1;
    }
    _6386 = NOVALUE;
    _6388 = (_6387 < 10);
    _6387 = NOVALUE;
    if (_6388 == 0)
    {
        DeRef(_6388);
        _6388 = NOVALUE;
        goto L3; // [33] 50
    }
    else{
        DeRef(_6388);
        _6388 = NOVALUE;
    }
L2: 

    /** info.e:182			return version_info[REVISION_DATE]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6389 = (object)*(((s1_ptr)_2)->base + 7);
    Ref(_6389);
    _6386 = NOVALUE;
    return _6389;
L3: 

    /** info.e:185		return version_info[REVISION_DATE][1..10]*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6390 = (object)*(((s1_ptr)_2)->base + 7);
    rhs_slice_target = (object_ptr)&_6391;
    RHS_Slice(_6390, 1, 10);
    _6390 = NOVALUE;
    _6389 = NOVALUE;
    _6386 = NOVALUE;
    return _6391;
    ;
}


object _27version_string(object _full_11391)
{
    object _version_revision_inlined_version_revision_at_41_11400 = NOVALUE;
    object _6411 = NOVALUE;
    object _6410 = NOVALUE;
    object _6409 = NOVALUE;
    object _6408 = NOVALUE;
    object _6407 = NOVALUE;
    object _6406 = NOVALUE;
    object _6405 = NOVALUE;
    object _6404 = NOVALUE;
    object _6402 = NOVALUE;
    object _6401 = NOVALUE;
    object _6400 = NOVALUE;
    object _6399 = NOVALUE;
    object _6398 = NOVALUE;
    object _6397 = NOVALUE;
    object _6396 = NOVALUE;
    object _6395 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:225		if full or is_developmental then*/
    if (0 != 0) {
        goto L1; // [5] 16
    }
    if (_27is_developmental_11319 == 0)
    {
        goto L2; // [12] 80
    }
    else{
    }
L1: 

    /** info.e:226			return sprintf("%d.%d.%d %s (%d:%s, %s)", {*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6395 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6396 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6397 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6398 = (object)*(((s1_ptr)_2)->base + 4);

    /** info.e:157		return version_info[REVISION]*/
    DeRef(_version_revision_inlined_version_revision_at_41_11400);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _version_revision_inlined_version_revision_at_41_11400 = (object)*(((s1_ptr)_2)->base + 6);
    Ref(_version_revision_inlined_version_revision_at_41_11400);
    _6399 = _27version_node(0);
    _6400 = _27version_date(_full_11391);
    _1 = NewS1(7);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6395);
    ((intptr_t*)_2)[1] = _6395;
    Ref(_6396);
    ((intptr_t*)_2)[2] = _6396;
    Ref(_6397);
    ((intptr_t*)_2)[3] = _6397;
    Ref(_6398);
    ((intptr_t*)_2)[4] = _6398;
    Ref(_version_revision_inlined_version_revision_at_41_11400);
    ((intptr_t*)_2)[5] = _version_revision_inlined_version_revision_at_41_11400;
    ((intptr_t*)_2)[6] = _6399;
    ((intptr_t*)_2)[7] = _6400;
    _6401 = MAKE_SEQ(_1);
    _6400 = NOVALUE;
    _6399 = NOVALUE;
    _6398 = NOVALUE;
    _6397 = NOVALUE;
    _6396 = NOVALUE;
    _6395 = NOVALUE;
    _6402 = EPrintf(-9999999, _6394, _6401);
    DeRefDS(_6401);
    _6401 = NOVALUE;
    return _6402;
    goto L3; // [77] 132
L2: 

    /** info.e:236			return sprintf("%d.%d.%d %s (%s, %s)", {*/
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6404 = (object)*(((s1_ptr)_2)->base + 1);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6405 = (object)*(((s1_ptr)_2)->base + 2);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6406 = (object)*(((s1_ptr)_2)->base + 3);
    _2 = (object)SEQ_PTR(_27version_info_11317);
    _6407 = (object)*(((s1_ptr)_2)->base + 4);
    _6408 = _27version_node(0);
    _6409 = _27version_date(_full_11391);
    _1 = NewS1(6);
    _2 = (object)((s1_ptr)_1)->base;
    Ref(_6404);
    ((intptr_t*)_2)[1] = _6404;
    Ref(_6405);
    ((intptr_t*)_2)[2] = _6405;
    Ref(_6406);
    ((intptr_t*)_2)[3] = _6406;
    Ref(_6407);
    ((intptr_t*)_2)[4] = _6407;
    ((intptr_t*)_2)[5] = _6408;
    ((intptr_t*)_2)[6] = _6409;
    _6410 = MAKE_SEQ(_1);
    _6409 = NOVALUE;
    _6408 = NOVALUE;
    _6407 = NOVALUE;
    _6406 = NOVALUE;
    _6405 = NOVALUE;
    _6404 = NOVALUE;
    _6411 = EPrintf(-9999999, _6403, _6410);
    DeRefDS(_6410);
    _6410 = NOVALUE;
    DeRef(_6402);
    _6402 = NOVALUE;
    return _6411;
L3: 
    ;
}


object _27version_string_long(object _full_11422)
{
    object _platform_name_inlined_platform_name_at_8_11426 = NOVALUE;
    object _6418 = NOVALUE;
    object _6417 = NOVALUE;
    object _6415 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:284		return version_string(full) & " for " & platform_name() & " " & arch_bits()*/
    _6415 = _27version_string(0);

    /** info.e:48		ifdef WINDOWS then*/

    /** info.e:51			return "Linux"*/
    RefDS(_6355);
    DeRefi(_platform_name_inlined_platform_name_at_8_11426);
    _platform_name_inlined_platform_name_at_8_11426 = _6355;
    _6417 = _27arch_bits();
    {
        object concat_list[5];

        concat_list[0] = _6417;
        concat_list[1] = _3558;
        concat_list[2] = _platform_name_inlined_platform_name_at_8_11426;
        concat_list[3] = _6416;
        concat_list[4] = _6415;
        Concat_N((object_ptr)&_6418, concat_list, 5);
    }
    DeRef(_6417);
    _6417 = NOVALUE;
    DeRef(_6415);
    _6415 = NOVALUE;
    return _6418;
    ;
}


object _27all_copyrights()
{
    object _pcre_copyright_inlined_pcre_copyright_at_19_11448 = NOVALUE;
    object _euphoria_copyright_2__tmp_at2_11446 = NOVALUE;
    object _euphoria_copyright_1__tmp_at2_11445 = NOVALUE;
    object _euphoria_copyright_inlined_euphoria_copyright_at_2_11444 = NOVALUE;
    object _6427 = NOVALUE;
    object _0, _1, _2;
    

    /** info.e:355		return {*/

    /** info.e:309		return {*/
    _0 = _euphoria_copyright_1__tmp_at2_11445;
    _euphoria_copyright_1__tmp_at2_11445 = _27version_string_long(0);
    DeRef(_0);
    if (IS_SEQUENCE(_6419) && IS_ATOM(_euphoria_copyright_1__tmp_at2_11445)) {
        Ref(_euphoria_copyright_1__tmp_at2_11445);
        Append(&_euphoria_copyright_2__tmp_at2_11446, _6419, _euphoria_copyright_1__tmp_at2_11445);
    }
    else if (IS_ATOM(_6419) && IS_SEQUENCE(_euphoria_copyright_1__tmp_at2_11445)) {
    }
    else {
        Concat((object_ptr)&_euphoria_copyright_2__tmp_at2_11446, _6419, _euphoria_copyright_1__tmp_at2_11445);
    }
    RefDS(_6422);
    RefDS(_euphoria_copyright_2__tmp_at2_11446);
    DeRef(_euphoria_copyright_inlined_euphoria_copyright_at_2_11444);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_2__tmp_at2_11446;
    ((intptr_t *)_2)[2] = _6422;
    _euphoria_copyright_inlined_euphoria_copyright_at_2_11444 = MAKE_SEQ(_1);
    DeRef(_euphoria_copyright_1__tmp_at2_11445);
    _euphoria_copyright_1__tmp_at2_11445 = NOVALUE;
    DeRef(_euphoria_copyright_2__tmp_at2_11446);
    _euphoria_copyright_2__tmp_at2_11446 = NOVALUE;

    /** info.e:331		return {*/
    RefDS(_6425);
    RefDS(_6424);
    DeRef(_pcre_copyright_inlined_pcre_copyright_at_19_11448);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _6424;
    ((intptr_t *)_2)[2] = _6425;
    _pcre_copyright_inlined_pcre_copyright_at_19_11448 = MAKE_SEQ(_1);
    RefDS(_pcre_copyright_inlined_pcre_copyright_at_19_11448);
    RefDS(_euphoria_copyright_inlined_euphoria_copyright_at_2_11444);
    _1 = NewS1(2);
    _2 = (object)((s1_ptr)_1)->base;
    ((intptr_t *)_2)[1] = _euphoria_copyright_inlined_euphoria_copyright_at_2_11444;
    ((intptr_t *)_2)[2] = _pcre_copyright_inlined_pcre_copyright_at_19_11448;
    _6427 = MAKE_SEQ(_1);
    return _6427;
    ;
}



// 0x5DBC01E2
